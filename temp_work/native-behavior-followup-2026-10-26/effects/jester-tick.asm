
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00477410 <.text+0x76410>:
  477410:	83 ec 08             	sub    esp,0x8
  477413:	53                   	push   ebx
  477414:	57                   	push   edi
  477415:	8b f9                	mov    edi,ecx
  477417:	33 db                	xor    ebx,ebx
  477419:	38 5f 7c             	cmp    BYTE PTR [edi+0x7c],bl
  47741c:	0f 84 7a 01 00 00    	je     0x47759c
  477422:	8b 87 d0 14 00 00    	mov    eax,DWORD PTR [edi+0x14d0]
  477428:	83 f8 0f             	cmp    eax,0xf
  47742b:	7c 18                	jl     0x477445
  47742d:	38 9f d4 13 00 00    	cmp    BYTE PTR [edi+0x13d4],bl
  477433:	75 10                	jne    0x477445
  477435:	53                   	push   ebx
  477436:	8b cf                	mov    ecx,edi
  477438:	e8 13 af 08 00       	call   0x502350
  47743d:	5f                   	pop    edi
  47743e:	5b                   	pop    ebx
  47743f:	83 c4 08             	add    esp,0x8
  477442:	c2 08 00             	ret    0x8
  477445:	55                   	push   ebp
  477446:	83 f8 0f             	cmp    eax,0xf
  477449:	56                   	push   esi
  47744a:	0f 8d c8 00 00 00    	jge    0x477518
  477450:	8b 8f c0 14 00 00    	mov    ecx,DWORD PTR [edi+0x14c0]
  477456:	8d b7 c0 14 00 00    	lea    esi,[edi+0x14c0]
  47745c:	83 f9 ff             	cmp    ecx,0xffffffff
  47745f:	b2 01                	mov    dl,0x1
  477461:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  477465:	74 43                	je     0x4774aa
  477467:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  47746a:	83 f8 ff             	cmp    eax,0xffffffff
  47746d:	75 12                	jne    0x477481
  47746f:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  477473:	c7 46 08 00 00 80 3f 	mov    DWORD PTR [esi+0x8],0x3f800000
  47747a:	03 c8                	add    ecx,eax
  47747c:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  47747f:	eb 29                	jmp    0x4774aa
  477481:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
  477485:	3b e8                	cmp    ebp,eax
  477487:	7e 07                	jle    0x477490
  477489:	89 5e 08             	mov    DWORD PTR [esi+0x8],ebx
  47748c:	32 d2                	xor    dl,dl
  47748e:	eb 1a                	jmp    0x4774aa
  477490:	3b cb                	cmp    ecx,ebx
  477492:	7e 13                	jle    0x4774a7
  477494:	2b c5                	sub    eax,ebp
  477496:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47749a:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  47749e:	da 74 24 14          	fidiv  DWORD PTR [esp+0x14]
  4774a2:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
  4774a5:	eb 03                	jmp    0x4774aa
  4774a7:	89 5e 08             	mov    DWORD PTR [esi+0x8],ebx
  4774aa:	3a d3                	cmp    dl,bl
  4774ac:	88 56 0c             	mov    BYTE PTR [esi+0xc],dl
  4774af:	75 67                	jne    0x477518
  4774b1:	8b 8f d0 14 00 00    	mov    ecx,DWORD PTR [edi+0x14d0]
  4774b7:	8d 04 cd 00 00 00 00 	lea    eax,[ecx*8+0x0]
  4774be:	2b c1                	sub    eax,ecx
  4774c0:	8d 0c 40             	lea    ecx,[eax+eax*2]
  4774c3:	c1 e1 04             	shl    ecx,0x4
  4774c6:	8d 04 39             	lea    eax,[ecx+edi*1]
  4774c9:	8a 8c 39 74 01 00 00 	mov    cl,BYTE PTR [ecx+edi*1+0x174]
  4774d0:	3a cb                	cmp    cl,bl
  4774d2:	8d 88 08 01 00 00    	lea    ecx,[eax+0x108]
  4774d8:	74 07                	je     0x4774e1
  4774da:	e8 a1 72 00 00       	call   0x47e780
  4774df:	eb 05                	jmp    0x4774e6
  4774e1:	e8 2a 72 00 00       	call   0x47e710
  4774e6:	8b 8f d0 14 00 00    	mov    ecx,DWORD PTR [edi+0x14d0]
  4774ec:	8a 87 bc 14 00 00    	mov    al,BYTE PTR [edi+0x14bc]
  4774f2:	41                   	inc    ecx
  4774f3:	3a c3                	cmp    al,bl
  4774f5:	89 8f d0 14 00 00    	mov    DWORD PTR [edi+0x14d0],ecx
  4774fb:	74 08                	je     0x477505
  4774fd:	d9 05 34 87 6b 00    	fld    DWORD PTR ds:0x6b8734
  477503:	eb 06                	jmp    0x47750b
  477505:	d9 05 38 87 6b 00    	fld    DWORD PTR ds:0x6b8738
  47750b:	e8 10 36 19 00       	call   0x60ab20
  477510:	50                   	push   eax
  477511:	8b ce                	mov    ecx,esi
  477513:	e8 98 cc f8 ff       	call   0x4041b0
  477518:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47751c:	38 9f bc 14 00 00    	cmp    BYTE PTR [edi+0x14bc],bl
  477522:	d8 0d 6c e1 64 00    	fmul   DWORD PTR ds:0x64e16c
  477528:	d9 97 ec 14 00 00    	fst    DWORD PTR [edi+0x14ec]
  47752e:	75 0e                	jne    0x47753e
  477530:	d8 0d 6c d6 64 00    	fmul   DWORD PTR ds:0x64d66c
  477536:	d9 9f ec 14 00 00    	fstp   DWORD PTR [edi+0x14ec]
  47753c:	eb 02                	jmp    0x477540
  47753e:	dd d8                	fstp   st(0)
  477540:	8b 6c 24 20          	mov    ebp,DWORD PTR [esp+0x20]
  477544:	8d b7 2c 01 00 00    	lea    esi,[edi+0x12c]
  47754a:	bb 0f 00 00 00       	mov    ebx,0xf
  47754f:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  477555:	d8 26                	fsub   DWORD PTR [esi]
  477557:	8d 56 d0             	lea    edx,[esi-0x30]
  47755a:	8d 86 f4 00 00 00    	lea    eax,[esi+0xf4]
  477560:	55                   	push   ebp
  477561:	d8 8f e4 14 00 00    	fmul   DWORD PTR [edi+0x14e4]
  477567:	d9 87 d8 14 00 00    	fld    DWORD PTR [edi+0x14d8]
  47756d:	d8 0e                	fmul   DWORD PTR [esi]
  47756f:	de c1                	faddp  st(1),st
  477571:	d9 5e d4             	fstp   DWORD PTR [esi-0x2c]
  477574:	8b 0a                	mov    ecx,DWORD PTR [edx]
  477576:	89 08                	mov    DWORD PTR [eax],ecx
  477578:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47757b:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  47757e:	8d 4e dc             	lea    ecx,[esi-0x24]
  477581:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  477584:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  477587:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  47758b:	8b 01                	mov    eax,DWORD PTR [ecx]
  47758d:	52                   	push   edx
  47758e:	ff 50 04             	call   DWORD PTR [eax+0x4]
  477591:	81 c6 50 01 00 00    	add    esi,0x150
  477597:	4b                   	dec    ebx
  477598:	75 b5                	jne    0x47754f
  47759a:	5e                   	pop    esi
  47759b:	5d                   	pop    ebp
  47759c:	5f                   	pop    edi
  47759d:	5b                   	pop    ebx
  47759e:	83 c4 08             	add    esp,0x8
  4775a1:	c2 08 00             	ret    0x8
