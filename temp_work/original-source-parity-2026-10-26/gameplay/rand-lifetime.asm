
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0060a4a0 <.text+0x2094a0>:
  60a4a0:	a1 18 21 6b 00       	mov    eax,ds:0x6b2118
  60a4a5:	69 c0 fd 43 03 00    	imul   eax,eax,0x343fd
  60a4ab:	05 c3 9e 26 00       	add    eax,0x269ec3
  60a4b0:	a3 18 21 6b 00       	mov    ds:0x6b2118,eax
  60a4b5:	c1 f8 10             	sar    eax,0x10
  60a4b8:	25 ff 7f 00 00       	and    eax,0x7fff
  60a4bd:	c3                   	ret


/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00442e30 <.text+0x41e30>:
  442e30:	51                   	push   ecx
  442e31:	e8 6a 76 1c 00       	call   0x60a4a0
  442e36:	99                   	cdq
  442e37:	b9 10 27 00 00       	mov    ecx,0x2710
  442e3c:	f7 f9                	idiv   ecx
  442e3e:	89 54 24 00          	mov    DWORD PTR [esp+0x0],edx
  442e42:	db 44 24 00          	fild   DWORD PTR [esp+0x0]
  442e46:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  442e4a:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  442e4e:	de c9                	fmulp  st(1),st
  442e50:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  442e56:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  442e5a:	59                   	pop    ecx
  442e5b:	c3                   	ret


/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004432e0 <.text+0x422e0>:
  4432e0:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  4432e4:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  4432ea:	e9 31 78 1c 00       	jmp    0x60ab20
  4432ef:	90                   	nop
  4432f0:	8b c1                	mov    eax,ecx
  4432f2:	c6 40 04 00          	mov    BYTE PTR [eax+0x4],0x0
  4432f6:	c7 00 5c ca 64 00    	mov    DWORD PTR [eax],0x64ca5c
  4432fc:	c3                   	ret
  4432fd:	90                   	nop
  4432fe:	90                   	nop
  4432ff:	90                   	nop
  443300:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  443306:	6a ff                	push   0xffffffff
  443308:	68 71 4f 62 00       	push   0x624f71
  44330d:	50                   	push   eax
  44330e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  443315:	81 ec 04 01 00 00    	sub    esp,0x104
  44331b:	55                   	push   ebp
  44331c:	8b e9                	mov    ebp,ecx
  44331e:	8a                   	.byte 0x8a
  44331f:	45                   	inc    ebp
