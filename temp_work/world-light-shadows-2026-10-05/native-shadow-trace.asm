  5cbd00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5cbd04:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
  5cbd07:	05 c8 00 00 00       	add    eax,0xc8
  5cbd0c:	a3 90 c5 6c 00       	mov    ds:0x6cc590,eax
  5cbd11:	8b 48 64             	mov    ecx,DWORD PTR [eax+0x64]
  5cbd14:	89 0d 44 c5 6c 00    	mov    DWORD PTR ds:0x6cc544,ecx
  5cbd1a:	8b 50 4c             	mov    edx,DWORD PTR [eax+0x4c]
  5cbd1d:	89 15 2c c5 6c 00    	mov    DWORD PTR ds:0x6cc52c,edx
  5cbd23:	8b 40 54             	mov    eax,DWORD PTR [eax+0x54]
  5cbd26:	a3 04 c5 6c 00       	mov    ds:0x6cc504,eax
  5cbd2b:	c3                   	ret
  5cbd2c:	90                   	nop
  5cbd2d:	90                   	nop
  5cbd2e:	90                   	nop
  5cbd2f:	90                   	nop
  5cbd30:	83 ec 10             	sub    esp,0x10
  5cbd33:	c7 05 8c c5 6c 00 43 	mov    DWORD PTR ds:0x6cc58c,0x43
  5cbd3a:	00 00 00 
  5cbd3d:	53                   	push   ebx
  5cbd3e:	55                   	push   ebp
  5cbd3f:	56                   	push   esi
  5cbd40:	57                   	push   edi
  5cbd41:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  5cbd45:	85 ff                	test   edi,edi
  5cbd47:	7d 24                	jge    0x5cbd6d
  5cbd49:	8b 0d 04 c5 6c 00    	mov    ecx,DWORD PTR ds:0x6cc504
  5cbd4f:	8d 44 7f 03          	lea    eax,[edi+edi*2+0x3]
  5cbd53:	5f                   	pop    edi
  5cbd54:	5e                   	pop    esi
  5cbd55:	8d 04 80             	lea    eax,[eax+eax*4]
  5cbd58:	5d                   	pop    ebp
  5cbd59:	c1 e0 02             	shl    eax,0x2
  5cbd5c:	2b c8                	sub    ecx,eax
  5cbd5e:	5b                   	pop    ebx
  5cbd5f:	8b 01                	mov    eax,DWORD PTR [ecx]
  5cbd61:	24 43                	and    al,0x43
  5cbd63:	f6 d8                	neg    al
  5cbd65:	1b c0                	sbb    eax,eax
  5cbd67:	f7 d8                	neg    eax
  5cbd69:	83 c4 10             	add    esp,0x10
  5cbd6c:	c3                   	ret
  5cbd6d:	a1 2c c5 6c 00       	mov    eax,ds:0x6cc52c
  5cbd72:	8d 14 bf             	lea    edx,[edi+edi*4]
  5cbd75:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  5cbd79:	8d 1c 57             	lea    ebx,[edi+edx*2]
  5cbd7c:	8b 15 44 c5 6c 00    	mov    edx,DWORD PTR ds:0x6cc544
  5cbd82:	c1 e3 02             	shl    ebx,0x2
  5cbd85:	8b 44 03 10          	mov    eax,DWORD PTR [ebx+eax*1+0x10]
  5cbd89:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5cbd8c:	8d 0c 8a             	lea    ecx,[edx+ecx*4]
  5cbd8f:	8b d6                	mov    edx,esi
  5cbd91:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5cbd95:	e8 56 5a 00 00       	call   0x5d17f0
  5cbd9a:	8b 6c 24 28          	mov    ebp,DWORD PTR [esp+0x28]
  5cbd9e:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5cbda2:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  5cbda6:	8b d5                	mov    edx,ebp
  5cbda8:	e8 43 5a 00 00       	call   0x5d17f0
  5cbdad:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  5cbdb1:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  5cbdb5:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5cbdbb:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  5cbdbf:	df e0                	fnstsw ax
  5cbdc1:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5cbdc7:	f6 c4 01             	test   ah,0x1
  5cbdca:	df e0                	fnstsw ax
  5cbdcc:	75 20                	jne    0x5cbdee
  5cbdce:	f6 c4 01             	test   ah,0x1
  5cbdd1:	75 55                	jne    0x5cbe28
  5cbdd3:	a1 2c c5 6c 00       	mov    eax,ds:0x6cc52c
  5cbdd8:	8b 0c 03             	mov    ecx,DWORD PTR [ebx+eax*1]
  5cbddb:	51                   	push   ecx
  5cbddc:	55                   	push   ebp
  5cbddd:	56                   	push   esi
  5cbdde:	e8 2d ea ff ff       	call   0x5ca810
  5cbde3:	83 c4 0c             	add    esp,0xc
  5cbde6:	5f                   	pop    edi
  5cbde7:	5e                   	pop    esi
  5cbde8:	5d                   	pop    ebp
  5cbde9:	5b                   	pop    ebx
  5cbdea:	83 c4 10             	add    esp,0x10
  5cbded:	c3                   	ret
  5cbdee:	f6 c4 01             	test   ah,0x1
  5cbdf1:	74 1d                	je     0x5cbe10
  5cbdf3:	8b 15 2c c5 6c 00    	mov    edx,DWORD PTR ds:0x6cc52c
  5cbdf9:	8b 44 13 04          	mov    eax,DWORD PTR [ebx+edx*1+0x4]
  5cbdfd:	50                   	push   eax
  5cbdfe:	55                   	push   ebp
  5cbdff:	56                   	push   esi
  5cbe00:	e8 0b ea ff ff       	call   0x5ca810
  5cbe05:	83 c4 0c             	add    esp,0xc
  5cbe08:	5f                   	pop    edi
  5cbe09:	5e                   	pop    esi
  5cbe0a:	5d                   	pop    ebp
  5cbe0b:	5b                   	pop    ebx
  5cbe0c:	83 c4 10             	add    esp,0x10
  5cbe0f:	c3                   	ret
  5cbe10:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  5cbe14:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5cbe1a:	df e0                	fnstsw ax
  5cbe1c:	f6 c4 01             	test   ah,0x1
  5cbe1f:	74 07                	je     0x5cbe28
  5cbe21:	bb 01 00 00 00       	mov    ebx,0x1
  5cbe26:	eb 02                	jmp    0x5cbe2a
  5cbe28:	33 db                	xor    ebx,ebx
  5cbe2a:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  5cbe2e:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  5cbe32:	a1 2c c5 6c 00       	mov    eax,ds:0x6cc52c
  5cbe37:	8d 0c bf             	lea    ecx,[edi+edi*4]
  5cbe3a:	d8 7c 24 2c          	fdivr  DWORD PTR [esp+0x2c]
  5cbe3e:	8d 3c 4f             	lea    edi,[edi+ecx*2]
  5cbe41:	8d 14 1f             	lea    edx,[edi+ebx*1]
  5cbe44:	d9 45 00             	fld    DWORD PTR [ebp+0x0]
  5cbe47:	d8 26                	fsub   DWORD PTR [esi]
  5cbe49:	d8 c9                	fmul   st,st(1)
  5cbe4b:	d8 06                	fadd   DWORD PTR [esi]
  5cbe4d:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  5cbe51:	d9 45 04             	fld    DWORD PTR [ebp+0x4]
  5cbe54:	d8 66 04             	fsub   DWORD PTR [esi+0x4]
  5cbe57:	d8 c9                	fmul   st,st(1)
  5cbe59:	d8 46 04             	fadd   DWORD PTR [esi+0x4]
  5cbe5c:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5cbe60:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
  5cbe63:	d8 66 08             	fsub   DWORD PTR [esi+0x8]
  5cbe66:	d8 c9                	fmul   st,st(1)
  5cbe68:	d8 46 08             	fadd   DWORD PTR [esi+0x8]
  5cbe6b:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  5cbe6f:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
  5cbe72:	8d 54 24 14          	lea    edx,[esp+0x14]
  5cbe76:	51                   	push   ecx
  5cbe77:	52                   	push   edx
  5cbe78:	56                   	push   esi
  5cbe79:	dd d8                	fstp   st(0)
  5cbe7b:	e8 90 e9 ff ff       	call   0x5ca810
  5cbe80:	83 c4 0c             	add    esp,0xc
  5cbe83:	85 c0                	test   eax,eax
  5cbe85:	74 0d                	je     0x5cbe94
  5cbe87:	5f                   	pop    edi
  5cbe88:	5e                   	pop    esi
  5cbe89:	5d                   	pop    ebp
  5cbe8a:	b8 01 00 00 00       	mov    eax,0x1
  5cbe8f:	5b                   	pop    ebx
  5cbe90:	83 c4 10             	add    esp,0x10
  5cbe93:	c3                   	ret
  5cbe94:	8b 0d 2c c5 6c 00    	mov    ecx,DWORD PTR ds:0x6cc52c
  5cbe9a:	33 c0                	xor    eax,eax
  5cbe9c:	85 db                	test   ebx,ebx
  5cbe9e:	0f 94 c0             	sete   al
  5cbea1:	03 c7                	add    eax,edi
  5cbea3:	8b 14 81             	mov    edx,DWORD PTR [ecx+eax*4]
  5cbea6:	8d 44 24 14          	lea    eax,[esp+0x14]
  5cbeaa:	52                   	push   edx
  5cbeab:	55                   	push   ebp
  5cbeac:	50                   	push   eax
  5cbead:	e8 5e e9 ff ff       	call   0x5ca810
  5cbeb2:	83 c4 0c             	add    esp,0xc
  5cbeb5:	f7 d8                	neg    eax
  5cbeb7:	5f                   	pop    edi
  5cbeb8:	5e                   	pop    esi
  5cbeb9:	1b c0                	sbb    eax,eax
  5cbebb:	5d                   	pop    ebp
  5cbebc:	f7 d8                	neg    eax
  5cbebe:	5b                   	pop    ebx
  5cbebf:	83 c4 10             	add    esp,0x10
  5cbec2:	c3                   	ret
