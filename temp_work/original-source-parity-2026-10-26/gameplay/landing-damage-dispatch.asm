
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004dc600 <.text+0xdb600>:
  4dc600:	4c                   	dec    esp
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
