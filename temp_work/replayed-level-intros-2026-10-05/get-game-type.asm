  5279a5:	8d 4c 24 12          	lea    ecx,[esp+0x12]
  5279a9:	51                   	push   ecx
  5279aa:	68 10 fd 69 00       	push   0x69fd10
  5279af:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5279b3:	e8 58 1e ee ff       	call   0x409810
  5279b8:	8b 8b b0 00 00 00    	mov    ecx,DWORD PTR [ebx+0xb0]
  5279be:	8d 54 24 28          	lea    edx,[esp+0x28]
  5279c2:	68 f0 b7 56 00       	push   0x56b7f0
  5279c7:	52                   	push   edx
  5279c8:	c7 44 24 58 b6 00 00 	mov    DWORD PTR [esp+0x58],0xb6
  5279cf:	00 
  5279d0:	e8 ab b7 0b 00       	call   0x5e3180
  5279d5:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5279d9:	89 6c 24 50          	mov    DWORD PTR [esp+0x50],ebp
  5279dd:	e8 8e ab 01 00       	call   0x542570
  56b7f0:	6a ff                	push   0xffffffff
  56b7f2:	68 a1 08 64 00       	push   0x6408a1
  56b7f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  56b7fd:	50                   	push   eax
  56b7fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  56b805:	81 ec a4 00 00 00    	sub    esp,0xa4
  56b80b:	55                   	push   ebp
  56b80c:	56                   	push   esi
  56b80d:	8d 44 24 30          	lea    eax,[esp+0x30]
  56b811:	57                   	push   edi
  56b812:	50                   	push   eax
  56b813:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  56b81a:	00 
  56b81b:	e8 80 f8 ec ff       	call   0x43b0a0
  56b820:	83 c4 04             	add    esp,0x4
  56b823:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  56b827:	6a 00                	push   0x0
  56b829:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  56b82d:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  56b831:	c7 84 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],0x0
  56b838:	00 00 00 00 
  56b83c:	e8 5f 88 e9 ff       	call   0x4040a0
  56b841:	bf 10 08 69 00       	mov    edi,0x690810
  56b846:	83 c9 ff             	or     ecx,0xffffffff
  56b849:	33 c0                	xor    eax,eax
  56b84b:	6a 01                	push   0x1
  56b84d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  56b84f:	f7 d1                	not    ecx
  56b851:	49                   	dec    ecx
  56b852:	8b e9                	mov    ebp,ecx
  56b854:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  56b858:	55                   	push   ebp
  56b859:	e8 e2 60 e9 ff       	call   0x401940
  56b85e:	84 c0                	test   al,al
  56b860:	74 25                	je     0x56b887
  56b862:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  56b866:	8b cd                	mov    ecx,ebp
  56b868:	8b d1                	mov    edx,ecx
  56b86a:	be 10 08 69 00       	mov    esi,0x690810
  56b86f:	c1 e9 02             	shr    ecx,0x2
  56b872:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  56b874:	8b ca                	mov    ecx,edx
  56b876:	83 e1 03             	and    ecx,0x3
  56b879:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  56b87b:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  56b87f:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  56b883:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  56b887:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  56b88b:	6a 00                	push   0x0
  56b88d:	88 4c 24 14          	mov    BYTE PTR [esp+0x14],cl
  56b891:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  56b895:	c6 84 24 bc 00 00 00 	mov    BYTE PTR [esp+0xbc],0x1
  56b89c:	01 
  56b89d:	e8 fe 87 e9 ff       	call   0x4040a0
  56b8a2:	bf 04 08 69 00       	mov    edi,0x690804
  56b8a7:	83 c9 ff             	or     ecx,0xffffffff
  56b8aa:	33 c0                	xor    eax,eax
  56b8ac:	6a 01                	push   0x1
  56b8ae:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  56b8b0:	f7 d1                	not    ecx
  56b8b2:	49                   	dec    ecx
  56b8b3:	8b e9                	mov    ebp,ecx
  56b8b5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  56b8b9:	55                   	push   ebp
  56b8ba:	e8 81 60 e9 ff       	call   0x401940
  56b8bf:	84 c0                	test   al,al
  56b8c1:	74 25                	je     0x56b8e8
  56b8c3:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  56b8c7:	8b cd                	mov    ecx,ebp
  56b8c9:	8b d1                	mov    edx,ecx
  56b8cb:	be 04 08 69 00       	mov    esi,0x690804
  56b8d0:	c1 e9 02             	shr    ecx,0x2
  56b8d3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  56b8d5:	8b ca                	mov    ecx,edx
  56b8d7:	83 e1 03             	and    ecx,0x3
  56b8da:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  56b8dc:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  56b8e0:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  56b8e4:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  56b8e8:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  56b8ec:	6a 00                	push   0x0
  56b8ee:	51                   	push   ecx
  56b8ef:	8d 54 24 28          	lea    edx,[esp+0x28]
  56b8f3:	6a 00                	push   0x0
  56b8f5:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  56b8f9:	52                   	push   edx
  56b8fa:	50                   	push   eax
  56b8fb:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  56b8ff:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x2
  56b906:	02 
  56b907:	e8 c4 10 04 00       	call   0x5ac9d0
  56b90c:	8b f0                	mov    esi,eax
  56b90e:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  56b911:	3d 00 00 00 80       	cmp    eax,0x80000000
  56b916:	75 18                	jne    0x56b930
  56b918:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  56b91b:	85 c0                	test   eax,eax
  56b91d:	75 05                	jne    0x56b924
  56b91f:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  56b924:	50                   	push   eax
  56b925:	e8 e6 f5 09 00       	call   0x60af10
  56b92a:	83 c4 04             	add    esp,0x4
  56b92d:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  56b930:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  56b934:	8b f8                	mov    edi,eax
  56b936:	e8 65 13 04 00       	call   0x5acca0
  56b93b:	6a 01                	push   0x1
  56b93d:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  56b941:	c6 84 24 bc 00 00 00 	mov    BYTE PTR [esp+0xbc],0x1
  56b948:	01 
  56b949:	e8 52 87 e9 ff       	call   0x4040a0
  56b94e:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  56b952:	85 c0                	test   eax,eax
  56b954:	74 1d                	je     0x56b973
  56b956:	8d 48 ff             	lea    ecx,[eax-0x1]
  56b959:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  56b95c:	84 c0                	test   al,al
  56b95e:	74 0a                	je     0x56b96a
  56b960:	3c ff                	cmp    al,0xff
  56b962:	74 06                	je     0x56b96a
  56b964:	fe c8                	dec    al
  56b966:	88 01                	mov    BYTE PTR [ecx],al
  56b968:	eb 09                	jmp    0x56b973
  56b96a:	51                   	push   ecx
  56b96b:	e8 80 2c 09 00       	call   0x5fe5f0
  56b970:	83 c4 04             	add    esp,0x4
  56b973:	8b b4 24 c0 00 00 00 	mov    esi,DWORD PTR [esp+0xc0]
  56b97a:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  56b97e:	85 c9                	test   ecx,ecx
  56b980:	c7 06 0c f0 64 00    	mov    DWORD PTR [esi],0x64f00c
  56b986:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  56b98d:	89 7e 10             	mov    DWORD PTR [esi+0x10],edi
  56b990:	74 1c                	je     0x56b9ae
  56b992:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  56b995:	84 c0                	test   al,al
  56b997:	74 0b                	je     0x56b9a4
  56b999:	3c ff                	cmp    al,0xff
  56b99b:	74 07                	je     0x56b9a4
  56b99d:	fe c8                	dec    al
  56b99f:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  56b9a2:	eb 0a                	jmp    0x56b9ae
  56b9a4:	49                   	dec    ecx
  56b9a5:	51                   	push   ecx
  56b9a6:	e8 45 2c 09 00       	call   0x5fe5f0
  56b9ab:	83 c4 04             	add    esp,0x4
  56b9ae:	8b 8c 24 b0 00 00 00 	mov    ecx,DWORD PTR [esp+0xb0]
  56b9b5:	8b c6                	mov    eax,esi
  56b9b7:	5f                   	pop    edi
  56b9b8:	5e                   	pop    esi
  56b9b9:	5d                   	pop    ebp
  56b9ba:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  56b9c1:	81 c4 b0 00 00 00    	add    esp,0xb0
  56b9c7:	c3                   	ret
