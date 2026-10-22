
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005b14c0 <.text+0x1b04c0>:
  5b14c0:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5b14c4:	56                   	push   esi
  5b14c5:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5b14c9:	57                   	push   edi
  5b14ca:	8d 7e 1c             	lea    edi,[esi+0x1c]
  5b14cd:	8b d7                	mov    edx,edi
  5b14cf:	e8 6c 19 00 00       	call   0x5b2e40
  5b14d4:	d8 66 28             	fsub   DWORD PTR [esi+0x28]
  5b14d7:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5b14db:	8b d7                	mov    edx,edi
  5b14dd:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
  5b14e1:	e8 5a 19 00 00       	call   0x5b2e40
  5b14e6:	d8 66 28             	fsub   DWORD PTR [esi+0x28]
  5b14e9:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  5b14ed:	5f                   	pop    edi
  5b14ee:	5e                   	pop    esi
  5b14ef:	d8 d9                	fcomp  st(1)
  5b14f1:	df e0                	fnstsw ax
  5b14f3:	f6 c4 40             	test   ah,0x40
  5b14f6:	74 0f                	je     0x5b1507
  5b14f8:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b14fc:	dd d8                	fstp   st(0)
  5b14fe:	d9 05 50 a4 64 00    	fld    DWORD PTR ds:0x64a450
  5b1504:	d9 18                	fstp   DWORD PTR [eax]
  5b1506:	c3                   	ret
  5b1507:	d8 6c 24 04          	fsubr  DWORD PTR [esp+0x4]
  5b150b:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5b150f:	d8 7c 24 04          	fdivr  DWORD PTR [esp+0x4]
  5b1513:	d9 19                	fstp   DWORD PTR [ecx]
  5b1515:	c3                   	ret
  5b1516:	90                   	nop
  5b1517:	90                   	nop
  5b1518:	90                   	nop
  5b1519:	90                   	nop
  5b151a:	90                   	nop
  5b151b:	90                   	nop
  5b151c:	90                   	nop
  5b151d:	90                   	nop
  5b151e:	90                   	nop
  5b151f:	90                   	nop
  5b1520:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5b1524:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5b1528:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5b152c:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5b1532:	8d 42 0c             	lea    eax,[edx+0xc]
  5b1535:	56                   	push   esi
  5b1536:	57                   	push   edi
  5b1537:	8b f1                	mov    esi,ecx
  5b1539:	8b 38                	mov    edi,DWORD PTR [eax]
  5b153b:	89 3e                	mov    DWORD PTR [esi],edi
  5b153d:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
  5b1540:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  5b1543:	5f                   	pop    edi
  5b1544:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5b1547:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  5b154a:	5e                   	pop    esi
  5b154b:	df e0                	fnstsw ax
  5b154d:	f6 c4 40             	test   ah,0x40
  5b1550:	75 0e                	jne    0x5b1560
  5b1552:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b1556:	51                   	push   ecx
  5b1557:	50                   	push   eax
  5b1558:	83 c2 1c             	add    edx,0x1c
  5b155b:	e8 c0 1a 00 00       	call   0x5b3020
