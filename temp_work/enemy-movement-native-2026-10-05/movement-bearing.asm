  5b15f0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5b15f4:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  5b15f7:	d9 e0                	fchs
  5b15f9:	d9 00                	fld    DWORD PTR [eax]
  5b15fb:	d9 f3                	fpatan
  5b15fd:	c3                   	ret
  5b15fe:	90                   	nop
  5b15ff:	90                   	nop
  5b1600:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5b1604:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5b1608:	83 ec 0c             	sub    esp,0xc
  5b160b:	8d 44 24 00          	lea    eax,[esp+0x0]
  5b160f:	50                   	push   eax
  5b1610:	e8 cb 19 00 00       	call   0x5b2fe0
  5b1615:	8d 4c 24 00          	lea    ecx,[esp+0x0]
  5b1619:	51                   	push   ecx
  5b161a:	e8 d1 ff ff ff       	call   0x5b15f0
  5b161f:	83 c4 10             	add    esp,0x10
  5b1622:	c3                   	ret
