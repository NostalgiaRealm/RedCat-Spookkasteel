  57a5b0:	6a ff                	push   0xffffffff
  57a5b2:	68 5f 1c 64 00       	push   0x641c5f
  57a5b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  57a5bd:	50                   	push   eax
  57a5be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  57a5c5:	81 ec 84 00 00 00    	sub    esp,0x84
  57a5cb:	53                   	push   ebx
  57a5cc:	55                   	push   ebp
  57a5cd:	56                   	push   esi
  57a5ce:	8d 44 24 10          	lea    eax,[esp+0x10]
  57a5d2:	57                   	push   edi
  57a5d3:	8b e9                	mov    ebp,ecx
  57a5d5:	50                   	push   eax
  57a5d6:	89 6c 24 3c          	mov    DWORD PTR [esp+0x3c],ebp
  57a5da:	e8 01 9d e8 ff       	call   0x4042e0
  57a5df:	8b f0                	mov    esi,eax
  57a5e1:	8b 06                	mov    eax,DWORD PTR [esi]
  57a5e3:	33 db                	xor    ebx,ebx
  57a5e5:	3b c3                	cmp    eax,ebx
  57a5e7:	89 9c 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],ebx
  57a5ee:	75 68                	jne    0x57a658
  57a5f0:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  57a5f4:	53                   	push   ebx
  57a5f5:	88 4c 24 2c          	mov    BYTE PTR [esp+0x2c],cl
  57a5f9:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  57a5fd:	e8 9e 9a e8 ff       	call   0x4040a0
  57a602:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a607:	83 c9 ff             	or     ecx,0xffffffff
  57a60a:	33 c0                	xor    eax,eax
  57a60c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a60e:	f7 d1                	not    ecx
  57a610:	49                   	dec    ecx
  57a611:	51                   	push   ecx
  57a612:	68 70 3f 6b 00       	push   0x6b3f70
  57a617:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  57a61b:	e8 d0 9a e8 ff       	call   0x4040f0
  57a620:	8d 54 24 28          	lea    edx,[esp+0x28]
  57a624:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x1
  57a62b:	01 
  57a62c:	52                   	push   edx
  57a62d:	68 b6 00 00 00       	push   0xb6
  57a632:	68 38 d6 68 00       	push   0x68d638
  57a637:	68 2c d6 68 00       	push   0x68d62c
  57a63c:	e8 af 61 02 00       	call   0x5a07f0
  57a641:	ff d0                	call   eax
  57a643:	83 c4 10             	add    esp,0x10
  57a646:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  57a64a:	88 9c 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],bl
  57a651:	6a 01                	push   0x1
  57a653:	e8 48 9a e8 ff       	call   0x4040a0
  57a658:	8b 36                	mov    esi,DWORD PTR [esi]
  57a65a:	39 5e 5c             	cmp    DWORD PTR [esi+0x5c],ebx
  57a65d:	75 68                	jne    0x57a6c7
  57a65f:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  57a663:	53                   	push   ebx
  57a664:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  57a668:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  57a66c:	e8 2f 9a e8 ff       	call   0x4040a0
  57a671:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a676:	83 c9 ff             	or     ecx,0xffffffff
  57a679:	33 c0                	xor    eax,eax
  57a67b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a67d:	f7 d1                	not    ecx
  57a67f:	49                   	dec    ecx
  57a680:	51                   	push   ecx
  57a681:	68 70 3f 6b 00       	push   0x6b3f70
  57a686:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  57a68a:	e8 61 9a e8 ff       	call   0x4040f0
  57a68f:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a693:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x2
  57a69a:	02 
  57a69b:	51                   	push   ecx
  57a69c:	68 44 01 00 00       	push   0x144
  57a6a1:	68 b8 e1 68 00       	push   0x68e1b8
  57a6a6:	68 a8 e1 68 00       	push   0x68e1a8
  57a6ab:	e8 40 61 02 00       	call   0x5a07f0
  57a6b0:	ff d0                	call   eax
  57a6b2:	83 c4 10             	add    esp,0x10
  57a6b5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a6b9:	88 9c 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],bl
  57a6c0:	6a 01                	push   0x1
  57a6c2:	e8 d9 99 e8 ff       	call   0x4040a0
  57a6c7:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  57a6cb:	8b 56 5c             	mov    edx,DWORD PTR [esi+0x5c]
  57a6ce:	3b c3                	cmp    eax,ebx
  57a6d0:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  57a6d4:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0xffffffff
  57a6db:	ff ff ff ff 
  57a6df:	74 17                	je     0x57a6f8
  57a6e1:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  57a6e4:	8b c8                	mov    ecx,eax
  57a6e6:	83 c0 14             	add    eax,0x14
  57a6e9:	4e                   	dec    esi
  57a6ea:	8b d6                	mov    edx,esi
  57a6ec:	3b d3                	cmp    edx,ebx
  57a6ee:	89 30                	mov    DWORD PTR [eax],esi
  57a6f0:	75 06                	jne    0x57a6f8
  57a6f2:	53                   	push   ebx
  57a6f3:	e8 c8 18 03 00       	call   0x5abfc0
  57a6f8:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  57a6fd:	3b c3                	cmp    eax,ebx
  57a6ff:	75 05                	jne    0x57a706
  57a701:	e8 7a 0b fe ff       	call   0x55b280
  57a706:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  57a70a:	51                   	push   ecx
  57a70b:	8b c8                	mov    ecx,eax
  57a70d:	e8 3e 70 ea ff       	call   0x421750
  57a712:	8b f0                	mov    esi,eax
  57a714:	8b 06                	mov    eax,DWORD PTR [esi]
  57a716:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x3
  57a71d:	03 00 00 00 
  57a721:	3b c3                	cmp    eax,ebx
  57a723:	75 69                	jne    0x57a78e
  57a725:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  57a729:	53                   	push   ebx
  57a72a:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  57a72e:	88 54 24 2c          	mov    BYTE PTR [esp+0x2c],dl
  57a732:	e8 69 99 e8 ff       	call   0x4040a0
  57a737:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a73c:	83 c9 ff             	or     ecx,0xffffffff
  57a73f:	33 c0                	xor    eax,eax
  57a741:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a743:	f7 d1                	not    ecx
  57a745:	49                   	dec    ecx
  57a746:	51                   	push   ecx
  57a747:	68 70 3f 6b 00       	push   0x6b3f70
  57a74c:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  57a750:	e8 9b 99 e8 ff       	call   0x4040f0
  57a755:	8d 44 24 28          	lea    eax,[esp+0x28]
  57a759:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x4
  57a760:	04 
  57a761:	50                   	push   eax
  57a762:	68 b6 00 00 00       	push   0xb6
  57a767:	68 38 d6 68 00       	push   0x68d638
  57a76c:	68 2c d6 68 00       	push   0x68d62c
  57a771:	e8 7a 60 02 00       	call   0x5a07f0
  57a776:	ff d0                	call   eax
  57a778:	83 c4 10             	add    esp,0x10
  57a77b:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  57a77f:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x3
  57a786:	03 
  57a787:	6a 01                	push   0x1
  57a789:	e8 12 99 e8 ff       	call   0x4040a0
  57a78e:	8b 0e                	mov    ecx,DWORD PTR [esi]
  57a790:	e8 db bd fd ff       	call   0x556570
  57a795:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  57a799:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  57a79d:	3b c3                	cmp    eax,ebx
  57a79f:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0xffffffff
  57a7a6:	ff ff ff ff 
  57a7aa:	74 17                	je     0x57a7c3
  57a7ac:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  57a7af:	8b c8                	mov    ecx,eax
  57a7b1:	83 c0 14             	add    eax,0x14
  57a7b4:	4e                   	dec    esi
  57a7b5:	8b d6                	mov    edx,esi
  57a7b7:	3b d3                	cmp    edx,ebx
  57a7b9:	89 30                	mov    DWORD PTR [eax],esi
  57a7bb:	75 06                	jne    0x57a7c3
  57a7bd:	53                   	push   ebx
  57a7be:	e8 fd 17 03 00       	call   0x5abfc0
  57a7c3:	8b 85 fc 00 00 00    	mov    eax,DWORD PTR [ebp+0xfc]
  57a7c9:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  57a7cc:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
  57a7cf:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  57a7d2:	51                   	push   ecx
  57a7d3:	52                   	push   edx
  57a7d4:	50                   	push   eax
  57a7d5:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  57a7d9:	e8 42 86 03 00       	call   0x5b2e20
  57a7de:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  57a7e4:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  57a7e8:	83 c1 04             	add    ecx,0x4
  57a7eb:	8d 54 24 50          	lea    edx,[esp+0x50]
  57a7ef:	51                   	push   ecx
  57a7f0:	52                   	push   edx
  57a7f1:	50                   	push   eax
  57a7f2:	e8 e9 f3 03 00       	call   0x5b9be0
  57a7f7:	83 c4 0c             	add    esp,0xc
  57a7fa:	83 f8 01             	cmp    eax,0x1
  57a7fd:	0f 84 88 00 00 00    	je     0x57a88b
  57a803:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  57a807:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a80c:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  57a810:	83 c9 ff             	or     ecx,0xffffffff
  57a813:	33 c0                	xor    eax,eax
  57a815:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  57a819:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a81b:	f7 d1                	not    ecx
  57a81d:	49                   	dec    ecx
  57a81e:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  57a822:	51                   	push   ecx
  57a823:	68 70 3f 6b 00       	push   0x6b3f70
  57a828:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  57a82c:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  57a830:	e8 bb 98 e8 ff       	call   0x4040f0
  57a835:	8d 54 24 18          	lea    edx,[esp+0x18]
  57a839:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x5
  57a840:	05 00 00 00 
  57a844:	52                   	push   edx
  57a845:	6a 7f                	push   0x7f
  57a847:	68 50 50 6a 00       	push   0x6a5050
  57a84c:	68 ac 74 69 00       	push   0x6974ac
  57a851:	e8 9a 5f 02 00       	call   0x5a07f0
  57a856:	ff d0                	call   eax
  57a858:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  57a85c:	83 c4 10             	add    esp,0x10
  57a85f:	3b c3                	cmp    eax,ebx
  57a861:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0xffffffff
  57a868:	ff ff ff ff 
  57a86c:	74 1d                	je     0x57a88b
  57a86e:	8d 48 ff             	lea    ecx,[eax-0x1]
  57a871:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  57a874:	3a c3                	cmp    al,bl
  57a876:	74 0a                	je     0x57a882
  57a878:	3c ff                	cmp    al,0xff
  57a87a:	74 06                	je     0x57a882
  57a87c:	fe c8                	dec    al
  57a87e:	88 01                	mov    BYTE PTR [ecx],al
  57a880:	eb 09                	jmp    0x57a88b
  57a882:	51                   	push   ecx
  57a883:	e8 68 3d 08 00       	call   0x5fe5f0
  57a888:	83 c4 04             	add    esp,0x4
  57a88b:	39 9d fc 00 00 00    	cmp    DWORD PTR [ebp+0xfc],ebx
  57a891:	0f 85 9a 00 00 00    	jne    0x57a931
  57a897:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  57a89b:	53                   	push   ebx
  57a89c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  57a8a0:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  57a8a4:	e8 f7 97 e8 ff       	call   0x4040a0
  57a8a9:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a8ae:	83 c9 ff             	or     ecx,0xffffffff
  57a8b1:	33 c0                	xor    eax,eax
  57a8b3:	6a 01                	push   0x1
  57a8b5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a8b7:	f7 d1                	not    ecx
  57a8b9:	49                   	dec    ecx
  57a8ba:	8b e9                	mov    ebp,ecx
  57a8bc:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  57a8c0:	55                   	push   ebp
  57a8c1:	e8 7a 70 e8 ff       	call   0x401940
  57a8c6:	84 c0                	test   al,al
  57a8c8:	74 24                	je     0x57a8ee
  57a8ca:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  57a8ce:	8b cd                	mov    ecx,ebp
  57a8d0:	8b d1                	mov    edx,ecx
  57a8d2:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  57a8d7:	c1 e9 02             	shr    ecx,0x2
  57a8da:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  57a8dc:	8b ca                	mov    ecx,edx
  57a8de:	83 e1 03             	and    ecx,0x3
  57a8e1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  57a8e3:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  57a8e7:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  57a8eb:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  57a8ee:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a8f2:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x6
  57a8f9:	06 00 00 00 
  57a8fd:	51                   	push   ecx
  57a8fe:	68 82 00 00 00       	push   0x82
  57a903:	68 50 50 6a 00       	push   0x6a5050
  57a908:	68 94 50 6a 00       	push   0x6a5094
  57a90d:	e8 de 5e 02 00       	call   0x5a07f0
  57a912:	ff d0                	call   eax
  57a914:	83 c4 10             	add    esp,0x10
  57a917:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57a91b:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0xffffffff
  57a922:	ff ff ff ff 
  57a926:	6a 01                	push   0x1
  57a928:	e8 73 97 e8 ff       	call   0x4040a0
  57a92d:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
  57a931:	8b 95 fc 00 00 00    	mov    edx,DWORD PTR [ebp+0xfc]
  57a937:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  57a93b:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
  57a93e:	50                   	push   eax
  57a93f:	51                   	push   ecx
  57a940:	e8 cb f2 03 00       	call   0x5b9c10
  57a945:	83 c4 08             	add    esp,0x8
  57a948:	85 c0                	test   eax,eax
  57a94a:	0f 84 9f 01 00 00    	je     0x57aaef
  57a950:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  57a954:	e8 17 eb 04 00       	call   0x5c9470
  57a959:	8b e8                	mov    ebp,eax
  57a95b:	3b eb                	cmp    ebp,ebx
  57a95d:	0f 85 80 00 00 00    	jne    0x57a9e3
  57a963:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57a968:	83 c9 ff             	or     ecx,0xffffffff
  57a96b:	33 c0                	xor    eax,eax
  57a96d:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  57a971:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57a973:	f7 d1                	not    ecx
  57a975:	49                   	dec    ecx
  57a976:	88 54 24 28          	mov    BYTE PTR [esp+0x28],dl
  57a97a:	51                   	push   ecx
  57a97b:	68 70 3f 6b 00       	push   0x6b3f70
  57a980:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  57a984:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  57a988:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  57a98c:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
  57a990:	e8 5b 97 e8 ff       	call   0x4040f0
  57a995:	8d 44 24 28          	lea    eax,[esp+0x28]
  57a999:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x7
  57a9a0:	07 00 00 00 
  57a9a4:	50                   	push   eax
  57a9a5:	68 8f 00 00 00       	push   0x8f
  57a9aa:	68 50 50 6a 00       	push   0x6a5050
  57a9af:	68 84 50 6a 00       	push   0x6a5084
  57a9b4:	e8 37 5e 02 00       	call   0x5a07f0
  57a9b9:	ff d0                	call   eax
  57a9bb:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  57a9bf:	83 c4 10             	add    esp,0x10
  57a9c2:	3b c3                	cmp    eax,ebx
  57a9c4:	74 1d                	je     0x57a9e3
  57a9c6:	8d 48 ff             	lea    ecx,[eax-0x1]
  57a9c9:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  57a9cc:	3a c3                	cmp    al,bl
  57a9ce:	74 0a                	je     0x57a9da
  57a9d0:	3c ff                	cmp    al,0xff
  57a9d2:	74 06                	je     0x57a9da
  57a9d4:	fe c8                	dec    al
  57a9d6:	88 01                	mov    BYTE PTR [ecx],al
  57a9d8:	eb 09                	jmp    0x57a9e3
  57a9da:	51                   	push   ecx
  57a9db:	e8 10 3c 08 00       	call   0x5fe5f0
  57a9e0:	83 c4 04             	add    esp,0x4
  57a9e3:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  57a9e7:	8d 75 24             	lea    esi,[ebp+0x24]
  57a9ea:	51                   	push   ecx
  57a9eb:	8b d6                	mov    edx,esi
  57a9ed:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  57a9f1:	e8 ea 85 03 00       	call   0x5b2fe0
  57a9f6:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  57a9fa:	e8 d1 85 03 00       	call   0x5b2fd0
  57a9ff:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  57aa03:	8d 54 24 44          	lea    edx,[esp+0x44]
  57aa07:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  57aa0b:	52                   	push   edx
  57aa0c:	8b d6                	mov    edx,esi
  57aa0e:	e8 cd 85 03 00       	call   0x5b2fe0
  57aa13:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  57aa17:	e8 04 85 03 00       	call   0x5b2f20
  57aa1c:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  57aa20:	8b cd                	mov    ecx,ebp
  57aa22:	dd d8                	fstp   st(0)
  57aa24:	e8 47 8c 03 00       	call   0x5b3670
  57aa29:	8d 54 24 44          	lea    edx,[esp+0x44]
  57aa2d:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  57aa31:	e8 0a 84 03 00       	call   0x5b2e40
  57aa36:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  57aa3c:	df e0                	fnstsw ax
  57aa3e:	f6 c4 01             	test   ah,0x1
  57aa41:	0f 85 a4 00 00 00    	jne    0x57aaeb
  57aa47:	8d 44 24 68          	lea    eax,[esp+0x68]
  57aa4b:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  57aa4f:	50                   	push   eax
  57aa50:	53                   	push   ebx
  57aa51:	53                   	push   ebx
  57aa52:	53                   	push   ebx
  57aa53:	6a 02                	push   0x2
  57aa55:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  57aa59:	6a 01                	push   0x1
  57aa5b:	51                   	push   ecx
  57aa5c:	56                   	push   esi
  57aa5d:	53                   	push   ebx
  57aa5e:	53                   	push   ebx
  57aa5f:	52                   	push   edx
  57aa60:	e8 1b d3 03 00       	call   0x5b7d80
  57aa65:	83 c4 2c             	add    esp,0x2c
  57aa68:	83 f8 01             	cmp    eax,0x1
  57aa6b:	74 7e                	je     0x57aaeb
  57aa6d:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  57aa71:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  57aa75:	8b 8a fc 00 00 00    	mov    ecx,DWORD PTR [edx+0xfc]
  57aa7b:	d8 59 38             	fcomp  DWORD PTR [ecx+0x38]
  57aa7e:	df e0                	fnstsw ax
  57aa80:	f6 c4 01             	test   ah,0x1
  57aa83:	75 05                	jne    0x57aa8a
  57aa85:	d9 41 34             	fld    DWORD PTR [ecx+0x34]
  57aa88:	eb 2d                	jmp    0x57aab7
  57aa8a:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  57aa8e:	d8 59 3c             	fcomp  DWORD PTR [ecx+0x3c]
  57aa91:	df e0                	fnstsw ax
  57aa93:	f6 c4 41             	test   ah,0x41
  57aa96:	74 05                	je     0x57aa9d
  57aa98:	d9 41 30             	fld    DWORD PTR [ecx+0x30]
  57aa9b:	eb 1a                	jmp    0x57aab7
  57aa9d:	d9 41 34             	fld    DWORD PTR [ecx+0x34]
  57aaa0:	d8 61 30             	fsub   DWORD PTR [ecx+0x30]
  57aaa3:	d9 41 38             	fld    DWORD PTR [ecx+0x38]
  57aaa6:	d8 61 3c             	fsub   DWORD PTR [ecx+0x3c]
  57aaa9:	de f9                	fdivp  st(1),st
  57aaab:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  57aaaf:	d8 61 3c             	fsub   DWORD PTR [ecx+0x3c]
  57aab2:	de c9                	fmulp  st(1),st
  57aab4:	d8 41 30             	fadd   DWORD PTR [ecx+0x30]
  57aab7:	d9 41 2c             	fld    DWORD PTR [ecx+0x2c]
  57aaba:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  57aac0:	df e0                	fnstsw ax
  57aac2:	f6 c4 41             	test   ah,0x41
  57aac5:	75 20                	jne    0x57aae7
  57aac7:	d9 84 24 a4 00 00 00 	fld    DWORD PTR [esp+0xa4]
  57aace:	d8 49 34             	fmul   DWORD PTR [ecx+0x34]
  57aad1:	d8 71 2c             	fdiv   DWORD PTR [ecx+0x2c]
  57aad4:	d8 01                	fadd   DWORD PTR [ecx]
  57aad6:	d9 19                	fstp   DWORD PTR [ecx]
  57aad8:	8b 8a fc 00 00 00    	mov    ecx,DWORD PTR [edx+0xfc]
  57aade:	d8 11                	fcom   DWORD PTR [ecx]
  57aae0:	df e0                	fnstsw ax
  57aae2:	f6 c4 01             	test   ah,0x1
  57aae5:	74 57                	je     0x57ab3e
  57aae7:	d9 19                	fstp   DWORD PTR [ecx]
  57aae9:	eb 55                	jmp    0x57ab40
  57aaeb:	8b 6c 24 38          	mov    ebp,DWORD PTR [esp+0x38]
  57aaef:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  57aaf5:	d9 01                	fld    DWORD PTR [ecx]
  57aaf7:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  57aafd:	df e0                	fnstsw ax
  57aaff:	f6 c4 41             	test   ah,0x41
  57ab02:	75 3c                	jne    0x57ab40
  57ab04:	d9 41 2c             	fld    DWORD PTR [ecx+0x2c]
  57ab07:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  57ab0d:	df e0                	fnstsw ax
  57ab0f:	f6 c4 41             	test   ah,0x41
  57ab12:	75 26                	jne    0x57ab3a
  57ab14:	d9 84 24 a4 00 00 00 	fld    DWORD PTR [esp+0xa4]
  57ab1b:	d8 49 34             	fmul   DWORD PTR [ecx+0x34]
  57ab1e:	d8 71 2c             	fdiv   DWORD PTR [ecx+0x2c]
  57ab21:	d8 29                	fsubr  DWORD PTR [ecx]
  57ab23:	d9 19                	fstp   DWORD PTR [ecx]
  57ab25:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  57ab2b:	d9 01                	fld    DWORD PTR [ecx]
  57ab2d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  57ab33:	df e0                	fnstsw ax
  57ab35:	f6 c4 01             	test   ah,0x1
  57ab38:	74 06                	je     0x57ab40
  57ab3a:	89 19                	mov    DWORD PTR [ecx],ebx
  57ab3c:	eb 02                	jmp    0x57ab40
  57ab3e:	dd d8                	fstp   st(0)
  57ab40:	8b 8c 24 94 00 00 00 	mov    ecx,DWORD PTR [esp+0x94]
  57ab47:	5f                   	pop    edi
  57ab48:	5e                   	pop    esi
  57ab49:	5d                   	pop    ebp
  57ab4a:	b8 01 00 00 00       	mov    eax,0x1
  57ab4f:	5b                   	pop    ebx
  57ab50:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  57ab57:	81 c4 90 00 00 00    	add    esp,0x90
  57ab5d:	c2 04 00             	ret    0x4
  57ab60:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  57ab66:	6a ff                	push   0xffffffff
  57ab68:	68 90 1c 64 00       	push   0x641c90
  57ab6d:	50                   	push   eax
  57ab6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  57ab75:	83 ec 2c             	sub    esp,0x2c
  57ab78:	53                   	push   ebx
  57ab79:	8b d9                	mov    ebx,ecx
  57ab7b:	56                   	push   esi
  57ab7c:	57                   	push   edi
  57ab7d:	8a 43 7c             	mov    al,BYTE PTR [ebx+0x7c]
  57ab80:	84 c0                	test   al,al
  57ab82:	0f 84 7c 02 00 00    	je     0x57ae04
  57ab88:	8a 83 de 00 00 00    	mov    al,BYTE PTR [ebx+0xde]
  57ab8e:	84 c0                	test   al,al
  57ab90:	0f 84 6e 02 00 00    	je     0x57ae04
  57ab96:	e8 55 e1 f9 ff       	call   0x518cf0
  57ab9b:	8b f0                	mov    esi,eax
  57ab9d:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  57aba0:	3d 00 00 00 80       	cmp    eax,0x80000000
  57aba5:	75 18                	jne    0x57abbf
  57aba7:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  57abaa:	85 c0                	test   eax,eax
  57abac:	75 05                	jne    0x57abb3
  57abae:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  57abb3:	50                   	push   eax
  57abb4:	e8 57 03 09 00       	call   0x60af10
  57abb9:	83 c4 04             	add    esp,0x4
  57abbc:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  57abbf:	85 c0                	test   eax,eax
  57abc1:	0f 85 3d 02 00 00    	jne    0x57ae04
  57abc7:	8d 44 24 10          	lea    eax,[esp+0x10]
  57abcb:	8b cb                	mov    ecx,ebx
  57abcd:	50                   	push   eax
  57abce:	e8 0d 97 e8 ff       	call   0x4042e0
  57abd3:	8b f0                	mov    esi,eax
  57abd5:	8b 06                	mov    eax,DWORD PTR [esi]
  57abd7:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  57abde:	00 
  57abdf:	85 c0                	test   eax,eax
  57abe1:	75 64                	jne    0x57ac47
  57abe3:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  57abe7:	6a 00                	push   0x0
  57abe9:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  57abed:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  57abf1:	e8 aa 94 e8 ff       	call   0x4040a0
  57abf6:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57abfb:	83 c9 ff             	or     ecx,0xffffffff
  57abfe:	33 c0                	xor    eax,eax
  57ac00:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57ac02:	f7 d1                	not    ecx
  57ac04:	49                   	dec    ecx
  57ac05:	51                   	push   ecx
  57ac06:	68 70 3f 6b 00       	push   0x6b3f70
  57ac0b:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  57ac0f:	e8 dc 94 e8 ff       	call   0x4040f0
  57ac14:	8d 54 24 18          	lea    edx,[esp+0x18]
  57ac18:	c6 44 24 40 01       	mov    BYTE PTR [esp+0x40],0x1
  57ac1d:	52                   	push   edx
  57ac1e:	68 b6 00 00 00       	push   0xb6
  57ac23:	68 38 d6 68 00       	push   0x68d638
  57ac28:	68 2c d6 68 00       	push   0x68d62c
  57ac2d:	e8 be 5b 02 00       	call   0x5a07f0
  57ac32:	ff d0                	call   eax
  57ac34:	83 c4 10             	add    esp,0x10
  57ac37:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  57ac3b:	c6 44 24 40 00       	mov    BYTE PTR [esp+0x40],0x0
  57ac40:	6a 01                	push   0x1
  57ac42:	e8 59 94 e8 ff       	call   0x4040a0
  57ac47:	8b 36                	mov    esi,DWORD PTR [esi]
  57ac49:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  57ac4c:	85 c0                	test   eax,eax
  57ac4e:	75 64                	jne    0x57acb4
  57ac50:	8a 44 24 0f          	mov    al,BYTE PTR [esp+0xf]
  57ac54:	6a 00                	push   0x0
  57ac56:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  57ac5a:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  57ac5e:	e8 3d 94 e8 ff       	call   0x4040a0
  57ac63:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57ac68:	83 c9 ff             	or     ecx,0xffffffff
  57ac6b:	33 c0                	xor    eax,eax
  57ac6d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57ac6f:	f7 d1                	not    ecx
  57ac71:	49                   	dec    ecx
  57ac72:	51                   	push   ecx
  57ac73:	68 70 3f 6b 00       	push   0x6b3f70
  57ac78:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  57ac7c:	e8 6f 94 e8 ff       	call   0x4040f0
  57ac81:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  57ac85:	c6 44 24 40 02       	mov    BYTE PTR [esp+0x40],0x2
  57ac8a:	51                   	push   ecx
  57ac8b:	68 44 01 00 00       	push   0x144
  57ac90:	68 b8 e1 68 00       	push   0x68e1b8
  57ac95:	68 a8 e1 68 00       	push   0x68e1a8
  57ac9a:	e8 51 5b 02 00       	call   0x5a07f0
  57ac9f:	ff d0                	call   eax
  57aca1:	83 c4 10             	add    esp,0x10
  57aca4:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  57aca8:	c6 44 24 40 00       	mov    BYTE PTR [esp+0x40],0x0
  57acad:	6a 01                	push   0x1
  57acaf:	e8 ec 93 e8 ff       	call   0x4040a0
  57acb4:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  57acb8:	8b 56 5c             	mov    edx,DWORD PTR [esi+0x5c]
  57acbb:	85 c0                	test   eax,eax
  57acbd:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  57acc1:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  57acc8:	ff 
  57acc9:	74 18                	je     0x57ace3
  57accb:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  57acce:	8b c8                	mov    ecx,eax
  57acd0:	83 c0 14             	add    eax,0x14
  57acd3:	4e                   	dec    esi
  57acd4:	8b d6                	mov    edx,esi
  57acd6:	85 d2                	test   edx,edx
  57acd8:	89 30                	mov    DWORD PTR [eax],esi
  57acda:	75 07                	jne    0x57ace3
  57acdc:	6a 00                	push   0x0
  57acde:	e8 dd 12 03 00       	call   0x5abfc0
  57ace3:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57ace9:	d9 00                	fld    DWORD PTR [eax]
  57aceb:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  57acf1:	df e0                	fnstsw ax
  57acf3:	f6 c4 41             	test   ah,0x41
  57acf6:	0f 85 08 01 00 00    	jne    0x57ae04
  57acfc:	8b 83 00 01 00 00    	mov    eax,DWORD PTR [ebx+0x100]
  57ad02:	85 c0                	test   eax,eax
  57ad04:	0f 85 bc 00 00 00    	jne    0x57adc6
  57ad0a:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  57ad0e:	55                   	push   ebp
  57ad0f:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  57ad13:	6a 00                	push   0x0
  57ad15:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  57ad19:	e8 82 93 e8 ff       	call   0x4040a0
  57ad1e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  57ad23:	83 c9 ff             	or     ecx,0xffffffff
  57ad26:	33 c0                	xor    eax,eax
  57ad28:	6a 01                	push   0x1
  57ad2a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  57ad2c:	f7 d1                	not    ecx
  57ad2e:	49                   	dec    ecx
  57ad2f:	8b e9                	mov    ebp,ecx
  57ad31:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  57ad35:	55                   	push   ebp
  57ad36:	e8 05 6c e8 ff       	call   0x401940
  57ad3b:	84 c0                	test   al,al
  57ad3d:	74 25                	je     0x57ad64
  57ad3f:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  57ad43:	8b cd                	mov    ecx,ebp
  57ad45:	8b d1                	mov    edx,ecx
  57ad47:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  57ad4c:	c1 e9 02             	shr    ecx,0x2
  57ad4f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  57ad51:	8b ca                	mov    ecx,edx
  57ad53:	83 e1 03             	and    ecx,0x3
  57ad56:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  57ad58:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  57ad5c:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
  57ad60:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  57ad64:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  57ad68:	c7 44 24 44 03 00 00 	mov    DWORD PTR [esp+0x44],0x3
  57ad6f:	00 
  57ad70:	51                   	push   ecx
  57ad71:	68 b6 00 00 00       	push   0xb6
  57ad76:	68 38 d6 68 00       	push   0x68d638
  57ad7b:	68 2c d6 68 00       	push   0x68d62c
  57ad80:	e8 6b 5a 02 00       	call   0x5a07f0
  57ad85:	ff d0                	call   eax
  57ad87:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  57ad8b:	83 c4 10             	add    esp,0x10
  57ad8e:	33 f6                	xor    esi,esi
  57ad90:	c7 44 24 44 ff ff ff 	mov    DWORD PTR [esp+0x44],0xffffffff
  57ad97:	ff 
  57ad98:	3b c6                	cmp    eax,esi
  57ad9a:	5d                   	pop    ebp
  57ad9b:	74 1d                	je     0x57adba
  57ad9d:	8d 48 ff             	lea    ecx,[eax-0x1]
  57ada0:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  57ada3:	84 c0                	test   al,al
  57ada5:	74 0a                	je     0x57adb1
  57ada7:	3c ff                	cmp    al,0xff
  57ada9:	74 06                	je     0x57adb1
  57adab:	fe c8                	dec    al
  57adad:	88 01                	mov    BYTE PTR [ecx],al
  57adaf:	eb 09                	jmp    0x57adba
  57adb1:	51                   	push   ecx
  57adb2:	e8 39 38 08 00       	call   0x5fe5f0
  57adb7:	83 c4 04             	add    esp,0x4
  57adba:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  57adbe:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  57adc2:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  57adc6:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57adcc:	8b 8b 00 01 00 00    	mov    ecx,DWORD PTR [ebx+0x100]
  57add2:	51                   	push   ecx
  57add3:	d9 40 44             	fld    DWORD PTR [eax+0x44]
  57add6:	d8 08                	fmul   DWORD PTR [eax]
  57add8:	d8 0d 60 d7 64 00    	fmul   DWORD PTR ds:0x64d760
  57adde:	d9 1c 24             	fstp   DWORD PTR [esp]
  57ade1:	6a 02                	push   0x2
  57ade3:	6a 02                	push   0x2
  57ade5:	e8 86 fc f8 ff       	call   0x50aa70
  57adea:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  57adf0:	50                   	push   eax
  57adf1:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  57adf5:	83 c2 08             	add    edx,0x8
  57adf8:	6a 01                	push   0x1
  57adfa:	52                   	push   edx
  57adfb:	50                   	push   eax
  57adfc:	e8 8f c0 03 00       	call   0x5b6e90
  57ae01:	83 c4 1c             	add    esp,0x1c
  57ae04:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  57ae08:	5f                   	pop    edi
  57ae09:	5e                   	pop    esi
  57ae0a:	5b                   	pop    ebx
  57ae0b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  57ae12:	83 c4 38             	add    esp,0x38
  57ae15:	c3                   	ret
  57ae16:	90                   	nop
  57ae17:	90                   	nop
  57ae18:	90                   	nop
  57ae19:	90                   	nop
  57ae1a:	90                   	nop
  57ae1b:	90                   	nop
  57ae1c:	90                   	nop
  57ae1d:	90                   	nop
  57ae1e:	90                   	nop
  57ae1f:	90                   	nop
  57ae20:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  57ae24:	8b 91 fc 00 00 00    	mov    edx,DWORD PTR [ecx+0xfc]
  57ae2a:	56                   	push   esi
  57ae2b:	8b 30                	mov    esi,DWORD PTR [eax]
  57ae2d:	89 72 08             	mov    DWORD PTR [edx+0x8],esi
  57ae30:	8b 91 fc 00 00 00    	mov    edx,DWORD PTR [ecx+0xfc]
  57ae36:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
  57ae39:	89 72 0c             	mov    DWORD PTR [edx+0xc],esi
  57ae3c:	8b 89 fc 00 00 00    	mov    ecx,DWORD PTR [ecx+0xfc]
  57ae42:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  57ae45:	5e                   	pop    esi
  57ae46:	89 51 10             	mov    DWORD PTR [ecx+0x10],edx
  57ae49:	c2 04 00             	ret    0x4
  57ae4c:	90                   	nop
  57ae4d:	90                   	nop
  57ae4e:	90                   	nop
  57ae4f:	90                   	nop
  57ae50:	6a ff                	push   0xffffffff
  57ae52:	68 d2 1c 64 00       	push   0x641cd2
  57ae57:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  57ae5d:	50                   	push   eax
  57ae5e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  57ae65:	83 ec 28             	sub    esp,0x28
  57ae68:	53                   	push   ebx
  57ae69:	55                   	push   ebp
  57ae6a:	56                   	push   esi
  57ae6b:	57                   	push   edi
  57ae6c:	33 ff                	xor    edi,edi
  57ae6e:	68 04 01 00 00       	push   0x104
  57ae73:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  57ae77:	e8 39 f2 08 00       	call   0x60a0b5
  57ae7c:	8b f0                	mov    esi,eax
  57ae7e:	83 c4 04             	add    esp,0x4
  57ae81:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  57ae85:	3b f7                	cmp    esi,edi
  57ae87:	89 7c 24 40          	mov    DWORD PTR [esp+0x40],edi
  57ae8b:	74 33                	je     0x57aec0
  57ae8d:	8b 5c 24 48          	mov    ebx,DWORD PTR [esp+0x48]
  57ae91:	68 a4 50 6a 00       	push   0x6a50a4
  57ae96:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  57ae9a:	8b 03                	mov    eax,DWORD PTR [ebx]
  57ae9c:	50                   	push   eax
  57ae9d:	51                   	push   ecx
  57ae9e:	e8 4d 85 f8 ff       	call   0x5033f0
  57aea3:	83 c4 0c             	add    esp,0xc
  57aea6:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  57aead:	00 
  57aeae:	53                   	push   ebx
  57aeaf:	50                   	push   eax
  57aeb0:	8b ce                	mov    ecx,esi
  57aeb2:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  57aeb7:	e8 94 ee ff ff       	call   0x579d50
  57aebc:	8b e8                	mov    ebp,eax
  57aebe:	eb 06                	jmp    0x57aec6
  57aec0:	8b 5c 24 48          	mov    ebx,DWORD PTR [esp+0x48]
  57aec4:	33 ed                	xor    ebp,ebp
  57aec6:	8a 44 24 10          	mov    al,BYTE PTR [esp+0x10]
  57aeca:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  57aed1:	ff 
  57aed2:	a8 01                	test   al,0x1
  57aed4:	74 25                	je     0x57aefb
  57aed6:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  57aeda:	3b c7                	cmp    eax,edi
  57aedc:	74 1d                	je     0x57aefb
  57aede:	8d 48 ff             	lea    ecx,[eax-0x1]
  57aee1:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  57aee4:	84 c0                	test   al,al
  57aee6:	74 0a                	je     0x57aef2
  57aee8:	3c ff                	cmp    al,0xff
  57aeea:	74 06                	je     0x57aef2
  57aeec:	fe c8                	dec    al
  57aeee:	88 01                	mov    BYTE PTR [ecx],al
  57aef0:	eb 09                	jmp    0x57aefb
  57aef2:	51                   	push   ecx
  57aef3:	e8 f8 36 08 00       	call   0x5fe5f0
  57aef8:	83 c4 04             	add    esp,0x4
  57aefb:	8a 54 24 48          	mov    dl,BYTE PTR [esp+0x48]
  57aeff:	8b 33                	mov    esi,DWORD PTR [ebx]
