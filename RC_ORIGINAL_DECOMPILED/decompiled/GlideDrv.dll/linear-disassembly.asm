
/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RC_ORIGINAL_DECOMPILED/originals/GlideDrv.dll:     file format pei-i386


Disassembly of section .text:

10001000 <.text>:
10001000:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10001004:	81 ec 84 07 00 00    	sub    esp,0x784
1000100a:	53                   	push   ebx
1000100b:	68 6c e0 00 10       	push   0x1000e06c
10001010:	50                   	push   eax
10001011:	e8 23 2f 00 00       	call   0x10003f39
10001016:	8b d8                	mov    ebx,eax
10001018:	83 c4 08             	add    esp,0x8
1000101b:	85 db                	test   ebx,ebx
1000101d:	75 08                	jne    0x10001027
1000101f:	5b                   	pop    ebx
10001020:	81 c4 84 07 00 00    	add    esp,0x784
10001026:	c3                   	ret
10001027:	53                   	push   ebx
10001028:	6a 01                	push   0x1
1000102a:	6a 0e                	push   0xe
1000102c:	68 30 e0 00 10       	push   0x1000e030
10001031:	e8 99 2d 00 00       	call   0x10003dcf
10001036:	83 c4 10             	add    esp,0x10
10001039:	83 f8 01             	cmp    eax,0x1
1000103c:	74 0a                	je     0x10001048
1000103e:	33 c0                	xor    eax,eax
10001040:	5b                   	pop    ebx
10001041:	81 c4 84 07 00 00    	add    esp,0x784
10001047:	c3                   	ret
10001048:	53                   	push   ebx
10001049:	6a 01                	push   0x1
1000104b:	6a 2c                	push   0x2c
1000104d:	68 40 e0 00 10       	push   0x1000e040
10001052:	e8 78 2d 00 00       	call   0x10003dcf
10001057:	83 c4 10             	add    esp,0x10
1000105a:	83 f8 01             	cmp    eax,0x1
1000105d:	74 0a                	je     0x10001069
1000105f:	33 c0                	xor    eax,eax
10001061:	5b                   	pop    ebx
10001062:	81 c4 84 07 00 00    	add    esp,0x784
10001068:	c3                   	ret
10001069:	8b 8c 24 8c 07 00 00 	mov    ecx,DWORD PTR [esp+0x78c]
10001070:	55                   	push   ebp
10001071:	56                   	push   esi
10001072:	57                   	push   edi
10001073:	8d a9 00 5b 09 00    	lea    ebp,[ecx+0x95b00]
10001079:	c7 44 24 10 e0 01 00 	mov    DWORD PTR [esp+0x10],0x1e0
10001080:	00 
10001081:	8d 44 24 14          	lea    eax,[esp+0x14]
10001085:	8b cd                	mov    ecx,ebp
10001087:	bf 80 02 00 00       	mov    edi,0x280
1000108c:	8a 11                	mov    dl,BYTE PTR [ecx]
1000108e:	66 8b 31             	mov    si,WORD PTR [ecx]
10001091:	c0 e2 03             	shl    dl,0x3
10001094:	88 10                	mov    BYTE PTR [eax],dl
10001096:	8b d6                	mov    edx,esi
10001098:	c1 ea 05             	shr    edx,0x5
1000109b:	40                   	inc    eax
1000109c:	83 c1 02             	add    ecx,0x2
1000109f:	c0 e2 02             	shl    dl,0x2
100010a2:	88 10                	mov    BYTE PTR [eax],dl
100010a4:	66 8b d6             	mov    dx,si
100010a7:	66 c1 ea 0b          	shr    dx,0xb
100010ab:	40                   	inc    eax
100010ac:	c0 e2 03             	shl    dl,0x3
100010af:	88 10                	mov    BYTE PTR [eax],dl
100010b1:	40                   	inc    eax
100010b2:	4f                   	dec    edi
100010b3:	75 d7                	jne    0x1000108c
100010b5:	53                   	push   ebx
100010b6:	6a 01                	push   0x1
100010b8:	8d 44 24 1c          	lea    eax,[esp+0x1c]
100010bc:	68 80 07 00 00       	push   0x780
100010c1:	50                   	push   eax
100010c2:	e8 08 2d 00 00       	call   0x10003dcf
100010c7:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100010cb:	83 c4 10             	add    esp,0x10
100010ce:	81 ed 00 05 00 00    	sub    ebp,0x500
100010d4:	48                   	dec    eax
100010d5:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100010d9:	75 a6                	jne    0x10001081
100010db:	53                   	push   ebx
100010dc:	e8 71 2c 00 00       	call   0x10003d52
100010e1:	83 c4 04             	add    esp,0x4
100010e4:	f7 d8                	neg    eax
100010e6:	5f                   	pop    edi
100010e7:	5e                   	pop    esi
100010e8:	1b c0                	sbb    eax,eax
100010ea:	5d                   	pop    ebp
100010eb:	40                   	inc    eax
100010ec:	5b                   	pop    ebx
100010ed:	81 c4 84 07 00 00    	add    esp,0x784
100010f3:	c3                   	ret
100010f4:	90                   	nop
100010f5:	90                   	nop
100010f6:	90                   	nop
100010f7:	90                   	nop
100010f8:	90                   	nop
100010f9:	90                   	nop
100010fa:	90                   	nop
100010fb:	90                   	nop
100010fc:	90                   	nop
100010fd:	90                   	nop
100010fe:	90                   	nop
100010ff:	90                   	nop
10001100:	a1 24 57 1f 10       	mov    eax,ds:0x101f5724
10001105:	c3                   	ret
10001106:	90                   	nop
10001107:	90                   	nop
10001108:	90                   	nop
10001109:	90                   	nop
1000110a:	90                   	nop
1000110b:	90                   	nop
1000110c:	90                   	nop
1000110d:	90                   	nop
1000110e:	90                   	nop
1000110f:	90                   	nop
10001110:	53                   	push   ebx
10001111:	68 0c 1f 00 00       	push   0x1f0c
10001116:	e8 1a 2f 00 00       	call   0x10004035
1000111b:	8b d8                	mov    ebx,eax
1000111d:	83 c4 04             	add    esp,0x4
10001120:	85 db                	test   ebx,ebx
10001122:	75 02                	jne    0x10001126
10001124:	5b                   	pop    ebx
10001125:	c3                   	ret
10001126:	56                   	push   esi
10001127:	57                   	push   edi
10001128:	b9 c3 07 00 00       	mov    ecx,0x7c3
1000112d:	33 c0                	xor    eax,eax
1000112f:	8b fb                	mov    edi,ebx
10001131:	53                   	push   ebx
10001132:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10001134:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
10001138:	83 c9 ff             	or     ecx,0xffffffff
1000113b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1000113d:	f7 d1                	not    ecx
1000113f:	2b f9                	sub    edi,ecx
10001141:	8b c1                	mov    eax,ecx
10001143:	8b f7                	mov    esi,edi
10001145:	8b fb                	mov    edi,ebx
10001147:	c1 e9 02             	shr    ecx,0x2
1000114a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000114c:	8b c8                	mov    ecx,eax
1000114e:	83 e1 03             	and    ecx,0x3
10001151:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10001153:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10001157:	c7 83 04 1f 00 00 ff 	mov    DWORD PTR [ebx+0x1f04],0xffffffff
1000115e:	ff ff ff 
10001161:	89 8b 00 01 00 00    	mov    DWORD PTR [ebx+0x100],ecx
10001167:	89 9b 08 1f 00 00    	mov    DWORD PTR [ebx+0x1f08],ebx
1000116d:	e8 1e 00 00 00       	call   0x10001190
10001172:	83 c4 04             	add    esp,0x4
10001175:	85 c0                	test   eax,eax
10001177:	5f                   	pop    edi
10001178:	5e                   	pop    esi
10001179:	75 0d                	jne    0x10001188
1000117b:	53                   	push   ebx
1000117c:	e8 cb 2d 00 00       	call   0x10003f4c
10001181:	83 c4 04             	add    esp,0x4
10001184:	33 c0                	xor    eax,eax
10001186:	5b                   	pop    ebx
10001187:	c3                   	ret
10001188:	8b c3                	mov    eax,ebx
1000118a:	5b                   	pop    ebx
1000118b:	c3                   	ret
1000118c:	90                   	nop
1000118d:	90                   	nop
1000118e:	90                   	nop
1000118f:	90                   	nop
10001190:	56                   	push   esi
10001191:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10001195:	57                   	push   edi
10001196:	56                   	push   esi
10001197:	e8 84 01 00 00       	call   0x10001320
1000119c:	8d be 04 01 00 00    	lea    edi,[esi+0x104]
100011a2:	b9 80 07 00 00       	mov    ecx,0x780
100011a7:	33 c0                	xor    eax,eax
100011a9:	83 c4 04             	add    esp,0x4
100011ac:	f3 ab                	rep stos DWORD PTR es:[edi],eax
100011ae:	5f                   	pop    edi
100011af:	b8 01 00 00 00       	mov    eax,0x1
100011b4:	5e                   	pop    esi
100011b5:	c3                   	ret
100011b6:	90                   	nop
100011b7:	90                   	nop
100011b8:	90                   	nop
100011b9:	90                   	nop
100011ba:	90                   	nop
100011bb:	90                   	nop
100011bc:	90                   	nop
100011bd:	90                   	nop
100011be:	90                   	nop
100011bf:	90                   	nop
100011c0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100011c4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100011c8:	56                   	push   esi
100011c9:	05 04 01 00 00       	add    eax,0x104
100011ce:	57                   	push   edi
100011cf:	33 d2                	xor    edx,edx
100011d1:	8b 70 34             	mov    esi,DWORD PTR [eax+0x34]
100011d4:	85 f6                	test   esi,esi
100011d6:	74 26                	je     0x100011fe
100011d8:	8b 31                	mov    esi,DWORD PTR [ecx]
100011da:	8b 38                	mov    edi,DWORD PTR [eax]
100011dc:	3b f7                	cmp    esi,edi
100011de:	75 1e                	jne    0x100011fe
100011e0:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
100011e3:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
100011e6:	3b f7                	cmp    esi,edi
100011e8:	75 14                	jne    0x100011fe
100011ea:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
100011ed:	8b 78 08             	mov    edi,DWORD PTR [eax+0x8]
100011f0:	3b f7                	cmp    esi,edi
100011f2:	75 0a                	jne    0x100011fe
100011f4:	8b 71 0c             	mov    esi,DWORD PTR [ecx+0xc]
100011f7:	8b 78 0c             	mov    edi,DWORD PTR [eax+0xc]
100011fa:	3b f7                	cmp    esi,edi
100011fc:	74 0e                	je     0x1000120c
100011fe:	42                   	inc    edx
100011ff:	83 c0 3c             	add    eax,0x3c
10001202:	81 fa 80 00 00 00    	cmp    edx,0x80
10001208:	7c c7                	jl     0x100011d1
1000120a:	33 c0                	xor    eax,eax
1000120c:	5f                   	pop    edi
1000120d:	5e                   	pop    esi
1000120e:	c3                   	ret
1000120f:	90                   	nop
10001210:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10001214:	53                   	push   ebx
10001215:	8d 98 04 01 00 00    	lea    ebx,[eax+0x104]
1000121b:	33 c0                	xor    eax,eax
1000121d:	8b 4b 34             	mov    ecx,DWORD PTR [ebx+0x34]
10001220:	85 c9                	test   ecx,ecx
10001222:	74 0b                	je     0x1000122f
10001224:	40                   	inc    eax
10001225:	83 c3 3c             	add    ebx,0x3c
10001228:	3d 80 00 00 00       	cmp    eax,0x80
1000122d:	7c ee                	jl     0x1000121d
1000122f:	3d 80 00 00 00       	cmp    eax,0x80
10001234:	75 04                	jne    0x1000123a
10001236:	33 c0                	xor    eax,eax
10001238:	5b                   	pop    ebx
10001239:	c3                   	ret
1000123a:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
1000123e:	56                   	push   esi
1000123f:	57                   	push   edi
10001240:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10001244:	b9 05 00 00 00       	mov    ecx,0x5
10001249:	8b f0                	mov    esi,eax
1000124b:	8b fb                	mov    edi,ebx
1000124d:	50                   	push   eax
1000124e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10001250:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10001254:	6a 03                	push   0x3
10001256:	89 4b 18             	mov    DWORD PTR [ebx+0x18],ecx
10001259:	8a 4c 24 24          	mov    cl,BYTE PTR [esp+0x24]
1000125d:	c7 43 10 00 00 00 00 	mov    DWORD PTR [ebx+0x10],0x0
10001264:	89 53 1c             	mov    DWORD PTR [ebx+0x1c],edx
10001267:	88 4b 20             	mov    BYTE PTR [ebx+0x20],cl
1000126a:	e8 e1 29 00 00       	call   0x10003c50
1000126f:	89 43 24             	mov    DWORD PTR [ebx+0x24],eax
10001272:	8b 43 34             	mov    eax,DWORD PTR [ebx+0x34]
10001275:	40                   	inc    eax
10001276:	5f                   	pop    edi
10001277:	89 43 34             	mov    DWORD PTR [ebx+0x34],eax
1000127a:	8b c3                	mov    eax,ebx
1000127c:	5e                   	pop    esi
1000127d:	5b                   	pop    ebx
1000127e:	c3                   	ret
1000127f:	90                   	nop
10001280:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10001284:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10001288:	50                   	push   eax
10001289:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000128d:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10001290:	6a 03                	push   0x3
10001292:	8b 88 00 01 00 00    	mov    ecx,DWORD PTR [eax+0x100]
10001298:	52                   	push   edx
10001299:	51                   	push   ecx
1000129a:	e8 01 04 00 00       	call   0x100016a0
1000129f:	83 c4 04             	add    esp,0x4
100012a2:	50                   	push   eax
100012a3:	e8 ae 29 00 00       	call   0x10003c56
100012a8:	b8 01 00 00 00       	mov    eax,0x1
100012ad:	c3                   	ret
100012ae:	90                   	nop
100012af:	90                   	nop
100012b0:	56                   	push   esi
100012b1:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
100012b5:	57                   	push   edi
100012b6:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
100012ba:	56                   	push   esi
100012bb:	57                   	push   edi
100012bc:	e8 ff fe ff ff       	call   0x100011c0
100012c1:	83 c4 08             	add    esp,0x8
100012c4:	85 c0                	test   eax,eax
100012c6:	74 0a                	je     0x100012d2
100012c8:	8b 48 34             	mov    ecx,DWORD PTR [eax+0x34]
100012cb:	5f                   	pop    edi
100012cc:	41                   	inc    ecx
100012cd:	5e                   	pop    esi
100012ce:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
100012d1:	c3                   	ret
100012d2:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100012d6:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
100012da:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
100012de:	56                   	push   esi
100012df:	50                   	push   eax
100012e0:	51                   	push   ecx
100012e1:	52                   	push   edx
100012e2:	57                   	push   edi
100012e3:	e8 28 ff ff ff       	call   0x10001210
100012e8:	83 c4 14             	add    esp,0x14
100012eb:	5f                   	pop    edi
100012ec:	5e                   	pop    esi
100012ed:	c3                   	ret
100012ee:	90                   	nop
100012ef:	90                   	nop
100012f0:	56                   	push   esi
100012f1:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
100012f5:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
100012f8:	48                   	dec    eax
100012f9:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
100012fc:	75 1e                	jne    0x1000131c
100012fe:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10001301:	85 c0                	test   eax,eax
10001303:	74 09                	je     0x1000130e
10001305:	50                   	push   eax
10001306:	e8 41 2c 00 00       	call   0x10003f4c
1000130b:	83 c4 04             	add    esp,0x4
1000130e:	c7 46 38 00 00 00 00 	mov    DWORD PTR [esi+0x38],0x0
10001315:	c7 46 30 00 00 00 00 	mov    DWORD PTR [esi+0x30],0x0
1000131c:	5e                   	pop    esi
1000131d:	c3                   	ret
1000131e:	90                   	nop
1000131f:	90                   	nop
10001320:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10001324:	56                   	push   esi
10001325:	57                   	push   edi
10001326:	bf 80 00 00 00       	mov    edi,0x80
1000132b:	8d b0 34 01 00 00    	lea    esi,[eax+0x134]
10001331:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10001334:	85 c0                	test   eax,eax
10001336:	74 1c                	je     0x10001354
10001338:	8b 06                	mov    eax,DWORD PTR [esi]
1000133a:	85 c0                	test   eax,eax
1000133c:	74 09                	je     0x10001347
1000133e:	50                   	push   eax
1000133f:	e8 08 2c 00 00       	call   0x10003f4c
10001344:	83 c4 04             	add    esp,0x4
10001347:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
1000134d:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
10001354:	83 c6 3c             	add    esi,0x3c
10001357:	4f                   	dec    edi
10001358:	75 d7                	jne    0x10001331
1000135a:	5f                   	pop    edi
1000135b:	b8 01 00 00 00       	mov    eax,0x1
10001360:	5e                   	pop    esi
10001361:	c3                   	ret
10001362:	90                   	nop
10001363:	90                   	nop
10001364:	90                   	nop
10001365:	90                   	nop
10001366:	90                   	nop
10001367:	90                   	nop
10001368:	90                   	nop
10001369:	90                   	nop
1000136a:	90                   	nop
1000136b:	90                   	nop
1000136c:	90                   	nop
1000136d:	90                   	nop
1000136e:	90                   	nop
1000136f:	90                   	nop
10001370:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10001374:	83 ec 10             	sub    esp,0x10
10001377:	85 c0                	test   eax,eax
10001379:	57                   	push   edi
1000137a:	74 0c                	je     0x10001388
1000137c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10001380:	68 88 e1 00 10       	push   0x1000e188
10001385:	50                   	push   eax
10001386:	eb 0a                	jmp    0x10001392
10001388:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1000138c:	68 84 e1 00 10       	push   0x1000e184
10001391:	51                   	push   ecx
10001392:	e8 a2 2b 00 00       	call   0x10003f39
10001397:	8b f8                	mov    edi,eax
10001399:	83 c4 08             	add    esp,0x8
1000139c:	85 ff                	test   edi,edi
1000139e:	75 05                	jne    0x100013a5
100013a0:	5f                   	pop    edi
100013a1:	83 c4 10             	add    esp,0x10
100013a4:	c3                   	ret
100013a5:	53                   	push   ebx
100013a6:	55                   	push   ebp
100013a7:	8d 54 24 0c          	lea    edx,[esp+0xc]
100013ab:	56                   	push   esi
100013ac:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
100013b0:	52                   	push   edx
100013b1:	33 ed                	xor    ebp,ebp
100013b3:	33 db                	xor    ebx,ebx
100013b5:	ff 15 74 c0 00 10    	call   DWORD PTR ds:0x1000c074
100013bb:	68 48 e1 00 10       	push   0x1000e148
100013c0:	57                   	push   edi
100013c1:	e8 a9 2d 00 00       	call   0x1000416f
100013c6:	8b 44 24 22          	mov    eax,DWORD PTR [esp+0x22]
100013ca:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
100013ce:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
100013d2:	25 ff ff 00 00       	and    eax,0xffff
100013d7:	81 e1 ff ff 00 00    	and    ecx,0xffff
100013dd:	50                   	push   eax
100013de:	8b 44 24 22          	mov    eax,DWORD PTR [esp+0x22]
100013e2:	51                   	push   ecx
100013e3:	8b 4c 24 22          	mov    ecx,DWORD PTR [esp+0x22]
100013e7:	81 e2 ff ff 00 00    	and    edx,0xffff
100013ed:	25 ff ff 00 00       	and    eax,0xffff
100013f2:	52                   	push   edx
100013f3:	81 e1 ff ff 00 00    	and    ecx,0xffff
100013f9:	50                   	push   eax
100013fa:	51                   	push   ecx
100013fb:	68 28 e1 00 10       	push   0x1000e128
10001400:	57                   	push   edi
10001401:	e8 69 2d 00 00       	call   0x1000416f
10001406:	56                   	push   esi
10001407:	68 18 e1 00 10       	push   0x1000e118
1000140c:	57                   	push   edi
1000140d:	e8 5d 2d 00 00       	call   0x1000416f
10001412:	8b 96 00 01 00 00    	mov    edx,DWORD PTR [esi+0x100]
10001418:	52                   	push   edx
10001419:	e8 82 0b 00 00       	call   0x10001fa0
1000141e:	50                   	push   eax
1000141f:	68 f8 e0 00 10       	push   0x1000e0f8
10001424:	57                   	push   edi
10001425:	e8 45 2d 00 00       	call   0x1000416f
1000142a:	8b 86 00 01 00 00    	mov    eax,DWORD PTR [esi+0x100]
10001430:	83 c4 40             	add    esp,0x40
10001433:	50                   	push   eax
10001434:	e8 77 0b 00 00       	call   0x10001fb0
10001439:	50                   	push   eax
1000143a:	68 dc e0 00 10       	push   0x1000e0dc
1000143f:	57                   	push   edi
10001440:	e8 2a 2d 00 00       	call   0x1000416f
10001445:	68 cc e0 00 10       	push   0x1000e0cc
1000144a:	57                   	push   edi
1000144b:	e8 1f 2d 00 00       	call   0x1000416f
10001450:	83 c4 18             	add    esp,0x18
10001453:	81 c6 38 01 00 00    	add    esi,0x138
10001459:	c7 44 24 28 80 00 00 	mov    DWORD PTR [esp+0x28],0x80
10001460:	00 
10001461:	8b 06                	mov    eax,DWORD PTR [esi]
10001463:	85 c0                	test   eax,eax
10001465:	74 2a                	je     0x10001491
10001467:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000146a:	33 d2                	xor    edx,edx
1000146c:	8a 56 ec             	mov    dl,BYTE PTR [esi-0x14]
1000146f:	51                   	push   ecx
10001470:	8b 4e e4             	mov    ecx,DWORD PTR [esi-0x1c]
10001473:	50                   	push   eax
10001474:	8b 46 e8             	mov    eax,DWORD PTR [esi-0x18]
10001477:	52                   	push   edx
10001478:	50                   	push   eax
10001479:	51                   	push   ecx
1000147a:	68 94 e0 00 10       	push   0x1000e094
1000147f:	57                   	push   edi
10001480:	e8 ea 2c 00 00       	call   0x1000416f
10001485:	8b 0e                	mov    ecx,DWORD PTR [esi]
10001487:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000148a:	83 c4 1c             	add    esp,0x1c
1000148d:	03 d9                	add    ebx,ecx
1000148f:	03 e8                	add    ebp,eax
10001491:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10001495:	83 c6 3c             	add    esi,0x3c
10001498:	48                   	dec    eax
10001499:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
1000149d:	75 c2                	jne    0x10001461
1000149f:	55                   	push   ebp
100014a0:	53                   	push   ebx
100014a1:	68 70 e0 00 10       	push   0x1000e070
100014a6:	57                   	push   edi
100014a7:	e8 c3 2c 00 00       	call   0x1000416f
100014ac:	57                   	push   edi
100014ad:	e8 a0 28 00 00       	call   0x10003d52
100014b2:	83 c4 14             	add    esp,0x14
100014b5:	b8 01 00 00 00       	mov    eax,0x1
100014ba:	5e                   	pop    esi
100014bb:	5d                   	pop    ebp
100014bc:	5b                   	pop    ebx
100014bd:	5f                   	pop    edi
100014be:	83 c4 10             	add    esp,0x10
100014c1:	c3                   	ret
100014c2:	90                   	nop
100014c3:	90                   	nop
100014c4:	90                   	nop
100014c5:	90                   	nop
100014c6:	90                   	nop
100014c7:	90                   	nop
100014c8:	90                   	nop
100014c9:	90                   	nop
100014ca:	90                   	nop
100014cb:	90                   	nop
100014cc:	90                   	nop
100014cd:	90                   	nop
100014ce:	90                   	nop
100014cf:	90                   	nop
100014d0:	51                   	push   ecx
100014d1:	53                   	push   ebx
100014d2:	55                   	push   ebp
100014d3:	56                   	push   esi
100014d4:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
100014d8:	57                   	push   edi
100014d9:	56                   	push   esi
100014da:	e8 41 fe ff ff       	call   0x10001320
100014df:	8b 86 00 01 00 00    	mov    eax,DWORD PTR [esi+0x100]
100014e5:	50                   	push   eax
100014e6:	e8 55 0b 00 00       	call   0x10002040
100014eb:	83 c4 08             	add    esp,0x8
100014ee:	33 ed                	xor    ebp,ebp
100014f0:	81 c6 04 01 00 00    	add    esi,0x104
100014f6:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
100014fa:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
100014fd:	85 c0                	test   eax,eax
100014ff:	0f 8e a5 00 00 00    	jle    0x100015aa
10001505:	39 46 38             	cmp    DWORD PTR [esi+0x38],eax
10001508:	0f 8d 9c 00 00 00    	jge    0x100015aa
1000150e:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10001511:	85 c0                	test   eax,eax
10001513:	75 3f                	jne    0x10001554
10001515:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10001518:	8d 04 40             	lea    eax,[eax+eax*2]
1000151b:	8d 0c 80             	lea    ecx,[eax+eax*4]
1000151e:	c1 e1 02             	shl    ecx,0x2
10001521:	51                   	push   ecx
10001522:	e8 0e 2b 00 00       	call   0x10004035
10001527:	83 c4 04             	add    esp,0x4
1000152a:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
1000152d:	85 c0                	test   eax,eax
1000152f:	0f 84 d7 00 00 00    	je     0x1000160c
10001535:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
10001538:	8b 7e 30             	mov    edi,DWORD PTR [esi+0x30]
1000153b:	8d 04 40             	lea    eax,[eax+eax*2]
1000153e:	8d 0c 80             	lea    ecx,[eax+eax*4]
10001541:	33 c0                	xor    eax,eax
10001543:	c1 e1 02             	shl    ecx,0x2
10001546:	8b d1                	mov    edx,ecx
10001548:	c1 e9 02             	shr    ecx,0x2
1000154b:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1000154d:	8b ca                	mov    ecx,edx
1000154f:	83 e1 03             	and    ecx,0x3
10001552:	f3 aa                	rep stos BYTE PTR es:[edi],al
10001554:	56                   	push   esi
10001555:	6a 03                	push   0x3
10001557:	e8 f4 26 00 00       	call   0x10003c50
1000155c:	8b d8                	mov    ebx,eax
1000155e:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10001562:	8b 88 00 01 00 00    	mov    ecx,DWORD PTR [eax+0x100]
10001568:	51                   	push   ecx
10001569:	e8 42 0a 00 00       	call   0x10001fb0
1000156e:	83 c4 04             	add    esp,0x4
10001571:	3b c3                	cmp    eax,ebx
10001573:	72 4a                	jb     0x100015bf
10001575:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
10001578:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
1000157b:	8d 14 80             	lea    edx,[eax+eax*4]
1000157e:	40                   	inc    eax
1000157f:	89 46 38             	mov    DWORD PTR [esi+0x38],eax
10001582:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10001586:	8d 3c 91             	lea    edi,[ecx+edx*4]
10001589:	8d 57 04             	lea    edx,[edi+0x4]
1000158c:	89 7f 10             	mov    DWORD PTR [edi+0x10],edi
1000158f:	89 37                	mov    DWORD PTR [edi],esi
10001591:	8b 88 00 01 00 00    	mov    ecx,DWORD PTR [eax+0x100]
10001597:	52                   	push   edx
10001598:	53                   	push   ebx
10001599:	51                   	push   ecx
1000159a:	e8 21 0a 00 00       	call   0x10001fc0
1000159f:	83 c4 0c             	add    esp,0xc
100015a2:	85 c0                	test   eax,eax
100015a4:	74 16                	je     0x100015bc
100015a6:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
100015aa:	45                   	inc    ebp
100015ab:	83 c6 3c             	add    esi,0x3c
100015ae:	81 fd 80 00 00 00    	cmp    ebp,0x80
100015b4:	0f 8c 40 ff ff ff    	jl     0x100014fa
100015ba:	eb 03                	jmp    0x100015bf
100015bc:	ff 4e 38             	dec    DWORD PTR [esi+0x38]
100015bf:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100015c3:	85 c0                	test   eax,eax
100015c5:	74 09                	je     0x100015d0
100015c7:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
100015cb:	e9 1e ff ff ff       	jmp    0x100014ee
100015d0:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
100015d4:	33 c9                	xor    ecx,ecx
100015d6:	8d 82 3c 01 00 00    	lea    eax,[edx+0x13c]
100015dc:	8b 70 fc             	mov    esi,DWORD PTR [eax-0x4]
100015df:	85 f6                	test   esi,esi
100015e1:	7e 05                	jle    0x100015e8
100015e3:	83 38 00             	cmp    DWORD PTR [eax],0x0
100015e6:	7e 24                	jle    0x1000160c
100015e8:	41                   	inc    ecx
100015e9:	83 c0 3c             	add    eax,0x3c
100015ec:	81 f9 80 00 00 00    	cmp    ecx,0x80
100015f2:	7c e8                	jl     0x100015dc
100015f4:	a1 98 18 01 10       	mov    eax,ds:0x10011898
100015f9:	50                   	push   eax
100015fa:	68 8c e1 00 10       	push   0x1000e18c
100015ff:	52                   	push   edx
10001600:	e8 6b fd ff ff       	call   0x10001370
10001605:	83 c4 0c             	add    esp,0xc
10001608:	85 c0                	test   eax,eax
1000160a:	75 08                	jne    0x10001614
1000160c:	5f                   	pop    edi
1000160d:	5e                   	pop    esi
1000160e:	5d                   	pop    ebp
1000160f:	33 c0                	xor    eax,eax
10001611:	5b                   	pop    ebx
10001612:	59                   	pop    ecx
10001613:	c3                   	ret
10001614:	5f                   	pop    edi
10001615:	b8 01 00 00 00       	mov    eax,0x1
1000161a:	5e                   	pop    esi
1000161b:	5d                   	pop    ebp
1000161c:	a3 98 18 01 10       	mov    ds:0x10011898,eax
10001621:	5b                   	pop    ebx
10001622:	59                   	pop    ecx
10001623:	c3                   	ret
10001624:	90                   	nop
10001625:	90                   	nop
10001626:	90                   	nop
10001627:	90                   	nop
10001628:	90                   	nop
10001629:	90                   	nop
1000162a:	90                   	nop
1000162b:	90                   	nop
1000162c:	90                   	nop
1000162d:	90                   	nop
1000162e:	90                   	nop
1000162f:	90                   	nop
10001630:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10001634:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10001637:	c3                   	ret
10001638:	90                   	nop
10001639:	90                   	nop
1000163a:	90                   	nop
1000163b:	90                   	nop
1000163c:	90                   	nop
1000163d:	90                   	nop
1000163e:	90                   	nop
1000163f:	90                   	nop
10001640:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10001644:	56                   	push   esi
10001645:	8b 4a 30             	mov    ecx,DWORD PTR [edx+0x30]
10001648:	8b 52 38             	mov    edx,DWORD PTR [edx+0x38]
1000164b:	85 d2                	test   edx,edx
1000164d:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
10001650:	8b c1                	mov    eax,ecx
10001652:	7e 15                	jle    0x10001669
10001654:	57                   	push   edi
10001655:	8b fa                	mov    edi,edx
10001657:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
1000165a:	3b d6                	cmp    edx,esi
1000165c:	73 04                	jae    0x10001662
1000165e:	8b c1                	mov    eax,ecx
10001660:	8b f2                	mov    esi,edx
10001662:	83 c1 14             	add    ecx,0x14
10001665:	4f                   	dec    edi
10001666:	75 ef                	jne    0x10001657
10001668:	5f                   	pop    edi
10001669:	c7 40 08 00 00 00 00 	mov    DWORD PTR [eax+0x8],0x0
10001670:	c7 40 0c 00 00 00 00 	mov    DWORD PTR [eax+0xc],0x0
10001677:	5e                   	pop    esi
10001678:	c3                   	ret
10001679:	90                   	nop
1000167a:	90                   	nop
1000167b:	90                   	nop
1000167c:	90                   	nop
1000167d:	90                   	nop
1000167e:	90                   	nop
1000167f:	90                   	nop
10001680:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10001684:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10001688:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
1000168b:	c3                   	ret
1000168c:	90                   	nop
1000168d:	90                   	nop
1000168e:	90                   	nop
1000168f:	90                   	nop
10001690:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10001694:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
10001697:	c3                   	ret
10001698:	90                   	nop
10001699:	90                   	nop
1000169a:	90                   	nop
1000169b:	90                   	nop
1000169c:	90                   	nop
1000169d:	90                   	nop
1000169e:	90                   	nop
1000169f:	90                   	nop
100016a0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100016a4:	8b 00                	mov    eax,DWORD PTR [eax]
100016a6:	c3                   	ret
100016a7:	90                   	nop
100016a8:	90                   	nop
100016a9:	90                   	nop
100016aa:	90                   	nop
100016ab:	90                   	nop
100016ac:	90                   	nop
100016ad:	90                   	nop
100016ae:	90                   	nop
100016af:	90                   	nop
100016b0:	53                   	push   ebx
100016b1:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
100016b5:	57                   	push   edi
100016b6:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
100016ba:	3b 5f 08             	cmp    ebx,DWORD PTR [edi+0x8]
100016bd:	74 5e                	je     0x1000171d
100016bf:	55                   	push   ebp
100016c0:	8b 2d 14 3e 0e 10    	mov    ebp,DWORD PTR ds:0x100e3e14
100016c6:	3b dd                	cmp    ebx,ebp
100016c8:	75 4f                	jne    0x10001719
100016ca:	56                   	push   esi
100016cb:	8b 37                	mov    esi,DWORD PTR [edi]
100016cd:	33 d2                	xor    edx,edx
100016cf:	8b 4e 1c             	mov    ecx,DWORD PTR [esi+0x1c]
100016d2:	8a 56 20             	mov    dl,BYTE PTR [esi+0x20]
100016d5:	0f af 4e 18          	imul   ecx,DWORD PTR [esi+0x18]
100016d9:	8b c1                	mov    eax,ecx
100016db:	5e                   	pop    esi
100016dc:	c1 f8 02             	sar    eax,0x2
100016df:	83 fa 01             	cmp    edx,0x1
100016e2:	7e 09                	jle    0x100016ed
100016e4:	4a                   	dec    edx
100016e5:	03 c8                	add    ecx,eax
100016e7:	c1 f8 02             	sar    eax,0x2
100016ea:	4a                   	dec    edx
100016eb:	75 f8                	jne    0x100016e5
100016ed:	39 2d 20 57 1f 10    	cmp    DWORD PTR ds:0x101f5720,ebp
100016f3:	74 17                	je     0x1000170c
100016f5:	33 c0                	xor    eax,eax
100016f7:	89 2d 20 57 1f 10    	mov    DWORD PTR ds:0x101f5720,ebp
100016fd:	5d                   	pop    ebp
100016fe:	8d 04 48             	lea    eax,[eax+ecx*2]
10001701:	a3 24 57 1f 10       	mov    ds:0x101f5724,eax
10001706:	89 5f 08             	mov    DWORD PTR [edi+0x8],ebx
10001709:	5f                   	pop    edi
1000170a:	5b                   	pop    ebx
1000170b:	c3                   	ret
1000170c:	a1 24 57 1f 10       	mov    eax,ds:0x101f5724
10001711:	8d 04 48             	lea    eax,[eax+ecx*2]
10001714:	a3 24 57 1f 10       	mov    ds:0x101f5724,eax
10001719:	89 5f 08             	mov    DWORD PTR [edi+0x8],ebx
1000171c:	5d                   	pop    ebp
1000171d:	5f                   	pop    edi
1000171e:	5b                   	pop    ebx
1000171f:	c3                   	ret
10001720:	56                   	push   esi
10001721:	57                   	push   edi
10001722:	8b 3d fc c0 00 10    	mov    edi,DWORD PTR ds:0x1000c0fc
10001728:	8b f1                	mov    esi,ecx
1000172a:	6a 11                	push   0x11
1000172c:	ff d7                	call   edi
1000172e:	6a 77                	push   0x77
10001730:	ff d7                	call   edi
10001732:	56                   	push   esi
10001733:	e8 48 02 00 00       	call   0x10001980
10001738:	83 c4 04             	add    esp,0x4
1000173b:	5f                   	pop    edi
1000173c:	5e                   	pop    esi
1000173d:	c3                   	ret
1000173e:	90                   	nop
1000173f:	90                   	nop
10001740:	e8 8b 04 00 00       	call   0x10001bd0
10001745:	b8 01 00 00 00       	mov    eax,0x1
1000174a:	c3                   	ret
1000174b:	90                   	nop
1000174c:	90                   	nop
1000174d:	90                   	nop
1000174e:	90                   	nop
1000174f:	90                   	nop
10001750:	e9 cb 06 00 00       	jmp    0x10001e20
10001755:	90                   	nop
10001756:	90                   	nop
10001757:	90                   	nop
10001758:	90                   	nop
10001759:	90                   	nop
1000175a:	90                   	nop
1000175b:	90                   	nop
1000175c:	90                   	nop
1000175d:	90                   	nop
1000175e:	90                   	nop
1000175f:	90                   	nop
10001760:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10001764:	a3 9c 18 01 10       	mov    ds:0x1001189c,eax
10001769:	b8 01 00 00 00       	mov    eax,0x1
1000176e:	c2 04 00             	ret    0x4
10001771:	90                   	nop
10001772:	90                   	nop
10001773:	90                   	nop
10001774:	90                   	nop
10001775:	90                   	nop
10001776:	90                   	nop
10001777:	90                   	nop
10001778:	90                   	nop
10001779:	90                   	nop
1000177a:	90                   	nop
1000177b:	90                   	nop
1000177c:	90                   	nop
1000177d:	90                   	nop
1000177e:	90                   	nop
1000177f:	90                   	nop
10001780:	c7 01 00 00 80 3f    	mov    DWORD PTR [ecx],0x3f800000
10001786:	b8 01 00 00 00       	mov    eax,0x1
1000178b:	c3                   	ret
1000178c:	90                   	nop
1000178d:	90                   	nop
1000178e:	90                   	nop
1000178f:	90                   	nop
10001790:	a1 c0 55 1f 10       	mov    eax,ds:0x101f55c0
10001795:	56                   	push   esi
10001796:	85 c0                	test   eax,eax
10001798:	57                   	push   edi
10001799:	0f 84 93 00 00 00    	je     0x10001832
1000179f:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
100017a3:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
100017a7:	83 f8 01             	cmp    eax,0x1
100017aa:	72 20                	jb     0x100017cc
100017ac:	56                   	push   esi
100017ad:	68 80 01 00 00       	push   0x180
100017b2:	68 00 02 00 00       	push   0x200
100017b7:	68 fc e2 00 10       	push   0x1000e2fc
100017bc:	6a 00                	push   0x0
100017be:	ff d7                	call   edi
100017c0:	83 c4 14             	add    esp,0x14
100017c3:	85 c0                	test   eax,eax
100017c5:	74 6b                	je     0x10001832
100017c7:	a1 c0 55 1f 10       	mov    eax,ds:0x101f55c0
100017cc:	83 f8 02             	cmp    eax,0x2
100017cf:	72 20                	jb     0x100017f1
100017d1:	56                   	push   esi
100017d2:	68 e0 01 00 00       	push   0x1e0
100017d7:	68 80 02 00 00       	push   0x280
100017dc:	68 f4 e2 00 10       	push   0x1000e2f4
100017e1:	6a 01                	push   0x1
100017e3:	ff d7                	call   edi
100017e5:	83 c4 14             	add    esp,0x14
100017e8:	85 c0                	test   eax,eax
100017ea:	74 46                	je     0x10001832
100017ec:	a1 c0 55 1f 10       	mov    eax,ds:0x101f55c0
100017f1:	83 f8 04             	cmp    eax,0x4
100017f4:	72 3c                	jb     0x10001832
100017f6:	56                   	push   esi
100017f7:	68 58 02 00 00       	push   0x258
100017fc:	68 20 03 00 00       	push   0x320
10001801:	68 ec e2 00 10       	push   0x1000e2ec
10001806:	6a 02                	push   0x2
10001808:	ff d7                	call   edi
1000180a:	83 c4 14             	add    esp,0x14
1000180d:	85 c0                	test   eax,eax
1000180f:	74 21                	je     0x10001832
10001811:	a1 c0 55 1f 10       	mov    eax,ds:0x101f55c0
10001816:	83 f8 04             	cmp    eax,0x4
10001819:	76 17                	jbe    0x10001832
1000181b:	56                   	push   esi
1000181c:	68 00 03 00 00       	push   0x300
10001821:	68 00 04 00 00       	push   0x400
10001826:	68 e0 e2 00 10       	push   0x1000e2e0
1000182b:	6a 03                	push   0x3
1000182d:	ff d7                	call   edi
1000182f:	83 c4 14             	add    esp,0x14
10001832:	5f                   	pop    edi
10001833:	b8 01 00 00 00       	mov    eax,0x1
10001838:	5e                   	pop    esi
10001839:	c2 08 00             	ret    0x8
1000183c:	90                   	nop
1000183d:	90                   	nop
1000183e:	90                   	nop
1000183f:	90                   	nop
10001840:	56                   	push   esi
10001841:	57                   	push   edi
10001842:	8b f2                	mov    esi,edx
10001844:	8b f9                	mov    edi,ecx
10001846:	e8 1d 24 00 00       	call   0x10003c68
1000184b:	68 c0 55 1f 10       	push   0x101f55c0
10001850:	e8 bb 03 00 00       	call   0x10001c10
10001855:	83 c4 04             	add    esp,0x4
10001858:	85 c0                	test   eax,eax
1000185a:	74 1f                	je     0x1000187b
1000185c:	a1 c0 55 1f 10       	mov    eax,ds:0x101f55c0
10001861:	85 c0                	test   eax,eax
10001863:	74 16                	je     0x1000187b
10001865:	56                   	push   esi
10001866:	68 04 e3 00 10       	push   0x1000e304
1000186b:	6a 00                	push   0x0
1000186d:	ff d7                	call   edi
1000186f:	83 c4 0c             	add    esp,0xc
10001872:	85 c0                	test   eax,eax
10001874:	74 05                	je     0x1000187b
10001876:	e8 e7 23 00 00       	call   0x10003c62
1000187b:	5f                   	pop    edi
1000187c:	b8 01 00 00 00       	mov    eax,0x1
10001881:	5e                   	pop    esi
10001882:	c3                   	ret
10001883:	90                   	nop
10001884:	90                   	nop
10001885:	90                   	nop
10001886:	90                   	nop
10001887:	90                   	nop
10001888:	90                   	nop
10001889:	90                   	nop
1000188a:	90                   	nop
1000188b:	90                   	nop
1000188c:	90                   	nop
1000188d:	90                   	nop
1000188e:	90                   	nop
1000188f:	90                   	nop
10001890:	53                   	push   ebx
10001891:	56                   	push   esi
10001892:	57                   	push   edi
10001893:	8b fa                	mov    edi,edx
10001895:	8b d9                	mov    ebx,ecx
10001897:	be 98 e1 00 10       	mov    esi,0x1000e198
1000189c:	57                   	push   edi
1000189d:	56                   	push   esi
1000189e:	ff d3                	call   ebx
100018a0:	83 c4 08             	add    esp,0x8
100018a3:	85 c0                	test   eax,eax
100018a5:	74 0b                	je     0x100018b2
100018a7:	83 c6 08             	add    esi,0x8
100018aa:	81 fe d8 e1 00 10    	cmp    esi,0x1000e1d8
100018b0:	72 ea                	jb     0x1000189c
100018b2:	5f                   	pop    edi
100018b3:	5e                   	pop    esi
100018b4:	b8 01 00 00 00       	mov    eax,0x1
100018b9:	5b                   	pop    ebx
100018ba:	c3                   	ret
100018bb:	90                   	nop
100018bc:	90                   	nop
100018bd:	90                   	nop
100018be:	90                   	nop
100018bf:	90                   	nop
100018c0:	b8 01 00 00 00       	mov    eax,0x1
100018c5:	c3                   	ret
100018c6:	90                   	nop
100018c7:	90                   	nop
100018c8:	90                   	nop
100018c9:	90                   	nop
100018ca:	90                   	nop
100018cb:	90                   	nop
100018cc:	90                   	nop
100018cd:	90                   	nop
100018ce:	90                   	nop
100018cf:	90                   	nop
100018d0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100018d4:	c7 05 10 57 1f 10 03 	mov    DWORD PTR ds:0x101f5710,0x3
100018db:	00 00 00 
100018de:	c7 05 14 57 1f 10 00 	mov    DWORD PTR ds:0x101f5714,0x0
100018e5:	00 00 00 
100018e8:	c7 05 80 e2 00 10 10 	mov    DWORD PTR ds:0x1000e280,0x101f5710
100018ef:	57 1f 10 
100018f2:	68 20 e3 00 10       	push   0x1000e320
100018f7:	c7 00 d8 e1 00 10    	mov    DWORD PTR [eax],0x1000e1d8
100018fd:	6a 00                	push   0x0
100018ff:	c7 05 e8 e1 00 10 00 	mov    DWORD PTR ds:0x1000e1e8,0x101f5600
10001906:	56 1f 10 
10001909:	e8 12 00 00 00       	call   0x10001920
1000190e:	83 c4 08             	add    esp,0x8
10001911:	b8 01 00 00 00       	mov    eax,0x1
10001916:	c3                   	ret
10001917:	90                   	nop
10001918:	90                   	nop
10001919:	90                   	nop
1000191a:	90                   	nop
1000191b:	90                   	nop
1000191c:	90                   	nop
1000191d:	90                   	nop
1000191e:	90                   	nop
1000191f:	90                   	nop
10001920:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
10001924:	57                   	push   edi
10001925:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
10001929:	89 15 00 57 1f 10    	mov    DWORD PTR ds:0x101f5700,edx
1000192f:	85 ff                	test   edi,edi
10001931:	74 34                	je     0x10001967
10001933:	83 c9 ff             	or     ecx,0xffffffff
10001936:	33 c0                	xor    eax,eax
10001938:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
1000193a:	f7 d1                	not    ecx
1000193c:	2b f9                	sub    edi,ecx
1000193e:	56                   	push   esi
1000193f:	8b c1                	mov    eax,ecx
10001941:	8b f7                	mov    esi,edi
10001943:	bf 00 56 1f 10       	mov    edi,0x101f5600
10001948:	c1 e9 02             	shr    ecx,0x2
1000194b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000194d:	8b c8                	mov    ecx,eax
1000194f:	83 e1 03             	and    ecx,0x3
10001952:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10001954:	5e                   	pop    esi
10001955:	c7 05 e8 e1 00 10 00 	mov    DWORD PTR ds:0x1000e1e8,0x101f5600
1000195c:	56 1f 10 
1000195f:	89 15 e4 e1 00 10    	mov    DWORD PTR ds:0x1000e1e4,edx
10001965:	5f                   	pop    edi
10001966:	c3                   	ret
10001967:	c6 05 00 56 1f 10 00 	mov    BYTE PTR ds:0x101f5600,0x0
1000196e:	c7 05 e8 e1 00 10 00 	mov    DWORD PTR ds:0x1000e1e8,0x101f5600
10001975:	56 1f 10 
10001978:	89 15 e4 e1 00 10    	mov    DWORD PTR ds:0x1000e1e4,edx
1000197e:	5f                   	pop    edi
1000197f:	c3                   	ret
10001980:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10001984:	83 ec 10             	sub    esp,0x10
10001987:	8b 81 04 04 00 00    	mov    eax,DWORD PTR [ecx+0x404]
1000198d:	57                   	push   edi
1000198e:	83 f8 03             	cmp    eax,0x3
10001991:	0f 87 06 02 00 00    	ja     0x10001b9d
10001997:	ff 24 85 b4 1b 00 10 	jmp    DWORD PTR [eax*4+0x10001bb4]
1000199e:	c7 05 68 55 1f 10 00 	mov    DWORD PTR ds:0x101f5568,0x200
100019a5:	02 00 00 
100019a8:	c7 05 6c 55 1f 10 80 	mov    DWORD PTR ds:0x101f556c,0x180
100019af:	01 00 00 
100019b2:	bf 03 00 00 00       	mov    edi,0x3
100019b7:	eb 4f                	jmp    0x10001a08
100019b9:	c7 05 68 55 1f 10 80 	mov    DWORD PTR ds:0x101f5568,0x280
100019c0:	02 00 00 
100019c3:	c7 05 6c 55 1f 10 e0 	mov    DWORD PTR ds:0x101f556c,0x1e0
100019ca:	01 00 00 
100019cd:	bf 07 00 00 00       	mov    edi,0x7
100019d2:	eb 34                	jmp    0x10001a08
100019d4:	c7 05 68 55 1f 10 20 	mov    DWORD PTR ds:0x101f5568,0x320
100019db:	03 00 00 
100019de:	c7 05 6c 55 1f 10 58 	mov    DWORD PTR ds:0x101f556c,0x258
100019e5:	02 00 00 
100019e8:	bf 08 00 00 00       	mov    edi,0x8
100019ed:	eb 19                	jmp    0x10001a08
100019ef:	c7 05 68 55 1f 10 00 	mov    DWORD PTR ds:0x101f5568,0x400
100019f6:	04 00 00 
100019f9:	c7 05 6c 55 1f 10 00 	mov    DWORD PTR ds:0x101f556c,0x300
10001a00:	03 00 00 
10001a03:	bf 0c 00 00 00       	mov    edi,0xc
10001a08:	8b 81 10 06 00 00    	mov    eax,DWORD PTR [ecx+0x610]
10001a0e:	56                   	push   esi
10001a0f:	8b 35 f0 c0 00 10    	mov    esi,DWORD PTR ds:0x1000c0f0
10001a15:	68 e0 18 01 10       	push   0x100118e0
10001a1a:	50                   	push   eax
10001a1b:	a3 60 55 1f 10       	mov    ds:0x101f5560,eax
10001a20:	ff d6                	call   esi
10001a22:	8d 44 24 08          	lea    eax,[esp+0x8]
10001a26:	50                   	push   eax
10001a27:	ff 15 ec c0 00 10    	call   DWORD PTR ds:0x1000c0ec
10001a2d:	50                   	push   eax
10001a2e:	ff d6                	call   esi
10001a30:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10001a34:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10001a38:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10001a3c:	83 c1 14             	add    ecx,0x14
10001a3f:	6a 01                	push   0x1
10001a41:	51                   	push   ecx
10001a42:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10001a46:	83 c2 14             	add    edx,0x14
10001a49:	83 c0 d8             	add    eax,0xffffffd8
10001a4c:	52                   	push   edx
10001a4d:	8b 15 60 55 1f 10    	mov    edx,DWORD PTR ds:0x101f5560
10001a53:	83 c1 fc             	add    ecx,0xfffffffc
10001a56:	50                   	push   eax
10001a57:	51                   	push   ecx
10001a58:	52                   	push   edx
10001a59:	ff 15 f4 c0 00 10    	call   DWORD PTR ds:0x1000c0f4
10001a5f:	a1 6c 55 1f 10       	mov    eax,ds:0x101f556c
10001a64:	99                   	cdq
10001a65:	2b c2                	sub    eax,edx
10001a67:	d1 f8                	sar    eax,1
10001a69:	50                   	push   eax
10001a6a:	a1 68 55 1f 10       	mov    eax,ds:0x101f5568
10001a6f:	99                   	cdq
10001a70:	2b c2                	sub    eax,edx
10001a72:	d1 f8                	sar    eax,1
10001a74:	50                   	push   eax
10001a75:	ff 15 f8 c0 00 10    	call   DWORD PTR ds:0x1000c0f8
10001a7b:	e8 e8 21 00 00       	call   0x10003c68
10001a80:	68 c0 55 1f 10       	push   0x101f55c0
10001a85:	e8 86 01 00 00       	call   0x10001c10
10001a8a:	83 c4 04             	add    esp,0x4
10001a8d:	85 c0                	test   eax,eax
10001a8f:	5e                   	pop    esi
10001a90:	0f 84 16 01 00 00    	je     0x10001bac
10001a96:	a1 c4 55 1f 10       	mov    eax,ds:0x101f55c4
10001a9b:	85 c0                	test   eax,eax
10001a9d:	7f 16                	jg     0x10001ab5
10001a9f:	68 08 e4 00 10       	push   0x1000e408
10001aa4:	6a 03                	push   0x3
10001aa6:	e8 75 fe ff ff       	call   0x10001920
10001aab:	83 c4 08             	add    esp,0x8
10001aae:	33 c0                	xor    eax,eax
10001ab0:	5f                   	pop    edi
10001ab1:	83 c4 10             	add    esp,0x10
10001ab4:	c3                   	ret
10001ab5:	6a 00                	push   0x0
10001ab7:	e8 be 21 00 00       	call   0x10003c7a
10001abc:	a1 60 55 1f 10       	mov    eax,ds:0x101f5560
10001ac1:	6a 01                	push   0x1
10001ac3:	6a 02                	push   0x2
10001ac5:	6a 00                	push   0x0
10001ac7:	6a 01                	push   0x1
10001ac9:	6a 00                	push   0x0
10001acb:	57                   	push   edi
10001acc:	50                   	push   eax
10001acd:	e8 a2 21 00 00       	call   0x10003c74
10001ad2:	85 c0                	test   eax,eax
10001ad4:	75 16                	jne    0x10001aec
10001ad6:	68 e0 e3 00 10       	push   0x1000e3e0
10001adb:	6a 03                	push   0x3
10001add:	e8 3e fe ff ff       	call   0x10001920
10001ae2:	83 c4 08             	add    esp,0x8
10001ae5:	33 c0                	xor    eax,eax
10001ae7:	5f                   	pop    edi
10001ae8:	83 c4 10             	add    esp,0x10
10001aeb:	c3                   	ret
10001aec:	b8 05 00 00 00       	mov    eax,0x5
10001af1:	68 c4 e3 00 10       	push   0x1000e3c4
10001af6:	6a 00                	push   0x0
10001af8:	c7 05 78 55 1f 10 0b 	mov    DWORD PTR ds:0x101f5578,0xb
10001aff:	00 00 00 
10001b02:	a3 7c 55 1f 10       	mov    ds:0x101f557c,eax
10001b07:	c7 05 80 55 1f 10 00 	mov    DWORD PTR ds:0x101f5580,0x0
10001b0e:	00 00 00 
10001b11:	c7 05 84 55 1f 10 00 	mov    DWORD PTR ds:0x101f5584,0xf800
10001b18:	f8 00 00 
10001b1b:	c7 05 88 55 1f 10 e0 	mov    DWORD PTR ds:0x101f5588,0x7e0
10001b22:	07 00 00 
10001b25:	c7 05 8c 55 1f 10 1f 	mov    DWORD PTR ds:0x101f558c,0x1f
10001b2c:	00 00 00 
10001b2f:	a3 90 55 1f 10       	mov    ds:0x101f5590,eax
10001b34:	c7 05 94 55 1f 10 06 	mov    DWORD PTR ds:0x101f5594,0x6
10001b3b:	00 00 00 
10001b3e:	a3 98 55 1f 10       	mov    ds:0x101f5598,eax
10001b43:	e8 d8 fd ff ff       	call   0x10001920
10001b48:	83 c4 08             	add    esp,0x8
10001b4b:	e8 50 05 00 00       	call   0x100020a0
10001b50:	85 c0                	test   eax,eax
10001b52:	75 16                	jne    0x10001b6a
10001b54:	68 98 e3 00 10       	push   0x1000e398
10001b59:	6a 07                	push   0x7
10001b5b:	e8 c0 fd ff ff       	call   0x10001920
10001b60:	83 c4 08             	add    esp,0x8
10001b63:	33 c0                	xor    eax,eax
10001b65:	5f                   	pop    edi
10001b66:	83 c4 10             	add    esp,0x10
10001b69:	c3                   	ret
10001b6a:	e8 51 01 00 00       	call   0x10001cc0
10001b6f:	85 c0                	test   eax,eax
10001b71:	75 16                	jne    0x10001b89
10001b73:	68 64 e3 00 10       	push   0x1000e364
10001b78:	6a 07                	push   0x7
10001b7a:	e8 a1 fd ff ff       	call   0x10001920
10001b7f:	83 c4 08             	add    esp,0x8
10001b82:	33 c0                	xor    eax,eax
10001b84:	5f                   	pop    edi
10001b85:	83 c4 10             	add    esp,0x10
10001b88:	c3                   	ret
10001b89:	68 00 00 80 3f       	push   0x3f800000
10001b8e:	e8 db 20 00 00       	call   0x10003c6e
10001b93:	b8 01 00 00 00       	mov    eax,0x1
10001b98:	5f                   	pop    edi
10001b99:	83 c4 10             	add    esp,0x10
10001b9c:	c3                   	ret
10001b9d:	68 3c e3 00 10       	push   0x1000e33c
10001ba2:	6a 02                	push   0x2
10001ba4:	e8 77 fd ff ff       	call   0x10001920
10001ba9:	83 c4 08             	add    esp,0x8
10001bac:	33 c0                	xor    eax,eax
10001bae:	5f                   	pop    edi
10001baf:	83 c4 10             	add    esp,0x10
10001bb2:	c3                   	ret
10001bb3:	90                   	nop
10001bb4:	9e                   	sahf
10001bb5:	19 00                	sbb    DWORD PTR [eax],eax
10001bb7:	10 b9 19 00 10 d4    	adc    BYTE PTR [ecx-0x2befffe7],bh
10001bbd:	19 00                	sbb    DWORD PTR [eax],eax
10001bbf:	10 ef                	adc    bh,ch
10001bc1:	19 00                	sbb    DWORD PTR [eax],eax
10001bc3:	10 90 90 90 90 90    	adc    BYTE PTR [eax-0x6f6f6f70],dl
10001bc9:	90                   	nop
10001bca:	90                   	nop
10001bcb:	90                   	nop
10001bcc:	90                   	nop
10001bcd:	90                   	nop
10001bce:	90                   	nop
10001bcf:	90                   	nop
10001bd0:	e8 0b 06 00 00       	call   0x100021e0
10001bd5:	a1 ec 18 01 10       	mov    eax,ds:0x100118ec
10001bda:	8b 0d e8 18 01 10    	mov    ecx,DWORD PTR ds:0x100118e8
10001be0:	8b 15 e4 18 01 10    	mov    edx,DWORD PTR ds:0x100118e4
10001be6:	6a 01                	push   0x1
10001be8:	50                   	push   eax
10001be9:	a1 e0 18 01 10       	mov    eax,ds:0x100118e0
10001bee:	51                   	push   ecx
10001bef:	8b 0d 60 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f5560
10001bf5:	52                   	push   edx
10001bf6:	50                   	push   eax
10001bf7:	51                   	push   ecx
10001bf8:	ff 15 f4 c0 00 10    	call   DWORD PTR ds:0x1000c0f4
10001bfe:	e9 5f 20 00 00       	jmp    0x10003c62
10001c03:	90                   	nop
10001c04:	90                   	nop
10001c05:	90                   	nop
10001c06:	90                   	nop
10001c07:	90                   	nop
10001c08:	90                   	nop
10001c09:	90                   	nop
10001c0a:	90                   	nop
10001c0b:	90                   	nop
10001c0c:	90                   	nop
10001c0d:	90                   	nop
10001c0e:	90                   	nop
10001c0f:	90                   	nop
10001c10:	81 ec 94 00 00 00    	sub    esp,0x94
10001c16:	8d 44 24 00          	lea    eax,[esp+0x0]
10001c1a:	50                   	push   eax
10001c1b:	e8 60 20 00 00       	call   0x10003c80
10001c20:	85 c0                	test   eax,eax
10001c22:	75 18                	jne    0x10001c3c
10001c24:	68 70 e4 00 10       	push   0x1000e470
10001c29:	6a 07                	push   0x7
10001c2b:	e8 f0 fc ff ff       	call   0x10001920
10001c30:	83 c4 08             	add    esp,0x8
10001c33:	33 c0                	xor    eax,eax
10001c35:	81 c4 94 00 00 00    	add    esp,0x94
10001c3b:	c3                   	ret
10001c3c:	8b 94 24 98 00 00 00 	mov    edx,DWORD PTR [esp+0x98]
10001c43:	57                   	push   edi
10001c44:	b9 0a 00 00 00       	mov    ecx,0xa
10001c49:	33 c0                	xor    eax,eax
10001c4b:	8b fa                	mov    edi,edx
10001c4d:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10001c4f:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10001c53:	5f                   	pop    edi
10001c54:	83 f8 03             	cmp    eax,0x3
10001c57:	77 45                	ja     0x10001c9e
10001c59:	ff 24 85 ac 1c 00 10 	jmp    DWORD PTR [eax*4+0x10001cac]
10001c60:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10001c64:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10001c68:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
10001c6b:	89 0a                	mov    DWORD PTR [edx],ecx
10001c6d:	b8 01 00 00 00       	mov    eax,0x1
10001c72:	81 c4 94 00 00 00    	add    esp,0x94
10001c78:	c3                   	ret
10001c79:	68 3c e4 00 10       	push   0x1000e43c
10001c7e:	6a 07                	push   0x7
10001c80:	e8 9b fc ff ff       	call   0x10001920
10001c85:	83 c4 08             	add    esp,0x8
10001c88:	33 c0                	xor    eax,eax
10001c8a:	81 c4 94 00 00 00    	add    esp,0x94
10001c90:	c3                   	ret
10001c91:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10001c95:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10001c99:	89 0a                	mov    DWORD PTR [edx],ecx
10001c9b:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
10001c9e:	b8 01 00 00 00       	mov    eax,0x1
10001ca3:	81 c4 94 00 00 00    	add    esp,0x94
10001ca9:	c3                   	ret
10001caa:	8b ff                	mov    edi,edi
10001cac:	91                   	xchg   ecx,eax
10001cad:	1c 00                	sbb    al,0x0
10001caf:	10 60 1c             	adc    BYTE PTR [eax+0x1c],ah
10001cb2:	00 10                	add    BYTE PTR [eax],dl
10001cb4:	79 1c                	jns    0x10001cd2
10001cb6:	00 10                	add    BYTE PTR [eax],dl
10001cb8:	91                   	xchg   ecx,eax
10001cb9:	1c 00                	sbb    al,0x0
10001cbb:	10 90 90 90 90 6a    	adc    BYTE PTR [eax+0x6a909090],dl
10001cc1:	01 e8                	add    eax,ebp
10001cc3:	13 20                	adc    esp,DWORD PTR [eax]
10001cc5:	00 00                	add    BYTE PTR [eax],al
10001cc7:	6a 06                	push   0x6
10001cc9:	e8 06 20 00 00       	call   0x10003cd4
10001cce:	6a 01                	push   0x1
10001cd0:	e8 f9 1f 00 00       	call   0x10003cce
10001cd5:	6a 00                	push   0x0
10001cd7:	e8 ec 1f 00 00       	call   0x10003cc8
10001cdc:	6a 01                	push   0x1
10001cde:	e8 df 1f 00 00       	call   0x10003cc2
10001ce3:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
10001ce8:	68 00 00 80 3f       	push   0x3f800000
10001ced:	6a 01                	push   0x1
10001cef:	6a 00                	push   0x0
10001cf1:	50                   	push   eax
10001cf2:	e8 c5 1f 00 00       	call   0x10003cbc
10001cf7:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10001cfd:	68 00 00 80 bf       	push   0xbf800000
10001d02:	51                   	push   ecx
10001d03:	e8 ae 1f 00 00       	call   0x10003cb6
10001d08:	6a 04                	push   0x4
10001d0a:	e8 a1 1f 00 00       	call   0x10003cb0
10001d0f:	8b 15 a0 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a0
10001d15:	6a 01                	push   0x1
10001d17:	52                   	push   edx
10001d18:	e8 8d 1f 00 00       	call   0x10003caa
10001d1d:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
10001d22:	6a 01                	push   0x1
10001d24:	6a 01                	push   0x1
10001d26:	50                   	push   eax
10001d27:	e8 78 1f 00 00       	call   0x10003ca4
10001d2c:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10001d32:	6a 00                	push   0x0
10001d34:	6a 00                	push   0x0
10001d36:	51                   	push   ecx
10001d37:	e8 62 1f 00 00       	call   0x10003c9e
10001d3c:	8b 15 a0 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a0
10001d42:	6a 00                	push   0x0
10001d44:	6a 00                	push   0x0
10001d46:	6a 00                	push   0x0
10001d48:	6a 01                	push   0x1
10001d4a:	6a 00                	push   0x0
10001d4c:	6a 01                	push   0x1
10001d4e:	52                   	push   edx
10001d4f:	e8 44 1f 00 00       	call   0x10003c98
10001d54:	6a 00                	push   0x0
10001d56:	6a 01                	push   0x1
10001d58:	6a 00                	push   0x0
10001d5a:	6a 01                	push   0x1
10001d5c:	6a 03                	push   0x3
10001d5e:	e8 2f 1f 00 00       	call   0x10003c92
10001d63:	6a 00                	push   0x0
10001d65:	6a 01                	push   0x1
10001d67:	6a 00                	push   0x0
10001d69:	6a 03                	push   0x3
10001d6b:	6a 03                	push   0x3
10001d6d:	e8 1a 1f 00 00       	call   0x10003c8c
10001d72:	83 3d c4 55 1f 10 02 	cmp    DWORD PTR ds:0x101f55c4,0x2
10001d79:	0f 8c 82 00 00 00    	jl     0x10001e01
10001d7f:	a1 a4 55 1f 10       	mov    eax,ds:0x101f55a4
10001d84:	68 9a 99 99 3e       	push   0x3e99999a
10001d89:	6a 01                	push   0x1
10001d8b:	6a 00                	push   0x0
10001d8d:	50                   	push   eax
10001d8e:	e8 29 1f 00 00       	call   0x10003cbc
10001d93:	8b 0d a4 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a4
10001d99:	68 9a 99 99 3e       	push   0x3e99999a
10001d9e:	51                   	push   ecx
10001d9f:	e8 12 1f 00 00       	call   0x10003cb6
10001da4:	8b 15 a4 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a4
10001daa:	6a 01                	push   0x1
10001dac:	52                   	push   edx
10001dad:	e8 f8 1e 00 00       	call   0x10003caa
10001db2:	a1 a4 55 1f 10       	mov    eax,ds:0x101f55a4
10001db7:	6a 01                	push   0x1
10001db9:	6a 01                	push   0x1
10001dbb:	50                   	push   eax
10001dbc:	e8 e3 1e 00 00       	call   0x10003ca4
10001dc1:	8b 0d a4 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a4
10001dc7:	6a 01                	push   0x1
10001dc9:	6a 01                	push   0x1
10001dcb:	51                   	push   ecx
10001dcc:	e8 cd 1e 00 00       	call   0x10003c9e
10001dd1:	8b 15 a4 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a4
10001dd7:	6a 00                	push   0x0
10001dd9:	6a 00                	push   0x0
10001ddb:	6a 01                	push   0x1
10001ddd:	6a 03                	push   0x3
10001ddf:	6a 01                	push   0x1
10001de1:	6a 03                	push   0x3
10001de3:	52                   	push   edx
10001de4:	e8 af 1e 00 00       	call   0x10003c98
10001de9:	a1 a4 55 1f 10       	mov    eax,ds:0x101f55a4
10001dee:	6a 01                	push   0x1
10001df0:	6a 01                	push   0x1
10001df2:	50                   	push   eax
10001df3:	e8 a6 1e 00 00       	call   0x10003c9e
10001df8:	6a 14                	push   0x14
10001dfa:	6a 00                	push   0x0
10001dfc:	e8 85 1e 00 00       	call   0x10003c86
10001e01:	6a 00                	push   0x0
10001e03:	6a 00                	push   0x0
10001e05:	6a 00                	push   0x0
10001e07:	6a 00                	push   0x0
10001e09:	6a 00                	push   0x0
10001e0b:	33 c9                	xor    ecx,ecx
10001e0d:	e8 9e 00 00 00       	call   0x10001eb0
10001e12:	b8 01 00 00 00       	mov    eax,0x1
10001e17:	c3                   	ret
10001e18:	90                   	nop
10001e19:	90                   	nop
10001e1a:	90                   	nop
10001e1b:	90                   	nop
10001e1c:	90                   	nop
10001e1d:	90                   	nop
10001e1e:	90                   	nop
10001e1f:	90                   	nop
10001e20:	e8 bb 03 00 00       	call   0x100021e0
10001e25:	e8 76 02 00 00       	call   0x100020a0
10001e2a:	85 c0                	test   eax,eax
10001e2c:	75 01                	jne    0x10001e2f
10001e2e:	c3                   	ret
10001e2f:	e8 8c fe ff ff       	call   0x10001cc0
10001e34:	85 c0                	test   eax,eax
10001e36:	75 01                	jne    0x10001e39
10001e38:	c3                   	ret
10001e39:	c7 05 14 3e 0e 10 00 	mov    DWORD PTR ds:0x100e3e14,0x0
10001e40:	00 00 00 
10001e43:	b8 01 00 00 00       	mov    eax,0x1
10001e48:	c3                   	ret
10001e49:	90                   	nop
10001e4a:	90                   	nop
10001e4b:	90                   	nop
10001e4c:	90                   	nop
10001e4d:	90                   	nop
10001e4e:	90                   	nop
10001e4f:	90                   	nop
10001e50:	56                   	push   esi
10001e51:	57                   	push   edi
10001e52:	8b f9                	mov    edi,ecx
10001e54:	68 00 c0 12 00       	push   0x12c000
10001e59:	e8 d7 21 00 00       	call   0x10004035
10001e5e:	83 c4 04             	add    esp,0x4
10001e61:	8b f0                	mov    esi,eax
10001e63:	56                   	push   esi
10001e64:	68 00 05 00 00       	push   0x500
10001e69:	68 e0 01 00 00       	push   0x1e0
10001e6e:	68 80 02 00 00       	push   0x280
10001e73:	6a 00                	push   0x0
10001e75:	6a 00                	push   0x0
10001e77:	6a 00                	push   0x0
10001e79:	e8 62 1e 00 00       	call   0x10003ce0
10001e7e:	85 c0                	test   eax,eax
10001e80:	75 14                	jne    0x10001e96
10001e82:	68 a0 e4 00 10       	push   0x1000e4a0
10001e87:	6a 07                	push   0x7
10001e89:	e8 92 fa ff ff       	call   0x10001920
10001e8e:	83 c4 08             	add    esp,0x8
10001e91:	33 c0                	xor    eax,eax
10001e93:	5f                   	pop    edi
10001e94:	5e                   	pop    esi
10001e95:	c3                   	ret
10001e96:	57                   	push   edi
10001e97:	56                   	push   esi
10001e98:	e8 63 f1 ff ff       	call   0x10001000
10001e9d:	56                   	push   esi
10001e9e:	e8 a9 20 00 00       	call   0x10003f4c
10001ea3:	83 c4 0c             	add    esp,0xc
10001ea6:	b8 01 00 00 00       	mov    eax,0x1
10001eab:	5f                   	pop    edi
10001eac:	5e                   	pop    esi
10001ead:	c3                   	ret
10001eae:	90                   	nop
10001eaf:	90                   	nop
10001eb0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10001eb4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10001eb8:	a3 40 55 1f 10       	mov    ds:0x101f5540,eax
10001ebd:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10001ec1:	85 c9                	test   ecx,ecx
10001ec3:	89 0d 38 e3 00 10    	mov    DWORD PTR ds:0x1000e338,ecx
10001ec9:	89 15 3c 55 1f 10    	mov    DWORD PTR ds:0x101f553c,edx
10001ecf:	a3 38 55 1f 10       	mov    ds:0x101f5538,eax
10001ed4:	74 5c                	je     0x10001f32
10001ed6:	56                   	push   esi
10001ed7:	6a 02                	push   0x2
10001ed9:	e8 1a 1e 00 00       	call   0x10003cf8
10001ede:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
10001ee2:	e8 15 23 00 00       	call   0x100041fc
10001ee7:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
10001eeb:	8b f0                	mov    esi,eax
10001eed:	c1 e6 08             	shl    esi,0x8
10001ef0:	e8 07 23 00 00       	call   0x100041fc
10001ef5:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
10001ef9:	0b f0                	or     esi,eax
10001efb:	c1 e6 08             	shl    esi,0x8
10001efe:	e8 f9 22 00 00       	call   0x100041fc
10001f03:	0b f0                	or     esi,eax
10001f05:	56                   	push   esi
10001f06:	e8 e7 1d 00 00       	call   0x10003cf2
10001f0b:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
10001f0f:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10001f13:	51                   	push   ecx
10001f14:	52                   	push   edx
10001f15:	68 a0 18 01 10       	push   0x100118a0
10001f1a:	e8 cd 1d 00 00       	call   0x10003cec
10001f1f:	68 a0 18 01 10       	push   0x100118a0
10001f24:	e8 bd 1d 00 00       	call   0x10003ce6
10001f29:	b8 01 00 00 00       	mov    eax,0x1
10001f2e:	5e                   	pop    esi
10001f2f:	c2 14 00             	ret    0x14
10001f32:	6a 00                	push   0x0
10001f34:	e8 bf 1d 00 00       	call   0x10003cf8
10001f39:	b8 01 00 00 00       	mov    eax,0x1
10001f3e:	c2 14 00             	ret    0x14
10001f41:	90                   	nop
10001f42:	90                   	nop
10001f43:	90                   	nop
10001f44:	90                   	nop
10001f45:	90                   	nop
10001f46:	90                   	nop
10001f47:	90                   	nop
10001f48:	90                   	nop
10001f49:	90                   	nop
10001f4a:	90                   	nop
10001f4b:	90                   	nop
10001f4c:	90                   	nop
10001f4d:	90                   	nop
10001f4e:	90                   	nop
10001f4f:	90                   	nop
10001f50:	6a 10                	push   0x10
10001f52:	e8 de 20 00 00       	call   0x10004035
10001f57:	83 c4 04             	add    esp,0x4
10001f5a:	85 c0                	test   eax,eax
10001f5c:	75 01                	jne    0x10001f5f
10001f5e:	c3                   	ret
10001f5f:	8b d0                	mov    edx,eax
10001f61:	33 c9                	xor    ecx,ecx
10001f63:	89 0a                	mov    DWORD PTR [edx],ecx
10001f65:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
10001f68:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
10001f6b:	89 4a 0c             	mov    DWORD PTR [edx+0xc],ecx
10001f6e:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10001f72:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10001f76:	89 08                	mov    DWORD PTR [eax],ecx
10001f78:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10001f7c:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
10001f7f:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10001f82:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
10001f85:	c3                   	ret
10001f86:	90                   	nop
10001f87:	90                   	nop
10001f88:	90                   	nop
10001f89:	90                   	nop
10001f8a:	90                   	nop
10001f8b:	90                   	nop
10001f8c:	90                   	nop
10001f8d:	90                   	nop
10001f8e:	90                   	nop
10001f8f:	90                   	nop
10001f90:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10001f94:	50                   	push   eax
10001f95:	e8 b2 1f 00 00       	call   0x10003f4c
10001f9a:	59                   	pop    ecx
10001f9b:	c3                   	ret
10001f9c:	90                   	nop
10001f9d:	90                   	nop
10001f9e:	90                   	nop
10001f9f:	90                   	nop
10001fa0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10001fa4:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
10001fa7:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10001faa:	2b c2                	sub    eax,edx
10001fac:	c3                   	ret
10001fad:	90                   	nop
10001fae:	90                   	nop
10001faf:	90                   	nop
10001fb0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10001fb4:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
10001fb7:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
10001fba:	2b c2                	sub    eax,edx
10001fbc:	c3                   	ret
10001fbd:	90                   	nop
10001fbe:	90                   	nop
10001fbf:	90                   	nop
10001fc0:	56                   	push   esi
10001fc1:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10001fc5:	57                   	push   edi
10001fc6:	56                   	push   esi
10001fc7:	e8 e4 ff ff ff       	call   0x10001fb0
10001fcc:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10001fd0:	83 c4 04             	add    esp,0x4
10001fd3:	3b c1                	cmp    eax,ecx
10001fd5:	73 05                	jae    0x10001fdc
10001fd7:	5f                   	pop    edi
10001fd8:	33 c0                	xor    eax,eax
10001fda:	5e                   	pop    esi
10001fdb:	c3                   	ret
10001fdc:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10001fdf:	8d 14 08             	lea    edx,[eax+ecx*1]
10001fe2:	81 e2 ff ff 1f 00    	and    edx,0x1fffff
10001fe8:	3b d1                	cmp    edx,ecx
10001fea:	73 18                	jae    0x10002004
10001fec:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
10001fef:	c1 e8 15             	shr    eax,0x15
10001ff2:	40                   	inc    eax
10001ff3:	c1 e0 15             	shl    eax,0x15
10001ff6:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
10001ff9:	03 c1                	add    eax,ecx
10001ffb:	3b c2                	cmp    eax,edx
10001ffd:	72 05                	jb     0x10002004
10001fff:	5f                   	pop    edi
10002000:	33 c0                	xor    eax,eax
10002002:	5e                   	pop    esi
10002003:	c3                   	ret
10002004:	f6 46 0c 07          	test   BYTE PTR [esi+0xc],0x7
10002008:	74 15                	je     0x1000201f
1000200a:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1000200d:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10002010:	40                   	inc    eax
10002011:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
10002014:	8d 3c 08             	lea    edi,[eax+ecx*1]
10002017:	3b fa                	cmp    edi,edx
10002019:	73 e4                	jae    0x10001fff
1000201b:	a8 07                	test   al,0x7
1000201d:	75 ee                	jne    0x1000200d
1000201f:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10002022:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
10002026:	03 c8                	add    ecx,eax
10002028:	5f                   	pop    edi
10002029:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
1000202c:	89 02                	mov    DWORD PTR [edx],eax
1000202e:	b8 01 00 00 00       	mov    eax,0x1
10002033:	5e                   	pop    esi
10002034:	c3                   	ret
10002035:	90                   	nop
10002036:	90                   	nop
10002037:	90                   	nop
10002038:	90                   	nop
10002039:	90                   	nop
1000203a:	90                   	nop
1000203b:	90                   	nop
1000203c:	90                   	nop
1000203d:	90                   	nop
1000203e:	90                   	nop
1000203f:	90                   	nop
10002040:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10002044:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10002047:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
1000204a:	c3                   	ret
1000204b:	90                   	nop
1000204c:	90                   	nop
1000204d:	90                   	nop
1000204e:	90                   	nop
1000204f:	90                   	nop
10002050:	33 c0                	xor    eax,eax
10002052:	a3 40 3a 0e 10       	mov    ds:0x100e3a40,eax
10002057:	a3 38 3a 0e 10       	mov    ds:0x100e3a38,eax
1000205c:	c3                   	ret
1000205d:	90                   	nop
1000205e:	90                   	nop
1000205f:	90                   	nop
10002060:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10002064:	85 c9                	test   ecx,ecx
10002066:	7e 20                	jle    0x10002088
10002068:	56                   	push   esi
10002069:	57                   	push   edi
1000206a:	33 c0                	xor    eax,eax
1000206c:	bf 30 0a 0e 10       	mov    edi,0x100e0a30
10002071:	8b f1                	mov    esi,ecx
10002073:	ba 30 1a 0e 10       	mov    edx,0x100e1a30
10002078:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1000207a:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
10002080:	83 c2 08             	add    edx,0x8
10002083:	4e                   	dec    esi
10002084:	75 f4                	jne    0x1000207a
10002086:	5f                   	pop    edi
10002087:	5e                   	pop    esi
10002088:	e9 c3 ff ff ff       	jmp    0x10002050
1000208d:	90                   	nop
1000208e:	90                   	nop
1000208f:	90                   	nop
10002090:	e9 6b f0 ff ff       	jmp    0x10001100
10002095:	90                   	nop
10002096:	90                   	nop
10002097:	90                   	nop
10002098:	90                   	nop
10002099:	90                   	nop
1000209a:	90                   	nop
1000209b:	90                   	nop
1000209c:	90                   	nop
1000209d:	90                   	nop
1000209e:	90                   	nop
1000209f:	90                   	nop
100020a0:	a1 c4 55 1f 10       	mov    eax,ds:0x101f55c4
100020a5:	83 ec 08             	sub    esp,0x8
100020a8:	83 f8 02             	cmp    eax,0x2
100020ab:	53                   	push   ebx
100020ac:	56                   	push   esi
100020ad:	7c 64                	jl     0x10002113
100020af:	6a 00                	push   0x0
100020b1:	c7 05 a0 55 1f 10 00 	mov    DWORD PTR ds:0x101f55a0,0x0
100020b8:	00 00 00 
100020bb:	c7 05 a4 55 1f 10 01 	mov    DWORD PTR ds:0x101f55a4,0x1
100020c2:	00 00 00 
100020c5:	e8 3a 1c 00 00       	call   0x10003d04
100020ca:	50                   	push   eax
100020cb:	6a 00                	push   0x0
100020cd:	e8 2c 1c 00 00       	call   0x10003cfe
100020d2:	50                   	push   eax
100020d3:	6a 00                	push   0x0
100020d5:	e8 76 fe ff ff       	call   0x10001f50
100020da:	83 c4 0c             	add    esp,0xc
100020dd:	a3 28 55 1f 10       	mov    ds:0x101f5528,eax
100020e2:	85 c0                	test   eax,eax
100020e4:	0f 84 d7 00 00 00    	je     0x100021c1
100020ea:	6a 01                	push   0x1
100020ec:	e8 13 1c 00 00       	call   0x10003d04
100020f1:	50                   	push   eax
100020f2:	6a 01                	push   0x1
100020f4:	e8 05 1c 00 00       	call   0x10003cfe
100020f9:	50                   	push   eax
100020fa:	6a 01                	push   0x1
100020fc:	e8 4f fe ff ff       	call   0x10001f50
10002101:	83 c4 0c             	add    esp,0xc
10002104:	a3 2c 55 1f 10       	mov    ds:0x101f552c,eax
10002109:	85 c0                	test   eax,eax
1000210b:	0f 84 b0 00 00 00    	je     0x100021c1
10002111:	eb 74                	jmp    0x10002187
10002113:	57                   	push   edi
10002114:	6a 00                	push   0x0
10002116:	c7 05 a0 55 1f 10 00 	mov    DWORD PTR ds:0x101f55a0,0x0
1000211d:	00 00 00 
10002120:	c7 05 a4 55 1f 10 00 	mov    DWORD PTR ds:0x101f55a4,0x0
10002127:	00 00 00 
1000212a:	e8 cf 1b 00 00       	call   0x10003cfe
1000212f:	6a 00                	push   0x0
10002131:	8b f8                	mov    edi,eax
10002133:	e8 cc 1b 00 00       	call   0x10003d04
10002138:	8b d8                	mov    ebx,eax
1000213a:	2b c7                	sub    eax,edi
1000213c:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
10002140:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
10002147:	00 
10002148:	df 6c 24 0c          	fild   QWORD PTR [esp+0xc]
1000214c:	d8 0d b8 c1 00 10    	fmul   DWORD PTR ds:0x1000c1b8
10002152:	e8 a5 20 00 00       	call   0x100041fc
10002157:	8b f7                	mov    esi,edi
10002159:	2b f0                	sub    esi,eax
1000215b:	56                   	push   esi
1000215c:	57                   	push   edi
1000215d:	6a 00                	push   0x0
1000215f:	e8 ec fd ff ff       	call   0x10001f50
10002164:	83 c4 0c             	add    esp,0xc
10002167:	a3 28 55 1f 10       	mov    ds:0x101f5528,eax
1000216c:	85 c0                	test   eax,eax
1000216e:	5f                   	pop    edi
1000216f:	74 50                	je     0x100021c1
10002171:	46                   	inc    esi
10002172:	53                   	push   ebx
10002173:	56                   	push   esi
10002174:	6a 00                	push   0x0
10002176:	e8 d5 fd ff ff       	call   0x10001f50
1000217b:	83 c4 0c             	add    esp,0xc
1000217e:	a3 2c 55 1f 10       	mov    ds:0x101f552c,eax
10002183:	85 c0                	test   eax,eax
10002185:	74 3a                	je     0x100021c1
10002187:	8b 0d 28 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f5528
1000218d:	51                   	push   ecx
1000218e:	68 cc e4 00 10       	push   0x1000e4cc
10002193:	e8 78 ef ff ff       	call   0x10001110
10002198:	83 c4 08             	add    esp,0x8
1000219b:	a3 24 55 1f 10       	mov    ds:0x101f5524,eax
100021a0:	85 c0                	test   eax,eax
100021a2:	74 1d                	je     0x100021c1
100021a4:	8b 15 2c 55 1f 10    	mov    edx,DWORD PTR ds:0x101f552c
100021aa:	52                   	push   edx
100021ab:	68 bc e4 00 10       	push   0x1000e4bc
100021b0:	e8 5b ef ff ff       	call   0x10001110
100021b5:	83 c4 08             	add    esp,0x8
100021b8:	a3 34 55 1f 10       	mov    ds:0x101f5534,eax
100021bd:	85 c0                	test   eax,eax
100021bf:	75 12                	jne    0x100021d3
100021c1:	e8 1a 01 00 00       	call   0x100022e0
100021c6:	e8 35 00 00 00       	call   0x10002200
100021cb:	5e                   	pop    esi
100021cc:	33 c0                	xor    eax,eax
100021ce:	5b                   	pop    ebx
100021cf:	83 c4 08             	add    esp,0x8
100021d2:	c3                   	ret
100021d3:	5e                   	pop    esi
100021d4:	b8 01 00 00 00       	mov    eax,0x1
100021d9:	5b                   	pop    ebx
100021da:	83 c4 08             	add    esp,0x8
100021dd:	c3                   	ret
100021de:	90                   	nop
100021df:	90                   	nop
100021e0:	e8 fb 00 00 00       	call   0x100022e0
100021e5:	e8 16 00 00 00       	call   0x10002200
100021ea:	33 c0                	xor    eax,eax
100021ec:	a3 20 55 1f 10       	mov    ds:0x101f5520,eax
100021f1:	a3 30 55 1f 10       	mov    ds:0x101f5530,eax
100021f6:	c3                   	ret
100021f7:	90                   	nop
100021f8:	90                   	nop
100021f9:	90                   	nop
100021fa:	90                   	nop
100021fb:	90                   	nop
100021fc:	90                   	nop
100021fd:	90                   	nop
100021fe:	90                   	nop
100021ff:	90                   	nop
10002200:	a1 34 55 1f 10       	mov    eax,ds:0x101f5534
10002205:	56                   	push   esi
10002206:	33 f6                	xor    esi,esi
10002208:	3b c6                	cmp    eax,esi
1000220a:	74 09                	je     0x10002215
1000220c:	50                   	push   eax
1000220d:	e8 7e fd ff ff       	call   0x10001f90
10002212:	83 c4 04             	add    esp,0x4
10002215:	a1 24 55 1f 10       	mov    eax,ds:0x101f5524
1000221a:	3b c6                	cmp    eax,esi
1000221c:	74 09                	je     0x10002227
1000221e:	50                   	push   eax
1000221f:	e8 6c fd ff ff       	call   0x10001f90
10002224:	83 c4 04             	add    esp,0x4
10002227:	a1 2c 55 1f 10       	mov    eax,ds:0x101f552c
1000222c:	89 35 24 55 1f 10    	mov    DWORD PTR ds:0x101f5524,esi
10002232:	3b c6                	cmp    eax,esi
10002234:	89 35 34 55 1f 10    	mov    DWORD PTR ds:0x101f5534,esi
1000223a:	74 09                	je     0x10002245
1000223c:	50                   	push   eax
1000223d:	e8 4e fd ff ff       	call   0x10001f90
10002242:	83 c4 04             	add    esp,0x4
10002245:	a1 28 55 1f 10       	mov    eax,ds:0x101f5528
1000224a:	3b c6                	cmp    eax,esi
1000224c:	74 09                	je     0x10002257
1000224e:	50                   	push   eax
1000224f:	e8 3c fd ff ff       	call   0x10001f90
10002254:	83 c4 04             	add    esp,0x4
10002257:	89 35 28 55 1f 10    	mov    DWORD PTR ds:0x101f5528,esi
1000225d:	89 35 2c 55 1f 10    	mov    DWORD PTR ds:0x101f552c,esi
10002263:	5e                   	pop    esi
10002264:	c3                   	ret
10002265:	90                   	nop
10002266:	90                   	nop
10002267:	90                   	nop
10002268:	90                   	nop
10002269:	90                   	nop
1000226a:	90                   	nop
1000226b:	90                   	nop
1000226c:	90                   	nop
1000226d:	90                   	nop
1000226e:	90                   	nop
1000226f:	90                   	nop
10002270:	ba 20 3e 0e 10       	mov    edx,0x100e3e20
10002275:	33 c0                	xor    eax,eax
10002277:	80 3a 00             	cmp    BYTE PTR [edx],0x0
1000227a:	74 0e                	je     0x1000228a
1000227c:	40                   	inc    eax
1000227d:	83 c2 38             	add    edx,0x38
10002280:	3d 20 4e 00 00       	cmp    eax,0x4e20
10002285:	7c f0                	jl     0x10002277
10002287:	33 c0                	xor    eax,eax
10002289:	c3                   	ret
1000228a:	57                   	push   edi
1000228b:	b9 0e 00 00 00       	mov    ecx,0xe
10002290:	33 c0                	xor    eax,eax
10002292:	8b fa                	mov    edi,edx
10002294:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10002296:	c6 02 01             	mov    BYTE PTR [edx],0x1
10002299:	8b c2                	mov    eax,edx
1000229b:	5f                   	pop    edi
1000229c:	c3                   	ret
1000229d:	90                   	nop
1000229e:	90                   	nop
1000229f:	90                   	nop
100022a0:	57                   	push   edi
100022a1:	8b 7c 24 08          	mov    edi,DWORD PTR [esp+0x8]
100022a5:	8b 47 28             	mov    eax,DWORD PTR [edi+0x28]
100022a8:	85 c0                	test   eax,eax
100022aa:	74 09                	je     0x100022b5
100022ac:	50                   	push   eax
100022ad:	e8 9a 1c 00 00       	call   0x10003f4c
100022b2:	83 c4 04             	add    esp,0x4
100022b5:	8b 47 2c             	mov    eax,DWORD PTR [edi+0x2c]
100022b8:	85 c0                	test   eax,eax
100022ba:	74 13                	je     0x100022cf
100022bc:	50                   	push   eax
100022bd:	e8 2e f0 ff ff       	call   0x100012f0
100022c2:	83 c4 04             	add    esp,0x4
100022c5:	c7 05 20 55 1f 10 01 	mov    DWORD PTR ds:0x101f5520,0x1
100022cc:	00 00 00 
100022cf:	b9 0e 00 00 00       	mov    ecx,0xe
100022d4:	33 c0                	xor    eax,eax
100022d6:	f3 ab                	rep stos DWORD PTR es:[edi],eax
100022d8:	5f                   	pop    edi
100022d9:	c3                   	ret
100022da:	90                   	nop
100022db:	90                   	nop
100022dc:	90                   	nop
100022dd:	90                   	nop
100022de:	90                   	nop
100022df:	90                   	nop
100022e0:	56                   	push   esi
100022e1:	57                   	push   edi
100022e2:	be 20 3e 0e 10       	mov    esi,0x100e3e20
100022e7:	bf 20 4e 00 00       	mov    edi,0x4e20
100022ec:	80 3e 00             	cmp    BYTE PTR [esi],0x0
100022ef:	74 09                	je     0x100022fa
100022f1:	56                   	push   esi
100022f2:	e8 a9 ff ff ff       	call   0x100022a0
100022f7:	83 c4 04             	add    esp,0x4
100022fa:	83 c6 38             	add    esi,0x38
100022fd:	4f                   	dec    edi
100022fe:	75 ec                	jne    0x100022ec
10002300:	5f                   	pop    edi
10002301:	5e                   	pop    esi
10002302:	c3                   	ret
10002303:	90                   	nop
10002304:	90                   	nop
10002305:	90                   	nop
10002306:	90                   	nop
10002307:	90                   	nop
10002308:	90                   	nop
10002309:	90                   	nop
1000230a:	90                   	nop
1000230b:	90                   	nop
1000230c:	90                   	nop
1000230d:	90                   	nop
1000230e:	90                   	nop
1000230f:	90                   	nop
10002310:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002314:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10002318:	3b c1                	cmp    eax,ecx
1000231a:	7f 02                	jg     0x1000231e
1000231c:	8b c1                	mov    eax,ecx
1000231e:	56                   	push   esi
1000231f:	50                   	push   eax
10002320:	e8 db 07 00 00       	call   0x10002b00
10002325:	8b f0                	mov    esi,eax
10002327:	8d 44 24 10          	lea    eax,[esp+0x10]
1000232b:	50                   	push   eax
1000232c:	56                   	push   esi
1000232d:	e8 ce 06 00 00       	call   0x10002a00
10002332:	83 c4 0c             	add    esp,0xc
10002335:	85 c0                	test   eax,eax
10002337:	75 02                	jne    0x1000233b
10002339:	5e                   	pop    esi
1000233a:	c3                   	ret
1000233b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
1000233f:	8d 4c 24 10          	lea    ecx,[esp+0x10]
10002343:	51                   	push   ecx
10002344:	8b c6                	mov    eax,esi
10002346:	8d 4a ff             	lea    ecx,[edx-0x1]
10002349:	d3 f8                	sar    eax,cl
1000234b:	50                   	push   eax
1000234c:	e8 af 06 00 00       	call   0x10002a00
10002351:	83 c4 08             	add    esp,0x8
10002354:	85 c0                	test   eax,eax
10002356:	75 02                	jne    0x1000235a
10002358:	5e                   	pop    esi
10002359:	c3                   	ret
1000235a:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1000235e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002362:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10002366:	89 31                	mov    DWORD PTR [ecx],esi
10002368:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1000236c:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
1000236f:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
10002373:	89 08                	mov    DWORD PTR [eax],ecx
10002375:	c7 40 08 03 00 00 00 	mov    DWORD PTR [eax+0x8],0x3
1000237c:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
1000237f:	b8 01 00 00 00       	mov    eax,0x1
10002384:	5e                   	pop    esi
10002385:	c3                   	ret
10002386:	90                   	nop
10002387:	90                   	nop
10002388:	90                   	nop
10002389:	90                   	nop
1000238a:	90                   	nop
1000238b:	90                   	nop
1000238c:	90                   	nop
1000238d:	90                   	nop
1000238e:	90                   	nop
1000238f:	90                   	nop
10002390:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10002394:	48                   	dec    eax
10002395:	83 f8 07             	cmp    eax,0x7
10002398:	77 47                	ja     0x100023e1
1000239a:	ff 24 85 f0 23 00 10 	jmp    DWORD PTR [eax*4+0x100023f0]
100023a1:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100023a5:	b8 01 00 00 00       	mov    eax,0x1
100023aa:	c7 01 0a 00 00 00    	mov    DWORD PTR [ecx],0xa
100023b0:	c3                   	ret
100023b1:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
100023b5:	b8 01 00 00 00       	mov    eax,0x1
100023ba:	c7 02 0c 00 00 00    	mov    DWORD PTR [edx],0xc
100023c0:	c3                   	ret
100023c1:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100023c5:	c7 00 0b 00 00 00    	mov    DWORD PTR [eax],0xb
100023cb:	b8 01 00 00 00       	mov    eax,0x1
100023d0:	c3                   	ret
100023d1:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100023d5:	b8 01 00 00 00       	mov    eax,0x1
100023da:	c7 01 05 00 00 00    	mov    DWORD PTR [ecx],0x5
100023e0:	c3                   	ret
100023e1:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
100023e5:	33 c0                	xor    eax,eax
100023e7:	c7 02 01 00 00 00    	mov    DWORD PTR [edx],0x1
100023ed:	c3                   	ret
100023ee:	8b ff                	mov    edi,edi
100023f0:	d1 23                	shl    DWORD PTR [ebx],1
100023f2:	00 10                	add    BYTE PTR [eax],dl
100023f4:	e1 23                	loope  0x10002419
100023f6:	00 10                	add    BYTE PTR [eax],dl
100023f8:	e1 23                	loope  0x1000241d
100023fa:	00 10                	add    BYTE PTR [eax],dl
100023fc:	e1 23                	loope  0x10002421
100023fe:	00 10                	add    BYTE PTR [eax],dl
10002400:	a1 23 00 10 e1       	mov    eax,ds:0xe1100023
10002405:	23 00                	and    eax,DWORD PTR [eax]
10002407:	10 b1 23 00 10 c1    	adc    BYTE PTR [ecx-0x3eefffdd],dh
1000240d:	23 00                	and    eax,DWORD PTR [eax]
1000240f:	10 83 ec 18 53 55    	adc    BYTE PTR [ebx+0x555318ec],al
10002415:	56                   	push   esi
10002416:	57                   	push   edi
10002417:	e8 54 fe ff ff       	call   0x10002270
1000241c:	8b f0                	mov    esi,eax
1000241e:	85 f6                	test   esi,esi
10002420:	75 19                	jne    0x1000243b
10002422:	68 fc e5 00 10       	push   0x1000e5fc
10002427:	6a 07                	push   0x7
10002429:	e8 f2 f4 ff ff       	call   0x10001920
1000242e:	83 c4 08             	add    esp,0x8
10002431:	33 c0                	xor    eax,eax
10002433:	5f                   	pop    edi
10002434:	5e                   	pop    esi
10002435:	5d                   	pop    ebp
10002436:	5b                   	pop    ebx
10002437:	83 c4 18             	add    esp,0x18
1000243a:	c3                   	ret
1000243b:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
1000243f:	81 ff 00 01 00 00    	cmp    edi,0x100
10002445:	7e 19                	jle    0x10002460
10002447:	68 d8 e5 00 10       	push   0x1000e5d8
1000244c:	6a 07                	push   0x7
1000244e:	e8 cd f4 ff ff       	call   0x10001920
10002453:	83 c4 08             	add    esp,0x8
10002456:	33 c0                	xor    eax,eax
10002458:	5f                   	pop    edi
10002459:	5e                   	pop    esi
1000245a:	5d                   	pop    ebp
1000245b:	5b                   	pop    ebx
1000245c:	83 c4 18             	add    esp,0x18
1000245f:	c3                   	ret
10002460:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
10002464:	81 fd 00 01 00 00    	cmp    ebp,0x100
1000246a:	7e 19                	jle    0x10002485
1000246c:	68 b0 e5 00 10       	push   0x1000e5b0
10002471:	6a 07                	push   0x7
10002473:	e8 a8 f4 ff ff       	call   0x10001920
10002478:	83 c4 08             	add    esp,0x8
1000247b:	33 c0                	xor    eax,eax
1000247d:	5f                   	pop    edi
1000247e:	5e                   	pop    esi
1000247f:	5d                   	pop    ebp
10002480:	5b                   	pop    ebx
10002481:	83 c4 18             	add    esp,0x18
10002484:	c3                   	ret
10002485:	57                   	push   edi
10002486:	e8 75 06 00 00       	call   0x10002b00
1000248b:	55                   	push   ebp
1000248c:	8b d8                	mov    ebx,eax
1000248e:	e8 6d 06 00 00       	call   0x10002b00
10002493:	83 c4 08             	add    esp,0x8
10002496:	3b fb                	cmp    edi,ebx
10002498:	74 19                	je     0x100024b3
1000249a:	68 84 e5 00 10       	push   0x1000e584
1000249f:	6a 07                	push   0x7
100024a1:	e8 7a f4 ff ff       	call   0x10001920
100024a6:	83 c4 08             	add    esp,0x8
100024a9:	33 c0                	xor    eax,eax
100024ab:	5f                   	pop    edi
100024ac:	5e                   	pop    esi
100024ad:	5d                   	pop    ebp
100024ae:	5b                   	pop    ebx
100024af:	83 c4 18             	add    esp,0x18
100024b2:	c3                   	ret
100024b3:	3b e8                	cmp    ebp,eax
100024b5:	74 19                	je     0x100024d0
100024b7:	68 84 e5 00 10       	push   0x1000e584
100024bc:	6a 07                	push   0x7
100024be:	e8 5d f4 ff ff       	call   0x10001920
100024c3:	83 c4 08             	add    esp,0x8
100024c6:	33 c0                	xor    eax,eax
100024c8:	5f                   	pop    edi
100024c9:	5e                   	pop    esi
100024ca:	5d                   	pop    ebp
100024cb:	5b                   	pop    ebx
100024cc:	83 c4 18             	add    esp,0x18
100024cf:	c3                   	ret
100024d0:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
100024d4:	8d 44 24 10          	lea    eax,[esp+0x10]
100024d8:	50                   	push   eax
100024d9:	8b 11                	mov    edx,DWORD PTR [ecx]
100024db:	52                   	push   edx
100024dc:	e8 af fe ff ff       	call   0x10002390
100024e1:	83 c4 08             	add    esp,0x8
100024e4:	85 c0                	test   eax,eax
100024e6:	75 19                	jne    0x10002501
100024e8:	68 40 e5 00 10       	push   0x1000e540
100024ed:	6a 07                	push   0x7
100024ef:	e8 2c f4 ff ff       	call   0x10001920
100024f4:	83 c4 08             	add    esp,0x8
100024f7:	33 c0                	xor    eax,eax
100024f9:	5f                   	pop    edi
100024fa:	5e                   	pop    esi
100024fb:	5d                   	pop    ebp
100024fc:	5b                   	pop    ebx
100024fd:	83 c4 18             	add    esp,0x18
10002500:	c3                   	ret
10002501:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10002505:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
10002509:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1000250d:	8d 7e 10             	lea    edi,[esi+0x10]
10002510:	57                   	push   edi
10002511:	50                   	push   eax
10002512:	53                   	push   ebx
10002513:	55                   	push   ebp
10002514:	8d 54 24 24          	lea    edx,[esp+0x24]
10002518:	51                   	push   ecx
10002519:	52                   	push   edx
1000251a:	e8 f1 fd ff ff       	call   0x10002310
1000251f:	83 c4 18             	add    esp,0x18
10002522:	85 c0                	test   eax,eax
10002524:	75 19                	jne    0x1000253f
10002526:	68 10 e5 00 10       	push   0x1000e510
1000252b:	6a 07                	push   0x7
1000252d:	e8 ee f3 ff ff       	call   0x10001920
10002532:	83 c4 08             	add    esp,0x8
10002535:	33 c0                	xor    eax,eax
10002537:	5f                   	pop    edi
10002538:	5e                   	pop    esi
10002539:	5d                   	pop    ebp
1000253a:	5b                   	pop    ebx
1000253b:	83 c4 18             	add    esp,0x18
1000253e:	c3                   	ret
1000253f:	8b 07                	mov    eax,DWORD PTR [edi]
10002541:	50                   	push   eax
10002542:	e8 99 05 00 00       	call   0x10002ae0
10002547:	83 c4 04             	add    esp,0x4
1000254a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1000254e:	88 46 1c             	mov    BYTE PTR [esi+0x1c],al
10002551:	51                   	push   ecx
10002552:	6a 03                	push   0x3
10002554:	e8 f7 16 00 00       	call   0x10003c50
10002559:	50                   	push   eax
1000255a:	e8 d6 1a 00 00       	call   0x10004035
1000255f:	83 c4 04             	add    esp,0x4
10002562:	85 c0                	test   eax,eax
10002564:	75 19                	jne    0x1000257f
10002566:	68 dc e4 00 10       	push   0x1000e4dc
1000256b:	6a 07                	push   0x7
1000256d:	e8 ae f3 ff ff       	call   0x10001920
10002572:	83 c4 08             	add    esp,0x8
10002575:	33 c0                	xor    eax,eax
10002577:	5f                   	pop    edi
10002578:	5e                   	pop    esi
10002579:	5d                   	pop    ebp
1000257a:	5b                   	pop    ebx
1000257b:	83 c4 18             	add    esp,0x18
1000257e:	c3                   	ret
1000257f:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
10002583:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
10002587:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
1000258a:	8b 07                	mov    eax,DWORD PTR [edi]
1000258c:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10002590:	8d 4c 24 14          	lea    ecx,[esp+0x14]
10002594:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
10002598:	51                   	push   ecx
10002599:	c6 06 01             	mov    BYTE PTR [esi],0x1
1000259c:	88 5e 14             	mov    BYTE PTR [esi+0x14],bl
1000259f:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
100025a2:	d8 3d bc c1 00 10    	fdivr  DWORD PTR ds:0x1000c1bc
100025a8:	89 6e 0c             	mov    DWORD PTR [esi+0xc],ebp
100025ab:	53                   	push   ebx
100025ac:	50                   	push   eax
100025ad:	50                   	push   eax
100025ae:	d9 5e 18             	fstp   DWORD PTR [esi+0x18]
100025b1:	8b 15 24 55 1f 10    	mov    edx,DWORD PTR ds:0x101f5524
100025b7:	52                   	push   edx
100025b8:	e8 f3 ec ff ff       	call   0x100012b0
100025bd:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
100025c0:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
100025c4:	83 c4 14             	add    esp,0x14
100025c7:	8b 08                	mov    ecx,DWORD PTR [eax]
100025c9:	89 4e 20             	mov    DWORD PTR [esi+0x20],ecx
100025cc:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
100025cf:	89 56 24             	mov    DWORD PTR [esi+0x24],edx
100025d2:	8b c6                	mov    eax,esi
100025d4:	5f                   	pop    edi
100025d5:	5e                   	pop    esi
100025d6:	5d                   	pop    ebp
100025d7:	c7 05 20 55 1f 10 01 	mov    DWORD PTR ds:0x101f5520,0x1
100025de:	00 00 00 
100025e1:	5b                   	pop    ebx
100025e2:	83 c4 18             	add    esp,0x18
100025e5:	c3                   	ret
100025e6:	90                   	nop
100025e7:	90                   	nop
100025e8:	90                   	nop
100025e9:	90                   	nop
100025ea:	90                   	nop
100025eb:	90                   	nop
100025ec:	90                   	nop
100025ed:	90                   	nop
100025ee:	90                   	nop
100025ef:	90                   	nop
100025f0:	83 ec 14             	sub    esp,0x14
100025f3:	56                   	push   esi
100025f4:	57                   	push   edi
100025f5:	e8 76 fc ff ff       	call   0x10002270
100025fa:	8b f0                	mov    esi,eax
100025fc:	85 f6                	test   esi,esi
100025fe:	75 17                	jne    0x10002617
10002600:	68 ac e6 00 10       	push   0x1000e6ac
10002605:	6a 07                	push   0x7
10002607:	e8 14 f3 ff ff       	call   0x10001920
1000260c:	83 c4 08             	add    esp,0x8
1000260f:	33 c0                	xor    eax,eax
10002611:	5f                   	pop    edi
10002612:	5e                   	pop    esi
10002613:	83 c4 14             	add    esp,0x14
10002616:	c3                   	ret
10002617:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1000261b:	f6 40 04 04          	test   BYTE PTR [eax+0x4],0x4
1000261f:	75 17                	jne    0x10002638
10002621:	68 78 e6 00 10       	push   0x1000e678
10002626:	6a 07                	push   0x7
10002628:	e8 f3 f2 ff ff       	call   0x10001920
1000262d:	83 c4 08             	add    esp,0x8
10002630:	33 c0                	xor    eax,eax
10002632:	5f                   	pop    edi
10002633:	5e                   	pop    esi
10002634:	83 c4 14             	add    esp,0x14
10002637:	c3                   	ret
10002638:	83 38 05             	cmp    DWORD PTR [eax],0x5
1000263b:	74 17                	je     0x10002654
1000263d:	68 2c e6 00 10       	push   0x1000e62c
10002642:	6a 07                	push   0x7
10002644:	e8 d7 f2 ff ff       	call   0x10001920
10002649:	83 c4 08             	add    esp,0x8
1000264c:	33 c0                	xor    eax,eax
1000264e:	5f                   	pop    edi
1000264f:	5e                   	pop    esi
10002650:	83 c4 14             	add    esp,0x14
10002653:	c3                   	ret
10002654:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
10002658:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1000265c:	8d 7e 10             	lea    edi,[esi+0x10]
1000265f:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
10002662:	57                   	push   edi
10002663:	6a 0a                	push   0xa
10002665:	6a 01                	push   0x1
10002667:	51                   	push   ecx
10002668:	50                   	push   eax
10002669:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1000266d:	50                   	push   eax
1000266e:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
10002671:	e8 9a fc ff ff       	call   0x10002310
10002676:	83 c4 18             	add    esp,0x18
10002679:	85 c0                	test   eax,eax
1000267b:	75 06                	jne    0x10002683
1000267d:	5f                   	pop    edi
1000267e:	5e                   	pop    esi
1000267f:	83 c4 14             	add    esp,0x14
10002682:	c3                   	ret
10002683:	8b 0f                	mov    ecx,DWORD PTR [edi]
10002685:	51                   	push   ecx
10002686:	e8 55 04 00 00       	call   0x10002ae0
1000268b:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1000268f:	8d 54 24 0c          	lea    edx,[esp+0xc]
10002693:	88 46 1c             	mov    BYTE PTR [esi+0x1c],al
10002696:	8b 07                	mov    eax,DWORD PTR [edi]
10002698:	52                   	push   edx
10002699:	8b 15 34 55 1f 10    	mov    edx,DWORD PTR ds:0x101f5534
1000269f:	51                   	push   ecx
100026a0:	50                   	push   eax
100026a1:	50                   	push   eax
100026a2:	52                   	push   edx
100026a3:	e8 08 ec ff ff       	call   0x100012b0
100026a8:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
100026ab:	8b 07                	mov    eax,DWORD PTR [edi]
100026ad:	83 c4 18             	add    esp,0x18
100026b0:	c1 e0 04             	shl    eax,0x4
100026b3:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
100026b7:	8b c6                	mov    eax,esi
100026b9:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
100026bd:	5f                   	pop    edi
100026be:	d8 3d bc c1 00 10    	fdivr  DWORD PTR ds:0x1000c1bc
100026c4:	d9 5e 18             	fstp   DWORD PTR [esi+0x18]
100026c7:	c7 05 20 55 1f 10 01 	mov    DWORD PTR ds:0x101f5520,0x1
100026ce:	00 00 00 
100026d1:	5e                   	pop    esi
100026d2:	83 c4 14             	add    esp,0x14
100026d5:	c3                   	ret
100026d6:	90                   	nop
100026d7:	90                   	nop
100026d8:	90                   	nop
100026d9:	90                   	nop
100026da:	90                   	nop
100026db:	90                   	nop
100026dc:	90                   	nop
100026dd:	90                   	nop
100026de:	90                   	nop
100026df:	90                   	nop
100026e0:	56                   	push   esi
100026e1:	e8 8a fb ff ff       	call   0x10002270
100026e6:	8b f0                	mov    esi,eax
100026e8:	85 f6                	test   esi,esi
100026ea:	75 13                	jne    0x100026ff
100026ec:	68 e0 e6 00 10       	push   0x1000e6e0
100026f1:	6a 07                	push   0x7
100026f3:	e8 28 f2 ff ff       	call   0x10001920
100026f8:	83 c4 08             	add    esp,0x8
100026fb:	33 c0                	xor    eax,eax
100026fd:	5e                   	pop    esi
100026fe:	c3                   	ret
100026ff:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002703:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10002707:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000270a:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
1000270d:	0f af c1             	imul   eax,ecx
10002710:	8a 54 24 10          	mov    dl,BYTE PTR [esp+0x10]
10002714:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
10002717:	d1 e0                	shl    eax,1
10002719:	50                   	push   eax
1000271a:	88 56 14             	mov    BYTE PTR [esi+0x14],dl
1000271d:	e8 13 19 00 00       	call   0x10004035
10002722:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
10002725:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10002729:	83 c4 04             	add    esp,0x4
1000272c:	8b 08                	mov    ecx,DWORD PTR [eax]
1000272e:	89 4e 20             	mov    DWORD PTR [esi+0x20],ecx
10002731:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
10002734:	89 56 24             	mov    DWORD PTR [esi+0x24],edx
10002737:	8b c6                	mov    eax,esi
10002739:	5e                   	pop    esi
1000273a:	c3                   	ret
1000273b:	90                   	nop
1000273c:	90                   	nop
1000273d:	90                   	nop
1000273e:	90                   	nop
1000273f:	90                   	nop
10002740:	56                   	push   esi
10002741:	57                   	push   edi
10002742:	e8 29 fb ff ff       	call   0x10002270
10002747:	8b f0                	mov    esi,eax
10002749:	85 f6                	test   esi,esi
1000274b:	75 14                	jne    0x10002761
1000274d:	68 3c e7 00 10       	push   0x1000e73c
10002752:	6a 07                	push   0x7
10002754:	e8 c7 f1 ff ff       	call   0x10001920
10002759:	83 c4 08             	add    esp,0x8
1000275c:	33 c0                	xor    eax,eax
1000275e:	5f                   	pop    edi
1000275f:	5e                   	pop    esi
10002760:	c3                   	ret
10002761:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
10002765:	83 3f 0d             	cmp    DWORD PTR [edi],0xd
10002768:	74 14                	je     0x1000277e
1000276a:	68 0c e7 00 10       	push   0x1000e70c
1000276f:	6a 07                	push   0x7
10002771:	e8 aa f1 ff ff       	call   0x10001920
10002776:	83 c4 08             	add    esp,0x8
10002779:	33 c0                	xor    eax,eax
1000277b:	5f                   	pop    edi
1000277c:	5e                   	pop    esi
1000277d:	c3                   	ret
1000277e:	68 00 04 00 00       	push   0x400
10002783:	e8 ad 18 00 00       	call   0x10004035
10002788:	83 c4 04             	add    esp,0x4
1000278b:	85 c0                	test   eax,eax
1000278d:	75 14                	jne    0x100027a3
1000278f:	68 dc e4 00 10       	push   0x1000e4dc
10002794:	6a 07                	push   0x7
10002796:	e8 85 f1 ff ff       	call   0x10001920
1000279b:	83 c4 08             	add    esp,0x8
1000279e:	33 c0                	xor    eax,eax
100027a0:	5f                   	pop    edi
100027a1:	5e                   	pop    esi
100027a2:	c3                   	ret
100027a3:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100027a7:	89 46 28             	mov    DWORD PTR [esi+0x28],eax
100027aa:	8a 44 24 14          	mov    al,BYTE PTR [esp+0x14]
100027ae:	c6 06 01             	mov    BYTE PTR [esi],0x1
100027b1:	88 46 14             	mov    BYTE PTR [esi+0x14],al
100027b4:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100027b8:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
100027bb:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
100027be:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
100027c1:	8b 17                	mov    edx,DWORD PTR [edi]
100027c3:	89 56 20             	mov    DWORD PTR [esi+0x20],edx
100027c6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100027c9:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
100027cc:	8b c6                	mov    eax,esi
100027ce:	5f                   	pop    edi
100027cf:	5e                   	pop    esi
100027d0:	c3                   	ret
100027d1:	90                   	nop
100027d2:	90                   	nop
100027d3:	90                   	nop
100027d4:	90                   	nop
100027d5:	90                   	nop
100027d6:	90                   	nop
100027d7:	90                   	nop
100027d8:	90                   	nop
100027d9:	90                   	nop
100027da:	90                   	nop
100027db:	90                   	nop
100027dc:	90                   	nop
100027dd:	90                   	nop
100027de:	90                   	nop
100027df:	90                   	nop
100027e0:	56                   	push   esi
100027e1:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
100027e5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100027e8:	a8 01                	test   al,0x1
100027ea:	74 14                	je     0x10002800
100027ec:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100027f0:	56                   	push   esi
100027f1:	50                   	push   eax
100027f2:	52                   	push   edx
100027f3:	51                   	push   ecx
100027f4:	e8 e7 fe ff ff       	call   0x100026e0
100027f9:	83 c4 10             	add    esp,0x10
100027fc:	5e                   	pop    esi
100027fd:	c2 08 00             	ret    0x8
10002800:	a8 02                	test   al,0x2
10002802:	74 14                	je     0x10002818
10002804:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002808:	56                   	push   esi
10002809:	50                   	push   eax
1000280a:	52                   	push   edx
1000280b:	51                   	push   ecx
1000280c:	e8 ff fb ff ff       	call   0x10002410
10002811:	83 c4 10             	add    esp,0x10
10002814:	5e                   	pop    esi
10002815:	c2 08 00             	ret    0x8
10002818:	a8 04                	test   al,0x4
1000281a:	74 14                	je     0x10002830
1000281c:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002820:	56                   	push   esi
10002821:	50                   	push   eax
10002822:	52                   	push   edx
10002823:	51                   	push   ecx
10002824:	e8 c7 fd ff ff       	call   0x100025f0
10002829:	83 c4 10             	add    esp,0x10
1000282c:	5e                   	pop    esi
1000282d:	c2 08 00             	ret    0x8
10002830:	a8 08                	test   al,0x8
10002832:	74 14                	je     0x10002848
10002834:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002838:	56                   	push   esi
10002839:	50                   	push   eax
1000283a:	52                   	push   edx
1000283b:	51                   	push   ecx
1000283c:	e8 ff fe ff ff       	call   0x10002740
10002841:	83 c4 10             	add    esp,0x10
10002844:	5e                   	pop    esi
10002845:	c2 08 00             	ret    0x8
10002848:	68 6c e7 00 10       	push   0x1000e76c
1000284d:	6a 07                	push   0x7
1000284f:	e8 cc f0 ff ff       	call   0x10001920
10002854:	83 c4 08             	add    esp,0x8
10002857:	33 c0                	xor    eax,eax
10002859:	5e                   	pop    esi
1000285a:	c2 08 00             	ret    0x8
1000285d:	90                   	nop
1000285e:	90                   	nop
1000285f:	90                   	nop
10002860:	51                   	push   ecx
10002861:	e8 3a fa ff ff       	call   0x100022a0
10002866:	83 c4 04             	add    esp,0x4
10002869:	b8 01 00 00 00       	mov    eax,0x1
1000286e:	c3                   	ret
1000286f:	90                   	nop
10002870:	f6 41 24 04          	test   BYTE PTR [ecx+0x24],0x4
10002874:	74 14                	je     0x1000288a
10002876:	68 98 e7 00 10       	push   0x1000e798
1000287b:	6a 07                	push   0x7
1000287d:	e8 9e f0 ff ff       	call   0x10001920
10002882:	83 c4 08             	add    esp,0x8
10002885:	33 c0                	xor    eax,eax
10002887:	c2 04 00             	ret    0x4
1000288a:	8a 41 34             	mov    al,BYTE PTR [ecx+0x34]
1000288d:	56                   	push   esi
1000288e:	8b 71 20             	mov    esi,DWORD PTR [ecx+0x20]
10002891:	0c 02                	or     al,0x2
10002893:	88 41 34             	mov    BYTE PTR [ecx+0x34],al
10002896:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
10002899:	8b 49 28             	mov    ecx,DWORD PTR [ecx+0x28]
1000289c:	0f af c0             	imul   eax,eax
1000289f:	83 fe 01             	cmp    esi,0x1
100028a2:	5e                   	pop    esi
100028a3:	75 1a                	jne    0x100028bf
100028a5:	85 d2                	test   edx,edx
100028a7:	7e 08                	jle    0x100028b1
100028a9:	03 c8                	add    ecx,eax
100028ab:	c1 f8 02             	sar    eax,0x2
100028ae:	4a                   	dec    edx
100028af:	75 f8                	jne    0x100028a9
100028b1:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100028b5:	89 08                	mov    DWORD PTR [eax],ecx
100028b7:	b8 01 00 00 00       	mov    eax,0x1
100028bc:	c2 04 00             	ret    0x4
100028bf:	85 d2                	test   edx,edx
100028c1:	7e 09                	jle    0x100028cc
100028c3:	8d 0c 41             	lea    ecx,[ecx+eax*2]
100028c6:	c1 f8 02             	sar    eax,0x2
100028c9:	4a                   	dec    edx
100028ca:	75 f7                	jne    0x100028c3
100028cc:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
100028d0:	b8 01 00 00 00       	mov    eax,0x1
100028d5:	89 0a                	mov    DWORD PTR [edx],ecx
100028d7:	c2 04 00             	ret    0x4
100028da:	90                   	nop
100028db:	90                   	nop
100028dc:	90                   	nop
100028dd:	90                   	nop
100028de:	90                   	nop
100028df:	90                   	nop
100028e0:	8a 41 34             	mov    al,BYTE PTR [ecx+0x34]
100028e3:	24 fd                	and    al,0xfd
100028e5:	0c 01                	or     al,0x1
100028e7:	88 41 34             	mov    BYTE PTR [ecx+0x34],al
100028ea:	b8 01 00 00 00       	mov    eax,0x1
100028ef:	c3                   	ret
100028f0:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
100028f3:	b8 01 00 00 00       	mov    eax,0x1
100028f8:	c3                   	ret
100028f9:	90                   	nop
100028fa:	90                   	nop
100028fb:	90                   	nop
100028fc:	90                   	nop
100028fd:	90                   	nop
100028fe:	90                   	nop
100028ff:	90                   	nop
10002900:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10002903:	c3                   	ret
10002904:	90                   	nop
10002905:	90                   	nop
10002906:	90                   	nop
10002907:	90                   	nop
10002908:	90                   	nop
10002909:	90                   	nop
1000290a:	90                   	nop
1000290b:	90                   	nop
1000290c:	90                   	nop
1000290d:	90                   	nop
1000290e:	90                   	nop
1000290f:	90                   	nop
10002910:	56                   	push   esi
10002911:	57                   	push   edi
10002912:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10002916:	8b f9                	mov    edi,ecx
10002918:	8b ca                	mov    ecx,edx
1000291a:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
1000291d:	d3 f8                	sar    eax,cl
1000291f:	89 06                	mov    DWORD PTR [esi],eax
10002921:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
10002924:	d3 f8                	sar    eax,cl
10002926:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10002929:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
1000292c:	d3 f8                	sar    eax,cl
1000292e:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
10002931:	8b 4f 20             	mov    ecx,DWORD PTR [edi+0x20]
10002934:	89 4e 14             	mov    DWORD PTR [esi+0x14],ecx
10002937:	8b 57 24             	mov    edx,DWORD PTR [edi+0x24]
1000293a:	89 56 18             	mov    DWORD PTR [esi+0x18],edx
1000293d:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
10002940:	a9 00 00 02 00       	test   eax,0x20000
10002945:	74 24                	je     0x1000296b
10002947:	b8 01 00 00 00       	mov    eax,0x1
1000294c:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
1000294f:	8a 4f 24             	mov    cl,BYTE PTR [edi+0x24]
10002952:	f6 c1 08             	test   cl,0x8
10002955:	74 0c                	je     0x10002963
10002957:	c7 46 0c 00 00 01 00 	mov    DWORD PTR [esi+0xc],0x10000
1000295e:	5f                   	pop    edi
1000295f:	5e                   	pop    esi
10002960:	c2 04 00             	ret    0x4
10002963:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
10002966:	5f                   	pop    edi
10002967:	5e                   	pop    esi
10002968:	c2 04 00             	ret    0x4
1000296b:	33 c0                	xor    eax,eax
1000296d:	5f                   	pop    edi
1000296e:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
10002971:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
10002974:	b8 01 00 00 00       	mov    eax,0x1
10002979:	5e                   	pop    esi
1000297a:	c2 04 00             	ret    0x4
1000297d:	90                   	nop
1000297e:	90                   	nop
1000297f:	90                   	nop
10002980:	a1 20 55 1f 10       	mov    eax,ds:0x101f5520
10002985:	85 c0                	test   eax,eax
10002987:	74 69                	je     0x100029f2
10002989:	a1 24 55 1f 10       	mov    eax,ds:0x101f5524
1000298e:	50                   	push   eax
1000298f:	e8 3c eb ff ff       	call   0x100014d0
10002994:	83 c4 04             	add    esp,0x4
10002997:	85 c0                	test   eax,eax
10002999:	75 12                	jne    0x100029ad
1000299b:	68 14 e8 00 10       	push   0x1000e814
100029a0:	6a 04                	push   0x4
100029a2:	e8 79 ef ff ff       	call   0x10001920
100029a7:	83 c4 08             	add    esp,0x8
100029aa:	33 c0                	xor    eax,eax
100029ac:	c3                   	ret
100029ad:	8b 0d 34 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f5534
100029b3:	51                   	push   ecx
100029b4:	e8 17 eb ff ff       	call   0x100014d0
100029b9:	83 c4 04             	add    esp,0x4
100029bc:	85 c0                	test   eax,eax
100029be:	75 12                	jne    0x100029d2
100029c0:	68 d8 e7 00 10       	push   0x1000e7d8
100029c5:	6a 04                	push   0x4
100029c7:	e8 54 ef ff ff       	call   0x10001920
100029cc:	83 c4 08             	add    esp,0x8
100029cf:	33 c0                	xor    eax,eax
100029d1:	c3                   	ret
100029d2:	b8 50 3e 0e 10       	mov    eax,0x100e3e50
100029d7:	b9 20 4e 00 00       	mov    ecx,0x4e20
100029dc:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
100029e2:	83 c0 38             	add    eax,0x38
100029e5:	49                   	dec    ecx
100029e6:	75 f4                	jne    0x100029dc
100029e8:	c7 05 20 55 1f 10 00 	mov    DWORD PTR ds:0x101f5520,0x0
100029ef:	00 00 00 
100029f2:	b8 01 00 00 00       	mov    eax,0x1
100029f7:	c3                   	ret
100029f8:	90                   	nop
100029f9:	90                   	nop
100029fa:	90                   	nop
100029fb:	90                   	nop
100029fc:	90                   	nop
100029fd:	90                   	nop
100029fe:	90                   	nop
100029ff:	90                   	nop
10002a00:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10002a04:	83 f8 01             	cmp    eax,0x1
10002a07:	75 10                	jne    0x10002a19
10002a09:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002a0d:	c7 00 08 00 00 00    	mov    DWORD PTR [eax],0x8
10002a13:	b8 01 00 00 00       	mov    eax,0x1
10002a18:	c3                   	ret
10002a19:	83 f8 02             	cmp    eax,0x2
10002a1c:	75 10                	jne    0x10002a2e
10002a1e:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10002a22:	b8 01 00 00 00       	mov    eax,0x1
10002a27:	c7 01 07 00 00 00    	mov    DWORD PTR [ecx],0x7
10002a2d:	c3                   	ret
10002a2e:	83 f8 04             	cmp    eax,0x4
10002a31:	75 10                	jne    0x10002a43
10002a33:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10002a37:	b8 01 00 00 00       	mov    eax,0x1
10002a3c:	c7 02 06 00 00 00    	mov    DWORD PTR [edx],0x6
10002a42:	c3                   	ret
10002a43:	83 f8 08             	cmp    eax,0x8
10002a46:	75 10                	jne    0x10002a58
10002a48:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002a4c:	c7 00 05 00 00 00    	mov    DWORD PTR [eax],0x5
10002a52:	b8 01 00 00 00       	mov    eax,0x1
10002a57:	c3                   	ret
10002a58:	83 f8 10             	cmp    eax,0x10
10002a5b:	75 10                	jne    0x10002a6d
10002a5d:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10002a61:	b8 01 00 00 00       	mov    eax,0x1
10002a66:	c7 01 04 00 00 00    	mov    DWORD PTR [ecx],0x4
10002a6c:	c3                   	ret
10002a6d:	83 f8 20             	cmp    eax,0x20
10002a70:	75 10                	jne    0x10002a82
10002a72:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10002a76:	b8 01 00 00 00       	mov    eax,0x1
10002a7b:	c7 02 03 00 00 00    	mov    DWORD PTR [edx],0x3
10002a81:	c3                   	ret
10002a82:	83 f8 40             	cmp    eax,0x40
10002a85:	75 10                	jne    0x10002a97
10002a87:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10002a8b:	c7 00 02 00 00 00    	mov    DWORD PTR [eax],0x2
10002a91:	b8 01 00 00 00       	mov    eax,0x1
10002a96:	c3                   	ret
10002a97:	3d 80 00 00 00       	cmp    eax,0x80
10002a9c:	75 10                	jne    0x10002aae
10002a9e:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10002aa2:	b8 01 00 00 00       	mov    eax,0x1
10002aa7:	c7 01 01 00 00 00    	mov    DWORD PTR [ecx],0x1
10002aad:	c3                   	ret
10002aae:	3d 00 01 00 00       	cmp    eax,0x100
10002ab3:	75 10                	jne    0x10002ac5
10002ab5:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
10002ab9:	b8 01 00 00 00       	mov    eax,0x1
10002abe:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
10002ac4:	c3                   	ret
10002ac5:	68 50 e8 00 10       	push   0x1000e850
10002aca:	6a 07                	push   0x7
10002acc:	e8 4f ee ff ff       	call   0x10001920
10002ad1:	83 c4 08             	add    esp,0x8
10002ad4:	33 c0                	xor    eax,eax
10002ad6:	c3                   	ret
10002ad7:	90                   	nop
10002ad8:	90                   	nop
10002ad9:	90                   	nop
10002ada:	90                   	nop
10002adb:	90                   	nop
10002adc:	90                   	nop
10002add:	90                   	nop
10002ade:	90                   	nop
10002adf:	90                   	nop
10002ae0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10002ae4:	33 c9                	xor    ecx,ecx
10002ae6:	85 c0                	test   eax,eax
10002ae8:	7e 07                	jle    0x10002af1
10002aea:	d1 f8                	sar    eax,1
10002aec:	41                   	inc    ecx
10002aed:	85 c0                	test   eax,eax
10002aef:	7f f9                	jg     0x10002aea
10002af1:	8d 41 ff             	lea    eax,[ecx-0x1]
10002af4:	c3                   	ret
10002af5:	90                   	nop
10002af6:	90                   	nop
10002af7:	90                   	nop
10002af8:	90                   	nop
10002af9:	90                   	nop
10002afa:	90                   	nop
10002afb:	90                   	nop
10002afc:	90                   	nop
10002afd:	90                   	nop
10002afe:	90                   	nop
10002aff:	90                   	nop
10002b00:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10002b04:	b8 01 00 00 00       	mov    eax,0x1
10002b09:	3b c8                	cmp    ecx,eax
10002b0b:	7e 06                	jle    0x10002b13
10002b0d:	d1 e0                	shl    eax,1
10002b0f:	3b c1                	cmp    eax,ecx
10002b11:	7c fa                	jl     0x10002b0d
10002b13:	c3                   	ret
10002b14:	90                   	nop
10002b15:	90                   	nop
10002b16:	90                   	nop
10002b17:	90                   	nop
10002b18:	90                   	nop
10002b19:	90                   	nop
10002b1a:	90                   	nop
10002b1b:	90                   	nop
10002b1c:	90                   	nop
10002b1d:	90                   	nop
10002b1e:	90                   	nop
10002b1f:	90                   	nop
10002b20:	56                   	push   esi
10002b21:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10002b25:	57                   	push   edi
10002b26:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10002b2a:	39 3c b5 7c e8 00 10 	cmp    DWORD PTR [esi*4+0x1000e87c],edi
10002b31:	74 18                	je     0x10002b4b
10002b33:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10002b37:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10002b3b:	50                   	push   eax
10002b3c:	51                   	push   ecx
10002b3d:	57                   	push   edi
10002b3e:	56                   	push   esi
10002b3f:	e8 18 11 00 00       	call   0x10003c5c
10002b44:	89 3c b5 7c e8 00 10 	mov    DWORD PTR [esi*4+0x1000e87c],edi
10002b4b:	5f                   	pop    edi
10002b4c:	5e                   	pop    esi
10002b4d:	c3                   	ret
10002b4e:	90                   	nop
10002b4f:	90                   	nop
10002b50:	a1 50 3a 0e 10       	mov    eax,ds:0x100e3a50
10002b55:	56                   	push   esi
10002b56:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10002b5a:	3b c6                	cmp    eax,esi
10002b5c:	74 49                	je     0x10002ba7
10002b5e:	8d 46 ff             	lea    eax,[esi-0x1]
10002b61:	83 f8 03             	cmp    eax,0x3
10002b64:	77 3b                	ja     0x10002ba1
10002b66:	ff 24 85 ac 2b 00 10 	jmp    DWORD PTR [eax*4+0x10002bac]
10002b6d:	6a 02                	push   0x2
10002b6f:	e8 3c 11 00 00       	call   0x10003cb0
10002b74:	89 35 50 3a 0e 10    	mov    DWORD PTR ds:0x100e3a50,esi
10002b7a:	5e                   	pop    esi
10002b7b:	c3                   	ret
10002b7c:	6a 04                	push   0x4
10002b7e:	e8 2d 11 00 00       	call   0x10003cb0
10002b83:	89 35 50 3a 0e 10    	mov    DWORD PTR ds:0x100e3a50,esi
10002b89:	5e                   	pop    esi
10002b8a:	c3                   	ret
10002b8b:	6a 06                	push   0x6
10002b8d:	e8 1e 11 00 00       	call   0x10003cb0
10002b92:	89 35 50 3a 0e 10    	mov    DWORD PTR ds:0x100e3a50,esi
10002b98:	5e                   	pop    esi
10002b99:	c3                   	ret
10002b9a:	6a 08                	push   0x8
10002b9c:	e8 0f 11 00 00       	call   0x10003cb0
10002ba1:	89 35 50 3a 0e 10    	mov    DWORD PTR ds:0x100e3a50,esi
10002ba7:	5e                   	pop    esi
10002ba8:	c3                   	ret
10002ba9:	8d 49 00             	lea    ecx,[ecx+0x0]
10002bac:	6d                   	ins    DWORD PTR es:[edi],dx
10002bad:	2b 00                	sub    eax,DWORD PTR [eax]
10002baf:	10 7c 2b 00          	adc    BYTE PTR [ebx+ebp*1+0x0],bh
10002bb3:	10 8b 2b 00 10 9a    	adc    BYTE PTR [ebx-0x65efffd5],cl
10002bb9:	2b 00                	sub    eax,DWORD PTR [eax]
10002bbb:	10 90 90 90 90 a1    	adc    BYTE PTR [eax-0x5e6f6f70],dl
10002bc1:	54                   	push   esp
10002bc2:	3a 0e                	cmp    cl,BYTE PTR [esi]
10002bc4:	10 56 8b             	adc    BYTE PTR [esi-0x75],dl
10002bc7:	74 24                	je     0x10002bed
10002bc9:	08 3b                	or     BYTE PTR [ebx],bh
10002bcb:	c6                   	(bad)
10002bcc:	0f 84 b4 00 00 00    	je     0x10002c86
10002bd2:	8d 46 ff             	lea    eax,[esi-0x1]
10002bd5:	83 f8 03             	cmp    eax,0x3
10002bd8:	0f 87 a2 00 00 00    	ja     0x10002c80
10002bde:	ff 24 85 88 2c 00 10 	jmp    DWORD PTR [eax*4+0x10002c88]
10002be5:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
10002bea:	6a 0a                	push   0xa
10002bec:	50                   	push   eax
10002bed:	e8 b8 10 00 00       	call   0x10003caa
10002bf2:	83 3d c4 55 1f 10 02 	cmp    DWORD PTR ds:0x101f55c4,0x2
10002bf9:	0f 8c 81 00 00 00    	jl     0x10002c80
10002bff:	8b 0d a4 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a4
10002c05:	6a 00                	push   0x0
10002c07:	51                   	push   ecx
10002c08:	e8 9d 10 00 00       	call   0x10003caa
10002c0d:	89 35 54 3a 0e 10    	mov    DWORD PTR ds:0x100e3a54,esi
10002c13:	5e                   	pop    esi
10002c14:	c3                   	ret
10002c15:	8b 15 a0 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a0
10002c1b:	6a 01                	push   0x1
10002c1d:	52                   	push   edx
10002c1e:	e8 87 10 00 00       	call   0x10003caa
10002c23:	83 3d c4 55 1f 10 02 	cmp    DWORD PTR ds:0x101f55c4,0x2
10002c2a:	7c 54                	jl     0x10002c80
10002c2c:	a1 a4 55 1f 10       	mov    eax,ds:0x101f55a4
10002c31:	6a 00                	push   0x0
10002c33:	50                   	push   eax
10002c34:	e8 71 10 00 00       	call   0x10003caa
10002c39:	89 35 54 3a 0e 10    	mov    DWORD PTR ds:0x100e3a54,esi
10002c3f:	5e                   	pop    esi
10002c40:	c3                   	ret
10002c41:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10002c47:	6a 04                	push   0x4
10002c49:	51                   	push   ecx
10002c4a:	e8 5b 10 00 00       	call   0x10003caa
10002c4f:	8b 15 a4 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a4
10002c55:	6a 01                	push   0x1
10002c57:	52                   	push   edx
10002c58:	e8 4d 10 00 00       	call   0x10003caa
10002c5d:	89 35 54 3a 0e 10    	mov    DWORD PTR ds:0x100e3a54,esi
10002c63:	5e                   	pop    esi
10002c64:	c3                   	ret
10002c65:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
10002c6a:	6a 02                	push   0x2
10002c6c:	50                   	push   eax
10002c6d:	e8 38 10 00 00       	call   0x10003caa
10002c72:	8b 0d a4 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a4
10002c78:	6a 01                	push   0x1
10002c7a:	51                   	push   ecx
10002c7b:	e8 2a 10 00 00       	call   0x10003caa
10002c80:	89 35 54 3a 0e 10    	mov    DWORD PTR ds:0x100e3a54,esi
10002c86:	5e                   	pop    esi
10002c87:	c3                   	ret
10002c88:	e5 2b                	in     eax,0x2b
10002c8a:	00 10                	add    BYTE PTR [eax],dl
10002c8c:	15 2c 00 10 41       	adc    eax,0x4110002c
10002c91:	2c 00                	sub    al,0x0
10002c93:	10 65 2c             	adc    BYTE PTR [ebp+0x2c],ah
10002c96:	00 10                	add    BYTE PTR [eax],dl
10002c98:	90                   	nop
10002c99:	90                   	nop
10002c9a:	90                   	nop
10002c9b:	90                   	nop
10002c9c:	90                   	nop
10002c9d:	90                   	nop
10002c9e:	90                   	nop
10002c9f:	90                   	nop
10002ca0:	a1 5c 3a 0e 10       	mov    eax,ds:0x100e3a5c
10002ca5:	53                   	push   ebx
10002ca6:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
10002caa:	56                   	push   esi
10002cab:	3b d8                	cmp    ebx,eax
10002cad:	74 57                	je     0x10002d06
10002caf:	f6 c3 04             	test   bl,0x4
10002cb2:	74 04                	je     0x10002cb8
10002cb4:	6a 07                	push   0x7
10002cb6:	eb 06                	jmp    0x10002cbe
10002cb8:	a8 04                	test   al,0x4
10002cba:	74 07                	je     0x10002cc3
10002cbc:	6a 06                	push   0x6
10002cbe:	e8 11 10 00 00       	call   0x10003cd4
10002cc3:	f6 c3 08             	test   bl,0x8
10002cc6:	74 04                	je     0x10002ccc
10002cc8:	6a 00                	push   0x0
10002cca:	eb 0b                	jmp    0x10002cd7
10002ccc:	f6 05 5c 3a 0e 10 08 	test   BYTE PTR ds:0x100e3a5c,0x8
10002cd3:	74 07                	je     0x10002cdc
10002cd5:	6a 01                	push   0x1
10002cd7:	e8 f2 0f 00 00       	call   0x10003cce
10002cdc:	f6 c3 10             	test   bl,0x10
10002cdf:	74 0c                	je     0x10002ced
10002ce1:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
10002ce6:	6a 01                	push   0x1
10002ce8:	6a 01                	push   0x1
10002cea:	50                   	push   eax
10002ceb:	eb 14                	jmp    0x10002d01
10002ced:	f6 05 5c 3a 0e 10 10 	test   BYTE PTR ds:0x100e3a5c,0x10
10002cf4:	74 10                	je     0x10002d06
10002cf6:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10002cfc:	6a 00                	push   0x0
10002cfe:	6a 00                	push   0x0
10002d00:	51                   	push   ecx
10002d01:	e8 98 0f 00 00       	call   0x10003c9e
10002d06:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10002d0a:	a1 58 3a 0e 10       	mov    eax,ds:0x100e3a58
10002d0f:	3b f0                	cmp    esi,eax
10002d11:	89 1d 5c 3a 0e 10    	mov    DWORD PTR ds:0x100e3a5c,ebx
10002d17:	0f 84 a4 02 00 00    	je     0x10002fc1
10002d1d:	83 f8 09             	cmp    eax,0x9
10002d20:	75 07                	jne    0x10002d29
10002d22:	6a 00                	push   0x0
10002d24:	e8 9f 0f 00 00       	call   0x10003cc8
10002d29:	8d 46 ff             	lea    eax,[esi-0x1]
10002d2c:	83 f8 08             	cmp    eax,0x8
10002d2f:	0f 87 86 02 00 00    	ja     0x10002fbb
10002d35:	ff 24 85 c4 2f 00 10 	jmp    DWORD PTR [eax*4+0x10002fc4]
10002d3c:	8b 15 a0 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a0
10002d42:	6a 00                	push   0x0
10002d44:	6a 01                	push   0x1
10002d46:	52                   	push   edx
10002d47:	e8 d0 0f 00 00       	call   0x10003d1c
10002d4c:	6a 03                	push   0x3
10002d4e:	e8 fd fd ff ff       	call   0x10002b50
10002d53:	6a 02                	push   0x2
10002d55:	e8 66 fe ff ff       	call   0x10002bc0
10002d5a:	83 c4 08             	add    esp,0x8
10002d5d:	6a 05                	push   0x5
10002d5f:	6a 01                	push   0x1
10002d61:	e9 d7 00 00 00       	jmp    0x10002e3d
10002d66:	6a 01                	push   0x1
10002d68:	e8 e3 fd ff ff       	call   0x10002b50
10002d6d:	6a 01                	push   0x1
10002d6f:	e8 4c fe ff ff       	call   0x10002bc0
10002d74:	83 c4 08             	add    esp,0x8
10002d77:	6a 04                	push   0x4
10002d79:	6a 04                	push   0x4
10002d7b:	e9 bd 00 00 00       	jmp    0x10002e3d
10002d80:	6a 03                	push   0x3
10002d82:	e8 c9 fd ff ff       	call   0x10002b50
10002d87:	6a 02                	push   0x2
10002d89:	e8 32 fe ff ff       	call   0x10002bc0
10002d8e:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
10002d93:	83 c4 08             	add    esp,0x8
10002d96:	6a 00                	push   0x0
10002d98:	6a 01                	push   0x1
10002d9a:	50                   	push   eax
10002d9b:	e8 7c 0f 00 00       	call   0x10003d1c
10002da0:	6a 00                	push   0x0
10002da2:	6a 04                	push   0x4
10002da4:	6a 00                	push   0x0
10002da6:	6a 04                	push   0x4
10002da8:	e8 69 0f 00 00       	call   0x10003d16
10002dad:	a1 38 e3 00 10       	mov    eax,ds:0x1000e338
10002db2:	85 c0                	test   eax,eax
10002db4:	0f 84 01 02 00 00    	je     0x10002fbb
10002dba:	6a 02                	push   0x2
10002dbc:	e8 37 0f 00 00       	call   0x10003cf8
10002dc1:	89 35 58 3a 0e 10    	mov    DWORD PTR ds:0x100e3a58,esi
10002dc7:	5e                   	pop    esi
10002dc8:	5b                   	pop    ebx
10002dc9:	c3                   	ret
10002dca:	6a 03                	push   0x3
10002dcc:	e8 7f fd ff ff       	call   0x10002b50
10002dd1:	6a 02                	push   0x2
10002dd3:	e8 e8 fd ff ff       	call   0x10002bc0
10002dd8:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10002dde:	83 c4 08             	add    esp,0x8
10002de1:	6a 00                	push   0x0
10002de3:	6a 01                	push   0x1
10002de5:	51                   	push   ecx
10002de6:	e8 31 0f 00 00       	call   0x10003d1c
10002deb:	6a 00                	push   0x0
10002ded:	6a 04                	push   0x4
10002def:	6a 00                	push   0x0
10002df1:	6a 04                	push   0x4
10002df3:	e8 1e 0f 00 00       	call   0x10003d16
10002df8:	a1 38 e3 00 10       	mov    eax,ds:0x1000e338
10002dfd:	85 c0                	test   eax,eax
10002dff:	0f 84 b6 01 00 00    	je     0x10002fbb
10002e05:	68 02 02 00 00       	push   0x202
10002e0a:	e8 e9 0e 00 00       	call   0x10003cf8
10002e0f:	89 35 58 3a 0e 10    	mov    DWORD PTR ds:0x100e3a58,esi
10002e15:	5e                   	pop    esi
10002e16:	5b                   	pop    ebx
10002e17:	c3                   	ret
10002e18:	6a 03                	push   0x3
10002e1a:	e8 31 fd ff ff       	call   0x10002b50
10002e1f:	6a 02                	push   0x2
10002e21:	e8 9a fd ff ff       	call   0x10002bc0
10002e26:	8b 15 a0 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a0
10002e2c:	83 c4 08             	add    esp,0x8
10002e2f:	6a 00                	push   0x0
10002e31:	6a 01                	push   0x1
10002e33:	52                   	push   edx
10002e34:	e8 e3 0e 00 00       	call   0x10003d1c
10002e39:	6a 02                	push   0x2
10002e3b:	6a 02                	push   0x2
10002e3d:	6a 05                	push   0x5
10002e3f:	6a 01                	push   0x1
10002e41:	e8 d0 0e 00 00       	call   0x10003d16
10002e46:	a1 38 e3 00 10       	mov    eax,ds:0x1000e338
10002e4b:	85 c0                	test   eax,eax
10002e4d:	0f 84 68 01 00 00    	je     0x10002fbb
10002e53:	6a 02                	push   0x2
10002e55:	e8 9e 0e 00 00       	call   0x10003cf8
10002e5a:	89 35 58 3a 0e 10    	mov    DWORD PTR ds:0x100e3a58,esi
10002e60:	5e                   	pop    esi
10002e61:	5b                   	pop    ebx
10002e62:	c3                   	ret
10002e63:	a1 a4 55 1f 10       	mov    eax,ds:0x101f55a4
10002e68:	6a 00                	push   0x0
10002e6a:	6a 00                	push   0x0
10002e6c:	50                   	push   eax
10002e6d:	e8 aa 0e 00 00       	call   0x10003d1c
10002e72:	a1 c4 55 1f 10       	mov    eax,ds:0x101f55c4
10002e77:	6a 03                	push   0x3
10002e79:	83 f8 02             	cmp    eax,0x2
10002e7c:	7c 48                	jl     0x10002ec6
10002e7e:	e8 cd fc ff ff       	call   0x10002b50
10002e83:	83 c4 04             	add    esp,0x4
10002e86:	6a 02                	push   0x2
10002e88:	6a 02                	push   0x2
10002e8a:	6a 05                	push   0x5
10002e8c:	6a 01                	push   0x1
10002e8e:	e8 83 0e 00 00       	call   0x10003d16
10002e93:	a1 38 e3 00 10       	mov    eax,ds:0x1000e338
10002e98:	85 c0                	test   eax,eax
10002e9a:	74 07                	je     0x10002ea3
10002e9c:	6a 02                	push   0x2
10002e9e:	e8 55 0e 00 00       	call   0x10003cf8
10002ea3:	6a 03                	push   0x3
10002ea5:	e8 16 fd ff ff       	call   0x10002bc0
10002eaa:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10002eb0:	83 c4 04             	add    esp,0x4
10002eb3:	6a 00                	push   0x0
10002eb5:	6a 01                	push   0x1
10002eb7:	51                   	push   ecx
10002eb8:	e8 5f 0e 00 00       	call   0x10003d1c
10002ebd:	89 35 58 3a 0e 10    	mov    DWORD PTR ds:0x100e3a58,esi
10002ec3:	5e                   	pop    esi
10002ec4:	5b                   	pop    ebx
10002ec5:	c3                   	ret
10002ec6:	e8 85 fc ff ff       	call   0x10002b50
10002ecb:	6a 02                	push   0x2
10002ecd:	e8 ee fc ff ff       	call   0x10002bc0
10002ed2:	a1 38 e3 00 10       	mov    eax,ds:0x1000e338
10002ed7:	83 c4 08             	add    esp,0x8
10002eda:	85 c0                	test   eax,eax
10002edc:	74 14                	je     0x10002ef2
10002ede:	68 02 01 00 00       	push   0x102
10002ee3:	e8 10 0e 00 00       	call   0x10003cf8
10002ee8:	6a 00                	push   0x0
10002eea:	6a 04                	push   0x4
10002eec:	6a 0f                	push   0xf
10002eee:	6a 04                	push   0x4
10002ef0:	eb 08                	jmp    0x10002efa
10002ef2:	6a 00                	push   0x0
10002ef4:	6a 04                	push   0x4
10002ef6:	6a 00                	push   0x0
10002ef8:	6a 02                	push   0x2
10002efa:	e8 17 0e 00 00       	call   0x10003d16
10002eff:	8b 15 a0 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a0
10002f05:	6a 01                	push   0x1
10002f07:	6a 01                	push   0x1
10002f09:	52                   	push   edx
10002f0a:	e8 8f 0d 00 00       	call   0x10003c9e
10002f0f:	a1 5c 3a 0e 10       	mov    eax,ds:0x100e3a5c
10002f14:	89 35 58 3a 0e 10    	mov    DWORD PTR ds:0x100e3a58,esi
10002f1a:	0c 10                	or     al,0x10
10002f1c:	5e                   	pop    esi
10002f1d:	a3 5c 3a 0e 10       	mov    ds:0x100e3a5c,eax
10002f22:	5b                   	pop    ebx
10002f23:	c3                   	ret
10002f24:	a1 a4 55 1f 10       	mov    eax,ds:0x101f55a4
10002f29:	6a 00                	push   0x0
10002f2b:	6a 00                	push   0x0
10002f2d:	50                   	push   eax
10002f2e:	e8 e9 0d 00 00       	call   0x10003d1c
10002f33:	6a 03                	push   0x3
10002f35:	e8 16 fc ff ff       	call   0x10002b50
10002f3a:	a1 c4 55 1f 10       	mov    eax,ds:0x101f55c4
10002f3f:	83 c4 04             	add    esp,0x4
10002f42:	83 f8 02             	cmp    eax,0x2
10002f45:	7c 1c                	jl     0x10002f63
10002f47:	6a 04                	push   0x4
10002f49:	e8 72 fc ff ff       	call   0x10002bc0
10002f4e:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10002f54:	83 c4 04             	add    esp,0x4
10002f57:	6a 00                	push   0x0
10002f59:	6a 01                	push   0x1
10002f5b:	51                   	push   ecx
10002f5c:	e8 bb 0d 00 00       	call   0x10003d1c
10002f61:	eb 0a                	jmp    0x10002f6d
10002f63:	6a 02                	push   0x2
10002f65:	e8 56 fc ff ff       	call   0x10002bc0
10002f6a:	83 c4 04             	add    esp,0x4
10002f6d:	a1 38 e3 00 10       	mov    eax,ds:0x1000e338
10002f72:	85 c0                	test   eax,eax
10002f74:	74 07                	je     0x10002f7d
10002f76:	6a 00                	push   0x0
10002f78:	e8 7b 0d 00 00       	call   0x10003cf8
10002f7d:	6a 04                	push   0x4
10002f7f:	6a 04                	push   0x4
10002f81:	6a 04                	push   0x4
10002f83:	6a 04                	push   0x4
10002f85:	e8 8c 0d 00 00       	call   0x10003d16
10002f8a:	89 35 58 3a 0e 10    	mov    DWORD PTR ds:0x100e3a58,esi
10002f90:	5e                   	pop    esi
10002f91:	5b                   	pop    ebx
10002f92:	c3                   	ret
10002f93:	68 ff ff 00 00       	push   0xffff
10002f98:	e8 73 0d 00 00       	call   0x10003d10
10002f9d:	68 ff 00 00 00       	push   0xff
10002fa2:	e8 63 0d 00 00       	call   0x10003d0a
10002fa7:	6a 01                	push   0x1
10002fa9:	e8 1a 0d 00 00       	call   0x10003cc8
10002fae:	6a 00                	push   0x0
10002fb0:	6a 04                	push   0x4
10002fb2:	6a 00                	push   0x0
10002fb4:	6a 04                	push   0x4
10002fb6:	e8 5b 0d 00 00       	call   0x10003d16
10002fbb:	89 35 58 3a 0e 10    	mov    DWORD PTR ds:0x100e3a58,esi
10002fc1:	5e                   	pop    esi
10002fc2:	5b                   	pop    ebx
10002fc3:	c3                   	ret
10002fc4:	3c 2d                	cmp    al,0x2d
10002fc6:	00 10                	add    BYTE PTR [eax],dl
10002fc8:	66 2d 00 10          	sub    ax,0x1000
10002fcc:	66 2d 00 10          	sub    ax,0x1000
10002fd0:	18 2e                	sbb    BYTE PTR [esi],ch
10002fd2:	00 10                	add    BYTE PTR [eax],dl
10002fd4:	80 2d 00 10 ca 2d 00 	sub    BYTE PTR ds:0x2dca1000,0x0
10002fdb:	10 63 2e             	adc    BYTE PTR [ebx+0x2e],ah
10002fde:	00 10                	add    BYTE PTR [eax],dl
10002fe0:	24 2f                	and    al,0x2f
10002fe2:	00 10                	add    BYTE PTR [eax],dl
10002fe4:	93                   	xchg   ebx,eax
10002fe5:	2f                   	das
10002fe6:	00 10                	add    BYTE PTR [eax],dl
10002fe8:	90                   	nop
10002fe9:	90                   	nop
10002fea:	90                   	nop
10002feb:	90                   	nop
10002fec:	90                   	nop
10002fed:	90                   	nop
10002fee:	90                   	nop
10002fef:	90                   	nop
10002ff0:	81 ec 08 0f 00 00    	sub    esp,0xf08
10002ff6:	55                   	push   ebp
10002ff7:	57                   	push   edi
10002ff8:	8b f9                	mov    edi,ecx
10002ffa:	8b ea                	mov    ebp,edx
10002ffc:	85 ed                	test   ebp,ebp
10002ffe:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
10003001:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
10003005:	0f 8e 82 00 00 00    	jle    0x1000308d
1000300b:	53                   	push   ebx
1000300c:	56                   	push   esi
1000300d:	8d 74 24 28          	lea    esi,[esp+0x28]
10003011:	8b dd                	mov    ebx,ebp
10003013:	d9 47 08             	fld    DWORD PTR [edi+0x8]
10003016:	d8 3d cc c1 00 10    	fdivr  DWORD PTR ds:0x1000c1cc
1000301c:	8b 4f 14             	mov    ecx,DWORD PTR [edi+0x14]
1000301f:	8b 57 18             	mov    edx,DWORD PTR [edi+0x18]
10003022:	8b 47 1c             	mov    eax,DWORD PTR [edi+0x1c]
10003025:	89 4e fc             	mov    DWORD PTR [esi-0x4],ecx
10003028:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1000302c:	89 16                	mov    DWORD PTR [esi],edx
1000302e:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10003031:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
10003034:	d9 c0                	fld    st(0)
10003036:	d8 0d c8 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c8
1000303c:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
1000303f:	d9 56 10             	fst    DWORD PTR [esi+0x10]
10003042:	d9 5e 1c             	fstp   DWORD PTR [esi+0x1c]
10003045:	d9 07                	fld    DWORD PTR [edi]
10003047:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
1000304d:	e8 aa 11 00 00       	call   0x100041fc
10003052:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10003056:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1000305a:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
10003060:	d9 5e f0             	fstp   DWORD PTR [esi-0x10]
10003063:	d9 47 04             	fld    DWORD PTR [edi+0x4]
10003066:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
1000306c:	e8 8b 11 00 00       	call   0x100041fc
10003071:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10003075:	83 c7 24             	add    edi,0x24
10003078:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1000307c:	83 c6 3c             	add    esi,0x3c
1000307f:	4b                   	dec    ebx
10003080:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
10003086:	d9 5e b8             	fstp   DWORD PTR [esi-0x48]
10003089:	75 88                	jne    0x10003013
1000308b:	5e                   	pop    esi
1000308c:	5b                   	pop    ebx
1000308d:	8b 94 24 14 0f 00 00 	mov    edx,DWORD PTR [esp+0xf14]
10003094:	52                   	push   edx
10003095:	6a 02                	push   0x2
10003097:	e8 04 fc ff ff       	call   0x10002ca0
1000309c:	83 c4 08             	add    esp,0x8
1000309f:	8d 44 24 10          	lea    eax,[esp+0x10]
100030a3:	50                   	push   eax
100030a4:	55                   	push   ebp
100030a5:	e8 78 0c 00 00       	call   0x10003d22
100030aa:	a1 68 e2 00 10       	mov    eax,ds:0x1000e268
100030af:	40                   	inc    eax
100030b0:	5f                   	pop    edi
100030b1:	a3 68 e2 00 10       	mov    ds:0x1000e268,eax
100030b6:	b8 01 00 00 00       	mov    eax,0x1
100030bb:	5d                   	pop    ebp
100030bc:	81 c4 08 0f 00 00    	add    esp,0xf08
100030c2:	c2 04 00             	ret    0x4
100030c5:	90                   	nop
100030c6:	90                   	nop
100030c7:	90                   	nop
100030c8:	90                   	nop
100030c9:	90                   	nop
100030ca:	90                   	nop
100030cb:	90                   	nop
100030cc:	90                   	nop
100030cd:	90                   	nop
100030ce:	90                   	nop
100030cf:	90                   	nop
100030d0:	81 ec 08 0f 00 00    	sub    esp,0xf08
100030d6:	53                   	push   ebx
100030d7:	8b da                	mov    ebx,edx
100030d9:	56                   	push   esi
100030da:	57                   	push   edi
100030db:	85 db                	test   ebx,ebx
100030dd:	8b f9                	mov    edi,ecx
100030df:	0f 8e 83 00 00 00    	jle    0x10003168
100030e5:	55                   	push   ebp
100030e6:	8d 74 24 28          	lea    esi,[esp+0x28]
100030ea:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
100030ee:	bd 00 00 7f 43       	mov    ebp,0x437f0000
100030f3:	d9 47 08             	fld    DWORD PTR [edi+0x8]
100030f6:	d8 3d cc c1 00 10    	fdivr  DWORD PTR ds:0x1000c1cc
100030fc:	89 6e fc             	mov    DWORD PTR [esi-0x4],ebp
100030ff:	89 2e                	mov    DWORD PTR [esi],ebp
10003101:	89 6e 04             	mov    DWORD PTR [esi+0x4],ebp
10003104:	89 6e 0c             	mov    DWORD PTR [esi+0xc],ebp
10003107:	d9 05 c8 c1 00 10    	fld    DWORD PTR ds:0x1000c1c8
1000310d:	d8 77 08             	fdiv   DWORD PTR [edi+0x8]
10003110:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
10003113:	d9 56 10             	fst    DWORD PTR [esi+0x10]
10003116:	d9 5e 1c             	fstp   DWORD PTR [esi+0x1c]
10003119:	d9 07                	fld    DWORD PTR [edi]
1000311b:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
10003121:	e8 d6 10 00 00       	call   0x100041fc
10003126:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1000312a:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
1000312e:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
10003134:	d9 5e f0             	fstp   DWORD PTR [esi-0x10]
10003137:	d9 47 04             	fld    DWORD PTR [edi+0x4]
1000313a:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
10003140:	e8 b7 10 00 00       	call   0x100041fc
10003145:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10003149:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1000314d:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
10003151:	83 c7 24             	add    edi,0x24
10003154:	83 c6 3c             	add    esi,0x3c
10003157:	48                   	dec    eax
10003158:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
1000315e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
10003162:	d9 5e b8             	fstp   DWORD PTR [esi-0x48]
10003165:	75 8c                	jne    0x100030f3
10003167:	5d                   	pop    ebp
10003168:	6a 00                	push   0x0
1000316a:	6a 03                	push   0x3
1000316c:	e8 2f fb ff ff       	call   0x10002ca0
10003171:	83 c4 08             	add    esp,0x8
10003174:	85 db                	test   ebx,ebx
10003176:	7e 2f                	jle    0x100031a7
10003178:	be 01 00 00 00       	mov    esi,0x1
1000317d:	8d 7c 24 14          	lea    edi,[esp+0x14]
10003181:	33 c0                	xor    eax,eax
10003183:	3b f3                	cmp    esi,ebx
10003185:	0f 9d c0             	setge  al
10003188:	48                   	dec    eax
10003189:	23 c6                	and    eax,esi
1000318b:	8d 04 40             	lea    eax,[eax+eax*2]
1000318e:	8d 04 80             	lea    eax,[eax+eax*4]
10003191:	8d 4c 84 14          	lea    ecx,[esp+eax*4+0x14]
10003195:	51                   	push   ecx
10003196:	57                   	push   edi
10003197:	e8 8c 0b 00 00       	call   0x10003d28
1000319c:	46                   	inc    esi
1000319d:	83 c7 3c             	add    edi,0x3c
100031a0:	8d 56 ff             	lea    edx,[esi-0x1]
100031a3:	3b d3                	cmp    edx,ebx
100031a5:	7c da                	jl     0x10003181
100031a7:	a1 68 e2 00 10       	mov    eax,ds:0x1000e268
100031ac:	5f                   	pop    edi
100031ad:	40                   	inc    eax
100031ae:	5e                   	pop    esi
100031af:	a3 68 e2 00 10       	mov    ds:0x1000e268,eax
100031b4:	b8 01 00 00 00       	mov    eax,0x1
100031b9:	5b                   	pop    ebx
100031ba:	81 c4 08 0f 00 00    	add    esp,0xf08
100031c0:	c3                   	ret
100031c1:	90                   	nop
100031c2:	90                   	nop
100031c3:	90                   	nop
100031c4:	90                   	nop
100031c5:	90                   	nop
100031c6:	90                   	nop
100031c7:	90                   	nop
100031c8:	90                   	nop
100031c9:	90                   	nop
100031ca:	90                   	nop
100031cb:	90                   	nop
100031cc:	90                   	nop
100031cd:	90                   	nop
100031ce:	90                   	nop
100031cf:	90                   	nop
100031d0:	81 ec 20 0f 00 00    	sub    esp,0xf20
100031d6:	a1 44 3a 0e 10       	mov    eax,ds:0x100e3a44
100031db:	55                   	push   ebp
100031dc:	56                   	push   esi
100031dd:	8b f1                	mov    esi,ecx
100031df:	85 c0                	test   eax,eax
100031e1:	8b ea                	mov    ebp,edx
100031e3:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
100031e7:	74 10                	je     0x100031f9
100031e9:	e8 e2 fe ff ff       	call   0x100030d0
100031ee:	5e                   	pop    esi
100031ef:	5d                   	pop    ebp
100031f0:	81 c4 20 0f 00 00    	add    esp,0xf20
100031f6:	c2 10 00             	ret    0x10
100031f9:	8b 0d 68 e2 00 10    	mov    ecx,DWORD PTR ds:0x1000e268
100031ff:	8b 84 24 2c 0f 00 00 	mov    eax,DWORD PTR [esp+0xf2c]
10003206:	d9 05 cc c1 00 10    	fld    DWORD PTR ds:0x1000c1cc
1000320c:	41                   	inc    ecx
1000320d:	53                   	push   ebx
1000320e:	89 0d 68 e2 00 10    	mov    DWORD PTR ds:0x1000e268,ecx
10003214:	8b 48 18             	mov    ecx,DWORD PTR [eax+0x18]
10003217:	8b 84 24 34 0f 00 00 	mov    eax,DWORD PTR [esp+0xf34]
1000321e:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10003222:	85 ed                	test   ebp,ebp
10003224:	d8 70 08             	fdiv   DWORD PTR [eax+0x8]
10003227:	8b 10                	mov    edx,DWORD PTR [eax]
10003229:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1000322c:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
10003230:	8b 56 20             	mov    edx,DWORD PTR [esi+0x20]
10003233:	57                   	push   edi
10003234:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
10003238:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
1000323c:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
10003240:	d9 05 cc c1 00 10    	fld    DWORD PTR ds:0x1000c1cc
10003246:	d8 70 0c             	fdiv   DWORD PTR [eax+0xc]
10003249:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000324d:	0f 8e c5 00 00 00    	jle    0x10003318
10003253:	8d 7e 18             	lea    edi,[esi+0x18]
10003256:	8d 74 24 3c          	lea    esi,[esp+0x3c]
1000325a:	8b dd                	mov    ebx,ebp
1000325c:	d9 47 f0             	fld    DWORD PTR [edi-0x10]
1000325f:	d8 3d cc c1 00 10    	fdivr  DWORD PTR ds:0x1000c1cc
10003265:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10003269:	8b 4f fc             	mov    ecx,DWORD PTR [edi-0x4]
1000326c:	8b 17                	mov    edx,DWORD PTR [edi]
1000326e:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
10003271:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10003274:	89 0e                	mov    DWORD PTR [esi],ecx
10003276:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
10003279:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
1000327e:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
10003281:	8d 4c 40 09          	lea    ecx,[eax+eax*2+0x9]
10003285:	d9 c0                	fld    st(0)
10003287:	d8 0d c8 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c8
1000328d:	d9 5e 0c             	fstp   DWORD PTR [esi+0xc]
10003290:	d9 56 14             	fst    DWORD PTR [esi+0x14]
10003293:	d9 56 20             	fst    DWORD PTR [esi+0x20]
10003296:	d9 56 2c             	fst    DWORD PTR [esi+0x2c]
10003299:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
1000329d:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
100032a1:	d8 4f f4             	fmul   DWORD PTR [edi-0xc]
100032a4:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
100032a8:	d8 c9                	fmul   st,st(1)
100032aa:	d9 5c 8e f4          	fstp   DWORD PTR [esi+ecx*4-0xc]
100032ae:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
100032b2:	d8 4f f8             	fmul   DWORD PTR [edi-0x8]
100032b5:	a1 a0 55 1f 10       	mov    eax,ds:0x101f55a0
100032ba:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
100032be:	8d 14 40             	lea    edx,[eax+eax*2]
100032c1:	d8 c9                	fmul   st,st(1)
100032c3:	d9 5c 96 1c          	fstp   DWORD PTR [esi+edx*4+0x1c]
100032c7:	dd d8                	fstp   st(0)
100032c9:	d9 47 e8             	fld    DWORD PTR [edi-0x18]
100032cc:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
100032d2:	e8 25 0f 00 00       	call   0x100041fc
100032d7:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
100032db:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
100032df:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
100032e5:	d9 5e f4             	fstp   DWORD PTR [esi-0xc]
100032e8:	d9 47 ec             	fld    DWORD PTR [edi-0x14]
100032eb:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
100032f1:	e8 06 0f 00 00       	call   0x100041fc
100032f6:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
100032fa:	83 c7 24             	add    edi,0x24
100032fd:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
10003301:	83 c6 3c             	add    esi,0x3c
10003304:	4b                   	dec    ebx
10003305:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
1000330b:	d9 5e bc             	fstp   DWORD PTR [esi-0x44]
1000330e:	0f 85 48 ff ff ff    	jne    0x1000325c
10003314:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
10003318:	8b 84 24 34 0f 00 00 	mov    eax,DWORD PTR [esp+0xf34]
1000331f:	50                   	push   eax
10003320:	e8 0b 04 00 00       	call   0x10003730
10003325:	a1 c4 55 1f 10       	mov    eax,ds:0x101f55c4
1000332a:	8b 9c 24 44 0f 00 00 	mov    ebx,DWORD PTR [esp+0xf44]
10003331:	8b bc 24 40 0f 00 00 	mov    edi,DWORD PTR [esp+0xf40]
10003338:	83 c4 04             	add    esp,0x4
1000333b:	83 f8 01             	cmp    eax,0x1
1000333e:	74 04                	je     0x10003344
10003340:	85 ff                	test   edi,edi
10003342:	75 30                	jne    0x10003374
10003344:	f6 c3 01             	test   bl,0x1
10003347:	74 05                	je     0x1000334e
10003349:	53                   	push   ebx
1000334a:	6a 04                	push   0x4
1000334c:	eb 0b                	jmp    0x10003359
1000334e:	85 ff                	test   edi,edi
10003350:	53                   	push   ebx
10003351:	74 04                	je     0x10003357
10003353:	6a 06                	push   0x6
10003355:	eb 02                	jmp    0x10003359
10003357:	6a 05                	push   0x5
10003359:	e8 42 f9 ff ff       	call   0x10002ca0
1000335e:	83 c4 08             	add    esp,0x8
10003361:	8d 4c 24 30          	lea    ecx,[esp+0x30]
10003365:	51                   	push   ecx
10003366:	55                   	push   ebp
10003367:	e8 b6 09 00 00       	call   0x10003d22
1000336c:	85 ff                	test   edi,edi
1000336e:	0f 84 93 00 00 00    	je     0x10003407
10003374:	db 47 04             	fild   DWORD PTR [edi+0x4]
10003377:	8d 54 24 14          	lea    edx,[esp+0x14]
1000337b:	52                   	push   edx
1000337c:	57                   	push   edi
1000337d:	d8 25 d0 c1 00 10    	fsub   DWORD PTR ds:0x1000c1d0
10003383:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
10003387:	db 47 08             	fild   DWORD PTR [edi+0x8]
1000338a:	d8 25 d0 c1 00 10    	fsub   DWORD PTR ds:0x1000c1d0
10003390:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
10003394:	ff 15 84 e2 00 10    	call   DWORD PTR ds:0x1000e284
1000339a:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
1000339d:	83 c4 08             	add    esp,0x8
100033a0:	85 ed                	test   ebp,ebp
100033a2:	8b 48 18             	mov    ecx,DWORD PTR [eax+0x18]
100033a5:	8d 44 24 30          	lea    eax,[esp+0x30]
100033a9:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
100033ad:	7e 43                	jle    0x100033f2
100033af:	8d 4e 0c             	lea    ecx,[esi+0xc]
100033b2:	8b f5                	mov    esi,ebp
100033b4:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
100033b7:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
100033bb:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
100033bf:	d8 48 20             	fmul   DWORD PTR [eax+0x20]
100033c2:	d9 01                	fld    DWORD PTR [ecx]
100033c4:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
100033c8:	8b 15 a4 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a4
100033ce:	83 c1 24             	add    ecx,0x24
100033d1:	83 c0 3c             	add    eax,0x3c
100033d4:	4e                   	dec    esi
100033d5:	d8 c9                	fmul   st,st(1)
100033d7:	8d 54 52 09          	lea    edx,[edx+edx*2+0x9]
100033db:	d9 5c 90 c4          	fstp   DWORD PTR [eax+edx*4-0x3c]
100033df:	8b 15 a4 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a4
100033e5:	d8 c9                	fmul   st,st(1)
100033e7:	8d 14 52             	lea    edx,[edx+edx*2]
100033ea:	d9 5c 90 ec          	fstp   DWORD PTR [eax+edx*4-0x14]
100033ee:	dd d8                	fstp   st(0)
100033f0:	75 c2                	jne    0x100033b4
100033f2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100033f6:	53                   	push   ebx
100033f7:	50                   	push   eax
100033f8:	57                   	push   edi
100033f9:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
100033fd:	55                   	push   ebp
100033fe:	51                   	push   ecx
100033ff:	e8 1c 00 00 00       	call   0x10003420
10003404:	83 c4 14             	add    esp,0x14
10003407:	5f                   	pop    edi
10003408:	5b                   	pop    ebx
10003409:	5e                   	pop    esi
1000340a:	b8 01 00 00 00       	mov    eax,0x1
1000340f:	5d                   	pop    ebp
10003410:	81 c4 20 0f 00 00    	add    esp,0xf20
10003416:	c2 10 00             	ret    0x10
10003419:	90                   	nop
1000341a:	90                   	nop
1000341b:	90                   	nop
1000341c:	90                   	nop
1000341d:	90                   	nop
1000341e:	90                   	nop
1000341f:	90                   	nop
10003420:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10003424:	53                   	push   ebx
10003425:	55                   	push   ebp
10003426:	56                   	push   esi
10003427:	57                   	push   edi
10003428:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
1000342c:	6a 00                	push   0x0
1000342e:	50                   	push   eax
1000342f:	8b 5f 18             	mov    ebx,DWORD PTR [edi+0x18]
10003432:	57                   	push   edi
10003433:	53                   	push   ebx
10003434:	e8 07 04 00 00       	call   0x10003840
10003439:	8b 0d 14 3e 0e 10    	mov    ecx,DWORD PTR ds:0x100e3e14
1000343f:	8b f0                	mov    esi,eax
10003441:	51                   	push   ecx
10003442:	56                   	push   esi
10003443:	e8 68 e2 ff ff       	call   0x100016b0
10003448:	56                   	push   esi
10003449:	e8 52 e2 ff ff       	call   0x100016a0
1000344e:	83 c4 1c             	add    esp,0x1c
10003451:	50                   	push   eax
10003452:	6a 03                	push   0x3
10003454:	56                   	push   esi
10003455:	e8 d6 e1 ff ff       	call   0x10001630
1000345a:	8b 15 a4 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a4
10003460:	83 c4 04             	add    esp,0x4
10003463:	50                   	push   eax
10003464:	52                   	push   edx
10003465:	e8 b6 f6 ff ff       	call   0x10002b20
1000346a:	8b 6c 24 34          	mov    ebp,DWORD PTR [esp+0x34]
1000346e:	55                   	push   ebp
1000346f:	6a 07                	push   0x7
10003471:	e8 2a f8 ff ff       	call   0x10002ca0
10003476:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
1000347a:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
1000347e:	83 c4 18             	add    esp,0x18
10003481:	50                   	push   eax
10003482:	51                   	push   ecx
10003483:	e8 9a 08 00 00       	call   0x10003d22
10003488:	b8 01 00 00 00       	mov    eax,0x1
1000348d:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
10003491:	8b 4c 87 0c          	mov    ecx,DWORD PTR [edi+eax*4+0xc]
10003495:	85 c9                	test   ecx,ecx
10003497:	0f 84 88 00 00 00    	je     0x10003525
1000349d:	83 e8 00             	sub    eax,0x0
100034a0:	74 36                	je     0x100034d8
100034a2:	48                   	dec    eax
100034a3:	75 6d                	jne    0x10003512
100034a5:	8b 53 10             	mov    edx,DWORD PTR [ebx+0x10]
100034a8:	6a 01                	push   0x1
100034aa:	56                   	push   esi
100034ab:	52                   	push   edx
100034ac:	57                   	push   edi
100034ad:	e8 8e 00 00 00       	call   0x10003540
100034b2:	56                   	push   esi
100034b3:	e8 e8 e1 ff ff       	call   0x100016a0
100034b8:	83 c4 14             	add    esp,0x14
100034bb:	50                   	push   eax
100034bc:	6a 03                	push   0x3
100034be:	56                   	push   esi
100034bf:	e8 6c e1 ff ff       	call   0x10001630
100034c4:	83 c4 04             	add    esp,0x4
100034c7:	50                   	push   eax
100034c8:	a1 a4 55 1f 10       	mov    eax,ds:0x101f55a4
100034cd:	50                   	push   eax
100034ce:	e8 4d f6 ff ff       	call   0x10002b20
100034d3:	55                   	push   ebp
100034d4:	6a 08                	push   0x8
100034d6:	eb 32                	jmp    0x1000350a
100034d8:	8b 4b 10             	mov    ecx,DWORD PTR [ebx+0x10]
100034db:	6a 00                	push   0x0
100034dd:	56                   	push   esi
100034de:	51                   	push   ecx
100034df:	57                   	push   edi
100034e0:	e8 5b 00 00 00       	call   0x10003540
100034e5:	56                   	push   esi
100034e6:	e8 b5 e1 ff ff       	call   0x100016a0
100034eb:	83 c4 14             	add    esp,0x14
100034ee:	50                   	push   eax
100034ef:	6a 03                	push   0x3
100034f1:	56                   	push   esi
100034f2:	e8 39 e1 ff ff       	call   0x10001630
100034f7:	8b 15 a4 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a4
100034fd:	83 c4 04             	add    esp,0x4
10003500:	50                   	push   eax
10003501:	52                   	push   edx
10003502:	e8 19 f6 ff ff       	call   0x10002b20
10003507:	55                   	push   ebp
10003508:	6a 07                	push   0x7
1000350a:	e8 91 f7 ff ff       	call   0x10002ca0
1000350f:	83 c4 18             	add    esp,0x18
10003512:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10003516:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
1000351a:	50                   	push   eax
1000351b:	51                   	push   ecx
1000351c:	e8 01 08 00 00       	call   0x10003d22
10003521:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10003525:	40                   	inc    eax
10003526:	83 f8 02             	cmp    eax,0x2
10003529:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1000352d:	0f 8c 5e ff ff ff    	jl     0x10003491
10003533:	5f                   	pop    edi
10003534:	5e                   	pop    esi
10003535:	5d                   	pop    ebp
10003536:	5b                   	pop    ebx
10003537:	c3                   	ret
10003538:	90                   	nop
10003539:	90                   	nop
1000353a:	90                   	nop
1000353b:	90                   	nop
1000353c:	90                   	nop
1000353d:	90                   	nop
1000353e:	90                   	nop
1000353f:	90                   	nop
10003540:	81 ec 08 08 00 00    	sub    esp,0x808
10003546:	8b 84 24 0c 08 00 00 	mov    eax,DWORD PTR [esp+0x80c]
1000354d:	8b 94 24 18 08 00 00 	mov    edx,DWORD PTR [esp+0x818]
10003554:	56                   	push   esi
10003555:	57                   	push   edi
10003556:	0f bf 48 02          	movsx  ecx,WORD PTR [eax+0x2]
1000355a:	0f bf 38             	movsx  edi,WORD PTR [eax]
1000355d:	8b 44 90 0c          	mov    eax,DWORD PTR [eax+edx*4+0xc]
10003561:	8d 74 24 10          	lea    esi,[esp+0x10]
10003565:	85 c9                	test   ecx,ecx
10003567:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
1000356b:	7e 60                	jle    0x100035cd
1000356d:	53                   	push   ebx
1000356e:	55                   	push   ebp
1000356f:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
10003573:	33 ed                	xor    ebp,ebp
10003575:	85 ff                	test   edi,edi
10003577:	7e 3b                	jle    0x100035b4
10003579:	8b ef                	mov    ebp,edi
1000357b:	8a 08                	mov    cl,BYTE PTR [eax]
1000357d:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10003580:	40                   	inc    eax
10003581:	83 c6 02             	add    esi,0x2
10003584:	c0 e9 03             	shr    cl,0x3
10003587:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
1000358a:	40                   	inc    eax
1000358b:	66 0f b6 c9          	movzx  cx,cl
1000358f:	c0 ea 02             	shr    dl,0x2
10003592:	66 0f b6 d2          	movzx  dx,dl
10003596:	c1 e1 06             	shl    ecx,0x6
10003599:	03 ca                	add    ecx,edx
1000359b:	66 33 d2             	xor    dx,dx
1000359e:	c0 eb 03             	shr    bl,0x3
100035a1:	c1 e1 05             	shl    ecx,0x5
100035a4:	8a d3                	mov    dl,bl
100035a6:	40                   	inc    eax
100035a7:	03 ca                	add    ecx,edx
100035a9:	4f                   	dec    edi
100035aa:	66 89 4e fe          	mov    WORD PTR [esi-0x2],cx
100035ae:	75 cb                	jne    0x1000357b
100035b0:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
100035b4:	8b 8c 24 20 08 00 00 	mov    ecx,DWORD PTR [esp+0x820]
100035bb:	2b cd                	sub    ecx,ebp
100035bd:	8d 34 4e             	lea    esi,[esi+ecx*2]
100035c0:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
100035c4:	49                   	dec    ecx
100035c5:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100035c9:	75 a8                	jne    0x10003573
100035cb:	5d                   	pop    ebp
100035cc:	5b                   	pop    ebx
100035cd:	8b b4 24 1c 08 00 00 	mov    esi,DWORD PTR [esp+0x81c]
100035d4:	56                   	push   esi
100035d5:	e8 c6 e0 ff ff       	call   0x100016a0
100035da:	8d 54 24 14          	lea    edx,[esp+0x14]
100035de:	50                   	push   eax
100035df:	89 50 10             	mov    DWORD PTR [eax+0x10],edx
100035e2:	a1 34 55 1f 10       	mov    eax,ds:0x101f5534
100035e7:	56                   	push   esi
100035e8:	50                   	push   eax
100035e9:	e8 92 dc ff ff       	call   0x10001280
100035ee:	83 c4 10             	add    esp,0x10
100035f1:	5f                   	pop    edi
100035f2:	5e                   	pop    esi
100035f3:	81 c4 08 08 00 00    	add    esp,0x808
100035f9:	c3                   	ret
100035fa:	90                   	nop
100035fb:	90                   	nop
100035fc:	90                   	nop
100035fd:	90                   	nop
100035fe:	90                   	nop
100035ff:	90                   	nop
10003600:	a1 44 3a 0e 10       	mov    eax,ds:0x100e3a44
10003605:	81 ec 10 0f 00 00    	sub    esp,0xf10
1000360b:	85 c0                	test   eax,eax
1000360d:	55                   	push   ebp
1000360e:	8b ea                	mov    ebp,edx
10003610:	74 0f                	je     0x10003621
10003612:	e8 b9 fa ff ff       	call   0x100030d0
10003617:	5d                   	pop    ebp
10003618:	81 c4 10 0f 00 00    	add    esp,0xf10
1000361e:	c2 08 00             	ret    0x8
10003621:	8b 84 24 18 0f 00 00 	mov    eax,DWORD PTR [esp+0xf18]
10003628:	8b 51 20             	mov    edx,DWORD PTR [ecx+0x20]
1000362b:	85 ed                	test   ebp,ebp
1000362d:	d9 40 18             	fld    DWORD PTR [eax+0x18]
10003630:	db 40 08             	fild   DWORD PTR [eax+0x8]
10003633:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
10003637:	d8 c9                	fmul   st,st(1)
10003639:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1000363d:	db 40 0c             	fild   DWORD PTR [eax+0xc]
10003640:	d8 c9                	fmul   st,st(1)
10003642:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
10003646:	dd d8                	fstp   st(0)
10003648:	0f 8e a8 00 00 00    	jle    0x100036f6
1000364e:	53                   	push   ebx
1000364f:	56                   	push   esi
10003650:	57                   	push   edi
10003651:	8d 79 18             	lea    edi,[ecx+0x18]
10003654:	8d 74 24 2c          	lea    esi,[esp+0x2c]
10003658:	8b dd                	mov    ebx,ebp
1000365a:	d9 47 f0             	fld    DWORD PTR [edi-0x10]
1000365d:	d8 3d cc c1 00 10    	fdivr  DWORD PTR ds:0x1000c1cc
10003663:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
10003667:	8b 4f fc             	mov    ecx,DWORD PTR [edi-0x4]
1000366a:	8b 17                	mov    edx,DWORD PTR [edi]
1000366c:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
1000366f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10003672:	89 0e                	mov    DWORD PTR [esi],ecx
10003674:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
10003677:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000367a:	d9 c0                	fld    st(0)
1000367c:	d8 0d c8 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c8
10003682:	d9 5e 0c             	fstp   DWORD PTR [esi+0xc]
10003685:	d9 56 14             	fst    DWORD PTR [esi+0x14]
10003688:	d9 56 20             	fst    DWORD PTR [esi+0x20]
1000368b:	d9 c0                	fld    st(0)
1000368d:	d8 4f f4             	fmul   DWORD PTR [edi-0xc]
10003690:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
10003694:	d9 5e 18             	fstp   DWORD PTR [esi+0x18]
10003697:	d8 4f f8             	fmul   DWORD PTR [edi-0x8]
1000369a:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
1000369e:	d9 5e 1c             	fstp   DWORD PTR [esi+0x1c]
100036a1:	d9 47 e8             	fld    DWORD PTR [edi-0x18]
100036a4:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
100036aa:	e8 4d 0b 00 00       	call   0x100041fc
100036af:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100036b3:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
100036b7:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
100036bd:	d9 5e f4             	fstp   DWORD PTR [esi-0xc]
100036c0:	d9 47 ec             	fld    DWORD PTR [edi-0x14]
100036c3:	d8 0d c4 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c4
100036c9:	e8 2e 0b 00 00       	call   0x100041fc
100036ce:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100036d2:	83 c7 24             	add    edi,0x24
100036d5:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
100036d9:	83 c6 3c             	add    esi,0x3c
100036dc:	4b                   	dec    ebx
100036dd:	d8 0d c0 c1 00 10    	fmul   DWORD PTR ds:0x1000c1c0
100036e3:	d9 5e bc             	fstp   DWORD PTR [esi-0x44]
100036e6:	0f 85 6e ff ff ff    	jne    0x1000365a
100036ec:	8b 84 24 24 0f 00 00 	mov    eax,DWORD PTR [esp+0xf24]
100036f3:	5f                   	pop    edi
100036f4:	5e                   	pop    esi
100036f5:	5b                   	pop    ebx
100036f6:	50                   	push   eax
100036f7:	e8 34 00 00 00       	call   0x10003730
100036fc:	8b 8c 24 20 0f 00 00 	mov    ecx,DWORD PTR [esp+0xf20]
10003703:	51                   	push   ecx
10003704:	6a 01                	push   0x1
10003706:	e8 95 f5 ff ff       	call   0x10002ca0
1000370b:	83 c4 0c             	add    esp,0xc
1000370e:	8d 54 24 14          	lea    edx,[esp+0x14]
10003712:	52                   	push   edx
10003713:	55                   	push   ebp
10003714:	e8 09 06 00 00       	call   0x10003d22
10003719:	b8 01 00 00 00       	mov    eax,0x1
1000371e:	5d                   	pop    ebp
1000371f:	81 c4 10 0f 00 00    	add    esp,0xf10
10003725:	c2 08 00             	ret    0x8
10003728:	90                   	nop
10003729:	90                   	nop
1000372a:	90                   	nop
1000372b:	90                   	nop
1000372c:	90                   	nop
1000372d:	90                   	nop
1000372e:	90                   	nop
1000372f:	90                   	nop
10003730:	53                   	push   ebx
10003731:	56                   	push   esi
10003732:	e8 49 f2 ff ff       	call   0x10002980
10003737:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1000373b:	bb 01 00 00 00       	mov    ebx,0x1
10003740:	39 5e 20             	cmp    DWORD PTR [esi+0x20],ebx
10003743:	75 34                	jne    0x10003779
10003745:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10003748:	8b 0d e8 3d 0e 10    	mov    ecx,DWORD PTR ds:0x100e3de8
1000374e:	3b c8                	cmp    ecx,eax
10003750:	75 05                	jne    0x10003757
10003752:	84 58 34             	test   BYTE PTR [eax+0x34],bl
10003755:	74 22                	je     0x10003779
10003757:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1000375a:	8b 0d a0 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f55a0
10003760:	50                   	push   eax
10003761:	6a 02                	push   0x2
10003763:	51                   	push   ecx
10003764:	e8 c5 05 00 00       	call   0x10003d2e
10003769:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1000376c:	89 15 e8 3d 0e 10    	mov    DWORD PTR ds:0x100e3de8,edx
10003772:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10003775:	80 60 34 fe          	and    BYTE PTR [eax+0x34],0xfe
10003779:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1000377c:	85 c0                	test   eax,eax
1000377e:	74 0d                	je     0x1000378d
10003780:	50                   	push   eax
10003781:	e8 0a df ff ff       	call   0x10001690
10003786:	83 c4 04             	add    esp,0x4
10003789:	3b c6                	cmp    eax,esi
1000378b:	74 29                	je     0x100037b6
1000378d:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10003790:	50                   	push   eax
10003791:	e8 aa de ff ff       	call   0x10001640
10003796:	56                   	push   esi
10003797:	50                   	push   eax
10003798:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
1000379b:	e8 e0 de ff ff       	call   0x10001680
100037a0:	8a 4e 34             	mov    cl,BYTE PTR [esi+0x34]
100037a3:	83 c4 0c             	add    esp,0xc
100037a6:	0a cb                	or     cl,bl
100037a8:	88 4e 34             	mov    BYTE PTR [esi+0x34],cl
100037ab:	a1 0c 3e 0e 10       	mov    eax,ds:0x100e3e0c
100037b0:	40                   	inc    eax
100037b1:	a3 0c 3e 0e 10       	mov    ds:0x100e3e0c,eax
100037b6:	84 5e 34             	test   BYTE PTR [esi+0x34],bl
100037b9:	74 3b                	je     0x100037f6
100037bb:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
100037be:	57                   	push   edi
100037bf:	51                   	push   ecx
100037c0:	e8 db de ff ff       	call   0x100016a0
100037c5:	8b 56 28             	mov    edx,DWORD PTR [esi+0x28]
100037c8:	8b f8                	mov    edi,eax
100037ca:	89 57 10             	mov    DWORD PTR [edi+0x10],edx
100037cd:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
100037d0:	8d 47 0c             	lea    eax,[edi+0xc]
100037d3:	50                   	push   eax
100037d4:	51                   	push   ecx
100037d5:	e8 b6 eb ff ff       	call   0x10002390
100037da:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
100037dd:	a1 24 55 1f 10       	mov    eax,ds:0x101f5524
100037e2:	57                   	push   edi
100037e3:	52                   	push   edx
100037e4:	50                   	push   eax
100037e5:	e8 96 da ff ff       	call   0x10001280
100037ea:	8a 46 34             	mov    al,BYTE PTR [esi+0x34]
100037ed:	83 c4 18             	add    esp,0x18
100037f0:	24 fe                	and    al,0xfe
100037f2:	88 46 34             	mov    BYTE PTR [esi+0x34],al
100037f5:	5f                   	pop    edi
100037f6:	8b 0d 14 3e 0e 10    	mov    ecx,DWORD PTR ds:0x100e3e14
100037fc:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
100037ff:	51                   	push   ecx
10003800:	52                   	push   edx
10003801:	e8 aa de ff ff       	call   0x100016b0
10003806:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10003809:	50                   	push   eax
1000380a:	e8 91 de ff ff       	call   0x100016a0
1000380f:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
10003812:	83 c4 0c             	add    esp,0xc
10003815:	50                   	push   eax
10003816:	6a 03                	push   0x3
10003818:	51                   	push   ecx
10003819:	e8 12 de ff ff       	call   0x10001630
1000381e:	8b 15 a0 55 1f 10    	mov    edx,DWORD PTR ds:0x101f55a0
10003824:	83 c4 04             	add    esp,0x4
10003827:	50                   	push   eax
10003828:	52                   	push   edx
10003829:	e8 f2 f2 ff ff       	call   0x10002b20
1000382e:	83 c4 10             	add    esp,0x10
10003831:	5e                   	pop    esi
10003832:	5b                   	pop    ebx
10003833:	c3                   	ret
10003834:	90                   	nop
10003835:	90                   	nop
10003836:	90                   	nop
10003837:	90                   	nop
10003838:	90                   	nop
10003839:	90                   	nop
1000383a:	90                   	nop
1000383b:	90                   	nop
1000383c:	90                   	nop
1000383d:	90                   	nop
1000383e:	90                   	nop
1000383f:	90                   	nop
10003840:	53                   	push   ebx
10003841:	56                   	push   esi
10003842:	57                   	push   edi
10003843:	e8 38 f1 ff ff       	call   0x10002980
10003848:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
1000384c:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
10003850:	85 ff                	test   edi,edi
10003852:	b3 01                	mov    bl,0x1
10003854:	74 03                	je     0x10003859
10003856:	08 5e 34             	or     BYTE PTR [esi+0x34],bl
10003859:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
1000385c:	85 c0                	test   eax,eax
1000385e:	74 0d                	je     0x1000386d
10003860:	50                   	push   eax
10003861:	e8 2a de ff ff       	call   0x10001690
10003866:	83 c4 04             	add    esp,0x4
10003869:	3b c6                	cmp    eax,esi
1000386b:	74 29                	je     0x10003896
1000386d:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
10003870:	50                   	push   eax
10003871:	e8 ca dd ff ff       	call   0x10001640
10003876:	56                   	push   esi
10003877:	50                   	push   eax
10003878:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
1000387b:	e8 00 de ff ff       	call   0x10001680
10003880:	8a 4e 34             	mov    cl,BYTE PTR [esi+0x34]
10003883:	83 c4 0c             	add    esp,0xc
10003886:	0a cb                	or     cl,bl
10003888:	88 4e 34             	mov    BYTE PTR [esi+0x34],cl
1000388b:	a1 10 3e 0e 10       	mov    eax,ds:0x100e3e10
10003890:	40                   	inc    eax
10003891:	a3 10 3e 0e 10       	mov    ds:0x100e3e10,eax
10003896:	84 5e 34             	test   BYTE PTR [esi+0x34],bl
10003899:	74 1a                	je     0x100038b5
1000389b:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
1000389f:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
100038a2:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
100038a5:	51                   	push   ecx
100038a6:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
100038aa:	52                   	push   edx
100038ab:	50                   	push   eax
100038ac:	51                   	push   ecx
100038ad:	e8 8e fc ff ff       	call   0x10003540
100038b2:	83 c4 10             	add    esp,0x10
100038b5:	8a 46 34             	mov    al,BYTE PTR [esi+0x34]
100038b8:	85 ff                	test   edi,edi
100038ba:	74 04                	je     0x100038c0
100038bc:	0a c3                	or     al,bl
100038be:	eb 02                	jmp    0x100038c2
100038c0:	24 fe                	and    al,0xfe
100038c2:	88 46 34             	mov    BYTE PTR [esi+0x34],al
100038c5:	8b 15 14 3e 0e 10    	mov    edx,DWORD PTR ds:0x100e3e14
100038cb:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100038ce:	52                   	push   edx
100038cf:	50                   	push   eax
100038d0:	e8 db dd ff ff       	call   0x100016b0
100038d5:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
100038d8:	83 c4 08             	add    esp,0x8
100038db:	5f                   	pop    edi
100038dc:	5e                   	pop    esi
100038dd:	5b                   	pop    ebx
100038de:	c3                   	ret
100038df:	90                   	nop
100038e0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100038e4:	83 ec 14             	sub    esp,0x14
100038e7:	53                   	push   ebx
100038e8:	55                   	push   ebp
100038e9:	56                   	push   esi
100038ea:	8b 35 68 55 1f 10    	mov    esi,DWORD PTR ds:0x101f5568
100038f0:	3b c6                	cmp    eax,esi
100038f2:	57                   	push   edi
100038f3:	0f 8d 63 01 00 00    	jge    0x10003a5c
100038f9:	8b 35 6c 55 1f 10    	mov    esi,DWORD PTR ds:0x101f556c
100038ff:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
10003903:	3b fe                	cmp    edi,esi
10003905:	0f 8d 51 01 00 00    	jge    0x10003a5c
1000390b:	8b 59 08             	mov    ebx,DWORD PTR [ecx+0x8]
1000390e:	8b 79 0c             	mov    edi,DWORD PTR [ecx+0xc]
10003911:	8b 71 28             	mov    esi,DWORD PTR [ecx+0x28]
10003914:	8b eb                	mov    ebp,ebx
10003916:	85 d2                	test   edx,edx
10003918:	74 1d                	je     0x10003937
1000391a:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
1000391d:	8b 02                	mov    eax,DWORD PTR [edx]
1000391f:	8b f9                	mov    edi,ecx
10003921:	0f af fb             	imul   edi,ebx
10003924:	8b 5a 08             	mov    ebx,DWORD PTR [edx+0x8]
10003927:	03 f8                	add    edi,eax
10003929:	8d 34 7e             	lea    esi,[esi+edi*2]
1000392c:	8b 7a 0c             	mov    edi,DWORD PTR [edx+0xc]
1000392f:	2b f9                	sub    edi,ecx
10003931:	2b d8                	sub    ebx,eax
10003933:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10003937:	85 c0                	test   eax,eax
10003939:	7d 1b                	jge    0x10003956
1000393b:	03 d8                	add    ebx,eax
1000393d:	85 db                	test   ebx,ebx
1000393f:	0f 8e 17 01 00 00    	jle    0x10003a5c
10003945:	f7 d8                	neg    eax
10003947:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
1000394e:	00 
1000394f:	8d 34 46             	lea    esi,[esi+eax*2]
10003952:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
10003956:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1000395a:	85 c9                	test   ecx,ecx
1000395c:	7d 1c                	jge    0x1000397a
1000395e:	03 f9                	add    edi,ecx
10003960:	85 ff                	test   edi,edi
10003962:	0f 8e f4 00 00 00    	jle    0x10003a5c
10003968:	8b d5                	mov    edx,ebp
1000396a:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
10003971:	00 
10003972:	0f af d1             	imul   edx,ecx
10003975:	f7 da                	neg    edx
10003977:	8d 34 56             	lea    esi,[esi+edx*2]
1000397a:	8b 0d 68 55 1f 10    	mov    ecx,DWORD PTR ds:0x101f5568
10003980:	8d 14 03             	lea    edx,[ebx+eax*1]
10003983:	3b d1                	cmp    edx,ecx
10003985:	7c 04                	jl     0x1000398b
10003987:	2b c8                	sub    ecx,eax
10003989:	8b d9                	mov    ebx,ecx
1000398b:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
1000398f:	a1 6c 55 1f 10       	mov    eax,ds:0x101f556c
10003994:	8d 14 0f             	lea    edx,[edi+ecx*1]
10003997:	3b d0                	cmp    edx,eax
10003999:	7c 04                	jl     0x1000399f
1000399b:	2b c1                	sub    eax,ecx
1000399d:	8b f8                	mov    edi,eax
1000399f:	6a 00                	push   0x0
100039a1:	6a 09                	push   0x9
100039a3:	c7 44 24 18 14 00 00 	mov    DWORD PTR [esp+0x18],0x14
100039aa:	00 
100039ab:	e8 f0 f2 ff ff       	call   0x10002ca0
100039b0:	83 c4 08             	add    esp,0x8
100039b3:	8d 44 24 10          	lea    eax,[esp+0x10]
100039b7:	50                   	push   eax
100039b8:	6a 00                	push   0x0
100039ba:	6a 00                	push   0x0
100039bc:	6a 00                	push   0x0
100039be:	6a 01                	push   0x1
100039c0:	6a 01                	push   0x1
100039c2:	e8 73 03 00 00       	call   0x10003d3a
100039c7:	85 c0                	test   eax,eax
100039c9:	75 1b                	jne    0x100039e6
100039cb:	68 b8 e8 00 10       	push   0x1000e8b8
100039d0:	6a 07                	push   0x7
100039d2:	e8 49 df ff ff       	call   0x10001920
100039d7:	83 c4 08             	add    esp,0x8
100039da:	33 c0                	xor    eax,eax
100039dc:	5f                   	pop    edi
100039dd:	5e                   	pop    esi
100039de:	5d                   	pop    ebp
100039df:	5b                   	pop    ebx
100039e0:	83 c4 14             	add    esp,0x14
100039e3:	c2 08 00             	ret    0x8
100039e6:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
100039ea:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
100039ee:	d1 e8                	shr    eax,1
100039f0:	8b c8                	mov    ecx,eax
100039f2:	2b eb                	sub    ebp,ebx
100039f4:	0f af 4c 24 2c       	imul   ecx,DWORD PTR [esp+0x2c]
100039f9:	03 ca                	add    ecx,edx
100039fb:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
100039ff:	2b c3                	sub    eax,ebx
10003a01:	85 ff                	test   edi,edi
10003a03:	8d 0c 4a             	lea    ecx,[edx+ecx*2]
10003a06:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10003a0a:	7e 28                	jle    0x10003a34
10003a0c:	85 db                	test   ebx,ebx
10003a0e:	7e 17                	jle    0x10003a27
10003a10:	8b c3                	mov    eax,ebx
10003a12:	66 8b 16             	mov    dx,WORD PTR [esi]
10003a15:	66 83 fa 01          	cmp    dx,0x1
10003a19:	74 03                	je     0x10003a1e
10003a1b:	66 89 11             	mov    WORD PTR [ecx],dx
10003a1e:	83 c6 02             	add    esi,0x2
10003a21:	83 c1 02             	add    ecx,0x2
10003a24:	48                   	dec    eax
10003a25:	75 eb                	jne    0x10003a12
10003a27:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
10003a2b:	4f                   	dec    edi
10003a2c:	8d 34 6e             	lea    esi,[esi+ebp*2]
10003a2f:	8d 0c 41             	lea    ecx,[ecx+eax*2]
10003a32:	75 d8                	jne    0x10003a0c
10003a34:	6a 01                	push   0x1
10003a36:	6a 01                	push   0x1
10003a38:	e8 f7 02 00 00       	call   0x10003d34
10003a3d:	85 c0                	test   eax,eax
10003a3f:	75 1b                	jne    0x10003a5c
10003a41:	68 84 e8 00 10       	push   0x1000e884
10003a46:	6a 07                	push   0x7
10003a48:	e8 d3 de ff ff       	call   0x10001920
10003a4d:	83 c4 08             	add    esp,0x8
10003a50:	33 c0                	xor    eax,eax
10003a52:	5f                   	pop    edi
10003a53:	5e                   	pop    esi
10003a54:	5d                   	pop    ebp
10003a55:	5b                   	pop    ebx
10003a56:	83 c4 14             	add    esp,0x14
10003a59:	c2 08 00             	ret    0x8
10003a5c:	5f                   	pop    edi
10003a5d:	5e                   	pop    esi
10003a5e:	5d                   	pop    ebp
10003a5f:	b8 01 00 00 00       	mov    eax,0x1
10003a64:	5b                   	pop    ebx
10003a65:	83 c4 14             	add    esp,0x14
10003a68:	c2 08 00             	ret    0x8
10003a6b:	90                   	nop
10003a6c:	90                   	nop
10003a6d:	90                   	nop
10003a6e:	90                   	nop
10003a6f:	90                   	nop
10003a70:	33 c0                	xor    eax,eax
10003a72:	53                   	push   ebx
10003a73:	a3 00 3e 0e 10       	mov    ds:0x100e3e00,eax
10003a78:	56                   	push   esi
10003a79:	a3 04 3e 0e 10       	mov    ds:0x100e3e04,eax
10003a7e:	57                   	push   edi
10003a7f:	8b 3d fc c0 00 10    	mov    edi,DWORD PTR ds:0x1000c0fc
10003a85:	a3 08 3e 0e 10       	mov    ds:0x100e3e08,eax
10003a8a:	a3 0c 3e 0e 10       	mov    ds:0x100e3e0c,eax
10003a8f:	8b d9                	mov    ebx,ecx
10003a91:	6a 11                	push   0x11
10003a93:	a3 10 3e 0e 10       	mov    ds:0x100e3e10,eax
10003a98:	ff d7                	call   edi
10003a9a:	66 8b f0             	mov    si,ax
10003a9d:	6a 77                	push   0x77
10003a9f:	81 e6 01 80 00 00    	and    esi,0x8001
10003aa5:	ff d7                	call   edi
10003aa7:	33 ff                	xor    edi,edi
10003aa9:	25 01 80 00 00       	and    eax,0x8001
10003aae:	3b f7                	cmp    esi,edi
10003ab0:	74 26                	je     0x10003ad8
10003ab2:	3b c7                	cmp    eax,edi
10003ab4:	74 26                	je     0x10003adc
10003ab6:	39 3d 48 3a 0e 10    	cmp    DWORD PTR ds:0x100e3a48,edi
10003abc:	74 28                	je     0x10003ae6
10003abe:	a1 44 3a 0e 10       	mov    eax,ds:0x100e3a44
10003ac3:	33 c9                	xor    ecx,ecx
10003ac5:	3b c7                	cmp    eax,edi
10003ac7:	89 3d 48 3a 0e 10    	mov    DWORD PTR ds:0x100e3a48,edi
10003acd:	0f 94 c1             	sete   cl
10003ad0:	89 0d 44 3a 0e 10    	mov    DWORD PTR ds:0x100e3a44,ecx
10003ad6:	eb 0e                	jmp    0x10003ae6
10003ad8:	3b c7                	cmp    eax,edi
10003ada:	75 0a                	jne    0x10003ae6
10003adc:	c7 05 48 3a 0e 10 01 	mov    DWORD PTR ds:0x100e3a48,0x1
10003ae3:	00 00 00 
10003ae6:	39 3d 44 3a 0e 10    	cmp    DWORD PTR ds:0x100e3a44,edi
10003aec:	74 05                	je     0x10003af3
10003aee:	bb 01 00 00 00       	mov    ebx,0x1
10003af3:	e8 88 ee ff ff       	call   0x10002980
10003af8:	85 c0                	test   eax,eax
10003afa:	75 06                	jne    0x10003b02
10003afc:	5f                   	pop    edi
10003afd:	5e                   	pop    esi
10003afe:	5b                   	pop    ebx
10003aff:	c2 04 00             	ret    0x4
10003b02:	3b df                	cmp    ebx,edi
10003b04:	57                   	push   edi
10003b05:	74 04                	je     0x10003b0b
10003b07:	6a 01                	push   0x1
10003b09:	eb 01                	jmp    0x10003b0c
10003b0b:	57                   	push   edi
10003b0c:	e8 35 02 00 00       	call   0x10003d46
10003b11:	a1 38 e3 00 10       	mov    eax,ds:0x1000e338
10003b16:	3b c7                	cmp    eax,edi
10003b18:	57                   	push   edi
10003b19:	57                   	push   edi
10003b1a:	74 30                	je     0x10003b4c
10003b1c:	d9 05 38 55 1f 10    	fld    DWORD PTR ds:0x101f5538
10003b22:	e8 d5 06 00 00       	call   0x100041fc
10003b27:	d9 05 3c 55 1f 10    	fld    DWORD PTR ds:0x101f553c
10003b2d:	8b f0                	mov    esi,eax
10003b2f:	c1 e6 08             	shl    esi,0x8
10003b32:	e8 c5 06 00 00       	call   0x100041fc
10003b37:	d9 05 40 55 1f 10    	fld    DWORD PTR ds:0x101f5540
10003b3d:	0b f0                	or     esi,eax
10003b3f:	c1 e6 08             	shl    esi,0x8
10003b42:	e8 b5 06 00 00       	call   0x100041fc
10003b47:	0b f0                	or     esi,eax
10003b49:	56                   	push   esi
10003b4a:	eb 01                	jmp    0x10003b4d
10003b4c:	57                   	push   edi
10003b4d:	e8 ee 01 00 00       	call   0x10003d40
10003b52:	6a 01                	push   0x1
10003b54:	6a 01                	push   0x1
10003b56:	e8 eb 01 00 00       	call   0x10003d46
10003b5b:	a1 14 3e 0e 10       	mov    eax,ds:0x100e3e14
10003b60:	89 3d 68 e2 00 10    	mov    DWORD PTR ds:0x1000e268,edi
10003b66:	40                   	inc    eax
10003b67:	5f                   	pop    edi
10003b68:	a3 14 3e 0e 10       	mov    ds:0x100e3e14,eax
10003b6d:	5e                   	pop    esi
10003b6e:	b8 01 00 00 00       	mov    eax,0x1
10003b73:	5b                   	pop    ebx
10003b74:	c2 04 00             	ret    0x4
10003b77:	90                   	nop
10003b78:	90                   	nop
10003b79:	90                   	nop
10003b7a:	90                   	nop
10003b7b:	90                   	nop
10003b7c:	90                   	nop
10003b7d:	90                   	nop
10003b7e:	90                   	nop
10003b7f:	90                   	nop
10003b80:	6a 01                	push   0x1
10003b82:	e8 47 01 00 00       	call   0x10003cce
10003b87:	a1 5c 3a 0e 10       	mov    eax,ds:0x100e3a5c
10003b8c:	24 f7                	and    al,0xf7
10003b8e:	6a 06                	push   0x6
10003b90:	a3 5c 3a 0e 10       	mov    ds:0x100e3a5c,eax
10003b95:	e8 3a 01 00 00       	call   0x10003cd4
10003b9a:	8b 0d 5c 3a 0e 10    	mov    ecx,DWORD PTR ds:0x100e3a5c
10003ba0:	83 e1 fb             	and    ecx,0xfffffffb
10003ba3:	6a 01                	push   0x1
10003ba5:	89 0d 5c 3a 0e 10    	mov    DWORD PTR ds:0x100e3a5c,ecx
10003bab:	e8 9c 01 00 00       	call   0x10003d4c
10003bb0:	b8 01 00 00 00       	mov    eax,0x1
10003bb5:	c3                   	ret
10003bb6:	90                   	nop
10003bb7:	90                   	nop
10003bb8:	90                   	nop
10003bb9:	90                   	nop
10003bba:	90                   	nop
10003bbb:	90                   	nop
10003bbc:	90                   	nop
10003bbd:	90                   	nop
10003bbe:	90                   	nop
10003bbf:	90                   	nop
10003bc0:	a1 6c 55 1f 10       	mov    eax,ds:0x101f556c
10003bc5:	50                   	push   eax
10003bc6:	e8 95 e4 ff ff       	call   0x10002060
10003bcb:	33 c0                	xor    eax,eax
10003bcd:	83 c4 04             	add    esp,0x4
10003bd0:	a3 34 3a 0e 10       	mov    ds:0x100e3a34,eax
10003bd5:	a3 60 e2 00 10       	mov    ds:0x1000e260,eax
10003bda:	a3 64 e2 00 10       	mov    ds:0x1000e264,eax
10003bdf:	b8 01 00 00 00       	mov    eax,0x1
10003be4:	a3 4c 3a 0e 10       	mov    ds:0x100e3a4c,eax
10003be9:	c3                   	ret
10003bea:	90                   	nop
10003beb:	90                   	nop
10003bec:	90                   	nop
10003bed:	90                   	nop
10003bee:	90                   	nop
10003bef:	90                   	nop
10003bf0:	a1 34 3a 0e 10       	mov    eax,ds:0x100e3a34
10003bf5:	8b 0d 38 3a 0e 10    	mov    ecx,DWORD PTR ds:0x100e3a38
10003bfb:	a3 60 e2 00 10       	mov    ds:0x1000e260,eax
10003c00:	89 0d 64 e2 00 10    	mov    DWORD PTR ds:0x1000e264,ecx
10003c06:	c7 05 4c 3a 0e 10 00 	mov    DWORD PTR ds:0x100e3a4c,0x0
10003c0d:	00 00 00 
10003c10:	b8 01 00 00 00       	mov    eax,0x1
10003c15:	c3                   	ret
10003c16:	90                   	nop
10003c17:	90                   	nop
10003c18:	90                   	nop
10003c19:	90                   	nop
10003c1a:	90                   	nop
10003c1b:	90                   	nop
10003c1c:	90                   	nop
10003c1d:	90                   	nop
10003c1e:	90                   	nop
10003c1f:	90                   	nop
10003c20:	c7 05 4c 3a 0e 10 02 	mov    DWORD PTR ds:0x100e3a4c,0x2
10003c27:	00 00 00 
10003c2a:	b8 01 00 00 00       	mov    eax,0x1
10003c2f:	c3                   	ret
10003c30:	c7 05 4c 3a 0e 10 03 	mov    DWORD PTR ds:0x100e3a4c,0x3
10003c37:	00 00 00 
10003c3a:	b8 01 00 00 00       	mov    eax,0x1
10003c3f:	c3                   	ret
10003c40:	c7 05 4c 3a 0e 10 00 	mov    DWORD PTR ds:0x100e3a4c,0x0
10003c47:	00 00 00 
10003c4a:	b8 01 00 00 00       	mov    eax,0x1
10003c4f:	c3                   	ret
10003c50:	ff 25 a4 c1 00 10    	jmp    DWORD PTR ds:0x1000c1a4
10003c56:	ff 25 ac c1 00 10    	jmp    DWORD PTR ds:0x1000c1ac
10003c5c:	ff 25 a8 c1 00 10    	jmp    DWORD PTR ds:0x1000c1a8
10003c62:	ff 25 98 c1 00 10    	jmp    DWORD PTR ds:0x1000c198
10003c68:	ff 25 94 c1 00 10    	jmp    DWORD PTR ds:0x1000c194
10003c6e:	ff 25 90 c1 00 10    	jmp    DWORD PTR ds:0x1000c190
10003c74:	ff 25 8c c1 00 10    	jmp    DWORD PTR ds:0x1000c18c
10003c7a:	ff 25 88 c1 00 10    	jmp    DWORD PTR ds:0x1000c188
10003c80:	ff 25 84 c1 00 10    	jmp    DWORD PTR ds:0x1000c184
10003c86:	ff 25 80 c1 00 10    	jmp    DWORD PTR ds:0x1000c180
10003c8c:	ff 25 7c c1 00 10    	jmp    DWORD PTR ds:0x1000c17c
10003c92:	ff 25 78 c1 00 10    	jmp    DWORD PTR ds:0x1000c178
10003c98:	ff 25 74 c1 00 10    	jmp    DWORD PTR ds:0x1000c174
10003c9e:	ff 25 70 c1 00 10    	jmp    DWORD PTR ds:0x1000c170
10003ca4:	ff 25 6c c1 00 10    	jmp    DWORD PTR ds:0x1000c16c
10003caa:	ff 25 68 c1 00 10    	jmp    DWORD PTR ds:0x1000c168
10003cb0:	ff 25 64 c1 00 10    	jmp    DWORD PTR ds:0x1000c164
10003cb6:	ff 25 60 c1 00 10    	jmp    DWORD PTR ds:0x1000c160
10003cbc:	ff 25 5c c1 00 10    	jmp    DWORD PTR ds:0x1000c15c
10003cc2:	ff 25 58 c1 00 10    	jmp    DWORD PTR ds:0x1000c158
10003cc8:	ff 25 54 c1 00 10    	jmp    DWORD PTR ds:0x1000c154
10003cce:	ff 25 a0 c1 00 10    	jmp    DWORD PTR ds:0x1000c1a0
10003cd4:	ff 25 9c c1 00 10    	jmp    DWORD PTR ds:0x1000c19c
10003cda:	ff 25 48 c1 00 10    	jmp    DWORD PTR ds:0x1000c148
10003ce0:	ff 25 44 c1 00 10    	jmp    DWORD PTR ds:0x1000c144
10003ce6:	ff 25 40 c1 00 10    	jmp    DWORD PTR ds:0x1000c140
10003cec:	ff 25 3c c1 00 10    	jmp    DWORD PTR ds:0x1000c13c
10003cf2:	ff 25 38 c1 00 10    	jmp    DWORD PTR ds:0x1000c138
10003cf8:	ff 25 34 c1 00 10    	jmp    DWORD PTR ds:0x1000c134
10003cfe:	ff 25 30 c1 00 10    	jmp    DWORD PTR ds:0x1000c130
10003d04:	ff 25 2c c1 00 10    	jmp    DWORD PTR ds:0x1000c12c
10003d0a:	ff 25 28 c1 00 10    	jmp    DWORD PTR ds:0x1000c128
10003d10:	ff 25 24 c1 00 10    	jmp    DWORD PTR ds:0x1000c124
10003d16:	ff 25 20 c1 00 10    	jmp    DWORD PTR ds:0x1000c120
10003d1c:	ff 25 1c c1 00 10    	jmp    DWORD PTR ds:0x1000c11c
10003d22:	ff 25 18 c1 00 10    	jmp    DWORD PTR ds:0x1000c118
10003d28:	ff 25 14 c1 00 10    	jmp    DWORD PTR ds:0x1000c114
10003d2e:	ff 25 10 c1 00 10    	jmp    DWORD PTR ds:0x1000c110
10003d34:	ff 25 08 c1 00 10    	jmp    DWORD PTR ds:0x1000c108
10003d3a:	ff 25 04 c1 00 10    	jmp    DWORD PTR ds:0x1000c104
10003d40:	ff 25 0c c1 00 10    	jmp    DWORD PTR ds:0x1000c10c
10003d46:	ff 25 50 c1 00 10    	jmp    DWORD PTR ds:0x1000c150
10003d4c:	ff 25 4c c1 00 10    	jmp    DWORD PTR ds:0x1000c14c
10003d52:	56                   	push   esi
10003d53:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10003d57:	57                   	push   edi
10003d58:	83 cf ff             	or     edi,0xffffffff
10003d5b:	f6 46 0c 40          	test   BYTE PTR [esi+0xc],0x40
10003d5f:	74 06                	je     0x10003d67
10003d61:	83 66 0c 00          	and    DWORD PTR [esi+0xc],0x0
10003d65:	eb 17                	jmp    0x10003d7e
10003d67:	56                   	push   esi
10003d68:	e8 1b 07 00 00       	call   0x10004488
10003d6d:	56                   	push   esi
10003d6e:	e8 10 00 00 00       	call   0x10003d83
10003d73:	56                   	push   esi
10003d74:	8b f8                	mov    edi,eax
10003d76:	e8 5f 07 00 00       	call   0x100044da
10003d7b:	83 c4 0c             	add    esp,0xc
10003d7e:	8b c7                	mov    eax,edi
10003d80:	5f                   	pop    edi
10003d81:	5e                   	pop    esi
10003d82:	c3                   	ret
10003d83:	56                   	push   esi
10003d84:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10003d88:	57                   	push   edi
10003d89:	83 cf ff             	or     edi,0xffffffff
10003d8c:	f6 46 0c 83          	test   BYTE PTR [esi+0xc],0x83
10003d90:	74 34                	je     0x10003dc6
10003d92:	56                   	push   esi
10003d93:	e8 cd 08 00 00       	call   0x10004665
10003d98:	56                   	push   esi
10003d99:	8b f8                	mov    edi,eax
10003d9b:	e8 6c 08 00 00       	call   0x1000460c
10003da0:	ff 76 10             	push   DWORD PTR [esi+0x10]
10003da3:	e8 84 07 00 00       	call   0x1000452c
10003da8:	83 c4 0c             	add    esp,0xc
10003dab:	85 c0                	test   eax,eax
10003dad:	7d 05                	jge    0x10003db4
10003daf:	83 cf ff             	or     edi,0xffffffff
10003db2:	eb 12                	jmp    0x10003dc6
10003db4:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
10003db7:	85 c0                	test   eax,eax
10003db9:	74 0b                	je     0x10003dc6
10003dbb:	50                   	push   eax
10003dbc:	e8 8b 01 00 00       	call   0x10003f4c
10003dc1:	83 66 1c 00          	and    DWORD PTR [esi+0x1c],0x0
10003dc5:	59                   	pop    ecx
10003dc6:	83 66 0c 00          	and    DWORD PTR [esi+0xc],0x0
10003dca:	8b c7                	mov    eax,edi
10003dcc:	5f                   	pop    edi
10003dcd:	5e                   	pop    esi
10003dce:	c3                   	ret
10003dcf:	55                   	push   ebp
10003dd0:	8b ec                	mov    ebp,esp
10003dd2:	56                   	push   esi
10003dd3:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10003dd6:	e8 ad 06 00 00       	call   0x10004488
10003ddb:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10003dde:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10003de1:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10003de4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10003de7:	e8 12 00 00 00       	call   0x10003dfe
10003dec:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10003def:	8b f0                	mov    esi,eax
10003df1:	e8 e4 06 00 00       	call   0x100044da
10003df6:	83 c4 18             	add    esp,0x18
10003df9:	8b c6                	mov    eax,esi
10003dfb:	5e                   	pop    esi
10003dfc:	5d                   	pop    ebp
10003dfd:	c3                   	ret
10003dfe:	55                   	push   ebp
10003dff:	8b ec                	mov    ebp,esp
10003e01:	51                   	push   ecx
10003e02:	53                   	push   ebx
10003e03:	56                   	push   esi
10003e04:	57                   	push   edi
10003e05:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10003e08:	0f af 7d 10          	imul   edi,DWORD PTR [ebp+0x10]
10003e0c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10003e0f:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
10003e12:	85 ff                	test   edi,edi
10003e14:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10003e17:	8b df                	mov    ebx,edi
10003e19:	75 07                	jne    0x10003e22
10003e1b:	33 c0                	xor    eax,eax
10003e1d:	e9 cd 00 00 00       	jmp    0x10003eef
10003e22:	8b 75 14             	mov    esi,DWORD PTR [ebp+0x14]
10003e25:	66 f7 46 0c 0c 01    	test   WORD PTR [esi+0xc],0x10c
10003e2b:	74 08                	je     0x10003e35
10003e2d:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
10003e30:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
10003e33:	eb 07                	jmp    0x10003e3c
10003e35:	c7 45 14 00 10 00 00 	mov    DWORD PTR [ebp+0x14],0x1000
10003e3c:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
10003e3f:	81 e1 08 01 00 00    	and    ecx,0x108
10003e45:	74 29                	je     0x10003e70
10003e47:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10003e4a:	85 c0                	test   eax,eax
10003e4c:	74 22                	je     0x10003e70
10003e4e:	3b d8                	cmp    ebx,eax
10003e50:	8b fb                	mov    edi,ebx
10003e52:	72 02                	jb     0x10003e56
10003e54:	8b f8                	mov    edi,eax
10003e56:	57                   	push   edi
10003e57:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10003e5a:	ff 36                	push   DWORD PTR [esi]
10003e5c:	e8 1f 0c 00 00       	call   0x10004a80
10003e61:	29 7e 04             	sub    DWORD PTR [esi+0x4],edi
10003e64:	01 3e                	add    DWORD PTR [esi],edi
10003e66:	83 c4 0c             	add    esp,0xc
10003e69:	2b df                	sub    ebx,edi
10003e6b:	01 7d 08             	add    DWORD PTR [ebp+0x8],edi
10003e6e:	eb 46                	jmp    0x10003eb6
10003e70:	3b 5d 14             	cmp    ebx,DWORD PTR [ebp+0x14]
10003e73:	72 46                	jb     0x10003ebb
10003e75:	85 c9                	test   ecx,ecx
10003e77:	74 0b                	je     0x10003e84
10003e79:	56                   	push   esi
10003e7a:	e8 e6 07 00 00       	call   0x10004665
10003e7f:	85 c0                	test   eax,eax
10003e81:	59                   	pop    ecx
10003e82:	75 79                	jne    0x10003efd
10003e84:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
10003e88:	74 0d                	je     0x10003e97
10003e8a:	8b c3                	mov    eax,ebx
10003e8c:	33 d2                	xor    edx,edx
10003e8e:	f7 75 14             	div    DWORD PTR [ebp+0x14]
10003e91:	8b fb                	mov    edi,ebx
10003e93:	2b fa                	sub    edi,edx
10003e95:	eb 02                	jmp    0x10003e99
10003e97:	8b fb                	mov    edi,ebx
10003e99:	57                   	push   edi
10003e9a:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10003e9d:	ff 76 10             	push   DWORD PTR [esi+0x10]
10003ea0:	e8 e1 09 00 00       	call   0x10004886
10003ea5:	83 c4 0c             	add    esp,0xc
10003ea8:	83 f8 ff             	cmp    eax,0xffffffff
10003eab:	74 47                	je     0x10003ef4
10003ead:	01 45 08             	add    DWORD PTR [ebp+0x8],eax
10003eb0:	2b d8                	sub    ebx,eax
10003eb2:	3b c7                	cmp    eax,edi
10003eb4:	72 3e                	jb     0x10003ef4
10003eb6:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
10003eb9:	eb 29                	jmp    0x10003ee4
10003ebb:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10003ebe:	56                   	push   esi
10003ebf:	0f be 00             	movsx  eax,BYTE PTR [eax]
10003ec2:	50                   	push   eax
10003ec3:	e8 a6 08 00 00       	call   0x1000476e
10003ec8:	59                   	pop    ecx
10003ec9:	83 f8 ff             	cmp    eax,0xffffffff
10003ecc:	59                   	pop    ecx
10003ecd:	74 2e                	je     0x10003efd
10003ecf:	ff 45 08             	inc    DWORD PTR [ebp+0x8]
10003ed2:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
10003ed5:	4b                   	dec    ebx
10003ed6:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
10003ed9:	85 c0                	test   eax,eax
10003edb:	7f 07                	jg     0x10003ee4
10003edd:	c7 45 14 01 00 00 00 	mov    DWORD PTR [ebp+0x14],0x1
10003ee4:	85 db                	test   ebx,ebx
10003ee6:	0f 85 50 ff ff ff    	jne    0x10003e3c
10003eec:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10003eef:	5f                   	pop    edi
10003ef0:	5e                   	pop    esi
10003ef1:	5b                   	pop    ebx
10003ef2:	c9                   	leave
10003ef3:	c3                   	ret
10003ef4:	83 4e 0c 20          	or     DWORD PTR [esi+0xc],0x20
10003ef8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10003efb:	eb 02                	jmp    0x10003eff
10003efd:	8b c7                	mov    eax,edi
10003eff:	2b c3                	sub    eax,ebx
10003f01:	33 d2                	xor    edx,edx
10003f03:	f7 75 0c             	div    DWORD PTR [ebp+0xc]
10003f06:	eb e7                	jmp    0x10003eef
10003f08:	56                   	push   esi
10003f09:	e8 17 10 00 00       	call   0x10004f25
10003f0e:	8b f0                	mov    esi,eax
10003f10:	85 f6                	test   esi,esi
10003f12:	75 02                	jne    0x10003f16
10003f14:	5e                   	pop    esi
10003f15:	c3                   	ret
10003f16:	57                   	push   edi
10003f17:	56                   	push   esi
10003f18:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
10003f1c:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
10003f20:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
10003f24:	e8 8c 0e 00 00       	call   0x10004db5
10003f29:	56                   	push   esi
10003f2a:	8b f8                	mov    edi,eax
10003f2c:	e8 a9 05 00 00       	call   0x100044da
10003f31:	83 c4 14             	add    esp,0x14
10003f34:	8b c7                	mov    eax,edi
10003f36:	5f                   	pop    edi
10003f37:	5e                   	pop    esi
10003f38:	c3                   	ret
10003f39:	6a 40                	push   0x40
10003f3b:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
10003f3f:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
10003f43:	e8 c0 ff ff ff       	call   0x10003f08
10003f48:	83 c4 0c             	add    esp,0xc
10003f4b:	c3                   	ret
10003f4c:	55                   	push   ebp
10003f4d:	8b ec                	mov    ebp,esp
10003f4f:	6a ff                	push   0xffffffff
10003f51:	68 d8 c1 00 10       	push   0x1000c1d8
10003f56:	68 e0 62 00 10       	push   0x100062e0
10003f5b:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10003f61:	50                   	push   eax
10003f62:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10003f69:	83 ec 18             	sub    esp,0x18
10003f6c:	53                   	push   ebx
10003f6d:	56                   	push   esi
10003f6e:	57                   	push   edi
10003f6f:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10003f72:	85 f6                	test   esi,esi
10003f74:	0f 84 ac 00 00 00    	je     0x10004026
10003f7a:	a1 b4 5a 1f 10       	mov    eax,ds:0x101f5ab4
10003f7f:	83 f8 03             	cmp    eax,0x3
10003f82:	75 3b                	jne    0x10003fbf
10003f84:	6a 09                	push   0x9
10003f86:	e8 e6 21 00 00       	call   0x10006171
10003f8b:	59                   	pop    ecx
10003f8c:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
10003f90:	56                   	push   esi
10003f91:	e8 19 13 00 00       	call   0x100052af
10003f96:	59                   	pop    ecx
10003f97:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
10003f9a:	85 c0                	test   eax,eax
10003f9c:	74 09                	je     0x10003fa7
10003f9e:	56                   	push   esi
10003f9f:	50                   	push   eax
10003fa0:	e8 35 13 00 00       	call   0x100052da
10003fa5:	59                   	pop    ecx
10003fa6:	59                   	pop    ecx
10003fa7:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
10003fab:	e8 06 00 00 00       	call   0x10003fb6
10003fb0:	83 7d e4 00          	cmp    DWORD PTR [ebp-0x1c],0x0
10003fb4:	eb 51                	jmp    0x10004007
10003fb6:	6a 09                	push   0x9
10003fb8:	e8 15 22 00 00       	call   0x100061d2
10003fbd:	59                   	pop    ecx
10003fbe:	c3                   	ret
10003fbf:	83 f8 02             	cmp    eax,0x2
10003fc2:	75 53                	jne    0x10004017
10003fc4:	6a 09                	push   0x9
10003fc6:	e8 a6 21 00 00       	call   0x10006171
10003fcb:	59                   	pop    ecx
10003fcc:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
10003fd3:	8d 45 e0             	lea    eax,[ebp-0x20]
10003fd6:	50                   	push   eax
10003fd7:	8d 45 d8             	lea    eax,[ebp-0x28]
10003fda:	50                   	push   eax
10003fdb:	56                   	push   esi
10003fdc:	e8 33 1d 00 00       	call   0x10005d14
10003fe1:	83 c4 0c             	add    esp,0xc
10003fe4:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
10003fe7:	85 c0                	test   eax,eax
10003fe9:	74 0f                	je     0x10003ffa
10003feb:	50                   	push   eax
10003fec:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
10003fef:	ff 75 d8             	push   DWORD PTR [ebp-0x28]
10003ff2:	e8 74 1d 00 00       	call   0x10005d6b
10003ff7:	83 c4 0c             	add    esp,0xc
10003ffa:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
10003ffe:	e8 0b 00 00 00       	call   0x1000400e
10004003:	83 7d dc 00          	cmp    DWORD PTR [ebp-0x24],0x0
10004007:	75 1d                	jne    0x10004026
10004009:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000400c:	eb 0a                	jmp    0x10004018
1000400e:	6a 09                	push   0x9
10004010:	e8 bd 21 00 00       	call   0x100061d2
10004015:	59                   	pop    ecx
10004016:	c3                   	ret
10004017:	56                   	push   esi
10004018:	6a 00                	push   0x0
1000401a:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10004020:	ff 15 78 c0 00 10    	call   DWORD PTR ds:0x1000c078
10004026:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
10004029:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10004030:	5f                   	pop    edi
10004031:	5e                   	pop    esi
10004032:	5b                   	pop    ebx
10004033:	c9                   	leave
10004034:	c3                   	ret
10004035:	ff 35 e8 3a 0e 10    	push   DWORD PTR ds:0x100e3ae8
1000403b:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
1000403f:	e8 03 00 00 00       	call   0x10004047
10004044:	59                   	pop    ecx
10004045:	59                   	pop    ecx
10004046:	c3                   	ret
10004047:	83 7c 24 04 e0       	cmp    DWORD PTR [esp+0x4],0xffffffe0
1000404c:	77 22                	ja     0x10004070
1000404e:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
10004052:	e8 1c 00 00 00       	call   0x10004073
10004057:	85 c0                	test   eax,eax
10004059:	59                   	pop    ecx
1000405a:	75 16                	jne    0x10004072
1000405c:	39 44 24 08          	cmp    DWORD PTR [esp+0x8],eax
10004060:	74 10                	je     0x10004072
10004062:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
10004066:	e8 4d 23 00 00       	call   0x100063b8
1000406b:	85 c0                	test   eax,eax
1000406d:	59                   	pop    ecx
1000406e:	75 de                	jne    0x1000404e
10004070:	33 c0                	xor    eax,eax
10004072:	c3                   	ret
10004073:	55                   	push   ebp
10004074:	8b ec                	mov    ebp,esp
10004076:	6a ff                	push   0xffffffff
10004078:	68 f0 c1 00 10       	push   0x1000c1f0
1000407d:	68 e0 62 00 10       	push   0x100062e0
10004082:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10004088:	50                   	push   eax
10004089:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10004090:	83 ec 0c             	sub    esp,0xc
10004093:	53                   	push   ebx
10004094:	56                   	push   esi
10004095:	57                   	push   edi
10004096:	a1 b4 5a 1f 10       	mov    eax,ds:0x101f5ab4
1000409b:	83 f8 03             	cmp    eax,0x3
1000409e:	75 43                	jne    0x100040e3
100040a0:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100040a3:	3b 35 ac 5a 1f 10    	cmp    esi,DWORD PTR ds:0x101f5aac
100040a9:	0f 87 93 00 00 00    	ja     0x10004142
100040af:	6a 09                	push   0x9
100040b1:	e8 bb 20 00 00       	call   0x10006171
100040b6:	59                   	pop    ecx
100040b7:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
100040bb:	56                   	push   esi
100040bc:	e8 42 15 00 00       	call   0x10005603
100040c1:	59                   	pop    ecx
100040c2:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
100040c5:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
100040c9:	e8 0c 00 00 00       	call   0x100040da
100040ce:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
100040d1:	85 c0                	test   eax,eax
100040d3:	74 6d                	je     0x10004142
100040d5:	e9 86 00 00 00       	jmp    0x10004160
100040da:	6a 09                	push   0x9
100040dc:	e8 f1 20 00 00       	call   0x100061d2
100040e1:	59                   	pop    ecx
100040e2:	c3                   	ret
100040e3:	83 f8 02             	cmp    eax,0x2
100040e6:	75 5a                	jne    0x10004142
100040e8:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100040eb:	85 c0                	test   eax,eax
100040ed:	74 08                	je     0x100040f7
100040ef:	8d 70 0f             	lea    esi,[eax+0xf]
100040f2:	83 e6 f0             	and    esi,0xfffffff0
100040f5:	eb 03                	jmp    0x100040fa
100040f7:	6a 10                	push   0x10
100040f9:	5e                   	pop    esi
100040fa:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100040fd:	3b 35 bc 0b 01 10    	cmp    esi,DWORD PTR ds:0x10010bbc
10004103:	77 2e                	ja     0x10004133
10004105:	6a 09                	push   0x9
10004107:	e8 65 20 00 00       	call   0x10006171
1000410c:	59                   	pop    ecx
1000410d:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
10004114:	8b c6                	mov    eax,esi
10004116:	c1 e8 04             	shr    eax,0x4
10004119:	50                   	push   eax
1000411a:	e8 91 1c 00 00       	call   0x10005db0
1000411f:	59                   	pop    ecx
10004120:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
10004123:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
10004127:	e8 0d 00 00 00       	call   0x10004139
1000412c:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
1000412f:	85 c0                	test   eax,eax
10004131:	75 2d                	jne    0x10004160
10004133:	56                   	push   esi
10004134:	eb 1c                	jmp    0x10004152
10004136:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10004139:	6a 09                	push   0x9
1000413b:	e8 92 20 00 00       	call   0x100061d2
10004140:	59                   	pop    ecx
10004141:	c3                   	ret
10004142:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004145:	85 c0                	test   eax,eax
10004147:	75 03                	jne    0x1000414c
10004149:	6a 01                	push   0x1
1000414b:	58                   	pop    eax
1000414c:	83 c0 0f             	add    eax,0xf
1000414f:	24 f0                	and    al,0xf0
10004151:	50                   	push   eax
10004152:	6a 00                	push   0x0
10004154:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
1000415a:	ff 15 7c c0 00 10    	call   DWORD PTR ds:0x1000c07c
10004160:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
10004163:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1000416a:	5f                   	pop    edi
1000416b:	5e                   	pop    esi
1000416c:	5b                   	pop    ebx
1000416d:	c9                   	leave
1000416e:	c3                   	ret
1000416f:	53                   	push   ebx
10004170:	56                   	push   esi
10004171:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10004175:	57                   	push   edi
10004176:	56                   	push   esi
10004177:	e8 0c 03 00 00       	call   0x10004488
1000417c:	56                   	push   esi
1000417d:	e8 51 22 00 00       	call   0x100063d3
10004182:	8b f8                	mov    edi,eax
10004184:	8d 44 24 20          	lea    eax,[esp+0x20]
10004188:	50                   	push   eax
10004189:	ff 74 24 20          	push   DWORD PTR [esp+0x20]
1000418d:	56                   	push   esi
1000418e:	e8 f7 22 00 00       	call   0x1000648a
10004193:	56                   	push   esi
10004194:	57                   	push   edi
10004195:	8b d8                	mov    ebx,eax
10004197:	e8 c4 22 00 00       	call   0x10006460
1000419c:	56                   	push   esi
1000419d:	e8 38 03 00 00       	call   0x100044da
100041a2:	83 c4 20             	add    esp,0x20
100041a5:	8b c3                	mov    eax,ebx
100041a7:	5f                   	pop    edi
100041a8:	5e                   	pop    esi
100041a9:	5b                   	pop    ebx
100041aa:	c3                   	ret
100041ab:	e8 13 00 00 00       	call   0x100041c3
100041b0:	e8 2f 2b 00 00       	call   0x10006ce4
100041b5:	a3 64 3a 0e 10       	mov    ds:0x100e3a64,eax
100041ba:	e8 d5 2a 00 00       	call   0x10006c94
100041bf:	db e2                	fnclex
100041c1:	c3                   	ret
100041c2:	c3                   	ret
100041c3:	b8 bd 70 00 10       	mov    eax,0x100070bd
100041c8:	c7 05 9c 0c 01 10 67 	mov    DWORD PTR ds:0x10010c9c,0x10006d67
100041cf:	6d 00 10 
100041d2:	a3 98 0c 01 10       	mov    ds:0x10010c98,eax
100041d7:	c7 05 a0 0c 01 10 cd 	mov    DWORD PTR ds:0x10010ca0,0x10006dcd
100041de:	6d 00 10 
100041e1:	c7 05 a4 0c 01 10 0d 	mov    DWORD PTR ds:0x10010ca4,0x10006d0d
100041e8:	6d 00 10 
100041eb:	c7 05 a8 0c 01 10 b5 	mov    DWORD PTR ds:0x10010ca8,0x10006db5
100041f2:	6d 00 10 
100041f5:	a3 ac 0c 01 10       	mov    ds:0x10010cac,eax
100041fa:	c3                   	ret
100041fb:	cc                   	int3
100041fc:	55                   	push   ebp
100041fd:	8b ec                	mov    ebp,esp
100041ff:	83 c4 f4             	add    esp,0xfffffff4
10004202:	9b d9 7d fe          	fstcw  WORD PTR [ebp-0x2]
10004206:	9b                   	fwait
10004207:	66 8b 45 fe          	mov    ax,WORD PTR [ebp-0x2]
1000420b:	80 cc 0c             	or     ah,0xc
1000420e:	66 89 45 fc          	mov    WORD PTR [ebp-0x4],ax
10004212:	d9 6d fc             	fldcw  WORD PTR [ebp-0x4]
10004215:	df 7d f4             	fistp  QWORD PTR [ebp-0xc]
10004218:	d9 6d fe             	fldcw  WORD PTR [ebp-0x2]
1000421b:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1000421e:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
10004221:	c9                   	leave
10004222:	c3                   	ret
10004223:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10004227:	83 f8 01             	cmp    eax,0x1
1000422a:	0f 85 88 00 00 00    	jne    0x100042b8
10004230:	ff 15 84 c0 00 10    	call   DWORD PTR ds:0x1000c084
10004236:	6a 01                	push   0x1
10004238:	a3 fc 3a 0e 10       	mov    ds:0x100e3afc,eax
1000423d:	e8 20 0f 00 00       	call   0x10005162
10004242:	85 c0                	test   eax,eax
10004244:	59                   	pop    ecx
10004245:	74 3c                	je     0x10004283
10004247:	a1 fc 3a 0e 10       	mov    eax,ds:0x100e3afc
1000424c:	33 c9                	xor    ecx,ecx
1000424e:	8a 0d fd 3a 0e 10    	mov    cl,BYTE PTR ds:0x100e3afd
10004254:	25 ff 00 00 00       	and    eax,0xff
10004259:	c1 2d fc 3a 0e 10 10 	shr    DWORD PTR ds:0x100e3afc,0x10
10004260:	a3 04 3b 0e 10       	mov    ds:0x100e3b04,eax
10004265:	89 0d 08 3b 0e 10    	mov    DWORD PTR ds:0x100e3b08,ecx
1000426b:	c1 e0 08             	shl    eax,0x8
1000426e:	03 c1                	add    eax,ecx
10004270:	a3 00 3b 0e 10       	mov    ds:0x100e3b00,eax
10004275:	e8 d7 2f 00 00       	call   0x10007251
1000427a:	85 c0                	test   eax,eax
1000427c:	75 09                	jne    0x10004287
1000427e:	e8 3c 0f 00 00       	call   0x100051bf
10004283:	33 c0                	xor    eax,eax
10004285:	eb 72                	jmp    0x100042f9
10004287:	ff 15 80 c0 00 10    	call   DWORD PTR ds:0x1000c080
1000428d:	a3 c4 6a 1f 10       	mov    ds:0x101f6ac4,eax
10004292:	e8 5c 36 00 00       	call   0x100078f3
10004297:	a3 6c 3a 0e 10       	mov    ds:0x100e3a6c,eax
1000429c:	e8 3c 31 00 00       	call   0x100073dd
100042a1:	e8 00 34 00 00       	call   0x100076a6
100042a6:	e8 42 33 00 00       	call   0x100075ed
100042ab:	e8 83 2e 00 00       	call   0x10007133
100042b0:	ff 05 68 3a 0e 10    	inc    DWORD PTR ds:0x100e3a68
100042b6:	eb 3e                	jmp    0x100042f6
100042b8:	33 c9                	xor    ecx,ecx
100042ba:	3b c1                	cmp    eax,ecx
100042bc:	75 2c                	jne    0x100042ea
100042be:	39 0d 68 3a 0e 10    	cmp    DWORD PTR ds:0x100e3a68,ecx
100042c4:	7e bd                	jle    0x10004283
100042c6:	ff 0d 68 3a 0e 10    	dec    DWORD PTR ds:0x100e3a68
100042cc:	39 0d 34 3b 0e 10    	cmp    DWORD PTR ds:0x100e3b34,ecx
100042d2:	75 05                	jne    0x100042d9
100042d4:	e8 98 2e 00 00       	call   0x10007171
100042d9:	e8 bb 32 00 00       	call   0x10007599
100042de:	e8 c2 2f 00 00       	call   0x100072a5
100042e3:	e8 d7 0e 00 00       	call   0x100051bf
100042e8:	eb 0c                	jmp    0x100042f6
100042ea:	83 f8 03             	cmp    eax,0x3
100042ed:	75 07                	jne    0x100042f6
100042ef:	51                   	push   ecx
100042f0:	e8 48 30 00 00       	call   0x1000733d
100042f5:	59                   	pop    ecx
100042f6:	6a 01                	push   0x1
100042f8:	58                   	pop    eax
100042f9:	c2 0c 00             	ret    0xc
100042fc:	55                   	push   ebp
100042fd:	8b ec                	mov    ebp,esp
100042ff:	53                   	push   ebx
10004300:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10004303:	56                   	push   esi
10004304:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10004307:	57                   	push   edi
10004308:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1000430b:	85 f6                	test   esi,esi
1000430d:	75 09                	jne    0x10004318
1000430f:	83 3d 68 3a 0e 10 00 	cmp    DWORD PTR ds:0x100e3a68,0x0
10004316:	eb 26                	jmp    0x1000433e
10004318:	83 fe 01             	cmp    esi,0x1
1000431b:	74 05                	je     0x10004322
1000431d:	83 fe 02             	cmp    esi,0x2
10004320:	75 22                	jne    0x10004344
10004322:	a1 c8 6a 1f 10       	mov    eax,ds:0x101f6ac8
10004327:	85 c0                	test   eax,eax
10004329:	74 09                	je     0x10004334
1000432b:	57                   	push   edi
1000432c:	56                   	push   esi
1000432d:	53                   	push   ebx
1000432e:	ff d0                	call   eax
10004330:	85 c0                	test   eax,eax
10004332:	74 0c                	je     0x10004340
10004334:	57                   	push   edi
10004335:	56                   	push   esi
10004336:	53                   	push   ebx
10004337:	e8 e7 fe ff ff       	call   0x10004223
1000433c:	85 c0                	test   eax,eax
1000433e:	75 04                	jne    0x10004344
10004340:	33 c0                	xor    eax,eax
10004342:	eb 4e                	jmp    0x10004392
10004344:	57                   	push   edi
10004345:	56                   	push   esi
10004346:	53                   	push   ebx
10004347:	e8 d9 36 00 00       	call   0x10007a25
1000434c:	83 fe 01             	cmp    esi,0x1
1000434f:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10004352:	75 0c                	jne    0x10004360
10004354:	85 c0                	test   eax,eax
10004356:	75 37                	jne    0x1000438f
10004358:	57                   	push   edi
10004359:	50                   	push   eax
1000435a:	53                   	push   ebx
1000435b:	e8 c3 fe ff ff       	call   0x10004223
10004360:	85 f6                	test   esi,esi
10004362:	74 05                	je     0x10004369
10004364:	83 fe 03             	cmp    esi,0x3
10004367:	75 26                	jne    0x1000438f
10004369:	57                   	push   edi
1000436a:	56                   	push   esi
1000436b:	53                   	push   ebx
1000436c:	e8 b2 fe ff ff       	call   0x10004223
10004371:	85 c0                	test   eax,eax
10004373:	75 03                	jne    0x10004378
10004375:	21 45 0c             	and    DWORD PTR [ebp+0xc],eax
10004378:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
1000437c:	74 11                	je     0x1000438f
1000437e:	a1 c8 6a 1f 10       	mov    eax,ds:0x101f6ac8
10004383:	85 c0                	test   eax,eax
10004385:	74 08                	je     0x1000438f
10004387:	57                   	push   edi
10004388:	56                   	push   esi
10004389:	53                   	push   ebx
1000438a:	ff d0                	call   eax
1000438c:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1000438f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10004392:	5f                   	pop    edi
10004393:	5e                   	pop    esi
10004394:	5b                   	pop    ebx
10004395:	5d                   	pop    ebp
10004396:	c2 0c 00             	ret    0xc
10004399:	a1 74 3a 0e 10       	mov    eax,ds:0x100e3a74
1000439e:	83 f8 01             	cmp    eax,0x1
100043a1:	74 0d                	je     0x100043b0
100043a3:	85 c0                	test   eax,eax
100043a5:	75 0e                	jne    0x100043b5
100043a7:	83 3d 78 3a 0e 10 01 	cmp    DWORD PTR ds:0x100e3a78,0x1
100043ae:	75 05                	jne    0x100043b5
100043b0:	e8 76 36 00 00       	call   0x10007a2b
100043b5:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
100043b9:	e8 a6 36 00 00       	call   0x10007a64
100043be:	68 ff 00 00 00       	push   0xff
100043c3:	ff 15 00 e9 00 10    	call   DWORD PTR ds:0x1000e900
100043c9:	59                   	pop    ecx
100043ca:	59                   	pop    ecx
100043cb:	c3                   	ret
100043cc:	a1 c0 6a 1f 10       	mov    eax,ds:0x101f6ac0
100043d1:	56                   	push   esi
100043d2:	6a 14                	push   0x14
100043d4:	85 c0                	test   eax,eax
100043d6:	5e                   	pop    esi
100043d7:	75 07                	jne    0x100043e0
100043d9:	b8 00 02 00 00       	mov    eax,0x200
100043de:	eb 06                	jmp    0x100043e6
100043e0:	3b c6                	cmp    eax,esi
100043e2:	7d 07                	jge    0x100043eb
100043e4:	8b c6                	mov    eax,esi
100043e6:	a3 c0 6a 1f 10       	mov    ds:0x101f6ac0,eax
100043eb:	6a 04                	push   0x4
100043ed:	50                   	push   eax
100043ee:	e8 c4 37 00 00       	call   0x10007bb7
100043f3:	59                   	pop    ecx
100043f4:	a3 b8 5a 1f 10       	mov    ds:0x101f5ab8,eax
100043f9:	85 c0                	test   eax,eax
100043fb:	59                   	pop    ecx
100043fc:	75 21                	jne    0x1000441f
100043fe:	6a 04                	push   0x4
10004400:	56                   	push   esi
10004401:	89 35 c0 6a 1f 10    	mov    DWORD PTR ds:0x101f6ac0,esi
10004407:	e8 ab 37 00 00       	call   0x10007bb7
1000440c:	59                   	pop    ecx
1000440d:	a3 b8 5a 1f 10       	mov    ds:0x101f5ab8,eax
10004412:	85 c0                	test   eax,eax
10004414:	59                   	pop    ecx
10004415:	75 08                	jne    0x1000441f
10004417:	6a 1a                	push   0x1a
10004419:	e8 7b ff ff ff       	call   0x10004399
1000441e:	59                   	pop    ecx
1000441f:	33 c9                	xor    ecx,ecx
10004421:	b8 08 e9 00 10       	mov    eax,0x1000e908
10004426:	8b 15 b8 5a 1f 10    	mov    edx,DWORD PTR ds:0x101f5ab8
1000442c:	89 04 11             	mov    DWORD PTR [ecx+edx*1],eax
1000442f:	83 c0 20             	add    eax,0x20
10004432:	83 c1 04             	add    ecx,0x4
10004435:	3d 88 eb 00 10       	cmp    eax,0x1000eb88
1000443a:	7c ea                	jl     0x10004426
1000443c:	33 c9                	xor    ecx,ecx
1000443e:	ba 18 e9 00 10       	mov    edx,0x1000e918
10004443:	8b f1                	mov    esi,ecx
10004445:	8b c1                	mov    eax,ecx
10004447:	c1 fe 05             	sar    esi,0x5
1000444a:	83 e0 1f             	and    eax,0x1f
1000444d:	8b 34 b5 80 59 1f 10 	mov    esi,DWORD PTR [esi*4+0x101f5980]
10004454:	8d 04 c0             	lea    eax,[eax+eax*8]
10004457:	8b 04 86             	mov    eax,DWORD PTR [esi+eax*4]
1000445a:	83 f8 ff             	cmp    eax,0xffffffff
1000445d:	74 04                	je     0x10004463
1000445f:	85 c0                	test   eax,eax
10004461:	75 03                	jne    0x10004466
10004463:	83 0a ff             	or     DWORD PTR [edx],0xffffffff
10004466:	83 c2 20             	add    edx,0x20
10004469:	41                   	inc    ecx
1000446a:	81 fa 78 e9 00 10    	cmp    edx,0x1000e978
10004470:	7c d1                	jl     0x10004443
10004472:	5e                   	pop    esi
10004473:	c3                   	ret
10004474:	e8 48 02 00 00       	call   0x100046c1
10004479:	80 3d 30 3b 0e 10 00 	cmp    BYTE PTR ds:0x100e3b30,0x0
10004480:	74 05                	je     0x10004487
10004482:	e9 6d 38 00 00       	jmp    0x10007cf4
10004487:	c3                   	ret
10004488:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000448c:	b9 08 e9 00 10       	mov    ecx,0x1000e908
10004491:	3b c1                	cmp    eax,ecx
10004493:	72 17                	jb     0x100044ac
10004495:	3d 68 eb 00 10       	cmp    eax,0x1000eb68
1000449a:	77 10                	ja     0x100044ac
1000449c:	2b c1                	sub    eax,ecx
1000449e:	c1 f8 05             	sar    eax,0x5
100044a1:	83 c0 1c             	add    eax,0x1c
100044a4:	50                   	push   eax
100044a5:	e8 c7 1c 00 00       	call   0x10006171
100044aa:	59                   	pop    ecx
100044ab:	c3                   	ret
100044ac:	83 c0 20             	add    eax,0x20
100044af:	50                   	push   eax
100044b0:	ff 15 88 c0 00 10    	call   DWORD PTR ds:0x1000c088
100044b6:	c3                   	ret
100044b7:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100044bb:	83 f8 14             	cmp    eax,0x14
100044be:	7d 0b                	jge    0x100044cb
100044c0:	83 c0 1c             	add    eax,0x1c
100044c3:	50                   	push   eax
100044c4:	e8 a8 1c 00 00       	call   0x10006171
100044c9:	59                   	pop    ecx
100044ca:	c3                   	ret
100044cb:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100044cf:	83 c0 20             	add    eax,0x20
100044d2:	50                   	push   eax
100044d3:	ff 15 88 c0 00 10    	call   DWORD PTR ds:0x1000c088
100044d9:	c3                   	ret
100044da:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100044de:	b9 08 e9 00 10       	mov    ecx,0x1000e908
100044e3:	3b c1                	cmp    eax,ecx
100044e5:	72 17                	jb     0x100044fe
100044e7:	3d 68 eb 00 10       	cmp    eax,0x1000eb68
100044ec:	77 10                	ja     0x100044fe
100044ee:	2b c1                	sub    eax,ecx
100044f0:	c1 f8 05             	sar    eax,0x5
100044f3:	83 c0 1c             	add    eax,0x1c
100044f6:	50                   	push   eax
100044f7:	e8 d6 1c 00 00       	call   0x100061d2
100044fc:	59                   	pop    ecx
100044fd:	c3                   	ret
100044fe:	83 c0 20             	add    eax,0x20
10004501:	50                   	push   eax
10004502:	ff 15 8c c0 00 10    	call   DWORD PTR ds:0x1000c08c
10004508:	c3                   	ret
10004509:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000450d:	83 f8 14             	cmp    eax,0x14
10004510:	7d 0b                	jge    0x1000451d
10004512:	83 c0 1c             	add    eax,0x1c
10004515:	50                   	push   eax
10004516:	e8 b7 1c 00 00       	call   0x100061d2
1000451b:	59                   	pop    ecx
1000451c:	c3                   	ret
1000451d:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10004521:	83 c0 20             	add    eax,0x20
10004524:	50                   	push   eax
10004525:	ff 15 8c c0 00 10    	call   DWORD PTR ds:0x1000c08c
1000452b:	c3                   	ret
1000452c:	56                   	push   esi
1000452d:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10004531:	3b 35 80 5a 1f 10    	cmp    esi,DWORD PTR ds:0x101f5a80
10004537:	73 38                	jae    0x10004571
10004539:	8b ce                	mov    ecx,esi
1000453b:	8b c6                	mov    eax,esi
1000453d:	c1 f9 05             	sar    ecx,0x5
10004540:	83 e0 1f             	and    eax,0x1f
10004543:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
1000454a:	8d 04 c0             	lea    eax,[eax+eax*8]
1000454d:	f6 44 81 04 01       	test   BYTE PTR [ecx+eax*4+0x4],0x1
10004552:	74 1d                	je     0x10004571
10004554:	57                   	push   edi
10004555:	56                   	push   esi
10004556:	e8 ff 3a 00 00       	call   0x1000805a
1000455b:	56                   	push   esi
1000455c:	e8 28 00 00 00       	call   0x10004589
10004561:	56                   	push   esi
10004562:	8b f8                	mov    edi,eax
10004564:	e8 50 3b 00 00       	call   0x100080b9
10004569:	83 c4 0c             	add    esp,0xc
1000456c:	8b c7                	mov    eax,edi
1000456e:	5f                   	pop    edi
1000456f:	5e                   	pop    esi
10004570:	c3                   	ret
10004571:	e8 72 38 00 00       	call   0x10007de8
10004576:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
1000457c:	e8 70 38 00 00       	call   0x10007df1
10004581:	83 20 00             	and    DWORD PTR [eax],0x0
10004584:	83 c8 ff             	or     eax,0xffffffff
10004587:	5e                   	pop    esi
10004588:	c3                   	ret
10004589:	56                   	push   esi
1000458a:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1000458e:	57                   	push   edi
1000458f:	56                   	push   esi
10004590:	e8 83 3a 00 00       	call   0x10008018
10004595:	83 f8 ff             	cmp    eax,0xffffffff
10004598:	59                   	pop    ecx
10004599:	74 3c                	je     0x100045d7
1000459b:	83 fe 01             	cmp    esi,0x1
1000459e:	74 05                	je     0x100045a5
100045a0:	83 fe 02             	cmp    esi,0x2
100045a3:	75 16                	jne    0x100045bb
100045a5:	6a 02                	push   0x2
100045a7:	e8 6c 3a 00 00       	call   0x10008018
100045ac:	6a 01                	push   0x1
100045ae:	8b f8                	mov    edi,eax
100045b0:	e8 63 3a 00 00       	call   0x10008018
100045b5:	59                   	pop    ecx
100045b6:	3b c7                	cmp    eax,edi
100045b8:	59                   	pop    ecx
100045b9:	74 1c                	je     0x100045d7
100045bb:	56                   	push   esi
100045bc:	e8 57 3a 00 00       	call   0x10008018
100045c1:	59                   	pop    ecx
100045c2:	50                   	push   eax
100045c3:	ff 15 94 c0 00 10    	call   DWORD PTR ds:0x1000c094
100045c9:	85 c0                	test   eax,eax
100045cb:	75 0a                	jne    0x100045d7
100045cd:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
100045d3:	8b f8                	mov    edi,eax
100045d5:	eb 02                	jmp    0x100045d9
100045d7:	33 ff                	xor    edi,edi
100045d9:	56                   	push   esi
100045da:	e8 ba 39 00 00       	call   0x10007f99
100045df:	8b c6                	mov    eax,esi
100045e1:	83 e6 1f             	and    esi,0x1f
100045e4:	c1 f8 05             	sar    eax,0x5
100045e7:	59                   	pop    ecx
100045e8:	8b 04 85 80 59 1f 10 	mov    eax,DWORD PTR [eax*4+0x101f5980]
100045ef:	8d 0c f6             	lea    ecx,[esi+esi*8]
100045f2:	80 64 88 04 00       	and    BYTE PTR [eax+ecx*4+0x4],0x0
100045f7:	85 ff                	test   edi,edi
100045f9:	74 0c                	je     0x10004607
100045fb:	57                   	push   edi
100045fc:	e8 74 37 00 00       	call   0x10007d75
10004601:	59                   	pop    ecx
10004602:	83 c8 ff             	or     eax,0xffffffff
10004605:	eb 02                	jmp    0x10004609
10004607:	33 c0                	xor    eax,eax
10004609:	5f                   	pop    edi
1000460a:	5e                   	pop    esi
1000460b:	c3                   	ret
1000460c:	56                   	push   esi
1000460d:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10004611:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10004614:	a8 83                	test   al,0x83
10004616:	74 1d                	je     0x10004635
10004618:	a8 08                	test   al,0x8
1000461a:	74 19                	je     0x10004635
1000461c:	ff 76 08             	push   DWORD PTR [esi+0x8]
1000461f:	e8 28 f9 ff ff       	call   0x10003f4c
10004624:	66 81 66 0c f7 fb    	and    WORD PTR [esi+0xc],0xfbf7
1000462a:	33 c0                	xor    eax,eax
1000462c:	59                   	pop    ecx
1000462d:	89 06                	mov    DWORD PTR [esi],eax
1000462f:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
10004632:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10004635:	5e                   	pop    esi
10004636:	c3                   	ret
10004637:	56                   	push   esi
10004638:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1000463c:	56                   	push   esi
1000463d:	e8 23 00 00 00       	call   0x10004665
10004642:	85 c0                	test   eax,eax
10004644:	59                   	pop    ecx
10004645:	74 05                	je     0x1000464c
10004647:	83 c8 ff             	or     eax,0xffffffff
1000464a:	5e                   	pop    esi
1000464b:	c3                   	ret
1000464c:	f6 46 0d 40          	test   BYTE PTR [esi+0xd],0x40
10004650:	74 0f                	je     0x10004661
10004652:	ff 76 10             	push   DWORD PTR [esi+0x10]
10004655:	e8 81 3a 00 00       	call   0x100080db
1000465a:	f7 d8                	neg    eax
1000465c:	59                   	pop    ecx
1000465d:	5e                   	pop    esi
1000465e:	1b c0                	sbb    eax,eax
10004660:	c3                   	ret
10004661:	33 c0                	xor    eax,eax
10004663:	5e                   	pop    esi
10004664:	c3                   	ret
10004665:	53                   	push   ebx
10004666:	56                   	push   esi
10004667:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1000466b:	33 db                	xor    ebx,ebx
1000466d:	57                   	push   edi
1000466e:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10004671:	8b c8                	mov    ecx,eax
10004673:	83 e1 03             	and    ecx,0x3
10004676:	80 f9 02             	cmp    cl,0x2
10004679:	75 37                	jne    0x100046b2
1000467b:	66 a9 08 01          	test   ax,0x108
1000467f:	74 31                	je     0x100046b2
10004681:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10004684:	8b 3e                	mov    edi,DWORD PTR [esi]
10004686:	2b f8                	sub    edi,eax
10004688:	85 ff                	test   edi,edi
1000468a:	7e 26                	jle    0x100046b2
1000468c:	57                   	push   edi
1000468d:	50                   	push   eax
1000468e:	ff 76 10             	push   DWORD PTR [esi+0x10]
10004691:	e8 f0 01 00 00       	call   0x10004886
10004696:	83 c4 0c             	add    esp,0xc
10004699:	3b c7                	cmp    eax,edi
1000469b:	75 0e                	jne    0x100046ab
1000469d:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100046a0:	a8 80                	test   al,0x80
100046a2:	74 0e                	je     0x100046b2
100046a4:	24 fd                	and    al,0xfd
100046a6:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
100046a9:	eb 07                	jmp    0x100046b2
100046ab:	83 4e 0c 20          	or     DWORD PTR [esi+0xc],0x20
100046af:	83 cb ff             	or     ebx,0xffffffff
100046b2:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100046b5:	83 66 04 00          	and    DWORD PTR [esi+0x4],0x0
100046b9:	89 06                	mov    DWORD PTR [esi],eax
100046bb:	5f                   	pop    edi
100046bc:	8b c3                	mov    eax,ebx
100046be:	5e                   	pop    esi
100046bf:	5b                   	pop    ebx
100046c0:	c3                   	ret
100046c1:	6a 01                	push   0x1
100046c3:	e8 02 00 00 00       	call   0x100046ca
100046c8:	59                   	pop    ecx
100046c9:	c3                   	ret
100046ca:	53                   	push   ebx
100046cb:	56                   	push   esi
100046cc:	57                   	push   edi
100046cd:	6a 02                	push   0x2
100046cf:	33 db                	xor    ebx,ebx
100046d1:	33 ff                	xor    edi,edi
100046d3:	e8 99 1a 00 00       	call   0x10006171
100046d8:	33 f6                	xor    esi,esi
100046da:	59                   	pop    ecx
100046db:	39 35 c0 6a 1f 10    	cmp    DWORD PTR ds:0x101f6ac0,esi
100046e1:	7e 74                	jle    0x10004757
100046e3:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
100046e8:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
100046eb:	85 c0                	test   eax,eax
100046ed:	74 5f                	je     0x1000474e
100046ef:	f6 40 0c 83          	test   BYTE PTR [eax+0xc],0x83
100046f3:	74 59                	je     0x1000474e
100046f5:	50                   	push   eax
100046f6:	56                   	push   esi
100046f7:	e8 bb fd ff ff       	call   0x100044b7
100046fc:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10004701:	59                   	pop    ecx
10004702:	59                   	pop    ecx
10004703:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
10004706:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
10004709:	f6 c1 83             	test   cl,0x83
1000470c:	74 30                	je     0x1000473e
1000470e:	83 7c 24 10 01       	cmp    DWORD PTR [esp+0x10],0x1
10004713:	75 0f                	jne    0x10004724
10004715:	50                   	push   eax
10004716:	e8 1c ff ff ff       	call   0x10004637
1000471b:	83 f8 ff             	cmp    eax,0xffffffff
1000471e:	59                   	pop    ecx
1000471f:	74 1d                	je     0x1000473e
10004721:	43                   	inc    ebx
10004722:	eb 1a                	jmp    0x1000473e
10004724:	83 7c 24 10 00       	cmp    DWORD PTR [esp+0x10],0x0
10004729:	75 13                	jne    0x1000473e
1000472b:	f6 c1 02             	test   cl,0x2
1000472e:	74 0e                	je     0x1000473e
10004730:	50                   	push   eax
10004731:	e8 01 ff ff ff       	call   0x10004637
10004736:	83 f8 ff             	cmp    eax,0xffffffff
10004739:	59                   	pop    ecx
1000473a:	75 02                	jne    0x1000473e
1000473c:	0b f8                	or     edi,eax
1000473e:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10004743:	ff 34 b0             	push   DWORD PTR [eax+esi*4]
10004746:	56                   	push   esi
10004747:	e8 bd fd ff ff       	call   0x10004509
1000474c:	59                   	pop    ecx
1000474d:	59                   	pop    ecx
1000474e:	46                   	inc    esi
1000474f:	3b 35 c0 6a 1f 10    	cmp    esi,DWORD PTR ds:0x101f6ac0
10004755:	7c 8c                	jl     0x100046e3
10004757:	6a 02                	push   0x2
10004759:	e8 74 1a 00 00       	call   0x100061d2
1000475e:	83 7c 24 14 01       	cmp    DWORD PTR [esp+0x14],0x1
10004763:	59                   	pop    ecx
10004764:	8b c3                	mov    eax,ebx
10004766:	74 02                	je     0x1000476a
10004768:	8b c7                	mov    eax,edi
1000476a:	5f                   	pop    edi
1000476b:	5e                   	pop    esi
1000476c:	5b                   	pop    ebx
1000476d:	c3                   	ret
1000476e:	55                   	push   ebp
1000476f:	8b ec                	mov    ebp,esp
10004771:	53                   	push   ebx
10004772:	56                   	push   esi
10004773:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10004776:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10004779:	8b 5e 10             	mov    ebx,DWORD PTR [esi+0x10]
1000477c:	a8 82                	test   al,0x82
1000477e:	0f 84 f6 00 00 00    	je     0x1000487a
10004784:	a8 40                	test   al,0x40
10004786:	0f 85 ee 00 00 00    	jne    0x1000487a
1000478c:	a8 01                	test   al,0x1
1000478e:	74 16                	je     0x100047a6
10004790:	83 66 04 00          	and    DWORD PTR [esi+0x4],0x0
10004794:	a8 10                	test   al,0x10
10004796:	0f 84 de 00 00 00    	je     0x1000487a
1000479c:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
1000479f:	24 fe                	and    al,0xfe
100047a1:	89 0e                	mov    DWORD PTR [esi],ecx
100047a3:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
100047a6:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100047a9:	83 66 04 00          	and    DWORD PTR [esi+0x4],0x0
100047ad:	83 65 0c 00          	and    DWORD PTR [ebp+0xc],0x0
100047b1:	24 ef                	and    al,0xef
100047b3:	0c 02                	or     al,0x2
100047b5:	66 a9 0c 01          	test   ax,0x10c
100047b9:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
100047bc:	75 22                	jne    0x100047e0
100047be:	81 fe 28 e9 00 10    	cmp    esi,0x1000e928
100047c4:	74 08                	je     0x100047ce
100047c6:	81 fe 48 e9 00 10    	cmp    esi,0x1000e948
100047cc:	75 0b                	jne    0x100047d9
100047ce:	53                   	push   ebx
100047cf:	e8 b6 3a 00 00       	call   0x1000828a
100047d4:	85 c0                	test   eax,eax
100047d6:	59                   	pop    ecx
100047d7:	75 07                	jne    0x100047e0
100047d9:	56                   	push   esi
100047da:	e8 67 3a 00 00       	call   0x10008246
100047df:	59                   	pop    ecx
100047e0:	66 f7 46 0c 08 01    	test   WORD PTR [esi+0xc],0x108
100047e6:	57                   	push   edi
100047e7:	74 67                	je     0x10004850
100047e9:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
100047ec:	8b 3e                	mov    edi,DWORD PTR [esi]
100047ee:	2b f8                	sub    edi,eax
100047f0:	8d 48 01             	lea    ecx,[eax+0x1]
100047f3:	89 0e                	mov    DWORD PTR [esi],ecx
100047f5:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100047f8:	49                   	dec    ecx
100047f9:	85 ff                	test   edi,edi
100047fb:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
100047fe:	7e 10                	jle    0x10004810
10004800:	57                   	push   edi
10004801:	50                   	push   eax
10004802:	53                   	push   ebx
10004803:	e8 7e 00 00 00       	call   0x10004886
10004808:	83 c4 0c             	add    esp,0xc
1000480b:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1000480e:	eb 36                	jmp    0x10004846
10004810:	83 fb ff             	cmp    ebx,0xffffffff
10004813:	74 19                	je     0x1000482e
10004815:	8b cb                	mov    ecx,ebx
10004817:	8b c3                	mov    eax,ebx
10004819:	c1 f9 05             	sar    ecx,0x5
1000481c:	83 e0 1f             	and    eax,0x1f
1000481f:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
10004826:	8d 04 c0             	lea    eax,[eax+eax*8]
10004829:	8d 04 81             	lea    eax,[ecx+eax*4]
1000482c:	eb 05                	jmp    0x10004833
1000482e:	b8 b8 0c 01 10       	mov    eax,0x10010cb8
10004833:	f6 40 04 20          	test   BYTE PTR [eax+0x4],0x20
10004837:	74 0d                	je     0x10004846
10004839:	6a 02                	push   0x2
1000483b:	6a 00                	push   0x0
1000483d:	53                   	push   ebx
1000483e:	e8 2b 39 00 00       	call   0x1000816e
10004843:	83 c4 0c             	add    esp,0xc
10004846:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10004849:	8a 4d 08             	mov    cl,BYTE PTR [ebp+0x8]
1000484c:	88 08                	mov    BYTE PTR [eax],cl
1000484e:	eb 14                	jmp    0x10004864
10004850:	6a 01                	push   0x1
10004852:	8d 45 08             	lea    eax,[ebp+0x8]
10004855:	5f                   	pop    edi
10004856:	57                   	push   edi
10004857:	50                   	push   eax
10004858:	53                   	push   ebx
10004859:	e8 28 00 00 00       	call   0x10004886
1000485e:	83 c4 0c             	add    esp,0xc
10004861:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10004864:	39 7d 0c             	cmp    DWORD PTR [ebp+0xc],edi
10004867:	5f                   	pop    edi
10004868:	74 06                	je     0x10004870
1000486a:	83 4e 0c 20          	or     DWORD PTR [esi+0xc],0x20
1000486e:	eb 0f                	jmp    0x1000487f
10004870:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004873:	25 ff 00 00 00       	and    eax,0xff
10004878:	eb 08                	jmp    0x10004882
1000487a:	0c 20                	or     al,0x20
1000487c:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
1000487f:	83 c8 ff             	or     eax,0xffffffff
10004882:	5e                   	pop    esi
10004883:	5b                   	pop    ebx
10004884:	5d                   	pop    ebp
10004885:	c3                   	ret
10004886:	56                   	push   esi
10004887:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1000488b:	3b 35 80 5a 1f 10    	cmp    esi,DWORD PTR ds:0x101f5a80
10004891:	73 40                	jae    0x100048d3
10004893:	8b ce                	mov    ecx,esi
10004895:	8b c6                	mov    eax,esi
10004897:	c1 f9 05             	sar    ecx,0x5
1000489a:	83 e0 1f             	and    eax,0x1f
1000489d:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
100048a4:	8d 04 c0             	lea    eax,[eax+eax*8]
100048a7:	f6 44 81 04 01       	test   BYTE PTR [ecx+eax*4+0x4],0x1
100048ac:	74 25                	je     0x100048d3
100048ae:	57                   	push   edi
100048af:	56                   	push   esi
100048b0:	e8 a5 37 00 00       	call   0x1000805a
100048b5:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
100048b9:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
100048bd:	56                   	push   esi
100048be:	e8 28 00 00 00       	call   0x100048eb
100048c3:	56                   	push   esi
100048c4:	8b f8                	mov    edi,eax
100048c6:	e8 ee 37 00 00       	call   0x100080b9
100048cb:	83 c4 14             	add    esp,0x14
100048ce:	8b c7                	mov    eax,edi
100048d0:	5f                   	pop    edi
100048d1:	5e                   	pop    esi
100048d2:	c3                   	ret
100048d3:	e8 10 35 00 00       	call   0x10007de8
100048d8:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
100048de:	e8 0e 35 00 00       	call   0x10007df1
100048e3:	83 20 00             	and    DWORD PTR [eax],0x0
100048e6:	83 c8 ff             	or     eax,0xffffffff
100048e9:	5e                   	pop    esi
100048ea:	c3                   	ret
100048eb:	55                   	push   ebp
100048ec:	8b ec                	mov    ebp,esp
100048ee:	81 ec 14 04 00 00    	sub    esp,0x414
100048f4:	53                   	push   ebx
100048f5:	56                   	push   esi
100048f6:	57                   	push   edi
100048f7:	33 ff                	xor    edi,edi
100048f9:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
100048fc:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
100048ff:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
10004902:	75 07                	jne    0x1000490b
10004904:	33 c0                	xor    eax,eax
10004906:	e9 66 01 00 00       	jmp    0x10004a71
1000490b:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000490e:	c1 f8 05             	sar    eax,0x5
10004911:	8d 1c 85 80 59 1f 10 	lea    ebx,[eax*4+0x101f5980]
10004918:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000491b:	83 e0 1f             	and    eax,0x1f
1000491e:	8d 34 c0             	lea    esi,[eax+eax*8]
10004921:	8b 03                	mov    eax,DWORD PTR [ebx]
10004923:	c1 e6 02             	shl    esi,0x2
10004926:	f6 44 30 04 20       	test   BYTE PTR [eax+esi*1+0x4],0x20
1000492b:	74 0e                	je     0x1000493b
1000492d:	6a 02                	push   0x2
1000492f:	57                   	push   edi
10004930:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10004933:	e8 9b 38 00 00       	call   0x100081d3
10004938:	83 c4 0c             	add    esp,0xc
1000493b:	8b 03                	mov    eax,DWORD PTR [ebx]
1000493d:	03 c6                	add    eax,esi
1000493f:	f6 40 04 80          	test   BYTE PTR [eax+0x4],0x80
10004943:	0f 84 c1 00 00 00    	je     0x10004a0a
10004949:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000494c:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
1000494f:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10004952:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
10004955:	0f 86 ea 00 00 00    	jbe    0x10004a45
1000495b:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
10004961:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10004964:	2b 4d 0c             	sub    ecx,DWORD PTR [ebp+0xc]
10004967:	3b 4d 10             	cmp    ecx,DWORD PTR [ebp+0x10]
1000496a:	73 29                	jae    0x10004995
1000496c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000496f:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
10004972:	8a 09                	mov    cl,BYTE PTR [ecx]
10004974:	80 f9 0a             	cmp    cl,0xa
10004977:	75 07                	jne    0x10004980
10004979:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
1000497c:	c6 00 0d             	mov    BYTE PTR [eax],0xd
1000497f:	40                   	inc    eax
10004980:	88 08                	mov    BYTE PTR [eax],cl
10004982:	40                   	inc    eax
10004983:	8b c8                	mov    ecx,eax
10004985:	8d 95 ec fb ff ff    	lea    edx,[ebp-0x414]
1000498b:	2b ca                	sub    ecx,edx
1000498d:	81 f9 00 04 00 00    	cmp    ecx,0x400
10004993:	7c cc                	jl     0x10004961
10004995:	8b f8                	mov    edi,eax
10004997:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
1000499d:	2b f8                	sub    edi,eax
1000499f:	8d 45 f4             	lea    eax,[ebp-0xc]
100049a2:	6a 00                	push   0x0
100049a4:	50                   	push   eax
100049a5:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
100049ab:	57                   	push   edi
100049ac:	50                   	push   eax
100049ad:	8b 03                	mov    eax,DWORD PTR [ebx]
100049af:	ff 34 30             	push   DWORD PTR [eax+esi*1]
100049b2:	ff 15 98 c0 00 10    	call   DWORD PTR ds:0x1000c098
100049b8:	85 c0                	test   eax,eax
100049ba:	74 43                	je     0x100049ff
100049bc:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100049bf:	01 45 f8             	add    DWORD PTR [ebp-0x8],eax
100049c2:	3b c7                	cmp    eax,edi
100049c4:	7c 0b                	jl     0x100049d1
100049c6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100049c9:	2b 45 0c             	sub    eax,DWORD PTR [ebp+0xc]
100049cc:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
100049cf:	72 8a                	jb     0x1000495b
100049d1:	33 ff                	xor    edi,edi
100049d3:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100049d6:	3b c7                	cmp    eax,edi
100049d8:	0f 85 90 00 00 00    	jne    0x10004a6e
100049de:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
100049e1:	74 62                	je     0x10004a45
100049e3:	6a 05                	push   0x5
100049e5:	5e                   	pop    esi
100049e6:	39 75 08             	cmp    DWORD PTR [ebp+0x8],esi
100049e9:	75 4c                	jne    0x10004a37
100049eb:	e8 f8 33 00 00       	call   0x10007de8
100049f0:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
100049f6:	e8 f6 33 00 00       	call   0x10007df1
100049fb:	89 30                	mov    DWORD PTR [eax],esi
100049fd:	eb 41                	jmp    0x10004a40
100049ff:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
10004a05:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10004a08:	eb c7                	jmp    0x100049d1
10004a0a:	8d 4d f4             	lea    ecx,[ebp-0xc]
10004a0d:	57                   	push   edi
10004a0e:	51                   	push   ecx
10004a0f:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10004a12:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10004a15:	ff 30                	push   DWORD PTR [eax]
10004a17:	ff 15 98 c0 00 10    	call   DWORD PTR ds:0x1000c098
10004a1d:	85 c0                	test   eax,eax
10004a1f:	74 0b                	je     0x10004a2c
10004a21:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
10004a24:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
10004a27:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10004a2a:	eb a7                	jmp    0x100049d3
10004a2c:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
10004a32:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10004a35:	eb 9c                	jmp    0x100049d3
10004a37:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10004a3a:	e8 36 33 00 00       	call   0x10007d75
10004a3f:	59                   	pop    ecx
10004a40:	83 c8 ff             	or     eax,0xffffffff
10004a43:	eb 2c                	jmp    0x10004a71
10004a45:	8b 03                	mov    eax,DWORD PTR [ebx]
10004a47:	f6 44 30 04 40       	test   BYTE PTR [eax+esi*1+0x4],0x40
10004a4c:	74 0c                	je     0x10004a5a
10004a4e:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10004a51:	80 38 1a             	cmp    BYTE PTR [eax],0x1a
10004a54:	0f 84 aa fe ff ff    	je     0x10004904
10004a5a:	e8 89 33 00 00       	call   0x10007de8
10004a5f:	c7 00 1c 00 00 00    	mov    DWORD PTR [eax],0x1c
10004a65:	e8 87 33 00 00       	call   0x10007df1
10004a6a:	89 38                	mov    DWORD PTR [eax],edi
10004a6c:	eb d2                	jmp    0x10004a40
10004a6e:	2b 45 f0             	sub    eax,DWORD PTR [ebp-0x10]
10004a71:	5f                   	pop    edi
10004a72:	5e                   	pop    esi
10004a73:	5b                   	pop    ebx
10004a74:	c9                   	leave
10004a75:	c3                   	ret
10004a76:	cc                   	int3
10004a77:	cc                   	int3
10004a78:	cc                   	int3
10004a79:	cc                   	int3
10004a7a:	cc                   	int3
10004a7b:	cc                   	int3
10004a7c:	cc                   	int3
10004a7d:	cc                   	int3
10004a7e:	cc                   	int3
10004a7f:	cc                   	int3
10004a80:	55                   	push   ebp
10004a81:	8b ec                	mov    ebp,esp
10004a83:	57                   	push   edi
10004a84:	56                   	push   esi
10004a85:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10004a88:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
10004a8b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10004a8e:	8b c1                	mov    eax,ecx
10004a90:	8b d1                	mov    edx,ecx
10004a92:	03 c6                	add    eax,esi
10004a94:	3b fe                	cmp    edi,esi
10004a96:	76 08                	jbe    0x10004aa0
10004a98:	3b f8                	cmp    edi,eax
10004a9a:	0f 82 78 01 00 00    	jb     0x10004c18
10004aa0:	f7 c7 03 00 00 00    	test   edi,0x3
10004aa6:	75 14                	jne    0x10004abc
10004aa8:	c1 e9 02             	shr    ecx,0x2
10004aab:	83 e2 03             	and    edx,0x3
10004aae:	83 f9 08             	cmp    ecx,0x8
10004ab1:	72 29                	jb     0x10004adc
10004ab3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004ab5:	ff 24 95 c8 4b 00 10 	jmp    DWORD PTR [edx*4+0x10004bc8]
10004abc:	8b c7                	mov    eax,edi
10004abe:	ba 03 00 00 00       	mov    edx,0x3
10004ac3:	83 e9 04             	sub    ecx,0x4
10004ac6:	72 0c                	jb     0x10004ad4
10004ac8:	83 e0 03             	and    eax,0x3
10004acb:	03 c8                	add    ecx,eax
10004acd:	ff 24 85 e0 4a 00 10 	jmp    DWORD PTR [eax*4+0x10004ae0]
10004ad4:	ff 24 8d d8 4b 00 10 	jmp    DWORD PTR [ecx*4+0x10004bd8]
10004adb:	90                   	nop
10004adc:	ff 24 8d 5c 4b 00 10 	jmp    DWORD PTR [ecx*4+0x10004b5c]
10004ae3:	90                   	nop
10004ae4:	f0 4a                	lock dec edx
10004ae6:	00 10                	add    BYTE PTR [eax],dl
10004ae8:	1c 4b                	sbb    al,0x4b
10004aea:	00 10                	add    BYTE PTR [eax],dl
10004aec:	40                   	inc    eax
10004aed:	4b                   	dec    ebx
10004aee:	00 10                	add    BYTE PTR [eax],dl
10004af0:	23 d1                	and    edx,ecx
10004af2:	8a 06                	mov    al,BYTE PTR [esi]
10004af4:	88 07                	mov    BYTE PTR [edi],al
10004af6:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10004af9:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10004afc:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10004aff:	c1 e9 02             	shr    ecx,0x2
10004b02:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10004b05:	83 c6 03             	add    esi,0x3
10004b08:	83 c7 03             	add    edi,0x3
10004b0b:	83 f9 08             	cmp    ecx,0x8
10004b0e:	72 cc                	jb     0x10004adc
10004b10:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004b12:	ff 24 95 c8 4b 00 10 	jmp    DWORD PTR [edx*4+0x10004bc8]
10004b19:	8d 49 00             	lea    ecx,[ecx+0x0]
10004b1c:	23 d1                	and    edx,ecx
10004b1e:	8a 06                	mov    al,BYTE PTR [esi]
10004b20:	88 07                	mov    BYTE PTR [edi],al
10004b22:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10004b25:	c1 e9 02             	shr    ecx,0x2
10004b28:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10004b2b:	83 c6 02             	add    esi,0x2
10004b2e:	83 c7 02             	add    edi,0x2
10004b31:	83 f9 08             	cmp    ecx,0x8
10004b34:	72 a6                	jb     0x10004adc
10004b36:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004b38:	ff 24 95 c8 4b 00 10 	jmp    DWORD PTR [edx*4+0x10004bc8]
10004b3f:	90                   	nop
10004b40:	23 d1                	and    edx,ecx
10004b42:	8a 06                	mov    al,BYTE PTR [esi]
10004b44:	88 07                	mov    BYTE PTR [edi],al
10004b46:	46                   	inc    esi
10004b47:	c1 e9 02             	shr    ecx,0x2
10004b4a:	47                   	inc    edi
10004b4b:	83 f9 08             	cmp    ecx,0x8
10004b4e:	72 8c                	jb     0x10004adc
10004b50:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004b52:	ff 24 95 c8 4b 00 10 	jmp    DWORD PTR [edx*4+0x10004bc8]
10004b59:	8d 49 00             	lea    ecx,[ecx+0x0]
10004b5c:	bf 4b 00 10 ac       	mov    edi,0xac10004b
10004b61:	4b                   	dec    ebx
10004b62:	00 10                	add    BYTE PTR [eax],dl
10004b64:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
10004b65:	4b                   	dec    ebx
10004b66:	00 10                	add    BYTE PTR [eax],dl
10004b68:	9c                   	pushf
10004b69:	4b                   	dec    ebx
10004b6a:	00 10                	add    BYTE PTR [eax],dl
10004b6c:	94                   	xchg   esp,eax
10004b6d:	4b                   	dec    ebx
10004b6e:	00 10                	add    BYTE PTR [eax],dl
10004b70:	8c 4b 00             	mov    WORD PTR [ebx+0x0],cs
10004b73:	10 84 4b 00 10 7c 4b 	adc    BYTE PTR [ebx+ecx*2+0x4b7c1000],al
10004b7a:	00 10                	add    BYTE PTR [eax],dl
10004b7c:	8b 44 8e e4          	mov    eax,DWORD PTR [esi+ecx*4-0x1c]
10004b80:	89 44 8f e4          	mov    DWORD PTR [edi+ecx*4-0x1c],eax
10004b84:	8b 44 8e e8          	mov    eax,DWORD PTR [esi+ecx*4-0x18]
10004b88:	89 44 8f e8          	mov    DWORD PTR [edi+ecx*4-0x18],eax
10004b8c:	8b 44 8e ec          	mov    eax,DWORD PTR [esi+ecx*4-0x14]
10004b90:	89 44 8f ec          	mov    DWORD PTR [edi+ecx*4-0x14],eax
10004b94:	8b 44 8e f0          	mov    eax,DWORD PTR [esi+ecx*4-0x10]
10004b98:	89 44 8f f0          	mov    DWORD PTR [edi+ecx*4-0x10],eax
10004b9c:	8b 44 8e f4          	mov    eax,DWORD PTR [esi+ecx*4-0xc]
10004ba0:	89 44 8f f4          	mov    DWORD PTR [edi+ecx*4-0xc],eax
10004ba4:	8b 44 8e f8          	mov    eax,DWORD PTR [esi+ecx*4-0x8]
10004ba8:	89 44 8f f8          	mov    DWORD PTR [edi+ecx*4-0x8],eax
10004bac:	8b 44 8e fc          	mov    eax,DWORD PTR [esi+ecx*4-0x4]
10004bb0:	89 44 8f fc          	mov    DWORD PTR [edi+ecx*4-0x4],eax
10004bb4:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
10004bbb:	03 f0                	add    esi,eax
10004bbd:	03 f8                	add    edi,eax
10004bbf:	ff 24 95 c8 4b 00 10 	jmp    DWORD PTR [edx*4+0x10004bc8]
10004bc6:	8b ff                	mov    edi,edi
10004bc8:	d8 4b 00             	fmul   DWORD PTR [ebx+0x0]
10004bcb:	10 e0                	adc    al,ah
10004bcd:	4b                   	dec    ebx
10004bce:	00 10                	add    BYTE PTR [eax],dl
10004bd0:	ec                   	in     al,dx
10004bd1:	4b                   	dec    ebx
10004bd2:	00 10                	add    BYTE PTR [eax],dl
10004bd4:	00 4c 00 10          	add    BYTE PTR [eax+eax*1+0x10],cl
10004bd8:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004bdb:	5e                   	pop    esi
10004bdc:	5f                   	pop    edi
10004bdd:	c9                   	leave
10004bde:	c3                   	ret
10004bdf:	90                   	nop
10004be0:	8a 06                	mov    al,BYTE PTR [esi]
10004be2:	88 07                	mov    BYTE PTR [edi],al
10004be4:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004be7:	5e                   	pop    esi
10004be8:	5f                   	pop    edi
10004be9:	c9                   	leave
10004bea:	c3                   	ret
10004beb:	90                   	nop
10004bec:	8a 06                	mov    al,BYTE PTR [esi]
10004bee:	88 07                	mov    BYTE PTR [edi],al
10004bf0:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10004bf3:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10004bf6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004bf9:	5e                   	pop    esi
10004bfa:	5f                   	pop    edi
10004bfb:	c9                   	leave
10004bfc:	c3                   	ret
10004bfd:	8d 49 00             	lea    ecx,[ecx+0x0]
10004c00:	8a 06                	mov    al,BYTE PTR [esi]
10004c02:	88 07                	mov    BYTE PTR [edi],al
10004c04:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10004c07:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10004c0a:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10004c0d:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10004c10:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004c13:	5e                   	pop    esi
10004c14:	5f                   	pop    edi
10004c15:	c9                   	leave
10004c16:	c3                   	ret
10004c17:	90                   	nop
10004c18:	8d 74 31 fc          	lea    esi,[ecx+esi*1-0x4]
10004c1c:	8d 7c 39 fc          	lea    edi,[ecx+edi*1-0x4]
10004c20:	f7 c7 03 00 00 00    	test   edi,0x3
10004c26:	75 24                	jne    0x10004c4c
10004c28:	c1 e9 02             	shr    ecx,0x2
10004c2b:	83 e2 03             	and    edx,0x3
10004c2e:	83 f9 08             	cmp    ecx,0x8
10004c31:	72 0d                	jb     0x10004c40
10004c33:	fd                   	std
10004c34:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004c36:	fc                   	cld
10004c37:	ff 24 95 60 4d 00 10 	jmp    DWORD PTR [edx*4+0x10004d60]
10004c3e:	8b ff                	mov    edi,edi
10004c40:	f7 d9                	neg    ecx
10004c42:	ff 24 8d 10 4d 00 10 	jmp    DWORD PTR [ecx*4+0x10004d10]
10004c49:	8d 49 00             	lea    ecx,[ecx+0x0]
10004c4c:	8b c7                	mov    eax,edi
10004c4e:	ba 03 00 00 00       	mov    edx,0x3
10004c53:	83 f9 04             	cmp    ecx,0x4
10004c56:	72 0c                	jb     0x10004c64
10004c58:	83 e0 03             	and    eax,0x3
10004c5b:	2b c8                	sub    ecx,eax
10004c5d:	ff 24 85 68 4c 00 10 	jmp    DWORD PTR [eax*4+0x10004c68]
10004c64:	ff 24 8d 60 4d 00 10 	jmp    DWORD PTR [ecx*4+0x10004d60]
10004c6b:	90                   	nop
10004c6c:	78 4c                	js     0x10004cba
10004c6e:	00 10                	add    BYTE PTR [eax],dl
10004c70:	98                   	cwde
10004c71:	4c                   	dec    esp
10004c72:	00 10                	add    BYTE PTR [eax],dl
10004c74:	c0 4c 00 10 8a       	ror    BYTE PTR [eax+eax*1+0x10],0x8a
10004c79:	46                   	inc    esi
10004c7a:	03 23                	add    esp,DWORD PTR [ebx]
10004c7c:	d1 88 47 03 4e c1    	ror    DWORD PTR [eax-0x3eb1fcb9],1
10004c82:	e9 02 4f 83 f9       	jmp    0x9839b89
10004c87:	08 72 b6             	or     BYTE PTR [edx-0x4a],dh
10004c8a:	fd                   	std
10004c8b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004c8d:	fc                   	cld
10004c8e:	ff 24 95 60 4d 00 10 	jmp    DWORD PTR [edx*4+0x10004d60]
10004c95:	8d 49 00             	lea    ecx,[ecx+0x0]
10004c98:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10004c9b:	23 d1                	and    edx,ecx
10004c9d:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10004ca0:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10004ca3:	c1 e9 02             	shr    ecx,0x2
10004ca6:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10004ca9:	83 ee 02             	sub    esi,0x2
10004cac:	83 ef 02             	sub    edi,0x2
10004caf:	83 f9 08             	cmp    ecx,0x8
10004cb2:	72 8c                	jb     0x10004c40
10004cb4:	fd                   	std
10004cb5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004cb7:	fc                   	cld
10004cb8:	ff 24 95 60 4d 00 10 	jmp    DWORD PTR [edx*4+0x10004d60]
10004cbf:	90                   	nop
10004cc0:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10004cc3:	23 d1                	and    edx,ecx
10004cc5:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10004cc8:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10004ccb:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10004cce:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10004cd1:	c1 e9 02             	shr    ecx,0x2
10004cd4:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10004cd7:	83 ee 03             	sub    esi,0x3
10004cda:	83 ef 03             	sub    edi,0x3
10004cdd:	83 f9 08             	cmp    ecx,0x8
10004ce0:	0f 82 5a ff ff ff    	jb     0x10004c40
10004ce6:	fd                   	std
10004ce7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10004ce9:	fc                   	cld
10004cea:	ff 24 95 60 4d 00 10 	jmp    DWORD PTR [edx*4+0x10004d60]
10004cf1:	8d 49 00             	lea    ecx,[ecx+0x0]
10004cf4:	14 4d                	adc    al,0x4d
10004cf6:	00 10                	add    BYTE PTR [eax],dl
10004cf8:	1c 4d                	sbb    al,0x4d
10004cfa:	00 10                	add    BYTE PTR [eax],dl
10004cfc:	24 4d                	and    al,0x4d
10004cfe:	00 10                	add    BYTE PTR [eax],dl
10004d00:	2c 4d                	sub    al,0x4d
10004d02:	00 10                	add    BYTE PTR [eax],dl
10004d04:	34 4d                	xor    al,0x4d
10004d06:	00 10                	add    BYTE PTR [eax],dl
10004d08:	3c 4d                	cmp    al,0x4d
10004d0a:	00 10                	add    BYTE PTR [eax],dl
10004d0c:	44                   	inc    esp
10004d0d:	4d                   	dec    ebp
10004d0e:	00 10                	add    BYTE PTR [eax],dl
10004d10:	57                   	push   edi
10004d11:	4d                   	dec    ebp
10004d12:	00 10                	add    BYTE PTR [eax],dl
10004d14:	8b 44 8e 1c          	mov    eax,DWORD PTR [esi+ecx*4+0x1c]
10004d18:	89 44 8f 1c          	mov    DWORD PTR [edi+ecx*4+0x1c],eax
10004d1c:	8b 44 8e 18          	mov    eax,DWORD PTR [esi+ecx*4+0x18]
10004d20:	89 44 8f 18          	mov    DWORD PTR [edi+ecx*4+0x18],eax
10004d24:	8b 44 8e 14          	mov    eax,DWORD PTR [esi+ecx*4+0x14]
10004d28:	89 44 8f 14          	mov    DWORD PTR [edi+ecx*4+0x14],eax
10004d2c:	8b 44 8e 10          	mov    eax,DWORD PTR [esi+ecx*4+0x10]
10004d30:	89 44 8f 10          	mov    DWORD PTR [edi+ecx*4+0x10],eax
10004d34:	8b 44 8e 0c          	mov    eax,DWORD PTR [esi+ecx*4+0xc]
10004d38:	89 44 8f 0c          	mov    DWORD PTR [edi+ecx*4+0xc],eax
10004d3c:	8b 44 8e 08          	mov    eax,DWORD PTR [esi+ecx*4+0x8]
10004d40:	89 44 8f 08          	mov    DWORD PTR [edi+ecx*4+0x8],eax
10004d44:	8b 44 8e 04          	mov    eax,DWORD PTR [esi+ecx*4+0x4]
10004d48:	89 44 8f 04          	mov    DWORD PTR [edi+ecx*4+0x4],eax
10004d4c:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
10004d53:	03 f0                	add    esi,eax
10004d55:	03 f8                	add    edi,eax
10004d57:	ff 24 95 60 4d 00 10 	jmp    DWORD PTR [edx*4+0x10004d60]
10004d5e:	8b ff                	mov    edi,edi
10004d60:	70 4d                	jo     0x10004daf
10004d62:	00 10                	add    BYTE PTR [eax],dl
10004d64:	78 4d                	js     0x10004db3
10004d66:	00 10                	add    BYTE PTR [eax],dl
10004d68:	88 4d 00             	mov    BYTE PTR [ebp+0x0],cl
10004d6b:	10 9c 4d 00 10 8b 45 	adc    BYTE PTR [ebp+ecx*2+0x458b1000],bl
10004d72:	08 5e 5f             	or     BYTE PTR [esi+0x5f],bl
10004d75:	c9                   	leave
10004d76:	c3                   	ret
10004d77:	90                   	nop
10004d78:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10004d7b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10004d7e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004d81:	5e                   	pop    esi
10004d82:	5f                   	pop    edi
10004d83:	c9                   	leave
10004d84:	c3                   	ret
10004d85:	8d 49 00             	lea    ecx,[ecx+0x0]
10004d88:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10004d8b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10004d8e:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10004d91:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10004d94:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004d97:	5e                   	pop    esi
10004d98:	5f                   	pop    edi
10004d99:	c9                   	leave
10004d9a:	c3                   	ret
10004d9b:	90                   	nop
10004d9c:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10004d9f:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10004da2:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10004da5:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10004da8:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10004dab:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10004dae:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10004db1:	5e                   	pop    esi
10004db2:	5f                   	pop    edi
10004db3:	c9                   	leave
10004db4:	c3                   	ret
10004db5:	55                   	push   ebp
10004db6:	8b ec                	mov    ebp,esp
10004db8:	51                   	push   ecx
10004db9:	51                   	push   ecx
10004dba:	53                   	push   ebx
10004dbb:	56                   	push   esi
10004dbc:	8b 35 48 3c 0e 10    	mov    esi,DWORD PTR ds:0x100e3c48
10004dc2:	57                   	push   edi
10004dc3:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10004dc6:	33 db                	xor    ebx,ebx
10004dc8:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
10004dcb:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
10004dce:	8a 07                	mov    al,BYTE PTR [edi]
10004dd0:	3c 61                	cmp    al,0x61
10004dd2:	74 1a                	je     0x10004dee
10004dd4:	3c 72                	cmp    al,0x72
10004dd6:	74 0f                	je     0x10004de7
10004dd8:	3c 77                	cmp    al,0x77
10004dda:	0f 85 22 01 00 00    	jne    0x10004f02
10004de0:	b9 01 03 00 00       	mov    ecx,0x301
10004de5:	eb 0c                	jmp    0x10004df3
10004de7:	33 c9                	xor    ecx,ecx
10004de9:	83 ce 01             	or     esi,0x1
10004dec:	eb 08                	jmp    0x10004df6
10004dee:	b9 09 01 00 00       	mov    ecx,0x109
10004df3:	83 ce 02             	or     esi,0x2
10004df6:	6a 01                	push   0x1
10004df8:	5a                   	pop    edx
10004df9:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10004dfc:	47                   	inc    edi
10004dfd:	3a c3                	cmp    al,bl
10004dff:	0f 84 e3 00 00 00    	je     0x10004ee8
10004e05:	3b d3                	cmp    edx,ebx
10004e07:	0f 84 db 00 00 00    	je     0x10004ee8
10004e0d:	0f be c0             	movsx  eax,al
10004e10:	83 f8 54             	cmp    eax,0x54
10004e13:	7f 72                	jg     0x10004e87
10004e15:	74 60                	je     0x10004e77
10004e17:	83 e8 2b             	sub    eax,0x2b
10004e1a:	74 45                	je     0x10004e61
10004e1c:	83 e8 19             	sub    eax,0x19
10004e1f:	74 36                	je     0x10004e57
10004e21:	83 e8 0e             	sub    eax,0xe
10004e24:	74 1c                	je     0x10004e42
10004e26:	48                   	dec    eax
10004e27:	0f 85 ac 00 00 00    	jne    0x10004ed9
10004e2d:	39 5d fc             	cmp    DWORD PTR [ebp-0x4],ebx
10004e30:	0f 85 a3 00 00 00    	jne    0x10004ed9
10004e36:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
10004e3d:	83 c9 20             	or     ecx,0x20
10004e40:	eb b7                	jmp    0x10004df9
10004e42:	39 5d fc             	cmp    DWORD PTR [ebp-0x4],ebx
10004e45:	0f 85 8e 00 00 00    	jne    0x10004ed9
10004e4b:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
10004e52:	83 c9 10             	or     ecx,0x10
10004e55:	eb a2                	jmp    0x10004df9
10004e57:	f6 c1 40             	test   cl,0x40
10004e5a:	75 7d                	jne    0x10004ed9
10004e5c:	83 c9 40             	or     ecx,0x40
10004e5f:	eb 98                	jmp    0x10004df9
10004e61:	f6 c1 02             	test   cl,0x2
10004e64:	75 73                	jne    0x10004ed9
10004e66:	83 e1 fe             	and    ecx,0xfffffffe
10004e69:	83 e6 fc             	and    esi,0xfffffffc
10004e6c:	83 c9 02             	or     ecx,0x2
10004e6f:	81 ce 80 00 00 00    	or     esi,0x80
10004e75:	eb 82                	jmp    0x10004df9
10004e77:	b8 00 10 00 00       	mov    eax,0x1000
10004e7c:	85 c8                	test   eax,ecx
10004e7e:	75 59                	jne    0x10004ed9
10004e80:	0b c8                	or     ecx,eax
10004e82:	e9 72 ff ff ff       	jmp    0x10004df9
10004e87:	83 e8 62             	sub    eax,0x62
10004e8a:	74 48                	je     0x10004ed4
10004e8c:	48                   	dec    eax
10004e8d:	74 2e                	je     0x10004ebd
10004e8f:	83 e8 0b             	sub    eax,0xb
10004e92:	74 12                	je     0x10004ea6
10004e94:	83 e8 06             	sub    eax,0x6
10004e97:	75 40                	jne    0x10004ed9
10004e99:	f6 c5 c0             	test   ch,0xc0
10004e9c:	75 3b                	jne    0x10004ed9
10004e9e:	80 cd 40             	or     ch,0x40
10004ea1:	e9 53 ff ff ff       	jmp    0x10004df9
10004ea6:	39 5d f8             	cmp    DWORD PTR [ebp-0x8],ebx
10004ea9:	75 2e                	jne    0x10004ed9
10004eab:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
10004eb2:	81 e6 ff bf ff ff    	and    esi,0xffffbfff
10004eb8:	e9 3c ff ff ff       	jmp    0x10004df9
10004ebd:	39 5d f8             	cmp    DWORD PTR [ebp-0x8],ebx
10004ec0:	75 17                	jne    0x10004ed9
10004ec2:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
10004ec9:	81 ce 00 40 00 00    	or     esi,0x4000
10004ecf:	e9 25 ff ff ff       	jmp    0x10004df9
10004ed4:	f6 c5 c0             	test   ch,0xc0
10004ed7:	74 07                	je     0x10004ee0
10004ed9:	33 d2                	xor    edx,edx
10004edb:	e9 19 ff ff ff       	jmp    0x10004df9
10004ee0:	80 cd 80             	or     ch,0x80
10004ee3:	e9 11 ff ff ff       	jmp    0x10004df9
10004ee8:	68 a4 01 00 00       	push   0x1a4
10004eed:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10004ef0:	51                   	push   ecx
10004ef1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10004ef4:	e8 ba 33 00 00       	call   0x100082b3
10004ef9:	8b c8                	mov    ecx,eax
10004efb:	83 c4 10             	add    esp,0x10
10004efe:	3b cb                	cmp    ecx,ebx
10004f00:	7d 04                	jge    0x10004f06
10004f02:	33 c0                	xor    eax,eax
10004f04:	eb 1a                	jmp    0x10004f20
10004f06:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10004f09:	ff 05 7c 3a 0e 10    	inc    DWORD PTR ds:0x100e3a7c
10004f0f:	89 70 0c             	mov    DWORD PTR [eax+0xc],esi
10004f12:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
10004f15:	89 18                	mov    DWORD PTR [eax],ebx
10004f17:	89 58 08             	mov    DWORD PTR [eax+0x8],ebx
10004f1a:	89 58 1c             	mov    DWORD PTR [eax+0x1c],ebx
10004f1d:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
10004f20:	5f                   	pop    edi
10004f21:	5e                   	pop    esi
10004f22:	5b                   	pop    ebx
10004f23:	c9                   	leave
10004f24:	c3                   	ret
10004f25:	53                   	push   ebx
10004f26:	56                   	push   esi
10004f27:	57                   	push   edi
10004f28:	6a 02                	push   0x2
10004f2a:	33 db                	xor    ebx,ebx
10004f2c:	33 ff                	xor    edi,edi
10004f2e:	e8 3e 12 00 00       	call   0x10006171
10004f33:	33 f6                	xor    esi,esi
10004f35:	39 1d c0 6a 1f 10    	cmp    DWORD PTR ds:0x101f6ac0,ebx
10004f3b:	59                   	pop    ecx
10004f3c:	0f 8e 9d 00 00 00    	jle    0x10004fdf
10004f42:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10004f47:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
10004f4a:	3b c3                	cmp    eax,ebx
10004f4c:	74 37                	je     0x10004f85
10004f4e:	f6 40 0c 83          	test   BYTE PTR [eax+0xc],0x83
10004f52:	75 21                	jne    0x10004f75
10004f54:	50                   	push   eax
10004f55:	56                   	push   esi
10004f56:	e8 5c f5 ff ff       	call   0x100044b7
10004f5b:	59                   	pop    ecx
10004f5c:	59                   	pop    ecx
10004f5d:	8b 0d b8 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5ab8
10004f63:	8b 04 b1             	mov    eax,DWORD PTR [ecx+esi*4]
10004f66:	f6 40 0c 83          	test   BYTE PTR [eax+0xc],0x83
10004f6a:	74 14                	je     0x10004f80
10004f6c:	50                   	push   eax
10004f6d:	56                   	push   esi
10004f6e:	e8 96 f5 ff ff       	call   0x10004509
10004f73:	59                   	pop    ecx
10004f74:	59                   	pop    ecx
10004f75:	46                   	inc    esi
10004f76:	3b 35 c0 6a 1f 10    	cmp    esi,DWORD PTR ds:0x101f6ac0
10004f7c:	7c c4                	jl     0x10004f42
10004f7e:	eb 5f                	jmp    0x10004fdf
10004f80:	8b 3c b1             	mov    edi,DWORD PTR [ecx+esi*4]
10004f83:	eb 44                	jmp    0x10004fc9
10004f85:	6a 38                	push   0x38
10004f87:	c1 e6 02             	shl    esi,0x2
10004f8a:	e8 a6 f0 ff ff       	call   0x10004035
10004f8f:	59                   	pop    ecx
10004f90:	8b 0d b8 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5ab8
10004f96:	89 04 0e             	mov    DWORD PTR [esi+ecx*1],eax
10004f99:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10004f9e:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
10004fa1:	3b c3                	cmp    eax,ebx
10004fa3:	74 3a                	je     0x10004fdf
10004fa5:	83 c0 20             	add    eax,0x20
10004fa8:	50                   	push   eax
10004fa9:	ff 15 9c c0 00 10    	call   DWORD PTR ds:0x1000c09c
10004faf:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10004fb4:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
10004fb7:	83 c0 20             	add    eax,0x20
10004fba:	50                   	push   eax
10004fbb:	ff 15 88 c0 00 10    	call   DWORD PTR ds:0x1000c088
10004fc1:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10004fc6:	8b 3c 06             	mov    edi,DWORD PTR [esi+eax*1]
10004fc9:	3b fb                	cmp    edi,ebx
10004fcb:	74 12                	je     0x10004fdf
10004fcd:	83 4f 10 ff          	or     DWORD PTR [edi+0x10],0xffffffff
10004fd1:	89 5f 04             	mov    DWORD PTR [edi+0x4],ebx
10004fd4:	89 5f 0c             	mov    DWORD PTR [edi+0xc],ebx
10004fd7:	89 5f 08             	mov    DWORD PTR [edi+0x8],ebx
10004fda:	89 1f                	mov    DWORD PTR [edi],ebx
10004fdc:	89 5f 1c             	mov    DWORD PTR [edi+0x1c],ebx
10004fdf:	6a 02                	push   0x2
10004fe1:	e8 ec 11 00 00       	call   0x100061d2
10004fe6:	59                   	pop    ecx
10004fe7:	8b c7                	mov    eax,edi
10004fe9:	5f                   	pop    edi
10004fea:	5e                   	pop    esi
10004feb:	5b                   	pop    ebx
10004fec:	c3                   	ret
10004fed:	56                   	push   esi
10004fee:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10004ff2:	6a 00                	push   0x0
10004ff4:	83 26 00             	and    DWORD PTR [esi],0x0
10004ff7:	ff 15 a0 c0 00 10    	call   DWORD PTR ds:0x1000c0a0
10004ffd:	66 81 38 4d 5a       	cmp    WORD PTR [eax],0x5a4d
10005002:	75 14                	jne    0x10005018
10005004:	8b 48 3c             	mov    ecx,DWORD PTR [eax+0x3c]
10005007:	85 c9                	test   ecx,ecx
10005009:	74 0d                	je     0x10005018
1000500b:	03 c1                	add    eax,ecx
1000500d:	8a 48 1a             	mov    cl,BYTE PTR [eax+0x1a]
10005010:	88 0e                	mov    BYTE PTR [esi],cl
10005012:	8a 40 1b             	mov    al,BYTE PTR [eax+0x1b]
10005015:	88 46 01             	mov    BYTE PTR [esi+0x1],al
10005018:	5e                   	pop    esi
10005019:	c3                   	ret
1000501a:	55                   	push   ebp
1000501b:	8b ec                	mov    ebp,esp
1000501d:	b8 2c 12 00 00       	mov    eax,0x122c
10005022:	e8 09 39 00 00       	call   0x10008930
10005027:	8d 85 68 ff ff ff    	lea    eax,[ebp-0x98]
1000502d:	53                   	push   ebx
1000502e:	50                   	push   eax
1000502f:	c7 85 68 ff ff ff 94 	mov    DWORD PTR [ebp-0x98],0x94
10005036:	00 00 00 
10005039:	ff 15 ac c0 00 10    	call   DWORD PTR ds:0x1000c0ac
1000503f:	85 c0                	test   eax,eax
10005041:	74 1a                	je     0x1000505d
10005043:	83 bd 78 ff ff ff 02 	cmp    DWORD PTR [ebp-0x88],0x2
1000504a:	75 11                	jne    0x1000505d
1000504c:	83 bd 6c ff ff ff 05 	cmp    DWORD PTR [ebp-0x94],0x5
10005053:	72 08                	jb     0x1000505d
10005055:	6a 01                	push   0x1
10005057:	58                   	pop    eax
10005058:	e9 02 01 00 00       	jmp    0x1000515f
1000505d:	8d 85 d4 ed ff ff    	lea    eax,[ebp-0x122c]
10005063:	68 90 10 00 00       	push   0x1090
10005068:	50                   	push   eax
10005069:	68 20 c2 00 10       	push   0x1000c220
1000506e:	ff 15 a8 c0 00 10    	call   DWORD PTR ds:0x1000c0a8
10005074:	85 c0                	test   eax,eax
10005076:	0f 84 d0 00 00 00    	je     0x1000514c
1000507c:	33 db                	xor    ebx,ebx
1000507e:	8d 8d d4 ed ff ff    	lea    ecx,[ebp-0x122c]
10005084:	38 9d d4 ed ff ff    	cmp    BYTE PTR [ebp-0x122c],bl
1000508a:	74 13                	je     0x1000509f
1000508c:	8a 01                	mov    al,BYTE PTR [ecx]
1000508e:	3c 61                	cmp    al,0x61
10005090:	7c 08                	jl     0x1000509a
10005092:	3c 7a                	cmp    al,0x7a
10005094:	7f 04                	jg     0x1000509a
10005096:	2c 20                	sub    al,0x20
10005098:	88 01                	mov    BYTE PTR [ecx],al
1000509a:	41                   	inc    ecx
1000509b:	38 19                	cmp    BYTE PTR [ecx],bl
1000509d:	75 ed                	jne    0x1000508c
1000509f:	8d 85 d4 ed ff ff    	lea    eax,[ebp-0x122c]
100050a5:	6a 16                	push   0x16
100050a7:	50                   	push   eax
100050a8:	68 08 c2 00 10       	push   0x1000c208
100050ad:	e8 3e 38 00 00       	call   0x100088f0
100050b2:	83 c4 0c             	add    esp,0xc
100050b5:	85 c0                	test   eax,eax
100050b7:	75 08                	jne    0x100050c1
100050b9:	8d 85 d4 ed ff ff    	lea    eax,[ebp-0x122c]
100050bf:	eb 49                	jmp    0x1000510a
100050c1:	8d 85 64 fe ff ff    	lea    eax,[ebp-0x19c]
100050c7:	68 04 01 00 00       	push   0x104
100050cc:	50                   	push   eax
100050cd:	53                   	push   ebx
100050ce:	ff 15 a4 c0 00 10    	call   DWORD PTR ds:0x1000c0a4
100050d4:	38 9d 64 fe ff ff    	cmp    BYTE PTR [ebp-0x19c],bl
100050da:	8d 8d 64 fe ff ff    	lea    ecx,[ebp-0x19c]
100050e0:	74 13                	je     0x100050f5
100050e2:	8a 01                	mov    al,BYTE PTR [ecx]
100050e4:	3c 61                	cmp    al,0x61
100050e6:	7c 08                	jl     0x100050f0
100050e8:	3c 7a                	cmp    al,0x7a
100050ea:	7f 04                	jg     0x100050f0
100050ec:	2c 20                	sub    al,0x20
100050ee:	88 01                	mov    BYTE PTR [ecx],al
100050f0:	41                   	inc    ecx
100050f1:	38 19                	cmp    BYTE PTR [ecx],bl
100050f3:	75 ed                	jne    0x100050e2
100050f5:	8d 85 64 fe ff ff    	lea    eax,[ebp-0x19c]
100050fb:	50                   	push   eax
100050fc:	8d 85 d4 ed ff ff    	lea    eax,[ebp-0x122c]
10005102:	50                   	push   eax
10005103:	e8 68 37 00 00       	call   0x10008870
10005108:	59                   	pop    ecx
10005109:	59                   	pop    ecx
1000510a:	3b c3                	cmp    eax,ebx
1000510c:	74 3e                	je     0x1000514c
1000510e:	6a 2c                	push   0x2c
10005110:	50                   	push   eax
10005111:	e8 9a 36 00 00       	call   0x100087b0
10005116:	59                   	pop    ecx
10005117:	3b c3                	cmp    eax,ebx
10005119:	59                   	pop    ecx
1000511a:	74 30                	je     0x1000514c
1000511c:	40                   	inc    eax
1000511d:	8b c8                	mov    ecx,eax
1000511f:	38 18                	cmp    BYTE PTR [eax],bl
10005121:	74 0e                	je     0x10005131
10005123:	80 39 3b             	cmp    BYTE PTR [ecx],0x3b
10005126:	75 04                	jne    0x1000512c
10005128:	88 19                	mov    BYTE PTR [ecx],bl
1000512a:	eb 01                	jmp    0x1000512d
1000512c:	41                   	inc    ecx
1000512d:	38 19                	cmp    BYTE PTR [ecx],bl
1000512f:	75 f2                	jne    0x10005123
10005131:	6a 0a                	push   0xa
10005133:	53                   	push   ebx
10005134:	50                   	push   eax
10005135:	e8 48 34 00 00       	call   0x10008582
1000513a:	83 c4 0c             	add    esp,0xc
1000513d:	83 f8 02             	cmp    eax,0x2
10005140:	74 1d                	je     0x1000515f
10005142:	83 f8 03             	cmp    eax,0x3
10005145:	74 18                	je     0x1000515f
10005147:	83 f8 01             	cmp    eax,0x1
1000514a:	74 13                	je     0x1000515f
1000514c:	8d 45 fc             	lea    eax,[ebp-0x4]
1000514f:	50                   	push   eax
10005150:	e8 98 fe ff ff       	call   0x10004fed
10005155:	80 7d fc 06          	cmp    BYTE PTR [ebp-0x4],0x6
10005159:	59                   	pop    ecx
1000515a:	1b c0                	sbb    eax,eax
1000515c:	83 c0 03             	add    eax,0x3
1000515f:	5b                   	pop    ebx
10005160:	c9                   	leave
10005161:	c3                   	ret
10005162:	33 c0                	xor    eax,eax
10005164:	6a 00                	push   0x0
10005166:	39 44 24 08          	cmp    DWORD PTR [esp+0x8],eax
1000516a:	68 00 10 00 00       	push   0x1000
1000516f:	0f 94 c0             	sete   al
10005172:	50                   	push   eax
10005173:	ff 15 b4 c0 00 10    	call   DWORD PTR ds:0x1000c0b4
10005179:	85 c0                	test   eax,eax
1000517b:	a3 b0 5a 1f 10       	mov    ds:0x101f5ab0,eax
10005180:	74 36                	je     0x100051b8
10005182:	e8 93 fe ff ff       	call   0x1000501a
10005187:	83 f8 03             	cmp    eax,0x3
1000518a:	a3 b4 5a 1f 10       	mov    ds:0x101f5ab4,eax
1000518f:	75 0d                	jne    0x1000519e
10005191:	68 f8 03 00 00       	push   0x3f8
10005196:	e8 cc 00 00 00       	call   0x10005267
1000519b:	59                   	pop    ecx
1000519c:	eb 0a                	jmp    0x100051a8
1000519e:	83 f8 02             	cmp    eax,0x2
100051a1:	75 18                	jne    0x100051bb
100051a3:	e8 10 09 00 00       	call   0x10005ab8
100051a8:	85 c0                	test   eax,eax
100051aa:	75 0f                	jne    0x100051bb
100051ac:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
100051b2:	ff 15 b0 c0 00 10    	call   DWORD PTR ds:0x1000c0b0
100051b8:	33 c0                	xor    eax,eax
100051ba:	c3                   	ret
100051bb:	6a 01                	push   0x1
100051bd:	58                   	pop    eax
100051be:	c3                   	ret
100051bf:	a1 b4 5a 1f 10       	mov    eax,ds:0x101f5ab4
100051c4:	56                   	push   esi
100051c5:	83 f8 03             	cmp    eax,0x3
100051c8:	57                   	push   edi
100051c9:	75 66                	jne    0x10005231
100051cb:	53                   	push   ebx
100051cc:	33 db                	xor    ebx,ebx
100051ce:	39 1d a4 5a 1f 10    	cmp    DWORD PTR ds:0x101f5aa4,ebx
100051d4:	55                   	push   ebp
100051d5:	8b 2d 78 c0 00 10    	mov    ebp,DWORD PTR ds:0x1000c078
100051db:	7e 40                	jle    0x1000521d
100051dd:	a1 a8 5a 1f 10       	mov    eax,ds:0x101f5aa8
100051e2:	8b 3d b8 c0 00 10    	mov    edi,DWORD PTR ds:0x1000c0b8
100051e8:	8d 70 0c             	lea    esi,[eax+0xc]
100051eb:	68 00 40 00 00       	push   0x4000
100051f0:	68 00 00 10 00       	push   0x100000
100051f5:	ff 36                	push   DWORD PTR [esi]
100051f7:	ff d7                	call   edi
100051f9:	68 00 80 00 00       	push   0x8000
100051fe:	6a 00                	push   0x0
10005200:	ff 36                	push   DWORD PTR [esi]
10005202:	ff d7                	call   edi
10005204:	ff 76 04             	push   DWORD PTR [esi+0x4]
10005207:	6a 00                	push   0x0
10005209:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
1000520f:	ff d5                	call   ebp
10005211:	83 c6 14             	add    esi,0x14
10005214:	43                   	inc    ebx
10005215:	3b 1d a4 5a 1f 10    	cmp    ebx,DWORD PTR ds:0x101f5aa4
1000521b:	7c ce                	jl     0x100051eb
1000521d:	ff 35 a8 5a 1f 10    	push   DWORD PTR ds:0x101f5aa8
10005223:	6a 00                	push   0x0
10005225:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
1000522b:	ff d5                	call   ebp
1000522d:	5d                   	pop    ebp
1000522e:	5b                   	pop    ebx
1000522f:	eb 27                	jmp    0x10005258
10005231:	83 f8 02             	cmp    eax,0x2
10005234:	75 22                	jne    0x10005258
10005236:	bf 98 eb 00 10       	mov    edi,0x1000eb98
1000523b:	8b f7                	mov    esi,edi
1000523d:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
10005240:	85 c0                	test   eax,eax
10005242:	74 0e                	je     0x10005252
10005244:	68 00 80 00 00       	push   0x8000
10005249:	6a 00                	push   0x0
1000524b:	50                   	push   eax
1000524c:	ff 15 b8 c0 00 10    	call   DWORD PTR ds:0x1000c0b8
10005252:	8b 36                	mov    esi,DWORD PTR [esi]
10005254:	3b f7                	cmp    esi,edi
10005256:	75 e5                	jne    0x1000523d
10005258:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
1000525e:	ff 15 b0 c0 00 10    	call   DWORD PTR ds:0x1000c0b0
10005264:	5f                   	pop    edi
10005265:	5e                   	pop    esi
10005266:	c3                   	ret
10005267:	68 40 01 00 00       	push   0x140
1000526c:	6a 00                	push   0x0
1000526e:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10005274:	ff 15 7c c0 00 10    	call   DWORD PTR ds:0x1000c07c
1000527a:	85 c0                	test   eax,eax
1000527c:	a3 a8 5a 1f 10       	mov    ds:0x101f5aa8,eax
10005281:	75 01                	jne    0x10005284
10005283:	c3                   	ret
10005284:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10005288:	83 25 a0 5a 1f 10 00 	and    DWORD PTR ds:0x101f5aa0,0x0
1000528f:	83 25 a4 5a 1f 10 00 	and    DWORD PTR ds:0x101f5aa4,0x0
10005296:	6a 01                	push   0x1
10005298:	a3 9c 5a 1f 10       	mov    ds:0x101f5a9c,eax
1000529d:	89 0d ac 5a 1f 10    	mov    DWORD PTR ds:0x101f5aac,ecx
100052a3:	c7 05 94 5a 1f 10 10 	mov    DWORD PTR ds:0x101f5a94,0x10
100052aa:	00 00 00 
100052ad:	58                   	pop    eax
100052ae:	c3                   	ret
100052af:	a1 a4 5a 1f 10       	mov    eax,ds:0x101f5aa4
100052b4:	8d 0c 80             	lea    ecx,[eax+eax*4]
100052b7:	a1 a8 5a 1f 10       	mov    eax,ds:0x101f5aa8
100052bc:	8d 0c 88             	lea    ecx,[eax+ecx*4]
100052bf:	3b c1                	cmp    eax,ecx
100052c1:	73 14                	jae    0x100052d7
100052c3:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
100052c7:	2b 50 0c             	sub    edx,DWORD PTR [eax+0xc]
100052ca:	81 fa 00 00 10 00    	cmp    edx,0x100000
100052d0:	72 07                	jb     0x100052d9
100052d2:	83 c0 14             	add    eax,0x14
100052d5:	eb e8                	jmp    0x100052bf
100052d7:	33 c0                	xor    eax,eax
100052d9:	c3                   	ret
100052da:	55                   	push   ebp
100052db:	8b ec                	mov    ebp,esp
100052dd:	83 ec 10             	sub    esp,0x10
100052e0:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100052e3:	53                   	push   ebx
100052e4:	56                   	push   esi
100052e5:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100052e8:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
100052eb:	57                   	push   edi
100052ec:	8b fe                	mov    edi,esi
100052ee:	83 c6 fc             	add    esi,0xfffffffc
100052f1:	2b 79 0c             	sub    edi,DWORD PTR [ecx+0xc]
100052f4:	c1 ef 0f             	shr    edi,0xf
100052f7:	8b cf                	mov    ecx,edi
100052f9:	69 c9 04 02 00 00    	imul   ecx,ecx,0x204
100052ff:	8d 8c 01 44 01 00 00 	lea    ecx,[ecx+eax*1+0x144]
10005306:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
10005309:	8b 0e                	mov    ecx,DWORD PTR [esi]
1000530b:	49                   	dec    ecx
1000530c:	f6 c1 01             	test   cl,0x1
1000530f:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
10005312:	0f 85 e6 02 00 00    	jne    0x100055fe
10005318:	8b 14 31             	mov    edx,DWORD PTR [ecx+esi*1]
1000531b:	8d 1c 31             	lea    ebx,[ecx+esi*1]
1000531e:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
10005321:	8b 56 fc             	mov    edx,DWORD PTR [esi-0x4]
10005324:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
10005327:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
1000532a:	f6 c2 01             	test   dl,0x1
1000532d:	89 5d 0c             	mov    DWORD PTR [ebp+0xc],ebx
10005330:	75 7e                	jne    0x100053b0
10005332:	c1 fa 04             	sar    edx,0x4
10005335:	4a                   	dec    edx
10005336:	83 fa 3f             	cmp    edx,0x3f
10005339:	76 03                	jbe    0x1000533e
1000533b:	6a 3f                	push   0x3f
1000533d:	5a                   	pop    edx
1000533e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10005341:	3b 4b 08             	cmp    ecx,DWORD PTR [ebx+0x8]
10005344:	75 4c                	jne    0x10005392
10005346:	83 fa 20             	cmp    edx,0x20
10005349:	73 1e                	jae    0x10005369
1000534b:	bb 00 00 00 80       	mov    ebx,0x80000000
10005350:	8b ca                	mov    ecx,edx
10005352:	d3 eb                	shr    ebx,cl
10005354:	8d 4c 02 04          	lea    ecx,[edx+eax*1+0x4]
10005358:	f7 d3                	not    ebx
1000535a:	21 5c b8 44          	and    DWORD PTR [eax+edi*4+0x44],ebx
1000535e:	fe 09                	dec    BYTE PTR [ecx]
10005360:	75 28                	jne    0x1000538a
10005362:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10005365:	21 19                	and    DWORD PTR [ecx],ebx
10005367:	eb 21                	jmp    0x1000538a
10005369:	8d 4a e0             	lea    ecx,[edx-0x20]
1000536c:	bb 00 00 00 80       	mov    ebx,0x80000000
10005371:	d3 eb                	shr    ebx,cl
10005373:	8d 4c 02 04          	lea    ecx,[edx+eax*1+0x4]
10005377:	f7 d3                	not    ebx
10005379:	21 9c b8 c4 00 00 00 	and    DWORD PTR [eax+edi*4+0xc4],ebx
10005380:	fe 09                	dec    BYTE PTR [ecx]
10005382:	75 06                	jne    0x1000538a
10005384:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10005387:	21 59 04             	and    DWORD PTR [ecx+0x4],ebx
1000538a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000538d:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10005390:	eb 03                	jmp    0x10005395
10005392:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10005395:	8b 53 08             	mov    edx,DWORD PTR [ebx+0x8]
10005398:	8b 5b 04             	mov    ebx,DWORD PTR [ebx+0x4]
1000539b:	03 4d f4             	add    ecx,DWORD PTR [ebp-0xc]
1000539e:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
100053a1:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
100053a4:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100053a7:	8b 5a 04             	mov    ebx,DWORD PTR [edx+0x4]
100053aa:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
100053ad:	89 53 08             	mov    DWORD PTR [ebx+0x8],edx
100053b0:	8b d1                	mov    edx,ecx
100053b2:	c1 fa 04             	sar    edx,0x4
100053b5:	4a                   	dec    edx
100053b6:	83 fa 3f             	cmp    edx,0x3f
100053b9:	76 03                	jbe    0x100053be
100053bb:	6a 3f                	push   0x3f
100053bd:	5a                   	pop    edx
100053be:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
100053c1:	83 e3 01             	and    ebx,0x1
100053c4:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
100053c7:	0f 85 94 00 00 00    	jne    0x10005461
100053cd:	2b 75 f8             	sub    esi,DWORD PTR [ebp-0x8]
100053d0:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
100053d3:	c1 fb 04             	sar    ebx,0x4
100053d6:	6a 3f                	push   0x3f
100053d8:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
100053db:	4b                   	dec    ebx
100053dc:	5e                   	pop    esi
100053dd:	3b de                	cmp    ebx,esi
100053df:	76 02                	jbe    0x100053e3
100053e1:	8b de                	mov    ebx,esi
100053e3:	03 4d f8             	add    ecx,DWORD PTR [ebp-0x8]
100053e6:	8b d1                	mov    edx,ecx
100053e8:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100053eb:	c1 fa 04             	sar    edx,0x4
100053ee:	4a                   	dec    edx
100053ef:	3b d6                	cmp    edx,esi
100053f1:	76 02                	jbe    0x100053f5
100053f3:	8b d6                	mov    edx,esi
100053f5:	3b da                	cmp    ebx,edx
100053f7:	74 63                	je     0x1000545c
100053f9:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100053fc:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
100053ff:	3b 71 08             	cmp    esi,DWORD PTR [ecx+0x8]
10005402:	75 40                	jne    0x10005444
10005404:	83 fb 20             	cmp    ebx,0x20
10005407:	73 1c                	jae    0x10005425
10005409:	be 00 00 00 80       	mov    esi,0x80000000
1000540e:	8b cb                	mov    ecx,ebx
10005410:	d3 ee                	shr    esi,cl
10005412:	f7 d6                	not    esi
10005414:	21 74 b8 44          	and    DWORD PTR [eax+edi*4+0x44],esi
10005418:	fe 4c 03 04          	dec    BYTE PTR [ebx+eax*1+0x4]
1000541c:	75 26                	jne    0x10005444
1000541e:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10005421:	21 31                	and    DWORD PTR [ecx],esi
10005423:	eb 1f                	jmp    0x10005444
10005425:	8d 4b e0             	lea    ecx,[ebx-0x20]
10005428:	be 00 00 00 80       	mov    esi,0x80000000
1000542d:	d3 ee                	shr    esi,cl
1000542f:	f7 d6                	not    esi
10005431:	21 b4 b8 c4 00 00 00 	and    DWORD PTR [eax+edi*4+0xc4],esi
10005438:	fe 4c 03 04          	dec    BYTE PTR [ebx+eax*1+0x4]
1000543c:	75 06                	jne    0x10005444
1000543e:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10005441:	21 71 04             	and    DWORD PTR [ecx+0x4],esi
10005444:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10005447:	8b 71 08             	mov    esi,DWORD PTR [ecx+0x8]
1000544a:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1000544d:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
10005450:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10005453:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
10005456:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
10005459:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
1000545c:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1000545f:	eb 03                	jmp    0x10005464
10005461:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10005464:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
10005468:	75 08                	jne    0x10005472
1000546a:	3b da                	cmp    ebx,edx
1000546c:	0f 84 81 00 00 00    	je     0x100054f3
10005472:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
10005475:	8b 5c d1 04          	mov    ebx,DWORD PTR [ecx+edx*8+0x4]
10005479:	8d 0c d1             	lea    ecx,[ecx+edx*8]
1000547c:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
1000547f:	89 4e 08             	mov    DWORD PTR [esi+0x8],ecx
10005482:	89 71 04             	mov    DWORD PTR [ecx+0x4],esi
10005485:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10005488:	89 71 08             	mov    DWORD PTR [ecx+0x8],esi
1000548b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000548e:	3b 4e 08             	cmp    ecx,DWORD PTR [esi+0x8]
10005491:	75 60                	jne    0x100054f3
10005493:	8a 4c 02 04          	mov    cl,BYTE PTR [edx+eax*1+0x4]
10005497:	83 fa 20             	cmp    edx,0x20
1000549a:	88 4d 0f             	mov    BYTE PTR [ebp+0xf],cl
1000549d:	fe c1                	inc    cl
1000549f:	88 4c 02 04          	mov    BYTE PTR [edx+eax*1+0x4],cl
100054a3:	73 25                	jae    0x100054ca
100054a5:	80 7d 0f 00          	cmp    BYTE PTR [ebp+0xf],0x0
100054a9:	75 0e                	jne    0x100054b9
100054ab:	bb 00 00 00 80       	mov    ebx,0x80000000
100054b0:	8b ca                	mov    ecx,edx
100054b2:	d3 eb                	shr    ebx,cl
100054b4:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100054b7:	09 19                	or     DWORD PTR [ecx],ebx
100054b9:	bb 00 00 00 80       	mov    ebx,0x80000000
100054be:	8b ca                	mov    ecx,edx
100054c0:	d3 eb                	shr    ebx,cl
100054c2:	8d 44 b8 44          	lea    eax,[eax+edi*4+0x44]
100054c6:	09 18                	or     DWORD PTR [eax],ebx
100054c8:	eb 29                	jmp    0x100054f3
100054ca:	80 7d 0f 00          	cmp    BYTE PTR [ebp+0xf],0x0
100054ce:	75 10                	jne    0x100054e0
100054d0:	8d 4a e0             	lea    ecx,[edx-0x20]
100054d3:	bb 00 00 00 80       	mov    ebx,0x80000000
100054d8:	d3 eb                	shr    ebx,cl
100054da:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100054dd:	09 59 04             	or     DWORD PTR [ecx+0x4],ebx
100054e0:	8d 4a e0             	lea    ecx,[edx-0x20]
100054e3:	ba 00 00 00 80       	mov    edx,0x80000000
100054e8:	d3 ea                	shr    edx,cl
100054ea:	8d 84 b8 c4 00 00 00 	lea    eax,[eax+edi*4+0xc4]
100054f1:	09 10                	or     DWORD PTR [eax],edx
100054f3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100054f6:	89 06                	mov    DWORD PTR [esi],eax
100054f8:	89 44 30 fc          	mov    DWORD PTR [eax+esi*1-0x4],eax
100054fc:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100054ff:	ff 08                	dec    DWORD PTR [eax]
10005501:	0f 85 f7 00 00 00    	jne    0x100055fe
10005507:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
1000550c:	85 c0                	test   eax,eax
1000550e:	0f 84 dc 00 00 00    	je     0x100055f0
10005514:	8b 0d 98 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5a98
1000551a:	8b 35 b8 c0 00 10    	mov    esi,DWORD PTR ds:0x1000c0b8
10005520:	c1 e1 0f             	shl    ecx,0xf
10005523:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
10005526:	bb 00 80 00 00       	mov    ebx,0x8000
1000552b:	68 00 40 00 00       	push   0x4000
10005530:	53                   	push   ebx
10005531:	51                   	push   ecx
10005532:	ff d6                	call   esi
10005534:	8b 0d 98 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5a98
1000553a:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
1000553f:	ba 00 00 00 80       	mov    edx,0x80000000
10005544:	d3 ea                	shr    edx,cl
10005546:	09 50 08             	or     DWORD PTR [eax+0x8],edx
10005549:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
1000554e:	8b 0d 98 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5a98
10005554:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
10005557:	83 a4 88 c4 00 00 00 	and    DWORD PTR [eax+ecx*4+0xc4],0x0
1000555e:	00 
1000555f:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
10005564:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
10005567:	fe 48 43             	dec    BYTE PTR [eax+0x43]
1000556a:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
1000556f:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
10005572:	80 79 43 00          	cmp    BYTE PTR [ecx+0x43],0x0
10005576:	75 09                	jne    0x10005581
10005578:	83 60 04 fe          	and    DWORD PTR [eax+0x4],0xfffffffe
1000557c:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
10005581:	83 78 08 ff          	cmp    DWORD PTR [eax+0x8],0xffffffff
10005585:	75 69                	jne    0x100055f0
10005587:	53                   	push   ebx
10005588:	6a 00                	push   0x0
1000558a:	ff 70 0c             	push   DWORD PTR [eax+0xc]
1000558d:	ff d6                	call   esi
1000558f:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
10005594:	ff 70 10             	push   DWORD PTR [eax+0x10]
10005597:	6a 00                	push   0x0
10005599:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
1000559f:	ff 15 78 c0 00 10    	call   DWORD PTR ds:0x1000c078
100055a5:	a1 a4 5a 1f 10       	mov    eax,ds:0x101f5aa4
100055aa:	8b 15 a8 5a 1f 10    	mov    edx,DWORD PTR ds:0x101f5aa8
100055b0:	8d 04 80             	lea    eax,[eax+eax*4]
100055b3:	c1 e0 02             	shl    eax,0x2
100055b6:	8b c8                	mov    ecx,eax
100055b8:	a1 a0 5a 1f 10       	mov    eax,ds:0x101f5aa0
100055bd:	2b c8                	sub    ecx,eax
100055bf:	8d 4c 11 ec          	lea    ecx,[ecx+edx*1-0x14]
100055c3:	51                   	push   ecx
100055c4:	8d 48 14             	lea    ecx,[eax+0x14]
100055c7:	51                   	push   ecx
100055c8:	50                   	push   eax
100055c9:	e8 92 33 00 00       	call   0x10008960
100055ce:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100055d1:	83 c4 0c             	add    esp,0xc
100055d4:	ff 0d a4 5a 1f 10    	dec    DWORD PTR ds:0x101f5aa4
100055da:	3b 05 a0 5a 1f 10    	cmp    eax,DWORD PTR ds:0x101f5aa0
100055e0:	76 04                	jbe    0x100055e6
100055e2:	83 6d 08 14          	sub    DWORD PTR [ebp+0x8],0x14
100055e6:	a1 a8 5a 1f 10       	mov    eax,ds:0x101f5aa8
100055eb:	a3 9c 5a 1f 10       	mov    ds:0x101f5a9c,eax
100055f0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100055f3:	89 3d 98 5a 1f 10    	mov    DWORD PTR ds:0x101f5a98,edi
100055f9:	a3 a0 5a 1f 10       	mov    ds:0x101f5aa0,eax
100055fe:	5f                   	pop    edi
100055ff:	5e                   	pop    esi
10005600:	5b                   	pop    ebx
10005601:	c9                   	leave
10005602:	c3                   	ret
10005603:	55                   	push   ebp
10005604:	8b ec                	mov    ebp,esp
10005606:	83 ec 14             	sub    esp,0x14
10005609:	a1 a4 5a 1f 10       	mov    eax,ds:0x101f5aa4
1000560e:	8b 15 a8 5a 1f 10    	mov    edx,DWORD PTR ds:0x101f5aa8
10005614:	53                   	push   ebx
10005615:	56                   	push   esi
10005616:	8d 04 80             	lea    eax,[eax+eax*4]
10005619:	57                   	push   edi
1000561a:	8d 3c 82             	lea    edi,[edx+eax*4]
1000561d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10005620:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
10005623:	8d 48 17             	lea    ecx,[eax+0x17]
10005626:	83 e1 f0             	and    ecx,0xfffffff0
10005629:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
1000562c:	c1 f9 04             	sar    ecx,0x4
1000562f:	49                   	dec    ecx
10005630:	83 f9 20             	cmp    ecx,0x20
10005633:	7d 0e                	jge    0x10005643
10005635:	83 ce ff             	or     esi,0xffffffff
10005638:	d3 ee                	shr    esi,cl
1000563a:	83 4d f8 ff          	or     DWORD PTR [ebp-0x8],0xffffffff
1000563e:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
10005641:	eb 10                	jmp    0x10005653
10005643:	83 c1 e0             	add    ecx,0xffffffe0
10005646:	83 c8 ff             	or     eax,0xffffffff
10005649:	33 f6                	xor    esi,esi
1000564b:	d3 e8                	shr    eax,cl
1000564d:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
10005650:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10005653:	a1 9c 5a 1f 10       	mov    eax,ds:0x101f5a9c
10005658:	8b d8                	mov    ebx,eax
1000565a:	3b df                	cmp    ebx,edi
1000565c:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
1000565f:	73 19                	jae    0x1000567a
10005661:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10005664:	8b 3b                	mov    edi,DWORD PTR [ebx]
10005666:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
10005669:	23 fe                	and    edi,esi
1000566b:	0b cf                	or     ecx,edi
1000566d:	75 0b                	jne    0x1000567a
1000566f:	83 c3 14             	add    ebx,0x14
10005672:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
10005675:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
10005678:	72 e7                	jb     0x10005661
1000567a:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
1000567d:	75 79                	jne    0x100056f8
1000567f:	8b da                	mov    ebx,edx
10005681:	3b d8                	cmp    ebx,eax
10005683:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
10005686:	73 15                	jae    0x1000569d
10005688:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1000568b:	8b 3b                	mov    edi,DWORD PTR [ebx]
1000568d:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
10005690:	23 fe                	and    edi,esi
10005692:	0b cf                	or     ecx,edi
10005694:	75 05                	jne    0x1000569b
10005696:	83 c3 14             	add    ebx,0x14
10005699:	eb e6                	jmp    0x10005681
1000569b:	3b d8                	cmp    ebx,eax
1000569d:	75 59                	jne    0x100056f8
1000569f:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
100056a2:	73 11                	jae    0x100056b5
100056a4:	83 7b 08 00          	cmp    DWORD PTR [ebx+0x8],0x0
100056a8:	75 08                	jne    0x100056b2
100056aa:	83 c3 14             	add    ebx,0x14
100056ad:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
100056b0:	eb ed                	jmp    0x1000569f
100056b2:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
100056b5:	75 26                	jne    0x100056dd
100056b7:	8b da                	mov    ebx,edx
100056b9:	3b d8                	cmp    ebx,eax
100056bb:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
100056be:	73 0d                	jae    0x100056cd
100056c0:	83 7b 08 00          	cmp    DWORD PTR [ebx+0x8],0x0
100056c4:	75 05                	jne    0x100056cb
100056c6:	83 c3 14             	add    ebx,0x14
100056c9:	eb ee                	jmp    0x100056b9
100056cb:	3b d8                	cmp    ebx,eax
100056cd:	75 0e                	jne    0x100056dd
100056cf:	e8 38 02 00 00       	call   0x1000590c
100056d4:	8b d8                	mov    ebx,eax
100056d6:	85 db                	test   ebx,ebx
100056d8:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
100056db:	74 14                	je     0x100056f1
100056dd:	53                   	push   ebx
100056de:	e8 da 02 00 00       	call   0x100059bd
100056e3:	59                   	pop    ecx
100056e4:	8b 4b 10             	mov    ecx,DWORD PTR [ebx+0x10]
100056e7:	89 01                	mov    DWORD PTR [ecx],eax
100056e9:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
100056ec:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
100056ef:	75 07                	jne    0x100056f8
100056f1:	33 c0                	xor    eax,eax
100056f3:	e9 0f 02 00 00       	jmp    0x10005907
100056f8:	89 1d 9c 5a 1f 10    	mov    DWORD PTR ds:0x101f5a9c,ebx
100056fe:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
10005701:	8b 10                	mov    edx,DWORD PTR [eax]
10005703:	83 fa ff             	cmp    edx,0xffffffff
10005706:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
10005709:	74 14                	je     0x1000571f
1000570b:	8b 8c 90 c4 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xc4]
10005712:	8b 7c 90 44          	mov    edi,DWORD PTR [eax+edx*4+0x44]
10005716:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
10005719:	23 fe                	and    edi,esi
1000571b:	0b cf                	or     ecx,edi
1000571d:	75 37                	jne    0x10005756
1000571f:	8b 90 c4 00 00 00    	mov    edx,DWORD PTR [eax+0xc4]
10005725:	8b 70 44             	mov    esi,DWORD PTR [eax+0x44]
10005728:	23 55 f8             	and    edx,DWORD PTR [ebp-0x8]
1000572b:	23 75 f4             	and    esi,DWORD PTR [ebp-0xc]
1000572e:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
10005732:	8d 48 44             	lea    ecx,[eax+0x44]
10005735:	0b d6                	or     edx,esi
10005737:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
1000573a:	75 17                	jne    0x10005753
1000573c:	8b 91 84 00 00 00    	mov    edx,DWORD PTR [ecx+0x84]
10005742:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
10005745:	23 55 f8             	and    edx,DWORD PTR [ebp-0x8]
10005748:	83 c1 04             	add    ecx,0x4
1000574b:	8b fe                	mov    edi,esi
1000574d:	23 39                	and    edi,DWORD PTR [ecx]
1000574f:	0b d7                	or     edx,edi
10005751:	74 e9                	je     0x1000573c
10005753:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
10005756:	8b ca                	mov    ecx,edx
10005758:	33 ff                	xor    edi,edi
1000575a:	69 c9 04 02 00 00    	imul   ecx,ecx,0x204
10005760:	8d 8c 01 44 01 00 00 	lea    ecx,[ecx+eax*1+0x144]
10005767:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
1000576a:	8b 4c 90 44          	mov    ecx,DWORD PTR [eax+edx*4+0x44]
1000576e:	23 ce                	and    ecx,esi
10005770:	75 0d                	jne    0x1000577f
10005772:	8b 8c 90 c4 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xc4]
10005779:	6a 20                	push   0x20
1000577b:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
1000577e:	5f                   	pop    edi
1000577f:	85 c9                	test   ecx,ecx
10005781:	7c 05                	jl     0x10005788
10005783:	d1 e1                	shl    ecx,1
10005785:	47                   	inc    edi
10005786:	eb f7                	jmp    0x1000577f
10005788:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1000578b:	8b 54 f9 04          	mov    edx,DWORD PTR [ecx+edi*8+0x4]
1000578f:	8b 0a                	mov    ecx,DWORD PTR [edx]
10005791:	2b 4d f0             	sub    ecx,DWORD PTR [ebp-0x10]
10005794:	8b f1                	mov    esi,ecx
10005796:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
10005799:	c1 fe 04             	sar    esi,0x4
1000579c:	4e                   	dec    esi
1000579d:	83 fe 3f             	cmp    esi,0x3f
100057a0:	7e 03                	jle    0x100057a5
100057a2:	6a 3f                	push   0x3f
100057a4:	5e                   	pop    esi
100057a5:	3b f7                	cmp    esi,edi
100057a7:	0f 84 0d 01 00 00    	je     0x100058ba
100057ad:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
100057b0:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
100057b3:	75 61                	jne    0x10005816
100057b5:	83 ff 20             	cmp    edi,0x20
100057b8:	7d 2b                	jge    0x100057e5
100057ba:	bb 00 00 00 80       	mov    ebx,0x80000000
100057bf:	8b cf                	mov    ecx,edi
100057c1:	d3 eb                	shr    ebx,cl
100057c3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100057c6:	8d 7c 38 04          	lea    edi,[eax+edi*1+0x4]
100057ca:	f7 d3                	not    ebx
100057cc:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
100057cf:	23 5c 88 44          	and    ebx,DWORD PTR [eax+ecx*4+0x44]
100057d3:	89 5c 88 44          	mov    DWORD PTR [eax+ecx*4+0x44],ebx
100057d7:	fe 0f                	dec    BYTE PTR [edi]
100057d9:	75 38                	jne    0x10005813
100057db:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100057de:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
100057e1:	21 0b                	and    DWORD PTR [ebx],ecx
100057e3:	eb 31                	jmp    0x10005816
100057e5:	8d 4f e0             	lea    ecx,[edi-0x20]
100057e8:	bb 00 00 00 80       	mov    ebx,0x80000000
100057ed:	d3 eb                	shr    ebx,cl
100057ef:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100057f2:	8d 7c 38 04          	lea    edi,[eax+edi*1+0x4]
100057f6:	8d 8c 88 c4 00 00 00 	lea    ecx,[eax+ecx*4+0xc4]
100057fd:	f7 d3                	not    ebx
100057ff:	21 19                	and    DWORD PTR [ecx],ebx
10005801:	fe 0f                	dec    BYTE PTR [edi]
10005803:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
10005806:	75 0b                	jne    0x10005813
10005808:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1000580b:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
1000580e:	21 4b 04             	and    DWORD PTR [ebx+0x4],ecx
10005811:	eb 03                	jmp    0x10005816
10005813:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10005816:	8b 4a 08             	mov    ecx,DWORD PTR [edx+0x8]
10005819:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
1000581c:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
10005820:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
10005823:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
10005826:	8b 7a 08             	mov    edi,DWORD PTR [edx+0x8]
10005829:	89 79 08             	mov    DWORD PTR [ecx+0x8],edi
1000582c:	0f 84 94 00 00 00    	je     0x100058c6
10005832:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10005835:	8b 7c f1 04          	mov    edi,DWORD PTR [ecx+esi*8+0x4]
10005839:	8d 0c f1             	lea    ecx,[ecx+esi*8]
1000583c:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
1000583f:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
10005842:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
10005845:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
10005848:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
1000584b:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
1000584e:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
10005851:	75 64                	jne    0x100058b7
10005853:	8a 4c 06 04          	mov    cl,BYTE PTR [esi+eax*1+0x4]
10005857:	83 fe 20             	cmp    esi,0x20
1000585a:	88 4d 0b             	mov    BYTE PTR [ebp+0xb],cl
1000585d:	7d 29                	jge    0x10005888
1000585f:	fe c1                	inc    cl
10005861:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
10005865:	88 4c 06 04          	mov    BYTE PTR [esi+eax*1+0x4],cl
10005869:	75 0b                	jne    0x10005876
1000586b:	bf 00 00 00 80       	mov    edi,0x80000000
10005870:	8b ce                	mov    ecx,esi
10005872:	d3 ef                	shr    edi,cl
10005874:	09 3b                	or     DWORD PTR [ebx],edi
10005876:	bf 00 00 00 80       	mov    edi,0x80000000
1000587b:	8b ce                	mov    ecx,esi
1000587d:	d3 ef                	shr    edi,cl
1000587f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10005882:	09 7c 88 44          	or     DWORD PTR [eax+ecx*4+0x44],edi
10005886:	eb 2f                	jmp    0x100058b7
10005888:	fe c1                	inc    cl
1000588a:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
1000588e:	88 4c 06 04          	mov    BYTE PTR [esi+eax*1+0x4],cl
10005892:	75 0d                	jne    0x100058a1
10005894:	8d 4e e0             	lea    ecx,[esi-0x20]
10005897:	bf 00 00 00 80       	mov    edi,0x80000000
1000589c:	d3 ef                	shr    edi,cl
1000589e:	09 7b 04             	or     DWORD PTR [ebx+0x4],edi
100058a1:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100058a4:	8d bc 88 c4 00 00 00 	lea    edi,[eax+ecx*4+0xc4]
100058ab:	8d 4e e0             	lea    ecx,[esi-0x20]
100058ae:	be 00 00 00 80       	mov    esi,0x80000000
100058b3:	d3 ee                	shr    esi,cl
100058b5:	09 37                	or     DWORD PTR [edi],esi
100058b7:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100058ba:	85 c9                	test   ecx,ecx
100058bc:	74 0b                	je     0x100058c9
100058be:	89 0a                	mov    DWORD PTR [edx],ecx
100058c0:	89 4c 11 fc          	mov    DWORD PTR [ecx+edx*1-0x4],ecx
100058c4:	eb 03                	jmp    0x100058c9
100058c6:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100058c9:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
100058cc:	03 d1                	add    edx,ecx
100058ce:	8d 4e 01             	lea    ecx,[esi+0x1]
100058d1:	89 0a                	mov    DWORD PTR [edx],ecx
100058d3:	89 4c 32 fc          	mov    DWORD PTR [edx+esi*1-0x4],ecx
100058d7:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
100058da:	8b 0e                	mov    ecx,DWORD PTR [esi]
100058dc:	85 c9                	test   ecx,ecx
100058de:	8d 79 01             	lea    edi,[ecx+0x1]
100058e1:	89 3e                	mov    DWORD PTR [esi],edi
100058e3:	75 1a                	jne    0x100058ff
100058e5:	3b 1d a0 5a 1f 10    	cmp    ebx,DWORD PTR ds:0x101f5aa0
100058eb:	75 12                	jne    0x100058ff
100058ed:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100058f0:	3b 0d 98 5a 1f 10    	cmp    ecx,DWORD PTR ds:0x101f5a98
100058f6:	75 07                	jne    0x100058ff
100058f8:	83 25 a0 5a 1f 10 00 	and    DWORD PTR ds:0x101f5aa0,0x0
100058ff:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10005902:	89 08                	mov    DWORD PTR [eax],ecx
10005904:	8d 42 04             	lea    eax,[edx+0x4]
10005907:	5f                   	pop    edi
10005908:	5e                   	pop    esi
10005909:	5b                   	pop    ebx
1000590a:	c9                   	leave
1000590b:	c3                   	ret
1000590c:	a1 a4 5a 1f 10       	mov    eax,ds:0x101f5aa4
10005911:	8b 0d 94 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5a94
10005917:	56                   	push   esi
10005918:	57                   	push   edi
10005919:	33 ff                	xor    edi,edi
1000591b:	3b c1                	cmp    eax,ecx
1000591d:	75 30                	jne    0x1000594f
1000591f:	8d 44 89 50          	lea    eax,[ecx+ecx*4+0x50]
10005923:	c1 e0 02             	shl    eax,0x2
10005926:	50                   	push   eax
10005927:	ff 35 a8 5a 1f 10    	push   DWORD PTR ds:0x101f5aa8
1000592d:	57                   	push   edi
1000592e:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10005934:	ff 15 04 c0 00 10    	call   DWORD PTR ds:0x1000c004
1000593a:	3b c7                	cmp    eax,edi
1000593c:	74 61                	je     0x1000599f
1000593e:	83 05 94 5a 1f 10 10 	add    DWORD PTR ds:0x101f5a94,0x10
10005945:	a3 a8 5a 1f 10       	mov    ds:0x101f5aa8,eax
1000594a:	a1 a4 5a 1f 10       	mov    eax,ds:0x101f5aa4
1000594f:	8b 0d a8 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5aa8
10005955:	68 c4 41 00 00       	push   0x41c4
1000595a:	6a 08                	push   0x8
1000595c:	8d 04 80             	lea    eax,[eax+eax*4]
1000595f:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10005965:	8d 34 81             	lea    esi,[ecx+eax*4]
10005968:	ff 15 7c c0 00 10    	call   DWORD PTR ds:0x1000c07c
1000596e:	3b c7                	cmp    eax,edi
10005970:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
10005973:	74 2a                	je     0x1000599f
10005975:	6a 04                	push   0x4
10005977:	68 00 20 00 00       	push   0x2000
1000597c:	68 00 00 10 00       	push   0x100000
10005981:	57                   	push   edi
10005982:	ff 15 00 c0 00 10    	call   DWORD PTR ds:0x1000c000
10005988:	3b c7                	cmp    eax,edi
1000598a:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
1000598d:	75 14                	jne    0x100059a3
1000598f:	ff 76 10             	push   DWORD PTR [esi+0x10]
10005992:	57                   	push   edi
10005993:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10005999:	ff 15 78 c0 00 10    	call   DWORD PTR ds:0x1000c078
1000599f:	33 c0                	xor    eax,eax
100059a1:	eb 17                	jmp    0x100059ba
100059a3:	83 4e 08 ff          	or     DWORD PTR [esi+0x8],0xffffffff
100059a7:	89 3e                	mov    DWORD PTR [esi],edi
100059a9:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
100059ac:	ff 05 a4 5a 1f 10    	inc    DWORD PTR ds:0x101f5aa4
100059b2:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
100059b5:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
100059b8:	8b c6                	mov    eax,esi
100059ba:	5f                   	pop    edi
100059bb:	5e                   	pop    esi
100059bc:	c3                   	ret
100059bd:	55                   	push   ebp
100059be:	8b ec                	mov    ebp,esp
100059c0:	51                   	push   ecx
100059c1:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100059c4:	53                   	push   ebx
100059c5:	56                   	push   esi
100059c6:	57                   	push   edi
100059c7:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
100059ca:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
100059cd:	33 db                	xor    ebx,ebx
100059cf:	85 c0                	test   eax,eax
100059d1:	7c 05                	jl     0x100059d8
100059d3:	d1 e0                	shl    eax,1
100059d5:	43                   	inc    ebx
100059d6:	eb f7                	jmp    0x100059cf
100059d8:	8b c3                	mov    eax,ebx
100059da:	6a 3f                	push   0x3f
100059dc:	69 c0 04 02 00 00    	imul   eax,eax,0x204
100059e2:	5a                   	pop    edx
100059e3:	8d 84 30 44 01 00 00 	lea    eax,[eax+esi*1+0x144]
100059ea:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100059ed:	89 40 08             	mov    DWORD PTR [eax+0x8],eax
100059f0:	89 40 04             	mov    DWORD PTR [eax+0x4],eax
100059f3:	83 c0 08             	add    eax,0x8
100059f6:	4a                   	dec    edx
100059f7:	75 f4                	jne    0x100059ed
100059f9:	8b fb                	mov    edi,ebx
100059fb:	6a 04                	push   0x4
100059fd:	c1 e7 0f             	shl    edi,0xf
10005a00:	03 79 0c             	add    edi,DWORD PTR [ecx+0xc]
10005a03:	68 00 10 00 00       	push   0x1000
10005a08:	68 00 80 00 00       	push   0x8000
10005a0d:	57                   	push   edi
10005a0e:	ff 15 00 c0 00 10    	call   DWORD PTR ds:0x1000c000
10005a14:	85 c0                	test   eax,eax
10005a16:	75 08                	jne    0x10005a20
10005a18:	83 c8 ff             	or     eax,0xffffffff
10005a1b:	e9 93 00 00 00       	jmp    0x10005ab3
10005a20:	8d 97 00 70 00 00    	lea    edx,[edi+0x7000]
10005a26:	3b fa                	cmp    edi,edx
10005a28:	77 3c                	ja     0x10005a66
10005a2a:	8d 47 10             	lea    eax,[edi+0x10]
10005a2d:	83 48 f8 ff          	or     DWORD PTR [eax-0x8],0xffffffff
10005a31:	83 88 ec 0f 00 00 ff 	or     DWORD PTR [eax+0xfec],0xffffffff
10005a38:	8d 88 fc 0f 00 00    	lea    ecx,[eax+0xffc]
10005a3e:	c7 40 fc f0 0f 00 00 	mov    DWORD PTR [eax-0x4],0xff0
10005a45:	89 08                	mov    DWORD PTR [eax],ecx
10005a47:	8d 88 fc ef ff ff    	lea    ecx,[eax-0x1004]
10005a4d:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10005a50:	c7 80 e8 0f 00 00 f0 	mov    DWORD PTR [eax+0xfe8],0xff0
10005a57:	0f 00 00 
10005a5a:	05 00 10 00 00       	add    eax,0x1000
10005a5f:	8d 48 f0             	lea    ecx,[eax-0x10]
10005a62:	3b ca                	cmp    ecx,edx
10005a64:	76 c7                	jbe    0x10005a2d
10005a66:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10005a69:	8d 4f 0c             	lea    ecx,[edi+0xc]
10005a6c:	05 f8 01 00 00       	add    eax,0x1f8
10005a71:	6a 01                	push   0x1
10005a73:	5f                   	pop    edi
10005a74:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10005a77:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10005a7a:	8d 4a 0c             	lea    ecx,[edx+0xc]
10005a7d:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
10005a80:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10005a83:	83 64 9e 44 00       	and    DWORD PTR [esi+ebx*4+0x44],0x0
10005a88:	89 bc 9e c4 00 00 00 	mov    DWORD PTR [esi+ebx*4+0xc4],edi
10005a8f:	8a 46 43             	mov    al,BYTE PTR [esi+0x43]
10005a92:	8a c8                	mov    cl,al
10005a94:	fe c1                	inc    cl
10005a96:	84 c0                	test   al,al
10005a98:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10005a9b:	88 4e 43             	mov    BYTE PTR [esi+0x43],cl
10005a9e:	75 03                	jne    0x10005aa3
10005aa0:	09 78 04             	or     DWORD PTR [eax+0x4],edi
10005aa3:	ba 00 00 00 80       	mov    edx,0x80000000
10005aa8:	8b cb                	mov    ecx,ebx
10005aaa:	d3 ea                	shr    edx,cl
10005aac:	f7 d2                	not    edx
10005aae:	21 50 08             	and    DWORD PTR [eax+0x8],edx
10005ab1:	8b c3                	mov    eax,ebx
10005ab3:	5f                   	pop    edi
10005ab4:	5e                   	pop    esi
10005ab5:	5b                   	pop    ebx
10005ab6:	c9                   	leave
10005ab7:	c3                   	ret
10005ab8:	83 3d a8 eb 00 10 ff 	cmp    DWORD PTR ds:0x1000eba8,0xffffffff
10005abf:	53                   	push   ebx
10005ac0:	55                   	push   ebp
10005ac1:	56                   	push   esi
10005ac2:	57                   	push   edi
10005ac3:	75 07                	jne    0x10005acc
10005ac5:	be 98 eb 00 10       	mov    esi,0x1000eb98
10005aca:	eb 1d                	jmp    0x10005ae9
10005acc:	68 20 20 00 00       	push   0x2020
10005ad1:	6a 00                	push   0x0
10005ad3:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10005ad9:	ff 15 7c c0 00 10    	call   DWORD PTR ds:0x1000c07c
10005adf:	8b f0                	mov    esi,eax
10005ae1:	85 f6                	test   esi,esi
10005ae3:	0f 84 0c 01 00 00    	je     0x10005bf5
10005ae9:	8b 2d 00 c0 00 10    	mov    ebp,DWORD PTR ds:0x1000c000
10005aef:	6a 04                	push   0x4
10005af1:	68 00 20 00 00       	push   0x2000
10005af6:	68 00 00 40 00       	push   0x400000
10005afb:	6a 00                	push   0x0
10005afd:	ff d5                	call   ebp
10005aff:	8b f8                	mov    edi,eax
10005b01:	85 ff                	test   edi,edi
10005b03:	0f 84 d5 00 00 00    	je     0x10005bde
10005b09:	6a 04                	push   0x4
10005b0b:	bb 00 00 01 00       	mov    ebx,0x10000
10005b10:	68 00 10 00 00       	push   0x1000
10005b15:	53                   	push   ebx
10005b16:	57                   	push   edi
10005b17:	ff d5                	call   ebp
10005b19:	85 c0                	test   eax,eax
10005b1b:	0f 84 af 00 00 00    	je     0x10005bd0
10005b21:	b8 98 eb 00 10       	mov    eax,0x1000eb98
10005b26:	3b f0                	cmp    esi,eax
10005b28:	75 1e                	jne    0x10005b48
10005b2a:	83 3d 98 eb 00 10 00 	cmp    DWORD PTR ds:0x1000eb98,0x0
10005b31:	75 05                	jne    0x10005b38
10005b33:	a3 98 eb 00 10       	mov    ds:0x1000eb98,eax
10005b38:	83 3d 9c eb 00 10 00 	cmp    DWORD PTR ds:0x1000eb9c,0x0
10005b3f:	75 1c                	jne    0x10005b5d
10005b41:	a3 9c eb 00 10       	mov    ds:0x1000eb9c,eax
10005b46:	eb 15                	jmp    0x10005b5d
10005b48:	89 06                	mov    DWORD PTR [esi],eax
10005b4a:	a1 9c eb 00 10       	mov    eax,ds:0x1000eb9c
10005b4f:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10005b52:	89 35 9c eb 00 10    	mov    DWORD PTR ds:0x1000eb9c,esi
10005b58:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10005b5b:	89 30                	mov    DWORD PTR [eax],esi
10005b5d:	8d 87 00 00 40 00    	lea    eax,[edi+0x400000]
10005b63:	8d 8e 98 00 00 00    	lea    ecx,[esi+0x98]
10005b69:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
10005b6c:	8d 46 18             	lea    eax,[esi+0x18]
10005b6f:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
10005b72:	89 7e 10             	mov    DWORD PTR [esi+0x10],edi
10005b75:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
10005b78:	33 ed                	xor    ebp,ebp
10005b7a:	b9 f1 00 00 00       	mov    ecx,0xf1
10005b7f:	33 d2                	xor    edx,edx
10005b81:	83 fd 10             	cmp    ebp,0x10
10005b84:	0f 9d c2             	setge  dl
10005b87:	4a                   	dec    edx
10005b88:	23 d1                	and    edx,ecx
10005b8a:	4a                   	dec    edx
10005b8b:	45                   	inc    ebp
10005b8c:	89 10                	mov    DWORD PTR [eax],edx
10005b8e:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10005b91:	83 c0 08             	add    eax,0x8
10005b94:	81 fd 00 04 00 00    	cmp    ebp,0x400
10005b9a:	7c e3                	jl     0x10005b7f
10005b9c:	53                   	push   ebx
10005b9d:	6a 00                	push   0x0
10005b9f:	57                   	push   edi
10005ba0:	e8 fb 30 00 00       	call   0x10008ca0
10005ba5:	83 c4 0c             	add    esp,0xc
10005ba8:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
10005bab:	03 c3                	add    eax,ebx
10005bad:	3b f8                	cmp    edi,eax
10005baf:	73 1b                	jae    0x10005bcc
10005bb1:	80 8f f8 00 00 00 ff 	or     BYTE PTR [edi+0xf8],0xff
10005bb8:	8d 47 08             	lea    eax,[edi+0x8]
10005bbb:	89 07                	mov    DWORD PTR [edi],eax
10005bbd:	c7 47 04 f0 00 00 00 	mov    DWORD PTR [edi+0x4],0xf0
10005bc4:	81 c7 00 10 00 00    	add    edi,0x1000
10005bca:	eb dc                	jmp    0x10005ba8
10005bcc:	8b c6                	mov    eax,esi
10005bce:	eb 27                	jmp    0x10005bf7
10005bd0:	68 00 80 00 00       	push   0x8000
10005bd5:	6a 00                	push   0x0
10005bd7:	57                   	push   edi
10005bd8:	ff 15 b8 c0 00 10    	call   DWORD PTR ds:0x1000c0b8
10005bde:	81 fe 98 eb 00 10    	cmp    esi,0x1000eb98
10005be4:	74 0f                	je     0x10005bf5
10005be6:	56                   	push   esi
10005be7:	6a 00                	push   0x0
10005be9:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10005bef:	ff 15 78 c0 00 10    	call   DWORD PTR ds:0x1000c078
10005bf5:	33 c0                	xor    eax,eax
10005bf7:	5f                   	pop    edi
10005bf8:	5e                   	pop    esi
10005bf9:	5d                   	pop    ebp
10005bfa:	5b                   	pop    ebx
10005bfb:	c3                   	ret
10005bfc:	56                   	push   esi
10005bfd:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10005c01:	68 00 80 00 00       	push   0x8000
10005c06:	6a 00                	push   0x0
10005c08:	ff 76 10             	push   DWORD PTR [esi+0x10]
10005c0b:	ff 15 b8 c0 00 10    	call   DWORD PTR ds:0x1000c0b8
10005c11:	39 35 b8 0b 01 10    	cmp    DWORD PTR ds:0x10010bb8,esi
10005c17:	75 08                	jne    0x10005c21
10005c19:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10005c1c:	a3 b8 0b 01 10       	mov    ds:0x10010bb8,eax
10005c21:	81 fe 98 eb 00 10    	cmp    esi,0x1000eb98
10005c27:	74 20                	je     0x10005c49
10005c29:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10005c2c:	8b 0e                	mov    ecx,DWORD PTR [esi]
10005c2e:	56                   	push   esi
10005c2f:	6a 00                	push   0x0
10005c31:	89 08                	mov    DWORD PTR [eax],ecx
10005c33:	8b 06                	mov    eax,DWORD PTR [esi]
10005c35:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10005c38:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10005c3b:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10005c41:	ff 15 78 c0 00 10    	call   DWORD PTR ds:0x1000c078
10005c47:	5e                   	pop    esi
10005c48:	c3                   	ret
10005c49:	83 0d a8 eb 00 10 ff 	or     DWORD PTR ds:0x1000eba8,0xffffffff
10005c50:	5e                   	pop    esi
10005c51:	c3                   	ret
10005c52:	55                   	push   ebp
10005c53:	8b ec                	mov    ebp,esp
10005c55:	51                   	push   ecx
10005c56:	53                   	push   ebx
10005c57:	56                   	push   esi
10005c58:	8b 35 9c eb 00 10    	mov    esi,DWORD PTR ds:0x1000eb9c
10005c5e:	57                   	push   edi
10005c5f:	83 7e 10 ff          	cmp    DWORD PTR [esi+0x10],0xffffffff
10005c63:	0f 84 94 00 00 00    	je     0x10005cfd
10005c69:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
10005c6d:	8d be 10 20 00 00    	lea    edi,[esi+0x2010]
10005c73:	bb 00 f0 3f 00       	mov    ebx,0x3ff000
10005c78:	81 3f f0 00 00 00    	cmp    DWORD PTR [edi],0xf0
10005c7e:	75 39                	jne    0x10005cb9
10005c80:	8b c3                	mov    eax,ebx
10005c82:	68 00 40 00 00       	push   0x4000
10005c87:	03 46 10             	add    eax,DWORD PTR [esi+0x10]
10005c8a:	68 00 10 00 00       	push   0x1000
10005c8f:	50                   	push   eax
10005c90:	ff 15 b8 c0 00 10    	call   DWORD PTR ds:0x1000c0b8
10005c96:	85 c0                	test   eax,eax
10005c98:	74 1f                	je     0x10005cb9
10005c9a:	83 0f ff             	or     DWORD PTR [edi],0xffffffff
10005c9d:	ff 0d 80 3a 0e 10    	dec    DWORD PTR ds:0x100e3a80
10005ca3:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10005ca6:	85 c0                	test   eax,eax
10005ca8:	74 04                	je     0x10005cae
10005caa:	3b c7                	cmp    eax,edi
10005cac:	76 03                	jbe    0x10005cb1
10005cae:	89 7e 0c             	mov    DWORD PTR [esi+0xc],edi
10005cb1:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
10005cb4:	ff 4d 08             	dec    DWORD PTR [ebp+0x8]
10005cb7:	74 0d                	je     0x10005cc6
10005cb9:	81 eb 00 10 00 00    	sub    ebx,0x1000
10005cbf:	83 ef 08             	sub    edi,0x8
10005cc2:	85 db                	test   ebx,ebx
10005cc4:	7d b2                	jge    0x10005c78
10005cc6:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
10005cca:	8b ce                	mov    ecx,esi
10005ccc:	8b 76 04             	mov    esi,DWORD PTR [esi+0x4]
10005ccf:	74 2c                	je     0x10005cfd
10005cd1:	83 79 18 ff          	cmp    DWORD PTR [ecx+0x18],0xffffffff
10005cd5:	75 26                	jne    0x10005cfd
10005cd7:	6a 01                	push   0x1
10005cd9:	8d 41 20             	lea    eax,[ecx+0x20]
10005cdc:	5a                   	pop    edx
10005cdd:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
10005ce0:	75 0c                	jne    0x10005cee
10005ce2:	42                   	inc    edx
10005ce3:	83 c0 08             	add    eax,0x8
10005ce6:	81 fa 00 04 00 00    	cmp    edx,0x400
10005cec:	7c ef                	jl     0x10005cdd
10005cee:	81 fa 00 04 00 00    	cmp    edx,0x400
10005cf4:	75 07                	jne    0x10005cfd
10005cf6:	51                   	push   ecx
10005cf7:	e8 00 ff ff ff       	call   0x10005bfc
10005cfc:	59                   	pop    ecx
10005cfd:	3b 35 9c eb 00 10    	cmp    esi,DWORD PTR ds:0x1000eb9c
10005d03:	74 0a                	je     0x10005d0f
10005d05:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10005d09:	0f 8f 50 ff ff ff    	jg     0x10005c5f
10005d0f:	5f                   	pop    edi
10005d10:	5e                   	pop    esi
10005d11:	5b                   	pop    ebx
10005d12:	c9                   	leave
10005d13:	c3                   	ret
10005d14:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10005d18:	ba 98 eb 00 10       	mov    edx,0x1000eb98
10005d1d:	56                   	push   esi
10005d1e:	8b ca                	mov    ecx,edx
10005d20:	3b 41 10             	cmp    eax,DWORD PTR [ecx+0x10]
10005d23:	76 05                	jbe    0x10005d2a
10005d25:	3b 41 14             	cmp    eax,DWORD PTR [ecx+0x14]
10005d28:	72 08                	jb     0x10005d32
10005d2a:	8b 09                	mov    ecx,DWORD PTR [ecx]
10005d2c:	3b ca                	cmp    ecx,edx
10005d2e:	74 37                	je     0x10005d67
10005d30:	eb ee                	jmp    0x10005d20
10005d32:	a8 0f                	test   al,0xf
10005d34:	75 31                	jne    0x10005d67
10005d36:	8b f0                	mov    esi,eax
10005d38:	ba 00 01 00 00       	mov    edx,0x100
10005d3d:	81 e6 ff 0f 00 00    	and    esi,0xfff
10005d43:	3b f2                	cmp    esi,edx
10005d45:	72 20                	jb     0x10005d67
10005d47:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
10005d4b:	89 0e                	mov    DWORD PTR [esi],ecx
10005d4d:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
10005d51:	8b c8                	mov    ecx,eax
10005d53:	66 81 e1 00 f0       	and    cx,0xf000
10005d58:	2b c1                	sub    eax,ecx
10005d5a:	89 0e                	mov    DWORD PTR [esi],ecx
10005d5c:	2b c2                	sub    eax,edx
10005d5e:	5e                   	pop    esi
10005d5f:	c1 f8 04             	sar    eax,0x4
10005d62:	8d 44 08 08          	lea    eax,[eax+ecx*1+0x8]
10005d66:	c3                   	ret
10005d67:	33 c0                	xor    eax,eax
10005d69:	5e                   	pop    esi
10005d6a:	c3                   	ret
10005d6b:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10005d6f:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10005d73:	2b 48 10             	sub    ecx,DWORD PTR [eax+0x10]
10005d76:	c1 f9 0c             	sar    ecx,0xc
10005d79:	8d 44 c8 18          	lea    eax,[eax+ecx*8+0x18]
10005d7d:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10005d81:	0f b6 11             	movzx  edx,BYTE PTR [ecx]
10005d84:	01 10                	add    DWORD PTR [eax],edx
10005d86:	80 21 00             	and    BYTE PTR [ecx],0x0
10005d89:	81 38 f0 00 00 00    	cmp    DWORD PTR [eax],0xf0
10005d8f:	c7 40 04 f1 00 00 00 	mov    DWORD PTR [eax+0x4],0xf1
10005d96:	75 17                	jne    0x10005daf
10005d98:	ff 05 80 3a 0e 10    	inc    DWORD PTR ds:0x100e3a80
10005d9e:	83 3d 80 3a 0e 10 20 	cmp    DWORD PTR ds:0x100e3a80,0x20
10005da5:	75 08                	jne    0x10005daf
10005da7:	6a 10                	push   0x10
10005da9:	e8 a4 fe ff ff       	call   0x10005c52
10005dae:	59                   	pop    ecx
10005daf:	c3                   	ret
10005db0:	55                   	push   ebp
10005db1:	8b ec                	mov    ebp,esp
10005db3:	51                   	push   ecx
10005db4:	51                   	push   ecx
10005db5:	53                   	push   ebx
10005db6:	56                   	push   esi
10005db7:	8b 35 b8 0b 01 10    	mov    esi,DWORD PTR ds:0x10010bb8
10005dbd:	57                   	push   edi
10005dbe:	8b 56 10             	mov    edx,DWORD PTR [esi+0x10]
10005dc1:	83 fa ff             	cmp    edx,0xffffffff
10005dc4:	0f 84 9f 00 00 00    	je     0x10005e69
10005dca:	8b 7e 08             	mov    edi,DWORD PTR [esi+0x8]
10005dcd:	8d 8e 18 20 00 00    	lea    ecx,[esi+0x2018]
10005dd3:	8b c7                	mov    eax,edi
10005dd5:	2b c6                	sub    eax,esi
10005dd7:	83 e8 18             	sub    eax,0x18
10005dda:	c1 f8 03             	sar    eax,0x3
10005ddd:	c1 e0 0c             	shl    eax,0xc
10005de0:	03 c2                	add    eax,edx
10005de2:	3b f9                	cmp    edi,ecx
10005de4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10005de7:	73 3a                	jae    0x10005e23
10005de9:	8b 0f                	mov    ecx,DWORD PTR [edi]
10005deb:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10005dee:	3b cb                	cmp    ecx,ebx
10005df0:	7c 1a                	jl     0x10005e0c
10005df2:	39 5f 04             	cmp    DWORD PTR [edi+0x4],ebx
10005df5:	76 15                	jbe    0x10005e0c
10005df7:	53                   	push   ebx
10005df8:	51                   	push   ecx
10005df9:	50                   	push   eax
10005dfa:	e8 b9 01 00 00       	call   0x10005fb8
10005dff:	83 c4 0c             	add    esp,0xc
10005e02:	85 c0                	test   eax,eax
10005e04:	75 75                	jne    0x10005e7b
10005e06:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10005e09:	89 5f 04             	mov    DWORD PTR [edi+0x4],ebx
10005e0c:	83 c7 08             	add    edi,0x8
10005e0f:	8d 8e 18 20 00 00    	lea    ecx,[esi+0x2018]
10005e15:	05 00 10 00 00       	add    eax,0x1000
10005e1a:	3b f9                	cmp    edi,ecx
10005e1c:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10005e1f:	72 c8                	jb     0x10005de9
10005e21:	eb 03                	jmp    0x10005e26
10005e23:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10005e26:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10005e29:	8b 4e 10             	mov    ecx,DWORD PTR [esi+0x10]
10005e2c:	8d 7e 18             	lea    edi,[esi+0x18]
10005e2f:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10005e32:	3b f8                	cmp    edi,eax
10005e34:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
10005e37:	73 33                	jae    0x10005e6c
10005e39:	8b 07                	mov    eax,DWORD PTR [edi]
10005e3b:	3b c3                	cmp    eax,ebx
10005e3d:	7c 19                	jl     0x10005e58
10005e3f:	39 5f 04             	cmp    DWORD PTR [edi+0x4],ebx
10005e42:	76 14                	jbe    0x10005e58
10005e44:	53                   	push   ebx
10005e45:	50                   	push   eax
10005e46:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
10005e49:	e8 6a 01 00 00       	call   0x10005fb8
10005e4e:	83 c4 0c             	add    esp,0xc
10005e51:	85 c0                	test   eax,eax
10005e53:	75 26                	jne    0x10005e7b
10005e55:	89 5f 04             	mov    DWORD PTR [edi+0x4],ebx
10005e58:	81 45 fc 00 10 00 00 	add    DWORD PTR [ebp-0x4],0x1000
10005e5f:	83 c7 08             	add    edi,0x8
10005e62:	3b 7d f8             	cmp    edi,DWORD PTR [ebp-0x8]
10005e65:	72 d2                	jb     0x10005e39
10005e67:	eb 03                	jmp    0x10005e6c
10005e69:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10005e6c:	8b 36                	mov    esi,DWORD PTR [esi]
10005e6e:	3b 35 b8 0b 01 10    	cmp    esi,DWORD PTR ds:0x10010bb8
10005e74:	74 15                	je     0x10005e8b
10005e76:	e9 43 ff ff ff       	jmp    0x10005dbe
10005e7b:	89 35 b8 0b 01 10    	mov    DWORD PTR ds:0x10010bb8,esi
10005e81:	29 1f                	sub    DWORD PTR [edi],ebx
10005e83:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
10005e86:	e9 28 01 00 00       	jmp    0x10005fb3
10005e8b:	b8 98 eb 00 10       	mov    eax,0x1000eb98
10005e90:	8b f8                	mov    edi,eax
10005e92:	83 7f 10 ff          	cmp    DWORD PTR [edi+0x10],0xffffffff
10005e96:	74 06                	je     0x10005e9e
10005e98:	83 7f 0c 00          	cmp    DWORD PTR [edi+0xc],0x0
10005e9c:	75 0c                	jne    0x10005eaa
10005e9e:	8b 3f                	mov    edi,DWORD PTR [edi]
10005ea0:	3b f8                	cmp    edi,eax
10005ea2:	0f 84 d7 00 00 00    	je     0x10005f7f
10005ea8:	eb e8                	jmp    0x10005e92
10005eaa:	8b 5f 0c             	mov    ebx,DWORD PTR [edi+0xc]
10005ead:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
10005eb1:	8b f3                	mov    esi,ebx
10005eb3:	8b c3                	mov    eax,ebx
10005eb5:	2b f7                	sub    esi,edi
10005eb7:	83 ee 18             	sub    esi,0x18
10005eba:	c1 fe 03             	sar    esi,0x3
10005ebd:	c1 e6 0c             	shl    esi,0xc
10005ec0:	03 77 10             	add    esi,DWORD PTR [edi+0x10]
10005ec3:	83 3b ff             	cmp    DWORD PTR [ebx],0xffffffff
10005ec6:	75 11                	jne    0x10005ed9
10005ec8:	83 7d fc 10          	cmp    DWORD PTR [ebp-0x4],0x10
10005ecc:	7d 0b                	jge    0x10005ed9
10005ece:	83 c0 08             	add    eax,0x8
10005ed1:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
10005ed4:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
10005ed7:	74 ef                	je     0x10005ec8
10005ed9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10005edc:	6a 04                	push   0x4
10005ede:	c1 e0 0c             	shl    eax,0xc
10005ee1:	68 00 10 00 00       	push   0x1000
10005ee6:	50                   	push   eax
10005ee7:	56                   	push   esi
10005ee8:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10005eeb:	ff 15 00 c0 00 10    	call   DWORD PTR ds:0x1000c000
10005ef1:	3b c6                	cmp    eax,esi
10005ef3:	0f 85 b8 00 00 00    	jne    0x10005fb1
10005ef9:	6a 00                	push   0x0
10005efb:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
10005efe:	56                   	push   esi
10005eff:	e8 9c 2d 00 00       	call   0x10008ca0
10005f04:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
10005f07:	83 c4 0c             	add    esp,0xc
10005f0a:	85 d2                	test   edx,edx
10005f0c:	8b cb                	mov    ecx,ebx
10005f0e:	7e 30                	jle    0x10005f40
10005f10:	8d 46 04             	lea    eax,[esi+0x4]
10005f13:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
10005f16:	80 88 f4 00 00 00 ff 	or     BYTE PTR [eax+0xf4],0xff
10005f1d:	8d 50 04             	lea    edx,[eax+0x4]
10005f20:	89 50 fc             	mov    DWORD PTR [eax-0x4],edx
10005f23:	ba f0 00 00 00       	mov    edx,0xf0
10005f28:	89 10                	mov    DWORD PTR [eax],edx
10005f2a:	89 11                	mov    DWORD PTR [ecx],edx
10005f2c:	c7 41 04 f1 00 00 00 	mov    DWORD PTR [ecx+0x4],0xf1
10005f33:	05 00 10 00 00       	add    eax,0x1000
10005f38:	83 c1 08             	add    ecx,0x8
10005f3b:	ff 4d fc             	dec    DWORD PTR [ebp-0x4]
10005f3e:	75 d6                	jne    0x10005f16
10005f40:	89 3d b8 0b 01 10    	mov    DWORD PTR ds:0x10010bb8,edi
10005f46:	8d 87 18 20 00 00    	lea    eax,[edi+0x2018]
10005f4c:	3b c8                	cmp    ecx,eax
10005f4e:	73 0c                	jae    0x10005f5c
10005f50:	83 39 ff             	cmp    DWORD PTR [ecx],0xffffffff
10005f53:	74 05                	je     0x10005f5a
10005f55:	83 c1 08             	add    ecx,0x8
10005f58:	eb f2                	jmp    0x10005f4c
10005f5a:	3b c8                	cmp    ecx,eax
10005f5c:	1b c0                	sbb    eax,eax
10005f5e:	23 c1                	and    eax,ecx
10005f60:	89 47 0c             	mov    DWORD PTR [edi+0xc],eax
10005f63:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10005f66:	88 46 08             	mov    BYTE PTR [esi+0x8],al
10005f69:	89 5f 08             	mov    DWORD PTR [edi+0x8],ebx
10005f6c:	29 03                	sub    DWORD PTR [ebx],eax
10005f6e:	29 46 04             	sub    DWORD PTR [esi+0x4],eax
10005f71:	8d 4c 06 08          	lea    ecx,[esi+eax*1+0x8]
10005f75:	8d 86 00 01 00 00    	lea    eax,[esi+0x100]
10005f7b:	89 0e                	mov    DWORD PTR [esi],ecx
10005f7d:	eb 34                	jmp    0x10005fb3
10005f7f:	e8 34 fb ff ff       	call   0x10005ab8
10005f84:	85 c0                	test   eax,eax
10005f86:	74 29                	je     0x10005fb1
10005f88:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
10005f8b:	88 59 08             	mov    BYTE PTR [ecx+0x8],bl
10005f8e:	8d 54 19 08          	lea    edx,[ecx+ebx*1+0x8]
10005f92:	a3 b8 0b 01 10       	mov    ds:0x10010bb8,eax
10005f97:	89 11                	mov    DWORD PTR [ecx],edx
10005f99:	ba f0 00 00 00       	mov    edx,0xf0
10005f9e:	2b d3                	sub    edx,ebx
10005fa0:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
10005fa3:	0f b6 d3             	movzx  edx,bl
10005fa6:	29 50 18             	sub    DWORD PTR [eax+0x18],edx
10005fa9:	8d 81 00 01 00 00    	lea    eax,[ecx+0x100]
10005faf:	eb 02                	jmp    0x10005fb3
10005fb1:	33 c0                	xor    eax,eax
10005fb3:	5f                   	pop    edi
10005fb4:	5e                   	pop    esi
10005fb5:	5b                   	pop    ebx
10005fb6:	c9                   	leave
10005fb7:	c3                   	ret
10005fb8:	55                   	push   ebp
10005fb9:	8b ec                	mov    ebp,esp
10005fbb:	51                   	push   ecx
10005fbc:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10005fbf:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10005fc2:	53                   	push   ebx
10005fc3:	56                   	push   esi
10005fc4:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
10005fc7:	57                   	push   edi
10005fc8:	8b 39                	mov    edi,DWORD PTR [ecx]
10005fca:	8d 99 f8 00 00 00    	lea    ebx,[ecx+0xf8]
10005fd0:	3b f2                	cmp    esi,edx
10005fd2:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
10005fd5:	8b c7                	mov    eax,edi
10005fd7:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
10005fda:	72 21                	jb     0x10005ffd
10005fdc:	8d 04 17             	lea    eax,[edi+edx*1]
10005fdf:	88 17                	mov    BYTE PTR [edi],dl
10005fe1:	3b c3                	cmp    eax,ebx
10005fe3:	73 07                	jae    0x10005fec
10005fe5:	01 11                	add    DWORD PTR [ecx],edx
10005fe7:	29 51 04             	sub    DWORD PTR [ecx+0x4],edx
10005fea:	eb 09                	jmp    0x10005ff5
10005fec:	83 61 04 00          	and    DWORD PTR [ecx+0x4],0x0
10005ff0:	8d 41 08             	lea    eax,[ecx+0x8]
10005ff3:	89 01                	mov    DWORD PTR [ecx],eax
10005ff5:	8d 47 08             	lea    eax,[edi+0x8]
10005ff8:	e9 ce 00 00 00       	jmp    0x100060cb
10005ffd:	03 f7                	add    esi,edi
10005fff:	80 3e 00             	cmp    BYTE PTR [esi],0x0
10006002:	74 02                	je     0x10006006
10006004:	8b c6                	mov    eax,esi
10006006:	8d 34 10             	lea    esi,[eax+edx*1]
10006009:	3b f3                	cmp    esi,ebx
1000600b:	73 43                	jae    0x10006050
1000600d:	8a 18                	mov    bl,BYTE PTR [eax]
1000600f:	84 db                	test   bl,bl
10006011:	75 30                	jne    0x10006043
10006013:	6a 01                	push   0x1
10006015:	8d 58 01             	lea    ebx,[eax+0x1]
10006018:	5e                   	pop    esi
10006019:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
1000601c:	75 04                	jne    0x10006022
1000601e:	43                   	inc    ebx
1000601f:	46                   	inc    esi
10006020:	eb f7                	jmp    0x10006019
10006022:	3b f2                	cmp    esi,edx
10006024:	73 4e                	jae    0x10006074
10006026:	3b 45 fc             	cmp    eax,DWORD PTR [ebp-0x4]
10006029:	75 05                	jne    0x10006030
1000602b:	89 71 04             	mov    DWORD PTR [ecx+0x4],esi
1000602e:	eb 0c                	jmp    0x1000603c
10006030:	29 75 0c             	sub    DWORD PTR [ebp+0xc],esi
10006033:	39 55 0c             	cmp    DWORD PTR [ebp+0xc],edx
10006036:	0f 82 99 00 00 00    	jb     0x100060d5
1000603c:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
1000603f:	8b c3                	mov    eax,ebx
10006041:	eb 05                	jmp    0x10006048
10006043:	0f b6 f3             	movzx  esi,bl
10006046:	03 c6                	add    eax,esi
10006048:	8d 34 10             	lea    esi,[eax+edx*1]
1000604b:	3b 75 08             	cmp    esi,DWORD PTR [ebp+0x8]
1000604e:	72 bd                	jb     0x1000600d
10006050:	8d 71 08             	lea    esi,[ecx+0x8]
10006053:	3b f7                	cmp    esi,edi
10006055:	73 7e                	jae    0x100060d5
10006057:	8d 04 16             	lea    eax,[esi+edx*1]
1000605a:	3b 45 08             	cmp    eax,DWORD PTR [ebp+0x8]
1000605d:	73 76                	jae    0x100060d5
1000605f:	8a 06                	mov    al,BYTE PTR [esi]
10006061:	84 c0                	test   al,al
10006063:	75 40                	jne    0x100060a5
10006065:	6a 01                	push   0x1
10006067:	8d 5e 01             	lea    ebx,[esi+0x1]
1000606a:	58                   	pop    eax
1000606b:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
1000606e:	75 25                	jne    0x10006095
10006070:	43                   	inc    ebx
10006071:	40                   	inc    eax
10006072:	eb f7                	jmp    0x1000606b
10006074:	8d 1c 10             	lea    ebx,[eax+edx*1]
10006077:	3b 5d 08             	cmp    ebx,DWORD PTR [ebp+0x8]
1000607a:	73 09                	jae    0x10006085
1000607c:	2b f2                	sub    esi,edx
1000607e:	89 19                	mov    DWORD PTR [ecx],ebx
10006080:	89 71 04             	mov    DWORD PTR [ecx+0x4],esi
10006083:	eb 09                	jmp    0x1000608e
10006085:	83 61 04 00          	and    DWORD PTR [ecx+0x4],0x0
10006089:	8d 71 08             	lea    esi,[ecx+0x8]
1000608c:	89 31                	mov    DWORD PTR [ecx],esi
1000608e:	88 10                	mov    BYTE PTR [eax],dl
10006090:	83 c0 08             	add    eax,0x8
10006093:	eb 36                	jmp    0x100060cb
10006095:	3b c2                	cmp    eax,edx
10006097:	73 13                	jae    0x100060ac
10006099:	29 45 0c             	sub    DWORD PTR [ebp+0xc],eax
1000609c:	39 55 0c             	cmp    DWORD PTR [ebp+0xc],edx
1000609f:	72 34                	jb     0x100060d5
100060a1:	8b f3                	mov    esi,ebx
100060a3:	eb ae                	jmp    0x10006053
100060a5:	0f b6 c0             	movzx  eax,al
100060a8:	03 f0                	add    esi,eax
100060aa:	eb a7                	jmp    0x10006053
100060ac:	8d 1c 16             	lea    ebx,[esi+edx*1]
100060af:	3b 5d 08             	cmp    ebx,DWORD PTR [ebp+0x8]
100060b2:	73 09                	jae    0x100060bd
100060b4:	2b c2                	sub    eax,edx
100060b6:	89 19                	mov    DWORD PTR [ecx],ebx
100060b8:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100060bb:	eb 09                	jmp    0x100060c6
100060bd:	83 61 04 00          	and    DWORD PTR [ecx+0x4],0x0
100060c1:	8d 41 08             	lea    eax,[ecx+0x8]
100060c4:	89 01                	mov    DWORD PTR [ecx],eax
100060c6:	88 16                	mov    BYTE PTR [esi],dl
100060c8:	8d 46 08             	lea    eax,[esi+0x8]
100060cb:	6b c9 0f             	imul   ecx,ecx,0xf
100060ce:	c1 e0 04             	shl    eax,0x4
100060d1:	2b c1                	sub    eax,ecx
100060d3:	eb 02                	jmp    0x100060d7
100060d5:	33 c0                	xor    eax,eax
100060d7:	5f                   	pop    edi
100060d8:	5e                   	pop    esi
100060d9:	5b                   	pop    ebx
100060da:	c9                   	leave
100060db:	c3                   	ret
100060dc:	56                   	push   esi
100060dd:	8b 35 9c c0 00 10    	mov    esi,DWORD PTR ds:0x1000c09c
100060e3:	ff 35 04 0c 01 10    	push   DWORD PTR ds:0x10010c04
100060e9:	ff d6                	call   esi
100060eb:	ff 35 f4 0b 01 10    	push   DWORD PTR ds:0x10010bf4
100060f1:	ff d6                	call   esi
100060f3:	ff 35 e4 0b 01 10    	push   DWORD PTR ds:0x10010be4
100060f9:	ff d6                	call   esi
100060fb:	ff 35 c4 0b 01 10    	push   DWORD PTR ds:0x10010bc4
10006101:	ff d6                	call   esi
10006103:	5e                   	pop    esi
10006104:	c3                   	ret
10006105:	56                   	push   esi
10006106:	57                   	push   edi
10006107:	8b 3d c4 c0 00 10    	mov    edi,DWORD PTR ds:0x1000c0c4
1000610d:	be c0 0b 01 10       	mov    esi,0x10010bc0
10006112:	8b 06                	mov    eax,DWORD PTR [esi]
10006114:	85 c0                	test   eax,eax
10006116:	74 2b                	je     0x10006143
10006118:	81 fe 04 0c 01 10    	cmp    esi,0x10010c04
1000611e:	74 23                	je     0x10006143
10006120:	81 fe f4 0b 01 10    	cmp    esi,0x10010bf4
10006126:	74 1b                	je     0x10006143
10006128:	81 fe e4 0b 01 10    	cmp    esi,0x10010be4
1000612e:	74 13                	je     0x10006143
10006130:	81 fe c4 0b 01 10    	cmp    esi,0x10010bc4
10006136:	74 0b                	je     0x10006143
10006138:	50                   	push   eax
10006139:	ff d7                	call   edi
1000613b:	ff 36                	push   DWORD PTR [esi]
1000613d:	e8 0a de ff ff       	call   0x10003f4c
10006142:	59                   	pop    ecx
10006143:	83 c6 04             	add    esi,0x4
10006146:	81 fe 80 0c 01 10    	cmp    esi,0x10010c80
1000614c:	7c c4                	jl     0x10006112
1000614e:	ff 35 e4 0b 01 10    	push   DWORD PTR ds:0x10010be4
10006154:	ff d7                	call   edi
10006156:	ff 35 f4 0b 01 10    	push   DWORD PTR ds:0x10010bf4
1000615c:	ff d7                	call   edi
1000615e:	ff 35 04 0c 01 10    	push   DWORD PTR ds:0x10010c04
10006164:	ff d7                	call   edi
10006166:	ff 35 c4 0b 01 10    	push   DWORD PTR ds:0x10010bc4
1000616c:	ff d7                	call   edi
1000616e:	5f                   	pop    edi
1000616f:	5e                   	pop    esi
10006170:	c3                   	ret
10006171:	55                   	push   ebp
10006172:	8b ec                	mov    ebp,esp
10006174:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10006177:	56                   	push   esi
10006178:	83 3c 85 c0 0b 01 10 	cmp    DWORD PTR [eax*4+0x10010bc0],0x0
1000617f:	00 
10006180:	8d 34 85 c0 0b 01 10 	lea    esi,[eax*4+0x10010bc0]
10006187:	75 3e                	jne    0x100061c7
10006189:	57                   	push   edi
1000618a:	6a 18                	push   0x18
1000618c:	e8 a4 de ff ff       	call   0x10004035
10006191:	8b f8                	mov    edi,eax
10006193:	59                   	pop    ecx
10006194:	85 ff                	test   edi,edi
10006196:	75 08                	jne    0x100061a0
10006198:	6a 11                	push   0x11
1000619a:	e8 fa e1 ff ff       	call   0x10004399
1000619f:	59                   	pop    ecx
100061a0:	6a 11                	push   0x11
100061a2:	e8 ca ff ff ff       	call   0x10006171
100061a7:	83 3e 00             	cmp    DWORD PTR [esi],0x0
100061aa:	59                   	pop    ecx
100061ab:	57                   	push   edi
100061ac:	75 0a                	jne    0x100061b8
100061ae:	ff 15 9c c0 00 10    	call   DWORD PTR ds:0x1000c09c
100061b4:	89 3e                	mov    DWORD PTR [esi],edi
100061b6:	eb 06                	jmp    0x100061be
100061b8:	e8 8f dd ff ff       	call   0x10003f4c
100061bd:	59                   	pop    ecx
100061be:	6a 11                	push   0x11
100061c0:	e8 0d 00 00 00       	call   0x100061d2
100061c5:	59                   	pop    ecx
100061c6:	5f                   	pop    edi
100061c7:	ff 36                	push   DWORD PTR [esi]
100061c9:	ff 15 88 c0 00 10    	call   DWORD PTR ds:0x1000c088
100061cf:	5e                   	pop    esi
100061d0:	5d                   	pop    ebp
100061d1:	c3                   	ret
100061d2:	55                   	push   ebp
100061d3:	8b ec                	mov    ebp,esp
100061d5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100061d8:	ff 34 85 c0 0b 01 10 	push   DWORD PTR [eax*4+0x10010bc0]
100061df:	ff 15 8c c0 00 10    	call   DWORD PTR ds:0x1000c08c
100061e5:	5d                   	pop    ebp
100061e6:	c3                   	ret
100061e7:	cc                   	int3
100061e8:	55                   	push   ebp
100061e9:	8b ec                	mov    ebp,esp
100061eb:	53                   	push   ebx
100061ec:	56                   	push   esi
100061ed:	57                   	push   edi
100061ee:	55                   	push   ebp
100061ef:	6a 00                	push   0x0
100061f1:	6a 00                	push   0x0
100061f3:	68 00 62 00 10       	push   0x10006200
100061f8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100061fb:	e8 34 53 00 00       	call   0x1000b534
10006200:	5d                   	pop    ebp
10006201:	5f                   	pop    edi
10006202:	5e                   	pop    esi
10006203:	5b                   	pop    ebx
10006204:	8b e5                	mov    esp,ebp
10006206:	5d                   	pop    ebp
10006207:	c3                   	ret
10006208:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1000620c:	f7 41 04 06 00 00 00 	test   DWORD PTR [ecx+0x4],0x6
10006213:	b8 01 00 00 00       	mov    eax,0x1
10006218:	74 0f                	je     0x10006229
1000621a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000621e:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10006222:	89 02                	mov    DWORD PTR [edx],eax
10006224:	b8 03 00 00 00       	mov    eax,0x3
10006229:	c3                   	ret
1000622a:	53                   	push   ebx
1000622b:	56                   	push   esi
1000622c:	57                   	push   edi
1000622d:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10006231:	50                   	push   eax
10006232:	6a fe                	push   0xfffffffe
10006234:	68 08 62 00 10       	push   0x10006208
10006239:	64 ff 35 00 00 00 00 	push   DWORD PTR fs:0x0
10006240:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10006247:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
1000624b:	8b 58 08             	mov    ebx,DWORD PTR [eax+0x8]
1000624e:	8b 70 0c             	mov    esi,DWORD PTR [eax+0xc]
10006251:	83 fe ff             	cmp    esi,0xffffffff
10006254:	74 2e                	je     0x10006284
10006256:	3b 74 24 24          	cmp    esi,DWORD PTR [esp+0x24]
1000625a:	74 28                	je     0x10006284
1000625c:	8d 34 76             	lea    esi,[esi+esi*2]
1000625f:	8b 0c b3             	mov    ecx,DWORD PTR [ebx+esi*4]
10006262:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
10006266:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
10006269:	83 7c b3 04 00       	cmp    DWORD PTR [ebx+esi*4+0x4],0x0
1000626e:	75 12                	jne    0x10006282
10006270:	68 01 01 00 00       	push   0x101
10006275:	8b 44 b3 08          	mov    eax,DWORD PTR [ebx+esi*4+0x8]
10006279:	e8 40 00 00 00       	call   0x100062be
1000627e:	ff 54 b3 08          	call   DWORD PTR [ebx+esi*4+0x8]
10006282:	eb c3                	jmp    0x10006247
10006284:	64 8f 05 00 00 00 00 	pop    DWORD PTR fs:0x0
1000628b:	83 c4 0c             	add    esp,0xc
1000628e:	5f                   	pop    edi
1000628f:	5e                   	pop    esi
10006290:	5b                   	pop    ebx
10006291:	c3                   	ret
10006292:	33 c0                	xor    eax,eax
10006294:	64 8b 0d 00 00 00 00 	mov    ecx,DWORD PTR fs:0x0
1000629b:	81 79 04 08 62 00 10 	cmp    DWORD PTR [ecx+0x4],0x10006208
100062a2:	75 10                	jne    0x100062b4
100062a4:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
100062a7:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
100062aa:	39 51 08             	cmp    DWORD PTR [ecx+0x8],edx
100062ad:	75 05                	jne    0x100062b4
100062af:	b8 01 00 00 00       	mov    eax,0x1
100062b4:	c3                   	ret
100062b5:	53                   	push   ebx
100062b6:	51                   	push   ecx
100062b7:	bb 80 0c 01 10       	mov    ebx,0x10010c80
100062bc:	eb 0a                	jmp    0x100062c8
100062be:	53                   	push   ebx
100062bf:	51                   	push   ecx
100062c0:	bb 80 0c 01 10       	mov    ebx,0x10010c80
100062c5:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100062c8:	89 4b 08             	mov    DWORD PTR [ebx+0x8],ecx
100062cb:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
100062ce:	89 6b 0c             	mov    DWORD PTR [ebx+0xc],ebp
100062d1:	59                   	pop    ecx
100062d2:	5b                   	pop    ebx
100062d3:	c2 04 00             	ret    0x4
100062d6:	cc                   	int3
100062d7:	cc                   	int3
100062d8:	56                   	push   esi
100062d9:	43                   	inc    ebx
100062da:	32 30                	xor    dh,BYTE PTR [eax]
100062dc:	58                   	pop    eax
100062dd:	43                   	inc    ebx
100062de:	30 30                	xor    BYTE PTR [eax],dh
100062e0:	55                   	push   ebp
100062e1:	8b ec                	mov    ebp,esp
100062e3:	83 ec 08             	sub    esp,0x8
100062e6:	53                   	push   ebx
100062e7:	56                   	push   esi
100062e8:	57                   	push   edi
100062e9:	55                   	push   ebp
100062ea:	fc                   	cld
100062eb:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100062ee:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100062f1:	f7 40 04 06 00 00 00 	test   DWORD PTR [eax+0x4],0x6
100062f8:	0f 85 82 00 00 00    	jne    0x10006380
100062fe:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10006301:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10006304:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10006307:	8d 45 f8             	lea    eax,[ebp-0x8]
1000630a:	89 43 fc             	mov    DWORD PTR [ebx-0x4],eax
1000630d:	8b 73 0c             	mov    esi,DWORD PTR [ebx+0xc]
10006310:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
10006313:	83 fe ff             	cmp    esi,0xffffffff
10006316:	74 61                	je     0x10006379
10006318:	8d 0c 76             	lea    ecx,[esi+esi*2]
1000631b:	83 7c 8f 04 00       	cmp    DWORD PTR [edi+ecx*4+0x4],0x0
10006320:	74 45                	je     0x10006367
10006322:	56                   	push   esi
10006323:	55                   	push   ebp
10006324:	8d 6b 10             	lea    ebp,[ebx+0x10]
10006327:	ff 54 8f 04          	call   DWORD PTR [edi+ecx*4+0x4]
1000632b:	5d                   	pop    ebp
1000632c:	5e                   	pop    esi
1000632d:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10006330:	0b c0                	or     eax,eax
10006332:	74 33                	je     0x10006367
10006334:	78 3c                	js     0x10006372
10006336:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
10006339:	53                   	push   ebx
1000633a:	e8 a9 fe ff ff       	call   0x100061e8
1000633f:	83 c4 04             	add    esp,0x4
10006342:	8d 6b 10             	lea    ebp,[ebx+0x10]
10006345:	56                   	push   esi
10006346:	53                   	push   ebx
10006347:	e8 de fe ff ff       	call   0x1000622a
1000634c:	83 c4 08             	add    esp,0x8
1000634f:	8d 0c 76             	lea    ecx,[esi+esi*2]
10006352:	6a 01                	push   0x1
10006354:	8b 44 8f 08          	mov    eax,DWORD PTR [edi+ecx*4+0x8]
10006358:	e8 61 ff ff ff       	call   0x100062be
1000635d:	8b 04 8f             	mov    eax,DWORD PTR [edi+ecx*4]
10006360:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
10006363:	ff 54 8f 08          	call   DWORD PTR [edi+ecx*4+0x8]
10006367:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
1000636a:	8d 0c 76             	lea    ecx,[esi+esi*2]
1000636d:	8b 34 8f             	mov    esi,DWORD PTR [edi+ecx*4]
10006370:	eb a1                	jmp    0x10006313
10006372:	b8 00 00 00 00       	mov    eax,0x0
10006377:	eb 1c                	jmp    0x10006395
10006379:	b8 01 00 00 00       	mov    eax,0x1
1000637e:	eb 15                	jmp    0x10006395
10006380:	55                   	push   ebp
10006381:	8d 6b 10             	lea    ebp,[ebx+0x10]
10006384:	6a ff                	push   0xffffffff
10006386:	53                   	push   ebx
10006387:	e8 9e fe ff ff       	call   0x1000622a
1000638c:	83 c4 08             	add    esp,0x8
1000638f:	5d                   	pop    ebp
10006390:	b8 01 00 00 00       	mov    eax,0x1
10006395:	5d                   	pop    ebp
10006396:	5f                   	pop    edi
10006397:	5e                   	pop    esi
10006398:	5b                   	pop    ebx
10006399:	8b e5                	mov    esp,ebp
1000639b:	5d                   	pop    ebp
1000639c:	c3                   	ret
1000639d:	55                   	push   ebp
1000639e:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
100063a2:	8b 29                	mov    ebp,DWORD PTR [ecx]
100063a4:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
100063a7:	50                   	push   eax
100063a8:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
100063ab:	50                   	push   eax
100063ac:	e8 79 fe ff ff       	call   0x1000622a
100063b1:	83 c4 08             	add    esp,0x8
100063b4:	5d                   	pop    ebp
100063b5:	c2 04 00             	ret    0x4
100063b8:	a1 ec 3a 0e 10       	mov    eax,ds:0x100e3aec
100063bd:	85 c0                	test   eax,eax
100063bf:	74 0f                	je     0x100063d0
100063c1:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
100063c5:	ff d0                	call   eax
100063c7:	85 c0                	test   eax,eax
100063c9:	59                   	pop    ecx
100063ca:	74 04                	je     0x100063d0
100063cc:	6a 01                	push   0x1
100063ce:	58                   	pop    eax
100063cf:	c3                   	ret
100063d0:	33 c0                	xor    eax,eax
100063d2:	c3                   	ret
100063d3:	56                   	push   esi
100063d4:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
100063d8:	ff 76 10             	push   DWORD PTR [esi+0x10]
100063db:	e8 aa 1e 00 00       	call   0x1000828a
100063e0:	85 c0                	test   eax,eax
100063e2:	59                   	pop    ecx
100063e3:	74 77                	je     0x1000645c
100063e5:	81 fe 28 e9 00 10    	cmp    esi,0x1000e928
100063eb:	75 04                	jne    0x100063f1
100063ed:	33 c0                	xor    eax,eax
100063ef:	eb 0b                	jmp    0x100063fc
100063f1:	81 fe 48 e9 00 10    	cmp    esi,0x1000e948
100063f7:	75 63                	jne    0x1000645c
100063f9:	6a 01                	push   0x1
100063fb:	58                   	pop    eax
100063fc:	ff 05 7c 3a 0e 10    	inc    DWORD PTR ds:0x100e3a7c
10006402:	66 f7 46 0c 0c 01    	test   WORD PTR [esi+0xc],0x10c
10006408:	75 52                	jne    0x1000645c
1000640a:	83 3c 85 f0 3a 0e 10 	cmp    DWORD PTR [eax*4+0x100e3af0],0x0
10006411:	00 
10006412:	53                   	push   ebx
10006413:	57                   	push   edi
10006414:	8d 3c 85 f0 3a 0e 10 	lea    edi,[eax*4+0x100e3af0]
1000641b:	bb 00 10 00 00       	mov    ebx,0x1000
10006420:	75 20                	jne    0x10006442
10006422:	53                   	push   ebx
10006423:	e8 0d dc ff ff       	call   0x10004035
10006428:	85 c0                	test   eax,eax
1000642a:	59                   	pop    ecx
1000642b:	89 07                	mov    DWORD PTR [edi],eax
1000642d:	75 13                	jne    0x10006442
1000642f:	8d 46 14             	lea    eax,[esi+0x14]
10006432:	6a 02                	push   0x2
10006434:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
10006437:	89 06                	mov    DWORD PTR [esi],eax
10006439:	58                   	pop    eax
1000643a:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
1000643d:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
10006440:	eb 0d                	jmp    0x1000644f
10006442:	8b 3f                	mov    edi,DWORD PTR [edi]
10006444:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
10006447:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
1000644a:	89 3e                	mov    DWORD PTR [esi],edi
1000644c:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
1000644f:	66 81 4e 0c 02 11    	or     WORD PTR [esi+0xc],0x1102
10006455:	6a 01                	push   0x1
10006457:	58                   	pop    eax
10006458:	5f                   	pop    edi
10006459:	5b                   	pop    ebx
1000645a:	5e                   	pop    esi
1000645b:	c3                   	ret
1000645c:	33 c0                	xor    eax,eax
1000645e:	5e                   	pop    esi
1000645f:	c3                   	ret
10006460:	83 7c 24 04 00       	cmp    DWORD PTR [esp+0x4],0x0
10006465:	56                   	push   esi
10006466:	74 20                	je     0x10006488
10006468:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1000646c:	f6 46 0d 10          	test   BYTE PTR [esi+0xd],0x10
10006470:	74 16                	je     0x10006488
10006472:	56                   	push   esi
10006473:	e8 ed e1 ff ff       	call   0x10004665
10006478:	80 66 0d ee          	and    BYTE PTR [esi+0xd],0xee
1000647c:	83 66 18 00          	and    DWORD PTR [esi+0x18],0x0
10006480:	83 26 00             	and    DWORD PTR [esi],0x0
10006483:	83 66 08 00          	and    DWORD PTR [esi+0x8],0x0
10006487:	59                   	pop    ecx
10006488:	5e                   	pop    esi
10006489:	c3                   	ret
1000648a:	55                   	push   ebp
1000648b:	8b ec                	mov    ebp,esp
1000648d:	81 ec 48 02 00 00    	sub    esp,0x248
10006493:	53                   	push   ebx
10006494:	56                   	push   esi
10006495:	57                   	push   edi
10006496:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10006499:	33 f6                	xor    esi,esi
1000649b:	8a 1f                	mov    bl,BYTE PTR [edi]
1000649d:	47                   	inc    edi
1000649e:	84 db                	test   bl,bl
100064a0:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
100064a3:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
100064a6:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
100064a9:	0f 84 f4 06 00 00    	je     0x10006ba3
100064af:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100064b2:	33 d2                	xor    edx,edx
100064b4:	eb 08                	jmp    0x100064be
100064b6:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100064b9:	8b 75 d0             	mov    esi,DWORD PTR [ebp-0x30]
100064bc:	33 d2                	xor    edx,edx
100064be:	39 55 ec             	cmp    DWORD PTR [ebp-0x14],edx
100064c1:	0f 8c dc 06 00 00    	jl     0x10006ba3
100064c7:	80 fb 20             	cmp    bl,0x20
100064ca:	7c 13                	jl     0x100064df
100064cc:	80 fb 78             	cmp    bl,0x78
100064cf:	7f 0e                	jg     0x100064df
100064d1:	0f be c3             	movsx  eax,bl
100064d4:	8a 80 18 c2 00 10    	mov    al,BYTE PTR [eax+0x1000c218]
100064da:	83 e0 0f             	and    eax,0xf
100064dd:	eb 02                	jmp    0x100064e1
100064df:	33 c0                	xor    eax,eax
100064e1:	0f be 84 c6 38 c2 00 	movsx  eax,BYTE PTR [esi+eax*8+0x1000c238]
100064e8:	10 
100064e9:	c1 f8 04             	sar    eax,0x4
100064ec:	83 f8 07             	cmp    eax,0x7
100064ef:	89 45 d0             	mov    DWORD PTR [ebp-0x30],eax
100064f2:	0f 87 9a 06 00 00    	ja     0x10006b92
100064f8:	ff 24 85 ab 6b 00 10 	jmp    DWORD PTR [eax*4+0x10006bab]
100064ff:	83 4d f0 ff          	or     DWORD PTR [ebp-0x10],0xffffffff
10006503:	89 55 cc             	mov    DWORD PTR [ebp-0x34],edx
10006506:	89 55 d8             	mov    DWORD PTR [ebp-0x28],edx
10006509:	89 55 e0             	mov    DWORD PTR [ebp-0x20],edx
1000650c:	89 55 e4             	mov    DWORD PTR [ebp-0x1c],edx
1000650f:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
10006512:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
10006515:	e9 78 06 00 00       	jmp    0x10006b92
1000651a:	0f be c3             	movsx  eax,bl
1000651d:	83 e8 20             	sub    eax,0x20
10006520:	74 3b                	je     0x1000655d
10006522:	83 e8 03             	sub    eax,0x3
10006525:	74 2d                	je     0x10006554
10006527:	83 e8 08             	sub    eax,0x8
1000652a:	74 1f                	je     0x1000654b
1000652c:	48                   	dec    eax
1000652d:	48                   	dec    eax
1000652e:	74 12                	je     0x10006542
10006530:	83 e8 03             	sub    eax,0x3
10006533:	0f 85 59 06 00 00    	jne    0x10006b92
10006539:	83 4d fc 08          	or     DWORD PTR [ebp-0x4],0x8
1000653d:	e9 50 06 00 00       	jmp    0x10006b92
10006542:	83 4d fc 04          	or     DWORD PTR [ebp-0x4],0x4
10006546:	e9 47 06 00 00       	jmp    0x10006b92
1000654b:	83 4d fc 01          	or     DWORD PTR [ebp-0x4],0x1
1000654f:	e9 3e 06 00 00       	jmp    0x10006b92
10006554:	80 4d fc 80          	or     BYTE PTR [ebp-0x4],0x80
10006558:	e9 35 06 00 00       	jmp    0x10006b92
1000655d:	83 4d fc 02          	or     DWORD PTR [ebp-0x4],0x2
10006561:	e9 2c 06 00 00       	jmp    0x10006b92
10006566:	80 fb 2a             	cmp    bl,0x2a
10006569:	75 23                	jne    0x1000658e
1000656b:	8d 45 10             	lea    eax,[ebp+0x10]
1000656e:	50                   	push   eax
1000656f:	e8 f5 06 00 00       	call   0x10006c69
10006574:	85 c0                	test   eax,eax
10006576:	59                   	pop    ecx
10006577:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
1000657a:	0f 8d 12 06 00 00    	jge    0x10006b92
10006580:	83 4d fc 04          	or     DWORD PTR [ebp-0x4],0x4
10006584:	f7 d8                	neg    eax
10006586:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
10006589:	e9 04 06 00 00       	jmp    0x10006b92
1000658e:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
10006591:	0f be cb             	movsx  ecx,bl
10006594:	8d 04 80             	lea    eax,[eax+eax*4]
10006597:	8d 44 41 d0          	lea    eax,[ecx+eax*2-0x30]
1000659b:	eb e9                	jmp    0x10006586
1000659d:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
100065a0:	e9 ed 05 00 00       	jmp    0x10006b92
100065a5:	80 fb 2a             	cmp    bl,0x2a
100065a8:	75 1e                	jne    0x100065c8
100065aa:	8d 45 10             	lea    eax,[ebp+0x10]
100065ad:	50                   	push   eax
100065ae:	e8 b6 06 00 00       	call   0x10006c69
100065b3:	85 c0                	test   eax,eax
100065b5:	59                   	pop    ecx
100065b6:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100065b9:	0f 8d d3 05 00 00    	jge    0x10006b92
100065bf:	83 4d f0 ff          	or     DWORD PTR [ebp-0x10],0xffffffff
100065c3:	e9 ca 05 00 00       	jmp    0x10006b92
100065c8:	8d 04 89             	lea    eax,[ecx+ecx*4]
100065cb:	0f be cb             	movsx  ecx,bl
100065ce:	8d 44 41 d0          	lea    eax,[ecx+eax*2-0x30]
100065d2:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100065d5:	e9 b8 05 00 00       	jmp    0x10006b92
100065da:	80 fb 49             	cmp    bl,0x49
100065dd:	74 2e                	je     0x1000660d
100065df:	80 fb 68             	cmp    bl,0x68
100065e2:	74 20                	je     0x10006604
100065e4:	80 fb 6c             	cmp    bl,0x6c
100065e7:	74 12                	je     0x100065fb
100065e9:	80 fb 77             	cmp    bl,0x77
100065ec:	0f 85 a0 05 00 00    	jne    0x10006b92
100065f2:	80 4d fd 08          	or     BYTE PTR [ebp-0x3],0x8
100065f6:	e9 97 05 00 00       	jmp    0x10006b92
100065fb:	83 4d fc 10          	or     DWORD PTR [ebp-0x4],0x10
100065ff:	e9 8e 05 00 00       	jmp    0x10006b92
10006604:	83 4d fc 20          	or     DWORD PTR [ebp-0x4],0x20
10006608:	e9 85 05 00 00       	jmp    0x10006b92
1000660d:	80 3f 36             	cmp    BYTE PTR [edi],0x36
10006610:	75 14                	jne    0x10006626
10006612:	80 7f 01 34          	cmp    BYTE PTR [edi+0x1],0x34
10006616:	75 0e                	jne    0x10006626
10006618:	47                   	inc    edi
10006619:	47                   	inc    edi
1000661a:	80 4d fd 80          	or     BYTE PTR [ebp-0x3],0x80
1000661e:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
10006621:	e9 6c 05 00 00       	jmp    0x10006b92
10006626:	89 55 d0             	mov    DWORD PTR [ebp-0x30],edx
10006629:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
1000662f:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
10006632:	0f b6 c3             	movzx  eax,bl
10006635:	f6 44 41 01 80       	test   BYTE PTR [ecx+eax*2+0x1],0x80
1000663a:	74 19                	je     0x10006655
1000663c:	8d 45 ec             	lea    eax,[ebp-0x14]
1000663f:	50                   	push   eax
10006640:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006643:	0f be c3             	movsx  eax,bl
10006646:	50                   	push   eax
10006647:	e8 7f 05 00 00       	call   0x10006bcb
1000664c:	8a 1f                	mov    bl,BYTE PTR [edi]
1000664e:	83 c4 0c             	add    esp,0xc
10006651:	47                   	inc    edi
10006652:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
10006655:	8d 45 ec             	lea    eax,[ebp-0x14]
10006658:	50                   	push   eax
10006659:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000665c:	0f be c3             	movsx  eax,bl
1000665f:	50                   	push   eax
10006660:	e8 66 05 00 00       	call   0x10006bcb
10006665:	83 c4 0c             	add    esp,0xc
10006668:	e9 25 05 00 00       	jmp    0x10006b92
1000666d:	0f be c3             	movsx  eax,bl
10006670:	83 f8 67             	cmp    eax,0x67
10006673:	0f 8f 1c 02 00 00    	jg     0x10006895
10006679:	83 f8 65             	cmp    eax,0x65
1000667c:	0f 8d 96 00 00 00    	jge    0x10006718
10006682:	83 f8 58             	cmp    eax,0x58
10006685:	0f 8f eb 00 00 00    	jg     0x10006776
1000668b:	0f 84 78 02 00 00    	je     0x10006909
10006691:	83 e8 43             	sub    eax,0x43
10006694:	0f 84 9f 00 00 00    	je     0x10006739
1000669a:	48                   	dec    eax
1000669b:	48                   	dec    eax
1000669c:	74 70                	je     0x1000670e
1000669e:	48                   	dec    eax
1000669f:	48                   	dec    eax
100066a0:	74 6c                	je     0x1000670e
100066a2:	83 e8 0c             	sub    eax,0xc
100066a5:	0f 85 e9 03 00 00    	jne    0x10006a94
100066ab:	66 f7 45 fc 30 08    	test   WORD PTR [ebp-0x4],0x830
100066b1:	75 04                	jne    0x100066b7
100066b3:	80 4d fd 08          	or     BYTE PTR [ebp-0x3],0x8
100066b7:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
100066ba:	83 fe ff             	cmp    esi,0xffffffff
100066bd:	75 05                	jne    0x100066c4
100066bf:	be ff ff ff 7f       	mov    esi,0x7fffffff
100066c4:	8d 45 10             	lea    eax,[ebp+0x10]
100066c7:	50                   	push   eax
100066c8:	e8 9c 05 00 00       	call   0x10006c69
100066cd:	66 f7 45 fc 10 08    	test   WORD PTR [ebp-0x4],0x810
100066d3:	59                   	pop    ecx
100066d4:	8b c8                	mov    ecx,eax
100066d6:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100066d9:	0f 84 fe 01 00 00    	je     0x100068dd
100066df:	85 c9                	test   ecx,ecx
100066e1:	75 09                	jne    0x100066ec
100066e3:	8b 0d 94 0c 01 10    	mov    ecx,DWORD PTR ds:0x10010c94
100066e9:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100066ec:	c7 45 dc 01 00 00 00 	mov    DWORD PTR [ebp-0x24],0x1
100066f3:	8b c1                	mov    eax,ecx
100066f5:	8b d6                	mov    edx,esi
100066f7:	4e                   	dec    esi
100066f8:	85 d2                	test   edx,edx
100066fa:	0f 84 d4 01 00 00    	je     0x100068d4
10006700:	66 83 38 00          	cmp    WORD PTR [eax],0x0
10006704:	0f 84 ca 01 00 00    	je     0x100068d4
1000670a:	40                   	inc    eax
1000670b:	40                   	inc    eax
1000670c:	eb e7                	jmp    0x100066f5
1000670e:	c7 45 cc 01 00 00 00 	mov    DWORD PTR [ebp-0x34],0x1
10006715:	80 c3 20             	add    bl,0x20
10006718:	83 4d fc 40          	or     DWORD PTR [ebp-0x4],0x40
1000671c:	8d bd b8 fd ff ff    	lea    edi,[ebp-0x248]
10006722:	3b ca                	cmp    ecx,edx
10006724:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
10006727:	0f 8d cf 00 00 00    	jge    0x100067fc
1000672d:	c7 45 f0 06 00 00 00 	mov    DWORD PTR [ebp-0x10],0x6
10006734:	e9 d1 00 00 00       	jmp    0x1000680a
10006739:	66 f7 45 fc 30 08    	test   WORD PTR [ebp-0x4],0x830
1000673f:	75 04                	jne    0x10006745
10006741:	80 4d fd 08          	or     BYTE PTR [ebp-0x3],0x8
10006745:	66 f7 45 fc 10 08    	test   WORD PTR [ebp-0x4],0x810
1000674b:	8d 45 10             	lea    eax,[ebp+0x10]
1000674e:	50                   	push   eax
1000674f:	74 3b                	je     0x1000678c
10006751:	e8 30 05 00 00       	call   0x10006c86
10006756:	50                   	push   eax
10006757:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
1000675d:	50                   	push   eax
1000675e:	e8 18 26 00 00       	call   0x10008d7b
10006763:	83 c4 0c             	add    esp,0xc
10006766:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
10006769:	85 c0                	test   eax,eax
1000676b:	7d 32                	jge    0x1000679f
1000676d:	c7 45 d8 01 00 00 00 	mov    DWORD PTR [ebp-0x28],0x1
10006774:	eb 29                	jmp    0x1000679f
10006776:	83 e8 5a             	sub    eax,0x5a
10006779:	74 32                	je     0x100067ad
1000677b:	83 e8 09             	sub    eax,0x9
1000677e:	74 c5                	je     0x10006745
10006780:	48                   	dec    eax
10006781:	0f 84 e8 01 00 00    	je     0x1000696f
10006787:	e9 08 03 00 00       	jmp    0x10006a94
1000678c:	e8 d8 04 00 00       	call   0x10006c69
10006791:	59                   	pop    ecx
10006792:	88 85 b8 fd ff ff    	mov    BYTE PTR [ebp-0x248],al
10006798:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
1000679f:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
100067a5:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100067a8:	e9 e7 02 00 00       	jmp    0x10006a94
100067ad:	8d 45 10             	lea    eax,[ebp+0x10]
100067b0:	50                   	push   eax
100067b1:	e8 b3 04 00 00       	call   0x10006c69
100067b6:	85 c0                	test   eax,eax
100067b8:	59                   	pop    ecx
100067b9:	74 33                	je     0x100067ee
100067bb:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100067be:	85 c9                	test   ecx,ecx
100067c0:	74 2c                	je     0x100067ee
100067c2:	f6 45 fd 08          	test   BYTE PTR [ebp-0x3],0x8
100067c6:	74 17                	je     0x100067df
100067c8:	0f bf 00             	movsx  eax,WORD PTR [eax]
100067cb:	d1 e8                	shr    eax,1
100067cd:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100067d0:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100067d3:	c7 45 dc 01 00 00 00 	mov    DWORD PTR [ebp-0x24],0x1
100067da:	e9 b5 02 00 00       	jmp    0x10006a94
100067df:	83 65 dc 00          	and    DWORD PTR [ebp-0x24],0x0
100067e3:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100067e6:	0f bf 00             	movsx  eax,WORD PTR [eax]
100067e9:	e9 a3 02 00 00       	jmp    0x10006a91
100067ee:	a1 90 0c 01 10       	mov    eax,ds:0x10010c90
100067f3:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100067f6:	50                   	push   eax
100067f7:	e9 8e 00 00 00       	jmp    0x1000688a
100067fc:	75 0c                	jne    0x1000680a
100067fe:	80 fb 67             	cmp    bl,0x67
10006801:	75 07                	jne    0x1000680a
10006803:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
1000680a:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000680d:	ff 75 cc             	push   DWORD PTR [ebp-0x34]
10006810:	83 c0 08             	add    eax,0x8
10006813:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
10006816:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
10006819:	8b 48 f8             	mov    ecx,DWORD PTR [eax-0x8]
1000681c:	89 4d b8             	mov    DWORD PTR [ebp-0x48],ecx
1000681f:	8b 40 fc             	mov    eax,DWORD PTR [eax-0x4]
10006822:	89 45 bc             	mov    DWORD PTR [ebp-0x44],eax
10006825:	0f be c3             	movsx  eax,bl
10006828:	50                   	push   eax
10006829:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
1000682f:	50                   	push   eax
10006830:	8d 45 b8             	lea    eax,[ebp-0x48]
10006833:	50                   	push   eax
10006834:	ff 15 98 0c 01 10    	call   DWORD PTR ds:0x10010c98
1000683a:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
1000683d:	83 c4 14             	add    esp,0x14
10006840:	81 e6 80 00 00 00    	and    esi,0x80
10006846:	74 14                	je     0x1000685c
10006848:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
1000684c:	75 0e                	jne    0x1000685c
1000684e:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
10006854:	50                   	push   eax
10006855:	ff 15 a4 0c 01 10    	call   DWORD PTR ds:0x10010ca4
1000685b:	59                   	pop    ecx
1000685c:	80 fb 67             	cmp    bl,0x67
1000685f:	75 12                	jne    0x10006873
10006861:	85 f6                	test   esi,esi
10006863:	75 0e                	jne    0x10006873
10006865:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
1000686b:	50                   	push   eax
1000686c:	ff 15 9c 0c 01 10    	call   DWORD PTR ds:0x10010c9c
10006872:	59                   	pop    ecx
10006873:	80 bd b8 fd ff ff 2d 	cmp    BYTE PTR [ebp-0x248],0x2d
1000687a:	75 0d                	jne    0x10006889
1000687c:	80 4d fd 01          	or     BYTE PTR [ebp-0x3],0x1
10006880:	8d bd b9 fd ff ff    	lea    edi,[ebp-0x247]
10006886:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
10006889:	57                   	push   edi
1000688a:	e8 71 24 00 00       	call   0x10008d00
1000688f:	59                   	pop    ecx
10006890:	e9 fc 01 00 00       	jmp    0x10006a91
10006895:	83 e8 69             	sub    eax,0x69
10006898:	0f 84 d1 00 00 00    	je     0x1000696f
1000689e:	83 e8 05             	sub    eax,0x5
100068a1:	0f 84 9e 00 00 00    	je     0x10006945
100068a7:	48                   	dec    eax
100068a8:	0f 84 84 00 00 00    	je     0x10006932
100068ae:	48                   	dec    eax
100068af:	74 51                	je     0x10006902
100068b1:	83 e8 03             	sub    eax,0x3
100068b4:	0f 84 fd fd ff ff    	je     0x100066b7
100068ba:	48                   	dec    eax
100068bb:	48                   	dec    eax
100068bc:	0f 84 b1 00 00 00    	je     0x10006973
100068c2:	83 e8 03             	sub    eax,0x3
100068c5:	0f 85 c9 01 00 00    	jne    0x10006a94
100068cb:	c7 45 d4 27 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x27
100068d2:	eb 3c                	jmp    0x10006910
100068d4:	2b c1                	sub    eax,ecx
100068d6:	d1 f8                	sar    eax,1
100068d8:	e9 b4 01 00 00       	jmp    0x10006a91
100068dd:	85 c9                	test   ecx,ecx
100068df:	75 09                	jne    0x100068ea
100068e1:	8b 0d 90 0c 01 10    	mov    ecx,DWORD PTR ds:0x10010c90
100068e7:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100068ea:	8b c1                	mov    eax,ecx
100068ec:	8b d6                	mov    edx,esi
100068ee:	4e                   	dec    esi
100068ef:	85 d2                	test   edx,edx
100068f1:	74 08                	je     0x100068fb
100068f3:	80 38 00             	cmp    BYTE PTR [eax],0x0
100068f6:	74 03                	je     0x100068fb
100068f8:	40                   	inc    eax
100068f9:	eb f1                	jmp    0x100068ec
100068fb:	2b c1                	sub    eax,ecx
100068fd:	e9 8f 01 00 00       	jmp    0x10006a91
10006902:	c7 45 f0 08 00 00 00 	mov    DWORD PTR [ebp-0x10],0x8
10006909:	c7 45 d4 07 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x7
10006910:	f6 45 fc 80          	test   BYTE PTR [ebp-0x4],0x80
10006914:	c7 45 f4 10 00 00 00 	mov    DWORD PTR [ebp-0xc],0x10
1000691b:	74 5d                	je     0x1000697a
1000691d:	8a 45 d4             	mov    al,BYTE PTR [ebp-0x2c]
10006920:	c6 45 ea 30          	mov    BYTE PTR [ebp-0x16],0x30
10006924:	04 51                	add    al,0x51
10006926:	c7 45 e4 02 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x2
1000692d:	88 45 eb             	mov    BYTE PTR [ebp-0x15],al
10006930:	eb 48                	jmp    0x1000697a
10006932:	f6 45 fc 80          	test   BYTE PTR [ebp-0x4],0x80
10006936:	c7 45 f4 08 00 00 00 	mov    DWORD PTR [ebp-0xc],0x8
1000693d:	74 3b                	je     0x1000697a
1000693f:	80 4d fd 02          	or     BYTE PTR [ebp-0x3],0x2
10006943:	eb 35                	jmp    0x1000697a
10006945:	8d 45 10             	lea    eax,[ebp+0x10]
10006948:	50                   	push   eax
10006949:	e8 1b 03 00 00       	call   0x10006c69
1000694e:	f6 45 fc 20          	test   BYTE PTR [ebp-0x4],0x20
10006952:	59                   	pop    ecx
10006953:	74 09                	je     0x1000695e
10006955:	66 8b 4d ec          	mov    cx,WORD PTR [ebp-0x14]
10006959:	66 89 08             	mov    WORD PTR [eax],cx
1000695c:	eb 05                	jmp    0x10006963
1000695e:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
10006961:	89 08                	mov    DWORD PTR [eax],ecx
10006963:	c7 45 d8 01 00 00 00 	mov    DWORD PTR [ebp-0x28],0x1
1000696a:	e9 23 02 00 00       	jmp    0x10006b92
1000696f:	83 4d fc 40          	or     DWORD PTR [ebp-0x4],0x40
10006973:	c7 45 f4 0a 00 00 00 	mov    DWORD PTR [ebp-0xc],0xa
1000697a:	f6 45 fd 80          	test   BYTE PTR [ebp-0x3],0x80
1000697e:	74 0c                	je     0x1000698c
10006980:	8d 45 10             	lea    eax,[ebp+0x10]
10006983:	50                   	push   eax
10006984:	e8 ed 02 00 00       	call   0x10006c76
10006989:	59                   	pop    ecx
1000698a:	eb 41                	jmp    0x100069cd
1000698c:	f6 45 fc 20          	test   BYTE PTR [ebp-0x4],0x20
10006990:	74 21                	je     0x100069b3
10006992:	f6 45 fc 40          	test   BYTE PTR [ebp-0x4],0x40
10006996:	8d 45 10             	lea    eax,[ebp+0x10]
10006999:	50                   	push   eax
1000699a:	74 0c                	je     0x100069a8
1000699c:	e8 c8 02 00 00       	call   0x10006c69
100069a1:	59                   	pop    ecx
100069a2:	0f bf c0             	movsx  eax,ax
100069a5:	99                   	cdq
100069a6:	eb 25                	jmp    0x100069cd
100069a8:	e8 bc 02 00 00       	call   0x10006c69
100069ad:	59                   	pop    ecx
100069ae:	0f b7 c0             	movzx  eax,ax
100069b1:	eb f2                	jmp    0x100069a5
100069b3:	f6 45 fc 40          	test   BYTE PTR [ebp-0x4],0x40
100069b7:	8d 45 10             	lea    eax,[ebp+0x10]
100069ba:	50                   	push   eax
100069bb:	74 08                	je     0x100069c5
100069bd:	e8 a7 02 00 00       	call   0x10006c69
100069c2:	59                   	pop    ecx
100069c3:	eb e0                	jmp    0x100069a5
100069c5:	e8 9f 02 00 00       	call   0x10006c69
100069ca:	59                   	pop    ecx
100069cb:	33 d2                	xor    edx,edx
100069cd:	f6 45 fc 40          	test   BYTE PTR [ebp-0x4],0x40
100069d1:	74 1b                	je     0x100069ee
100069d3:	85 d2                	test   edx,edx
100069d5:	7f 17                	jg     0x100069ee
100069d7:	7c 04                	jl     0x100069dd
100069d9:	85 c0                	test   eax,eax
100069db:	73 11                	jae    0x100069ee
100069dd:	f7 d8                	neg    eax
100069df:	83 d2 00             	adc    edx,0x0
100069e2:	8b f0                	mov    esi,eax
100069e4:	f7 da                	neg    edx
100069e6:	80 4d fd 01          	or     BYTE PTR [ebp-0x3],0x1
100069ea:	8b fa                	mov    edi,edx
100069ec:	eb 04                	jmp    0x100069f2
100069ee:	8b f0                	mov    esi,eax
100069f0:	8b fa                	mov    edi,edx
100069f2:	f6 45 fd 80          	test   BYTE PTR [ebp-0x3],0x80
100069f6:	75 03                	jne    0x100069fb
100069f8:	83 e7 00             	and    edi,0x0
100069fb:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
100069ff:	7d 09                	jge    0x10006a0a
10006a01:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
10006a08:	eb 04                	jmp    0x10006a0e
10006a0a:	83 65 fc f7          	and    DWORD PTR [ebp-0x4],0xfffffff7
10006a0e:	8b c6                	mov    eax,esi
10006a10:	0b c7                	or     eax,edi
10006a12:	75 04                	jne    0x10006a18
10006a14:	83 65 e4 00          	and    DWORD PTR [ebp-0x1c],0x0
10006a18:	8d 45 b7             	lea    eax,[ebp-0x49]
10006a1b:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10006a1e:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
10006a21:	ff 4d f0             	dec    DWORD PTR [ebp-0x10]
10006a24:	85 c0                	test   eax,eax
10006a26:	7f 06                	jg     0x10006a2e
10006a28:	8b c6                	mov    eax,esi
10006a2a:	0b c7                	or     eax,edi
10006a2c:	74 3b                	je     0x10006a69
10006a2e:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
10006a31:	99                   	cdq
10006a32:	52                   	push   edx
10006a33:	50                   	push   eax
10006a34:	57                   	push   edi
10006a35:	56                   	push   esi
10006a36:	89 45 c0             	mov    DWORD PTR [ebp-0x40],eax
10006a39:	89 55 c4             	mov    DWORD PTR [ebp-0x3c],edx
10006a3c:	e8 6f 24 00 00       	call   0x10008eb0
10006a41:	ff 75 c4             	push   DWORD PTR [ebp-0x3c]
10006a44:	8b d8                	mov    ebx,eax
10006a46:	83 c3 30             	add    ebx,0x30
10006a49:	ff 75 c0             	push   DWORD PTR [ebp-0x40]
10006a4c:	57                   	push   edi
10006a4d:	56                   	push   esi
10006a4e:	e8 ed 23 00 00       	call   0x10008e40
10006a53:	83 fb 39             	cmp    ebx,0x39
10006a56:	8b f0                	mov    esi,eax
10006a58:	8b fa                	mov    edi,edx
10006a5a:	7e 03                	jle    0x10006a5f
10006a5c:	03 5d d4             	add    ebx,DWORD PTR [ebp-0x2c]
10006a5f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
10006a62:	ff 4d f8             	dec    DWORD PTR [ebp-0x8]
10006a65:	88 18                	mov    BYTE PTR [eax],bl
10006a67:	eb b5                	jmp    0x10006a1e
10006a69:	8d 45 b7             	lea    eax,[ebp-0x49]
10006a6c:	2b 45 f8             	sub    eax,DWORD PTR [ebp-0x8]
10006a6f:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
10006a72:	f6 45 fd 02          	test   BYTE PTR [ebp-0x3],0x2
10006a76:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
10006a79:	74 19                	je     0x10006a94
10006a7b:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
10006a7e:	80 39 30             	cmp    BYTE PTR [ecx],0x30
10006a81:	75 04                	jne    0x10006a87
10006a83:	85 c0                	test   eax,eax
10006a85:	75 0d                	jne    0x10006a94
10006a87:	ff 4d f8             	dec    DWORD PTR [ebp-0x8]
10006a8a:	40                   	inc    eax
10006a8b:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
10006a8e:	c6 01 30             	mov    BYTE PTR [ecx],0x30
10006a91:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
10006a94:	83 7d d8 00          	cmp    DWORD PTR [ebp-0x28],0x0
10006a98:	0f 85 f4 00 00 00    	jne    0x10006b92
10006a9e:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
10006aa1:	f6 c3 40             	test   bl,0x40
10006aa4:	74 26                	je     0x10006acc
10006aa6:	f6 c7 01             	test   bh,0x1
10006aa9:	74 06                	je     0x10006ab1
10006aab:	c6 45 ea 2d          	mov    BYTE PTR [ebp-0x16],0x2d
10006aaf:	eb 14                	jmp    0x10006ac5
10006ab1:	f6 c3 01             	test   bl,0x1
10006ab4:	74 06                	je     0x10006abc
10006ab6:	c6 45 ea 2b          	mov    BYTE PTR [ebp-0x16],0x2b
10006aba:	eb 09                	jmp    0x10006ac5
10006abc:	f6 c3 02             	test   bl,0x2
10006abf:	74 0b                	je     0x10006acc
10006ac1:	c6 45 ea 20          	mov    BYTE PTR [ebp-0x16],0x20
10006ac5:	c7 45 e4 01 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x1
10006acc:	8b 75 e0             	mov    esi,DWORD PTR [ebp-0x20]
10006acf:	2b 75 e4             	sub    esi,DWORD PTR [ebp-0x1c]
10006ad2:	2b 75 f4             	sub    esi,DWORD PTR [ebp-0xc]
10006ad5:	f6 c3 0c             	test   bl,0xc
10006ad8:	75 12                	jne    0x10006aec
10006ada:	8d 45 ec             	lea    eax,[ebp-0x14]
10006add:	50                   	push   eax
10006ade:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006ae1:	56                   	push   esi
10006ae2:	6a 20                	push   0x20
10006ae4:	e8 17 01 00 00       	call   0x10006c00
10006ae9:	83 c4 10             	add    esp,0x10
10006aec:	8d 45 ec             	lea    eax,[ebp-0x14]
10006aef:	50                   	push   eax
10006af0:	8d 45 ea             	lea    eax,[ebp-0x16]
10006af3:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006af6:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
10006af9:	50                   	push   eax
10006afa:	e8 32 01 00 00       	call   0x10006c31
10006aff:	83 c4 10             	add    esp,0x10
10006b02:	f6 c3 08             	test   bl,0x8
10006b05:	74 17                	je     0x10006b1e
10006b07:	f6 c3 04             	test   bl,0x4
10006b0a:	75 12                	jne    0x10006b1e
10006b0c:	8d 45 ec             	lea    eax,[ebp-0x14]
10006b0f:	50                   	push   eax
10006b10:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006b13:	56                   	push   esi
10006b14:	6a 30                	push   0x30
10006b16:	e8 e5 00 00 00       	call   0x10006c00
10006b1b:	83 c4 10             	add    esp,0x10
10006b1e:	83 7d dc 00          	cmp    DWORD PTR [ebp-0x24],0x0
10006b22:	74 41                	je     0x10006b65
10006b24:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
10006b28:	7e 3b                	jle    0x10006b65
10006b2a:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
10006b2d:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
10006b30:	8d 78 ff             	lea    edi,[eax-0x1]
10006b33:	66 8b 03             	mov    ax,WORD PTR [ebx]
10006b36:	43                   	inc    ebx
10006b37:	50                   	push   eax
10006b38:	8d 45 c8             	lea    eax,[ebp-0x38]
10006b3b:	50                   	push   eax
10006b3c:	43                   	inc    ebx
10006b3d:	e8 39 22 00 00       	call   0x10008d7b
10006b42:	59                   	pop    ecx
10006b43:	85 c0                	test   eax,eax
10006b45:	59                   	pop    ecx
10006b46:	7e 32                	jle    0x10006b7a
10006b48:	8d 4d ec             	lea    ecx,[ebp-0x14]
10006b4b:	51                   	push   ecx
10006b4c:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006b4f:	50                   	push   eax
10006b50:	8d 45 c8             	lea    eax,[ebp-0x38]
10006b53:	50                   	push   eax
10006b54:	e8 d8 00 00 00       	call   0x10006c31
10006b59:	83 c4 10             	add    esp,0x10
10006b5c:	8b c7                	mov    eax,edi
10006b5e:	4f                   	dec    edi
10006b5f:	85 c0                	test   eax,eax
10006b61:	75 d0                	jne    0x10006b33
10006b63:	eb 15                	jmp    0x10006b7a
10006b65:	8d 45 ec             	lea    eax,[ebp-0x14]
10006b68:	50                   	push   eax
10006b69:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006b6c:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
10006b6f:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
10006b72:	e8 ba 00 00 00       	call   0x10006c31
10006b77:	83 c4 10             	add    esp,0x10
10006b7a:	f6 45 fc 04          	test   BYTE PTR [ebp-0x4],0x4
10006b7e:	74 12                	je     0x10006b92
10006b80:	8d 45 ec             	lea    eax,[ebp-0x14]
10006b83:	50                   	push   eax
10006b84:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006b87:	56                   	push   esi
10006b88:	6a 20                	push   0x20
10006b8a:	e8 71 00 00 00       	call   0x10006c00
10006b8f:	83 c4 10             	add    esp,0x10
10006b92:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10006b95:	8a 1f                	mov    bl,BYTE PTR [edi]
10006b97:	47                   	inc    edi
10006b98:	84 db                	test   bl,bl
10006b9a:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
10006b9d:	0f 85 13 f9 ff ff    	jne    0x100064b6
10006ba3:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
10006ba6:	5f                   	pop    edi
10006ba7:	5e                   	pop    esi
10006ba8:	5b                   	pop    ebx
10006ba9:	c9                   	leave
10006baa:	c3                   	ret
10006bab:	29 66 00             	sub    DWORD PTR [esi+0x0],esp
10006bae:	10 ff                	adc    bh,bh
10006bb0:	64 00 10             	add    BYTE PTR fs:[eax],dl
10006bb3:	1a 65 00             	sbb    ah,BYTE PTR [ebp+0x0]
10006bb6:	10 66 65             	adc    BYTE PTR [esi+0x65],ah
10006bb9:	00 10                	add    BYTE PTR [eax],dl
10006bbb:	9d                   	popf
10006bbc:	65 00 10             	add    BYTE PTR gs:[eax],dl
10006bbf:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
10006bc0:	65 00 10             	add    BYTE PTR gs:[eax],dl
10006bc3:	da 65 00             	fisub  DWORD PTR [ebp+0x0]
10006bc6:	10 6d 66             	adc    BYTE PTR [ebp+0x66],ch
10006bc9:	00 10                	add    BYTE PTR [eax],dl
10006bcb:	55                   	push   ebp
10006bcc:	8b ec                	mov    ebp,esp
10006bce:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10006bd1:	ff 49 04             	dec    DWORD PTR [ecx+0x4]
10006bd4:	78 0e                	js     0x10006be4
10006bd6:	8b 11                	mov    edx,DWORD PTR [ecx]
10006bd8:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
10006bdb:	88 02                	mov    BYTE PTR [edx],al
10006bdd:	ff 01                	inc    DWORD PTR [ecx]
10006bdf:	0f b6 c0             	movzx  eax,al
10006be2:	eb 0b                	jmp    0x10006bef
10006be4:	51                   	push   ecx
10006be5:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10006be8:	e8 81 db ff ff       	call   0x1000476e
10006bed:	59                   	pop    ecx
10006bee:	59                   	pop    ecx
10006bef:	83 f8 ff             	cmp    eax,0xffffffff
10006bf2:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10006bf5:	75 05                	jne    0x10006bfc
10006bf7:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
10006bfa:	5d                   	pop    ebp
10006bfb:	c3                   	ret
10006bfc:	ff 00                	inc    DWORD PTR [eax]
10006bfe:	5d                   	pop    ebp
10006bff:	c3                   	ret
10006c00:	56                   	push   esi
10006c01:	57                   	push   edi
10006c02:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10006c06:	8b c7                	mov    eax,edi
10006c08:	4f                   	dec    edi
10006c09:	85 c0                	test   eax,eax
10006c0b:	7e 21                	jle    0x10006c2e
10006c0d:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
10006c11:	56                   	push   esi
10006c12:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
10006c16:	ff 74 24 14          	push   DWORD PTR [esp+0x14]
10006c1a:	e8 ac ff ff ff       	call   0x10006bcb
10006c1f:	83 c4 0c             	add    esp,0xc
10006c22:	83 3e ff             	cmp    DWORD PTR [esi],0xffffffff
10006c25:	74 07                	je     0x10006c2e
10006c27:	8b c7                	mov    eax,edi
10006c29:	4f                   	dec    edi
10006c2a:	85 c0                	test   eax,eax
10006c2c:	7f e3                	jg     0x10006c11
10006c2e:	5f                   	pop    edi
10006c2f:	5e                   	pop    esi
10006c30:	c3                   	ret
10006c31:	53                   	push   ebx
10006c32:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
10006c36:	8b c3                	mov    eax,ebx
10006c38:	4b                   	dec    ebx
10006c39:	56                   	push   esi
10006c3a:	57                   	push   edi
10006c3b:	85 c0                	test   eax,eax
10006c3d:	7e 26                	jle    0x10006c65
10006c3f:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
10006c43:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
10006c47:	0f be 06             	movsx  eax,BYTE PTR [esi]
10006c4a:	57                   	push   edi
10006c4b:	46                   	inc    esi
10006c4c:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
10006c50:	50                   	push   eax
10006c51:	e8 75 ff ff ff       	call   0x10006bcb
10006c56:	83 c4 0c             	add    esp,0xc
10006c59:	83 3f ff             	cmp    DWORD PTR [edi],0xffffffff
10006c5c:	74 07                	je     0x10006c65
10006c5e:	8b c3                	mov    eax,ebx
10006c60:	4b                   	dec    ebx
10006c61:	85 c0                	test   eax,eax
10006c63:	7f e2                	jg     0x10006c47
10006c65:	5f                   	pop    edi
10006c66:	5e                   	pop    esi
10006c67:	5b                   	pop    ebx
10006c68:	c3                   	ret
10006c69:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10006c6d:	83 00 04             	add    DWORD PTR [eax],0x4
10006c70:	8b 00                	mov    eax,DWORD PTR [eax]
10006c72:	8b 40 fc             	mov    eax,DWORD PTR [eax-0x4]
10006c75:	c3                   	ret
10006c76:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10006c7a:	83 00 08             	add    DWORD PTR [eax],0x8
10006c7d:	8b 08                	mov    ecx,DWORD PTR [eax]
10006c7f:	8b 41 f8             	mov    eax,DWORD PTR [ecx-0x8]
10006c82:	8b 51 fc             	mov    edx,DWORD PTR [ecx-0x4]
10006c85:	c3                   	ret
10006c86:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10006c8a:	83 00 04             	add    DWORD PTR [eax],0x4
10006c8d:	8b 00                	mov    eax,DWORD PTR [eax]
10006c8f:	66 8b 40 fc          	mov    ax,WORD PTR [eax-0x4]
10006c93:	c3                   	ret
10006c94:	68 00 00 03 00       	push   0x30000
10006c99:	68 00 00 01 00       	push   0x10000
10006c9e:	e8 b7 22 00 00       	call   0x10008f5a
10006ca3:	59                   	pop    ecx
10006ca4:	59                   	pop    ecx
10006ca5:	c3                   	ret
10006ca6:	55                   	push   ebp
10006ca7:	8b ec                	mov    ebp,esp
10006ca9:	83 ec 18             	sub    esp,0x18
10006cac:	dd 05 c0 c2 00 10    	fld    QWORD PTR ds:0x1000c2c0
10006cb2:	dd 5d f8             	fstp   QWORD PTR [ebp-0x8]
10006cb5:	dd 05 b8 c2 00 10    	fld    QWORD PTR ds:0x1000c2b8
10006cbb:	dd 5d f0             	fstp   QWORD PTR [ebp-0x10]
10006cbe:	dd 45 f0             	fld    QWORD PTR [ebp-0x10]
10006cc1:	dc 75 f8             	fdiv   QWORD PTR [ebp-0x8]
10006cc4:	dc 4d f8             	fmul   QWORD PTR [ebp-0x8]
10006cc7:	dc 6d f0             	fsubr  QWORD PTR [ebp-0x10]
10006cca:	dd 5d e8             	fstp   QWORD PTR [ebp-0x18]
10006ccd:	dd 45 e8             	fld    QWORD PTR [ebp-0x18]
10006cd0:	dc 1d b0 c2 00 10    	fcomp  QWORD PTR ds:0x1000c2b0
10006cd6:	df e0                	fnstsw ax
10006cd8:	9e                   	sahf
10006cd9:	76 05                	jbe    0x10006ce0
10006cdb:	6a 01                	push   0x1
10006cdd:	58                   	pop    eax
10006cde:	c9                   	leave
10006cdf:	c3                   	ret
10006ce0:	33 c0                	xor    eax,eax
10006ce2:	c9                   	leave
10006ce3:	c3                   	ret
10006ce4:	68 e4 c2 00 10       	push   0x1000c2e4
10006ce9:	ff 15 a0 c0 00 10    	call   DWORD PTR ds:0x1000c0a0
10006cef:	85 c0                	test   eax,eax
10006cf1:	74 15                	je     0x10006d08
10006cf3:	68 c8 c2 00 10       	push   0x1000c2c8
10006cf8:	50                   	push   eax
10006cf9:	ff 15 bc c0 00 10    	call   DWORD PTR ds:0x1000c0bc
10006cff:	85 c0                	test   eax,eax
10006d01:	74 05                	je     0x10006d08
10006d03:	6a 00                	push   0x0
10006d05:	ff d0                	call   eax
10006d07:	c3                   	ret
10006d08:	e9 99 ff ff ff       	jmp    0x10006ca6
10006d0d:	56                   	push   esi
10006d0e:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10006d12:	0f be 06             	movsx  eax,BYTE PTR [esi]
10006d15:	50                   	push   eax
10006d16:	e8 e5 23 00 00       	call   0x10009100
10006d1b:	83 f8 65             	cmp    eax,0x65
10006d1e:	59                   	pop    ecx
10006d1f:	74 2c                	je     0x10006d4d
10006d21:	46                   	inc    esi
10006d22:	83 3d f0 10 01 10 01 	cmp    DWORD PTR ds:0x100110f0,0x1
10006d29:	7e 0f                	jle    0x10006d3a
10006d2b:	0f be 06             	movsx  eax,BYTE PTR [esi]
10006d2e:	6a 04                	push   0x4
10006d30:	50                   	push   eax
10006d31:	e8 55 23 00 00       	call   0x1000908b
10006d36:	59                   	pop    ecx
10006d37:	59                   	pop    ecx
10006d38:	eb 0f                	jmp    0x10006d49
10006d3a:	0f be 06             	movsx  eax,BYTE PTR [esi]
10006d3d:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
10006d43:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
10006d46:	83 e0 04             	and    eax,0x4
10006d49:	85 c0                	test   eax,eax
10006d4b:	75 d4                	jne    0x10006d21
10006d4d:	8a 0d f4 10 01 10    	mov    cl,BYTE PTR ds:0x100110f4
10006d53:	8a 06                	mov    al,BYTE PTR [esi]
10006d55:	88 0e                	mov    BYTE PTR [esi],cl
10006d57:	46                   	inc    esi
10006d58:	8a 0e                	mov    cl,BYTE PTR [esi]
10006d5a:	88 06                	mov    BYTE PTR [esi],al
10006d5c:	8a c1                	mov    al,cl
10006d5e:	8a 0e                	mov    cl,BYTE PTR [esi]
10006d60:	46                   	inc    esi
10006d61:	84 c9                	test   cl,cl
10006d63:	75 f3                	jne    0x10006d58
10006d65:	5e                   	pop    esi
10006d66:	c3                   	ret
10006d67:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10006d6b:	8a 15 f4 10 01 10    	mov    dl,BYTE PTR ds:0x100110f4
10006d71:	8a 08                	mov    cl,BYTE PTR [eax]
10006d73:	84 c9                	test   cl,cl
10006d75:	74 0c                	je     0x10006d83
10006d77:	3a ca                	cmp    cl,dl
10006d79:	74 08                	je     0x10006d83
10006d7b:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10006d7e:	40                   	inc    eax
10006d7f:	84 c9                	test   cl,cl
10006d81:	75 f4                	jne    0x10006d77
10006d83:	8a 08                	mov    cl,BYTE PTR [eax]
10006d85:	40                   	inc    eax
10006d86:	84 c9                	test   cl,cl
10006d88:	74 2a                	je     0x10006db4
10006d8a:	8a 08                	mov    cl,BYTE PTR [eax]
10006d8c:	84 c9                	test   cl,cl
10006d8e:	74 0d                	je     0x10006d9d
10006d90:	80 f9 65             	cmp    cl,0x65
10006d93:	74 08                	je     0x10006d9d
10006d95:	80 f9 45             	cmp    cl,0x45
10006d98:	74 03                	je     0x10006d9d
10006d9a:	40                   	inc    eax
10006d9b:	eb ed                	jmp    0x10006d8a
10006d9d:	8b c8                	mov    ecx,eax
10006d9f:	48                   	dec    eax
10006da0:	80 38 30             	cmp    BYTE PTR [eax],0x30
10006da3:	74 fa                	je     0x10006d9f
10006da5:	38 10                	cmp    BYTE PTR [eax],dl
10006da7:	75 01                	jne    0x10006daa
10006da9:	48                   	dec    eax
10006daa:	8a 11                	mov    dl,BYTE PTR [ecx]
10006dac:	40                   	inc    eax
10006dad:	41                   	inc    ecx
10006dae:	84 d2                	test   dl,dl
10006db0:	88 10                	mov    BYTE PTR [eax],dl
10006db2:	75 f6                	jne    0x10006daa
10006db4:	c3                   	ret
10006db5:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10006db9:	dd 00                	fld    QWORD PTR [eax]
10006dbb:	dc 1d f0 c2 00 10    	fcomp  QWORD PTR ds:0x1000c2f0
10006dc1:	df e0                	fnstsw ax
10006dc3:	9e                   	sahf
10006dc4:	72 04                	jb     0x10006dca
10006dc6:	6a 01                	push   0x1
10006dc8:	58                   	pop    eax
10006dc9:	c3                   	ret
10006dca:	33 c0                	xor    eax,eax
10006dcc:	c3                   	ret
10006dcd:	55                   	push   ebp
10006dce:	8b ec                	mov    ebp,esp
10006dd0:	51                   	push   ecx
10006dd1:	51                   	push   ecx
10006dd2:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10006dd6:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10006dd9:	74 1b                	je     0x10006df6
10006ddb:	8d 45 f8             	lea    eax,[ebp-0x8]
10006dde:	50                   	push   eax
10006ddf:	e8 e8 27 00 00       	call   0x100095cc
10006de4:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10006de7:	59                   	pop    ecx
10006de8:	59                   	pop    ecx
10006de9:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
10006dec:	89 08                	mov    DWORD PTR [eax],ecx
10006dee:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10006df1:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10006df4:	c9                   	leave
10006df5:	c3                   	ret
10006df6:	8d 45 10             	lea    eax,[ebp+0x10]
10006df9:	50                   	push   eax
10006dfa:	e8 fa 27 00 00       	call   0x100095f9
10006dff:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10006e02:	59                   	pop    ecx
10006e03:	59                   	pop    ecx
10006e04:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
10006e07:	89 08                	mov    DWORD PTR [eax],ecx
10006e09:	c9                   	leave
10006e0a:	c3                   	ret
10006e0b:	55                   	push   ebp
10006e0c:	8b ec                	mov    ebp,esp
10006e0e:	83 ec 28             	sub    esp,0x28
10006e11:	8d 45 d8             	lea    eax,[ebp-0x28]
10006e14:	56                   	push   esi
10006e15:	50                   	push   eax
10006e16:	8d 45 f0             	lea    eax,[ebp-0x10]
10006e19:	50                   	push   eax
10006e1a:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10006e1d:	51                   	push   ecx
10006e1e:	51                   	push   ecx
10006e1f:	dd 00                	fld    QWORD PTR [eax]
10006e21:	dd 1c 24             	fstp   QWORD PTR [esp]
10006e24:	e8 74 28 00 00       	call   0x1000969d
10006e29:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
10006e2c:	8d 45 f0             	lea    eax,[ebp-0x10]
10006e2f:	50                   	push   eax
10006e30:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
10006e33:	8d 46 01             	lea    eax,[esi+0x1]
10006e36:	50                   	push   eax
10006e37:	33 c0                	xor    eax,eax
10006e39:	83 7d f0 2d          	cmp    DWORD PTR [ebp-0x10],0x2d
10006e3d:	0f 94 c0             	sete   al
10006e40:	33 c9                	xor    ecx,ecx
10006e42:	85 f6                	test   esi,esi
10006e44:	0f 9f c1             	setg   cl
10006e47:	03 d0                	add    edx,eax
10006e49:	03 ca                	add    ecx,edx
10006e4b:	51                   	push   ecx
10006e4c:	e8 d5 27 00 00       	call   0x10009626
10006e51:	8d 45 f0             	lea    eax,[ebp-0x10]
10006e54:	6a 00                	push   0x0
10006e56:	50                   	push   eax
10006e57:	ff 75 14             	push   DWORD PTR [ebp+0x14]
10006e5a:	56                   	push   esi
10006e5b:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10006e5e:	e8 09 00 00 00       	call   0x10006e6c
10006e63:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10006e66:	83 c4 30             	add    esp,0x30
10006e69:	5e                   	pop    esi
10006e6a:	c9                   	leave
10006e6b:	c3                   	ret
10006e6c:	55                   	push   ebp
10006e6d:	8b ec                	mov    ebp,esp
10006e6f:	53                   	push   ebx
10006e70:	33 db                	xor    ebx,ebx
10006e72:	38 5d 18             	cmp    BYTE PTR [ebp+0x18],bl
10006e75:	56                   	push   esi
10006e76:	8b 75 14             	mov    esi,DWORD PTR [ebp+0x14]
10006e79:	57                   	push   edi
10006e7a:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10006e7d:	74 1b                	je     0x10006e9a
10006e7f:	33 c0                	xor    eax,eax
10006e81:	39 5d 0c             	cmp    DWORD PTR [ebp+0xc],ebx
10006e84:	0f 9f c0             	setg   al
10006e87:	50                   	push   eax
10006e88:	33 c0                	xor    eax,eax
10006e8a:	83 3e 2d             	cmp    DWORD PTR [esi],0x2d
10006e8d:	0f 94 c0             	sete   al
10006e90:	03 c7                	add    eax,edi
10006e92:	50                   	push   eax
10006e93:	e8 76 02 00 00       	call   0x1000710e
10006e98:	59                   	pop    ecx
10006e99:	59                   	pop    ecx
10006e9a:	83 3e 2d             	cmp    DWORD PTR [esi],0x2d
10006e9d:	8b c7                	mov    eax,edi
10006e9f:	75 06                	jne    0x10006ea7
10006ea1:	c6 07 2d             	mov    BYTE PTR [edi],0x2d
10006ea4:	8d 47 01             	lea    eax,[edi+0x1]
10006ea7:	39 5d 0c             	cmp    DWORD PTR [ebp+0xc],ebx
10006eaa:	7e 12                	jle    0x10006ebe
10006eac:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10006eaf:	8d 48 01             	lea    ecx,[eax+0x1]
10006eb2:	88 10                	mov    BYTE PTR [eax],dl
10006eb4:	8b c1                	mov    eax,ecx
10006eb6:	8a 0d f4 10 01 10    	mov    cl,BYTE PTR ds:0x100110f4
10006ebc:	88 08                	mov    BYTE PTR [eax],cl
10006ebe:	33 c9                	xor    ecx,ecx
10006ec0:	38 5d 18             	cmp    BYTE PTR [ebp+0x18],bl
10006ec3:	68 f8 c2 00 10       	push   0x1000c2f8
10006ec8:	0f 94 c1             	sete   cl
10006ecb:	03 c8                	add    ecx,eax
10006ecd:	03 4d 0c             	add    ecx,DWORD PTR [ebp+0xc]
10006ed0:	51                   	push   ecx
10006ed1:	e8 da 28 00 00       	call   0x100097b0
10006ed6:	39 5d 10             	cmp    DWORD PTR [ebp+0x10],ebx
10006ed9:	59                   	pop    ecx
10006eda:	59                   	pop    ecx
10006edb:	8b c8                	mov    ecx,eax
10006edd:	74 03                	je     0x10006ee2
10006edf:	c6 01 45             	mov    BYTE PTR [ecx],0x45
10006ee2:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
10006ee5:	41                   	inc    ecx
10006ee6:	80 38 30             	cmp    BYTE PTR [eax],0x30
10006ee9:	74 3c                	je     0x10006f27
10006eeb:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
10006eee:	4b                   	dec    ebx
10006eef:	79 05                	jns    0x10006ef6
10006ef1:	f7 db                	neg    ebx
10006ef3:	c6 01 2d             	mov    BYTE PTR [ecx],0x2d
10006ef6:	41                   	inc    ecx
10006ef7:	83 fb 64             	cmp    ebx,0x64
10006efa:	7c 11                	jl     0x10006f0d
10006efc:	8b c3                	mov    eax,ebx
10006efe:	6a 64                	push   0x64
10006f00:	99                   	cdq
10006f01:	5e                   	pop    esi
10006f02:	f7 fe                	idiv   esi
10006f04:	00 01                	add    BYTE PTR [ecx],al
10006f06:	8b c3                	mov    eax,ebx
10006f08:	99                   	cdq
10006f09:	f7 fe                	idiv   esi
10006f0b:	8b da                	mov    ebx,edx
10006f0d:	41                   	inc    ecx
10006f0e:	83 fb 0a             	cmp    ebx,0xa
10006f11:	7c 11                	jl     0x10006f24
10006f13:	8b c3                	mov    eax,ebx
10006f15:	6a 0a                	push   0xa
10006f17:	99                   	cdq
10006f18:	5e                   	pop    esi
10006f19:	f7 fe                	idiv   esi
10006f1b:	00 01                	add    BYTE PTR [ecx],al
10006f1d:	8b c3                	mov    eax,ebx
10006f1f:	99                   	cdq
10006f20:	f7 fe                	idiv   esi
10006f22:	8b da                	mov    ebx,edx
10006f24:	00 59 01             	add    BYTE PTR [ecx+0x1],bl
10006f27:	8b c7                	mov    eax,edi
10006f29:	5f                   	pop    edi
10006f2a:	5e                   	pop    esi
10006f2b:	5b                   	pop    ebx
10006f2c:	5d                   	pop    ebp
10006f2d:	c3                   	ret
10006f2e:	55                   	push   ebp
10006f2f:	8b ec                	mov    ebp,esp
10006f31:	83 ec 28             	sub    esp,0x28
10006f34:	8d 45 d8             	lea    eax,[ebp-0x28]
10006f37:	56                   	push   esi
10006f38:	50                   	push   eax
10006f39:	8d 45 f0             	lea    eax,[ebp-0x10]
10006f3c:	50                   	push   eax
10006f3d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10006f40:	51                   	push   ecx
10006f41:	51                   	push   ecx
10006f42:	dd 00                	fld    QWORD PTR [eax]
10006f44:	dd 1c 24             	fstp   QWORD PTR [esp]
10006f47:	e8 51 27 00 00       	call   0x1000969d
10006f4c:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
10006f4f:	8d 45 f0             	lea    eax,[ebp-0x10]
10006f52:	50                   	push   eax
10006f53:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
10006f56:	03 c6                	add    eax,esi
10006f58:	50                   	push   eax
10006f59:	33 c0                	xor    eax,eax
10006f5b:	83 7d f0 2d          	cmp    DWORD PTR [ebp-0x10],0x2d
10006f5f:	0f 94 c0             	sete   al
10006f62:	03 45 0c             	add    eax,DWORD PTR [ebp+0xc]
10006f65:	50                   	push   eax
10006f66:	e8 bb 26 00 00       	call   0x10009626
10006f6b:	8d 45 f0             	lea    eax,[ebp-0x10]
10006f6e:	6a 00                	push   0x0
10006f70:	50                   	push   eax
10006f71:	56                   	push   esi
10006f72:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10006f75:	e8 09 00 00 00       	call   0x10006f83
10006f7a:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10006f7d:	83 c4 2c             	add    esp,0x2c
10006f80:	5e                   	pop    esi
10006f81:	c9                   	leave
10006f82:	c3                   	ret
10006f83:	55                   	push   ebp
10006f84:	8b ec                	mov    ebp,esp
10006f86:	53                   	push   ebx
10006f87:	56                   	push   esi
10006f88:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
10006f8b:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10006f8e:	57                   	push   edi
10006f8f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10006f92:	48                   	dec    eax
10006f93:	80 7d 14 00          	cmp    BYTE PTR [ebp+0x14],0x0
10006f97:	74 1a                	je     0x10006fb3
10006f99:	3b 45 0c             	cmp    eax,DWORD PTR [ebp+0xc]
10006f9c:	75 15                	jne    0x10006fb3
10006f9e:	33 c9                	xor    ecx,ecx
10006fa0:	83 3e 2d             	cmp    DWORD PTR [esi],0x2d
10006fa3:	0f 94 c1             	sete   cl
10006fa6:	03 c8                	add    ecx,eax
10006fa8:	03 cb                	add    ecx,ebx
10006faa:	8b c1                	mov    eax,ecx
10006fac:	c6 00 30             	mov    BYTE PTR [eax],0x30
10006faf:	80 60 01 00          	and    BYTE PTR [eax+0x1],0x0
10006fb3:	83 3e 2d             	cmp    DWORD PTR [esi],0x2d
10006fb6:	8b fb                	mov    edi,ebx
10006fb8:	75 06                	jne    0x10006fc0
10006fba:	c6 03 2d             	mov    BYTE PTR [ebx],0x2d
10006fbd:	8d 7b 01             	lea    edi,[ebx+0x1]
10006fc0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10006fc3:	85 c0                	test   eax,eax
10006fc5:	7f 10                	jg     0x10006fd7
10006fc7:	6a 01                	push   0x1
10006fc9:	57                   	push   edi
10006fca:	e8 3f 01 00 00       	call   0x1000710e
10006fcf:	59                   	pop    ecx
10006fd0:	c6 07 30             	mov    BYTE PTR [edi],0x30
10006fd3:	59                   	pop    ecx
10006fd4:	47                   	inc    edi
10006fd5:	eb 02                	jmp    0x10006fd9
10006fd7:	03 f8                	add    edi,eax
10006fd9:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
10006fdd:	7e 44                	jle    0x10007023
10006fdf:	6a 01                	push   0x1
10006fe1:	57                   	push   edi
10006fe2:	e8 27 01 00 00       	call   0x1000710e
10006fe7:	a0 f4 10 01 10       	mov    al,ds:0x100110f4
10006fec:	59                   	pop    ecx
10006fed:	88 07                	mov    BYTE PTR [edi],al
10006fef:	8b 76 04             	mov    esi,DWORD PTR [esi+0x4]
10006ff2:	47                   	inc    edi
10006ff3:	59                   	pop    ecx
10006ff4:	85 f6                	test   esi,esi
10006ff6:	7d 2b                	jge    0x10007023
10006ff8:	80 7d 14 00          	cmp    BYTE PTR [ebp+0x14],0x0
10006ffc:	74 04                	je     0x10007002
10006ffe:	f7 de                	neg    esi
10007000:	eb 07                	jmp    0x10007009
10007002:	f7 de                	neg    esi
10007004:	39 75 0c             	cmp    DWORD PTR [ebp+0xc],esi
10007007:	7c 03                	jl     0x1000700c
10007009:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
1000700c:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000700f:	57                   	push   edi
10007010:	e8 f9 00 00 00       	call   0x1000710e
10007015:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10007018:	6a 30                	push   0x30
1000701a:	57                   	push   edi
1000701b:	e8 80 1c 00 00       	call   0x10008ca0
10007020:	83 c4 14             	add    esp,0x14
10007023:	5f                   	pop    edi
10007024:	8b c3                	mov    eax,ebx
10007026:	5e                   	pop    esi
10007027:	5b                   	pop    ebx
10007028:	5d                   	pop    ebp
10007029:	c3                   	ret
1000702a:	55                   	push   ebp
1000702b:	8b ec                	mov    ebp,esp
1000702d:	83 ec 28             	sub    esp,0x28
10007030:	53                   	push   ebx
10007031:	56                   	push   esi
10007032:	8d 45 d8             	lea    eax,[ebp-0x28]
10007035:	57                   	push   edi
10007036:	50                   	push   eax
10007037:	8d 45 f0             	lea    eax,[ebp-0x10]
1000703a:	50                   	push   eax
1000703b:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000703e:	51                   	push   ecx
1000703f:	51                   	push   ecx
10007040:	dd 00                	fld    QWORD PTR [eax]
10007042:	dd 1c 24             	fstp   QWORD PTR [esp]
10007045:	e8 53 26 00 00       	call   0x1000969d
1000704a:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1000704d:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
10007050:	8d 70 ff             	lea    esi,[eax-0x1]
10007053:	33 c0                	xor    eax,eax
10007055:	83 7d f0 2d          	cmp    DWORD PTR [ebp-0x10],0x2d
10007059:	0f 94 c0             	sete   al
1000705c:	03 45 0c             	add    eax,DWORD PTR [ebp+0xc]
1000705f:	8b f8                	mov    edi,eax
10007061:	8d 45 f0             	lea    eax,[ebp-0x10]
10007064:	50                   	push   eax
10007065:	53                   	push   ebx
10007066:	57                   	push   edi
10007067:	e8 ba 25 00 00       	call   0x10009626
1000706c:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1000706f:	83 c4 1c             	add    esp,0x1c
10007072:	48                   	dec    eax
10007073:	3b f0                	cmp    esi,eax
10007075:	0f 9c c1             	setl   cl
10007078:	83 f8 fc             	cmp    eax,0xfffffffc
1000707b:	7c 26                	jl     0x100070a3
1000707d:	3b c3                	cmp    eax,ebx
1000707f:	7d 22                	jge    0x100070a3
10007081:	84 c9                	test   cl,cl
10007083:	74 0a                	je     0x1000708f
10007085:	8a 07                	mov    al,BYTE PTR [edi]
10007087:	47                   	inc    edi
10007088:	84 c0                	test   al,al
1000708a:	75 f9                	jne    0x10007085
1000708c:	20 47 fe             	and    BYTE PTR [edi-0x2],al
1000708f:	8d 45 f0             	lea    eax,[ebp-0x10]
10007092:	6a 01                	push   0x1
10007094:	50                   	push   eax
10007095:	53                   	push   ebx
10007096:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10007099:	e8 e5 fe ff ff       	call   0x10006f83
1000709e:	83 c4 10             	add    esp,0x10
100070a1:	eb 15                	jmp    0x100070b8
100070a3:	8d 45 f0             	lea    eax,[ebp-0x10]
100070a6:	6a 01                	push   0x1
100070a8:	50                   	push   eax
100070a9:	ff 75 14             	push   DWORD PTR [ebp+0x14]
100070ac:	53                   	push   ebx
100070ad:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100070b0:	e8 b7 fd ff ff       	call   0x10006e6c
100070b5:	83 c4 14             	add    esp,0x14
100070b8:	5f                   	pop    edi
100070b9:	5e                   	pop    esi
100070ba:	5b                   	pop    ebx
100070bb:	c9                   	leave
100070bc:	c3                   	ret
100070bd:	55                   	push   ebp
100070be:	8b ec                	mov    ebp,esp
100070c0:	83 7d 10 65          	cmp    DWORD PTR [ebp+0x10],0x65
100070c4:	74 32                	je     0x100070f8
100070c6:	83 7d 10 45          	cmp    DWORD PTR [ebp+0x10],0x45
100070ca:	74 2c                	je     0x100070f8
100070cc:	83 7d 10 66          	cmp    DWORD PTR [ebp+0x10],0x66
100070d0:	75 13                	jne    0x100070e5
100070d2:	ff 75 14             	push   DWORD PTR [ebp+0x14]
100070d5:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100070d8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100070db:	e8 4e fe ff ff       	call   0x10006f2e
100070e0:	83 c4 0c             	add    esp,0xc
100070e3:	5d                   	pop    ebp
100070e4:	c3                   	ret
100070e5:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100070e8:	ff 75 14             	push   DWORD PTR [ebp+0x14]
100070eb:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100070ee:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100070f1:	e8 34 ff ff ff       	call   0x1000702a
100070f6:	eb 11                	jmp    0x10007109
100070f8:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100070fb:	ff 75 14             	push   DWORD PTR [ebp+0x14]
100070fe:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10007101:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10007104:	e8 02 fd ff ff       	call   0x10006e0b
10007109:	83 c4 10             	add    esp,0x10
1000710c:	5d                   	pop    ebp
1000710d:	c3                   	ret
1000710e:	57                   	push   edi
1000710f:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
10007113:	85 ff                	test   edi,edi
10007115:	74 1a                	je     0x10007131
10007117:	56                   	push   esi
10007118:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1000711c:	56                   	push   esi
1000711d:	e8 de 1b 00 00       	call   0x10008d00
10007122:	40                   	inc    eax
10007123:	50                   	push   eax
10007124:	56                   	push   esi
10007125:	03 f7                	add    esi,edi
10007127:	56                   	push   esi
10007128:	e8 33 18 00 00       	call   0x10008960
1000712d:	83 c4 10             	add    esp,0x10
10007130:	5e                   	pop    esi
10007131:	5f                   	pop    edi
10007132:	c3                   	ret
10007133:	a1 f4 e8 00 10       	mov    eax,ds:0x1000e8f4
10007138:	85 c0                	test   eax,eax
1000713a:	74 02                	je     0x1000713e
1000713c:	ff d0                	call   eax
1000713e:	68 14 e0 00 10       	push   0x1000e014
10007143:	68 08 e0 00 10       	push   0x1000e008
10007148:	e8 ea 00 00 00       	call   0x10007237
1000714d:	68 04 e0 00 10       	push   0x1000e004
10007152:	68 00 e0 00 10       	push   0x1000e000
10007157:	e8 db 00 00 00       	call   0x10007237
1000715c:	83 c4 10             	add    esp,0x10
1000715f:	c3                   	ret
10007160:	6a 00                	push   0x0
10007162:	6a 01                	push   0x1
10007164:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
10007168:	e8 13 00 00 00       	call   0x10007180
1000716d:	83 c4 0c             	add    esp,0xc
10007170:	c3                   	ret
10007171:	6a 01                	push   0x1
10007173:	6a 00                	push   0x0
10007175:	6a 00                	push   0x0
10007177:	e8 04 00 00 00       	call   0x10007180
1000717c:	83 c4 0c             	add    esp,0xc
1000717f:	c3                   	ret
10007180:	57                   	push   edi
10007181:	e8 9f 00 00 00       	call   0x10007225
10007186:	6a 01                	push   0x1
10007188:	5f                   	pop    edi
10007189:	39 3d 38 3b 0e 10    	cmp    DWORD PTR ds:0x100e3b38,edi
1000718f:	75 11                	jne    0x100071a2
10007191:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
10007195:	ff 15 d4 c0 00 10    	call   DWORD PTR ds:0x1000c0d4
1000719b:	50                   	push   eax
1000719c:	ff 15 c0 c0 00 10    	call   DWORD PTR ds:0x1000c0c0
100071a2:	83 7c 24 0c 00       	cmp    DWORD PTR [esp+0xc],0x0
100071a7:	53                   	push   ebx
100071a8:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
100071ac:	89 3d 34 3b 0e 10    	mov    DWORD PTR ds:0x100e3b34,edi
100071b2:	88 1d 30 3b 0e 10    	mov    BYTE PTR ds:0x100e3b30,bl
100071b8:	75 3c                	jne    0x100071f6
100071ba:	a1 90 5a 1f 10       	mov    eax,ds:0x101f5a90
100071bf:	85 c0                	test   eax,eax
100071c1:	74 22                	je     0x100071e5
100071c3:	8b 0d 8c 5a 1f 10    	mov    ecx,DWORD PTR ds:0x101f5a8c
100071c9:	56                   	push   esi
100071ca:	8d 71 fc             	lea    esi,[ecx-0x4]
100071cd:	3b f0                	cmp    esi,eax
100071cf:	72 13                	jb     0x100071e4
100071d1:	8b 06                	mov    eax,DWORD PTR [esi]
100071d3:	85 c0                	test   eax,eax
100071d5:	74 02                	je     0x100071d9
100071d7:	ff d0                	call   eax
100071d9:	83 ee 04             	sub    esi,0x4
100071dc:	3b 35 90 5a 1f 10    	cmp    esi,DWORD PTR ds:0x101f5a90
100071e2:	73 ed                	jae    0x100071d1
100071e4:	5e                   	pop    esi
100071e5:	68 20 e0 00 10       	push   0x1000e020
100071ea:	68 18 e0 00 10       	push   0x1000e018
100071ef:	e8 43 00 00 00       	call   0x10007237
100071f4:	59                   	pop    ecx
100071f5:	59                   	pop    ecx
100071f6:	68 28 e0 00 10       	push   0x1000e028
100071fb:	68 24 e0 00 10       	push   0x1000e024
10007200:	e8 32 00 00 00       	call   0x10007237
10007205:	59                   	pop    ecx
10007206:	59                   	pop    ecx
10007207:	85 db                	test   ebx,ebx
10007209:	5b                   	pop    ebx
1000720a:	74 07                	je     0x10007213
1000720c:	e8 1d 00 00 00       	call   0x1000722e
10007211:	5f                   	pop    edi
10007212:	c3                   	ret
10007213:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
10007217:	89 3d 38 3b 0e 10    	mov    DWORD PTR ds:0x100e3b38,edi
1000721d:	ff 15 c8 c0 00 10    	call   DWORD PTR ds:0x1000c0c8
10007223:	5f                   	pop    edi
10007224:	c3                   	ret
10007225:	6a 0d                	push   0xd
10007227:	e8 45 ef ff ff       	call   0x10006171
1000722c:	59                   	pop    ecx
1000722d:	c3                   	ret
1000722e:	6a 0d                	push   0xd
10007230:	e8 9d ef ff ff       	call   0x100061d2
10007235:	59                   	pop    ecx
10007236:	c3                   	ret
10007237:	56                   	push   esi
10007238:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1000723c:	3b 74 24 0c          	cmp    esi,DWORD PTR [esp+0xc]
10007240:	73 0d                	jae    0x1000724f
10007242:	8b 06                	mov    eax,DWORD PTR [esi]
10007244:	85 c0                	test   eax,eax
10007246:	74 02                	je     0x1000724a
10007248:	ff d0                	call   eax
1000724a:	83 c6 04             	add    esi,0x4
1000724d:	eb ed                	jmp    0x1000723c
1000724f:	5e                   	pop    esi
10007250:	c3                   	ret
10007251:	56                   	push   esi
10007252:	e8 85 ee ff ff       	call   0x100060dc
10007257:	ff 15 e0 c0 00 10    	call   DWORD PTR ds:0x1000c0e0
1000725d:	83 f8 ff             	cmp    eax,0xffffffff
10007260:	a3 b0 0c 01 10       	mov    ds:0x10010cb0,eax
10007265:	74 3a                	je     0x100072a1
10007267:	6a 74                	push   0x74
10007269:	6a 01                	push   0x1
1000726b:	e8 47 09 00 00       	call   0x10007bb7
10007270:	8b f0                	mov    esi,eax
10007272:	59                   	pop    ecx
10007273:	85 f6                	test   esi,esi
10007275:	59                   	pop    ecx
10007276:	74 29                	je     0x100072a1
10007278:	56                   	push   esi
10007279:	ff 35 b0 0c 01 10    	push   DWORD PTR ds:0x10010cb0
1000727f:	ff 15 dc c0 00 10    	call   DWORD PTR ds:0x1000c0dc
10007285:	85 c0                	test   eax,eax
10007287:	74 18                	je     0x100072a1
10007289:	56                   	push   esi
1000728a:	e8 34 00 00 00       	call   0x100072c3
1000728f:	59                   	pop    ecx
10007290:	ff 15 d8 c0 00 10    	call   DWORD PTR ds:0x1000c0d8
10007296:	83 4e 04 ff          	or     DWORD PTR [esi+0x4],0xffffffff
1000729a:	6a 01                	push   0x1
1000729c:	89 06                	mov    DWORD PTR [esi],eax
1000729e:	58                   	pop    eax
1000729f:	5e                   	pop    esi
100072a0:	c3                   	ret
100072a1:	33 c0                	xor    eax,eax
100072a3:	5e                   	pop    esi
100072a4:	c3                   	ret
100072a5:	e8 5b ee ff ff       	call   0x10006105
100072aa:	a1 b0 0c 01 10       	mov    eax,ds:0x10010cb0
100072af:	83 f8 ff             	cmp    eax,0xffffffff
100072b2:	74 0e                	je     0x100072c2
100072b4:	50                   	push   eax
100072b5:	ff 15 d0 c0 00 10    	call   DWORD PTR ds:0x1000c0d0
100072bb:	83 0d b0 0c 01 10 ff 	or     DWORD PTR ds:0x10010cb0,0xffffffff
100072c2:	c3                   	ret
100072c3:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100072c7:	c7 40 50 30 11 01 10 	mov    DWORD PTR [eax+0x50],0x10011130
100072ce:	c7 40 14 01 00 00 00 	mov    DWORD PTR [eax+0x14],0x1
100072d5:	c3                   	ret
100072d6:	56                   	push   esi
100072d7:	57                   	push   edi
100072d8:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
100072de:	ff 35 b0 0c 01 10    	push   DWORD PTR ds:0x10010cb0
100072e4:	8b f8                	mov    edi,eax
100072e6:	ff 15 64 c0 00 10    	call   DWORD PTR ds:0x1000c064
100072ec:	8b f0                	mov    esi,eax
100072ee:	85 f6                	test   esi,esi
100072f0:	75 3f                	jne    0x10007331
100072f2:	6a 74                	push   0x74
100072f4:	6a 01                	push   0x1
100072f6:	e8 bc 08 00 00       	call   0x10007bb7
100072fb:	8b f0                	mov    esi,eax
100072fd:	59                   	pop    ecx
100072fe:	85 f6                	test   esi,esi
10007300:	59                   	pop    ecx
10007301:	74 26                	je     0x10007329
10007303:	56                   	push   esi
10007304:	ff 35 b0 0c 01 10    	push   DWORD PTR ds:0x10010cb0
1000730a:	ff 15 dc c0 00 10    	call   DWORD PTR ds:0x1000c0dc
10007310:	85 c0                	test   eax,eax
10007312:	74 15                	je     0x10007329
10007314:	56                   	push   esi
10007315:	e8 a9 ff ff ff       	call   0x100072c3
1000731a:	59                   	pop    ecx
1000731b:	ff 15 d8 c0 00 10    	call   DWORD PTR ds:0x1000c0d8
10007321:	83 4e 04 ff          	or     DWORD PTR [esi+0x4],0xffffffff
10007325:	89 06                	mov    DWORD PTR [esi],eax
10007327:	eb 08                	jmp    0x10007331
10007329:	6a 10                	push   0x10
1000732b:	e8 69 d0 ff ff       	call   0x10004399
10007330:	59                   	pop    ecx
10007331:	57                   	push   edi
10007332:	ff 15 e4 c0 00 10    	call   DWORD PTR ds:0x1000c0e4
10007338:	8b c6                	mov    eax,esi
1000733a:	5f                   	pop    edi
1000733b:	5e                   	pop    esi
1000733c:	c3                   	ret
1000733d:	a1 b0 0c 01 10       	mov    eax,ds:0x10010cb0
10007342:	83 f8 ff             	cmp    eax,0xffffffff
10007345:	0f 84 91 00 00 00    	je     0x100073dc
1000734b:	56                   	push   esi
1000734c:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10007350:	85 f6                	test   esi,esi
10007352:	75 0d                	jne    0x10007361
10007354:	50                   	push   eax
10007355:	ff 15 64 c0 00 10    	call   DWORD PTR ds:0x1000c064
1000735b:	8b f0                	mov    esi,eax
1000735d:	85 f6                	test   esi,esi
1000735f:	74 6c                	je     0x100073cd
10007361:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
10007364:	85 c0                	test   eax,eax
10007366:	74 07                	je     0x1000736f
10007368:	50                   	push   eax
10007369:	e8 de cb ff ff       	call   0x10003f4c
1000736e:	59                   	pop    ecx
1000736f:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
10007372:	85 c0                	test   eax,eax
10007374:	74 07                	je     0x1000737d
10007376:	50                   	push   eax
10007377:	e8 d0 cb ff ff       	call   0x10003f4c
1000737c:	59                   	pop    ecx
1000737d:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
10007380:	85 c0                	test   eax,eax
10007382:	74 07                	je     0x1000738b
10007384:	50                   	push   eax
10007385:	e8 c2 cb ff ff       	call   0x10003f4c
1000738a:	59                   	pop    ecx
1000738b:	8b 46 38             	mov    eax,DWORD PTR [esi+0x38]
1000738e:	85 c0                	test   eax,eax
10007390:	74 07                	je     0x10007399
10007392:	50                   	push   eax
10007393:	e8 b4 cb ff ff       	call   0x10003f4c
10007398:	59                   	pop    ecx
10007399:	8b 46 40             	mov    eax,DWORD PTR [esi+0x40]
1000739c:	85 c0                	test   eax,eax
1000739e:	74 07                	je     0x100073a7
100073a0:	50                   	push   eax
100073a1:	e8 a6 cb ff ff       	call   0x10003f4c
100073a6:	59                   	pop    ecx
100073a7:	8b 46 44             	mov    eax,DWORD PTR [esi+0x44]
100073aa:	85 c0                	test   eax,eax
100073ac:	74 07                	je     0x100073b5
100073ae:	50                   	push   eax
100073af:	e8 98 cb ff ff       	call   0x10003f4c
100073b4:	59                   	pop    ecx
100073b5:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
100073b8:	3d 30 11 01 10       	cmp    eax,0x10011130
100073bd:	74 07                	je     0x100073c6
100073bf:	50                   	push   eax
100073c0:	e8 87 cb ff ff       	call   0x10003f4c
100073c5:	59                   	pop    ecx
100073c6:	56                   	push   esi
100073c7:	e8 80 cb ff ff       	call   0x10003f4c
100073cc:	59                   	pop    ecx
100073cd:	6a 00                	push   0x0
100073cf:	ff 35 b0 0c 01 10    	push   DWORD PTR ds:0x10010cb0
100073d5:	ff 15 dc c0 00 10    	call   DWORD PTR ds:0x1000c0dc
100073db:	5e                   	pop    esi
100073dc:	c3                   	ret
100073dd:	55                   	push   ebp
100073de:	8b ec                	mov    ebp,esp
100073e0:	83 ec 48             	sub    esp,0x48
100073e3:	53                   	push   ebx
100073e4:	56                   	push   esi
100073e5:	57                   	push   edi
100073e6:	68 80 04 00 00       	push   0x480
100073eb:	e8 45 cc ff ff       	call   0x10004035
100073f0:	8b f0                	mov    esi,eax
100073f2:	59                   	pop    ecx
100073f3:	85 f6                	test   esi,esi
100073f5:	75 08                	jne    0x100073ff
100073f7:	6a 1b                	push   0x1b
100073f9:	e8 9b cf ff ff       	call   0x10004399
100073fe:	59                   	pop    ecx
100073ff:	89 35 80 59 1f 10    	mov    DWORD PTR ds:0x101f5980,esi
10007405:	c7 05 80 5a 1f 10 20 	mov    DWORD PTR ds:0x101f5a80,0x20
1000740c:	00 00 00 
1000740f:	8d 86 80 04 00 00    	lea    eax,[esi+0x480]
10007415:	3b f0                	cmp    esi,eax
10007417:	73 1e                	jae    0x10007437
10007419:	80 66 04 00          	and    BYTE PTR [esi+0x4],0x0
1000741d:	83 0e ff             	or     DWORD PTR [esi],0xffffffff
10007420:	83 66 08 00          	and    DWORD PTR [esi+0x8],0x0
10007424:	c6 46 05 0a          	mov    BYTE PTR [esi+0x5],0xa
10007428:	a1 80 59 1f 10       	mov    eax,ds:0x101f5980
1000742d:	83 c6 24             	add    esi,0x24
10007430:	05 80 04 00 00       	add    eax,0x480
10007435:	eb de                	jmp    0x10007415
10007437:	8d 45 b8             	lea    eax,[ebp-0x48]
1000743a:	50                   	push   eax
1000743b:	ff 15 08 c0 00 10    	call   DWORD PTR ds:0x1000c008
10007441:	66 83 7d ea 00       	cmp    WORD PTR [ebp-0x16],0x0
10007446:	0f 84 d1 00 00 00    	je     0x1000751d
1000744c:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
1000744f:	85 c0                	test   eax,eax
10007451:	0f 84 c6 00 00 00    	je     0x1000751d
10007457:	8b 38                	mov    edi,DWORD PTR [eax]
10007459:	8d 58 04             	lea    ebx,[eax+0x4]
1000745c:	8d 04 3b             	lea    eax,[ebx+edi*1]
1000745f:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10007462:	b8 00 08 00 00       	mov    eax,0x800
10007467:	3b f8                	cmp    edi,eax
10007469:	7c 02                	jl     0x1000746d
1000746b:	8b f8                	mov    edi,eax
1000746d:	39 3d 80 5a 1f 10    	cmp    DWORD PTR ds:0x101f5a80,edi
10007473:	7d 56                	jge    0x100074cb
10007475:	be 84 59 1f 10       	mov    esi,0x101f5984
1000747a:	68 80 04 00 00       	push   0x480
1000747f:	e8 b1 cb ff ff       	call   0x10004035
10007484:	85 c0                	test   eax,eax
10007486:	59                   	pop    ecx
10007487:	74 3c                	je     0x100074c5
10007489:	83 05 80 5a 1f 10 20 	add    DWORD PTR ds:0x101f5a80,0x20
10007490:	89 06                	mov    DWORD PTR [esi],eax
10007492:	8d 88 80 04 00 00    	lea    ecx,[eax+0x480]
10007498:	3b c1                	cmp    eax,ecx
1000749a:	73 1c                	jae    0x100074b8
1000749c:	80 60 04 00          	and    BYTE PTR [eax+0x4],0x0
100074a0:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
100074a3:	83 60 08 00          	and    DWORD PTR [eax+0x8],0x0
100074a7:	c6 40 05 0a          	mov    BYTE PTR [eax+0x5],0xa
100074ab:	8b 0e                	mov    ecx,DWORD PTR [esi]
100074ad:	83 c0 24             	add    eax,0x24
100074b0:	81 c1 80 04 00 00    	add    ecx,0x480
100074b6:	eb e0                	jmp    0x10007498
100074b8:	83 c6 04             	add    esi,0x4
100074bb:	39 3d 80 5a 1f 10    	cmp    DWORD PTR ds:0x101f5a80,edi
100074c1:	7c b7                	jl     0x1000747a
100074c3:	eb 06                	jmp    0x100074cb
100074c5:	8b 3d 80 5a 1f 10    	mov    edi,DWORD PTR ds:0x101f5a80
100074cb:	33 f6                	xor    esi,esi
100074cd:	85 ff                	test   edi,edi
100074cf:	7e 4c                	jle    0x1000751d
100074d1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100074d4:	8b 08                	mov    ecx,DWORD PTR [eax]
100074d6:	83 f9 ff             	cmp    ecx,0xffffffff
100074d9:	74 38                	je     0x10007513
100074db:	8a 03                	mov    al,BYTE PTR [ebx]
100074dd:	a8 01                	test   al,0x1
100074df:	74 32                	je     0x10007513
100074e1:	a8 08                	test   al,0x8
100074e3:	75 0b                	jne    0x100074f0
100074e5:	51                   	push   ecx
100074e6:	ff 15 68 c0 00 10    	call   DWORD PTR ds:0x1000c068
100074ec:	85 c0                	test   eax,eax
100074ee:	74 23                	je     0x10007513
100074f0:	8b ce                	mov    ecx,esi
100074f2:	8b c6                	mov    eax,esi
100074f4:	c1 f9 05             	sar    ecx,0x5
100074f7:	83 e0 1f             	and    eax,0x1f
100074fa:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
10007501:	8d 04 c0             	lea    eax,[eax+eax*8]
10007504:	8d 04 81             	lea    eax,[ecx+eax*4]
10007507:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000750a:	8b 09                	mov    ecx,DWORD PTR [ecx]
1000750c:	89 08                	mov    DWORD PTR [eax],ecx
1000750e:	8a 0b                	mov    cl,BYTE PTR [ebx]
10007510:	88 48 04             	mov    BYTE PTR [eax+0x4],cl
10007513:	83 45 fc 04          	add    DWORD PTR [ebp-0x4],0x4
10007517:	46                   	inc    esi
10007518:	43                   	inc    ebx
10007519:	3b f7                	cmp    esi,edi
1000751b:	7c b4                	jl     0x100074d1
1000751d:	33 db                	xor    ebx,ebx
1000751f:	8b 0d 80 59 1f 10    	mov    ecx,DWORD PTR ds:0x101f5980
10007525:	8d 04 db             	lea    eax,[ebx+ebx*8]
10007528:	83 3c 81 ff          	cmp    DWORD PTR [ecx+eax*4],0xffffffff
1000752c:	8d 34 81             	lea    esi,[ecx+eax*4]
1000752f:	75 4d                	jne    0x1000757e
10007531:	85 db                	test   ebx,ebx
10007533:	c6 46 04 81          	mov    BYTE PTR [esi+0x4],0x81
10007537:	75 05                	jne    0x1000753e
10007539:	6a f6                	push   0xfffffff6
1000753b:	58                   	pop    eax
1000753c:	eb 0a                	jmp    0x10007548
1000753e:	8b c3                	mov    eax,ebx
10007540:	48                   	dec    eax
10007541:	f7 d8                	neg    eax
10007543:	1b c0                	sbb    eax,eax
10007545:	83 c0 f5             	add    eax,0xfffffff5
10007548:	50                   	push   eax
10007549:	ff 15 6c c0 00 10    	call   DWORD PTR ds:0x1000c06c
1000754f:	8b f8                	mov    edi,eax
10007551:	83 ff ff             	cmp    edi,0xffffffff
10007554:	74 17                	je     0x1000756d
10007556:	57                   	push   edi
10007557:	ff 15 68 c0 00 10    	call   DWORD PTR ds:0x1000c068
1000755d:	85 c0                	test   eax,eax
1000755f:	74 0c                	je     0x1000756d
10007561:	25 ff 00 00 00       	and    eax,0xff
10007566:	89 3e                	mov    DWORD PTR [esi],edi
10007568:	83 f8 02             	cmp    eax,0x2
1000756b:	75 06                	jne    0x10007573
1000756d:	80 4e 04 40          	or     BYTE PTR [esi+0x4],0x40
10007571:	eb 0f                	jmp    0x10007582
10007573:	83 f8 03             	cmp    eax,0x3
10007576:	75 0a                	jne    0x10007582
10007578:	80 4e 04 08          	or     BYTE PTR [esi+0x4],0x8
1000757c:	eb 04                	jmp    0x10007582
1000757e:	80 4e 04 80          	or     BYTE PTR [esi+0x4],0x80
10007582:	43                   	inc    ebx
10007583:	83 fb 03             	cmp    ebx,0x3
10007586:	7c 97                	jl     0x1000751f
10007588:	ff 35 80 5a 1f 10    	push   DWORD PTR ds:0x101f5a80
1000758e:	ff 15 70 c0 00 10    	call   DWORD PTR ds:0x1000c070
10007594:	5f                   	pop    edi
10007595:	5e                   	pop    esi
10007596:	5b                   	pop    ebx
10007597:	c9                   	leave
10007598:	c3                   	ret
10007599:	53                   	push   ebx
1000759a:	56                   	push   esi
1000759b:	57                   	push   edi
1000759c:	be 80 59 1f 10       	mov    esi,0x101f5980
100075a1:	8b 06                	mov    eax,DWORD PTR [esi]
100075a3:	85 c0                	test   eax,eax
100075a5:	74 37                	je     0x100075de
100075a7:	8b f8                	mov    edi,eax
100075a9:	05 80 04 00 00       	add    eax,0x480
100075ae:	3b f8                	cmp    edi,eax
100075b0:	73 21                	jae    0x100075d3
100075b2:	8d 5f 0c             	lea    ebx,[edi+0xc]
100075b5:	83 7b fc 00          	cmp    DWORD PTR [ebx-0x4],0x0
100075b9:	74 07                	je     0x100075c2
100075bb:	53                   	push   ebx
100075bc:	ff 15 c4 c0 00 10    	call   DWORD PTR ds:0x1000c0c4
100075c2:	8b 06                	mov    eax,DWORD PTR [esi]
100075c4:	83 c7 24             	add    edi,0x24
100075c7:	05 80 04 00 00       	add    eax,0x480
100075cc:	83 c3 24             	add    ebx,0x24
100075cf:	3b f8                	cmp    edi,eax
100075d1:	72 e2                	jb     0x100075b5
100075d3:	ff 36                	push   DWORD PTR [esi]
100075d5:	e8 72 c9 ff ff       	call   0x10003f4c
100075da:	83 26 00             	and    DWORD PTR [esi],0x0
100075dd:	59                   	pop    ecx
100075de:	83 c6 04             	add    esi,0x4
100075e1:	81 fe 80 5a 1f 10    	cmp    esi,0x101f5a80
100075e7:	7c b8                	jl     0x100075a1
100075e9:	5f                   	pop    edi
100075ea:	5e                   	pop    esi
100075eb:	5b                   	pop    ebx
100075ec:	c3                   	ret
100075ed:	53                   	push   ebx
100075ee:	33 db                	xor    ebx,ebx
100075f0:	39 1d 88 5a 1f 10    	cmp    DWORD PTR ds:0x101f5a88,ebx
100075f6:	56                   	push   esi
100075f7:	57                   	push   edi
100075f8:	75 05                	jne    0x100075ff
100075fa:	e8 82 26 00 00       	call   0x10009c81
100075ff:	8b 35 6c 3a 0e 10    	mov    esi,DWORD PTR ds:0x100e3a6c
10007605:	33 ff                	xor    edi,edi
10007607:	8a 06                	mov    al,BYTE PTR [esi]
10007609:	3a c3                	cmp    al,bl
1000760b:	74 12                	je     0x1000761f
1000760d:	3c 3d                	cmp    al,0x3d
1000760f:	74 01                	je     0x10007612
10007611:	47                   	inc    edi
10007612:	56                   	push   esi
10007613:	e8 e8 16 00 00       	call   0x10008d00
10007618:	59                   	pop    ecx
10007619:	8d 74 06 01          	lea    esi,[esi+eax*1+0x1]
1000761d:	eb e8                	jmp    0x10007607
1000761f:	8d 04 bd 04 00 00 00 	lea    eax,[edi*4+0x4]
10007626:	50                   	push   eax
10007627:	e8 09 ca ff ff       	call   0x10004035
1000762c:	8b f0                	mov    esi,eax
1000762e:	59                   	pop    ecx
1000762f:	3b f3                	cmp    esi,ebx
10007631:	89 35 18 3b 0e 10    	mov    DWORD PTR ds:0x100e3b18,esi
10007637:	75 08                	jne    0x10007641
10007639:	6a 09                	push   0x9
1000763b:	e8 59 cd ff ff       	call   0x10004399
10007640:	59                   	pop    ecx
10007641:	8b 3d 6c 3a 0e 10    	mov    edi,DWORD PTR ds:0x100e3a6c
10007647:	38 1f                	cmp    BYTE PTR [edi],bl
10007649:	74 39                	je     0x10007684
1000764b:	55                   	push   ebp
1000764c:	57                   	push   edi
1000764d:	e8 ae 16 00 00       	call   0x10008d00
10007652:	8b e8                	mov    ebp,eax
10007654:	59                   	pop    ecx
10007655:	45                   	inc    ebp
10007656:	80 3f 3d             	cmp    BYTE PTR [edi],0x3d
10007659:	74 22                	je     0x1000767d
1000765b:	55                   	push   ebp
1000765c:	e8 d4 c9 ff ff       	call   0x10004035
10007661:	3b c3                	cmp    eax,ebx
10007663:	59                   	pop    ecx
10007664:	89 06                	mov    DWORD PTR [esi],eax
10007666:	75 08                	jne    0x10007670
10007668:	6a 09                	push   0x9
1000766a:	e8 2a cd ff ff       	call   0x10004399
1000766f:	59                   	pop    ecx
10007670:	57                   	push   edi
10007671:	ff 36                	push   DWORD PTR [esi]
10007673:	e8 38 21 00 00       	call   0x100097b0
10007678:	59                   	pop    ecx
10007679:	83 c6 04             	add    esi,0x4
1000767c:	59                   	pop    ecx
1000767d:	03 fd                	add    edi,ebp
1000767f:	38 1f                	cmp    BYTE PTR [edi],bl
10007681:	75 c9                	jne    0x1000764c
10007683:	5d                   	pop    ebp
10007684:	ff 35 6c 3a 0e 10    	push   DWORD PTR ds:0x100e3a6c
1000768a:	e8 bd c8 ff ff       	call   0x10003f4c
1000768f:	59                   	pop    ecx
10007690:	89 1d 6c 3a 0e 10    	mov    DWORD PTR ds:0x100e3a6c,ebx
10007696:	89 1e                	mov    DWORD PTR [esi],ebx
10007698:	5f                   	pop    edi
10007699:	5e                   	pop    esi
1000769a:	c7 05 84 5a 1f 10 01 	mov    DWORD PTR ds:0x101f5a84,0x1
100076a1:	00 00 00 
100076a4:	5b                   	pop    ebx
100076a5:	c3                   	ret
100076a6:	55                   	push   ebp
100076a7:	8b ec                	mov    ebp,esp
100076a9:	51                   	push   ecx
100076aa:	51                   	push   ecx
100076ab:	53                   	push   ebx
100076ac:	33 db                	xor    ebx,ebx
100076ae:	39 1d 88 5a 1f 10    	cmp    DWORD PTR ds:0x101f5a88,ebx
100076b4:	56                   	push   esi
100076b5:	57                   	push   edi
100076b6:	75 05                	jne    0x100076bd
100076b8:	e8 c4 25 00 00       	call   0x10009c81
100076bd:	be 3c 3b 0e 10       	mov    esi,0x100e3b3c
100076c2:	68 04 01 00 00       	push   0x104
100076c7:	56                   	push   esi
100076c8:	53                   	push   ebx
100076c9:	ff 15 a4 c0 00 10    	call   DWORD PTR ds:0x1000c0a4
100076cf:	a1 c4 6a 1f 10       	mov    eax,ds:0x101f6ac4
100076d4:	89 35 28 3b 0e 10    	mov    DWORD PTR ds:0x100e3b28,esi
100076da:	8b fe                	mov    edi,esi
100076dc:	38 18                	cmp    BYTE PTR [eax],bl
100076de:	74 02                	je     0x100076e2
100076e0:	8b f8                	mov    edi,eax
100076e2:	8d 45 f8             	lea    eax,[ebp-0x8]
100076e5:	50                   	push   eax
100076e6:	8d 45 fc             	lea    eax,[ebp-0x4]
100076e9:	50                   	push   eax
100076ea:	53                   	push   ebx
100076eb:	53                   	push   ebx
100076ec:	57                   	push   edi
100076ed:	e8 4d 00 00 00       	call   0x1000773f
100076f2:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100076f5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100076f8:	8d 04 88             	lea    eax,[eax+ecx*4]
100076fb:	50                   	push   eax
100076fc:	e8 34 c9 ff ff       	call   0x10004035
10007701:	8b f0                	mov    esi,eax
10007703:	83 c4 18             	add    esp,0x18
10007706:	3b f3                	cmp    esi,ebx
10007708:	75 08                	jne    0x10007712
1000770a:	6a 08                	push   0x8
1000770c:	e8 88 cc ff ff       	call   0x10004399
10007711:	59                   	pop    ecx
10007712:	8d 45 f8             	lea    eax,[ebp-0x8]
10007715:	50                   	push   eax
10007716:	8d 45 fc             	lea    eax,[ebp-0x4]
10007719:	50                   	push   eax
1000771a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000771d:	8d 04 86             	lea    eax,[esi+eax*4]
10007720:	50                   	push   eax
10007721:	56                   	push   esi
10007722:	57                   	push   edi
10007723:	e8 17 00 00 00       	call   0x1000773f
10007728:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000772b:	83 c4 14             	add    esp,0x14
1000772e:	48                   	dec    eax
1000772f:	89 35 10 3b 0e 10    	mov    DWORD PTR ds:0x100e3b10,esi
10007735:	5f                   	pop    edi
10007736:	5e                   	pop    esi
10007737:	a3 0c 3b 0e 10       	mov    ds:0x100e3b0c,eax
1000773c:	5b                   	pop    ebx
1000773d:	c9                   	leave
1000773e:	c3                   	ret
1000773f:	55                   	push   ebp
10007740:	8b ec                	mov    ebp,esp
10007742:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
10007745:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10007748:	53                   	push   ebx
10007749:	56                   	push   esi
1000774a:	83 21 00             	and    DWORD PTR [ecx],0x0
1000774d:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
10007750:	57                   	push   edi
10007751:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10007754:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
1000775a:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000775d:	85 ff                	test   edi,edi
1000775f:	74 08                	je     0x10007769
10007761:	89 37                	mov    DWORD PTR [edi],esi
10007763:	83 c7 04             	add    edi,0x4
10007766:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
10007769:	80 38 22             	cmp    BYTE PTR [eax],0x22
1000776c:	75 44                	jne    0x100077b2
1000776e:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10007771:	40                   	inc    eax
10007772:	80 fa 22             	cmp    dl,0x22
10007775:	74 29                	je     0x100077a0
10007777:	84 d2                	test   dl,dl
10007779:	74 25                	je     0x100077a0
1000777b:	0f b6 d2             	movzx  edx,dl
1000777e:	f6 82 61 58 1f 10 04 	test   BYTE PTR [edx+0x101f5861],0x4
10007785:	74 0c                	je     0x10007793
10007787:	ff 01                	inc    DWORD PTR [ecx]
10007789:	85 f6                	test   esi,esi
1000778b:	74 06                	je     0x10007793
1000778d:	8a 10                	mov    dl,BYTE PTR [eax]
1000778f:	88 16                	mov    BYTE PTR [esi],dl
10007791:	46                   	inc    esi
10007792:	40                   	inc    eax
10007793:	ff 01                	inc    DWORD PTR [ecx]
10007795:	85 f6                	test   esi,esi
10007797:	74 d5                	je     0x1000776e
10007799:	8a 10                	mov    dl,BYTE PTR [eax]
1000779b:	88 16                	mov    BYTE PTR [esi],dl
1000779d:	46                   	inc    esi
1000779e:	eb ce                	jmp    0x1000776e
100077a0:	ff 01                	inc    DWORD PTR [ecx]
100077a2:	85 f6                	test   esi,esi
100077a4:	74 04                	je     0x100077aa
100077a6:	80 26 00             	and    BYTE PTR [esi],0x0
100077a9:	46                   	inc    esi
100077aa:	80 38 22             	cmp    BYTE PTR [eax],0x22
100077ad:	75 46                	jne    0x100077f5
100077af:	40                   	inc    eax
100077b0:	eb 43                	jmp    0x100077f5
100077b2:	ff 01                	inc    DWORD PTR [ecx]
100077b4:	85 f6                	test   esi,esi
100077b6:	74 05                	je     0x100077bd
100077b8:	8a 10                	mov    dl,BYTE PTR [eax]
100077ba:	88 16                	mov    BYTE PTR [esi],dl
100077bc:	46                   	inc    esi
100077bd:	8a 10                	mov    dl,BYTE PTR [eax]
100077bf:	40                   	inc    eax
100077c0:	0f b6 da             	movzx  ebx,dl
100077c3:	f6 83 61 58 1f 10 04 	test   BYTE PTR [ebx+0x101f5861],0x4
100077ca:	74 0c                	je     0x100077d8
100077cc:	ff 01                	inc    DWORD PTR [ecx]
100077ce:	85 f6                	test   esi,esi
100077d0:	74 05                	je     0x100077d7
100077d2:	8a 18                	mov    bl,BYTE PTR [eax]
100077d4:	88 1e                	mov    BYTE PTR [esi],bl
100077d6:	46                   	inc    esi
100077d7:	40                   	inc    eax
100077d8:	80 fa 20             	cmp    dl,0x20
100077db:	74 09                	je     0x100077e6
100077dd:	84 d2                	test   dl,dl
100077df:	74 09                	je     0x100077ea
100077e1:	80 fa 09             	cmp    dl,0x9
100077e4:	75 cc                	jne    0x100077b2
100077e6:	84 d2                	test   dl,dl
100077e8:	75 03                	jne    0x100077ed
100077ea:	48                   	dec    eax
100077eb:	eb 08                	jmp    0x100077f5
100077ed:	85 f6                	test   esi,esi
100077ef:	74 04                	je     0x100077f5
100077f1:	80 66 ff 00          	and    BYTE PTR [esi-0x1],0x0
100077f5:	83 65 18 00          	and    DWORD PTR [ebp+0x18],0x0
100077f9:	80 38 00             	cmp    BYTE PTR [eax],0x0
100077fc:	0f 84 e0 00 00 00    	je     0x100078e2
10007802:	8a 10                	mov    dl,BYTE PTR [eax]
10007804:	80 fa 20             	cmp    dl,0x20
10007807:	74 05                	je     0x1000780e
10007809:	80 fa 09             	cmp    dl,0x9
1000780c:	75 03                	jne    0x10007811
1000780e:	40                   	inc    eax
1000780f:	eb f1                	jmp    0x10007802
10007811:	80 38 00             	cmp    BYTE PTR [eax],0x0
10007814:	0f 84 c8 00 00 00    	je     0x100078e2
1000781a:	85 ff                	test   edi,edi
1000781c:	74 08                	je     0x10007826
1000781e:	89 37                	mov    DWORD PTR [edi],esi
10007820:	83 c7 04             	add    edi,0x4
10007823:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
10007826:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
10007829:	ff 02                	inc    DWORD PTR [edx]
1000782b:	c7 45 08 01 00 00 00 	mov    DWORD PTR [ebp+0x8],0x1
10007832:	33 db                	xor    ebx,ebx
10007834:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
10007837:	75 04                	jne    0x1000783d
10007839:	40                   	inc    eax
1000783a:	43                   	inc    ebx
1000783b:	eb f7                	jmp    0x10007834
1000783d:	80 38 22             	cmp    BYTE PTR [eax],0x22
10007840:	75 2c                	jne    0x1000786e
10007842:	f6 c3 01             	test   bl,0x1
10007845:	75 25                	jne    0x1000786c
10007847:	33 ff                	xor    edi,edi
10007849:	39 7d 18             	cmp    DWORD PTR [ebp+0x18],edi
1000784c:	74 0d                	je     0x1000785b
1000784e:	80 78 01 22          	cmp    BYTE PTR [eax+0x1],0x22
10007852:	8d 50 01             	lea    edx,[eax+0x1]
10007855:	75 04                	jne    0x1000785b
10007857:	8b c2                	mov    eax,edx
10007859:	eb 03                	jmp    0x1000785e
1000785b:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
1000785e:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10007861:	33 d2                	xor    edx,edx
10007863:	39 55 18             	cmp    DWORD PTR [ebp+0x18],edx
10007866:	0f 94 c2             	sete   dl
10007869:	89 55 18             	mov    DWORD PTR [ebp+0x18],edx
1000786c:	d1 eb                	shr    ebx,1
1000786e:	8b d3                	mov    edx,ebx
10007870:	4b                   	dec    ebx
10007871:	85 d2                	test   edx,edx
10007873:	74 0e                	je     0x10007883
10007875:	43                   	inc    ebx
10007876:	85 f6                	test   esi,esi
10007878:	74 04                	je     0x1000787e
1000787a:	c6 06 5c             	mov    BYTE PTR [esi],0x5c
1000787d:	46                   	inc    esi
1000787e:	ff 01                	inc    DWORD PTR [ecx]
10007880:	4b                   	dec    ebx
10007881:	75 f3                	jne    0x10007876
10007883:	8a 10                	mov    dl,BYTE PTR [eax]
10007885:	84 d2                	test   dl,dl
10007887:	74 4a                	je     0x100078d3
10007889:	83 7d 18 00          	cmp    DWORD PTR [ebp+0x18],0x0
1000788d:	75 0a                	jne    0x10007899
1000788f:	80 fa 20             	cmp    dl,0x20
10007892:	74 3f                	je     0x100078d3
10007894:	80 fa 09             	cmp    dl,0x9
10007897:	74 3a                	je     0x100078d3
10007899:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1000789d:	74 2e                	je     0x100078cd
1000789f:	85 f6                	test   esi,esi
100078a1:	74 19                	je     0x100078bc
100078a3:	0f b6 da             	movzx  ebx,dl
100078a6:	f6 83 61 58 1f 10 04 	test   BYTE PTR [ebx+0x101f5861],0x4
100078ad:	74 06                	je     0x100078b5
100078af:	88 16                	mov    BYTE PTR [esi],dl
100078b1:	46                   	inc    esi
100078b2:	40                   	inc    eax
100078b3:	ff 01                	inc    DWORD PTR [ecx]
100078b5:	8a 10                	mov    dl,BYTE PTR [eax]
100078b7:	88 16                	mov    BYTE PTR [esi],dl
100078b9:	46                   	inc    esi
100078ba:	eb 0f                	jmp    0x100078cb
100078bc:	0f b6 d2             	movzx  edx,dl
100078bf:	f6 82 61 58 1f 10 04 	test   BYTE PTR [edx+0x101f5861],0x4
100078c6:	74 03                	je     0x100078cb
100078c8:	40                   	inc    eax
100078c9:	ff 01                	inc    DWORD PTR [ecx]
100078cb:	ff 01                	inc    DWORD PTR [ecx]
100078cd:	40                   	inc    eax
100078ce:	e9 58 ff ff ff       	jmp    0x1000782b
100078d3:	85 f6                	test   esi,esi
100078d5:	74 04                	je     0x100078db
100078d7:	80 26 00             	and    BYTE PTR [esi],0x0
100078da:	46                   	inc    esi
100078db:	ff 01                	inc    DWORD PTR [ecx]
100078dd:	e9 17 ff ff ff       	jmp    0x100077f9
100078e2:	85 ff                	test   edi,edi
100078e4:	74 03                	je     0x100078e9
100078e6:	83 27 00             	and    DWORD PTR [edi],0x0
100078e9:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100078ec:	5f                   	pop    edi
100078ed:	5e                   	pop    esi
100078ee:	5b                   	pop    ebx
100078ef:	ff 00                	inc    DWORD PTR [eax]
100078f1:	5d                   	pop    ebp
100078f2:	c3                   	ret
100078f3:	51                   	push   ecx
100078f4:	51                   	push   ecx
100078f5:	a1 40 3c 0e 10       	mov    eax,ds:0x100e3c40
100078fa:	53                   	push   ebx
100078fb:	55                   	push   ebp
100078fc:	8b 2d 50 c0 00 10    	mov    ebp,DWORD PTR ds:0x1000c050
10007902:	56                   	push   esi
10007903:	57                   	push   edi
10007904:	33 db                	xor    ebx,ebx
10007906:	33 f6                	xor    esi,esi
10007908:	33 ff                	xor    edi,edi
1000790a:	3b c3                	cmp    eax,ebx
1000790c:	75 33                	jne    0x10007941
1000790e:	ff d5                	call   ebp
10007910:	8b f0                	mov    esi,eax
10007912:	3b f3                	cmp    esi,ebx
10007914:	74 0c                	je     0x10007922
10007916:	c7 05 40 3c 0e 10 01 	mov    DWORD PTR ds:0x100e3c40,0x1
1000791d:	00 00 00 
10007920:	eb 28                	jmp    0x1000794a
10007922:	ff 15 54 c0 00 10    	call   DWORD PTR ds:0x1000c054
10007928:	8b f8                	mov    edi,eax
1000792a:	3b fb                	cmp    edi,ebx
1000792c:	0f 84 ea 00 00 00    	je     0x10007a1c
10007932:	c7 05 40 3c 0e 10 02 	mov    DWORD PTR ds:0x100e3c40,0x2
10007939:	00 00 00 
1000793c:	e9 8f 00 00 00       	jmp    0x100079d0
10007941:	83 f8 01             	cmp    eax,0x1
10007944:	0f 85 81 00 00 00    	jne    0x100079cb
1000794a:	3b f3                	cmp    esi,ebx
1000794c:	75 0c                	jne    0x1000795a
1000794e:	ff d5                	call   ebp
10007950:	8b f0                	mov    esi,eax
10007952:	3b f3                	cmp    esi,ebx
10007954:	0f 84 c2 00 00 00    	je     0x10007a1c
1000795a:	66 39 1e             	cmp    WORD PTR [esi],bx
1000795d:	8b c6                	mov    eax,esi
1000795f:	74 0e                	je     0x1000796f
10007961:	40                   	inc    eax
10007962:	40                   	inc    eax
10007963:	66 39 18             	cmp    WORD PTR [eax],bx
10007966:	75 f9                	jne    0x10007961
10007968:	40                   	inc    eax
10007969:	40                   	inc    eax
1000796a:	66 39 18             	cmp    WORD PTR [eax],bx
1000796d:	75 f2                	jne    0x10007961
1000796f:	2b c6                	sub    eax,esi
10007971:	8b 3d 58 c0 00 10    	mov    edi,DWORD PTR ds:0x1000c058
10007977:	d1 f8                	sar    eax,1
10007979:	53                   	push   ebx
1000797a:	53                   	push   ebx
1000797b:	40                   	inc    eax
1000797c:	53                   	push   ebx
1000797d:	53                   	push   ebx
1000797e:	50                   	push   eax
1000797f:	56                   	push   esi
10007980:	53                   	push   ebx
10007981:	53                   	push   ebx
10007982:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
10007986:	ff d7                	call   edi
10007988:	8b e8                	mov    ebp,eax
1000798a:	3b eb                	cmp    ebp,ebx
1000798c:	74 32                	je     0x100079c0
1000798e:	55                   	push   ebp
1000798f:	e8 a1 c6 ff ff       	call   0x10004035
10007994:	3b c3                	cmp    eax,ebx
10007996:	59                   	pop    ecx
10007997:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1000799b:	74 23                	je     0x100079c0
1000799d:	53                   	push   ebx
1000799e:	53                   	push   ebx
1000799f:	55                   	push   ebp
100079a0:	50                   	push   eax
100079a1:	ff 74 24 24          	push   DWORD PTR [esp+0x24]
100079a5:	56                   	push   esi
100079a6:	53                   	push   ebx
100079a7:	53                   	push   ebx
100079a8:	ff d7                	call   edi
100079aa:	85 c0                	test   eax,eax
100079ac:	75 0e                	jne    0x100079bc
100079ae:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
100079b2:	e8 95 c5 ff ff       	call   0x10003f4c
100079b7:	59                   	pop    ecx
100079b8:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
100079bc:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
100079c0:	56                   	push   esi
100079c1:	ff 15 5c c0 00 10    	call   DWORD PTR ds:0x1000c05c
100079c7:	8b c3                	mov    eax,ebx
100079c9:	eb 53                	jmp    0x10007a1e
100079cb:	83 f8 02             	cmp    eax,0x2
100079ce:	75 4c                	jne    0x10007a1c
100079d0:	3b fb                	cmp    edi,ebx
100079d2:	75 0c                	jne    0x100079e0
100079d4:	ff 15 54 c0 00 10    	call   DWORD PTR ds:0x1000c054
100079da:	8b f8                	mov    edi,eax
100079dc:	3b fb                	cmp    edi,ebx
100079de:	74 3c                	je     0x10007a1c
100079e0:	38 1f                	cmp    BYTE PTR [edi],bl
100079e2:	8b c7                	mov    eax,edi
100079e4:	74 0a                	je     0x100079f0
100079e6:	40                   	inc    eax
100079e7:	38 18                	cmp    BYTE PTR [eax],bl
100079e9:	75 fb                	jne    0x100079e6
100079eb:	40                   	inc    eax
100079ec:	38 18                	cmp    BYTE PTR [eax],bl
100079ee:	75 f6                	jne    0x100079e6
100079f0:	2b c7                	sub    eax,edi
100079f2:	40                   	inc    eax
100079f3:	8b e8                	mov    ebp,eax
100079f5:	55                   	push   ebp
100079f6:	e8 3a c6 ff ff       	call   0x10004035
100079fb:	8b f0                	mov    esi,eax
100079fd:	59                   	pop    ecx
100079fe:	3b f3                	cmp    esi,ebx
10007a00:	75 04                	jne    0x10007a06
10007a02:	33 f6                	xor    esi,esi
10007a04:	eb 0b                	jmp    0x10007a11
10007a06:	55                   	push   ebp
10007a07:	57                   	push   edi
10007a08:	56                   	push   esi
10007a09:	e8 72 d0 ff ff       	call   0x10004a80
10007a0e:	83 c4 0c             	add    esp,0xc
10007a11:	57                   	push   edi
10007a12:	ff 15 60 c0 00 10    	call   DWORD PTR ds:0x1000c060
10007a18:	8b c6                	mov    eax,esi
10007a1a:	eb 02                	jmp    0x10007a1e
10007a1c:	33 c0                	xor    eax,eax
10007a1e:	5f                   	pop    edi
10007a1f:	5e                   	pop    esi
10007a20:	5d                   	pop    ebp
10007a21:	5b                   	pop    ebx
10007a22:	59                   	pop    ecx
10007a23:	59                   	pop    ecx
10007a24:	c3                   	ret
10007a25:	6a 01                	push   0x1
10007a27:	58                   	pop    eax
10007a28:	c2 0c 00             	ret    0xc
10007a2b:	a1 74 3a 0e 10       	mov    eax,ds:0x100e3a74
10007a30:	83 f8 01             	cmp    eax,0x1
10007a33:	74 0d                	je     0x10007a42
10007a35:	85 c0                	test   eax,eax
10007a37:	75 2a                	jne    0x10007a63
10007a39:	83 3d 78 3a 0e 10 01 	cmp    DWORD PTR ds:0x100e3a78,0x1
10007a40:	75 21                	jne    0x10007a63
10007a42:	68 fc 00 00 00       	push   0xfc
10007a47:	e8 18 00 00 00       	call   0x10007a64
10007a4c:	a1 44 3c 0e 10       	mov    eax,ds:0x100e3c44
10007a51:	59                   	pop    ecx
10007a52:	85 c0                	test   eax,eax
10007a54:	74 02                	je     0x10007a58
10007a56:	ff d0                	call   eax
10007a58:	68 ff 00 00 00       	push   0xff
10007a5d:	e8 02 00 00 00       	call   0x10007a64
10007a62:	59                   	pop    ecx
10007a63:	c3                   	ret
10007a64:	55                   	push   ebp
10007a65:	8b ec                	mov    ebp,esp
10007a67:	81 ec a4 01 00 00    	sub    esp,0x1a4
10007a6d:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10007a70:	33 c9                	xor    ecx,ecx
10007a72:	b8 e0 0c 01 10       	mov    eax,0x10010ce0
10007a77:	3b 10                	cmp    edx,DWORD PTR [eax]
10007a79:	74 0b                	je     0x10007a86
10007a7b:	83 c0 08             	add    eax,0x8
10007a7e:	41                   	inc    ecx
10007a7f:	3d 70 0d 01 10       	cmp    eax,0x10010d70
10007a84:	7c f1                	jl     0x10007a77
10007a86:	56                   	push   esi
10007a87:	8b f1                	mov    esi,ecx
10007a89:	c1 e6 03             	shl    esi,0x3
10007a8c:	3b 96 e0 0c 01 10    	cmp    edx,DWORD PTR [esi+0x10010ce0]
10007a92:	0f 85 1c 01 00 00    	jne    0x10007bb4
10007a98:	a1 74 3a 0e 10       	mov    eax,ds:0x100e3a74
10007a9d:	83 f8 01             	cmp    eax,0x1
10007aa0:	0f 84 e8 00 00 00    	je     0x10007b8e
10007aa6:	85 c0                	test   eax,eax
10007aa8:	75 0d                	jne    0x10007ab7
10007aaa:	83 3d 78 3a 0e 10 01 	cmp    DWORD PTR ds:0x100e3a78,0x1
10007ab1:	0f 84 d7 00 00 00    	je     0x10007b8e
10007ab7:	81 fa fc 00 00 00    	cmp    edx,0xfc
10007abd:	0f 84 f1 00 00 00    	je     0x10007bb4
10007ac3:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
10007ac9:	68 04 01 00 00       	push   0x104
10007ace:	50                   	push   eax
10007acf:	6a 00                	push   0x0
10007ad1:	ff 15 a4 c0 00 10    	call   DWORD PTR ds:0x1000c0a4
10007ad7:	85 c0                	test   eax,eax
10007ad9:	75 13                	jne    0x10007aee
10007adb:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
10007ae1:	68 d8 c5 00 10       	push   0x1000c5d8
10007ae6:	50                   	push   eax
10007ae7:	e8 c4 1c 00 00       	call   0x100097b0
10007aec:	59                   	pop    ecx
10007aed:	59                   	pop    ecx
10007aee:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
10007af4:	57                   	push   edi
10007af5:	50                   	push   eax
10007af6:	8d bd 5c fe ff ff    	lea    edi,[ebp-0x1a4]
10007afc:	e8 ff 11 00 00       	call   0x10008d00
10007b01:	40                   	inc    eax
10007b02:	59                   	pop    ecx
10007b03:	83 f8 3c             	cmp    eax,0x3c
10007b06:	76 29                	jbe    0x10007b31
10007b08:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
10007b0e:	50                   	push   eax
10007b0f:	e8 ec 11 00 00       	call   0x10008d00
10007b14:	8b f8                	mov    edi,eax
10007b16:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
10007b1c:	83 e8 3b             	sub    eax,0x3b
10007b1f:	6a 03                	push   0x3
10007b21:	03 f8                	add    edi,eax
10007b23:	68 d4 c5 00 10       	push   0x1000c5d4
10007b28:	57                   	push   edi
10007b29:	e8 02 22 00 00       	call   0x10009d30
10007b2e:	83 c4 10             	add    esp,0x10
10007b31:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
10007b37:	68 b8 c5 00 10       	push   0x1000c5b8
10007b3c:	50                   	push   eax
10007b3d:	e8 6e 1c 00 00       	call   0x100097b0
10007b42:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
10007b48:	57                   	push   edi
10007b49:	50                   	push   eax
10007b4a:	e8 71 1c 00 00       	call   0x100097c0
10007b4f:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
10007b55:	68 b4 c5 00 10       	push   0x1000c5b4
10007b5a:	50                   	push   eax
10007b5b:	e8 60 1c 00 00       	call   0x100097c0
10007b60:	ff b6 e4 0c 01 10    	push   DWORD PTR [esi+0x10010ce4]
10007b66:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
10007b6c:	50                   	push   eax
10007b6d:	e8 4e 1c 00 00       	call   0x100097c0
10007b72:	68 10 20 01 00       	push   0x12010
10007b77:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
10007b7d:	68 8c c5 00 10       	push   0x1000c58c
10007b82:	50                   	push   eax
10007b83:	e8 15 21 00 00       	call   0x10009c9d
10007b88:	83 c4 2c             	add    esp,0x2c
10007b8b:	5f                   	pop    edi
10007b8c:	eb 26                	jmp    0x10007bb4
10007b8e:	8d 45 08             	lea    eax,[ebp+0x8]
10007b91:	8d b6 e4 0c 01 10    	lea    esi,[esi+0x10010ce4]
10007b97:	6a 00                	push   0x0
10007b99:	50                   	push   eax
10007b9a:	ff 36                	push   DWORD PTR [esi]
10007b9c:	e8 5f 11 00 00       	call   0x10008d00
10007ba1:	59                   	pop    ecx
10007ba2:	50                   	push   eax
10007ba3:	ff 36                	push   DWORD PTR [esi]
10007ba5:	6a f4                	push   0xfffffff4
10007ba7:	ff 15 6c c0 00 10    	call   DWORD PTR ds:0x1000c06c
10007bad:	50                   	push   eax
10007bae:	ff 15 98 c0 00 10    	call   DWORD PTR ds:0x1000c098
10007bb4:	5e                   	pop    esi
10007bb5:	c9                   	leave
10007bb6:	c3                   	ret
10007bb7:	55                   	push   ebp
10007bb8:	8b ec                	mov    ebp,esp
10007bba:	6a ff                	push   0xffffffff
10007bbc:	68 f0 c5 00 10       	push   0x1000c5f0
10007bc1:	68 e0 62 00 10       	push   0x100062e0
10007bc6:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10007bcc:	50                   	push   eax
10007bcd:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
10007bd4:	83 ec 18             	sub    esp,0x18
10007bd7:	53                   	push   ebx
10007bd8:	56                   	push   esi
10007bd9:	57                   	push   edi
10007bda:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10007bdd:	0f af 75 0c          	imul   esi,DWORD PTR [ebp+0xc]
10007be1:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
10007be4:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
10007be7:	83 fe e0             	cmp    esi,0xffffffe0
10007bea:	77 14                	ja     0x10007c00
10007bec:	33 db                	xor    ebx,ebx
10007bee:	3b f3                	cmp    esi,ebx
10007bf0:	75 03                	jne    0x10007bf5
10007bf2:	6a 01                	push   0x1
10007bf4:	5e                   	pop    esi
10007bf5:	83 c6 0f             	add    esi,0xf
10007bf8:	83 e6 f0             	and    esi,0xfffffff0
10007bfb:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
10007bfe:	eb 02                	jmp    0x10007c02
10007c00:	33 db                	xor    ebx,ebx
10007c02:	89 5d e0             	mov    DWORD PTR [ebp-0x20],ebx
10007c05:	83 fe e0             	cmp    esi,0xffffffe0
10007c08:	0f 87 a8 00 00 00    	ja     0x10007cb6
10007c0e:	a1 b4 5a 1f 10       	mov    eax,ds:0x101f5ab4
10007c13:	83 f8 03             	cmp    eax,0x3
10007c16:	75 41                	jne    0x10007c59
10007c18:	8b 7d e4             	mov    edi,DWORD PTR [ebp-0x1c]
10007c1b:	3b 3d ac 5a 1f 10    	cmp    edi,DWORD PTR ds:0x101f5aac
10007c21:	77 7c                	ja     0x10007c9f
10007c23:	6a 09                	push   0x9
10007c25:	e8 47 e5 ff ff       	call   0x10006171
10007c2a:	59                   	pop    ecx
10007c2b:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
10007c2e:	57                   	push   edi
10007c2f:	e8 cf d9 ff ff       	call   0x10005603
10007c34:	59                   	pop    ecx
10007c35:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
10007c38:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
10007c3c:	e8 0f 00 00 00       	call   0x10007c50
10007c41:	39 5d e0             	cmp    DWORD PTR [ebp-0x20],ebx
10007c44:	74 5e                	je     0x10007ca4
10007c46:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
10007c49:	eb 48                	jmp    0x10007c93
10007c4b:	33 db                	xor    ebx,ebx
10007c4d:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10007c50:	6a 09                	push   0x9
10007c52:	e8 7b e5 ff ff       	call   0x100061d2
10007c57:	59                   	pop    ecx
10007c58:	c3                   	ret
10007c59:	83 f8 02             	cmp    eax,0x2
10007c5c:	75 41                	jne    0x10007c9f
10007c5e:	3b 35 bc 0b 01 10    	cmp    esi,DWORD PTR ds:0x10010bbc
10007c64:	77 39                	ja     0x10007c9f
10007c66:	6a 09                	push   0x9
10007c68:	e8 04 e5 ff ff       	call   0x10006171
10007c6d:	59                   	pop    ecx
10007c6e:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
10007c75:	8b c6                	mov    eax,esi
10007c77:	c1 e8 04             	shr    eax,0x4
10007c7a:	50                   	push   eax
10007c7b:	e8 30 e1 ff ff       	call   0x10005db0
10007c80:	59                   	pop    ecx
10007c81:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
10007c84:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
10007c88:	e8 4c 00 00 00       	call   0x10007cd9
10007c8d:	39 5d e0             	cmp    DWORD PTR [ebp-0x20],ebx
10007c90:	74 12                	je     0x10007ca4
10007c92:	56                   	push   esi
10007c93:	53                   	push   ebx
10007c94:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
10007c97:	e8 04 10 00 00       	call   0x10008ca0
10007c9c:	83 c4 0c             	add    esp,0xc
10007c9f:	39 5d e0             	cmp    DWORD PTR [ebp-0x20],ebx
10007ca2:	75 3e                	jne    0x10007ce2
10007ca4:	56                   	push   esi
10007ca5:	6a 08                	push   0x8
10007ca7:	ff 35 b0 5a 1f 10    	push   DWORD PTR ds:0x101f5ab0
10007cad:	ff 15 7c c0 00 10    	call   DWORD PTR ds:0x1000c07c
10007cb3:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
10007cb6:	39 5d e0             	cmp    DWORD PTR [ebp-0x20],ebx
10007cb9:	75 27                	jne    0x10007ce2
10007cbb:	39 1d e8 3a 0e 10    	cmp    DWORD PTR ds:0x100e3ae8,ebx
10007cc1:	74 1f                	je     0x10007ce2
10007cc3:	56                   	push   esi
10007cc4:	e8 ef e6 ff ff       	call   0x100063b8
10007cc9:	59                   	pop    ecx
10007cca:	85 c0                	test   eax,eax
10007ccc:	0f 85 30 ff ff ff    	jne    0x10007c02
10007cd2:	eb 11                	jmp    0x10007ce5
10007cd4:	33 db                	xor    ebx,ebx
10007cd6:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10007cd9:	6a 09                	push   0x9
10007cdb:	e8 f2 e4 ff ff       	call   0x100061d2
10007ce0:	59                   	pop    ecx
10007ce1:	c3                   	ret
10007ce2:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
10007ce5:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
10007ce8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10007cef:	5f                   	pop    edi
10007cf0:	5e                   	pop    esi
10007cf1:	5b                   	pop    ebx
10007cf2:	c9                   	leave
10007cf3:	c3                   	ret
10007cf4:	53                   	push   ebx
10007cf5:	57                   	push   edi
10007cf6:	6a 02                	push   0x2
10007cf8:	33 db                	xor    ebx,ebx
10007cfa:	e8 72 e4 ff ff       	call   0x10006171
10007cff:	59                   	pop    ecx
10007d00:	6a 03                	push   0x3
10007d02:	5f                   	pop    edi
10007d03:	39 3d c0 6a 1f 10    	cmp    DWORD PTR ds:0x101f6ac0,edi
10007d09:	7e 5d                	jle    0x10007d68
10007d0b:	56                   	push   esi
10007d0c:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10007d11:	8b f7                	mov    esi,edi
10007d13:	c1 e6 02             	shl    esi,0x2
10007d16:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
10007d19:	85 c0                	test   eax,eax
10007d1b:	74 41                	je     0x10007d5e
10007d1d:	f6 40 0c 83          	test   BYTE PTR [eax+0xc],0x83
10007d21:	74 0d                	je     0x10007d30
10007d23:	50                   	push   eax
10007d24:	e8 29 c0 ff ff       	call   0x10003d52
10007d29:	83 f8 ff             	cmp    eax,0xffffffff
10007d2c:	59                   	pop    ecx
10007d2d:	74 01                	je     0x10007d30
10007d2f:	43                   	inc    ebx
10007d30:	83 ff 14             	cmp    edi,0x14
10007d33:	7c 29                	jl     0x10007d5e
10007d35:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10007d3a:	8b 04 06             	mov    eax,DWORD PTR [esi+eax*1]
10007d3d:	83 c0 20             	add    eax,0x20
10007d40:	50                   	push   eax
10007d41:	ff 15 c4 c0 00 10    	call   DWORD PTR ds:0x1000c0c4
10007d47:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10007d4c:	ff 34 06             	push   DWORD PTR [esi+eax*1]
10007d4f:	e8 f8 c1 ff ff       	call   0x10003f4c
10007d54:	a1 b8 5a 1f 10       	mov    eax,ds:0x101f5ab8
10007d59:	59                   	pop    ecx
10007d5a:	83 24 06 00          	and    DWORD PTR [esi+eax*1],0x0
10007d5e:	47                   	inc    edi
10007d5f:	3b 3d c0 6a 1f 10    	cmp    edi,DWORD PTR ds:0x101f6ac0
10007d65:	7c a5                	jl     0x10007d0c
10007d67:	5e                   	pop    esi
10007d68:	6a 02                	push   0x2
10007d6a:	e8 63 e4 ff ff       	call   0x100061d2
10007d6f:	59                   	pop    ecx
10007d70:	8b c3                	mov    eax,ebx
10007d72:	5f                   	pop    edi
10007d73:	5b                   	pop    ebx
10007d74:	c3                   	ret
10007d75:	56                   	push   esi
10007d76:	e8 76 00 00 00       	call   0x10007df1
10007d7b:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10007d7f:	33 f6                	xor    esi,esi
10007d81:	89 08                	mov    DWORD PTR [eax],ecx
10007d83:	b8 70 0d 01 10       	mov    eax,0x10010d70
10007d88:	3b 08                	cmp    ecx,DWORD PTR [eax]
10007d8a:	74 22                	je     0x10007dae
10007d8c:	83 c0 08             	add    eax,0x8
10007d8f:	46                   	inc    esi
10007d90:	3d d8 0e 01 10       	cmp    eax,0x10010ed8
10007d95:	7c f1                	jl     0x10007d88
10007d97:	83 f9 13             	cmp    ecx,0x13
10007d9a:	72 22                	jb     0x10007dbe
10007d9c:	83 f9 24             	cmp    ecx,0x24
10007d9f:	77 1d                	ja     0x10007dbe
10007da1:	e8 42 00 00 00       	call   0x10007de8
10007da6:	c7 00 0d 00 00 00    	mov    DWORD PTR [eax],0xd
10007dac:	5e                   	pop    esi
10007dad:	c3                   	ret
10007dae:	e8 35 00 00 00       	call   0x10007de8
10007db3:	8b 0c f5 74 0d 01 10 	mov    ecx,DWORD PTR [esi*8+0x10010d74]
10007dba:	5e                   	pop    esi
10007dbb:	89 08                	mov    DWORD PTR [eax],ecx
10007dbd:	c3                   	ret
10007dbe:	81 f9 bc 00 00 00    	cmp    ecx,0xbc
10007dc4:	72 15                	jb     0x10007ddb
10007dc6:	81 f9 ca 00 00 00    	cmp    ecx,0xca
10007dcc:	77 0d                	ja     0x10007ddb
10007dce:	e8 15 00 00 00       	call   0x10007de8
10007dd3:	c7 00 08 00 00 00    	mov    DWORD PTR [eax],0x8
10007dd9:	5e                   	pop    esi
10007dda:	c3                   	ret
10007ddb:	e8 08 00 00 00       	call   0x10007de8
10007de0:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
10007de6:	5e                   	pop    esi
10007de7:	c3                   	ret
10007de8:	e8 e9 f4 ff ff       	call   0x100072d6
10007ded:	83 c0 08             	add    eax,0x8
10007df0:	c3                   	ret
10007df1:	e8 e0 f4 ff ff       	call   0x100072d6
10007df6:	83 c0 0c             	add    eax,0xc
10007df9:	c3                   	ret
10007dfa:	51                   	push   ecx
10007dfb:	51                   	push   ecx
10007dfc:	53                   	push   ebx
10007dfd:	55                   	push   ebp
10007dfe:	56                   	push   esi
10007dff:	57                   	push   edi
10007e00:	6a 12                	push   0x12
10007e02:	83 cf ff             	or     edi,0xffffffff
10007e05:	e8 67 e3 ff ff       	call   0x10006171
10007e0a:	33 db                	xor    ebx,ebx
10007e0c:	59                   	pop    ecx
10007e0d:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
10007e11:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
10007e15:	bd 80 59 1f 10       	mov    ebp,0x101f5980
10007e1a:	8b 75 00             	mov    esi,DWORD PTR [ebp+0x0]
10007e1d:	85 f6                	test   esi,esi
10007e1f:	0f 84 99 00 00 00    	je     0x10007ebe
10007e25:	8d 86 80 04 00 00    	lea    eax,[esi+0x480]
10007e2b:	3b f0                	cmp    esi,eax
10007e2d:	73 74                	jae    0x10007ea3
10007e2f:	f6 46 04 01          	test   BYTE PTR [esi+0x4],0x1
10007e33:	75 44                	jne    0x10007e79
10007e35:	83 7e 08 00          	cmp    DWORD PTR [esi+0x8],0x0
10007e39:	75 23                	jne    0x10007e5e
10007e3b:	6a 11                	push   0x11
10007e3d:	e8 2f e3 ff ff       	call   0x10006171
10007e42:	83 7e 08 00          	cmp    DWORD PTR [esi+0x8],0x0
10007e46:	59                   	pop    ecx
10007e47:	75 0d                	jne    0x10007e56
10007e49:	8d 46 0c             	lea    eax,[esi+0xc]
10007e4c:	50                   	push   eax
10007e4d:	ff 15 9c c0 00 10    	call   DWORD PTR ds:0x1000c09c
10007e53:	ff 46 08             	inc    DWORD PTR [esi+0x8]
10007e56:	6a 11                	push   0x11
10007e58:	e8 75 e3 ff ff       	call   0x100061d2
10007e5d:	59                   	pop    ecx
10007e5e:	8d 5e 0c             	lea    ebx,[esi+0xc]
10007e61:	53                   	push   ebx
10007e62:	ff 15 88 c0 00 10    	call   DWORD PTR ds:0x1000c088
10007e68:	f6 46 04 01          	test   BYTE PTR [esi+0x4],0x1
10007e6c:	74 18                	je     0x10007e86
10007e6e:	53                   	push   ebx
10007e6f:	ff 15 8c c0 00 10    	call   DWORD PTR ds:0x1000c08c
10007e75:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
10007e79:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
10007e7c:	83 c6 24             	add    esi,0x24
10007e7f:	05 80 04 00 00       	add    eax,0x480
10007e84:	eb a5                	jmp    0x10007e2b
10007e86:	83 0e ff             	or     DWORD PTR [esi],0xffffffff
10007e89:	8b c6                	mov    eax,esi
10007e8b:	2b 45 00             	sub    eax,DWORD PTR [ebp+0x0]
10007e8e:	6a 24                	push   0x24
10007e90:	59                   	pop    ecx
10007e91:	99                   	cdq
10007e92:	f7 f9                	idiv   ecx
10007e94:	8b f8                	mov    edi,eax
10007e96:	03 7c 24 14          	add    edi,DWORD PTR [esp+0x14]
10007e9a:	83 ff ff             	cmp    edi,0xffffffff
10007e9d:	75 6d                	jne    0x10007f0c
10007e9f:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
10007ea3:	83 44 24 14 20       	add    DWORD PTR [esp+0x14],0x20
10007ea8:	83 c5 04             	add    ebp,0x4
10007eab:	43                   	inc    ebx
10007eac:	81 fd 80 5a 1f 10    	cmp    ebp,0x101f5a80
10007eb2:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
10007eb6:	0f 8c 5e ff ff ff    	jl     0x10007e1a
10007ebc:	eb 4e                	jmp    0x10007f0c
10007ebe:	be 80 04 00 00       	mov    esi,0x480
10007ec3:	56                   	push   esi
10007ec4:	e8 6c c1 ff ff       	call   0x10004035
10007ec9:	85 c0                	test   eax,eax
10007ecb:	59                   	pop    ecx
10007ecc:	74 3e                	je     0x10007f0c
10007ece:	83 05 80 5a 1f 10 20 	add    DWORD PTR ds:0x101f5a80,0x20
10007ed5:	8d 0c 9d 80 59 1f 10 	lea    ecx,[ebx*4+0x101f5980]
10007edc:	8d 90 80 04 00 00    	lea    edx,[eax+0x480]
10007ee2:	89 01                	mov    DWORD PTR [ecx],eax
10007ee4:	3b c2                	cmp    eax,edx
10007ee6:	73 18                	jae    0x10007f00
10007ee8:	80 60 04 00          	and    BYTE PTR [eax+0x4],0x0
10007eec:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
10007eef:	83 60 08 00          	and    DWORD PTR [eax+0x8],0x0
10007ef3:	c6 40 05 0a          	mov    BYTE PTR [eax+0x5],0xa
10007ef7:	8b 11                	mov    edx,DWORD PTR [ecx]
10007ef9:	83 c0 24             	add    eax,0x24
10007efc:	03 d6                	add    edx,esi
10007efe:	eb e4                	jmp    0x10007ee4
10007f00:	c1 e3 05             	shl    ebx,0x5
10007f03:	8b fb                	mov    edi,ebx
10007f05:	57                   	push   edi
10007f06:	e8 4f 01 00 00       	call   0x1000805a
10007f0b:	59                   	pop    ecx
10007f0c:	6a 12                	push   0x12
10007f0e:	e8 bf e2 ff ff       	call   0x100061d2
10007f13:	59                   	pop    ecx
10007f14:	8b c7                	mov    eax,edi
10007f16:	5f                   	pop    edi
10007f17:	5e                   	pop    esi
10007f18:	5d                   	pop    ebp
10007f19:	5b                   	pop    ebx
10007f1a:	59                   	pop    ecx
10007f1b:	59                   	pop    ecx
10007f1c:	c3                   	ret
10007f1d:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10007f21:	56                   	push   esi
10007f22:	3b 0d 80 5a 1f 10    	cmp    ecx,DWORD PTR ds:0x101f5a80
10007f28:	57                   	push   edi
10007f29:	73 55                	jae    0x10007f80
10007f2b:	8b c1                	mov    eax,ecx
10007f2d:	c1 f8 05             	sar    eax,0x5
10007f30:	8d 3c 85 80 59 1f 10 	lea    edi,[eax*4+0x101f5980]
10007f37:	8b c1                	mov    eax,ecx
10007f39:	83 e0 1f             	and    eax,0x1f
10007f3c:	8d 34 c0             	lea    esi,[eax+eax*8]
10007f3f:	8b 07                	mov    eax,DWORD PTR [edi]
10007f41:	c1 e6 02             	shl    esi,0x2
10007f44:	83 3c 30 ff          	cmp    DWORD PTR [eax+esi*1],0xffffffff
10007f48:	75 36                	jne    0x10007f80
10007f4a:	83 3d 78 3a 0e 10 01 	cmp    DWORD PTR ds:0x100e3a78,0x1
10007f51:	53                   	push   ebx
10007f52:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
10007f56:	75 1e                	jne    0x10007f76
10007f58:	83 e9 00             	sub    ecx,0x0
10007f5b:	74 10                	je     0x10007f6d
10007f5d:	49                   	dec    ecx
10007f5e:	74 08                	je     0x10007f68
10007f60:	49                   	dec    ecx
10007f61:	75 13                	jne    0x10007f76
10007f63:	53                   	push   ebx
10007f64:	6a f4                	push   0xfffffff4
10007f66:	eb 08                	jmp    0x10007f70
10007f68:	53                   	push   ebx
10007f69:	6a f5                	push   0xfffffff5
10007f6b:	eb 03                	jmp    0x10007f70
10007f6d:	53                   	push   ebx
10007f6e:	6a f6                	push   0xfffffff6
10007f70:	ff 15 4c c0 00 10    	call   DWORD PTR ds:0x1000c04c
10007f76:	8b 07                	mov    eax,DWORD PTR [edi]
10007f78:	89 1c 30             	mov    DWORD PTR [eax+esi*1],ebx
10007f7b:	33 c0                	xor    eax,eax
10007f7d:	5b                   	pop    ebx
10007f7e:	eb 16                	jmp    0x10007f96
10007f80:	e8 63 fe ff ff       	call   0x10007de8
10007f85:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
10007f8b:	e8 61 fe ff ff       	call   0x10007df1
10007f90:	83 20 00             	and    DWORD PTR [eax],0x0
10007f93:	83 c8 ff             	or     eax,0xffffffff
10007f96:	5f                   	pop    edi
10007f97:	5e                   	pop    esi
10007f98:	c3                   	ret
10007f99:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10007f9d:	56                   	push   esi
10007f9e:	3b 0d 80 5a 1f 10    	cmp    ecx,DWORD PTR ds:0x101f5a80
10007fa4:	57                   	push   edi
10007fa5:	73 58                	jae    0x10007fff
10007fa7:	8b c1                	mov    eax,ecx
10007fa9:	c1 f8 05             	sar    eax,0x5
10007fac:	8d 3c 85 80 59 1f 10 	lea    edi,[eax*4+0x101f5980]
10007fb3:	8b c1                	mov    eax,ecx
10007fb5:	83 e0 1f             	and    eax,0x1f
10007fb8:	8d 34 c0             	lea    esi,[eax+eax*8]
10007fbb:	8b 07                	mov    eax,DWORD PTR [edi]
10007fbd:	c1 e6 02             	shl    esi,0x2
10007fc0:	03 c6                	add    eax,esi
10007fc2:	f6 40 04 01          	test   BYTE PTR [eax+0x4],0x1
10007fc6:	74 37                	je     0x10007fff
10007fc8:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
10007fcb:	74 32                	je     0x10007fff
10007fcd:	83 3d 78 3a 0e 10 01 	cmp    DWORD PTR ds:0x100e3a78,0x1
10007fd4:	75 1f                	jne    0x10007ff5
10007fd6:	33 c0                	xor    eax,eax
10007fd8:	2b c8                	sub    ecx,eax
10007fda:	74 10                	je     0x10007fec
10007fdc:	49                   	dec    ecx
10007fdd:	74 08                	je     0x10007fe7
10007fdf:	49                   	dec    ecx
10007fe0:	75 13                	jne    0x10007ff5
10007fe2:	50                   	push   eax
10007fe3:	6a f4                	push   0xfffffff4
10007fe5:	eb 08                	jmp    0x10007fef
10007fe7:	50                   	push   eax
10007fe8:	6a f5                	push   0xfffffff5
10007fea:	eb 03                	jmp    0x10007fef
10007fec:	50                   	push   eax
10007fed:	6a f6                	push   0xfffffff6
10007fef:	ff 15 4c c0 00 10    	call   DWORD PTR ds:0x1000c04c
10007ff5:	8b 07                	mov    eax,DWORD PTR [edi]
10007ff7:	83 0c 30 ff          	or     DWORD PTR [eax+esi*1],0xffffffff
10007ffb:	33 c0                	xor    eax,eax
10007ffd:	eb 16                	jmp    0x10008015
10007fff:	e8 e4 fd ff ff       	call   0x10007de8
10008004:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
1000800a:	e8 e2 fd ff ff       	call   0x10007df1
1000800f:	83 20 00             	and    DWORD PTR [eax],0x0
10008012:	83 c8 ff             	or     eax,0xffffffff
10008015:	5f                   	pop    edi
10008016:	5e                   	pop    esi
10008017:	c3                   	ret
10008018:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000801c:	3b 05 80 5a 1f 10    	cmp    eax,DWORD PTR ds:0x101f5a80
10008022:	73 1f                	jae    0x10008043
10008024:	8b c8                	mov    ecx,eax
10008026:	83 e0 1f             	and    eax,0x1f
10008029:	c1 f9 05             	sar    ecx,0x5
1000802c:	8d 04 c0             	lea    eax,[eax+eax*8]
1000802f:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
10008036:	f6 44 81 04 01       	test   BYTE PTR [ecx+eax*4+0x4],0x1
1000803b:	8d 04 81             	lea    eax,[ecx+eax*4]
1000803e:	74 03                	je     0x10008043
10008040:	8b 00                	mov    eax,DWORD PTR [eax]
10008042:	c3                   	ret
10008043:	e8 a0 fd ff ff       	call   0x10007de8
10008048:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
1000804e:	e8 9e fd ff ff       	call   0x10007df1
10008053:	83 20 00             	and    DWORD PTR [eax],0x0
10008056:	83 c8 ff             	or     eax,0xffffffff
10008059:	c3                   	ret
1000805a:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000805e:	53                   	push   ebx
1000805f:	8b c8                	mov    ecx,eax
10008061:	83 e0 1f             	and    eax,0x1f
10008064:	c1 f9 05             	sar    ecx,0x5
10008067:	56                   	push   esi
10008068:	57                   	push   edi
10008069:	8b 34 8d 80 59 1f 10 	mov    esi,DWORD PTR [ecx*4+0x101f5980]
10008070:	8d 1c 8d 80 59 1f 10 	lea    ebx,[ecx*4+0x101f5980]
10008077:	8d 3c c0             	lea    edi,[eax+eax*8]
1000807a:	c1 e7 02             	shl    edi,0x2
1000807d:	03 f7                	add    esi,edi
1000807f:	83 7e 08 00          	cmp    DWORD PTR [esi+0x8],0x0
10008083:	75 23                	jne    0x100080a8
10008085:	6a 11                	push   0x11
10008087:	e8 e5 e0 ff ff       	call   0x10006171
1000808c:	83 7e 08 00          	cmp    DWORD PTR [esi+0x8],0x0
10008090:	59                   	pop    ecx
10008091:	75 0d                	jne    0x100080a0
10008093:	8d 46 0c             	lea    eax,[esi+0xc]
10008096:	50                   	push   eax
10008097:	ff 15 9c c0 00 10    	call   DWORD PTR ds:0x1000c09c
1000809d:	ff 46 08             	inc    DWORD PTR [esi+0x8]
100080a0:	6a 11                	push   0x11
100080a2:	e8 2b e1 ff ff       	call   0x100061d2
100080a7:	59                   	pop    ecx
100080a8:	8b 03                	mov    eax,DWORD PTR [ebx]
100080aa:	8d 44 38 0c          	lea    eax,[eax+edi*1+0xc]
100080ae:	50                   	push   eax
100080af:	ff 15 88 c0 00 10    	call   DWORD PTR ds:0x1000c088
100080b5:	5f                   	pop    edi
100080b6:	5e                   	pop    esi
100080b7:	5b                   	pop    ebx
100080b8:	c3                   	ret
100080b9:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
100080bd:	8b c8                	mov    ecx,eax
100080bf:	83 e0 1f             	and    eax,0x1f
100080c2:	c1 f9 05             	sar    ecx,0x5
100080c5:	8d 04 c0             	lea    eax,[eax+eax*8]
100080c8:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
100080cf:	8d 44 81 0c          	lea    eax,[ecx+eax*4+0xc]
100080d3:	50                   	push   eax
100080d4:	ff 15 8c c0 00 10    	call   DWORD PTR ds:0x1000c08c
100080da:	c3                   	ret
100080db:	53                   	push   ebx
100080dc:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
100080e0:	3b 1d 80 5a 1f 10    	cmp    ebx,DWORD PTR ds:0x101f5a80
100080e6:	56                   	push   esi
100080e7:	57                   	push   edi
100080e8:	73 72                	jae    0x1000815c
100080ea:	8b c3                	mov    eax,ebx
100080ec:	c1 f8 05             	sar    eax,0x5
100080ef:	8d 3c 85 80 59 1f 10 	lea    edi,[eax*4+0x101f5980]
100080f6:	8b c3                	mov    eax,ebx
100080f8:	83 e0 1f             	and    eax,0x1f
100080fb:	8d 34 c0             	lea    esi,[eax+eax*8]
100080fe:	8b 07                	mov    eax,DWORD PTR [edi]
10008100:	c1 e6 02             	shl    esi,0x2
10008103:	f6 44 30 04 01       	test   BYTE PTR [eax+esi*1+0x4],0x1
10008108:	74 52                	je     0x1000815c
1000810a:	53                   	push   ebx
1000810b:	e8 4a ff ff ff       	call   0x1000805a
10008110:	8b 07                	mov    eax,DWORD PTR [edi]
10008112:	59                   	pop    ecx
10008113:	f6 44 30 04 01       	test   BYTE PTR [eax+esi*1+0x4],0x1
10008118:	74 29                	je     0x10008143
1000811a:	53                   	push   ebx
1000811b:	e8 f8 fe ff ff       	call   0x10008018
10008120:	59                   	pop    ecx
10008121:	50                   	push   eax
10008122:	ff 15 48 c0 00 10    	call   DWORD PTR ds:0x1000c048
10008128:	85 c0                	test   eax,eax
1000812a:	75 0a                	jne    0x10008136
1000812c:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
10008132:	8b f0                	mov    esi,eax
10008134:	eb 02                	jmp    0x10008138
10008136:	33 f6                	xor    esi,esi
10008138:	85 f6                	test   esi,esi
1000813a:	74 15                	je     0x10008151
1000813c:	e8 b0 fc ff ff       	call   0x10007df1
10008141:	89 30                	mov    DWORD PTR [eax],esi
10008143:	e8 a0 fc ff ff       	call   0x10007de8
10008148:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
1000814e:	83 ce ff             	or     esi,0xffffffff
10008151:	53                   	push   ebx
10008152:	e8 62 ff ff ff       	call   0x100080b9
10008157:	59                   	pop    ecx
10008158:	8b c6                	mov    eax,esi
1000815a:	eb 0e                	jmp    0x1000816a
1000815c:	e8 87 fc ff ff       	call   0x10007de8
10008161:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
10008167:	83 c8 ff             	or     eax,0xffffffff
1000816a:	5f                   	pop    edi
1000816b:	5e                   	pop    esi
1000816c:	5b                   	pop    ebx
1000816d:	c3                   	ret
1000816e:	56                   	push   esi
1000816f:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
10008173:	3b 35 80 5a 1f 10    	cmp    esi,DWORD PTR ds:0x101f5a80
10008179:	73 40                	jae    0x100081bb
1000817b:	8b ce                	mov    ecx,esi
1000817d:	8b c6                	mov    eax,esi
1000817f:	c1 f9 05             	sar    ecx,0x5
10008182:	83 e0 1f             	and    eax,0x1f
10008185:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
1000818c:	8d 04 c0             	lea    eax,[eax+eax*8]
1000818f:	f6 44 81 04 01       	test   BYTE PTR [ecx+eax*4+0x4],0x1
10008194:	74 25                	je     0x100081bb
10008196:	57                   	push   edi
10008197:	56                   	push   esi
10008198:	e8 bd fe ff ff       	call   0x1000805a
1000819d:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
100081a1:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
100081a5:	56                   	push   esi
100081a6:	e8 28 00 00 00       	call   0x100081d3
100081ab:	56                   	push   esi
100081ac:	8b f8                	mov    edi,eax
100081ae:	e8 06 ff ff ff       	call   0x100080b9
100081b3:	83 c4 14             	add    esp,0x14
100081b6:	8b c7                	mov    eax,edi
100081b8:	5f                   	pop    edi
100081b9:	5e                   	pop    esi
100081ba:	c3                   	ret
100081bb:	e8 28 fc ff ff       	call   0x10007de8
100081c0:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
100081c6:	e8 26 fc ff ff       	call   0x10007df1
100081cb:	83 20 00             	and    DWORD PTR [eax],0x0
100081ce:	83 c8 ff             	or     eax,0xffffffff
100081d1:	5e                   	pop    esi
100081d2:	c3                   	ret
100081d3:	56                   	push   esi
100081d4:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
100081d8:	57                   	push   edi
100081d9:	56                   	push   esi
100081da:	e8 39 fe ff ff       	call   0x10008018
100081df:	83 f8 ff             	cmp    eax,0xffffffff
100081e2:	59                   	pop    ecx
100081e3:	75 0d                	jne    0x100081f2
100081e5:	e8 fe fb ff ff       	call   0x10007de8
100081ea:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
100081f0:	eb 2d                	jmp    0x1000821f
100081f2:	ff 74 24 14          	push   DWORD PTR [esp+0x14]
100081f6:	6a 00                	push   0x0
100081f8:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
100081fc:	50                   	push   eax
100081fd:	ff 15 44 c0 00 10    	call   DWORD PTR ds:0x1000c044
10008203:	8b f8                	mov    edi,eax
10008205:	83 ff ff             	cmp    edi,0xffffffff
10008208:	75 08                	jne    0x10008212
1000820a:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
10008210:	eb 02                	jmp    0x10008214
10008212:	33 c0                	xor    eax,eax
10008214:	85 c0                	test   eax,eax
10008216:	74 0c                	je     0x10008224
10008218:	50                   	push   eax
10008219:	e8 57 fb ff ff       	call   0x10007d75
1000821e:	59                   	pop    ecx
1000821f:	83 c8 ff             	or     eax,0xffffffff
10008222:	eb 1f                	jmp    0x10008243
10008224:	8b ce                	mov    ecx,esi
10008226:	83 e6 1f             	and    esi,0x1f
10008229:	c1 f9 05             	sar    ecx,0x5
1000822c:	8b c6                	mov    eax,esi
1000822e:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
10008235:	8d 04 c0             	lea    eax,[eax+eax*8]
10008238:	80 64 81 04 fd       	and    BYTE PTR [ecx+eax*4+0x4],0xfd
1000823d:	8d 44 81 04          	lea    eax,[ecx+eax*4+0x4]
10008241:	8b c7                	mov    eax,edi
10008243:	5f                   	pop    edi
10008244:	5e                   	pop    esi
10008245:	c3                   	ret
10008246:	ff 05 7c 3a 0e 10    	inc    DWORD PTR ds:0x100e3a7c
1000824c:	68 00 10 00 00       	push   0x1000
10008251:	e8 df bd ff ff       	call   0x10004035
10008256:	59                   	pop    ecx
10008257:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1000825b:	85 c0                	test   eax,eax
1000825d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10008260:	74 0d                	je     0x1000826f
10008262:	83 49 0c 08          	or     DWORD PTR [ecx+0xc],0x8
10008266:	c7 41 18 00 10 00 00 	mov    DWORD PTR [ecx+0x18],0x1000
1000826d:	eb 11                	jmp    0x10008280
1000826f:	83 49 0c 04          	or     DWORD PTR [ecx+0xc],0x4
10008273:	8d 41 14             	lea    eax,[ecx+0x14]
10008276:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10008279:	c7 41 18 02 00 00 00 	mov    DWORD PTR [ecx+0x18],0x2
10008280:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
10008283:	83 61 04 00          	and    DWORD PTR [ecx+0x4],0x0
10008287:	89 01                	mov    DWORD PTR [ecx],eax
10008289:	c3                   	ret
1000828a:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000828e:	3b 05 80 5a 1f 10    	cmp    eax,DWORD PTR ds:0x101f5a80
10008294:	72 03                	jb     0x10008299
10008296:	33 c0                	xor    eax,eax
10008298:	c3                   	ret
10008299:	8b c8                	mov    ecx,eax
1000829b:	83 e0 1f             	and    eax,0x1f
1000829e:	c1 f9 05             	sar    ecx,0x5
100082a1:	8d 04 c0             	lea    eax,[eax+eax*8]
100082a4:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
100082ab:	8a 44 81 04          	mov    al,BYTE PTR [ecx+eax*4+0x4]
100082af:	83 e0 40             	and    eax,0x40
100082b2:	c3                   	ret
100082b3:	55                   	push   ebp
100082b4:	8b ec                	mov    ebp,esp
100082b6:	83 ec 1c             	sub    esp,0x1c
100082b9:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100082bc:	53                   	push   ebx
100082bd:	33 db                	xor    ebx,ebx
100082bf:	56                   	push   esi
100082c0:	f6 c1 80             	test   cl,0x80
100082c3:	57                   	push   edi
100082c4:	c7 45 e4 0c 00 00 00 	mov    DWORD PTR [ebp-0x1c],0xc
100082cb:	89 5d e8             	mov    DWORD PTR [ebp-0x18],ebx
100082ce:	74 09                	je     0x100082d9
100082d0:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
100082d3:	c6 45 ff 10          	mov    BYTE PTR [ebp-0x1],0x10
100082d7:	eb 0b                	jmp    0x100082e4
100082d9:	80 65 ff 00          	and    BYTE PTR [ebp-0x1],0x0
100082dd:	c7 45 ec 01 00 00 00 	mov    DWORD PTR [ebp-0x14],0x1
100082e4:	b8 00 80 00 00       	mov    eax,0x8000
100082e9:	85 c8                	test   eax,ecx
100082eb:	75 11                	jne    0x100082fe
100082ed:	f6 c5 40             	test   ch,0x40
100082f0:	75 08                	jne    0x100082fa
100082f2:	39 05 5c 3c 0e 10    	cmp    DWORD PTR ds:0x100e3c5c,eax
100082f8:	74 04                	je     0x100082fe
100082fa:	80 4d ff 80          	or     BYTE PTR [ebp-0x1],0x80
100082fe:	6a 03                	push   0x3
10008300:	8b c1                	mov    eax,ecx
10008302:	5e                   	pop    esi
10008303:	23 c6                	and    eax,esi
10008305:	2b c3                	sub    eax,ebx
10008307:	74 1c                	je     0x10008325
10008309:	48                   	dec    eax
1000830a:	74 10                	je     0x1000831c
1000830c:	48                   	dec    eax
1000830d:	0f 85 a4 00 00 00    	jne    0x100083b7
10008313:	c7 45 f4 00 00 00 c0 	mov    DWORD PTR [ebp-0xc],0xc0000000
1000831a:	eb 10                	jmp    0x1000832c
1000831c:	c7 45 f4 00 00 00 40 	mov    DWORD PTR [ebp-0xc],0x40000000
10008323:	eb 07                	jmp    0x1000832c
10008325:	c7 45 f4 00 00 00 80 	mov    DWORD PTR [ebp-0xc],0x80000000
1000832c:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000832f:	83 f8 10             	cmp    eax,0x10
10008332:	74 26                	je     0x1000835a
10008334:	83 f8 20             	cmp    eax,0x20
10008337:	74 18                	je     0x10008351
10008339:	83 f8 30             	cmp    eax,0x30
1000833c:	74 0a                	je     0x10008348
1000833e:	83 f8 40             	cmp    eax,0x40
10008341:	75 74                	jne    0x100083b7
10008343:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
10008346:	eb 15                	jmp    0x1000835d
10008348:	c7 45 f0 02 00 00 00 	mov    DWORD PTR [ebp-0x10],0x2
1000834f:	eb 0c                	jmp    0x1000835d
10008351:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
10008358:	eb 03                	jmp    0x1000835d
1000835a:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
1000835d:	ba 00 07 00 00       	mov    edx,0x700
10008362:	b8 00 04 00 00       	mov    eax,0x400
10008367:	23 ca                	and    ecx,edx
10008369:	bf 00 01 00 00       	mov    edi,0x100
1000836e:	3b c8                	cmp    ecx,eax
10008370:	7f 31                	jg     0x100083a3
10008372:	74 2a                	je     0x1000839e
10008374:	3b cb                	cmp    ecx,ebx
10008376:	74 26                	je     0x1000839e
10008378:	3b cf                	cmp    ecx,edi
1000837a:	74 19                	je     0x10008395
1000837c:	81 f9 00 02 00 00    	cmp    ecx,0x200
10008382:	74 4d                	je     0x100083d1
10008384:	81 f9 00 03 00 00    	cmp    ecx,0x300
1000838a:	75 2b                	jne    0x100083b7
1000838c:	c7 45 f8 02 00 00 00 	mov    DWORD PTR [ebp-0x8],0x2
10008393:	eb 4c                	jmp    0x100083e1
10008395:	c7 45 f8 04 00 00 00 	mov    DWORD PTR [ebp-0x8],0x4
1000839c:	eb 43                	jmp    0x100083e1
1000839e:	89 75 f8             	mov    DWORD PTR [ebp-0x8],esi
100083a1:	eb 3e                	jmp    0x100083e1
100083a3:	81 f9 00 05 00 00    	cmp    ecx,0x500
100083a9:	74 2f                	je     0x100083da
100083ab:	81 f9 00 06 00 00    	cmp    ecx,0x600
100083b1:	74 1e                	je     0x100083d1
100083b3:	3b ca                	cmp    ecx,edx
100083b5:	74 23                	je     0x100083da
100083b7:	e8 2c fa ff ff       	call   0x10007de8
100083bc:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
100083c2:	e8 2a fa ff ff       	call   0x10007df1
100083c7:	89 18                	mov    DWORD PTR [eax],ebx
100083c9:	83 c8 ff             	or     eax,0xffffffff
100083cc:	e9 ac 01 00 00       	jmp    0x1000857d
100083d1:	c7 45 f8 05 00 00 00 	mov    DWORD PTR [ebp-0x8],0x5
100083d8:	eb 07                	jmp    0x100083e1
100083da:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
100083e1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100083e4:	be 80 00 00 00       	mov    esi,0x80
100083e9:	85 c7                	test   edi,eax
100083eb:	74 13                	je     0x10008400
100083ed:	8b 0d f8 3a 0e 10    	mov    ecx,DWORD PTR ds:0x100e3af8
100083f3:	f7 d1                	not    ecx
100083f5:	23 4d 14             	and    ecx,DWORD PTR [ebp+0x14]
100083f8:	f6 c1 80             	test   cl,0x80
100083fb:	75 03                	jne    0x10008400
100083fd:	6a 01                	push   0x1
100083ff:	5e                   	pop    esi
10008400:	a8 40                	test   al,0x40
10008402:	74 0a                	je     0x1000840e
10008404:	81 ce 00 00 00 04    	or     esi,0x4000000
1000840a:	80 4d f6 01          	or     BYTE PTR [ebp-0xa],0x1
1000840e:	f6 c4 10             	test   ah,0x10
10008411:	74 02                	je     0x10008415
10008413:	0b f7                	or     esi,edi
10008415:	a8 20                	test   al,0x20
10008417:	74 08                	je     0x10008421
10008419:	81 ce 00 00 00 08    	or     esi,0x8000000
1000841f:	eb 0a                	jmp    0x1000842b
10008421:	a8 10                	test   al,0x10
10008423:	74 06                	je     0x1000842b
10008425:	81 ce 00 00 00 10    	or     esi,0x10000000
1000842b:	e8 ca f9 ff ff       	call   0x10007dfa
10008430:	8b d8                	mov    ebx,eax
10008432:	83 cf ff             	or     edi,0xffffffff
10008435:	3b df                	cmp    ebx,edi
10008437:	75 1a                	jne    0x10008453
10008439:	e8 aa f9 ff ff       	call   0x10007de8
1000843e:	c7 00 18 00 00 00    	mov    DWORD PTR [eax],0x18
10008444:	e8 a8 f9 ff ff       	call   0x10007df1
10008449:	83 20 00             	and    DWORD PTR [eax],0x0
1000844c:	8b c7                	mov    eax,edi
1000844e:	e9 2a 01 00 00       	jmp    0x1000857d
10008453:	6a 00                	push   0x0
10008455:	56                   	push   esi
10008456:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
10008459:	8d 45 e4             	lea    eax,[ebp-0x1c]
1000845c:	50                   	push   eax
1000845d:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
10008460:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
10008463:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10008466:	ff 15 40 c0 00 10    	call   DWORD PTR ds:0x1000c040
1000846c:	8b f0                	mov    esi,eax
1000846e:	3b f7                	cmp    esi,edi
10008470:	75 14                	jne    0x10008486
10008472:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
10008478:	50                   	push   eax
10008479:	e8 f7 f8 ff ff       	call   0x10007d75
1000847e:	59                   	pop    ecx
1000847f:	8b f7                	mov    esi,edi
10008481:	e9 ee 00 00 00       	jmp    0x10008574
10008486:	56                   	push   esi
10008487:	ff 15 68 c0 00 10    	call   DWORD PTR ds:0x1000c068
1000848d:	85 c0                	test   eax,eax
1000848f:	75 09                	jne    0x1000849a
10008491:	56                   	push   esi
10008492:	ff 15 94 c0 00 10    	call   DWORD PTR ds:0x1000c094
10008498:	eb d8                	jmp    0x10008472
1000849a:	83 f8 02             	cmp    eax,0x2
1000849d:	75 06                	jne    0x100084a5
1000849f:	80 4d ff 40          	or     BYTE PTR [ebp-0x1],0x40
100084a3:	eb 09                	jmp    0x100084ae
100084a5:	83 f8 03             	cmp    eax,0x3
100084a8:	75 04                	jne    0x100084ae
100084aa:	80 4d ff 08          	or     BYTE PTR [ebp-0x1],0x8
100084ae:	56                   	push   esi
100084af:	53                   	push   ebx
100084b0:	e8 68 fa ff ff       	call   0x10007f1d
100084b5:	8b c3                	mov    eax,ebx
100084b7:	59                   	pop    ecx
100084b8:	c1 f8 05             	sar    eax,0x5
100084bb:	59                   	pop    ecx
100084bc:	8a 4d ff             	mov    cl,BYTE PTR [ebp-0x1]
100084bf:	8d 3c 85 80 59 1f 10 	lea    edi,[eax*4+0x101f5980]
100084c6:	8b c3                	mov    eax,ebx
100084c8:	80 c9 01             	or     cl,0x1
100084cb:	83 e0 1f             	and    eax,0x1f
100084ce:	88 4d 0b             	mov    BYTE PTR [ebp+0xb],cl
100084d1:	8d 34 c0             	lea    esi,[eax+eax*8]
100084d4:	8b 07                	mov    eax,DWORD PTR [edi]
100084d6:	c1 e6 02             	shl    esi,0x2
100084d9:	80 65 0b 48          	and    BYTE PTR [ebp+0xb],0x48
100084dd:	88 4c 30 04          	mov    BYTE PTR [eax+esi*1+0x4],cl
100084e1:	75 78                	jne    0x1000855b
100084e3:	f6 c1 80             	test   cl,0x80
100084e6:	74 73                	je     0x1000855b
100084e8:	f6 45 0c 02          	test   BYTE PTR [ebp+0xc],0x2
100084ec:	74 6d                	je     0x1000855b
100084ee:	6a 02                	push   0x2
100084f0:	6a ff                	push   0xffffffff
100084f2:	53                   	push   ebx
100084f3:	e8 db fc ff ff       	call   0x100081d3
100084f8:	83 c4 0c             	add    esp,0xc
100084fb:	83 f8 ff             	cmp    eax,0xffffffff
100084fe:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
10008501:	75 19                	jne    0x1000851c
10008503:	e8 e9 f8 ff ff       	call   0x10007df1
10008508:	81 38 83 00 00 00    	cmp    DWORD PTR [eax],0x83
1000850e:	74 4b                	je     0x1000855b
10008510:	53                   	push   ebx
10008511:	e8 16 c0 ff ff       	call   0x1000452c
10008516:	59                   	pop    ecx
10008517:	83 ce ff             	or     esi,0xffffffff
1000851a:	eb 58                	jmp    0x10008574
1000851c:	80 65 13 00          	and    BYTE PTR [ebp+0x13],0x0
10008520:	8d 45 13             	lea    eax,[ebp+0x13]
10008523:	6a 01                	push   0x1
10008525:	50                   	push   eax
10008526:	53                   	push   ebx
10008527:	e8 27 1a 00 00       	call   0x10009f53
1000852c:	83 c4 0c             	add    esp,0xc
1000852f:	85 c0                	test   eax,eax
10008531:	75 16                	jne    0x10008549
10008533:	80 7d 13 1a          	cmp    BYTE PTR [ebp+0x13],0x1a
10008537:	75 10                	jne    0x10008549
10008539:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
1000853c:	53                   	push   ebx
1000853d:	e8 ec 18 00 00       	call   0x10009e2e
10008542:	59                   	pop    ecx
10008543:	83 f8 ff             	cmp    eax,0xffffffff
10008546:	59                   	pop    ecx
10008547:	74 c7                	je     0x10008510
10008549:	6a 00                	push   0x0
1000854b:	6a 00                	push   0x0
1000854d:	53                   	push   ebx
1000854e:	e8 80 fc ff ff       	call   0x100081d3
10008553:	83 c4 0c             	add    esp,0xc
10008556:	83 f8 ff             	cmp    eax,0xffffffff
10008559:	74 b5                	je     0x10008510
1000855b:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
1000855f:	75 11                	jne    0x10008572
10008561:	f6 45 0c 08          	test   BYTE PTR [ebp+0xc],0x8
10008565:	74 0b                	je     0x10008572
10008567:	8b 07                	mov    eax,DWORD PTR [edi]
10008569:	80 4c 30 04 20       	or     BYTE PTR [eax+esi*1+0x4],0x20
1000856e:	8d 44 30 04          	lea    eax,[eax+esi*1+0x4]
10008572:	8b f3                	mov    esi,ebx
10008574:	53                   	push   ebx
10008575:	e8 3f fb ff ff       	call   0x100080b9
1000857a:	59                   	pop    ecx
1000857b:	8b c6                	mov    eax,esi
1000857d:	5f                   	pop    edi
1000857e:	5e                   	pop    esi
1000857f:	5b                   	pop    ebx
10008580:	c9                   	leave
10008581:	c3                   	ret
10008582:	6a 00                	push   0x0
10008584:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
10008588:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
1000858c:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
10008590:	e8 04 00 00 00       	call   0x10008599
10008595:	83 c4 10             	add    esp,0x10
10008598:	c3                   	ret
10008599:	55                   	push   ebp
1000859a:	8b ec                	mov    ebp,esp
1000859c:	83 ec 0c             	sub    esp,0xc
1000859f:	53                   	push   ebx
100085a0:	83 65 f8 00          	and    DWORD PTR [ebp-0x8],0x0
100085a4:	56                   	push   esi
100085a5:	57                   	push   edi
100085a6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100085a9:	8a 1f                	mov    bl,BYTE PTR [edi]
100085ab:	8d 77 01             	lea    esi,[edi+0x1]
100085ae:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100085b1:	83 3d f0 10 01 10 01 	cmp    DWORD PTR ds:0x100110f0,0x1
100085b8:	7e 0f                	jle    0x100085c9
100085ba:	0f b6 c3             	movzx  eax,bl
100085bd:	6a 08                	push   0x8
100085bf:	50                   	push   eax
100085c0:	e8 c6 0a 00 00       	call   0x1000908b
100085c5:	59                   	pop    ecx
100085c6:	59                   	pop    ecx
100085c7:	eb 0f                	jmp    0x100085d8
100085c9:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
100085cf:	0f b6 c3             	movzx  eax,bl
100085d2:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
100085d5:	83 e0 08             	and    eax,0x8
100085d8:	85 c0                	test   eax,eax
100085da:	74 05                	je     0x100085e1
100085dc:	8a 1e                	mov    bl,BYTE PTR [esi]
100085de:	46                   	inc    esi
100085df:	eb d0                	jmp    0x100085b1
100085e1:	80 fb 2d             	cmp    bl,0x2d
100085e4:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100085e7:	75 06                	jne    0x100085ef
100085e9:	83 4d 14 02          	or     DWORD PTR [ebp+0x14],0x2
100085ed:	eb 05                	jmp    0x100085f4
100085ef:	80 fb 2b             	cmp    bl,0x2b
100085f2:	75 06                	jne    0x100085fa
100085f4:	8a 1e                	mov    bl,BYTE PTR [esi]
100085f6:	46                   	inc    esi
100085f7:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100085fa:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100085fd:	85 c0                	test   eax,eax
100085ff:	0f 8c 89 01 00 00    	jl     0x1000878e
10008605:	83 f8 01             	cmp    eax,0x1
10008608:	0f 84 80 01 00 00    	je     0x1000878e
1000860e:	83 f8 24             	cmp    eax,0x24
10008611:	0f 8f 77 01 00 00    	jg     0x1000878e
10008617:	6a 10                	push   0x10
10008619:	85 c0                	test   eax,eax
1000861b:	59                   	pop    ecx
1000861c:	75 24                	jne    0x10008642
1000861e:	80 fb 30             	cmp    bl,0x30
10008621:	74 09                	je     0x1000862c
10008623:	c7 45 10 0a 00 00 00 	mov    DWORD PTR [ebp+0x10],0xa
1000862a:	eb 32                	jmp    0x1000865e
1000862c:	8a 06                	mov    al,BYTE PTR [esi]
1000862e:	3c 78                	cmp    al,0x78
10008630:	74 0d                	je     0x1000863f
10008632:	3c 58                	cmp    al,0x58
10008634:	74 09                	je     0x1000863f
10008636:	c7 45 10 08 00 00 00 	mov    DWORD PTR [ebp+0x10],0x8
1000863d:	eb 1f                	jmp    0x1000865e
1000863f:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
10008642:	39 4d 10             	cmp    DWORD PTR [ebp+0x10],ecx
10008645:	75 17                	jne    0x1000865e
10008647:	80 fb 30             	cmp    bl,0x30
1000864a:	75 12                	jne    0x1000865e
1000864c:	8a 06                	mov    al,BYTE PTR [esi]
1000864e:	3c 78                	cmp    al,0x78
10008650:	74 04                	je     0x10008656
10008652:	3c 58                	cmp    al,0x58
10008654:	75 08                	jne    0x1000865e
10008656:	8a 5e 01             	mov    bl,BYTE PTR [esi+0x1]
10008659:	46                   	inc    esi
1000865a:	46                   	inc    esi
1000865b:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
1000865e:	83 c8 ff             	or     eax,0xffffffff
10008661:	33 d2                	xor    edx,edx
10008663:	f7 75 10             	div    DWORD PTR [ebp+0x10]
10008666:	bf 03 01 00 00       	mov    edi,0x103
1000866b:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
1000866e:	83 3d f0 10 01 10 01 	cmp    DWORD PTR ds:0x100110f0,0x1
10008675:	0f b6 f3             	movzx  esi,bl
10008678:	7e 0c                	jle    0x10008686
1000867a:	6a 04                	push   0x4
1000867c:	56                   	push   esi
1000867d:	e8 09 0a 00 00       	call   0x1000908b
10008682:	59                   	pop    ecx
10008683:	59                   	pop    ecx
10008684:	eb 0b                	jmp    0x10008691
10008686:	a1 e0 0e 01 10       	mov    eax,ds:0x10010ee0
1000868b:	8a 04 70             	mov    al,BYTE PTR [eax+esi*2]
1000868e:	83 e0 04             	and    eax,0x4
10008691:	85 c0                	test   eax,eax
10008693:	74 08                	je     0x1000869d
10008695:	0f be cb             	movsx  ecx,bl
10008698:	83 e9 30             	sub    ecx,0x30
1000869b:	eb 32                	jmp    0x100086cf
1000869d:	83 3d f0 10 01 10 01 	cmp    DWORD PTR ds:0x100110f0,0x1
100086a4:	7e 0b                	jle    0x100086b1
100086a6:	57                   	push   edi
100086a7:	56                   	push   esi
100086a8:	e8 de 09 00 00       	call   0x1000908b
100086ad:	59                   	pop    ecx
100086ae:	59                   	pop    ecx
100086af:	eb 0b                	jmp    0x100086bc
100086b1:	a1 e0 0e 01 10       	mov    eax,ds:0x10010ee0
100086b6:	66 8b 04 70          	mov    ax,WORD PTR [eax+esi*2]
100086ba:	23 c7                	and    eax,edi
100086bc:	85 c0                	test   eax,eax
100086be:	74 4a                	je     0x1000870a
100086c0:	0f be c3             	movsx  eax,bl
100086c3:	50                   	push   eax
100086c4:	e8 63 1a 00 00       	call   0x1000a12c
100086c9:	59                   	pop    ecx
100086ca:	8b c8                	mov    ecx,eax
100086cc:	83 e9 37             	sub    ecx,0x37
100086cf:	3b 4d 10             	cmp    ecx,DWORD PTR [ebp+0x10]
100086d2:	73 36                	jae    0x1000870a
100086d4:	8b 75 f8             	mov    esi,DWORD PTR [ebp-0x8]
100086d7:	83 4d 14 08          	or     DWORD PTR [ebp+0x14],0x8
100086db:	3b 75 f4             	cmp    esi,DWORD PTR [ebp-0xc]
100086de:	72 14                	jb     0x100086f4
100086e0:	75 0c                	jne    0x100086ee
100086e2:	83 c8 ff             	or     eax,0xffffffff
100086e5:	33 d2                	xor    edx,edx
100086e7:	f7 75 10             	div    DWORD PTR [ebp+0x10]
100086ea:	3b ca                	cmp    ecx,edx
100086ec:	76 06                	jbe    0x100086f4
100086ee:	83 4d 14 04          	or     DWORD PTR [ebp+0x14],0x4
100086f2:	eb 09                	jmp    0x100086fd
100086f4:	0f af 75 10          	imul   esi,DWORD PTR [ebp+0x10]
100086f8:	03 f1                	add    esi,ecx
100086fa:	89 75 f8             	mov    DWORD PTR [ebp-0x8],esi
100086fd:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10008700:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
10008703:	8a 18                	mov    bl,BYTE PTR [eax]
10008705:	e9 64 ff ff ff       	jmp    0x1000866e
1000870a:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1000870d:	ff 4d fc             	dec    DWORD PTR [ebp-0x4]
10008710:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10008713:	a8 08                	test   al,0x8
10008715:	75 10                	jne    0x10008727
10008717:	85 db                	test   ebx,ebx
10008719:	74 06                	je     0x10008721
1000871b:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000871e:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10008721:	83 65 f8 00          	and    DWORD PTR [ebp-0x8],0x0
10008725:	eb 4b                	jmp    0x10008772
10008727:	a8 04                	test   al,0x4
10008729:	be ff ff ff 7f       	mov    esi,0x7fffffff
1000872e:	75 1b                	jne    0x1000874b
10008730:	a8 01                	test   al,0x1
10008732:	75 3e                	jne    0x10008772
10008734:	83 e0 02             	and    eax,0x2
10008737:	74 09                	je     0x10008742
10008739:	81 7d f8 00 00 00 80 	cmp    DWORD PTR [ebp-0x8],0x80000000
10008740:	77 09                	ja     0x1000874b
10008742:	85 c0                	test   eax,eax
10008744:	75 2c                	jne    0x10008772
10008746:	39 75 f8             	cmp    DWORD PTR [ebp-0x8],esi
10008749:	76 27                	jbe    0x10008772
1000874b:	e8 98 f6 ff ff       	call   0x10007de8
10008750:	f6 45 14 01          	test   BYTE PTR [ebp+0x14],0x1
10008754:	c7 00 22 00 00 00    	mov    DWORD PTR [eax],0x22
1000875a:	74 06                	je     0x10008762
1000875c:	83 4d f8 ff          	or     DWORD PTR [ebp-0x8],0xffffffff
10008760:	eb 10                	jmp    0x10008772
10008762:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10008765:	24 02                	and    al,0x2
10008767:	f6 d8                	neg    al
10008769:	1b c0                	sbb    eax,eax
1000876b:	f7 d8                	neg    eax
1000876d:	03 c6                	add    eax,esi
1000876f:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10008772:	85 db                	test   ebx,ebx
10008774:	74 05                	je     0x1000877b
10008776:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10008779:	89 03                	mov    DWORD PTR [ebx],eax
1000877b:	f6 45 14 02          	test   BYTE PTR [ebp+0x14],0x2
1000877f:	74 08                	je     0x10008789
10008781:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
10008784:	f7 d8                	neg    eax
10008786:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10008789:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1000878c:	eb 0b                	jmp    0x10008799
1000878e:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10008791:	85 c0                	test   eax,eax
10008793:	74 02                	je     0x10008797
10008795:	89 38                	mov    DWORD PTR [eax],edi
10008797:	33 c0                	xor    eax,eax
10008799:	5f                   	pop    edi
1000879a:	5e                   	pop    esi
1000879b:	5b                   	pop    ebx
1000879c:	c9                   	leave
1000879d:	c3                   	ret
1000879e:	cc                   	int3
1000879f:	cc                   	int3
100087a0:	8d 42 ff             	lea    eax,[edx-0x1]
100087a3:	5b                   	pop    ebx
100087a4:	c3                   	ret
100087a5:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
100087ac:	8d 64 24 00          	lea    esp,[esp+0x0]
100087b0:	33 c0                	xor    eax,eax
100087b2:	8a 44 24 08          	mov    al,BYTE PTR [esp+0x8]
100087b6:	53                   	push   ebx
100087b7:	8b d8                	mov    ebx,eax
100087b9:	c1 e0 08             	shl    eax,0x8
100087bc:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
100087c0:	f7 c2 03 00 00 00    	test   edx,0x3
100087c6:	74 13                	je     0x100087db
100087c8:	8a 0a                	mov    cl,BYTE PTR [edx]
100087ca:	42                   	inc    edx
100087cb:	38 d9                	cmp    cl,bl
100087cd:	74 d1                	je     0x100087a0
100087cf:	84 c9                	test   cl,cl
100087d1:	74 51                	je     0x10008824
100087d3:	f7 c2 03 00 00 00    	test   edx,0x3
100087d9:	75 ed                	jne    0x100087c8
100087db:	0b d8                	or     ebx,eax
100087dd:	57                   	push   edi
100087de:	8b c3                	mov    eax,ebx
100087e0:	c1 e3 10             	shl    ebx,0x10
100087e3:	56                   	push   esi
100087e4:	0b d8                	or     ebx,eax
100087e6:	8b 0a                	mov    ecx,DWORD PTR [edx]
100087e8:	bf ff fe fe 7e       	mov    edi,0x7efefeff
100087ed:	8b c1                	mov    eax,ecx
100087ef:	8b f7                	mov    esi,edi
100087f1:	33 cb                	xor    ecx,ebx
100087f3:	03 f0                	add    esi,eax
100087f5:	03 f9                	add    edi,ecx
100087f7:	83 f1 ff             	xor    ecx,0xffffffff
100087fa:	83 f0 ff             	xor    eax,0xffffffff
100087fd:	33 cf                	xor    ecx,edi
100087ff:	33 c6                	xor    eax,esi
10008801:	83 c2 04             	add    edx,0x4
10008804:	81 e1 00 01 01 81    	and    ecx,0x81010100
1000880a:	75 1c                	jne    0x10008828
1000880c:	25 00 01 01 81       	and    eax,0x81010100
10008811:	74 d3                	je     0x100087e6
10008813:	25 00 01 01 01       	and    eax,0x1010100
10008818:	75 08                	jne    0x10008822
1000881a:	81 e6 00 00 00 80    	and    esi,0x80000000
10008820:	75 c4                	jne    0x100087e6
10008822:	5e                   	pop    esi
10008823:	5f                   	pop    edi
10008824:	5b                   	pop    ebx
10008825:	33 c0                	xor    eax,eax
10008827:	c3                   	ret
10008828:	8b 42 fc             	mov    eax,DWORD PTR [edx-0x4]
1000882b:	38 d8                	cmp    al,bl
1000882d:	74 36                	je     0x10008865
1000882f:	84 c0                	test   al,al
10008831:	74 ef                	je     0x10008822
10008833:	38 dc                	cmp    ah,bl
10008835:	74 27                	je     0x1000885e
10008837:	84 e4                	test   ah,ah
10008839:	74 e7                	je     0x10008822
1000883b:	c1 e8 10             	shr    eax,0x10
1000883e:	38 d8                	cmp    al,bl
10008840:	74 15                	je     0x10008857
10008842:	84 c0                	test   al,al
10008844:	74 dc                	je     0x10008822
10008846:	38 dc                	cmp    ah,bl
10008848:	74 06                	je     0x10008850
1000884a:	84 e4                	test   ah,ah
1000884c:	74 d4                	je     0x10008822
1000884e:	eb 96                	jmp    0x100087e6
10008850:	5e                   	pop    esi
10008851:	5f                   	pop    edi
10008852:	8d 42 ff             	lea    eax,[edx-0x1]
10008855:	5b                   	pop    ebx
10008856:	c3                   	ret
10008857:	8d 42 fe             	lea    eax,[edx-0x2]
1000885a:	5e                   	pop    esi
1000885b:	5f                   	pop    edi
1000885c:	5b                   	pop    ebx
1000885d:	c3                   	ret
1000885e:	8d 42 fd             	lea    eax,[edx-0x3]
10008861:	5e                   	pop    esi
10008862:	5f                   	pop    edi
10008863:	5b                   	pop    ebx
10008864:	c3                   	ret
10008865:	8d 42 fc             	lea    eax,[edx-0x4]
10008868:	5e                   	pop    esi
10008869:	5f                   	pop    edi
1000886a:	5b                   	pop    ebx
1000886b:	c3                   	ret
1000886c:	cc                   	int3
1000886d:	cc                   	int3
1000886e:	cc                   	int3
1000886f:	cc                   	int3
10008870:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
10008874:	57                   	push   edi
10008875:	53                   	push   ebx
10008876:	56                   	push   esi
10008877:	8a 11                	mov    dl,BYTE PTR [ecx]
10008879:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1000887d:	84 d2                	test   dl,dl
1000887f:	74 69                	je     0x100088ea
10008881:	8a 71 01             	mov    dh,BYTE PTR [ecx+0x1]
10008884:	84 f6                	test   dh,dh
10008886:	74 4f                	je     0x100088d7
10008888:	8b f7                	mov    esi,edi
1000888a:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1000888e:	8a 07                	mov    al,BYTE PTR [edi]
10008890:	46                   	inc    esi
10008891:	38 d0                	cmp    al,dl
10008893:	74 15                	je     0x100088aa
10008895:	84 c0                	test   al,al
10008897:	74 0b                	je     0x100088a4
10008899:	8a 06                	mov    al,BYTE PTR [esi]
1000889b:	46                   	inc    esi
1000889c:	38 d0                	cmp    al,dl
1000889e:	74 0a                	je     0x100088aa
100088a0:	84 c0                	test   al,al
100088a2:	75 f5                	jne    0x10008899
100088a4:	5e                   	pop    esi
100088a5:	5b                   	pop    ebx
100088a6:	5f                   	pop    edi
100088a7:	33 c0                	xor    eax,eax
100088a9:	c3                   	ret
100088aa:	8a 06                	mov    al,BYTE PTR [esi]
100088ac:	46                   	inc    esi
100088ad:	38 f0                	cmp    al,dh
100088af:	75 eb                	jne    0x1000889c
100088b1:	8d 7e ff             	lea    edi,[esi-0x1]
100088b4:	8a 61 02             	mov    ah,BYTE PTR [ecx+0x2]
100088b7:	84 e4                	test   ah,ah
100088b9:	74 28                	je     0x100088e3
100088bb:	8a 06                	mov    al,BYTE PTR [esi]
100088bd:	83 c6 02             	add    esi,0x2
100088c0:	38 e0                	cmp    al,ah
100088c2:	75 c4                	jne    0x10008888
100088c4:	8a 41 03             	mov    al,BYTE PTR [ecx+0x3]
100088c7:	84 c0                	test   al,al
100088c9:	74 18                	je     0x100088e3
100088cb:	8a 66 ff             	mov    ah,BYTE PTR [esi-0x1]
100088ce:	83 c1 02             	add    ecx,0x2
100088d1:	38 e0                	cmp    al,ah
100088d3:	74 df                	je     0x100088b4
100088d5:	eb b1                	jmp    0x10008888
100088d7:	33 c0                	xor    eax,eax
100088d9:	5e                   	pop    esi
100088da:	5b                   	pop    ebx
100088db:	5f                   	pop    edi
100088dc:	8a c2                	mov    al,dl
100088de:	e9 d3 fe ff ff       	jmp    0x100087b6
100088e3:	8d 47 ff             	lea    eax,[edi-0x1]
100088e6:	5e                   	pop    esi
100088e7:	5b                   	pop    ebx
100088e8:	5f                   	pop    edi
100088e9:	c3                   	ret
100088ea:	8b c7                	mov    eax,edi
100088ec:	5e                   	pop    esi
100088ed:	5b                   	pop    ebx
100088ee:	5f                   	pop    edi
100088ef:	c3                   	ret
100088f0:	55                   	push   ebp
100088f1:	8b ec                	mov    ebp,esp
100088f3:	57                   	push   edi
100088f4:	56                   	push   esi
100088f5:	53                   	push   ebx
100088f6:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
100088f9:	e3 26                	jecxz  0x10008921
100088fb:	8b d9                	mov    ebx,ecx
100088fd:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10008900:	8b f7                	mov    esi,edi
10008902:	33 c0                	xor    eax,eax
10008904:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
10008906:	f7 d9                	neg    ecx
10008908:	03 cb                	add    ecx,ebx
1000890a:	8b fe                	mov    edi,esi
1000890c:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1000890f:	f3 a6                	repz cmps BYTE PTR ds:[esi],BYTE PTR es:[edi]
10008911:	8a 46 ff             	mov    al,BYTE PTR [esi-0x1]
10008914:	33 c9                	xor    ecx,ecx
10008916:	3a 47 ff             	cmp    al,BYTE PTR [edi-0x1]
10008919:	77 04                	ja     0x1000891f
1000891b:	74 04                	je     0x10008921
1000891d:	49                   	dec    ecx
1000891e:	49                   	dec    ecx
1000891f:	f7 d1                	not    ecx
10008921:	8b c1                	mov    eax,ecx
10008923:	5b                   	pop    ebx
10008924:	5e                   	pop    esi
10008925:	5f                   	pop    edi
10008926:	c9                   	leave
10008927:	c3                   	ret
10008928:	cc                   	int3
10008929:	cc                   	int3
1000892a:	cc                   	int3
1000892b:	cc                   	int3
1000892c:	cc                   	int3
1000892d:	cc                   	int3
1000892e:	cc                   	int3
1000892f:	cc                   	int3
10008930:	51                   	push   ecx
10008931:	3d 00 10 00 00       	cmp    eax,0x1000
10008936:	8d 4c 24 08          	lea    ecx,[esp+0x8]
1000893a:	72 14                	jb     0x10008950
1000893c:	81 e9 00 10 00 00    	sub    ecx,0x1000
10008942:	2d 00 10 00 00       	sub    eax,0x1000
10008947:	85 01                	test   DWORD PTR [ecx],eax
10008949:	3d 00 10 00 00       	cmp    eax,0x1000
1000894e:	73 ec                	jae    0x1000893c
10008950:	2b c8                	sub    ecx,eax
10008952:	8b c4                	mov    eax,esp
10008954:	85 01                	test   DWORD PTR [ecx],eax
10008956:	8b e1                	mov    esp,ecx
10008958:	8b 08                	mov    ecx,DWORD PTR [eax]
1000895a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000895d:	50                   	push   eax
1000895e:	c3                   	ret
1000895f:	cc                   	int3
10008960:	55                   	push   ebp
10008961:	8b ec                	mov    ebp,esp
10008963:	57                   	push   edi
10008964:	56                   	push   esi
10008965:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10008968:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1000896b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000896e:	8b c1                	mov    eax,ecx
10008970:	8b d1                	mov    edx,ecx
10008972:	03 c6                	add    eax,esi
10008974:	3b fe                	cmp    edi,esi
10008976:	76 08                	jbe    0x10008980
10008978:	3b f8                	cmp    edi,eax
1000897a:	0f 82 78 01 00 00    	jb     0x10008af8
10008980:	f7 c7 03 00 00 00    	test   edi,0x3
10008986:	75 14                	jne    0x1000899c
10008988:	c1 e9 02             	shr    ecx,0x2
1000898b:	83 e2 03             	and    edx,0x3
1000898e:	83 f9 08             	cmp    ecx,0x8
10008991:	72 29                	jb     0x100089bc
10008993:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10008995:	ff 24 95 a8 8a 00 10 	jmp    DWORD PTR [edx*4+0x10008aa8]
1000899c:	8b c7                	mov    eax,edi
1000899e:	ba 03 00 00 00       	mov    edx,0x3
100089a3:	83 e9 04             	sub    ecx,0x4
100089a6:	72 0c                	jb     0x100089b4
100089a8:	83 e0 03             	and    eax,0x3
100089ab:	03 c8                	add    ecx,eax
100089ad:	ff 24 85 c0 89 00 10 	jmp    DWORD PTR [eax*4+0x100089c0]
100089b4:	ff 24 8d b8 8a 00 10 	jmp    DWORD PTR [ecx*4+0x10008ab8]
100089bb:	90                   	nop
100089bc:	ff 24 8d 3c 8a 00 10 	jmp    DWORD PTR [ecx*4+0x10008a3c]
100089c3:	90                   	nop
100089c4:	d0 89 00 10 fc 89    	ror    BYTE PTR [ecx-0x7603f000],1
100089ca:	00 10                	add    BYTE PTR [eax],dl
100089cc:	20 8a 00 10 23 d1    	and    BYTE PTR [edx-0x2edcf000],cl
100089d2:	8a 06                	mov    al,BYTE PTR [esi]
100089d4:	88 07                	mov    BYTE PTR [edi],al
100089d6:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
100089d9:	88 47 01             	mov    BYTE PTR [edi+0x1],al
100089dc:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
100089df:	c1 e9 02             	shr    ecx,0x2
100089e2:	88 47 02             	mov    BYTE PTR [edi+0x2],al
100089e5:	83 c6 03             	add    esi,0x3
100089e8:	83 c7 03             	add    edi,0x3
100089eb:	83 f9 08             	cmp    ecx,0x8
100089ee:	72 cc                	jb     0x100089bc
100089f0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100089f2:	ff 24 95 a8 8a 00 10 	jmp    DWORD PTR [edx*4+0x10008aa8]
100089f9:	8d 49 00             	lea    ecx,[ecx+0x0]
100089fc:	23 d1                	and    edx,ecx
100089fe:	8a 06                	mov    al,BYTE PTR [esi]
10008a00:	88 07                	mov    BYTE PTR [edi],al
10008a02:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10008a05:	c1 e9 02             	shr    ecx,0x2
10008a08:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10008a0b:	83 c6 02             	add    esi,0x2
10008a0e:	83 c7 02             	add    edi,0x2
10008a11:	83 f9 08             	cmp    ecx,0x8
10008a14:	72 a6                	jb     0x100089bc
10008a16:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10008a18:	ff 24 95 a8 8a 00 10 	jmp    DWORD PTR [edx*4+0x10008aa8]
10008a1f:	90                   	nop
10008a20:	23 d1                	and    edx,ecx
10008a22:	8a 06                	mov    al,BYTE PTR [esi]
10008a24:	88 07                	mov    BYTE PTR [edi],al
10008a26:	46                   	inc    esi
10008a27:	c1 e9 02             	shr    ecx,0x2
10008a2a:	47                   	inc    edi
10008a2b:	83 f9 08             	cmp    ecx,0x8
10008a2e:	72 8c                	jb     0x100089bc
10008a30:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10008a32:	ff 24 95 a8 8a 00 10 	jmp    DWORD PTR [edx*4+0x10008aa8]
10008a39:	8d 49 00             	lea    ecx,[ecx+0x0]
10008a3c:	9f                   	lahf
10008a3d:	8a 00                	mov    al,BYTE PTR [eax]
10008a3f:	10 8c 8a 00 10 84 8a 	adc    BYTE PTR [edx+ecx*4-0x757bf000],cl
10008a46:	00 10                	add    BYTE PTR [eax],dl
10008a48:	7c 8a                	jl     0x100089d4
10008a4a:	00 10                	add    BYTE PTR [eax],dl
10008a4c:	74 8a                	je     0x100089d8
10008a4e:	00 10                	add    BYTE PTR [eax],dl
10008a50:	6c                   	ins    BYTE PTR es:[edi],dx
10008a51:	8a 00                	mov    al,BYTE PTR [eax]
10008a53:	10 64 8a 00          	adc    BYTE PTR [edx+ecx*4+0x0],ah
10008a57:	10 5c 8a 00          	adc    BYTE PTR [edx+ecx*4+0x0],bl
10008a5b:	10 8b 44 8e e4 89    	adc    BYTE PTR [ebx-0x761b71bc],cl
10008a61:	44                   	inc    esp
10008a62:	8f                   	(bad)
10008a63:	e4 8b                	in     al,0x8b
10008a65:	44                   	inc    esp
10008a66:	8e e8                	mov    gs,eax
10008a68:	89 44 8f e8          	mov    DWORD PTR [edi+ecx*4-0x18],eax
10008a6c:	8b 44 8e ec          	mov    eax,DWORD PTR [esi+ecx*4-0x14]
10008a70:	89 44 8f ec          	mov    DWORD PTR [edi+ecx*4-0x14],eax
10008a74:	8b 44 8e f0          	mov    eax,DWORD PTR [esi+ecx*4-0x10]
10008a78:	89 44 8f f0          	mov    DWORD PTR [edi+ecx*4-0x10],eax
10008a7c:	8b 44 8e f4          	mov    eax,DWORD PTR [esi+ecx*4-0xc]
10008a80:	89 44 8f f4          	mov    DWORD PTR [edi+ecx*4-0xc],eax
10008a84:	8b 44 8e f8          	mov    eax,DWORD PTR [esi+ecx*4-0x8]
10008a88:	89 44 8f f8          	mov    DWORD PTR [edi+ecx*4-0x8],eax
10008a8c:	8b 44 8e fc          	mov    eax,DWORD PTR [esi+ecx*4-0x4]
10008a90:	89 44 8f fc          	mov    DWORD PTR [edi+ecx*4-0x4],eax
10008a94:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
10008a9b:	03 f0                	add    esi,eax
10008a9d:	03 f8                	add    edi,eax
10008a9f:	ff 24 95 a8 8a 00 10 	jmp    DWORD PTR [edx*4+0x10008aa8]
10008aa6:	8b ff                	mov    edi,edi
10008aa8:	b8 8a 00 10 c0       	mov    eax,0xc010008a
10008aad:	8a 00                	mov    al,BYTE PTR [eax]
10008aaf:	10 cc                	adc    ah,cl
10008ab1:	8a 00                	mov    al,BYTE PTR [eax]
10008ab3:	10 e0                	adc    al,ah
10008ab5:	8a 00                	mov    al,BYTE PTR [eax]
10008ab7:	10 8b 45 08 5e 5f    	adc    BYTE PTR [ebx+0x5f5e0845],cl
10008abd:	c9                   	leave
10008abe:	c3                   	ret
10008abf:	90                   	nop
10008ac0:	8a 06                	mov    al,BYTE PTR [esi]
10008ac2:	88 07                	mov    BYTE PTR [edi],al
10008ac4:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008ac7:	5e                   	pop    esi
10008ac8:	5f                   	pop    edi
10008ac9:	c9                   	leave
10008aca:	c3                   	ret
10008acb:	90                   	nop
10008acc:	8a 06                	mov    al,BYTE PTR [esi]
10008ace:	88 07                	mov    BYTE PTR [edi],al
10008ad0:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10008ad3:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10008ad6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008ad9:	5e                   	pop    esi
10008ada:	5f                   	pop    edi
10008adb:	c9                   	leave
10008adc:	c3                   	ret
10008add:	8d 49 00             	lea    ecx,[ecx+0x0]
10008ae0:	8a 06                	mov    al,BYTE PTR [esi]
10008ae2:	88 07                	mov    BYTE PTR [edi],al
10008ae4:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10008ae7:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10008aea:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10008aed:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10008af0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008af3:	5e                   	pop    esi
10008af4:	5f                   	pop    edi
10008af5:	c9                   	leave
10008af6:	c3                   	ret
10008af7:	90                   	nop
10008af8:	8d 74 31 fc          	lea    esi,[ecx+esi*1-0x4]
10008afc:	8d 7c 39 fc          	lea    edi,[ecx+edi*1-0x4]
10008b00:	f7 c7 03 00 00 00    	test   edi,0x3
10008b06:	75 24                	jne    0x10008b2c
10008b08:	c1 e9 02             	shr    ecx,0x2
10008b0b:	83 e2 03             	and    edx,0x3
10008b0e:	83 f9 08             	cmp    ecx,0x8
10008b11:	72 0d                	jb     0x10008b20
10008b13:	fd                   	std
10008b14:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10008b16:	fc                   	cld
10008b17:	ff 24 95 40 8c 00 10 	jmp    DWORD PTR [edx*4+0x10008c40]
10008b1e:	8b ff                	mov    edi,edi
10008b20:	f7 d9                	neg    ecx
10008b22:	ff 24 8d f0 8b 00 10 	jmp    DWORD PTR [ecx*4+0x10008bf0]
10008b29:	8d 49 00             	lea    ecx,[ecx+0x0]
10008b2c:	8b c7                	mov    eax,edi
10008b2e:	ba 03 00 00 00       	mov    edx,0x3
10008b33:	83 f9 04             	cmp    ecx,0x4
10008b36:	72 0c                	jb     0x10008b44
10008b38:	83 e0 03             	and    eax,0x3
10008b3b:	2b c8                	sub    ecx,eax
10008b3d:	ff 24 85 48 8b 00 10 	jmp    DWORD PTR [eax*4+0x10008b48]
10008b44:	ff 24 8d 40 8c 00 10 	jmp    DWORD PTR [ecx*4+0x10008c40]
10008b4b:	90                   	nop
10008b4c:	58                   	pop    eax
10008b4d:	8b 00                	mov    eax,DWORD PTR [eax]
10008b4f:	10 78 8b             	adc    BYTE PTR [eax-0x75],bh
10008b52:	00 10                	add    BYTE PTR [eax],dl
10008b54:	a0 8b 00 10 8a       	mov    al,ds:0x8a10008b
10008b59:	46                   	inc    esi
10008b5a:	03 23                	add    esp,DWORD PTR [ebx]
10008b5c:	d1 88 47 03 4e c1    	ror    DWORD PTR [eax-0x3eb1fcb9],1
10008b62:	e9 02 4f 83 f9       	jmp    0x983da69
10008b67:	08 72 b6             	or     BYTE PTR [edx-0x4a],dh
10008b6a:	fd                   	std
10008b6b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10008b6d:	fc                   	cld
10008b6e:	ff 24 95 40 8c 00 10 	jmp    DWORD PTR [edx*4+0x10008c40]
10008b75:	8d 49 00             	lea    ecx,[ecx+0x0]
10008b78:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10008b7b:	23 d1                	and    edx,ecx
10008b7d:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10008b80:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10008b83:	c1 e9 02             	shr    ecx,0x2
10008b86:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10008b89:	83 ee 02             	sub    esi,0x2
10008b8c:	83 ef 02             	sub    edi,0x2
10008b8f:	83 f9 08             	cmp    ecx,0x8
10008b92:	72 8c                	jb     0x10008b20
10008b94:	fd                   	std
10008b95:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10008b97:	fc                   	cld
10008b98:	ff 24 95 40 8c 00 10 	jmp    DWORD PTR [edx*4+0x10008c40]
10008b9f:	90                   	nop
10008ba0:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10008ba3:	23 d1                	and    edx,ecx
10008ba5:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10008ba8:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10008bab:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10008bae:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10008bb1:	c1 e9 02             	shr    ecx,0x2
10008bb4:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10008bb7:	83 ee 03             	sub    esi,0x3
10008bba:	83 ef 03             	sub    edi,0x3
10008bbd:	83 f9 08             	cmp    ecx,0x8
10008bc0:	0f 82 5a ff ff ff    	jb     0x10008b20
10008bc6:	fd                   	std
10008bc7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10008bc9:	fc                   	cld
10008bca:	ff 24 95 40 8c 00 10 	jmp    DWORD PTR [edx*4+0x10008c40]
10008bd1:	8d 49 00             	lea    ecx,[ecx+0x0]
10008bd4:	f4                   	hlt
10008bd5:	8b 00                	mov    eax,DWORD PTR [eax]
10008bd7:	10 fc                	adc    ah,bh
10008bd9:	8b 00                	mov    eax,DWORD PTR [eax]
10008bdb:	10 04 8c             	adc    BYTE PTR [esp+ecx*4],al
10008bde:	00 10                	add    BYTE PTR [eax],dl
10008be0:	0c 8c                	or     al,0x8c
10008be2:	00 10                	add    BYTE PTR [eax],dl
10008be4:	14 8c                	adc    al,0x8c
10008be6:	00 10                	add    BYTE PTR [eax],dl
10008be8:	1c 8c                	sbb    al,0x8c
10008bea:	00 10                	add    BYTE PTR [eax],dl
10008bec:	24 8c                	and    al,0x8c
10008bee:	00 10                	add    BYTE PTR [eax],dl
10008bf0:	37                   	aaa
10008bf1:	8c 00                	mov    WORD PTR [eax],es
10008bf3:	10 8b 44 8e 1c 89    	adc    BYTE PTR [ebx-0x76e371bc],cl
10008bf9:	44                   	inc    esp
10008bfa:	8f                   	(bad)
10008bfb:	1c 8b                	sbb    al,0x8b
10008bfd:	44                   	inc    esp
10008bfe:	8e 18                	mov    ds,WORD PTR [eax]
10008c00:	89 44 8f 18          	mov    DWORD PTR [edi+ecx*4+0x18],eax
10008c04:	8b 44 8e 14          	mov    eax,DWORD PTR [esi+ecx*4+0x14]
10008c08:	89 44 8f 14          	mov    DWORD PTR [edi+ecx*4+0x14],eax
10008c0c:	8b 44 8e 10          	mov    eax,DWORD PTR [esi+ecx*4+0x10]
10008c10:	89 44 8f 10          	mov    DWORD PTR [edi+ecx*4+0x10],eax
10008c14:	8b 44 8e 0c          	mov    eax,DWORD PTR [esi+ecx*4+0xc]
10008c18:	89 44 8f 0c          	mov    DWORD PTR [edi+ecx*4+0xc],eax
10008c1c:	8b 44 8e 08          	mov    eax,DWORD PTR [esi+ecx*4+0x8]
10008c20:	89 44 8f 08          	mov    DWORD PTR [edi+ecx*4+0x8],eax
10008c24:	8b 44 8e 04          	mov    eax,DWORD PTR [esi+ecx*4+0x4]
10008c28:	89 44 8f 04          	mov    DWORD PTR [edi+ecx*4+0x4],eax
10008c2c:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
10008c33:	03 f0                	add    esi,eax
10008c35:	03 f8                	add    edi,eax
10008c37:	ff 24 95 40 8c 00 10 	jmp    DWORD PTR [edx*4+0x10008c40]
10008c3e:	8b ff                	mov    edi,edi
10008c40:	50                   	push   eax
10008c41:	8c 00                	mov    WORD PTR [eax],es
10008c43:	10 58 8c             	adc    BYTE PTR [eax-0x74],bl
10008c46:	00 10                	add    BYTE PTR [eax],dl
10008c48:	68 8c 00 10 7c       	push   0x7c10008c
10008c4d:	8c 00                	mov    WORD PTR [eax],es
10008c4f:	10 8b 45 08 5e 5f    	adc    BYTE PTR [ebx+0x5f5e0845],cl
10008c55:	c9                   	leave
10008c56:	c3                   	ret
10008c57:	90                   	nop
10008c58:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10008c5b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10008c5e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008c61:	5e                   	pop    esi
10008c62:	5f                   	pop    edi
10008c63:	c9                   	leave
10008c64:	c3                   	ret
10008c65:	8d 49 00             	lea    ecx,[ecx+0x0]
10008c68:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10008c6b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10008c6e:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10008c71:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10008c74:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008c77:	5e                   	pop    esi
10008c78:	5f                   	pop    edi
10008c79:	c9                   	leave
10008c7a:	c3                   	ret
10008c7b:	90                   	nop
10008c7c:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
10008c7f:	88 47 03             	mov    BYTE PTR [edi+0x3],al
10008c82:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
10008c85:	88 47 02             	mov    BYTE PTR [edi+0x2],al
10008c88:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
10008c8b:	88 47 01             	mov    BYTE PTR [edi+0x1],al
10008c8e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008c91:	5e                   	pop    esi
10008c92:	5f                   	pop    edi
10008c93:	c9                   	leave
10008c94:	c3                   	ret
10008c95:	cc                   	int3
10008c96:	cc                   	int3
10008c97:	cc                   	int3
10008c98:	cc                   	int3
10008c99:	cc                   	int3
10008c9a:	cc                   	int3
10008c9b:	cc                   	int3
10008c9c:	cc                   	int3
10008c9d:	cc                   	int3
10008c9e:	cc                   	int3
10008c9f:	cc                   	int3
10008ca0:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10008ca4:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10008ca8:	85 d2                	test   edx,edx
10008caa:	74 47                	je     0x10008cf3
10008cac:	33 c0                	xor    eax,eax
10008cae:	8a 44 24 08          	mov    al,BYTE PTR [esp+0x8]
10008cb2:	57                   	push   edi
10008cb3:	8b f9                	mov    edi,ecx
10008cb5:	83 fa 04             	cmp    edx,0x4
10008cb8:	72 2d                	jb     0x10008ce7
10008cba:	f7 d9                	neg    ecx
10008cbc:	83 e1 03             	and    ecx,0x3
10008cbf:	74 08                	je     0x10008cc9
10008cc1:	2b d1                	sub    edx,ecx
10008cc3:	88 07                	mov    BYTE PTR [edi],al
10008cc5:	47                   	inc    edi
10008cc6:	49                   	dec    ecx
10008cc7:	75 fa                	jne    0x10008cc3
10008cc9:	8b c8                	mov    ecx,eax
10008ccb:	c1 e0 08             	shl    eax,0x8
10008cce:	03 c1                	add    eax,ecx
10008cd0:	8b c8                	mov    ecx,eax
10008cd2:	c1 e0 10             	shl    eax,0x10
10008cd5:	03 c1                	add    eax,ecx
10008cd7:	8b ca                	mov    ecx,edx
10008cd9:	83 e2 03             	and    edx,0x3
10008cdc:	c1 e9 02             	shr    ecx,0x2
10008cdf:	74 06                	je     0x10008ce7
10008ce1:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10008ce3:	85 d2                	test   edx,edx
10008ce5:	74 06                	je     0x10008ced
10008ce7:	88 07                	mov    BYTE PTR [edi],al
10008ce9:	47                   	inc    edi
10008cea:	4a                   	dec    edx
10008ceb:	75 fa                	jne    0x10008ce7
10008ced:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10008cf1:	5f                   	pop    edi
10008cf2:	c3                   	ret
10008cf3:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10008cf7:	c3                   	ret
10008cf8:	cc                   	int3
10008cf9:	cc                   	int3
10008cfa:	cc                   	int3
10008cfb:	cc                   	int3
10008cfc:	cc                   	int3
10008cfd:	cc                   	int3
10008cfe:	cc                   	int3
10008cff:	cc                   	int3
10008d00:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10008d04:	f7 c1 03 00 00 00    	test   ecx,0x3
10008d0a:	74 14                	je     0x10008d20
10008d0c:	8a 01                	mov    al,BYTE PTR [ecx]
10008d0e:	41                   	inc    ecx
10008d0f:	84 c0                	test   al,al
10008d11:	74 40                	je     0x10008d53
10008d13:	f7 c1 03 00 00 00    	test   ecx,0x3
10008d19:	75 f1                	jne    0x10008d0c
10008d1b:	05 00 00 00 00       	add    eax,0x0
10008d20:	8b 01                	mov    eax,DWORD PTR [ecx]
10008d22:	ba ff fe fe 7e       	mov    edx,0x7efefeff
10008d27:	03 d0                	add    edx,eax
10008d29:	83 f0 ff             	xor    eax,0xffffffff
10008d2c:	33 c2                	xor    eax,edx
10008d2e:	83 c1 04             	add    ecx,0x4
10008d31:	a9 00 01 01 81       	test   eax,0x81010100
10008d36:	74 e8                	je     0x10008d20
10008d38:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
10008d3b:	84 c0                	test   al,al
10008d3d:	74 32                	je     0x10008d71
10008d3f:	84 e4                	test   ah,ah
10008d41:	74 24                	je     0x10008d67
10008d43:	a9 00 00 ff 00       	test   eax,0xff0000
10008d48:	74 13                	je     0x10008d5d
10008d4a:	a9 00 00 00 ff       	test   eax,0xff000000
10008d4f:	74 02                	je     0x10008d53
10008d51:	eb cd                	jmp    0x10008d20
10008d53:	8d 41 ff             	lea    eax,[ecx-0x1]
10008d56:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10008d5a:	2b c1                	sub    eax,ecx
10008d5c:	c3                   	ret
10008d5d:	8d 41 fe             	lea    eax,[ecx-0x2]
10008d60:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10008d64:	2b c1                	sub    eax,ecx
10008d66:	c3                   	ret
10008d67:	8d 41 fd             	lea    eax,[ecx-0x3]
10008d6a:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10008d6e:	2b c1                	sub    eax,ecx
10008d70:	c3                   	ret
10008d71:	8d 41 fc             	lea    eax,[ecx-0x4]
10008d74:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
10008d78:	2b c1                	sub    eax,ecx
10008d7a:	c3                   	ret
10008d7b:	55                   	push   ebp
10008d7c:	8b ec                	mov    ebp,esp
10008d7e:	53                   	push   ebx
10008d7f:	56                   	push   esi
10008d80:	be 2c 57 1f 10       	mov    esi,0x101f572c
10008d85:	57                   	push   edi
10008d86:	56                   	push   esi
10008d87:	ff 15 38 c0 00 10    	call   DWORD PTR ds:0x1000c038
10008d8d:	8b 3d 3c c0 00 10    	mov    edi,DWORD PTR ds:0x1000c03c
10008d93:	33 db                	xor    ebx,ebx
10008d95:	39 1d 28 57 1f 10    	cmp    DWORD PTR ds:0x101f5728,ebx
10008d9b:	74 0e                	je     0x10008dab
10008d9d:	56                   	push   esi
10008d9e:	ff d7                	call   edi
10008da0:	6a 13                	push   0x13
10008da2:	e8 ca d3 ff ff       	call   0x10006171
10008da7:	59                   	pop    ecx
10008da8:	6a 01                	push   0x1
10008daa:	5b                   	pop    ebx
10008dab:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10008dae:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10008db1:	e8 1e 00 00 00       	call   0x10008dd4
10008db6:	59                   	pop    ecx
10008db7:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10008dba:	85 db                	test   ebx,ebx
10008dbc:	59                   	pop    ecx
10008dbd:	74 0a                	je     0x10008dc9
10008dbf:	6a 13                	push   0x13
10008dc1:	e8 0c d4 ff ff       	call   0x100061d2
10008dc6:	59                   	pop    ecx
10008dc7:	eb 03                	jmp    0x10008dcc
10008dc9:	56                   	push   esi
10008dca:	ff d7                	call   edi
10008dcc:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10008dcf:	5f                   	pop    edi
10008dd0:	5e                   	pop    esi
10008dd1:	5b                   	pop    ebx
10008dd2:	5d                   	pop    ebp
10008dd3:	c3                   	ret
10008dd4:	55                   	push   ebp
10008dd5:	8b ec                	mov    ebp,esp
10008dd7:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008dda:	85 c0                	test   eax,eax
10008ddc:	75 02                	jne    0x10008de0
10008dde:	5d                   	pop    ebp
10008ddf:	c3                   	ret
10008de0:	83 3d 74 3c 0e 10 00 	cmp    DWORD PTR ds:0x100e3c74,0x0
10008de7:	75 12                	jne    0x10008dfb
10008de9:	66 8b 4d 0c          	mov    cx,WORD PTR [ebp+0xc]
10008ded:	66 81 f9 ff 00       	cmp    cx,0xff
10008df2:	77 39                	ja     0x10008e2d
10008df4:	6a 01                	push   0x1
10008df6:	88 08                	mov    BYTE PTR [eax],cl
10008df8:	58                   	pop    eax
10008df9:	5d                   	pop    ebp
10008dfa:	c3                   	ret
10008dfb:	8d 4d 08             	lea    ecx,[ebp+0x8]
10008dfe:	83 65 08 00          	and    DWORD PTR [ebp+0x8],0x0
10008e02:	51                   	push   ecx
10008e03:	6a 00                	push   0x0
10008e05:	ff 35 f0 10 01 10    	push   DWORD PTR ds:0x100110f0
10008e0b:	50                   	push   eax
10008e0c:	8d 45 0c             	lea    eax,[ebp+0xc]
10008e0f:	6a 01                	push   0x1
10008e11:	50                   	push   eax
10008e12:	68 20 02 00 00       	push   0x220
10008e17:	ff 35 84 3c 0e 10    	push   DWORD PTR ds:0x100e3c84
10008e1d:	ff 15 58 c0 00 10    	call   DWORD PTR ds:0x1000c058
10008e23:	85 c0                	test   eax,eax
10008e25:	74 06                	je     0x10008e2d
10008e27:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10008e2b:	74 0e                	je     0x10008e3b
10008e2d:	e8 b6 ef ff ff       	call   0x10007de8
10008e32:	c7 00 2a 00 00 00    	mov    DWORD PTR [eax],0x2a
10008e38:	83 c8 ff             	or     eax,0xffffffff
10008e3b:	5d                   	pop    ebp
10008e3c:	c3                   	ret
10008e3d:	cc                   	int3
10008e3e:	cc                   	int3
10008e3f:	cc                   	int3
10008e40:	53                   	push   ebx
10008e41:	56                   	push   esi
10008e42:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
10008e46:	0b c0                	or     eax,eax
10008e48:	75 18                	jne    0x10008e62
10008e4a:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
10008e4e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10008e52:	33 d2                	xor    edx,edx
10008e54:	f7 f1                	div    ecx
10008e56:	8b d8                	mov    ebx,eax
10008e58:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10008e5c:	f7 f1                	div    ecx
10008e5e:	8b d3                	mov    edx,ebx
10008e60:	eb 41                	jmp    0x10008ea3
10008e62:	8b c8                	mov    ecx,eax
10008e64:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
10008e68:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
10008e6c:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10008e70:	d1 e9                	shr    ecx,1
10008e72:	d1 db                	rcr    ebx,1
10008e74:	d1 ea                	shr    edx,1
10008e76:	d1 d8                	rcr    eax,1
10008e78:	0b c9                	or     ecx,ecx
10008e7a:	75 f4                	jne    0x10008e70
10008e7c:	f7 f3                	div    ebx
10008e7e:	8b f0                	mov    esi,eax
10008e80:	f7 64 24 18          	mul    DWORD PTR [esp+0x18]
10008e84:	8b c8                	mov    ecx,eax
10008e86:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10008e8a:	f7 e6                	mul    esi
10008e8c:	03 d1                	add    edx,ecx
10008e8e:	72 0e                	jb     0x10008e9e
10008e90:	3b 54 24 10          	cmp    edx,DWORD PTR [esp+0x10]
10008e94:	77 08                	ja     0x10008e9e
10008e96:	72 07                	jb     0x10008e9f
10008e98:	3b 44 24 0c          	cmp    eax,DWORD PTR [esp+0xc]
10008e9c:	76 01                	jbe    0x10008e9f
10008e9e:	4e                   	dec    esi
10008e9f:	33 d2                	xor    edx,edx
10008ea1:	8b c6                	mov    eax,esi
10008ea3:	5e                   	pop    esi
10008ea4:	5b                   	pop    ebx
10008ea5:	c2 10 00             	ret    0x10
10008ea8:	cc                   	int3
10008ea9:	cc                   	int3
10008eaa:	cc                   	int3
10008eab:	cc                   	int3
10008eac:	cc                   	int3
10008ead:	cc                   	int3
10008eae:	cc                   	int3
10008eaf:	cc                   	int3
10008eb0:	53                   	push   ebx
10008eb1:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
10008eb5:	0b c0                	or     eax,eax
10008eb7:	75 18                	jne    0x10008ed1
10008eb9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10008ebd:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
10008ec1:	33 d2                	xor    edx,edx
10008ec3:	f7 f1                	div    ecx
10008ec5:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10008ec9:	f7 f1                	div    ecx
10008ecb:	8b c2                	mov    eax,edx
10008ecd:	33 d2                	xor    edx,edx
10008ecf:	eb 50                	jmp    0x10008f21
10008ed1:	8b c8                	mov    ecx,eax
10008ed3:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
10008ed7:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
10008edb:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10008edf:	d1 e9                	shr    ecx,1
10008ee1:	d1 db                	rcr    ebx,1
10008ee3:	d1 ea                	shr    edx,1
10008ee5:	d1 d8                	rcr    eax,1
10008ee7:	0b c9                	or     ecx,ecx
10008ee9:	75 f4                	jne    0x10008edf
10008eeb:	f7 f3                	div    ebx
10008eed:	8b c8                	mov    ecx,eax
10008eef:	f7 64 24 14          	mul    DWORD PTR [esp+0x14]
10008ef3:	91                   	xchg   ecx,eax
10008ef4:	f7 64 24 10          	mul    DWORD PTR [esp+0x10]
10008ef8:	03 d1                	add    edx,ecx
10008efa:	72 0e                	jb     0x10008f0a
10008efc:	3b 54 24 0c          	cmp    edx,DWORD PTR [esp+0xc]
10008f00:	77 08                	ja     0x10008f0a
10008f02:	72 0e                	jb     0x10008f12
10008f04:	3b 44 24 08          	cmp    eax,DWORD PTR [esp+0x8]
10008f08:	76 08                	jbe    0x10008f12
10008f0a:	2b 44 24 10          	sub    eax,DWORD PTR [esp+0x10]
10008f0e:	1b 54 24 14          	sbb    edx,DWORD PTR [esp+0x14]
10008f12:	2b 44 24 08          	sub    eax,DWORD PTR [esp+0x8]
10008f16:	1b 54 24 0c          	sbb    edx,DWORD PTR [esp+0xc]
10008f1a:	f7 da                	neg    edx
10008f1c:	f7 d8                	neg    eax
10008f1e:	83 da 00             	sbb    edx,0x0
10008f21:	5b                   	pop    ebx
10008f22:	c2 10 00             	ret    0x10
10008f25:	55                   	push   ebp
10008f26:	8b ec                	mov    ebp,esp
10008f28:	51                   	push   ecx
10008f29:	56                   	push   esi
10008f2a:	9b d9 7d fc          	fstcw  WORD PTR [ebp-0x4]
10008f2e:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
10008f31:	e8 3a 00 00 00       	call   0x10008f70
10008f36:	8b f0                	mov    esi,eax
10008f38:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10008f3b:	f7 d0                	not    eax
10008f3d:	23 f0                	and    esi,eax
10008f3f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10008f42:	23 45 0c             	and    eax,DWORD PTR [ebp+0xc]
10008f45:	0b f0                	or     esi,eax
10008f47:	56                   	push   esi
10008f48:	e8 b5 00 00 00       	call   0x10009002
10008f4d:	59                   	pop    ecx
10008f4e:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10008f51:	59                   	pop    ecx
10008f52:	d9 6d 0c             	fldcw  WORD PTR [ebp+0xc]
10008f55:	8b c6                	mov    eax,esi
10008f57:	5e                   	pop    esi
10008f58:	c9                   	leave
10008f59:	c3                   	ret
10008f5a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10008f5e:	25 ff ff f7 ff       	and    eax,0xfff7ffff
10008f63:	50                   	push   eax
10008f64:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
10008f68:	e8 b8 ff ff ff       	call   0x10008f25
10008f6d:	59                   	pop    ecx
10008f6e:	59                   	pop    ecx
10008f6f:	c3                   	ret
10008f70:	53                   	push   ebx
10008f71:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
10008f75:	33 c0                	xor    eax,eax
10008f77:	55                   	push   ebp
10008f78:	f6 c3 01             	test   bl,0x1
10008f7b:	57                   	push   edi
10008f7c:	74 03                	je     0x10008f81
10008f7e:	6a 10                	push   0x10
10008f80:	58                   	pop    eax
10008f81:	f6 c3 04             	test   bl,0x4
10008f84:	74 02                	je     0x10008f88
10008f86:	0c 08                	or     al,0x8
10008f88:	f6 c3 08             	test   bl,0x8
10008f8b:	74 02                	je     0x10008f8f
10008f8d:	0c 04                	or     al,0x4
10008f8f:	f6 c3 10             	test   bl,0x10
10008f92:	74 02                	je     0x10008f96
10008f94:	0c 02                	or     al,0x2
10008f96:	f6 c3 20             	test   bl,0x20
10008f99:	74 02                	je     0x10008f9d
10008f9b:	0c 01                	or     al,0x1
10008f9d:	f6 c3 02             	test   bl,0x2
10008fa0:	74 05                	je     0x10008fa7
10008fa2:	0d 00 00 08 00       	or     eax,0x80000
10008fa7:	0f b7 cb             	movzx  ecx,bx
10008faa:	56                   	push   esi
10008fab:	8b d1                	mov    edx,ecx
10008fad:	be 00 0c 00 00       	mov    esi,0xc00
10008fb2:	bf 00 03 00 00       	mov    edi,0x300
10008fb7:	23 d6                	and    edx,esi
10008fb9:	bd 00 02 00 00       	mov    ebp,0x200
10008fbe:	74 1f                	je     0x10008fdf
10008fc0:	81 fa 00 04 00 00    	cmp    edx,0x400
10008fc6:	74 14                	je     0x10008fdc
10008fc8:	81 fa 00 08 00 00    	cmp    edx,0x800
10008fce:	74 08                	je     0x10008fd8
10008fd0:	3b d6                	cmp    edx,esi
10008fd2:	75 0b                	jne    0x10008fdf
10008fd4:	0b c7                	or     eax,edi
10008fd6:	eb 07                	jmp    0x10008fdf
10008fd8:	0b c5                	or     eax,ebp
10008fda:	eb 03                	jmp    0x10008fdf
10008fdc:	80 cc 01             	or     ah,0x1
10008fdf:	23 cf                	and    ecx,edi
10008fe1:	5e                   	pop    esi
10008fe2:	74 0b                	je     0x10008fef
10008fe4:	3b cd                	cmp    ecx,ebp
10008fe6:	75 0c                	jne    0x10008ff4
10008fe8:	0d 00 00 01 00       	or     eax,0x10000
10008fed:	eb 05                	jmp    0x10008ff4
10008fef:	0d 00 00 02 00       	or     eax,0x20000
10008ff4:	5f                   	pop    edi
10008ff5:	5d                   	pop    ebp
10008ff6:	f6 c7 10             	test   bh,0x10
10008ff9:	5b                   	pop    ebx
10008ffa:	74 05                	je     0x10009001
10008ffc:	0d 00 00 04 00       	or     eax,0x40000
10009001:	c3                   	ret
10009002:	53                   	push   ebx
10009003:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
10009007:	33 c0                	xor    eax,eax
10009009:	56                   	push   esi
1000900a:	f6 c3 10             	test   bl,0x10
1000900d:	74 03                	je     0x10009012
1000900f:	6a 01                	push   0x1
10009011:	58                   	pop    eax
10009012:	f6 c3 08             	test   bl,0x8
10009015:	74 02                	je     0x10009019
10009017:	0c 04                	or     al,0x4
10009019:	f6 c3 04             	test   bl,0x4
1000901c:	74 02                	je     0x10009020
1000901e:	0c 08                	or     al,0x8
10009020:	f6 c3 02             	test   bl,0x2
10009023:	74 02                	je     0x10009027
10009025:	0c 10                	or     al,0x10
10009027:	f6 c3 01             	test   bl,0x1
1000902a:	74 02                	je     0x1000902e
1000902c:	0c 20                	or     al,0x20
1000902e:	f7 c3 00 00 08 00    	test   ebx,0x80000
10009034:	74 02                	je     0x10009038
10009036:	0c 02                	or     al,0x2
10009038:	8b cb                	mov    ecx,ebx
1000903a:	ba 00 03 00 00       	mov    edx,0x300
1000903f:	23 ca                	and    ecx,edx
10009041:	be 00 02 00 00       	mov    esi,0x200
10009046:	74 1d                	je     0x10009065
10009048:	81 f9 00 01 00 00    	cmp    ecx,0x100
1000904e:	74 12                	je     0x10009062
10009050:	3b ce                	cmp    ecx,esi
10009052:	74 09                	je     0x1000905d
10009054:	3b ca                	cmp    ecx,edx
10009056:	75 0d                	jne    0x10009065
10009058:	80 cc 0c             	or     ah,0xc
1000905b:	eb 08                	jmp    0x10009065
1000905d:	80 cc 08             	or     ah,0x8
10009060:	eb 03                	jmp    0x10009065
10009062:	80 cc 04             	or     ah,0x4
10009065:	8b cb                	mov    ecx,ebx
10009067:	81 e1 00 00 03 00    	and    ecx,0x30000
1000906d:	74 0c                	je     0x1000907b
1000906f:	81 f9 00 00 01 00    	cmp    ecx,0x10000
10009075:	75 06                	jne    0x1000907d
10009077:	0b c6                	or     eax,esi
10009079:	eb 02                	jmp    0x1000907d
1000907b:	0b c2                	or     eax,edx
1000907d:	5e                   	pop    esi
1000907e:	f7 c3 00 00 04 00    	test   ebx,0x40000
10009084:	5b                   	pop    ebx
10009085:	74 03                	je     0x1000908a
10009087:	80 cc 10             	or     ah,0x10
1000908a:	c3                   	ret
1000908b:	55                   	push   ebp
1000908c:	8b ec                	mov    ebp,esp
1000908e:	51                   	push   ecx
1000908f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10009092:	8d 48 01             	lea    ecx,[eax+0x1]
10009095:	81 f9 00 01 00 00    	cmp    ecx,0x100
1000909b:	77 0c                	ja     0x100090a9
1000909d:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
100090a3:	0f b7 04 41          	movzx  eax,WORD PTR [ecx+eax*2]
100090a7:	eb 52                	jmp    0x100090fb
100090a9:	8b c8                	mov    ecx,eax
100090ab:	56                   	push   esi
100090ac:	8b 35 e0 0e 01 10    	mov    esi,DWORD PTR ds:0x10010ee0
100090b2:	c1 f9 08             	sar    ecx,0x8
100090b5:	0f b6 d1             	movzx  edx,cl
100090b8:	f6 44 56 01 80       	test   BYTE PTR [esi+edx*2+0x1],0x80
100090bd:	5e                   	pop    esi
100090be:	74 0e                	je     0x100090ce
100090c0:	80 65 fe 00          	and    BYTE PTR [ebp-0x2],0x0
100090c4:	88 4d fc             	mov    BYTE PTR [ebp-0x4],cl
100090c7:	88 45 fd             	mov    BYTE PTR [ebp-0x3],al
100090ca:	6a 02                	push   0x2
100090cc:	eb 09                	jmp    0x100090d7
100090ce:	80 65 fd 00          	and    BYTE PTR [ebp-0x3],0x0
100090d2:	88 45 fc             	mov    BYTE PTR [ebp-0x4],al
100090d5:	6a 01                	push   0x1
100090d7:	58                   	pop    eax
100090d8:	8d 4d 0a             	lea    ecx,[ebp+0xa]
100090db:	6a 01                	push   0x1
100090dd:	6a 00                	push   0x0
100090df:	6a 00                	push   0x0
100090e1:	51                   	push   ecx
100090e2:	50                   	push   eax
100090e3:	8d 45 fc             	lea    eax,[ebp-0x4]
100090e6:	50                   	push   eax
100090e7:	6a 01                	push   0x1
100090e9:	e8 79 11 00 00       	call   0x1000a267
100090ee:	83 c4 1c             	add    esp,0x1c
100090f1:	85 c0                	test   eax,eax
100090f3:	75 02                	jne    0x100090f7
100090f5:	c9                   	leave
100090f6:	c3                   	ret
100090f7:	0f b7 45 0a          	movzx  eax,WORD PTR [ebp+0xa]
100090fb:	23 45 0c             	and    eax,DWORD PTR [ebp+0xc]
100090fe:	c9                   	leave
100090ff:	c3                   	ret
10009100:	53                   	push   ebx
10009101:	33 db                	xor    ebx,ebx
10009103:	39 1d 74 3c 0e 10    	cmp    DWORD PTR ds:0x100e3c74,ebx
10009109:	75 13                	jne    0x1000911e
1000910b:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000910f:	83 f8 41             	cmp    eax,0x41
10009112:	7c 59                	jl     0x1000916d
10009114:	83 f8 5a             	cmp    eax,0x5a
10009117:	7f 54                	jg     0x1000916d
10009119:	83 c0 20             	add    eax,0x20
1000911c:	5b                   	pop    ebx
1000911d:	c3                   	ret
1000911e:	56                   	push   esi
1000911f:	be 2c 57 1f 10       	mov    esi,0x101f572c
10009124:	57                   	push   edi
10009125:	56                   	push   esi
10009126:	ff 15 38 c0 00 10    	call   DWORD PTR ds:0x1000c038
1000912c:	39 1d 28 57 1f 10    	cmp    DWORD PTR ds:0x101f5728,ebx
10009132:	8b 3d 3c c0 00 10    	mov    edi,DWORD PTR ds:0x1000c03c
10009138:	74 0e                	je     0x10009148
1000913a:	56                   	push   esi
1000913b:	ff d7                	call   edi
1000913d:	6a 13                	push   0x13
1000913f:	e8 2d d0 ff ff       	call   0x10006171
10009144:	59                   	pop    ecx
10009145:	6a 01                	push   0x1
10009147:	5b                   	pop    ebx
10009148:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
1000914c:	e8 1e 00 00 00       	call   0x1000916f
10009151:	85 db                	test   ebx,ebx
10009153:	59                   	pop    ecx
10009154:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
10009158:	74 0a                	je     0x10009164
1000915a:	6a 13                	push   0x13
1000915c:	e8 71 d0 ff ff       	call   0x100061d2
10009161:	59                   	pop    ecx
10009162:	eb 03                	jmp    0x10009167
10009164:	56                   	push   esi
10009165:	ff d7                	call   edi
10009167:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1000916b:	5f                   	pop    edi
1000916c:	5e                   	pop    esi
1000916d:	5b                   	pop    ebx
1000916e:	c3                   	ret
1000916f:	55                   	push   ebp
10009170:	8b ec                	mov    ebp,esp
10009172:	51                   	push   ecx
10009173:	83 3d 74 3c 0e 10 00 	cmp    DWORD PTR ds:0x100e3c74,0x0
1000917a:	53                   	push   ebx
1000917b:	56                   	push   esi
1000917c:	57                   	push   edi
1000917d:	75 1d                	jne    0x1000919c
1000917f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10009182:	83 f8 41             	cmp    eax,0x41
10009185:	0f 8c aa 00 00 00    	jl     0x10009235
1000918b:	83 f8 5a             	cmp    eax,0x5a
1000918e:	0f 8f a1 00 00 00    	jg     0x10009235
10009194:	83 c0 20             	add    eax,0x20
10009197:	e9 99 00 00 00       	jmp    0x10009235
1000919c:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1000919f:	bf 00 01 00 00       	mov    edi,0x100
100091a4:	6a 01                	push   0x1
100091a6:	3b df                	cmp    ebx,edi
100091a8:	5e                   	pop    esi
100091a9:	7d 25                	jge    0x100091d0
100091ab:	39 35 f0 10 01 10    	cmp    DWORD PTR ds:0x100110f0,esi
100091b1:	7e 0b                	jle    0x100091be
100091b3:	56                   	push   esi
100091b4:	53                   	push   ebx
100091b5:	e8 d1 fe ff ff       	call   0x1000908b
100091ba:	59                   	pop    ecx
100091bb:	59                   	pop    ecx
100091bc:	eb 0a                	jmp    0x100091c8
100091be:	a1 e0 0e 01 10       	mov    eax,ds:0x10010ee0
100091c3:	8a 04 58             	mov    al,BYTE PTR [eax+ebx*2]
100091c6:	23 c6                	and    eax,esi
100091c8:	85 c0                	test   eax,eax
100091ca:	75 04                	jne    0x100091d0
100091cc:	8b c3                	mov    eax,ebx
100091ce:	eb 65                	jmp    0x10009235
100091d0:	8b 15 e0 0e 01 10    	mov    edx,DWORD PTR ds:0x10010ee0
100091d6:	8b c3                	mov    eax,ebx
100091d8:	c1 f8 08             	sar    eax,0x8
100091db:	0f b6 c8             	movzx  ecx,al
100091de:	f6 44 4a 01 80       	test   BYTE PTR [edx+ecx*2+0x1],0x80
100091e3:	74 0f                	je     0x100091f4
100091e5:	80 65 0a 00          	and    BYTE PTR [ebp+0xa],0x0
100091e9:	6a 02                	push   0x2
100091eb:	88 45 08             	mov    BYTE PTR [ebp+0x8],al
100091ee:	88 5d 09             	mov    BYTE PTR [ebp+0x9],bl
100091f1:	58                   	pop    eax
100091f2:	eb 09                	jmp    0x100091fd
100091f4:	80 65 09 00          	and    BYTE PTR [ebp+0x9],0x0
100091f8:	88 5d 08             	mov    BYTE PTR [ebp+0x8],bl
100091fb:	8b c6                	mov    eax,esi
100091fd:	56                   	push   esi
100091fe:	6a 00                	push   0x0
10009200:	8d 4d fc             	lea    ecx,[ebp-0x4]
10009203:	6a 03                	push   0x3
10009205:	51                   	push   ecx
10009206:	50                   	push   eax
10009207:	8d 45 08             	lea    eax,[ebp+0x8]
1000920a:	50                   	push   eax
1000920b:	57                   	push   edi
1000920c:	ff 35 74 3c 0e 10    	push   DWORD PTR ds:0x100e3c74
10009212:	e8 99 11 00 00       	call   0x1000a3b0
10009217:	83 c4 20             	add    esp,0x20
1000921a:	85 c0                	test   eax,eax
1000921c:	74 ae                	je     0x100091cc
1000921e:	3b c6                	cmp    eax,esi
10009220:	75 06                	jne    0x10009228
10009222:	0f b6 45 fc          	movzx  eax,BYTE PTR [ebp-0x4]
10009226:	eb 0d                	jmp    0x10009235
10009228:	0f b6 45 fd          	movzx  eax,BYTE PTR [ebp-0x3]
1000922c:	0f b6 4d fc          	movzx  ecx,BYTE PTR [ebp-0x4]
10009230:	c1 e0 08             	shl    eax,0x8
10009233:	0b c1                	or     eax,ecx
10009235:	5f                   	pop    edi
10009236:	5e                   	pop    esi
10009237:	5b                   	pop    ebx
10009238:	c9                   	leave
10009239:	c3                   	ret
1000923a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000923e:	56                   	push   esi
1000923f:	6a 20                	push   0x20
10009241:	99                   	cdq
10009242:	59                   	pop    ecx
10009243:	f7 f9                	idiv   ecx
10009245:	6a 1f                	push   0x1f
10009247:	8b f0                	mov    esi,eax
10009249:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1000924d:	99                   	cdq
1000924e:	f7 f9                	idiv   ecx
10009250:	59                   	pop    ecx
10009251:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10009255:	2b ca                	sub    ecx,edx
10009257:	83 ca ff             	or     edx,0xffffffff
1000925a:	d3 e2                	shl    edx,cl
1000925c:	f7 d2                	not    edx
1000925e:	85 14 b0             	test   DWORD PTR [eax+esi*4],edx
10009261:	75 1c                	jne    0x1000927f
10009263:	46                   	inc    esi
10009264:	83 fe 03             	cmp    esi,0x3
10009267:	7d 11                	jge    0x1000927a
10009269:	8d 04 b0             	lea    eax,[eax+esi*4]
1000926c:	83 38 00             	cmp    DWORD PTR [eax],0x0
1000926f:	75 0e                	jne    0x1000927f
10009271:	46                   	inc    esi
10009272:	83 c0 04             	add    eax,0x4
10009275:	83 fe 03             	cmp    esi,0x3
10009278:	7c f2                	jl     0x1000926c
1000927a:	6a 01                	push   0x1
1000927c:	58                   	pop    eax
1000927d:	5e                   	pop    esi
1000927e:	c3                   	ret
1000927f:	33 c0                	xor    eax,eax
10009281:	5e                   	pop    esi
10009282:	c3                   	ret
10009283:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10009287:	53                   	push   ebx
10009288:	56                   	push   esi
10009289:	57                   	push   edi
1000928a:	6a 20                	push   0x20
1000928c:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
10009290:	99                   	cdq
10009291:	59                   	pop    ecx
10009292:	f7 f9                	idiv   ecx
10009294:	8b f0                	mov    esi,eax
10009296:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
1000929a:	99                   	cdq
1000929b:	f7 f9                	idiv   ecx
1000929d:	8d 3c b3             	lea    edi,[ebx+esi*4]
100092a0:	57                   	push   edi
100092a1:	6a 1f                	push   0x1f
100092a3:	59                   	pop    ecx
100092a4:	6a 01                	push   0x1
100092a6:	58                   	pop    eax
100092a7:	2b ca                	sub    ecx,edx
100092a9:	d3 e0                	shl    eax,cl
100092ab:	50                   	push   eax
100092ac:	ff 37                	push   DWORD PTR [edi]
100092ae:	e8 4c 13 00 00       	call   0x1000a5ff
100092b3:	83 c4 0c             	add    esp,0xc
100092b6:	4e                   	dec    esi
100092b7:	78 1c                	js     0x100092d5
100092b9:	8d 3c b3             	lea    edi,[ebx+esi*4]
100092bc:	85 c0                	test   eax,eax
100092be:	74 15                	je     0x100092d5
100092c0:	57                   	push   edi
100092c1:	6a 01                	push   0x1
100092c3:	ff 37                	push   DWORD PTR [edi]
100092c5:	e8 35 13 00 00       	call   0x1000a5ff
100092ca:	83 c4 0c             	add    esp,0xc
100092cd:	4e                   	dec    esi
100092ce:	83 ef 04             	sub    edi,0x4
100092d1:	85 f6                	test   esi,esi
100092d3:	7d e7                	jge    0x100092bc
100092d5:	5f                   	pop    edi
100092d6:	5e                   	pop    esi
100092d7:	5b                   	pop    ebx
100092d8:	c3                   	ret
100092d9:	55                   	push   ebp
100092da:	8b ec                	mov    ebp,esp
100092dc:	51                   	push   ecx
100092dd:	51                   	push   ecx
100092de:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100092e1:	53                   	push   ebx
100092e2:	56                   	push   esi
100092e3:	57                   	push   edi
100092e4:	8d 78 ff             	lea    edi,[eax-0x1]
100092e7:	6a 20                	push   0x20
100092e9:	59                   	pop    ecx
100092ea:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
100092ee:	8d 5f 01             	lea    ebx,[edi+0x1]
100092f1:	6a 20                	push   0x20
100092f3:	8b c3                	mov    eax,ebx
100092f5:	5e                   	pop    esi
100092f6:	99                   	cdq
100092f7:	f7 f9                	idiv   ecx
100092f9:	6a 1f                	push   0x1f
100092fb:	8b c8                	mov    ecx,eax
100092fd:	8b c3                	mov    eax,ebx
100092ff:	99                   	cdq
10009300:	f7 fe                	idiv   esi
10009302:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10009305:	5e                   	pop    esi
10009306:	6a 01                	push   0x1
10009308:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1000930b:	8d 04 88             	lea    eax,[eax+ecx*4]
1000930e:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10009311:	2b f2                	sub    esi,edx
10009313:	5a                   	pop    edx
10009314:	8b ce                	mov    ecx,esi
10009316:	d3 e2                	shl    edx,cl
10009318:	85 10                	test   DWORD PTR [eax],edx
1000931a:	74 21                	je     0x1000933d
1000931c:	43                   	inc    ebx
1000931d:	53                   	push   ebx
1000931e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009321:	e8 14 ff ff ff       	call   0x1000923a
10009326:	59                   	pop    ecx
10009327:	85 c0                	test   eax,eax
10009329:	59                   	pop    ecx
1000932a:	75 0e                	jne    0x1000933a
1000932c:	57                   	push   edi
1000932d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009330:	e8 4e ff ff ff       	call   0x10009283
10009335:	59                   	pop    ecx
10009336:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10009339:	59                   	pop    ecx
1000933a:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000933d:	83 ca ff             	or     edx,0xffffffff
10009340:	8b ce                	mov    ecx,esi
10009342:	d3 e2                	shl    edx,cl
10009344:	6a 03                	push   0x3
10009346:	59                   	pop    ecx
10009347:	21 10                	and    DWORD PTR [eax],edx
10009349:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1000934c:	40                   	inc    eax
1000934d:	3b c1                	cmp    eax,ecx
1000934f:	7d 0c                	jge    0x1000935d
10009351:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10009354:	2b c8                	sub    ecx,eax
10009356:	8d 3c 82             	lea    edi,[edx+eax*4]
10009359:	33 c0                	xor    eax,eax
1000935b:	f3 ab                	rep stos DWORD PTR es:[edi],eax
1000935d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10009360:	5f                   	pop    edi
10009361:	5e                   	pop    esi
10009362:	5b                   	pop    ebx
10009363:	c9                   	leave
10009364:	c3                   	ret
10009365:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10009369:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
1000936d:	56                   	push   esi
1000936e:	6a 03                	push   0x3
10009370:	2b c8                	sub    ecx,eax
10009372:	5a                   	pop    edx
10009373:	8b 30                	mov    esi,DWORD PTR [eax]
10009375:	89 34 01             	mov    DWORD PTR [ecx+eax*1],esi
10009378:	83 c0 04             	add    eax,0x4
1000937b:	4a                   	dec    edx
1000937c:	75 f5                	jne    0x10009373
1000937e:	5e                   	pop    esi
1000937f:	c3                   	ret
10009380:	57                   	push   edi
10009381:	8b 7c 24 08          	mov    edi,DWORD PTR [esp+0x8]
10009385:	33 c0                	xor    eax,eax
10009387:	ab                   	stos   DWORD PTR es:[edi],eax
10009388:	ab                   	stos   DWORD PTR es:[edi],eax
10009389:	ab                   	stos   DWORD PTR es:[edi],eax
1000938a:	5f                   	pop    edi
1000938b:	c3                   	ret
1000938c:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10009390:	33 c9                	xor    ecx,ecx
10009392:	83 38 00             	cmp    DWORD PTR [eax],0x0
10009395:	75 0d                	jne    0x100093a4
10009397:	41                   	inc    ecx
10009398:	83 c0 04             	add    eax,0x4
1000939b:	83 f9 03             	cmp    ecx,0x3
1000939e:	7c f2                	jl     0x10009392
100093a0:	6a 01                	push   0x1
100093a2:	58                   	pop    eax
100093a3:	c3                   	ret
100093a4:	33 c0                	xor    eax,eax
100093a6:	c3                   	ret
100093a7:	55                   	push   ebp
100093a8:	8b ec                	mov    ebp,esp
100093aa:	83 ec 0c             	sub    esp,0xc
100093ad:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100093b0:	53                   	push   ebx
100093b1:	56                   	push   esi
100093b2:	57                   	push   edi
100093b3:	6a 20                	push   0x20
100093b5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100093b8:	5b                   	pop    ebx
100093b9:	83 ce ff             	or     esi,0xffffffff
100093bc:	99                   	cdq
100093bd:	8b cb                	mov    ecx,ebx
100093bf:	c7 45 fc 03 00 00 00 	mov    DWORD PTR [ebp-0x4],0x3
100093c6:	f7 f9                	idiv   ecx
100093c8:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100093cb:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100093ce:	99                   	cdq
100093cf:	f7 f9                	idiv   ecx
100093d1:	83 65 0c 00          	and    DWORD PTR [ebp+0xc],0x0
100093d5:	8b ca                	mov    ecx,edx
100093d7:	d3 e6                	shl    esi,cl
100093d9:	2b da                	sub    ebx,edx
100093db:	f7 d6                	not    esi
100093dd:	8b 07                	mov    eax,DWORD PTR [edi]
100093df:	8b c8                	mov    ecx,eax
100093e1:	23 ce                	and    ecx,esi
100093e3:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100093e6:	8b ca                	mov    ecx,edx
100093e8:	d3 e8                	shr    eax,cl
100093ea:	0b 45 0c             	or     eax,DWORD PTR [ebp+0xc]
100093ed:	89 07                	mov    DWORD PTR [edi],eax
100093ef:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100093f2:	8b cb                	mov    ecx,ebx
100093f4:	83 c7 04             	add    edi,0x4
100093f7:	d3 e0                	shl    eax,cl
100093f9:	ff 4d fc             	dec    DWORD PTR [ebp-0x4]
100093fc:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
100093ff:	75 dc                	jne    0x100093dd
10009401:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
10009404:	6a 02                	push   0x2
10009406:	5b                   	pop    ebx
10009407:	8b f7                	mov    esi,edi
10009409:	6a 08                	push   0x8
1000940b:	59                   	pop    ecx
1000940c:	c1 e6 02             	shl    esi,0x2
1000940f:	3b df                	cmp    ebx,edi
10009411:	7c 0f                	jl     0x10009422
10009413:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10009416:	8b c1                	mov    eax,ecx
10009418:	2b c6                	sub    eax,esi
1000941a:	8b 04 10             	mov    eax,DWORD PTR [eax+edx*1]
1000941d:	89 04 11             	mov    DWORD PTR [ecx+edx*1],eax
10009420:	eb 07                	jmp    0x10009429
10009422:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10009425:	83 24 01 00          	and    DWORD PTR [ecx+eax*1],0x0
10009429:	4b                   	dec    ebx
1000942a:	83 e9 04             	sub    ecx,0x4
1000942d:	79 e0                	jns    0x1000940f
1000942f:	5f                   	pop    edi
10009430:	5e                   	pop    esi
10009431:	5b                   	pop    ebx
10009432:	c9                   	leave
10009433:	c3                   	ret
10009434:	55                   	push   ebp
10009435:	8b ec                	mov    ebp,esp
10009437:	83 ec 18             	sub    esp,0x18
1000943a:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000943d:	53                   	push   ebx
1000943e:	56                   	push   esi
1000943f:	57                   	push   edi
10009440:	0f b7 48 0a          	movzx  ecx,WORD PTR [eax+0xa]
10009444:	8b d9                	mov    ebx,ecx
10009446:	81 e1 00 80 00 00    	and    ecx,0x8000
1000944c:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
1000944f:	8b 48 06             	mov    ecx,DWORD PTR [eax+0x6]
10009452:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
10009455:	8b 48 02             	mov    ecx,DWORD PTR [eax+0x2]
10009458:	0f b7 00             	movzx  eax,WORD PTR [eax]
1000945b:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1000945e:	81 e3 ff 7f 00 00    	and    ebx,0x7fff
10009464:	81 eb ff 3f 00 00    	sub    ebx,0x3fff
1000946a:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1000946d:	c1 e0 10             	shl    eax,0x10
10009470:	81 fb 01 c0 ff ff    	cmp    ebx,0xffffc001
10009476:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10009479:	75 26                	jne    0x100094a1
1000947b:	8d 45 f4             	lea    eax,[ebp-0xc]
1000947e:	33 f6                	xor    esi,esi
10009480:	50                   	push   eax
10009481:	e8 06 ff ff ff       	call   0x1000938c
10009486:	85 c0                	test   eax,eax
10009488:	59                   	pop    ecx
10009489:	0f 85 d1 00 00 00    	jne    0x10009560
1000948f:	8d 45 f4             	lea    eax,[ebp-0xc]
10009492:	50                   	push   eax
10009493:	e8 e8 fe ff ff       	call   0x10009380
10009498:	59                   	pop    ecx
10009499:	6a 02                	push   0x2
1000949b:	58                   	pop    eax
1000949c:	e9 c1 00 00 00       	jmp    0x10009562
100094a1:	8d 45 f4             	lea    eax,[ebp-0xc]
100094a4:	50                   	push   eax
100094a5:	8d 45 e8             	lea    eax,[ebp-0x18]
100094a8:	50                   	push   eax
100094a9:	e8 b7 fe ff ff       	call   0x10009365
100094ae:	ff 77 08             	push   DWORD PTR [edi+0x8]
100094b1:	8d 45 f4             	lea    eax,[ebp-0xc]
100094b4:	50                   	push   eax
100094b5:	e8 1f fe ff ff       	call   0x100092d9
100094ba:	83 c4 10             	add    esp,0x10
100094bd:	85 c0                	test   eax,eax
100094bf:	74 01                	je     0x100094c2
100094c1:	43                   	inc    ebx
100094c2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100094c5:	8b c8                	mov    ecx,eax
100094c7:	2b 4f 08             	sub    ecx,DWORD PTR [edi+0x8]
100094ca:	3b d9                	cmp    ebx,ecx
100094cc:	7d 0c                	jge    0x100094da
100094ce:	8d 45 f4             	lea    eax,[ebp-0xc]
100094d1:	50                   	push   eax
100094d2:	e8 a9 fe ff ff       	call   0x10009380
100094d7:	59                   	pop    ecx
100094d8:	eb 3c                	jmp    0x10009516
100094da:	3b d8                	cmp    ebx,eax
100094dc:	7f 3f                	jg     0x1000951d
100094de:	2b c3                	sub    eax,ebx
100094e0:	8b f0                	mov    esi,eax
100094e2:	8d 45 e8             	lea    eax,[ebp-0x18]
100094e5:	50                   	push   eax
100094e6:	8d 45 f4             	lea    eax,[ebp-0xc]
100094e9:	50                   	push   eax
100094ea:	e8 76 fe ff ff       	call   0x10009365
100094ef:	8d 45 f4             	lea    eax,[ebp-0xc]
100094f2:	56                   	push   esi
100094f3:	50                   	push   eax
100094f4:	e8 ae fe ff ff       	call   0x100093a7
100094f9:	ff 77 08             	push   DWORD PTR [edi+0x8]
100094fc:	8d 45 f4             	lea    eax,[ebp-0xc]
100094ff:	50                   	push   eax
10009500:	e8 d4 fd ff ff       	call   0x100092d9
10009505:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
10009508:	40                   	inc    eax
10009509:	50                   	push   eax
1000950a:	8d 45 f4             	lea    eax,[ebp-0xc]
1000950d:	50                   	push   eax
1000950e:	e8 94 fe ff ff       	call   0x100093a7
10009513:	83 c4 20             	add    esp,0x20
10009516:	33 f6                	xor    esi,esi
10009518:	e9 7c ff ff ff       	jmp    0x10009499
1000951d:	3b 1f                	cmp    ebx,DWORD PTR [edi]
1000951f:	7c 28                	jl     0x10009549
10009521:	8d 45 f4             	lea    eax,[ebp-0xc]
10009524:	50                   	push   eax
10009525:	e8 56 fe ff ff       	call   0x10009380
1000952a:	ff 77 0c             	push   DWORD PTR [edi+0xc]
1000952d:	80 4d f7 80          	or     BYTE PTR [ebp-0x9],0x80
10009531:	8d 45 f4             	lea    eax,[ebp-0xc]
10009534:	50                   	push   eax
10009535:	e8 6d fe ff ff       	call   0x100093a7
1000953a:	8b 77 14             	mov    esi,DWORD PTR [edi+0x14]
1000953d:	83 c4 0c             	add    esp,0xc
10009540:	03 37                	add    esi,DWORD PTR [edi]
10009542:	6a 01                	push   0x1
10009544:	e9 52 ff ff ff       	jmp    0x1000949b
10009549:	ff 77 0c             	push   DWORD PTR [edi+0xc]
1000954c:	8b 77 14             	mov    esi,DWORD PTR [edi+0x14]
1000954f:	80 65 f7 7f          	and    BYTE PTR [ebp-0x9],0x7f
10009553:	8d 45 f4             	lea    eax,[ebp-0xc]
10009556:	50                   	push   eax
10009557:	03 f3                	add    esi,ebx
10009559:	e8 49 fe ff ff       	call   0x100093a7
1000955e:	59                   	pop    ecx
1000955f:	59                   	pop    ecx
10009560:	33 c0                	xor    eax,eax
10009562:	6a 1f                	push   0x1f
10009564:	59                   	pop    ecx
10009565:	2b 4f 0c             	sub    ecx,DWORD PTR [edi+0xc]
10009568:	8b 7f 10             	mov    edi,DWORD PTR [edi+0x10]
1000956b:	d3 e6                	shl    esi,cl
1000956d:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10009570:	f7 d9                	neg    ecx
10009572:	1b c9                	sbb    ecx,ecx
10009574:	81 e1 00 00 00 80    	and    ecx,0x80000000
1000957a:	0b f1                	or     esi,ecx
1000957c:	0b 75 f4             	or     esi,DWORD PTR [ebp-0xc]
1000957f:	83 ff 40             	cmp    edi,0x40
10009582:	75 0d                	jne    0x10009591
10009584:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10009587:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
1000958a:	89 71 04             	mov    DWORD PTR [ecx+0x4],esi
1000958d:	89 11                	mov    DWORD PTR [ecx],edx
1000958f:	eb 0a                	jmp    0x1000959b
10009591:	83 ff 20             	cmp    edi,0x20
10009594:	75 05                	jne    0x1000959b
10009596:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10009599:	89 31                	mov    DWORD PTR [ecx],esi
1000959b:	5f                   	pop    edi
1000959c:	5e                   	pop    esi
1000959d:	5b                   	pop    ebx
1000959e:	c9                   	leave
1000959f:	c3                   	ret
100095a0:	68 00 11 01 10       	push   0x10011100
100095a5:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
100095a9:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
100095ad:	e8 82 fe ff ff       	call   0x10009434
100095b2:	83 c4 0c             	add    esp,0xc
100095b5:	c3                   	ret
100095b6:	68 18 11 01 10       	push   0x10011118
100095bb:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
100095bf:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
100095c3:	e8 6c fe ff ff       	call   0x10009434
100095c8:	83 c4 0c             	add    esp,0xc
100095cb:	c3                   	ret
100095cc:	55                   	push   ebp
100095cd:	8b ec                	mov    ebp,esp
100095cf:	83 ec 0c             	sub    esp,0xc
100095d2:	33 c0                	xor    eax,eax
100095d4:	50                   	push   eax
100095d5:	50                   	push   eax
100095d6:	50                   	push   eax
100095d7:	50                   	push   eax
100095d8:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100095db:	8d 45 0c             	lea    eax,[ebp+0xc]
100095de:	50                   	push   eax
100095df:	8d 45 f4             	lea    eax,[ebp-0xc]
100095e2:	50                   	push   eax
100095e3:	e8 b8 11 00 00       	call   0x1000a7a0
100095e8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100095eb:	8d 45 f4             	lea    eax,[ebp-0xc]
100095ee:	50                   	push   eax
100095ef:	e8 ac ff ff ff       	call   0x100095a0
100095f4:	83 c4 24             	add    esp,0x24
100095f7:	c9                   	leave
100095f8:	c3                   	ret
100095f9:	55                   	push   ebp
100095fa:	8b ec                	mov    ebp,esp
100095fc:	83 ec 0c             	sub    esp,0xc
100095ff:	33 c0                	xor    eax,eax
10009601:	50                   	push   eax
10009602:	50                   	push   eax
10009603:	50                   	push   eax
10009604:	50                   	push   eax
10009605:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10009608:	8d 45 0c             	lea    eax,[ebp+0xc]
1000960b:	50                   	push   eax
1000960c:	8d 45 f4             	lea    eax,[ebp-0xc]
1000960f:	50                   	push   eax
10009610:	e8 8b 11 00 00       	call   0x1000a7a0
10009615:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009618:	8d 45 f4             	lea    eax,[ebp-0xc]
1000961b:	50                   	push   eax
1000961c:	e8 95 ff ff ff       	call   0x100095b6
10009621:	83 c4 24             	add    esp,0x24
10009624:	c9                   	leave
10009625:	c3                   	ret
10009626:	55                   	push   ebp
10009627:	8b ec                	mov    ebp,esp
10009629:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
1000962c:	53                   	push   ebx
1000962d:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10009630:	56                   	push   esi
10009631:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10009634:	8b 4a 0c             	mov    ecx,DWORD PTR [edx+0xc]
10009637:	57                   	push   edi
10009638:	8d 7e 01             	lea    edi,[esi+0x1]
1000963b:	c6 06 30             	mov    BYTE PTR [esi],0x30
1000963e:	85 db                	test   ebx,ebx
10009640:	8b c7                	mov    eax,edi
10009642:	7e 1f                	jle    0x10009663
10009644:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
10009647:	33 db                	xor    ebx,ebx
10009649:	8a 11                	mov    dl,BYTE PTR [ecx]
1000964b:	84 d2                	test   dl,dl
1000964d:	74 06                	je     0x10009655
1000964f:	0f be d2             	movsx  edx,dl
10009652:	41                   	inc    ecx
10009653:	eb 03                	jmp    0x10009658
10009655:	6a 30                	push   0x30
10009657:	5a                   	pop    edx
10009658:	88 10                	mov    BYTE PTR [eax],dl
1000965a:	40                   	inc    eax
1000965b:	ff 4d 08             	dec    DWORD PTR [ebp+0x8]
1000965e:	75 e9                	jne    0x10009649
10009660:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10009663:	80 20 00             	and    BYTE PTR [eax],0x0
10009666:	85 db                	test   ebx,ebx
10009668:	7c 12                	jl     0x1000967c
1000966a:	80 39 35             	cmp    BYTE PTR [ecx],0x35
1000966d:	7c 0d                	jl     0x1000967c
1000966f:	48                   	dec    eax
10009670:	80 38 39             	cmp    BYTE PTR [eax],0x39
10009673:	75 05                	jne    0x1000967a
10009675:	c6 00 30             	mov    BYTE PTR [eax],0x30
10009678:	eb f5                	jmp    0x1000966f
1000967a:	fe 00                	inc    BYTE PTR [eax]
1000967c:	80 3e 31             	cmp    BYTE PTR [esi],0x31
1000967f:	75 05                	jne    0x10009686
10009681:	ff 42 04             	inc    DWORD PTR [edx+0x4]
10009684:	eb 12                	jmp    0x10009698
10009686:	57                   	push   edi
10009687:	e8 74 f6 ff ff       	call   0x10008d00
1000968c:	40                   	inc    eax
1000968d:	50                   	push   eax
1000968e:	57                   	push   edi
1000968f:	56                   	push   esi
10009690:	e8 cb f2 ff ff       	call   0x10008960
10009695:	83 c4 10             	add    esp,0x10
10009698:	5f                   	pop    edi
10009699:	5e                   	pop    esi
1000969a:	5b                   	pop    ebx
1000969b:	5d                   	pop    ebp
1000969c:	c3                   	ret
1000969d:	55                   	push   ebp
1000969e:	8b ec                	mov    ebp,esp
100096a0:	83 ec 28             	sub    esp,0x28
100096a3:	56                   	push   esi
100096a4:	8d 45 08             	lea    eax,[ebp+0x8]
100096a7:	57                   	push   edi
100096a8:	50                   	push   eax
100096a9:	8d 45 f4             	lea    eax,[ebp-0xc]
100096ac:	50                   	push   eax
100096ad:	e8 47 00 00 00       	call   0x100096f9
100096b2:	59                   	pop    ecx
100096b3:	8d 45 d8             	lea    eax,[ebp-0x28]
100096b6:	59                   	pop    ecx
100096b7:	8d 75 f4             	lea    esi,[ebp-0xc]
100096ba:	50                   	push   eax
100096bb:	6a 00                	push   0x0
100096bd:	6a 11                	push   0x11
100096bf:	83 ec 0c             	sub    esp,0xc
100096c2:	8b fc                	mov    edi,esp
100096c4:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
100096c5:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
100096c6:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
100096c8:	e8 a4 15 00 00       	call   0x1000ac71
100096cd:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
100096d0:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
100096d3:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
100096d6:	0f be 45 da          	movsx  eax,BYTE PTR [ebp-0x26]
100096da:	89 06                	mov    DWORD PTR [esi],eax
100096dc:	0f bf 45 d8          	movsx  eax,WORD PTR [ebp-0x28]
100096e0:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
100096e3:	8d 45 dc             	lea    eax,[ebp-0x24]
100096e6:	50                   	push   eax
100096e7:	57                   	push   edi
100096e8:	e8 c3 00 00 00       	call   0x100097b0
100096ed:	83 c4 20             	add    esp,0x20
100096f0:	89 7e 0c             	mov    DWORD PTR [esi+0xc],edi
100096f3:	8b c6                	mov    eax,esi
100096f5:	5f                   	pop    edi
100096f6:	5e                   	pop    esi
100096f7:	c9                   	leave
100096f8:	c3                   	ret
100096f9:	55                   	push   ebp
100096fa:	8b ec                	mov    ebp,esp
100096fc:	51                   	push   ecx
100096fd:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
10009700:	53                   	push   ebx
10009701:	56                   	push   esi
10009702:	57                   	push   edi
10009703:	66 8b 42 06          	mov    ax,WORD PTR [edx+0x6]
10009707:	bf ff 07 00 00       	mov    edi,0x7ff
1000970c:	8b c8                	mov    ecx,eax
1000970e:	25 00 80 00 00       	and    eax,0x8000
10009713:	c1 e9 04             	shr    ecx,0x4
10009716:	23 cf                	and    ecx,edi
10009718:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1000971b:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
1000971e:	8b 12                	mov    edx,DWORD PTR [edx]
10009720:	0f b7 d9             	movzx  ebx,cx
10009723:	be 00 00 00 80       	mov    esi,0x80000000
10009728:	25 ff ff 0f 00       	and    eax,0xfffff
1000972d:	85 db                	test   ebx,ebx
1000972f:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
10009732:	74 13                	je     0x10009747
10009734:	3b df                	cmp    ebx,edi
10009736:	74 08                	je     0x10009740
10009738:	8d b9 00 3c 00 00    	lea    edi,[ecx+0x3c00]
1000973e:	eb 28                	jmp    0x10009768
10009740:	bf ff 7f 00 00       	mov    edi,0x7fff
10009745:	eb 21                	jmp    0x10009768
10009747:	33 db                	xor    ebx,ebx
10009749:	3b c3                	cmp    eax,ebx
1000974b:	75 12                	jne    0x1000975f
1000974d:	3b d3                	cmp    edx,ebx
1000974f:	75 0e                	jne    0x1000975f
10009751:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10009754:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
10009757:	89 18                	mov    DWORD PTR [eax],ebx
10009759:	66 89 58 08          	mov    WORD PTR [eax+0x8],bx
1000975d:	eb 4b                	jmp    0x100097aa
1000975f:	8d b9 01 3c 00 00    	lea    edi,[ecx+0x3c01]
10009765:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
10009768:	8b ca                	mov    ecx,edx
1000976a:	c1 e9 15             	shr    ecx,0x15
1000976d:	c1 e0 0b             	shl    eax,0xb
10009770:	0b c8                	or     ecx,eax
10009772:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10009775:	0b 4d fc             	or     ecx,DWORD PTR [ebp-0x4]
10009778:	c1 e2 0b             	shl    edx,0xb
1000977b:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
1000977e:	89 10                	mov    DWORD PTR [eax],edx
10009780:	85 ce                	test   esi,ecx
10009782:	75 1d                	jne    0x100097a1
10009784:	8b 10                	mov    edx,DWORD PTR [eax]
10009786:	03 c9                	add    ecx,ecx
10009788:	8b da                	mov    ebx,edx
1000978a:	c1 eb 1f             	shr    ebx,0x1f
1000978d:	0b d9                	or     ebx,ecx
1000978f:	8d 0c 12             	lea    ecx,[edx+edx*1]
10009792:	89 08                	mov    DWORD PTR [eax],ecx
10009794:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
10009797:	81 c7 ff ff 00 00    	add    edi,0xffff
1000979d:	8b cb                	mov    ecx,ebx
1000979f:	eb df                	jmp    0x10009780
100097a1:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100097a4:	0b cf                	or     ecx,edi
100097a6:	66 89 48 08          	mov    WORD PTR [eax+0x8],cx
100097aa:	5f                   	pop    edi
100097ab:	5e                   	pop    esi
100097ac:	5b                   	pop    ebx
100097ad:	c9                   	leave
100097ae:	c3                   	ret
100097af:	cc                   	int3
100097b0:	57                   	push   edi
100097b1:	8b 7c 24 08          	mov    edi,DWORD PTR [esp+0x8]
100097b5:	eb 6a                	jmp    0x10009821
100097b7:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
100097be:	8b ff                	mov    edi,edi
100097c0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
100097c4:	57                   	push   edi
100097c5:	f7 c1 03 00 00 00    	test   ecx,0x3
100097cb:	74 0f                	je     0x100097dc
100097cd:	8a 01                	mov    al,BYTE PTR [ecx]
100097cf:	41                   	inc    ecx
100097d0:	84 c0                	test   al,al
100097d2:	74 3b                	je     0x1000980f
100097d4:	f7 c1 03 00 00 00    	test   ecx,0x3
100097da:	75 f1                	jne    0x100097cd
100097dc:	8b 01                	mov    eax,DWORD PTR [ecx]
100097de:	ba ff fe fe 7e       	mov    edx,0x7efefeff
100097e3:	03 d0                	add    edx,eax
100097e5:	83 f0 ff             	xor    eax,0xffffffff
100097e8:	33 c2                	xor    eax,edx
100097ea:	83 c1 04             	add    ecx,0x4
100097ed:	a9 00 01 01 81       	test   eax,0x81010100
100097f2:	74 e8                	je     0x100097dc
100097f4:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
100097f7:	84 c0                	test   al,al
100097f9:	74 23                	je     0x1000981e
100097fb:	84 e4                	test   ah,ah
100097fd:	74 1a                	je     0x10009819
100097ff:	a9 00 00 ff 00       	test   eax,0xff0000
10009804:	74 0e                	je     0x10009814
10009806:	a9 00 00 00 ff       	test   eax,0xff000000
1000980b:	74 02                	je     0x1000980f
1000980d:	eb cd                	jmp    0x100097dc
1000980f:	8d 79 ff             	lea    edi,[ecx-0x1]
10009812:	eb 0d                	jmp    0x10009821
10009814:	8d 79 fe             	lea    edi,[ecx-0x2]
10009817:	eb 08                	jmp    0x10009821
10009819:	8d 79 fd             	lea    edi,[ecx-0x3]
1000981c:	eb 03                	jmp    0x10009821
1000981e:	8d 79 fc             	lea    edi,[ecx-0x4]
10009821:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10009825:	f7 c1 03 00 00 00    	test   ecx,0x3
1000982b:	74 19                	je     0x10009846
1000982d:	8a 11                	mov    dl,BYTE PTR [ecx]
1000982f:	41                   	inc    ecx
10009830:	84 d2                	test   dl,dl
10009832:	74 64                	je     0x10009898
10009834:	88 17                	mov    BYTE PTR [edi],dl
10009836:	47                   	inc    edi
10009837:	f7 c1 03 00 00 00    	test   ecx,0x3
1000983d:	75 ee                	jne    0x1000982d
1000983f:	eb 05                	jmp    0x10009846
10009841:	89 17                	mov    DWORD PTR [edi],edx
10009843:	83 c7 04             	add    edi,0x4
10009846:	ba ff fe fe 7e       	mov    edx,0x7efefeff
1000984b:	8b 01                	mov    eax,DWORD PTR [ecx]
1000984d:	03 d0                	add    edx,eax
1000984f:	83 f0 ff             	xor    eax,0xffffffff
10009852:	33 c2                	xor    eax,edx
10009854:	8b 11                	mov    edx,DWORD PTR [ecx]
10009856:	83 c1 04             	add    ecx,0x4
10009859:	a9 00 01 01 81       	test   eax,0x81010100
1000985e:	74 e1                	je     0x10009841
10009860:	84 d2                	test   dl,dl
10009862:	74 34                	je     0x10009898
10009864:	84 f6                	test   dh,dh
10009866:	74 27                	je     0x1000988f
10009868:	f7 c2 00 00 ff 00    	test   edx,0xff0000
1000986e:	74 12                	je     0x10009882
10009870:	f7 c2 00 00 00 ff    	test   edx,0xff000000
10009876:	74 02                	je     0x1000987a
10009878:	eb c7                	jmp    0x10009841
1000987a:	89 17                	mov    DWORD PTR [edi],edx
1000987c:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10009880:	5f                   	pop    edi
10009881:	c3                   	ret
10009882:	66 89 17             	mov    WORD PTR [edi],dx
10009885:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10009889:	c6 47 02 00          	mov    BYTE PTR [edi+0x2],0x0
1000988d:	5f                   	pop    edi
1000988e:	c3                   	ret
1000988f:	66 89 17             	mov    WORD PTR [edi],dx
10009892:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10009896:	5f                   	pop    edi
10009897:	c3                   	ret
10009898:	88 17                	mov    BYTE PTR [edi],dl
1000989a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000989e:	5f                   	pop    edi
1000989f:	c3                   	ret
100098a0:	6a 02                	push   0x2
100098a2:	e8 f2 aa ff ff       	call   0x10004399
100098a7:	59                   	pop    ecx
100098a8:	c3                   	ret
100098a9:	55                   	push   ebp
100098aa:	8b ec                	mov    ebp,esp
100098ac:	83 ec 18             	sub    esp,0x18
100098af:	53                   	push   ebx
100098b0:	56                   	push   esi
100098b1:	57                   	push   edi
100098b2:	6a 19                	push   0x19
100098b4:	e8 b8 c8 ff ff       	call   0x10006171
100098b9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100098bc:	e8 95 01 00 00       	call   0x10009a56
100098c1:	8b d8                	mov    ebx,eax
100098c3:	59                   	pop    ecx
100098c4:	3b 1d 30 57 1f 10    	cmp    ebx,DWORD PTR ds:0x101f5730
100098ca:	59                   	pop    ecx
100098cb:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
100098ce:	75 07                	jne    0x100098d7
100098d0:	33 f6                	xor    esi,esi
100098d2:	e9 70 01 00 00       	jmp    0x10009a47
100098d7:	85 db                	test   ebx,ebx
100098d9:	0f 84 56 01 00 00    	je     0x10009a35
100098df:	33 d2                	xor    edx,edx
100098e1:	b8 c0 11 01 10       	mov    eax,0x100111c0
100098e6:	39 18                	cmp    DWORD PTR [eax],ebx
100098e8:	74 74                	je     0x1000995e
100098ea:	83 c0 30             	add    eax,0x30
100098ed:	42                   	inc    edx
100098ee:	3d b0 12 01 10       	cmp    eax,0x100112b0
100098f3:	7c f1                	jl     0x100098e6
100098f5:	8d 45 e8             	lea    eax,[ebp-0x18]
100098f8:	50                   	push   eax
100098f9:	53                   	push   ebx
100098fa:	ff 15 34 c0 00 10    	call   DWORD PTR ds:0x1000c034
10009900:	6a 01                	push   0x1
10009902:	5e                   	pop    esi
10009903:	3b c6                	cmp    eax,esi
10009905:	0f 85 21 01 00 00    	jne    0x10009a2c
1000990b:	6a 40                	push   0x40
1000990d:	83 25 64 59 1f 10 00 	and    DWORD PTR ds:0x101f5964,0x0
10009914:	59                   	pop    ecx
10009915:	33 c0                	xor    eax,eax
10009917:	bf 60 58 1f 10       	mov    edi,0x101f5860
1000991c:	39 75 e8             	cmp    DWORD PTR [ebp-0x18],esi
1000991f:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10009921:	aa                   	stos   BYTE PTR es:[edi],al
10009922:	89 1d 30 57 1f 10    	mov    DWORD PTR ds:0x101f5730,ebx
10009928:	0f 86 eb 00 00 00    	jbe    0x10009a19
1000992e:	80 7d ee 00          	cmp    BYTE PTR [ebp-0x12],0x0
10009932:	0f 84 bc 00 00 00    	je     0x100099f4
10009938:	8d 4d ef             	lea    ecx,[ebp-0x11]
1000993b:	8a 11                	mov    dl,BYTE PTR [ecx]
1000993d:	84 d2                	test   dl,dl
1000993f:	0f 84 af 00 00 00    	je     0x100099f4
10009945:	0f b6 41 ff          	movzx  eax,BYTE PTR [ecx-0x1]
10009949:	0f b6 d2             	movzx  edx,dl
1000994c:	3b c2                	cmp    eax,edx
1000994e:	0f 87 94 00 00 00    	ja     0x100099e8
10009954:	80 88 61 58 1f 10 04 	or     BYTE PTR [eax+0x101f5861],0x4
1000995b:	40                   	inc    eax
1000995c:	eb ee                	jmp    0x1000994c
1000995e:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
10009962:	6a 40                	push   0x40
10009964:	59                   	pop    ecx
10009965:	33 c0                	xor    eax,eax
10009967:	bf 60 58 1f 10       	mov    edi,0x101f5860
1000996c:	8d 34 52             	lea    esi,[edx+edx*2]
1000996f:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10009971:	c1 e6 04             	shl    esi,0x4
10009974:	aa                   	stos   BYTE PTR es:[edi],al
10009975:	8d 9e d0 11 01 10    	lea    ebx,[esi+0x100111d0]
1000997b:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
1000997e:	8b cb                	mov    ecx,ebx
10009980:	74 2c                	je     0x100099ae
10009982:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
10009985:	84 d2                	test   dl,dl
10009987:	74 25                	je     0x100099ae
10009989:	0f b6 01             	movzx  eax,BYTE PTR [ecx]
1000998c:	0f b6 fa             	movzx  edi,dl
1000998f:	3b c7                	cmp    eax,edi
10009991:	77 14                	ja     0x100099a7
10009993:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
10009996:	8a 92 b8 11 01 10    	mov    dl,BYTE PTR [edx+0x100111b8]
1000999c:	08 90 61 58 1f 10    	or     BYTE PTR [eax+0x101f5861],dl
100099a2:	40                   	inc    eax
100099a3:	3b c7                	cmp    eax,edi
100099a5:	76 f5                	jbe    0x1000999c
100099a7:	41                   	inc    ecx
100099a8:	41                   	inc    ecx
100099a9:	80 39 00             	cmp    BYTE PTR [ecx],0x0
100099ac:	75 d4                	jne    0x10009982
100099ae:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
100099b1:	83 c3 08             	add    ebx,0x8
100099b4:	83 7d fc 04          	cmp    DWORD PTR [ebp-0x4],0x4
100099b8:	72 c1                	jb     0x1000997b
100099ba:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100099bd:	c7 05 4c 57 1f 10 01 	mov    DWORD PTR ds:0x101f574c,0x1
100099c4:	00 00 00 
100099c7:	50                   	push   eax
100099c8:	a3 30 57 1f 10       	mov    ds:0x101f5730,eax
100099cd:	e8 ce 00 00 00       	call   0x10009aa0
100099d2:	8d b6 c4 11 01 10    	lea    esi,[esi+0x100111c4]
100099d8:	bf 40 57 1f 10       	mov    edi,0x101f5740
100099dd:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
100099de:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
100099df:	59                   	pop    ecx
100099e0:	a3 64 59 1f 10       	mov    ds:0x101f5964,eax
100099e5:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
100099e6:	eb 52                	jmp    0x10009a3a
100099e8:	41                   	inc    ecx
100099e9:	41                   	inc    ecx
100099ea:	80 79 ff 00          	cmp    BYTE PTR [ecx-0x1],0x0
100099ee:	0f 85 47 ff ff ff    	jne    0x1000993b
100099f4:	8b c6                	mov    eax,esi
100099f6:	80 88 61 58 1f 10 08 	or     BYTE PTR [eax+0x101f5861],0x8
100099fd:	40                   	inc    eax
100099fe:	3d ff 00 00 00       	cmp    eax,0xff
10009a03:	72 f1                	jb     0x100099f6
10009a05:	53                   	push   ebx
10009a06:	e8 95 00 00 00       	call   0x10009aa0
10009a0b:	59                   	pop    ecx
10009a0c:	a3 64 59 1f 10       	mov    ds:0x101f5964,eax
10009a11:	89 35 4c 57 1f 10    	mov    DWORD PTR ds:0x101f574c,esi
10009a17:	eb 07                	jmp    0x10009a20
10009a19:	83 25 4c 57 1f 10 00 	and    DWORD PTR ds:0x101f574c,0x0
10009a20:	33 c0                	xor    eax,eax
10009a22:	bf 40 57 1f 10       	mov    edi,0x101f5740
10009a27:	ab                   	stos   DWORD PTR es:[edi],eax
10009a28:	ab                   	stos   DWORD PTR es:[edi],eax
10009a29:	ab                   	stos   DWORD PTR es:[edi],eax
10009a2a:	eb 0e                	jmp    0x10009a3a
10009a2c:	83 3d 4c 3c 0e 10 00 	cmp    DWORD PTR ds:0x100e3c4c,0x0
10009a33:	74 0f                	je     0x10009a44
10009a35:	e8 99 00 00 00       	call   0x10009ad3
10009a3a:	e8 bd 00 00 00       	call   0x10009afc
10009a3f:	e9 8c fe ff ff       	jmp    0x100098d0
10009a44:	83 ce ff             	or     esi,0xffffffff
10009a47:	6a 19                	push   0x19
10009a49:	e8 84 c7 ff ff       	call   0x100061d2
10009a4e:	59                   	pop    ecx
10009a4f:	8b c6                	mov    eax,esi
10009a51:	5f                   	pop    edi
10009a52:	5e                   	pop    esi
10009a53:	5b                   	pop    ebx
10009a54:	c9                   	leave
10009a55:	c3                   	ret
10009a56:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10009a5a:	83 25 4c 3c 0e 10 00 	and    DWORD PTR ds:0x100e3c4c,0x0
10009a61:	83 f8 fe             	cmp    eax,0xfffffffe
10009a64:	75 10                	jne    0x10009a76
10009a66:	c7 05 4c 3c 0e 10 01 	mov    DWORD PTR ds:0x100e3c4c,0x1
10009a6d:	00 00 00 
10009a70:	ff 25 2c c0 00 10    	jmp    DWORD PTR ds:0x1000c02c
10009a76:	83 f8 fd             	cmp    eax,0xfffffffd
10009a79:	75 10                	jne    0x10009a8b
10009a7b:	c7 05 4c 3c 0e 10 01 	mov    DWORD PTR ds:0x100e3c4c,0x1
10009a82:	00 00 00 
10009a85:	ff 25 30 c0 00 10    	jmp    DWORD PTR ds:0x1000c030
10009a8b:	83 f8 fc             	cmp    eax,0xfffffffc
10009a8e:	75 0f                	jne    0x10009a9f
10009a90:	a1 84 3c 0e 10       	mov    eax,ds:0x100e3c84
10009a95:	c7 05 4c 3c 0e 10 01 	mov    DWORD PTR ds:0x100e3c4c,0x1
10009a9c:	00 00 00 
10009a9f:	c3                   	ret
10009aa0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
10009aa4:	2d a4 03 00 00       	sub    eax,0x3a4
10009aa9:	74 22                	je     0x10009acd
10009aab:	83 e8 04             	sub    eax,0x4
10009aae:	74 17                	je     0x10009ac7
10009ab0:	83 e8 0d             	sub    eax,0xd
10009ab3:	74 0c                	je     0x10009ac1
10009ab5:	48                   	dec    eax
10009ab6:	74 03                	je     0x10009abb
10009ab8:	33 c0                	xor    eax,eax
10009aba:	c3                   	ret
10009abb:	b8 04 04 00 00       	mov    eax,0x404
10009ac0:	c3                   	ret
10009ac1:	b8 12 04 00 00       	mov    eax,0x412
10009ac6:	c3                   	ret
10009ac7:	b8 04 08 00 00       	mov    eax,0x804
10009acc:	c3                   	ret
10009acd:	b8 11 04 00 00       	mov    eax,0x411
10009ad2:	c3                   	ret
10009ad3:	57                   	push   edi
10009ad4:	6a 40                	push   0x40
10009ad6:	59                   	pop    ecx
10009ad7:	33 c0                	xor    eax,eax
10009ad9:	bf 60 58 1f 10       	mov    edi,0x101f5860
10009ade:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10009ae0:	aa                   	stos   BYTE PTR es:[edi],al
10009ae1:	33 c0                	xor    eax,eax
10009ae3:	bf 40 57 1f 10       	mov    edi,0x101f5740
10009ae8:	a3 30 57 1f 10       	mov    ds:0x101f5730,eax
10009aed:	a3 4c 57 1f 10       	mov    ds:0x101f574c,eax
10009af2:	a3 64 59 1f 10       	mov    ds:0x101f5964,eax
10009af7:	ab                   	stos   DWORD PTR es:[edi],eax
10009af8:	ab                   	stos   DWORD PTR es:[edi],eax
10009af9:	ab                   	stos   DWORD PTR es:[edi],eax
10009afa:	5f                   	pop    edi
10009afb:	c3                   	ret
10009afc:	55                   	push   ebp
10009afd:	8b ec                	mov    ebp,esp
10009aff:	81 ec 14 05 00 00    	sub    esp,0x514
10009b05:	8d 45 ec             	lea    eax,[ebp-0x14]
10009b08:	56                   	push   esi
10009b09:	50                   	push   eax
10009b0a:	ff 35 30 57 1f 10    	push   DWORD PTR ds:0x101f5730
10009b10:	ff 15 34 c0 00 10    	call   DWORD PTR ds:0x1000c034
10009b16:	83 f8 01             	cmp    eax,0x1
10009b19:	0f 85 16 01 00 00    	jne    0x10009c35
10009b1f:	33 c0                	xor    eax,eax
10009b21:	be 00 01 00 00       	mov    esi,0x100
10009b26:	88 84 05 ec fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x114],al
10009b2d:	40                   	inc    eax
10009b2e:	3b c6                	cmp    eax,esi
10009b30:	72 f4                	jb     0x10009b26
10009b32:	8a 45 f2             	mov    al,BYTE PTR [ebp-0xe]
10009b35:	c6 85 ec fe ff ff 20 	mov    BYTE PTR [ebp-0x114],0x20
10009b3c:	84 c0                	test   al,al
10009b3e:	74 37                	je     0x10009b77
10009b40:	53                   	push   ebx
10009b41:	57                   	push   edi
10009b42:	8d 55 f3             	lea    edx,[ebp-0xd]
10009b45:	0f b6 0a             	movzx  ecx,BYTE PTR [edx]
10009b48:	0f b6 c0             	movzx  eax,al
10009b4b:	3b c1                	cmp    eax,ecx
10009b4d:	77 1d                	ja     0x10009b6c
10009b4f:	2b c8                	sub    ecx,eax
10009b51:	8d bc 05 ec fe ff ff 	lea    edi,[ebp+eax*1-0x114]
10009b58:	41                   	inc    ecx
10009b59:	b8 20 20 20 20       	mov    eax,0x20202020
10009b5e:	8b d9                	mov    ebx,ecx
10009b60:	c1 e9 02             	shr    ecx,0x2
10009b63:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10009b65:	8b cb                	mov    ecx,ebx
10009b67:	83 e1 03             	and    ecx,0x3
10009b6a:	f3 aa                	rep stos BYTE PTR es:[edi],al
10009b6c:	42                   	inc    edx
10009b6d:	42                   	inc    edx
10009b6e:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
10009b71:	84 c0                	test   al,al
10009b73:	75 d0                	jne    0x10009b45
10009b75:	5f                   	pop    edi
10009b76:	5b                   	pop    ebx
10009b77:	6a 00                	push   0x0
10009b79:	8d 85 ec fa ff ff    	lea    eax,[ebp-0x514]
10009b7f:	ff 35 64 59 1f 10    	push   DWORD PTR ds:0x101f5964
10009b85:	ff 35 30 57 1f 10    	push   DWORD PTR ds:0x101f5730
10009b8b:	50                   	push   eax
10009b8c:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
10009b92:	56                   	push   esi
10009b93:	50                   	push   eax
10009b94:	6a 01                	push   0x1
10009b96:	e8 cc 06 00 00       	call   0x1000a267
10009b9b:	6a 00                	push   0x0
10009b9d:	8d 85 ec fd ff ff    	lea    eax,[ebp-0x214]
10009ba3:	ff 35 30 57 1f 10    	push   DWORD PTR ds:0x101f5730
10009ba9:	56                   	push   esi
10009baa:	50                   	push   eax
10009bab:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
10009bb1:	56                   	push   esi
10009bb2:	50                   	push   eax
10009bb3:	56                   	push   esi
10009bb4:	ff 35 64 59 1f 10    	push   DWORD PTR ds:0x101f5964
10009bba:	e8 f1 07 00 00       	call   0x1000a3b0
10009bbf:	6a 00                	push   0x0
10009bc1:	8d 85 ec fc ff ff    	lea    eax,[ebp-0x314]
10009bc7:	ff 35 30 57 1f 10    	push   DWORD PTR ds:0x101f5730
10009bcd:	56                   	push   esi
10009bce:	50                   	push   eax
10009bcf:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
10009bd5:	56                   	push   esi
10009bd6:	50                   	push   eax
10009bd7:	68 00 02 00 00       	push   0x200
10009bdc:	ff 35 64 59 1f 10    	push   DWORD PTR ds:0x101f5964
10009be2:	e8 c9 07 00 00       	call   0x1000a3b0
10009be7:	83 c4 5c             	add    esp,0x5c
10009bea:	33 c0                	xor    eax,eax
10009bec:	8d 8d ec fa ff ff    	lea    ecx,[ebp-0x514]
10009bf2:	66 8b 11             	mov    dx,WORD PTR [ecx]
10009bf5:	f6 c2 01             	test   dl,0x1
10009bf8:	74 16                	je     0x10009c10
10009bfa:	80 88 61 58 1f 10 10 	or     BYTE PTR [eax+0x101f5861],0x10
10009c01:	8a 94 05 ec fd ff ff 	mov    dl,BYTE PTR [ebp+eax*1-0x214]
10009c08:	88 90 60 57 1f 10    	mov    BYTE PTR [eax+0x101f5760],dl
10009c0e:	eb 1c                	jmp    0x10009c2c
10009c10:	f6 c2 02             	test   dl,0x2
10009c13:	74 10                	je     0x10009c25
10009c15:	80 88 61 58 1f 10 20 	or     BYTE PTR [eax+0x101f5861],0x20
10009c1c:	8a 94 05 ec fc ff ff 	mov    dl,BYTE PTR [ebp+eax*1-0x314]
10009c23:	eb e3                	jmp    0x10009c08
10009c25:	80 a0 60 57 1f 10 00 	and    BYTE PTR [eax+0x101f5760],0x0
10009c2c:	40                   	inc    eax
10009c2d:	41                   	inc    ecx
10009c2e:	41                   	inc    ecx
10009c2f:	3b c6                	cmp    eax,esi
10009c31:	72 bf                	jb     0x10009bf2
10009c33:	eb 49                	jmp    0x10009c7e
10009c35:	33 c0                	xor    eax,eax
10009c37:	be 00 01 00 00       	mov    esi,0x100
10009c3c:	83 f8 41             	cmp    eax,0x41
10009c3f:	72 19                	jb     0x10009c5a
10009c41:	83 f8 5a             	cmp    eax,0x5a
10009c44:	77 14                	ja     0x10009c5a
10009c46:	80 88 61 58 1f 10 10 	or     BYTE PTR [eax+0x101f5861],0x10
10009c4d:	8a c8                	mov    cl,al
10009c4f:	80 c1 20             	add    cl,0x20
10009c52:	88 88 60 57 1f 10    	mov    BYTE PTR [eax+0x101f5760],cl
10009c58:	eb 1f                	jmp    0x10009c79
10009c5a:	83 f8 61             	cmp    eax,0x61
10009c5d:	72 13                	jb     0x10009c72
10009c5f:	83 f8 7a             	cmp    eax,0x7a
10009c62:	77 0e                	ja     0x10009c72
10009c64:	80 88 61 58 1f 10 20 	or     BYTE PTR [eax+0x101f5861],0x20
10009c6b:	8a c8                	mov    cl,al
10009c6d:	80 e9 20             	sub    cl,0x20
10009c70:	eb e0                	jmp    0x10009c52
10009c72:	80 a0 60 57 1f 10 00 	and    BYTE PTR [eax+0x101f5760],0x0
10009c79:	40                   	inc    eax
10009c7a:	3b c6                	cmp    eax,esi
10009c7c:	72 be                	jb     0x10009c3c
10009c7e:	5e                   	pop    esi
10009c7f:	c9                   	leave
10009c80:	c3                   	ret
10009c81:	83 3d 88 5a 1f 10 00 	cmp    DWORD PTR ds:0x101f5a88,0x0
10009c88:	75 12                	jne    0x10009c9c
10009c8a:	6a fd                	push   0xfffffffd
10009c8c:	e8 18 fc ff ff       	call   0x100098a9
10009c91:	59                   	pop    ecx
10009c92:	c7 05 88 5a 1f 10 01 	mov    DWORD PTR ds:0x101f5a88,0x1
10009c99:	00 00 00 
10009c9c:	c3                   	ret
10009c9d:	53                   	push   ebx
10009c9e:	33 db                	xor    ebx,ebx
10009ca0:	39 1d 50 3c 0e 10    	cmp    DWORD PTR ds:0x100e3c50,ebx
10009ca6:	56                   	push   esi
10009ca7:	57                   	push   edi
10009ca8:	75 42                	jne    0x10009cec
10009caa:	68 38 c6 00 10       	push   0x1000c638
10009caf:	ff 15 28 c0 00 10    	call   DWORD PTR ds:0x1000c028
10009cb5:	8b f8                	mov    edi,eax
10009cb7:	3b fb                	cmp    edi,ebx
10009cb9:	74 67                	je     0x10009d22
10009cbb:	8b 35 bc c0 00 10    	mov    esi,DWORD PTR ds:0x1000c0bc
10009cc1:	68 2c c6 00 10       	push   0x1000c62c
10009cc6:	57                   	push   edi
10009cc7:	ff d6                	call   esi
10009cc9:	85 c0                	test   eax,eax
10009ccb:	a3 50 3c 0e 10       	mov    ds:0x100e3c50,eax
10009cd0:	74 50                	je     0x10009d22
10009cd2:	68 1c c6 00 10       	push   0x1000c61c
10009cd7:	57                   	push   edi
10009cd8:	ff d6                	call   esi
10009cda:	68 08 c6 00 10       	push   0x1000c608
10009cdf:	57                   	push   edi
10009ce0:	a3 54 3c 0e 10       	mov    ds:0x100e3c54,eax
10009ce5:	ff d6                	call   esi
10009ce7:	a3 58 3c 0e 10       	mov    ds:0x100e3c58,eax
10009cec:	a1 54 3c 0e 10       	mov    eax,ds:0x100e3c54
10009cf1:	85 c0                	test   eax,eax
10009cf3:	74 16                	je     0x10009d0b
10009cf5:	ff d0                	call   eax
10009cf7:	8b d8                	mov    ebx,eax
10009cf9:	85 db                	test   ebx,ebx
10009cfb:	74 0e                	je     0x10009d0b
10009cfd:	a1 58 3c 0e 10       	mov    eax,ds:0x100e3c58
10009d02:	85 c0                	test   eax,eax
10009d04:	74 05                	je     0x10009d0b
10009d06:	53                   	push   ebx
10009d07:	ff d0                	call   eax
10009d09:	8b d8                	mov    ebx,eax
10009d0b:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
10009d0f:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
10009d13:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
10009d17:	53                   	push   ebx
10009d18:	ff 15 50 3c 0e 10    	call   DWORD PTR ds:0x100e3c50
10009d1e:	5f                   	pop    edi
10009d1f:	5e                   	pop    esi
10009d20:	5b                   	pop    ebx
10009d21:	c3                   	ret
10009d22:	33 c0                	xor    eax,eax
10009d24:	eb f8                	jmp    0x10009d1e
10009d26:	cc                   	int3
10009d27:	cc                   	int3
10009d28:	cc                   	int3
10009d29:	cc                   	int3
10009d2a:	cc                   	int3
10009d2b:	cc                   	int3
10009d2c:	cc                   	int3
10009d2d:	cc                   	int3
10009d2e:	cc                   	int3
10009d2f:	cc                   	int3
10009d30:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
10009d34:	57                   	push   edi
10009d35:	85 c9                	test   ecx,ecx
10009d37:	74 7a                	je     0x10009db3
10009d39:	56                   	push   esi
10009d3a:	53                   	push   ebx
10009d3b:	8b d9                	mov    ebx,ecx
10009d3d:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
10009d41:	f7 c6 03 00 00 00    	test   esi,0x3
10009d47:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
10009d4b:	75 07                	jne    0x10009d54
10009d4d:	c1 e9 02             	shr    ecx,0x2
10009d50:	75 6f                	jne    0x10009dc1
10009d52:	eb 21                	jmp    0x10009d75
10009d54:	8a 06                	mov    al,BYTE PTR [esi]
10009d56:	46                   	inc    esi
10009d57:	88 07                	mov    BYTE PTR [edi],al
10009d59:	47                   	inc    edi
10009d5a:	49                   	dec    ecx
10009d5b:	74 25                	je     0x10009d82
10009d5d:	84 c0                	test   al,al
10009d5f:	74 29                	je     0x10009d8a
10009d61:	f7 c6 03 00 00 00    	test   esi,0x3
10009d67:	75 eb                	jne    0x10009d54
10009d69:	8b d9                	mov    ebx,ecx
10009d6b:	c1 e9 02             	shr    ecx,0x2
10009d6e:	75 51                	jne    0x10009dc1
10009d70:	83 e3 03             	and    ebx,0x3
10009d73:	74 0d                	je     0x10009d82
10009d75:	8a 06                	mov    al,BYTE PTR [esi]
10009d77:	46                   	inc    esi
10009d78:	88 07                	mov    BYTE PTR [edi],al
10009d7a:	47                   	inc    edi
10009d7b:	84 c0                	test   al,al
10009d7d:	74 2f                	je     0x10009dae
10009d7f:	4b                   	dec    ebx
10009d80:	75 f3                	jne    0x10009d75
10009d82:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10009d86:	5b                   	pop    ebx
10009d87:	5e                   	pop    esi
10009d88:	5f                   	pop    edi
10009d89:	c3                   	ret
10009d8a:	f7 c7 03 00 00 00    	test   edi,0x3
10009d90:	74 12                	je     0x10009da4
10009d92:	88 07                	mov    BYTE PTR [edi],al
10009d94:	47                   	inc    edi
10009d95:	49                   	dec    ecx
10009d96:	0f 84 8a 00 00 00    	je     0x10009e26
10009d9c:	f7 c7 03 00 00 00    	test   edi,0x3
10009da2:	75 ee                	jne    0x10009d92
10009da4:	8b d9                	mov    ebx,ecx
10009da6:	c1 e9 02             	shr    ecx,0x2
10009da9:	75 6c                	jne    0x10009e17
10009dab:	88 07                	mov    BYTE PTR [edi],al
10009dad:	47                   	inc    edi
10009dae:	4b                   	dec    ebx
10009daf:	75 fa                	jne    0x10009dab
10009db1:	5b                   	pop    ebx
10009db2:	5e                   	pop    esi
10009db3:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
10009db7:	5f                   	pop    edi
10009db8:	c3                   	ret
10009db9:	89 17                	mov    DWORD PTR [edi],edx
10009dbb:	83 c7 04             	add    edi,0x4
10009dbe:	49                   	dec    ecx
10009dbf:	74 af                	je     0x10009d70
10009dc1:	ba ff fe fe 7e       	mov    edx,0x7efefeff
10009dc6:	8b 06                	mov    eax,DWORD PTR [esi]
10009dc8:	03 d0                	add    edx,eax
10009dca:	83 f0 ff             	xor    eax,0xffffffff
10009dcd:	33 c2                	xor    eax,edx
10009dcf:	8b 16                	mov    edx,DWORD PTR [esi]
10009dd1:	83 c6 04             	add    esi,0x4
10009dd4:	a9 00 01 01 81       	test   eax,0x81010100
10009dd9:	74 de                	je     0x10009db9
10009ddb:	84 d2                	test   dl,dl
10009ddd:	74 2c                	je     0x10009e0b
10009ddf:	84 f6                	test   dh,dh
10009de1:	74 1e                	je     0x10009e01
10009de3:	f7 c2 00 00 ff 00    	test   edx,0xff0000
10009de9:	74 0c                	je     0x10009df7
10009deb:	f7 c2 00 00 00 ff    	test   edx,0xff000000
10009df1:	75 c6                	jne    0x10009db9
10009df3:	89 17                	mov    DWORD PTR [edi],edx
10009df5:	eb 18                	jmp    0x10009e0f
10009df7:	81 e2 ff ff 00 00    	and    edx,0xffff
10009dfd:	89 17                	mov    DWORD PTR [edi],edx
10009dff:	eb 0e                	jmp    0x10009e0f
10009e01:	81 e2 ff 00 00 00    	and    edx,0xff
10009e07:	89 17                	mov    DWORD PTR [edi],edx
10009e09:	eb 04                	jmp    0x10009e0f
10009e0b:	33 d2                	xor    edx,edx
10009e0d:	89 17                	mov    DWORD PTR [edi],edx
10009e0f:	83 c7 04             	add    edi,0x4
10009e12:	33 c0                	xor    eax,eax
10009e14:	49                   	dec    ecx
10009e15:	74 0a                	je     0x10009e21
10009e17:	33 c0                	xor    eax,eax
10009e19:	89 07                	mov    DWORD PTR [edi],eax
10009e1b:	83 c7 04             	add    edi,0x4
10009e1e:	49                   	dec    ecx
10009e1f:	75 f8                	jne    0x10009e19
10009e21:	83 e3 03             	and    ebx,0x3
10009e24:	75 85                	jne    0x10009dab
10009e26:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
10009e2a:	5b                   	pop    ebx
10009e2b:	5e                   	pop    esi
10009e2c:	5f                   	pop    edi
10009e2d:	c3                   	ret
10009e2e:	55                   	push   ebp
10009e2f:	8b ec                	mov    ebp,esp
10009e31:	b8 04 10 00 00       	mov    eax,0x1004
10009e36:	e8 f5 ea ff ff       	call   0x10008930
10009e3b:	53                   	push   ebx
10009e3c:	56                   	push   esi
10009e3d:	33 f6                	xor    esi,esi
10009e3f:	6a 01                	push   0x1
10009e41:	56                   	push   esi
10009e42:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009e45:	e8 89 e3 ff ff       	call   0x100081d3
10009e4a:	83 cb ff             	or     ebx,0xffffffff
10009e4d:	83 c4 0c             	add    esp,0xc
10009e50:	3b c3                	cmp    eax,ebx
10009e52:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10009e55:	0f 84 f2 00 00 00    	je     0x10009f4d
10009e5b:	6a 02                	push   0x2
10009e5d:	56                   	push   esi
10009e5e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009e61:	e8 6d e3 ff ff       	call   0x100081d3
10009e66:	83 c4 0c             	add    esp,0xc
10009e69:	3b c3                	cmp    eax,ebx
10009e6b:	0f 84 dc 00 00 00    	je     0x10009f4d
10009e71:	57                   	push   edi
10009e72:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10009e75:	2b f8                	sub    edi,eax
10009e77:	85 ff                	test   edi,edi
10009e79:	7e 75                	jle    0x10009ef0
10009e7b:	bb 00 10 00 00       	mov    ebx,0x1000
10009e80:	8d 85 fc ef ff ff    	lea    eax,[ebp-0x1004]
10009e86:	53                   	push   ebx
10009e87:	56                   	push   esi
10009e88:	50                   	push   eax
10009e89:	e8 12 ee ff ff       	call   0x10008ca0
10009e8e:	68 00 80 00 00       	push   0x8000
10009e93:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009e96:	e8 69 10 00 00       	call   0x1000af04
10009e9b:	83 c4 14             	add    esp,0x14
10009e9e:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
10009ea1:	3b fb                	cmp    edi,ebx
10009ea3:	8b c3                	mov    eax,ebx
10009ea5:	7d 02                	jge    0x10009ea9
10009ea7:	8b c7                	mov    eax,edi
10009ea9:	50                   	push   eax
10009eaa:	8d 85 fc ef ff ff    	lea    eax,[ebp-0x1004]
10009eb0:	50                   	push   eax
10009eb1:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009eb4:	e8 32 aa ff ff       	call   0x100048eb
10009eb9:	83 c4 0c             	add    esp,0xc
10009ebc:	83 f8 ff             	cmp    eax,0xffffffff
10009ebf:	74 08                	je     0x10009ec9
10009ec1:	2b f8                	sub    edi,eax
10009ec3:	85 ff                	test   edi,edi
10009ec5:	7e 1a                	jle    0x10009ee1
10009ec7:	eb d8                	jmp    0x10009ea1
10009ec9:	e8 23 df ff ff       	call   0x10007df1
10009ece:	83 38 05             	cmp    DWORD PTR [eax],0x5
10009ed1:	75 0b                	jne    0x10009ede
10009ed3:	e8 10 df ff ff       	call   0x10007de8
10009ed8:	c7 00 0d 00 00 00    	mov    DWORD PTR [eax],0xd
10009ede:	83 ce ff             	or     esi,0xffffffff
10009ee1:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10009ee4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009ee7:	e8 18 10 00 00       	call   0x1000af04
10009eec:	59                   	pop    ecx
10009eed:	59                   	pop    ecx
10009eee:	eb 48                	jmp    0x10009f38
10009ef0:	7d 46                	jge    0x10009f38
10009ef2:	6a 00                	push   0x0
10009ef4:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10009ef7:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009efa:	e8 d4 e2 ff ff       	call   0x100081d3
10009eff:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009f02:	e8 11 e1 ff ff       	call   0x10008018
10009f07:	83 c4 10             	add    esp,0x10
10009f0a:	50                   	push   eax
10009f0b:	ff 15 24 c0 00 10    	call   DWORD PTR ds:0x1000c024
10009f11:	8b f0                	mov    esi,eax
10009f13:	f7 de                	neg    esi
10009f15:	1b f6                	sbb    esi,esi
10009f17:	f7 de                	neg    esi
10009f19:	4e                   	dec    esi
10009f1a:	3b f3                	cmp    esi,ebx
10009f1c:	75 1a                	jne    0x10009f38
10009f1e:	e8 c5 de ff ff       	call   0x10007de8
10009f23:	c7 00 0d 00 00 00    	mov    DWORD PTR [eax],0xd
10009f29:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
10009f2f:	8b f8                	mov    edi,eax
10009f31:	e8 bb de ff ff       	call   0x10007df1
10009f36:	89 38                	mov    DWORD PTR [eax],edi
10009f38:	6a 00                	push   0x0
10009f3a:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
10009f3d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10009f40:	e8 8e e2 ff ff       	call   0x100081d3
10009f45:	83 c4 0c             	add    esp,0xc
10009f48:	8b c6                	mov    eax,esi
10009f4a:	5f                   	pop    edi
10009f4b:	eb 02                	jmp    0x10009f4f
10009f4d:	8b c3                	mov    eax,ebx
10009f4f:	5e                   	pop    esi
10009f50:	5b                   	pop    ebx
10009f51:	c9                   	leave
10009f52:	c3                   	ret
10009f53:	55                   	push   ebp
10009f54:	8b ec                	mov    ebp,esp
10009f56:	83 ec 0c             	sub    esp,0xc
10009f59:	83 65 f8 00          	and    DWORD PTR [ebp-0x8],0x0
10009f5d:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
10009f61:	53                   	push   ebx
10009f62:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10009f65:	56                   	push   esi
10009f66:	57                   	push   edi
10009f67:	8b d3                	mov    edx,ebx
10009f69:	0f 84 b6 01 00 00    	je     0x1000a125
10009f6f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10009f72:	8b c8                	mov    ecx,eax
10009f74:	83 e0 1f             	and    eax,0x1f
10009f77:	c1 f9 05             	sar    ecx,0x5
10009f7a:	8d 34 c0             	lea    esi,[eax+eax*8]
10009f7d:	8b 04 8d 80 59 1f 10 	mov    eax,DWORD PTR [ecx*4+0x101f5980]
10009f84:	8d 3c 8d 80 59 1f 10 	lea    edi,[ecx*4+0x101f5980]
10009f8b:	c1 e6 02             	shl    esi,0x2
10009f8e:	03 c6                	add    eax,esi
10009f90:	8a 48 04             	mov    cl,BYTE PTR [eax+0x4]
10009f93:	f6 c1 02             	test   cl,0x2
10009f96:	0f 85 89 01 00 00    	jne    0x1000a125
10009f9c:	f6 c1 48             	test   cl,0x48
10009f9f:	74 1d                	je     0x10009fbe
10009fa1:	8a 40 05             	mov    al,BYTE PTR [eax+0x5]
10009fa4:	3c 0a                	cmp    al,0xa
10009fa6:	74 16                	je     0x10009fbe
10009fa8:	ff 4d 10             	dec    DWORD PTR [ebp+0x10]
10009fab:	88 03                	mov    BYTE PTR [ebx],al
10009fad:	8b 07                	mov    eax,DWORD PTR [edi]
10009faf:	8d 53 01             	lea    edx,[ebx+0x1]
10009fb2:	c7 45 f8 01 00 00 00 	mov    DWORD PTR [ebp-0x8],0x1
10009fb9:	c6 44 30 05 0a       	mov    BYTE PTR [eax+esi*1+0x5],0xa
10009fbe:	8d 45 f4             	lea    eax,[ebp-0xc]
10009fc1:	6a 00                	push   0x0
10009fc3:	50                   	push   eax
10009fc4:	8b 07                	mov    eax,DWORD PTR [edi]
10009fc6:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10009fc9:	52                   	push   edx
10009fca:	ff 34 30             	push   DWORD PTR [eax+esi*1]
10009fcd:	ff 15 20 c0 00 10    	call   DWORD PTR ds:0x1000c020
10009fd3:	85 c0                	test   eax,eax
10009fd5:	75 39                	jne    0x1000a010
10009fd7:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
10009fdd:	6a 05                	push   0x5
10009fdf:	5e                   	pop    esi
10009fe0:	3b c6                	cmp    eax,esi
10009fe2:	75 14                	jne    0x10009ff8
10009fe4:	e8 ff dd ff ff       	call   0x10007de8
10009fe9:	c7 00 09 00 00 00    	mov    DWORD PTR [eax],0x9
10009fef:	e8 fd dd ff ff       	call   0x10007df1
10009ff4:	89 30                	mov    DWORD PTR [eax],esi
10009ff6:	eb 10                	jmp    0x1000a008
10009ff8:	83 f8 6d             	cmp    eax,0x6d
10009ffb:	0f 84 24 01 00 00    	je     0x1000a125
1000a001:	50                   	push   eax
1000a002:	e8 6e dd ff ff       	call   0x10007d75
1000a007:	59                   	pop    ecx
1000a008:	83 c8 ff             	or     eax,0xffffffff
1000a00b:	e9 17 01 00 00       	jmp    0x1000a127
1000a010:	8b 07                	mov    eax,DWORD PTR [edi]
1000a012:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
1000a015:	01 55 f8             	add    DWORD PTR [ebp-0x8],edx
1000a018:	8d 4c 30 04          	lea    ecx,[eax+esi*1+0x4]
1000a01c:	8a 44 30 04          	mov    al,BYTE PTR [eax+esi*1+0x4]
1000a020:	a8 80                	test   al,0x80
1000a022:	0f 84 f8 00 00 00    	je     0x1000a120
1000a028:	85 d2                	test   edx,edx
1000a02a:	74 09                	je     0x1000a035
1000a02c:	80 3b 0a             	cmp    BYTE PTR [ebx],0xa
1000a02f:	75 04                	jne    0x1000a035
1000a031:	0c 04                	or     al,0x4
1000a033:	eb 02                	jmp    0x1000a037
1000a035:	24 fb                	and    al,0xfb
1000a037:	88 01                	mov    BYTE PTR [ecx],al
1000a039:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000a03c:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1000a03f:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
1000a042:	03 c8                	add    ecx,eax
1000a044:	3b c1                	cmp    eax,ecx
1000a046:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1000a049:	0f 83 cb 00 00 00    	jae    0x1000a11a
1000a04f:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000a052:	8a 00                	mov    al,BYTE PTR [eax]
1000a054:	3c 1a                	cmp    al,0x1a
1000a056:	0f 84 ae 00 00 00    	je     0x1000a10a
1000a05c:	3c 0d                	cmp    al,0xd
1000a05e:	74 0b                	je     0x1000a06b
1000a060:	88 03                	mov    BYTE PTR [ebx],al
1000a062:	43                   	inc    ebx
1000a063:	ff 45 10             	inc    DWORD PTR [ebp+0x10]
1000a066:	e9 91 00 00 00       	jmp    0x1000a0fc
1000a06b:	49                   	dec    ecx
1000a06c:	39 4d 10             	cmp    DWORD PTR [ebp+0x10],ecx
1000a06f:	73 18                	jae    0x1000a089
1000a071:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000a074:	40                   	inc    eax
1000a075:	80 38 0a             	cmp    BYTE PTR [eax],0xa
1000a078:	75 06                	jne    0x1000a080
1000a07a:	83 45 10 02          	add    DWORD PTR [ebp+0x10],0x2
1000a07e:	eb 5e                	jmp    0x1000a0de
1000a080:	c6 03 0d             	mov    BYTE PTR [ebx],0xd
1000a083:	43                   	inc    ebx
1000a084:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
1000a087:	eb 73                	jmp    0x1000a0fc
1000a089:	8d 45 f4             	lea    eax,[ebp-0xc]
1000a08c:	6a 00                	push   0x0
1000a08e:	50                   	push   eax
1000a08f:	ff 45 10             	inc    DWORD PTR [ebp+0x10]
1000a092:	8d 45 ff             	lea    eax,[ebp-0x1]
1000a095:	6a 01                	push   0x1
1000a097:	50                   	push   eax
1000a098:	8b 07                	mov    eax,DWORD PTR [edi]
1000a09a:	ff 34 30             	push   DWORD PTR [eax+esi*1]
1000a09d:	ff 15 20 c0 00 10    	call   DWORD PTR ds:0x1000c020
1000a0a3:	85 c0                	test   eax,eax
1000a0a5:	75 0a                	jne    0x1000a0b1
1000a0a7:	ff 15 90 c0 00 10    	call   DWORD PTR ds:0x1000c090
1000a0ad:	85 c0                	test   eax,eax
1000a0af:	75 47                	jne    0x1000a0f8
1000a0b1:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
1000a0b5:	74 41                	je     0x1000a0f8
1000a0b7:	8b 07                	mov    eax,DWORD PTR [edi]
1000a0b9:	f6 44 30 04 48       	test   BYTE PTR [eax+esi*1+0x4],0x48
1000a0be:	74 13                	je     0x1000a0d3
1000a0c0:	8a 45 ff             	mov    al,BYTE PTR [ebp-0x1]
1000a0c3:	3c 0a                	cmp    al,0xa
1000a0c5:	74 17                	je     0x1000a0de
1000a0c7:	c6 03 0d             	mov    BYTE PTR [ebx],0xd
1000a0ca:	8b 0f                	mov    ecx,DWORD PTR [edi]
1000a0cc:	43                   	inc    ebx
1000a0cd:	88 44 31 05          	mov    BYTE PTR [ecx+esi*1+0x5],al
1000a0d1:	eb 29                	jmp    0x1000a0fc
1000a0d3:	3b 5d 0c             	cmp    ebx,DWORD PTR [ebp+0xc]
1000a0d6:	75 0b                	jne    0x1000a0e3
1000a0d8:	80 7d ff 0a          	cmp    BYTE PTR [ebp-0x1],0xa
1000a0dc:	75 05                	jne    0x1000a0e3
1000a0de:	c6 03 0a             	mov    BYTE PTR [ebx],0xa
1000a0e1:	eb 18                	jmp    0x1000a0fb
1000a0e3:	6a 01                	push   0x1
1000a0e5:	6a ff                	push   0xffffffff
1000a0e7:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000a0ea:	e8 e4 e0 ff ff       	call   0x100081d3
1000a0ef:	83 c4 0c             	add    esp,0xc
1000a0f2:	80 7d ff 0a          	cmp    BYTE PTR [ebp-0x1],0xa
1000a0f6:	74 04                	je     0x1000a0fc
1000a0f8:	c6 03 0d             	mov    BYTE PTR [ebx],0xd
1000a0fb:	43                   	inc    ebx
1000a0fc:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1000a0ff:	39 4d 10             	cmp    DWORD PTR [ebp+0x10],ecx
1000a102:	0f 82 47 ff ff ff    	jb     0x1000a04f
1000a108:	eb 10                	jmp    0x1000a11a
1000a10a:	8b 07                	mov    eax,DWORD PTR [edi]
1000a10c:	8d 74 30 04          	lea    esi,[eax+esi*1+0x4]
1000a110:	8a 06                	mov    al,BYTE PTR [esi]
1000a112:	a8 40                	test   al,0x40
1000a114:	75 04                	jne    0x1000a11a
1000a116:	0c 02                	or     al,0x2
1000a118:	88 06                	mov    BYTE PTR [esi],al
1000a11a:	2b 5d 0c             	sub    ebx,DWORD PTR [ebp+0xc]
1000a11d:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
1000a120:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1000a123:	eb 02                	jmp    0x1000a127
1000a125:	33 c0                	xor    eax,eax
1000a127:	5f                   	pop    edi
1000a128:	5e                   	pop    esi
1000a129:	5b                   	pop    ebx
1000a12a:	c9                   	leave
1000a12b:	c3                   	ret
1000a12c:	53                   	push   ebx
1000a12d:	33 db                	xor    ebx,ebx
1000a12f:	39 1d 74 3c 0e 10    	cmp    DWORD PTR ds:0x100e3c74,ebx
1000a135:	75 13                	jne    0x1000a14a
1000a137:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000a13b:	83 f8 61             	cmp    eax,0x61
1000a13e:	7c 59                	jl     0x1000a199
1000a140:	83 f8 7a             	cmp    eax,0x7a
1000a143:	7f 54                	jg     0x1000a199
1000a145:	83 e8 20             	sub    eax,0x20
1000a148:	5b                   	pop    ebx
1000a149:	c3                   	ret
1000a14a:	56                   	push   esi
1000a14b:	be 2c 57 1f 10       	mov    esi,0x101f572c
1000a150:	57                   	push   edi
1000a151:	56                   	push   esi
1000a152:	ff 15 38 c0 00 10    	call   DWORD PTR ds:0x1000c038
1000a158:	39 1d 28 57 1f 10    	cmp    DWORD PTR ds:0x101f5728,ebx
1000a15e:	8b 3d 3c c0 00 10    	mov    edi,DWORD PTR ds:0x1000c03c
1000a164:	74 0e                	je     0x1000a174
1000a166:	56                   	push   esi
1000a167:	ff d7                	call   edi
1000a169:	6a 13                	push   0x13
1000a16b:	e8 01 c0 ff ff       	call   0x10006171
1000a170:	59                   	pop    ecx
1000a171:	6a 01                	push   0x1
1000a173:	5b                   	pop    ebx
1000a174:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
1000a178:	e8 1e 00 00 00       	call   0x1000a19b
1000a17d:	85 db                	test   ebx,ebx
1000a17f:	59                   	pop    ecx
1000a180:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1000a184:	74 0a                	je     0x1000a190
1000a186:	6a 13                	push   0x13
1000a188:	e8 45 c0 ff ff       	call   0x100061d2
1000a18d:	59                   	pop    ecx
1000a18e:	eb 03                	jmp    0x1000a193
1000a190:	56                   	push   esi
1000a191:	ff d7                	call   edi
1000a193:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1000a197:	5f                   	pop    edi
1000a198:	5e                   	pop    esi
1000a199:	5b                   	pop    ebx
1000a19a:	c3                   	ret
1000a19b:	55                   	push   ebp
1000a19c:	8b ec                	mov    ebp,esp
1000a19e:	51                   	push   ecx
1000a19f:	83 3d 74 3c 0e 10 00 	cmp    DWORD PTR ds:0x100e3c74,0x0
1000a1a6:	53                   	push   ebx
1000a1a7:	75 1d                	jne    0x1000a1c6
1000a1a9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000a1ac:	83 f8 61             	cmp    eax,0x61
1000a1af:	0f 8c af 00 00 00    	jl     0x1000a264
1000a1b5:	83 f8 7a             	cmp    eax,0x7a
1000a1b8:	0f 8f a6 00 00 00    	jg     0x1000a264
1000a1be:	83 e8 20             	sub    eax,0x20
1000a1c1:	e9 9e 00 00 00       	jmp    0x1000a264
1000a1c6:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1000a1c9:	81 fb 00 01 00 00    	cmp    ebx,0x100
1000a1cf:	7d 28                	jge    0x1000a1f9
1000a1d1:	83 3d f0 10 01 10 01 	cmp    DWORD PTR ds:0x100110f0,0x1
1000a1d8:	7e 0c                	jle    0x1000a1e6
1000a1da:	6a 02                	push   0x2
1000a1dc:	53                   	push   ebx
1000a1dd:	e8 a9 ee ff ff       	call   0x1000908b
1000a1e2:	59                   	pop    ecx
1000a1e3:	59                   	pop    ecx
1000a1e4:	eb 0b                	jmp    0x1000a1f1
1000a1e6:	a1 e0 0e 01 10       	mov    eax,ds:0x10010ee0
1000a1eb:	8a 04 58             	mov    al,BYTE PTR [eax+ebx*2]
1000a1ee:	83 e0 02             	and    eax,0x2
1000a1f1:	85 c0                	test   eax,eax
1000a1f3:	75 04                	jne    0x1000a1f9
1000a1f5:	8b c3                	mov    eax,ebx
1000a1f7:	eb 6b                	jmp    0x1000a264
1000a1f9:	8b 15 e0 0e 01 10    	mov    edx,DWORD PTR ds:0x10010ee0
1000a1ff:	8b c3                	mov    eax,ebx
1000a201:	c1 f8 08             	sar    eax,0x8
1000a204:	0f b6 c8             	movzx  ecx,al
1000a207:	f6 44 4a 01 80       	test   BYTE PTR [edx+ecx*2+0x1],0x80
1000a20c:	74 0e                	je     0x1000a21c
1000a20e:	80 65 0a 00          	and    BYTE PTR [ebp+0xa],0x0
1000a212:	88 45 08             	mov    BYTE PTR [ebp+0x8],al
1000a215:	88 5d 09             	mov    BYTE PTR [ebp+0x9],bl
1000a218:	6a 02                	push   0x2
1000a21a:	eb 09                	jmp    0x1000a225
1000a21c:	80 65 09 00          	and    BYTE PTR [ebp+0x9],0x0
1000a220:	88 5d 08             	mov    BYTE PTR [ebp+0x8],bl
1000a223:	6a 01                	push   0x1
1000a225:	58                   	pop    eax
1000a226:	8d 4d fc             	lea    ecx,[ebp-0x4]
1000a229:	6a 01                	push   0x1
1000a22b:	6a 00                	push   0x0
1000a22d:	6a 03                	push   0x3
1000a22f:	51                   	push   ecx
1000a230:	50                   	push   eax
1000a231:	8d 45 08             	lea    eax,[ebp+0x8]
1000a234:	50                   	push   eax
1000a235:	68 00 02 00 00       	push   0x200
1000a23a:	ff 35 74 3c 0e 10    	push   DWORD PTR ds:0x100e3c74
1000a240:	e8 6b 01 00 00       	call   0x1000a3b0
1000a245:	83 c4 20             	add    esp,0x20
1000a248:	85 c0                	test   eax,eax
1000a24a:	74 a9                	je     0x1000a1f5
1000a24c:	83 f8 01             	cmp    eax,0x1
1000a24f:	75 06                	jne    0x1000a257
1000a251:	0f b6 45 fc          	movzx  eax,BYTE PTR [ebp-0x4]
1000a255:	eb 0d                	jmp    0x1000a264
1000a257:	0f b6 45 fd          	movzx  eax,BYTE PTR [ebp-0x3]
1000a25b:	0f b6 4d fc          	movzx  ecx,BYTE PTR [ebp-0x4]
1000a25f:	c1 e0 08             	shl    eax,0x8
1000a262:	0b c1                	or     eax,ecx
1000a264:	5b                   	pop    ebx
1000a265:	c9                   	leave
1000a266:	c3                   	ret
1000a267:	55                   	push   ebp
1000a268:	8b ec                	mov    ebp,esp
1000a26a:	6a ff                	push   0xffffffff
1000a26c:	68 50 c6 00 10       	push   0x1000c650
1000a271:	68 e0 62 00 10       	push   0x100062e0
1000a276:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1000a27c:	50                   	push   eax
1000a27d:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1000a284:	83 ec 18             	sub    esp,0x18
1000a287:	53                   	push   ebx
1000a288:	56                   	push   esi
1000a289:	57                   	push   edi
1000a28a:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
1000a28d:	a1 a0 3c 0e 10       	mov    eax,ds:0x100e3ca0
1000a292:	33 db                	xor    ebx,ebx
1000a294:	3b c3                	cmp    eax,ebx
1000a296:	75 3e                	jne    0x1000a2d6
1000a298:	8d 45 e4             	lea    eax,[ebp-0x1c]
1000a29b:	50                   	push   eax
1000a29c:	6a 01                	push   0x1
1000a29e:	5e                   	pop    esi
1000a29f:	56                   	push   esi
1000a2a0:	68 48 c6 00 10       	push   0x1000c648
1000a2a5:	56                   	push   esi
1000a2a6:	ff 15 14 c0 00 10    	call   DWORD PTR ds:0x1000c014
1000a2ac:	85 c0                	test   eax,eax
1000a2ae:	74 04                	je     0x1000a2b4
1000a2b0:	8b c6                	mov    eax,esi
1000a2b2:	eb 1d                	jmp    0x1000a2d1
1000a2b4:	8d 45 e4             	lea    eax,[ebp-0x1c]
1000a2b7:	50                   	push   eax
1000a2b8:	56                   	push   esi
1000a2b9:	68 44 c6 00 10       	push   0x1000c644
1000a2be:	56                   	push   esi
1000a2bf:	53                   	push   ebx
1000a2c0:	ff 15 18 c0 00 10    	call   DWORD PTR ds:0x1000c018
1000a2c6:	85 c0                	test   eax,eax
1000a2c8:	0f 84 ce 00 00 00    	je     0x1000a39c
1000a2ce:	6a 02                	push   0x2
1000a2d0:	58                   	pop    eax
1000a2d1:	a3 a0 3c 0e 10       	mov    ds:0x100e3ca0,eax
1000a2d6:	83 f8 02             	cmp    eax,0x2
1000a2d9:	75 24                	jne    0x1000a2ff
1000a2db:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
1000a2de:	3b c3                	cmp    eax,ebx
1000a2e0:	75 05                	jne    0x1000a2e7
1000a2e2:	a1 74 3c 0e 10       	mov    eax,ds:0x100e3c74
1000a2e7:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1000a2ea:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000a2ed:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000a2f0:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000a2f3:	50                   	push   eax
1000a2f4:	ff 15 18 c0 00 10    	call   DWORD PTR ds:0x1000c018
1000a2fa:	e9 9f 00 00 00       	jmp    0x1000a39e
1000a2ff:	83 f8 01             	cmp    eax,0x1
1000a302:	0f 85 94 00 00 00    	jne    0x1000a39c
1000a308:	39 5d 18             	cmp    DWORD PTR [ebp+0x18],ebx
1000a30b:	75 08                	jne    0x1000a315
1000a30d:	a1 84 3c 0e 10       	mov    eax,ds:0x100e3c84
1000a312:	89 45 18             	mov    DWORD PTR [ebp+0x18],eax
1000a315:	53                   	push   ebx
1000a316:	53                   	push   ebx
1000a317:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000a31a:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000a31d:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
1000a320:	f7 d8                	neg    eax
1000a322:	1b c0                	sbb    eax,eax
1000a324:	83 e0 08             	and    eax,0x8
1000a327:	40                   	inc    eax
1000a328:	50                   	push   eax
1000a329:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1000a32c:	ff 15 1c c0 00 10    	call   DWORD PTR ds:0x1000c01c
1000a332:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
1000a335:	3b c3                	cmp    eax,ebx
1000a337:	74 63                	je     0x1000a39c
1000a339:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
1000a33c:	8d 3c 00             	lea    edi,[eax+eax*1]
1000a33f:	8b c7                	mov    eax,edi
1000a341:	83 c0 03             	add    eax,0x3
1000a344:	24 fc                	and    al,0xfc
1000a346:	e8 e5 e5 ff ff       	call   0x10008930
1000a34b:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
1000a34e:	8b f4                	mov    esi,esp
1000a350:	89 75 dc             	mov    DWORD PTR [ebp-0x24],esi
1000a353:	57                   	push   edi
1000a354:	53                   	push   ebx
1000a355:	56                   	push   esi
1000a356:	e8 45 e9 ff ff       	call   0x10008ca0
1000a35b:	83 c4 0c             	add    esp,0xc
1000a35e:	eb 0b                	jmp    0x1000a36b
1000a360:	6a 01                	push   0x1
1000a362:	58                   	pop    eax
1000a363:	c3                   	ret
1000a364:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
1000a367:	33 db                	xor    ebx,ebx
1000a369:	33 f6                	xor    esi,esi
1000a36b:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
1000a36f:	3b f3                	cmp    esi,ebx
1000a371:	74 29                	je     0x1000a39c
1000a373:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
1000a376:	56                   	push   esi
1000a377:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000a37a:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000a37d:	6a 01                	push   0x1
1000a37f:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1000a382:	ff 15 1c c0 00 10    	call   DWORD PTR ds:0x1000c01c
1000a388:	3b c3                	cmp    eax,ebx
1000a38a:	74 10                	je     0x1000a39c
1000a38c:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1000a38f:	50                   	push   eax
1000a390:	56                   	push   esi
1000a391:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000a394:	ff 15 14 c0 00 10    	call   DWORD PTR ds:0x1000c014
1000a39a:	eb 02                	jmp    0x1000a39e
1000a39c:	33 c0                	xor    eax,eax
1000a39e:	8d 65 cc             	lea    esp,[ebp-0x34]
1000a3a1:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
1000a3a4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1000a3ab:	5f                   	pop    edi
1000a3ac:	5e                   	pop    esi
1000a3ad:	5b                   	pop    ebx
1000a3ae:	c9                   	leave
1000a3af:	c3                   	ret
1000a3b0:	55                   	push   ebp
1000a3b1:	8b ec                	mov    ebp,esp
1000a3b3:	6a ff                	push   0xffffffff
1000a3b5:	68 60 c6 00 10       	push   0x1000c660
1000a3ba:	68 e0 62 00 10       	push   0x100062e0
1000a3bf:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1000a3c5:	50                   	push   eax
1000a3c6:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
1000a3cd:	83 ec 1c             	sub    esp,0x1c
1000a3d0:	53                   	push   ebx
1000a3d1:	56                   	push   esi
1000a3d2:	57                   	push   edi
1000a3d3:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
1000a3d6:	33 ff                	xor    edi,edi
1000a3d8:	39 3d a4 3c 0e 10    	cmp    DWORD PTR ds:0x100e3ca4,edi
1000a3de:	75 46                	jne    0x1000a426
1000a3e0:	57                   	push   edi
1000a3e1:	57                   	push   edi
1000a3e2:	6a 01                	push   0x1
1000a3e4:	5b                   	pop    ebx
1000a3e5:	53                   	push   ebx
1000a3e6:	68 48 c6 00 10       	push   0x1000c648
1000a3eb:	be 00 01 00 00       	mov    esi,0x100
1000a3f0:	56                   	push   esi
1000a3f1:	57                   	push   edi
1000a3f2:	ff 15 0c c0 00 10    	call   DWORD PTR ds:0x1000c00c
1000a3f8:	85 c0                	test   eax,eax
1000a3fa:	74 08                	je     0x1000a404
1000a3fc:	89 1d a4 3c 0e 10    	mov    DWORD PTR ds:0x100e3ca4,ebx
1000a402:	eb 22                	jmp    0x1000a426
1000a404:	57                   	push   edi
1000a405:	57                   	push   edi
1000a406:	53                   	push   ebx
1000a407:	68 44 c6 00 10       	push   0x1000c644
1000a40c:	56                   	push   esi
1000a40d:	57                   	push   edi
1000a40e:	ff 15 10 c0 00 10    	call   DWORD PTR ds:0x1000c010
1000a414:	85 c0                	test   eax,eax
1000a416:	0f 84 22 01 00 00    	je     0x1000a53e
1000a41c:	c7 05 a4 3c 0e 10 02 	mov    DWORD PTR ds:0x100e3ca4,0x2
1000a423:	00 00 00 
1000a426:	39 7d 14             	cmp    DWORD PTR [ebp+0x14],edi
1000a429:	7e 10                	jle    0x1000a43b
1000a42b:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1000a42e:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000a431:	e8 9e 01 00 00       	call   0x1000a5d4
1000a436:	59                   	pop    ecx
1000a437:	59                   	pop    ecx
1000a438:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
1000a43b:	a1 a4 3c 0e 10       	mov    eax,ds:0x100e3ca4
1000a440:	83 f8 02             	cmp    eax,0x2
1000a443:	75 1d                	jne    0x1000a462
1000a445:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
1000a448:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1000a44b:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1000a44e:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000a451:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000a454:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000a457:	ff 15 10 c0 00 10    	call   DWORD PTR ds:0x1000c010
1000a45d:	e9 de 00 00 00       	jmp    0x1000a540
1000a462:	83 f8 01             	cmp    eax,0x1
1000a465:	0f 85 d3 00 00 00    	jne    0x1000a53e
1000a46b:	39 7d 20             	cmp    DWORD PTR [ebp+0x20],edi
1000a46e:	75 08                	jne    0x1000a478
1000a470:	a1 84 3c 0e 10       	mov    eax,ds:0x100e3c84
1000a475:	89 45 20             	mov    DWORD PTR [ebp+0x20],eax
1000a478:	57                   	push   edi
1000a479:	57                   	push   edi
1000a47a:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1000a47d:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000a480:	8b 45 24             	mov    eax,DWORD PTR [ebp+0x24]
1000a483:	f7 d8                	neg    eax
1000a485:	1b c0                	sbb    eax,eax
1000a487:	83 e0 08             	and    eax,0x8
1000a48a:	40                   	inc    eax
1000a48b:	50                   	push   eax
1000a48c:	ff 75 20             	push   DWORD PTR [ebp+0x20]
1000a48f:	ff 15 1c c0 00 10    	call   DWORD PTR ds:0x1000c01c
1000a495:	8b d8                	mov    ebx,eax
1000a497:	89 5d e4             	mov    DWORD PTR [ebp-0x1c],ebx
1000a49a:	3b df                	cmp    ebx,edi
1000a49c:	0f 84 9c 00 00 00    	je     0x1000a53e
1000a4a2:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
1000a4a5:	8d 04 1b             	lea    eax,[ebx+ebx*1]
1000a4a8:	83 c0 03             	add    eax,0x3
1000a4ab:	24 fc                	and    al,0xfc
1000a4ad:	e8 7e e4 ff ff       	call   0x10008930
1000a4b2:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
1000a4b5:	8b c4                	mov    eax,esp
1000a4b7:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
1000a4ba:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
1000a4be:	eb 13                	jmp    0x1000a4d3
1000a4c0:	6a 01                	push   0x1
1000a4c2:	58                   	pop    eax
1000a4c3:	c3                   	ret
1000a4c4:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
1000a4c7:	33 ff                	xor    edi,edi
1000a4c9:	89 7d dc             	mov    DWORD PTR [ebp-0x24],edi
1000a4cc:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
1000a4d0:	8b 5d e4             	mov    ebx,DWORD PTR [ebp-0x1c]
1000a4d3:	39 7d dc             	cmp    DWORD PTR [ebp-0x24],edi
1000a4d6:	74 66                	je     0x1000a53e
1000a4d8:	53                   	push   ebx
1000a4d9:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
1000a4dc:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1000a4df:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1000a4e2:	6a 01                	push   0x1
1000a4e4:	ff 75 20             	push   DWORD PTR [ebp+0x20]
1000a4e7:	ff 15 1c c0 00 10    	call   DWORD PTR ds:0x1000c01c
1000a4ed:	85 c0                	test   eax,eax
1000a4ef:	74 4d                	je     0x1000a53e
1000a4f1:	57                   	push   edi
1000a4f2:	57                   	push   edi
1000a4f3:	53                   	push   ebx
1000a4f4:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
1000a4f7:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000a4fa:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000a4fd:	ff 15 0c c0 00 10    	call   DWORD PTR ds:0x1000c00c
1000a503:	8b f0                	mov    esi,eax
1000a505:	89 75 d8             	mov    DWORD PTR [ebp-0x28],esi
1000a508:	3b f7                	cmp    esi,edi
1000a50a:	74 32                	je     0x1000a53e
1000a50c:	f6 45 0d 04          	test   BYTE PTR [ebp+0xd],0x4
1000a510:	74 40                	je     0x1000a552
1000a512:	39 7d 1c             	cmp    DWORD PTR [ebp+0x1c],edi
1000a515:	0f 84 b2 00 00 00    	je     0x1000a5cd
1000a51b:	3b 75 1c             	cmp    esi,DWORD PTR [ebp+0x1c]
1000a51e:	7f 1e                	jg     0x1000a53e
1000a520:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
1000a523:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1000a526:	53                   	push   ebx
1000a527:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
1000a52a:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000a52d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000a530:	ff 15 0c c0 00 10    	call   DWORD PTR ds:0x1000c00c
1000a536:	85 c0                	test   eax,eax
1000a538:	0f 85 8f 00 00 00    	jne    0x1000a5cd
1000a53e:	33 c0                	xor    eax,eax
1000a540:	8d 65 c8             	lea    esp,[ebp-0x38]
1000a543:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
1000a546:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1000a54d:	5f                   	pop    edi
1000a54e:	5e                   	pop    esi
1000a54f:	5b                   	pop    ebx
1000a550:	c9                   	leave
1000a551:	c3                   	ret
1000a552:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
1000a559:	8d 04 36             	lea    eax,[esi+esi*1]
1000a55c:	83 c0 03             	add    eax,0x3
1000a55f:	24 fc                	and    al,0xfc
1000a561:	e8 ca e3 ff ff       	call   0x10008930
1000a566:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
1000a569:	8b dc                	mov    ebx,esp
1000a56b:	89 5d e0             	mov    DWORD PTR [ebp-0x20],ebx
1000a56e:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
1000a572:	eb 12                	jmp    0x1000a586
1000a574:	6a 01                	push   0x1
1000a576:	58                   	pop    eax
1000a577:	c3                   	ret
1000a578:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
1000a57b:	33 ff                	xor    edi,edi
1000a57d:	33 db                	xor    ebx,ebx
1000a57f:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
1000a583:	8b 75 d8             	mov    esi,DWORD PTR [ebp-0x28]
1000a586:	3b df                	cmp    ebx,edi
1000a588:	74 b4                	je     0x1000a53e
1000a58a:	56                   	push   esi
1000a58b:	53                   	push   ebx
1000a58c:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
1000a58f:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
1000a592:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000a595:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000a598:	ff 15 0c c0 00 10    	call   DWORD PTR ds:0x1000c00c
1000a59e:	85 c0                	test   eax,eax
1000a5a0:	74 9c                	je     0x1000a53e
1000a5a2:	39 7d 1c             	cmp    DWORD PTR [ebp+0x1c],edi
1000a5a5:	57                   	push   edi
1000a5a6:	57                   	push   edi
1000a5a7:	75 04                	jne    0x1000a5ad
1000a5a9:	57                   	push   edi
1000a5aa:	57                   	push   edi
1000a5ab:	eb 06                	jmp    0x1000a5b3
1000a5ad:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
1000a5b0:	ff 75 18             	push   DWORD PTR [ebp+0x18]
1000a5b3:	56                   	push   esi
1000a5b4:	53                   	push   ebx
1000a5b5:	68 20 02 00 00       	push   0x220
1000a5ba:	ff 75 20             	push   DWORD PTR [ebp+0x20]
1000a5bd:	ff 15 58 c0 00 10    	call   DWORD PTR ds:0x1000c058
1000a5c3:	8b f0                	mov    esi,eax
1000a5c5:	3b f7                	cmp    esi,edi
1000a5c7:	0f 84 71 ff ff ff    	je     0x1000a53e
1000a5cd:	8b c6                	mov    eax,esi
1000a5cf:	e9 6c ff ff ff       	jmp    0x1000a540
1000a5d4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
1000a5d8:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000a5dc:	85 d2                	test   edx,edx
1000a5de:	56                   	push   esi
1000a5df:	8d 4a ff             	lea    ecx,[edx-0x1]
1000a5e2:	74 0d                	je     0x1000a5f1
1000a5e4:	80 38 00             	cmp    BYTE PTR [eax],0x0
1000a5e7:	74 08                	je     0x1000a5f1
1000a5e9:	40                   	inc    eax
1000a5ea:	8b f1                	mov    esi,ecx
1000a5ec:	49                   	dec    ecx
1000a5ed:	85 f6                	test   esi,esi
1000a5ef:	75 f3                	jne    0x1000a5e4
1000a5f1:	80 38 00             	cmp    BYTE PTR [eax],0x0
1000a5f4:	5e                   	pop    esi
1000a5f5:	75 05                	jne    0x1000a5fc
1000a5f7:	2b 44 24 04          	sub    eax,DWORD PTR [esp+0x4]
1000a5fb:	c3                   	ret
1000a5fc:	8b c2                	mov    eax,edx
1000a5fe:	c3                   	ret
1000a5ff:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1000a603:	56                   	push   esi
1000a604:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
1000a608:	33 c0                	xor    eax,eax
1000a60a:	8d 0c 32             	lea    ecx,[edx+esi*1]
1000a60d:	3b ca                	cmp    ecx,edx
1000a60f:	72 04                	jb     0x1000a615
1000a611:	3b ce                	cmp    ecx,esi
1000a613:	73 03                	jae    0x1000a618
1000a615:	6a 01                	push   0x1
1000a617:	58                   	pop    eax
1000a618:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1000a61c:	5e                   	pop    esi
1000a61d:	89 0a                	mov    DWORD PTR [edx],ecx
1000a61f:	c3                   	ret
1000a620:	56                   	push   esi
1000a621:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
1000a625:	57                   	push   edi
1000a626:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1000a62a:	56                   	push   esi
1000a62b:	ff 37                	push   DWORD PTR [edi]
1000a62d:	ff 36                	push   DWORD PTR [esi]
1000a62f:	e8 cb ff ff ff       	call   0x1000a5ff
1000a634:	83 c4 0c             	add    esp,0xc
1000a637:	85 c0                	test   eax,eax
1000a639:	74 17                	je     0x1000a652
1000a63b:	8d 46 04             	lea    eax,[esi+0x4]
1000a63e:	50                   	push   eax
1000a63f:	6a 01                	push   0x1
1000a641:	ff 30                	push   DWORD PTR [eax]
1000a643:	e8 b7 ff ff ff       	call   0x1000a5ff
1000a648:	83 c4 0c             	add    esp,0xc
1000a64b:	85 c0                	test   eax,eax
1000a64d:	74 03                	je     0x1000a652
1000a64f:	ff 46 08             	inc    DWORD PTR [esi+0x8]
1000a652:	8d 46 04             	lea    eax,[esi+0x4]
1000a655:	50                   	push   eax
1000a656:	ff 77 04             	push   DWORD PTR [edi+0x4]
1000a659:	ff 30                	push   DWORD PTR [eax]
1000a65b:	e8 9f ff ff ff       	call   0x1000a5ff
1000a660:	83 c4 0c             	add    esp,0xc
1000a663:	85 c0                	test   eax,eax
1000a665:	74 03                	je     0x1000a66a
1000a667:	ff 46 08             	inc    DWORD PTR [esi+0x8]
1000a66a:	8d 46 08             	lea    eax,[esi+0x8]
1000a66d:	50                   	push   eax
1000a66e:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000a671:	ff 30                	push   DWORD PTR [eax]
1000a673:	e8 87 ff ff ff       	call   0x1000a5ff
1000a678:	83 c4 0c             	add    esp,0xc
1000a67b:	5f                   	pop    edi
1000a67c:	5e                   	pop    esi
1000a67d:	c3                   	ret
1000a67e:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000a682:	56                   	push   esi
1000a683:	57                   	push   edi
1000a684:	8b 30                	mov    esi,DWORD PTR [eax]
1000a686:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
1000a689:	8b ce                	mov    ecx,esi
1000a68b:	03 f6                	add    esi,esi
1000a68d:	89 30                	mov    DWORD PTR [eax],esi
1000a68f:	8d 34 3f             	lea    esi,[edi+edi*1]
1000a692:	c1 e9 1f             	shr    ecx,0x1f
1000a695:	0b f1                	or     esi,ecx
1000a697:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
1000a69a:	8b d7                	mov    edx,edi
1000a69c:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000a69f:	c1 ea 1f             	shr    edx,0x1f
1000a6a2:	d1 e1                	shl    ecx,1
1000a6a4:	0b ca                	or     ecx,edx
1000a6a6:	5f                   	pop    edi
1000a6a7:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
1000a6aa:	5e                   	pop    esi
1000a6ab:	c3                   	ret
1000a6ac:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000a6b0:	56                   	push   esi
1000a6b1:	57                   	push   edi
1000a6b2:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
1000a6b5:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1000a6b8:	8b f2                	mov    esi,edx
1000a6ba:	8b f9                	mov    edi,ecx
1000a6bc:	c1 e6 1f             	shl    esi,0x1f
1000a6bf:	d1 e9                	shr    ecx,1
1000a6c1:	0b ce                	or     ecx,esi
1000a6c3:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
1000a6c6:	8b 08                	mov    ecx,DWORD PTR [eax]
1000a6c8:	c1 e7 1f             	shl    edi,0x1f
1000a6cb:	d1 e9                	shr    ecx,1
1000a6cd:	d1 ea                	shr    edx,1
1000a6cf:	0b cf                	or     ecx,edi
1000a6d1:	5f                   	pop    edi
1000a6d2:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
1000a6d5:	89 08                	mov    DWORD PTR [eax],ecx
1000a6d7:	5e                   	pop    esi
1000a6d8:	c3                   	ret
1000a6d9:	55                   	push   ebp
1000a6da:	8b ec                	mov    ebp,esp
1000a6dc:	83 ec 10             	sub    esp,0x10
1000a6df:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000a6e2:	53                   	push   ebx
1000a6e3:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
1000a6e6:	33 d2                	xor    edx,edx
1000a6e8:	3b c2                	cmp    eax,edx
1000a6ea:	56                   	push   esi
1000a6eb:	c7 45 fc 4e 40 00 00 	mov    DWORD PTR [ebp-0x4],0x404e
1000a6f2:	89 13                	mov    DWORD PTR [ebx],edx
1000a6f4:	89 53 04             	mov    DWORD PTR [ebx+0x4],edx
1000a6f7:	89 53 08             	mov    DWORD PTR [ebx+0x8],edx
1000a6fa:	76 51                	jbe    0x1000a74d
1000a6fc:	57                   	push   edi
1000a6fd:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
1000a700:	8b f3                	mov    esi,ebx
1000a702:	8d 7d f0             	lea    edi,[ebp-0x10]
1000a705:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000a706:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000a707:	53                   	push   ebx
1000a708:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000a709:	e8 70 ff ff ff       	call   0x1000a67e
1000a70e:	53                   	push   ebx
1000a70f:	e8 6a ff ff ff       	call   0x1000a67e
1000a714:	8d 45 f0             	lea    eax,[ebp-0x10]
1000a717:	50                   	push   eax
1000a718:	53                   	push   ebx
1000a719:	e8 02 ff ff ff       	call   0x1000a620
1000a71e:	53                   	push   ebx
1000a71f:	e8 5a ff ff ff       	call   0x1000a67e
1000a724:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000a727:	83 65 f4 00          	and    DWORD PTR [ebp-0xc],0x0
1000a72b:	83 65 f8 00          	and    DWORD PTR [ebp-0x8],0x0
1000a72f:	0f be 00             	movsx  eax,BYTE PTR [eax]
1000a732:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1000a735:	8d 45 f0             	lea    eax,[ebp-0x10]
1000a738:	50                   	push   eax
1000a739:	53                   	push   ebx
1000a73a:	e8 e1 fe ff ff       	call   0x1000a620
1000a73f:	83 c4 1c             	add    esp,0x1c
1000a742:	ff 45 08             	inc    DWORD PTR [ebp+0x8]
1000a745:	ff 4d 10             	dec    DWORD PTR [ebp+0x10]
1000a748:	75 b6                	jne    0x1000a700
1000a74a:	33 d2                	xor    edx,edx
1000a74c:	5f                   	pop    edi
1000a74d:	39 53 08             	cmp    DWORD PTR [ebx+0x8],edx
1000a750:	75 28                	jne    0x1000a77a
1000a752:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1000a755:	8b c1                	mov    eax,ecx
1000a757:	c1 e8 10             	shr    eax,0x10
1000a75a:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
1000a75d:	8b 03                	mov    eax,DWORD PTR [ebx]
1000a75f:	8b f0                	mov    esi,eax
1000a761:	c1 ee 10             	shr    esi,0x10
1000a764:	c1 e1 10             	shl    ecx,0x10
1000a767:	0b f1                	or     esi,ecx
1000a769:	c1 e0 10             	shl    eax,0x10
1000a76c:	81 45 fc f0 ff 00 00 	add    DWORD PTR [ebp-0x4],0xfff0
1000a773:	89 73 04             	mov    DWORD PTR [ebx+0x4],esi
1000a776:	89 03                	mov    DWORD PTR [ebx],eax
1000a778:	eb d3                	jmp    0x1000a74d
1000a77a:	be 00 80 00 00       	mov    esi,0x8000
1000a77f:	85 73 08             	test   DWORD PTR [ebx+0x8],esi
1000a782:	75 10                	jne    0x1000a794
1000a784:	53                   	push   ebx
1000a785:	e8 f4 fe ff ff       	call   0x1000a67e
1000a78a:	81 45 fc ff ff 00 00 	add    DWORD PTR [ebp-0x4],0xffff
1000a791:	59                   	pop    ecx
1000a792:	eb eb                	jmp    0x1000a77f
1000a794:	66 8b 45 fc          	mov    ax,WORD PTR [ebp-0x4]
1000a798:	5e                   	pop    esi
1000a799:	66 89 43 0a          	mov    WORD PTR [ebx+0xa],ax
1000a79d:	5b                   	pop    ebx
1000a79e:	c9                   	leave
1000a79f:	c3                   	ret
1000a7a0:	55                   	push   ebp
1000a7a1:	8b ec                	mov    ebp,esp
1000a7a3:	83 ec 5c             	sub    esp,0x5c
1000a7a6:	53                   	push   ebx
1000a7a7:	56                   	push   esi
1000a7a8:	57                   	push   edi
1000a7a9:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1000a7ac:	8d 45 a4             	lea    eax,[ebp-0x5c]
1000a7af:	6a 01                	push   0x1
1000a7b1:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
1000a7b4:	33 c0                	xor    eax,eax
1000a7b6:	5a                   	pop    edx
1000a7b7:	89 45 d8             	mov    DWORD PTR [ebp-0x28],eax
1000a7ba:	89 55 e8             	mov    DWORD PTR [ebp-0x18],edx
1000a7bd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1000a7c0:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1000a7c3:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
1000a7c6:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
1000a7c9:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
1000a7cc:	89 45 d0             	mov    DWORD PTR [ebp-0x30],eax
1000a7cf:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
1000a7d2:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1000a7d5:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
1000a7d8:	89 7d 10             	mov    DWORD PTR [ebp+0x10],edi
1000a7db:	8a 0f                	mov    cl,BYTE PTR [edi]
1000a7dd:	80 f9 20             	cmp    cl,0x20
1000a7e0:	74 0f                	je     0x1000a7f1
1000a7e2:	80 f9 09             	cmp    cl,0x9
1000a7e5:	74 0a                	je     0x1000a7f1
1000a7e7:	80 f9 0a             	cmp    cl,0xa
1000a7ea:	74 05                	je     0x1000a7f1
1000a7ec:	80 f9 0d             	cmp    cl,0xd
1000a7ef:	75 03                	jne    0x1000a7f4
1000a7f1:	47                   	inc    edi
1000a7f2:	eb e7                	jmp    0x1000a7db
1000a7f4:	6a 04                	push   0x4
1000a7f6:	5e                   	pop    esi
1000a7f7:	8a 1f                	mov    bl,BYTE PTR [edi]
1000a7f9:	47                   	inc    edi
1000a7fa:	83 f8 0b             	cmp    eax,0xb
1000a7fd:	0f 87 77 02 00 00    	ja     0x1000aa7a
1000a803:	ff 24 85 41 ac 00 10 	jmp    DWORD PTR [eax*4+0x1000ac41]
1000a80a:	80 fb 31             	cmp    bl,0x31
1000a80d:	7c 0c                	jl     0x1000a81b
1000a80f:	80 fb 39             	cmp    bl,0x39
1000a812:	7f 07                	jg     0x1000a81b
1000a814:	6a 03                	push   0x3
1000a816:	e9 1d 02 00 00       	jmp    0x1000aa38
1000a81b:	3a 1d f4 10 01 10    	cmp    bl,BYTE PTR ds:0x100110f4
1000a821:	75 07                	jne    0x1000a82a
1000a823:	6a 05                	push   0x5
1000a825:	e9 46 02 00 00       	jmp    0x1000aa70
1000a82a:	0f be c3             	movsx  eax,bl
1000a82d:	83 e8 2b             	sub    eax,0x2b
1000a830:	74 1e                	je     0x1000a850
1000a832:	48                   	dec    eax
1000a833:	48                   	dec    eax
1000a834:	74 0e                	je     0x1000a844
1000a836:	83 e8 03             	sub    eax,0x3
1000a839:	0f 85 d4 02 00 00    	jne    0x1000ab13
1000a83f:	e9 8f 00 00 00       	jmp    0x1000a8d3
1000a844:	6a 02                	push   0x2
1000a846:	c7 45 d8 00 80 00 00 	mov    DWORD PTR [ebp-0x28],0x8000
1000a84d:	58                   	pop    eax
1000a84e:	eb a7                	jmp    0x1000a7f7
1000a850:	83 65 d8 00          	and    DWORD PTR [ebp-0x28],0x0
1000a854:	6a 02                	push   0x2
1000a856:	58                   	pop    eax
1000a857:	eb 9e                	jmp    0x1000a7f7
1000a859:	80 fb 31             	cmp    bl,0x31
1000a85c:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
1000a85f:	7c 05                	jl     0x1000a866
1000a861:	80 fb 39             	cmp    bl,0x39
1000a864:	7e ae                	jle    0x1000a814
1000a866:	3a 1d f4 10 01 10    	cmp    bl,BYTE PTR ds:0x100110f4
1000a86c:	0f 84 bc 00 00 00    	je     0x1000a92e
1000a872:	80 fb 2b             	cmp    bl,0x2b
1000a875:	74 31                	je     0x1000a8a8
1000a877:	80 fb 2d             	cmp    bl,0x2d
1000a87a:	74 2c                	je     0x1000a8a8
1000a87c:	80 fb 30             	cmp    bl,0x30
1000a87f:	74 52                	je     0x1000a8d3
1000a881:	80 fb 43             	cmp    bl,0x43
1000a884:	0f 8e 89 02 00 00    	jle    0x1000ab13
1000a88a:	80 fb 45             	cmp    bl,0x45
1000a88d:	7e 12                	jle    0x1000a8a1
1000a88f:	80 fb 63             	cmp    bl,0x63
1000a892:	0f 8e 7b 02 00 00    	jle    0x1000ab13
1000a898:	80 fb 65             	cmp    bl,0x65
1000a89b:	0f 8f 72 02 00 00    	jg     0x1000ab13
1000a8a1:	6a 06                	push   0x6
1000a8a3:	e9 c8 01 00 00       	jmp    0x1000aa70
1000a8a8:	4f                   	dec    edi
1000a8a9:	6a 0b                	push   0xb
1000a8ab:	e9 c0 01 00 00       	jmp    0x1000aa70
1000a8b0:	80 fb 31             	cmp    bl,0x31
1000a8b3:	7c 09                	jl     0x1000a8be
1000a8b5:	80 fb 39             	cmp    bl,0x39
1000a8b8:	0f 8e 56 ff ff ff    	jle    0x1000a814
1000a8be:	3a 1d f4 10 01 10    	cmp    bl,BYTE PTR ds:0x100110f4
1000a8c4:	0f 84 59 ff ff ff    	je     0x1000a823
1000a8ca:	80 fb 30             	cmp    bl,0x30
1000a8cd:	0f 85 b5 01 00 00    	jne    0x1000aa88
1000a8d3:	8b c2                	mov    eax,edx
1000a8d5:	e9 1d ff ff ff       	jmp    0x1000a7f7
1000a8da:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
1000a8dd:	39 15 f0 10 01 10    	cmp    DWORD PTR ds:0x100110f0,edx
1000a8e3:	7e 11                	jle    0x1000a8f6
1000a8e5:	0f b6 c3             	movzx  eax,bl
1000a8e8:	56                   	push   esi
1000a8e9:	50                   	push   eax
1000a8ea:	e8 9c e7 ff ff       	call   0x1000908b
1000a8ef:	59                   	pop    ecx
1000a8f0:	59                   	pop    ecx
1000a8f1:	6a 01                	push   0x1
1000a8f3:	5a                   	pop    edx
1000a8f4:	eb 0e                	jmp    0x1000a904
1000a8f6:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
1000a8fc:	0f b6 c3             	movzx  eax,bl
1000a8ff:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
1000a902:	23 c6                	and    eax,esi
1000a904:	85 c0                	test   eax,eax
1000a906:	74 1e                	je     0x1000a926
1000a908:	83 7d fc 19          	cmp    DWORD PTR [ebp-0x4],0x19
1000a90c:	73 10                	jae    0x1000a91e
1000a90e:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1000a911:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
1000a914:	80 eb 30             	sub    bl,0x30
1000a917:	ff 45 f4             	inc    DWORD PTR [ebp-0xc]
1000a91a:	88 18                	mov    BYTE PTR [eax],bl
1000a91c:	eb 03                	jmp    0x1000a921
1000a91e:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
1000a921:	8a 1f                	mov    bl,BYTE PTR [edi]
1000a923:	47                   	inc    edi
1000a924:	eb b7                	jmp    0x1000a8dd
1000a926:	3a 1d f4 10 01 10    	cmp    bl,BYTE PTR ds:0x100110f4
1000a92c:	75 67                	jne    0x1000a995
1000a92e:	8b c6                	mov    eax,esi
1000a930:	e9 c2 fe ff ff       	jmp    0x1000a7f7
1000a935:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
1000a939:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
1000a93c:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
1000a93f:	75 0d                	jne    0x1000a94e
1000a941:	80 fb 30             	cmp    bl,0x30
1000a944:	75 08                	jne    0x1000a94e
1000a946:	ff 4d f8             	dec    DWORD PTR [ebp-0x8]
1000a949:	8a 1f                	mov    bl,BYTE PTR [edi]
1000a94b:	47                   	inc    edi
1000a94c:	eb f3                	jmp    0x1000a941
1000a94e:	39 15 f0 10 01 10    	cmp    DWORD PTR ds:0x100110f0,edx
1000a954:	7e 11                	jle    0x1000a967
1000a956:	0f b6 c3             	movzx  eax,bl
1000a959:	56                   	push   esi
1000a95a:	50                   	push   eax
1000a95b:	e8 2b e7 ff ff       	call   0x1000908b
1000a960:	59                   	pop    ecx
1000a961:	59                   	pop    ecx
1000a962:	6a 01                	push   0x1
1000a964:	5a                   	pop    edx
1000a965:	eb 0e                	jmp    0x1000a975
1000a967:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
1000a96d:	0f b6 c3             	movzx  eax,bl
1000a970:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
1000a973:	23 c6                	and    eax,esi
1000a975:	85 c0                	test   eax,eax
1000a977:	74 1c                	je     0x1000a995
1000a979:	83 7d fc 19          	cmp    DWORD PTR [ebp-0x4],0x19
1000a97d:	73 11                	jae    0x1000a990
1000a97f:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1000a982:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
1000a985:	80 eb 30             	sub    bl,0x30
1000a988:	ff 45 f4             	inc    DWORD PTR [ebp-0xc]
1000a98b:	ff 4d f8             	dec    DWORD PTR [ebp-0x8]
1000a98e:	88 18                	mov    BYTE PTR [eax],bl
1000a990:	8a 1f                	mov    bl,BYTE PTR [edi]
1000a992:	47                   	inc    edi
1000a993:	eb b9                	jmp    0x1000a94e
1000a995:	80 fb 2b             	cmp    bl,0x2b
1000a998:	0f 84 0a ff ff ff    	je     0x1000a8a8
1000a99e:	80 fb 2d             	cmp    bl,0x2d
1000a9a1:	0f 84 01 ff ff ff    	je     0x1000a8a8
1000a9a7:	e9 d5 fe ff ff       	jmp    0x1000a881
1000a9ac:	39 15 f0 10 01 10    	cmp    DWORD PTR ds:0x100110f0,edx
1000a9b2:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
1000a9b5:	7e 11                	jle    0x1000a9c8
1000a9b7:	0f b6 c3             	movzx  eax,bl
1000a9ba:	56                   	push   esi
1000a9bb:	50                   	push   eax
1000a9bc:	e8 ca e6 ff ff       	call   0x1000908b
1000a9c1:	59                   	pop    ecx
1000a9c2:	59                   	pop    ecx
1000a9c3:	6a 01                	push   0x1
1000a9c5:	5a                   	pop    edx
1000a9c6:	eb 0e                	jmp    0x1000a9d6
1000a9c8:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
1000a9ce:	0f b6 c3             	movzx  eax,bl
1000a9d1:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
1000a9d4:	23 c6                	and    eax,esi
1000a9d6:	85 c0                	test   eax,eax
1000a9d8:	0f 84 aa 00 00 00    	je     0x1000aa88
1000a9de:	8b c6                	mov    eax,esi
1000a9e0:	eb 57                	jmp    0x1000aa39
1000a9e2:	8d 4f fe             	lea    ecx,[edi-0x2]
1000a9e5:	80 fb 31             	cmp    bl,0x31
1000a9e8:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
1000a9eb:	7c 05                	jl     0x1000a9f2
1000a9ed:	80 fb 39             	cmp    bl,0x39
1000a9f0:	7e 44                	jle    0x1000aa36
1000a9f2:	0f be c3             	movsx  eax,bl
1000a9f5:	83 e8 2b             	sub    eax,0x2b
1000a9f8:	74 74                	je     0x1000aa6e
1000a9fa:	48                   	dec    eax
1000a9fb:	48                   	dec    eax
1000a9fc:	74 64                	je     0x1000aa62
1000a9fe:	83 e8 03             	sub    eax,0x3
1000aa01:	0f 85 0f 01 00 00    	jne    0x1000ab16
1000aa07:	6a 08                	push   0x8
1000aa09:	eb 65                	jmp    0x1000aa70
1000aa0b:	89 55 e0             	mov    DWORD PTR [ebp-0x20],edx
1000aa0e:	80 fb 30             	cmp    bl,0x30
1000aa11:	75 05                	jne    0x1000aa18
1000aa13:	8a 1f                	mov    bl,BYTE PTR [edi]
1000aa15:	47                   	inc    edi
1000aa16:	eb f6                	jmp    0x1000aa0e
1000aa18:	80 fb 31             	cmp    bl,0x31
1000aa1b:	0f 8c f2 00 00 00    	jl     0x1000ab13
1000aa21:	80 fb 39             	cmp    bl,0x39
1000aa24:	0f 8f e9 00 00 00    	jg     0x1000ab13
1000aa2a:	eb 0a                	jmp    0x1000aa36
1000aa2c:	80 fb 31             	cmp    bl,0x31
1000aa2f:	7c 0e                	jl     0x1000aa3f
1000aa31:	80 fb 39             	cmp    bl,0x39
1000aa34:	7f 09                	jg     0x1000aa3f
1000aa36:	6a 09                	push   0x9
1000aa38:	58                   	pop    eax
1000aa39:	4f                   	dec    edi
1000aa3a:	e9 b8 fd ff ff       	jmp    0x1000a7f7
1000aa3f:	80 fb 30             	cmp    bl,0x30
1000aa42:	75 44                	jne    0x1000aa88
1000aa44:	eb c1                	jmp    0x1000aa07
1000aa46:	83 7d 20 00          	cmp    DWORD PTR [ebp+0x20],0x0
1000aa4a:	74 2a                	je     0x1000aa76
1000aa4c:	0f be c3             	movsx  eax,bl
1000aa4f:	8d 4f ff             	lea    ecx,[edi-0x1]
1000aa52:	83 e8 2b             	sub    eax,0x2b
1000aa55:	89 4d 10             	mov    DWORD PTR [ebp+0x10],ecx
1000aa58:	74 14                	je     0x1000aa6e
1000aa5a:	48                   	dec    eax
1000aa5b:	48                   	dec    eax
1000aa5c:	0f 85 b4 00 00 00    	jne    0x1000ab16
1000aa62:	83 4d e8 ff          	or     DWORD PTR [ebp-0x18],0xffffffff
1000aa66:	6a 07                	push   0x7
1000aa68:	58                   	pop    eax
1000aa69:	e9 89 fd ff ff       	jmp    0x1000a7f7
1000aa6e:	6a 07                	push   0x7
1000aa70:	58                   	pop    eax
1000aa71:	e9 81 fd ff ff       	jmp    0x1000a7f7
1000aa76:	6a 0a                	push   0xa
1000aa78:	4f                   	dec    edi
1000aa79:	58                   	pop    eax
1000aa7a:	83 f8 0a             	cmp    eax,0xa
1000aa7d:	0f 84 95 00 00 00    	je     0x1000ab18
1000aa83:	e9 6f fd ff ff       	jmp    0x1000a7f7
1000aa88:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1000aa8b:	e9 88 00 00 00       	jmp    0x1000ab18
1000aa90:	c7 45 e0 01 00 00 00 	mov    DWORD PTR [ebp-0x20],0x1
1000aa97:	33 f6                	xor    esi,esi
1000aa99:	83 3d f0 10 01 10 01 	cmp    DWORD PTR ds:0x100110f0,0x1
1000aaa0:	7e 0f                	jle    0x1000aab1
1000aaa2:	0f b6 c3             	movzx  eax,bl
1000aaa5:	6a 04                	push   0x4
1000aaa7:	50                   	push   eax
1000aaa8:	e8 de e5 ff ff       	call   0x1000908b
1000aaad:	59                   	pop    ecx
1000aaae:	59                   	pop    ecx
1000aaaf:	eb 0f                	jmp    0x1000aac0
1000aab1:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
1000aab7:	0f b6 c3             	movzx  eax,bl
1000aaba:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
1000aabd:	83 e0 04             	and    eax,0x4
1000aac0:	85 c0                	test   eax,eax
1000aac2:	74 1c                	je     0x1000aae0
1000aac4:	0f be cb             	movsx  ecx,bl
1000aac7:	8d 04 b6             	lea    eax,[esi+esi*4]
1000aaca:	8d 74 41 d0          	lea    esi,[ecx+eax*2-0x30]
1000aace:	81 fe 50 14 00 00    	cmp    esi,0x1450
1000aad4:	7f 05                	jg     0x1000aadb
1000aad6:	8a 1f                	mov    bl,BYTE PTR [edi]
1000aad8:	47                   	inc    edi
1000aad9:	eb be                	jmp    0x1000aa99
1000aadb:	be 51 14 00 00       	mov    esi,0x1451
1000aae0:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
1000aae3:	83 3d f0 10 01 10 01 	cmp    DWORD PTR ds:0x100110f0,0x1
1000aaea:	7e 0f                	jle    0x1000aafb
1000aaec:	0f b6 c3             	movzx  eax,bl
1000aaef:	6a 04                	push   0x4
1000aaf1:	50                   	push   eax
1000aaf2:	e8 94 e5 ff ff       	call   0x1000908b
1000aaf7:	59                   	pop    ecx
1000aaf8:	59                   	pop    ecx
1000aaf9:	eb 0f                	jmp    0x1000ab0a
1000aafb:	8b 0d e0 0e 01 10    	mov    ecx,DWORD PTR ds:0x10010ee0
1000ab01:	0f b6 c3             	movzx  eax,bl
1000ab04:	8a 04 41             	mov    al,BYTE PTR [ecx+eax*2]
1000ab07:	83 e0 04             	and    eax,0x4
1000ab0a:	85 c0                	test   eax,eax
1000ab0c:	74 05                	je     0x1000ab13
1000ab0e:	8a 1f                	mov    bl,BYTE PTR [edi]
1000ab10:	47                   	inc    edi
1000ab11:	eb d0                	jmp    0x1000aae3
1000ab13:	4f                   	dec    edi
1000ab14:	eb 02                	jmp    0x1000ab18
1000ab16:	8b f9                	mov    edi,ecx
1000ab18:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000ab1b:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
1000ab1f:	89 38                	mov    DWORD PTR [eax],edi
1000ab21:	0f 84 d9 00 00 00    	je     0x1000ac00
1000ab27:	6a 18                	push   0x18
1000ab29:	58                   	pop    eax
1000ab2a:	39 45 fc             	cmp    DWORD PTR [ebp-0x4],eax
1000ab2d:	76 15                	jbe    0x1000ab44
1000ab2f:	80 7d bb 05          	cmp    BYTE PTR [ebp-0x45],0x5
1000ab33:	7c 03                	jl     0x1000ab38
1000ab35:	fe 45 bb             	inc    BYTE PTR [ebp-0x45]
1000ab38:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1000ab3b:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1000ab3e:	48                   	dec    eax
1000ab3f:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
1000ab42:	eb 03                	jmp    0x1000ab47
1000ab44:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1000ab47:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
1000ab4b:	0f 86 a5 00 00 00    	jbe    0x1000abf6
1000ab51:	48                   	dec    eax
1000ab52:	80 38 00             	cmp    BYTE PTR [eax],0x0
1000ab55:	75 08                	jne    0x1000ab5f
1000ab57:	ff 4d fc             	dec    DWORD PTR [ebp-0x4]
1000ab5a:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
1000ab5d:	eb f2                	jmp    0x1000ab51
1000ab5f:	8d 45 c0             	lea    eax,[ebp-0x40]
1000ab62:	50                   	push   eax
1000ab63:	8d 45 a4             	lea    eax,[ebp-0x5c]
1000ab66:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
1000ab69:	50                   	push   eax
1000ab6a:	e8 6a fb ff ff       	call   0x1000a6d9
1000ab6f:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
1000ab72:	33 c9                	xor    ecx,ecx
1000ab74:	83 c4 0c             	add    esp,0xc
1000ab77:	39 4d e8             	cmp    DWORD PTR [ebp-0x18],ecx
1000ab7a:	7d 02                	jge    0x1000ab7e
1000ab7c:	f7 d8                	neg    eax
1000ab7e:	03 45 f8             	add    eax,DWORD PTR [ebp-0x8]
1000ab81:	39 4d e0             	cmp    DWORD PTR [ebp-0x20],ecx
1000ab84:	75 03                	jne    0x1000ab89
1000ab86:	03 45 18             	add    eax,DWORD PTR [ebp+0x18]
1000ab89:	39 4d dc             	cmp    DWORD PTR [ebp-0x24],ecx
1000ab8c:	75 03                	jne    0x1000ab91
1000ab8e:	2b 45 1c             	sub    eax,DWORD PTR [ebp+0x1c]
1000ab91:	3d 50 14 00 00       	cmp    eax,0x1450
1000ab96:	7e 30                	jle    0x1000abc8
1000ab98:	c7 45 d4 01 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x1
1000ab9f:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
1000aba2:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
1000aba5:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000aba8:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
1000abab:	83 7d d4 00          	cmp    DWORD PTR [ebp-0x2c],0x0
1000abaf:	74 60                	je     0x1000ac11
1000abb1:	33 db                	xor    ebx,ebx
1000abb3:	b8 ff 7f 00 00       	mov    eax,0x7fff
1000abb8:	be 00 00 00 80       	mov    esi,0x80000000
1000abbd:	33 d2                	xor    edx,edx
1000abbf:	c7 45 ec 02 00 00 00 	mov    DWORD PTR [ebp-0x14],0x2
1000abc6:	eb 5e                	jmp    0x1000ac26
1000abc8:	3d b0 eb ff ff       	cmp    eax,0xffffebb0
1000abcd:	7d 09                	jge    0x1000abd8
1000abcf:	c7 45 d0 01 00 00 00 	mov    DWORD PTR [ebp-0x30],0x1
1000abd6:	eb c7                	jmp    0x1000ab9f
1000abd8:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1000abdb:	50                   	push   eax
1000abdc:	8d 45 c0             	lea    eax,[ebp-0x40]
1000abdf:	50                   	push   eax
1000abe0:	e8 b5 06 00 00       	call   0x1000b29a
1000abe5:	8b 55 c0             	mov    edx,DWORD PTR [ebp-0x40]
1000abe8:	8b 5d c2             	mov    ebx,DWORD PTR [ebp-0x3e]
1000abeb:	8b 75 c6             	mov    esi,DWORD PTR [ebp-0x3a]
1000abee:	8b 45 ca             	mov    eax,DWORD PTR [ebp-0x36]
1000abf1:	83 c4 0c             	add    esp,0xc
1000abf4:	eb b5                	jmp    0x1000abab
1000abf6:	33 d2                	xor    edx,edx
1000abf8:	33 c0                	xor    eax,eax
1000abfa:	33 f6                	xor    esi,esi
1000abfc:	33 db                	xor    ebx,ebx
1000abfe:	eb ab                	jmp    0x1000abab
1000ac00:	33 d2                	xor    edx,edx
1000ac02:	33 c0                	xor    eax,eax
1000ac04:	33 f6                	xor    esi,esi
1000ac06:	33 db                	xor    ebx,ebx
1000ac08:	c7 45 ec 04 00 00 00 	mov    DWORD PTR [ebp-0x14],0x4
1000ac0f:	eb 15                	jmp    0x1000ac26
1000ac11:	83 7d d0 00          	cmp    DWORD PTR [ebp-0x30],0x0
1000ac15:	74 0f                	je     0x1000ac26
1000ac17:	33 d2                	xor    edx,edx
1000ac19:	33 c0                	xor    eax,eax
1000ac1b:	33 f6                	xor    esi,esi
1000ac1d:	33 db                	xor    ebx,ebx
1000ac1f:	c7 45 ec 01 00 00 00 	mov    DWORD PTR [ebp-0x14],0x1
1000ac26:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000ac29:	0b 45 d8             	or     eax,DWORD PTR [ebp-0x28]
1000ac2c:	5f                   	pop    edi
1000ac2d:	89 71 06             	mov    DWORD PTR [ecx+0x6],esi
1000ac30:	89 59 02             	mov    DWORD PTR [ecx+0x2],ebx
1000ac33:	66 89 41 0a          	mov    WORD PTR [ecx+0xa],ax
1000ac37:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
1000ac3a:	5e                   	pop    esi
1000ac3b:	66 89 11             	mov    WORD PTR [ecx],dx
1000ac3e:	5b                   	pop    ebx
1000ac3f:	c9                   	leave
1000ac40:	c3                   	ret
1000ac41:	0a a8 00 10 59 a8    	or     ch,BYTE PTR [eax-0x57a6f000]
1000ac47:	00 10                	add    BYTE PTR [eax],dl
1000ac49:	b0 a8                	mov    al,0xa8
1000ac4b:	00 10                	add    BYTE PTR [eax],dl
1000ac4d:	da a8 00 10 35 a9    	fisubr DWORD PTR [eax-0x56caf000]
1000ac53:	00 10                	add    BYTE PTR [eax],dl
1000ac55:	ac                   	lods   al,BYTE PTR ds:[esi]
1000ac56:	a9 00 10 e2 a9       	test   eax,0xa9e21000
1000ac5b:	00 10                	add    BYTE PTR [eax],dl
1000ac5d:	2c aa                	sub    al,0xaa
1000ac5f:	00 10                	add    BYTE PTR [eax],dl
1000ac61:	0b aa 00 10 90 aa    	or     ebp,DWORD PTR [edx-0x556ff000]
1000ac67:	00 10                	add    BYTE PTR [eax],dl
1000ac69:	7a aa                	jp     0x1000ac15
1000ac6b:	00 10                	add    BYTE PTR [eax],dl
1000ac6d:	46                   	inc    esi
1000ac6e:	aa                   	stos   BYTE PTR es:[edi],al
1000ac6f:	00 10                	add    BYTE PTR [eax],dl
1000ac71:	55                   	push   ebp
1000ac72:	8b ec                	mov    ebp,esp
1000ac74:	83 ec 1c             	sub    esp,0x1c
1000ac77:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000ac7a:	53                   	push   ebx
1000ac7b:	8b 5d 1c             	mov    ebx,DWORD PTR [ebp+0x1c]
1000ac7e:	56                   	push   esi
1000ac7f:	8b c8                	mov    ecx,eax
1000ac81:	be ff 7f 00 00       	mov    esi,0x7fff
1000ac86:	81 e1 00 80 00 00    	and    ecx,0x8000
1000ac8c:	23 c6                	and    eax,esi
1000ac8e:	66 85 c9             	test   cx,cx
1000ac91:	57                   	push   edi
1000ac92:	c6 45 e4 cc          	mov    BYTE PTR [ebp-0x1c],0xcc
1000ac96:	c6 45 e5 cc          	mov    BYTE PTR [ebp-0x1b],0xcc
1000ac9a:	c6 45 e6 cc          	mov    BYTE PTR [ebp-0x1a],0xcc
1000ac9e:	c6 45 e7 cc          	mov    BYTE PTR [ebp-0x19],0xcc
1000aca2:	c6 45 e8 cc          	mov    BYTE PTR [ebp-0x18],0xcc
1000aca6:	c6 45 e9 cc          	mov    BYTE PTR [ebp-0x17],0xcc
1000acaa:	c6 45 ea cc          	mov    BYTE PTR [ebp-0x16],0xcc
1000acae:	c6 45 eb cc          	mov    BYTE PTR [ebp-0x15],0xcc
1000acb2:	c6 45 ec cc          	mov    BYTE PTR [ebp-0x14],0xcc
1000acb6:	c6 45 ed cc          	mov    BYTE PTR [ebp-0x13],0xcc
1000acba:	c6 45 ee fb          	mov    BYTE PTR [ebp-0x12],0xfb
1000acbe:	c6 45 ef 3f          	mov    BYTE PTR [ebp-0x11],0x3f
1000acc2:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
1000acc9:	8b d0                	mov    edx,eax
1000accb:	74 06                	je     0x1000acd3
1000accd:	c6 43 02 2d          	mov    BYTE PTR [ebx+0x2],0x2d
1000acd1:	eb 04                	jmp    0x1000acd7
1000acd3:	c6 43 02 20          	mov    BYTE PTR [ebx+0x2],0x20
1000acd7:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1000acda:	66 85 d2             	test   dx,dx
1000acdd:	75 1e                	jne    0x1000acfd
1000acdf:	85 ff                	test   edi,edi
1000ace1:	75 1a                	jne    0x1000acfd
1000ace3:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
1000ace6:	75 15                	jne    0x1000acfd
1000ace8:	66 83 23 00          	and    WORD PTR [ebx],0x0
1000acec:	c6 43 02 20          	mov    BYTE PTR [ebx+0x2],0x20
1000acf0:	c6 43 03 01          	mov    BYTE PTR [ebx+0x3],0x1
1000acf4:	c6 43 04 30          	mov    BYTE PTR [ebx+0x4],0x30
1000acf8:	e9 fe 01 00 00       	jmp    0x1000aefb
1000acfd:	66 3b d6             	cmp    dx,si
1000ad00:	75 7a                	jne    0x1000ad7c
1000ad02:	b8 00 00 00 80       	mov    eax,0x80000000
1000ad07:	66 c7 03 01 00       	mov    WORD PTR [ebx],0x1
1000ad0c:	3b f8                	cmp    edi,eax
1000ad0e:	75 06                	jne    0x1000ad16
1000ad10:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1000ad14:	74 0f                	je     0x1000ad25
1000ad16:	f7 c7 00 00 00 40    	test   edi,0x40000000
1000ad1c:	75 07                	jne    0x1000ad25
1000ad1e:	68 90 c6 00 10       	push   0x1000c690
1000ad23:	eb 46                	jmp    0x1000ad6b
1000ad25:	66 85 c9             	test   cx,cx
1000ad28:	74 15                	je     0x1000ad3f
1000ad2a:	81 ff 00 00 00 c0    	cmp    edi,0xc0000000
1000ad30:	75 0d                	jne    0x1000ad3f
1000ad32:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1000ad36:	75 2e                	jne    0x1000ad66
1000ad38:	68 88 c6 00 10       	push   0x1000c688
1000ad3d:	eb 0f                	jmp    0x1000ad4e
1000ad3f:	3b f8                	cmp    edi,eax
1000ad41:	75 23                	jne    0x1000ad66
1000ad43:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1000ad47:	75 1d                	jne    0x1000ad66
1000ad49:	68 80 c6 00 10       	push   0x1000c680
1000ad4e:	8d 43 04             	lea    eax,[ebx+0x4]
1000ad51:	50                   	push   eax
1000ad52:	e8 59 ea ff ff       	call   0x100097b0
1000ad57:	59                   	pop    ecx
1000ad58:	c6 43 03 05          	mov    BYTE PTR [ebx+0x3],0x5
1000ad5c:	59                   	pop    ecx
1000ad5d:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
1000ad61:	e9 6e 01 00 00       	jmp    0x1000aed4
1000ad66:	68 78 c6 00 10       	push   0x1000c678
1000ad6b:	8d 43 04             	lea    eax,[ebx+0x4]
1000ad6e:	50                   	push   eax
1000ad6f:	e8 3c ea ff ff       	call   0x100097b0
1000ad74:	59                   	pop    ecx
1000ad75:	c6 43 03 06          	mov    BYTE PTR [ebx+0x3],0x6
1000ad79:	59                   	pop    ecx
1000ad7a:	eb e1                	jmp    0x1000ad5d
1000ad7c:	0f b7 c2             	movzx  eax,dx
1000ad7f:	8b cf                	mov    ecx,edi
1000ad81:	8b f0                	mov    esi,eax
1000ad83:	c1 e9 18             	shr    ecx,0x18
1000ad86:	69 c0 10 4d 00 00    	imul   eax,eax,0x4d10
1000ad8c:	c1 ee 08             	shr    esi,0x8
1000ad8f:	66 83 65 f0 00       	and    WORD PTR [ebp-0x10],0x0
1000ad94:	6a 01                	push   0x1
1000ad96:	8d 0c 4e             	lea    ecx,[esi+ecx*2]
1000ad99:	66 89 55 fa          	mov    WORD PTR [ebp-0x6],dx
1000ad9d:	6b c9 4d             	imul   ecx,ecx,0x4d
1000ada0:	89 7d f6             	mov    DWORD PTR [ebp-0xa],edi
1000ada3:	8d b4 01 0c ed bc ec 	lea    esi,[ecx+eax*1-0x134312f4]
1000adaa:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000adad:	c1 fe 10             	sar    esi,0x10
1000adb0:	89 45 f2             	mov    DWORD PTR [ebp-0xe],eax
1000adb3:	0f bf c6             	movsx  eax,si
1000adb6:	f7 d8                	neg    eax
1000adb8:	50                   	push   eax
1000adb9:	8d 45 f0             	lea    eax,[ebp-0x10]
1000adbc:	50                   	push   eax
1000adbd:	e8 d8 04 00 00       	call   0x1000b29a
1000adc2:	83 c4 0c             	add    esp,0xc
1000adc5:	66 81 7d fa ff 3f    	cmp    WORD PTR [ebp-0x6],0x3fff
1000adcb:	72 10                	jb     0x1000addd
1000adcd:	8d 45 e4             	lea    eax,[ebp-0x1c]
1000add0:	46                   	inc    esi
1000add1:	50                   	push   eax
1000add2:	8d 45 f0             	lea    eax,[ebp-0x10]
1000add5:	50                   	push   eax
1000add6:	e8 9f 02 00 00       	call   0x1000b07a
1000addb:	59                   	pop    ecx
1000addc:	59                   	pop    ecx
1000addd:	f6 45 18 01          	test   BYTE PTR [ebp+0x18],0x1
1000ade1:	66 89 33             	mov    WORD PTR [ebx],si
1000ade4:	74 11                	je     0x1000adf7
1000ade6:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
1000ade9:	0f bf c6             	movsx  eax,si
1000adec:	03 f8                	add    edi,eax
1000adee:	85 ff                	test   edi,edi
1000adf0:	7f 08                	jg     0x1000adfa
1000adf2:	e9 f1 fe ff ff       	jmp    0x1000ace8
1000adf7:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
1000adfa:	83 ff 15             	cmp    edi,0x15
1000adfd:	7e 03                	jle    0x1000ae02
1000adff:	6a 15                	push   0x15
1000ae01:	5f                   	pop    edi
1000ae02:	0f b7 75 fa          	movzx  esi,WORD PTR [ebp-0x6]
1000ae06:	81 ee fe 3f 00 00    	sub    esi,0x3ffe
1000ae0c:	66 83 65 fa 00       	and    WORD PTR [ebp-0x6],0x0
1000ae11:	c7 45 1c 08 00 00 00 	mov    DWORD PTR [ebp+0x1c],0x8
1000ae18:	8d 45 f0             	lea    eax,[ebp-0x10]
1000ae1b:	50                   	push   eax
1000ae1c:	e8 5d f8 ff ff       	call   0x1000a67e
1000ae21:	ff 4d 1c             	dec    DWORD PTR [ebp+0x1c]
1000ae24:	59                   	pop    ecx
1000ae25:	75 f1                	jne    0x1000ae18
1000ae27:	85 f6                	test   esi,esi
1000ae29:	7d 17                	jge    0x1000ae42
1000ae2b:	f7 de                	neg    esi
1000ae2d:	81 e6 ff 00 00 00    	and    esi,0xff
1000ae33:	7e 0d                	jle    0x1000ae42
1000ae35:	8d 45 f0             	lea    eax,[ebp-0x10]
1000ae38:	50                   	push   eax
1000ae39:	e8 6e f8 ff ff       	call   0x1000a6ac
1000ae3e:	4e                   	dec    esi
1000ae3f:	59                   	pop    ecx
1000ae40:	75 f3                	jne    0x1000ae35
1000ae42:	8d 4f 01             	lea    ecx,[edi+0x1]
1000ae45:	8d 43 04             	lea    eax,[ebx+0x4]
1000ae48:	85 c9                	test   ecx,ecx
1000ae4a:	89 45 1c             	mov    DWORD PTR [ebp+0x1c],eax
1000ae4d:	7e 50                	jle    0x1000ae9f
1000ae4f:	89 4d 14             	mov    DWORD PTR [ebp+0x14],ecx
1000ae52:	8d 75 f0             	lea    esi,[ebp-0x10]
1000ae55:	8d 7d 08             	lea    edi,[ebp+0x8]
1000ae58:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000ae59:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000ae5a:	8d 45 f0             	lea    eax,[ebp-0x10]
1000ae5d:	50                   	push   eax
1000ae5e:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000ae5f:	e8 1a f8 ff ff       	call   0x1000a67e
1000ae64:	8d 45 f0             	lea    eax,[ebp-0x10]
1000ae67:	50                   	push   eax
1000ae68:	e8 11 f8 ff ff       	call   0x1000a67e
1000ae6d:	8d 45 08             	lea    eax,[ebp+0x8]
1000ae70:	50                   	push   eax
1000ae71:	8d 45 f0             	lea    eax,[ebp-0x10]
1000ae74:	50                   	push   eax
1000ae75:	e8 a6 f7 ff ff       	call   0x1000a620
1000ae7a:	8d 45 f0             	lea    eax,[ebp-0x10]
1000ae7d:	50                   	push   eax
1000ae7e:	e8 fb f7 ff ff       	call   0x1000a67e
1000ae83:	8a 45 fb             	mov    al,BYTE PTR [ebp-0x5]
1000ae86:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
1000ae89:	80 65 fb 00          	and    BYTE PTR [ebp-0x5],0x0
1000ae8d:	83 c4 14             	add    esp,0x14
1000ae90:	04 30                	add    al,0x30
1000ae92:	ff 45 1c             	inc    DWORD PTR [ebp+0x1c]
1000ae95:	ff 4d 14             	dec    DWORD PTR [ebp+0x14]
1000ae98:	88 01                	mov    BYTE PTR [ecx],al
1000ae9a:	75 b6                	jne    0x1000ae52
1000ae9c:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
1000ae9f:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
1000aea2:	48                   	dec    eax
1000aea3:	48                   	dec    eax
1000aea4:	80 f9 35             	cmp    cl,0x35
1000aea7:	8d 4b 04             	lea    ecx,[ebx+0x4]
1000aeaa:	7c 30                	jl     0x1000aedc
1000aeac:	3b c1                	cmp    eax,ecx
1000aeae:	72 0f                	jb     0x1000aebf
1000aeb0:	80 38 39             	cmp    BYTE PTR [eax],0x39
1000aeb3:	75 06                	jne    0x1000aebb
1000aeb5:	c6 00 30             	mov    BYTE PTR [eax],0x30
1000aeb8:	48                   	dec    eax
1000aeb9:	eb f1                	jmp    0x1000aeac
1000aebb:	3b c1                	cmp    eax,ecx
1000aebd:	73 04                	jae    0x1000aec3
1000aebf:	40                   	inc    eax
1000aec0:	66 ff 03             	inc    WORD PTR [ebx]
1000aec3:	fe 00                	inc    BYTE PTR [eax]
1000aec5:	2a c3                	sub    al,bl
1000aec7:	2c 03                	sub    al,0x3
1000aec9:	88 43 03             	mov    BYTE PTR [ebx+0x3],al
1000aecc:	0f be c0             	movsx  eax,al
1000aecf:	80 64 18 04 00       	and    BYTE PTR [eax+ebx*1+0x4],0x0
1000aed4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000aed7:	5f                   	pop    edi
1000aed8:	5e                   	pop    esi
1000aed9:	5b                   	pop    ebx
1000aeda:	c9                   	leave
1000aedb:	c3                   	ret
1000aedc:	3b c1                	cmp    eax,ecx
1000aede:	72 0c                	jb     0x1000aeec
1000aee0:	80 38 30             	cmp    BYTE PTR [eax],0x30
1000aee3:	75 03                	jne    0x1000aee8
1000aee5:	48                   	dec    eax
1000aee6:	eb f4                	jmp    0x1000aedc
1000aee8:	3b c1                	cmp    eax,ecx
1000aeea:	73 d9                	jae    0x1000aec5
1000aeec:	66 83 23 00          	and    WORD PTR [ebx],0x0
1000aef0:	c6 43 02 20          	mov    BYTE PTR [ebx+0x2],0x20
1000aef4:	c6 43 03 01          	mov    BYTE PTR [ebx+0x3],0x1
1000aef8:	c6 01 30             	mov    BYTE PTR [ecx],0x30
1000aefb:	80 63 05 00          	and    BYTE PTR [ebx+0x5],0x0
1000aeff:	6a 01                	push   0x1
1000af01:	58                   	pop    eax
1000af02:	eb d3                	jmp    0x1000aed7
1000af04:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000af08:	56                   	push   esi
1000af09:	8b c8                	mov    ecx,eax
1000af0b:	83 e0 1f             	and    eax,0x1f
1000af0e:	c1 f9 05             	sar    ecx,0x5
1000af11:	8d 04 c0             	lea    eax,[eax+eax*8]
1000af14:	be 00 80 00 00       	mov    esi,0x8000
1000af19:	8b 0c 8d 80 59 1f 10 	mov    ecx,DWORD PTR [ecx*4+0x101f5980]
1000af20:	8d 54 81 04          	lea    edx,[ecx+eax*4+0x4]
1000af24:	8a 4c 81 04          	mov    cl,BYTE PTR [ecx+eax*4+0x4]
1000af28:	8a c1                	mov    al,cl
1000af2a:	25 80 00 00 00       	and    eax,0x80
1000af2f:	39 74 24 0c          	cmp    DWORD PTR [esp+0xc],esi
1000af33:	75 05                	jne    0x1000af3a
1000af35:	80 e1 7f             	and    cl,0x7f
1000af38:	eb 0d                	jmp    0x1000af47
1000af3a:	81 7c 24 0c 00 40 00 	cmp    DWORD PTR [esp+0xc],0x4000
1000af41:	00 
1000af42:	75 11                	jne    0x1000af55
1000af44:	80 c9 80             	or     cl,0x80
1000af47:	f7 d8                	neg    eax
1000af49:	1b c0                	sbb    eax,eax
1000af4b:	88 0a                	mov    BYTE PTR [edx],cl
1000af4d:	66 25 00 c0          	and    ax,0xc000
1000af51:	03 c6                	add    eax,esi
1000af53:	5e                   	pop    esi
1000af54:	c3                   	ret
1000af55:	e8 8e ce ff ff       	call   0x10007de8
1000af5a:	c7 00 16 00 00 00    	mov    DWORD PTR [eax],0x16
1000af60:	83 c8 ff             	or     eax,0xffffffff
1000af63:	5e                   	pop    esi
1000af64:	c3                   	ret
1000af65:	cc                   	int3
1000af66:	cc                   	int3
1000af67:	cc                   	int3
1000af68:	cc                   	int3
1000af69:	cc                   	int3
1000af6a:	cc                   	int3
1000af6b:	cc                   	int3
1000af6c:	cc                   	int3
1000af6d:	cc                   	int3
1000af6e:	cc                   	int3
1000af6f:	cc                   	int3
1000af70:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
1000af74:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1000af78:	f7 c2 03 00 00 00    	test   edx,0x3
1000af7e:	75 3c                	jne    0x1000afbc
1000af80:	8b 02                	mov    eax,DWORD PTR [edx]
1000af82:	3a 01                	cmp    al,BYTE PTR [ecx]
1000af84:	75 2e                	jne    0x1000afb4
1000af86:	0a c0                	or     al,al
1000af88:	74 26                	je     0x1000afb0
1000af8a:	3a 61 01             	cmp    ah,BYTE PTR [ecx+0x1]
1000af8d:	75 25                	jne    0x1000afb4
1000af8f:	0a e4                	or     ah,ah
1000af91:	74 1d                	je     0x1000afb0
1000af93:	c1 e8 10             	shr    eax,0x10
1000af96:	3a 41 02             	cmp    al,BYTE PTR [ecx+0x2]
1000af99:	75 19                	jne    0x1000afb4
1000af9b:	0a c0                	or     al,al
1000af9d:	74 11                	je     0x1000afb0
1000af9f:	3a 61 03             	cmp    ah,BYTE PTR [ecx+0x3]
1000afa2:	75 10                	jne    0x1000afb4
1000afa4:	83 c1 04             	add    ecx,0x4
1000afa7:	83 c2 04             	add    edx,0x4
1000afaa:	0a e4                	or     ah,ah
1000afac:	75 d2                	jne    0x1000af80
1000afae:	8b ff                	mov    edi,edi
1000afb0:	33 c0                	xor    eax,eax
1000afb2:	c3                   	ret
1000afb3:	90                   	nop
1000afb4:	1b c0                	sbb    eax,eax
1000afb6:	d1 e0                	shl    eax,1
1000afb8:	40                   	inc    eax
1000afb9:	c3                   	ret
1000afba:	8b ff                	mov    edi,edi
1000afbc:	f7 c2 01 00 00 00    	test   edx,0x1
1000afc2:	74 14                	je     0x1000afd8
1000afc4:	8a 02                	mov    al,BYTE PTR [edx]
1000afc6:	42                   	inc    edx
1000afc7:	3a 01                	cmp    al,BYTE PTR [ecx]
1000afc9:	75 e9                	jne    0x1000afb4
1000afcb:	41                   	inc    ecx
1000afcc:	0a c0                	or     al,al
1000afce:	74 e0                	je     0x1000afb0
1000afd0:	f7 c2 02 00 00 00    	test   edx,0x2
1000afd6:	74 a8                	je     0x1000af80
1000afd8:	66 8b 02             	mov    ax,WORD PTR [edx]
1000afdb:	83 c2 02             	add    edx,0x2
1000afde:	3a 01                	cmp    al,BYTE PTR [ecx]
1000afe0:	75 d2                	jne    0x1000afb4
1000afe2:	0a c0                	or     al,al
1000afe4:	74 ca                	je     0x1000afb0
1000afe6:	3a 61 01             	cmp    ah,BYTE PTR [ecx+0x1]
1000afe9:	75 c9                	jne    0x1000afb4
1000afeb:	0a e4                	or     ah,ah
1000afed:	74 c1                	je     0x1000afb0
1000afef:	83 c1 02             	add    ecx,0x2
1000aff2:	eb 8c                	jmp    0x1000af80
1000aff4:	cc                   	int3
1000aff5:	cc                   	int3
1000aff6:	cc                   	int3
1000aff7:	cc                   	int3
1000aff8:	cc                   	int3
1000aff9:	cc                   	int3
1000affa:	cc                   	int3
1000affb:	cc                   	int3
1000affc:	cc                   	int3
1000affd:	cc                   	int3
1000affe:	cc                   	int3
1000afff:	cc                   	int3
1000b000:	55                   	push   ebp
1000b001:	8b ec                	mov    ebp,esp
1000b003:	56                   	push   esi
1000b004:	33 c0                	xor    eax,eax
1000b006:	50                   	push   eax
1000b007:	50                   	push   eax
1000b008:	50                   	push   eax
1000b009:	50                   	push   eax
1000b00a:	50                   	push   eax
1000b00b:	50                   	push   eax
1000b00c:	50                   	push   eax
1000b00d:	50                   	push   eax
1000b00e:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
1000b011:	8d 49 00             	lea    ecx,[ecx+0x0]
1000b014:	8a 02                	mov    al,BYTE PTR [edx]
1000b016:	0a c0                	or     al,al
1000b018:	74 07                	je     0x1000b021
1000b01a:	42                   	inc    edx
1000b01b:	0f ab 04 24          	bts    DWORD PTR [esp],eax
1000b01f:	eb f3                	jmp    0x1000b014
1000b021:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000b024:	83 c9 ff             	or     ecx,0xffffffff
1000b027:	90                   	nop
1000b028:	41                   	inc    ecx
1000b029:	8a 06                	mov    al,BYTE PTR [esi]
1000b02b:	0a c0                	or     al,al
1000b02d:	74 07                	je     0x1000b036
1000b02f:	46                   	inc    esi
1000b030:	0f a3 04 24          	bt     DWORD PTR [esp],eax
1000b034:	73 f2                	jae    0x1000b028
1000b036:	8b c1                	mov    eax,ecx
1000b038:	83 c4 20             	add    esp,0x20
1000b03b:	5e                   	pop    esi
1000b03c:	c9                   	leave
1000b03d:	c3                   	ret
1000b03e:	cc                   	int3
1000b03f:	cc                   	int3
1000b040:	55                   	push   ebp
1000b041:	8b ec                	mov    ebp,esp
1000b043:	56                   	push   esi
1000b044:	33 c0                	xor    eax,eax
1000b046:	50                   	push   eax
1000b047:	50                   	push   eax
1000b048:	50                   	push   eax
1000b049:	50                   	push   eax
1000b04a:	50                   	push   eax
1000b04b:	50                   	push   eax
1000b04c:	50                   	push   eax
1000b04d:	50                   	push   eax
1000b04e:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
1000b051:	8d 49 00             	lea    ecx,[ecx+0x0]
1000b054:	8a 02                	mov    al,BYTE PTR [edx]
1000b056:	0a c0                	or     al,al
1000b058:	74 07                	je     0x1000b061
1000b05a:	42                   	inc    edx
1000b05b:	0f ab 04 24          	bts    DWORD PTR [esp],eax
1000b05f:	eb f3                	jmp    0x1000b054
1000b061:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000b064:	8a 06                	mov    al,BYTE PTR [esi]
1000b066:	0a c0                	or     al,al
1000b068:	74 0a                	je     0x1000b074
1000b06a:	46                   	inc    esi
1000b06b:	0f a3 04 24          	bt     DWORD PTR [esp],eax
1000b06f:	73 f3                	jae    0x1000b064
1000b071:	8d 46 ff             	lea    eax,[esi-0x1]
1000b074:	83 c4 20             	add    esp,0x20
1000b077:	5e                   	pop    esi
1000b078:	c9                   	leave
1000b079:	c3                   	ret
1000b07a:	55                   	push   ebp
1000b07b:	8b ec                	mov    ebp,esp
1000b07d:	83 ec 24             	sub    esp,0x24
1000b080:	53                   	push   ebx
1000b081:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
1000b084:	56                   	push   esi
1000b085:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000b088:	66 8b 4b 0a          	mov    cx,WORD PTR [ebx+0xa]
1000b08c:	33 c0                	xor    eax,eax
1000b08e:	57                   	push   edi
1000b08f:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
1000b092:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
1000b095:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
1000b098:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
1000b09b:	66 8b 46 0a          	mov    ax,WORD PTR [esi+0xa]
1000b09f:	8b f9                	mov    edi,ecx
1000b0a1:	ba ff 7f 00 00       	mov    edx,0x7fff
1000b0a6:	33 f8                	xor    edi,eax
1000b0a8:	23 c2                	and    eax,edx
1000b0aa:	23 ca                	and    ecx,edx
1000b0ac:	81 e7 00 80 00 00    	and    edi,0x8000
1000b0b2:	66 3d ff 7f          	cmp    ax,0x7fff
1000b0b6:	8d 14 01             	lea    edx,[ecx+eax*1]
1000b0b9:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
1000b0bc:	0f 83 b8 01 00 00    	jae    0x1000b27a
1000b0c2:	66 81 f9 ff 7f       	cmp    cx,0x7fff
1000b0c7:	0f 83 ad 01 00 00    	jae    0x1000b27a
1000b0cd:	66 81 fa fd bf       	cmp    dx,0xbffd
1000b0d2:	0f 87 a2 01 00 00    	ja     0x1000b27a
1000b0d8:	66 81 fa bf 3f       	cmp    dx,0x3fbf
1000b0dd:	77 04                	ja     0x1000b0e3
1000b0df:	33 c0                	xor    eax,eax
1000b0e1:	eb 3a                	jmp    0x1000b11d
1000b0e3:	66 85 c0             	test   ax,ax
1000b0e6:	ba ff ff ff 7f       	mov    edx,0x7fffffff
1000b0eb:	75 18                	jne    0x1000b105
1000b0ed:	ff 45 08             	inc    DWORD PTR [ebp+0x8]
1000b0f0:	85 56 08             	test   DWORD PTR [esi+0x8],edx
1000b0f3:	75 10                	jne    0x1000b105
1000b0f5:	33 c0                	xor    eax,eax
1000b0f7:	39 46 04             	cmp    DWORD PTR [esi+0x4],eax
1000b0fa:	75 0b                	jne    0x1000b107
1000b0fc:	39 06                	cmp    DWORD PTR [esi],eax
1000b0fe:	75 07                	jne    0x1000b107
1000b100:	e9 6f 01 00 00       	jmp    0x1000b274
1000b105:	33 c0                	xor    eax,eax
1000b107:	66 3b c8             	cmp    cx,ax
1000b10a:	75 1e                	jne    0x1000b12a
1000b10c:	ff 45 08             	inc    DWORD PTR [ebp+0x8]
1000b10f:	85 53 08             	test   DWORD PTR [ebx+0x8],edx
1000b112:	75 16                	jne    0x1000b12a
1000b114:	39 43 04             	cmp    DWORD PTR [ebx+0x4],eax
1000b117:	75 11                	jne    0x1000b12a
1000b119:	39 03                	cmp    DWORD PTR [ebx],eax
1000b11b:	75 0d                	jne    0x1000b12a
1000b11d:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
1000b120:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
1000b123:	89 06                	mov    DWORD PTR [esi],eax
1000b125:	e9 6b 01 00 00       	jmp    0x1000b295
1000b12a:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1000b12d:	8d 45 e0             	lea    eax,[ebp-0x20]
1000b130:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1000b133:	c7 45 0c 05 00 00 00 	mov    DWORD PTR [ebp+0xc],0x5
1000b13a:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
1000b13d:	03 c0                	add    eax,eax
1000b13f:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
1000b143:	7e 49                	jle    0x1000b18e
1000b145:	03 c6                	add    eax,esi
1000b147:	8d 4b 08             	lea    ecx,[ebx+0x8]
1000b14a:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1000b14d:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000b150:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
1000b153:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
1000b156:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1000b159:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1000b15c:	0f b7 00             	movzx  eax,WORD PTR [eax]
1000b15f:	0f b7 09             	movzx  ecx,WORD PTR [ecx]
1000b162:	0f af c1             	imul   eax,ecx
1000b165:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000b168:	83 c1 fc             	add    ecx,0xfffffffc
1000b16b:	51                   	push   ecx
1000b16c:	50                   	push   eax
1000b16d:	ff 31                	push   DWORD PTR [ecx]
1000b16f:	e8 8b f4 ff ff       	call   0x1000a5ff
1000b174:	83 c4 0c             	add    esp,0xc
1000b177:	85 c0                	test   eax,eax
1000b179:	74 06                	je     0x1000b181
1000b17b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000b17e:	66 ff 00             	inc    WORD PTR [eax]
1000b181:	83 45 f8 02          	add    DWORD PTR [ebp-0x8],0x2
1000b185:	83 6d f4 02          	sub    DWORD PTR [ebp-0xc],0x2
1000b189:	ff 4d e8             	dec    DWORD PTR [ebp-0x18]
1000b18c:	75 c8                	jne    0x1000b156
1000b18e:	83 45 fc 02          	add    DWORD PTR [ebp-0x4],0x2
1000b192:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
1000b195:	ff 4d 0c             	dec    DWORD PTR [ebp+0xc]
1000b198:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
1000b19c:	7f 9c                	jg     0x1000b13a
1000b19e:	81 45 08 02 c0 00 00 	add    DWORD PTR [ebp+0x8],0xc002
1000b1a5:	66 83 7d 08 00       	cmp    WORD PTR [ebp+0x8],0x0
1000b1aa:	7e 25                	jle    0x1000b1d1
1000b1ac:	f6 45 e7 80          	test   BYTE PTR [ebp-0x19],0x80
1000b1b0:	75 18                	jne    0x1000b1ca
1000b1b2:	8d 45 dc             	lea    eax,[ebp-0x24]
1000b1b5:	50                   	push   eax
1000b1b6:	e8 c3 f4 ff ff       	call   0x1000a67e
1000b1bb:	81 45 08 ff ff 00 00 	add    DWORD PTR [ebp+0x8],0xffff
1000b1c2:	59                   	pop    ecx
1000b1c3:	66 83 7d 08 00       	cmp    WORD PTR [ebp+0x8],0x0
1000b1c8:	7f e2                	jg     0x1000b1ac
1000b1ca:	66 83 7d 08 00       	cmp    WORD PTR [ebp+0x8],0x0
1000b1cf:	7f 39                	jg     0x1000b20a
1000b1d1:	81 45 08 ff ff 00 00 	add    DWORD PTR [ebp+0x8],0xffff
1000b1d8:	66 83 7d 08 00       	cmp    WORD PTR [ebp+0x8],0x0
1000b1dd:	7d 2b                	jge    0x1000b20a
1000b1df:	0f bf 45 08          	movsx  eax,WORD PTR [ebp+0x8]
1000b1e3:	f7 d8                	neg    eax
1000b1e5:	01 45 08             	add    DWORD PTR [ebp+0x8],eax
1000b1e8:	8b d8                	mov    ebx,eax
1000b1ea:	f6 45 dc 01          	test   BYTE PTR [ebp-0x24],0x1
1000b1ee:	74 03                	je     0x1000b1f3
1000b1f0:	ff 45 ec             	inc    DWORD PTR [ebp-0x14]
1000b1f3:	8d 45 dc             	lea    eax,[ebp-0x24]
1000b1f6:	50                   	push   eax
1000b1f7:	e8 b0 f4 ff ff       	call   0x1000a6ac
1000b1fc:	4b                   	dec    ebx
1000b1fd:	59                   	pop    ecx
1000b1fe:	75 ea                	jne    0x1000b1ea
1000b200:	83 7d ec 00          	cmp    DWORD PTR [ebp-0x14],0x0
1000b204:	74 04                	je     0x1000b20a
1000b206:	80 4d dc 01          	or     BYTE PTR [ebp-0x24],0x1
1000b20a:	66 81 7d dc 00 80    	cmp    WORD PTR [ebp-0x24],0x8000
1000b210:	77 0f                	ja     0x1000b221
1000b212:	8b 45 dc             	mov    eax,DWORD PTR [ebp-0x24]
1000b215:	25 ff ff 01 00       	and    eax,0x1ffff
1000b21a:	3d 00 80 01 00       	cmp    eax,0x18000
1000b21f:	75 35                	jne    0x1000b256
1000b221:	83 7d de ff          	cmp    DWORD PTR [ebp-0x22],0xffffffff
1000b225:	75 2c                	jne    0x1000b253
1000b227:	83 65 de 00          	and    DWORD PTR [ebp-0x22],0x0
1000b22b:	83 7d e2 ff          	cmp    DWORD PTR [ebp-0x1e],0xffffffff
1000b22f:	75 1d                	jne    0x1000b24e
1000b231:	83 65 e2 00          	and    DWORD PTR [ebp-0x1e],0x0
1000b235:	66 81 7d e6 ff ff    	cmp    WORD PTR [ebp-0x1a],0xffff
1000b23b:	75 0b                	jne    0x1000b248
1000b23d:	ff 45 08             	inc    DWORD PTR [ebp+0x8]
1000b240:	66 c7 45 e6 00 80    	mov    WORD PTR [ebp-0x1a],0x8000
1000b246:	eb 0e                	jmp    0x1000b256
1000b248:	66 ff 45 e6          	inc    WORD PTR [ebp-0x1a]
1000b24c:	eb 08                	jmp    0x1000b256
1000b24e:	ff 45 e2             	inc    DWORD PTR [ebp-0x1e]
1000b251:	eb 03                	jmp    0x1000b256
1000b253:	ff 45 de             	inc    DWORD PTR [ebp-0x22]
1000b256:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000b259:	66 3d ff 7f          	cmp    ax,0x7fff
1000b25d:	73 1b                	jae    0x1000b27a
1000b25f:	66 8b 4d de          	mov    cx,WORD PTR [ebp-0x22]
1000b263:	0b c7                	or     eax,edi
1000b265:	66 89 0e             	mov    WORD PTR [esi],cx
1000b268:	8b 4d e0             	mov    ecx,DWORD PTR [ebp-0x20]
1000b26b:	89 4e 02             	mov    DWORD PTR [esi+0x2],ecx
1000b26e:	8b 4d e4             	mov    ecx,DWORD PTR [ebp-0x1c]
1000b271:	89 4e 06             	mov    DWORD PTR [esi+0x6],ecx
1000b274:	66 89 46 0a          	mov    WORD PTR [esi+0xa],ax
1000b278:	eb 1b                	jmp    0x1000b295
1000b27a:	66 f7 df             	neg    di
1000b27d:	1b ff                	sbb    edi,edi
1000b27f:	83 66 04 00          	and    DWORD PTR [esi+0x4],0x0
1000b283:	81 e7 00 00 00 80    	and    edi,0x80000000
1000b289:	81 c7 00 80 ff 7f    	add    edi,0x7fff8000
1000b28f:	83 26 00             	and    DWORD PTR [esi],0x0
1000b292:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
1000b295:	5f                   	pop    edi
1000b296:	5e                   	pop    esi
1000b297:	5b                   	pop    ebx
1000b298:	c9                   	leave
1000b299:	c3                   	ret
1000b29a:	55                   	push   ebp
1000b29b:	8b ec                	mov    ebp,esp
1000b29d:	83 ec 0c             	sub    esp,0xc
1000b2a0:	53                   	push   ebx
1000b2a1:	bb c0 14 01 10       	mov    ebx,0x100114c0
1000b2a6:	33 c9                	xor    ecx,ecx
1000b2a8:	83 eb 60             	sub    ebx,0x60
1000b2ab:	39 4d 0c             	cmp    DWORD PTR [ebp+0xc],ecx
1000b2ae:	74 63                	je     0x1000b313
1000b2b0:	7d 10                	jge    0x1000b2c2
1000b2b2:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000b2b5:	bb 20 16 01 10       	mov    ebx,0x10011620
1000b2ba:	f7 d8                	neg    eax
1000b2bc:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
1000b2bf:	83 eb 60             	sub    ebx,0x60
1000b2c2:	39 4d 10             	cmp    DWORD PTR [ebp+0x10],ecx
1000b2c5:	75 06                	jne    0x1000b2cd
1000b2c7:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000b2ca:	66 89 08             	mov    WORD PTR [eax],cx
1000b2cd:	39 4d 0c             	cmp    DWORD PTR [ebp+0xc],ecx
1000b2d0:	74 41                	je     0x1000b313
1000b2d2:	56                   	push   esi
1000b2d3:	57                   	push   edi
1000b2d4:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000b2d7:	83 c3 54             	add    ebx,0x54
1000b2da:	c1 7d 0c 03          	sar    DWORD PTR [ebp+0xc],0x3
1000b2de:	83 e0 07             	and    eax,0x7
1000b2e1:	3b c1                	cmp    eax,ecx
1000b2e3:	74 27                	je     0x1000b30c
1000b2e5:	8d 04 40             	lea    eax,[eax+eax*2]
1000b2e8:	66 81 3c 83 00 80    	cmp    WORD PTR [ebx+eax*4],0x8000
1000b2ee:	8d 34 83             	lea    esi,[ebx+eax*4]
1000b2f1:	72 0c                	jb     0x1000b2ff
1000b2f3:	8d 7d f4             	lea    edi,[ebp-0xc]
1000b2f6:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000b2f7:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000b2f8:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
1000b2f9:	ff 4d f6             	dec    DWORD PTR [ebp-0xa]
1000b2fc:	8d 75 f4             	lea    esi,[ebp-0xc]
1000b2ff:	56                   	push   esi
1000b300:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000b303:	e8 72 fd ff ff       	call   0x1000b07a
1000b308:	59                   	pop    ecx
1000b309:	59                   	pop    ecx
1000b30a:	33 c9                	xor    ecx,ecx
1000b30c:	39 4d 0c             	cmp    DWORD PTR [ebp+0xc],ecx
1000b30f:	75 c3                	jne    0x1000b2d4
1000b311:	5f                   	pop    edi
1000b312:	5e                   	pop    esi
1000b313:	5b                   	pop    ebx
1000b314:	c9                   	leave
1000b315:	c3                   	ret
1000b316:	cc                   	int3
1000b317:	cc                   	int3
1000b318:	cc                   	int3
1000b319:	cc                   	int3
1000b31a:	cc                   	int3
1000b31b:	cc                   	int3
1000b31c:	cc                   	int3
1000b31d:	cc                   	int3
1000b31e:	cc                   	int3
1000b31f:	cc                   	int3
1000b320:	55                   	push   ebp
1000b321:	8b ec                	mov    ebp,esp
1000b323:	57                   	push   edi
1000b324:	56                   	push   esi
1000b325:	53                   	push   ebx
1000b326:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1000b329:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000b32c:	8d 05 6c 3c 0e 10    	lea    eax,ds:0x100e3c6c
1000b332:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
1000b336:	75 3b                	jne    0x1000b373
1000b338:	b0 ff                	mov    al,0xff
1000b33a:	8b ff                	mov    edi,edi
1000b33c:	0a c0                	or     al,al
1000b33e:	74 2e                	je     0x1000b36e
1000b340:	8a 06                	mov    al,BYTE PTR [esi]
1000b342:	46                   	inc    esi
1000b343:	8a 27                	mov    ah,BYTE PTR [edi]
1000b345:	47                   	inc    edi
1000b346:	38 c4                	cmp    ah,al
1000b348:	74 f2                	je     0x1000b33c
1000b34a:	2c 41                	sub    al,0x41
1000b34c:	3c 1a                	cmp    al,0x1a
1000b34e:	1a c9                	sbb    cl,cl
1000b350:	80 e1 20             	and    cl,0x20
1000b353:	02 c1                	add    al,cl
1000b355:	04 41                	add    al,0x41
1000b357:	86 e0                	xchg   al,ah
1000b359:	2c 41                	sub    al,0x41
1000b35b:	3c 1a                	cmp    al,0x1a
1000b35d:	1a c9                	sbb    cl,cl
1000b35f:	80 e1 20             	and    cl,0x20
1000b362:	02 c1                	add    al,cl
1000b364:	04 41                	add    al,0x41
1000b366:	38 e0                	cmp    al,ah
1000b368:	74 d2                	je     0x1000b33c
1000b36a:	1a c0                	sbb    al,al
1000b36c:	1c ff                	sbb    al,0xff
1000b36e:	0f be c0             	movsx  eax,al
1000b371:	eb 78                	jmp    0x1000b3eb
1000b373:	f0 ff 05 2c 57 1f 10 	lock inc DWORD PTR ds:0x101f572c
1000b37a:	83 3d 28 57 1f 10 00 	cmp    DWORD PTR ds:0x101f5728,0x0
1000b381:	7f 04                	jg     0x1000b387
1000b383:	6a 00                	push   0x0
1000b385:	eb 15                	jmp    0x1000b39c
1000b387:	f0 ff 0d 2c 57 1f 10 	lock dec DWORD PTR ds:0x101f572c
1000b38e:	6a 13                	push   0x13
1000b390:	e8 dc ad ff ff       	call   0x10006171
1000b395:	c7 04 24 01 00 00 00 	mov    DWORD PTR [esp],0x1
1000b39c:	b8 ff 00 00 00       	mov    eax,0xff
1000b3a1:	33 db                	xor    ebx,ebx
1000b3a3:	90                   	nop
1000b3a4:	0a c0                	or     al,al
1000b3a6:	74 27                	je     0x1000b3cf
1000b3a8:	8a 06                	mov    al,BYTE PTR [esi]
1000b3aa:	46                   	inc    esi
1000b3ab:	8a 1f                	mov    bl,BYTE PTR [edi]
1000b3ad:	47                   	inc    edi
1000b3ae:	38 d8                	cmp    al,bl
1000b3b0:	74 f2                	je     0x1000b3a4
1000b3b2:	50                   	push   eax
1000b3b3:	53                   	push   ebx
1000b3b4:	e8 b6 dd ff ff       	call   0x1000916f
1000b3b9:	8b d8                	mov    ebx,eax
1000b3bb:	83 c4 04             	add    esp,0x4
1000b3be:	e8 ac dd ff ff       	call   0x1000916f
1000b3c3:	83 c4 04             	add    esp,0x4
1000b3c6:	38 c3                	cmp    bl,al
1000b3c8:	74 da                	je     0x1000b3a4
1000b3ca:	1b c0                	sbb    eax,eax
1000b3cc:	83 d8 ff             	sbb    eax,0xffffffff
1000b3cf:	8b d8                	mov    ebx,eax
1000b3d1:	58                   	pop    eax
1000b3d2:	0b c0                	or     eax,eax
1000b3d4:	75 09                	jne    0x1000b3df
1000b3d6:	f0 ff 0d 2c 57 1f 10 	lock dec DWORD PTR ds:0x101f572c
1000b3dd:	eb 0a                	jmp    0x1000b3e9
1000b3df:	6a 13                	push   0x13
1000b3e1:	e8 ec ad ff ff       	call   0x100061d2
1000b3e6:	83 c4 04             	add    esp,0x4
1000b3e9:	8b c3                	mov    eax,ebx
1000b3eb:	5b                   	pop    ebx
1000b3ec:	5e                   	pop    esi
1000b3ed:	5f                   	pop    edi
1000b3ee:	c9                   	leave
1000b3ef:	c3                   	ret
1000b3f0:	55                   	push   ebp
1000b3f1:	8b ec                	mov    ebp,esp
1000b3f3:	57                   	push   edi
1000b3f4:	56                   	push   esi
1000b3f5:	53                   	push   ebx
1000b3f6:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1000b3f9:	0b c9                	or     ecx,ecx
1000b3fb:	0f 84 e9 00 00 00    	je     0x1000b4ea
1000b401:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000b404:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1000b407:	8d 05 6c 3c 0e 10    	lea    eax,ds:0x100e3c6c
1000b40d:	83 78 08 00          	cmp    DWORD PTR [eax+0x8],0x0
1000b411:	75 4e                	jne    0x1000b461
1000b413:	b7 41                	mov    bh,0x41
1000b415:	b3 5a                	mov    bl,0x5a
1000b417:	b6 20                	mov    dh,0x20
1000b419:	8d 49 00             	lea    ecx,[ecx+0x0]
1000b41c:	8a 26                	mov    ah,BYTE PTR [esi]
1000b41e:	0a e4                	or     ah,ah
1000b420:	8a 07                	mov    al,BYTE PTR [edi]
1000b422:	74 21                	je     0x1000b445
1000b424:	0a c0                	or     al,al
1000b426:	74 1d                	je     0x1000b445
1000b428:	46                   	inc    esi
1000b429:	47                   	inc    edi
1000b42a:	38 fc                	cmp    ah,bh
1000b42c:	72 06                	jb     0x1000b434
1000b42e:	38 dc                	cmp    ah,bl
1000b430:	77 02                	ja     0x1000b434
1000b432:	02 e6                	add    ah,dh
1000b434:	38 f8                	cmp    al,bh
1000b436:	72 06                	jb     0x1000b43e
1000b438:	38 d8                	cmp    al,bl
1000b43a:	77 02                	ja     0x1000b43e
1000b43c:	02 c6                	add    al,dh
1000b43e:	38 c4                	cmp    ah,al
1000b440:	75 0d                	jne    0x1000b44f
1000b442:	49                   	dec    ecx
1000b443:	75 d7                	jne    0x1000b41c
1000b445:	33 c9                	xor    ecx,ecx
1000b447:	38 c4                	cmp    ah,al
1000b449:	0f 84 9b 00 00 00    	je     0x1000b4ea
1000b44f:	b9 ff ff ff ff       	mov    ecx,0xffffffff
1000b454:	0f 82 90 00 00 00    	jb     0x1000b4ea
1000b45a:	f7 d9                	neg    ecx
1000b45c:	e9 89 00 00 00       	jmp    0x1000b4ea
1000b461:	f0 ff 05 2c 57 1f 10 	lock inc DWORD PTR ds:0x101f572c
1000b468:	83 3d 28 57 1f 10 00 	cmp    DWORD PTR ds:0x101f5728,0x0
1000b46f:	7f 04                	jg     0x1000b475
1000b471:	6a 00                	push   0x0
1000b473:	eb 19                	jmp    0x1000b48e
1000b475:	f0 ff 0d 2c 57 1f 10 	lock dec DWORD PTR ds:0x101f572c
1000b47c:	8b d9                	mov    ebx,ecx
1000b47e:	6a 13                	push   0x13
1000b480:	e8 ec ac ff ff       	call   0x10006171
1000b485:	c7 04 24 01 00 00 00 	mov    DWORD PTR [esp],0x1
1000b48c:	8b cb                	mov    ecx,ebx
1000b48e:	33 c0                	xor    eax,eax
1000b490:	33 db                	xor    ebx,ebx
1000b492:	8b ff                	mov    edi,edi
1000b494:	8a 06                	mov    al,BYTE PTR [esi]
1000b496:	0b c0                	or     eax,eax
1000b498:	8a 1f                	mov    bl,BYTE PTR [edi]
1000b49a:	74 23                	je     0x1000b4bf
1000b49c:	0b db                	or     ebx,ebx
1000b49e:	74 1f                	je     0x1000b4bf
1000b4a0:	46                   	inc    esi
1000b4a1:	47                   	inc    edi
1000b4a2:	51                   	push   ecx
1000b4a3:	50                   	push   eax
1000b4a4:	53                   	push   ebx
1000b4a5:	e8 c5 dc ff ff       	call   0x1000916f
1000b4aa:	8b d8                	mov    ebx,eax
1000b4ac:	83 c4 04             	add    esp,0x4
1000b4af:	e8 bb dc ff ff       	call   0x1000916f
1000b4b4:	83 c4 04             	add    esp,0x4
1000b4b7:	59                   	pop    ecx
1000b4b8:	3b c3                	cmp    eax,ebx
1000b4ba:	75 09                	jne    0x1000b4c5
1000b4bc:	49                   	dec    ecx
1000b4bd:	75 d5                	jne    0x1000b494
1000b4bf:	33 c9                	xor    ecx,ecx
1000b4c1:	3b c3                	cmp    eax,ebx
1000b4c3:	74 09                	je     0x1000b4ce
1000b4c5:	b9 ff ff ff ff       	mov    ecx,0xffffffff
1000b4ca:	72 02                	jb     0x1000b4ce
1000b4cc:	f7 d9                	neg    ecx
1000b4ce:	58                   	pop    eax
1000b4cf:	0b c0                	or     eax,eax
1000b4d1:	75 09                	jne    0x1000b4dc
1000b4d3:	f0 ff 0d 2c 57 1f 10 	lock dec DWORD PTR ds:0x101f572c
1000b4da:	eb 0e                	jmp    0x1000b4ea
1000b4dc:	8b d9                	mov    ebx,ecx
1000b4de:	6a 13                	push   0x13
1000b4e0:	e8 ed ac ff ff       	call   0x100061d2
1000b4e5:	83 c4 04             	add    esp,0x4
1000b4e8:	8b cb                	mov    ecx,ebx
1000b4ea:	8b c1                	mov    eax,ecx
1000b4ec:	5b                   	pop    ebx
1000b4ed:	5e                   	pop    esi
1000b4ee:	5f                   	pop    edi
1000b4ef:	c9                   	leave
1000b4f0:	c3                   	ret
1000b4f1:	cc                   	int3
1000b4f2:	cc                   	int3
1000b4f3:	cc                   	int3
1000b4f4:	cc                   	int3
1000b4f5:	cc                   	int3
1000b4f6:	cc                   	int3
1000b4f7:	cc                   	int3
1000b4f8:	cc                   	int3
1000b4f9:	cc                   	int3
1000b4fa:	cc                   	int3
1000b4fb:	cc                   	int3
1000b4fc:	cc                   	int3
1000b4fd:	cc                   	int3
1000b4fe:	cc                   	int3
1000b4ff:	cc                   	int3
1000b500:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000b504:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
1000b508:	0b c8                	or     ecx,eax
1000b50a:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1000b50e:	75 09                	jne    0x1000b519
1000b510:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1000b514:	f7 e1                	mul    ecx
1000b516:	c2 10 00             	ret    0x10
1000b519:	53                   	push   ebx
1000b51a:	f7 e1                	mul    ecx
1000b51c:	8b d8                	mov    ebx,eax
1000b51e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000b522:	f7 64 24 14          	mul    DWORD PTR [esp+0x14]
1000b526:	03 d8                	add    ebx,eax
1000b528:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1000b52c:	f7 e1                	mul    ecx
1000b52e:	03 d3                	add    edx,ebx
1000b530:	5b                   	pop    ebx
1000b531:	c2 10 00             	ret    0x10
1000b534:	ff 25 cc c0 00 10    	jmp    DWORD PTR ds:0x1000c0cc
