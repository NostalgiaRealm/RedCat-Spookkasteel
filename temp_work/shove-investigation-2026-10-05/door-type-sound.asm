
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004cc140 <.text+0xcb140>:
  4cc140:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4cc146:	6a ff                	push   0xffffffff
  4cc148:	68 80 0d 63 00       	push   0x630d80
  4cc14d:	50                   	push   eax
  4cc14e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4cc155:	83 ec 40             	sub    esp,0x40
  4cc158:	53                   	push   ebx
  4cc159:	55                   	push   ebp
  4cc15a:	56                   	push   esi
  4cc15b:	8b f1                	mov    esi,ecx
  4cc15d:	33 db                	xor    ebx,ebx
  4cc15f:	8b 8e 8c 01 00 00    	mov    ecx,DWORD PTR [esi+0x18c]
  4cc165:	83 f9 04             	cmp    ecx,0x4
  4cc168:	77 25                	ja     0x4cc18f
  4cc16a:	ff 24 8d 28 c3 4c 00 	jmp    DWORD PTR [ecx*4+0x4cc328]
  4cc171:	bd 08 a4 6b 00       	mov    ebp,0x6ba408
  4cc176:	eb 13                	jmp    0x4cc18b
  4cc178:	bd e0 a3 6b 00       	mov    ebp,0x6ba3e0
  4cc17d:	eb 0c                	jmp    0x4cc18b
  4cc17f:	bd b8 a3 6b 00       	mov    ebp,0x6ba3b8
  4cc184:	eb 05                	jmp    0x4cc18b
  4cc186:	bd 88 a3 6b 00       	mov    ebp,0x6ba388
  4cc18b:	3b eb                	cmp    ebp,ebx
  4cc18d:	75 77                	jne    0x4cc206
