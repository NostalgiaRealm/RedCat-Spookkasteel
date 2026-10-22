  5b72f0:	81 ec f4 03 00 00    	sub    esp,0x3f4
  5b72f6:	53                   	push   ebx
  5b72f7:	55                   	push   ebp
  5b72f8:	56                   	push   esi
  5b72f9:	57                   	push   edi
  5b72fa:	6a 09                	push   0x9
  5b72fc:	6a 00                	push   0x0
  5b72fe:	6a 00                	push   0x0
  5b7300:	ba 03 00 00 00       	mov    edx,0x3
  5b7305:	e8 96 5d 01 00       	call   0x5cd0a0
  5b730a:	8b f8                	mov    edi,eax
  5b730c:	85 ff                	test   edi,edi
  5b730e:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
  5b7312:	75 28                	jne    0x5b733c
  5b7314:	50                   	push   eax
  5b7315:	68 70 3f 6b 00       	push   0x6b3f70
  5b731a:	68 2a 04 00 00       	push   0x42a
  5b731f:	68 ac 94 6a 00       	push   0x6a94ac
  5b7324:	68 70 3f 6b 00       	push   0x6b3f70
  5b7329:	6a 62                	push   0x62
  5b732b:	e8 f0 7e 01 00       	call   0x5cf220
  5b7330:	8b 74 24 2c          	mov    esi,DWORD PTR [esp+0x2c]
  5b7334:	83 c4 18             	add    esp,0x18
  5b7337:	e9 b2 01 00 00       	jmp    0x5b74ee
  5b733c:	6a 01                	push   0x1
  5b733e:	ba e0 94 6a 00       	mov    edx,0x6a94e0
  5b7343:	8b cf                	mov    ecx,edi
  5b7345:	e8 b6 5e 01 00       	call   0x5cd200
  5b734a:	8b f0                	mov    esi,eax
  5b734c:	85 f6                	test   esi,esi
  5b734e:	75 24                	jne    0x5b7374
  5b7350:	50                   	push   eax
  5b7351:	68 70 3f 6b 00       	push   0x6b3f70
  5b7356:	68 2e 04 00 00       	push   0x42e
  5b735b:	68 ac 94 6a 00       	push   0x6a94ac
  5b7360:	68 70 3f 6b 00       	push   0x6b3f70
  5b7365:	6a 62                	push   0x62
  5b7367:	e8 b4 7e 01 00       	call   0x5cf220
  5b736c:	83 c4 18             	add    esp,0x18
  5b736f:	e9 7a 01 00 00       	jmp    0x5b74ee
  5b7374:	e8 07 fc ff ff       	call   0x5b6f80
  5b7379:	85 c0                	test   eax,eax
  5b737b:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5b737f:	75 24                	jne    0x5b73a5
  5b7381:	50                   	push   eax
  5b7382:	68 70 3f 6b 00       	push   0x6b3f70
  5b7387:	68 32 04 00 00       	push   0x432
  5b738c:	68 ac 94 6a 00       	push   0x6a94ac
  5b7391:	68 70 3f 6b 00       	push   0x6b3f70
  5b7396:	6a 60                	push   0x60
  5b7398:	e8 83 7e 01 00       	call   0x5cf220
  5b739d:	83 c4 18             	add    esp,0x18
  5b73a0:	e9 49 01 00 00       	jmp    0x5b74ee
  5b73a5:	8b d6                	mov    edx,esi
  5b73a7:	8b c8                	mov    ecx,eax
  5b73a9:	e8 82 01 00 00       	call   0x5b7530
  5b73ae:	85 c0                	test   eax,eax
  5b73b0:	75 24                	jne    0x5b73d6
  5b73b2:	50                   	push   eax
  5b73b3:	68 70 3f 6b 00       	push   0x6b3f70
  5b73b8:	68 35 04 00 00       	push   0x435
  5b73bd:	68 ac 94 6a 00       	push   0x6a94ac
  5b73c2:	68 70 3f 6b 00       	push   0x6b3f70
  5b73c7:	6a 62                	push   0x62
  5b73c9:	e8 52 7e 01 00       	call   0x5cf220
  5b73ce:	83 c4 18             	add    esp,0x18
  5b73d1:	e9 18 01 00 00       	jmp    0x5b74ee
  5b73d6:	8b ce                	mov    ecx,esi
  5b73d8:	e8 43 5f 01 00       	call   0x5cd320
  5b73dd:	ba d8 94 6a 00       	mov    edx,0x6a94d8
  5b73e2:	8b cf                	mov    ecx,edi
  5b73e4:	6a 09                	push   0x9
  5b73e6:	e8 15 5e 01 00       	call   0x5cd200
  5b73eb:	85 c0                	test   eax,eax
  5b73ed:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5b73f1:	75 24                	jne    0x5b7417
  5b73f3:	50                   	push   eax
  5b73f4:	68 70 3f 6b 00       	push   0x6b3f70
  5b73f9:	68 3b 04 00 00       	push   0x43b
  5b73fe:	68 ac 94 6a 00       	push   0x6a94ac
  5b7403:	68 70 3f 6b 00       	push   0x6b3f70
  5b7408:	6a 62                	push   0x62
  5b740a:	e8 11 7e 01 00       	call   0x5cf220
  5b740f:	83 c4 18             	add    esp,0x18
  5b7412:	e9 d7 00 00 00       	jmp    0x5b74ee
  5b7417:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b741b:	33 db                	xor    ebx,ebx
  5b741d:	66 39 58 34          	cmp    WORD PTR [eax+0x34],bx
  5b7421:	7e 6c                	jle    0x5b748f
  5b7423:	33 ed                	xor    ebp,ebp
  5b7425:	8b 78 38             	mov    edi,DWORD PTR [eax+0x38]
  5b7428:	03 fd                	add    edi,ebp
  5b742a:	83 3f 00             	cmp    DWORD PTR [edi],0x0
  5b742d:	74 50                	je     0x5b747f
  5b742f:	53                   	push   ebx
  5b7430:	8d 44 24 20          	lea    eax,[esp+0x20]
  5b7434:	68 18 08 69 00       	push   0x690818
  5b7439:	50                   	push   eax
  5b743a:	e8 49 61 05 00       	call   0x60d588
  5b743f:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  5b7443:	83 c4 0c             	add    esp,0xc
  5b7446:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5b744a:	6a 01                	push   0x1
  5b744c:	e8 af 5d 01 00       	call   0x5cd200
  5b7451:	8b f0                	mov    esi,eax
  5b7453:	85 f6                	test   esi,esi
  5b7455:	74 57                	je     0x5b74ae
  5b7457:	8b ce                	mov    ecx,esi
  5b7459:	e8 62 cd 00 00       	call   0x5c41c0
  5b745e:	85 c0                	test   eax,eax
  5b7460:	89 07                	mov    DWORD PTR [edi],eax
  5b7462:	74 58                	je     0x5b74bc
  5b7464:	ba 04 00 00 00       	mov    edx,0x4
  5b7469:	8b c8                	mov    ecx,eax
  5b746b:	e8 60 bd 00 00       	call   0x5c31d0
  5b7470:	85 c0                	test   eax,eax
  5b7472:	74 56                	je     0x5b74ca
  5b7474:	8b ce                	mov    ecx,esi
  5b7476:	e8 a5 5e 01 00       	call   0x5cd320
  5b747b:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b747f:	0f bf 48 34          	movsx  ecx,WORD PTR [eax+0x34]
  5b7483:	43                   	inc    ebx
  5b7484:	83 c5 10             	add    ebp,0x10
  5b7487:	3b d9                	cmp    ebx,ecx
  5b7489:	7c 9a                	jl     0x5b7425
  5b748b:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  5b748f:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5b7493:	e8 88 5e 01 00       	call   0x5cd320
  5b7498:	8b cf                	mov    ecx,edi
  5b749a:	e8 81 5e 01 00       	call   0x5cd320
  5b749f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b74a3:	5f                   	pop    edi
  5b74a4:	5e                   	pop    esi
  5b74a5:	5d                   	pop    ebp
  5b74a6:	5b                   	pop    ebx
  5b74a7:	81 c4 f4 03 00 00    	add    esp,0x3f4
  5b74ad:	c3                   	ret
  5b74ae:	6a 00                	push   0x0
  5b74b0:	68 70 3f 6b 00       	push   0x6b3f70
  5b74b5:	68 49 04 00 00       	push   0x449
  5b74ba:	eb 1a                	jmp    0x5b74d6
  5b74bc:	6a 00                	push   0x0
  5b74be:	68 70 3f 6b 00       	push   0x6b3f70
  5b74c3:	68 4e 04 00 00       	push   0x44e
  5b74c8:	eb 0c                	jmp    0x5b74d6
  5b74ca:	6a 00                	push   0x0
  5b74cc:	68 70 3f 6b 00       	push   0x6b3f70
  5b74d1:	68 54 04 00 00       	push   0x454
  5b74d6:	68 ac 94 6a 00       	push   0x6a94ac
  5b74db:	68 70 3f 6b 00       	push   0x6b3f70
  5b74e0:	6a 62                	push   0x62
  5b74e2:	e8 39 7d 01 00       	call   0x5cf220
  5b74e7:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  5b74eb:	83 c4 18             	add    esp,0x18
  5b74ee:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5b74f2:	e8 29 fb ff ff       	call   0x5b7020
  5b74f7:	85 f6                	test   esi,esi
  5b74f9:	74 07                	je     0x5b7502
  5b74fb:	8b ce                	mov    ecx,esi
  5b74fd:	e8 1e 5e 01 00       	call   0x5cd320
  5b7502:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5b7506:	85 c9                	test   ecx,ecx
  5b7508:	74 05                	je     0x5b750f
  5b750a:	e8 11 5e 01 00       	call   0x5cd320
  5b750f:	85 ff                	test   edi,edi
  5b7511:	74 07                	je     0x5b751a
  5b7513:	8b cf                	mov    ecx,edi
  5b7515:	e8 06 5e 01 00       	call   0x5cd320
  5b751a:	5f                   	pop    edi
  5b751b:	5e                   	pop    esi
  5b751c:	5d                   	pop    ebp
  5b751d:	33 c0                	xor    eax,eax
  5b751f:	5b                   	pop    ebx
  5b7520:	81 c4 f4 03 00 00    	add    esp,0x3f4
  5b7526:	c3                   	ret
  5b7527:	90                   	nop
  5b7528:	90                   	nop
  5b7529:	90                   	nop
  5b752a:	90                   	nop
  5b752b:	90                   	nop
  5b752c:	90                   	nop
  5b752d:	90                   	nop
  5b752e:	90                   	nop
  5b752f:	90                   	nop
