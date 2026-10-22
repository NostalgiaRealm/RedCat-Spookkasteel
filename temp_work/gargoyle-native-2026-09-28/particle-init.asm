  47db60:	53                   	push   ebx
  47db61:	56                   	push   esi
  47db62:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  47db66:	8b f1                	mov    esi,ecx
  47db68:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  47db6c:	8d 46 04             	lea    eax,[esi+0x4]
  47db6f:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  47db73:	89 08                	mov    DWORD PTR [eax],ecx
  47db75:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47db79:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  47db7f:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47db82:	8d 96 34 01 00 00    	lea    edx,[esi+0x134]
  47db88:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47db8b:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47db8f:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  47db93:	89 02                	mov    DWORD PTR [edx],eax
  47db95:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  47db99:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47db9c:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  47dba0:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  47dba3:	89 8e c0 00 00 00    	mov    DWORD PTR [esi+0xc0],ecx
  47dba9:	e8 72 cf 18 00       	call   0x60ab20
  47dbae:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  47dbb2:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47dbb6:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  47dbba:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47dbbe:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
  47dbc1:	89 56 3c             	mov    DWORD PTR [esi+0x3c],edx
  47dbc4:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  47dbc8:	89 4e 50             	mov    DWORD PTR [esi+0x50],ecx
  47dbcb:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  47dbcf:	8d 46 60             	lea    eax,[esi+0x60]
  47dbd2:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  47dbd6:	89 56 58             	mov    DWORD PTR [esi+0x58],edx
  47dbd9:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  47dbdd:	89 08                	mov    DWORD PTR [eax],ecx
  47dbdf:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  47dbe3:	d9 9e 40 01 00 00    	fstp   DWORD PTR [esi+0x140]
  47dbe9:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47dbec:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  47dbf0:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  47dbf4:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47dbf7:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  47dbfb:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  47dbff:	89 86 80 00 00 00    	mov    DWORD PTR [esi+0x80],eax
  47dc05:	d8 5c 24 48          	fcomp  DWORD PTR [esp+0x48]
  47dc09:	89 56 7c             	mov    DWORD PTR [esi+0x7c],edx
  47dc0c:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  47dc10:	89 8e bc 00 00 00    	mov    DWORD PTR [esi+0xbc],ecx
  47dc16:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  47dc1a:	8d 86 a0 00 00 00    	lea    eax,[esi+0xa0]
  47dc20:	88 96 98 00 00 00    	mov    BYTE PTR [esi+0x98],dl
  47dc26:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  47dc2a:	33 db                	xor    ebx,ebx
  47dc2c:	89 08                	mov    DWORD PTR [eax],ecx
  47dc2e:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  47dc32:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47dc35:	8a 54 24 64          	mov    dl,BYTE PTR [esp+0x64]
  47dc39:	88 96 b8 00 00 00    	mov    BYTE PTR [esi+0xb8],dl
  47dc3f:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47dc42:	df e0                	fnstsw ax
  47dc44:	f6 c4 40             	test   ah,0x40
  47dc47:	74 06                	je     0x47dc4f
  47dc49:	89 9e e0 00 00 00    	mov    DWORD PTR [esi+0xe0],ebx
  47dc4f:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  47dc53:	d8 0d 20 e3 64 00    	fmul   DWORD PTR ds:0x64e320
  47dc59:	e8 c2 ce 18 00       	call   0x60ab20
  47dc5e:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  47dc62:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  47dc68:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  47dc6c:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
  47dc6f:	8a 44 24 68          	mov    al,BYTE PTR [esp+0x68]
  47dc73:	89 8e e0 00 00 00    	mov    DWORD PTR [esi+0xe0],ecx
  47dc79:	88 86 c9 00 00 00    	mov    BYTE PTR [esi+0xc9],al
  47dc7f:	e8 9c ce 18 00       	call   0x60ab20
  47dc84:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
  47dc88:	8b 54 24 6c          	mov    edx,DWORD PTR [esp+0x6c]
  47dc8c:	db 44 24 54          	fild   DWORD PTR [esp+0x54]
  47dc90:	88 5e 7a             	mov    BYTE PTR [esi+0x7a],bl
  47dc93:	88 5e 6c             	mov    BYTE PTR [esi+0x6c],bl
  47dc96:	89 5e 54             	mov    DWORD PTR [esi+0x54],ebx
  47dc99:	c6 86 c8 00 00 00 01 	mov    BYTE PTR [esi+0xc8],0x1
  47dca0:	d9 9e e4 00 00 00    	fstp   DWORD PTR [esi+0xe4]
  47dca6:	d9 44 24 6c          	fld    DWORD PTR [esp+0x6c]
  47dcaa:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  47dcb0:	89 9e cc 00 00 00    	mov    DWORD PTR [esi+0xcc],ebx
  47dcb6:	89 96 fc 00 00 00    	mov    DWORD PTR [esi+0xfc],edx
  47dcbc:	e8 5f ce 18 00       	call   0x60ab20
  47dcc1:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  47dcc5:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
  47dcc9:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
  47dccd:	8b 44 24 70          	mov    eax,DWORD PTR [esp+0x70]
  47dcd1:	89 8e 08 01 00 00    	mov    DWORD PTR [esi+0x108],ecx
  47dcd7:	89 86 04 01 00 00    	mov    DWORD PTR [esi+0x104],eax
  47dcdd:	8b 44 24 7c          	mov    eax,DWORD PTR [esp+0x7c]
  47dce1:	89 96 10 01 00 00    	mov    DWORD PTR [esi+0x110],edx
  47dce7:	8b 94 24 80 00 00 00 	mov    edx,DWORD PTR [esp+0x80]
  47dcee:	8d 8e 18 01 00 00    	lea    ecx,[esi+0x118]
  47dcf4:	89 86 14 01 00 00    	mov    DWORD PTR [esi+0x114],eax
  47dcfa:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
  47dd01:	89 11                	mov    DWORD PTR [ecx],edx
  47dd03:	8b 94 24 88 00 00 00 	mov    edx,DWORD PTR [esp+0x88]
  47dd0a:	db 44 24 54          	fild   DWORD PTR [esp+0x54]
  47dd0e:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  47dd11:	8d 86 24 01 00 00    	lea    eax,[esi+0x124]
  47dd17:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  47dd1a:	8b 8c 24 8c 00 00 00 	mov    ecx,DWORD PTR [esp+0x8c]
  47dd21:	8b 94 24 90 00 00 00 	mov    edx,DWORD PTR [esp+0x90]
  47dd28:	89 08                	mov    DWORD PTR [eax],ecx
  47dd2a:	8b 8c 24 94 00 00 00 	mov    ecx,DWORD PTR [esp+0x94]
  47dd31:	d9 9e 00 01 00 00    	fstp   DWORD PTR [esi+0x100]
  47dd37:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47dd3a:	8b 94 24 98 00 00 00 	mov    edx,DWORD PTR [esp+0x98]
  47dd41:	89 96 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],edx
  47dd47:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47dd4a:	8b c2                	mov    eax,edx
  47dd4c:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
  47dd52:	5e                   	pop    esi
  47dd53:	5b                   	pop    ebx
  47dd54:	c2 90 00             	ret    0x90
  47dd57:	90                   	nop
  47dd58:	90                   	nop
  47dd59:	90                   	nop
  47dd5a:	90                   	nop
  47dd5b:	90                   	nop
  47dd5c:	90                   	nop
  47dd5d:	90                   	nop
  47dd5e:	90                   	nop
  47dd5f:	90                   	nop
  47dd60:	51                   	push   ecx
  47dd61:	53                   	push   ebx
  47dd62:	56                   	push   esi
  47dd63:	8b f1                	mov    esi,ecx
  47dd65:	33 db                	xor    ebx,ebx
  47dd67:	57                   	push   edi
  47dd68:	38 5e 6c             	cmp    BYTE PTR [esi+0x6c],bl
  47dd6b:	0f 84 ef 01 00 00    	je     0x47df60
  47dd71:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  47dd74:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  47dd78:	83 f8 ff             	cmp    eax,0xffffffff
  47dd7b:	b2 01                	mov    dl,0x1
  47dd7d:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  47dd81:	74 3b                	je     0x47ddbe
  47dd83:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
  47dd86:	83 f9 ff             	cmp    ecx,0xffffffff
  47dd89:	75 0e                	jne    0x47dd99
  47dd8b:	03 c7                	add    eax,edi
  47dd8d:	c7 46 24 00 00 80 3f 	mov    DWORD PTR [esi+0x24],0x3f800000
  47dd94:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
  47dd97:	eb 25                	jmp    0x47ddbe
  47dd99:	3b f9                	cmp    edi,ecx
  47dd9b:	7e 07                	jle    0x47dda4
  47dd9d:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
  47dda0:	32 d2                	xor    dl,dl
  47dda2:	eb 1a                	jmp    0x47ddbe
  47dda4:	3b c3                	cmp    eax,ebx
  47dda6:	7e 13                	jle    0x47ddbb
  47dda8:	2b cf                	sub    ecx,edi
  47ddaa:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47ddae:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47ddb2:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47ddb6:	d9 5e 24             	fstp   DWORD PTR [esi+0x24]
  47ddb9:	eb 03                	jmp    0x47ddbe
  47ddbb:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
  47ddbe:	3a d3                	cmp    dl,bl
  47ddc0:	88 56 28             	mov    BYTE PTR [esi+0x28],dl
  47ddc3:	75 0a                	jne    0x47ddcf
  47ddc5:	88 5e 6c             	mov    BYTE PTR [esi+0x6c],bl
  47ddc8:	5f                   	pop    edi
  47ddc9:	5e                   	pop    esi
  47ddca:	5b                   	pop    ebx
  47ddcb:	59                   	pop    ecx
  47ddcc:	c2 08 00             	ret    0x8
  47ddcf:	8a 46 79             	mov    al,BYTE PTR [esi+0x79]
  47ddd2:	b2 01                	mov    dl,0x1
  47ddd4:	3a c3                	cmp    al,bl
  47ddd6:	0f 84 99 00 00 00    	je     0x47de75
  47dddc:	8b 8e 84 00 00 00    	mov    ecx,DWORD PTR [esi+0x84]
  47dde2:	83 f9 ff             	cmp    ecx,0xffffffff
  47dde5:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  47dde9:	74 4d                	je     0x47de38
  47ddeb:	8b 86 88 00 00 00    	mov    eax,DWORD PTR [esi+0x88]
  47ddf1:	83 f8 ff             	cmp    eax,0xffffffff
  47ddf4:	75 14                	jne    0x47de0a
  47ddf6:	03 cf                	add    ecx,edi
  47ddf8:	c7 86 8c 00 00 00 00 	mov    DWORD PTR [esi+0x8c],0x3f800000
  47ddff:	00 80 3f 
  47de02:	89 8e 88 00 00 00    	mov    DWORD PTR [esi+0x88],ecx
  47de08:	eb 2e                	jmp    0x47de38
  47de0a:	3b f8                	cmp    edi,eax
  47de0c:	7e 0a                	jle    0x47de18
  47de0e:	89 9e 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],ebx
  47de14:	32 d2                	xor    dl,dl
  47de16:	eb 20                	jmp    0x47de38
  47de18:	3b cb                	cmp    ecx,ebx
  47de1a:	7e 16                	jle    0x47de32
  47de1c:	2b c7                	sub    eax,edi
  47de1e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47de22:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47de26:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47de2a:	d9 9e 8c 00 00 00    	fstp   DWORD PTR [esi+0x8c]
  47de30:	eb 06                	jmp    0x47de38
  47de32:	89 9e 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],ebx
  47de38:	3a d3                	cmp    dl,bl
  47de3a:	88 96 90 00 00 00    	mov    BYTE PTR [esi+0x90],dl
  47de40:	75 03                	jne    0x47de45
  47de42:	88 5e 79             	mov    BYTE PTR [esi+0x79],bl
  47de45:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47de4b:	d8 a6 8c 00 00 00    	fsub   DWORD PTR [esi+0x8c]
  47de51:	d8 8e 80 00 00 00    	fmul   DWORD PTR [esi+0x80]
  47de57:	d9 46 7c             	fld    DWORD PTR [esi+0x7c]
  47de5a:	d8 8e 8c 00 00 00    	fmul   DWORD PTR [esi+0x8c]
  47de60:	de c1                	faddp  st(1),st
  47de62:	dc 0d 28 e3 64 00    	fmul   QWORD PTR ds:0x64e328
  47de68:	e8 b3 cc 18 00       	call   0x60ab20
  47de6d:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
  47de70:	e9 87 00 00 00       	jmp    0x47defc
  47de75:	8b 8e d0 00 00 00    	mov    ecx,DWORD PTR [esi+0xd0]
  47de7b:	83 f9 ff             	cmp    ecx,0xffffffff
  47de7e:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  47de82:	74 4d                	je     0x47ded1
  47de84:	8b 86 d4 00 00 00    	mov    eax,DWORD PTR [esi+0xd4]
  47de8a:	83 f8 ff             	cmp    eax,0xffffffff
  47de8d:	75 14                	jne    0x47dea3
  47de8f:	03 cf                	add    ecx,edi
  47de91:	c7 86 d8 00 00 00 00 	mov    DWORD PTR [esi+0xd8],0x3f800000
  47de98:	00 80 3f 
  47de9b:	89 8e d4 00 00 00    	mov    DWORD PTR [esi+0xd4],ecx
  47dea1:	eb 2e                	jmp    0x47ded1
  47dea3:	3b f8                	cmp    edi,eax
  47dea5:	7e 0a                	jle    0x47deb1
  47dea7:	89 9e d8 00 00 00    	mov    DWORD PTR [esi+0xd8],ebx
  47dead:	32 d2                	xor    dl,dl
  47deaf:	eb 20                	jmp    0x47ded1
  47deb1:	3b cb                	cmp    ecx,ebx
  47deb3:	7e 16                	jle    0x47decb
  47deb5:	2b c7                	sub    eax,edi
  47deb7:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47debb:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47debf:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47dec3:	d9 9e d8 00 00 00    	fstp   DWORD PTR [esi+0xd8]
  47dec9:	eb 06                	jmp    0x47ded1
  47decb:	89 9e d8 00 00 00    	mov    DWORD PTR [esi+0xd8],ebx
  47ded1:	3a d3                	cmp    dl,bl
  47ded3:	88 96 dc 00 00 00    	mov    BYTE PTR [esi+0xdc],dl
  47ded9:	75 21                	jne    0x47defc
  47dedb:	d9 86 bc 00 00 00    	fld    DWORD PTR [esi+0xbc]
  47dee1:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  47dee7:	c6 46 79 01          	mov    BYTE PTR [esi+0x79],0x1
  47deeb:	e8 30 cc 18 00       	call   0x60ab20
  47def0:	50                   	push   eax
  47def1:	8d 8e 84 00 00 00    	lea    ecx,[esi+0x84]
  47def7:	e8 b4 62 f8 ff       	call   0x4041b0
  47defc:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
  47deff:	2b c3                	sub    eax,ebx
  47df01:	74 31                	je     0x47df34
  47df03:	48                   	dec    eax
  47df04:	74 03                	je     0x47df09
  47df06:	48                   	dec    eax
  47df07:	74 17                	je     0x47df20
  47df09:	38 5e 7a             	cmp    BYTE PTR [esi+0x7a],bl
  47df0c:	74 52                	je     0x47df60
  47df0e:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  47df12:	8b 06                	mov    eax,DWORD PTR [esi]
  47df14:	51                   	push   ecx
  47df15:	8b ce                	mov    ecx,esi
  47df17:	ff 10                	call   DWORD PTR [eax]
  47df19:	5f                   	pop    edi
  47df1a:	5e                   	pop    esi
  47df1b:	5b                   	pop    ebx
  47df1c:	59                   	pop    ecx
  47df1d:	c2 08 00             	ret    0x8
  47df20:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  47df24:	8b ce                	mov    ecx,esi
  47df26:	52                   	push   edx
  47df27:	57                   	push   edi
  47df28:	e8 63 0b 00 00       	call   0x47ea90
  47df2d:	5f                   	pop    edi
  47df2e:	5e                   	pop    esi
  47df2f:	5b                   	pop    ebx
  47df30:	59                   	pop    ecx
  47df31:	c2 08 00             	ret    0x8
  47df34:	38 5e 7a             	cmp    BYTE PTR [esi+0x7a],bl
  47df37:	74 13                	je     0x47df4c
  47df39:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  47df3d:	8b ce                	mov    ecx,esi
  47df3f:	52                   	push   edx
  47df40:	e8 0b 09 00 00       	call   0x47e850
  47df45:	5f                   	pop    edi
  47df46:	5e                   	pop    esi
  47df47:	5b                   	pop    ebx
  47df48:	59                   	pop    ecx
  47df49:	c2 08 00             	ret    0x8
  47df4c:	38 9e e8 00 00 00    	cmp    BYTE PTR [esi+0xe8],bl
  47df52:	74 0c                	je     0x47df60
  47df54:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47df58:	8b ce                	mov    ecx,esi
  47df5a:	50                   	push   eax
  47df5b:	e8 80 0d 00 00       	call   0x47ece0
  47df60:	5f                   	pop    edi
  47df61:	5e                   	pop    esi
  47df62:	5b                   	pop    ebx
  47df63:	59                   	pop    ecx
  47df64:	c2 08 00             	ret    0x8
  47df67:	90                   	nop
  47df68:	90                   	nop
  47df69:	90                   	nop
  47df6a:	90                   	nop
  47df6b:	90                   	nop
  47df6c:	90                   	nop
  47df6d:	90                   	nop
  47df6e:	90                   	nop
  47df6f:	90                   	nop
  47df70:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47df76:	6a ff                	push   0xffffffff
  47df78:	68 d8 8e 62 00       	push   0x628ed8
  47df7d:	50                   	push   eax
  47df7e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47df85:	83 ec 50             	sub    esp,0x50
  47df88:	56                   	push   esi
  47df89:	8b f1                	mov    esi,ecx
  47df8b:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  47df8e:	84 c0                	test   al,al
  47df90:	0f 84 e7 00 00 00    	je     0x47e07d
  47df96:	d9 86 a0 00 00 00    	fld    DWORD PTR [esi+0xa0]
  47df9c:	d8 0d 34 e3 64 00    	fmul   DWORD PTR ds:0x64e334
  47dfa2:	51                   	push   ecx
  47dfa3:	8b 8e 9c 00 00 00    	mov    ecx,DWORD PTR [esi+0x9c]
  47dfa9:	8b c4                	mov    eax,esp
  47dfab:	d9 c0                	fld    st(0)
  47dfad:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  47dfb3:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  47dfb7:	d9 86 a4 00 00 00    	fld    DWORD PTR [esi+0xa4]
  47dfbd:	d8 0d 34 e3 64 00    	fmul   DWORD PTR ds:0x64e334
  47dfc3:	d9 54 24 08          	fst    DWORD PTR [esp+0x8]
  47dfc7:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  47dfcd:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  47dfd1:	d9 86 a8 00 00 00    	fld    DWORD PTR [esi+0xa8]
  47dfd7:	d8 0d 34 e3 64 00    	fmul   DWORD PTR ds:0x64e334
  47dfdd:	d9 54 24 0c          	fst    DWORD PTR [esp+0xc]
  47dfe1:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  47dfe7:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  47dfeb:	d8 0d 30 e3 64 00    	fmul   DWORD PTR ds:0x64e330
  47dff1:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47dff5:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  47dff9:	d8 0d 30 e3 64 00    	fmul   DWORD PTR ds:0x64e330
  47dfff:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  47e003:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  47e007:	d8 0d 30 e3 64 00    	fmul   DWORD PTR ds:0x64e330
  47e00d:	89 64 24 0c          	mov    DWORD PTR [esp+0xc],esp
  47e011:	50                   	push   eax
  47e012:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  47e016:	e8 c5 62 f8 ff       	call   0x4042e0
  47e01b:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47e01f:	e8 7c 65 0d 00       	call   0x5545a0
  47e024:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47e028:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
  47e02f:	00 
  47e030:	51                   	push   ecx
  47e031:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47e035:	c7 44 24 10 00 00 7f 	mov    DWORD PTR [esp+0x10],0x437f0000
  47e03c:	43 
  47e03d:	c7 44 24 14 00 00 5c 	mov    DWORD PTR [esp+0x14],0x425c0000
  47e044:	42 
  47e045:	c7 44 24 18 00 00 f0 	mov    DWORD PTR [esp+0x18],0x42f00000
  47e04c:	42 
  47e04d:	c7 44 24 1c 00 00 7f 	mov    DWORD PTR [esp+0x1c],0x437f0000
  47e054:	43 
  47e055:	e8 d6 69 0d 00       	call   0x554a30
  47e05a:	8d 54 24 0c          	lea    edx,[esp+0xc]
  47e05e:	83 c6 04             	add    esi,0x4
  47e061:	52                   	push   edx
  47e062:	56                   	push   esi
  47e063:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47e067:	e8 24 68 0d 00       	call   0x554890
  47e06c:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  47e070:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
  47e077:	ff 
  47e078:	e8 b3 65 0d 00       	call   0x554630
  47e07d:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  47e081:	5e                   	pop    esi
  47e082:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47e089:	83 c4 5c             	add    esp,0x5c
  47e08c:	c3                   	ret
  47e08d:	90                   	nop
  47e08e:	90                   	nop
  47e08f:	90                   	nop
  47e090:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47e096:	6a ff                	push   0xffffffff
  47e098:	68 11 8f 62 00       	push   0x628f11
  47e09d:	50                   	push   eax
  47e09e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47e0a2:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47e0a9:	81 ec 3c 01 00 00    	sub    esp,0x13c
  47e0af:	53                   	push   ebx
  47e0b0:	55                   	push   ebp
  47e0b1:	83 cd ff             	or     ebp,0xffffffff
  47e0b4:	33 db                	xor    ebx,ebx
  47e0b6:	56                   	push   esi
  47e0b7:	3b c5                	cmp    eax,ebp
  47e0b9:	57                   	push   edi
  47e0ba:	8b f1                	mov    esi,ecx
  47e0bc:	75 66                	jne    0x47e124
  47e0be:	8a 44 24 37          	mov    al,BYTE PTR [esp+0x37]
  47e0c2:	53                   	push   ebx
  47e0c3:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  47e0c7:	88 44 24 58          	mov    BYTE PTR [esp+0x58],al
  47e0cb:	e8 d0 5f f8 ff       	call   0x4040a0
  47e0d0:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47e0d5:	8b cd                	mov    ecx,ebp
  47e0d7:	33 c0                	xor    eax,eax
  47e0d9:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47e0db:	f7 d1                	not    ecx
  47e0dd:	49                   	dec    ecx
  47e0de:	51                   	push   ecx
  47e0df:	68 70 3f 6b 00       	push   0x6b3f70
  47e0e4:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  47e0e8:	e8 03 60 f8 ff       	call   0x4040f0
  47e0ed:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47e0f1:	89 9c 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],ebx
  47e0f8:	51                   	push   ecx
  47e0f9:	68 8a 00 00 00       	push   0x8a
  47e0fe:	68 2c e2 68 00       	push   0x68e22c
  47e103:	68 14 e2 68 00       	push   0x68e214
  47e108:	e8 e3 26 12 00       	call   0x5a07f0
  47e10d:	ff d0                	call   eax
  47e10f:	83 c4 10             	add    esp,0x10
  47e112:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47e116:	89 ac 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],ebp
  47e11d:	6a 01                	push   0x1
  47e11f:	e8 7c 5f f8 ff       	call   0x4040a0
  47e124:	db 84 24 5c 01 00 00 	fild   DWORD PTR [esp+0x15c]
  47e12b:	39 1d e0 8d 6c 00    	cmp    DWORD PTR ds:0x6c8de0,ebx
  47e131:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  47e137:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  47e13b:	75 05                	jne    0x47e142
  47e13d:	e8 3e d1 0d 00       	call   0x55b280
  47e142:	8d 6e 10             	lea    ebp,[esi+0x10]
  47e145:	8d 7e 60             	lea    edi,[esi+0x60]
  47e148:	8b d5                	mov    edx,ebp
  47e14a:	89 6c 24 50          	mov    DWORD PTR [esp+0x50],ebp
  47e14e:	8b 02                	mov    eax,DWORD PTR [edx]
  47e150:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  47e154:	8b c7                	mov    eax,edi
  47e156:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47e159:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  47e15d:	8b 08                	mov    ecx,DWORD PTR [eax]
  47e15f:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47e162:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  47e166:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  47e16a:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47e16d:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  47e171:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47e174:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  47e178:	8a 86 c9 00 00 00    	mov    al,BYTE PTR [esi+0xc9]
  47e17e:	3a c3                	cmp    al,bl
  47e180:	0f 84 7b 01 00 00    	je     0x47e301
  47e186:	8b 8e cc 00 00 00    	mov    ecx,DWORD PTR [esi+0xcc]
  47e18c:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47e190:	a1 fc e2 64 00       	mov    eax,ds:0x64e2fc
  47e195:	51                   	push   ecx
  47e196:	d9 05 00 e3 64 00    	fld    DWORD PTR ds:0x64e300
  47e19c:	52                   	push   edx
  47e19d:	50                   	push   eax
  47e19e:	51                   	push   ecx
  47e19f:	8b 0d 00 e3 64 00    	mov    ecx,DWORD PTR ds:0x64e300
  47e1a5:	d9 e0                	fchs
  47e1a7:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e1aa:	51                   	push   ecx
  47e1ab:	8b ce                	mov    ecx,esi
  47e1ad:	e8 4e 0d 00 00       	call   0x47ef00
  47e1b2:	8a 8e c8 00 00 00    	mov    cl,BYTE PTR [esi+0xc8]
  47e1b8:	3a cb                	cmp    cl,bl
  47e1ba:	74 0e                	je     0x47e1ca
  47e1bc:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e1c2:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
  47e1c8:	eb 10                	jmp    0x47e1da
  47e1ca:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
  47e1d0:	d8 e1                	fsub   st,st(1)
  47e1d2:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
  47e1d8:	dd d8                	fstp   st(0)
  47e1da:	d9 86 cc 00 00 00    	fld    DWORD PTR [esi+0xcc]
  47e1e0:	d8 1d 00 e3 64 00    	fcomp  DWORD PTR ds:0x64e300
  47e1e6:	df e0                	fnstsw ax
  47e1e8:	f6 c4 41             	test   ah,0x41
  47e1eb:	74 15                	je     0x47e202
  47e1ed:	d9 05 00 e3 64 00    	fld    DWORD PTR ds:0x64e300
  47e1f3:	d9 e0                	fchs
  47e1f5:	d8 9e cc 00 00 00    	fcomp  DWORD PTR [esi+0xcc]
  47e1fb:	df e0                	fnstsw ax
  47e1fd:	f6 c4 41             	test   ah,0x41
  47e200:	75 2b                	jne    0x47e22d
  47e202:	3a cb                	cmp    cl,bl
  47e204:	74 0e                	je     0x47e214
  47e206:	8b 15 00 e3 64 00    	mov    edx,DWORD PTR ds:0x64e300
  47e20c:	89 96 cc 00 00 00    	mov    DWORD PTR [esi+0xcc],edx
  47e212:	eb 0e                	jmp    0x47e222
  47e214:	d9 05 00 e3 64 00    	fld    DWORD PTR ds:0x64e300
  47e21a:	d9 e0                	fchs
  47e21c:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
  47e222:	3a cb                	cmp    cl,bl
  47e224:	0f 94 c0             	sete   al
  47e227:	88 86 c8 00 00 00    	mov    BYTE PTR [esi+0xc8],al
  47e22d:	d9 07                	fld    DWORD PTR [edi]
  47e22f:	e8 ec c8 18 00       	call   0x60ab20
  47e234:	99                   	cdq
  47e235:	33 c2                	xor    eax,edx
  47e237:	2b c2                	sub    eax,edx
  47e239:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47e23d:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  47e241:	d9 46 64             	fld    DWORD PTR [esi+0x64]
  47e244:	e8 d7 c8 18 00       	call   0x60ab20
  47e249:	99                   	cdq
  47e24a:	33 c2                	xor    eax,edx
  47e24c:	2b c2                	sub    eax,edx
  47e24e:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47e252:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  47e256:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  47e25a:	d9 46 68             	fld    DWORD PTR [esi+0x68]
  47e25d:	e8 be c8 18 00       	call   0x60ab20
  47e262:	99                   	cdq
  47e263:	33 c2                	xor    eax,edx
  47e265:	2b c2                	sub    eax,edx
  47e267:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47e26b:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  47e26f:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  47e273:	d8 54 24 18          	fcom   DWORD PTR [esp+0x18]
  47e277:	df e0                	fnstsw ax
  47e279:	f6 c4 41             	test   ah,0x41
  47e27c:	75 2b                	jne    0x47e2a9
  47e27e:	d8 54 24 10          	fcom   DWORD PTR [esp+0x10]
