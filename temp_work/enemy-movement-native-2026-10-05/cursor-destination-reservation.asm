  59b730:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59b736:	6a ff                	push   0xffffffff
  59b738:	68 a0 46 64 00       	push   0x6446a0
  59b73d:	50                   	push   eax
  59b73e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59b745:	83 ec 28             	sub    esp,0x28
  59b748:	53                   	push   ebx
  59b749:	55                   	push   ebp
  59b74a:	8b d9                	mov    ebx,ecx
  59b74c:	56                   	push   esi
  59b74d:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  59b751:	57                   	push   edi
  59b752:	e8 99 fa ff ff       	call   0x59b1f0
  59b757:	84 c0                	test   al,al
  59b759:	0f 85 a8 00 00 00    	jne    0x59b807
  59b75f:	8a 44 24 48          	mov    al,BYTE PTR [esp+0x48]
  59b763:	bf 64 71 6a 00       	mov    edi,0x6a7164
  59b768:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  59b76c:	83 c9 ff             	or     ecx,0xffffffff
  59b76f:	33 c0                	xor    eax,eax
  59b771:	33 f6                	xor    esi,esi
  59b773:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59b775:	f7 d1                	not    ecx
  59b777:	49                   	dec    ecx
  59b778:	6a 01                	push   0x1
  59b77a:	8b e9                	mov    ebp,ecx
  59b77c:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59b780:	55                   	push   ebp
  59b781:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  59b785:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
  59b789:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
  59b78d:	e8 ae 61 e6 ff       	call   0x401940
  59b792:	84 c0                	test   al,al
  59b794:	74 25                	je     0x59b7bb
  59b796:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  59b79a:	8b cd                	mov    ecx,ebp
  59b79c:	8b d1                	mov    edx,ecx
  59b79e:	be 64 71 6a 00       	mov    esi,0x6a7164
  59b7a3:	c1 e9 02             	shr    ecx,0x2
  59b7a6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59b7a8:	8b ca                	mov    ecx,edx
  59b7aa:	55                   	push   ebp
  59b7ab:	83 e1 03             	and    ecx,0x3
  59b7ae:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59b7b0:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59b7b4:	e8 d7 89 e6 ff       	call   0x404190
  59b7b9:	33 f6                	xor    esi,esi
  59b7bb:	8d 44 24 28          	lea    eax,[esp+0x28]
  59b7bf:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  59b7c3:	50                   	push   eax
  59b7c4:	6a 6a                	push   0x6a
  59b7c6:	68 c8 70 6a 00       	push   0x6a70c8
  59b7cb:	68 1c 6d 6a 00       	push   0x6a6d1c
  59b7d0:	e8 1b 50 00 00       	call   0x5a07f0
  59b7d5:	ff d0                	call   eax
  59b7d7:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  59b7db:	83 c4 10             	add    esp,0x10
  59b7de:	3b ce                	cmp    ecx,esi
  59b7e0:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  59b7e7:	ff 
  59b7e8:	74 1f                	je     0x59b809
  59b7ea:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  59b7ed:	49                   	dec    ecx
  59b7ee:	84 c0                	test   al,al
  59b7f0:	74 0a                	je     0x59b7fc
  59b7f2:	3c ff                	cmp    al,0xff
  59b7f4:	74 06                	je     0x59b7fc
  59b7f6:	fe c8                	dec    al
  59b7f8:	88 01                	mov    BYTE PTR [ecx],al
  59b7fa:	eb 0d                	jmp    0x59b809
  59b7fc:	51                   	push   ecx
  59b7fd:	e8 ee 2d 06 00       	call   0x5fe5f0
  59b802:	83 c4 04             	add    esp,0x4
  59b805:	eb 02                	jmp    0x59b809
  59b807:	33 f6                	xor    esi,esi
  59b809:	8b cb                	mov    ecx,ebx
  59b80b:	e8 80 fc ff ff       	call   0x59b490
  59b810:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
  59b814:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  59b817:	51                   	push   ecx
  59b818:	8b 4b 14             	mov    ecx,DWORD PTR [ebx+0x14]
  59b81b:	e8 70 27 00 00       	call   0x59df90
  59b820:	8b f8                	mov    edi,eax
  59b822:	8d 4b 30             	lea    ecx,[ebx+0x30]
  59b825:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  59b829:	e8 b2 f9 ff ff       	call   0x59b1e0
  59b82e:	8b d0                	mov    edx,eax
  59b830:	8b cd                	mov    ecx,ebp
  59b832:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  59b836:	e8 a5 f9 ff ff       	call   0x59b1e0
  59b83b:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  59b83f:	3b c2                	cmp    eax,edx
  59b841:	0f 84 f2 00 00 00    	je     0x59b939
  59b847:	8b cf                	mov    ecx,edi
  59b849:	e8 22 cd ff ff       	call   0x598570
  59b84e:	85 c0                	test   eax,eax
  59b850:	74 15                	je     0x59b867
  59b852:	8b cf                	mov    ecx,edi
  59b854:	e8 17 cd ff ff       	call   0x598570
  59b859:	50                   	push   eax
  59b85a:	68 b0 70 6a 00       	push   0x6a70b0
  59b85f:	e8 cc 45 01 00       	call   0x5afe30
  59b864:	83 c4 08             	add    esp,0x8
  59b867:	8b cf                	mov    ecx,edi
  59b869:	e8 02 cd ff ff       	call   0x598570
  59b86e:	85 c0                	test   eax,eax
  59b870:	0f 84 ba 00 00 00    	je     0x59b930
  59b876:	8a 44 24 48          	mov    al,BYTE PTR [esp+0x48]
  59b87a:	bf 3c 71 6a 00       	mov    edi,0x6a713c
  59b87f:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  59b883:	83 c9 ff             	or     ecx,0xffffffff
  59b886:	33 c0                	xor    eax,eax
  59b888:	6a 01                	push   0x1
  59b88a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59b88c:	f7 d1                	not    ecx
  59b88e:	49                   	dec    ecx
  59b88f:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  59b893:	8b e9                	mov    ebp,ecx
  59b895:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59b899:	55                   	push   ebp
  59b89a:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  59b89e:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  59b8a2:	e8 99 60 e6 ff       	call   0x401940
  59b8a7:	84 c0                	test   al,al
  59b8a9:	74 25                	je     0x59b8d0
  59b8ab:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  59b8af:	8b cd                	mov    ecx,ebp
  59b8b1:	8b d1                	mov    edx,ecx
  59b8b3:	be 3c 71 6a 00       	mov    esi,0x6a713c
  59b8b8:	c1 e9 02             	shr    ecx,0x2
  59b8bb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59b8bd:	8b ca                	mov    ecx,edx
  59b8bf:	55                   	push   ebp
  59b8c0:	83 e1 03             	and    ecx,0x3
  59b8c3:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59b8c5:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59b8c9:	e8 c2 88 e6 ff       	call   0x404190
  59b8ce:	33 f6                	xor    esi,esi
  59b8d0:	8d 44 24 18          	lea    eax,[esp+0x18]
  59b8d4:	c7 44 24 40 01 00 00 	mov    DWORD PTR [esp+0x40],0x1
  59b8db:	00 
  59b8dc:	50                   	push   eax
  59b8dd:	6a 79                	push   0x79
  59b8df:	68 c8 70 6a 00       	push   0x6a70c8
  59b8e4:	68 0c 71 6a 00       	push   0x6a710c
  59b8e9:	e8 02 4f 00 00       	call   0x5a07f0
  59b8ee:	ff d0                	call   eax
  59b8f0:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  59b8f4:	83 c4 10             	add    esp,0x10
  59b8f7:	3b c6                	cmp    eax,esi
  59b8f9:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  59b900:	ff 
  59b901:	74 1d                	je     0x59b920
  59b903:	8d 48 ff             	lea    ecx,[eax-0x1]
  59b906:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59b909:	84 c0                	test   al,al
  59b90b:	74 0a                	je     0x59b917
  59b90d:	3c ff                	cmp    al,0xff
  59b90f:	74 06                	je     0x59b917
  59b911:	fe c8                	dec    al
  59b913:	88 01                	mov    BYTE PTR [ecx],al
  59b915:	eb 09                	jmp    0x59b920
  59b917:	51                   	push   ecx
  59b918:	e8 d3 2c 06 00       	call   0x5fe5f0
  59b91d:	83 c4 04             	add    esp,0x4
  59b920:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  59b924:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  59b928:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  59b92c:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59b930:	6a 01                	push   0x1
  59b932:	8b cf                	mov    ecx,edi
  59b934:	e8 47 cc ff ff       	call   0x598580
  59b939:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  59b93d:	89 7b 18             	mov    DWORD PTR [ebx+0x18],edi
  59b940:	51                   	push   ecx
  59b941:	8d 4b 1c             	lea    ecx,[ebx+0x1c]
  59b944:	e8 87 f8 ff ff       	call   0x59b1d0
  59b949:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
  59b94c:	e8 5f c6 ff ff       	call   0x597fb0
  59b951:	8b 08                	mov    ecx,DWORD PTR [eax]
  59b953:	8d 53 20             	lea    edx,[ebx+0x20]
  59b956:	5f                   	pop    edi
  59b957:	5e                   	pop    esi
  59b958:	89 0a                	mov    DWORD PTR [edx],ecx
  59b95a:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  59b95d:	5d                   	pop    ebp
  59b95e:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  59b961:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59b964:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  59b968:	c6 43 2c 00          	mov    BYTE PTR [ebx+0x2c],0x0
  59b96c:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  59b96f:	5b                   	pop    ebx
  59b970:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59b977:	83 c4 34             	add    esp,0x34
  59b97a:	c2 04 00             	ret    0x4
  59b97d:	90                   	nop
  59b97e:	90                   	nop
  59b97f:	90                   	nop
