
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0046e1f0 <.text+0x6d1f0>:
  46e1f0:	01 e8                	add    eax,ebp
  46e1f2:	aa                   	stos   BYTE PTR es:[edi],al
  46e1f3:	5e                   	pop    esi
  46e1f4:	f9                   	stc
  46e1f5:	ff 8b 4c 24 18 8b    	dec    DWORD PTR [ebx-0x74e7dbb4]
  46e1fb:	56                   	push   esi
  46e1fc:	5c                   	pop    esp
  46e1fd:	3b cb                	cmp    ecx,ebx
  46e1ff:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  46e203:	c7 84 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],0xffffffff
  46e20a:	ff ff ff ff 
  46e20e:	74 05                	je     0x46e215
  46e210:	e8 bb b6 f9 ff       	call   0x4098d0
  46e215:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  46e219:	8d 9d 20 01 00 00    	lea    ebx,[ebp+0x120]
  46e21f:	eb 04                	jmp    0x46e225
  46e221:	8b 6c 24 14          	mov    ebp,DWORD PTR [esp+0x14]
  46e225:	8a 43 48             	mov    al,BYTE PTR [ebx+0x48]
  46e228:	84 c0                	test   al,al
  46e22a:	0f 84 72 02 00 00    	je     0x46e4a2
  46e230:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  46e236:	d8 23                	fsub   DWORD PTR [ebx]
  46e238:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  46e23d:	85 c0                	test   eax,eax
  46e23f:	d8 0d 04 de 64 00    	fmul   DWORD PTR ds:0x64de04
  46e245:	d9 05 00 de 64 00    	fld    DWORD PTR ds:0x64de00
  46e24b:	d8 0b                	fmul   DWORD PTR [ebx]
  46e24d:	de c1                	faddp  st(1),st
  46e24f:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  46e253:	75 05                	jne    0x46e25a
  46e255:	e8 26 d0 0e 00       	call   0x55b280
  46e25a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  46e25e:	51                   	push   ecx
  46e25f:	8b c8                	mov    ecx,eax
  46e261:	e8 ea 34 fb ff       	call   0x421750
  46e266:	8b f0                	mov    esi,eax
  46e268:	8b 06                	mov    eax,DWORD PTR [esi]
  46e26a:	c7 84 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],0x3
  46e271:	03 00 00 00 
  46e275:	85 c0                	test   eax,eax
  46e277:	75 6a                	jne    0x46e2e3
  46e279:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  46e27d:	6a 00                	push   0x0
  46e27f:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  46e283:	88 54 24 38          	mov    BYTE PTR [esp+0x38],dl
  46e287:	e8 14 5e f9 ff       	call   0x4040a0
  46e28c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  46e291:	83 c9 ff             	or     ecx,0xffffffff
  46e294:	33 c0                	xor    eax,eax
  46e296:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46e298:	f7 d1                	not    ecx
  46e29a:	49                   	dec    ecx
  46e29b:	51                   	push   ecx
  46e29c:	68 70 3f 6b 00       	push   0x6b3f70
  46e2a1:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  46e2a5:	e8 46 5e f9 ff       	call   0x4040f0
  46e2aa:	8d 44 24 34          	lea    eax,[esp+0x34]
  46e2ae:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x4
  46e2b5:	04 
  46e2b6:	50                   	push   eax
  46e2b7:	68 b6 00 00 00       	push   0xb6
  46e2bc:	68 38 d6 68 00       	push   0x68d638
  46e2c1:	68 2c d6 68 00       	push   0x68d62c
  46e2c6:	e8 25 25 13 00       	call   0x5a07f0
  46e2cb:	ff d0                	call   eax
  46e2cd:	83 c4 10             	add    esp,0x10
  46e2d0:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  46e2d4:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x3
  46e2db:	03 
  46e2dc:	6a 01                	push   0x1
  46e2de:	e8 bd 5d f9 ff       	call   0x4040a0
  46e2e3:	8b 06                	mov    eax,DWORD PTR [esi]
  46e2e5:	c7 84 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],0xffffffff
  46e2ec:	ff ff ff ff 
  46e2f0:	05 10 02 00 00       	add    eax,0x210
  46e2f5:	8b 30                	mov    esi,DWORD PTR [eax]
  46e2f7:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
  46e2fa:	8b 68 08             	mov    ebp,DWORD PTR [eax+0x8]
  46e2fd:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  46e301:	85 c0                	test   eax,eax
  46e303:	74 1e                	je     0x46e323
  46e305:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  46e308:	8b c8                	mov    ecx,eax
  46e30a:	83 c0 14             	add    eax,0x14
  46e30d:	4a                   	dec    edx
  46e30e:	85 d2                	test   edx,edx
  46e310:	89 10                	mov    DWORD PTR [eax],edx
  46e312:	75 07                	jne    0x46e31b
  46e314:	6a 00                	push   0x0
  46e316:	e8 a5 dc 13 00       	call   0x5abfc0
  46e31b:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  46e322:	00 
  46e323:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  46e327:	8d 53 e0             	lea    edx,[ebx-0x20]
  46e32a:	50                   	push   eax
  46e32b:	50                   	push   eax
  46e32c:	6a 00                	push   0x0
  46e32e:	83 ec 0c             	sub    esp,0xc
  46e331:	8b cc                	mov    ecx,esp
  46e333:	83 ec 0c             	sub    esp,0xc
  46e336:	8b c4                	mov    eax,esp
  46e338:	89 31                	mov    DWORD PTR [ecx],esi
  46e33a:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
  46e33d:	89 69 08             	mov    DWORD PTR [ecx+0x8],ebp
  46e340:	8b 0a                	mov    ecx,DWORD PTR [edx]
  46e342:	89 08                	mov    DWORD PTR [eax],ecx
  46e344:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  46e347:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  46e34a:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  46e34e:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  46e351:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  46e354:	8d 44 24 6c          	lea    eax,[esp+0x6c]
  46e358:	50                   	push   eax
  46e359:	e8 52 01 00 00       	call   0x46e4b0
  46e35e:	8d 6b dc             	lea    ebp,[ebx-0x24]
  46e361:	8d 74 24 60          	lea    esi,[esp+0x60]
  46e365:	bf 04 00 00 00       	mov    edi,0x4
  46e36a:	c7 46 fc 00 00 53 43 	mov    DWORD PTR [esi-0x4],0x43530000
  46e371:	c7 06 00 00 7c 42    	mov    DWORD PTR [esi],0x427c0000
  46e377:	8b cd                	mov    ecx,ebp
  46e379:	c7 46 04 00 00 7f 43 	mov    DWORD PTR [esi+0x4],0x437f0000
  46e380:	e8 4b b2 12 00       	call   0x5995d0
  46e385:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  46e389:	83 c6 24             	add    esi,0x24
  46e38c:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  46e390:	4f                   	dec    edi
  46e391:	d9 5e e4             	fstp   DWORD PTR [esi-0x1c]
  46e394:	75 d4                	jne    0x46e36a
  46e396:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  46e39a:	8b 81 f8 00 00 00    	mov    eax,DWORD PTR [ecx+0xf8]
  46e3a0:	85 c0                	test   eax,eax
  46e3a2:	0f 85 96 00 00 00    	jne    0x46e43e
  46e3a8:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  46e3ac:	6a 00                	push   0x0
  46e3ae:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46e3b2:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  46e3b6:	e8 e5 5c f9 ff       	call   0x4040a0
  46e3bb:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  46e3c0:	83 c9 ff             	or     ecx,0xffffffff
  46e3c3:	33 c0                	xor    eax,eax
  46e3c5:	6a 01                	push   0x1
  46e3c7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46e3c9:	f7 d1                	not    ecx
  46e3cb:	49                   	dec    ecx
  46e3cc:	8b e9                	mov    ebp,ecx
  46e3ce:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46e3d2:	55                   	push   ebp
  46e3d3:	e8 68 35 f9 ff       	call   0x401940
  46e3d8:	84 c0                	test   al,al
  46e3da:	74 23                	je     0x46e3ff
  46e3dc:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  46e3e0:	8b cd                	mov    ecx,ebp
  46e3e2:	8b c1                	mov    eax,ecx
  46e3e4:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  46e3e9:	c1 e9 02             	shr    ecx,0x2
  46e3ec:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  46e3ee:	8b c8                	mov    ecx,eax
  46e3f0:	55                   	push   ebp
  46e3f1:	83 e1 03             	and    ecx,0x3
  46e3f4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  46e3f6:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46e3fa:	e8 91 5d f9 ff       	call   0x404190
  46e3ff:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  46e403:	c7 84 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],0x5
  46e40a:	05 00 00 00 
  46e40e:	51                   	push   ecx
  46e40f:	68 b6 00 00 00       	push   0xb6
  46e414:	68 38 d6 68 00       	push   0x68d638
  46e419:	68 2c d6 68 00       	push   0x68d62c
  46e41e:	e8 cd 23 13 00       	call   0x5a07f0
  46e423:	ff d0                	call   eax
  46e425:	83 c4 10             	add    esp,0x10
  46e428:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  46e42c:	c7 84 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],0xffffffff
  46e433:	ff ff ff ff 
  46e437:	6a 01                	push   0x1
  46e439:	e8 62 5c f9 ff       	call   0x4040a0
  46e43e:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  46e442:	6a 00                	push   0x0
  46e444:	6a 01                	push   0x1
  46e446:	6a 00                	push   0x0
  46e448:	8b 8a f8 00 00 00    	mov    ecx,DWORD PTR [edx+0xf8]
  46e44e:	e8 1d c6 09 00       	call   0x50aa70
  46e453:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  46e457:	50                   	push   eax
  46e458:	8d 44 24 58          	lea    eax,[esp+0x58]
  46e45c:	6a 04                	push   0x4
  46e45e:	50                   	push   eax
  46e45f:	51                   	push   ecx
  46e460:	e8 2b 8a 14 00       	call   0x5b6e90
  46e465:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  46e469:	83 c4 1c             	add    esp,0x1c
  46e46c:	40                   	inc    eax
  46e46d:	81 c3 44 01 00 00    	add    ebx,0x144
  46e473:	83 f8 0f             	cmp    eax,0xf
  46e476:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  46e47a:	0f 8c a1 fd ff ff    	jl     0x46e221
  46e480:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  46e484:	e8 f7 0e 00 00       	call   0x46f380
  46e489:	8b 8c 24 d8 00 00 00 	mov    ecx,DWORD PTR [esp+0xd8]
  46e490:	5f                   	pop    edi
  46e491:	5e                   	pop    esi
  46e492:	5d                   	pop    ebp
  46e493:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  46e49a:	5b                   	pop    ebx
  46e49b:	81 c4 d4 00 00 00    	add    esp,0xd4
  46e4a1:	c3                   	ret
  46e4a2:	6a 00                	push   0x0
  46e4a4:	8b cd                	mov    ecx,ebp
  46e4a6:	e8 a5 3e 09 00       	call   0x502350
  46e4ab:	eb dc                	jmp    0x46e489
