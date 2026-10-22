
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004daa00 <.text+0xd9a00>:
  4daa00:	01 00                	add    DWORD PTR [eax],eax
  4daa02:	00 3b                	add    BYTE PTR [ebx],bh
  4daa04:	c3                   	ret
  4daa05:	0f 84 e6 0f 00 00    	je     0x4db9f1
  4daa0b:	8b 84 24 60 01 00 00 	mov    eax,DWORD PTR [esp+0x160]
  4daa12:	57                   	push   edi
  4daa13:	83 f8 ff             	cmp    eax,0xffffffff
  4daa16:	75 6b                	jne    0x4daa83
  4daa18:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4daa1c:	53                   	push   ebx
  4daa1d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4daa21:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4daa25:	e8 76 96 f2 ff       	call   0x4040a0
  4daa2a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4daa2f:	83 c9 ff             	or     ecx,0xffffffff
  4daa32:	33 c0                	xor    eax,eax
  4daa34:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daa36:	f7 d1                	not    ecx
  4daa38:	49                   	dec    ecx
  4daa39:	51                   	push   ecx
  4daa3a:	68 70 3f 6b 00       	push   0x6b3f70
  4daa3f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4daa43:	e8 a8 96 f2 ff       	call   0x4040f0
  4daa48:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4daa4c:	89 9c 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],ebx
  4daa53:	51                   	push   ecx
  4daa54:	68 8a 00 00 00       	push   0x8a
  4daa59:	68 2c e2 68 00       	push   0x68e22c
  4daa5e:	68 14 e2 68 00       	push   0x68e214
  4daa63:	e8 88 5d 0c 00       	call   0x5a07f0
  4daa68:	ff d0                	call   eax
  4daa6a:	83 c4 10             	add    esp,0x10
  4daa6d:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4daa71:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xffffffff
  4daa78:	ff ff ff ff 
  4daa7c:	6a 01                	push   0x1
  4daa7e:	e8 1d 96 f2 ff       	call   0x4040a0
  4daa83:	db 84 24 64 01 00 00 	fild   DWORD PTR [esp+0x164]
  4daa8a:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4daa90:	d9 54 24 2c          	fst    DWORD PTR [esp+0x2c]
  4daa94:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4daa9a:	8b 11                	mov    edx,DWORD PTR [ecx]
  4daa9c:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  4daaa0:	ff 52 04             	call   DWORD PTR [edx+0x4]
  4daaa3:	8b d8                	mov    ebx,eax
  4daaa5:	85 db                	test   ebx,ebx
  4daaa7:	0f 85 a2 00 00 00    	jne    0x4dab4f
  4daaad:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4daab1:	53                   	push   ebx
  4daab2:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4daab6:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4daaba:	e8 e1 95 f2 ff       	call   0x4040a0
  4daabf:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4daac4:	83 c9 ff             	or     ecx,0xffffffff
  4daac7:	33 c0                	xor    eax,eax
  4daac9:	6a 01                	push   0x1
  4daacb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daacd:	f7 d1                	not    ecx
  4daacf:	49                   	dec    ecx
  4daad0:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  4daad4:	51                   	push   ecx
  4daad5:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4daad9:	e8 62 6e f2 ff       	call   0x401940
  4daade:	84 c0                	test   al,al
  4daae0:	74 2e                	je     0x4dab10
  4daae2:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  4daae6:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4daaea:	8b c8                	mov    ecx,eax
  4daaec:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4daaf1:	8b d1                	mov    edx,ecx
  4daaf3:	50                   	push   eax
  4daaf4:	c1 e9 02             	shr    ecx,0x2
  4daaf7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4daaf9:	8b ca                	mov    ecx,edx
  4daafb:	83 e1 03             	and    ecx,0x3
  4daafe:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dab00:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4dab04:	e8 87 96 f2 ff       	call   0x404190
  4dab09:	8b b4 24 60 01 00 00 	mov    esi,DWORD PTR [esp+0x160]
  4dab10:	8d 44 24 14          	lea    eax,[esp+0x14]
  4dab14:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x1
  4dab1b:	01 00 00 00 
  4dab1f:	50                   	push   eax
  4dab20:	68 20 06 00 00       	push   0x620
  4dab25:	68 28 97 69 00       	push   0x699728
  4dab2a:	68 80 9d 69 00       	push   0x699d80
  4dab2f:	e8 bc 5c 0c 00       	call   0x5a07f0
  4dab34:	ff d0                	call   eax
  4dab36:	83 c4 10             	add    esp,0x10
  4dab39:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dab3d:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xffffffff
  4dab44:	ff ff ff ff 
  4dab48:	6a 01                	push   0x1
  4dab4a:	e8 51 95 f2 ff       	call   0x4040a0
  4dab4f:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dab55:	8b 11                	mov    edx,DWORD PTR [ecx]
  4dab57:	ff 52 0c             	call   DWORD PTR [edx+0xc]
  4dab5a:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dab60:	8b bc 24 64 01 00 00 	mov    edi,DWORD PTR [esp+0x164]
  4dab67:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4dab6a:	51                   	push   ecx
  4dab6b:	53                   	push   ebx
  4dab6c:	57                   	push   edi
  4dab6d:	56                   	push   esi
  4dab6e:	8b cd                	mov    ecx,ebp
  4dab70:	ff 50 60             	call   DWORD PTR [eax+0x60]
  4dab73:	85 db                	test   ebx,ebx
  4dab75:	74 08                	je     0x4dab7f
  4dab77:	8b 13                	mov    edx,DWORD PTR [ebx]
  4dab79:	6a 01                	push   0x1
  4dab7b:	8b cb                	mov    ecx,ebx
  4dab7d:	ff 12                	call   DWORD PTR [edx]
  4dab7f:	8a 85 3c 02 00 00    	mov    al,BYTE PTR [ebp+0x23c]
  4dab85:	84 c0                	test   al,al
  4dab87:	74 3d                	je     0x4dabc6
  4dab89:	8b 85 38 02 00 00    	mov    eax,DWORD PTR [ebp+0x238]
  4dab8f:	03 c7                	add    eax,edi
  4dab91:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  4dab95:	89 85 38 02 00 00    	mov    DWORD PTR [ebp+0x238],eax
  4dab9b:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  4dab9f:	d8 1d 8c f1 64 00    	fcomp  DWORD PTR ds:0x64f18c
  4daba5:	df e0                	fnstsw ax
  4daba7:	f6 c4 41             	test   ah,0x41
  4dabaa:	0f 85 7a 01 00 00    	jne    0x4dad2a
  4dabb0:	c6 85 3c 02 00 00 00 	mov    BYTE PTR [ebp+0x23c],0x0
  4dabb7:	c7 85 38 02 00 00 00 	mov    DWORD PTR [ebp+0x238],0x0
  4dabbe:	00 00 00 
  4dabc1:	e9 64 01 00 00       	jmp    0x4dad2a
  4dabc6:	8b cd                	mov    ecx,ebp
  4dabc8:	e8 b3 27 00 00       	call   0x4dd380
  4dabcd:	84 c0                	test   al,al
  4dabcf:	0f 84 4a 01 00 00    	je     0x4dad1f
  4dabd5:	8b 8d 10 01 00 00    	mov    ecx,DWORD PTR [ebp+0x110]
  4dabdb:	83 cf ff             	or     edi,0xffffffff
  4dabde:	3b cf                	cmp    ecx,edi
  4dabe0:	b2 01                	mov    dl,0x1
  4dabe2:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  4dabe6:	74 54                	je     0x4dac3c
  4dabe8:	8b 85 14 01 00 00    	mov    eax,DWORD PTR [ebp+0x114]
  4dabee:	3b c7                	cmp    eax,edi
  4dabf0:	75 14                	jne    0x4dac06
  4dabf2:	03 ce                	add    ecx,esi
  4dabf4:	c7 85 18 01 00 00 00 	mov    DWORD PTR [ebp+0x118],0x3f800000
  4dabfb:	00 80 3f 
  4dabfe:	89 8d 14 01 00 00    	mov    DWORD PTR [ebp+0x114],ecx
  4dac04:	eb 36                	jmp    0x4dac3c
  4dac06:	3b f0                	cmp    esi,eax
  4dac08:	7e 0e                	jle    0x4dac18
  4dac0a:	c7 85 18 01 00 00 00 	mov    DWORD PTR [ebp+0x118],0x0
  4dac11:	00 00 00 
  4dac14:	32 d2                	xor    dl,dl
  4dac16:	eb 24                	jmp    0x4dac3c
  4dac18:	85 c9                	test   ecx,ecx
  4dac1a:	7e 16                	jle    0x4dac32
  4dac1c:	2b c6                	sub    eax,esi
  4dac1e:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  4dac22:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  4dac26:	da 74 24 28          	fidiv  DWORD PTR [esp+0x28]
  4dac2a:	d9 9d 18 01 00 00    	fstp   DWORD PTR [ebp+0x118]
  4dac30:	eb 0a                	jmp    0x4dac3c
  4dac32:	c7 85 18 01 00 00 00 	mov    DWORD PTR [ebp+0x118],0x0
  4dac39:	00 00 00 
  4dac3c:	84 d2                	test   dl,dl
  4dac3e:	88 95 1c 01 00 00    	mov    BYTE PTR [ebp+0x11c],dl
  4dac44:	0f 85 b0 00 00 00    	jne    0x4dacfa
  4dac4a:	8b 8d 20 01 00 00    	mov    ecx,DWORD PTR [ebp+0x120]
  4dac50:	b2 01                	mov    dl,0x1
  4dac52:	3b cf                	cmp    ecx,edi
  4dac54:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  4dac58:	74 54                	je     0x4dacae
  4dac5a:	8b 85 24 01 00 00    	mov    eax,DWORD PTR [ebp+0x124]
  4dac60:	3b c7                	cmp    eax,edi
  4dac62:	75 14                	jne    0x4dac78
  4dac64:	03 ce                	add    ecx,esi
  4dac66:	c7 85 28 01 00 00 00 	mov    DWORD PTR [ebp+0x128],0x3f800000
  4dac6d:	00 80 3f 
  4dac70:	89 8d 24 01 00 00    	mov    DWORD PTR [ebp+0x124],ecx
  4dac76:	eb 36                	jmp    0x4dacae
  4dac78:	3b f0                	cmp    esi,eax
  4dac7a:	7e 0e                	jle    0x4dac8a
  4dac7c:	c7 85 28 01 00 00 00 	mov    DWORD PTR [ebp+0x128],0x0
  4dac83:	00 00 00 
  4dac86:	32 d2                	xor    dl,dl
  4dac88:	eb 24                	jmp    0x4dacae
  4dac8a:	85 c9                	test   ecx,ecx
  4dac8c:	7e 16                	jle    0x4daca4
  4dac8e:	2b c6                	sub    eax,esi
  4dac90:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4dac94:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  4dac98:	da 74 24 24          	fidiv  DWORD PTR [esp+0x24]
  4dac9c:	d9 9d 28 01 00 00    	fstp   DWORD PTR [ebp+0x128]
  4daca2:	eb 0a                	jmp    0x4dacae
  4daca4:	c7 85 28 01 00 00 00 	mov    DWORD PTR [ebp+0x128],0x0
  4dacab:	00 00 00 
  4dacae:	84 d2                	test   dl,dl
  4dacb0:	88 95 2c 01 00 00    	mov    BYTE PTR [ebp+0x12c],dl
  4dacb6:	75 42                	jne    0x4dacfa
  4dacb8:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4dacbb:	8b cd                	mov    ecx,ebp
  4dacbd:	ff 52 58             	call   DWORD PTR [edx+0x58]
  4dacc0:	b8 01 00 00 00       	mov    eax,0x1
  4dacc5:	b9 00 00 80 3f       	mov    ecx,0x3f800000
  4dacca:	89 85 10 01 00 00    	mov    DWORD PTR [ebp+0x110],eax
  4dacd0:	89 bd 14 01 00 00    	mov    DWORD PTR [ebp+0x114],edi
  4dacd6:	89 8d 18 01 00 00    	mov    DWORD PTR [ebp+0x118],ecx
  4dacdc:	88 85 1c 01 00 00    	mov    BYTE PTR [ebp+0x11c],al
  4dace2:	89 85 20 01 00 00    	mov    DWORD PTR [ebp+0x120],eax
  4dace8:	89 bd 24 01 00 00    	mov    DWORD PTR [ebp+0x124],edi
  4dacee:	89 8d 28 01 00 00    	mov    DWORD PTR [ebp+0x128],ecx
  4dacf4:	88 85 2c 01 00 00    	mov    BYTE PTR [ebp+0x12c],al
  4dacfa:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  4dad00:	d8 a5 18 01 00 00    	fsub   DWORD PTR [ebp+0x118]
  4dad06:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad0c:	51                   	push   ecx
  4dad0d:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dad0f:	d8 0d f4 f0 64 00    	fmul   DWORD PTR ds:0x64f0f4
  4dad15:	d9 e0                	fchs
  4dad17:	d9 1c 24             	fstp   DWORD PTR [esp]
  4dad1a:	ff 50 20             	call   DWORD PTR [eax+0x20]
  4dad1d:	eb 0b                	jmp    0x4dad2a
  4dad1f:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad25:	8b 11                	mov    edx,DWORD PTR [ecx]
  4dad27:	ff 52 38             	call   DWORD PTR [edx+0x38]
  4dad2a:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad30:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dad32:	ff 50 10             	call   DWORD PTR [eax+0x10]
  4dad35:	8b cd                	mov    ecx,ebp
  4dad37:	e8 d4 b9 ff ff       	call   0x4d6710
  4dad3c:	84 c0                	test   al,al
  4dad3e:	74 1a                	je     0x4dad5a
  4dad40:	8b 0d d0 92 6b 00    	mov    ecx,DWORD PTR ds:0x6b92d0
  4dad46:	89 8d 8c 01 00 00    	mov    DWORD PTR [ebp+0x18c],ecx
  4dad4c:	8b 15 d4 92 6b 00    	mov    edx,DWORD PTR ds:0x6b92d4
  4dad52:	89 95 90 01 00 00    	mov    DWORD PTR [ebp+0x190],edx
  4dad58:	eb 40                	jmp    0x4dad9a
  4dad5a:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad60:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dad62:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
  4dad65:	84 c0                	test   al,al
  4dad67:	74 1a                	je     0x4dad83
  4dad69:	8b 0d c0 92 6b 00    	mov    ecx,DWORD PTR ds:0x6b92c0
  4dad6f:	89 8d 8c 01 00 00    	mov    DWORD PTR [ebp+0x18c],ecx
  4dad75:	8b 15 c4 92 6b 00    	mov    edx,DWORD PTR ds:0x6b92c4
  4dad7b:	89 95 90 01 00 00    	mov    DWORD PTR [ebp+0x190],edx
  4dad81:	eb 17                	jmp    0x4dad9a
  4dad83:	a1 c8 92 6b 00       	mov    eax,ds:0x6b92c8
  4dad88:	89 85 8c 01 00 00    	mov    DWORD PTR [ebp+0x18c],eax
  4dad8e:	8b 0d cc 92 6b 00    	mov    ecx,DWORD PTR ds:0x6b92cc
  4dad94:	89 8d 90 01 00 00    	mov    DWORD PTR [ebp+0x190],ecx
  4dad9a:	8b 95 90 01 00 00    	mov    edx,DWORD PTR [ebp+0x190]
  4dada0:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dada6:	52                   	push   edx
  4dada7:	8d 54 24 44          	lea    edx,[esp+0x44]
  4dadab:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dadad:	52                   	push   edx
  4dadae:	8d 74 24 3c          	lea    esi,[esp+0x3c]
  4dadb2:	ff 50 24             	call   DWORD PTR [eax+0x24]
  4dadb5:	8b c8                	mov    ecx,eax
  4dadb7:	8b d6                	mov    edx,esi
  4dadb9:	e8 e2 81 0d 00       	call   0x5b2fa0
  4dadbe:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  4dadc2:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dadc8:	df e0                	fnstsw ax
  4dadca:	f6 c4 01             	test   ah,0x1
  4dadcd:	74 1d                	je     0x4dadec
  4dadcf:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dadd5:	8d 54 24 40          	lea    edx,[esp+0x40]
  4dadd9:	52                   	push   edx
  4dadda:	8b 01                	mov    eax,DWORD PTR [ecx]
  4daddc:	ff 50 24             	call   DWORD PTR [eax+0x24]
  4daddf:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  4dade2:	d8 8d 8c 01 00 00    	fmul   DWORD PTR [ebp+0x18c]
  4dade8:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  4dadec:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dadf2:	8d 54 24 40          	lea    edx,[esp+0x40]
  4dadf6:	52                   	push   edx
  4dadf7:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dadf9:	ff 50 28             	call   DWORD PTR [eax+0x28]
  4dadfc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dadff:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4dae03:	50                   	push   eax
  4dae04:	8d 54 24 18          	lea    edx,[esp+0x18]
  4dae08:	51                   	push   ecx
  4dae09:	52                   	push   edx
  4dae0a:	8b cd                	mov    ecx,ebp
  4dae0c:	e8 0f fb ff ff       	call   0x4da920
  4dae11:	8b 08                	mov    ecx,DWORD PTR [eax]
  4dae13:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  4dae17:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4dae1b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4dae1e:	51                   	push   ecx
  4dae1f:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  4dae23:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4dae26:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  4dae2a:	e8 d1 61 f5 ff       	call   0x431000
  4dae2f:	51                   	push   ecx
  4dae30:	8d 95 b4 01 00 00    	lea    edx,[ebp+0x1b4]
  4dae36:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  4dae3a:	d9 1c 24             	fstp   DWORD PTR [esp]
  4dae3d:	e8 de 81 0d 00       	call   0x5b3020
  4dae42:	8b 95 00 01 00 00    	mov    edx,DWORD PTR [ebp+0x100]
  4dae48:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  4dae4c:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4dae4f:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  4dae53:	8d 54 24 34          	lea    edx,[esp+0x34]
  4dae57:	8d 9d 98 01 00 00    	lea    ebx,[ebp+0x198]
  4dae5d:	51                   	push   ecx
  4dae5e:	52                   	push   edx
  4dae5f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dae63:	53                   	push   ebx
  4dae64:	51                   	push   ecx
  4dae65:	8b cd                	mov    ecx,ebp
  4dae67:	ff 50 54             	call   DWORD PTR [eax+0x54]
  4dae6a:	8b 30                	mov    esi,DWORD PTR [eax]
  4dae6c:	8d bd 80 01 00 00    	lea    edi,[ebp+0x180]
  4dae72:	8b cf                	mov    ecx,edi
  4dae74:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4dae77:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  4dae7b:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  4dae7f:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4dae82:	89 11                	mov    DWORD PTR [ecx],edx
  4dae84:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  4dae88:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  4dae8c:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4dae90:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  4dae93:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  4dae96:	b9 f0 92 6b 00       	mov    ecx,0x6b92f0
  4dae9b:	e8 40 89 f5 ff       	call   0x4337e0
  4daea0:	85 c0                	test   eax,eax
  4daea2:	74 0e                	je     0x4daeb2
  4daea4:	68 64 9d 69 00       	push   0x699d64
  4daea9:	57                   	push   edi
  4daeaa:	e8 61 93 07 00       	call   0x554210
  4daeaf:	83 c4 08             	add    esp,0x8
  4daeb2:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  4daeb6:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  4daeba:	8b c3                	mov    eax,ebx
  4daebc:	53                   	push   ebx
  4daebd:	89 30                	mov    DWORD PTR [eax],esi
  4daebf:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  4daec2:	8b cd                	mov    ecx,ebp
  4daec4:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  4daec7:	e8 c4 25 00 00       	call   0x4dd490
  4daecc:	8b cd                	mov    ecx,ebp
  4daece:	e8 4d b8 ff ff       	call   0x4d6720
  4daed3:	8b 85 08 01 00 00    	mov    eax,DWORD PTR [ebp+0x108]
  4daed9:	8d 94 24 9c 00 00 00 	lea    edx,[esp+0x9c]
  4daee0:	52                   	push   edx
  4daee1:	6a 00                	push   0x0
  4daee3:	6a 03                	push   0x3
  4daee5:	8d 8d d0 01 00 00    	lea    ecx,[ebp+0x1d0]
  4daeeb:	53                   	push   ebx
  4daeec:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  4daef0:	c7 85 08 01 00 00 00 	mov    DWORD PTR [ebp+0x108],0x0
  4daef7:	00 00 00 
  4daefa:	e8 01 9c 07 00       	call   0x554b00
  4daeff:	84 c0                	test   al,al
  4daf01:	0f 84 09 02 00 00    	je     0x4db110
  4daf07:	8b 8c 24 a8 00 00 00 	mov    ecx,DWORD PTR [esp+0xa8]
  4daf0e:	8b c1                	mov    eax,ecx
  4daf10:	81 e1 00 00 03 00    	and    ecx,0x30000
  4daf16:	c1 e8 12             	shr    eax,0x12
  4daf19:	24 01                	and    al,0x1
  4daf1b:	89 8d 08 01 00 00    	mov    DWORD PTR [ebp+0x108],ecx
  4daf21:	84 c0                	test   al,al
  4daf23:	0f 84 e7 01 00 00    	je     0x4db110
  4daf29:	d9 05 e4 96 69 00    	fld    DWORD PTR ds:0x6996e4
  4daf2f:	d8 1d 6c d6 64 00    	fcomp  DWORD PTR ds:0x64d66c
  4daf35:	df e0                	fnstsw ax
  4daf37:	f6 c4 40             	test   ah,0x40
  4daf3a:	0f 84 38 01 00 00    	je     0x4db078
  4daf40:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4daf44:	6a 00                	push   0x0
  4daf46:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4daf4a:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  4daf4e:	e8 4d 91 f2 ff       	call   0x4040a0
  4daf53:	83 ce ff             	or     esi,0xffffffff
  4daf56:	bf e0 02 69 00       	mov    edi,0x6902e0
  4daf5b:	8b ce                	mov    ecx,esi
  4daf5d:	33 c0                	xor    eax,eax
  4daf5f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daf61:	f7 d1                	not    ecx
  4daf63:	49                   	dec    ecx
  4daf64:	51                   	push   ecx
  4daf65:	68 e0 02 69 00       	push   0x6902e0
  4daf6a:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4daf6e:	e8 7d 91 f2 ff       	call   0x4040f0
  4daf73:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4daf77:	6a 00                	push   0x0
  4daf79:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4daf7d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4daf81:	c7 84 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],0x4
  4daf88:	04 00 00 00 
  4daf8c:	e8 0f 91 f2 ff       	call   0x4040a0
  4daf91:	bf 4c 9d 69 00       	mov    edi,0x699d4c
  4daf96:	8b ce                	mov    ecx,esi
  4daf98:	33 c0                	xor    eax,eax
  4daf9a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daf9c:	f7 d1                	not    ecx
  4daf9e:	49                   	dec    ecx
  4daf9f:	51                   	push   ecx
  4dafa0:	68 4c 9d 69 00       	push   0x699d4c
  4dafa5:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dafa9:	e8 42 91 f2 ff       	call   0x4040f0
  4dafae:	8d 54 24 7c          	lea    edx,[esp+0x7c]
  4dafb2:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x5
  4dafb9:	05 
  4dafba:	52                   	push   edx
  4dafbb:	e8 d0 bf f5 ff       	call   0x436f90
  4dafc0:	83 c4 04             	add    esp,0x4
  4dafc3:	50                   	push   eax
  4dafc4:	68 00 00 7a 44       	push   0x447a0000
  4dafc9:	6a 00                	push   0x0
  4dafcb:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4dafcf:	68 00 00 48 43       	push   0x43480000
  4dafd4:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dafd8:	50                   	push   eax
  4dafd9:	51                   	push   ecx
  4dafda:	8d 8c 24 f4 00 00 00 	lea    ecx,[esp+0xf4]
  4dafe1:	c6 84 24 70 01 00 00 	mov    BYTE PTR [esp+0x170],0x6
  4dafe8:	06 
  4dafe9:	e8 22 8d 0c 00       	call   0x5a3d10
  4dafee:	8b f8                	mov    edi,eax
  4daff0:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4daff3:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4daff9:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x7
  4db000:	07 
  4db001:	df e0                	fnstsw ax
  4db003:	f6 c4 40             	test   ah,0x40
  4db006:	74 16                	je     0x4db01e
  4db008:	8d 54 24 13          	lea    edx,[esp+0x13]
  4db00c:	8d 47 14             	lea    eax,[edi+0x14]
  4db00f:	52                   	push   edx
  4db010:	50                   	push   eax
  4db011:	e8 7a 23 0d 00       	call   0x5ad390
  4db016:	d9 57 60             	fst    DWORD PTR [edi+0x60]
  4db019:	83 c4 08             	add    esp,0x8
  4db01c:	eb 03                	jmp    0x4db021
  4db01e:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4db021:	d9 1d e4 96 69 00    	fstp   DWORD PTR ds:0x6996e4
  4db027:	8d 8c 24 dc 00 00 00 	lea    ecx,[esp+0xdc]
  4db02e:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x6
  4db035:	06 
  4db036:	e8 a5 8c 0c 00       	call   0x5a3ce0
  4db03b:	6a 01                	push   0x1
  4db03d:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4db044:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0x5
  4db04b:	05 
  4db04c:	e8 4f 90 f2 ff       	call   0x4040a0
  4db051:	6a 01                	push   0x1
  4db053:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db057:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0x4
  4db05e:	04 
  4db05f:	e8 3c 90 f2 ff       	call   0x4040a0
  4db064:	6a 01                	push   0x1
  4db066:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4db06a:	89 b4 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],esi
  4db071:	e8 2a 90 f2 ff       	call   0x4040a0
  4db076:	eb 03                	jmp    0x4db07b
  4db078:	83 ce ff             	or     esi,0xffffffff
  4db07b:	39 b4 24 64 01 00 00 	cmp    DWORD PTR [esp+0x164],esi
  4db082:	75 6b                	jne    0x4db0ef
  4db084:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4db088:	6a 00                	push   0x0
  4db08a:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4db08e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db092:	e8 09 90 f2 ff       	call   0x4040a0
  4db097:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db09c:	8b ce                	mov    ecx,esi
  4db09e:	33 c0                	xor    eax,eax
  4db0a0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db0a2:	f7 d1                	not    ecx
  4db0a4:	49                   	dec    ecx
  4db0a5:	51                   	push   ecx
  4db0a6:	68 70 3f 6b 00       	push   0x6b3f70
  4db0ab:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db0af:	e8 3c 90 f2 ff       	call   0x4040f0
  4db0b4:	8d 54 24 14          	lea    edx,[esp+0x14]
  4db0b8:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x8
  4db0bf:	08 00 00 00 
  4db0c3:	52                   	push   edx
  4db0c4:	68 8a 00 00 00       	push   0x8a
  4db0c9:	68 2c e2 68 00       	push   0x68e22c
  4db0ce:	68 14 e2 68 00       	push   0x68e214
  4db0d3:	e8 18 57 0c 00       	call   0x5a07f0
  4db0d8:	ff d0                	call   eax
  4db0da:	83 c4 10             	add    esp,0x10
  4db0dd:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db0e1:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db0e8:	6a 01                	push   0x1
  4db0ea:	e8 b1 8f f2 ff       	call   0x4040a0
  4db0ef:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  4db0f3:	d8 0d e4 96 69 00    	fmul   DWORD PTR ds:0x6996e4
  4db0f9:	6a 00                	push   0x0
  4db0fb:	6a 00                	push   0x0
  4db0fd:	51                   	push   ecx
  4db0fe:	8b cd                	mov    ecx,ebp
  4db100:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4db106:	d9 1c 24             	fstp   DWORD PTR [esp]
  4db109:	e8 b2 8e 02 00       	call   0x503fc0
  4db10e:	eb 03                	jmp    0x4db113
  4db110:	83 ce ff             	or     esi,0xffffffff
  4db113:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  4db117:	8b 8d 08 01 00 00    	mov    ecx,DWORD PTR [ebp+0x108]
  4db11d:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  4db121:	50                   	push   eax
  4db122:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
  4db128:	51                   	push   ecx
  4db129:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  4db12d:	52                   	push   edx
  4db12e:	50                   	push   eax
  4db12f:	51                   	push   ecx
  4db130:	8b cd                	mov    ecx,ebp
  4db132:	e8 a9 0f 00 00       	call   0x4dc0e0
  4db137:	f7 85 08 01 00 00 00 	test   DWORD PTR [ebp+0x108],0x20000
  4db13e:	00 02 00 
  4db141:	0f 84 0c 02 00 00    	je     0x4db353
  4db147:	d9 05 e8 96 69 00    	fld    DWORD PTR ds:0x6996e8
  4db14d:	d8 1d 6c d6 64 00    	fcomp  DWORD PTR ds:0x64d66c
  4db153:	df e0                	fnstsw ax
  4db155:	f6 c4 40             	test   ah,0x40
  4db158:	0f 84 62 01 00 00    	je     0x4db2c0
  4db15e:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4db162:	6a 00                	push   0x0
  4db164:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db168:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  4db16c:	e8 2f 8f f2 ff       	call   0x4040a0
  4db171:	bf e0 02 69 00       	mov    edi,0x6902e0
  4db176:	8b ce                	mov    ecx,esi
  4db178:	33 c0                	xor    eax,eax
  4db17a:	6a 01                	push   0x1
  4db17c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db17e:	f7 d1                	not    ecx
  4db180:	49                   	dec    ecx
  4db181:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  4db185:	51                   	push   ecx
  4db186:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db18a:	e8 b1 67 f2 ff       	call   0x401940
  4db18f:	84 c0                	test   al,al
  4db191:	74 2a                	je     0x4db1bd
  4db193:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  4db197:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4db19b:	8b c8                	mov    ecx,eax
  4db19d:	be e0 02 69 00       	mov    esi,0x6902e0
  4db1a2:	8b d1                	mov    edx,ecx
  4db1a4:	50                   	push   eax
  4db1a5:	c1 e9 02             	shr    ecx,0x2
  4db1a8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4db1aa:	8b ca                	mov    ecx,edx
  4db1ac:	83 e1 03             	and    ecx,0x3
  4db1af:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4db1b1:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db1b5:	e8 d6 8f f2 ff       	call   0x404190
  4db1ba:	83 ce ff             	or     esi,0xffffffff
  4db1bd:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4db1c1:	6a 00                	push   0x0
  4db1c3:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4db1c7:	c7 84 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],0x9
  4db1ce:	09 00 00 00 
  4db1d2:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  4db1d6:	e8 c5 8e f2 ff       	call   0x4040a0
  4db1db:	bf 38 9d 69 00       	mov    edi,0x699d38
  4db1e0:	8b ce                	mov    ecx,esi
  4db1e2:	33 c0                	xor    eax,eax
  4db1e4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db1e6:	f7 d1                	not    ecx
  4db1e8:	49                   	dec    ecx
  4db1e9:	51                   	push   ecx
  4db1ea:	68 38 9d 69 00       	push   0x699d38
  4db1ef:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4db1f3:	e8 f8 8e f2 ff       	call   0x4040f0
  4db1f8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  4db1fc:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0xa
  4db203:	0a 
  4db204:	51                   	push   ecx
  4db205:	e8 86 bd f5 ff       	call   0x436f90
  4db20a:	83 c4 04             	add    esp,0x4
  4db20d:	50                   	push   eax
  4db20e:	68 00 00 c8 42       	push   0x42c80000
  4db213:	6a 00                	push   0x0
  4db215:	8d 54 24 20          	lea    edx,[esp+0x20]
  4db219:	68 00 00 40 40       	push   0x40400000
  4db21e:	8d 44 24 50          	lea    eax,[esp+0x50]
  4db222:	52                   	push   edx
  4db223:	50                   	push   eax
  4db224:	8d 8c 24 f4 00 00 00 	lea    ecx,[esp+0xf4]
  4db22b:	c6 84 24 70 01 00 00 	mov    BYTE PTR [esp+0x170],0xb
  4db232:	0b 
  4db233:	e8 d8 8a 0c 00       	call   0x5a3d10
  4db238:	8b f8                	mov    edi,eax
  4db23a:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4db23d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4db243:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0xc
  4db24a:	0c 
  4db24b:	df e0                	fnstsw ax
  4db24d:	f6 c4 40             	test   ah,0x40
  4db250:	74 16                	je     0x4db268
  4db252:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4db256:	8d 57 14             	lea    edx,[edi+0x14]
  4db259:	51                   	push   ecx
  4db25a:	52                   	push   edx
  4db25b:	e8 30 21 0d 00       	call   0x5ad390
  4db260:	d9 57 60             	fst    DWORD PTR [edi+0x60]
  4db263:	83 c4 08             	add    esp,0x8
  4db266:	eb 03                	jmp    0x4db26b
  4db268:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4db26b:	d9 1d e8 96 69 00    	fstp   DWORD PTR ds:0x6996e8
  4db271:	8d 8c 24 dc 00 00 00 	lea    ecx,[esp+0xdc]
  4db278:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0xb
  4db27f:	0b 
  4db280:	e8 5b 8a 0c 00       	call   0x5a3ce0
  4db285:	6a 01                	push   0x1
  4db287:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4db28e:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0xa
  4db295:	0a 
  4db296:	e8 05 8e f2 ff       	call   0x4040a0
  4db29b:	6a 01                	push   0x1
  4db29d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4db2a1:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0x9
  4db2a8:	09 
  4db2a9:	e8 f2 8d f2 ff       	call   0x4040a0
  4db2ae:	6a 01                	push   0x1
  4db2b0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db2b4:	89 b4 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],esi
  4db2bb:	e8 e0 8d f2 ff       	call   0x4040a0
  4db2c0:	39 b4 24 64 01 00 00 	cmp    DWORD PTR [esp+0x164],esi
  4db2c7:	75 6b                	jne    0x4db334
  4db2c9:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4db2cd:	6a 00                	push   0x0
  4db2cf:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db2d3:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4db2d7:	e8 c4 8d f2 ff       	call   0x4040a0
  4db2dc:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db2e1:	8b ce                	mov    ecx,esi
  4db2e3:	33 c0                	xor    eax,eax
  4db2e5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db2e7:	f7 d1                	not    ecx
  4db2e9:	49                   	dec    ecx
  4db2ea:	51                   	push   ecx
  4db2eb:	68 70 3f 6b 00       	push   0x6b3f70
  4db2f0:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db2f4:	e8 f7 8d f2 ff       	call   0x4040f0
  4db2f9:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db2fd:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xd
  4db304:	0d 00 00 00 
  4db308:	51                   	push   ecx
  4db309:	68 8a 00 00 00       	push   0x8a
  4db30e:	68 2c e2 68 00       	push   0x68e22c
  4db313:	68 14 e2 68 00       	push   0x68e214
  4db318:	e8 d3 54 0c 00       	call   0x5a07f0
  4db31d:	ff d0                	call   eax
  4db31f:	83 c4 10             	add    esp,0x10
  4db322:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db326:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db32d:	6a 01                	push   0x1
  4db32f:	e8 6c 8d f2 ff       	call   0x4040a0
  4db334:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  4db338:	d8 0d e8 96 69 00    	fmul   DWORD PTR ds:0x6996e8
  4db33e:	6a 00                	push   0x0
  4db340:	6a 00                	push   0x0
  4db342:	51                   	push   ecx
  4db343:	8b cd                	mov    ecx,ebp
  4db345:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4db34b:	d9 1c 24             	fstp   DWORD PTR [esp]
  4db34e:	e8 6d 8c 02 00       	call   0x503fc0
  4db353:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
  4db356:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
  4db359:	8b 13                	mov    edx,DWORD PTR [ebx]
  4db35b:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
  4db35f:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4db365:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
  4db369:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
  4db36d:	8d 44 24 14          	lea    eax,[esp+0x14]
  4db371:	8b 11                	mov    edx,DWORD PTR [ecx]
  4db373:	50                   	push   eax
  4db374:	ff 52 28             	call   DWORD PTR [edx+0x28]
  4db377:	8b 08                	mov    ecx,DWORD PTR [eax]
  4db379:	8b bc 24 60 01 00 00 	mov    edi,DWORD PTR [esp+0x160]
  4db380:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
  4db384:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4db387:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  4db38b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4db38e:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
  4db392:	8a 85 04 01 00 00    	mov    al,BYTE PTR [ebp+0x104]
  4db398:	84 c0                	test   al,al
  4db39a:	74 19                	je     0x4db3b5
  4db39c:	8b 9c 24 64 01 00 00 	mov    ebx,DWORD PTR [esp+0x164]
  4db3a3:	57                   	push   edi
  4db3a4:	53                   	push   ebx
  4db3a5:	8b cd                	mov    ecx,ebp
  4db3a7:	e8 74 f0 ff ff       	call   0x4da420
  4db3ac:	57                   	push   edi
  4db3ad:	53                   	push   ebx
  4db3ae:	8b cd                	mov    ecx,ebp
  4db3b0:	e8 8b e9 ff ff       	call   0x4d9d40
  4db3b5:	8b 94 24 64 01 00 00 	mov    edx,DWORD PTR [esp+0x164]
  4db3bc:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  4db3c0:	51                   	push   ecx
  4db3c1:	57                   	push   edi
  4db3c2:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4db3c6:	52                   	push   edx
  4db3c7:	50                   	push   eax
  4db3c8:	8b cd                	mov    ecx,ebp
  4db3ca:	e8 11 e1 ff ff       	call   0x4d94e0
  4db3cf:	8b d0                	mov    edx,eax
  4db3d1:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4db3d5:	e8 26 7c 0d 00       	call   0x5b3000
  4db3da:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db3e0:	85 c0                	test   eax,eax
  4db3e2:	75 6b                	jne    0x4db44f
  4db3e4:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4db3e8:	6a 00                	push   0x0
  4db3ea:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4db3ee:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db3f2:	e8 a9 8c f2 ff       	call   0x4040a0
  4db3f7:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db3fc:	8b ce                	mov    ecx,esi
  4db3fe:	33 c0                	xor    eax,eax
  4db400:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db402:	f7 d1                	not    ecx
  4db404:	49                   	dec    ecx
  4db405:	51                   	push   ecx
  4db406:	68 70 3f 6b 00       	push   0x6b3f70
  4db40b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db40f:	e8 dc 8c f2 ff       	call   0x4040f0
  4db414:	8d 54 24 14          	lea    edx,[esp+0x14]
  4db418:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xe
  4db41f:	0e 00 00 00 
  4db423:	52                   	push   edx
  4db424:	68 b6 00 00 00       	push   0xb6
  4db429:	68 38 d6 68 00       	push   0x68d638
  4db42e:	68 2c d6 68 00       	push   0x68d62c
  4db433:	e8 b8 53 0c 00       	call   0x5a07f0
  4db438:	ff d0                	call   eax
  4db43a:	83 c4 10             	add    esp,0x10
  4db43d:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db441:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db448:	6a 01                	push   0x1
  4db44a:	e8 51 8c f2 ff       	call   0x4040a0
  4db44f:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4db455:	e8 b6 b2 07 00       	call   0x556710
  4db45a:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db460:	85 c0                	test   eax,eax
  4db462:	75 6b                	jne    0x4db4cf
  4db464:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4db468:	6a 00                	push   0x0
  4db46a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db46e:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4db472:	e8 29 8c f2 ff       	call   0x4040a0
  4db477:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db47c:	8b ce                	mov    ecx,esi
  4db47e:	33 c0                	xor    eax,eax
  4db480:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db482:	f7 d1                	not    ecx
  4db484:	49                   	dec    ecx
  4db485:	51                   	push   ecx
  4db486:	68 70 3f 6b 00       	push   0x6b3f70
  4db48b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db48f:	e8 5c 8c f2 ff       	call   0x4040f0
  4db494:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db498:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xf
  4db49f:	0f 00 00 00 
  4db4a3:	51                   	push   ecx
  4db4a4:	68 b6 00 00 00       	push   0xb6
  4db4a9:	68 38 d6 68 00       	push   0x68d638
  4db4ae:	68 2c d6 68 00       	push   0x68d62c
  4db4b3:	e8 38 53 0c 00       	call   0x5a07f0
  4db4b8:	ff d0                	call   eax
  4db4ba:	83 c4 10             	add    esp,0x10
  4db4bd:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db4c1:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db4c8:	6a 01                	push   0x1
  4db4ca:	e8 d1 8b f2 ff       	call   0x4040a0
  4db4cf:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4db4d5:	8d 44 24 70          	lea    eax,[esp+0x70]
  4db4d9:	50                   	push   eax
  4db4da:	8b 11                	mov    edx,DWORD PTR [ecx]
  4db4dc:	ff 52 04             	call   DWORD PTR [edx+0x4]
  4db4df:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db4e5:	85 c0                	test   eax,eax
  4db4e7:	75 6b                	jne    0x4db554
  4db4e9:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4db4ed:	6a 00                	push   0x0
  4db4ef:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4db4f3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db4f7:	e8 a4 8b f2 ff       	call   0x4040a0
  4db4fc:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db501:	8b ce                	mov    ecx,esi
  4db503:	33 c0                	xor    eax,eax
  4db505:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db507:	f7 d1                	not    ecx
  4db509:	49                   	dec    ecx
  4db50a:	51                   	push   ecx
  4db50b:	68 70 3f 6b 00       	push   0x6b3f70
  4db510:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db514:	e8 d7 8b f2 ff       	call   0x4040f0
  4db519:	8d 54 24 14          	lea    edx,[esp+0x14]
  4db51d:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x10
  4db524:	10 00 00 00 
  4db528:	52                   	push   edx
  4db529:	68 b6 00 00 00       	push   0xb6
  4db52e:	68 38 d6 68 00       	push   0x68d638
  4db533:	68 2c d6 68 00       	push   0x68d62c
  4db538:	e8 b3 52 0c 00       	call   0x5a07f0
  4db53d:	ff d0                	call   eax
  4db53f:	83 c4 10             	add    esp,0x10
  4db542:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db546:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db54d:	6a 01                	push   0x1
  4db54f:	e8 4c 8b f2 ff       	call   0x4040a0
  4db554:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4db55a:	8d 44 24 64          	lea    eax,[esp+0x64]
  4db55e:	50                   	push   eax
  4db55f:	e8 5c b1 07 00       	call   0x5566c0
  4db564:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db56a:	85 c0                	test   eax,eax
  4db56c:	75 6b                	jne    0x4db5d9
  4db56e:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4db572:	6a 00                	push   0x0
  4db574:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4db578:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db57c:	e8 1f 8b f2 ff       	call   0x4040a0
  4db581:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db586:	8b ce                	mov    ecx,esi
  4db588:	33 c0                	xor    eax,eax
  4db58a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db58c:	f7 d1                	not    ecx
  4db58e:	49                   	dec    ecx
  4db58f:	51                   	push   ecx
  4db590:	68 70 3f 6b 00       	push   0x6b3f70
  4db595:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db599:	e8 52 8b f2 ff       	call   0x4040f0
  4db59e:	8d 54 24 14          	lea    edx,[esp+0x14]
  4db5a2:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x11
  4db5a9:	11 00 00 00 
  4db5ad:	52                   	push   edx
  4db5ae:	68 b6 00 00 00       	push   0xb6
  4db5b3:	68 38 d6 68 00       	push   0x68d638
  4db5b8:	68 2c d6 68 00       	push   0x68d62c
  4db5bd:	e8 2e 52 0c 00       	call   0x5a07f0
  4db5c2:	ff d0                	call   eax
  4db5c4:	83 c4 10             	add    esp,0x10
  4db5c7:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db5cb:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db5d2:	6a 01                	push   0x1
  4db5d4:	e8 c7 8a f2 ff       	call   0x4040a0
  4db5d9:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4db5df:	e8 cc b3 07 00       	call   0x5569b0
  4db5e4:	8d 8d d0 01 00 00    	lea    ecx,[ebp+0x1d0]
  4db5ea:	e8 31 94 07 00       	call   0x554a20
  4db5ef:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
  4db5f2:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4db5f6:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db5fc:	85 c0                	test   eax,eax
  4db5fe:	75 4e                	jne    0x4db64e
  4db600:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4db604:	51                   	push   ecx
  4db605:	68 70 3f 6b 00       	push   0x6b3f70
  4db60a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db60e:	e8 fd e1 f2 ff       	call   0x409810
  4db613:	8d 54 24 14          	lea    edx,[esp+0x14]
  4db617:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x12
  4db61e:	12 00 00 00 
  4db622:	52                   	push   edx
  4db623:	68 b6 00 00 00       	push   0xb6
  4db628:	68 38 d6 68 00       	push   0x68d638
  4db62d:	68 2c d6 68 00       	push   0x68d62c
  4db632:	e8 b9 51 0c 00       	call   0x5a07f0
  4db637:	ff d0                	call   eax
  4db639:	83 c4 10             	add    esp,0x10
  4db63c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db640:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db647:	6a 01                	push   0x1
  4db649:	e8 52 8a f2 ff       	call   0x4040a0
  4db64e:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db654:	b9 0c 00 00 00       	mov    ecx,0xc
  4db659:	8d bc 24 ac 00 00 00 	lea    edi,[esp+0xac]
  4db660:	8d 54 24 54          	lea    edx,[esp+0x54]
  4db664:	8d b0 e0 01 00 00    	lea    esi,[eax+0x1e0]
  4db66a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4db66c:	8d 8c 24 ac 00 00 00 	lea    ecx,[esp+0xac]
  4db673:	e8 f8 7f 0d 00       	call   0x5b3670
  4db678:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  4db67c:	51                   	push   ecx
  4db67d:	8d 54 24 58          	lea    edx,[esp+0x58]
  4db681:	d9 e0                	fchs
  4db683:	d9 1c 24             	fstp   DWORD PTR [esp]
  4db686:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4db68a:	e8 11 79 0d 00       	call   0x5b2fa0
  4db68f:	8b cd                	mov    ecx,ebp
  4db691:	e8 ea 1c 00 00       	call   0x4dd380
  4db696:	84 c0                	test   al,al
  4db698:	74 20                	je     0x4db6ba
  4db69a:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  4db6a0:	d8 a5 18 01 00 00    	fsub   DWORD PTR [ebp+0x118]
  4db6a6:	d8 0d b4 92 6b 00    	fmul   DWORD PTR ds:0x6b92b4
  4db6ac:	d8 0d 84 bd 64 00    	fmul   DWORD PTR ds:0x64bd84
  4db6b2:	d8 6c 24 58          	fsubr  DWORD PTR [esp+0x58]
  4db6b6:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
  4db6ba:	8d b5 d0 01 00 00    	lea    esi,[ebp+0x1d0]
  4db6c0:	8b ce                	mov    ecx,esi
  4db6c2:	e8 59 93 07 00       	call   0x554a20
  4db6c7:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
  4db6cb:	d8 58 10             	fcomp  DWORD PTR [eax+0x10]
  4db6ce:	df e0                	fnstsw ax
  4db6d0:	f6 c4 41             	test   ah,0x41
  4db6d3:	75 0e                	jne    0x4db6e3
  4db6d5:	8b ce                	mov    ecx,esi
  4db6d7:	e8 44 93 07 00       	call   0x554a20
  4db6dc:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  4db6df:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
  4db6e3:	8b ce                	mov    ecx,esi
  4db6e5:	e8 36 93 07 00       	call   0x554a20
  4db6ea:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
  4db6ee:	d8 58 04             	fcomp  DWORD PTR [eax+0x4]
  4db6f1:	df e0                	fnstsw ax
  4db6f3:	f6 c4 01             	test   ah,0x1
  4db6f6:	74 0e                	je     0x4db706
  4db6f8:	8b ce                	mov    ecx,esi
  4db6fa:	e8 21 93 07 00       	call   0x554a20
  4db6ff:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  4db702:	89 4c 24 58          	mov    DWORD PTR [esp+0x58],ecx
  4db706:	8d 94 24 d0 00 00 00 	lea    edx,[esp+0xd0]
  4db70d:	8d 8c 24 d0 00 00 00 	lea    ecx,[esp+0xd0]
  4db714:	52                   	push   edx
  4db715:	8d 54 24 58          	lea    edx,[esp+0x58]
  4db719:	e8 e2 78 0d 00       	call   0x5b3000
  4db71e:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db724:	85 c0                	test   eax,eax
  4db726:	75 70                	jne    0x4db798
  4db728:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4db72c:	6a 00                	push   0x0
  4db72e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db732:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4db736:	e8 65 89 f2 ff       	call   0x4040a0
  4db73b:	83 cb ff             	or     ebx,0xffffffff
  4db73e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db743:	8b cb                	mov    ecx,ebx
  4db745:	33 c0                	xor    eax,eax
  4db747:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db749:	f7 d1                	not    ecx
  4db74b:	49                   	dec    ecx
  4db74c:	51                   	push   ecx
  4db74d:	68 70 3f 6b 00       	push   0x6b3f70
  4db752:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db756:	e8 95 89 f2 ff       	call   0x4040f0
  4db75b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db75f:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x13
  4db766:	13 00 00 00 
  4db76a:	51                   	push   ecx
  4db76b:	68 b6 00 00 00       	push   0xb6
  4db770:	68 38 d6 68 00       	push   0x68d638
  4db775:	68 2c d6 68 00       	push   0x68d62c
  4db77a:	e8 71 50 0c 00       	call   0x5a07f0
  4db77f:	ff d0                	call   eax
  4db781:	83 c4 10             	add    esp,0x10
  4db784:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db788:	89 9c 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],ebx
  4db78f:	6a 01                	push   0x1
  4db791:	e8 0a 89 f2 ff       	call   0x4040a0
  4db796:	eb 03                	jmp    0x4db79b
  4db798:	83 cb ff             	or     ebx,0xffffffff
  4db79b:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4db7a1:	8d 94 24 ac 00 00 00 	lea    edx,[esp+0xac]
  4db7a8:	52                   	push   edx
  4db7a9:	e8 82 b2 07 00       	call   0x556a30
  4db7ae:	8b 85 f0 01 00 00    	mov    eax,DWORD PTR [ebp+0x1f0]
  4db7b4:	85 c0                	test   eax,eax
  4db7b6:	75 4e                	jne    0x4db806
  4db7b8:	8d 44 24 13          	lea    eax,[esp+0x13]
  4db7bc:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db7c0:	50                   	push   eax
  4db7c1:	68 70 3f 6b 00       	push   0x6b3f70
  4db7c6:	e8 45 e0 f2 ff       	call   0x409810
  4db7cb:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db7cf:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x14
  4db7d6:	14 00 00 00 
  4db7da:	51                   	push   ecx
  4db7db:	68 5b 01 00 00       	push   0x15b
  4db7e0:	68 8c 88 69 00       	push   0x69888c
  4db7e5:	68 70 f9 68 00       	push   0x68f970
  4db7ea:	e8 01 50 0c 00       	call   0x5a07f0
  4db7ef:	ff d0                	call   eax
  4db7f1:	83 c4 10             	add    esp,0x10
  4db7f4:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db7f8:	89 9c 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],ebx
  4db7ff:	6a 01                	push   0x1
  4db801:	e8 9a 88 f2 ff       	call   0x4040a0
  4db806:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  4db80c:	8b b4 24 64 01 00 00 	mov    esi,DWORD PTR [esp+0x164]
  4db813:	8b bc 24 60 01 00 00 	mov    edi,DWORD PTR [esp+0x160]
  4db81a:	56                   	push   esi
  4db81b:	8b 11                	mov    edx,DWORD PTR [ecx]
  4db81d:	57                   	push   edi
  4db81e:	ff 52 14             	call   DWORD PTR [edx+0x14]
  4db821:	8b 85 f4 01 00 00    	mov    eax,DWORD PTR [ebp+0x1f4]
  4db827:	85 c0                	test   eax,eax
  4db829:	75 4e                	jne    0x4db879
  4db82b:	8d 44 24 13          	lea    eax,[esp+0x13]
  4db82f:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db833:	50                   	push   eax
  4db834:	68 70 3f 6b 00       	push   0x6b3f70
  4db839:	e8 d2 df f2 ff       	call   0x409810
  4db83e:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db842:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x15
  4db849:	15 00 00 00 
  4db84d:	51                   	push   ecx
  4db84e:	68 61 01 00 00       	push   0x161
  4db853:	68 8c 88 69 00       	push   0x69888c
  4db858:	68 10 04 69 00       	push   0x690410
  4db85d:	e8 8e 4f 0c 00       	call   0x5a07f0
  4db862:	ff d0                	call   eax
  4db864:	83 c4 10             	add    esp,0x10
  4db867:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db86b:	89 9c 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],ebx
  4db872:	6a 01                	push   0x1
  4db874:	e8 27 88 f2 ff       	call   0x4040a0
  4db879:	8b 8d f4 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f4]
  4db87f:	56                   	push   esi
  4db880:	57                   	push   edi
  4db881:	8b 11                	mov    edx,DWORD PTR [ecx]
  4db883:	ff 52 14             	call   DWORD PTR [edx+0x14]
  4db886:	8b 85 f8 01 00 00    	mov    eax,DWORD PTR [ebp+0x1f8]
  4db88c:	85 c0                	test   eax,eax
  4db88e:	75 4e                	jne    0x4db8de
  4db890:	8d 44 24 13          	lea    eax,[esp+0x13]
  4db894:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db898:	50                   	push   eax
  4db899:	68 70 3f 6b 00       	push   0x6b3f70
  4db89e:	e8 6d df f2 ff       	call   0x409810
  4db8a3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db8a7:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x16
  4db8ae:	16 00 00 00 
  4db8b2:	51                   	push   ecx
  4db8b3:	68 67 01 00 00       	push   0x167
  4db8b8:	68 8c 88 69 00       	push   0x69888c
  4db8bd:	68 bc 34 69 00       	push   0x6934bc
  4db8c2:	e8 29 4f 0c 00       	call   0x5a07f0
  4db8c7:	ff d0                	call   eax
  4db8c9:	83 c4 10             	add    esp,0x10
  4db8cc:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db8d0:	89 9c 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],ebx
  4db8d7:	6a 01                	push   0x1
  4db8d9:	e8 c2 87 f2 ff       	call   0x4040a0
  4db8de:	8b ad f8 01 00 00    	mov    ebp,DWORD PTR [ebp+0x1f8]
  4db8e4:	56                   	push   esi
  4db8e5:	57                   	push   edi
  4db8e6:	8b cd                	mov    ecx,ebp
  4db8e8:	e8 43 7d 03 00       	call   0x513630
  4db8ed:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  4db8f3:	5f                   	pop    edi
  4db8f4:	85 f6                	test   esi,esi
  4db8f6:	75 07                	jne    0x4db8ff
  4db8f8:	e8 83 0b fe ff       	call   0x4bc480
  4db8fd:	8b f0                	mov    esi,eax
  4db8ff:	8b 86 a4 03 00 00    	mov    eax,DWORD PTR [esi+0x3a4]
  4db905:	85 c0                	test   eax,eax
  4db907:	75 4e                	jne    0x4db957
  4db909:	8d 54 24 0f          	lea    edx,[esp+0xf]
  4db90d:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4db911:	52                   	push   edx
  4db912:	68 70 3f 6b 00       	push   0x6b3f70
  4db917:	e8 f4 de f2 ff       	call   0x409810
  4db91c:	8d 44 24 10          	lea    eax,[esp+0x10]
  4db920:	c7 84 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],0x17
  4db927:	17 00 00 00 
  4db92b:	50                   	push   eax
  4db92c:	68 30 01 00 00       	push   0x130
  4db931:	68 8c e5 68 00       	push   0x68e58c
  4db936:	68 84 e5 68 00       	push   0x68e584
  4db93b:	e8 b0 4e 0c 00       	call   0x5a07f0
  4db940:	ff d0                	call   eax
  4db942:	83 c4 10             	add    esp,0x10
  4db945:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4db949:	89 9c 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],ebx
  4db950:	6a 01                	push   0x1
  4db952:	e8 49 87 f2 ff       	call   0x4040a0
  4db957:	8b 8e a4 03 00 00    	mov    ecx,DWORD PTR [esi+0x3a4]
  4db95d:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  4db961:	52                   	push   edx
  4db962:	e8 d9 83 f7 ff       	call   0x453d40
  4db967:	8b f0                	mov    esi,eax
  4db969:	8b 06                	mov    eax,DWORD PTR [esi]
  4db96b:	bb 18 00 00 00       	mov    ebx,0x18
  4db970:	85 c0                	test   eax,eax
  4db972:	89 9c 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],ebx
  4db979:	75 54                	jne    0x4db9cf
  4db97b:	8d 44 24 4f          	lea    eax,[esp+0x4f]
  4db97f:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  4db986:	50                   	push   eax
  4db987:	68 70 3f 6b 00       	push   0x6b3f70
  4db98c:	e8 7f de f2 ff       	call   0x409810
  4db991:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  4db998:	c6 84 24 54 01 00 00 	mov    BYTE PTR [esp+0x154],0x19
  4db99f:	19 
  4db9a0:	51                   	push   ecx
  4db9a1:	68 b6 00 00 00       	push   0xb6
  4db9a6:	68 38 d6 68 00       	push   0x68d638
  4db9ab:	68 2c d6 68 00       	push   0x68d62c
  4db9b0:	e8 3b 4e 0c 00       	call   0x5a07f0
  4db9b5:	ff d0                	call   eax
  4db9b7:	83 c4 10             	add    esp,0x10
  4db9ba:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  4db9c1:	88 9c 24 54 01 00 00 	mov    BYTE PTR [esp+0x154],bl
  4db9c8:	6a 01                	push   0x1
  4db9ca:	e8 d1 86 f2 ff       	call   0x4040a0
  4db9cf:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4db9d1:	e8 9a 6b 01 00       	call   0x4f2570
  4db9d6:	8b c8                	mov    ecx,eax
  4db9d8:	e8 73 78 01 00       	call   0x4f3250
  4db9dd:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4db9e1:	c7 84 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],0xffffffff
  4db9e8:	ff ff ff ff 
  4db9ec:	e8 1f 19 0a 00       	call   0x57d310
  4db9f1:	8b 8c 24 4c 01 00 00 	mov    ecx,DWORD PTR [esp+0x14c]
  4db9f8:	5e                   	pop    esi
  4db9f9:	5d                   	pop    ebp
  4db9fa:	5b                   	pop    ebx
  4db9fb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dba02:	81 c4 4c 01 00 00    	add    esp,0x14c
  4dba08:	c2 08 00             	ret    0x8
  4dba0b:	90                   	nop
  4dba0c:	90                   	nop
  4dba0d:	90                   	nop
  4dba0e:	90                   	nop
  4dba0f:	90                   	nop
  4dba10:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  4dba15:	83 ec 18             	sub    esp,0x18
  4dba18:	85 c0                	test   eax,eax
  4dba1a:	75 05                	jne    0x4dba21
  4dba1c:	e8 5f 0a fe ff       	call   0x4bc480
  4dba21:	56                   	push   esi
  4dba22:	57                   	push   edi
  4dba23:	8b c8                	mov    ecx,eax
  4dba25:	e8 e6 14 f3 ff       	call   0x40cf10
  4dba2a:	8b c8                	mov    ecx,eax
  4dba2c:	e8 5f a2 05 00       	call   0x535c90
  4dba31:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  4dba35:	8b f0                	mov    esi,eax
  4dba37:	8d 44 24 14          	lea    eax,[esp+0x14]
  4dba3b:	57                   	push   edi
  4dba3c:	50                   	push   eax
  4dba3d:	e8 1e 04 00 00       	call   0x4dbe60
  4dba42:	8b 08                	mov    ecx,DWORD PTR [eax]
  4dba44:	83 c4 08             	add    esp,0x8
  4dba47:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  4dba4b:	8b 4f 0c             	mov    ecx,DWORD PTR [edi+0xc]
  4dba4e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4dba51:	51                   	push   ecx
  4dba52:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  4dba56:	8d 54 24 0c          	lea    edx,[esp+0xc]
  4dba5a:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4dba5d:	52                   	push   edx
  4dba5e:	8b ce                	mov    ecx,esi
  4dba60:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  4dba64:	e8 e7 a6 ff ff       	call   0x4d6150
  4dba69:	6a 01                	push   0x1
  4dba6b:	8b ce                	mov    ecx,esi
  4dba6d:	e8 de 68 02 00       	call   0x502350
  4dba72:	68 94 9d 69 00       	push   0x699d94
  4dba77:	8b ce                	mov    ecx,esi
  4dba79:	e8 82 21 00 00       	call   0x4ddc00
  4dba7e:	8b c6                	mov    eax,esi
  4dba80:	5f                   	pop    edi
  4dba81:	5e                   	pop    esi
  4dba82:	83 c4 18             	add    esp,0x18
  4dba85:	c3                   	ret
  4dba86:	90                   	nop
  4dba87:	90                   	nop
  4dba88:	90                   	nop
  4dba89:	90                   	nop
  4dba8a:	90                   	nop
  4dba8b:	90                   	nop
  4dba8c:	90                   	nop
  4dba8d:	90                   	nop
  4dba8e:	90                   	nop
  4dba8f:	90                   	nop
  4dba90:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  4dba95:	83 ec 18             	sub    esp,0x18
  4dba98:	85 c0                	test   eax,eax
  4dba9a:	75 05                	jne    0x4dbaa1
  4dba9c:	e8 df 09 fe ff       	call   0x4bc480
  4dbaa1:	56                   	push   esi
  4dbaa2:	57                   	push   edi
  4dbaa3:	8b c8                	mov    ecx,eax
  4dbaa5:	e8 66 14 f3 ff       	call   0x40cf10
  4dbaaa:	8b c8                	mov    ecx,eax
  4dbaac:	e8 df a1 05 00       	call   0x535c90
  4dbab1:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  4dbab5:	8b f0                	mov    esi,eax
  4dbab7:	8d 44 24 14          	lea    eax,[esp+0x14]
  4dbabb:	57                   	push   edi
  4dbabc:	50                   	push   eax
  4dbabd:	e8 9e 03 00 00       	call   0x4dbe60
  4dbac2:	8b 08                	mov    ecx,DWORD PTR [eax]
  4dbac4:	83 c4 08             	add    esp,0x8
  4dbac7:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  4dbacb:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
  4dbace:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4dbad1:	51                   	push   ecx
  4dbad2:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  4dbad6:	8d 54 24 0c          	lea    edx,[esp+0xc]
  4dbada:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4dbadd:	52                   	push   edx
  4dbade:	8b ce                	mov    ecx,esi
  4dbae0:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  4dbae4:	e8 67 a6 ff ff       	call   0x4d6150
  4dbae9:	6a 01                	push   0x1
  4dbaeb:	8b ce                	mov    ecx,esi
  4dbaed:	e8 5e 68 02 00       	call   0x502350
  4dbaf2:	68 94 9d 69 00       	push   0x699d94
  4dbaf7:	8b ce                	mov    ecx,esi
  4dbaf9:	e8 02 21 00 00       	call   0x4ddc00
  4dbafe:	8b c6                	mov    eax,esi
  4dbb00:	5f                   	pop    edi
  4dbb01:	5e                   	pop    esi
  4dbb02:	83 c4 18             	add    esp,0x18
  4dbb05:	c3                   	ret
  4dbb06:	90                   	nop
  4dbb07:	90                   	nop
  4dbb08:	90                   	nop
  4dbb09:	90                   	nop
  4dbb0a:	90                   	nop
  4dbb0b:	90                   	nop
  4dbb0c:	90                   	nop
  4dbb0d:	90                   	nop
  4dbb0e:	90                   	nop
  4dbb0f:	90                   	nop
  4dbb10:	6a ff                	push   0xffffffff
  4dbb12:	68 a0 1f 63 00       	push   0x631fa0
  4dbb17:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dbb1d:	50                   	push   eax
  4dbb1e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dbb25:	83 ec 3c             	sub    esp,0x3c
  4dbb28:	53                   	push   ebx
  4dbb29:	55                   	push   ebp
  4dbb2a:	8b 6c 24 54          	mov    ebp,DWORD PTR [esp+0x54]
  4dbb2e:	56                   	push   esi
  4dbb2f:	57                   	push   edi
  4dbb30:	68 18 a6 6b 00       	push   0x6ba618
  4dbb35:	51                   	push   ecx
  4dbb36:	8b cc                	mov    ecx,esp
  4dbb38:	89 64 24 18          	mov    DWORD PTR [esp+0x18],esp
  4dbb3c:	55                   	push   ebp
  4dbb3d:	e8 fe b6 f7 ff       	call   0x457240
  4dbb42:	e8 99 2d f4 ff       	call   0x41e8e0
  4dbb47:	8b f8                	mov    edi,eax
  4dbb49:	83 c4 08             	add    esp,0x8
  4dbb4c:	85 ff                	test   edi,edi
  4dbb4e:	0f 8e f8 00 00 00    	jle    0x4dbc4c
  4dbb54:	6a 00                	push   0x0
  4dbb56:	68 18 a6 6b 00       	push   0x6ba618
  4dbb5b:	51                   	push   ecx
  4dbb5c:	8b cc                	mov    ecx,esp
  4dbb5e:	89 64 24 68          	mov    DWORD PTR [esp+0x68],esp
  4dbb62:	55                   	push   ebp
  4dbb63:	e8 d8 b6 f7 ff       	call   0x457240
  4dbb68:	e8 83 21 00 00       	call   0x4ddcf0
  4dbb6d:	8b f0                	mov    esi,eax
  4dbb6f:	83 c4 0c             	add    esp,0xc
  4dbb72:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  4dbb75:	3d f3 03 00 00       	cmp    eax,0x3f3
  4dbb7a:	74 48                	je     0x4dbbc4
  4dbb7c:	50                   	push   eax
  4dbb7d:	8d 44 24 28          	lea    eax,[esp+0x28]
  4dbb81:	68 34 9e 69 00       	push   0x699e34
  4dbb86:	50                   	push   eax
  4dbb87:	e8 04 28 0d 00       	call   0x5ae390
  4dbb8c:	83 c4 0c             	add    esp,0xc
  4dbb8f:	50                   	push   eax
  4dbb90:	68 51 07 00 00       	push   0x751
  4dbb95:	68 28 97 69 00       	push   0x699728
  4dbb9a:	68 18 9e 69 00       	push   0x699e18
  4dbb9f:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
  4dbba6:	00 
  4dbba7:	e8 44 4c 0c 00       	call   0x5a07f0
  4dbbac:	ff d0                	call   eax
  4dbbae:	83 c4 10             	add    esp,0x10
  4dbbb1:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dbbb5:	c7 44 24 54 ff ff ff 	mov    DWORD PTR [esp+0x54],0xffffffff
  4dbbbc:	ff 
  4dbbbd:	6a 01                	push   0x1
  4dbbbf:	e8 dc 84 f2 ff       	call   0x4040a0
  4dbbc4:	56                   	push   esi
  4dbbc5:	e8 c6 fe ff ff       	call   0x4dba90
  4dbbca:	83 c4 04             	add    esp,0x4
  4dbbcd:	83 ff 01             	cmp    edi,0x1
  4dbbd0:	8b d8                	mov    ebx,eax
  4dbbd2:	0f 8e ed 01 00 00    	jle    0x4dbdc5
  4dbbd8:	b9 18 a6 6b 00       	mov    ecx,0x6ba618
  4dbbdd:	e8 7e 61 0c 00       	call   0x5a1d60
  4dbbe2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dbbe5:	be b4 a3 64 00       	mov    esi,0x64a3b4
  4dbbea:	85 c0                	test   eax,eax
  4dbbec:	74 02                	je     0x4dbbf0
  4dbbee:	8b f0                	mov    esi,eax
  4dbbf0:	8b cd                	mov    ecx,ebp
  4dbbf2:	e8 19 81 01 00       	call   0x4f3d10
  4dbbf7:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dbbfa:	b9 b4 a3 64 00       	mov    ecx,0x64a3b4
  4dbbff:	85 c0                	test   eax,eax
  4dbc01:	74 02                	je     0x4dbc05
  4dbc03:	8b c8                	mov    ecx,eax
  4dbc05:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  4dbc08:	85 c0                	test   eax,eax
  4dbc0a:	75 05                	jne    0x4dbc11
  4dbc0c:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4dbc11:	56                   	push   esi
  4dbc12:	51                   	push   ecx
  4dbc13:	50                   	push   eax
  4dbc14:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4dbc18:	68 d4 9d 69 00       	push   0x699dd4
  4dbc1d:	51                   	push   ecx
  4dbc1e:	e8 6d 27 0d 00       	call   0x5ae390
  4dbc23:	50                   	push   eax
  4dbc24:	c7 44 24 6c 01 00 00 	mov    DWORD PTR [esp+0x6c],0x1
  4dbc2b:	00 
  4dbc2c:	e8 af 87 fe ff       	call   0x4c43e0
  4dbc31:	83 c4 18             	add    esp,0x18
  4dbc34:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dbc38:	c7 44 24 54 ff ff ff 	mov    DWORD PTR [esp+0x54],0xffffffff
  4dbc3f:	ff 
  4dbc40:	6a 01                	push   0x1
  4dbc42:	e8 59 84 f2 ff       	call   0x4040a0
  4dbc47:	e9 79 01 00 00       	jmp    0x4dbdc5
  4dbc4c:	b9 18 a6 6b 00       	mov    ecx,0x6ba618
  4dbc51:	e8 0a 61 0c 00       	call   0x5a1d60
  4dbc56:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dbc59:	be b4 a3 64 00       	mov    esi,0x64a3b4
  4dbc5e:	85 c0                	test   eax,eax
  4dbc60:	74 02                	je     0x4dbc64
  4dbc62:	8b f0                	mov    esi,eax
  4dbc64:	8b cd                	mov    ecx,ebp
  4dbc66:	e8 a5 80 01 00       	call   0x4f3d10
  4dbc6b:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  4dbc6e:	85 c9                	test   ecx,ecx
  4dbc70:	75 05                	jne    0x4dbc77
  4dbc72:	b9 b4 a3 64 00       	mov    ecx,0x64a3b4
  4dbc77:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  4dbc7a:	85 c0                	test   eax,eax
  4dbc7c:	75 05                	jne    0x4dbc83
  4dbc7e:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4dbc83:	56                   	push   esi
  4dbc84:	51                   	push   ecx
  4dbc85:	50                   	push   eax
  4dbc86:	8d 54 24 30          	lea    edx,[esp+0x30]
  4dbc8a:	68 9c 9d 69 00       	push   0x699d9c
  4dbc8f:	52                   	push   edx
  4dbc90:	e8 fb 26 0d 00       	call   0x5ae390
  4dbc95:	50                   	push   eax
  4dbc96:	c7 44 24 6c 02 00 00 	mov    DWORD PTR [esp+0x6c],0x2
  4dbc9d:	00 
  4dbc9e:	e8 3d 87 fe ff       	call   0x4c43e0
  4dbca3:	83 c4 18             	add    esp,0x18
  4dbca6:	83 cb ff             	or     ebx,0xffffffff
  4dbca9:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dbcad:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
  4dbcb1:	6a 01                	push   0x1
  4dbcb3:	e8 e8 83 f2 ff       	call   0x4040a0
  4dbcb8:	68 40 a6 6b 00       	push   0x6ba640
  4dbcbd:	51                   	push   ecx
  4dbcbe:	8b cc                	mov    ecx,esp
  4dbcc0:	89 64 24 64          	mov    DWORD PTR [esp+0x64],esp
  4dbcc4:	55                   	push   ebp
  4dbcc5:	e8 76 b5 f7 ff       	call   0x457240
  4dbcca:	e8 11 2c f4 ff       	call   0x41e8e0
  4dbccf:	83 c4 08             	add    esp,0x8
  4dbcd2:	85 c0                	test   eax,eax
  4dbcd4:	7e 27                	jle    0x4dbcfd
  4dbcd6:	6a 00                	push   0x0
  4dbcd8:	68 40 a6 6b 00       	push   0x6ba640
  4dbcdd:	51                   	push   ecx
  4dbcde:	8b cc                	mov    ecx,esp
  4dbce0:	89 64 24 68          	mov    DWORD PTR [esp+0x68],esp
  4dbce4:	55                   	push   ebp
  4dbce5:	e8 56 b5 f7 ff       	call   0x457240
  4dbcea:	e8 81 ee fe ff       	call   0x4cab70
  4dbcef:	50                   	push   eax
  4dbcf0:	e8 1b fd ff ff       	call   0x4dba10
  4dbcf5:	83 c4 10             	add    esp,0x10
  4dbcf8:	e9 c6 00 00 00       	jmp    0x4dbdc3
  4dbcfd:	b9 40 a6 6b 00       	mov    ecx,0x6ba640
  4dbd02:	e8 59 60 0c 00       	call   0x5a1d60
  4dbd07:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dbd0a:	bf b4 a3 64 00       	mov    edi,0x64a3b4
  4dbd0f:	85 c0                	test   eax,eax
  4dbd11:	74 02                	je     0x4dbd15
  4dbd13:	8b f8                	mov    edi,eax
  4dbd15:	b9 18 a6 6b 00       	mov    ecx,0x6ba618
  4dbd1a:	e8 41 60 0c 00       	call   0x5a1d60
  4dbd1f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dbd22:	be b4 a3 64 00       	mov    esi,0x64a3b4
  4dbd27:	85 c0                	test   eax,eax
  4dbd29:	74 02                	je     0x4dbd2d
  4dbd2b:	8b f0                	mov    esi,eax
  4dbd2d:	8b cd                	mov    ecx,ebp
  4dbd2f:	e8 dc 7f 01 00       	call   0x4f3d10
  4dbd34:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dbd37:	b9 b4 a3 64 00       	mov    ecx,0x64a3b4
  4dbd3c:	85 c0                	test   eax,eax
  4dbd3e:	74 02                	je     0x4dbd42
  4dbd40:	8b c8                	mov    ecx,eax
  4dbd42:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  4dbd45:	85 c0                	test   eax,eax
  4dbd47:	75 05                	jne    0x4dbd4e
  4dbd49:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4dbd4e:	57                   	push   edi
  4dbd4f:	56                   	push   esi
  4dbd50:	51                   	push   ecx
  4dbd51:	50                   	push   eax
  4dbd52:	8d 44 24 24          	lea    eax,[esp+0x24]
  4dbd56:	68 9c 9d 69 00       	push   0x699d9c
  4dbd5b:	50                   	push   eax
  4dbd5c:	e8 2f 26 0d 00       	call   0x5ae390
  4dbd61:	50                   	push   eax
  4dbd62:	c7 44 24 70 03 00 00 	mov    DWORD PTR [esp+0x70],0x3
  4dbd69:	00 
  4dbd6a:	e8 71 86 fe ff       	call   0x4c43e0
  4dbd6f:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  4dbd73:	33 f6                	xor    esi,esi
  4dbd75:	83 c4 1c             	add    esp,0x1c
  4dbd78:	3b c6                	cmp    eax,esi
  4dbd7a:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
  4dbd7e:	74 1d                	je     0x4dbd9d
  4dbd80:	8d 48 ff             	lea    ecx,[eax-0x1]
  4dbd83:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4dbd86:	84 c0                	test   al,al
  4dbd88:	74 0a                	je     0x4dbd94
  4dbd8a:	3c ff                	cmp    al,0xff
  4dbd8c:	74 06                	je     0x4dbd94
  4dbd8e:	fe c8                	dec    al
  4dbd90:	88 01                	mov    BYTE PTR [ecx],al
  4dbd92:	eb 09                	jmp    0x4dbd9d
  4dbd94:	51                   	push   ecx
  4dbd95:	e8 56 28 12 00       	call   0x5fe5f0
  4dbd9a:	83 c4 04             	add    esp,0x4
  4dbd9d:	b9 06 00 00 00       	mov    ecx,0x6
  4dbda2:	33 c0                	xor    eax,eax
  4dbda4:	8d 7c 24 34          	lea    edi,[esp+0x34]
  4dbda8:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  4dbdac:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  4dbdae:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4dbdb2:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  4dbdb6:	51                   	push   ecx
  4dbdb7:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  4dbdbb:	e8 d0 fc ff ff       	call   0x4dba90
  4dbdc0:	83 c4 04             	add    esp,0x4
  4dbdc3:	8b d8                	mov    ebx,eax
  4dbdc5:	53                   	push   ebx
  4dbdc6:	8b cd                	mov    ecx,ebp
  4dbdc8:	e8 e3 83 01 00       	call   0x4f41b0
  4dbdcd:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  4dbdd1:	5f                   	pop    edi
  4dbdd2:	5e                   	pop    esi
  4dbdd3:	8b c3                	mov    eax,ebx
  4dbdd5:	5d                   	pop    ebp
  4dbdd6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dbddd:	5b                   	pop    ebx
  4dbdde:	83 c4 48             	add    esp,0x48
  4dbde1:	c3                   	ret
  4dbde2:	90                   	nop
  4dbde3:	90                   	nop
  4dbde4:	90                   	nop
  4dbde5:	90                   	nop
  4dbde6:	90                   	nop
  4dbde7:	90                   	nop
  4dbde8:	90                   	nop
  4dbde9:	90                   	nop
  4dbdea:	90                   	nop
  4dbdeb:	90                   	nop
  4dbdec:	90                   	nop
  4dbded:	90                   	nop
  4dbdee:	90                   	nop
  4dbdef:	90                   	nop
  4dbdf0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  4dbdf4:	81 c1 98 01 00 00    	add    ecx,0x198
  4dbdfa:	56                   	push   esi
  4dbdfb:	8b d0                	mov    edx,eax
  4dbdfd:	8b 31                	mov    esi,DWORD PTR [ecx]
  4dbdff:	89 32                	mov    DWORD PTR [edx],esi
  4dbe01:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
  4dbe04:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
  4dbe07:	5e                   	pop    esi
  4dbe08:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  4dbe0b:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  4dbe0e:	c2 04 00             	ret    0x4
  4dbe11:	90                   	nop
  4dbe12:	90                   	nop
  4dbe13:	90                   	nop
  4dbe14:	90                   	nop
  4dbe15:	90                   	nop
  4dbe16:	90                   	nop
  4dbe17:	90                   	nop
  4dbe18:	90                   	nop
  4dbe19:	90                   	nop
  4dbe1a:	90                   	nop
  4dbe1b:	90                   	nop
  4dbe1c:	90                   	nop
  4dbe1d:	90                   	nop
  4dbe1e:	90                   	nop
  4dbe1f:	90                   	nop
  4dbe20:	56                   	push   esi
  4dbe21:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  4dbe25:	8b d6                	mov    edx,esi
  4dbe27:	57                   	push   edi
  4dbe28:	8d 81 98 01 00 00    	lea    eax,[ecx+0x198]
  4dbe2e:	81 c1 0c 01 00 00    	add    ecx,0x10c
  4dbe34:	8b 3a                	mov    edi,DWORD PTR [edx]
  4dbe36:	89 38                	mov    DWORD PTR [eax],edi
  4dbe38:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  4dbe3b:	89 78 04             	mov    DWORD PTR [eax+0x4],edi
  4dbe3e:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  4dbe41:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  4dbe44:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dbe46:	85 c0                	test   eax,eax
  4dbe48:	74 0d                	je     0x4dbe57
  4dbe4a:	e8 d1 ea fe ff       	call   0x4ca920
  4dbe4f:	8b 10                	mov    edx,DWORD PTR [eax]
  4dbe51:	56                   	push   esi
  4dbe52:	8b c8                	mov    ecx,eax
  4dbe54:	ff 52 04             	call   DWORD PTR [edx+0x4]
  4dbe57:	5f                   	pop    edi
  4dbe58:	5e                   	pop    esi
  4dbe59:	c2 04 00             	ret    0x4
  4dbe5c:	90                   	nop
  4dbe5d:	90                   	nop
  4dbe5e:	90                   	nop
  4dbe5f:	90                   	nop
  4dbe60:	83 ec 0c             	sub    esp,0xc
  4dbe63:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4dbe67:	56                   	push   esi
  4dbe68:	d9 05 b4 92 6b 00    	fld    DWORD PTR ds:0x6b92b4
  4dbe6e:	8b 08                	mov    ecx,DWORD PTR [eax]
  4dbe70:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4dbe73:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  4dbe77:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  4dbe7a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4dbe7e:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  4dbe82:	8b f0                	mov    esi,eax
  4dbe84:	89 0e                	mov    DWORD PTR [esi],ecx
  4dbe86:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  4dbe8a:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4dbe8e:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  4dbe91:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  4dbe94:	5e                   	pop    esi
  4dbe95:	83 c4 0c             	add    esp,0xc
  4dbe98:	c3                   	ret
  4dbe99:	90                   	nop
  4dbe9a:	90                   	nop
  4dbe9b:	90                   	nop
  4dbe9c:	90                   	nop
  4dbe9d:	90                   	nop
  4dbe9e:	90                   	nop
  4dbe9f:	90                   	nop
  4dbea0:	6a ff                	push   0xffffffff
  4dbea2:	68 d0 1f 63 00       	push   0x631fd0
  4dbea7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dbead:	50                   	push   eax
  4dbeae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dbeb5:	83 ec 10             	sub    esp,0x10
  4dbeb8:	55                   	push   ebp
  4dbeb9:	56                   	push   esi
  4dbeba:	57                   	push   edi
  4dbebb:	8b e9                	mov    ebp,ecx
  4dbebd:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4dbec3:	8b 74 24 2c          	mov    esi,DWORD PTR [esp+0x2c]
  4dbec7:	3b ce                	cmp    ecx,esi
  4dbec9:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
  4dbed0:	00 
  4dbed1:	74 21                	je     0x4dbef4
  4dbed3:	85 c9                	test   ecx,ecx
  4dbed5:	74 10                	je     0x4dbee7
  4dbed7:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  4dbeda:	48                   	dec    eax
  4dbedb:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  4dbede:	75 07                	jne    0x4dbee7
  4dbee0:	6a 00                	push   0x0
  4dbee2:	e8 d9 00 0d 00       	call   0x5abfc0
  4dbee7:	85 f6                	test   esi,esi
  4dbee9:	89 b5 0c 01 00 00    	mov    DWORD PTR [ebp+0x10c],esi
  4dbeef:	74 03                	je     0x4dbef4
  4dbef1:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  4dbef4:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4dbefa:	85 c0                	test   eax,eax
  4dbefc:	75 64                	jne    0x4dbf62
  4dbefe:	8a 44 24 2c          	mov    al,BYTE PTR [esp+0x2c]
  4dbf02:	6a 00                	push   0x0
  4dbf04:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4dbf08:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  4dbf0c:	e8 8f 81 f2 ff       	call   0x4040a0
  4dbf11:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dbf16:	83 c9 ff             	or     ecx,0xffffffff
  4dbf19:	33 c0                	xor    eax,eax
  4dbf1b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dbf1d:	f7 d1                	not    ecx
  4dbf1f:	49                   	dec    ecx
  4dbf20:	51                   	push   ecx
  4dbf21:	68 70 3f 6b 00       	push   0x6b3f70
  4dbf26:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dbf2a:	e8 c1 81 f2 ff       	call   0x4040f0
  4dbf2f:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  4dbf33:	c6 44 24 24 01       	mov    BYTE PTR [esp+0x24],0x1
  4dbf38:	51                   	push   ecx
  4dbf39:	68 b6 00 00 00       	push   0xb6
  4dbf3e:	68 38 d6 68 00       	push   0x68d638
  4dbf43:	68 2c d6 68 00       	push   0x68d62c
  4dbf48:	e8 a3 48 0c 00       	call   0x5a07f0
  4dbf4d:	ff d0                	call   eax
  4dbf4f:	83 c4 10             	add    esp,0x10
  4dbf52:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  4dbf56:	c6 44 24 24 00       	mov    BYTE PTR [esp+0x24],0x0
  4dbf5b:	6a 01                	push   0x1
  4dbf5d:	e8 3e 81 f2 ff       	call   0x4040a0
  4dbf62:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4dbf68:	e8 a3 a7 07 00       	call   0x556710
  4dbf6d:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4dbf73:	85 c0                	test   eax,eax
  4dbf75:	0f 85 90 00 00 00    	jne    0x4dc00b
  4dbf7b:	8a 54 24 2c          	mov    dl,BYTE PTR [esp+0x2c]
  4dbf7f:	53                   	push   ebx
  4dbf80:	6a 00                	push   0x0
  4dbf82:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dbf86:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  4dbf8a:	e8 11 81 f2 ff       	call   0x4040a0
  4dbf8f:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dbf94:	83 c9 ff             	or     ecx,0xffffffff
  4dbf97:	33 c0                	xor    eax,eax
  4dbf99:	6a 01                	push   0x1
  4dbf9b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dbf9d:	f7 d1                	not    ecx
  4dbf9f:	49                   	dec    ecx
  4dbfa0:	8b d9                	mov    ebx,ecx
  4dbfa2:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dbfa6:	53                   	push   ebx
  4dbfa7:	e8 94 59 f2 ff       	call   0x401940
  4dbfac:	84 c0                	test   al,al
  4dbfae:	74 27                	je     0x4dbfd7
  4dbfb0:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  4dbfb4:	8b cb                	mov    ecx,ebx
  4dbfb6:	8b c1                	mov    eax,ecx
  4dbfb8:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4dbfbd:	c1 e9 02             	shr    ecx,0x2
  4dbfc0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dbfc2:	8b c8                	mov    ecx,eax
  4dbfc4:	53                   	push   ebx
  4dbfc5:	83 e1 03             	and    ecx,0x3
  4dbfc8:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dbfca:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dbfce:	e8 bd 81 f2 ff       	call   0x404190
  4dbfd3:	8b 74 24 30          	mov    esi,DWORD PTR [esp+0x30]
  4dbfd7:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4dbfdb:	c6 44 24 28 02       	mov    BYTE PTR [esp+0x28],0x2
  4dbfe0:	51                   	push   ecx
  4dbfe1:	68 b6 00 00 00       	push   0xb6
  4dbfe6:	68 38 d6 68 00       	push   0x68d638
  4dbfeb:	68 2c d6 68 00       	push   0x68d62c
  4dbff0:	e8 fb 47 0c 00       	call   0x5a07f0
  4dbff5:	ff d0                	call   eax
  4dbff7:	83 c4 10             	add    esp,0x10
  4dbffa:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4dbffe:	c6 44 24 28 00       	mov    BYTE PTR [esp+0x28],0x0
  4dc003:	6a 01                	push   0x1
  4dc005:	e8 96 80 f2 ff       	call   0x4040a0
  4dc00a:	5b                   	pop    ebx
  4dc00b:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4dc011:	8d 85 98 01 00 00    	lea    eax,[ebp+0x198]
  4dc017:	50                   	push   eax
  4dc018:	8b 11                	mov    edx,DWORD PTR [ecx]
  4dc01a:	ff 52 04             	call   DWORD PTR [edx+0x4]
  4dc01d:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4dc023:	85 c0                	test   eax,eax
  4dc025:	75 64                	jne    0x4dc08b
  4dc027:	8a 4c 24 2c          	mov    cl,BYTE PTR [esp+0x2c]
  4dc02b:	6a 00                	push   0x0
  4dc02d:	88 4c 24 10          	mov    BYTE PTR [esp+0x10],cl
  4dc031:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4dc035:	e8 66 80 f2 ff       	call   0x4040a0
  4dc03a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dc03f:	83 c9 ff             	or     ecx,0xffffffff
  4dc042:	33 c0                	xor    eax,eax
  4dc044:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc046:	f7 d1                	not    ecx
  4dc048:	49                   	dec    ecx
  4dc049:	51                   	push   ecx
  4dc04a:	68 70 3f 6b 00       	push   0x6b3f70
  4dc04f:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dc053:	e8 98 80 f2 ff       	call   0x4040f0
  4dc058:	8d 54 24 0c          	lea    edx,[esp+0xc]
  4dc05c:	c6 44 24 24 03       	mov    BYTE PTR [esp+0x24],0x3
  4dc061:	52                   	push   edx
  4dc062:	68 b6 00 00 00       	push   0xb6
  4dc067:	68 38 d6 68 00       	push   0x68d638
  4dc06c:	68 2c d6 68 00       	push   0x68d62c
  4dc071:	e8 7a 47 0c 00       	call   0x5a07f0
  4dc076:	ff d0                	call   eax
  4dc078:	83 c4 10             	add    esp,0x10
  4dc07b:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  4dc07f:	c6 44 24 24 00       	mov    BYTE PTR [esp+0x24],0x0
  4dc084:	6a 01                	push   0x1
  4dc086:	e8 15 80 f2 ff       	call   0x4040a0
  4dc08b:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4dc091:	e8 1a a9 07 00       	call   0x5569b0
  4dc096:	85 f6                	test   esi,esi
  4dc098:	c7 44 24 24 ff ff ff 	mov    DWORD PTR [esp+0x24],0xffffffff
  4dc09f:	ff 
  4dc0a0:	74 12                	je     0x4dc0b4
  4dc0a2:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  4dc0a5:	48                   	dec    eax
  4dc0a6:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  4dc0a9:	75 09                	jne    0x4dc0b4
  4dc0ab:	6a 00                	push   0x0
  4dc0ad:	8b ce                	mov    ecx,esi
  4dc0af:	e8 0c ff 0c 00       	call   0x5abfc0
  4dc0b4:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  4dc0b8:	5f                   	pop    edi
  4dc0b9:	5e                   	pop    esi
  4dc0ba:	5d                   	pop    ebp
  4dc0bb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dc0c2:	83 c4 1c             	add    esp,0x1c
  4dc0c5:	c2 04 00             	ret    0x4
  4dc0c8:	90                   	nop
  4dc0c9:	90                   	nop
  4dc0ca:	90                   	nop
  4dc0cb:	90                   	nop
  4dc0cc:	90                   	nop
  4dc0cd:	90                   	nop
  4dc0ce:	90                   	nop
  4dc0cf:	90                   	nop
  4dc0d0:	8d 81 d0 01 00 00    	lea    eax,[ecx+0x1d0]
  4dc0d6:	c3                   	ret
  4dc0d7:	90                   	nop
  4dc0d8:	90                   	nop
  4dc0d9:	90                   	nop
  4dc0da:	90                   	nop
  4dc0db:	90                   	nop
  4dc0dc:	90                   	nop
  4dc0dd:	90                   	nop
  4dc0de:	90                   	nop
  4dc0df:	90                   	nop
