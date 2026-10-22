  5b52b0:	83 ec 18             	sub    esp,0x18
  5b52b3:	53                   	push   ebx
  5b52b4:	56                   	push   esi
  5b52b5:	57                   	push   edi
  5b52b6:	8b f9                	mov    edi,ecx
  5b52b8:	8b da                	mov    ebx,edx
  5b52ba:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  5b52bd:	8d 77 04             	lea    esi,[edi+0x4]
  5b52c0:	85 c0                	test   eax,eax
  5b52c2:	74 0d                	je     0x5b52d1
  5b52c4:	8b ce                	mov    ecx,esi
  5b52c6:	e8 e5 84 01 00       	call   0x5cd7b0
  5b52cb:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
  5b52d1:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
  5b52d4:	53                   	push   ebx
  5b52d5:	8b 10                	mov    edx,DWORD PTR [eax]
  5b52d7:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5b52da:	e8 f1 81 01 00       	call   0x5cd4d0
  5b52df:	85 c0                	test   eax,eax
  5b52e1:	89 06                	mov    DWORD PTR [esi],eax
  5b52e3:	75 28                	jne    0x5b530d
  5b52e5:	50                   	push   eax
  5b52e6:	68 70 3f 6b 00       	push   0x6b3f70
  5b52eb:	68 ef 06 00 00       	push   0x6ef
  5b52f0:	68 30 94 6a 00       	push   0x6a9430
  5b52f5:	68 70 3f 6b 00       	push   0x6b3f70
  5b52fa:	6a 6f                	push   0x6f
  5b52fc:	e8 1f 9f 01 00       	call   0x5cf220
  5b5301:	83 c4 18             	add    esp,0x18
  5b5304:	33 c0                	xor    eax,eax
  5b5306:	5f                   	pop    edi
  5b5307:	5e                   	pop    esi
  5b5308:	5b                   	pop    ebx
  5b5309:	83 c4 18             	add    esp,0x18
  5b530c:	c3                   	ret
  5b530d:	8d 44 24 0c          	lea    eax,[esp+0xc]
  5b5311:	83 ca ff             	or     edx,0xffffffff
  5b5314:	50                   	push   eax
  5b5315:	8b cf                	mov    ecx,edi
  5b5317:	e8 54 f2 ff ff       	call   0x5b4570
  5b531c:	85 c0                	test   eax,eax
  5b531e:	75 28                	jne    0x5b5348
  5b5320:	50                   	push   eax
  5b5321:	68 70 3f 6b 00       	push   0x6b3f70
  5b5326:	68 f6 06 00 00       	push   0x6f6
  5b532b:	68 30 94 6a 00       	push   0x6a9430
  5b5330:	68 70 3f 6b 00       	push   0x6b3f70
  5b5335:	6a ff                	push   0xffffffff
  5b5337:	e8 e4 9e 01 00       	call   0x5cf220
  5b533c:	83 c4 18             	add    esp,0x18
  5b533f:	33 c0                	xor    eax,eax
  5b5341:	5f                   	pop    edi
  5b5342:	5e                   	pop    esi
  5b5343:	5b                   	pop    ebx
  5b5344:	83 c4 18             	add    esp,0x18
  5b5347:	c3                   	ret
  5b5348:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  5b534c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b5350:	8d 4f 18             	lea    ecx,[edi+0x18]
  5b5353:	83 c7 24             	add    edi,0x24
  5b5356:	89 11                	mov    DWORD PTR [ecx],edx
  5b5358:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5b535c:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  5b535f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b5363:	89 07                	mov    DWORD PTR [edi],eax
  5b5365:	b8 01 00 00 00       	mov    eax,0x1
  5b536a:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  5b536d:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5b5371:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5b5375:	89 4f 04             	mov    DWORD PTR [edi+0x4],ecx
  5b5378:	89 57 08             	mov    DWORD PTR [edi+0x8],edx
  5b537b:	5f                   	pop    edi
  5b537c:	5e                   	pop    esi
  5b537d:	5b                   	pop    ebx
  5b537e:	83 c4 18             	add    esp,0x18
  5b5381:	c3                   	ret
  5b5382:	90                   	nop
  5b5383:	90                   	nop
  5b5384:	90                   	nop
  5b5385:	90                   	nop
  5b5386:	90                   	nop
  5b5387:	90                   	nop
  5b5388:	90                   	nop
  5b5389:	90                   	nop
  5b538a:	90                   	nop
  5b538b:	90                   	nop
  5b538c:	90                   	nop
  5b538d:	90                   	nop
  5b538e:	90                   	nop
  5b538f:	90                   	nop
