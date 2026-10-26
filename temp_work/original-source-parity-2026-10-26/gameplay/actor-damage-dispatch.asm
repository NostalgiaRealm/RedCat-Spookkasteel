
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00504180 <.text+0x103180>:
  504180:	ff 84 c0 74 0a 3c ff 	inc    DWORD PTR [eax+eax*8-0xc3f58c]
  504187:	74 06                	je     0x50418f
  504189:	fe c8                	dec    al
  50418b:	88 01                	mov    BYTE PTR [ecx],al
  50418d:	eb 0e                	jmp    0x50419d
  50418f:	51                   	push   ecx
  504190:	e8 5b a4 0f 00       	call   0x5fe5f0
  504195:	83 c4 04             	add    esp,0x4
  504198:	eb 03                	jmp    0x50419d
  50419a:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  50419d:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  5041a0:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
  5041a3:	8b 07                	mov    eax,DWORD PTR [edi]
  5041a5:	56                   	push   esi
  5041a6:	51                   	push   ecx
  5041a7:	52                   	push   edx
  5041a8:	8b cf                	mov    ecx,edi
  5041aa:	ff 50 1c             	call   DWORD PTR [eax+0x1c]
  5041ad:	8d 4d e8             	lea    ecx,[ebp-0x18]
  5041b0:	c7 45 fc ff ff ff ff 	mov    DWORD PTR [ebp-0x4],0xffffffff
  5041b7:	e8 b4 a5 0a 00       	call   0x5ae770
  5041bc:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  5041bf:	5f                   	pop    edi
  5041c0:	5e                   	pop    esi
  5041c1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5041c8:	5b                   	pop    ebx
  5041c9:	8b e5                	mov    esp,ebp
  5041cb:	5d                   	pop    ebp
  5041cc:	c2 0c 00             	ret    0xc
