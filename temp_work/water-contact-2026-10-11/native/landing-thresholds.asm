
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004dc040 <.text+0xdb040>:
  4dc040:	c9                   	leave
  4dc041:	ff 33                	push   DWORD PTR [ebx]
  4dc043:	c0 f2 ae             	shl    dl,0xae
  4dc046:	f7 d1                	not    ecx
  4dc048:	49                   	dec    ecx
  4dc049:	51                   	push   ecx
  4dc04a:	68 70 3f 6b 00       	push   0x6b3f70
  4dc04f:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4dc053:	e8 98 80 f2 ff       	call   0x4040f0
  4dc058:	8d 54 24 0c          	lea    edx,[esp+0xc]
  4dc05c:	c6 44 24 24 03       	mov    BYTE PTR [esp+0x24],0x3
  4dc061:	52                   	push   edx
  4dc062:	68 b6 00 00 00       	push   0xb6
  4dc067:	68 38 d6 68 00       	push   0x68d638
  4dc06c:	68 2c d6 68 00       	push   0x68d62c
  4dc071:	e8 7a 47 0c 00       	call   0x5a07f0
  4dc076:	ff d0                	call   eax
  4dc078:	83 c4 10             	add    esp,0x10
  4dc07b:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  4dc07f:	c6 44 24 24 00       	mov    BYTE PTR [esp+0x24],0x0
  4dc084:	6a 01                	push   0x1
  4dc086:	e8 15 80 f2 ff       	call   0x4040a0
  4dc08b:	8b 8d 0c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x10c]
  4dc091:	e8 1a a9 07 00       	call   0x5569b0
  4dc096:	85 f6                	test   esi,esi
  4dc098:	c7 44 24 24 ff ff ff 	mov    DWORD PTR [esp+0x24],0xffffffff
  4dc09f:	ff 
  4dc0a0:	74 12                	je     0x4dc0b4
  4dc0a2:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  4dc0a5:	48                   	dec    eax
  4dc0a6:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  4dc0a9:	75 09                	jne    0x4dc0b4
  4dc0ab:	6a 00                	push   0x0
  4dc0ad:	8b ce                	mov    ecx,esi
  4dc0af:	e8 0c ff 0c 00       	call   0x5abfc0
  4dc0b4:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  4dc0b8:	5f                   	pop    edi
  4dc0b9:	5e                   	pop    esi
  4dc0ba:	5d                   	pop    ebp
  4dc0bb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4dc0c2:	83 c4 1c             	add    esp,0x1c
  4dc0c5:	c2 04 00             	ret    0x4
  4dc0c8:	90                   	nop
  4dc0c9:	90                   	nop
  4dc0ca:	90                   	nop
  4dc0cb:	90                   	nop
  4dc0cc:	90                   	nop
  4dc0cd:	90                   	nop
  4dc0ce:	90                   	nop
  4dc0cf:	90                   	nop
  4dc0d0:	8d 81 d0 01 00 00    	lea    eax,[ecx+0x1d0]
  4dc0d6:	c3                   	ret
  4dc0d7:	90                   	nop
  4dc0d8:	90                   	nop
  4dc0d9:	90                   	nop
  4dc0da:	90                   	nop
  4dc0db:	90                   	nop
  4dc0dc:	90                   	nop
  4dc0dd:	90                   	nop
  4dc0de:	90                   	nop
  4dc0df:	90                   	nop
  4dc0e0:	6a ff                	push   0xffffffff
  4dc0e2:	68 8d 20 63 00       	push   0x63208d
  4dc0e7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4dc0ed:	50                   	push   eax
  4dc0ee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4dc0f5:	81 ec 0c 02 00 00    	sub    esp,0x20c
  4dc0fb:	53                   	push   ebx
  4dc0fc:	56                   	push   esi
  4dc0fd:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4dc103:	8b d9                	mov    ebx,ecx
  4dc105:	85 f6                	test   esi,esi
  4dc107:	57                   	push   edi
  4dc108:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  4dc10c:	75 07                	jne    0x4dc115
  4dc10e:	e8 6d f1 07 00       	call   0x55b280
  4dc113:	8b f0                	mov    esi,eax
  4dc115:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4dc11b:	85 c0                	test   eax,eax
  4dc11d:	75 52                	jne    0x4dc171
  4dc11f:	8d 44 24 0f          	lea    eax,[esp+0xf]
  4dc123:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc127:	50                   	push   eax
  4dc128:	68 70 3f 6b 00       	push   0x6b3f70
  4dc12d:	e8 de d6 f2 ff       	call   0x409810
  4dc132:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc136:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0x0
  4dc13d:	00 00 00 00 
  4dc141:	51                   	push   ecx
  4dc142:	68 8f 01 00 00       	push   0x18f
  4dc147:	68 58 eb 68 00       	push   0x68eb58
  4dc14c:	68 ec f8 68 00       	push   0x68f8ec
  4dc151:	e8 9a 46 0c 00       	call   0x5a07f0
  4dc156:	ff d0                	call   eax
  4dc158:	83 c4 10             	add    esp,0x10
  4dc15b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dc15f:	c7 84 24 20 02 00 00 	mov    DWORD PTR [esp+0x220],0xffffffff
  4dc166:	ff ff ff ff 
  4dc16a:	6a 01                	push   0x1
  4dc16c:	e8 2f 7f f2 ff       	call   0x4040a0
  4dc171:	8b 84 24 2c 02 00 00 	mov    eax,DWORD PTR [esp+0x22c]
  4dc178:	8b 8c 24 28 02 00 00 	mov    ecx,DWORD PTR [esp+0x228]
  4dc17f:	8b b6 fc 00 00 00    	mov    esi,DWORD PTR [esi+0xfc]
  4dc185:	3b c1                	cmp    eax,ecx
  4dc187:	55                   	push   ebp
  4dc188:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  4dc18c:	0f 84 85 07 00 00    	je     0x4dc917
  4dc192:	83 f8 04             	cmp    eax,0x4
  4dc195:	0f 87 e5 06 00 00    	ja     0x4dc880
  4dc19b:	ff 24 85 60 ca 4d 00 	jmp    DWORD PTR [eax*4+0x4dca60]
  4dc1a2:	a0 74 92 6b 00       	mov    al,ds:0x6b9274
  4dc1a7:	b3 02                	mov    bl,0x2
  4dc1a9:	a8 01                	test   al,0x1
  4dc1ab:	0f 85 5d 01 00 00    	jne    0x4dc30e
  4dc1b1:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4dc1b5:	0c 01                	or     al,0x1
  4dc1b7:	6a 00                	push   0x0
  4dc1b9:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  4dc1bd:	a2 74 92 6b 00       	mov    ds:0x6b9274,al
  4dc1c2:	88 54 24 7c          	mov    BYTE PTR [esp+0x7c],dl
  4dc1c6:	e8 d5 7e f2 ff       	call   0x4040a0
  4dc1cb:	bf e0 02 69 00       	mov    edi,0x6902e0
  4dc1d0:	83 c9 ff             	or     ecx,0xffffffff
  4dc1d3:	33 c0                	xor    eax,eax
  4dc1d5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc1d7:	f7 d1                	not    ecx
  4dc1d9:	49                   	dec    ecx
  4dc1da:	51                   	push   ecx
  4dc1db:	68 e0 02 69 00       	push   0x6902e0
  4dc1e0:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4dc1e7:	e8 04 7f f2 ff       	call   0x4040f0
  4dc1ec:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4dc1f0:	6a 00                	push   0x0
  4dc1f2:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  4dc1f9:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0x1
  4dc200:	01 00 00 00 
  4dc204:	88 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],al
  4dc20b:	e8 90 7e f2 ff       	call   0x4040a0
  4dc210:	bf a4 9e 69 00       	mov    edi,0x699ea4
  4dc215:	83 c9 ff             	or     ecx,0xffffffff
  4dc218:	33 c0                	xor    eax,eax
  4dc21a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc21c:	f7 d1                	not    ecx
  4dc21e:	49                   	dec    ecx
  4dc21f:	51                   	push   ecx
  4dc220:	68 a4 9e 69 00       	push   0x699ea4
  4dc225:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  4dc22c:	e8 bf 7e f2 ff       	call   0x4040f0
  4dc231:	8d 8c 24 a8 00 00 00 	lea    ecx,[esp+0xa8]
  4dc238:	88 9c 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],bl
  4dc23f:	51                   	push   ecx
  4dc240:	e8 4b ad f5 ff       	call   0x436f90
  4dc245:	83 c4 04             	add    esp,0x4
  4dc248:	6a 00                	push   0x0
  4dc24a:	50                   	push   eax
  4dc24b:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  4dc252:	68 cd cc 4c 3d       	push   0x3d4ccccd
  4dc257:	8d 84 24 a4 00 00 00 	lea    eax,[esp+0xa4]
  4dc25e:	52                   	push   edx
  4dc25f:	50                   	push   eax
  4dc260:	8d 8c 24 ec 00 00 00 	lea    ecx,[esp+0xec]
  4dc267:	c6 84 24 38 02 00 00 	mov    BYTE PTR [esp+0x238],0x3
  4dc26e:	03 
  4dc26f:	e8 3c 06 0d 00       	call   0x5ac8b0
  4dc274:	8b f0                	mov    esi,eax
  4dc276:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc279:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dc27f:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x4
  4dc286:	04 
  4dc287:	df e0                	fnstsw ax
  4dc289:	f6 c4 40             	test   ah,0x40
  4dc28c:	74 16                	je     0x4dc2a4
  4dc28e:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4dc292:	8d 56 14             	lea    edx,[esi+0x14]
  4dc295:	51                   	push   ecx
  4dc296:	52                   	push   edx
  4dc297:	e8 f4 10 0d 00       	call   0x5ad390
  4dc29c:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc29f:	83 c4 08             	add    esp,0x8
  4dc2a2:	eb 03                	jmp    0x4dc2a7
  4dc2a4:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc2a7:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc2ab:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  4dc2b2:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x3
  4dc2b9:	03 
  4dc2ba:	d8 8e 94 01 00 00    	fmul   DWORD PTR [esi+0x194]
  4dc2c0:	d9 1d 70 92 6b 00    	fstp   DWORD PTR ds:0x6b9270
  4dc2c6:	e8 d5 09 0d 00       	call   0x5acca0
  4dc2cb:	6a 01                	push   0x1
  4dc2cd:	8d 8c 24 ac 00 00 00 	lea    ecx,[esp+0xac]
  4dc2d4:	88 9c 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],bl
  4dc2db:	e8 c0 7d f2 ff       	call   0x4040a0
  4dc2e0:	6a 01                	push   0x1
  4dc2e2:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  4dc2e9:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x1
  4dc2f0:	01 
  4dc2f1:	e8 aa 7d f2 ff       	call   0x4040a0
  4dc2f6:	6a 01                	push   0x1
  4dc2f8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  4dc2fc:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0xffffffff
  4dc303:	ff ff ff ff 
  4dc307:	e8 94 7d f2 ff       	call   0x4040a0
  4dc30c:	eb 04                	jmp    0x4dc312
  4dc30e:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc312:	a0 74 92 6b 00       	mov    al,ds:0x6b9274
  4dc317:	84 c3                	test   bl,al
  4dc319:	0f 85 5b 01 00 00    	jne    0x4dc47a
  4dc31f:	0a c3                	or     al,bl
  4dc321:	6a 00                	push   0x0
  4dc323:	a2 74 92 6b 00       	mov    ds:0x6b9274,al
  4dc328:	8a 44 24 17          	mov    al,BYTE PTR [esp+0x17]
  4dc32c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dc330:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  4dc334:	e8 67 7d f2 ff       	call   0x4040a0
  4dc339:	bf e0 02 69 00       	mov    edi,0x6902e0
  4dc33e:	83 c9 ff             	or     ecx,0xffffffff
  4dc341:	33 c0                	xor    eax,eax
  4dc343:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc345:	f7 d1                	not    ecx
  4dc347:	49                   	dec    ecx
  4dc348:	51                   	push   ecx
  4dc349:	68 e0 02 69 00       	push   0x6902e0
  4dc34e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4dc352:	e8 99 7d f2 ff       	call   0x4040f0
  4dc357:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4dc35b:	6a 00                	push   0x0
  4dc35d:	88 8c 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],cl
  4dc364:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  4dc36b:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0x5
  4dc372:	05 00 00 00 
  4dc376:	e8 25 7d f2 ff       	call   0x4040a0
  4dc37b:	bf 84 9e 69 00       	mov    edi,0x699e84
  4dc380:	83 c9 ff             	or     ecx,0xffffffff
  4dc383:	33 c0                	xor    eax,eax
  4dc385:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4dc387:	f7 d1                	not    ecx
  4dc389:	49                   	dec    ecx
  4dc38a:	51                   	push   ecx
  4dc38b:	68 84 9e 69 00       	push   0x699e84
  4dc390:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  4dc397:	e8 54 7d f2 ff       	call   0x4040f0
  4dc39c:	8d 94 24 b8 00 00 00 	lea    edx,[esp+0xb8]
  4dc3a3:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x6
  4dc3aa:	06 
  4dc3ab:	52                   	push   edx
  4dc3ac:	e8 df ab f5 ff       	call   0x436f90
  4dc3b1:	83 c4 04             	add    esp,0x4
  4dc3b4:	6a 00                	push   0x0
  4dc3b6:	50                   	push   eax
  4dc3b7:	8d 44 24 28          	lea    eax,[esp+0x28]
  4dc3bb:	68 00 00 00 40       	push   0x40000000
  4dc3c0:	8d 8c 24 94 00 00 00 	lea    ecx,[esp+0x94]
  4dc3c7:	50                   	push   eax
  4dc3c8:	b3 07                	mov    bl,0x7
  4dc3ca:	51                   	push   ecx
  4dc3cb:	8d 8c 24 58 01 00 00 	lea    ecx,[esp+0x158]
  4dc3d2:	88 9c 24 38 02 00 00 	mov    BYTE PTR [esp+0x238],bl
  4dc3d9:	e8 d2 04 0d 00       	call   0x5ac8b0
  4dc3de:	8b f0                	mov    esi,eax
  4dc3e0:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc3e3:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dc3e9:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x8
  4dc3f0:	08 
  4dc3f1:	df e0                	fnstsw ax
  4dc3f3:	f6 c4 40             	test   ah,0x40
  4dc3f6:	74 16                	je     0x4dc40e
  4dc3f8:	8d 54 24 13          	lea    edx,[esp+0x13]
  4dc3fc:	8d 46 14             	lea    eax,[esi+0x14]
  4dc3ff:	52                   	push   edx
  4dc400:	50                   	push   eax
  4dc401:	e8 8a 0f 0d 00       	call   0x5ad390
  4dc406:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc409:	83 c4 08             	add    esp,0x8
  4dc40c:	eb 03                	jmp    0x4dc411
  4dc40e:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc411:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4dc415:	88 9c 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],bl
  4dc41c:	d8 89 94 01 00 00    	fmul   DWORD PTR [ecx+0x194]
  4dc422:	8d 8c 24 44 01 00 00 	lea    ecx,[esp+0x144]
  4dc429:	d9 1d 6c 92 6b 00    	fstp   DWORD PTR ds:0x6b926c
  4dc42f:	e8 6c 08 0d 00       	call   0x5acca0
  4dc434:	6a 01                	push   0x1
  4dc436:	8d 8c 24 bc 00 00 00 	lea    ecx,[esp+0xbc]
  4dc43d:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x6
  4dc444:	06 
  4dc445:	e8 56 7c f2 ff       	call   0x4040a0
  4dc44a:	6a 01                	push   0x1
  4dc44c:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  4dc453:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x5
  4dc45a:	05 
  4dc45b:	e8 40 7c f2 ff       	call   0x4040a0
  4dc460:	6a 01                	push   0x1
  4dc462:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dc466:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0xffffffff
  4dc46d:	ff ff ff ff 
  4dc471:	e8 2a 7c f2 ff       	call   0x4040a0
  4dc476:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc47a:	a0 74 92 6b 00       	mov    al,ds:0x6b9274
  4dc47f:	a8                   	.byte 0xa8
