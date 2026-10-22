
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0049e310 <.text+0x9d310>:
  49e310:	6a ff                	push   0xffffffff
  49e312:	68 90 cb 62 00       	push   0x62cb90
  49e317:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49e31d:	50                   	push   eax
  49e31e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49e325:	83 ec 44             	sub    esp,0x44
  49e328:	53                   	push   ebx
  49e329:	55                   	push   ebp
  49e32a:	56                   	push   esi
  49e32b:	57                   	push   edi
  49e32c:	8b 7c 24 64          	mov    edi,DWORD PTR [esp+0x64]
  49e330:	8b e9                	mov    ebp,ecx
  49e332:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  49e336:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  49e339:	85 c0                	test   eax,eax
  49e33b:	75 05                	jne    0x49e342
  49e33d:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49e342:	68 30 50 69 00       	push   0x695030
  49e347:	50                   	push   eax
  49e348:	e8 a3 b2 17 00       	call   0x6195f0
  49e34d:	83 c4 08             	add    esp,0x8
  49e350:	85 c0                	test   eax,eax
  49e352:	75 26                	jne    0x49e37a
  49e354:	80 bd 0d 02 00 00 01 	cmp    BYTE PTR [ebp+0x20d],0x1
  49e35b:	74 16                	je     0x49e373
  49e35d:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
  49e360:	c6 85 0d 02 00 00 01 	mov    BYTE PTR [ebp+0x20d],0x1
  49e367:	85 c0                	test   eax,eax
  49e369:	74 08                	je     0x49e373
  49e36b:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  49e36e:	8b cd                	mov    ecx,ebp
  49e370:	ff 50 60             	call   DWORD PTR [eax+0x60]
  49e373:	b0 01                	mov    al,0x1
  49e375:	e9 0f 06 00 00       	jmp    0x49e989
  49e37a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  49e37d:	85 c0                	test   eax,eax
  49e37f:	75 05                	jne    0x49e386
  49e381:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49e386:	68 20 50 69 00       	push   0x695020
  49e38b:	50                   	push   eax
  49e38c:	e8 5f b2 17 00       	call   0x6195f0
  49e391:	83 c4 08             	add    esp,0x8
  49e394:	85 c0                	test   eax,eax
  49e396:	75 27                	jne    0x49e3bf
  49e398:	8a 85 0d 02 00 00    	mov    al,BYTE PTR [ebp+0x20d]
  49e39e:	84 c0                	test   al,al
  49e3a0:	74 16                	je     0x49e3b8
  49e3a2:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
  49e3a5:	c6 85 0d 02 00 00 00 	mov    BYTE PTR [ebp+0x20d],0x0
  49e3ac:	85 c0                	test   eax,eax
  49e3ae:	74 08                	je     0x49e3b8
  49e3b0:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  49e3b3:	8b cd                	mov    ecx,ebp
  49e3b5:	ff 52 60             	call   DWORD PTR [edx+0x60]
  49e3b8:	b0 01                	mov    al,0x1
  49e3ba:	e9 ca 05 00 00       	jmp    0x49e989
