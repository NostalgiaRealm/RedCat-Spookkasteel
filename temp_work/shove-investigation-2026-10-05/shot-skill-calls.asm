
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00434e30 <.text+0x33e30>:
  434e30:	8b 81 f0 01 00 00    	mov    eax,DWORD PTR [ecx+0x1f0]
  434e36:	56                   	push   esi
  434e37:	6a 00                	push   0x0
  434e39:	68 40 f9 68 00       	push   0x68f940
  434e3e:	68 18 f9 68 00       	push   0x68f918
  434e43:	6a 00                	push   0x0
  434e45:	50                   	push   eax
  434e46:	e8 a7 58 1d 00       	call   0x60a6f2
  434e4b:	83 c4 14             	add    esp,0x14
  434e4e:	8b f0                	mov    esi,eax
  434e50:	8b ce                	mov    ecx,esi
  434e52:	6a 04                	push   0x4
  434e54:	e8 b7 50 00 00       	call   0x439f10
  434e59:	84 c0                	test   al,al
  434e5b:	74 07                	je     0x434e64
  434e5d:	b8 0b 00 00 00       	mov    eax,0xb
  434e62:	5e                   	pop    esi
  434e63:	c3                   	ret
  434e64:	6a 02                	push   0x2
  434e66:	8b ce                	mov    ecx,esi
  434e68:	e8 a3 50 00 00       	call   0x439f10
  434e6d:	f6 d8                	neg    al
  434e6f:	1b c0                	sbb    eax,eax
  434e71:	5e                   	pop    esi
  434e72:	83 c0 09             	add    eax,0x9
  434e75:	c3                   	ret
