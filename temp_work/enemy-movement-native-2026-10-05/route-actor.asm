
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004dd040 <.text+0xdc040>:
  4dd040:	68 ec f8 68 00       	push   0x68f8ec
  4dd045:	e8 a6 37 0c 00       	call   0x5a07f0
  4dd04a:	ff d0                	call   eax
  4dd04c:	83 c4 10             	add    esp,0x10
  4dd04f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dd053:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0xffffffff
  4dd05a:	ff ff ff ff 
  4dd05e:	6a 01                	push   0x1
  4dd060:	e8 3b 70 f2 ff       	call   0x4040a0
  4dd065:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  4dd069:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  4dd06f:	6a 00                	push   0x0
  4dd071:	6a 00                	push   0x0
  4dd073:	68 00 00 80 3f       	push   0x3f800000
  4dd078:	6a 00                	push   0x0
  4dd07a:	8d 44 24 28          	lea    eax,[esp+0x28]
  4dd07e:	52                   	push   edx
  4dd07f:	50                   	push   eax
  4dd080:	e8 5b 2f 07 00       	call   0x54ffe0
  4dd085:	8b f8                	mov    edi,eax
  4dd087:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  4dd089:	8b 07                	mov    eax,DWORD PTR [edi]
  4dd08b:	3b c8                	cmp    ecx,eax
  4dd08d:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x9
  4dd094:	09 00 00 00 
  4dd098:	74 1f                	je     0x4dd0b9
  4dd09a:	85 c9                	test   ecx,ecx
  4dd09c:	74 10                	je     0x4dd0ae
  4dd09e:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  4dd0a1:	48                   	dec    eax
  4dd0a2:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  4dd0a5:	75 07                	jne    0x4dd0ae
  4dd0a7:	6a 00                	push   0x0
  4dd0a9:	e8 12 ef 0c 00       	call   0x5abfc0
  4dd0ae:	8b 0f                	mov    ecx,DWORD PTR [edi]
  4dd0b0:	89 0b                	mov    DWORD PTR [ebx],ecx
  4dd0b2:	8b cb                	mov    ecx,ebx
  4dd0b4:	e8 f7 73 0a 00       	call   0x5844b0
  4dd0b9:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4dd0bd:	83 cb ff             	or     ebx,0xffffffff
  4dd0c0:	85 c9                	test   ecx,ecx
  4dd0c2:	89 9c 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebx
  4dd0c9:	74 05                	je     0x4dd0d0
  4dd0cb:	e8 00 c8 f2 ff       	call   0x4098d0
  4dd0d0:	e8 cb d3 12 00       	call   0x60a4a0
  4dd0d5:	99                   	cdq
  4dd0d6:	b9 10 27 00 00       	mov    ecx,0x2710
  4dd0db:	f7 f9                	idiv   ecx
  4dd0dd:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4dd0e1:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  4dd0e5:	d8 0d 70 c5 64 00    	fmul   DWORD PTR ds:0x64c570
  4dd0eb:	d8 05 9c b7 64 00    	fadd   DWORD PTR ds:0x64b79c
  4dd0f1:	e8 2a da 12 00       	call   0x60ab20
  4dd0f6:	8b e8                	mov    ebp,eax
  4dd0f8:	3b eb                	cmp    ebp,ebx
  4dd0fa:	74 6c                	je     0x4dd168
  4dd0fc:	85 ed                	test   ebp,ebp
  4dd0fe:	7d 68                	jge    0x4dd168
  4dd100:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4dd104:	6a 00                	push   0x0
  4dd106:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4dd10a:	88 54 24 54          	mov    BYTE PTR [esp+0x54],dl
  4dd10e:	e8 8d 6f f2 ff       	call   0x4040a0
  4dd113:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd118:	8b cb                	mov    ecx,ebx
  4dd11a:	33 c0                	xor    eax,eax
  4dd11c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd11e:	f7 d1                	not    ecx
  4dd120:	49                   	dec    ecx
  4dd121:	51                   	push   ecx
  4dd122:	68 70 3f 6b 00       	push   0x6b3f70
  4dd127:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4dd12b:	e8 c0 6f f2 ff       	call   0x4040f0
  4dd130:	8d 44 24 50          	lea    eax,[esp+0x50]
  4dd134:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0xa
  4dd13b:	0a 00 00 00 
  4dd13f:	50                   	push   eax
  4dd140:	6a 56                	push   0x56
  4dd142:	68 c8 d4 68 00       	push   0x68d4c8
  4dd147:	68 90 d4 68 00       	push   0x68d490
  4dd14c:	e8 9f 36 0c 00       	call   0x5a07f0
  4dd151:	ff d0                	call   eax
  4dd153:	83 c4 10             	add    esp,0x10
  4dd156:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4dd15a:	89 9c 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebx
  4dd161:	6a 01                	push   0x1
  4dd163:	e8 38 6f f2 ff       	call   0x4040a0
  4dd168:	89 ae 18 02 00 00    	mov    DWORD PTR [esi+0x218],ebp
  4dd16e:	89 9e 1c 02 00 00    	mov    DWORD PTR [esi+0x21c],ebx
  4dd174:	c7 86 20 02 00 00 00 	mov    DWORD PTR [esi+0x220],0x3f800000
  4dd17b:	00 80 3f 
  4dd17e:	c6 86 24 02 00 00 01 	mov    BYTE PTR [esi+0x224],0x1
  4dd185:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  4dd18c:	5f                   	pop    edi
  4dd18d:	5e                   	pop    esi
  4dd18e:	5d                   	pop    ebp
  4dd18f:	5b                   	pop    ebx
  4dd190:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dd197:	81 c4 b4 00 00 00    	add    esp,0xb4
  4dd19d:	c2 0c 00             	ret    0xc
  4dd1a0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dd1a6:	6a ff                	push   0xffffffff
  4dd1a8:	68 20 21 63 00       	push   0x632120
  4dd1ad:	50                   	push   eax
  4dd1ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dd1b5:	83 ec 18             	sub    esp,0x18
  4dd1b8:	56                   	push   esi
  4dd1b9:	8b f1                	mov    esi,ecx
  4dd1bb:	57                   	push   edi
  4dd1bc:	8b 86 f0 01 00 00    	mov    eax,DWORD PTR [esi+0x1f0]
  4dd1c2:	85 c0                	test   eax,eax
  4dd1c4:	75 6a                	jne    0x4dd230
  4dd1c6:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  4dd1ca:	6a 00                	push   0x0
  4dd1cc:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dd1d0:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  4dd1d4:	e8 c7 6e f2 ff       	call   0x4040a0
  4dd1d9:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd1de:	83 c9 ff             	or     ecx,0xffffffff
  4dd1e1:	33 c0                	xor    eax,eax
  4dd1e3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd1e5:	f7 d1                	not    ecx
  4dd1e7:	49                   	dec    ecx
  4dd1e8:	51                   	push   ecx
  4dd1e9:	68 70 3f 6b 00       	push   0x6b3f70
  4dd1ee:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4dd1f2:	e8 f9 6e f2 ff       	call   0x4040f0
  4dd1f7:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4dd1fb:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
  4dd202:	00 
  4dd203:	51                   	push   ecx
  4dd204:	68 5b 01 00 00       	push   0x15b
  4dd209:	68 8c 88 69 00       	push   0x69888c
  4dd20e:	68 70 f9 68 00       	push   0x68f970
  4dd213:	e8 d8 35 0c 00       	call   0x5a07f0
  4dd218:	ff d0                	call   eax
  4dd21a:	83 c4 10             	add    esp,0x10
  4dd21d:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4dd221:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
  4dd228:	ff 
  4dd229:	6a 01                	push   0x1
  4dd22b:	e8 70 6e f2 ff       	call   0x4040a0
  4dd230:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
  4dd236:	6a 01                	push   0x1
  4dd238:	6a 00                	push   0x0
  4dd23a:	68 20 bc be cc       	push   0xccbebc20
  4dd23f:	8b 11                	mov    edx,DWORD PTR [ecx]
  4dd241:	ff 52 20             	call   DWORD PTR [edx+0x20]
  4dd244:	84 c0                	test   al,al
  4dd246:	0f 84 18 01 00 00    	je     0x4dd364
  4dd24c:	8b ce                	mov    ecx,esi
  4dd24e:	e8 2d 01 00 00       	call   0x4dd380
  4dd253:	84 c0                	test   al,al
  4dd255:	0f 84 09 01 00 00    	je     0x4dd364
  4dd25b:	55                   	push   ebp
  4dd25c:	c6 86 a8 00 00 00 00 	mov    BYTE PTR [esi+0xa8],0x0
  4dd263:	8b 2d e0 8d 6c 00    	mov    ebp,DWORD PTR ds:0x6c8de0
  4dd269:	85 ed                	test   ebp,ebp
  4dd26b:	75 07                	jne    0x4dd274
  4dd26d:	e8 0e e0 07 00       	call   0x55b280
  4dd272:	8b e8                	mov    ebp,eax
  4dd274:	8b 85 fc 00 00 00    	mov    eax,DWORD PTR [ebp+0xfc]
  4dd27a:	85 c0                	test   eax,eax
  4dd27c:	75 6a                	jne    0x4dd2e8
  4dd27e:	8a 44 24 0f          	mov    al,BYTE PTR [esp+0xf]
  4dd282:	6a 00                	push   0x0
  4dd284:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4dd288:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4dd28c:	e8 0f 6e f2 ff       	call   0x4040a0
  4dd291:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd296:	83 c9 ff             	or     ecx,0xffffffff
  4dd299:	33 c0                	xor    eax,eax
  4dd29b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd29d:	f7 d1                	not    ecx
  4dd29f:	49                   	dec    ecx
  4dd2a0:	51                   	push   ecx
  4dd2a1:	68 70 3f 6b 00       	push   0x6b3f70
  4dd2a6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dd2aa:	e8 41 6e f2 ff       	call   0x4040f0
  4dd2af:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dd2b3:	c7 44 24 2c 01 00 00 	mov    DWORD PTR [esp+0x2c],0x1
  4dd2ba:	00 
  4dd2bb:	51                   	push   ecx
  4dd2bc:	68 8f 01 00 00       	push   0x18f
  4dd2c1:	68 58 eb 68 00       	push   0x68eb58
  4dd2c6:	68 ec f8 68 00       	push   0x68f8ec
  4dd2cb:	e8 20 35 0c 00       	call   0x5a07f0
  4dd2d0:	ff d0                	call   eax
  4dd2d2:	83 c4 10             	add    esp,0x10
  4dd2d5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dd2d9:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  4dd2e0:	ff 
  4dd2e1:	6a 01                	push   0x1
  4dd2e3:	e8 b8 6d f2 ff       	call   0x4040a0
  4dd2e8:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  4dd2ee:	6a 00                	push   0x0
  4dd2f0:	bf 00 00 80 3f       	mov    edi,0x3f800000
  4dd2f5:	6a 00                	push   0x0
  4dd2f7:	57                   	push   edi
  4dd2f8:	6a 00                	push   0x0
  4dd2fa:	8d 54 24 20          	lea    edx,[esp+0x20]
  4dd2fe:	68 60 53 6b 00       	push   0x6b5360
  4dd303:	52                   	push   edx
  4dd304:	e8 d7 2c 07 00       	call   0x54ffe0
  4dd309:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4dd30d:	85 c0                	test   eax,eax
  4dd30f:	74 18                	je     0x4dd329
  4dd311:	8b 68 14             	mov    ebp,DWORD PTR [eax+0x14]
  4dd314:	8b c8                	mov    ecx,eax
  4dd316:	83 c0 14             	add    eax,0x14
  4dd319:	4d                   	dec    ebp
  4dd31a:	8b d5                	mov    edx,ebp
  4dd31c:	85 d2                	test   edx,edx
  4dd31e:	89 28                	mov    DWORD PTR [eax],ebp
  4dd320:	75 07                	jne    0x4dd329
  4dd322:	6a 00                	push   0x0
  4dd324:	e8 97 ec 0c 00       	call   0x5abfc0
  4dd329:	b8 e8 03 00 00       	mov    eax,0x3e8
  4dd32e:	83 c9 ff             	or     ecx,0xffffffff
  4dd331:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
  4dd337:	89 8e 14 01 00 00    	mov    DWORD PTR [esi+0x114],ecx
  4dd33d:	89 be 18 01 00 00    	mov    DWORD PTR [esi+0x118],edi
  4dd343:	c6 86 1c 01 00 00 01 	mov    BYTE PTR [esi+0x11c],0x1
  4dd34a:	89 86 20 01 00 00    	mov    DWORD PTR [esi+0x120],eax
  4dd350:	89 8e 24 01 00 00    	mov    DWORD PTR [esi+0x124],ecx
  4dd356:	89 be 28 01 00 00    	mov    DWORD PTR [esi+0x128],edi
  4dd35c:	c6 86 2c 01 00 00 01 	mov    BYTE PTR [esi+0x12c],0x1
  4dd363:	5d                   	pop    ebp
  4dd364:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  4dd368:	5f                   	pop    edi
  4dd369:	5e                   	pop    esi
  4dd36a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dd371:	83 c4 24             	add    esp,0x24
  4dd374:	c2 08 00             	ret    0x8
  4dd377:	90                   	nop
  4dd378:	90                   	nop
  4dd379:	90                   	nop
  4dd37a:	90                   	nop
  4dd37b:	90                   	nop
  4dd37c:	90                   	nop
  4dd37d:	90                   	nop
  4dd37e:	90                   	nop
  4dd37f:	90                   	nop
  4dd380:	6a ff                	push   0xffffffff
  4dd382:	68 38 21 63 00       	push   0x632138
  4dd387:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dd38d:	50                   	push   eax
  4dd38e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dd395:	83 ec 18             	sub    esp,0x18
  4dd398:	53                   	push   ebx
  4dd399:	56                   	push   esi
  4dd39a:	8b f1                	mov    esi,ecx
  4dd39c:	33 db                	xor    ebx,ebx
  4dd39e:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  4dd3a2:	39 9e f0 01 00 00    	cmp    DWORD PTR [esi+0x1f0],ebx
  4dd3a8:	0f 85 bc 00 00 00    	jne    0x4dd46a
  4dd3ae:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  4dd3b2:	55                   	push   ebp
  4dd3b3:	57                   	push   edi
  4dd3b4:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4dd3b8:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd3bd:	83 c9 ff             	or     ecx,0xffffffff
  4dd3c0:	33 c0                	xor    eax,eax
  4dd3c2:	6a 01                	push   0x1
  4dd3c4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd3c6:	f7 d1                	not    ecx
  4dd3c8:	49                   	dec    ecx
  4dd3c9:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  4dd3cd:	8b e9                	mov    ebp,ecx
  4dd3cf:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dd3d3:	55                   	push   ebp
  4dd3d4:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  4dd3d8:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  4dd3dc:	e8 5f 45 f2 ff       	call   0x401940
  4dd3e1:	84 c0                	test   al,al
  4dd3e3:	74 28                	je     0x4dd40d
  4dd3e5:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  4dd3e9:	8b cd                	mov    ecx,ebp
  4dd3eb:	8b d1                	mov    edx,ecx
  4dd3ed:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4dd3f2:	c1 e9 02             	shr    ecx,0x2
  4dd3f5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4dd3f7:	8b ca                	mov    ecx,edx
  4dd3f9:	83 e1 03             	and    ecx,0x3
  4dd3fc:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dd3fe:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4dd402:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dd406:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  4dd40a:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  4dd40d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4dd411:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  4dd415:	51                   	push   ecx
  4dd416:	68 c2 08 00 00       	push   0x8c2
  4dd41b:	68 28 97 69 00       	push   0x699728
  4dd420:	68 70 f9 68 00       	push   0x68f970
  4dd425:	e8 c6 33 0c 00       	call   0x5a07f0
  4dd42a:	ff d0                	call   eax
  4dd42c:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  4dd430:	83 c4 10             	add    esp,0x10
  4dd433:	3b c3                	cmp    eax,ebx
  4dd435:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  4dd43c:	ff 
  4dd43d:	5f                   	pop    edi
  4dd43e:	5d                   	pop    ebp
  4dd43f:	74 1d                	je     0x4dd45e
  4dd441:	8d 48 ff             	lea    ecx,[eax-0x1]
  4dd444:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4dd447:	3a c3                	cmp    al,bl
  4dd449:	74 0a                	je     0x4dd455
  4dd44b:	3c ff                	cmp    al,0xff
  4dd44d:	74 06                	je     0x4dd455
  4dd44f:	fe c8                	dec    al
  4dd451:	88 01                	mov    BYTE PTR [ecx],al
  4dd453:	eb 09                	jmp    0x4dd45e
  4dd455:	51                   	push   ecx
  4dd456:	e8 95 11 12 00       	call   0x5fe5f0
  4dd45b:	83 c4 04             	add    esp,0x4
  4dd45e:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  4dd462:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  4dd466:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  4dd46a:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
  4dd470:	8b 11                	mov    edx,DWORD PTR [ecx]
  4dd472:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4dd475:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  4dd479:	5e                   	pop    esi
  4dd47a:	5b                   	pop    ebx
  4dd47b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dd482:	83 c4 24             	add    esp,0x24
  4dd485:	c3                   	ret
  4dd486:	90                   	nop
  4dd487:	90                   	nop
  4dd488:	90                   	nop
  4dd489:	90                   	nop
  4dd48a:	90                   	nop
  4dd48b:	90                   	nop
  4dd48c:	90                   	nop
  4dd48d:	90                   	nop
  4dd48e:	90                   	nop
  4dd48f:	90                   	nop
  4dd490:	6a ff                	push   0xffffffff
  4dd492:	68 68 21 63 00       	push   0x632168
  4dd497:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dd49d:	50                   	push   eax
  4dd49e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dd4a5:	83 ec 14             	sub    esp,0x14
  4dd4a8:	53                   	push   ebx
  4dd4a9:	55                   	push   ebp
  4dd4aa:	56                   	push   esi
  4dd4ab:	8d 44 24 0c          	lea    eax,[esp+0xc]
  4dd4af:	57                   	push   edi
  4dd4b0:	8b e9                	mov    ebp,ecx
  4dd4b2:	50                   	push   eax
  4dd4b3:	e8 28 6e f2 ff       	call   0x4042e0
  4dd4b8:	8b f0                	mov    esi,eax
  4dd4ba:	8b 06                	mov    eax,DWORD PTR [esi]
  4dd4bc:	33 db                	xor    ebx,ebx
  4dd4be:	3b c3                	cmp    eax,ebx
  4dd4c0:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  4dd4c4:	0f 85 8a 00 00 00    	jne    0x4dd554
  4dd4ca:	8a 4c 24 34          	mov    cl,BYTE PTR [esp+0x34]
  4dd4ce:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd4d3:	88 4c 24 14          	mov    BYTE PTR [esp+0x14],cl
  4dd4d7:	83 c9 ff             	or     ecx,0xffffffff
  4dd4da:	33 c0                	xor    eax,eax
  4dd4dc:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  4dd4e0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd4e2:	f7 d1                	not    ecx
  4dd4e4:	49                   	dec    ecx
  4dd4e5:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  4dd4e9:	51                   	push   ecx
  4dd4ea:	68 70 3f 6b 00       	push   0x6b3f70
  4dd4ef:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dd4f3:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  4dd4f7:	e8 f4 6b f2 ff       	call   0x4040f0
  4dd4fc:	8d 54 24 14          	lea    edx,[esp+0x14]
  4dd500:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  4dd505:	52                   	push   edx
  4dd506:	68 b6 00 00 00       	push   0xb6
  4dd50b:	68 38 d6 68 00       	push   0x68d638
  4dd510:	68 2c d6 68 00       	push   0x68d62c
  4dd515:	e8 d6 32 0c 00       	call   0x5a07f0
  4dd51a:	ff d0                	call   eax
  4dd51c:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  4dd520:	83 c4 10             	add    esp,0x10
  4dd523:	3b c3                	cmp    eax,ebx
  4dd525:	88 5c 24 2c          	mov    BYTE PTR [esp+0x2c],bl
  4dd529:	74 1d                	je     0x4dd548
  4dd52b:	8d 48 ff             	lea    ecx,[eax-0x1]
  4dd52e:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4dd531:	3a c3                	cmp    al,bl
  4dd533:	74 0a                	je     0x4dd53f
  4dd535:	3c ff                	cmp    al,0xff
  4dd537:	74 06                	je     0x4dd53f
  4dd539:	fe c8                	dec    al
  4dd53b:	88 01                	mov    BYTE PTR [ecx],al
  4dd53d:	eb 09                	jmp    0x4dd548
  4dd53f:	51                   	push   ecx
  4dd540:	e8 ab 10 12 00       	call   0x5fe5f0
  4dd545:	83 c4 04             	add    esp,0x4
  4dd548:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  4dd54c:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  4dd550:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  4dd554:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4dd556:	e8 75 6a 01 00       	call   0x4f3fd0
  4dd55b:	8b f8                	mov    edi,eax
  4dd55d:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4dd561:	3b c3                	cmp    eax,ebx
  4dd563:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  4dd56a:	ff 
  4dd56b:	74 17                	je     0x4dd584
  4dd56d:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4dd570:	8b c8                	mov    ecx,eax
  4dd572:	83 c0 14             	add    eax,0x14
  4dd575:	4e                   	dec    esi
  4dd576:	8b d6                	mov    edx,esi
  4dd578:	3b d3                	cmp    edx,ebx
  4dd57a:	89 30                	mov    DWORD PTR [eax],esi
  4dd57c:	75 06                	jne    0x4dd584
  4dd57e:	53                   	push   ebx
  4dd57f:	e8 3c ea 0c 00       	call   0x5abfc0
  4dd584:	8d b5 28 02 00 00    	lea    esi,[ebp+0x228]
  4dd58a:	8b ce                	mov    ecx,esi
  4dd58c:	e8 5f dc 0b 00       	call   0x59b1f0
  4dd591:	84 c0                	test   al,al
  4dd593:	74 1a                	je     0x4dd5af
  4dd595:	8b 06                	mov    eax,DWORD PTR [esi]
  4dd597:	6a ff                	push   0xffffffff
  4dd599:	50                   	push   eax
  4dd59a:	8b cf                	mov    ecx,edi
  4dd59c:	e8 ef 09 0c 00       	call   0x59df90
  4dd5a1:	8b c8                	mov    ecx,eax
  4dd5a3:	e8 d8 af 0b 00       	call   0x598580
  4dd5a8:	8b ce                	mov    ecx,esi
  4dd5aa:	e8 51 dc 0b 00       	call   0x59b200
  4dd5af:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4dd5b3:	53                   	push   ebx
  4dd5b4:	68 00 00 c8 42       	push   0x42c80000
  4dd5b9:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  4dd5bd:	51                   	push   ecx
  4dd5be:	52                   	push   edx
  4dd5bf:	8b cf                	mov    ecx,edi
  4dd5c1:	e8 4a f2 0b 00       	call   0x59c810
  4dd5c6:	50                   	push   eax
  4dd5c7:	8b ce                	mov    ecx,esi
  4dd5c9:	c7 44 24 30 02 00 00 	mov    DWORD PTR [esp+0x30],0x2
  4dd5d0:	00 
  4dd5d1:	e8 fa db 0b 00       	call   0x59b1d0
  4dd5d6:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4dd5da:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  4dd5e1:	ff 
  4dd5e2:	e8 f9 5a 08 00       	call   0x5630e0
  4dd5e7:	8b ce                	mov    ecx,esi
  4dd5e9:	e8 02 dc 0b 00       	call   0x59b1f0
  4dd5ee:	84 c0                	test   al,al
  4dd5f0:	74 1c                	je     0x4dd60e
  4dd5f2:	8b 06                	mov    eax,DWORD PTR [esi]
  4dd5f4:	8b cf                	mov    ecx,edi
  4dd5f6:	50                   	push   eax
  4dd5f7:	e8 94 09 0c 00       	call   0x59df90
  4dd5fc:	8b c8                	mov    ecx,eax
  4dd5fe:	e8 6d af 0b 00       	call   0x598570
  4dd603:	85 c0                	test   eax,eax
  4dd605:	7e 07                	jle    0x4dd60e
  4dd607:	8b ce                	mov    ecx,esi
  4dd609:	e8 f2 db 0b 00       	call   0x59b200
  4dd60e:	8b ce                	mov    ecx,esi
  4dd610:	e8 db db 0b 00       	call   0x59b1f0
  4dd615:	84 c0                	test   al,al
  4dd617:	74 13                	je     0x4dd62c
  4dd619:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4dd61b:	6a 01                	push   0x1
  4dd61d:	51                   	push   ecx
  4dd61e:	8b cf                	mov    ecx,edi
  4dd620:	e8 6b 09 0c 00       	call   0x59df90
  4dd625:	8b c8                	mov    ecx,eax
  4dd627:	e8 54 af 0b 00       	call   0x598580
  4dd62c:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  4dd630:	5f                   	pop    edi
  4dd631:	5e                   	pop    esi
  4dd632:	5d                   	pop    ebp
  4dd633:	5b                   	pop    ebx
  4dd634:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dd63b:	83 c4 20             	add    esp,0x20
  4dd63e:	c2 04 00             	ret    0x4
  4dd641:	90                   	nop
  4dd642:	90                   	nop
  4dd643:	90                   	nop
  4dd644:	90                   	nop
  4dd645:	90                   	nop
  4dd646:	90                   	nop
  4dd647:	90                   	nop
  4dd648:	90                   	nop
  4dd649:	90                   	nop
  4dd64a:	90                   	nop
  4dd64b:	90                   	nop
  4dd64c:	90                   	nop
  4dd64d:	90                   	nop
  4dd64e:	90                   	nop
  4dd64f:	90                   	nop
  4dd650:	83 ec 18             	sub    esp,0x18
  4dd653:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4dd657:	56                   	push   esi
  4dd658:	8b f1                	mov    esi,ecx
  4dd65a:	50                   	push   eax
  4dd65b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dd65f:	51                   	push   ecx
  4dd660:	e8 fb e7 ff ff       	call   0x4dbe60
  4dd665:	8b 10                	mov    edx,DWORD PTR [eax]
  4dd667:	83 c4 08             	add    esp,0x8
  4dd66a:	89 54 24 04          	mov    DWORD PTR [esp+0x4],edx
  4dd66e:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  4dd671:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  4dd675:	8d 4c 24 04          	lea    ecx,[esp+0x4]
  4dd679:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  4dd67c:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  4dd680:	50                   	push   eax
  4dd681:	51                   	push   ecx
  4dd682:	8b ce                	mov    ecx,esi
  4dd684:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4dd688:	e8 63 8a ff ff       	call   0x4d60f0
  4dd68d:	8b 8e f4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f4]
  4dd693:	c6 86 34 02 00 00 00 	mov    BYTE PTR [esi+0x234],0x0
  4dd69a:	c6 86 3c 02 00 00 01 	mov    BYTE PTR [esi+0x23c],0x1
  4dd6a1:	6a 01                	push   0x1
  4dd6a3:	8b 11                	mov    edx,DWORD PTR [ecx]
  4dd6a5:	6a 00                	push   0x0
  4dd6a7:	68 88 13 00 00       	push   0x1388
  4dd6ac:	ff 52 10             	call   DWORD PTR [edx+0x10]
  4dd6af:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
  4dd6b5:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dd6b7:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
  4dd6ba:	5e                   	pop    esi
  4dd6bb:	83 c4 18             	add    esp,0x18
  4dd6be:	c2 08 00             	ret    0x8
  4dd6c1:	90                   	nop
  4dd6c2:	90                   	nop
  4dd6c3:	90                   	nop
  4dd6c4:	90                   	nop
  4dd6c5:	90                   	nop
  4dd6c6:	90                   	nop
  4dd6c7:	90                   	nop
  4dd6c8:	90                   	nop
  4dd6c9:	90                   	nop
  4dd6ca:	90                   	nop
  4dd6cb:	90                   	nop
  4dd6cc:	90                   	nop
  4dd6cd:	90                   	nop
  4dd6ce:	90                   	nop
  4dd6cf:	90                   	nop
  4dd6d0:	6a ff                	push   0xffffffff
  4dd6d2:	68 b0 21 63 00       	push   0x6321b0
  4dd6d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dd6dd:	50                   	push   eax
  4dd6de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dd6e5:	83 ec 38             	sub    esp,0x38
  4dd6e8:	53                   	push   ebx
  4dd6e9:	56                   	push   esi
  4dd6ea:	57                   	push   edi
  4dd6eb:	8b 74 24 54          	mov    esi,DWORD PTR [esp+0x54]
  4dd6ef:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  4dd6f6:	00 
  4dd6f7:	85 f6                	test   esi,esi
  4dd6f9:	75 63                	jne    0x4dd75e
  4dd6fb:	8a 44 24 54          	mov    al,BYTE PTR [esp+0x54]
  4dd6ff:	56                   	push   esi
  4dd700:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4dd704:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4dd708:	e8 93 69 f2 ff       	call   0x4040a0
  4dd70d:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd712:	83 c9 ff             	or     ecx,0xffffffff
  4dd715:	33 c0                	xor    eax,eax
  4dd717:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd719:	f7 d1                	not    ecx
  4dd71b:	49                   	dec    ecx
  4dd71c:	51                   	push   ecx
  4dd71d:	68 70 3f 6b 00       	push   0x6b3f70
  4dd722:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dd726:	e8 c5 69 f2 ff       	call   0x4040f0
  4dd72b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dd72f:	c6 44 24 4c 01       	mov    BYTE PTR [esp+0x4c],0x1
  4dd734:	51                   	push   ecx
  4dd735:	68 b6 00 00 00       	push   0xb6
  4dd73a:	68 38 d6 68 00       	push   0x68d638
  4dd73f:	68 2c d6 68 00       	push   0x68d62c
  4dd744:	e8 a7 30 0c 00       	call   0x5a07f0
  4dd749:	ff d0                	call   eax
  4dd74b:	83 c4 10             	add    esp,0x10
  4dd74e:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dd752:	c6 44 24 4c 00       	mov    BYTE PTR [esp+0x4c],0x0
  4dd757:	6a 01                	push   0x1
  4dd759:	e8 42 69 f2 ff       	call   0x4040a0
  4dd75e:	8d 54 24 0c          	lea    edx,[esp+0xc]
  4dd762:	8b ce                	mov    ecx,esi
  4dd764:	52                   	push   edx
  4dd765:	e8 d6 71 01 00       	call   0x4f4940
  4dd76a:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  4dd76e:	b3 02                	mov    bl,0x2
  4dd770:	85 c0                	test   eax,eax
  4dd772:	88 5c 24 4c          	mov    BYTE PTR [esp+0x4c],bl
  4dd776:	75 60                	jne    0x4dd7d8
  4dd778:	8a 44 24 54          	mov    al,BYTE PTR [esp+0x54]
  4dd77c:	6a 00                	push   0x0
  4dd77e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4dd782:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  4dd786:	e8 15 69 f2 ff       	call   0x4040a0
  4dd78b:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd790:	83 c9 ff             	or     ecx,0xffffffff
  4dd793:	33 c0                	xor    eax,eax
  4dd795:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd797:	f7 d1                	not    ecx
  4dd799:	49                   	dec    ecx
  4dd79a:	51                   	push   ecx
  4dd79b:	68 70 3f 6b 00       	push   0x6b3f70
  4dd7a0:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4dd7a4:	e8 47 69 f2 ff       	call   0x4040f0
  4dd7a9:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dd7ad:	c6 44 24 4c 03       	mov    BYTE PTR [esp+0x4c],0x3
  4dd7b2:	51                   	push   ecx
  4dd7b3:	6a 51                	push   0x51
  4dd7b5:	68 f4 9e 69 00       	push   0x699ef4
  4dd7ba:	68 ec 9e 69 00       	push   0x699eec
  4dd7bf:	e8 2c 30 0c 00       	call   0x5a07f0
  4dd7c4:	ff d0                	call   eax
  4dd7c6:	83 c4 10             	add    esp,0x10
  4dd7c9:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dd7cd:	88 5c 24 4c          	mov    BYTE PTR [esp+0x4c],bl
  4dd7d1:	6a 01                	push   0x1
  4dd7d3:	e8 c8 68 f2 ff       	call   0x4040a0
  4dd7d8:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  4dd7dc:	8b 02                	mov    eax,DWORD PTR [edx]
  4dd7de:	85 c0                	test   eax,eax
  4dd7e0:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  4dd7e4:	0f 84 17 01 00 00    	je     0x4dd901
  4dd7ea:	8b 00                	mov    eax,DWORD PTR [eax]
  4dd7ec:	85 c0                	test   eax,eax
  4dd7ee:	0f 84 0d 01 00 00    	je     0x4dd901
  4dd7f4:	6a 00                	push   0x0
  4dd7f6:	68 d0 9e 69 00       	push   0x699ed0
  4dd7fb:	68 a8 e3 68 00       	push   0x68e3a8
  4dd800:	6a 00                	push   0x0
  4dd802:	50                   	push   eax
  4dd803:	e8 ea ce 12 00       	call   0x60a6f2
  4dd808:	8b f0                	mov    esi,eax
  4dd80a:	83 c4 14             	add    esp,0x14
  4dd80d:	85 f6                	test   esi,esi
  4dd80f:	0f 85 1e 01 00 00    	jne    0x4dd933
  4dd815:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  4dd819:	85 c0                	test   eax,eax
  4dd81b:	75 5f                	jne    0x4dd87c
  4dd81d:	8a 44 24 54          	mov    al,BYTE PTR [esp+0x54]
  4dd821:	56                   	push   esi
  4dd822:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4dd826:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  4dd82a:	e8 71 68 f2 ff       	call   0x4040a0
  4dd82f:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd834:	83 c9 ff             	or     ecx,0xffffffff
  4dd837:	33 c0                	xor    eax,eax
  4dd839:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd83b:	f7 d1                	not    ecx
  4dd83d:	49                   	dec    ecx
  4dd83e:	51                   	push   ecx
  4dd83f:	68 70 3f 6b 00       	push   0x6b3f70
  4dd844:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4dd848:	e8 a3 68 f2 ff       	call   0x4040f0
  4dd84d:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dd851:	c6 44 24 4c 04       	mov    BYTE PTR [esp+0x4c],0x4
  4dd856:	51                   	push   ecx
  4dd857:	6a 5f                	push   0x5f
  4dd859:	68 f4 9e 69 00       	push   0x699ef4
  4dd85e:	68 ec 9e 69 00       	push   0x699eec
  4dd863:	e8 88 2f 0c 00       	call   0x5a07f0
  4dd868:	ff d0                	call   eax
  4dd86a:	83 c4 10             	add    esp,0x10
  4dd86d:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dd871:	88 5c 24 4c          	mov    BYTE PTR [esp+0x4c],bl
  4dd875:	6a 01                	push   0x1
  4dd877:	e8 24 68 f2 ff       	call   0x4040a0
  4dd87c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4dd880:	85 c0                	test   eax,eax
  4dd882:	75 60                	jne    0x4dd8e4
  4dd884:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  4dd888:	6a 00                	push   0x0
  4dd88a:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4dd88e:	88 54 24 38          	mov    BYTE PTR [esp+0x38],dl
  4dd892:	e8 09 68 f2 ff       	call   0x4040a0
  4dd897:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4dd89c:	83 c9 ff             	or     ecx,0xffffffff
  4dd89f:	33 c0                	xor    eax,eax
  4dd8a1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dd8a3:	f7 d1                	not    ecx
  4dd8a5:	49                   	dec    ecx
  4dd8a6:	51                   	push   ecx
  4dd8a7:	68 70 3f 6b 00       	push   0x6b3f70
  4dd8ac:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  4dd8b0:	e8 3b 68 f2 ff       	call   0x4040f0
  4dd8b5:	8d 44 24 34          	lea    eax,[esp+0x34]
  4dd8b9:	c6 44 24 4c 05       	mov    BYTE PTR [esp+0x4c],0x5
  4dd8be:	50                   	push   eax
  4dd8bf:	6a 60                	push   0x60
  4dd8c1:	68 f4 9e 69 00       	push   0x699ef4
  4dd8c6:	68 c4 9e 69 00       	push   0x699ec4
  4dd8cb:	e8 20 2f 0c 00       	call   0x5a07f0
  4dd8d0:	ff d0                	call   eax
  4dd8d2:	83 c4 10             	add    esp,0x10
  4dd8d5:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4dd8d9:	88 5c 24 4c          	mov    BYTE PTR [esp+0x4c],bl
  4dd8dd:	6a 01                	push   0x1
  4dd8df:	e8 bc 67 f2 ff       	call   0x4040a0
  4dd8e4:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4dd8e8:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  4dd8eb:	85 c0                	test   eax,eax
  4dd8ed:	74 0e                	je     0x4dd8fd
  4dd8ef:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  4dd8f3:	8b 00                	mov    eax,DWORD PTR [eax]
  4dd8f5:	85 c0                	test   eax,eax
  4dd8f7:	0f 85 f7 fe ff ff    	jne    0x4dd7f4
  4dd8fd:	8b 74 24 54          	mov    esi,DWORD PTR [esp+0x54]
  4dd901:	85 f6                	test   esi,esi
  4dd903:	c7 44 24 4c ff ff ff 	mov    DWORD PTR [esp+0x4c],0xffffffff
  4dd90a:	ff 
  4dd90b:	74 12                	je     0x4dd91f
  4dd90d:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  4dd910:	48                   	dec    eax
  4dd911:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  4dd914:	75 09                	jne    0x4dd91f
  4dd916:	6a 00                	push   0x0
  4dd918:	8b ce                	mov    ecx,esi
  4dd91a:	e8 a1 e6 0c 00       	call   0x5abfc0
  4dd91f:	5f                   	pop    edi
  4dd920:	5e                   	pop    esi
  4dd921:	33 c0                	xor    eax,eax
  4dd923:	5b                   	pop    ebx
  4dd924:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  4dd928:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dd92f:	83 c4 44             	add    esp,0x44
  4dd932:	c3                   	ret
  4dd933:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  4dd937:	c7 44 24 4c ff ff ff 	mov    DWORD PTR [esp+0x4c],0xffffffff
  4dd93e:	ff 
  4dd93f:	85                   	.byte 0x85
