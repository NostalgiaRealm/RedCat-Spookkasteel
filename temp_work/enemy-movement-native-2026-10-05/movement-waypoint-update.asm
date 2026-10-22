  59be60:	8a 41 34             	mov    al,BYTE PTR [ecx+0x34]
  59be63:	c3                   	ret
  59be64:	90                   	nop
  59be65:	90                   	nop
  59be66:	90                   	nop
  59be67:	90                   	nop
  59be68:	90                   	nop
  59be69:	90                   	nop
  59be6a:	90                   	nop
  59be6b:	90                   	nop
  59be6c:	90                   	nop
  59be6d:	90                   	nop
  59be6e:	90                   	nop
  59be6f:	90                   	nop
  59be70:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59be76:	6a ff                	push   0xffffffff
  59be78:	68 48 47 64 00       	push   0x644748
  59be7d:	50                   	push   eax
  59be7e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59be85:	83 ec 30             	sub    esp,0x30
  59be88:	53                   	push   ebx
  59be89:	55                   	push   ebp
  59be8a:	8b e9                	mov    ebp,ecx
  59be8c:	56                   	push   esi
  59be8d:	57                   	push   edi
  59be8e:	8d 4d 1c             	lea    ecx,[ebp+0x1c]
  59be91:	e8 5a f3 ff ff       	call   0x59b1f0
  59be96:	84 c0                	test   al,al
  59be98:	0f 85 85 00 00 00    	jne    0x59bf23
  59be9e:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  59bea2:	bf 78 72 6a 00       	mov    edi,0x6a7278
  59bea7:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  59beab:	83 c9 ff             	or     ecx,0xffffffff
  59beae:	33 c0                	xor    eax,eax
  59beb0:	33 f6                	xor    esi,esi
  59beb2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59beb4:	f7 d1                	not    ecx
  59beb6:	49                   	dec    ecx
  59beb7:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59bebb:	51                   	push   ecx
  59bebc:	68 78 72 6a 00       	push   0x6a7278
  59bec1:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59bec5:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  59bec9:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  59becd:	e8 1e 82 e6 ff       	call   0x4040f0
  59bed2:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59bed6:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  59beda:	51                   	push   ecx
  59bedb:	68 f4 00 00 00       	push   0xf4
  59bee0:	68 c8 70 6a 00       	push   0x6a70c8
  59bee5:	68 18 6c 6a 00       	push   0x6a6c18
  59beea:	e8 01 49 00 00       	call   0x5a07f0
  59beef:	ff d0                	call   eax
  59bef1:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  59bef5:	83 c4 10             	add    esp,0x10
  59bef8:	3b c6                	cmp    eax,esi
  59befa:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  59bf01:	ff 
  59bf02:	74 21                	je     0x59bf25
  59bf04:	8d 48 ff             	lea    ecx,[eax-0x1]
  59bf07:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59bf0a:	84 c0                	test   al,al
  59bf0c:	74 0a                	je     0x59bf18
  59bf0e:	3c ff                	cmp    al,0xff
  59bf10:	74 06                	je     0x59bf18
  59bf12:	fe c8                	dec    al
  59bf14:	88 01                	mov    BYTE PTR [ecx],al
  59bf16:	eb 0d                	jmp    0x59bf25
  59bf18:	51                   	push   ecx
  59bf19:	e8 d2 26 06 00       	call   0x5fe5f0
  59bf1e:	83 c4 04             	add    esp,0x4
  59bf21:	eb 02                	jmp    0x59bf25
  59bf23:	33 f6                	xor    esi,esi
  59bf25:	8a 45 2c             	mov    al,BYTE PTR [ebp+0x2c]
  59bf28:	84 c0                	test   al,al
  59bf2a:	0f 84 85 00 00 00    	je     0x59bfb5
  59bf30:	bf 58 72 6a 00       	mov    edi,0x6a7258
  59bf35:	83 c9 ff             	or     ecx,0xffffffff
  59bf38:	33 c0                	xor    eax,eax
  59bf3a:	8a 54 24 50          	mov    dl,BYTE PTR [esp+0x50]
  59bf3e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59bf40:	f7 d1                	not    ecx
  59bf42:	49                   	dec    ecx
  59bf43:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  59bf47:	51                   	push   ecx
  59bf48:	68 58 72 6a 00       	push   0x6a7258
  59bf4d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59bf51:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  59bf55:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  59bf59:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  59bf5d:	e8 8e 81 e6 ff       	call   0x4040f0
  59bf62:	8d 44 24 20          	lea    eax,[esp+0x20]
  59bf66:	c7 44 24 48 01 00 00 	mov    DWORD PTR [esp+0x48],0x1
  59bf6d:	00 
  59bf6e:	50                   	push   eax
  59bf6f:	68 f5 00 00 00       	push   0xf5
  59bf74:	68 c8 70 6a 00       	push   0x6a70c8
  59bf79:	68 44 72 6a 00       	push   0x6a7244
  59bf7e:	e8 6d 48 00 00       	call   0x5a07f0
  59bf83:	ff d0                	call   eax
  59bf85:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  59bf89:	83 c4 10             	add    esp,0x10
  59bf8c:	3b c6                	cmp    eax,esi
  59bf8e:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  59bf95:	ff 
  59bf96:	74 1d                	je     0x59bfb5
  59bf98:	8d 48 ff             	lea    ecx,[eax-0x1]
  59bf9b:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59bf9e:	84 c0                	test   al,al
  59bfa0:	74 0a                	je     0x59bfac
  59bfa2:	3c ff                	cmp    al,0xff
  59bfa4:	74 06                	je     0x59bfac
  59bfa6:	fe c8                	dec    al
  59bfa8:	88 01                	mov    BYTE PTR [ecx],al
  59bfaa:	eb 09                	jmp    0x59bfb5
  59bfac:	51                   	push   ecx
  59bfad:	e8 3e 26 06 00       	call   0x5fe5f0
  59bfb2:	83 c4 04             	add    esp,0x4
  59bfb5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59bfb9:	8d 75 3c             	lea    esi,[ebp+0x3c]
  59bfbc:	8d 5d 20             	lea    ebx,[ebp+0x20]
  59bfbf:	51                   	push   ecx
  59bfc0:	8b d6                	mov    edx,esi
  59bfc2:	8b cb                	mov    ecx,ebx
  59bfc4:	e8 17 70 01 00       	call   0x5b2fe0
  59bfc9:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59bfcd:	e8 fe 6f 01 00       	call   0x5b2fd0
  59bfd2:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  59bfd6:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  59bfda:	83 f8 ff             	cmp    eax,0xffffffff
  59bfdd:	75 6a                	jne    0x59c049
  59bfdf:	8a 54 24 50          	mov    dl,BYTE PTR [esp+0x50]
  59bfe3:	6a 00                	push   0x0
  59bfe5:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  59bfe9:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  59bfed:	e8 ae 80 e6 ff       	call   0x4040a0
  59bff2:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59bff7:	83 c9 ff             	or     ecx,0xffffffff
  59bffa:	33 c0                	xor    eax,eax
  59bffc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59bffe:	f7 d1                	not    ecx
  59c000:	49                   	dec    ecx
  59c001:	51                   	push   ecx
  59c002:	68 70 3f 6b 00       	push   0x6b3f70
  59c007:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  59c00b:	e8 e0 80 e6 ff       	call   0x4040f0
  59c010:	8d 44 24 30          	lea    eax,[esp+0x30]
  59c014:	c7 44 24 48 02 00 00 	mov    DWORD PTR [esp+0x48],0x2
  59c01b:	00 
  59c01c:	50                   	push   eax
  59c01d:	68 8a 00 00 00       	push   0x8a
  59c022:	68 2c e2 68 00       	push   0x68e22c
  59c027:	68 14 e2 68 00       	push   0x68e214
  59c02c:	e8 bf 47 00 00       	call   0x5a07f0
  59c031:	ff d0                	call   eax
  59c033:	83 c4 10             	add    esp,0x10
  59c036:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59c03a:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  59c041:	ff 
  59c042:	6a 01                	push   0x1
  59c044:	e8 57 80 e6 ff       	call   0x4040a0
  59c049:	db 44 24 50          	fild   DWORD PTR [esp+0x50]
  59c04d:	8b cd                	mov    ecx,ebp
  59c04f:	d8 4d 38             	fmul   DWORD PTR [ebp+0x38]
  59c052:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  59c058:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  59c05c:	e8 ef f3 ff ff       	call   0x59b450
  59c061:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  59c065:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
  59c069:	df e0                	fnstsw ax
  59c06b:	f6 c4 01             	test   ah,0x1
  59c06e:	75 21                	jne    0x59c091
  59c070:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  59c072:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  59c075:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  59c078:	89 0e                	mov    DWORD PTR [esi],ecx
  59c07a:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
  59c07d:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  59c080:	8d 45 1c             	lea    eax,[ebp+0x1c]
  59c083:	8b cd                	mov    ecx,ebp
  59c085:	50                   	push   eax
  59c086:	c6 45 2c 01          	mov    BYTE PTR [ebp+0x2c],0x1
  59c08a:	e8 61 f4 ff ff       	call   0x59b4f0
  59c08f:	eb 1c                	jmp    0x59c0ad
  59c091:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  59c095:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
  59c099:	56                   	push   esi
  59c09a:	51                   	push   ecx
  59c09b:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  59c09f:	8b ce                	mov    ecx,esi
  59c0a1:	d9 1c 24             	fstp   DWORD PTR [esp]
  59c0a4:	e8 77 6f 01 00       	call   0x5b3020
  59c0a9:	c6 45 2c 00          	mov    BYTE PTR [ebp+0x2c],0x0
  59c0ad:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  59c0b1:	5f                   	pop    edi
  59c0b2:	5e                   	pop    esi
  59c0b3:	5d                   	pop    ebp
  59c0b4:	5b                   	pop    ebx
  59c0b5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59c0bc:	83 c4 3c             	add    esp,0x3c
  59c0bf:	c2 04 00             	ret    0x4
