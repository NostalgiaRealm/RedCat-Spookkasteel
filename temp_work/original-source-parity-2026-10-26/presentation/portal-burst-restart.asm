
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00474f20 <.text+0x73f20>:
  474f20:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  474f24:	83 ec 1c             	sub    esp,0x1c
  474f27:	53                   	push   ebx
  474f28:	55                   	push   ebp
  474f29:	33 db                	xor    ebx,ebx
  474f2b:	56                   	push   esi
  474f2c:	85 c0                	test   eax,eax
  474f2e:	57                   	push   edi
  474f2f:	8b e9                	mov    ebp,ecx
  474f31:	7e 0b                	jle    0x474f3e
  474f33:	3d fa 00 00 00       	cmp    eax,0xfa
  474f38:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  474f3c:	7c 08                	jl     0x474f46
  474f3e:	c7 44 24 30 fa 00 00 	mov    DWORD PTR [esp+0x30],0xfa
  474f45:	00 
  474f46:	33 ff                	xor    edi,edi
  474f48:	8d b5 74 06 00 00    	lea    esi,[ebp+0x674]
  474f4e:	3b 5c 24 30          	cmp    ebx,DWORD PTR [esp+0x30]
  474f52:	0f 8d ce 00 00 00    	jge    0x475026
  474f58:	8a 86 2c ff ff ff    	mov    al,BYTE PTR [esi-0xd4]
  474f5e:	84 c0                	test   al,al
  474f60:	0f 84 ad 00 00 00    	je     0x475013
  474f66:	8d 86 c4 fe ff ff    	lea    eax,[esi-0x13c]
  474f6c:	8b 8e c4 fe ff ff    	mov    ecx,DWORD PTR [esi-0x13c]
  474f72:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  474f76:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  474f7a:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  474f7d:	51                   	push   ecx
  474f7e:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  474f82:	8b 95 f8 00 00 00    	mov    edx,DWORD PTR [ebp+0xf8]
  474f88:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  474f8b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  474f8f:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  474f93:	e8 48 e0 13 00       	call   0x5b2fe0
  474f98:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  474f9c:	e8 7f df 13 00       	call   0x5b2f20
  474fa1:	8d 54 24 14          	lea    edx,[esp+0x14]
  474fa5:	68 00 00 dc 42       	push   0x42dc0000
  474faa:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  474fae:	dd d8                	fstp   st(0)
  474fb0:	e8 eb df 13 00       	call   0x5b2fa0
  474fb5:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  474fb9:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  474fbd:	8d 96 d0 fe ff ff    	lea    edx,[esi-0x130]
  474fc3:	89 86 d0 fe ff ff    	mov    DWORD PTR [esi-0x130],eax
  474fc9:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  474fcd:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  474fd0:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  474fd3:	c7 86 18 ff ff ff 01 	mov    DWORD PTR [esi-0xe8],0x1
  474fda:	00 00 00 
  474fdd:	d9 05 38 e0 64 00    	fld    DWORD PTR ds:0x64e038
  474fe3:	d9 56 80             	fst    DWORD PTR [esi-0x80]
  474fe6:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  474fec:	e8 2f 5b 19 00       	call   0x60ab20
  474ff1:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  474ff5:	8d 8e c0 fe ff ff    	lea    ecx,[esi-0x140]
  474ffb:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  474fff:	d9 1e                	fstp   DWORD PTR [esi]
  475001:	d9 05 8c 86 6b 00    	fld    DWORD PTR ds:0x6b868c
  475007:	d9 9e 7c ff ff ff    	fstp   DWORD PTR [esi-0x84]
  47500d:	e8 6e 97 00 00       	call   0x47e780
  475012:	43                   	inc    ebx
  475013:	47                   	inc    edi
  475014:	81 c6 44 01 00 00    	add    esi,0x144
  47501a:	81 ff fa 00 00 00    	cmp    edi,0xfa
  475020:	0f 8c 28 ff ff ff    	jl     0x474f4e
  475026:	5f                   	pop    edi
  475027:	5e                   	pop    esi
  475028:	5d                   	pop    ebp
  475029:	5b                   	pop    ebx
  47502a:	83 c4 1c             	add    esp,0x1c
  47502d:	c2 04 00             	ret    0x4
