  47d9b0:	56                   	push   esi
  47d9b1:	8b f1                	mov    esi,ecx
  47d9b3:	6a ff                	push   0xffffffff
  47d9b5:	8d 4e 1c             	lea    ecx,[esi+0x1c]
  47d9b8:	e8 f3 67 f8 ff       	call   0x4041b0
  47d9bd:	6a ff                	push   0xffffffff
  47d9bf:	8d 8e 84 00 00 00    	lea    ecx,[esi+0x84]
  47d9c5:	e8 e6 67 f8 ff       	call   0x4041b0
  47d9ca:	6a ff                	push   0xffffffff
  47d9cc:	8d 8e d0 00 00 00    	lea    ecx,[esi+0xd0]
  47d9d2:	e8 d9 67 f8 ff       	call   0x4041b0
  47d9d7:	6a ff                	push   0xffffffff
  47d9d9:	8d 8e ec 00 00 00    	lea    ecx,[esi+0xec]
  47d9df:	e8 cc 67 f8 ff       	call   0x4041b0
  47d9e4:	8b ce                	mov    ecx,esi
  47d9e6:	c7 06 14 e3 64 00    	mov    DWORD PTR [esi],0x64e314
  47d9ec:	e8 0f 00 00 00       	call   0x47da00
  47d9f1:	8b c6                	mov    eax,esi
  47d9f3:	5e                   	pop    esi
  47d9f4:	c3                   	ret
  47d9f5:	90                   	nop
  47d9f6:	90                   	nop
  47d9f7:	90                   	nop
  47d9f8:	90                   	nop
  47d9f9:	90                   	nop
  47d9fa:	90                   	nop
  47d9fb:	90                   	nop
  47d9fc:	90                   	nop
  47d9fd:	90                   	nop
  47d9fe:	90                   	nop
  47d9ff:	90                   	nop
  47da00:	56                   	push   esi
  47da01:	8b f1                	mov    esi,ecx
  47da03:	6a ff                	push   0xffffffff
  47da05:	8d 4e 1c             	lea    ecx,[esi+0x1c]
  47da08:	e8 a3 67 f8 ff       	call   0x4041b0
  47da0d:	6a ff                	push   0xffffffff
  47da0f:	8d 8e 84 00 00 00    	lea    ecx,[esi+0x84]
  47da15:	e8 96 67 f8 ff       	call   0x4041b0
  47da1a:	6a ff                	push   0xffffffff
  47da1c:	8d 8e d0 00 00 00    	lea    ecx,[esi+0xd0]
  47da22:	e8 89 67 f8 ff       	call   0x4041b0
  47da27:	6a ff                	push   0xffffffff
  47da29:	8d 8e ec 00 00 00    	lea    ecx,[esi+0xec]
  47da2f:	e8 7c 67 f8 ff       	call   0x4041b0
  47da34:	33 c0                	xor    eax,eax
  47da36:	b9 01 00 00 00       	mov    ecx,0x1
  47da3b:	89 86 c0 00 00 00    	mov    DWORD PTR [esi+0xc0],eax
  47da41:	89 86 40 01 00 00    	mov    DWORD PTR [esi+0x140],eax
  47da47:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
  47da4a:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
  47da4d:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
  47da50:	89 46 50             	mov    DWORD PTR [esi+0x50],eax
  47da53:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
  47da56:	89 4e 58             	mov    DWORD PTR [esi+0x58],ecx
  47da59:	88 8e e8 00 00 00    	mov    BYTE PTR [esi+0xe8],cl
  47da5f:	89 8e 14 01 00 00    	mov    DWORD PTR [esi+0x114],ecx
  47da65:	88 4e 7b             	mov    BYTE PTR [esi+0x7b],cl
  47da68:	8d 4e 10             	lea    ecx,[esi+0x10]
  47da6b:	88 46 5c             	mov    BYTE PTR [esi+0x5c],al
  47da6e:	89 46 74             	mov    DWORD PTR [esi+0x74],eax
  47da71:	88 46 78             	mov    BYTE PTR [esi+0x78],al
  47da74:	88 46 79             	mov    BYTE PTR [esi+0x79],al
  47da77:	88 46 7a             	mov    BYTE PTR [esi+0x7a],al
  47da7a:	89 46 7c             	mov    DWORD PTR [esi+0x7c],eax
  47da7d:	89 86 80 00 00 00    	mov    DWORD PTR [esi+0x80],eax
  47da83:	89 86 bc 00 00 00    	mov    DWORD PTR [esi+0xbc],eax
  47da89:	89 86 e0 00 00 00    	mov    DWORD PTR [esi+0xe0],eax
  47da8f:	89 86 e4 00 00 00    	mov    DWORD PTR [esi+0xe4],eax
  47da95:	88 46 6c             	mov    BYTE PTR [esi+0x6c],al
  47da98:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
  47da9b:	c7 86 94 00 00 00 00 	mov    DWORD PTR [esi+0x94],0x45048000
  47daa2:	80 04 45 
  47daa5:	88 86 98 00 00 00    	mov    BYTE PTR [esi+0x98],al
  47daab:	c7 86 ac 00 00 00 00 	mov    DWORD PTR [esi+0xac],0x40000000
  47dab2:	00 00 40 
  47dab5:	c7 86 b0 00 00 00 00 	mov    DWORD PTR [esi+0xb0],0x3f800000
  47dabc:	00 80 3f 
  47dabf:	89 86 b4 00 00 00    	mov    DWORD PTR [esi+0xb4],eax
  47dac5:	88 86 b8 00 00 00    	mov    BYTE PTR [esi+0xb8],al
  47dacb:	88 86 c8 00 00 00    	mov    BYTE PTR [esi+0xc8],al
  47dad1:	88 86 c9 00 00 00    	mov    BYTE PTR [esi+0xc9],al
  47dad7:	89 86 cc 00 00 00    	mov    DWORD PTR [esi+0xcc],eax
  47dadd:	89 86 fc 00 00 00    	mov    DWORD PTR [esi+0xfc],eax
  47dae3:	89 86 00 01 00 00    	mov    DWORD PTR [esi+0x100],eax
  47dae9:	89 86 04 01 00 00    	mov    DWORD PTR [esi+0x104],eax
  47daef:	89 86 08 01 00 00    	mov    DWORD PTR [esi+0x108],eax
  47daf5:	89 86 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],eax
  47dafb:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
  47db01:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
  47db07:	e8 64 55 13 00       	call   0x5b3070
  47db0c:	8d 8e 34 01 00 00    	lea    ecx,[esi+0x134]
  47db12:	e8 59 55 13 00       	call   0x5b3070
  47db17:	8d 4e 40             	lea    ecx,[esi+0x40]
  47db1a:	e8 51 55 13 00       	call   0x5b3070
  47db1f:	8d 4e 60             	lea    ecx,[esi+0x60]
  47db22:	e8 49 55 13 00       	call   0x5b3070
  47db27:	8d 8e a0 00 00 00    	lea    ecx,[esi+0xa0]
  47db2d:	e8 3e 55 13 00       	call   0x5b3070
  47db32:	8d 8e 18 01 00 00    	lea    ecx,[esi+0x118]
  47db38:	e8 33 55 13 00       	call   0x5b3070
  47db3d:	8d 8e 24 01 00 00    	lea    ecx,[esi+0x124]
  47db43:	5e                   	pop    esi
  47db44:	e9 27 55 13 00       	jmp    0x5b3070
  47db49:	90                   	nop
  47db4a:	90                   	nop
  47db4b:	90                   	nop
  47db4c:	90                   	nop
  47db4d:	90                   	nop
  47db4e:	90                   	nop
  47db4f:	90                   	nop
  47db50:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  47db54:	89 81 9c 00 00 00    	mov    DWORD PTR [ecx+0x9c],eax
  47db5a:	c2 08 00             	ret    0x8
  47db5d:	90                   	nop
  47db5e:	90                   	nop
  47db5f:	90                   	nop
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
  47e282:	df e0                	fnstsw ax
  47e284:	f6 c4 41             	test   ah,0x41
  47e287:	75 20                	jne    0x47e2a9
  47e289:	dd d8                	fstp   st(0)
  47e28b:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47e28f:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e295:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47e299:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  47e29d:	d8 a6 cc 00 00 00    	fsub   DWORD PTR [esi+0xcc]
  47e2a3:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  47e2a7:	eb 58                	jmp    0x47e301
  47e2a9:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  47e2ad:	d8 d9                	fcomp  st(1)
  47e2af:	df e0                	fnstsw ax
  47e2b1:	f6 c4 41             	test   ah,0x41
  47e2b4:	dd d8                	fstp   st(0)
  47e2b6:	75 2d                	jne    0x47e2e5
  47e2b8:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  47e2bc:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
  47e2c0:	df e0                	fnstsw ax
  47e2c2:	f6 c4 41             	test   ah,0x41
  47e2c5:	75 1e                	jne    0x47e2e5
  47e2c7:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  47e2cb:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e2d1:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  47e2d5:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  47e2d9:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e2df:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  47e2e3:	eb 1c                	jmp    0x47e301
  47e2e5:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  47e2e9:	d8 86 cc 00 00 00    	fadd   DWORD PTR [esi+0xcc]
  47e2ef:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  47e2f3:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47e2f7:	d8 a6 cc 00 00 00    	fsub   DWORD PTR [esi+0xcc]
  47e2fd:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47e301:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  47e305:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  47e30b:	51                   	push   ecx
  47e30c:	8d 54 24 20          	lea    edx,[esp+0x20]
  47e310:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47e314:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e317:	e8 84 4c 13 00       	call   0x5b2fa0
  47e31c:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47e320:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e324:	51                   	push   ecx
  47e325:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47e329:	e8 d2 4c 13 00       	call   0x5b3000
  47e32e:	d9 86 94 00 00 00    	fld    DWORD PTR [esi+0x94]
  47e334:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  47e33a:	df e0                	fnstsw ax
  47e33c:	f6 c4 01             	test   ah,0x1
  47e33f:	74 53                	je     0x47e394
  47e341:	d9 86 94 00 00 00    	fld    DWORD PTR [esi+0x94]
  47e347:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e34d:	df e0                	fnstsw ax
  47e34f:	f6 c4 01             	test   ah,0x1
  47e352:	75 40                	jne    0x47e394
  47e354:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e35a:	d8 a6 94 00 00 00    	fsub   DWORD PTR [esi+0x94]
  47e360:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  47e364:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  47e36a:	df e0                	fnstsw ax
  47e36c:	f6 c4 41             	test   ah,0x41
  47e36f:	75 08                	jne    0x47e379
  47e371:	dd d8                	fstp   st(0)
  47e373:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e379:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e37f:	d8 e1                	fsub   st,st(1)
  47e381:	51                   	push   ecx
  47e382:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  47e386:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47e38a:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e38d:	dd d8                	fstp   st(0)
  47e38f:	e8 0c 4c 13 00       	call   0x5b2fa0
  47e394:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  47e398:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47e39c:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47e3a0:	89 55 00             	mov    DWORD PTR [ebp+0x0],edx
  47e3a3:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
  47e3a6:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
  47e3a9:	8d 6e 04             	lea    ebp,[esi+0x4]
  47e3ac:	8b d5                	mov    edx,ebp
  47e3ae:	8b 02                	mov    eax,DWORD PTR [edx]
  47e3b0:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
  47e3b4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47e3b8:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47e3bb:	50                   	push   eax
  47e3bc:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
  47e3c0:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47e3c4:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47e3c7:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  47e3cb:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  47e3cf:	e8 cc 4b 13 00       	call   0x5b2fa0
  47e3d4:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47e3d8:	8d 54 24 68          	lea    edx,[esp+0x68]
  47e3dc:	51                   	push   ecx
  47e3dd:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47e3e1:	e8 1a 4c 13 00       	call   0x5b3000
  47e3e6:	38 9e 98 00 00 00    	cmp    BYTE PTR [esi+0x98],bl
  47e3ec:	0f 84 cc 02 00 00    	je     0x47e6be
  47e3f2:	51                   	push   ecx
  47e3f3:	8b 8e 9c 00 00 00    	mov    ecx,DWORD PTR [esi+0x9c]
  47e3f9:	8b d4                	mov    edx,esp
  47e3fb:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  47e3ff:	52                   	push   edx
  47e400:	c7 44 24 1c 00 00 80 	mov    DWORD PTR [esp+0x1c],0x3f800000
  47e407:	3f 
  47e408:	33 ff                	xor    edi,edi
  47e40a:	e8 d1 5e f8 ff       	call   0x4042e0
  47e40f:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  47e413:	e8 18 78 0e 00       	call   0x565c30
  47e418:	d9 05 74 88 6b 00    	fld    DWORD PTR ds:0x6b8874
  47e41e:	d8 8e a0 00 00 00    	fmul   DWORD PTR [esi+0xa0]
  47e424:	8b 15 74 88 6b 00    	mov    edx,DWORD PTR ds:0x6b8874
  47e42a:	c7 84 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],0x1
  47e431:	01 00 00 00 
  47e435:	89 94 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],edx
  47e43c:	8d 54 24 44          	lea    edx,[esp+0x44]
  47e440:	d9 c0                	fld    st(0)
  47e442:	d9 e0                	fchs
  47e444:	d9 9c 24 b0 00 00 00 	fstp   DWORD PTR [esp+0xb0]
  47e44b:	d9 05 74 88 6b 00    	fld    DWORD PTR ds:0x6b8874
  47e451:	d8 8e a4 00 00 00    	fmul   DWORD PTR [esi+0xa4]
  47e457:	c6 84 24 89 00 00 00 	mov    BYTE PTR [esp+0x89],0x1
  47e45e:	01 
  47e45f:	c6 84 24 8a 00 00 00 	mov    BYTE PTR [esp+0x8a],0x1
  47e466:	01 
  47e467:	88 9c 24 8b 00 00 00 	mov    BYTE PTR [esp+0x8b],bl
  47e46e:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x1
  47e475:	01 
  47e476:	88 9c 24 8d 00 00 00 	mov    BYTE PTR [esp+0x8d],bl
  47e47d:	c6 84 24 8e 00 00 00 	mov    BYTE PTR [esp+0x8e],0x1
  47e484:	01 
  47e485:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  47e489:	d9 e0                	fchs
  47e48b:	d9 9c 24 b4 00 00 00 	fstp   DWORD PTR [esp+0xb4]
  47e492:	d9 05 74 88 6b 00    	fld    DWORD PTR ds:0x6b8874
  47e498:	d8 8e a8 00 00 00    	fmul   DWORD PTR [esi+0xa8]
  47e49e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47e4a2:	89 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],eax
  47e4a9:	8a 46 7b             	mov    al,BYTE PTR [esi+0x7b]
  47e4ac:	88 84 24 88 00 00 00 	mov    BYTE PTR [esp+0x88],al
  47e4b3:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
  47e4b7:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  47e4bb:	d9 e0                	fchs
  47e4bd:	d9 9c 24 b8 00 00 00 	fstp   DWORD PTR [esp+0xb8]
  47e4c4:	89 8c 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],ecx
  47e4cb:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47e4cf:	d9 9c 24 bc 00 00 00 	fstp   DWORD PTR [esp+0xbc]
  47e4d6:	51                   	push   ecx
  47e4d7:	52                   	push   edx
  47e4d8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  47e4dc:	e8 2f 79 0e 00       	call   0x565e10
  47e4e1:	84 c0                	test   al,al
  47e4e3:	0f 84 d0 00 00 00    	je     0x47e5b9
  47e4e9:	8b 8e b0 00 00 00    	mov    ecx,DWORD PTR [esi+0xb0]
  47e4ef:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
  47e4f5:	8b 94 24 10 01 00 00 	mov    edx,DWORD PTR [esp+0x110]
  47e4fc:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  47e500:	8b 8c 24 18 01 00 00 	mov    ecx,DWORD PTR [esp+0x118]
  47e507:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  47e50b:	8b 84 24 14 01 00 00 	mov    eax,DWORD PTR [esp+0x114]
  47e512:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  47e516:	8b 8e b4 00 00 00    	mov    ecx,DWORD PTR [esi+0xb4]
  47e51c:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  47e520:	41                   	inc    ecx
  47e521:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  47e525:	8d 54 24 64          	lea    edx,[esp+0x64]
  47e529:	89 8e b4 00 00 00    	mov    DWORD PTR [esi+0xb4],ecx
  47e52f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47e533:	8d 44 24 28          	lea    eax,[esp+0x28]
  47e537:	52                   	push   edx
  47e538:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  47e53c:	50                   	push   eax
  47e53d:	51                   	push   ecx
  47e53e:	8d 44 24 34          	lea    eax,[esp+0x34]
  47e542:	52                   	push   edx
  47e543:	8d 8c 24 e4 00 00 00 	lea    ecx,[esp+0xe4]
  47e54a:	50                   	push   eax
  47e54b:	51                   	push   ecx
  47e54c:	e8 1f 30 13 00       	call   0x5b1570
  47e551:	d9 84 24 34 01 00 00 	fld    DWORD PTR [esp+0x134]
  47e558:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e55e:	83 c4 18             	add    esp,0x18
  47e561:	df e0                	fnstsw ax
  47e563:	f6 c4 01             	test   ah,0x1
  47e566:	75 19                	jne    0x47e581
  47e568:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e56e:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  47e572:	d8 8c 24 1c 01 00 00 	fmul   DWORD PTR [esp+0x11c]
  47e579:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  47e57d:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  47e581:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e587:	d8 25 0c e3 64 00    	fsub   DWORD PTR ds:0x64e30c
  47e58d:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  47e591:	df e0                	fnstsw ax
  47e593:	f6 c4 41             	test   ah,0x41
  47e596:	75 21                	jne    0x47e5b9
  47e598:	47                   	inc    edi
  47e599:	83 ff 0a             	cmp    edi,0xa
  47e59c:	7d 1b                	jge    0x47e5b9
  47e59e:	8d 54 24 38          	lea    edx,[esp+0x38]
  47e5a2:	8d 44 24 44          	lea    eax,[esp+0x44]
  47e5a6:	52                   	push   edx
  47e5a7:	50                   	push   eax
  47e5a8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  47e5ac:	e8 5f 78 0e 00       	call   0x565e10
  47e5b1:	84 c0                	test   al,al
  47e5b3:	0f 85 30 ff ff ff    	jne    0x47e4e9
  47e5b9:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47e5bd:	e8 0e 4a 13 00       	call   0x5b2fd0
  47e5c2:	d8 1d 78 be 64 00    	fcomp  DWORD PTR ds:0x64be78
  47e5c8:	df e0                	fnstsw ax
  47e5ca:	f6 c4 01             	test   ah,0x1
  47e5cd:	74 61                	je     0x47e630
  47e5cf:	83 be b4 00 00 00 32 	cmp    DWORD PTR [esi+0xb4],0x32
  47e5d6:	7e 58                	jle    0x47e630
  47e5d8:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  47e5db:	83 cf ff             	or     edi,0xffffffff
  47e5de:	3b c7                	cmp    eax,edi
  47e5e0:	88 5e 7a             	mov    BYTE PTR [esi+0x7a],bl
  47e5e3:	74 4e                	je     0x47e633
  47e5e5:	38 9e b8 00 00 00    	cmp    BYTE PTR [esi+0xb8],bl
  47e5eb:	74 46                	je     0x47e633
  47e5ed:	b9 d0 07 00 00       	mov    ecx,0x7d0
  47e5f2:	b8 00 00 80 3f       	mov    eax,0x3f800000
  47e5f7:	c6 46 79 01          	mov    BYTE PTR [esi+0x79],0x1
  47e5fb:	c7 46 7c 00 00 c8 42 	mov    DWORD PTR [esi+0x7c],0x42c80000
  47e602:	89 9e 80 00 00 00    	mov    DWORD PTR [esi+0x80],ebx
  47e608:	89 8e 84 00 00 00    	mov    DWORD PTR [esi+0x84],ecx
  47e60e:	89 be 88 00 00 00    	mov    DWORD PTR [esi+0x88],edi
  47e614:	89 86 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],eax
  47e61a:	c6 86 90 00 00 00 01 	mov    BYTE PTR [esi+0x90],0x1
  47e621:	89 4e 1c             	mov    DWORD PTR [esi+0x1c],ecx
  47e624:	89 7e 20             	mov    DWORD PTR [esi+0x20],edi
  47e627:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
  47e62a:	c6 46 28 01          	mov    BYTE PTR [esi+0x28],0x1
  47e62e:	eb 03                	jmp    0x47e633
  47e630:	83 cf ff             	or     edi,0xffffffff
  47e633:	8b 8c 24 40 01 00 00 	mov    ecx,DWORD PTR [esp+0x140]
  47e63a:	c7 84 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],0x4
  47e641:	04 00 00 00 
  47e645:	51                   	push   ecx
  47e646:	e8 a5 ff 17 00       	call   0x5fe5f0
  47e64b:	8b 94 24 34 01 00 00 	mov    edx,DWORD PTR [esp+0x134]
  47e652:	89 9c 24 44 01 00 00 	mov    DWORD PTR [esp+0x144],ebx
  47e659:	52                   	push   edx
  47e65a:	89 9c 24 4c 01 00 00 	mov    DWORD PTR [esp+0x14c],ebx
  47e661:	89 9c 24 50 01 00 00 	mov    DWORD PTR [esp+0x150],ebx
  47e668:	e8 83 ff 17 00       	call   0x5fe5f0
  47e66d:	8b 84 24 9c 00 00 00 	mov    eax,DWORD PTR [esp+0x9c]
  47e674:	83 c4 08             	add    esp,0x8
  47e677:	3b c3                	cmp    eax,ebx
  47e679:	89 9c 24 30 01 00 00 	mov    DWORD PTR [esp+0x130],ebx
  47e680:	89 9c 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],ebx
  47e687:	89 9c 24 38 01 00 00 	mov    DWORD PTR [esp+0x138],ebx
  47e68e:	74 1e                	je     0x47e6ae
  47e690:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47e693:	8b c8                	mov    ecx,eax
  47e695:	83 c0 14             	add    eax,0x14
  47e698:	4e                   	dec    esi
  47e699:	8b d6                	mov    edx,esi
  47e69b:	3b d3                	cmp    edx,ebx
  47e69d:	89 30                	mov    DWORD PTR [eax],esi
  47e69f:	75 06                	jne    0x47e6a7
  47e6a1:	53                   	push   ebx
  47e6a2:	e8 19 d9 12 00       	call   0x5abfc0
  47e6a7:	89 9c 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],ebx
  47e6ae:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  47e6b2:	89 bc 24 54 01 00 00 	mov    DWORD PTR [esp+0x154],edi
  47e6b9:	e8 12 ce 12 00       	call   0x5ab4d0
  47e6be:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  47e6c2:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  47e6c6:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
  47e6ca:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  47e6cd:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  47e6d1:	89 4d 04             	mov    DWORD PTR [ebp+0x4],ecx
  47e6d4:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47e6d8:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
  47e6db:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  47e6df:	89 08                	mov    DWORD PTR [eax],ecx
  47e6e1:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47e6e5:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47e6e8:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47e6eb:	8b 8c 24 4c 01 00 00 	mov    ecx,DWORD PTR [esp+0x14c]
  47e6f2:	5f                   	pop    edi
  47e6f3:	5e                   	pop    esi
  47e6f4:	5d                   	pop    ebp
  47e6f5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47e6fc:	5b                   	pop    ebx
  47e6fd:	81 c4 48 01 00 00    	add    esp,0x148
  47e703:	c2 04 00             	ret    0x4
  47e706:	90                   	nop
  47e707:	90                   	nop
  47e708:	90                   	nop
  47e709:	90                   	nop
  47e70a:	90                   	nop
  47e70b:	90                   	nop
  47e70c:	90                   	nop
  47e70d:	90                   	nop
  47e70e:	90                   	nop
  47e70f:	90                   	nop
  47e710:	56                   	push   esi
  47e711:	8b f1                	mov    esi,ecx
  47e713:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  47e716:	84 c0                	test   al,al
  47e718:	75 5a                	jne    0x47e774
  47e71a:	d9 46 7c             	fld    DWORD PTR [esi+0x7c]
  47e71d:	d8 0d 38 e3 64 00    	fmul   DWORD PTR ds:0x64e338
  47e723:	b0 01                	mov    al,0x1
  47e725:	c7 46 54 00 00 00 00 	mov    DWORD PTR [esi+0x54],0x0
  47e72c:	88 46 6c             	mov    BYTE PTR [esi+0x6c],al
  47e72f:	88 46 7a             	mov    BYTE PTR [esi+0x7a],al
  47e732:	e8 e9 c3 18 00       	call   0x60ab20
  47e737:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
  47e73a:	8b 86 30 01 00 00    	mov    eax,DWORD PTR [esi+0x130]
  47e740:	8d 8e 34 01 00 00    	lea    ecx,[esi+0x134]
  47e746:	89 86 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],eax
  47e74c:	8d 56 10             	lea    edx,[esi+0x10]
  47e74f:	c6 46 79 00          	mov    BYTE PTR [esi+0x79],0x0
  47e753:	8b 01                	mov    eax,DWORD PTR [ecx]
  47e755:	c7 86 b4 00 00 00 00 	mov    DWORD PTR [esi+0xb4],0x0
  47e75c:	00 00 00 
  47e75f:	89 02                	mov    DWORD PTR [edx],eax
  47e761:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  47e764:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  47e767:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  47e76a:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  47e76d:	8b ce                	mov    ecx,esi
  47e76f:	e8 3c 00 00 00       	call   0x47e7b0
  47e774:	5e                   	pop    esi
  47e775:	c3                   	ret
  47e776:	90                   	nop
  47e777:	90                   	nop
  47e778:	90                   	nop
  47e779:	90                   	nop
  47e77a:	90                   	nop
  47e77b:	90                   	nop
  47e77c:	90                   	nop
  47e77d:	90                   	nop
  47e77e:	90                   	nop
  47e77f:	90                   	nop
  47e780:	8b 91 30 01 00 00    	mov    edx,DWORD PTR [ecx+0x130]
  47e786:	b0 01                	mov    al,0x1
  47e788:	88 41 6c             	mov    BYTE PTR [ecx+0x6c],al
  47e78b:	88 41 7a             	mov    BYTE PTR [ecx+0x7a],al
  47e78e:	33 c0                	xor    eax,eax
  47e790:	89 91 0c 01 00 00    	mov    DWORD PTR [ecx+0x10c],edx
  47e796:	89 41 54             	mov    DWORD PTR [ecx+0x54],eax
  47e799:	88 41 79             	mov    BYTE PTR [ecx+0x79],al
  47e79c:	89 81 b4 00 00 00    	mov    DWORD PTR [ecx+0xb4],eax
  47e7a2:	e9 09 00 00 00       	jmp    0x47e7b0
  47e7a7:	90                   	nop
  47e7a8:	90                   	nop
  47e7a9:	90                   	nop
  47e7aa:	90                   	nop
  47e7ab:	90                   	nop
  47e7ac:	90                   	nop
  47e7ad:	90                   	nop
  47e7ae:	90                   	nop
  47e7af:	90                   	nop
  47e7b0:	56                   	push   esi
  47e7b1:	8b f1                	mov    esi,ecx
  47e7b3:	d9 86 c0 00 00 00    	fld    DWORD PTR [esi+0xc0]
  47e7b9:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e7bf:	df e0                	fnstsw ax
  47e7c1:	f6 c4 41             	test   ah,0x41
  47e7c4:	74 04                	je     0x47e7ca
  47e7c6:	6a ff                	push   0xffffffff
  47e7c8:	eb 0c                	jmp    0x47e7d6
  47e7ca:	d9 86 40 01 00 00    	fld    DWORD PTR [esi+0x140]
  47e7d0:	e8 4b c3 18 00       	call   0x60ab20
  47e7d5:	50                   	push   eax
  47e7d6:	8d 4e 1c             	lea    ecx,[esi+0x1c]
  47e7d9:	e8 d2 59 f8 ff       	call   0x4041b0
  47e7de:	d9 86 e0 00 00 00    	fld    DWORD PTR [esi+0xe0]
  47e7e4:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e7ea:	df e0                	fnstsw ax
  47e7ec:	f6 c4 41             	test   ah,0x41
  47e7ef:	74 04                	je     0x47e7f5
  47e7f1:	6a ff                	push   0xffffffff
  47e7f3:	eb 0c                	jmp    0x47e801
  47e7f5:	d9 86 e4 00 00 00    	fld    DWORD PTR [esi+0xe4]
  47e7fb:	e8 20 c3 18 00       	call   0x60ab20
  47e800:	50                   	push   eax
  47e801:	8d 8e d0 00 00 00    	lea    ecx,[esi+0xd0]
  47e807:	e8 a4 59 f8 ff       	call   0x4041b0
  47e80c:	d9 86 fc 00 00 00    	fld    DWORD PTR [esi+0xfc]
  47e812:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e818:	df e0                	fnstsw ax
  47e81a:	f6 c4 41             	test   ah,0x41
  47e81d:	74 04                	je     0x47e823
  47e81f:	6a ff                	push   0xffffffff
  47e821:	eb 0c                	jmp    0x47e82f
  47e823:	d9 86 00 01 00 00    	fld    DWORD PTR [esi+0x100]
  47e829:	e8 f2 c2 18 00       	call   0x60ab20
  47e82e:	50                   	push   eax
  47e82f:	8d 8e ec 00 00 00    	lea    ecx,[esi+0xec]
  47e835:	e8 76 59 f8 ff       	call   0x4041b0
  47e83a:	6a ff                	push   0xffffffff
  47e83c:	8d 8e 84 00 00 00    	lea    ecx,[esi+0x84]
  47e842:	e8 69 59 f8 ff       	call   0x4041b0
  47e847:	5e                   	pop    esi
  47e848:	c3                   	ret
  47e849:	90                   	nop
  47e84a:	90                   	nop
  47e84b:	90                   	nop
  47e84c:	90                   	nop
  47e84d:	90                   	nop
  47e84e:	90                   	nop
  47e84f:	90                   	nop
  47e850:	83 ec 3c             	sub    esp,0x3c
  47e853:	53                   	push   ebx
  47e854:	56                   	push   esi
  47e855:	8b f1                	mov    esi,ecx
  47e857:	32 db                	xor    bl,bl
  47e859:	38 5e 6c             	cmp    BYTE PTR [esi+0x6c],bl
  47e85c:	0f 84 fa 01 00 00    	je     0x47ea5c
  47e862:	38 5e 5c             	cmp    BYTE PTR [esi+0x5c],bl
  47e865:	75 0b                	jne    0x47e872
  47e867:	88 5e 6c             	mov    BYTE PTR [esi+0x6c],bl
  47e86a:	5e                   	pop    esi
  47e86b:	5b                   	pop    ebx
  47e86c:	83 c4 3c             	add    esp,0x3c
  47e86f:	c2 04 00             	ret    0x4
  47e872:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
  47e875:	8b 56 54             	mov    edx,DWORD PTR [esi+0x54]
  47e878:	55                   	push   ebp
  47e879:	8b 6c 24 4c          	mov    ebp,DWORD PTR [esp+0x4c]
  47e87d:	8d 48 ff             	lea    ecx,[eax-0x1]
  47e880:	57                   	push   edi
  47e881:	3b d1                	cmp    edx,ecx
  47e883:	c7 86 c4 00 00 00 00 	mov    DWORD PTR [esi+0xc4],0x41a00000
  47e88a:	00 a0 41 
  47e88d:	7c 77                	jl     0x47e906
  47e88f:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
  47e892:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e896:	8d 04 40             	lea    eax,[eax+eax*2]
  47e899:	52                   	push   edx
  47e89a:	8d 56 04             	lea    edx,[esi+0x4]
  47e89d:	8d 4c 81 f4          	lea    ecx,[ecx+eax*4-0xc]
  47e8a1:	e8 3a 47 13 00       	call   0x5b2fe0
  47e8a6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47e8aa:	e8 71 46 13 00       	call   0x5b2f20
  47e8af:	dd d8                	fstp   st(0)
  47e8b1:	55                   	push   ebp
  47e8b2:	e8 79 b5 f8 ff       	call   0x409e30
  47e8b7:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  47e8bd:	83 c4 04             	add    esp,0x4
  47e8c0:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  47e8c6:	df e0                	fnstsw ax
  47e8c8:	f6 c4 41             	test   ah,0x41
  47e8cb:	75 08                	jne    0x47e8d5
  47e8cd:	dd d8                	fstp   st(0)
  47e8cf:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e8d5:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e8db:	d8 e1                	fsub   st,st(1)
  47e8dd:	51                   	push   ecx
  47e8de:	8d 7e 10             	lea    edi,[esi+0x10]
  47e8e1:	8b d7                	mov    edx,edi
  47e8e3:	8b cf                	mov    ecx,edi
  47e8e5:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e8e8:	dd d8                	fstp   st(0)
  47e8ea:	e8 b1 46 13 00       	call   0x5b2fa0
  47e8ef:	8b cf                	mov    ecx,edi
  47e8f1:	e8 da 46 13 00       	call   0x5b2fd0
  47e8f6:	d8 1d 04 e3 64 00    	fcomp  DWORD PTR ds:0x64e304
  47e8fc:	df e0                	fnstsw ax
  47e8fe:	f6 c4 01             	test   ah,0x1
  47e901:	74 03                	je     0x47e906
  47e903:	88 5e 7a             	mov    BYTE PTR [esi+0x7a],bl
  47e906:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
  47e909:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
  47e90c:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e910:	8d 5e 04             	lea    ebx,[esi+0x4]
  47e913:	8d 04 40             	lea    eax,[eax+eax*2]
  47e916:	52                   	push   edx
  47e917:	8b d3                	mov    edx,ebx
  47e919:	8d 0c 81             	lea    ecx,[ecx+eax*4]
  47e91c:	e8 bf 46 13 00       	call   0x5b2fe0
  47e921:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47e925:	e8 f6 45 13 00       	call   0x5b2f20
  47e92a:	d8 96 c4 00 00 00    	fcom   DWORD PTR [esi+0xc4]
  47e930:	df e0                	fnstsw ax
  47e932:	f6 c4 01             	test   ah,0x1
  47e935:	74 0f                	je     0x47e946
  47e937:	8b 56 50             	mov    edx,DWORD PTR [esi+0x50]
  47e93a:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
  47e93d:	4a                   	dec    edx
  47e93e:	3b c2                	cmp    eax,edx
  47e940:	7d 04                	jge    0x47e946
  47e942:	40                   	inc    eax
  47e943:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
  47e946:	d9 05 f0 e2 64 00    	fld    DWORD PTR ds:0x64e2f0
  47e94c:	d8 c9                	fmul   st,st(1)
  47e94e:	de c9                	fmulp  st(1),st
  47e950:	d9 56 3c             	fst    DWORD PTR [esi+0x3c]
  47e953:	d8 1d f4 e2 64 00    	fcomp  DWORD PTR ds:0x64e2f4
  47e959:	df e0                	fnstsw ax
  47e95b:	f6 c4 41             	test   ah,0x41
  47e95e:	75 08                	jne    0x47e968
  47e960:	a1 f4 e2 64 00       	mov    eax,ds:0x64e2f4
  47e965:	89 46 3c             	mov    DWORD PTR [esi+0x3c],eax
  47e968:	8b 4e 3c             	mov    ecx,DWORD PTR [esi+0x3c]
  47e96b:	8d 7e 40             	lea    edi,[esi+0x40]
  47e96e:	51                   	push   ecx
  47e96f:	8b d7                	mov    edx,edi
  47e971:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47e975:	e8 26 46 13 00       	call   0x5b2fa0
  47e97a:	83 c6 10             	add    esi,0x10
  47e97d:	55                   	push   ebp
  47e97e:	8b d6                	mov    edx,esi
  47e980:	8b 02                	mov    eax,DWORD PTR [edx]
  47e982:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47e986:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47e989:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  47e98d:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47e990:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  47e994:	e8 97 b4 f8 ff       	call   0x409e30
  47e999:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  47e99f:	8b cf                	mov    ecx,edi
  47e9a1:	8b d7                	mov    edx,edi
  47e9a3:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e9a6:	e8 f5 45 13 00       	call   0x5b2fa0
  47e9ab:	8d 44 24 10          	lea    eax,[esp+0x10]
  47e9af:	8b d7                	mov    edx,edi
  47e9b1:	50                   	push   eax
  47e9b2:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47e9b6:	e8 45 46 13 00       	call   0x5b3000
  47e9bb:	8b cb                	mov    ecx,ebx
  47e9bd:	55                   	push   ebp
  47e9be:	8d 7c 24 44          	lea    edi,[esp+0x44]
  47e9c2:	8b 11                	mov    edx,DWORD PTR [ecx]
  47e9c4:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  47e9c8:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  47e9cb:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  47e9cf:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  47e9d2:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  47e9d6:	e8 55 b4 f8 ff       	call   0x409e30
  47e9db:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e9de:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47e9e2:	8b d7                	mov    edx,edi
  47e9e4:	e8 b7 45 13 00       	call   0x5b2fa0
  47e9e9:	8d 54 24 34          	lea    edx,[esp+0x34]
  47e9ed:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47e9f1:	52                   	push   edx
  47e9f2:	8d 54 24 44          	lea    edx,[esp+0x44]
  47e9f6:	e8 05 46 13 00       	call   0x5b3000
  47e9fb:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  47e9ff:	e8 cc 45 13 00       	call   0x5b2fd0
  47ea04:	d8 15 f8 e2 64 00    	fcom   DWORD PTR ds:0x64e2f8
  47ea0a:	5f                   	pop    edi
  47ea0b:	5d                   	pop    ebp
  47ea0c:	df e0                	fnstsw ax
  47ea0e:	f6 c4 41             	test   ah,0x41
  47ea11:	75 1f                	jne    0x47ea32
  47ea13:	d8 35 f8 e2 64 00    	fdiv   DWORD PTR ds:0x64e2f8
  47ea19:	51                   	push   ecx
  47ea1a:	8d 54 24 0c          	lea    edx,[esp+0xc]
  47ea1e:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  47ea22:	d8 3d 54 a3 64 00    	fdivr  DWORD PTR ds:0x64a354
  47ea28:	d9 1c 24             	fstp   DWORD PTR [esp]
  47ea2b:	e8 70 45 13 00       	call   0x5b2fa0
  47ea30:	eb 02                	jmp    0x47ea34
  47ea32:	dd d8                	fstp   st(0)
  47ea34:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  47ea38:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  47ea3c:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  47ea40:	89 06                	mov    DWORD PTR [esi],eax
  47ea42:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47ea46:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  47ea49:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47ea4d:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47ea50:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  47ea54:	89 03                	mov    DWORD PTR [ebx],eax
  47ea56:	89 4b 04             	mov    DWORD PTR [ebx+0x4],ecx
  47ea59:	89 53 08             	mov    DWORD PTR [ebx+0x8],edx
  47ea5c:	5e                   	pop    esi
  47ea5d:	5b                   	pop    ebx
  47ea5e:	83 c4 3c             	add    esp,0x3c
  47ea61:	c2 04 00             	ret    0x4
  47ea64:	90                   	nop
  47ea65:	90                   	nop
  47ea66:	90                   	nop
  47ea67:	90                   	nop
  47ea68:	90                   	nop
  47ea69:	90                   	nop
  47ea6a:	90                   	nop
  47ea6b:	90                   	nop
  47ea6c:	90                   	nop
  47ea6d:	90                   	nop
  47ea6e:	90                   	nop
  47ea6f:	90                   	nop
