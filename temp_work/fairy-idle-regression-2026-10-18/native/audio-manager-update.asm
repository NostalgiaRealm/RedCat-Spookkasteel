
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0054d000 <.text+0x14c000>:
  54d000:	e8 fb 38 00 00       	call   0x550900
  54d005:	8b ce                	mov    ecx,esi
  54d007:	c7 44 24 24 ff ff ff 	mov    DWORD PTR [esp+0x24],0xffffffff
  54d00e:	ff 
  54d00f:	e8 bc e4 05 00       	call   0x5ab4d0
  54d014:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  54d018:	5f                   	pop    edi
  54d019:	5e                   	pop    esi
  54d01a:	5d                   	pop    ebp
  54d01b:	5b                   	pop    ebx
  54d01c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54d023:	83 c4 18             	add    esp,0x18
  54d026:	c3                   	ret
  54d027:	90                   	nop
  54d028:	90                   	nop
  54d029:	90                   	nop
  54d02a:	90                   	nop
  54d02b:	90                   	nop
  54d02c:	90                   	nop
  54d02d:	90                   	nop
  54d02e:	90                   	nop
  54d02f:	90                   	nop
  54d030:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  54d034:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54d03a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54d040:	6a ff                	push   0xffffffff
  54d042:	68 98 d7 63 00       	push   0x63d798
  54d047:	50                   	push   eax
  54d048:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54d04f:	83 ec 14             	sub    esp,0x14
  54d052:	df e0                	fnstsw ax
  54d054:	f6 c4 41             	test   ah,0x41
  54d057:	74 0a                	je     0x54d063
  54d059:	c7 44 24 00 00 00 00 	mov    DWORD PTR [esp+0x0],0x0
  54d060:	00 
  54d061:	eb 24                	jmp    0x54d087
  54d063:	d9 ed                	fldln2
  54d065:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  54d069:	d9 f1                	fyl2x
  54d06b:	d9 ed                	fldln2
  54d06d:	dd 05 08 d3 64 00    	fld    QWORD PTR ds:0x64d308
  54d073:	d9 f1                	fyl2x
  54d075:	de f9                	fdivp  st(1),st
  54d077:	d8 0d c8 d0 64 00    	fmul   DWORD PTR ds:0x64d0c8
  54d07d:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  54d083:	d9 5c 24 00          	fstp   DWORD PTR [esp+0x0]
  54d087:	56                   	push   esi
  54d088:	e8 23 9f fc ff       	call   0x516fb0
  54d08d:	8b f0                	mov    esi,eax
  54d08f:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54d092:	3d 00 00 00 80       	cmp    eax,0x80000000
  54d097:	75 18                	jne    0x54d0b1
  54d099:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54d09c:	85 c0                	test   eax,eax
  54d09e:	75 05                	jne    0x54d0a5
  54d0a0:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54d0a5:	50                   	push   eax
  54d0a6:	e8 65 de 0b 00       	call   0x60af10
  54d0ab:	83 c4 04             	add    esp,0x4
  54d0ae:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54d0b1:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  54d0b5:	85 c0                	test   eax,eax
  54d0b7:	5e                   	pop    esi
  54d0b8:	74 6a                	je     0x54d124
  54d0ba:	83 ec 08             	sub    esp,0x8
  54d0bd:	8d 44 24 0c          	lea    eax,[esp+0xc]
  54d0c1:	dd 1c 24             	fstp   QWORD PTR [esp]
  54d0c4:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  54d0c8:	83 ec 08             	sub    esp,0x8
  54d0cb:	dd 1c 24             	fstp   QWORD PTR [esp]
  54d0ce:	68 60 18 6a 00       	push   0x6a1860
  54d0d3:	50                   	push   eax
  54d0d4:	e8 b7 12 06 00       	call   0x5ae390
  54d0d9:	50                   	push   eax
  54d0da:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  54d0e1:	00 
  54d0e2:	e8 19 2e 06 00       	call   0x5aff00
  54d0e7:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  54d0eb:	83 c4 1c             	add    esp,0x1c
  54d0ee:	85 c0                	test   eax,eax
  54d0f0:	74 2e                	je     0x54d120
  54d0f2:	8d 48 ff             	lea    ecx,[eax-0x1]
  54d0f5:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  54d0f8:	84 c0                	test   al,al
  54d0fa:	74 1b                	je     0x54d117
  54d0fc:	3c ff                	cmp    al,0xff
  54d0fe:	74 17                	je     0x54d117
  54d100:	d9 44 24 00          	fld    DWORD PTR [esp+0x0]
  54d104:	fe c8                	dec    al
  54d106:	88 01                	mov    BYTE PTR [ecx],al
  54d108:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54d10c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54d113:	83 c4 20             	add    esp,0x20
  54d116:	c3                   	ret
  54d117:	51                   	push   ecx
  54d118:	e8 d3 14 0b 00       	call   0x5fe5f0
  54d11d:	83 c4 04             	add    esp,0x4
  54d120:	d9 44 24 00          	fld    DWORD PTR [esp+0x0]
  54d124:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54d128:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54d12f:	83 c4 20             	add    esp,0x20
  54d132:	c3                   	ret
  54d133:	90                   	nop
  54d134:	90                   	nop
  54d135:	90                   	nop
  54d136:	90                   	nop
  54d137:	90                   	nop
  54d138:	90                   	nop
  54d139:	90                   	nop
  54d13a:	90                   	nop
  54d13b:	90                   	nop
  54d13c:	90                   	nop
  54d13d:	90                   	nop
  54d13e:	90                   	nop
  54d13f:	90                   	nop
  54d140:	6a ff                	push   0xffffffff
  54d142:	68 b8 d7 63 00       	push   0x63d7b8
  54d147:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54d14d:	50                   	push   eax
  54d14e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54d155:	83 ec 14             	sub    esp,0x14
  54d158:	dd 05 08 d3 64 00    	fld    QWORD PTR ds:0x64d308
  54d15e:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  54d162:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  54d168:	56                   	push   esi
  54d169:	d8 0d 5c ad 64 00    	fmul   DWORD PTR ds:0x64ad5c
  54d16f:	e8 ec e5 0b 00       	call   0x60b760
  54d174:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  54d178:	e8 33 9e fc ff       	call   0x516fb0
  54d17d:	8b f0                	mov    esi,eax
  54d17f:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54d182:	3d 00 00 00 80       	cmp    eax,0x80000000
  54d187:	75 18                	jne    0x54d1a1
  54d189:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54d18c:	85 c0                	test   eax,eax
  54d18e:	75 05                	jne    0x54d195
  54d190:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54d195:	50                   	push   eax
  54d196:	e8 75 dd 0b 00       	call   0x60af10
  54d19b:	83 c4 04             	add    esp,0x4
  54d19e:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54d1a1:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  54d1a5:	85 c0                	test   eax,eax
  54d1a7:	5e                   	pop    esi
  54d1a8:	74 6a                	je     0x54d214
  54d1aa:	83 ec 08             	sub    esp,0x8
  54d1ad:	8d 44 24 0c          	lea    eax,[esp+0xc]
  54d1b1:	dd 1c 24             	fstp   QWORD PTR [esp]
  54d1b4:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  54d1b8:	83 ec 08             	sub    esp,0x8
  54d1bb:	dd 1c 24             	fstp   QWORD PTR [esp]
  54d1be:	68 88 18 6a 00       	push   0x6a1888
  54d1c3:	50                   	push   eax
  54d1c4:	e8 c7 11 06 00       	call   0x5ae390
  54d1c9:	50                   	push   eax
  54d1ca:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  54d1d1:	00 
  54d1d2:	e8 29 2d 06 00       	call   0x5aff00
  54d1d7:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  54d1db:	83 c4 1c             	add    esp,0x1c
  54d1de:	85 c0                	test   eax,eax
  54d1e0:	74 2e                	je     0x54d210
  54d1e2:	8d 48 ff             	lea    ecx,[eax-0x1]
  54d1e5:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  54d1e8:	84 c0                	test   al,al
  54d1ea:	74 1b                	je     0x54d207
  54d1ec:	3c ff                	cmp    al,0xff
  54d1ee:	74 17                	je     0x54d207
  54d1f0:	d9 44 24 00          	fld    DWORD PTR [esp+0x0]
  54d1f4:	fe c8                	dec    al
  54d1f6:	88 01                	mov    BYTE PTR [ecx],al
  54d1f8:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54d1fc:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54d203:	83 c4 20             	add    esp,0x20
  54d206:	c3                   	ret
  54d207:	51                   	push   ecx
  54d208:	e8 e3 13 0b 00       	call   0x5fe5f0
  54d20d:	83 c4 04             	add    esp,0x4
  54d210:	d9 44 24 00          	fld    DWORD PTR [esp+0x0]
  54d214:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54d218:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54d21f:	83 c4 20             	add    esp,0x20
  54d222:	c3                   	ret
  54d223:	90                   	nop
  54d224:	90                   	nop
  54d225:	90                   	nop
  54d226:	90                   	nop
  54d227:	90                   	nop
  54d228:	90                   	nop
  54d229:	90                   	nop
  54d22a:	90                   	nop
  54d22b:	90                   	nop
  54d22c:	90                   	nop
  54d22d:	90                   	nop
  54d22e:	90                   	nop
  54d22f:	90                   	nop
  54d230:	6a ff                	push   0xffffffff
  54d232:	68 7a d8 63 00       	push   0x63d87a
  54d237:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54d23d:	50                   	push   eax
  54d23e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54d245:	81 ec b4 00 00 00    	sub    esp,0xb4
  54d24b:	53                   	push   ebx
  54d24c:	55                   	push   ebp
  54d24d:	56                   	push   esi
  54d24e:	8b f1                	mov    esi,ecx
  54d250:	83 cd ff             	or     ebp,0xffffffff
  54d253:	57                   	push   edi
  54d254:	8a 86 8c 00 00 00    	mov    al,BYTE PTR [esi+0x8c]
  54d25a:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  54d25e:	84 c0                	test   al,al
  54d260:	74 68                	je     0x54d2ca
  54d262:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54d266:	6a 00                	push   0x0
  54d268:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d26c:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  54d270:	e8 2b 6e eb ff       	call   0x4040a0
  54d275:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  54d27a:	8b cd                	mov    ecx,ebp
  54d27c:	33 c0                	xor    eax,eax
  54d27e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d280:	f7 d1                	not    ecx
  54d282:	49                   	dec    ecx
  54d283:	51                   	push   ecx
  54d284:	68 70 3f 6b 00       	push   0x6b3f70
  54d289:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54d28d:	e8 5e 6e eb ff       	call   0x4040f0
  54d292:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d296:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0x0
  54d29d:	00 00 00 00 
  54d2a1:	51                   	push   ecx
  54d2a2:	6a 63                	push   0x63
  54d2a4:	68 98 17 6a 00       	push   0x6a1798
  54d2a9:	68 ac 4c 69 00       	push   0x694cac
  54d2ae:	e8 3d 35 05 00       	call   0x5a07f0
  54d2b3:	ff d0                	call   eax
  54d2b5:	83 c4 10             	add    esp,0x10
  54d2b8:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d2bc:	89 ac 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebp
  54d2c3:	6a 01                	push   0x1
  54d2c5:	e8 d6 6d eb ff       	call   0x4040a0
  54d2ca:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
  54d2cd:	85 c0                	test   eax,eax
  54d2cf:	74 68                	je     0x54d339
  54d2d1:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  54d2d5:	6a 00                	push   0x0
  54d2d7:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d2db:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  54d2df:	e8 bc 6d eb ff       	call   0x4040a0
  54d2e4:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  54d2e9:	8b cd                	mov    ecx,ebp
  54d2eb:	33 c0                	xor    eax,eax
  54d2ed:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d2ef:	f7 d1                	not    ecx
  54d2f1:	49                   	dec    ecx
  54d2f2:	51                   	push   ecx
  54d2f3:	68 70 3f 6b 00       	push   0x6b3f70
  54d2f8:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54d2fc:	e8 ef 6d eb ff       	call   0x4040f0
  54d301:	8d 44 24 18          	lea    eax,[esp+0x18]
  54d305:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0x1
  54d30c:	01 00 00 00 
  54d310:	50                   	push   eax
  54d311:	6a 64                	push   0x64
  54d313:	68 98 17 6a 00       	push   0x6a1798
  54d318:	68 4c 1a 6a 00       	push   0x6a1a4c
  54d31d:	e8 ce 34 05 00       	call   0x5a07f0
  54d322:	ff d0                	call   eax
  54d324:	83 c4 10             	add    esp,0x10
  54d327:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d32b:	89 ac 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebp
  54d332:	6a 01                	push   0x1
  54d334:	e8 67 6d eb ff       	call   0x4040a0
  54d339:	e8 72 9c fc ff       	call   0x516fb0
  54d33e:	8b c8                	mov    ecx,eax
  54d340:	e8 9b 64 ee ff       	call   0x4337e0
  54d345:	85 c0                	test   eax,eax
  54d347:	74 40                	je     0x54d389
  54d349:	e8 f2 62 00 00       	call   0x553640
  54d34e:	25 ff 00 00 00       	and    eax,0xff
  54d353:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d357:	50                   	push   eax
  54d358:	68 20 1a 6a 00       	push   0x6a1a20
  54d35d:	51                   	push   ecx
  54d35e:	e8 2d 10 06 00       	call   0x5ae390
  54d363:	50                   	push   eax
  54d364:	c7 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],0x2
  54d36b:	02 00 00 00 
  54d36f:	e8 8c 2b 06 00       	call   0x5aff00
  54d374:	83 c4 10             	add    esp,0x10
  54d377:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d37b:	89 ac 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebp
  54d382:	6a 01                	push   0x1
  54d384:	e8 17 6d eb ff       	call   0x4040a0
  54d389:	e8 b2 62 00 00       	call   0x553640
  54d38e:	84 c0                	test   al,al
  54d390:	0f 84 13 07 00 00    	je     0x54daa9
  54d396:	e8 15 9c fc ff       	call   0x516fb0
  54d39b:	8b c8                	mov    ecx,eax
  54d39d:	e8 3e 64 ee ff       	call   0x4337e0
  54d3a2:	85 c0                	test   eax,eax
  54d3a4:	74 40                	je     0x54d3e6
  54d3a6:	e8 35 63 00 00       	call   0x5536e0
  54d3ab:	25 ff 00 00 00       	and    eax,0xff
  54d3b0:	8d 54 24 18          	lea    edx,[esp+0x18]
  54d3b4:	50                   	push   eax
  54d3b5:	68 ec 19 6a 00       	push   0x6a19ec
  54d3ba:	52                   	push   edx
  54d3bb:	e8 d0 0f 06 00       	call   0x5ae390
  54d3c0:	50                   	push   eax
  54d3c1:	c7 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],0x3
  54d3c8:	03 00 00 00 
  54d3cc:	e8 2f 2b 06 00       	call   0x5aff00
  54d3d1:	83 c4 10             	add    esp,0x10
  54d3d4:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d3d8:	89 ac 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebp
  54d3df:	6a 01                	push   0x1
  54d3e1:	e8 ba 6c eb ff       	call   0x4040a0
  54d3e6:	e8 f5 62 00 00       	call   0x5536e0
  54d3eb:	f6 d8                	neg    al
  54d3ed:	1b c0                	sbb    eax,eax
  54d3ef:	40                   	inc    eax
  54d3f0:	50                   	push   eax
  54d3f1:	e8 1a aa 07 00       	call   0x5c7e10
  54d3f6:	83 c4 04             	add    esp,0x4
  54d3f9:	e8 c2 c3 00 00       	call   0x5597c0
  54d3fe:	8b c8                	mov    ecx,eax
  54d400:	e8 6b 39 05 00       	call   0x5a0d70
  54d405:	e8 a6 b0 00 00       	call   0x5584b0
  54d40a:	83 c0 14             	add    eax,0x14
  54d40d:	be b4 a3 64 00       	mov    esi,0x64a3b4
  54d412:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  54d415:	85 c0                	test   eax,eax
  54d417:	74 02                	je     0x54d41b
  54d419:	8b f0                	mov    esi,eax
  54d41b:	e8 00 a1 00 00       	call   0x557520
  54d420:	56                   	push   esi
  54d421:	8b c8                	mov    ecx,eax
  54d423:	e8 88 f9 05 00       	call   0x5acdb0
  54d428:	6a 00                	push   0x0
  54d42a:	e8 51 62 00 00       	call   0x553680
  54d42f:	8a 44 24 17          	mov    al,BYTE PTR [esp+0x17]
  54d433:	83 c4 04             	add    esp,0x4
  54d436:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54d43a:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  54d43e:	6a 00                	push   0x0
  54d440:	e8 5b 6c eb ff       	call   0x4040a0
  54d445:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  54d44a:	8b cd                	mov    ecx,ebp
  54d44c:	33 c0                	xor    eax,eax
  54d44e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d450:	f7 d1                	not    ecx
  54d452:	49                   	dec    ecx
  54d453:	51                   	push   ecx
  54d454:	68 70 3f 6b 00       	push   0x6b3f70
  54d459:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54d45d:	e8 8e 6c eb ff       	call   0x4040f0
  54d462:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  54d466:	6a 00                	push   0x0
  54d468:	88 4c 24 3c          	mov    BYTE PTR [esp+0x3c],cl
  54d46c:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54d470:	c7 84 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],0x4
  54d477:	04 00 00 00 
  54d47b:	e8 20 6c eb ff       	call   0x4040a0
  54d480:	bf ec 01 69 00       	mov    edi,0x6901ec
  54d485:	8b cd                	mov    ecx,ebp
  54d487:	33 c0                	xor    eax,eax
  54d489:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d48b:	f7 d1                	not    ecx
  54d48d:	49                   	dec    ecx
  54d48e:	51                   	push   ecx
  54d48f:	68 ec 01 69 00       	push   0x6901ec
  54d494:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54d498:	e8 53 6c eb ff       	call   0x4040f0
  54d49d:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  54d4a1:	6a 00                	push   0x0
  54d4a3:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d4a7:	c6 84 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],0x5
  54d4ae:	05 
  54d4af:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  54d4b3:	e8 e8 6b eb ff       	call   0x4040a0
  54d4b8:	bf d8 19 6a 00       	mov    edi,0x6a19d8
  54d4bd:	8b cd                	mov    ecx,ebp
  54d4bf:	33 c0                	xor    eax,eax
  54d4c1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d4c3:	f7 d1                	not    ecx
  54d4c5:	49                   	dec    ecx
  54d4c6:	51                   	push   ecx
  54d4c7:	68 d8 19 6a 00       	push   0x6a19d8
  54d4cc:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54d4d0:	e8 1b 6c eb ff       	call   0x4040f0
  54d4d5:	8d 44 24 28          	lea    eax,[esp+0x28]
  54d4d9:	6a 00                	push   0x0
  54d4db:	50                   	push   eax
  54d4dc:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54d4e0:	6a 00                	push   0x0
  54d4e2:	8d 54 24 24          	lea    edx,[esp+0x24]
  54d4e6:	51                   	push   ecx
  54d4e7:	52                   	push   edx
  54d4e8:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  54d4ec:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x6
  54d4f3:	06 
  54d4f4:	e8 d7 f4 05 00       	call   0x5ac9d0
  54d4f9:	8b c8                	mov    ecx,eax
  54d4fb:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x7
  54d502:	07 
  54d503:	e8 d8 62 ee ff       	call   0x4337e0
  54d508:	85 c0                	test   eax,eax
  54d50a:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  54d50e:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x6
  54d515:	06 
  54d516:	0f 95 c3             	setne  bl
  54d519:	e8 82 f7 05 00       	call   0x5acca0
  54d51e:	6a 01                	push   0x1
  54d520:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d524:	c6 84 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],0x5
  54d52b:	05 
  54d52c:	e8 6f 6b eb ff       	call   0x4040a0
  54d531:	6a 01                	push   0x1
  54d533:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54d537:	c6 84 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],0x4
  54d53e:	04 
  54d53f:	e8 5c 6b eb ff       	call   0x4040a0
  54d544:	6a 01                	push   0x1
  54d546:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d54a:	89 ac 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],ebp
  54d551:	e8 4a 6b eb ff       	call   0x4040a0
  54d556:	84 db                	test   bl,bl
  54d558:	0f 84 cf 00 00 00    	je     0x54d62d
  54d55e:	e8 cd 32 05 00       	call   0x5a0830
  54d563:	8b f0                	mov    esi,eax
  54d565:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54d568:	3d 00 00 00 80       	cmp    eax,0x80000000
  54d56d:	75 18                	jne    0x54d587
  54d56f:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54d572:	85 c0                	test   eax,eax
  54d574:	75 05                	jne    0x54d57b
  54d576:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54d57b:	50                   	push   eax
  54d57c:	e8 8f d9 0b 00       	call   0x60af10
  54d581:	83 c4 04             	add    esp,0x4
  54d584:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54d587:	85 c0                	test   eax,eax
  54d589:	74 0d                	je     0x54d598
  54d58b:	68 b8 19 6a 00       	push   0x6a19b8
  54d590:	e8 9b 28 06 00       	call   0x5afe30
  54d595:	83 c4 04             	add    esp,0x4
  54d598:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54d59c:	6a 00                	push   0x0
  54d59e:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d5a2:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  54d5a6:	e8 f5 6a eb ff       	call   0x4040a0
  54d5ab:	bf b8 19 6a 00       	mov    edi,0x6a19b8
  54d5b0:	8b cd                	mov    ecx,ebp
  54d5b2:	33 c0                	xor    eax,eax
  54d5b4:	6a 01                	push   0x1
  54d5b6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d5b8:	f7 d1                	not    ecx
  54d5ba:	49                   	dec    ecx
  54d5bb:	8b d9                	mov    ebx,ecx
  54d5bd:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d5c1:	53                   	push   ebx
  54d5c2:	e8 79 43 eb ff       	call   0x401940
  54d5c7:	84 c0                	test   al,al
  54d5c9:	74 23                	je     0x54d5ee
  54d5cb:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  54d5cf:	8b cb                	mov    ecx,ebx
  54d5d1:	8b d1                	mov    edx,ecx
  54d5d3:	be b8 19 6a 00       	mov    esi,0x6a19b8
  54d5d8:	c1 e9 02             	shr    ecx,0x2
  54d5db:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  54d5dd:	8b ca                	mov    ecx,edx
  54d5df:	53                   	push   ebx
  54d5e0:	83 e1 03             	and    ecx,0x3
  54d5e3:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  54d5e5:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d5e9:	e8 a2 6b eb ff       	call   0x404190
  54d5ee:	8d 44 24 28          	lea    eax,[esp+0x28]
  54d5f2:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0x8
  54d5f9:	08 00 00 00 
  54d5fd:	50                   	push   eax
  54d5fe:	6a 76                	push   0x76
  54d600:	68 98 17 6a 00       	push   0x6a1798
  54d605:	68 d0 d2 68 00       	push   0x68d2d0
  54d60a:	e8 e1 31 05 00       	call   0x5a07f0
  54d60f:	ff d0                	call   eax
  54d611:	83 c4 10             	add    esp,0x10
  54d614:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54d618:	89 ac 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebp
  54d61f:	6a 01                	push   0x1
  54d621:	e8 7a 6a eb ff       	call   0x4040a0
  54d626:	32 c0                	xor    al,al
  54d628:	e9 7e 04 00 00       	jmp    0x54daab
  54d62d:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  54d631:	6a 00                	push   0x0
  54d633:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  54d637:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d63b:	e8 60 6a eb ff       	call   0x4040a0
  54d640:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  54d645:	8b cd                	mov    ecx,ebp
  54d647:	33 c0                	xor    eax,eax
  54d649:	6a 01                	push   0x1
  54d64b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d64d:	f7 d1                	not    ecx
  54d64f:	49                   	dec    ecx
  54d650:	8b d9                	mov    ebx,ecx
  54d652:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d656:	53                   	push   ebx
  54d657:	e8 e4 42 eb ff       	call   0x401940
  54d65c:	84 c0                	test   al,al
  54d65e:	74 23                	je     0x54d683
  54d660:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  54d664:	8b cb                	mov    ecx,ebx
  54d666:	8b d1                	mov    edx,ecx
  54d668:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  54d66d:	c1 e9 02             	shr    ecx,0x2
  54d670:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  54d672:	8b ca                	mov    ecx,edx
  54d674:	53                   	push   ebx
  54d675:	83 e1 03             	and    ecx,0x3
  54d678:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  54d67a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d67e:	e8 0d 6b eb ff       	call   0x404190
  54d683:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54d687:	6a 00                	push   0x0
  54d689:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54d68d:	c7 84 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],0x9
  54d694:	09 00 00 00 
  54d698:	88 44 24 3c          	mov    BYTE PTR [esp+0x3c],al
  54d69c:	e8 ff 69 eb ff       	call   0x4040a0
  54d6a1:	bf ec 01 69 00       	mov    edi,0x6901ec
  54d6a6:	8b cd                	mov    ecx,ebp
  54d6a8:	33 c0                	xor    eax,eax
  54d6aa:	6a 01                	push   0x1
  54d6ac:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d6ae:	f7 d1                	not    ecx
  54d6b0:	49                   	dec    ecx
  54d6b1:	8b d9                	mov    ebx,ecx
  54d6b3:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54d6b7:	53                   	push   ebx
  54d6b8:	e8 83 42 eb ff       	call   0x401940
  54d6bd:	84 c0                	test   al,al
  54d6bf:	74 23                	je     0x54d6e4
  54d6c1:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
  54d6c5:	8b cb                	mov    ecx,ebx
  54d6c7:	8b d1                	mov    edx,ecx
  54d6c9:	be ec 01 69 00       	mov    esi,0x6901ec
  54d6ce:	c1 e9 02             	shr    ecx,0x2
  54d6d1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  54d6d3:	8b ca                	mov    ecx,edx
  54d6d5:	53                   	push   ebx
  54d6d6:	83 e1 03             	and    ecx,0x3
  54d6d9:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  54d6db:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54d6df:	e8 ac 6a eb ff       	call   0x404190
  54d6e4:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54d6e8:	6a 00                	push   0x0
  54d6ea:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d6ee:	c6 84 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],0xa
  54d6f5:	0a 
  54d6f6:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  54d6fa:	e8 a1 69 eb ff       	call   0x4040a0
  54d6ff:	bf a0 19 6a 00       	mov    edi,0x6a19a0
  54d704:	8b cd                	mov    ecx,ebp
  54d706:	33 c0                	xor    eax,eax
  54d708:	6a 01                	push   0x1
  54d70a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d70c:	f7 d1                	not    ecx
  54d70e:	49                   	dec    ecx
  54d70f:	8b d9                	mov    ebx,ecx
  54d711:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d715:	53                   	push   ebx
  54d716:	e8 25 42 eb ff       	call   0x401940
  54d71b:	84 c0                	test   al,al
  54d71d:	74 23                	je     0x54d742
  54d71f:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  54d723:	8b cb                	mov    ecx,ebx
  54d725:	8b d1                	mov    edx,ecx
  54d727:	be a0 19 6a 00       	mov    esi,0x6a19a0
  54d72c:	c1 e9 02             	shr    ecx,0x2
  54d72f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  54d731:	8b ca                	mov    ecx,edx
  54d733:	53                   	push   ebx
  54d734:	83 e1 03             	and    ecx,0x3
  54d737:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  54d739:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d73d:	e8 4e 6a eb ff       	call   0x404190
  54d742:	8d 44 24 18          	lea    eax,[esp+0x18]
  54d746:	6a 00                	push   0x0
  54d748:	50                   	push   eax
  54d749:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54d74d:	6a 00                	push   0x0
  54d74f:	8d 54 24 34          	lea    edx,[esp+0x34]
  54d753:	51                   	push   ecx
  54d754:	52                   	push   edx
  54d755:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  54d759:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0xb
  54d760:	0b 
  54d761:	e8 6a f2 05 00       	call   0x5ac9d0
  54d766:	8b c8                	mov    ecx,eax
  54d768:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0xc
  54d76f:	0c 
  54d770:	e8 6b 60 ee ff       	call   0x4337e0
  54d775:	85 c0                	test   eax,eax
  54d777:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  54d77b:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0xb
  54d782:	0b 
  54d783:	0f 95 c3             	setne  bl
  54d786:	e8 15 f5 05 00       	call   0x5acca0
  54d78b:	6a 01                	push   0x1
  54d78d:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54d791:	c6 84 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],0xa
  54d798:	0a 
  54d799:	e8 02 69 eb ff       	call   0x4040a0
  54d79e:	6a 01                	push   0x1
  54d7a0:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54d7a4:	c6 84 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],0x9
  54d7ab:	09 
  54d7ac:	e8 ef 68 eb ff       	call   0x4040a0
  54d7b1:	6a 01                	push   0x1
  54d7b3:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d7b7:	89 ac 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],ebp
  54d7be:	e8 dd 68 eb ff       	call   0x4040a0
  54d7c3:	84 db                	test   bl,bl
  54d7c5:	74 47                	je     0x54d80e
  54d7c7:	e8 64 30 05 00       	call   0x5a0830
  54d7cc:	8b f0                	mov    esi,eax
  54d7ce:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54d7d1:	3d 00 00 00 80       	cmp    eax,0x80000000
  54d7d6:	75 18                	jne    0x54d7f0
  54d7d8:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54d7db:	85 c0                	test   eax,eax
  54d7dd:	75 05                	jne    0x54d7e4
  54d7df:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54d7e4:	50                   	push   eax
  54d7e5:	e8 26 d7 0b 00       	call   0x60af10
  54d7ea:	83 c4 04             	add    esp,0x4
  54d7ed:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54d7f0:	85 c0                	test   eax,eax
  54d7f2:	74 0d                	je     0x54d801
  54d7f4:	68 80 19 6a 00       	push   0x6a1980
  54d7f9:	e8 32 26 06 00       	call   0x5afe30
  54d7fe:	83 c4 04             	add    esp,0x4
  54d801:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  54d805:	c7 47 50 00 00 00 00 	mov    DWORD PTR [edi+0x50],0x0
  54d80c:	eb 53                	jmp    0x54d861
  54d80e:	e8 1d 30 05 00       	call   0x5a0830
  54d813:	8b f0                	mov    esi,eax
  54d815:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54d818:	3d 00 00 00 80       	cmp    eax,0x80000000
  54d81d:	75 18                	jne    0x54d837
  54d81f:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54d822:	85 c0                	test   eax,eax
  54d824:	75 05                	jne    0x54d82b
  54d826:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54d82b:	50                   	push   eax
  54d82c:	e8 df d6 0b 00       	call   0x60af10
  54d831:	83 c4 04             	add    esp,0x4
  54d834:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54d837:	85 c0                	test   eax,eax
  54d839:	74 0d                	je     0x54d848
  54d83b:	68 48 19 6a 00       	push   0x6a1948
  54d840:	e8 eb 25 06 00       	call   0x5afe30
  54d845:	83 c4 04             	add    esp,0x4
  54d848:	8b 84 24 d4 00 00 00 	mov    eax,DWORD PTR [esp+0xd4]
  54d84f:	50                   	push   eax
  54d850:	e8 db a5 07 00       	call   0x5c7e30
  54d855:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  54d859:	83 c4 04             	add    esp,0x4
  54d85c:	8b f9                	mov    edi,ecx
  54d85e:	89 41 50             	mov    DWORD PTR [ecx+0x50],eax
  54d861:	6a 01                	push   0x1
  54d863:	e8 18 5e 00 00       	call   0x553680
  54d868:	83 c4 04             	add    esp,0x4
  54d86b:	e8 b0 9c 00 00       	call   0x557520
  54d870:	68 70 3f 6b 00       	push   0x6b3f70
  54d875:	8b c8                	mov    ecx,eax
  54d877:	e8 34 f5 05 00       	call   0x5acdb0
  54d87c:	8b 47 50             	mov    eax,DWORD PTR [edi+0x50]
  54d87f:	85 c0                	test   eax,eax
  54d881:	0f 85 9f 00 00 00    	jne    0x54d926
  54d887:	6a 00                	push   0x0
  54d889:	e8 32 bf 00 00       	call   0x5597c0
  54d88e:	8b c8                	mov    ecx,eax
  54d890:	e8 3b 38 05 00       	call   0x5a10d0
  54d895:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  54d899:	6a 00                	push   0x0
  54d89b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d89f:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  54d8a3:	e8 f8 67 eb ff       	call   0x4040a0
  54d8a8:	bf fc 18 6a 00       	mov    edi,0x6a18fc
  54d8ad:	8b cd                	mov    ecx,ebp
  54d8af:	33 c0                	xor    eax,eax
  54d8b1:	6a 01                	push   0x1
  54d8b3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54d8b5:	f7 d1                	not    ecx
  54d8b7:	49                   	dec    ecx
  54d8b8:	8b d9                	mov    ebx,ecx
  54d8ba:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d8be:	53                   	push   ebx
  54d8bf:	e8 7c 40 eb ff       	call   0x401940
  54d8c4:	84 c0                	test   al,al
  54d8c6:	74 23                	je     0x54d8eb
  54d8c8:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  54d8cc:	8b cb                	mov    ecx,ebx
  54d8ce:	8b c1                	mov    eax,ecx
  54d8d0:	be fc 18 6a 00       	mov    esi,0x6a18fc
  54d8d5:	c1 e9 02             	shr    ecx,0x2
  54d8d8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  54d8da:	8b c8                	mov    ecx,eax
  54d8dc:	53                   	push   ebx
  54d8dd:	83 e1 03             	and    ecx,0x3
  54d8e0:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  54d8e2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d8e6:	e8 a5 68 eb ff       	call   0x404190
  54d8eb:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d8ef:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0xd
  54d8f6:	0d 00 00 00 
  54d8fa:	51                   	push   ecx
  54d8fb:	68 8f 00 00 00       	push   0x8f
  54d900:	68 98 17 6a 00       	push   0x6a1798
  54d905:	e8 16 26 06 00       	call   0x5aff20
  54d90a:	83 c4 0c             	add    esp,0xc
  54d90d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54d911:	89 ac 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebp
  54d918:	6a 01                	push   0x1
  54d91a:	e8 81 67 eb ff       	call   0x4040a0
  54d91f:	32 c0                	xor    al,al
  54d921:	e9 85 01 00 00       	jmp    0x54daab
  54d926:	6a 01                	push   0x1
  54d928:	e8 93 be 00 00       	call   0x5597c0
  54d92d:	8b c8                	mov    ecx,eax
  54d92f:	e8 9c 37 05 00       	call   0x5a10d0
  54d934:	d9 87 f0 00 00 00    	fld    DWORD PTR [edi+0xf0]
  54d93a:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54d940:	df e0                	fnstsw ax
  54d942:	f6 c4 40             	test   ah,0x40
  54d945:	74 20                	je     0x54d967
  54d947:	8d 54 24 13          	lea    edx,[esp+0x13]
  54d94b:	8d 87 a4 00 00 00    	lea    eax,[edi+0xa4]
  54d951:	52                   	push   edx
  54d952:	50                   	push   eax
  54d953:	e8 38 fa 05 00       	call   0x5ad390
  54d958:	d9 97 f0 00 00 00    	fst    DWORD PTR [edi+0xf0]
  54d95e:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  54d962:	83 c4 08             	add    esp,0x8
  54d965:	eb 0a                	jmp    0x54d971
  54d967:	8b 8f f0 00 00 00    	mov    ecx,DWORD PTR [edi+0xf0]
  54d96d:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  54d971:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  54d975:	52                   	push   edx
  54d976:	e8 b5 f6 ff ff       	call   0x54d030
  54d97b:	8b 47 50             	mov    eax,DWORD PTR [edi+0x50]
  54d97e:	d9 1c 24             	fstp   DWORD PTR [esp]
  54d981:	50                   	push   eax
  54d982:	e8 a9 a5 07 00       	call   0x5c7f30
  54d987:	83 c4 08             	add    esp,0x8
  54d98a:	e8 21 96 fc ff       	call   0x516fb0
  54d98f:	8b f0                	mov    esi,eax
  54d991:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54d994:	3d 00 00 00 80       	cmp    eax,0x80000000
  54d999:	75 18                	jne    0x54d9b3
  54d99b:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54d99e:	85 c0                	test   eax,eax
  54d9a0:	75 05                	jne    0x54d9a7
  54d9a2:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54d9a7:	50                   	push   eax
  54d9a8:	e8 63 d5 0b 00       	call   0x60af10
  54d9ad:	83 c4 04             	add    esp,0x4
  54d9b0:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54d9b3:	85 c0                	test   eax,eax
  54d9b5:	74 55                	je     0x54da0c
  54d9b7:	e8 64 a4 07 00       	call   0x5c7e20
  54d9bc:	50                   	push   eax
  54d9bd:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54d9c1:	68 d8 18 6a 00       	push   0x6a18d8
  54d9c6:	51                   	push   ecx
  54d9c7:	e8 c4 09 06 00       	call   0x5ae390
  54d9cc:	50                   	push   eax
  54d9cd:	c7 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],0xe
  54d9d4:	0e 00 00 00 
  54d9d8:	e8 23 25 06 00       	call   0x5aff00
  54d9dd:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  54d9e1:	83 c4 10             	add    esp,0x10
  54d9e4:	85 c0                	test   eax,eax
  54d9e6:	89 ac 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebp
  54d9ed:	74 1d                	je     0x54da0c
  54d9ef:	8d 48 ff             	lea    ecx,[eax-0x1]
  54d9f2:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  54d9f5:	84 c0                	test   al,al
  54d9f7:	74 0a                	je     0x54da03
  54d9f9:	3c ff                	cmp    al,0xff
  54d9fb:	74 06                	je     0x54da03
  54d9fd:	fe c8                	dec    al
  54d9ff:	88 01                	mov    BYTE PTR [ecx],al
  54da01:	eb 09                	jmp    0x54da0c
  54da03:	51                   	push   ecx
  54da04:	e8 e7 0b 0b 00       	call   0x5fe5f0
  54da09:	83 c4 04             	add    esp,0x4
  54da0c:	8b 97 f0 01 00 00    	mov    edx,DWORD PTR [edi+0x1f0]
  54da12:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  54da16:	e8 95 95 fc ff       	call   0x516fb0
  54da1b:	8b f0                	mov    esi,eax
  54da1d:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54da20:	3d 00 00 00 80       	cmp    eax,0x80000000
  54da25:	75 18                	jne    0x54da3f
  54da27:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54da2a:	85 c0                	test   eax,eax
  54da2c:	75 05                	jne    0x54da33
  54da2e:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54da33:	50                   	push   eax
  54da34:	e8 d7 d4 0b 00       	call   0x60af10
  54da39:	83 c4 04             	add    esp,0x4
  54da3c:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54da3f:	85 c0                	test   eax,eax
  54da41:	74 52                	je     0x54da95
  54da43:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  54da47:	83 ec 08             	sub    esp,0x8
  54da4a:	8d 44 24 50          	lea    eax,[esp+0x50]
  54da4e:	dd 1c 24             	fstp   QWORD PTR [esp]
  54da51:	68 b0 18 6a 00       	push   0x6a18b0
  54da56:	50                   	push   eax
  54da57:	e8 34 09 06 00       	call   0x5ae390
  54da5c:	50                   	push   eax
  54da5d:	c7 84 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],0xf
  54da64:	0f 00 00 00 
  54da68:	e8 93 24 06 00       	call   0x5aff00
  54da6d:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  54da71:	83 c4 14             	add    esp,0x14
  54da74:	85 c0                	test   eax,eax
  54da76:	74 1d                	je     0x54da95
  54da78:	8d 48 ff             	lea    ecx,[eax-0x1]
  54da7b:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  54da7e:	84 c0                	test   al,al
  54da80:	74 0a                	je     0x54da8c
  54da82:	3c ff                	cmp    al,0xff
  54da84:	74 06                	je     0x54da8c
  54da86:	fe c8                	dec    al
  54da88:	88 01                	mov    BYTE PTR [ecx],al
  54da8a:	eb 09                	jmp    0x54da95
  54da8c:	51                   	push   ecx
  54da8d:	e8 5e 0b 0b 00       	call   0x5fe5f0
  54da92:	83 c4 04             	add    esp,0x4
  54da95:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54da99:	51                   	push   ecx
  54da9a:	e8 f1 a0 07 00       	call   0x5c7b90
  54da9f:	83 c4 04             	add    esp,0x4
  54daa2:	c6 87 8c 00 00 00 01 	mov    BYTE PTR [edi+0x8c],0x1
  54daa9:	b0 01                	mov    al,0x1
  54daab:	8b 8c 24 c4 00 00 00 	mov    ecx,DWORD PTR [esp+0xc4]
  54dab2:	5f                   	pop    edi
  54dab3:	5e                   	pop    esi
  54dab4:	5d                   	pop    ebp
  54dab5:	5b                   	pop    ebx
  54dab6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54dabd:	81 c4 c0 00 00 00    	add    esp,0xc0
  54dac3:	c2 04 00             	ret    0x4
  54dac6:	90                   	nop
  54dac7:	90                   	nop
  54dac8:	90                   	nop
  54dac9:	90                   	nop
  54daca:	90                   	nop
  54dacb:	90                   	nop
  54dacc:	90                   	nop
  54dacd:	90                   	nop
  54dace:	90                   	nop
  54dacf:	90                   	nop
  54dad0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  54dad4:	89 81 f0 01 00 00    	mov    DWORD PTR [ecx+0x1f0],eax
  54dada:	8b c8                	mov    ecx,eax
  54dadc:	51                   	push   ecx
  54dadd:	e8 ae a0 07 00       	call   0x5c7b90
  54dae2:	59                   	pop    ecx
  54dae3:	c2 04 00             	ret    0x4
  54dae6:	90                   	nop
  54dae7:	90                   	nop
  54dae8:	90                   	nop
  54dae9:	90                   	nop
  54daea:	90                   	nop
  54daeb:	90                   	nop
  54daec:	90                   	nop
  54daed:	90                   	nop
  54daee:	90                   	nop
  54daef:	90                   	nop
  54daf0:	6a ff                	push   0xffffffff
  54daf2:	68 3c d9 63 00       	push   0x63d93c
  54daf7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54dafd:	50                   	push   eax
  54dafe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54db05:	81 ec b0 00 00 00    	sub    esp,0xb0
  54db0b:	53                   	push   ebx
  54db0c:	55                   	push   ebp
  54db0d:	56                   	push   esi
  54db0e:	57                   	push   edi
  54db0f:	8b e9                	mov    ebp,ecx
  54db11:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54db15:	33 db                	xor    ebx,ebx
  54db17:	53                   	push   ebx
  54db18:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54db1c:	89 9c 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ebx
  54db23:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  54db27:	e8 74 65 eb ff       	call   0x4040a0
  54db2c:	bf 30 18 6a 00       	mov    edi,0x6a1830
  54db31:	83 c9 ff             	or     ecx,0xffffffff
  54db34:	33 c0                	xor    eax,eax
  54db36:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54db38:	f7 d1                	not    ecx
  54db3a:	49                   	dec    ecx
  54db3b:	51                   	push   ecx
  54db3c:	68 30 18 6a 00       	push   0x6a1830
  54db41:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54db45:	e8 a6 65 eb ff       	call   0x4040f0
  54db4a:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  54db4e:	53                   	push   ebx
  54db4f:	88 4c 24 2c          	mov    BYTE PTR [esp+0x2c],cl
  54db53:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54db57:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x1
  54db5e:	01 
  54db5f:	e8 3c 65 eb ff       	call   0x4040a0
  54db64:	bf 28 18 6a 00       	mov    edi,0x6a1828
  54db69:	83 c9 ff             	or     ecx,0xffffffff
  54db6c:	33 c0                	xor    eax,eax
  54db6e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54db70:	f7 d1                	not    ecx
  54db72:	49                   	dec    ecx
  54db73:	51                   	push   ecx
  54db74:	68 28 18 6a 00       	push   0x6a1828
  54db79:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54db7d:	e8 6e 65 eb ff       	call   0x4040f0
  54db82:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  54db86:	53                   	push   ebx
  54db87:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54db8b:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x2
  54db92:	02 
  54db93:	88 54 24 3c          	mov    BYTE PTR [esp+0x3c],dl
  54db97:	e8 04 65 eb ff       	call   0x4040a0
  54db9c:	bf 14 18 6a 00       	mov    edi,0x6a1814
  54dba1:	83 c9 ff             	or     ecx,0xffffffff
  54dba4:	33 c0                	xor    eax,eax
  54dba6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54dba8:	f7 d1                	not    ecx
  54dbaa:	49                   	dec    ecx
  54dbab:	51                   	push   ecx
  54dbac:	68 14 18 6a 00       	push   0x6a1814
  54dbb1:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54dbb5:	e8 36 65 eb ff       	call   0x4040f0
  54dbba:	8d 44 24 18          	lea    eax,[esp+0x18]
  54dbbe:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54dbc2:	50                   	push   eax
  54dbc3:	68 00 00 7a 44       	push   0x447a0000
  54dbc8:	53                   	push   ebx
  54dbc9:	68 00 00 a0 40       	push   0x40a00000
  54dbce:	8d 54 24 48          	lea    edx,[esp+0x48]
  54dbd2:	51                   	push   ecx
  54dbd3:	52                   	push   edx
  54dbd4:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  54dbd8:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x3
  54dbdf:	03 
  54dbe0:	e8 2b 61 05 00       	call   0x5a3d10
  54dbe5:	8b f0                	mov    esi,eax
  54dbe7:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54dbea:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54dbf0:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x4
  54dbf7:	04 
  54dbf8:	df e0                	fnstsw ax
  54dbfa:	f6 c4 40             	test   ah,0x40
  54dbfd:	74 1a                	je     0x54dc19
  54dbff:	8d 44 24 13          	lea    eax,[esp+0x13]
  54dc03:	8d 4e 14             	lea    ecx,[esi+0x14]
  54dc06:	50                   	push   eax
  54dc07:	51                   	push   ecx
  54dc08:	e8 83 f7 05 00       	call   0x5ad390
  54dc0d:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  54dc10:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  54dc14:	83 c4 08             	add    esp,0x8
  54dc17:	eb 07                	jmp    0x54dc20
  54dc19:	8b 56 60             	mov    edx,DWORD PTR [esi+0x60]
  54dc1c:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
  54dc20:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  54dc24:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x3
  54dc2b:	03 
  54dc2c:	e8 af 60 05 00       	call   0x5a3ce0
  54dc31:	6a 01                	push   0x1
  54dc33:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54dc37:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x2
  54dc3e:	02 
  54dc3f:	e8 5c 64 eb ff       	call   0x4040a0
  54dc44:	6a 01                	push   0x1
  54dc46:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54dc4a:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x1
  54dc51:	01 
  54dc52:	e8 49 64 eb ff       	call   0x4040a0
  54dc57:	6a 01                	push   0x1
  54dc59:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54dc5d:	88 9c 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],bl
  54dc64:	e8 37 64 eb ff       	call   0x4040a0
  54dc69:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54dc6d:	53                   	push   ebx
  54dc6e:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54dc72:	88 44 24 3c          	mov    BYTE PTR [esp+0x3c],al
  54dc76:	e8 25 64 eb ff       	call   0x4040a0
  54dc7b:	bf 30 18 6a 00       	mov    edi,0x6a1830
  54dc80:	83 c9 ff             	or     ecx,0xffffffff
  54dc83:	33 c0                	xor    eax,eax
  54dc85:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54dc87:	f7 d1                	not    ecx
  54dc89:	49                   	dec    ecx
  54dc8a:	51                   	push   ecx
  54dc8b:	68 30 18 6a 00       	push   0x6a1830
  54dc90:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54dc94:	e8 57 64 eb ff       	call   0x4040f0
  54dc99:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  54dc9d:	53                   	push   ebx
  54dc9e:	88 4c 24 2c          	mov    BYTE PTR [esp+0x2c],cl
  54dca2:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54dca6:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x5
  54dcad:	05 
  54dcae:	e8 ed 63 eb ff       	call   0x4040a0
  54dcb3:	bf 28 18 6a 00       	mov    edi,0x6a1828
  54dcb8:	83 c9 ff             	or     ecx,0xffffffff
  54dcbb:	33 c0                	xor    eax,eax
  54dcbd:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54dcbf:	f7 d1                	not    ecx
  54dcc1:	49                   	dec    ecx
  54dcc2:	51                   	push   ecx
  54dcc3:	68 28 18 6a 00       	push   0x6a1828
  54dcc8:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54dccc:	e8 1f 64 eb ff       	call   0x4040f0
  54dcd1:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  54dcd5:	53                   	push   ebx
  54dcd6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54dcda:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x6
  54dce1:	06 
  54dce2:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  54dce6:	e8 b5 63 eb ff       	call   0x4040a0
  54dceb:	bf 00 18 6a 00       	mov    edi,0x6a1800
  54dcf0:	83 c9 ff             	or     ecx,0xffffffff
  54dcf3:	33 c0                	xor    eax,eax
  54dcf5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54dcf7:	f7 d1                	not    ecx
  54dcf9:	49                   	dec    ecx
  54dcfa:	51                   	push   ecx
  54dcfb:	68 00 18 6a 00       	push   0x6a1800
  54dd00:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54dd04:	e8 e7 63 eb ff       	call   0x4040f0
  54dd09:	8d 44 24 38          	lea    eax,[esp+0x38]
  54dd0d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54dd11:	50                   	push   eax
  54dd12:	68 00 50 c3 47       	push   0x47c35000
  54dd17:	68 00 00 80 3f       	push   0x3f800000
  54dd1c:	68 00 40 9c 45       	push   0x459c4000
  54dd21:	8d 54 24 28          	lea    edx,[esp+0x28]
  54dd25:	51                   	push   ecx
  54dd26:	52                   	push   edx
  54dd27:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  54dd2b:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x7
  54dd32:	07 
  54dd33:	e8 d8 5f 05 00       	call   0x5a3d10
  54dd38:	8b f0                	mov    esi,eax
  54dd3a:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54dd3d:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x8
  54dd44:	08 
  54dd45:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54dd4b:	df e0                	fnstsw ax
  54dd4d:	f6 c4 40             	test   ah,0x40
  54dd50:	74 1a                	je     0x54dd6c
  54dd52:	8d 44 24 13          	lea    eax,[esp+0x13]
  54dd56:	8d 4e 14             	lea    ecx,[esi+0x14]
  54dd59:	50                   	push   eax
  54dd5a:	51                   	push   ecx
  54dd5b:	e8 30 f6 05 00       	call   0x5ad390
  54dd60:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  54dd63:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  54dd67:	83 c4 08             	add    esp,0x8
  54dd6a:	eb 07                	jmp    0x54dd73
  54dd6c:	8b 56 60             	mov    edx,DWORD PTR [esi+0x60]
  54dd6f:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  54dd73:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  54dd77:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x7
  54dd7e:	07 
  54dd7f:	e8 5c 5f 05 00       	call   0x5a3ce0
  54dd84:	6a 01                	push   0x1
  54dd86:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54dd8a:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x6
  54dd91:	06 
  54dd92:	e8 09 63 eb ff       	call   0x4040a0
  54dd97:	6a 01                	push   0x1
  54dd99:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54dd9d:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x5
  54dda4:	05 
  54dda5:	e8 f6 62 eb ff       	call   0x4040a0
  54ddaa:	6a 01                	push   0x1
  54ddac:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54ddb0:	88 9c 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],bl
  54ddb7:	e8 e4 62 eb ff       	call   0x4040a0
  54ddbc:	8b b4 24 d4 00 00 00 	mov    esi,DWORD PTR [esp+0xd4]
  54ddc3:	3b f3                	cmp    esi,ebx
  54ddc5:	75 05                	jne    0x54ddcc
  54ddc7:	be b4 a3 64 00       	mov    esi,0x64a3b4
  54ddcc:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54ddd0:	53                   	push   ebx
  54ddd1:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54ddd5:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  54ddd9:	e8 c2 62 eb ff       	call   0x4040a0
  54ddde:	8b fe                	mov    edi,esi
  54dde0:	83 c9 ff             	or     ecx,0xffffffff
  54dde3:	33 c0                	xor    eax,eax
  54dde5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54dde7:	f7 d1                	not    ecx
  54dde9:	49                   	dec    ecx
  54ddea:	51                   	push   ecx
  54ddeb:	56                   	push   esi
  54ddec:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54ddf0:	e8 fb 62 eb ff       	call   0x4040f0
  54ddf5:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  54ddf9:	53                   	push   ebx
  54ddfa:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  54ddfe:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54de02:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x9
  54de09:	09 
  54de0a:	e8 91 62 eb ff       	call   0x4040a0
  54de0f:	bf 14 18 6a 00       	mov    edi,0x6a1814
  54de14:	83 c9 ff             	or     ecx,0xffffffff
  54de17:	33 c0                	xor    eax,eax
  54de19:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54de1b:	f7 d1                	not    ecx
  54de1d:	49                   	dec    ecx
  54de1e:	51                   	push   ecx
  54de1f:	68 14 18 6a 00       	push   0x6a1814
  54de24:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54de28:	e8 c3 62 eb ff       	call   0x4040f0
  54de2d:	8d 54 24 38          	lea    edx,[esp+0x38]
  54de31:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0xa
  54de38:	0a 
  54de39:	52                   	push   edx
  54de3a:	e8 51 91 ee ff       	call   0x436f90
  54de3f:	83 c4 04             	add    esp,0x4
  54de42:	50                   	push   eax
  54de43:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  54de47:	68 00 00 7a 44       	push   0x447a0000
  54de4c:	53                   	push   ebx
  54de4d:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  54de51:	50                   	push   eax
  54de52:	8d 54 24 28          	lea    edx,[esp+0x28]
  54de56:	51                   	push   ecx
  54de57:	52                   	push   edx
  54de58:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  54de5c:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0xb
  54de63:	0b 
  54de64:	e8 a7 5e 05 00       	call   0x5a3d10
  54de69:	8b f0                	mov    esi,eax
  54de6b:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54de6e:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54de74:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0xc
  54de7b:	0c 
  54de7c:	df e0                	fnstsw ax
  54de7e:	f6 c4 40             	test   ah,0x40
  54de81:	74 16                	je     0x54de99
  54de83:	8d 44 24 13          	lea    eax,[esp+0x13]
  54de87:	8d 4e 14             	lea    ecx,[esi+0x14]
  54de8a:	50                   	push   eax
  54de8b:	51                   	push   ecx
  54de8c:	e8 ff f4 05 00       	call   0x5ad390
  54de91:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  54de94:	83 c4 08             	add    esp,0x8
  54de97:	eb 03                	jmp    0x54de9c
  54de99:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54de9c:	d9 9d ec 01 00 00    	fstp   DWORD PTR [ebp+0x1ec]
  54dea2:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  54dea6:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0xb
  54dead:	0b 
  54deae:	e8 2d 5e 05 00       	call   0x5a3ce0
  54deb3:	6a 01                	push   0x1
  54deb5:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54deb9:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0xa
  54dec0:	0a 
  54dec1:	e8 da 61 eb ff       	call   0x4040a0
  54dec6:	6a 01                	push   0x1
  54dec8:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54decc:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x9
  54ded3:	09 
  54ded4:	e8 c7 61 eb ff       	call   0x4040a0
  54ded9:	6a 01                	push   0x1
  54dedb:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54dedf:	88 9c 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],bl
  54dee6:	e8 b5 61 eb ff       	call   0x4040a0
  54deeb:	8b b4 24 d4 00 00 00 	mov    esi,DWORD PTR [esp+0xd4]
  54def2:	3b f3                	cmp    esi,ebx
  54def4:	75 05                	jne    0x54defb
  54def6:	be b4 a3 64 00       	mov    esi,0x64a3b4
  54defb:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  54deff:	53                   	push   ebx
  54df00:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54df04:	88 54 24 2c          	mov    BYTE PTR [esp+0x2c],dl
  54df08:	e8 93 61 eb ff       	call   0x4040a0
  54df0d:	8b fe                	mov    edi,esi
  54df0f:	83 c9 ff             	or     ecx,0xffffffff
  54df12:	33 c0                	xor    eax,eax
  54df14:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54df16:	f7 d1                	not    ecx
  54df18:	49                   	dec    ecx
  54df19:	51                   	push   ecx
  54df1a:	56                   	push   esi
  54df1b:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54df1f:	e8 cc 61 eb ff       	call   0x4040f0
  54df24:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  54df28:	53                   	push   ebx
  54df29:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54df2d:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0xd
  54df34:	0d 
  54df35:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  54df39:	e8 62 61 eb ff       	call   0x4040a0
  54df3e:	bf 00 18 6a 00       	mov    edi,0x6a1800
  54df43:	83 c9 ff             	or     ecx,0xffffffff
  54df46:	33 c0                	xor    eax,eax
  54df48:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54df4a:	f7 d1                	not    ecx
  54df4c:	49                   	dec    ecx
  54df4d:	51                   	push   ecx
  54df4e:	68 00 18 6a 00       	push   0x6a1800
  54df53:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54df57:	e8 94 61 eb ff       	call   0x4040f0
  54df5c:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  54df60:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0xe
  54df67:	0e 
  54df68:	51                   	push   ecx
  54df69:	e8 22 90 ee ff       	call   0x436f90
  54df6e:	83 c4 04             	add    esp,0x4
  54df71:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  54df75:	50                   	push   eax
  54df76:	68 00 50 c3 47       	push   0x47c35000
  54df7b:	68 00 00 80 3f       	push   0x3f800000
  54df80:	8d 44 24 34          	lea    eax,[esp+0x34]
  54df84:	52                   	push   edx
  54df85:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54df89:	50                   	push   eax
  54df8a:	51                   	push   ecx
  54df8b:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  54df8f:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0xf
  54df96:	0f 
  54df97:	e8 74 5d 05 00       	call   0x5a3d10
  54df9c:	8b f0                	mov    esi,eax
  54df9e:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54dfa1:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54dfa7:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x10
  54dfae:	10 
  54dfaf:	df e0                	fnstsw ax
  54dfb1:	f6 c4 40             	test   ah,0x40
  54dfb4:	74 1a                	je     0x54dfd0
  54dfb6:	8d 54 24 13          	lea    edx,[esp+0x13]
  54dfba:	8d 46 14             	lea    eax,[esi+0x14]
  54dfbd:	52                   	push   edx
  54dfbe:	50                   	push   eax
  54dfbf:	e8 cc f3 05 00       	call   0x5ad390
  54dfc4:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  54dfc7:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  54dfcb:	83 c4 08             	add    esp,0x8
  54dfce:	eb 07                	jmp    0x54dfd7
  54dfd0:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
  54dfd3:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  54dfd7:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  54dfdb:	8b cd                	mov    ecx,ebp
  54dfdd:	52                   	push   edx
  54dfde:	e8 ed fa ff ff       	call   0x54dad0
  54dfe3:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  54dfe7:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0xf
  54dfee:	0f 
  54dfef:	e8 ec 5c 05 00       	call   0x5a3ce0
  54dff4:	6a 01                	push   0x1
  54dff6:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  54dffa:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0xe
  54e001:	0e 
  54e002:	e8 99 60 eb ff       	call   0x4040a0
  54e007:	6a 01                	push   0x1
  54e009:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54e00d:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0xd
  54e014:	0d 
  54e015:	e8 86 60 eb ff       	call   0x4040a0
  54e01a:	6a 01                	push   0x1
  54e01c:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  54e020:	88 9c 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],bl
  54e027:	e8 74 60 eb ff       	call   0x4040a0
  54e02c:	6a 01                	push   0x1
  54e02e:	8d 8c 24 d4 00 00 00 	lea    ecx,[esp+0xd4]
  54e035:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0xffffffff
  54e03c:	ff ff ff ff 
  54e040:	e8 5b 60 eb ff       	call   0x4040a0
  54e045:	8b 8c 24 c0 00 00 00 	mov    ecx,DWORD PTR [esp+0xc0]
  54e04c:	5f                   	pop    edi
  54e04d:	5e                   	pop    esi
  54e04e:	5d                   	pop    ebp
  54e04f:	5b                   	pop    ebx
  54e050:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54e057:	81 c4 bc 00 00 00    	add    esp,0xbc
  54e05d:	c2 10 00             	ret    0x10
  54e060:	6a ff                	push   0xffffffff
  54e062:	68 58 d9 63 00       	push   0x63d958
  54e067:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54e06d:	50                   	push   eax
  54e06e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54e075:	51                   	push   ecx
  54e076:	56                   	push   esi
  54e077:	57                   	push   edi
  54e078:	8b f9                	mov    edi,ecx
  54e07a:	68 c8 00 00 00       	push   0xc8
  54e07f:	68 98 17 6a 00       	push   0x6a1798
  54e084:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  54e088:	e8 63 05 06 00       	call   0x5ae5f0
  54e08d:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  54e094:	00 
  54e095:	e8 16 8f fc ff       	call   0x516fb0
  54e09a:	8b f0                	mov    esi,eax
  54e09c:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  54e09f:	3d 00 00 00 80       	cmp    eax,0x80000000
  54e0a4:	75 18                	jne    0x54e0be
  54e0a6:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  54e0a9:	85 c0                	test   eax,eax
  54e0ab:	75 05                	jne    0x54e0b2
  54e0ad:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54e0b2:	50                   	push   eax
  54e0b3:	e8 58 ce 0b 00       	call   0x60af10
  54e0b8:	83 c4 04             	add    esp,0x4
  54e0bb:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  54e0be:	85 c0                	test   eax,eax
  54e0c0:	74 0d                	je     0x54e0cf
  54e0c2:	68 58 1a 6a 00       	push   0x6a1a58
  54e0c7:	e8 64 1d 06 00       	call   0x5afe30
  54e0cc:	83 c4 04             	add    esp,0x4
  54e0cf:	6a 00                	push   0x0
  54e0d1:	8b cf                	mov    ecx,edi
  54e0d3:	e8 58 22 00 00       	call   0x550330
  54e0d8:	8b 47 50             	mov    eax,DWORD PTR [edi+0x50]
  54e0db:	85 c0                	test   eax,eax
  54e0dd:	74 10                	je     0x54e0ef
  54e0df:	50                   	push   eax
  54e0e0:	e8 eb 9d 07 00       	call   0x5c7ed0
  54e0e5:	83 c4 04             	add    esp,0x4
  54e0e8:	c7 47 50 00 00 00 00 	mov    DWORD PTR [edi+0x50],0x0
  54e0ef:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  54e0f3:	c6 87 8c 00 00 00 00 	mov    BYTE PTR [edi+0x8c],0x0
  54e0fa:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  54e101:	ff 
  54e102:	e8 69 06 06 00       	call   0x5ae770
  54e107:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  54e10b:	5f                   	pop    edi
  54e10c:	5e                   	pop    esi
  54e10d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54e114:	83 c4 10             	add    esp,0x10
  54e117:	c3                   	ret
  54e118:	90                   	nop
  54e119:	90                   	nop
  54e11a:	90                   	nop
  54e11b:	90                   	nop
  54e11c:	90                   	nop
  54e11d:	90                   	nop
  54e11e:	90                   	nop
  54e11f:	90                   	nop
  54e120:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54e126:	6a ff                	push   0xffffffff
  54e128:	68 b2 d9 63 00       	push   0x63d9b2
  54e12d:	50                   	push   eax
  54e12e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54e135:	81 ec 40 01 00 00    	sub    esp,0x140
  54e13b:	53                   	push   ebx
  54e13c:	55                   	push   ebp
  54e13d:	8b e9                	mov    ebp,ecx
  54e13f:	56                   	push   esi
  54e140:	57                   	push   edi
  54e141:	d9 85 f0 00 00 00    	fld    DWORD PTR [ebp+0xf0]
  54e147:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54e14d:	8d b5 90 00 00 00    	lea    esi,[ebp+0x90]
  54e153:	df e0                	fnstsw ax
  54e155:	f6 c4 40             	test   ah,0x40
  54e158:	74 16                	je     0x54e170
  54e15a:	8d 44 24 1a          	lea    eax,[esp+0x1a]
  54e15e:	8d 4e 14             	lea    ecx,[esi+0x14]
  54e161:	50                   	push   eax
  54e162:	51                   	push   ecx
  54e163:	e8 28 f2 05 00       	call   0x5ad390
  54e168:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  54e16b:	83 c4 08             	add    esp,0x8
  54e16e:	eb 03                	jmp    0x54e173
  54e170:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54e173:	d8 9c 24 60 01 00 00 	fcomp  DWORD PTR [esp+0x160]
  54e17a:	df e0                	fnstsw ax
  54e17c:	f6 c4 40             	test   ah,0x40
  54e17f:	0f 85 e2 02 00 00    	jne    0x54e467
  54e185:	d9 84 24 60 01 00 00 	fld    DWORD PTR [esp+0x160]
  54e18c:	83 ec 08             	sub    esp,0x8
  54e18f:	b9 40 00 00 00       	mov    ecx,0x40
  54e194:	33 c0                	xor    eax,eax
  54e196:	8d 7c 24 58          	lea    edi,[esp+0x58]
  54e19a:	dd 1c 24             	fstp   QWORD PTR [esp]
  54e19d:	68 1c 08 69 00       	push   0x69081c
  54e1a2:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  54e1a6:	68 ff 00 00 00       	push   0xff
  54e1ab:	52                   	push   edx
  54e1ac:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  54e1ae:	e8 68 cd 0b 00       	call   0x60af1b
  54e1b3:	83 c4 14             	add    esp,0x14
  54e1b6:	8d 44 24 50          	lea    eax,[esp+0x50]
  54e1ba:	8b ce                	mov    ecx,esi
  54e1bc:	50                   	push   eax
  54e1bd:	e8 ee eb 05 00       	call   0x5acdb0
  54e1c2:	8b 45 50             	mov    eax,DWORD PTR [ebp+0x50]
  54e1c5:	33 db                	xor    ebx,ebx
  54e1c7:	3b c3                	cmp    eax,ebx
  54e1c9:	0f 84 98 02 00 00    	je     0x54e467
  54e1cf:	8b 8c 24 60 01 00 00 	mov    ecx,DWORD PTR [esp+0x160]
  54e1d6:	51                   	push   ecx
  54e1d7:	e8 54 ee ff ff       	call   0x54d030
  54e1dc:	8a 85 8c 00 00 00    	mov    al,BYTE PTR [ebp+0x8c]
  54e1e2:	83 c4 04             	add    esp,0x4
  54e1e5:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  54e1e9:	84 c0                	test   al,al
  54e1eb:	75 4e                	jne    0x54e23b
  54e1ed:	8d 54 24 1a          	lea    edx,[esp+0x1a]
  54e1f1:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54e1f5:	52                   	push   edx
  54e1f6:	68 70 3f 6b 00       	push   0x6b3f70
  54e1fb:	e8 10 b6 eb ff       	call   0x409810
  54e200:	8d 44 24 40          	lea    eax,[esp+0x40]
  54e204:	89 9c 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],ebx
  54e20b:	50                   	push   eax
  54e20c:	68 2e 01 00 00       	push   0x12e
  54e211:	68 dc 2c 69 00       	push   0x692cdc
  54e216:	68 b0 1b 69 00       	push   0x691bb0
  54e21b:	e8 d0 25 05 00       	call   0x5a07f0
  54e220:	ff d0                	call   eax
  54e222:	83 c4 10             	add    esp,0x10
  54e225:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  54e229:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xffffffff
  54e230:	ff ff ff ff 
  54e234:	6a 01                	push   0x1
  54e236:	e8 65 5e eb ff       	call   0x4040a0
  54e23b:	39 5d 50             	cmp    DWORD PTR [ebp+0x50],ebx
  54e23e:	75 52                	jne    0x54e292
  54e240:	8d 4c 24 19          	lea    ecx,[esp+0x19]
  54e244:	51                   	push   ecx
  54e245:	68 70 3f 6b 00       	push   0x6b3f70
  54e24a:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54e24e:	e8 bd b5 eb ff       	call   0x409810
  54e253:	8d 54 24 20          	lea    edx,[esp+0x20]
  54e257:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x1
  54e25e:	01 00 00 00 
  54e262:	52                   	push   edx
  54e263:	68 2f 01 00 00       	push   0x12f
  54e268:	68 dc 2c 69 00       	push   0x692cdc
  54e26d:	68 80 1a 6a 00       	push   0x6a1a80
  54e272:	e8 79 25 05 00       	call   0x5a07f0
  54e277:	ff d0                	call   eax
  54e279:	83 c4 10             	add    esp,0x10
  54e27c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54e280:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xffffffff
  54e287:	ff ff ff ff 
  54e28b:	6a 01                	push   0x1
  54e28d:	e8 0e 5e eb ff       	call   0x4040a0
  54e292:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  54e296:	8b 45 50             	mov    eax,DWORD PTR [ebp+0x50]
  54e299:	51                   	push   ecx
  54e29a:	50                   	push   eax
  54e29b:	e8 90 9c 07 00       	call   0x5c7f30
  54e2a0:	83 c4 08             	add    esp,0x8
  54e2a3:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  54e2a7:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  54e2ab:	e8 00 62 03 00       	call   0x5844b0
  54e2b0:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  54e2b4:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x2
  54e2bb:	02 00 00 00 
  54e2bf:	33 ff                	xor    edi,edi
  54e2c1:	8b 55 58             	mov    edx,DWORD PTR [ebp+0x58]
  54e2c4:	3b d3                	cmp    edx,ebx
  54e2c6:	75 04                	jne    0x54e2cc
  54e2c8:	33 c0                	xor    eax,eax
  54e2ca:	eb 08                	jmp    0x54e2d4
  54e2cc:	8b 45 5c             	mov    eax,DWORD PTR [ebp+0x5c]
  54e2cf:	2b c2                	sub    eax,edx
  54e2d1:	c1 f8 02             	sar    eax,0x2
  54e2d4:	3b f8                	cmp    edi,eax
  54e2d6:	0f 8d 97 00 00 00    	jge    0x54e373
  54e2dc:	8b 75 58             	mov    esi,DWORD PTR [ebp+0x58]
  54e2df:	3b 0c be             	cmp    ecx,DWORD PTR [esi+edi*4]
  54e2e2:	74 1d                	je     0x54e301
  54e2e4:	3b cb                	cmp    ecx,ebx
  54e2e6:	74 05                	je     0x54e2ed
  54e2e8:	e8 e3 b5 eb ff       	call   0x4098d0
  54e2ed:	8b 14 be             	mov    edx,DWORD PTR [esi+edi*4]
  54e2f0:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  54e2f4:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  54e2f8:	e8 b3 61 03 00       	call   0x5844b0
  54e2fd:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  54e301:	3b cb                	cmp    ecx,ebx
  54e303:	74 68                	je     0x54e36d
  54e305:	e8 d6 4d 00 00       	call   0x5530e0
  54e30a:	84 c0                	test   al,al
  54e30c:	74 5b                	je     0x54e369
  54e30e:	39 5c 24 10          	cmp    DWORD PTR [esp+0x10],ebx
  54e312:	75 4c                	jne    0x54e360
  54e314:	8d 44 24 19          	lea    eax,[esp+0x19]
  54e318:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54e31c:	50                   	push   eax
  54e31d:	68 70 3f 6b 00       	push   0x6b3f70
  54e322:	e8 e9 b4 eb ff       	call   0x409810
  54e327:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54e32b:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x4
  54e332:	04 
  54e333:	51                   	push   ecx
  54e334:	68 b6 00 00 00       	push   0xb6
  54e339:	68 38 d6 68 00       	push   0x68d638
  54e33e:	68 2c d6 68 00       	push   0x68d62c
  54e343:	e8 a8 24 05 00       	call   0x5a07f0
  54e348:	ff d0                	call   eax
  54e34a:	83 c4 10             	add    esp,0x10
  54e34d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54e351:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x2
  54e358:	02 
  54e359:	6a 01                	push   0x1
  54e35b:	e8 40 5d eb ff       	call   0x4040a0
  54e360:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  54e364:	e8 07 4e 00 00       	call   0x553170
  54e369:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  54e36d:	47                   	inc    edi
  54e36e:	e9 4e ff ff ff       	jmp    0x54e2c1
  54e373:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54e377:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  54e37b:	e8 30 61 03 00       	call   0x5844b0
  54e380:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54e384:	b3 05                	mov    bl,0x5
  54e386:	88 9c 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],bl
  54e38d:	33 ff                	xor    edi,edi
  54e38f:	8b 55 74             	mov    edx,DWORD PTR [ebp+0x74]
  54e392:	85 d2                	test   edx,edx
  54e394:	75 04                	jne    0x54e39a
  54e396:	33 c0                	xor    eax,eax
  54e398:	eb 08                	jmp    0x54e3a2
  54e39a:	8b 45 78             	mov    eax,DWORD PTR [ebp+0x78]
  54e39d:	2b c2                	sub    eax,edx
  54e39f:	c1 f8 02             	sar    eax,0x2
  54e3a2:	3b f8                	cmp    edi,eax
  54e3a4:	0f 8d 98 00 00 00    	jge    0x54e442
  54e3aa:	8b 75 74             	mov    esi,DWORD PTR [ebp+0x74]
  54e3ad:	3b 0c be             	cmp    ecx,DWORD PTR [esi+edi*4]
  54e3b0:	74 1d                	je     0x54e3cf
  54e3b2:	85 c9                	test   ecx,ecx
  54e3b4:	74 05                	je     0x54e3bb
  54e3b6:	e8 15 b5 eb ff       	call   0x4098d0
  54e3bb:	8b 14 be             	mov    edx,DWORD PTR [esi+edi*4]
  54e3be:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54e3c2:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  54e3c6:	e8 e5 60 03 00       	call   0x5844b0
  54e3cb:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54e3cf:	85 c9                	test   ecx,ecx
  54e3d1:	74 69                	je     0x54e43c
  54e3d3:	e8 08 4d 00 00       	call   0x5530e0
  54e3d8:	84 c0                	test   al,al
  54e3da:	74 5c                	je     0x54e438
  54e3dc:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54e3e0:	85 c0                	test   eax,eax
  54e3e2:	75 4b                	jne    0x54e42f
  54e3e4:	8d 44 24 1b          	lea    eax,[esp+0x1b]
  54e3e8:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54e3ec:	50                   	push   eax
  54e3ed:	68 70 3f 6b 00       	push   0x6b3f70
  54e3f2:	e8 19 b4 eb ff       	call   0x409810
  54e3f7:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54e3fb:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x7
  54e402:	07 
  54e403:	51                   	push   ecx
  54e404:	68 b6 00 00 00       	push   0xb6
  54e409:	68 38 d6 68 00       	push   0x68d638
  54e40e:	68 2c d6 68 00       	push   0x68d62c
  54e413:	e8 d8 23 05 00       	call   0x5a07f0
  54e418:	ff d0                	call   eax
  54e41a:	83 c4 10             	add    esp,0x10
  54e41d:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54e421:	88 9c 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],bl
  54e428:	6a 01                	push   0x1
  54e42a:	e8 71 5c eb ff       	call   0x4040a0
  54e42f:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54e433:	e8 38 4d 00 00       	call   0x553170
  54e438:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54e43c:	47                   	inc    edi
  54e43d:	e9 4d ff ff ff       	jmp    0x54e38f
  54e442:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54e446:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x2
  54e44d:	02 
  54e44e:	e8 bd ee 02 00       	call   0x57d310
  54e453:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  54e457:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xffffffff
  54e45e:	ff ff ff ff 
  54e462:	e8 a9 ee 02 00       	call   0x57d310
  54e467:	8b 8c 24 50 01 00 00 	mov    ecx,DWORD PTR [esp+0x150]
  54e46e:	5f                   	pop    edi
  54e46f:	5e                   	pop    esi
  54e470:	5d                   	pop    ebp
  54e471:	5b                   	pop    ebx
  54e472:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54e479:	81 c4 4c 01 00 00    	add    esp,0x14c
  54e47f:	c2 04 00             	ret    0x4
  54e482:	90                   	nop
  54e483:	90                   	nop
  54e484:	90                   	nop
  54e485:	90                   	nop
  54e486:	90                   	nop
  54e487:	90                   	nop
  54e488:	90                   	nop
  54e489:	90                   	nop
  54e48a:	90                   	nop
  54e48b:	90                   	nop
  54e48c:	90                   	nop
  54e48d:	90                   	nop
  54e48e:	90                   	nop
  54e48f:	90                   	nop
  54e490:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54e496:	6a ff                	push   0xffffffff
  54e498:	68 cb d9 63 00       	push   0x63d9cb
  54e49d:	50                   	push   eax
  54e49e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54e4a5:	81 ec 08 01 00 00    	sub    esp,0x108
  54e4ab:	53                   	push   ebx
  54e4ac:	55                   	push   ebp
  54e4ad:	8b e9                	mov    ebp,ecx
  54e4af:	56                   	push   esi
  54e4b0:	57                   	push   edi
  54e4b1:	d9 85 64 01 00 00    	fld    DWORD PTR [ebp+0x164]
  54e4b7:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54e4bd:	8d b5 04 01 00 00    	lea    esi,[ebp+0x104]
  54e4c3:	df e0                	fnstsw ax
  54e4c5:	f6 c4 40             	test   ah,0x40
  54e4c8:	74 16                	je     0x54e4e0
  54e4ca:	8d 44 24 13          	lea    eax,[esp+0x13]
  54e4ce:	8d 4e 14             	lea    ecx,[esi+0x14]
  54e4d1:	50                   	push   eax
  54e4d2:	51                   	push   ecx
  54e4d3:	e8 b8 ee 05 00       	call   0x5ad390
  54e4d8:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  54e4db:	83 c4 08             	add    esp,0x8
  54e4de:	eb 03                	jmp    0x54e4e3
  54e4e0:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54e4e3:	d8 9c 24 28 01 00 00 	fcomp  DWORD PTR [esp+0x128]
  54e4ea:	df e0                	fnstsw ax
  54e4ec:	f6 c4 40             	test   ah,0x40
  54e4ef:	0f 85 d4 00 00 00    	jne    0x54e5c9
  54e4f5:	d9 84 24 28 01 00 00 	fld    DWORD PTR [esp+0x128]
  54e4fc:	83 ec 08             	sub    esp,0x8
  54e4ff:	b9 40 00 00 00       	mov    ecx,0x40
  54e504:	33 c0                	xor    eax,eax
  54e506:	8d 7c 24 20          	lea    edi,[esp+0x20]
  54e50a:	dd 1c 24             	fstp   QWORD PTR [esp]
  54e50d:	68 1c 08 69 00       	push   0x69081c
  54e512:	8d 54 24 24          	lea    edx,[esp+0x24]
  54e516:	68 ff 00 00 00       	push   0xff
  54e51b:	52                   	push   edx
  54e51c:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  54e51e:	e8 f8 c9 0b 00       	call   0x60af1b
  54e523:	83 c4 14             	add    esp,0x14
  54e526:	8d 44 24 18          	lea    eax,[esp+0x18]
  54e52a:	8b ce                	mov    ecx,esi
  54e52c:	50                   	push   eax
  54e52d:	e8 7e e8 05 00       	call   0x5acdb0
  54e532:	8b 45 50             	mov    eax,DWORD PTR [ebp+0x50]
  54e535:	33 db                	xor    ebx,ebx
  54e537:	3b c3                	cmp    eax,ebx
  54e539:	0f 84 8a 00 00 00    	je     0x54e5c9
  54e53f:	33 f6                	xor    esi,esi
  54e541:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  54e545:	89 9c 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],ebx
  54e54c:	8b 4d 58             	mov    ecx,DWORD PTR [ebp+0x58]
  54e54f:	85 c9                	test   ecx,ecx
  54e551:	75 04                	jne    0x54e557
  54e553:	33 c0                	xor    eax,eax
  54e555:	eb 08                	jmp    0x54e55f
  54e557:	8b 45 5c             	mov    eax,DWORD PTR [ebp+0x5c]
  54e55a:	2b c1                	sub    eax,ecx
  54e55c:	c1 f8 02             	sar    eax,0x2
  54e55f:	3b d8                	cmp    ebx,eax
  54e561:	7d 45                	jge    0x54e5a8
  54e563:	8b 7d 58             	mov    edi,DWORD PTR [ebp+0x58]
  54e566:	3b 34 9f             	cmp    esi,DWORD PTR [edi+ebx*4]
  54e569:	74 24                	je     0x54e58f
  54e56b:	85 f6                	test   esi,esi
  54e56d:	74 12                	je     0x54e581
  54e56f:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  54e572:	48                   	dec    eax
  54e573:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  54e576:	75 09                	jne    0x54e581
  54e578:	6a 00                	push   0x0
  54e57a:	8b ce                	mov    ecx,esi
  54e57c:	e8 3f da 05 00       	call   0x5abfc0
  54e581:	8b 34 9f             	mov    esi,DWORD PTR [edi+ebx*4]
  54e584:	85 f6                	test   esi,esi
  54e586:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  54e58a:	74 19                	je     0x54e5a5
  54e58c:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  54e58f:	85 f6                	test   esi,esi
  54e591:	74 12                	je     0x54e5a5
  54e593:	8b ce                	mov    ecx,esi
  54e595:	e8 46 4b 00 00       	call   0x5530e0
  54e59a:	84 c0                	test   al,al
  54e59c:	74 07                	je     0x54e5a5
  54e59e:	8b ce                	mov    ecx,esi
  54e5a0:	e8 cb 4b 00 00       	call   0x553170
  54e5a5:	43                   	inc    ebx
  54e5a6:	eb a4                	jmp    0x54e54c
  54e5a8:	85 f6                	test   esi,esi
  54e5aa:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0xffffffff
  54e5b1:	ff ff ff ff 
  54e5b5:	74 12                	je     0x54e5c9
  54e5b7:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  54e5ba:	48                   	dec    eax
  54e5bb:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  54e5be:	75 09                	jne    0x54e5c9
  54e5c0:	6a 00                	push   0x0
  54e5c2:	8b ce                	mov    ecx,esi
  54e5c4:	e8 f7 d9 05 00       	call   0x5abfc0
  54e5c9:	8b 8c 24 18 01 00 00 	mov    ecx,DWORD PTR [esp+0x118]
  54e5d0:	5f                   	pop    edi
  54e5d1:	5e                   	pop    esi
  54e5d2:	5d                   	pop    ebp
  54e5d3:	5b                   	pop    ebx
  54e5d4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54e5db:	81 c4 14 01 00 00    	add    esp,0x114
  54e5e1:	c2 04 00             	ret    0x4
  54e5e4:	90                   	nop
  54e5e5:	90                   	nop
  54e5e6:	90                   	nop
  54e5e7:	90                   	nop
  54e5e8:	90                   	nop
  54e5e9:	90                   	nop
  54e5ea:	90                   	nop
  54e5eb:	90                   	nop
  54e5ec:	90                   	nop
  54e5ed:	90                   	nop
  54e5ee:	90                   	nop
  54e5ef:	90                   	nop
  54e5f0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54e5f6:	6a ff                	push   0xffffffff
  54e5f8:	68 eb d9 63 00       	push   0x63d9eb
  54e5fd:	50                   	push   eax
  54e5fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54e605:	81 ec 08 01 00 00    	sub    esp,0x108
  54e60b:	53                   	push   ebx
  54e60c:	55                   	push   ebp
  54e60d:	8b e9                	mov    ebp,ecx
  54e60f:	56                   	push   esi
  54e610:	57                   	push   edi
  54e611:	d9 85 d8 01 00 00    	fld    DWORD PTR [ebp+0x1d8]
  54e617:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  54e61d:	8d b5 78 01 00 00    	lea    esi,[ebp+0x178]
  54e623:	df e0                	fnstsw ax
  54e625:	f6 c4 40             	test   ah,0x40
  54e628:	74 16                	je     0x54e640
  54e62a:	8d 44 24 13          	lea    eax,[esp+0x13]
  54e62e:	8d 4e 14             	lea    ecx,[esi+0x14]
  54e631:	50                   	push   eax
  54e632:	51                   	push   ecx
  54e633:	e8 58 ed 05 00       	call   0x5ad390
  54e638:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  54e63b:	83 c4 08             	add    esp,0x8
  54e63e:	eb 03                	jmp    0x54e643
  54e640:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  54e643:	d8 9c 24 28 01 00 00 	fcomp  DWORD PTR [esp+0x128]
  54e64a:	df e0                	fnstsw ax
  54e64c:	f6 c4 40             	test   ah,0x40
  54e64f:	0f 85 d4 00 00 00    	jne    0x54e729
  54e655:	d9 84 24 28 01 00 00 	fld    DWORD PTR [esp+0x128]
  54e65c:	83 ec 08             	sub    esp,0x8
  54e65f:	b9 40 00 00 00       	mov    ecx,0x40
  54e664:	33 c0                	xor    eax,eax
  54e666:	8d 7c 24 20          	lea    edi,[esp+0x20]
  54e66a:	dd 1c 24             	fstp   QWORD PTR [esp]
  54e66d:	68 1c 08 69 00       	push   0x69081c
  54e672:	8d 54 24 24          	lea    edx,[esp+0x24]
  54e676:	68 ff 00 00 00       	push   0xff
  54e67b:	52                   	push   edx
  54e67c:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  54e67e:	e8 98 c8 0b 00       	call   0x60af1b
  54e683:	83 c4 14             	add    esp,0x14
  54e686:	8d 44 24 18          	lea    eax,[esp+0x18]
  54e68a:	8b ce                	mov    ecx,esi
  54e68c:	50                   	push   eax
  54e68d:	e8 1e e7 05 00       	call   0x5acdb0
  54e692:	8b 45 50             	mov    eax,DWORD PTR [ebp+0x50]
  54e695:	33 db                	xor    ebx,ebx
  54e697:	3b c3                	cmp    eax,ebx
  54e699:	0f 84 8a 00 00 00    	je     0x54e729
  54e69f:	33 f6                	xor    esi,esi
  54e6a1:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  54e6a5:	89 9c 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],ebx
  54e6ac:	8b 4d 74             	mov    ecx,DWORD PTR [ebp+0x74]
  54e6af:	85 c9                	test   ecx,ecx
  54e6b1:	75 04                	jne    0x54e6b7
  54e6b3:	33 c0                	xor    eax,eax
  54e6b5:	eb 08                	jmp    0x54e6bf
  54e6b7:	8b 45 78             	mov    eax,DWORD PTR [ebp+0x78]
  54e6ba:	2b c1                	sub    eax,ecx
  54e6bc:	c1 f8 02             	sar    eax,0x2
  54e6bf:	3b d8                	cmp    ebx,eax
  54e6c1:	7d 45                	jge    0x54e708
  54e6c3:	8b 7d 74             	mov    edi,DWORD PTR [ebp+0x74]
  54e6c6:	3b 34 9f             	cmp    esi,DWORD PTR [edi+ebx*4]
  54e6c9:	74 24                	je     0x54e6ef
  54e6cb:	85 f6                	test   esi,esi
  54e6cd:	74 12                	je     0x54e6e1
  54e6cf:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  54e6d2:	48                   	dec    eax
  54e6d3:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  54e6d6:	75 09                	jne    0x54e6e1
  54e6d8:	6a 00                	push   0x0
  54e6da:	8b ce                	mov    ecx,esi
  54e6dc:	e8 df d8 05 00       	call   0x5abfc0
  54e6e1:	8b 34 9f             	mov    esi,DWORD PTR [edi+ebx*4]
  54e6e4:	85 f6                	test   esi,esi
  54e6e6:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  54e6ea:	74 19                	je     0x54e705
  54e6ec:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  54e6ef:	85 f6                	test   esi,esi
  54e6f1:	74 12                	je     0x54e705
  54e6f3:	8b ce                	mov    ecx,esi
  54e6f5:	e8 e6 49 00 00       	call   0x5530e0
  54e6fa:	84 c0                	test   al,al
  54e6fc:	74 07                	je     0x54e705
  54e6fe:	8b ce                	mov    ecx,esi
  54e700:	e8 6b 4a 00 00       	call   0x553170
  54e705:	43                   	inc    ebx
  54e706:	eb a4                	jmp    0x54e6ac
  54e708:	85 f6                	test   esi,esi
  54e70a:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0xffffffff
  54e711:	ff ff ff ff 
  54e715:	74 12                	je     0x54e729
  54e717:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  54e71a:	48                   	dec    eax
  54e71b:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  54e71e:	75 09                	jne    0x54e729
  54e720:	6a 00                	push   0x0
  54e722:	8b ce                	mov    ecx,esi
  54e724:	e8 97 d8 05 00       	call   0x5abfc0
  54e729:	8b 8c 24 18 01 00 00 	mov    ecx,DWORD PTR [esp+0x118]
  54e730:	5f                   	pop    edi
  54e731:	5e                   	pop    esi
  54e732:	5d                   	pop    ebp
  54e733:	5b                   	pop    ebx
  54e734:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54e73b:	81 c4 14 01 00 00    	add    esp,0x114
  54e741:	c2 04 00             	ret    0x4
  54e744:	90                   	nop
  54e745:	90                   	nop
  54e746:	90                   	nop
  54e747:	90                   	nop
  54e748:	90                   	nop
  54e749:	90                   	nop
  54e74a:	90                   	nop
  54e74b:	90                   	nop
  54e74c:	90                   	nop
  54e74d:	90                   	nop
  54e74e:	90                   	nop
  54e74f:	90                   	nop
  54e750:	6a ff                	push   0xffffffff
  54e752:	68 30 da 63 00       	push   0x63da30
  54e757:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54e75d:	50                   	push   eax
  54e75e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54e765:	83 ec 48             	sub    esp,0x48
  54e768:	53                   	push   ebx
  54e769:	55                   	push   ebp
  54e76a:	8b e9                	mov    ebp,ecx
  54e76c:	33 db                	xor    ebx,ebx
  54e76e:	88 5c 24 0a          	mov    BYTE PTR [esp+0xa],bl
  54e772:	8d 8d f4 01 00 00    	lea    ecx,[ebp+0x1f4]
  54e778:	e8 63 50 ee ff       	call   0x4337e0
  54e77d:	85 c0                	test   eax,eax
  54e77f:	0f 84 56 02 00 00    	je     0x54e9db
  54e785:	56                   	push   esi
  54e786:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  54e78c:	3b f3                	cmp    esi,ebx
  54e78e:	75 07                	jne    0x54e797
  54e790:	e8 eb dc f6 ff       	call   0x4bc480
  54e795:	8b f0                	mov    esi,eax
  54e797:	39 9e a4 03 00 00    	cmp    DWORD PTR [esi+0x3a4],ebx
  54e79d:	75 48                	jne    0x54e7e7
  54e79f:	8d 44 24 0f          	lea    eax,[esp+0xf]
  54e7a3:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  54e7a7:	50                   	push   eax
  54e7a8:	68 70 3f 6b 00       	push   0x6b3f70
  54e7ad:	e8 5e b0 eb ff       	call   0x409810
  54e7b2:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  54e7b6:	89 5c 24 5c          	mov    DWORD PTR [esp+0x5c],ebx
  54e7ba:	51                   	push   ecx
  54e7bb:	68 30 01 00 00       	push   0x130
  54e7c0:	68 8c e5 68 00       	push   0x68e58c
  54e7c5:	68 84 e5 68 00       	push   0x68e584
  54e7ca:	e8 21 20 05 00       	call   0x5a07f0
  54e7cf:	ff d0                	call   eax
  54e7d1:	83 c4 10             	add    esp,0x10
  54e7d4:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  54e7d8:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
  54e7df:	ff 
  54e7e0:	6a 01                	push   0x1
  54e7e2:	e8 b9 58 eb ff       	call   0x4040a0
  54e7e7:	57                   	push   edi
  54e7e8:	8b be a4 03 00 00    	mov    edi,DWORD PTR [esi+0x3a4]
  54e7ee:	8b b6 a0 03 00 00    	mov    esi,DWORD PTR [esi+0x3a0]
  54e7f4:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54e7f8:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  54e7fc:	e8 af 5c 03 00       	call   0x5844b0
  54e801:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54e805:	c7 44 24 60 01 00 00 	mov    DWORD PTR [esp+0x60],0x1
  54e80c:	00 
  54e80d:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  54e811:	e8 9a 5c 03 00       	call   0x5844b0
  54e816:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  54e81a:	8b cf                	mov    ecx,edi
  54e81c:	52                   	push   edx
  54e81d:	c6 44 24 64 02       	mov    BYTE PTR [esp+0x64],0x2
  54e822:	e8 f9 54 f0 ff       	call   0x453d20
  54e827:	8b f8                	mov    edi,eax
  54e829:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  54e82d:	8b 07                	mov    eax,DWORD PTR [edi]
  54e82f:	3b c8                	cmp    ecx,eax
  54e831:	c6 44 24 60 03       	mov    BYTE PTR [esp+0x60],0x3
  54e836:	74 18                	je     0x54e850
  54e838:	3b cb                	cmp    ecx,ebx
  54e83a:	74 05                	je     0x54e841
  54e83c:	e8 8f b0 eb ff       	call   0x4098d0
  54e841:	8b 07                	mov    eax,DWORD PTR [edi]
  54e843:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54e847:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  54e84b:	e8 60 5c 03 00       	call   0x5844b0
  54e850:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54e854:	c6 44 24 60 02       	mov    BYTE PTR [esp+0x60],0x2
  54e859:	e8 b2 ea 02 00       	call   0x57d310
  54e85e:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  54e862:	51                   	push   ecx
  54e863:	8b ce                	mov    ecx,esi
  54e865:	e8 e6 2e ed ff       	call   0x421750
  54e86a:	8b f0                	mov    esi,eax
  54e86c:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54e870:	8b 06                	mov    eax,DWORD PTR [esi]
  54e872:	3b c8                	cmp    ecx,eax
  54e874:	c6 44 24 60 04       	mov    BYTE PTR [esp+0x60],0x4
  54e879:	5f                   	pop    edi
  54e87a:	74 18                	je     0x54e894
  54e87c:	3b cb                	cmp    ecx,ebx
  54e87e:	74 05                	je     0x54e885
  54e880:	e8 4b b0 eb ff       	call   0x4098d0
  54e885:	8b 16                	mov    edx,DWORD PTR [esi]
  54e887:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  54e88b:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  54e88f:	e8 1c 5c 03 00       	call   0x5844b0
  54e894:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54e898:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  54e89d:	e8 6e ea 02 00       	call   0x57d310
  54e8a2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54e8a6:	3b c3                	cmp    eax,ebx
  54e8a8:	0f 84 ff 00 00 00    	je     0x54e9ad
  54e8ae:	39 58 5c             	cmp    DWORD PTR [eax+0x5c],ebx
  54e8b1:	0f 84 f6 00 00 00    	je     0x54e9ad
  54e8b7:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  54e8bb:	3b cb                	cmp    ecx,ebx
  54e8bd:	0f 84 ee 00 00 00    	je     0x54e9b1
  54e8c3:	39 59 30             	cmp    DWORD PTR [ecx+0x30],ebx
  54e8c6:	0f 84 e5 00 00 00    	je     0x54e9b1
  54e8cc:	8b 54 24 64          	mov    edx,DWORD PTR [esp+0x64]
  54e8d0:	8b 32                	mov    esi,DWORD PTR [edx]
  54e8d2:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  54e8d6:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  54e8d9:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  54e8dd:	8b f0                	mov    esi,eax
  54e8df:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  54e8e2:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  54e8e6:	8b 95 ec 01 00 00    	mov    edx,DWORD PTR [ebp+0x1ec]
  54e8ec:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  54e8f0:	8b 50 5c             	mov    edx,DWORD PTR [eax+0x5c]
  54e8f3:	3b d3                	cmp    edx,ebx
  54e8f5:	75 4a                	jne    0x54e941
  54e8f7:	8d 44 24 64          	lea    eax,[esp+0x64]
  54e8fb:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  54e8ff:	50                   	push   eax
  54e900:	68 70 3f 6b 00       	push   0x6b3f70
  54e905:	e8 06 af eb ff       	call   0x409810
  54e90a:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  54e90e:	c6 44 24 5c 09       	mov    BYTE PTR [esp+0x5c],0x9
  54e913:	51                   	push   ecx
  54e914:	68 44 01 00 00       	push   0x144
  54e919:	68 b8 e1 68 00       	push   0x68e1b8
  54e91e:	68 a8 e1 68 00       	push   0x68e1a8
  54e923:	e8 c8 1e 05 00       	call   0x5a07f0
  54e928:	ff d0                	call   eax
  54e92a:	83 c4 10             	add    esp,0x10
  54e92d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  54e931:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  54e936:	6a 01                	push   0x1
  54e938:	e8 63 57 eb ff       	call   0x4040a0
  54e93d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  54e941:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  54e945:	8d 54 24 24          	lea    edx,[esp+0x24]
  54e949:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  54e94c:	d8 0d bc d0 64 00    	fmul   DWORD PTR ds:0x64d0bc
  54e952:	52                   	push   edx
  54e953:	8d 54 24 24          	lea    edx,[esp+0x24]
  54e957:	52                   	push   edx
  54e958:	8d 54 24 24          	lea    edx,[esp+0x24]
  54e95c:	52                   	push   edx
  54e95d:	53                   	push   ebx
  54e95e:	51                   	push   ecx
  54e95f:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  54e963:	81 c1 e0 01 00 00    	add    ecx,0x1e0
  54e969:	d9 1c 24             	fstp   DWORD PTR [esp]
  54e96c:	52                   	push   edx
  54e96d:	51                   	push   ecx
  54e96e:	50                   	push   eax
  54e96f:	e8 2c 92 07 00       	call   0x5c7ba0
  54e974:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  54e978:	50                   	push   eax
  54e979:	e8 c2 e7 ff ff       	call   0x54d140
  54e97e:	8b 84 24 8c 00 00 00 	mov    eax,DWORD PTR [esp+0x8c]
  54e985:	83 c4 24             	add    esp,0x24
  54e988:	c6 44 24 0e 01       	mov    BYTE PTR [esp+0xe],0x1
  54e98d:	d8 08                	fmul   DWORD PTR [eax]
  54e98f:	d9 18                	fstp   DWORD PTR [eax]
  54e991:	8b 44 24 70          	mov    eax,DWORD PTR [esp+0x70]
  54e995:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  54e999:	d8 00                	fadd   DWORD PTR [eax]
  54e99b:	d9 18                	fstp   DWORD PTR [eax]
  54e99d:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  54e9a1:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  54e9a5:	d8 08                	fmul   DWORD PTR [eax]
  54e9a7:	d9 18                	fstp   DWORD PTR [eax]
  54e9a9:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54e9ad:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  54e9b1:	3b cb                	cmp    ecx,ebx
  54e9b3:	c6 44 24 5c 01       	mov    BYTE PTR [esp+0x5c],0x1
  54e9b8:	5e                   	pop    esi
  54e9b9:	74 0d                	je     0x54e9c8
  54e9bb:	e8 10 af eb ff       	call   0x4098d0
  54e9c0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  54e9c4:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  54e9c8:	3b c3                	cmp    eax,ebx
  54e9ca:	c7 44 24 58 ff ff ff 	mov    DWORD PTR [esp+0x58],0xffffffff
  54e9d1:	ff 
  54e9d2:	74 07                	je     0x54e9db
  54e9d4:	8b c8                	mov    ecx,eax
  54e9d6:	e8 f5 ae eb ff       	call   0x4098d0
  54e9db:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  54e9df:	8a 44 24 0a          	mov    al,BYTE PTR [esp+0xa]
  54e9e3:	5d                   	pop    ebp
  54e9e4:	5b                   	pop    ebx
  54e9e5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54e9ec:	83 c4 54             	add    esp,0x54
  54e9ef:	c2 10 00             	ret    0x10
  54e9f2:	90                   	nop
  54e9f3:	90                   	nop
  54e9f4:	90                   	nop
  54e9f5:	90                   	nop
  54e9f6:	90                   	nop
  54e9f7:	90                   	nop
  54e9f8:	90                   	nop
  54e9f9:	90                   	nop
  54e9fa:	90                   	nop
  54e9fb:	90                   	nop
  54e9fc:	90                   	nop
  54e9fd:	90                   	nop
  54e9fe:	90                   	nop
  54e9ff:	90                   	nop
  54ea00:	51                   	push   ecx
  54ea01:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  54ea05:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  54ea09:	56                   	push   esi
  54ea0a:	8b f1                	mov    esi,ecx
  54ea0c:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  54ea10:	57                   	push   edi
  54ea11:	50                   	push   eax
  54ea12:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  54ea16:	51                   	push   ecx
  54ea17:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  54ea1b:	52                   	push   edx
  54ea1c:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  54ea20:	50                   	push   eax
  54ea21:	51                   	push   ecx
  54ea22:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  54ea26:	52                   	push   edx
  54ea27:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
  54ea2e:	00 
  54ea2f:	e8 2c 33 05 00       	call   0x5a1d60
  54ea34:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  54ea38:	50                   	push   eax
  54ea39:	57                   	push   edi
  54ea3a:	8b ce                	mov    ecx,esi
  54ea3c:	e8 0f 00 00 00       	call   0x54ea50
  54ea41:	8b c7                	mov    eax,edi
  54ea43:	5f                   	pop    edi
  54ea44:	5e                   	pop    esi
  54ea45:	59                   	pop    ecx
  54ea46:	c2 20 00             	ret    0x20
  54ea49:	90                   	nop
  54ea4a:	90                   	nop
  54ea4b:	90                   	nop
  54ea4c:	90                   	nop
  54ea4d:	90                   	nop
  54ea4e:	90                   	nop
  54ea4f:	90                   	nop
  54ea50:	6a ff                	push   0xffffffff
  54ea52:	68 8f da 63 00       	push   0x63da8f
  54ea57:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54ea5d:	50                   	push   eax
  54ea5e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54ea65:	83 ec 24             	sub    esp,0x24
  54ea68:	53                   	push   ebx
  54ea69:	56                   	push   esi
  54ea6a:	57                   	push   edi
  54ea6b:	8b f1                	mov    esi,ecx
  54ea6d:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
  54ea74:	00 
  54ea75:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  54ea7c:	00 
  54ea7d:	bb 01 00 00 00       	mov    ebx,0x1
  54ea82:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  54ea86:	e8 b5 4b 00 00       	call   0x553640
  54ea8b:	84 c0                	test   al,al
  54ea8d:	0f 84 a5 02 00 00    	je     0x54ed38
  54ea93:	8a 86 8c 00 00 00    	mov    al,BYTE PTR [esi+0x8c]
  54ea99:	84 c0                	test   al,al
  54ea9b:	0f 84 97 02 00 00    	je     0x54ed38
  54eaa1:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  54eaa5:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  54eaa9:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  54eaad:	8b 7c 24 48          	mov    edi,DWORD PTR [esp+0x48]
  54eab1:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  54eab5:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  54eab9:	8d 44 24 10          	lea    eax,[esp+0x10]
  54eabd:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  54eac1:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54eac5:	50                   	push   eax
  54eac6:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  54eaca:	51                   	push   ecx
  54eacb:	52                   	push   edx
  54eacc:	57                   	push   edi
  54eacd:	8b ce                	mov    ecx,esi
  54eacf:	e8 7c fc ff ff       	call   0x54e750
  54ead4:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  54ead8:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  54eadc:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  54eae0:	50                   	push   eax
  54eae1:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  54eae5:	51                   	push   ecx
  54eae6:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  54eaea:	52                   	push   edx
  54eaeb:	50                   	push   eax
  54eaec:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  54eaf0:	51                   	push   ecx
  54eaf1:	52                   	push   edx
  54eaf2:	8b ce                	mov    ecx,esi
  54eaf4:	e8 87 02 00 00       	call   0x54ed80
  54eaf9:	8b f0                	mov    esi,eax
  54eafb:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54eaff:	8b 0e                	mov    ecx,DWORD PTR [esi]
  54eb01:	3b c1                	cmp    eax,ecx
  54eb03:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  54eb08:	74 2d                	je     0x54eb37
  54eb0a:	85 c0                	test   eax,eax
  54eb0c:	74 16                	je     0x54eb24
  54eb0e:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  54eb11:	8b c8                	mov    ecx,eax
  54eb13:	83 c0 14             	add    eax,0x14
  54eb16:	4a                   	dec    edx
  54eb17:	85 d2                	test   edx,edx
  54eb19:	89 10                	mov    DWORD PTR [eax],edx
  54eb1b:	75 07                	jne    0x54eb24
  54eb1d:	6a 00                	push   0x0
  54eb1f:	e8 9c d4 05 00       	call   0x5abfc0
  54eb24:	8b 06                	mov    eax,DWORD PTR [esi]
  54eb26:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  54eb2a:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  54eb2e:	e8 7d 59 03 00       	call   0x5844b0
  54eb33:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54eb37:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  54eb3b:	88 5c 24 38          	mov    BYTE PTR [esp+0x38],bl
  54eb3f:	85 c9                	test   ecx,ecx
  54eb41:	74 09                	je     0x54eb4c
  54eb43:	e8 88 ad eb ff       	call   0x4098d0
  54eb48:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54eb4c:	85 c0                	test   eax,eax
  54eb4e:	0f 84 e8 01 00 00    	je     0x54ed3c
  54eb54:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  54eb58:	89 48 2c             	mov    DWORD PTR [eax+0x2c],ecx
  54eb5b:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54eb5f:	85 c0                	test   eax,eax
  54eb61:	75 66                	jne    0x54ebc9
  54eb63:	8a 54 24 50          	mov    dl,BYTE PTR [esp+0x50]
  54eb67:	6a 00                	push   0x0
  54eb69:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54eb6d:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  54eb71:	e8 2a 55 eb ff       	call   0x4040a0
  54eb76:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  54eb7b:	83 c9 ff             	or     ecx,0xffffffff
  54eb7e:	33 c0                	xor    eax,eax
  54eb80:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  54eb82:	f7 d1                	not    ecx
  54eb84:	49                   	dec    ecx
  54eb85:	51                   	push   ecx
  54eb86:	68 70 3f 6b 00       	push   0x6b3f70
  54eb8b:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54eb8f:	e8 5c 55 eb ff       	call   0x4040f0
  54eb94:	8d 44 24 20          	lea    eax,[esp+0x20]
  54eb98:	c6 44 24 38 04       	mov    BYTE PTR [esp+0x38],0x4
  54eb9d:	50                   	push   eax
  54eb9e:	68 b6 00 00 00       	push   0xb6
  54eba3:	68 38 d6 68 00       	push   0x68d638
  54eba8:	68 2c d6 68 00       	push   0x68d62c
  54ebad:	e8 3e 1c 05 00       	call   0x5a07f0
  54ebb2:	ff d0                	call   eax
  54ebb4:	83 c4 10             	add    esp,0x10
  54ebb7:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ebbb:	88 5c 24 38          	mov    BYTE PTR [esp+0x38],bl
  54ebbf:	53                   	push   ebx
  54ebc0:	e8 db 54 eb ff       	call   0x4040a0
  54ebc5:	8b 7c 24 48          	mov    edi,DWORD PTR [esp+0x48]
  54ebc9:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  54ebcd:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  54ebd1:	89 4a 30             	mov    DWORD PTR [edx+0x30],ecx
  54ebd4:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54ebd8:	85 c0                	test   eax,eax
  54ebda:	75 44                	jne    0x54ec20
  54ebdc:	8d 44 24 54          	lea    eax,[esp+0x54]
  54ebe0:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ebe4:	50                   	push   eax
  54ebe5:	68 70 3f 6b 00       	push   0x6b3f70
  54ebea:	e8 21 ac eb ff       	call   0x409810
  54ebef:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ebf3:	c6 44 24 38 05       	mov    BYTE PTR [esp+0x38],0x5
  54ebf8:	51                   	push   ecx
  54ebf9:	68 b6 00 00 00       	push   0xb6
  54ebfe:	68 38 d6 68 00       	push   0x68d638
  54ec03:	68 2c d6 68 00       	push   0x68d62c
  54ec08:	e8 e3 1b 05 00       	call   0x5a07f0
  54ec0d:	ff d0                	call   eax
  54ec0f:	83 c4 10             	add    esp,0x10
  54ec12:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ec16:	88 5c 24 38          	mov    BYTE PTR [esp+0x38],bl
  54ec1a:	53                   	push   ebx
  54ec1b:	e8 80 54 eb ff       	call   0x4040a0
  54ec20:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54ec24:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  54ec28:	89 50 34             	mov    DWORD PTR [eax+0x34],edx
  54ec2b:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54ec2f:	85 c0                	test   eax,eax
  54ec31:	75 44                	jne    0x54ec77
  54ec33:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  54ec37:	51                   	push   ecx
  54ec38:	68 70 3f 6b 00       	push   0x6b3f70
  54ec3d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54ec41:	e8 ca ab eb ff       	call   0x409810
  54ec46:	8d 54 24 20          	lea    edx,[esp+0x20]
  54ec4a:	c6 44 24 38 06       	mov    BYTE PTR [esp+0x38],0x6
  54ec4f:	52                   	push   edx
  54ec50:	68 b6 00 00 00       	push   0xb6
  54ec55:	68 38 d6 68 00       	push   0x68d638
  54ec5a:	68 2c d6 68 00       	push   0x68d62c
  54ec5f:	e8 8c 1b 05 00       	call   0x5a07f0
  54ec64:	ff d0                	call   eax
  54ec66:	83 c4 10             	add    esp,0x10
  54ec69:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ec6d:	88 5c 24 38          	mov    BYTE PTR [esp+0x38],bl
  54ec71:	53                   	push   ebx
  54ec72:	e8 29 54 eb ff       	call   0x4040a0
  54ec77:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54ec7b:	88 58 39             	mov    BYTE PTR [eax+0x39],bl
  54ec7e:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54ec82:	85 c0                	test   eax,eax
  54ec84:	75 44                	jne    0x54ecca
  54ec86:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  54ec8a:	51                   	push   ecx
  54ec8b:	68 70 3f 6b 00       	push   0x6b3f70
  54ec90:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  54ec94:	e8 77 ab eb ff       	call   0x409810
  54ec99:	8d 54 24 20          	lea    edx,[esp+0x20]
  54ec9d:	c6 44 24 38 07       	mov    BYTE PTR [esp+0x38],0x7
  54eca2:	52                   	push   edx
  54eca3:	68 b6 00 00 00       	push   0xb6
  54eca8:	68 38 d6 68 00       	push   0x68d638
  54ecad:	68 2c d6 68 00       	push   0x68d62c
  54ecb2:	e8 39 1b 05 00       	call   0x5a07f0
  54ecb7:	ff d0                	call   eax
  54ecb9:	83 c4 10             	add    esp,0x10
  54ecbc:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ecc0:	88 5c 24 38          	mov    BYTE PTR [esp+0x38],bl
  54ecc4:	53                   	push   ebx
  54ecc5:	e8 d6 53 eb ff       	call   0x4040a0
  54ecca:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  54ecce:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  54ecd2:	88 41 48             	mov    BYTE PTR [ecx+0x48],al
  54ecd5:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54ecd9:	85 c0                	test   eax,eax
  54ecdb:	75 44                	jne    0x54ed21
  54ecdd:	8d 54 24 50          	lea    edx,[esp+0x50]
  54ece1:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ece5:	52                   	push   edx
  54ece6:	68 70 3f 6b 00       	push   0x6b3f70
  54eceb:	e8 20 ab eb ff       	call   0x409810
  54ecf0:	8d 44 24 20          	lea    eax,[esp+0x20]
  54ecf4:	c6 44 24 38 08       	mov    BYTE PTR [esp+0x38],0x8
  54ecf9:	50                   	push   eax
  54ecfa:	68 b6 00 00 00       	push   0xb6
  54ecff:	68 38 d6 68 00       	push   0x68d638
  54ed04:	68 2c d6 68 00       	push   0x68d62c
  54ed09:	e8 e2 1a 05 00       	call   0x5a07f0
  54ed0e:	ff d0                	call   eax
  54ed10:	83 c4 10             	add    esp,0x10
  54ed13:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  54ed17:	88 5c 24 38          	mov    BYTE PTR [esp+0x38],bl
  54ed1b:	53                   	push   ebx
  54ed1c:	e8 7f 53 eb ff       	call   0x4040a0
  54ed21:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  54ed25:	8b 17                	mov    edx,DWORD PTR [edi]
  54ed27:	83 c1 3c             	add    ecx,0x3c
  54ed2a:	89 11                	mov    DWORD PTR [ecx],edx
  54ed2c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  54ed2f:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  54ed32:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
  54ed35:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  54ed38:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  54ed3c:	8b 74 24 40          	mov    esi,DWORD PTR [esp+0x40]
  54ed40:	8b ce                	mov    ecx,esi
  54ed42:	89 06                	mov    DWORD PTR [esi],eax
  54ed44:	e8 67 57 03 00       	call   0x5844b0
  54ed49:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  54ed4d:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  54ed51:	c6 44 24 38 00       	mov    BYTE PTR [esp+0x38],0x0
  54ed56:	85 c9                	test   ecx,ecx
  54ed58:	74 05                	je     0x54ed5f
  54ed5a:	e8 71 ab eb ff       	call   0x4098d0
  54ed5f:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  54ed63:	8b c6                	mov    eax,esi
  54ed65:	5f                   	pop    edi
  54ed66:	5e                   	pop    esi
  54ed67:	5b                   	pop    ebx
  54ed68:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54ed6f:	83 c4 30             	add    esp,0x30
  54ed72:	c2 20 00             	ret    0x20
  54ed75:	90                   	nop
  54ed76:	90                   	nop
  54ed77:	90                   	nop
  54ed78:	90                   	nop
  54ed79:	90                   	nop
  54ed7a:	90                   	nop
  54ed7b:	90                   	nop
  54ed7c:	90                   	nop
  54ed7d:	90                   	nop
  54ed7e:	90                   	nop
  54ed7f:	90                   	nop
