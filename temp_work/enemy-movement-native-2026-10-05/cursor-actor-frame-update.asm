  422240:	56                   	push   esi
  422241:	8b f1                	mov    esi,ecx
  422243:	e8 18 f3 ff ff       	call   0x421560
  422248:	84 c0                	test   al,al
  42224a:	74 11                	je     0x42225d
  42224c:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  422250:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  422254:	50                   	push   eax
  422255:	51                   	push   ecx
  422256:	8b ce                	mov    ecx,esi
  422258:	e8 d3 39 17 00       	call   0x595c30
  42225d:	5e                   	pop    esi
  42225e:	c2 08 00             	ret    0x8
  422261:	90                   	nop
  422262:	90                   	nop
  422263:	90                   	nop
  422264:	90                   	nop
  422265:	90                   	nop
  422266:	90                   	nop
  422267:	90                   	nop
  422268:	90                   	nop
  422269:	90                   	nop
  42226a:	90                   	nop
  42226b:	90                   	nop
  42226c:	90                   	nop
  42226d:	90                   	nop
  42226e:	90                   	nop
  42226f:	90                   	nop
  422270:	56                   	push   esi
  422271:	8b f1                	mov    esi,ecx
  422273:	8a 86 75 03 00 00    	mov    al,BYTE PTR [esi+0x375]
  422279:	84 c0                	test   al,al
  42227b:	74 12                	je     0x42228f
  42227d:	6a 00                	push   0x0
  42227f:	e8 ec 31 17 00       	call   0x595470
  422284:	8b c8                	mov    ecx,eax
  422286:	e8 85 99 17 00       	call   0x59bc10
  42228b:	5e                   	pop    esi
  42228c:	c2 08 00             	ret    0x8
  42228f:	8a 86 74 03 00 00    	mov    al,BYTE PTR [esi+0x374]
  422295:	84 c0                	test   al,al
  422297:	74 04                	je     0x42229d
  422299:	6a 00                	push   0x0
  42229b:	eb 07                	jmp    0x4222a4
  42229d:	8b 86 6c 03 00 00    	mov    eax,DWORD PTR [esi+0x36c]
  4222a3:	50                   	push   eax
  4222a4:	8b ce                	mov    ecx,esi
  4222a6:	e8 c5 31 17 00       	call   0x595470
  4222ab:	8b c8                	mov    ecx,eax
  4222ad:	e8 5e 99 17 00       	call   0x59bc10
  4222b2:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  4222b6:	51                   	push   ecx
  4222b7:	8d 8e 9c 01 00 00    	lea    ecx,[esi+0x19c]
  4222bd:	e8 2e e7 07 00       	call   0x4a09f0
  4222c2:	5e                   	pop    esi
  4222c3:	c2 08 00             	ret    0x8
  4222c6:	90                   	nop
  4222c7:	90                   	nop
  4222c8:	90                   	nop
  4222c9:	90                   	nop
  4222ca:	90                   	nop
  4222cb:	90                   	nop
  4222cc:	90                   	nop
  4222cd:	90                   	nop
  4222ce:	90                   	nop
  4222cf:	90                   	nop
  4222d0:	8a 81 75 03 00 00    	mov    al,BYTE PTR [ecx+0x375]
  4222d6:	84 c0                	test   al,al
  4222d8:	75 21                	jne    0x4222fb
  4222da:	8b 89 44 03 00 00    	mov    ecx,DWORD PTR [ecx+0x344]
  4222e0:	8a 41 7c             	mov    al,BYTE PTR [ecx+0x7c]
  4222e3:	84 c0                	test   al,al
  4222e5:	74 14                	je     0x4222fb
  4222e7:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  4222eb:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  4222ef:	50                   	push   eax
  4222f0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  4222f4:	52                   	push   edx
  4222f5:	50                   	push   eax
  4222f6:	e8 c5 1c 0e 00       	call   0x503fc0
  4222fb:	c2 0c 00             	ret    0xc
  4222fe:	90                   	nop
  4222ff:	90                   	nop
  422300:	8a 81 75 03 00 00    	mov    al,BYTE PTR [ecx+0x375]
  422306:	84 c0                	test   al,al
  422308:	75 17                	jne    0x422321
  42230a:	8b 89 44 03 00 00    	mov    ecx,DWORD PTR [ecx+0x344]
  422310:	8a 41 7c             	mov    al,BYTE PTR [ecx+0x7c]
  422313:	84 c0                	test   al,al
  422315:	74 0a                	je     0x422321
  422317:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  42231b:	50                   	push   eax
  42231c:	e8 5f 0e 0e 00       	call   0x503180
  422321:	c2 04 00             	ret    0x4
  422324:	90                   	nop
  422325:	90                   	nop
  422326:	90                   	nop
  422327:	90                   	nop
  422328:	90                   	nop
  422329:	90                   	nop
  42232a:	90                   	nop
  42232b:	90                   	nop
  42232c:	90                   	nop
  42232d:	90                   	nop
  42232e:	90                   	nop
  42232f:	90                   	nop
  422330:	56                   	push   esi
  422331:	8b f1                	mov    esi,ecx
  422333:	e8 28 3d 17 00       	call   0x596060
  422338:	8b 8e 44 03 00 00    	mov    ecx,DWORD PTR [esi+0x344]
  42233e:	8b 01                	mov    eax,DWORD PTR [ecx]
  422340:	ff 90 98 00 00 00    	call   DWORD PTR [eax+0x98]
  422346:	5e                   	pop    esi
  422347:	c3                   	ret
  422348:	90                   	nop
  422349:	90                   	nop
  42234a:	90                   	nop
  42234b:	90                   	nop
  42234c:	90                   	nop
  42234d:	90                   	nop
  42234e:	90                   	nop
  42234f:	90                   	nop
  422350:	c6 81 74 03 00 00 01 	mov    BYTE PTR [ecx+0x374],0x1
  422357:	c3                   	ret
  422358:	90                   	nop
  422359:	90                   	nop
  42235a:	90                   	nop
  42235b:	90                   	nop
  42235c:	90                   	nop
  42235d:	90                   	nop
  42235e:	90                   	nop
  42235f:	90                   	nop
  422360:	c6 81 74 03 00 00 00 	mov    BYTE PTR [ecx+0x374],0x0
  422367:	c3                   	ret
  422368:	90                   	nop
  422369:	90                   	nop
  42236a:	90                   	nop
  42236b:	90                   	nop
  42236c:	90                   	nop
  42236d:	90                   	nop
  42236e:	90                   	nop
  42236f:	90                   	nop
  422370:	8b 81 44 03 00 00    	mov    eax,DWORD PTR [ecx+0x344]
  422376:	c3                   	ret
  422377:	90                   	nop
  422378:	90                   	nop
  422379:	90                   	nop
  42237a:	90                   	nop
  42237b:	90                   	nop
  42237c:	90                   	nop
  42237d:	90                   	nop
  42237e:	90                   	nop
  42237f:	90                   	nop
  422380:	c6 81 75 03 00 00 01 	mov    BYTE PTR [ecx+0x375],0x1
  422387:	8b 89 44 03 00 00    	mov    ecx,DWORD PTR [ecx+0x344]
  42238d:	e9 ee 25 00 00       	jmp    0x424980
  422392:	90                   	nop
  422393:	90                   	nop
  422394:	90                   	nop
  422395:	90                   	nop
  422396:	90                   	nop
  422397:	90                   	nop
  422398:	90                   	nop
  422399:	90                   	nop
  42239a:	90                   	nop
  42239b:	90                   	nop
  42239c:	90                   	nop
  42239d:	90                   	nop
  42239e:	90                   	nop
  42239f:	90                   	nop
  4223a0:	c6 81 75 03 00 00 00 	mov    BYTE PTR [ecx+0x375],0x0
  4223a7:	8b 89 44 03 00 00    	mov    ecx,DWORD PTR [ecx+0x344]
  4223ad:	e9 de 25 00 00       	jmp    0x424990
  4223b2:	90                   	nop
  4223b3:	90                   	nop
  4223b4:	90                   	nop
  4223b5:	90                   	nop
  4223b6:	90                   	nop
  4223b7:	90                   	nop
  4223b8:	90                   	nop
  4223b9:	90                   	nop
  4223ba:	90                   	nop
  4223bb:	90                   	nop
  4223bc:	90                   	nop
  4223bd:	90                   	nop
  4223be:	90                   	nop
  4223bf:	90                   	nop
  4223c0:	8d 81 48 03 00 00    	lea    eax,[ecx+0x348]
  4223c6:	c3                   	ret
  4223c7:	90                   	nop
  4223c8:	90                   	nop
  4223c9:	90                   	nop
  4223ca:	90                   	nop
  4223cb:	90                   	nop
  4223cc:	90                   	nop
  4223cd:	90                   	nop
  4223ce:	90                   	nop
  4223cf:	90                   	nop
