  5995d0:	8b 41 70             	mov    eax,DWORD PTR [ecx+0x70]
  5995d3:	c3                   	ret
  5995d4:	90                   	nop
  5995d5:	90                   	nop
  5995d6:	90                   	nop
  5995d7:	90                   	nop
  5995d8:	90                   	nop
  5995d9:	90                   	nop
  5995da:	90                   	nop
  5995db:	90                   	nop
  5995dc:	90                   	nop
  5995dd:	90                   	nop
  5995de:	90                   	nop
  5995df:	90                   	nop
  5995e0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5995e4:	89 41 70             	mov    DWORD PTR [ecx+0x70],eax
  5995e7:	c2 04 00             	ret    0x4
  5995ea:	90                   	nop
  5995eb:	90                   	nop
  5995ec:	90                   	nop
  5995ed:	90                   	nop
  5995ee:	90                   	nop
  5995ef:	90                   	nop
  5995f0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5995f4:	89 81 94 00 00 00    	mov    DWORD PTR [ecx+0x94],eax
  5995fa:	c2 04 00             	ret    0x4
  5995fd:	90                   	nop
  5995fe:	90                   	nop
  5995ff:	90                   	nop
  599600:	6a ff                	push   0xffffffff
  599602:	68 b8 42 64 00       	push   0x6442b8
  599607:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59960d:	50                   	push   eax
  59960e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  599615:	83 ec 10             	sub    esp,0x10
  599618:	53                   	push   ebx
  599619:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
  59961d:	55                   	push   ebp
  59961e:	56                   	push   esi
  59961f:	8b e9                	mov    ebp,ecx
