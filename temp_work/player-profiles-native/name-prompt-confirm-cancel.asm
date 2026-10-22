
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcMenu.dat:     file format pei-i386


Disassembly of section CODE:

005545d0 <CODE+0x1535d0>:
  5545d0:	55                   	push   ebp
  5545d1:	8b ec                	mov    ebp,esp
  5545d3:	83 c4 f8             	add    esp,0xfffffff8
  5545d6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5545d9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5545dc:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5545df:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5545e2:	e8 d5 a8 ff ff       	call   0x54eebc
  5545e7:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5545ec:	8b 00                	mov    eax,DWORD PTR [eax]
  5545ee:	ba 20 46 55 00       	mov    edx,0x554620
  5545f3:	e8 74 56 01 00       	call   0x569c6c
  5545f8:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5545fd:	8b 00                	mov    eax,DWORD PTR [eax]
  5545ff:	e8 e0 63 01 00       	call   0x56a9e4
  554604:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554607:	c7 80 34 02 00 00 01 	mov    DWORD PTR [eax+0x234],0x1
  55460e:	00 00 00 
  554611:	59                   	pop    ecx
  554612:	59                   	pop    ecx
  554613:	5d                   	pop    ebp
  554614:	c3                   	ret
  554615:	00 00                	add    BYTE PTR [eax],al
  554617:	00 ff                	add    bh,bh
  554619:	ff                   	(bad)
  55461a:	ff                   	(bad)
  55461b:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554621:	43                   	inc    ebx
  554622:	4d                   	dec    ebp
  554623:	6e                   	outs   dx,BYTE PTR ds:[esi]
  554624:	31 00                	xor    DWORD PTR [eax],eax
  554626:	00 00                	add    BYTE PTR [eax],al
  554628:	55                   	push   ebp
  554629:	8b ec                	mov    ebp,esp
  55462b:	83 c4 f8             	add    esp,0xfffffff8
  55462e:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  554631:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  554634:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  554637:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55463a:	e8 55 a8 ff ff       	call   0x54ee94
  55463f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554644:	8b 00                	mov    eax,DWORD PTR [eax]
  554646:	ba 78 46 55 00       	mov    edx,0x554678
  55464b:	e8 1c 56 01 00       	call   0x569c6c
  554650:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554655:	8b 00                	mov    eax,DWORD PTR [eax]
  554657:	e8 88 63 01 00       	call   0x56a9e4
  55465c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55465f:	c7 80 34 02 00 00 02 	mov    DWORD PTR [eax+0x234],0x2
  554666:	00 00 00 
  554669:	59                   	pop    ecx
  55466a:	59                   	pop    ecx
  55466b:	5d                   	pop    ebp
  55466c:	c3                   	ret
  55466d:	00 00                	add    BYTE PTR [eax],al
  55466f:	00 ff                	add    bh,bh
  554671:	ff                   	(bad)
  554672:	ff                   	(bad)
  554673:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554679:	63 4d 6e             	arpl   WORD PTR [ebp+0x6e],ecx
  55467c:	32 00                	xor    al,BYTE PTR [eax]
	...
