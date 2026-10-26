
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004dc0e0 <.text+0xdb0e0>:
  4dc0e0:	6a ff                	push   0xffffffff
  4dc0e2:	68 8d 20 63 00       	push   0x63208d
  4dc0e7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dc0ed:	50                   	push   eax
  4dc0ee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dc0f5:	81 ec 0c 02 00 00    	sub    esp,0x20c
  4dc0fb:	53                   	push   ebx
  4dc0fc:	56                   	push   esi
  4dc0fd:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4dc103:	8b d9                	mov    ebx,ecx
  4dc105:	85 f6                	test   esi,esi
  4dc107:	57                   	push   edi
  4dc108:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  4dc10c:	75 07                	jne    0x4dc115
  4dc10e:	e8 6d f1 07 00       	call   0x55b280
  4dc113:	8b f0                	mov    esi,eax
  4dc115:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4dc11b:	85 c0                	test   eax,eax
  4dc11d:	75 52                	jne    0x4dc171
  4dc11f:	8d 44 24 0f          	lea    eax,[esp+0xf]
  4dc123:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc127:	50                   	push   eax
  4dc128:	68 70 3f 6b 00       	push   0x6b3f70
  4dc12d:	e8 de d6 f2 ff       	call   0x409810
  4dc132:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc136:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0x0
  4dc13d:	00 00 00 00 
  4dc141:	51                   	push   ecx
  4dc142:	68 8f 01 00 00       	push   0x18f
  4dc147:	68 58 eb 68 00       	push   0x68eb58
  4dc14c:	68 ec f8 68 00       	push   0x68f8ec
  4dc151:	e8 9a 46 0c 00       	call   0x5a07f0
  4dc156:	ff d0                	call   eax
  4dc158:	83 c4 10             	add    esp,0x10
  4dc15b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc15f:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xffffffff
  4dc166:	ff ff ff ff 
  4dc16a:	6a 01                	push   0x1
  4dc16c:	e8 2f 7f f2 ff       	call   0x4040a0
  4dc171:	8b 84 24 2c 02 00 00 	mov    eax,DWORD PTR [esp+0x22c]
  4dc178:	8b 8c 24 28 02 00 00 	mov    ecx,DWORD PTR [esp+0x228]
  4dc17f:	8b b6 fc 00 00 00    	mov    esi,DWORD PTR [esi+0xfc]
  4dc185:	3b c1                	cmp    eax,ecx
  4dc187:	55                   	push   ebp
  4dc188:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  4dc18c:	0f 84 85 07 00 00    	je     0x4dc917
  4dc192:	83 f8 04             	cmp    eax,0x4
  4dc195:	0f 87 e5 06 00 00    	ja     0x4dc880
  4dc19b:	ff 24 85 60 ca 4d 00 	jmp    DWORD PTR [eax*4+0x4dca60]
  4dc1a2:	a0 74 92 6b 00       	mov    al,ds:0x6b9274
  4dc1a7:	b3 02                	mov    bl,0x2
  4dc1a9:	a8 01                	test   al,0x1
  4dc1ab:	0f 85 5d 01 00 00    	jne    0x4dc30e
  4dc1b1:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4dc1b5:	0c 01                	or     al,0x1
  4dc1b7:	6a 00                	push   0x0
  4dc1b9:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  4dc1bd:	a2 74 92 6b 00       	mov    ds:0x6b9274,al
  4dc1c2:	88 54 24 7c          	mov    BYTE PTR [esp+0x7c],dl
  4dc1c6:	e8 d5 7e f2 ff       	call   0x4040a0
  4dc1cb:	bf e0 02 69 00       	mov    edi,0x6902e0
  4dc1d0:	83 c9 ff             	or     ecx,0xffffffff
  4dc1d3:	33 c0                	xor    eax,eax
  4dc1d5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc1d7:	f7 d1                	not    ecx
  4dc1d9:	49                   	dec    ecx
  4dc1da:	51                   	push   ecx
  4dc1db:	68 e0 02 69 00       	push   0x6902e0
  4dc1e0:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4dc1e7:	e8 04 7f f2 ff       	call   0x4040f0
  4dc1ec:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4dc1f0:	6a 00                	push   0x0
  4dc1f2:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  4dc1f9:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0x1
  4dc200:	01 00 00 00 
  4dc204:	88 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],al
  4dc20b:	e8 90 7e f2 ff       	call   0x4040a0
  4dc210:	bf a4 9e 69 00       	mov    edi,0x699ea4
  4dc215:	83 c9 ff             	or     ecx,0xffffffff
  4dc218:	33 c0                	xor    eax,eax
  4dc21a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc21c:	f7 d1                	not    ecx
  4dc21e:	49                   	dec    ecx
  4dc21f:	51                   	push   ecx
  4dc220:	68 a4 9e 69 00       	push   0x699ea4
  4dc225:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  4dc22c:	e8 bf 7e f2 ff       	call   0x4040f0
  4dc231:	8d 8c 24 a8 00 00 00 	lea    ecx,[esp+0xa8]
  4dc238:	88 9c 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],bl
  4dc23f:	51                   	push   ecx
  4dc240:	e8 4b ad f5 ff       	call   0x436f90
  4dc245:	83 c4 04             	add    esp,0x4
  4dc248:	6a 00                	push   0x0
  4dc24a:	50                   	push   eax
  4dc24b:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  4dc252:	68 cd cc 4c 3d       	push   0x3d4ccccd
  4dc257:	8d 84 24 a4 00 00 00 	lea    eax,[esp+0xa4]
  4dc25e:	52                   	push   edx
  4dc25f:	50                   	push   eax
  4dc260:	8d 8c 24 ec 00 00 00 	lea    ecx,[esp+0xec]
  4dc267:	c6 84 24 38 02 00 00 	mov    BYTE PTR [esp+0x238],0x3
  4dc26e:	03 
  4dc26f:	e8 3c 06 0d 00       	call   0x5ac8b0
  4dc274:	8b f0                	mov    esi,eax
  4dc276:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc279:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dc27f:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x4
  4dc286:	04 
  4dc287:	df e0                	fnstsw ax
  4dc289:	f6 c4 40             	test   ah,0x40
  4dc28c:	74 16                	je     0x4dc2a4
  4dc28e:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4dc292:	8d 56 14             	lea    edx,[esi+0x14]
  4dc295:	51                   	push   ecx
  4dc296:	52                   	push   edx
  4dc297:	e8 f4 10 0d 00       	call   0x5ad390
  4dc29c:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc29f:	83 c4 08             	add    esp,0x8
  4dc2a2:	eb 03                	jmp    0x4dc2a7
  4dc2a4:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc2a7:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc2ab:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  4dc2b2:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x3
  4dc2b9:	03 
  4dc2ba:	d8 8e 94 01 00 00    	fmul   DWORD PTR [esi+0x194]
  4dc2c0:	d9 1d 70 92 6b 00    	fstp   DWORD PTR ds:0x6b9270
  4dc2c6:	e8 d5 09 0d 00       	call   0x5acca0
  4dc2cb:	6a 01                	push   0x1
  4dc2cd:	8d 8c 24 ac 00 00 00 	lea    ecx,[esp+0xac]
  4dc2d4:	88 9c 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],bl
  4dc2db:	e8 c0 7d f2 ff       	call   0x4040a0
  4dc2e0:	6a 01                	push   0x1
  4dc2e2:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  4dc2e9:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x1
  4dc2f0:	01 
  4dc2f1:	e8 aa 7d f2 ff       	call   0x4040a0
  4dc2f6:	6a 01                	push   0x1
  4dc2f8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  4dc2fc:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0xffffffff
  4dc303:	ff ff ff ff 
  4dc307:	e8 94 7d f2 ff       	call   0x4040a0
  4dc30c:	eb 04                	jmp    0x4dc312
  4dc30e:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc312:	a0 74 92 6b 00       	mov    al,ds:0x6b9274
  4dc317:	84 c3                	test   bl,al
  4dc319:	0f 85 5b 01 00 00    	jne    0x4dc47a
  4dc31f:	0a c3                	or     al,bl
  4dc321:	6a 00                	push   0x0
  4dc323:	a2 74 92 6b 00       	mov    ds:0x6b9274,al
  4dc328:	8a 44 24 17          	mov    al,BYTE PTR [esp+0x17]
  4dc32c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dc330:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  4dc334:	e8 67 7d f2 ff       	call   0x4040a0
  4dc339:	bf e0 02 69 00       	mov    edi,0x6902e0
  4dc33e:	83 c9 ff             	or     ecx,0xffffffff
  4dc341:	33 c0                	xor    eax,eax
  4dc343:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc345:	f7 d1                	not    ecx
  4dc347:	49                   	dec    ecx
  4dc348:	51                   	push   ecx
  4dc349:	68 e0 02 69 00       	push   0x6902e0
  4dc34e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4dc352:	e8 99 7d f2 ff       	call   0x4040f0
  4dc357:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4dc35b:	6a 00                	push   0x0
  4dc35d:	88 8c 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],cl
  4dc364:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  4dc36b:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0x5
  4dc372:	05 00 00 00 
  4dc376:	e8 25 7d f2 ff       	call   0x4040a0
  4dc37b:	bf 84 9e 69 00       	mov    edi,0x699e84
  4dc380:	83 c9 ff             	or     ecx,0xffffffff
  4dc383:	33 c0                	xor    eax,eax
  4dc385:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc387:	f7 d1                	not    ecx
  4dc389:	49                   	dec    ecx
  4dc38a:	51                   	push   ecx
  4dc38b:	68 84 9e 69 00       	push   0x699e84
  4dc390:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  4dc397:	e8 54 7d f2 ff       	call   0x4040f0
  4dc39c:	8d 94 24 b8 00 00 00 	lea    edx,[esp+0xb8]
  4dc3a3:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x6
  4dc3aa:	06 
  4dc3ab:	52                   	push   edx
  4dc3ac:	e8 df ab f5 ff       	call   0x436f90
  4dc3b1:	83 c4 04             	add    esp,0x4
  4dc3b4:	6a 00                	push   0x0
  4dc3b6:	50                   	push   eax
  4dc3b7:	8d 44 24 28          	lea    eax,[esp+0x28]
  4dc3bb:	68 00 00 00 40       	push   0x40000000
  4dc3c0:	8d 8c 24 94 00 00 00 	lea    ecx,[esp+0x94]
  4dc3c7:	50                   	push   eax
  4dc3c8:	b3 07                	mov    bl,0x7
  4dc3ca:	51                   	push   ecx
  4dc3cb:	8d 8c 24 58 01 00 00 	lea    ecx,[esp+0x158]
  4dc3d2:	88 9c 24 38 02 00 00 	mov    BYTE PTR [esp+0x238],bl
  4dc3d9:	e8 d2 04 0d 00       	call   0x5ac8b0
  4dc3de:	8b f0                	mov    esi,eax
  4dc3e0:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc3e3:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dc3e9:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x8
  4dc3f0:	08 
  4dc3f1:	df e0                	fnstsw ax
  4dc3f3:	f6 c4 40             	test   ah,0x40
  4dc3f6:	74 16                	je     0x4dc40e
  4dc3f8:	8d 54 24 13          	lea    edx,[esp+0x13]
  4dc3fc:	8d 46 14             	lea    eax,[esi+0x14]
  4dc3ff:	52                   	push   edx
  4dc400:	50                   	push   eax
  4dc401:	e8 8a 0f 0d 00       	call   0x5ad390
  4dc406:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc409:	83 c4 08             	add    esp,0x8
  4dc40c:	eb 03                	jmp    0x4dc411
  4dc40e:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc411:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4dc415:	88 9c 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],bl
  4dc41c:	d8 89 94 01 00 00    	fmul   DWORD PTR [ecx+0x194]
  4dc422:	8d 8c 24 44 01 00 00 	lea    ecx,[esp+0x144]
  4dc429:	d9 1d 6c 92 6b 00    	fstp   DWORD PTR ds:0x6b926c
  4dc42f:	e8 6c 08 0d 00       	call   0x5acca0
  4dc434:	6a 01                	push   0x1
  4dc436:	8d 8c 24 bc 00 00 00 	lea    ecx,[esp+0xbc]
  4dc43d:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x6
  4dc444:	06 
  4dc445:	e8 56 7c f2 ff       	call   0x4040a0
  4dc44a:	6a 01                	push   0x1
  4dc44c:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  4dc453:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x5
  4dc45a:	05 
  4dc45b:	e8 40 7c f2 ff       	call   0x4040a0
  4dc460:	6a 01                	push   0x1
  4dc462:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dc466:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0xffffffff
  4dc46d:	ff ff ff ff 
  4dc471:	e8 2a 7c f2 ff       	call   0x4040a0
  4dc476:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc47a:	a0 74 92 6b 00       	mov    al,ds:0x6b9274
  4dc47f:	a8 04                	test   al,0x4
  4dc481:	0f 85 8e 01 00 00    	jne    0x4dc615
  4dc487:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4dc48b:	0c 04                	or     al,0x4
  4dc48d:	6a 00                	push   0x0
  4dc48f:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc493:	a2 74 92 6b 00       	mov    ds:0x6b9274,al
  4dc498:	88 54 24 4c          	mov    BYTE PTR [esp+0x4c],dl
  4dc49c:	e8 ff 7b f2 ff       	call   0x4040a0
  4dc4a1:	bf e0 02 69 00       	mov    edi,0x6902e0
  4dc4a6:	83 c9 ff             	or     ecx,0xffffffff
  4dc4a9:	33 c0                	xor    eax,eax
  4dc4ab:	6a 01                	push   0x1
  4dc4ad:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc4af:	f7 d1                	not    ecx
  4dc4b1:	49                   	dec    ecx
  4dc4b2:	8b e9                	mov    ebp,ecx
  4dc4b4:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc4b8:	55                   	push   ebp
  4dc4b9:	e8 82 54 f2 ff       	call   0x401940
  4dc4be:	84 c0                	test   al,al
  4dc4c0:	74 23                	je     0x4dc4e5
  4dc4c2:	8b 7c 24 4c          	mov    edi,DWORD PTR [esp+0x4c]
  4dc4c6:	8b cd                	mov    ecx,ebp
  4dc4c8:	8b c1                	mov    eax,ecx
  4dc4ca:	be e0 02 69 00       	mov    esi,0x6902e0
  4dc4cf:	c1 e9 02             	shr    ecx,0x2
  4dc4d2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dc4d4:	8b c8                	mov    ecx,eax
  4dc4d6:	55                   	push   ebp
  4dc4d7:	83 e1 03             	and    ecx,0x3
  4dc4da:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dc4dc:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc4e0:	e8 ab 7c f2 ff       	call   0x404190
  4dc4e5:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4dc4e9:	6a 00                	push   0x0
  4dc4eb:	88 4c 24 5c          	mov    BYTE PTR [esp+0x5c],cl
  4dc4ef:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc4f3:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0x9
  4dc4fa:	09 00 00 00 
  4dc4fe:	e8 9d 7b f2 ff       	call   0x4040a0
  4dc503:	bf 6c 9e 69 00       	mov    edi,0x699e6c
  4dc508:	83 c9 ff             	or     ecx,0xffffffff
  4dc50b:	33 c0                	xor    eax,eax
  4dc50d:	6a 01                	push   0x1
  4dc50f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc511:	f7 d1                	not    ecx
  4dc513:	49                   	dec    ecx
  4dc514:	8b e9                	mov    ebp,ecx
  4dc516:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc51a:	55                   	push   ebp
  4dc51b:	e8 20 54 f2 ff       	call   0x401940
  4dc520:	84 c0                	test   al,al
  4dc522:	74 23                	je     0x4dc547
  4dc524:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
  4dc528:	8b cd                	mov    ecx,ebp
  4dc52a:	8b d1                	mov    edx,ecx
  4dc52c:	be 6c 9e 69 00       	mov    esi,0x699e6c
  4dc531:	c1 e9 02             	shr    ecx,0x2
  4dc534:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dc536:	8b ca                	mov    ecx,edx
  4dc538:	55                   	push   ebp
  4dc539:	83 e1 03             	and    ecx,0x3
  4dc53c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dc53e:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc542:	e8 49 7c f2 ff       	call   0x404190
  4dc547:	8d 84 24 c8 00 00 00 	lea    eax,[esp+0xc8]
  4dc54e:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0xa
  4dc555:	0a 
  4dc556:	50                   	push   eax
  4dc557:	e8 34 aa f5 ff       	call   0x436f90
  4dc55c:	83 c4 04             	add    esp,0x4
  4dc55f:	6a 00                	push   0x0
  4dc561:	50                   	push   eax
  4dc562:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4dc566:	68 00 00 c8 42       	push   0x42c80000
  4dc56b:	8d 54 24 64          	lea    edx,[esp+0x64]
  4dc56f:	b3 0b                	mov    bl,0xb
  4dc571:	51                   	push   ecx
  4dc572:	52                   	push   edx
  4dc573:	8d 8c 24 c4 01 00 00 	lea    ecx,[esp+0x1c4]
  4dc57a:	88 9c 24 38 02 00 00 	mov    BYTE PTR [esp+0x238],bl
  4dc581:	e8 2a 03 0d 00       	call   0x5ac8b0
  4dc586:	8b f0                	mov    esi,eax
  4dc588:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc58b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dc591:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0xc
  4dc598:	0c 
  4dc599:	df e0                	fnstsw ax
  4dc59b:	f6 c4 40             	test   ah,0x40
  4dc59e:	74 16                	je     0x4dc5b6
  4dc5a0:	8d 44 24 13          	lea    eax,[esp+0x13]
  4dc5a4:	8d 4e 14             	lea    ecx,[esi+0x14]
  4dc5a7:	50                   	push   eax
  4dc5a8:	51                   	push   ecx
  4dc5a9:	e8 e2 0d 0d 00       	call   0x5ad390
  4dc5ae:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc5b1:	83 c4 08             	add    esp,0x8
  4dc5b4:	eb 03                	jmp    0x4dc5b9
  4dc5b6:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc5b9:	d9 1d 68 92 6b 00    	fstp   DWORD PTR ds:0x6b9268
  4dc5bf:	8d 8c 24 b0 01 00 00 	lea    ecx,[esp+0x1b0]
  4dc5c6:	88 9c 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],bl
  4dc5cd:	e8 ce 06 0d 00       	call   0x5acca0
  4dc5d2:	6a 01                	push   0x1
  4dc5d4:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  4dc5db:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0xa
  4dc5e2:	0a 
  4dc5e3:	e8 b8 7a f2 ff       	call   0x4040a0
  4dc5e8:	6a 01                	push   0x1
  4dc5ea:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc5ee:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x9
  4dc5f5:	09 
  4dc5f6:	e8 a5 7a f2 ff       	call   0x4040a0
  4dc5fb:	6a 01                	push   0x1
  4dc5fd:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc601:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0xffffffff
  4dc608:	ff ff ff ff 
  4dc60c:	e8 8f 7a f2 ff       	call   0x4040a0
  4dc611:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc615:	d9 05 e0 96 69 00    	fld    DWORD PTR ds:0x6996e0
  4dc61b:	d8 8e 78 01 00 00    	fmul   DWORD PTR [esi+0x178]
  4dc621:	c7 86 78 01 00 00 00 	mov    DWORD PTR [esi+0x178],0x0
  4dc628:	00 00 00 
  4dc62b:	d9 e0                	fchs
  4dc62d:	d8 15 70 92 6b 00    	fcom   DWORD PTR ds:0x6b9270
  4dc633:	df e0                	fnstsw ax
  4dc635:	f6 c4 01             	test   ah,0x1
  4dc638:	0f 85 d3 02 00 00    	jne    0x4dc911
  4dc63e:	d8 35 6c 92 6b 00    	fdiv   DWORD PTR ds:0x6b926c
  4dc644:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
  4dc648:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  4dc64e:	df e0                	fnstsw ax
  4dc650:	f6 c4 41             	test   ah,0x41
  4dc653:	75 39                	jne    0x4dc68e
  4dc655:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  4dc659:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  4dc65f:	6a 00                	push   0x0
  4dc661:	56                   	push   esi
  4dc662:	51                   	push   ecx
  4dc663:	8b ce                	mov    ecx,esi
  4dc665:	d8 0d 68 92 6b 00    	fmul   DWORD PTR ds:0x6b9268
  4dc66b:	d9 1c 24             	fstp   DWORD PTR [esp]
  4dc66e:	e8 4d 79 02 00       	call   0x503fc0
  4dc673:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  4dc679:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
  4dc67d:	df e0                	fnstsw ax
  4dc67f:	f6 c4 01             	test   ah,0x1
  4dc682:	74 0a                	je     0x4dc68e
  4dc684:	c7 44 24 18 00 00 80 	mov    DWORD PTR [esp+0x18],0x3f800000
  4dc68b:	3f 
  4dc68c:	eb 08                	jmp    0x4dc696
  4dc68e:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  4dc692:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4dc696:	8b 84 24 38 02 00 00 	mov    eax,DWORD PTR [esp+0x238]
  4dc69d:	a9 00 00 02 00       	test   eax,0x20000
  4dc6a2:	74 4b                	je     0x4dc6ef
  4dc6a4:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4dc6a8:	6a 00                	push   0x0
  4dc6aa:	6a 00                	push   0x0
  4dc6ac:	50                   	push   eax
  4dc6ad:	6a 00                	push   0x0
  4dc6af:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4dc6b3:	68 18 56 6b 00       	push   0x6b5618
  4dc6b8:	51                   	push   ecx
  4dc6b9:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4dc6bd:	e8 1e 39 07 00       	call   0x54ffe0
  4dc6c2:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  4dc6c6:	85 c0                	test   eax,eax
  4dc6c8:	0f 84 45 02 00 00    	je     0x4dc913
  4dc6ce:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc6d1:	8b c8                	mov    ecx,eax
  4dc6d3:	83 c0 14             	add    eax,0x14
  4dc6d6:	4e                   	dec    esi
  4dc6d7:	8b d6                	mov    edx,esi
  4dc6d9:	85 d2                	test   edx,edx
  4dc6db:	89 30                	mov    DWORD PTR [eax],esi
  4dc6dd:	0f 85 30 02 00 00    	jne    0x4dc913
  4dc6e3:	6a 00                	push   0x0
  4dc6e5:	e8 d6 f8 0c 00       	call   0x5abfc0
  4dc6ea:	e9 24 02 00 00       	jmp    0x4dc913
  4dc6ef:	a9 00 00 01 00       	test   eax,0x10000
  4dc6f4:	6a 00                	push   0x0
  4dc6f6:	6a 00                	push   0x0
  4dc6f8:	74 47                	je     0x4dc741
  4dc6fa:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  4dc6fe:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  4dc702:	52                   	push   edx
  4dc703:	6a 00                	push   0x0
  4dc705:	8d 44 24 40          	lea    eax,[esp+0x40]
  4dc709:	68 20 55 6b 00       	push   0x6b5520
  4dc70e:	50                   	push   eax
  4dc70f:	e8 cc 38 07 00       	call   0x54ffe0
  4dc714:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  4dc718:	85 c0                	test   eax,eax
  4dc71a:	0f 84 f3 01 00 00    	je     0x4dc913
  4dc720:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc723:	8b c8                	mov    ecx,eax
  4dc725:	83 c0 14             	add    eax,0x14
  4dc728:	4e                   	dec    esi
  4dc729:	8b d6                	mov    edx,esi
  4dc72b:	85 d2                	test   edx,edx
  4dc72d:	89 30                	mov    DWORD PTR [eax],esi
  4dc72f:	0f 85 de 01 00 00    	jne    0x4dc913
  4dc735:	6a 00                	push   0x0
  4dc737:	e8 84 f8 0c 00       	call   0x5abfc0
  4dc73c:	e9 d2 01 00 00       	jmp    0x4dc913
  4dc741:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  4dc745:	8d 54 24 40          	lea    edx,[esp+0x40]
  4dc749:	51                   	push   ecx
  4dc74a:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  4dc74e:	6a 00                	push   0x0
  4dc750:	68 08 57 6b 00       	push   0x6b5708
  4dc755:	52                   	push   edx
  4dc756:	e8 85 38 07 00       	call   0x54ffe0
  4dc75b:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4dc75f:	85 c0                	test   eax,eax
  4dc761:	0f 84 ac 01 00 00    	je     0x4dc913
  4dc767:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc76a:	8b c8                	mov    ecx,eax
  4dc76c:	83 c0 14             	add    eax,0x14
  4dc76f:	4e                   	dec    esi
  4dc770:	8b d6                	mov    edx,esi
  4dc772:	85 d2                	test   edx,edx
  4dc774:	89 30                	mov    DWORD PTR [eax],esi
  4dc776:	0f 85 97 01 00 00    	jne    0x4dc913
  4dc77c:	6a 00                	push   0x0
  4dc77e:	e8 3d f8 0c 00       	call   0x5abfc0
  4dc783:	e9 8b 01 00 00       	jmp    0x4dc913
  4dc788:	8b 8b f8 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf8]
  4dc78e:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dc790:	ff 50 30             	call   DWORD PTR [eax+0x30]
  4dc793:	84 c0                	test   al,al
  4dc795:	0f 84 7c 01 00 00    	je     0x4dc917
  4dc79b:	8b 84 24 38 02 00 00 	mov    eax,DWORD PTR [esp+0x238]
  4dc7a2:	a9 00 00 02 00       	test   eax,0x20000
  4dc7a7:	74 49                	je     0x4dc7f2
  4dc7a9:	6a 00                	push   0x0
  4dc7ab:	6a 00                	push   0x0
  4dc7ad:	68 00 00 80 3f       	push   0x3f800000
  4dc7b2:	6a 00                	push   0x0
  4dc7b4:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4dc7b8:	68 40 56 6b 00       	push   0x6b5640
  4dc7bd:	51                   	push   ecx
  4dc7be:	8b ce                	mov    ecx,esi
  4dc7c0:	e8 1b 38 07 00       	call   0x54ffe0
  4dc7c5:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  4dc7c9:	85 c0                	test   eax,eax
  4dc7cb:	0f 84 46 01 00 00    	je     0x4dc917
  4dc7d1:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc7d4:	8b c8                	mov    ecx,eax
  4dc7d6:	83 c0 14             	add    eax,0x14
  4dc7d9:	4e                   	dec    esi
  4dc7da:	8b d6                	mov    edx,esi
  4dc7dc:	85 d2                	test   edx,edx
  4dc7de:	89 30                	mov    DWORD PTR [eax],esi
  4dc7e0:	0f 85 31 01 00 00    	jne    0x4dc917
  4dc7e6:	6a 00                	push   0x0
  4dc7e8:	e8 d3 f7 0c 00       	call   0x5abfc0
  4dc7ed:	e9 25 01 00 00       	jmp    0x4dc917
  4dc7f2:	6a 00                	push   0x0
  4dc7f4:	6a 00                	push   0x0
  4dc7f6:	a9 00 00 01 00       	test   eax,0x10000
  4dc7fb:	68 00 00 80 3f       	push   0x3f800000
  4dc800:	6a 00                	push   0x0
  4dc802:	74 3e                	je     0x4dc842
  4dc804:	8d 54 24 44          	lea    edx,[esp+0x44]
  4dc808:	68 48 55 6b 00       	push   0x6b5548
  4dc80d:	52                   	push   edx
  4dc80e:	8b ce                	mov    ecx,esi
  4dc810:	e8 cb 37 07 00       	call   0x54ffe0
  4dc815:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  4dc819:	85 c0                	test   eax,eax
  4dc81b:	0f 84 f6 00 00 00    	je     0x4dc917
  4dc821:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc824:	8b c8                	mov    ecx,eax
  4dc826:	83 c0 14             	add    eax,0x14
  4dc829:	4e                   	dec    esi
  4dc82a:	8b d6                	mov    edx,esi
  4dc82c:	85 d2                	test   edx,edx
  4dc82e:	89 30                	mov    DWORD PTR [eax],esi
  4dc830:	0f 85 e1 00 00 00    	jne    0x4dc917
  4dc836:	6a 00                	push   0x0
  4dc838:	e8 83 f7 0c 00       	call   0x5abfc0
  4dc83d:	e9 d5 00 00 00       	jmp    0x4dc917
  4dc842:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4dc846:	68 38 57 6b 00       	push   0x6b5738
  4dc84b:	50                   	push   eax
  4dc84c:	8b ce                	mov    ecx,esi
  4dc84e:	e8 8d 37 07 00       	call   0x54ffe0
  4dc853:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  4dc857:	85 c0                	test   eax,eax
  4dc859:	0f 84 b8 00 00 00    	je     0x4dc917
  4dc85f:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc862:	8b c8                	mov    ecx,eax
  4dc864:	83 c0 14             	add    eax,0x14
  4dc867:	4e                   	dec    esi
  4dc868:	8b d6                	mov    edx,esi
  4dc86a:	85 d2                	test   edx,edx
  4dc86c:	89 30                	mov    DWORD PTR [eax],esi
  4dc86e:	0f 85 a3 00 00 00    	jne    0x4dc917
  4dc874:	6a 00                	push   0x0
  4dc876:	e8 45 f7 0c 00       	call   0x5abfc0
  4dc87b:	e9 97 00 00 00       	jmp    0x4dc917
  4dc880:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4dc884:	6a 00                	push   0x0
  4dc886:	88 4c 24 6c          	mov    BYTE PTR [esp+0x6c],cl
  4dc88a:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4dc88e:	e8 0d 78 f2 ff       	call   0x4040a0
  4dc893:	bf 48 05 69 00       	mov    edi,0x690548
  4dc898:	83 c9 ff             	or     ecx,0xffffffff
  4dc89b:	33 c0                	xor    eax,eax
  4dc89d:	6a 01                	push   0x1
  4dc89f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc8a1:	f7 d1                	not    ecx
  4dc8a3:	49                   	dec    ecx
  4dc8a4:	8b e9                	mov    ebp,ecx
  4dc8a6:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4dc8aa:	55                   	push   ebp
  4dc8ab:	e8 90 50 f2 ff       	call   0x401940
  4dc8b0:	84 c0                	test   al,al
  4dc8b2:	74 23                	je     0x4dc8d7
  4dc8b4:	8b 7c 24 6c          	mov    edi,DWORD PTR [esp+0x6c]
  4dc8b8:	8b cd                	mov    ecx,ebp
  4dc8ba:	8b d1                	mov    edx,ecx
  4dc8bc:	be 48 05 69 00       	mov    esi,0x690548
  4dc8c1:	c1 e9 02             	shr    ecx,0x2
  4dc8c4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dc8c6:	8b ca                	mov    ecx,edx
  4dc8c8:	55                   	push   ebp
  4dc8c9:	83 e1 03             	and    ecx,0x3
  4dc8cc:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dc8ce:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4dc8d2:	e8 b9 78 f2 ff       	call   0x404190
  4dc8d7:	8d 44 24 68          	lea    eax,[esp+0x68]
  4dc8db:	c7 84 24 24 02 00 00 	mov    DWORD PTR [esp+0x224],0xd
  4dc8e2:	0d 00 00 00 
  4dc8e6:	50                   	push   eax
  4dc8e7:	68 16 08 00 00       	push   0x816
  4dc8ec:	68 28 97 69 00       	push   0x699728
  4dc8f1:	e8 2a 36 0d 00       	call   0x5aff20
  4dc8f6:	83 c4 0c             	add    esp,0xc
  4dc8f9:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4dc8fd:	c7 84 24 24 02 00 00 	mov    DWORD PTR [esp+0x224],0xffffffff
  4dc904:	ff ff ff ff 
  4dc908:	6a 01                	push   0x1
  4dc90a:	e8 91 77 f2 ff       	call   0x4040a0
  4dc90f:	eb 06                	jmp    0x4dc917
  4dc911:	dd d8                	fstp   st(0)
  4dc913:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  4dc917:	8b 83 10 02 00 00    	mov    eax,DWORD PTR [ebx+0x210]
  4dc91d:	be 00 54 6b 00       	mov    esi,0x6b5400
  4dc922:	3b c6                	cmp    eax,esi
  4dc924:	5d                   	pop    ebp
  4dc925:	0f 84 1a 01 00 00    	je     0x4dca45
  4dc92b:	8b 83 0c 02 00 00    	mov    eax,DWORD PTR [ebx+0x20c]
  4dc931:	85 c0                	test   eax,eax
  4dc933:	74 7f                	je     0x4dc9b4
  4dc935:	85 c0                	test   eax,eax
  4dc937:	75 70                	jne    0x4dc9a9
  4dc939:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  4dc93d:	6a 00                	push   0x0
  4dc93f:	88 4c 24 20          	mov    BYTE PTR [esp+0x20],cl
  4dc943:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4dc947:	e8 54 77 f2 ff       	call   0x4040a0
  4dc94c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dc951:	83 c9 ff             	or     ecx,0xffffffff
  4dc954:	33 c0                	xor    eax,eax
  4dc956:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc958:	f7 d1                	not    ecx
  4dc95a:	49                   	dec    ecx
  4dc95b:	51                   	push   ecx
  4dc95c:	68 70 3f 6b 00       	push   0x6b3f70
  4dc961:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dc965:	e8 86 77 f2 ff       	call   0x4040f0
  4dc96a:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4dc96e:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xe
  4dc975:	0e 00 00 00 
  4dc979:	52                   	push   edx
  4dc97a:	68 b6 00 00 00       	push   0xb6
  4dc97f:	68 38 d6 68 00       	push   0x68d638
  4dc984:	68 2c d6 68 00       	push   0x68d62c
  4dc989:	e8 62 3e 0c 00       	call   0x5a07f0
  4dc98e:	ff d0                	call   eax
  4dc990:	83 c4 10             	add    esp,0x10
  4dc993:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc997:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xffffffff
  4dc99e:	ff ff ff ff 
  4dc9a2:	6a 01                	push   0x1
  4dc9a4:	e8 f7 76 f2 ff       	call   0x4040a0
  4dc9a9:	8b 8b 0c 02 00 00    	mov    ecx,DWORD PTR [ebx+0x20c]
  4dc9af:	e8 7c 67 07 00       	call   0x553130
  4dc9b4:	8b c6                	mov    eax,esi
  4dc9b6:	89 b3 10 02 00 00    	mov    DWORD PTR [ebx+0x210],esi
  4dc9bc:	85 c0                	test   eax,eax
  4dc9be:	0f 84 81 00 00 00    	je     0x4dca45
  4dc9c4:	6a 00                	push   0x0
  4dc9c6:	6a 00                	push   0x0
  4dc9c8:	68 00 00 80 3f       	push   0x3f800000
  4dc9cd:	6a 01                	push   0x1
  4dc9cf:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4dc9d3:	56                   	push   esi
  4dc9d4:	51                   	push   ecx
  4dc9d5:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  4dc9d9:	e8 02 36 07 00       	call   0x54ffe0
  4dc9de:	8b f0                	mov    esi,eax
  4dc9e0:	8b 8b 0c 02 00 00    	mov    ecx,DWORD PTR [ebx+0x20c]
  4dc9e6:	8b 06                	mov    eax,DWORD PTR [esi]
  4dc9e8:	3b c8                	cmp    ecx,eax
  4dc9ea:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xf
  4dc9f1:	0f 00 00 00 
  4dc9f5:	74 23                	je     0x4dca1a
  4dc9f7:	85 c9                	test   ecx,ecx
  4dc9f9:	74 10                	je     0x4dca0b
  4dc9fb:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  4dc9fe:	48                   	dec    eax
  4dc9ff:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  4dca02:	75 07                	jne    0x4dca0b
  4dca04:	6a 00                	push   0x0
  4dca06:	e8 b5 f5 0c 00       	call   0x5abfc0
  4dca0b:	8b 36                	mov    esi,DWORD PTR [esi]
  4dca0d:	85 f6                	test   esi,esi
  4dca0f:	89 b3 0c 02 00 00    	mov    DWORD PTR [ebx+0x20c],esi
  4dca15:	74 03                	je     0x4dca1a
  4dca17:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  4dca1a:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4dca1e:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xffffffff
  4dca25:	ff ff ff ff 
  4dca29:	85 c0                	test   eax,eax
  4dca2b:	74 18                	je     0x4dca45
  4dca2d:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dca30:	8b c8                	mov    ecx,eax
  4dca32:	83 c0 14             	add    eax,0x14
  4dca35:	4e                   	dec    esi
  4dca36:	8b d6                	mov    edx,esi
  4dca38:	85 d2                	test   edx,edx
  4dca3a:	89 30                	mov    DWORD PTR [eax],esi
  4dca3c:	75 07                	jne    0x4dca45
  4dca3e:	6a 00                	push   0x0
  4dca40:	e8 7b f5 0c 00       	call   0x5abfc0
  4dca45:	8b 8c 24 18 02 00 00 	mov    ecx,DWORD PTR [esp+0x218]
  4dca4c:	5f                   	pop    edi
  4dca4d:	5e                   	pop    esi
  4dca4e:	5b                   	pop    ebx
  4dca4f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dca56:	81 c4 18 02 00 00    	add    esp,0x218
  4dca5c:	c2 14 00             	ret    0x14
  4dca5f:	90                   	nop
  4dca60:	a2 c1 4d 00 17       	mov    ds:0x17004dc1,al
  4dca65:	c9                   	leave
  4dca66:	4d                   	dec    ebp
  4dca67:	00 88 c7 4d 00 80    	add    BYTE PTR [eax-0x7fffb239],cl
  4dca6d:	c8 4d 00 17          	enter  0x4d,0x17
  4dca71:	c9                   	leave
  4dca72:	4d                   	dec    ebp
	...
