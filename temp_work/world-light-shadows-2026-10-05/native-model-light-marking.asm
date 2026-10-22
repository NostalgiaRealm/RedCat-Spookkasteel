  5d34c0:	83 ec 1c             	sub    esp,0x1c
  5d34c3:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  5d34c7:	53                   	push   ebx
  5d34c8:	55                   	push   ebp
  5d34c9:	56                   	push   esi
  5d34ca:	57                   	push   edi
  5d34cb:	50                   	push   eax
  5d34cc:	e8 0f 01 00 00       	call   0x5d35e0
  5d34d1:	8b 0d d0 ef 6c 00    	mov    ecx,DWORD PTR ds:0x6cefd0
  5d34d7:	a1 cc ef 6c 00       	mov    eax,ds:0x6cefcc
  5d34dc:	83 c4 04             	add    esp,0x4
  5d34df:	81 c1 e4 03 00 00    	add    ecx,0x3e4
  5d34e5:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  5d34e9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5d34f0:	00 
  5d34f1:	8d 51 14             	lea    edx,[ecx+0x14]
  5d34f4:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  5d34f8:	8b 11                	mov    edx,DWORD PTR [ecx]
  5d34fa:	33 db                	xor    ebx,ebx
  5d34fc:	3b d3                	cmp    edx,ebx
  5d34fe:	0f 84 a0 00 00 00    	je     0x5d35a4
  5d3504:	8b 90 a0 00 00 00    	mov    edx,DWORD PTR [eax+0xa0]
  5d350a:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  5d350e:	3b d3                	cmp    edx,ebx
  5d3510:	0f 8e 8e 00 00 00    	jle    0x5d35a4
  5d3516:	8b 0d c4 ef 6c 00    	mov    ecx,DWORD PTR ds:0x6cefc4
  5d351c:	8d b1 70 02 00 00    	lea    esi,[ecx+0x270]
  5d3522:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  5d3526:	8b 56 18             	mov    edx,DWORD PTR [esi+0x18]
  5d3529:	8d 6e a0             	lea    ebp,[esi-0x60]
  5d352c:	3b 51 04             	cmp    edx,DWORD PTR [ecx+0x4]
  5d352f:	75 53                	jne    0x5d3584
  5d3531:	8b 50 48             	mov    edx,DWORD PTR [eax+0x48]
  5d3534:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5d3538:	8d 44 24 20          	lea    eax,[esp+0x20]
  5d353c:	8b 3c 1a             	mov    edi,DWORD PTR [edx+ebx*1]
  5d353f:	50                   	push   eax
  5d3540:	8b d6                	mov    edx,esi
  5d3542:	e8 99 fa fd ff       	call   0x5b2fe0
  5d3547:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5d354b:	8d 54 24 20          	lea    edx,[esp+0x20]
  5d354f:	51                   	push   ecx
  5d3550:	8b cd                	mov    ecx,ebp
  5d3552:	e8 d9 01 fe ff       	call   0x5b3730
  5d3557:	8d 54 24 20          	lea    edx,[esp+0x20]
  5d355b:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5d355f:	52                   	push   edx
  5d3560:	8b d6                	mov    edx,esi
  5d3562:	e8 99 fa fd ff       	call   0x5b3000
  5d3567:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5d356b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5d356f:	57                   	push   edi
  5d3570:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5d3574:	50                   	push   eax
  5d3575:	51                   	push   ecx
  5d3576:	52                   	push   edx
  5d3577:	e8 84 04 00 00       	call   0x5d3a00
  5d357c:	a1 cc ef 6c 00       	mov    eax,ds:0x6cefcc
  5d3581:	83 c4 10             	add    esp,0x10
  5d3584:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5d3588:	8b 90 a0 00 00 00    	mov    edx,DWORD PTR [eax+0xa0]
  5d358e:	41                   	inc    ecx
  5d358f:	83 c3 50             	add    ebx,0x50
  5d3592:	81 c6 d4 00 00 00    	add    esi,0xd4
  5d3598:	3b ca                	cmp    ecx,edx
  5d359a:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  5d359e:	7c 82                	jl     0x5d3522
  5d35a0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5d35a4:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  5d35a8:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  5d35ac:	42                   	inc    edx
  5d35ad:	83 c1 34             	add    ecx,0x34
  5d35b0:	83 c7 34             	add    edi,0x34
  5d35b3:	83 fa 20             	cmp    edx,0x20
  5d35b6:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5d35ba:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  5d35be:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
  5d35c2:	0f 8c 30 ff ff ff    	jl     0x5d34f8
  5d35c8:	5f                   	pop    edi
  5d35c9:	5e                   	pop    esi
  5d35ca:	5d                   	pop    ebp
  5d35cb:	b8 01 00 00 00       	mov    eax,0x1
  5d35d0:	5b                   	pop    ebx
  5d35d1:	83 c4 1c             	add    esp,0x1c
  5d35d4:	c3                   	ret
