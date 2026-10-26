
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004f5170 <.text+0xf4170>:
  4f5170:	6a ff                	push   0xffffffff
  4f5172:	68 38 4a 63 00       	push   0x634a38
  4f5177:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4f517d:	50                   	push   eax
  4f517e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4f5185:	81 ec 80 00 00 00    	sub    esp,0x80
  4f518b:	53                   	push   ebx
  4f518c:	55                   	push   ebp
  4f518d:	33 db                	xor    ebx,ebx
  4f518f:	56                   	push   esi
  4f5190:	57                   	push   edi
  4f5191:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  4f5195:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  4f5199:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  4f519d:	8d 44 24 20          	lea    eax,[esp+0x20]
  4f51a1:	89 9c 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],ebx
  4f51a8:	50                   	push   eax
  4f51a9:	e8 72 f7 ff ff       	call   0x4f4920
  4f51ae:	8b 28                	mov    ebp,DWORD PTR [eax]
  4f51b0:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  4f51b3:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  4f51b7:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  4f51bb:	3b eb                	cmp    ebp,ebx
  4f51bd:	75 65                	jne    0x4f5224
  4f51bf:	8a 54 24 12          	mov    dl,BYTE PTR [esp+0x12]
  4f51c3:	53                   	push   ebx
  4f51c4:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4f51c8:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  4f51cc:	e8 cf ee f0 ff       	call   0x4040a0
  4f51d1:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f51d6:	83 c9 ff             	or     ecx,0xffffffff
  4f51d9:	33 c0                	xor    eax,eax
  4f51db:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f51dd:	f7 d1                	not    ecx
  4f51df:	49                   	dec    ecx
  4f51e0:	51                   	push   ecx
  4f51e1:	68 70 3f 6b 00       	push   0x6b3f70
  4f51e6:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4f51ea:	e8 01 ef f0 ff       	call   0x4040f0
  4f51ef:	8d 44 24 30          	lea    eax,[esp+0x30]
  4f51f3:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x1
  4f51fa:	01 
  4f51fb:	50                   	push   eax
  4f51fc:	6a 51                	push   0x51
  4f51fe:	68 f4 9e 69 00       	push   0x699ef4
  4f5203:	68 ec 9e 69 00       	push   0x699eec
  4f5208:	e8 e3 b5 0a 00       	call   0x5a07f0
  4f520d:	ff d0                	call   eax
  4f520f:	83 c4 10             	add    esp,0x10
  4f5212:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4f5216:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f521d:	6a 01                	push   0x1
  4f521f:	e8 7c ee f0 ff       	call   0x4040a0
  4f5224:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4f5227:	3b c3                	cmp    eax,ebx
  4f5229:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  4f522d:	74 48                	je     0x4f5277
  4f522f:	8b 30                	mov    esi,DWORD PTR [eax]
  4f5231:	3b f3                	cmp    esi,ebx
  4f5233:	74 42                	je     0x4f5277
  4f5235:	68 ec 01 00 00       	push   0x1ec
  4f523a:	68 28 c6 69 00       	push   0x69c628
  4f523f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4f5243:	e8 a8 93 0b 00       	call   0x5ae5f0
  4f5248:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4f524c:	56                   	push   esi
  4f524d:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x2
  4f5254:	02 
  4f5255:	e8 b6 fb ff ff       	call   0x4f4e10
  4f525a:	8b 16                	mov    edx,DWORD PTR [esi]
  4f525c:	6a 01                	push   0x1
  4f525e:	8b ce                	mov    ecx,esi
  4f5260:	ff 12                	call   DWORD PTR [edx]
  4f5262:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f5266:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f526d:	e8 fe 94 0b 00       	call   0x5ae770
  4f5272:	e9 44 ff ff ff       	jmp    0x4f51bb
  4f5277:	b9 50 99 6b 00       	mov    ecx,0x6b9950
  4f527c:	e8 ef 05 07 00       	call   0x565870
  4f5281:	8b e8                	mov    ebp,eax
  4f5283:	a1 c0 c5 69 00       	mov    eax,ds:0x69c5c0
  4f5288:	83 fd ff             	cmp    ebp,0xffffffff
  4f528b:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  4f528f:	8b f0                	mov    esi,eax
  4f5291:	0f 84 e2 00 00 00    	je     0x4f5379
  4f5297:	83 f8 ff             	cmp    eax,0xffffffff
  4f529a:	0f 84 d9 00 00 00    	je     0x4f5379
  4f52a0:	3b e8                	cmp    ebp,eax
  4f52a2:	7d 65                	jge    0x4f5309
  4f52a4:	8a 44 24 12          	mov    al,BYTE PTR [esp+0x12]
  4f52a8:	53                   	push   ebx
  4f52a9:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4f52ad:	88 44 24 34          	mov    BYTE PTR [esp+0x34],al
  4f52b1:	e8 ea ed f0 ff       	call   0x4040a0
  4f52b6:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f52bb:	83 c9 ff             	or     ecx,0xffffffff
  4f52be:	33 c0                	xor    eax,eax
  4f52c0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f52c2:	f7 d1                	not    ecx
  4f52c4:	49                   	dec    ecx
  4f52c5:	51                   	push   ecx
  4f52c6:	68 70 3f 6b 00       	push   0x6b3f70
  4f52cb:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4f52cf:	e8 1c ee f0 ff       	call   0x4040f0
  4f52d4:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4f52d8:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x3
  4f52df:	03 
  4f52e0:	51                   	push   ecx
  4f52e1:	6a 7d                	push   0x7d
  4f52e3:	68 2c e2 68 00       	push   0x68e22c
  4f52e8:	68 d0 34 69 00       	push   0x6934d0
  4f52ed:	e8 fe b4 0a 00       	call   0x5a07f0
  4f52f2:	ff d0                	call   eax
  4f52f4:	83 c4 10             	add    esp,0x10
  4f52f7:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4f52fb:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f5302:	6a 01                	push   0x1
  4f5304:	e8 97 ed f0 ff       	call   0x4040a0
  4f5309:	8b c5                	mov    eax,ebp
  4f530b:	2b c6                	sub    eax,esi
  4f530d:	3b c3                	cmp    eax,ebx
  4f530f:	7d 68                	jge    0x4f5379
  4f5311:	8a 54 24 12          	mov    dl,BYTE PTR [esp+0x12]
  4f5315:	53                   	push   ebx
  4f5316:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f531a:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  4f531e:	e8 7d ed f0 ff       	call   0x4040a0
  4f5323:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f5328:	83 c9 ff             	or     ecx,0xffffffff
  4f532b:	33 c0                	xor    eax,eax
  4f532d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f532f:	f7 d1                	not    ecx
  4f5331:	49                   	dec    ecx
  4f5332:	51                   	push   ecx
  4f5333:	68 70 3f 6b 00       	push   0x6b3f70
  4f5338:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4f533c:	e8 af ed f0 ff       	call   0x4040f0
  4f5341:	8d 44 24 40          	lea    eax,[esp+0x40]
  4f5345:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x4
  4f534c:	04 
  4f534d:	50                   	push   eax
  4f534e:	68 f4 01 00 00       	push   0x1f4
  4f5353:	68 28 c6 69 00       	push   0x69c628
  4f5358:	68 78 c8 69 00       	push   0x69c878
  4f535d:	e8 8e b4 0a 00       	call   0x5a07f0
  4f5362:	ff d0                	call   eax
  4f5364:	83 c4 10             	add    esp,0x10
  4f5367:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4f536b:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f5372:	6a 01                	push   0x1
  4f5374:	e8 27 ed f0 ff       	call   0x4040a0
  4f5379:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4f537d:	89 2d c0 c5 69 00    	mov    DWORD PTR ds:0x69c5c0,ebp
  4f5383:	83 bf e8 03 00 00 ff 	cmp    DWORD PTR [edi+0x3e8],0xffffffff
  4f538a:	75 12                	jne    0x4f539e
  4f538c:	89 af e8 03 00 00    	mov    DWORD PTR [edi+0x3e8],ebp
  4f5392:	89 af e0 03 00 00    	mov    DWORD PTR [edi+0x3e0],ebp
  4f5398:	89 af e4 03 00 00    	mov    DWORD PTR [edi+0x3e4],ebp
  4f539e:	8b b7 e8 03 00 00    	mov    esi,DWORD PTR [edi+0x3e8]
  4f53a4:	83 fd ff             	cmp    ebp,0xffffffff
  4f53a7:	74 68                	je     0x4f5411
  4f53a9:	83 fe ff             	cmp    esi,0xffffffff
  4f53ac:	74 63                	je     0x4f5411
  4f53ae:	3b ee                	cmp    ebp,esi
  4f53b0:	7d 48                	jge    0x4f53fa
  4f53b2:	8d 4c 24 12          	lea    ecx,[esp+0x12]
  4f53b6:	51                   	push   ecx
  4f53b7:	68 70 3f 6b 00       	push   0x6b3f70
  4f53bc:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4f53c0:	e8 4b 44 f1 ff       	call   0x409810
  4f53c5:	8d 54 24 60          	lea    edx,[esp+0x60]
  4f53c9:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x5
  4f53d0:	05 
  4f53d1:	52                   	push   edx
  4f53d2:	6a 7d                	push   0x7d
  4f53d4:	68 2c e2 68 00       	push   0x68e22c
  4f53d9:	68 d0 34 69 00       	push   0x6934d0
  4f53de:	e8 0d b4 0a 00       	call   0x5a07f0
  4f53e3:	ff d0                	call   eax
  4f53e5:	83 c4 10             	add    esp,0x10
  4f53e8:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  4f53ec:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f53f3:	6a 01                	push   0x1
  4f53f5:	e8 a6 ec f0 ff       	call   0x4040a0
  4f53fa:	8b c5                	mov    eax,ebp
  4f53fc:	2b c6                	sub    eax,esi
  4f53fe:	3d f4 01 00 00       	cmp    eax,0x1f4
  4f5403:	7e 0c                	jle    0x4f5411
  4f5405:	81 c5 0c fe ff ff    	add    ebp,0xfffffe0c
  4f540b:	89 af e8 03 00 00    	mov    DWORD PTR [edi+0x3e8],ebp
  4f5411:	8b af e8 03 00 00    	mov    ebp,DWORD PTR [edi+0x3e8]
  4f5417:	89 9f ec 03 00 00    	mov    DWORD PTR [edi+0x3ec],ebx
  4f541d:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  4f5421:	83 f8 ff             	cmp    eax,0xffffffff
  4f5424:	0f 84 d7 01 00 00    	je     0x4f5601
  4f542a:	83 fd ff             	cmp    ebp,0xffffffff
  4f542d:	0f 84 ce 01 00 00    	je     0x4f5601
  4f5433:	3b c5                	cmp    eax,ebp
  4f5435:	7d 6d                	jge    0x4f54a4
  4f5437:	8a 44 24 12          	mov    al,BYTE PTR [esp+0x12]
  4f543b:	53                   	push   ebx
  4f543c:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f5440:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  4f5444:	e8 57 ec f0 ff       	call   0x4040a0
  4f5449:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f544e:	83 c9 ff             	or     ecx,0xffffffff
  4f5451:	33 c0                	xor    eax,eax
  4f5453:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f5455:	f7 d1                	not    ecx
  4f5457:	49                   	dec    ecx
  4f5458:	51                   	push   ecx
  4f5459:	68 70 3f 6b 00       	push   0x6b3f70
  4f545e:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4f5462:	e8 89 ec f0 ff       	call   0x4040f0
  4f5467:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4f546b:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x6
  4f5472:	06 
  4f5473:	51                   	push   ecx
  4f5474:	6a 7d                	push   0x7d
  4f5476:	68 2c e2 68 00       	push   0x68e22c
  4f547b:	68 d0 34 69 00       	push   0x6934d0
  4f5480:	e8 6b b3 0a 00       	call   0x5a07f0
  4f5485:	ff d0                	call   eax
  4f5487:	83 c4 10             	add    esp,0x10
  4f548a:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4f548e:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f5495:	6a 01                	push   0x1
  4f5497:	e8 04 ec f0 ff       	call   0x4040a0
  4f549c:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4f54a0:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  4f54a4:	2b c5                	sub    eax,ebp
  4f54a6:	83 f8 7d             	cmp    eax,0x7d
  4f54a9:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  4f54ad:	7e 0c                	jle    0x4f54bb
  4f54af:	c7 44 24 14 7d 00 00 	mov    DWORD PTR [esp+0x14],0x7d
  4f54b6:	00 
  4f54b7:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4f54bb:	8d 54 24 30          	lea    edx,[esp+0x30]
  4f54bf:	03 e8                	add    ebp,eax
  4f54c1:	52                   	push   edx
  4f54c2:	8b cf                	mov    ecx,edi
  4f54c4:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  4f54c8:	e8 33 f4 ff ff       	call   0x4f4900
  4f54cd:	8b 30                	mov    esi,DWORD PTR [eax]
  4f54cf:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f54d2:	3b f3                	cmp    esi,ebx
  4f54d4:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  4f54d8:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  4f54dc:	75 69                	jne    0x4f5547
  4f54de:	8a 4c 24 12          	mov    cl,BYTE PTR [esp+0x12]
  4f54e2:	53                   	push   ebx
  4f54e3:	88 4c 24 54          	mov    BYTE PTR [esp+0x54],cl
  4f54e7:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4f54eb:	e8 b0 eb f0 ff       	call   0x4040a0
  4f54f0:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f54f5:	83 c9 ff             	or     ecx,0xffffffff
  4f54f8:	33 c0                	xor    eax,eax
  4f54fa:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f54fc:	f7 d1                	not    ecx
  4f54fe:	49                   	dec    ecx
  4f54ff:	51                   	push   ecx
  4f5500:	68 70 3f 6b 00       	push   0x6b3f70
  4f5505:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4f5509:	e8 e2 eb f0 ff       	call   0x4040f0
  4f550e:	8d 54 24 50          	lea    edx,[esp+0x50]
  4f5512:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x7
  4f5519:	07 
  4f551a:	52                   	push   edx
  4f551b:	6a 51                	push   0x51
  4f551d:	68 f4 9e 69 00       	push   0x699ef4
  4f5522:	68 ec 9e 69 00       	push   0x699eec
  4f5527:	e8 c4 b2 0a 00       	call   0x5a07f0
  4f552c:	ff d0                	call   eax
  4f552e:	83 c4 10             	add    esp,0x10
  4f5531:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4f5535:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f553c:	6a 01                	push   0x1
  4f553e:	e8 5d eb f0 ff       	call   0x4040a0
  4f5543:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4f5547:	8b 06                	mov    eax,DWORD PTR [esi]
  4f5549:	3b c3                	cmp    eax,ebx
  4f554b:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  4f554f:	0f 84 b0 01 00 00    	je     0x4f5705
  4f5555:	8b 30                	mov    esi,DWORD PTR [eax]
  4f5557:	3b f3                	cmp    esi,ebx
  4f5559:	0f 84 a6 01 00 00    	je     0x4f5705
  4f555f:	8b 86 c4 00 00 00    	mov    eax,DWORD PTR [esi+0xc4]
  4f5565:	83 cf ff             	or     edi,0xffffffff
  4f5568:	3b c7                	cmp    eax,edi
  4f556a:	0f 84 b2 00 00 00    	je     0x4f5622
  4f5570:	39 be cc 00 00 00    	cmp    DWORD PTR [esi+0xcc],edi
  4f5576:	0f 84 a6 00 00 00    	je     0x4f5622
  4f557c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4f5580:	8b ae c8 00 00 00    	mov    ebp,DWORD PTR [esi+0xc8]
  4f5586:	83 f8 ff             	cmp    eax,0xffffffff
  4f5589:	74 7f                	je     0x4f560a
  4f558b:	83 fd ff             	cmp    ebp,0xffffffff
  4f558e:	74 7a                	je     0x4f560a
  4f5590:	3b c5                	cmp    eax,ebp
  4f5592:	7d 69                	jge    0x4f55fd
  4f5594:	8a 44 24 12          	mov    al,BYTE PTR [esp+0x12]
  4f5598:	53                   	push   ebx
  4f5599:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  4f559d:	88 44 24 64          	mov    BYTE PTR [esp+0x64],al
  4f55a1:	e8 fa ea f0 ff       	call   0x4040a0
  4f55a6:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f55ab:	83 c9 ff             	or     ecx,0xffffffff
  4f55ae:	33 c0                	xor    eax,eax
  4f55b0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f55b2:	f7 d1                	not    ecx
  4f55b4:	49                   	dec    ecx
  4f55b5:	51                   	push   ecx
  4f55b6:	68 70 3f 6b 00       	push   0x6b3f70
  4f55bb:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4f55bf:	e8 2c eb f0 ff       	call   0x4040f0
  4f55c4:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  4f55c8:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x8
  4f55cf:	08 
  4f55d0:	51                   	push   ecx
  4f55d1:	6a 7d                	push   0x7d
  4f55d3:	68 2c e2 68 00       	push   0x68e22c
  4f55d8:	68 d0 34 69 00       	push   0x6934d0
  4f55dd:	e8 0e b2 0a 00       	call   0x5a07f0
  4f55e2:	ff d0                	call   eax
  4f55e4:	83 c4 10             	add    esp,0x10
  4f55e7:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  4f55eb:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f55f2:	6a 01                	push   0x1
  4f55f4:	e8 a7 ea f0 ff       	call   0x4040a0
  4f55f9:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4f55fd:	2b c5                	sub    eax,ebp
  4f55ff:	eb 0b                	jmp    0x4f560c
  4f5601:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  4f5605:	e9 ad fe ff ff       	jmp    0x4f54b7
  4f560a:	33 c0                	xor    eax,eax
  4f560c:	8b 96 cc 00 00 00    	mov    edx,DWORD PTR [esi+0xcc]
  4f5612:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
  4f5616:	3b c2                	cmp    eax,edx
  4f5618:	0f 9f c0             	setg   al
  4f561b:	3a c3                	cmp    al,bl
  4f561d:	74 24                	je     0x4f5643
  4f561f:	83 cf ff             	or     edi,0xffffffff
  4f5622:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  4f5626:	8b ce                	mov    ecx,esi
  4f5628:	52                   	push   edx
  4f5629:	55                   	push   ebp
  4f562a:	e8 11 d8 00 00       	call   0x502e40
  4f562f:	39 be c4 00 00 00    	cmp    DWORD PTR [esi+0xc4],edi
  4f5635:	75 06                	jne    0x4f563d
  4f5637:	89 ae c4 00 00 00    	mov    DWORD PTR [esi+0xc4],ebp
  4f563d:	89 ae c8 00 00 00    	mov    DWORD PTR [esi+0xc8],ebp
  4f5643:	39 5c 24 28          	cmp    DWORD PTR [esp+0x28],ebx
  4f5647:	75 48                	jne    0x4f5691
  4f5649:	8d 44 24 12          	lea    eax,[esp+0x12]
  4f564d:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4f5651:	50                   	push   eax
  4f5652:	68 70 3f 6b 00       	push   0x6b3f70
  4f5657:	e8 b4 41 f1 ff       	call   0x409810
  4f565c:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4f5660:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x9
  4f5667:	09 
  4f5668:	51                   	push   ecx
  4f5669:	6a 5f                	push   0x5f
  4f566b:	68 f4 9e 69 00       	push   0x699ef4
  4f5670:	68 ec 9e 69 00       	push   0x699eec
  4f5675:	e8 76 b1 0a 00       	call   0x5a07f0
  4f567a:	ff d0                	call   eax
  4f567c:	83 c4 10             	add    esp,0x10
  4f567f:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4f5683:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f568a:	6a 01                	push   0x1
  4f568c:	e8 0f ea f0 ff       	call   0x4040a0
  4f5691:	39 5c 24 2c          	cmp    DWORD PTR [esp+0x2c],ebx
  4f5695:	75 51                	jne    0x4f56e8
  4f5697:	8d 54 24 13          	lea    edx,[esp+0x13]
  4f569b:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4f56a2:	52                   	push   edx
  4f56a3:	68 70 3f 6b 00       	push   0x6b3f70
  4f56a8:	e8 63 41 f1 ff       	call   0x409810
  4f56ad:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
  4f56b4:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0xa
  4f56bb:	0a 
  4f56bc:	50                   	push   eax
  4f56bd:	6a 60                	push   0x60
  4f56bf:	68 f4 9e 69 00       	push   0x699ef4
  4f56c4:	68 c4 9e 69 00       	push   0x699ec4
  4f56c9:	e8 22 b1 0a 00       	call   0x5a07f0
  4f56ce:	ff d0                	call   eax
  4f56d0:	83 c4 10             	add    esp,0x10
  4f56d3:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4f56da:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  4f56e1:	6a 01                	push   0x1
  4f56e3:	e8 b8 e9 f0 ff       	call   0x4040a0
  4f56e8:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  4f56ec:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  4f56ef:	3b c3                	cmp    eax,ebx
  4f56f1:	74 0e                	je     0x4f5701
  4f56f3:	8b 30                	mov    esi,DWORD PTR [eax]
  4f56f5:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  4f56f9:	3b f3                	cmp    esi,ebx
  4f56fb:	0f 85 5e fe ff ff    	jne    0x4f555f
  4f5701:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4f5705:	8b 8f ec 03 00 00    	mov    ecx,DWORD PTR [edi+0x3ec]
  4f570b:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  4f570f:	41                   	inc    ecx
  4f5710:	3b e8                	cmp    ebp,eax
  4f5712:	89 8f ec 03 00 00    	mov    DWORD PTR [edi+0x3ec],ecx
  4f5718:	0f 8c ff fc ff ff    	jl     0x4f541d
  4f571e:	8b 8c 24 90 00 00 00 	mov    ecx,DWORD PTR [esp+0x90]
  4f5725:	89 87 e8 03 00 00    	mov    DWORD PTR [edi+0x3e8],eax
  4f572b:	89 87 e4 03 00 00    	mov    DWORD PTR [edi+0x3e4],eax
  4f5731:	5f                   	pop    edi
  4f5732:	5e                   	pop    esi
  4f5733:	5d                   	pop    ebp
  4f5734:	5b                   	pop    ebx
  4f5735:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4f573c:	81 c4 8c 00 00 00    	add    esp,0x8c
  4f5742:	c3                   	ret
