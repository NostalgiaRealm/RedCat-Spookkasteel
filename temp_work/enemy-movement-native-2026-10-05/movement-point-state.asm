  59b450:	51                   	push   ecx
  59b451:	56                   	push   esi
  59b452:	8b f1                	mov    esi,ecx
  59b454:	8a 46 34             	mov    al,BYTE PTR [esi+0x34]
  59b457:	84 c0                	test   al,al
  59b459:	74 32                	je     0x59b48d
  59b45b:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
  59b45e:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59b461:	57                   	push   edi
  59b462:	8d 7e 30             	lea    edi,[esi+0x30]
  59b465:	6a ff                	push   0xffffffff
  59b467:	50                   	push   eax
  59b468:	e8 23 2b 00 00       	call   0x59df90
  59b46d:	8b c8                	mov    ecx,eax
  59b46f:	e8 0c d1 ff ff       	call   0x598580
  59b474:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  59b478:	c6 46 34 00          	mov    BYTE PTR [esi+0x34],0x0
  59b47c:	51                   	push   ecx
  59b47d:	8b cf                	mov    ecx,edi
  59b47f:	c7 44 24 0c ff ff ff 	mov    DWORD PTR [esp+0xc],0xffffffff
  59b486:	ff 
  59b487:	e8 44 fd ff ff       	call   0x59b1d0
  59b48c:	5f                   	pop    edi
  59b48d:	5e                   	pop    esi
  59b48e:	59                   	pop    ecx
  59b48f:	c3                   	ret
  59b490:	51                   	push   ecx
  59b491:	56                   	push   esi
  59b492:	8b f1                	mov    esi,ecx
  59b494:	57                   	push   edi
  59b495:	8d 7e 1c             	lea    edi,[esi+0x1c]
  59b498:	8b cf                	mov    ecx,edi
  59b49a:	e8 51 fd ff ff       	call   0x59b1f0
  59b49f:	84 c0                	test   al,al
  59b4a1:	74 1b                	je     0x59b4be
  59b4a3:	8a 46 2c             	mov    al,BYTE PTR [esi+0x2c]
  59b4a6:	84 c0                	test   al,al
  59b4a8:	75 14                	jne    0x59b4be
  59b4aa:	8b 07                	mov    eax,DWORD PTR [edi]
  59b4ac:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59b4af:	6a ff                	push   0xffffffff
  59b4b1:	50                   	push   eax
  59b4b2:	e8 d9 2a 00 00       	call   0x59df90
  59b4b7:	8b c8                	mov    ecx,eax
  59b4b9:	e8 c2 d0 ff ff       	call   0x598580
  59b4be:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  59b4c2:	c7 46 18 00 00 00 00 	mov    DWORD PTR [esi+0x18],0x0
  59b4c9:	51                   	push   ecx
  59b4ca:	8b cf                	mov    ecx,edi
  59b4cc:	c7 44 24 0c ff ff ff 	mov    DWORD PTR [esp+0xc],0xffffffff
  59b4d3:	ff 
  59b4d4:	e8 f7 fc ff ff       	call   0x59b1d0
  59b4d9:	c6 46 2c 00          	mov    BYTE PTR [esi+0x2c],0x0
  59b4dd:	5f                   	pop    edi
  59b4de:	5e                   	pop    esi
  59b4df:	59                   	pop    ecx
  59b4e0:	c3                   	ret
  59b4e1:	90                   	nop
  59b4e2:	90                   	nop
  59b4e3:	90                   	nop
  59b4e4:	90                   	nop
  59b4e5:	90                   	nop
  59b4e6:	90                   	nop
  59b4e7:	90                   	nop
  59b4e8:	90                   	nop
  59b4e9:	90                   	nop
  59b4ea:	90                   	nop
  59b4eb:	90                   	nop
  59b4ec:	90                   	nop
  59b4ed:	90                   	nop
  59b4ee:	90                   	nop
  59b4ef:	90                   	nop
  59b4f0:	6a ff                	push   0xffffffff
  59b4f2:	68 80 46 64 00       	push   0x644680
  59b4f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59b4fd:	50                   	push   eax
  59b4fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59b505:	83 ec 28             	sub    esp,0x28
  59b508:	53                   	push   ebx
  59b509:	55                   	push   ebp
  59b50a:	56                   	push   esi
  59b50b:	8b f1                	mov    esi,ecx
  59b50d:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  59b511:	57                   	push   edi
  59b512:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  59b516:	e8 d5 fc ff ff       	call   0x59b1f0
  59b51b:	33 db                	xor    ebx,ebx
  59b51d:	84 c0                	test   al,al
  59b51f:	0f 85 a8 00 00 00    	jne    0x59b5cd
  59b525:	8a 44 24 48          	mov    al,BYTE PTR [esp+0x48]
  59b529:	bf fc 70 6a 00       	mov    edi,0x6a70fc
  59b52e:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  59b532:	83 c9 ff             	or     ecx,0xffffffff
  59b535:	33 c0                	xor    eax,eax
  59b537:	6a 01                	push   0x1
  59b539:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59b53b:	f7 d1                	not    ecx
  59b53d:	49                   	dec    ecx
  59b53e:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  59b542:	8b e9                	mov    ebp,ecx
  59b544:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59b548:	55                   	push   ebp
  59b549:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  59b54d:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
  59b551:	e8 ea 63 e6 ff       	call   0x401940
  59b556:	84 c0                	test   al,al
  59b558:	74 27                	je     0x59b581
  59b55a:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  59b55e:	8b cd                	mov    ecx,ebp
  59b560:	8b d1                	mov    edx,ecx
  59b562:	be fc 70 6a 00       	mov    esi,0x6a70fc
  59b567:	c1 e9 02             	shr    ecx,0x2
  59b56a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59b56c:	8b ca                	mov    ecx,edx
  59b56e:	55                   	push   ebp
  59b56f:	83 e1 03             	and    ecx,0x3
  59b572:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59b574:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59b578:	e8 13 8c e6 ff       	call   0x404190
  59b57d:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  59b581:	8d 44 24 28          	lea    eax,[esp+0x28]
  59b585:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  59b589:	50                   	push   eax
  59b58a:	6a 4e                	push   0x4e
  59b58c:	68 c8 70 6a 00       	push   0x6a70c8
  59b591:	68 1c 6d 6a 00       	push   0x6a6d1c
  59b596:	e8 55 52 00 00       	call   0x5a07f0
  59b59b:	ff d0                	call   eax
  59b59d:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  59b5a1:	83 c4 10             	add    esp,0x10
  59b5a4:	3b c3                	cmp    eax,ebx
  59b5a6:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  59b5ad:	ff 
  59b5ae:	74 1d                	je     0x59b5cd
  59b5b0:	8d 48 ff             	lea    ecx,[eax-0x1]
  59b5b3:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59b5b6:	3a c3                	cmp    al,bl
  59b5b8:	74 0a                	je     0x59b5c4
  59b5ba:	3c ff                	cmp    al,0xff
  59b5bc:	74 06                	je     0x59b5c4
  59b5be:	fe c8                	dec    al
  59b5c0:	88 01                	mov    BYTE PTR [ecx],al
  59b5c2:	eb 09                	jmp    0x59b5cd
  59b5c4:	51                   	push   ecx
  59b5c5:	e8 26 30 06 00       	call   0x5fe5f0
  59b5ca:	83 c4 04             	add    esp,0x4
  59b5cd:	8b ce                	mov    ecx,esi
  59b5cf:	e8 7c fe ff ff       	call   0x59b450
  59b5d4:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  59b5d8:	8b 11                	mov    edx,DWORD PTR [ecx]
  59b5da:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59b5dd:	52                   	push   edx
  59b5de:	e8 ad 29 00 00       	call   0x59df90
  59b5e3:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  59b5e7:	8b f0                	mov    esi,eax
  59b5e9:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  59b5ed:	8d 4f 1c             	lea    ecx,[edi+0x1c]
  59b5f0:	e8 eb fb ff ff       	call   0x59b1e0
  59b5f5:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  59b5f9:	8b e8                	mov    ebp,eax
  59b5fb:	e8 e0 fb ff ff       	call   0x59b1e0
  59b600:	3b c5                	cmp    eax,ebp
  59b602:	0f 84 f4 00 00 00    	je     0x59b6fc
  59b608:	8b ce                	mov    ecx,esi
  59b60a:	e8 61 cf ff ff       	call   0x598570
  59b60f:	85 c0                	test   eax,eax
  59b611:	74 15                	je     0x59b628
  59b613:	8b ce                	mov    ecx,esi
  59b615:	e8 56 cf ff ff       	call   0x598570
  59b61a:	50                   	push   eax
  59b61b:	68 b0 70 6a 00       	push   0x6a70b0
  59b620:	e8 0b 48 01 00       	call   0x5afe30
  59b625:	83 c4 08             	add    esp,0x8
  59b628:	8b ce                	mov    ecx,esi
  59b62a:	e8 41 cf ff ff       	call   0x598570
  59b62f:	85 c0                	test   eax,eax
  59b631:	0f 84 bc 00 00 00    	je     0x59b6f3
  59b637:	8a 44 24 48          	mov    al,BYTE PTR [esp+0x48]
  59b63b:	bf 88 70 6a 00       	mov    edi,0x6a7088
  59b640:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  59b644:	83 c9 ff             	or     ecx,0xffffffff
  59b647:	33 c0                	xor    eax,eax
  59b649:	6a 01                	push   0x1
  59b64b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59b64d:	f7 d1                	not    ecx
  59b64f:	49                   	dec    ecx
  59b650:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59b654:	8b e9                	mov    ebp,ecx
  59b656:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59b65a:	55                   	push   ebp
  59b65b:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  59b65f:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  59b663:	e8 d8 62 e6 ff       	call   0x401940
  59b668:	84 c0                	test   al,al
  59b66a:	74 27                	je     0x59b693
  59b66c:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  59b670:	8b cd                	mov    ecx,ebp
  59b672:	8b d1                	mov    edx,ecx
  59b674:	be 88 70 6a 00       	mov    esi,0x6a7088
  59b679:	c1 e9 02             	shr    ecx,0x2
  59b67c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59b67e:	8b ca                	mov    ecx,edx
  59b680:	55                   	push   ebp
  59b681:	83 e1 03             	and    ecx,0x3
  59b684:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59b686:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59b68a:	e8 01 8b e6 ff       	call   0x404190
  59b68f:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  59b693:	8d 44 24 18          	lea    eax,[esp+0x18]
  59b697:	c7 44 24 40 01 00 00 	mov    DWORD PTR [esp+0x40],0x1
  59b69e:	00 
  59b69f:	50                   	push   eax
  59b6a0:	6a 5d                	push   0x5d
  59b6a2:	68 c8 70 6a 00       	push   0x6a70c8
  59b6a7:	68 5c 70 6a 00       	push   0x6a705c
  59b6ac:	e8 3f 51 00 00       	call   0x5a07f0
  59b6b1:	ff d0                	call   eax
  59b6b3:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  59b6b7:	83 c4 10             	add    esp,0x10
  59b6ba:	3b c3                	cmp    eax,ebx
  59b6bc:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  59b6c3:	ff 
  59b6c4:	74 1d                	je     0x59b6e3
  59b6c6:	8d 48 ff             	lea    ecx,[eax-0x1]
  59b6c9:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59b6cc:	3a c3                	cmp    al,bl
  59b6ce:	74 0a                	je     0x59b6da
  59b6d0:	3c ff                	cmp    al,0xff
  59b6d2:	74 06                	je     0x59b6da
  59b6d4:	fe c8                	dec    al
  59b6d6:	88 01                	mov    BYTE PTR [ecx],al
  59b6d8:	eb 09                	jmp    0x59b6e3
  59b6da:	51                   	push   ecx
  59b6db:	e8 10 2f 06 00       	call   0x5fe5f0
  59b6e0:	83 c4 04             	add    esp,0x4
  59b6e3:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  59b6e7:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  59b6eb:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59b6ef:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  59b6f3:	6a 01                	push   0x1
  59b6f5:	8b ce                	mov    ecx,esi
  59b6f7:	e8 84 ce ff ff       	call   0x598580
  59b6fc:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  59b700:	51                   	push   ecx
  59b701:	8d 4f 30             	lea    ecx,[edi+0x30]
  59b704:	e8 c7 fa ff ff       	call   0x59b1d0
  59b709:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  59b70d:	c6 47 34 01          	mov    BYTE PTR [edi+0x34],0x1
  59b711:	5f                   	pop    edi
  59b712:	5e                   	pop    esi
  59b713:	5d                   	pop    ebp
  59b714:	5b                   	pop    ebx
  59b715:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59b71c:	83 c4 34             	add    esp,0x34
  59b71f:	c2 04 00             	ret    0x4
  59b722:	90                   	nop
  59b723:	90                   	nop
  59b724:	90                   	nop
  59b725:	90                   	nop
  59b726:	90                   	nop
  59b727:	90                   	nop
  59b728:	90                   	nop
  59b729:	90                   	nop
  59b72a:	90                   	nop
  59b72b:	90                   	nop
  59b72c:	90                   	nop
  59b72d:	90                   	nop
  59b72e:	90                   	nop
  59b72f:	90                   	nop
