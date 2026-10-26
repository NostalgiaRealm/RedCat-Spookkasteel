
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0044cacf <.text+0x4bacf>:
  44cacf:	d9 86 20 02 00 00    	fld    DWORD PTR [esi+0x220]
  44cad5:	8d be 34 02 00 00    	lea    edi,[esi+0x234]
  44cadb:	d9 54 24 78          	fst    DWORD PTR [esp+0x78]
  44cadf:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  44cae5:	8b cf                	mov    ecx,edi
  44cae7:	8b 11                	mov    edx,DWORD PTR [ecx]
  44cae9:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  44caed:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  44caf0:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  44caf4:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  44caf7:	df e0                	fnstsw ax
  44caf9:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  44cafd:	f6 c4 41             	test   ah,0x41
  44cb00:	75 28                	jne    0x44cb2a
  44cb02:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  44cb06:	e8 c5 64 16 00       	call   0x5b2fd0
  44cb0b:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  44cb0f:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  44cb13:	51                   	push   ecx
  44cb14:	8d 54 24 20          	lea    edx,[esp+0x20]
  44cb18:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  44cb1c:	d8 c1                	fadd   st,st(1)
  44cb1e:	d8 f1                	fdiv   st,st(1)
  44cb20:	d9 1c 24             	fstp   DWORD PTR [esp]
  44cb23:	dd d8                	fstp   st(0)
  44cb25:	e8 76 64 16 00       	call   0x5b2fa0
  44cb2a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  44cb2e:	e8 9d 64 16 00       	call   0x5b2fd0
  44cb33:	d8 96 08 02 00 00    	fcom   DWORD PTR [esi+0x208]
  44cb39:	df e0                	fnstsw ax
  44cb3b:	f6 c4 41             	test   ah,0x41
  44cb3e:	75 1d                	jne    0x44cb5d
  44cb40:	d9 86 08 02 00 00    	fld    DWORD PTR [esi+0x208]
  44cb46:	d8 f1                	fdiv   st,st(1)
  44cb48:	51                   	push   ecx
  44cb49:	8d 54 24 20          	lea    edx,[esp+0x20]
  44cb4d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  44cb51:	d9 1c 24             	fstp   DWORD PTR [esp]
  44cb54:	dd d8                	fstp   st(0)
  44cb56:	e8 45 64 16 00       	call   0x5b2fa0
  44cb5b:	eb 02                	jmp    0x44cb5f
  44cb5d:	dd d8                	fstp   st(0)
  44cb5f:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  44cb63:	d8 8e f0 01 00 00    	fmul   DWORD PTR [esi+0x1f0]
  44cb69:	8b 16                	mov    edx,DWORD PTR [esi]
  44cb6b:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  44cb6f:	50                   	push   eax
  44cb70:	8b ce                	mov    ecx,esi
  44cb72:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  44cb78:	d8 6c 24 24          	fsubr  DWORD PTR [esp+0x24]
  44cb7c:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  44cb80:	ff 52 48             	call   DWORD PTR [edx+0x48]
  44cb83:	8b 08                	mov    ecx,DWORD PTR [eax]
  44cb85:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  44cb89:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  44cb8d:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  44cb90:	51                   	push   ecx
  44cb91:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  44cb95:	8d 54 24 44          	lea    edx,[esp+0x44]
  44cb99:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  44cb9c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  44cba0:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  44cba4:	e8 f7 63 16 00       	call   0x5b2fa0
  44cba9:	8d 54 24 34          	lea    edx,[esp+0x34]
  44cbad:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  44cbb1:	52                   	push   edx
  44cbb2:	8d 54 24 44          	lea    edx,[esp+0x44]
  44cbb6:	e8 45 64 16 00       	call   0x5b3000
  44cbbb:	8b 8e 9c 01 00 00    	mov    ecx,DWORD PTR [esi+0x19c]
  44cbc1:	b2 01                	mov    dl,0x1
  44cbc3:	83 f9 ff             	cmp    ecx,0xffffffff
  44cbc6:	89 4c 24 7c          	mov    DWORD PTR [esp+0x7c],ecx
  44cbca:	74 4d                	je     0x44cc19
  44cbcc:	8b 86 a0 01 00 00    	mov    eax,DWORD PTR [esi+0x1a0]
  44cbd2:	83 f8 ff             	cmp    eax,0xffffffff
  44cbd5:	75 14                	jne    0x44cbeb
  44cbd7:	03 cb                	add    ecx,ebx
  44cbd9:	c7 86 a4 01 00 00 00 	mov    DWORD PTR [esi+0x1a4],0x3f800000
  44cbe0:	00 80 3f 
  44cbe3:	89 8e a0 01 00 00    	mov    DWORD PTR [esi+0x1a0],ecx
  44cbe9:	eb 2e                	jmp    0x44cc19
  44cbeb:	3b d8                	cmp    ebx,eax
  44cbed:	7e 0a                	jle    0x44cbf9
  44cbef:	89 ae a4 01 00 00    	mov    DWORD PTR [esi+0x1a4],ebp
  44cbf5:	32 d2                	xor    dl,dl
  44cbf7:	eb 20                	jmp    0x44cc19
  44cbf9:	3b cd                	cmp    ecx,ebp
  44cbfb:	7e 16                	jle    0x44cc13
  44cbfd:	2b c3                	sub    eax,ebx
  44cbff:	89 44 24 78          	mov    DWORD PTR [esp+0x78],eax
  44cc03:	db 44 24 78          	fild   DWORD PTR [esp+0x78]
  44cc07:	da 74 24 7c          	fidiv  DWORD PTR [esp+0x7c]
  44cc0b:	d9 9e a4 01 00 00    	fstp   DWORD PTR [esi+0x1a4]
  44cc11:	eb 06                	jmp    0x44cc19
  44cc13:	89 ae a4 01 00 00    	mov    DWORD PTR [esi+0x1a4],ebp
  44cc19:	84 d2                	test   dl,dl
  44cc1b:	88 96 a8 01 00 00    	mov    BYTE PTR [esi+0x1a8],dl
  44cc21:	75 53                	jne    0x44cc76
  44cc23:	8b 96 cc 01 00 00    	mov    edx,DWORD PTR [esi+0x1cc]
  44cc29:	8d 8e bc 01 00 00    	lea    ecx,[esi+0x1bc]
  44cc2f:	42                   	inc    edx
  44cc30:	89 96 cc 01 00 00    	mov    DWORD PTR [esi+0x1cc],edx
  44cc36:	e8 85 18 00 00       	call   0x44e4c0
  44cc3b:	39 86 cc 01 00 00    	cmp    DWORD PTR [esi+0x1cc],eax
  44cc41:	7c 06                	jl     0x44cc49
  44cc43:	89 ae cc 01 00 00    	mov    DWORD PTR [esi+0x1cc],ebp
  44cc49:	8d 86 0c 02 00 00    	lea    eax,[esi+0x20c]
  44cc4f:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
  44cc55:	89 8e 9c 01 00 00    	mov    DWORD PTR [esi+0x19c],ecx
  44cc5b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  44cc5e:	89 96 a0 01 00 00    	mov    DWORD PTR [esi+0x1a0],edx
  44cc64:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  44cc67:	89 8e a4 01 00 00    	mov    DWORD PTR [esi+0x1a4],ecx
  44cc6d:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
  44cc70:	89 96 a8 01 00 00    	mov    DWORD PTR [esi+0x1a8],edx
  44cc76:	8b 86 cc 01 00 00    	mov    eax,DWORD PTR [esi+0x1cc]
  44cc7c:	8d 8e bc 01 00 00    	lea    ecx,[esi+0x1bc]
  44cc82:	50                   	push   eax
  44cc83:	e8 d8 15 00 00       	call   0x44e260
  44cc88:	8b 10                	mov    edx,DWORD PTR [eax]
  44cc8a:	51                   	push   ecx
  44cc8b:	8b cc                	mov    ecx,esp
  44cc8d:	89 64 24 7c          	mov    DWORD PTR [esp+0x7c],esp
  44cc91:	89 11                	mov    DWORD PTR [ecx],edx
  44cc93:	e8 18 78 13 00       	call   0x5844b0
  44cc98:	8b ce                	mov    ecx,esi
  44cc9a:	e8 e1 a5 fe ff       	call   0x437280
  44cc9f:	8d 44 24 34          	lea    eax,[esp+0x34]
  44cca3:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  44cca7:	50                   	push   eax
  44cca8:	51                   	push   ecx
  44cca9:	8b ce                	mov    ecx,esi
  44ccab:	e8 80 00 00 00       	call   0x44cd30
  44ccb0:	84 c0                	test   al,al
  44ccb2:	75 66                	jne    0x44cd1a
  44ccb4:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  44ccb8:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  44ccbc:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  44ccc0:	89 17                	mov    DWORD PTR [edi],edx
  44ccc2:	8b 16                	mov    edx,DWORD PTR [esi]
  44ccc4:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  44ccc7:	8d 44 24 34          	lea    eax,[esp+0x34]
  44cccb:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
  44ccce:	50                   	push   eax
  44cccf:	8b ce                	mov    ecx,esi
  44ccd1:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
