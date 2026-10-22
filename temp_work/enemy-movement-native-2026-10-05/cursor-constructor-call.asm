  427683:	c1 e9 02             	shr    ecx,0x2
  427686:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  427688:	8b ca                	mov    ecx,edx
  42768a:	8b c2                	mov    eax,edx
  42768c:	83 e1 03             	and    ecx,0x3
  42768f:	50                   	push   eax
  427690:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  427692:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  427696:	e8 f5 ca fd ff       	call   0x404190
  42769b:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42769f:	c6 44 24 7c 09       	mov    BYTE PTR [esp+0x7c],0x9
  4276a4:	51                   	push   ecx
  4276a5:	6a 38                	push   0x38
  4276a7:	68 a8 fd 68 00       	push   0x68fda8
  4276ac:	68 64 fd 68 00       	push   0x68fd64
  4276b1:	e8 3a 91 17 00       	call   0x5a07f0
  4276b6:	ff d0                	call   eax
  4276b8:	83 c4 10             	add    esp,0x10
  4276bb:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4276bf:	c6 44 24 7c 08       	mov    BYTE PTR [esp+0x7c],0x8
  4276c4:	6a 01                	push   0x1
  4276c6:	e8 d5 c9 fd ff       	call   0x4040a0
  4276cb:	68 78 03 00 00       	push   0x378
  4276d0:	e8 e0 29 1e 00       	call   0x60a0b5
  4276d5:	83 c4 04             	add    esp,0x4
  4276d8:	89 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],eax
  4276df:	85 c0                	test   eax,eax
  4276e1:	c6 44 24 7c 0a       	mov    BYTE PTR [esp+0x7c],0xa
  4276e6:	74 7e                	je     0x427766
  4276e8:	d9 43 1c             	fld    DWORD PTR [ebx+0x1c]
  4276eb:	e8 30 34 1e 00       	call   0x60ab20
  4276f0:	8b 94 24 94 00 00 00 	mov    edx,DWORD PTR [esp+0x94]
  4276f7:	50                   	push   eax
  4276f8:	8d 44 24 24          	lea    eax,[esp+0x24]
  4276fc:	52                   	push   edx
  4276fd:	50                   	push   eax
  4276fe:	e8 9d e1 ff ff       	call   0x4258a0
  427703:	b9 05 00 00 00       	mov    ecx,0x5
  427708:	8b f0                	mov    esi,eax
  42770a:	8d 7c 24 40          	lea    edi,[esp+0x40]
  42770e:	83 c4 0c             	add    esp,0xc
  427711:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  427713:	8b 8c 24 94 00 00 00 	mov    ecx,DWORD PTR [esp+0x94]
  42771a:	51                   	push   ecx
  42771b:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  42771f:	e8 3c ee ff ff       	call   0x426560
  427724:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
  42772b:	00 
  42772c:	8b 8c 24 8c 00 00 00 	mov    ecx,DWORD PTR [esp+0x8c]
  427733:	55                   	push   ebp
  427734:	50                   	push   eax
  427735:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  427739:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  42773d:	c6 84 24 84 00 00 00 	mov    BYTE PTR [esp+0x84],0xb
  427744:	0b 
  427745:	52                   	push   edx
  427746:	8b 94 24 94 00 00 00 	mov    edx,DWORD PTR [esp+0x94]
  42774d:	50                   	push   eax
  42774e:	8b 84 24 94 00 00 00 	mov    eax,DWORD PTR [esp+0x94]
  427755:	51                   	push   ecx
  427756:	8b 8c 24 a4 00 00 00 	mov    ecx,DWORD PTR [esp+0xa4]
  42775d:	52                   	push   edx
  42775e:	50                   	push   eax
  42775f:	e8 3c a8 ff ff       	call   0x421fa0
  427764:	eb 02                	jmp    0x427768
  427766:	33 c0                	xor    eax,eax
  427768:	89 85 7c 01 00 00    	mov    DWORD PTR [ebp+0x17c],eax
  42776e:	8a 44 24 14          	mov    al,BYTE PTR [esp+0x14]
  427772:	a8 01                	test   al,0x1
  427774:	c7 44 24 7c 08 00 00 	mov    DWORD PTR [esp+0x7c],0x8
  42777b:	00 
  42777c:	74 21                	je     0x42779f
  42777e:	6a 01                	push   0x1
  427780:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  427784:	c6 84 24 80 00 00 00 	mov    BYTE PTR [esp+0x80],0xd
  42778b:	0d 
  42778c:	e8 0f c9 fd ff       	call   0x4040a0
  427791:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  427795:	c6 44 24 7c 08       	mov    BYTE PTR [esp+0x7c],0x8
  42779a:	e8 31 3d 18 00       	call   0x5ab4d0
  42779f:	8b 85 7c 01 00 00    	mov    eax,DWORD PTR [ebp+0x17c]
