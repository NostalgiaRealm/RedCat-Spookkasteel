
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00477260 <.text+0x76260>:
  477260:	83 ec 24             	sub    esp,0x24
  477263:	8d 44 24 18          	lea    eax,[esp+0x18]
  477267:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  47726b:	53                   	push   ebx
  47726c:	56                   	push   esi
  47726d:	8b f1                	mov    esi,ecx
  47726f:	50                   	push   eax
  477270:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  477274:	e8 67 bd 13 00       	call   0x5b2fe0
  477279:	8a 44 24 4c          	mov    al,BYTE PTR [esp+0x4c]
  47727d:	33 db                	xor    ebx,ebx
  47727f:	3a c3                	cmp    al,bl
  477281:	74 09                	je     0x47728c
  477283:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  477287:	e8 f4 bd 13 00       	call   0x5b3080
  47728c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  477290:	8d 54 24 08          	lea    edx,[esp+0x8]
  477294:	51                   	push   ecx
  477295:	8d 44 24 24          	lea    eax,[esp+0x24]
  477299:	52                   	push   edx
  47729a:	50                   	push   eax
  47729b:	8b ce                	mov    ecx,esi
  47729d:	e8 ae 0a 00 00       	call   0x477d50
  4772a2:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  4772a6:	8d 54 24 08          	lea    edx,[esp+0x8]
  4772aa:	51                   	push   ecx
  4772ab:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  4772af:	e8 ec bc 13 00       	call   0x5b2fa0
  4772b4:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  4772b8:	8d 54 24 14          	lea    edx,[esp+0x14]
  4772bc:	50                   	push   eax
  4772bd:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4772c1:	e8 da bc 13 00       	call   0x5b2fa0
  4772c6:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  4772ca:	d8 5c 24 38          	fcomp  DWORD PTR [esp+0x38]
  4772ce:	df e0                	fnstsw ax
  4772d0:	f6 c4 41             	test   ah,0x41
  4772d3:	75 12                	jne    0x4772e7
  4772d5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4772d9:	e8 a2 bd 13 00       	call   0x5b3080
  4772de:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  4772e2:	e8 99 bd 13 00       	call   0x5b3080
  4772e7:	d9 05 98 e0 64 00    	fld    DWORD PTR ds:0x64e098
  4772ed:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  4772f1:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  4772f5:	b9 00 00 80 3f       	mov    ecx,0x3f800000
  4772fa:	5e                   	pop    esi
  4772fb:	d8 64 24 04          	fsub   DWORD PTR [esp+0x4]
  4772ff:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  477303:	d9 18                	fstp   DWORD PTR [eax]
  477305:	d9 05 9c e0 64 00    	fld    DWORD PTR ds:0x64e09c
  47730b:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  47730f:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  477313:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  477317:	d9 58 04             	fstp   DWORD PTR [eax+0x4]
  47731a:	d9 05 a0 e0 64 00    	fld    DWORD PTR ds:0x64e0a0
  477320:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  477324:	89 58 0c             	mov    DWORD PTR [eax+0xc],ebx
  477327:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
  47732a:	d8 64 24 0c          	fsub   DWORD PTR [esp+0xc]
  47732e:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  477332:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
  477335:	d9 05 bc e0 64 00    	fld    DWORD PTR ds:0x64e0bc
  47733b:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  47733f:	d8 44 24 04          	fadd   DWORD PTR [esp+0x4]
  477343:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  477347:	d9 58 24             	fstp   DWORD PTR [eax+0x24]
  47734a:	d9 05 c0 e0 64 00    	fld    DWORD PTR ds:0x64e0c0
  477350:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  477354:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  477358:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  47735c:	d9 58 28             	fstp   DWORD PTR [eax+0x28]
  47735f:	d9 05 c4 e0 64 00    	fld    DWORD PTR ds:0x64e0c4
  477365:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  477369:	89 48 30             	mov    DWORD PTR [eax+0x30],ecx
  47736c:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
  47736f:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
  477373:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  477377:	d9 58 2c             	fstp   DWORD PTR [eax+0x2c]
  47737a:	d9 05 e0 e0 64 00    	fld    DWORD PTR ds:0x64e0e0
  477380:	d8 44 24 04          	fadd   DWORD PTR [esp+0x4]
  477384:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  477388:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  47738c:	d9 58 48             	fstp   DWORD PTR [eax+0x48]
  47738f:	d9 05 e4 e0 64 00    	fld    DWORD PTR ds:0x64e0e4
  477395:	d8 44 24 08          	fadd   DWORD PTR [esp+0x8]
  477399:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  47739d:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  4773a1:	d9 58 4c             	fstp   DWORD PTR [eax+0x4c]
  4773a4:	d9 05 e8 e0 64 00    	fld    DWORD PTR ds:0x64e0e8
  4773aa:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
  4773ae:	89 48 54             	mov    DWORD PTR [eax+0x54],ecx
  4773b1:	89 58 58             	mov    DWORD PTR [eax+0x58],ebx
  4773b4:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  4773b8:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  4773bc:	d9 58 50             	fstp   DWORD PTR [eax+0x50]
  4773bf:	d9 05 04 e1 64 00    	fld    DWORD PTR ds:0x64e104
  4773c5:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  4773c9:	d8 64 24 04          	fsub   DWORD PTR [esp+0x4]
  4773cd:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  4773d1:	d9 58 6c             	fstp   DWORD PTR [eax+0x6c]
  4773d4:	d9 05 08 e1 64 00    	fld    DWORD PTR ds:0x64e108
  4773da:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  4773de:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  4773e2:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  4773e6:	d9 58 70             	fstp   DWORD PTR [eax+0x70]
  4773e9:	d9 05 0c e1 64 00    	fld    DWORD PTR ds:0x64e10c
  4773ef:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  4773f3:	89 58 78             	mov    DWORD PTR [eax+0x78],ebx
  4773f6:	89 58 7c             	mov    DWORD PTR [eax+0x7c],ebx
  4773f9:	5b                   	pop    ebx
  4773fa:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  4773fe:	d8 64 24 14          	fsub   DWORD PTR [esp+0x14]
  477402:	d9 58 74             	fstp   DWORD PTR [eax+0x74]
  477405:	83 c4 24             	add    esp,0x24
  477408:	c2 28 00             	ret    0x28
