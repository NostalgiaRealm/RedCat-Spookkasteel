
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005fbab0 <.text+0x1faab0>:
  5fbab0:	51                   	push   ecx
  5fbab1:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5fbab5:	53                   	push   ebx
  5fbab6:	55                   	push   ebp
  5fbab7:	56                   	push   esi
  5fbab8:	57                   	push   edi
  5fbab9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5fbac0:	00 
  5fbac1:	ff 24 85 bc c0 5f 00 	jmp    DWORD PTR [eax*4+0x5fc0bc]
  5fbac8:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  5fbacc:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbad0:	6a 00                	push   0x0
  5fbad2:	88 0b                	mov    BYTE PTR [ebx],cl
  5fbad4:	8b cb                	mov    ecx,ebx
  5fbad6:	e8 c5 85 e0 ff       	call   0x4040a0
  5fbadb:	bf 8c 17 6b 00       	mov    edi,0x6b178c
  5fbae0:	83 c9 ff             	or     ecx,0xffffffff
  5fbae3:	33 c0                	xor    eax,eax
  5fbae5:	6a 01                	push   0x1
  5fbae7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbae9:	f7 d1                	not    ecx
  5fbaeb:	49                   	dec    ecx
  5fbaec:	8b e9                	mov    ebp,ecx
  5fbaee:	8b cb                	mov    ecx,ebx
  5fbaf0:	55                   	push   ebp
  5fbaf1:	e8 4a 5e e0 ff       	call   0x401940
  5fbaf6:	84 c0                	test   al,al
  5fbaf8:	0f 84 7d 01 00 00    	je     0x5fbc7b
  5fbafe:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  5fbb01:	8b cd                	mov    ecx,ebp
  5fbb03:	8b d1                	mov    edx,ecx
  5fbb05:	be 8c 17 6b 00       	mov    esi,0x6b178c
  5fbb0a:	c1 e9 02             	shr    ecx,0x2
  5fbb0d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fbb0f:	8b ca                	mov    ecx,edx
  5fbb11:	e9 58 01 00 00       	jmp    0x5fbc6e
  5fbb16:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbb1a:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbb1e:	6a 00                	push   0x0
  5fbb20:	8b ce                	mov    ecx,esi
  5fbb22:	88 06                	mov    BYTE PTR [esi],al
  5fbb24:	e8 77 85 e0 ff       	call   0x4040a0
  5fbb29:	bf 88 17 6b 00       	mov    edi,0x6b1788
  5fbb2e:	83 c9 ff             	or     ecx,0xffffffff
  5fbb31:	33 c0                	xor    eax,eax
  5fbb33:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbb35:	f7 d1                	not    ecx
  5fbb37:	49                   	dec    ecx
  5fbb38:	51                   	push   ecx
  5fbb39:	68 88 17 6b 00       	push   0x6b1788
  5fbb3e:	8b ce                	mov    ecx,esi
  5fbb40:	e8 ab 85 e0 ff       	call   0x4040f0
  5fbb45:	8b c6                	mov    eax,esi
  5fbb47:	5f                   	pop    edi
  5fbb48:	5e                   	pop    esi
  5fbb49:	5d                   	pop    ebp
  5fbb4a:	5b                   	pop    ebx
  5fbb4b:	59                   	pop    ecx
  5fbb4c:	c3                   	ret
  5fbb4d:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbb51:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbb55:	6a 00                	push   0x0
  5fbb57:	88 0e                	mov    BYTE PTR [esi],cl
  5fbb59:	8b ce                	mov    ecx,esi
  5fbb5b:	e8 40 85 e0 ff       	call   0x4040a0
  5fbb60:	bf 7c 17 6b 00       	mov    edi,0x6b177c
  5fbb65:	83 c9 ff             	or     ecx,0xffffffff
  5fbb68:	33 c0                	xor    eax,eax
  5fbb6a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbb6c:	f7 d1                	not    ecx
  5fbb6e:	49                   	dec    ecx
  5fbb6f:	51                   	push   ecx
  5fbb70:	68 7c 17 6b 00       	push   0x6b177c
  5fbb75:	8b ce                	mov    ecx,esi
  5fbb77:	e8 74 85 e0 ff       	call   0x4040f0
  5fbb7c:	8b c6                	mov    eax,esi
  5fbb7e:	5f                   	pop    edi
  5fbb7f:	5e                   	pop    esi
  5fbb80:	5d                   	pop    ebp
  5fbb81:	5b                   	pop    ebx
  5fbb82:	59                   	pop    ecx
  5fbb83:	c3                   	ret
  5fbb84:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbb88:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbb8c:	6a 00                	push   0x0
  5fbb8e:	8b ce                	mov    ecx,esi
  5fbb90:	88 16                	mov    BYTE PTR [esi],dl
  5fbb92:	e8 09 85 e0 ff       	call   0x4040a0
  5fbb97:	bf 70 17 6b 00       	mov    edi,0x6b1770
  5fbb9c:	83 c9 ff             	or     ecx,0xffffffff
  5fbb9f:	33 c0                	xor    eax,eax
  5fbba1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbba3:	f7 d1                	not    ecx
  5fbba5:	49                   	dec    ecx
  5fbba6:	51                   	push   ecx
  5fbba7:	68 70 17 6b 00       	push   0x6b1770
  5fbbac:	8b ce                	mov    ecx,esi
  5fbbae:	e8 3d 85 e0 ff       	call   0x4040f0
  5fbbb3:	8b c6                	mov    eax,esi
  5fbbb5:	5f                   	pop    edi
  5fbbb6:	5e                   	pop    esi
  5fbbb7:	5d                   	pop    ebp
  5fbbb8:	5b                   	pop    ebx
  5fbbb9:	59                   	pop    ecx
  5fbbba:	c3                   	ret
  5fbbbb:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbbbf:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbbc3:	6a 00                	push   0x0
  5fbbc5:	8b ce                	mov    ecx,esi
  5fbbc7:	88 06                	mov    BYTE PTR [esi],al
  5fbbc9:	e8 d2 84 e0 ff       	call   0x4040a0
  5fbbce:	bf 64 17 6b 00       	mov    edi,0x6b1764
  5fbbd3:	83 c9 ff             	or     ecx,0xffffffff
  5fbbd6:	33 c0                	xor    eax,eax
  5fbbd8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbbda:	f7 d1                	not    ecx
  5fbbdc:	49                   	dec    ecx
  5fbbdd:	51                   	push   ecx
  5fbbde:	68 64 17 6b 00       	push   0x6b1764
  5fbbe3:	8b ce                	mov    ecx,esi
  5fbbe5:	e8 06 85 e0 ff       	call   0x4040f0
  5fbbea:	8b c6                	mov    eax,esi
  5fbbec:	5f                   	pop    edi
  5fbbed:	5e                   	pop    esi
  5fbbee:	5d                   	pop    ebp
  5fbbef:	5b                   	pop    ebx
  5fbbf0:	59                   	pop    ecx
  5fbbf1:	c3                   	ret
  5fbbf2:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbbf6:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbbfa:	6a 00                	push   0x0
  5fbbfc:	88 0e                	mov    BYTE PTR [esi],cl
  5fbbfe:	8b ce                	mov    ecx,esi
  5fbc00:	e8 9b 84 e0 ff       	call   0x4040a0
  5fbc05:	bf 58 17 6b 00       	mov    edi,0x6b1758
  5fbc0a:	83 c9 ff             	or     ecx,0xffffffff
  5fbc0d:	33 c0                	xor    eax,eax
  5fbc0f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbc11:	f7 d1                	not    ecx
  5fbc13:	49                   	dec    ecx
  5fbc14:	51                   	push   ecx
  5fbc15:	68 58 17 6b 00       	push   0x6b1758
  5fbc1a:	8b ce                	mov    ecx,esi
  5fbc1c:	e8 cf 84 e0 ff       	call   0x4040f0
  5fbc21:	8b c6                	mov    eax,esi
  5fbc23:	5f                   	pop    edi
  5fbc24:	5e                   	pop    esi
  5fbc25:	5d                   	pop    ebp
  5fbc26:	5b                   	pop    ebx
  5fbc27:	59                   	pop    ecx
  5fbc28:	c3                   	ret
  5fbc29:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  5fbc2d:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbc31:	6a 00                	push   0x0
  5fbc33:	8b cb                	mov    ecx,ebx
  5fbc35:	88 13                	mov    BYTE PTR [ebx],dl
  5fbc37:	e8 64 84 e0 ff       	call   0x4040a0
  5fbc3c:	bf 4c 17 6b 00       	mov    edi,0x6b174c
  5fbc41:	83 c9 ff             	or     ecx,0xffffffff
  5fbc44:	33 c0                	xor    eax,eax
  5fbc46:	6a 01                	push   0x1
  5fbc48:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbc4a:	f7 d1                	not    ecx
  5fbc4c:	49                   	dec    ecx
  5fbc4d:	8b e9                	mov    ebp,ecx
  5fbc4f:	8b cb                	mov    ecx,ebx
  5fbc51:	55                   	push   ebp
  5fbc52:	e8 e9 5c e0 ff       	call   0x401940
  5fbc57:	84 c0                	test   al,al
  5fbc59:	74 20                	je     0x5fbc7b
  5fbc5b:	8b cd                	mov    ecx,ebp
  5fbc5d:	be 4c 17 6b 00       	mov    esi,0x6b174c
  5fbc62:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  5fbc65:	8b c1                	mov    eax,ecx
  5fbc67:	c1 e9 02             	shr    ecx,0x2
  5fbc6a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fbc6c:	8b c8                	mov    ecx,eax
  5fbc6e:	83 e1 03             	and    ecx,0x3
  5fbc71:	55                   	push   ebp
  5fbc72:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5fbc74:	8b cb                	mov    ecx,ebx
  5fbc76:	e8 15 85 e0 ff       	call   0x404190
  5fbc7b:	5f                   	pop    edi
  5fbc7c:	5e                   	pop    esi
  5fbc7d:	8b c3                	mov    eax,ebx
  5fbc7f:	5d                   	pop    ebp
  5fbc80:	5b                   	pop    ebx
  5fbc81:	59                   	pop    ecx
  5fbc82:	c3                   	ret
  5fbc83:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbc87:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbc8b:	6a 00                	push   0x0
  5fbc8d:	88 0e                	mov    BYTE PTR [esi],cl
  5fbc8f:	8b ce                	mov    ecx,esi
  5fbc91:	e8 0a 84 e0 ff       	call   0x4040a0
  5fbc96:	bf 40 17 6b 00       	mov    edi,0x6b1740
  5fbc9b:	83 c9 ff             	or     ecx,0xffffffff
  5fbc9e:	33 c0                	xor    eax,eax
  5fbca0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbca2:	f7 d1                	not    ecx
  5fbca4:	49                   	dec    ecx
  5fbca5:	51                   	push   ecx
  5fbca6:	68 40 17 6b 00       	push   0x6b1740
  5fbcab:	8b ce                	mov    ecx,esi
  5fbcad:	e8 3e 84 e0 ff       	call   0x4040f0
  5fbcb2:	8b c6                	mov    eax,esi
  5fbcb4:	5f                   	pop    edi
  5fbcb5:	5e                   	pop    esi
  5fbcb6:	5d                   	pop    ebp
  5fbcb7:	5b                   	pop    ebx
  5fbcb8:	59                   	pop    ecx
  5fbcb9:	c3                   	ret
  5fbcba:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbcbe:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbcc2:	6a 00                	push   0x0
  5fbcc4:	8b ce                	mov    ecx,esi
  5fbcc6:	88 16                	mov    BYTE PTR [esi],dl
  5fbcc8:	e8 d3 83 e0 ff       	call   0x4040a0
  5fbccd:	bf 38 17 6b 00       	mov    edi,0x6b1738
  5fbcd2:	83 c9 ff             	or     ecx,0xffffffff
  5fbcd5:	33 c0                	xor    eax,eax
  5fbcd7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbcd9:	f7 d1                	not    ecx
  5fbcdb:	49                   	dec    ecx
  5fbcdc:	51                   	push   ecx
  5fbcdd:	68 38 17 6b 00       	push   0x6b1738
  5fbce2:	8b ce                	mov    ecx,esi
  5fbce4:	e8 07 84 e0 ff       	call   0x4040f0
  5fbce9:	8b c6                	mov    eax,esi
  5fbceb:	5f                   	pop    edi
  5fbcec:	5e                   	pop    esi
  5fbced:	5d                   	pop    ebp
  5fbcee:	5b                   	pop    ebx
  5fbcef:	59                   	pop    ecx
  5fbcf0:	c3                   	ret
  5fbcf1:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbcf5:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbcf9:	6a 00                	push   0x0
  5fbcfb:	8b ce                	mov    ecx,esi
  5fbcfd:	88 06                	mov    BYTE PTR [esi],al
  5fbcff:	e8 9c 83 e0 ff       	call   0x4040a0
  5fbd04:	bf 34 17 6b 00       	mov    edi,0x6b1734
  5fbd09:	83 c9 ff             	or     ecx,0xffffffff
  5fbd0c:	33 c0                	xor    eax,eax
  5fbd0e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbd10:	f7 d1                	not    ecx
  5fbd12:	49                   	dec    ecx
  5fbd13:	51                   	push   ecx
  5fbd14:	68 34 17 6b 00       	push   0x6b1734
  5fbd19:	8b ce                	mov    ecx,esi
  5fbd1b:	e8 d0 83 e0 ff       	call   0x4040f0
  5fbd20:	8b c6                	mov    eax,esi
  5fbd22:	5f                   	pop    edi
  5fbd23:	5e                   	pop    esi
  5fbd24:	5d                   	pop    ebp
  5fbd25:	5b                   	pop    ebx
  5fbd26:	59                   	pop    ecx
  5fbd27:	c3                   	ret
  5fbd28:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbd2c:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbd30:	6a 00                	push   0x0
  5fbd32:	88 0e                	mov    BYTE PTR [esi],cl
  5fbd34:	8b ce                	mov    ecx,esi
  5fbd36:	e8 65 83 e0 ff       	call   0x4040a0
  5fbd3b:	bf 30 17 6b 00       	mov    edi,0x6b1730
  5fbd40:	83 c9 ff             	or     ecx,0xffffffff
  5fbd43:	33 c0                	xor    eax,eax
  5fbd45:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbd47:	f7 d1                	not    ecx
  5fbd49:	49                   	dec    ecx
  5fbd4a:	51                   	push   ecx
  5fbd4b:	68 30 17 6b 00       	push   0x6b1730
  5fbd50:	8b ce                	mov    ecx,esi
  5fbd52:	e8 99 83 e0 ff       	call   0x4040f0
  5fbd57:	8b c6                	mov    eax,esi
  5fbd59:	5f                   	pop    edi
  5fbd5a:	5e                   	pop    esi
  5fbd5b:	5d                   	pop    ebp
  5fbd5c:	5b                   	pop    ebx
  5fbd5d:	59                   	pop    ecx
  5fbd5e:	c3                   	ret
  5fbd5f:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbd63:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbd67:	6a 00                	push   0x0
  5fbd69:	8b ce                	mov    ecx,esi
  5fbd6b:	88 16                	mov    BYTE PTR [esi],dl
  5fbd6d:	e8 2e 83 e0 ff       	call   0x4040a0
  5fbd72:	bf 2c 17 6b 00       	mov    edi,0x6b172c
  5fbd77:	83 c9 ff             	or     ecx,0xffffffff
  5fbd7a:	33 c0                	xor    eax,eax
  5fbd7c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbd7e:	f7 d1                	not    ecx
  5fbd80:	49                   	dec    ecx
  5fbd81:	51                   	push   ecx
  5fbd82:	68 2c 17 6b 00       	push   0x6b172c
  5fbd87:	8b ce                	mov    ecx,esi
  5fbd89:	e8 62 83 e0 ff       	call   0x4040f0
  5fbd8e:	8b c6                	mov    eax,esi
  5fbd90:	5f                   	pop    edi
  5fbd91:	5e                   	pop    esi
  5fbd92:	5d                   	pop    ebp
  5fbd93:	5b                   	pop    ebx
  5fbd94:	59                   	pop    ecx
  5fbd95:	c3                   	ret
  5fbd96:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbd9a:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbd9e:	6a 00                	push   0x0
  5fbda0:	8b ce                	mov    ecx,esi
  5fbda2:	88 06                	mov    BYTE PTR [esi],al
  5fbda4:	e8 f7 82 e0 ff       	call   0x4040a0
  5fbda9:	bf 24 17 6b 00       	mov    edi,0x6b1724
  5fbdae:	83 c9 ff             	or     ecx,0xffffffff
  5fbdb1:	33 c0                	xor    eax,eax
  5fbdb3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbdb5:	f7 d1                	not    ecx
  5fbdb7:	49                   	dec    ecx
  5fbdb8:	51                   	push   ecx
  5fbdb9:	68 24 17 6b 00       	push   0x6b1724
  5fbdbe:	8b ce                	mov    ecx,esi
  5fbdc0:	e8 2b 83 e0 ff       	call   0x4040f0
  5fbdc5:	8b c6                	mov    eax,esi
  5fbdc7:	5f                   	pop    edi
  5fbdc8:	5e                   	pop    esi
  5fbdc9:	5d                   	pop    ebp
  5fbdca:	5b                   	pop    ebx
  5fbdcb:	59                   	pop    ecx
  5fbdcc:	c3                   	ret
  5fbdcd:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbdd1:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbdd5:	6a 00                	push   0x0
  5fbdd7:	88 0e                	mov    BYTE PTR [esi],cl
  5fbdd9:	8b ce                	mov    ecx,esi
  5fbddb:	e8 c0 82 e0 ff       	call   0x4040a0
  5fbde0:	bf 1c 17 6b 00       	mov    edi,0x6b171c
  5fbde5:	83 c9 ff             	or     ecx,0xffffffff
  5fbde8:	33 c0                	xor    eax,eax
  5fbdea:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbdec:	f7 d1                	not    ecx
  5fbdee:	49                   	dec    ecx
  5fbdef:	51                   	push   ecx
  5fbdf0:	68 1c 17 6b 00       	push   0x6b171c
  5fbdf5:	8b ce                	mov    ecx,esi
  5fbdf7:	e8 f4 82 e0 ff       	call   0x4040f0
  5fbdfc:	8b c6                	mov    eax,esi
  5fbdfe:	5f                   	pop    edi
  5fbdff:	5e                   	pop    esi
  5fbe00:	5d                   	pop    ebp
  5fbe01:	5b                   	pop    ebx
  5fbe02:	59                   	pop    ecx
  5fbe03:	c3                   	ret
  5fbe04:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbe08:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbe0c:	6a 00                	push   0x0
  5fbe0e:	8b ce                	mov    ecx,esi
  5fbe10:	88 16                	mov    BYTE PTR [esi],dl
  5fbe12:	e8 89 82 e0 ff       	call   0x4040a0
  5fbe17:	bf 14 17 6b 00       	mov    edi,0x6b1714
  5fbe1c:	83 c9 ff             	or     ecx,0xffffffff
  5fbe1f:	33 c0                	xor    eax,eax
  5fbe21:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbe23:	f7 d1                	not    ecx
  5fbe25:	49                   	dec    ecx
  5fbe26:	51                   	push   ecx
  5fbe27:	68 14 17 6b 00       	push   0x6b1714
  5fbe2c:	8b ce                	mov    ecx,esi
  5fbe2e:	e8 bd 82 e0 ff       	call   0x4040f0
  5fbe33:	8b c6                	mov    eax,esi
  5fbe35:	5f                   	pop    edi
  5fbe36:	5e                   	pop    esi
  5fbe37:	5d                   	pop    ebp
  5fbe38:	5b                   	pop    ebx
  5fbe39:	59                   	pop    ecx
  5fbe3a:	c3                   	ret
  5fbe3b:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  5fbe3f:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbe43:	6a 00                	push   0x0
  5fbe45:	8b cb                	mov    ecx,ebx
  5fbe47:	88 03                	mov    BYTE PTR [ebx],al
  5fbe49:	e8 52 82 e0 ff       	call   0x4040a0
  5fbe4e:	bf 0c 17 6b 00       	mov    edi,0x6b170c
  5fbe53:	83 c9 ff             	or     ecx,0xffffffff
  5fbe56:	33 c0                	xor    eax,eax
  5fbe58:	6a 01                	push   0x1
  5fbe5a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbe5c:	f7 d1                	not    ecx
  5fbe5e:	49                   	dec    ecx
  5fbe5f:	8b e9                	mov    ebp,ecx
  5fbe61:	8b cb                	mov    ecx,ebx
  5fbe63:	55                   	push   ebp
  5fbe64:	e8 d7 5a e0 ff       	call   0x401940
  5fbe69:	84 c0                	test   al,al
  5fbe6b:	0f 84 0a fe ff ff    	je     0x5fbc7b
  5fbe71:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  5fbe74:	8b cd                	mov    ecx,ebp
  5fbe76:	8b d1                	mov    edx,ecx
  5fbe78:	be 0c 17 6b 00       	mov    esi,0x6b170c
  5fbe7d:	c1 e9 02             	shr    ecx,0x2
  5fbe80:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fbe82:	8b ca                	mov    ecx,edx
  5fbe84:	e9 e5 fd ff ff       	jmp    0x5fbc6e
  5fbe89:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbe8d:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbe91:	6a 00                	push   0x0
  5fbe93:	8b ce                	mov    ecx,esi
  5fbe95:	88 06                	mov    BYTE PTR [esi],al
  5fbe97:	e8 04 82 e0 ff       	call   0x4040a0
  5fbe9c:	bf 04 17 6b 00       	mov    edi,0x6b1704
  5fbea1:	83 c9 ff             	or     ecx,0xffffffff
  5fbea4:	33 c0                	xor    eax,eax
  5fbea6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbea8:	f7 d1                	not    ecx
  5fbeaa:	49                   	dec    ecx
  5fbeab:	51                   	push   ecx
  5fbeac:	68 04 17 6b 00       	push   0x6b1704
  5fbeb1:	8b ce                	mov    ecx,esi
  5fbeb3:	e8 38 82 e0 ff       	call   0x4040f0
  5fbeb8:	8b c6                	mov    eax,esi
  5fbeba:	5f                   	pop    edi
  5fbebb:	5e                   	pop    esi
  5fbebc:	5d                   	pop    ebp
  5fbebd:	5b                   	pop    ebx
  5fbebe:	59                   	pop    ecx
  5fbebf:	c3                   	ret
  5fbec0:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbec4:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbec8:	6a 00                	push   0x0
  5fbeca:	88 0e                	mov    BYTE PTR [esi],cl
  5fbecc:	8b ce                	mov    ecx,esi
  5fbece:	e8 cd 81 e0 ff       	call   0x4040a0
  5fbed3:	bf fc 16 6b 00       	mov    edi,0x6b16fc
  5fbed8:	83 c9 ff             	or     ecx,0xffffffff
  5fbedb:	33 c0                	xor    eax,eax
  5fbedd:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbedf:	f7 d1                	not    ecx
  5fbee1:	49                   	dec    ecx
  5fbee2:	51                   	push   ecx
  5fbee3:	68 fc 16 6b 00       	push   0x6b16fc
  5fbee8:	8b ce                	mov    ecx,esi
  5fbeea:	e8 01 82 e0 ff       	call   0x4040f0
  5fbeef:	8b c6                	mov    eax,esi
  5fbef1:	5f                   	pop    edi
  5fbef2:	5e                   	pop    esi
  5fbef3:	5d                   	pop    ebp
  5fbef4:	5b                   	pop    ebx
  5fbef5:	59                   	pop    ecx
  5fbef6:	c3                   	ret
  5fbef7:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbefb:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbeff:	6a 00                	push   0x0
  5fbf01:	8b ce                	mov    ecx,esi
  5fbf03:	88 16                	mov    BYTE PTR [esi],dl
  5fbf05:	e8 96 81 e0 ff       	call   0x4040a0
  5fbf0a:	bf f4 16 6b 00       	mov    edi,0x6b16f4
  5fbf0f:	83 c9 ff             	or     ecx,0xffffffff
  5fbf12:	33 c0                	xor    eax,eax
  5fbf14:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbf16:	f7 d1                	not    ecx
  5fbf18:	49                   	dec    ecx
  5fbf19:	51                   	push   ecx
  5fbf1a:	68 f4 16 6b 00       	push   0x6b16f4
  5fbf1f:	8b ce                	mov    ecx,esi
  5fbf21:	e8 ca 81 e0 ff       	call   0x4040f0
  5fbf26:	8b c6                	mov    eax,esi
  5fbf28:	5f                   	pop    edi
  5fbf29:	5e                   	pop    esi
  5fbf2a:	5d                   	pop    ebp
  5fbf2b:	5b                   	pop    ebx
  5fbf2c:	59                   	pop    ecx
  5fbf2d:	c3                   	ret
  5fbf2e:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbf32:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbf36:	6a 00                	push   0x0
  5fbf38:	8b ce                	mov    ecx,esi
  5fbf3a:	88 06                	mov    BYTE PTR [esi],al
  5fbf3c:	e8 5f 81 e0 ff       	call   0x4040a0
  5fbf41:	bf f0 16 6b 00       	mov    edi,0x6b16f0
  5fbf46:	83 c9 ff             	or     ecx,0xffffffff
  5fbf49:	33 c0                	xor    eax,eax
  5fbf4b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbf4d:	f7 d1                	not    ecx
  5fbf4f:	49                   	dec    ecx
  5fbf50:	51                   	push   ecx
  5fbf51:	68 f0 16 6b 00       	push   0x6b16f0
  5fbf56:	8b ce                	mov    ecx,esi
  5fbf58:	e8 93 81 e0 ff       	call   0x4040f0
  5fbf5d:	8b c6                	mov    eax,esi
  5fbf5f:	5f                   	pop    edi
  5fbf60:	5e                   	pop    esi
  5fbf61:	5d                   	pop    ebp
  5fbf62:	5b                   	pop    ebx
  5fbf63:	59                   	pop    ecx
  5fbf64:	c3                   	ret
  5fbf65:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbf69:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbf6d:	6a 00                	push   0x0
  5fbf6f:	88 0e                	mov    BYTE PTR [esi],cl
  5fbf71:	8b ce                	mov    ecx,esi
  5fbf73:	e8 28 81 e0 ff       	call   0x4040a0
  5fbf78:	bf ec 16 6b 00       	mov    edi,0x6b16ec
  5fbf7d:	83 c9 ff             	or     ecx,0xffffffff
  5fbf80:	33 c0                	xor    eax,eax
  5fbf82:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbf84:	f7 d1                	not    ecx
  5fbf86:	49                   	dec    ecx
  5fbf87:	51                   	push   ecx
  5fbf88:	68 ec 16 6b 00       	push   0x6b16ec
  5fbf8d:	8b ce                	mov    ecx,esi
  5fbf8f:	e8 5c 81 e0 ff       	call   0x4040f0
  5fbf94:	8b c6                	mov    eax,esi
  5fbf96:	5f                   	pop    edi
  5fbf97:	5e                   	pop    esi
  5fbf98:	5d                   	pop    ebp
  5fbf99:	5b                   	pop    ebx
  5fbf9a:	59                   	pop    ecx
  5fbf9b:	c3                   	ret
  5fbf9c:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbfa0:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbfa4:	6a 00                	push   0x0
  5fbfa6:	8b ce                	mov    ecx,esi
  5fbfa8:	88 16                	mov    BYTE PTR [esi],dl
  5fbfaa:	e8 f1 80 e0 ff       	call   0x4040a0
  5fbfaf:	bf e4 16 6b 00       	mov    edi,0x6b16e4
  5fbfb4:	83 c9 ff             	or     ecx,0xffffffff
  5fbfb7:	33 c0                	xor    eax,eax
  5fbfb9:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbfbb:	f7 d1                	not    ecx
  5fbfbd:	49                   	dec    ecx
  5fbfbe:	51                   	push   ecx
  5fbfbf:	68 e4 16 6b 00       	push   0x6b16e4
  5fbfc4:	8b ce                	mov    ecx,esi
  5fbfc6:	e8 25 81 e0 ff       	call   0x4040f0
  5fbfcb:	8b c6                	mov    eax,esi
  5fbfcd:	5f                   	pop    edi
  5fbfce:	5e                   	pop    esi
  5fbfcf:	5d                   	pop    ebp
  5fbfd0:	5b                   	pop    ebx
  5fbfd1:	59                   	pop    ecx
  5fbfd2:	c3                   	ret
  5fbfd3:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbfd7:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbfdb:	6a 00                	push   0x0
  5fbfdd:	8b ce                	mov    ecx,esi
  5fbfdf:	88 06                	mov    BYTE PTR [esi],al
  5fbfe1:	e8 ba 80 e0 ff       	call   0x4040a0
  5fbfe6:	bf dc 16 6b 00       	mov    edi,0x6b16dc
  5fbfeb:	83 c9 ff             	or     ecx,0xffffffff
  5fbfee:	33 c0                	xor    eax,eax
  5fbff0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbff2:	f7 d1                	not    ecx
  5fbff4:	49                   	dec    ecx
  5fbff5:	51                   	push   ecx
  5fbff6:	68 dc 16 6b 00       	push   0x6b16dc
  5fbffb:	8b ce                	mov    ecx,esi
  5fbffd:	e8 ee 80 e0 ff       	call   0x4040f0
  5fc002:	8b c6                	mov    eax,esi
  5fc004:	5f                   	pop    edi
  5fc005:	5e                   	pop    esi
  5fc006:	5d                   	pop    ebp
  5fc007:	5b                   	pop    ebx
  5fc008:	59                   	pop    ecx
  5fc009:	c3                   	ret
  5fc00a:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fc00e:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fc012:	6a 00                	push   0x0
  5fc014:	88 0e                	mov    BYTE PTR [esi],cl
  5fc016:	8b ce                	mov    ecx,esi
  5fc018:	e8 83 80 e0 ff       	call   0x4040a0
  5fc01d:	bf d8 16 6b 00       	mov    edi,0x6b16d8
  5fc022:	83 c9 ff             	or     ecx,0xffffffff
  5fc025:	33 c0                	xor    eax,eax
  5fc027:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc029:	f7 d1                	not    ecx
  5fc02b:	49                   	dec    ecx
  5fc02c:	51                   	push   ecx
  5fc02d:	68 d8 16 6b 00       	push   0x6b16d8
  5fc032:	8b ce                	mov    ecx,esi
  5fc034:	e8 b7 80 e0 ff       	call   0x4040f0
  5fc039:	8b c6                	mov    eax,esi
  5fc03b:	5f                   	pop    edi
  5fc03c:	5e                   	pop    esi
  5fc03d:	5d                   	pop    ebp
  5fc03e:	5b                   	pop    ebx
  5fc03f:	59                   	pop    ecx
  5fc040:	c3                   	ret
  5fc041:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  5fc045:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fc049:	6a 00                	push   0x0
  5fc04b:	8b cb                	mov    ecx,ebx
  5fc04d:	88 13                	mov    BYTE PTR [ebx],dl
  5fc04f:	e8 4c 80 e0 ff       	call   0x4040a0
  5fc054:	bf d0 16 6b 00       	mov    edi,0x6b16d0
  5fc059:	83 c9 ff             	or     ecx,0xffffffff
  5fc05c:	33 c0                	xor    eax,eax
  5fc05e:	6a 01                	push   0x1
  5fc060:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc062:	f7 d1                	not    ecx
  5fc064:	49                   	dec    ecx
  5fc065:	8b e9                	mov    ebp,ecx
  5fc067:	8b cb                	mov    ecx,ebx
  5fc069:	55                   	push   ebp
  5fc06a:	e8 d1 58 e0 ff       	call   0x401940
  5fc06f:	84 c0                	test   al,al
  5fc071:	0f 84 04 fc ff ff    	je     0x5fbc7b
  5fc077:	8b cd                	mov    ecx,ebp
  5fc079:	be d0 16 6b 00       	mov    esi,0x6b16d0
  5fc07e:	e9 df fb ff ff       	jmp    0x5fbc62
  5fc083:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fc087:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fc08b:	6a 00                	push   0x0
  5fc08d:	88 0e                	mov    BYTE PTR [esi],cl
  5fc08f:	8b ce                	mov    ecx,esi
  5fc091:	e8 0a 80 e0 ff       	call   0x4040a0
  5fc096:	bf c8 16 6b 00       	mov    edi,0x6b16c8
  5fc09b:	83 c9 ff             	or     ecx,0xffffffff
  5fc09e:	33 c0                	xor    eax,eax
  5fc0a0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc0a2:	f7 d1                	not    ecx
  5fc0a4:	49                   	dec    ecx
  5fc0a5:	51                   	push   ecx
  5fc0a6:	68 c8 16 6b 00       	push   0x6b16c8
  5fc0ab:	8b ce                	mov    ecx,esi
  5fc0ad:	e8 3e 80 e0 ff       	call   0x4040f0
  5fc0b2:	8b c6                	mov    eax,esi
  5fc0b4:	5f                   	pop    edi
  5fc0b5:	5e                   	pop    esi
  5fc0b6:	5d                   	pop    ebp
  5fc0b7:	5b                   	pop    ebx
  5fc0b8:	59                   	pop    ecx
  5fc0b9:	c3                   	ret
  5fc0ba:	8b ff                	mov    edi,edi
  5fc0bc:	c8 ba 5f 00          	enter  0x5fba,0x0
  5fc0c0:	16                   	push   ss
  5fc0c1:	bb 5f 00 bb bb       	mov    ebx,0xbbbb005f
  5fc0c6:	5f                   	pop    edi
  5fc0c7:	00 f2                	add    dl,dh
  5fc0c9:	bb 5f 00 84 bb       	mov    ebx,0xbb84005f
  5fc0ce:	5f                   	pop    edi
  5fc0cf:	00 4d bb             	add    BYTE PTR [ebp-0x45],cl
  5fc0d2:	5f                   	pop    edi
  5fc0d3:	00 29                	add    BYTE PTR [ecx],ch
  5fc0d5:	bc 5f 00 83 bc       	mov    esp,0xbc83005f
  5fc0da:	5f                   	pop    edi
  5fc0db:	00 ba bc 5f 00 f1    	add    BYTE PTR [edx-0xeffa044],bh
  5fc0e1:	bc 5f 00 28 bd       	mov    esp,0xbd28005f
  5fc0e6:	5f                   	pop    edi
  5fc0e7:	00 5f bd             	add    BYTE PTR [edi-0x43],bl
  5fc0ea:	5f                   	pop    edi
  5fc0eb:	00 3b                	add    BYTE PTR [ebx],bh
  5fc0ed:	be 5f 00 89 be       	mov    esi,0xbe89005f
  5fc0f2:	5f                   	pop    edi
  5fc0f3:	00 c0                	add    al,al
  5fc0f5:	be 5f 00 96 bd       	mov    esi,0xbd96005f
  5fc0fa:	5f                   	pop    edi
  5fc0fb:	00 cd                	add    ch,cl
  5fc0fd:	bd 5f 00 04 be       	mov    ebp,0xbe04005f
  5fc102:	5f                   	pop    edi
  5fc103:	00 f7                	add    bh,dh
  5fc105:	be 5f 00 2e bf       	mov    esi,0xbf2e005f
  5fc10a:	5f                   	pop    edi
  5fc10b:	00 65 bf             	add    BYTE PTR [ebp-0x41],ah
  5fc10e:	5f                   	pop    edi
  5fc10f:	00 9c bf 5f 00 d3 bf 	add    BYTE PTR [edi+edi*4-0x402cffa1],bl
  5fc116:	5f                   	pop    edi
  5fc117:	00 83 c0 5f 00 41    	add    BYTE PTR [ebx+0x41005fc0],al
  5fc11d:	c0 5f 00 0a          	rcr    BYTE PTR [edi+0x0],0xa
  5fc121:	c0                   	.byte 0xc0
  5fc122:	5f                   	pop    edi
	...
