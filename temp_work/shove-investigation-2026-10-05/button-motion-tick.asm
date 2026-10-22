
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004cb537 <.text+0xca537>:
  4cb537:	8b ce                	mov    ecx,esi
  4cb539:	e8 42 fc ff ff       	call   0x4cb180
  4cb53e:	6a 01                	push   0x1
  4cb540:	6a 01                	push   0x1
  4cb542:	8b ce                	mov    ecx,esi
  4cb544:	e8 e7 fb ff ff       	call   0x4cb130
  4cb549:	c7 86 68 01 00 00 03 	mov    DWORD PTR [esi+0x168],0x3
  4cb550:	00 00 00 
  4cb553:	5f                   	pop    edi
  4cb554:	5e                   	pop    esi
  4cb555:	5b                   	pop    ebx
  4cb556:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4cb55a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4cb561:	83 c4 40             	add    esp,0x40
  4cb564:	c2 08 00             	ret    0x8
  4cb567:	8b ce                	mov    ecx,esi
  4cb569:	e8 a2 51 00 00       	call   0x4d0710
  4cb56e:	db 44 24 54          	fild   DWORD PTR [esp+0x54]
  4cb572:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4cb578:	de c1                	faddp  st(1),st
  4cb57a:	d9 54 24 0c          	fst    DWORD PTR [esp+0xc]
  4cb57e:	d8 9e 3c 01 00 00    	fcomp  DWORD PTR [esi+0x13c]
  4cb584:	df e0                	fnstsw ax
  4cb586:	f6 c4 41             	test   ah,0x41
  4cb589:	75 3f                	jne    0x4cb5ca
  4cb58b:	8b 8e 3c 01 00 00    	mov    ecx,DWORD PTR [esi+0x13c]
  4cb591:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
  4cb595:	8b c1                	mov    eax,ecx
  4cb597:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  4cb59b:	52                   	push   edx
  4cb59c:	50                   	push   eax
  4cb59d:	8b ce                	mov    ecx,esi
  4cb59f:	e8 ac f7 ff ff       	call   0x4cad50
  4cb5a4:	84 c0                	test   al,al
  4cb5a6:	0f 84 ee 02 00 00    	je     0x4cb89a
  4cb5ac:	c7 86 68 01 00 00 04 	mov    DWORD PTR [esi+0x168],0x4
  4cb5b3:	00 00 00 
  4cb5b6:	5f                   	pop    edi
  4cb5b7:	5e                   	pop    esi
  4cb5b8:	5b                   	pop    ebx
  4cb5b9:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4cb5bd:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4cb5c4:	83 c4 40             	add    esp,0x40
  4cb5c7:	c2 08 00             	ret    0x8
  4cb5ca:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  4cb5ce:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  4cb5d2:	51                   	push   ecx
  4cb5d3:	52                   	push   edx
  4cb5d4:	8b ce                	mov    ecx,esi
  4cb5d6:	e8 75 f7 ff ff       	call   0x4cad50
  4cb5db:	5f                   	pop    edi
  4cb5dc:	5e                   	pop    esi
  4cb5dd:	5b                   	pop    ebx
  4cb5de:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4cb5e2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4cb5e9:	83 c4 40             	add    esp,0x40
  4cb5ec:	c2 08 00             	ret    0x8
  4cb5ef:	6a 00                	push   0x0
  4cb5f1:	6a 01                	push   0x1
  4cb5f3:	8b ce                	mov    ecx,esi
  4cb5f5:	e8 36 fb ff ff       	call   0x4cb130
  4cb5fa:	c7 86 68 01 00 00 05 	mov    DWORD PTR [esi+0x168],0x5
  4cb601:	00 00 00 
  4cb604:	5f                   	pop    edi
  4cb605:	5e                   	pop    esi
  4cb606:	5b                   	pop    ebx
  4cb607:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4cb60b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4cb612:	83 c4 40             	add    esp,0x40
  4cb615:	c2 08 00             	ret    0x8
