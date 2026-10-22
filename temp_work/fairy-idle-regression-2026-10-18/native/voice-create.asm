
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0054f240 <.text+0x14e240>:
  54f240:	6a ff                	push   0xffffffff
  54f242:	68 f2 db 63 00       	push   0x63dbf2
  54f247:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54f24d:	50                   	push   eax
  54f24e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54f255:	83 ec 60             	sub    esp,0x60
  54f258:	53                   	push   ebx
  54f259:	55                   	push   ebp
  54f25a:	8b d9                	mov    ebx,ecx
  54f25c:	33 ed                	xor    ebp,ebp
  54f25e:	56                   	push   esi
  54f25f:	57                   	push   edi
  54f260:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  54f264:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
  54f268:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f26c:	c7 44 24 78 01 00 00 	mov    DWORD PTR [esp+0x78],0x1
  54f273:	00 
  54f274:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
  54f278:	e8 33 52 03 00       	call   0x5844b0
  54f27d:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
  54f284:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f289:	3b c5                	cmp    eax,ebp
  54f28b:	75 46                	jne    0x54f2d3
  54f28d:	8d 44 24 10          	lea    eax,[esp+0x10]
  54f291:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f295:	50                   	push   eax
  54f296:	68 70 3f 6b 00       	push   0x6b3f70
  54f29b:	e8 70 a5 eb ff       	call   0x409810
  54f2a0:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f2a4:	c6 44 24 78 03       	mov    BYTE PTR [esp+0x78],0x3
  54f2a9:	51                   	push   ecx
  54f2aa:	68 b6 00 00 00       	push   0xb6
  54f2af:	68 38 d6 68 00       	push   0x68d638
  54f2b4:	68 2c d6 68 00       	push   0x68d62c
  54f2b9:	e8 32 15 05 00       	call   0x5a07f0
  54f2be:	ff d0                	call   eax
  54f2c0:	83 c4 10             	add    esp,0x10
  54f2c3:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f2c7:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f2cc:	6a 01                	push   0x1
  54f2ce:	e8 cd 4d eb ff       	call   0x4040a0
  54f2d3:	8b 94 24 84 00 00 00 	mov    edx,DWORD PTR [esp+0x84]
  54f2da:	8d 8b 04 01 00 00    	lea    ecx,[ebx+0x104]
  54f2e0:	8b 42 38             	mov    eax,DWORD PTR [edx+0x38]
  54f2e3:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  54f2e7:	e8 d4 7f f5 ff       	call   0x4a72c0
  54f2ec:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
  54f2f0:	51                   	push   ecx
  54f2f1:	d8 8c 24 90 00 00 00 	fmul   DWORD PTR [esp+0x90]
  54f2f8:	d9 1c 24             	fstp   DWORD PTR [esp]
  54f2fb:	e8 30 dd ff ff       	call   0x54d030
  54f300:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  54f304:	83 c4 04             	add    esp,0x4
  54f307:	e8 34 43 00 00       	call   0x553640
  54f30c:	84 c0                	test   al,al
  54f30e:	0f 84 aa 05 00 00    	je     0x54f8be
  54f314:	8a 83 8c 00 00 00    	mov    al,BYTE PTR [ebx+0x8c]
  54f31a:	84 c0                	test   al,al
  54f31c:	0f 84 9c 05 00 00    	je     0x54f8be
  54f322:	8d 7b 54             	lea    edi,[ebx+0x54]
  54f325:	8b cf                	mov    ecx,edi
  54f327:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  54f32b:	e8 90 f1 ef ff       	call   0x44e4c0
  54f330:	83 f8 19             	cmp    eax,0x19
  54f333:	7e 09                	jle    0x54f33e
  54f335:	6a 01                	push   0x1
  54f337:	8b cb                	mov    ecx,ebx
  54f339:	e8 f2 0f 00 00       	call   0x550330
  54f33e:	e8 6d 7c fc ff       	call   0x516fb0
  54f343:	8b c8                	mov    ecx,eax
  54f345:	e8 96 44 ee ff       	call   0x4337e0
  54f34a:	85 c0                	test   eax,eax
  54f34c:	0f 84 b7 00 00 00    	je     0x54f409
  54f352:	39 ac 24 84 00 00 00 	cmp    DWORD PTR [esp+0x84],ebp
  54f359:	75 46                	jne    0x54f3a1
  54f35b:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  54f35f:	51                   	push   ecx
  54f360:	68 70 3f 6b 00       	push   0x6b3f70
  54f365:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  54f369:	e8 a2 a4 eb ff       	call   0x409810
  54f36e:	8d 54 24 30          	lea    edx,[esp+0x30]
  54f372:	c6 44 24 78 04       	mov    BYTE PTR [esp+0x78],0x4
  54f377:	52                   	push   edx
  54f378:	68 b6 00 00 00       	push   0xb6
  54f37d:	68 38 d6 68 00       	push   0x68d638
  54f382:	68 2c d6 68 00       	push   0x68d62c
  54f387:	e8 64 14 05 00       	call   0x5a07f0
  54f38c:	ff d0                	call   eax
  54f38e:	83 c4 10             	add    esp,0x10
  54f391:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f395:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f39a:	6a 01                	push   0x1
  54f39c:	e8 ff 4c eb ff       	call   0x4040a0
  54f3a1:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
  54f3a8:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
  54f3ab:	3b c5                	cmp    eax,ebp
  54f3ad:	75 05                	jne    0x54f3b4
  54f3af:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54f3b4:	d9 84 24 90 00 00 00 	fld    DWORD PTR [esp+0x90]
  54f3bb:	83 ec 08             	sub    esp,0x8
  54f3be:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  54f3c2:	dd 1c 24             	fstp   QWORD PTR [esp]
  54f3c5:	d9 84 24 9c 00 00 00 	fld    DWORD PTR [esp+0x9c]
  54f3cc:	83 ec 08             	sub    esp,0x8
  54f3cf:	dd 1c 24             	fstp   QWORD PTR [esp]
  54f3d2:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  54f3d6:	83 ec 08             	sub    esp,0x8
  54f3d9:	dd 1c 24             	fstp   QWORD PTR [esp]
  54f3dc:	50                   	push   eax
  54f3dd:	68 d4 1a 6a 00       	push   0x6a1ad4
  54f3e2:	51                   	push   ecx
  54f3e3:	e8 a8 ef 05 00       	call   0x5ae390
  54f3e8:	50                   	push   eax
  54f3e9:	c6 84 24 a0 00 00 00 	mov    BYTE PTR [esp+0xa0],0x5
  54f3f0:	05 
  54f3f1:	e8 0a 0b 06 00       	call   0x5aff00
  54f3f6:	83 c4 28             	add    esp,0x28
  54f3f9:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f3fd:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f402:	6a 01                	push   0x1
  54f404:	e8 97 4c eb ff       	call   0x4040a0
  54f409:	39 ac 24 84 00 00 00 	cmp    DWORD PTR [esp+0x84],ebp
  54f410:	75 46                	jne    0x54f458
  54f412:	8d 54 24 10          	lea    edx,[esp+0x10]
  54f416:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f41a:	52                   	push   edx
  54f41b:	68 70 3f 6b 00       	push   0x6b3f70
  54f420:	e8 eb a3 eb ff       	call   0x409810
  54f425:	8d 44 24 30          	lea    eax,[esp+0x30]
  54f429:	c6 44 24 78 06       	mov    BYTE PTR [esp+0x78],0x6
  54f42e:	50                   	push   eax
  54f42f:	68 b6 00 00 00       	push   0xb6
  54f434:	68 38 d6 68 00       	push   0x68d638
  54f439:	68 2c d6 68 00       	push   0x68d62c
  54f43e:	e8 ad 13 05 00       	call   0x5a07f0
  54f443:	ff d0                	call   eax
  54f445:	83 c4 10             	add    esp,0x10
  54f448:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f44c:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f451:	6a 01                	push   0x1
  54f453:	e8 48 4c eb ff       	call   0x4040a0
  54f458:	8b 8c 24 84 00 00 00 	mov    ecx,DWORD PTR [esp+0x84]
  54f45f:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
  54f462:	8d 71 1c             	lea    esi,[ecx+0x1c]
  54f465:	3b c5                	cmp    eax,ebp
  54f467:	75 43                	jne    0x54f4ac
  54f469:	8d 54 24 11          	lea    edx,[esp+0x11]
  54f46d:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54f471:	52                   	push   edx
  54f472:	68 70 3f 6b 00       	push   0x6b3f70
  54f477:	e8 94 a3 eb ff       	call   0x409810
  54f47c:	8d 44 24 40          	lea    eax,[esp+0x40]
  54f480:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  54f485:	50                   	push   eax
  54f486:	6a 44                	push   0x44
  54f488:	68 dc 2c 69 00       	push   0x692cdc
  54f48d:	68 7c 50 69 00       	push   0x69507c
  54f492:	e8 59 13 05 00       	call   0x5a07f0
  54f497:	ff d0                	call   eax
  54f499:	83 c4 10             	add    esp,0x10
  54f49c:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54f4a0:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f4a5:	6a 01                	push   0x1
  54f4a7:	e8 f4 4b eb ff       	call   0x4040a0
  54f4ac:	8a 83 8c 00 00 00    	mov    al,BYTE PTR [ebx+0x8c]
  54f4b2:	8b 36                	mov    esi,DWORD PTR [esi]
  54f4b4:	84 c0                	test   al,al
  54f4b6:	75 46                	jne    0x54f4fe
  54f4b8:	8d 4c 24 12          	lea    ecx,[esp+0x12]
  54f4bc:	51                   	push   ecx
  54f4bd:	68 70 3f 6b 00       	push   0x6b3f70
  54f4c2:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  54f4c6:	e8 45 a3 eb ff       	call   0x409810
  54f4cb:	8d 54 24 50          	lea    edx,[esp+0x50]
  54f4cf:	c6 44 24 78 08       	mov    BYTE PTR [esp+0x78],0x8
  54f4d4:	52                   	push   edx
  54f4d5:	68 2e 01 00 00       	push   0x12e
  54f4da:	68 dc 2c 69 00       	push   0x692cdc
  54f4df:	68 b0 1b 69 00       	push   0x691bb0
  54f4e4:	e8 07 13 05 00       	call   0x5a07f0
  54f4e9:	ff d0                	call   eax
  54f4eb:	83 c4 10             	add    esp,0x10
  54f4ee:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  54f4f2:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f4f7:	6a 01                	push   0x1
  54f4f9:	e8 a2 4b eb ff       	call   0x4040a0
  54f4fe:	39 6b 50             	cmp    DWORD PTR [ebx+0x50],ebp
  54f501:	75 46                	jne    0x54f549
  54f503:	8d 44 24 13          	lea    eax,[esp+0x13]
  54f507:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f50b:	50                   	push   eax
  54f50c:	68 70 3f 6b 00       	push   0x6b3f70
  54f511:	e8 fa a2 eb ff       	call   0x409810
  54f516:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f51a:	c6 44 24 78 09       	mov    BYTE PTR [esp+0x78],0x9
  54f51f:	51                   	push   ecx
  54f520:	68 2f 01 00 00       	push   0x12f
  54f525:	68 dc 2c 69 00       	push   0x692cdc
  54f52a:	68 80 1a 6a 00       	push   0x6a1a80
  54f52f:	e8 bc 12 05 00       	call   0x5a07f0
  54f534:	ff d0                	call   eax
  54f536:	83 c4 10             	add    esp,0x10
  54f539:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f53d:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f542:	6a 01                	push   0x1
  54f544:	e8 57 4b eb ff       	call   0x4040a0
  54f549:	8b 94 24 88 00 00 00 	mov    edx,DWORD PTR [esp+0x88]
  54f550:	8b 8c 24 90 00 00 00 	mov    ecx,DWORD PTR [esp+0x90]
  54f557:	8b 43 50             	mov    eax,DWORD PTR [ebx+0x50]
  54f55a:	81 e2 ff 00 00 00    	and    edx,0xff
  54f560:	52                   	push   edx
  54f561:	8b 94 24 98 00 00 00 	mov    edx,DWORD PTR [esp+0x98]
  54f568:	51                   	push   ecx
  54f569:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  54f56d:	52                   	push   edx
  54f56e:	51                   	push   ecx
  54f56f:	56                   	push   esi
  54f570:	50                   	push   eax
  54f571:	e8 da 89 07 00       	call   0x5c7f50
  54f576:	8b f0                	mov    esi,eax
  54f578:	83 c4 18             	add    esp,0x18
  54f57b:	3b f5                	cmp    esi,ebp
  54f57d:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  54f581:	0f 84 37 03 00 00    	je     0x54f8be
  54f587:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
  54f58a:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  54f58e:	3b c5                	cmp    eax,ebp
  54f590:	75 49                	jne    0x54f5db
  54f592:	8d 94 24 88 00 00 00 	lea    edx,[esp+0x88]
  54f599:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f59d:	52                   	push   edx
  54f59e:	68 70 3f 6b 00       	push   0x6b3f70
  54f5a3:	e8 68 a2 eb ff       	call   0x409810
  54f5a8:	8d 44 24 60          	lea    eax,[esp+0x60]
  54f5ac:	c6 44 24 78 0a       	mov    BYTE PTR [esp+0x78],0xa
  54f5b1:	50                   	push   eax
  54f5b2:	68 b9 00 00 00       	push   0xb9
  54f5b7:	68 98 07 69 00       	push   0x690798
  54f5bc:	68 2c 52 69 00       	push   0x69522c
  54f5c1:	e8 2a 12 05 00       	call   0x5a07f0
  54f5c6:	ff d0                	call   eax
  54f5c8:	83 c4 10             	add    esp,0x10
  54f5cb:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f5cf:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f5d4:	6a 01                	push   0x1
  54f5d6:	e8 c5 4a eb ff       	call   0x4040a0
  54f5db:	8b cf                	mov    ecx,edi
  54f5dd:	e8 de ee ef ff       	call   0x44e4c0
  54f5e2:	85 c0                	test   eax,eax
  54f5e4:	74 5a                	je     0x54f640
  54f5e6:	8b 6f 10             	mov    ebp,DWORD PTR [edi+0x10]
  54f5e9:	8b cf                	mov    ecx,edi
  54f5eb:	f7 dd                	neg    ebp
  54f5ed:	1b ed                	sbb    ebp,ebp
  54f5ef:	33 db                	xor    ebx,ebx
  54f5f1:	83 e5 fe             	and    ebp,0xfffffffe
  54f5f4:	83 c5 02             	add    ebp,0x2
  54f5f7:	e8 c4 ee ef ff       	call   0x44e4c0
  54f5fc:	8b f8                	mov    edi,eax
  54f5fe:	4f                   	dec    edi
  54f5ff:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  54f603:	8d 04 1f             	lea    eax,[edi+ebx*1]
  54f606:	99                   	cdq
  54f607:	2b c2                	sub    eax,edx
  54f609:	8b f0                	mov    esi,eax
  54f60b:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  54f60e:	d1 fe                	sar    esi,1
  54f610:	8d 14 b0             	lea    edx,[eax+esi*4]
  54f613:	8d 44 24 20          	lea    eax,[esp+0x20]
  54f617:	52                   	push   edx
  54f618:	50                   	push   eax
  54f619:	ff 51 14             	call   DWORD PTR [ecx+0x14]
  54f61c:	83 c4 08             	add    esp,0x8
  54f61f:	83 f8 01             	cmp    eax,0x1
  54f622:	0f 84 72 01 00 00    	je     0x54f79a
  54f628:	3b c5                	cmp    eax,ebp
  54f62a:	75 05                	jne    0x54f631
  54f62c:	8d 5e 01             	lea    ebx,[esi+0x1]
  54f62f:	eb 03                	jmp    0x54f634
  54f631:	8d 7e ff             	lea    edi,[esi-0x1]
  54f634:	3b df                	cmp    ebx,edi
  54f636:	7e c7                	jle    0x54f5ff
  54f638:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  54f63c:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  54f640:	6a 54                	push   0x54
  54f642:	e8 6e aa 0b 00       	call   0x60a0b5
  54f647:	8b d8                	mov    ebx,eax
  54f649:	83 c4 04             	add    esp,0x4
  54f64c:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  54f650:	85 db                	test   ebx,ebx
  54f652:	c6 44 24 78 0b       	mov    BYTE PTR [esp+0x78],0xb
  54f657:	74 1f                	je     0x54f678
  54f659:	8b 94 24 84 00 00 00 	mov    edx,DWORD PTR [esp+0x84]
  54f660:	51                   	push   ecx
  54f661:	8b cc                	mov    ecx,esp
  54f663:	89 64 24 28          	mov    DWORD PTR [esp+0x28],esp
  54f667:	89 11                	mov    DWORD PTR [ecx],edx
  54f669:	e8 42 4e 03 00       	call   0x5844b0
  54f66e:	56                   	push   esi
  54f66f:	8b cb                	mov    ecx,ebx
  54f671:	e8 0a 38 00 00       	call   0x552e80
  54f676:	eb 02                	jmp    0x54f67a
  54f678:	33 c0                	xor    eax,eax
  54f67a:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  54f681:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f686:	89 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],eax
  54f68d:	e8 1e 4e 03 00       	call   0x5844b0
  54f692:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54f696:	8b 84 24 88 00 00 00 	mov    eax,DWORD PTR [esp+0x88]
  54f69d:	3b c8                	cmp    ecx,eax
  54f69f:	c6 44 24 78 0c       	mov    BYTE PTR [esp+0x78],0xc
  54f6a4:	74 1d                	je     0x54f6c3
  54f6a6:	85 c9                	test   ecx,ecx
  54f6a8:	74 05                	je     0x54f6af
  54f6aa:	e8 21 a2 eb ff       	call   0x4098d0
  54f6af:	8b 84 24 88 00 00 00 	mov    eax,DWORD PTR [esp+0x88]
  54f6b6:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f6ba:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  54f6be:	e8 ed 4d 03 00       	call   0x5844b0
  54f6c3:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  54f6ca:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f6cf:	e8 3c dc 02 00       	call   0x57d310
  54f6d4:	8a 47 18             	mov    al,BYTE PTR [edi+0x18]
  54f6d7:	84 c0                	test   al,al
  54f6d9:	74 43                	je     0x54f71e
  54f6db:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  54f6df:	51                   	push   ecx
  54f6e0:	68 70 3f 6b 00       	push   0x6b3f70
  54f6e5:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  54f6e9:	e8 22 a1 eb ff       	call   0x409810
  54f6ee:	8d 54 24 60          	lea    edx,[esp+0x60]
  54f6f2:	c6 44 24 78 0d       	mov    BYTE PTR [esp+0x78],0xd
  54f6f7:	52                   	push   edx
  54f6f8:	6a 49                	push   0x49
  54f6fa:	68 98 07 69 00       	push   0x690798
  54f6ff:	68 80 51 69 00       	push   0x695180
  54f704:	e8 e7 10 05 00       	call   0x5a07f0
  54f709:	ff d0                	call   eax
  54f70b:	83 c4 10             	add    esp,0x10
  54f70e:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f712:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f717:	6a 01                	push   0x1
  54f719:	e8 82 49 eb ff       	call   0x4040a0
  54f71e:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  54f725:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54f729:	50                   	push   eax
  54f72a:	51                   	push   ecx
  54f72b:	8b cf                	mov    ecx,edi
  54f72d:	e8 8e 45 00 00       	call   0x553cc0
  54f732:	8b f0                	mov    esi,eax
  54f734:	8a 84 24 88 00 00 00 	mov    al,BYTE PTR [esp+0x88]
  54f73b:	84 c0                	test   al,al
  54f73d:	74 43                	je     0x54f782
  54f73f:	8d 54 24 13          	lea    edx,[esp+0x13]
  54f743:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f747:	52                   	push   edx
  54f748:	68 70 3f 6b 00       	push   0x6b3f70
  54f74d:	e8 be a0 eb ff       	call   0x409810
  54f752:	8d 44 24 60          	lea    eax,[esp+0x60]
  54f756:	c6 44 24 78 0e       	mov    BYTE PTR [esp+0x78],0xe
  54f75b:	50                   	push   eax
  54f75c:	6a 4b                	push   0x4b
  54f75e:	68 98 07 69 00       	push   0x690798
  54f763:	68 78 51 69 00       	push   0x695178
  54f768:	e8 83 10 05 00       	call   0x5a07f0
  54f76d:	ff d0                	call   eax
  54f76f:	83 c4 10             	add    esp,0x10
  54f772:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f776:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f77b:	6a 01                	push   0x1
  54f77d:	e8 1e 49 eb ff       	call   0x4040a0
  54f782:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  54f785:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f789:	51                   	push   ecx
  54f78a:	8b cf                	mov    ecx,edi
  54f78c:	8d 14 b0             	lea    edx,[eax+esi*4]
  54f78f:	52                   	push   edx
  54f790:	e8 fb e3 fa ff       	call   0x4fdb90
  54f795:	e9 8e 00 00 00       	jmp    0x54f828
  54f79a:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  54f79e:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54f7a2:	8b 78 58             	mov    edi,DWORD PTR [eax+0x58]
  54f7a5:	3b 0c b7             	cmp    ecx,DWORD PTR [edi+esi*4]
  54f7a8:	74 19                	je     0x54f7c3
  54f7aa:	85 c9                	test   ecx,ecx
  54f7ac:	74 05                	je     0x54f7b3
  54f7ae:	e8 1d a1 eb ff       	call   0x4098d0
  54f7b3:	8b 0c b7             	mov    ecx,DWORD PTR [edi+esi*4]
  54f7b6:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  54f7ba:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f7be:	e8 ed 4c 03 00       	call   0x5844b0
  54f7c3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f7c7:	e8 b4 58 ed ff       	call   0x425080
  54f7cc:	8b 50 4c             	mov    edx,DWORD PTR [eax+0x4c]
  54f7cf:	8b b4 24 84 00 00 00 	mov    esi,DWORD PTR [esp+0x84]
  54f7d6:	3b d6                	cmp    edx,esi
  54f7d8:	0f 94 c0             	sete   al
  54f7db:	84 c0                	test   al,al
  54f7dd:	75 49                	jne    0x54f828
  54f7df:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  54f7e6:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f7ea:	50                   	push   eax
  54f7eb:	68 70 3f 6b 00       	push   0x6b3f70
  54f7f0:	e8 1b a0 eb ff       	call   0x409810
  54f7f5:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f7f9:	c6 44 24 78 0f       	mov    BYTE PTR [esp+0x78],0xf
  54f7fe:	51                   	push   ecx
  54f7ff:	68 25 02 00 00       	push   0x225
  54f804:	68 98 17 6a 00       	push   0x6a1798
  54f809:	68 b0 1a 6a 00       	push   0x6a1ab0
  54f80e:	e8 dd 0f 05 00       	call   0x5a07f0
  54f813:	ff d0                	call   eax
  54f815:	83 c4 10             	add    esp,0x10
  54f818:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  54f81c:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f821:	6a 01                	push   0x1
  54f823:	e8 78 48 eb ff       	call   0x4040a0
  54f828:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f82c:	e8 4f 58 ed ff       	call   0x425080
  54f831:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  54f835:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f839:	89 50 20             	mov    DWORD PTR [eax+0x20],edx
  54f83c:	e8 3f 58 ed ff       	call   0x425080
  54f841:	8b 8c 24 94 00 00 00 	mov    ecx,DWORD PTR [esp+0x94]
  54f848:	89 48 28             	mov    DWORD PTR [eax+0x28],ecx
  54f84b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f84f:	e8 2c 58 ed ff       	call   0x425080
  54f854:	8b 94 24 90 00 00 00 	mov    edx,DWORD PTR [esp+0x90]
  54f85b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f85f:	89 50 24             	mov    DWORD PTR [eax+0x24],edx
  54f862:	e8 19 58 ed ff       	call   0x425080
  54f867:	8b 8c 24 8c 00 00 00 	mov    ecx,DWORD PTR [esp+0x8c]
  54f86e:	89 48 2c             	mov    DWORD PTR [eax+0x2c],ecx
  54f871:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f875:	e8 06 58 ed ff       	call   0x425080
  54f87a:	8b 94 24 94 00 00 00 	mov    edx,DWORD PTR [esp+0x94]
  54f881:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f885:	89 50 34             	mov    DWORD PTR [eax+0x34],edx
  54f888:	e8 f3 57 ed ff       	call   0x425080
  54f88d:	8b 8c 24 90 00 00 00 	mov    ecx,DWORD PTR [esp+0x90]
  54f894:	89 48 30             	mov    DWORD PTR [eax+0x30],ecx
  54f897:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f89b:	e8 e0 57 ed ff       	call   0x425080
  54f8a0:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f8a4:	c6 40 38 01          	mov    BYTE PTR [eax+0x38],0x1
  54f8a8:	e8 d3 57 ed ff       	call   0x425080
  54f8ad:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f8b1:	c6 40 39 00          	mov    BYTE PTR [eax+0x39],0x0
  54f8b5:	e8 c6 57 ed ff       	call   0x425080
  54f8ba:	c6 40 50 00          	mov    BYTE PTR [eax+0x50],0x0
  54f8be:	8b b4 24 80 00 00 00 	mov    esi,DWORD PTR [esp+0x80]
  54f8c5:	8d 54 24 14          	lea    edx,[esp+0x14]
  54f8c9:	52                   	push   edx
  54f8ca:	8b ce                	mov    ecx,esi
  54f8cc:	e8 8f 9e ef ff       	call   0x449760
  54f8d1:	c7 44 24 2c 01 00 00 	mov    DWORD PTR [esp+0x2c],0x1
  54f8d8:	00 
  54f8d9:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f8dd:	c6 44 24 78 01       	mov    BYTE PTR [esp+0x78],0x1
  54f8e2:	e8 29 da 02 00       	call   0x57d310
  54f8e7:	8d 8c 24 84 00 00 00 	lea    ecx,[esp+0x84]
  54f8ee:	c6 44 24 78 00       	mov    BYTE PTR [esp+0x78],0x0
  54f8f3:	e8 18 da 02 00       	call   0x57d310
  54f8f8:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  54f8fc:	8b c6                	mov    eax,esi
  54f8fe:	5f                   	pop    edi
  54f8ff:	5e                   	pop    esi
  54f900:	5d                   	pop    ebp
  54f901:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54f908:	5b                   	pop    ebx
  54f909:	83 c4 6c             	add    esp,0x6c
  54f90c:	c2 18 00             	ret    0x18
  54f90f:	90                   	nop
  54f910:	6a ff                	push   0xffffffff
  54f912:	68 92 dc 63 00       	push   0x63dc92
  54f917:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54f91d:	50                   	push   eax
  54f91e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54f925:	83 ec 60             	sub    esp,0x60
  54f928:	53                   	push   ebx
  54f929:	55                   	push   ebp
  54f92a:	8b d9                	mov    ebx,ecx
  54f92c:	33 ed                	xor    ebp,ebp
  54f92e:	56                   	push   esi
  54f92f:	57                   	push   edi
  54f930:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  54f934:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
  54f938:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f93c:	c7 44 24 78 01 00 00 	mov    DWORD PTR [esp+0x78],0x1
  54f943:	00 
  54f944:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
  54f948:	e8 63 4b 03 00       	call   0x5844b0
  54f94d:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
  54f954:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f959:	3b c5                	cmp    eax,ebp
  54f95b:	75 46                	jne    0x54f9a3
  54f95d:	8d 44 24 10          	lea    eax,[esp+0x10]
  54f961:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f965:	50                   	push   eax
  54f966:	68 70 3f 6b 00       	push   0x6b3f70
  54f96b:	e8 a0 9e eb ff       	call   0x409810
  54f970:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f974:	c6 44 24 78 03       	mov    BYTE PTR [esp+0x78],0x3
  54f979:	51                   	push   ecx
  54f97a:	68 b6 00 00 00       	push   0xb6
  54f97f:	68 38 d6 68 00       	push   0x68d638
  54f984:	68 2c d6 68 00       	push   0x68d62c
  54f989:	e8 62 0e 05 00       	call   0x5a07f0
  54f98e:	ff d0                	call   eax
