
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047c2b0 <.text+0x7b2b0>:
  47c2b0:	83 ec 20             	sub    esp,0x20
  47c2b3:	53                   	push   ebx
  47c2b4:	55                   	push   ebp
  47c2b5:	56                   	push   esi
  47c2b6:	57                   	push   edi
  47c2b7:	8b f9                	mov    edi,ecx
  47c2b9:	33 ed                	xor    ebp,ebp
  47c2bb:	c6 44 24 13 00       	mov    BYTE PTR [esp+0x13],0x0
  47c2c0:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
  47c2c4:	8a 87 f8 03 00 00    	mov    al,BYTE PTR [edi+0x3f8]
  47c2ca:	84 c0                	test   al,al
  47c2cc:	0f 84 97 02 00 00    	je     0x47c569
  47c2d2:	8a 87 06 04 00 00    	mov    al,BYTE PTR [edi+0x406]
  47c2d8:	84 c0                	test   al,al
  47c2da:	0f 84 89 02 00 00    	je     0x47c569
  47c2e0:	8b 87 e4 4a 00 00    	mov    eax,DWORD PTR [edi+0x4ae4]
  47c2e6:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
  47c2ea:	8d b7 e4 4a 00 00    	lea    esi,[edi+0x4ae4]
  47c2f0:	83 f8 ff             	cmp    eax,0xffffffff
  47c2f3:	b2 01                	mov    dl,0x1
  47c2f5:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  47c2f9:	74 3b                	je     0x47c336
  47c2fb:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  47c2fe:	83 f9 ff             	cmp    ecx,0xffffffff
  47c301:	75 0e                	jne    0x47c311
  47c303:	03 c3                	add    eax,ebx
  47c305:	c7 46 08 00 00 80 3f 	mov    DWORD PTR [esi+0x8],0x3f800000
  47c30c:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  47c30f:	eb 25                	jmp    0x47c336
  47c311:	3b d9                	cmp    ebx,ecx
  47c313:	7e 07                	jle    0x47c31c
  47c315:	89 6e 08             	mov    DWORD PTR [esi+0x8],ebp
  47c318:	32 d2                	xor    dl,dl
  47c31a:	eb 1a                	jmp    0x47c336
  47c31c:	3b c5                	cmp    eax,ebp
  47c31e:	7e 13                	jle    0x47c333
  47c320:	2b cb                	sub    ecx,ebx
  47c322:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  47c326:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c32a:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
  47c32e:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
  47c331:	eb 03                	jmp    0x47c336
  47c333:	89 6e 08             	mov    DWORD PTR [esi+0x8],ebp
  47c336:	84 d2                	test   dl,dl
  47c338:	88 56 0c             	mov    BYTE PTR [esi+0xc],dl
  47c33b:	74 6c                	je     0x47c3a9
  47c33d:	8b 8f f4 4a 00 00    	mov    ecx,DWORD PTR [edi+0x4af4]
  47c343:	b2 01                	mov    dl,0x1
  47c345:	83 f9 ff             	cmp    ecx,0xffffffff
  47c348:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  47c34c:	74 4d                	je     0x47c39b
  47c34e:	8b 87 f8 4a 00 00    	mov    eax,DWORD PTR [edi+0x4af8]
  47c354:	83 f8 ff             	cmp    eax,0xffffffff
  47c357:	75 14                	jne    0x47c36d
  47c359:	03 cb                	add    ecx,ebx
  47c35b:	c7 87 fc 4a 00 00 00 	mov    DWORD PTR [edi+0x4afc],0x3f800000
  47c362:	00 80 3f 
  47c365:	89 8f f8 4a 00 00    	mov    DWORD PTR [edi+0x4af8],ecx
  47c36b:	eb 2e                	jmp    0x47c39b
  47c36d:	3b d8                	cmp    ebx,eax
  47c36f:	7e 0a                	jle    0x47c37b
  47c371:	89 af fc 4a 00 00    	mov    DWORD PTR [edi+0x4afc],ebp
  47c377:	32 d2                	xor    dl,dl
  47c379:	eb 20                	jmp    0x47c39b
  47c37b:	3b cd                	cmp    ecx,ebp
  47c37d:	7e 16                	jle    0x47c395
  47c37f:	2b c3                	sub    eax,ebx
  47c381:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  47c385:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c389:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
  47c38d:	d9 9f fc 4a 00 00    	fstp   DWORD PTR [edi+0x4afc]
  47c393:	eb 06                	jmp    0x47c39b
  47c395:	89 af fc 4a 00 00    	mov    DWORD PTR [edi+0x4afc],ebp
  47c39b:	84 d2                	test   dl,dl
  47c39d:	88 97 00 4b 00 00    	mov    BYTE PTR [edi+0x4b00],dl
  47c3a3:	0f 85 c0 01 00 00    	jne    0x47c569
  47c3a9:	8d af 48 05 00 00    	lea    ebp,[edi+0x548]
  47c3af:	83 7c 24 14 32       	cmp    DWORD PTR [esp+0x14],0x32
  47c3b4:	0f 8d af 01 00 00    	jge    0x47c569
  47c3ba:	8a 45 6c             	mov    al,BYTE PTR [ebp+0x6c]
  47c3bd:	84 c0                	test   al,al
  47c3bf:	0f 85 89 01 00 00    	jne    0x47c54e
  47c3c5:	8b cd                	mov    ecx,ebp
  47c3c7:	e8 44 23 00 00       	call   0x47e710
  47c3cc:	8d 87 90 03 00 00    	lea    eax,[edi+0x390]
  47c3d2:	8d 4d 04             	lea    ecx,[ebp+0x4]
  47c3d5:	8b 10                	mov    edx,DWORD PTR [eax]
  47c3d7:	89 11                	mov    DWORD PTR [ecx],edx
  47c3d9:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47c3dc:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  47c3df:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47c3e2:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  47c3e5:	e8 b6 e0 18 00       	call   0x60a4a0
  47c3ea:	99                   	cdq
  47c3eb:	b9 10 27 00 00       	mov    ecx,0x2710
  47c3f0:	f7 f9                	idiv   ecx
  47c3f2:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  47c3f6:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c3fa:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  47c400:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  47c406:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47c40a:	e8 91 e0 18 00       	call   0x60a4a0
  47c40f:	99                   	cdq
  47c410:	b9 10 27 00 00       	mov    ecx,0x2710
  47c415:	f7 f9                	idiv   ecx
  47c417:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  47c41b:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  47c41f:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  47c425:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  47c429:	e8 72 e0 18 00       	call   0x60a4a0
  47c42e:	99                   	cdq
  47c42f:	b9 10 27 00 00       	mov    ecx,0x2710
  47c434:	f7 f9                	idiv   ecx
  47c436:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  47c43a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47c43e:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  47c442:	81 e2 03 00 00 80    	and    edx,0x80000003
  47c448:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  47c44e:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  47c454:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  47c458:	79 05                	jns    0x47c45f
  47c45a:	4a                   	dec    edx
  47c45b:	83 ca fc             	or     edx,0xfffffffc
  47c45e:	42                   	inc    edx
  47c45f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47c463:	50                   	push   eax
  47c464:	75 0c                	jne    0x47c472
  47c466:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  47c46a:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  47c46e:	51                   	push   ecx
  47c46f:	52                   	push   edx
  47c470:	eb 0f                	jmp    0x47c481
  47c472:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47c476:	51                   	push   ecx
  47c477:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47c47b:	d9 e0                	fchs
  47c47d:	d9 1c 24             	fstp   DWORD PTR [esp]
  47c480:	51                   	push   ecx
  47c481:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47c485:	e8 96 69 13 00       	call   0x5b2e20
  47c48a:	8d 54 24 24          	lea    edx,[esp+0x24]
  47c48e:	68 00 00 f0 41       	push   0x41f00000
  47c493:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47c497:	e8 04 6b 13 00       	call   0x5b2fa0
  47c49c:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  47c4a0:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47c4a4:	8d 55 10             	lea    edx,[ebp+0x10]
  47c4a7:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  47c4aa:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47c4ae:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c4b1:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  47c4b4:	8b 06                	mov    eax,DWORD PTR [esi]
  47c4b6:	83 f8 ff             	cmp    eax,0xffffffff
  47c4b9:	b2 01                	mov    dl,0x1
  47c4bb:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  47c4bf:	74 4d                	je     0x47c50e
  47c4c1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  47c4c4:	83 f9 ff             	cmp    ecx,0xffffffff
  47c4c7:	75 0e                	jne    0x47c4d7
  47c4c9:	03 c3                	add    eax,ebx
  47c4cb:	c7 46 08 00 00 80 3f 	mov    DWORD PTR [esi+0x8],0x3f800000
  47c4d2:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  47c4d5:	eb 37                	jmp    0x47c50e
  47c4d7:	39 4c 24 34          	cmp    DWORD PTR [esp+0x34],ecx
  47c4db:	7e 0b                	jle    0x47c4e8
  47c4dd:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
  47c4e4:	32 d2                	xor    dl,dl
  47c4e6:	eb 22                	jmp    0x47c50a
  47c4e8:	85 c0                	test   eax,eax
  47c4ea:	7e 17                	jle    0x47c503
  47c4ec:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
  47c4f0:	2b cb                	sub    ecx,ebx
  47c4f2:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  47c4f6:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c4fa:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
  47c4fe:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
  47c501:	eb 0b                	jmp    0x47c50e
  47c503:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
  47c50a:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
  47c50e:	84 d2                	test   dl,dl
  47c510:	88 56 0c             	mov    BYTE PTR [esi+0xc],dl
  47c513:	75 10                	jne    0x47c525
  47c515:	8b 8f 14 4b 00 00    	mov    ecx,DWORD PTR [edi+0x4b14]
  47c51b:	51                   	push   ecx
  47c51c:	8b ce                	mov    ecx,esi
  47c51e:	e8 8d 7c f8 ff       	call   0x4041b0
  47c523:	eb 24                	jmp    0x47c549
  47c525:	8b 97 18 4b 00 00    	mov    edx,DWORD PTR [edi+0x4b18]
  47c52b:	8d 8f f4 4a 00 00    	lea    ecx,[edi+0x4af4]
  47c531:	52                   	push   edx
  47c532:	e8 79 7c f8 ff       	call   0x4041b0
  47c537:	6a 05                	push   0x5
  47c539:	8b cf                	mov    ecx,edi
  47c53b:	e8 40 00 00 00       	call   0x47c580
  47c540:	6a 02                	push   0x2
  47c542:	8b cf                	mov    ecx,edi
  47c544:	e8 a7 0d 00 00       	call   0x47d2f0
  47c549:	c6 44 24 13 01       	mov    BYTE PTR [esp+0x13],0x1
  47c54e:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47c552:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  47c556:	42                   	inc    edx
  47c557:	81 c5 44 01 00 00    	add    ebp,0x144
  47c55d:	84 c0                	test   al,al
  47c55f:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  47c563:	0f 84 46 fe ff ff    	je     0x47c3af
  47c569:	5f                   	pop    edi
  47c56a:	5e                   	pop    esi
  47c56b:	5d                   	pop    ebp
  47c56c:	5b                   	pop    ebx
  47c56d:	83 c4 20             	add    esp,0x20
  47c570:	c2 08 00             	ret    0x8
  47c573:	90                   	nop
  47c574:	90                   	nop
  47c575:	90                   	nop
  47c576:	90                   	nop
  47c577:	90                   	nop
  47c578:	90                   	nop
  47c579:	90                   	nop
  47c57a:	90                   	nop
  47c57b:	90                   	nop
  47c57c:	90                   	nop
  47c57d:	90                   	nop
  47c57e:	90                   	nop
  47c57f:	90                   	nop
