; Original complete assembly excerpt
; source line280211
  4cce34:	8b 95 84 01 00 00    	mov    edx,DWORD PTR [ebp+0x184]
; source line280212
  4cce3a:	39 72 48             	cmp    DWORD PTR [edx+0x48],esi
; source line280213
  4cce3d:	74 0c                	je     0x4cce4b
; source line280214
  4cce3f:	68 d8 96 6b 00       	push   0x6b96d8
; source line280215
  4cce44:	8b cd                	mov    ecx,ebp
; source line280216
  4cce46:	e8 b5 85 03 00       	call   0x505400
; source line280217
  4cce4b:	8b cd                	mov    ecx,ebp
; source line280218
  4cce4d:	e8 8e 11 00 00       	call   0x4cdfe0
; source line280219
  4cce52:	8b cd                	mov    ecx,ebp
; source line280220
  4cce54:	e8 e7 f2 ff ff       	call   0x4cc140
; source line280221
  4cce59:	c7 85 6c 01 00 00 08 	mov    DWORD PTR [ebp+0x16c],0x8
; source line280222
  4cce60:	00 00 00 
; source line280223
  4cce63:	e9 5a 01 00 00       	jmp    0x4ccfc2
; source line280224
  4cce68:	8b cd                	mov    ecx,ebp
; source line280225
  4cce6a:	e8 a1 38 00 00       	call   0x4d0710
; source line280226
  4cce6f:	db 84 24 a4 00 00 00 	fild   DWORD PTR [esp+0xa4]
; source line280227
  4cce76:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
; source line280228
  4cce7c:	de e9                	fsubp  st(1),st
; source line280229
  4cce7e:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
; source line280230
  4cce82:	d8 9d 40 01 00 00    	fcomp  DWORD PTR [ebp+0x140]
; source line280231
  4cce88:	df e0                	fnstsw ax
; source line280232
  4cce8a:	f6 c4 01             	test   ah,0x1
; source line280233
  4cce8d:	74 33                	je     0x4ccec2
; source line280234
  4cce8f:	8b 85 40 01 00 00    	mov    eax,DWORD PTR [ebp+0x140]
; source line280235
  4cce95:	8b 8c 24 a4 00 00 00 	mov    ecx,DWORD PTR [esp+0xa4]
; source line280236
  4cce9c:	8b d0                	mov    edx,eax
; source line280237
  4cce9e:	51                   	push   ecx
; source line280238
  4cce9f:	52                   	push   edx
; source line280239
  4ccea0:	8b cd                	mov    ecx,ebp
; source line280240
  4ccea2:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
; source line280241
  4ccea6:	e8 e5 3b 00 00       	call   0x4d0a90
; source line280242
  4cceab:	84 c0                	test   al,al
; source line280243
  4ccead:	0f 84 0f 01 00 00    	je     0x4ccfc2
; source line280244
  4cceb3:	c7 85 6c 01 00 00 09 	mov    DWORD PTR [ebp+0x16c],0x9
; source line280245
  4cceba:	00 00 00 
; source line280246
  4ccebd:	e9 00 01 00 00       	jmp    0x4ccfc2
; source line280247
  4ccec2:	8b 84 24 a4 00 00 00 	mov    eax,DWORD PTR [esp+0xa4]
; source line280248
  4ccec9:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
; source line280249
  4ccecd:	50                   	push   eax
; source line280250
  4ccece:	51                   	push   ecx
; source line280251
  4ccecf:	8b cd                	mov    ecx,ebp
; source line280252
  4cced1:	e8 ba 3b 00 00       	call   0x4d0a90
; source line280253
  4cced6:	e9 e7 00 00 00       	jmp    0x4ccfc2
; source line280254
  4ccedb:	8b 95 84 01 00 00    	mov    edx,DWORD PTR [ebp+0x184]
; source line280255
  4ccee1:	39 72 4c             	cmp    DWORD PTR [edx+0x4c],esi
; source line280256
  4ccee4:	74 0c                	je     0x4ccef2
; source line280257
  4ccee6:	68 f8 96 6b 00       	push   0x6b96f8
; source line280258
  4cceeb:	8b cd                	mov    ecx,ebp
; source line280259
  4cceed:	e8 0e 85 03 00       	call   0x505400
; source line280260
  4ccef2:	8b 8d 94 01 00 00    	mov    ecx,DWORD PTR [ebp+0x194]
; source line280261
  4ccef8:	3b ce                	cmp    ecx,esi
; source line280262
  4ccefa:	74 05                	je     0x4ccf01
; source line280263
  4ccefc:	8b 01                	mov    eax,DWORD PTR [ecx]
; source line280264
  4ccefe:	ff 50 30             	call   DWORD PTR [eax+0x30]
; source line280265
  4ccf01:	56                   	push   esi
; source line280266
  4ccf02:	8b cd                	mov    ecx,ebp
; source line280267
  4ccf04:	e8 e7 03 00 00       	call   0x4cd2f0
; source line280268
  4ccf09:	c7 85 6c 01 00 00 01 	mov    DWORD PTR [ebp+0x16c],0x1
; source line280269
  4ccf10:	00 00 00 
; source line280270
  4ccf13:	e9 aa 00 00 00       	jmp    0x4ccfc2
