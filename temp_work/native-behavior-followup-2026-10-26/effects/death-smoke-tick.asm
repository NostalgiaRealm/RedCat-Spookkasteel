
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0046e660 <.text+0x6d660>:
  46e660:	51                   	push   ecx
  46e661:	8a 41 7c             	mov    al,BYTE PTR [ecx+0x7c]
  46e664:	89 4c 24 00          	mov    DWORD PTR [esp+0x0],ecx
  46e668:	84 c0                	test   al,al
  46e66a:	74 4d                	je     0x46e6b9
  46e66c:	8a 81 68 01 00 00    	mov    al,BYTE PTR [ecx+0x168]
  46e672:	84 c0                	test   al,al
  46e674:	75 0b                	jne    0x46e681
  46e676:	6a 00                	push   0x0
  46e678:	e8 d3 3c 09 00       	call   0x502350
  46e67d:	59                   	pop    ecx
  46e67e:	c2 08 00             	ret    0x8
  46e681:	53                   	push   ebx
  46e682:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
  46e686:	55                   	push   ebp
  46e687:	56                   	push   esi
  46e688:	57                   	push   edi
  46e689:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  46e68d:	8d b1 fc 00 00 00    	lea    esi,[ecx+0xfc]
  46e693:	bd 0f 00 00 00       	mov    ebp,0xf
  46e698:	8b 06                	mov    eax,DWORD PTR [esi]
  46e69a:	57                   	push   edi
  46e69b:	53                   	push   ebx
  46e69c:	8b ce                	mov    ecx,esi
  46e69e:	ff 50 04             	call   DWORD PTR [eax+0x4]
  46e6a1:	81 c6 44 01 00 00    	add    esi,0x144
  46e6a7:	4d                   	dec    ebp
  46e6a8:	75 ee                	jne    0x46e698
  46e6aa:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  46e6ae:	57                   	push   edi
  46e6af:	53                   	push   ebx
  46e6b0:	e8 4b 09 00 00       	call   0x46f000
  46e6b5:	5f                   	pop    edi
  46e6b6:	5e                   	pop    esi
  46e6b7:	5d                   	pop    ebp
  46e6b8:	5b                   	pop    ebx
  46e6b9:	59                   	pop    ecx
  46e6ba:	c2 08 00             	ret    0x8
