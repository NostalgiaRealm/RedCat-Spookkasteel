  5c4120:	53                   	push   ebx
  5c4121:	56                   	push   esi
  5c4122:	8b f1                	mov    esi,ecx
  5c4124:	57                   	push   edi
  5c4125:	8b da                	mov    ebx,edx
  5c4127:	8b 46 70             	mov    eax,DWORD PTR [esi+0x70]
  5c412a:	85 c0                	test   eax,eax
  5c412c:	74 02                	je     0x5c4130
  5c412e:	8b f0                	mov    esi,eax
  5c4130:	8b 46 6c             	mov    eax,DWORD PTR [esi+0x6c]
  5c4133:	85 c0                	test   eax,eax
  5c4135:	7f 62                	jg     0x5c4199
  5c4137:	8b 46 74             	mov    eax,DWORD PTR [esi+0x74]
  5c413a:	85 c0                	test   eax,eax
  5c413c:	75 5b                	jne    0x5c4199
  5c413e:	8b 46 68             	mov    eax,DWORD PTR [esi+0x68]
  5c4141:	8d 7e 68             	lea    edi,[esi+0x68]
  5c4144:	3b d8                	cmp    ebx,eax
  5c4146:	75 09                	jne    0x5c4151
  5c4148:	5f                   	pop    edi
  5c4149:	5e                   	pop    esi
  5c414a:	b8 01 00 00 00       	mov    eax,0x1
  5c414f:	5b                   	pop    ebx
  5c4150:	c3                   	ret
  5c4151:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
  5c4157:	85 c0                	test   eax,eax
  5c4159:	74 09                	je     0x5c4164
  5c415b:	56                   	push   esi
  5c415c:	e8 3f e2 ff ff       	call   0x5c23a0
  5c4161:	83 c4 04             	add    esp,0x4
  5c4164:	83 3f 00             	cmp    DWORD PTR [edi],0x0
  5c4167:	74 07                	je     0x5c4170
  5c4169:	8b cf                	mov    ecx,edi
  5c416b:	e8 40 c1 ff ff       	call   0x5c02b0
  5c4170:	85 db                	test   ebx,ebx
  5c4172:	89 1f                	mov    DWORD PTR [edi],ebx
  5c4174:	74 07                	je     0x5c417d
  5c4176:	8b cb                	mov    ecx,ebx
  5c4178:	e8 43 c0 ff ff       	call   0x5c01c0
  5c417d:	8b 86 ac 00 00 00    	mov    eax,DWORD PTR [esi+0xac]
  5c4183:	85 c0                	test   eax,eax
  5c4185:	74 09                	je     0x5c4190
  5c4187:	56                   	push   esi
  5c4188:	e8 b3 dd ff ff       	call   0x5c1f40
  5c418d:	83 c4 04             	add    esp,0x4
  5c4190:	5f                   	pop    edi
  5c4191:	5e                   	pop    esi
  5c4192:	b8 01 00 00 00       	mov    eax,0x1
  5c4197:	5b                   	pop    ebx
  5c4198:	c3                   	ret
  5c4199:	6a 00                	push   0x0
  5c419b:	68 70 3f 6b 00       	push   0x6b3f70
  5c41a0:	68 03 0e 00 00       	push   0xe03
  5c41a5:	68 ac 97 6a 00       	push   0x6a97ac
  5c41aa:	68 70 3f 6b 00       	push   0x6b3f70
  5c41af:	6a ff                	push   0xffffffff
  5c41b1:	e8 6a b0 00 00       	call   0x5cf220
  5c41b6:	83 c4 18             	add    esp,0x18
  5c41b9:	33 c0                	xor    eax,eax
  5c41bb:	5f                   	pop    edi
  5c41bc:	5e                   	pop    esi
  5c41bd:	5b                   	pop    ebx
  5c41be:	c3                   	ret
  5c41bf:	90                   	nop
  5c41c0:	83 ec 0c             	sub    esp,0xc
  5c41c3:	8d 54 24 08          	lea    edx,[esp+0x8]
  5c41c7:	56                   	push   esi
  5c41c8:	57                   	push   edi
  5c41c9:	8b f9                	mov    edi,ecx
  5c41cb:	6a 04                	push   0x4
  5c41cd:	e8 be 91 00 00       	call   0x5cd390
  5c41d2:	85 c0                	test   eax,eax
  5c41d4:	74 5f                	je     0x5c4235
  5c41d6:	e8 95 bf ff ff       	call   0x5c0170
  5c41db:	85 c0                	test   eax,eax
  5c41dd:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  5c41e1:	74 52                	je     0x5c4235
  5c41e3:	81 7c 24 10 47 65 42 	cmp    DWORD PTR [esp+0x10],0x6d426547
  5c41ea:	6d 
  5c41eb:	0f 85 9d 01 00 00    	jne    0x5c438e
  5c41f1:	6a 01                	push   0x1
  5c41f3:	8d 54 24 0f          	lea    edx,[esp+0xf]
  5c41f7:	8b cf                	mov    ecx,edi
  5c41f9:	e8 92 91 00 00       	call   0x5cd390
  5c41fe:	85 c0                	test   eax,eax
  5c4200:	74 2a                	je     0x5c422c
  5c4202:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  5c4206:	24 f0                	and    al,0xf0
  5c4208:	3c 40                	cmp    al,0x40
  5c420a:	74 31                	je     0x5c423d
  5c420c:	6a 00                	push   0x0
  5c420e:	68 70 3f 6b 00       	push   0x6b3f70
  5c4213:	68 a0 0e 00 00       	push   0xea0
  5c4218:	68 ac 97 6a 00       	push   0x6a97ac
  5c421d:	68 70 3f 6b 00       	push   0x6b3f70
  5c4222:	6a ff                	push   0xffffffff
  5c4224:	e8 f7 af 00 00       	call   0x5cf220
  5c4229:	83 c4 18             	add    esp,0x18
  5c422c:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  5c4230:	e8 7b c0 ff ff       	call   0x5c02b0
  5c4235:	33 c0                	xor    eax,eax
  5c4237:	5f                   	pop    edi
  5c4238:	5e                   	pop    esi
  5c4239:	83 c4 0c             	add    esp,0xc
  5c423c:	c3                   	ret
  5c423d:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5c4241:	57                   	push   edi
  5c4242:	51                   	push   ecx
  5c4243:	e8 e8 03 00 00       	call   0x5c4630
  5c4248:	83 c4 08             	add    esp,0x8
  5c424b:	85 c0                	test   eax,eax
  5c424d:	74 dd                	je     0x5c422c
  5c424f:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5c4253:	8b 48 24             	mov    ecx,DWORD PTR [eax+0x24]
  5c4256:	85 c9                	test   ecx,ecx
  5c4258:	74 20                	je     0x5c427a
  5c425a:	8b cf                	mov    ecx,edi
  5c425c:	c7 40 24 00 00 00 00 	mov    DWORD PTR [eax+0x24],0x0
  5c4263:	e8 d8 10 00 00       	call   0x5c5340
  5c4268:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  5c426c:	89 42 24             	mov    DWORD PTR [edx+0x24],eax
  5c426f:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5c4273:	8b 48 24             	mov    ecx,DWORD PTR [eax+0x24]
  5c4276:	85 c9                	test   ecx,ecx
  5c4278:	74 b2                	je     0x5c422c
  5c427a:	83 78 10 14          	cmp    DWORD PTR [eax+0x10],0x14
  5c427e:	75 4e                	jne    0x5c42ce
  5c4280:	6a 00                	push   0x0
  5c4282:	68 70 3f 6b 00       	push   0x6b3f70
  5c4287:	68 b0 0e 00 00       	push   0xeb0
  5c428c:	68 ac 97 6a 00       	push   0x6a97ac
  5c4291:	68 70 3f 6b 00       	push   0x6b3f70
  5c4296:	6a ff                	push   0xffffffff
  5c4298:	e8 83 af 00 00       	call   0x5cf220
  5c429d:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5c42a1:	83 c4 18             	add    esp,0x18
  5c42a4:	8b 48 68             	mov    ecx,DWORD PTR [eax+0x68]
  5c42a7:	85 c9                	test   ecx,ecx
  5c42a9:	74 8c                	je     0x5c4237
  5c42ab:	8b cf                	mov    ecx,edi
  5c42ad:	e8 0e ff ff ff       	call   0x5c41c0
  5c42b2:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5c42b6:	89 41 68             	mov    DWORD PTR [ecx+0x68],eax
  5c42b9:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5c42bd:	8b 48 68             	mov    ecx,DWORD PTR [eax+0x68]
  5c42c0:	85 c9                	test   ecx,ecx
  5c42c2:	0f 84 64 ff ff ff    	je     0x5c422c
  5c42c8:	5f                   	pop    edi
  5c42c9:	5e                   	pop    esi
  5c42ca:	83 c4 0c             	add    esp,0xc
  5c42cd:	c3                   	ret
  5c42ce:	6a 01                	push   0x1
  5c42d0:	8d 54 24 0e          	lea    edx,[esp+0xe]
  5c42d4:	8b cf                	mov    ecx,edi
  5c42d6:	e8 b5 90 00 00       	call   0x5cd390
  5c42db:	85 c0                	test   eax,eax
  5c42dd:	0f 84 49 ff ff ff    	je     0x5c422c
  5c42e3:	8a 44 24 0a          	mov    al,BYTE PTR [esp+0xa]
  5c42e7:	83 e0 0f             	and    eax,0xf
  5c42ea:	8b f0                	mov    esi,eax
  5c42ec:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5c42f0:	3b 70 18             	cmp    esi,DWORD PTR [eax+0x18]
  5c42f3:	7f af                	jg     0x5c42a4
  5c42f5:	56                   	push   esi
  5c42f6:	50                   	push   eax
  5c42f7:	e8 b4 c0 ff ff       	call   0x5c03b0
  5c42fc:	83 c4 08             	add    esp,0x8
  5c42ff:	85 c0                	test   eax,eax
  5c4301:	0f 84 25 ff ff ff    	je     0x5c422c
  5c4307:	f6 44 24 0a 10       	test   BYTE PTR [esp+0xa],0x10
  5c430c:	75 23                	jne    0x5c4331
  5c430e:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5c4312:	8b d6                	mov    edx,esi
  5c4314:	e8 e7 ef ff ff       	call   0x5c3300
  5c4319:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5c431d:	50                   	push   eax
  5c431e:	8b 54 b1 28          	mov    edx,DWORD PTR [ecx+esi*4+0x28]
  5c4322:	8b cf                	mov    ecx,edi
  5c4324:	e8 67 90 00 00       	call   0x5cd390
  5c4329:	85 c0                	test   eax,eax
  5c432b:	0f 84 fb fe ff ff    	je     0x5c422c
  5c4331:	f6 44 24 0a 20       	test   BYTE PTR [esp+0xa],0x20
  5c4336:	75 2e                	jne    0x5c4366
  5c4338:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  5c433c:	6a 01                	push   0x1
  5c433e:	8b cf                	mov    ecx,edi
  5c4340:	c7 44 b2 48 01 00 00 	mov    DWORD PTR [edx+esi*4+0x48],0x1
  5c4347:	00 
  5c4348:	8d 54 24 0e          	lea    edx,[esp+0xe]
  5c434c:	e8 3f 90 00 00       	call   0x5cd390
  5c4351:	85 c0                	test   eax,eax
  5c4353:	75 8e                	jne    0x5c42e3
  5c4355:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  5c4359:	e8 52 bf ff ff       	call   0x5c02b0
  5c435e:	33 c0                	xor    eax,eax
  5c4360:	5f                   	pop    edi
  5c4361:	5e                   	pop    esi
  5c4362:	83 c4 0c             	add    esp,0xc
  5c4365:	c3                   	ret
  5c4366:	6a 00                	push   0x0
  5c4368:	68 70 3f 6b 00       	push   0x6b3f70
  5c436d:	68 e6 0e 00 00       	push   0xee6
  5c4372:	68 ac 97 6a 00       	push   0x6a97ac
  5c4377:	68 70 3f 6b 00       	push   0x6b3f70
  5c437c:	6a ff                	push   0xffffffff
  5c437e:	e8 9d ae 00 00       	call   0x5cf220
  5c4383:	83 c4 18             	add    esp,0x18
  5c4386:	33 c0                	xor    eax,eax
  5c4388:	5f                   	pop    edi
  5c4389:	5e                   	pop    esi
  5c438a:	83 c4 0c             	add    esp,0xc
  5c438d:	c3                   	ret
  5c438e:	6a 00                	push   0x0
  5c4390:	ba fc ff ff ff       	mov    edx,0xfffffffc
  5c4395:	8b cf                	mov    ecx,edi
  5c4397:	e8 34 90 00 00       	call   0x5cd3d0
  5c439c:	85 c0                	test   eax,eax
  5c439e:	0f 84 88 fe ff ff    	je     0x5c422c
  5c43a4:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5c43a8:	81 e2 ff ff 00 00    	and    edx,0xffff
  5c43ae:	81 fa 42 4d 00 00    	cmp    edx,0x4d42
  5c43b4:	0f 85 72 fe ff ff    	jne    0x5c422c
  5c43ba:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5c43be:	57                   	push   edi
  5c43bf:	50                   	push   eax
  5c43c0:	e8 1b 00 00 00       	call   0x5c43e0
  5c43c5:	83 c4 08             	add    esp,0x8
  5c43c8:	85 c0                	test   eax,eax
  5c43ca:	0f 84 5c fe ff ff    	je     0x5c422c
  5c43d0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  5c43d4:	5f                   	pop    edi
  5c43d5:	5e                   	pop    esi
  5c43d6:	83 c4 0c             	add    esp,0xc
  5c43d9:	c3                   	ret
  5c43da:	90                   	nop
  5c43db:	90                   	nop
  5c43dc:	90                   	nop
  5c43dd:	90                   	nop
  5c43de:	90                   	nop
  5c43df:	90                   	nop
  5c43e0:	83 ec 38             	sub    esp,0x38
  5c43e3:	8d 54 24 00          	lea    edx,[esp+0x0]
  5c43e7:	53                   	push   ebx
  5c43e8:	55                   	push   ebp
  5c43e9:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
  5c43ed:	56                   	push   esi
  5c43ee:	57                   	push   edi
  5c43ef:	6a 0e                	push   0xe
  5c43f1:	8b cd                	mov    ecx,ebp
  5c43f3:	e8 98 8f 00 00       	call   0x5cd390