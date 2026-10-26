
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0046e4b0 <.text+0x6d4b0>:
  46e4b0:	83 ec 24             	sub    esp,0x24
  46e4b3:	8d 44 24 18          	lea    eax,[esp+0x18]
  46e4b7:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  46e4bb:	53                   	push   ebx
  46e4bc:	56                   	push   esi
  46e4bd:	8b f1                	mov    esi,ecx
  46e4bf:	50                   	push   eax
  46e4c0:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  46e4c4:	e8 17 4b 14 00       	call   0x5b2fe0
  46e4c9:	8a 44 24 4c          	mov    al,BYTE PTR [esp+0x4c]
  46e4cd:	33 db                	xor    ebx,ebx
  46e4cf:	3a c3                	cmp    al,bl
  46e4d1:	74 09                	je     0x46e4dc
  46e4d3:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  46e4d7:	e8 a4 4b 14 00       	call   0x5b3080
  46e4dc:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  46e4e0:	8d 54 24 08          	lea    edx,[esp+0x8]
  46e4e4:	51                   	push   ecx
  46e4e5:	8d 44 24 24          	lea    eax,[esp+0x24]
  46e4e9:	52                   	push   edx
  46e4ea:	50                   	push   eax
  46e4eb:	8b ce                	mov    ecx,esi
  46e4ed:	e8 5e 98 00 00       	call   0x477d50
  46e4f2:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  46e4f6:	8d 54 24 08          	lea    edx,[esp+0x8]
  46e4fa:	51                   	push   ecx
  46e4fb:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  46e4ff:	e8 9c 4a 14 00       	call   0x5b2fa0
  46e504:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  46e508:	8d 54 24 14          	lea    edx,[esp+0x14]
  46e50c:	50                   	push   eax
  46e50d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  46e511:	e8 8a 4a 14 00       	call   0x5b2fa0
  46e516:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  46e51a:	d8 5c 24 38          	fcomp  DWORD PTR [esp+0x38]
  46e51e:	df e0                	fnstsw ax
  46e520:	f6 c4 41             	test   ah,0x41
  46e523:	75 12                	jne    0x46e537
  46e525:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  46e529:	e8 52 4b 14 00       	call   0x5b3080
  46e52e:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  46e532:	e8 49 4b 14 00       	call   0x5b3080
  46e537:	d9 05 60 dd 64 00    	fld    DWORD PTR ds:0x64dd60
  46e53d:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  46e541:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  46e545:	b9 00 00 80 3f       	mov    ecx,0x3f800000
  46e54a:	5e                   	pop    esi
  46e54b:	d8 64 24 04          	fsub   DWORD PTR [esp+0x4]
  46e54f:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  46e553:	d9 18                	fstp   DWORD PTR [eax]
  46e555:	d9 05 64 dd 64 00    	fld    DWORD PTR ds:0x64dd64
  46e55b:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  46e55f:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  46e563:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  46e567:	d9 58 04             	fstp   DWORD PTR [eax+0x4]
  46e56a:	d9 05 68 dd 64 00    	fld    DWORD PTR ds:0x64dd68
  46e570:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  46e574:	89 58 0c             	mov    DWORD PTR [eax+0xc],ebx
  46e577:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
  46e57a:	d8 64 24 0c          	fsub   DWORD PTR [esp+0xc]
  46e57e:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  46e582:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
  46e585:	d9 05 84 dd 64 00    	fld    DWORD PTR ds:0x64dd84
  46e58b:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  46e58f:	d8 44 24 04          	fadd   DWORD PTR [esp+0x4]
  46e593:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  46e597:	d9 58 24             	fstp   DWORD PTR [eax+0x24]
  46e59a:	d9 05 88 dd 64 00    	fld    DWORD PTR ds:0x64dd88
  46e5a0:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  46e5a4:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  46e5a8:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  46e5ac:	d9 58 28             	fstp   DWORD PTR [eax+0x28]
  46e5af:	d9 05 8c dd 64 00    	fld    DWORD PTR ds:0x64dd8c
  46e5b5:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  46e5b9:	89 48 30             	mov    DWORD PTR [eax+0x30],ecx
  46e5bc:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
  46e5bf:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
  46e5c3:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  46e5c7:	d9 58 2c             	fstp   DWORD PTR [eax+0x2c]
  46e5ca:	d9 05 a8 dd 64 00    	fld    DWORD PTR ds:0x64dda8
  46e5d0:	d8 44 24 04          	fadd   DWORD PTR [esp+0x4]
  46e5d4:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  46e5d8:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  46e5dc:	d9 58 48             	fstp   DWORD PTR [eax+0x48]
  46e5df:	d9 05 ac dd 64 00    	fld    DWORD PTR ds:0x64ddac
  46e5e5:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  46e5e9:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  46e5ed:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  46e5f1:	d9 58 4c             	fstp   DWORD PTR [eax+0x4c]
  46e5f4:	d9 05 b0 dd 64 00    	fld    DWORD PTR ds:0x64ddb0
  46e5fa:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
  46e5fe:	89 48 54             	mov    DWORD PTR [eax+0x54],ecx
  46e601:	89 58 58             	mov    DWORD PTR [eax+0x58],ebx
  46e604:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  46e608:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  46e60c:	d9 58 50             	fstp   DWORD PTR [eax+0x50]
  46e60f:	d9 05 cc dd 64 00    	fld    DWORD PTR ds:0x64ddcc
  46e615:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  46e619:	d8 64 24 04          	fsub   DWORD PTR [esp+0x4]
  46e61d:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  46e621:	d9 58 6c             	fstp   DWORD PTR [eax+0x6c]
  46e624:	d9 05 d0 dd 64 00    	fld    DWORD PTR ds:0x64ddd0
  46e62a:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  46e62e:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  46e632:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  46e636:	d9 58 70             	fstp   DWORD PTR [eax+0x70]
  46e639:	d9 05 d4 dd 64 00    	fld    DWORD PTR ds:0x64ddd4
  46e63f:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  46e643:	89 58 78             	mov    DWORD PTR [eax+0x78],ebx
  46e646:	89 58 7c             	mov    DWORD PTR [eax+0x7c],ebx
  46e649:	5b                   	pop    ebx
  46e64a:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  46e64e:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  46e652:	d9 58 74             	fstp   DWORD PTR [eax+0x74]
  46e655:	83 c4 24             	add    esp,0x24
  46e658:	c2 28 00             	ret    0x28
