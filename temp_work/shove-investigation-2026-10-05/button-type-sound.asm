
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004cb180 <.text+0xca180>:
  4cb180:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4cb186:	6a ff                	push   0xffffffff
  4cb188:	68 48 0c 63 00       	push   0x630c48
  4cb18d:	50                   	push   eax
  4cb18e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4cb195:	8b 81 78 01 00 00    	mov    eax,DWORD PTR [ecx+0x178]
  4cb19b:	83 ec 30             	sub    esp,0x30
  4cb19e:	48                   	dec    eax
  4cb19f:	53                   	push   ebx
  4cb1a0:	55                   	push   ebp
  4cb1a1:	56                   	push   esi
  4cb1a2:	74 14                	je     0x4cb1b8
  4cb1a4:	48                   	dec    eax
  4cb1a5:	74 0a                	je     0x4cb1b1
  4cb1a7:	48                   	dec    eax
  4cb1a8:	75 19                	jne    0x4cb1c3
  4cb1aa:	bd 30 a4 6b 00       	mov    ebp,0x6ba430
  4cb1af:	eb 0c                	jmp    0x4cb1bd
  4cb1b1:	bd 58 a4 6b 00       	mov    ebp,0x6ba458
  4cb1b6:	eb 05                	jmp    0x4cb1bd
  4cb1b8:	bd 80 a4 6b 00       	mov    ebp,0x6ba480
  4cb1bd:	33 db                	xor    ebx,ebx
  4cb1bf:	3b eb                	cmp    ebp,ebx
  4cb1c1:	75 1f                	jne    0x4cb1e2
