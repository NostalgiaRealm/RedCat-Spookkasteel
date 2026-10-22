  403070:	53                   	push   ebx
  403071:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
  403075:	56                   	push   esi
  403076:	57                   	push   edi
  403077:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  40307b:	8b f1                	mov    esi,ecx
  40307d:	57                   	push   edi
  40307e:	53                   	push   ebx
  40307f:	e8 fc f9 ff ff       	call   0x402a80
  403084:	8b c8                	mov    ecx,eax
  403086:	e8 95 fc ff ff       	call   0x402d20
  40308b:	8b ce                	mov    ecx,esi
  40308d:	e8 5e fc ff ff       	call   0x402cf0
  403092:	83 f8 05             	cmp    eax,0x5
  403095:	74 09                	je     0x4030a0
  403097:	8b 06                	mov    eax,DWORD PTR [esi]
  403099:	57                   	push   edi
  40309a:	53                   	push   ebx
  40309b:	8b ce                	mov    ecx,esi
  40309d:	ff 50 0c             	call   DWORD PTR [eax+0xc]
  4030a0:	5f                   	pop    edi
  4030a1:	5e                   	pop    esi
  4030a2:	5b                   	pop    ebx
  4030a3:	c2 08 00             	ret    0x8
  4030a6:	90                   	nop
  4030a7:	90                   	nop
  4030a8:	90                   	nop
  4030a9:	90                   	nop
  4030aa:	90                   	nop
  4030ab:	90                   	nop
  4030ac:	90                   	nop
  4030ad:	90                   	nop
  4030ae:	90                   	nop
  4030af:	90                   	nop
  4030b0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4030b6:	6a ff                	push   0xffffffff
  4030b8:	68 f8 fa 61 00       	push   0x61faf8
  4030bd:	50                   	push   eax
  4030be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4030c5:	83 ec 10             	sub    esp,0x10
  4030c8:	53                   	push   ebx
  4030c9:	56                   	push   esi
  4030ca:	8b f1                	mov    esi,ecx
  4030cc:	e8 1f fc ff ff       	call   0x402cf0
  4030d1:	83 f8 04             	cmp    eax,0x4
  4030d4:	0f 87 1d 01 00 00    	ja     0x4031f7
  4030da:	ff 24 85 c4 32 40 00 	jmp    DWORD PTR [eax*4+0x4032c4]
  4030e1:	8b ce                	mov    ecx,esi
  4030e3:	e8 98 f9 ff ff       	call   0x402a80
  4030e8:	8b c8                	mov    ecx,eax
  4030ea:	e8 21 fc ff ff       	call   0x402d10
  4030ef:	84 c0                	test   al,al
  4030f1:	0f 84 b7 01 00 00    	je     0x4032ae
  4030f7:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  4030fa:	6a 00                	push   0x0
  4030fc:	8b 01                	mov    eax,DWORD PTR [ecx]
  4030fe:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
  403104:	8b 16                	mov    edx,DWORD PTR [esi]
  403106:	8b ce                	mov    ecx,esi
  403108:	ff 52 24             	call   DWORD PTR [edx+0x24]
  40310b:	5e                   	pop    esi
  40310c:	5b                   	pop    ebx
  40310d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  403111:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  403118:	83 c4 1c             	add    esp,0x1c
  40311b:	c2 08 00             	ret    0x8
  40311e:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  403122:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  403125:	50                   	push   eax
  403126:	e8 05 fe 01 00       	call   0x422f30
  40312b:	84 c0                	test   al,al
  40312d:	0f 84 7b 01 00 00    	je     0x4032ae
  403133:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  403136:	6a 01                	push   0x1
  403138:	8b 11                	mov    edx,DWORD PTR [ecx]
  40313a:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
  403140:	8b 06                	mov    eax,DWORD PTR [esi]
  403142:	8b ce                	mov    ecx,esi
  403144:	ff 50 14             	call   DWORD PTR [eax+0x14]
  403147:	5e                   	pop    esi
  403148:	5b                   	pop    ebx
  403149:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40314d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  403154:	83 c4 1c             	add    esp,0x1c
  403157:	c2 08 00             	ret    0x8
  40315a:	8b ce                	mov    ecx,esi
  40315c:	e8 1f f9 ff ff       	call   0x402a80
  403161:	8b c8                	mov    ecx,eax
  403163:	e8 a8 fb ff ff       	call   0x402d10
  403168:	84 c0                	test   al,al
  40316a:	0f 84 3e 01 00 00    	je     0x4032ae
  403170:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  403173:	6a 00                	push   0x0
  403175:	8b 11                	mov    edx,DWORD PTR [ecx]
  403177:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
  40317d:	8b 06                	mov    eax,DWORD PTR [esi]
  40317f:	8b ce                	mov    ecx,esi
  403181:	ff 50 24             	call   DWORD PTR [eax+0x24]
  403184:	5e                   	pop    esi
  403185:	5b                   	pop    ebx
  403186:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  40318a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  403191:	83 c4 1c             	add    esp,0x1c
  403194:	c2 08 00             	ret    0x8
  403197:	8b ce                	mov    ecx,esi
  403199:	e8 e2 f8 ff ff       	call   0x402a80
  40319e:	8b c8                	mov    ecx,eax
  4031a0:	e8 6b fb ff ff       	call   0x402d10
  4031a5:	84 c0                	test   al,al
  4031a7:	0f 84 01 01 00 00    	je     0x4032ae
  4031ad:	8b 16                	mov    edx,DWORD PTR [esi]
  4031af:	8b ce                	mov    ecx,esi
  4031b1:	ff 52 14             	call   DWORD PTR [edx+0x14]
  4031b4:	5e                   	pop    esi
  4031b5:	5b                   	pop    ebx
  4031b6:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4031ba:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4031c1:	83 c4 1c             	add    esp,0x1c
  4031c4:	c2 08 00             	ret    0x8
  4031c7:	8b ce                	mov    ecx,esi
  4031c9:	e8 b2 f8 ff ff       	call   0x402a80
  4031ce:	8b c8                	mov    ecx,eax
  4031d0:	e8 3b fb ff ff       	call   0x402d10
  4031d5:	84 c0                	test   al,al
  4031d7:	0f 84 d1 00 00 00    	je     0x4032ae
  4031dd:	8b 06                	mov    eax,DWORD PTR [esi]
  4031df:	8b ce                	mov    ecx,esi
  4031e1:	ff 50 24             	call   DWORD PTR [eax+0x24]
  4031e4:	5e                   	pop    esi
  4031e5:	5b                   	pop    ebx
  4031e6:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4031ea:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4031f1:	83 c4 1c             	add    esp,0x1c
  4031f4:	c2 08 00             	ret    0x8
  4031f7:	8a 4c 24 2c          	mov    cl,BYTE PTR [esp+0x2c]
  4031fb:	55                   	push   ebp
  4031fc:	57                   	push   edi
  4031fd:	88 4c 24 10          	mov    BYTE PTR [esp+0x10],cl
  403201:	bf 50 d6 68 00       	mov    edi,0x68d650
  403206:	83 c9 ff             	or     ecx,0xffffffff
  403209:	33 c0                	xor    eax,eax
  40320b:	33 db                	xor    ebx,ebx
  40320d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40320f:	f7 d1                	not    ecx
  403211:	49                   	dec    ecx
  403212:	6a 01                	push   0x1
  403214:	8b e9                	mov    ebp,ecx
  403216:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  40321a:	55                   	push   ebp
  40321b:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  40321f:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  403223:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  403227:	e8 14 e7 ff ff       	call   0x401940
  40322c:	84 c0                	test   al,al
  40322e:	74 24                	je     0x403254
  403230:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  403234:	8b cd                	mov    ecx,ebp
  403236:	8b d1                	mov    edx,ecx
  403238:	be 50 d6 68 00       	mov    esi,0x68d650
  40323d:	c1 e9 02             	shr    ecx,0x2
  403240:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  403242:	8b ca                	mov    ecx,edx
  403244:	83 e1 03             	and    ecx,0x3
  403247:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  403249:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  40324d:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  403251:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  403254:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  403258:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  40325c:	51                   	push   ecx
  40325d:	68 f6 00 00 00       	push   0xf6
  403262:	68 84 d5 68 00       	push   0x68d584
  403267:	68 d0 d2 68 00       	push   0x68d2d0
  40326c:	e8 7f d5 19 00       	call   0x5a07f0
  403271:	ff d0                	call   eax
  403273:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  403277:	83 c4 10             	add    esp,0x10
  40327a:	3b c3                	cmp    eax,ebx
  40327c:	5f                   	pop    edi
  40327d:	5d                   	pop    ebp
  40327e:	74 2e                	je     0x4032ae
  403280:	8d 48 ff             	lea    ecx,[eax-0x1]
  403283:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  403286:	3a c3                	cmp    al,bl
  403288:	74 1b                	je     0x4032a5
  40328a:	3c ff                	cmp    al,0xff
  40328c:	74 17                	je     0x4032a5
  40328e:	fe c8                	dec    al
  403290:	5e                   	pop    esi
  403291:	88 01                	mov    BYTE PTR [ecx],al
  403293:	5b                   	pop    ebx
  403294:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  403298:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  40329f:	83 c4 1c             	add    esp,0x1c
  4032a2:	c2 08 00             	ret    0x8
  4032a5:	51                   	push   ecx
  4032a6:	e8 45 b3 1f 00       	call   0x5fe5f0
  4032ab:	83 c4 04             	add    esp,0x4
  4032ae:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4032b2:	5e                   	pop    esi
  4032b3:	5b                   	pop    ebx
  4032b4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4032bb:	83 c4 1c             	add    esp,0x1c
  4032be:	c2 08 00             	ret    0x8
  4032c1:	8d 49 00             	lea    ecx,[ecx+0x0]
  4032c4:	e1 30                	loope  0x4032f6
  4032c6:	40                   	inc    eax
  4032c7:	00 1e                	add    BYTE PTR [esi],bl
  4032c9:	31 40 00             	xor    DWORD PTR [eax+0x0],eax
  4032cc:	5a                   	pop    edx
  4032cd:	31 40 00             	xor    DWORD PTR [eax+0x0],eax
  4032d0:	c7                   	(bad)
  4032d1:	31 40 00             	xor    DWORD PTR [eax+0x0],eax
  4032d4:	97                   	xchg   edi,eax
  4032d5:	31 40 00             	xor    DWORD PTR [eax+0x0],eax
  4032d8:	90                   	nop
  4032d9:	90                   	nop
  4032da:	90                   	nop
  4032db:	90                   	nop
  4032dc:	90                   	nop
  4032dd:	90                   	nop
  4032de:	90                   	nop
  4032df:	90                   	nop
