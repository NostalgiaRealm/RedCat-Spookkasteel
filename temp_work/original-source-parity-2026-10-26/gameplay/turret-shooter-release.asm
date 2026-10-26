
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0041c5b0 <.text+0x1b5b0>:
  41c5b0:	ff 50 48             	call   DWORD PTR [eax+0x48]
  41c5b3:	8b 10                	mov    edx,DWORD PTR [eax]
  41c5b5:	be 01 00 00 00       	mov    esi,0x1
  41c5ba:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  41c5be:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  41c5c2:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  41c5c5:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
  41c5c9:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  41c5cd:	d8 83 2c 02 00 00    	fadd   DWORD PTR [ebx+0x22c]
  41c5d3:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  41c5d6:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  41c5da:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  41c5de:	8b 83 30 02 00 00    	mov    eax,DWORD PTR [ebx+0x230]
  41c5e4:	85 c0                	test   eax,eax
  41c5e6:	0f 85 96 00 00 00    	jne    0x41c682
  41c5ec:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  41c5f0:	6a 00                	push   0x0
  41c5f2:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  41c5f6:	88 44 24 54          	mov    BYTE PTR [esp+0x54],al
  41c5fa:	e8 a1 7a fe ff       	call   0x4040a0
  41c5ff:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  41c604:	83 c9 ff             	or     ecx,0xffffffff
  41c607:	33 c0                	xor    eax,eax
  41c609:	6a 01                	push   0x1
  41c60b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  41c60d:	f7 d1                	not    ecx
  41c60f:	49                   	dec    ecx
  41c610:	8b e9                	mov    ebp,ecx
  41c612:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  41c616:	55                   	push   ebp
  41c617:	e8 24 53 fe ff       	call   0x401940
  41c61c:	84 c0                	test   al,al
  41c61e:	74 29                	je     0x41c649
  41c620:	8b 7c 24 54          	mov    edi,DWORD PTR [esp+0x54]
  41c624:	8b cd                	mov    ecx,ebp
  41c626:	8b d1                	mov    edx,ecx
  41c628:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  41c62d:	c1 e9 02             	shr    ecx,0x2
  41c630:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  41c632:	8b ca                	mov    ecx,edx
  41c634:	83 e1 03             	and    ecx,0x3
  41c637:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  41c639:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  41c63d:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  41c641:	89 6c 24 58          	mov    DWORD PTR [esp+0x58],ebp
  41c645:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  41c649:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  41c64d:	c7 44 24 74 01 00 00 	mov    DWORD PTR [esp+0x74],0x1
  41c654:	00 
  41c655:	51                   	push   ecx
  41c656:	68 99 01 00 00       	push   0x199
  41c65b:	68 d0 f1 68 00       	push   0x68f1d0
  41c660:	68 10 f3 68 00       	push   0x68f310
  41c665:	e8 86 41 18 00       	call   0x5a07f0
  41c66a:	ff d0                	call   eax
  41c66c:	83 c4 10             	add    esp,0x10
  41c66f:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  41c673:	c7 44 24 74 ff ff ff 	mov    DWORD PTR [esp+0x74],0xffffffff
  41c67a:	ff 
  41c67b:	6a 01                	push   0x1
  41c67d:	e8 1e 7a fe ff       	call   0x4040a0
  41c682:	8b 8b 30 02 00 00    	mov    ecx,DWORD PTR [ebx+0x230]
  41c688:	8d 44 24 60          	lea    eax,[esp+0x60]
  41c68c:	56                   	push   esi
  41c68d:	50                   	push   eax
  41c68e:	8b 11                	mov    edx,DWORD PTR [ecx]
  41c690:	ff 52 58             	call   DWORD PTR [edx+0x58]
  41c693:	8b 08                	mov    ecx,DWORD PTR [eax]
  41c695:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
  41c699:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  41c69d:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  41c6a0:	51                   	push   ecx
  41c6a1:	89 54 24 4c          	mov    DWORD PTR [esp+0x4c],edx
  41c6a5:	8d 54 24 48          	lea    edx,[esp+0x48]
  41c6a9:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  41c6ac:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  41c6b0:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  41c6b4:	e8 27 69 19 00       	call   0x5b2fe0
  41c6b9:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  41c6bd:	e8 5e 68 19 00       	call   0x5b2f20
  41c6c2:	8b cb                	mov    ecx,ebx
  41c6c4:	dd d8                	fstp   st(0)
  41c6c6:	e8 35 ec 00 00       	call   0x42b300
  41c6cb:	8b 50 28             	mov    edx,DWORD PTR [eax+0x28]
  41c6ce:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  41c6d2:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  41c6d6:	d9 e0                	fchs
  41c6d8:	d9 54 24 20          	fst    DWORD PTR [esp+0x20]
  41c6dc:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  41c6e0:	e8 bb dd 1e 00       	call   0x60a4a0
  41c6e5:	99                   	cdq
  41c6e6:	b9 10 27 00 00       	mov    ecx,0x2710
  41c6eb:	f7 f9                	idiv   ecx
  41c6ed:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  41c6f1:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  41c6f5:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  41c6f9:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  41c6fd:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  41c701:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  41c705:	de c9                	fmulp  st(1),st
  41c707:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  41c70d:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  41c711:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  41c715:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  41c719:	e8 82 dd 1e 00       	call   0x60a4a0
  41c71e:	99                   	cdq
  41c71f:	b9 10 27 00 00       	mov    ecx,0x2710
  41c724:	f7 f9                	idiv   ecx
  41c726:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  41c72a:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  41c72e:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  41c732:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  41c736:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  41c73a:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  41c73e:	de c9                	fmulp  st(1),st
  41c740:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  41c746:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  41c74a:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  41c74e:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  41c752:	e8 49 dd 1e 00       	call   0x60a4a0
  41c757:	99                   	cdq
  41c758:	b9 10 27 00 00       	mov    ecx,0x2710
  41c75d:	f7 f9                	idiv   ecx
  41c75f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  41c763:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  41c767:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  41c76b:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  41c76f:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  41c773:	de c9                	fmulp  st(1),st
  41c775:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  41c77b:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  41c77f:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  41c783:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  41c787:	e8 94 67 19 00       	call   0x5b2f20
  41c78c:	8b 8b 30 02 00 00    	mov    ecx,DWORD PTR [ebx+0x230]
  41c792:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  41c796:	dd d8                	fstp   st(0)
  41c798:	8b 11                	mov    edx,DWORD PTR [ecx]
  41c79a:	50                   	push   eax
  41c79b:	8d 44 24 48          	lea    eax,[esp+0x48]
  41c79f:	50                   	push   eax
  41c7a0:	ff 52 5c             	call   DWORD PTR [edx+0x5c]
  41c7a3:	46                   	inc    esi
  41c7a4:	83 fe 02             	cmp    esi,0x2
  41c7a7:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  41c7ab:	0f 8e 2d fe ff ff    	jle    0x41c5de
  41c7b1:	8b 13                	mov    edx,DWORD PTR [ebx]
  41c7b3:	6a 02                	push   0x2
  41c7b5:	8b cb                	mov    ecx,ebx
  41c7b7:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
  41c7bd:	8b 4c 24 6c          	mov    ecx,DWORD PTR [esp+0x6c]
  41c7c1:	5f                   	pop    edi
  41c7c2:	5e                   	pop    esi
  41c7c3:	5d                   	pop    ebp
  41c7c4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  41c7cb:	5b                   	pop    ebx
  41c7cc:	83 c4 68             	add    esp,0x68
  41c7cf:	c3                   	ret
