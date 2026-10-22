
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00436ea0 <.text+0x35ea0>:
  436ea0:	6a 00                	push   0x0
  436ea2:	68 40 f9 68 00       	push   0x68f940
  436ea7:	68 18 f9 68 00       	push   0x68f918
  436eac:	6a 00                	push   0x0
  436eae:	e8 fd fe ff ff       	call   0x436db0
  436eb3:	50                   	push   eax
  436eb4:	e8 39 38 1d 00       	call   0x60a6f2
  436eb9:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  436ebd:	83 c4 14             	add    esp,0x14
  436ec0:	83 fa 04             	cmp    edx,0x4
  436ec3:	77 61                	ja     0x436f26
  436ec5:	ff 24 95 2c 6f 43 00 	jmp    DWORD PTR [edx*4+0x436f2c]
  436ecc:	ba 01 00 00 00       	mov    edx,0x1
  436ed1:	8b c8                	mov    ecx,eax
  436ed3:	52                   	push   edx
  436ed4:	e8 07 30 00 00       	call   0x439ee0
  436ed9:	b0 01                	mov    al,0x1
  436edb:	c2 04 00             	ret    0x4
  436ede:	ba 02 00 00 00       	mov    edx,0x2
  436ee3:	8b c8                	mov    ecx,eax
  436ee5:	52                   	push   edx
  436ee6:	e8 f5 2f 00 00       	call   0x439ee0
  436eeb:	b0 01                	mov    al,0x1
  436eed:	c2 04 00             	ret    0x4
  436ef0:	ba 04 00 00 00       	mov    edx,0x4
  436ef5:	8b c8                	mov    ecx,eax
  436ef7:	52                   	push   edx
  436ef8:	e8 e3 2f 00 00       	call   0x439ee0
  436efd:	b0 01                	mov    al,0x1
  436eff:	c2 04 00             	ret    0x4
  436f02:	ba 08 00 00 00       	mov    edx,0x8
  436f07:	8b c8                	mov    ecx,eax
  436f09:	52                   	push   edx
  436f0a:	e8 d1 2f 00 00       	call   0x439ee0
  436f0f:	b0 01                	mov    al,0x1
  436f11:	c2 04 00             	ret    0x4
  436f14:	ba 10 00 00 00       	mov    edx,0x10
  436f19:	8b c8                	mov    ecx,eax
  436f1b:	52                   	push   edx
  436f1c:	e8 bf 2f 00 00       	call   0x439ee0
  436f21:	b0 01                	mov    al,0x1
  436f23:	c2 04 00             	ret    0x4
  436f26:	32 c0                	xor    al,al
  436f28:	c2 04 00             	ret    0x4
  436f2b:	90                   	nop
  436f2c:	cc                   	int3
  436f2d:	6e                   	outs   dx,BYTE PTR ds:[esi]
  436f2e:	43                   	inc    ebx
  436f2f:	00 de                	add    dh,bl
  436f31:	6e                   	outs   dx,BYTE PTR ds:[esi]
  436f32:	43                   	inc    ebx
  436f33:	00 f0                	add    al,dh
  436f35:	6e                   	outs   dx,BYTE PTR ds:[esi]
  436f36:	43                   	inc    ebx
  436f37:	00 02                	add    BYTE PTR [edx],al
  436f39:	6f                   	outs   dx,DWORD PTR ds:[esi]
  436f3a:	43                   	inc    ebx
  436f3b:	00 14 6f             	add    BYTE PTR [edi+ebp*2],dl
  436f3e:	43                   	inc    ebx
	...
