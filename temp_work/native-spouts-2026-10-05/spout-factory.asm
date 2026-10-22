  4673f0:	6a ff                	push   0xffffffff
  4673f2:	68 72 79 62 00       	push   0x627972
  4673f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4673fd:	50                   	push   eax
  4673fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  467405:	83 ec 60             	sub    esp,0x60
  467408:	53                   	push   ebx
  467409:	55                   	push   ebp
  46740a:	56                   	push   esi
  46740b:	57                   	push   edi
  46740c:	33 ff                	xor    edi,edi
  46740e:	68 d4 16 00 00       	push   0x16d4
  467413:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  467417:	e8 99 2c 1a 00       	call   0x60a0b5
  46741c:	8b f0                	mov    esi,eax
  46741e:	83 c4 04             	add    esp,0x4
  467421:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  467425:	8b ac 24 80 00 00 00 	mov    ebp,DWORD PTR [esp+0x80]
  46742c:	3b f7                	cmp    esi,edi
  46742e:	89 7c 24 78          	mov    DWORD PTR [esp+0x78],edi
  467432:	74 33                	je     0x467467
  467434:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  467437:	68 c8 2b 69 00       	push   0x692bc8
  46743c:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  467440:	50                   	push   eax
  467441:	51                   	push   ecx
  467442:	e8 a9 bf 09 00       	call   0x5033f0
  467447:	83 c4 0c             	add    esp,0xc
  46744a:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
  467451:	00 
  467452:	55                   	push   ebp
  467453:	50                   	push   eax
  467454:	8b ce                	mov    ecx,esi
  467456:	c6 84 24 80 00 00 00 	mov    BYTE PTR [esp+0x80],0x1
  46745d:	01 
  46745e:	e8 2d f6 ff ff       	call   0x466a90
  467463:	8b d8                	mov    ebx,eax
  467465:	eb 02                	jmp    0x467469
  467467:	33 db                	xor    ebx,ebx
  467469:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  46746d:	83 ce ff             	or     esi,0xffffffff
  467470:	a8 01                	test   al,0x1
  467472:	89 74 24 78          	mov    DWORD PTR [esp+0x78],esi
  467476:	74 0b                	je     0x467483
  467478:	6a 01                	push   0x1
  46747a:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  46747e:	e8 1d cc f9 ff       	call   0x4040a0
  467483:	39 7d 68             	cmp    DWORD PTR [ebp+0x68],edi
  467486:	74 05                	je     0x46748d
  467488:	39 7d 6c             	cmp    DWORD PTR [ebp+0x6c],edi
  46748b:	75 63                	jne    0x4674f0
  46748d:	8a 94 24 80 00 00 00 	mov    dl,BYTE PTR [esp+0x80]
  467494:	57                   	push   edi
  467495:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467499:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  46749d:	e8 fe cb f9 ff       	call   0x4040a0
  4674a2:	bf 80 2b 69 00       	mov    edi,0x692b80
  4674a7:	8b ce                	mov    ecx,esi
  4674a9:	33 c0                	xor    eax,eax
  4674ab:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4674ad:	f7 d1                	not    ecx
  4674af:	49                   	dec    ecx
  4674b0:	51                   	push   ecx
  4674b1:	68 80 2b 69 00       	push   0x692b80
  4674b6:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4674ba:	e8 31 cc f9 ff       	call   0x4040f0
  4674bf:	8d 44 24 40          	lea    eax,[esp+0x40]
  4674c3:	8b cb                	mov    ecx,ebx
  4674c5:	50                   	push   eax
  4674c6:	c7 44 24 7c 03 00 00 	mov    DWORD PTR [esp+0x7c],0x3
  4674cd:	00 
  4674ce:	e8 cd c0 09 00       	call   0x5035a0
  4674d3:	6a 01                	push   0x1
  4674d5:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4674d9:	89 74 24 7c          	mov    DWORD PTR [esp+0x7c],esi
  4674dd:	e8 be cb f9 ff       	call   0x4040a0
  4674e2:	c7 45 68 74 2b 69 00 	mov    DWORD PTR [ebp+0x68],0x692b74
  4674e9:	c7 45 6c 68 2b 69 00 	mov    DWORD PTR [ebp+0x6c],0x692b68
  4674f0:	8a 8c 24 80 00 00 00 	mov    cl,BYTE PTR [esp+0x80]
  4674f7:	8b 75 68             	mov    esi,DWORD PTR [ebp+0x68]
  4674fa:	88 4c 24 50          	mov    BYTE PTR [esp+0x50],cl
  4674fe:	6a 00                	push   0x0
  467500:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  467504:	e8 97 cb f9 ff       	call   0x4040a0
  467509:	8b fe                	mov    edi,esi
  46750b:	83 c9 ff             	or     ecx,0xffffffff
  46750e:	33 c0                	xor    eax,eax
  467510:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467512:	f7 d1                	not    ecx
  467514:	49                   	dec    ecx
  467515:	51                   	push   ecx
  467516:	56                   	push   esi
  467517:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  46751b:	e8 d0 cb f9 ff       	call   0x4040f0
  467520:	8a 94 24 80 00 00 00 	mov    dl,BYTE PTR [esp+0x80]
  467527:	8b 75 6c             	mov    esi,DWORD PTR [ebp+0x6c]
  46752a:	6a 00                	push   0x0
  46752c:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  467530:	c7 44 24 7c 04 00 00 	mov    DWORD PTR [esp+0x7c],0x4
  467537:	00 
  467538:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  46753c:	e8 5f cb f9 ff       	call   0x4040a0
  467541:	8b fe                	mov    edi,esi
  467543:	83 c9 ff             	or     ecx,0xffffffff
  467546:	33 c0                	xor    eax,eax
  467548:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46754a:	f7 d1                	not    ecx
  46754c:	49                   	dec    ecx
  46754d:	51                   	push   ecx
  46754e:	56                   	push   esi
  46754f:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  467553:	e8 98 cb f9 ff       	call   0x4040f0
  467558:	33 c0                	xor    eax,eax
  46755a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  46755e:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  467562:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  467568:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  46756d:	3b f0                	cmp    esi,eax
  46756f:	75 07                	jne    0x467578
  467571:	e8 0a 3d 0f 00       	call   0x55b280
  467576:	8b f0                	mov    esi,eax
  467578:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  46757e:	85 c0                	test   eax,eax
  467580:	75 49                	jne    0x4675cb
  467582:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
  467589:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  46758d:	50                   	push   eax
  46758e:	68 70 3f 6b 00       	push   0x6b3f70
  467593:	e8 78 22 fa ff       	call   0x409810
  467598:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  46759c:	c6 44 24 78 08       	mov    BYTE PTR [esp+0x78],0x8
  4675a1:	51                   	push   ecx
  4675a2:	68 88 01 00 00       	push   0x188
  4675a7:	68 58 eb 68 00       	push   0x68eb58
  4675ac:	68 4c eb 68 00       	push   0x68eb4c
  4675b1:	e8 3a 92 13 00       	call   0x5a07f0
  4675b6:	ff d0                	call   eax
  4675b8:	83 c4 10             	add    esp,0x10
  4675bb:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4675bf:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  4675c4:	6a 01                	push   0x1
  4675c6:	e8 d5 ca f9 ff       	call   0x4040a0
  4675cb:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4675d1:	8d 54 24 50          	lea    edx,[esp+0x50]
  4675d5:	8d 44 24 18          	lea    eax,[esp+0x18]
  4675d9:	52                   	push   edx
  4675da:	50                   	push   eax
  4675db:	e8 a0 63 0a 00       	call   0x50d980
  4675e0:	8b f0                	mov    esi,eax
  4675e2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4675e6:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4675e8:	3b c1                	cmp    eax,ecx
  4675ea:	c6 44 24 78 09       	mov    BYTE PTR [esp+0x78],0x9
  4675ef:	74 2b                	je     0x46761c
  4675f1:	85 c0                	test   eax,eax
  4675f3:	74 18                	je     0x46760d
  4675f5:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  4675f8:	8b c8                	mov    ecx,eax
  4675fa:	83 c0 14             	add    eax,0x14
  4675fd:	4f                   	dec    edi
  4675fe:	8b d7                	mov    edx,edi
  467600:	85 d2                	test   edx,edx
  467602:	89 38                	mov    DWORD PTR [eax],edi
  467604:	75 07                	jne    0x46760d
  467606:	6a 00                	push   0x0
  467608:	e8 b3 49 14 00       	call   0x5abfc0
  46760d:	8b 0e                	mov    ecx,DWORD PTR [esi]
  46760f:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  467613:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  467617:	e8 94 ce 11 00       	call   0x5844b0
  46761c:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  467620:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  467625:	85 c9                	test   ecx,ecx
  467627:	74 05                	je     0x46762e
  467629:	e8 a2 22 fa ff       	call   0x4098d0
  46762e:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  467632:	85 c0                	test   eax,eax
  467634:	0f 86 cb 00 00 00    	jbe    0x467705
  46763a:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  467640:	85 f6                	test   esi,esi
  467642:	75 07                	jne    0x46764b
  467644:	e8 37 3c 0f 00       	call   0x55b280
  467649:	8b f0                	mov    esi,eax
  46764b:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  467651:	85 c0                	test   eax,eax
  467653:	75 49                	jne    0x46769e
  467655:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  46765c:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  467660:	52                   	push   edx
  467661:	68 70 3f 6b 00       	push   0x6b3f70
  467666:	e8 a5 21 fa ff       	call   0x409810
  46766b:	8d 44 24 40          	lea    eax,[esp+0x40]
  46766f:	c6 44 24 78 0a       	mov    BYTE PTR [esp+0x78],0xa
  467674:	50                   	push   eax
  467675:	68 88 01 00 00       	push   0x188
  46767a:	68 58 eb 68 00       	push   0x68eb58
  46767f:	68 4c eb 68 00       	push   0x68eb4c
  467684:	e8 67 91 13 00       	call   0x5a07f0
  467689:	ff d0                	call   eax
  46768b:	83 c4 10             	add    esp,0x10
  46768e:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  467692:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  467697:	6a 01                	push   0x1
  467699:	e8 02 ca f9 ff       	call   0x4040a0
  46769e:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  4676a4:	8d 54 24 30          	lea    edx,[esp+0x30]
  4676a8:	8d 44 24 18          	lea    eax,[esp+0x18]
  4676ac:	52                   	push   edx
  4676ad:	50                   	push   eax
  4676ae:	e8 cd 62 0a 00       	call   0x50d980
  4676b3:	8b f0                	mov    esi,eax
  4676b5:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4676b9:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4676bb:	3b c1                	cmp    eax,ecx
  4676bd:	c6 44 24 78 0b       	mov    BYTE PTR [esp+0x78],0xb
  4676c2:	74 2f                	je     0x4676f3
  4676c4:	85 c0                	test   eax,eax
  4676c6:	74 18                	je     0x4676e0
  4676c8:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  4676cb:	8b c8                	mov    ecx,eax
  4676cd:	83 c0 14             	add    eax,0x14
  4676d0:	4f                   	dec    edi
  4676d1:	8b d7                	mov    edx,edi
  4676d3:	85 d2                	test   edx,edx
  4676d5:	89 38                	mov    DWORD PTR [eax],edi
  4676d7:	75 07                	jne    0x4676e0
  4676d9:	6a 00                	push   0x0
  4676db:	e8 e0 48 14 00       	call   0x5abfc0
  4676e0:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4676e2:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  4676e6:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4676ea:	e8 c1 cd 11 00       	call   0x5844b0
  4676ef:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4676f3:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4676f7:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  4676fc:	85 c9                	test   ecx,ecx
  4676fe:	74 09                	je     0x467709
  467700:	e8 cb 21 fa ff       	call   0x4098d0
  467705:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  467709:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  46770d:	85 c9                	test   ecx,ecx
  46770f:	74 30                	je     0x467741
  467711:	85 c0                	test   eax,eax
  467713:	74 2c                	je     0x467741
  467715:	51                   	push   ecx
  467716:	8b cc                	mov    ecx,esp
  467718:	89 a4 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],esp
  46771f:	89 01                	mov    DWORD PTR [ecx],eax
  467721:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  467725:	85 c0                	test   eax,eax
  467727:	74 03                	je     0x46772c
  467729:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  46772c:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  467730:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467735:	e8 a6 b6 fa ff       	call   0x412de0
  46773a:	8b c8                	mov    ecx,eax
  46773c:	e8 5f 37 0a 00       	call   0x50aea0
  467741:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  467747:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  46774b:	8d b3 fc 00 00 00    	lea    esi,[ebx+0xfc]
  467751:	3b c8                	cmp    ecx,eax
  467753:	74 21                	je     0x467776
  467755:	85 c9                	test   ecx,ecx
  467757:	74 10                	je     0x467769
  467759:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  46775c:	48                   	dec    eax
  46775d:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  467760:	75 07                	jne    0x467769
  467762:	6a 00                	push   0x0
  467764:	e8 57 48 14 00       	call   0x5abfc0
  467769:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  46776d:	8b ce                	mov    ecx,esi
  46776f:	89 16                	mov    DWORD PTR [esi],edx
  467771:	e8 3a cd 11 00       	call   0x5844b0
  467776:	8a 84 24 80 00 00 00 	mov    al,BYTE PTR [esp+0x80]
  46777d:	8b 75 00             	mov    esi,DWORD PTR [ebp+0x0]
  467780:	6a 00                	push   0x0
  467782:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467786:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  46778a:	e8 11 c9 f9 ff       	call   0x4040a0
  46778f:	85 f6                	test   esi,esi
  467791:	c6 44 24 78 0d       	mov    BYTE PTR [esp+0x78],0xd
  467796:	75 17                	jne    0x4677af
  467798:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  46779d:	83 c9 ff             	or     ecx,0xffffffff
  4677a0:	33 c0                	xor    eax,eax
  4677a2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4677a4:	f7 d1                	not    ecx
  4677a6:	49                   	dec    ecx
  4677a7:	51                   	push   ecx
  4677a8:	68 70 3f 6b 00       	push   0x6b3f70
  4677ad:	eb 0e                	jmp    0x4677bd
  4677af:	8b fe                	mov    edi,esi
  4677b1:	83 c9 ff             	or     ecx,0xffffffff
  4677b4:	33 c0                	xor    eax,eax
  4677b6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4677b8:	f7 d1                	not    ecx
  4677ba:	49                   	dec    ecx
  4677bb:	51                   	push   ecx
  4677bc:	56                   	push   esi
  4677bd:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4677c1:	e8 2a c9 f9 ff       	call   0x4040f0
  4677c6:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4677ca:	51                   	push   ecx
  4677cb:	8b cb                	mov    ecx,ebx
  4677cd:	e8 0e c3 09 00       	call   0x503ae0
  4677d2:	6a 01                	push   0x1
  4677d4:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4677d8:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  4677dd:	e8 be c8 f9 ff       	call   0x4040a0
  4677e2:	8a 94 24 80 00 00 00 	mov    dl,BYTE PTR [esp+0x80]
  4677e9:	8b 75 04             	mov    esi,DWORD PTR [ebp+0x4]
  4677ec:	6a 00                	push   0x0
  4677ee:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4677f2:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  4677f6:	e8 a5 c8 f9 ff       	call   0x4040a0
  4677fb:	85 f6                	test   esi,esi
  4677fd:	c6 44 24 78 0e       	mov    BYTE PTR [esp+0x78],0xe
  467802:	74 17                	je     0x46781b
  467804:	8b fe                	mov    edi,esi
  467806:	83 c9 ff             	or     ecx,0xffffffff
  467809:	33 c0                	xor    eax,eax
  46780b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46780d:	f7 d1                	not    ecx
  46780f:	49                   	dec    ecx
  467810:	51                   	push   ecx
  467811:	56                   	push   esi
  467812:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  467816:	e8 d5 c8 f9 ff       	call   0x4040f0
  46781b:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  467820:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  467824:	50                   	push   eax
  467825:	6a 00                	push   0x0
  467827:	51                   	push   ecx
  467828:	8d 8b 90 00 00 00    	lea    ecx,[ebx+0x90]
  46782e:	e8 cd 53 fa ff       	call   0x40cc00
  467833:	6a 01                	push   0x1
  467835:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467839:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  46783e:	e8 5d c8 f9 ff       	call   0x4040a0
  467843:	8b 7d 44             	mov    edi,DWORD PTR [ebp+0x44]
  467846:	8b cb                	mov    ecx,ebx
  467848:	85 ff                	test   edi,edi
  46784a:	0f 95 c2             	setne  dl
  46784d:	52                   	push   edx
  46784e:	e8 fd aa 09 00       	call   0x502350
  467853:	8a 43 7c             	mov    al,BYTE PTR [ebx+0x7c]
  467856:	84 c0                	test   al,al
  467858:	0f 84 e5 00 00 00    	je     0x467943
  46785e:	8b bb b0 14 00 00    	mov    edi,DWORD PTR [ebx+0x14b0]
  467864:	83 ce ff             	or     esi,0xffffffff
  467867:	3b fe                	cmp    edi,esi
  467869:	74 4a                	je     0x4678b5
  46786b:	85 ff                	test   edi,edi
  46786d:	7d 46                	jge    0x4678b5
  46786f:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
  467876:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  46787a:	50                   	push   eax
  46787b:	68 70 3f 6b 00       	push   0x6b3f70
  467880:	e8 8b 1f fa ff       	call   0x409810
  467885:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  467889:	c6 44 24 78 0f       	mov    BYTE PTR [esp+0x78],0xf
  46788e:	51                   	push   ecx
  46788f:	6a 56                	push   0x56
  467891:	68 c8 d4 68 00       	push   0x68d4c8
  467896:	68 90 d4 68 00       	push   0x68d490
  46789b:	e8 50 8f 13 00       	call   0x5a07f0
  4678a0:	ff d0                	call   eax
  4678a2:	83 c4 10             	add    esp,0x10
  4678a5:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4678a9:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  4678ae:	6a 01                	push   0x1
  4678b0:	e8 eb c7 f9 ff       	call   0x4040a0
  4678b5:	89 bb 80 16 00 00    	mov    DWORD PTR [ebx+0x1680],edi
  4678bb:	89 b3 84 16 00 00    	mov    DWORD PTR [ebx+0x1684],esi
  4678c1:	c7 83 88 16 00 00 00 	mov    DWORD PTR [ebx+0x1688],0x3f800000
  4678c8:	00 80 3f 
  4678cb:	c6 83 8c 16 00 00 01 	mov    BYTE PTR [ebx+0x168c],0x1
  4678d2:	8b bb ac 16 00 00    	mov    edi,DWORD PTR [ebx+0x16ac]
  4678d8:	3b fe                	cmp    edi,esi
  4678da:	74 4a                	je     0x467926
  4678dc:	85 ff                	test   edi,edi
  4678de:	7d 46                	jge    0x467926
  4678e0:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  4678e7:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4678eb:	52                   	push   edx
  4678ec:	68 70 3f 6b 00       	push   0x6b3f70
  4678f1:	e8 1a 1f fa ff       	call   0x409810
  4678f6:	8d 44 24 40          	lea    eax,[esp+0x40]
  4678fa:	c6 44 24 78 10       	mov    BYTE PTR [esp+0x78],0x10
  4678ff:	50                   	push   eax
  467900:	6a 56                	push   0x56
  467902:	68 c8 d4 68 00       	push   0x68d4c8
  467907:	68 90 d4 68 00       	push   0x68d490
  46790c:	e8 df 8e 13 00       	call   0x5a07f0
  467911:	ff d0                	call   eax
  467913:	83 c4 10             	add    esp,0x10
  467916:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  46791a:	c6 44 24 78 07       	mov    BYTE PTR [esp+0x78],0x7
  46791f:	6a 01                	push   0x1
  467921:	e8 7a c7 f9 ff       	call   0x4040a0
  467926:	89 bb 90 16 00 00    	mov    DWORD PTR [ebx+0x1690],edi
  46792c:	89 b3 94 16 00 00    	mov    DWORD PTR [ebx+0x1694],esi
  467932:	c7 83 98 16 00 00 00 	mov    DWORD PTR [ebx+0x1698],0x3f800000
  467939:	00 80 3f 
  46793c:	c6 83 9c 16 00 00 01 	mov    BYTE PTR [ebx+0x169c],0x1
  467943:	d9 45 38             	fld    DWORD PTR [ebp+0x38]
  467946:	d8 5d 34             	fcomp  DWORD PTR [ebp+0x34]
  467949:	df e0                	fnstsw ax
  46794b:	f6 c4 01             	test   ah,0x1
  46794e:	75 10                	jne    0x467960
  467950:	d9 45 34             	fld    DWORD PTR [ebp+0x34]
  467953:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467959:	df e0                	fnstsw ax
  46795b:	f6 c4 01             	test   ah,0x1
  46795e:	74 63                	je     0x4679c3
  467960:	8a 8c 24 80 00 00 00 	mov    cl,BYTE PTR [esp+0x80]
  467967:	6a 00                	push   0x0
  467969:	88 4c 24 44          	mov    BYTE PTR [esp+0x44],cl
  46796d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467971:	e8 2a c7 f9 ff       	call   0x4040a0
  467976:	bf 24 2b 69 00       	mov    edi,0x692b24
  46797b:	83 c9 ff             	or     ecx,0xffffffff
  46797e:	33 c0                	xor    eax,eax
  467980:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467982:	f7 d1                	not    ecx
  467984:	49                   	dec    ecx
  467985:	51                   	push   ecx
  467986:	68 24 2b 69 00       	push   0x692b24
  46798b:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  46798f:	e8 5c c7 f9 ff       	call   0x4040f0
  467994:	8d 54 24 40          	lea    edx,[esp+0x40]
  467998:	8b cb                	mov    ecx,ebx
  46799a:	52                   	push   edx
  46799b:	c6 44 24 7c 11       	mov    BYTE PTR [esp+0x7c],0x11
  4679a0:	e8 fb bb 09 00       	call   0x5035a0
  4679a5:	6a 01                	push   0x1
  4679a7:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4679ab:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  4679b0:	e8 eb c6 f9 ff       	call   0x4040a0
  4679b5:	c7 45 34 00 00 00 3f 	mov    DWORD PTR [ebp+0x34],0x3f000000
  4679bc:	c7 45 38 00 00 80 3f 	mov    DWORD PTR [ebp+0x38],0x3f800000
  4679c3:	d9 45 40             	fld    DWORD PTR [ebp+0x40]
  4679c6:	d8 5d 3c             	fcomp  DWORD PTR [ebp+0x3c]
  4679c9:	df e0                	fnstsw ax
  4679cb:	f6 c4 01             	test   ah,0x1
  4679ce:	75 10                	jne    0x4679e0
  4679d0:	d9 45 3c             	fld    DWORD PTR [ebp+0x3c]
  4679d3:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4679d9:	df e0                	fnstsw ax
  4679db:	f6 c4 01             	test   ah,0x1
  4679de:	74 63                	je     0x467a43
  4679e0:	8a 84 24 80 00 00 00 	mov    al,BYTE PTR [esp+0x80]
  4679e7:	6a 00                	push   0x0
  4679e9:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4679ed:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  4679f1:	e8 aa c6 f9 ff       	call   0x4040a0
  4679f6:	bf 24 2b 69 00       	mov    edi,0x692b24
  4679fb:	83 c9 ff             	or     ecx,0xffffffff
  4679fe:	33 c0                	xor    eax,eax
  467a00:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467a02:	f7 d1                	not    ecx
  467a04:	49                   	dec    ecx
  467a05:	51                   	push   ecx
  467a06:	68 24 2b 69 00       	push   0x692b24
  467a0b:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  467a0f:	e8 dc c6 f9 ff       	call   0x4040f0
  467a14:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  467a18:	c6 44 24 78 12       	mov    BYTE PTR [esp+0x78],0x12
  467a1d:	51                   	push   ecx
  467a1e:	8b cb                	mov    ecx,ebx
  467a20:	e8 7b bb 09 00       	call   0x5035a0
  467a25:	6a 01                	push   0x1
  467a27:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467a2b:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467a30:	e8 6b c6 f9 ff       	call   0x4040a0
  467a35:	c7 45 3c 00 00 00 40 	mov    DWORD PTR [ebp+0x3c],0x40000000
  467a3c:	c7 45 40 00 00 40 40 	mov    DWORD PTR [ebp+0x40],0x40400000
  467a43:	d9 45 48             	fld    DWORD PTR [ebp+0x48]
  467a46:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467a4c:	df e0                	fnstsw ax
  467a4e:	f6 c4 41             	test   ah,0x41
  467a51:	74 5c                	je     0x467aaf
  467a53:	8a 94 24 80 00 00 00 	mov    dl,BYTE PTR [esp+0x80]
  467a5a:	6a 00                	push   0x0
  467a5c:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467a60:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  467a64:	e8 37 c6 f9 ff       	call   0x4040a0
  467a69:	bf e8 2a 69 00       	mov    edi,0x692ae8
  467a6e:	83 c9 ff             	or     ecx,0xffffffff
  467a71:	33 c0                	xor    eax,eax
  467a73:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467a75:	f7 d1                	not    ecx
  467a77:	49                   	dec    ecx
  467a78:	51                   	push   ecx
  467a79:	68 e8 2a 69 00       	push   0x692ae8
  467a7e:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  467a82:	e8 69 c6 f9 ff       	call   0x4040f0
  467a87:	8d 44 24 40          	lea    eax,[esp+0x40]
  467a8b:	8b cb                	mov    ecx,ebx
  467a8d:	50                   	push   eax
  467a8e:	c6 44 24 7c 13       	mov    BYTE PTR [esp+0x7c],0x13
  467a93:	e8 08 bb 09 00       	call   0x5035a0
  467a98:	6a 01                	push   0x1
  467a9a:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467a9e:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467aa3:	e8 f8 c5 f9 ff       	call   0x4040a0
  467aa8:	c7 45 48 00 00 80 3f 	mov    DWORD PTR [ebp+0x48],0x3f800000
  467aaf:	d9 45 4c             	fld    DWORD PTR [ebp+0x4c]
  467ab2:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467ab8:	be 00 00 c8 42       	mov    esi,0x42c80000
  467abd:	df e0                	fnstsw ax
  467abf:	f6 c4 01             	test   ah,0x1
  467ac2:	75 30                	jne    0x467af4
  467ac4:	d9 45 4c             	fld    DWORD PTR [ebp+0x4c]
  467ac7:	d8 1d 78 be 64 00    	fcomp  DWORD PTR ds:0x64be78
  467acd:	df e0                	fnstsw ax
  467acf:	f6 c4 41             	test   ah,0x41
  467ad2:	74 20                	je     0x467af4
  467ad4:	d9 45 50             	fld    DWORD PTR [ebp+0x50]
  467ad7:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467add:	df e0                	fnstsw ax
  467adf:	f6 c4 01             	test   ah,0x1
  467ae2:	75 10                	jne    0x467af4
  467ae4:	d9 45 50             	fld    DWORD PTR [ebp+0x50]
  467ae7:	d8 1d 78 be 64 00    	fcomp  DWORD PTR ds:0x64be78
  467aed:	df e0                	fnstsw ax
  467aef:	f6 c4 41             	test   ah,0x41
  467af2:	75 5f                	jne    0x467b53
  467af4:	8a 8c 24 80 00 00 00 	mov    cl,BYTE PTR [esp+0x80]
  467afb:	6a 00                	push   0x0
  467afd:	88 4c 24 44          	mov    BYTE PTR [esp+0x44],cl
  467b01:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467b05:	e8 96 c5 f9 ff       	call   0x4040a0
  467b0a:	bf a4 2a 69 00       	mov    edi,0x692aa4
  467b0f:	83 c9 ff             	or     ecx,0xffffffff
  467b12:	33 c0                	xor    eax,eax
  467b14:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467b16:	f7 d1                	not    ecx
  467b18:	49                   	dec    ecx
  467b19:	51                   	push   ecx
  467b1a:	68 a4 2a 69 00       	push   0x692aa4
  467b1f:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  467b23:	e8 c8 c5 f9 ff       	call   0x4040f0
  467b28:	8d 54 24 40          	lea    edx,[esp+0x40]
  467b2c:	8b cb                	mov    ecx,ebx
  467b2e:	52                   	push   edx
  467b2f:	c6 44 24 7c 14       	mov    BYTE PTR [esp+0x7c],0x14
  467b34:	e8 67 ba 09 00       	call   0x5035a0
  467b39:	6a 01                	push   0x1
  467b3b:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467b3f:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467b44:	e8 57 c5 f9 ff       	call   0x4040a0
  467b49:	c7 45 4c 00 00 c8 41 	mov    DWORD PTR [ebp+0x4c],0x41c80000
  467b50:	89 75 50             	mov    DWORD PTR [ebp+0x50],esi
  467b53:	d9 45 54             	fld    DWORD PTR [ebp+0x54]
  467b56:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467b5c:	df e0                	fnstsw ax
  467b5e:	f6 c4 01             	test   ah,0x1
  467b61:	75 30                	jne    0x467b93
  467b63:	d9 45 54             	fld    DWORD PTR [ebp+0x54]
  467b66:	d8 1d 78 be 64 00    	fcomp  DWORD PTR ds:0x64be78
  467b6c:	df e0                	fnstsw ax
  467b6e:	f6 c4 41             	test   ah,0x41
  467b71:	74 20                	je     0x467b93
  467b73:	d9 45 58             	fld    DWORD PTR [ebp+0x58]
  467b76:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467b7c:	df e0                	fnstsw ax
  467b7e:	f6 c4 01             	test   ah,0x1
  467b81:	75 10                	jne    0x467b93
  467b83:	d9 45 58             	fld    DWORD PTR [ebp+0x58]
  467b86:	d8 1d 78 be 64 00    	fcomp  DWORD PTR ds:0x64be78
  467b8c:	df e0                	fnstsw ax
  467b8e:	f6 c4 41             	test   ah,0x41
  467b91:	75 5f                	jne    0x467bf2
  467b93:	8a 84 24 80 00 00 00 	mov    al,BYTE PTR [esp+0x80]
  467b9a:	6a 00                	push   0x0
  467b9c:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467ba0:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  467ba4:	e8 f7 c4 f9 ff       	call   0x4040a0
  467ba9:	bf 5c 2a 69 00       	mov    edi,0x692a5c
  467bae:	83 c9 ff             	or     ecx,0xffffffff
  467bb1:	33 c0                	xor    eax,eax
  467bb3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467bb5:	f7 d1                	not    ecx
  467bb7:	49                   	dec    ecx
  467bb8:	51                   	push   ecx
  467bb9:	68 5c 2a 69 00       	push   0x692a5c
  467bbe:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  467bc2:	e8 29 c5 f9 ff       	call   0x4040f0
  467bc7:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  467bcb:	c6 44 24 78 15       	mov    BYTE PTR [esp+0x78],0x15
  467bd0:	51                   	push   ecx
  467bd1:	8b cb                	mov    ecx,ebx
  467bd3:	e8 c8 b9 09 00       	call   0x5035a0
  467bd8:	6a 01                	push   0x1
  467bda:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467bde:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467be3:	e8 b8 c4 f9 ff       	call   0x4040a0
  467be8:	c7 45 54 00 00 c8 41 	mov    DWORD PTR [ebp+0x54],0x41c80000
  467bef:	89 75 58             	mov    DWORD PTR [ebp+0x58],esi
  467bf2:	d9 45 5c             	fld    DWORD PTR [ebp+0x5c]
  467bf5:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467bfb:	df e0                	fnstsw ax
  467bfd:	f6 c4 01             	test   ah,0x1
  467c00:	74 5c                	je     0x467c5e
  467c02:	8a 94 24 80 00 00 00 	mov    dl,BYTE PTR [esp+0x80]
  467c09:	6a 00                	push   0x0
  467c0b:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467c0f:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  467c13:	e8 88 c4 f9 ff       	call   0x4040a0
  467c18:	bf 18 2a 69 00       	mov    edi,0x692a18
  467c1d:	83 c9 ff             	or     ecx,0xffffffff
  467c20:	33 c0                	xor    eax,eax
  467c22:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467c24:	f7 d1                	not    ecx
  467c26:	49                   	dec    ecx
  467c27:	51                   	push   ecx
  467c28:	68 18 2a 69 00       	push   0x692a18
  467c2d:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  467c31:	e8 ba c4 f9 ff       	call   0x4040f0
  467c36:	8d 44 24 40          	lea    eax,[esp+0x40]
  467c3a:	8b cb                	mov    ecx,ebx
  467c3c:	50                   	push   eax
  467c3d:	c6 44 24 7c 16       	mov    BYTE PTR [esp+0x7c],0x16
  467c42:	e8 59 b9 09 00       	call   0x5035a0
  467c47:	6a 01                	push   0x1
  467c49:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  467c4d:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467c52:	e8 49 c4 f9 ff       	call   0x4040a0
  467c57:	c7 45 5c 00 00 40 40 	mov    DWORD PTR [ebp+0x5c],0x40400000
  467c5e:	d9 45 64             	fld    DWORD PTR [ebp+0x64]
  467c61:	d8 5d 60             	fcomp  DWORD PTR [ebp+0x60]
  467c64:	df e0                	fnstsw ax
  467c66:	f6 c4 01             	test   ah,0x1
  467c69:	75 24                	jne    0x467c8f
  467c6b:	d9 45 60             	fld    DWORD PTR [ebp+0x60]
  467c6e:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467c74:	df e0                	fnstsw ax
  467c76:	f6 c4 01             	test   ah,0x1
  467c79:	75 14                	jne    0x467c8f
  467c7b:	d9 45 64             	fld    DWORD PTR [ebp+0x64]
  467c7e:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467c84:	df e0                	fnstsw ax
  467c86:	f6 c4 01             	test   ah,0x1
  467c89:	0f 84 95 00 00 00    	je     0x467d24
  467c8f:	8a 8c 24 80 00 00 00 	mov    cl,BYTE PTR [esp+0x80]
  467c96:	6a 00                	push   0x0
  467c98:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  467c9c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467ca0:	e8 fb c3 f9 ff       	call   0x4040a0
  467ca5:	bf d4 29 69 00       	mov    edi,0x6929d4
  467caa:	83 c9 ff             	or     ecx,0xffffffff
  467cad:	33 c0                	xor    eax,eax
  467caf:	6a 01                	push   0x1
  467cb1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467cb3:	f7 d1                	not    ecx
  467cb5:	49                   	dec    ecx
  467cb6:	89 8c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ecx
  467cbd:	51                   	push   ecx
  467cbe:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  467cc2:	e8 79 9c f9 ff       	call   0x401940
  467cc7:	84 c0                	test   al,al
  467cc9:	74 2a                	je     0x467cf5
  467ccb:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
  467cd2:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  467cd6:	8b c8                	mov    ecx,eax
  467cd8:	be d4 29 69 00       	mov    esi,0x6929d4
  467cdd:	8b d1                	mov    edx,ecx
  467cdf:	50                   	push   eax
  467ce0:	c1 e9 02             	shr    ecx,0x2
  467ce3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  467ce5:	8b ca                	mov    ecx,edx
  467ce7:	83 e1 03             	and    ecx,0x3
  467cea:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  467cec:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467cf0:	e8 9b c4 f9 ff       	call   0x404190
  467cf5:	8d 44 24 20          	lea    eax,[esp+0x20]
  467cf9:	8b cb                	mov    ecx,ebx
  467cfb:	50                   	push   eax
  467cfc:	c6 44 24 7c 17       	mov    BYTE PTR [esp+0x7c],0x17
  467d01:	e8 9a b8 09 00       	call   0x5035a0
  467d06:	6a 01                	push   0x1
  467d08:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467d0c:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467d11:	e8 8a c3 f9 ff       	call   0x4040a0
  467d16:	c7 45 60 00 00 a0 40 	mov    DWORD PTR [ebp+0x60],0x40a00000
  467d1d:	c7 45 64 00 00 20 41 	mov    DWORD PTR [ebp+0x64],0x41200000
  467d24:	d9 45 74             	fld    DWORD PTR [ebp+0x74]
  467d27:	d8 5d 70             	fcomp  DWORD PTR [ebp+0x70]
  467d2a:	df e0                	fnstsw ax
  467d2c:	f6 c4 01             	test   ah,0x1
  467d2f:	75 44                	jne    0x467d75
  467d31:	d9 45 70             	fld    DWORD PTR [ebp+0x70]
  467d34:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467d3a:	df e0                	fnstsw ax
  467d3c:	f6 c4 01             	test   ah,0x1
  467d3f:	75 34                	jne    0x467d75
  467d41:	d9 45 74             	fld    DWORD PTR [ebp+0x74]
  467d44:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  467d4a:	df e0                	fnstsw ax
  467d4c:	f6 c4 01             	test   ah,0x1
  467d4f:	75 24                	jne    0x467d75
  467d51:	d9 45 70             	fld    DWORD PTR [ebp+0x70]
  467d54:	d8 1d 38 da 64 00    	fcomp  DWORD PTR ds:0x64da38
  467d5a:	df e0                	fnstsw ax
  467d5c:	f6 c4 01             	test   ah,0x1
  467d5f:	74 14                	je     0x467d75
  467d61:	d9 45 74             	fld    DWORD PTR [ebp+0x74]
  467d64:	d8 1d 38 da 64 00    	fcomp  DWORD PTR ds:0x64da38
  467d6a:	df e0                	fnstsw ax
  467d6c:	f6 c4 01             	test   ah,0x1
  467d6f:	0f 85 95 00 00 00    	jne    0x467e0a
  467d75:	8a 8c 24 80 00 00 00 	mov    cl,BYTE PTR [esp+0x80]
  467d7c:	6a 00                	push   0x0
  467d7e:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  467d82:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467d86:	e8 15 c3 f9 ff       	call   0x4040a0
  467d8b:	bf 90 29 69 00       	mov    edi,0x692990
  467d90:	83 c9 ff             	or     ecx,0xffffffff
  467d93:	33 c0                	xor    eax,eax
  467d95:	6a 01                	push   0x1
  467d97:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  467d99:	f7 d1                	not    ecx
  467d9b:	49                   	dec    ecx
  467d9c:	89 8c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ecx
  467da3:	51                   	push   ecx
  467da4:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  467da8:	e8 93 9b f9 ff       	call   0x401940
  467dad:	84 c0                	test   al,al
  467daf:	74 2a                	je     0x467ddb
  467db1:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
  467db8:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  467dbc:	8b c8                	mov    ecx,eax
  467dbe:	be 90 29 69 00       	mov    esi,0x692990
  467dc3:	8b d1                	mov    edx,ecx
  467dc5:	50                   	push   eax
  467dc6:	c1 e9 02             	shr    ecx,0x2
  467dc9:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  467dcb:	8b ca                	mov    ecx,edx
  467dcd:	83 e1 03             	and    ecx,0x3
  467dd0:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  467dd2:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467dd6:	e8 b5 c3 f9 ff       	call   0x404190
  467ddb:	8d 44 24 20          	lea    eax,[esp+0x20]
  467ddf:	8b cb                	mov    ecx,ebx
  467de1:	50                   	push   eax
  467de2:	c6 44 24 7c 18       	mov    BYTE PTR [esp+0x7c],0x18
  467de7:	e8 b4 b7 09 00       	call   0x5035a0
  467dec:	6a 01                	push   0x1
  467dee:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  467df2:	c6 44 24 7c 07       	mov    BYTE PTR [esp+0x7c],0x7
  467df7:	e8 a4 c2 f9 ff       	call   0x4040a0
  467dfc:	c7 45 70 00 00 00 00 	mov    DWORD PTR [ebp+0x70],0x0
  467e03:	c7 45 74 00 00 f0 41 	mov    DWORD PTR [ebp+0x74],0x41f00000
  467e0a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  467e0e:	33 f6                	xor    esi,esi
  467e10:	3b c6                	cmp    eax,esi
  467e12:	c6 44 24 78 06       	mov    BYTE PTR [esp+0x78],0x6
  467e17:	74 1b                	je     0x467e34
  467e19:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  467e1c:	8b c8                	mov    ecx,eax
  467e1e:	83 c0 14             	add    eax,0x14
  467e21:	4f                   	dec    edi
  467e22:	8b d7                	mov    edx,edi
  467e24:	3b d6                	cmp    edx,esi
  467e26:	89 38                	mov    DWORD PTR [eax],edi
  467e28:	75 06                	jne    0x467e30
  467e2a:	56                   	push   esi
  467e2b:	e8 90 41 14 00       	call   0x5abfc0
  467e30:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  467e34:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  467e38:	c6 44 24 78 05       	mov    BYTE PTR [esp+0x78],0x5
  467e3d:	3b c6                	cmp    eax,esi
  467e3f:	74 1b                	je     0x467e5c
  467e41:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  467e44:	8b c8                	mov    ecx,eax
  467e46:	83 c0 14             	add    eax,0x14
  467e49:	4f                   	dec    edi
  467e4a:	8b d7                	mov    edx,edi
  467e4c:	3b d6                	cmp    edx,esi
  467e4e:	89 38                	mov    DWORD PTR [eax],edi
  467e50:	75 06                	jne    0x467e58
  467e52:	56                   	push   esi
  467e53:	e8 68 41 14 00       	call   0x5abfc0
  467e58:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  467e5c:	6a 01                	push   0x1
  467e5e:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  467e62:	c6 44 24 7c 04       	mov    BYTE PTR [esp+0x7c],0x4
  467e67:	e8 34 c2 f9 ff       	call   0x4040a0
  467e6c:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  467e70:	3b ce                	cmp    ecx,esi
  467e72:	74 1c                	je     0x467e90
  467e74:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  467e77:	84 c0                	test   al,al
  467e79:	74 0b                	je     0x467e86
  467e7b:	3c ff                	cmp    al,0xff
  467e7d:	74 07                	je     0x467e86
  467e7f:	fe c8                	dec    al
  467e81:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  467e84:	eb 0a                	jmp    0x467e90
  467e86:	49                   	dec    ecx
  467e87:	51                   	push   ecx
  467e88:	e8 63 67 19 00       	call   0x5fe5f0
  467e8d:	83 c4 04             	add    esp,0x4
  467e90:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  467e94:	5f                   	pop    edi
  467e95:	5e                   	pop    esi
  467e96:	8b c3                	mov    eax,ebx
  467e98:	5d                   	pop    ebp
  467e99:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  467ea0:	5b                   	pop    ebx
  467ea1:	83 c4 6c             	add    esp,0x6c
  467ea4:	c3                   	ret
  467ea5:	90                   	nop
  467ea6:	90                   	nop
  467ea7:	90                   	nop
  467ea8:	90                   	nop
  467ea9:	90                   	nop
  467eaa:	90                   	nop
  467eab:	90                   	nop
  467eac:	90                   	nop
  467ead:	90                   	nop
  467eae:	90                   	nop
  467eaf:	90                   	nop
