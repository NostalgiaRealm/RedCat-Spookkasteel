
/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RC_ORIGINAL_DECOMPILED/originals/UNINST32.EXE:     file format pei-i386


Disassembly of section .text:

00401000 <.text>:
  401000:	55                   	push   ebp
  401001:	8b ec                	mov    ebp,esp
  401003:	81 ec 7c 09 00 00    	sub    esp,0x97c
  401009:	53                   	push   ebx
  40100a:	56                   	push   esi
  40100b:	33 db                	xor    ebx,ebx
  40100d:	57                   	push   edi
  40100e:	88 9d 84 f8 ff ff    	mov    BYTE PTR [ebp-0x77c],bl
  401014:	e8 7a 93 00 00       	call   0x40a393
  401019:	bf 00 01 00 00       	mov    edi,0x100
  40101e:	57                   	push   edi
  40101f:	e8 4d a6 00 00       	call   0x40b671
  401024:	8b 35 6c 01 41 00    	mov    esi,DWORD PTR ds:0x41016c
  40102a:	59                   	pop    ecx
  40102b:	57                   	push   edi
  40102c:	50                   	push   eax
  40102d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401030:	a3 5c 37 41 00       	mov    ds:0x41375c,eax
  401035:	ff d6                	call   esi
  401037:	6a 01                	push   0x1
  401039:	ff 35 5c 37 41 00    	push   DWORD PTR ds:0x41375c
  40103f:	e8 50 97 00 00       	call   0x40a794
  401044:	57                   	push   edi
  401045:	e8 27 a6 00 00       	call   0x40b671
  40104a:	83 c4 0c             	add    esp,0xc
  40104d:	a3 bc 3a 41 00       	mov    ds:0x413abc,eax
  401052:	57                   	push   edi
  401053:	50                   	push   eax
  401054:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401057:	ff d6                	call   esi
  401059:	68 68 21 41 00       	push   0x412168
  40105e:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  401064:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40106a:	8b 0d bc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413abc
  401070:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  401076:	8d 44 08 fd          	lea    eax,[eax+ecx*1-0x3]
  40107a:	50                   	push   eax
  40107b:	ff d6                	call   esi
  40107d:	68 00 40 00 00       	push   0x4000
  401082:	e8 ea a5 00 00       	call   0x40b671
  401087:	59                   	pop    ecx
  401088:	a3 10 3b 41 00       	mov    ds:0x413b10,eax
  40108d:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  401090:	8d 85 84 fa ff ff    	lea    eax,[ebp-0x57c]
  401096:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
  40109d:	50                   	push   eax
  40109e:	ff d6                	call   esi
  4010a0:	38 9d 84 fa ff ff    	cmp    BYTE PTR [ebp-0x57c],bl
  4010a6:	75 75                	jne    0x40111d
  4010a8:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  4010ae:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  4010b4:	50                   	push   eax
  4010b5:	ff d6                	call   esi
  4010b7:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  4010bd:	53                   	push   ebx
  4010be:	50                   	push   eax
  4010bf:	e8 d0 96 00 00       	call   0x40a794
  4010c4:	59                   	pop    ecx
  4010c5:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  4010cb:	59                   	pop    ecx
  4010cc:	50                   	push   eax
  4010cd:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4010d3:	8d 84 05 83 fd ff ff 	lea    eax,[ebp+eax*1-0x27d]
  4010da:	8d 8d 84 fd ff ff    	lea    ecx,[ebp-0x27c]
  4010e0:	3b c1                	cmp    eax,ecx
  4010e2:	76 08                	jbe    0x4010ec
  4010e4:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  4010e7:	74 08                	je     0x4010f1
  4010e9:	48                   	dec    eax
  4010ea:	eb ee                	jmp    0x4010da
  4010ec:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  4010ef:	75 01                	jne    0x4010f2
  4010f1:	40                   	inc    eax
  4010f2:	68 5c 21 41 00       	push   0x41215c
  4010f7:	50                   	push   eax
  4010f8:	ff d6                	call   esi
  4010fa:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401100:	53                   	push   ebx
  401101:	50                   	push   eax
  401102:	e8 2c 98 00 00       	call   0x40a933
  401107:	59                   	pop    ecx
  401108:	85 c0                	test   eax,eax
  40110a:	59                   	pop    ecx
  40110b:	75 10                	jne    0x40111d
  40110d:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401113:	50                   	push   eax
  401114:	8d 85 84 fa ff ff    	lea    eax,[ebp-0x57c]
  40111a:	50                   	push   eax
  40111b:	ff d6                	call   esi
  40111d:	6a 02                	push   0x2
  40111f:	8d 85 84 fa ff ff    	lea    eax,[ebp-0x57c]
  401125:	68 58 21 41 00       	push   0x412158
  40112a:	50                   	push   eax
  40112b:	e8 00 e6 00 00       	call   0x40f730
  401130:	83 c4 0c             	add    esp,0xc
  401133:	85 c0                	test   eax,eax
  401135:	0f 84 86 00 00 00    	je     0x4011c1
  40113b:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401141:	50                   	push   eax
  401142:	57                   	push   edi
  401143:	ff 15 78 01 41 00    	call   DWORD PTR ds:0x410178
  401149:	8d 85 84 f9 ff ff    	lea    eax,[ebp-0x67c]
  40114f:	50                   	push   eax
  401150:	68 2b 1a 00 00       	push   0x1a2b
  401155:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  40115b:	68 54 21 41 00       	push   0x412154
  401160:	50                   	push   eax
  401161:	ff 15 7c 01 41 00    	call   DWORD PTR ds:0x41017c
  401167:	8d 85 84 f9 ff ff    	lea    eax,[ebp-0x67c]
  40116d:	68 50 21 41 00       	push   0x412150
  401172:	50                   	push   eax
  401173:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  401179:	8d 8d 84 f9 ff ff    	lea    ecx,[ebp-0x67c]
  40117f:	83 e9 03             	sub    ecx,0x3
  401182:	03 c1                	add    eax,ecx
  401184:	50                   	push   eax
  401185:	ff d6                	call   esi
  401187:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  40118d:	57                   	push   edi
  40118e:	50                   	push   eax
  40118f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401192:	ff 15 6c 01 41 00    	call   DWORD PTR ds:0x41016c
  401198:	8d 85 84 f9 ff ff    	lea    eax,[ebp-0x67c]
  40119e:	53                   	push   ebx
  40119f:	50                   	push   eax
  4011a0:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  4011a6:	50                   	push   eax
  4011a7:	ff 15 74 01 41 00    	call   DWORD PTR ds:0x410174
  4011ad:	85 c0                	test   eax,eax
  4011af:	74 0d                	je     0x4011be
  4011b1:	8d 85 84 f9 ff ff    	lea    eax,[ebp-0x67c]
  4011b7:	50                   	push   eax
  4011b8:	e8 a4 a3 00 00       	call   0x40b561
  4011bd:	59                   	pop    ecx
  4011be:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  4011c1:	8b 35 84 01 41 00    	mov    esi,DWORD PTR ds:0x410184
  4011c7:	6a 05                	push   0x5
  4011c9:	6a 6a                	push   0x6a
  4011cb:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4011ce:	ff d6                	call   esi
  4011d0:	50                   	push   eax
  4011d1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4011d4:	ff 15 dc 00 41 00    	call   DWORD PTR ds:0x4100dc
  4011da:	50                   	push   eax
  4011db:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  4011de:	ff 15 e0 00 41 00    	call   DWORD PTR ds:0x4100e0
  4011e4:	6a 05                	push   0x5
  4011e6:	6a 68                	push   0x68
  4011e8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4011eb:	ff d6                	call   esi
  4011ed:	50                   	push   eax
  4011ee:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4011f1:	ff 15 dc 00 41 00    	call   DWORD PTR ds:0x4100dc
  4011f7:	50                   	push   eax
  4011f8:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
  4011fb:	ff 15 e0 00 41 00    	call   DWORD PTR ds:0x4100e0
  401201:	6a 02                	push   0x2
  401203:	6a 6a                	push   0x6a
  401205:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401208:	ff d6                	call   esi
  40120a:	50                   	push   eax
  40120b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40120e:	ff 15 dc 00 41 00    	call   DWORD PTR ds:0x4100dc
  401214:	50                   	push   eax
  401215:	89 45 d0             	mov    DWORD PTR [ebp-0x30],eax
  401218:	ff 15 e0 00 41 00    	call   DWORD PTR ds:0x4100e0
  40121e:	6a 6a                	push   0x6a
  401220:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401223:	ff 15 58 02 41 00    	call   DWORD PTR ds:0x410258
  401229:	80 bd 84 fa ff ff 2f 	cmp    BYTE PTR [ebp-0x57c],0x2f
  401230:	a3 c0 3a 41 00       	mov    ds:0x413ac0,eax
  401235:	8d 85 84 fa ff ff    	lea    eax,[ebp-0x57c]
  40123b:	89 1d 00 3b 41 00    	mov    DWORD PTR ds:0x413b00,ebx
  401241:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  401244:	0f 85 e7 00 00 00    	jne    0x401331
  40124a:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  40124d:	8d 46 01             	lea    eax,[esi+0x1]
  401250:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  401253:	0f be 00             	movsx  eax,BYTE PTR [eax]
  401256:	50                   	push   eax
  401257:	e8 4c ae 00 00       	call   0x40c0a8
  40125c:	83 f8 5a             	cmp    eax,0x5a
  40125f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  401262:	59                   	pop    ecx
  401263:	75 37                	jne    0x40129c
  401265:	80 38 7a             	cmp    BYTE PTR [eax],0x7a
  401268:	75 1c                	jne    0x401286
  40126a:	80 7e 02 31          	cmp    BYTE PTR [esi+0x2],0x31
  40126e:	75 0c                	jne    0x40127c
  401270:	8b f0                	mov    esi,eax
  401272:	c7 05 f4 36 41 00 01 	mov    DWORD PTR ds:0x4136f4,0x1
  401279:	00 00 00 
  40127c:	c7 05 4c 37 41 00 01 	mov    DWORD PTR ds:0x41374c,0x1
  401283:	00 00 00 
  401286:	46                   	inc    esi
  401287:	46                   	inc    esi
  401288:	89 75 10             	mov    DWORD PTR [ebp+0x10],esi
  40128b:	80 3e 20             	cmp    BYTE PTR [esi],0x20
  40128e:	0f 85 94 00 00 00    	jne    0x401328
  401294:	46                   	inc    esi
  401295:	80 3e 20             	cmp    BYTE PTR [esi],0x20
  401298:	74 fa                	je     0x401294
  40129a:	eb 7b                	jmp    0x401317
  40129c:	0f be 00             	movsx  eax,BYTE PTR [eax]
  40129f:	50                   	push   eax
  4012a0:	e8 03 ae 00 00       	call   0x40c0a8
  4012a5:	83 f8 41             	cmp    eax,0x41
  4012a8:	59                   	pop    ecx
  4012a9:	75 0c                	jne    0x4012b7
  4012ab:	c7 05 00 3b 41 00 01 	mov    DWORD PTR ds:0x413b00,0x1
  4012b2:	00 00 00 
  4012b5:	eb 5e                	jmp    0x401315
  4012b7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4012ba:	0f be 00             	movsx  eax,BYTE PTR [eax]
  4012bd:	50                   	push   eax
  4012be:	e8 e5 ad 00 00       	call   0x40c0a8
  4012c3:	83 f8 53             	cmp    eax,0x53
  4012c6:	59                   	pop    ecx
  4012c7:	75 0f                	jne    0x4012d8
  4012c9:	6a 01                	push   0x1
  4012cb:	58                   	pop    eax
  4012cc:	a3 0c 37 41 00       	mov    ds:0x41370c,eax
  4012d1:	a3 00 3b 41 00       	mov    ds:0x413b00,eax
  4012d6:	eb 3d                	jmp    0x401315
  4012d8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4012db:	0f be 00             	movsx  eax,BYTE PTR [eax]
  4012de:	50                   	push   eax
  4012df:	e8 c4 ad 00 00       	call   0x40c0a8
  4012e4:	83 f8 52             	cmp    eax,0x52
  4012e7:	59                   	pop    ecx
  4012e8:	75 0c                	jne    0x4012f6
  4012ea:	c7 05 70 37 41 00 01 	mov    DWORD PTR ds:0x413770,0x1
  4012f1:	00 00 00 
  4012f4:	eb 1f                	jmp    0x401315
  4012f6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4012f9:	0f be 00             	movsx  eax,BYTE PTR [eax]
  4012fc:	50                   	push   eax
  4012fd:	e8 a6 ad 00 00       	call   0x40c0a8
  401302:	83 f8 55             	cmp    eax,0x55
  401305:	59                   	pop    ecx
  401306:	75 29                	jne    0x401331
  401308:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  40130b:	c7 05 64 3a 41 00 01 	mov    DWORD PTR ds:0x413a64,0x1
  401312:	00 00 00 
  401315:	46                   	inc    esi
  401316:	46                   	inc    esi
  401317:	80 3e 20             	cmp    BYTE PTR [esi],0x20
  40131a:	89 75 10             	mov    DWORD PTR [ebp+0x10],esi
  40131d:	75 09                	jne    0x401328
  40131f:	46                   	inc    esi
  401320:	80 3e 20             	cmp    BYTE PTR [esi],0x20
  401323:	74 fa                	je     0x40131f
  401325:	89 75 10             	mov    DWORD PTR [ebp+0x10],esi
  401328:	80 3e 2f             	cmp    BYTE PTR [esi],0x2f
  40132b:	0f 84 19 ff ff ff    	je     0x40124a
  401331:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  401334:	80 38 20             	cmp    BYTE PTR [eax],0x20
  401337:	75 09                	jne    0x401342
  401339:	40                   	inc    eax
  40133a:	80 38 20             	cmp    BYTE PTR [eax],0x20
  40133d:	74 fa                	je     0x401339
  40133f:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  401342:	6a 20                	push   0x20
  401344:	50                   	push   eax
  401345:	e8 02 ab 00 00       	call   0x40be4c
  40134a:	59                   	pop    ecx
  40134b:	3b c3                	cmp    eax,ebx
  40134d:	59                   	pop    ecx
  40134e:	74 34                	je     0x401384
  401350:	39 1d 4c 37 41 00    	cmp    DWORD PTR ds:0x41374c,ebx
  401356:	75 2c                	jne    0x401384
  401358:	88 18                	mov    BYTE PTR [eax],bl
  40135a:	40                   	inc    eax
  40135b:	a3 c4 3a 41 00       	mov    ds:0x413ac4,eax
  401360:	80 38 22             	cmp    BYTE PTR [eax],0x22
  401363:	75 06                	jne    0x40136b
  401365:	40                   	inc    eax
  401366:	a3 c4 3a 41 00       	mov    ds:0x413ac4,eax
  40136b:	50                   	push   eax
  40136c:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  401372:	48                   	dec    eax
  401373:	78 0f                	js     0x401384
  401375:	8b 0d c4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ac4
  40137b:	03 c1                	add    eax,ecx
  40137d:	80 38 22             	cmp    BYTE PTR [eax],0x22
  401380:	75 02                	jne    0x401384
  401382:	88 18                	mov    BYTE PTR [eax],bl
  401384:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40138a:	8b 35 80 01 41 00    	mov    esi,DWORD PTR ds:0x410180
  401390:	53                   	push   ebx
  401391:	68 44 21 41 00       	push   0x412144
  401396:	68 38 21 41 00       	push   0x412138
  40139b:	ff d6                	call   esi
  40139d:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  4013a3:	a3 e0 3a 41 00       	mov    ds:0x413ae0,eax
  4013a8:	53                   	push   ebx
  4013a9:	68 2c 21 41 00       	push   0x41212c
  4013ae:	68 38 21 41 00       	push   0x412138
  4013b3:	ff d6                	call   esi
  4013b5:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  4013bb:	a3 e4 3a 41 00       	mov    ds:0x413ae4,eax
  4013c0:	68 ff 00 00 00       	push   0xff
  4013c5:	68 20 21 41 00       	push   0x412120
  4013ca:	68 38 21 41 00       	push   0x412138
  4013cf:	ff d6                	call   esi
  4013d1:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  4013d7:	a3 e8 3a 41 00       	mov    ds:0x413ae8,eax
  4013dc:	53                   	push   ebx
  4013dd:	68 18 21 41 00       	push   0x412118
  4013e2:	68 38 21 41 00       	push   0x412138
  4013e7:	ff d6                	call   esi
  4013e9:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  4013ef:	2b 05 e0 3a 41 00    	sub    eax,DWORD PTR ds:0x413ae0
  4013f5:	53                   	push   ebx
  4013f6:	68 0c 21 41 00       	push   0x41210c
  4013fb:	68 38 21 41 00       	push   0x412138
  401400:	a3 ec 3a 41 00       	mov    ds:0x413aec,eax
  401405:	ff d6                	call   esi
  401407:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40140d:	2b 05 e4 3a 41 00    	sub    eax,DWORD PTR ds:0x413ae4
  401413:	53                   	push   ebx
  401414:	68 00 21 41 00       	push   0x412100
  401419:	68 38 21 41 00       	push   0x412138
  40141e:	a3 f0 3a 41 00       	mov    ds:0x413af0,eax
  401423:	ff d6                	call   esi
  401425:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40142b:	2b 05 e8 3a 41 00    	sub    eax,DWORD PTR ds:0x413ae8
  401431:	6a 01                	push   0x1
  401433:	68 f0 20 41 00       	push   0x4120f0
  401438:	68 38 21 41 00       	push   0x412138
  40143d:	a3 f4 3a 41 00       	mov    ds:0x413af4,eax
  401442:	ff d6                	call   esi
  401444:	a3 b4 36 41 00       	mov    ds:0x4136b4,eax
  401449:	e8 1f 9b 00 00       	call   0x40af6d
  40144e:	39 5d 0c             	cmp    DWORD PTR [ebp+0xc],ebx
  401451:	75 0d                	jne    0x401460
  401453:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401456:	e8 15 0b 00 00       	call   0x401f70
  40145b:	85 c0                	test   eax,eax
  40145d:	59                   	pop    ecx
  40145e:	74 11                	je     0x401471
  401460:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  401463:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401466:	e8 64 0b 00 00       	call   0x401fcf
  40146b:	59                   	pop    ecx
  40146c:	85 c0                	test   eax,eax
  40146e:	59                   	pop    ecx
  40146f:	75 07                	jne    0x401478
  401471:	33 c0                	xor    eax,eax
  401473:	e9 f1 0a 00 00       	jmp    0x401f69
  401478:	68 00 04 00 00       	push   0x400
  40147d:	6a 02                	push   0x2
  40147f:	ff 15 88 01 41 00    	call   DWORD PTR ds:0x410188
  401485:	50                   	push   eax
  401486:	a3 1c 37 41 00       	mov    ds:0x41371c,eax
  40148b:	ff 15 ec 00 41 00    	call   DWORD PTR ds:0x4100ec
  401491:	a3 e0 36 41 00       	mov    ds:0x4136e0,eax
  401496:	6a 01                	push   0x1
  401498:	89 18                	mov    DWORD PTR [eax],ebx
  40149a:	58                   	pop    eax
  40149b:	6a 08                	push   0x8
  40149d:	8b c8                	mov    ecx,eax
  40149f:	5a                   	pop    edx
  4014a0:	f6 c1 01             	test   cl,0x1
  4014a3:	74 0a                	je     0x4014af
  4014a5:	d1 e9                	shr    ecx,1
  4014a7:	81 f1 20 83 b8 ed    	xor    ecx,0xedb88320
  4014ad:	eb 02                	jmp    0x4014b1
  4014af:	d1 e9                	shr    ecx,1
  4014b1:	4a                   	dec    edx
  4014b2:	75 ec                	jne    0x4014a0
  4014b4:	8b 15 e0 36 41 00    	mov    edx,DWORD PTR ds:0x4136e0
  4014ba:	89 0c 82             	mov    DWORD PTR [edx+eax*4],ecx
  4014bd:	40                   	inc    eax
  4014be:	3b c7                	cmp    eax,edi
  4014c0:	7c d9                	jl     0x40149b
  4014c2:	57                   	push   edi
  4014c3:	e8 a9 a1 00 00       	call   0x40b671
  4014c8:	57                   	push   edi
  4014c9:	a3 9c 3a 41 00       	mov    ds:0x413a9c,eax
  4014ce:	e8 9e a1 00 00       	call   0x40b671
  4014d3:	57                   	push   edi
  4014d4:	a3 64 37 41 00       	mov    ds:0x413764,eax
  4014d9:	ff 35 9c 3a 41 00    	push   DWORD PTR ds:0x413a9c
  4014df:	6a 19                	push   0x19
  4014e1:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4014e7:	e8 b1 96 00 00       	call   0x40ab9d
  4014ec:	57                   	push   edi
  4014ed:	ff 35 64 37 41 00    	push   DWORD PTR ds:0x413764
  4014f3:	6a 3b                	push   0x3b
  4014f5:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4014fb:	e8 9d 96 00 00       	call   0x40ab9d
  401500:	8b 35 5c 02 41 00    	mov    esi,DWORD PTR ds:0x41025c
  401506:	83 c4 28             	add    esp,0x28
  401509:	39 1d 94 36 41 00    	cmp    DWORD PTR ds:0x413694,ebx
  40150f:	74 5c                	je     0x40156d
  401511:	53                   	push   ebx
  401512:	6a 64                	push   0x64
  401514:	68 6a 20 00 00       	push   0x206a
  401519:	c7 05 ac 3a 41 00 01 	mov    DWORD PTR ds:0x413aac,0x1
  401520:	00 00 00 
  401523:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  401529:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  40152f:	6a 01                	push   0x1
  401531:	53                   	push   ebx
  401532:	53                   	push   ebx
  401533:	8d 45 d8             	lea    eax,[ebp-0x28]
  401536:	53                   	push   ebx
  401537:	50                   	push   eax
  401538:	ff d6                	call   esi
  40153a:	85 c0                	test   eax,eax
  40153c:	74 16                	je     0x401554
  40153e:	8d 45 d8             	lea    eax,[ebp-0x28]
  401541:	50                   	push   eax
  401542:	ff 15 64 02 41 00    	call   DWORD PTR ds:0x410264
  401548:	8d 45 d8             	lea    eax,[ebp-0x28]
  40154b:	50                   	push   eax
  40154c:	ff 15 38 03 41 00    	call   DWORD PTR ds:0x410338
  401552:	eb db                	jmp    0x40152f
  401554:	39 1d ac 3a 41 00    	cmp    DWORD PTR ds:0x413aac,ebx
  40155a:	75 d3                	jne    0x40152f
  40155c:	68 6a 20 00 00       	push   0x206a
  401561:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  401567:	ff 15 3c 03 41 00    	call   DWORD PTR ds:0x41033c
  40156d:	39 1d 4c 37 41 00    	cmp    DWORD PTR ds:0x41374c,ebx
  401573:	0f 84 b1 01 00 00    	je     0x40172a
  401579:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40157c:	38 18                	cmp    BYTE PTR [eax],bl
  40157e:	0f 84 a6 01 00 00    	je     0x40172a
  401584:	53                   	push   ebx
  401585:	68 e8 03 00 00       	push   0x3e8
  40158a:	68 6a 20 00 00       	push   0x206a
  40158f:	c7 05 ac 3a 41 00 01 	mov    DWORD PTR ds:0x413aac,0x1
  401596:	00 00 00 
  401599:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  40159f:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  4015a5:	6a 01                	push   0x1
  4015a7:	53                   	push   ebx
  4015a8:	53                   	push   ebx
  4015a9:	8d 45 d8             	lea    eax,[ebp-0x28]
  4015ac:	53                   	push   ebx
  4015ad:	50                   	push   eax
  4015ae:	ff d6                	call   esi
  4015b0:	85 c0                	test   eax,eax
  4015b2:	74 16                	je     0x4015ca
  4015b4:	8d 45 d8             	lea    eax,[ebp-0x28]
  4015b7:	50                   	push   eax
  4015b8:	ff 15 64 02 41 00    	call   DWORD PTR ds:0x410264
  4015be:	8d 45 d8             	lea    eax,[ebp-0x28]
  4015c1:	50                   	push   eax
  4015c2:	ff 15 38 03 41 00    	call   DWORD PTR ds:0x410338
  4015c8:	eb db                	jmp    0x4015a5
  4015ca:	39 1d ac 3a 41 00    	cmp    DWORD PTR ds:0x413aac,ebx
  4015d0:	75 d3                	jne    0x4015a5
  4015d2:	68 6a 20 00 00       	push   0x206a
  4015d7:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  4015dd:	ff 15 3c 03 41 00    	call   DWORD PTR ds:0x41033c
  4015e3:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4015e6:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  4015ec:	50                   	push   eax
  4015ed:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  4015f3:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  4015f9:	6a 20                	push   0x20
  4015fb:	50                   	push   eax
  4015fc:	e8 4b a8 00 00       	call   0x40be4c
  401601:	8b f0                	mov    esi,eax
  401603:	59                   	pop    ecx
  401604:	3b f3                	cmp    esi,ebx
  401606:	59                   	pop    ecx
  401607:	74 02                	je     0x40160b
  401609:	88 1e                	mov    BYTE PTR [esi],bl
  40160b:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401611:	50                   	push   eax
  401612:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  401618:	80 bc 05 83 fe ff ff 	cmp    BYTE PTR [ebp+eax*1-0x17d],0x5c
  40161f:	5c 
  401620:	74 0d                	je     0x40162f
  401622:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401628:	50                   	push   eax
  401629:	ff 15 f0 00 41 00    	call   DWORD PTR ds:0x4100f0
  40162f:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401635:	50                   	push   eax
  401636:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40163c:	8d 84 05 83 fe ff ff 	lea    eax,[ebp+eax*1-0x17d]
  401643:	8d 8d 84 fe ff ff    	lea    ecx,[ebp-0x17c]
  401649:	3b c1                	cmp    eax,ecx
  40164b:	76 08                	jbe    0x401655
  40164d:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  401650:	74 08                	je     0x40165a
  401652:	48                   	dec    eax
  401653:	eb ee                	jmp    0x401643
  401655:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  401658:	75 02                	jne    0x40165c
  40165a:	88 18                	mov    BYTE PTR [eax],bl
  40165c:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401662:	53                   	push   ebx
  401663:	50                   	push   eax
  401664:	e8 46 7b 00 00       	call   0x4091af
  401669:	59                   	pop    ecx
  40166a:	3b f3                	cmp    esi,ebx
  40166c:	59                   	pop    ecx
  40166d:	74 22                	je     0x401691
  40166f:	46                   	inc    esi
  401670:	38 1e                	cmp    BYTE PTR [esi],bl
  401672:	74 1d                	je     0x401691
  401674:	56                   	push   esi
  401675:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40167b:	80 7c 30 ff 5c       	cmp    BYTE PTR [eax+esi*1-0x1],0x5c
  401680:	8d 44 30 ff          	lea    eax,[eax+esi*1-0x1]
  401684:	75 02                	jne    0x401688
  401686:	88 18                	mov    BYTE PTR [eax],bl
  401688:	53                   	push   ebx
  401689:	56                   	push   esi
  40168a:	e8 20 7b 00 00       	call   0x4091af
  40168f:	59                   	pop    ecx
  401690:	59                   	pop    ecx
  401691:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  401697:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  40169d:	8b 35 74 02 41 00    	mov    esi,DWORD PTR ds:0x410274
  4016a3:	53                   	push   ebx
  4016a4:	53                   	push   ebx
  4016a5:	8d 45 d8             	lea    eax,[ebp-0x28]
  4016a8:	53                   	push   ebx
  4016a9:	50                   	push   eax
  4016aa:	ff d6                	call   esi
  4016ac:	85 c0                	test   eax,eax
  4016ae:	74 1d                	je     0x4016cd
  4016b0:	8d 45 d8             	lea    eax,[ebp-0x28]
  4016b3:	50                   	push   eax
  4016b4:	ff 15 64 02 41 00    	call   DWORD PTR ds:0x410264
  4016ba:	8d 45 d8             	lea    eax,[ebp-0x28]
  4016bd:	50                   	push   eax
  4016be:	ff 15 38 03 41 00    	call   DWORD PTR ds:0x410338
  4016c4:	53                   	push   ebx
  4016c5:	53                   	push   ebx
  4016c6:	8d 45 d8             	lea    eax,[ebp-0x28]
  4016c9:	53                   	push   ebx
  4016ca:	50                   	push   eax
  4016cb:	eb dd                	jmp    0x4016aa
  4016cd:	ff 35 c0 3a 41 00    	push   DWORD PTR ds:0x413ac0
  4016d3:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  4016d9:	ff 75 d0             	push   DWORD PTR [ebp-0x30]
  4016dc:	8b 35 f4 00 41 00    	mov    esi,DWORD PTR ds:0x4100f4
  4016e2:	ff d6                	call   esi
  4016e4:	ff 75 d4             	push   DWORD PTR [ebp-0x2c]
  4016e7:	ff d6                	call   esi
  4016e9:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  4016ec:	ff d6                	call   esi
  4016ee:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  4016f4:	57                   	push   edi
  4016f5:	50                   	push   eax
  4016f6:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4016f9:	ff 15 6c 01 41 00    	call   DWORD PTR ds:0x41016c
  4016ff:	a1 08 3b 41 00       	mov    eax,ds:0x413b08
  401704:	3b c3                	cmp    eax,ebx
  401706:	74 07                	je     0x40170f
  401708:	50                   	push   eax
  401709:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  40170f:	a1 60 37 41 00       	mov    eax,ds:0x413760
  401714:	3b c3                	cmp    eax,ebx
  401716:	74 07                	je     0x40171f
  401718:	50                   	push   eax
  401719:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  40171f:	39 1d f4 36 41 00    	cmp    DWORD PTR ds:0x4136f4,ebx
  401725:	e9 24 08 00 00       	jmp    0x401f4e
  40172a:	68 00 80 00 00       	push   0x8000
  40172f:	ff 15 f8 00 41 00    	call   DWORD PTR ds:0x4100f8
  401735:	a1 80 37 41 00       	mov    eax,ds:0x413780
  40173a:	c7 05 88 37 41 00 ff 	mov    DWORD PTR ds:0x413788,0xffffff
  401741:	ff ff 00 
  401744:	3b c3                	cmp    eax,ebx
  401746:	74 3d                	je     0x401785
  401748:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40174b:	ff d0                	call   eax
  40174d:	85 c0                	test   eax,eax
  40174f:	74 2e                	je     0x40177f
  401751:	83 3d b0 36 41 00 01 	cmp    DWORD PTR ds:0x4136b0,0x1
  401758:	a1 ec 36 41 00       	mov    eax,ds:0x4136ec
  40175d:	75 04                	jne    0x401763
  40175f:	3b c3                	cmp    eax,ebx
  401761:	75 0d                	jne    0x401770
  401763:	3b c3                	cmp    eax,ebx
  401765:	75 09                	jne    0x401770
  401767:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40176a:	ff 15 f0 36 41 00    	call   DWORD PTR ds:0x4136f0
  401770:	6a 0f                	push   0xf
  401772:	ff 15 78 02 41 00    	call   DWORD PTR ds:0x410278
  401778:	a3 88 37 41 00       	mov    ds:0x413788,eax
  40177d:	eb 06                	jmp    0x401785
  40177f:	89 1d 80 37 41 00    	mov    DWORD PTR ds:0x413780,ebx
  401785:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  401788:	88 9d 84 fc ff ff    	mov    BYTE PTR [ebp-0x37c],bl
  40178e:	38 18                	cmp    BYTE PTR [eax],bl
  401790:	0f 85 a7 00 00 00    	jne    0x40183d
  401796:	6a 4c                	push   0x4c
  401798:	8d 45 84             	lea    eax,[ebp-0x7c]
  40179b:	5e                   	pop    esi
  40179c:	56                   	push   esi
  40179d:	53                   	push   ebx
  40179e:	50                   	push   eax
  40179f:	e8 ac a8 00 00       	call   0x40c050
  4017a4:	a1 98 36 41 00       	mov    eax,ds:0x413698
  4017a9:	57                   	push   edi
  4017aa:	89 45 88             	mov    DWORD PTR [ebp-0x78],eax
  4017ad:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  4017b0:	89 45 8c             	mov    DWORD PTR [ebp-0x74],eax
  4017b3:	8d 85 84 fb ff ff    	lea    eax,[ebp-0x47c]
  4017b9:	50                   	push   eax
  4017ba:	6a 01                	push   0x1
  4017bc:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4017c2:	89 75 84             	mov    DWORD PTR [ebp-0x7c],esi
  4017c5:	89 7d a4             	mov    DWORD PTR [ebp-0x5c],edi
  4017c8:	c7 45 b8 00 10 00 00 	mov    DWORD PTR [ebp-0x48],0x1000
  4017cf:	e8 c9 93 00 00       	call   0x40ab9d
  4017d4:	83 c4 1c             	add    esp,0x1c
  4017d7:	8d 85 84 fb ff ff    	lea    eax,[ebp-0x47c]
  4017dd:	50                   	push   eax
  4017de:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4017e4:	8d b4 05 85 fb ff ff 	lea    esi,[ebp+eax*1-0x47b]
  4017eb:	68 e4 20 41 00       	push   0x4120e4
  4017f0:	56                   	push   esi
  4017f1:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  4017f7:	56                   	push   esi
  4017f8:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4017fe:	88 5c 30 01          	mov    BYTE PTR [eax+esi*1+0x1],bl
  401802:	8d 85 84 fb ff ff    	lea    eax,[ebp-0x47c]
  401808:	89 45 90             	mov    DWORD PTR [ebp-0x70],eax
  40180b:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401811:	68 5c 21 41 00       	push   0x41215c
  401816:	50                   	push   eax
  401817:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40181d:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401823:	89 45 a0             	mov    DWORD PTR [ebp-0x60],eax
  401826:	e8 c5 a4 00 00       	call   0x40bcf0
  40182b:	8d 45 84             	lea    eax,[ebp-0x7c]
  40182e:	50                   	push   eax
  40182f:	e8 6e a6 00 00       	call   0x40bea2
  401834:	85 c0                	test   eax,eax
  401836:	74 13                	je     0x40184b
  401838:	ff 75 a0             	push   DWORD PTR [ebp-0x60]
  40183b:	eb 01                	jmp    0x40183e
  40183d:	50                   	push   eax
  40183e:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401844:	50                   	push   eax
  401845:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40184b:	38 9d 84 fc ff ff    	cmp    BYTE PTR [ebp-0x37c],bl
  401851:	8b 35 fc 00 41 00    	mov    esi,DWORD PTR ds:0x4100fc
  401857:	74 6c                	je     0x4018c5
  401859:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  40185f:	6a 5c                	push   0x5c
  401861:	50                   	push   eax
  401862:	e8 e5 a5 00 00       	call   0x40be4c
  401867:	59                   	pop    ecx
  401868:	85 c0                	test   eax,eax
  40186a:	59                   	pop    ecx
  40186b:	75 58                	jne    0x4018c5
  40186d:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401873:	57                   	push   edi
  401874:	50                   	push   eax
  401875:	e8 b4 a6 00 00       	call   0x40bf2e
  40187a:	59                   	pop    ecx
  40187b:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401881:	59                   	pop    ecx
  401882:	50                   	push   eax
  401883:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  401889:	80 bc 05 83 fd ff ff 	cmp    BYTE PTR [ebp+eax*1-0x27d],0x5c
  401890:	5c 
  401891:	74 0e                	je     0x4018a1
  401893:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401899:	68 e0 20 41 00       	push   0x4120e0
  40189e:	50                   	push   eax
  40189f:	ff d6                	call   esi
  4018a1:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  4018a7:	50                   	push   eax
  4018a8:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  4018ae:	50                   	push   eax
  4018af:	ff d6                	call   esi
  4018b1:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  4018b7:	50                   	push   eax
  4018b8:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  4018be:	50                   	push   eax
  4018bf:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  4018c5:	57                   	push   edi
  4018c6:	e8 a6 9d 00 00       	call   0x40b671
  4018cb:	be 00 40 00 00       	mov    esi,0x4000
  4018d0:	a3 a8 3a 41 00       	mov    ds:0x413aa8,eax
  4018d5:	56                   	push   esi
  4018d6:	e8 96 9d 00 00       	call   0x40b671
  4018db:	56                   	push   esi
  4018dc:	53                   	push   ebx
  4018dd:	50                   	push   eax
  4018de:	a3 84 36 41 00       	mov    ds:0x413684,eax
  4018e3:	e8 68 a7 00 00       	call   0x40c050
  4018e8:	57                   	push   edi
  4018e9:	e8 83 9d 00 00       	call   0x40b671
  4018ee:	68 00 04 00 00       	push   0x400
  4018f3:	a3 80 3b 41 00       	mov    ds:0x413b80,eax
  4018f8:	e8 74 9d 00 00       	call   0x40b671
  4018fd:	57                   	push   edi
  4018fe:	a3 54 37 41 00       	mov    ds:0x413754,eax
  401903:	e8 69 9d 00 00       	call   0x40b671
  401908:	68 04 01 00 00       	push   0x104
  40190d:	a3 b0 37 41 00       	mov    ds:0x4137b0,eax
  401912:	e8 5a 9d 00 00       	call   0x40b671
  401917:	be 00 02 00 00       	mov    esi,0x200
  40191c:	a3 38 37 41 00       	mov    ds:0x413738,eax
  401921:	56                   	push   esi
  401922:	e8 4a 9d 00 00       	call   0x40b671
  401927:	56                   	push   esi
  401928:	53                   	push   ebx
  401929:	50                   	push   eax
  40192a:	a3 90 37 41 00       	mov    ds:0x413790,eax
  40192f:	e8 1c a7 00 00       	call   0x40c050
  401934:	68 00 ee 02 00       	push   0x2ee00
  401939:	e8 33 9d 00 00       	call   0x40b671
  40193e:	be 00 fa 00 00       	mov    esi,0xfa00
  401943:	a3 e8 36 41 00       	mov    ds:0x4136e8,eax
  401948:	56                   	push   esi
  401949:	e8 23 9d 00 00       	call   0x40b671
  40194e:	56                   	push   esi
  40194f:	a3 0c 3b 41 00       	mov    ds:0x413b0c,eax
  401954:	e8 18 9d 00 00       	call   0x40b671
  401959:	83 c4 40             	add    esp,0x40
  40195c:	a3 00 37 41 00       	mov    ds:0x413700,eax
  401961:	56                   	push   esi
  401962:	e8 0a 9d 00 00       	call   0x40b671
  401967:	56                   	push   esi
  401968:	a3 a0 36 41 00       	mov    ds:0x4136a0,eax
  40196d:	e8 ff 9c 00 00       	call   0x40b671
  401972:	56                   	push   esi
  401973:	a3 fc 36 41 00       	mov    ds:0x4136fc,eax
  401978:	e8 f4 9c 00 00       	call   0x40b671
  40197d:	56                   	push   esi
  40197e:	a3 a8 36 41 00       	mov    ds:0x4136a8,eax
  401983:	e8 e9 9c 00 00       	call   0x40b671
  401988:	56                   	push   esi
  401989:	a3 a8 37 41 00       	mov    ds:0x4137a8,eax
  40198e:	e8 de 9c 00 00       	call   0x40b671
  401993:	56                   	push   esi
  401994:	a3 cc 36 41 00       	mov    ds:0x4136cc,eax
  401999:	e8 d3 9c 00 00       	call   0x40b671
  40199e:	56                   	push   esi
  40199f:	a3 c0 37 41 00       	mov    ds:0x4137c0,eax
  4019a4:	e8 c8 9c 00 00       	call   0x40b671
  4019a9:	56                   	push   esi
  4019aa:	a3 84 3a 41 00       	mov    ds:0x413a84,eax
  4019af:	e8 bd 9c 00 00       	call   0x40b671
  4019b4:	56                   	push   esi
  4019b5:	a3 44 37 41 00       	mov    ds:0x413744,eax
  4019ba:	e8 b2 9c 00 00       	call   0x40b671
  4019bf:	56                   	push   esi
  4019c0:	a3 34 37 41 00       	mov    ds:0x413734,eax
  4019c5:	e8 a7 9c 00 00       	call   0x40b671
  4019ca:	56                   	push   esi
  4019cb:	a3 48 37 41 00       	mov    ds:0x413748,eax
  4019d0:	e8 9c 9c 00 00       	call   0x40b671
  4019d5:	68 00 10 00 00       	push   0x1000
  4019da:	a3 98 3b 41 00       	mov    ds:0x413b98,eax
  4019df:	e8 8d 9c 00 00       	call   0x40b671
  4019e4:	83 c4 30             	add    esp,0x30
  4019e7:	38 9d 84 fc ff ff    	cmp    BYTE PTR [ebp-0x37c],bl
  4019ed:	a3 a4 36 41 00       	mov    ds:0x4136a4,eax
  4019f2:	0f 84 e9 01 00 00    	je     0x401be1
  4019f8:	68 02 7f 00 00       	push   0x7f02
  4019fd:	53                   	push   ebx
  4019fe:	ff 15 7c 02 41 00    	call   DWORD PTR ds:0x41027c
  401a04:	8b 35 80 02 41 00    	mov    esi,DWORD PTR ds:0x410280
  401a0a:	50                   	push   eax
  401a0b:	ff d6                	call   esi
  401a0d:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  401a10:	8d 85 84 f8 ff ff    	lea    eax,[ebp-0x77c]
  401a16:	50                   	push   eax
  401a17:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401a1d:	50                   	push   eax
  401a1e:	e8 08 23 00 00       	call   0x403d2b
  401a23:	59                   	pop    ecx
  401a24:	59                   	pop    ecx
  401a25:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  401a28:	85 c0                	test   eax,eax
  401a2a:	0f 85 af 01 00 00    	jne    0x401bdf
  401a30:	ff d6                	call   esi
  401a32:	39 1d 00 3b 41 00    	cmp    DWORD PTR ds:0x413b00,ebx
  401a38:	b8 e8 03 00 00       	mov    eax,0x3e8
  401a3d:	74 0c                	je     0x401a4b
  401a3f:	a3 c4 36 41 00       	mov    ds:0x4136c4,eax
  401a44:	c6 05 60 3a 41 00 0b 	mov    BYTE PTR ds:0x413a60,0xb
  401a4b:	39 1d 64 3a 41 00    	cmp    DWORD PTR ds:0x413a64,ebx
  401a51:	74 0c                	je     0x401a5f
  401a53:	a3 c4 36 41 00       	mov    ds:0x4136c4,eax
  401a58:	c6 05 60 3a 41 00 0b 	mov    BYTE PTR ds:0x413a60,0xb
  401a5f:	39 1d 0c 37 41 00    	cmp    DWORD PTR ds:0x41370c,ebx
  401a65:	0f 85 a5 00 00 00    	jne    0x401b10
  401a6b:	e8 80 a2 00 00       	call   0x40bcf0
  401a70:	53                   	push   ebx
  401a71:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  401a77:	ff 15 84 02 41 00    	call   DWORD PTR ds:0x410284
  401a7d:	53                   	push   ebx
  401a7e:	68 33 28 40 00       	push   0x402833
  401a83:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  401a89:	ff 15 88 02 41 00    	call   DWORD PTR ds:0x410288
  401a8f:	f7 d8                	neg    eax
  401a91:	1b c0                	sbb    eax,eax
  401a93:	23 05 98 36 41 00    	and    eax,DWORD PTR ds:0x413698
  401a99:	50                   	push   eax
  401a9a:	6a 6a                	push   0x6a
  401a9c:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  401aa2:	ff 15 8c 02 41 00    	call   DWORD PTR ds:0x41028c
  401aa8:	39 1d 00 3b 41 00    	cmp    DWORD PTR ds:0x413b00,ebx
  401aae:	a3 90 36 41 00       	mov    ds:0x413690,eax
  401ab3:	75 5b                	jne    0x401b10
  401ab5:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  401abb:	0f 85 91 00 00 00    	jne    0x401b52
  401ac1:	8b 35 5c 02 41 00    	mov    esi,DWORD PTR ds:0x41025c
  401ac7:	39 1d ac 36 41 00    	cmp    DWORD PTR ds:0x4136ac,ebx
  401acd:	75 41                	jne    0x401b10
  401acf:	6a 01                	push   0x1
  401ad1:	53                   	push   ebx
  401ad2:	53                   	push   ebx
  401ad3:	8d 45 d8             	lea    eax,[ebp-0x28]
  401ad6:	53                   	push   ebx
  401ad7:	50                   	push   eax
  401ad8:	ff d6                	call   esi
  401ada:	85 c0                	test   eax,eax
  401adc:	74 2a                	je     0x401b08
  401ade:	8d 45 d8             	lea    eax,[ebp-0x28]
  401ae1:	50                   	push   eax
  401ae2:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  401ae8:	ff 15 90 02 41 00    	call   DWORD PTR ds:0x410290
  401aee:	85 c0                	test   eax,eax
  401af0:	75 dd                	jne    0x401acf
  401af2:	8d 45 d8             	lea    eax,[ebp-0x28]
  401af5:	50                   	push   eax
  401af6:	ff 15 64 02 41 00    	call   DWORD PTR ds:0x410264
  401afc:	8d 45 d8             	lea    eax,[ebp-0x28]
  401aff:	50                   	push   eax
  401b00:	ff 15 38 03 41 00    	call   DWORD PTR ds:0x410338
  401b06:	eb c7                	jmp    0x401acf
  401b08:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  401b0e:	74 b7                	je     0x401ac7
  401b10:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  401b16:	75 3a                	jne    0x401b52
  401b18:	68 e0 20 41 00       	push   0x4120e0
  401b1d:	e8 86 a3 00 00       	call   0x40bea8
  401b22:	81 3d c4 36 41 00 f1 	cmp    DWORD PTR ds:0x4136c4,0x3f1
  401b29:	03 00 00 
  401b2c:	59                   	pop    ecx
  401b2d:	75 07                	jne    0x401b36
  401b2f:	e8 6f 50 00 00       	call   0x406ba3
  401b34:	eb 0d                	jmp    0x401b43
  401b36:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401b3c:	50                   	push   eax
  401b3d:	e8 f4 60 00 00       	call   0x407c36
  401b42:	59                   	pop    ecx
  401b43:	53                   	push   ebx
  401b44:	53                   	push   ebx
  401b45:	6a 1a                	push   0x1a
  401b47:	68 ff ff 00 00       	push   0xffff
  401b4c:	ff 15 94 02 41 00    	call   DWORD PTR ds:0x410294
  401b52:	39 1d f4 36 41 00    	cmp    DWORD PTR ds:0x4136f4,ebx
  401b58:	74 6a                	je     0x401bc4
  401b5a:	39 1d 0c 37 41 00    	cmp    DWORD PTR ds:0x41370c,ebx
  401b60:	75 76                	jne    0x401bd8
  401b62:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401b68:	57                   	push   edi
  401b69:	50                   	push   eax
  401b6a:	6a 19                	push   0x19
  401b6c:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  401b72:	e8 26 90 00 00       	call   0x40ab9d
  401b77:	8d 85 84 f6 ff ff    	lea    eax,[ebp-0x97c]
  401b7d:	68 00 02 00 00       	push   0x200
  401b82:	50                   	push   eax
  401b83:	6a 44                	push   0x44
  401b85:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  401b8b:	e8 0d 90 00 00       	call   0x40ab9d
  401b90:	83 c4 20             	add    esp,0x20
  401b93:	33 c0                	xor    eax,eax
  401b95:	39 1d b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,ebx
  401b9b:	0f 95 c0             	setne  al
  401b9e:	50                   	push   eax
  401b9f:	8d 85 84 fd ff ff    	lea    eax,[ebp-0x27c]
  401ba5:	50                   	push   eax
  401ba6:	8d 85 84 f6 ff ff    	lea    eax,[ebp-0x97c]
  401bac:	50                   	push   eax
  401bad:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  401bb3:	ff 15 98 02 41 00    	call   DWORD PTR ds:0x410298
  401bb9:	83 f8 02             	cmp    eax,0x2
  401bbc:	75 06                	jne    0x401bc4
  401bbe:	89 1d f4 36 41 00    	mov    DWORD PTR ds:0x4136f4,ebx
  401bc4:	39 1d 0c 37 41 00    	cmp    DWORD PTR ds:0x41370c,ebx
  401bca:	75 0c                	jne    0x401bd8
  401bcc:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  401bd2:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  401bd8:	e8 4f 94 00 00       	call   0x40b02c
  401bdd:	eb 02                	jmp    0x401be1
  401bdf:	ff d6                	call   esi
  401be1:	a1 94 36 41 00       	mov    eax,ds:0x413694
  401be6:	3b c3                	cmp    eax,ebx
  401be8:	74 07                	je     0x401bf1
  401bea:	50                   	push   eax
  401beb:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  401bf1:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  401bf7:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  401bfd:	8b 35 74 02 41 00    	mov    esi,DWORD PTR ds:0x410274
  401c03:	53                   	push   ebx
  401c04:	53                   	push   ebx
  401c05:	8d 45 d8             	lea    eax,[ebp-0x28]
  401c08:	53                   	push   ebx
  401c09:	50                   	push   eax
  401c0a:	ff d6                	call   esi
  401c0c:	85 c0                	test   eax,eax
  401c0e:	74 1d                	je     0x401c2d
  401c10:	8d 45 d8             	lea    eax,[ebp-0x28]
  401c13:	50                   	push   eax
  401c14:	ff 15 64 02 41 00    	call   DWORD PTR ds:0x410264
  401c1a:	8d 45 d8             	lea    eax,[ebp-0x28]
  401c1d:	50                   	push   eax
  401c1e:	ff 15 38 03 41 00    	call   DWORD PTR ds:0x410338
  401c24:	53                   	push   ebx
  401c25:	53                   	push   ebx
  401c26:	8d 45 d8             	lea    eax,[ebp-0x28]
  401c29:	53                   	push   ebx
  401c2a:	50                   	push   eax
  401c2b:	eb dd                	jmp    0x401c0a
  401c2d:	a1 58 37 41 00       	mov    eax,ds:0x413758
  401c32:	3b c3                	cmp    eax,ebx
  401c34:	74 05                	je     0x401c3b
  401c36:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401c39:	ff d0                	call   eax
  401c3b:	39 1d 8c 3b 41 00    	cmp    DWORD PTR ds:0x413b8c,ebx
  401c41:	74 26                	je     0x401c69
  401c43:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401c49:	57                   	push   edi
  401c4a:	50                   	push   eax
  401c4b:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  401c51:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401c57:	53                   	push   ebx
  401c58:	50                   	push   eax
  401c59:	68 01 20 00 00       	push   0x2001
  401c5e:	68 00 10 00 00       	push   0x1000
  401c63:	ff 15 8c 3b 41 00    	call   DWORD PTR ds:0x413b8c
  401c69:	a1 3c 37 41 00       	mov    eax,ds:0x41373c
  401c6e:	3b c3                	cmp    eax,ebx
  401c70:	74 07                	je     0x401c79
  401c72:	50                   	push   eax
  401c73:	ff 15 04 01 41 00    	call   DWORD PTR ds:0x410104
  401c79:	ff 35 c0 3a 41 00    	push   DWORD PTR ds:0x413ac0
  401c7f:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  401c85:	ff 75 d0             	push   DWORD PTR [ebp-0x30]
  401c88:	8b 35 f4 00 41 00    	mov    esi,DWORD PTR ds:0x4100f4
  401c8e:	ff d6                	call   esi
  401c90:	ff 75 d4             	push   DWORD PTR [ebp-0x2c]
  401c93:	ff d6                	call   esi
  401c95:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  401c98:	ff d6                	call   esi
  401c9a:	a1 1c 37 41 00       	mov    eax,ds:0x41371c
  401c9f:	3b c3                	cmp    eax,ebx
  401ca1:	74 13                	je     0x401cb6
  401ca3:	50                   	push   eax
  401ca4:	ff 15 08 01 41 00    	call   DWORD PTR ds:0x410108
  401caa:	ff 35 1c 37 41 00    	push   DWORD PTR ds:0x41371c
  401cb0:	ff 15 0c 01 41 00    	call   DWORD PTR ds:0x41010c
  401cb6:	39 1d f4 36 41 00    	cmp    DWORD PTR ds:0x4136f4,ebx
  401cbc:	0f 84 0a 01 00 00    	je     0x401dcc
  401cc2:	a1 b0 36 41 00       	mov    eax,ds:0x4136b0
  401cc7:	83 f8 01             	cmp    eax,0x1
  401cca:	0f 84 af 00 00 00    	je     0x401d7f
  401cd0:	3b c3                	cmp    eax,ebx
  401cd2:	0f 85 f4 00 00 00    	jne    0x401dcc
  401cd8:	b8 f9 75 00 00       	mov    eax,0x75f9
  401cdd:	0f b7 c0             	movzx  eax,ax
  401ce0:	68 2c 01 00 00       	push   0x12c
  401ce5:	50                   	push   eax
  401ce6:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  401cec:	ff 15 84 01 41 00    	call   DWORD PTR ds:0x410184
  401cf2:	3b c3                	cmp    eax,ebx
  401cf4:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  401cf7:	0f 84 cf 00 00 00    	je     0x401dcc
  401cfd:	50                   	push   eax
  401cfe:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  401d04:	ff 15 10 01 41 00    	call   DWORD PTR ds:0x410110
  401d0a:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  401d0d:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
  401d10:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  401d16:	ff 15 dc 00 41 00    	call   DWORD PTR ds:0x4100dc
  401d1c:	3b c3                	cmp    eax,ebx
  401d1e:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  401d21:	0f 84 a5 00 00 00    	je     0x401dcc
  401d27:	50                   	push   eax
  401d28:	ff 15 e0 00 41 00    	call   DWORD PTR ds:0x4100e0
  401d2e:	3b c3                	cmp    eax,ebx
  401d30:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  401d33:	0f 84 8e 00 00 00    	je     0x401dc7
  401d39:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401d3f:	57                   	push   edi
  401d40:	50                   	push   eax
  401d41:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  401d47:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401d4d:	50                   	push   eax
  401d4e:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  401d54:	80 bc 05 83 fc ff ff 	cmp    BYTE PTR [ebp+eax*1-0x37d],0x5c
  401d5b:	5c 
  401d5c:	74 12                	je     0x401d70
  401d5e:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401d64:	68 e0 20 41 00       	push   0x4120e0
  401d69:	50                   	push   eax
  401d6a:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  401d70:	39 1d b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,ebx
  401d76:	75 11                	jne    0x401d89
  401d78:	68 d0 20 41 00       	push   0x4120d0
  401d7d:	eb 0f                	jmp    0x401d8e
  401d7f:	b8 fa 75 00 00       	mov    eax,0x75fa
  401d84:	e9 54 ff ff ff       	jmp    0x401cdd
  401d89:	68 c0 20 41 00       	push   0x4120c0
  401d8e:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401d94:	50                   	push   eax
  401d95:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  401d9b:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401da1:	53                   	push   ebx
  401da2:	50                   	push   eax
  401da3:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  401da9:	83 f8 ff             	cmp    eax,0xffffffff
  401dac:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  401daf:	74 16                	je     0x401dc7
  401db1:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  401db4:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  401db7:	50                   	push   eax
  401db8:	ff 15 18 01 41 00    	call   DWORD PTR ds:0x410118
  401dbe:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  401dc1:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  401dc7:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  401dca:	ff d6                	call   esi
  401dcc:	a1 08 3b 41 00       	mov    eax,ds:0x413b08
  401dd1:	3b c3                	cmp    eax,ebx
  401dd3:	74 07                	je     0x401ddc
  401dd5:	50                   	push   eax
  401dd6:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  401ddc:	a1 50 37 41 00       	mov    eax,ds:0x413750
  401de1:	3b c3                	cmp    eax,ebx
  401de3:	74 07                	je     0x401dec
  401de5:	50                   	push   eax
  401de6:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  401dec:	39 5d f4             	cmp    DWORD PTR [ebp-0xc],ebx
  401def:	8b 35 20 01 41 00    	mov    esi,DWORD PTR ds:0x410120
  401df5:	74 7e                	je     0x401e75
  401df7:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  401dfd:	0f 85 0d 01 00 00    	jne    0x401f10
  401e03:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401e09:	57                   	push   edi
  401e0a:	50                   	push   eax
  401e0b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401e0e:	ff 15 6c 01 41 00    	call   DWORD PTR ds:0x41016c
  401e14:	39 1d b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,ebx
  401e1a:	8b 3d ac 01 41 00    	mov    edi,DWORD PTR ds:0x4101ac
  401e20:	74 15                	je     0x401e37
  401e22:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  401e28:	68 00 02 00 00       	push   0x200
  401e2d:	50                   	push   eax
  401e2e:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401e34:	50                   	push   eax
  401e35:	ff d7                	call   edi
  401e37:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401e3d:	68 68 21 41 00       	push   0x412168
  401e42:	50                   	push   eax
  401e43:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  401e49:	8d 8d 84 fe ff ff    	lea    ecx,[ebp-0x17c]
  401e4f:	83 e9 03             	sub    ecx,0x3
  401e52:	03 c1                	add    eax,ecx
  401e54:	50                   	push   eax
  401e55:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  401e5b:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  401e61:	68 00 02 00 00       	push   0x200
  401e66:	50                   	push   eax
  401e67:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401e6d:	50                   	push   eax
  401e6e:	ff d7                	call   edi
  401e70:	e9 9b 00 00 00       	jmp    0x401f10
  401e75:	8d 85 84 fb ff ff    	lea    eax,[ebp-0x47c]
  401e7b:	57                   	push   edi
  401e7c:	50                   	push   eax
  401e7d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401e80:	ff 15 6c 01 41 00    	call   DWORD PTR ds:0x41016c
  401e86:	8d 85 84 fb ff ff    	lea    eax,[ebp-0x47c]
  401e8c:	53                   	push   ebx
  401e8d:	50                   	push   eax
  401e8e:	e8 01 89 00 00       	call   0x40a794
  401e93:	39 1d f4 36 41 00    	cmp    DWORD PTR ds:0x4136f4,ebx
  401e99:	59                   	pop    ecx
  401e9a:	59                   	pop    ecx
  401e9b:	88 5d 08             	mov    BYTE PTR [ebp+0x8],bl
  401e9e:	74 18                	je     0x401eb8
  401ea0:	83 3d b0 36 41 00 02 	cmp    DWORD PTR ds:0x4136b0,0x2
  401ea7:	75 0f                	jne    0x401eb8
  401ea9:	8d 45 08             	lea    eax,[ebp+0x8]
  401eac:	68 bc 20 41 00       	push   0x4120bc
  401eb1:	50                   	push   eax
  401eb2:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  401eb8:	8d 85 84 f8 ff ff    	lea    eax,[ebp-0x77c]
  401ebe:	50                   	push   eax
  401ebf:	8d 85 84 fb ff ff    	lea    eax,[ebp-0x47c]
  401ec5:	50                   	push   eax
  401ec6:	8d 45 08             	lea    eax,[ebp+0x8]
  401ec9:	50                   	push   eax
  401eca:	8d 85 84 f9 ff ff    	lea    eax,[ebp-0x67c]
  401ed0:	50                   	push   eax
  401ed1:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401ed7:	68 ac 20 41 00       	push   0x4120ac
  401edc:	50                   	push   eax
  401edd:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  401ee3:	83 c4 18             	add    esp,0x18
  401ee6:	39 1d 88 3a 41 00    	cmp    DWORD PTR ds:0x413a88,ebx
  401eec:	74 15                	je     0x401f03
  401eee:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  401ef4:	75 0d                	jne    0x401f03
  401ef6:	8d 85 84 fe ff ff    	lea    eax,[ebp-0x17c]
  401efc:	6a 05                	push   0x5
  401efe:	50                   	push   eax
  401eff:	ff d6                	call   esi
  401f01:	eb 0d                	jmp    0x401f10
  401f03:	8d 85 84 fb ff ff    	lea    eax,[ebp-0x47c]
  401f09:	50                   	push   eax
  401f0a:	ff 15 f0 00 41 00    	call   DWORD PTR ds:0x4100f0
  401f10:	e8 e5 97 00 00       	call   0x40b6fa
  401f15:	a1 60 37 41 00       	mov    eax,ds:0x413760
  401f1a:	3b c3                	cmp    eax,ebx
  401f1c:	74 07                	je     0x401f25
  401f1e:	50                   	push   eax
  401f1f:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  401f25:	39 1d f4 36 41 00    	cmp    DWORD PTR ds:0x4136f4,ebx
  401f2b:	74 39                	je     0x401f66
  401f2d:	a1 b0 36 41 00       	mov    eax,ds:0x4136b0
  401f32:	83 f8 01             	cmp    eax,0x1
  401f35:	74 24                	je     0x401f5b
  401f37:	3b c3                	cmp    eax,ebx
  401f39:	74 20                	je     0x401f5b
  401f3b:	39 5d f4             	cmp    DWORD PTR [ebp-0xc],ebx
  401f3e:	75 26                	jne    0x401f66
  401f40:	39 1d 88 3a 41 00    	cmp    DWORD PTR ds:0x413a88,ebx
  401f46:	74 08                	je     0x401f50
  401f48:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  401f4e:	74 16                	je     0x401f66
  401f50:	53                   	push   ebx
  401f51:	6a 02                	push   0x2
  401f53:	ff 15 a0 02 41 00    	call   DWORD PTR ds:0x4102a0
  401f59:	eb 0b                	jmp    0x401f66
  401f5b:	8d 85 84 fc ff ff    	lea    eax,[ebp-0x37c]
  401f61:	6a 05                	push   0x5
  401f63:	50                   	push   eax
  401f64:	ff d6                	call   esi
  401f66:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  401f69:	5f                   	pop    edi
  401f6a:	5e                   	pop    esi
  401f6b:	5b                   	pop    ebx
  401f6c:	c9                   	leave
  401f6d:	c2 10 00             	ret    0x10
  401f70:	55                   	push   ebp
  401f71:	8b ec                	mov    ebp,esp
  401f73:	83 ec 28             	sub    esp,0x28
  401f76:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  401f79:	56                   	push   esi
  401f7a:	33 f6                	xor    esi,esi
  401f7c:	6a 65                	push   0x65
  401f7e:	50                   	push   eax
  401f7f:	89 75 d8             	mov    DWORD PTR [ebp-0x28],esi
  401f82:	c7 45 dc e7 20 40 00 	mov    DWORD PTR [ebp-0x24],0x4020e7
  401f89:	89 75 e0             	mov    DWORD PTR [ebp-0x20],esi
  401f8c:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
  401f8f:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  401f92:	ff 15 4c 02 41 00    	call   DWORD PTR ds:0x41024c
  401f98:	68 00 7f 00 00       	push   0x7f00
  401f9d:	56                   	push   esi
  401f9e:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  401fa1:	ff 15 7c 02 41 00    	call   DWORD PTR ds:0x41027c
  401fa7:	56                   	push   esi
  401fa8:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  401fab:	ff 15 ac 00 41 00    	call   DWORD PTR ds:0x4100ac
  401fb1:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  401fb4:	a1 5c 20 41 00       	mov    eax,ds:0x41205c
  401fb9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  401fbc:	8d 45 d8             	lea    eax,[ebp-0x28]
  401fbf:	50                   	push   eax
  401fc0:	89 75 f8             	mov    DWORD PTR [ebp-0x8],esi
  401fc3:	ff 15 48 02 41 00    	call   DWORD PTR ds:0x410248
  401fc9:	0f b7 c0             	movzx  eax,ax
  401fcc:	5e                   	pop    esi
  401fcd:	c9                   	leave
  401fce:	c3                   	ret
  401fcf:	55                   	push   ebp
  401fd0:	8b ec                	mov    ebp,esp
  401fd2:	83 ec 18             	sub    esp,0x18
  401fd5:	53                   	push   ebx
  401fd6:	8b 1d 68 02 41 00    	mov    ebx,DWORD PTR ds:0x410268
  401fdc:	56                   	push   esi
  401fdd:	57                   	push   edi
  401fde:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  401fe1:	33 f6                	xor    esi,esi
  401fe3:	39 35 0c 37 41 00    	cmp    DWORD PTR ds:0x41370c,esi
  401fe9:	89 3d 90 3a 41 00    	mov    DWORD PTR ds:0x413a90,edi
  401fef:	75 78                	jne    0x402069
  401ff1:	39 35 4c 37 41 00    	cmp    DWORD PTR ds:0x41374c,esi
  401ff7:	75 70                	jne    0x402069
  401ff9:	68 84 3b 41 00       	push   0x413b84
  401ffe:	6a 6f                	push   0x6f
  402000:	e8 a7 9b 00 00       	call   0x40bbac
  402005:	59                   	pop    ecx
  402006:	a3 50 37 41 00       	mov    ds:0x413750,eax
  40200b:	59                   	pop    ecx
  40200c:	8d 4d e8             	lea    ecx,[ebp-0x18]
  40200f:	51                   	push   ecx
  402010:	6a 18                	push   0x18
  402012:	50                   	push   eax
  402013:	ff 15 54 00 41 00    	call   DWORD PTR ds:0x410054
  402019:	56                   	push   esi
  40201a:	57                   	push   edi
  40201b:	56                   	push   esi
  40201c:	56                   	push   esi
  40201d:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  402020:	8b 3d 6c 02 41 00    	mov    edi,DWORD PTR ds:0x41026c
  402026:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  402029:	6a 01                	push   0x1
  40202b:	ff d7                	call   edi
  40202d:	2b 45 f0             	sub    eax,DWORD PTR [ebp-0x10]
  402030:	99                   	cdq
  402031:	2b c2                	sub    eax,edx
  402033:	d1 f8                	sar    eax,1
  402035:	50                   	push   eax
  402036:	56                   	push   esi
  402037:	ff d7                	call   edi
  402039:	2b 45 ec             	sub    eax,DWORD PTR [ebp-0x14]
  40203c:	99                   	cdq
  40203d:	2b c2                	sub    eax,edx
  40203f:	d1 f8                	sar    eax,1
  402041:	50                   	push   eax
  402042:	68 00 00 00 90       	push   0x90000000
  402047:	68 6c 21 41 00       	push   0x41216c
  40204c:	ff 35 5c 20 41 00    	push   DWORD PTR ds:0x41205c
  402052:	56                   	push   esi
  402053:	ff d3                	call   ebx
  402055:	56                   	push   esi
  402056:	68 c4 09 00 00       	push   0x9c4
  40205b:	6a 01                	push   0x1
  40205d:	50                   	push   eax
  40205e:	a3 94 36 41 00       	mov    ds:0x413694,eax
  402063:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  402069:	56                   	push   esi
  40206a:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40206d:	56                   	push   esi
  40206e:	56                   	push   esi
  40206f:	68 e0 01 00 00       	push   0x1e0
  402074:	68 80 02 00 00       	push   0x280
  402079:	56                   	push   esi
  40207a:	56                   	push   esi
  40207b:	68 00 00 cd 00       	push   0xcd0000
  402080:	68 6c 21 41 00       	push   0x41216c
  402085:	ff 35 5c 20 41 00    	push   DWORD PTR ds:0x41205c
  40208b:	56                   	push   esi
  40208c:	ff d3                	call   ebx
  40208e:	3b c6                	cmp    eax,esi
  402090:	a3 98 36 41 00       	mov    ds:0x413698,eax
  402095:	75 04                	jne    0x40209b
  402097:	33 c0                	xor    eax,eax
  402099:	eb 47                	jmp    0x4020e2
  40209b:	8b 0d c4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ac4
  4020a1:	3b ce                	cmp    ecx,esi
  4020a3:	74 0d                	je     0x4020b2
  4020a5:	51                   	push   ecx
  4020a6:	50                   	push   eax
  4020a7:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  4020ad:	a1 98 36 41 00       	mov    eax,ds:0x413698
  4020b2:	39 35 0c 37 41 00    	cmp    DWORD PTR ds:0x41370c,esi
  4020b8:	75 1e                	jne    0x4020d8
  4020ba:	39 35 4c 37 41 00    	cmp    DWORD PTR ds:0x41374c,esi
  4020c0:	75 16                	jne    0x4020d8
  4020c2:	39 35 b4 36 41 00    	cmp    DWORD PTR ds:0x4136b4,esi
  4020c8:	75 0e                	jne    0x4020d8
  4020ca:	6a 03                	push   0x3
  4020cc:	50                   	push   eax
  4020cd:	ff 15 54 02 41 00    	call   DWORD PTR ds:0x410254
  4020d3:	a1 98 36 41 00       	mov    eax,ds:0x413698
  4020d8:	50                   	push   eax
  4020d9:	ff 15 50 02 41 00    	call   DWORD PTR ds:0x410250
  4020df:	6a 01                	push   0x1
  4020e1:	58                   	pop    eax
  4020e2:	5f                   	pop    edi
  4020e3:	5e                   	pop    esi
  4020e4:	5b                   	pop    ebx
  4020e5:	c9                   	leave
  4020e6:	c3                   	ret
  4020e7:	55                   	push   ebp
  4020e8:	8b ec                	mov    ebp,esp
  4020ea:	81 ec 80 02 00 00    	sub    esp,0x280
  4020f0:	53                   	push   ebx
  4020f1:	56                   	push   esi
  4020f2:	57                   	push   edi
  4020f3:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  4020f6:	33 f6                	xor    esi,esi
  4020f8:	3b 3d 94 36 41 00    	cmp    edi,DWORD PTR ds:0x413694
  4020fe:	0f 84 0b 02 00 00    	je     0x40230f
  402104:	39 35 98 36 41 00    	cmp    DWORD PTR ds:0x413698,esi
  40210a:	0f 84 ff 01 00 00    	je     0x40230f
  402110:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  402113:	48                   	dec    eax
  402114:	48                   	dec    eax
  402115:	0f 84 e8 01 00 00    	je     0x402303
  40211b:	83 e8 0d             	sub    eax,0xd
  40211e:	0f 84 bc 00 00 00    	je     0x4021e0
  402124:	83 e8 05             	sub    eax,0x5
  402127:	0f 84 ab 00 00 00    	je     0x4021d8
  40212d:	2d ff 00 00 00       	sub    eax,0xff
  402132:	0f 84 95 00 00 00    	je     0x4021cd
  402138:	2d fc 01 00 00       	sub    eax,0x1fc
  40213d:	74 22                	je     0x402161
  40213f:	48                   	dec    eax
  402140:	48                   	dec    eax
  402141:	74 15                	je     0x402158
  402143:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  402146:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402149:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40214c:	57                   	push   edi
  40214d:	ff 15 c0 02 41 00    	call   DWORD PTR ds:0x4102c0
  402153:	e9 f9 03 00 00       	jmp    0x402551
  402158:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
  40215b:	0f 84 ee 03 00 00    	je     0x40254f
  402161:	39 35 60 37 41 00    	cmp    DWORD PTR ds:0x413760,esi
  402167:	0f 84 e2 03 00 00    	je     0x40254f
  40216d:	57                   	push   edi
  40216e:	ff 15 bc 02 41 00    	call   DWORD PTR ds:0x4102bc
  402174:	56                   	push   esi
  402175:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  402178:	ff 35 60 37 41 00    	push   DWORD PTR ds:0x413760
  40217e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402181:	8b 3d 80 00 41 00    	mov    edi,DWORD PTR ds:0x410080
  402187:	ff d7                	call   edi
  402189:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40218c:	8b 1d 7c 00 41 00    	mov    ebx,DWORD PTR ds:0x41007c
  402192:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
  402195:	ff d3                	call   ebx
  402197:	3b c6                	cmp    eax,esi
  402199:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  40219c:	74 0c                	je     0x4021aa
  40219e:	6a 01                	push   0x1
  4021a0:	56                   	push   esi
  4021a1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4021a4:	ff 15 b8 02 41 00    	call   DWORD PTR ds:0x4102b8
  4021aa:	6a 01                	push   0x1
  4021ac:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  4021af:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4021b2:	ff d7                	call   edi
  4021b4:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4021b7:	ff d3                	call   ebx
  4021b9:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4021bc:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4021bf:	ff 15 b4 02 41 00    	call   DWORD PTR ds:0x4102b4
  4021c5:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  4021c8:	e9 84 03 00 00       	jmp    0x402551
  4021cd:	89 35 ac 3a 41 00    	mov    DWORD PTR ds:0x413aac,esi
  4021d3:	e9 77 03 00 00       	jmp    0x40254f
  4021d8:	6a 01                	push   0x1
  4021da:	58                   	pop    eax
  4021db:	e9 71 03 00 00       	jmp    0x402551
  4021e0:	8d 45 80             	lea    eax,[ebp-0x80]
  4021e3:	50                   	push   eax
  4021e4:	57                   	push   edi
  4021e5:	ff 15 b0 02 41 00    	call   DWORD PTR ds:0x4102b0
  4021eb:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  4021ee:	8d 45 c0             	lea    eax,[ebp-0x40]
  4021f1:	50                   	push   eax
  4021f2:	57                   	push   edi
  4021f3:	ff 15 ac 02 41 00    	call   DWORD PTR ds:0x4102ac
  4021f9:	a1 60 37 41 00       	mov    eax,ds:0x413760
  4021fe:	3b c6                	cmp    eax,esi
  402200:	74 14                	je     0x402216
  402202:	56                   	push   esi
  402203:	50                   	push   eax
  402204:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402207:	ff 15 80 00 41 00    	call   DWORD PTR ds:0x410080
  40220d:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402210:	ff 15 7c 00 41 00    	call   DWORD PTR ds:0x41007c
  402216:	8b 3d 84 00 41 00    	mov    edi,DWORD PTR ds:0x410084
  40221c:	83 c8 ff             	or     eax,0xffffffff
  40221f:	33 c9                	xor    ecx,ecx
  402221:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
  402224:	eb 03                	jmp    0x402229
  402226:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  402229:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  40222c:	8d 41 01             	lea    eax,[ecx+0x1]
  40222f:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  402232:	0f af 45 cc          	imul   eax,DWORD PTR [ebp-0x34]
  402236:	6a 60                	push   0x60
  402238:	89 75 14             	mov    DWORD PTR [ebp+0x14],esi
  40223b:	99                   	cdq
  40223c:	59                   	pop    ecx
  40223d:	c7 45 fc 03 00 00 00 	mov    DWORD PTR [ebp-0x4],0x3
  402244:	f7 f9                	idiv   ecx
  402246:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  402249:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  40224c:	6a 5f                	push   0x5f
  40224e:	5b                   	pop    ebx
  40224f:	8d 88 e0 3a 41 00    	lea    ecx,[eax+0x413ae0]
  402255:	8b 80 ec 3a 41 00    	mov    eax,DWORD PTR [eax+0x413aec]
  40225b:	8b 09                	mov    ecx,DWORD PTR [ecx]
  40225d:	0f af 45 10          	imul   eax,DWORD PTR [ebp+0x10]
  402261:	99                   	cdq
  402262:	f7 fb                	idiv   ebx
  402264:	03 c8                	add    ecx,eax
  402266:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  402269:	3b ce                	cmp    ecx,esi
  40226b:	8d 44 05 d0          	lea    eax,[ebp+eax*1-0x30]
  40226f:	89 08                	mov    DWORD PTR [eax],ecx
  402271:	7d 02                	jge    0x402275
  402273:	89 30                	mov    DWORD PTR [eax],esi
  402275:	b9 ff 00 00 00       	mov    ecx,0xff
  40227a:	39 08                	cmp    DWORD PTR [eax],ecx
  40227c:	7e 02                	jle    0x402280
  40227e:	89 08                	mov    DWORD PTR [eax],ecx
  402280:	83 45 14 04          	add    DWORD PTR [ebp+0x14],0x4
  402284:	ff 4d fc             	dec    DWORD PTR [ebp-0x4]
  402287:	75 c0                	jne    0x402249
  402289:	39 35 60 37 41 00    	cmp    DWORD PTR ds:0x413760,esi
  40228f:	74 0b                	je     0x40229c
  402291:	0f b7 45 10          	movzx  eax,WORD PTR [ebp+0x10]
  402295:	0d 00 00 00 01       	or     eax,0x1000000
  40229a:	eb 16                	jmp    0x4022b2
  40229c:	0f b6 45 d8          	movzx  eax,BYTE PTR [ebp-0x28]
  4022a0:	0f b6 4d d4          	movzx  ecx,BYTE PTR [ebp-0x2c]
  4022a4:	c1 e0 08             	shl    eax,0x8
  4022a7:	0b c1                	or     eax,ecx
  4022a9:	0f b6 4d d0          	movzx  ecx,BYTE PTR [ebp-0x30]
  4022ad:	c1 e0 08             	shl    eax,0x8
  4022b0:	0b c1                	or     eax,ecx
  4022b2:	50                   	push   eax
  4022b3:	ff 15 74 00 41 00    	call   DWORD PTR ds:0x410074
  4022b9:	8b d8                	mov    ebx,eax
  4022bb:	53                   	push   ebx
  4022bc:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4022bf:	ff d7                	call   edi
  4022c1:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  4022c4:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  4022c7:	2b 45 e8             	sub    eax,DWORD PTR [ebp-0x18]
  4022ca:	68 21 00 f0 00       	push   0xf00021
  4022cf:	50                   	push   eax
  4022d0:	ff 75 c8             	push   DWORD PTR [ebp-0x38]
  4022d3:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
  4022d6:	56                   	push   esi
  4022d7:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4022da:	ff 15 70 00 41 00    	call   DWORD PTR ds:0x410070
  4022e0:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4022e3:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4022e6:	ff d7                	call   edi
  4022e8:	53                   	push   ebx
  4022e9:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  4022ef:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  4022f2:	83 f9 60             	cmp    ecx,0x60
  4022f5:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
  4022f8:	0f 8c 28 ff ff ff    	jl     0x402226
  4022fe:	e9 37 02 00 00       	jmp    0x40253a
  402303:	56                   	push   esi
  402304:	ff 15 a8 02 41 00    	call   DWORD PTR ds:0x4102a8
  40230a:	e9 40 02 00 00       	jmp    0x40254f
  40230f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  402312:	48                   	dec    eax
  402313:	48                   	dec    eax
  402314:	0f 84 2f 02 00 00    	je     0x402549
  40231a:	83 e8 0d             	sub    eax,0xd
  40231d:	74 50                	je     0x40236f
  40231f:	2d 04 01 00 00       	sub    eax,0x104
  402324:	74 3a                	je     0x402360
  402326:	2d fc 01 00 00       	sub    eax,0x1fc
  40232b:	74 11                	je     0x40233e
  40232d:	48                   	dec    eax
  40232e:	48                   	dec    eax
  40232f:	0f 85 0e fe ff ff    	jne    0x402143
  402335:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
  402338:	0f 84 11 02 00 00    	je     0x40254f
  40233e:	39 35 84 3b 41 00    	cmp    DWORD PTR ds:0x413b84,esi
  402344:	0f 84 05 02 00 00    	je     0x40254f
  40234a:	57                   	push   edi
  40234b:	ff 15 bc 02 41 00    	call   DWORD PTR ds:0x4102bc
  402351:	56                   	push   esi
  402352:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  402355:	ff 35 84 3b 41 00    	push   DWORD PTR ds:0x413b84
  40235b:	e9 1e fe ff ff       	jmp    0x40217e
  402360:	c7 05 18 37 41 00 01 	mov    DWORD PTR ds:0x413718,0x1
  402367:	00 00 00 
  40236a:	e9 e0 01 00 00       	jmp    0x40254f
  40236f:	8d 45 80             	lea    eax,[ebp-0x80]
  402372:	50                   	push   eax
  402373:	57                   	push   edi
  402374:	ff 15 b0 02 41 00    	call   DWORD PTR ds:0x4102b0
  40237a:	8b f8                	mov    edi,eax
  40237c:	a1 60 37 41 00       	mov    eax,ds:0x413760
  402381:	3b c6                	cmp    eax,esi
  402383:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  402386:	74 10                	je     0x402398
  402388:	56                   	push   esi
  402389:	50                   	push   eax
  40238a:	57                   	push   edi
  40238b:	ff 15 80 00 41 00    	call   DWORD PTR ds:0x410080
  402391:	57                   	push   edi
  402392:	ff 15 7c 00 41 00    	call   DWORD PTR ds:0x41007c
  402398:	57                   	push   edi
  402399:	ff 15 78 00 41 00    	call   DWORD PTR ds:0x410078
  40239f:	ff 35 50 37 41 00    	push   DWORD PTR ds:0x413750
  4023a5:	8b 3d 84 00 41 00    	mov    edi,DWORD PTR ds:0x410084
  4023ab:	8b d8                	mov    ebx,eax
  4023ad:	53                   	push   ebx
  4023ae:	ff d7                	call   edi
  4023b0:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  4023b3:	8d 45 dc             	lea    eax,[ebp-0x24]
  4023b6:	50                   	push   eax
  4023b7:	6a 18                	push   0x18
  4023b9:	ff 35 50 37 41 00    	push   DWORD PTR ds:0x413750
  4023bf:	ff 15 54 00 41 00    	call   DWORD PTR ds:0x410054
  4023c5:	68 20 00 cc 00       	push   0xcc0020
  4023ca:	56                   	push   esi
  4023cb:	56                   	push   esi
  4023cc:	53                   	push   ebx
  4023cd:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  4023d0:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  4023d3:	56                   	push   esi
  4023d4:	56                   	push   esi
  4023d5:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4023d8:	ff 15 68 00 41 00    	call   DWORD PTR ds:0x410068
  4023de:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4023e1:	53                   	push   ebx
  4023e2:	ff d7                	call   edi
  4023e4:	53                   	push   ebx
  4023e5:	ff 15 64 00 41 00    	call   DWORD PTR ds:0x410064
  4023eb:	bb 00 01 00 00       	mov    ebx,0x100
  4023f0:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  4023f6:	53                   	push   ebx
  4023f7:	50                   	push   eax
  4023f8:	6a 19                	push   0x19
  4023fa:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  402400:	e8 98 87 00 00       	call   0x40ab9d
  402405:	a1 9c 36 41 00       	mov    eax,ds:0x41369c
  40240a:	83 c4 10             	add    esp,0x10
  40240d:	3b c6                	cmp    eax,esi
  40240f:	75 05                	jne    0x402416
  402411:	b8 80 21 41 00       	mov    eax,0x412180
  402416:	50                   	push   eax
  402417:	56                   	push   esi
  402418:	0f b6 05 e4 36 41 00 	movzx  eax,BYTE PTR ds:0x4136e4
  40241f:	56                   	push   esi
  402420:	56                   	push   esi
  402421:	56                   	push   esi
  402422:	50                   	push   eax
  402423:	56                   	push   esi
  402424:	56                   	push   esi
  402425:	56                   	push   esi
  402426:	68 bc 02 00 00       	push   0x2bc
  40242b:	56                   	push   esi
  40242c:	56                   	push   esi
  40242d:	56                   	push   esi
  40242e:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  402431:	6a 48                	push   0x48
  402433:	6a 5a                	push   0x5a
  402435:	56                   	push   esi
  402436:	ff 15 6c 00 41 00    	call   DWORD PTR ds:0x41006c
  40243c:	50                   	push   eax
  40243d:	0f b6 05 40 37 41 00 	movzx  eax,BYTE PTR ds:0x413740
  402444:	50                   	push   eax
  402445:	ff 15 5c 01 41 00    	call   DWORD PTR ds:0x41015c
  40244b:	f7 d8                	neg    eax
  40244d:	50                   	push   eax
  40244e:	ff 15 5c 00 41 00    	call   DWORD PTR ds:0x41005c
  402454:	50                   	push   eax
  402455:	56                   	push   esi
  402456:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
  402459:	ff d7                	call   edi
  40245b:	6a 01                	push   0x1
  40245d:	56                   	push   esi
  40245e:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  402461:	ff 15 58 00 41 00    	call   DWORD PTR ds:0x410058
  402467:	68 ff ff ff 00       	push   0xffffff
  40246c:	56                   	push   esi
  40246d:	ff 15 60 00 41 00    	call   DWORD PTR ds:0x410060
  402473:	8b 35 70 01 41 00    	mov    esi,DWORD PTR ds:0x410170
  402479:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  40247f:	50                   	push   eax
  402480:	ff d6                	call   esi
  402482:	50                   	push   eax
  402483:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  402489:	50                   	push   eax
  40248a:	6a 06                	push   0x6
  40248c:	6a 08                	push   0x8
  40248e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402491:	ff 15 50 00 41 00    	call   DWORD PTR ds:0x410050
  402497:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  40249d:	53                   	push   ebx
  40249e:	50                   	push   eax
  40249f:	6a 46                	push   0x46
  4024a1:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4024a7:	e8 f1 86 00 00       	call   0x40ab9d
  4024ac:	83 c4 10             	add    esp,0x10
  4024af:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  4024b5:	68 70 21 41 00       	push   0x412170
  4024ba:	50                   	push   eax
  4024bb:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  4024c1:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  4024c7:	50                   	push   eax
  4024c8:	ff d6                	call   esi
  4024ca:	8d 84 05 80 fd ff ff 	lea    eax,[ebp+eax*1-0x280]
  4024d1:	53                   	push   ebx
  4024d2:	50                   	push   eax
  4024d3:	6a 47                	push   0x47
  4024d5:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4024db:	e8 bd 86 00 00       	call   0x40ab9d
  4024e0:	83 c4 10             	add    esp,0x10
  4024e3:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  4024e9:	50                   	push   eax
  4024ea:	ff d6                	call   esi
  4024ec:	8b f0                	mov    esi,eax
  4024ee:	8d 45 f4             	lea    eax,[ebp-0xc]
  4024f1:	50                   	push   eax
  4024f2:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  4024f8:	56                   	push   esi
  4024f9:	50                   	push   eax
  4024fa:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4024fd:	ff 15 4c 00 41 00    	call   DWORD PTR ds:0x41004c
  402503:	56                   	push   esi
  402504:	8d 85 80 fd ff ff    	lea    eax,[ebp-0x280]
  40250a:	50                   	push   eax
  40250b:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  40250e:	99                   	cdq
  40250f:	2b c2                	sub    eax,edx
  402511:	d1 f8                	sar    eax,1
  402513:	50                   	push   eax
  402514:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  402517:	2b 45 f4             	sub    eax,DWORD PTR [ebp-0xc]
  40251a:	99                   	cdq
  40251b:	2b c2                	sub    eax,edx
  40251d:	d1 f8                	sar    eax,1
  40251f:	50                   	push   eax
  402520:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402523:	ff 15 50 00 41 00    	call   DWORD PTR ds:0x410050
  402529:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40252c:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40252f:	ff d7                	call   edi
  402531:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  402534:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  40253a:	8d 45 80             	lea    eax,[ebp-0x80]
  40253d:	50                   	push   eax
  40253e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402541:	ff 15 a4 02 41 00    	call   DWORD PTR ds:0x4102a4
  402547:	eb 06                	jmp    0x40254f
  402549:	89 35 94 36 41 00    	mov    DWORD PTR ds:0x413694,esi
  40254f:	33 c0                	xor    eax,eax
  402551:	5f                   	pop    edi
  402552:	5e                   	pop    esi
  402553:	5b                   	pop    ebx
  402554:	c9                   	leave
  402555:	c2 10 00             	ret    0x10
  402558:	55                   	push   ebp
  402559:	8b ec                	mov    ebp,esp
  40255b:	81 ec 10 01 00 00    	sub    esp,0x110
  402561:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  402564:	2d 10 01 00 00       	sub    eax,0x110
  402569:	74 1e                	je     0x402589
  40256b:	48                   	dec    eax
  40256c:	74 07                	je     0x402575
  40256e:	33 c0                	xor    eax,eax
  402570:	e9 48 01 00 00       	jmp    0x4026bd
  402575:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402578:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40257b:	ff 15 d0 02 41 00    	call   DWORD PTR ds:0x4102d0
  402581:	6a 01                	push   0x1
  402583:	58                   	pop    eax
  402584:	e9 34 01 00 00       	jmp    0x4026bd
  402589:	53                   	push   ebx
  40258a:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40258d:	56                   	push   esi
  40258e:	57                   	push   edi
  40258f:	53                   	push   ebx
  402590:	e8 57 84 00 00       	call   0x40a9ec
  402595:	8b 35 cc 02 41 00    	mov    esi,DWORD PTR ds:0x4102cc
  40259b:	59                   	pop    ecx
  40259c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4025a2:	68 ea 03 00 00       	push   0x3ea
  4025a7:	53                   	push   ebx
  4025a8:	ff d6                	call   esi
  4025aa:	83 3d c0 36 41 00 00 	cmp    DWORD PTR ds:0x4136c0,0x0
  4025b1:	bf 00 01 00 00       	mov    edi,0x100
  4025b6:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  4025bc:	57                   	push   edi
  4025bd:	50                   	push   eax
  4025be:	74 04                	je     0x4025c4
  4025c0:	6a 4c                	push   0x4c
  4025c2:	eb 02                	jmp    0x4025c6
  4025c4:	6a 3e                	push   0x3e
  4025c6:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4025cc:	e8 cc 85 00 00       	call   0x40ab9d
  4025d1:	83 c4 10             	add    esp,0x10
  4025d4:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  4025da:	50                   	push   eax
  4025db:	53                   	push   ebx
  4025dc:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  4025e2:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  4025e8:	57                   	push   edi
  4025e9:	50                   	push   eax
  4025ea:	6a 33                	push   0x33
  4025ec:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4025f2:	e8 a6 85 00 00       	call   0x40ab9d
  4025f7:	83 c4 10             	add    esp,0x10
  4025fa:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402600:	50                   	push   eax
  402601:	68 ed 03 00 00       	push   0x3ed
  402606:	53                   	push   ebx
  402607:	ff d6                	call   esi
  402609:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40260f:	57                   	push   edi
  402610:	50                   	push   eax
  402611:	6a 34                	push   0x34
  402613:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  402619:	e8 7f 85 00 00       	call   0x40ab9d
  40261e:	83 c4 10             	add    esp,0x10
  402621:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402627:	50                   	push   eax
  402628:	68 ee 03 00 00       	push   0x3ee
  40262d:	53                   	push   ebx
  40262e:	ff d6                	call   esi
  402630:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402636:	57                   	push   edi
  402637:	50                   	push   eax
  402638:	6a 45                	push   0x45
  40263a:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  402640:	e8 58 85 00 00       	call   0x40ab9d
  402645:	83 c4 10             	add    esp,0x10
  402648:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40264e:	50                   	push   eax
  40264f:	68 ef 03 00 00       	push   0x3ef
  402654:	53                   	push   ebx
  402655:	ff d6                	call   esi
  402657:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40265d:	57                   	push   edi
  40265e:	50                   	push   eax
  40265f:	6a 35                	push   0x35
  402661:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  402667:	e8 31 85 00 00       	call   0x40ab9d
  40266c:	83 c4 10             	add    esp,0x10
  40266f:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402675:	50                   	push   eax
  402676:	6a 01                	push   0x1
  402678:	53                   	push   ebx
  402679:	ff d6                	call   esi
  40267b:	8d 45 f0             	lea    eax,[ebp-0x10]
  40267e:	50                   	push   eax
  40267f:	53                   	push   ebx
  402680:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  402686:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  402689:	a1 a4 37 41 00       	mov    eax,ds:0x4137a4
  40268e:	2b 55 f4             	sub    edx,DWORD PTR [ebp-0xc]
  402691:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  402694:	2b 4d f0             	sub    ecx,DWORD PTR [ebp-0x10]
  402697:	6a 00                	push   0x0
  402699:	2b c2                	sub    eax,edx
  40269b:	52                   	push   edx
  40269c:	99                   	cdq
  40269d:	2b c2                	sub    eax,edx
  40269f:	51                   	push   ecx
  4026a0:	d1 f8                	sar    eax,1
  4026a2:	50                   	push   eax
  4026a3:	a1 a0 37 41 00       	mov    eax,ds:0x4137a0
  4026a8:	2b c1                	sub    eax,ecx
  4026aa:	99                   	cdq
  4026ab:	2b c2                	sub    eax,edx
  4026ad:	d1 f8                	sar    eax,1
  4026af:	50                   	push   eax
  4026b0:	53                   	push   ebx
  4026b1:	ff 15 c4 02 41 00    	call   DWORD PTR ds:0x4102c4
  4026b7:	6a 01                	push   0x1
  4026b9:	58                   	pop    eax
  4026ba:	5f                   	pop    edi
  4026bb:	5e                   	pop    esi
  4026bc:	5b                   	pop    ebx
  4026bd:	c9                   	leave
  4026be:	c2 10 00             	ret    0x10
  4026c1:	55                   	push   ebp
  4026c2:	8b ec                	mov    ebp,esp
  4026c4:	81 ec 10 02 00 00    	sub    esp,0x210
  4026ca:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4026cd:	2d 10 01 00 00       	sub    eax,0x110
  4026d2:	74 45                	je     0x402719
  4026d4:	48                   	dec    eax
  4026d5:	74 07                	je     0x4026de
  4026d7:	33 c0                	xor    eax,eax
  4026d9:	e9 51 01 00 00       	jmp    0x40282f
  4026de:	83 7d 10 01          	cmp    DWORD PTR [ebp+0x10],0x1
  4026e2:	75 1b                	jne    0x4026ff
  4026e4:	68 00 01 00 00       	push   0x100
  4026e9:	ff 35 14 37 41 00    	push   DWORD PTR ds:0x413714
  4026ef:	68 f2 03 00 00       	push   0x3f2
  4026f4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4026f7:	ff 15 d4 02 41 00    	call   DWORD PTR ds:0x4102d4
  4026fd:	eb 06                	jmp    0x402705
  4026ff:	83 7d 10 02          	cmp    DWORD PTR [ebp+0x10],0x2
  402703:	75 0c                	jne    0x402711
  402705:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402708:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40270b:	ff 15 d0 02 41 00    	call   DWORD PTR ds:0x4102d0
  402711:	6a 01                	push   0x1
  402713:	58                   	pop    eax
  402714:	e9 16 01 00 00       	jmp    0x40282f
  402719:	53                   	push   ebx
  40271a:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40271d:	56                   	push   esi
  40271e:	57                   	push   edi
  40271f:	53                   	push   ebx
  402720:	e8 c7 82 00 00       	call   0x40a9ec
  402725:	bf 00 01 00 00       	mov    edi,0x100
  40272a:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402730:	57                   	push   edi
  402731:	50                   	push   eax
  402732:	6a 4e                	push   0x4e
  402734:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40273a:	e8 5e 84 00 00       	call   0x40ab9d
  40273f:	83 c4 14             	add    esp,0x14
  402742:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402748:	50                   	push   eax
  402749:	53                   	push   ebx
  40274a:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  402750:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402756:	57                   	push   edi
  402757:	50                   	push   eax
  402758:	6a 4f                	push   0x4f
  40275a:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  402760:	e8 38 84 00 00       	call   0x40ab9d
  402765:	ff 35 78 37 41 00    	push   DWORD PTR ds:0x413778
  40276b:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  402771:	50                   	push   eax
  402772:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  402778:	50                   	push   eax
  402779:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40277f:	8b 35 cc 02 41 00    	mov    esi,DWORD PTR ds:0x4102cc
  402785:	83 c4 1c             	add    esp,0x1c
  402788:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40278e:	50                   	push   eax
  40278f:	68 ea 03 00 00       	push   0x3ea
  402794:	53                   	push   ebx
  402795:	ff d6                	call   esi
  402797:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40279d:	57                   	push   edi
  40279e:	50                   	push   eax
  40279f:	6a 50                	push   0x50
  4027a1:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4027a7:	e8 f1 83 00 00       	call   0x40ab9d
  4027ac:	83 c4 10             	add    esp,0x10
  4027af:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  4027b5:	50                   	push   eax
  4027b6:	6a 01                	push   0x1
  4027b8:	53                   	push   ebx
  4027b9:	ff d6                	call   esi
  4027bb:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  4027c1:	57                   	push   edi
  4027c2:	50                   	push   eax
  4027c3:	6a 30                	push   0x30
  4027c5:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4027cb:	e8 cd 83 00 00       	call   0x40ab9d
  4027d0:	83 c4 10             	add    esp,0x10
  4027d3:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  4027d9:	50                   	push   eax
  4027da:	6a 02                	push   0x2
  4027dc:	53                   	push   ebx
  4027dd:	ff d6                	call   esi
  4027df:	ff 35 14 37 41 00    	push   DWORD PTR ds:0x413714
  4027e5:	68 f2 03 00 00       	push   0x3f2
  4027ea:	53                   	push   ebx
  4027eb:	ff d6                	call   esi
  4027ed:	8d 45 f0             	lea    eax,[ebp-0x10]
  4027f0:	50                   	push   eax
  4027f1:	53                   	push   ebx
  4027f2:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  4027f8:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  4027fb:	a1 a4 37 41 00       	mov    eax,ds:0x4137a4
  402800:	2b 55 f4             	sub    edx,DWORD PTR [ebp-0xc]
  402803:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  402806:	2b 4d f0             	sub    ecx,DWORD PTR [ebp-0x10]
  402809:	6a 00                	push   0x0
  40280b:	2b c2                	sub    eax,edx
  40280d:	52                   	push   edx
  40280e:	99                   	cdq
  40280f:	2b c2                	sub    eax,edx
  402811:	51                   	push   ecx
  402812:	d1 f8                	sar    eax,1
  402814:	50                   	push   eax
  402815:	a1 a0 37 41 00       	mov    eax,ds:0x4137a0
  40281a:	2b c1                	sub    eax,ecx
  40281c:	99                   	cdq
  40281d:	2b c2                	sub    eax,edx
  40281f:	d1 f8                	sar    eax,1
  402821:	50                   	push   eax
  402822:	53                   	push   ebx
  402823:	ff 15 c4 02 41 00    	call   DWORD PTR ds:0x4102c4
  402829:	6a 01                	push   0x1
  40282b:	58                   	pop    eax
  40282c:	5f                   	pop    edi
  40282d:	5e                   	pop    esi
  40282e:	5b                   	pop    ebx
  40282f:	c9                   	leave
  402830:	c2 10 00             	ret    0x10
  402833:	55                   	push   ebp
  402834:	8b ec                	mov    ebp,esp
  402836:	81 ec 68 01 00 00    	sub    esp,0x168
  40283c:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  40283f:	53                   	push   ebx
  402840:	56                   	push   esi
  402841:	83 e8 0f             	sub    eax,0xf
  402844:	57                   	push   edi
  402845:	0f 84 15 03 00 00    	je     0x402b60
  40284b:	2d 01 01 00 00       	sub    eax,0x101
  402850:	0f 84 2b 01 00 00    	je     0x402981
  402856:	48                   	dec    eax
  402857:	74 49                	je     0x4028a2
  402859:	48                   	dec    eax
  40285a:	48                   	dec    eax
  40285b:	0f 85 13 06 00 00    	jne    0x402e74
  402861:	83 7d 10 19          	cmp    DWORD PTR [ebp+0x10],0x19
  402865:	0f 85 09 06 00 00    	jne    0x402e74
  40286b:	ff 05 60 20 41 00    	inc    DWORD PTR ds:0x412060
  402871:	83 3d 60 20 41 00 19 	cmp    DWORD PTR ds:0x412060,0x19
  402878:	7e 0a                	jle    0x402884
  40287a:	c7 05 60 20 41 00 01 	mov    DWORD PTR ds:0x412060,0x1
  402881:	00 00 00 
  402884:	6a 00                	push   0x0
  402886:	68 70 3a 41 00       	push   0x413a70
  40288b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40288e:	ff 15 b8 02 41 00    	call   DWORD PTR ds:0x4102b8
  402894:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402897:	ff 15 50 02 41 00    	call   DWORD PTR ds:0x410250
  40289d:	e9 d2 05 00 00       	jmp    0x402e74
  4028a2:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  4028a5:	83 f8 02             	cmp    eax,0x2
  4028a8:	75 62                	jne    0x40290c
  4028aa:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  4028ad:	33 ff                	xor    edi,edi
  4028af:	39 3d 8c 3a 41 00    	cmp    DWORD PTR ds:0x413a8c,edi
  4028b5:	74 09                	je     0x4028c0
  4028b7:	6a 19                	push   0x19
  4028b9:	56                   	push   esi
  4028ba:	ff 15 3c 03 41 00    	call   DWORD PTR ds:0x41033c
  4028c0:	6a 04                	push   0x4
  4028c2:	ff 35 9c 3a 41 00    	push   DWORD PTR ds:0x413a9c
  4028c8:	ff 35 64 37 41 00    	push   DWORD PTR ds:0x413764
  4028ce:	56                   	push   esi
  4028cf:	ff 15 98 02 41 00    	call   DWORD PTR ds:0x410298
  4028d5:	83 f8 06             	cmp    eax,0x6
  4028d8:	75 13                	jne    0x4028ed
  4028da:	6a 02                	push   0x2
  4028dc:	56                   	push   esi
  4028dd:	c7 05 24 37 41 00 01 	mov    DWORD PTR ds:0x413724,0x1
  4028e4:	00 00 00 
  4028e7:	ff 15 d0 02 41 00    	call   DWORD PTR ds:0x4102d0
  4028ed:	39 3d 8c 3a 41 00    	cmp    DWORD PTR ds:0x413a8c,edi
  4028f3:	74 0f                	je     0x402904
  4028f5:	57                   	push   edi
  4028f6:	68 96 00 00 00       	push   0x96
  4028fb:	6a 19                	push   0x19
  4028fd:	56                   	push   esi
  4028fe:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  402904:	6a 01                	push   0x1
  402906:	58                   	pop    eax
  402907:	e9 6a 05 00 00       	jmp    0x402e76
  40290c:	6a 01                	push   0x1
  40290e:	5e                   	pop    esi
  40290f:	3b c6                	cmp    eax,esi
  402911:	75 2e                	jne    0x402941
  402913:	80 3d 60 3a 41 00 0b 	cmp    BYTE PTR ds:0x413a60,0xb
  40291a:	75 0b                	jne    0x402927
  40291c:	89 35 ac 36 41 00    	mov    DWORD PTR ds:0x4136ac,esi
  402922:	e9 4d 05 00 00       	jmp    0x402e74
  402927:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40292a:	e8 71 06 00 00       	call   0x402fa0
  40292f:	56                   	push   esi
  402930:	e8 48 05 00 00       	call   0x402e7d
  402935:	59                   	pop    ecx
  402936:	59                   	pop    ecx
  402937:	e8 72 08 00 00       	call   0x4031ae
  40293c:	e9 33 05 00 00       	jmp    0x402e74
  402941:	83 f8 05             	cmp    eax,0x5
  402944:	75 0c                	jne    0x402952
  402946:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402949:	e8 52 06 00 00       	call   0x402fa0
  40294e:	6a 00                	push   0x0
  402950:	eb de                	jmp    0x402930
  402952:	83 f8 03             	cmp    eax,0x3
  402955:	75 05                	jne    0x40295c
  402957:	6a ff                	push   0xffffffff
  402959:	56                   	push   esi
  40295a:	eb 0d                	jmp    0x402969
  40295c:	83 f8 04             	cmp    eax,0x4
  40295f:	0f 85 0f 05 00 00    	jne    0x402e74
  402965:	6a ff                	push   0xffffffff
  402967:	6a 00                	push   0x0
  402969:	68 85 01 00 00       	push   0x185
  40296e:	68 eb 03 00 00       	push   0x3eb
  402973:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402976:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  40297c:	e9 f3 04 00 00       	jmp    0x402e74
  402981:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  402984:	53                   	push   ebx
  402985:	e8 62 80 00 00       	call   0x40a9ec
  40298a:	be 00 01 00 00       	mov    esi,0x100
  40298f:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  402995:	56                   	push   esi
  402996:	50                   	push   eax
  402997:	6a 2f                	push   0x2f
  402999:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40299f:	e8 f9 81 00 00       	call   0x40ab9d
  4029a4:	8b 3d cc 02 41 00    	mov    edi,DWORD PTR ds:0x4102cc
  4029aa:	83 c4 14             	add    esp,0x14
  4029ad:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  4029b3:	50                   	push   eax
  4029b4:	6a 05                	push   0x5
  4029b6:	53                   	push   ebx
  4029b7:	ff d7                	call   edi
  4029b9:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  4029bf:	56                   	push   esi
  4029c0:	50                   	push   eax
  4029c1:	6a 30                	push   0x30
  4029c3:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4029c9:	e8 cf 81 00 00       	call   0x40ab9d
  4029ce:	83 c4 10             	add    esp,0x10
  4029d1:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  4029d7:	50                   	push   eax
  4029d8:	6a 02                	push   0x2
  4029da:	53                   	push   ebx
  4029db:	ff d7                	call   edi
  4029dd:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  4029e3:	56                   	push   esi
  4029e4:	50                   	push   eax
  4029e5:	6a 31                	push   0x31
  4029e7:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4029ed:	e8 ab 81 00 00       	call   0x40ab9d
  4029f2:	83 c4 10             	add    esp,0x10
  4029f5:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  4029fb:	50                   	push   eax
  4029fc:	6a 03                	push   0x3
  4029fe:	53                   	push   ebx
  4029ff:	ff d7                	call   edi
  402a01:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  402a07:	56                   	push   esi
  402a08:	50                   	push   eax
  402a09:	6a 32                	push   0x32
  402a0b:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  402a11:	e8 87 81 00 00       	call   0x40ab9d
  402a16:	83 c4 10             	add    esp,0x10
  402a19:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  402a1f:	50                   	push   eax
  402a20:	6a 04                	push   0x4
  402a22:	53                   	push   ebx
  402a23:	ff d7                	call   edi
  402a25:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  402a2b:	56                   	push   esi
  402a2c:	50                   	push   eax
  402a2d:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  402a33:	ff 15 e4 02 41 00    	call   DWORD PTR ds:0x4102e4
  402a39:	8d 85 d8 fe ff ff    	lea    eax,[ebp-0x128]
  402a3f:	50                   	push   eax
  402a40:	53                   	push   ebx
  402a41:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  402a47:	8d 45 e8             	lea    eax,[ebp-0x18]
  402a4a:	50                   	push   eax
  402a4b:	53                   	push   ebx
  402a4c:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  402a52:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  402a55:	a1 a4 37 41 00       	mov    eax,ds:0x4137a4
  402a5a:	2b 55 ec             	sub    edx,DWORD PTR [ebp-0x14]
  402a5d:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  402a60:	2b 4d e8             	sub    ecx,DWORD PTR [ebp-0x18]
  402a63:	6a 00                	push   0x0
  402a65:	2b c2                	sub    eax,edx
  402a67:	52                   	push   edx
  402a68:	99                   	cdq
  402a69:	2b c2                	sub    eax,edx
  402a6b:	51                   	push   ecx
  402a6c:	d1 f8                	sar    eax,1
  402a6e:	50                   	push   eax
  402a6f:	a1 a0 37 41 00       	mov    eax,ds:0x4137a0
  402a74:	2b c1                	sub    eax,ecx
  402a76:	99                   	cdq
  402a77:	2b c2                	sub    eax,edx
  402a79:	d1 f8                	sar    eax,1
  402a7b:	50                   	push   eax
  402a7c:	53                   	push   ebx
  402a7d:	ff 15 c4 02 41 00    	call   DWORD PTR ds:0x4102c4
  402a83:	80 3d 60 3a 41 00 0b 	cmp    BYTE PTR ds:0x413a60,0xb
  402a8a:	8b 3d 54 02 41 00    	mov    edi,DWORD PTR ds:0x410254
  402a90:	8b 35 e0 02 41 00    	mov    esi,DWORD PTR ds:0x4102e0
  402a96:	89 1d 90 36 41 00    	mov    DWORD PTR ds:0x413690,ebx
  402a9c:	75 22                	jne    0x402ac0
  402a9e:	83 3d 00 3b 41 00 00 	cmp    DWORD PTR ds:0x413b00,0x0
  402aa5:	74 19                	je     0x402ac0
  402aa7:	6a 00                	push   0x0
  402aa9:	6a 01                	push   0x1
  402aab:	53                   	push   ebx
  402aac:	ff d6                	call   esi
  402aae:	50                   	push   eax
  402aaf:	ff d7                	call   edi
  402ab1:	6a 00                	push   0x0
  402ab3:	6a 05                	push   0x5
  402ab5:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  402abb:	ff d6                	call   esi
  402abd:	50                   	push   eax
  402abe:	ff d7                	call   edi
  402ac0:	e8 e9 06 00 00       	call   0x4031ae
  402ac5:	6a 00                	push   0x0
  402ac7:	68 f6 0e 00 00       	push   0xef6
  402acc:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  402ad2:	ff d6                	call   esi
  402ad4:	50                   	push   eax
  402ad5:	ff d7                	call   edi
  402ad7:	68 f6 0e 00 00       	push   0xef6
  402adc:	53                   	push   ebx
  402add:	ff d6                	call   esi
  402adf:	85 c0                	test   eax,eax
  402ae1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  402ae4:	74 47                	je     0x402b2d
  402ae6:	8d 4d e8             	lea    ecx,[ebp-0x18]
  402ae9:	51                   	push   ecx
  402aea:	50                   	push   eax
  402aeb:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  402af1:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  402af4:	68 b8 37 41 00       	push   0x4137b8
  402af9:	40                   	inc    eax
  402afa:	53                   	push   ebx
  402afb:	a3 b8 37 41 00       	mov    ds:0x4137b8,eax
  402b00:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  402b03:	40                   	inc    eax
  402b04:	a3 bc 37 41 00       	mov    ds:0x4137bc,eax
  402b09:	ff 15 dc 02 41 00    	call   DWORD PTR ds:0x4102dc
  402b0f:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  402b12:	68 88 36 41 00       	push   0x413688
  402b17:	48                   	dec    eax
  402b18:	53                   	push   ebx
  402b19:	a3 88 36 41 00       	mov    ds:0x413688,eax
  402b1e:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  402b21:	48                   	dec    eax
  402b22:	a3 8c 36 41 00       	mov    ds:0x41368c,eax
  402b27:	ff 15 dc 02 41 00    	call   DWORD PTR ds:0x4102dc
  402b2d:	33 c0                	xor    eax,eax
  402b2f:	39 05 80 37 41 00    	cmp    DWORD PTR ds:0x413780,eax
  402b35:	0f 85 c9 fd ff ff    	jne    0x402904
  402b3b:	39 45 08             	cmp    DWORD PTR [ebp+0x8],eax
  402b3e:	74 06                	je     0x402b46
  402b40:	50                   	push   eax
  402b41:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402b44:	ff d7                	call   edi
  402b46:	68 f0 03 00 00       	push   0x3f0
  402b4b:	53                   	push   ebx
  402b4c:	ff d6                	call   esi
  402b4e:	85 c0                	test   eax,eax
  402b50:	0f 84 ae fd ff ff    	je     0x402904
  402b56:	6a 00                	push   0x0
  402b58:	50                   	push   eax
  402b59:	ff d7                	call   edi
  402b5b:	e9 a4 fd ff ff       	jmp    0x402904
  402b60:	83 3d d4 34 41 00 00 	cmp    DWORD PTR ds:0x4134d4,0x0
  402b67:	75 1c                	jne    0x402b85
  402b69:	6a 00                	push   0x0
  402b6b:	68 96 00 00 00       	push   0x96
  402b70:	6a 19                	push   0x19
  402b72:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402b75:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  402b7b:	c7 05 d4 34 41 00 01 	mov    DWORD PTR ds:0x4134d4,0x1
  402b82:	00 00 00 
  402b85:	8d 85 98 fe ff ff    	lea    eax,[ebp-0x168]
  402b8b:	50                   	push   eax
  402b8c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402b8f:	ff 15 b0 02 41 00    	call   DWORD PTR ds:0x4102b0
  402b95:	8b d8                	mov    ebx,eax
  402b97:	53                   	push   ebx
  402b98:	ff 15 78 00 41 00    	call   DWORD PTR ds:0x410078
  402b9e:	ff 35 c0 3a 41 00    	push   DWORD PTR ds:0x413ac0
  402ba4:	8b 35 84 00 41 00    	mov    esi,DWORD PTR ds:0x410084
  402baa:	8b f8                	mov    edi,eax
  402bac:	57                   	push   edi
  402bad:	ff d6                	call   esi
  402baf:	68 20 00 cc 00       	push   0xcc0020
  402bb4:	6a 00                	push   0x0
  402bb6:	6a 00                	push   0x0
  402bb8:	57                   	push   edi
  402bb9:	68 06 01 00 00       	push   0x106
  402bbe:	6a 7a                	push   0x7a
  402bc0:	6a 0c                	push   0xc
  402bc2:	6a 0c                	push   0xc
  402bc4:	53                   	push   ebx
  402bc5:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  402bc8:	ff 15 68 00 41 00    	call   DWORD PTR ds:0x410068
  402bce:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402bd1:	57                   	push   edi
  402bd2:	ff d6                	call   esi
  402bd4:	57                   	push   edi
  402bd5:	ff 15 64 00 41 00    	call   DWORD PTR ds:0x410064
  402bdb:	83 3d 80 37 41 00 00 	cmp    DWORD PTR ds:0x413780,0x0
  402be2:	8b 3d 94 00 41 00    	mov    edi,DWORD PTR ds:0x410094
  402be8:	0f 85 e0 00 00 00    	jne    0x402cce
  402bee:	68 f0 03 00 00       	push   0x3f0
  402bf3:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402bf6:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  402bfc:	85 c0                	test   eax,eax
  402bfe:	0f 84 ca 00 00 00    	je     0x402cce
  402c04:	8d 4d e8             	lea    ecx,[ebp-0x18]
  402c07:	51                   	push   ecx
  402c08:	50                   	push   eax
  402c09:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  402c0f:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  402c12:	83 65 e4 00          	and    DWORD PTR [ebp-0x1c],0x0
  402c16:	40                   	inc    eax
  402c17:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  402c1a:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  402c1d:	40                   	inc    eax
  402c1e:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  402c21:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  402c24:	40                   	inc    eax
  402c25:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
  402c28:	8d 45 f8             	lea    eax,[ebp-0x8]
  402c2b:	50                   	push   eax
  402c2c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402c2f:	ff 15 dc 02 41 00    	call   DWORD PTR ds:0x4102dc
  402c35:	8d 45 e0             	lea    eax,[ebp-0x20]
  402c38:	50                   	push   eax
  402c39:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402c3c:	ff 15 dc 02 41 00    	call   DWORD PTR ds:0x4102dc
  402c42:	6a 10                	push   0x10
  402c44:	ff 15 78 02 41 00    	call   DWORD PTR ds:0x410278
  402c4a:	50                   	push   eax
  402c4b:	6a 01                	push   0x1
  402c4d:	6a 00                	push   0x0
  402c4f:	ff 15 9c 00 41 00    	call   DWORD PTR ds:0x41009c
  402c55:	50                   	push   eax
  402c56:	53                   	push   ebx
  402c57:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  402c5a:	ff d6                	call   esi
  402c5c:	6a 00                	push   0x0
  402c5e:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  402c61:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  402c64:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  402c67:	53                   	push   ebx
  402c68:	ff 15 8c 00 41 00    	call   DWORD PTR ds:0x41008c
  402c6e:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  402c71:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  402c74:	53                   	push   ebx
  402c75:	ff d7                	call   edi
  402c77:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402c7a:	53                   	push   ebx
  402c7b:	ff d6                	call   esi
  402c7d:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402c80:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  402c86:	6a 05                	push   0x5
  402c88:	ff 15 78 02 41 00    	call   DWORD PTR ds:0x410278
  402c8e:	50                   	push   eax
  402c8f:	6a 01                	push   0x1
  402c91:	6a 00                	push   0x0
  402c93:	ff 15 9c 00 41 00    	call   DWORD PTR ds:0x41009c
  402c99:	50                   	push   eax
  402c9a:	53                   	push   ebx
  402c9b:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  402c9e:	ff d6                	call   esi
  402ca0:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  402ca3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  402ca6:	40                   	inc    eax
  402ca7:	6a 00                	push   0x0
  402ca9:	50                   	push   eax
  402caa:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  402cad:	53                   	push   ebx
  402cae:	ff 15 8c 00 41 00    	call   DWORD PTR ds:0x41008c
  402cb4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  402cb7:	40                   	inc    eax
  402cb8:	50                   	push   eax
  402cb9:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  402cbc:	53                   	push   ebx
  402cbd:	ff d7                	call   edi
  402cbf:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402cc2:	53                   	push   ebx
  402cc3:	ff d6                	call   esi
  402cc5:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402cc8:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  402cce:	83 3d 8c 3a 41 00 00 	cmp    DWORD PTR ds:0x413a8c,0x0
  402cd5:	0f 84 89 01 00 00    	je     0x402e64
  402cdb:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402cde:	53                   	push   ebx
  402cdf:	e8 80 8b 00 00       	call   0x40b864
  402ce4:	a1 8c 36 41 00       	mov    eax,ds:0x41368c
  402ce9:	59                   	pop    ecx
  402cea:	2b 05 bc 37 41 00    	sub    eax,DWORD PTR ds:0x4137bc
  402cf0:	59                   	pop    ecx
  402cf1:	6a 03                	push   0x3
  402cf3:	0f b7 c0             	movzx  eax,ax
  402cf6:	d1 e0                	shl    eax,1
  402cf8:	99                   	cdq
  402cf9:	59                   	pop    ecx
  402cfa:	f7 f9                	idiv   ecx
  402cfc:	68 00 00 7f 00       	push   0x7f0000
  402d01:	53                   	push   ebx
  402d02:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  402d05:	a1 88 36 41 00       	mov    eax,ds:0x413688
  402d0a:	2b 05 b8 37 41 00    	sub    eax,DWORD PTR ds:0x4137b8
  402d10:	0f b7 c0             	movzx  eax,ax
  402d13:	0f af 05 f8 36 41 00 	imul   eax,DWORD PTR ds:0x4136f8
  402d1a:	99                   	cdq
  402d1b:	f7 3d f8 3a 41 00    	idiv   DWORD PTR ds:0x413af8
  402d21:	0f b7 c0             	movzx  eax,ax
  402d24:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  402d27:	ff 15 88 00 41 00    	call   DWORD PTR ds:0x410088
  402d2d:	a1 bc 37 41 00       	mov    eax,ds:0x4137bc
  402d32:	83 65 10 00          	and    DWORD PTR [ebp+0x10],0x0
  402d36:	40                   	inc    eax
  402d37:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  402d3a:	a1 8c 36 41 00       	mov    eax,ds:0x41368c
  402d3f:	48                   	dec    eax
  402d40:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
  402d44:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  402d47:	a1 b8 37 41 00       	mov    eax,ds:0x4137b8
  402d4c:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  402d4f:	7e 38                	jle    0x402d89
  402d51:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  402d54:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  402d57:	6a 00                	push   0x0
  402d59:	6a 00                	push   0x0
  402d5b:	8d 4c 01 fd          	lea    ecx,[ecx+eax*1-0x3]
  402d5f:	68 d0 34 41 00       	push   0x4134d0
  402d64:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  402d67:	8d 4d e8             	lea    ecx,[ebp-0x18]
  402d6a:	51                   	push   ecx
  402d6b:	6a 06                	push   0x6
  402d6d:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  402d70:	50                   	push   eax
  402d71:	53                   	push   ebx
  402d72:	ff 15 90 00 41 00    	call   DWORD PTR ds:0x410090
  402d78:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  402d7b:	01 45 10             	add    DWORD PTR [ebp+0x10],eax
  402d7e:	01 45 e8             	add    DWORD PTR [ebp-0x18],eax
  402d81:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  402d84:	3b 45 fc             	cmp    eax,DWORD PTR [ebp-0x4]
  402d87:	7c c8                	jl     0x402d51
  402d89:	83 3d 80 37 41 00 00 	cmp    DWORD PTR ds:0x413780,0x0
  402d90:	0f 85 ce 00 00 00    	jne    0x402e64
  402d96:	a1 8c 36 41 00       	mov    eax,ds:0x41368c
  402d9b:	40                   	inc    eax
  402d9c:	50                   	push   eax
  402d9d:	a1 88 36 41 00       	mov    eax,ds:0x413688
  402da2:	40                   	inc    eax
  402da3:	50                   	push   eax
  402da4:	a1 bc 37 41 00       	mov    eax,ds:0x4137bc
  402da9:	48                   	dec    eax
  402daa:	50                   	push   eax
  402dab:	a1 b8 37 41 00       	mov    eax,ds:0x4137b8
  402db0:	48                   	dec    eax
  402db1:	50                   	push   eax
  402db2:	8d 45 d8             	lea    eax,[ebp-0x28]
  402db5:	50                   	push   eax
  402db6:	ff 15 d8 02 41 00    	call   DWORD PTR ds:0x4102d8
  402dbc:	6a 10                	push   0x10
  402dbe:	ff 15 78 02 41 00    	call   DWORD PTR ds:0x410278
  402dc4:	50                   	push   eax
  402dc5:	6a 01                	push   0x1
  402dc7:	6a 00                	push   0x0
  402dc9:	ff 15 9c 00 41 00    	call   DWORD PTR ds:0x41009c
  402dcf:	50                   	push   eax
  402dd0:	53                   	push   ebx
  402dd1:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  402dd4:	ff d6                	call   esi
  402dd6:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  402dd9:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  402ddc:	48                   	dec    eax
  402ddd:	6a 00                	push   0x0
  402ddf:	50                   	push   eax
  402de0:	ff 75 d8             	push   DWORD PTR [ebp-0x28]
  402de3:	53                   	push   ebx
  402de4:	ff 15 8c 00 41 00    	call   DWORD PTR ds:0x41008c
  402dea:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  402ded:	ff 75 d8             	push   DWORD PTR [ebp-0x28]
  402df0:	53                   	push   ebx
  402df1:	ff d7                	call   edi
  402df3:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  402df6:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  402df9:	48                   	dec    eax
  402dfa:	50                   	push   eax
  402dfb:	53                   	push   ebx
  402dfc:	ff d7                	call   edi
  402dfe:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402e01:	53                   	push   ebx
  402e02:	ff d6                	call   esi
  402e04:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402e07:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  402e0d:	6a 05                	push   0x5
  402e0f:	ff 15 78 02 41 00    	call   DWORD PTR ds:0x410278
  402e15:	50                   	push   eax
  402e16:	6a 01                	push   0x1
  402e18:	6a 00                	push   0x0
  402e1a:	ff 15 9c 00 41 00    	call   DWORD PTR ds:0x41009c
  402e20:	50                   	push   eax
  402e21:	53                   	push   ebx
  402e22:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  402e25:	ff d6                	call   esi
  402e27:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  402e2a:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  402e2d:	6a 00                	push   0x0
  402e2f:	48                   	dec    eax
  402e30:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  402e33:	50                   	push   eax
  402e34:	53                   	push   ebx
  402e35:	ff 15 8c 00 41 00    	call   DWORD PTR ds:0x41008c
  402e3b:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  402e3e:	48                   	dec    eax
  402e3f:	50                   	push   eax
  402e40:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  402e43:	48                   	dec    eax
  402e44:	50                   	push   eax
  402e45:	53                   	push   ebx
  402e46:	ff d7                	call   edi
  402e48:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  402e4b:	48                   	dec    eax
  402e4c:	50                   	push   eax
  402e4d:	8b 45 d8             	mov    eax,DWORD PTR [ebp-0x28]
  402e50:	48                   	dec    eax
  402e51:	50                   	push   eax
  402e52:	53                   	push   ebx
  402e53:	ff d7                	call   edi
  402e55:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402e58:	53                   	push   ebx
  402e59:	ff d6                	call   esi
  402e5b:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402e5e:	ff 15 48 00 41 00    	call   DWORD PTR ds:0x410048
  402e64:	8d 85 98 fe ff ff    	lea    eax,[ebp-0x168]
  402e6a:	50                   	push   eax
  402e6b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402e6e:	ff 15 a4 02 41 00    	call   DWORD PTR ds:0x4102a4
  402e74:	33 c0                	xor    eax,eax
  402e76:	5f                   	pop    edi
  402e77:	5e                   	pop    esi
  402e78:	5b                   	pop    ebx
  402e79:	c9                   	leave
  402e7a:	c2 10 00             	ret    0x10
  402e7d:	a1 c4 36 41 00       	mov    eax,ds:0x4136c4
  402e82:	3d e8 03 00 00       	cmp    eax,0x3e8
  402e87:	0f 84 a2 00 00 00    	je     0x402f2f
  402e8d:	3d f1 03 00 00       	cmp    eax,0x3f1
  402e92:	0f 84 97 00 00 00    	je     0x402f2f
  402e98:	33 c9                	xor    ecx,ecx
  402e9a:	39 4c 24 04          	cmp    DWORD PTR [esp+0x4],ecx
  402e9e:	74 08                	je     0x402ea8
  402ea0:	fe 05 60 3a 41 00    	inc    BYTE PTR ds:0x413a60
  402ea6:	eb 06                	jmp    0x402eae
  402ea8:	fe 0d 60 3a 41 00    	dec    BYTE PTR ds:0x413a60
  402eae:	0f b6 05 60 3a 41 00 	movzx  eax,BYTE PTR ds:0x413a60
  402eb5:	83 f8 0a             	cmp    eax,0xa
  402eb8:	77 6d                	ja     0x402f27
  402eba:	ff 24 85 74 2f 40 00 	jmp    DWORD PTR [eax*4+0x402f74]
  402ec1:	39 0d b4 3a 41 00    	cmp    DWORD PTR ds:0x413ab4,ecx
  402ec7:	0f 8f a6 00 00 00    	jg     0x402f73
  402ecd:	eb cb                	jmp    0x402e9a
  402ecf:	39 0d 68 37 41 00    	cmp    DWORD PTR ds:0x413768,ecx
  402ed5:	eb f0                	jmp    0x402ec7
  402ed7:	39 0d 88 3b 41 00    	cmp    DWORD PTR ds:0x413b88,ecx
  402edd:	eb e8                	jmp    0x402ec7
  402edf:	39 0d 74 37 41 00    	cmp    DWORD PTR ds:0x413774,ecx
  402ee5:	eb e0                	jmp    0x402ec7
  402ee7:	39 0d 20 37 41 00    	cmp    DWORD PTR ds:0x413720,ecx
  402eed:	eb d8                	jmp    0x402ec7
  402eef:	39 0d 9c 3b 41 00    	cmp    DWORD PTR ds:0x413b9c,ecx
  402ef5:	eb d0                	jmp    0x402ec7
  402ef7:	39 0d 04 3b 41 00    	cmp    DWORD PTR ds:0x413b04,ecx
  402efd:	eb c8                	jmp    0x402ec7
  402eff:	39 0d fc 3a 41 00    	cmp    DWORD PTR ds:0x413afc,ecx
  402f05:	eb c0                	jmp    0x402ec7
  402f07:	39 0d c8 36 41 00    	cmp    DWORD PTR ds:0x4136c8,ecx
  402f0d:	eb b8                	jmp    0x402ec7
  402f0f:	39 0d 9c 37 41 00    	cmp    DWORD PTR ds:0x41379c,ecx
  402f15:	75 5c                	jne    0x402f73
  402f17:	39 0d a0 3a 41 00    	cmp    DWORD PTR ds:0x413aa0,ecx
  402f1d:	7f 54                	jg     0x402f73
  402f1f:	39 0d 80 3a 41 00    	cmp    DWORD PTR ds:0x413a80,ecx
  402f25:	eb a0                	jmp    0x402ec7
  402f27:	c6 05 60 3a 41 00 0b 	mov    BYTE PTR ds:0x413a60,0xb
  402f2e:	c3                   	ret
  402f2f:	a0 60 3a 41 00       	mov    al,ds:0x413a60
  402f34:	33 c9                	xor    ecx,ecx
  402f36:	39 4c 24 04          	cmp    DWORD PTR [esp+0x4],ecx
  402f3a:	74 16                	je     0x402f52
  402f3c:	3c 0b                	cmp    al,0xb
  402f3e:	74 33                	je     0x402f73
  402f40:	3c 0c                	cmp    al,0xc
  402f42:	74 e3                	je     0x402f27
  402f44:	39 0d 98 3a 41 00    	cmp    DWORD PTR ds:0x413a98,ecx
  402f4a:	0f 95 c0             	setne  al
  402f4d:	83 c0 0b             	add    eax,0xb
  402f50:	eb 1c                	jmp    0x402f6e
  402f52:	3a c1                	cmp    al,cl
  402f54:	74 1d                	je     0x402f73
  402f56:	3c 0c                	cmp    al,0xc
  402f58:	75 07                	jne    0x402f61
  402f5a:	88 0d 60 3a 41 00    	mov    BYTE PTR ds:0x413a60,cl
  402f60:	c3                   	ret
  402f61:	39 0d 98 3a 41 00    	cmp    DWORD PTR ds:0x413a98,ecx
  402f67:	0f 94 c0             	sete   al
  402f6a:	48                   	dec    eax
  402f6b:	83 e0 0c             	and    eax,0xc
  402f6e:	a2 60 3a 41 00       	mov    ds:0x413a60,al
  402f73:	c3                   	ret
  402f74:	73 2f                	jae    0x402fa5
  402f76:	40                   	inc    eax
  402f77:	00 c1                	add    cl,al
  402f79:	2e 40                	cs inc eax
  402f7b:	00 cf                	add    bh,cl
  402f7d:	2e 40                	cs inc eax
  402f7f:	00 d7                	add    bh,dl
  402f81:	2e 40                	cs inc eax
  402f83:	00 df                	add    bh,bl
  402f85:	2e 40                	cs inc eax
  402f87:	00 e7                	add    bh,ah
  402f89:	2e 40                	cs inc eax
  402f8b:	00 ef                	add    bh,ch
  402f8d:	2e 40                	cs inc eax
  402f8f:	00 f7                	add    bh,dh
  402f91:	2e 40                	cs inc eax
  402f93:	00 ff                	add    bh,bh
  402f95:	2e 40                	cs inc eax
  402f97:	00 07                	add    BYTE PTR [edi],al
  402f99:	2f                   	das
  402f9a:	40                   	inc    eax
  402f9b:	00 0f                	add    BYTE PTR [edi],cl
  402f9d:	2f                   	das
  402f9e:	40                   	inc    eax
  402f9f:	00 a0 60 3a 41 00    	add    BYTE PTR [eax+0x413a60],ah
  402fa5:	53                   	push   ebx
  402fa6:	33 db                	xor    ebx,ebx
  402fa8:	55                   	push   ebp
  402fa9:	8b 2d e8 02 41 00    	mov    ebp,DWORD PTR ds:0x4102e8
  402faf:	56                   	push   esi
  402fb0:	3a c3                	cmp    al,bl
  402fb2:	57                   	push   edi
  402fb3:	75 45                	jne    0x402ffa
  402fb5:	53                   	push   ebx
  402fb6:	be f0 00 00 00       	mov    esi,0xf0
  402fbb:	53                   	push   ebx
  402fbc:	bf e8 03 00 00       	mov    edi,0x3e8
  402fc1:	56                   	push   esi
  402fc2:	57                   	push   edi
  402fc3:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  402fc9:	ff d5                	call   ebp
  402fcb:	85 c0                	test   eax,eax
  402fcd:	74 08                	je     0x402fd7
  402fcf:	89 3d c4 36 41 00    	mov    DWORD PTR ds:0x4136c4,edi
  402fd5:	eb 50                	jmp    0x403027
  402fd7:	53                   	push   ebx
  402fd8:	53                   	push   ebx
  402fd9:	56                   	push   esi
  402fda:	68 f1 03 00 00       	push   0x3f1
  402fdf:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  402fe5:	ff d5                	call   ebp
  402fe7:	f7 d8                	neg    eax
  402fe9:	1b c0                	sbb    eax,eax
  402feb:	83 e0 08             	and    eax,0x8
  402fee:	05 e9 03 00 00       	add    eax,0x3e9
  402ff3:	a3 c4 36 41 00       	mov    ds:0x4136c4,eax
  402ff8:	eb 2d                	jmp    0x403027
  402ffa:	3c 0c                	cmp    al,0xc
  402ffc:	75 21                	jne    0x40301f
  402ffe:	53                   	push   ebx
  402fff:	53                   	push   ebx
  403000:	68 f0 00 00 00       	push   0xf0
  403005:	68 e8 03 00 00       	push   0x3e8
  40300a:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403010:	ff d5                	call   ebp
  403012:	f7 d8                	neg    eax
  403014:	1b c0                	sbb    eax,eax
  403016:	f7 d8                	neg    eax
  403018:	a3 70 37 41 00       	mov    ds:0x413770,eax
  40301d:	eb 08                	jmp    0x403027
  40301f:	3c 0b                	cmp    al,0xb
  403021:	0f 84 29 01 00 00    	je     0x403150
  403027:	33 f6                	xor    esi,esi
  403029:	39 1d f8 3a 41 00    	cmp    DWORD PTR ds:0x413af8,ebx
  40302f:	0f 8e 1b 01 00 00    	jle    0x403150
  403035:	53                   	push   ebx
  403036:	56                   	push   esi
  403037:	68 87 01 00 00       	push   0x187
  40303c:	68 eb 03 00 00       	push   0x3eb
  403041:	ff 74 24 24          	push   DWORD PTR [esp+0x24]
  403045:	ff d5                	call   ebp
  403047:	0f b6 0d 60 3a 41 00 	movzx  ecx,BYTE PTR ds:0x413a60
  40304e:	49                   	dec    ecx
  40304f:	83 f9 09             	cmp    ecx,0x9
  403052:	0f 87 eb 00 00 00    	ja     0x403143
  403058:	ff 24 8d 55 31 40 00 	jmp    DWORD PTR [ecx*4+0x403155]
  40305f:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  403065:	8b 0c b1             	mov    ecx,DWORD PTR [ecx+esi*4]
  403068:	89 81 64 02 00 00    	mov    DWORD PTR [ecx+0x264],eax
  40306e:	e9 d0 00 00 00       	jmp    0x403143
  403073:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  403079:	8b 0c b1             	mov    ecx,DWORD PTR [ecx+esi*4]
  40307c:	89 81 5c 02 00 00    	mov    DWORD PTR [ecx+0x25c],eax
  403082:	e9 bc 00 00 00       	jmp    0x403143
  403087:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  40308d:	eb 36                	jmp    0x4030c5
  40308f:	8b 0d a8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a8
  403095:	eb 2e                	jmp    0x4030c5
  403097:	8b 0d a8 37 41 00    	mov    ecx,DWORD PTR ds:0x4137a8
  40309d:	8b 0c b1             	mov    ecx,DWORD PTR [ecx+esi*4]
  4030a0:	89 81 0c 07 00 00    	mov    DWORD PTR [ecx+0x70c],eax
  4030a6:	e9 98 00 00 00       	jmp    0x403143
  4030ab:	8b 0d cc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136cc
  4030b1:	8b 0c b1             	mov    ecx,DWORD PTR [ecx+esi*4]
  4030b4:	89 81 1c 02 00 00    	mov    DWORD PTR [ecx+0x21c],eax
  4030ba:	e9 84 00 00 00       	jmp    0x403143
  4030bf:	8b 0d c0 37 41 00    	mov    ecx,DWORD PTR ds:0x4137c0
  4030c5:	8b 0c b1             	mov    ecx,DWORD PTR [ecx+esi*4]
  4030c8:	eb 73                	jmp    0x40313d
  4030ca:	8b 0d 84 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a84
  4030d0:	8b 0c b1             	mov    ecx,DWORD PTR [ecx+esi*4]
  4030d3:	89 81 1c 12 00 00    	mov    DWORD PTR [ecx+0x121c],eax
  4030d9:	eb 68                	jmp    0x403143
  4030db:	8b 0d 34 37 41 00    	mov    ecx,DWORD PTR ds:0x413734
  4030e1:	8b 0c b1             	mov    ecx,DWORD PTR [ecx+esi*4]
  4030e4:	89 81 00 03 00 00    	mov    DWORD PTR [ecx+0x300],eax
  4030ea:	eb 57                	jmp    0x403143
  4030ec:	33 d2                	xor    edx,edx
  4030ee:	33 ff                	xor    edi,edi
  4030f0:	39 1d 9c 37 41 00    	cmp    DWORD PTR ds:0x41379c,ebx
  4030f6:	74 0e                	je     0x403106
  4030f8:	6a 01                	push   0x1
  4030fa:	3b f3                	cmp    esi,ebx
  4030fc:	5a                   	pop    edx
  4030fd:	75 07                	jne    0x403106
  4030ff:	a3 d0 36 41 00       	mov    ds:0x4136d0,eax
  403104:	eb 3d                	jmp    0x403143
  403106:	8b ce                	mov    ecx,esi
  403108:	2b ca                	sub    ecx,edx
  40310a:	3b 0d a0 3a 41 00    	cmp    ecx,DWORD PTR ds:0x413aa0
  403110:	7d 12                	jge    0x403124
  403112:	8b 3d 48 37 41 00    	mov    edi,DWORD PTR ds:0x413748
  403118:	6a 01                	push   0x1
  40311a:	8b 0c 8f             	mov    ecx,DWORD PTR [edi+ecx*4]
  40311d:	5f                   	pop    edi
  40311e:	89 81 04 02 00 00    	mov    DWORD PTR [ecx+0x204],eax
  403124:	03 15 a0 3a 41 00    	add    edx,DWORD PTR ds:0x413aa0
  40312a:	33 db                	xor    ebx,ebx
  40312c:	3b fb                	cmp    edi,ebx
  40312e:	75 13                	jne    0x403143
  403130:	8b ce                	mov    ecx,esi
  403132:	2b ca                	sub    ecx,edx
  403134:	8b 15 98 3b 41 00    	mov    edx,DWORD PTR ds:0x413b98
  40313a:	8b 0c 8a             	mov    ecx,DWORD PTR [edx+ecx*4]
  40313d:	89 81 04 01 00 00    	mov    DWORD PTR [ecx+0x104],eax
  403143:	46                   	inc    esi
  403144:	3b 35 f8 3a 41 00    	cmp    esi,DWORD PTR ds:0x413af8
  40314a:	0f 8c e5 fe ff ff    	jl     0x403035
  403150:	5f                   	pop    edi
  403151:	5e                   	pop    esi
  403152:	5d                   	pop    ebp
  403153:	5b                   	pop    ebx
  403154:	c3                   	ret
  403155:	5f                   	pop    edi
  403156:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  403159:	73 30                	jae    0x40318b
  40315b:	40                   	inc    eax
  40315c:	00 87 30 40 00 8f    	add    BYTE PTR [edi-0x70ffbfd0],al
  403162:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  403165:	97                   	xchg   edi,eax
  403166:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  403169:	ab                   	stos   DWORD PTR es:[edi],eax
  40316a:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  40316d:	bf 30 40 00 ca       	mov    edi,0xca004030
  403172:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  403175:	db 30                	(bad) [eax]
  403177:	40                   	inc    eax
  403178:	00 ec                	add    ah,ch
  40317a:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  40317d:	56                   	push   esi
  40317e:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  403182:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403188:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  40318e:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  403192:	8b f0                	mov    esi,eax
  403194:	56                   	push   esi
  403195:	ff 15 84 02 41 00    	call   DWORD PTR ds:0x410284
  40319b:	33 c0                	xor    eax,eax
  40319d:	39 44 24 0c          	cmp    DWORD PTR [esp+0xc],eax
  4031a1:	0f 95 c0             	setne  al
  4031a4:	50                   	push   eax
  4031a5:	56                   	push   esi
  4031a6:	ff 15 54 02 41 00    	call   DWORD PTR ds:0x410254
  4031ac:	5e                   	pop    esi
  4031ad:	c3                   	ret
  4031ae:	81 ec 50 09 00 00    	sub    esp,0x950
  4031b4:	80 3d 60 3a 41 00 0b 	cmp    BYTE PTR ds:0x413a60,0xb
  4031bb:	8d 44 24 10          	lea    eax,[esp+0x10]
  4031bf:	53                   	push   ebx
  4031c0:	55                   	push   ebp
  4031c1:	56                   	push   esi
  4031c2:	57                   	push   edi
  4031c3:	bf 00 04 00 00       	mov    edi,0x400
  4031c8:	57                   	push   edi
  4031c9:	50                   	push   eax
  4031ca:	75 04                	jne    0x4031d0
  4031cc:	6a 3f                	push   0x3f
  4031ce:	eb 02                	jmp    0x4031d2
  4031d0:	6a 2e                	push   0x2e
  4031d2:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4031d8:	e8 c0 79 00 00       	call   0x40ab9d
  4031dd:	83 c4 10             	add    esp,0x10
  4031e0:	8d 44 24 20          	lea    eax,[esp+0x20]
  4031e4:	8b 35 cc 02 41 00    	mov    esi,DWORD PTR ds:0x4102cc
  4031ea:	50                   	push   eax
  4031eb:	6a 01                	push   0x1
  4031ed:	5d                   	pop    ebp
  4031ee:	55                   	push   ebp
  4031ef:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4031f5:	ff d6                	call   esi
  4031f7:	a0 60 3a 41 00       	mov    al,ds:0x413a60
  4031fc:	bb 00 01 00 00       	mov    ebx,0x100
  403201:	84 c0                	test   al,al
  403203:	0f 84 a0 01 00 00    	je     0x4033a9
  403209:	3c 0c                	cmp    al,0xc
  40320b:	0f 84 98 01 00 00    	je     0x4033a9
  403211:	3c 0b                	cmp    al,0xb
  403213:	0f 85 25 01 00 00    	jne    0x40333e
  403219:	33 ed                	xor    ebp,ebp
  40321b:	55                   	push   ebp
  40321c:	68 eb 03 00 00       	push   0x3eb
  403221:	e8 57 ff ff ff       	call   0x40317d
  403226:	55                   	push   ebp
  403227:	6a 03                	push   0x3
  403229:	e8 4f ff ff ff       	call   0x40317d
  40322e:	55                   	push   ebp
  40322f:	6a 04                	push   0x4
  403231:	e8 47 ff ff ff       	call   0x40317d
  403236:	55                   	push   ebp
  403237:	68 e8 03 00 00       	push   0x3e8
  40323c:	e8 3c ff ff ff       	call   0x40317d
  403241:	55                   	push   ebp
  403242:	68 e9 03 00 00       	push   0x3e9
  403247:	e8 31 ff ff ff       	call   0x40317d
  40324c:	6a 01                	push   0x1
  40324e:	68 ec 03 00 00       	push   0x3ec
  403253:	e8 25 ff ff ff       	call   0x40317d
  403258:	55                   	push   ebp
  403259:	bd f1 03 00 00       	mov    ebp,0x3f1
  40325e:	55                   	push   ebp
  40325f:	e8 19 ff ff ff       	call   0x40317d
  403264:	8d 44 24 58          	lea    eax,[esp+0x58]
  403268:	57                   	push   edi
  403269:	50                   	push   eax
  40326a:	33 c0                	xor    eax,eax
  40326c:	39 2d c4 36 41 00    	cmp    DWORD PTR ds:0x4136c4,ebp
  403272:	0f 95 c0             	setne  al
  403275:	48                   	dec    eax
  403276:	83 e0 3c             	and    eax,0x3c
  403279:	83 c0 0d             	add    eax,0xd
  40327c:	50                   	push   eax
  40327d:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403283:	e8 15 79 00 00       	call   0x40ab9d
  403288:	83 c4 48             	add    esp,0x48
  40328b:	8d 44 24 20          	lea    eax,[esp+0x20]
  40328f:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  403295:	50                   	push   eax
  403296:	8d 84 24 68 05 00 00 	lea    eax,[esp+0x568]
  40329d:	50                   	push   eax
  40329e:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  4032a4:	83 c4 0c             	add    esp,0xc
  4032a7:	8d 84 24 60 05 00 00 	lea    eax,[esp+0x560]
  4032ae:	50                   	push   eax
  4032af:	68 ea 03 00 00       	push   0x3ea
  4032b4:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4032ba:	ff d6                	call   esi
  4032bc:	8d 44 24 20          	lea    eax,[esp+0x20]
  4032c0:	57                   	push   edi
  4032c1:	50                   	push   eax
  4032c2:	33 c0                	xor    eax,eax
  4032c4:	39 2d c4 36 41 00    	cmp    DWORD PTR ds:0x4136c4,ebp
  4032ca:	0f 95 c0             	setne  al
  4032cd:	48                   	dec    eax
  4032ce:	83 e0 35             	and    eax,0x35
  4032d1:	83 c0 16             	add    eax,0x16
  4032d4:	50                   	push   eax
  4032d5:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4032db:	e8 bd 78 00 00       	call   0x40ab9d
  4032e0:	83 c4 10             	add    esp,0x10
  4032e3:	8d 44 24 20          	lea    eax,[esp+0x20]
  4032e7:	50                   	push   eax
  4032e8:	68 ec 03 00 00       	push   0x3ec
  4032ed:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4032f3:	ff d6                	call   esi
  4032f5:	8d 44 24 20          	lea    eax,[esp+0x20]
  4032f9:	57                   	push   edi
  4032fa:	50                   	push   eax
  4032fb:	33 c0                	xor    eax,eax
  4032fd:	39 2d c4 36 41 00    	cmp    DWORD PTR ds:0x4136c4,ebp
  403303:	0f 95 c0             	setne  al
  403306:	48                   	dec    eax
  403307:	83 e0 37             	and    eax,0x37
  40330a:	83 c0 13             	add    eax,0x13
  40330d:	50                   	push   eax
  40330e:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403314:	e8 84 78 00 00       	call   0x40ab9d
  403319:	83 c4 10             	add    esp,0x10
  40331c:	8d 44 24 20          	lea    eax,[esp+0x20]
  403320:	50                   	push   eax
  403321:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403327:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  40332d:	33 c0                	xor    eax,eax
  40332f:	39 05 64 3a 41 00    	cmp    DWORD PTR ds:0x413a64,eax
  403335:	0f 94 c0             	sete   al
  403338:	50                   	push   eax
  403339:	e9 7b 03 00 00       	jmp    0x4036b9
  40333e:	33 ff                	xor    edi,edi
  403340:	57                   	push   edi
  403341:	68 f1 03 00 00       	push   0x3f1
  403346:	e8 32 fe ff ff       	call   0x40317d
  40334b:	55                   	push   ebp
  40334c:	bd eb 03 00 00       	mov    ebp,0x3eb
  403351:	55                   	push   ebp
  403352:	e8 26 fe ff ff       	call   0x40317d
  403357:	6a 01                	push   0x1
  403359:	6a 03                	push   0x3
  40335b:	e8 1d fe ff ff       	call   0x40317d
  403360:	6a 01                	push   0x1
  403362:	6a 04                	push   0x4
  403364:	e8 14 fe ff ff       	call   0x40317d
  403369:	57                   	push   edi
  40336a:	68 e8 03 00 00       	push   0x3e8
  40336f:	e8 09 fe ff ff       	call   0x40317d
  403374:	57                   	push   edi
  403375:	68 e9 03 00 00       	push   0x3e9
  40337a:	e8 fe fd ff ff       	call   0x40317d
  40337f:	57                   	push   edi
  403380:	68 ec 03 00 00       	push   0x3ec
  403385:	e8 f3 fd ff ff       	call   0x40317d
  40338a:	83 c4 38             	add    esp,0x38
  40338d:	6a 01                	push   0x1
  40338f:	6a 05                	push   0x5
  403391:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403397:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  40339d:	50                   	push   eax
  40339e:	ff 15 84 02 41 00    	call   DWORD PTR ds:0x410284
  4033a4:	e9 2a 03 00 00       	jmp    0x4036d3
  4033a9:	6a 00                	push   0x0
  4033ab:	68 eb 03 00 00       	push   0x3eb
  4033b0:	e8 c8 fd ff ff       	call   0x40317d
  4033b5:	6a 00                	push   0x0
  4033b7:	6a 03                	push   0x3
  4033b9:	e8 bf fd ff ff       	call   0x40317d
  4033be:	6a 00                	push   0x0
  4033c0:	6a 04                	push   0x4
  4033c2:	e8 b6 fd ff ff       	call   0x40317d
  4033c7:	55                   	push   ebp
  4033c8:	68 e8 03 00 00       	push   0x3e8
  4033cd:	e8 ab fd ff ff       	call   0x40317d
  4033d2:	55                   	push   ebp
  4033d3:	bd e9 03 00 00       	mov    ebp,0x3e9
  4033d8:	55                   	push   ebp
  4033d9:	e8 9f fd ff ff       	call   0x40317d
  4033de:	6a 01                	push   0x1
  4033e0:	68 ec 03 00 00       	push   0x3ec
  4033e5:	e8 93 fd ff ff       	call   0x40317d
  4033ea:	83 c4 30             	add    esp,0x30
  4033ed:	80 3d 60 3a 41 00 00 	cmp    BYTE PTR ds:0x413a60,0x0
  4033f4:	0f 85 aa 01 00 00    	jne    0x4035a4
  4033fa:	8d 44 24 20          	lea    eax,[esp+0x20]
  4033fe:	53                   	push   ebx
  4033ff:	50                   	push   eax
  403400:	6a 3c                	push   0x3c
  403402:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403408:	e8 90 77 00 00       	call   0x40ab9d
  40340d:	83 c4 10             	add    esp,0x10
  403410:	8d 44 24 20          	lea    eax,[esp+0x20]
  403414:	50                   	push   eax
  403415:	68 e8 03 00 00       	push   0x3e8
  40341a:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403420:	ff d6                	call   esi
  403422:	8d 44 24 20          	lea    eax,[esp+0x20]
  403426:	53                   	push   ebx
  403427:	50                   	push   eax
  403428:	6a 3d                	push   0x3d
  40342a:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403430:	e8 68 77 00 00       	call   0x40ab9d
  403435:	83 c4 10             	add    esp,0x10
  403438:	8d 44 24 20          	lea    eax,[esp+0x20]
  40343c:	50                   	push   eax
  40343d:	55                   	push   ebp
  40343e:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403444:	ff d6                	call   esi
  403446:	8b 0d c4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136c4
  40344c:	b8 e8 03 00 00       	mov    eax,0x3e8
  403451:	3b c8                	cmp    ecx,eax
  403453:	74 08                	je     0x40345d
  403455:	85 c9                	test   ecx,ecx
  403457:	74 04                	je     0x40345d
  403459:	33 c9                	xor    ecx,ecx
  40345b:	eb 03                	jmp    0x403460
  40345d:	6a 01                	push   0x1
  40345f:	59                   	pop    ecx
  403460:	6a 00                	push   0x0
  403462:	51                   	push   ecx
  403463:	68 f1 00 00 00       	push   0xf1
  403468:	50                   	push   eax
  403469:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40346f:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  403475:	33 c0                	xor    eax,eax
  403477:	39 2d c4 36 41 00    	cmp    DWORD PTR ds:0x4136c4,ebp
  40347d:	6a 00                	push   0x0
  40347f:	0f 94 c0             	sete   al
  403482:	50                   	push   eax
  403483:	68 f1 00 00 00       	push   0xf1
  403488:	55                   	push   ebp
  403489:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40348f:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  403495:	bd f1 03 00 00       	mov    ebp,0x3f1
  40349a:	33 c0                	xor    eax,eax
  40349c:	39 2d c4 36 41 00    	cmp    DWORD PTR ds:0x4136c4,ebp
  4034a2:	6a 00                	push   0x0
  4034a4:	0f 94 c0             	sete   al
  4034a7:	50                   	push   eax
  4034a8:	68 f1 00 00 00       	push   0xf1
  4034ad:	55                   	push   ebp
  4034ae:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4034b4:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  4034ba:	8d 44 24 20          	lea    eax,[esp+0x20]
  4034be:	57                   	push   edi
  4034bf:	50                   	push   eax
  4034c0:	6a 07                	push   0x7
  4034c2:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4034c8:	e8 d0 76 00 00       	call   0x40ab9d
  4034cd:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  4034d3:	8d 44 24 34          	lea    eax,[esp+0x34]
  4034d7:	50                   	push   eax
  4034d8:	8d 84 24 78 05 00 00 	lea    eax,[esp+0x578]
  4034df:	50                   	push   eax
  4034e0:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  4034e6:	83 c4 1c             	add    esp,0x1c
  4034e9:	8d 84 24 60 05 00 00 	lea    eax,[esp+0x560]
  4034f0:	50                   	push   eax
  4034f1:	68 ea 03 00 00       	push   0x3ea
  4034f6:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4034fc:	ff d6                	call   esi
  4034fe:	8d 44 24 20          	lea    eax,[esp+0x20]
  403502:	57                   	push   edi
  403503:	50                   	push   eax
  403504:	6a 0a                	push   0xa
  403506:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40350c:	e8 8c 76 00 00       	call   0x40ab9d
  403511:	83 c4 10             	add    esp,0x10
  403514:	8d 44 24 20          	lea    eax,[esp+0x20]
  403518:	50                   	push   eax
  403519:	68 ec 03 00 00       	push   0x3ec
  40351e:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403524:	ff d6                	call   esi
  403526:	8d 44 24 20          	lea    eax,[esp+0x20]
  40352a:	57                   	push   edi
  40352b:	50                   	push   eax
  40352c:	6a 10                	push   0x10
  40352e:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403534:	e8 64 76 00 00       	call   0x40ab9d
  403539:	83 c4 10             	add    esp,0x10
  40353c:	8d 44 24 20          	lea    eax,[esp+0x20]
  403540:	50                   	push   eax
  403541:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403547:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  40354d:	6a 00                	push   0x0
  40354f:	6a 05                	push   0x5
  403551:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403557:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  40355d:	50                   	push   eax
  40355e:	ff 15 84 02 41 00    	call   DWORD PTR ds:0x410284
  403564:	83 3d 2c 37 41 00 00 	cmp    DWORD PTR ds:0x41372c,0x0
  40356b:	74 28                	je     0x403595
  40356d:	8d 44 24 20          	lea    eax,[esp+0x20]
  403571:	57                   	push   edi
  403572:	50                   	push   eax
  403573:	6a 48                	push   0x48
  403575:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40357b:	e8 1d 76 00 00       	call   0x40ab9d
  403580:	83 c4 10             	add    esp,0x10
  403583:	8d 44 24 20          	lea    eax,[esp+0x20]
  403587:	50                   	push   eax
  403588:	55                   	push   ebp
  403589:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40358f:	ff d6                	call   esi
  403591:	6a 01                	push   0x1
  403593:	eb 02                	jmp    0x403597
  403595:	6a 00                	push   0x0
  403597:	55                   	push   ebp
  403598:	e8 e0 fb ff ff       	call   0x40317d
  40359d:	59                   	pop    ecx
  40359e:	59                   	pop    ecx
  40359f:	e9 2a 01 00 00       	jmp    0x4036ce
  4035a4:	6a 00                	push   0x0
  4035a6:	68 f1 03 00 00       	push   0x3f1
  4035ab:	e8 cd fb ff ff       	call   0x40317d
  4035b0:	8d 44 24 28          	lea    eax,[esp+0x28]
  4035b4:	53                   	push   ebx
  4035b5:	50                   	push   eax
  4035b6:	6a 33                	push   0x33
  4035b8:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4035be:	e8 da 75 00 00       	call   0x40ab9d
  4035c3:	83 c4 18             	add    esp,0x18
  4035c6:	8d 44 24 20          	lea    eax,[esp+0x20]
  4035ca:	50                   	push   eax
  4035cb:	68 e8 03 00 00       	push   0x3e8
  4035d0:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4035d6:	ff d6                	call   esi
  4035d8:	8d 44 24 20          	lea    eax,[esp+0x20]
  4035dc:	53                   	push   ebx
  4035dd:	50                   	push   eax
  4035de:	6a 34                	push   0x34
  4035e0:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4035e6:	e8 b2 75 00 00       	call   0x40ab9d
  4035eb:	83 c4 10             	add    esp,0x10
  4035ee:	8d 44 24 20          	lea    eax,[esp+0x20]
  4035f2:	50                   	push   eax
  4035f3:	55                   	push   ebp
  4035f4:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4035fa:	ff d6                	call   esi
  4035fc:	33 c0                	xor    eax,eax
  4035fe:	6a 00                	push   0x0
  403600:	39 05 70 37 41 00    	cmp    DWORD PTR ds:0x413770,eax
  403606:	0f 95 c0             	setne  al
  403609:	50                   	push   eax
  40360a:	68 f1 00 00 00       	push   0xf1
  40360f:	68 e8 03 00 00       	push   0x3e8
  403614:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40361a:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  403620:	33 c0                	xor    eax,eax
  403622:	6a 00                	push   0x0
  403624:	39 05 70 37 41 00    	cmp    DWORD PTR ds:0x413770,eax
  40362a:	0f 94 c0             	sete   al
  40362d:	50                   	push   eax
  40362e:	68 f1 00 00 00       	push   0xf1
  403633:	55                   	push   ebp
  403634:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40363a:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  403640:	8d 44 24 20          	lea    eax,[esp+0x20]
  403644:	57                   	push   edi
  403645:	50                   	push   eax
  403646:	6a 41                	push   0x41
  403648:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40364e:	e8 4a 75 00 00       	call   0x40ab9d
  403653:	83 c4 10             	add    esp,0x10
  403656:	8d 44 24 20          	lea    eax,[esp+0x20]
  40365a:	50                   	push   eax
  40365b:	68 ea 03 00 00       	push   0x3ea
  403660:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403666:	ff d6                	call   esi
  403668:	8d 44 24 20          	lea    eax,[esp+0x20]
  40366c:	57                   	push   edi
  40366d:	50                   	push   eax
  40366e:	6a 42                	push   0x42
  403670:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403676:	e8 22 75 00 00       	call   0x40ab9d
  40367b:	83 c4 10             	add    esp,0x10
  40367e:	8d 44 24 20          	lea    eax,[esp+0x20]
  403682:	50                   	push   eax
  403683:	68 ec 03 00 00       	push   0x3ec
  403688:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40368e:	ff d6                	call   esi
  403690:	8d 44 24 20          	lea    eax,[esp+0x20]
  403694:	57                   	push   edi
  403695:	50                   	push   eax
  403696:	6a 40                	push   0x40
  403698:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40369e:	e8 fa 74 00 00       	call   0x40ab9d
  4036a3:	83 c4 10             	add    esp,0x10
  4036a6:	8d 44 24 20          	lea    eax,[esp+0x20]
  4036aa:	50                   	push   eax
  4036ab:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4036b1:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  4036b7:	6a 01                	push   0x1
  4036b9:	6a 05                	push   0x5
  4036bb:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4036c1:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  4036c7:	50                   	push   eax
  4036c8:	ff 15 84 02 41 00    	call   DWORD PTR ds:0x410284
  4036ce:	bd eb 03 00 00       	mov    ebp,0x3eb
  4036d3:	0f b6 05 60 3a 41 00 	movzx  eax,BYTE PTR ds:0x413a60
  4036da:	48                   	dec    eax
  4036db:	83 f8 09             	cmp    eax,0x9
  4036de:	0f 87 2c 02 00 00    	ja     0x403910
  4036e4:	ff 24 85 d6 3c 40 00 	jmp    DWORD PTR [eax*4+0x403cd6]
  4036eb:	53                   	push   ebx
  4036ec:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  4036f2:	6a 05                	push   0x5
  4036f4:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4036fa:	e8 9e 74 00 00       	call   0x40ab9d
  4036ff:	53                   	push   ebx
  403700:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  403706:	6a 06                	push   0x6
  403708:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40370e:	e8 8a 74 00 00       	call   0x40ab9d
  403713:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  403718:	83 c4 20             	add    esp,0x20
  40371b:	e9 9d 01 00 00       	jmp    0x4038bd
  403720:	53                   	push   ebx
  403721:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  403727:	6a 08                	push   0x8
  403729:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40372f:	e8 69 74 00 00       	call   0x40ab9d
  403734:	53                   	push   ebx
  403735:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40373b:	6a 09                	push   0x9
  40373d:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403743:	e8 55 74 00 00       	call   0x40ab9d
  403748:	a1 68 37 41 00       	mov    eax,ds:0x413768
  40374d:	83 c4 20             	add    esp,0x20
  403750:	e9 68 01 00 00       	jmp    0x4038bd
  403755:	53                   	push   ebx
  403756:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  40375c:	6a 0b                	push   0xb
  40375e:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403764:	e8 34 74 00 00       	call   0x40ab9d
  403769:	53                   	push   ebx
  40376a:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  403770:	6a 0c                	push   0xc
  403772:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403778:	e8 20 74 00 00       	call   0x40ab9d
  40377d:	a1 88 3b 41 00       	mov    eax,ds:0x413b88
  403782:	83 c4 20             	add    esp,0x20
  403785:	e9 33 01 00 00       	jmp    0x4038bd
  40378a:	53                   	push   ebx
  40378b:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  403791:	6a 0e                	push   0xe
  403793:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403799:	e8 ff 73 00 00       	call   0x40ab9d
  40379e:	53                   	push   ebx
  40379f:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4037a5:	6a 0f                	push   0xf
  4037a7:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4037ad:	e8 eb 73 00 00       	call   0x40ab9d
  4037b2:	a1 74 37 41 00       	mov    eax,ds:0x413774
  4037b7:	83 c4 20             	add    esp,0x20
  4037ba:	e9 fe 00 00 00       	jmp    0x4038bd
  4037bf:	53                   	push   ebx
  4037c0:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  4037c6:	6a 11                	push   0x11
  4037c8:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4037ce:	e8 ca 73 00 00       	call   0x40ab9d
  4037d3:	53                   	push   ebx
  4037d4:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4037da:	6a 12                	push   0x12
  4037dc:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4037e2:	e8 b6 73 00 00       	call   0x40ab9d
  4037e7:	a1 20 37 41 00       	mov    eax,ds:0x413720
  4037ec:	83 c4 20             	add    esp,0x20
  4037ef:	e9 c9 00 00 00       	jmp    0x4038bd
  4037f4:	53                   	push   ebx
  4037f5:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  4037fb:	6a 14                	push   0x14
  4037fd:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403803:	e8 95 73 00 00       	call   0x40ab9d
  403808:	53                   	push   ebx
  403809:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40380f:	6a 15                	push   0x15
  403811:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403817:	e8 81 73 00 00       	call   0x40ab9d
  40381c:	a1 9c 3b 41 00       	mov    eax,ds:0x413b9c
  403821:	83 c4 20             	add    esp,0x20
  403824:	e9 94 00 00 00       	jmp    0x4038bd
  403829:	53                   	push   ebx
  40382a:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  403830:	6a 36                	push   0x36
  403832:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403838:	e8 60 73 00 00       	call   0x40ab9d
  40383d:	53                   	push   ebx
  40383e:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  403844:	6a 37                	push   0x37
  403846:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40384c:	e8 4c 73 00 00       	call   0x40ab9d
  403851:	a1 04 3b 41 00       	mov    eax,ds:0x413b04
  403856:	83 c4 20             	add    esp,0x20
  403859:	eb 62                	jmp    0x4038bd
  40385b:	53                   	push   ebx
  40385c:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  403862:	6a 17                	push   0x17
  403864:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40386a:	e8 2e 73 00 00       	call   0x40ab9d
  40386f:	53                   	push   ebx
  403870:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  403876:	6a 18                	push   0x18
  403878:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40387e:	e8 1a 73 00 00       	call   0x40ab9d
  403883:	a1 fc 3a 41 00       	mov    eax,ds:0x413afc
  403888:	83 c4 20             	add    esp,0x20
  40388b:	eb 30                	jmp    0x4038bd
  40388d:	53                   	push   ebx
  40388e:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  403894:	6a 1a                	push   0x1a
  403896:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40389c:	e8 fc 72 00 00       	call   0x40ab9d
  4038a1:	53                   	push   ebx
  4038a2:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4038a8:	6a 1b                	push   0x1b
  4038aa:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4038b0:	e8 e8 72 00 00       	call   0x40ab9d
  4038b5:	a1 c8 36 41 00       	mov    eax,ds:0x4136c8
  4038ba:	83 c4 20             	add    esp,0x20
  4038bd:	a3 f8 3a 41 00       	mov    ds:0x413af8,eax
  4038c2:	eb 4c                	jmp    0x403910
  4038c4:	53                   	push   ebx
  4038c5:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  4038cb:	6a 2a                	push   0x2a
  4038cd:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4038d3:	e8 c5 72 00 00       	call   0x40ab9d
  4038d8:	53                   	push   ebx
  4038d9:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4038df:	6a 29                	push   0x29
  4038e1:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4038e7:	e8 b1 72 00 00       	call   0x40ab9d
  4038ec:	a1 80 3a 41 00       	mov    eax,ds:0x413a80
  4038f1:	8b 0d a0 3a 41 00    	mov    ecx,DWORD PTR ds:0x413aa0
  4038f7:	83 c4 20             	add    esp,0x20
  4038fa:	03 c1                	add    eax,ecx
  4038fc:	83 3d 9c 37 41 00 00 	cmp    DWORD PTR ds:0x41379c,0x0
  403903:	a3 f8 3a 41 00       	mov    ds:0x413af8,eax
  403908:	74 06                	je     0x403910
  40390a:	ff 05 f8 3a 41 00    	inc    DWORD PTR ds:0x413af8
  403910:	a0 60 3a 41 00       	mov    al,ds:0x413a60
  403915:	84 c0                	test   al,al
  403917:	0f 84 99 03 00 00    	je     0x403cb6
  40391d:	3c 0b                	cmp    al,0xb
  40391f:	0f 84 91 03 00 00    	je     0x403cb6
  403925:	3c 0c                	cmp    al,0xc
  403927:	0f 84 89 03 00 00    	je     0x403cb6
  40392d:	8b 3d e8 02 41 00    	mov    edi,DWORD PTR ds:0x4102e8
  403933:	6a 00                	push   0x0
  403935:	6a 00                	push   0x0
  403937:	68 84 01 00 00       	push   0x184
  40393c:	55                   	push   ebp
  40393d:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403943:	ff d7                	call   edi
  403945:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40394b:	68 ea 03 00 00       	push   0x3ea
  403950:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403956:	ff d6                	call   esi
  403958:	ff 35 80 3b 41 00    	push   DWORD PTR ds:0x413b80
  40395e:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403964:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  40396a:	8d 84 24 20 04 00 00 	lea    eax,[esp+0x420]
  403971:	33 db                	xor    ebx,ebx
  403973:	50                   	push   eax
  403974:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  403978:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40397e:	ff 15 b0 02 41 00    	call   DWORD PTR ds:0x4102b0
  403984:	53                   	push   ebx
  403985:	53                   	push   ebx
  403986:	6a 0b                	push   0xb
  403988:	55                   	push   ebp
  403989:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40398f:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  403993:	ff d7                	call   edi
  403995:	39 1d f8 3a 41 00    	cmp    DWORD PTR ds:0x413af8,ebx
  40399b:	0f 8e ba 02 00 00    	jle    0x403c5b
  4039a1:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  4039a5:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  4039a9:	0f b6 05 60 3a 41 00 	movzx  eax,BYTE PTR ds:0x413a60
  4039b0:	48                   	dec    eax
  4039b1:	83 f8 09             	cmp    eax,0x9
  4039b4:	0f 87 32 02 00 00    	ja     0x403bec
  4039ba:	ff 24 85 fe 3c 40 00 	jmp    DWORD PTR [eax*4+0x403cfe]
  4039c1:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  4039c6:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  4039c9:	8b b8 64 02 00 00    	mov    edi,DWORD PTR [eax+0x264]
  4039cf:	8d 70 08             	lea    esi,[eax+0x8]
  4039d2:	e9 15 02 00 00       	jmp    0x403bec
  4039d7:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4039dc:	8b 34 98             	mov    esi,DWORD PTR [eax+ebx*4]
  4039df:	8b be 5c 02 00 00    	mov    edi,DWORD PTR [esi+0x25c]
  4039e5:	e9 02 02 00 00       	jmp    0x403bec
  4039ea:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4039ef:	ff 34 98             	push   DWORD PTR [eax+ebx*4]
  4039f2:	8d 44 24 24          	lea    eax,[esp+0x24]
  4039f6:	50                   	push   eax
  4039f7:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  4039fd:	8d 44 24 20          	lea    eax,[esp+0x20]
  403a01:	8d 74 24 20          	lea    esi,[esp+0x20]
  403a05:	50                   	push   eax
  403a06:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  403a0c:	80 64 04 1f 00       	and    BYTE PTR [esp+eax*1+0x1f],0x0
  403a11:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  403a16:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403a19:	8b b8 04 01 00 00    	mov    edi,DWORD PTR [eax+0x104]
  403a1f:	e9 c8 01 00 00       	jmp    0x403bec
  403a24:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  403a29:	e9 9b 00 00 00       	jmp    0x403ac9
  403a2e:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  403a33:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403a36:	8d 88 0c 03 00 00    	lea    ecx,[eax+0x30c]
  403a3c:	51                   	push   ecx
  403a3d:	8d 88 0c 02 00 00    	lea    ecx,[eax+0x20c]
  403a43:	51                   	push   ecx
  403a44:	8d 88 0c 01 00 00    	lea    ecx,[eax+0x10c]
  403a4a:	83 c0 08             	add    eax,0x8
  403a4d:	51                   	push   ecx
  403a4e:	50                   	push   eax
  403a4f:	8d 44 24 30          	lea    eax,[esp+0x30]
  403a53:	68 c4 21 41 00       	push   0x4121c4
  403a58:	50                   	push   eax
  403a59:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  403a5f:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  403a64:	83 c4 18             	add    esp,0x18
  403a67:	8d 74 24 20          	lea    esi,[esp+0x20]
  403a6b:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403a6e:	8b b8 0c 07 00 00    	mov    edi,DWORD PTR [eax+0x70c]
  403a74:	e9 73 01 00 00       	jmp    0x403bec
  403a79:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  403a7e:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403a81:	80 b8 0c 01 00 00 00 	cmp    BYTE PTR [eax+0x10c],0x0
  403a88:	8d 88 0c 01 00 00    	lea    ecx,[eax+0x10c]
  403a8e:	74 1e                	je     0x403aae
  403a90:	83 c0 08             	add    eax,0x8
  403a93:	51                   	push   ecx
  403a94:	50                   	push   eax
  403a95:	8d 44 24 28          	lea    eax,[esp+0x28]
  403a99:	68 b0 21 41 00       	push   0x4121b0
  403a9e:	50                   	push   eax
  403a9f:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  403aa5:	83 c4 10             	add    esp,0x10
  403aa8:	8d 74 24 20          	lea    esi,[esp+0x20]
  403aac:	eb 03                	jmp    0x403ab1
  403aae:	8d 70 08             	lea    esi,[eax+0x8]
  403ab1:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  403ab6:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403ab9:	8b b8 1c 02 00 00    	mov    edi,DWORD PTR [eax+0x21c]
  403abf:	e9 28 01 00 00       	jmp    0x403bec
  403ac4:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  403ac9:	8b 34 98             	mov    esi,DWORD PTR [eax+ebx*4]
  403acc:	e9 15 01 00 00       	jmp    0x403be6
  403ad1:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  403ad6:	8b 0c 98             	mov    ecx,DWORD PTR [eax+ebx*4]
  403ad9:	8d 04 98             	lea    eax,[eax+ebx*4]
  403adc:	80 b9 08 01 00 00 00 	cmp    BYTE PTR [ecx+0x108],0x0
  403ae3:	74 52                	je     0x403b37
  403ae5:	8b c1                	mov    eax,ecx
  403ae7:	68 ff 00 00 00       	push   0xff
  403aec:	05 14 02 00 00       	add    eax,0x214
  403af1:	50                   	push   eax
  403af2:	8d 84 24 68 04 00 00 	lea    eax,[esp+0x468]
  403af9:	50                   	push   eax
  403afa:	e8 81 86 00 00       	call   0x40c180
  403aff:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  403b04:	80 a4 24 6b 05 00 00 	and    BYTE PTR [esp+0x56b],0x0
  403b0b:	00 
  403b0c:	8d 8c 24 6c 04 00 00 	lea    ecx,[esp+0x46c]
  403b13:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403b16:	51                   	push   ecx
  403b17:	8d 88 08 01 00 00    	lea    ecx,[eax+0x108]
  403b1d:	83 c0 08             	add    eax,0x8
  403b20:	51                   	push   ecx
  403b21:	50                   	push   eax
  403b22:	8d 44 24 38          	lea    eax,[esp+0x38]
  403b26:	68 98 21 41 00       	push   0x412198
  403b2b:	50                   	push   eax
  403b2c:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  403b32:	83 c4 20             	add    esp,0x20
  403b35:	eb 1e                	jmp    0x403b55
  403b37:	8d 81 14 02 00 00    	lea    eax,[ecx+0x214]
  403b3d:	83 c1 08             	add    ecx,0x8
  403b40:	50                   	push   eax
  403b41:	51                   	push   ecx
  403b42:	8d 44 24 28          	lea    eax,[esp+0x28]
  403b46:	68 90 21 41 00       	push   0x412190
  403b4b:	50                   	push   eax
  403b4c:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  403b52:	83 c4 10             	add    esp,0x10
  403b55:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  403b5a:	8d 74 24 20          	lea    esi,[esp+0x20]
  403b5e:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403b61:	8b b8 1c 12 00 00    	mov    edi,DWORD PTR [eax+0x121c]
  403b67:	e9 80 00 00 00       	jmp    0x403bec
  403b6c:	a1 34 37 41 00       	mov    eax,ds:0x413734
  403b71:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  403b74:	8b b8 00 03 00 00    	mov    edi,DWORD PTR [eax+0x300]
  403b7a:	8d b0 00 01 00 00    	lea    esi,[eax+0x100]
  403b80:	eb 6a                	jmp    0x403bec
  403b82:	a1 9c 37 41 00       	mov    eax,ds:0x41379c
  403b87:	33 c9                	xor    ecx,ecx
  403b89:	33 d2                	xor    edx,edx
  403b8b:	85 c0                	test   eax,eax
  403b8d:	74 11                	je     0x403ba0
  403b8f:	6a 01                	push   0x1
  403b91:	85 db                	test   ebx,ebx
  403b93:	59                   	pop    ecx
  403b94:	75 0a                	jne    0x403ba0
  403b96:	8b 3d d0 36 41 00    	mov    edi,DWORD PTR ds:0x4136d0
  403b9c:	8b f0                	mov    esi,eax
  403b9e:	eb 4c                	jmp    0x403bec
  403ba0:	8b c3                	mov    eax,ebx
  403ba2:	2b c1                	sub    eax,ecx
  403ba4:	3b 05 a0 3a 41 00    	cmp    eax,DWORD PTR ds:0x413aa0
  403baa:	7d 23                	jge    0x403bcf
  403bac:	8b 15 48 37 41 00    	mov    edx,DWORD PTR ds:0x413748
  403bb2:	8b 04 82             	mov    eax,DWORD PTR [edx+eax*4]
  403bb5:	80 b8 04 01 00 00 00 	cmp    BYTE PTR [eax+0x104],0x0
  403bbc:	8d b0 04 01 00 00    	lea    esi,[eax+0x104]
  403bc2:	75 02                	jne    0x403bc6
  403bc4:	8b f0                	mov    esi,eax
  403bc6:	8b b8 04 02 00 00    	mov    edi,DWORD PTR [eax+0x204]
  403bcc:	6a 01                	push   0x1
  403bce:	5a                   	pop    edx
  403bcf:	03 0d a0 3a 41 00    	add    ecx,DWORD PTR ds:0x413aa0
  403bd5:	85 d2                	test   edx,edx
  403bd7:	75 13                	jne    0x403bec
  403bd9:	8b c3                	mov    eax,ebx
  403bdb:	2b c1                	sub    eax,ecx
  403bdd:	8b 0d 98 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b98
  403be3:	8b 34 81             	mov    esi,DWORD PTR [ecx+eax*4]
  403be6:	8b be 04 01 00 00    	mov    edi,DWORD PTR [esi+0x104]
  403bec:	8d 44 24 18          	lea    eax,[esp+0x18]
  403bf0:	50                   	push   eax
  403bf1:	56                   	push   esi
  403bf2:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  403bf8:	50                   	push   eax
  403bf9:	56                   	push   esi
  403bfa:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
  403bfe:	ff 15 4c 00 41 00    	call   DWORD PTR ds:0x41004c
  403c04:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  403c08:	0f b7 c8             	movzx  ecx,ax
  403c0b:	39 4c 24 14          	cmp    DWORD PTR [esp+0x14],ecx
  403c0f:	73 04                	jae    0x403c15
  403c11:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  403c15:	56                   	push   esi
  403c16:	6a 00                	push   0x0
  403c18:	68 80 01 00 00       	push   0x180
  403c1d:	55                   	push   ebp
  403c1e:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403c24:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  403c2a:	85 ff                	test   edi,edi
  403c2c:	74 18                	je     0x403c46
  403c2e:	0f b7 c3             	movzx  eax,bx
  403c31:	50                   	push   eax
  403c32:	6a 01                	push   0x1
  403c34:	68 85 01 00 00       	push   0x185
  403c39:	55                   	push   ebp
  403c3a:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403c40:	ff 15 e8 02 41 00    	call   DWORD PTR ds:0x4102e8
  403c46:	43                   	inc    ebx
  403c47:	3b 1d f8 3a 41 00    	cmp    ebx,DWORD PTR ds:0x413af8
  403c4d:	0f 8c 56 fd ff ff    	jl     0x4039a9
  403c53:	8b 3d e8 02 41 00    	mov    edi,DWORD PTR ds:0x4102e8
  403c59:	33 db                	xor    ebx,ebx
  403c5b:	8d 84 24 20 04 00 00 	lea    eax,[esp+0x420]
  403c62:	50                   	push   eax
  403c63:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403c69:	ff 15 a4 02 41 00    	call   DWORD PTR ds:0x4102a4
  403c6f:	53                   	push   ebx
  403c70:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  403c74:	68 94 01 00 00       	push   0x194
  403c79:	55                   	push   ebp
  403c7a:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403c80:	ff d7                	call   edi
  403c82:	53                   	push   ebx
  403c83:	53                   	push   ebx
  403c84:	68 97 01 00 00       	push   0x197
  403c89:	55                   	push   ebp
  403c8a:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403c90:	ff d7                	call   edi
  403c92:	53                   	push   ebx
  403c93:	6a 01                	push   0x1
  403c95:	6a 0b                	push   0xb
  403c97:	55                   	push   ebp
  403c98:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403c9e:	ff d7                	call   edi
  403ca0:	53                   	push   ebx
  403ca1:	53                   	push   ebx
  403ca2:	55                   	push   ebp
  403ca3:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403ca9:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  403caf:	50                   	push   eax
  403cb0:	ff 15 b8 02 41 00    	call   DWORD PTR ds:0x4102b8
  403cb6:	6a 01                	push   0x1
  403cb8:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  403cbe:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  403cc4:	50                   	push   eax
  403cc5:	ff 15 ec 02 41 00    	call   DWORD PTR ds:0x4102ec
  403ccb:	5f                   	pop    edi
  403ccc:	5e                   	pop    esi
  403ccd:	5d                   	pop    ebp
  403cce:	5b                   	pop    ebx
  403ccf:	81 c4 50 09 00 00    	add    esp,0x950
  403cd5:	c3                   	ret
  403cd6:	eb 36                	jmp    0x403d0e
  403cd8:	40                   	inc    eax
  403cd9:	00 20                	add    BYTE PTR [eax],ah
  403cdb:	37                   	aaa
  403cdc:	40                   	inc    eax
  403cdd:	00 55 37             	add    BYTE PTR [ebp+0x37],dl
  403ce0:	40                   	inc    eax
  403ce1:	00 8a 37 40 00 bf    	add    BYTE PTR [edx-0x40ffbfc9],cl
  403ce7:	37                   	aaa
  403ce8:	40                   	inc    eax
  403ce9:	00 f4                	add    ah,dh
  403ceb:	37                   	aaa
  403cec:	40                   	inc    eax
  403ced:	00 29                	add    BYTE PTR [ecx],ch
  403cef:	38 40 00             	cmp    BYTE PTR [eax+0x0],al
  403cf2:	5b                   	pop    ebx
  403cf3:	38 40 00             	cmp    BYTE PTR [eax+0x0],al
  403cf6:	8d 38                	lea    edi,[eax]
  403cf8:	40                   	inc    eax
  403cf9:	00 c4                	add    ah,al
  403cfb:	38 40 00             	cmp    BYTE PTR [eax+0x0],al
  403cfe:	c1 39 40             	sar    DWORD PTR [ecx],0x40
  403d01:	00 d7                	add    bh,dl
  403d03:	39 40 00             	cmp    DWORD PTR [eax+0x0],eax
  403d06:	ea 39 40 00 24 3a 40 	jmp    0x403a:0x24004039
  403d0d:	00 2e                	add    BYTE PTR [esi],ch
  403d0f:	3a 40 00             	cmp    al,BYTE PTR [eax+0x0]
  403d12:	79 3a                	jns    0x403d4e
  403d14:	40                   	inc    eax
  403d15:	00 c4                	add    ah,al
  403d17:	3a 40 00             	cmp    al,BYTE PTR [eax+0x0]
  403d1a:	d1 3a                	sar    DWORD PTR [edx],1
  403d1c:	40                   	inc    eax
  403d1d:	00 6c 3b 40          	add    BYTE PTR [ebx+edi*1+0x40],ch
  403d21:	00 82 3b 40 00 33    	add    BYTE PTR [edx+0x3300403b],al
  403d27:	c0 c2 20             	rol    dl,0x20
  403d2a:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  403d2d:	ec                   	in     al,dx
  403d2e:	b8 d8 28 00 00       	mov    eax,0x28d8
  403d33:	e8 58 86 00 00       	call   0x40c390
  403d38:	53                   	push   ebx
  403d39:	56                   	push   esi
  403d3a:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  403d40:	57                   	push   edi
  403d41:	bf 24 25 41 00       	mov    edi,0x412524
  403d46:	8d 85 3c f2 ff ff    	lea    eax,[ebp-0xdc4]
  403d4c:	57                   	push   edi
  403d4d:	50                   	push   eax
  403d4e:	ff d6                	call   esi
  403d50:	8d 85 38 ed ff ff    	lea    eax,[ebp-0x12c8]
  403d56:	57                   	push   edi
  403d57:	50                   	push   eax
  403d58:	ff d6                	call   esi
  403d5a:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  403d5d:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  403d60:	57                   	push   edi
  403d61:	ff d6                	call   esi
  403d63:	57                   	push   edi
  403d64:	e8 d6 77 00 00       	call   0x40b53f
  403d69:	3b c7                	cmp    eax,edi
  403d6b:	59                   	pop    ecx
  403d6c:	76 04                	jbe    0x403d72
  403d6e:	80 60 ff 00          	and    BYTE PTR [eax-0x1],0x0
  403d72:	33 db                	xor    ebx,ebx
  403d74:	53                   	push   ebx
  403d75:	57                   	push   edi
  403d76:	e8 19 6a 00 00       	call   0x40a794
  403d7b:	59                   	pop    ecx
  403d7c:	59                   	pop    ecx
  403d7d:	68 e0 20 41 00       	push   0x4120e0
  403d82:	57                   	push   edi
  403d83:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  403d89:	8b 3d 54 01 41 00    	mov    edi,DWORD PTR ds:0x410154
  403d8f:	68 20 25 41 00       	push   0x412520
  403d94:	89 5d dc             	mov    DWORD PTR [ebp-0x24],ebx
  403d97:	ff d7                	call   edi
  403d99:	68 1c 25 41 00       	push   0x41251c
  403d9e:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  403da1:	ff d7                	call   edi
  403da3:	68 0c 01 00 00       	push   0x10c
  403da8:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  403dab:	e8 c1 78 00 00       	call   0x40b671
  403db0:	8b 15 88 3b 41 00    	mov    edx,DWORD PTR ds:0x413b88
  403db6:	59                   	pop    ecx
  403db7:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  403dbd:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  403dc0:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  403dc3:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  403dc8:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  403dce:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  403dd1:	89 98 04 01 00 00    	mov    DWORD PTR [eax+0x104],ebx
  403dd7:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  403ddc:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  403de2:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  403de5:	66 89 98 08 01 00 00 	mov    WORD PTR [eax+0x108],bx
  403dec:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  403df1:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  403df7:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  403dfa:	66 c7 80 0a 01 00 00 	mov    WORD PTR [eax+0x10a],0x7fff
  403e01:	ff 7f 
  403e03:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  403e08:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  403e0e:	8b 3c 88             	mov    edi,DWORD PTR [eax+ecx*4]
  403e11:	57                   	push   edi
  403e12:	ff d6                	call   esi
  403e14:	6a 01                	push   0x1
  403e16:	57                   	push   edi
  403e17:	e8 78 69 00 00       	call   0x40a794
  403e1c:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  403e22:	59                   	pop    ecx
  403e23:	59                   	pop    ecx
  403e24:	57                   	push   edi
  403e25:	ff d3                	call   ebx
  403e27:	8d 44 38 ff          	lea    eax,[eax+edi*1-0x1]
  403e2b:	3b c7                	cmp    eax,edi
  403e2d:	76 0b                	jbe    0x403e3a
  403e2f:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  403e32:	74 0b                	je     0x403e3f
  403e34:	80 20 00             	and    BYTE PTR [eax],0x0
  403e37:	48                   	dec    eax
  403e38:	eb f1                	jmp    0x403e2b
  403e3a:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  403e3d:	75 04                	jne    0x403e43
  403e3f:	80 60 01 00          	and    BYTE PTR [eax+0x1],0x0
  403e43:	57                   	push   edi
  403e44:	ff d3                	call   ebx
  403e46:	83 f8 03             	cmp    eax,0x3
  403e49:	7f 03                	jg     0x403e4e
  403e4b:	80 27 00             	and    BYTE PTR [edi],0x0
  403e4e:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
  403e52:	8b 1d 58 01 41 00    	mov    ebx,DWORD PTR ds:0x410158
  403e58:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
  403e5f:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
  403e63:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  403e69:	68 00 01 00 00       	push   0x100
  403e6e:	50                   	push   eax
  403e6f:	74 08                	je     0x403e79
  403e71:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  403e77:	eb 02                	jmp    0x403e7b
  403e79:	ff d3                	call   ebx
  403e7b:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  403e81:	50                   	push   eax
  403e82:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  403e88:	80 bc 05 3f f6 ff ff 	cmp    BYTE PTR [ebp+eax*1-0x9c1],0x5c
  403e8f:	5c 
  403e90:	74 12                	je     0x403ea4
  403e92:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  403e98:	68 e0 20 41 00       	push   0x4120e0
  403e9d:	50                   	push   eax
  403e9e:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  403ea4:	57                   	push   edi
  403ea5:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  403eab:	50                   	push   eax
  403eac:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  403eb2:	50                   	push   eax
  403eb3:	57                   	push   edi
  403eb4:	e8 77 b8 00 00       	call   0x40f730
  403eb9:	83 c4 0c             	add    esp,0xc
  403ebc:	85 c0                	test   eax,eax
  403ebe:	75 03                	jne    0x403ec3
  403ec0:	21 45 f8             	and    DWORD PTR [ebp-0x8],eax
  403ec3:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  403ec6:	83 7d fc 02          	cmp    DWORD PTR [ebp-0x4],0x2
  403eca:	7c 93                	jl     0x403e5f
  403ecc:	8d 85 28 e3 ff ff    	lea    eax,[ebp-0x1cd8]
  403ed2:	68 04 01 00 00       	push   0x104
  403ed7:	50                   	push   eax
  403ed8:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  403ede:	8d 85 34 e8 ff ff    	lea    eax,[ebp-0x17cc]
  403ee4:	68 04 01 00 00       	push   0x104
  403ee9:	50                   	push   eax
  403eea:	ff d3                	call   ebx
  403eec:	8d 85 34 e8 ff ff    	lea    eax,[ebp-0x17cc]
  403ef2:	50                   	push   eax
  403ef3:	8d 85 30 e5 ff ff    	lea    eax,[ebp-0x1ad0]
  403ef9:	50                   	push   eax
  403efa:	ff d6                	call   esi
  403efc:	8d 85 30 e5 ff ff    	lea    eax,[ebp-0x1ad0]
  403f02:	68 14 25 41 00       	push   0x412514
  403f07:	50                   	push   eax
  403f08:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  403f0e:	83 3d b0 36 41 00 01 	cmp    DWORD PTR ds:0x4136b0,0x1
  403f15:	75 4f                	jne    0x403f66
  403f17:	68 04 01 00 00       	push   0x104
  403f1c:	ff 35 38 37 41 00    	push   DWORD PTR ds:0x413738
  403f22:	ff d3                	call   ebx
  403f24:	ff 35 38 37 41 00    	push   DWORD PTR ds:0x413738
  403f2a:	8d 85 2c e4 ff ff    	lea    eax,[ebp-0x1bd4]
  403f30:	50                   	push   eax
  403f31:	ff d6                	call   esi
  403f33:	8d 85 2c e4 ff ff    	lea    eax,[ebp-0x1bd4]
  403f39:	68 e0 20 41 00       	push   0x4120e0
  403f3e:	50                   	push   eax
  403f3f:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  403f45:	57                   	push   edi
  403f46:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  403f4c:	50                   	push   eax
  403f4d:	8d 85 2c e4 ff ff    	lea    eax,[ebp-0x1bd4]
  403f53:	50                   	push   eax
  403f54:	57                   	push   edi
  403f55:	e8 d6 b7 00 00       	call   0x40f730
  403f5a:	83 c4 0c             	add    esp,0xc
  403f5d:	85 c0                	test   eax,eax
  403f5f:	75 14                	jne    0x403f75
  403f61:	21 45 f8             	and    DWORD PTR [ebp-0x8],eax
  403f64:	eb 0f                	jmp    0x403f75
  403f66:	8d 85 34 e8 ff ff    	lea    eax,[ebp-0x17cc]
  403f6c:	50                   	push   eax
  403f6d:	ff 35 38 37 41 00    	push   DWORD PTR ds:0x413738
  403f73:	ff d6                	call   esi
  403f75:	33 db                	xor    ebx,ebx
  403f77:	39 5d f8             	cmp    DWORD PTR [ebp-0x8],ebx
  403f7a:	74 0a                	je     0x403f86
  403f7c:	38 1f                	cmp    BYTE PTR [edi],bl
  403f7e:	74 06                	je     0x403f86
  403f80:	ff 05 88 3b 41 00    	inc    DWORD PTR ds:0x413b88
  403f86:	53                   	push   ebx
  403f87:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  403f8a:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  403f90:	83 f8 ff             	cmp    eax,0xffffffff
  403f93:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  403f96:	75 65                	jne    0x403ffd
  403f98:	be 00 01 00 00       	mov    esi,0x100
  403f9d:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  403fa3:	56                   	push   esi
  403fa4:	50                   	push   eax
  403fa5:	6a 03                	push   0x3
  403fa7:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403fad:	e8 eb 6b 00 00       	call   0x40ab9d
  403fb2:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  403fb8:	56                   	push   esi
  403fb9:	50                   	push   eax
  403fba:	6a 02                	push   0x2
  403fbc:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  403fc2:	e8 d6 6b 00 00       	call   0x40ab9d
  403fc7:	a1 94 36 41 00       	mov    eax,ds:0x413694
  403fcc:	83 c4 20             	add    esp,0x20
  403fcf:	3b c3                	cmp    eax,ebx
  403fd1:	74 07                	je     0x403fda
  403fd3:	50                   	push   eax
  403fd4:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  403fda:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  403fe0:	53                   	push   ebx
  403fe1:	50                   	push   eax
  403fe2:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  403fe8:	50                   	push   eax
  403fe9:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  403fef:	ff 15 98 02 41 00    	call   DWORD PTR ds:0x410298
  403ff5:	6a 01                	push   0x1
  403ff7:	58                   	pop    eax
  403ff8:	e9 14 2a 00 00       	jmp    0x406a11
  403ffd:	6a 00                	push   0x0
  403fff:	bb 00 08 00 00       	mov    ebx,0x800
  404004:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404007:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40400d:	53                   	push   ebx
  40400e:	50                   	push   eax
  40400f:	e8 f3 2a 00 00       	call   0x406b07
  404014:	83 c4 10             	add    esp,0x10
  404017:	80 bd 44 f6 ff ff 20 	cmp    BYTE PTR [ebp-0x9bc],0x20
  40401e:	75 0a                	jne    0x40402a
  404020:	c7 05 10 37 41 00 01 	mov    DWORD PTR ds:0x413710,0x1
  404027:	00 00 00 
  40402a:	0f b7 05 94 3b 41 00 	movzx  eax,WORD PTR ds:0x413b94
  404031:	8b 0d a4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a4
  404037:	8b 3d 60 01 41 00    	mov    edi,DWORD PTR ds:0x410160
  40403d:	68 0c 25 41 00       	push   0x41250c
  404042:	83 24 81 00          	and    DWORD PTR [ecx+eax*4],0x0
  404046:	66 ff 05 94 3b 41 00 	inc    WORD PTR ds:0x413b94
  40404d:	0f b7 05 94 3b 41 00 	movzx  eax,WORD PTR ds:0x413b94
  404054:	8b 0d a4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a4
  40405a:	83 24 81 00          	and    DWORD PTR [ecx+eax*4],0x0
  40405e:	80 a5 44 f6 ff ff 00 	and    BYTE PTR [ebp-0x9bc],0x0
  404065:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40406b:	50                   	push   eax
  40406c:	ff d7                	call   edi
  40406e:	85 c0                	test   eax,eax
  404070:	0f 85 80 01 00 00    	jne    0x4041f6
  404076:	6a 00                	push   0x0
  404078:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40407e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404081:	53                   	push   ebx
  404082:	50                   	push   eax
  404083:	e8 7f 2a 00 00       	call   0x406b07
  404088:	80 a5 46 f6 ff ff 00 	and    BYTE PTR [ebp-0x9ba],0x0
  40408f:	83 c4 10             	add    esp,0x10
  404092:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404098:	68 04 25 41 00       	push   0x412504
  40409d:	50                   	push   eax
  40409e:	ff d7                	call   edi
  4040a0:	85 c0                	test   eax,eax
  4040a2:	74 09                	je     0x4040ad
  4040a4:	80 bd 40 f6 ff ff 00 	cmp    BYTE PTR [ebp-0x9c0],0x0
  4040ab:	75 c9                	jne    0x404076
  4040ad:	80 bd 40 f6 ff ff 00 	cmp    BYTE PTR [ebp-0x9c0],0x0
  4040b4:	0f 84 3c 01 00 00    	je     0x4041f6
  4040ba:	8d 85 47 f6 ff ff    	lea    eax,[ebp-0x9b9]
  4040c0:	50                   	push   eax
  4040c1:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  4040c7:	ff d6                	call   esi
  4040c9:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  4040cf:	8b 3d 70 01 41 00    	mov    edi,DWORD PTR ds:0x410170
  4040d5:	ff d7                	call   edi
  4040d7:	8b d8                	mov    ebx,eax
  4040d9:	83 fb 0d             	cmp    ebx,0xd
  4040dc:	7e 23                	jle    0x404101
  4040de:	a1 a8 3a 41 00       	mov    eax,ds:0x413aa8
  4040e3:	68 f4 24 41 00       	push   0x4124f4
  4040e8:	8d 44 18 f3          	lea    eax,[eax+ebx*1-0xd]
  4040ec:	50                   	push   eax
  4040ed:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  4040f3:	85 c0                	test   eax,eax
  4040f5:	75 0a                	jne    0x404101
  4040f7:	a1 a8 3a 41 00       	mov    eax,ds:0x413aa8
  4040fc:	80 64 18 f3 00       	and    BYTE PTR [eax+ebx*1-0xd],0x0
  404101:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  404107:	ff d7                	call   edi
  404109:	8b f8                	mov    edi,eax
  40410b:	83 ff 08             	cmp    edi,0x8
  40410e:	7e 23                	jle    0x404133
  404110:	a1 a8 3a 41 00       	mov    eax,ds:0x413aa8
  404115:	68 e8 24 41 00       	push   0x4124e8
  40411a:	8d 44 38 f8          	lea    eax,[eax+edi*1-0x8]
  40411e:	50                   	push   eax
  40411f:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404125:	85 c0                	test   eax,eax
  404127:	75 0a                	jne    0x404133
  404129:	a1 a8 3a 41 00       	mov    eax,ds:0x413aa8
  40412e:	80 64 38 f8 00       	and    BYTE PTR [eax+edi*1-0x8],0x0
  404133:	83 3d c4 3a 41 00 00 	cmp    DWORD PTR ds:0x413ac4,0x0
  40413a:	75 4e                	jne    0x40418a
  40413c:	8d 85 3c ee ff ff    	lea    eax,[ebp-0x11c4]
  404142:	68 00 01 00 00       	push   0x100
  404147:	50                   	push   eax
  404148:	6a 19                	push   0x19
  40414a:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  404150:	e8 48 6a 00 00       	call   0x40ab9d
  404155:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  40415b:	8d 85 3c ee ff ff    	lea    eax,[ebp-0x11c4]
  404161:	50                   	push   eax
  404162:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  404168:	68 e0 24 41 00       	push   0x4124e0
  40416d:	50                   	push   eax
  40416e:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  404174:	83 c4 20             	add    esp,0x20
  404177:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  40417d:	50                   	push   eax
  40417e:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  404184:	ff 15 70 02 41 00    	call   DWORD PTR ds:0x410270
  40418a:	6a 00                	push   0x0
  40418c:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404192:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404195:	68 00 08 00 00       	push   0x800
  40419a:	50                   	push   eax
  40419b:	e8 67 29 00 00       	call   0x406b07
  4041a0:	83 c4 10             	add    esp,0x10
  4041a3:	80 bd 40 f6 ff ff 00 	cmp    BYTE PTR [ebp-0x9c0],0x0
  4041aa:	0f 84 54 28 00 00    	je     0x406a04
  4041b0:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4041b6:	68 cc 24 41 00       	push   0x4124cc
  4041bb:	50                   	push   eax
  4041bc:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
  4041c3:	e8 18 b6 00 00       	call   0x40f7e0
  4041c8:	59                   	pop    ecx
  4041c9:	85 c0                	test   eax,eax
  4041cb:	59                   	pop    ecx
  4041cc:	0f 85 8a 00 00 00    	jne    0x40425c
  4041d2:	33 db                	xor    ebx,ebx
  4041d4:	bf 00 08 00 00       	mov    edi,0x800
  4041d9:	53                   	push   ebx
  4041da:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4041e0:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4041e3:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
  4041ea:	57                   	push   edi
  4041eb:	50                   	push   eax
  4041ec:	e8 16 29 00 00       	call   0x406b07
  4041f1:	83 c4 10             	add    esp,0x10
  4041f4:	eb 70                	jmp    0x404266
  4041f6:	be 00 01 00 00       	mov    esi,0x100
  4041fb:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404201:	56                   	push   esi
  404202:	50                   	push   eax
  404203:	6a 04                	push   0x4
  404205:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40420b:	e8 8d 69 00 00       	call   0x40ab9d
  404210:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  404216:	56                   	push   esi
  404217:	50                   	push   eax
  404218:	6a 02                	push   0x2
  40421a:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  404220:	e8 78 69 00 00       	call   0x40ab9d
  404225:	a1 94 36 41 00       	mov    eax,ds:0x413694
  40422a:	83 c4 20             	add    esp,0x20
  40422d:	85 c0                	test   eax,eax
  40422f:	74 07                	je     0x404238
  404231:	50                   	push   eax
  404232:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  404238:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40423e:	6a 00                	push   0x0
  404240:	50                   	push   eax
  404241:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404247:	50                   	push   eax
  404248:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  40424e:	ff 15 98 02 41 00    	call   DWORD PTR ds:0x410298
  404254:	6a 01                	push   0x1
  404256:	5e                   	pop    esi
  404257:	e9 aa 27 00 00       	jmp    0x406a06
  40425c:	33 db                	xor    ebx,ebx
  40425e:	bf 00 08 00 00       	mov    edi,0x800
  404263:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
  404266:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40426c:	68 b0 24 41 00       	push   0x4124b0
  404271:	50                   	push   eax
  404272:	e8 69 b5 00 00       	call   0x40f7e0
  404277:	59                   	pop    ecx
  404278:	85 c0                	test   eax,eax
  40427a:	59                   	pop    ecx
  40427b:	75 1d                	jne    0x40429a
  40427d:	53                   	push   ebx
  40427e:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404284:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404287:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  40428e:	57                   	push   edi
  40428f:	50                   	push   eax
  404290:	e8 72 28 00 00       	call   0x406b07
  404295:	83 c4 10             	add    esp,0x10
  404298:	eb 03                	jmp    0x40429d
  40429a:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  40429d:	6a 0b                	push   0xb
  40429f:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4042a5:	68 a4 24 41 00       	push   0x4124a4
  4042aa:	50                   	push   eax
  4042ab:	e8 80 b4 00 00       	call   0x40f730
  4042b0:	83 c4 0c             	add    esp,0xc
  4042b3:	85 c0                	test   eax,eax
  4042b5:	0f 84 a6 1b 00 00    	je     0x405e61
  4042bb:	6a 0c                	push   0xc
  4042bd:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4042c3:	68 94 24 41 00       	push   0x412494
  4042c8:	50                   	push   eax
  4042c9:	e8 62 b4 00 00       	call   0x40f730
  4042ce:	83 c4 0c             	add    esp,0xc
  4042d1:	85 c0                	test   eax,eax
  4042d3:	0f 84 88 1b 00 00    	je     0x405e61
  4042d9:	6a 10                	push   0x10
  4042db:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4042e1:	68 80 24 41 00       	push   0x412480
  4042e6:	50                   	push   eax
  4042e7:	e8 44 b4 00 00       	call   0x40f730
  4042ec:	83 c4 0c             	add    esp,0xc
  4042ef:	85 c0                	test   eax,eax
  4042f1:	0f 84 6a 1b 00 00    	je     0x405e61
  4042f7:	6a 0b                	push   0xb
  4042f9:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4042ff:	68 74 24 41 00       	push   0x412474
  404304:	50                   	push   eax
  404305:	e8 26 b4 00 00       	call   0x40f730
  40430a:	83 c4 0c             	add    esp,0xc
  40430d:	85 c0                	test   eax,eax
  40430f:	0f 85 e9 04 00 00    	jne    0x4047fe
  404315:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  40431b:	50                   	push   eax
  40431c:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404322:	50                   	push   eax
  404323:	ff d6                	call   esi
  404325:	53                   	push   ebx
  404326:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40432c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40432f:	57                   	push   edi
  404330:	50                   	push   eax
  404331:	e8 d1 27 00 00       	call   0x406b07
  404336:	6a 0b                	push   0xb
  404338:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40433e:	68 68 24 41 00       	push   0x412468
  404343:	50                   	push   eax
  404344:	e8 e7 b3 00 00       	call   0x40f730
  404349:	83 c4 1c             	add    esp,0x1c
  40434c:	85 c0                	test   eax,eax
  40434e:	0f 85 4f fe ff ff    	jne    0x4041a3
  404354:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  40435a:	50                   	push   eax
  40435b:	8d 85 28 d7 ff ff    	lea    eax,[ebp-0x28d8]
  404361:	50                   	push   eax
  404362:	ff d6                	call   esi
  404364:	6a 00                	push   0x0
  404366:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40436c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40436f:	68 00 08 00 00       	push   0x800
  404374:	50                   	push   eax
  404375:	e8 8d 27 00 00       	call   0x406b07
  40437a:	6a 0b                	push   0xb
  40437c:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404382:	68 68 24 41 00       	push   0x412468
  404387:	50                   	push   eax
  404388:	e8 a3 b3 00 00       	call   0x40f730
  40438d:	83 c4 1c             	add    esp,0x1c
  404390:	85 c0                	test   eax,eax
  404392:	74 d0                	je     0x404364
  404394:	80 a5 34 e6 ff ff 00 	and    BYTE PTR [ebp-0x19cc],0x0
  40439b:	6a 0c                	push   0xc
  40439d:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4043a3:	33 db                	xor    ebx,ebx
  4043a5:	68 58 24 41 00       	push   0x412458
  4043aa:	50                   	push   eax
  4043ab:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  4043ae:	e8 7d b3 00 00       	call   0x40f730
  4043b3:	83 c4 0c             	add    esp,0xc
  4043b6:	85 c0                	test   eax,eax
  4043b8:	75 2b                	jne    0x4043e5
  4043ba:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  4043c0:	50                   	push   eax
  4043c1:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  4043c7:	50                   	push   eax
  4043c8:	ff d6                	call   esi
  4043ca:	53                   	push   ebx
  4043cb:	bf 00 08 00 00       	mov    edi,0x800
  4043d0:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4043d3:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4043d9:	57                   	push   edi
  4043da:	50                   	push   eax
  4043db:	e8 27 27 00 00       	call   0x406b07
  4043e0:	83 c4 10             	add    esp,0x10
  4043e3:	eb 05                	jmp    0x4043ea
  4043e5:	bf 00 08 00 00       	mov    edi,0x800
  4043ea:	6a 0c                	push   0xc
  4043ec:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4043f2:	68 48 24 41 00       	push   0x412448
  4043f7:	50                   	push   eax
  4043f8:	e8 33 b3 00 00       	call   0x40f730
  4043fd:	83 c4 0c             	add    esp,0xc
  404400:	85 c0                	test   eax,eax
  404402:	75 24                	jne    0x404428
  404404:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  40440a:	50                   	push   eax
  40440b:	e8 6e 7f 00 00       	call   0x40c37e
  404410:	6a 00                	push   0x0
  404412:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  404415:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404418:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40441e:	57                   	push   edi
  40441f:	50                   	push   eax
  404420:	e8 e2 26 00 00       	call   0x406b07
  404425:	83 c4 14             	add    esp,0x14
  404428:	6a 0c                	push   0xc
  40442a:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404430:	68 38 24 41 00       	push   0x412438
  404435:	50                   	push   eax
  404436:	e8 f5 b2 00 00       	call   0x40f730
  40443b:	83 c4 0c             	add    esp,0xc
  40443e:	85 c0                	test   eax,eax
  404440:	75 35                	jne    0x404477
  404442:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  404448:	50                   	push   eax
  404449:	e8 30 7f 00 00       	call   0x40c37e
  40444e:	6a 00                	push   0x0
  404450:	8b d8                	mov    ebx,eax
  404452:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404455:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40445b:	57                   	push   edi
  40445c:	50                   	push   eax
  40445d:	e8 a5 26 00 00       	call   0x406b07
  404462:	83 c4 14             	add    esp,0x14
  404465:	83 fb 01             	cmp    ebx,0x1
  404468:	75 0d                	jne    0x404477
  40446a:	83 3d 84 37 41 00 00 	cmp    DWORD PTR ds:0x413784,0x0
  404471:	0f 85 2c fd ff ff    	jne    0x4041a3
  404477:	53                   	push   ebx
  404478:	8d 45 cc             	lea    eax,[ebp-0x34]
  40447b:	68 34 24 41 00       	push   0x412434
  404480:	50                   	push   eax
  404481:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  404487:	6a 10                	push   0x10
  404489:	e8 e3 71 00 00       	call   0x40b671
  40448e:	8b 0d 44 37 41 00    	mov    ecx,DWORD PTR ds:0x413744
  404494:	8b 15 b8 36 41 00    	mov    edx,DWORD PTR ds:0x4136b8
  40449a:	83 c4 10             	add    esp,0x10
  40449d:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  4044a0:	a1 44 37 41 00       	mov    eax,ds:0x413744
  4044a5:	8b 0d b8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136b8
  4044ab:	8b 3c 88             	mov    edi,DWORD PTR [eax+ecx*4]
  4044ae:	ff 05 b8 36 41 00    	inc    DWORD PTR ds:0x4136b8
  4044b4:	8d 85 28 d7 ff ff    	lea    eax,[ebp-0x28d8]
  4044ba:	50                   	push   eax
  4044bb:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4044c1:	40                   	inc    eax
  4044c2:	50                   	push   eax
  4044c3:	e8 a9 71 00 00       	call   0x40b671
  4044c8:	59                   	pop    ecx
  4044c9:	89 47 0c             	mov    DWORD PTR [edi+0xc],eax
  4044cc:	8d 8d 28 d7 ff ff    	lea    ecx,[ebp-0x28d8]
  4044d2:	51                   	push   ecx
  4044d3:	50                   	push   eax
  4044d4:	ff d6                	call   esi
  4044d6:	83 27 00             	and    DWORD PTR [edi],0x0
  4044d9:	83 67 08 00          	and    DWORD PTR [edi+0x8],0x0
  4044dd:	6a 0b                	push   0xb
  4044df:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4044e5:	68 28 24 41 00       	push   0x412428
  4044ea:	50                   	push   eax
  4044eb:	e8 40 b2 00 00       	call   0x40f730
  4044f0:	83 c4 0c             	add    esp,0xc
  4044f3:	85 c0                	test   eax,eax
  4044f5:	0f 85 fe 01 00 00    	jne    0x4046f9
  4044fb:	8d 45 cc             	lea    eax,[ebp-0x34]
  4044fe:	c7 07 01 00 00 00    	mov    DWORD PTR [edi],0x1
  404504:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  40450a:	50                   	push   eax
  40450b:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  404511:	50                   	push   eax
  404512:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404518:	50                   	push   eax
  404519:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  40451e:	51                   	push   ecx
  40451f:	68 24 12 00 00       	push   0x1224
  404524:	ff 30                	push   DWORD PTR [eax]
  404526:	8d 04 88             	lea    eax,[eax+ecx*4]
  404529:	50                   	push   eax
  40452a:	e8 64 72 00 00       	call   0x40b793
  40452f:	83 c4 1c             	add    esp,0x1c
  404532:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  404535:	85 c0                	test   eax,eax
  404537:	0f 85 43 01 00 00    	jne    0x404680
  40453d:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  404542:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  404548:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40454b:	83 a0 1c 12 00 00 00 	and    DWORD PTR [eax+0x121c],0x0
  404552:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  404557:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  40455d:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  404560:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  404563:	89 88 18 12 00 00    	mov    DWORD PTR [eax+0x1218],ecx
  404569:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  40456e:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  404574:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  404577:	89 98 14 12 00 00    	mov    DWORD PTR [eax+0x1214],ebx
  40457d:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  404582:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  404588:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40458b:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404592:	66 89 88 20 12 00 00 	mov    WORD PTR [eax+0x1220],cx
  404599:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  40459f:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  4045a5:	50                   	push   eax
  4045a6:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  4045ab:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4045ae:	83 c0 08             	add    eax,0x8
  4045b1:	50                   	push   eax
  4045b2:	ff d6                	call   esi
  4045b4:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  4045ba:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  4045c0:	50                   	push   eax
  4045c1:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  4045c6:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4045c9:	05 08 01 00 00       	add    eax,0x108
  4045ce:	50                   	push   eax
  4045cf:	ff d6                	call   esi
  4045d1:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  4045d7:	8d 45 cc             	lea    eax,[ebp-0x34]
  4045da:	50                   	push   eax
  4045db:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  4045e0:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4045e3:	05 08 02 00 00       	add    eax,0x208
  4045e8:	50                   	push   eax
  4045e9:	ff d6                	call   esi
  4045eb:	a1 fc 3a 41 00       	mov    eax,ds:0x413afc
  4045f0:	8b 0d 84 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a84
  4045f6:	8b 1c 81             	mov    ebx,DWORD PTR [ecx+eax*4]
  4045f9:	81 c3 14 02 00 00    	add    ebx,0x214
  4045ff:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  404605:	50                   	push   eax
  404606:	53                   	push   ebx
  404607:	ff d6                	call   esi
  404609:	53                   	push   ebx
  40460a:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  404610:	6a 00                	push   0x0
  404612:	8d 5c 03 01          	lea    ebx,[ebx+eax*1+0x1]
  404616:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404619:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40461f:	68 00 08 00 00       	push   0x800
  404624:	50                   	push   eax
  404625:	e8 dd 24 00 00       	call   0x406b07
  40462a:	6a 0b                	push   0xb
  40462c:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404632:	68 28 24 41 00       	push   0x412428
  404637:	50                   	push   eax
  404638:	e8 f3 b0 00 00       	call   0x40f730
  40463d:	83 c4 1c             	add    esp,0x1c
  404640:	85 c0                	test   eax,eax
  404642:	74 bb                	je     0x4045ff
  404644:	80 23 00             	and    BYTE PTR [ebx],0x0
  404647:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  40464c:	8b 0d fc 3a 41 00    	mov    ecx,DWORD PTR ds:0x413afc
  404652:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  404655:	8d 88 14 02 00 00    	lea    ecx,[eax+0x214]
  40465b:	05 14 0a 00 00       	add    eax,0xa14
  404660:	51                   	push   ecx
  404661:	50                   	push   eax
  404662:	ff d6                	call   esi
  404664:	a1 fc 3a 41 00       	mov    eax,ds:0x413afc
  404669:	8b 0d 84 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a84
  40466f:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  404672:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
  404675:	ff 05 fc 3a 41 00    	inc    DWORD PTR ds:0x413afc
  40467b:	e9 23 fb ff ff       	jmp    0x4041a3
  404680:	8d 9d 28 df ff ff    	lea    ebx,[ebp-0x20d8]
  404686:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  40468c:	50                   	push   eax
  40468d:	53                   	push   ebx
  40468e:	ff d6                	call   esi
  404690:	53                   	push   ebx
  404691:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  404697:	6a 00                	push   0x0
  404699:	8d 5c 03 01          	lea    ebx,[ebx+eax*1+0x1]
  40469d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4046a0:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4046a6:	68 00 08 00 00       	push   0x800
  4046ab:	50                   	push   eax
  4046ac:	e8 56 24 00 00       	call   0x406b07
  4046b1:	6a 0b                	push   0xb
  4046b3:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4046b9:	68 28 24 41 00       	push   0x412428
  4046be:	50                   	push   eax
  4046bf:	e8 6c b0 00 00       	call   0x40f730
  4046c4:	83 c4 1c             	add    esp,0x1c
  4046c7:	85 c0                	test   eax,eax
  4046c9:	74 bb                	je     0x404686
  4046cb:	80 23 00             	and    BYTE PTR [ebx],0x0
  4046ce:	8d 85 28 df ff ff    	lea    eax,[ebp-0x20d8]
  4046d4:	50                   	push   eax
  4046d5:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  4046d8:	05 14 0a 00 00       	add    eax,0xa14
  4046dd:	50                   	push   eax
  4046de:	ff d6                	call   esi
  4046e0:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  4046e3:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4046ea:	66 89 88 20 12 00 00 	mov    WORD PTR [eax+0x1220],cx
  4046f1:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
  4046f4:	e9 aa fa ff ff       	jmp    0x4041a3
  4046f9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4046fc:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  4046ff:	8b 0d 9c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b9c
  404705:	8d 45 cc             	lea    eax,[ebp-0x34]
  404708:	50                   	push   eax
  404709:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  40470f:	50                   	push   eax
  404710:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404716:	50                   	push   eax
  404717:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  40471c:	51                   	push   ecx
  40471d:	68 24 02 00 00       	push   0x224
  404722:	ff 30                	push   DWORD PTR [eax]
  404724:	8d 04 88             	lea    eax,[eax+ecx*4]
  404727:	50                   	push   eax
  404728:	e8 66 70 00 00       	call   0x40b793
  40472d:	83 c4 1c             	add    esp,0x1c
  404730:	85 c0                	test   eax,eax
  404732:	0f 85 b3 00 00 00    	jne    0x4047eb
  404738:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  40473d:	8b 0d 9c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b9c
  404743:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  404746:	83 a0 1c 02 00 00 00 	and    DWORD PTR [eax+0x21c],0x0
  40474d:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  404752:	8b 0d 9c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b9c
  404758:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40475b:	89 98 18 02 00 00    	mov    DWORD PTR [eax+0x218],ebx
  404761:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  404766:	8b 0d 9c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b9c
  40476c:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40476f:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404776:	66 89 88 20 02 00 00 	mov    WORD PTR [eax+0x220],cx
  40477d:	8b 0d 9c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b9c
  404783:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404789:	50                   	push   eax
  40478a:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  40478f:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  404792:	83 c0 08             	add    eax,0x8
  404795:	50                   	push   eax
  404796:	ff d6                	call   esi
  404798:	8b 0d 9c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b9c
  40479e:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  4047a4:	50                   	push   eax
  4047a5:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  4047aa:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4047ad:	05 0c 01 00 00       	add    eax,0x10c
  4047b2:	50                   	push   eax
  4047b3:	ff d6                	call   esi
  4047b5:	8b 0d 9c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b9c
  4047bb:	8d 45 cc             	lea    eax,[ebp-0x34]
  4047be:	50                   	push   eax
  4047bf:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  4047c4:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4047c7:	05 0c 02 00 00       	add    eax,0x20c
  4047cc:	50                   	push   eax
  4047cd:	ff d6                	call   esi
  4047cf:	a1 9c 3b 41 00       	mov    eax,ds:0x413b9c
  4047d4:	8b 0d cc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136cc
  4047da:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4047dd:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
  4047e0:	ff 05 9c 3b 41 00    	inc    DWORD PTR ds:0x413b9c
  4047e6:	e9 b8 f9 ff ff       	jmp    0x4041a3
  4047eb:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4047f2:	66 89 88 20 02 00 00 	mov    WORD PTR [eax+0x220],cx
  4047f9:	e9 f3 fe ff ff       	jmp    0x4046f1
  4047fe:	6a 0b                	push   0xb
  404800:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404806:	68 1c 24 41 00       	push   0x41241c
  40480b:	50                   	push   eax
  40480c:	e8 1f af 00 00       	call   0x40f730
  404811:	83 c4 0c             	add    esp,0xc
  404814:	85 c0                	test   eax,eax
  404816:	0f 85 05 02 00 00    	jne    0x404a21
  40481c:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  404822:	50                   	push   eax
  404823:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  404829:	50                   	push   eax
  40482a:	ff d6                	call   esi
  40482c:	53                   	push   ebx
  40482d:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404833:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404836:	57                   	push   edi
  404837:	50                   	push   eax
  404838:	e8 ca 22 00 00       	call   0x406b07
  40483d:	80 a5 3c ee ff ff 00 	and    BYTE PTR [ebp-0x11c4],0x0
  404844:	6a 0d                	push   0xd
  404846:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40484c:	68 0c 24 41 00       	push   0x41240c
  404851:	50                   	push   eax
  404852:	e8 d9 ae 00 00       	call   0x40f730
  404857:	83 c4 1c             	add    esp,0x1c
  40485a:	85 c0                	test   eax,eax
  40485c:	75 12                	jne    0x404870
  40485e:	8d 85 4d f6 ff ff    	lea    eax,[ebp-0x9b3]
  404864:	50                   	push   eax
  404865:	8d 85 3c ee ff ff    	lea    eax,[ebp-0x11c4]
  40486b:	50                   	push   eax
  40486c:	ff d6                	call   esi
  40486e:	eb 03                	jmp    0x404873
  404870:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  404873:	6a 02                	push   0x2
  404875:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  40487b:	5f                   	pop    edi
  40487c:	57                   	push   edi
  40487d:	68 08 24 41 00       	push   0x412408
  404882:	50                   	push   eax
  404883:	e8 a8 ae 00 00       	call   0x40f730
  404888:	83 c4 0c             	add    esp,0xc
  40488b:	85 c0                	test   eax,eax
  40488d:	75 09                	jne    0x404898
  40488f:	39 7d e4             	cmp    DWORD PTR [ebp-0x1c],edi
  404892:	0f 84 f3 20 00 00    	je     0x40698b
  404898:	57                   	push   edi
  404899:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  40489f:	68 04 24 41 00       	push   0x412404
  4048a4:	50                   	push   eax
  4048a5:	e8 86 ae 00 00       	call   0x40f730
  4048aa:	83 c4 0c             	add    esp,0xc
  4048ad:	85 c0                	test   eax,eax
  4048af:	75 09                	jne    0x4048ba
  4048b1:	39 7d e8             	cmp    DWORD PTR [ebp-0x18],edi
  4048b4:	0f 84 d1 20 00 00    	je     0x40698b
  4048ba:	80 bd 3c ee ff ff 00 	cmp    BYTE PTR [ebp-0x11c4],0x0
  4048c1:	0f 84 c4 20 00 00    	je     0x40698b
  4048c7:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  4048cd:	6a 00                	push   0x0
  4048cf:	50                   	push   eax
  4048d0:	e8 5e 60 00 00       	call   0x40a933
  4048d5:	59                   	pop    ecx
  4048d6:	85 c0                	test   eax,eax
  4048d8:	59                   	pop    ecx
  4048d9:	0f 85 ac 20 00 00    	jne    0x40698b
  4048df:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  4048e5:	50                   	push   eax
  4048e6:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4048ec:	50                   	push   eax
  4048ed:	ff d6                	call   esi
  4048ef:	33 db                	xor    ebx,ebx
  4048f1:	33 ff                	xor    edi,edi
  4048f3:	39 1d b0 3a 41 00    	cmp    DWORD PTR ds:0x413ab0,ebx
  4048f9:	7e 2b                	jle    0x404926
  4048fb:	a1 a0 36 41 00       	mov    eax,ds:0x4136a0
  404900:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  404903:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  404909:	50                   	push   eax
  40490a:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404910:	85 c0                	test   eax,eax
  404912:	a1 b0 3a 41 00       	mov    eax,ds:0x413ab0
  404917:	74 05                	je     0x40491e
  404919:	47                   	inc    edi
  40491a:	3b f8                	cmp    edi,eax
  40491c:	7c dd                	jl     0x4048fb
  40491e:	3b f8                	cmp    edi,eax
  404920:	0f 8c c5 00 00 00    	jl     0x4049eb
  404926:	68 0a 02 00 00       	push   0x20a
  40492b:	e8 41 6d 00 00       	call   0x40b671
  404930:	8b 15 a0 36 41 00    	mov    edx,DWORD PTR ds:0x4136a0
  404936:	59                   	pop    ecx
  404937:	8b 0d b0 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab0
  40493d:	89 04 8a             	mov    DWORD PTR [edx+ecx*4],eax
  404940:	39 1d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,ebx
  404946:	74 19                	je     0x404961
  404948:	8b 0d a0 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a0
  40494e:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  404954:	50                   	push   eax
  404955:	a1 b0 3a 41 00       	mov    eax,ds:0x413ab0
  40495a:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  40495d:	ff d6                	call   esi
  40495f:	eb 1b                	jmp    0x40497c
  404961:	a1 b0 3a 41 00       	mov    eax,ds:0x413ab0
  404966:	8b 0d a0 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a0
  40496c:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  40496f:	8d 85 3c f1 ff ff    	lea    eax,[ebp-0xec4]
  404975:	50                   	push   eax
  404976:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  40497c:	39 1d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,ebx
  404982:	74 1f                	je     0x4049a3
  404984:	8b 0d a0 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a0
  40498a:	8d 85 3c ee ff ff    	lea    eax,[ebp-0x11c4]
  404990:	50                   	push   eax
  404991:	a1 b0 3a 41 00       	mov    eax,ds:0x413ab0
  404996:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  404999:	05 04 01 00 00       	add    eax,0x104
  40499e:	50                   	push   eax
  40499f:	ff d6                	call   esi
  4049a1:	eb 21                	jmp    0x4049c4
  4049a3:	a1 b0 3a 41 00       	mov    eax,ds:0x413ab0
  4049a8:	8b 0d a0 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a0
  4049ae:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4049b1:	05 04 01 00 00       	add    eax,0x104
  4049b6:	50                   	push   eax
  4049b7:	8d 85 3c ee ff ff    	lea    eax,[ebp-0x11c4]
  4049bd:	50                   	push   eax
  4049be:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  4049c4:	a1 b0 3a 41 00       	mov    eax,ds:0x413ab0
  4049c9:	8b 0d a0 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a0
  4049cf:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4049d2:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4049d9:	66 89 88 08 02 00 00 	mov    WORD PTR [eax+0x208],cx
  4049e0:	ff 05 b0 3a 41 00    	inc    DWORD PTR ds:0x413ab0
  4049e6:	e9 a0 1f 00 00       	jmp    0x40698b
  4049eb:	8b 0d a0 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a0
  4049f1:	66 8b 15 94 3b 41 00 	mov    dx,WORD PTR ds:0x413b94
  4049f8:	8b c7                	mov    eax,edi
  4049fa:	c1 e0 02             	shl    eax,0x2
  4049fd:	8b 0c 08             	mov    ecx,DWORD PTR [eax+ecx*1]
  404a00:	66 89 91 08 02 00 00 	mov    WORD PTR [ecx+0x208],dx
  404a07:	8d 8d 3c ee ff ff    	lea    ecx,[ebp-0x11c4]
  404a0d:	51                   	push   ecx
  404a0e:	8b 0d a0 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a0
  404a14:	8b 04 08             	mov    eax,DWORD PTR [eax+ecx*1]
  404a17:	05 04 01 00 00       	add    eax,0x104
  404a1c:	e9 bb 1e 00 00       	jmp    0x4068dc
  404a21:	6a 10                	push   0x10
  404a23:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404a29:	68 f0 23 41 00       	push   0x4123f0
  404a2e:	50                   	push   eax
  404a2f:	e8 fc ac 00 00       	call   0x40f730
  404a34:	83 c4 0c             	add    esp,0xc
  404a37:	85 c0                	test   eax,eax
  404a39:	0f 85 b8 00 00 00    	jne    0x404af7
  404a3f:	33 ff                	xor    edi,edi
  404a41:	39 1d 80 3a 41 00    	cmp    DWORD PTR ds:0x413a80,ebx
  404a47:	7e 27                	jle    0x404a70
  404a49:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  404a4e:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  404a51:	8d 85 50 f6 ff ff    	lea    eax,[ebp-0x9b0]
  404a57:	50                   	push   eax
  404a58:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404a5e:	85 c0                	test   eax,eax
  404a60:	a1 80 3a 41 00       	mov    eax,ds:0x413a80
  404a65:	74 05                	je     0x404a6c
  404a67:	47                   	inc    edi
  404a68:	3b f8                	cmp    edi,eax
  404a6a:	7c dd                	jl     0x404a49
  404a6c:	3b f8                	cmp    edi,eax
  404a6e:	7c 6c                	jl     0x404adc
  404a70:	68 0c 01 00 00       	push   0x10c
  404a75:	e8 f7 6b 00 00       	call   0x40b671
  404a7a:	8b 15 80 3a 41 00    	mov    edx,DWORD PTR ds:0x413a80
  404a80:	59                   	pop    ecx
  404a81:	8b 0d 98 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b98
  404a87:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  404a8a:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  404a8f:	8b 0d 80 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a80
  404a95:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  404a98:	89 98 04 01 00 00    	mov    DWORD PTR [eax+0x104],ebx
  404a9e:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  404aa3:	8b 0d 80 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a80
  404aa9:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  404aac:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404ab3:	66 89 88 08 01 00 00 	mov    WORD PTR [eax+0x108],cx
  404aba:	8b 0d 98 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b98
  404ac0:	8d 85 50 f6 ff ff    	lea    eax,[ebp-0x9b0]
  404ac6:	50                   	push   eax
  404ac7:	a1 80 3a 41 00       	mov    eax,ds:0x413a80
  404acc:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  404acf:	ff d6                	call   esi
  404ad1:	ff 05 80 3a 41 00    	inc    DWORD PTR ds:0x413a80
  404ad7:	e9 ae f6 ff ff       	jmp    0x40418a
  404adc:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  404ae1:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404ae8:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404aeb:	66 89 88 08 01 00 00 	mov    WORD PTR [eax+0x108],cx
  404af2:	e9 93 f6 ff ff       	jmp    0x40418a
  404af7:	6a 0c                	push   0xc
  404af9:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404aff:	68 e0 23 41 00       	push   0x4123e0
  404b04:	50                   	push   eax
  404b05:	e8 26 ac 00 00       	call   0x40f730
  404b0a:	83 c4 0c             	add    esp,0xc
  404b0d:	85 c0                	test   eax,eax
  404b0f:	0f 85 91 00 00 00    	jne    0x404ba6
  404b15:	33 ff                	xor    edi,edi
  404b17:	39 1d b4 3a 41 00    	cmp    DWORD PTR ds:0x413ab4,ebx
  404b1d:	7e 3c                	jle    0x404b5b
  404b1f:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  404b25:	50                   	push   eax
  404b26:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  404b2b:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404b2e:	83 c0 08             	add    eax,0x8
  404b31:	50                   	push   eax
  404b32:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404b38:	85 c0                	test   eax,eax
  404b3a:	75 16                	jne    0x404b52
  404b3c:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  404b41:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404b48:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404b4b:	66 89 88 6e 02 00 00 	mov    WORD PTR [eax+0x26e],cx
  404b52:	47                   	inc    edi
  404b53:	3b 3d b4 3a 41 00    	cmp    edi,DWORD PTR ds:0x413ab4
  404b59:	7c c4                	jl     0x404b1f
  404b5b:	33 ff                	xor    edi,edi
  404b5d:	39 1d 68 37 41 00    	cmp    DWORD PTR ds:0x413768,ebx
  404b63:	0f 8e 21 f6 ff ff    	jle    0x40418a
  404b69:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  404b6f:	50                   	push   eax
  404b70:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  404b75:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  404b78:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404b7e:	85 c0                	test   eax,eax
  404b80:	75 16                	jne    0x404b98
  404b82:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  404b87:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404b8e:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404b91:	66 89 88 66 02 00 00 	mov    WORD PTR [eax+0x266],cx
  404b98:	47                   	inc    edi
  404b99:	3b 3d 68 37 41 00    	cmp    edi,DWORD PTR ds:0x413768
  404b9f:	7c c8                	jl     0x404b69
  404ba1:	e9 e4 f5 ff ff       	jmp    0x40418a
  404ba6:	6a 0f                	push   0xf
  404ba8:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404bae:	68 d0 23 41 00       	push   0x4123d0
  404bb3:	50                   	push   eax
  404bb4:	e8 77 ab 00 00       	call   0x40f730
  404bb9:	83 c4 0c             	add    esp,0xc
  404bbc:	85 c0                	test   eax,eax
  404bbe:	0f 85 f1 00 00 00    	jne    0x404cb5
  404bc4:	8d 85 4f f6 ff ff    	lea    eax,[ebp-0x9b1]
  404bca:	50                   	push   eax
  404bcb:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  404bd1:	50                   	push   eax
  404bd2:	ff d6                	call   esi
  404bd4:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  404bda:	6a 01                	push   0x1
  404bdc:	50                   	push   eax
  404bdd:	e8 b2 5b 00 00       	call   0x40a794
  404be2:	59                   	pop    ecx
  404be3:	33 ff                	xor    edi,edi
  404be5:	39 1d b4 3a 41 00    	cmp    DWORD PTR ds:0x413ab4,ebx
  404beb:	59                   	pop    ecx
  404bec:	7e 5c                	jle    0x404c4a
  404bee:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  404bf3:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404bf6:	83 c0 08             	add    eax,0x8
  404bf9:	50                   	push   eax
  404bfa:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404c00:	50                   	push   eax
  404c01:	ff d6                	call   esi
  404c03:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404c09:	6a 01                	push   0x1
  404c0b:	50                   	push   eax
  404c0c:	e8 83 5b 00 00       	call   0x40a794
  404c11:	59                   	pop    ecx
  404c12:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  404c18:	59                   	pop    ecx
  404c19:	50                   	push   eax
  404c1a:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404c20:	50                   	push   eax
  404c21:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404c27:	85 c0                	test   eax,eax
  404c29:	75 16                	jne    0x404c41
  404c2b:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  404c30:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404c37:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404c3a:	66 89 88 6c 02 00 00 	mov    WORD PTR [eax+0x26c],cx
  404c41:	47                   	inc    edi
  404c42:	3b 3d b4 3a 41 00    	cmp    edi,DWORD PTR ds:0x413ab4
  404c48:	7c a4                	jl     0x404bee
  404c4a:	33 ff                	xor    edi,edi
  404c4c:	39 1d 68 37 41 00    	cmp    DWORD PTR ds:0x413768,ebx
  404c52:	0f 8e 32 f5 ff ff    	jle    0x40418a
  404c58:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  404c5d:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  404c60:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404c66:	50                   	push   eax
  404c67:	ff d6                	call   esi
  404c69:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404c6f:	6a 01                	push   0x1
  404c71:	50                   	push   eax
  404c72:	e8 1d 5b 00 00       	call   0x40a794
  404c77:	59                   	pop    ecx
  404c78:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  404c7e:	59                   	pop    ecx
  404c7f:	50                   	push   eax
  404c80:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404c86:	50                   	push   eax
  404c87:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404c8d:	85 c0                	test   eax,eax
  404c8f:	75 16                	jne    0x404ca7
  404c91:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  404c96:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404c9d:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404ca0:	66 89 88 64 02 00 00 	mov    WORD PTR [eax+0x264],cx
  404ca7:	47                   	inc    edi
  404ca8:	3b 3d 68 37 41 00    	cmp    edi,DWORD PTR ds:0x413768
  404cae:	7c a8                	jl     0x404c58
  404cb0:	e9 d5 f4 ff ff       	jmp    0x40418a
  404cb5:	6a 09                	push   0x9
  404cb7:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404cbd:	68 c4 23 41 00       	push   0x4123c4
  404cc2:	50                   	push   eax
  404cc3:	e8 68 aa 00 00       	call   0x40f730
  404cc8:	83 c4 0c             	add    esp,0xc
  404ccb:	85 c0                	test   eax,eax
  404ccd:	0f 85 b7 01 00 00    	jne    0x404e8a
  404cd3:	53                   	push   ebx
  404cd4:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404cda:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404cdd:	57                   	push   edi
  404cde:	50                   	push   eax
  404cdf:	e8 23 1e 00 00       	call   0x406b07
  404ce4:	6a 0a                	push   0xa
  404ce6:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404cec:	68 b8 23 41 00       	push   0x4123b8
  404cf1:	50                   	push   eax
  404cf2:	e8 39 aa 00 00       	call   0x40f730
  404cf7:	83 c4 1c             	add    esp,0x1c
  404cfa:	85 c0                	test   eax,eax
  404cfc:	0f 85 a1 f4 ff ff    	jne    0x4041a3
  404d02:	6a 02                	push   0x2
  404d04:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404d0a:	5f                   	pop    edi
  404d0b:	57                   	push   edi
  404d0c:	68 08 24 41 00       	push   0x412408
  404d11:	50                   	push   eax
  404d12:	e8 19 aa 00 00       	call   0x40f730
  404d17:	83 c4 0c             	add    esp,0xc
  404d1a:	85 c0                	test   eax,eax
  404d1c:	75 09                	jne    0x404d27
  404d1e:	39 7d e4             	cmp    DWORD PTR [ebp-0x1c],edi
  404d21:	0f 84 14 01 00 00    	je     0x404e3b
  404d27:	57                   	push   edi
  404d28:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404d2e:	68 04 24 41 00       	push   0x412404
  404d33:	50                   	push   eax
  404d34:	e8 f7 a9 00 00       	call   0x40f730
  404d39:	83 c4 0c             	add    esp,0xc
  404d3c:	85 c0                	test   eax,eax
  404d3e:	75 09                	jne    0x404d49
  404d40:	39 7d e8             	cmp    DWORD PTR [ebp-0x18],edi
  404d43:	0f 84 f2 00 00 00    	je     0x404e3b
  404d49:	33 db                	xor    ebx,ebx
  404d4b:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404d51:	53                   	push   ebx
  404d52:	50                   	push   eax
  404d53:	e8 db 5b 00 00       	call   0x40a933
  404d58:	59                   	pop    ecx
  404d59:	85 c0                	test   eax,eax
  404d5b:	59                   	pop    ecx
  404d5c:	0f 85 d9 00 00 00    	jne    0x404e3b
  404d62:	33 ff                	xor    edi,edi
  404d64:	39 1d 74 37 41 00    	cmp    DWORD PTR ds:0x413774,ebx
  404d6a:	7e 2b                	jle    0x404d97
  404d6c:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  404d71:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  404d74:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404d7a:	50                   	push   eax
  404d7b:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  404d81:	85 c0                	test   eax,eax
  404d83:	a1 74 37 41 00       	mov    eax,ds:0x413774
  404d88:	74 05                	je     0x404d8f
  404d8a:	47                   	inc    edi
  404d8b:	3b f8                	cmp    edi,eax
  404d8d:	7c dd                	jl     0x404d6c
  404d8f:	3b f8                	cmp    edi,eax
  404d91:	0f 8c 8e 00 00 00    	jl     0x404e25
  404d97:	68 0c 01 00 00       	push   0x10c
  404d9c:	e8 d0 68 00 00       	call   0x40b671
  404da1:	8b 15 74 37 41 00    	mov    edx,DWORD PTR ds:0x413774
  404da7:	59                   	pop    ecx
  404da8:	8b 0d a8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a8
  404dae:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  404db1:	a1 74 37 41 00       	mov    eax,ds:0x413774
  404db6:	8b 0d a8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a8
  404dbc:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  404dbf:	89 98 04 01 00 00    	mov    DWORD PTR [eax+0x104],ebx
  404dc5:	39 1d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,ebx
  404dcb:	74 19                	je     0x404de6
  404dcd:	8b 0d a8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a8
  404dd3:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404dd9:	50                   	push   eax
  404dda:	a1 74 37 41 00       	mov    eax,ds:0x413774
  404ddf:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  404de2:	ff d6                	call   esi
  404de4:	eb 1b                	jmp    0x404e01
  404de6:	a1 74 37 41 00       	mov    eax,ds:0x413774
  404deb:	8b 0d a8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a8
  404df1:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  404df4:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404dfa:	50                   	push   eax
  404dfb:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  404e01:	a1 74 37 41 00       	mov    eax,ds:0x413774
  404e06:	8b 0d a8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a8
  404e0c:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  404e0f:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404e16:	66 89 88 08 01 00 00 	mov    WORD PTR [eax+0x108],cx
  404e1d:	ff 05 74 37 41 00    	inc    DWORD PTR ds:0x413774
  404e23:	eb 16                	jmp    0x404e3b
  404e25:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  404e2a:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  404e31:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  404e34:	66 89 88 08 01 00 00 	mov    WORD PTR [eax+0x108],cx
  404e3b:	6a 00                	push   0x0
  404e3d:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404e43:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404e46:	68 00 08 00 00       	push   0x800
  404e4b:	50                   	push   eax
  404e4c:	e8 b6 1c 00 00       	call   0x406b07
  404e51:	6a 04                	push   0x4
  404e53:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404e59:	68 b0 23 41 00       	push   0x4123b0
  404e5e:	50                   	push   eax
  404e5f:	e8 cc a8 00 00       	call   0x40f730
  404e64:	83 c4 1c             	add    esp,0x1c
  404e67:	85 c0                	test   eax,eax
  404e69:	0f 85 34 f3 ff ff    	jne    0x4041a3
  404e6f:	80 bd 44 f6 ff ff 46 	cmp    BYTE PTR [ebp-0x9bc],0x46
  404e76:	0f 84 27 f3 ff ff    	je     0x4041a3
  404e7c:	80 bd 44 f6 ff ff 4e 	cmp    BYTE PTR [ebp-0x9bc],0x4e
  404e83:	75 b6                	jne    0x404e3b
  404e85:	e9 19 f3 ff ff       	jmp    0x4041a3
  404e8a:	6a 0a                	push   0xa
  404e8c:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404e92:	68 b8 23 41 00       	push   0x4123b8
  404e97:	50                   	push   eax
  404e98:	e8 93 a8 00 00       	call   0x40f730
  404e9d:	83 c4 0c             	add    esp,0xc
  404ea0:	85 c0                	test   eax,eax
  404ea2:	0f 85 90 02 00 00    	jne    0x405138
  404ea8:	6a 02                	push   0x2
  404eaa:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404eb0:	68 08 24 41 00       	push   0x412408
  404eb5:	50                   	push   eax
  404eb6:	e8 75 a8 00 00       	call   0x40f730
  404ebb:	83 c4 0c             	add    esp,0xc
  404ebe:	85 c0                	test   eax,eax
  404ec0:	75 06                	jne    0x404ec8
  404ec2:	83 7d e4 02          	cmp    DWORD PTR [ebp-0x1c],0x2
  404ec6:	74 20                	je     0x404ee8
  404ec8:	6a 02                	push   0x2
  404eca:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404ed0:	68 04 24 41 00       	push   0x412404
  404ed5:	50                   	push   eax
  404ed6:	e8 55 a8 00 00       	call   0x40f730
  404edb:	83 c4 0c             	add    esp,0xc
  404ede:	85 c0                	test   eax,eax
  404ee0:	75 0b                	jne    0x404eed
  404ee2:	83 7d e8 02          	cmp    DWORD PTR [ebp-0x18],0x2
  404ee6:	75 05                	jne    0x404eed
  404ee8:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  404eeb:	eb 07                	jmp    0x404ef4
  404eed:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
  404ef4:	39 1d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,ebx
  404efa:	74 12                	je     0x404f0e
  404efc:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404f02:	50                   	push   eax
  404f03:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  404f09:	50                   	push   eax
  404f0a:	ff d6                	call   esi
  404f0c:	eb 14                	jmp    0x404f22
  404f0e:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  404f14:	50                   	push   eax
  404f15:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404f1b:	50                   	push   eax
  404f1c:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  404f22:	53                   	push   ebx
  404f23:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404f29:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404f2c:	57                   	push   edi
  404f2d:	50                   	push   eax
  404f2e:	e8 d4 1b 00 00       	call   0x406b07
  404f33:	83 c4 10             	add    esp,0x10
  404f36:	39 5d f4             	cmp    DWORD PTR [ebp-0xc],ebx
  404f39:	0f 84 4b f2 ff ff    	je     0x40418a
  404f3f:	83 65 f4 00          	and    DWORD PTR [ebp-0xc],0x0
  404f43:	6a 0a                	push   0xa
  404f45:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404f4b:	68 a4 23 41 00       	push   0x4123a4
  404f50:	50                   	push   eax
  404f51:	e8 da a7 00 00       	call   0x40f730
  404f56:	83 c4 0c             	add    esp,0xc
  404f59:	85 c0                	test   eax,eax
  404f5b:	0f 85 42 f2 ff ff    	jne    0x4041a3
  404f61:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404f67:	50                   	push   eax
  404f68:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  404f6e:	50                   	push   eax
  404f6f:	ff d6                	call   esi
  404f71:	6a 00                	push   0x0
  404f73:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404f79:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404f7c:	68 00 08 00 00       	push   0x800
  404f81:	50                   	push   eax
  404f82:	e8 80 1b 00 00       	call   0x406b07
  404f87:	6a 0a                	push   0xa
  404f89:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404f8f:	68 98 23 41 00       	push   0x412398
  404f94:	50                   	push   eax
  404f95:	e8 96 a7 00 00       	call   0x40f730
  404f9a:	83 c4 1c             	add    esp,0x1c
  404f9d:	85 c0                	test   eax,eax
  404f9f:	0f 85 fe f1 ff ff    	jne    0x4041a3
  404fa5:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  404fab:	50                   	push   eax
  404fac:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  404fb2:	50                   	push   eax
  404fb3:	ff d6                	call   esi
  404fb5:	6a 00                	push   0x0
  404fb7:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404fbd:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404fc0:	68 00 08 00 00       	push   0x800
  404fc5:	50                   	push   eax
  404fc6:	e8 3c 1b 00 00       	call   0x406b07
  404fcb:	6a 09                	push   0x9
  404fcd:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404fd3:	68 8c 23 41 00       	push   0x41238c
  404fd8:	50                   	push   eax
  404fd9:	e8 52 a7 00 00       	call   0x40f730
  404fde:	83 c4 1c             	add    esp,0x1c
  404fe1:	85 c0                	test   eax,eax
  404fe3:	0f 85 ba f1 ff ff    	jne    0x4041a3
  404fe9:	50                   	push   eax
  404fea:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  404ff0:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404ff3:	68 00 08 00 00       	push   0x800
  404ff8:	50                   	push   eax
  404ff9:	e8 09 1b 00 00       	call   0x406b07
  404ffe:	6a 09                	push   0x9
  405000:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405006:	68 80 23 41 00       	push   0x412380
  40500b:	50                   	push   eax
  40500c:	e8 1f a7 00 00       	call   0x40f730
  405011:	83 c4 1c             	add    esp,0x1c
  405014:	85 c0                	test   eax,eax
  405016:	75 0f                	jne    0x405027
  405018:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
  40501f:	8d bd 49 f6 ff ff    	lea    edi,[ebp-0x9b7]
  405025:	eb 05                	jmp    0x40502c
  405027:	bf d0 34 41 00       	mov    edi,0x4134d0
  40502c:	8b 0d 20 37 41 00    	mov    ecx,DWORD PTR ds:0x413720
  405032:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  405038:	50                   	push   eax
  405039:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40503f:	50                   	push   eax
  405040:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  405046:	50                   	push   eax
  405047:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  40504c:	51                   	push   ecx
  40504d:	68 14 07 00 00       	push   0x714
  405052:	ff 30                	push   DWORD PTR [eax]
  405054:	8d 04 88             	lea    eax,[eax+ecx*4]
  405057:	50                   	push   eax
  405058:	e8 36 67 00 00       	call   0x40b793
  40505d:	83 c4 1c             	add    esp,0x1c
  405060:	85 c0                	test   eax,eax
  405062:	0f 85 c5 00 00 00    	jne    0x40512d
  405068:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  40506d:	8b 0d 20 37 41 00    	mov    ecx,DWORD PTR ds:0x413720
  405073:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405076:	83 a0 0c 07 00 00 00 	and    DWORD PTR [eax+0x70c],0x0
  40507d:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  405082:	8b 0d 20 37 41 00    	mov    ecx,DWORD PTR ds:0x413720
  405088:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40508b:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  405092:	66 89 88 10 07 00 00 	mov    WORD PTR [eax+0x710],cx
  405099:	8b 0d 20 37 41 00    	mov    ecx,DWORD PTR ds:0x413720
  40509f:	8d 85 34 e6 ff ff    	lea    eax,[ebp-0x19cc]
  4050a5:	50                   	push   eax
  4050a6:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  4050ab:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4050ae:	83 c0 08             	add    eax,0x8
  4050b1:	50                   	push   eax
  4050b2:	ff d6                	call   esi
  4050b4:	8b 0d 20 37 41 00    	mov    ecx,DWORD PTR ds:0x413720
  4050ba:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4050c0:	50                   	push   eax
  4050c1:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  4050c6:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4050c9:	05 0c 01 00 00       	add    eax,0x10c
  4050ce:	50                   	push   eax
  4050cf:	ff d6                	call   esi
  4050d1:	8b 0d 20 37 41 00    	mov    ecx,DWORD PTR ds:0x413720
  4050d7:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  4050dd:	50                   	push   eax
  4050de:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  4050e3:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4050e6:	05 0c 02 00 00       	add    eax,0x20c
  4050eb:	50                   	push   eax
  4050ec:	ff d6                	call   esi
  4050ee:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  4050f3:	8b 0d 20 37 41 00    	mov    ecx,DWORD PTR ds:0x413720
  4050f9:	57                   	push   edi
  4050fa:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4050fd:	05 0c 03 00 00       	add    eax,0x30c
  405102:	50                   	push   eax
  405103:	ff d6                	call   esi
  405105:	a1 20 37 41 00       	mov    eax,ds:0x413720
  40510a:	8b 0d a8 37 41 00    	mov    ecx,DWORD PTR ds:0x4137a8
  405110:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  405113:	8d 88 0c 03 00 00    	lea    ecx,[eax+0x30c]
  405119:	05 0c 05 00 00       	add    eax,0x50c
  40511e:	51                   	push   ecx
  40511f:	50                   	push   eax
  405120:	ff d6                	call   esi
  405122:	ff 05 20 37 41 00    	inc    DWORD PTR ds:0x413720
  405128:	e9 5e 18 00 00       	jmp    0x40698b
  40512d:	57                   	push   edi
  40512e:	05 0c 05 00 00       	add    eax,0x50c
  405133:	e9 a4 17 00 00       	jmp    0x4068dc
  405138:	6a 0e                	push   0xe
  40513a:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405140:	68 70 23 41 00       	push   0x412370
  405145:	50                   	push   eax
  405146:	e8 e5 a5 00 00       	call   0x40f730
  40514b:	83 c4 0c             	add    esp,0xc
  40514e:	85 c0                	test   eax,eax
  405150:	0f 84 c5 0b 00 00    	je     0x405d1b
  405156:	6a 11                	push   0x11
  405158:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40515e:	68 5c 23 41 00       	push   0x41235c
  405163:	50                   	push   eax
  405164:	e8 c7 a5 00 00       	call   0x40f730
  405169:	83 c4 0c             	add    esp,0xc
  40516c:	85 c0                	test   eax,eax
  40516e:	0f 84 a7 0b 00 00    	je     0x405d1b
  405174:	6a 0c                	push   0xc
  405176:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40517c:	68 4c 23 41 00       	push   0x41234c
  405181:	50                   	push   eax
  405182:	e8 a9 a5 00 00       	call   0x40f730
  405187:	83 c4 0c             	add    esp,0xc
  40518a:	85 c0                	test   eax,eax
  40518c:	0f 85 99 01 00 00    	jne    0x40532b
  405192:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  405198:	50                   	push   eax
  405199:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40519f:	50                   	push   eax
  4051a0:	ff d6                	call   esi
  4051a2:	53                   	push   ebx
  4051a3:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4051a9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4051ac:	57                   	push   edi
  4051ad:	50                   	push   eax
  4051ae:	e8 54 19 00 00       	call   0x406b07
  4051b3:	6a 0b                	push   0xb
  4051b5:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4051bb:	68 40 23 41 00       	push   0x412340
  4051c0:	50                   	push   eax
  4051c1:	e8 6a a5 00 00       	call   0x40f730
  4051c6:	83 c4 1c             	add    esp,0x1c
  4051c9:	85 c0                	test   eax,eax
  4051cb:	0f 85 d2 ef ff ff    	jne    0x4041a3
  4051d1:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  4051d7:	50                   	push   eax
  4051d8:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  4051de:	50                   	push   eax
  4051df:	ff d6                	call   esi
  4051e1:	6a 00                	push   0x0
  4051e3:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4051e9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4051ec:	68 00 08 00 00       	push   0x800
  4051f1:	50                   	push   eax
  4051f2:	e8 10 19 00 00       	call   0x406b07
  4051f7:	6a 0a                	push   0xa
  4051f9:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4051ff:	68 34 23 41 00       	push   0x412334
  405204:	50                   	push   eax
  405205:	e8 26 a5 00 00       	call   0x40f730
  40520a:	83 c4 1c             	add    esp,0x1c
  40520d:	85 c0                	test   eax,eax
  40520f:	0f 85 8e ef ff ff    	jne    0x4041a3
  405215:	33 ff                	xor    edi,edi
  405217:	39 3d c8 36 41 00    	cmp    DWORD PTR ds:0x4136c8,edi
  40521d:	7e 4b                	jle    0x40526a
  40521f:	8b 1d 64 01 41 00    	mov    ebx,DWORD PTR ds:0x410164
  405225:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40522b:	50                   	push   eax
  40522c:	a1 34 37 41 00       	mov    eax,ds:0x413734
  405231:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  405234:	ff d3                	call   ebx
  405236:	85 c0                	test   eax,eax
  405238:	75 1b                	jne    0x405255
  40523a:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  405240:	50                   	push   eax
  405241:	a1 34 37 41 00       	mov    eax,ds:0x413734
  405246:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  405249:	05 00 01 00 00       	add    eax,0x100
  40524e:	50                   	push   eax
  40524f:	ff d3                	call   ebx
  405251:	85 c0                	test   eax,eax
  405253:	74 09                	je     0x40525e
  405255:	47                   	inc    edi
  405256:	3b 3d c8 36 41 00    	cmp    edi,DWORD PTR ds:0x4136c8
  40525c:	7c c7                	jl     0x405225
  40525e:	3b 3d c8 36 41 00    	cmp    edi,DWORD PTR ds:0x4136c8
  405264:	0f 8c a7 00 00 00    	jl     0x405311
  40526a:	68 08 03 00 00       	push   0x308
  40526f:	e8 fd 63 00 00       	call   0x40b671
  405274:	8b 15 c8 36 41 00    	mov    edx,DWORD PTR ds:0x4136c8
  40527a:	59                   	pop    ecx
  40527b:	8b 0d 34 37 41 00    	mov    ecx,DWORD PTR ds:0x413734
  405281:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  405284:	a1 34 37 41 00       	mov    eax,ds:0x413734
  405289:	8b 0d c8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136c8
  40528f:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405292:	83 a0 00 03 00 00 00 	and    DWORD PTR [eax+0x300],0x0
  405299:	a1 34 37 41 00       	mov    eax,ds:0x413734
  40529e:	8b 0d c8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136c8
  4052a4:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4052a7:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4052ae:	66 89 88 04 03 00 00 	mov    WORD PTR [eax+0x304],cx
  4052b5:	8b 0d c8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136c8
  4052bb:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  4052c1:	50                   	push   eax
  4052c2:	a1 34 37 41 00       	mov    eax,ds:0x413734
  4052c7:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4052ca:	05 00 01 00 00       	add    eax,0x100
  4052cf:	50                   	push   eax
  4052d0:	ff d6                	call   esi
  4052d2:	8b 0d c8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136c8
  4052d8:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4052de:	50                   	push   eax
  4052df:	a1 34 37 41 00       	mov    eax,ds:0x413734
  4052e4:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
  4052e7:	ff d6                	call   esi
  4052e9:	8b 0d 34 37 41 00    	mov    ecx,DWORD PTR ds:0x413734
  4052ef:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  4052f5:	50                   	push   eax
  4052f6:	a1 c8 36 41 00       	mov    eax,ds:0x4136c8
  4052fb:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4052fe:	05 00 02 00 00       	add    eax,0x200
  405303:	50                   	push   eax
  405304:	ff d6                	call   esi
  405306:	ff 05 c8 36 41 00    	inc    DWORD PTR ds:0x4136c8
  40530c:	e9 79 ee ff ff       	jmp    0x40418a
  405311:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  405317:	50                   	push   eax
  405318:	a1 34 37 41 00       	mov    eax,ds:0x413734
  40531d:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  405320:	05 00 02 00 00       	add    eax,0x200
  405325:	50                   	push   eax
  405326:	e9 88 07 00 00       	jmp    0x405ab3
  40532b:	6a 0c                	push   0xc
  40532d:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405333:	68 24 23 41 00       	push   0x412324
  405338:	50                   	push   eax
  405339:	e8 f2 a3 00 00       	call   0x40f730
  40533e:	83 c4 0c             	add    esp,0xc
  405341:	85 c0                	test   eax,eax
  405343:	75 2f                	jne    0x405374
  405345:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  40534b:	50                   	push   eax
  40534c:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  405352:	40                   	inc    eax
  405353:	50                   	push   eax
  405354:	e8 18 63 00 00       	call   0x40b671
  405359:	59                   	pop    ecx
  40535a:	a3 9c 37 41 00       	mov    ds:0x41379c,eax
  40535f:	8d 8d 4b f6 ff ff    	lea    ecx,[ebp-0x9b5]
  405365:	51                   	push   ecx
  405366:	50                   	push   eax
  405367:	ff d6                	call   esi
  405369:	89 1d d0 36 41 00    	mov    DWORD PTR ds:0x4136d0,ebx
  40536f:	e9 16 ee ff ff       	jmp    0x40418a
  405374:	6a 0a                	push   0xa
  405376:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40537c:	68 18 23 41 00       	push   0x412318
  405381:	50                   	push   eax
  405382:	e8 a9 a3 00 00       	call   0x40f730
  405387:	83 c4 0c             	add    esp,0xc
  40538a:	85 c0                	test   eax,eax
  40538c:	0f 85 1a 02 00 00    	jne    0x4055ac
  405392:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405398:	68 e0 20 41 00       	push   0x4120e0
  40539d:	50                   	push   eax
  40539e:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  4053a4:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  4053aa:	50                   	push   eax
  4053ab:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4053b1:	50                   	push   eax
  4053b2:	ff d6                	call   esi
  4053b4:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4053ba:	6a 00                	push   0x0
  4053bc:	50                   	push   eax
  4053bd:	e8 d2 53 00 00       	call   0x40a794
  4053c2:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  4053c8:	59                   	pop    ecx
  4053c9:	59                   	pop    ecx
  4053ca:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4053d0:	50                   	push   eax
  4053d1:	ff d3                	call   ebx
  4053d3:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  4053d6:	50                   	push   eax
  4053d7:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4053dd:	57                   	push   edi
  4053de:	50                   	push   eax
  4053df:	e8 4c a3 00 00       	call   0x40f730
  4053e4:	83 c4 0c             	add    esp,0xc
  4053e7:	85 c0                	test   eax,eax
  4053e9:	75 0d                	jne    0x4053f8
  4053eb:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4053f1:	50                   	push   eax
  4053f2:	ff d3                	call   ebx
  4053f4:	80 24 38 00          	and    BYTE PTR [eax+edi*1],0x0
  4053f8:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  4053fe:	50                   	push   eax
  4053ff:	ff d3                	call   ebx
  405401:	83 f8 03             	cmp    eax,0x3
  405404:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  405407:	0f 8e 7d ed ff ff    	jle    0x40418a
  40540d:	80 bd 4a f6 ff ff 5c 	cmp    BYTE PTR [ebp-0x9b6],0x5c
  405414:	75 09                	jne    0x40541f
  405416:	80 bd 4b f6 ff ff 5c 	cmp    BYTE PTR [ebp-0x9b5],0x5c
  40541d:	74 57                	je     0x405476
  40541f:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  405426:	7e 16                	jle    0x40543e
  405428:	0f be 85 4a f6 ff ff 	movsx  eax,BYTE PTR [ebp-0x9b6]
  40542f:	68 03 01 00 00       	push   0x103
  405434:	50                   	push   eax
  405435:	e8 44 6e 00 00       	call   0x40c27e
  40543a:	59                   	pop    ecx
  40543b:	59                   	pop    ecx
  40543c:	eb 16                	jmp    0x405454
  40543e:	0f be 85 4a f6 ff ff 	movsx  eax,BYTE PTR [ebp-0x9b6]
  405445:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  40544b:	66 8b 04 41          	mov    ax,WORD PTR [ecx+eax*2]
  40544f:	25 03 01 00 00       	and    eax,0x103
  405454:	85 c0                	test   eax,eax
  405456:	0f 84 2e ed ff ff    	je     0x40418a
  40545c:	80 bd 4b f6 ff ff 3a 	cmp    BYTE PTR [ebp-0x9b5],0x3a
  405463:	0f 85 21 ed ff ff    	jne    0x40418a
  405469:	80 bd 4c f6 ff ff 5c 	cmp    BYTE PTR [ebp-0x9b4],0x5c
  405470:	0f 85 14 ed ff ff    	jne    0x40418a
  405476:	33 ff                	xor    edi,edi
  405478:	39 3d 88 3b 41 00    	cmp    DWORD PTR ds:0x413b88,edi
  40547e:	7e 4c                	jle    0x4054cc
  405480:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  405485:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  405488:	ff d3                	call   ebx
  40548a:	39 45 fc             	cmp    DWORD PTR [ebp-0x4],eax
  40548d:	7d 05                	jge    0x405494
  40548f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  405492:	eb 0a                	jmp    0x40549e
  405494:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  405499:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  40549c:	ff d3                	call   ebx
  40549e:	50                   	push   eax
  40549f:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4054a4:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  4054a7:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  4054ad:	50                   	push   eax
  4054ae:	e8 7d a2 00 00       	call   0x40f730
  4054b3:	83 c4 0c             	add    esp,0xc
  4054b6:	85 c0                	test   eax,eax
  4054b8:	a1 88 3b 41 00       	mov    eax,ds:0x413b88
  4054bd:	74 05                	je     0x4054c4
  4054bf:	47                   	inc    edi
  4054c0:	3b f8                	cmp    edi,eax
  4054c2:	7c bc                	jl     0x405480
  4054c4:	3b f8                	cmp    edi,eax
  4054c6:	0f 8c a5 00 00 00    	jl     0x405571
  4054cc:	68 0c 01 00 00       	push   0x10c
  4054d1:	e8 9b 61 00 00       	call   0x40b671
  4054d6:	8b 15 88 3b 41 00    	mov    edx,DWORD PTR ds:0x413b88
  4054dc:	59                   	pop    ecx
  4054dd:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  4054e3:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  4054e6:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4054eb:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  4054f1:	8b 0c 88             	mov    ecx,DWORD PTR [eax+ecx*4]
  4054f4:	33 c0                	xor    eax,eax
  4054f6:	89 81 04 01 00 00    	mov    DWORD PTR [ecx+0x104],eax
  4054fc:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  405502:	8b 15 88 3b 41 00    	mov    edx,DWORD PTR ds:0x413b88
  405508:	8b 0c 91             	mov    ecx,DWORD PTR [ecx+edx*4]
  40550b:	66 89 81 08 01 00 00 	mov    WORD PTR [ecx+0x108],ax
  405512:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  405518:	8b 15 88 3b 41 00    	mov    edx,DWORD PTR ds:0x413b88
  40551e:	8b 0c 91             	mov    ecx,DWORD PTR [ecx+edx*4]
  405521:	66 8b 15 94 3b 41 00 	mov    dx,WORD PTR ds:0x413b94
  405528:	66 89 91 0a 01 00 00 	mov    WORD PTR [ecx+0x10a],dx
  40552f:	39 05 10 37 41 00    	cmp    DWORD PTR ds:0x413710,eax
  405535:	74 1a                	je     0x405551
  405537:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  40553d:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  405543:	50                   	push   eax
  405544:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  405549:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
  40554c:	e9 07 02 00 00       	jmp    0x405758
  405551:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  405556:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  40555c:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
  40555f:	8d 85 4a f6 ff ff    	lea    eax,[ebp-0x9b6]
  405565:	50                   	push   eax
  405566:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  40556c:	e9 e9 01 00 00       	jmp    0x40575a
  405571:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  405576:	c1 e7 02             	shl    edi,0x2
  405579:	ff 34 07             	push   DWORD PTR [edi+eax*1]
  40557c:	ff d3                	call   ebx
  40557e:	39 45 fc             	cmp    DWORD PTR [ebp-0x4],eax
  405581:	7d 05                	jge    0x405588
  405583:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  405586:	eb 0a                	jmp    0x405592
  405588:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  40558d:	ff 34 07             	push   DWORD PTR [edi+eax*1]
  405590:	ff d3                	call   ebx
  405592:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  405598:	8b 0c 0f             	mov    ecx,DWORD PTR [edi+ecx*1]
  40559b:	80 24 01 00          	and    BYTE PTR [ecx+eax*1],0x0
  40559f:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4055a4:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  4055a7:	e9 de 01 00 00       	jmp    0x40578a
  4055ac:	6a 0b                	push   0xb
  4055ae:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4055b4:	68 0c 23 41 00       	push   0x41230c
  4055b9:	50                   	push   eax
  4055ba:	e8 71 a1 00 00       	call   0x40f730
  4055bf:	83 c4 0c             	add    esp,0xc
  4055c2:	85 c0                	test   eax,eax
  4055c4:	0f 85 d3 01 00 00    	jne    0x40579d
  4055ca:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  4055d0:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  4055d6:	50                   	push   eax
  4055d7:	ff d3                	call   ebx
  4055d9:	8d bc 05 47 f6 ff ff 	lea    edi,[ebp+eax*1-0x9b9]
  4055e0:	68 04 23 41 00       	push   0x412304
  4055e5:	57                   	push   edi
  4055e6:	ff 15 60 01 41 00    	call   DWORD PTR ds:0x410160
  4055ec:	85 c0                	test   eax,eax
  4055ee:	75 02                	jne    0x4055f2
  4055f0:	20 07                	and    BYTE PTR [edi],al
  4055f2:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4055f8:	6a 2a                	push   0x2a
  4055fa:	50                   	push   eax
  4055fb:	e8 4c 68 00 00       	call   0x40be4c
  405600:	59                   	pop    ecx
  405601:	85 c0                	test   eax,eax
  405603:	59                   	pop    ecx
  405604:	75 26                	jne    0x40562c
  405606:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40560c:	6a 3f                	push   0x3f
  40560e:	50                   	push   eax
  40560f:	e8 38 68 00 00       	call   0x40be4c
  405614:	59                   	pop    ecx
  405615:	85 c0                	test   eax,eax
  405617:	59                   	pop    ecx
  405618:	75 12                	jne    0x40562c
  40561a:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405620:	68 e0 20 41 00       	push   0x4120e0
  405625:	50                   	push   eax
  405626:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40562c:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  405632:	50                   	push   eax
  405633:	ff d3                	call   ebx
  405635:	83 f8 03             	cmp    eax,0x3
  405638:	0f 8e 4c eb ff ff    	jle    0x40418a
  40563e:	80 bd 4b f6 ff ff 5c 	cmp    BYTE PTR [ebp-0x9b5],0x5c
  405645:	75 09                	jne    0x405650
  405647:	80 bd 4c f6 ff ff 5c 	cmp    BYTE PTR [ebp-0x9b4],0x5c
  40564e:	74 57                	je     0x4056a7
  405650:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  405657:	7e 16                	jle    0x40566f
  405659:	0f be 85 4b f6 ff ff 	movsx  eax,BYTE PTR [ebp-0x9b5]
  405660:	68 03 01 00 00       	push   0x103
  405665:	50                   	push   eax
  405666:	e8 13 6c 00 00       	call   0x40c27e
  40566b:	59                   	pop    ecx
  40566c:	59                   	pop    ecx
  40566d:	eb 16                	jmp    0x405685
  40566f:	0f be 85 4b f6 ff ff 	movsx  eax,BYTE PTR [ebp-0x9b5]
  405676:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  40567c:	66 8b 04 41          	mov    ax,WORD PTR [ecx+eax*2]
  405680:	25 03 01 00 00       	and    eax,0x103
  405685:	85 c0                	test   eax,eax
  405687:	0f 84 fd ea ff ff    	je     0x40418a
  40568d:	80 bd 4c f6 ff ff 3a 	cmp    BYTE PTR [ebp-0x9b4],0x3a
  405694:	0f 85 f0 ea ff ff    	jne    0x40418a
  40569a:	80 bd 4d f6 ff ff 5c 	cmp    BYTE PTR [ebp-0x9b3],0x5c
  4056a1:	0f 85 e3 ea ff ff    	jne    0x40418a
  4056a7:	33 ff                	xor    edi,edi
  4056a9:	39 3d 88 3b 41 00    	cmp    DWORD PTR ds:0x413b88,edi
  4056af:	7e 2b                	jle    0x4056dc
  4056b1:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4056b6:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  4056b9:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  4056bf:	50                   	push   eax
  4056c0:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  4056c6:	85 c0                	test   eax,eax
  4056c8:	a1 88 3b 41 00       	mov    eax,ds:0x413b88
  4056cd:	74 05                	je     0x4056d4
  4056cf:	47                   	inc    edi
  4056d0:	3b f8                	cmp    edi,eax
  4056d2:	7c dd                	jl     0x4056b1
  4056d4:	3b f8                	cmp    edi,eax
  4056d6:	0f 8c 89 00 00 00    	jl     0x405765
  4056dc:	68 0c 01 00 00       	push   0x10c
  4056e1:	e8 8b 5f 00 00       	call   0x40b671
  4056e6:	8b 15 88 3b 41 00    	mov    edx,DWORD PTR ds:0x413b88
  4056ec:	59                   	pop    ecx
  4056ed:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  4056f3:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  4056f6:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4056fb:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  405701:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405704:	83 a0 04 01 00 00 00 	and    DWORD PTR [eax+0x104],0x0
  40570b:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  405710:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  405716:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405719:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  405720:	66 89 88 08 01 00 00 	mov    WORD PTR [eax+0x108],cx
  405727:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  40572c:	8b 0d 88 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b88
  405732:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405735:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  40573c:	66 89 88 0a 01 00 00 	mov    WORD PTR [eax+0x10a],cx
  405743:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  405749:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  40574f:	50                   	push   eax
  405750:	a1 88 3b 41 00       	mov    eax,ds:0x413b88
  405755:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  405758:	ff d6                	call   esi
  40575a:	ff 05 88 3b 41 00    	inc    DWORD PTR ds:0x413b88
  405760:	e9 25 ea ff ff       	jmp    0x40418a
  405765:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  40576b:	66 8b 15 94 3b 41 00 	mov    dx,WORD PTR ds:0x413b94
  405772:	8b c7                	mov    eax,edi
  405774:	c1 e0 02             	shl    eax,0x2
  405777:	8b 0c 08             	mov    ecx,DWORD PTR [eax+ecx*1]
  40577a:	66 89 91 08 01 00 00 	mov    WORD PTR [ecx+0x108],dx
  405781:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  405787:	8b 04 08             	mov    eax,DWORD PTR [eax+ecx*1]
  40578a:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  405791:	66 89 88 0a 01 00 00 	mov    WORD PTR [eax+0x10a],cx
  405798:	e9 ed e9 ff ff       	jmp    0x40418a
  40579d:	6a 0c                	push   0xc
  40579f:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4057a5:	68 f4 22 41 00       	push   0x4122f4
  4057aa:	50                   	push   eax
  4057ab:	e8 80 9f 00 00       	call   0x40f730
  4057b0:	83 c4 0c             	add    esp,0xc
  4057b3:	85 c0                	test   eax,eax
  4057b5:	0f 85 45 01 00 00    	jne    0x405900
  4057bb:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  4057c1:	50                   	push   eax
  4057c2:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  4057c8:	50                   	push   eax
  4057c9:	ff d6                	call   esi
  4057cb:	53                   	push   ebx
  4057cc:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4057d2:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4057d5:	57                   	push   edi
  4057d6:	50                   	push   eax
  4057d7:	e8 2b 13 00 00       	call   0x406b07
  4057dc:	6a 0c                	push   0xc
  4057de:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4057e4:	68 38 24 41 00       	push   0x412438
  4057e9:	50                   	push   eax
  4057ea:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  4057ed:	e8 3e 9f 00 00       	call   0x40f730
  4057f2:	83 c4 1c             	add    esp,0x1c
  4057f5:	85 c0                	test   eax,eax
  4057f7:	75 23                	jne    0x40581c
  4057f9:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  4057ff:	50                   	push   eax
  405800:	e8 79 6b 00 00       	call   0x40c37e
  405805:	53                   	push   ebx
  405806:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  405809:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40580c:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405812:	57                   	push   edi
  405813:	50                   	push   eax
  405814:	e8 ee 12 00 00       	call   0x406b07
  405819:	83 c4 14             	add    esp,0x14
  40581c:	33 ff                	xor    edi,edi
  40581e:	39 1d 04 3b 41 00    	cmp    DWORD PTR ds:0x413b04,ebx
  405824:	7e 41                	jle    0x405867
  405826:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  40582b:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  40582e:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  405834:	50                   	push   eax
  405835:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  40583b:	85 c0                	test   eax,eax
  40583d:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  405842:	75 0e                	jne    0x405852
  405844:	8b 0c b8             	mov    ecx,DWORD PTR [eax+edi*4]
  405847:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  40584a:	3b 91 00 01 00 00    	cmp    edx,DWORD PTR [ecx+0x100]
  405850:	74 09                	je     0x40585b
  405852:	47                   	inc    edi
  405853:	3b 3d 04 3b 41 00    	cmp    edi,DWORD PTR ds:0x413b04
  405859:	7c d0                	jl     0x40582b
  40585b:	3b 3d 04 3b 41 00    	cmp    edi,DWORD PTR ds:0x413b04
  405861:	0f 8c 83 00 00 00    	jl     0x4058ea
  405867:	68 0c 01 00 00       	push   0x10c
  40586c:	e8 00 5e 00 00       	call   0x40b671
  405871:	8b 15 04 3b 41 00    	mov    edx,DWORD PTR ds:0x413b04
  405877:	59                   	pop    ecx
  405878:	8b 0d c0 37 41 00    	mov    ecx,DWORD PTR ds:0x4137c0
  40587e:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  405881:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  405886:	8b 0d 04 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b04
  40588c:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40588f:	89 98 04 01 00 00    	mov    DWORD PTR [eax+0x104],ebx
  405895:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  40589a:	8b 0d 04 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b04
  4058a0:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4058a3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4058a6:	89 88 00 01 00 00    	mov    DWORD PTR [eax+0x100],ecx
  4058ac:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  4058b1:	8b 0d 04 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b04
  4058b7:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4058ba:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4058c1:	66 89 88 08 01 00 00 	mov    WORD PTR [eax+0x108],cx
  4058c8:	8b 0d c0 37 41 00    	mov    ecx,DWORD PTR ds:0x4137c0
  4058ce:	8d 85 3c ef ff ff    	lea    eax,[ebp-0x10c4]
  4058d4:	50                   	push   eax
  4058d5:	a1 04 3b 41 00       	mov    eax,ds:0x413b04
  4058da:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  4058dd:	ff d6                	call   esi
  4058df:	ff 05 04 3b 41 00    	inc    DWORD PTR ds:0x413b04
  4058e5:	e9 b9 e8 ff ff       	jmp    0x4041a3
  4058ea:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  4058ed:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4058f4:	66 89 88 08 01 00 00 	mov    WORD PTR [eax+0x108],cx
  4058fb:	e9 a3 e8 ff ff       	jmp    0x4041a3
  405900:	6a 04                	push   0x4
  405902:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405908:	68 0c 25 41 00       	push   0x41250c
  40590d:	50                   	push   eax
  40590e:	e8 1d 9e 00 00       	call   0x40f730
  405913:	83 c4 0c             	add    esp,0xc
  405916:	85 c0                	test   eax,eax
  405918:	75 51                	jne    0x40596b
  40591a:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405920:	50                   	push   eax
  405921:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  405927:	8b 0d 8c 37 41 00    	mov    ecx,DWORD PTR ds:0x41378c
  40592d:	8b 15 6c 37 41 00    	mov    edx,DWORD PTR ds:0x41376c
  405933:	03 d1                	add    edx,ecx
  405935:	8b 0d a4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a4
  40593b:	2b d0                	sub    edx,eax
  40593d:	4a                   	dec    edx
  40593e:	66 ff 05 94 3b 41 00 	inc    WORD PTR ds:0x413b94
  405945:	0f b7 05 94 3b 41 00 	movzx  eax,WORD PTR ds:0x413b94
  40594c:	89 15 94 37 41 00    	mov    DWORD PTR ds:0x413794,edx
  405952:	89 1c 81             	mov    DWORD PTR [ecx+eax*4],ebx
  405955:	33 c0                	xor    eax,eax
  405957:	80 bd 44 f6 ff ff 20 	cmp    BYTE PTR [ebp-0x9bc],0x20
  40595e:	0f 94 c0             	sete   al
  405961:	a3 10 37 41 00       	mov    ds:0x413710,eax
  405966:	e9 1f e8 ff ff       	jmp    0x40418a
  40596b:	6a 08                	push   0x8
  40596d:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405973:	68 e8 22 41 00       	push   0x4122e8
  405978:	50                   	push   eax
  405979:	e8 b2 9d 00 00       	call   0x40f730
  40597e:	83 c4 0c             	add    esp,0xc
  405981:	85 c0                	test   eax,eax
  405983:	75 65                	jne    0x4059ea
  405985:	8d 85 48 f6 ff ff    	lea    eax,[ebp-0x9b8]
  40598b:	50                   	push   eax
  40598c:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  405992:	40                   	inc    eax
  405993:	50                   	push   eax
  405994:	e8 d8 5c 00 00       	call   0x40b671
  405999:	8b 15 a4 36 41 00    	mov    edx,DWORD PTR ds:0x4136a4
  40599f:	59                   	pop    ecx
  4059a0:	0f b7 0d 94 3b 41 00 	movzx  ecx,WORD PTR ds:0x413b94
  4059a7:	89 04 8a             	mov    DWORD PTR [edx+ecx*4],eax
  4059aa:	8b 0d a4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a4
  4059b0:	8d 85 48 f6 ff ff    	lea    eax,[ebp-0x9b8]
  4059b6:	50                   	push   eax
  4059b7:	0f b7 05 94 3b 41 00 	movzx  eax,WORD PTR ds:0x413b94
  4059be:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  4059c1:	ff d6                	call   esi
  4059c3:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4059c9:	6a 7c                	push   0x7c
  4059cb:	50                   	push   eax
  4059cc:	e8 7b 64 00 00       	call   0x40be4c
  4059d1:	59                   	pop    ecx
  4059d2:	85 c0                	test   eax,eax
  4059d4:	59                   	pop    ecx
  4059d5:	0f 84 af e7 ff ff    	je     0x40418a
  4059db:	c7 05 2c 37 41 00 01 	mov    DWORD PTR ds:0x41372c,0x1
  4059e2:	00 00 00 
  4059e5:	e9 a0 e7 ff ff       	jmp    0x40418a
  4059ea:	6a 0f                	push   0xf
  4059ec:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  4059f2:	68 d8 22 41 00       	push   0x4122d8
  4059f7:	50                   	push   eax
  4059f8:	e8 33 9d 00 00       	call   0x40f730
  4059fd:	83 c4 0c             	add    esp,0xc
  405a00:	85 c0                	test   eax,eax
  405a02:	75 11                	jne    0x405a15
  405a04:	8d 85 4f f6 ff ff    	lea    eax,[ebp-0x9b1]
  405a0a:	50                   	push   eax
  405a0b:	68 e0 37 41 00       	push   0x4137e0
  405a10:	e9 9e 00 00 00       	jmp    0x405ab3
  405a15:	6a 0e                	push   0xe
  405a17:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405a1d:	68 c8 22 41 00       	push   0x4122c8
  405a22:	50                   	push   eax
  405a23:	e8 08 9d 00 00       	call   0x40f730
  405a28:	83 c4 0c             	add    esp,0xc
  405a2b:	85 c0                	test   eax,eax
  405a2d:	75 0e                	jne    0x405a3d
  405a2f:	8d 85 4e f6 ff ff    	lea    eax,[ebp-0x9b2]
  405a35:	50                   	push   eax
  405a36:	68 60 38 41 00       	push   0x413860
  405a3b:	eb 76                	jmp    0x405ab3
  405a3d:	6a 09                	push   0x9
  405a3f:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405a45:	68 bc 22 41 00       	push   0x4122bc
  405a4a:	50                   	push   eax
  405a4b:	e8 e0 9c 00 00       	call   0x40f730
  405a50:	83 c4 0c             	add    esp,0xc
  405a53:	85 c0                	test   eax,eax
  405a55:	75 0e                	jne    0x405a65
  405a57:	8d 85 49 f6 ff ff    	lea    eax,[ebp-0x9b7]
  405a5d:	50                   	push   eax
  405a5e:	68 e0 38 41 00       	push   0x4138e0
  405a63:	eb 4e                	jmp    0x405ab3
  405a65:	6a 10                	push   0x10
  405a67:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405a6d:	68 a8 22 41 00       	push   0x4122a8
  405a72:	50                   	push   eax
  405a73:	e8 b8 9c 00 00       	call   0x40f730
  405a78:	83 c4 0c             	add    esp,0xc
  405a7b:	85 c0                	test   eax,eax
  405a7d:	75 0e                	jne    0x405a8d
  405a7f:	8d 85 50 f6 ff ff    	lea    eax,[ebp-0x9b0]
  405a85:	50                   	push   eax
  405a86:	68 60 39 41 00       	push   0x413960
  405a8b:	eb 26                	jmp    0x405ab3
  405a8d:	6a 0f                	push   0xf
  405a8f:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405a95:	68 98 22 41 00       	push   0x412298
  405a9a:	50                   	push   eax
  405a9b:	e8 90 9c 00 00       	call   0x40f730
  405aa0:	83 c4 0c             	add    esp,0xc
  405aa3:	85 c0                	test   eax,eax
  405aa5:	75 13                	jne    0x405aba
  405aa7:	8d 85 4f f6 ff ff    	lea    eax,[ebp-0x9b1]
  405aad:	50                   	push   eax
  405aae:	68 e0 39 41 00       	push   0x4139e0
  405ab3:	ff d6                	call   esi
  405ab5:	e9 d0 e6 ff ff       	jmp    0x40418a
  405aba:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405ac0:	68 84 22 41 00       	push   0x412284
  405ac5:	50                   	push   eax
  405ac6:	e8 15 9d 00 00       	call   0x40f7e0
  405acb:	59                   	pop    ecx
  405acc:	85 c0                	test   eax,eax
  405ace:	59                   	pop    ecx
  405acf:	75 3f                	jne    0x405b10
  405ad1:	39 5d dc             	cmp    DWORD PTR [ebp-0x24],ebx
  405ad4:	0f 85 b0 e6 ff ff    	jne    0x40418a
  405ada:	83 3d b0 36 41 00 01 	cmp    DWORD PTR ds:0x4136b0,0x1
  405ae1:	0f 85 a3 e6 ff ff    	jne    0x40418a
  405ae7:	6a 01                	push   0x1
  405ae9:	33 db                	xor    ebx,ebx
  405aeb:	5f                   	pop    edi
  405aec:	68 00 00 00 e0       	push   0xe0000000
  405af1:	53                   	push   ebx
  405af2:	53                   	push   ebx
  405af3:	89 7d dc             	mov    DWORD PTR [ebp-0x24],edi
  405af6:	ff 15 14 00 41 00    	call   DWORD PTR ds:0x410014
  405afc:	3b c3                	cmp    eax,ebx
  405afe:	0f 84 96 0e 00 00    	je     0x40699a
  405b04:	50                   	push   eax
  405b05:	ff 15 10 00 41 00    	call   DWORD PTR ds:0x410010
  405b0b:	e9 7a e6 ff ff       	jmp    0x40418a
  405b10:	6a 0d                	push   0xd
  405b12:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405b18:	68 74 22 41 00       	push   0x412274
  405b1d:	50                   	push   eax
  405b1e:	e8 0d 9c 00 00       	call   0x40f730
  405b23:	83 c4 0c             	add    esp,0xc
  405b26:	85 c0                	test   eax,eax
  405b28:	0f 85 7d 01 00 00    	jne    0x405cab
  405b2e:	bf 00 01 00 00       	mov    edi,0x100
  405b33:	57                   	push   edi
  405b34:	e8 38 5b 00 00       	call   0x40b671
  405b39:	59                   	pop    ecx
  405b3a:	a3 84 37 41 00       	mov    ds:0x413784,eax
  405b3f:	8d 8d 4d f6 ff ff    	lea    ecx,[ebp-0x9b3]
  405b45:	51                   	push   ecx
  405b46:	50                   	push   eax
  405b47:	ff d6                	call   esi
  405b49:	39 1d ec 36 41 00    	cmp    DWORD PTR ds:0x4136ec,ebx
  405b4f:	0f 84 35 e6 ff ff    	je     0x40418a
  405b55:	8d 45 ec             	lea    eax,[ebp-0x14]
  405b58:	50                   	push   eax
  405b59:	6a 13                	push   0x13
  405b5b:	6a 00                	push   0x0
  405b5d:	68 30 22 41 00       	push   0x412230
  405b62:	68 01 00 00 80       	push   0x80000001
  405b67:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  405b6d:	85 c0                	test   eax,eax
  405b6f:	0f 85 93 00 00 00    	jne    0x405c08
  405b75:	8d 45 f0             	lea    eax,[ebp-0x10]
  405b78:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
  405b7b:	50                   	push   eax
  405b7c:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  405b82:	50                   	push   eax
  405b83:	8d 45 c8             	lea    eax,[ebp-0x38]
  405b86:	50                   	push   eax
  405b87:	6a 00                	push   0x0
  405b89:	68 24 22 41 00       	push   0x412224
  405b8e:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  405b91:	ff 15 08 00 41 00    	call   DWORD PTR ds:0x410008
  405b97:	85 c0                	test   eax,eax
  405b99:	75 64                	jne    0x405bff
  405b9b:	38 85 40 f4 ff ff    	cmp    BYTE PTR [ebp-0xbc0],al
  405ba1:	74 5c                	je     0x405bff
  405ba3:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  405ba9:	50                   	push   eax
  405baa:	8d 85 3c f2 ff ff    	lea    eax,[ebp-0xdc4]
  405bb0:	50                   	push   eax
  405bb1:	ff d6                	call   esi
  405bb3:	8d 85 3c f2 ff ff    	lea    eax,[ebp-0xdc4]
  405bb9:	50                   	push   eax
  405bba:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  405bc0:	8d 84 05 3c f2 ff ff 	lea    eax,[ebp+eax*1-0xdc4]
  405bc7:	8d 8d 3c f2 ff ff    	lea    ecx,[ebp-0xdc4]
  405bcd:	3b c1                	cmp    eax,ecx
  405bcf:	76 2a                	jbe    0x405bfb
  405bd1:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  405bd4:	74 0b                	je     0x405be1
  405bd6:	48                   	dec    eax
  405bd7:	8d 8d 3c f2 ff ff    	lea    ecx,[ebp-0xdc4]
  405bdd:	3b c1                	cmp    eax,ecx
  405bdf:	77 f0                	ja     0x405bd1
  405be1:	8d 8d 3c f2 ff ff    	lea    ecx,[ebp-0xdc4]
  405be7:	3b c1                	cmp    eax,ecx
  405be9:	76 10                	jbe    0x405bfb
  405beb:	48                   	dec    eax
  405bec:	8d 8d 3c f2 ff ff    	lea    ecx,[ebp-0xdc4]
  405bf2:	3b c1                	cmp    eax,ecx
  405bf4:	76 05                	jbe    0x405bfb
  405bf6:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  405bf9:	75 f0                	jne    0x405beb
  405bfb:	80 60 01 00          	and    BYTE PTR [eax+0x1],0x0
  405bff:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  405c02:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  405c08:	83 3d b0 36 41 00 01 	cmp    DWORD PTR ds:0x4136b0,0x1
  405c0f:	0f 85 75 e5 ff ff    	jne    0x40418a
  405c15:	8d 45 ec             	lea    eax,[ebp-0x14]
  405c18:	50                   	push   eax
  405c19:	6a 13                	push   0x13
  405c1b:	6a 00                	push   0x0
  405c1d:	68 30 22 41 00       	push   0x412230
  405c22:	68 02 00 00 80       	push   0x80000002
  405c27:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  405c2d:	85 c0                	test   eax,eax
  405c2f:	0f 85 55 e5 ff ff    	jne    0x40418a
  405c35:	8d 45 f0             	lea    eax,[ebp-0x10]
  405c38:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
  405c3b:	50                   	push   eax
  405c3c:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  405c42:	50                   	push   eax
  405c43:	8d 45 c4             	lea    eax,[ebp-0x3c]
  405c46:	50                   	push   eax
  405c47:	6a 00                	push   0x0
  405c49:	68 10 22 41 00       	push   0x412210
  405c4e:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  405c51:	ff 15 08 00 41 00    	call   DWORD PTR ds:0x410008
  405c57:	85 c0                	test   eax,eax
  405c59:	75 42                	jne    0x405c9d
  405c5b:	38 85 40 f4 ff ff    	cmp    BYTE PTR [ebp-0xbc0],al
  405c61:	74 3a                	je     0x405c9d
  405c63:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  405c69:	50                   	push   eax
  405c6a:	8d 85 38 ed ff ff    	lea    eax,[ebp-0x12c8]
  405c70:	50                   	push   eax
  405c71:	ff d6                	call   esi
  405c73:	8d 85 38 ed ff ff    	lea    eax,[ebp-0x12c8]
  405c79:	50                   	push   eax
  405c7a:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  405c80:	8d 84 05 38 ed ff ff 	lea    eax,[ebp+eax*1-0x12c8]
  405c87:	8d 8d 38 ed ff ff    	lea    ecx,[ebp-0x12c8]
  405c8d:	3b c1                	cmp    eax,ecx
  405c8f:	76 08                	jbe    0x405c99
  405c91:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  405c94:	74 03                	je     0x405c99
  405c96:	48                   	dec    eax
  405c97:	eb ee                	jmp    0x405c87
  405c99:	80 60 01 00          	and    BYTE PTR [eax+0x1],0x0
  405c9d:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  405ca0:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  405ca6:	e9 df e4 ff ff       	jmp    0x40418a
  405cab:	6a 15                	push   0x15
  405cad:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405cb3:	68 f8 21 41 00       	push   0x4121f8
  405cb8:	50                   	push   eax
  405cb9:	e8 72 9a 00 00       	call   0x40f730
  405cbe:	83 c4 0c             	add    esp,0xc
  405cc1:	85 c0                	test   eax,eax
  405cc3:	0f 85 c1 e4 ff ff    	jne    0x40418a
  405cc9:	6a 02                	push   0x2
  405ccb:	8d 85 55 f6 ff ff    	lea    eax,[ebp-0x9ab]
  405cd1:	68 f4 21 41 00       	push   0x4121f4
  405cd6:	50                   	push   eax
  405cd7:	e8 54 9a 00 00       	call   0x40f730
  405cdc:	83 c4 0c             	add    esp,0xc
  405cdf:	85 c0                	test   eax,eax
  405ce1:	75 0f                	jne    0x405cf2
  405ce3:	c7 05 98 37 41 00 01 	mov    DWORD PTR ds:0x413798,0x1
  405cea:	00 00 00 
  405ced:	e9 98 e4 ff ff       	jmp    0x40418a
  405cf2:	6a 02                	push   0x2
  405cf4:	8d 85 55 f6 ff ff    	lea    eax,[ebp-0x9ab]
  405cfa:	68 f0 21 41 00       	push   0x4121f0
  405cff:	50                   	push   eax
  405d00:	e8 2b 9a 00 00       	call   0x40f730
  405d05:	83 c4 0c             	add    esp,0xc
  405d08:	85 c0                	test   eax,eax
  405d0a:	0f 85 7a e4 ff ff    	jne    0x40418a
  405d10:	21 05 98 37 41 00    	and    DWORD PTR ds:0x413798,eax
  405d16:	e9 6f e4 ff ff       	jmp    0x40418a
  405d1b:	33 c0                	xor    eax,eax
  405d1d:	80 bd 49 f6 ff ff 72 	cmp    BYTE PTR [ebp-0x9b7],0x72
  405d24:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
  405d27:	0f 95 c0             	setne  al
  405d2a:	48                   	dec    eax
  405d2b:	83 e0 03             	and    eax,0x3
  405d2e:	83 c0 0e             	add    eax,0xe
  405d31:	39 1d a0 3a 41 00    	cmp    DWORD PTR ds:0x413aa0,ebx
  405d37:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  405d3a:	7e 38                	jle    0x405d74
  405d3c:	a1 48 37 41 00       	mov    eax,ds:0x413748
  405d41:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  405d44:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
  405d47:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  405d4a:	8d 84 05 40 f6 ff ff 	lea    eax,[ebp+eax*1-0x9c0]
  405d51:	50                   	push   eax
  405d52:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  405d58:	85 c0                	test   eax,eax
  405d5a:	a1 a0 3a 41 00       	mov    eax,ds:0x413aa0
  405d5f:	74 08                	je     0x405d69
  405d61:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
  405d64:	39 45 f8             	cmp    DWORD PTR [ebp-0x8],eax
  405d67:	7c d3                	jl     0x405d3c
  405d69:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  405d6c:	3b c8                	cmp    ecx,eax
  405d6e:	0f 8c d2 00 00 00    	jl     0x405e46
  405d74:	68 0c 02 00 00       	push   0x20c
  405d79:	e8 f3 58 00 00       	call   0x40b671
  405d7e:	8b 15 a0 3a 41 00    	mov    edx,DWORD PTR ds:0x413aa0
  405d84:	59                   	pop    ecx
  405d85:	8b 0d 48 37 41 00    	mov    ecx,DWORD PTR ds:0x413748
  405d8b:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  405d8e:	a1 48 37 41 00       	mov    eax,ds:0x413748
  405d93:	8b 0d a0 3a 41 00    	mov    ecx,DWORD PTR ds:0x413aa0
  405d99:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405d9c:	89 98 04 02 00 00    	mov    DWORD PTR [eax+0x204],ebx
  405da2:	a1 48 37 41 00       	mov    eax,ds:0x413748
  405da7:	8b 0d a0 3a 41 00    	mov    ecx,DWORD PTR ds:0x413aa0
  405dad:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405db0:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  405db7:	66 89 88 08 02 00 00 	mov    WORD PTR [eax+0x208],cx
  405dbe:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  405dc1:	8b 0d a0 3a 41 00    	mov    ecx,DWORD PTR ds:0x413aa0
  405dc7:	8d 84 05 40 f6 ff ff 	lea    eax,[ebp+eax*1-0x9c0]
  405dce:	50                   	push   eax
  405dcf:	a1 48 37 41 00       	mov    eax,ds:0x413748
  405dd4:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
  405dd7:	ff d6                	call   esi
  405dd9:	a1 a0 3a 41 00       	mov    eax,ds:0x413aa0
  405dde:	8b 0d 48 37 41 00    	mov    ecx,DWORD PTR ds:0x413748
  405de4:	53                   	push   ebx
  405de5:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  405de8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  405deb:	80 a0 04 01 00 00 00 	and    BYTE PTR [eax+0x104],0x0
  405df2:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405df8:	57                   	push   edi
  405df9:	50                   	push   eax
  405dfa:	e8 08 0d 00 00       	call   0x406b07
  405dff:	6a 0e                	push   0xe
  405e01:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405e07:	68 e0 21 41 00       	push   0x4121e0
  405e0c:	50                   	push   eax
  405e0d:	e8 1e 99 00 00       	call   0x40f730
  405e12:	83 c4 1c             	add    esp,0x1c
  405e15:	85 c0                	test   eax,eax
  405e17:	75 1f                	jne    0x405e38
  405e19:	8b 0d 48 37 41 00    	mov    ecx,DWORD PTR ds:0x413748
  405e1f:	8d 85 4e f6 ff ff    	lea    eax,[ebp-0x9b2]
  405e25:	50                   	push   eax
  405e26:	a1 a0 3a 41 00       	mov    eax,ds:0x413aa0
  405e2b:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  405e2e:	05 04 01 00 00       	add    eax,0x104
  405e33:	50                   	push   eax
  405e34:	ff d6                	call   esi
  405e36:	eb 03                	jmp    0x405e3b
  405e38:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  405e3b:	ff 05 a0 3a 41 00    	inc    DWORD PTR ds:0x413aa0
  405e41:	e9 45 0b 00 00       	jmp    0x40698b
  405e46:	a1 48 37 41 00       	mov    eax,ds:0x413748
  405e4b:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  405e4e:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  405e55:	66 89 88 08 02 00 00 	mov    WORD PTR [eax+0x208],cx
  405e5c:	e9 2a 0b 00 00       	jmp    0x40698b
  405e61:	83 65 f8 00          	and    DWORD PTR [ebp-0x8],0x0
  405e65:	80 a5 38 e9 ff ff 00 	and    BYTE PTR [ebp-0x16c8],0x0
  405e6c:	80 a5 40 ff ff ff 00 	and    BYTE PTR [ebp-0xc0],0x0
  405e73:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405e79:	6a 7c                	push   0x7c
  405e7b:	50                   	push   eax
  405e7c:	e8 cb 5f 00 00       	call   0x40be4c
  405e81:	8b d8                	mov    ebx,eax
  405e83:	59                   	pop    ecx
  405e84:	85 db                	test   ebx,ebx
  405e86:	59                   	pop    ecx
  405e87:	74 1c                	je     0x405ea5
  405e89:	8d 43 01             	lea    eax,[ebx+0x1]
  405e8c:	50                   	push   eax
  405e8d:	8d 85 40 ff ff ff    	lea    eax,[ebp-0xc0]
  405e93:	50                   	push   eax
  405e94:	ff d6                	call   esi
  405e96:	80 7b ff 20          	cmp    BYTE PTR [ebx-0x1],0x20
  405e9a:	75 06                	jne    0x405ea2
  405e9c:	80 63 ff 00          	and    BYTE PTR [ebx-0x1],0x0
  405ea0:	eb 03                	jmp    0x405ea5
  405ea2:	80 23 00             	and    BYTE PTR [ebx],0x0
  405ea5:	80 bd 40 f6 ff ff 53 	cmp    BYTE PTR [ebp-0x9c0],0x53
  405eac:	75 7f                	jne    0x405f2d
  405eae:	8d 85 4c f6 ff ff    	lea    eax,[ebp-0x9b4]
  405eb4:	50                   	push   eax
  405eb5:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  405ebb:	50                   	push   eax
  405ebc:	ff d6                	call   esi
  405ebe:	83 3d 84 37 41 00 00 	cmp    DWORD PTR ds:0x413784,0x0
  405ec5:	0f 84 f2 00 00 00    	je     0x405fbd
  405ecb:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  405ed1:	8d 85 3c f2 ff ff    	lea    eax,[ebp-0xdc4]
  405ed7:	50                   	push   eax
  405ed8:	ff d3                	call   ebx
  405eda:	50                   	push   eax
  405edb:	8d 85 3c f2 ff ff    	lea    eax,[ebp-0xdc4]
  405ee1:	50                   	push   eax
  405ee2:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  405ee8:	50                   	push   eax
  405ee9:	e8 42 98 00 00       	call   0x40f730
  405eee:	83 c4 0c             	add    esp,0xc
  405ef1:	85 c0                	test   eax,eax
  405ef3:	0f 85 c4 00 00 00    	jne    0x405fbd
  405ef9:	8d 85 38 ed ff ff    	lea    eax,[ebp-0x12c8]
  405eff:	50                   	push   eax
  405f00:	ff d3                	call   ebx
  405f02:	50                   	push   eax
  405f03:	8d 85 38 ed ff ff    	lea    eax,[ebp-0x12c8]
  405f09:	50                   	push   eax
  405f0a:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  405f10:	50                   	push   eax
  405f11:	e8 1a 98 00 00       	call   0x40f730
  405f16:	83 c4 0c             	add    esp,0xc
  405f19:	85 c0                	test   eax,eax
  405f1b:	0f 84 9c 00 00 00    	je     0x405fbd
  405f21:	80 a5 40 fe ff ff 00 	and    BYTE PTR [ebp-0x1c0],0x0
  405f28:	e9 90 00 00 00       	jmp    0x405fbd
  405f2d:	80 bd 45 f6 ff ff 43 	cmp    BYTE PTR [ebp-0x9bb],0x43
  405f34:	75 12                	jne    0x405f48
  405f36:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  405f3c:	50                   	push   eax
  405f3d:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  405f43:	50                   	push   eax
  405f44:	ff d6                	call   esi
  405f46:	eb 75                	jmp    0x405fbd
  405f48:	8d 85 50 f6 ff ff    	lea    eax,[ebp-0x9b0]
  405f4e:	50                   	push   eax
  405f4f:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  405f55:	50                   	push   eax
  405f56:	ff d6                	call   esi
  405f58:	83 3d ec 36 41 00 00 	cmp    DWORD PTR ds:0x4136ec,0x0
  405f5f:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
  405f66:	74 55                	je     0x405fbd
  405f68:	8d 45 e0             	lea    eax,[ebp-0x20]
  405f6b:	50                   	push   eax
  405f6c:	6a 1f                	push   0x1f
  405f6e:	6a 00                	push   0x0
  405f70:	ff 35 58 20 41 00    	push   DWORD PTR ds:0x412058
  405f76:	68 02 00 00 80       	push   0x80000002
  405f7b:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  405f81:	85 c0                	test   eax,eax
  405f83:	75 38                	jne    0x405fbd
  405f85:	8d 45 d8             	lea    eax,[ebp-0x28]
  405f88:	c7 45 d8 00 01 00 00 	mov    DWORD PTR [ebp-0x28],0x100
  405f8f:	50                   	push   eax
  405f90:	8d 85 30 e4 ff ff    	lea    eax,[ebp-0x1bd0]
  405f96:	50                   	push   eax
  405f97:	8d 45 c0             	lea    eax,[ebp-0x40]
  405f9a:	50                   	push   eax
  405f9b:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  405fa1:	6a 00                	push   0x0
  405fa3:	50                   	push   eax
  405fa4:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  405fa7:	ff 15 08 00 41 00    	call   DWORD PTR ds:0x410008
  405fad:	85 c0                	test   eax,eax
  405faf:	75 03                	jne    0x405fb4
  405fb1:	21 45 f8             	and    DWORD PTR [ebp-0x8],eax
  405fb4:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  405fb7:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  405fbd:	33 db                	xor    ebx,ebx
  405fbf:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405fc5:	53                   	push   ebx
  405fc6:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  405fc9:	57                   	push   edi
  405fca:	50                   	push   eax
  405fcb:	e8 37 0b 00 00       	call   0x406b07
  405fd0:	20 9d 40 f3 ff ff    	and    BYTE PTR [ebp-0xcc0],bl
  405fd6:	6a 0b                	push   0xb
  405fd8:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  405fde:	68 d4 21 41 00       	push   0x4121d4
  405fe3:	50                   	push   eax
  405fe4:	e8 47 97 00 00       	call   0x40f730
  405fe9:	83 c4 1c             	add    esp,0x1c
  405fec:	85 c0                	test   eax,eax
  405fee:	75 24                	jne    0x406014
  405ff0:	8d 85 4b f6 ff ff    	lea    eax,[ebp-0x9b5]
  405ff6:	50                   	push   eax
  405ff7:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  405ffd:	50                   	push   eax
  405ffe:	ff d6                	call   esi
  406000:	53                   	push   ebx
  406001:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  406007:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40600a:	57                   	push   edi
  40600b:	50                   	push   eax
  40600c:	e8 f6 0a 00 00       	call   0x406b07
  406011:	83 c4 10             	add    esp,0x10
  406014:	6a 0d                	push   0xd
  406016:	8d 85 40 f6 ff ff    	lea    eax,[ebp-0x9c0]
  40601c:	68 0c 24 41 00       	push   0x41240c
  406021:	50                   	push   eax
  406022:	e8 09 97 00 00       	call   0x40f730
  406027:	83 c4 0c             	add    esp,0xc
  40602a:	85 c0                	test   eax,eax
  40602c:	75 1c                	jne    0x40604a
  40602e:	8d 85 4d f6 ff ff    	lea    eax,[ebp-0x9b3]
  406034:	50                   	push   eax
  406035:	8d 85 40 f3 ff ff    	lea    eax,[ebp-0xcc0]
  40603b:	50                   	push   eax
  40603c:	ff d6                	call   esi
  40603e:	c7 05 98 3a 41 00 01 	mov    DWORD PTR ds:0x413a98,0x1
  406045:	00 00 00 
  406048:	eb 03                	jmp    0x40604d
  40604a:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  40604d:	6a 02                	push   0x2
  40604f:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  406055:	5f                   	pop    edi
  406056:	57                   	push   edi
  406057:	68 08 24 41 00       	push   0x412408
  40605c:	50                   	push   eax
  40605d:	e8 ce 96 00 00       	call   0x40f730
  406062:	83 c4 0c             	add    esp,0xc
  406065:	85 c0                	test   eax,eax
  406067:	75 09                	jne    0x406072
  406069:	39 7d e4             	cmp    DWORD PTR [ebp-0x1c],edi
  40606c:	0f 84 73 07 00 00    	je     0x4067e5
  406072:	57                   	push   edi
  406073:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  406079:	68 04 24 41 00       	push   0x412404
  40607e:	50                   	push   eax
  40607f:	e8 ac 96 00 00       	call   0x40f730
  406084:	83 c4 0c             	add    esp,0xc
  406087:	85 c0                	test   eax,eax
  406089:	75 09                	jne    0x406094
  40608b:	39 7d e8             	cmp    DWORD PTR [ebp-0x18],edi
  40608e:	0f 84 51 07 00 00    	je     0x4067e5
  406094:	39 5d f8             	cmp    DWORD PTR [ebp-0x8],ebx
  406097:	74 0d                	je     0x4060a6
  406099:	80 bd 40 f3 ff ff 00 	cmp    BYTE PTR [ebp-0xcc0],0x0
  4060a0:	0f 84 3f 07 00 00    	je     0x4067e5
  4060a6:	80 bd 40 fe ff ff 00 	cmp    BYTE PTR [ebp-0x1c0],0x0
  4060ad:	0f 84 32 07 00 00    	je     0x4067e5
  4060b3:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  4060b9:	53                   	push   ebx
  4060ba:	50                   	push   eax
  4060bb:	e8 73 48 00 00       	call   0x40a933
  4060c0:	59                   	pop    ecx
  4060c1:	85 c0                	test   eax,eax
  4060c3:	59                   	pop    ecx
  4060c4:	0f 85 56 06 00 00    	jne    0x406720
  4060ca:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  4060d0:	50                   	push   eax
  4060d1:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4060d7:	50                   	push   eax
  4060d8:	ff d6                	call   esi
  4060da:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  4060e0:	50                   	push   eax
  4060e1:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4060e7:	8d 84 05 3f f4 ff ff 	lea    eax,[ebp+eax*1-0xbc1]
  4060ee:	8d 8d 40 f4 ff ff    	lea    ecx,[ebp-0xbc0]
  4060f4:	3b c1                	cmp    eax,ecx
  4060f6:	76 0b                	jbe    0x406103
  4060f8:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  4060fb:	74 0b                	je     0x406108
  4060fd:	80 20 00             	and    BYTE PTR [eax],0x0
  406100:	48                   	dec    eax
  406101:	eb eb                	jmp    0x4060ee
  406103:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  406106:	75 03                	jne    0x40610b
  406108:	80 20 00             	and    BYTE PTR [eax],0x0
  40610b:	8b 1d 64 01 41 00    	mov    ebx,DWORD PTR ds:0x410164
  406111:	8d 85 28 e3 ff ff    	lea    eax,[ebp-0x1cd8]
  406117:	50                   	push   eax
  406118:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40611e:	50                   	push   eax
  40611f:	ff d3                	call   ebx
  406121:	85 c0                	test   eax,eax
  406123:	0f 84 fe 02 00 00    	je     0x406427
  406129:	8d 85 34 e8 ff ff    	lea    eax,[ebp-0x17cc]
  40612f:	50                   	push   eax
  406130:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  406136:	50                   	push   eax
  406137:	ff d3                	call   ebx
  406139:	85 c0                	test   eax,eax
  40613b:	0f 84 e6 02 00 00    	je     0x406427
  406141:	ff 35 38 37 41 00    	push   DWORD PTR ds:0x413738
  406147:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40614d:	50                   	push   eax
  40614e:	ff d3                	call   ebx
  406150:	85 c0                	test   eax,eax
  406152:	0f 84 cf 02 00 00    	je     0x406427
  406158:	8d 85 30 e5 ff ff    	lea    eax,[ebp-0x1ad0]
  40615e:	50                   	push   eax
  40615f:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  406165:	50                   	push   eax
  406166:	ff d3                	call   ebx
  406168:	85 c0                	test   eax,eax
  40616a:	0f 84 b7 02 00 00    	je     0x406427
  406170:	8b 0d b4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab4
  406176:	33 db                	xor    ebx,ebx
  406178:	53                   	push   ebx
  406179:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  40617f:	53                   	push   ebx
  406180:	50                   	push   eax
  406181:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  406186:	51                   	push   ecx
  406187:	68 7c 02 00 00       	push   0x27c
  40618c:	ff 30                	push   DWORD PTR [eax]
  40618e:	8d 04 88             	lea    eax,[eax+ecx*4]
  406191:	50                   	push   eax
  406192:	e8 fc 55 00 00       	call   0x40b793
  406197:	8b f8                	mov    edi,eax
  406199:	83 c4 1c             	add    esp,0x1c
  40619c:	3b fb                	cmp    edi,ebx
  40619e:	0f 85 2f 02 00 00    	jne    0x4063d3
  4061a4:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  4061a9:	8b 0d b4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab4
  4061af:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4061b2:	66 89 98 74 02 00 00 	mov    WORD PTR [eax+0x274],bx
  4061b9:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  4061be:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  4061c4:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4061c7:	89 98 64 02 00 00    	mov    DWORD PTR [eax+0x264],ebx
  4061cd:	39 1d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,ebx
  4061d3:	74 1d                	je     0x4061f2
  4061d5:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  4061db:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  4061e1:	50                   	push   eax
  4061e2:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  4061e7:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4061ea:	83 c0 08             	add    eax,0x8
  4061ed:	50                   	push   eax
  4061ee:	ff d6                	call   esi
  4061f0:	eb 1f                	jmp    0x406211
  4061f2:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  4061f7:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  4061fd:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406200:	83 c0 08             	add    eax,0x8
  406203:	50                   	push   eax
  406204:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  40620a:	50                   	push   eax
  40620b:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  406211:	39 1d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,ebx
  406217:	74 1f                	je     0x406238
  406219:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  40621f:	8d 85 40 f3 ff ff    	lea    eax,[ebp-0xcc0]
  406225:	50                   	push   eax
  406226:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  40622b:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  40622e:	05 0c 01 00 00       	add    eax,0x10c
  406233:	50                   	push   eax
  406234:	ff d6                	call   esi
  406236:	eb 21                	jmp    0x406259
  406238:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  40623d:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  406243:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406246:	05 0c 01 00 00       	add    eax,0x10c
  40624b:	50                   	push   eax
  40624c:	8d 85 40 f3 ff ff    	lea    eax,[ebp-0xcc0]
  406252:	50                   	push   eax
  406253:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  406259:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  40625e:	8b 0d b4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab4
  406264:	39 5d fc             	cmp    DWORD PTR [ebp-0x4],ebx
  406267:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40626a:	66 89 98 6e 02 00 00 	mov    WORD PTR [eax+0x26e],bx
  406271:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  406276:	8b 0d b4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab4
  40627c:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40627f:	66 89 98 6c 02 00 00 	mov    WORD PTR [eax+0x26c],bx
  406286:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  40628b:	8b 0d b4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab4
  406291:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406294:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  40629b:	66 89 88 70 02 00 00 	mov    WORD PTR [eax+0x270],cx
  4062a2:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  4062a7:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  4062ad:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4062b0:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4062b7:	66 89 88 72 02 00 00 	mov    WORD PTR [eax+0x272],cx
  4062be:	75 36                	jne    0x4062f6
  4062c0:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  4062c5:	8b 0d b4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab4
  4062cb:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  4062ce:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4062d5:	66 89 88 76 02 00 00 	mov    WORD PTR [eax+0x276],cx
  4062dc:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  4062e1:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  4062e7:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4062ea:	c7 80 78 02 00 00 01 	mov    DWORD PTR [eax+0x278],0x1
  4062f1:	00 00 00 
  4062f4:	eb 15                	jmp    0x40630b
  4062f6:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  4062fb:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  406301:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406304:	66 89 98 76 02 00 00 	mov    WORD PTR [eax+0x276],bx
  40630b:	39 5d f8             	cmp    DWORD PTR [ebp-0x8],ebx
  40630e:	75 23                	jne    0x406333
  406310:	80 bd 40 f3 ff ff 00 	cmp    BYTE PTR [ebp-0xcc0],0x0
  406317:	75 1a                	jne    0x406333
  406319:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  40631e:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  406324:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406327:	c7 80 68 02 00 00 01 	mov    DWORD PTR [eax+0x268],0x1
  40632e:	00 00 00 
  406331:	eb 14                	jmp    0x406347
  406333:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  406338:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  40633e:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406341:	89 98 68 02 00 00    	mov    DWORD PTR [eax+0x268],ebx
  406347:	8b 0d b4 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ab4
  40634d:	8d 85 40 ff ff ff    	lea    eax,[ebp-0xc0]
  406353:	50                   	push   eax
  406354:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  406359:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40635c:	05 10 02 00 00       	add    eax,0x210
  406361:	50                   	push   eax
  406362:	ff d6                	call   esi
  406364:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  406369:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  40636f:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406372:	89 98 60 02 00 00    	mov    DWORD PTR [eax+0x260],ebx
  406378:	80 bd 38 e9 ff ff 00 	cmp    BYTE PTR [ebp-0x16c8],0x0
  40637f:	74 47                	je     0x4063c8
  406381:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  406387:	50                   	push   eax
  406388:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40638e:	40                   	inc    eax
  40638f:	50                   	push   eax
  406390:	e8 dc 52 00 00       	call   0x40b671
  406395:	8b 15 b4 3a 41 00    	mov    edx,DWORD PTR ds:0x413ab4
  40639b:	59                   	pop    ecx
  40639c:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  4063a2:	8b 0c 91             	mov    ecx,DWORD PTR [ecx+edx*4]
  4063a5:	89 81 60 02 00 00    	mov    DWORD PTR [ecx+0x260],eax
  4063ab:	8b 0d e8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136e8
  4063b1:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  4063b7:	50                   	push   eax
  4063b8:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  4063bd:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4063c0:	ff b0 60 02 00 00    	push   DWORD PTR [eax+0x260]
  4063c6:	ff d6                	call   esi
  4063c8:	ff 05 b4 3a 41 00    	inc    DWORD PTR ds:0x413ab4
  4063ce:	e9 b8 05 00 00       	jmp    0x40698b
  4063d3:	66 a1 94 3b 41 00    	mov    ax,ds:0x413b94
  4063d9:	39 5d fc             	cmp    DWORD PTR [ebp-0x4],ebx
  4063dc:	66 89 87 70 02 00 00 	mov    WORD PTR [edi+0x270],ax
  4063e3:	75 13                	jne    0x4063f8
  4063e5:	66 a1 94 3b 41 00    	mov    ax,ds:0x413b94
  4063eb:	ff 87 78 02 00 00    	inc    DWORD PTR [edi+0x278]
  4063f1:	66 89 87 76 02 00 00 	mov    WORD PTR [edi+0x276],ax
  4063f8:	80 bd 40 f3 ff ff 00 	cmp    BYTE PTR [ebp-0xcc0],0x0
  4063ff:	0f 84 98 04 00 00    	je     0x40689d
  406405:	8d 85 40 f3 ff ff    	lea    eax,[ebp-0xcc0]
  40640b:	50                   	push   eax
  40640c:	8d 87 0c 01 00 00    	lea    eax,[edi+0x10c]
  406412:	50                   	push   eax
  406413:	ff d6                	call   esi
  406415:	66 a1 94 3b 41 00    	mov    ax,ds:0x413b94
  40641b:	66 89 87 72 02 00 00 	mov    WORD PTR [edi+0x272],ax
  406422:	e9 76 04 00 00       	jmp    0x40689d
  406427:	33 ff                	xor    edi,edi
  406429:	39 3d 68 37 41 00    	cmp    DWORD PTR ds:0x413768,edi
  40642f:	7e 27                	jle    0x406458
  406431:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406436:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  406439:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  40643f:	50                   	push   eax
  406440:	ff d3                	call   ebx
  406442:	85 c0                	test   eax,eax
  406444:	a1 68 37 41 00       	mov    eax,ds:0x413768
  406449:	74 05                	je     0x406450
  40644b:	47                   	inc    edi
  40644c:	3b f8                	cmp    edi,eax
  40644e:	7c e1                	jl     0x406431
  406450:	3b f8                	cmp    edi,eax
  406452:	0f 8c 46 02 00 00    	jl     0x40669e
  406458:	68 74 02 00 00       	push   0x274
  40645d:	e8 0f 52 00 00       	call   0x40b671
  406462:	8b 15 68 37 41 00    	mov    edx,DWORD PTR ds:0x413768
  406468:	59                   	pop    ecx
  406469:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  40646f:	33 ff                	xor    edi,edi
  406471:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  406474:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406479:	8b 0d 68 37 41 00    	mov    ecx,DWORD PTR ds:0x413768
  40647f:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406482:	66 89 b8 6c 02 00 00 	mov    WORD PTR [eax+0x26c],di
  406489:	a1 68 37 41 00       	mov    eax,ds:0x413768
  40648e:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  406494:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406497:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  40649a:	89 88 5c 02 00 00    	mov    DWORD PTR [eax+0x25c],ecx
  4064a0:	39 3d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,edi
  4064a6:	74 19                	je     0x4064c1
  4064a8:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  4064ae:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  4064b4:	50                   	push   eax
  4064b5:	a1 68 37 41 00       	mov    eax,ds:0x413768
  4064ba:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  4064bd:	ff d6                	call   esi
  4064bf:	eb 1b                	jmp    0x4064dc
  4064c1:	a1 68 37 41 00       	mov    eax,ds:0x413768
  4064c6:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  4064cc:	ff 34 81             	push   DWORD PTR [ecx+eax*4]
  4064cf:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  4064d5:	50                   	push   eax
  4064d6:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  4064dc:	39 3d 10 37 41 00    	cmp    DWORD PTR ds:0x413710,edi
  4064e2:	74 1f                	je     0x406503
  4064e4:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  4064ea:	8d 85 40 f3 ff ff    	lea    eax,[ebp-0xcc0]
  4064f0:	50                   	push   eax
  4064f1:	a1 68 37 41 00       	mov    eax,ds:0x413768
  4064f6:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4064f9:	05 04 01 00 00       	add    eax,0x104
  4064fe:	50                   	push   eax
  4064ff:	ff d6                	call   esi
  406501:	eb 21                	jmp    0x406524
  406503:	a1 68 37 41 00       	mov    eax,ds:0x413768
  406508:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  40650e:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  406511:	05 04 01 00 00       	add    eax,0x104
  406516:	50                   	push   eax
  406517:	8d 85 40 f3 ff ff    	lea    eax,[ebp-0xcc0]
  40651d:	50                   	push   eax
  40651e:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  406524:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406529:	8b 0d 68 37 41 00    	mov    ecx,DWORD PTR ds:0x413768
  40652f:	39 7d fc             	cmp    DWORD PTR [ebp-0x4],edi
  406532:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406535:	66 89 b8 66 02 00 00 	mov    WORD PTR [eax+0x266],di
  40653c:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406541:	8b 0d 68 37 41 00    	mov    ecx,DWORD PTR ds:0x413768
  406547:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40654a:	66 89 b8 64 02 00 00 	mov    WORD PTR [eax+0x264],di
  406551:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406556:	8b 0d 68 37 41 00    	mov    ecx,DWORD PTR ds:0x413768
  40655c:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  40655f:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  406566:	66 89 88 68 02 00 00 	mov    WORD PTR [eax+0x268],cx
  40656d:	a1 68 37 41 00       	mov    eax,ds:0x413768
  406572:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  406578:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  40657b:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  406582:	66 89 88 6a 02 00 00 	mov    WORD PTR [eax+0x26a],cx
  406589:	75 36                	jne    0x4065c1
  40658b:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406590:	8b 0d 68 37 41 00    	mov    ecx,DWORD PTR ds:0x413768
  406596:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406599:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4065a0:	66 89 88 6e 02 00 00 	mov    WORD PTR [eax+0x26e],cx
  4065a7:	a1 68 37 41 00       	mov    eax,ds:0x413768
  4065ac:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  4065b2:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4065b5:	c7 80 70 02 00 00 01 	mov    DWORD PTR [eax+0x270],0x1
  4065bc:	00 00 00 
  4065bf:	eb 15                	jmp    0x4065d6
  4065c1:	a1 68 37 41 00       	mov    eax,ds:0x413768
  4065c6:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  4065cc:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4065cf:	66 89 b8 6e 02 00 00 	mov    WORD PTR [eax+0x26e],di
  4065d6:	39 7d f8             	cmp    DWORD PTR [ebp-0x8],edi
  4065d9:	75 23                	jne    0x4065fe
  4065db:	80 bd 40 f3 ff ff 00 	cmp    BYTE PTR [ebp-0xcc0],0x0
  4065e2:	75 1a                	jne    0x4065fe
  4065e4:	a1 68 37 41 00       	mov    eax,ds:0x413768
  4065e9:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  4065ef:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  4065f2:	c7 80 60 02 00 00 01 	mov    DWORD PTR [eax+0x260],0x1
  4065f9:	00 00 00 
  4065fc:	eb 14                	jmp    0x406612
  4065fe:	a1 68 37 41 00       	mov    eax,ds:0x413768
  406603:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  406609:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  40660c:	89 b8 60 02 00 00    	mov    DWORD PTR [eax+0x260],edi
  406612:	8b 0d 68 37 41 00    	mov    ecx,DWORD PTR ds:0x413768
  406618:	8d 85 40 ff ff ff    	lea    eax,[ebp-0xc0]
  40661e:	50                   	push   eax
  40661f:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406624:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406627:	05 08 02 00 00       	add    eax,0x208
  40662c:	50                   	push   eax
  40662d:	ff d6                	call   esi
  40662f:	a1 68 37 41 00       	mov    eax,ds:0x413768
  406634:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  40663a:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  40663d:	89 b8 58 02 00 00    	mov    DWORD PTR [eax+0x258],edi
  406643:	80 bd 38 e9 ff ff 00 	cmp    BYTE PTR [ebp-0x16c8],0x0
  40664a:	74 47                	je     0x406693
  40664c:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  406652:	50                   	push   eax
  406653:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  406659:	40                   	inc    eax
  40665a:	50                   	push   eax
  40665b:	e8 11 50 00 00       	call   0x40b671
  406660:	8b 15 68 37 41 00    	mov    edx,DWORD PTR ds:0x413768
  406666:	59                   	pop    ecx
  406667:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  40666d:	8b 0c 91             	mov    ecx,DWORD PTR [ecx+edx*4]
  406670:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
  406676:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  40667c:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  406682:	50                   	push   eax
  406683:	a1 68 37 41 00       	mov    eax,ds:0x413768
  406688:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  40668b:	ff b0 58 02 00 00    	push   DWORD PTR [eax+0x258]
  406691:	ff d6                	call   esi
  406693:	ff 05 68 37 41 00    	inc    DWORD PTR ds:0x413768
  406699:	e9 ed 02 00 00       	jmp    0x40698b
  40669e:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4066a3:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4066aa:	c1 e7 02             	shl    edi,0x2
  4066ad:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
  4066b1:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  4066b4:	66 89 88 68 02 00 00 	mov    WORD PTR [eax+0x268],cx
  4066bb:	75 24                	jne    0x4066e1
  4066bd:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4066c2:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  4066c9:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  4066cc:	66 89 88 6e 02 00 00 	mov    WORD PTR [eax+0x26e],cx
  4066d3:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4066d8:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  4066db:	ff 80 70 02 00 00    	inc    DWORD PTR [eax+0x270]
  4066e1:	80 bd 40 f3 ff ff 00 	cmp    BYTE PTR [ebp-0xcc0],0x0
  4066e8:	0f 84 42 02 00 00    	je     0x406930
  4066ee:	8d 85 40 f3 ff ff    	lea    eax,[ebp-0xcc0]
  4066f4:	50                   	push   eax
  4066f5:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4066fa:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  4066fd:	05 04 01 00 00       	add    eax,0x104
  406702:	50                   	push   eax
  406703:	ff d6                	call   esi
  406705:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  40670a:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  406711:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  406714:	66 89 88 6a 02 00 00 	mov    WORD PTR [eax+0x26a],cx
  40671b:	e9 10 02 00 00       	jmp    0x406930
  406720:	33 ff                	xor    edi,edi
  406722:	39 1d d4 36 41 00    	cmp    DWORD PTR ds:0x4136d4,ebx
  406728:	7e 27                	jle    0x406751
  40672a:	a1 00 37 41 00       	mov    eax,ds:0x413700
  40672f:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  406732:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  406738:	50                   	push   eax
  406739:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  40673f:	85 c0                	test   eax,eax
  406741:	a1 d4 36 41 00       	mov    eax,ds:0x4136d4
  406746:	74 05                	je     0x40674d
  406748:	47                   	inc    edi
  406749:	3b f8                	cmp    edi,eax
  40674b:	7c dd                	jl     0x40672a
  40674d:	3b f8                	cmp    edi,eax
  40674f:	7c 22                	jl     0x406773
  406751:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  406757:	50                   	push   eax
  406758:	8d 85 40 ff ff ff    	lea    eax,[ebp-0xc0]
  40675e:	50                   	push   eax
  40675f:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  406765:	50                   	push   eax
  406766:	e8 ab 02 00 00       	call   0x406a16
  40676b:	83 c4 0c             	add    esp,0xc
  40676e:	e9 18 02 00 00       	jmp    0x40698b
  406773:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406778:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  40677f:	c1 e7 02             	shl    edi,0x2
  406782:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  406785:	66 89 88 68 02 00 00 	mov    WORD PTR [eax+0x268],cx
  40678c:	8d 85 40 ff ff ff    	lea    eax,[ebp-0xc0]
  406792:	50                   	push   eax
  406793:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406798:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  40679b:	05 08 02 00 00       	add    eax,0x208
  4067a0:	50                   	push   eax
  4067a1:	ff d6                	call   esi
  4067a3:	80 bd 38 e9 ff ff 00 	cmp    BYTE PTR [ebp-0x16c8],0x0
  4067aa:	0f 84 db 01 00 00    	je     0x40698b
  4067b0:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  4067b6:	50                   	push   eax
  4067b7:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4067bd:	40                   	inc    eax
  4067be:	50                   	push   eax
  4067bf:	e8 ad 4e 00 00       	call   0x40b671
  4067c4:	59                   	pop    ecx
  4067c5:	8b 0d 00 37 41 00    	mov    ecx,DWORD PTR ds:0x413700
  4067cb:	8b 0c 0f             	mov    ecx,DWORD PTR [edi+ecx*1]
  4067ce:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
  4067d4:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  4067da:	50                   	push   eax
  4067db:	a1 00 37 41 00       	mov    eax,ds:0x413700
  4067e0:	e9 9b 01 00 00       	jmp    0x406980
  4067e5:	80 bd 40 ff ff ff 00 	cmp    BYTE PTR [ebp-0xc0],0x0
  4067ec:	75 0d                	jne    0x4067fb
  4067ee:	80 bd 38 e9 ff ff 00 	cmp    BYTE PTR [ebp-0x16c8],0x0
  4067f5:	0f 84 90 01 00 00    	je     0x40698b
  4067fb:	8b 1d 64 01 41 00    	mov    ebx,DWORD PTR ds:0x410164
  406801:	8d 85 28 e3 ff ff    	lea    eax,[ebp-0x1cd8]
  406807:	50                   	push   eax
  406808:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40680e:	50                   	push   eax
  40680f:	ff d3                	call   ebx
  406811:	85 c0                	test   eax,eax
  406813:	0f 84 c9 00 00 00    	je     0x4068e2
  406819:	8d 85 34 e8 ff ff    	lea    eax,[ebp-0x17cc]
  40681f:	50                   	push   eax
  406820:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  406826:	50                   	push   eax
  406827:	ff d3                	call   ebx
  406829:	85 c0                	test   eax,eax
  40682b:	0f 84 b1 00 00 00    	je     0x4068e2
  406831:	ff 35 38 37 41 00    	push   DWORD PTR ds:0x413738
  406837:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  40683d:	50                   	push   eax
  40683e:	ff d3                	call   ebx
  406840:	85 c0                	test   eax,eax
  406842:	0f 84 9a 00 00 00    	je     0x4068e2
  406848:	8d 85 30 e5 ff ff    	lea    eax,[ebp-0x1ad0]
  40684e:	50                   	push   eax
  40684f:	8d 85 40 f4 ff ff    	lea    eax,[ebp-0xbc0]
  406855:	50                   	push   eax
  406856:	ff d3                	call   ebx
  406858:	85 c0                	test   eax,eax
  40685a:	0f 84 82 00 00 00    	je     0x4068e2
  406860:	33 db                	xor    ebx,ebx
  406862:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  406868:	53                   	push   ebx
  406869:	53                   	push   ebx
  40686a:	50                   	push   eax
  40686b:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  406870:	ff 35 b4 3a 41 00    	push   DWORD PTR ds:0x413ab4
  406876:	68 7c 02 00 00       	push   0x27c
  40687b:	ff 30                	push   DWORD PTR [eax]
  40687d:	53                   	push   ebx
  40687e:	e8 10 4f 00 00       	call   0x40b793
  406883:	8b f8                	mov    edi,eax
  406885:	83 c4 1c             	add    esp,0x1c
  406888:	3b fb                	cmp    edi,ebx
  40688a:	0f 84 c1 fe ff ff    	je     0x406751
  406890:	66 a1 94 3b 41 00    	mov    ax,ds:0x413b94
  406896:	66 89 87 74 02 00 00 	mov    WORD PTR [edi+0x274],ax
  40689d:	8d 85 40 ff ff ff    	lea    eax,[ebp-0xc0]
  4068a3:	50                   	push   eax
  4068a4:	8d 87 10 02 00 00    	lea    eax,[edi+0x210]
  4068aa:	50                   	push   eax
  4068ab:	ff d6                	call   esi
  4068ad:	80 bd 38 e9 ff ff 00 	cmp    BYTE PTR [ebp-0x16c8],0x0
  4068b4:	0f 84 d1 00 00 00    	je     0x40698b
  4068ba:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  4068c0:	50                   	push   eax
  4068c1:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4068c7:	40                   	inc    eax
  4068c8:	50                   	push   eax
  4068c9:	e8 a3 4d 00 00       	call   0x40b671
  4068ce:	59                   	pop    ecx
  4068cf:	89 87 60 02 00 00    	mov    DWORD PTR [edi+0x260],eax
  4068d5:	8d 8d 38 e9 ff ff    	lea    ecx,[ebp-0x16c8]
  4068db:	51                   	push   ecx
  4068dc:	50                   	push   eax
  4068dd:	e9 a7 00 00 00       	jmp    0x406989
  4068e2:	33 ff                	xor    edi,edi
  4068e4:	39 3d 68 37 41 00    	cmp    DWORD PTR ds:0x413768,edi
  4068ea:	0f 8e 61 fe ff ff    	jle    0x406751
  4068f0:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4068f5:	ff 34 b8             	push   DWORD PTR [eax+edi*4]
  4068f8:	8d 85 40 fe ff ff    	lea    eax,[ebp-0x1c0]
  4068fe:	50                   	push   eax
  4068ff:	ff d3                	call   ebx
  406901:	85 c0                	test   eax,eax
  406903:	a1 68 37 41 00       	mov    eax,ds:0x413768
  406908:	74 05                	je     0x40690f
  40690a:	47                   	inc    edi
  40690b:	3b f8                	cmp    edi,eax
  40690d:	7c e1                	jl     0x4068f0
  40690f:	3b f8                	cmp    edi,eax
  406911:	0f 8d 3a fe ff ff    	jge    0x406751
  406917:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  40691c:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  406923:	c1 e7 02             	shl    edi,0x2
  406926:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  406929:	66 89 88 6c 02 00 00 	mov    WORD PTR [eax+0x26c],cx
  406930:	8d 85 40 ff ff ff    	lea    eax,[ebp-0xc0]
  406936:	50                   	push   eax
  406937:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  40693c:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  40693f:	05 08 02 00 00       	add    eax,0x208
  406944:	50                   	push   eax
  406945:	ff d6                	call   esi
  406947:	80 bd 38 e9 ff ff 00 	cmp    BYTE PTR [ebp-0x16c8],0x0
  40694e:	74 3b                	je     0x40698b
  406950:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  406956:	50                   	push   eax
  406957:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40695d:	40                   	inc    eax
  40695e:	50                   	push   eax
  40695f:	e8 0d 4d 00 00       	call   0x40b671
  406964:	59                   	pop    ecx
  406965:	8b 0d 0c 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b0c
  40696b:	8b 0c 0f             	mov    ecx,DWORD PTR [edi+ecx*1]
  40696e:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
  406974:	8d 85 38 e9 ff ff    	lea    eax,[ebp-0x16c8]
  40697a:	50                   	push   eax
  40697b:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406980:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  406983:	ff b0 58 02 00 00    	push   DWORD PTR [eax+0x258]
  406989:	ff d6                	call   esi
  40698b:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  40698f:	0f 84 0e d8 ff ff    	je     0x4041a3
  406995:	e9 f0 d7 ff ff       	jmp    0x40418a
  40699a:	be 00 01 00 00       	mov    esi,0x100
  40699f:	8d 85 28 e2 ff ff    	lea    eax,[ebp-0x1dd8]
  4069a5:	56                   	push   esi
  4069a6:	50                   	push   eax
  4069a7:	6a 19                	push   0x19
  4069a9:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4069af:	e8 e9 41 00 00       	call   0x40ab9d
  4069b4:	8d 85 28 e1 ff ff    	lea    eax,[ebp-0x1ed8]
  4069ba:	56                   	push   esi
  4069bb:	50                   	push   eax
  4069bc:	6a 43                	push   0x43
  4069be:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4069c4:	e8 d4 41 00 00       	call   0x40ab9d
  4069c9:	a1 94 36 41 00       	mov    eax,ds:0x413694
  4069ce:	83 c4 20             	add    esp,0x20
  4069d1:	3b c3                	cmp    eax,ebx
  4069d3:	74 07                	je     0x4069dc
  4069d5:	50                   	push   eax
  4069d6:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  4069dc:	8d 85 28 e2 ff ff    	lea    eax,[ebp-0x1dd8]
  4069e2:	53                   	push   ebx
  4069e3:	50                   	push   eax
  4069e4:	8d 85 28 e1 ff ff    	lea    eax,[ebp-0x1ed8]
  4069ea:	50                   	push   eax
  4069eb:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  4069f1:	ff 15 98 02 41 00    	call   DWORD PTR ds:0x410298
  4069f7:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4069fa:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  406a00:	8b c7                	mov    eax,edi
  406a02:	eb 0d                	jmp    0x406a11
  406a04:	33 f6                	xor    esi,esi
  406a06:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  406a09:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  406a0f:	8b c6                	mov    eax,esi
  406a11:	5f                   	pop    edi
  406a12:	5e                   	pop    esi
  406a13:	5b                   	pop    ebx
  406a14:	c9                   	leave
  406a15:	c3                   	ret
  406a16:	56                   	push   esi
  406a17:	57                   	push   edi
  406a18:	68 74 02 00 00       	push   0x274
  406a1d:	e8 4f 4c 00 00       	call   0x40b671
  406a22:	8b 15 d4 36 41 00    	mov    edx,DWORD PTR ds:0x4136d4
  406a28:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  406a2e:	59                   	pop    ecx
  406a2f:	8b 0d 00 37 41 00    	mov    ecx,DWORD PTR ds:0x413700
  406a35:	89 04 91             	mov    DWORD PTR [ecx+edx*4],eax
  406a38:	83 3d 10 37 41 00 00 	cmp    DWORD PTR ds:0x413710,0x0
  406a3f:	74 16                	je     0x406a57
  406a41:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  406a45:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406a4a:	8b 0d d4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136d4
  406a50:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
  406a53:	ff d6                	call   esi
  406a55:	eb 18                	jmp    0x406a6f
  406a57:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406a5c:	8b 0d d4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136d4
  406a62:	ff 34 88             	push   DWORD PTR [eax+ecx*4]
  406a65:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  406a69:	ff 15 f0 02 41 00    	call   DWORD PTR ds:0x4102f0
  406a6f:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406a74:	8b 0d d4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136d4
  406a7a:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  406a7e:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406a81:	66 8b 0d 94 3b 41 00 	mov    cx,WORD PTR ds:0x413b94
  406a88:	66 89 88 68 02 00 00 	mov    WORD PTR [eax+0x268],cx
  406a8f:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406a94:	8b 0d d4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136d4
  406a9a:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406a9d:	05 08 02 00 00       	add    eax,0x208
  406aa2:	50                   	push   eax
  406aa3:	ff d6                	call   esi
  406aa5:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406aaa:	8b 0d d4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136d4
  406ab0:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  406ab4:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406ab7:	83 a0 58 02 00 00 00 	and    DWORD PTR [eax+0x258],0x0
  406abe:	80 3f 00             	cmp    BYTE PTR [edi],0x0
  406ac1:	74 3b                	je     0x406afe
  406ac3:	57                   	push   edi
  406ac4:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  406aca:	40                   	inc    eax
  406acb:	50                   	push   eax
  406acc:	e8 a0 4b 00 00       	call   0x40b671
  406ad1:	8b 15 d4 36 41 00    	mov    edx,DWORD PTR ds:0x4136d4
  406ad7:	59                   	pop    ecx
  406ad8:	8b 0d 00 37 41 00    	mov    ecx,DWORD PTR ds:0x413700
  406ade:	57                   	push   edi
  406adf:	8b 0c 91             	mov    ecx,DWORD PTR [ecx+edx*4]
  406ae2:	89 81 58 02 00 00    	mov    DWORD PTR [ecx+0x258],eax
  406ae8:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406aed:	8b 0d d4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136d4
  406af3:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  406af6:	ff b0 58 02 00 00    	push   DWORD PTR [eax+0x258]
  406afc:	ff d6                	call   esi
  406afe:	ff 05 d4 36 41 00    	inc    DWORD PTR ds:0x4136d4
  406b04:	5f                   	pop    edi
  406b05:	5e                   	pop    esi
  406b06:	c3                   	ret
  406b07:	ff 4c 24 08          	dec    DWORD PTR [esp+0x8]
  406b0b:	53                   	push   ebx
  406b0c:	55                   	push   ebp
  406b0d:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
  406b11:	56                   	push   esi
  406b12:	8b 35 44 01 41 00    	mov    esi,DWORD PTR ds:0x410144
  406b18:	57                   	push   edi
  406b19:	33 db                	xor    ebx,ebx
  406b1b:	bf 00 40 00 00       	mov    edi,0x4000
  406b20:	a1 6c 37 41 00       	mov    eax,ds:0x41376c
  406b25:	3b 05 a4 3a 41 00    	cmp    eax,DWORD PTR ds:0x413aa4
  406b2b:	7c 22                	jl     0x406b4f
  406b2d:	01 05 8c 37 41 00    	add    DWORD PTR ds:0x41378c,eax
  406b33:	57                   	push   edi
  406b34:	ff 35 84 36 41 00    	push   DWORD PTR ds:0x413684
  406b3a:	89 1d 6c 37 41 00    	mov    DWORD PTR ds:0x41376c,ebx
  406b40:	ff 74 24 24          	push   DWORD PTR [esp+0x24]
  406b44:	ff d6                	call   esi
  406b46:	3b c3                	cmp    eax,ebx
  406b48:	a3 a4 3a 41 00       	mov    ds:0x413aa4,eax
  406b4d:	7e 45                	jle    0x406b94
  406b4f:	a1 84 36 41 00       	mov    eax,ds:0x413684
  406b54:	8b 0d 6c 37 41 00    	mov    ecx,DWORD PTR ds:0x41376c
  406b5a:	8a 04 08             	mov    al,BYTE PTR [eax+ecx*1]
  406b5d:	3c 0d                	cmp    al,0xd
  406b5f:	74 1f                	je     0x406b80
  406b61:	3c 0a                	cmp    al,0xa
  406b63:	74 0e                	je     0x406b73
  406b65:	39 5c 24 18          	cmp    DWORD PTR [esp+0x18],ebx
  406b69:	7e 08                	jle    0x406b73
  406b6b:	ff 4c 24 18          	dec    DWORD PTR [esp+0x18]
  406b6f:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  406b72:	45                   	inc    ebp
  406b73:	a1 6c 37 41 00       	mov    eax,ds:0x41376c
  406b78:	40                   	inc    eax
  406b79:	a3 6c 37 41 00       	mov    ds:0x41376c,eax
  406b7e:	eb a5                	jmp    0x406b25
  406b80:	ff 05 6c 37 41 00    	inc    DWORD PTR ds:0x41376c
  406b86:	3b 6c 24 14          	cmp    ebp,DWORD PTR [esp+0x14]
  406b8a:	75 0c                	jne    0x406b98
  406b8c:	39 5c 24 20          	cmp    DWORD PTR [esp+0x20],ebx
  406b90:	75 06                	jne    0x406b98
  406b92:	eb 8c                	jmp    0x406b20
  406b94:	33 c0                	xor    eax,eax
  406b96:	eb 03                	jmp    0x406b9b
  406b98:	6a 01                	push   0x1
  406b9a:	58                   	pop    eax
  406b9b:	5f                   	pop    edi
  406b9c:	88 5d 00             	mov    BYTE PTR [ebp+0x0],bl
  406b9f:	5e                   	pop    esi
  406ba0:	5d                   	pop    ebp
  406ba1:	5b                   	pop    ebx
  406ba2:	c3                   	ret
  406ba3:	81 ec 18 0b 00 00    	sub    esp,0xb18
  406ba9:	8d 84 24 18 01 00 00 	lea    eax,[esp+0x118]
  406bb0:	c7 05 c0 36 41 00 01 	mov    DWORD PTR ds:0x4136c0,0x1
  406bb7:	00 00 00 
  406bba:	68 58 25 41 00       	push   0x412558
  406bbf:	50                   	push   eax
  406bc0:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  406bc6:	68 00 10 00 00       	push   0x1000
  406bcb:	e8 a1 4a 00 00       	call   0x40b671
  406bd0:	a3 ac 37 41 00       	mov    ds:0x4137ac,eax
  406bd5:	33 c0                	xor    eax,eax
  406bd7:	66 39 05 94 3b 41 00 	cmp    WORD PTR ds:0x413b94,ax
  406bde:	59                   	pop    ecx
  406bdf:	72 16                	jb     0x406bf7
  406be1:	8b 0d ac 37 41 00    	mov    ecx,DWORD PTR ds:0x4137ac
  406be7:	83 24 81 00          	and    DWORD PTR [ecx+eax*4],0x0
  406beb:	40                   	inc    eax
  406bec:	0f b7 0d 94 3b 41 00 	movzx  ecx,WORD PTR ds:0x413b94
  406bf3:	3b c1                	cmp    eax,ecx
  406bf5:	7e ea                	jle    0x406be1
  406bf7:	53                   	push   ebx
  406bf8:	55                   	push   ebp
  406bf9:	33 db                	xor    ebx,ebx
  406bfb:	56                   	push   esi
  406bfc:	39 1d 8c 3a 41 00    	cmp    DWORD PTR ds:0x413a8c,ebx
  406c02:	8b 35 e0 02 41 00    	mov    esi,DWORD PTR ds:0x4102e0
  406c08:	57                   	push   edi
  406c09:	bf ef 03 00 00       	mov    edi,0x3ef
  406c0e:	0f 85 fc 00 00 00    	jne    0x406d10
  406c14:	53                   	push   ebx
  406c15:	68 ea 03 00 00       	push   0x3ea
  406c1a:	e8 5e c5 ff ff       	call   0x40317d
  406c1f:	53                   	push   ebx
  406c20:	68 ec 03 00 00       	push   0x3ec
  406c25:	e8 53 c5 ff ff       	call   0x40317d
  406c2a:	bd ed 03 00 00       	mov    ebp,0x3ed
  406c2f:	6a 01                	push   0x1
  406c31:	55                   	push   ebp
  406c32:	e8 46 c5 ff ff       	call   0x40317d
  406c37:	6a 01                	push   0x1
  406c39:	57                   	push   edi
  406c3a:	e8 3e c5 ff ff       	call   0x40317d
  406c3f:	8d 84 24 48 03 00 00 	lea    eax,[esp+0x348]
  406c46:	68 00 01 00 00       	push   0x100
  406c4b:	50                   	push   eax
  406c4c:	6a 2d                	push   0x2d
  406c4e:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  406c54:	e8 44 3f 00 00       	call   0x40ab9d
  406c59:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  406c5f:	8d 84 24 5c 03 00 00 	lea    eax,[esp+0x35c]
  406c66:	50                   	push   eax
  406c67:	8d 84 24 60 07 00 00 	lea    eax,[esp+0x760]
  406c6e:	50                   	push   eax
  406c6f:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  406c75:	83 c4 3c             	add    esp,0x3c
  406c78:	8d 84 24 28 07 00 00 	lea    eax,[esp+0x728]
  406c7f:	50                   	push   eax
  406c80:	55                   	push   ebp
  406c81:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  406c87:	ff 15 cc 02 41 00    	call   DWORD PTR ds:0x4102cc
  406c8d:	53                   	push   ebx
  406c8e:	6a 01                	push   0x1
  406c90:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  406c96:	ff d6                	call   esi
  406c98:	8b 2d 84 02 41 00    	mov    ebp,DWORD PTR ds:0x410284
  406c9e:	50                   	push   eax
  406c9f:	ff d5                	call   ebp
  406ca1:	53                   	push   ebx
  406ca2:	6a 05                	push   0x5
  406ca4:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  406caa:	ff d6                	call   esi
  406cac:	50                   	push   eax
  406cad:	ff d5                	call   ebp
  406caf:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  406cb3:	bd 20 3b 41 00       	mov    ebp,0x413b20
  406cb8:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  406cbc:	83 c0 6b             	add    eax,0x6b
  406cbf:	0f b7 c0             	movzx  eax,ax
  406cc2:	50                   	push   eax
  406cc3:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  406cc9:	ff 15 4c 02 41 00    	call   DWORD PTR ds:0x41024c
  406ccf:	ff 44 24 10          	inc    DWORD PTR [esp+0x10]
  406cd3:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  406cd6:	83 c5 04             	add    ebp,0x4
  406cd9:	81 fd 74 3b 41 00    	cmp    ebp,0x413b74
  406cdf:	7c d7                	jl     0x406cb8
  406ce1:	39 1d 80 37 41 00    	cmp    DWORD PTR ds:0x413780,ebx
  406ce7:	74 16                	je     0x406cff
  406ce9:	6a 05                	push   0x5
  406ceb:	68 f6 0e 00 00       	push   0xef6
  406cf0:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  406cf6:	ff d6                	call   esi
  406cf8:	50                   	push   eax
  406cf9:	ff 15 54 02 41 00    	call   DWORD PTR ds:0x410254
  406cff:	53                   	push   ebx
  406d00:	e8 21 23 00 00       	call   0x409026
  406d05:	59                   	pop    ecx
  406d06:	c7 05 8c 3a 41 00 01 	mov    DWORD PTR ds:0x413a8c,0x1
  406d0d:	00 00 00 
  406d10:	a1 c8 36 41 00       	mov    eax,ds:0x4136c8
  406d15:	8b 0d 80 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a80
  406d1b:	03 c8                	add    ecx,eax
  406d1d:	8b 1d 68 37 41 00    	mov    ebx,DWORD PTR ds:0x413768
  406d23:	03 0d fc 3a 41 00    	add    ecx,DWORD PTR ds:0x413afc
  406d29:	03 0d 9c 3b 41 00    	add    ecx,DWORD PTR ds:0x413b9c
  406d2f:	03 0d 20 37 41 00    	add    ecx,DWORD PTR ds:0x413720
  406d35:	03 0d 74 37 41 00    	add    ecx,DWORD PTR ds:0x413774
  406d3b:	03 cb                	add    ecx,ebx
  406d3d:	03 0d b4 3a 41 00    	add    ecx,DWORD PTR ds:0x413ab4
  406d43:	89 0d f8 3a 41 00    	mov    DWORD PTR ds:0x413af8,ecx
  406d49:	75 0a                	jne    0x406d55
  406d4b:	c7 05 f8 3a 41 00 01 	mov    DWORD PTR ds:0x413af8,0x1
  406d52:	00 00 00 
  406d55:	8b 2d fc 00 41 00    	mov    ebp,DWORD PTR ds:0x4100fc
  406d5b:	4b                   	dec    ebx
  406d5c:	85 db                	test   ebx,ebx
  406d5e:	0f 8c a0 00 00 00    	jl     0x406e04
  406d64:	8d 84 24 28 01 00 00 	lea    eax,[esp+0x128]
  406d6b:	50                   	push   eax
  406d6c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406d72:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  406d78:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406d7d:	ff 34 98             	push   DWORD PTR [eax+ebx*4]
  406d80:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406d86:	ff d5                	call   ebp
  406d88:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406d8e:	57                   	push   edi
  406d8f:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  406d95:	ff d6                	call   esi
  406d97:	50                   	push   eax
  406d98:	e8 3b 2b 00 00       	call   0x4098d8
  406d9d:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406da3:	e8 7e 22 00 00       	call   0x409026
  406da8:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  406dad:	83 c4 0c             	add    esp,0xc
  406db0:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  406db3:	8b 88 58 02 00 00    	mov    ecx,DWORD PTR [eax+0x258]
  406db9:	85 c9                	test   ecx,ecx
  406dbb:	74 0b                	je     0x406dc8
  406dbd:	51                   	push   ecx
  406dbe:	50                   	push   eax
  406dbf:	e8 5f 05 00 00       	call   0x407323
  406dc4:	59                   	pop    ecx
  406dc5:	59                   	pop    ecx
  406dc6:	eb 2f                	jmp    0x406df7
  406dc8:	66 8b 88 6c 02 00 00 	mov    cx,WORD PTR [eax+0x26c]
  406dcf:	66 85 c9             	test   cx,cx
  406dd2:	0f b7 c9             	movzx  ecx,cx
  406dd5:	75 07                	jne    0x406dde
  406dd7:	0f b7 88 68 02 00 00 	movzx  ecx,WORD PTR [eax+0x268]
  406dde:	51                   	push   ecx
  406ddf:	8d 88 08 02 00 00    	lea    ecx,[eax+0x208]
  406de5:	51                   	push   ecx
  406de6:	50                   	push   eax
  406de7:	e8 ca 06 00 00       	call   0x4074b6
  406dec:	83 c4 0c             	add    esp,0xc
  406def:	85 c0                	test   eax,eax
  406df1:	0f 85 da 04 00 00    	jne    0x4072d1
  406df7:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  406dfd:	4b                   	dec    ebx
  406dfe:	0f 89 60 ff ff ff    	jns    0x406d64
  406e04:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  406e09:	8d 58 ff             	lea    ebx,[eax-0x1]
  406e0c:	85 db                	test   ebx,ebx
  406e0e:	0f 8c aa 00 00 00    	jl     0x406ebe
  406e14:	8d 84 24 28 01 00 00 	lea    eax,[esp+0x128]
  406e1b:	50                   	push   eax
  406e1c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406e22:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  406e28:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  406e2d:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  406e30:	83 c0 08             	add    eax,0x8
  406e33:	50                   	push   eax
  406e34:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406e3a:	ff d5                	call   ebp
  406e3c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406e42:	57                   	push   edi
  406e43:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  406e49:	ff d6                	call   esi
  406e4b:	50                   	push   eax
  406e4c:	e8 87 2a 00 00       	call   0x4098d8
  406e51:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406e57:	e8 ca 21 00 00       	call   0x409026
  406e5c:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  406e61:	83 c4 0c             	add    esp,0xc
  406e64:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  406e67:	8b 88 60 02 00 00    	mov    ecx,DWORD PTR [eax+0x260]
  406e6d:	85 c9                	test   ecx,ecx
  406e6f:	74 0e                	je     0x406e7f
  406e71:	83 c0 08             	add    eax,0x8
  406e74:	51                   	push   ecx
  406e75:	50                   	push   eax
  406e76:	e8 a8 04 00 00       	call   0x407323
  406e7b:	59                   	pop    ecx
  406e7c:	59                   	pop    ecx
  406e7d:	eb 32                	jmp    0x406eb1
  406e7f:	66 8b 88 74 02 00 00 	mov    cx,WORD PTR [eax+0x274]
  406e86:	66 85 c9             	test   cx,cx
  406e89:	0f b7 c9             	movzx  ecx,cx
  406e8c:	75 07                	jne    0x406e95
  406e8e:	0f b7 88 70 02 00 00 	movzx  ecx,WORD PTR [eax+0x270]
  406e95:	51                   	push   ecx
  406e96:	8d 88 10 02 00 00    	lea    ecx,[eax+0x210]
  406e9c:	83 c0 08             	add    eax,0x8
  406e9f:	51                   	push   ecx
  406ea0:	50                   	push   eax
  406ea1:	e8 10 06 00 00       	call   0x4074b6
  406ea6:	83 c4 0c             	add    esp,0xc
  406ea9:	85 c0                	test   eax,eax
  406eab:	0f 85 20 04 00 00    	jne    0x4072d1
  406eb1:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  406eb7:	4b                   	dec    ebx
  406eb8:	0f 89 56 ff ff ff    	jns    0x406e14
  406ebe:	a1 d4 36 41 00       	mov    eax,ds:0x4136d4
  406ec3:	8d 58 ff             	lea    ebx,[eax-0x1]
  406ec6:	85 db                	test   ebx,ebx
  406ec8:	0f 8c 91 00 00 00    	jl     0x406f5f
  406ece:	8d 84 24 28 01 00 00 	lea    eax,[esp+0x128]
  406ed5:	50                   	push   eax
  406ed6:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406edc:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  406ee2:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406ee7:	ff 34 98             	push   DWORD PTR [eax+ebx*4]
  406eea:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406ef0:	ff d5                	call   ebp
  406ef2:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406ef8:	57                   	push   edi
  406ef9:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  406eff:	ff d6                	call   esi
  406f01:	50                   	push   eax
  406f02:	e8 d1 29 00 00       	call   0x4098d8
  406f07:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  406f0d:	e8 14 21 00 00       	call   0x409026
  406f12:	a1 00 37 41 00       	mov    eax,ds:0x413700
  406f17:	83 c4 0c             	add    esp,0xc
  406f1a:	8b 04 98             	mov    eax,DWORD PTR [eax+ebx*4]
  406f1d:	8b 88 58 02 00 00    	mov    ecx,DWORD PTR [eax+0x258]
  406f23:	85 c9                	test   ecx,ecx
  406f25:	74 0b                	je     0x406f32
  406f27:	51                   	push   ecx
  406f28:	50                   	push   eax
  406f29:	e8 f5 03 00 00       	call   0x407323
  406f2e:	59                   	pop    ecx
  406f2f:	59                   	pop    ecx
  406f30:	eb 20                	jmp    0x406f52
  406f32:	66 8b 88 68 02 00 00 	mov    cx,WORD PTR [eax+0x268]
  406f39:	51                   	push   ecx
  406f3a:	8d 88 08 02 00 00    	lea    ecx,[eax+0x208]
  406f40:	51                   	push   ecx
  406f41:	50                   	push   eax
  406f42:	e8 6f 05 00 00       	call   0x4074b6
  406f47:	83 c4 0c             	add    esp,0xc
  406f4a:	85 c0                	test   eax,eax
  406f4c:	0f 85 7f 03 00 00    	jne    0x4072d1
  406f52:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  406f58:	4b                   	dec    ebx
  406f59:	0f 89 6f ff ff ff    	jns    0x406ece
  406f5f:	33 f6                	xor    esi,esi
  406f61:	39 35 b8 36 41 00    	cmp    DWORD PTR ds:0x4136b8,esi
  406f67:	7e 5e                	jle    0x406fc7
  406f69:	33 ff                	xor    edi,edi
  406f6b:	39 3d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,edi
  406f71:	75 56                	jne    0x406fc9
  406f73:	a1 44 37 41 00       	mov    eax,ds:0x413744
  406f78:	6a 01                	push   0x1
  406f7a:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  406f7d:	39 38                	cmp    DWORD PTR [eax],edi
  406f7f:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  406f82:	ff 70 0c             	push   DWORD PTR [eax+0xc]
  406f85:	74 19                	je     0x406fa0
  406f87:	8d 81 08 01 00 00    	lea    eax,[ecx+0x108]
  406f8d:	50                   	push   eax
  406f8e:	8d 41 08             	lea    eax,[ecx+0x8]
  406f91:	50                   	push   eax
  406f92:	ff b1 18 12 00 00    	push   DWORD PTR [ecx+0x1218]
  406f98:	ff b1 14 12 00 00    	push   DWORD PTR [ecx+0x1214]
  406f9e:	eb 14                	jmp    0x406fb4
  406fa0:	8d 91 0c 01 00 00    	lea    edx,[ecx+0x10c]
  406fa6:	52                   	push   edx
  406fa7:	8d 51 08             	lea    edx,[ecx+0x8]
  406faa:	52                   	push   edx
  406fab:	ff 70 04             	push   DWORD PTR [eax+0x4]
  406fae:	ff b1 18 02 00 00    	push   DWORD PTR [ecx+0x218]
  406fb4:	e8 de 0a 00 00       	call   0x407a97
  406fb9:	83 c4 18             	add    esp,0x18
  406fbc:	46                   	inc    esi
  406fbd:	3b 35 b8 36 41 00    	cmp    esi,DWORD PTR ds:0x4136b8
  406fc3:	7c a6                	jl     0x406f6b
  406fc5:	eb 02                	jmp    0x406fc9
  406fc7:	33 ff                	xor    edi,edi
  406fc9:	33 f6                	xor    esi,esi
  406fcb:	39 3d b4 3a 41 00    	cmp    DWORD PTR ds:0x413ab4,edi
  406fd1:	7e 3e                	jle    0x407011
  406fd3:	39 3d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,edi
  406fd9:	75 36                	jne    0x407011
  406fdb:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  406fe0:	8b 0c b0             	mov    ecx,DWORD PTR [eax+esi*4]
  406fe3:	80 79 08 00          	cmp    BYTE PTR [ecx+0x8],0x0
  406fe7:	8d 41 08             	lea    eax,[ecx+0x8]
  406fea:	74 1c                	je     0x407008
  406fec:	66 39 b9 6c 02 00 00 	cmp    WORD PTR [ecx+0x26c],di
  406ff3:	76 13                	jbe    0x407008
  406ff5:	6a 01                	push   0x1
  406ff7:	50                   	push   eax
  406ff8:	8d 84 24 30 01 00 00 	lea    eax,[esp+0x130]
  406fff:	50                   	push   eax
  407000:	e8 c5 2e 00 00       	call   0x409eca
  407005:	83 c4 0c             	add    esp,0xc
  407008:	46                   	inc    esi
  407009:	3b 35 b4 3a 41 00    	cmp    esi,DWORD PTR ds:0x413ab4
  40700f:	7c c2                	jl     0x406fd3
  407011:	33 f6                	xor    esi,esi
  407013:	39 3d 68 37 41 00    	cmp    DWORD PTR ds:0x413768,edi
  407019:	7e 3a                	jle    0x407055
  40701b:	39 3d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,edi
  407021:	75 32                	jne    0x407055
  407023:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  407028:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  40702b:	80 38 00             	cmp    BYTE PTR [eax],0x0
  40702e:	74 1c                	je     0x40704c
  407030:	66 39 b8 64 02 00 00 	cmp    WORD PTR [eax+0x264],di
  407037:	76 13                	jbe    0x40704c
  407039:	6a 01                	push   0x1
  40703b:	50                   	push   eax
  40703c:	8d 84 24 30 01 00 00 	lea    eax,[esp+0x130]
  407043:	50                   	push   eax
  407044:	e8 81 2e 00 00       	call   0x409eca
  407049:	83 c4 0c             	add    esp,0xc
  40704c:	46                   	inc    esi
  40704d:	3b 35 68 37 41 00    	cmp    esi,DWORD PTR ds:0x413768
  407053:	7c c6                	jl     0x40701b
  407055:	39 3d 94 3a 41 00    	cmp    DWORD PTR ds:0x413a94,edi
  40705b:	0f 84 70 02 00 00    	je     0x4072d1
  407061:	0f b7 05 94 3b 41 00 	movzx  eax,WORD PTR ds:0x413b94
  407068:	3b c7                	cmp    eax,edi
  40706a:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  40706e:	0f 8c 5d 02 00 00    	jl     0x4072d1
  407074:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  407078:	8b e8                	mov    ebp,eax
  40707a:	a1 a4 36 41 00       	mov    eax,ds:0x4136a4
  40707f:	c1 e5 02             	shl    ebp,0x2
  407082:	03 c5                	add    eax,ebp
  407084:	8b 08                	mov    ecx,DWORD PTR [eax]
  407086:	3b cf                	cmp    ecx,edi
  407088:	0f 84 14 02 00 00    	je     0x4072a2
  40708e:	8b 15 ac 37 41 00    	mov    edx,DWORD PTR ds:0x4137ac
  407094:	39 3c 2a             	cmp    DWORD PTR [edx+ebp*1],edi
  407097:	0f 84 05 02 00 00    	je     0x4072a2
  40709d:	80 39 00             	cmp    BYTE PTR [ecx],0x0
  4070a0:	0f 84 fc 01 00 00    	je     0x4072a2
  4070a6:	8b 30                	mov    esi,DWORD PTR [eax]
  4070a8:	8d 8c 24 28 02 00 00 	lea    ecx,[esp+0x228]
  4070af:	8a 06                	mov    al,BYTE PTR [esi]
  4070b1:	84 c0                	test   al,al
  4070b3:	74 25                	je     0x4070da
  4070b5:	3c 7c                	cmp    al,0x7c
  4070b7:	74 0b                	je     0x4070c4
  4070b9:	88 01                	mov    BYTE PTR [ecx],al
  4070bb:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  4070be:	41                   	inc    ecx
  4070bf:	46                   	inc    esi
  4070c0:	84 c0                	test   al,al
  4070c2:	75 f1                	jne    0x4070b5
  4070c4:	8d 84 24 28 02 00 00 	lea    eax,[esp+0x228]
  4070cb:	3b c8                	cmp    ecx,eax
  4070cd:	76 0b                	jbe    0x4070da
  4070cf:	80 79 ff 20          	cmp    BYTE PTR [ecx-0x1],0x20
  4070d3:	8d 41 ff             	lea    eax,[ecx-0x1]
  4070d6:	75 02                	jne    0x4070da
  4070d8:	8b c8                	mov    ecx,eax
  4070da:	80 21 00             	and    BYTE PTR [ecx],0x0
  4070dd:	80 3e 00             	cmp    BYTE PTR [esi],0x0
  4070e0:	74 01                	je     0x4070e3
  4070e2:	46                   	inc    esi
  4070e3:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  4070ea:	7e 0f                	jle    0x4070fb
  4070ec:	0f be 06             	movsx  eax,BYTE PTR [esi]
  4070ef:	6a 08                	push   0x8
  4070f1:	50                   	push   eax
  4070f2:	e8 87 51 00 00       	call   0x40c27e
  4070f7:	59                   	pop    ecx
  4070f8:	59                   	pop    ecx
  4070f9:	eb 0f                	jmp    0x40710a
  4070fb:	0f be 06             	movsx  eax,BYTE PTR [esi]
  4070fe:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  407104:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
  407107:	83 e0 08             	and    eax,0x8
  40710a:	3b c7                	cmp    eax,edi
  40710c:	75 d4                	jne    0x4070e2
  40710e:	8d 84 24 28 02 00 00 	lea    eax,[esp+0x228]
  407115:	57                   	push   edi
  407116:	50                   	push   eax
  407117:	e8 17 38 00 00       	call   0x40a933
  40711c:	59                   	pop    ecx
  40711d:	85 c0                	test   eax,eax
  40711f:	59                   	pop    ecx
  407120:	0f 85 d4 00 00 00    	jne    0x4071fa
  407126:	8d 84 24 28 02 00 00 	lea    eax,[esp+0x228]
  40712d:	57                   	push   edi
  40712e:	50                   	push   eax
  40712f:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  407135:	8b f8                	mov    edi,eax
  407137:	83 ff ff             	cmp    edi,0xffffffff
  40713a:	0f 84 ba 00 00 00    	je     0x4071fa
  407140:	8d 44 24 20          	lea    eax,[esp+0x20]
  407144:	33 db                	xor    ebx,ebx
  407146:	50                   	push   eax
  407147:	53                   	push   ebx
  407148:	53                   	push   ebx
  407149:	57                   	push   edi
  40714a:	ff 15 40 01 41 00    	call   DWORD PTR ds:0x410140
  407150:	8d 44 24 18          	lea    eax,[esp+0x18]
  407154:	50                   	push   eax
  407155:	8d 44 24 24          	lea    eax,[esp+0x24]
  407159:	50                   	push   eax
  40715a:	ff 15 38 01 41 00    	call   DWORD PTR ds:0x410138
  407160:	8d 44 24 14          	lea    eax,[esp+0x14]
  407164:	50                   	push   eax
  407165:	8d 44 24 1a          	lea    eax,[esp+0x1a]
  407169:	50                   	push   eax
  40716a:	8d 44 24 20          	lea    eax,[esp+0x20]
  40716e:	50                   	push   eax
  40716f:	ff 15 48 01 41 00    	call   DWORD PTR ds:0x410148
  407175:	6a 02                	push   0x2
  407177:	53                   	push   ebx
  407178:	57                   	push   edi
  407179:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  40717f:	57                   	push   edi
  407180:	8b d8                	mov    ebx,eax
  407182:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  407188:	0f b7 4c 24 16       	movzx  ecx,WORD PTR [esp+0x16]
  40718d:	8b c1                	mov    eax,ecx
  40718f:	6a 64                	push   0x64
  407191:	c1 e8 09             	shr    eax,0x9
  407194:	83 c0 50             	add    eax,0x50
  407197:	5f                   	pop    edi
  407198:	99                   	cdq
  407199:	f7 ff                	idiv   edi
  40719b:	83 fa 3c             	cmp    edx,0x3c
  40719e:	73 08                	jae    0x4071a8
  4071a0:	81 c2 d0 07 00 00    	add    edx,0x7d0
  4071a6:	eb 06                	jmp    0x4071ae
  4071a8:	81 c2 6c 07 00 00    	add    edx,0x76c
  4071ae:	0f b7 44 24 14       	movzx  eax,WORD PTR [esp+0x14]
  4071b3:	8b f8                	mov    edi,eax
  4071b5:	53                   	push   ebx
  4071b6:	83 e7 1f             	and    edi,0x1f
  4071b9:	d1 e7                	shl    edi,1
  4071bb:	57                   	push   edi
  4071bc:	8b f8                	mov    edi,eax
  4071be:	c1 ef 05             	shr    edi,0x5
  4071c1:	83 e7 3f             	and    edi,0x3f
  4071c4:	c1 e8 0b             	shr    eax,0xb
  4071c7:	57                   	push   edi
  4071c8:	50                   	push   eax
  4071c9:	8b c1                	mov    eax,ecx
  4071cb:	52                   	push   edx
  4071cc:	c1 e9 05             	shr    ecx,0x5
  4071cf:	83 e0 1f             	and    eax,0x1f
  4071d2:	83 e1 0f             	and    ecx,0xf
  4071d5:	50                   	push   eax
  4071d6:	51                   	push   ecx
  4071d7:	8d 44 24 44          	lea    eax,[esp+0x44]
  4071db:	68 30 25 41 00       	push   0x412530
  4071e0:	50                   	push   eax
  4071e1:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  4071e7:	83 c4 24             	add    esp,0x24
  4071ea:	8d 44 24 28          	lea    eax,[esp+0x28]
  4071ee:	56                   	push   esi
  4071ef:	50                   	push   eax
  4071f0:	ff 15 60 01 41 00    	call   DWORD PTR ds:0x410160
  4071f6:	85 c0                	test   eax,eax
  4071f8:	74 60                	je     0x40725a
  4071fa:	8d 84 24 28 02 00 00 	lea    eax,[esp+0x228]
  407201:	56                   	push   esi
  407202:	a3 14 37 41 00       	mov    ds:0x413714,eax
  407207:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  40720b:	50                   	push   eax
  40720c:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  407212:	80 7c 24 28 00       	cmp    BYTE PTR [esp+0x28],0x0
  407217:	8d 44 24 28          	lea    eax,[esp+0x28]
  40721b:	74 0e                	je     0x40722b
  40721d:	80 38 7c             	cmp    BYTE PTR [eax],0x7c
  407220:	75 03                	jne    0x407225
  407222:	c6 00 2f             	mov    BYTE PTR [eax],0x2f
  407225:	40                   	inc    eax
  407226:	80 38 00             	cmp    BYTE PTR [eax],0x0
  407229:	75 f2                	jne    0x40721d
  40722b:	33 ff                	xor    edi,edi
  40722d:	8d 44 24 28          	lea    eax,[esp+0x28]
  407231:	57                   	push   edi
  407232:	68 c1 26 40 00       	push   0x4026c1
  407237:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40723d:	a3 78 37 41 00       	mov    ds:0x413778,eax
  407242:	6a 6b                	push   0x6b
  407244:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40724a:	ff 15 34 03 41 00    	call   DWORD PTR ds:0x410334
  407250:	83 f8 02             	cmp    eax,0x2
  407253:	74 59                	je     0x4072ae
  407255:	e9 b4 fe ff ff       	jmp    0x40710e
  40725a:	a1 ac 37 41 00       	mov    eax,ds:0x4137ac
  40725f:	ff 34 28             	push   DWORD PTR [eax+ebp*1]
  407262:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  407266:	68 28 25 41 00       	push   0x412528
  40726b:	50                   	push   eax
  40726c:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  407272:	8d 44 24 34          	lea    eax,[esp+0x34]
  407276:	50                   	push   eax
  407277:	8d 84 24 38 02 00 00 	lea    eax,[esp+0x238]
  40727e:	50                   	push   eax
  40727f:	e8 17 4b 00 00       	call   0x40bd9b
  407284:	a1 ac 37 41 00       	mov    eax,ds:0x4137ac
  407289:	83 c4 14             	add    esp,0x14
  40728c:	ff 34 28             	push   DWORD PTR [eax+ebp*1]
  40728f:	ff 15 f0 00 41 00    	call   DWORD PTR ds:0x4100f0
  407295:	a1 a4 36 41 00       	mov    eax,ds:0x4136a4
  40729a:	8b 04 28             	mov    eax,DWORD PTR [eax+ebp*1]
  40729d:	80 20 00             	and    BYTE PTR [eax],0x0
  4072a0:	33 ff                	xor    edi,edi
  4072a2:	ff 4c 24 10          	dec    DWORD PTR [esp+0x10]
  4072a6:	0f 89 c8 fd ff ff    	jns    0x407074
  4072ac:	eb 23                	jmp    0x4072d1
  4072ae:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  4072b2:	3b f7                	cmp    esi,edi
  4072b4:	7c 1b                	jl     0x4072d1
  4072b6:	a1 a4 36 41 00       	mov    eax,ds:0x4136a4
  4072bb:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4072be:	3b c7                	cmp    eax,edi
  4072c0:	74 0c                	je     0x4072ce
  4072c2:	80 38 00             	cmp    BYTE PTR [eax],0x0
  4072c5:	74 07                	je     0x4072ce
  4072c7:	50                   	push   eax
  4072c8:	ff 15 f0 00 41 00    	call   DWORD PTR ds:0x4100f0
  4072ce:	4e                   	dec    esi
  4072cf:	79 e5                	jns    0x4072b6
  4072d1:	5f                   	pop    edi
  4072d2:	5e                   	pop    esi
  4072d3:	5d                   	pop    ebp
  4072d4:	5b                   	pop    ebx
  4072d5:	81 c4 18 0b 00 00    	add    esp,0xb18
  4072db:	c3                   	ret
  4072dc:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  4072e0:	80 38 20             	cmp    BYTE PTR [eax],0x20
  4072e3:	75 03                	jne    0x4072e8
  4072e5:	40                   	inc    eax
  4072e6:	eb f8                	jmp    0x4072e0
  4072e8:	8a 08                	mov    cl,BYTE PTR [eax]
  4072ea:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  4072ee:	56                   	push   esi
  4072ef:	33 f6                	xor    esi,esi
  4072f1:	84 c9                	test   cl,cl
  4072f3:	74 23                	je     0x407318
  4072f5:	80 f9 7c             	cmp    cl,0x7c
  4072f8:	74 17                	je     0x407311
  4072fa:	88 0a                	mov    BYTE PTR [edx],cl
  4072fc:	80 e9 20             	sub    cl,0x20
  4072ff:	f6 d9                	neg    cl
  407301:	1b c9                	sbb    ecx,ecx
  407303:	f7 d1                	not    ecx
  407305:	23 ca                	and    ecx,edx
  407307:	42                   	inc    edx
  407308:	40                   	inc    eax
  407309:	8b f1                	mov    esi,ecx
  40730b:	8a 08                	mov    cl,BYTE PTR [eax]
  40730d:	84 c9                	test   cl,cl
  40730f:	75 e4                	jne    0x4072f5
  407311:	85 f6                	test   esi,esi
  407313:	74 03                	je     0x407318
  407315:	80 26 00             	and    BYTE PTR [esi],0x0
  407318:	80 22 00             	and    BYTE PTR [edx],0x0
  40731b:	80 38 7c             	cmp    BYTE PTR [eax],0x7c
  40731e:	5e                   	pop    esi
  40731f:	75 01                	jne    0x407322
  407321:	40                   	inc    eax
  407322:	c3                   	ret
  407323:	55                   	push   ebp
  407324:	8b ec                	mov    ebp,esp
  407326:	81 ec 18 04 00 00    	sub    esp,0x418
  40732c:	53                   	push   ebx
  40732d:	33 db                	xor    ebx,ebx
  40732f:	53                   	push   ebx
  407330:	ff 15 60 03 41 00    	call   DWORD PTR ds:0x410360
  407336:	85 c0                	test   eax,eax
  407338:	0f 85 75 01 00 00    	jne    0x4074b3
  40733e:	8d 45 fc             	lea    eax,[ebp-0x4]
  407341:	50                   	push   eax
  407342:	68 f8 04 41 00       	push   0x4104f8
  407347:	6a 01                	push   0x1
  407349:	53                   	push   ebx
  40734a:	68 78 03 41 00       	push   0x410378
  40734f:	ff 15 5c 03 41 00    	call   DWORD PTR ds:0x41035c
  407355:	85 c0                	test   eax,eax
  407357:	0f 85 50 01 00 00    	jne    0x4074ad
  40735d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  407360:	8d 55 f8             	lea    edx,[ebp-0x8]
  407363:	52                   	push   edx
  407364:	68 d8 07 41 00       	push   0x4107d8
  407369:	8b 08                	mov    ecx,DWORD PTR [eax]
  40736b:	50                   	push   eax
  40736c:	ff 11                	call   DWORD PTR [ecx]
  40736e:	85 c0                	test   eax,eax
  407370:	0f 85 2e 01 00 00    	jne    0x4074a4
  407376:	56                   	push   esi
  407377:	8d 85 e8 fb ff ff    	lea    eax,[ebp-0x418]
  40737d:	68 04 01 00 00       	push   0x104
  407382:	50                   	push   eax
  407383:	6a ff                	push   0xffffffff
  407385:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  407388:	53                   	push   ebx
  407389:	53                   	push   ebx
  40738a:	ff 15 3c 01 41 00    	call   DWORD PTR ds:0x41013c
  407390:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  407393:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  407399:	50                   	push   eax
  40739a:	e8 3d ff ff ff       	call   0x4072dc
  40739f:	59                   	pop    ecx
  4073a0:	8b f0                	mov    esi,eax
  4073a2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4073a5:	59                   	pop    ecx
  4073a6:	8d 95 f0 fd ff ff    	lea    edx,[ebp-0x210]
  4073ac:	8b 08                	mov    ecx,DWORD PTR [eax]
  4073ae:	52                   	push   edx
  4073af:	50                   	push   eax
  4073b0:	ff 51 50             	call   DWORD PTR [ecx+0x50]
  4073b3:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  4073b9:	56                   	push   esi
  4073ba:	50                   	push   eax
  4073bb:	e8 1c ff ff ff       	call   0x4072dc
  4073c0:	59                   	pop    ecx
  4073c1:	8b f0                	mov    esi,eax
  4073c3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4073c6:	59                   	pop    ecx
  4073c7:	8d 95 f0 fd ff ff    	lea    edx,[ebp-0x210]
  4073cd:	8b 08                	mov    ecx,DWORD PTR [eax]
  4073cf:	52                   	push   edx
  4073d0:	50                   	push   eax
  4073d1:	ff 51 24             	call   DWORD PTR [ecx+0x24]
  4073d4:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  4073da:	56                   	push   esi
  4073db:	50                   	push   eax
  4073dc:	e8 fb fe ff ff       	call   0x4072dc
  4073e1:	8b f0                	mov    esi,eax
  4073e3:	56                   	push   esi
  4073e4:	e8 95 4f 00 00       	call   0x40c37e
  4073e9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4073ec:	83 c4 0c             	add    esp,0xc
  4073ef:	8b 11                	mov    edx,DWORD PTR [ecx]
  4073f1:	50                   	push   eax
  4073f2:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  4073f8:	50                   	push   eax
  4073f9:	51                   	push   ecx
  4073fa:	ff 52 44             	call   DWORD PTR [edx+0x44]
  4073fd:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  407403:	56                   	push   esi
  407404:	50                   	push   eax
  407405:	e8 d2 fe ff ff       	call   0x4072dc
  40740a:	50                   	push   eax
  40740b:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  407411:	50                   	push   eax
  407412:	e8 c5 fe ff ff       	call   0x4072dc
  407417:	8b f0                	mov    esi,eax
  407419:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  40741f:	50                   	push   eax
  407420:	e8 59 4f 00 00       	call   0x40c37e
  407425:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  407428:	83 c4 14             	add    esp,0x14
  40742b:	83 e0 07             	and    eax,0x7
  40742e:	8b 11                	mov    edx,DWORD PTR [ecx]
  407430:	50                   	push   eax
  407431:	51                   	push   ecx
  407432:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
  407435:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  40743b:	56                   	push   esi
  40743c:	50                   	push   eax
  40743d:	e8 9a fe ff ff       	call   0x4072dc
  407442:	8b f0                	mov    esi,eax
  407444:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  40744a:	50                   	push   eax
  40744b:	e8 2e 4f 00 00       	call   0x40c37e
  407450:	83 c4 0c             	add    esp,0xc
  407453:	3a c3                	cmp    al,bl
  407455:	74 0a                	je     0x407461
  407457:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40745a:	50                   	push   eax
  40745b:	51                   	push   ecx
  40745c:	8b 11                	mov    edx,DWORD PTR [ecx]
  40745e:	ff 52 34             	call   DWORD PTR [edx+0x34]
  407461:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  407467:	56                   	push   esi
  407468:	50                   	push   eax
  407469:	e8 6e fe ff ff       	call   0x4072dc
  40746e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  407471:	59                   	pop    ecx
  407472:	59                   	pop    ecx
  407473:	8d 95 f0 fd ff ff    	lea    edx,[ebp-0x210]
  407479:	8b 08                	mov    ecx,DWORD PTR [eax]
  40747b:	52                   	push   edx
  40747c:	50                   	push   eax
  40747d:	ff 51 2c             	call   DWORD PTR [ecx+0x2c]
  407480:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  407483:	e8 7b 49 00 00       	call   0x40be03
  407488:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  40748b:	59                   	pop    ecx
  40748c:	8d 95 e8 fb ff ff    	lea    edx,[ebp-0x418]
  407492:	53                   	push   ebx
  407493:	8b 08                	mov    ecx,DWORD PTR [eax]
  407495:	52                   	push   edx
  407496:	50                   	push   eax
  407497:	ff 51 18             	call   DWORD PTR [ecx+0x18]
  40749a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  40749d:	50                   	push   eax
  40749e:	8b 08                	mov    ecx,DWORD PTR [eax]
  4074a0:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  4074a3:	5e                   	pop    esi
  4074a4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4074a7:	50                   	push   eax
  4074a8:	8b 08                	mov    ecx,DWORD PTR [eax]
  4074aa:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  4074ad:	ff 15 58 03 41 00    	call   DWORD PTR ds:0x410358
  4074b3:	5b                   	pop    ebx
  4074b4:	c9                   	leave
  4074b5:	c3                   	ret
  4074b6:	55                   	push   ebp
  4074b7:	8b ec                	mov    ebp,esp
  4074b9:	81 ec ac 05 00 00    	sub    esp,0x5ac
  4074bf:	56                   	push   esi
  4074c0:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  4074c3:	56                   	push   esi
  4074c4:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4074ca:	83 f8 15             	cmp    eax,0x15
  4074cd:	7d 07                	jge    0x4074d6
  4074cf:	33 c0                	xor    eax,eax
  4074d1:	e9 be 05 00 00       	jmp    0x407a94
  4074d6:	83 65 f4 00          	and    DWORD PTR [ebp-0xc],0x0
  4074da:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
  4074de:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  4074e5:	7e 0f                	jle    0x4074f6
  4074e7:	0f be 06             	movsx  eax,BYTE PTR [esi]
  4074ea:	6a 08                	push   0x8
  4074ec:	50                   	push   eax
  4074ed:	e8 8c 4d 00 00       	call   0x40c27e
  4074f2:	59                   	pop    ecx
  4074f3:	59                   	pop    ecx
  4074f4:	eb 0f                	jmp    0x407505
  4074f6:	0f be 06             	movsx  eax,BYTE PTR [esi]
  4074f9:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  4074ff:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
  407502:	83 e0 08             	and    eax,0x8
  407505:	85 c0                	test   eax,eax
  407507:	74 03                	je     0x40750c
  407509:	46                   	inc    esi
  40750a:	eb d2                	jmp    0x4074de
  40750c:	53                   	push   ebx
  40750d:	8d 46 06             	lea    eax,[esi+0x6]
  407510:	57                   	push   edi
  407511:	50                   	push   eax
  407512:	e8 67 4e 00 00       	call   0x40c37e
  407517:	8b f8                	mov    edi,eax
  407519:	8d 46 03             	lea    eax,[esi+0x3]
  40751c:	50                   	push   eax
  40751d:	81 ef bc 07 00 00    	sub    edi,0x7bc
  407523:	e8 56 4e 00 00       	call   0x40c37e
  407528:	8b d8                	mov    ebx,eax
  40752a:	56                   	push   esi
  40752b:	83 e3 1f             	and    ebx,0x1f
  40752e:	e8 4b 4e 00 00       	call   0x40c37e
  407533:	83 e0 0f             	and    eax,0xf
  407536:	c1 e7 04             	shl    edi,0x4
  407539:	0b c7                	or     eax,edi
  40753b:	c1 e0 05             	shl    eax,0x5
  40753e:	0b d8                	or     ebx,eax
  407540:	8d 46 10             	lea    eax,[esi+0x10]
  407543:	50                   	push   eax
  407544:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
  407547:	e8 32 4e 00 00       	call   0x40c37e
  40754c:	8b f8                	mov    edi,eax
  40754e:	8d 46 0d             	lea    eax,[esi+0xd]
  407551:	50                   	push   eax
  407552:	83 e7 3f             	and    edi,0x3f
  407555:	e8 24 4e 00 00       	call   0x40c37e
  40755a:	c1 e0 06             	shl    eax,0x6
  40755d:	0b f8                	or     edi,eax
  40755f:	8d 46 13             	lea    eax,[esi+0x13]
  407562:	50                   	push   eax
  407563:	c1 e7 05             	shl    edi,0x5
  407566:	e8 13 4e 00 00       	call   0x40c37e
  40756b:	99                   	cdq
  40756c:	2b c2                	sub    eax,edx
  40756e:	83 c4 18             	add    esp,0x18
  407571:	d1 f8                	sar    eax,1
  407573:	83 e0 1f             	and    eax,0x1f
  407576:	0b f8                	or     edi,eax
  407578:	89 7d e8             	mov    DWORD PTR [ebp-0x18],edi
  40757b:	8a 06                	mov    al,BYTE PTR [esi]
  40757d:	84 c0                	test   al,al
  40757f:	74 07                	je     0x407588
  407581:	3c 7c                	cmp    al,0x7c
  407583:	74 03                	je     0x407588
  407585:	46                   	inc    esi
  407586:	eb f3                	jmp    0x40757b
  407588:	80 3e 00             	cmp    BYTE PTR [esi],0x0
  40758b:	74 01                	je     0x40758e
  40758d:	46                   	inc    esi
  40758e:	8a 06                	mov    al,BYTE PTR [esi]
  407590:	84 c0                	test   al,al
  407592:	74 04                	je     0x407598
  407594:	3c 7c                	cmp    al,0x7c
  407596:	75 f5                	jne    0x40758d
  407598:	80 3e 00             	cmp    BYTE PTR [esi],0x0
  40759b:	74 01                	je     0x40759e
  40759d:	46                   	inc    esi
  40759e:	6a 01                	push   0x1
  4075a0:	5f                   	pop    edi
  4075a1:	6a 08                	push   0x8
  4075a3:	5b                   	pop    ebx
  4075a4:	39 3d 1c 31 41 00    	cmp    DWORD PTR ds:0x41311c,edi
  4075aa:	7e 0e                	jle    0x4075ba
  4075ac:	0f be 06             	movsx  eax,BYTE PTR [esi]
  4075af:	53                   	push   ebx
  4075b0:	50                   	push   eax
  4075b1:	e8 c8 4c 00 00       	call   0x40c27e
  4075b6:	59                   	pop    ecx
  4075b7:	59                   	pop    ecx
  4075b8:	eb 0e                	jmp    0x4075c8
  4075ba:	0f be 06             	movsx  eax,BYTE PTR [esi]
  4075bd:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  4075c3:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
  4075c6:	23 c3                	and    eax,ebx
  4075c8:	85 c0                	test   eax,eax
  4075ca:	74 03                	je     0x4075cf
  4075cc:	46                   	inc    esi
  4075cd:	eb d5                	jmp    0x4075a4
  4075cf:	8a 06                	mov    al,BYTE PTR [esi]
  4075d1:	84 c0                	test   al,al
  4075d3:	74 07                	je     0x4075dc
  4075d5:	3c 7c                	cmp    al,0x7c
  4075d7:	74 03                	je     0x4075dc
  4075d9:	46                   	inc    esi
  4075da:	eb f3                	jmp    0x4075cf
  4075dc:	80 3e 00             	cmp    BYTE PTR [esi],0x0
  4075df:	74 01                	je     0x4075e2
  4075e1:	46                   	inc    esi
  4075e2:	56                   	push   esi
  4075e3:	e8 0b 4d 00 00       	call   0x40c2f3
  4075e8:	59                   	pop    ecx
  4075e9:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  4075ec:	8a 06                	mov    al,BYTE PTR [esi]
  4075ee:	84 c0                	test   al,al
  4075f0:	74 07                	je     0x4075f9
  4075f2:	3c 7c                	cmp    al,0x7c
  4075f4:	74 03                	je     0x4075f9
  4075f6:	46                   	inc    esi
  4075f7:	eb f3                	jmp    0x4075ec
  4075f9:	80 3e 00             	cmp    BYTE PTR [esi],0x0
  4075fc:	74 01                	je     0x4075ff
  4075fe:	46                   	inc    esi
  4075ff:	39 3d 1c 31 41 00    	cmp    DWORD PTR ds:0x41311c,edi
  407605:	7e 0e                	jle    0x407615
  407607:	0f be 06             	movsx  eax,BYTE PTR [esi]
  40760a:	53                   	push   ebx
  40760b:	50                   	push   eax
  40760c:	e8 6d 4c 00 00       	call   0x40c27e
  407611:	59                   	pop    ecx
  407612:	59                   	pop    ecx
  407613:	eb 0e                	jmp    0x407623
  407615:	0f be 06             	movsx  eax,BYTE PTR [esi]
  407618:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  40761e:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
  407621:	23 c3                	and    eax,ebx
  407623:	85 c0                	test   eax,eax
  407625:	75 d7                	jne    0x4075fe
  407627:	21 45 ec             	and    DWORD PTR [ebp-0x14],eax
  40762a:	bb 07 01 00 00       	mov    ebx,0x107
  40762f:	39 3d 1c 31 41 00    	cmp    DWORD PTR ds:0x41311c,edi
  407635:	7e 0e                	jle    0x407645
  407637:	0f be 06             	movsx  eax,BYTE PTR [esi]
  40763a:	53                   	push   ebx
  40763b:	50                   	push   eax
  40763c:	e8 3d 4c 00 00       	call   0x40c27e
  407641:	59                   	pop    ecx
  407642:	59                   	pop    ecx
  407643:	eb 0f                	jmp    0x407654
  407645:	0f be 06             	movsx  eax,BYTE PTR [esi]
  407648:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  40764e:	66 8b 04 41          	mov    ax,WORD PTR [ecx+eax*2]
  407652:	23 c3                	and    eax,ebx
  407654:	85 c0                	test   eax,eax
  407656:	74 43                	je     0x40769b
  407658:	39 3d 1c 31 41 00    	cmp    DWORD PTR ds:0x41311c,edi
  40765e:	7e 0f                	jle    0x40766f
  407660:	0f be 06             	movsx  eax,BYTE PTR [esi]
  407663:	6a 04                	push   0x4
  407665:	50                   	push   eax
  407666:	e8 13 4c 00 00       	call   0x40c27e
  40766b:	59                   	pop    ecx
  40766c:	59                   	pop    ecx
  40766d:	eb 0f                	jmp    0x40767e
  40766f:	0f be 06             	movsx  eax,BYTE PTR [esi]
  407672:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  407678:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
  40767b:	83 e0 04             	and    eax,0x4
  40767e:	85 c0                	test   eax,eax
  407680:	0f be 06             	movsx  eax,BYTE PTR [esi]
  407683:	74 05                	je     0x40768a
  407685:	83 e8 30             	sub    eax,0x30
  407688:	eb 03                	jmp    0x40768d
  40768a:	83 e8 57             	sub    eax,0x57
  40768d:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  407690:	c1 e1 04             	shl    ecx,0x4
  407693:	0b c8                	or     ecx,eax
  407695:	46                   	inc    esi
  407696:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  407699:	eb 94                	jmp    0x40762f
  40769b:	6a 00                	push   0x0
  40769d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4076a0:	e8 8e 32 00 00       	call   0x40a933
  4076a5:	59                   	pop    ecx
  4076a6:	85 c0                	test   eax,eax
  4076a8:	59                   	pop    ecx
  4076a9:	0f 85 73 02 00 00    	jne    0x407922
  4076af:	33 f6                	xor    esi,esi
  4076b1:	56                   	push   esi
  4076b2:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4076b5:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  4076bb:	8b d8                	mov    ebx,eax
  4076bd:	83 fb ff             	cmp    ebx,0xffffffff
  4076c0:	0f 84 d6 00 00 00    	je     0x40779c
  4076c6:	8d 45 d4             	lea    eax,[ebp-0x2c]
  4076c9:	50                   	push   eax
  4076ca:	56                   	push   esi
  4076cb:	56                   	push   esi
  4076cc:	53                   	push   ebx
  4076cd:	ff 15 40 01 41 00    	call   DWORD PTR ds:0x410140
  4076d3:	8d 45 dc             	lea    eax,[ebp-0x24]
  4076d6:	50                   	push   eax
  4076d7:	8d 45 d4             	lea    eax,[ebp-0x2c]
  4076da:	50                   	push   eax
  4076db:	ff 15 38 01 41 00    	call   DWORD PTR ds:0x410138
  4076e1:	8d 45 fa             	lea    eax,[ebp-0x6]
  4076e4:	50                   	push   eax
  4076e5:	8d 45 f8             	lea    eax,[ebp-0x8]
  4076e8:	50                   	push   eax
  4076e9:	8d 45 dc             	lea    eax,[ebp-0x24]
  4076ec:	50                   	push   eax
  4076ed:	ff 15 48 01 41 00    	call   DWORD PTR ds:0x410148
  4076f3:	66 8b 45 f8          	mov    ax,WORD PTR [ebp-0x8]
  4076f7:	66 39 45 f0          	cmp    WORD PTR [ebp-0x10],ax
  4076fb:	73 09                	jae    0x407706
  4076fd:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
  407704:	eb 15                	jmp    0x40771b
  407706:	77 0c                	ja     0x407714
  407708:	66 8b 45 fa          	mov    ax,WORD PTR [ebp-0x6]
  40770c:	66 39 45 e8          	cmp    WORD PTR [ebp-0x18],ax
  407710:	72 eb                	jb     0x4076fd
  407712:	76 07                	jbe    0x40771b
  407714:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  40771b:	6a 02                	push   0x2
  40771d:	56                   	push   esi
  40771e:	53                   	push   ebx
  40771f:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  407725:	39 75 f4             	cmp    DWORD PTR [ebp-0xc],esi
  407728:	75 69                	jne    0x407793
  40772a:	39 45 e4             	cmp    DWORD PTR [ebp-0x1c],eax
  40772d:	74 07                	je     0x407736
  40772f:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  407736:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
  40773a:	75 57                	jne    0x407793
  40773c:	33 f6                	xor    esi,esi
  40773e:	56                   	push   esi
  40773f:	56                   	push   esi
  407740:	e8 08 46 00 00       	call   0x40bd4d
  407745:	59                   	pop    ecx
  407746:	59                   	pop    ecx
  407747:	56                   	push   esi
  407748:	56                   	push   esi
  407749:	53                   	push   ebx
  40774a:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  407750:	8b 35 44 01 41 00    	mov    esi,DWORD PTR ds:0x410144
  407756:	bf 00 40 00 00       	mov    edi,0x4000
  40775b:	57                   	push   edi
  40775c:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  407762:	53                   	push   ebx
  407763:	ff d6                	call   esi
  407765:	85 c0                	test   eax,eax
  407767:	7e 1b                	jle    0x407784
  407769:	50                   	push   eax
  40776a:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  407770:	e8 d8 45 00 00       	call   0x40bd4d
  407775:	59                   	pop    ecx
  407776:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  407779:	59                   	pop    ecx
  40777a:	57                   	push   edi
  40777b:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  407781:	53                   	push   ebx
  407782:	eb df                	jmp    0x407763
  407784:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  407787:	3b 45 ec             	cmp    eax,DWORD PTR [ebp-0x14]
  40778a:	74 07                	je     0x407793
  40778c:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  407793:	53                   	push   ebx
  407794:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  40779a:	eb 07                	jmp    0x4077a3
  40779c:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  4077a3:	33 ff                	xor    edi,edi
  4077a5:	39 7d f4             	cmp    DWORD PTR [ebp-0xc],edi
  4077a8:	0f 84 6b 01 00 00    	je     0x407919
  4077ae:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  4077b1:	8d 45 94             	lea    eax,[ebp-0x6c]
  4077b4:	8a 11                	mov    dl,BYTE PTR [ecx]
  4077b6:	84 d2                	test   dl,dl
  4077b8:	74 0b                	je     0x4077c5
  4077ba:	80 fa 7c             	cmp    dl,0x7c
  4077bd:	74 06                	je     0x4077c5
  4077bf:	88 10                	mov    BYTE PTR [eax],dl
  4077c1:	41                   	inc    ecx
  4077c2:	40                   	inc    eax
  4077c3:	eb ef                	jmp    0x4077b4
  4077c5:	41                   	inc    ecx
  4077c6:	8a 11                	mov    dl,BYTE PTR [ecx]
  4077c8:	84 d2                	test   dl,dl
  4077ca:	74 0b                	je     0x4077d7
  4077cc:	80 fa 7c             	cmp    dl,0x7c
  4077cf:	74 06                	je     0x4077d7
  4077d1:	88 10                	mov    BYTE PTR [eax],dl
  4077d3:	41                   	inc    ecx
  4077d4:	40                   	inc    eax
  4077d5:	eb ef                	jmp    0x4077c6
  4077d7:	0f b7 4d f8          	movzx  ecx,WORD PTR [ebp-0x8]
  4077db:	80 20 00             	and    BYTE PTR [eax],0x0
  4077de:	8b c1                	mov    eax,ecx
  4077e0:	c1 e8 09             	shr    eax,0x9
  4077e3:	83 c0 50             	add    eax,0x50
  4077e6:	6a 64                	push   0x64
  4077e8:	99                   	cdq
  4077e9:	5e                   	pop    esi
  4077ea:	f7 fe                	idiv   esi
  4077ec:	66 83 fa 3c          	cmp    dx,0x3c
  4077f0:	73 08                	jae    0x4077fa
  4077f2:	81 c2 d0 07 00 00    	add    edx,0x7d0
  4077f8:	eb 06                	jmp    0x407800
  4077fa:	81 c2 6c 07 00 00    	add    edx,0x76c
  407800:	0f b7 45 fa          	movzx  eax,WORD PTR [ebp-0x6]
  407804:	8b f0                	mov    esi,eax
  407806:	83 e6 1f             	and    esi,0x1f
  407809:	d1 e6                	shl    esi,1
  40780b:	56                   	push   esi
  40780c:	8b f0                	mov    esi,eax
  40780e:	c1 ee 05             	shr    esi,0x5
  407811:	83 e6 3f             	and    esi,0x3f
  407814:	c1 e8 0b             	shr    eax,0xb
  407817:	56                   	push   esi
  407818:	50                   	push   eax
  407819:	0f b7 c2             	movzx  eax,dx
  40781c:	50                   	push   eax
  40781d:	8b 35 9c 02 41 00    	mov    esi,DWORD PTR ds:0x41029c
  407823:	8b c1                	mov    eax,ecx
  407825:	c1 e9 05             	shr    ecx,0x5
  407828:	83 e0 1f             	and    eax,0x1f
  40782b:	83 e1 0f             	and    ecx,0xf
  40782e:	50                   	push   eax
  40782f:	51                   	push   ecx
  407830:	8d 85 54 ff ff ff    	lea    eax,[ebp-0xac]
  407836:	68 74 25 41 00       	push   0x412574
  40783b:	50                   	push   eax
  40783c:	ff d6                	call   esi
  40783e:	8d 85 54 fa ff ff    	lea    eax,[ebp-0x5ac]
  407844:	68 00 04 00 00       	push   0x400
  407849:	50                   	push   eax
  40784a:	6a 4d                	push   0x4d
  40784c:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  407852:	e8 46 33 00 00       	call   0x40ab9d
  407857:	8d 85 54 ff ff ff    	lea    eax,[ebp-0xac]
  40785d:	50                   	push   eax
  40785e:	8d 45 94             	lea    eax,[ebp-0x6c]
  407861:	50                   	push   eax
  407862:	8d 85 54 fa ff ff    	lea    eax,[ebp-0x5ac]
  407868:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40786b:	50                   	push   eax
  40786c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  407872:	ff d6                	call   esi
  407874:	83 c4 44             	add    esp,0x44
  407877:	39 3d 0c 37 41 00    	cmp    DWORD PTR ds:0x41370c,edi
  40787d:	bb ed 03 00 00       	mov    ebx,0x3ed
  407882:	0f 85 85 00 00 00    	jne    0x40790d
  407888:	39 3d 90 3b 41 00    	cmp    DWORD PTR ds:0x413b90,edi
  40788e:	0f 85 82 00 00 00    	jne    0x407916
  407894:	39 3d 30 37 41 00    	cmp    DWORD PTR ds:0x413730,edi
  40789a:	0f 85 82 00 00 00    	jne    0x407922
  4078a0:	33 ff                	xor    edi,edi
  4078a2:	39 3d 8c 3a 41 00    	cmp    DWORD PTR ds:0x413a8c,edi
  4078a8:	74 0e                	je     0x4078b8
  4078aa:	6a 19                	push   0x19
  4078ac:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4078b2:	ff 15 3c 03 41 00    	call   DWORD PTR ds:0x41033c
  4078b8:	57                   	push   edi
  4078b9:	68 58 25 40 00       	push   0x402558
  4078be:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4078c4:	6a 68                	push   0x68
  4078c6:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  4078cc:	ff 15 34 03 41 00    	call   DWORD PTR ds:0x410334
  4078d2:	39 3d 8c 3a 41 00    	cmp    DWORD PTR ds:0x413a8c,edi
  4078d8:	8b f0                	mov    esi,eax
  4078da:	74 14                	je     0x4078f0
  4078dc:	57                   	push   edi
  4078dd:	68 96 00 00 00       	push   0x96
  4078e2:	6a 19                	push   0x19
  4078e4:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4078ea:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  4078f0:	6a 01                	push   0x1
  4078f2:	58                   	pop    eax
  4078f3:	3b f0                	cmp    esi,eax
  4078f5:	75 05                	jne    0x4078fc
  4078f7:	a3 90 3b 41 00       	mov    ds:0x413b90,eax
  4078fc:	81 fe ef 03 00 00    	cmp    esi,0x3ef
  407902:	75 0c                	jne    0x407910
  407904:	8b f3                	mov    esi,ebx
  407906:	a3 30 37 41 00       	mov    ds:0x413730,eax
  40790b:	eb 03                	jmp    0x407910
  40790d:	6a 07                	push   0x7
  40790f:	5e                   	pop    esi
  407910:	3b f3                	cmp    esi,ebx
  407912:	74 0e                	je     0x407922
  407914:	33 ff                	xor    edi,edi
  407916:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  407919:	39 7d fc             	cmp    DWORD PTR [ebp-0x4],edi
  40791c:	0f 84 6e 01 00 00    	je     0x407a90
  407922:	0f b7 75 10          	movzx  esi,WORD PTR [ebp+0x10]
  407926:	a1 ac 37 41 00       	mov    eax,ds:0x4137ac
  40792b:	33 db                	xor    ebx,ebx
  40792d:	c1 e6 02             	shl    esi,0x2
  407930:	39 1c 06             	cmp    DWORD PTR [esi+eax*1],ebx
  407933:	0f 85 af 00 00 00    	jne    0x4079e8
  407939:	33 ff                	xor    edi,edi
  40793b:	8b 0d a4 36 41 00    	mov    ecx,DWORD PTR ds:0x4136a4
  407941:	0f b7 c7             	movzx  eax,di
  407944:	c1 e0 02             	shl    eax,0x2
  407947:	8b 0c 08             	mov    ecx,DWORD PTR [eax+ecx*1]
  40794a:	3b cb                	cmp    ecx,ebx
  40794c:	74 1e                	je     0x40796c
  40794e:	8b 15 ac 37 41 00    	mov    edx,DWORD PTR ds:0x4137ac
  407954:	39 1c 10             	cmp    DWORD PTR [eax+edx*1],ebx
  407957:	74 13                	je     0x40796c
  407959:	a1 a4 36 41 00       	mov    eax,ds:0x4136a4
  40795e:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  407961:	51                   	push   ecx
  407962:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  407968:	85 c0                	test   eax,eax
  40796a:	74 0c                	je     0x407978
  40796c:	47                   	inc    edi
  40796d:	66 3b 3d 94 3b 41 00 	cmp    di,WORD PTR ds:0x413b94
  407974:	76 c5                	jbe    0x40793b
  407976:	eb 0e                	jmp    0x407986
  407978:	a1 ac 37 41 00       	mov    eax,ds:0x4137ac
  40797d:	0f b7 cf             	movzx  ecx,di
  407980:	8b 0c 88             	mov    ecx,DWORD PTR [eax+ecx*4]
  407983:	89 0c 06             	mov    DWORD PTR [esi+eax*1],ecx
  407986:	66 3b 3d 94 3b 41 00 	cmp    di,WORD PTR ds:0x413b94
  40798d:	76 59                	jbe    0x4079e8
  40798f:	bf 00 01 00 00       	mov    edi,0x100
  407994:	57                   	push   edi
  407995:	e8 d7 3c 00 00       	call   0x40b671
  40799a:	59                   	pop    ecx
  40799b:	8b 0d ac 37 41 00    	mov    ecx,DWORD PTR ds:0x4137ac
  4079a1:	89 04 0e             	mov    DWORD PTR [esi+ecx*1],eax
  4079a4:	8d 85 54 fe ff ff    	lea    eax,[ebp-0x1ac]
  4079aa:	50                   	push   eax
  4079ab:	57                   	push   edi
  4079ac:	ff 15 78 01 41 00    	call   DWORD PTR ds:0x410178
  4079b2:	a1 ac 37 41 00       	mov    eax,ds:0x4137ac
  4079b7:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  4079ba:	8d 85 54 fe ff ff    	lea    eax,[ebp-0x1ac]
  4079c0:	53                   	push   ebx
  4079c1:	68 70 25 41 00       	push   0x412570
  4079c6:	50                   	push   eax
  4079c7:	ff 15 7c 01 41 00    	call   DWORD PTR ds:0x41017c
  4079cd:	a1 ac 37 41 00       	mov    eax,ds:0x4137ac
  4079d2:	53                   	push   ebx
  4079d3:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  4079d6:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  4079dc:	83 f8 ff             	cmp    eax,0xffffffff
  4079df:	74 07                	je     0x4079e8
  4079e1:	50                   	push   eax
  4079e2:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  4079e8:	a1 ac 37 41 00       	mov    eax,ds:0x4137ac
  4079ed:	8b 34 06             	mov    esi,DWORD PTR [esi+eax*1]
  4079f0:	3b f3                	cmp    esi,ebx
  4079f2:	0f 84 98 00 00 00    	je     0x407a90
  4079f8:	6a 01                	push   0x1
  4079fa:	56                   	push   esi
  4079fb:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  407a01:	8b f8                	mov    edi,eax
  407a03:	83 ff ff             	cmp    edi,0xffffffff
  407a06:	0f 84 84 00 00 00    	je     0x407a90
  407a0c:	6a 02                	push   0x2
  407a0e:	53                   	push   ebx
  407a0f:	57                   	push   edi
  407a10:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  407a16:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  407a19:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  407a1f:	ff d3                	call   ebx
  407a21:	8b 35 18 01 41 00    	mov    esi,DWORD PTR ds:0x410118
  407a27:	50                   	push   eax
  407a28:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  407a2b:	57                   	push   edi
  407a2c:	ff d6                	call   esi
  407a2e:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  407a31:	6a 03                	push   0x3
  407a33:	5a                   	pop    edx
  407a34:	8a 08                	mov    cl,BYTE PTR [eax]
  407a36:	84 c9                	test   cl,cl
  407a38:	74 08                	je     0x407a42
  407a3a:	80 f9 7c             	cmp    cl,0x7c
  407a3d:	74 03                	je     0x407a42
  407a3f:	40                   	inc    eax
  407a40:	eb f2                	jmp    0x407a34
  407a42:	80 38 00             	cmp    BYTE PTR [eax],0x0
  407a45:	74 01                	je     0x407a48
  407a47:	40                   	inc    eax
  407a48:	4a                   	dec    edx
  407a49:	75 e9                	jne    0x407a34
  407a4b:	50                   	push   eax
  407a4c:	0f b7 45 e8          	movzx  eax,WORD PTR [ebp-0x18]
  407a50:	50                   	push   eax
  407a51:	0f b7 45 f0          	movzx  eax,WORD PTR [ebp-0x10]
  407a55:	50                   	push   eax
  407a56:	8d 85 54 fe ff ff    	lea    eax,[ebp-0x1ac]
  407a5c:	68 64 25 41 00       	push   0x412564
  407a61:	50                   	push   eax
  407a62:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  407a68:	83 c4 14             	add    esp,0x14
  407a6b:	8d 85 54 fe ff ff    	lea    eax,[ebp-0x1ac]
  407a71:	50                   	push   eax
  407a72:	ff d3                	call   ebx
  407a74:	50                   	push   eax
  407a75:	8d 85 54 fe ff ff    	lea    eax,[ebp-0x1ac]
  407a7b:	50                   	push   eax
  407a7c:	57                   	push   edi
  407a7d:	ff d6                	call   esi
  407a7f:	57                   	push   edi
  407a80:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  407a86:	c7 05 94 3a 41 00 01 	mov    DWORD PTR ds:0x413a94,0x1
  407a8d:	00 00 00 
  407a90:	5f                   	pop    edi
  407a91:	33 c0                	xor    eax,eax
  407a93:	5b                   	pop    ebx
  407a94:	5e                   	pop    esi
  407a95:	c9                   	leave
  407a96:	c3                   	ret
  407a97:	55                   	push   ebp
  407a98:	8b ec                	mov    ebp,esp
  407a9a:	56                   	push   esi
  407a9b:	33 f6                	xor    esi,esi
  407a9d:	39 35 b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,esi
  407aa3:	0f 84 69 01 00 00    	je     0x407c12
  407aa9:	39 75 1c             	cmp    DWORD PTR [ebp+0x1c],esi
  407aac:	74 23                	je     0x407ad1
  407aae:	8d 45 08             	lea    eax,[ebp+0x8]
  407ab1:	50                   	push   eax
  407ab2:	8d 45 1c             	lea    eax,[ebp+0x1c]
  407ab5:	50                   	push   eax
  407ab6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  407ab9:	56                   	push   esi
  407aba:	6a 06                	push   0x6
  407abc:	56                   	push   esi
  407abd:	56                   	push   esi
  407abe:	56                   	push   esi
  407abf:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  407ac2:	ff 34 85 30 20 41 00 	push   DWORD PTR [eax*4+0x412030]
  407ac9:	ff 15 20 00 41 00    	call   DWORD PTR ds:0x410020
  407acf:	eb 1a                	jmp    0x407aeb
  407ad1:	8d 45 1c             	lea    eax,[ebp+0x1c]
  407ad4:	50                   	push   eax
  407ad5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  407ad8:	6a 1f                	push   0x1f
  407ada:	56                   	push   esi
  407adb:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  407ade:	ff 34 85 30 20 41 00 	push   DWORD PTR [eax*4+0x412030]
  407ae5:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  407aeb:	3b c6                	cmp    eax,esi
  407aed:	0f 85 40 01 00 00    	jne    0x407c33
  407af3:	8b 75 18             	mov    esi,DWORD PTR [ebp+0x18]
  407af6:	53                   	push   ebx
  407af7:	57                   	push   edi
  407af8:	8b 3d 70 01 41 00    	mov    edi,DWORD PTR ds:0x410170
  407afe:	56                   	push   esi
  407aff:	ff d7                	call   edi
  407b01:	8b d8                	mov    ebx,eax
  407b03:	43                   	inc    ebx
  407b04:	83 7d 0c 03          	cmp    DWORD PTR [ebp+0xc],0x3
  407b08:	75 0e                	jne    0x407b18
  407b0a:	56                   	push   esi
  407b0b:	e8 e3 47 00 00       	call   0x40c2f3
  407b10:	59                   	pop    ecx
  407b11:	89 06                	mov    DWORD PTR [esi],eax
  407b13:	6a 04                	push   0x4
  407b15:	5b                   	pop    ebx
  407b16:	eb 27                	jmp    0x407b3f
  407b18:	83 7d 0c 02          	cmp    DWORD PTR [ebp+0xc],0x2
  407b1c:	75 4b                	jne    0x407b69
  407b1e:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
  407b21:	33 db                	xor    ebx,ebx
  407b23:	38 18                	cmp    BYTE PTR [eax],bl
  407b25:	74 15                	je     0x407b3c
  407b27:	56                   	push   esi
  407b28:	ff d7                	call   edi
  407b2a:	56                   	push   esi
  407b2b:	8d 5c 03 01          	lea    ebx,[ebx+eax*1+0x1]
  407b2f:	ff d7                	call   edi
  407b31:	80 7c 06 01 00       	cmp    BYTE PTR [esi+eax*1+0x1],0x0
  407b36:	8d 74 06 01          	lea    esi,[esi+eax*1+0x1]
  407b3a:	75 eb                	jne    0x407b27
  407b3c:	8b 75 18             	mov    esi,DWORD PTR [ebp+0x18]
  407b3f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  407b42:	53                   	push   ebx
  407b43:	56                   	push   esi
  407b44:	ff 34 85 44 20 41 00 	push   DWORD PTR [eax*4+0x412044]
  407b4b:	6a 00                	push   0x0
  407b4d:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  407b50:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  407b53:	ff 15 1c 00 41 00    	call   DWORD PTR ds:0x41001c
  407b59:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  407b5c:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  407b62:	5f                   	pop    edi
  407b63:	5b                   	pop    ebx
  407b64:	e9 ca 00 00 00       	jmp    0x407c33
  407b69:	83 7d 0c 04          	cmp    DWORD PTR [ebp+0xc],0x4
  407b6d:	75 d0                	jne    0x407b3f
  407b6f:	33 db                	xor    ebx,ebx
  407b71:	8b fe                	mov    edi,esi
  407b73:	20 5d 1b             	and    BYTE PTR [ebp+0x1b],bl
  407b76:	38 1e                	cmp    BYTE PTR [esi],bl
  407b78:	89 5d 10             	mov    DWORD PTR [ebp+0x10],ebx
  407b7b:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  407b7e:	74 bf                	je     0x407b3f
  407b80:	0f be 07             	movsx  eax,BYTE PTR [edi]
  407b83:	50                   	push   eax
  407b84:	e8 1f 45 00 00       	call   0x40c0a8
  407b89:	88 07                	mov    BYTE PTR [edi],al
  407b8b:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  407b92:	59                   	pop    ecx
  407b93:	7e 0f                	jle    0x407ba4
  407b95:	0f be c0             	movsx  eax,al
  407b98:	6a 04                	push   0x4
  407b9a:	50                   	push   eax
  407b9b:	e8 de 46 00 00       	call   0x40c27e
  407ba0:	59                   	pop    ecx
  407ba1:	59                   	pop    ecx
  407ba2:	eb 0f                	jmp    0x407bb3
  407ba4:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  407baa:	0f be c0             	movsx  eax,al
  407bad:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
  407bb0:	83 e0 04             	and    eax,0x4
  407bb3:	85 c0                	test   eax,eax
  407bb5:	75 0a                	jne    0x407bc1
  407bb7:	8a 07                	mov    al,BYTE PTR [edi]
  407bb9:	3c 41                	cmp    al,0x41
  407bbb:	7c 46                	jl     0x407c03
  407bbd:	3c 46                	cmp    al,0x46
  407bbf:	7f 42                	jg     0x407c03
  407bc1:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
  407bc5:	8a 07                	mov    al,BYTE PTR [edi]
  407bc7:	74 26                	je     0x407bef
  407bc9:	3c 39                	cmp    al,0x39
  407bcb:	0f be c0             	movsx  eax,al
  407bce:	7f 05                	jg     0x407bd5
  407bd0:	83 e8 30             	sub    eax,0x30
  407bd3:	eb 03                	jmp    0x407bd8
  407bd5:	83 e8 37             	sub    eax,0x37
  407bd8:	8a 4d 1b             	mov    cl,BYTE PTR [ebp+0x1b]
  407bdb:	c0 e1 04             	shl    cl,0x4
  407bde:	0a c8                	or     cl,al
  407be0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  407be3:	ff 45 08             	inc    DWORD PTR [ebp+0x8]
  407be6:	43                   	inc    ebx
  407be7:	83 65 10 00          	and    DWORD PTR [ebp+0x10],0x0
  407beb:	88 08                	mov    BYTE PTR [eax],cl
  407bed:	eb 14                	jmp    0x407c03
  407bef:	3c 39                	cmp    al,0x39
  407bf1:	7f 04                	jg     0x407bf7
  407bf3:	2c 30                	sub    al,0x30
  407bf5:	eb 02                	jmp    0x407bf9
  407bf7:	2c 37                	sub    al,0x37
  407bf9:	88 45 1b             	mov    BYTE PTR [ebp+0x1b],al
  407bfc:	c7 45 10 01 00 00 00 	mov    DWORD PTR [ebp+0x10],0x1
  407c03:	47                   	inc    edi
  407c04:	80 3f 00             	cmp    BYTE PTR [edi],0x0
  407c07:	0f 85 73 ff ff ff    	jne    0x407b80
  407c0d:	e9 2d ff ff ff       	jmp    0x407b3f
  407c12:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  407c15:	80 38 00             	cmp    BYTE PTR [eax],0x0
  407c18:	75 19                	jne    0x407c33
  407c1a:	39 75 08             	cmp    DWORD PTR [ebp+0x8],esi
  407c1d:	75 14                	jne    0x407c33
  407c1f:	56                   	push   esi
  407c20:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  407c23:	6a 01                	push   0x1
  407c25:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  407c28:	68 00 00 00 80       	push   0x80000000
  407c2d:	ff 15 18 00 41 00    	call   DWORD PTR ds:0x410018
  407c33:	5e                   	pop    esi
  407c34:	5d                   	pop    ebp
  407c35:	c3                   	ret
  407c36:	81 ec c8 0d 00 00    	sub    esp,0xdc8
  407c3c:	81 3d c4 36 41 00 e9 	cmp    DWORD PTR ds:0x4136c4,0x3e9
  407c43:	03 00 00 
  407c46:	53                   	push   ebx
  407c47:	55                   	push   ebp
  407c48:	56                   	push   esi
  407c49:	57                   	push   edi
  407c4a:	6a 01                	push   0x1
  407c4c:	c7 44 24 24 1d 00 00 	mov    DWORD PTR [esp+0x24],0x1d
  407c53:	00 
  407c54:	c7 44 24 28 1e 00 00 	mov    DWORD PTR [esp+0x28],0x1e
  407c5b:	00 
  407c5c:	c7 44 24 2c 1f 00 00 	mov    DWORD PTR [esp+0x2c],0x1f
  407c63:	00 
  407c64:	c7 44 24 30 20 00 00 	mov    DWORD PTR [esp+0x30],0x20
  407c6b:	00 
  407c6c:	c7 44 24 34 21 00 00 	mov    DWORD PTR [esp+0x34],0x21
  407c73:	00 
  407c74:	c7 44 24 38 22 00 00 	mov    DWORD PTR [esp+0x38],0x22
  407c7b:	00 
  407c7c:	c7 44 24 3c 23 00 00 	mov    DWORD PTR [esp+0x3c],0x23
  407c83:	00 
  407c84:	c7 44 24 40 24 00 00 	mov    DWORD PTR [esp+0x40],0x24
  407c8b:	00 
  407c8c:	c7 44 24 44 25 00 00 	mov    DWORD PTR [esp+0x44],0x25
  407c93:	00 
  407c94:	c7 44 24 48 28 00 00 	mov    DWORD PTR [esp+0x48],0x28
  407c9b:	00 
  407c9c:	c7 44 24 4c 2c 00 00 	mov    DWORD PTR [esp+0x4c],0x2c
  407ca3:	00 
  407ca4:	c7 44 24 50 38 00 00 	mov    DWORD PTR [esp+0x50],0x38
  407cab:	00 
  407cac:	c7 44 24 54 39 00 00 	mov    DWORD PTR [esp+0x54],0x39
  407cb3:	00 
  407cb4:	c7 44 24 58 3a 00 00 	mov    DWORD PTR [esp+0x58],0x3a
  407cbb:	00 
  407cbc:	5b                   	pop    ebx
  407cbd:	75 10                	jne    0x407ccf
  407cbf:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  407cc6:	74 1d                	je     0x407ce5
  407cc8:	83 25 70 37 41 00 00 	and    DWORD PTR ds:0x413770,0x0
  407ccf:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  407cd6:	74 0d                	je     0x407ce5
  407cd8:	66 a1 94 3b 41 00    	mov    ax,ds:0x413b94
  407cde:	66 89 44 24 10       	mov    WORD PTR [esp+0x10],ax
  407ce3:	eb 04                	jmp    0x407ce9
  407ce5:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  407ce9:	6a 0e                	push   0xe
  407ceb:	8d 74 24 24          	lea    esi,[esp+0x24]
  407cef:	8d bc 24 5c 02 00 00 	lea    edi,[esp+0x25c]
  407cf6:	5d                   	pop    ebp
  407cf7:	6a 40                	push   0x40
  407cf9:	57                   	push   edi
  407cfa:	ff 36                	push   DWORD PTR [esi]
  407cfc:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  407d02:	e8 96 2e 00 00       	call   0x40ab9d
  407d07:	83 c4 10             	add    esp,0x10
  407d0a:	83 c7 40             	add    edi,0x40
  407d0d:	83 c6 04             	add    esi,0x4
  407d10:	4d                   	dec    ebp
  407d11:	75 e4                	jne    0x407cf7
  407d13:	a1 80 3a 41 00       	mov    eax,ds:0x413a80
  407d18:	8b 0d c8 36 41 00    	mov    ecx,DWORD PTR ds:0x4136c8
  407d1e:	03 c1                	add    eax,ecx
  407d20:	83 25 f8 36 41 00 00 	and    DWORD PTR ds:0x4136f8,0x0
  407d27:	03 05 fc 3a 41 00    	add    eax,DWORD PTR ds:0x413afc
  407d2d:	03 05 04 3b 41 00    	add    eax,DWORD PTR ds:0x413b04
  407d33:	03 05 9c 3b 41 00    	add    eax,DWORD PTR ds:0x413b9c
  407d39:	03 05 20 37 41 00    	add    eax,DWORD PTR ds:0x413720
  407d3f:	03 05 74 37 41 00    	add    eax,DWORD PTR ds:0x413774
  407d45:	03 05 88 3b 41 00    	add    eax,DWORD PTR ds:0x413b88
  407d4b:	03 05 68 37 41 00    	add    eax,DWORD PTR ds:0x413768
  407d51:	03 05 b4 3a 41 00    	add    eax,DWORD PTR ds:0x413ab4
  407d57:	a3 f8 3a 41 00       	mov    ds:0x413af8,eax
  407d5c:	75 06                	jne    0x407d64
  407d5e:	89 1d f8 3a 41 00    	mov    DWORD PTR ds:0x413af8,ebx
  407d64:	83 3d 8c 3a 41 00 00 	cmp    DWORD PTR ds:0x413a8c,0x0
  407d6b:	8b 2d 68 01 41 00    	mov    ebp,DWORD PTR ds:0x410168
  407d71:	8b 1d fc 00 41 00    	mov    ebx,DWORD PTR ds:0x4100fc
  407d77:	0f 85 91 02 00 00    	jne    0x40800e
  407d7d:	33 ff                	xor    edi,edi
  407d7f:	57                   	push   edi
  407d80:	68 ea 03 00 00       	push   0x3ea
  407d85:	e8 f3 b3 ff ff       	call   0x40317d
  407d8a:	57                   	push   edi
  407d8b:	68 ec 03 00 00       	push   0x3ec
  407d90:	e8 e8 b3 ff ff       	call   0x40317d
  407d95:	be ed 03 00 00       	mov    esi,0x3ed
  407d9a:	6a 01                	push   0x1
  407d9c:	56                   	push   esi
  407d9d:	e8 db b3 ff ff       	call   0x40317d
  407da2:	6a 01                	push   0x1
  407da4:	68 ef 03 00 00       	push   0x3ef
  407da9:	e8 cf b3 ff ff       	call   0x40317d
  407dae:	8d 84 24 f8 05 00 00 	lea    eax,[esp+0x5f8]
  407db5:	68 00 01 00 00       	push   0x100
  407dba:	50                   	push   eax
  407dbb:	6a 2d                	push   0x2d
  407dbd:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  407dc3:	e8 d5 2d 00 00       	call   0x40ab9d
  407dc8:	ff 35 a8 3a 41 00    	push   DWORD PTR ds:0x413aa8
  407dce:	8d 84 24 0c 06 00 00 	lea    eax,[esp+0x60c]
  407dd5:	50                   	push   eax
  407dd6:	8d 84 24 10 0a 00 00 	lea    eax,[esp+0xa10]
  407ddd:	50                   	push   eax
  407dde:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  407de4:	83 c4 3c             	add    esp,0x3c
  407de7:	8d 84 24 d8 09 00 00 	lea    eax,[esp+0x9d8]
  407dee:	50                   	push   eax
  407def:	56                   	push   esi
  407df0:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  407df6:	ff 15 cc 02 41 00    	call   DWORD PTR ds:0x4102cc
  407dfc:	57                   	push   edi
  407dfd:	8b 3d e0 02 41 00    	mov    edi,DWORD PTR ds:0x4102e0
  407e03:	6a 01                	push   0x1
  407e05:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  407e0b:	ff d7                	call   edi
  407e0d:	8b 35 84 02 41 00    	mov    esi,DWORD PTR ds:0x410284
  407e13:	50                   	push   eax
  407e14:	ff d6                	call   esi
  407e16:	6a 00                	push   0x0
  407e18:	6a 05                	push   0x5
  407e1a:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  407e20:	ff d7                	call   edi
  407e22:	50                   	push   eax
  407e23:	ff d6                	call   esi
  407e25:	33 ff                	xor    edi,edi
  407e27:	be 20 3b 41 00       	mov    esi,0x413b20
  407e2c:	8d 47 6b             	lea    eax,[edi+0x6b]
  407e2f:	0f b7 c0             	movzx  eax,ax
  407e32:	50                   	push   eax
  407e33:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  407e39:	ff 15 4c 02 41 00    	call   DWORD PTR ds:0x41024c
  407e3f:	89 06                	mov    DWORD PTR [esi],eax
  407e41:	83 c6 04             	add    esi,0x4
  407e44:	47                   	inc    edi
  407e45:	81 fe 74 3b 41 00    	cmp    esi,0x413b74
  407e4b:	7c df                	jl     0x407e2c
  407e4d:	33 ff                	xor    edi,edi
  407e4f:	39 3d 80 37 41 00    	cmp    DWORD PTR ds:0x413780,edi
  407e55:	74 1a                	je     0x407e71
  407e57:	6a 05                	push   0x5
  407e59:	68 f6 0e 00 00       	push   0xef6
  407e5e:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  407e64:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  407e6a:	50                   	push   eax
  407e6b:	ff 15 54 02 41 00    	call   DWORD PTR ds:0x410254
  407e71:	57                   	push   edi
  407e72:	e8 af 11 00 00       	call   0x409026
  407e77:	59                   	pop    ecx
  407e78:	c7 05 8c 3a 41 00 01 	mov    DWORD PTR ds:0x413a8c,0x1
  407e7f:	00 00 00 
  407e82:	33 c9                	xor    ecx,ecx
  407e84:	39 3d a0 3a 41 00    	cmp    DWORD PTR ds:0x413aa0,edi
  407e8a:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  407e8e:	0f 8e 7c 01 00 00    	jle    0x408010
  407e94:	39 3d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,edi
  407e9a:	0f 85 70 01 00 00    	jne    0x408010
  407ea0:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  407ea7:	03 00 00 
  407eaa:	74 14                	je     0x407ec0
  407eac:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407eb1:	8b 04 88             	mov    eax,DWORD PTR [eax+ecx*4]
  407eb4:	39 b8 04 02 00 00    	cmp    DWORD PTR [eax+0x204],edi
  407eba:	0f 84 3b 01 00 00    	je     0x407ffb
  407ec0:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407ec5:	8b f1                	mov    esi,ecx
  407ec7:	66 8b 7c 24 10       	mov    di,WORD PTR [esp+0x10]
  407ecc:	c1 e6 02             	shl    esi,0x2
  407ecf:	03 c6                	add    eax,esi
  407ed1:	8b 10                	mov    edx,DWORD PTR [eax]
  407ed3:	66 39 ba 08 02 00 00 	cmp    WORD PTR [edx+0x208],di
  407eda:	0f 82 19 01 00 00    	jb     0x407ff9
  407ee0:	6a 5c                	push   0x5c
  407ee2:	52                   	push   edx
  407ee3:	e8 64 3f 00 00       	call   0x40be4c
  407ee8:	59                   	pop    ecx
  407ee9:	85 c0                	test   eax,eax
  407eeb:	59                   	pop    ecx
  407eec:	74 11                	je     0x407eff
  407eee:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407ef3:	6a 00                	push   0x0
  407ef5:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  407ef8:	e8 97 28 00 00       	call   0x40a794
  407efd:	59                   	pop    ecx
  407efe:	59                   	pop    ecx
  407eff:	8d 84 24 d8 05 00 00 	lea    eax,[esp+0x5d8]
  407f06:	68 e4 25 41 00       	push   0x4125e4
  407f0b:	50                   	push   eax
  407f0c:	ff d5                	call   ebp
  407f0e:	6a 00                	push   0x0
  407f10:	e8 f7 33 00 00       	call   0x40b30c
  407f15:	88 84 24 dc 05 00 00 	mov    BYTE PTR [esp+0x5dc],al
  407f1c:	59                   	pop    ecx
  407f1d:	8d 84 24 58 05 00 00 	lea    eax,[esp+0x558]
  407f24:	50                   	push   eax
  407f25:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  407f2b:	ff d5                	call   ebp
  407f2d:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407f32:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  407f35:	80 b8 04 01 00 00 00 	cmp    BYTE PTR [eax+0x104],0x0
  407f3c:	8d 88 04 01 00 00    	lea    ecx,[eax+0x104]
  407f42:	74 03                	je     0x407f47
  407f44:	51                   	push   ecx
  407f45:	eb 01                	jmp    0x407f48
  407f47:	50                   	push   eax
  407f48:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  407f4e:	ff d3                	call   ebx
  407f50:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  407f56:	e8 cb 10 00 00       	call   0x409026
  407f5b:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  407f62:	03 00 00 
  407f65:	59                   	pop    ecx
  407f66:	b8 d8 25 41 00       	mov    eax,0x4125d8
  407f6b:	74 05                	je     0x407f72
  407f6d:	b8 d0 25 41 00       	mov    eax,0x4125d0
  407f72:	50                   	push   eax
  407f73:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  407f77:	50                   	push   eax
  407f78:	ff d5                	call   ebp
  407f7a:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407f7f:	8b 2c 06             	mov    ebp,DWORD PTR [esi+eax*1]
  407f82:	55                   	push   ebp
  407f83:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  407f89:	8b f8                	mov    edi,eax
  407f8b:	03 fd                	add    edi,ebp
  407f8d:	3b fd                	cmp    edi,ebp
  407f8f:	76 44                	jbe    0x407fd5
  407f91:	8a 1f                	mov    bl,BYTE PTR [edi]
  407f93:	80 fb 20             	cmp    bl,0x20
  407f96:	74 04                	je     0x407f9c
  407f98:	84 db                	test   bl,bl
  407f9a:	75 1a                	jne    0x407fb6
  407f9c:	80 27 00             	and    BYTE PTR [edi],0x0
  407f9f:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407fa4:	6a 00                	push   0x0
  407fa6:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  407fa9:	e8 85 29 00 00       	call   0x40a933
  407fae:	59                   	pop    ecx
  407faf:	85 c0                	test   eax,eax
  407fb1:	59                   	pop    ecx
  407fb2:	74 0f                	je     0x407fc3
  407fb4:	88 1f                	mov    BYTE PTR [edi],bl
  407fb6:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407fbb:	4f                   	dec    edi
  407fbc:	3b 3c 06             	cmp    edi,DWORD PTR [esi+eax*1]
  407fbf:	77 d0                	ja     0x407f91
  407fc1:	eb 12                	jmp    0x407fd5
  407fc3:	80 fb 20             	cmp    bl,0x20
  407fc6:	75 0d                	jne    0x407fd5
  407fc8:	47                   	inc    edi
  407fc9:	8d 44 24 58          	lea    eax,[esp+0x58]
  407fcd:	57                   	push   edi
  407fce:	50                   	push   eax
  407fcf:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  407fd5:	8d 44 24 58          	lea    eax,[esp+0x58]
  407fd9:	50                   	push   eax
  407fda:	a1 48 37 41 00       	mov    eax,ds:0x413748
  407fdf:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  407fe2:	e8 b4 3d 00 00       	call   0x40bd9b
  407fe7:	8b 2d 68 01 41 00    	mov    ebp,DWORD PTR ds:0x410168
  407fed:	8b 1d fc 00 41 00    	mov    ebx,DWORD PTR ds:0x4100fc
  407ff3:	59                   	pop    ecx
  407ff4:	59                   	pop    ecx
  407ff5:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  407ff9:	33 ff                	xor    edi,edi
  407ffb:	41                   	inc    ecx
  407ffc:	3b 0d a0 3a 41 00    	cmp    ecx,DWORD PTR ds:0x413aa0
  408002:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  408006:	0f 8c 88 fe ff ff    	jl     0x407e94
  40800c:	eb 02                	jmp    0x408010
  40800e:	33 ff                	xor    edi,edi
  408010:	33 f6                	xor    esi,esi
  408012:	39 3d 80 3a 41 00    	cmp    DWORD PTR ds:0x413a80,edi
  408018:	0f 8e 96 00 00 00    	jle    0x4080b4
  40801e:	39 3d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,edi
  408024:	0f 85 8a 00 00 00    	jne    0x4080b4
  40802a:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408031:	03 00 00 
  408034:	74 10                	je     0x408046
  408036:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  40803b:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  40803e:	39 b8 04 01 00 00    	cmp    DWORD PTR [eax+0x104],edi
  408044:	74 5b                	je     0x4080a1
  408046:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  40804b:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  40804e:	66 8b 80 08 01 00 00 	mov    ax,WORD PTR [eax+0x108]
  408055:	66 3b 44 24 10       	cmp    ax,WORD PTR [esp+0x10]
  40805a:	72 45                	jb     0x4080a1
  40805c:	8d 84 24 98 05 00 00 	lea    eax,[esp+0x598]
  408063:	50                   	push   eax
  408064:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40806a:	ff d5                	call   ebp
  40806c:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  408071:	ff 34 b0             	push   DWORD PTR [eax+esi*4]
  408074:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40807a:	ff d3                	call   ebx
  40807c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408082:	e8 9f 0f 00 00       	call   0x409026
  408087:	a1 98 3b 41 00       	mov    eax,ds:0x413b98
  40808c:	ff 34 b0             	push   DWORD PTR [eax+esi*4]
  40808f:	e8 d5 2b 00 00       	call   0x40ac69
  408094:	68 ac 0d 00 00       	push   0xdac
  408099:	e8 8e 10 00 00       	call   0x40912c
  40809e:	83 c4 0c             	add    esp,0xc
  4080a1:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  4080a7:	46                   	inc    esi
  4080a8:	3b 35 80 3a 41 00    	cmp    esi,DWORD PTR ds:0x413a80
  4080ae:	0f 8c 6a ff ff ff    	jl     0x40801e
  4080b4:	39 3d 9c 37 41 00    	cmp    DWORD PTR ds:0x41379c,edi
  4080ba:	74 4b                	je     0x408107
  4080bc:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  4080c3:	03 00 00 
  4080c6:	74 08                	je     0x4080d0
  4080c8:	39 3d d0 36 41 00    	cmp    DWORD PTR ds:0x4136d0,edi
  4080ce:	74 37                	je     0x408107
  4080d0:	8d 84 24 d8 04 00 00 	lea    eax,[esp+0x4d8]
  4080d7:	50                   	push   eax
  4080d8:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4080de:	ff d5                	call   ebp
  4080e0:	ff 35 9c 37 41 00    	push   DWORD PTR ds:0x41379c
  4080e6:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4080ec:	ff d3                	call   ebx
  4080ee:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4080f4:	e8 2d 0f 00 00       	call   0x409026
  4080f9:	59                   	pop    ecx
  4080fa:	e8 7b 1f 00 00       	call   0x40a07a
  4080ff:	85 c0                	test   eax,eax
  408101:	0f 85 14 0f 00 00    	jne    0x40901b
  408107:	33 ff                	xor    edi,edi
  408109:	39 3d 74 37 41 00    	cmp    DWORD PTR ds:0x413774,edi
  40810f:	0f 8e a2 00 00 00    	jle    0x4081b7
  408115:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  40811c:	0f 85 95 00 00 00    	jne    0x4081b7
  408122:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408129:	03 00 00 
  40812c:	74 11                	je     0x40813f
  40812e:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  408133:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  408136:	83 b8 04 01 00 00 00 	cmp    DWORD PTR [eax+0x104],0x0
  40813d:	74 65                	je     0x4081a4
  40813f:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  408144:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  408149:	8b f7                	mov    esi,edi
  40814b:	c1 e6 02             	shl    esi,0x2
  40814e:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408151:	66 39 88 08 01 00 00 	cmp    WORD PTR [eax+0x108],cx
  408158:	72 4a                	jb     0x4081a4
  40815a:	8d 84 24 58 03 00 00 	lea    eax,[esp+0x358]
  408161:	50                   	push   eax
  408162:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408168:	ff d5                	call   ebp
  40816a:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  40816f:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  408172:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408178:	ff d3                	call   ebx
  40817a:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408180:	e8 a1 0e 00 00       	call   0x409026
  408185:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  40818a:	6a 00                	push   0x0
  40818c:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  40818f:	e8 47 25 00 00       	call   0x40a6db
  408194:	a1 a8 36 41 00       	mov    eax,ds:0x4136a8
  408199:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  40819c:	e8 9f 22 00 00       	call   0x40a440
  4081a1:	83 c4 10             	add    esp,0x10
  4081a4:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  4081aa:	47                   	inc    edi
  4081ab:	3b 3d 74 37 41 00    	cmp    edi,DWORD PTR ds:0x413774
  4081b1:	0f 8c 5e ff ff ff    	jl     0x408115
  4081b7:	33 ff                	xor    edi,edi
  4081b9:	39 3d 20 37 41 00    	cmp    DWORD PTR ds:0x413720,edi
  4081bf:	0f 8e da 00 00 00    	jle    0x40829f
  4081c5:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  4081cc:	0f 85 cd 00 00 00    	jne    0x40829f
  4081d2:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  4081d9:	03 00 00 
  4081dc:	74 15                	je     0x4081f3
  4081de:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  4081e3:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  4081e6:	83 b8 0c 07 00 00 00 	cmp    DWORD PTR [eax+0x70c],0x0
  4081ed:	0f 84 99 00 00 00    	je     0x40828c
  4081f3:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  4081f8:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  4081fd:	8b f7                	mov    esi,edi
  4081ff:	c1 e6 02             	shl    esi,0x2
  408202:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408205:	66 39 88 10 07 00 00 	cmp    WORD PTR [eax+0x710],cx
  40820c:	72 7e                	jb     0x40828c
  40820e:	83 c0 08             	add    eax,0x8
  408211:	6a 00                	push   0x0
  408213:	50                   	push   eax
  408214:	e8 1a 27 00 00       	call   0x40a933
  408219:	59                   	pop    ecx
  40821a:	85 c0                	test   eax,eax
  40821c:	59                   	pop    ecx
  40821d:	75 6d                	jne    0x40828c
  40821f:	8d 84 24 98 03 00 00 	lea    eax,[esp+0x398]
  408226:	50                   	push   eax
  408227:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40822d:	ff d5                	call   ebp
  40822f:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  408234:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408237:	83 c0 08             	add    eax,0x8
  40823a:	50                   	push   eax
  40823b:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408241:	ff d3                	call   ebx
  408243:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408249:	e8 d8 0d 00 00       	call   0x409026
  40824e:	a1 a8 37 41 00       	mov    eax,ds:0x4137a8
  408253:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  40825a:	59                   	pop    ecx
  40825b:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  40825e:	8d 88 0c 05 00 00    	lea    ecx,[eax+0x50c]
  408264:	75 06                	jne    0x40826c
  408266:	8d 88 0c 03 00 00    	lea    ecx,[eax+0x30c]
  40826c:	8d 50 08             	lea    edx,[eax+0x8]
  40826f:	52                   	push   edx
  408270:	8a 11                	mov    dl,BYTE PTR [ecx]
  408272:	f6 da                	neg    dl
  408274:	1b d2                	sbb    edx,edx
  408276:	23 d1                	and    edx,ecx
  408278:	8d 88 0c 02 00 00    	lea    ecx,[eax+0x20c]
  40827e:	52                   	push   edx
  40827f:	05 0c 01 00 00       	add    eax,0x10c
  408284:	51                   	push   ecx
  408285:	50                   	push   eax
  408286:	ff 15 2c 01 41 00    	call   DWORD PTR ds:0x41012c
  40828c:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  408292:	47                   	inc    edi
  408293:	3b 3d 20 37 41 00    	cmp    edi,DWORD PTR ds:0x413720
  408299:	0f 8c 26 ff ff ff    	jl     0x4081c5
  40829f:	33 f6                	xor    esi,esi
  4082a1:	39 35 b0 3a 41 00    	cmp    DWORD PTR ds:0x413ab0,esi
  4082a7:	7e 55                	jle    0x4082fe
  4082a9:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4082b0:	74 43                	je     0x4082f5
  4082b2:	a1 a0 36 41 00       	mov    eax,ds:0x4136a0
  4082b7:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  4082bc:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4082bf:	66 39 88 08 02 00 00 	cmp    WORD PTR [eax+0x208],cx
  4082c6:	72 2d                	jb     0x4082f5
  4082c8:	05 04 01 00 00       	add    eax,0x104
  4082cd:	6a 00                	push   0x0
  4082cf:	50                   	push   eax
  4082d0:	e8 5e 26 00 00       	call   0x40a933
  4082d5:	59                   	pop    ecx
  4082d6:	85 c0                	test   eax,eax
  4082d8:	59                   	pop    ecx
  4082d9:	75 1a                	jne    0x4082f5
  4082db:	a1 a0 36 41 00       	mov    eax,ds:0x4136a0
  4082e0:	6a 01                	push   0x1
  4082e2:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4082e5:	8d 88 04 01 00 00    	lea    ecx,[eax+0x104]
  4082eb:	51                   	push   ecx
  4082ec:	50                   	push   eax
  4082ed:	e8 d7 19 00 00       	call   0x409cc9
  4082f2:	83 c4 0c             	add    esp,0xc
  4082f5:	46                   	inc    esi
  4082f6:	3b 35 b0 3a 41 00    	cmp    esi,DWORD PTR ds:0x413ab0
  4082fc:	7c ab                	jl     0x4082a9
  4082fe:	a1 b4 3a 41 00       	mov    eax,ds:0x413ab4
  408303:	8d 70 ff             	lea    esi,[eax-0x1]
  408306:	85 f6                	test   esi,esi
  408308:	0f 8c 23 01 00 00    	jl     0x408431
  40830e:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408315:	03 00 00 
  408318:	75 24                	jne    0x40833e
  40831a:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  40831f:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408322:	83 b8 68 02 00 00 00 	cmp    DWORD PTR [eax+0x268],0x0
  408329:	75 28                	jne    0x408353
  40832b:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  408332:	74 0a                	je     0x40833e
  408334:	8d 88 0c 01 00 00    	lea    ecx,[eax+0x10c]
  40833a:	85 c9                	test   ecx,ecx
  40833c:	75 15                	jne    0x408353
  40833e:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  408343:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408346:	83 b8 64 02 00 00 00 	cmp    DWORD PTR [eax+0x264],0x0
  40834d:	0f 84 d7 00 00 00    	je     0x40842a
  408353:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  408358:	66 39 88 70 02 00 00 	cmp    WORD PTR [eax+0x270],cx
  40835f:	0f 82 c5 00 00 00    	jb     0x40842a
  408365:	66 39 88 76 02 00 00 	cmp    WORD PTR [eax+0x276],cx
  40836c:	72 16                	jb     0x408384
  40836e:	ff b0 78 02 00 00    	push   DWORD PTR [eax+0x278]
  408374:	83 c0 08             	add    eax,0x8
  408377:	6a 01                	push   0x1
  408379:	50                   	push   eax
  40837a:	e8 45 17 00 00       	call   0x409ac4
  40837f:	83 c4 0c             	add    esp,0xc
  408382:	eb 02                	jmp    0x408386
  408384:	33 c0                	xor    eax,eax
  408386:	83 f8 01             	cmp    eax,0x1
  408389:	75 36                	jne    0x4083c1
  40838b:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  408392:	74 1f                	je     0x4083b3
  408394:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  408399:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  40839e:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4083a1:	66 39 88 72 02 00 00 	cmp    WORD PTR [eax+0x272],cx
  4083a8:	75 09                	jne    0x4083b3
  4083aa:	80 b8 0c 01 00 00 00 	cmp    BYTE PTR [eax+0x10c],0x0
  4083b1:	75 77                	jne    0x40842a
  4083b3:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  4083b8:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4083bb:	80 60 08 00          	and    BYTE PTR [eax+0x8],0x0
  4083bf:	eb 69                	jmp    0x40842a
  4083c1:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  4083c6:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4083c9:	66 8b 88 72 02 00 00 	mov    cx,WORD PTR [eax+0x272]
  4083d0:	66 3b 88 70 02 00 00 	cmp    cx,WORD PTR [eax+0x270]
  4083d7:	75 09                	jne    0x4083e2
  4083d9:	80 b8 0c 01 00 00 00 	cmp    BYTE PTR [eax+0x10c],0x0
  4083e0:	74 09                	je     0x4083eb
  4083e2:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4083e9:	75 3f                	jne    0x40842a
  4083eb:	66 8b 7c 24 10       	mov    di,WORD PTR [esp+0x10]
  4083f0:	66 39 b8 6c 02 00 00 	cmp    WORD PTR [eax+0x26c],di
  4083f7:	72 16                	jb     0x40840f
  4083f9:	83 c0 08             	add    eax,0x8
  4083fc:	6a 00                	push   0x0
  4083fe:	50                   	push   eax
  4083ff:	8d 84 24 a0 04 00 00 	lea    eax,[esp+0x4a0]
  408406:	50                   	push   eax
  408407:	e8 be 1a 00 00       	call   0x409eca
  40840c:	83 c4 0c             	add    esp,0xc
  40840f:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  408414:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408417:	66 39 b8 6e 02 00 00 	cmp    WORD PTR [eax+0x26e],di
  40841e:	72 0a                	jb     0x40842a
  408420:	83 c0 08             	add    eax,0x8
  408423:	50                   	push   eax
  408424:	e8 95 28 00 00       	call   0x40acbe
  408429:	59                   	pop    ecx
  40842a:	4e                   	dec    esi
  40842b:	0f 89 dd fe ff ff    	jns    0x40830e
  408431:	a1 68 37 41 00       	mov    eax,ds:0x413768
  408436:	8d 78 ff             	lea    edi,[eax-0x1]
  408439:	85 ff                	test   edi,edi
  40843b:	0f 8c 1a 01 00 00    	jl     0x40855b
  408441:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  408446:	66 8b 54 24 10       	mov    dx,WORD PTR [esp+0x10]
  40844b:	8b f7                	mov    esi,edi
  40844d:	c1 e6 02             	shl    esi,0x2
  408450:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408453:	66 39 90 68 02 00 00 	cmp    WORD PTR [eax+0x268],dx
  40845a:	0f 82 f4 00 00 00    	jb     0x408554
  408460:	8b 88 5c 02 00 00    	mov    ecx,DWORD PTR [eax+0x25c]
  408466:	85 c9                	test   ecx,ecx
  408468:	75 08                	jne    0x408472
  40846a:	39 0d ec 36 41 00    	cmp    DWORD PTR ds:0x4136ec,ecx
  408470:	74 6c                	je     0x4084de
  408472:	66 39 90 6e 02 00 00 	cmp    WORD PTR [eax+0x26e],dx
  408479:	72 12                	jb     0x40848d
  40847b:	ff b0 70 02 00 00    	push   DWORD PTR [eax+0x270]
  408481:	51                   	push   ecx
  408482:	50                   	push   eax
  408483:	e8 3c 16 00 00       	call   0x409ac4
  408488:	83 c4 0c             	add    esp,0xc
  40848b:	eb 02                	jmp    0x40848f
  40848d:	33 c0                	xor    eax,eax
  40848f:	6a 01                	push   0x1
  408491:	59                   	pop    ecx
  408492:	3b c1                	cmp    eax,ecx
  408494:	75 35                	jne    0x4084cb
  408496:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  40849d:	74 1f                	je     0x4084be
  40849f:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4084a4:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  4084a7:	66 8b 88 6a 02 00 00 	mov    cx,WORD PTR [eax+0x26a]
  4084ae:	66 3b 4c 24 10       	cmp    cx,WORD PTR [esp+0x10]
  4084b3:	75 09                	jne    0x4084be
  4084b5:	80 b8 04 01 00 00 00 	cmp    BYTE PTR [eax+0x104],0x0
  4084bc:	75 20                	jne    0x4084de
  4084be:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4084c3:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  4084c6:	80 20 00             	and    BYTE PTR [eax],0x0
  4084c9:	eb 13                	jmp    0x4084de
  4084cb:	83 f8 02             	cmp    eax,0x2
  4084ce:	75 0e                	jne    0x4084de
  4084d0:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4084d5:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  4084d8:	89 88 5c 02 00 00    	mov    DWORD PTR [eax+0x25c],ecx
  4084de:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  4084e3:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  4084e6:	83 b8 5c 02 00 00 00 	cmp    DWORD PTR [eax+0x25c],0x0
  4084ed:	74 65                	je     0x408554
  4084ef:	80 38 00             	cmp    BYTE PTR [eax],0x0
  4084f2:	74 60                	je     0x408554
  4084f4:	66 8b 88 6a 02 00 00 	mov    cx,WORD PTR [eax+0x26a]
  4084fb:	66 3b 88 68 02 00 00 	cmp    cx,WORD PTR [eax+0x268]
  408502:	75 09                	jne    0x40850d
  408504:	80 b8 04 01 00 00 00 	cmp    BYTE PTR [eax+0x104],0x0
  40850b:	74 09                	je     0x408516
  40850d:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  408514:	75 3e                	jne    0x408554
  408516:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  40851b:	66 39 88 64 02 00 00 	cmp    WORD PTR [eax+0x264],cx
  408522:	72 13                	jb     0x408537
  408524:	6a 00                	push   0x0
  408526:	50                   	push   eax
  408527:	8d 84 24 a0 04 00 00 	lea    eax,[esp+0x4a0]
  40852e:	50                   	push   eax
  40852f:	e8 96 19 00 00       	call   0x409eca
  408534:	83 c4 0c             	add    esp,0xc
  408537:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  40853c:	8b 34 06             	mov    esi,DWORD PTR [esi+eax*1]
  40853f:	66 8b 44 24 10       	mov    ax,WORD PTR [esp+0x10]
  408544:	66 39 86 66 02 00 00 	cmp    WORD PTR [esi+0x266],ax
  40854b:	72 07                	jb     0x408554
  40854d:	56                   	push   esi
  40854e:	e8 6b 27 00 00       	call   0x40acbe
  408553:	59                   	pop    ecx
  408554:	4f                   	dec    edi
  408555:	0f 89 e6 fe ff ff    	jns    0x408441
  40855b:	33 f6                	xor    esi,esi
  40855d:	39 35 b4 3a 41 00    	cmp    DWORD PTR ds:0x413ab4,esi
  408563:	0f 8e 01 01 00 00    	jle    0x40866a
  408569:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  408570:	0f 85 f4 00 00 00    	jne    0x40866a
  408576:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  40857b:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  40857e:	80 78 08 00          	cmp    BYTE PTR [eax+0x8],0x0
  408582:	8d 48 08             	lea    ecx,[eax+0x8]
  408585:	0f 84 cc 00 00 00    	je     0x408657
  40858b:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408592:	03 00 00 
  408595:	75 29                	jne    0x4085c0
  408597:	83 b8 68 02 00 00 00 	cmp    DWORD PTR [eax+0x268],0x0
  40859e:	75 2d                	jne    0x4085cd
  4085a0:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4085a7:	74 17                	je     0x4085c0
  4085a9:	80 b8 0c 01 00 00 00 	cmp    BYTE PTR [eax+0x10c],0x0
  4085b0:	74 0e                	je     0x4085c0
  4085b2:	66 8b 90 72 02 00 00 	mov    dx,WORD PTR [eax+0x272]
  4085b9:	66 3b 54 24 10       	cmp    dx,WORD PTR [esp+0x10]
  4085be:	74 0d                	je     0x4085cd
  4085c0:	83 b8 64 02 00 00 00 	cmp    DWORD PTR [eax+0x264],0x0
  4085c7:	0f 84 8a 00 00 00    	je     0x408657
  4085cd:	66 8b 54 24 10       	mov    dx,WORD PTR [esp+0x10]
  4085d2:	66 39 90 70 02 00 00 	cmp    WORD PTR [eax+0x270],dx
  4085d9:	72 7c                	jb     0x408657
  4085db:	66 39 90 72 02 00 00 	cmp    WORD PTR [eax+0x272],dx
  4085e2:	75 0e                	jne    0x4085f2
  4085e4:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4085eb:	74 05                	je     0x4085f2
  4085ed:	6a 01                	push   0x1
  4085ef:	5a                   	pop    edx
  4085f0:	eb 02                	jmp    0x4085f4
  4085f2:	33 d2                	xor    edx,edx
  4085f4:	05 0c 01 00 00       	add    eax,0x10c
  4085f9:	52                   	push   edx
  4085fa:	50                   	push   eax
  4085fb:	51                   	push   ecx
  4085fc:	e8 c8 16 00 00       	call   0x409cc9
  408601:	83 c4 0c             	add    esp,0xc
  408604:	85 c0                	test   eax,eax
  408606:	74 4f                	je     0x408657
  408608:	8d 84 24 58 02 00 00 	lea    eax,[esp+0x258]
  40860f:	50                   	push   eax
  408610:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408616:	ff d5                	call   ebp
  408618:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  40861d:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408620:	83 c0 08             	add    eax,0x8
  408623:	50                   	push   eax
  408624:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40862a:	ff d3                	call   ebx
  40862c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408632:	68 ef 03 00 00       	push   0x3ef
  408637:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40863d:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  408643:	50                   	push   eax
  408644:	e8 8f 12 00 00       	call   0x4098d8
  408649:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40864f:	e8 d2 09 00 00       	call   0x409026
  408654:	83 c4 0c             	add    esp,0xc
  408657:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  40865d:	46                   	inc    esi
  40865e:	3b 35 b4 3a 41 00    	cmp    esi,DWORD PTR ds:0x413ab4
  408664:	0f 8c ff fe ff ff    	jl     0x408569
  40866a:	33 f6                	xor    esi,esi
  40866c:	39 35 68 37 41 00    	cmp    DWORD PTR ds:0x413768,esi
  408672:	0f 8e ed 00 00 00    	jle    0x408765
  408678:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  40867f:	0f 85 e0 00 00 00    	jne    0x408765
  408685:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  40868a:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  40868d:	80 38 00             	cmp    BYTE PTR [eax],0x0
  408690:	0f 84 bc 00 00 00    	je     0x408752
  408696:	83 b8 5c 02 00 00 00 	cmp    DWORD PTR [eax+0x25c],0x0
  40869d:	75 2c                	jne    0x4086cb
  40869f:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4086a6:	0f 84 a6 00 00 00    	je     0x408752
  4086ac:	80 b8 04 01 00 00 00 	cmp    BYTE PTR [eax+0x104],0x0
  4086b3:	0f 84 99 00 00 00    	je     0x408752
  4086b9:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  4086be:	66 39 88 6a 02 00 00 	cmp    WORD PTR [eax+0x26a],cx
  4086c5:	0f 85 87 00 00 00    	jne    0x408752
  4086cb:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  4086d0:	66 39 88 68 02 00 00 	cmp    WORD PTR [eax+0x268],cx
  4086d7:	72 79                	jb     0x408752
  4086d9:	66 39 88 6a 02 00 00 	cmp    WORD PTR [eax+0x26a],cx
  4086e0:	75 0e                	jne    0x4086f0
  4086e2:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4086e9:	74 05                	je     0x4086f0
  4086eb:	6a 01                	push   0x1
  4086ed:	59                   	pop    ecx
  4086ee:	eb 02                	jmp    0x4086f2
  4086f0:	33 c9                	xor    ecx,ecx
  4086f2:	51                   	push   ecx
  4086f3:	8d 88 04 01 00 00    	lea    ecx,[eax+0x104]
  4086f9:	51                   	push   ecx
  4086fa:	50                   	push   eax
  4086fb:	e8 c9 15 00 00       	call   0x409cc9
  408700:	83 c4 0c             	add    esp,0xc
  408703:	85 c0                	test   eax,eax
  408705:	74 4b                	je     0x408752
  408707:	8d 84 24 98 02 00 00 	lea    eax,[esp+0x298]
  40870e:	50                   	push   eax
  40870f:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408715:	ff d5                	call   ebp
  408717:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  40871c:	ff 34 b0             	push   DWORD PTR [eax+esi*4]
  40871f:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408725:	ff d3                	call   ebx
  408727:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40872d:	68 ef 03 00 00       	push   0x3ef
  408732:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  408738:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  40873e:	50                   	push   eax
  40873f:	e8 94 11 00 00       	call   0x4098d8
  408744:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40874a:	e8 d7 08 00 00       	call   0x409026
  40874f:	83 c4 0c             	add    esp,0xc
  408752:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  408758:	46                   	inc    esi
  408759:	3b 35 68 37 41 00    	cmp    esi,DWORD PTR ds:0x413768
  40875f:	0f 8c 13 ff ff ff    	jl     0x408678
  408765:	33 f6                	xor    esi,esi
  408767:	39 35 70 37 41 00    	cmp    DWORD PTR ds:0x413770,esi
  40876d:	0f 84 20 01 00 00    	je     0x408893
  408773:	39 35 b4 3a 41 00    	cmp    DWORD PTR ds:0x413ab4,esi
  408779:	0f 8e 97 00 00 00    	jle    0x408816
  40877f:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  408786:	0f 85 8a 00 00 00    	jne    0x408816
  40878c:	a1 e8 36 41 00       	mov    eax,ds:0x4136e8
  408791:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408794:	80 78 08 00          	cmp    BYTE PTR [eax+0x8],0x0
  408798:	8d 48 08             	lea    ecx,[eax+0x8]
  40879b:	74 6c                	je     0x408809
  40879d:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  4087a4:	03 00 00 
  4087a7:	75 1b                	jne    0x4087c4
  4087a9:	83 b8 68 02 00 00 00 	cmp    DWORD PTR [eax+0x268],0x0
  4087b0:	75 1b                	jne    0x4087cd
  4087b2:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4087b9:	74 09                	je     0x4087c4
  4087bb:	80 b8 0c 01 00 00 00 	cmp    BYTE PTR [eax+0x10c],0x0
  4087c2:	75 09                	jne    0x4087cd
  4087c4:	83 b8 64 02 00 00 00 	cmp    DWORD PTR [eax+0x264],0x0
  4087cb:	74 3c                	je     0x408809
  4087cd:	66 8b 54 24 10       	mov    dx,WORD PTR [esp+0x10]
  4087d2:	66 39 90 70 02 00 00 	cmp    WORD PTR [eax+0x270],dx
  4087d9:	72 2e                	jb     0x408809
  4087db:	80 b8 0c 01 00 00 00 	cmp    BYTE PTR [eax+0x10c],0x0
  4087e2:	74 25                	je     0x408809
  4087e4:	66 39 90 72 02 00 00 	cmp    WORD PTR [eax+0x272],dx
  4087eb:	75 1c                	jne    0x408809
  4087ed:	66 39 90 6c 02 00 00 	cmp    WORD PTR [eax+0x26c],dx
  4087f4:	72 13                	jb     0x408809
  4087f6:	6a 01                	push   0x1
  4087f8:	8d 84 24 9c 04 00 00 	lea    eax,[esp+0x49c]
  4087ff:	51                   	push   ecx
  408800:	50                   	push   eax
  408801:	e8 c4 16 00 00       	call   0x409eca
  408806:	83 c4 0c             	add    esp,0xc
  408809:	46                   	inc    esi
  40880a:	3b 35 b4 3a 41 00    	cmp    esi,DWORD PTR ds:0x413ab4
  408810:	0f 8c 69 ff ff ff    	jl     0x40877f
  408816:	33 f6                	xor    esi,esi
  408818:	39 35 68 37 41 00    	cmp    DWORD PTR ds:0x413768,esi
  40881e:	7e 73                	jle    0x408893
  408820:	33 c9                	xor    ecx,ecx
  408822:	39 0d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ecx
  408828:	75 69                	jne    0x408893
  40882a:	a1 0c 3b 41 00       	mov    eax,ds:0x413b0c
  40882f:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408832:	38 08                	cmp    BYTE PTR [eax],cl
  408834:	74 54                	je     0x40888a
  408836:	39 88 5c 02 00 00    	cmp    DWORD PTR [eax+0x25c],ecx
  40883c:	75 10                	jne    0x40884e
  40883e:	39 0d 70 37 41 00    	cmp    DWORD PTR ds:0x413770,ecx
  408844:	74 44                	je     0x40888a
  408846:	38 88 04 01 00 00    	cmp    BYTE PTR [eax+0x104],cl
  40884c:	74 3c                	je     0x40888a
  40884e:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  408853:	66 39 88 68 02 00 00 	cmp    WORD PTR [eax+0x268],cx
  40885a:	72 2e                	jb     0x40888a
  40885c:	80 b8 04 01 00 00 00 	cmp    BYTE PTR [eax+0x104],0x0
  408863:	74 25                	je     0x40888a
  408865:	66 39 88 6a 02 00 00 	cmp    WORD PTR [eax+0x26a],cx
  40886c:	75 1c                	jne    0x40888a
  40886e:	66 39 88 64 02 00 00 	cmp    WORD PTR [eax+0x264],cx
  408875:	72 13                	jb     0x40888a
  408877:	6a 01                	push   0x1
  408879:	50                   	push   eax
  40887a:	8d 84 24 a0 04 00 00 	lea    eax,[esp+0x4a0]
  408881:	50                   	push   eax
  408882:	e8 43 16 00 00       	call   0x409eca
  408887:	83 c4 0c             	add    esp,0xc
  40888a:	46                   	inc    esi
  40888b:	3b 35 68 37 41 00    	cmp    esi,DWORD PTR ds:0x413768
  408891:	7c 8d                	jl     0x408820
  408893:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  40889a:	03 00 00 
  40889d:	8b 9c 24 dc 0d 00 00 	mov    ebx,DWORD PTR [esp+0xddc]
  4088a4:	75 19                	jne    0x4088bf
  4088a6:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  4088ad:	75 10                	jne    0x4088bf
  4088af:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  4088b6:	75 07                	jne    0x4088bf
  4088b8:	53                   	push   ebx
  4088b9:	e8 82 1b 00 00       	call   0x40a440
  4088be:	59                   	pop    ecx
  4088bf:	33 ed                	xor    ebp,ebp
  4088c1:	39 2d 88 3b 41 00    	cmp    DWORD PTR ds:0x413b88,ebp
  4088c7:	0f 8e 2c 01 00 00    	jle    0x4089f9
  4088cd:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  4088d4:	0f 85 1f 01 00 00    	jne    0x4089f9
  4088da:	8b 15 c4 36 41 00    	mov    edx,DWORD PTR ds:0x4136c4
  4088e0:	81 fa e8 03 00 00    	cmp    edx,0x3e8
  4088e6:	74 15                	je     0x4088fd
  4088e8:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4088ed:	8b 04 a8             	mov    eax,DWORD PTR [eax+ebp*4]
  4088f0:	83 b8 04 01 00 00 00 	cmp    DWORD PTR [eax+0x104],0x0
  4088f7:	0f 84 e9 00 00 00    	je     0x4089e6
  4088fd:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  408902:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  408907:	8b f5                	mov    esi,ebp
  408909:	c1 e6 02             	shl    esi,0x2
  40890c:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  40890f:	66 39 88 0a 01 00 00 	cmp    WORD PTR [eax+0x10a],cx
  408916:	0f 82 ca 00 00 00    	jb     0x4089e6
  40891c:	81 fa e9 03 00 00    	cmp    edx,0x3e9
  408922:	74 10                	je     0x408934
  408924:	66 39 88 08 01 00 00 	cmp    WORD PTR [eax+0x108],cx
  40892b:	8d 84 24 18 03 00 00 	lea    eax,[esp+0x318]
  408932:	72 07                	jb     0x40893b
  408934:	8d 84 24 d8 02 00 00 	lea    eax,[esp+0x2d8]
  40893b:	50                   	push   eax
  40893c:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408942:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  408948:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  40894d:	8b 3c 06             	mov    edi,DWORD PTR [esi+eax*1]
  408950:	57                   	push   edi
  408951:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  408957:	80 7c 38 ff 5c       	cmp    BYTE PTR [eax+edi*1-0x1],0x5c
  40895c:	75 15                	jne    0x408973
  40895e:	57                   	push   edi
  40895f:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  408965:	8b 0d fc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136fc
  40896b:	8b 0c 0e             	mov    ecx,DWORD PTR [esi+ecx*1]
  40896e:	80 64 08 ff 00       	and    BYTE PTR [eax+ecx*1-0x1],0x0
  408973:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  408978:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  40897b:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408981:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  408987:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  40898d:	68 ef 03 00 00       	push   0x3ef
  408992:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  408998:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  40899e:	50                   	push   eax
  40899f:	e8 34 0f 00 00       	call   0x4098d8
  4089a4:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  4089aa:	e8 77 06 00 00       	call   0x409026
  4089af:	a1 fc 36 41 00       	mov    eax,ds:0x4136fc
  4089b4:	83 c4 0c             	add    esp,0xc
  4089b7:	81 3d c4 36 41 00 e9 	cmp    DWORD PTR ds:0x4136c4,0x3e9
  4089be:	03 00 00 
  4089c1:	74 15                	je     0x4089d8
  4089c3:	8b 0c 06             	mov    ecx,DWORD PTR [esi+eax*1]
  4089c6:	66 8b 54 24 10       	mov    dx,WORD PTR [esp+0x10]
  4089cb:	66 39 91 08 01 00 00 	cmp    WORD PTR [ecx+0x108],dx
  4089d2:	73 04                	jae    0x4089d8
  4089d4:	33 c9                	xor    ecx,ecx
  4089d6:	eb 03                	jmp    0x4089db
  4089d8:	6a 01                	push   0x1
  4089da:	59                   	pop    ecx
  4089db:	51                   	push   ecx
  4089dc:	ff 34 06             	push   DWORD PTR [esi+eax*1]
  4089df:	e8 cb 07 00 00       	call   0x4091af
  4089e4:	59                   	pop    ecx
  4089e5:	59                   	pop    ecx
  4089e6:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  4089ec:	45                   	inc    ebp
  4089ed:	3b 2d 88 3b 41 00    	cmp    ebp,DWORD PTR ds:0x413b88
  4089f3:	0f 8c d4 fe ff ff    	jl     0x4088cd
  4089f9:	33 ed                	xor    ebp,ebp
  4089fb:	39 2d 70 37 41 00    	cmp    DWORD PTR ds:0x413770,ebp
  408a01:	74 37                	je     0x408a3a
  408a03:	39 2d 94 37 41 00    	cmp    DWORD PTR ds:0x413794,ebp
  408a09:	75 09                	jne    0x408a14
  408a0b:	53                   	push   ebx
  408a0c:	e8 2f 1a 00 00       	call   0x40a440
  408a11:	59                   	pop    ecx
  408a12:	eb 26                	jmp    0x408a3a
  408a14:	6a 01                	push   0x1
  408a16:	53                   	push   ebx
  408a17:	e8 9c 3b 00 00       	call   0x40c5b8
  408a1c:	8b f0                	mov    esi,eax
  408a1e:	59                   	pop    ecx
  408a1f:	83 fe ff             	cmp    esi,0xffffffff
  408a22:	59                   	pop    ecx
  408a23:	74 15                	je     0x408a3a
  408a25:	ff 35 94 37 41 00    	push   DWORD PTR ds:0x413794
  408a2b:	56                   	push   esi
  408a2c:	e8 41 3a 00 00       	call   0x40c472
  408a31:	56                   	push   esi
  408a32:	e8 88 39 00 00       	call   0x40c3bf
  408a37:	83 c4 0c             	add    esp,0xc
  408a3a:	39 2d fc 3a 41 00    	cmp    DWORD PTR ds:0x413afc,ebp
  408a40:	0f 8e 01 01 00 00    	jle    0x408b47
  408a46:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  408a4d:	0f 85 f4 00 00 00    	jne    0x408b47
  408a53:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408a5a:	03 00 00 
  408a5d:	74 15                	je     0x408a74
  408a5f:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  408a64:	8b 04 a8             	mov    eax,DWORD PTR [eax+ebp*4]
  408a67:	83 b8 1c 12 00 00 00 	cmp    DWORD PTR [eax+0x121c],0x0
  408a6e:	0f 84 c0 00 00 00    	je     0x408b34
  408a74:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  408a79:	66 8b 4c 24 10       	mov    cx,WORD PTR [esp+0x10]
  408a7e:	8b fd                	mov    edi,ebp
  408a80:	c1 e7 02             	shl    edi,0x2
  408a83:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  408a86:	66 39 88 20 12 00 00 	cmp    WORD PTR [eax+0x1220],cx
  408a8d:	0f 82 a1 00 00 00    	jb     0x408b34
  408a93:	8d 84 24 18 04 00 00 	lea    eax,[esp+0x418]
  408a9a:	50                   	push   eax
  408a9b:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408aa1:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  408aa7:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408aad:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  408ab3:	ff d3                	call   ebx
  408ab5:	8b 0d 84 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a84
  408abb:	8b f0                	mov    esi,eax
  408abd:	a1 54 37 41 00       	mov    eax,ds:0x413754
  408ac2:	8b 0c 0f             	mov    ecx,DWORD PTR [edi+ecx*1]
  408ac5:	03 f0                	add    esi,eax
  408ac7:	83 c1 08             	add    ecx,0x8
  408aca:	51                   	push   ecx
  408acb:	50                   	push   eax
  408acc:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  408ad2:	56                   	push   esi
  408ad3:	ff d3                	call   ebx
  408ad5:	83 f8 30             	cmp    eax,0x30
  408ad8:	7e 0f                	jle    0x408ae9
  408ada:	83 c6 2d             	add    esi,0x2d
  408add:	68 cc 25 41 00       	push   0x4125cc
  408ae2:	56                   	push   esi
  408ae3:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  408ae9:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408aef:	e8 32 05 00 00       	call   0x409026
  408af4:	a1 84 3a 41 00       	mov    eax,ds:0x413a84
  408af9:	83 3d 70 37 41 00 00 	cmp    DWORD PTR ds:0x413770,0x0
  408b00:	59                   	pop    ecx
  408b01:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  408b04:	8d 88 14 0a 00 00    	lea    ecx,[eax+0xa14]
  408b0a:	75 06                	jne    0x408b12
  408b0c:	8d 88 14 02 00 00    	lea    ecx,[eax+0x214]
  408b12:	6a 00                	push   0x0
  408b14:	51                   	push   ecx
  408b15:	8d 88 08 01 00 00    	lea    ecx,[eax+0x108]
  408b1b:	51                   	push   ecx
  408b1c:	8d 48 08             	lea    ecx,[eax+0x8]
  408b1f:	51                   	push   ecx
  408b20:	ff b0 18 12 00 00    	push   DWORD PTR [eax+0x1218]
  408b26:	ff b0 14 12 00 00    	push   DWORD PTR [eax+0x1214]
  408b2c:	e8 66 ef ff ff       	call   0x407a97
  408b31:	83 c4 18             	add    esp,0x18
  408b34:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  408b3a:	45                   	inc    ebp
  408b3b:	3b 2d fc 3a 41 00    	cmp    ebp,DWORD PTR ds:0x413afc
  408b41:	0f 8c ff fe ff ff    	jl     0x408a46
  408b47:	a1 9c 3b 41 00       	mov    eax,ds:0x413b9c
  408b4c:	48                   	dec    eax
  408b4d:	85 c0                	test   eax,eax
  408b4f:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  408b53:	0f 8c 23 02 00 00    	jl     0x408d7c
  408b59:	eb 04                	jmp    0x408b5f
  408b5b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  408b5f:	83 3d 24 37 41 00 00 	cmp    DWORD PTR ds:0x413724,0x0
  408b66:	0f 85 10 02 00 00    	jne    0x408d7c
  408b6c:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408b73:	03 00 00 
  408b76:	74 1a                	je     0x408b92
  408b78:	8b 0d cc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136cc
  408b7e:	8b 04 81             	mov    eax,DWORD PTR [ecx+eax*4]
  408b81:	83 b8 1c 02 00 00 00 	cmp    DWORD PTR [eax+0x21c],0x0
  408b88:	0f 84 de 01 00 00    	je     0x408d6c
  408b8e:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  408b92:	8b f0                	mov    esi,eax
  408b94:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  408b99:	c1 e6 02             	shl    esi,0x2
  408b9c:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408b9f:	66 8b 80 20 02 00 00 	mov    ax,WORD PTR [eax+0x220]
  408ba6:	66 3b 44 24 10       	cmp    ax,WORD PTR [esp+0x10]
  408bab:	0f 82 bb 01 00 00    	jb     0x408d6c
  408bb1:	8b 2d 68 01 41 00    	mov    ebp,DWORD PTR ds:0x410168
  408bb7:	8d 84 24 d8 03 00 00 	lea    eax,[esp+0x3d8]
  408bbe:	50                   	push   eax
  408bbf:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408bc5:	ff d5                	call   ebp
  408bc7:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408bcd:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  408bd3:	ff d3                	call   ebx
  408bd5:	8b 0d cc 36 41 00    	mov    ecx,DWORD PTR ds:0x4136cc
  408bdb:	8b f8                	mov    edi,eax
  408bdd:	a1 54 37 41 00       	mov    eax,ds:0x413754
  408be2:	8b 0c 0e             	mov    ecx,DWORD PTR [esi+ecx*1]
  408be5:	03 f8                	add    edi,eax
  408be7:	83 c1 08             	add    ecx,0x8
  408bea:	51                   	push   ecx
  408beb:	50                   	push   eax
  408bec:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  408bf2:	57                   	push   edi
  408bf3:	ff d3                	call   ebx
  408bf5:	83 f8 30             	cmp    eax,0x30
  408bf8:	7e 0b                	jle    0x408c05
  408bfa:	83 c7 2d             	add    edi,0x2d
  408bfd:	68 cc 25 41 00       	push   0x4125cc
  408c02:	57                   	push   edi
  408c03:	ff d5                	call   ebp
  408c05:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408c0b:	e8 16 04 00 00       	call   0x409026
  408c10:	83 3d b0 36 41 00 00 	cmp    DWORD PTR ds:0x4136b0,0x0
  408c17:	59                   	pop    ecx
  408c18:	0f 84 25 01 00 00    	je     0x408d43
  408c1e:	6a 01                	push   0x1
  408c20:	5b                   	pop    ebx
  408c21:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  408c26:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  408c2a:	51                   	push   ecx
  408c2b:	33 ff                	xor    edi,edi
  408c2d:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408c30:	6a 1f                	push   0x1f
  408c32:	57                   	push   edi
  408c33:	8d 48 08             	lea    ecx,[eax+0x8]
  408c36:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  408c3c:	51                   	push   ecx
  408c3d:	ff 34 85 30 20 41 00 	push   DWORD PTR [eax*4+0x412030]
  408c44:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  408c4a:	85 c0                	test   eax,eax
  408c4c:	0f 85 d7 00 00 00    	jne    0x408d29
  408c52:	3b df                	cmp    ebx,edi
  408c54:	74 18                	je     0x408c6e
  408c56:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  408c5b:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408c5e:	05 0c 01 00 00       	add    eax,0x10c
  408c63:	50                   	push   eax
  408c64:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
  408c68:	ff 15 2c 00 41 00    	call   DWORD PTR ds:0x41002c
  408c6e:	57                   	push   edi
  408c6f:	57                   	push   edi
  408c70:	57                   	push   edi
  408c71:	8d 44 24 28          	lea    eax,[esp+0x28]
  408c75:	57                   	push   edi
  408c76:	50                   	push   eax
  408c77:	8d 44 24 6c          	lea    eax,[esp+0x6c]
  408c7b:	33 db                	xor    ebx,ebx
  408c7d:	50                   	push   eax
  408c7e:	57                   	push   edi
  408c7f:	ff 74 24 34          	push   DWORD PTR [esp+0x34]
  408c83:	c7 44 24 3c 00 01 00 	mov    DWORD PTR [esp+0x3c],0x100
  408c8a:	00 
  408c8b:	ff 15 28 00 41 00    	call   DWORD PTR ds:0x410028
  408c91:	8b e8                	mov    ebp,eax
  408c93:	3b ef                	cmp    ebp,edi
  408c95:	74 58                	je     0x408cef
  408c97:	57                   	push   edi
  408c98:	57                   	push   edi
  408c99:	57                   	push   edi
  408c9a:	8d 44 24 28          	lea    eax,[esp+0x28]
  408c9e:	57                   	push   edi
  408c9f:	50                   	push   eax
  408ca0:	8d 44 24 6c          	lea    eax,[esp+0x6c]
  408ca4:	c7 44 24 30 00 01 00 	mov    DWORD PTR [esp+0x30],0x100
  408cab:	00 
  408cac:	50                   	push   eax
  408cad:	57                   	push   edi
  408cae:	ff 74 24 34          	push   DWORD PTR [esp+0x34]
  408cb2:	ff 15 24 00 41 00    	call   DWORD PTR ds:0x410024
  408cb8:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  408cbc:	8b e8                	mov    ebp,eax
  408cbe:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  408cc4:	3b ef                	cmp    ebp,edi
  408cc6:	0f 84 a0 00 00 00    	je     0x408d6c
  408ccc:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  408cd1:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408cd4:	8d 48 08             	lea    ecx,[eax+0x8]
  408cd7:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  408cdd:	51                   	push   ecx
  408cde:	ff 34 85 30 20 41 00 	push   DWORD PTR [eax*4+0x412030]
  408ce5:	ff 15 00 00 41 00    	call   DWORD PTR ds:0x410000
  408ceb:	33 ff                	xor    edi,edi
  408ced:	eb 0a                	jmp    0x408cf9
  408cef:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  408cf3:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  408cf9:	3b ef                	cmp    ebp,edi
  408cfb:	74 6f                	je     0x408d6c
  408cfd:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  408d02:	8b 3c 06             	mov    edi,DWORD PTR [esi+eax*1]
  408d05:	8b c7                	mov    eax,edi
  408d07:	83 c0 08             	add    eax,0x8
  408d0a:	50                   	push   eax
  408d0b:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  408d11:	8d 44 38 07          	lea    eax,[eax+edi*1+0x7]
  408d15:	8d 4f 08             	lea    ecx,[edi+0x8]
  408d18:	3b c1                	cmp    eax,ecx
  408d1a:	76 08                	jbe    0x408d24
  408d1c:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  408d1f:	74 03                	je     0x408d24
  408d21:	48                   	dec    eax
  408d22:	eb f4                	jmp    0x408d18
  408d24:	80 20 00             	and    BYTE PTR [eax],0x0
  408d27:	eb 02                	jmp    0x408d2b
  408d29:	33 ed                	xor    ebp,ebp
  408d2b:	85 ed                	test   ebp,ebp
  408d2d:	74 3d                	je     0x408d6c
  408d2f:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  408d34:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
  408d37:	80 78 08 00          	cmp    BYTE PTR [eax+0x8],0x0
  408d3b:	0f 85 e0 fe ff ff    	jne    0x408c21
  408d41:	eb 29                	jmp    0x408d6c
  408d43:	a1 cc 36 41 00       	mov    eax,ds:0x4136cc
  408d48:	8b 34 06             	mov    esi,DWORD PTR [esi+eax*1]
  408d4b:	80 be 0c 01 00 00 00 	cmp    BYTE PTR [esi+0x10c],0x0
  408d52:	75 18                	jne    0x408d6c
  408d54:	83 be 18 02 00 00 00 	cmp    DWORD PTR [esi+0x218],0x0
  408d5b:	75 0f                	jne    0x408d6c
  408d5d:	83 c6 08             	add    esi,0x8
  408d60:	56                   	push   esi
  408d61:	68 00 00 00 80       	push   0x80000000
  408d66:	ff 15 00 00 41 00    	call   DWORD PTR ds:0x410000
  408d6c:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  408d72:	ff 4c 24 14          	dec    DWORD PTR [esp+0x14]
  408d76:	0f 89 df fd ff ff    	jns    0x408b5b
  408d7c:	a1 04 3b 41 00       	mov    eax,ds:0x413b04
  408d81:	33 c9                	xor    ecx,ecx
  408d83:	8d 78 ff             	lea    edi,[eax-0x1]
  408d86:	3b f9                	cmp    edi,ecx
  408d88:	0f 8c c9 00 00 00    	jl     0x408e57
  408d8e:	8b 1d 70 01 41 00    	mov    ebx,DWORD PTR ds:0x410170
  408d94:	8b 2d fc 00 41 00    	mov    ebp,DWORD PTR ds:0x4100fc
  408d9a:	39 0d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ecx
  408da0:	0f 85 75 02 00 00    	jne    0x40901b
  408da6:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408dad:	03 00 00 
  408db0:	74 14                	je     0x408dc6
  408db2:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  408db7:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  408dba:	39 88 04 01 00 00    	cmp    DWORD PTR [eax+0x104],ecx
  408dc0:	0f 84 82 00 00 00    	je     0x408e48
  408dc6:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  408dcb:	66 8b 54 24 10       	mov    dx,WORD PTR [esp+0x10]
  408dd0:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  408dd3:	66 39 90 08 01 00 00 	cmp    WORD PTR [eax+0x108],dx
  408dda:	72 6c                	jb     0x408e48
  408ddc:	8d 84 24 18 05 00 00 	lea    eax,[esp+0x518]
  408de3:	50                   	push   eax
  408de4:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408dea:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  408df0:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408df6:	ff d3                	call   ebx
  408df8:	8b 0d c0 37 41 00    	mov    ecx,DWORD PTR ds:0x4137c0
  408dfe:	8b f0                	mov    esi,eax
  408e00:	a1 54 37 41 00       	mov    eax,ds:0x413754
  408e05:	ff 34 b9             	push   DWORD PTR [ecx+edi*4]
  408e08:	03 f0                	add    esi,eax
  408e0a:	50                   	push   eax
  408e0b:	ff d5                	call   ebp
  408e0d:	56                   	push   esi
  408e0e:	ff d3                	call   ebx
  408e10:	83 f8 30             	cmp    eax,0x30
  408e13:	7e 0f                	jle    0x408e24
  408e15:	83 c6 2d             	add    esi,0x2d
  408e18:	68 cc 25 41 00       	push   0x4125cc
  408e1d:	56                   	push   esi
  408e1e:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  408e24:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408e2a:	e8 f7 01 00 00       	call   0x409026
  408e2f:	a1 c0 37 41 00       	mov    eax,ds:0x4137c0
  408e34:	8b 04 b8             	mov    eax,DWORD PTR [eax+edi*4]
  408e37:	ff b0 00 01 00 00    	push   DWORD PTR [eax+0x100]
  408e3d:	50                   	push   eax
  408e3e:	e8 3e 14 00 00       	call   0x40a281
  408e43:	83 c4 0c             	add    esp,0xc
  408e46:	33 c9                	xor    ecx,ecx
  408e48:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  408e4e:	4f                   	dec    edi
  408e4f:	0f 89 45 ff ff ff    	jns    0x408d9a
  408e55:	eb 06                	jmp    0x408e5d
  408e57:	8b 2d fc 00 41 00    	mov    ebp,DWORD PTR ds:0x4100fc
  408e5d:	39 0d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ecx
  408e63:	0f 85 b2 01 00 00    	jne    0x40901b
  408e69:	6a 01                	push   0x1
  408e6b:	33 f6                	xor    esi,esi
  408e6d:	39 0d c8 36 41 00    	cmp    DWORD PTR ds:0x4136c8,ecx
  408e73:	5f                   	pop    edi
  408e74:	0f 8e cb 00 00 00    	jle    0x408f45
  408e7a:	39 0d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ecx
  408e80:	0f 85 97 00 00 00    	jne    0x408f1d
  408e86:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408e8d:	03 00 00 
  408e90:	74 10                	je     0x408ea2
  408e92:	a1 34 37 41 00       	mov    eax,ds:0x413734
  408e97:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408e9a:	39 88 00 03 00 00    	cmp    DWORD PTR [eax+0x300],ecx
  408ea0:	74 68                	je     0x408f0a
  408ea2:	a1 34 37 41 00       	mov    eax,ds:0x413734
  408ea7:	66 8b 54 24 10       	mov    dx,WORD PTR [esp+0x10]
  408eac:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408eaf:	66 39 90 04 03 00 00 	cmp    WORD PTR [eax+0x304],dx
  408eb6:	74 08                	je     0x408ec0
  408eb8:	39 0d 70 37 41 00    	cmp    DWORD PTR ds:0x413770,ecx
  408ebe:	75 4a                	jne    0x408f0a
  408ec0:	3b f9                	cmp    edi,ecx
  408ec2:	74 07                	je     0x408ecb
  408ec4:	e8 6b 05 00 00       	call   0x409434
  408ec9:	33 ff                	xor    edi,edi
  408ecb:	8d 84 24 58 04 00 00 	lea    eax,[esp+0x458]
  408ed2:	50                   	push   eax
  408ed3:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408ed9:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  408edf:	a1 34 37 41 00       	mov    eax,ds:0x413734
  408ee4:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  408ee7:	05 00 01 00 00       	add    eax,0x100
  408eec:	50                   	push   eax
  408eed:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408ef3:	ff d5                	call   ebp
  408ef5:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  408efb:	e8 26 01 00 00       	call   0x409026
  408f00:	56                   	push   esi
  408f01:	e8 fb 06 00 00       	call   0x409601
  408f06:	59                   	pop    ecx
  408f07:	59                   	pop    ecx
  408f08:	33 c9                	xor    ecx,ecx
  408f0a:	ff 05 f8 36 41 00    	inc    DWORD PTR ds:0x4136f8
  408f10:	46                   	inc    esi
  408f11:	3b 35 c8 36 41 00    	cmp    esi,DWORD PTR ds:0x4136c8
  408f17:	0f 8c 5d ff ff ff    	jl     0x408e7a
  408f1d:	3b f9                	cmp    edi,ecx
  408f1f:	75 24                	jne    0x408f45
  408f21:	a1 28 37 41 00       	mov    eax,ds:0x413728
  408f26:	3b c1                	cmp    eax,ecx
  408f28:	74 06                	je     0x408f30
  408f2a:	50                   	push   eax
  408f2b:	e8 42 2f 00 00       	call   0x40be72
  408f30:	6a 00                	push   0x0
  408f32:	e8 ef 00 00 00       	call   0x409026
  408f37:	59                   	pop    ecx
  408f38:	ff 35 bc 36 41 00    	push   DWORD PTR ds:0x4136bc
  408f3e:	e8 29 2f 00 00       	call   0x40be6c
  408f43:	33 c9                	xor    ecx,ecx
  408f45:	39 0d 84 37 41 00    	cmp    DWORD PTR ds:0x413784,ecx
  408f4b:	0f 84 ca 00 00 00    	je     0x40901b
  408f51:	81 3d c4 36 41 00 e8 	cmp    DWORD PTR ds:0x4136c4,0x3e8
  408f58:	03 00 00 
  408f5b:	75 08                	jne    0x408f65
  408f5d:	39 0d 70 37 41 00    	cmp    DWORD PTR ds:0x413770,ecx
  408f63:	74 18                	je     0x408f7d
  408f65:	39 0d 70 37 41 00    	cmp    DWORD PTR ds:0x413770,ecx
  408f6b:	0f 84 aa 00 00 00    	je     0x40901b
  408f71:	39 0d 94 37 41 00    	cmp    DWORD PTR ds:0x413794,ecx
  408f77:	0f 85 9e 00 00 00    	jne    0x40901b
  408f7d:	39 0d b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,ecx
  408f83:	0f 84 92 00 00 00    	je     0x40901b
  408f89:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  408f8d:	33 f6                	xor    esi,esi
  408f8f:	50                   	push   eax
  408f90:	6a 1f                	push   0x1f
  408f92:	56                   	push   esi
  408f93:	68 ac 25 41 00       	push   0x4125ac
  408f98:	68 02 00 00 80       	push   0x80000002
  408f9d:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  408fa3:	85 c0                	test   eax,eax
  408fa5:	75 74                	jne    0x40901b
  408fa7:	8d 44 24 18          	lea    eax,[esp+0x18]
  408fab:	c7 44 24 18 00 01 00 	mov    DWORD PTR [esp+0x18],0x100
  408fb2:	00 
  408fb3:	50                   	push   eax
  408fb4:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  408fb8:	50                   	push   eax
  408fb9:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  408fbd:	50                   	push   eax
  408fbe:	56                   	push   esi
  408fbf:	68 a4 25 41 00       	push   0x4125a4
  408fc4:	ff 74 24 30          	push   DWORD PTR [esp+0x30]
  408fc8:	ff 15 08 00 41 00    	call   DWORD PTR ds:0x410008
  408fce:	85 c0                	test   eax,eax
  408fd0:	75 3f                	jne    0x409011
  408fd2:	8d 44 24 58          	lea    eax,[esp+0x58]
  408fd6:	56                   	push   esi
  408fd7:	50                   	push   eax
  408fd8:	e8 b7 17 00 00       	call   0x40a794
  408fdd:	59                   	pop    ecx
  408fde:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  408fe2:	59                   	pop    ecx
  408fe3:	68 9c 25 41 00       	push   0x41259c
  408fe8:	50                   	push   eax
  408fe9:	ff d5                	call   ebp
  408feb:	ff 35 84 37 41 00    	push   DWORD PTR ds:0x413784
  408ff1:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  408ff5:	50                   	push   eax
  408ff6:	ff d5                	call   ebp
  408ff8:	8d 44 24 58          	lea    eax,[esp+0x58]
  408ffc:	68 98 25 41 00       	push   0x412598
  409001:	50                   	push   eax
  409002:	ff d5                	call   ebp
  409004:	8d 44 24 58          	lea    eax,[esp+0x58]
  409008:	6a 05                	push   0x5
  40900a:	50                   	push   eax
  40900b:	ff 15 20 01 41 00    	call   DWORD PTR ds:0x410120
  409011:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
  409015:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  40901b:	5f                   	pop    edi
  40901c:	5e                   	pop    esi
  40901d:	5d                   	pop    ebp
  40901e:	5b                   	pop    ebx
  40901f:	81 c4 c8 0d 00 00    	add    esp,0xdc8
  409025:	c3                   	ret
  409026:	55                   	push   ebp
  409027:	8b ec                	mov    ebp,esp
  409029:	81 ec 18 08 00 00    	sub    esp,0x818
  40902f:	83 3d 90 36 41 00 00 	cmp    DWORD PTR ds:0x413690,0x0
  409036:	0f 84 e6 00 00 00    	je     0x409122
  40903c:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
  409040:	56                   	push   esi
  409041:	74 62                	je     0x4090a5
  409043:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409046:	8d 85 e8 fb ff ff    	lea    eax,[ebp-0x418]
  40904c:	68 e8 25 41 00       	push   0x4125e8
  409051:	50                   	push   eax
  409052:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  409058:	83 c4 0c             	add    esp,0xc
  40905b:	8d 85 e8 f7 ff ff    	lea    eax,[ebp-0x818]
  409061:	be ef 03 00 00       	mov    esi,0x3ef
  409066:	68 00 04 00 00       	push   0x400
  40906b:	50                   	push   eax
  40906c:	56                   	push   esi
  40906d:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  409073:	ff 15 d4 02 41 00    	call   DWORD PTR ds:0x4102d4
  409079:	8d 85 e8 fb ff ff    	lea    eax,[ebp-0x418]
  40907f:	50                   	push   eax
  409080:	8d 85 e8 f7 ff ff    	lea    eax,[ebp-0x818]
  409086:	50                   	push   eax
  409087:	ff 15 60 01 41 00    	call   DWORD PTR ds:0x410160
  40908d:	85 c0                	test   eax,eax
  40908f:	74 14                	je     0x4090a5
  409091:	8d 85 e8 fb ff ff    	lea    eax,[ebp-0x418]
  409097:	50                   	push   eax
  409098:	56                   	push   esi
  409099:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40909f:	ff 15 cc 02 41 00    	call   DWORD PTR ds:0x4102cc
  4090a5:	8d 45 e8             	lea    eax,[ebp-0x18]
  4090a8:	50                   	push   eax
  4090a9:	68 f6 0e 00 00       	push   0xef6
  4090ae:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4090b4:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  4090ba:	50                   	push   eax
  4090bb:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  4090c1:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  4090c4:	8b 35 dc 02 41 00    	mov    esi,DWORD PTR ds:0x4102dc
  4090ca:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  4090cd:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  4090d0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  4090d3:	8d 45 f8             	lea    eax,[ebp-0x8]
  4090d6:	50                   	push   eax
  4090d7:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  4090dd:	ff d6                	call   esi
  4090df:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  4090e2:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  4090e5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4090e8:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  4090eb:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  4090ee:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  4090f1:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  4090f4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  4090f7:	8d 45 f8             	lea    eax,[ebp-0x8]
  4090fa:	50                   	push   eax
  4090fb:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  409101:	ff d6                	call   esi
  409103:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  409106:	6a 00                	push   0x0
  409108:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  40910b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40910e:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  409111:	8d 45 e8             	lea    eax,[ebp-0x18]
  409114:	50                   	push   eax
  409115:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40911b:	ff 15 b8 02 41 00    	call   DWORD PTR ds:0x4102b8
  409121:	5e                   	pop    esi
  409122:	6a 01                	push   0x1
  409124:	e8 03 00 00 00       	call   0x40912c
  409129:	59                   	pop    ecx
  40912a:	c9                   	leave
  40912b:	c3                   	ret
  40912c:	55                   	push   ebp
  40912d:	8b ec                	mov    ebp,esp
  40912f:	83 ec 1c             	sub    esp,0x1c
  409132:	56                   	push   esi
  409133:	57                   	push   edi
  409134:	33 ff                	xor    edi,edi
  409136:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
  409139:	74 21                	je     0x40915c
  40913b:	57                   	push   edi
  40913c:	c7 05 ac 3a 41 00 01 	mov    DWORD PTR ds:0x413aac,0x1
  409143:	00 00 00 
  409146:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409149:	68 6a 20 00 00       	push   0x206a
  40914e:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  409154:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  40915a:	eb 06                	jmp    0x409162
  40915c:	89 3d ac 3a 41 00    	mov    DWORD PTR ds:0x413aac,edi
  409162:	8b 35 5c 02 41 00    	mov    esi,DWORD PTR ds:0x41025c
  409168:	6a 01                	push   0x1
  40916a:	57                   	push   edi
  40916b:	57                   	push   edi
  40916c:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40916f:	57                   	push   edi
  409170:	50                   	push   eax
  409171:	ff d6                	call   esi
  409173:	85 c0                	test   eax,eax
  409175:	74 16                	je     0x40918d
  409177:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40917a:	50                   	push   eax
  40917b:	ff 15 64 02 41 00    	call   DWORD PTR ds:0x410264
  409181:	8d 45 e4             	lea    eax,[ebp-0x1c]
  409184:	50                   	push   eax
  409185:	ff 15 38 03 41 00    	call   DWORD PTR ds:0x410338
  40918b:	eb db                	jmp    0x409168
  40918d:	39 3d ac 3a 41 00    	cmp    DWORD PTR ds:0x413aac,edi
  409193:	75 d3                	jne    0x409168
  409195:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
  409198:	5f                   	pop    edi
  409199:	5e                   	pop    esi
  40919a:	74 11                	je     0x4091ad
  40919c:	68 6a 20 00 00       	push   0x206a
  4091a1:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  4091a7:	ff 15 3c 03 41 00    	call   DWORD PTR ds:0x41033c
  4091ad:	c9                   	leave
  4091ae:	c3                   	ret
  4091af:	55                   	push   ebp
  4091b0:	8b ec                	mov    ebp,esp
  4091b2:	81 ec 48 05 00 00    	sub    esp,0x548
  4091b8:	53                   	push   ebx
  4091b9:	56                   	push   esi
  4091ba:	57                   	push   edi
  4091bb:	8b 3d 68 01 41 00    	mov    edi,DWORD PTR ds:0x410168
  4091c1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4091c4:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  4091ca:	50                   	push   eax
  4091cb:	ff d7                	call   edi
  4091cd:	bb 04 23 41 00       	mov    ebx,0x412304
  4091d2:	8d 85 b8 fa ff ff    	lea    eax,[ebp-0x548]
  4091d8:	53                   	push   ebx
  4091d9:	50                   	push   eax
  4091da:	ff d7                	call   edi
  4091dc:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  4091e2:	6a 2a                	push   0x2a
  4091e4:	50                   	push   eax
  4091e5:	e8 62 2c 00 00       	call   0x40be4c
  4091ea:	59                   	pop    ecx
  4091eb:	85 c0                	test   eax,eax
  4091ed:	59                   	pop    ecx
  4091ee:	75 14                	jne    0x409204
  4091f0:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  4091f6:	6a 3f                	push   0x3f
  4091f8:	50                   	push   eax
  4091f9:	e8 4e 2c 00 00       	call   0x40be4c
  4091fe:	59                   	pop    ecx
  4091ff:	85 c0                	test   eax,eax
  409201:	59                   	pop    ecx
  409202:	74 27                	je     0x40922b
  409204:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  40920a:	50                   	push   eax
  40920b:	e8 2f 23 00 00       	call   0x40b53f
  409210:	59                   	pop    ecx
  409211:	8d 8d 00 fe ff ff    	lea    ecx,[ebp-0x200]
  409217:	3b c1                	cmp    eax,ecx
  409219:	76 10                	jbe    0x40922b
  40921b:	8d 70 ff             	lea    esi,[eax-0x1]
  40921e:	8d 85 b8 fa ff ff    	lea    eax,[ebp-0x548]
  409224:	56                   	push   esi
  409225:	50                   	push   eax
  409226:	ff d7                	call   edi
  409228:	80 26 00             	and    BYTE PTR [esi],0x0
  40922b:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  409231:	50                   	push   eax
  409232:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  409238:	83 f8 04             	cmp    eax,0x4
  40923b:	0f 8c ee 01 00 00    	jl     0x40942f
  409241:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409247:	68 00 01 00 00       	push   0x100
  40924c:	50                   	push   eax
  40924d:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  409253:	8b 35 64 01 41 00    	mov    esi,DWORD PTR ds:0x410164
  409259:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40925f:	50                   	push   eax
  409260:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  409266:	50                   	push   eax
  409267:	ff d6                	call   esi
  409269:	85 c0                	test   eax,eax
  40926b:	0f 84 be 01 00 00    	je     0x40942f
  409271:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409277:	68 00 01 00 00       	push   0x100
  40927c:	50                   	push   eax
  40927d:	ff 15 58 01 41 00    	call   DWORD PTR ds:0x410158
  409283:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409289:	50                   	push   eax
  40928a:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  409290:	50                   	push   eax
  409291:	ff d6                	call   esi
  409293:	85 c0                	test   eax,eax
  409295:	0f 84 94 01 00 00    	je     0x40942f
  40929b:	a1 38 37 41 00       	mov    eax,ds:0x413738
  4092a0:	85 c0                	test   eax,eax
  4092a2:	74 12                	je     0x4092b6
  4092a4:	50                   	push   eax
  4092a5:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  4092ab:	50                   	push   eax
  4092ac:	ff d6                	call   esi
  4092ae:	85 c0                	test   eax,eax
  4092b0:	0f 84 79 01 00 00    	je     0x40942f
  4092b6:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  4092bc:	50                   	push   eax
  4092bd:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4092c3:	50                   	push   eax
  4092c4:	ff d7                	call   edi
  4092c6:	8b 35 fc 00 41 00    	mov    esi,DWORD PTR ds:0x4100fc
  4092cc:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4092d2:	53                   	push   ebx
  4092d3:	50                   	push   eax
  4092d4:	ff d6                	call   esi
  4092d6:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  4092dc:	50                   	push   eax
  4092dd:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4092e3:	6a 17                	push   0x17
  4092e5:	50                   	push   eax
  4092e6:	e8 13 14 00 00       	call   0x40a6fe
  4092eb:	83 c4 0c             	add    esp,0xc
  4092ee:	bb e0 20 41 00       	mov    ebx,0x4120e0
  4092f3:	85 c0                	test   eax,eax
  4092f5:	75 6c                	jne    0x409363
  4092f7:	f6 85 b8 fc ff ff 10 	test   BYTE PTR [ebp-0x348],0x10
  4092fe:	74 54                	je     0x409354
  409300:	80 bd b8 fb ff ff 2e 	cmp    BYTE PTR [ebp-0x448],0x2e
  409307:	74 4b                	je     0x409354
  409309:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  40930f:	50                   	push   eax
  409310:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409316:	50                   	push   eax
  409317:	ff d7                	call   edi
  409319:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40931f:	53                   	push   ebx
  409320:	50                   	push   eax
  409321:	ff d6                	call   esi
  409323:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  409329:	50                   	push   eax
  40932a:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409330:	50                   	push   eax
  409331:	ff d6                	call   esi
  409333:	8d 85 b8 fa ff ff    	lea    eax,[ebp-0x548]
  409339:	50                   	push   eax
  40933a:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409340:	50                   	push   eax
  409341:	ff d6                	call   esi
  409343:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  409346:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40934c:	50                   	push   eax
  40934d:	e8 5d fe ff ff       	call   0x4091af
  409352:	59                   	pop    ecx
  409353:	59                   	pop    ecx
  409354:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  40935a:	50                   	push   eax
  40935b:	e8 e0 13 00 00       	call   0x40a740
  409360:	59                   	pop    ecx
  409361:	eb 90                	jmp    0x4092f3
  409363:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  409369:	50                   	push   eax
  40936a:	e8 0e 14 00 00       	call   0x40a77d
  40936f:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
  409373:	59                   	pop    ecx
  409374:	0f 84 a8 00 00 00    	je     0x409422
  40937a:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  409380:	50                   	push   eax
  409381:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409387:	50                   	push   eax
  409388:	ff d7                	call   edi
  40938a:	8d 85 b8 fa ff ff    	lea    eax,[ebp-0x548]
  409390:	50                   	push   eax
  409391:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409397:	50                   	push   eax
  409398:	ff d6                	call   esi
  40939a:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  4093a0:	50                   	push   eax
  4093a1:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4093a7:	6a 07                	push   0x7
  4093a9:	50                   	push   eax
  4093aa:	e8 4f 13 00 00       	call   0x40a6fe
  4093af:	83 c4 0c             	add    esp,0xc
  4093b2:	85 c0                	test   eax,eax
  4093b4:	75 5f                	jne    0x409415
  4093b6:	f6 85 b8 fc ff ff 10 	test   BYTE PTR [ebp-0x348],0x10
  4093bd:	75 47                	jne    0x409406
  4093bf:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  4093c5:	50                   	push   eax
  4093c6:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4093cc:	50                   	push   eax
  4093cd:	ff d7                	call   edi
  4093cf:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4093d5:	53                   	push   ebx
  4093d6:	50                   	push   eax
  4093d7:	ff d6                	call   esi
  4093d9:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  4093df:	50                   	push   eax
  4093e0:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4093e6:	50                   	push   eax
  4093e7:	ff d6                	call   esi
  4093e9:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4093ef:	6a 00                	push   0x0
  4093f1:	50                   	push   eax
  4093f2:	e8 e4 12 00 00       	call   0x40a6db
  4093f7:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  4093fd:	50                   	push   eax
  4093fe:	e8 3d 10 00 00       	call   0x40a440
  409403:	83 c4 0c             	add    esp,0xc
  409406:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  40940c:	50                   	push   eax
  40940d:	e8 2e 13 00 00       	call   0x40a740
  409412:	59                   	pop    ecx
  409413:	eb 9d                	jmp    0x4093b2
  409415:	8d 85 b8 fb ff ff    	lea    eax,[ebp-0x448]
  40941b:	50                   	push   eax
  40941c:	e8 5c 13 00 00       	call   0x40a77d
  409421:	59                   	pop    ecx
  409422:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  409428:	50                   	push   eax
  409429:	e8 d1 0f 00 00       	call   0x40a3ff
  40942e:	59                   	pop    ecx
  40942f:	5f                   	pop    edi
  409430:	5e                   	pop    esi
  409431:	5b                   	pop    ebx
  409432:	c9                   	leave
  409433:	c3                   	ret
  409434:	55                   	push   ebp
  409435:	8b ec                	mov    ebp,esp
  409437:	81 ec 08 01 00 00    	sub    esp,0x108
  40943d:	53                   	push   ebx
  40943e:	56                   	push   esi
  40943f:	33 db                	xor    ebx,ebx
  409441:	57                   	push   edi
  409442:	53                   	push   ebx
  409443:	68 00 f0 03 00       	push   0x3f000
  409448:	68 26 3d 40 00       	push   0x403d26
  40944d:	68 bc 36 41 00       	push   0x4136bc
  409452:	e8 3f 2a 00 00       	call   0x40be96
  409457:	85 c0                	test   eax,eax
  409459:	0f 85 9d 01 00 00    	jne    0x4095fc
  40945f:	bf ec 03 00 00       	mov    edi,0x3ec
  409464:	57                   	push   edi
  409465:	68 f8 25 41 00       	push   0x4125f8
  40946a:	ff 35 bc 36 41 00    	push   DWORD PTR ds:0x4136bc
  409470:	e8 1b 2a 00 00       	call   0x40be90
  409475:	53                   	push   ebx
  409476:	50                   	push   eax
  409477:	50                   	push   eax
  409478:	ff 35 bc 36 41 00    	push   DWORD PTR ds:0x4136bc
  40947e:	e8 07 2a 00 00       	call   0x40be8a
  409483:	3b c3                	cmp    eax,ebx
  409485:	a3 28 37 41 00       	mov    ds:0x413728,eax
  40948a:	0f 84 6c 01 00 00    	je     0x4095fc
  409490:	57                   	push   edi
  409491:	68 f0 25 41 00       	push   0x4125f0
  409496:	ff 35 bc 36 41 00    	push   DWORD PTR ds:0x4136bc
  40949c:	e8 ef 29 00 00       	call   0x40be90
  4094a1:	53                   	push   ebx
  4094a2:	68 88 13 00 00       	push   0x1388
  4094a7:	68 b0 20 00 00       	push   0x20b0
  4094ac:	6a 01                	push   0x1
  4094ae:	50                   	push   eax
  4094af:	ff 35 28 37 41 00    	push   DWORD PTR ds:0x413728
  4094b5:	53                   	push   ebx
  4094b6:	53                   	push   ebx
  4094b7:	e8 c8 29 00 00       	call   0x40be84
  4094bc:	8b f0                	mov    esi,eax
  4094be:	3b f3                	cmp    esi,ebx
  4094c0:	0f 84 36 01 00 00    	je     0x4095fc
  4094c6:	53                   	push   ebx
  4094c7:	68 00 40 00 00       	push   0x4000
  4094cc:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  4094d2:	56                   	push   esi
  4094d3:	e8 a6 29 00 00       	call   0x40be7e
  4094d8:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  4094de:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4094e4:	40                   	inc    eax
  4094e5:	50                   	push   eax
  4094e6:	e8 86 21 00 00       	call   0x40b671
  4094eb:	59                   	pop    ecx
  4094ec:	a3 dc 36 41 00       	mov    ds:0x4136dc,eax
  4094f1:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  4094f7:	50                   	push   eax
  4094f8:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  4094fe:	56                   	push   esi
  4094ff:	e8 74 29 00 00       	call   0x40be78
  409504:	8b 35 dc 36 41 00    	mov    esi,DWORD PTR ds:0x4136dc
  40950a:	38 1e                	cmp    BYTE PTR [esi],bl
  40950c:	0f 84 ea 00 00 00    	je     0x4095fc
  409512:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
  409515:	6a 0d                	push   0xd
  409517:	56                   	push   esi
  409518:	e8 2f 29 00 00       	call   0x40be4c
  40951d:	59                   	pop    ecx
  40951e:	3b c3                	cmp    eax,ebx
  409520:	59                   	pop    ecx
  409521:	75 10                	jne    0x409533
  409523:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  409529:	56                   	push   esi
  40952a:	50                   	push   eax
  40952b:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  409531:	eb 20                	jmp    0x409553
  409533:	2b c6                	sub    eax,esi
  409535:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  409538:	50                   	push   eax
  409539:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40953f:	56                   	push   esi
  409540:	50                   	push   eax
  409541:	e8 3a 2c 00 00       	call   0x40c180
  409546:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  409549:	83 c4 0c             	add    esp,0xc
  40954c:	88 9c 05 f8 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x108],bl
  409553:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  409559:	57                   	push   edi
  40955a:	50                   	push   eax
  40955b:	ff 35 bc 36 41 00    	push   DWORD PTR ds:0x4136bc
  409561:	e8 2a 29 00 00       	call   0x40be90
  409566:	53                   	push   ebx
  409567:	68 88 13 00 00       	push   0x1388
  40956c:	68 b0 20 00 00       	push   0x20b0
  409571:	6a 01                	push   0x1
  409573:	50                   	push   eax
  409574:	ff 35 28 37 41 00    	push   DWORD PTR ds:0x413728
  40957a:	53                   	push   ebx
  40957b:	53                   	push   ebx
  40957c:	e8 03 29 00 00       	call   0x40be84
  409581:	3b c3                	cmp    eax,ebx
  409583:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  409586:	74 52                	je     0x4095da
  409588:	53                   	push   ebx
  409589:	68 00 40 00 00       	push   0x4000
  40958e:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  409594:	50                   	push   eax
  409595:	e8 e4 28 00 00       	call   0x40be7e
  40959a:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  4095a0:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  4095a6:	40                   	inc    eax
  4095a7:	50                   	push   eax
  4095a8:	e8 c4 20 00 00       	call   0x40b671
  4095ad:	8b 15 90 37 41 00    	mov    edx,DWORD PTR ds:0x413790
  4095b3:	59                   	pop    ecx
  4095b4:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  4095b7:	89 04 11             	mov    DWORD PTR [ecx+edx*1],eax
  4095ba:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  4095c0:	a1 90 37 41 00       	mov    eax,ds:0x413790
  4095c5:	ff 34 01             	push   DWORD PTR [ecx+eax*1]
  4095c8:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  4095ce:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  4095d1:	83 45 f8 04          	add    DWORD PTR [ebp-0x8],0x4
  4095d5:	e8 9e 28 00 00       	call   0x40be78
  4095da:	8a 06                	mov    al,BYTE PTR [esi]
  4095dc:	3a c3                	cmp    al,bl
  4095de:	74 07                	je     0x4095e7
  4095e0:	3c 0d                	cmp    al,0xd
  4095e2:	74 03                	je     0x4095e7
  4095e4:	46                   	inc    esi
  4095e5:	eb f3                	jmp    0x4095da
  4095e7:	8a 06                	mov    al,BYTE PTR [esi]
  4095e9:	3c 0d                	cmp    al,0xd
  4095eb:	74 04                	je     0x4095f1
  4095ed:	3c 0a                	cmp    al,0xa
  4095ef:	75 03                	jne    0x4095f4
  4095f1:	46                   	inc    esi
  4095f2:	eb f3                	jmp    0x4095e7
  4095f4:	38 1e                	cmp    BYTE PTR [esi],bl
  4095f6:	0f 85 19 ff ff ff    	jne    0x409515
  4095fc:	5f                   	pop    edi
  4095fd:	5e                   	pop    esi
  4095fe:	5b                   	pop    ebx
  4095ff:	c9                   	leave
  409600:	c3                   	ret
  409601:	55                   	push   ebp
  409602:	8b ec                	mov    ebp,esp
  409604:	81 ec 08 04 00 00    	sub    esp,0x408
  40960a:	a1 90 37 41 00       	mov    eax,ds:0x413790
  40960f:	83 38 00             	cmp    DWORD PTR [eax],0x0
  409612:	0f 84 35 02 00 00    	je     0x40984d
  409618:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
  40961c:	53                   	push   ebx
  40961d:	56                   	push   esi
  40961e:	57                   	push   edi
  40961f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  409622:	8b 0c 01             	mov    ecx,DWORD PTR [ecx+eax*1]
  409625:	80 39 22             	cmp    BYTE PTR [ecx],0x22
  409628:	0f 85 0b 02 00 00    	jne    0x409839
  40962e:	8d 71 01             	lea    esi,[ecx+0x1]
  409631:	6a 22                	push   0x22
  409633:	56                   	push   esi
  409634:	e8 13 28 00 00       	call   0x40be4c
  409639:	59                   	pop    ecx
  40963a:	85 c0                	test   eax,eax
  40963c:	59                   	pop    ecx
  40963d:	0f 84 f1 01 00 00    	je     0x409834
  409643:	8b f8                	mov    edi,eax
  409645:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
  40964b:	2b fe                	sub    edi,esi
  40964d:	57                   	push   edi
  40964e:	56                   	push   esi
  40964f:	50                   	push   eax
  409650:	e8 2b 2b 00 00       	call   0x40c180
  409655:	83 c4 0c             	add    esp,0xc
  409658:	80 a4 3d f8 fd ff ff 	and    BYTE PTR [ebp+edi*1-0x208],0x0
  40965f:	00 
  409660:	8a 06                	mov    al,BYTE PTR [esi]
  409662:	84 c0                	test   al,al
  409664:	74 07                	je     0x40966d
  409666:	3c 0d                	cmp    al,0xd
  409668:	74 03                	je     0x40966d
  40966a:	46                   	inc    esi
  40966b:	eb f3                	jmp    0x409660
  40966d:	80 3e 00             	cmp    BYTE PTR [esi],0x0
  409670:	74 02                	je     0x409674
  409672:	46                   	inc    esi
  409673:	46                   	inc    esi
  409674:	8a 06                	mov    al,BYTE PTR [esi]
  409676:	84 c0                	test   al,al
  409678:	0f 84 b6 01 00 00    	je     0x409834
  40967e:	3c 22                	cmp    al,0x22
  409680:	0f 85 99 01 00 00    	jne    0x40981f
  409686:	89 75 f8             	mov    DWORD PTR [ebp-0x8],esi
  409689:	46                   	inc    esi
  40968a:	6a 22                	push   0x22
  40968c:	56                   	push   esi
  40968d:	e8 ba 27 00 00       	call   0x40be4c
  409692:	8b f8                	mov    edi,eax
  409694:	59                   	pop    ecx
  409695:	85 ff                	test   edi,edi
  409697:	59                   	pop    ecx
  409698:	0f 84 81 01 00 00    	je     0x40981f
  40969e:	8b df                	mov    ebx,edi
  4096a0:	8d 85 f8 fc ff ff    	lea    eax,[ebp-0x308]
  4096a6:	2b de                	sub    ebx,esi
  4096a8:	53                   	push   ebx
  4096a9:	56                   	push   esi
  4096aa:	50                   	push   eax
  4096ab:	e8 d0 2a 00 00       	call   0x40c180
  4096b0:	80 a4 1d f8 fc ff ff 	and    BYTE PTR [ebp+ebx*1-0x308],0x0
  4096b7:	00 
  4096b8:	8d 77 01             	lea    esi,[edi+0x1]
  4096bb:	83 c4 0c             	add    esp,0xc
  4096be:	80 3e 2c             	cmp    BYTE PTR [esi],0x2c
  4096c1:	0f 85 58 01 00 00    	jne    0x40981f
  4096c7:	80 7e 01 22          	cmp    BYTE PTR [esi+0x1],0x22
  4096cb:	0f 85 4e 01 00 00    	jne    0x40981f
  4096d1:	46                   	inc    esi
  4096d2:	6a 22                	push   0x22
  4096d4:	46                   	inc    esi
  4096d5:	56                   	push   esi
  4096d6:	e8 71 27 00 00       	call   0x40be4c
  4096db:	59                   	pop    ecx
  4096dc:	85 c0                	test   eax,eax
  4096de:	59                   	pop    ecx
  4096df:	0f 84 3a 01 00 00    	je     0x40981f
  4096e5:	8b f8                	mov    edi,eax
  4096e7:	8d 85 f8 fb ff ff    	lea    eax,[ebp-0x408]
  4096ed:	2b fe                	sub    edi,esi
  4096ef:	57                   	push   edi
  4096f0:	56                   	push   esi
  4096f1:	50                   	push   eax
  4096f2:	e8 89 2a 00 00       	call   0x40c180
  4096f7:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  4096fa:	80 a4 3d f8 fb ff ff 	and    BYTE PTR [ebp+edi*1-0x408],0x0
  409701:	00 
  409702:	8b f8                	mov    edi,eax
  409704:	a1 34 37 41 00       	mov    eax,ds:0x413734
  409709:	c1 e7 02             	shl    edi,0x2
  40970c:	8b 1d 64 01 41 00    	mov    ebx,DWORD PTR ds:0x410164
  409712:	83 c4 0c             	add    esp,0xc
  409715:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  409718:	05 00 02 00 00       	add    eax,0x200
  40971d:	50                   	push   eax
  40971e:	8d 85 f8 fb ff ff    	lea    eax,[ebp-0x408]
  409724:	50                   	push   eax
  409725:	ff d3                	call   ebx
  409727:	85 c0                	test   eax,eax
  409729:	74 38                	je     0x409763
  40972b:	a1 34 37 41 00       	mov    eax,ds:0x413734
  409730:	ff 34 07             	push   DWORD PTR [edi+eax*1]
  409733:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
  409739:	50                   	push   eax
  40973a:	ff d3                	call   ebx
  40973c:	85 c0                	test   eax,eax
  40973e:	0f 85 db 00 00 00    	jne    0x40981f
  409744:	a1 34 37 41 00       	mov    eax,ds:0x413734
  409749:	8b 04 07             	mov    eax,DWORD PTR [edi+eax*1]
  40974c:	05 00 01 00 00       	add    eax,0x100
  409751:	50                   	push   eax
  409752:	8d 85 f8 fc ff ff    	lea    eax,[ebp-0x308]
  409758:	50                   	push   eax
  409759:	ff d3                	call   ebx
  40975b:	85 c0                	test   eax,eax
  40975d:	0f 85 bc 00 00 00    	jne    0x40981f
  409763:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  409766:	8b 3d 9c 02 41 00    	mov    edi,DWORD PTR ds:0x41029c
  40976c:	c6 00 2a             	mov    BYTE PTR [eax],0x2a
  40976f:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
  409775:	50                   	push   eax
  409776:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40977c:	68 44 26 41 00       	push   0x412644
  409781:	50                   	push   eax
  409782:	ff d7                	call   edi
  409784:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40978a:	50                   	push   eax
  40978b:	e8 bf 00 00 00       	call   0x40984f
  409790:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
  409796:	50                   	push   eax
  409797:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40979d:	68 30 26 41 00       	push   0x412630
  4097a2:	50                   	push   eax
  4097a3:	ff d7                	call   edi
  4097a5:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  4097ab:	50                   	push   eax
  4097ac:	e8 9e 00 00 00       	call   0x40984f
  4097b1:	8d 85 f8 fc ff ff    	lea    eax,[ebp-0x308]
  4097b7:	50                   	push   eax
  4097b8:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  4097be:	68 1c 26 41 00       	push   0x41261c
  4097c3:	50                   	push   eax
  4097c4:	ff d7                	call   edi
  4097c6:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  4097cc:	50                   	push   eax
  4097cd:	e8 7d 00 00 00       	call   0x40984f
  4097d2:	a1 90 37 41 00       	mov    eax,ds:0x413790
  4097d7:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4097da:	ff 34 01             	push   DWORD PTR [ecx+eax*1]
  4097dd:	e8 b4 00 00 00       	call   0x409896
  4097e2:	83 c4 34             	add    esp,0x34
  4097e5:	85 c0                	test   eax,eax
  4097e7:	74 36                	je     0x40981f
  4097e9:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
  4097ef:	68 14 26 41 00       	push   0x412614
  4097f4:	50                   	push   eax
  4097f5:	ff d3                	call   ebx
  4097f7:	85 c0                	test   eax,eax
  4097f9:	74 24                	je     0x40981f
  4097fb:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
  409801:	50                   	push   eax
  409802:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  409808:	68 00 26 41 00       	push   0x412600
  40980d:	50                   	push   eax
  40980e:	ff d7                	call   edi
  409810:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  409816:	50                   	push   eax
  409817:	e8 33 00 00 00       	call   0x40984f
  40981c:	83 c4 10             	add    esp,0x10
  40981f:	8a 06                	mov    al,BYTE PTR [esi]
  409821:	84 c0                	test   al,al
  409823:	0f 84 44 fe ff ff    	je     0x40966d
  409829:	3c 0d                	cmp    al,0xd
  40982b:	0f 84 3c fe ff ff    	je     0x40966d
  409831:	46                   	inc    esi
  409832:	eb eb                	jmp    0x40981f
  409834:	a1 90 37 41 00       	mov    eax,ds:0x413790
  409839:	83 45 fc 04          	add    DWORD PTR [ebp-0x4],0x4
  40983d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  409840:	83 3c 01 00          	cmp    DWORD PTR [ecx+eax*1],0x0
  409844:	0f 85 d5 fd ff ff    	jne    0x40961f
  40984a:	5f                   	pop    edi
  40984b:	5e                   	pop    esi
  40984c:	5b                   	pop    ebx
  40984d:	c9                   	leave
  40984e:	c3                   	ret
  40984f:	56                   	push   esi
  409850:	33 f6                	xor    esi,esi
  409852:	39 35 28 37 41 00    	cmp    DWORD PTR ds:0x413728,esi
  409858:	74 3a                	je     0x409894
  40985a:	56                   	push   esi
  40985b:	56                   	push   esi
  40985c:	56                   	push   esi
  40985d:	56                   	push   esi
  40985e:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  409862:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  409868:	40                   	inc    eax
  409869:	50                   	push   eax
  40986a:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
  40986e:	ff 35 bc 36 41 00    	push   DWORD PTR ds:0x4136bc
  409874:	e8 23 26 00 00       	call   0x40be9c
  409879:	56                   	push   esi
  40987a:	68 e8 03 00 00       	push   0x3e8
  40987f:	68 50 40 00 00       	push   0x4050
  409884:	56                   	push   esi
  409885:	56                   	push   esi
  409886:	ff 35 28 37 41 00    	push   DWORD PTR ds:0x413728
  40988c:	6a ff                	push   0xffffffff
  40988e:	50                   	push   eax
  40988f:	e8 f0 25 00 00       	call   0x40be84
  409894:	5e                   	pop    esi
  409895:	c3                   	ret
  409896:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  40989a:	8b c2                	mov    eax,edx
  40989c:	8a 0a                	mov    cl,BYTE PTR [edx]
  40989e:	84 c9                	test   cl,cl
  4098a0:	74 0b                	je     0x4098ad
  4098a2:	80 f9 0d             	cmp    cl,0xd
  4098a5:	74 06                	je     0x4098ad
  4098a7:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
  4098aa:	40                   	inc    eax
  4098ab:	eb f1                	jmp    0x40989e
  4098ad:	80 38 00             	cmp    BYTE PTR [eax],0x0
  4098b0:	74 02                	je     0x4098b4
  4098b2:	40                   	inc    eax
  4098b3:	40                   	inc    eax
  4098b4:	8a 08                	mov    cl,BYTE PTR [eax]
  4098b6:	84 c9                	test   cl,cl
  4098b8:	74 17                	je     0x4098d1
  4098ba:	80 f9 22             	cmp    cl,0x22
  4098bd:	74 0f                	je     0x4098ce
  4098bf:	84 c9                	test   cl,cl
  4098c1:	74 ea                	je     0x4098ad
  4098c3:	80 f9 0d             	cmp    cl,0xd
  4098c6:	74 e5                	je     0x4098ad
  4098c8:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
  4098cb:	40                   	inc    eax
  4098cc:	eb f1                	jmp    0x4098bf
  4098ce:	33 c0                	xor    eax,eax
  4098d0:	c3                   	ret
  4098d1:	6a 01                	push   0x1
  4098d3:	c6 02 2a             	mov    BYTE PTR [edx],0x2a
  4098d6:	58                   	pop    eax
  4098d7:	c3                   	ret
  4098d8:	55                   	push   ebp
  4098d9:	8b ec                	mov    ebp,esp
  4098db:	81 ec 28 03 00 00    	sub    esp,0x328
  4098e1:	53                   	push   ebx
  4098e2:	56                   	push   esi
  4098e3:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  4098e6:	57                   	push   edi
  4098e7:	8b ce                	mov    ecx,esi
  4098e9:	8a 06                	mov    al,BYTE PTR [esi]
  4098eb:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
  4098ee:	3c 0a                	cmp    al,0xa
  4098f0:	74 11                	je     0x409903
  4098f2:	3c 0d                	cmp    al,0xd
  4098f4:	74 0d                	je     0x409903
  4098f6:	84 c0                	test   al,al
  4098f8:	74 09                	je     0x409903
  4098fa:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
  4098fd:	41                   	inc    ecx
  4098fe:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
  409901:	eb eb                	jmp    0x4098ee
  409903:	8a 01                	mov    al,BYTE PTR [ecx]
  409905:	3c 0d                	cmp    al,0xd
  409907:	74 04                	je     0x40990d
  409909:	3c 0a                	cmp    al,0xa
  40990b:	75 03                	jne    0x409910
  40990d:	41                   	inc    ecx
  40990e:	eb f3                	jmp    0x409903
  409910:	80 39 00             	cmp    BYTE PTR [ecx],0x0
  409913:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
  409916:	74 12                	je     0x40992a
  409918:	8b 3d 68 01 41 00    	mov    edi,DWORD PTR ds:0x410168
  40991e:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
  409924:	51                   	push   ecx
  409925:	50                   	push   eax
  409926:	ff d7                	call   edi
  409928:	eb 13                	jmp    0x40993d
  40992a:	8b 3d 68 01 41 00    	mov    edi,DWORD PTR ds:0x410168
  409930:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
  409936:	56                   	push   esi
  409937:	50                   	push   eax
  409938:	ff d7                	call   edi
  40993a:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
  40993d:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  409940:	85 db                	test   ebx,ebx
  409942:	0f 84 77 01 00 00    	je     0x409abf
  409948:	8d 45 dc             	lea    eax,[ebp-0x24]
  40994b:	50                   	push   eax
  40994c:	53                   	push   ebx
  40994d:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  409953:	8b 45 dc             	mov    eax,DWORD PTR [ebp-0x24]
  409956:	6a 00                	push   0x0
  409958:	29 45 e4             	sub    DWORD PTR [ebp-0x1c],eax
  40995b:	6a 00                	push   0x0
  40995d:	6a 31                	push   0x31
  40995f:	53                   	push   ebx
  409960:	ff 15 14 03 41 00    	call   DWORD PTR ds:0x410314
  409966:	53                   	push   ebx
  409967:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  40996a:	ff 15 bc 02 41 00    	call   DWORD PTR ds:0x4102bc
  409970:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
  409974:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  409977:	74 0d                	je     0x409986
  409979:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40997c:	50                   	push   eax
  40997d:	ff 15 84 00 41 00    	call   DWORD PTR ds:0x410084
  409983:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  409986:	8d 45 f0             	lea    eax,[ebp-0x10]
  409989:	50                   	push   eax
  40998a:	56                   	push   esi
  40998b:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  409991:	50                   	push   eax
  409992:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
  409998:	50                   	push   eax
  409999:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40999c:	ff 15 4c 00 41 00    	call   DWORD PTR ds:0x41004c
  4099a2:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  4099a5:	3b 45 e4             	cmp    eax,DWORD PTR [ebp-0x1c]
  4099a8:	0f 8c f3 00 00 00    	jl     0x409aa1
  4099ae:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
  4099b4:	68 00 01 00 00       	push   0x100
  4099b9:	50                   	push   eax
  4099ba:	8d 85 dc fe ff ff    	lea    eax,[ebp-0x124]
  4099c0:	50                   	push   eax
  4099c1:	ff 15 34 01 41 00    	call   DWORD PTR ds:0x410134
  4099c7:	80 65 db 00          	and    BYTE PTR [ebp-0x25],0x0
  4099cb:	8a 85 dc fe ff ff    	mov    al,BYTE PTR [ebp-0x124]
  4099d1:	8d b5 dc fe ff ff    	lea    esi,[ebp-0x124]
  4099d7:	84 c0                	test   al,al
  4099d9:	74 0a                	je     0x4099e5
  4099db:	3c 5c                	cmp    al,0x5c
  4099dd:	74 06                	je     0x4099e5
  4099df:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  4099e2:	46                   	inc    esi
  4099e3:	eb f2                	jmp    0x4099d7
  4099e5:	80 3e 5c             	cmp    BYTE PTR [esi],0x5c
  4099e8:	75 01                	jne    0x4099eb
  4099ea:	46                   	inc    esi
  4099eb:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  4099ee:	3b 45 e4             	cmp    eax,DWORD PTR [ebp-0x1c]
  4099f1:	0f 8c 9e 00 00 00    	jl     0x409a95
  4099f7:	bb cc 25 41 00       	mov    ebx,0x4125cc
  4099fc:	80 3e 2e             	cmp    BYTE PTR [esi],0x2e
  4099ff:	8b c6                	mov    eax,esi
  409a01:	75 15                	jne    0x409a18
  409a03:	b1 2e                	mov    cl,0x2e
  409a05:	80 f9 5c             	cmp    cl,0x5c
  409a08:	74 08                	je     0x409a12
  409a0a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
  409a0d:	40                   	inc    eax
  409a0e:	84 c9                	test   cl,cl
  409a10:	75 f3                	jne    0x409a05
  409a12:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  409a15:	75 01                	jne    0x409a18
  409a17:	40                   	inc    eax
  409a18:	8a 08                	mov    cl,BYTE PTR [eax]
  409a1a:	84 c9                	test   cl,cl
  409a1c:	74 05                	je     0x409a23
  409a1e:	80 f9 5c             	cmp    cl,0x5c
  409a21:	75 f4                	jne    0x409a17
  409a23:	80 38 00             	cmp    BYTE PTR [eax],0x0
  409a26:	74 23                	je     0x409a4b
  409a28:	8b c8                	mov    ecx,eax
  409a2a:	2b ce                	sub    ecx,esi
  409a2c:	83 f9 03             	cmp    ecx,0x3
  409a2f:	7e 1a                	jle    0x409a4b
  409a31:	50                   	push   eax
  409a32:	8d 85 d8 fc ff ff    	lea    eax,[ebp-0x328]
  409a38:	50                   	push   eax
  409a39:	ff d7                	call   edi
  409a3b:	53                   	push   ebx
  409a3c:	56                   	push   esi
  409a3d:	ff d7                	call   edi
  409a3f:	8d 85 d8 fc ff ff    	lea    eax,[ebp-0x328]
  409a45:	50                   	push   eax
  409a46:	8d 46 03             	lea    eax,[esi+0x3]
  409a49:	eb 19                	jmp    0x409a64
  409a4b:	8d 85 dc fe ff ff    	lea    eax,[ebp-0x124]
  409a51:	53                   	push   ebx
  409a52:	50                   	push   eax
  409a53:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  409a59:	8d 8d dc fe ff ff    	lea    ecx,[ebp-0x124]
  409a5f:	83 e9 04             	sub    ecx,0x4
  409a62:	03 c1                	add    eax,ecx
  409a64:	50                   	push   eax
  409a65:	ff d7                	call   edi
  409a67:	8d 45 f0             	lea    eax,[ebp-0x10]
  409a6a:	50                   	push   eax
  409a6b:	8d 85 dc fe ff ff    	lea    eax,[ebp-0x124]
  409a71:	50                   	push   eax
  409a72:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  409a78:	50                   	push   eax
  409a79:	8d 85 dc fe ff ff    	lea    eax,[ebp-0x124]
  409a7f:	50                   	push   eax
  409a80:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  409a83:	ff 15 4c 00 41 00    	call   DWORD PTR ds:0x41004c
  409a89:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  409a8c:	3b 45 e4             	cmp    eax,DWORD PTR [ebp-0x1c]
  409a8f:	0f 8d 67 ff ff ff    	jge    0x4099fc
  409a95:	8d 85 dc fe ff ff    	lea    eax,[ebp-0x124]
  409a9b:	50                   	push   eax
  409a9c:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  409a9f:	ff d7                	call   edi
  409aa1:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
  409aa5:	74 0c                	je     0x409ab3
  409aa7:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  409aaa:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  409aad:	ff 15 84 00 41 00    	call   DWORD PTR ds:0x410084
  409ab3:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  409ab6:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409ab9:	ff 15 b4 02 41 00    	call   DWORD PTR ds:0x4102b4
  409abf:	5f                   	pop    edi
  409ac0:	5e                   	pop    esi
  409ac1:	5b                   	pop    ebx
  409ac2:	c9                   	leave
  409ac3:	c3                   	ret
  409ac4:	55                   	push   ebp
  409ac5:	8b ec                	mov    ebp,esp
  409ac7:	81 ec 0c 02 00 00    	sub    esp,0x20c
  409acd:	53                   	push   ebx
  409ace:	33 db                	xor    ebx,ebx
  409ad0:	39 1d ec 36 41 00    	cmp    DWORD PTR ds:0x4136ec,ebx
  409ad6:	56                   	push   esi
  409ad7:	57                   	push   edi
  409ad8:	0f 84 e4 01 00 00    	je     0x409cc2
  409ade:	8d 45 fc             	lea    eax,[ebp-0x4]
  409ae1:	50                   	push   eax
  409ae2:	6a 1f                	push   0x1f
  409ae4:	53                   	push   ebx
  409ae5:	ff 35 58 20 41 00    	push   DWORD PTR ds:0x412058
  409aeb:	68 02 00 00 80       	push   0x80000002
  409af0:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  409af6:	85 c0                	test   eax,eax
  409af8:	0f 85 c4 01 00 00    	jne    0x409cc2
  409afe:	8d 45 f4             	lea    eax,[ebp-0xc]
  409b01:	be 00 01 00 00       	mov    esi,0x100
  409b06:	50                   	push   eax
  409b07:	8d 85 f4 fe ff ff    	lea    eax,[ebp-0x10c]
  409b0d:	50                   	push   eax
  409b0e:	8d 45 f8             	lea    eax,[ebp-0x8]
  409b11:	50                   	push   eax
  409b12:	53                   	push   ebx
  409b13:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409b16:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
  409b19:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  409b1c:	ff 15 08 00 41 00    	call   DWORD PTR ds:0x410008
  409b22:	85 c0                	test   eax,eax
  409b24:	0f 85 8f 01 00 00    	jne    0x409cb9
  409b2a:	83 7d f8 01          	cmp    DWORD PTR [ebp-0x8],0x1
  409b2e:	6a 04                	push   0x4
  409b30:	5f                   	pop    edi
  409b31:	75 0f                	jne    0x409b42
  409b33:	8d 85 f4 fe ff ff    	lea    eax,[ebp-0x10c]
  409b39:	50                   	push   eax
  409b3a:	e8 3f 28 00 00       	call   0x40c37e
  409b3f:	59                   	pop    ecx
  409b40:	eb 1e                	jmp    0x409b60
  409b42:	39 7d f8             	cmp    DWORD PTR [ebp-0x8],edi
  409b45:	74 13                	je     0x409b5a
  409b47:	83 7d f8 03          	cmp    DWORD PTR [ebp-0x8],0x3
  409b4b:	0f 85 68 01 00 00    	jne    0x409cb9
  409b51:	39 7d f4             	cmp    DWORD PTR [ebp-0xc],edi
  409b54:	0f 85 5f 01 00 00    	jne    0x409cb9
  409b5a:	8b 85 f4 fe ff ff    	mov    eax,DWORD PTR [ebp-0x10c]
  409b60:	3b c3                	cmp    eax,ebx
  409b62:	0f 8e 51 01 00 00    	jle    0x409cb9
  409b68:	39 1d 70 37 41 00    	cmp    DWORD PTR ds:0x413770,ebx
  409b6e:	74 03                	je     0x409b73
  409b70:	48                   	dec    eax
  409b71:	eb 03                	jmp    0x409b76
  409b73:	2b 45 10             	sub    eax,DWORD PTR [ebp+0x10]
  409b76:	3b c3                	cmp    eax,ebx
  409b78:	7d 04                	jge    0x409b7e
  409b7a:	33 c0                	xor    eax,eax
  409b7c:	3b c3                	cmp    eax,ebx
  409b7e:	0f 85 0f 01 00 00    	jne    0x409c93
  409b84:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
  409b8a:	56                   	push   esi
  409b8b:	50                   	push   eax
  409b8c:	6a 26                	push   0x26
  409b8e:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  409b94:	e8 04 10 00 00       	call   0x40ab9d
  409b99:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409b9c:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
  409ba2:	50                   	push   eax
  409ba3:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  409ba9:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  409baf:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
  409bb5:	56                   	push   esi
  409bb6:	50                   	push   eax
  409bb7:	6a 27                	push   0x27
  409bb9:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  409bbf:	e8 d9 0f 00 00       	call   0x40ab9d
  409bc4:	83 c4 2c             	add    esp,0x2c
  409bc7:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
  409bcd:	50                   	push   eax
  409bce:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  409bd4:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  409bda:	39 1d 0c 37 41 00    	cmp    DWORD PTR ds:0x41370c,ebx
  409be0:	be ed 03 00 00       	mov    esi,0x3ed
  409be5:	0f 85 8f 00 00 00    	jne    0x409c7a
  409beb:	39 1d 90 3b 41 00    	cmp    DWORD PTR ds:0x413b90,ebx
  409bf1:	0f 85 83 00 00 00    	jne    0x409c7a
  409bf7:	39 1d 30 37 41 00    	cmp    DWORD PTR ds:0x413730,ebx
  409bfd:	74 04                	je     0x409c03
  409bff:	8b fe                	mov    edi,esi
  409c01:	eb 7a                	jmp    0x409c7d
  409c03:	39 1d 8c 3a 41 00    	cmp    DWORD PTR ds:0x413a8c,ebx
  409c09:	74 0e                	je     0x409c19
  409c0b:	6a 19                	push   0x19
  409c0d:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  409c13:	ff 15 3c 03 41 00    	call   DWORD PTR ds:0x41033c
  409c19:	53                   	push   ebx
  409c1a:	68 58 25 40 00       	push   0x402558
  409c1f:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  409c25:	6a 68                	push   0x68
  409c27:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  409c2d:	ff 15 34 03 41 00    	call   DWORD PTR ds:0x410334
  409c33:	39 1d 8c 3a 41 00    	cmp    DWORD PTR ds:0x413a8c,ebx
  409c39:	8b f8                	mov    edi,eax
  409c3b:	74 14                	je     0x409c51
  409c3d:	53                   	push   ebx
  409c3e:	68 96 00 00 00       	push   0x96
  409c43:	6a 19                	push   0x19
  409c45:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  409c4b:	ff 15 60 02 41 00    	call   DWORD PTR ds:0x410260
  409c51:	6a 01                	push   0x1
  409c53:	58                   	pop    eax
  409c54:	3b f8                	cmp    edi,eax
  409c56:	75 05                	jne    0x409c5d
  409c58:	a3 90 3b 41 00       	mov    ds:0x413b90,eax
  409c5d:	81 ff ef 03 00 00    	cmp    edi,0x3ef
  409c63:	75 07                	jne    0x409c6c
  409c65:	8b fe                	mov    edi,esi
  409c67:	a3 30 37 41 00       	mov    ds:0x413730,eax
  409c6c:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  409c72:	ff 15 ec 02 41 00    	call   DWORD PTR ds:0x4102ec
  409c78:	eb 03                	jmp    0x409c7d
  409c7a:	6a 07                	push   0x7
  409c7c:	5f                   	pop    edi
  409c7d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409c80:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  409c83:	ff 15 2c 00 41 00    	call   DWORD PTR ds:0x41002c
  409c89:	33 c0                	xor    eax,eax
  409c8b:	3b fe                	cmp    edi,esi
  409c8d:	0f 94 c0             	sete   al
  409c90:	40                   	inc    eax
  409c91:	eb 31                	jmp    0x409cc4
  409c93:	83 f8 01             	cmp    eax,0x1
  409c96:	7c 21                	jl     0x409cb9
  409c98:	89 85 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],eax
  409c9e:	8d 85 f4 fe ff ff    	lea    eax,[ebp-0x10c]
  409ca4:	57                   	push   edi
  409ca5:	50                   	push   eax
  409ca6:	57                   	push   edi
  409ca7:	53                   	push   ebx
  409ca8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409cab:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  409cae:	ff 15 1c 00 41 00    	call   DWORD PTR ds:0x41001c
  409cb4:	6a 01                	push   0x1
  409cb6:	58                   	pop    eax
  409cb7:	eb 0b                	jmp    0x409cc4
  409cb9:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  409cbc:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  409cc2:	33 c0                	xor    eax,eax
  409cc4:	5f                   	pop    edi
  409cc5:	5e                   	pop    esi
  409cc6:	5b                   	pop    ebx
  409cc7:	c9                   	leave
  409cc8:	c3                   	ret
  409cc9:	55                   	push   ebp
  409cca:	8b ec                	mov    ebp,esp
  409ccc:	81 ec 48 03 00 00    	sub    esp,0x348
  409cd2:	53                   	push   ebx
  409cd3:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  409cd6:	56                   	push   esi
  409cd7:	57                   	push   edi
  409cd8:	6a 2a                	push   0x2a
  409cda:	53                   	push   ebx
  409cdb:	e8 6c 21 00 00       	call   0x40be4c
  409ce0:	59                   	pop    ecx
  409ce1:	85 c0                	test   eax,eax
  409ce3:	59                   	pop    ecx
  409ce4:	75 38                	jne    0x409d1e
  409ce6:	6a 3f                	push   0x3f
  409ce8:	53                   	push   ebx
  409ce9:	e8 5e 21 00 00       	call   0x40be4c
  409cee:	59                   	pop    ecx
  409cef:	85 c0                	test   eax,eax
  409cf1:	59                   	pop    ecx
  409cf2:	75 2a                	jne    0x409d1e
  409cf4:	53                   	push   ebx
  409cf5:	e8 40 01 00 00       	call   0x409e3a
  409cfa:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
  409cfe:	59                   	pop    ecx
  409cff:	0f 84 2d 01 00 00    	je     0x409e32
  409d05:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  409d08:	80 38 00             	cmp    BYTE PTR [eax],0x0
  409d0b:	0f 84 21 01 00 00    	je     0x409e32
  409d11:	53                   	push   ebx
  409d12:	50                   	push   eax
  409d13:	e8 17 16 00 00       	call   0x40b32f
  409d18:	59                   	pop    ecx
  409d19:	e9 13 01 00 00       	jmp    0x409e31
  409d1e:	8b 3d 70 01 41 00    	mov    edi,DWORD PTR ds:0x410170
  409d24:	53                   	push   ebx
  409d25:	ff d7                	call   edi
  409d27:	83 f8 03             	cmp    eax,0x3
  409d2a:	7c 76                	jl     0x409da2
  409d2c:	8d 44 18 fd          	lea    eax,[eax+ebx*1-0x3]
  409d30:	68 58 26 41 00       	push   0x412658
  409d35:	50                   	push   eax
  409d36:	ff 15 60 01 41 00    	call   DWORD PTR ds:0x410160
  409d3c:	85 c0                	test   eax,eax
  409d3e:	75 62                	jne    0x409da2
  409d40:	53                   	push   ebx
  409d41:	ff d7                	call   edi
  409d43:	83 f8 04             	cmp    eax,0x4
  409d46:	7c 53                	jl     0x409d9b
  409d48:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409d4e:	68 00 01 00 00       	push   0x100
  409d53:	50                   	push   eax
  409d54:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  409d5a:	8b 35 64 01 41 00    	mov    esi,DWORD PTR ds:0x410164
  409d60:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409d66:	50                   	push   eax
  409d67:	53                   	push   ebx
  409d68:	ff d6                	call   esi
  409d6a:	85 c0                	test   eax,eax
  409d6c:	74 2d                	je     0x409d9b
  409d6e:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409d74:	68 00 01 00 00       	push   0x100
  409d79:	50                   	push   eax
  409d7a:	ff 15 58 01 41 00    	call   DWORD PTR ds:0x410158
  409d80:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409d86:	50                   	push   eax
  409d87:	53                   	push   ebx
  409d88:	ff d6                	call   esi
  409d8a:	85 c0                	test   eax,eax
  409d8c:	74 0d                	je     0x409d9b
  409d8e:	ff 35 38 37 41 00    	push   DWORD PTR ds:0x413738
  409d94:	53                   	push   ebx
  409d95:	ff d6                	call   esi
  409d97:	85 c0                	test   eax,eax
  409d99:	75 07                	jne    0x409da2
  409d9b:	33 c0                	xor    eax,eax
  409d9d:	e9 93 00 00 00       	jmp    0x409e35
  409da2:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409da8:	53                   	push   ebx
  409da9:	8b 1d 68 01 41 00    	mov    ebx,DWORD PTR ds:0x410168
  409daf:	50                   	push   eax
  409db0:	ff d3                	call   ebx
  409db2:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409db8:	50                   	push   eax
  409db9:	ff d7                	call   edi
  409dbb:	8d b4 05 ff fe ff ff 	lea    esi,[ebp+eax*1-0x101]
  409dc2:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409dc8:	3b f0                	cmp    esi,eax
  409dca:	76 08                	jbe    0x409dd4
  409dcc:	80 3e 5c             	cmp    BYTE PTR [esi],0x5c
  409dcf:	74 08                	je     0x409dd9
  409dd1:	4e                   	dec    esi
  409dd2:	eb ee                	jmp    0x409dc2
  409dd4:	80 3e 5c             	cmp    BYTE PTR [esi],0x5c
  409dd7:	75 01                	jne    0x409dda
  409dd9:	46                   	inc    esi
  409dda:	8d 85 b8 fc ff ff    	lea    eax,[ebp-0x348]
  409de0:	50                   	push   eax
  409de1:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409de7:	6a 07                	push   0x7
  409de9:	50                   	push   eax
  409dea:	e8 0f 09 00 00       	call   0x40a6fe
  409def:	83 c4 0c             	add    esp,0xc
  409df2:	85 c0                	test   eax,eax
  409df4:	75 2f                	jne    0x409e25
  409df6:	f6 85 b8 fd ff ff 10 	test   BYTE PTR [ebp-0x248],0x10
  409dfd:	75 17                	jne    0x409e16
  409dff:	8d 85 b8 fc ff ff    	lea    eax,[ebp-0x348]
  409e05:	50                   	push   eax
  409e06:	56                   	push   esi
  409e07:	ff d3                	call   ebx
  409e09:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409e0f:	50                   	push   eax
  409e10:	e8 25 00 00 00       	call   0x409e3a
  409e15:	59                   	pop    ecx
  409e16:	8d 85 b8 fc ff ff    	lea    eax,[ebp-0x348]
  409e1c:	50                   	push   eax
  409e1d:	e8 1e 09 00 00       	call   0x40a740
  409e22:	59                   	pop    ecx
  409e23:	eb cd                	jmp    0x409df2
  409e25:	8d 85 b8 fc ff ff    	lea    eax,[ebp-0x348]
  409e2b:	50                   	push   eax
  409e2c:	e8 4c 09 00 00       	call   0x40a77d
  409e31:	59                   	pop    ecx
  409e32:	6a 01                	push   0x1
  409e34:	58                   	pop    eax
  409e35:	5f                   	pop    edi
  409e36:	5e                   	pop    esi
  409e37:	5b                   	pop    ebx
  409e38:	c9                   	leave
  409e39:	c3                   	ret
  409e3a:	55                   	push   ebp
  409e3b:	8b ec                	mov    ebp,esp
  409e3d:	81 ec 00 01 00 00    	sub    esp,0x100
  409e43:	56                   	push   esi
  409e44:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  409e47:	57                   	push   edi
  409e48:	6a 00                	push   0x0
  409e4a:	56                   	push   esi
  409e4b:	e8 8b 08 00 00       	call   0x40a6db
  409e50:	56                   	push   esi
  409e51:	e8 ea 05 00 00       	call   0x40a440
  409e56:	83 c4 0c             	add    esp,0xc
  409e59:	56                   	push   esi
  409e5a:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  409e60:	8b f8                	mov    edi,eax
  409e62:	83 ff 04             	cmp    edi,0x4
  409e65:	7e 5f                	jle    0x409ec6
  409e67:	83 3d b0 36 41 00 00 	cmp    DWORD PTR ds:0x4136b0,0x0
  409e6e:	74 56                	je     0x409ec6
  409e70:	8d 44 37 fc          	lea    eax,[edi+esi*1-0x4]
  409e74:	68 6c 26 41 00       	push   0x41266c
  409e79:	50                   	push   eax
  409e7a:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  409e80:	85 c0                	test   eax,eax
  409e82:	75 42                	jne    0x409ec6
  409e84:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409e8a:	56                   	push   esi
  409e8b:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  409e91:	50                   	push   eax
  409e92:	ff d6                	call   esi
  409e94:	8d bc 3d fc fe ff ff 	lea    edi,[ebp+edi*1-0x104]
  409e9b:	68 64 26 41 00       	push   0x412664
  409ea0:	57                   	push   edi
  409ea1:	ff d6                	call   esi
  409ea3:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409ea9:	50                   	push   eax
  409eaa:	e8 91 05 00 00       	call   0x40a440
  409eaf:	c7 04 24 5c 26 41 00 	mov    DWORD PTR [esp],0x41265c
  409eb6:	57                   	push   edi
  409eb7:	ff d6                	call   esi
  409eb9:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  409ebf:	50                   	push   eax
  409ec0:	e8 7b 05 00 00       	call   0x40a440
  409ec5:	59                   	pop    ecx
  409ec6:	5f                   	pop    edi
  409ec7:	5e                   	pop    esi
  409ec8:	c9                   	leave
  409ec9:	c3                   	ret
  409eca:	55                   	push   ebp
  409ecb:	8b ec                	mov    ebp,esp
  409ecd:	81 ec 54 04 00 00    	sub    esp,0x454
  409ed3:	53                   	push   ebx
  409ed4:	56                   	push   esi
  409ed5:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  409edb:	57                   	push   edi
  409edc:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  409edf:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  409ee5:	ff d6                	call   esi
  409ee7:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  409eea:	57                   	push   edi
  409eeb:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  409ef1:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  409ef7:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  409efd:	68 ef 03 00 00       	push   0x3ef
  409f02:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  409f08:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  409f0e:	50                   	push   eax
  409f0f:	e8 c4 f9 ff ff       	call   0x4098d8
  409f14:	ff 35 54 37 41 00    	push   DWORD PTR ds:0x413754
  409f1a:	e8 07 f1 ff ff       	call   0x409026
  409f1f:	83 c4 0c             	add    esp,0xc
  409f22:	8d 85 ac fe ff ff    	lea    eax,[ebp-0x154]
  409f28:	57                   	push   edi
  409f29:	50                   	push   eax
  409f2a:	ff d6                	call   esi
  409f2c:	8d 85 ac fe ff ff    	lea    eax,[ebp-0x154]
  409f32:	50                   	push   eax
  409f33:	e8 07 16 00 00       	call   0x40b53f
  409f38:	59                   	pop    ecx
  409f39:	33 db                	xor    ebx,ebx
  409f3b:	8d 8d ac fe ff ff    	lea    ecx,[ebp-0x154]
  409f41:	3b c1                	cmp    eax,ecx
  409f43:	76 03                	jbe    0x409f48
  409f45:	88 58 ff             	mov    BYTE PTR [eax-0x1],bl
  409f48:	8d 85 ac fe ff ff    	lea    eax,[ebp-0x154]
  409f4e:	53                   	push   ebx
  409f4f:	50                   	push   eax
  409f50:	e8 3f 08 00 00       	call   0x40a794
  409f55:	8d 85 ac fe ff ff    	lea    eax,[ebp-0x154]
  409f5b:	50                   	push   eax
  409f5c:	e8 47 1f 00 00       	call   0x40bea8
  409f61:	83 c4 0c             	add    esp,0xc
  409f64:	57                   	push   edi
  409f65:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  409f6b:	8d 44 38 fd          	lea    eax,[eax+edi*1-0x3]
  409f6f:	3b c7                	cmp    eax,edi
  409f71:	73 02                	jae    0x409f75
  409f73:	8b c7                	mov    eax,edi
  409f75:	68 50 21 41 00       	push   0x412150
  409f7a:	50                   	push   eax
  409f7b:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  409f81:	85 c0                	test   eax,eax
  409f83:	57                   	push   edi
  409f84:	75 74                	jne    0x409ffa
  409f86:	8d 85 ac fd ff ff    	lea    eax,[ebp-0x254]
  409f8c:	50                   	push   eax
  409f8d:	ff d6                	call   esi
  409f8f:	8d 85 ac fd ff ff    	lea    eax,[ebp-0x254]
  409f95:	53                   	push   ebx
  409f96:	50                   	push   eax
  409f97:	e8 f8 07 00 00       	call   0x40a794
  409f9c:	6a 44                	push   0x44
  409f9e:	8d 45 ac             	lea    eax,[ebp-0x54]
  409fa1:	5e                   	pop    esi
  409fa2:	56                   	push   esi
  409fa3:	53                   	push   ebx
  409fa4:	50                   	push   eax
  409fa5:	e8 a6 20 00 00       	call   0x40c050
  409faa:	8d 85 ac fd ff ff    	lea    eax,[ebp-0x254]
  409fb0:	89 75 ac             	mov    DWORD PTR [ebp-0x54],esi
  409fb3:	50                   	push   eax
  409fb4:	8d 85 ac fb ff ff    	lea    eax,[ebp-0x454]
  409fba:	68 c8 26 41 00       	push   0x4126c8
  409fbf:	50                   	push   eax
  409fc0:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  409fc6:	83 c4 20             	add    esp,0x20
  409fc9:	8d 45 f0             	lea    eax,[ebp-0x10]
  409fcc:	50                   	push   eax
  409fcd:	8d 45 ac             	lea    eax,[ebp-0x54]
  409fd0:	50                   	push   eax
  409fd1:	53                   	push   ebx
  409fd2:	53                   	push   ebx
  409fd3:	53                   	push   ebx
  409fd4:	53                   	push   ebx
  409fd5:	53                   	push   ebx
  409fd6:	8d 85 ac fb ff ff    	lea    eax,[ebp-0x454]
  409fdc:	53                   	push   ebx
  409fdd:	50                   	push   eax
  409fde:	53                   	push   ebx
  409fdf:	ff 15 24 01 41 00    	call   DWORD PTR ds:0x410124
  409fe5:	85 c0                	test   eax,eax
  409fe7:	0f 84 88 00 00 00    	je     0x40a075
  409fed:	6a ff                	push   0xffffffff
  409fef:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  409ff2:	ff 15 28 01 41 00    	call   DWORD PTR ds:0x410128
  409ff8:	eb 7b                	jmp    0x40a075
  409ffa:	e8 4a 09 00 00       	call   0x40a949
  409fff:	85 c0                	test   eax,eax
  40a001:	59                   	pop    ecx
  40a002:	74 71                	je     0x40a075
  40a004:	8b 3d e8 00 41 00    	mov    edi,DWORD PTR ds:0x4100e8
  40a00a:	68 bc 26 41 00       	push   0x4126bc
  40a00f:	ff d7                	call   edi
  40a011:	3b c3                	cmp    eax,ebx
  40a013:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  40a016:	74 5d                	je     0x40a075
  40a018:	8b 35 30 01 41 00    	mov    esi,DWORD PTR ds:0x410130
  40a01e:	68 ac 26 41 00       	push   0x4126ac
  40a023:	50                   	push   eax
  40a024:	ff d6                	call   esi
  40a026:	3b c3                	cmp    eax,ebx
  40a028:	74 32                	je     0x40a05c
  40a02a:	53                   	push   ebx
  40a02b:	ff d0                	call   eax
  40a02d:	85 c0                	test   eax,eax
  40a02f:	75 2b                	jne    0x40a05c
  40a031:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40a034:	ff d7                	call   edi
  40a036:	8b f8                	mov    edi,eax
  40a038:	3b fb                	cmp    edi,ebx
  40a03a:	74 20                	je     0x40a05c
  40a03c:	39 5d 10             	cmp    DWORD PTR [ebp+0x10],ebx
  40a03f:	b8 98 26 41 00       	mov    eax,0x412698
  40a044:	75 05                	jne    0x40a04b
  40a046:	b8 84 26 41 00       	mov    eax,0x412684
  40a04b:	50                   	push   eax
  40a04c:	57                   	push   edi
  40a04d:	ff d6                	call   esi
  40a04f:	3b c3                	cmp    eax,ebx
  40a051:	74 02                	je     0x40a055
  40a053:	ff d0                	call   eax
  40a055:	57                   	push   edi
  40a056:	ff 15 04 01 41 00    	call   DWORD PTR ds:0x410104
  40a05c:	68 74 26 41 00       	push   0x412674
  40a061:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a064:	ff d6                	call   esi
  40a066:	3b c3                	cmp    eax,ebx
  40a068:	74 02                	je     0x40a06c
  40a06a:	ff d0                	call   eax
  40a06c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a06f:	ff 15 04 01 41 00    	call   DWORD PTR ds:0x410104
  40a075:	5f                   	pop    edi
  40a076:	5e                   	pop    esi
  40a077:	5b                   	pop    ebx
  40a078:	c9                   	leave
  40a079:	c3                   	ret
  40a07a:	55                   	push   ebp
  40a07b:	8b ec                	mov    ebp,esp
  40a07d:	81 ec 10 03 00 00    	sub    esp,0x310
  40a083:	53                   	push   ebx
  40a084:	56                   	push   esi
  40a085:	33 f6                	xor    esi,esi
  40a087:	57                   	push   edi
  40a088:	39 35 b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,esi
  40a08e:	0f 84 e6 01 00 00    	je     0x40a27a
  40a094:	8d 45 fc             	lea    eax,[ebp-0x4]
  40a097:	bf 1c 27 41 00       	mov    edi,0x41271c
  40a09c:	50                   	push   eax
  40a09d:	6a 1f                	push   0x1f
  40a09f:	56                   	push   esi
  40a0a0:	57                   	push   edi
  40a0a1:	68 02 00 00 80       	push   0x80000002
  40a0a6:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  40a0ac:	85 c0                	test   eax,eax
  40a0ae:	0f 85 c6 01 00 00    	jne    0x40a27a
  40a0b4:	8d 45 f8             	lea    eax,[ebp-0x8]
  40a0b7:	bb 00 01 00 00       	mov    ebx,0x100
  40a0bc:	50                   	push   eax
  40a0bd:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40a0c3:	50                   	push   eax
  40a0c4:	8d 45 f4             	lea    eax,[ebp-0xc]
  40a0c7:	50                   	push   eax
  40a0c8:	56                   	push   esi
  40a0c9:	be 10 27 41 00       	mov    esi,0x412710
  40a0ce:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
  40a0d1:	56                   	push   esi
  40a0d2:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a0d5:	ff 15 08 00 41 00    	call   DWORD PTR ds:0x410008
  40a0db:	85 c0                	test   eax,eax
  40a0dd:	0f 85 8e 01 00 00    	jne    0x40a271
  40a0e3:	83 7d f4 01          	cmp    DWORD PTR [ebp-0xc],0x1
  40a0e7:	75 0f                	jne    0x40a0f8
  40a0e9:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40a0ef:	50                   	push   eax
  40a0f0:	e8 89 22 00 00       	call   0x40c37e
  40a0f5:	59                   	pop    ecx
  40a0f6:	eb 20                	jmp    0x40a118
  40a0f8:	83 7d f4 04          	cmp    DWORD PTR [ebp-0xc],0x4
  40a0fc:	74 14                	je     0x40a112
  40a0fe:	83 7d f4 03          	cmp    DWORD PTR [ebp-0xc],0x3
  40a102:	0f 85 72 01 00 00    	jne    0x40a27a
  40a108:	83 7d f8 04          	cmp    DWORD PTR [ebp-0x8],0x4
  40a10c:	0f 85 68 01 00 00    	jne    0x40a27a
  40a112:	8b 85 f0 fe ff ff    	mov    eax,DWORD PTR [ebp-0x110]
  40a118:	83 f8 01             	cmp    eax,0x1
  40a11b:	0f 85 13 01 00 00    	jne    0x40a234
  40a121:	6a 00                	push   0x0
  40a123:	68 04 27 41 00       	push   0x412704
  40a128:	ff 15 10 03 41 00    	call   DWORD PTR ds:0x410310
  40a12e:	85 c0                	test   eax,eax
  40a130:	74 50                	je     0x40a182
  40a132:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
  40a138:	53                   	push   ebx
  40a139:	50                   	push   eax
  40a13a:	6a 1c                	push   0x1c
  40a13c:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40a142:	e8 56 0a 00 00       	call   0x40ab9d
  40a147:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  40a14d:	53                   	push   ebx
  40a14e:	50                   	push   eax
  40a14f:	6a 19                	push   0x19
  40a151:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40a157:	e8 41 0a 00 00       	call   0x40ab9d
  40a15c:	83 c4 20             	add    esp,0x20
  40a15f:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
  40a165:	6a 02                	push   0x2
  40a167:	50                   	push   eax
  40a168:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
  40a16e:	50                   	push   eax
  40a16f:	ff 35 90 36 41 00    	push   DWORD PTR ds:0x413690
  40a175:	ff 15 98 02 41 00    	call   DWORD PTR ds:0x410298
  40a17b:	83 f8 03             	cmp    eax,0x3
  40a17e:	74 0c                	je     0x40a18c
  40a180:	eb 03                	jmp    0x40a185
  40a182:	6a 05                	push   0x5
  40a184:	58                   	pop    eax
  40a185:	83 f8 05             	cmp    eax,0x5
  40a188:	74 0a                	je     0x40a194
  40a18a:	eb 95                	jmp    0x40a121
  40a18c:	6a 01                	push   0x1
  40a18e:	58                   	pop    eax
  40a18f:	e9 e8 00 00 00       	jmp    0x40a27c
  40a194:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a197:	8b 35 04 00 41 00    	mov    esi,DWORD PTR ds:0x410004
  40a19d:	ff d6                	call   esi
  40a19f:	6a 02                	push   0x2
  40a1a1:	57                   	push   edi
  40a1a2:	e8 da 00 00 00       	call   0x40a281
  40a1a7:	6a 02                	push   0x2
  40a1a9:	68 ec 26 41 00       	push   0x4126ec
  40a1ae:	e8 ce 00 00 00       	call   0x40a281
  40a1b3:	83 c4 10             	add    esp,0x10
  40a1b6:	8d 45 fc             	lea    eax,[ebp-0x4]
  40a1b9:	bf d8 26 41 00       	mov    edi,0x4126d8
  40a1be:	50                   	push   eax
  40a1bf:	6a 1f                	push   0x1f
  40a1c1:	6a 00                	push   0x0
  40a1c3:	57                   	push   edi
  40a1c4:	68 02 00 00 80       	push   0x80000002
  40a1c9:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  40a1cf:	85 c0                	test   eax,eax
  40a1d1:	0f 85 a3 00 00 00    	jne    0x40a27a
  40a1d7:	50                   	push   eax
  40a1d8:	50                   	push   eax
  40a1d9:	50                   	push   eax
  40a1da:	8d 4d f8             	lea    ecx,[ebp-0x8]
  40a1dd:	50                   	push   eax
  40a1de:	51                   	push   ecx
  40a1df:	8d 8d f0 fe ff ff    	lea    ecx,[ebp-0x110]
  40a1e5:	51                   	push   ecx
  40a1e6:	50                   	push   eax
  40a1e7:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a1ea:	ff 15 28 00 41 00    	call   DWORD PTR ds:0x410028
  40a1f0:	85 c0                	test   eax,eax
  40a1f2:	74 39                	je     0x40a22d
  40a1f4:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
  40a1f7:	33 db                	xor    ebx,ebx
  40a1f9:	53                   	push   ebx
  40a1fa:	53                   	push   ebx
  40a1fb:	53                   	push   ebx
  40a1fc:	8d 45 f8             	lea    eax,[ebp-0x8]
  40a1ff:	53                   	push   ebx
  40a200:	50                   	push   eax
  40a201:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40a207:	50                   	push   eax
  40a208:	53                   	push   ebx
  40a209:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a20c:	ff 15 24 00 41 00    	call   DWORD PTR ds:0x410024
  40a212:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a215:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  40a218:	ff d6                	call   esi
  40a21a:	39 5d f0             	cmp    DWORD PTR [ebp-0x10],ebx
  40a21d:	74 5b                	je     0x40a27a
  40a21f:	57                   	push   edi
  40a220:	68 02 00 00 80       	push   0x80000002
  40a225:	ff 15 00 00 41 00    	call   DWORD PTR ds:0x410000
  40a22b:	eb 4d                	jmp    0x40a27a
  40a22d:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a230:	ff d6                	call   esi
  40a232:	eb 46                	jmp    0x40a27a
  40a234:	7e 44                	jle    0x40a27a
  40a236:	48                   	dec    eax
  40a237:	50                   	push   eax
  40a238:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40a23e:	68 34 24 41 00       	push   0x412434
  40a243:	50                   	push   eax
  40a244:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40a24a:	83 c4 0c             	add    esp,0xc
  40a24d:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40a253:	50                   	push   eax
  40a254:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40a25a:	40                   	inc    eax
  40a25b:	50                   	push   eax
  40a25c:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
  40a262:	50                   	push   eax
  40a263:	6a 01                	push   0x1
  40a265:	6a 00                	push   0x0
  40a267:	56                   	push   esi
  40a268:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a26b:	ff 15 1c 00 41 00    	call   DWORD PTR ds:0x41001c
  40a271:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40a274:	ff 15 04 00 41 00    	call   DWORD PTR ds:0x410004
  40a27a:	33 c0                	xor    eax,eax
  40a27c:	5f                   	pop    edi
  40a27d:	5e                   	pop    esi
  40a27e:	5b                   	pop    ebx
  40a27f:	c9                   	leave
  40a280:	c3                   	ret
  40a281:	55                   	push   ebp
  40a282:	8b ec                	mov    ebp,esp
  40a284:	81 ec 90 01 00 00    	sub    esp,0x190
  40a28a:	53                   	push   ebx
  40a28b:	56                   	push   esi
  40a28c:	33 db                	xor    ebx,ebx
  40a28e:	57                   	push   edi
  40a28f:	8b 3d 04 00 41 00    	mov    edi,DWORD PTR ds:0x410004
  40a295:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  40a298:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a29b:	8d 85 70 fe ff ff    	lea    eax,[ebp-0x190]
  40a2a1:	50                   	push   eax
  40a2a2:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40a2a8:	8d 85 70 fe ff ff    	lea    eax,[ebp-0x190]
  40a2ae:	68 e0 20 41 00       	push   0x4120e0
  40a2b3:	50                   	push   eax
  40a2b4:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40a2ba:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a2bd:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40a2c3:	39 1d b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,ebx
  40a2c9:	8d b4 05 71 fe ff ff 	lea    esi,[ebp+eax*1-0x18f]
  40a2d0:	74 56                	je     0x40a328
  40a2d2:	8d 45 f4             	lea    eax,[ebp-0xc]
  40a2d5:	50                   	push   eax
  40a2d6:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  40a2d9:	6a 1f                	push   0x1f
  40a2db:	53                   	push   ebx
  40a2dc:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a2df:	ff 34 85 30 20 41 00 	push   DWORD PTR [eax*4+0x412030]
  40a2e6:	ff 15 0c 00 41 00    	call   DWORD PTR ds:0x41000c
  40a2ec:	85 c0                	test   eax,eax
  40a2ee:	75 65                	jne    0x40a355
  40a2f0:	53                   	push   ebx
  40a2f1:	53                   	push   ebx
  40a2f2:	53                   	push   ebx
  40a2f3:	8d 45 f0             	lea    eax,[ebp-0x10]
  40a2f6:	53                   	push   ebx
  40a2f7:	50                   	push   eax
  40a2f8:	56                   	push   esi
  40a2f9:	53                   	push   ebx
  40a2fa:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40a2fd:	c7 45 f0 00 01 00 00 	mov    DWORD PTR [ebp-0x10],0x100
  40a304:	ff 15 24 00 41 00    	call   DWORD PTR ds:0x410024
  40a30a:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40a30d:	8b f0                	mov    esi,eax
  40a30f:	ff d7                	call   edi
  40a311:	3b f3                	cmp    esi,ebx
  40a313:	75 40                	jne    0x40a355
  40a315:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40a318:	8d 85 70 fe ff ff    	lea    eax,[ebp-0x190]
  40a31e:	50                   	push   eax
  40a31f:	e8 5d ff ff ff       	call   0x40a281
  40a324:	59                   	pop    ecx
  40a325:	59                   	pop    ecx
  40a326:	eb 34                	jmp    0x40a35c
  40a328:	8d 45 f8             	lea    eax,[ebp-0x8]
  40a32b:	50                   	push   eax
  40a32c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a32f:	68 00 00 00 80       	push   0x80000000
  40a334:	ff 15 34 00 41 00    	call   DWORD PTR ds:0x410034
  40a33a:	85 c0                	test   eax,eax
  40a33c:	75 17                	jne    0x40a355
  40a33e:	68 00 01 00 00       	push   0x100
  40a343:	56                   	push   esi
  40a344:	53                   	push   ebx
  40a345:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40a348:	ff 15 30 00 41 00    	call   DWORD PTR ds:0x410030
  40a34e:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40a351:	8b f0                	mov    esi,eax
  40a353:	eb ba                	jmp    0x40a30f
  40a355:	c7 45 fc 00 08 00 00 	mov    DWORD PTR [ebp-0x4],0x800
  40a35c:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  40a35f:	81 7d fc 00 08 00 00 	cmp    DWORD PTR [ebp-0x4],0x800
  40a366:	0f 8c 2c ff ff ff    	jl     0x40a298
  40a36c:	39 1d b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,ebx
  40a372:	5f                   	pop    edi
  40a373:	5e                   	pop    esi
  40a374:	5b                   	pop    ebx
  40a375:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a378:	74 0c                	je     0x40a386
  40a37a:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  40a37d:	ff 34 85 30 20 41 00 	push   DWORD PTR [eax*4+0x412030]
  40a384:	eb 05                	jmp    0x40a38b
  40a386:	68 00 00 00 80       	push   0x80000000
  40a38b:	ff 15 00 00 41 00    	call   DWORD PTR ds:0x410000
  40a391:	c9                   	leave
  40a392:	c3                   	ret
  40a393:	55                   	push   ebp
  40a394:	8b ec                	mov    ebp,esp
  40a396:	81 ec 94 00 00 00    	sub    esp,0x94
  40a39c:	8d 85 6c ff ff ff    	lea    eax,[ebp-0x94]
  40a3a2:	c7 85 6c ff ff ff 94 	mov    DWORD PTR [ebp-0x94],0x94
  40a3a9:	00 00 00 
  40a3ac:	50                   	push   eax
  40a3ad:	ff 15 c8 00 41 00    	call   DWORD PTR ds:0x4100c8
  40a3b3:	33 c0                	xor    eax,eax
  40a3b5:	83 bd 7c ff ff ff 02 	cmp    DWORD PTR [ebp-0x84],0x2
  40a3bc:	0f 95 c0             	setne  al
  40a3bf:	40                   	inc    eax
  40a3c0:	83 bd 70 ff ff ff 04 	cmp    DWORD PTR [ebp-0x90],0x4
  40a3c7:	a3 b0 36 41 00       	mov    ds:0x4136b0,eax
  40a3cc:	72 0a                	jb     0x40a3d8
  40a3ce:	c7 05 ec 36 41 00 01 	mov    DWORD PTR ds:0x4136ec,0x1
  40a3d5:	00 00 00 
  40a3d8:	68 50 27 41 00       	push   0x412750
  40a3dd:	ff 15 e8 00 41 00    	call   DWORD PTR ds:0x4100e8
  40a3e3:	85 c0                	test   eax,eax
  40a3e5:	a3 3c 37 41 00       	mov    ds:0x41373c,eax
  40a3ea:	74 11                	je     0x40a3fd
  40a3ec:	68 40 27 41 00       	push   0x412740
  40a3f1:	50                   	push   eax
  40a3f2:	ff 15 30 01 41 00    	call   DWORD PTR ds:0x410130
  40a3f8:	a3 8c 3b 41 00       	mov    ds:0x413b8c,eax
  40a3fd:	c9                   	leave
  40a3fe:	c3                   	ret
  40a3ff:	56                   	push   esi
  40a400:	57                   	push   edi
  40a401:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  40a405:	6a 00                	push   0x0
  40a407:	57                   	push   edi
  40a408:	e8 ce 02 00 00       	call   0x40a6db
  40a40d:	59                   	pop    ecx
  40a40e:	59                   	pop    ecx
  40a40f:	57                   	push   edi
  40a410:	ff 15 cc 00 41 00    	call   DWORD PTR ds:0x4100cc
  40a416:	8b f0                	mov    esi,eax
  40a418:	f7 de                	neg    esi
  40a41a:	1b f6                	sbb    esi,esi
  40a41c:	46                   	inc    esi
  40a41d:	83 3d ec 36 41 00 00 	cmp    DWORD PTR ds:0x4136ec,0x0
  40a424:	74 15                	je     0x40a43b
  40a426:	85 f6                	test   esi,esi
  40a428:	75 11                	jne    0x40a43b
  40a42a:	a1 8c 3b 41 00       	mov    eax,ds:0x413b8c
  40a42f:	85 c0                	test   eax,eax
  40a431:	74 08                	je     0x40a43b
  40a433:	56                   	push   esi
  40a434:	57                   	push   edi
  40a435:	6a 01                	push   0x1
  40a437:	6a 10                	push   0x10
  40a439:	ff d0                	call   eax
  40a43b:	8b c6                	mov    eax,esi
  40a43d:	5f                   	pop    edi
  40a43e:	5e                   	pop    esi
  40a43f:	c3                   	ret
  40a440:	55                   	push   ebp
  40a441:	8b ec                	mov    ebp,esp
  40a443:	81 ec 04 03 00 00    	sub    esp,0x304
  40a449:	53                   	push   ebx
  40a44a:	56                   	push   esi
  40a44b:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  40a451:	57                   	push   edi
  40a452:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a455:	8d 85 fc fc ff ff    	lea    eax,[ebp-0x304]
  40a45b:	50                   	push   eax
  40a45c:	ff d6                	call   esi
  40a45e:	6a 01                	push   0x1
  40a460:	8d 85 fc fc ff ff    	lea    eax,[ebp-0x304]
  40a466:	5b                   	pop    ebx
  40a467:	53                   	push   ebx
  40a468:	50                   	push   eax
  40a469:	e8 26 03 00 00       	call   0x40a794
  40a46e:	8b 3d 64 01 41 00    	mov    edi,DWORD PTR ds:0x410164
  40a474:	59                   	pop    ecx
  40a475:	59                   	pop    ecx
  40a476:	8d 85 fc fc ff ff    	lea    eax,[ebp-0x304]
  40a47c:	ff 35 5c 37 41 00    	push   DWORD PTR ds:0x41375c
  40a482:	50                   	push   eax
  40a483:	ff d7                	call   edi
  40a485:	85 c0                	test   eax,eax
  40a487:	75 06                	jne    0x40a48f
  40a489:	89 1d 88 3a 41 00    	mov    DWORD PTR ds:0x413a88,ebx
  40a48f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a492:	ff 15 f0 00 41 00    	call   DWORD PTR ds:0x4100f0
  40a498:	f7 d8                	neg    eax
  40a49a:	1b c0                	sbb    eax,eax
  40a49c:	40                   	inc    eax
  40a49d:	83 3d ec 36 41 00 00 	cmp    DWORD PTR ds:0x4136ec,0x0
  40a4a4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40a4a7:	74 1b                	je     0x40a4c4
  40a4a9:	85 c0                	test   eax,eax
  40a4ab:	75 21                	jne    0x40a4ce
  40a4ad:	a1 8c 3b 41 00       	mov    eax,ds:0x413b8c
  40a4b2:	85 c0                	test   eax,eax
  40a4b4:	0f 84 19 02 00 00    	je     0x40a6d3
  40a4ba:	6a 00                	push   0x0
  40a4bc:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a4bf:	53                   	push   ebx
  40a4c0:	6a 04                	push   0x4
  40a4c2:	ff d0                	call   eax
  40a4c4:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
  40a4c8:	0f 84 05 02 00 00    	je     0x40a6d3
  40a4ce:	83 3d 98 37 41 00 00 	cmp    DWORD PTR ds:0x413798,0x0
  40a4d5:	0f 84 f8 01 00 00    	je     0x40a6d3
  40a4db:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a4de:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a4e4:	50                   	push   eax
  40a4e5:	ff d6                	call   esi
  40a4e7:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a4ed:	53                   	push   ebx
  40a4ee:	50                   	push   eax
  40a4ef:	e8 a0 02 00 00       	call   0x40a794
  40a4f4:	59                   	pop    ecx
  40a4f5:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a4fb:	59                   	pop    ecx
  40a4fc:	ff 35 5c 37 41 00    	push   DWORD PTR ds:0x41375c
  40a502:	50                   	push   eax
  40a503:	ff d7                	call   edi
  40a505:	85 c0                	test   eax,eax
  40a507:	74 06                	je     0x40a50f
  40a509:	89 1d f4 36 41 00    	mov    DWORD PTR ds:0x4136f4,ebx
  40a50f:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a515:	6a 00                	push   0x0
  40a517:	50                   	push   eax
  40a518:	e8 77 02 00 00       	call   0x40a794
  40a51d:	a1 b0 36 41 00       	mov    eax,ds:0x4136b0
  40a522:	59                   	pop    ecx
  40a523:	83 f8 02             	cmp    eax,0x2
  40a526:	59                   	pop    ecx
  40a527:	0f 85 d0 00 00 00    	jne    0x40a5fd
  40a52d:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a533:	68 00 01 00 00       	push   0x100
  40a538:	50                   	push   eax
  40a539:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  40a53f:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a545:	50                   	push   eax
  40a546:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40a54c:	80 bc 05 fb fd ff ff 	cmp    BYTE PTR [ebp+eax*1-0x205],0x5c
  40a553:	5c 
  40a554:	8b 35 fc 00 41 00    	mov    esi,DWORD PTR ds:0x4100fc
  40a55a:	74 0e                	je     0x40a56a
  40a55c:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a562:	68 e0 20 41 00       	push   0x4120e0
  40a567:	50                   	push   eax
  40a568:	ff d6                	call   esi
  40a56a:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a570:	68 90 27 41 00       	push   0x412790
  40a575:	50                   	push   eax
  40a576:	ff d6                	call   esi
  40a578:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a57e:	53                   	push   ebx
  40a57f:	50                   	push   eax
  40a580:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  40a586:	8b 3d 18 01 41 00    	mov    edi,DWORD PTR ds:0x410118
  40a58c:	8b f0                	mov    esi,eax
  40a58e:	83 fe ff             	cmp    esi,0xffffffff
  40a591:	75 1d                	jne    0x40a5b0
  40a593:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a599:	6a 00                	push   0x0
  40a59b:	50                   	push   eax
  40a59c:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  40a5a2:	8b f0                	mov    esi,eax
  40a5a4:	6a 0a                	push   0xa
  40a5a6:	68 84 27 41 00       	push   0x412784
  40a5ab:	56                   	push   esi
  40a5ac:	ff d7                	call   edi
  40a5ae:	eb 0b                	jmp    0x40a5bb
  40a5b0:	6a 02                	push   0x2
  40a5b2:	6a 00                	push   0x0
  40a5b4:	56                   	push   esi
  40a5b5:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  40a5bb:	83 fe ff             	cmp    esi,0xffffffff
  40a5be:	0f 84 0f 01 00 00    	je     0x40a6d3
  40a5c4:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a5ca:	50                   	push   eax
  40a5cb:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a5d1:	68 78 27 41 00       	push   0x412778
  40a5d6:	50                   	push   eax
  40a5d7:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40a5dd:	83 c4 0c             	add    esp,0xc
  40a5e0:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a5e6:	50                   	push   eax
  40a5e7:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40a5ed:	50                   	push   eax
  40a5ee:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a5f4:	50                   	push   eax
  40a5f5:	56                   	push   esi
  40a5f6:	ff d7                	call   edi
  40a5f8:	e9 cf 00 00 00       	jmp    0x40a6cc
  40a5fd:	3b c3                	cmp    eax,ebx
  40a5ff:	75 12                	jne    0x40a613
  40a601:	6a 04                	push   0x4
  40a603:	6a 00                	push   0x0
  40a605:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a608:	ff 15 c4 00 41 00    	call   DWORD PTR ds:0x4100c4
  40a60e:	e9 c0 00 00 00       	jmp    0x40a6d3
  40a613:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a619:	50                   	push   eax
  40a61a:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a620:	68 6c 27 41 00       	push   0x41276c
  40a625:	50                   	push   eax
  40a626:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40a62c:	83 c4 0c             	add    esp,0xc
  40a62f:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a635:	68 00 01 00 00       	push   0x100
  40a63a:	50                   	push   eax
  40a63b:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  40a641:	8b 3d 70 01 41 00    	mov    edi,DWORD PTR ds:0x410170
  40a647:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a64d:	50                   	push   eax
  40a64e:	ff d7                	call   edi
  40a650:	80 bc 05 fb fe ff ff 	cmp    BYTE PTR [ebp+eax*1-0x105],0x5c
  40a657:	5c 
  40a658:	8b 35 fc 00 41 00    	mov    esi,DWORD PTR ds:0x4100fc
  40a65e:	74 0e                	je     0x40a66e
  40a660:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a666:	68 e0 20 41 00       	push   0x4120e0
  40a66b:	50                   	push   eax
  40a66c:	ff d6                	call   esi
  40a66e:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a674:	68 5c 27 41 00       	push   0x41275c
  40a679:	50                   	push   eax
  40a67a:	ff d6                	call   esi
  40a67c:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a682:	53                   	push   ebx
  40a683:	50                   	push   eax
  40a684:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  40a68a:	8b f0                	mov    esi,eax
  40a68c:	83 fe ff             	cmp    esi,0xffffffff
  40a68f:	75 13                	jne    0x40a6a4
  40a691:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
  40a697:	6a 00                	push   0x0
  40a699:	50                   	push   eax
  40a69a:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  40a6a0:	8b f0                	mov    esi,eax
  40a6a2:	eb 0b                	jmp    0x40a6af
  40a6a4:	6a 02                	push   0x2
  40a6a6:	6a 00                	push   0x0
  40a6a8:	56                   	push   esi
  40a6a9:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  40a6af:	83 fe ff             	cmp    esi,0xffffffff
  40a6b2:	74 1f                	je     0x40a6d3
  40a6b4:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
  40a6ba:	50                   	push   eax
  40a6bb:	ff d7                	call   edi
  40a6bd:	50                   	push   eax
  40a6be:	8d 85 fc fc ff ff    	lea    eax,[ebp-0x304]
  40a6c4:	50                   	push   eax
  40a6c5:	56                   	push   esi
  40a6c6:	ff 15 18 01 41 00    	call   DWORD PTR ds:0x410118
  40a6cc:	56                   	push   esi
  40a6cd:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  40a6d3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40a6d6:	5f                   	pop    edi
  40a6d7:	5e                   	pop    esi
  40a6d8:	5b                   	pop    ebx
  40a6d9:	c9                   	leave
  40a6da:	c3                   	ret
  40a6db:	83 7c 24 08 00       	cmp    DWORD PTR [esp+0x8],0x0
  40a6e0:	75 08                	jne    0x40a6ea
  40a6e2:	c7 44 24 08 80 00 00 	mov    DWORD PTR [esp+0x8],0x80
  40a6e9:	00 
  40a6ea:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40a6ee:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40a6f2:	ff 15 b8 00 41 00    	call   DWORD PTR ds:0x4100b8
  40a6f8:	f7 d8                	neg    eax
  40a6fa:	1b c0                	sbb    eax,eax
  40a6fc:	40                   	inc    eax
  40a6fd:	c3                   	ret
  40a6fe:	56                   	push   esi
  40a6ff:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  40a703:	57                   	push   edi
  40a704:	8d be 08 01 00 00    	lea    edi,[esi+0x108]
  40a70a:	57                   	push   edi
  40a70b:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  40a70f:	ff 15 bc 00 41 00    	call   DWORD PTR ds:0x4100bc
  40a715:	83 f8 ff             	cmp    eax,0xffffffff
  40a718:	89 86 04 01 00 00    	mov    DWORD PTR [esi+0x104],eax
  40a71e:	75 05                	jne    0x40a725
  40a720:	6a 01                	push   0x1
  40a722:	58                   	pop    eax
  40a723:	eb 18                	jmp    0x40a73d
  40a725:	8d 86 34 01 00 00    	lea    eax,[esi+0x134]
  40a72b:	50                   	push   eax
  40a72c:	56                   	push   esi
  40a72d:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40a733:	8b 07                	mov    eax,DWORD PTR [edi]
  40a735:	89 86 00 01 00 00    	mov    DWORD PTR [esi+0x100],eax
  40a73b:	33 c0                	xor    eax,eax
  40a73d:	5f                   	pop    edi
  40a73e:	5e                   	pop    esi
  40a73f:	c3                   	ret
  40a740:	56                   	push   esi
  40a741:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40a745:	57                   	push   edi
  40a746:	8d be 08 01 00 00    	lea    edi,[esi+0x108]
  40a74c:	57                   	push   edi
  40a74d:	ff b6 04 01 00 00    	push   DWORD PTR [esi+0x104]
  40a753:	ff 15 c0 00 41 00    	call   DWORD PTR ds:0x4100c0
  40a759:	85 c0                	test   eax,eax
  40a75b:	74 1a                	je     0x40a777
  40a75d:	8d 86 34 01 00 00    	lea    eax,[esi+0x134]
  40a763:	50                   	push   eax
  40a764:	56                   	push   esi
  40a765:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40a76b:	8b 07                	mov    eax,DWORD PTR [edi]
  40a76d:	89 86 00 01 00 00    	mov    DWORD PTR [esi+0x100],eax
  40a773:	33 c0                	xor    eax,eax
  40a775:	eb 03                	jmp    0x40a77a
  40a777:	6a 01                	push   0x1
  40a779:	58                   	pop    eax
  40a77a:	5f                   	pop    edi
  40a77b:	5e                   	pop    esi
  40a77c:	c3                   	ret
  40a77d:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40a781:	8b 80 04 01 00 00    	mov    eax,DWORD PTR [eax+0x104]
  40a787:	83 f8 ff             	cmp    eax,0xffffffff
  40a78a:	74 07                	je     0x40a793
  40a78c:	50                   	push   eax
  40a78d:	ff 15 8c 01 41 00    	call   DWORD PTR ds:0x41018c
  40a793:	c3                   	ret
  40a794:	81 ec 48 03 00 00    	sub    esp,0x348
  40a79a:	53                   	push   ebx
  40a79b:	56                   	push   esi
  40a79c:	57                   	push   edi
  40a79d:	8b bc 24 58 03 00 00 	mov    edi,DWORD PTR [esp+0x358]
  40a7a4:	6a 7e                	push   0x7e
  40a7a6:	57                   	push   edi
  40a7a7:	e8 a0 16 00 00       	call   0x40be4c
  40a7ac:	59                   	pop    ecx
  40a7ad:	85 c0                	test   eax,eax
  40a7af:	59                   	pop    ecx
  40a7b0:	75 0d                	jne    0x40a7bf
  40a7b2:	39 84 24 5c 03 00 00 	cmp    DWORD PTR [esp+0x35c],eax
  40a7b9:	0f 85 6a 01 00 00    	jne    0x40a929
  40a7bf:	83 3d b0 36 41 00 00 	cmp    DWORD PTR ds:0x4136b0,0x0
  40a7c6:	0f 84 5d 01 00 00    	je     0x40a929
  40a7cc:	6a 5c                	push   0x5c
  40a7ce:	57                   	push   edi
  40a7cf:	e8 78 16 00 00       	call   0x40be4c
  40a7d4:	8b 1d 68 01 41 00    	mov    ebx,DWORD PTR ds:0x410168
  40a7da:	59                   	pop    ecx
  40a7db:	85 c0                	test   eax,eax
  40a7dd:	59                   	pop    ecx
  40a7de:	75 3b                	jne    0x40a81b
  40a7e0:	8d 44 24 0c          	lea    eax,[esp+0xc]
  40a7e4:	57                   	push   edi
  40a7e5:	50                   	push   eax
  40a7e6:	ff d3                	call   ebx
  40a7e8:	68 00 01 00 00       	push   0x100
  40a7ed:	57                   	push   edi
  40a7ee:	e8 3b 17 00 00       	call   0x40bf2e
  40a7f3:	59                   	pop    ecx
  40a7f4:	59                   	pop    ecx
  40a7f5:	57                   	push   edi
  40a7f6:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40a7fc:	80 7c 38 ff 5c       	cmp    BYTE PTR [eax+edi*1-0x1],0x5c
  40a801:	74 0c                	je     0x40a80f
  40a803:	68 e0 20 41 00       	push   0x4120e0
  40a808:	57                   	push   edi
  40a809:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40a80f:	8d 44 24 0c          	lea    eax,[esp+0xc]
  40a813:	50                   	push   eax
  40a814:	57                   	push   edi
  40a815:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40a81b:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  40a822:	8b f7                	mov    esi,edi
  40a824:	7e 12                	jle    0x40a838
  40a826:	0f be 07             	movsx  eax,BYTE PTR [edi]
  40a829:	68 03 01 00 00       	push   0x103
  40a82e:	50                   	push   eax
  40a82f:	e8 4a 1a 00 00       	call   0x40c27e
  40a834:	59                   	pop    ecx
  40a835:	59                   	pop    ecx
  40a836:	eb 12                	jmp    0x40a84a
  40a838:	0f be 07             	movsx  eax,BYTE PTR [edi]
  40a83b:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  40a841:	66 8b 04 41          	mov    ax,WORD PTR [ecx+eax*2]
  40a845:	25 03 01 00 00       	and    eax,0x103
  40a84a:	85 c0                	test   eax,eax
  40a84c:	74 12                	je     0x40a860
  40a84e:	80 7f 01 3a          	cmp    BYTE PTR [edi+0x1],0x3a
  40a852:	75 0c                	jne    0x40a860
  40a854:	0f be 07             	movsx  eax,BYTE PTR [edi]
  40a857:	50                   	push   eax
  40a858:	e8 4b 18 00 00       	call   0x40c0a8
  40a85d:	59                   	pop    ecx
  40a85e:	88 07                	mov    BYTE PTR [edi],al
  40a860:	80 3f 5c             	cmp    BYTE PTR [edi],0x5c
  40a863:	75 1c                	jne    0x40a881
  40a865:	80 7f 01 5c          	cmp    BYTE PTR [edi+0x1],0x5c
  40a869:	75 16                	jne    0x40a881
  40a86b:	8d 77 02             	lea    esi,[edi+0x2]
  40a86e:	8a 06                	mov    al,BYTE PTR [esi]
  40a870:	84 c0                	test   al,al
  40a872:	74 07                	je     0x40a87b
  40a874:	3c 5c                	cmp    al,0x5c
  40a876:	74 03                	je     0x40a87b
  40a878:	46                   	inc    esi
  40a879:	eb f3                	jmp    0x40a86e
  40a87b:	80 3e 5c             	cmp    BYTE PTR [esi],0x5c
  40a87e:	75 01                	jne    0x40a881
  40a880:	46                   	inc    esi
  40a881:	8a 06                	mov    al,BYTE PTR [esi]
  40a883:	84 c0                	test   al,al
  40a885:	74 04                	je     0x40a88b
  40a887:	3c 5c                	cmp    al,0x5c
  40a889:	75 f5                	jne    0x40a880
  40a88b:	80 3e 5c             	cmp    BYTE PTR [esi],0x5c
  40a88e:	75 01                	jne    0x40a891
  40a890:	46                   	inc    esi
  40a891:	8a 06                	mov    al,BYTE PTR [esi]
  40a893:	84 c0                	test   al,al
  40a895:	0f 84 8e 00 00 00    	je     0x40a929
  40a89b:	55                   	push   ebp
  40a89c:	8b ee                	mov    ebp,esi
  40a89e:	84 c0                	test   al,al
  40a8a0:	74 0a                	je     0x40a8ac
  40a8a2:	3c 5c                	cmp    al,0x5c
  40a8a4:	74 06                	je     0x40a8ac
  40a8a6:	8a 45 01             	mov    al,BYTE PTR [ebp+0x1]
  40a8a9:	45                   	inc    ebp
  40a8aa:	eb f2                	jmp    0x40a89e
  40a8ac:	8d 44 24 10          	lea    eax,[esp+0x10]
  40a8b0:	55                   	push   ebp
  40a8b1:	50                   	push   eax
  40a8b2:	ff d3                	call   ebx
  40a8b4:	80 65 00 00          	and    BYTE PTR [ebp+0x0],0x0
  40a8b8:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
  40a8bf:	50                   	push   eax
  40a8c0:	6a 17                	push   0x17
  40a8c2:	57                   	push   edi
  40a8c3:	e8 36 fe ff ff       	call   0x40a6fe
  40a8c8:	83 c4 0c             	add    esp,0xc
  40a8cb:	85 c0                	test   eax,eax
  40a8cd:	75 32                	jne    0x40a901
  40a8cf:	39 84 24 60 03 00 00 	cmp    DWORD PTR [esp+0x360],eax
  40a8d6:	75 10                	jne    0x40a8e8
  40a8d8:	38 84 24 48 03 00 00 	cmp    BYTE PTR [esp+0x348],al
  40a8df:	8d 84 24 48 03 00 00 	lea    eax,[esp+0x348]
  40a8e6:	75 07                	jne    0x40a8ef
  40a8e8:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
  40a8ef:	50                   	push   eax
  40a8f0:	56                   	push   esi
  40a8f1:	ff d3                	call   ebx
  40a8f3:	8d 84 24 10 01 00 00 	lea    eax,[esp+0x110]
  40a8fa:	50                   	push   eax
  40a8fb:	e8 7d fe ff ff       	call   0x40a77d
  40a900:	59                   	pop    ecx
  40a901:	57                   	push   edi
  40a902:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40a908:	8b f0                	mov    esi,eax
  40a90a:	8d 44 24 10          	lea    eax,[esp+0x10]
  40a90e:	50                   	push   eax
  40a90f:	57                   	push   edi
  40a910:	03 f7                	add    esi,edi
  40a912:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40a918:	80 3e 5c             	cmp    BYTE PTR [esi],0x5c
  40a91b:	75 01                	jne    0x40a91e
  40a91d:	46                   	inc    esi
  40a91e:	8a 06                	mov    al,BYTE PTR [esi]
  40a920:	84 c0                	test   al,al
  40a922:	0f 85 74 ff ff ff    	jne    0x40a89c
  40a928:	5d                   	pop    ebp
  40a929:	5f                   	pop    edi
  40a92a:	5e                   	pop    esi
  40a92b:	5b                   	pop    ebx
  40a92c:	81 c4 48 03 00 00    	add    esp,0x348
  40a932:	c3                   	ret
  40a933:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40a937:	ff 15 e4 00 41 00    	call   DWORD PTR ds:0x4100e4
  40a93d:	33 c9                	xor    ecx,ecx
  40a93f:	83 f8 ff             	cmp    eax,0xffffffff
  40a942:	0f 95 c1             	setne  cl
  40a945:	49                   	dec    ecx
  40a946:	8b c1                	mov    eax,ecx
  40a948:	c3                   	ret
  40a949:	55                   	push   ebp
  40a94a:	8b ec                	mov    ebp,esp
  40a94c:	81 ec 08 01 00 00    	sub    esp,0x108
  40a952:	53                   	push   ebx
  40a953:	57                   	push   edi
  40a954:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a957:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40a95d:	50                   	push   eax
  40a95e:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40a964:	33 ff                	xor    edi,edi
  40a966:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40a96c:	57                   	push   edi
  40a96d:	50                   	push   eax
  40a96e:	e8 21 fe ff ff       	call   0x40a794
  40a973:	39 3d b0 36 41 00    	cmp    DWORD PTR ds:0x4136b0,edi
  40a979:	59                   	pop    ecx
  40a97a:	59                   	pop    ecx
  40a97b:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  40a97e:	74 65                	je     0x40a9e5
  40a980:	57                   	push   edi
  40a981:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40a984:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  40a98a:	8b d8                	mov    ebx,eax
  40a98c:	3b df                	cmp    ebx,edi
  40a98e:	7c 55                	jl     0x40a9e5
  40a990:	56                   	push   esi
  40a991:	8b 35 44 01 41 00    	mov    esi,DWORD PTR ds:0x410144
  40a997:	8d 45 0a             	lea    eax,[ebp+0xa]
  40a99a:	6a 02                	push   0x2
  40a99c:	50                   	push   eax
  40a99d:	53                   	push   ebx
  40a99e:	ff d6                	call   esi
  40a9a0:	66 81 7d 0a 4d 5a    	cmp    WORD PTR [ebp+0xa],0x5a4d
  40a9a6:	75 35                	jne    0x40a9dd
  40a9a8:	57                   	push   edi
  40a9a9:	8b 3d 4c 01 41 00    	mov    edi,DWORD PTR ds:0x41014c
  40a9af:	6a 3c                	push   0x3c
  40a9b1:	53                   	push   ebx
  40a9b2:	ff d7                	call   edi
  40a9b4:	8d 45 f8             	lea    eax,[ebp-0x8]
  40a9b7:	6a 04                	push   0x4
  40a9b9:	50                   	push   eax
  40a9ba:	53                   	push   ebx
  40a9bb:	ff d6                	call   esi
  40a9bd:	6a 00                	push   0x0
  40a9bf:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40a9c2:	53                   	push   ebx
  40a9c3:	ff d7                	call   edi
  40a9c5:	8d 45 0a             	lea    eax,[ebp+0xa]
  40a9c8:	6a 02                	push   0x2
  40a9ca:	50                   	push   eax
  40a9cb:	53                   	push   ebx
  40a9cc:	ff d6                	call   esi
  40a9ce:	66 81 7d 0a 50 45    	cmp    WORD PTR [ebp+0xa],0x4550
  40a9d4:	75 07                	jne    0x40a9dd
  40a9d6:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  40a9dd:	53                   	push   ebx
  40a9de:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  40a9e4:	5e                   	pop    esi
  40a9e5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40a9e8:	5f                   	pop    edi
  40a9e9:	5b                   	pop    ebx
  40a9ea:	c9                   	leave
  40a9eb:	c3                   	ret
  40a9ec:	55                   	push   ebp
  40a9ed:	8b ec                	mov    ebp,esp
  40a9ef:	83 ec 4c             	sub    esp,0x4c
  40a9f2:	56                   	push   esi
  40a9f3:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  40a9f6:	8d 45 f0             	lea    eax,[ebp-0x10]
  40a9f9:	57                   	push   edi
  40a9fa:	50                   	push   eax
  40a9fb:	56                   	push   esi
  40a9fc:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  40aa02:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  40aa05:	6a 06                	push   0x6
  40aa07:	99                   	cdq
  40aa08:	59                   	pop    ecx
  40aa09:	f7 f9                	idiv   ecx
  40aa0b:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40aa0e:	6a 06                	push   0x6
  40aa10:	5f                   	pop    edi
  40aa11:	01 45 f0             	add    DWORD PTR [ebp-0x10],eax
  40aa14:	8b c1                	mov    eax,ecx
  40aa16:	99                   	cdq
  40aa17:	f7 ff                	idiv   edi
  40aa19:	33 ff                	xor    edi,edi
  40aa1b:	57                   	push   edi
  40aa1c:	03 c8                	add    ecx,eax
  40aa1e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40aa21:	2b 45 f4             	sub    eax,DWORD PTR [ebp-0xc]
  40aa24:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  40aa27:	2b 4d f0             	sub    ecx,DWORD PTR [ebp-0x10]
  40aa2a:	50                   	push   eax
  40aa2b:	51                   	push   ecx
  40aa2c:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40aa2f:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  40aa32:	56                   	push   esi
  40aa33:	ff 15 c4 02 41 00    	call   DWORD PTR ds:0x4102c4
  40aa39:	39 3d ec 36 41 00    	cmp    DWORD PTR ds:0x4136ec,edi
  40aa3f:	74 0e                	je     0x40aa4f
  40aa41:	a1 b8 3a 41 00       	mov    eax,ds:0x413ab8
  40aa46:	3b c7                	cmp    eax,edi
  40aa48:	74 05                	je     0x40aa4f
  40aa4a:	6a 38                	push   0x38
  40aa4c:	56                   	push   esi
  40aa4d:	ff d0                	call   eax
  40aa4f:	39 3d 08 3b 41 00    	cmp    DWORD PTR ds:0x413b08,edi
  40aa55:	0f 85 92 00 00 00    	jne    0x40aaed
  40aa5b:	57                   	push   edi
  40aa5c:	57                   	push   edi
  40aa5d:	6a 31                	push   0x31
  40aa5f:	56                   	push   esi
  40aa60:	89 3d 08 3b 41 00    	mov    DWORD PTR ds:0x413b08,edi
  40aa66:	ff 15 14 03 41 00    	call   DWORD PTR ds:0x410314
  40aa6c:	3b c7                	cmp    eax,edi
  40aa6e:	74 75                	je     0x40aae5
  40aa70:	8d 4d b4             	lea    ecx,[ebp-0x4c]
  40aa73:	51                   	push   ecx
  40aa74:	6a 3c                	push   0x3c
  40aa76:	50                   	push   eax
  40aa77:	ff 15 54 00 41 00    	call   DWORD PTR ds:0x410054
  40aa7d:	85 c0                	test   eax,eax
  40aa7f:	74 64                	je     0x40aae5
  40aa81:	a0 e4 36 41 00       	mov    al,ds:0x4136e4
  40aa86:	53                   	push   ebx
  40aa87:	56                   	push   esi
  40aa88:	c7 45 c4 2c 01 00 00 	mov    DWORD PTR [ebp-0x3c],0x12c
  40aa8f:	88 45 cb             	mov    BYTE PTR [ebp-0x35],al
  40aa92:	ff 15 bc 02 41 00    	call   DWORD PTR ds:0x4102bc
  40aa98:	8b d8                	mov    ebx,eax
  40aa9a:	6a 48                	push   0x48
  40aa9c:	6a 5a                	push   0x5a
  40aa9e:	53                   	push   ebx
  40aa9f:	ff 15 6c 00 41 00    	call   DWORD PTR ds:0x41006c
  40aaa5:	50                   	push   eax
  40aaa6:	0f b6 05 40 37 41 00 	movzx  eax,BYTE PTR ds:0x413740
  40aaad:	50                   	push   eax
  40aaae:	ff 15 5c 01 41 00    	call   DWORD PTR ds:0x41015c
  40aab4:	f7 d8                	neg    eax
  40aab6:	53                   	push   ebx
  40aab7:	56                   	push   esi
  40aab8:	89 45 b4             	mov    DWORD PTR [ebp-0x4c],eax
  40aabb:	ff 15 b4 02 41 00    	call   DWORD PTR ds:0x4102b4
  40aac1:	a1 9c 36 41 00       	mov    eax,ds:0x41369c
  40aac6:	5b                   	pop    ebx
  40aac7:	3b c7                	cmp    eax,edi
  40aac9:	74 0b                	je     0x40aad6
  40aacb:	50                   	push   eax
  40aacc:	8d 45 d0             	lea    eax,[ebp-0x30]
  40aacf:	50                   	push   eax
  40aad0:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40aad6:	8d 45 b4             	lea    eax,[ebp-0x4c]
  40aad9:	50                   	push   eax
  40aada:	ff 15 98 00 41 00    	call   DWORD PTR ds:0x410098
  40aae0:	a3 08 3b 41 00       	mov    ds:0x413b08,eax
  40aae5:	39 3d 08 3b 41 00    	cmp    DWORD PTR ds:0x413b08,edi
  40aaeb:	74 12                	je     0x40aaff
  40aaed:	ff 35 08 3b 41 00    	push   DWORD PTR ds:0x413b08
  40aaf3:	68 03 ab 40 00       	push   0x40ab03
  40aaf8:	56                   	push   esi
  40aaf9:	ff 15 0c 03 41 00    	call   DWORD PTR ds:0x41030c
  40aaff:	5f                   	pop    edi
  40ab00:	5e                   	pop    esi
  40ab01:	c9                   	leave
  40ab02:	c3                   	ret
  40ab03:	55                   	push   ebp
  40ab04:	8b ec                	mov    ebp,esp
  40ab06:	83 ec 20             	sub    esp,0x20
  40ab09:	53                   	push   ebx
  40ab0a:	56                   	push   esi
  40ab0b:	57                   	push   edi
  40ab0c:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  40ab0f:	8d 45 e0             	lea    eax,[ebp-0x20]
  40ab12:	50                   	push   eax
  40ab13:	57                   	push   edi
  40ab14:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  40ab1a:	57                   	push   edi
  40ab1b:	ff 15 08 03 41 00    	call   DWORD PTR ds:0x410308
  40ab21:	8b d8                	mov    ebx,eax
  40ab23:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  40ab26:	8b 35 dc 02 41 00    	mov    esi,DWORD PTR ds:0x4102dc
  40ab2c:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  40ab2f:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  40ab32:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40ab35:	8d 45 f8             	lea    eax,[ebp-0x8]
  40ab38:	50                   	push   eax
  40ab39:	53                   	push   ebx
  40ab3a:	ff d6                	call   esi
  40ab3c:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  40ab3f:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  40ab42:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  40ab45:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  40ab48:	8d 45 f0             	lea    eax,[ebp-0x10]
  40ab4b:	50                   	push   eax
  40ab4c:	53                   	push   ebx
  40ab4d:	ff d6                	call   esi
  40ab4f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  40ab52:	6a 06                	push   0x6
  40ab54:	99                   	cdq
  40ab55:	59                   	pop    ecx
  40ab56:	f7 f9                	idiv   ecx
  40ab58:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  40ab5b:	6a 06                	push   0x6
  40ab5d:	5e                   	pop    esi
  40ab5e:	6a 00                	push   0x0
  40ab60:	01 45 f8             	add    DWORD PTR [ebp-0x8],eax
  40ab63:	8b c1                	mov    eax,ecx
  40ab65:	99                   	cdq
  40ab66:	f7 fe                	idiv   esi
  40ab68:	03 c8                	add    ecx,eax
  40ab6a:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  40ab6d:	2b 45 fc             	sub    eax,DWORD PTR [ebp-0x4]
  40ab70:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  40ab73:	2b 4d f8             	sub    ecx,DWORD PTR [ebp-0x8]
  40ab76:	50                   	push   eax
  40ab77:	51                   	push   ecx
  40ab78:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40ab7b:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40ab7e:	57                   	push   edi
  40ab7f:	ff 15 c4 02 41 00    	call   DWORD PTR ds:0x4102c4
  40ab85:	6a 00                	push   0x0
  40ab87:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40ab8a:	6a 30                	push   0x30
  40ab8c:	57                   	push   edi
  40ab8d:	ff 15 14 03 41 00    	call   DWORD PTR ds:0x410314
  40ab93:	6a 01                	push   0x1
  40ab95:	58                   	pop    eax
  40ab96:	5f                   	pop    edi
  40ab97:	5e                   	pop    esi
  40ab98:	5b                   	pop    ebx
  40ab99:	c9                   	leave
  40ab9a:	c2 08 00             	ret    0x8
  40ab9d:	55                   	push   ebp
  40ab9e:	8b ec                	mov    ebp,esp
  40aba0:	81 ec 20 02 00 00    	sub    esp,0x220
  40aba6:	53                   	push   ebx
  40aba7:	8d 45 e0             	lea    eax,[ebp-0x20]
  40abaa:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40abad:	68 b0 27 41 00       	push   0x4127b0
  40abb2:	50                   	push   eax
  40abb3:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40abb9:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
  40abbc:	83 c4 0c             	add    esp,0xc
  40abbf:	8d 45 e0             	lea    eax,[ebp-0x20]
  40abc2:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40abc8:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40abcb:	53                   	push   ebx
  40abcc:	68 ac 27 41 00       	push   0x4127ac
  40abd1:	50                   	push   eax
  40abd2:	68 a0 27 41 00       	push   0x4127a0
  40abd7:	ff 15 d0 00 41 00    	call   DWORD PTR ds:0x4100d0
  40abdd:	80 3b 7f             	cmp    BYTE PTR [ebx],0x7f
  40abe0:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  40abe3:	75 1b                	jne    0x40ac00
  40abe5:	83 f8 01             	cmp    eax,0x1
  40abe8:	75 16                	jne    0x40ac00
  40abea:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40abed:	53                   	push   ebx
  40abee:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40abf1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40abf4:	ff 15 04 03 41 00    	call   DWORD PTR ds:0x410304
  40abfa:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40abfd:	5b                   	pop    ebx
  40abfe:	c9                   	leave
  40abff:	c3                   	ret
  40ac00:	57                   	push   edi
  40ac01:	6a 7c                	push   0x7c
  40ac03:	53                   	push   ebx
  40ac04:	e8 43 12 00 00       	call   0x40be4c
  40ac09:	8b f8                	mov    edi,eax
  40ac0b:	59                   	pop    ecx
  40ac0c:	85 ff                	test   edi,edi
  40ac0e:	59                   	pop    ecx
  40ac0f:	74 3a                	je     0x40ac4b
  40ac11:	56                   	push   esi
  40ac12:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  40ac18:	8d 47 01             	lea    eax,[edi+0x1]
  40ac1b:	50                   	push   eax
  40ac1c:	8d 85 e0 fd ff ff    	lea    eax,[ebp-0x220]
  40ac22:	50                   	push   eax
  40ac23:	ff d6                	call   esi
  40ac25:	68 9c 27 41 00       	push   0x41279c
  40ac2a:	57                   	push   edi
  40ac2b:	ff d6                	call   esi
  40ac2d:	8d 85 e0 fd ff ff    	lea    eax,[ebp-0x220]
  40ac33:	83 c7 02             	add    edi,0x2
  40ac36:	50                   	push   eax
  40ac37:	57                   	push   edi
  40ac38:	ff d6                	call   esi
  40ac3a:	6a 7c                	push   0x7c
  40ac3c:	53                   	push   ebx
  40ac3d:	e8 0a 12 00 00       	call   0x40be4c
  40ac42:	8b f8                	mov    edi,eax
  40ac44:	59                   	pop    ecx
  40ac45:	85 ff                	test   edi,edi
  40ac47:	59                   	pop    ecx
  40ac48:	75 ce                	jne    0x40ac18
  40ac4a:	5e                   	pop    esi
  40ac4b:	6a 7e                	push   0x7e
  40ac4d:	53                   	push   ebx
  40ac4e:	e8 f9 11 00 00       	call   0x40be4c
  40ac53:	59                   	pop    ecx
  40ac54:	59                   	pop    ecx
  40ac55:	5f                   	pop    edi
  40ac56:	85 c0                	test   eax,eax
  40ac58:	74 a0                	je     0x40abfa
  40ac5a:	6a 7e                	push   0x7e
  40ac5c:	53                   	push   ebx
  40ac5d:	c6 00 20             	mov    BYTE PTR [eax],0x20
  40ac60:	e8 e7 11 00 00       	call   0x40be4c
  40ac65:	59                   	pop    ecx
  40ac66:	59                   	pop    ecx
  40ac67:	eb ed                	jmp    0x40ac56
  40ac69:	55                   	push   ebp
  40ac6a:	8b ec                	mov    ebp,esp
  40ac6c:	83 ec 1c             	sub    esp,0x1c
  40ac6f:	53                   	push   ebx
  40ac70:	6a 01                	push   0x1
  40ac72:	6a 00                	push   0x0
  40ac74:	6a 00                	push   0x0
  40ac76:	ff 15 14 00 41 00    	call   DWORD PTR ds:0x410014
  40ac7c:	8b d8                	mov    ebx,eax
  40ac7e:	85 db                	test   ebx,ebx
  40ac80:	74 39                	je     0x40acbb
  40ac82:	56                   	push   esi
  40ac83:	57                   	push   edi
  40ac84:	68 20 00 01 00       	push   0x10020
  40ac89:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40ac8c:	53                   	push   ebx
  40ac8d:	ff 15 40 00 41 00    	call   DWORD PTR ds:0x410040
  40ac93:	8b 35 10 00 41 00    	mov    esi,DWORD PTR ds:0x410010
  40ac99:	8b f8                	mov    edi,eax
  40ac9b:	85 ff                	test   edi,edi
  40ac9d:	74 17                	je     0x40acb6
  40ac9f:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40aca2:	50                   	push   eax
  40aca3:	6a 01                	push   0x1
  40aca5:	57                   	push   edi
  40aca6:	ff 15 3c 00 41 00    	call   DWORD PTR ds:0x41003c
  40acac:	57                   	push   edi
  40acad:	ff 15 38 00 41 00    	call   DWORD PTR ds:0x410038
  40acb3:	57                   	push   edi
  40acb4:	ff d6                	call   esi
  40acb6:	53                   	push   ebx
  40acb7:	ff d6                	call   esi
  40acb9:	5f                   	pop    edi
  40acba:	5e                   	pop    esi
  40acbb:	5b                   	pop    ebx
  40acbc:	c9                   	leave
  40acbd:	c3                   	ret
  40acbe:	55                   	push   ebp
  40acbf:	8b ec                	mov    ebp,esp
  40acc1:	81 ec 24 05 00 00    	sub    esp,0x524
  40acc7:	53                   	push   ebx
  40acc8:	56                   	push   esi
  40acc9:	bb 04 01 00 00       	mov    ebx,0x104
  40acce:	57                   	push   edi
  40accf:	8d 85 e0 fb ff ff    	lea    eax,[ebp-0x420]
  40acd5:	53                   	push   ebx
  40acd6:	50                   	push   eax
  40acd7:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  40acdd:	8d 85 e0 fb ff ff    	lea    eax,[ebp-0x420]
  40ace3:	68 dc 27 41 00       	push   0x4127dc
  40ace8:	50                   	push   eax
  40ace9:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40acef:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  40acf5:	8d 85 e0 fb ff ff    	lea    eax,[ebp-0x420]
  40acfb:	50                   	push   eax
  40acfc:	8d 85 e4 fc ff ff    	lea    eax,[ebp-0x31c]
  40ad02:	50                   	push   eax
  40ad03:	ff d6                	call   esi
  40ad05:	8b 3d 70 01 41 00    	mov    edi,DWORD PTR ds:0x410170
  40ad0b:	8d 85 e4 fc ff ff    	lea    eax,[ebp-0x31c]
  40ad11:	68 cc 27 41 00       	push   0x4127cc
  40ad16:	50                   	push   eax
  40ad17:	ff d7                	call   edi
  40ad19:	8d 8d e4 fc ff ff    	lea    ecx,[ebp-0x31c]
  40ad1f:	83 e9 0a             	sub    ecx,0xa
  40ad22:	03 c1                	add    eax,ecx
  40ad24:	50                   	push   eax
  40ad25:	ff d6                	call   esi
  40ad27:	8d 85 e0 fb ff ff    	lea    eax,[ebp-0x420]
  40ad2d:	6a 00                	push   0x0
  40ad2f:	50                   	push   eax
  40ad30:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  40ad36:	83 f8 ff             	cmp    eax,0xffffffff
  40ad39:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40ad3c:	0f 84 ec 01 00 00    	je     0x40af2e
  40ad42:	8d 85 e4 fc ff ff    	lea    eax,[ebp-0x31c]
  40ad48:	6a 00                	push   0x0
  40ad4a:	50                   	push   eax
  40ad4b:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  40ad51:	83 f8 ff             	cmp    eax,0xffffffff
  40ad54:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  40ad57:	75 0e                	jne    0x40ad67
  40ad59:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40ad5c:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  40ad62:	e9 c7 01 00 00       	jmp    0x40af2e
  40ad67:	33 c0                	xor    eax,eax
  40ad69:	68 00 40 00 00       	push   0x4000
  40ad6e:	50                   	push   eax
  40ad6f:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  40ad72:	ff 35 84 36 41 00    	push   DWORD PTR ds:0x413684
  40ad78:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  40ad7b:	e8 d0 12 00 00       	call   0x40c050
  40ad80:	83 25 a4 3a 41 00 00 	and    DWORD PTR ds:0x413aa4,0x0
  40ad87:	83 25 6c 37 41 00 00 	and    DWORD PTR ds:0x41376c,0x0
  40ad8e:	83 c4 0c             	add    esp,0xc
  40ad91:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40ad97:	53                   	push   ebx
  40ad98:	50                   	push   eax
  40ad99:	ff 15 58 01 41 00    	call   DWORD PTR ds:0x410158
  40ad9f:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40ada5:	50                   	push   eax
  40ada6:	ff d7                	call   edi
  40ada8:	80 bc 05 eb fe ff ff 	cmp    BYTE PTR [ebp+eax*1-0x115],0x5c
  40adaf:	5c 
  40adb0:	74 12                	je     0x40adc4
  40adb2:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40adb8:	68 e0 20 41 00       	push   0x4120e0
  40adbd:	50                   	push   eax
  40adbe:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40adc4:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40adca:	50                   	push   eax
  40adcb:	ff d7                	call   edi
  40adcd:	50                   	push   eax
  40adce:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40add4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40add7:	50                   	push   eax
  40add8:	e8 53 49 00 00       	call   0x40f730
  40addd:	83 c4 0c             	add    esp,0xc
  40ade0:	85 c0                	test   eax,eax
  40ade2:	75 0f                	jne    0x40adf3
  40ade4:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40adea:	50                   	push   eax
  40adeb:	ff d7                	call   edi
  40aded:	03 45 08             	add    eax,DWORD PTR [ebp+0x8]
  40adf0:	50                   	push   eax
  40adf1:	eb 03                	jmp    0x40adf6
  40adf3:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40adf6:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40adfc:	50                   	push   eax
  40adfd:	ff d6                	call   esi
  40adff:	6a 01                	push   0x1
  40ae01:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40ae04:	53                   	push   ebx
  40ae05:	8d 85 e8 fd ff ff    	lea    eax,[ebp-0x218]
  40ae0b:	50                   	push   eax
  40ae0c:	e8 f6 bc ff ff       	call   0x406b07
  40ae11:	83 c4 10             	add    esp,0x10
  40ae14:	85 c0                	test   eax,eax
  40ae16:	0f 84 17 01 00 00    	je     0x40af33
  40ae1c:	8a 85 e8 fd ff ff    	mov    al,BYTE PTR [ebp-0x218]
  40ae22:	8d 9d e8 fd ff ff    	lea    ebx,[ebp-0x218]
  40ae28:	84 c0                	test   al,al
  40ae2a:	74 0e                	je     0x40ae3a
  40ae2c:	3c 20                	cmp    al,0x20
  40ae2e:	74 04                	je     0x40ae34
  40ae30:	3c 09                	cmp    al,0x9
  40ae32:	75 06                	jne    0x40ae3a
  40ae34:	8a 43 01             	mov    al,BYTE PTR [ebx+0x1]
  40ae37:	43                   	inc    ebx
  40ae38:	eb ee                	jmp    0x40ae28
  40ae3a:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
  40ae3e:	74 75                	je     0x40aeb5
  40ae40:	80 3b 5b             	cmp    BYTE PTR [ebx],0x5b
  40ae43:	75 09                	jne    0x40ae4e
  40ae45:	83 65 f8 00          	and    DWORD PTR [ebp-0x8],0x0
  40ae49:	e9 82 00 00 00       	jmp    0x40aed0
  40ae4e:	6a 07                	push   0x7
  40ae50:	68 c4 27 41 00       	push   0x4127c4
  40ae55:	53                   	push   ebx
  40ae56:	e8 d5 48 00 00       	call   0x40f730
  40ae5b:	83 c4 0c             	add    esp,0xc
  40ae5e:	85 c0                	test   eax,eax
  40ae60:	75 6e                	jne    0x40aed0
  40ae62:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40ae68:	83 c3 07             	add    ebx,0x7
  40ae6b:	50                   	push   eax
  40ae6c:	53                   	push   ebx
  40ae6d:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  40ae73:	85 c0                	test   eax,eax
  40ae75:	74 0e                	je     0x40ae85
  40ae77:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40ae7a:	53                   	push   ebx
  40ae7b:	ff 15 64 01 41 00    	call   DWORD PTR ds:0x410164
  40ae81:	85 c0                	test   eax,eax
  40ae83:	75 4b                	jne    0x40aed0
  40ae85:	8d 85 e8 fd ff ff    	lea    eax,[ebp-0x218]
  40ae8b:	50                   	push   eax
  40ae8c:	8d 85 dc fa ff ff    	lea    eax,[ebp-0x524]
  40ae92:	50                   	push   eax
  40ae93:	ff d6                	call   esi
  40ae95:	8d 85 dc fa ff ff    	lea    eax,[ebp-0x524]
  40ae9b:	c6 85 e8 fd ff ff 3b 	mov    BYTE PTR [ebp-0x218],0x3b
  40aea2:	50                   	push   eax
  40aea3:	8d 85 e9 fd ff ff    	lea    eax,[ebp-0x217]
  40aea9:	50                   	push   eax
  40aeaa:	ff d6                	call   esi
  40aeac:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
  40aeb3:	eb 1b                	jmp    0x40aed0
  40aeb5:	6a 08                	push   0x8
  40aeb7:	68 b8 27 41 00       	push   0x4127b8
  40aebc:	53                   	push   ebx
  40aebd:	e8 6e 48 00 00       	call   0x40f730
  40aec2:	83 c4 0c             	add    esp,0xc
  40aec5:	85 c0                	test   eax,eax
  40aec7:	75 07                	jne    0x40aed0
  40aec9:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
  40aed0:	8d 85 e8 fd ff ff    	lea    eax,[ebp-0x218]
  40aed6:	68 9c 27 41 00       	push   0x41279c
  40aedb:	50                   	push   eax
  40aedc:	ff 15 fc 00 41 00    	call   DWORD PTR ds:0x4100fc
  40aee2:	8d 85 e8 fd ff ff    	lea    eax,[ebp-0x218]
  40aee8:	50                   	push   eax
  40aee9:	ff d7                	call   edi
  40aeeb:	8b d8                	mov    ebx,eax
  40aeed:	8d 85 e8 fd ff ff    	lea    eax,[ebp-0x218]
  40aef3:	53                   	push   ebx
  40aef4:	50                   	push   eax
  40aef5:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40aef8:	ff 15 18 01 41 00    	call   DWORD PTR ds:0x410118
  40aefe:	3b c3                	cmp    eax,ebx
  40af00:	75 0f                	jne    0x40af11
  40af02:	6a 01                	push   0x1
  40af04:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40af07:	68 04 01 00 00       	push   0x104
  40af0c:	e9 f4 fe ff ff       	jmp    0x40ae05
  40af11:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40af14:	8b 35 1c 01 41 00    	mov    esi,DWORD PTR ds:0x41011c
  40af1a:	ff d6                	call   esi
  40af1c:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40af1f:	ff d6                	call   esi
  40af21:	8d 85 e4 fc ff ff    	lea    eax,[ebp-0x31c]
  40af27:	50                   	push   eax
  40af28:	e8 13 f5 ff ff       	call   0x40a440
  40af2d:	59                   	pop    ecx
  40af2e:	5f                   	pop    edi
  40af2f:	5e                   	pop    esi
  40af30:	5b                   	pop    ebx
  40af31:	c9                   	leave
  40af32:	c3                   	ret
  40af33:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40af36:	8b 35 1c 01 41 00    	mov    esi,DWORD PTR ds:0x41011c
  40af3c:	ff d6                	call   esi
  40af3e:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40af41:	ff d6                	call   esi
  40af43:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
  40af47:	74 d8                	je     0x40af21
  40af49:	8d 85 e0 fb ff ff    	lea    eax,[ebp-0x420]
  40af4f:	50                   	push   eax
  40af50:	e8 eb f4 ff ff       	call   0x40a440
  40af55:	8d 85 e0 fb ff ff    	lea    eax,[ebp-0x420]
  40af5b:	50                   	push   eax
  40af5c:	8d 85 e4 fc ff ff    	lea    eax,[ebp-0x31c]
  40af62:	50                   	push   eax
  40af63:	e8 20 19 00 00       	call   0x40c888
  40af68:	83 c4 0c             	add    esp,0xc
  40af6b:	eb c1                	jmp    0x40af2e
  40af6d:	55                   	push   ebp
  40af6e:	8b ec                	mov    ebp,esp
  40af70:	81 ec 00 01 00 00    	sub    esp,0x100
  40af76:	53                   	push   ebx
  40af77:	56                   	push   esi
  40af78:	57                   	push   edi
  40af79:	ff 35 98 36 41 00    	push   DWORD PTR ds:0x413698
  40af7f:	ff 15 bc 02 41 00    	call   DWORD PTR ds:0x4102bc
  40af85:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40af8b:	8b d8                	mov    ebx,eax
  40af8d:	bf 00 01 00 00       	mov    edi,0x100
  40af92:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40af98:	57                   	push   edi
  40af99:	50                   	push   eax
  40af9a:	68 d0 34 41 00       	push   0x4134d0
  40af9f:	be 38 21 41 00       	mov    esi,0x412138
  40afa4:	68 10 28 41 00       	push   0x412810
  40afa9:	56                   	push   esi
  40afaa:	ff 15 d0 00 41 00    	call   DWORD PTR ds:0x4100d0
  40afb0:	80 bd 00 ff ff ff 00 	cmp    BYTE PTR [ebp-0x100],0x0
  40afb7:	74 1a                	je     0x40afd3
  40afb9:	57                   	push   edi
  40afba:	e8 b2 06 00 00       	call   0x40b671
  40afbf:	59                   	pop    ecx
  40afc0:	a3 9c 36 41 00       	mov    ds:0x41369c,eax
  40afc5:	8d 8d 00 ff ff ff    	lea    ecx,[ebp-0x100]
  40afcb:	51                   	push   ecx
  40afcc:	50                   	push   eax
  40afcd:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40afd3:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40afd9:	8b 3d 80 01 41 00    	mov    edi,DWORD PTR ds:0x410180
  40afdf:	6a 00                	push   0x0
  40afe1:	68 fc 27 41 00       	push   0x4127fc
  40afe6:	56                   	push   esi
  40afe7:	ff d7                	call   edi
  40afe9:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40afef:	a2 e4 36 41 00       	mov    ds:0x4136e4,al
  40aff4:	6a 08                	push   0x8
  40aff6:	68 e8 27 41 00       	push   0x4127e8
  40affb:	56                   	push   esi
  40affc:	ff d7                	call   edi
  40affe:	8b 35 6c 00 41 00    	mov    esi,DWORD PTR ds:0x41006c
  40b004:	6a 0e                	push   0xe
  40b006:	53                   	push   ebx
  40b007:	a2 40 37 41 00       	mov    ds:0x413740,al
  40b00c:	ff d6                	call   esi
  40b00e:	6a 0c                	push   0xc
  40b010:	53                   	push   ebx
  40b011:	ff d6                	call   esi
  40b013:	6a 08                	push   0x8
  40b015:	53                   	push   ebx
  40b016:	ff d6                	call   esi
  40b018:	6a 0a                	push   0xa
  40b01a:	53                   	push   ebx
  40b01b:	a3 a0 37 41 00       	mov    ds:0x4137a0,eax
  40b020:	ff d6                	call   esi
  40b022:	5f                   	pop    edi
  40b023:	5e                   	pop    esi
  40b024:	a3 a4 37 41 00       	mov    ds:0x4137a4,eax
  40b029:	5b                   	pop    ebx
  40b02a:	c9                   	leave
  40b02b:	c3                   	ret
  40b02c:	55                   	push   ebp
  40b02d:	8b ec                	mov    ebp,esp
  40b02f:	81 ec 44 01 00 00    	sub    esp,0x144
  40b035:	53                   	push   ebx
  40b036:	33 db                	xor    ebx,ebx
  40b038:	38 1d e0 37 41 00    	cmp    BYTE PTR ds:0x4137e0,bl
  40b03e:	56                   	push   esi
  40b03f:	57                   	push   edi
  40b040:	0f 84 7f 02 00 00    	je     0x40b2c5
  40b046:	68 94 2e 41 00       	push   0x412e94
  40b04b:	ff 15 e8 00 41 00    	call   DWORD PTR ds:0x4100e8
  40b051:	8b f8                	mov    edi,eax
  40b053:	3b fb                	cmp    edi,ebx
  40b055:	74 66                	je     0x40b0bd
  40b057:	68 80 2e 41 00       	push   0x412e80
  40b05c:	57                   	push   edi
  40b05d:	ff 15 30 01 41 00    	call   DWORD PTR ds:0x410130
  40b063:	8b f0                	mov    esi,eax
  40b065:	3b f3                	cmp    esi,ebx
  40b067:	74 4d                	je     0x40b0b6
  40b069:	8b 0d 24 37 41 00    	mov    ecx,DWORD PTR ds:0x413724
  40b06f:	ba 64 2e 41 00       	mov    edx,0x412e64
  40b074:	3b cb                	cmp    ecx,ebx
  40b076:	75 05                	jne    0x40b07d
  40b078:	ba 4c 2e 41 00       	mov    edx,0x412e4c
  40b07d:	33 c0                	xor    eax,eax
  40b07f:	3b cb                	cmp    ecx,ebx
  40b081:	0f 94 c0             	sete   al
  40b084:	50                   	push   eax
  40b085:	52                   	push   edx
  40b086:	68 e0 39 41 00       	push   0x4139e0
  40b08b:	68 48 2e 41 00       	push   0x412e48
  40b090:	68 60 39 41 00       	push   0x413960
  40b095:	68 e0 38 41 00       	push   0x4138e0
  40b09a:	68 60 38 41 00       	push   0x413860
  40b09f:	68 e0 37 41 00       	push   0x4137e0
  40b0a4:	ff d6                	call   esi
  40b0a6:	85 c0                	test   eax,eax
  40b0a8:	74 0c                	je     0x40b0b6
  40b0aa:	57                   	push   edi
  40b0ab:	ff 15 04 01 41 00    	call   DWORD PTR ds:0x410104
  40b0b1:	e9 0f 02 00 00       	jmp    0x40b2c5
  40b0b6:	57                   	push   edi
  40b0b7:	ff 15 04 01 41 00    	call   DWORD PTR ds:0x410104
  40b0bd:	8d 85 bc fe ff ff    	lea    eax,[ebp-0x144]
  40b0c3:	68 00 01 00 00       	push   0x100
  40b0c8:	50                   	push   eax
  40b0c9:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  40b0cf:	8d 85 bc fe ff ff    	lea    eax,[ebp-0x144]
  40b0d5:	50                   	push   eax
  40b0d6:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40b0dc:	80 bc 05 bb fe ff ff 	cmp    BYTE PTR [ebp+eax*1-0x145],0x5c
  40b0e3:	5c 
  40b0e4:	8b 35 fc 00 41 00    	mov    esi,DWORD PTR ds:0x4100fc
  40b0ea:	74 0e                	je     0x40b0fa
  40b0ec:	8d 85 bc fe ff ff    	lea    eax,[ebp-0x144]
  40b0f2:	68 e0 20 41 00       	push   0x4120e0
  40b0f7:	50                   	push   eax
  40b0f8:	ff d6                	call   esi
  40b0fa:	8d 85 bc fe ff ff    	lea    eax,[ebp-0x144]
  40b100:	68 e0 37 41 00       	push   0x4137e0
  40b105:	50                   	push   eax
  40b106:	ff d6                	call   esi
  40b108:	8d 85 bc fe ff ff    	lea    eax,[ebp-0x144]
  40b10e:	53                   	push   ebx
  40b10f:	50                   	push   eax
  40b110:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  40b116:	83 f8 ff             	cmp    eax,0xffffffff
  40b119:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40b11c:	0f 84 a3 01 00 00    	je     0x40b2c5
  40b122:	ff 35 bc 3a 41 00    	push   DWORD PTR ds:0x413abc
  40b128:	68 00 40 00 00       	push   0x4000
  40b12d:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  40b133:	68 ac 27 41 00       	push   0x4127ac
  40b138:	68 40 2e 41 00       	push   0x412e40
  40b13d:	68 a0 27 41 00       	push   0x4127a0
  40b142:	ff 15 d0 00 41 00    	call   DWORD PTR ds:0x4100d0
  40b148:	8b 0d 10 3b 41 00    	mov    ecx,DWORD PTR ds:0x413b10
  40b14e:	80 39 7f             	cmp    BYTE PTR [ecx],0x7f
  40b151:	75 6b                	jne    0x40b1be
  40b153:	83 f8 01             	cmp    eax,0x1
  40b156:	75 66                	jne    0x40b1be
  40b158:	68 58 28 41 00       	push   0x412858
  40b15d:	51                   	push   ecx
  40b15e:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40b164:	8d 45 bc             	lea    eax,[ebp-0x44]
  40b167:	50                   	push   eax
  40b168:	e8 5d 01 00 00       	call   0x40b2ca
  40b16d:	8b 35 10 3b 41 00    	mov    esi,DWORD PTR ds:0x413b10
  40b173:	59                   	pop    ecx
  40b174:	8a 06                	mov    al,BYTE PTR [esi]
  40b176:	3a c3                	cmp    al,bl
  40b178:	0f 84 22 01 00 00    	je     0x40b2a0
  40b17e:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
  40b181:	3c 25                	cmp    al,0x25
  40b183:	0f 85 0b 01 00 00    	jne    0x40b294
  40b189:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40b18c:	3c 31                	cmp    al,0x31
  40b18e:	0f 8c 00 01 00 00    	jl     0x40b294
  40b194:	3c 38                	cmp    al,0x38
  40b196:	0f 8f f8 00 00 00    	jg     0x40b294
  40b19c:	80 7e 02 25          	cmp    BYTE PTR [esi+0x2],0x25
  40b1a0:	0f 85 ee 00 00 00    	jne    0x40b294
  40b1a6:	3c 34                	cmp    al,0x34
  40b1a8:	7f 4a                	jg     0x40b1f4
  40b1aa:	0f be f8             	movsx  edi,al
  40b1ad:	83 ef 30             	sub    edi,0x30
  40b1b0:	c1 e7 07             	shl    edi,0x7
  40b1b3:	81 c7 e0 37 41 00    	add    edi,0x4137e0
  40b1b9:	e9 89 00 00 00       	jmp    0x40b247
  40b1be:	6a 5e                	push   0x5e
  40b1c0:	51                   	push   ecx
  40b1c1:	e8 86 0c 00 00       	call   0x40be4c
  40b1c6:	59                   	pop    ecx
  40b1c7:	3b c3                	cmp    eax,ebx
  40b1c9:	59                   	pop    ecx
  40b1ca:	74 98                	je     0x40b164
  40b1cc:	38 18                	cmp    BYTE PTR [eax],bl
  40b1ce:	8b c8                	mov    ecx,eax
  40b1d0:	74 09                	je     0x40b1db
  40b1d2:	41                   	inc    ecx
  40b1d3:	38 19                	cmp    BYTE PTR [ecx],bl
  40b1d5:	75 fb                	jne    0x40b1d2
  40b1d7:	3b c8                	cmp    ecx,eax
  40b1d9:	72 08                	jb     0x40b1e3
  40b1db:	8a 11                	mov    dl,BYTE PTR [ecx]
  40b1dd:	88 51 01             	mov    BYTE PTR [ecx+0x1],dl
  40b1e0:	49                   	dec    ecx
  40b1e1:	eb f4                	jmp    0x40b1d7
  40b1e3:	6a 5e                	push   0x5e
  40b1e5:	c6 00 0d             	mov    BYTE PTR [eax],0xd
  40b1e8:	c6 40 01 0a          	mov    BYTE PTR [eax+0x1],0xa
  40b1ec:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  40b1f2:	eb cd                	jmp    0x40b1c1
  40b1f4:	3c 35                	cmp    al,0x35
  40b1f6:	75 16                	jne    0x40b20e
  40b1f8:	39 1d 70 37 41 00    	cmp    DWORD PTR ds:0x413770,ebx
  40b1fe:	74 07                	je     0x40b207
  40b200:	bf 4c 28 41 00       	mov    edi,0x41284c
  40b205:	eb 40                	jmp    0x40b247
  40b207:	bf 40 28 41 00       	mov    edi,0x412840
  40b20c:	eb 39                	jmp    0x40b247
  40b20e:	3c 36                	cmp    al,0x36
  40b210:	75 05                	jne    0x40b217
  40b212:	8d 7d bc             	lea    edi,[ebp-0x44]
  40b215:	eb 30                	jmp    0x40b247
  40b217:	3c 37                	cmp    al,0x37
  40b219:	75 16                	jne    0x40b231
  40b21b:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  40b221:	74 07                	je     0x40b22a
  40b223:	bf 38 28 41 00       	mov    edi,0x412838
  40b228:	eb 1d                	jmp    0x40b247
  40b22a:	bf 30 28 41 00       	mov    edi,0x412830
  40b22f:	eb 16                	jmp    0x40b247
  40b231:	3c 38                	cmp    al,0x38
  40b233:	75 12                	jne    0x40b247
  40b235:	39 1d 24 37 41 00    	cmp    DWORD PTR ds:0x413724,ebx
  40b23b:	bf 1c 28 41 00       	mov    edi,0x41281c
  40b240:	75 05                	jne    0x40b247
  40b242:	bf d0 34 41 00       	mov    edi,0x4134d0
  40b247:	57                   	push   edi
  40b248:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40b24e:	83 e8 03             	sub    eax,0x3
  40b251:	3b c3                	cmp    eax,ebx
  40b253:	7e 1e                	jle    0x40b273
  40b255:	8d 56 03             	lea    edx,[esi+0x3]
  40b258:	8b ca                	mov    ecx,edx
  40b25a:	38 19                	cmp    BYTE PTR [ecx],bl
  40b25c:	74 03                	je     0x40b261
  40b25e:	41                   	inc    ecx
  40b25f:	eb f9                	jmp    0x40b25a
  40b261:	3b ca                	cmp    ecx,edx
  40b263:	72 22                	jb     0x40b287
  40b265:	8a 19                	mov    bl,BYTE PTR [ecx]
  40b267:	88 1c 01             	mov    BYTE PTR [ecx+eax*1],bl
  40b26a:	49                   	dec    ecx
  40b26b:	3b ca                	cmp    ecx,edx
  40b26d:	73 f6                	jae    0x40b265
  40b26f:	33 db                	xor    ebx,ebx
  40b271:	eb 14                	jmp    0x40b287
  40b273:	7d 12                	jge    0x40b287
  40b275:	8d 4e 03             	lea    ecx,[esi+0x3]
  40b278:	8a 11                	mov    dl,BYTE PTR [ecx]
  40b27a:	3a d3                	cmp    dl,bl
  40b27c:	74 06                	je     0x40b284
  40b27e:	88 14 01             	mov    BYTE PTR [ecx+eax*1],dl
  40b281:	41                   	inc    ecx
  40b282:	eb f4                	jmp    0x40b278
  40b284:	88 1c 01             	mov    BYTE PTR [ecx+eax*1],bl
  40b287:	8a 07                	mov    al,BYTE PTR [edi]
  40b289:	3a c3                	cmp    al,bl
  40b28b:	74 06                	je     0x40b293
  40b28d:	88 06                	mov    BYTE PTR [esi],al
  40b28f:	46                   	inc    esi
  40b290:	47                   	inc    edi
  40b291:	eb f4                	jmp    0x40b287
  40b293:	4e                   	dec    esi
  40b294:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40b297:	46                   	inc    esi
  40b298:	3a c3                	cmp    al,bl
  40b29a:	0f 85 e1 fe ff ff    	jne    0x40b181
  40b2a0:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  40b2a6:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40b2ac:	50                   	push   eax
  40b2ad:	ff 35 10 3b 41 00    	push   DWORD PTR ds:0x413b10
  40b2b3:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40b2b6:	ff 15 18 01 41 00    	call   DWORD PTR ds:0x410118
  40b2bc:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40b2bf:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  40b2c5:	5f                   	pop    edi
  40b2c6:	5e                   	pop    esi
  40b2c7:	5b                   	pop    ebx
  40b2c8:	c9                   	leave
  40b2c9:	c3                   	ret
  40b2ca:	55                   	push   ebp
  40b2cb:	8b ec                	mov    ebp,esp
  40b2cd:	83 ec 10             	sub    esp,0x10
  40b2d0:	8d 45 f0             	lea    eax,[ebp-0x10]
  40b2d3:	50                   	push   eax
  40b2d4:	ff 15 d4 00 41 00    	call   DWORD PTR ds:0x4100d4
  40b2da:	0f b7 45 fa          	movzx  eax,WORD PTR [ebp-0x6]
  40b2de:	50                   	push   eax
  40b2df:	0f b7 45 f8          	movzx  eax,WORD PTR [ebp-0x8]
  40b2e3:	50                   	push   eax
  40b2e4:	6a 64                	push   0x64
  40b2e6:	0f b7 45 f0          	movzx  eax,WORD PTR [ebp-0x10]
  40b2ea:	99                   	cdq
  40b2eb:	59                   	pop    ecx
  40b2ec:	f7 f9                	idiv   ecx
  40b2ee:	0f b7 45 f6          	movzx  eax,WORD PTR [ebp-0xa]
  40b2f2:	52                   	push   edx
  40b2f3:	50                   	push   eax
  40b2f4:	0f b7 45 f2          	movzx  eax,WORD PTR [ebp-0xe]
  40b2f8:	50                   	push   eax
  40b2f9:	68 a0 2e 41 00       	push   0x412ea0
  40b2fe:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b301:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40b307:	83 c4 1c             	add    esp,0x1c
  40b30a:	c9                   	leave
  40b30b:	c3                   	ret
  40b30c:	55                   	push   ebp
  40b30d:	8b ec                	mov    ebp,esp
  40b30f:	81 ec 00 01 00 00    	sub    esp,0x100
  40b315:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b31b:	50                   	push   eax
  40b31c:	68 00 01 00 00       	push   0x100
  40b321:	ff 15 78 01 41 00    	call   DWORD PTR ds:0x410178
  40b327:	8a 85 00 ff ff ff    	mov    al,BYTE PTR [ebp-0x100]
  40b32d:	c9                   	leave
  40b32e:	c3                   	ret
  40b32f:	55                   	push   ebp
  40b330:	8b ec                	mov    ebp,esp
  40b332:	81 ec 00 05 00 00    	sub    esp,0x500
  40b338:	53                   	push   ebx
  40b339:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
  40b33c:	56                   	push   esi
  40b33d:	8b 35 74 01 41 00    	mov    esi,DWORD PTR ds:0x410174
  40b343:	57                   	push   edi
  40b344:	6a 00                	push   0x0
  40b346:	53                   	push   ebx
  40b347:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b34a:	ff d6                	call   esi
  40b34c:	85 c0                	test   eax,eax
  40b34e:	74 0e                	je     0x40b35e
  40b350:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b353:	e8 e2 ea ff ff       	call   0x409e3a
  40b358:	59                   	pop    ecx
  40b359:	e9 97 01 00 00       	jmp    0x40b4f5
  40b35e:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b364:	53                   	push   ebx
  40b365:	50                   	push   eax
  40b366:	e8 8f 01 00 00       	call   0x40b4fa
  40b36b:	59                   	pop    ecx
  40b36c:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b372:	59                   	pop    ecx
  40b373:	6a 00                	push   0x0
  40b375:	50                   	push   eax
  40b376:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b379:	ff d6                	call   esi
  40b37b:	85 c0                	test   eax,eax
  40b37d:	75 03                	jne    0x40b382
  40b37f:	53                   	push   ebx
  40b380:	eb d1                	jmp    0x40b353
  40b382:	6a 01                	push   0x1
  40b384:	5f                   	pop    edi
  40b385:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b388:	89 3d f4 36 41 00    	mov    DWORD PTR ds:0x4136f4,edi
  40b38e:	e8 a7 ea ff ff       	call   0x409e3a
  40b393:	8b 35 68 01 41 00    	mov    esi,DWORD PTR ds:0x410168
  40b399:	59                   	pop    ecx
  40b39a:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b3a0:	50                   	push   eax
  40b3a1:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  40b3a7:	50                   	push   eax
  40b3a8:	ff d6                	call   esi
  40b3aa:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b3b0:	53                   	push   ebx
  40b3b1:	50                   	push   eax
  40b3b2:	ff d6                	call   esi
  40b3b4:	33 f6                	xor    esi,esi
  40b3b6:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  40b3bc:	56                   	push   esi
  40b3bd:	50                   	push   eax
  40b3be:	e8 d1 f3 ff ff       	call   0x40a794
  40b3c3:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b3c9:	56                   	push   esi
  40b3ca:	50                   	push   eax
  40b3cb:	e8 c4 f3 ff ff       	call   0x40a794
  40b3d0:	a1 b0 36 41 00       	mov    eax,ds:0x4136b0
  40b3d5:	83 c4 10             	add    esp,0x10
  40b3d8:	83 f8 02             	cmp    eax,0x2
  40b3db:	75 23                	jne    0x40b400
  40b3dd:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  40b3e3:	68 90 27 41 00       	push   0x412790
  40b3e8:	50                   	push   eax
  40b3e9:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b3ef:	50                   	push   eax
  40b3f0:	68 d0 2e 41 00       	push   0x412ed0
  40b3f5:	ff 15 2c 01 41 00    	call   DWORD PTR ds:0x41012c
  40b3fb:	e9 f5 00 00 00       	jmp    0x40b4f5
  40b400:	3b c7                	cmp    eax,edi
  40b402:	75 1d                	jne    0x40b421
  40b404:	6a 04                	push   0x4
  40b406:	56                   	push   esi
  40b407:	8b 35 c4 00 41 00    	mov    esi,DWORD PTR ds:0x4100c4
  40b40d:	53                   	push   ebx
  40b40e:	ff d6                	call   esi
  40b410:	6a 04                	push   0x4
  40b412:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  40b418:	53                   	push   ebx
  40b419:	50                   	push   eax
  40b41a:	ff d6                	call   esi
  40b41c:	e9 d4 00 00 00       	jmp    0x40b4f5
  40b421:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b427:	50                   	push   eax
  40b428:	e8 12 01 00 00       	call   0x40b53f
  40b42d:	50                   	push   eax
  40b42e:	8d 85 00 fe ff ff    	lea    eax,[ebp-0x200]
  40b434:	50                   	push   eax
  40b435:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b43b:	50                   	push   eax
  40b43c:	8d 85 00 fb ff ff    	lea    eax,[ebp-0x500]
  40b442:	68 b8 2e 41 00       	push   0x412eb8
  40b447:	50                   	push   eax
  40b448:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40b44e:	83 c4 18             	add    esp,0x18
  40b451:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b457:	68 00 01 00 00       	push   0x100
  40b45c:	50                   	push   eax
  40b45d:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  40b463:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b469:	50                   	push   eax
  40b46a:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40b470:	80 bc 05 ff fe ff ff 	cmp    BYTE PTR [ebp+eax*1-0x101],0x5c
  40b477:	5c 
  40b478:	8b 1d fc 00 41 00    	mov    ebx,DWORD PTR ds:0x4100fc
  40b47e:	74 0e                	je     0x40b48e
  40b480:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b486:	68 e0 20 41 00       	push   0x4120e0
  40b48b:	50                   	push   eax
  40b48c:	ff d3                	call   ebx
  40b48e:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b494:	68 5c 27 41 00       	push   0x41275c
  40b499:	50                   	push   eax
  40b49a:	ff d3                	call   ebx
  40b49c:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b4a2:	57                   	push   edi
  40b4a3:	50                   	push   eax
  40b4a4:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  40b4aa:	8b f8                	mov    edi,eax
  40b4ac:	83 ff ff             	cmp    edi,0xffffffff
  40b4af:	75 12                	jne    0x40b4c3
  40b4b1:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b4b7:	56                   	push   esi
  40b4b8:	50                   	push   eax
  40b4b9:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  40b4bf:	8b f8                	mov    edi,eax
  40b4c1:	eb 0a                	jmp    0x40b4cd
  40b4c3:	6a 02                	push   0x2
  40b4c5:	56                   	push   esi
  40b4c6:	57                   	push   edi
  40b4c7:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  40b4cd:	83 ff ff             	cmp    edi,0xffffffff
  40b4d0:	74 23                	je     0x40b4f5
  40b4d2:	8d 85 00 fb ff ff    	lea    eax,[ebp-0x500]
  40b4d8:	50                   	push   eax
  40b4d9:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40b4df:	50                   	push   eax
  40b4e0:	8d 85 00 fb ff ff    	lea    eax,[ebp-0x500]
  40b4e6:	50                   	push   eax
  40b4e7:	57                   	push   edi
  40b4e8:	ff 15 18 01 41 00    	call   DWORD PTR ds:0x410118
  40b4ee:	57                   	push   edi
  40b4ef:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  40b4f5:	5f                   	pop    edi
  40b4f6:	5e                   	pop    esi
  40b4f7:	5b                   	pop    ebx
  40b4f8:	c9                   	leave
  40b4f9:	c3                   	ret
  40b4fa:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40b4fe:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40b502:	ff 15 68 01 41 00    	call   DWORD PTR ds:0x410168
  40b508:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40b50c:	e8 2e 00 00 00       	call   0x40b53f
  40b511:	0f b7 0d 04 37 41 00 	movzx  ecx,WORD PTR ds:0x413704
  40b518:	51                   	push   ecx
  40b519:	68 d8 2e 41 00       	push   0x412ed8
  40b51e:	50                   	push   eax
  40b51f:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40b525:	66 ff 05 04 37 41 00 	inc    WORD PTR ds:0x413704
  40b52c:	6a 00                	push   0x0
  40b52e:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  40b532:	e8 fc f3 ff ff       	call   0x40a933
  40b537:	83 c4 18             	add    esp,0x18
  40b53a:	85 c0                	test   eax,eax
  40b53c:	74 bc                	je     0x40b4fa
  40b53e:	c3                   	ret
  40b53f:	56                   	push   esi
  40b540:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40b544:	56                   	push   esi
  40b545:	ff 15 70 01 41 00    	call   DWORD PTR ds:0x410170
  40b54b:	03 c6                	add    eax,esi
  40b54d:	3b c6                	cmp    eax,esi
  40b54f:	76 08                	jbe    0x40b559
  40b551:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  40b554:	74 03                	je     0x40b559
  40b556:	48                   	dec    eax
  40b557:	eb f4                	jmp    0x40b54d
  40b559:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  40b55c:	5e                   	pop    esi
  40b55d:	75 01                	jne    0x40b560
  40b55f:	40                   	inc    eax
  40b560:	c3                   	ret
  40b561:	55                   	push   ebp
  40b562:	8b ec                	mov    ebp,esp
  40b564:	81 ec 00 03 00 00    	sub    esp,0x300
  40b56a:	83 3d b0 36 41 00 02 	cmp    DWORD PTR ds:0x4136b0,0x2
  40b571:	56                   	push   esi
  40b572:	57                   	push   edi
  40b573:	0f 85 e7 00 00 00    	jne    0x40b660
  40b579:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b57f:	68 00 01 00 00       	push   0x100
  40b584:	50                   	push   eax
  40b585:	ff 15 00 01 41 00    	call   DWORD PTR ds:0x410100
  40b58b:	8b 35 70 01 41 00    	mov    esi,DWORD PTR ds:0x410170
  40b591:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b597:	50                   	push   eax
  40b598:	ff d6                	call   esi
  40b59a:	80 bc 05 ff fe ff ff 	cmp    BYTE PTR [ebp+eax*1-0x101],0x5c
  40b5a1:	5c 
  40b5a2:	8b 3d fc 00 41 00    	mov    edi,DWORD PTR ds:0x4100fc
  40b5a8:	74 0e                	je     0x40b5b8
  40b5aa:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b5b0:	68 e0 20 41 00       	push   0x4120e0
  40b5b5:	50                   	push   eax
  40b5b6:	ff d7                	call   edi
  40b5b8:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b5be:	68 90 27 41 00       	push   0x412790
  40b5c3:	50                   	push   eax
  40b5c4:	ff d7                	call   edi
  40b5c6:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b5cc:	6a 01                	push   0x1
  40b5ce:	50                   	push   eax
  40b5cf:	ff 15 50 01 41 00    	call   DWORD PTR ds:0x410150
  40b5d5:	8b f8                	mov    edi,eax
  40b5d7:	83 ff ff             	cmp    edi,0xffffffff
  40b5da:	74 44                	je     0x40b620
  40b5dc:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b5df:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b5e5:	68 78 27 41 00       	push   0x412778
  40b5ea:	50                   	push   eax
  40b5eb:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40b5f1:	83 c4 0c             	add    esp,0xc
  40b5f4:	6a 02                	push   0x2
  40b5f6:	6a 00                	push   0x0
  40b5f8:	57                   	push   edi
  40b5f9:	ff 15 4c 01 41 00    	call   DWORD PTR ds:0x41014c
  40b5ff:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b605:	50                   	push   eax
  40b606:	ff d6                	call   esi
  40b608:	50                   	push   eax
  40b609:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b60f:	50                   	push   eax
  40b610:	57                   	push   edi
  40b611:	ff 15 18 01 41 00    	call   DWORD PTR ds:0x410118
  40b617:	57                   	push   edi
  40b618:	ff 15 1c 01 41 00    	call   DWORD PTR ds:0x41011c
  40b61e:	eb 4d                	jmp    0x40b66d
  40b620:	8d 85 00 ff ff ff    	lea    eax,[ebp-0x100]
  40b626:	6a 00                	push   0x0
  40b628:	50                   	push   eax
  40b629:	ff 15 14 01 41 00    	call   DWORD PTR ds:0x410114
  40b62f:	8b f8                	mov    edi,eax
  40b631:	83 ff ff             	cmp    edi,0xffffffff
  40b634:	74 37                	je     0x40b66d
  40b636:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b639:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b63f:	68 e8 2e 41 00       	push   0x412ee8
  40b644:	50                   	push   eax
  40b645:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40b64b:	83 c4 0c             	add    esp,0xc
  40b64e:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b654:	50                   	push   eax
  40b655:	ff d6                	call   esi
  40b657:	50                   	push   eax
  40b658:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
  40b65e:	eb af                	jmp    0x40b60f
  40b660:	6a 04                	push   0x4
  40b662:	6a 00                	push   0x0
  40b664:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40b667:	ff 15 c4 00 41 00    	call   DWORD PTR ds:0x4100c4
  40b66d:	5f                   	pop    edi
  40b66e:	5e                   	pop    esi
  40b66f:	c9                   	leave
  40b670:	c3                   	ret
  40b671:	83 3d 7c 37 41 00 00 	cmp    DWORD PTR ds:0x41377c,0x0
  40b678:	56                   	push   esi
  40b679:	75 26                	jne    0x40b6a1
  40b67b:	68 00 fc 00 00       	push   0xfc00
  40b680:	e8 31 12 00 00       	call   0x40c8b6
  40b685:	a3 c8 3a 41 00       	mov    ds:0x413ac8,eax
  40b68a:	a3 7c 37 41 00       	mov    ds:0x41377c,eax
  40b68f:	83 20 00             	and    DWORD PTR [eax],0x0
  40b692:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  40b696:	83 c0 04             	add    eax,0x4
  40b699:	59                   	pop    ecx
  40b69a:	a3 08 37 41 00       	mov    ds:0x413708,eax
  40b69f:	eb 4f                	jmp    0x40b6f0
  40b6a1:	8b 0d 08 37 41 00    	mov    ecx,DWORD PTR ds:0x413708
  40b6a7:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40b6ab:	b8 00 fc 00 00       	mov    eax,0xfc00
  40b6b0:	8b d0                	mov    edx,eax
  40b6b2:	2b d1                	sub    edx,ecx
  40b6b4:	3b d6                	cmp    edx,esi
  40b6b6:	7c 11                	jl     0x40b6c9
  40b6b8:	a1 c8 3a 41 00       	mov    eax,ds:0x413ac8
  40b6bd:	03 c1                	add    eax,ecx
  40b6bf:	03 ce                	add    ecx,esi
  40b6c1:	89 0d 08 37 41 00    	mov    DWORD PTR ds:0x413708,ecx
  40b6c7:	5e                   	pop    esi
  40b6c8:	c3                   	ret
  40b6c9:	3b f0                	cmp    esi,eax
  40b6cb:	76 03                	jbe    0x40b6d0
  40b6cd:	8d 46 04             	lea    eax,[esi+0x4]
  40b6d0:	50                   	push   eax
  40b6d1:	e8 e0 11 00 00       	call   0x40c8b6
  40b6d6:	59                   	pop    ecx
  40b6d7:	8b 0d c8 3a 41 00    	mov    ecx,DWORD PTR ds:0x413ac8
  40b6dd:	89 01                	mov    DWORD PTR [ecx],eax
  40b6df:	a3 c8 3a 41 00       	mov    ds:0x413ac8,eax
  40b6e4:	83 20 00             	and    DWORD PTR [eax],0x0
  40b6e7:	83 c6 04             	add    esi,0x4
  40b6ea:	89 35 08 37 41 00    	mov    DWORD PTR ds:0x413708,esi
  40b6f0:	a1 c8 3a 41 00       	mov    eax,ds:0x413ac8
  40b6f5:	5e                   	pop    esi
  40b6f6:	83 c0 04             	add    eax,0x4
  40b6f9:	c3                   	ret
  40b6fa:	a1 7c 37 41 00       	mov    eax,ds:0x41377c
  40b6ff:	85 c0                	test   eax,eax
  40b701:	74 11                	je     0x40b714
  40b703:	56                   	push   esi
  40b704:	8b 30                	mov    esi,DWORD PTR [eax]
  40b706:	50                   	push   eax
  40b707:	e8 1e 12 00 00       	call   0x40c92a
  40b70c:	85 f6                	test   esi,esi
  40b70e:	59                   	pop    ecx
  40b70f:	8b c6                	mov    eax,esi
  40b711:	75 f1                	jne    0x40b704
  40b713:	5e                   	pop    esi
  40b714:	c3                   	ret
  40b715:	55                   	push   ebp
  40b716:	8b ec                	mov    ebp,esp
  40b718:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40b71b:	53                   	push   ebx
  40b71c:	32 c0                	xor    al,al
  40b71e:	56                   	push   esi
  40b71f:	38 01                	cmp    BYTE PTR [ecx],al
  40b721:	57                   	push   edi
  40b722:	8b f9                	mov    edi,ecx
  40b724:	74 05                	je     0x40b72b
  40b726:	47                   	inc    edi
  40b727:	38 07                	cmp    BYTE PTR [edi],al
  40b729:	75 fb                	jne    0x40b726
  40b72b:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  40b72e:	38 06                	cmp    BYTE PTR [esi],al
  40b730:	74 03                	je     0x40b735
  40b732:	46                   	inc    esi
  40b733:	eb f9                	jmp    0x40b72e
  40b735:	4f                   	dec    edi
  40b736:	4e                   	dec    esi
  40b737:	3b f9                	cmp    edi,ecx
  40b739:	72 4d                	jb     0x40b788
  40b73b:	3b 75 0c             	cmp    esi,DWORD PTR [ebp+0xc]
  40b73e:	72 23                	jb     0x40b763
  40b740:	0f be 07             	movsx  eax,BYTE PTR [edi]
  40b743:	50                   	push   eax
  40b744:	e8 5f 09 00 00       	call   0x40c0a8
  40b749:	8b d8                	mov    ebx,eax
  40b74b:	0f be 06             	movsx  eax,BYTE PTR [esi]
  40b74e:	50                   	push   eax
  40b74f:	e8 54 09 00 00       	call   0x40c0a8
  40b754:	59                   	pop    ecx
  40b755:	3b d8                	cmp    ebx,eax
  40b757:	59                   	pop    ecx
  40b758:	75 12                	jne    0x40b76c
  40b75a:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40b75d:	4f                   	dec    edi
  40b75e:	4e                   	dec    esi
  40b75f:	3b f9                	cmp    edi,ecx
  40b761:	73 d8                	jae    0x40b73b
  40b763:	3b f9                	cmp    edi,ecx
  40b765:	72 21                	jb     0x40b788
  40b767:	83 c8 ff             	or     eax,0xffffffff
  40b76a:	eb 22                	jmp    0x40b78e
  40b76c:	0f be 07             	movsx  eax,BYTE PTR [edi]
  40b76f:	50                   	push   eax
  40b770:	e8 33 09 00 00       	call   0x40c0a8
  40b775:	8b f8                	mov    edi,eax
  40b777:	0f be 06             	movsx  eax,BYTE PTR [esi]
  40b77a:	50                   	push   eax
  40b77b:	e8 28 09 00 00       	call   0x40c0a8
  40b780:	59                   	pop    ecx
  40b781:	2b f8                	sub    edi,eax
  40b783:	59                   	pop    ecx
  40b784:	8b c7                	mov    eax,edi
  40b786:	eb 06                	jmp    0x40b78e
  40b788:	3b 75 0c             	cmp    esi,DWORD PTR [ebp+0xc]
  40b78b:	1b c0                	sbb    eax,eax
  40b78d:	40                   	inc    eax
  40b78e:	5f                   	pop    edi
  40b78f:	5e                   	pop    esi
  40b790:	5b                   	pop    ebx
  40b791:	5d                   	pop    ebp
  40b792:	c3                   	ret
  40b793:	55                   	push   ebp
  40b794:	8b ec                	mov    ebp,esp
  40b796:	53                   	push   ebx
  40b797:	33 db                	xor    ebx,ebx
  40b799:	39 5d 14             	cmp    DWORD PTR [ebp+0x14],ebx
  40b79c:	56                   	push   esi
  40b79d:	57                   	push   edi
  40b79e:	75 22                	jne    0x40b7c2
  40b7a0:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  40b7a3:	3b f3                	cmp    esi,ebx
  40b7a5:	0f 84 b2 00 00 00    	je     0x40b85d
  40b7ab:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40b7ae:	e8 be fe ff ff       	call   0x40b671
  40b7b3:	89 06                	mov    DWORD PTR [esi],eax
  40b7b5:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  40b7b8:	8b 06                	mov    eax,DWORD PTR [esi]
  40b7ba:	59                   	pop    ecx
  40b7bb:	89 18                	mov    DWORD PTR [eax],ebx
  40b7bd:	e9 9b 00 00 00       	jmp    0x40b85d
  40b7c2:	8b 3d 64 01 41 00    	mov    edi,DWORD PTR ds:0x410164
  40b7c8:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  40b7cb:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  40b7ce:	8d 46 08             	lea    eax,[esi+0x8]
  40b7d1:	50                   	push   eax
  40b7d2:	e8 3e ff ff ff       	call   0x40b715
  40b7d7:	59                   	pop    ecx
  40b7d8:	3b c3                	cmp    eax,ebx
  40b7da:	59                   	pop    ecx
  40b7db:	75 2a                	jne    0x40b807
  40b7dd:	39 5d 1c             	cmp    DWORD PTR [ebp+0x1c],ebx
  40b7e0:	74 10                	je     0x40b7f2
  40b7e2:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  40b7e5:	8d 86 0c 01 00 00    	lea    eax,[esi+0x10c]
  40b7eb:	50                   	push   eax
  40b7ec:	ff d7                	call   edi
  40b7ee:	3b c3                	cmp    eax,ebx
  40b7f0:	75 15                	jne    0x40b807
  40b7f2:	39 5d 20             	cmp    DWORD PTR [ebp+0x20],ebx
  40b7f5:	74 25                	je     0x40b81c
  40b7f7:	ff 75 20             	push   DWORD PTR [ebp+0x20]
  40b7fa:	8d 86 0c 02 00 00    	lea    eax,[esi+0x20c]
  40b800:	50                   	push   eax
  40b801:	ff d7                	call   edi
  40b803:	3b c3                	cmp    eax,ebx
  40b805:	74 15                	je     0x40b81c
  40b807:	7d 0a                	jge    0x40b813
  40b809:	8b 06                	mov    eax,DWORD PTR [esi]
  40b80b:	3b c3                	cmp    eax,ebx
  40b80d:	74 11                	je     0x40b820
  40b80f:	8b f0                	mov    esi,eax
  40b811:	eb b8                	jmp    0x40b7cb
  40b813:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  40b816:	3b c3                	cmp    eax,ebx
  40b818:	74 25                	je     0x40b83f
  40b81a:	eb f3                	jmp    0x40b80f
  40b81c:	8b c6                	mov    eax,esi
  40b81e:	eb 3f                	jmp    0x40b85f
  40b820:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  40b823:	3b fb                	cmp    edi,ebx
  40b825:	74 36                	je     0x40b85d
  40b827:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40b82a:	e8 42 fe ff ff       	call   0x40b671
  40b82f:	89 07                	mov    DWORD PTR [edi],eax
  40b831:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  40b834:	8b 07                	mov    eax,DWORD PTR [edi]
  40b836:	59                   	pop    ecx
  40b837:	89 18                	mov    DWORD PTR [eax],ebx
  40b839:	8b 07                	mov    eax,DWORD PTR [edi]
  40b83b:	89 06                	mov    DWORD PTR [esi],eax
  40b83d:	eb 1e                	jmp    0x40b85d
  40b83f:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  40b842:	3b fb                	cmp    edi,ebx
  40b844:	74 17                	je     0x40b85d
  40b846:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40b849:	e8 23 fe ff ff       	call   0x40b671
  40b84e:	89 07                	mov    DWORD PTR [edi],eax
  40b850:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  40b853:	8b 07                	mov    eax,DWORD PTR [edi]
  40b855:	59                   	pop    ecx
  40b856:	89 18                	mov    DWORD PTR [eax],ebx
  40b858:	8b 07                	mov    eax,DWORD PTR [edi]
  40b85a:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  40b85d:	33 c0                	xor    eax,eax
  40b85f:	5f                   	pop    edi
  40b860:	5e                   	pop    esi
  40b861:	5b                   	pop    ebx
  40b862:	5d                   	pop    ebp
  40b863:	c3                   	ret
  40b864:	55                   	push   ebp
  40b865:	8b ec                	mov    ebp,esp
  40b867:	81 ec 00 01 00 00    	sub    esp,0x100
  40b86d:	53                   	push   ebx
  40b86e:	56                   	push   esi
  40b86f:	57                   	push   edi
  40b870:	6a 63                	push   0x63
  40b872:	58                   	pop    eax
  40b873:	33 ff                	xor    edi,edi
  40b875:	6a 0a                	push   0xa
  40b877:	89 85 00 ff ff ff    	mov    DWORD PTR [ebp-0x100],eax
  40b87d:	5a                   	pop    edx
  40b87e:	89 85 04 ff ff ff    	mov    DWORD PTR [ebp-0xfc],eax
  40b884:	6a 05                	push   0x5
  40b886:	89 bd 08 ff ff ff    	mov    DWORD PTR [ebp-0xf8],edi
  40b88c:	59                   	pop    ecx
  40b88d:	89 95 0c ff ff ff    	mov    DWORD PTR [ebp-0xf4],edx
  40b893:	6a 08                	push   0x8
  40b895:	89 8d 10 ff ff ff    	mov    DWORD PTR [ebp-0xf0],ecx
  40b89b:	5b                   	pop    ebx
  40b89c:	c7 85 1c ff ff ff 06 	mov    DWORD PTR [ebp-0xe4],0x6
  40b8a3:	00 00 00 
  40b8a6:	6a 02                	push   0x2
  40b8a8:	89 9d 14 ff ff ff    	mov    DWORD PTR [ebp-0xec],ebx
  40b8ae:	58                   	pop    eax
  40b8af:	89 9d 18 ff ff ff    	mov    DWORD PTR [ebp-0xe8],ebx
  40b8b5:	6a 7e                	push   0x7e
  40b8b7:	89 85 2c ff ff ff    	mov    DWORD PTR [ebp-0xd4],eax
  40b8bd:	89 85 34 ff ff ff    	mov    DWORD PTR [ebp-0xcc],eax
  40b8c3:	89 85 3c ff ff ff    	mov    DWORD PTR [ebp-0xc4],eax
  40b8c9:	89 85 44 ff ff ff    	mov    DWORD PTR [ebp-0xbc],eax
  40b8cf:	89 85 4c ff ff ff    	mov    DWORD PTR [ebp-0xb4],eax
  40b8d5:	89 85 74 ff ff ff    	mov    DWORD PTR [ebp-0x8c],eax
  40b8db:	58                   	pop    eax
  40b8dc:	68 ee 03 00 00       	push   0x3ee
  40b8e1:	c7 85 20 ff ff ff 0e 	mov    DWORD PTR [ebp-0xe0],0xe
  40b8e8:	00 00 00 
  40b8eb:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40b8ee:	89 8d 24 ff ff ff    	mov    DWORD PTR [ebp-0xdc],ecx
  40b8f4:	c7 85 28 ff ff ff 13 	mov    DWORD PTR [ebp-0xd8],0x13
  40b8fb:	00 00 00 
  40b8fe:	c7 85 30 ff ff ff 1a 	mov    DWORD PTR [ebp-0xd0],0x1a
  40b905:	00 00 00 
  40b908:	c7 85 38 ff ff ff 1e 	mov    DWORD PTR [ebp-0xc8],0x1e
  40b90f:	00 00 00 
  40b912:	c7 85 40 ff ff ff 26 	mov    DWORD PTR [ebp-0xc0],0x26
  40b919:	00 00 00 
  40b91c:	c7 85 48 ff ff ff 2a 	mov    DWORD PTR [ebp-0xb8],0x2a
  40b923:	00 00 00 
  40b926:	c7 85 50 ff ff ff 32 	mov    DWORD PTR [ebp-0xb0],0x32
  40b92d:	00 00 00 
  40b930:	89 bd 54 ff ff ff    	mov    DWORD PTR [ebp-0xac],edi
  40b936:	c7 85 58 ff ff ff 39 	mov    DWORD PTR [ebp-0xa8],0x39
  40b93d:	00 00 00 
  40b940:	89 bd 5c ff ff ff    	mov    DWORD PTR [ebp-0xa4],edi
  40b946:	c7 85 60 ff ff ff 3e 	mov    DWORD PTR [ebp-0xa0],0x3e
  40b94d:	00 00 00 
  40b950:	89 bd 64 ff ff ff    	mov    DWORD PTR [ebp-0x9c],edi
  40b956:	c7 85 68 ff ff ff 48 	mov    DWORD PTR [ebp-0x98],0x48
  40b95d:	00 00 00 
  40b960:	89 bd 6c ff ff ff    	mov    DWORD PTR [ebp-0x94],edi
  40b966:	c7 85 70 ff ff ff 4e 	mov    DWORD PTR [ebp-0x90],0x4e
  40b96d:	00 00 00 
  40b970:	c7 85 78 ff ff ff 57 	mov    DWORD PTR [ebp-0x88],0x57
  40b977:	00 00 00 
  40b97a:	c7 85 7c ff ff ff 03 	mov    DWORD PTR [ebp-0x84],0x3
  40b981:	00 00 00 
  40b984:	c7 45 80 5e 00 00 00 	mov    DWORD PTR [ebp-0x80],0x5e
  40b98b:	c7 45 84 04 00 00 00 	mov    DWORD PTR [ebp-0x7c],0x4
  40b992:	c7 45 88 66 00 00 00 	mov    DWORD PTR [ebp-0x78],0x66
  40b999:	89 5d 8c             	mov    DWORD PTR [ebp-0x74],ebx
  40b99c:	c7 45 90 6e 00 00 00 	mov    DWORD PTR [ebp-0x70],0x6e
  40b9a3:	89 55 94             	mov    DWORD PTR [ebp-0x6c],edx
  40b9a6:	c7 45 98 72 00 00 00 	mov    DWORD PTR [ebp-0x68],0x72
  40b9ad:	c7 45 9c 0b 00 00 00 	mov    DWORD PTR [ebp-0x64],0xb
  40b9b4:	c7 45 a0 76 00 00 00 	mov    DWORD PTR [ebp-0x60],0x76
  40b9bb:	c7 45 a4 0d 00 00 00 	mov    DWORD PTR [ebp-0x5c],0xd
  40b9c2:	c7 45 a8 79 00 00 00 	mov    DWORD PTR [ebp-0x58],0x79
  40b9c9:	89 4d ac             	mov    DWORD PTR [ebp-0x54],ecx
  40b9cc:	89 45 b0             	mov    DWORD PTR [ebp-0x50],eax
  40b9cf:	c7 45 b4 10 00 00 00 	mov    DWORD PTR [ebp-0x4c],0x10
  40b9d6:	89 45 b8             	mov    DWORD PTR [ebp-0x48],eax
  40b9d9:	c7 45 bc 11 00 00 00 	mov    DWORD PTR [ebp-0x44],0x11
  40b9e0:	ff 15 e0 02 41 00    	call   DWORD PTR ds:0x4102e0
  40b9e6:	3b c7                	cmp    eax,edi
  40b9e8:	0f 84 b9 01 00 00    	je     0x40bba7
  40b9ee:	8d 4d d0             	lea    ecx,[ebp-0x30]
  40b9f1:	51                   	push   ecx
  40b9f2:	50                   	push   eax
  40b9f3:	ff 15 c8 02 41 00    	call   DWORD PTR ds:0x4102c8
  40b9f9:	8b 45 d0             	mov    eax,DWORD PTR [ebp-0x30]
  40b9fc:	8b 35 dc 02 41 00    	mov    esi,DWORD PTR ds:0x4102dc
  40ba02:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  40ba05:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
  40ba08:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  40ba0b:	8b 45 d8             	mov    eax,DWORD PTR [ebp-0x28]
  40ba0e:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  40ba11:	8b 45 dc             	mov    eax,DWORD PTR [ebp-0x24]
  40ba14:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  40ba17:	8d 45 ec             	lea    eax,[ebp-0x14]
  40ba1a:	50                   	push   eax
  40ba1b:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40ba1e:	ff d6                	call   esi
  40ba20:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40ba23:	50                   	push   eax
  40ba24:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40ba27:	ff d6                	call   esi
  40ba29:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  40ba2c:	6a 0f                	push   0xf
  40ba2e:	a3 70 3a 41 00       	mov    ds:0x413a70,eax
  40ba33:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  40ba36:	a3 74 3a 41 00       	mov    ds:0x413a74,eax
  40ba3b:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  40ba3e:	a3 78 3a 41 00       	mov    ds:0x413a78,eax
  40ba43:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  40ba46:	a3 7c 3a 41 00       	mov    ds:0x413a7c,eax
  40ba4b:	ff 15 78 02 41 00    	call   DWORD PTR ds:0x410278
  40ba51:	50                   	push   eax
  40ba52:	ff 15 74 00 41 00    	call   DWORD PTR ds:0x410074
  40ba58:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  40ba5b:	ff 15 f8 02 41 00    	call   DWORD PTR ds:0x4102f8
  40ba61:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  40ba64:	a1 7c 3a 41 00       	mov    eax,ds:0x413a7c
  40ba69:	2b 05 74 3a 41 00    	sub    eax,DWORD PTR ds:0x413a74
  40ba6f:	40                   	inc    eax
  40ba70:	50                   	push   eax
  40ba71:	a1 78 3a 41 00       	mov    eax,ds:0x413a78
  40ba76:	2b 05 70 3a 41 00    	sub    eax,DWORD PTR ds:0x413a70
  40ba7c:	40                   	inc    eax
  40ba7d:	50                   	push   eax
  40ba7e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40ba81:	ff 15 a0 00 41 00    	call   DWORD PTR ds:0x4100a0
  40ba87:	3b c7                	cmp    eax,edi
  40ba89:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40ba8c:	0f 84 15 01 00 00    	je     0x40bba7
  40ba92:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40ba95:	ff 15 78 00 41 00    	call   DWORD PTR ds:0x410078
  40ba9b:	8b f0                	mov    esi,eax
  40ba9d:	3b f7                	cmp    esi,edi
  40ba9f:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  40baa2:	0f 84 ff 00 00 00    	je     0x40bba7
  40baa8:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40baab:	56                   	push   esi
  40baac:	ff 15 84 00 41 00    	call   DWORD PTR ds:0x410084
  40bab2:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
  40bab5:	a1 78 3a 41 00       	mov    eax,ds:0x413a78
  40baba:	2b 05 70 3a 41 00    	sub    eax,DWORD PTR ds:0x413a70
  40bac0:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40bac3:	89 7d c0             	mov    DWORD PTR [ebp-0x40],edi
  40bac6:	89 7d c4             	mov    DWORD PTR [ebp-0x3c],edi
  40bac9:	40                   	inc    eax
  40baca:	89 45 c8             	mov    DWORD PTR [ebp-0x38],eax
  40bacd:	a1 7c 3a 41 00       	mov    eax,ds:0x413a7c
  40bad2:	2b 05 74 3a 41 00    	sub    eax,DWORD PTR ds:0x413a74
  40bad8:	40                   	inc    eax
  40bad9:	89 45 cc             	mov    DWORD PTR [ebp-0x34],eax
  40badc:	8d 45 c0             	lea    eax,[ebp-0x40]
  40badf:	50                   	push   eax
  40bae0:	56                   	push   esi
  40bae1:	ff 15 fc 02 41 00    	call   DWORD PTR ds:0x4102fc
  40bae7:	8b 75 f8             	mov    esi,DWORD PTR [ebp-0x8]
  40baea:	8b cb                	mov    ecx,ebx
  40baec:	c1 ee 10             	shr    esi,0x10
  40baef:	ff 35 20 3b 41 00    	push   DWORD PTR ds:0x413b20
  40baf5:	8d 04 b6             	lea    eax,[esi+esi*4]
  40baf8:	d1 e0                	shl    eax,1
  40bafa:	99                   	cdq
  40bafb:	f7 f9                	idiv   ecx
  40bafd:	50                   	push   eax
  40bafe:	57                   	push   edi
  40baff:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bb02:	ff 15 00 03 41 00    	call   DWORD PTR ds:0x410300
  40bb08:	a1 60 20 41 00       	mov    eax,ds:0x412060
  40bb0d:	83 f8 17             	cmp    eax,0x17
  40bb10:	7f 38                	jg     0x40bb4a
  40bb12:	ff 34 85 20 3b 41 00 	push   DWORD PTR [eax*4+0x413b20]
  40bb19:	8b c8                	mov    ecx,eax
  40bb1b:	c1 e1 03             	shl    ecx,0x3
  40bb1e:	8b 84 0d 04 ff ff ff 	mov    eax,DWORD PTR [ebp+ecx*1-0xfc]
  40bb25:	0f af c6             	imul   eax,esi
  40bb28:	99                   	cdq
  40bb29:	f7 fb                	idiv   ebx
  40bb2b:	0f b7 55 f8          	movzx  edx,WORD PTR [ebp-0x8]
  40bb2f:	50                   	push   eax
  40bb30:	8b 84 0d 00 ff ff ff 	mov    eax,DWORD PTR [ebp+ecx*1-0x100]
  40bb37:	0f af c2             	imul   eax,edx
  40bb3a:	6a 04                	push   0x4
  40bb3c:	99                   	cdq
  40bb3d:	59                   	pop    ecx
  40bb3e:	f7 f9                	idiv   ecx
  40bb40:	50                   	push   eax
  40bb41:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bb44:	ff 15 00 03 41 00    	call   DWORD PTR ds:0x410300
  40bb4a:	8b 0d 7c 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a7c
  40bb50:	a1 74 3a 41 00       	mov    eax,ds:0x413a74
  40bb55:	8b 35 78 3a 41 00    	mov    esi,DWORD PTR ds:0x413a78
  40bb5b:	2b c8                	sub    ecx,eax
  40bb5d:	68 20 00 cc 00       	push   0xcc0020
  40bb62:	8d 51 01             	lea    edx,[ecx+0x1]
  40bb65:	8b 0d 70 3a 41 00    	mov    ecx,DWORD PTR ds:0x413a70
  40bb6b:	2b f1                	sub    esi,ecx
  40bb6d:	52                   	push   edx
  40bb6e:	46                   	inc    esi
  40bb6f:	56                   	push   esi
  40bb70:	57                   	push   edi
  40bb71:	57                   	push   edi
  40bb72:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bb75:	52                   	push   edx
  40bb76:	56                   	push   esi
  40bb77:	50                   	push   eax
  40bb78:	51                   	push   ecx
  40bb79:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40bb7c:	ff 15 a8 00 41 00    	call   DWORD PTR ds:0x4100a8
  40bb82:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  40bb85:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bb88:	ff 15 84 00 41 00    	call   DWORD PTR ds:0x410084
  40bb8e:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40bb91:	8b 35 48 00 41 00    	mov    esi,DWORD PTR ds:0x410048
  40bb97:	ff d6                	call   esi
  40bb99:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40bb9c:	ff d6                	call   esi
  40bb9e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bba1:	ff 15 64 00 41 00    	call   DWORD PTR ds:0x410064
  40bba7:	5f                   	pop    edi
  40bba8:	5e                   	pop    esi
  40bba9:	5b                   	pop    ebx
  40bbaa:	c9                   	leave
  40bbab:	c3                   	ret
  40bbac:	55                   	push   ebp
  40bbad:	8b ec                	mov    ebp,esp
  40bbaf:	51                   	push   ecx
  40bbb0:	0f b7 45 08          	movzx  eax,WORD PTR [ebp+0x8]
  40bbb4:	56                   	push   esi
  40bbb5:	6a 02                	push   0x2
  40bbb7:	50                   	push   eax
  40bbb8:	33 f6                	xor    esi,esi
  40bbba:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40bbc0:	ff 15 84 01 41 00    	call   DWORD PTR ds:0x410184
  40bbc6:	85 c0                	test   eax,eax
  40bbc8:	74 77                	je     0x40bc41
  40bbca:	57                   	push   edi
  40bbcb:	50                   	push   eax
  40bbcc:	ff 35 90 3a 41 00    	push   DWORD PTR ds:0x413a90
  40bbd2:	ff 15 dc 00 41 00    	call   DWORD PTR ds:0x4100dc
  40bbd8:	50                   	push   eax
  40bbd9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40bbdc:	ff 15 e0 00 41 00    	call   DWORD PTR ds:0x4100e0
  40bbe2:	6a 00                	push   0x0
  40bbe4:	8b f0                	mov    esi,eax
  40bbe6:	ff 15 bc 02 41 00    	call   DWORD PTR ds:0x4102bc
  40bbec:	8b f8                	mov    edi,eax
  40bbee:	8d 45 08             	lea    eax,[ebp+0x8]
  40bbf1:	50                   	push   eax
  40bbf2:	56                   	push   esi
  40bbf3:	e8 4e 00 00 00       	call   0x40bc46
  40bbf8:	59                   	pop    ecx
  40bbf9:	59                   	pop    ecx
  40bbfa:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40bbfd:	85 c0                	test   eax,eax
  40bbff:	89 01                	mov    DWORD PTR [ecx],eax
  40bc01:	74 11                	je     0x40bc14
  40bc03:	6a 00                	push   0x0
  40bc05:	50                   	push   eax
  40bc06:	57                   	push   edi
  40bc07:	ff 15 80 00 41 00    	call   DWORD PTR ds:0x410080
  40bc0d:	57                   	push   edi
  40bc0e:	ff 15 7c 00 41 00    	call   DWORD PTR ds:0x41007c
  40bc14:	8b 06                	mov    eax,DWORD PTR [esi]
  40bc16:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40bc19:	6a 00                	push   0x0
  40bc1b:	56                   	push   esi
  40bc1c:	8d 04 88             	lea    eax,[eax+ecx*4]
  40bc1f:	03 c6                	add    eax,esi
  40bc21:	50                   	push   eax
  40bc22:	6a 04                	push   0x4
  40bc24:	56                   	push   esi
  40bc25:	57                   	push   edi
  40bc26:	ff 15 a4 00 41 00    	call   DWORD PTR ds:0x4100a4
  40bc2c:	57                   	push   edi
  40bc2d:	6a 00                	push   0x0
  40bc2f:	8b f0                	mov    esi,eax
  40bc31:	ff 15 b4 02 41 00    	call   DWORD PTR ds:0x4102b4
  40bc37:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  40bc3a:	ff 15 f4 00 41 00    	call   DWORD PTR ds:0x4100f4
  40bc40:	5f                   	pop    edi
  40bc41:	8b c6                	mov    eax,esi
  40bc43:	5e                   	pop    esi
  40bc44:	c9                   	leave
  40bc45:	c3                   	ret
  40bc46:	55                   	push   ebp
  40bc47:	8b ec                	mov    ebp,esp
  40bc49:	53                   	push   ebx
  40bc4a:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40bc4d:	56                   	push   esi
  40bc4e:	57                   	push   edi
  40bc4f:	66 8b 4b 0e          	mov    cx,WORD PTR [ebx+0xe]
  40bc53:	33 ff                	xor    edi,edi
  40bc55:	66 83 f9 08          	cmp    cx,0x8
  40bc59:	77 0c                	ja     0x40bc67
  40bc5b:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  40bc5e:	6a 01                	push   0x1
  40bc60:	58                   	pop    eax
  40bc61:	d3 e0                	shl    eax,cl
  40bc63:	89 06                	mov    DWORD PTR [esi],eax
  40bc65:	eb 05                	jmp    0x40bc6c
  40bc67:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  40bc6a:	89 3e                	mov    DWORD PTR [esi],edi
  40bc6c:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
  40bc6f:	3b c7                	cmp    eax,edi
  40bc71:	76 02                	jbe    0x40bc75
  40bc73:	89 06                	mov    DWORD PTR [esi],eax
  40bc75:	8b 06                	mov    eax,DWORD PTR [esi]
  40bc77:	3b c7                	cmp    eax,edi
  40bc79:	74 6e                	je     0x40bce9
  40bc7b:	8d 04 85 08 00 00 00 	lea    eax,[eax*4+0x8]
  40bc82:	50                   	push   eax
  40bc83:	6a 42                	push   0x42
  40bc85:	ff 15 88 01 41 00    	call   DWORD PTR ds:0x410188
  40bc8b:	50                   	push   eax
  40bc8c:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  40bc8f:	ff 15 ec 00 41 00    	call   DWORD PTR ds:0x4100ec
  40bc95:	8b f8                	mov    edi,eax
  40bc97:	66 c7 07 00 03       	mov    WORD PTR [edi],0x300
  40bc9c:	66 8b 06             	mov    ax,WORD PTR [esi]
  40bc9f:	66 89 47 02          	mov    WORD PTR [edi+0x2],ax
  40bca3:	33 c0                	xor    eax,eax
  40bca5:	39 06                	cmp    DWORD PTR [esi],eax
  40bca7:	7e 25                	jle    0x40bcce
  40bca9:	8d 4f 05             	lea    ecx,[edi+0x5]
  40bcac:	8d 53 29             	lea    edx,[ebx+0x29]
  40bcaf:	8a 5a 01             	mov    bl,BYTE PTR [edx+0x1]
  40bcb2:	88 59 ff             	mov    BYTE PTR [ecx-0x1],bl
  40bcb5:	8a 1a                	mov    bl,BYTE PTR [edx]
  40bcb7:	88 19                	mov    BYTE PTR [ecx],bl
  40bcb9:	8a 5a ff             	mov    bl,BYTE PTR [edx-0x1]
  40bcbc:	88 59 01             	mov    BYTE PTR [ecx+0x1],bl
  40bcbf:	80 61 02 00          	and    BYTE PTR [ecx+0x2],0x0
  40bcc3:	40                   	inc    eax
  40bcc4:	83 c2 04             	add    edx,0x4
  40bcc7:	83 c1 04             	add    ecx,0x4
  40bcca:	3b 06                	cmp    eax,DWORD PTR [esi]
  40bccc:	7c e1                	jl     0x40bcaf
  40bcce:	57                   	push   edi
  40bccf:	ff 15 b0 00 41 00    	call   DWORD PTR ds:0x4100b0
  40bcd5:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bcd8:	8b f8                	mov    edi,eax
  40bcda:	ff 15 08 01 41 00    	call   DWORD PTR ds:0x410108
  40bce0:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bce3:	ff 15 0c 01 41 00    	call   DWORD PTR ds:0x41010c
  40bce9:	8b c7                	mov    eax,edi
  40bceb:	5f                   	pop    edi
  40bcec:	5e                   	pop    esi
  40bced:	5b                   	pop    ebx
  40bcee:	5d                   	pop    ebp
  40bcef:	c3                   	ret
  40bcf0:	55                   	push   ebp
  40bcf1:	8b ec                	mov    ebp,esp
  40bcf3:	83 ec 1c             	sub    esp,0x1c
  40bcf6:	57                   	push   edi
  40bcf7:	33 ff                	xor    edi,edi
  40bcf9:	39 3d 94 36 41 00    	cmp    DWORD PTR ds:0x413694,edi
  40bcff:	74 49                	je     0x40bd4a
  40bd01:	56                   	push   esi
  40bd02:	8b 35 5c 02 41 00    	mov    esi,DWORD PTR ds:0x41025c
  40bd08:	39 3d 18 37 41 00    	cmp    DWORD PTR ds:0x413718,edi
  40bd0e:	74 0c                	je     0x40bd1c
  40bd10:	ff 35 94 36 41 00    	push   DWORD PTR ds:0x413694
  40bd16:	ff 15 24 03 41 00    	call   DWORD PTR ds:0x410324
  40bd1c:	6a 01                	push   0x1
  40bd1e:	57                   	push   edi
  40bd1f:	57                   	push   edi
  40bd20:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40bd23:	57                   	push   edi
  40bd24:	50                   	push   eax
  40bd25:	ff d6                	call   esi
  40bd27:	85 c0                	test   eax,eax
  40bd29:	74 16                	je     0x40bd41
  40bd2b:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40bd2e:	50                   	push   eax
  40bd2f:	ff 15 64 02 41 00    	call   DWORD PTR ds:0x410264
  40bd35:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40bd38:	50                   	push   eax
  40bd39:	ff 15 38 03 41 00    	call   DWORD PTR ds:0x410338
  40bd3f:	eb db                	jmp    0x40bd1c
  40bd41:	39 3d 94 36 41 00    	cmp    DWORD PTR ds:0x413694,edi
  40bd47:	75 bf                	jne    0x40bd08
  40bd49:	5e                   	pop    esi
  40bd4a:	5f                   	pop    edi
  40bd4b:	c9                   	leave
  40bd4c:	c3                   	ret
  40bd4d:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40bd51:	85 c9                	test   ecx,ecx
  40bd53:	75 0a                	jne    0x40bd5f
  40bd55:	83 c8 ff             	or     eax,0xffffffff
  40bd58:	a3 d8 36 41 00       	mov    ds:0x4136d8,eax
  40bd5d:	eb 39                	jmp    0x40bd98
  40bd5f:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  40bd63:	a1 d8 36 41 00       	mov    eax,ds:0x4136d8
  40bd68:	56                   	push   esi
  40bd69:	8b f2                	mov    esi,edx
  40bd6b:	4a                   	dec    edx
  40bd6c:	85 f6                	test   esi,esi
  40bd6e:	74 22                	je     0x40bd92
  40bd70:	57                   	push   edi
  40bd71:	42                   	inc    edx
  40bd72:	0f b6 39             	movzx  edi,BYTE PTR [ecx]
  40bd75:	8b f0                	mov    esi,eax
  40bd77:	81 e6 ff 00 00 00    	and    esi,0xff
  40bd7d:	33 f7                	xor    esi,edi
  40bd7f:	8b 3d e0 36 41 00    	mov    edi,DWORD PTR ds:0x4136e0
  40bd85:	c1 e8 08             	shr    eax,0x8
  40bd88:	8b 34 b7             	mov    esi,DWORD PTR [edi+esi*4]
  40bd8b:	33 c6                	xor    eax,esi
  40bd8d:	41                   	inc    ecx
  40bd8e:	4a                   	dec    edx
  40bd8f:	75 e1                	jne    0x40bd72
  40bd91:	5f                   	pop    edi
  40bd92:	a3 d8 36 41 00       	mov    ds:0x4136d8,eax
  40bd97:	5e                   	pop    esi
  40bd98:	f7 d0                	not    eax
  40bd9a:	c3                   	ret
  40bd9b:	55                   	push   ebp
  40bd9c:	8b ec                	mov    ebp,esp
  40bd9e:	81 ec 54 02 00 00    	sub    esp,0x254
  40bda4:	56                   	push   esi
  40bda5:	33 f6                	xor    esi,esi
  40bda7:	6a 44                	push   0x44
  40bda9:	8d 45 ac             	lea    eax,[ebp-0x54]
  40bdac:	56                   	push   esi
  40bdad:	50                   	push   eax
  40bdae:	e8 9d 02 00 00       	call   0x40c050
  40bdb3:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40bdb6:	8d 85 ac fd ff ff    	lea    eax,[ebp-0x254]
  40bdbc:	c7 45 ac 44 00 00 00 	mov    DWORD PTR [ebp-0x54],0x44
  40bdc3:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40bdc6:	68 fc 2e 41 00       	push   0x412efc
  40bdcb:	50                   	push   eax
  40bdcc:	ff 15 9c 02 41 00    	call   DWORD PTR ds:0x41029c
  40bdd2:	83 c4 1c             	add    esp,0x1c
  40bdd5:	8d 45 f0             	lea    eax,[ebp-0x10]
  40bdd8:	50                   	push   eax
  40bdd9:	8d 45 ac             	lea    eax,[ebp-0x54]
  40bddc:	50                   	push   eax
  40bddd:	56                   	push   esi
  40bdde:	56                   	push   esi
  40bddf:	56                   	push   esi
  40bde0:	56                   	push   esi
  40bde1:	56                   	push   esi
  40bde2:	8d 85 ac fd ff ff    	lea    eax,[ebp-0x254]
  40bde8:	56                   	push   esi
  40bde9:	50                   	push   eax
  40bdea:	56                   	push   esi
  40bdeb:	ff 15 24 01 41 00    	call   DWORD PTR ds:0x410124
  40bdf1:	85 c0                	test   eax,eax
  40bdf3:	5e                   	pop    esi
  40bdf4:	74 0b                	je     0x40be01
  40bdf6:	6a ff                	push   0xffffffff
  40bdf8:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  40bdfb:	ff 15 28 01 41 00    	call   DWORD PTR ds:0x410128
  40be01:	c9                   	leave
  40be02:	c3                   	ret
  40be03:	56                   	push   esi
  40be04:	6a 5c                	push   0x5c
  40be06:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  40be0a:	e8 3d 00 00 00       	call   0x40be4c
  40be0f:	8b f0                	mov    esi,eax
  40be11:	59                   	pop    ecx
  40be12:	85 f6                	test   esi,esi
  40be14:	59                   	pop    ecx
  40be15:	74 33                	je     0x40be4a
  40be17:	8a 06                	mov    al,BYTE PTR [esi]
  40be19:	84 c0                	test   al,al
  40be1b:	74 2d                	je     0x40be4a
  40be1d:	3c 5c                	cmp    al,0x5c
  40be1f:	74 0f                	je     0x40be30
  40be21:	56                   	push   esi
  40be22:	ff 15 f4 02 41 00    	call   DWORD PTR ds:0x4102f4
  40be28:	8b f0                	mov    esi,eax
  40be2a:	8a 06                	mov    al,BYTE PTR [esi]
  40be2c:	84 c0                	test   al,al
  40be2e:	75 ed                	jne    0x40be1d
  40be30:	80 3e 5c             	cmp    BYTE PTR [esi],0x5c
  40be33:	75 e2                	jne    0x40be17
  40be35:	80 26 00             	and    BYTE PTR [esi],0x0
  40be38:	6a 00                	push   0x0
  40be3a:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  40be3e:	ff 15 d8 00 41 00    	call   DWORD PTR ds:0x4100d8
  40be44:	c6 06 5c             	mov    BYTE PTR [esi],0x5c
  40be47:	46                   	inc    esi
  40be48:	eb cd                	jmp    0x40be17
  40be4a:	5e                   	pop    esi
  40be4b:	c3                   	ret
  40be4c:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40be50:	8a 08                	mov    cl,BYTE PTR [eax]
  40be52:	84 c9                	test   cl,cl
  40be54:	74 12                	je     0x40be68
  40be56:	0f be c9             	movsx  ecx,cl
  40be59:	3b 4c 24 08          	cmp    ecx,DWORD PTR [esp+0x8]
  40be5d:	74 0b                	je     0x40be6a
  40be5f:	50                   	push   eax
  40be60:	ff 15 f4 02 41 00    	call   DWORD PTR ds:0x4102f4
  40be66:	eb e8                	jmp    0x40be50
  40be68:	33 c0                	xor    eax,eax
  40be6a:	c3                   	ret
  40be6b:	cc                   	int3
  40be6c:	ff 25 30 03 41 00    	jmp    DWORD PTR ds:0x410330
  40be72:	ff 25 2c 03 41 00    	jmp    DWORD PTR ds:0x41032c
  40be78:	ff 25 40 03 41 00    	jmp    DWORD PTR ds:0x410340
  40be7e:	ff 25 44 03 41 00    	jmp    DWORD PTR ds:0x410344
  40be84:	ff 25 28 03 41 00    	jmp    DWORD PTR ds:0x410328
  40be8a:	ff 25 20 03 41 00    	jmp    DWORD PTR ds:0x410320
  40be90:	ff 25 48 03 41 00    	jmp    DWORD PTR ds:0x410348
  40be96:	ff 25 1c 03 41 00    	jmp    DWORD PTR ds:0x41031c
  40be9c:	ff 25 18 03 41 00    	jmp    DWORD PTR ds:0x410318
  40bea2:	ff 25 50 03 41 00    	jmp    DWORD PTR ds:0x410350
  40bea8:	55                   	push   ebp
  40bea9:	8b ec                	mov    ebp,esp
  40beab:	81 ec 08 01 00 00    	sub    esp,0x108
  40beb1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40beb4:	ff 15 18 02 41 00    	call   DWORD PTR ds:0x410218
  40beba:	85 c0                	test   eax,eax
  40bebc:	74 5e                	je     0x40bf1c
  40bebe:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40bec4:	50                   	push   eax
  40bec5:	68 05 01 00 00       	push   0x105
  40beca:	ff 15 1c 02 41 00    	call   DWORD PTR ds:0x41021c
  40bed0:	85 c0                	test   eax,eax
  40bed2:	74 48                	je     0x40bf1c
  40bed4:	8a 85 f8 fe ff ff    	mov    al,BYTE PTR [ebp-0x108]
  40beda:	3c 5c                	cmp    al,0x5c
  40bedc:	74 04                	je     0x40bee2
  40bede:	3c 2f                	cmp    al,0x2f
  40bee0:	75 08                	jne    0x40beea
  40bee2:	3a 85 f9 fe ff ff    	cmp    al,BYTE PTR [ebp-0x107]
  40bee8:	74 2e                	je     0x40bf18
  40beea:	0f b6 c0             	movzx  eax,al
  40beed:	50                   	push   eax
  40beee:	c6 45 08 3d          	mov    BYTE PTR [ebp+0x8],0x3d
  40bef2:	e8 08 0c 00 00       	call   0x40caff
  40bef7:	80 65 0b 00          	and    BYTE PTR [ebp+0xb],0x0
  40befb:	88 45 09             	mov    BYTE PTR [ebp+0x9],al
  40befe:	59                   	pop    ecx
  40beff:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40bf05:	50                   	push   eax
  40bf06:	8d 45 08             	lea    eax,[ebp+0x8]
  40bf09:	50                   	push   eax
  40bf0a:	c6 45 0a 3a          	mov    BYTE PTR [ebp+0xa],0x3a
  40bf0e:	ff 15 20 02 41 00    	call   DWORD PTR ds:0x410220
  40bf14:	85 c0                	test   eax,eax
  40bf16:	74 04                	je     0x40bf1c
  40bf18:	33 c0                	xor    eax,eax
  40bf1a:	c9                   	leave
  40bf1b:	c3                   	ret
  40bf1c:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40bf22:	50                   	push   eax
  40bf23:	e8 70 0b 00 00       	call   0x40ca98
  40bf28:	59                   	pop    ecx
  40bf29:	83 c8 ff             	or     eax,0xffffffff
  40bf2c:	c9                   	leave
  40bf2d:	c3                   	ret
  40bf2e:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40bf32:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40bf36:	6a 00                	push   0x0
  40bf38:	e8 04 00 00 00       	call   0x40bf41
  40bf3d:	83 c4 0c             	add    esp,0xc
  40bf40:	c3                   	ret
  40bf41:	55                   	push   ebp
  40bf42:	8b ec                	mov    ebp,esp
  40bf44:	81 ec 08 01 00 00    	sub    esp,0x108
  40bf4a:	53                   	push   ebx
  40bf4b:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40bf4e:	85 db                	test   ebx,ebx
  40bf50:	74 52                	je     0x40bfa4
  40bf52:	53                   	push   ebx
  40bf53:	e8 ba 00 00 00       	call   0x40c012
  40bf58:	85 c0                	test   eax,eax
  40bf5a:	59                   	pop    ecx
  40bf5b:	75 19                	jne    0x40bf76
  40bf5d:	c7 05 e8 34 41 00 0f 	mov    DWORD PTR ds:0x4134e8,0xf
  40bf64:	00 00 00 
  40bf67:	c7 05 e4 34 41 00 0d 	mov    DWORD PTR ds:0x4134e4,0xd
  40bf6e:	00 00 00 
  40bf71:	33 c0                	xor    eax,eax
  40bf73:	5b                   	pop    ebx
  40bf74:	c9                   	leave
  40bf75:	c3                   	ret
  40bf76:	8d 45 fc             	lea    eax,[ebp-0x4]
  40bf79:	80 65 0b 00          	and    BYTE PTR [ebp+0xb],0x0
  40bf7d:	50                   	push   eax
  40bf7e:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40bf84:	50                   	push   eax
  40bf85:	8d 45 08             	lea    eax,[ebp+0x8]
  40bf88:	80 c3 40             	add    bl,0x40
  40bf8b:	68 04 01 00 00       	push   0x104
  40bf90:	50                   	push   eax
  40bf91:	88 5d 08             	mov    BYTE PTR [ebp+0x8],bl
  40bf94:	c6 45 09 3a          	mov    BYTE PTR [ebp+0x9],0x3a
  40bf98:	c6 45 0a 2e          	mov    BYTE PTR [ebp+0xa],0x2e
  40bf9c:	ff 15 14 02 41 00    	call   DWORD PTR ds:0x410214
  40bfa2:	eb 12                	jmp    0x40bfb6
  40bfa4:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40bfaa:	50                   	push   eax
  40bfab:	68 04 01 00 00       	push   0x104
  40bfb0:	ff 15 1c 02 41 00    	call   DWORD PTR ds:0x41021c
  40bfb6:	85 c0                	test   eax,eax
  40bfb8:	74 b7                	je     0x40bf71
  40bfba:	40                   	inc    eax
  40bfbb:	3d 04 01 00 00       	cmp    eax,0x104
  40bfc0:	77 af                	ja     0x40bf71
  40bfc2:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40bfc5:	85 c9                	test   ecx,ecx
  40bfc7:	75 21                	jne    0x40bfea
  40bfc9:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
  40bfcc:	7f 03                	jg     0x40bfd1
  40bfce:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40bfd1:	50                   	push   eax
  40bfd2:	e8 df 08 00 00       	call   0x40c8b6
  40bfd7:	59                   	pop    ecx
  40bfd8:	8b c8                	mov    ecx,eax
  40bfda:	85 c9                	test   ecx,ecx
  40bfdc:	75 20                	jne    0x40bffe
  40bfde:	c7 05 e4 34 41 00 0c 	mov    DWORD PTR ds:0x4134e4,0xc
  40bfe5:	00 00 00 
  40bfe8:	eb 87                	jmp    0x40bf71
  40bfea:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
  40bfed:	7e 0f                	jle    0x40bffe
  40bfef:	c7 05 e4 34 41 00 22 	mov    DWORD PTR ds:0x4134e4,0x22
  40bff6:	00 00 00 
  40bff9:	e9 73 ff ff ff       	jmp    0x40bf71
  40bffe:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40c004:	50                   	push   eax
  40c005:	51                   	push   ecx
  40c006:	e8 75 0b 00 00       	call   0x40cb80
  40c00b:	59                   	pop    ecx
  40c00c:	59                   	pop    ecx
  40c00d:	e9 61 ff ff ff       	jmp    0x40bf73
  40c012:	55                   	push   ebp
  40c013:	8b ec                	mov    ebp,esp
  40c015:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40c018:	85 c0                	test   eax,eax
  40c01a:	74 24                	je     0x40c040
  40c01c:	80 65 0b 00          	and    BYTE PTR [ebp+0xb],0x0
  40c020:	04 40                	add    al,0x40
  40c022:	88 45 08             	mov    BYTE PTR [ebp+0x8],al
  40c025:	8d 45 08             	lea    eax,[ebp+0x8]
  40c028:	50                   	push   eax
  40c029:	c6 45 09 3a          	mov    BYTE PTR [ebp+0x9],0x3a
  40c02d:	c6 45 0a 5c          	mov    BYTE PTR [ebp+0xa],0x5c
  40c031:	ff 15 54 01 41 00    	call   DWORD PTR ds:0x410154
  40c037:	85 c0                	test   eax,eax
  40c039:	74 0a                	je     0x40c045
  40c03b:	83 f8 01             	cmp    eax,0x1
  40c03e:	74 05                	je     0x40c045
  40c040:	6a 01                	push   0x1
  40c042:	58                   	pop    eax
  40c043:	5d                   	pop    ebp
  40c044:	c3                   	ret
  40c045:	33 c0                	xor    eax,eax
  40c047:	5d                   	pop    ebp
  40c048:	c3                   	ret
  40c049:	cc                   	int3
  40c04a:	cc                   	int3
  40c04b:	cc                   	int3
  40c04c:	cc                   	int3
  40c04d:	cc                   	int3
  40c04e:	cc                   	int3
  40c04f:	cc                   	int3
  40c050:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  40c054:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40c058:	85 d2                	test   edx,edx
  40c05a:	74 47                	je     0x40c0a3
  40c05c:	33 c0                	xor    eax,eax
  40c05e:	8a 44 24 08          	mov    al,BYTE PTR [esp+0x8]
  40c062:	57                   	push   edi
  40c063:	8b f9                	mov    edi,ecx
  40c065:	83 fa 04             	cmp    edx,0x4
  40c068:	72 2d                	jb     0x40c097
  40c06a:	f7 d9                	neg    ecx
  40c06c:	83 e1 03             	and    ecx,0x3
  40c06f:	74 08                	je     0x40c079
  40c071:	2b d1                	sub    edx,ecx
  40c073:	88 07                	mov    BYTE PTR [edi],al
  40c075:	47                   	inc    edi
  40c076:	49                   	dec    ecx
  40c077:	75 fa                	jne    0x40c073
  40c079:	8b c8                	mov    ecx,eax
  40c07b:	c1 e0 08             	shl    eax,0x8
  40c07e:	03 c1                	add    eax,ecx
  40c080:	8b c8                	mov    ecx,eax
  40c082:	c1 e0 10             	shl    eax,0x10
  40c085:	03 c1                	add    eax,ecx
  40c087:	8b ca                	mov    ecx,edx
  40c089:	83 e2 03             	and    edx,0x3
  40c08c:	c1 e9 02             	shr    ecx,0x2
  40c08f:	74 06                	je     0x40c097
  40c091:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  40c093:	85 d2                	test   edx,edx
  40c095:	74 06                	je     0x40c09d
  40c097:	88 07                	mov    BYTE PTR [edi],al
  40c099:	47                   	inc    edi
  40c09a:	4a                   	dec    edx
  40c09b:	75 fa                	jne    0x40c097
  40c09d:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40c0a1:	5f                   	pop    edi
  40c0a2:	c3                   	ret
  40c0a3:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40c0a7:	c3                   	ret
  40c0a8:	55                   	push   ebp
  40c0a9:	8b ec                	mov    ebp,esp
  40c0ab:	51                   	push   ecx
  40c0ac:	83 3d 3c 35 41 00 00 	cmp    DWORD PTR ds:0x41353c,0x0
  40c0b3:	53                   	push   ebx
  40c0b4:	75 1d                	jne    0x40c0d3
  40c0b6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40c0b9:	83 f8 61             	cmp    eax,0x61
  40c0bc:	0f 8c af 00 00 00    	jl     0x40c171
  40c0c2:	83 f8 7a             	cmp    eax,0x7a
  40c0c5:	0f 8f a6 00 00 00    	jg     0x40c171
  40c0cb:	83 e8 20             	sub    eax,0x20
  40c0ce:	e9 9e 00 00 00       	jmp    0x40c171
  40c0d3:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40c0d6:	81 fb 00 01 00 00    	cmp    ebx,0x100
  40c0dc:	7d 28                	jge    0x40c106
  40c0de:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  40c0e5:	7e 0c                	jle    0x40c0f3
  40c0e7:	6a 02                	push   0x2
  40c0e9:	53                   	push   ebx
  40c0ea:	e8 8f 01 00 00       	call   0x40c27e
  40c0ef:	59                   	pop    ecx
  40c0f0:	59                   	pop    ecx
  40c0f1:	eb 0b                	jmp    0x40c0fe
  40c0f3:	a1 10 2f 41 00       	mov    eax,ds:0x412f10
  40c0f8:	8a 04 58             	mov    al,BYTE PTR [eax+ebx*2]
  40c0fb:	83 e0 02             	and    eax,0x2
  40c0fe:	85 c0                	test   eax,eax
  40c100:	75 04                	jne    0x40c106
  40c102:	8b c3                	mov    eax,ebx
  40c104:	eb 6b                	jmp    0x40c171
  40c106:	8b 15 10 2f 41 00    	mov    edx,DWORD PTR ds:0x412f10
  40c10c:	8b c3                	mov    eax,ebx
  40c10e:	c1 f8 08             	sar    eax,0x8
  40c111:	0f b6 c8             	movzx  ecx,al
  40c114:	f6 44 4a 01 80       	test   BYTE PTR [edx+ecx*2+0x1],0x80
  40c119:	74 0e                	je     0x40c129
  40c11b:	80 65 0a 00          	and    BYTE PTR [ebp+0xa],0x0
  40c11f:	88 45 08             	mov    BYTE PTR [ebp+0x8],al
  40c122:	88 5d 09             	mov    BYTE PTR [ebp+0x9],bl
  40c125:	6a 02                	push   0x2
  40c127:	eb 09                	jmp    0x40c132
  40c129:	80 65 09 00          	and    BYTE PTR [ebp+0x9],0x0
  40c12d:	88 5d 08             	mov    BYTE PTR [ebp+0x8],bl
  40c130:	6a 01                	push   0x1
  40c132:	58                   	pop    eax
  40c133:	8d 4d fc             	lea    ecx,[ebp-0x4]
  40c136:	6a 01                	push   0x1
  40c138:	6a 00                	push   0x0
  40c13a:	6a 03                	push   0x3
  40c13c:	51                   	push   ecx
  40c13d:	50                   	push   eax
  40c13e:	8d 45 08             	lea    eax,[ebp+0x8]
  40c141:	50                   	push   eax
  40c142:	68 00 02 00 00       	push   0x200
  40c147:	ff 35 3c 35 41 00    	push   DWORD PTR ds:0x41353c
  40c14d:	e8 20 0c 00 00       	call   0x40cd72
  40c152:	83 c4 20             	add    esp,0x20
  40c155:	85 c0                	test   eax,eax
  40c157:	74 a9                	je     0x40c102
  40c159:	83 f8 01             	cmp    eax,0x1
  40c15c:	75 06                	jne    0x40c164
  40c15e:	0f b6 45 fc          	movzx  eax,BYTE PTR [ebp-0x4]
  40c162:	eb 0d                	jmp    0x40c171
  40c164:	0f b6 45 fd          	movzx  eax,BYTE PTR [ebp-0x3]
  40c168:	0f b6 4d fc          	movzx  ecx,BYTE PTR [ebp-0x4]
  40c16c:	c1 e0 08             	shl    eax,0x8
  40c16f:	0b c1                	or     eax,ecx
  40c171:	5b                   	pop    ebx
  40c172:	c9                   	leave
  40c173:	c3                   	ret
  40c174:	cc                   	int3
  40c175:	cc                   	int3
  40c176:	cc                   	int3
  40c177:	cc                   	int3
  40c178:	cc                   	int3
  40c179:	cc                   	int3
  40c17a:	cc                   	int3
  40c17b:	cc                   	int3
  40c17c:	cc                   	int3
  40c17d:	cc                   	int3
  40c17e:	cc                   	int3
  40c17f:	cc                   	int3
  40c180:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  40c184:	57                   	push   edi
  40c185:	85 c9                	test   ecx,ecx
  40c187:	74 7a                	je     0x40c203
  40c189:	56                   	push   esi
  40c18a:	53                   	push   ebx
  40c18b:	8b d9                	mov    ebx,ecx
  40c18d:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  40c191:	f7 c6 03 00 00 00    	test   esi,0x3
  40c197:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  40c19b:	75 07                	jne    0x40c1a4
  40c19d:	c1 e9 02             	shr    ecx,0x2
  40c1a0:	75 6f                	jne    0x40c211
  40c1a2:	eb 21                	jmp    0x40c1c5
  40c1a4:	8a 06                	mov    al,BYTE PTR [esi]
  40c1a6:	46                   	inc    esi
  40c1a7:	88 07                	mov    BYTE PTR [edi],al
  40c1a9:	47                   	inc    edi
  40c1aa:	49                   	dec    ecx
  40c1ab:	74 25                	je     0x40c1d2
  40c1ad:	84 c0                	test   al,al
  40c1af:	74 29                	je     0x40c1da
  40c1b1:	f7 c6 03 00 00 00    	test   esi,0x3
  40c1b7:	75 eb                	jne    0x40c1a4
  40c1b9:	8b d9                	mov    ebx,ecx
  40c1bb:	c1 e9 02             	shr    ecx,0x2
  40c1be:	75 51                	jne    0x40c211
  40c1c0:	83 e3 03             	and    ebx,0x3
  40c1c3:	74 0d                	je     0x40c1d2
  40c1c5:	8a 06                	mov    al,BYTE PTR [esi]
  40c1c7:	46                   	inc    esi
  40c1c8:	88 07                	mov    BYTE PTR [edi],al
  40c1ca:	47                   	inc    edi
  40c1cb:	84 c0                	test   al,al
  40c1cd:	74 2f                	je     0x40c1fe
  40c1cf:	4b                   	dec    ebx
  40c1d0:	75 f3                	jne    0x40c1c5
  40c1d2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  40c1d6:	5b                   	pop    ebx
  40c1d7:	5e                   	pop    esi
  40c1d8:	5f                   	pop    edi
  40c1d9:	c3                   	ret
  40c1da:	f7 c7 03 00 00 00    	test   edi,0x3
  40c1e0:	74 12                	je     0x40c1f4
  40c1e2:	88 07                	mov    BYTE PTR [edi],al
  40c1e4:	47                   	inc    edi
  40c1e5:	49                   	dec    ecx
  40c1e6:	0f 84 8a 00 00 00    	je     0x40c276
  40c1ec:	f7 c7 03 00 00 00    	test   edi,0x3
  40c1f2:	75 ee                	jne    0x40c1e2
  40c1f4:	8b d9                	mov    ebx,ecx
  40c1f6:	c1 e9 02             	shr    ecx,0x2
  40c1f9:	75 6c                	jne    0x40c267
  40c1fb:	88 07                	mov    BYTE PTR [edi],al
  40c1fd:	47                   	inc    edi
  40c1fe:	4b                   	dec    ebx
  40c1ff:	75 fa                	jne    0x40c1fb
  40c201:	5b                   	pop    ebx
  40c202:	5e                   	pop    esi
  40c203:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40c207:	5f                   	pop    edi
  40c208:	c3                   	ret
  40c209:	89 17                	mov    DWORD PTR [edi],edx
  40c20b:	83 c7 04             	add    edi,0x4
  40c20e:	49                   	dec    ecx
  40c20f:	74 af                	je     0x40c1c0
  40c211:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  40c216:	8b 06                	mov    eax,DWORD PTR [esi]
  40c218:	03 d0                	add    edx,eax
  40c21a:	83 f0 ff             	xor    eax,0xffffffff
  40c21d:	33 c2                	xor    eax,edx
  40c21f:	8b 16                	mov    edx,DWORD PTR [esi]
  40c221:	83 c6 04             	add    esi,0x4
  40c224:	a9 00 01 01 81       	test   eax,0x81010100
  40c229:	74 de                	je     0x40c209
  40c22b:	84 d2                	test   dl,dl
  40c22d:	74 2c                	je     0x40c25b
  40c22f:	84 f6                	test   dh,dh
  40c231:	74 1e                	je     0x40c251
  40c233:	f7 c2 00 00 ff 00    	test   edx,0xff0000
  40c239:	74 0c                	je     0x40c247
  40c23b:	f7 c2 00 00 00 ff    	test   edx,0xff000000
  40c241:	75 c6                	jne    0x40c209
  40c243:	89 17                	mov    DWORD PTR [edi],edx
  40c245:	eb 18                	jmp    0x40c25f
  40c247:	81 e2 ff ff 00 00    	and    edx,0xffff
  40c24d:	89 17                	mov    DWORD PTR [edi],edx
  40c24f:	eb 0e                	jmp    0x40c25f
  40c251:	81 e2 ff 00 00 00    	and    edx,0xff
  40c257:	89 17                	mov    DWORD PTR [edi],edx
  40c259:	eb 04                	jmp    0x40c25f
  40c25b:	33 d2                	xor    edx,edx
  40c25d:	89 17                	mov    DWORD PTR [edi],edx
  40c25f:	83 c7 04             	add    edi,0x4
  40c262:	33 c0                	xor    eax,eax
  40c264:	49                   	dec    ecx
  40c265:	74 0a                	je     0x40c271
  40c267:	33 c0                	xor    eax,eax
  40c269:	89 07                	mov    DWORD PTR [edi],eax
  40c26b:	83 c7 04             	add    edi,0x4
  40c26e:	49                   	dec    ecx
  40c26f:	75 f8                	jne    0x40c269
  40c271:	83 e3 03             	and    ebx,0x3
  40c274:	75 85                	jne    0x40c1fb
  40c276:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  40c27a:	5b                   	pop    ebx
  40c27b:	5e                   	pop    esi
  40c27c:	5f                   	pop    edi
  40c27d:	c3                   	ret
  40c27e:	55                   	push   ebp
  40c27f:	8b ec                	mov    ebp,esp
  40c281:	51                   	push   ecx
  40c282:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40c285:	8d 48 01             	lea    ecx,[eax+0x1]
  40c288:	81 f9 00 01 00 00    	cmp    ecx,0x100
  40c28e:	77 0c                	ja     0x40c29c
  40c290:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  40c296:	0f b7 04 41          	movzx  eax,WORD PTR [ecx+eax*2]
  40c29a:	eb 52                	jmp    0x40c2ee
  40c29c:	8b c8                	mov    ecx,eax
  40c29e:	56                   	push   esi
  40c29f:	8b 35 10 2f 41 00    	mov    esi,DWORD PTR ds:0x412f10
  40c2a5:	c1 f9 08             	sar    ecx,0x8
  40c2a8:	0f b6 d1             	movzx  edx,cl
  40c2ab:	f6 44 56 01 80       	test   BYTE PTR [esi+edx*2+0x1],0x80
  40c2b0:	5e                   	pop    esi
  40c2b1:	74 0e                	je     0x40c2c1
  40c2b3:	80 65 fe 00          	and    BYTE PTR [ebp-0x2],0x0
  40c2b7:	88 4d fc             	mov    BYTE PTR [ebp-0x4],cl
  40c2ba:	88 45 fd             	mov    BYTE PTR [ebp-0x3],al
  40c2bd:	6a 02                	push   0x2
  40c2bf:	eb 09                	jmp    0x40c2ca
  40c2c1:	80 65 fd 00          	and    BYTE PTR [ebp-0x3],0x0
  40c2c5:	88 45 fc             	mov    BYTE PTR [ebp-0x4],al
  40c2c8:	6a 01                	push   0x1
  40c2ca:	58                   	pop    eax
  40c2cb:	8d 4d 0a             	lea    ecx,[ebp+0xa]
  40c2ce:	6a 01                	push   0x1
  40c2d0:	6a 00                	push   0x0
  40c2d2:	6a 00                	push   0x0
  40c2d4:	51                   	push   ecx
  40c2d5:	50                   	push   eax
  40c2d6:	8d 45 fc             	lea    eax,[ebp-0x4]
  40c2d9:	50                   	push   eax
  40c2da:	6a 01                	push   0x1
  40c2dc:	e8 e0 0c 00 00       	call   0x40cfc1
  40c2e1:	83 c4 1c             	add    esp,0x1c
  40c2e4:	85 c0                	test   eax,eax
  40c2e6:	75 02                	jne    0x40c2ea
  40c2e8:	c9                   	leave
  40c2e9:	c3                   	ret
  40c2ea:	0f b7 45 0a          	movzx  eax,WORD PTR [ebp+0xa]
  40c2ee:	23 45 0c             	and    eax,DWORD PTR [ebp+0xc]
  40c2f1:	c9                   	leave
  40c2f2:	c3                   	ret
  40c2f3:	53                   	push   ebx
  40c2f4:	55                   	push   ebp
  40c2f5:	56                   	push   esi
  40c2f6:	57                   	push   edi
  40c2f7:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  40c2fb:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  40c302:	7e 0f                	jle    0x40c313
  40c304:	0f b6 07             	movzx  eax,BYTE PTR [edi]
  40c307:	6a 08                	push   0x8
  40c309:	50                   	push   eax
  40c30a:	e8 6f ff ff ff       	call   0x40c27e
  40c30f:	59                   	pop    ecx
  40c310:	59                   	pop    ecx
  40c311:	eb 0f                	jmp    0x40c322
  40c313:	0f b6 07             	movzx  eax,BYTE PTR [edi]
  40c316:	8b 0d 10 2f 41 00    	mov    ecx,DWORD PTR ds:0x412f10
  40c31c:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
  40c31f:	83 e0 08             	and    eax,0x8
  40c322:	85 c0                	test   eax,eax
  40c324:	74 03                	je     0x40c329
  40c326:	47                   	inc    edi
  40c327:	eb d2                	jmp    0x40c2fb
  40c329:	0f b6 37             	movzx  esi,BYTE PTR [edi]
  40c32c:	47                   	inc    edi
  40c32d:	83 fe 2d             	cmp    esi,0x2d
  40c330:	8b ee                	mov    ebp,esi
  40c332:	74 05                	je     0x40c339
  40c334:	83 fe 2b             	cmp    esi,0x2b
  40c337:	75 04                	jne    0x40c33d
  40c339:	0f b6 37             	movzx  esi,BYTE PTR [edi]
  40c33c:	47                   	inc    edi
  40c33d:	33 db                	xor    ebx,ebx
  40c33f:	83 3d 1c 31 41 00 01 	cmp    DWORD PTR ds:0x41311c,0x1
  40c346:	7e 0c                	jle    0x40c354
  40c348:	6a 04                	push   0x4
  40c34a:	56                   	push   esi
  40c34b:	e8 2e ff ff ff       	call   0x40c27e
  40c350:	59                   	pop    ecx
  40c351:	59                   	pop    ecx
  40c352:	eb 0b                	jmp    0x40c35f
  40c354:	a1 10 2f 41 00       	mov    eax,ds:0x412f10
  40c359:	8a 04 70             	mov    al,BYTE PTR [eax+esi*2]
  40c35c:	83 e0 04             	and    eax,0x4
  40c35f:	85 c0                	test   eax,eax
  40c361:	74 0d                	je     0x40c370
  40c363:	8d 04 9b             	lea    eax,[ebx+ebx*4]
  40c366:	8d 5c 46 d0          	lea    ebx,[esi+eax*2-0x30]
  40c36a:	0f b6 37             	movzx  esi,BYTE PTR [edi]
  40c36d:	47                   	inc    edi
  40c36e:	eb cf                	jmp    0x40c33f
  40c370:	83 fd 2d             	cmp    ebp,0x2d
  40c373:	8b c3                	mov    eax,ebx
  40c375:	75 02                	jne    0x40c379
  40c377:	f7 d8                	neg    eax
  40c379:	5f                   	pop    edi
  40c37a:	5e                   	pop    esi
  40c37b:	5d                   	pop    ebp
  40c37c:	5b                   	pop    ebx
  40c37d:	c3                   	ret
  40c37e:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40c382:	e8 6c ff ff ff       	call   0x40c2f3
  40c387:	59                   	pop    ecx
  40c388:	c3                   	ret
  40c389:	cc                   	int3
  40c38a:	cc                   	int3
  40c38b:	cc                   	int3
  40c38c:	cc                   	int3
  40c38d:	cc                   	int3
  40c38e:	cc                   	int3
  40c38f:	cc                   	int3
  40c390:	51                   	push   ecx
  40c391:	3d 00 10 00 00       	cmp    eax,0x1000
  40c396:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  40c39a:	72 14                	jb     0x40c3b0
  40c39c:	81 e9 00 10 00 00    	sub    ecx,0x1000
  40c3a2:	2d 00 10 00 00       	sub    eax,0x1000
  40c3a7:	85 01                	test   DWORD PTR [ecx],eax
  40c3a9:	3d 00 10 00 00       	cmp    eax,0x1000
  40c3ae:	73 ec                	jae    0x40c39c
  40c3b0:	2b c8                	sub    ecx,eax
  40c3b2:	8b c4                	mov    eax,esp
  40c3b4:	85 01                	test   DWORD PTR [ecx],eax
  40c3b6:	8b e1                	mov    esp,ecx
  40c3b8:	8b 08                	mov    ecx,DWORD PTR [eax]
  40c3ba:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  40c3bd:	50                   	push   eax
  40c3be:	c3                   	ret
  40c3bf:	53                   	push   ebx
  40c3c0:	55                   	push   ebp
  40c3c1:	56                   	push   esi
  40c3c2:	57                   	push   edi
  40c3c3:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  40c3c7:	3b 3d 00 3f 41 00    	cmp    edi,DWORD PTR ds:0x413f00
  40c3cd:	0f 83 86 00 00 00    	jae    0x40c459
  40c3d3:	8b c7                	mov    eax,edi
  40c3d5:	8b f7                	mov    esi,edi
  40c3d7:	c1 f8 05             	sar    eax,0x5
  40c3da:	83 e6 1f             	and    esi,0x1f
  40c3dd:	8d 1c 85 00 3e 41 00 	lea    ebx,[eax*4+0x413e00]
  40c3e4:	c1 e6 03             	shl    esi,0x3
  40c3e7:	8b 03                	mov    eax,DWORD PTR [ebx]
  40c3e9:	f6 44 30 04 01       	test   BYTE PTR [eax+esi*1+0x4],0x1
  40c3ee:	74 69                	je     0x40c459
  40c3f0:	57                   	push   edi
  40c3f1:	e8 d4 0e 00 00       	call   0x40d2ca
  40c3f6:	83 f8 ff             	cmp    eax,0xffffffff
  40c3f9:	59                   	pop    ecx
  40c3fa:	74 3c                	je     0x40c438
  40c3fc:	83 ff 01             	cmp    edi,0x1
  40c3ff:	74 05                	je     0x40c406
  40c401:	83 ff 02             	cmp    edi,0x2
  40c404:	75 16                	jne    0x40c41c
  40c406:	6a 02                	push   0x2
  40c408:	e8 bd 0e 00 00       	call   0x40d2ca
  40c40d:	6a 01                	push   0x1
  40c40f:	8b e8                	mov    ebp,eax
  40c411:	e8 b4 0e 00 00       	call   0x40d2ca
  40c416:	59                   	pop    ecx
  40c417:	3b c5                	cmp    eax,ebp
  40c419:	59                   	pop    ecx
  40c41a:	74 1c                	je     0x40c438
  40c41c:	57                   	push   edi
  40c41d:	e8 a8 0e 00 00       	call   0x40d2ca
  40c422:	59                   	pop    ecx
  40c423:	50                   	push   eax
  40c424:	ff 15 10 02 41 00    	call   DWORD PTR ds:0x410210
  40c42a:	85 c0                	test   eax,eax
  40c42c:	75 0a                	jne    0x40c438
  40c42e:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40c434:	8b e8                	mov    ebp,eax
  40c436:	eb 02                	jmp    0x40c43a
  40c438:	33 ed                	xor    ebp,ebp
  40c43a:	57                   	push   edi
  40c43b:	e8 10 0e 00 00       	call   0x40d250
  40c440:	8b 03                	mov    eax,DWORD PTR [ebx]
  40c442:	59                   	pop    ecx
  40c443:	80 64 30 04 00       	and    BYTE PTR [eax+esi*1+0x4],0x0
  40c448:	85 ed                	test   ebp,ebp
  40c44a:	74 09                	je     0x40c455
  40c44c:	55                   	push   ebp
  40c44d:	e8 46 06 00 00       	call   0x40ca98
  40c452:	59                   	pop    ecx
  40c453:	eb 15                	jmp    0x40c46a
  40c455:	33 c0                	xor    eax,eax
  40c457:	eb 14                	jmp    0x40c46d
  40c459:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40c460:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40c467:	00 00 00 
  40c46a:	83 c8 ff             	or     eax,0xffffffff
  40c46d:	5f                   	pop    edi
  40c46e:	5e                   	pop    esi
  40c46f:	5d                   	pop    ebp
  40c470:	5b                   	pop    ebx
  40c471:	c3                   	ret
  40c472:	55                   	push   ebp
  40c473:	8b ec                	mov    ebp,esp
  40c475:	b8 00 10 00 00       	mov    eax,0x1000
  40c47a:	e8 11 ff ff ff       	call   0x40c390
  40c47f:	53                   	push   ebx
  40c480:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40c483:	56                   	push   esi
  40c484:	33 f6                	xor    esi,esi
  40c486:	3b 1d 00 3f 41 00    	cmp    ebx,DWORD PTR ds:0x413f00
  40c48c:	0f 83 15 01 00 00    	jae    0x40c5a7
  40c492:	8b c3                	mov    eax,ebx
  40c494:	8b cb                	mov    ecx,ebx
  40c496:	c1 f8 05             	sar    eax,0x5
  40c499:	83 e1 1f             	and    ecx,0x1f
  40c49c:	8b 04 85 00 3e 41 00 	mov    eax,DWORD PTR [eax*4+0x413e00]
  40c4a3:	f6 44 c8 04 01       	test   BYTE PTR [eax+ecx*8+0x4],0x1
  40c4a8:	0f 84 f9 00 00 00    	je     0x40c5a7
  40c4ae:	6a 01                	push   0x1
  40c4b0:	56                   	push   esi
  40c4b1:	53                   	push   ebx
  40c4b2:	e8 1e 12 00 00       	call   0x40d6d5
  40c4b7:	83 c4 0c             	add    esp,0xc
  40c4ba:	83 f8 ff             	cmp    eax,0xffffffff
  40c4bd:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  40c4c0:	0f 84 eb 00 00 00    	je     0x40c5b1
  40c4c6:	6a 02                	push   0x2
  40c4c8:	56                   	push   esi
  40c4c9:	53                   	push   ebx
  40c4ca:	e8 06 12 00 00       	call   0x40d6d5
  40c4cf:	83 c4 0c             	add    esp,0xc
  40c4d2:	83 f8 ff             	cmp    eax,0xffffffff
  40c4d5:	0f 84 d6 00 00 00    	je     0x40c5b1
  40c4db:	57                   	push   edi
  40c4dc:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  40c4df:	2b f8                	sub    edi,eax
  40c4e1:	85 ff                	test   edi,edi
  40c4e3:	7e 6f                	jle    0x40c554
  40c4e5:	68 00 10 00 00       	push   0x1000
  40c4ea:	8d 85 00 f0 ff ff    	lea    eax,[ebp-0x1000]
  40c4f0:	56                   	push   esi
  40c4f1:	50                   	push   eax
  40c4f2:	e8 59 fb ff ff       	call   0x40c050
  40c4f7:	68 00 80 00 00       	push   0x8000
  40c4fc:	53                   	push   ebx
  40c4fd:	e8 5d 11 00 00       	call   0x40d65f
  40c502:	83 c4 14             	add    esp,0x14
  40c505:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  40c508:	b8 00 10 00 00       	mov    eax,0x1000
  40c50d:	3b f8                	cmp    edi,eax
  40c50f:	7d 02                	jge    0x40c513
  40c511:	8b c7                	mov    eax,edi
  40c513:	50                   	push   eax
  40c514:	8d 85 00 f0 ff ff    	lea    eax,[ebp-0x1000]
  40c51a:	50                   	push   eax
  40c51b:	53                   	push   ebx
  40c51c:	e8 91 0f 00 00       	call   0x40d4b2
  40c521:	83 c4 0c             	add    esp,0xc
  40c524:	83 f8 ff             	cmp    eax,0xffffffff
  40c527:	74 08                	je     0x40c531
  40c529:	2b f8                	sub    edi,eax
  40c52b:	85 ff                	test   edi,edi
  40c52d:	7e 18                	jle    0x40c547
  40c52f:	eb d7                	jmp    0x40c508
  40c531:	83 3d e8 34 41 00 05 	cmp    DWORD PTR ds:0x4134e8,0x5
  40c538:	75 0a                	jne    0x40c544
  40c53a:	c7 05 e4 34 41 00 0d 	mov    DWORD PTR ds:0x4134e4,0xd
  40c541:	00 00 00 
  40c544:	83 ce ff             	or     esi,0xffffffff
  40c547:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40c54a:	53                   	push   ebx
  40c54b:	e8 0f 11 00 00       	call   0x40d65f
  40c550:	59                   	pop    ecx
  40c551:	59                   	pop    ecx
  40c552:	eb 40                	jmp    0x40c594
  40c554:	7d 3e                	jge    0x40c594
  40c556:	6a 00                	push   0x0
  40c558:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40c55b:	53                   	push   ebx
  40c55c:	e8 74 11 00 00       	call   0x40d6d5
  40c561:	53                   	push   ebx
  40c562:	e8 63 0d 00 00       	call   0x40d2ca
  40c567:	83 c4 10             	add    esp,0x10
  40c56a:	50                   	push   eax
  40c56b:	ff 15 0c 02 41 00    	call   DWORD PTR ds:0x41020c
  40c571:	8b f0                	mov    esi,eax
  40c573:	f7 de                	neg    esi
  40c575:	1b f6                	sbb    esi,esi
  40c577:	f7 de                	neg    esi
  40c579:	4e                   	dec    esi
  40c57a:	83 fe ff             	cmp    esi,0xffffffff
  40c57d:	75 15                	jne    0x40c594
  40c57f:	c7 05 e4 34 41 00 0d 	mov    DWORD PTR ds:0x4134e4,0xd
  40c586:	00 00 00 
  40c589:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40c58f:	a3 e8 34 41 00       	mov    ds:0x4134e8,eax
  40c594:	6a 00                	push   0x0
  40c596:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40c599:	53                   	push   ebx
  40c59a:	e8 36 11 00 00       	call   0x40d6d5
  40c59f:	83 c4 0c             	add    esp,0xc
  40c5a2:	8b c6                	mov    eax,esi
  40c5a4:	5f                   	pop    edi
  40c5a5:	eb 0d                	jmp    0x40c5b4
  40c5a7:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40c5ae:	00 00 00 
  40c5b1:	83 c8 ff             	or     eax,0xffffffff
  40c5b4:	5e                   	pop    esi
  40c5b5:	5b                   	pop    ebx
  40c5b6:	c9                   	leave
  40c5b7:	c3                   	ret
  40c5b8:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  40c5bc:	6a 40                	push   0x40
  40c5be:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  40c5c2:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  40c5c6:	e8 04 00 00 00       	call   0x40c5cf
  40c5cb:	83 c4 10             	add    esp,0x10
  40c5ce:	c3                   	ret
  40c5cf:	55                   	push   ebp
  40c5d0:	8b ec                	mov    ebp,esp
  40c5d2:	83 ec 1c             	sub    esp,0x1c
  40c5d5:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40c5d8:	53                   	push   ebx
  40c5d9:	33 db                	xor    ebx,ebx
  40c5db:	56                   	push   esi
  40c5dc:	f6 c1 80             	test   cl,0x80
  40c5df:	57                   	push   edi
  40c5e0:	c7 45 e4 0c 00 00 00 	mov    DWORD PTR [ebp-0x1c],0xc
  40c5e7:	89 5d e8             	mov    DWORD PTR [ebp-0x18],ebx
  40c5ea:	74 09                	je     0x40c5f5
  40c5ec:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
  40c5ef:	c6 45 ff 10          	mov    BYTE PTR [ebp-0x1],0x10
  40c5f3:	eb 0b                	jmp    0x40c600
  40c5f5:	80 65 ff 00          	and    BYTE PTR [ebp-0x1],0x0
  40c5f9:	c7 45 ec 01 00 00 00 	mov    DWORD PTR [ebp-0x14],0x1
  40c600:	b8 00 80 00 00       	mov    eax,0x8000
  40c605:	85 c8                	test   eax,ecx
  40c607:	75 11                	jne    0x40c61a
  40c609:	f6 c5 40             	test   ch,0x40
  40c60c:	75 08                	jne    0x40c616
  40c60e:	39 05 58 35 41 00    	cmp    DWORD PTR ds:0x413558,eax
  40c614:	74 04                	je     0x40c61a
  40c616:	80 4d ff 80          	or     BYTE PTR [ebp-0x1],0x80
  40c61a:	6a 03                	push   0x3
  40c61c:	8b c1                	mov    eax,ecx
  40c61e:	5e                   	pop    esi
  40c61f:	23 c6                	and    eax,esi
  40c621:	2b c3                	sub    eax,ebx
  40c623:	74 2d                	je     0x40c652
  40c625:	48                   	dec    eax
  40c626:	74 21                	je     0x40c649
  40c628:	48                   	dec    eax
  40c629:	74 15                	je     0x40c640
  40c62b:	c7 05 e4 34 41 00 16 	mov    DWORD PTR ds:0x4134e4,0x16
  40c632:	00 00 00 
  40c635:	89 1d e8 34 41 00    	mov    DWORD PTR ds:0x4134e8,ebx
  40c63b:	e9 25 02 00 00       	jmp    0x40c865
  40c640:	c7 45 f4 00 00 00 c0 	mov    DWORD PTR [ebp-0xc],0xc0000000
  40c647:	eb 10                	jmp    0x40c659
  40c649:	c7 45 f4 00 00 00 40 	mov    DWORD PTR [ebp-0xc],0x40000000
  40c650:	eb 07                	jmp    0x40c659
  40c652:	c7 45 f4 00 00 00 80 	mov    DWORD PTR [ebp-0xc],0x80000000
  40c659:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40c65c:	83 f8 10             	cmp    eax,0x10
  40c65f:	74 26                	je     0x40c687
  40c661:	83 f8 20             	cmp    eax,0x20
  40c664:	74 18                	je     0x40c67e
  40c666:	83 f8 30             	cmp    eax,0x30
  40c669:	74 0a                	je     0x40c675
  40c66b:	83 f8 40             	cmp    eax,0x40
  40c66e:	75 bb                	jne    0x40c62b
  40c670:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
  40c673:	eb 15                	jmp    0x40c68a
  40c675:	c7 45 f0 02 00 00 00 	mov    DWORD PTR [ebp-0x10],0x2
  40c67c:	eb 0c                	jmp    0x40c68a
  40c67e:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
  40c685:	eb 03                	jmp    0x40c68a
  40c687:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
  40c68a:	ba 00 07 00 00       	mov    edx,0x700
  40c68f:	b8 00 04 00 00       	mov    eax,0x400
  40c694:	23 ca                	and    ecx,edx
  40c696:	bf 00 01 00 00       	mov    edi,0x100
  40c69b:	3b c8                	cmp    ecx,eax
  40c69d:	7f 35                	jg     0x40c6d4
  40c69f:	74 2e                	je     0x40c6cf
  40c6a1:	3b cb                	cmp    ecx,ebx
  40c6a3:	74 2a                	je     0x40c6cf
  40c6a5:	3b cf                	cmp    ecx,edi
  40c6a7:	74 1d                	je     0x40c6c6
  40c6a9:	81 f9 00 02 00 00    	cmp    ecx,0x200
  40c6af:	74 3c                	je     0x40c6ed
  40c6b1:	81 f9 00 03 00 00    	cmp    ecx,0x300
  40c6b7:	0f 85 6e ff ff ff    	jne    0x40c62b
  40c6bd:	c7 45 f8 02 00 00 00 	mov    DWORD PTR [ebp-0x8],0x2
  40c6c4:	eb 37                	jmp    0x40c6fd
  40c6c6:	c7 45 f8 04 00 00 00 	mov    DWORD PTR [ebp-0x8],0x4
  40c6cd:	eb 2e                	jmp    0x40c6fd
  40c6cf:	89 75 f8             	mov    DWORD PTR [ebp-0x8],esi
  40c6d2:	eb 29                	jmp    0x40c6fd
  40c6d4:	81 f9 00 05 00 00    	cmp    ecx,0x500
  40c6da:	74 1a                	je     0x40c6f6
  40c6dc:	81 f9 00 06 00 00    	cmp    ecx,0x600
  40c6e2:	74 09                	je     0x40c6ed
  40c6e4:	3b ca                	cmp    ecx,edx
  40c6e6:	74 0e                	je     0x40c6f6
  40c6e8:	e9 3e ff ff ff       	jmp    0x40c62b
  40c6ed:	c7 45 f8 05 00 00 00 	mov    DWORD PTR [ebp-0x8],0x5
  40c6f4:	eb 07                	jmp    0x40c6fd
  40c6f6:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
  40c6fd:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  40c700:	be 80 00 00 00       	mov    esi,0x80
  40c705:	85 c7                	test   edi,eax
  40c707:	74 13                	je     0x40c71c
  40c709:	8b 0d ec 34 41 00    	mov    ecx,DWORD PTR ds:0x4134ec
  40c70f:	f7 d1                	not    ecx
  40c711:	23 4d 14             	and    ecx,DWORD PTR [ebp+0x14]
  40c714:	f6 c1 80             	test   cl,0x80
  40c717:	75 03                	jne    0x40c71c
  40c719:	6a 01                	push   0x1
  40c71b:	5e                   	pop    esi
  40c71c:	a8 40                	test   al,0x40
  40c71e:	74 0a                	je     0x40c72a
  40c720:	81 ce 00 00 00 04    	or     esi,0x4000000
  40c726:	80 4d f6 01          	or     BYTE PTR [ebp-0xa],0x1
  40c72a:	f6 c4 10             	test   ah,0x10
  40c72d:	74 02                	je     0x40c731
  40c72f:	0b f7                	or     esi,edi
  40c731:	a8 20                	test   al,0x20
  40c733:	74 08                	je     0x40c73d
  40c735:	81 ce 00 00 00 08    	or     esi,0x8000000
  40c73b:	eb 0a                	jmp    0x40c747
  40c73d:	a8 10                	test   al,0x10
  40c73f:	74 06                	je     0x40c747
  40c741:	81 ce 00 00 00 10    	or     esi,0x10000000
  40c747:	e8 f8 09 00 00       	call   0x40d144
  40c74c:	8b d8                	mov    ebx,eax
  40c74e:	83 cf ff             	or     edi,0xffffffff
  40c751:	3b df                	cmp    ebx,edi
  40c753:	75 13                	jne    0x40c768
  40c755:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40c75c:	c7 05 e4 34 41 00 18 	mov    DWORD PTR ds:0x4134e4,0x18
  40c763:	00 00 00 
  40c766:	eb 3e                	jmp    0x40c7a6
  40c768:	6a 00                	push   0x0
  40c76a:	56                   	push   esi
  40c76b:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40c76e:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40c771:	50                   	push   eax
  40c772:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  40c775:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  40c778:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40c77b:	ff 15 04 02 41 00    	call   DWORD PTR ds:0x410204
  40c781:	8b f0                	mov    esi,eax
  40c783:	3b f7                	cmp    esi,edi
  40c785:	74 12                	je     0x40c799
  40c787:	56                   	push   esi
  40c788:	ff 15 08 02 41 00    	call   DWORD PTR ds:0x410208
  40c78e:	85 c0                	test   eax,eax
  40c790:	75 1b                	jne    0x40c7ad
  40c792:	56                   	push   esi
  40c793:	ff 15 10 02 41 00    	call   DWORD PTR ds:0x410210
  40c799:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40c79f:	50                   	push   eax
  40c7a0:	e8 f3 02 00 00       	call   0x40ca98
  40c7a5:	59                   	pop    ecx
  40c7a6:	8b c7                	mov    eax,edi
  40c7a8:	e9 d6 00 00 00       	jmp    0x40c883
  40c7ad:	83 f8 02             	cmp    eax,0x2
  40c7b0:	75 06                	jne    0x40c7b8
  40c7b2:	80 4d ff 40          	or     BYTE PTR [ebp-0x1],0x40
  40c7b6:	eb 09                	jmp    0x40c7c1
  40c7b8:	83 f8 03             	cmp    eax,0x3
  40c7bb:	75 04                	jne    0x40c7c1
  40c7bd:	80 4d ff 08          	or     BYTE PTR [ebp-0x1],0x8
  40c7c1:	56                   	push   esi
  40c7c2:	53                   	push   ebx
  40c7c3:	e8 11 0a 00 00       	call   0x40d1d9
  40c7c8:	59                   	pop    ecx
  40c7c9:	8a 45 ff             	mov    al,BYTE PTR [ebp-0x1]
  40c7cc:	59                   	pop    ecx
  40c7cd:	8b f3                	mov    esi,ebx
  40c7cf:	8b cb                	mov    ecx,ebx
  40c7d1:	0c 01                	or     al,0x1
  40c7d3:	c1 f9 05             	sar    ecx,0x5
  40c7d6:	83 e6 1f             	and    esi,0x1f
  40c7d9:	88 45 0b             	mov    BYTE PTR [ebp+0xb],al
  40c7dc:	8d 3c 8d 00 3e 41 00 	lea    edi,[ecx*4+0x413e00]
  40c7e3:	c1 e6 03             	shl    esi,0x3
  40c7e6:	8b 0f                	mov    ecx,DWORD PTR [edi]
  40c7e8:	80 65 0b 48          	and    BYTE PTR [ebp+0xb],0x48
  40c7ec:	88 44 31 04          	mov    BYTE PTR [ecx+esi*1+0x4],al
  40c7f0:	75 78                	jne    0x40c86a
  40c7f2:	a8 80                	test   al,0x80
  40c7f4:	74 74                	je     0x40c86a
  40c7f6:	f6 45 0c 02          	test   BYTE PTR [ebp+0xc],0x2
  40c7fa:	74 6e                	je     0x40c86a
  40c7fc:	6a 02                	push   0x2
  40c7fe:	6a ff                	push   0xffffffff
  40c800:	53                   	push   ebx
  40c801:	e8 cf 0e 00 00       	call   0x40d6d5
  40c806:	83 c4 0c             	add    esp,0xc
  40c809:	83 f8 ff             	cmp    eax,0xffffffff
  40c80c:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  40c80f:	75 0e                	jne    0x40c81f
  40c811:	81 3d e8 34 41 00 83 	cmp    DWORD PTR ds:0x4134e8,0x83
  40c818:	00 00 00 
  40c81b:	74 4d                	je     0x40c86a
  40c81d:	eb 3f                	jmp    0x40c85e
  40c81f:	80 65 13 00          	and    BYTE PTR [ebp+0x13],0x0
  40c823:	8d 45 13             	lea    eax,[ebp+0x13]
  40c826:	6a 01                	push   0x1
  40c828:	50                   	push   eax
  40c829:	53                   	push   ebx
  40c82a:	e8 40 0f 00 00       	call   0x40d76f
  40c82f:	83 c4 0c             	add    esp,0xc
  40c832:	85 c0                	test   eax,eax
  40c834:	75 16                	jne    0x40c84c
  40c836:	80 7d 13 1a          	cmp    BYTE PTR [ebp+0x13],0x1a
  40c83a:	75 10                	jne    0x40c84c
  40c83c:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  40c83f:	53                   	push   ebx
  40c840:	e8 2d fc ff ff       	call   0x40c472
  40c845:	59                   	pop    ecx
  40c846:	83 f8 ff             	cmp    eax,0xffffffff
  40c849:	59                   	pop    ecx
  40c84a:	74 12                	je     0x40c85e
  40c84c:	6a 00                	push   0x0
  40c84e:	6a 00                	push   0x0
  40c850:	53                   	push   ebx
  40c851:	e8 7f 0e 00 00       	call   0x40d6d5
  40c856:	83 c4 0c             	add    esp,0xc
  40c859:	83 f8 ff             	cmp    eax,0xffffffff
  40c85c:	75 0c                	jne    0x40c86a
  40c85e:	53                   	push   ebx
  40c85f:	e8 5b fb ff ff       	call   0x40c3bf
  40c864:	59                   	pop    ecx
  40c865:	83 c8 ff             	or     eax,0xffffffff
  40c868:	eb 19                	jmp    0x40c883
  40c86a:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
  40c86e:	75 11                	jne    0x40c881
  40c870:	f6 45 0c 08          	test   BYTE PTR [ebp+0xc],0x8
  40c874:	74 0b                	je     0x40c881
  40c876:	8b 07                	mov    eax,DWORD PTR [edi]
  40c878:	80 4c 30 04 20       	or     BYTE PTR [eax+esi*1+0x4],0x20
  40c87d:	8d 44 30 04          	lea    eax,[eax+esi*1+0x4]
  40c881:	8b c3                	mov    eax,ebx
  40c883:	5f                   	pop    edi
  40c884:	5e                   	pop    esi
  40c885:	5b                   	pop    ebx
  40c886:	c9                   	leave
  40c887:	c3                   	ret
  40c888:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40c88c:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40c890:	ff 15 00 02 41 00    	call   DWORD PTR ds:0x410200
  40c896:	85 c0                	test   eax,eax
  40c898:	75 08                	jne    0x40c8a2
  40c89a:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40c8a0:	eb 02                	jmp    0x40c8a4
  40c8a2:	33 c0                	xor    eax,eax
  40c8a4:	85 c0                	test   eax,eax
  40c8a6:	74 0b                	je     0x40c8b3
  40c8a8:	50                   	push   eax
  40c8a9:	e8 ea 01 00 00       	call   0x40ca98
  40c8ae:	59                   	pop    ecx
  40c8af:	83 c8 ff             	or     eax,0xffffffff
  40c8b2:	c3                   	ret
  40c8b3:	33 c0                	xor    eax,eax
  40c8b5:	c3                   	ret
  40c8b6:	ff 35 5c 35 41 00    	push   DWORD PTR ds:0x41355c
  40c8bc:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40c8c0:	e8 03 00 00 00       	call   0x40c8c8
  40c8c5:	59                   	pop    ecx
  40c8c6:	59                   	pop    ecx
  40c8c7:	c3                   	ret
  40c8c8:	83 7c 24 04 e0       	cmp    DWORD PTR [esp+0x4],0xffffffe0
  40c8cd:	77 22                	ja     0x40c8f1
  40c8cf:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40c8d3:	e8 1c 00 00 00       	call   0x40c8f4
  40c8d8:	85 c0                	test   eax,eax
  40c8da:	59                   	pop    ecx
  40c8db:	75 16                	jne    0x40c8f3
  40c8dd:	39 44 24 08          	cmp    DWORD PTR [esp+0x8],eax
  40c8e1:	74 10                	je     0x40c8f3
  40c8e3:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40c8e7:	e8 79 10 00 00       	call   0x40d965
  40c8ec:	85 c0                	test   eax,eax
  40c8ee:	59                   	pop    ecx
  40c8ef:	75 de                	jne    0x40c8cf
  40c8f1:	33 c0                	xor    eax,eax
  40c8f3:	c3                   	ret
  40c8f4:	56                   	push   esi
  40c8f5:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40c8f9:	3b 35 ac 32 41 00    	cmp    esi,DWORD PTR ds:0x4132ac
  40c8ff:	77 0b                	ja     0x40c90c
  40c901:	56                   	push   esi
  40c902:	e8 49 14 00 00       	call   0x40dd50
  40c907:	85 c0                	test   eax,eax
  40c909:	59                   	pop    ecx
  40c90a:	75 1c                	jne    0x40c928
  40c90c:	85 f6                	test   esi,esi
  40c90e:	75 03                	jne    0x40c913
  40c910:	6a 01                	push   0x1
  40c912:	5e                   	pop    esi
  40c913:	83 c6 0f             	add    esi,0xf
  40c916:	83 e6 f0             	and    esi,0xfffffff0
  40c919:	56                   	push   esi
  40c91a:	6a 00                	push   0x0
  40c91c:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40c922:	ff 15 fc 01 41 00    	call   DWORD PTR ds:0x4101fc
  40c928:	5e                   	pop    esi
  40c929:	c3                   	ret
  40c92a:	56                   	push   esi
  40c92b:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40c92f:	85 f6                	test   esi,esi
  40c931:	74 24                	je     0x40c957
  40c933:	56                   	push   esi
  40c934:	e8 c1 10 00 00       	call   0x40d9fa
  40c939:	59                   	pop    ecx
  40c93a:	85 c0                	test   eax,eax
  40c93c:	56                   	push   esi
  40c93d:	74 0a                	je     0x40c949
  40c93f:	50                   	push   eax
  40c940:	e8 e0 10 00 00       	call   0x40da25
  40c945:	59                   	pop    ecx
  40c946:	59                   	pop    ecx
  40c947:	5e                   	pop    esi
  40c948:	c3                   	ret
  40c949:	6a 00                	push   0x0
  40c94b:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40c951:	ff 15 f8 01 41 00    	call   DWORD PTR ds:0x4101f8
  40c957:	5e                   	pop    esi
  40c958:	c3                   	ret
  40c959:	55                   	push   ebp
  40c95a:	8b ec                	mov    ebp,esp
  40c95c:	6a ff                	push   0xffffffff
  40c95e:	68 e8 07 41 00       	push   0x4107e8
  40c963:	68 14 e9 40 00       	push   0x40e914
  40c968:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40c96e:	50                   	push   eax
  40c96f:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40c976:	83 ec 58             	sub    esp,0x58
  40c979:	53                   	push   ebx
  40c97a:	56                   	push   esi
  40c97b:	57                   	push   edi
  40c97c:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  40c97f:	ff 15 e8 01 41 00    	call   DWORD PTR ds:0x4101e8
  40c985:	33 d2                	xor    edx,edx
  40c987:	8a d4                	mov    dl,ah
  40c989:	89 15 fc 34 41 00    	mov    DWORD PTR ds:0x4134fc,edx
  40c98f:	8b c8                	mov    ecx,eax
  40c991:	81 e1 ff 00 00 00    	and    ecx,0xff
  40c997:	89 0d f8 34 41 00    	mov    DWORD PTR ds:0x4134f8,ecx
  40c99d:	c1 e1 08             	shl    ecx,0x8
  40c9a0:	03 ca                	add    ecx,edx
  40c9a2:	89 0d f4 34 41 00    	mov    DWORD PTR ds:0x4134f4,ecx
  40c9a8:	c1 e8 10             	shr    eax,0x10
  40c9ab:	a3 f0 34 41 00       	mov    ds:0x4134f0,eax
  40c9b0:	33 f6                	xor    esi,esi
  40c9b2:	56                   	push   esi
  40c9b3:	e8 c8 0f 00 00       	call   0x40d980
  40c9b8:	59                   	pop    ecx
  40c9b9:	85 c0                	test   eax,eax
  40c9bb:	75 08                	jne    0x40c9c5
  40c9bd:	6a 1c                	push   0x1c
  40c9bf:	e8 b0 00 00 00       	call   0x40ca74
  40c9c4:	59                   	pop    ecx
  40c9c5:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
  40c9c8:	e8 3a 09 00 00       	call   0x40d307
  40c9cd:	ff 15 ec 01 41 00    	call   DWORD PTR ds:0x4101ec
  40c9d3:	a3 18 3f 41 00       	mov    ds:0x413f18,eax
  40c9d8:	e8 0a 1d 00 00       	call   0x40e6e7
  40c9dd:	a3 d8 34 41 00       	mov    ds:0x4134d8,eax
  40c9e2:	e8 b3 1a 00 00       	call   0x40e49a
  40c9e7:	e8 f5 19 00 00       	call   0x40e3e1
  40c9ec:	e8 7f 02 00 00       	call   0x40cc70
  40c9f1:	89 75 d0             	mov    DWORD PTR [ebp-0x30],esi
  40c9f4:	8d 45 a4             	lea    eax,[ebp-0x5c]
  40c9f7:	50                   	push   eax
  40c9f8:	ff 15 f0 01 41 00    	call   DWORD PTR ds:0x4101f0
  40c9fe:	e8 86 19 00 00       	call   0x40e389
  40ca03:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
  40ca06:	f6 45 d0 01          	test   BYTE PTR [ebp-0x30],0x1
  40ca0a:	74 06                	je     0x40ca12
  40ca0c:	0f b7 45 d4          	movzx  eax,WORD PTR [ebp-0x2c]
  40ca10:	eb 03                	jmp    0x40ca15
  40ca12:	6a 0a                	push   0xa
  40ca14:	58                   	pop    eax
  40ca15:	50                   	push   eax
  40ca16:	ff 75 9c             	push   DWORD PTR [ebp-0x64]
  40ca19:	56                   	push   esi
  40ca1a:	56                   	push   esi
  40ca1b:	ff 15 f4 01 41 00    	call   DWORD PTR ds:0x4101f4
  40ca21:	50                   	push   eax
  40ca22:	e8 d9 45 ff ff       	call   0x401000
  40ca27:	89 45 a0             	mov    DWORD PTR [ebp-0x60],eax
  40ca2a:	50                   	push   eax
  40ca2b:	e8 6d 02 00 00       	call   0x40cc9d
  40ca30:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  40ca33:	8b 08                	mov    ecx,DWORD PTR [eax]
  40ca35:	8b 09                	mov    ecx,DWORD PTR [ecx]
  40ca37:	89 4d 98             	mov    DWORD PTR [ebp-0x68],ecx
  40ca3a:	50                   	push   eax
  40ca3b:	51                   	push   ecx
  40ca3c:	e8 c4 17 00 00       	call   0x40e205
  40ca41:	59                   	pop    ecx
  40ca42:	59                   	pop    ecx
  40ca43:	c3                   	ret
  40ca44:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  40ca47:	ff 75 98             	push   DWORD PTR [ebp-0x68]
  40ca4a:	e8 5f 02 00 00       	call   0x40ccae
  40ca4f:	83 3d e0 34 41 00 01 	cmp    DWORD PTR ds:0x4134e0,0x1
  40ca56:	75 05                	jne    0x40ca5d
  40ca58:	e8 8f 1f 00 00       	call   0x40e9ec
  40ca5d:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40ca61:	e8 bf 1f 00 00       	call   0x40ea25
  40ca66:	68 ff 00 00 00       	push   0xff
  40ca6b:	ff 15 30 31 41 00    	call   DWORD PTR ds:0x413130
  40ca71:	59                   	pop    ecx
  40ca72:	59                   	pop    ecx
  40ca73:	c3                   	ret
  40ca74:	83 3d e0 34 41 00 01 	cmp    DWORD PTR ds:0x4134e0,0x1
  40ca7b:	75 05                	jne    0x40ca82
  40ca7d:	e8 6a 1f 00 00       	call   0x40e9ec
  40ca82:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40ca86:	e8 9a 1f 00 00       	call   0x40ea25
  40ca8b:	59                   	pop    ecx
  40ca8c:	68 ff 00 00 00       	push   0xff
  40ca91:	ff 15 e4 01 41 00    	call   DWORD PTR ds:0x4101e4
  40ca97:	c3                   	ret
  40ca98:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40ca9c:	33 d2                	xor    edx,edx
  40ca9e:	89 0d e8 34 41 00    	mov    DWORD PTR ds:0x4134e8,ecx
  40caa4:	b8 38 31 41 00       	mov    eax,0x413138
  40caa9:	3b 08                	cmp    ecx,DWORD PTR [eax]
  40caab:	74 20                	je     0x40cacd
  40caad:	83 c0 08             	add    eax,0x8
  40cab0:	42                   	inc    edx
  40cab1:	3d a0 32 41 00       	cmp    eax,0x4132a0
  40cab6:	7c f1                	jl     0x40caa9
  40cab8:	83 f9 13             	cmp    ecx,0x13
  40cabb:	72 1d                	jb     0x40cada
  40cabd:	83 f9 24             	cmp    ecx,0x24
  40cac0:	77 18                	ja     0x40cada
  40cac2:	c7 05 e4 34 41 00 0d 	mov    DWORD PTR ds:0x4134e4,0xd
  40cac9:	00 00 00 
  40cacc:	c3                   	ret
  40cacd:	8b 04 d5 3c 31 41 00 	mov    eax,DWORD PTR [edx*8+0x41313c]
  40cad4:	a3 e4 34 41 00       	mov    ds:0x4134e4,eax
  40cad9:	c3                   	ret
  40cada:	81 f9 bc 00 00 00    	cmp    ecx,0xbc
  40cae0:	72 12                	jb     0x40caf4
  40cae2:	81 f9 ca 00 00 00    	cmp    ecx,0xca
  40cae8:	c7 05 e4 34 41 00 08 	mov    DWORD PTR ds:0x4134e4,0x8
  40caef:	00 00 00 
  40caf2:	76 0a                	jbe    0x40cafe
  40caf4:	c7 05 e4 34 41 00 16 	mov    DWORD PTR ds:0x4134e4,0x16
  40cafb:	00 00 00 
  40cafe:	c3                   	ret
  40caff:	55                   	push   ebp
  40cb00:	8b ec                	mov    ebp,esp
  40cb02:	51                   	push   ecx
  40cb03:	53                   	push   ebx
  40cb04:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40cb07:	81 fb ff 00 00 00    	cmp    ebx,0xff
  40cb0d:	76 51                	jbe    0x40cb60
  40cb0f:	8b c3                	mov    eax,ebx
  40cb11:	88 5d 0b             	mov    BYTE PTR [ebp+0xb],bl
  40cb14:	c1 e8 08             	shr    eax,0x8
  40cb17:	88 45 0a             	mov    BYTE PTR [ebp+0xa],al
  40cb1a:	0f b6 c0             	movzx  eax,al
  40cb1d:	f6 80 c1 3c 41 00 04 	test   BYTE PTR [eax+0x413cc1],0x4
  40cb24:	74 4f                	je     0x40cb75
  40cb26:	6a 01                	push   0x1
  40cb28:	8d 45 fc             	lea    eax,[ebp-0x4]
  40cb2b:	ff 35 a0 3b 41 00    	push   DWORD PTR ds:0x413ba0
  40cb31:	6a 02                	push   0x2
  40cb33:	50                   	push   eax
  40cb34:	8d 45 0a             	lea    eax,[ebp+0xa]
  40cb37:	6a 02                	push   0x2
  40cb39:	50                   	push   eax
  40cb3a:	68 00 02 00 00       	push   0x200
  40cb3f:	ff 35 c4 3d 41 00    	push   DWORD PTR ds:0x413dc4
  40cb45:	e8 28 02 00 00       	call   0x40cd72
  40cb4a:	83 c4 20             	add    esp,0x20
  40cb4d:	85 c0                	test   eax,eax
  40cb4f:	74 24                	je     0x40cb75
  40cb51:	0f b6 45 fc          	movzx  eax,BYTE PTR [ebp-0x4]
  40cb55:	0f b6 4d fd          	movzx  ecx,BYTE PTR [ebp-0x3]
  40cb59:	c1 e0 08             	shl    eax,0x8
  40cb5c:	03 c1                	add    eax,ecx
  40cb5e:	eb 17                	jmp    0x40cb77
  40cb60:	8a 83 c1 3c 41 00    	mov    al,BYTE PTR [ebx+0x413cc1]
  40cb66:	24 20                	and    al,0x20
  40cb68:	3c 20                	cmp    al,0x20
  40cb6a:	75 09                	jne    0x40cb75
  40cb6c:	0f b6 83 c0 3b 41 00 	movzx  eax,BYTE PTR [ebx+0x413bc0]
  40cb73:	eb 02                	jmp    0x40cb77
  40cb75:	8b c3                	mov    eax,ebx
  40cb77:	5b                   	pop    ebx
  40cb78:	c9                   	leave
  40cb79:	c3                   	ret
  40cb7a:	cc                   	int3
  40cb7b:	cc                   	int3
  40cb7c:	cc                   	int3
  40cb7d:	cc                   	int3
  40cb7e:	cc                   	int3
  40cb7f:	cc                   	int3
  40cb80:	57                   	push   edi
  40cb81:	8b 7c 24 08          	mov    edi,DWORD PTR [esp+0x8]
  40cb85:	eb 6a                	jmp    0x40cbf1
  40cb87:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
  40cb8e:	8b ff                	mov    edi,edi
  40cb90:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40cb94:	57                   	push   edi
  40cb95:	f7 c1 03 00 00 00    	test   ecx,0x3
  40cb9b:	74 0f                	je     0x40cbac
  40cb9d:	8a 01                	mov    al,BYTE PTR [ecx]
  40cb9f:	41                   	inc    ecx
  40cba0:	84 c0                	test   al,al
  40cba2:	74 3b                	je     0x40cbdf
  40cba4:	f7 c1 03 00 00 00    	test   ecx,0x3
  40cbaa:	75 f1                	jne    0x40cb9d
  40cbac:	8b 01                	mov    eax,DWORD PTR [ecx]
  40cbae:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  40cbb3:	03 d0                	add    edx,eax
  40cbb5:	83 f0 ff             	xor    eax,0xffffffff
  40cbb8:	33 c2                	xor    eax,edx
  40cbba:	83 c1 04             	add    ecx,0x4
  40cbbd:	a9 00 01 01 81       	test   eax,0x81010100
  40cbc2:	74 e8                	je     0x40cbac
  40cbc4:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
  40cbc7:	84 c0                	test   al,al
  40cbc9:	74 23                	je     0x40cbee
  40cbcb:	84 e4                	test   ah,ah
  40cbcd:	74 1a                	je     0x40cbe9
  40cbcf:	a9 00 00 ff 00       	test   eax,0xff0000
  40cbd4:	74 0e                	je     0x40cbe4
  40cbd6:	a9 00 00 00 ff       	test   eax,0xff000000
  40cbdb:	74 02                	je     0x40cbdf
  40cbdd:	eb cd                	jmp    0x40cbac
  40cbdf:	8d 79 ff             	lea    edi,[ecx-0x1]
  40cbe2:	eb 0d                	jmp    0x40cbf1
  40cbe4:	8d 79 fe             	lea    edi,[ecx-0x2]
  40cbe7:	eb 08                	jmp    0x40cbf1
  40cbe9:	8d 79 fd             	lea    edi,[ecx-0x3]
  40cbec:	eb 03                	jmp    0x40cbf1
  40cbee:	8d 79 fc             	lea    edi,[ecx-0x4]
  40cbf1:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  40cbf5:	f7 c1 03 00 00 00    	test   ecx,0x3
  40cbfb:	74 19                	je     0x40cc16
  40cbfd:	8a 11                	mov    dl,BYTE PTR [ecx]
  40cbff:	41                   	inc    ecx
  40cc00:	84 d2                	test   dl,dl
  40cc02:	74 64                	je     0x40cc68
  40cc04:	88 17                	mov    BYTE PTR [edi],dl
  40cc06:	47                   	inc    edi
  40cc07:	f7 c1 03 00 00 00    	test   ecx,0x3
  40cc0d:	75 ee                	jne    0x40cbfd
  40cc0f:	eb 05                	jmp    0x40cc16
  40cc11:	89 17                	mov    DWORD PTR [edi],edx
  40cc13:	83 c7 04             	add    edi,0x4
  40cc16:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  40cc1b:	8b 01                	mov    eax,DWORD PTR [ecx]
  40cc1d:	03 d0                	add    edx,eax
  40cc1f:	83 f0 ff             	xor    eax,0xffffffff
  40cc22:	33 c2                	xor    eax,edx
  40cc24:	8b 11                	mov    edx,DWORD PTR [ecx]
  40cc26:	83 c1 04             	add    ecx,0x4
  40cc29:	a9 00 01 01 81       	test   eax,0x81010100
  40cc2e:	74 e1                	je     0x40cc11
  40cc30:	84 d2                	test   dl,dl
  40cc32:	74 34                	je     0x40cc68
  40cc34:	84 f6                	test   dh,dh
  40cc36:	74 27                	je     0x40cc5f
  40cc38:	f7 c2 00 00 ff 00    	test   edx,0xff0000
  40cc3e:	74 12                	je     0x40cc52
  40cc40:	f7 c2 00 00 00 ff    	test   edx,0xff000000
  40cc46:	74 02                	je     0x40cc4a
  40cc48:	eb c7                	jmp    0x40cc11
  40cc4a:	89 17                	mov    DWORD PTR [edi],edx
  40cc4c:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40cc50:	5f                   	pop    edi
  40cc51:	c3                   	ret
  40cc52:	66 89 17             	mov    WORD PTR [edi],dx
  40cc55:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40cc59:	c6 47 02 00          	mov    BYTE PTR [edi+0x2],0x0
  40cc5d:	5f                   	pop    edi
  40cc5e:	c3                   	ret
  40cc5f:	66 89 17             	mov    WORD PTR [edi],dx
  40cc62:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40cc66:	5f                   	pop    edi
  40cc67:	c3                   	ret
  40cc68:	88 17                	mov    BYTE PTR [edi],dl
  40cc6a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40cc6e:	5f                   	pop    edi
  40cc6f:	c3                   	ret
  40cc70:	a1 14 3f 41 00       	mov    eax,ds:0x413f14
  40cc75:	85 c0                	test   eax,eax
  40cc77:	74 02                	je     0x40cc7b
  40cc79:	ff d0                	call   eax
  40cc7b:	68 10 20 41 00       	push   0x412010
  40cc80:	68 08 20 41 00       	push   0x412008
  40cc85:	e8 ce 00 00 00       	call   0x40cd58
  40cc8a:	68 04 20 41 00       	push   0x412004
  40cc8f:	68 00 20 41 00       	push   0x412000
  40cc94:	e8 bf 00 00 00       	call   0x40cd58
  40cc99:	83 c4 10             	add    esp,0x10
  40cc9c:	c3                   	ret
  40cc9d:	6a 00                	push   0x0
  40cc9f:	6a 00                	push   0x0
  40cca1:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  40cca5:	e8 15 00 00 00       	call   0x40ccbf
  40ccaa:	83 c4 0c             	add    esp,0xc
  40ccad:	c3                   	ret
  40ccae:	6a 00                	push   0x0
  40ccb0:	6a 01                	push   0x1
  40ccb2:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  40ccb6:	e8 04 00 00 00       	call   0x40ccbf
  40ccbb:	83 c4 0c             	add    esp,0xc
  40ccbe:	c3                   	ret
  40ccbf:	57                   	push   edi
  40ccc0:	6a 01                	push   0x1
  40ccc2:	5f                   	pop    edi
  40ccc3:	39 3d 2c 35 41 00    	cmp    DWORD PTR ds:0x41352c,edi
  40ccc9:	75 11                	jne    0x40ccdc
  40cccb:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40cccf:	ff 15 dc 01 41 00    	call   DWORD PTR ds:0x4101dc
  40ccd5:	50                   	push   eax
  40ccd6:	ff 15 e0 01 41 00    	call   DWORD PTR ds:0x4101e0
  40ccdc:	83 7c 24 0c 00       	cmp    DWORD PTR [esp+0xc],0x0
  40cce1:	53                   	push   ebx
  40cce2:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  40cce6:	89 3d 28 35 41 00    	mov    DWORD PTR ds:0x413528,edi
  40ccec:	88 1d 24 35 41 00    	mov    BYTE PTR ds:0x413524,bl
  40ccf2:	75 3c                	jne    0x40cd30
  40ccf4:	a1 10 3f 41 00       	mov    eax,ds:0x413f10
  40ccf9:	85 c0                	test   eax,eax
  40ccfb:	74 22                	je     0x40cd1f
  40ccfd:	8b 0d 0c 3f 41 00    	mov    ecx,DWORD PTR ds:0x413f0c
  40cd03:	56                   	push   esi
  40cd04:	8d 71 fc             	lea    esi,[ecx-0x4]
  40cd07:	3b f0                	cmp    esi,eax
  40cd09:	72 13                	jb     0x40cd1e
  40cd0b:	8b 06                	mov    eax,DWORD PTR [esi]
  40cd0d:	85 c0                	test   eax,eax
  40cd0f:	74 02                	je     0x40cd13
  40cd11:	ff d0                	call   eax
  40cd13:	83 ee 04             	sub    esi,0x4
  40cd16:	3b 35 10 3f 41 00    	cmp    esi,DWORD PTR ds:0x413f10
  40cd1c:	73 ed                	jae    0x40cd0b
  40cd1e:	5e                   	pop    esi
  40cd1f:	68 18 20 41 00       	push   0x412018
  40cd24:	68 14 20 41 00       	push   0x412014
  40cd29:	e8 2a 00 00 00       	call   0x40cd58
  40cd2e:	59                   	pop    ecx
  40cd2f:	59                   	pop    ecx
  40cd30:	68 20 20 41 00       	push   0x412020
  40cd35:	68 1c 20 41 00       	push   0x41201c
  40cd3a:	e8 19 00 00 00       	call   0x40cd58
  40cd3f:	59                   	pop    ecx
  40cd40:	59                   	pop    ecx
  40cd41:	85 db                	test   ebx,ebx
  40cd43:	5b                   	pop    ebx
  40cd44:	75 10                	jne    0x40cd56
  40cd46:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40cd4a:	89 3d 2c 35 41 00    	mov    DWORD PTR ds:0x41352c,edi
  40cd50:	ff 15 e4 01 41 00    	call   DWORD PTR ds:0x4101e4
  40cd56:	5f                   	pop    edi
  40cd57:	c3                   	ret
  40cd58:	56                   	push   esi
  40cd59:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40cd5d:	3b 74 24 0c          	cmp    esi,DWORD PTR [esp+0xc]
  40cd61:	73 0d                	jae    0x40cd70
  40cd63:	8b 06                	mov    eax,DWORD PTR [esi]
  40cd65:	85 c0                	test   eax,eax
  40cd67:	74 02                	je     0x40cd6b
  40cd69:	ff d0                	call   eax
  40cd6b:	83 c6 04             	add    esi,0x4
  40cd6e:	eb ed                	jmp    0x40cd5d
  40cd70:	5e                   	pop    esi
  40cd71:	c3                   	ret
  40cd72:	55                   	push   ebp
  40cd73:	8b ec                	mov    ebp,esp
  40cd75:	6a ff                	push   0xffffffff
  40cd77:	68 00 08 41 00       	push   0x410800
  40cd7c:	68 14 e9 40 00       	push   0x40e914
  40cd81:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40cd87:	50                   	push   eax
  40cd88:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40cd8f:	83 ec 1c             	sub    esp,0x1c
  40cd92:	53                   	push   ebx
  40cd93:	56                   	push   esi
  40cd94:	57                   	push   edi
  40cd95:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  40cd98:	33 ff                	xor    edi,edi
  40cd9a:	39 3d 30 35 41 00    	cmp    DWORD PTR ds:0x413530,edi
  40cda0:	75 46                	jne    0x40cde8
  40cda2:	57                   	push   edi
  40cda3:	57                   	push   edi
  40cda4:	6a 01                	push   0x1
  40cda6:	5b                   	pop    ebx
  40cda7:	53                   	push   ebx
  40cda8:	68 f8 07 41 00       	push   0x4107f8
  40cdad:	be 00 01 00 00       	mov    esi,0x100
  40cdb2:	56                   	push   esi
  40cdb3:	57                   	push   edi
  40cdb4:	ff 15 d0 01 41 00    	call   DWORD PTR ds:0x4101d0
  40cdba:	85 c0                	test   eax,eax
  40cdbc:	74 08                	je     0x40cdc6
  40cdbe:	89 1d 30 35 41 00    	mov    DWORD PTR ds:0x413530,ebx
  40cdc4:	eb 22                	jmp    0x40cde8
  40cdc6:	57                   	push   edi
  40cdc7:	57                   	push   edi
  40cdc8:	53                   	push   ebx
  40cdc9:	68 f4 07 41 00       	push   0x4107f4
  40cdce:	56                   	push   esi
  40cdcf:	57                   	push   edi
  40cdd0:	ff 15 d4 01 41 00    	call   DWORD PTR ds:0x4101d4
  40cdd6:	85 c0                	test   eax,eax
  40cdd8:	0f 84 22 01 00 00    	je     0x40cf00
  40cdde:	c7 05 30 35 41 00 02 	mov    DWORD PTR ds:0x413530,0x2
  40cde5:	00 00 00 
  40cde8:	39 7d 14             	cmp    DWORD PTR [ebp+0x14],edi
  40cdeb:	7e 10                	jle    0x40cdfd
  40cded:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40cdf0:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40cdf3:	e8 9e 01 00 00       	call   0x40cf96
  40cdf8:	59                   	pop    ecx
  40cdf9:	59                   	pop    ecx
  40cdfa:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
  40cdfd:	a1 30 35 41 00       	mov    eax,ds:0x413530
  40ce02:	83 f8 02             	cmp    eax,0x2
  40ce05:	75 1d                	jne    0x40ce24
  40ce07:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  40ce0a:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  40ce0d:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40ce10:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40ce13:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40ce16:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40ce19:	ff 15 d4 01 41 00    	call   DWORD PTR ds:0x4101d4
  40ce1f:	e9 de 00 00 00       	jmp    0x40cf02
  40ce24:	83 f8 01             	cmp    eax,0x1
  40ce27:	0f 85 d3 00 00 00    	jne    0x40cf00
  40ce2d:	39 7d 20             	cmp    DWORD PTR [ebp+0x20],edi
  40ce30:	75 08                	jne    0x40ce3a
  40ce32:	a1 4c 35 41 00       	mov    eax,ds:0x41354c
  40ce37:	89 45 20             	mov    DWORD PTR [ebp+0x20],eax
  40ce3a:	57                   	push   edi
  40ce3b:	57                   	push   edi
  40ce3c:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40ce3f:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40ce42:	8b 45 24             	mov    eax,DWORD PTR [ebp+0x24]
  40ce45:	f7 d8                	neg    eax
  40ce47:	1b c0                	sbb    eax,eax
  40ce49:	83 e0 08             	and    eax,0x8
  40ce4c:	40                   	inc    eax
  40ce4d:	50                   	push   eax
  40ce4e:	ff 75 20             	push   DWORD PTR [ebp+0x20]
  40ce51:	ff 15 3c 01 41 00    	call   DWORD PTR ds:0x41013c
  40ce57:	8b d8                	mov    ebx,eax
  40ce59:	89 5d e4             	mov    DWORD PTR [ebp-0x1c],ebx
  40ce5c:	3b df                	cmp    ebx,edi
  40ce5e:	0f 84 9c 00 00 00    	je     0x40cf00
  40ce64:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  40ce67:	8d 04 1b             	lea    eax,[ebx+ebx*1]
  40ce6a:	83 c0 03             	add    eax,0x3
  40ce6d:	24 fc                	and    al,0xfc
  40ce6f:	e8 1c f5 ff ff       	call   0x40c390
  40ce74:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  40ce77:	8b c4                	mov    eax,esp
  40ce79:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
  40ce7c:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  40ce80:	eb 13                	jmp    0x40ce95
  40ce82:	6a 01                	push   0x1
  40ce84:	58                   	pop    eax
  40ce85:	c3                   	ret
  40ce86:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  40ce89:	33 ff                	xor    edi,edi
  40ce8b:	89 7d dc             	mov    DWORD PTR [ebp-0x24],edi
  40ce8e:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  40ce92:	8b 5d e4             	mov    ebx,DWORD PTR [ebp-0x1c]
  40ce95:	39 7d dc             	cmp    DWORD PTR [ebp-0x24],edi
  40ce98:	74 66                	je     0x40cf00
  40ce9a:	53                   	push   ebx
  40ce9b:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  40ce9e:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40cea1:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40cea4:	6a 01                	push   0x1
  40cea6:	ff 75 20             	push   DWORD PTR [ebp+0x20]
  40cea9:	ff 15 3c 01 41 00    	call   DWORD PTR ds:0x41013c
  40ceaf:	85 c0                	test   eax,eax
  40ceb1:	74 4d                	je     0x40cf00
  40ceb3:	57                   	push   edi
  40ceb4:	57                   	push   edi
  40ceb5:	53                   	push   ebx
  40ceb6:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  40ceb9:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40cebc:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40cebf:	ff 15 d0 01 41 00    	call   DWORD PTR ds:0x4101d0
  40cec5:	8b f0                	mov    esi,eax
  40cec7:	89 75 d8             	mov    DWORD PTR [ebp-0x28],esi
  40ceca:	3b f7                	cmp    esi,edi
  40cecc:	74 32                	je     0x40cf00
  40cece:	f6 45 0d 04          	test   BYTE PTR [ebp+0xd],0x4
  40ced2:	74 40                	je     0x40cf14
  40ced4:	39 7d 1c             	cmp    DWORD PTR [ebp+0x1c],edi
  40ced7:	0f 84 b2 00 00 00    	je     0x40cf8f
  40cedd:	3b 75 1c             	cmp    esi,DWORD PTR [ebp+0x1c]
  40cee0:	7f 1e                	jg     0x40cf00
  40cee2:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  40cee5:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  40cee8:	53                   	push   ebx
  40cee9:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  40ceec:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40ceef:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40cef2:	ff 15 d0 01 41 00    	call   DWORD PTR ds:0x4101d0
  40cef8:	85 c0                	test   eax,eax
  40cefa:	0f 85 8f 00 00 00    	jne    0x40cf8f
  40cf00:	33 c0                	xor    eax,eax
  40cf02:	8d 65 c8             	lea    esp,[ebp-0x38]
  40cf05:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  40cf08:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40cf0f:	5f                   	pop    edi
  40cf10:	5e                   	pop    esi
  40cf11:	5b                   	pop    ebx
  40cf12:	c9                   	leave
  40cf13:	c3                   	ret
  40cf14:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  40cf1b:	8d 04 36             	lea    eax,[esi+esi*1]
  40cf1e:	83 c0 03             	add    eax,0x3
  40cf21:	24 fc                	and    al,0xfc
  40cf23:	e8 68 f4 ff ff       	call   0x40c390
  40cf28:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  40cf2b:	8b dc                	mov    ebx,esp
  40cf2d:	89 5d e0             	mov    DWORD PTR [ebp-0x20],ebx
  40cf30:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  40cf34:	eb 12                	jmp    0x40cf48
  40cf36:	6a 01                	push   0x1
  40cf38:	58                   	pop    eax
  40cf39:	c3                   	ret
  40cf3a:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  40cf3d:	33 ff                	xor    edi,edi
  40cf3f:	33 db                	xor    ebx,ebx
  40cf41:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  40cf45:	8b 75 d8             	mov    esi,DWORD PTR [ebp-0x28]
  40cf48:	3b df                	cmp    ebx,edi
  40cf4a:	74 b4                	je     0x40cf00
  40cf4c:	56                   	push   esi
  40cf4d:	53                   	push   ebx
  40cf4e:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  40cf51:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  40cf54:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40cf57:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40cf5a:	ff 15 d0 01 41 00    	call   DWORD PTR ds:0x4101d0
  40cf60:	85 c0                	test   eax,eax
  40cf62:	74 9c                	je     0x40cf00
  40cf64:	39 7d 1c             	cmp    DWORD PTR [ebp+0x1c],edi
  40cf67:	57                   	push   edi
  40cf68:	57                   	push   edi
  40cf69:	75 04                	jne    0x40cf6f
  40cf6b:	57                   	push   edi
  40cf6c:	57                   	push   edi
  40cf6d:	eb 06                	jmp    0x40cf75
  40cf6f:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  40cf72:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  40cf75:	56                   	push   esi
  40cf76:	53                   	push   ebx
  40cf77:	68 20 02 00 00       	push   0x220
  40cf7c:	ff 75 20             	push   DWORD PTR [ebp+0x20]
  40cf7f:	ff 15 d8 01 41 00    	call   DWORD PTR ds:0x4101d8
  40cf85:	8b f0                	mov    esi,eax
  40cf87:	3b f7                	cmp    esi,edi
  40cf89:	0f 84 71 ff ff ff    	je     0x40cf00
  40cf8f:	8b c6                	mov    eax,esi
  40cf91:	e9 6c ff ff ff       	jmp    0x40cf02
  40cf96:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  40cf9a:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40cf9e:	85 d2                	test   edx,edx
  40cfa0:	56                   	push   esi
  40cfa1:	8d 4a ff             	lea    ecx,[edx-0x1]
  40cfa4:	74 0d                	je     0x40cfb3
  40cfa6:	80 38 00             	cmp    BYTE PTR [eax],0x0
  40cfa9:	74 08                	je     0x40cfb3
  40cfab:	40                   	inc    eax
  40cfac:	8b f1                	mov    esi,ecx
  40cfae:	49                   	dec    ecx
  40cfaf:	85 f6                	test   esi,esi
  40cfb1:	75 f3                	jne    0x40cfa6
  40cfb3:	80 38 00             	cmp    BYTE PTR [eax],0x0
  40cfb6:	5e                   	pop    esi
  40cfb7:	75 05                	jne    0x40cfbe
  40cfb9:	2b 44 24 04          	sub    eax,DWORD PTR [esp+0x4]
  40cfbd:	c3                   	ret
  40cfbe:	8b c2                	mov    eax,edx
  40cfc0:	c3                   	ret
  40cfc1:	55                   	push   ebp
  40cfc2:	8b ec                	mov    ebp,esp
  40cfc4:	6a ff                	push   0xffffffff
  40cfc6:	68 18 08 41 00       	push   0x410818
  40cfcb:	68 14 e9 40 00       	push   0x40e914
  40cfd0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40cfd6:	50                   	push   eax
  40cfd7:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40cfde:	83 ec 18             	sub    esp,0x18
  40cfe1:	53                   	push   ebx
  40cfe2:	56                   	push   esi
  40cfe3:	57                   	push   edi
  40cfe4:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  40cfe7:	a1 54 35 41 00       	mov    eax,ds:0x413554
  40cfec:	33 db                	xor    ebx,ebx
  40cfee:	3b c3                	cmp    eax,ebx
  40cff0:	75 3e                	jne    0x40d030
  40cff2:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40cff5:	50                   	push   eax
  40cff6:	6a 01                	push   0x1
  40cff8:	5e                   	pop    esi
  40cff9:	56                   	push   esi
  40cffa:	68 f8 07 41 00       	push   0x4107f8
  40cfff:	56                   	push   esi
  40d000:	ff 15 c8 01 41 00    	call   DWORD PTR ds:0x4101c8
  40d006:	85 c0                	test   eax,eax
  40d008:	74 04                	je     0x40d00e
  40d00a:	8b c6                	mov    eax,esi
  40d00c:	eb 1d                	jmp    0x40d02b
  40d00e:	8d 45 e4             	lea    eax,[ebp-0x1c]
  40d011:	50                   	push   eax
  40d012:	56                   	push   esi
  40d013:	68 f4 07 41 00       	push   0x4107f4
  40d018:	56                   	push   esi
  40d019:	53                   	push   ebx
  40d01a:	ff 15 cc 01 41 00    	call   DWORD PTR ds:0x4101cc
  40d020:	85 c0                	test   eax,eax
  40d022:	0f 84 ce 00 00 00    	je     0x40d0f6
  40d028:	6a 02                	push   0x2
  40d02a:	58                   	pop    eax
  40d02b:	a3 54 35 41 00       	mov    ds:0x413554,eax
  40d030:	83 f8 02             	cmp    eax,0x2
  40d033:	75 24                	jne    0x40d059
  40d035:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
  40d038:	3b c3                	cmp    eax,ebx
  40d03a:	75 05                	jne    0x40d041
  40d03c:	a1 3c 35 41 00       	mov    eax,ds:0x41353c
  40d041:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40d044:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40d047:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40d04a:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40d04d:	50                   	push   eax
  40d04e:	ff 15 cc 01 41 00    	call   DWORD PTR ds:0x4101cc
  40d054:	e9 9f 00 00 00       	jmp    0x40d0f8
  40d059:	83 f8 01             	cmp    eax,0x1
  40d05c:	0f 85 94 00 00 00    	jne    0x40d0f6
  40d062:	39 5d 18             	cmp    DWORD PTR [ebp+0x18],ebx
  40d065:	75 08                	jne    0x40d06f
  40d067:	a1 4c 35 41 00       	mov    eax,ds:0x41354c
  40d06c:	89 45 18             	mov    DWORD PTR [ebp+0x18],eax
  40d06f:	53                   	push   ebx
  40d070:	53                   	push   ebx
  40d071:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40d074:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40d077:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  40d07a:	f7 d8                	neg    eax
  40d07c:	1b c0                	sbb    eax,eax
  40d07e:	83 e0 08             	and    eax,0x8
  40d081:	40                   	inc    eax
  40d082:	50                   	push   eax
  40d083:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  40d086:	ff 15 3c 01 41 00    	call   DWORD PTR ds:0x41013c
  40d08c:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
  40d08f:	3b c3                	cmp    eax,ebx
  40d091:	74 63                	je     0x40d0f6
  40d093:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  40d096:	8d 3c 00             	lea    edi,[eax+eax*1]
  40d099:	8b c7                	mov    eax,edi
  40d09b:	83 c0 03             	add    eax,0x3
  40d09e:	24 fc                	and    al,0xfc
  40d0a0:	e8 eb f2 ff ff       	call   0x40c390
  40d0a5:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  40d0a8:	8b f4                	mov    esi,esp
  40d0aa:	89 75 dc             	mov    DWORD PTR [ebp-0x24],esi
  40d0ad:	57                   	push   edi
  40d0ae:	53                   	push   ebx
  40d0af:	56                   	push   esi
  40d0b0:	e8 9b ef ff ff       	call   0x40c050
  40d0b5:	83 c4 0c             	add    esp,0xc
  40d0b8:	eb 0b                	jmp    0x40d0c5
  40d0ba:	6a 01                	push   0x1
  40d0bc:	58                   	pop    eax
  40d0bd:	c3                   	ret
  40d0be:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  40d0c1:	33 db                	xor    ebx,ebx
  40d0c3:	33 f6                	xor    esi,esi
  40d0c5:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  40d0c9:	3b f3                	cmp    esi,ebx
  40d0cb:	74 29                	je     0x40d0f6
  40d0cd:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  40d0d0:	56                   	push   esi
  40d0d1:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40d0d4:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40d0d7:	6a 01                	push   0x1
  40d0d9:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  40d0dc:	ff 15 3c 01 41 00    	call   DWORD PTR ds:0x41013c
  40d0e2:	3b c3                	cmp    eax,ebx
  40d0e4:	74 10                	je     0x40d0f6
  40d0e6:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40d0e9:	50                   	push   eax
  40d0ea:	56                   	push   esi
  40d0eb:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40d0ee:	ff 15 c8 01 41 00    	call   DWORD PTR ds:0x4101c8
  40d0f4:	eb 02                	jmp    0x40d0f8
  40d0f6:	33 c0                	xor    eax,eax
  40d0f8:	8d 65 cc             	lea    esp,[ebp-0x34]
  40d0fb:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  40d0fe:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40d105:	5f                   	pop    edi
  40d106:	5e                   	pop    esi
  40d107:	5b                   	pop    ebx
  40d108:	c9                   	leave
  40d109:	c3                   	ret
  40d10a:	cc                   	int3
  40d10b:	cc                   	int3
  40d10c:	cc                   	int3
  40d10d:	cc                   	int3
  40d10e:	cc                   	int3
  40d10f:	cc                   	int3
  40d110:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40d114:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40d118:	0b c8                	or     ecx,eax
  40d11a:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  40d11e:	75 09                	jne    0x40d129
  40d120:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40d124:	f7 e1                	mul    ecx
  40d126:	c2 10 00             	ret    0x10
  40d129:	53                   	push   ebx
  40d12a:	f7 e1                	mul    ecx
  40d12c:	8b d8                	mov    ebx,eax
  40d12e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40d132:	f7 64 24 14          	mul    DWORD PTR [esp+0x14]
  40d136:	03 d8                	add    ebx,eax
  40d138:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40d13c:	f7 e1                	mul    ecx
  40d13e:	03 d3                	add    edx,ebx
  40d140:	5b                   	pop    ebx
  40d141:	c2 10 00             	ret    0x10
  40d144:	53                   	push   ebx
  40d145:	56                   	push   esi
  40d146:	57                   	push   edi
  40d147:	83 cb ff             	or     ebx,0xffffffff
  40d14a:	33 ff                	xor    edi,edi
  40d14c:	33 f6                	xor    esi,esi
  40d14e:	b9 00 3e 41 00       	mov    ecx,0x413e00
  40d153:	8b 01                	mov    eax,DWORD PTR [ecx]
  40d155:	85 c0                	test   eax,eax
  40d157:	74 37                	je     0x40d190
  40d159:	8d 90 00 01 00 00    	lea    edx,[eax+0x100]
  40d15f:	3b c2                	cmp    eax,edx
  40d161:	73 1c                	jae    0x40d17f
  40d163:	f6 40 04 01          	test   BYTE PTR [eax+0x4],0x1
  40d167:	74 05                	je     0x40d16e
  40d169:	83 c0 08             	add    eax,0x8
  40d16c:	eb f1                	jmp    0x40d15f
  40d16e:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  40d171:	2b 01                	sub    eax,DWORD PTR [ecx]
  40d173:	c1 f8 03             	sar    eax,0x3
  40d176:	03 c6                	add    eax,esi
  40d178:	8b d8                	mov    ebx,eax
  40d17a:	83 fb ff             	cmp    ebx,0xffffffff
  40d17d:	75 54                	jne    0x40d1d3
  40d17f:	83 c1 04             	add    ecx,0x4
  40d182:	47                   	inc    edi
  40d183:	83 c6 20             	add    esi,0x20
  40d186:	81 f9 00 3f 41 00    	cmp    ecx,0x413f00
  40d18c:	7c c5                	jl     0x40d153
  40d18e:	eb 43                	jmp    0x40d1d3
  40d190:	be 00 01 00 00       	mov    esi,0x100
  40d195:	56                   	push   esi
  40d196:	e8 1b f7 ff ff       	call   0x40c8b6
  40d19b:	85 c0                	test   eax,eax
  40d19d:	59                   	pop    ecx
  40d19e:	74 33                	je     0x40d1d3
  40d1a0:	83 05 00 3f 41 00 20 	add    DWORD PTR ds:0x413f00,0x20
  40d1a7:	8d 0c bd 00 3e 41 00 	lea    ecx,[edi*4+0x413e00]
  40d1ae:	8d 90 00 01 00 00    	lea    edx,[eax+0x100]
  40d1b4:	89 01                	mov    DWORD PTR [ecx],eax
  40d1b6:	3b c2                	cmp    eax,edx
  40d1b8:	73 14                	jae    0x40d1ce
  40d1ba:	80 60 04 00          	and    BYTE PTR [eax+0x4],0x0
  40d1be:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  40d1c1:	c6 40 05 0a          	mov    BYTE PTR [eax+0x5],0xa
  40d1c5:	8b 11                	mov    edx,DWORD PTR [ecx]
  40d1c7:	83 c0 08             	add    eax,0x8
  40d1ca:	03 d6                	add    edx,esi
  40d1cc:	eb e8                	jmp    0x40d1b6
  40d1ce:	c1 e7 05             	shl    edi,0x5
  40d1d1:	8b df                	mov    ebx,edi
  40d1d3:	5f                   	pop    edi
  40d1d4:	8b c3                	mov    eax,ebx
  40d1d6:	5e                   	pop    esi
  40d1d7:	5b                   	pop    ebx
  40d1d8:	c3                   	ret
  40d1d9:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40d1dd:	56                   	push   esi
  40d1de:	3b 05 00 3f 41 00    	cmp    eax,DWORD PTR ds:0x413f00
  40d1e4:	57                   	push   edi
  40d1e5:	73 52                	jae    0x40d239
  40d1e7:	8b c8                	mov    ecx,eax
  40d1e9:	8b f0                	mov    esi,eax
  40d1eb:	c1 f9 05             	sar    ecx,0x5
  40d1ee:	83 e6 1f             	and    esi,0x1f
  40d1f1:	8d 3c 8d 00 3e 41 00 	lea    edi,[ecx*4+0x413e00]
  40d1f8:	c1 e6 03             	shl    esi,0x3
  40d1fb:	8b 0f                	mov    ecx,DWORD PTR [edi]
  40d1fd:	83 3c 31 ff          	cmp    DWORD PTR [ecx+esi*1],0xffffffff
  40d201:	75 36                	jne    0x40d239
  40d203:	83 3d 34 31 41 00 01 	cmp    DWORD PTR ds:0x413134,0x1
  40d20a:	53                   	push   ebx
  40d20b:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  40d20f:	75 1e                	jne    0x40d22f
  40d211:	83 e8 00             	sub    eax,0x0
  40d214:	74 10                	je     0x40d226
  40d216:	48                   	dec    eax
  40d217:	74 08                	je     0x40d221
  40d219:	48                   	dec    eax
  40d21a:	75 13                	jne    0x40d22f
  40d21c:	53                   	push   ebx
  40d21d:	6a f4                	push   0xfffffff4
  40d21f:	eb 08                	jmp    0x40d229
  40d221:	53                   	push   ebx
  40d222:	6a f5                	push   0xfffffff5
  40d224:	eb 03                	jmp    0x40d229
  40d226:	53                   	push   ebx
  40d227:	6a f6                	push   0xfffffff6
  40d229:	ff 15 c4 01 41 00    	call   DWORD PTR ds:0x4101c4
  40d22f:	8b 07                	mov    eax,DWORD PTR [edi]
  40d231:	89 1c 30             	mov    DWORD PTR [eax+esi*1],ebx
  40d234:	33 c0                	xor    eax,eax
  40d236:	5b                   	pop    ebx
  40d237:	eb 14                	jmp    0x40d24d
  40d239:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40d240:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d247:	00 00 00 
  40d24a:	83 c8 ff             	or     eax,0xffffffff
  40d24d:	5f                   	pop    edi
  40d24e:	5e                   	pop    esi
  40d24f:	c3                   	ret
  40d250:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40d254:	56                   	push   esi
  40d255:	3b 0d 00 3f 41 00    	cmp    ecx,DWORD PTR ds:0x413f00
  40d25b:	57                   	push   edi
  40d25c:	73 55                	jae    0x40d2b3
  40d25e:	8b c1                	mov    eax,ecx
  40d260:	8b f1                	mov    esi,ecx
  40d262:	c1 f8 05             	sar    eax,0x5
  40d265:	83 e6 1f             	and    esi,0x1f
  40d268:	8d 3c 85 00 3e 41 00 	lea    edi,[eax*4+0x413e00]
  40d26f:	c1 e6 03             	shl    esi,0x3
  40d272:	8b 07                	mov    eax,DWORD PTR [edi]
  40d274:	03 c6                	add    eax,esi
  40d276:	f6 40 04 01          	test   BYTE PTR [eax+0x4],0x1
  40d27a:	74 37                	je     0x40d2b3
  40d27c:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
  40d27f:	74 32                	je     0x40d2b3
  40d281:	83 3d 34 31 41 00 01 	cmp    DWORD PTR ds:0x413134,0x1
  40d288:	75 1f                	jne    0x40d2a9
  40d28a:	33 c0                	xor    eax,eax
  40d28c:	2b c8                	sub    ecx,eax
  40d28e:	74 10                	je     0x40d2a0
  40d290:	49                   	dec    ecx
  40d291:	74 08                	je     0x40d29b
  40d293:	49                   	dec    ecx
  40d294:	75 13                	jne    0x40d2a9
  40d296:	50                   	push   eax
  40d297:	6a f4                	push   0xfffffff4
  40d299:	eb 08                	jmp    0x40d2a3
  40d29b:	50                   	push   eax
  40d29c:	6a f5                	push   0xfffffff5
  40d29e:	eb 03                	jmp    0x40d2a3
  40d2a0:	50                   	push   eax
  40d2a1:	6a f6                	push   0xfffffff6
  40d2a3:	ff 15 c4 01 41 00    	call   DWORD PTR ds:0x4101c4
  40d2a9:	8b 07                	mov    eax,DWORD PTR [edi]
  40d2ab:	83 0c 30 ff          	or     DWORD PTR [eax+esi*1],0xffffffff
  40d2af:	33 c0                	xor    eax,eax
  40d2b1:	eb 14                	jmp    0x40d2c7
  40d2b3:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40d2ba:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d2c1:	00 00 00 
  40d2c4:	83 c8 ff             	or     eax,0xffffffff
  40d2c7:	5f                   	pop    edi
  40d2c8:	5e                   	pop    esi
  40d2c9:	c3                   	ret
  40d2ca:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40d2ce:	3b 05 00 3f 41 00    	cmp    eax,DWORD PTR ds:0x413f00
  40d2d4:	73 1c                	jae    0x40d2f2
  40d2d6:	8b c8                	mov    ecx,eax
  40d2d8:	83 e0 1f             	and    eax,0x1f
  40d2db:	c1 f9 05             	sar    ecx,0x5
  40d2de:	8b 0c 8d 00 3e 41 00 	mov    ecx,DWORD PTR [ecx*4+0x413e00]
  40d2e5:	f6 44 c1 04 01       	test   BYTE PTR [ecx+eax*8+0x4],0x1
  40d2ea:	8d 04 c1             	lea    eax,[ecx+eax*8]
  40d2ed:	74 03                	je     0x40d2f2
  40d2ef:	8b 00                	mov    eax,DWORD PTR [eax]
  40d2f1:	c3                   	ret
  40d2f2:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40d2f9:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d300:	00 00 00 
  40d303:	83 c8 ff             	or     eax,0xffffffff
  40d306:	c3                   	ret
  40d307:	83 ec 44             	sub    esp,0x44
  40d30a:	53                   	push   ebx
  40d30b:	55                   	push   ebp
  40d30c:	56                   	push   esi
  40d30d:	57                   	push   edi
  40d30e:	68 00 01 00 00       	push   0x100
  40d313:	e8 9e f5 ff ff       	call   0x40c8b6
  40d318:	8b f0                	mov    esi,eax
  40d31a:	59                   	pop    ecx
  40d31b:	85 f6                	test   esi,esi
  40d31d:	75 08                	jne    0x40d327
  40d31f:	6a 1b                	push   0x1b
  40d321:	e8 29 f7 ff ff       	call   0x40ca4f
  40d326:	59                   	pop    ecx
  40d327:	89 35 00 3e 41 00    	mov    DWORD PTR ds:0x413e00,esi
  40d32d:	c7 05 00 3f 41 00 20 	mov    DWORD PTR ds:0x413f00,0x20
  40d334:	00 00 00 
  40d337:	8d 86 00 01 00 00    	lea    eax,[esi+0x100]
  40d33d:	3b f0                	cmp    esi,eax
  40d33f:	73 1a                	jae    0x40d35b
  40d341:	80 66 04 00          	and    BYTE PTR [esi+0x4],0x0
  40d345:	83 0e ff             	or     DWORD PTR [esi],0xffffffff
  40d348:	c6 46 05 0a          	mov    BYTE PTR [esi+0x5],0xa
  40d34c:	a1 00 3e 41 00       	mov    eax,ds:0x413e00
  40d351:	83 c6 08             	add    esi,0x8
  40d354:	05 00 01 00 00       	add    eax,0x100
  40d359:	eb e2                	jmp    0x40d33d
  40d35b:	8d 44 24 10          	lea    eax,[esp+0x10]
  40d35f:	50                   	push   eax
  40d360:	ff 15 f0 01 41 00    	call   DWORD PTR ds:0x4101f0
  40d366:	66 83 7c 24 42 00    	cmp    WORD PTR [esp+0x42],0x0
  40d36c:	0f 84 c5 00 00 00    	je     0x40d437
  40d372:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  40d376:	85 c0                	test   eax,eax
  40d378:	0f 84 b9 00 00 00    	je     0x40d437
  40d37e:	8b 30                	mov    esi,DWORD PTR [eax]
  40d380:	8d 68 04             	lea    ebp,[eax+0x4]
  40d383:	b8 00 08 00 00       	mov    eax,0x800
  40d388:	3b f0                	cmp    esi,eax
  40d38a:	8d 1c 2e             	lea    ebx,[esi+ebp*1]
  40d38d:	7c 02                	jl     0x40d391
  40d38f:	8b f0                	mov    esi,eax
  40d391:	39 35 00 3f 41 00    	cmp    DWORD PTR ds:0x413f00,esi
  40d397:	7d 52                	jge    0x40d3eb
  40d399:	bf 04 3e 41 00       	mov    edi,0x413e04
  40d39e:	68 00 01 00 00       	push   0x100
  40d3a3:	e8 0e f5 ff ff       	call   0x40c8b6
  40d3a8:	85 c0                	test   eax,eax
  40d3aa:	59                   	pop    ecx
  40d3ab:	74 38                	je     0x40d3e5
  40d3ad:	83 05 00 3f 41 00 20 	add    DWORD PTR ds:0x413f00,0x20
  40d3b4:	89 07                	mov    DWORD PTR [edi],eax
  40d3b6:	8d 88 00 01 00 00    	lea    ecx,[eax+0x100]
  40d3bc:	3b c1                	cmp    eax,ecx
  40d3be:	73 18                	jae    0x40d3d8
  40d3c0:	80 60 04 00          	and    BYTE PTR [eax+0x4],0x0
  40d3c4:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  40d3c7:	c6 40 05 0a          	mov    BYTE PTR [eax+0x5],0xa
  40d3cb:	8b 0f                	mov    ecx,DWORD PTR [edi]
  40d3cd:	83 c0 08             	add    eax,0x8
  40d3d0:	81 c1 00 01 00 00    	add    ecx,0x100
  40d3d6:	eb e4                	jmp    0x40d3bc
  40d3d8:	83 c7 04             	add    edi,0x4
  40d3db:	39 35 00 3f 41 00    	cmp    DWORD PTR ds:0x413f00,esi
  40d3e1:	7c bb                	jl     0x40d39e
  40d3e3:	eb 06                	jmp    0x40d3eb
  40d3e5:	8b 35 00 3f 41 00    	mov    esi,DWORD PTR ds:0x413f00
  40d3eb:	33 ff                	xor    edi,edi
  40d3ed:	85 f6                	test   esi,esi
  40d3ef:	7e 46                	jle    0x40d437
  40d3f1:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d3f3:	83 f8 ff             	cmp    eax,0xffffffff
  40d3f6:	74 36                	je     0x40d42e
  40d3f8:	8a 4d 00             	mov    cl,BYTE PTR [ebp+0x0]
  40d3fb:	f6 c1 01             	test   cl,0x1
  40d3fe:	74 2e                	je     0x40d42e
  40d400:	f6 c1 08             	test   cl,0x8
  40d403:	75 0b                	jne    0x40d410
  40d405:	50                   	push   eax
  40d406:	ff 15 08 02 41 00    	call   DWORD PTR ds:0x410208
  40d40c:	85 c0                	test   eax,eax
  40d40e:	74 1e                	je     0x40d42e
  40d410:	8b c7                	mov    eax,edi
  40d412:	8b cf                	mov    ecx,edi
  40d414:	c1 f8 05             	sar    eax,0x5
  40d417:	83 e1 1f             	and    ecx,0x1f
  40d41a:	8b 04 85 00 3e 41 00 	mov    eax,DWORD PTR [eax*4+0x413e00]
  40d421:	8d 04 c8             	lea    eax,[eax+ecx*8]
  40d424:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  40d426:	89 08                	mov    DWORD PTR [eax],ecx
  40d428:	8a 4d 00             	mov    cl,BYTE PTR [ebp+0x0]
  40d42b:	88 48 04             	mov    BYTE PTR [eax+0x4],cl
  40d42e:	47                   	inc    edi
  40d42f:	45                   	inc    ebp
  40d430:	83 c3 04             	add    ebx,0x4
  40d433:	3b fe                	cmp    edi,esi
  40d435:	7c ba                	jl     0x40d3f1
  40d437:	33 db                	xor    ebx,ebx
  40d439:	a1 00 3e 41 00       	mov    eax,ds:0x413e00
  40d43e:	83 3c d8 ff          	cmp    DWORD PTR [eax+ebx*8],0xffffffff
  40d442:	8d 34 d8             	lea    esi,[eax+ebx*8]
  40d445:	75 4d                	jne    0x40d494
  40d447:	85 db                	test   ebx,ebx
  40d449:	c6 46 04 81          	mov    BYTE PTR [esi+0x4],0x81
  40d44d:	75 05                	jne    0x40d454
  40d44f:	6a f6                	push   0xfffffff6
  40d451:	58                   	pop    eax
  40d452:	eb 0a                	jmp    0x40d45e
  40d454:	8b c3                	mov    eax,ebx
  40d456:	48                   	dec    eax
  40d457:	f7 d8                	neg    eax
  40d459:	1b c0                	sbb    eax,eax
  40d45b:	83 c0 f5             	add    eax,0xfffffff5
  40d45e:	50                   	push   eax
  40d45f:	ff 15 bc 01 41 00    	call   DWORD PTR ds:0x4101bc
  40d465:	8b f8                	mov    edi,eax
  40d467:	83 ff ff             	cmp    edi,0xffffffff
  40d46a:	74 17                	je     0x40d483
  40d46c:	57                   	push   edi
  40d46d:	ff 15 08 02 41 00    	call   DWORD PTR ds:0x410208
  40d473:	85 c0                	test   eax,eax
  40d475:	74 0c                	je     0x40d483
  40d477:	25 ff 00 00 00       	and    eax,0xff
  40d47c:	89 3e                	mov    DWORD PTR [esi],edi
  40d47e:	83 f8 02             	cmp    eax,0x2
  40d481:	75 06                	jne    0x40d489
  40d483:	80 4e 04 40          	or     BYTE PTR [esi+0x4],0x40
  40d487:	eb 0f                	jmp    0x40d498
  40d489:	83 f8 03             	cmp    eax,0x3
  40d48c:	75 0a                	jne    0x40d498
  40d48e:	80 4e 04 08          	or     BYTE PTR [esi+0x4],0x8
  40d492:	eb 04                	jmp    0x40d498
  40d494:	80 4e 04 80          	or     BYTE PTR [esi+0x4],0x80
  40d498:	43                   	inc    ebx
  40d499:	83 fb 03             	cmp    ebx,0x3
  40d49c:	7c 9b                	jl     0x40d439
  40d49e:	ff 35 00 3f 41 00    	push   DWORD PTR ds:0x413f00
  40d4a4:	ff 15 c0 01 41 00    	call   DWORD PTR ds:0x4101c0
  40d4aa:	5f                   	pop    edi
  40d4ab:	5e                   	pop    esi
  40d4ac:	5d                   	pop    ebp
  40d4ad:	5b                   	pop    ebx
  40d4ae:	83 c4 44             	add    esp,0x44
  40d4b1:	c3                   	ret
  40d4b2:	55                   	push   ebp
  40d4b3:	8b ec                	mov    ebp,esp
  40d4b5:	81 ec 14 04 00 00    	sub    esp,0x414
  40d4bb:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40d4be:	53                   	push   ebx
  40d4bf:	3b 0d 00 3f 41 00    	cmp    ecx,DWORD PTR ds:0x413f00
  40d4c5:	56                   	push   esi
  40d4c6:	57                   	push   edi
  40d4c7:	0f 83 79 01 00 00    	jae    0x40d646
  40d4cd:	8b c1                	mov    eax,ecx
  40d4cf:	8b f1                	mov    esi,ecx
  40d4d1:	c1 f8 05             	sar    eax,0x5
  40d4d4:	83 e6 1f             	and    esi,0x1f
  40d4d7:	8d 1c 85 00 3e 41 00 	lea    ebx,[eax*4+0x413e00]
  40d4de:	c1 e6 03             	shl    esi,0x3
  40d4e1:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d4e3:	8a 44 30 04          	mov    al,BYTE PTR [eax+esi*1+0x4]
  40d4e7:	a8 01                	test   al,0x1
  40d4e9:	0f 84 57 01 00 00    	je     0x40d646
  40d4ef:	33 ff                	xor    edi,edi
  40d4f1:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
  40d4f4:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
  40d4f7:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
  40d4fa:	75 07                	jne    0x40d503
  40d4fc:	33 c0                	xor    eax,eax
  40d4fe:	e9 57 01 00 00       	jmp    0x40d65a
  40d503:	a8 20                	test   al,0x20
  40d505:	74 0c                	je     0x40d513
  40d507:	6a 02                	push   0x2
  40d509:	57                   	push   edi
  40d50a:	51                   	push   ecx
  40d50b:	e8 c5 01 00 00       	call   0x40d6d5
  40d510:	83 c4 0c             	add    esp,0xc
  40d513:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d515:	03 c6                	add    eax,esi
  40d517:	f6 40 04 80          	test   BYTE PTR [eax+0x4],0x80
  40d51b:	0f 84 c1 00 00 00    	je     0x40d5e2
  40d521:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  40d524:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
  40d527:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40d52a:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  40d52d:	0f 86 e7 00 00 00    	jbe    0x40d61a
  40d533:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
  40d539:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40d53c:	2b 4d 0c             	sub    ecx,DWORD PTR [ebp+0xc]
  40d53f:	3b 4d 10             	cmp    ecx,DWORD PTR [ebp+0x10]
  40d542:	73 29                	jae    0x40d56d
  40d544:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40d547:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  40d54a:	8a 09                	mov    cl,BYTE PTR [ecx]
  40d54c:	80 f9 0a             	cmp    cl,0xa
  40d54f:	75 07                	jne    0x40d558
  40d551:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
  40d554:	c6 00 0d             	mov    BYTE PTR [eax],0xd
  40d557:	40                   	inc    eax
  40d558:	88 08                	mov    BYTE PTR [eax],cl
  40d55a:	40                   	inc    eax
  40d55b:	8b c8                	mov    ecx,eax
  40d55d:	8d 95 ec fb ff ff    	lea    edx,[ebp-0x414]
  40d563:	2b ca                	sub    ecx,edx
  40d565:	81 f9 00 04 00 00    	cmp    ecx,0x400
  40d56b:	7c cc                	jl     0x40d539
  40d56d:	8b f8                	mov    edi,eax
  40d56f:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
  40d575:	2b f8                	sub    edi,eax
  40d577:	8d 45 f4             	lea    eax,[ebp-0xc]
  40d57a:	6a 00                	push   0x0
  40d57c:	50                   	push   eax
  40d57d:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
  40d583:	57                   	push   edi
  40d584:	50                   	push   eax
  40d585:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d587:	ff 34 30             	push   DWORD PTR [eax+esi*1]
  40d58a:	ff 15 b8 01 41 00    	call   DWORD PTR ds:0x4101b8
  40d590:	85 c0                	test   eax,eax
  40d592:	74 43                	je     0x40d5d7
  40d594:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  40d597:	01 45 f8             	add    DWORD PTR [ebp-0x8],eax
  40d59a:	3b c7                	cmp    eax,edi
  40d59c:	7c 0b                	jl     0x40d5a9
  40d59e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40d5a1:	2b 45 0c             	sub    eax,DWORD PTR [ebp+0xc]
  40d5a4:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
  40d5a7:	72 8a                	jb     0x40d533
  40d5a9:	33 ff                	xor    edi,edi
  40d5ab:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  40d5ae:	3b c7                	cmp    eax,edi
  40d5b0:	0f 85 8b 00 00 00    	jne    0x40d641
  40d5b6:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
  40d5b9:	74 5f                	je     0x40d61a
  40d5bb:	6a 05                	push   0x5
  40d5bd:	58                   	pop    eax
  40d5be:	39 45 08             	cmp    DWORD PTR [ebp+0x8],eax
  40d5c1:	75 4c                	jne    0x40d60f
  40d5c3:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d5ca:	00 00 00 
  40d5cd:	a3 e8 34 41 00       	mov    ds:0x4134e8,eax
  40d5d2:	e9 80 00 00 00       	jmp    0x40d657
  40d5d7:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40d5dd:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  40d5e0:	eb c7                	jmp    0x40d5a9
  40d5e2:	8d 4d f4             	lea    ecx,[ebp-0xc]
  40d5e5:	57                   	push   edi
  40d5e6:	51                   	push   ecx
  40d5e7:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40d5ea:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40d5ed:	ff 30                	push   DWORD PTR [eax]
  40d5ef:	ff 15 b8 01 41 00    	call   DWORD PTR ds:0x4101b8
  40d5f5:	85 c0                	test   eax,eax
  40d5f7:	74 0b                	je     0x40d604
  40d5f9:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  40d5fc:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  40d5ff:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  40d602:	eb a7                	jmp    0x40d5ab
  40d604:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40d60a:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  40d60d:	eb 9c                	jmp    0x40d5ab
  40d60f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40d612:	e8 81 f4 ff ff       	call   0x40ca98
  40d617:	59                   	pop    ecx
  40d618:	eb 3d                	jmp    0x40d657
  40d61a:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d61c:	f6 44 30 04 40       	test   BYTE PTR [eax+esi*1+0x4],0x40
  40d621:	74 0c                	je     0x40d62f
  40d623:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  40d626:	80 38 1a             	cmp    BYTE PTR [eax],0x1a
  40d629:	0f 84 cd fe ff ff    	je     0x40d4fc
  40d62f:	c7 05 e4 34 41 00 1c 	mov    DWORD PTR ds:0x4134e4,0x1c
  40d636:	00 00 00 
  40d639:	89 3d e8 34 41 00    	mov    DWORD PTR ds:0x4134e8,edi
  40d63f:	eb 16                	jmp    0x40d657
  40d641:	2b 45 f0             	sub    eax,DWORD PTR [ebp-0x10]
  40d644:	eb 14                	jmp    0x40d65a
  40d646:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40d64d:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d654:	00 00 00 
  40d657:	83 c8 ff             	or     eax,0xffffffff
  40d65a:	5f                   	pop    edi
  40d65b:	5e                   	pop    esi
  40d65c:	5b                   	pop    ebx
  40d65d:	c9                   	leave
  40d65e:	c3                   	ret
  40d65f:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40d663:	56                   	push   esi
  40d664:	3b 05 00 3f 41 00    	cmp    eax,DWORD PTR ds:0x413f00
  40d66a:	73 5a                	jae    0x40d6c6
  40d66c:	8b c8                	mov    ecx,eax
  40d66e:	83 e0 1f             	and    eax,0x1f
  40d671:	c1 f9 05             	sar    ecx,0x5
  40d674:	8b 0c 8d 00 3e 41 00 	mov    ecx,DWORD PTR [ecx*4+0x413e00]
  40d67b:	8d 54 c1 04          	lea    edx,[ecx+eax*8+0x4]
  40d67f:	8a 4c c1 04          	mov    cl,BYTE PTR [ecx+eax*8+0x4]
  40d683:	f6 c1 01             	test   cl,0x1
  40d686:	74 3e                	je     0x40d6c6
  40d688:	8a c1                	mov    al,cl
  40d68a:	be 00 80 00 00       	mov    esi,0x8000
  40d68f:	25 80 00 00 00       	and    eax,0x80
  40d694:	39 74 24 0c          	cmp    DWORD PTR [esp+0xc],esi
  40d698:	75 05                	jne    0x40d69f
  40d69a:	80 e1 7f             	and    cl,0x7f
  40d69d:	eb 0d                	jmp    0x40d6ac
  40d69f:	81 7c 24 0c 00 40 00 	cmp    DWORD PTR [esp+0xc],0x4000
  40d6a6:	00 
  40d6a7:	75 11                	jne    0x40d6ba
  40d6a9:	80 c9 80             	or     cl,0x80
  40d6ac:	f7 d8                	neg    eax
  40d6ae:	1b c0                	sbb    eax,eax
  40d6b0:	88 0a                	mov    BYTE PTR [edx],cl
  40d6b2:	66 25 00 c0          	and    ax,0xc000
  40d6b6:	03 c6                	add    eax,esi
  40d6b8:	5e                   	pop    esi
  40d6b9:	c3                   	ret
  40d6ba:	c7 05 e4 34 41 00 16 	mov    DWORD PTR ds:0x4134e4,0x16
  40d6c1:	00 00 00 
  40d6c4:	eb 0a                	jmp    0x40d6d0
  40d6c6:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d6cd:	00 00 00 
  40d6d0:	83 c8 ff             	or     eax,0xffffffff
  40d6d3:	5e                   	pop    esi
  40d6d4:	c3                   	ret
  40d6d5:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40d6d9:	53                   	push   ebx
  40d6da:	3b 05 00 3f 41 00    	cmp    eax,DWORD PTR ds:0x413f00
  40d6e0:	56                   	push   esi
  40d6e1:	57                   	push   edi
  40d6e2:	73 73                	jae    0x40d757
  40d6e4:	8b c8                	mov    ecx,eax
  40d6e6:	8b f0                	mov    esi,eax
  40d6e8:	c1 f9 05             	sar    ecx,0x5
  40d6eb:	83 e6 1f             	and    esi,0x1f
  40d6ee:	8d 3c 8d 00 3e 41 00 	lea    edi,[ecx*4+0x413e00]
  40d6f5:	c1 e6 03             	shl    esi,0x3
  40d6f8:	8b 0f                	mov    ecx,DWORD PTR [edi]
  40d6fa:	f6 44 31 04 01       	test   BYTE PTR [ecx+esi*1+0x4],0x1
  40d6ff:	74 56                	je     0x40d757
  40d701:	50                   	push   eax
  40d702:	e8 c3 fb ff ff       	call   0x40d2ca
  40d707:	83 f8 ff             	cmp    eax,0xffffffff
  40d70a:	59                   	pop    ecx
  40d70b:	75 0c                	jne    0x40d719
  40d70d:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d714:	00 00 00 
  40d717:	eb 4f                	jmp    0x40d768
  40d719:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  40d71d:	6a 00                	push   0x0
  40d71f:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
  40d723:	50                   	push   eax
  40d724:	ff 15 b4 01 41 00    	call   DWORD PTR ds:0x4101b4
  40d72a:	8b d8                	mov    ebx,eax
  40d72c:	83 fb ff             	cmp    ebx,0xffffffff
  40d72f:	75 08                	jne    0x40d739
  40d731:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40d737:	eb 02                	jmp    0x40d73b
  40d739:	33 c0                	xor    eax,eax
  40d73b:	85 c0                	test   eax,eax
  40d73d:	74 09                	je     0x40d748
  40d73f:	50                   	push   eax
  40d740:	e8 53 f3 ff ff       	call   0x40ca98
  40d745:	59                   	pop    ecx
  40d746:	eb 20                	jmp    0x40d768
  40d748:	8b 07                	mov    eax,DWORD PTR [edi]
  40d74a:	80 64 30 04 fd       	and    BYTE PTR [eax+esi*1+0x4],0xfd
  40d74f:	8d 44 30 04          	lea    eax,[eax+esi*1+0x4]
  40d753:	8b c3                	mov    eax,ebx
  40d755:	eb 14                	jmp    0x40d76b
  40d757:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40d75e:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d765:	00 00 00 
  40d768:	83 c8 ff             	or     eax,0xffffffff
  40d76b:	5f                   	pop    edi
  40d76c:	5e                   	pop    esi
  40d76d:	5b                   	pop    ebx
  40d76e:	c3                   	ret
  40d76f:	55                   	push   ebp
  40d770:	8b ec                	mov    ebp,esp
  40d772:	83 ec 0c             	sub    esp,0xc
  40d775:	53                   	push   ebx
  40d776:	56                   	push   esi
  40d777:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  40d77a:	57                   	push   edi
  40d77b:	3b 35 00 3f 41 00    	cmp    esi,DWORD PTR ds:0x413f00
  40d781:	0f 83 c5 01 00 00    	jae    0x40d94c
  40d787:	8b c6                	mov    eax,esi
  40d789:	83 e6 1f             	and    esi,0x1f
  40d78c:	c1 f8 05             	sar    eax,0x5
  40d78f:	c1 e6 03             	shl    esi,0x3
  40d792:	8d 1c 85 00 3e 41 00 	lea    ebx,[eax*4+0x413e00]
  40d799:	8b 04 85 00 3e 41 00 	mov    eax,DWORD PTR [eax*4+0x413e00]
  40d7a0:	03 c6                	add    eax,esi
  40d7a2:	8a 50 04             	mov    dl,BYTE PTR [eax+0x4]
  40d7a5:	f6 c2 01             	test   dl,0x1
  40d7a8:	0f 84 9e 01 00 00    	je     0x40d94c
  40d7ae:	83 65 f8 00          	and    DWORD PTR [ebp-0x8],0x0
  40d7b2:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  40d7b5:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
  40d7b9:	8b cf                	mov    ecx,edi
  40d7bb:	74 67                	je     0x40d824
  40d7bd:	f6 c2 02             	test   dl,0x2
  40d7c0:	75 62                	jne    0x40d824
  40d7c2:	f6 c2 48             	test   dl,0x48
  40d7c5:	74 1d                	je     0x40d7e4
  40d7c7:	8a 40 05             	mov    al,BYTE PTR [eax+0x5]
  40d7ca:	3c 0a                	cmp    al,0xa
  40d7cc:	74 16                	je     0x40d7e4
  40d7ce:	ff 4d 10             	dec    DWORD PTR [ebp+0x10]
  40d7d1:	88 07                	mov    BYTE PTR [edi],al
  40d7d3:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d7d5:	8d 4f 01             	lea    ecx,[edi+0x1]
  40d7d8:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
  40d7df:	c6 44 30 05 0a       	mov    BYTE PTR [eax+esi*1+0x5],0xa
  40d7e4:	8d 45 f4             	lea    eax,[ebp-0xc]
  40d7e7:	6a 00                	push   0x0
  40d7e9:	50                   	push   eax
  40d7ea:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d7ec:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  40d7ef:	51                   	push   ecx
  40d7f0:	ff 34 30             	push   DWORD PTR [eax+esi*1]
  40d7f3:	ff 15 b0 01 41 00    	call   DWORD PTR ds:0x4101b0
  40d7f9:	85 c0                	test   eax,eax
  40d7fb:	75 3a                	jne    0x40d837
  40d7fd:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40d803:	6a 05                	push   0x5
  40d805:	59                   	pop    ecx
  40d806:	3b c1                	cmp    eax,ecx
  40d808:	75 15                	jne    0x40d81f
  40d80a:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d811:	00 00 00 
  40d814:	89 0d e8 34 41 00    	mov    DWORD PTR ds:0x4134e8,ecx
  40d81a:	e9 3e 01 00 00       	jmp    0x40d95d
  40d81f:	83 f8 6d             	cmp    eax,0x6d
  40d822:	75 07                	jne    0x40d82b
  40d824:	33 c0                	xor    eax,eax
  40d826:	e9 35 01 00 00       	jmp    0x40d960
  40d82b:	50                   	push   eax
  40d82c:	e8 67 f2 ff ff       	call   0x40ca98
  40d831:	59                   	pop    ecx
  40d832:	e9 26 01 00 00       	jmp    0x40d95d
  40d837:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d839:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  40d83c:	01 55 f8             	add    DWORD PTR [ebp-0x8],edx
  40d83f:	8d 4c 30 04          	lea    ecx,[eax+esi*1+0x4]
  40d843:	8a 44 30 04          	mov    al,BYTE PTR [eax+esi*1+0x4]
  40d847:	a8 80                	test   al,0x80
  40d849:	0f 84 f8 00 00 00    	je     0x40d947
  40d84f:	85 d2                	test   edx,edx
  40d851:	74 09                	je     0x40d85c
  40d853:	80 3f 0a             	cmp    BYTE PTR [edi],0xa
  40d856:	75 04                	jne    0x40d85c
  40d858:	0c 04                	or     al,0x4
  40d85a:	eb 02                	jmp    0x40d85e
  40d85c:	24 fb                	and    al,0xfb
  40d85e:	88 01                	mov    BYTE PTR [ecx],al
  40d860:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  40d863:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40d866:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  40d869:	03 c8                	add    ecx,eax
  40d86b:	3b c1                	cmp    eax,ecx
  40d86d:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  40d870:	0f 83 cb 00 00 00    	jae    0x40d941
  40d876:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40d879:	8a 00                	mov    al,BYTE PTR [eax]
  40d87b:	3c 1a                	cmp    al,0x1a
  40d87d:	0f 84 ae 00 00 00    	je     0x40d931
  40d883:	3c 0d                	cmp    al,0xd
  40d885:	74 0b                	je     0x40d892
  40d887:	88 07                	mov    BYTE PTR [edi],al
  40d889:	47                   	inc    edi
  40d88a:	ff 45 10             	inc    DWORD PTR [ebp+0x10]
  40d88d:	e9 91 00 00 00       	jmp    0x40d923
  40d892:	49                   	dec    ecx
  40d893:	39 4d 10             	cmp    DWORD PTR [ebp+0x10],ecx
  40d896:	73 18                	jae    0x40d8b0
  40d898:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40d89b:	40                   	inc    eax
  40d89c:	80 38 0a             	cmp    BYTE PTR [eax],0xa
  40d89f:	75 06                	jne    0x40d8a7
  40d8a1:	83 45 10 02          	add    DWORD PTR [ebp+0x10],0x2
  40d8a5:	eb 5e                	jmp    0x40d905
  40d8a7:	c6 07 0d             	mov    BYTE PTR [edi],0xd
  40d8aa:	47                   	inc    edi
  40d8ab:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  40d8ae:	eb 73                	jmp    0x40d923
  40d8b0:	8d 45 f4             	lea    eax,[ebp-0xc]
  40d8b3:	6a 00                	push   0x0
  40d8b5:	50                   	push   eax
  40d8b6:	ff 45 10             	inc    DWORD PTR [ebp+0x10]
  40d8b9:	8d 45 ff             	lea    eax,[ebp-0x1]
  40d8bc:	6a 01                	push   0x1
  40d8be:	50                   	push   eax
  40d8bf:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d8c1:	ff 34 30             	push   DWORD PTR [eax+esi*1]
  40d8c4:	ff 15 b0 01 41 00    	call   DWORD PTR ds:0x4101b0
  40d8ca:	85 c0                	test   eax,eax
  40d8cc:	75 0a                	jne    0x40d8d8
  40d8ce:	ff 15 24 02 41 00    	call   DWORD PTR ds:0x410224
  40d8d4:	85 c0                	test   eax,eax
  40d8d6:	75 47                	jne    0x40d91f
  40d8d8:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  40d8dc:	74 41                	je     0x40d91f
  40d8de:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d8e0:	f6 44 30 04 48       	test   BYTE PTR [eax+esi*1+0x4],0x48
  40d8e5:	74 13                	je     0x40d8fa
  40d8e7:	8a 45 ff             	mov    al,BYTE PTR [ebp-0x1]
  40d8ea:	3c 0a                	cmp    al,0xa
  40d8ec:	74 17                	je     0x40d905
  40d8ee:	c6 07 0d             	mov    BYTE PTR [edi],0xd
  40d8f1:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  40d8f3:	47                   	inc    edi
  40d8f4:	88 44 31 05          	mov    BYTE PTR [ecx+esi*1+0x5],al
  40d8f8:	eb 29                	jmp    0x40d923
  40d8fa:	3b 7d 0c             	cmp    edi,DWORD PTR [ebp+0xc]
  40d8fd:	75 0b                	jne    0x40d90a
  40d8ff:	80 7d ff 0a          	cmp    BYTE PTR [ebp-0x1],0xa
  40d903:	75 05                	jne    0x40d90a
  40d905:	c6 07 0a             	mov    BYTE PTR [edi],0xa
  40d908:	eb 18                	jmp    0x40d922
  40d90a:	6a 01                	push   0x1
  40d90c:	6a ff                	push   0xffffffff
  40d90e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40d911:	e8 bf fd ff ff       	call   0x40d6d5
  40d916:	83 c4 0c             	add    esp,0xc
  40d919:	80 7d ff 0a          	cmp    BYTE PTR [ebp-0x1],0xa
  40d91d:	74 04                	je     0x40d923
  40d91f:	c6 07 0d             	mov    BYTE PTR [edi],0xd
  40d922:	47                   	inc    edi
  40d923:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40d926:	39 4d 10             	cmp    DWORD PTR [ebp+0x10],ecx
  40d929:	0f 82 47 ff ff ff    	jb     0x40d876
  40d92f:	eb 10                	jmp    0x40d941
  40d931:	8b 03                	mov    eax,DWORD PTR [ebx]
  40d933:	8d 74 30 04          	lea    esi,[eax+esi*1+0x4]
  40d937:	8a 06                	mov    al,BYTE PTR [esi]
  40d939:	a8 40                	test   al,0x40
  40d93b:	75 04                	jne    0x40d941
  40d93d:	0c 02                	or     al,0x2
  40d93f:	88 06                	mov    BYTE PTR [esi],al
  40d941:	2b 7d 0c             	sub    edi,DWORD PTR [ebp+0xc]
  40d944:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
  40d947:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  40d94a:	eb 14                	jmp    0x40d960
  40d94c:	83 25 e8 34 41 00 00 	and    DWORD PTR ds:0x4134e8,0x0
  40d953:	c7 05 e4 34 41 00 09 	mov    DWORD PTR ds:0x4134e4,0x9
  40d95a:	00 00 00 
  40d95d:	83 c8 ff             	or     eax,0xffffffff
  40d960:	5f                   	pop    edi
  40d961:	5e                   	pop    esi
  40d962:	5b                   	pop    ebx
  40d963:	c9                   	leave
  40d964:	c3                   	ret
  40d965:	a1 60 35 41 00       	mov    eax,ds:0x413560
  40d96a:	85 c0                	test   eax,eax
  40d96c:	74 0f                	je     0x40d97d
  40d96e:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40d972:	ff d0                	call   eax
  40d974:	85 c0                	test   eax,eax
  40d976:	59                   	pop    ecx
  40d977:	74 04                	je     0x40d97d
  40d979:	6a 01                	push   0x1
  40d97b:	58                   	pop    eax
  40d97c:	c3                   	ret
  40d97d:	33 c0                	xor    eax,eax
  40d97f:	c3                   	ret
  40d980:	33 c0                	xor    eax,eax
  40d982:	6a 00                	push   0x0
  40d984:	39 44 24 08          	cmp    DWORD PTR [esp+0x8],eax
  40d988:	68 00 10 00 00       	push   0x1000
  40d98d:	0f 94 c0             	sete   al
  40d990:	50                   	push   eax
  40d991:	ff 15 a8 01 41 00    	call   DWORD PTR ds:0x4101a8
  40d997:	85 c0                	test   eax,eax
  40d999:	a3 e0 3d 41 00       	mov    ds:0x413de0,eax
  40d99e:	74 15                	je     0x40d9b5
  40d9a0:	e8 17 00 00 00       	call   0x40d9bc
  40d9a5:	85 c0                	test   eax,eax
  40d9a7:	75 0f                	jne    0x40d9b8
  40d9a9:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40d9af:	ff 15 3c 02 41 00    	call   DWORD PTR ds:0x41023c
  40d9b5:	33 c0                	xor    eax,eax
  40d9b7:	c3                   	ret
  40d9b8:	6a 01                	push   0x1
  40d9ba:	58                   	pop    eax
  40d9bb:	c3                   	ret
  40d9bc:	68 40 01 00 00       	push   0x140
  40d9c1:	6a 00                	push   0x0
  40d9c3:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40d9c9:	ff 15 fc 01 41 00    	call   DWORD PTR ds:0x4101fc
  40d9cf:	85 c0                	test   eax,eax
  40d9d1:	a3 dc 3d 41 00       	mov    ds:0x413ddc,eax
  40d9d6:	75 01                	jne    0x40d9d9
  40d9d8:	c3                   	ret
  40d9d9:	83 25 d4 3d 41 00 00 	and    DWORD PTR ds:0x413dd4,0x0
  40d9e0:	83 25 d8 3d 41 00 00 	and    DWORD PTR ds:0x413dd8,0x0
  40d9e7:	6a 01                	push   0x1
  40d9e9:	a3 d0 3d 41 00       	mov    ds:0x413dd0,eax
  40d9ee:	c7 05 c8 3d 41 00 10 	mov    DWORD PTR ds:0x413dc8,0x10
  40d9f5:	00 00 00 
  40d9f8:	58                   	pop    eax
  40d9f9:	c3                   	ret
  40d9fa:	a1 d8 3d 41 00       	mov    eax,ds:0x413dd8
  40d9ff:	8d 0c 80             	lea    ecx,[eax+eax*4]
  40da02:	a1 dc 3d 41 00       	mov    eax,ds:0x413ddc
  40da07:	8d 0c 88             	lea    ecx,[eax+ecx*4]
  40da0a:	3b c1                	cmp    eax,ecx
  40da0c:	73 14                	jae    0x40da22
  40da0e:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  40da12:	2b 50 0c             	sub    edx,DWORD PTR [eax+0xc]
  40da15:	81 fa 00 00 10 00    	cmp    edx,0x100000
  40da1b:	72 07                	jb     0x40da24
  40da1d:	83 c0 14             	add    eax,0x14
  40da20:	eb e8                	jmp    0x40da0a
  40da22:	33 c0                	xor    eax,eax
  40da24:	c3                   	ret
  40da25:	55                   	push   ebp
  40da26:	8b ec                	mov    ebp,esp
  40da28:	83 ec 14             	sub    esp,0x14
  40da2b:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
  40da2e:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40da31:	53                   	push   ebx
  40da32:	56                   	push   esi
  40da33:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
  40da36:	8b f2                	mov    esi,edx
  40da38:	2b 71 0c             	sub    esi,DWORD PTR [ecx+0xc]
  40da3b:	8b 5a fc             	mov    ebx,DWORD PTR [edx-0x4]
  40da3e:	83 c2 fc             	add    edx,0xfffffffc
  40da41:	57                   	push   edi
  40da42:	c1 ee 0f             	shr    esi,0xf
  40da45:	8b ce                	mov    ecx,esi
  40da47:	8b 7a fc             	mov    edi,DWORD PTR [edx-0x4]
  40da4a:	69 c9 04 02 00 00    	imul   ecx,ecx,0x204
  40da50:	4b                   	dec    ebx
  40da51:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  40da54:	8d 8c 01 44 01 00 00 	lea    ecx,[ecx+eax*1+0x144]
  40da5b:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  40da5e:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  40da61:	8b 0c 13             	mov    ecx,DWORD PTR [ebx+edx*1]
  40da64:	f6 c1 01             	test   cl,0x1
  40da67:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  40da6a:	75 7f                	jne    0x40daeb
  40da6c:	c1 f9 04             	sar    ecx,0x4
  40da6f:	6a 3f                	push   0x3f
  40da71:	49                   	dec    ecx
  40da72:	5f                   	pop    edi
  40da73:	89 4d 0c             	mov    DWORD PTR [ebp+0xc],ecx
  40da76:	3b cf                	cmp    ecx,edi
  40da78:	76 03                	jbe    0x40da7d
  40da7a:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  40da7d:	8b 4c 13 04          	mov    ecx,DWORD PTR [ebx+edx*1+0x4]
  40da81:	3b 4c 13 08          	cmp    ecx,DWORD PTR [ebx+edx*1+0x8]
  40da85:	75 48                	jne    0x40dacf
  40da87:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40da8a:	83 f9 20             	cmp    ecx,0x20
  40da8d:	73 1c                	jae    0x40daab
  40da8f:	bf 00 00 00 80       	mov    edi,0x80000000
  40da94:	d3 ef                	shr    edi,cl
  40da96:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  40da9a:	f7 d7                	not    edi
  40da9c:	21 7c b0 44          	and    DWORD PTR [eax+esi*4+0x44],edi
  40daa0:	fe 09                	dec    BYTE PTR [ecx]
  40daa2:	75 2b                	jne    0x40dacf
  40daa4:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40daa7:	21 39                	and    DWORD PTR [ecx],edi
  40daa9:	eb 24                	jmp    0x40dacf
  40daab:	83 c1 e0             	add    ecx,0xffffffe0
  40daae:	bf 00 00 00 80       	mov    edi,0x80000000
  40dab3:	d3 ef                	shr    edi,cl
  40dab5:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40dab8:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  40dabc:	f7 d7                	not    edi
  40dabe:	21 bc b0 c4 00 00 00 	and    DWORD PTR [eax+esi*4+0xc4],edi
  40dac5:	fe 09                	dec    BYTE PTR [ecx]
  40dac7:	75 06                	jne    0x40dacf
  40dac9:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40dacc:	21 79 04             	and    DWORD PTR [ecx+0x4],edi
  40dacf:	8b 4c 13 08          	mov    ecx,DWORD PTR [ebx+edx*1+0x8]
  40dad3:	8b 7c 13 04          	mov    edi,DWORD PTR [ebx+edx*1+0x4]
  40dad7:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
  40dada:	8b 4c 13 04          	mov    ecx,DWORD PTR [ebx+edx*1+0x4]
  40dade:	8b 7c 13 08          	mov    edi,DWORD PTR [ebx+edx*1+0x8]
  40dae2:	03 5d f8             	add    ebx,DWORD PTR [ebp-0x8]
  40dae5:	89 79 08             	mov    DWORD PTR [ecx+0x8],edi
  40dae8:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  40daeb:	8b fb                	mov    edi,ebx
  40daed:	c1 ff 04             	sar    edi,0x4
  40daf0:	4f                   	dec    edi
  40daf1:	83 ff 3f             	cmp    edi,0x3f
  40daf4:	76 03                	jbe    0x40daf9
  40daf6:	6a 3f                	push   0x3f
  40daf8:	5f                   	pop    edi
  40daf9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40dafc:	83 e1 01             	and    ecx,0x1
  40daff:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  40db02:	0f 85 a0 00 00 00    	jne    0x40dba8
  40db08:	2b 55 fc             	sub    edx,DWORD PTR [ebp-0x4]
  40db0b:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40db0e:	c1 f9 04             	sar    ecx,0x4
  40db11:	6a 3f                	push   0x3f
  40db13:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  40db16:	49                   	dec    ecx
  40db17:	5a                   	pop    edx
  40db18:	3b ca                	cmp    ecx,edx
  40db1a:	89 4d 0c             	mov    DWORD PTR [ebp+0xc],ecx
  40db1d:	76 05                	jbe    0x40db24
  40db1f:	89 55 0c             	mov    DWORD PTR [ebp+0xc],edx
  40db22:	8b ca                	mov    ecx,edx
  40db24:	03 5d fc             	add    ebx,DWORD PTR [ebp-0x4]
  40db27:	8b fb                	mov    edi,ebx
  40db29:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  40db2c:	c1 ff 04             	sar    edi,0x4
  40db2f:	4f                   	dec    edi
  40db30:	3b fa                	cmp    edi,edx
  40db32:	76 02                	jbe    0x40db36
  40db34:	8b fa                	mov    edi,edx
  40db36:	3b cf                	cmp    ecx,edi
  40db38:	74 6b                	je     0x40dba5
  40db3a:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40db3d:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  40db40:	3b 51 08             	cmp    edx,DWORD PTR [ecx+0x8]
  40db43:	75 48                	jne    0x40db8d
  40db45:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40db48:	83 f9 20             	cmp    ecx,0x20
  40db4b:	73 1c                	jae    0x40db69
  40db4d:	ba 00 00 00 80       	mov    edx,0x80000000
  40db52:	d3 ea                	shr    edx,cl
  40db54:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  40db58:	f7 d2                	not    edx
  40db5a:	21 54 b0 44          	and    DWORD PTR [eax+esi*4+0x44],edx
  40db5e:	fe 09                	dec    BYTE PTR [ecx]
  40db60:	75 2b                	jne    0x40db8d
  40db62:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40db65:	21 11                	and    DWORD PTR [ecx],edx
  40db67:	eb 24                	jmp    0x40db8d
  40db69:	83 c1 e0             	add    ecx,0xffffffe0
  40db6c:	ba 00 00 00 80       	mov    edx,0x80000000
  40db71:	d3 ea                	shr    edx,cl
  40db73:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40db76:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  40db7a:	f7 d2                	not    edx
  40db7c:	21 94 b0 c4 00 00 00 	and    DWORD PTR [eax+esi*4+0xc4],edx
  40db83:	fe 09                	dec    BYTE PTR [ecx]
  40db85:	75 06                	jne    0x40db8d
  40db87:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40db8a:	21 51 04             	and    DWORD PTR [ecx+0x4],edx
  40db8d:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40db90:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
  40db93:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  40db96:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  40db99:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40db9c:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  40db9f:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  40dba2:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  40dba5:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  40dba8:	83 7d ec 00          	cmp    DWORD PTR [ebp-0x14],0x0
  40dbac:	75 09                	jne    0x40dbb7
  40dbae:	39 7d 0c             	cmp    DWORD PTR [ebp+0xc],edi
  40dbb1:	0f 84 89 00 00 00    	je     0x40dc40
  40dbb7:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  40dbba:	8d 0c f9             	lea    ecx,[ecx+edi*8]
  40dbbd:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  40dbc0:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  40dbc3:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  40dbc6:	8d 0c f9             	lea    ecx,[ecx+edi*8]
  40dbc9:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  40dbcc:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  40dbcf:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40dbd2:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  40dbd5:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40dbd8:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
  40dbdb:	75 63                	jne    0x40dc40
  40dbdd:	8a 4c 07 04          	mov    cl,BYTE PTR [edi+eax*1+0x4]
  40dbe1:	83 ff 20             	cmp    edi,0x20
  40dbe4:	88 4d 0f             	mov    BYTE PTR [ebp+0xf],cl
  40dbe7:	fe c1                	inc    cl
  40dbe9:	88 4c 07 04          	mov    BYTE PTR [edi+eax*1+0x4],cl
  40dbed:	73 25                	jae    0x40dc14
  40dbef:	80 7d 0f 00          	cmp    BYTE PTR [ebp+0xf],0x0
  40dbf3:	75 0e                	jne    0x40dc03
  40dbf5:	bb 00 00 00 80       	mov    ebx,0x80000000
  40dbfa:	8b cf                	mov    ecx,edi
  40dbfc:	d3 eb                	shr    ebx,cl
  40dbfe:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40dc01:	09 19                	or     DWORD PTR [ecx],ebx
  40dc03:	bb 00 00 00 80       	mov    ebx,0x80000000
  40dc08:	8b cf                	mov    ecx,edi
  40dc0a:	d3 eb                	shr    ebx,cl
  40dc0c:	8d 44 b0 44          	lea    eax,[eax+esi*4+0x44]
  40dc10:	09 18                	or     DWORD PTR [eax],ebx
  40dc12:	eb 29                	jmp    0x40dc3d
  40dc14:	80 7d 0f 00          	cmp    BYTE PTR [ebp+0xf],0x0
  40dc18:	75 10                	jne    0x40dc2a
  40dc1a:	8d 4f e0             	lea    ecx,[edi-0x20]
  40dc1d:	bb 00 00 00 80       	mov    ebx,0x80000000
  40dc22:	d3 eb                	shr    ebx,cl
  40dc24:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40dc27:	09 59 04             	or     DWORD PTR [ecx+0x4],ebx
  40dc2a:	8d 4f e0             	lea    ecx,[edi-0x20]
  40dc2d:	bf 00 00 00 80       	mov    edi,0x80000000
  40dc32:	d3 ef                	shr    edi,cl
  40dc34:	8d 84 b0 c4 00 00 00 	lea    eax,[eax+esi*4+0xc4]
  40dc3b:	09 38                	or     DWORD PTR [eax],edi
  40dc3d:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
  40dc40:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  40dc43:	89 1a                	mov    DWORD PTR [edx],ebx
  40dc45:	89 5c 13 fc          	mov    DWORD PTR [ebx+edx*1-0x4],ebx
  40dc49:	ff 08                	dec    DWORD PTR [eax]
  40dc4b:	0f 85 fa 00 00 00    	jne    0x40dd4b
  40dc51:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dc56:	85 c0                	test   eax,eax
  40dc58:	0f 84 df 00 00 00    	je     0x40dd3d
  40dc5e:	8b 0d cc 3d 41 00    	mov    ecx,DWORD PTR ds:0x413dcc
  40dc64:	8b 3d a4 01 41 00    	mov    edi,DWORD PTR ds:0x4101a4
  40dc6a:	c1 e1 0f             	shl    ecx,0xf
  40dc6d:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
  40dc70:	bb 00 80 00 00       	mov    ebx,0x8000
  40dc75:	68 00 40 00 00       	push   0x4000
  40dc7a:	53                   	push   ebx
  40dc7b:	51                   	push   ecx
  40dc7c:	ff d7                	call   edi
  40dc7e:	8b 0d cc 3d 41 00    	mov    ecx,DWORD PTR ds:0x413dcc
  40dc84:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dc89:	ba 00 00 00 80       	mov    edx,0x80000000
  40dc8e:	d3 ea                	shr    edx,cl
  40dc90:	09 50 08             	or     DWORD PTR [eax+0x8],edx
  40dc93:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dc98:	8b 0d cc 3d 41 00    	mov    ecx,DWORD PTR ds:0x413dcc
  40dc9e:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  40dca1:	83 a4 88 c4 00 00 00 	and    DWORD PTR [eax+ecx*4+0xc4],0x0
  40dca8:	00 
  40dca9:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dcae:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  40dcb1:	fe 48 43             	dec    BYTE PTR [eax+0x43]
  40dcb4:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dcb9:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  40dcbc:	80 79 43 00          	cmp    BYTE PTR [ecx+0x43],0x0
  40dcc0:	75 09                	jne    0x40dccb
  40dcc2:	83 60 04 fe          	and    DWORD PTR [eax+0x4],0xfffffffe
  40dcc6:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dccb:	83 78 08 ff          	cmp    DWORD PTR [eax+0x8],0xffffffff
  40dccf:	75 6c                	jne    0x40dd3d
  40dcd1:	53                   	push   ebx
  40dcd2:	6a 00                	push   0x0
  40dcd4:	ff 70 0c             	push   DWORD PTR [eax+0xc]
  40dcd7:	ff d7                	call   edi
  40dcd9:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dcde:	ff 70 10             	push   DWORD PTR [eax+0x10]
  40dce1:	6a 00                	push   0x0
  40dce3:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40dce9:	ff 15 f8 01 41 00    	call   DWORD PTR ds:0x4101f8
  40dcef:	a1 d8 3d 41 00       	mov    eax,ds:0x413dd8
  40dcf4:	8b 15 dc 3d 41 00    	mov    edx,DWORD PTR ds:0x413ddc
  40dcfa:	8d 04 80             	lea    eax,[eax+eax*4]
  40dcfd:	c1 e0 02             	shl    eax,0x2
  40dd00:	8b c8                	mov    ecx,eax
  40dd02:	a1 d4 3d 41 00       	mov    eax,ds:0x413dd4
  40dd07:	2b c8                	sub    ecx,eax
  40dd09:	8d 4c 11 ec          	lea    ecx,[ecx+edx*1-0x14]
  40dd0d:	51                   	push   ecx
  40dd0e:	8d 48 14             	lea    ecx,[eax+0x14]
  40dd11:	51                   	push   ecx
  40dd12:	50                   	push   eax
  40dd13:	e8 48 12 00 00       	call   0x40ef60
  40dd18:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40dd1b:	83 c4 0c             	add    esp,0xc
  40dd1e:	ff 0d d8 3d 41 00    	dec    DWORD PTR ds:0x413dd8
  40dd24:	3b 05 d4 3d 41 00    	cmp    eax,DWORD PTR ds:0x413dd4
  40dd2a:	76 03                	jbe    0x40dd2f
  40dd2c:	83 e8 14             	sub    eax,0x14
  40dd2f:	8b 0d dc 3d 41 00    	mov    ecx,DWORD PTR ds:0x413ddc
  40dd35:	89 0d d0 3d 41 00    	mov    DWORD PTR ds:0x413dd0,ecx
  40dd3b:	eb 03                	jmp    0x40dd40
  40dd3d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40dd40:	a3 d4 3d 41 00       	mov    ds:0x413dd4,eax
  40dd45:	89 35 cc 3d 41 00    	mov    DWORD PTR ds:0x413dcc,esi
  40dd4b:	5f                   	pop    edi
  40dd4c:	5e                   	pop    esi
  40dd4d:	5b                   	pop    ebx
  40dd4e:	c9                   	leave
  40dd4f:	c3                   	ret
  40dd50:	55                   	push   ebp
  40dd51:	8b ec                	mov    ebp,esp
  40dd53:	83 ec 14             	sub    esp,0x14
  40dd56:	a1 d8 3d 41 00       	mov    eax,ds:0x413dd8
  40dd5b:	8b 15 dc 3d 41 00    	mov    edx,DWORD PTR ds:0x413ddc
  40dd61:	53                   	push   ebx
  40dd62:	56                   	push   esi
  40dd63:	8d 04 80             	lea    eax,[eax+eax*4]
  40dd66:	57                   	push   edi
  40dd67:	8d 3c 82             	lea    edi,[edx+eax*4]
  40dd6a:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40dd6d:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  40dd70:	8d 48 17             	lea    ecx,[eax+0x17]
  40dd73:	83 e1 f0             	and    ecx,0xfffffff0
  40dd76:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  40dd79:	c1 f9 04             	sar    ecx,0x4
  40dd7c:	49                   	dec    ecx
  40dd7d:	83 f9 20             	cmp    ecx,0x20
  40dd80:	7d 0e                	jge    0x40dd90
  40dd82:	83 ce ff             	or     esi,0xffffffff
  40dd85:	d3 ee                	shr    esi,cl
  40dd87:	83 4d f8 ff          	or     DWORD PTR [ebp-0x8],0xffffffff
  40dd8b:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
  40dd8e:	eb 10                	jmp    0x40dda0
  40dd90:	83 c1 e0             	add    ecx,0xffffffe0
  40dd93:	83 c8 ff             	or     eax,0xffffffff
  40dd96:	33 f6                	xor    esi,esi
  40dd98:	d3 e8                	shr    eax,cl
  40dd9a:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
  40dd9d:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  40dda0:	a1 d0 3d 41 00       	mov    eax,ds:0x413dd0
  40dda5:	8b d8                	mov    ebx,eax
  40dda7:	3b df                	cmp    ebx,edi
  40dda9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  40ddac:	73 19                	jae    0x40ddc7
  40ddae:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  40ddb1:	8b 3b                	mov    edi,DWORD PTR [ebx]
  40ddb3:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  40ddb6:	23 fe                	and    edi,esi
  40ddb8:	0b cf                	or     ecx,edi
  40ddba:	75 0b                	jne    0x40ddc7
  40ddbc:	83 c3 14             	add    ebx,0x14
  40ddbf:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  40ddc2:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  40ddc5:	72 e7                	jb     0x40ddae
  40ddc7:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  40ddca:	75 79                	jne    0x40de45
  40ddcc:	8b da                	mov    ebx,edx
  40ddce:	3b d8                	cmp    ebx,eax
  40ddd0:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  40ddd3:	73 15                	jae    0x40ddea
  40ddd5:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  40ddd8:	8b 3b                	mov    edi,DWORD PTR [ebx]
  40ddda:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  40dddd:	23 fe                	and    edi,esi
  40dddf:	0b cf                	or     ecx,edi
  40dde1:	75 05                	jne    0x40dde8
  40dde3:	83 c3 14             	add    ebx,0x14
  40dde6:	eb e6                	jmp    0x40ddce
  40dde8:	3b d8                	cmp    ebx,eax
  40ddea:	75 59                	jne    0x40de45
  40ddec:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  40ddef:	73 11                	jae    0x40de02
  40ddf1:	83 7b 08 00          	cmp    DWORD PTR [ebx+0x8],0x0
  40ddf5:	75 08                	jne    0x40ddff
  40ddf7:	83 c3 14             	add    ebx,0x14
  40ddfa:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  40ddfd:	eb ed                	jmp    0x40ddec
  40ddff:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  40de02:	75 26                	jne    0x40de2a
  40de04:	8b da                	mov    ebx,edx
  40de06:	3b d8                	cmp    ebx,eax
  40de08:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  40de0b:	73 0d                	jae    0x40de1a
  40de0d:	83 7b 08 00          	cmp    DWORD PTR [ebx+0x8],0x0
  40de11:	75 05                	jne    0x40de18
  40de13:	83 c3 14             	add    ebx,0x14
  40de16:	eb ee                	jmp    0x40de06
  40de18:	3b d8                	cmp    ebx,eax
  40de1a:	75 0e                	jne    0x40de2a
  40de1c:	e8 38 02 00 00       	call   0x40e059
  40de21:	8b d8                	mov    ebx,eax
  40de23:	85 db                	test   ebx,ebx
  40de25:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  40de28:	74 14                	je     0x40de3e
  40de2a:	53                   	push   ebx
  40de2b:	e8 da 02 00 00       	call   0x40e10a
  40de30:	59                   	pop    ecx
  40de31:	8b 4b 10             	mov    ecx,DWORD PTR [ebx+0x10]
  40de34:	89 01                	mov    DWORD PTR [ecx],eax
  40de36:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
  40de39:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
  40de3c:	75 07                	jne    0x40de45
  40de3e:	33 c0                	xor    eax,eax
  40de40:	e9 0f 02 00 00       	jmp    0x40e054
  40de45:	89 1d d0 3d 41 00    	mov    DWORD PTR ds:0x413dd0,ebx
  40de4b:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
  40de4e:	8b 10                	mov    edx,DWORD PTR [eax]
  40de50:	83 fa ff             	cmp    edx,0xffffffff
  40de53:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
  40de56:	74 14                	je     0x40de6c
  40de58:	8b 8c 90 c4 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xc4]
  40de5f:	8b 7c 90 44          	mov    edi,DWORD PTR [eax+edx*4+0x44]
  40de63:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  40de66:	23 fe                	and    edi,esi
  40de68:	0b cf                	or     ecx,edi
  40de6a:	75 37                	jne    0x40dea3
  40de6c:	8b 90 c4 00 00 00    	mov    edx,DWORD PTR [eax+0xc4]
  40de72:	8b 70 44             	mov    esi,DWORD PTR [eax+0x44]
  40de75:	23 55 f8             	and    edx,DWORD PTR [ebp-0x8]
  40de78:	23 75 f4             	and    esi,DWORD PTR [ebp-0xc]
  40de7b:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
  40de7f:	8d 48 44             	lea    ecx,[eax+0x44]
  40de82:	0b d6                	or     edx,esi
  40de84:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
  40de87:	75 17                	jne    0x40dea0
  40de89:	8b 91 84 00 00 00    	mov    edx,DWORD PTR [ecx+0x84]
  40de8f:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  40de92:	23 55 f8             	and    edx,DWORD PTR [ebp-0x8]
  40de95:	83 c1 04             	add    ecx,0x4
  40de98:	8b fe                	mov    edi,esi
  40de9a:	23 39                	and    edi,DWORD PTR [ecx]
  40de9c:	0b d7                	or     edx,edi
  40de9e:	74 e9                	je     0x40de89
  40dea0:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  40dea3:	8b ca                	mov    ecx,edx
  40dea5:	33 ff                	xor    edi,edi
  40dea7:	69 c9 04 02 00 00    	imul   ecx,ecx,0x204
  40dead:	8d 8c 01 44 01 00 00 	lea    ecx,[ecx+eax*1+0x144]
  40deb4:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  40deb7:	8b 4c 90 44          	mov    ecx,DWORD PTR [eax+edx*4+0x44]
  40debb:	23 ce                	and    ecx,esi
  40debd:	75 0d                	jne    0x40decc
  40debf:	8b 8c 90 c4 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xc4]
  40dec6:	6a 20                	push   0x20
  40dec8:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  40decb:	5f                   	pop    edi
  40decc:	85 c9                	test   ecx,ecx
  40dece:	7c 05                	jl     0x40ded5
  40ded0:	d1 e1                	shl    ecx,1
  40ded2:	47                   	inc    edi
  40ded3:	eb f7                	jmp    0x40decc
  40ded5:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  40ded8:	8b 54 f9 04          	mov    edx,DWORD PTR [ecx+edi*8+0x4]
  40dedc:	8b 0a                	mov    ecx,DWORD PTR [edx]
  40dede:	2b 4d f0             	sub    ecx,DWORD PTR [ebp-0x10]
  40dee1:	8b f1                	mov    esi,ecx
  40dee3:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  40dee6:	c1 fe 04             	sar    esi,0x4
  40dee9:	4e                   	dec    esi
  40deea:	83 fe 3f             	cmp    esi,0x3f
  40deed:	7e 03                	jle    0x40def2
  40deef:	6a 3f                	push   0x3f
  40def1:	5e                   	pop    esi
  40def2:	3b f7                	cmp    esi,edi
  40def4:	0f 84 0d 01 00 00    	je     0x40e007
  40defa:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40defd:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
  40df00:	75 61                	jne    0x40df63
  40df02:	83 ff 20             	cmp    edi,0x20
  40df05:	7d 2b                	jge    0x40df32
  40df07:	bb 00 00 00 80       	mov    ebx,0x80000000
  40df0c:	8b cf                	mov    ecx,edi
  40df0e:	d3 eb                	shr    ebx,cl
  40df10:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40df13:	8d 7c 38 04          	lea    edi,[eax+edi*1+0x4]
  40df17:	f7 d3                	not    ebx
  40df19:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
  40df1c:	23 5c 88 44          	and    ebx,DWORD PTR [eax+ecx*4+0x44]
  40df20:	89 5c 88 44          	mov    DWORD PTR [eax+ecx*4+0x44],ebx
  40df24:	fe 0f                	dec    BYTE PTR [edi]
  40df26:	75 38                	jne    0x40df60
  40df28:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40df2b:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  40df2e:	21 0b                	and    DWORD PTR [ebx],ecx
  40df30:	eb 31                	jmp    0x40df63
  40df32:	8d 4f e0             	lea    ecx,[edi-0x20]
  40df35:	bb 00 00 00 80       	mov    ebx,0x80000000
  40df3a:	d3 eb                	shr    ebx,cl
  40df3c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40df3f:	8d 7c 38 04          	lea    edi,[eax+edi*1+0x4]
  40df43:	8d 8c 88 c4 00 00 00 	lea    ecx,[eax+ecx*4+0xc4]
  40df4a:	f7 d3                	not    ebx
  40df4c:	21 19                	and    DWORD PTR [ecx],ebx
  40df4e:	fe 0f                	dec    BYTE PTR [edi]
  40df50:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
  40df53:	75 0b                	jne    0x40df60
  40df55:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40df58:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  40df5b:	21 4b 04             	and    DWORD PTR [ebx+0x4],ecx
  40df5e:	eb 03                	jmp    0x40df63
  40df60:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40df63:	8b 4a 08             	mov    ecx,DWORD PTR [edx+0x8]
  40df66:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  40df69:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
  40df6d:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
  40df70:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40df73:	8b 7a 08             	mov    edi,DWORD PTR [edx+0x8]
  40df76:	89 79 08             	mov    DWORD PTR [ecx+0x8],edi
  40df79:	0f 84 94 00 00 00    	je     0x40e013
  40df7f:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  40df82:	8b 7c f1 04          	mov    edi,DWORD PTR [ecx+esi*8+0x4]
  40df86:	8d 0c f1             	lea    ecx,[ecx+esi*8]
  40df89:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
  40df8c:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  40df8f:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  40df92:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40df95:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  40df98:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40df9b:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
  40df9e:	75 64                	jne    0x40e004
  40dfa0:	8a 4c 06 04          	mov    cl,BYTE PTR [esi+eax*1+0x4]
  40dfa4:	83 fe 20             	cmp    esi,0x20
  40dfa7:	88 4d 0b             	mov    BYTE PTR [ebp+0xb],cl
  40dfaa:	7d 29                	jge    0x40dfd5
  40dfac:	fe c1                	inc    cl
  40dfae:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
  40dfb2:	88 4c 06 04          	mov    BYTE PTR [esi+eax*1+0x4],cl
  40dfb6:	75 0b                	jne    0x40dfc3
  40dfb8:	bf 00 00 00 80       	mov    edi,0x80000000
  40dfbd:	8b ce                	mov    ecx,esi
  40dfbf:	d3 ef                	shr    edi,cl
  40dfc1:	09 3b                	or     DWORD PTR [ebx],edi
  40dfc3:	bf 00 00 00 80       	mov    edi,0x80000000
  40dfc8:	8b ce                	mov    ecx,esi
  40dfca:	d3 ef                	shr    edi,cl
  40dfcc:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40dfcf:	09 7c 88 44          	or     DWORD PTR [eax+ecx*4+0x44],edi
  40dfd3:	eb 2f                	jmp    0x40e004
  40dfd5:	fe c1                	inc    cl
  40dfd7:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
  40dfdb:	88 4c 06 04          	mov    BYTE PTR [esi+eax*1+0x4],cl
  40dfdf:	75 0d                	jne    0x40dfee
  40dfe1:	8d 4e e0             	lea    ecx,[esi-0x20]
  40dfe4:	bf 00 00 00 80       	mov    edi,0x80000000
  40dfe9:	d3 ef                	shr    edi,cl
  40dfeb:	09 7b 04             	or     DWORD PTR [ebx+0x4],edi
  40dfee:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40dff1:	8d bc 88 c4 00 00 00 	lea    edi,[eax+ecx*4+0xc4]
  40dff8:	8d 4e e0             	lea    ecx,[esi-0x20]
  40dffb:	be 00 00 00 80       	mov    esi,0x80000000
  40e000:	d3 ee                	shr    esi,cl
  40e002:	09 37                	or     DWORD PTR [edi],esi
  40e004:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40e007:	85 c9                	test   ecx,ecx
  40e009:	74 0b                	je     0x40e016
  40e00b:	89 0a                	mov    DWORD PTR [edx],ecx
  40e00d:	89 4c 11 fc          	mov    DWORD PTR [ecx+edx*1-0x4],ecx
  40e011:	eb 03                	jmp    0x40e016
  40e013:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  40e016:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
  40e019:	03 d1                	add    edx,ecx
  40e01b:	8d 4e 01             	lea    ecx,[esi+0x1]
  40e01e:	89 0a                	mov    DWORD PTR [edx],ecx
  40e020:	89 4c 32 fc          	mov    DWORD PTR [edx+esi*1-0x4],ecx
  40e024:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
  40e027:	8b 0e                	mov    ecx,DWORD PTR [esi]
  40e029:	85 c9                	test   ecx,ecx
  40e02b:	8d 79 01             	lea    edi,[ecx+0x1]
  40e02e:	89 3e                	mov    DWORD PTR [esi],edi
  40e030:	75 1a                	jne    0x40e04c
  40e032:	3b 1d d4 3d 41 00    	cmp    ebx,DWORD PTR ds:0x413dd4
  40e038:	75 12                	jne    0x40e04c
  40e03a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40e03d:	3b 0d cc 3d 41 00    	cmp    ecx,DWORD PTR ds:0x413dcc
  40e043:	75 07                	jne    0x40e04c
  40e045:	83 25 d4 3d 41 00 00 	and    DWORD PTR ds:0x413dd4,0x0
  40e04c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40e04f:	89 08                	mov    DWORD PTR [eax],ecx
  40e051:	8d 42 04             	lea    eax,[edx+0x4]
  40e054:	5f                   	pop    edi
  40e055:	5e                   	pop    esi
  40e056:	5b                   	pop    ebx
  40e057:	c9                   	leave
  40e058:	c3                   	ret
  40e059:	a1 d8 3d 41 00       	mov    eax,ds:0x413dd8
  40e05e:	8b 0d c8 3d 41 00    	mov    ecx,DWORD PTR ds:0x413dc8
  40e064:	56                   	push   esi
  40e065:	57                   	push   edi
  40e066:	33 ff                	xor    edi,edi
  40e068:	3b c1                	cmp    eax,ecx
  40e06a:	75 30                	jne    0x40e09c
  40e06c:	8d 44 89 50          	lea    eax,[ecx+ecx*4+0x50]
  40e070:	c1 e0 02             	shl    eax,0x2
  40e073:	50                   	push   eax
  40e074:	ff 35 dc 3d 41 00    	push   DWORD PTR ds:0x413ddc
  40e07a:	57                   	push   edi
  40e07b:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40e081:	ff 15 94 01 41 00    	call   DWORD PTR ds:0x410194
  40e087:	3b c7                	cmp    eax,edi
  40e089:	74 61                	je     0x40e0ec
  40e08b:	83 05 c8 3d 41 00 10 	add    DWORD PTR ds:0x413dc8,0x10
  40e092:	a3 dc 3d 41 00       	mov    ds:0x413ddc,eax
  40e097:	a1 d8 3d 41 00       	mov    eax,ds:0x413dd8
  40e09c:	8b 0d dc 3d 41 00    	mov    ecx,DWORD PTR ds:0x413ddc
  40e0a2:	68 c4 41 00 00       	push   0x41c4
  40e0a7:	6a 08                	push   0x8
  40e0a9:	8d 04 80             	lea    eax,[eax+eax*4]
  40e0ac:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40e0b2:	8d 34 81             	lea    esi,[ecx+eax*4]
  40e0b5:	ff 15 fc 01 41 00    	call   DWORD PTR ds:0x4101fc
  40e0bb:	3b c7                	cmp    eax,edi
  40e0bd:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  40e0c0:	74 2a                	je     0x40e0ec
  40e0c2:	6a 04                	push   0x4
  40e0c4:	68 00 20 00 00       	push   0x2000
  40e0c9:	68 00 00 10 00       	push   0x100000
  40e0ce:	57                   	push   edi
  40e0cf:	ff 15 98 01 41 00    	call   DWORD PTR ds:0x410198
  40e0d5:	3b c7                	cmp    eax,edi
  40e0d7:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  40e0da:	75 14                	jne    0x40e0f0
  40e0dc:	ff 76 10             	push   DWORD PTR [esi+0x10]
  40e0df:	57                   	push   edi
  40e0e0:	ff 35 e0 3d 41 00    	push   DWORD PTR ds:0x413de0
  40e0e6:	ff 15 f8 01 41 00    	call   DWORD PTR ds:0x4101f8
  40e0ec:	33 c0                	xor    eax,eax
  40e0ee:	eb 17                	jmp    0x40e107
  40e0f0:	83 4e 08 ff          	or     DWORD PTR [esi+0x8],0xffffffff
  40e0f4:	89 3e                	mov    DWORD PTR [esi],edi
  40e0f6:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  40e0f9:	ff 05 d8 3d 41 00    	inc    DWORD PTR ds:0x413dd8
  40e0ff:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  40e102:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  40e105:	8b c6                	mov    eax,esi
  40e107:	5f                   	pop    edi
  40e108:	5e                   	pop    esi
  40e109:	c3                   	ret
  40e10a:	55                   	push   ebp
  40e10b:	8b ec                	mov    ebp,esp
  40e10d:	51                   	push   ecx
  40e10e:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40e111:	53                   	push   ebx
  40e112:	56                   	push   esi
  40e113:	57                   	push   edi
  40e114:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
  40e117:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
  40e11a:	33 db                	xor    ebx,ebx
  40e11c:	85 c0                	test   eax,eax
  40e11e:	7c 05                	jl     0x40e125
  40e120:	d1 e0                	shl    eax,1
  40e122:	43                   	inc    ebx
  40e123:	eb f7                	jmp    0x40e11c
  40e125:	8b c3                	mov    eax,ebx
  40e127:	6a 3f                	push   0x3f
  40e129:	69 c0 04 02 00 00    	imul   eax,eax,0x204
  40e12f:	5a                   	pop    edx
  40e130:	8d 84 30 44 01 00 00 	lea    eax,[eax+esi*1+0x144]
  40e137:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40e13a:	89 40 08             	mov    DWORD PTR [eax+0x8],eax
  40e13d:	89 40 04             	mov    DWORD PTR [eax+0x4],eax
  40e140:	83 c0 08             	add    eax,0x8
  40e143:	4a                   	dec    edx
  40e144:	75 f4                	jne    0x40e13a
  40e146:	8b fb                	mov    edi,ebx
  40e148:	6a 04                	push   0x4
  40e14a:	c1 e7 0f             	shl    edi,0xf
  40e14d:	03 79 0c             	add    edi,DWORD PTR [ecx+0xc]
  40e150:	68 00 10 00 00       	push   0x1000
  40e155:	68 00 80 00 00       	push   0x8000
  40e15a:	57                   	push   edi
  40e15b:	ff 15 98 01 41 00    	call   DWORD PTR ds:0x410198
  40e161:	85 c0                	test   eax,eax
  40e163:	75 08                	jne    0x40e16d
  40e165:	83 c8 ff             	or     eax,0xffffffff
  40e168:	e9 93 00 00 00       	jmp    0x40e200
  40e16d:	8d 97 00 70 00 00    	lea    edx,[edi+0x7000]
  40e173:	3b fa                	cmp    edi,edx
  40e175:	77 3c                	ja     0x40e1b3
  40e177:	8d 47 10             	lea    eax,[edi+0x10]
  40e17a:	83 48 f8 ff          	or     DWORD PTR [eax-0x8],0xffffffff
  40e17e:	83 88 ec 0f 00 00 ff 	or     DWORD PTR [eax+0xfec],0xffffffff
  40e185:	8d 88 fc 0f 00 00    	lea    ecx,[eax+0xffc]
  40e18b:	c7 40 fc f0 0f 00 00 	mov    DWORD PTR [eax-0x4],0xff0
  40e192:	89 08                	mov    DWORD PTR [eax],ecx
  40e194:	8d 88 fc ef ff ff    	lea    ecx,[eax-0x1004]
  40e19a:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  40e19d:	c7 80 e8 0f 00 00 f0 	mov    DWORD PTR [eax+0xfe8],0xff0
  40e1a4:	0f 00 00 
  40e1a7:	05 00 10 00 00       	add    eax,0x1000
  40e1ac:	8d 48 f0             	lea    ecx,[eax-0x10]
  40e1af:	3b ca                	cmp    ecx,edx
  40e1b1:	76 c7                	jbe    0x40e17a
  40e1b3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40e1b6:	8d 4f 0c             	lea    ecx,[edi+0xc]
  40e1b9:	05 f8 01 00 00       	add    eax,0x1f8
  40e1be:	6a 01                	push   0x1
  40e1c0:	5f                   	pop    edi
  40e1c1:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  40e1c4:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  40e1c7:	8d 4a 0c             	lea    ecx,[edx+0xc]
  40e1ca:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  40e1cd:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  40e1d0:	83 64 9e 44 00       	and    DWORD PTR [esi+ebx*4+0x44],0x0
  40e1d5:	89 bc 9e c4 00 00 00 	mov    DWORD PTR [esi+ebx*4+0xc4],edi
  40e1dc:	8a 46 43             	mov    al,BYTE PTR [esi+0x43]
  40e1df:	8a c8                	mov    cl,al
  40e1e1:	fe c1                	inc    cl
  40e1e3:	84 c0                	test   al,al
  40e1e5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40e1e8:	88 4e 43             	mov    BYTE PTR [esi+0x43],cl
  40e1eb:	75 03                	jne    0x40e1f0
  40e1ed:	09 78 04             	or     DWORD PTR [eax+0x4],edi
  40e1f0:	ba 00 00 00 80       	mov    edx,0x80000000
  40e1f5:	8b cb                	mov    ecx,ebx
  40e1f7:	d3 ea                	shr    edx,cl
  40e1f9:	f7 d2                	not    edx
  40e1fb:	21 50 08             	and    DWORD PTR [eax+0x8],edx
  40e1fe:	8b c3                	mov    eax,ebx
  40e200:	5f                   	pop    edi
  40e201:	5e                   	pop    esi
  40e202:	5b                   	pop    ebx
  40e203:	c9                   	leave
  40e204:	c3                   	ret
  40e205:	55                   	push   ebp
  40e206:	8b ec                	mov    ebp,esp
  40e208:	53                   	push   ebx
  40e209:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40e20c:	e8 35 01 00 00       	call   0x40e346
  40e211:	85 c0                	test   eax,eax
  40e213:	59                   	pop    ecx
  40e214:	0f 84 20 01 00 00    	je     0x40e33a
  40e21a:	8b 58 08             	mov    ebx,DWORD PTR [eax+0x8]
  40e21d:	85 db                	test   ebx,ebx
  40e21f:	0f 84 15 01 00 00    	je     0x40e33a
  40e225:	83 fb 05             	cmp    ebx,0x5
  40e228:	75 0c                	jne    0x40e236
  40e22a:	83 60 08 00          	and    DWORD PTR [eax+0x8],0x0
  40e22e:	6a 01                	push   0x1
  40e230:	58                   	pop    eax
  40e231:	e9 0d 01 00 00       	jmp    0x40e343
  40e236:	83 fb 01             	cmp    ebx,0x1
  40e239:	0f 84 f6 00 00 00    	je     0x40e335
  40e23f:	8b 0d 64 35 41 00    	mov    ecx,DWORD PTR ds:0x413564
  40e245:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
  40e248:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  40e24b:	89 0d 64 35 41 00    	mov    DWORD PTR ds:0x413564,ecx
  40e251:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  40e254:	83 f9 08             	cmp    ecx,0x8
  40e257:	0f 85 c8 00 00 00    	jne    0x40e325
  40e25d:	8b 0d 28 33 41 00    	mov    ecx,DWORD PTR ds:0x413328
  40e263:	8b 15 2c 33 41 00    	mov    edx,DWORD PTR ds:0x41332c
  40e269:	03 d1                	add    edx,ecx
  40e26b:	56                   	push   esi
  40e26c:	3b ca                	cmp    ecx,edx
  40e26e:	7d 15                	jge    0x40e285
  40e270:	8d 34 49             	lea    esi,[ecx+ecx*2]
  40e273:	2b d1                	sub    edx,ecx
  40e275:	8d 34 b5 b8 32 41 00 	lea    esi,[esi*4+0x4132b8]
  40e27c:	83 26 00             	and    DWORD PTR [esi],0x0
  40e27f:	83 c6 0c             	add    esi,0xc
  40e282:	4a                   	dec    edx
  40e283:	75 f7                	jne    0x40e27c
  40e285:	8b 00                	mov    eax,DWORD PTR [eax]
  40e287:	8b 35 34 33 41 00    	mov    esi,DWORD PTR ds:0x413334
  40e28d:	3d 8e 00 00 c0       	cmp    eax,0xc000008e
  40e292:	75 0c                	jne    0x40e2a0
  40e294:	c7 05 34 33 41 00 83 	mov    DWORD PTR ds:0x413334,0x83
  40e29b:	00 00 00 
  40e29e:	eb 70                	jmp    0x40e310
  40e2a0:	3d 90 00 00 c0       	cmp    eax,0xc0000090
  40e2a5:	75 0c                	jne    0x40e2b3
  40e2a7:	c7 05 34 33 41 00 81 	mov    DWORD PTR ds:0x413334,0x81
  40e2ae:	00 00 00 
  40e2b1:	eb 5d                	jmp    0x40e310
  40e2b3:	3d 91 00 00 c0       	cmp    eax,0xc0000091
  40e2b8:	75 0c                	jne    0x40e2c6
  40e2ba:	c7 05 34 33 41 00 84 	mov    DWORD PTR ds:0x413334,0x84
  40e2c1:	00 00 00 
  40e2c4:	eb 4a                	jmp    0x40e310
  40e2c6:	3d 93 00 00 c0       	cmp    eax,0xc0000093
  40e2cb:	75 0c                	jne    0x40e2d9
  40e2cd:	c7 05 34 33 41 00 85 	mov    DWORD PTR ds:0x413334,0x85
  40e2d4:	00 00 00 
  40e2d7:	eb 37                	jmp    0x40e310
  40e2d9:	3d 8d 00 00 c0       	cmp    eax,0xc000008d
  40e2de:	75 0c                	jne    0x40e2ec
  40e2e0:	c7 05 34 33 41 00 82 	mov    DWORD PTR ds:0x413334,0x82
  40e2e7:	00 00 00 
  40e2ea:	eb 24                	jmp    0x40e310
  40e2ec:	3d 8f 00 00 c0       	cmp    eax,0xc000008f
  40e2f1:	75 0c                	jne    0x40e2ff
  40e2f3:	c7 05 34 33 41 00 86 	mov    DWORD PTR ds:0x413334,0x86
  40e2fa:	00 00 00 
  40e2fd:	eb 11                	jmp    0x40e310
  40e2ff:	3d 92 00 00 c0       	cmp    eax,0xc0000092
  40e304:	75 0a                	jne    0x40e310
  40e306:	c7 05 34 33 41 00 8a 	mov    DWORD PTR ds:0x413334,0x8a
  40e30d:	00 00 00 
  40e310:	ff 35 34 33 41 00    	push   DWORD PTR ds:0x413334
  40e316:	6a 08                	push   0x8
  40e318:	ff d3                	call   ebx
  40e31a:	59                   	pop    ecx
  40e31b:	89 35 34 33 41 00    	mov    DWORD PTR ds:0x413334,esi
  40e321:	59                   	pop    ecx
  40e322:	5e                   	pop    esi
  40e323:	eb 08                	jmp    0x40e32d
  40e325:	83 60 08 00          	and    DWORD PTR [eax+0x8],0x0
  40e329:	51                   	push   ecx
  40e32a:	ff d3                	call   ebx
  40e32c:	59                   	pop    ecx
  40e32d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40e330:	a3 64 35 41 00       	mov    ds:0x413564,eax
  40e335:	83 c8 ff             	or     eax,0xffffffff
  40e338:	eb 09                	jmp    0x40e343
  40e33a:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40e33d:	ff 15 9c 01 41 00    	call   DWORD PTR ds:0x41019c
  40e343:	5b                   	pop    ebx
  40e344:	5d                   	pop    ebp
  40e345:	c3                   	ret
  40e346:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  40e34a:	8b 0d 30 33 41 00    	mov    ecx,DWORD PTR ds:0x413330
  40e350:	39 15 b0 32 41 00    	cmp    DWORD PTR ds:0x4132b0,edx
  40e356:	56                   	push   esi
  40e357:	b8 b0 32 41 00       	mov    eax,0x4132b0
  40e35c:	74 15                	je     0x40e373
  40e35e:	8d 34 49             	lea    esi,[ecx+ecx*2]
  40e361:	8d 34 b5 b0 32 41 00 	lea    esi,[esi*4+0x4132b0]
  40e368:	83 c0 0c             	add    eax,0xc
  40e36b:	3b c6                	cmp    eax,esi
  40e36d:	73 04                	jae    0x40e373
  40e36f:	39 10                	cmp    DWORD PTR [eax],edx
  40e371:	75 f5                	jne    0x40e368
  40e373:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
  40e376:	5e                   	pop    esi
  40e377:	8d 0c 8d b0 32 41 00 	lea    ecx,[ecx*4+0x4132b0]
  40e37e:	3b c1                	cmp    eax,ecx
  40e380:	73 04                	jae    0x40e386
  40e382:	39 10                	cmp    DWORD PTR [eax],edx
  40e384:	74 02                	je     0x40e388
  40e386:	33 c0                	xor    eax,eax
  40e388:	c3                   	ret
  40e389:	83 3d 08 3f 41 00 00 	cmp    DWORD PTR ds:0x413f08,0x0
  40e390:	75 05                	jne    0x40e397
  40e392:	e8 a5 0b 00 00       	call   0x40ef3c
  40e397:	56                   	push   esi
  40e398:	8b 35 18 3f 41 00    	mov    esi,DWORD PTR ds:0x413f18
  40e39e:	8a 06                	mov    al,BYTE PTR [esi]
  40e3a0:	3c 22                	cmp    al,0x22
  40e3a2:	75 25                	jne    0x40e3c9
  40e3a4:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40e3a7:	46                   	inc    esi
  40e3a8:	3c 22                	cmp    al,0x22
  40e3aa:	74 15                	je     0x40e3c1
  40e3ac:	84 c0                	test   al,al
  40e3ae:	74 11                	je     0x40e3c1
  40e3b0:	0f b6 c0             	movzx  eax,al
  40e3b3:	50                   	push   eax
  40e3b4:	e8 dc 0e 00 00       	call   0x40f295
  40e3b9:	85 c0                	test   eax,eax
  40e3bb:	59                   	pop    ecx
  40e3bc:	74 e6                	je     0x40e3a4
  40e3be:	46                   	inc    esi
  40e3bf:	eb e3                	jmp    0x40e3a4
  40e3c1:	80 3e 22             	cmp    BYTE PTR [esi],0x22
  40e3c4:	75 0d                	jne    0x40e3d3
  40e3c6:	46                   	inc    esi
  40e3c7:	eb 0a                	jmp    0x40e3d3
  40e3c9:	3c 20                	cmp    al,0x20
  40e3cb:	76 06                	jbe    0x40e3d3
  40e3cd:	46                   	inc    esi
  40e3ce:	80 3e 20             	cmp    BYTE PTR [esi],0x20
  40e3d1:	77 fa                	ja     0x40e3cd
  40e3d3:	8a 06                	mov    al,BYTE PTR [esi]
  40e3d5:	84 c0                	test   al,al
  40e3d7:	74 04                	je     0x40e3dd
  40e3d9:	3c 20                	cmp    al,0x20
  40e3db:	76 e9                	jbe    0x40e3c6
  40e3dd:	8b c6                	mov    eax,esi
  40e3df:	5e                   	pop    esi
  40e3e0:	c3                   	ret
  40e3e1:	53                   	push   ebx
  40e3e2:	33 db                	xor    ebx,ebx
  40e3e4:	39 1d 08 3f 41 00    	cmp    DWORD PTR ds:0x413f08,ebx
  40e3ea:	56                   	push   esi
  40e3eb:	57                   	push   edi
  40e3ec:	75 05                	jne    0x40e3f3
  40e3ee:	e8 49 0b 00 00       	call   0x40ef3c
  40e3f3:	8b 35 d8 34 41 00    	mov    esi,DWORD PTR ds:0x4134d8
  40e3f9:	33 ff                	xor    edi,edi
  40e3fb:	8a 06                	mov    al,BYTE PTR [esi]
  40e3fd:	3a c3                	cmp    al,bl
  40e3ff:	74 12                	je     0x40e413
  40e401:	3c 3d                	cmp    al,0x3d
  40e403:	74 01                	je     0x40e406
  40e405:	47                   	inc    edi
  40e406:	56                   	push   esi
  40e407:	e8 d4 0e 00 00       	call   0x40f2e0
  40e40c:	59                   	pop    ecx
  40e40d:	8d 74 06 01          	lea    esi,[esi+eax*1+0x1]
  40e411:	eb e8                	jmp    0x40e3fb
  40e413:	8d 04 bd 04 00 00 00 	lea    eax,[edi*4+0x4]
  40e41a:	50                   	push   eax
  40e41b:	e8 96 e4 ff ff       	call   0x40c8b6
  40e420:	8b f0                	mov    esi,eax
  40e422:	59                   	pop    ecx
  40e423:	3b f3                	cmp    esi,ebx
  40e425:	89 35 0c 35 41 00    	mov    DWORD PTR ds:0x41350c,esi
  40e42b:	75 08                	jne    0x40e435
  40e42d:	6a 09                	push   0x9
  40e42f:	e8 1b e6 ff ff       	call   0x40ca4f
  40e434:	59                   	pop    ecx
  40e435:	8b 3d d8 34 41 00    	mov    edi,DWORD PTR ds:0x4134d8
  40e43b:	38 1f                	cmp    BYTE PTR [edi],bl
  40e43d:	74 39                	je     0x40e478
  40e43f:	55                   	push   ebp
  40e440:	57                   	push   edi
  40e441:	e8 9a 0e 00 00       	call   0x40f2e0
  40e446:	8b e8                	mov    ebp,eax
  40e448:	59                   	pop    ecx
  40e449:	45                   	inc    ebp
  40e44a:	80 3f 3d             	cmp    BYTE PTR [edi],0x3d
  40e44d:	74 22                	je     0x40e471
  40e44f:	55                   	push   ebp
  40e450:	e8 61 e4 ff ff       	call   0x40c8b6
  40e455:	3b c3                	cmp    eax,ebx
  40e457:	59                   	pop    ecx
  40e458:	89 06                	mov    DWORD PTR [esi],eax
  40e45a:	75 08                	jne    0x40e464
  40e45c:	6a 09                	push   0x9
  40e45e:	e8 ec e5 ff ff       	call   0x40ca4f
  40e463:	59                   	pop    ecx
  40e464:	57                   	push   edi
  40e465:	ff 36                	push   DWORD PTR [esi]
  40e467:	e8 14 e7 ff ff       	call   0x40cb80
  40e46c:	59                   	pop    ecx
  40e46d:	83 c6 04             	add    esi,0x4
  40e470:	59                   	pop    ecx
  40e471:	03 fd                	add    edi,ebp
  40e473:	38 1f                	cmp    BYTE PTR [edi],bl
  40e475:	75 c9                	jne    0x40e440
  40e477:	5d                   	pop    ebp
  40e478:	ff 35 d8 34 41 00    	push   DWORD PTR ds:0x4134d8
  40e47e:	e8 a7 e4 ff ff       	call   0x40c92a
  40e483:	59                   	pop    ecx
  40e484:	89 1d d8 34 41 00    	mov    DWORD PTR ds:0x4134d8,ebx
  40e48a:	89 1e                	mov    DWORD PTR [esi],ebx
  40e48c:	5f                   	pop    edi
  40e48d:	5e                   	pop    esi
  40e48e:	c7 05 04 3f 41 00 01 	mov    DWORD PTR ds:0x413f04,0x1
  40e495:	00 00 00 
  40e498:	5b                   	pop    ebx
  40e499:	c3                   	ret
  40e49a:	55                   	push   ebp
  40e49b:	8b ec                	mov    ebp,esp
  40e49d:	51                   	push   ecx
  40e49e:	51                   	push   ecx
  40e49f:	53                   	push   ebx
  40e4a0:	33 db                	xor    ebx,ebx
  40e4a2:	39 1d 08 3f 41 00    	cmp    DWORD PTR ds:0x413f08,ebx
  40e4a8:	56                   	push   esi
  40e4a9:	57                   	push   edi
  40e4aa:	75 05                	jne    0x40e4b1
  40e4ac:	e8 8b 0a 00 00       	call   0x40ef3c
  40e4b1:	be 68 35 41 00       	mov    esi,0x413568
  40e4b6:	68 04 01 00 00       	push   0x104
  40e4bb:	56                   	push   esi
  40e4bc:	53                   	push   ebx
  40e4bd:	ff 15 6c 01 41 00    	call   DWORD PTR ds:0x41016c
  40e4c3:	a1 18 3f 41 00       	mov    eax,ds:0x413f18
  40e4c8:	89 35 1c 35 41 00    	mov    DWORD PTR ds:0x41351c,esi
  40e4ce:	8b fe                	mov    edi,esi
  40e4d0:	38 18                	cmp    BYTE PTR [eax],bl
  40e4d2:	74 02                	je     0x40e4d6
  40e4d4:	8b f8                	mov    edi,eax
  40e4d6:	8d 45 f8             	lea    eax,[ebp-0x8]
  40e4d9:	50                   	push   eax
  40e4da:	8d 45 fc             	lea    eax,[ebp-0x4]
  40e4dd:	50                   	push   eax
  40e4de:	53                   	push   ebx
  40e4df:	53                   	push   ebx
  40e4e0:	57                   	push   edi
  40e4e1:	e8 4d 00 00 00       	call   0x40e533
  40e4e6:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  40e4e9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40e4ec:	8d 04 88             	lea    eax,[eax+ecx*4]
  40e4ef:	50                   	push   eax
  40e4f0:	e8 c1 e3 ff ff       	call   0x40c8b6
  40e4f5:	8b f0                	mov    esi,eax
  40e4f7:	83 c4 18             	add    esp,0x18
  40e4fa:	3b f3                	cmp    esi,ebx
  40e4fc:	75 08                	jne    0x40e506
  40e4fe:	6a 08                	push   0x8
  40e500:	e8 4a e5 ff ff       	call   0x40ca4f
  40e505:	59                   	pop    ecx
  40e506:	8d 45 f8             	lea    eax,[ebp-0x8]
  40e509:	50                   	push   eax
  40e50a:	8d 45 fc             	lea    eax,[ebp-0x4]
  40e50d:	50                   	push   eax
  40e50e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40e511:	8d 04 86             	lea    eax,[esi+eax*4]
  40e514:	50                   	push   eax
  40e515:	56                   	push   esi
  40e516:	57                   	push   edi
  40e517:	e8 17 00 00 00       	call   0x40e533
  40e51c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40e51f:	83 c4 14             	add    esp,0x14
  40e522:	48                   	dec    eax
  40e523:	89 35 04 35 41 00    	mov    DWORD PTR ds:0x413504,esi
  40e529:	5f                   	pop    edi
  40e52a:	5e                   	pop    esi
  40e52b:	a3 00 35 41 00       	mov    ds:0x413500,eax
  40e530:	5b                   	pop    ebx
  40e531:	c9                   	leave
  40e532:	c3                   	ret
  40e533:	55                   	push   ebp
  40e534:	8b ec                	mov    ebp,esp
  40e536:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
  40e539:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  40e53c:	53                   	push   ebx
  40e53d:	56                   	push   esi
  40e53e:	83 21 00             	and    DWORD PTR [ecx],0x0
  40e541:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  40e544:	57                   	push   edi
  40e545:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  40e548:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
  40e54e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40e551:	85 ff                	test   edi,edi
  40e553:	74 08                	je     0x40e55d
  40e555:	89 37                	mov    DWORD PTR [edi],esi
  40e557:	83 c7 04             	add    edi,0x4
  40e55a:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  40e55d:	80 38 22             	cmp    BYTE PTR [eax],0x22
  40e560:	75 44                	jne    0x40e5a6
  40e562:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
  40e565:	40                   	inc    eax
  40e566:	80 fa 22             	cmp    dl,0x22
  40e569:	74 29                	je     0x40e594
  40e56b:	84 d2                	test   dl,dl
  40e56d:	74 25                	je     0x40e594
  40e56f:	0f b6 d2             	movzx  edx,dl
  40e572:	f6 82 c1 3c 41 00 04 	test   BYTE PTR [edx+0x413cc1],0x4
  40e579:	74 0c                	je     0x40e587
  40e57b:	ff 01                	inc    DWORD PTR [ecx]
  40e57d:	85 f6                	test   esi,esi
  40e57f:	74 06                	je     0x40e587
  40e581:	8a 10                	mov    dl,BYTE PTR [eax]
  40e583:	88 16                	mov    BYTE PTR [esi],dl
  40e585:	46                   	inc    esi
  40e586:	40                   	inc    eax
  40e587:	ff 01                	inc    DWORD PTR [ecx]
  40e589:	85 f6                	test   esi,esi
  40e58b:	74 d5                	je     0x40e562
  40e58d:	8a 10                	mov    dl,BYTE PTR [eax]
  40e58f:	88 16                	mov    BYTE PTR [esi],dl
  40e591:	46                   	inc    esi
  40e592:	eb ce                	jmp    0x40e562
  40e594:	ff 01                	inc    DWORD PTR [ecx]
  40e596:	85 f6                	test   esi,esi
  40e598:	74 04                	je     0x40e59e
  40e59a:	80 26 00             	and    BYTE PTR [esi],0x0
  40e59d:	46                   	inc    esi
  40e59e:	80 38 22             	cmp    BYTE PTR [eax],0x22
  40e5a1:	75 46                	jne    0x40e5e9
  40e5a3:	40                   	inc    eax
  40e5a4:	eb 43                	jmp    0x40e5e9
  40e5a6:	ff 01                	inc    DWORD PTR [ecx]
  40e5a8:	85 f6                	test   esi,esi
  40e5aa:	74 05                	je     0x40e5b1
  40e5ac:	8a 10                	mov    dl,BYTE PTR [eax]
  40e5ae:	88 16                	mov    BYTE PTR [esi],dl
  40e5b0:	46                   	inc    esi
  40e5b1:	8a 10                	mov    dl,BYTE PTR [eax]
  40e5b3:	40                   	inc    eax
  40e5b4:	0f b6 da             	movzx  ebx,dl
  40e5b7:	f6 83 c1 3c 41 00 04 	test   BYTE PTR [ebx+0x413cc1],0x4
  40e5be:	74 0c                	je     0x40e5cc
  40e5c0:	ff 01                	inc    DWORD PTR [ecx]
  40e5c2:	85 f6                	test   esi,esi
  40e5c4:	74 05                	je     0x40e5cb
  40e5c6:	8a 18                	mov    bl,BYTE PTR [eax]
  40e5c8:	88 1e                	mov    BYTE PTR [esi],bl
  40e5ca:	46                   	inc    esi
  40e5cb:	40                   	inc    eax
  40e5cc:	80 fa 20             	cmp    dl,0x20
  40e5cf:	74 09                	je     0x40e5da
  40e5d1:	84 d2                	test   dl,dl
  40e5d3:	74 09                	je     0x40e5de
  40e5d5:	80 fa 09             	cmp    dl,0x9
  40e5d8:	75 cc                	jne    0x40e5a6
  40e5da:	84 d2                	test   dl,dl
  40e5dc:	75 03                	jne    0x40e5e1
  40e5de:	48                   	dec    eax
  40e5df:	eb 08                	jmp    0x40e5e9
  40e5e1:	85 f6                	test   esi,esi
  40e5e3:	74 04                	je     0x40e5e9
  40e5e5:	80 66 ff 00          	and    BYTE PTR [esi-0x1],0x0
  40e5e9:	83 65 18 00          	and    DWORD PTR [ebp+0x18],0x0
  40e5ed:	80 38 00             	cmp    BYTE PTR [eax],0x0
  40e5f0:	0f 84 e0 00 00 00    	je     0x40e6d6
  40e5f6:	8a 10                	mov    dl,BYTE PTR [eax]
  40e5f8:	80 fa 20             	cmp    dl,0x20
  40e5fb:	74 05                	je     0x40e602
  40e5fd:	80 fa 09             	cmp    dl,0x9
  40e600:	75 03                	jne    0x40e605
  40e602:	40                   	inc    eax
  40e603:	eb f1                	jmp    0x40e5f6
  40e605:	80 38 00             	cmp    BYTE PTR [eax],0x0
  40e608:	0f 84 c8 00 00 00    	je     0x40e6d6
  40e60e:	85 ff                	test   edi,edi
  40e610:	74 08                	je     0x40e61a
  40e612:	89 37                	mov    DWORD PTR [edi],esi
  40e614:	83 c7 04             	add    edi,0x4
  40e617:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  40e61a:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
  40e61d:	ff 02                	inc    DWORD PTR [edx]
  40e61f:	c7 45 08 01 00 00 00 	mov    DWORD PTR [ebp+0x8],0x1
  40e626:	33 db                	xor    ebx,ebx
  40e628:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  40e62b:	75 04                	jne    0x40e631
  40e62d:	40                   	inc    eax
  40e62e:	43                   	inc    ebx
  40e62f:	eb f7                	jmp    0x40e628
  40e631:	80 38 22             	cmp    BYTE PTR [eax],0x22
  40e634:	75 2c                	jne    0x40e662
  40e636:	f6 c3 01             	test   bl,0x1
  40e639:	75 25                	jne    0x40e660
  40e63b:	33 ff                	xor    edi,edi
  40e63d:	39 7d 18             	cmp    DWORD PTR [ebp+0x18],edi
  40e640:	74 0d                	je     0x40e64f
  40e642:	80 78 01 22          	cmp    BYTE PTR [eax+0x1],0x22
  40e646:	8d 50 01             	lea    edx,[eax+0x1]
  40e649:	75 04                	jne    0x40e64f
  40e64b:	8b c2                	mov    eax,edx
  40e64d:	eb 03                	jmp    0x40e652
  40e64f:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  40e652:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  40e655:	33 d2                	xor    edx,edx
  40e657:	39 55 18             	cmp    DWORD PTR [ebp+0x18],edx
  40e65a:	0f 94 c2             	sete   dl
  40e65d:	89 55 18             	mov    DWORD PTR [ebp+0x18],edx
  40e660:	d1 eb                	shr    ebx,1
  40e662:	8b d3                	mov    edx,ebx
  40e664:	4b                   	dec    ebx
  40e665:	85 d2                	test   edx,edx
  40e667:	74 0e                	je     0x40e677
  40e669:	43                   	inc    ebx
  40e66a:	85 f6                	test   esi,esi
  40e66c:	74 04                	je     0x40e672
  40e66e:	c6 06 5c             	mov    BYTE PTR [esi],0x5c
  40e671:	46                   	inc    esi
  40e672:	ff 01                	inc    DWORD PTR [ecx]
  40e674:	4b                   	dec    ebx
  40e675:	75 f3                	jne    0x40e66a
  40e677:	8a 10                	mov    dl,BYTE PTR [eax]
  40e679:	84 d2                	test   dl,dl
  40e67b:	74 4a                	je     0x40e6c7
  40e67d:	83 7d 18 00          	cmp    DWORD PTR [ebp+0x18],0x0
  40e681:	75 0a                	jne    0x40e68d
  40e683:	80 fa 20             	cmp    dl,0x20
  40e686:	74 3f                	je     0x40e6c7
  40e688:	80 fa 09             	cmp    dl,0x9
  40e68b:	74 3a                	je     0x40e6c7
  40e68d:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
  40e691:	74 2e                	je     0x40e6c1
  40e693:	85 f6                	test   esi,esi
  40e695:	74 19                	je     0x40e6b0
  40e697:	0f b6 da             	movzx  ebx,dl
  40e69a:	f6 83 c1 3c 41 00 04 	test   BYTE PTR [ebx+0x413cc1],0x4
  40e6a1:	74 06                	je     0x40e6a9
  40e6a3:	88 16                	mov    BYTE PTR [esi],dl
  40e6a5:	46                   	inc    esi
  40e6a6:	40                   	inc    eax
  40e6a7:	ff 01                	inc    DWORD PTR [ecx]
  40e6a9:	8a 10                	mov    dl,BYTE PTR [eax]
  40e6ab:	88 16                	mov    BYTE PTR [esi],dl
  40e6ad:	46                   	inc    esi
  40e6ae:	eb 0f                	jmp    0x40e6bf
  40e6b0:	0f b6 d2             	movzx  edx,dl
  40e6b3:	f6 82 c1 3c 41 00 04 	test   BYTE PTR [edx+0x413cc1],0x4
  40e6ba:	74 03                	je     0x40e6bf
  40e6bc:	40                   	inc    eax
  40e6bd:	ff 01                	inc    DWORD PTR [ecx]
  40e6bf:	ff 01                	inc    DWORD PTR [ecx]
  40e6c1:	40                   	inc    eax
  40e6c2:	e9 58 ff ff ff       	jmp    0x40e61f
  40e6c7:	85 f6                	test   esi,esi
  40e6c9:	74 04                	je     0x40e6cf
  40e6cb:	80 26 00             	and    BYTE PTR [esi],0x0
  40e6ce:	46                   	inc    esi
  40e6cf:	ff 01                	inc    DWORD PTR [ecx]
  40e6d1:	e9 17 ff ff ff       	jmp    0x40e5ed
  40e6d6:	85 ff                	test   edi,edi
  40e6d8:	74 03                	je     0x40e6dd
  40e6da:	83 27 00             	and    DWORD PTR [edi],0x0
  40e6dd:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  40e6e0:	5f                   	pop    edi
  40e6e1:	5e                   	pop    esi
  40e6e2:	5b                   	pop    ebx
  40e6e3:	ff 00                	inc    DWORD PTR [eax]
  40e6e5:	5d                   	pop    ebp
  40e6e6:	c3                   	ret
  40e6e7:	51                   	push   ecx
  40e6e8:	51                   	push   ecx
  40e6e9:	a1 6c 36 41 00       	mov    eax,ds:0x41366c
  40e6ee:	53                   	push   ebx
  40e6ef:	55                   	push   ebp
  40e6f0:	8b 2d 2c 02 41 00    	mov    ebp,DWORD PTR ds:0x41022c
  40e6f6:	56                   	push   esi
  40e6f7:	57                   	push   edi
  40e6f8:	33 db                	xor    ebx,ebx
  40e6fa:	33 f6                	xor    esi,esi
  40e6fc:	33 ff                	xor    edi,edi
  40e6fe:	3b c3                	cmp    eax,ebx
  40e700:	75 33                	jne    0x40e735
  40e702:	ff d5                	call   ebp
  40e704:	8b f0                	mov    esi,eax
  40e706:	3b f3                	cmp    esi,ebx
  40e708:	74 0c                	je     0x40e716
  40e70a:	c7 05 6c 36 41 00 01 	mov    DWORD PTR ds:0x41366c,0x1
  40e711:	00 00 00 
  40e714:	eb 28                	jmp    0x40e73e
  40e716:	ff 15 28 02 41 00    	call   DWORD PTR ds:0x410228
  40e71c:	8b f8                	mov    edi,eax
  40e71e:	3b fb                	cmp    edi,ebx
  40e720:	0f 84 ea 00 00 00    	je     0x40e810
  40e726:	c7 05 6c 36 41 00 02 	mov    DWORD PTR ds:0x41366c,0x2
  40e72d:	00 00 00 
  40e730:	e9 8f 00 00 00       	jmp    0x40e7c4
  40e735:	83 f8 01             	cmp    eax,0x1
  40e738:	0f 85 81 00 00 00    	jne    0x40e7bf
  40e73e:	3b f3                	cmp    esi,ebx
  40e740:	75 0c                	jne    0x40e74e
  40e742:	ff d5                	call   ebp
  40e744:	8b f0                	mov    esi,eax
  40e746:	3b f3                	cmp    esi,ebx
  40e748:	0f 84 c2 00 00 00    	je     0x40e810
  40e74e:	66 39 1e             	cmp    WORD PTR [esi],bx
  40e751:	8b c6                	mov    eax,esi
  40e753:	74 0e                	je     0x40e763
  40e755:	40                   	inc    eax
  40e756:	40                   	inc    eax
  40e757:	66 39 18             	cmp    WORD PTR [eax],bx
  40e75a:	75 f9                	jne    0x40e755
  40e75c:	40                   	inc    eax
  40e75d:	40                   	inc    eax
  40e75e:	66 39 18             	cmp    WORD PTR [eax],bx
  40e761:	75 f2                	jne    0x40e755
  40e763:	2b c6                	sub    eax,esi
  40e765:	8b 3d d8 01 41 00    	mov    edi,DWORD PTR ds:0x4101d8
  40e76b:	d1 f8                	sar    eax,1
  40e76d:	53                   	push   ebx
  40e76e:	53                   	push   ebx
  40e76f:	40                   	inc    eax
  40e770:	53                   	push   ebx
  40e771:	53                   	push   ebx
  40e772:	50                   	push   eax
  40e773:	56                   	push   esi
  40e774:	53                   	push   ebx
  40e775:	53                   	push   ebx
  40e776:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  40e77a:	ff d7                	call   edi
  40e77c:	8b e8                	mov    ebp,eax
  40e77e:	3b eb                	cmp    ebp,ebx
  40e780:	74 32                	je     0x40e7b4
  40e782:	55                   	push   ebp
  40e783:	e8 2e e1 ff ff       	call   0x40c8b6
  40e788:	3b c3                	cmp    eax,ebx
  40e78a:	59                   	pop    ecx
  40e78b:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  40e78f:	74 23                	je     0x40e7b4
  40e791:	53                   	push   ebx
  40e792:	53                   	push   ebx
  40e793:	55                   	push   ebp
  40e794:	50                   	push   eax
  40e795:	ff 74 24 24          	push   DWORD PTR [esp+0x24]
  40e799:	56                   	push   esi
  40e79a:	53                   	push   ebx
  40e79b:	53                   	push   ebx
  40e79c:	ff d7                	call   edi
  40e79e:	85 c0                	test   eax,eax
  40e7a0:	75 0e                	jne    0x40e7b0
  40e7a2:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  40e7a6:	e8 7f e1 ff ff       	call   0x40c92a
  40e7ab:	59                   	pop    ecx
  40e7ac:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  40e7b0:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
  40e7b4:	56                   	push   esi
  40e7b5:	ff 15 a0 01 41 00    	call   DWORD PTR ds:0x4101a0
  40e7bb:	8b c3                	mov    eax,ebx
  40e7bd:	eb 53                	jmp    0x40e812
  40e7bf:	83 f8 02             	cmp    eax,0x2
  40e7c2:	75 4c                	jne    0x40e810
  40e7c4:	3b fb                	cmp    edi,ebx
  40e7c6:	75 0c                	jne    0x40e7d4
  40e7c8:	ff 15 28 02 41 00    	call   DWORD PTR ds:0x410228
  40e7ce:	8b f8                	mov    edi,eax
  40e7d0:	3b fb                	cmp    edi,ebx
  40e7d2:	74 3c                	je     0x40e810
  40e7d4:	38 1f                	cmp    BYTE PTR [edi],bl
  40e7d6:	8b c7                	mov    eax,edi
  40e7d8:	74 0a                	je     0x40e7e4
  40e7da:	40                   	inc    eax
  40e7db:	38 18                	cmp    BYTE PTR [eax],bl
  40e7dd:	75 fb                	jne    0x40e7da
  40e7df:	40                   	inc    eax
  40e7e0:	38 18                	cmp    BYTE PTR [eax],bl
  40e7e2:	75 f6                	jne    0x40e7da
  40e7e4:	2b c7                	sub    eax,edi
  40e7e6:	40                   	inc    eax
  40e7e7:	8b e8                	mov    ebp,eax
  40e7e9:	55                   	push   ebp
  40e7ea:	e8 c7 e0 ff ff       	call   0x40c8b6
  40e7ef:	8b f0                	mov    esi,eax
  40e7f1:	59                   	pop    ecx
  40e7f2:	3b f3                	cmp    esi,ebx
  40e7f4:	75 04                	jne    0x40e7fa
  40e7f6:	33 f6                	xor    esi,esi
  40e7f8:	eb 0b                	jmp    0x40e805
  40e7fa:	55                   	push   ebp
  40e7fb:	57                   	push   edi
  40e7fc:	56                   	push   esi
  40e7fd:	e8 5e 0b 00 00       	call   0x40f360
  40e802:	83 c4 0c             	add    esp,0xc
  40e805:	57                   	push   edi
  40e806:	ff 15 90 01 41 00    	call   DWORD PTR ds:0x410190
  40e80c:	8b c6                	mov    eax,esi
  40e80e:	eb 02                	jmp    0x40e812
  40e810:	33 c0                	xor    eax,eax
  40e812:	5f                   	pop    edi
  40e813:	5e                   	pop    esi
  40e814:	5d                   	pop    ebp
  40e815:	5b                   	pop    ebx
  40e816:	59                   	pop    ecx
  40e817:	59                   	pop    ecx
  40e818:	c3                   	ret
  40e819:	cc                   	int3
  40e81a:	cc                   	int3
  40e81b:	cc                   	int3
  40e81c:	55                   	push   ebp
  40e81d:	8b ec                	mov    ebp,esp
  40e81f:	53                   	push   ebx
  40e820:	56                   	push   esi
  40e821:	57                   	push   edi
  40e822:	55                   	push   ebp
  40e823:	6a 00                	push   0x0
  40e825:	6a 00                	push   0x0
  40e827:	68 34 e8 40 00       	push   0x40e834
  40e82c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40e82f:	e8 ec 0e 00 00       	call   0x40f720
  40e834:	5d                   	pop    ebp
  40e835:	5f                   	pop    edi
  40e836:	5e                   	pop    esi
  40e837:	5b                   	pop    ebx
  40e838:	8b e5                	mov    esp,ebp
  40e83a:	5d                   	pop    ebp
  40e83b:	c3                   	ret
  40e83c:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40e840:	f7 41 04 06 00 00 00 	test   DWORD PTR [ecx+0x4],0x6
  40e847:	b8 01 00 00 00       	mov    eax,0x1
  40e84c:	74 0f                	je     0x40e85d
  40e84e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40e852:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  40e856:	89 02                	mov    DWORD PTR [edx],eax
  40e858:	b8 03 00 00 00       	mov    eax,0x3
  40e85d:	c3                   	ret
  40e85e:	53                   	push   ebx
  40e85f:	56                   	push   esi
  40e860:	57                   	push   edi
  40e861:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  40e865:	50                   	push   eax
  40e866:	6a fe                	push   0xfffffffe
  40e868:	68 3c e8 40 00       	push   0x40e83c
  40e86d:	64 ff 35 00 00 00 00 	push   DWORD PTR fs:0x0
  40e874:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40e87b:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  40e87f:	8b 58 08             	mov    ebx,DWORD PTR [eax+0x8]
  40e882:	8b 70 0c             	mov    esi,DWORD PTR [eax+0xc]
  40e885:	83 fe ff             	cmp    esi,0xffffffff
  40e888:	74 2e                	je     0x40e8b8
  40e88a:	3b 74 24 24          	cmp    esi,DWORD PTR [esp+0x24]
  40e88e:	74 28                	je     0x40e8b8
  40e890:	8d 34 76             	lea    esi,[esi+esi*2]
  40e893:	8b 0c b3             	mov    ecx,DWORD PTR [ebx+esi*4]
  40e896:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  40e89a:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
  40e89d:	83 7c b3 04 00       	cmp    DWORD PTR [ebx+esi*4+0x4],0x0
  40e8a2:	75 12                	jne    0x40e8b6
  40e8a4:	68 01 01 00 00       	push   0x101
  40e8a9:	8b 44 b3 08          	mov    eax,DWORD PTR [ebx+esi*4+0x8]
  40e8ad:	e8 40 00 00 00       	call   0x40e8f2
  40e8b2:	ff 54 b3 08          	call   DWORD PTR [ebx+esi*4+0x8]
  40e8b6:	eb c3                	jmp    0x40e87b
  40e8b8:	64 8f 05 00 00 00 00 	pop    DWORD PTR fs:0x0
  40e8bf:	83 c4 0c             	add    esp,0xc
  40e8c2:	5f                   	pop    edi
  40e8c3:	5e                   	pop    esi
  40e8c4:	5b                   	pop    ebx
  40e8c5:	c3                   	ret
  40e8c6:	33 c0                	xor    eax,eax
  40e8c8:	64 8b 0d 00 00 00 00 	mov    ecx,DWORD PTR fs:0x0
  40e8cf:	81 79 04 3c e8 40 00 	cmp    DWORD PTR [ecx+0x4],0x40e83c
  40e8d6:	75 10                	jne    0x40e8e8
  40e8d8:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
  40e8db:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
  40e8de:	39 51 08             	cmp    DWORD PTR [ecx+0x8],edx
  40e8e1:	75 05                	jne    0x40e8e8
  40e8e3:	b8 01 00 00 00       	mov    eax,0x1
  40e8e8:	c3                   	ret
  40e8e9:	53                   	push   ebx
  40e8ea:	51                   	push   ecx
  40e8eb:	bb 38 33 41 00       	mov    ebx,0x413338
  40e8f0:	eb 0a                	jmp    0x40e8fc
  40e8f2:	53                   	push   ebx
  40e8f3:	51                   	push   ecx
  40e8f4:	bb 38 33 41 00       	mov    ebx,0x413338
  40e8f9:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  40e8fc:	89 4b 08             	mov    DWORD PTR [ebx+0x8],ecx
  40e8ff:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
  40e902:	89 6b 0c             	mov    DWORD PTR [ebx+0xc],ebp
  40e905:	59                   	pop    ecx
  40e906:	5b                   	pop    ebx
  40e907:	c2 04 00             	ret    0x4
  40e90a:	cc                   	int3
  40e90b:	cc                   	int3
  40e90c:	56                   	push   esi
  40e90d:	43                   	inc    ebx
  40e90e:	32 30                	xor    dh,BYTE PTR [eax]
  40e910:	58                   	pop    eax
  40e911:	43                   	inc    ebx
  40e912:	30 30                	xor    BYTE PTR [eax],dh
  40e914:	55                   	push   ebp
  40e915:	8b ec                	mov    ebp,esp
  40e917:	83 ec 08             	sub    esp,0x8
  40e91a:	53                   	push   ebx
  40e91b:	56                   	push   esi
  40e91c:	57                   	push   edi
  40e91d:	55                   	push   ebp
  40e91e:	fc                   	cld
  40e91f:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
  40e922:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40e925:	f7 40 04 06 00 00 00 	test   DWORD PTR [eax+0x4],0x6
  40e92c:	0f 85 82 00 00 00    	jne    0x40e9b4
  40e932:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  40e935:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40e938:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  40e93b:	8d 45 f8             	lea    eax,[ebp-0x8]
  40e93e:	89 43 fc             	mov    DWORD PTR [ebx-0x4],eax
  40e941:	8b 73 0c             	mov    esi,DWORD PTR [ebx+0xc]
  40e944:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
  40e947:	83 fe ff             	cmp    esi,0xffffffff
  40e94a:	74 61                	je     0x40e9ad
  40e94c:	8d 0c 76             	lea    ecx,[esi+esi*2]
  40e94f:	83 7c 8f 04 00       	cmp    DWORD PTR [edi+ecx*4+0x4],0x0
  40e954:	74 45                	je     0x40e99b
  40e956:	56                   	push   esi
  40e957:	55                   	push   ebp
  40e958:	8d 6b 10             	lea    ebp,[ebx+0x10]
  40e95b:	ff 54 8f 04          	call   DWORD PTR [edi+ecx*4+0x4]
  40e95f:	5d                   	pop    ebp
  40e960:	5e                   	pop    esi
  40e961:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
  40e964:	0b c0                	or     eax,eax
  40e966:	74 33                	je     0x40e99b
  40e968:	78 3c                	js     0x40e9a6
  40e96a:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
  40e96d:	53                   	push   ebx
  40e96e:	e8 a9 fe ff ff       	call   0x40e81c
  40e973:	83 c4 04             	add    esp,0x4
  40e976:	8d 6b 10             	lea    ebp,[ebx+0x10]
  40e979:	56                   	push   esi
  40e97a:	53                   	push   ebx
  40e97b:	e8 de fe ff ff       	call   0x40e85e
  40e980:	83 c4 08             	add    esp,0x8
  40e983:	8d 0c 76             	lea    ecx,[esi+esi*2]
  40e986:	6a 01                	push   0x1
  40e988:	8b 44 8f 08          	mov    eax,DWORD PTR [edi+ecx*4+0x8]
  40e98c:	e8 61 ff ff ff       	call   0x40e8f2
  40e991:	8b 04 8f             	mov    eax,DWORD PTR [edi+ecx*4]
  40e994:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
  40e997:	ff 54 8f 08          	call   DWORD PTR [edi+ecx*4+0x8]
  40e99b:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
  40e99e:	8d 0c 76             	lea    ecx,[esi+esi*2]
  40e9a1:	8b 34 8f             	mov    esi,DWORD PTR [edi+ecx*4]
  40e9a4:	eb a1                	jmp    0x40e947
  40e9a6:	b8 00 00 00 00       	mov    eax,0x0
  40e9ab:	eb 1c                	jmp    0x40e9c9
  40e9ad:	b8 01 00 00 00       	mov    eax,0x1
  40e9b2:	eb 15                	jmp    0x40e9c9
  40e9b4:	55                   	push   ebp
  40e9b5:	8d 6b 10             	lea    ebp,[ebx+0x10]
  40e9b8:	6a ff                	push   0xffffffff
  40e9ba:	53                   	push   ebx
  40e9bb:	e8 9e fe ff ff       	call   0x40e85e
  40e9c0:	83 c4 08             	add    esp,0x8
  40e9c3:	5d                   	pop    ebp
  40e9c4:	b8 01 00 00 00       	mov    eax,0x1
  40e9c9:	5d                   	pop    ebp
  40e9ca:	5f                   	pop    edi
  40e9cb:	5e                   	pop    esi
  40e9cc:	5b                   	pop    ebx
  40e9cd:	8b e5                	mov    esp,ebp
  40e9cf:	5d                   	pop    ebp
  40e9d0:	c3                   	ret
  40e9d1:	55                   	push   ebp
  40e9d2:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  40e9d6:	8b 29                	mov    ebp,DWORD PTR [ecx]
  40e9d8:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
  40e9db:	50                   	push   eax
  40e9dc:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
  40e9df:	50                   	push   eax
  40e9e0:	e8 79 fe ff ff       	call   0x40e85e
  40e9e5:	83 c4 08             	add    esp,0x8
  40e9e8:	5d                   	pop    ebp
  40e9e9:	c2 04 00             	ret    0x4
  40e9ec:	a1 e0 34 41 00       	mov    eax,ds:0x4134e0
  40e9f1:	83 f8 01             	cmp    eax,0x1
  40e9f4:	74 0d                	je     0x40ea03
  40e9f6:	85 c0                	test   eax,eax
  40e9f8:	75 2a                	jne    0x40ea24
  40e9fa:	83 3d 34 31 41 00 01 	cmp    DWORD PTR ds:0x413134,0x1
  40ea01:	75 21                	jne    0x40ea24
  40ea03:	68 fc 00 00 00       	push   0xfc
  40ea08:	e8 18 00 00 00       	call   0x40ea25
  40ea0d:	a1 70 36 41 00       	mov    eax,ds:0x413670
  40ea12:	59                   	pop    ecx
  40ea13:	85 c0                	test   eax,eax
  40ea15:	74 02                	je     0x40ea19
  40ea17:	ff d0                	call   eax
  40ea19:	68 ff 00 00 00       	push   0xff
  40ea1e:	e8 02 00 00 00       	call   0x40ea25
  40ea23:	59                   	pop    ecx
  40ea24:	c3                   	ret
  40ea25:	55                   	push   ebp
  40ea26:	8b ec                	mov    ebp,esp
  40ea28:	81 ec a4 01 00 00    	sub    esp,0x1a4
  40ea2e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
  40ea31:	33 c9                	xor    ecx,ecx
  40ea33:	b8 48 33 41 00       	mov    eax,0x413348
  40ea38:	3b 10                	cmp    edx,DWORD PTR [eax]
  40ea3a:	74 0b                	je     0x40ea47
  40ea3c:	83 c0 08             	add    eax,0x8
  40ea3f:	41                   	inc    ecx
  40ea40:	3d d8 33 41 00       	cmp    eax,0x4133d8
  40ea45:	7c f1                	jl     0x40ea38
  40ea47:	56                   	push   esi
  40ea48:	8b f1                	mov    esi,ecx
  40ea4a:	c1 e6 03             	shl    esi,0x3
  40ea4d:	3b 96 48 33 41 00    	cmp    edx,DWORD PTR [esi+0x413348]
  40ea53:	0f 85 1c 01 00 00    	jne    0x40eb75
  40ea59:	a1 e0 34 41 00       	mov    eax,ds:0x4134e0
  40ea5e:	83 f8 01             	cmp    eax,0x1
  40ea61:	0f 84 e8 00 00 00    	je     0x40eb4f
  40ea67:	85 c0                	test   eax,eax
  40ea69:	75 0d                	jne    0x40ea78
  40ea6b:	83 3d 34 31 41 00 01 	cmp    DWORD PTR ds:0x413134,0x1
  40ea72:	0f 84 d7 00 00 00    	je     0x40eb4f
  40ea78:	81 fa fc 00 00 00    	cmp    edx,0xfc
  40ea7e:	0f 84 f1 00 00 00    	je     0x40eb75
  40ea84:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  40ea8a:	68 04 01 00 00       	push   0x104
  40ea8f:	50                   	push   eax
  40ea90:	6a 00                	push   0x0
  40ea92:	ff 15 6c 01 41 00    	call   DWORD PTR ds:0x41016c
  40ea98:	85 c0                	test   eax,eax
  40ea9a:	75 13                	jne    0x40eaaf
  40ea9c:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  40eaa2:	68 f4 0a 41 00       	push   0x410af4
  40eaa7:	50                   	push   eax
  40eaa8:	e8 d3 e0 ff ff       	call   0x40cb80
  40eaad:	59                   	pop    ecx
  40eaae:	59                   	pop    ecx
  40eaaf:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  40eab5:	57                   	push   edi
  40eab6:	50                   	push   eax
  40eab7:	8d bd 5c fe ff ff    	lea    edi,[ebp-0x1a4]
  40eabd:	e8 1e 08 00 00       	call   0x40f2e0
  40eac2:	40                   	inc    eax
  40eac3:	59                   	pop    ecx
  40eac4:	83 f8 3c             	cmp    eax,0x3c
  40eac7:	76 29                	jbe    0x40eaf2
  40eac9:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  40eacf:	50                   	push   eax
  40ead0:	e8 0b 08 00 00       	call   0x40f2e0
  40ead5:	8b f8                	mov    edi,eax
  40ead7:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  40eadd:	83 e8 3b             	sub    eax,0x3b
  40eae0:	6a 03                	push   0x3
  40eae2:	03 f8                	add    edi,eax
  40eae4:	68 cc 25 41 00       	push   0x4125cc
  40eae9:	57                   	push   edi
  40eaea:	e8 91 d6 ff ff       	call   0x40c180
  40eaef:	83 c4 10             	add    esp,0x10
  40eaf2:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  40eaf8:	68 d8 0a 41 00       	push   0x410ad8
  40eafd:	50                   	push   eax
  40eafe:	e8 7d e0 ff ff       	call   0x40cb80
  40eb03:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  40eb09:	57                   	push   edi
  40eb0a:	50                   	push   eax
  40eb0b:	e8 80 e0 ff ff       	call   0x40cb90
  40eb10:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  40eb16:	68 d4 0a 41 00       	push   0x410ad4
  40eb1b:	50                   	push   eax
  40eb1c:	e8 6f e0 ff ff       	call   0x40cb90
  40eb21:	ff b6 4c 33 41 00    	push   DWORD PTR [esi+0x41334c]
  40eb27:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  40eb2d:	50                   	push   eax
  40eb2e:	e8 5d e0 ff ff       	call   0x40cb90
  40eb33:	68 10 20 01 00       	push   0x12010
  40eb38:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  40eb3e:	68 ac 0a 41 00       	push   0x410aac
  40eb43:	50                   	push   eax
  40eb44:	e8 4c 0b 00 00       	call   0x40f695
  40eb49:	83 c4 2c             	add    esp,0x2c
  40eb4c:	5f                   	pop    edi
  40eb4d:	eb 26                	jmp    0x40eb75
  40eb4f:	8d 45 08             	lea    eax,[ebp+0x8]
  40eb52:	8d b6 4c 33 41 00    	lea    esi,[esi+0x41334c]
  40eb58:	6a 00                	push   0x0
  40eb5a:	50                   	push   eax
  40eb5b:	ff 36                	push   DWORD PTR [esi]
  40eb5d:	e8 7e 07 00 00       	call   0x40f2e0
  40eb62:	59                   	pop    ecx
  40eb63:	50                   	push   eax
  40eb64:	ff 36                	push   DWORD PTR [esi]
  40eb66:	6a f4                	push   0xfffffff4
  40eb68:	ff 15 bc 01 41 00    	call   DWORD PTR ds:0x4101bc
  40eb6e:	50                   	push   eax
  40eb6f:	ff 15 b8 01 41 00    	call   DWORD PTR ds:0x4101b8
  40eb75:	5e                   	pop    esi
  40eb76:	c9                   	leave
  40eb77:	c3                   	ret
  40eb78:	55                   	push   ebp
  40eb79:	8b ec                	mov    ebp,esp
  40eb7b:	83 ec 18             	sub    esp,0x18
  40eb7e:	53                   	push   ebx
  40eb7f:	56                   	push   esi
  40eb80:	57                   	push   edi
  40eb81:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40eb84:	e8 88 01 00 00       	call   0x40ed11
  40eb89:	8b f0                	mov    esi,eax
  40eb8b:	59                   	pop    ecx
  40eb8c:	3b 35 a0 3b 41 00    	cmp    esi,DWORD PTR ds:0x413ba0
  40eb92:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  40eb95:	0f 84 6a 01 00 00    	je     0x40ed05
  40eb9b:	33 db                	xor    ebx,ebx
  40eb9d:	3b f3                	cmp    esi,ebx
  40eb9f:	0f 84 56 01 00 00    	je     0x40ecfb
  40eba5:	33 d2                	xor    edx,edx
  40eba7:	b8 e0 33 41 00       	mov    eax,0x4133e0
  40ebac:	39 30                	cmp    DWORD PTR [eax],esi
  40ebae:	74 72                	je     0x40ec22
  40ebb0:	83 c0 30             	add    eax,0x30
  40ebb3:	42                   	inc    edx
  40ebb4:	3d d0 34 41 00       	cmp    eax,0x4134d0
  40ebb9:	7c f1                	jl     0x40ebac
  40ebbb:	8d 45 e8             	lea    eax,[ebp-0x18]
  40ebbe:	50                   	push   eax
  40ebbf:	56                   	push   esi
  40ebc0:	ff 15 34 02 41 00    	call   DWORD PTR ds:0x410234
  40ebc6:	83 f8 01             	cmp    eax,0x1
  40ebc9:	0f 85 24 01 00 00    	jne    0x40ecf3
  40ebcf:	6a 40                	push   0x40
  40ebd1:	33 c0                	xor    eax,eax
  40ebd3:	59                   	pop    ecx
  40ebd4:	bf c0 3c 41 00       	mov    edi,0x413cc0
  40ebd9:	83 7d e8 01          	cmp    DWORD PTR [ebp-0x18],0x1
  40ebdd:	89 35 a0 3b 41 00    	mov    DWORD PTR ds:0x413ba0,esi
  40ebe3:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  40ebe5:	aa                   	stos   BYTE PTR es:[edi],al
  40ebe6:	89 1d c4 3d 41 00    	mov    DWORD PTR ds:0x413dc4,ebx
  40ebec:	0f 86 ef 00 00 00    	jbe    0x40ece1
  40ebf2:	80 7d ee 00          	cmp    BYTE PTR [ebp-0x12],0x0
  40ebf6:	0f 84 bb 00 00 00    	je     0x40ecb7
  40ebfc:	8d 4d ef             	lea    ecx,[ebp-0x11]
  40ebff:	8a 11                	mov    dl,BYTE PTR [ecx]
  40ec01:	84 d2                	test   dl,dl
  40ec03:	0f 84 ae 00 00 00    	je     0x40ecb7
  40ec09:	0f b6 41 ff          	movzx  eax,BYTE PTR [ecx-0x1]
  40ec0d:	0f b6 d2             	movzx  edx,dl
  40ec10:	3b c2                	cmp    eax,edx
  40ec12:	0f 87 93 00 00 00    	ja     0x40ecab
  40ec18:	80 88 c1 3c 41 00 04 	or     BYTE PTR [eax+0x413cc1],0x4
  40ec1f:	40                   	inc    eax
  40ec20:	eb ee                	jmp    0x40ec10
  40ec22:	6a 40                	push   0x40
  40ec24:	33 c0                	xor    eax,eax
  40ec26:	59                   	pop    ecx
  40ec27:	bf c0 3c 41 00       	mov    edi,0x413cc0
  40ec2c:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  40ec2e:	8d 34 52             	lea    esi,[edx+edx*2]
  40ec31:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  40ec34:	c1 e6 04             	shl    esi,0x4
  40ec37:	aa                   	stos   BYTE PTR es:[edi],al
  40ec38:	8d 9e f0 33 41 00    	lea    ebx,[esi+0x4133f0]
  40ec3e:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
  40ec41:	8b cb                	mov    ecx,ebx
  40ec43:	74 2c                	je     0x40ec71
  40ec45:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
  40ec48:	84 d2                	test   dl,dl
  40ec4a:	74 25                	je     0x40ec71
  40ec4c:	0f b6 01             	movzx  eax,BYTE PTR [ecx]
  40ec4f:	0f b6 fa             	movzx  edi,dl
  40ec52:	3b c7                	cmp    eax,edi
  40ec54:	77 14                	ja     0x40ec6a
  40ec56:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  40ec59:	8a 92 d8 33 41 00    	mov    dl,BYTE PTR [edx+0x4133d8]
  40ec5f:	08 90 c1 3c 41 00    	or     BYTE PTR [eax+0x413cc1],dl
  40ec65:	40                   	inc    eax
  40ec66:	3b c7                	cmp    eax,edi
  40ec68:	76 f5                	jbe    0x40ec5f
  40ec6a:	41                   	inc    ecx
  40ec6b:	41                   	inc    ecx
  40ec6c:	80 39 00             	cmp    BYTE PTR [ecx],0x0
  40ec6f:	75 d4                	jne    0x40ec45
  40ec71:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  40ec74:	83 c3 08             	add    ebx,0x8
  40ec77:	83 7d fc 04          	cmp    DWORD PTR [ebp-0x4],0x4
  40ec7b:	72 c1                	jb     0x40ec3e
  40ec7d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40ec80:	c7 05 bc 3b 41 00 01 	mov    DWORD PTR ds:0x413bbc,0x1
  40ec87:	00 00 00 
  40ec8a:	50                   	push   eax
  40ec8b:	a3 a0 3b 41 00       	mov    ds:0x413ba0,eax
  40ec90:	e8 c6 00 00 00       	call   0x40ed5b
  40ec95:	8d b6 e4 33 41 00    	lea    esi,[esi+0x4133e4]
  40ec9b:	bf b0 3b 41 00       	mov    edi,0x413bb0
  40eca0:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40eca1:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40eca2:	59                   	pop    ecx
  40eca3:	a3 c4 3d 41 00       	mov    ds:0x413dc4,eax
  40eca8:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40eca9:	eb 55                	jmp    0x40ed00
  40ecab:	41                   	inc    ecx
  40ecac:	41                   	inc    ecx
  40ecad:	80 79 ff 00          	cmp    BYTE PTR [ecx-0x1],0x0
  40ecb1:	0f 85 48 ff ff ff    	jne    0x40ebff
  40ecb7:	6a 01                	push   0x1
  40ecb9:	58                   	pop    eax
  40ecba:	80 88 c1 3c 41 00 08 	or     BYTE PTR [eax+0x413cc1],0x8
  40ecc1:	40                   	inc    eax
  40ecc2:	3d ff 00 00 00       	cmp    eax,0xff
  40ecc7:	72 f1                	jb     0x40ecba
  40ecc9:	56                   	push   esi
  40ecca:	e8 8c 00 00 00       	call   0x40ed5b
  40eccf:	59                   	pop    ecx
  40ecd0:	a3 c4 3d 41 00       	mov    ds:0x413dc4,eax
  40ecd5:	c7 05 bc 3b 41 00 01 	mov    DWORD PTR ds:0x413bbc,0x1
  40ecdc:	00 00 00 
  40ecdf:	eb 06                	jmp    0x40ece7
  40ece1:	89 1d bc 3b 41 00    	mov    DWORD PTR ds:0x413bbc,ebx
  40ece7:	33 c0                	xor    eax,eax
  40ece9:	bf b0 3b 41 00       	mov    edi,0x413bb0
  40ecee:	ab                   	stos   DWORD PTR es:[edi],eax
  40ecef:	ab                   	stos   DWORD PTR es:[edi],eax
  40ecf0:	ab                   	stos   DWORD PTR es:[edi],eax
  40ecf1:	eb 0d                	jmp    0x40ed00
  40ecf3:	39 1d 74 36 41 00    	cmp    DWORD PTR ds:0x413674,ebx
  40ecf9:	74 0e                	je     0x40ed09
  40ecfb:	e8 8e 00 00 00       	call   0x40ed8e
  40ed00:	e8 b2 00 00 00       	call   0x40edb7
  40ed05:	33 c0                	xor    eax,eax
  40ed07:	eb 03                	jmp    0x40ed0c
  40ed09:	83 c8 ff             	or     eax,0xffffffff
  40ed0c:	5f                   	pop    edi
  40ed0d:	5e                   	pop    esi
  40ed0e:	5b                   	pop    ebx
  40ed0f:	c9                   	leave
  40ed10:	c3                   	ret
  40ed11:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40ed15:	83 25 74 36 41 00 00 	and    DWORD PTR ds:0x413674,0x0
  40ed1c:	83 f8 fe             	cmp    eax,0xfffffffe
  40ed1f:	75 10                	jne    0x40ed31
  40ed21:	c7 05 74 36 41 00 01 	mov    DWORD PTR ds:0x413674,0x1
  40ed28:	00 00 00 
  40ed2b:	ff 25 38 02 41 00    	jmp    DWORD PTR ds:0x410238
  40ed31:	83 f8 fd             	cmp    eax,0xfffffffd
  40ed34:	75 10                	jne    0x40ed46
  40ed36:	c7 05 74 36 41 00 01 	mov    DWORD PTR ds:0x413674,0x1
  40ed3d:	00 00 00 
  40ed40:	ff 25 40 02 41 00    	jmp    DWORD PTR ds:0x410240
  40ed46:	83 f8 fc             	cmp    eax,0xfffffffc
  40ed49:	75 0f                	jne    0x40ed5a
  40ed4b:	a1 4c 35 41 00       	mov    eax,ds:0x41354c
  40ed50:	c7 05 74 36 41 00 01 	mov    DWORD PTR ds:0x413674,0x1
  40ed57:	00 00 00 
  40ed5a:	c3                   	ret
  40ed5b:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40ed5f:	2d a4 03 00 00       	sub    eax,0x3a4
  40ed64:	74 22                	je     0x40ed88
  40ed66:	83 e8 04             	sub    eax,0x4
  40ed69:	74 17                	je     0x40ed82
  40ed6b:	83 e8 0d             	sub    eax,0xd
  40ed6e:	74 0c                	je     0x40ed7c
  40ed70:	48                   	dec    eax
  40ed71:	74 03                	je     0x40ed76
  40ed73:	33 c0                	xor    eax,eax
  40ed75:	c3                   	ret
  40ed76:	b8 04 04 00 00       	mov    eax,0x404
  40ed7b:	c3                   	ret
  40ed7c:	b8 12 04 00 00       	mov    eax,0x412
  40ed81:	c3                   	ret
  40ed82:	b8 04 08 00 00       	mov    eax,0x804
  40ed87:	c3                   	ret
  40ed88:	b8 11 04 00 00       	mov    eax,0x411
  40ed8d:	c3                   	ret
  40ed8e:	57                   	push   edi
  40ed8f:	6a 40                	push   0x40
  40ed91:	59                   	pop    ecx
  40ed92:	33 c0                	xor    eax,eax
  40ed94:	bf c0 3c 41 00       	mov    edi,0x413cc0
  40ed99:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  40ed9b:	aa                   	stos   BYTE PTR es:[edi],al
  40ed9c:	33 c0                	xor    eax,eax
  40ed9e:	bf b0 3b 41 00       	mov    edi,0x413bb0
  40eda3:	a3 a0 3b 41 00       	mov    ds:0x413ba0,eax
  40eda8:	a3 bc 3b 41 00       	mov    ds:0x413bbc,eax
  40edad:	a3 c4 3d 41 00       	mov    ds:0x413dc4,eax
  40edb2:	ab                   	stos   DWORD PTR es:[edi],eax
  40edb3:	ab                   	stos   DWORD PTR es:[edi],eax
  40edb4:	ab                   	stos   DWORD PTR es:[edi],eax
  40edb5:	5f                   	pop    edi
  40edb6:	c3                   	ret
  40edb7:	55                   	push   ebp
  40edb8:	8b ec                	mov    ebp,esp
  40edba:	81 ec 14 05 00 00    	sub    esp,0x514
  40edc0:	8d 45 ec             	lea    eax,[ebp-0x14]
  40edc3:	56                   	push   esi
  40edc4:	50                   	push   eax
  40edc5:	ff 35 a0 3b 41 00    	push   DWORD PTR ds:0x413ba0
  40edcb:	ff 15 34 02 41 00    	call   DWORD PTR ds:0x410234
  40edd1:	83 f8 01             	cmp    eax,0x1
  40edd4:	0f 85 16 01 00 00    	jne    0x40eef0
  40edda:	33 c0                	xor    eax,eax
  40eddc:	be 00 01 00 00       	mov    esi,0x100
  40ede1:	88 84 05 ec fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x114],al
  40ede8:	40                   	inc    eax
  40ede9:	3b c6                	cmp    eax,esi
  40edeb:	72 f4                	jb     0x40ede1
  40eded:	8a 45 f2             	mov    al,BYTE PTR [ebp-0xe]
  40edf0:	c6 85 ec fe ff ff 20 	mov    BYTE PTR [ebp-0x114],0x20
  40edf7:	84 c0                	test   al,al
  40edf9:	74 37                	je     0x40ee32
  40edfb:	53                   	push   ebx
  40edfc:	57                   	push   edi
  40edfd:	8d 55 f3             	lea    edx,[ebp-0xd]
  40ee00:	0f b6 0a             	movzx  ecx,BYTE PTR [edx]
  40ee03:	0f b6 c0             	movzx  eax,al
  40ee06:	3b c1                	cmp    eax,ecx
  40ee08:	77 1d                	ja     0x40ee27
  40ee0a:	2b c8                	sub    ecx,eax
  40ee0c:	8d bc 05 ec fe ff ff 	lea    edi,[ebp+eax*1-0x114]
  40ee13:	41                   	inc    ecx
  40ee14:	b8 20 20 20 20       	mov    eax,0x20202020
  40ee19:	8b d9                	mov    ebx,ecx
  40ee1b:	c1 e9 02             	shr    ecx,0x2
  40ee1e:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  40ee20:	8b cb                	mov    ecx,ebx
  40ee22:	83 e1 03             	and    ecx,0x3
  40ee25:	f3 aa                	rep stos BYTE PTR es:[edi],al
  40ee27:	42                   	inc    edx
  40ee28:	42                   	inc    edx
  40ee29:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  40ee2c:	84 c0                	test   al,al
  40ee2e:	75 d0                	jne    0x40ee00
  40ee30:	5f                   	pop    edi
  40ee31:	5b                   	pop    ebx
  40ee32:	6a 00                	push   0x0
  40ee34:	8d 85 ec fa ff ff    	lea    eax,[ebp-0x514]
  40ee3a:	ff 35 c4 3d 41 00    	push   DWORD PTR ds:0x413dc4
  40ee40:	ff 35 a0 3b 41 00    	push   DWORD PTR ds:0x413ba0
  40ee46:	50                   	push   eax
  40ee47:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40ee4d:	56                   	push   esi
  40ee4e:	50                   	push   eax
  40ee4f:	6a 01                	push   0x1
  40ee51:	e8 6b e1 ff ff       	call   0x40cfc1
  40ee56:	6a 00                	push   0x0
  40ee58:	8d 85 ec fd ff ff    	lea    eax,[ebp-0x214]
  40ee5e:	ff 35 a0 3b 41 00    	push   DWORD PTR ds:0x413ba0
  40ee64:	56                   	push   esi
  40ee65:	50                   	push   eax
  40ee66:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40ee6c:	56                   	push   esi
  40ee6d:	50                   	push   eax
  40ee6e:	56                   	push   esi
  40ee6f:	ff 35 c4 3d 41 00    	push   DWORD PTR ds:0x413dc4
  40ee75:	e8 f8 de ff ff       	call   0x40cd72
  40ee7a:	6a 00                	push   0x0
  40ee7c:	8d 85 ec fc ff ff    	lea    eax,[ebp-0x314]
  40ee82:	ff 35 a0 3b 41 00    	push   DWORD PTR ds:0x413ba0
  40ee88:	56                   	push   esi
  40ee89:	50                   	push   eax
  40ee8a:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40ee90:	56                   	push   esi
  40ee91:	50                   	push   eax
  40ee92:	68 00 02 00 00       	push   0x200
  40ee97:	ff 35 c4 3d 41 00    	push   DWORD PTR ds:0x413dc4
  40ee9d:	e8 d0 de ff ff       	call   0x40cd72
  40eea2:	83 c4 5c             	add    esp,0x5c
  40eea5:	33 c0                	xor    eax,eax
  40eea7:	8d 8d ec fa ff ff    	lea    ecx,[ebp-0x514]
  40eead:	66 8b 11             	mov    dx,WORD PTR [ecx]
  40eeb0:	f6 c2 01             	test   dl,0x1
  40eeb3:	74 16                	je     0x40eecb
  40eeb5:	80 88 c1 3c 41 00 10 	or     BYTE PTR [eax+0x413cc1],0x10
  40eebc:	8a 94 05 ec fd ff ff 	mov    dl,BYTE PTR [ebp+eax*1-0x214]
  40eec3:	88 90 c0 3b 41 00    	mov    BYTE PTR [eax+0x413bc0],dl
  40eec9:	eb 1c                	jmp    0x40eee7
  40eecb:	f6 c2 02             	test   dl,0x2
  40eece:	74 10                	je     0x40eee0
  40eed0:	80 88 c1 3c 41 00 20 	or     BYTE PTR [eax+0x413cc1],0x20
  40eed7:	8a 94 05 ec fc ff ff 	mov    dl,BYTE PTR [ebp+eax*1-0x314]
  40eede:	eb e3                	jmp    0x40eec3
  40eee0:	80 a0 c0 3b 41 00 00 	and    BYTE PTR [eax+0x413bc0],0x0
  40eee7:	40                   	inc    eax
  40eee8:	41                   	inc    ecx
  40eee9:	41                   	inc    ecx
  40eeea:	3b c6                	cmp    eax,esi
  40eeec:	72 bf                	jb     0x40eead
  40eeee:	eb 49                	jmp    0x40ef39
  40eef0:	33 c0                	xor    eax,eax
  40eef2:	be 00 01 00 00       	mov    esi,0x100
  40eef7:	83 f8 41             	cmp    eax,0x41
  40eefa:	72 19                	jb     0x40ef15
  40eefc:	83 f8 5a             	cmp    eax,0x5a
  40eeff:	77 14                	ja     0x40ef15
  40ef01:	80 88 c1 3c 41 00 10 	or     BYTE PTR [eax+0x413cc1],0x10
  40ef08:	8a c8                	mov    cl,al
  40ef0a:	80 c1 20             	add    cl,0x20
  40ef0d:	88 88 c0 3b 41 00    	mov    BYTE PTR [eax+0x413bc0],cl
  40ef13:	eb 1f                	jmp    0x40ef34
  40ef15:	83 f8 61             	cmp    eax,0x61
  40ef18:	72 13                	jb     0x40ef2d
  40ef1a:	83 f8 7a             	cmp    eax,0x7a
  40ef1d:	77 0e                	ja     0x40ef2d
  40ef1f:	80 88 c1 3c 41 00 20 	or     BYTE PTR [eax+0x413cc1],0x20
  40ef26:	8a c8                	mov    cl,al
  40ef28:	80 e9 20             	sub    cl,0x20
  40ef2b:	eb e0                	jmp    0x40ef0d
  40ef2d:	80 a0 c0 3b 41 00 00 	and    BYTE PTR [eax+0x413bc0],0x0
  40ef34:	40                   	inc    eax
  40ef35:	3b c6                	cmp    eax,esi
  40ef37:	72 be                	jb     0x40eef7
  40ef39:	5e                   	pop    esi
  40ef3a:	c9                   	leave
  40ef3b:	c3                   	ret
  40ef3c:	83 3d 08 3f 41 00 00 	cmp    DWORD PTR ds:0x413f08,0x0
  40ef43:	75 12                	jne    0x40ef57
  40ef45:	6a fd                	push   0xfffffffd
  40ef47:	e8 2c fc ff ff       	call   0x40eb78
  40ef4c:	59                   	pop    ecx
  40ef4d:	c7 05 08 3f 41 00 01 	mov    DWORD PTR ds:0x413f08,0x1
  40ef54:	00 00 00 
  40ef57:	c3                   	ret
  40ef58:	cc                   	int3
  40ef59:	cc                   	int3
  40ef5a:	cc                   	int3
  40ef5b:	cc                   	int3
  40ef5c:	cc                   	int3
  40ef5d:	cc                   	int3
  40ef5e:	cc                   	int3
  40ef5f:	cc                   	int3
  40ef60:	55                   	push   ebp
  40ef61:	8b ec                	mov    ebp,esp
  40ef63:	57                   	push   edi
  40ef64:	56                   	push   esi
  40ef65:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  40ef68:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  40ef6b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  40ef6e:	8b c1                	mov    eax,ecx
  40ef70:	8b d1                	mov    edx,ecx
  40ef72:	03 c6                	add    eax,esi
  40ef74:	3b fe                	cmp    edi,esi
  40ef76:	76 08                	jbe    0x40ef80
  40ef78:	3b f8                	cmp    edi,eax
  40ef7a:	0f 82 78 01 00 00    	jb     0x40f0f8
  40ef80:	f7 c7 03 00 00 00    	test   edi,0x3
  40ef86:	75 14                	jne    0x40ef9c
  40ef88:	c1 e9 02             	shr    ecx,0x2
  40ef8b:	83 e2 03             	and    edx,0x3
  40ef8e:	83 f9 08             	cmp    ecx,0x8
  40ef91:	72 29                	jb     0x40efbc
  40ef93:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40ef95:	ff 24 95 a8 f0 40 00 	jmp    DWORD PTR [edx*4+0x40f0a8]
  40ef9c:	8b c7                	mov    eax,edi
  40ef9e:	ba 03 00 00 00       	mov    edx,0x3
  40efa3:	83 e9 04             	sub    ecx,0x4
  40efa6:	72 0c                	jb     0x40efb4
  40efa8:	83 e0 03             	and    eax,0x3
  40efab:	03 c8                	add    ecx,eax
  40efad:	ff 24 85 c0 ef 40 00 	jmp    DWORD PTR [eax*4+0x40efc0]
  40efb4:	ff 24 8d b8 f0 40 00 	jmp    DWORD PTR [ecx*4+0x40f0b8]
  40efbb:	90                   	nop
  40efbc:	ff 24 8d 3c f0 40 00 	jmp    DWORD PTR [ecx*4+0x40f03c]
  40efc3:	90                   	nop
  40efc4:	d0 ef                	shr    bh,1
  40efc6:	40                   	inc    eax
  40efc7:	00 fc                	add    ah,bh
  40efc9:	ef                   	out    dx,eax
  40efca:	40                   	inc    eax
  40efcb:	00 20                	add    BYTE PTR [eax],ah
  40efcd:	f0 40                	lock inc eax
  40efcf:	00 23                	add    BYTE PTR [ebx],ah
  40efd1:	d1 8a 06 88 07 8a    	ror    DWORD PTR [edx-0x75f877fa],1
  40efd7:	46                   	inc    esi
  40efd8:	01 88 47 01 8a 46    	add    DWORD PTR [eax+0x468a0147],ecx
  40efde:	02 c1                	add    al,cl
  40efe0:	e9 02 88 47 02       	jmp    0x28877e7
  40efe5:	83 c6 03             	add    esi,0x3
  40efe8:	83 c7 03             	add    edi,0x3
  40efeb:	83 f9 08             	cmp    ecx,0x8
  40efee:	72 cc                	jb     0x40efbc
  40eff0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40eff2:	ff 24 95 a8 f0 40 00 	jmp    DWORD PTR [edx*4+0x40f0a8]
  40eff9:	8d 49 00             	lea    ecx,[ecx+0x0]
  40effc:	23 d1                	and    edx,ecx
  40effe:	8a 06                	mov    al,BYTE PTR [esi]
  40f000:	88 07                	mov    BYTE PTR [edi],al
  40f002:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f005:	c1 e9 02             	shr    ecx,0x2
  40f008:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f00b:	83 c6 02             	add    esi,0x2
  40f00e:	83 c7 02             	add    edi,0x2
  40f011:	83 f9 08             	cmp    ecx,0x8
  40f014:	72 a6                	jb     0x40efbc
  40f016:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f018:	ff 24 95 a8 f0 40 00 	jmp    DWORD PTR [edx*4+0x40f0a8]
  40f01f:	90                   	nop
  40f020:	23 d1                	and    edx,ecx
  40f022:	8a 06                	mov    al,BYTE PTR [esi]
  40f024:	88 07                	mov    BYTE PTR [edi],al
  40f026:	46                   	inc    esi
  40f027:	c1 e9 02             	shr    ecx,0x2
  40f02a:	47                   	inc    edi
  40f02b:	83 f9 08             	cmp    ecx,0x8
  40f02e:	72 8c                	jb     0x40efbc
  40f030:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f032:	ff 24 95 a8 f0 40 00 	jmp    DWORD PTR [edx*4+0x40f0a8]
  40f039:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f03c:	9f                   	lahf
  40f03d:	f0 40                	lock inc eax
  40f03f:	00 8c f0 40 00 84 f0 	add    BYTE PTR [eax+esi*8-0xf7bffc0],cl
  40f046:	40                   	inc    eax
  40f047:	00 7c f0 40          	add    BYTE PTR [eax+esi*8+0x40],bh
  40f04b:	00 74 f0 40          	add    BYTE PTR [eax+esi*8+0x40],dh
  40f04f:	00 6c f0 40          	add    BYTE PTR [eax+esi*8+0x40],ch
  40f053:	00 64 f0 40          	add    BYTE PTR [eax+esi*8+0x40],ah
  40f057:	00 5c f0 40          	add    BYTE PTR [eax+esi*8+0x40],bl
  40f05b:	00 8b 44 8e e4 89    	add    BYTE PTR [ebx-0x761b71bc],cl
  40f061:	44                   	inc    esp
  40f062:	8f                   	(bad)
  40f063:	e4 8b                	in     al,0x8b
  40f065:	44                   	inc    esp
  40f066:	8e e8                	mov    gs,eax
  40f068:	89 44 8f e8          	mov    DWORD PTR [edi+ecx*4-0x18],eax
  40f06c:	8b 44 8e ec          	mov    eax,DWORD PTR [esi+ecx*4-0x14]
  40f070:	89 44 8f ec          	mov    DWORD PTR [edi+ecx*4-0x14],eax
  40f074:	8b 44 8e f0          	mov    eax,DWORD PTR [esi+ecx*4-0x10]
  40f078:	89 44 8f f0          	mov    DWORD PTR [edi+ecx*4-0x10],eax
  40f07c:	8b 44 8e f4          	mov    eax,DWORD PTR [esi+ecx*4-0xc]
  40f080:	89 44 8f f4          	mov    DWORD PTR [edi+ecx*4-0xc],eax
  40f084:	8b 44 8e f8          	mov    eax,DWORD PTR [esi+ecx*4-0x8]
  40f088:	89 44 8f f8          	mov    DWORD PTR [edi+ecx*4-0x8],eax
  40f08c:	8b 44 8e fc          	mov    eax,DWORD PTR [esi+ecx*4-0x4]
  40f090:	89 44 8f fc          	mov    DWORD PTR [edi+ecx*4-0x4],eax
  40f094:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  40f09b:	03 f0                	add    esi,eax
  40f09d:	03 f8                	add    edi,eax
  40f09f:	ff 24 95 a8 f0 40 00 	jmp    DWORD PTR [edx*4+0x40f0a8]
  40f0a6:	8b ff                	mov    edi,edi
  40f0a8:	b8 f0 40 00 c0       	mov    eax,0xc00040f0
  40f0ad:	f0 40                	lock inc eax
  40f0af:	00 cc                	add    ah,cl
  40f0b1:	f0 40                	lock inc eax
  40f0b3:	00 e0                	add    al,ah
  40f0b5:	f0 40                	lock inc eax
  40f0b7:	00 8b 45 08 5e 5f    	add    BYTE PTR [ebx+0x5f5e0845],cl
  40f0bd:	c9                   	leave
  40f0be:	c3                   	ret
  40f0bf:	90                   	nop
  40f0c0:	8a 06                	mov    al,BYTE PTR [esi]
  40f0c2:	88 07                	mov    BYTE PTR [edi],al
  40f0c4:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f0c7:	5e                   	pop    esi
  40f0c8:	5f                   	pop    edi
  40f0c9:	c9                   	leave
  40f0ca:	c3                   	ret
  40f0cb:	90                   	nop
  40f0cc:	8a 06                	mov    al,BYTE PTR [esi]
  40f0ce:	88 07                	mov    BYTE PTR [edi],al
  40f0d0:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f0d3:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f0d6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f0d9:	5e                   	pop    esi
  40f0da:	5f                   	pop    edi
  40f0db:	c9                   	leave
  40f0dc:	c3                   	ret
  40f0dd:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f0e0:	8a 06                	mov    al,BYTE PTR [esi]
  40f0e2:	88 07                	mov    BYTE PTR [edi],al
  40f0e4:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f0e7:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f0ea:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f0ed:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f0f0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f0f3:	5e                   	pop    esi
  40f0f4:	5f                   	pop    edi
  40f0f5:	c9                   	leave
  40f0f6:	c3                   	ret
  40f0f7:	90                   	nop
  40f0f8:	8d 74 31 fc          	lea    esi,[ecx+esi*1-0x4]
  40f0fc:	8d 7c 39 fc          	lea    edi,[ecx+edi*1-0x4]
  40f100:	f7 c7 03 00 00 00    	test   edi,0x3
  40f106:	75 24                	jne    0x40f12c
  40f108:	c1 e9 02             	shr    ecx,0x2
  40f10b:	83 e2 03             	and    edx,0x3
  40f10e:	83 f9 08             	cmp    ecx,0x8
  40f111:	72 0d                	jb     0x40f120
  40f113:	fd                   	std
  40f114:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f116:	fc                   	cld
  40f117:	ff 24 95 40 f2 40 00 	jmp    DWORD PTR [edx*4+0x40f240]
  40f11e:	8b ff                	mov    edi,edi
  40f120:	f7 d9                	neg    ecx
  40f122:	ff 24 8d f0 f1 40 00 	jmp    DWORD PTR [ecx*4+0x40f1f0]
  40f129:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f12c:	8b c7                	mov    eax,edi
  40f12e:	ba 03 00 00 00       	mov    edx,0x3
  40f133:	83 f9 04             	cmp    ecx,0x4
  40f136:	72 0c                	jb     0x40f144
  40f138:	83 e0 03             	and    eax,0x3
  40f13b:	2b c8                	sub    ecx,eax
  40f13d:	ff 24 85 48 f1 40 00 	jmp    DWORD PTR [eax*4+0x40f148]
  40f144:	ff 24 8d 40 f2 40 00 	jmp    DWORD PTR [ecx*4+0x40f240]
  40f14b:	90                   	nop
  40f14c:	58                   	pop    eax
  40f14d:	f1                   	int1
  40f14e:	40                   	inc    eax
  40f14f:	00 78 f1             	add    BYTE PTR [eax-0xf],bh
  40f152:	40                   	inc    eax
  40f153:	00 a0 f1 40 00 8a    	add    BYTE PTR [eax-0x75ffbf0f],ah
  40f159:	46                   	inc    esi
  40f15a:	03 23                	add    esp,DWORD PTR [ebx]
  40f15c:	d1 88 47 03 4e c1    	ror    DWORD PTR [eax-0x3eb1fcb9],1
  40f162:	e9 02 4f 83 f9       	jmp    0xf9c44069
  40f167:	08 72 b6             	or     BYTE PTR [edx-0x4a],dh
  40f16a:	fd                   	std
  40f16b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f16d:	fc                   	cld
  40f16e:	ff 24 95 40 f2 40 00 	jmp    DWORD PTR [edx*4+0x40f240]
  40f175:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f178:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f17b:	23 d1                	and    edx,ecx
  40f17d:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f180:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f183:	c1 e9 02             	shr    ecx,0x2
  40f186:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f189:	83 ee 02             	sub    esi,0x2
  40f18c:	83 ef 02             	sub    edi,0x2
  40f18f:	83 f9 08             	cmp    ecx,0x8
  40f192:	72 8c                	jb     0x40f120
  40f194:	fd                   	std
  40f195:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f197:	fc                   	cld
  40f198:	ff 24 95 40 f2 40 00 	jmp    DWORD PTR [edx*4+0x40f240]
  40f19f:	90                   	nop
  40f1a0:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f1a3:	23 d1                	and    edx,ecx
  40f1a5:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f1a8:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f1ab:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f1ae:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f1b1:	c1 e9 02             	shr    ecx,0x2
  40f1b4:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f1b7:	83 ee 03             	sub    esi,0x3
  40f1ba:	83 ef 03             	sub    edi,0x3
  40f1bd:	83 f9 08             	cmp    ecx,0x8
  40f1c0:	0f 82 5a ff ff ff    	jb     0x40f120
  40f1c6:	fd                   	std
  40f1c7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f1c9:	fc                   	cld
  40f1ca:	ff 24 95 40 f2 40 00 	jmp    DWORD PTR [edx*4+0x40f240]
  40f1d1:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f1d4:	f4                   	hlt
  40f1d5:	f1                   	int1
  40f1d6:	40                   	inc    eax
  40f1d7:	00 fc                	add    ah,bh
  40f1d9:	f1                   	int1
  40f1da:	40                   	inc    eax
  40f1db:	00 04 f2             	add    BYTE PTR [edx+esi*8],al
  40f1de:	40                   	inc    eax
  40f1df:	00 0c f2             	add    BYTE PTR [edx+esi*8],cl
  40f1e2:	40                   	inc    eax
  40f1e3:	00 14 f2             	add    BYTE PTR [edx+esi*8],dl
  40f1e6:	40                   	inc    eax
  40f1e7:	00 1c f2             	add    BYTE PTR [edx+esi*8],bl
  40f1ea:	40                   	inc    eax
  40f1eb:	00 24 f2             	add    BYTE PTR [edx+esi*8],ah
  40f1ee:	40                   	inc    eax
  40f1ef:	00 37                	add    BYTE PTR [edi],dh
  40f1f1:	f2 40                	repnz inc eax
  40f1f3:	00 8b 44 8e 1c 89    	add    BYTE PTR [ebx-0x76e371bc],cl
  40f1f9:	44                   	inc    esp
  40f1fa:	8f                   	(bad)
  40f1fb:	1c 8b                	sbb    al,0x8b
  40f1fd:	44                   	inc    esp
  40f1fe:	8e 18                	mov    ds,WORD PTR [eax]
  40f200:	89 44 8f 18          	mov    DWORD PTR [edi+ecx*4+0x18],eax
  40f204:	8b 44 8e 14          	mov    eax,DWORD PTR [esi+ecx*4+0x14]
  40f208:	89 44 8f 14          	mov    DWORD PTR [edi+ecx*4+0x14],eax
  40f20c:	8b 44 8e 10          	mov    eax,DWORD PTR [esi+ecx*4+0x10]
  40f210:	89 44 8f 10          	mov    DWORD PTR [edi+ecx*4+0x10],eax
  40f214:	8b 44 8e 0c          	mov    eax,DWORD PTR [esi+ecx*4+0xc]
  40f218:	89 44 8f 0c          	mov    DWORD PTR [edi+ecx*4+0xc],eax
  40f21c:	8b 44 8e 08          	mov    eax,DWORD PTR [esi+ecx*4+0x8]
  40f220:	89 44 8f 08          	mov    DWORD PTR [edi+ecx*4+0x8],eax
  40f224:	8b 44 8e 04          	mov    eax,DWORD PTR [esi+ecx*4+0x4]
  40f228:	89 44 8f 04          	mov    DWORD PTR [edi+ecx*4+0x4],eax
  40f22c:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  40f233:	03 f0                	add    esi,eax
  40f235:	03 f8                	add    edi,eax
  40f237:	ff 24 95 40 f2 40 00 	jmp    DWORD PTR [edx*4+0x40f240]
  40f23e:	8b ff                	mov    edi,edi
  40f240:	50                   	push   eax
  40f241:	f2 40                	repnz inc eax
  40f243:	00 58 f2             	add    BYTE PTR [eax-0xe],bl
  40f246:	40                   	inc    eax
  40f247:	00 68 f2             	add    BYTE PTR [eax-0xe],ch
  40f24a:	40                   	inc    eax
  40f24b:	00 7c f2 40          	add    BYTE PTR [edx+esi*8+0x40],bh
  40f24f:	00 8b 45 08 5e 5f    	add    BYTE PTR [ebx+0x5f5e0845],cl
  40f255:	c9                   	leave
  40f256:	c3                   	ret
  40f257:	90                   	nop
  40f258:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f25b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f25e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f261:	5e                   	pop    esi
  40f262:	5f                   	pop    edi
  40f263:	c9                   	leave
  40f264:	c3                   	ret
  40f265:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f268:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f26b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f26e:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f271:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f274:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f277:	5e                   	pop    esi
  40f278:	5f                   	pop    edi
  40f279:	c9                   	leave
  40f27a:	c3                   	ret
  40f27b:	90                   	nop
  40f27c:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f27f:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f282:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f285:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f288:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f28b:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f28e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f291:	5e                   	pop    esi
  40f292:	5f                   	pop    edi
  40f293:	c9                   	leave
  40f294:	c3                   	ret
  40f295:	6a 04                	push   0x4
  40f297:	6a 00                	push   0x0
  40f299:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  40f29d:	e8 04 00 00 00       	call   0x40f2a6
  40f2a2:	83 c4 0c             	add    esp,0xc
  40f2a5:	c3                   	ret
  40f2a6:	0f b6 44 24 04       	movzx  eax,BYTE PTR [esp+0x4]
  40f2ab:	8a 4c 24 0c          	mov    cl,BYTE PTR [esp+0xc]
  40f2af:	84 88 c1 3c 41 00    	test   BYTE PTR [eax+0x413cc1],cl
  40f2b5:	75 1c                	jne    0x40f2d3
  40f2b7:	83 7c 24 08 00       	cmp    DWORD PTR [esp+0x8],0x0
  40f2bc:	74 0e                	je     0x40f2cc
  40f2be:	0f b7 04 45 1a 2f 41 	movzx  eax,WORD PTR [eax*2+0x412f1a]
  40f2c5:	00 
  40f2c6:	23 44 24 08          	and    eax,DWORD PTR [esp+0x8]
  40f2ca:	eb 02                	jmp    0x40f2ce
  40f2cc:	33 c0                	xor    eax,eax
  40f2ce:	85 c0                	test   eax,eax
  40f2d0:	75 01                	jne    0x40f2d3
  40f2d2:	c3                   	ret
  40f2d3:	6a 01                	push   0x1
  40f2d5:	58                   	pop    eax
  40f2d6:	c3                   	ret
  40f2d7:	cc                   	int3
  40f2d8:	cc                   	int3
  40f2d9:	cc                   	int3
  40f2da:	cc                   	int3
  40f2db:	cc                   	int3
  40f2dc:	cc                   	int3
  40f2dd:	cc                   	int3
  40f2de:	cc                   	int3
  40f2df:	cc                   	int3
  40f2e0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40f2e4:	f7 c1 03 00 00 00    	test   ecx,0x3
  40f2ea:	74 14                	je     0x40f300
  40f2ec:	8a 01                	mov    al,BYTE PTR [ecx]
  40f2ee:	41                   	inc    ecx
  40f2ef:	84 c0                	test   al,al
  40f2f1:	74 40                	je     0x40f333
  40f2f3:	f7 c1 03 00 00 00    	test   ecx,0x3
  40f2f9:	75 f1                	jne    0x40f2ec
  40f2fb:	05 00 00 00 00       	add    eax,0x0
  40f300:	8b 01                	mov    eax,DWORD PTR [ecx]
  40f302:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  40f307:	03 d0                	add    edx,eax
  40f309:	83 f0 ff             	xor    eax,0xffffffff
  40f30c:	33 c2                	xor    eax,edx
  40f30e:	83 c1 04             	add    ecx,0x4
  40f311:	a9 00 01 01 81       	test   eax,0x81010100
  40f316:	74 e8                	je     0x40f300
  40f318:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
  40f31b:	84 c0                	test   al,al
  40f31d:	74 32                	je     0x40f351
  40f31f:	84 e4                	test   ah,ah
  40f321:	74 24                	je     0x40f347
  40f323:	a9 00 00 ff 00       	test   eax,0xff0000
  40f328:	74 13                	je     0x40f33d
  40f32a:	a9 00 00 00 ff       	test   eax,0xff000000
  40f32f:	74 02                	je     0x40f333
  40f331:	eb cd                	jmp    0x40f300
  40f333:	8d 41 ff             	lea    eax,[ecx-0x1]
  40f336:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40f33a:	2b c1                	sub    eax,ecx
  40f33c:	c3                   	ret
  40f33d:	8d 41 fe             	lea    eax,[ecx-0x2]
  40f340:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40f344:	2b c1                	sub    eax,ecx
  40f346:	c3                   	ret
  40f347:	8d 41 fd             	lea    eax,[ecx-0x3]
  40f34a:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40f34e:	2b c1                	sub    eax,ecx
  40f350:	c3                   	ret
  40f351:	8d 41 fc             	lea    eax,[ecx-0x4]
  40f354:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40f358:	2b c1                	sub    eax,ecx
  40f35a:	c3                   	ret
  40f35b:	cc                   	int3
  40f35c:	cc                   	int3
  40f35d:	cc                   	int3
  40f35e:	cc                   	int3
  40f35f:	cc                   	int3
  40f360:	55                   	push   ebp
  40f361:	8b ec                	mov    ebp,esp
  40f363:	57                   	push   edi
  40f364:	56                   	push   esi
  40f365:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  40f368:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  40f36b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  40f36e:	8b c1                	mov    eax,ecx
  40f370:	8b d1                	mov    edx,ecx
  40f372:	03 c6                	add    eax,esi
  40f374:	3b fe                	cmp    edi,esi
  40f376:	76 08                	jbe    0x40f380
  40f378:	3b f8                	cmp    edi,eax
  40f37a:	0f 82 78 01 00 00    	jb     0x40f4f8
  40f380:	f7 c7 03 00 00 00    	test   edi,0x3
  40f386:	75 14                	jne    0x40f39c
  40f388:	c1 e9 02             	shr    ecx,0x2
  40f38b:	83 e2 03             	and    edx,0x3
  40f38e:	83 f9 08             	cmp    ecx,0x8
  40f391:	72 29                	jb     0x40f3bc
  40f393:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f395:	ff 24 95 a8 f4 40 00 	jmp    DWORD PTR [edx*4+0x40f4a8]
  40f39c:	8b c7                	mov    eax,edi
  40f39e:	ba 03 00 00 00       	mov    edx,0x3
  40f3a3:	83 e9 04             	sub    ecx,0x4
  40f3a6:	72 0c                	jb     0x40f3b4
  40f3a8:	83 e0 03             	and    eax,0x3
  40f3ab:	03 c8                	add    ecx,eax
  40f3ad:	ff 24 85 c0 f3 40 00 	jmp    DWORD PTR [eax*4+0x40f3c0]
  40f3b4:	ff 24 8d b8 f4 40 00 	jmp    DWORD PTR [ecx*4+0x40f4b8]
  40f3bb:	90                   	nop
  40f3bc:	ff 24 8d 3c f4 40 00 	jmp    DWORD PTR [ecx*4+0x40f43c]
  40f3c3:	90                   	nop
  40f3c4:	d0 f3                	shl    bl,1
  40f3c6:	40                   	inc    eax
  40f3c7:	00 fc                	add    ah,bh
  40f3c9:	f3 40                	repz inc eax
  40f3cb:	00 20                	add    BYTE PTR [eax],ah
  40f3cd:	f4                   	hlt
  40f3ce:	40                   	inc    eax
  40f3cf:	00 23                	add    BYTE PTR [ebx],ah
  40f3d1:	d1 8a 06 88 07 8a    	ror    DWORD PTR [edx-0x75f877fa],1
  40f3d7:	46                   	inc    esi
  40f3d8:	01 88 47 01 8a 46    	add    DWORD PTR [eax+0x468a0147],ecx
  40f3de:	02 c1                	add    al,cl
  40f3e0:	e9 02 88 47 02       	jmp    0x2887be7
  40f3e5:	83 c6 03             	add    esi,0x3
  40f3e8:	83 c7 03             	add    edi,0x3
  40f3eb:	83 f9 08             	cmp    ecx,0x8
  40f3ee:	72 cc                	jb     0x40f3bc
  40f3f0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f3f2:	ff 24 95 a8 f4 40 00 	jmp    DWORD PTR [edx*4+0x40f4a8]
  40f3f9:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f3fc:	23 d1                	and    edx,ecx
  40f3fe:	8a 06                	mov    al,BYTE PTR [esi]
  40f400:	88 07                	mov    BYTE PTR [edi],al
  40f402:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f405:	c1 e9 02             	shr    ecx,0x2
  40f408:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f40b:	83 c6 02             	add    esi,0x2
  40f40e:	83 c7 02             	add    edi,0x2
  40f411:	83 f9 08             	cmp    ecx,0x8
  40f414:	72 a6                	jb     0x40f3bc
  40f416:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f418:	ff 24 95 a8 f4 40 00 	jmp    DWORD PTR [edx*4+0x40f4a8]
  40f41f:	90                   	nop
  40f420:	23 d1                	and    edx,ecx
  40f422:	8a 06                	mov    al,BYTE PTR [esi]
  40f424:	88 07                	mov    BYTE PTR [edi],al
  40f426:	46                   	inc    esi
  40f427:	c1 e9 02             	shr    ecx,0x2
  40f42a:	47                   	inc    edi
  40f42b:	83 f9 08             	cmp    ecx,0x8
  40f42e:	72 8c                	jb     0x40f3bc
  40f430:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f432:	ff 24 95 a8 f4 40 00 	jmp    DWORD PTR [edx*4+0x40f4a8]
  40f439:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f43c:	9f                   	lahf
  40f43d:	f4                   	hlt
  40f43e:	40                   	inc    eax
  40f43f:	00 8c f4 40 00 84 f4 	add    BYTE PTR [esp+esi*8-0xb7bffc0],cl
  40f446:	40                   	inc    eax
  40f447:	00 7c f4 40          	add    BYTE PTR [esp+esi*8+0x40],bh
  40f44b:	00 74 f4 40          	add    BYTE PTR [esp+esi*8+0x40],dh
  40f44f:	00 6c f4 40          	add    BYTE PTR [esp+esi*8+0x40],ch
  40f453:	00 64 f4 40          	add    BYTE PTR [esp+esi*8+0x40],ah
  40f457:	00 5c f4 40          	add    BYTE PTR [esp+esi*8+0x40],bl
  40f45b:	00 8b 44 8e e4 89    	add    BYTE PTR [ebx-0x761b71bc],cl
  40f461:	44                   	inc    esp
  40f462:	8f                   	(bad)
  40f463:	e4 8b                	in     al,0x8b
  40f465:	44                   	inc    esp
  40f466:	8e e8                	mov    gs,eax
  40f468:	89 44 8f e8          	mov    DWORD PTR [edi+ecx*4-0x18],eax
  40f46c:	8b 44 8e ec          	mov    eax,DWORD PTR [esi+ecx*4-0x14]
  40f470:	89 44 8f ec          	mov    DWORD PTR [edi+ecx*4-0x14],eax
  40f474:	8b 44 8e f0          	mov    eax,DWORD PTR [esi+ecx*4-0x10]
  40f478:	89 44 8f f0          	mov    DWORD PTR [edi+ecx*4-0x10],eax
  40f47c:	8b 44 8e f4          	mov    eax,DWORD PTR [esi+ecx*4-0xc]
  40f480:	89 44 8f f4          	mov    DWORD PTR [edi+ecx*4-0xc],eax
  40f484:	8b 44 8e f8          	mov    eax,DWORD PTR [esi+ecx*4-0x8]
  40f488:	89 44 8f f8          	mov    DWORD PTR [edi+ecx*4-0x8],eax
  40f48c:	8b 44 8e fc          	mov    eax,DWORD PTR [esi+ecx*4-0x4]
  40f490:	89 44 8f fc          	mov    DWORD PTR [edi+ecx*4-0x4],eax
  40f494:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  40f49b:	03 f0                	add    esi,eax
  40f49d:	03 f8                	add    edi,eax
  40f49f:	ff 24 95 a8 f4 40 00 	jmp    DWORD PTR [edx*4+0x40f4a8]
  40f4a6:	8b ff                	mov    edi,edi
  40f4a8:	b8 f4 40 00 c0       	mov    eax,0xc00040f4
  40f4ad:	f4                   	hlt
  40f4ae:	40                   	inc    eax
  40f4af:	00 cc                	add    ah,cl
  40f4b1:	f4                   	hlt
  40f4b2:	40                   	inc    eax
  40f4b3:	00 e0                	add    al,ah
  40f4b5:	f4                   	hlt
  40f4b6:	40                   	inc    eax
  40f4b7:	00 8b 45 08 5e 5f    	add    BYTE PTR [ebx+0x5f5e0845],cl
  40f4bd:	c9                   	leave
  40f4be:	c3                   	ret
  40f4bf:	90                   	nop
  40f4c0:	8a 06                	mov    al,BYTE PTR [esi]
  40f4c2:	88 07                	mov    BYTE PTR [edi],al
  40f4c4:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f4c7:	5e                   	pop    esi
  40f4c8:	5f                   	pop    edi
  40f4c9:	c9                   	leave
  40f4ca:	c3                   	ret
  40f4cb:	90                   	nop
  40f4cc:	8a 06                	mov    al,BYTE PTR [esi]
  40f4ce:	88 07                	mov    BYTE PTR [edi],al
  40f4d0:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f4d3:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f4d6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f4d9:	5e                   	pop    esi
  40f4da:	5f                   	pop    edi
  40f4db:	c9                   	leave
  40f4dc:	c3                   	ret
  40f4dd:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f4e0:	8a 06                	mov    al,BYTE PTR [esi]
  40f4e2:	88 07                	mov    BYTE PTR [edi],al
  40f4e4:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f4e7:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f4ea:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f4ed:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f4f0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f4f3:	5e                   	pop    esi
  40f4f4:	5f                   	pop    edi
  40f4f5:	c9                   	leave
  40f4f6:	c3                   	ret
  40f4f7:	90                   	nop
  40f4f8:	8d 74 31 fc          	lea    esi,[ecx+esi*1-0x4]
  40f4fc:	8d 7c 39 fc          	lea    edi,[ecx+edi*1-0x4]
  40f500:	f7 c7 03 00 00 00    	test   edi,0x3
  40f506:	75 24                	jne    0x40f52c
  40f508:	c1 e9 02             	shr    ecx,0x2
  40f50b:	83 e2 03             	and    edx,0x3
  40f50e:	83 f9 08             	cmp    ecx,0x8
  40f511:	72 0d                	jb     0x40f520
  40f513:	fd                   	std
  40f514:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f516:	fc                   	cld
  40f517:	ff 24 95 40 f6 40 00 	jmp    DWORD PTR [edx*4+0x40f640]
  40f51e:	8b ff                	mov    edi,edi
  40f520:	f7 d9                	neg    ecx
  40f522:	ff 24 8d f0 f5 40 00 	jmp    DWORD PTR [ecx*4+0x40f5f0]
  40f529:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f52c:	8b c7                	mov    eax,edi
  40f52e:	ba 03 00 00 00       	mov    edx,0x3
  40f533:	83 f9 04             	cmp    ecx,0x4
  40f536:	72 0c                	jb     0x40f544
  40f538:	83 e0 03             	and    eax,0x3
  40f53b:	2b c8                	sub    ecx,eax
  40f53d:	ff 24 85 48 f5 40 00 	jmp    DWORD PTR [eax*4+0x40f548]
  40f544:	ff 24 8d 40 f6 40 00 	jmp    DWORD PTR [ecx*4+0x40f640]
  40f54b:	90                   	nop
  40f54c:	58                   	pop    eax
  40f54d:	f5                   	cmc
  40f54e:	40                   	inc    eax
  40f54f:	00 78 f5             	add    BYTE PTR [eax-0xb],bh
  40f552:	40                   	inc    eax
  40f553:	00 a0 f5 40 00 8a    	add    BYTE PTR [eax-0x75ffbf0b],ah
  40f559:	46                   	inc    esi
  40f55a:	03 23                	add    esp,DWORD PTR [ebx]
  40f55c:	d1 88 47 03 4e c1    	ror    DWORD PTR [eax-0x3eb1fcb9],1
  40f562:	e9 02 4f 83 f9       	jmp    0xf9c44469
  40f567:	08 72 b6             	or     BYTE PTR [edx-0x4a],dh
  40f56a:	fd                   	std
  40f56b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f56d:	fc                   	cld
  40f56e:	ff 24 95 40 f6 40 00 	jmp    DWORD PTR [edx*4+0x40f640]
  40f575:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f578:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f57b:	23 d1                	and    edx,ecx
  40f57d:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f580:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f583:	c1 e9 02             	shr    ecx,0x2
  40f586:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f589:	83 ee 02             	sub    esi,0x2
  40f58c:	83 ef 02             	sub    edi,0x2
  40f58f:	83 f9 08             	cmp    ecx,0x8
  40f592:	72 8c                	jb     0x40f520
  40f594:	fd                   	std
  40f595:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f597:	fc                   	cld
  40f598:	ff 24 95 40 f6 40 00 	jmp    DWORD PTR [edx*4+0x40f640]
  40f59f:	90                   	nop
  40f5a0:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f5a3:	23 d1                	and    edx,ecx
  40f5a5:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f5a8:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f5ab:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f5ae:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f5b1:	c1 e9 02             	shr    ecx,0x2
  40f5b4:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f5b7:	83 ee 03             	sub    esi,0x3
  40f5ba:	83 ef 03             	sub    edi,0x3
  40f5bd:	83 f9 08             	cmp    ecx,0x8
  40f5c0:	0f 82 5a ff ff ff    	jb     0x40f520
  40f5c6:	fd                   	std
  40f5c7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40f5c9:	fc                   	cld
  40f5ca:	ff 24 95 40 f6 40 00 	jmp    DWORD PTR [edx*4+0x40f640]
  40f5d1:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f5d4:	f4                   	hlt
  40f5d5:	f5                   	cmc
  40f5d6:	40                   	inc    eax
  40f5d7:	00 fc                	add    ah,bh
  40f5d9:	f5                   	cmc
  40f5da:	40                   	inc    eax
  40f5db:	00 04 f6             	add    BYTE PTR [esi+esi*8],al
  40f5de:	40                   	inc    eax
  40f5df:	00 0c f6             	add    BYTE PTR [esi+esi*8],cl
  40f5e2:	40                   	inc    eax
  40f5e3:	00 14 f6             	add    BYTE PTR [esi+esi*8],dl
  40f5e6:	40                   	inc    eax
  40f5e7:	00 1c f6             	add    BYTE PTR [esi+esi*8],bl
  40f5ea:	40                   	inc    eax
  40f5eb:	00 24 f6             	add    BYTE PTR [esi+esi*8],ah
  40f5ee:	40                   	inc    eax
  40f5ef:	00 37                	add    BYTE PTR [edi],dh
  40f5f1:	f6 40 00 8b          	test   BYTE PTR [eax+0x0],0x8b
  40f5f5:	44                   	inc    esp
  40f5f6:	8e 1c 89             	mov    ds,WORD PTR [ecx+ecx*4]
  40f5f9:	44                   	inc    esp
  40f5fa:	8f                   	(bad)
  40f5fb:	1c 8b                	sbb    al,0x8b
  40f5fd:	44                   	inc    esp
  40f5fe:	8e 18                	mov    ds,WORD PTR [eax]
  40f600:	89 44 8f 18          	mov    DWORD PTR [edi+ecx*4+0x18],eax
  40f604:	8b 44 8e 14          	mov    eax,DWORD PTR [esi+ecx*4+0x14]
  40f608:	89 44 8f 14          	mov    DWORD PTR [edi+ecx*4+0x14],eax
  40f60c:	8b 44 8e 10          	mov    eax,DWORD PTR [esi+ecx*4+0x10]
  40f610:	89 44 8f 10          	mov    DWORD PTR [edi+ecx*4+0x10],eax
  40f614:	8b 44 8e 0c          	mov    eax,DWORD PTR [esi+ecx*4+0xc]
  40f618:	89 44 8f 0c          	mov    DWORD PTR [edi+ecx*4+0xc],eax
  40f61c:	8b 44 8e 08          	mov    eax,DWORD PTR [esi+ecx*4+0x8]
  40f620:	89 44 8f 08          	mov    DWORD PTR [edi+ecx*4+0x8],eax
  40f624:	8b 44 8e 04          	mov    eax,DWORD PTR [esi+ecx*4+0x4]
  40f628:	89 44 8f 04          	mov    DWORD PTR [edi+ecx*4+0x4],eax
  40f62c:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  40f633:	03 f0                	add    esi,eax
  40f635:	03 f8                	add    edi,eax
  40f637:	ff 24 95 40 f6 40 00 	jmp    DWORD PTR [edx*4+0x40f640]
  40f63e:	8b ff                	mov    edi,edi
  40f640:	50                   	push   eax
  40f641:	f6 40 00 58          	test   BYTE PTR [eax+0x0],0x58
  40f645:	f6 40 00 68          	test   BYTE PTR [eax+0x0],0x68
  40f649:	f6 40 00 7c          	test   BYTE PTR [eax+0x0],0x7c
  40f64d:	f6 40 00 8b          	test   BYTE PTR [eax+0x0],0x8b
  40f651:	45                   	inc    ebp
  40f652:	08 5e 5f             	or     BYTE PTR [esi+0x5f],bl
  40f655:	c9                   	leave
  40f656:	c3                   	ret
  40f657:	90                   	nop
  40f658:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f65b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f65e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f661:	5e                   	pop    esi
  40f662:	5f                   	pop    edi
  40f663:	c9                   	leave
  40f664:	c3                   	ret
  40f665:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f668:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f66b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f66e:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f671:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f674:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f677:	5e                   	pop    esi
  40f678:	5f                   	pop    edi
  40f679:	c9                   	leave
  40f67a:	c3                   	ret
  40f67b:	90                   	nop
  40f67c:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  40f67f:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  40f682:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40f685:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  40f688:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40f68b:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40f68e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f691:	5e                   	pop    esi
  40f692:	5f                   	pop    edi
  40f693:	c9                   	leave
  40f694:	c3                   	ret
  40f695:	53                   	push   ebx
  40f696:	33 db                	xor    ebx,ebx
  40f698:	39 1d 78 36 41 00    	cmp    DWORD PTR ds:0x413678,ebx
  40f69e:	56                   	push   esi
  40f69f:	57                   	push   edi
  40f6a0:	75 42                	jne    0x40f6e4
  40f6a2:	68 3c 0b 41 00       	push   0x410b3c
  40f6a7:	ff 15 e8 00 41 00    	call   DWORD PTR ds:0x4100e8
  40f6ad:	8b f8                	mov    edi,eax
  40f6af:	3b fb                	cmp    edi,ebx
  40f6b1:	74 67                	je     0x40f71a
  40f6b3:	8b 35 30 01 41 00    	mov    esi,DWORD PTR ds:0x410130
  40f6b9:	68 30 0b 41 00       	push   0x410b30
  40f6be:	57                   	push   edi
  40f6bf:	ff d6                	call   esi
  40f6c1:	85 c0                	test   eax,eax
  40f6c3:	a3 78 36 41 00       	mov    ds:0x413678,eax
  40f6c8:	74 50                	je     0x40f71a
  40f6ca:	68 20 0b 41 00       	push   0x410b20
  40f6cf:	57                   	push   edi
  40f6d0:	ff d6                	call   esi
  40f6d2:	68 0c 0b 41 00       	push   0x410b0c
  40f6d7:	57                   	push   edi
  40f6d8:	a3 7c 36 41 00       	mov    ds:0x41367c,eax
  40f6dd:	ff d6                	call   esi
  40f6df:	a3 80 36 41 00       	mov    ds:0x413680,eax
  40f6e4:	a1 7c 36 41 00       	mov    eax,ds:0x41367c
  40f6e9:	85 c0                	test   eax,eax
  40f6eb:	74 16                	je     0x40f703
  40f6ed:	ff d0                	call   eax
  40f6ef:	8b d8                	mov    ebx,eax
  40f6f1:	85 db                	test   ebx,ebx
  40f6f3:	74 0e                	je     0x40f703
  40f6f5:	a1 80 36 41 00       	mov    eax,ds:0x413680
  40f6fa:	85 c0                	test   eax,eax
  40f6fc:	74 05                	je     0x40f703
  40f6fe:	53                   	push   ebx
  40f6ff:	ff d0                	call   eax
  40f701:	8b d8                	mov    ebx,eax
  40f703:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  40f707:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  40f70b:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  40f70f:	53                   	push   ebx
  40f710:	ff 15 78 36 41 00    	call   DWORD PTR ds:0x413678
  40f716:	5f                   	pop    edi
  40f717:	5e                   	pop    esi
  40f718:	5b                   	pop    ebx
  40f719:	c3                   	ret
  40f71a:	33 c0                	xor    eax,eax
  40f71c:	eb f8                	jmp    0x40f716
  40f71e:	cc                   	int3
  40f71f:	cc                   	int3
  40f720:	ff 25 30 02 41 00    	jmp    DWORD PTR ds:0x410230
  40f726:	cc                   	int3
  40f727:	cc                   	int3
  40f728:	cc                   	int3
  40f729:	cc                   	int3
  40f72a:	cc                   	int3
  40f72b:	cc                   	int3
  40f72c:	cc                   	int3
  40f72d:	cc                   	int3
  40f72e:	cc                   	int3
  40f72f:	cc                   	int3
  40f730:	55                   	push   ebp
  40f731:	8b ec                	mov    ebp,esp
  40f733:	57                   	push   edi
  40f734:	56                   	push   esi
  40f735:	53                   	push   ebx
  40f736:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  40f739:	0b c9                	or     ecx,ecx
  40f73b:	0f 84 95 00 00 00    	je     0x40f7d6
  40f741:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  40f744:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  40f747:	8d 05 34 35 41 00    	lea    eax,ds:0x413534
  40f74d:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
  40f751:	75 43                	jne    0x40f796
  40f753:	b7 41                	mov    bh,0x41
  40f755:	b3 5a                	mov    bl,0x5a
  40f757:	b6 20                	mov    dh,0x20
  40f759:	8d 49 00             	lea    ecx,[ecx+0x0]
  40f75c:	8a 26                	mov    ah,BYTE PTR [esi]
  40f75e:	0a e4                	or     ah,ah
  40f760:	8a 07                	mov    al,BYTE PTR [edi]
  40f762:	74 21                	je     0x40f785
  40f764:	0a c0                	or     al,al
  40f766:	74 1d                	je     0x40f785
  40f768:	46                   	inc    esi
  40f769:	47                   	inc    edi
  40f76a:	38 fc                	cmp    ah,bh
  40f76c:	72 06                	jb     0x40f774
  40f76e:	38 dc                	cmp    ah,bl
  40f770:	77 02                	ja     0x40f774
  40f772:	02 e6                	add    ah,dh
  40f774:	38 f8                	cmp    al,bh
  40f776:	72 06                	jb     0x40f77e
  40f778:	38 d8                	cmp    al,bl
  40f77a:	77 02                	ja     0x40f77e
  40f77c:	02 c6                	add    al,dh
  40f77e:	38 c4                	cmp    ah,al
  40f780:	75 09                	jne    0x40f78b
  40f782:	49                   	dec    ecx
  40f783:	75 d7                	jne    0x40f75c
  40f785:	33 c9                	xor    ecx,ecx
  40f787:	38 c4                	cmp    ah,al
  40f789:	74 4b                	je     0x40f7d6
  40f78b:	b9 ff ff ff ff       	mov    ecx,0xffffffff
  40f790:	72 44                	jb     0x40f7d6
  40f792:	f7 d9                	neg    ecx
  40f794:	eb 40                	jmp    0x40f7d6
  40f796:	33 c0                	xor    eax,eax
  40f798:	33 db                	xor    ebx,ebx
  40f79a:	8b ff                	mov    edi,edi
  40f79c:	8a 06                	mov    al,BYTE PTR [esi]
  40f79e:	0b c0                	or     eax,eax
  40f7a0:	8a 1f                	mov    bl,BYTE PTR [edi]
  40f7a2:	74 23                	je     0x40f7c7
  40f7a4:	0b db                	or     ebx,ebx
  40f7a6:	74 1f                	je     0x40f7c7
  40f7a8:	46                   	inc    esi
  40f7a9:	47                   	inc    edi
  40f7aa:	51                   	push   ecx
  40f7ab:	50                   	push   eax
  40f7ac:	53                   	push   ebx
  40f7ad:	e8 ba 00 00 00       	call   0x40f86c
  40f7b2:	8b d8                	mov    ebx,eax
  40f7b4:	83 c4 04             	add    esp,0x4
  40f7b7:	e8 b0 00 00 00       	call   0x40f86c
  40f7bc:	83 c4 04             	add    esp,0x4
  40f7bf:	59                   	pop    ecx
  40f7c0:	3b c3                	cmp    eax,ebx
  40f7c2:	75 09                	jne    0x40f7cd
  40f7c4:	49                   	dec    ecx
  40f7c5:	75 d5                	jne    0x40f79c
  40f7c7:	33 c9                	xor    ecx,ecx
  40f7c9:	3b c3                	cmp    eax,ebx
  40f7cb:	74 09                	je     0x40f7d6
  40f7cd:	b9 ff ff ff ff       	mov    ecx,0xffffffff
  40f7d2:	72 02                	jb     0x40f7d6
  40f7d4:	f7 d9                	neg    ecx
  40f7d6:	8b c1                	mov    eax,ecx
  40f7d8:	5b                   	pop    ebx
  40f7d9:	5e                   	pop    esi
  40f7da:	5f                   	pop    edi
  40f7db:	c9                   	leave
  40f7dc:	c3                   	ret
  40f7dd:	cc                   	int3
  40f7de:	cc                   	int3
  40f7df:	cc                   	int3
  40f7e0:	55                   	push   ebp
  40f7e1:	8b ec                	mov    ebp,esp
  40f7e3:	57                   	push   edi
  40f7e4:	56                   	push   esi
  40f7e5:	53                   	push   ebx
  40f7e6:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  40f7e9:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  40f7ec:	8d 05 34 35 41 00    	lea    eax,ds:0x413534
  40f7f2:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
  40f7f6:	75 3b                	jne    0x40f833
  40f7f8:	b0 ff                	mov    al,0xff
  40f7fa:	8b ff                	mov    edi,edi
  40f7fc:	0a c0                	or     al,al
  40f7fe:	74 2e                	je     0x40f82e
  40f800:	8a 06                	mov    al,BYTE PTR [esi]
  40f802:	46                   	inc    esi
  40f803:	8a 27                	mov    ah,BYTE PTR [edi]
  40f805:	47                   	inc    edi
  40f806:	38 c4                	cmp    ah,al
  40f808:	74 f2                	je     0x40f7fc
  40f80a:	2c 41                	sub    al,0x41
  40f80c:	3c 1a                	cmp    al,0x1a
  40f80e:	1a c9                	sbb    cl,cl
  40f810:	80 e1 20             	and    cl,0x20
  40f813:	02 c1                	add    al,cl
  40f815:	04 41                	add    al,0x41
  40f817:	86 e0                	xchg   al,ah
  40f819:	2c 41                	sub    al,0x41
  40f81b:	3c 1a                	cmp    al,0x1a
  40f81d:	1a c9                	sbb    cl,cl
  40f81f:	80 e1 20             	and    cl,0x20
  40f822:	02 c1                	add    al,cl
  40f824:	04 41                	add    al,0x41
  40f826:	38 e0                	cmp    al,ah
  40f828:	74 d2                	je     0x40f7fc
  40f82a:	1a c0                	sbb    al,al
  40f82c:	1c ff                	sbb    al,0xff
  40f82e:	0f be c0             	movsx  eax,al
  40f831:	eb 34                	jmp    0x40f867
  40f833:	b8 ff 00 00 00       	mov    eax,0xff
  40f838:	33 db                	xor    ebx,ebx
  40f83a:	8b ff                	mov    edi,edi
  40f83c:	0a c0                	or     al,al
  40f83e:	74 27                	je     0x40f867
  40f840:	8a 06                	mov    al,BYTE PTR [esi]
  40f842:	46                   	inc    esi
  40f843:	8a 1f                	mov    bl,BYTE PTR [edi]
  40f845:	47                   	inc    edi
  40f846:	38 d8                	cmp    al,bl
  40f848:	74 f2                	je     0x40f83c
  40f84a:	50                   	push   eax
  40f84b:	53                   	push   ebx
  40f84c:	e8 1b 00 00 00       	call   0x40f86c
  40f851:	8b d8                	mov    ebx,eax
  40f853:	83 c4 04             	add    esp,0x4
  40f856:	e8 11 00 00 00       	call   0x40f86c
  40f85b:	83 c4 04             	add    esp,0x4
  40f85e:	38 c3                	cmp    bl,al
  40f860:	74 da                	je     0x40f83c
  40f862:	1b c0                	sbb    eax,eax
  40f864:	83 d8 ff             	sbb    eax,0xffffffff
  40f867:	5b                   	pop    ebx
  40f868:	5e                   	pop    esi
  40f869:	5f                   	pop    edi
  40f86a:	c9                   	leave
  40f86b:	c3                   	ret
  40f86c:	55                   	push   ebp
  40f86d:	8b ec                	mov    ebp,esp
  40f86f:	51                   	push   ecx
  40f870:	83 3d 3c 35 41 00 00 	cmp    DWORD PTR ds:0x41353c,0x0
  40f877:	53                   	push   ebx
  40f878:	56                   	push   esi
  40f879:	57                   	push   edi
  40f87a:	75 1d                	jne    0x40f899
  40f87c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40f87f:	83 f8 41             	cmp    eax,0x41
  40f882:	0f 8c aa 00 00 00    	jl     0x40f932
  40f888:	83 f8 5a             	cmp    eax,0x5a
  40f88b:	0f 8f a1 00 00 00    	jg     0x40f932
  40f891:	83 c0 20             	add    eax,0x20
  40f894:	e9 99 00 00 00       	jmp    0x40f932
  40f899:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40f89c:	bf 00 01 00 00       	mov    edi,0x100
  40f8a1:	6a 01                	push   0x1
  40f8a3:	3b df                	cmp    ebx,edi
  40f8a5:	5e                   	pop    esi
  40f8a6:	7d 25                	jge    0x40f8cd
  40f8a8:	39 35 1c 31 41 00    	cmp    DWORD PTR ds:0x41311c,esi
  40f8ae:	7e 0b                	jle    0x40f8bb
  40f8b0:	56                   	push   esi
  40f8b1:	53                   	push   ebx
  40f8b2:	e8 c7 c9 ff ff       	call   0x40c27e
  40f8b7:	59                   	pop    ecx
  40f8b8:	59                   	pop    ecx
  40f8b9:	eb 0a                	jmp    0x40f8c5
  40f8bb:	a1 10 2f 41 00       	mov    eax,ds:0x412f10
  40f8c0:	8a 04 58             	mov    al,BYTE PTR [eax+ebx*2]
  40f8c3:	23 c6                	and    eax,esi
  40f8c5:	85 c0                	test   eax,eax
  40f8c7:	75 04                	jne    0x40f8cd
  40f8c9:	8b c3                	mov    eax,ebx
  40f8cb:	eb 65                	jmp    0x40f932
  40f8cd:	8b 15 10 2f 41 00    	mov    edx,DWORD PTR ds:0x412f10
  40f8d3:	8b c3                	mov    eax,ebx
  40f8d5:	c1 f8 08             	sar    eax,0x8
  40f8d8:	0f b6 c8             	movzx  ecx,al
  40f8db:	f6 44 4a 01 80       	test   BYTE PTR [edx+ecx*2+0x1],0x80
  40f8e0:	74 0f                	je     0x40f8f1
  40f8e2:	80 65 0a 00          	and    BYTE PTR [ebp+0xa],0x0
  40f8e6:	6a 02                	push   0x2
  40f8e8:	88 45 08             	mov    BYTE PTR [ebp+0x8],al
  40f8eb:	88 5d 09             	mov    BYTE PTR [ebp+0x9],bl
  40f8ee:	58                   	pop    eax
  40f8ef:	eb 09                	jmp    0x40f8fa
  40f8f1:	80 65 09 00          	and    BYTE PTR [ebp+0x9],0x0
  40f8f5:	88 5d 08             	mov    BYTE PTR [ebp+0x8],bl
  40f8f8:	8b c6                	mov    eax,esi
  40f8fa:	56                   	push   esi
  40f8fb:	6a 00                	push   0x0
  40f8fd:	8d 4d fc             	lea    ecx,[ebp-0x4]
  40f900:	6a 03                	push   0x3
  40f902:	51                   	push   ecx
  40f903:	50                   	push   eax
  40f904:	8d 45 08             	lea    eax,[ebp+0x8]
  40f907:	50                   	push   eax
  40f908:	57                   	push   edi
  40f909:	ff 35 3c 35 41 00    	push   DWORD PTR ds:0x41353c
  40f90f:	e8 5e d4 ff ff       	call   0x40cd72
  40f914:	83 c4 20             	add    esp,0x20
  40f917:	85 c0                	test   eax,eax
  40f919:	74 ae                	je     0x40f8c9
  40f91b:	3b c6                	cmp    eax,esi
  40f91d:	75 06                	jne    0x40f925
  40f91f:	0f b6 45 fc          	movzx  eax,BYTE PTR [ebp-0x4]
  40f923:	eb 0d                	jmp    0x40f932
  40f925:	0f b6 45 fd          	movzx  eax,BYTE PTR [ebp-0x3]
  40f929:	0f b6 4d fc          	movzx  ecx,BYTE PTR [ebp-0x4]
  40f92d:	c1 e0 08             	shl    eax,0x8
  40f930:	0b c1                	or     eax,ecx
  40f932:	5f                   	pop    edi
  40f933:	5e                   	pop    esi
  40f934:	5b                   	pop    ebx
  40f935:	c9                   	leave
  40f936:	c3                   	ret
