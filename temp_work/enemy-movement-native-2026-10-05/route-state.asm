
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005974d0 <.text+0x1964d0>:
  5974d0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5974d4:	56                   	push   esi
  5974d5:	8b f1                	mov    esi,ecx
  5974d7:	50                   	push   eax
  5974d8:	e8 b3 f9 ff ff       	call   0x596e90
  5974dd:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  5974e1:	c7 06 58 00 65 00    	mov    DWORD PTR [esi],0x650058
  5974e7:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
  5974ea:	8b c6                	mov    eax,esi
  5974ec:	5e                   	pop    esi
  5974ed:	c2 08 00             	ret    0x8
  5974f0:	56                   	push   esi
  5974f1:	8b f1                	mov    esi,ecx
  5974f3:	e8 18 00 00 00       	call   0x597510
  5974f8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  5974fd:	74 09                	je     0x597508
  5974ff:	56                   	push   esi
  597500:	e8 eb 70 06 00       	call   0x5fe5f0
  597505:	83 c4 04             	add    esp,0x4
  597508:	8b c6                	mov    eax,esi
  59750a:	5e                   	pop    esi
  59750b:	c2 04 00             	ret    0x4
  59750e:	90                   	nop
  59750f:	90                   	nop
  597510:	c7 01 58 00 65 00    	mov    DWORD PTR [ecx],0x650058
  597516:	e9 b5 f9 ff ff       	jmp    0x596ed0
  59751b:	90                   	nop
  59751c:	90                   	nop
  59751d:	90                   	nop
  59751e:	90                   	nop
  59751f:	90                   	nop
  597520:	83 ec 0c             	sub    esp,0xc
  597523:	8d 44 24 00          	lea    eax,[esp+0x0]
  597527:	56                   	push   esi
  597528:	8b f1                	mov    esi,ecx
  59752a:	57                   	push   edi
  59752b:	50                   	push   eax
  59752c:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59752f:	e8 9c e7 ff ff       	call   0x595cd0
  597534:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  597537:	8b f8                	mov    edi,eax
  597539:	e8 32 df ff ff       	call   0x595470
  59753e:	8b c8                	mov    ecx,eax
  597540:	e8 0b 49 00 00       	call   0x59be50
  597545:	8b c8                	mov    ecx,eax
  597547:	8b d7                	mov    edx,edi
  597549:	e8 52 bb 01 00       	call   0x5b30a0
  59754e:	d8 5e 18             	fcomp  DWORD PTR [esi+0x18]
  597551:	5f                   	pop    edi
  597552:	5e                   	pop    esi
  597553:	df e0                	fnstsw ax
  597555:	f6 c4 41             	test   ah,0x41
  597558:	75 0b                	jne    0x597565
  59755a:	b8 01 00 00 00       	mov    eax,0x1
  59755f:	83 c4 0c             	add    esp,0xc
  597562:	c2 04 00             	ret    0x4
  597565:	33 c0                	xor    eax,eax
  597567:	83 c4 0c             	add    esp,0xc
  59756a:	c2 04 00             	ret    0x4
  59756d:	90                   	nop
  59756e:	90                   	nop
  59756f:	90                   	nop
  597570:	83 ec 10             	sub    esp,0x10
  597573:	56                   	push   esi
  597574:	8b f1                	mov    esi,ecx
  597576:	57                   	push   edi
  597577:	8d 44 24 0c          	lea    eax,[esp+0xc]
  59757b:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59757e:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
  597585:	00 
  597586:	51                   	push   ecx
  597587:	50                   	push   eax
  597588:	e8 43 e7 ff ff       	call   0x595cd0
  59758d:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  597591:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  597594:	50                   	push   eax
  597595:	57                   	push   edi
  597596:	e8 d5 de ff ff       	call   0x595470
  59759b:	8b c8                	mov    ecx,eax
  59759d:	e8 8e 47 00 00       	call   0x59bd30
  5975a2:	8b c8                	mov    ecx,eax
  5975a4:	e8 b7 24 00 00       	call   0x599a60
  5975a9:	8b c7                	mov    eax,edi
  5975ab:	5f                   	pop    edi
  5975ac:	5e                   	pop    esi
  5975ad:	83 c4 10             	add    esp,0x10
  5975b0:	c2 04 00             	ret    0x4
  5975b3:	90                   	nop
  5975b4:	90                   	nop
  5975b5:	90                   	nop
  5975b6:	90                   	nop
  5975b7:	90                   	nop
  5975b8:	90                   	nop
  5975b9:	90                   	nop
  5975ba:	90                   	nop
  5975bb:	90                   	nop
  5975bc:	90                   	nop
  5975bd:	90                   	nop
  5975be:	90                   	nop
  5975bf:	90                   	nop
  5975c0:	6a ff                	push   0xffffffff
  5975c2:	68 6b 3f 64 00       	push   0x643f6b
  5975c7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5975cd:	50                   	push   eax
  5975ce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5975d5:	83 ec 14             	sub    esp,0x14
  5975d8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5975dc:	53                   	push   ebx
  5975dd:	56                   	push   esi
  5975de:	8b d9                	mov    ebx,ecx
  5975e0:	50                   	push   eax
  5975e1:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  5975e5:	e8 a6 f8 ff ff       	call   0x596e90
  5975ea:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  5975ee:	8d 4b 18             	lea    ecx,[ebx+0x18]
  5975f1:	33 f6                	xor    esi,esi
  5975f3:	8b 02                	mov    eax,DWORD PTR [edx]
  5975f5:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5975f9:	89 01                	mov    DWORD PTR [ecx],eax
  5975fb:	c6 44 24 24 01       	mov    BYTE PTR [esp+0x24],0x1
  597600:	c7 03 68 00 65 00    	mov    DWORD PTR [ebx],0x650068
  597606:	e8 e5 3b 00 00       	call   0x59b1f0
  59760b:	84 c0                	test   al,al
  59760d:	0f 85 a8 00 00 00    	jne    0x5976bb
  597613:	8a 4c 24 2c          	mov    cl,BYTE PTR [esp+0x2c]
  597617:	55                   	push   ebp
  597618:	57                   	push   edi
  597619:	88 4c 24 14          	mov    BYTE PTR [esp+0x14],cl
  59761d:	bf 3c 6c 6a 00       	mov    edi,0x6a6c3c
  597622:	83 c9 ff             	or     ecx,0xffffffff
  597625:	33 c0                	xor    eax,eax
  597627:	6a 01                	push   0x1
  597629:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59762b:	f7 d1                	not    ecx
  59762d:	49                   	dec    ecx
  59762e:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  597632:	8b e9                	mov    ebp,ecx
  597634:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  597638:	55                   	push   ebp
  597639:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59763d:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  597641:	e8 fa a2 e6 ff       	call   0x401940
  597646:	84 c0                	test   al,al
  597648:	74 27                	je     0x597671
  59764a:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  59764e:	8b cd                	mov    ecx,ebp
  597650:	8b d1                	mov    edx,ecx
  597652:	be 3c 6c 6a 00       	mov    esi,0x6a6c3c
  597657:	c1 e9 02             	shr    ecx,0x2
  59765a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59765c:	8b ca                	mov    ecx,edx
  59765e:	83 e1 03             	and    ecx,0x3
  597661:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  597663:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  597667:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  59766b:	33 f6                	xor    esi,esi
  59766d:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  597671:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  597675:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  59767a:	51                   	push   ecx
  59767b:	68 5a 01 00 00       	push   0x15a
  597680:	68 a8 6a 6a 00       	push   0x6a6aa8
  597685:	68 18 6c 6a 00       	push   0x6a6c18
  59768a:	e8 61 91 00 00       	call   0x5a07f0
  59768f:	ff d0                	call   eax
  597691:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  597695:	83 c4 10             	add    esp,0x10
  597698:	3b c6                	cmp    eax,esi
  59769a:	5f                   	pop    edi
  59769b:	5d                   	pop    ebp
  59769c:	74 1d                	je     0x5976bb
  59769e:	8d 48 ff             	lea    ecx,[eax-0x1]
  5976a1:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5976a4:	84 c0                	test   al,al
  5976a6:	74 0a                	je     0x5976b2
  5976a8:	3c ff                	cmp    al,0xff
  5976aa:	74 06                	je     0x5976b2
  5976ac:	fe c8                	dec    al
  5976ae:	88 01                	mov    BYTE PTR [ecx],al
  5976b0:	eb 09                	jmp    0x5976bb
  5976b2:	51                   	push   ecx
  5976b3:	e8 38 6f 06 00       	call   0x5fe5f0
  5976b8:	83 c4 04             	add    esp,0x4
  5976bb:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5976bf:	8b c3                	mov    eax,ebx
  5976c1:	5e                   	pop    esi
  5976c2:	5b                   	pop    ebx
  5976c3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5976ca:	83 c4 20             	add    esp,0x20
  5976cd:	c2 08 00             	ret    0x8
  5976d0:	56                   	push   esi
  5976d1:	8b f1                	mov    esi,ecx
  5976d3:	e8 18 00 00 00       	call   0x5976f0
  5976d8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  5976dd:	74 09                	je     0x5976e8
  5976df:	56                   	push   esi
  5976e0:	e8 0b 6f 06 00       	call   0x5fe5f0
  5976e5:	83 c4 04             	add    esp,0x4
  5976e8:	8b c6                	mov    eax,esi
  5976ea:	5e                   	pop    esi
  5976eb:	c2 04 00             	ret    0x4
  5976ee:	90                   	nop
  5976ef:	90                   	nop
  5976f0:	6a ff                	push   0xffffffff
  5976f2:	68 88 3f 64 00       	push   0x643f88
  5976f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5976fd:	50                   	push   eax
  5976fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  597705:	51                   	push   ecx
  597706:	56                   	push   esi
  597707:	8b f1                	mov    esi,ecx
  597709:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  59770d:	c7 06 68 00 65 00    	mov    DWORD PTR [esi],0x650068
  597713:	8d 4e 18             	lea    ecx,[esi+0x18]
  597716:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  59771d:	00 
  59771e:	e8 bd b9 fc ff       	call   0x5630e0
  597723:	8b ce                	mov    ecx,esi
  597725:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  59772c:	ff 
  59772d:	e8 9e f7 ff ff       	call   0x596ed0
  597732:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  597736:	5e                   	pop    esi
  597737:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59773e:	83 c4 10             	add    esp,0x10
  597741:	c3                   	ret
  597742:	90                   	nop
  597743:	90                   	nop
  597744:	90                   	nop
  597745:	90                   	nop
  597746:	90                   	nop
  597747:	90                   	nop
  597748:	90                   	nop
  597749:	90                   	nop
  59774a:	90                   	nop
  59774b:	90                   	nop
  59774c:	90                   	nop
  59774d:	90                   	nop
  59774e:	90                   	nop
  59774f:	90                   	nop
  597750:	56                   	push   esi
  597751:	8b f1                	mov    esi,ecx
  597753:	57                   	push   edi
  597754:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  597757:	e8 14 dd ff ff       	call   0x595470
  59775c:	8b c8                	mov    ecx,eax
  59775e:	e8 dd 46 00 00       	call   0x59be40
  597763:	8b c8                	mov    ecx,eax
  597765:	e8 76 3a 00 00       	call   0x59b1e0
  59776a:	8d 4e 18             	lea    ecx,[esi+0x18]
  59776d:	8b f8                	mov    edi,eax
  59776f:	e8 6c 3a 00 00       	call   0x59b1e0
  597774:	33 c9                	xor    ecx,ecx
  597776:	3b f8                	cmp    edi,eax
  597778:	0f 94 c1             	sete   cl
  59777b:	5f                   	pop    edi
  59777c:	8a c1                	mov    al,cl
  59777e:	5e                   	pop    esi
  59777f:	c2 04 00             	ret    0x4
  597782:	90                   	nop
  597783:	90                   	nop
  597784:	90                   	nop
  597785:	90                   	nop
  597786:	90                   	nop
  597787:	90                   	nop
  597788:	90                   	nop
  597789:	90                   	nop
  59778a:	90                   	nop
  59778b:	90                   	nop
  59778c:	90                   	nop
  59778d:	90                   	nop
  59778e:	90                   	nop
  59778f:	90                   	nop
  597790:	51                   	push   ecx
  597791:	8b c1                	mov    eax,ecx
  597793:	56                   	push   esi
  597794:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
  597798:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
  59779f:	00 
  5977a0:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  5977a3:	83 c0 18             	add    eax,0x18
  5977a6:	51                   	push   ecx
  5977a7:	50                   	push   eax
  5977a8:	56                   	push   esi
  5977a9:	e8 c2 dc ff ff       	call   0x595470
  5977ae:	8b c8                	mov    ecx,eax
  5977b0:	e8 7b 45 00 00       	call   0x59bd30
  5977b5:	8b c8                	mov    ecx,eax
  5977b7:	e8 54 21 00 00       	call   0x599910
  5977bc:	8b c6                	mov    eax,esi
  5977be:	5e                   	pop    esi
  5977bf:	59                   	pop    ecx
  5977c0:	c2 04 00             	ret    0x4
  5977c3:	90                   	nop
  5977c4:	90                   	nop
  5977c5:	90                   	nop
  5977c6:	90                   	nop
  5977c7:	90                   	nop
  5977c8:	90                   	nop
  5977c9:	90                   	nop
  5977ca:	90                   	nop
  5977cb:	90                   	nop
  5977cc:	90                   	nop
  5977cd:	90                   	nop
  5977ce:	90                   	nop
  5977cf:	90                   	nop
  5977d0:	6a ff                	push   0xffffffff
  5977d2:	68 b0 3f 64 00       	push   0x643fb0
  5977d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5977dd:	50                   	push   eax
  5977de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5977e5:	83 ec 14             	sub    esp,0x14
  5977e8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5977ec:	53                   	push   ebx
  5977ed:	55                   	push   ebp
  5977ee:	56                   	push   esi
  5977ef:	8b f1                	mov    esi,ecx
  5977f1:	50                   	push   eax
  5977f2:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  5977f6:	e8 95 f6 ff ff       	call   0x596e90
  5977fb:	8b 6c 24 34          	mov    ebp,DWORD PTR [esp+0x34]
  5977ff:	83                   	.byte 0x83
