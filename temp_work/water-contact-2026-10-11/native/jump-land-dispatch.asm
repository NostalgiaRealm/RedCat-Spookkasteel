
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004dc700 <.text+0xdb700>:
  4dc700:	24 24                	and    al,0x24
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
  4dc750:	68 08 57 6b 00       	push   0x6b5708
  4dc755:	52                   	push   edx
  4dc756:	e8 85 38 07 00       	call   0x54ffe0
  4dc75b:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4dc75f:	85 c0                	test   eax,eax
  4dc761:	0f 84 ac 01 00 00    	je     0x4dc913
  4dc767:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc76a:	8b c8                	mov    ecx,eax
  4dc76c:	83 c0 14             	add    eax,0x14
  4dc76f:	4e                   	dec    esi
  4dc770:	8b d6                	mov    edx,esi
  4dc772:	85 d2                	test   edx,edx
  4dc774:	89 30                	mov    DWORD PTR [eax],esi
  4dc776:	0f 85 97 01 00 00    	jne    0x4dc913
  4dc77c:	6a 00                	push   0x0
  4dc77e:	e8 3d f8 0c 00       	call   0x5abfc0
  4dc783:	e9 8b 01 00 00       	jmp    0x4dc913
  4dc788:	8b 8b f8 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf8]
  4dc78e:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dc790:	ff 50 30             	call   DWORD PTR [eax+0x30]
  4dc793:	84 c0                	test   al,al
  4dc795:	0f 84 7c 01 00 00    	je     0x4dc917
  4dc79b:	8b 84 24 38 02 00 00 	mov    eax,DWORD PTR [esp+0x238]
  4dc7a2:	a9 00 00 02 00       	test   eax,0x20000
  4dc7a7:	74 49                	je     0x4dc7f2
  4dc7a9:	6a 00                	push   0x0
  4dc7ab:	6a 00                	push   0x0
  4dc7ad:	68 00 00 80 3f       	push   0x3f800000
  4dc7b2:	6a 00                	push   0x0
  4dc7b4:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4dc7b8:	68 40 56 6b 00       	push   0x6b5640
  4dc7bd:	51                   	push   ecx
  4dc7be:	8b ce                	mov    ecx,esi
  4dc7c0:	e8 1b 38 07 00       	call   0x54ffe0
  4dc7c5:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  4dc7c9:	85 c0                	test   eax,eax
  4dc7cb:	0f 84 46 01 00 00    	je     0x4dc917
  4dc7d1:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc7d4:	8b c8                	mov    ecx,eax
  4dc7d6:	83 c0 14             	add    eax,0x14
  4dc7d9:	4e                   	dec    esi
  4dc7da:	8b d6                	mov    edx,esi
  4dc7dc:	85 d2                	test   edx,edx
  4dc7de:	89 30                	mov    DWORD PTR [eax],esi
  4dc7e0:	0f 85 31 01 00 00    	jne    0x4dc917
  4dc7e6:	6a 00                	push   0x0
  4dc7e8:	e8 d3 f7 0c 00       	call   0x5abfc0
  4dc7ed:	e9 25 01 00 00       	jmp    0x4dc917
  4dc7f2:	6a 00                	push   0x0
  4dc7f4:	6a 00                	push   0x0
  4dc7f6:	a9 00 00 01 00       	test   eax,0x10000
  4dc7fb:	68 00 00 80 3f       	push   0x3f800000
  4dc800:	6a 00                	push   0x0
  4dc802:	74 3e                	je     0x4dc842
  4dc804:	8d 54 24 44          	lea    edx,[esp+0x44]
  4dc808:	68 48 55 6b 00       	push   0x6b5548
  4dc80d:	52                   	push   edx
  4dc80e:	8b ce                	mov    ecx,esi
  4dc810:	e8 cb 37 07 00       	call   0x54ffe0
  4dc815:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  4dc819:	85 c0                	test   eax,eax
  4dc81b:	0f 84 f6 00 00 00    	je     0x4dc917
  4dc821:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc824:	8b c8                	mov    ecx,eax
  4dc826:	83 c0 14             	add    eax,0x14
  4dc829:	4e                   	dec    esi
  4dc82a:	8b d6                	mov    edx,esi
  4dc82c:	85 d2                	test   edx,edx
  4dc82e:	89 30                	mov    DWORD PTR [eax],esi
  4dc830:	0f 85 e1 00 00 00    	jne    0x4dc917
  4dc836:	6a 00                	push   0x0
  4dc838:	e8 83 f7 0c 00       	call   0x5abfc0
  4dc83d:	e9 d5 00 00 00       	jmp    0x4dc917
  4dc842:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4dc846:	68 38 57 6b 00       	push   0x6b5738
  4dc84b:	50                   	push   eax
  4dc84c:	8b ce                	mov    ecx,esi
  4dc84e:	e8 8d 37 07 00       	call   0x54ffe0
  4dc853:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  4dc857:	85 c0                	test   eax,eax
  4dc859:	0f 84 b8 00 00 00    	je     0x4dc917
  4dc85f:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dc862:	8b c8                	mov    ecx,eax
  4dc864:	83 c0 14             	add    eax,0x14
  4dc867:	4e                   	dec    esi
  4dc868:	8b d6                	mov    edx,esi
  4dc86a:	85 d2                	test   edx,edx
  4dc86c:	89 30                	mov    DWORD PTR [eax],esi
  4dc86e:	0f 85 a3 00 00 00    	jne    0x4dc917
  4dc874:	6a 00                	push   0x0
  4dc876:	e8 45 f7 0c 00       	call   0x5abfc0
  4dc87b:	e9 97 00 00 00       	jmp    0x4dc917
  4dc880:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4dc884:	6a 00                	push   0x0
  4dc886:	88 4c 24 6c          	mov    BYTE PTR [esp+0x6c],cl
  4dc88a:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4dc88e:	e8 0d 78 f2 ff       	call   0x4040a0
  4dc893:	bf 48 05 69 00       	mov    edi,0x690548
  4dc898:	83 c9 ff             	or     ecx,0xffffffff
  4dc89b:	33 c0                	xor    eax,eax
  4dc89d:	6a 01                	push   0x1
  4dc89f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc8a1:	f7 d1                	not    ecx
  4dc8a3:	49                   	dec    ecx
  4dc8a4:	8b e9                	mov    ebp,ecx
  4dc8a6:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4dc8aa:	55                   	push   ebp
  4dc8ab:	e8 90 50 f2 ff       	call   0x401940
  4dc8b0:	84 c0                	test   al,al
  4dc8b2:	74 23                	je     0x4dc8d7
  4dc8b4:	8b 7c 24 6c          	mov    edi,DWORD PTR [esp+0x6c]
  4dc8b8:	8b cd                	mov    ecx,ebp
  4dc8ba:	8b d1                	mov    edx,ecx
  4dc8bc:	be 48 05 69 00       	mov    esi,0x690548
  4dc8c1:	c1 e9 02             	shr    ecx,0x2
  4dc8c4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dc8c6:	8b ca                	mov    ecx,edx
  4dc8c8:	55                   	push   ebp
  4dc8c9:	83 e1 03             	and    ecx,0x3
  4dc8cc:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dc8ce:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4dc8d2:	e8 b9 78 f2 ff       	call   0x404190
  4dc8d7:	8d 44 24 68          	lea    eax,[esp+0x68]
  4dc8db:	c7 84 24 24 02 00 00 	mov    DWORD PTR [esp+0x224],0xd
  4dc8e2:	0d 00 00 00 
  4dc8e6:	50                   	push   eax
  4dc8e7:	68 16 08 00 00       	push   0x816
  4dc8ec:	68 28 97 69 00       	push   0x699728
  4dc8f1:	e8 2a 36 0d 00       	call   0x5aff20
  4dc8f6:	83 c4 0c             	add    esp,0xc
  4dc8f9:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4dc8fd:	c7 84 24 24 02 00 00 	mov    DWORD PTR [esp+0x224],0xffffffff
  4dc904:	ff ff ff ff 
  4dc908:	6a 01                	push   0x1
  4dc90a:	e8 91 77 f2 ff       	call   0x4040a0
  4dc90f:	eb 06                	jmp    0x4dc917
  4dc911:	dd d8                	fstp   st(0)
  4dc913:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  4dc917:	8b 83 10 02 00 00    	mov    eax,DWORD PTR [ebx+0x210]
  4dc91d:	be 00 54 6b 00       	mov    esi,0x6b5400
  4dc922:	3b c6                	cmp    eax,esi
  4dc924:	5d                   	pop    ebp
  4dc925:	0f 84 1a 01 00 00    	je     0x4dca45
  4dc92b:	8b 83 0c 02 00 00    	mov    eax,DWORD PTR [ebx+0x20c]
  4dc931:	85 c0                	test   eax,eax
  4dc933:	74 7f                	je     0x4dc9b4
  4dc935:	85 c0                	test   eax,eax
  4dc937:	75 70                	jne    0x4dc9a9
  4dc939:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  4dc93d:	6a 00                	push   0x0
  4dc93f:	88 4c 24 20          	mov    BYTE PTR [esp+0x20],cl
  4dc943:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4dc947:	e8 54 77 f2 ff       	call   0x4040a0
  4dc94c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dc951:	83 c9 ff             	or     ecx,0xffffffff
  4dc954:	33 c0                	xor    eax,eax
  4dc956:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc958:	f7 d1                	not    ecx
  4dc95a:	49                   	dec    ecx
  4dc95b:	51                   	push   ecx
  4dc95c:	68 70 3f 6b 00       	push   0x6b3f70
  4dc961:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dc965:	e8 86 77 f2 ff       	call   0x4040f0
  4dc96a:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4dc96e:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xe
  4dc975:	0e 00 00 00 
  4dc979:	52                   	push   edx
  4dc97a:	68 b6 00 00 00       	push   0xb6
  4dc97f:	68 38 d6 68 00       	push   0x68d638
  4dc984:	68 2c d6 68 00       	push   0x68d62c
  4dc989:	e8 62 3e 0c 00       	call   0x5a07f0
  4dc98e:	ff d0                	call   eax
  4dc990:	83 c4 10             	add    esp,0x10
  4dc993:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc997:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xffffffff
  4dc99e:	ff ff ff ff 
  4dc9a2:	6a 01                	push   0x1
  4dc9a4:	e8 f7 76 f2 ff       	call   0x4040a0
  4dc9a9:	8b 8b 0c 02 00 00    	mov    ecx,DWORD PTR [ebx+0x20c]
  4dc9af:	e8 7c 67 07 00       	call   0x553130
  4dc9b4:	8b c6                	mov    eax,esi
  4dc9b6:	89 b3 10 02 00 00    	mov    DWORD PTR [ebx+0x210],esi
  4dc9bc:	85 c0                	test   eax,eax
  4dc9be:	0f 84 81 00 00 00    	je     0x4dca45
  4dc9c4:	6a 00                	push   0x0
  4dc9c6:	6a 00                	push   0x0
  4dc9c8:	68 00 00 80 3f       	push   0x3f800000
  4dc9cd:	6a 01                	push   0x1
  4dc9cf:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4dc9d3:	56                   	push   esi
  4dc9d4:	51                   	push   ecx
  4dc9d5:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  4dc9d9:	e8 02 36 07 00       	call   0x54ffe0
  4dc9de:	8b f0                	mov    esi,eax
  4dc9e0:	8b 8b 0c 02 00 00    	mov    ecx,DWORD PTR [ebx+0x20c]
  4dc9e6:	8b 06                	mov    eax,DWORD PTR [esi]
  4dc9e8:	3b c8                	cmp    ecx,eax
  4dc9ea:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xf
  4dc9f1:	0f 00 00 00 
  4dc9f5:	74 23                	je     0x4dca1a
  4dc9f7:	85 c9                	test   ecx,ecx
  4dc9f9:	74 10                	je     0x4dca0b
  4dc9fb:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  4dc9fe:	48                   	dec    eax
  4dc9ff:	89                   	.byte 0x89
