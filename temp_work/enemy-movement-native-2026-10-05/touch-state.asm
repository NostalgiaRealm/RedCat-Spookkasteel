  40ab80:	56                   	push   esi
  40ab81:	57                   	push   edi
  40ab82:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  40ab86:	8b f1                	mov    esi,ecx
  40ab88:	57                   	push   edi
  40ab89:	e8 c2 a9 ff ff       	call   0x405550
  40ab8e:	89 7e 30             	mov    DWORD PTR [esi+0x30],edi
  40ab91:	c7 06 38 aa 64 00    	mov    DWORD PTR [esi],0x64aa38
  40ab97:	8b c6                	mov    eax,esi
  40ab99:	5f                   	pop    edi
  40ab9a:	5e                   	pop    esi
  40ab9b:	c2 04 00             	ret    0x4
  40ab9e:	90                   	nop
  40ab9f:	90                   	nop
  40aba0:	6a ff                	push   0xffffffff
  40aba2:	68 fb 08 62 00       	push   0x6208fb
  40aba7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40abad:	50                   	push   eax
  40abae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40abb5:	51                   	push   ecx
  40abb6:	56                   	push   esi
  40abb7:	8b f1                	mov    esi,ecx
  40abb9:	6a 2c                	push   0x2c
  40abbb:	e8 f5 f4 1f 00       	call   0x60a0b5
  40abc0:	83 c4 04             	add    esp,0x4
  40abc3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  40abc7:	85 c0                	test   eax,eax
  40abc9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  40abd0:	00 
  40abd1:	74 0d                	je     0x40abe0
  40abd3:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
  40abd6:	51                   	push   ecx
  40abd7:	8b c8                	mov    ecx,eax
  40abd9:	e8 32 00 00 00       	call   0x40ac10
  40abde:	eb 02                	jmp    0x40abe2
  40abe0:	33 c0                	xor    eax,eax
  40abe2:	50                   	push   eax
  40abe3:	6a 02                	push   0x2
  40abe5:	8b ce                	mov    ecx,esi
  40abe7:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  40abee:	ff 
  40abef:	e8 1c 7e ff ff       	call   0x402a10
  40abf4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  40abf8:	5e                   	pop    esi
  40abf9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40ac00:	83 c4 10             	add    esp,0x10
  40ac03:	c3                   	ret
  40ac04:	90                   	nop
  40ac05:	90                   	nop
  40ac06:	90                   	nop
  40ac07:	90                   	nop
  40ac08:	90                   	nop
  40ac09:	90                   	nop
  40ac0a:	90                   	nop
  40ac0b:	90                   	nop
  40ac0c:	90                   	nop
  40ac0d:	90                   	nop
  40ac0e:	90                   	nop
  40ac0f:	90                   	nop
  40ac10:	56                   	push   esi
  40ac11:	57                   	push   edi
  40ac12:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  40ac16:	8b f1                	mov    esi,ecx
  40ac18:	57                   	push   edi
  40ac19:	e8 f2 89 ff ff       	call   0x403610
  40ac1e:	89 7e 28             	mov    DWORD PTR [esi+0x28],edi
  40ac21:	c7 06 6c aa 64 00    	mov    DWORD PTR [esi],0x64aa6c
  40ac27:	8b c6                	mov    eax,esi
  40ac29:	5f                   	pop    edi
  40ac2a:	5e                   	pop    esi
  40ac2b:	c2 04 00             	ret    0x4
  40ac2e:	90                   	nop
  40ac2f:	90                   	nop
  40ac30:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40ac34:	56                   	push   esi
  40ac35:	8b f1                	mov    esi,ecx
  40ac37:	50                   	push   eax
  40ac38:	e8 53 8a ff ff       	call   0x403690
  40ac3d:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40ac40:	68 ff ff 7f 7f       	push   0x7f7fffff
  40ac45:	6a 01                	push   0x1
  40ac47:	6a 02                	push   0x2
  40ac49:	8b 11                	mov    edx,DWORD PTR [ecx]
  40ac4b:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  40ac51:	8b ce                	mov    ecx,esi
  40ac53:	e8 18 02 00 00       	call   0x40ae70
  40ac58:	5e                   	pop    esi
  40ac59:	c2 04 00             	ret    0x4
  40ac5c:	90                   	nop
  40ac5d:	90                   	nop
  40ac5e:	90                   	nop
  40ac5f:	90                   	nop
  40ac60:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40ac66:	6a ff                	push   0xffffffff
  40ac68:	68 23 09 62 00       	push   0x620923
  40ac6d:	50                   	push   eax
  40ac6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40ac75:	83 ec 10             	sub    esp,0x10
  40ac78:	53                   	push   ebx
  40ac79:	56                   	push   esi
  40ac7a:	57                   	push   edi
  40ac7b:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  40ac7f:	8b f1                	mov    esi,ecx
  40ac81:	57                   	push   edi
  40ac82:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40ac85:	e8 a6 82 01 00       	call   0x422f30
  40ac8a:	84 c0                	test   al,al
  40ac8c:	8b ce                	mov    ecx,esi
  40ac8e:	75 19                	jne    0x40aca9
  40ac90:	e8 6b 80 ff ff       	call   0x402d00
  40ac95:	5f                   	pop    edi
  40ac96:	5e                   	pop    esi
  40ac97:	5b                   	pop    ebx
  40ac98:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40ac9c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40aca3:	83 c4 1c             	add    esp,0x1c
  40aca6:	c2 08 00             	ret    0x8
  40aca9:	e8 42 80 ff ff       	call   0x402cf0
  40acae:	33 db                	xor    ebx,ebx
  40acb0:	2b c3                	sub    eax,ebx
  40acb2:	0f 84 19 01 00 00    	je     0x40add1
  40acb8:	48                   	dec    eax
  40acb9:	0f 84 cd 00 00 00    	je     0x40ad8c
  40acbf:	8a 44 24 30          	mov    al,BYTE PTR [esp+0x30]
  40acc3:	bf 08 d3 68 00       	mov    edi,0x68d308
  40acc8:	88 44 24 0c          	mov    BYTE PTR [esp+0xc],al
  40accc:	83 c9 ff             	or     ecx,0xffffffff
  40accf:	33 c0                	xor    eax,eax
  40acd1:	55                   	push   ebp
  40acd2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40acd4:	f7 d1                	not    ecx
  40acd6:	49                   	dec    ecx
  40acd7:	6a 01                	push   0x1
  40acd9:	8b e9                	mov    ebp,ecx
  40acdb:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  40acdf:	55                   	push   ebp
  40ace0:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  40ace4:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  40ace8:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  40acec:	e8 4f 6c ff ff       	call   0x401940
  40acf1:	84 c0                	test   al,al
  40acf3:	74 24                	je     0x40ad19
  40acf5:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  40acf9:	8b cd                	mov    ecx,ebp
  40acfb:	8b d1                	mov    edx,ecx
  40acfd:	be 08 d3 68 00       	mov    esi,0x68d308
  40ad02:	c1 e9 02             	shr    ecx,0x2
  40ad05:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40ad07:	8b ca                	mov    ecx,edx
  40ad09:	83 e1 03             	and    ecx,0x3
  40ad0c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  40ad0e:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  40ad12:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  40ad16:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  40ad19:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  40ad1d:	c7 44 24 28 01 00 00 	mov    DWORD PTR [esp+0x28],0x1
  40ad24:	00 
  40ad25:	51                   	push   ecx
  40ad26:	6a 5d                	push   0x5d
  40ad28:	68 54 e3 68 00       	push   0x68e354
  40ad2d:	68 d0 d2 68 00       	push   0x68d2d0
  40ad32:	e8 b9 5a 19 00       	call   0x5a07f0
  40ad37:	ff d0                	call   eax
  40ad39:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  40ad3d:	83 c4 10             	add    esp,0x10
  40ad40:	3b c3                	cmp    eax,ebx
  40ad42:	5d                   	pop    ebp
  40ad43:	0f 84 05 01 00 00    	je     0x40ae4e
  40ad49:	8d 48 ff             	lea    ecx,[eax-0x1]
  40ad4c:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  40ad4f:	3a c3                	cmp    al,bl
  40ad51:	74 1c                	je     0x40ad6f
  40ad53:	3c ff                	cmp    al,0xff
  40ad55:	74 18                	je     0x40ad6f
  40ad57:	fe c8                	dec    al
  40ad59:	5f                   	pop    edi
  40ad5a:	5e                   	pop    esi
  40ad5b:	88 01                	mov    BYTE PTR [ecx],al
  40ad5d:	5b                   	pop    ebx
  40ad5e:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40ad62:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40ad69:	83 c4 1c             	add    esp,0x1c
  40ad6c:	c2 08 00             	ret    0x8
  40ad6f:	51                   	push   ecx
  40ad70:	e8 7b 38 1f 00       	call   0x5fe5f0
  40ad75:	83 c4 04             	add    esp,0x4
  40ad78:	5f                   	pop    edi
  40ad79:	5e                   	pop    esi
  40ad7a:	5b                   	pop    ebx
  40ad7b:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40ad7f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40ad86:	83 c4 1c             	add    esp,0x1c
  40ad89:	c2 08 00             	ret    0x8
  40ad8c:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  40ad90:	57                   	push   edi
  40ad91:	52                   	push   edx
  40ad92:	8b ce                	mov    ecx,esi
  40ad94:	e8 e7 7c ff ff       	call   0x402a80
  40ad99:	8b c8                	mov    ecx,eax
  40ad9b:	e8 80 7f ff ff       	call   0x402d20
  40ada0:	8b ce                	mov    ecx,esi
  40ada2:	e8 d9 7c ff ff       	call   0x402a80
  40ada7:	8b c8                	mov    ecx,eax
  40ada9:	e8 62 7f ff ff       	call   0x402d10
  40adae:	84 c0                	test   al,al
  40adb0:	0f 84 98 00 00 00    	je     0x40ae4e
  40adb6:	8b ce                	mov    ecx,esi
  40adb8:	e8 b3 00 00 00       	call   0x40ae70
  40adbd:	5f                   	pop    edi
  40adbe:	5e                   	pop    esi
  40adbf:	5b                   	pop    ebx
  40adc0:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40adc4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40adcb:	83 c4 1c             	add    esp,0x1c
  40adce:	c2 08 00             	ret    0x8
  40add1:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40add4:	e8 e7 da 01 00       	call   0x4288c0
  40add9:	8b c8                	mov    ecx,eax
  40addb:	e8 60 be 18 00       	call   0x596c40
  40ade0:	84 c0                	test   al,al
  40ade2:	74 1b                	je     0x40adff
  40ade4:	8b ce                	mov    ecx,esi
  40ade6:	e8 85 00 00 00       	call   0x40ae70
  40adeb:	5f                   	pop    edi
  40adec:	5e                   	pop    esi
  40aded:	5b                   	pop    ebx
  40adee:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40adf2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40adf9:	83 c4 1c             	add    esp,0x1c
  40adfc:	c2 08 00             	ret    0x8
  40adff:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40ae02:	e8 b9 da 01 00       	call   0x4288c0
  40ae07:	8b c8                	mov    ecx,eax
  40ae09:	e8 32 bf 18 00       	call   0x596d40
  40ae0e:	84 c0                	test   al,al
  40ae10:	74 3c                	je     0x40ae4e
  40ae12:	6a 3c                	push   0x3c
  40ae14:	e8 9c f2 1f 00       	call   0x60a0b5
  40ae19:	83 c4 04             	add    esp,0x4
  40ae1c:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  40ae20:	3b c3                	cmp    eax,ebx
  40ae22:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  40ae26:	74 12                	je     0x40ae3a
  40ae28:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  40ae2b:	68 e8 03 00 00       	push   0x3e8
  40ae30:	51                   	push   ecx
  40ae31:	8b c8                	mov    ecx,eax
  40ae33:	e8 e8 ad ff ff       	call   0x405c20
  40ae38:	eb 02                	jmp    0x40ae3c
  40ae3a:	33 c0                	xor    eax,eax
  40ae3c:	50                   	push   eax
  40ae3d:	6a 01                	push   0x1
  40ae3f:	8b ce                	mov    ecx,esi
  40ae41:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  40ae48:	ff 
  40ae49:	e8 c2 7b ff ff       	call   0x402a10
  40ae4e:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  40ae52:	5f                   	pop    edi
  40ae53:	5e                   	pop    esi
  40ae54:	5b                   	pop    ebx
  40ae55:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40ae5c:	83 c4 1c             	add    esp,0x1c
  40ae5f:	c2 08 00             	ret    0x8
  40ae62:	90                   	nop
  40ae63:	90                   	nop
  40ae64:	90                   	nop
  40ae65:	90                   	nop
  40ae66:	90                   	nop
  40ae67:	90                   	nop
  40ae68:	90                   	nop
  40ae69:	90                   	nop
  40ae6a:	90                   	nop
  40ae6b:	90                   	nop
  40ae6c:	90                   	nop
  40ae6d:	90                   	nop
  40ae6e:	90                   	nop
  40ae6f:	90                   	nop
  40ae70:	8b 01                	mov    eax,DWORD PTR [ecx]
  40ae72:	ff 60 0c             	jmp    DWORD PTR [eax+0xc]
  40ae75:	90                   	nop
  40ae76:	90                   	nop
  40ae77:	90                   	nop
  40ae78:	90                   	nop
  40ae79:	90                   	nop
  40ae7a:	90                   	nop
  40ae7b:	90                   	nop
  40ae7c:	90                   	nop
  40ae7d:	90                   	nop
  40ae7e:	90                   	nop
  40ae7f:	90                   	nop
  40ae80:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40ae86:	6a ff                	push   0xffffffff
  40ae88:	68 43 09 62 00       	push   0x620943
  40ae8d:	50                   	push   eax
  40ae8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40ae95:	83 ec 18             	sub    esp,0x18
  40ae98:	53                   	push   ebx
  40ae99:	56                   	push   esi
  40ae9a:	8b d9                	mov    ebx,ecx
  40ae9c:	e8 ff f5 1f 00       	call   0x60a4a0
  40aea1:	99                   	cdq
  40aea2:	b9 03 00 00 00       	mov    ecx,0x3
  40aea7:	33 f6                	xor    esi,esi
  40aea9:	f7 f9                	idiv   ecx
  40aeab:	2b d6                	sub    edx,esi
  40aead:	0f 84 02 01 00 00    	je     0x40afb5
  40aeb3:	4a                   	dec    edx
  40aeb4:	0f 84 e4 00 00 00    	je     0x40af9e
  40aeba:	4a                   	dec    edx
  40aebb:	0f 84 c6 00 00 00    	je     0x40af87
  40aec1:	55                   	push   ebp
  40aec2:	57                   	push   edi
  40aec3:	bf 50 d3 68 00       	mov    edi,0x68d350
  40aec8:	83 c9 ff             	or     ecx,0xffffffff
  40aecb:	33 c0                	xor    eax,eax
  40aecd:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  40aed1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40aed3:	f7 d1                	not    ecx
  40aed5:	49                   	dec    ecx
  40aed6:	6a 01                	push   0x1
  40aed8:	8b e9                	mov    ebp,ecx
  40aeda:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  40aede:	55                   	push   ebp
  40aedf:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  40aee3:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  40aee7:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  40aeeb:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  40aeef:	e8 4c 6a ff ff       	call   0x401940
  40aef4:	84 c0                	test   al,al
  40aef6:	74 27                	je     0x40af1f
  40aef8:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  40aefc:	8b cd                	mov    ecx,ebp
  40aefe:	8b c1                	mov    eax,ecx
  40af00:	be 50 d3 68 00       	mov    esi,0x68d350
  40af05:	c1 e9 02             	shr    ecx,0x2
  40af08:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40af0a:	8b c8                	mov    ecx,eax
  40af0c:	83 e1 03             	and    ecx,0x3
  40af0f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  40af11:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  40af15:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  40af19:	33 f6                	xor    esi,esi
  40af1b:	c6 04 29 00          	mov    BYTE PTR [ecx+ebp*1],0x0
  40af1f:	8d 54 24 18          	lea    edx,[esp+0x18]
  40af23:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  40af27:	52                   	push   edx
  40af28:	6a 7f                	push   0x7f
  40af2a:	68 54 e3 68 00       	push   0x68e354
  40af2f:	68 d0 d2 68 00       	push   0x68d2d0
  40af34:	e8 b7 58 19 00       	call   0x5a07f0
  40af39:	ff d0                	call   eax
  40af3b:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  40af3f:	83 c4 10             	add    esp,0x10
  40af42:	3b c6                	cmp    eax,esi
  40af44:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  40af4b:	ff 
  40af4c:	5f                   	pop    edi
  40af4d:	5d                   	pop    ebp
  40af4e:	74 29                	je     0x40af79
  40af50:	8d 48 ff             	lea    ecx,[eax-0x1]
  40af53:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  40af56:	84 c0                	test   al,al
  40af58:	74 16                	je     0x40af70
  40af5a:	3c ff                	cmp    al,0xff
  40af5c:	74 12                	je     0x40af70
  40af5e:	fe c8                	dec    al
  40af60:	88 01                	mov    BYTE PTR [ecx],al
  40af62:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  40af66:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  40af6a:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  40af6e:	eb 55                	jmp    0x40afc5
  40af70:	51                   	push   ecx
  40af71:	e8 7a 36 1f 00       	call   0x5fe5f0
  40af76:	83 c4 04             	add    esp,0x4
  40af79:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  40af7d:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  40af81:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  40af85:	eb 3e                	jmp    0x40afc5
  40af87:	8b 4b 28             	mov    ecx,DWORD PTR [ebx+0x28]
  40af8a:	68 d0 07 00 00       	push   0x7d0
  40af8f:	56                   	push   esi
  40af90:	e8 2b d9 01 00       	call   0x4288c0
  40af95:	8b c8                	mov    ecx,eax
  40af97:	e8 74 b7 18 00       	call   0x596710
  40af9c:	eb 27                	jmp    0x40afc5
  40af9e:	8b 4b 28             	mov    ecx,DWORD PTR [ebx+0x28]
  40afa1:	68 d0 07 00 00       	push   0x7d0
  40afa6:	56                   	push   esi
  40afa7:	e8 14 d9 01 00       	call   0x4288c0
  40afac:	8b c8                	mov    ecx,eax
  40afae:	e8 cd b7 18 00       	call   0x596780
  40afb3:	eb 10                	jmp    0x40afc5
  40afb5:	8b 4b 28             	mov    ecx,DWORD PTR [ebx+0x28]
  40afb8:	56                   	push   esi
  40afb9:	e8 02 d9 01 00       	call   0x4288c0
  40afbe:	8b c8                	mov    ecx,eax
  40afc0:	e8 2b b8 18 00       	call   0x5967f0
  40afc5:	8b 4b 28             	mov    ecx,DWORD PTR [ebx+0x28]
  40afc8:	e8 f3 d8 01 00       	call   0x4288c0
  40afcd:	8b c8                	mov    ecx,eax
  40afcf:	e8 6c bd 18 00       	call   0x596d40
  40afd4:	8b 4b 28             	mov    ecx,DWORD PTR [ebx+0x28]
  40afd7:	84 c0                	test   al,al
  40afd9:	74 57                	je     0x40b032
  40afdb:	8b 01                	mov    eax,DWORD PTR [ecx]
  40afdd:	68 ff ff 7f 7f       	push   0x7f7fffff
  40afe2:	6a 01                	push   0x1
  40afe4:	6a 01                	push   0x1
  40afe6:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  40afec:	6a 3c                	push   0x3c
  40afee:	e8 c2 f0 1f 00       	call   0x60a0b5
  40aff3:	83 c4 04             	add    esp,0x4
  40aff6:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  40affa:	3b c6                	cmp    eax,esi
  40affc:	c7 44 24 28 01 00 00 	mov    DWORD PTR [esp+0x28],0x1
  40b003:	00 
  40b004:	74 1d                	je     0x40b023
  40b006:	8b 4b 28             	mov    ecx,DWORD PTR [ebx+0x28]
  40b009:	68 e8 03 00 00       	push   0x3e8
  40b00e:	51                   	push   ecx
  40b00f:	8b c8                	mov    ecx,eax
  40b011:	e8 0a ac ff ff       	call   0x405c20
  40b016:	50                   	push   eax
  40b017:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  40b01e:	ff 
  40b01f:	6a 01                	push   0x1
  40b021:	eb 22                	jmp    0x40b045
  40b023:	33 c0                	xor    eax,eax
  40b025:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
  40b02c:	ff 
  40b02d:	50                   	push   eax
  40b02e:	6a 01                	push   0x1
  40b030:	eb 13                	jmp    0x40b045
  40b032:	8b 11                	mov    edx,DWORD PTR [ecx]
  40b034:	68 ff ff 7f 7f       	push   0x7f7fffff
  40b039:	6a 01                	push   0x1
  40b03b:	6a 02                	push   0x2
  40b03d:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  40b043:	56                   	push   esi
  40b044:	56                   	push   esi
  40b045:	8b cb                	mov    ecx,ebx
  40b047:	e8 c4 79 ff ff       	call   0x402a10
  40b04c:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  40b050:	5e                   	pop    esi
  40b051:	5b                   	pop    ebx
  40b052:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40b059:	83 c4 24             	add    esp,0x24
  40b05c:	c3                   	ret
  40b05d:	90                   	nop
  40b05e:	90                   	nop
  40b05f:	90                   	nop
