  404470:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  404474:	56                   	push   esi
  404475:	8b f1                	mov    esi,ecx
  404477:	50                   	push   eax
  404478:	e8 03 67 00 00       	call   0x40ab80
  40447d:	c7 06 a4 a4 64 00    	mov    DWORD PTR [esi],0x64a4a4
  404483:	8b c6                	mov    eax,esi
  404485:	5e                   	pop    esi
  404486:	c2 04 00             	ret    0x4
  404489:	90                   	nop
  40448a:	90                   	nop
  40448b:	90                   	nop
  40448c:	90                   	nop
  40448d:	90                   	nop
  40448e:	90                   	nop
  40448f:	90                   	nop
  404490:	6a ff                	push   0xffffffff
  404492:	68 db fc 61 00       	push   0x61fcdb
  404497:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40449d:	50                   	push   eax
  40449e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4044a5:	51                   	push   ecx
  4044a6:	56                   	push   esi
  4044a7:	8b f1                	mov    esi,ecx
  4044a9:	6a 4c                	push   0x4c
  4044ab:	e8 05 5c 20 00       	call   0x60a0b5
  4044b0:	83 c4 04             	add    esp,0x4
  4044b3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  4044b7:	85 c0                	test   eax,eax
  4044b9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  4044c0:	00 
  4044c1:	74 12                	je     0x4044d5
  4044c3:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4044c6:	68 88 13 00 00       	push   0x1388
  4044cb:	51                   	push   ecx
  4044cc:	8b c8                	mov    ecx,eax
  4044ce:	e8 ed 17 00 00       	call   0x405cc0
  4044d3:	eb 02                	jmp    0x4044d7
  4044d5:	33 c0                	xor    eax,eax
  4044d7:	50                   	push   eax
  4044d8:	6a 05                	push   0x5
  4044da:	8b ce                	mov    ecx,esi
  4044dc:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  4044e3:	ff 
  4044e4:	e8 27 e5 ff ff       	call   0x402a10
  4044e9:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4044ed:	5e                   	pop    esi
  4044ee:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4044f5:	83 c4 10             	add    esp,0x10
  4044f8:	c3                   	ret
  4044f9:	90                   	nop
  4044fa:	90                   	nop
  4044fb:	90                   	nop
  4044fc:	90                   	nop
  4044fd:	90                   	nop
  4044fe:	90                   	nop
  4044ff:	90                   	nop
