
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004092d0 <.text+0x82d0>:
  4092d0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4092d6:	6a ff                	push   0xffffffff
  4092d8:	68 88 06 62 00       	push   0x620688
  4092dd:	50                   	push   eax
  4092de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4092e5:	83 ec 10             	sub    esp,0x10
  4092e8:	56                   	push   esi
  4092e9:	8b f1                	mov    esi,ecx
  4092eb:	57                   	push   edi
  4092ec:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4092ef:	e8 dc f1 01 00       	call   0x4284d0
  4092f4:	8b c8                	mov    ecx,eax
  4092f6:	e8 65 2b 19 00       	call   0x59be60
  4092fb:	84 c0                	test   al,al
  4092fd:	75 3f                	jne    0x40933e
  4092ff:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  409302:	8d 44 24 08          	lea    eax,[esp+0x8]
  409306:	50                   	push   eax
  409307:	e8 74 ae 00 00       	call   0x414180
  40930c:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40930f:	50                   	push   eax
  409310:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
  409317:	00 
  409318:	e8 a3 f5 01 00       	call   0x4288c0
  40931d:	8b c8                	mov    ecx,eax
  40931f:	e8 ac d5 18 00       	call   0x5968d0
  409324:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  409328:	c7 44 24 20 ff ff ff 	mov    DWORD PTR [esp+0x20],0xffffffff
  40932f:	ff 
  409330:	e8 ab 9d 15 00       	call   0x5630e0
  409335:	6a 00                	push   0x0
  409337:	6a 00                	push   0x0
  409339:	e9 dc 00 00 00       	jmp    0x40941a
  40933e:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  409342:	53                   	push   ebx
  409343:	51                   	push   ecx
  409344:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  409347:	e8 34 ae 00 00       	call   0x414180
  40934c:	8b f8                	mov    edi,eax
  40934e:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  409351:	c7 44 24 24 01 00 00 	mov    DWORD PTR [esp+0x24],0x1
  409358:	00 
  409359:	e8 72 f1 01 00       	call   0x4284d0
  40935e:	8b c8                	mov    ecx,eax
  409360:	e8 db 2a 19 00       	call   0x59be40
  409365:	8b c8                	mov    ecx,eax
  409367:	e8 74 1e 19 00       	call   0x59b1e0
  40936c:	8b cf                	mov    ecx,edi
  40936e:	8b d8                	mov    ebx,eax
  409370:	e8 6b 1e 19 00       	call   0x59b1e0
  409375:	3b d8                	cmp    ebx,eax
  409377:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  40937b:	0f 95 c3             	setne  bl
  40937e:	83 cf ff             	or     edi,0xffffffff
  409381:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  409385:	e8 56 9d 15 00       	call   0x5630e0
  40938a:	84 db                	test   bl,bl
  40938c:	5b                   	pop    ebx
  40938d:	74 38                	je     0x4093c7
  40938f:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  409392:	8d 54 24 08          	lea    edx,[esp+0x8]
  409396:	52                   	push   edx
  409397:	e8 e4 ad 00 00       	call   0x414180
  40939c:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  40939f:	50                   	push   eax
  4093a0:	c7 44 24 24 02 00 00 	mov    DWORD PTR [esp+0x24],0x2
  4093a7:	00 
  4093a8:	e8 13 f5 01 00       	call   0x4288c0
  4093ad:	8b c8                	mov    ecx,eax
  4093af:	e8 1c d5 18 00       	call   0x5968d0
  4093b4:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  4093b8:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
  4093bc:	e8 1f 9d 15 00       	call   0x5630e0
  4093c1:	6a 00                	push   0x0
  4093c3:	6a 00                	push   0x0
  4093c5:	eb 53                	jmp    0x40941a
  4093c7:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4093ca:	e8 f1 f4 01 00       	call   0x4288c0
  4093cf:	8b c8                	mov    ecx,eax
  4093d1:	e8 4a d2 18 00       	call   0x596620
  4093d6:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4093d9:	8d 54 24 0c          	lea    edx,[esp+0xc]
  4093dd:	52                   	push   edx
  4093de:	8b 01                	mov    eax,DWORD PTR [ecx]
  4093e0:	ff 50 48             	call   DWORD PTR [eax+0x48]
  4093e3:	8b 10                	mov    edx,DWORD PTR [eax]
  4093e5:	8d 4e 30             	lea    ecx,[esi+0x30]
  4093e8:	89 56 30             	mov    DWORD PTR [esi+0x30],edx
  4093eb:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4093ee:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  4093f1:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4093f4:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  4093f7:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  4093fa:	e8 61 ad 00 00       	call   0x414160
  4093ff:	8b 4e 2c             	mov    ecx,DWORD PTR [esi+0x2c]
  409402:	68 ff ff 7f 7f       	push   0x7f7fffff
  409407:	d9 5e 34             	fstp   DWORD PTR [esi+0x34]
  40940a:	8b 11                	mov    edx,DWORD PTR [ecx]
  40940c:	6a 00                	push   0x0
  40940e:	6a 01                	push   0x1
  409410:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  409416:	6a 00                	push   0x0
  409418:	6a 01                	push   0x1
  40941a:	8b ce                	mov    ecx,esi
  40941c:	e8                   	.byte 0xe8
  40941d:	ef                   	out    dx,eax
  40941e:	95                   	xchg   ebp,eax
  40941f:	ff                   	.byte 0xff
