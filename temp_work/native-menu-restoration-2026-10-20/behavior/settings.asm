  55a005:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55a008:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55a00b:	e8 e8 6b ff ff       	call   0x550bf8
  55a010:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
  55a013:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a016:	8b 00                	mov    eax,DWORD PTR [eax]
  55a018:	e8 27 87 ed ff       	call   0x432744
  55a01d:	8d 55 ec             	lea    edx,[ebp-0x14]
  55a020:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a023:	8b 00                	mov    eax,DWORD PTR [eax]
  55a025:	e8 ea 86 ed ff       	call   0x432714
  55a02a:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  55a02d:	e8 fe 9f ea ff       	call   0x404030
  55a032:	48                   	dec    eax
  55a033:	7e 19                	jle    0x55a04e
  55a035:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a03a:	8b 00                	mov    eax,DWORD PTR [eax]
  55a03c:	8b 90 c4 00 00 00    	mov    edx,DWORD PTR [eax+0xc4]
  55a042:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a045:	8b 00                	mov    eax,DWORD PTR [eax]
  55a047:	e8 a4 4a f5 ff       	call   0x4aeaf0
  55a04c:	eb 17                	jmp    0x55a065
  55a04e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a053:	8b 00                	mov    eax,DWORD PTR [eax]
  55a055:	8b 90 c0 00 00 00    	mov    edx,DWORD PTR [eax+0xc0]
  55a05b:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a05e:	8b 00                	mov    eax,DWORD PTR [eax]
  55a060:	e8 8b 4a f5 ff       	call   0x4aeaf0
  55a065:	33 c0                	xor    eax,eax
  55a067:	5a                   	pop    edx
  55a068:	59                   	pop    ecx
  55a069:	59                   	pop    ecx
  55a06a:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55a06d:	68 8a a0 55 00       	push   0x55a08a
  55a072:	8d 45 ec             	lea    eax,[ebp-0x14]
  55a075:	e8 36 9d ea ff       	call   0x403db0
  55a07a:	8d 45 f0             	lea    eax,[ebp-0x10]
  55a07d:	e8 2e 9d ea ff       	call   0x403db0
  55a082:	c3                   	ret
  55a083:	e9 6c 97 ea ff       	jmp    0x4037f4
  55a088:	eb e8                	jmp    0x55a072
  55a08a:	5b                   	pop    ebx
  55a08b:	8b e5                	mov    esp,ebp
  55a08d:	5d                   	pop    ebp
  55a08e:	c3                   	ret
  55a08f:	90                   	nop
  55a090:	55                   	push   ebp
  55a091:	8b ec                	mov    ebp,esp
  55a093:	83 c4 ec             	add    esp,0xffffffec
  55a096:	53                   	push   ebx
  55a097:	33 db                	xor    ebx,ebx
  55a099:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
  55a09c:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
  55a09f:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  55a0a2:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55a0a5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a0a8:	33 c0                	xor    eax,eax
  55a0aa:	55                   	push   ebp
  55a0ab:	68 9a a1 55 00       	push   0x55a19a
  55a0b0:	64 ff 30             	push   DWORD PTR fs:[eax]
  55a0b3:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55a0b6:	8d 55 f0             	lea    edx,[ebp-0x10]
  55a0b9:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a0bc:	e8 53 86 ed ff       	call   0x432714
  55a0c1:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  55a0c4:	e8 67 9f ea ff       	call   0x404030
  55a0c9:	85 c0                	test   eax,eax
  55a0cb:	0f 8f 86 00 00 00    	jg     0x55a157
  55a0d1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a0d6:	8b 00                	mov    eax,DWORD PTR [eax]
  55a0d8:	8b 80 c8 00 00 00    	mov    eax,DWORD PTR [eax+0xc8]
  55a0de:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55a0e1:	3b 82 74 01 00 00    	cmp    eax,DWORD PTR [edx+0x174]
  55a0e7:	75 09                	jne    0x55a0f2
  55a0e9:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55a0ec:	c7 00 25 00 00 00    	mov    DWORD PTR [eax],0x25
  55a0f2:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a0f7:	8b 00                	mov    eax,DWORD PTR [eax]
  55a0f9:	8b 80 d4 00 00 00    	mov    eax,DWORD PTR [eax+0xd4]
  55a0ff:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55a102:	3b 82 74 01 00 00    	cmp    eax,DWORD PTR [edx+0x174]
  55a108:	75 09                	jne    0x55a113
  55a10a:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55a10d:	c7 00 26 00 00 00    	mov    DWORD PTR [eax],0x26
  55a113:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a118:	8b 00                	mov    eax,DWORD PTR [eax]
  55a11a:	8b 80 cc 00 00 00    	mov    eax,DWORD PTR [eax+0xcc]
  55a120:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55a123:	3b 82 74 01 00 00    	cmp    eax,DWORD PTR [edx+0x174]
  55a129:	75 09                	jne    0x55a134
  55a12b:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55a12e:	c7 00 27 00 00 00    	mov    DWORD PTR [eax],0x27
  55a134:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a139:	8b 00                	mov    eax,DWORD PTR [eax]
  55a13b:	8b 80 d0 00 00 00    	mov    eax,DWORD PTR [eax+0xd0]
  55a141:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55a144:	3b 82 74 01 00 00    	cmp    eax,DWORD PTR [edx+0x174]
  55a14a:	75 33                	jne    0x55a17f
  55a14c:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55a14f:	c7 00 28 00 00 00    	mov    DWORD PTR [eax],0x28
  55a155:	eb 28                	jmp    0x55a17f
  55a157:	8d 55 ec             	lea    edx,[ebp-0x14]
  55a15a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a15d:	e8 b2 85 ed ff       	call   0x432714
  55a162:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  55a165:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a16a:	8b 00                	mov    eax,DWORD PTR [eax]
  55a16c:	8b 80 20 01 00 00    	mov    eax,DWORD PTR [eax+0x120]
  55a172:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55a175:	e8 fe 6a ff ff       	call   0x550c78
  55a17a:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55a17d:	89 02                	mov    DWORD PTR [edx],eax
  55a17f:	33 c0                	xor    eax,eax
  55a181:	5a                   	pop    edx
  55a182:	59                   	pop    ecx
  55a183:	59                   	pop    ecx
  55a184:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55a187:	68 a1 a1 55 00       	push   0x55a1a1
  55a18c:	8d 45 ec             	lea    eax,[ebp-0x14]
  55a18f:	ba 02 00 00 00       	mov    edx,0x2
  55a194:	e8 3b 9c ea ff       	call   0x403dd4
  55a199:	c3                   	ret
  55a19a:	e9 55 96 ea ff       	jmp    0x4037f4
  55a19f:	eb eb                	jmp    0x55a18c
  55a1a1:	5b                   	pop    ebx
  55a1a2:	8b e5                	mov    esp,ebp
  55a1a4:	5d                   	pop    ebp
  55a1a5:	c3                   	ret
  55a1a6:	8b c0                	mov    eax,eax
  55a1a8:	55                   	push   ebp
  55a1a9:	8b ec                	mov    ebp,esp
  55a1ab:	51                   	push   ecx
  55a1ac:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a1af:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1b2:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a1b8:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  55a1bb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1be:	8d 90 08 03 00 00    	lea    edx,[eax+0x308]
  55a1c4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1c7:	e8 50 fd ff ff       	call   0x559f1c
  55a1cc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1cf:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a1d5:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
  55a1d8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1db:	8d 90 14 03 00 00    	lea    edx,[eax+0x314]
  55a1e1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1e4:	e8 33 fd ff ff       	call   0x559f1c
  55a1e9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1ec:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a1f2:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  55a1f5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a1f8:	8d 90 0c 03 00 00    	lea    edx,[eax+0x30c]
  55a1fe:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a201:	e8 16 fd ff ff       	call   0x559f1c
  55a206:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a209:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a20f:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  55a212:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a215:	8d 90 10 03 00 00    	lea    edx,[eax+0x310]
  55a21b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a21e:	e8 f9 fc ff ff       	call   0x559f1c
  55a223:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a226:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a22c:	8b 48 18             	mov    ecx,DWORD PTR [eax+0x18]
  55a22f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a232:	8d 90 18 03 00 00    	lea    edx,[eax+0x318]
  55a238:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a23b:	e8 dc fc ff ff       	call   0x559f1c
  55a240:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a243:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a249:	8b 48 1c             	mov    ecx,DWORD PTR [eax+0x1c]
  55a24c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a24f:	8d 90 20 03 00 00    	lea    edx,[eax+0x320]
  55a255:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a258:	e8 bf fc ff ff       	call   0x559f1c
  55a25d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a260:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a266:	8b 48 20             	mov    ecx,DWORD PTR [eax+0x20]
  55a269:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a26c:	8d 90 1c 03 00 00    	lea    edx,[eax+0x31c]
  55a272:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a275:	e8 a2 fc ff ff       	call   0x559f1c
  55a27a:	59                   	pop    ecx
  55a27b:	5d                   	pop    ebp
  55a27c:	c3                   	ret
  55a27d:	8d 40 00             	lea    eax,[eax+0x0]
  55a280:	55                   	push   ebp
  55a281:	8b ec                	mov    ebp,esp
  55a283:	83 c4 e0             	add    esp,0xffffffe0
  55a286:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a289:	8d 4d f8             	lea    ecx,[ebp-0x8]
  55a28c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a28f:	8b 90 08 03 00 00    	mov    edx,DWORD PTR [eax+0x308]
  55a295:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a298:	e8 f3 fd ff ff       	call   0x55a090
  55a29d:	8d 4d f4             	lea    ecx,[ebp-0xc]
  55a2a0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2a3:	8b 90 14 03 00 00    	mov    edx,DWORD PTR [eax+0x314]
  55a2a9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2ac:	e8 df fd ff ff       	call   0x55a090
  55a2b1:	8d 4d f0             	lea    ecx,[ebp-0x10]
  55a2b4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2b7:	8b 90 0c 03 00 00    	mov    edx,DWORD PTR [eax+0x30c]
  55a2bd:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2c0:	e8 cb fd ff ff       	call   0x55a090
  55a2c5:	8d 4d ec             	lea    ecx,[ebp-0x14]
  55a2c8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2cb:	8b 90 10 03 00 00    	mov    edx,DWORD PTR [eax+0x310]
  55a2d1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2d4:	e8 b7 fd ff ff       	call   0x55a090
  55a2d9:	8d 4d e8             	lea    ecx,[ebp-0x18]
  55a2dc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2df:	8b 90 18 03 00 00    	mov    edx,DWORD PTR [eax+0x318]
  55a2e5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2e8:	e8 a3 fd ff ff       	call   0x55a090
  55a2ed:	8d 4d e4             	lea    ecx,[ebp-0x1c]
  55a2f0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2f3:	8b 90 20 03 00 00    	mov    edx,DWORD PTR [eax+0x320]
  55a2f9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a2fc:	e8 8f fd ff ff       	call   0x55a090
  55a301:	8d 4d e0             	lea    ecx,[ebp-0x20]
  55a304:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a307:	8b 90 1c 03 00 00    	mov    edx,DWORD PTR [eax+0x31c]
  55a30d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a310:	e8 7b fd ff ff       	call   0x55a090
  55a315:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a318:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a31e:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55a321:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  55a324:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a327:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a32d:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55a330:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
  55a333:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a336:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a33c:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
  55a33f:	89 50 10             	mov    DWORD PTR [eax+0x10],edx
  55a342:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a345:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a34b:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  55a34e:	89 50 14             	mov    DWORD PTR [eax+0x14],edx
  55a351:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a354:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a35a:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  55a35d:	89 50 18             	mov    DWORD PTR [eax+0x18],edx
  55a360:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a363:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a369:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  55a36c:	89 50 1c             	mov    DWORD PTR [eax+0x1c],edx
  55a36f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a372:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55a378:	8b 55 e0             	mov    edx,DWORD PTR [ebp-0x20]
  55a37b:	89 50 20             	mov    DWORD PTR [eax+0x20],edx
  55a37e:	8b e5                	mov    esp,ebp
  55a380:	5d                   	pop    ebp
  55a381:	c3                   	ret
  55a382:	8b c0                	mov    eax,eax
  55a384:	55                   	push   ebp
  55a385:	8b ec                	mov    ebp,esp
  55a387:	83 c4 f4             	add    esp,0xfffffff4
  55a38a:	33 c9                	xor    ecx,ecx
  55a38c:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  55a38f:	88 55 fb             	mov    BYTE PTR [ebp-0x5],dl
  55a392:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a395:	33 c0                	xor    eax,eax
  55a397:	55                   	push   ebp
  55a398:	68 bb a5 55 00       	push   0x55a5bb
  55a39d:	64 ff 30             	push   DWORD PTR fs:[eax]
  55a3a0:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55a3a3:	8a 45 fb             	mov    al,BYTE PTR [ebp-0x5]
  55a3a6:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55a3a9:	88 82 50 03 00 00    	mov    BYTE PTR [edx+0x350],al
  55a3af:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a3b2:	80 b8 50 03 00 00 01 	cmp    BYTE PTR [eax+0x350],0x1
  55a3b9:	74 10                	je     0x55a3cb
  55a3bb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a3be:	80 b8 50 03 00 00 02 	cmp    BYTE PTR [eax+0x350],0x2
  55a3c5:	0f 85 73 01 00 00    	jne    0x55a53e
  55a3cb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a3ce:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a3d4:	8b 80 74 01 00 00    	mov    eax,DWORD PTR [eax+0x174]
  55a3da:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55a3dd:	89 82 5c 03 00 00    	mov    DWORD PTR [edx+0x35c],eax
  55a3e3:	8d 55 f4             	lea    edx,[ebp-0xc]
  55a3e6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a3e9:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a3ef:	e8 20 83 ed ff       	call   0x432714
  55a3f4:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55a3f7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a3fa:	05 60 03 00 00       	add    eax,0x360
  55a3ff:	e8 00 9a ea ff       	call   0x403e04
  55a404:	33 d2                	xor    edx,edx
  55a406:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a409:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a40f:	e8 30 83 ed ff       	call   0x432744
  55a414:	33 d2                	xor    edx,edx
  55a416:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a419:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a41f:	8b 08                	mov    ecx,DWORD PTR [eax]
  55a421:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55a424:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a429:	8b 00                	mov    eax,DWORD PTR [eax]
  55a42b:	8b 90 c0 00 00 00    	mov    edx,DWORD PTR [eax+0xc0]
  55a431:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a434:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a43a:	e8 b1 46 f5 ff       	call   0x4aeaf0
  55a43f:	33 d2                	xor    edx,edx
  55a441:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a444:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a44a:	e8 dd 81 ed ff       	call   0x43262c
  55a44f:	33 d2                	xor    edx,edx
  55a451:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a454:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a45a:	8b 08                	mov    ecx,DWORD PTR [eax]
  55a45c:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55a45f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a462:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a468:	8b 50 38             	mov    edx,DWORD PTR [eax+0x38]
  55a46b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a46e:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a474:	2b 50 38             	sub    edx,DWORD PTR [eax+0x38]
  55a477:	71 05                	jno    0x55a47e
  55a479:	e8 56 8b ea ff       	call   0x402fd4
  55a47e:	d1 fa                	sar    edx,1
  55a480:	79 03                	jns    0x55a485
  55a482:	83 d2 00             	adc    edx,0x0
  55a485:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a488:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a48e:	03 50 30             	add    edx,DWORD PTR [eax+0x30]
  55a491:	71 05                	jno    0x55a498
  55a493:	e8 3c 8b ea ff       	call   0x402fd4
  55a498:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a49b:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a4a1:	e8 8e 7a ed ff       	call   0x431f34
  55a4a6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a4a9:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a4af:	8b 50 3c             	mov    edx,DWORD PTR [eax+0x3c]
  55a4b2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a4b5:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a4bb:	2b 50 3c             	sub    edx,DWORD PTR [eax+0x3c]
  55a4be:	71 05                	jno    0x55a4c5
  55a4c0:	e8 0f 8b ea ff       	call   0x402fd4
  55a4c5:	d1 fa                	sar    edx,1
  55a4c7:	79 03                	jns    0x55a4cc
  55a4c9:	83 d2 00             	adc    edx,0x0
  55a4cc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a4cf:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a4d5:	03 50 34             	add    edx,DWORD PTR [eax+0x34]
  55a4d8:	71 05                	jno    0x55a4df
  55a4da:	e8 f5 8a ea ff       	call   0x402fd4
  55a4df:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a4e2:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a4e8:	e8 67 7a ed ff       	call   0x431f54
  55a4ed:	33 d2                	xor    edx,edx
  55a4ef:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a4f2:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a4f8:	e8 47 82 ed ff       	call   0x432744
  55a4fd:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a500:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a506:	e8 4d 84 ed ff       	call   0x432958
  55a50b:	b2 01                	mov    dl,0x1
  55a50d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a510:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a516:	e8 11 81 ed ff       	call   0x43262c
  55a51b:	b2 01                	mov    dl,0x1
  55a51d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a520:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a526:	8b 08                	mov    ecx,DWORD PTR [eax]
  55a528:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55a52b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a52e:	8b 90 2c 03 00 00    	mov    edx,DWORD PTR [eax+0x32c]
  55a534:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a537:	e8 10 1d ef ff       	call   0x44c24c
  55a53c:	eb 67                	jmp    0x55a5a5
  55a53e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a541:	80 b8 50 03 00 00 00 	cmp    BYTE PTR [eax+0x350],0x0
  55a548:	75 5b                	jne    0x55a5a5
  55a54a:	b2 01                	mov    dl,0x1
  55a54c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a54f:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a555:	8b 08                	mov    ecx,DWORD PTR [eax]
  55a557:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55a55a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a55d:	33 d2                	xor    edx,edx
  55a55f:	89 90 54 03 00 00    	mov    DWORD PTR [eax+0x354],edx
  55a565:	33 d2                	xor    edx,edx
  55a567:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a56a:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a570:	e8 b7 80 ed ff       	call   0x43262c
  55a575:	33 d2                	xor    edx,edx
  55a577:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a57a:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a580:	8b 08                	mov    ecx,DWORD PTR [eax]
  55a582:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55a585:	33 d2                	xor    edx,edx
  55a587:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a58a:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a590:	e8 af 81 ed ff       	call   0x432744
  55a595:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a598:	e8 e3 fc ff ff       	call   0x55a280
  55a59d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a5a0:	e8 03 fc ff ff       	call   0x55a1a8
  55a5a5:	33 c0                	xor    eax,eax
  55a5a7:	5a                   	pop    edx
  55a5a8:	59                   	pop    ecx
  55a5a9:	59                   	pop    ecx
  55a5aa:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55a5ad:	68 c2 a5 55 00       	push   0x55a5c2
  55a5b2:	8d 45 f4             	lea    eax,[ebp-0xc]
  55a5b5:	e8 f6 97 ea ff       	call   0x403db0
  55a5ba:	c3                   	ret
  55a5bb:	e9 34 92 ea ff       	jmp    0x4037f4
  55a5c0:	eb f0                	jmp    0x55a5b2
  55a5c2:	8b e5                	mov    esp,ebp
  55a5c4:	5d                   	pop    ebp
  55a5c5:	c3                   	ret
  55a5c6:	8b c0                	mov    eax,eax
  55a5c8:	55                   	push   ebp
  55a5c9:	8b ec                	mov    ebp,esp
  55a5cb:	83 c4 dc             	add    esp,0xffffffdc
  55a5ce:	53                   	push   ebx
  55a5cf:	33 db                	xor    ebx,ebx
  55a5d1:	89 5d e8             	mov    DWORD PTR [ebp-0x18],ebx
  55a5d4:	89 5d e0             	mov    DWORD PTR [ebp-0x20],ebx
  55a5d7:	89 5d dc             	mov    DWORD PTR [ebp-0x24],ebx
  55a5da:	89 5d e4             	mov    DWORD PTR [ebp-0x1c],ebx
  55a5dd:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  55a5e0:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55a5e3:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a5e6:	33 c0                	xor    eax,eax
  55a5e8:	55                   	push   ebp
  55a5e9:	68 0c a7 55 00       	push   0x55a70c
  55a5ee:	64 ff 30             	push   DWORD PTR fs:[eax]
  55a5f1:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55a5f4:	c6 45 f3 00          	mov    BYTE PTR [ebp-0xd],0x0
  55a5f8:	33 c0                	xor    eax,eax
  55a5fa:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  55a5fd:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55a600:	83 e8 25             	sub    eax,0x25
  55a603:	74 0b                	je     0x55a610
  55a605:	48                   	dec    eax
  55a606:	74 1d                	je     0x55a625
  55a608:	48                   	dec    eax
  55a609:	74 2f                	je     0x55a63a
  55a60b:	48                   	dec    eax
  55a60c:	74 3e                	je     0x55a64c
  55a60e:	eb 4e                	jmp    0x55a65e
  55a610:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a615:	8b 00                	mov    eax,DWORD PTR [eax]
  55a617:	8b 80 c8 00 00 00    	mov    eax,DWORD PTR [eax+0xc8]
  55a61d:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  55a620:	e9 96 00 00 00       	jmp    0x55a6bb
  55a625:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a62a:	8b 00                	mov    eax,DWORD PTR [eax]
  55a62c:	8b 80 d4 00 00 00    	mov    eax,DWORD PTR [eax+0xd4]
  55a632:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  55a635:	e9 81 00 00 00       	jmp    0x55a6bb
  55a63a:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a63f:	8b 00                	mov    eax,DWORD PTR [eax]
  55a641:	8b 80 cc 00 00 00    	mov    eax,DWORD PTR [eax+0xcc]
  55a647:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  55a64a:	eb 6f                	jmp    0x55a6bb
  55a64c:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a651:	8b 00                	mov    eax,DWORD PTR [eax]
  55a653:	8b 80 d0 00 00 00    	mov    eax,DWORD PTR [eax+0xd0]
  55a659:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  55a65c:	eb 5d                	jmp    0x55a6bb
  55a65e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a661:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a667:	3b 45 f8             	cmp    eax,DWORD PTR [ebp-0x8]
  55a66a:	74 4f                	je     0x55a6bb
  55a66c:	8d 55 e4             	lea    edx,[ebp-0x1c]
  55a66f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a672:	e8 9d 80 ed ff       	call   0x432714
  55a677:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  55a67a:	8d 55 e8             	lea    edx,[ebp-0x18]
  55a67d:	e8 0e f0 ea ff       	call   0x409690
  55a682:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  55a685:	50                   	push   eax
  55a686:	8d 4d dc             	lea    ecx,[ebp-0x24]
  55a689:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a68e:	8b 00                	mov    eax,DWORD PTR [eax]
  55a690:	8b 80 20 01 00 00    	mov    eax,DWORD PTR [eax+0x120]
  55a696:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55a699:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55a69c:	e8 57 65 ff ff       	call   0x550bf8
  55a6a1:	8b 45 dc             	mov    eax,DWORD PTR [ebp-0x24]
  55a6a4:	8d 55 e0             	lea    edx,[ebp-0x20]
  55a6a7:	e8 e4 ef ea ff       	call   0x409690
  55a6ac:	8b 55 e0             	mov    edx,DWORD PTR [ebp-0x20]
  55a6af:	58                   	pop    eax
  55a6b0:	e8 8b 9a ea ff       	call   0x404140
  55a6b5:	75 04                	jne    0x55a6bb
  55a6b7:	c6 45 f3 01          	mov    BYTE PTR [ebp-0xd],0x1
  55a6bb:	83 7d ec 00          	cmp    DWORD PTR [ebp-0x14],0x0
  55a6bf:	74 20                	je     0x55a6e1
  55a6c1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a6c4:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a6ca:	3b 45 f8             	cmp    eax,DWORD PTR [ebp-0x8]
  55a6cd:	74 12                	je     0x55a6e1
  55a6cf:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a6d2:	8b 80 74 01 00 00    	mov    eax,DWORD PTR [eax+0x174]
  55a6d8:	3b 45 ec             	cmp    eax,DWORD PTR [ebp-0x14]
  55a6db:	75 04                	jne    0x55a6e1
  55a6dd:	c6 45 f3 01          	mov    BYTE PTR [ebp-0xd],0x1
  55a6e1:	33 c0                	xor    eax,eax
  55a6e3:	5a                   	pop    edx
  55a6e4:	59                   	pop    ecx
  55a6e5:	59                   	pop    ecx
  55a6e6:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55a6e9:	68 13 a7 55 00       	push   0x55a713
  55a6ee:	8d 45 dc             	lea    eax,[ebp-0x24]
  55a6f1:	ba 02 00 00 00       	mov    edx,0x2
  55a6f6:	e8 d9 96 ea ff       	call   0x403dd4
  55a6fb:	8d 45 e4             	lea    eax,[ebp-0x1c]
  55a6fe:	e8 ad 96 ea ff       	call   0x403db0
  55a703:	8d 45 e8             	lea    eax,[ebp-0x18]
  55a706:	e8 a5 96 ea ff       	call   0x403db0
  55a70b:	c3                   	ret
  55a70c:	e9 e3 90 ea ff       	jmp    0x4037f4
  55a711:	eb db                	jmp    0x55a6ee
  55a713:	8a 45 f3             	mov    al,BYTE PTR [ebp-0xd]
  55a716:	5b                   	pop    ebx
  55a717:	8b e5                	mov    esp,ebp
  55a719:	5d                   	pop    ebp
  55a71a:	c3                   	ret
  55a71b:	90                   	nop
  55a71c:	55                   	push   ebp
  55a71d:	8b ec                	mov    ebp,esp
  55a71f:	83 c4 f4             	add    esp,0xfffffff4
  55a722:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55a725:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a728:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  55a72b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a72e:	8b 90 0c 03 00 00    	mov    edx,DWORD PTR [eax+0x30c]
  55a734:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a737:	e8 8c fe ff ff       	call   0x55a5c8
  55a73c:	84 c0                	test   al,al
  55a73e:	0f 85 94 00 00 00    	jne    0x55a7d8
  55a744:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  55a747:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a74a:	8b 90 08 03 00 00    	mov    edx,DWORD PTR [eax+0x308]
  55a750:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a753:	e8 70 fe ff ff       	call   0x55a5c8
  55a758:	84 c0                	test   al,al
  55a75a:	75 7c                	jne    0x55a7d8
  55a75c:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  55a75f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a762:	8b 90 10 03 00 00    	mov    edx,DWORD PTR [eax+0x310]
  55a768:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a76b:	e8 58 fe ff ff       	call   0x55a5c8
  55a770:	84 c0                	test   al,al
  55a772:	75 64                	jne    0x55a7d8
  55a774:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  55a777:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a77a:	8b 90 14 03 00 00    	mov    edx,DWORD PTR [eax+0x314]
  55a780:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a783:	e8 40 fe ff ff       	call   0x55a5c8
  55a788:	84 c0                	test   al,al
  55a78a:	75 4c                	jne    0x55a7d8
  55a78c:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  55a78f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a792:	8b 90 18 03 00 00    	mov    edx,DWORD PTR [eax+0x318]
  55a798:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a79b:	e8 28 fe ff ff       	call   0x55a5c8
  55a7a0:	84 c0                	test   al,al
  55a7a2:	75 34                	jne    0x55a7d8
  55a7a4:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  55a7a7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a7aa:	8b 90 1c 03 00 00    	mov    edx,DWORD PTR [eax+0x31c]
  55a7b0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a7b3:	e8 10 fe ff ff       	call   0x55a5c8
  55a7b8:	84 c0                	test   al,al
  55a7ba:	75 1c                	jne    0x55a7d8
  55a7bc:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  55a7bf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a7c2:	8b 90 20 03 00 00    	mov    edx,DWORD PTR [eax+0x320]
  55a7c8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a7cb:	e8 f8 fd ff ff       	call   0x55a5c8
  55a7d0:	84 c0                	test   al,al
  55a7d2:	75 04                	jne    0x55a7d8
  55a7d4:	33 c0                	xor    eax,eax
  55a7d6:	eb 02                	jmp    0x55a7da
  55a7d8:	b0 01                	mov    al,0x1
  55a7da:	88 45 f7             	mov    BYTE PTR [ebp-0x9],al
  55a7dd:	8a 45 f7             	mov    al,BYTE PTR [ebp-0x9]
  55a7e0:	8b e5                	mov    esp,ebp
  55a7e2:	5d                   	pop    ebp
  55a7e3:	c3                   	ret
  55a7e4:	55                   	push   ebp
  55a7e5:	8b ec                	mov    ebp,esp
  55a7e7:	83 c4 f8             	add    esp,0xfffffff8
  55a7ea:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55a7ed:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a7f0:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a7f3:	83 48 0c 04          	or     DWORD PTR [eax+0xc],0x4
  55a7f7:	59                   	pop    ecx
  55a7f8:	59                   	pop    ecx
  55a7f9:	5d                   	pop    ebp
  55a7fa:	c3                   	ret
  55a7fb:	90                   	nop
  55a7fc:	55                   	push   ebp
  55a7fd:	8b ec                	mov    ebp,esp
  55a7ff:	83 c4 f0             	add    esp,0xfffffff0
  55a802:	53                   	push   ebx
  55a803:	33 db                	xor    ebx,ebx
  55a805:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  55a808:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  55a80b:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
  55a80e:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a811:	33 c0                	xor    eax,eax
  55a813:	55                   	push   ebp
  55a814:	68 9f a9 55 00       	push   0x55a99f
  55a819:	64 ff 30             	push   DWORD PTR fs:[eax]
  55a81c:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55a81f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a822:	66 83 38 1b          	cmp    WORD PTR [eax],0x1b
  55a826:	75 0d                	jne    0x55a835
  55a828:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a82b:	e8 98 02 00 00       	call   0x55aac8
  55a830:	e9 54 01 00 00       	jmp    0x55a989
  55a835:	8d 4d f4             	lea    ecx,[ebp-0xc]
  55a838:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55a83b:	0f b7 12             	movzx  edx,WORD PTR [edx]
  55a83e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55a843:	8b 00                	mov    eax,DWORD PTR [eax]
  55a845:	8b 80 20 01 00 00    	mov    eax,DWORD PTR [eax+0x120]
  55a84b:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55a84e:	e8 a5 63 ff ff       	call   0x550bf8
  55a853:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a856:	80 b8 50 03 00 00 01 	cmp    BYTE PTR [eax+0x350],0x1
  55a85d:	74 10                	je     0x55a86f
  55a85f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a862:	80 b8 50 03 00 00 02 	cmp    BYTE PTR [eax+0x350],0x2
  55a869:	0f 85 1a 01 00 00    	jne    0x55a989
  55a86f:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  55a873:	75 3f                	jne    0x55a8b4
  55a875:	e8 36 2f eb ff       	call   0x40d7b0
  55a87a:	33 d2                	xor    edx,edx
  55a87c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a87f:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a885:	e8 a2 7d ed ff       	call   0x43262c
  55a88a:	e8 e5 a4 ff ff       	call   0x554d74
  55a88f:	33 d2                	xor    edx,edx
  55a891:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a894:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a89a:	e8 a5 7e ed ff       	call   0x432744
  55a89f:	b2 01                	mov    dl,0x1
  55a8a1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a8a4:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a8aa:	e8 7d 7d ed ff       	call   0x43262c
  55a8af:	e9 d5 00 00 00       	jmp    0x55a989
  55a8b4:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55a8b7:	0f b7 12             	movzx  edx,WORD PTR [edx]
  55a8ba:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a8bd:	e8 5a fe ff ff       	call   0x55a71c
  55a8c2:	84 c0                	test   al,al
  55a8c4:	74 3f                	je     0x55a905
  55a8c6:	e8 e5 2e eb ff       	call   0x40d7b0
  55a8cb:	33 d2                	xor    edx,edx
  55a8cd:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a8d0:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a8d6:	e8 51 7d ed ff       	call   0x43262c
  55a8db:	e8 dc a5 ff ff       	call   0x554ebc
  55a8e0:	33 d2                	xor    edx,edx
  55a8e2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a8e5:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a8eb:	e8 54 7e ed ff       	call   0x432744
  55a8f0:	b2 01                	mov    dl,0x1
  55a8f2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a8f5:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a8fb:	e8 2c 7d ed ff       	call   0x43262c
  55a900:	e9 84 00 00 00       	jmp    0x55a989
  55a905:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  55a908:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a90b:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a911:	e8 2e 7e ed ff       	call   0x432744
  55a916:	b2 01                	mov    dl,0x1
  55a918:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a91b:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55a921:	8b 08                	mov    ecx,DWORD PTR [eax]
  55a923:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55a926:	33 d2                	xor    edx,edx
  55a928:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a92b:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55a931:	e8 0e 7e ed ff       	call   0x432744
  55a936:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a939:	80 b8 50 03 00 00 02 	cmp    BYTE PTR [eax+0x350],0x2
  55a940:	75 3d                	jne    0x55a97f
  55a942:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a945:	8d 90 54 03 00 00    	lea    edx,[eax+0x354]
  55a94b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a94e:	e8 5d 00 00 00       	call   0x55a9b0
  55a953:	84 c0                	test   al,al
  55a955:	74 1c                	je     0x55a973
  55a957:	b2 02                	mov    dl,0x2
  55a959:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a95c:	e8 23 fa ff ff       	call   0x55a384
  55a961:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a964:	e8 17 f9 ff ff       	call   0x55a280
  55a969:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a96c:	e8 37 f8 ff ff       	call   0x55a1a8
  55a971:	eb 16                	jmp    0x55a989
  55a973:	33 d2                	xor    edx,edx
  55a975:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a978:	e8 07 fa ff ff       	call   0x55a384
  55a97d:	eb 0a                	jmp    0x55a989
  55a97f:	33 d2                	xor    edx,edx
  55a981:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a984:	e8 fb f9 ff ff       	call   0x55a384
  55a989:	33 c0                	xor    eax,eax
  55a98b:	5a                   	pop    edx
  55a98c:	59                   	pop    ecx
  55a98d:	59                   	pop    ecx
  55a98e:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55a991:	68 a6 a9 55 00       	push   0x55a9a6
  55a996:	8d 45 f4             	lea    eax,[ebp-0xc]
  55a999:	e8 12 94 ea ff       	call   0x403db0
  55a99e:	c3                   	ret
  55a99f:	e9 50 8e ea ff       	jmp    0x4037f4
  55a9a4:	eb f0                	jmp    0x55a996
  55a9a6:	5b                   	pop    ebx
  55a9a7:	8b e5                	mov    esp,ebp
  55a9a9:	5d                   	pop    ebp
  55a9aa:	c2 04 00             	ret    0x4
  55a9ad:	8d 40 00             	lea    eax,[eax+0x0]
  55a9b0:	55                   	push   ebp
  55a9b1:	8b ec                	mov    ebp,esp
  55a9b3:	83 c4 f4             	add    esp,0xfffffff4
  55a9b6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55a9b9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55a9bc:	c6 45 f7 00          	mov    BYTE PTR [ebp-0x9],0x0
  55a9c0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55a9c3:	80 b8 50 03 00 00 02 	cmp    BYTE PTR [eax+0x350],0x2
  55a9ca:	0f 85 ef 00 00 00    	jne    0x55aabf
  55a9d0:	c6 45 f7 01          	mov    BYTE PTR [ebp-0x9],0x1
  55a9d4:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a9d7:	8b 00                	mov    eax,DWORD PTR [eax]
  55a9d9:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55a9dc:	3b 82 0c 03 00 00    	cmp    eax,DWORD PTR [edx+0x30c]
  55a9e2:	75 13                	jne    0x55a9f7
  55a9e4:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a9e7:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55a9ea:	8b 92 08 03 00 00    	mov    edx,DWORD PTR [edx+0x308]
  55a9f0:	89 10                	mov    DWORD PTR [eax],edx
  55a9f2:	e9 c8 00 00 00       	jmp    0x55aabf
  55a9f7:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55a9fa:	8b 00                	mov    eax,DWORD PTR [eax]
  55a9fc:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55a9ff:	3b 82 08 03 00 00    	cmp    eax,DWORD PTR [edx+0x308]
  55aa05:	75 13                	jne    0x55aa1a
  55aa07:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa0a:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa0d:	8b 92 10 03 00 00    	mov    edx,DWORD PTR [edx+0x310]
  55aa13:	89 10                	mov    DWORD PTR [eax],edx
  55aa15:	e9 a5 00 00 00       	jmp    0x55aabf
  55aa1a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa1d:	8b 00                	mov    eax,DWORD PTR [eax]
  55aa1f:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa22:	3b 82 10 03 00 00    	cmp    eax,DWORD PTR [edx+0x310]
  55aa28:	75 13                	jne    0x55aa3d
  55aa2a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa2d:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa30:	8b 92 14 03 00 00    	mov    edx,DWORD PTR [edx+0x314]
  55aa36:	89 10                	mov    DWORD PTR [eax],edx
  55aa38:	e9 82 00 00 00       	jmp    0x55aabf
  55aa3d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa40:	8b 00                	mov    eax,DWORD PTR [eax]
  55aa42:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa45:	3b 82 14 03 00 00    	cmp    eax,DWORD PTR [edx+0x314]
  55aa4b:	75 10                	jne    0x55aa5d
  55aa4d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa50:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa53:	8b 92 18 03 00 00    	mov    edx,DWORD PTR [edx+0x318]
  55aa59:	89 10                	mov    DWORD PTR [eax],edx
  55aa5b:	eb 62                	jmp    0x55aabf
  55aa5d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa60:	8b 00                	mov    eax,DWORD PTR [eax]
  55aa62:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa65:	3b 82 18 03 00 00    	cmp    eax,DWORD PTR [edx+0x318]
  55aa6b:	75 10                	jne    0x55aa7d
  55aa6d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa70:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa73:	8b 92 1c 03 00 00    	mov    edx,DWORD PTR [edx+0x31c]
  55aa79:	89 10                	mov    DWORD PTR [eax],edx
  55aa7b:	eb 42                	jmp    0x55aabf
  55aa7d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa80:	8b 00                	mov    eax,DWORD PTR [eax]
  55aa82:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa85:	3b 82 1c 03 00 00    	cmp    eax,DWORD PTR [edx+0x31c]
  55aa8b:	75 10                	jne    0x55aa9d
  55aa8d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aa90:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aa93:	8b 92 20 03 00 00    	mov    edx,DWORD PTR [edx+0x320]
  55aa99:	89 10                	mov    DWORD PTR [eax],edx
  55aa9b:	eb 22                	jmp    0x55aabf
  55aa9d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aaa0:	8b 00                	mov    eax,DWORD PTR [eax]
  55aaa2:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aaa5:	3b 82 20 03 00 00    	cmp    eax,DWORD PTR [edx+0x320]
  55aaab:	75 12                	jne    0x55aabf
  55aaad:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55aab0:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aab3:	8b 92 0c 03 00 00    	mov    edx,DWORD PTR [edx+0x30c]
  55aab9:	89 10                	mov    DWORD PTR [eax],edx
  55aabb:	c6 45 f7 00          	mov    BYTE PTR [ebp-0x9],0x0
  55aabf:	8a 45 f7             	mov    al,BYTE PTR [ebp-0x9]
  55aac2:	8b e5                	mov    esp,ebp
  55aac4:	5d                   	pop    ebp
  55aac5:	c3                   	ret
  55aac6:	8b c0                	mov    eax,eax
  55aac8:	55                   	push   ebp
  55aac9:	8b ec                	mov    ebp,esp
  55aacb:	51                   	push   ecx
  55aacc:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55aacf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55aad2:	80 b8 50 03 00 00 00 	cmp    BYTE PTR [eax+0x350],0x0
  55aad9:	74 38                	je     0x55ab13
  55aadb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55aade:	8b 90 5c 03 00 00    	mov    edx,DWORD PTR [eax+0x35c]
  55aae4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55aae7:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55aaed:	e8 fe 3f f5 ff       	call   0x4aeaf0
  55aaf2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55aaf5:	8b 90 60 03 00 00    	mov    edx,DWORD PTR [eax+0x360]
  55aafb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55aafe:	8b 80 54 03 00 00    	mov    eax,DWORD PTR [eax+0x354]
  55ab04:	e8 3b 7c ed ff       	call   0x432744
  55ab09:	33 d2                	xor    edx,edx
  55ab0b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ab0e:	e8 71 f8 ff ff       	call   0x55a384
  55ab13:	59                   	pop    ecx
  55ab14:	5d                   	pop    ebp
  55ab15:	c3                   	ret
  55ab16:	8b c0                	mov    eax,eax
  55ab18:	55                   	push   ebp
  55ab19:	8b ec                	mov    ebp,esp
  55ab1b:	83 c4 f8             	add    esp,0xfffffff8
  55ab1e:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ab21:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ab24:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ab27:	e8 9c ff ff ff       	call   0x55aac8
  55ab2c:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55ab2f:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55ab32:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55ab38:	b2 01                	mov    dl,0x1
  55ab3a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ab3d:	e8 42 f8 ff ff       	call   0x55a384
  55ab42:	59                   	pop    ecx
  55ab43:	59                   	pop    ecx
  55ab44:	5d                   	pop    ebp
  55ab45:	c3                   	ret
  55ab46:	8b c0                	mov    eax,eax
  55ab48:	55                   	push   ebp
  55ab49:	8b ec                	mov    ebp,esp
  55ab4b:	83 c4 f8             	add    esp,0xfffffff8
  55ab4e:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ab51:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ab54:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55ab57:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ab5a:	e8 5d 43 ff ff       	call   0x54eebc
  55ab5f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ab64:	8b 00                	mov    eax,DWORD PTR [eax]
  55ab66:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55ab6c:	e8 6b 54 ff ff       	call   0x54ffdc
  55ab71:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ab76:	8b 00                	mov    eax,DWORD PTR [eax]
  55ab78:	ba b0 ab 55 00       	mov    edx,0x55abb0
  55ab7d:	e8 ea f0 00 00       	call   0x569c6c
  55ab82:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ab87:	8b 00                	mov    eax,DWORD PTR [eax]
  55ab89:	e8 56 fe 00 00       	call   0x56a9e4
  55ab8e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ab91:	e8 32 ff ff ff       	call   0x55aac8
  55ab96:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ab99:	c7 80 34 02 00 00 01 	mov    DWORD PTR [eax+0x234],0x1
  55aba0:	00 00 00 
  55aba3:	59                   	pop    ecx
  55aba4:	59                   	pop    ecx
  55aba5:	5d                   	pop    ebp
  55aba6:	c3                   	ret
  55aba7:	00 ff                	add    bh,bh
  55aba9:	ff                   	(bad)
  55abaa:	ff                   	(bad)
  55abab:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  55abb1:	43                   	inc    ebx
  55abb2:	4d                   	dec    ebp
  55abb3:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55abb4:	31 00                	xor    DWORD PTR [eax],eax
  55abb6:	00 00                	add    BYTE PTR [eax],al
  55abb8:	55                   	push   ebp
  55abb9:	8b ec                	mov    ebp,esp
  55abbb:	83 c4 f8             	add    esp,0xfffffff8
  55abbe:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55abc1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55abc4:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55abc7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55abca:	e8 c5 42 ff ff       	call   0x54ee94
  55abcf:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55abd4:	8b 00                	mov    eax,DWORD PTR [eax]
  55abd6:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55abdc:	e8 fb 53 ff ff       	call   0x54ffdc
  55abe1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55abe6:	8b 00                	mov    eax,DWORD PTR [eax]
  55abe8:	ba 20 ac 55 00       	mov    edx,0x55ac20
  55abed:	e8 7a f0 00 00       	call   0x569c6c
  55abf2:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55abf7:	8b 00                	mov    eax,DWORD PTR [eax]
  55abf9:	e8 e6 fd 00 00       	call   0x56a9e4
  55abfe:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ac01:	e8 c2 fe ff ff       	call   0x55aac8
  55ac06:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ac09:	c7 80 34 02 00 00 02 	mov    DWORD PTR [eax+0x234],0x2
  55ac10:	00 00 00 
  55ac13:	59                   	pop    ecx
  55ac14:	59                   	pop    ecx
  55ac15:	5d                   	pop    ebp
  55ac16:	c3                   	ret
  55ac17:	00 ff                	add    bh,bh
  55ac19:	ff                   	(bad)
  55ac1a:	ff                   	(bad)
  55ac1b:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  55ac21:	63 4d 6e             	arpl   WORD PTR [ebp+0x6e],ecx
  55ac24:	32 00                	xor    al,BYTE PTR [eax]
  55ac26:	00 00                	add    BYTE PTR [eax],al
  55ac28:	55                   	push   ebp
  55ac29:	8b ec                	mov    ebp,esp
  55ac2b:	83 c4 ec             	add    esp,0xffffffec
  55ac2e:	33 c9                	xor    ecx,ecx
  55ac30:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  55ac33:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  55ac36:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  55ac39:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ac3c:	33 c0                	xor    eax,eax
  55ac3e:	55                   	push   ebp
  55ac3f:	68 0d ad 55 00       	push   0x55ad0d
  55ac44:	64 ff 30             	push   DWORD PTR fs:[eax]
  55ac47:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55ac4a:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ac4f:	8b 00                	mov    eax,DWORD PTR [eax]
  55ac51:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55ac57:	e8 80 53 ff ff       	call   0x54ffdc
  55ac5c:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ac61:	8b 00                	mov    eax,DWORD PTR [eax]
  55ac63:	ba 20 ad 55 00       	mov    edx,0x55ad20
  55ac68:	e8 ff ef 00 00       	call   0x569c6c
  55ac6d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ac70:	e8 53 fe ff ff       	call   0x55aac8
  55ac75:	8d 55 ec             	lea    edx,[ebp-0x14]
  55ac78:	a1 fc 23 57 00       	mov    eax,ds:0x5723fc
  55ac7d:	8b 00                	mov    eax,DWORD PTR [eax]
  55ac7f:	e8 d0 6b ef ff       	call   0x451854
  55ac84:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  55ac87:	8d 55 f0             	lea    edx,[ebp-0x10]
  55ac8a:	e8 f5 f2 ea ff       	call   0x409f84
  55ac8f:	8d 45 f0             	lea    eax,[ebp-0x10]
  55ac92:	ba 30 ad 55 00       	mov    edx,0x55ad30
  55ac97:	e8 9c 93 ea ff       	call   0x404038
  55ac9c:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  55ac9f:	b2 01                	mov    dl,0x1
  55aca1:	a1 68 4d 4a 00       	mov    eax,ds:0x4a4d68
  55aca6:	e8 51 19 f0 ff       	call   0x45c5fc
  55acab:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  55acae:	33 c0                	xor    eax,eax
  55acb0:	55                   	push   ebp
  55acb1:	68 e3 ac 55 00       	push   0x55ace3
  55acb6:	64 ff 30             	push   DWORD PTR fs:[eax]
  55acb9:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55acbc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55acbf:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55acc5:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55acc8:	e8 67 08 01 00       	call   0x56b534
  55accd:	33 c0                	xor    eax,eax
  55accf:	5a                   	pop    edx
  55acd0:	59                   	pop    ecx
  55acd1:	59                   	pop    ecx
  55acd2:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55acd5:	68 ea ac 55 00       	push   0x55acea
  55acda:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55acdd:	e8 b2 83 ea ff       	call   0x403094
  55ace2:	c3                   	ret
  55ace3:	e9 0c 8b ea ff       	jmp    0x4037f4
  55ace8:	eb f0                	jmp    0x55acda
  55acea:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55aced:	e8 b6 f4 ff ff       	call   0x55a1a8
  55acf2:	33 c0                	xor    eax,eax
  55acf4:	5a                   	pop    edx
  55acf5:	59                   	pop    ecx
  55acf6:	59                   	pop    ecx
  55acf7:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55acfa:	68 14 ad 55 00       	push   0x55ad14
  55acff:	8d 45 ec             	lea    eax,[ebp-0x14]
  55ad02:	ba 02 00 00 00       	mov    edx,0x2
  55ad07:	e8 c8 90 ea ff       	call   0x403dd4
  55ad0c:	c3                   	ret
  55ad0d:	e9 e2 8a ea ff       	jmp    0x4037f4
  55ad12:	eb eb                	jmp    0x55acff
  55ad14:	8b e5                	mov    esp,ebp
  55ad16:	5d                   	pop    ebp
  55ad17:	c3                   	ret
  55ad18:	ff                   	(bad)
  55ad19:	ff                   	(bad)
  55ad1a:	ff                   	(bad)
  55ad1b:	ff 06                	inc    DWORD PTR [esi]
  55ad1d:	00 00                	add    BYTE PTR [eax],al
  55ad1f:	00 52 63             	add    BYTE PTR [edx+0x63],dl
  55ad22:	4d                   	dec    ebp
  55ad23:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55ad24:	32 30                	xor    dh,BYTE PTR [eax]
  55ad26:	00 00                	add    BYTE PTR [eax],al
  55ad28:	ff                   	(bad)
  55ad29:	ff                   	(bad)
  55ad2a:	ff                   	(bad)
  55ad2b:	ff 13                	call   DWORD PTR [ebx]
  55ad2d:	00 00                	add    BYTE PTR [eax],al
  55ad2f:	00 53 65             	add    BYTE PTR [ebx+0x65],dl
  55ad32:	74 74                	je     0x55ada8
  55ad34:	69 6e 67 73 5c 73 74 	imul   ebp,DWORD PTR [esi+0x67],0x74735c73
  55ad3b:	61                   	popa
  55ad3c:	74 69                	je     0x55ada7
  55ad3e:	63 2e                	arpl   WORD PTR [esi],ebp
  55ad40:	69 6e 69 00 55 8b ec 	imul   ebp,DWORD PTR [esi+0x69],0xec8b5500
  55ad47:	83 c4 f8             	add    esp,0xfffffff8
  55ad4a:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ad4d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ad50:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ad53:	e8 70 fd ff ff       	call   0x55aac8
  55ad58:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55ad5b:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55ad5e:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55ad64:	b2 01                	mov    dl,0x1
  55ad66:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ad69:	e8 16 f6 ff ff       	call   0x55a384
  55ad6e:	59                   	pop    ecx
  55ad6f:	59                   	pop    ecx
  55ad70:	5d                   	pop    ebp
  55ad71:	c3                   	ret
  55ad72:	8b c0                	mov    eax,eax
  55ad74:	55                   	push   ebp
  55ad75:	8b ec                	mov    ebp,esp
  55ad77:	83 c4 f8             	add    esp,0xfffffff8
  55ad7a:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ad7d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ad80:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ad83:	e8 40 fd ff ff       	call   0x55aac8
  55ad88:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55ad8b:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55ad8e:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55ad94:	b2 01                	mov    dl,0x1
  55ad96:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ad99:	e8 e6 f5 ff ff       	call   0x55a384
  55ad9e:	59                   	pop    ecx
  55ad9f:	59                   	pop    ecx
  55ada0:	5d                   	pop    ebp
  55ada1:	c3                   	ret
  55ada2:	8b c0                	mov    eax,eax
  55ada4:	55                   	push   ebp
  55ada5:	8b ec                	mov    ebp,esp
  55ada7:	83 c4 f8             	add    esp,0xfffffff8
  55adaa:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55adad:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55adb0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55adb3:	e8 10 fd ff ff       	call   0x55aac8
  55adb8:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55adbb:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55adbe:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55adc4:	b2 01                	mov    dl,0x1
  55adc6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55adc9:	e8 b6 f5 ff ff       	call   0x55a384
  55adce:	59                   	pop    ecx
  55adcf:	59                   	pop    ecx
  55add0:	5d                   	pop    ebp
  55add1:	c3                   	ret
  55add2:	8b c0                	mov    eax,eax
  55add4:	55                   	push   ebp
  55add5:	8b ec                	mov    ebp,esp
  55add7:	83 c4 f8             	add    esp,0xfffffff8
  55adda:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55addd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ade0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ade3:	e8 e0 fc ff ff       	call   0x55aac8
  55ade8:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55adeb:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55adee:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55adf4:	b2 01                	mov    dl,0x1
  55adf6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55adf9:	e8 86 f5 ff ff       	call   0x55a384
  55adfe:	59                   	pop    ecx
  55adff:	59                   	pop    ecx
  55ae00:	5d                   	pop    ebp
  55ae01:	c3                   	ret
  55ae02:	8b c0                	mov    eax,eax
  55ae04:	55                   	push   ebp
  55ae05:	8b ec                	mov    ebp,esp
  55ae07:	83 c4 f8             	add    esp,0xfffffff8
  55ae0a:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ae0d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ae10:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ae13:	e8 b0 fc ff ff       	call   0x55aac8
  55ae18:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55ae1b:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55ae1e:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55ae24:	b2 01                	mov    dl,0x1
  55ae26:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ae29:	e8 56 f5 ff ff       	call   0x55a384
  55ae2e:	59                   	pop    ecx
  55ae2f:	59                   	pop    ecx
  55ae30:	5d                   	pop    ebp
  55ae31:	c3                   	ret
  55ae32:	8b c0                	mov    eax,eax
  55ae34:	55                   	push   ebp
  55ae35:	8b ec                	mov    ebp,esp
  55ae37:	83 c4 f8             	add    esp,0xfffffff8
  55ae3a:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ae3d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ae40:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ae43:	e8 80 fc ff ff       	call   0x55aac8
  55ae48:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55ae4b:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55ae4e:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55ae54:	b2 01                	mov    dl,0x1
  55ae56:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ae59:	e8 26 f5 ff ff       	call   0x55a384
  55ae5e:	59                   	pop    ecx
  55ae5f:	59                   	pop    ecx
  55ae60:	5d                   	pop    ebp
  55ae61:	c3                   	ret
  55ae62:	8b c0                	mov    eax,eax
  55ae64:	55                   	push   ebp
  55ae65:	8b ec                	mov    ebp,esp
  55ae67:	83 c4 f8             	add    esp,0xfffffff8
  55ae6a:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ae6d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ae70:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ae75:	8b 00                	mov    eax,DWORD PTR [eax]
  55ae77:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55ae7d:	e8 5a 51 ff ff       	call   0x54ffdc
  55ae82:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ae87:	8b 00                	mov    eax,DWORD PTR [eax]
  55ae89:	ba c4 ae 55 00       	mov    edx,0x55aec4
  55ae8e:	e8 d9 ed 00 00       	call   0x569c6c
  55ae93:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ae96:	e8 2d fc ff ff       	call   0x55aac8
  55ae9b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ae9e:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55aea4:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55aea7:	89 82 54 03 00 00    	mov    DWORD PTR [edx+0x354],eax
  55aead:	b2 02                	mov    dl,0x2
  55aeaf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55aeb2:	e8 cd f4 ff ff       	call   0x55a384
  55aeb7:	59                   	pop    ecx
  55aeb8:	59                   	pop    ecx
  55aeb9:	5d                   	pop    ebp
  55aeba:	c3                   	ret
  55aebb:	00 ff                	add    bh,bh
  55aebd:	ff                   	(bad)
  55aebe:	ff                   	(bad)
  55aebf:	ff 07                	inc    DWORD PTR [edi]
  55aec1:	00 00                	add    BYTE PTR [eax],al
  55aec3:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55aec6:	5f                   	pop    edi
  55aec7:	49                   	dec    ecx
  55aec8:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55aec9:	30 35 00 55 8b ec    	xor    BYTE PTR ds:0xec8b5500,dh
  55aecf:	33 c0                	xor    eax,eax
  55aed1:	55                   	push   ebp
  55aed2:	68 f1 ae 55 00       	push   0x55aef1
  55aed7:	64 ff 30             	push   DWORD PTR fs:[eax]
  55aeda:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55aedd:	ff 05 90 48 57 00    	inc    DWORD PTR ds:0x574890
  55aee3:	33 c0                	xor    eax,eax
  55aee5:	5a                   	pop    edx
  55aee6:	59                   	pop    ecx
  55aee7:	59                   	pop    ecx
  55aee8:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55aeeb:	68 f8 ae 55 00       	push   0x55aef8
  55aef0:	c3                   	ret
  55aef1:	e9 fe 88 ea ff       	jmp    0x4037f4
  55aef6:	eb f8                	jmp    0x55aef0
  55aef8:	5d                   	pop    ebp
  55aef9:	c3                   	ret
  55aefa:	8b c0                	mov    eax,eax
  55aefc:	83 2d 90 48 57 00 01 	sub    DWORD PTR ds:0x574890,0x1
  55af03:	c3                   	ret
  55af04:	50                   	push   eax
  55af05:	af                   	scas   eax,DWORD PTR es:[edi]
  55af06:	55                   	push   ebp
  55af13:	00 fc                	add    ah,bh
  55af15:	b0 55                	mov    al,0x55
  55af17:	00 34 b0             	add    BYTE PTR [eax+esi*4],dh
  55af1a:	55                   	push   ebp
  55af1b:	00 6e b0             	add    BYTE PTR [esi-0x50],ch
  55af1e:	55                   	push   ebp
  55af1f:	00 00                	add    BYTE PTR [eax],al
  55af21:	00 00                	add    BYTE PTR [eax],al
  55af23:	00 e3                	add    bl,ah
  55af25:	b0 55                	mov    al,0x55
  55af27:	00 38                	add    BYTE PTR [eax],bh
  55af29:	03 00                	add    eax,DWORD PTR [eax]
  55af2b:	00 ac e7 54 00 7c 96 	add    BYTE PTR [edi+eiz*8-0x6983ffac],ch
  55af32:	41                   	inc    ecx
  55af33:	00 5c 9e 44          	add    BYTE PTR [esi+ebx*4+0x44],bl
  55af37:	00 f4                	add    ah,dh
  55af39:	9f                   	lahf
  55af3a:	44                   	inc    esp
  55af3b:	00 cc                	add    ah,cl
  55af3d:	32 40 00             	xor    al,BYTE PTR [eax+0x0]
  55af40:	e8 c1 44 00 28       	call   0x2855f406
  55af45:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  55af48:	3c 30                	cmp    al,0x30
  55af4a:	40                   	inc    eax
  55af4b:	00 50 f1             	add    BYTE PTR [eax-0xf],dl
  55af4e:	4a                   	dec    edx
  55af4f:	00 ac 94 43 00 6c a5 	add    BYTE PTR [esp+edx*4-0x5a93ffbd],ch
  55af56:	44                   	inc    esp
  55af57:	00 74 2a 41          	add    BYTE PTR [edx+ebp*1+0x41],dh
  55af5b:	00 14 a2             	add    BYTE PTR [edx+eiz*4],dl
  55af5e:	44                   	inc    esp
  55af5f:	00 50 a2             	add    BYTE PTR [eax-0x5e],dl
  55af62:	44                   	inc    esp
  55af63:	00 5c a3 44          	add    BYTE PTR [ebx+eiz*4+0x44],bl
  55af67:	00 f4                	add    ah,dh
  55af69:	24 43                	and    al,0x43
  55af6b:	00 94 96 41 00 7c ab 	add    BYTE PTR [esi+edx*4-0x5483ffbf],dl
  55af72:	44                   	inc    esp
  55af73:	00 74 93 41          	add    BYTE PTR [ebx+edx*4+0x41],dh
  55af77:	00 a0 e3 44 00 24    	add    BYTE PTR [eax+0x240044e3],ah
  55af7d:	b1 55                	mov    cl,0x55
  55af7f:	00 a4 8f 43 00 dc 94 	add    BYTE PTR [edi+ecx*4-0x6b23ffbd],ah
  55af86:	43                   	inc    ebx
  55af87:	00 08                	add    BYTE PTR [eax],cl
  55af89:	94                   	xchg   esp,eax
  55af8a:	43                   	inc    ebx
  55af8b:	00 30                	add    BYTE PTR [eax],dh
  55af8d:	8a 43 00             	mov    al,BYTE PTR [ebx+0x0]
  55af90:	5c                   	pop    esp
  55af91:	a8 44                	test   al,0x44
  55af93:	00 a8 87 43 00 a0    	add    BYTE PTR [eax-0x5fffbc79],ch
  55af99:	1a 43 00             	sbb    al,BYTE PTR [ebx+0x0]
  55af9c:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
  55af9d:	1a 43 00             	sbb    al,BYTE PTR [ebx+0x0]
  55afa0:	50                   	push   eax
  55afa1:	a9 44 00 24 46       	test   eax,0x46240044
  55afa6:	43                   	inc    ebx
  55afa7:	00 20                	add    BYTE PTR [eax],ah
  55afa9:	1c 43                	sbb    al,0x43
  55afab:	00 70 26             	add    BYTE PTR [eax+0x26],dh
  55afae:	43                   	inc    ebx
  55afaf:	00 44 ab 44          	add    BYTE PTR [ebx+ebp*4+0x44],al
  55afb3:	00 10                	add    BYTE PTR [eax],dl
  55afb5:	aa                   	stos   BYTE PTR es:[edi],al
  55afb6:	44                   	inc    esp
  55afb7:	00 a8 27 43 00 bc    	add    BYTE PTR [eax-0x43ffbcd9],ch
  55afbd:	ab                   	stos   DWORD PTR es:[edi],eax
  55afbe:	44                   	inc    esp
  55afbf:	00 a4 46 43 00 fc 87 	add    BYTE PTR [esi+eax*2-0x7803ffbd],ah
  55afc6:	43                   	inc    ebx
  55afc7:	00 78 88             	add    BYTE PTR [eax-0x78],bh
  55afca:	43                   	inc    ebx
  55afcb:	00 fc                	add    ah,bh
  55afcd:	83 43 00 5c          	add    DWORD PTR [ebx+0x0],0x5c
  55afd1:	88 43 00             	mov    BYTE PTR [ebx+0x0],al
  55afd4:	d4 9a                	aam    0x9a
  55afd6:	44                   	inc    esp
  55afd7:	00 d0                	add    al,dl
  55afd9:	b0 44                	mov    al,0x44
  55afdb:	00 04 5d 43 00 50 bd 	add    BYTE PTR [ebx*2-0x42afffbd],al
  55afe2:	44                   	inc    esp
  55afe3:	00 a4 c0 44 00 64 bf 	add    BYTE PTR [eax+eax*8-0x409bffbc],ah
  55afea:	44                   	inc    esp
  55afeb:	00 a4 c1 44 00 00 5c 	add    BYTE PTR [ecx+eax*8+0x5c000044],ah
  55aff2:	43                   	inc    ebx
  55aff3:	00 9c 89 43 00 98 c8 	add    BYTE PTR [ecx+ecx*4-0x3767ffbd],bl
  55affa:	44                   	inc    esp
  55affb:	00 58 86             	add    BYTE PTR [eax-0x7a],bl
  55affe:	43                   	inc    ebx
  55afff:	00 80 dc 44 00 c8    	add    BYTE PTR [eax-0x37ffbb24],al
  55b005:	94                   	xchg   esp,eax
  55b006:	44                   	inc    esp
  55b007:	00 78 97             	add    BYTE PTR [eax-0x69],bh
  55b00a:	44                   	inc    esp
  55b00b:	00 94 ce 44 00 40 a1 	add    BYTE PTR [esi+ecx*8-0x5ebfffbc],dl
  55b012:	44                   	inc    esp
  55b013:	00 b4 a1 44 00 28 e0 	add    BYTE PTR [ecx+eiz*4-0x1fd7ffbc],dh
  55b01a:	44                   	inc    esp
  55b01b:	00 94 9e 44 00 54 db 	add    BYTE PTR [esi+ebx*4-0x24abffbc],dl
  55b022:	44                   	inc    esp
  55b023:	00 70 c3             	add    BYTE PTR [eax-0x3d],dh
  55b026:	44                   	inc    esp
  55b027:	00 18                	add    BYTE PTR [eax],bl
  55b029:	dd 44 00 40          	fld    QWORD PTR [eax+eax*1+0x40]
  55b02d:	ab                   	stos   DWORD PTR es:[edi],eax
  55b02e:	44                   	inc    esp
  55b02f:	00 cc                	add    ah,cl
  55b031:	f1                   	int1
  55b032:	4a                   	dec    edx
  55b033:	00 04 00             	add    BYTE PTR [eax+eax*1],al
  55b036:	ef                   	out    dx,eax
  55b037:	b0 55                	mov    al,0x55
  55b039:	00 08                	add    BYTE PTR [eax],cl
  55b03b:	03 00                	add    eax,DWORD PTR [eax]
  55b03d:	00 00                	add    BYTE PTR [eax],al
  55b03f:	00 06                	add    BYTE PTR [esi],al
  55b041:	50                   	push   eax
  55b042:	61                   	popa
  55b043:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b044:	65 6c                	gs ins BYTE PTR es:[edi],dx
  55b046:	31 0c 03             	xor    DWORD PTR [ebx+eax*1],ecx
  55b049:	00 00                	add    BYTE PTR [eax],al
  55b04b:	00 00                	add    BYTE PTR [eax],al
  55b04d:	06                   	push   es
  55b04e:	50                   	push   eax
  55b04f:	61                   	popa
  55b050:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b051:	65 6c                	gs ins BYTE PTR es:[edi],dx
  55b053:	32 10                	xor    dl,BYTE PTR [eax]
  55b055:	03 00                	add    eax,DWORD PTR [eax]
  55b057:	00 00                	add    BYTE PTR [eax],al
  55b059:	00 06                	add    BYTE PTR [esi],al
  55b05b:	50                   	push   eax
  55b05c:	61                   	popa
  55b05d:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b05e:	65 6c                	gs ins BYTE PTR es:[edi],dx
  55b060:	33 14 03             	xor    edx,DWORD PTR [ebx+eax*1]
  55b063:	00 00                	add    BYTE PTR [eax],al
  55b065:	00 00                	add    BYTE PTR [eax],al
  55b067:	06                   	push   es
  55b068:	50                   	push   eax
  55b069:	61                   	popa
  55b06a:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b06b:	65 6c                	gs ins BYTE PTR es:[edi],dx
  55b06d:	34 05                	xor    al,0x5
  55b06f:	00 12                	add    BYTE PTR [edx],dl
  55b071:	00 d8                	add    al,bl
  55b073:	bb 55 00 0b 47       	mov    ebx,0x470b0055
  55b078:	44                   	inc    esp
  55b079:	49                   	dec    ecx
  55b07a:	46                   	inc    esi
  55b07b:	6f                   	outs   dx,DWORD PTR ds:[esi]
  55b07c:	72 6d                	jb     0x55b0eb
  55b07e:	53                   	push   ebx
  55b07f:	68 6f 77 14 00       	push   0x14776f
  55b084:	60                   	pusha
  55b085:	be 55 00 0d 62       	mov    esi,0x620d0055
  55b08a:	74 6e                	je     0x55b0fa
  55b08c:	52                   	push   edx
  55b08d:	65 71 4f             	gs jno 0x55b0df
  55b090:	6b 43 6c 69          	imul   eax,DWORD PTR [ebx+0x6c],0x69
  55b094:	63 6b 18             	arpl   WORD PTR [ebx+0x18],ebp
  55b097:	00 3c c0             	add    BYTE PTR [eax+eax*8],bh
  55b09a:	55                   	push   ebp
  55b09b:	00 11                	add    BYTE PTR [ecx],dl
  55b09d:	62 74 6e 52          	bound  esi,QWORD PTR [esi+ebp*2+0x52]
  55b0a1:	65 71 43             	gs jno 0x55b0e7
  55b0a4:	61                   	popa
  55b0a5:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b0a6:	63 65 6c             	arpl   WORD PTR [ebp+0x6c],esp
  55b0a9:	43                   	inc    ebx
  55b0aa:	6c                   	ins    BYTE PTR es:[edi],dx
  55b0ab:	69 63 6b 1b 00 8c b9 	imul   esp,DWORD PTR [ebx+0x6b],0xb98c001b
  55b0b2:	55                   	push   ebp
  55b0b3:	00 14 4f             	add    BYTE PTR [edi+ecx*2],dl
  55b0b6:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b0b7:	43                   	inc    ebx
  55b0b8:	68 61 6e 67 65       	push   0x65676e61
  55b0bd:	56                   	push   esi
  55b0be:	6f                   	outs   dx,DWORD PTR ds:[esi]
  55b0bf:	6c                   	ins    BYTE PTR es:[edi],dx
  55b0c0:	75 6d                	jne    0x55b12f
  55b0c2:	65 45                	gs inc ebp
  55b0c4:	66 66 65 63 74 1a 00 	data16 arpl WORD PTR gs:[edx+ebx*1+0x0],si
  55b0cb:	a0 ba 55 00 13       	mov    al,ds:0x130055ba
  55b0d0:	4f                   	dec    edi
  55b0d1:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b0d2:	43                   	inc    ebx
  55b0d3:	68 61 6e 67 65       	push   0x65676e61
  55b0d8:	56                   	push   esi
  55b0d9:	6f                   	outs   dx,DWORD PTR ds:[esi]
  55b0da:	6c                   	ins    BYTE PTR es:[edi],dx
  55b0db:	75 6d                	jne    0x55b14a
  55b0dd:	65 4d                	gs dec ebp
  55b0df:	75 73                	jne    0x55b154
  55b0e1:	69 63 0b 54 66 72 6d 	imul   esp,DWORD PTR [ebx+0xb],0x6d726654
  55b0e8:	4f                   	dec    edi
  55b0e9:	70 74                	jo     0x55b15f
  55b0eb:	69 6f 6e 73 01 00 dc 	imul   ebp,DWORD PTR [edi+0x6e],0xdc000173
  55b0f2:	3a 45 00             	cmp    al,BYTE PTR [ebp+0x0]
  55b0f5:	8d 40 00             	lea    eax,[eax+0x0]
  55b0f8:	fc                   	cld
  55b0f9:	b0 55                	mov    al,0x55
  55b0fb:	00 07                	add    BYTE PTR [edi],al
  55b0fd:	0b 54 66 72          	or     edx,DWORD PTR [esi+eiz*2+0x72]
  55b101:	6d                   	ins    DWORD PTR es:[edi],dx
  55b102:	4f                   	dec    edi
  55b103:	70 74                	jo     0x55b179
  55b105:	69 6f 6e 73 50 af 55 	imul   ebp,DWORD PTR [edi+0x6e],0x55af5073
  55b10c:	00 14 ea             	add    BYTE PTR [edx+ebp*8],dl
  55b10f:	54                   	push   esp
  55b110:	00 5a 00             	add    BYTE PTR [edx+0x0],bl
  55b113:	0b 46 6f             	or     eax,DWORD PTR [esi+0x6f]
  55b116:	72 6d                	jb     0x55b185
  55b118:	4f                   	dec    edi
  55b119:	70 74                	jo     0x55b18f
  55b11b:	69 6f 6e 73 00 00 8d 	imul   ebp,DWORD PTR [edi+0x6e],0x8d000073
  55b122:	40                   	inc    eax
  55b123:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  55b126:	ec                   	in     al,dx
  55b127:	83 c4 f4             	add    esp,0xfffffff4
  55b12a:	84 d2                	test   dl,dl
  55b12c:	74 08                	je     0x55b136
  55b12e:	83 c4 f0             	add    esp,0xfffffff0
  55b131:	e8 9e 82 ea ff       	call   0x4033d4
  55b136:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  55b139:	88 55 fb             	mov    BYTE PTR [ebp-0x5],dl
  55b13c:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55b13f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b144:	8b 00                	mov    eax,DWORD PTR [eax]
  55b146:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  55b14c:	50                   	push   eax
  55b14d:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  55b150:	33 d2                	xor    edx,edx
  55b152:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b155:	e8 ea 3a ff ff       	call   0x54ec44
  55b15a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b15d:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55b163:	c6 80 e8 01 00 00 01 	mov    BYTE PTR [eax+0x1e8],0x1
  55b16a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b16d:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55b173:	c6 80 e8 01 00 00 01 	mov    BYTE PTR [eax+0x1e8],0x1
  55b17a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b17d:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  55b183:	c6 80 e8 01 00 00 01 	mov    BYTE PTR [eax+0x1e8],0x1
  55b18a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b18d:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  55b193:	c6 80 e8 01 00 00 01 	mov    BYTE PTR [eax+0x1e8],0x1
  55b19a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b19d:	8b 88 08 03 00 00    	mov    ecx,DWORD PTR [eax+0x308]
  55b1a3:	b2 01                	mov    dl,0x1
  55b1a5:	a1 a4 6f 55 00       	mov    eax,ds:0x556fa4
  55b1aa:	e8 49 bf ff ff       	call   0x5570f8
  55b1af:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b1b2:	89 82 18 03 00 00    	mov    DWORD PTR [edx+0x318],eax
  55b1b8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b1bb:	8b 88 0c 03 00 00    	mov    ecx,DWORD PTR [eax+0x30c]
  55b1c1:	b2 01                	mov    dl,0x1
  55b1c3:	a1 04 72 55 00       	mov    eax,ds:0x557204
  55b1c8:	e8 8b c1 ff ff       	call   0x557358
  55b1cd:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b1d0:	89 82 1c 03 00 00    	mov    DWORD PTR [edx+0x31c],eax
  55b1d6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b1d9:	8b 88 10 03 00 00    	mov    ecx,DWORD PTR [eax+0x310]
  55b1df:	b2 01                	mov    dl,0x1
  55b1e1:	a1 54 95 55 00       	mov    eax,ds:0x559554
  55b1e6:	e8 a9 e4 ff ff       	call   0x559694
  55b1eb:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b1ee:	89 82 20 03 00 00    	mov    DWORD PTR [edx+0x320],eax
  55b1f4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b1f7:	8b 88 14 03 00 00    	mov    ecx,DWORD PTR [eax+0x314]
  55b1fd:	b2 01                	mov    dl,0x1
  55b1ff:	a1 38 97 55 00       	mov    eax,ds:0x559738
  55b204:	e8 67 e6 ff ff       	call   0x559870
  55b209:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b20c:	89 82 24 03 00 00    	mov    DWORD PTR [edx+0x324],eax
  55b212:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b217:	8b 00                	mov    eax,DWORD PTR [eax]
  55b219:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55b21f:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55b222:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b225:	89 82 28 03 00 00    	mov    DWORD PTR [edx+0x328],eax
  55b22b:	b2 01                	mov    dl,0x1
  55b22d:	a1 a4 aa 56 00       	mov    eax,ds:0x56aaa4
  55b232:	e8 b5 89 f4 ff       	call   0x4a3bec
  55b237:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b23a:	89 82 2c 03 00 00    	mov    DWORD PTR [edx+0x32c],eax
  55b240:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b245:	8b 00                	mov    eax,DWORD PTR [eax]
  55b247:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55b24d:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55b250:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
  55b253:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b256:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55b25c:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b25e:	ff 51 0c             	call   DWORD PTR [ecx+0xc]
  55b261:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b266:	8b 00                	mov    eax,DWORD PTR [eax]
  55b268:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55b26e:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55b271:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55b274:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b277:	89 82 30 03 00 00    	mov    DWORD PTR [edx+0x330],eax
  55b27d:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b282:	8b 00                	mov    eax,DWORD PTR [eax]
  55b284:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55b28a:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55b28d:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
  55b290:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b293:	89 82 34 03 00 00    	mov    DWORD PTR [edx+0x334],eax
  55b299:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b29c:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55b2a2:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55b2a8:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b2ab:	8b 92 30 03 00 00    	mov    edx,DWORD PTR [edx+0x330]
  55b2b1:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b2b3:	ff 91 d0 00 00 00    	call   DWORD PTR [ecx+0xd0]
  55b2b9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b2bc:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55b2c2:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55b2c8:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b2cb:	8b 92 34 03 00 00    	mov    edx,DWORD PTR [edx+0x334]
  55b2d1:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b2d3:	ff 91 d0 00 00 00    	call   DWORD PTR [ecx+0xd0]
  55b2d9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b2dc:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55b2e2:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b2e5:	8b 92 30 03 00 00    	mov    edx,DWORD PTR [edx+0x330]
  55b2eb:	89 90 04 02 00 00    	mov    DWORD PTR [eax+0x204],edx
  55b2f1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b2f4:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55b2fa:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b2fd:	8b 92 34 03 00 00    	mov    edx,DWORD PTR [edx+0x334]
  55b303:	89 90 04 02 00 00    	mov    DWORD PTR [eax+0x204],edx
  55b309:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b30c:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b312:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b318:	33 d2                	xor    edx,edx
  55b31a:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b31c:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b322:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b325:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b32b:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b331:	33 d2                	xor    edx,edx
  55b333:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b335:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b33b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b33e:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b344:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b34a:	33 d2                	xor    edx,edx
  55b34c:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b34e:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b354:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b359:	8b 00                	mov    eax,DWORD PTR [eax]
  55b35b:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55b361:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55b364:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55b367:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
  55b36a:	48                   	dec    eax
  55b36b:	74 08                	je     0x55b375
  55b36d:	48                   	dec    eax
  55b36e:	74 20                	je     0x55b390
  55b370:	48                   	dec    eax
  55b371:	74 38                	je     0x55b3ab
  55b373:	eb 4f                	jmp    0x55b3c4
  55b375:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b378:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b37e:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b384:	b2 01                	mov    dl,0x1
  55b386:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b388:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b38e:	eb 34                	jmp    0x55b3c4
  55b390:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b393:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b399:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b39f:	b2 01                	mov    dl,0x1
  55b3a1:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b3a3:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b3a9:	eb 19                	jmp    0x55b3c4
  55b3ab:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b3ae:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b3b4:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b3ba:	b2 01                	mov    dl,0x1
  55b3bc:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b3be:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b3c4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b3c7:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b3cd:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b3d3:	33 d2                	xor    edx,edx
  55b3d5:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b3d7:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b3dd:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b3e0:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b3e6:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b3ec:	33 d2                	xor    edx,edx
  55b3ee:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b3f0:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b3f6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b3f9:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b3ff:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b405:	33 d2                	xor    edx,edx
  55b407:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b409:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b40f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b414:	8b 00                	mov    eax,DWORD PTR [eax]
  55b416:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55b41c:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55b41f:	8b 40 2c             	mov    eax,DWORD PTR [eax+0x2c]
  55b422:	83 e8 01             	sub    eax,0x1
  55b425:	72 07                	jb     0x55b42e
  55b427:	74 20                	je     0x55b449
  55b429:	48                   	dec    eax
  55b42a:	74 38                	je     0x55b464
  55b42c:	eb 51                	jmp    0x55b47f
  55b42e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b431:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b437:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b43d:	b2 01                	mov    dl,0x1
  55b43f:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b441:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b447:	eb 4f                	jmp    0x55b498
  55b449:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b44c:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b452:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b458:	b2 01                	mov    dl,0x1
  55b45a:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b45c:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b462:	eb 34                	jmp    0x55b498
  55b464:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b467:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b46d:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b473:	b2 01                	mov    dl,0x1
  55b475:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b477:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b47d:	eb 19                	jmp    0x55b498
  55b47f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b482:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b488:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b48e:	b2 01                	mov    dl,0x1
  55b490:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b492:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55b498:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b49b:	80 7d fb 00          	cmp    BYTE PTR [ebp-0x5],0x0
  55b49f:	74 0f                	je     0x55b4b0
  55b4a1:	e8 86 7f ea ff       	call   0x40342c
  55b4a6:	64 8f 05 00 00 00 00 	pop    DWORD PTR fs:0x0
  55b4ad:	83 c4 0c             	add    esp,0xc
  55b4b0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b4b3:	8b e5                	mov    esp,ebp
  55b4b5:	5d                   	pop    ebp
  55b4b6:	c3                   	ret
  55b4b7:	90                   	nop
  55b4b8:	55                   	push   ebp
  55b4b9:	8b ec                	mov    ebp,esp
  55b4bb:	83 c4 f8             	add    esp,0xfffffff8
  55b4be:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55b4c1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55b4c4:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b4c9:	8b 00                	mov    eax,DWORD PTR [eax]
  55b4cb:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55b4d1:	e8 06 4b ff ff       	call   0x54ffdc
  55b4d6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b4d9:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b4df:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b4e5:	8b 10                	mov    edx,DWORD PTR [eax]
  55b4e7:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b4ed:	84 c0                	test   al,al
  55b4ef:	74 64                	je     0x55b555
  55b4f1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b4f6:	8b 00                	mov    eax,DWORD PTR [eax]
  55b4f8:	ba d4 b6 55 00       	mov    edx,0x55b6d4
  55b4fd:	e8 6a e7 00 00       	call   0x569c6c
  55b502:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b505:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b50b:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
  55b511:	b2 01                	mov    dl,0x1
  55b513:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b515:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55b518:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b51b:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b521:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
  55b527:	e8 c8 76 ed ff       	call   0x432bf4
  55b52c:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b531:	8b 00                	mov    eax,DWORD PTR [eax]
  55b533:	8b 90 44 01 00 00    	mov    edx,DWORD PTR [eax+0x144]
  55b539:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b53c:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b542:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
  55b548:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  55b54e:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b550:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  55b553:	eb 2a                	jmp    0x55b57f
  55b555:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b558:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b55e:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
  55b564:	33 d2                	xor    edx,edx
  55b566:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b568:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55b56b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b56e:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b574:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
  55b57a:	e8 6d 76 ed ff       	call   0x432bec
  55b57f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b582:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b588:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b58e:	8b 10                	mov    edx,DWORD PTR [eax]
  55b590:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b596:	84 c0                	test   al,al
  55b598:	74 38                	je     0x55b5d2
  55b59a:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b59f:	8b 00                	mov    eax,DWORD PTR [eax]
  55b5a1:	ba e4 b6 55 00       	mov    edx,0x55b6e4
  55b5a6:	e8 c1 e6 00 00       	call   0x569c6c
  55b5ab:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b5b0:	8b 00                	mov    eax,DWORD PTR [eax]
  55b5b2:	8b 90 48 01 00 00    	mov    edx,DWORD PTR [eax+0x148]
  55b5b8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b5bb:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b5c1:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
  55b5c7:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  55b5cd:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b5cf:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  55b5d2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b5d5:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b5db:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b5e1:	8b 10                	mov    edx,DWORD PTR [eax]
  55b5e3:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b5e9:	84 c0                	test   al,al
  55b5eb:	74 38                	je     0x55b625
  55b5ed:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b5f2:	8b 00                	mov    eax,DWORD PTR [eax]
  55b5f4:	ba f4 b6 55 00       	mov    edx,0x55b6f4
  55b5f9:	e8 6e e6 00 00       	call   0x569c6c
  55b5fe:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b603:	8b 00                	mov    eax,DWORD PTR [eax]
  55b605:	8b 90 4c 01 00 00    	mov    edx,DWORD PTR [eax+0x14c]
  55b60b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b60e:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b614:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
  55b61a:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  55b620:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b622:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  55b625:	80 3d 98 48 57 00 00 	cmp    BYTE PTR ds:0x574898,0x0
  55b62c:	0f 85 96 00 00 00    	jne    0x55b6c8
  55b632:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b637:	8b 00                	mov    eax,DWORD PTR [eax]
  55b639:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55b63f:	e8 98 49 ff ff       	call   0x54ffdc
  55b644:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b647:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b64d:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b653:	8b 10                	mov    edx,DWORD PTR [eax]
  55b655:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b65b:	84 c0                	test   al,al
  55b65d:	74 11                	je     0x55b670
  55b65f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b664:	8b 00                	mov    eax,DWORD PTR [eax]
  55b666:	ba d4 b6 55 00       	mov    edx,0x55b6d4
  55b66b:	e8 fc e5 00 00       	call   0x569c6c
  55b670:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b673:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b679:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b67f:	8b 10                	mov    edx,DWORD PTR [eax]
  55b681:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b687:	84 c0                	test   al,al
  55b689:	74 11                	je     0x55b69c
  55b68b:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b690:	8b 00                	mov    eax,DWORD PTR [eax]
  55b692:	ba e4 b6 55 00       	mov    edx,0x55b6e4
  55b697:	e8 d0 e5 00 00       	call   0x569c6c
  55b69c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b69f:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55b6a5:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b6ab:	8b 10                	mov    edx,DWORD PTR [eax]
  55b6ad:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b6b3:	84 c0                	test   al,al
  55b6b5:	74 11                	je     0x55b6c8
  55b6b7:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b6bc:	8b 00                	mov    eax,DWORD PTR [eax]
  55b6be:	ba f4 b6 55 00       	mov    edx,0x55b6f4
  55b6c3:	e8 a4 e5 00 00       	call   0x569c6c
  55b6c8:	59                   	pop    ecx
  55b6c9:	59                   	pop    ecx
  55b6ca:	5d                   	pop    ebp
  55b6cb:	c3                   	ret
  55b6cc:	ff                   	(bad)
  55b6cd:	ff                   	(bad)
  55b6ce:	ff                   	(bad)
  55b6cf:	ff 07                	inc    DWORD PTR [edi]
  55b6d1:	00 00                	add    BYTE PTR [eax],al
  55b6d3:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55b6d6:	5f                   	pop    edi
  55b6d7:	49                   	dec    ecx
  55b6d8:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b6d9:	30 32                	xor    BYTE PTR [edx],dh
  55b6db:	00 ff                	add    bh,bh
  55b6dd:	ff                   	(bad)
  55b6de:	ff                   	(bad)
  55b6df:	ff 07                	inc    DWORD PTR [edi]
  55b6e1:	00 00                	add    BYTE PTR [eax],al
  55b6e3:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55b6e6:	5f                   	pop    edi
  55b6e7:	49                   	dec    ecx
  55b6e8:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b6e9:	30 33                	xor    BYTE PTR [ebx],dh
  55b6eb:	00 ff                	add    bh,bh
  55b6ed:	ff                   	(bad)
  55b6ee:	ff                   	(bad)
  55b6ef:	ff 07                	inc    DWORD PTR [edi]
  55b6f1:	00 00                	add    BYTE PTR [eax],al
  55b6f3:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55b6f6:	5f                   	pop    edi
  55b6f7:	49                   	dec    ecx
  55b6f8:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b6f9:	30 34 00             	xor    BYTE PTR [eax+eax*1],dh
  55b6fc:	55                   	push   ebp
  55b6fd:	8b ec                	mov    ebp,esp
  55b6ff:	83 c4 f8             	add    esp,0xfffffff8
  55b702:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55b705:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55b708:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b70d:	8b 00                	mov    eax,DWORD PTR [eax]
  55b70f:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55b715:	e8 c2 48 ff ff       	call   0x54ffdc
  55b71a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b71d:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b723:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b729:	8b 10                	mov    edx,DWORD PTR [eax]
  55b72b:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b731:	84 c0                	test   al,al
  55b733:	74 27                	je     0x55b75c
  55b735:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b73a:	8b 00                	mov    eax,DWORD PTR [eax]
  55b73c:	8b 90 50 01 00 00    	mov    edx,DWORD PTR [eax+0x150]
  55b742:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b745:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b74b:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
  55b751:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  55b757:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b759:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  55b75c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b75f:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b765:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b76b:	8b 10                	mov    edx,DWORD PTR [eax]
  55b76d:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b773:	84 c0                	test   al,al
  55b775:	74 27                	je     0x55b79e
  55b777:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b77c:	8b 00                	mov    eax,DWORD PTR [eax]
  55b77e:	8b 90 54 01 00 00    	mov    edx,DWORD PTR [eax+0x154]
  55b784:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b787:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b78d:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
  55b793:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  55b799:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b79b:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  55b79e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b7a1:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b7a7:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b7ad:	8b 10                	mov    edx,DWORD PTR [eax]
  55b7af:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b7b5:	84 c0                	test   al,al
  55b7b7:	74 27                	je     0x55b7e0
  55b7b9:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b7be:	8b 00                	mov    eax,DWORD PTR [eax]
  55b7c0:	8b 90 58 01 00 00    	mov    edx,DWORD PTR [eax+0x158]
  55b7c6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b7c9:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b7cf:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
  55b7d5:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  55b7db:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b7dd:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  55b7e0:	80 3d 98 48 57 00 00 	cmp    BYTE PTR ds:0x574898,0x0
  55b7e7:	0f 85 96 00 00 00    	jne    0x55b883
  55b7ed:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b7f2:	8b 00                	mov    eax,DWORD PTR [eax]
  55b7f4:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55b7fa:	e8 dd 47 ff ff       	call   0x54ffdc
  55b7ff:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b802:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b808:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55b80e:	8b 10                	mov    edx,DWORD PTR [eax]
  55b810:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b816:	84 c0                	test   al,al
  55b818:	74 11                	je     0x55b82b
  55b81a:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b81f:	8b 00                	mov    eax,DWORD PTR [eax]
  55b821:	ba 90 b8 55 00       	mov    edx,0x55b890
  55b826:	e8 41 e4 00 00       	call   0x569c6c
  55b82b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b82e:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b834:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55b83a:	8b 10                	mov    edx,DWORD PTR [eax]
  55b83c:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b842:	84 c0                	test   al,al
  55b844:	74 11                	je     0x55b857
  55b846:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b84b:	8b 00                	mov    eax,DWORD PTR [eax]
  55b84d:	ba a0 b8 55 00       	mov    edx,0x55b8a0
  55b852:	e8 15 e4 00 00       	call   0x569c6c
  55b857:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b85a:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55b860:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55b866:	8b 10                	mov    edx,DWORD PTR [eax]
  55b868:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55b86e:	84 c0                	test   al,al
  55b870:	74 11                	je     0x55b883
  55b872:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b877:	8b 00                	mov    eax,DWORD PTR [eax]
  55b879:	ba b0 b8 55 00       	mov    edx,0x55b8b0
  55b87e:	e8 e9 e3 00 00       	call   0x569c6c
  55b883:	59                   	pop    ecx
  55b884:	59                   	pop    ecx
  55b885:	5d                   	pop    ebp
  55b886:	c3                   	ret
  55b887:	00 ff                	add    bh,bh
  55b889:	ff                   	(bad)
  55b88a:	ff                   	(bad)
  55b88b:	ff 07                	inc    DWORD PTR [edi]
  55b88d:	00 00                	add    BYTE PTR [eax],al
  55b88f:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55b892:	5f                   	pop    edi
  55b893:	49                   	dec    ecx
  55b894:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b895:	30 38                	xor    BYTE PTR [eax],bh
  55b897:	00 ff                	add    bh,bh
  55b899:	ff                   	(bad)
  55b89a:	ff                   	(bad)
  55b89b:	ff 06                	inc    DWORD PTR [esi]
  55b89d:	00 00                	add    BYTE PTR [eax],al
  55b89f:	00 52 63             	add    BYTE PTR [edx+0x63],dl
  55b8a2:	4d                   	dec    ebp
  55b8a3:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b8a4:	32 30                	xor    dh,BYTE PTR [eax]
  55b8a6:	00 00                	add    BYTE PTR [eax],al
  55b8a8:	ff                   	(bad)
  55b8a9:	ff                   	(bad)
  55b8aa:	ff                   	(bad)
  55b8ab:	ff 07                	inc    DWORD PTR [edi]
  55b8ad:	00 00                	add    BYTE PTR [eax],al
  55b8af:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55b8b2:	5f                   	pop    edi
  55b8b3:	49                   	dec    ecx
  55b8b4:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b8b5:	30 39                	xor    BYTE PTR [ecx],bh
  55b8b7:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  55b8ba:	ec                   	in     al,dx
  55b8bb:	83 c4 f4             	add    esp,0xfffffff4
  55b8be:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  55b8c1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55b8c4:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b8c9:	8b 00                	mov    eax,DWORD PTR [eax]
  55b8cb:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55b8d1:	e8 06 47 ff ff       	call   0x54ffdc
  55b8d6:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b8db:	8b 00                	mov    eax,DWORD PTR [eax]
  55b8dd:	ba 84 b9 55 00       	mov    edx,0x55b984
  55b8e2:	e8 85 e3 00 00       	call   0x569c6c
  55b8e7:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b8ec:	8b 00                	mov    eax,DWORD PTR [eax]
  55b8ee:	e8 f1 f0 00 00       	call   0x56a9e4
  55b8f3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  55b8f6:	b2 01                	mov    dl,0x1
  55b8f8:	a1 14 99 55 00       	mov    eax,ds:0x559914
  55b8fd:	e8 d2 e3 ff ff       	call   0x559cd4
  55b902:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  55b905:	33 c0                	xor    eax,eax
  55b907:	55                   	push   ebp
  55b908:	68 6e b9 55 00       	push   0x55b96e
  55b90d:	64 ff 30             	push   DWORD PTR fs:[eax]
  55b910:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55b913:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b916:	8b 90 2c 03 00 00    	mov    edx,DWORD PTR [eax+0x32c]
  55b91c:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55b91f:	8b 80 58 03 00 00    	mov    eax,DWORD PTR [eax+0x358]
  55b925:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b927:	ff 51 0c             	call   DWORD PTR [ecx+0xc]
  55b92a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55b92d:	8b 10                	mov    edx,DWORD PTR [eax]
  55b92f:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
  55b935:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55b938:	83 b8 34 02 00 00 01 	cmp    DWORD PTR [eax+0x234],0x1
  55b93f:	75 17                	jne    0x55b958
  55b941:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55b944:	8b 90 58 03 00 00    	mov    edx,DWORD PTR [eax+0x358]
  55b94a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b94d:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55b953:	8b 08                	mov    ecx,DWORD PTR [eax]
  55b955:	ff 51 0c             	call   DWORD PTR [ecx+0xc]
  55b958:	33 c0                	xor    eax,eax
  55b95a:	5a                   	pop    edx
  55b95b:	59                   	pop    ecx
  55b95c:	59                   	pop    ecx
  55b95d:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55b960:	68 75 b9 55 00       	push   0x55b975
  55b965:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  55b968:	e8 27 77 ea ff       	call   0x403094
  55b96d:	c3                   	ret
  55b96e:	e9 81 7e ea ff       	jmp    0x4037f4
  55b973:	eb f0                	jmp    0x55b965
  55b975:	8b e5                	mov    esp,ebp
  55b977:	5d                   	pop    ebp
  55b978:	c3                   	ret
  55b979:	00 00                	add    BYTE PTR [eax],al
  55b97b:	00 ff                	add    bh,bh
  55b97d:	ff                   	(bad)
  55b97e:	ff                   	(bad)
  55b97f:	ff 07                	inc    DWORD PTR [edi]
  55b981:	00 00                	add    BYTE PTR [eax],al
  55b983:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55b986:	5f                   	pop    edi
  55b987:	49                   	dec    ecx
  55b988:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55b989:	30 35 00 55 8b ec    	xor    BYTE PTR ds:0xec8b5500,dh
  55b98f:	83 c4 f8             	add    esp,0xfffffff8
  55b992:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55b995:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55b998:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b99b:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55b9a1:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55b9a7:	8b 80 80 01 00 00    	mov    eax,DWORD PTR [eax+0x180]
  55b9ad:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b9b0:	8b 92 20 03 00 00    	mov    edx,DWORD PTR [edx+0x320]
  55b9b6:	3b 82 04 02 00 00    	cmp    eax,DWORD PTR [edx+0x204]
  55b9bc:	7e 25                	jle    0x55b9e3
  55b9be:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b9c3:	8b 00                	mov    eax,DWORD PTR [eax]
  55b9c5:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55b9cb:	e8 0c 46 ff ff       	call   0x54ffdc
  55b9d0:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55b9d5:	8b 00                	mov    eax,DWORD PTR [eax]
  55b9d7:	ba 88 ba 55 00       	mov    edx,0x55ba88
  55b9dc:	e8 8b e2 00 00       	call   0x569c6c
  55b9e1:	eb 49                	jmp    0x55ba2c
  55b9e3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55b9e6:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55b9ec:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55b9f2:	8b 80 80 01 00 00    	mov    eax,DWORD PTR [eax+0x180]
  55b9f8:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55b9fb:	8b 92 20 03 00 00    	mov    edx,DWORD PTR [edx+0x320]
  55ba01:	3b 82 04 02 00 00    	cmp    eax,DWORD PTR [edx+0x204]
  55ba07:	7d 23                	jge    0x55ba2c
  55ba09:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ba0e:	8b 00                	mov    eax,DWORD PTR [eax]
  55ba10:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55ba16:	e8 c1 45 ff ff       	call   0x54ffdc
  55ba1b:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ba20:	8b 00                	mov    eax,DWORD PTR [eax]
  55ba22:	ba 98 ba 55 00       	mov    edx,0x55ba98
  55ba27:	e8 40 e2 00 00       	call   0x569c6c
  55ba2c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ba2f:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55ba35:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55ba3b:	8b 80 80 01 00 00    	mov    eax,DWORD PTR [eax+0x180]
  55ba41:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55ba44:	8b 92 20 03 00 00    	mov    edx,DWORD PTR [edx+0x320]
  55ba4a:	89 82 04 02 00 00    	mov    DWORD PTR [edx+0x204],eax
  55ba50:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ba53:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55ba59:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55ba5f:	8b 90 80 01 00 00    	mov    edx,DWORD PTR [eax+0x180]
  55ba65:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ba6a:	8b 00                	mov    eax,DWORD PTR [eax]
  55ba6c:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55ba72:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55ba75:	e8 ee f7 00 00       	call   0x56b268
  55ba7a:	59                   	pop    ecx
  55ba7b:	59                   	pop    ecx
  55ba7c:	5d                   	pop    ebp
  55ba7d:	c3                   	ret
  55ba7e:	00 00                	add    BYTE PTR [eax],al
  55ba80:	ff                   	(bad)
  55ba81:	ff                   	(bad)
  55ba82:	ff                   	(bad)
  55ba83:	ff 06                	inc    DWORD PTR [esi]
  55ba85:	00 00                	add    BYTE PTR [eax],al
  55ba87:	00 52 63             	add    BYTE PTR [edx+0x63],dl
  55ba8a:	4d                   	dec    ebp
  55ba8b:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55ba8c:	31 36                	xor    DWORD PTR [esi],esi
  55ba8e:	00 00                	add    BYTE PTR [eax],al
  55ba90:	ff                   	(bad)
  55ba91:	ff                   	(bad)
  55ba92:	ff                   	(bad)
  55ba93:	ff 06                	inc    DWORD PTR [esi]
  55ba95:	00 00                	add    BYTE PTR [eax],al
  55ba97:	00 52 63             	add    BYTE PTR [edx+0x63],dl
  55ba9a:	4d                   	dec    ebp
  55ba9b:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55ba9c:	31 35 00 00 55 8b    	xor    DWORD PTR ds:0x8b550000,esi
  55baa2:	ec                   	in     al,dx
  55baa3:	83 c4 f8             	add    esp,0xfffffff8
  55baa6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55baa9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55baac:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55baaf:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55bab5:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55babb:	8b 80 80 01 00 00    	mov    eax,DWORD PTR [eax+0x180]
  55bac1:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bac4:	8b 92 24 03 00 00    	mov    edx,DWORD PTR [edx+0x324]
  55baca:	3b 82 04 02 00 00    	cmp    eax,DWORD PTR [edx+0x204]
  55bad0:	7e 25                	jle    0x55baf7
  55bad2:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bad7:	8b 00                	mov    eax,DWORD PTR [eax]
  55bad9:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55badf:	e8 f8 44 ff ff       	call   0x54ffdc
  55bae4:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bae9:	8b 00                	mov    eax,DWORD PTR [eax]
  55baeb:	ba c0 bb 55 00       	mov    edx,0x55bbc0
  55baf0:	e8 77 e1 00 00       	call   0x569c6c
  55baf5:	eb 49                	jmp    0x55bb40
  55baf7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bafa:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55bb00:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55bb06:	8b 80 80 01 00 00    	mov    eax,DWORD PTR [eax+0x180]
  55bb0c:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bb0f:	8b 92 24 03 00 00    	mov    edx,DWORD PTR [edx+0x324]
  55bb15:	3b 82 04 02 00 00    	cmp    eax,DWORD PTR [edx+0x204]
  55bb1b:	7d 23                	jge    0x55bb40
  55bb1d:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bb22:	8b 00                	mov    eax,DWORD PTR [eax]
  55bb24:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55bb2a:	e8 ad 44 ff ff       	call   0x54ffdc
  55bb2f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bb34:	8b 00                	mov    eax,DWORD PTR [eax]
  55bb36:	ba d0 bb 55 00       	mov    edx,0x55bbd0
  55bb3b:	e8 2c e1 00 00       	call   0x569c6c
  55bb40:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bb43:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55bb49:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55bb4f:	8b 80 80 01 00 00    	mov    eax,DWORD PTR [eax+0x180]
  55bb55:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bb58:	8b 92 24 03 00 00    	mov    edx,DWORD PTR [edx+0x324]
  55bb5e:	89 82 04 02 00 00    	mov    DWORD PTR [edx+0x204],eax
  55bb64:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bb67:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55bb6d:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55bb73:	8b 90 80 01 00 00    	mov    edx,DWORD PTR [eax+0x180]
  55bb79:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bb7e:	8b 00                	mov    eax,DWORD PTR [eax]
  55bb80:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bb86:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bb89:	e8 be ff 00 00       	call   0x56bb4c
  55bb8e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bb93:	8b 00                	mov    eax,DWORD PTR [eax]
  55bb95:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bb9b:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bb9e:	8b 50 18             	mov    edx,DWORD PTR [eax+0x18]
  55bba1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bba6:	8b 00                	mov    eax,DWORD PTR [eax]
  55bba8:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55bbae:	e8 fd 42 ff ff       	call   0x54feb0
  55bbb3:	59                   	pop    ecx
  55bbb4:	59                   	pop    ecx
  55bbb5:	5d                   	pop    ebp
  55bbb6:	c3                   	ret
  55bbb7:	00 ff                	add    bh,bh
  55bbb9:	ff                   	(bad)
  55bbba:	ff                   	(bad)
  55bbbb:	ff 06                	inc    DWORD PTR [esi]
  55bbbd:	00 00                	add    BYTE PTR [eax],al
  55bbbf:	00 52 63             	add    BYTE PTR [edx+0x63],dl
  55bbc2:	4d                   	dec    ebp
  55bbc3:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55bbc4:	31 36                	xor    DWORD PTR [esi],esi
  55bbc6:	00 00                	add    BYTE PTR [eax],al
  55bbc8:	ff                   	(bad)
  55bbc9:	ff                   	(bad)
  55bbca:	ff                   	(bad)
  55bbcb:	ff 06                	inc    DWORD PTR [esi]
  55bbcd:	00 00                	add    BYTE PTR [eax],al
  55bbcf:	00 52 63             	add    BYTE PTR [edx+0x63],dl
  55bbd2:	4d                   	dec    ebp
  55bbd3:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55bbd4:	31 35 00 00 55 8b    	xor    DWORD PTR ds:0x8b550000,esi
  55bbda:	ec                   	in     al,dx
  55bbdb:	81 c4 f0 fe ff ff    	add    esp,0xfffffef0
  55bbe1:	33 c9                	xor    ecx,ecx
  55bbe3:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  55bbe6:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  55bbe9:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55bbec:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55bbef:	33 c0                	xor    eax,eax
  55bbf1:	55                   	push   ebp
  55bbf2:	68 21 be 55 00       	push   0x55be21
  55bbf7:	64 ff 30             	push   DWORD PTR fs:[eax]
  55bbfa:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55bbfd:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  55bc03:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bc06:	8b 00                	mov    eax,DWORD PTR [eax]
  55bc08:	e8 d3 73 ea ff       	call   0x402fe0
  55bc0d:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  55bc13:	8d 45 f0             	lea    eax,[ebp-0x10]
  55bc16:	e8 b9 83 ea ff       	call   0x403fd4
  55bc1b:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  55bc1e:	68 34 be 55 00       	push   0x55be34
  55bc23:	68 40 be 55 00       	push   0x55be40
  55bc28:	8d 45 f4             	lea    eax,[ebp-0xc]
  55bc2b:	ba 03 00 00 00       	mov    edx,0x3
  55bc30:	e8 bb 84 ea ff       	call   0x4040f0
  55bc35:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55bc38:	50                   	push   eax
  55bc39:	e8 4e 85 f4 ff       	call   0x4a418c
  55bc3e:	8a 0d 4c be 55 00    	mov    cl,BYTE PTR ds:0x55be4c
  55bc44:	5a                   	pop    edx
  55bc45:	e8 6e 8c f4 ff       	call   0x4a48b8
  55bc4a:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55bc4d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bc50:	e8 13 32 ff ff       	call   0x54ee68
  55bc55:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55bc5b:	8b 92 a4 00 00 00    	mov    edx,DWORD PTR [edx+0xa4]
  55bc61:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bc64:	8b 80 00 03 00 00    	mov    eax,DWORD PTR [eax+0x300]
  55bc6a:	e8 d5 6a ed ff       	call   0x432744
  55bc6f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bc72:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55bc78:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
  55bc7e:	e8 69 6f ed ff       	call   0x432bec
  55bc83:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bc86:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55bc8c:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55bc92:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bc95:	89 90 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edx
  55bc9b:	c7 80 08 01 00 00 b8 	mov    DWORD PTR [eax+0x108],0x55b4b8
  55bca2:	b4 55 00 
  55bca5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bca8:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55bcae:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55bcb4:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bcb7:	89 90 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edx
  55bcbd:	c7 80 08 01 00 00 b8 	mov    DWORD PTR [eax+0x108],0x55b4b8
  55bcc4:	b4 55 00 
  55bcc7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bcca:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55bcd0:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55bcd6:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bcd9:	89 90 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edx
  55bcdf:	c7 80 08 01 00 00 b8 	mov    DWORD PTR [eax+0x108],0x55b4b8
  55bce6:	b4 55 00 
  55bce9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bcec:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55bcf2:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55bcf8:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bcfb:	89 90 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edx
  55bd01:	c7 80 08 01 00 00 fc 	mov    DWORD PTR [eax+0x108],0x55b6fc
  55bd08:	b6 55 00 
  55bd0b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bd0e:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55bd14:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55bd1a:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bd1d:	89 90 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edx
  55bd23:	c7 80 08 01 00 00 fc 	mov    DWORD PTR [eax+0x108],0x55b6fc
  55bd2a:	b6 55 00 
  55bd2d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bd30:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55bd36:	8b 80 20 02 00 00    	mov    eax,DWORD PTR [eax+0x220]
  55bd3c:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bd3f:	89 90 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edx
  55bd45:	c7 80 08 01 00 00 fc 	mov    DWORD PTR [eax+0x108],0x55b6fc
  55bd4c:	b6 55 00 
  55bd4f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bd52:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55bd58:	8b 80 14 02 00 00    	mov    eax,DWORD PTR [eax+0x214]
  55bd5e:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bd61:	89 90 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edx
  55bd67:	c7 80 08 01 00 00 b8 	mov    DWORD PTR [eax+0x108],0x55b8b8
  55bd6e:	b8 55 00 
  55bd71:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bd74:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55bd7a:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55bd80:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bd83:	89 90 a4 01 00 00    	mov    DWORD PTR [eax+0x1a4],edx
  55bd89:	c7 80 a0 01 00 00 8c 	mov    DWORD PTR [eax+0x1a0],0x55b98c
  55bd90:	b9 55 00 
  55bd93:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bd96:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55bd9c:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55bda2:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bda5:	89 90 a4 01 00 00    	mov    DWORD PTR [eax+0x1a4],edx
  55bdab:	c7 80 a0 01 00 00 a0 	mov    DWORD PTR [eax+0x1a0],0x55baa0
  55bdb2:	ba 55 00 
  55bdb5:	c6 05 98 48 57 00 01 	mov    BYTE PTR ds:0x574898,0x1
  55bdbc:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55bdbf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bdc2:	e8 f1 f6 ff ff       	call   0x55b4b8
  55bdc7:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55bdca:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bdcd:	e8 2a f9 ff ff       	call   0x55b6fc
  55bdd2:	c6 05 98 48 57 00 00 	mov    BYTE PTR ds:0x574898,0x0
  55bdd9:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bdde:	8b 00                	mov    eax,DWORD PTR [eax]
  55bde0:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55bde6:	e8 f1 41 ff ff       	call   0x54ffdc
  55bdeb:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bdf0:	8b 00                	mov    eax,DWORD PTR [eax]
  55bdf2:	ba 58 be 55 00       	mov    edx,0x55be58
  55bdf7:	e8 70 de 00 00       	call   0x569c6c
  55bdfc:	e8 8b 83 f4 ff       	call   0x4a418c
  55be01:	e8 aa 8b f4 ff       	call   0x4a49b0
  55be06:	33 c0                	xor    eax,eax
  55be08:	5a                   	pop    edx
  55be09:	59                   	pop    ecx
  55be0a:	59                   	pop    ecx
  55be0b:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55be0e:	68 28 be 55 00       	push   0x55be28
  55be13:	8d 45 f0             	lea    eax,[ebp-0x10]
  55be16:	ba 02 00 00 00       	mov    edx,0x2
  55be1b:	e8 b4 7f ea ff       	call   0x403dd4
  55be20:	c3                   	ret
  55be21:	e9 ce 79 ea ff       	jmp    0x4037f4
  55be26:	eb eb                	jmp    0x55be13
  55be28:	8b e5                	mov    esp,ebp
  55be2a:	5d                   	pop    ebp
  55be2b:	c3                   	ret
  55be2c:	ff                   	(bad)
  55be2d:	ff                   	(bad)
  55be2e:	ff                   	(bad)
  55be2f:	ff 01                	inc    DWORD PTR [ecx]
  55be31:	00 00                	add    BYTE PTR [eax],al
  55be33:	00 2e                	add    BYTE PTR [esi],ch
  55be35:	00 00                	add    BYTE PTR [eax],al
  55be37:	00 ff                	add    bh,bh
  55be39:	ff                   	(bad)
  55be3a:	ff                   	(bad)
  55be3b:	ff 08                	dec    DWORD PTR [eax]
  55be3d:	00 00                	add    BYTE PTR [eax],al
  55be3f:	00 46 6f             	add    BYTE PTR [esi+0x6f],al
  55be42:	72 6d                	jb     0x55beb1
  55be44:	53                   	push   ebx
  55be45:	68 6f 77 00 00       	push   0x776f
  55be4a:	00 00                	add    BYTE PTR [eax],al
  55be4c:	01 00                	add    DWORD PTR [eax],eax
  55be4e:	00 00                	add    BYTE PTR [eax],al
  55be50:	ff                   	(bad)
  55be51:	ff                   	(bad)
  55be52:	ff                   	(bad)
  55be53:	ff 07                	inc    DWORD PTR [edi]
  55be55:	00 00                	add    BYTE PTR [eax],al
  55be57:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55be5a:	5f                   	pop    edi
  55be5b:	49                   	dec    ecx
  55be5c:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55be5d:	30 31                	xor    BYTE PTR [ecx],dh
  55be5f:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  55be62:	ec                   	in     al,dx
  55be63:	83 c4 f8             	add    esp,0xfffffff8
  55be66:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55be69:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55be6c:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55be6f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55be72:	e8 45 30 ff ff       	call   0x54eebc
  55be77:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55be7a:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55be80:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55be86:	8b 10                	mov    edx,DWORD PTR [eax]
  55be88:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55be8e:	84 c0                	test   al,al
  55be90:	74 12                	je     0x55bea4
  55be92:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55be95:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55be9b:	c7 40 24 01 00 00 00 	mov    DWORD PTR [eax+0x24],0x1
  55bea2:	eb 3d                	jmp    0x55bee1
  55bea4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bea7:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55bead:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55beb3:	8b 10                	mov    edx,DWORD PTR [eax]
  55beb5:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55bebb:	84 c0                	test   al,al
  55bebd:	74 12                	je     0x55bed1
  55bebf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bec2:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55bec8:	c7 40 24 02 00 00 00 	mov    DWORD PTR [eax+0x24],0x2
  55becf:	eb 10                	jmp    0x55bee1
  55bed1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bed4:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55beda:	c7 40 24 03 00 00 00 	mov    DWORD PTR [eax+0x24],0x3
  55bee1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bee4:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55beea:	8b 80 18 02 00 00    	mov    eax,DWORD PTR [eax+0x218]
  55bef0:	8b 10                	mov    edx,DWORD PTR [eax]
  55bef2:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55bef8:	84 c0                	test   al,al
  55befa:	74 17                	je     0x55bf13
  55befc:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bf01:	8b 00                	mov    eax,DWORD PTR [eax]
  55bf03:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bf09:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bf0c:	33 d2                	xor    edx,edx
  55bf0e:	89 50 2c             	mov    DWORD PTR [eax+0x2c],edx
  55bf11:	eb 4b                	jmp    0x55bf5e
  55bf13:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bf16:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55bf1c:	8b 80 1c 02 00 00    	mov    eax,DWORD PTR [eax+0x21c]
  55bf22:	8b 10                	mov    edx,DWORD PTR [eax]
  55bf24:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55bf2a:	84 c0                	test   al,al
  55bf2c:	74 19                	je     0x55bf47
  55bf2e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bf33:	8b 00                	mov    eax,DWORD PTR [eax]
  55bf35:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bf3b:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bf3e:	c7 40 2c 01 00 00 00 	mov    DWORD PTR [eax+0x2c],0x1
  55bf45:	eb 17                	jmp    0x55bf5e
  55bf47:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bf4c:	8b 00                	mov    eax,DWORD PTR [eax]
  55bf4e:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bf54:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bf57:	c7 40 2c 02 00 00 00 	mov    DWORD PTR [eax+0x2c],0x2
  55bf5e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bf63:	8b 00                	mov    eax,DWORD PTR [eax]
  55bf65:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bf6b:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bf6e:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55bf71:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55bf74:	8b 92 2c 03 00 00    	mov    edx,DWORD PTR [edx+0x32c]
  55bf7a:	8b 08                	mov    ecx,DWORD PTR [eax]
  55bf7c:	ff 51 0c             	call   DWORD PTR [ecx+0xc]
  55bf7f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bf82:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55bf88:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55bf8e:	8b 90 80 01 00 00    	mov    edx,DWORD PTR [eax+0x180]
  55bf94:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bf99:	8b 00                	mov    eax,DWORD PTR [eax]
  55bf9b:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bfa1:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bfa4:	e8 bf f2 00 00       	call   0x56b268
  55bfa9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55bfac:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55bfb2:	8b 80 fc 01 00 00    	mov    eax,DWORD PTR [eax+0x1fc]
  55bfb8:	8b 90 80 01 00 00    	mov    edx,DWORD PTR [eax+0x180]
  55bfbe:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bfc3:	8b 00                	mov    eax,DWORD PTR [eax]
  55bfc5:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bfcb:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bfce:	e8 79 fb 00 00       	call   0x56bb4c
  55bfd3:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bfd8:	8b 00                	mov    eax,DWORD PTR [eax]
  55bfda:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55bfe0:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55bfe3:	8b 50 18             	mov    edx,DWORD PTR [eax+0x18]
  55bfe6:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bfeb:	8b 00                	mov    eax,DWORD PTR [eax]
  55bfed:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55bff3:	e8 b8 3e ff ff       	call   0x54feb0
  55bff8:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55bffd:	8b 00                	mov    eax,DWORD PTR [eax]
  55bfff:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
