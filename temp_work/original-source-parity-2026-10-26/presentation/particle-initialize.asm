
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047db60 <.text+0x7cb60>:
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
