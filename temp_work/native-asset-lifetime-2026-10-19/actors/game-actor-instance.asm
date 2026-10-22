  49b700:	56                   	push   esi
  49b701:	8b f1                	mov    esi,ecx
  49b703:	e8 18 00 00 00       	call   0x49b720
  49b708:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  49b70d:	74 09                	je     0x49b718
  49b70f:	56                   	push   esi
  49b710:	e8 db 2e 16 00       	call   0x5fe5f0
  49b715:	83 c4 04             	add    esp,0x4
  49b718:	8b c6                	mov    eax,esi
  49b71a:	5e                   	pop    esi
  49b71b:	c2 04 00             	ret    0x4
  49b71e:	90                   	nop
  49b71f:	90                   	nop
  49b720:	6a ff                	push   0xffffffff
  49b722:	68 b2 c8 62 00       	push   0x62c8b2
  49b727:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49b72d:	50                   	push   eax
  49b72e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49b735:	83 ec 18             	sub    esp,0x18
  49b738:	55                   	push   ebp
  49b739:	56                   	push   esi
  49b73a:	8b f1                	mov    esi,ecx
  49b73c:	57                   	push   edi
  49b73d:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  49b741:	c7 06 b4 e7 64 00    	mov    DWORD PTR [esi],0x64e7b4
  49b747:	8a 86 18 01 00 00    	mov    al,BYTE PTR [esi+0x118]
  49b74d:	c7 44 24 2c 03 00 00 	mov    DWORD PTR [esp+0x2c],0x3
  49b754:	00 
  49b755:	84 c0                	test   al,al
  49b757:	74 14                	je     0x49b76d
  49b759:	51                   	push   ecx
  49b75a:	8b c4                	mov    eax,esp
  49b75c:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  49b760:	50                   	push   eax
  49b761:	e8 7a 8b f6 ff       	call   0x4042e0
  49b766:	8b ce                	mov    ecx,esi
  49b768:	e8 13 11 00 00       	call   0x49c880
  49b76d:	8b ce                	mov    ecx,esi
  49b76f:	e8 0c 0b 00 00       	call   0x49c280
  49b774:	33 ed                	xor    ebp,ebp
  49b776:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  49b77a:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
  49b780:	c6 44 24 2c 04       	mov    BYTE PTR [esp+0x2c],0x4
  49b785:	3b cd                	cmp    ecx,ebp
  49b787:	74 15                	je     0x49b79e
  49b789:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  49b78c:	48                   	dec    eax
  49b78d:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  49b790:	75 06                	jne    0x49b798
  49b792:	55                   	push   ebp
  49b793:	e8 28 08 11 00       	call   0x5abfc0
  49b798:	89 ae 10 01 00 00    	mov    DWORD PTR [esi+0x110],ebp
  49b79e:	c6 44 24 2c 03       	mov    BYTE PTR [esp+0x2c],0x3
  49b7a3:	c6 86 0c 01 00 00 00 	mov    BYTE PTR [esi+0x10c],0x0
  49b7aa:	e8 81 c5 07 00       	call   0x517d30
  49b7af:	8b f8                	mov    edi,eax
  49b7b1:	8b 47 64             	mov    eax,DWORD PTR [edi+0x64]
  49b7b4:	3d 00 00 00 80       	cmp    eax,0x80000000
  49b7b9:	75 18                	jne    0x49b7d3
  49b7bb:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  49b7be:	3b c5                	cmp    eax,ebp
  49b7c0:	75 05                	jne    0x49b7c7
  49b7c2:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49b7c7:	50                   	push   eax
  49b7c8:	e8 43 f7 16 00       	call   0x60af10
  49b7cd:	83 c4 04             	add    esp,0x4
  49b7d0:	89 47 64             	mov    DWORD PTR [edi+0x64],eax
  49b7d3:	3b c5                	cmp    eax,ebp
  49b7d5:	74 69                	je     0x49b840
  49b7d7:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
  49b7da:	3b c5                	cmp    eax,ebp
  49b7dc:	75 05                	jne    0x49b7e3
  49b7de:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49b7e3:	8b 8e 84 02 00 00    	mov    ecx,DWORD PTR [esi+0x284]
  49b7e9:	8b 96 80 02 00 00    	mov    edx,DWORD PTR [esi+0x280]
  49b7ef:	51                   	push   ecx
  49b7f0:	52                   	push   edx
  49b7f1:	50                   	push   eax
  49b7f2:	8d 44 24 20          	lea    eax,[esp+0x20]
  49b7f6:	68 f4 4b 69 00       	push   0x694bf4
  49b7fb:	50                   	push   eax
  49b7fc:	e8 8f 2b 11 00       	call   0x5ae390
  49b801:	50                   	push   eax
  49b802:	c6 44 24 44 05       	mov    BYTE PTR [esp+0x44],0x5
  49b807:	e8 f4 46 11 00       	call   0x5aff00
  49b80c:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  49b810:	83 c4 18             	add    esp,0x18
  49b813:	3b c5                	cmp    eax,ebp
  49b815:	74 1d                	je     0x49b834
  49b817:	8d 48 ff             	lea    ecx,[eax-0x1]
  49b81a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49b81d:	84 c0                	test   al,al
  49b81f:	74 0a                	je     0x49b82b
  49b821:	3c ff                	cmp    al,0xff
  49b823:	74 06                	je     0x49b82b
  49b825:	fe c8                	dec    al
  49b827:	88 01                	mov    BYTE PTR [ecx],al
  49b829:	eb 09                	jmp    0x49b834
  49b82b:	51                   	push   ecx
  49b82c:	e8 bf 2d 16 00       	call   0x5fe5f0
  49b831:	83 c4 04             	add    esp,0x4
  49b834:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  49b838:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  49b83c:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  49b840:	8d 8e 9c 01 00 00    	lea    ecx,[esi+0x19c]
  49b846:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  49b84b:	e8 a0 4d 00 00       	call   0x4a05f0
  49b850:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
  49b856:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  49b85b:	3b cd                	cmp    ecx,ebp
  49b85d:	74 15                	je     0x49b874
  49b85f:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  49b862:	48                   	dec    eax
  49b863:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  49b866:	75 06                	jne    0x49b86e
  49b868:	55                   	push   ebp
  49b869:	e8 52 07 11 00       	call   0x5abfc0
  49b86e:	89 ae 10 01 00 00    	mov    DWORD PTR [esi+0x110],ebp
  49b874:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  49b87a:	3b c5                	cmp    eax,ebp
  49b87c:	74 1d                	je     0x49b89b
  49b87e:	8d 48 ff             	lea    ecx,[eax-0x1]
  49b881:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49b884:	84 c0                	test   al,al
  49b886:	74 0a                	je     0x49b892
  49b888:	3c ff                	cmp    al,0xff
  49b88a:	74 06                	je     0x49b892
  49b88c:	fe c8                	dec    al
  49b88e:	88 01                	mov    BYTE PTR [ecx],al
  49b890:	eb 09                	jmp    0x49b89b
  49b892:	51                   	push   ecx
  49b893:	e8 58 2d 16 00       	call   0x5fe5f0
  49b898:	83 c4 04             	add    esp,0x4
  49b89b:	8b ce                	mov    ecx,esi
  49b89d:	89 ae fc 00 00 00    	mov    DWORD PTR [esi+0xfc],ebp
  49b8a3:	89 ae 00 01 00 00    	mov    DWORD PTR [esi+0x100],ebp
  49b8a9:	89 ae 04 01 00 00    	mov    DWORD PTR [esi+0x104],ebp
  49b8af:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  49b8b6:	ff 
  49b8b7:	e8 84 66 06 00       	call   0x501f40
  49b8bc:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  49b8c0:	5f                   	pop    edi
  49b8c1:	5e                   	pop    esi
  49b8c2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49b8c9:	5d                   	pop    ebp
  49b8ca:	83 c4 24             	add    esp,0x24
  49b8cd:	c3                   	ret
  49b8ce:	90                   	nop
  49b8cf:	90                   	nop
  49b8d0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49b8d6:	6a ff                	push   0xffffffff
  49b8d8:	68 d8 c8 62 00       	push   0x62c8d8
  49b8dd:	50                   	push   eax
  49b8de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49b8e5:	83 ec 30             	sub    esp,0x30
  49b8e8:	53                   	push   ebx
  49b8e9:	8b d9                	mov    ebx,ecx
  49b8eb:	56                   	push   esi
  49b8ec:	57                   	push   edi
  49b8ed:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
  49b8f0:	33 ff                	xor    edi,edi
  49b8f2:	3b c7                	cmp    eax,edi
  49b8f4:	0f 84 f6 01 00 00    	je     0x49baf0
  49b8fa:	8a 83 08 02 00 00    	mov    al,BYTE PTR [ebx+0x208]
  49b900:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  49b904:	84 c0                	test   al,al
  49b906:	74 08                	je     0x49b910
  49b908:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  49b90f:	00 
  49b910:	8a 83 0a 02 00 00    	mov    al,BYTE PTR [ebx+0x20a]
  49b916:	84 c0                	test   al,al
  49b918:	74 0a                	je     0x49b924
  49b91a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  49b91e:	0c 04                	or     al,0x4
  49b920:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  49b924:	8a 83 0b 02 00 00    	mov    al,BYTE PTR [ebx+0x20b]
  49b92a:	84 c0                	test   al,al
  49b92c:	74 0a                	je     0x49b938
  49b92e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  49b932:	0c 08                	or     al,0x8
  49b934:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  49b938:	8a 83 09 02 00 00    	mov    al,BYTE PTR [ebx+0x209]
  49b93e:	84 c0                	test   al,al
  49b940:	74 0a                	je     0x49b94c
  49b942:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  49b946:	0c 02                	or     al,0x2
  49b948:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  49b94c:	8a 83 0c 02 00 00    	mov    al,BYTE PTR [ebx+0x20c]
  49b952:	84 c0                	test   al,al
  49b954:	74 0a                	je     0x49b960
  49b956:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  49b95a:	0c 10                	or     al,0x10
  49b95c:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  49b960:	8d 44 24 18          	lea    eax,[esp+0x18]
  49b964:	55                   	push   ebp
  49b965:	50                   	push   eax
  49b966:	8b cb                	mov    ecx,ebx
  49b968:	e8 73 89 f6 ff       	call   0x4042e0
  49b96d:	8b f0                	mov    esi,eax
  49b96f:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  49b973:	8b 06                	mov    eax,DWORD PTR [esi]
  49b975:	89 7c 24 48          	mov    DWORD PTR [esp+0x48],edi
  49b979:	3b c7                	cmp    eax,edi
  49b97b:	0f 85 8d 00 00 00    	jne    0x49ba0e
  49b981:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  49b985:	57                   	push   edi
  49b986:	88 4c 24 34          	mov    BYTE PTR [esp+0x34],cl
  49b98a:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  49b98e:	e8 0d 87 f6 ff       	call   0x4040a0
  49b993:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49b998:	83 c9 ff             	or     ecx,0xffffffff
  49b99b:	33 c0                	xor    eax,eax
  49b99d:	6a 01                	push   0x1
  49b99f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49b9a1:	f7 d1                	not    ecx
  49b9a3:	49                   	dec    ecx
  49b9a4:	8b e9                	mov    ebp,ecx
  49b9a6:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  49b9aa:	55                   	push   ebp
  49b9ab:	e8 90 5f f6 ff       	call   0x401940
  49b9b0:	84 c0                	test   al,al
  49b9b2:	74 27                	je     0x49b9db
  49b9b4:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
  49b9b8:	8b cd                	mov    ecx,ebp
  49b9ba:	8b d1                	mov    edx,ecx
  49b9bc:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  49b9c1:	c1 e9 02             	shr    ecx,0x2
  49b9c4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49b9c6:	8b ca                	mov    ecx,edx
  49b9c8:	55                   	push   ebp
  49b9c9:	83 e1 03             	and    ecx,0x3
  49b9cc:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49b9ce:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  49b9d2:	e8 b9 87 f6 ff       	call   0x404190
  49b9d7:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  49b9db:	8d 44 24 30          	lea    eax,[esp+0x30]
  49b9df:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  49b9e4:	50                   	push   eax
  49b9e5:	68 b6 00 00 00       	push   0xb6
  49b9ea:	68 38 d6 68 00       	push   0x68d638
  49b9ef:	68 2c d6 68 00       	push   0x68d62c
  49b9f4:	e8 f7 4d 10 00       	call   0x5a07f0
  49b9f9:	ff d0                	call   eax
  49b9fb:	83 c4 10             	add    esp,0x10
  49b9fe:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  49ba02:	c6 44 24 48 00       	mov    BYTE PTR [esp+0x48],0x0
  49ba07:	6a 01                	push   0x1
  49ba09:	e8 92 86 f6 ff       	call   0x4040a0
  49ba0e:	8b 36                	mov    esi,DWORD PTR [esi]
  49ba10:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  49ba14:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  49ba17:	85 c0                	test   eax,eax
  49ba19:	0f 85 90 00 00 00    	jne    0x49baaf
  49ba1f:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  49ba23:	6a 00                	push   0x0
  49ba25:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  49ba29:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49ba2d:	e8 6e 86 f6 ff       	call   0x4040a0
  49ba32:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49ba37:	83 c9 ff             	or     ecx,0xffffffff
  49ba3a:	33 c0                	xor    eax,eax
  49ba3c:	6a 01                	push   0x1
  49ba3e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49ba40:	f7 d1                	not    ecx
  49ba42:	49                   	dec    ecx
  49ba43:	8b e9                	mov    ebp,ecx
  49ba45:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49ba49:	55                   	push   ebp
  49ba4a:	e8 f1 5e f6 ff       	call   0x401940
  49ba4f:	84 c0                	test   al,al
  49ba51:	74 29                	je     0x49ba7c
  49ba53:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  49ba57:	8b cd                	mov    ecx,ebp
  49ba59:	8b d1                	mov    edx,ecx
  49ba5b:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  49ba60:	c1 e9 02             	shr    ecx,0x2
  49ba63:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49ba65:	8b ca                	mov    ecx,edx
  49ba67:	83 e1 03             	and    ecx,0x3
  49ba6a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49ba6c:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  49ba70:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  49ba74:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  49ba78:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  49ba7c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49ba80:	c6 44 24 48 02       	mov    BYTE PTR [esp+0x48],0x2
  49ba85:	51                   	push   ecx
  49ba86:	68 44 01 00 00       	push   0x144
  49ba8b:	68 b8 e1 68 00       	push   0x68e1b8
  49ba90:	68 a8 e1 68 00       	push   0x68e1a8
  49ba95:	e8 56 4d 10 00       	call   0x5a07f0
  49ba9a:	ff d0                	call   eax
  49ba9c:	83 c4 10             	add    esp,0x10
  49ba9f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49baa3:	c6 44 24 48 00       	mov    BYTE PTR [esp+0x48],0x0
  49baa8:	6a 01                	push   0x1
  49baaa:	e8 f1 85 f6 ff       	call   0x4040a0
  49baaf:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  49bab3:	8b 8b 14 01 00 00    	mov    ecx,DWORD PTR [ebx+0x114]
  49bab9:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  49babc:	52                   	push   edx
  49babd:	51                   	push   ecx
  49babe:	50                   	push   eax
  49babf:	e8 ac e0 11 00       	call   0x5b9b70
  49bac4:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  49bac8:	83 c4 0c             	add    esp,0xc
  49bacb:	85 c0                	test   eax,eax
  49bacd:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  49bad4:	ff 
  49bad5:	5d                   	pop    ebp
  49bad6:	74 18                	je     0x49baf0
  49bad8:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  49badb:	8b c8                	mov    ecx,eax
  49badd:	83 c0 14             	add    eax,0x14
  49bae0:	4e                   	dec    esi
  49bae1:	8b d6                	mov    edx,esi
  49bae3:	85 d2                	test   edx,edx
  49bae5:	89 30                	mov    DWORD PTR [eax],esi
  49bae7:	75 07                	jne    0x49baf0
  49bae9:	6a 00                	push   0x0
  49baeb:	e8 d0 04 11 00       	call   0x5abfc0
  49baf0:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  49baf4:	5f                   	pop    edi
  49baf5:	5e                   	pop    esi
  49baf6:	5b                   	pop    ebx
  49baf7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49bafe:	83 c4 3c             	add    esp,0x3c
  49bb01:	c3                   	ret
  49bb02:	90                   	nop
  49bb03:	90                   	nop
  49bb04:	90                   	nop
  49bb05:	90                   	nop
  49bb06:	90                   	nop
  49bb07:	90                   	nop
  49bb08:	90                   	nop
  49bb09:	90                   	nop
  49bb0a:	90                   	nop
  49bb0b:	90                   	nop
  49bb0c:	90                   	nop
  49bb0d:	90                   	nop
  49bb0e:	90                   	nop
  49bb0f:	90                   	nop
  49bb10:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  49bb14:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  49bb18:	56                   	push   esi
  49bb19:	8b f1                	mov    esi,ecx
  49bb1b:	8b 08                	mov    ecx,DWORD PTR [eax]
  49bb1d:	8b 02                	mov    eax,DWORD PTR [edx]
  49bb1f:	51                   	push   ecx
  49bb20:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  49bb24:	50                   	push   eax
  49bb25:	8b 11                	mov    edx,DWORD PTR [ecx]
  49bb27:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
  49bb2d:	52                   	push   edx
  49bb2e:	e8 ed 72 11 00       	call   0x5b2e20
  49bb33:	6a 01                	push   0x1
  49bb35:	8b ce                	mov    ecx,esi
  49bb37:	e8 a4 1a 00 00       	call   0x49d5e0
  49bb3c:	8d 86 68 01 00 00    	lea    eax,[esi+0x168]
  49bb42:	8b ce                	mov    ecx,esi
  49bb44:	50                   	push   eax
  49bb45:	c6 86 98 01 00 00 01 	mov    BYTE PTR [esi+0x198],0x1
  49bb4c:	e8 8f 8c f8 ff       	call   0x4247e0
  49bb51:	8b c8                	mov    ecx,eax
  49bb53:	33 d2                	xor    edx,edx
  49bb55:	e8 46 95 11 00       	call   0x5b50a0
  49bb5a:	6a 00                	push   0x0
  49bb5c:	8b ce                	mov    ecx,esi
  49bb5e:	e8 3d 7c f9 ff       	call   0x4337a0
  49bb63:	5e                   	pop    esi
  49bb64:	c2 0c 00             	ret    0xc
  49bb67:	90                   	nop
  49bb68:	90                   	nop
  49bb69:	90                   	nop
  49bb6a:	90                   	nop
  49bb6b:	90                   	nop
  49bb6c:	90                   	nop
  49bb6d:	90                   	nop
  49bb6e:	90                   	nop
  49bb6f:	90                   	nop
  49bb70:	56                   	push   esi
  49bb71:	8b f1                	mov    esi,ecx
  49bb73:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  49bb77:	6a 01                	push   0x1
  49bb79:	8d 86 8c 01 00 00    	lea    eax,[esi+0x18c]
  49bb7f:	8b 11                	mov    edx,DWORD PTR [ecx]
  49bb81:	89 10                	mov    DWORD PTR [eax],edx
  49bb83:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  49bb86:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  49bb89:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  49bb8c:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  49bb8f:	8b ce                	mov    ecx,esi
  49bb91:	e8 4a 1a 00 00       	call   0x49d5e0
  49bb96:	8d 96 68 01 00 00    	lea    edx,[esi+0x168]
  49bb9c:	8b ce                	mov    ecx,esi
  49bb9e:	52                   	push   edx
  49bb9f:	c6 86 98 01 00 00 01 	mov    BYTE PTR [esi+0x198],0x1
  49bba6:	e8 35 8c f8 ff       	call   0x4247e0
  49bbab:	8b c8                	mov    ecx,eax
  49bbad:	33 d2                	xor    edx,edx
  49bbaf:	e8 ec 94 11 00       	call   0x5b50a0
  49bbb4:	6a 00                	push   0x0
  49bbb6:	8b ce                	mov    ecx,esi
  49bbb8:	e8 e3 7b f9 ff       	call   0x4337a0
  49bbbd:	5e                   	pop    esi
  49bbbe:	c2 04 00             	ret    0x4
  49bbc1:	90                   	nop
  49bbc2:	90                   	nop
  49bbc3:	90                   	nop
  49bbc4:	90                   	nop
  49bbc5:	90                   	nop
  49bbc6:	90                   	nop
  49bbc7:	90                   	nop
  49bbc8:	90                   	nop
  49bbc9:	90                   	nop
  49bbca:	90                   	nop
  49bbcb:	90                   	nop
  49bbcc:	90                   	nop
  49bbcd:	90                   	nop
  49bbce:	90                   	nop
  49bbcf:	90                   	nop
  49bbd0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  49bbd4:	81 c1 8c 01 00 00    	add    ecx,0x18c
  49bbda:	56                   	push   esi
  49bbdb:	8b d0                	mov    edx,eax
  49bbdd:	8b 31                	mov    esi,DWORD PTR [ecx]
  49bbdf:	89 32                	mov    DWORD PTR [edx],esi
  49bbe1:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
  49bbe4:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
  49bbe7:	5e                   	pop    esi
  49bbe8:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  49bbeb:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  49bbee:	c2 04 00             	ret    0x4
  49bbf1:	90                   	nop
  49bbf2:	90                   	nop
  49bbf3:	90                   	nop
  49bbf4:	90                   	nop
  49bbf5:	90                   	nop
  49bbf6:	90                   	nop
  49bbf7:	90                   	nop
  49bbf8:	90                   	nop
  49bbf9:	90                   	nop
  49bbfa:	90                   	nop
  49bbfb:	90                   	nop
  49bbfc:	90                   	nop
  49bbfd:	90                   	nop
  49bbfe:	90                   	nop
  49bbff:	90                   	nop
  49bc00:	83 ec 48             	sub    esp,0x48
  49bc03:	56                   	push   esi
  49bc04:	57                   	push   edi
  49bc05:	8b f1                	mov    esi,ecx
  49bc07:	8d 7c 24 20          	lea    edi,[esp+0x20]
  49bc0b:	e8 d0 8b f8 ff       	call   0x4247e0
  49bc10:	8b c8                	mov    ecx,eax
  49bc12:	8b d7                	mov    edx,edi
  49bc14:	e8 67 8e 11 00       	call   0x5b4a80
  49bc19:	8b 06                	mov    eax,DWORD PTR [esi]
  49bc1b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  49bc1f:	51                   	push   ecx
  49bc20:	8b ce                	mov    ecx,esi
  49bc22:	ff 50 48             	call   DWORD PTR [eax+0x48]
  49bc25:	8b 10                	mov    edx,DWORD PTR [eax]
  49bc27:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  49bc2b:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  49bc2e:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  49bc32:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  49bc36:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  49bc39:	8d 44 24 44          	lea    eax,[esp+0x44]
  49bc3d:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  49bc41:	50                   	push   eax
  49bc42:	8d 54 24 0c          	lea    edx,[esp+0xc]
  49bc46:	e8 95 73 11 00       	call   0x5b2fe0
  49bc4b:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  49bc4f:	8d 54 24 08          	lea    edx,[esp+0x8]
  49bc53:	51                   	push   ecx
  49bc54:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49bc58:	e8 83 73 11 00       	call   0x5b2fe0
  49bc5d:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  49bc61:	b9 06 00 00 00       	mov    ecx,0x6
  49bc66:	8d 74 24 38          	lea    esi,[esp+0x38]
  49bc6a:	8b f8                	mov    edi,eax
  49bc6c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49bc6e:	5f                   	pop    edi
  49bc6f:	5e                   	pop    esi
  49bc70:	83 c4 48             	add    esp,0x48
  49bc73:	c2 04 00             	ret    0x4
  49bc76:	90                   	nop
  49bc77:	90                   	nop
  49bc78:	90                   	nop
  49bc79:	90                   	nop
  49bc7a:	90                   	nop
  49bc7b:	90                   	nop
  49bc7c:	90                   	nop
  49bc7d:	90                   	nop
  49bc7e:	90                   	nop
  49bc7f:	90                   	nop
  49bc80:	83 ec 18             	sub    esp,0x18
  49bc83:	8d 44 24 00          	lea    eax,[esp+0x0]
  49bc87:	56                   	push   esi
  49bc88:	8b f1                	mov    esi,ecx
  49bc8a:	57                   	push   edi
  49bc8b:	50                   	push   eax
  49bc8c:	8d 96 28 01 00 00    	lea    edx,[esi+0x128]
  49bc92:	8d 8e 1c 01 00 00    	lea    ecx,[esi+0x11c]
  49bc98:	e8 63 73 11 00       	call   0x5b3000
  49bc9d:	8b 16                	mov    edx,DWORD PTR [esi]
  49bc9f:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  49bca3:	51                   	push   ecx
  49bca4:	8d 44 24 18          	lea    eax,[esp+0x18]
  49bca8:	68 00 00 00 3f       	push   0x3f000000
  49bcad:	50                   	push   eax
  49bcae:	8b ce                	mov    ecx,esi
  49bcb0:	8d 7c 24 14          	lea    edi,[esp+0x14]
  49bcb4:	ff 52 48             	call   DWORD PTR [edx+0x48]
  49bcb7:	8b c8                	mov    ecx,eax
  49bcb9:	8b d7                	mov    edx,edi
  49bcbb:	e8 60 73 11 00       	call   0x5b3020
  49bcc0:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  49bcc4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  49bcc8:	8b c8                	mov    ecx,eax
  49bcca:	5f                   	pop    edi
  49bccb:	5e                   	pop    esi
  49bccc:	89 11                	mov    DWORD PTR [ecx],edx
  49bcce:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  49bcd2:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  49bcd5:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  49bcd9:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  49bcdc:	83 c4 18             	add    esp,0x18
  49bcdf:	c2 04 00             	ret    0x4
  49bce2:	90                   	nop
  49bce3:	90                   	nop
  49bce4:	90                   	nop
  49bce5:	90                   	nop
  49bce6:	90                   	nop
  49bce7:	90                   	nop
  49bce8:	90                   	nop
  49bce9:	90                   	nop
  49bcea:	90                   	nop
  49bceb:	90                   	nop
  49bcec:	90                   	nop
  49bced:	90                   	nop
  49bcee:	90                   	nop
  49bcef:	90                   	nop
  49bcf0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49bcf6:	6a ff                	push   0xffffffff
  49bcf8:	68 2b c9 62 00       	push   0x62c92b
  49bcfd:	50                   	push   eax
  49bcfe:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  49bd03:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49bd0a:	81 ec 80 00 00 00    	sub    esp,0x80
  49bd10:	85 c0                	test   eax,eax
  49bd12:	53                   	push   ebx
  49bd13:	55                   	push   ebp
  49bd14:	56                   	push   esi
  49bd15:	57                   	push   edi
  49bd16:	8b f1                	mov    esi,ecx
  49bd18:	75 05                	jne    0x49bd1f
  49bd1a:	e8 61 07 02 00       	call   0x4bc480
  49bd1f:	8d 88 5c 05 00 00    	lea    ecx,[eax+0x55c]
  49bd25:	e8 b6 7a f9 ff       	call   0x4337e0
  49bd2a:	85 c0                	test   eax,eax
  49bd2c:	0f 84 2e 02 00 00    	je     0x49bf60
  49bd32:	8a 86 18 01 00 00    	mov    al,BYTE PTR [esi+0x118]
  49bd38:	84 c0                	test   al,al
  49bd3a:	0f 84 20 02 00 00    	je     0x49bf60
  49bd40:	8b 86 18 02 00 00    	mov    eax,DWORD PTR [esi+0x218]
  49bd46:	85 c0                	test   eax,eax
  49bd48:	0f 84 12 02 00 00    	je     0x49bf60
  49bd4e:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  49bd53:	85 c0                	test   eax,eax
  49bd55:	75 05                	jne    0x49bd5c
  49bd57:	e8 24 f5 0b 00       	call   0x55b280
  49bd5c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49bd60:	51                   	push   ecx
  49bd61:	8b c8                	mov    ecx,eax
  49bd63:	e8 b8 e1 f6 ff       	call   0x409f20
  49bd68:	8b e8                	mov    ebp,eax
  49bd6a:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  49bd6d:	c7 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],0x0
  49bd74:	00 00 00 00 
  49bd78:	85 c0                	test   eax,eax
  49bd7a:	75 6a                	jne    0x49bde6
  49bd7c:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  49bd80:	6a 00                	push   0x0
  49bd82:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  49bd86:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  49bd8a:	e8 11 83 f6 ff       	call   0x4040a0
  49bd8f:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49bd94:	83 c9 ff             	or     ecx,0xffffffff
  49bd97:	33 c0                	xor    eax,eax
  49bd99:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49bd9b:	f7 d1                	not    ecx
  49bd9d:	49                   	dec    ecx
  49bd9e:	51                   	push   ecx
  49bd9f:	68 70 3f 6b 00       	push   0x6b3f70
  49bda4:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  49bda8:	e8 43 83 f6 ff       	call   0x4040f0
  49bdad:	8d 44 24 30          	lea    eax,[esp+0x30]
  49bdb1:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x1
  49bdb8:	01 
  49bdb9:	50                   	push   eax
  49bdba:	68 b6 00 00 00       	push   0xb6
  49bdbf:	68 38 d6 68 00       	push   0x68d638
  49bdc4:	68 2c d6 68 00       	push   0x68d62c
  49bdc9:	e8 22 4a 10 00       	call   0x5a07f0
  49bdce:	ff d0                	call   eax
  49bdd0:	83 c4 10             	add    esp,0x10
  49bdd3:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  49bdd7:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x0
  49bdde:	00 
  49bddf:	6a 01                	push   0x1
  49bde1:	e8 ba 82 f6 ff       	call   0x4040a0
  49bde6:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  49bde9:	8d 54 24 14          	lea    edx,[esp+0x14]
  49bded:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  49bdf1:	52                   	push   edx
  49bdf2:	8b ce                	mov    ecx,esi
  49bdf4:	e8 e7 84 f6 ff       	call   0x4042e0
  49bdf9:	8b e8                	mov    ebp,eax
  49bdfb:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  49bdfe:	b3 02                	mov    bl,0x2
  49be00:	85 c0                	test   eax,eax
  49be02:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  49be09:	75 69                	jne    0x49be74
  49be0b:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  49be0f:	6a 00                	push   0x0
  49be11:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49be15:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  49be19:	e8 82 82 f6 ff       	call   0x4040a0
  49be1e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49be23:	83 c9 ff             	or     ecx,0xffffffff
  49be26:	33 c0                	xor    eax,eax
  49be28:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49be2a:	f7 d1                	not    ecx
  49be2c:	49                   	dec    ecx
  49be2d:	51                   	push   ecx
  49be2e:	68 70 3f 6b 00       	push   0x6b3f70
  49be33:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49be37:	e8 b4 82 f6 ff       	call   0x4040f0
  49be3c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49be40:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x3
  49be47:	03 
  49be48:	51                   	push   ecx
  49be49:	68 b6 00 00 00       	push   0xb6
  49be4e:	68 38 d6 68 00       	push   0x68d638
  49be53:	68 2c d6 68 00       	push   0x68d62c
  49be58:	e8 93 49 10 00       	call   0x5a07f0
  49be5d:	ff d0                	call   eax
  49be5f:	83 c4 10             	add    esp,0x10
  49be62:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49be66:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  49be6d:	6a 01                	push   0x1
  49be6f:	e8 2c 82 f6 ff       	call   0x4040a0
  49be74:	8b 6d 00             	mov    ebp,DWORD PTR [ebp+0x0]
  49be77:	8b 45 5c             	mov    eax,DWORD PTR [ebp+0x5c]
  49be7a:	85 c0                	test   eax,eax
  49be7c:	75 69                	jne    0x49bee7
  49be7e:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  49be82:	6a 00                	push   0x0
  49be84:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  49be88:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  49be8c:	e8 0f 82 f6 ff       	call   0x4040a0
  49be91:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49be96:	83 c9 ff             	or     ecx,0xffffffff
  49be99:	33 c0                	xor    eax,eax
  49be9b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49be9d:	f7 d1                	not    ecx
  49be9f:	49                   	dec    ecx
  49bea0:	51                   	push   ecx
  49bea1:	68 70 3f 6b 00       	push   0x6b3f70
  49bea6:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  49beaa:	e8 41 82 f6 ff       	call   0x4040f0
  49beaf:	8d 44 24 40          	lea    eax,[esp+0x40]
  49beb3:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x4
  49beba:	04 
  49bebb:	50                   	push   eax
  49bebc:	68 44 01 00 00       	push   0x144
  49bec1:	68 b8 e1 68 00       	push   0x68e1b8
  49bec6:	68 a8 e1 68 00       	push   0x68e1a8
  49becb:	e8 20 49 10 00       	call   0x5a07f0
  49bed0:	ff d0                	call   eax
  49bed2:	83 c4 10             	add    esp,0x10
  49bed5:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  49bed9:	88 9c 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],bl
  49bee0:	6a 01                	push   0x1
  49bee2:	e8 b9 81 f6 ff       	call   0x4040a0
  49bee7:	8b 8e 18 02 00 00    	mov    ecx,DWORD PTR [esi+0x218]
  49beed:	68 ff 00 00 00       	push   0xff
  49bef2:	68 ff 00 00 00       	push   0xff
  49bef7:	8b 45 5c             	mov    eax,DWORD PTR [ebp+0x5c]
  49befa:	68 ff 00 00 00       	push   0xff
  49beff:	68 ff 00 00 00       	push   0xff
  49bf04:	68 ff 00 00 00       	push   0xff
  49bf09:	68 ff 00 00 00       	push   0xff
  49bf0e:	51                   	push   ecx
  49bf0f:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  49bf13:	8d 96 74 02 00 00    	lea    edx,[esi+0x274]
  49bf19:	81 c1 e0 01 00 00    	add    ecx,0x1e0
  49bf1f:	52                   	push   edx
  49bf20:	51                   	push   ecx
  49bf21:	50                   	push   eax
  49bf22:	e8 19 4a 11 00       	call   0x5b0940
  49bf27:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  49bf2b:	83 c4 28             	add    esp,0x28
  49bf2e:	85 c9                	test   ecx,ecx
  49bf30:	c6 84 24 98 00 00 00 	mov    BYTE PTR [esp+0x98],0x0
  49bf37:	00 
  49bf38:	74 0d                	je     0x49bf47
  49bf3a:	e8 91 d9 f6 ff       	call   0x4098d0
  49bf3f:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  49bf46:	00 
  49bf47:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  49bf4b:	83 cb ff             	or     ebx,0xffffffff
  49bf4e:	85 c9                	test   ecx,ecx
  49bf50:	89 9c 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],ebx
  49bf57:	74 0a                	je     0x49bf63
  49bf59:	e8 72 d9 f6 ff       	call   0x4098d0
  49bf5e:	eb 03                	jmp    0x49bf63
  49bf60:	83 cb ff             	or     ebx,0xffffffff
  49bf63:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  49bf69:	85 ff                	test   edi,edi
  49bf6b:	75 07                	jne    0x49bf74
  49bf6d:	e8 0e 05 02 00       	call   0x4bc480
  49bf72:	8b f8                	mov    edi,eax
  49bf74:	8b 87 c0 05 00 00    	mov    eax,DWORD PTR [edi+0x5c0]
  49bf7a:	3d 00 00 00 80       	cmp    eax,0x80000000
  49bf7f:	75 1e                	jne    0x49bf9f
  49bf81:	8b 87 74 05 00 00    	mov    eax,DWORD PTR [edi+0x574]
  49bf87:	85 c0                	test   eax,eax
  49bf89:	75 05                	jne    0x49bf90
  49bf8b:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49bf90:	50                   	push   eax
  49bf91:	e8 7a ef 16 00       	call   0x60af10
  49bf96:	83 c4 04             	add    esp,0x4
  49bf99:	89 87 c0 05 00 00    	mov    DWORD PTR [edi+0x5c0],eax
  49bf9f:	85 c0                	test   eax,eax
  49bfa1:	0f 84 48 01 00 00    	je     0x49c0ef
  49bfa7:	8a 86 18 01 00 00    	mov    al,BYTE PTR [esi+0x118]
  49bfad:	84 c0                	test   al,al
  49bfaf:	0f 84 3a 01 00 00    	je     0x49c0ef
  49bfb5:	51                   	push   ecx
  49bfb6:	8b ce                	mov    ecx,esi
  49bfb8:	8b d4                	mov    edx,esp
  49bfba:	89 64 24 20          	mov    DWORD PTR [esp+0x20],esp
  49bfbe:	52                   	push   edx
  49bfbf:	e8 1c 83 f6 ff       	call   0x4042e0
  49bfc4:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  49bfc8:	e8 d3 85 0b 00       	call   0x5545a0
  49bfcd:	c7 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],0x5
  49bfd4:	05 00 00 00 
  49bfd8:	c7 44 24 30 00 00 34 	mov    DWORD PTR [esp+0x30],0x43340000
  49bfdf:	43 
  49bfe0:	c7 44 24 34 00 00 34 	mov    DWORD PTR [esp+0x34],0x43340000
  49bfe7:	43 
  49bfe8:	c7 44 24 38 00 00 34 	mov    DWORD PTR [esp+0x38],0x43340000
  49bfef:	43 
  49bff0:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
  49bff7:	00 
  49bff8:	e8 53 82 0b 00       	call   0x554250
  49bffd:	d9 05 30 e8 64 00    	fld    DWORD PTR ds:0x64e830
  49c003:	83 e8 00             	sub    eax,0x0
  49c006:	74 37                	je     0x49c03f
  49c008:	48                   	dec    eax
  49c009:	74 27                	je     0x49c032
  49c00b:	48                   	dec    eax
  49c00c:	74 11                	je     0x49c01f
  49c00e:	68 2c 4c 69 00       	push   0x694c2c
  49c013:	dd d8                	fstp   st(0)
  49c015:	e8 16 3e 11 00       	call   0x5afe30
  49c01a:	83 c4 04             	add    esp,0x4
  49c01d:	eb 34                	jmp    0x49c053
  49c01f:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  49c023:	8d 44 24 40          	lea    eax,[esp+0x40]
  49c027:	8b ce                	mov    ecx,esi
  49c029:	50                   	push   eax
  49c02a:	e8 d1 fb ff ff       	call   0x49bc00
  49c02f:	50                   	push   eax
  49c030:	eb 18                	jmp    0x49c04a
  49c032:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  49c036:	8d 8e 34 01 00 00    	lea    ecx,[esi+0x134]
  49c03c:	51                   	push   ecx
  49c03d:	eb 0b                	jmp    0x49c04a
  49c03f:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  49c043:	8d 96 1c 01 00 00    	lea    edx,[esi+0x11c]
  49c049:	52                   	push   edx
  49c04a:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  49c04e:	e8 dd 89 0b 00       	call   0x554a30
  49c053:	8b 16                	mov    edx,DWORD PTR [esi]
  49c055:	8d 44 24 30          	lea    eax,[esp+0x30]
  49c059:	50                   	push   eax
  49c05a:	8d 44 24 24          	lea    eax,[esp+0x24]
  49c05e:	50                   	push   eax
  49c05f:	8b ce                	mov    ecx,esi
  49c061:	ff 52 48             	call   DWORD PTR [edx+0x48]
  49c064:	50                   	push   eax
  49c065:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  49c069:	e8 22 88 0b 00       	call   0x554890
  49c06e:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  49c072:	c7 44 24 30 00 00 5c 	mov    DWORD PTR [esp+0x30],0x435c0000
  49c079:	43 
  49c07a:	51                   	push   ecx
  49c07b:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  49c07f:	c7 44 24 38 00 00 34 	mov    DWORD PTR [esp+0x38],0x43340000
  49c086:	43 
  49c087:	c7 44 24 3c 00 00 34 	mov    DWORD PTR [esp+0x3c],0x43340000
  49c08e:	43 
  49c08f:	c7 44 24 5c 00 00 40 	mov    DWORD PTR [esp+0x5c],0xc0400000
  49c096:	c0 
  49c097:	c7 44 24 60 00 00 40 	mov    DWORD PTR [esp+0x60],0xc0400000
  49c09e:	c0 
  49c09f:	c7 44 24 64 00 00 40 	mov    DWORD PTR [esp+0x64],0xc0400000
  49c0a6:	c0 
  49c0a7:	c7 44 24 68 00 00 40 	mov    DWORD PTR [esp+0x68],0x40400000
  49c0ae:	40 
  49c0af:	c7 44 24 6c 00 00 40 	mov    DWORD PTR [esp+0x6c],0x40400000
  49c0b6:	40 
  49c0b7:	c7 44 24 70 00 00 40 	mov    DWORD PTR [esp+0x70],0x40400000
  49c0be:	40 
  49c0bf:	e8 6c 89 0b 00       	call   0x554a30
  49c0c4:	8b 06                	mov    eax,DWORD PTR [esi]
  49c0c6:	8d 54 24 30          	lea    edx,[esp+0x30]
  49c0ca:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49c0ce:	52                   	push   edx
  49c0cf:	51                   	push   ecx
  49c0d0:	8b ce                	mov    ecx,esi
  49c0d2:	ff 50 48             	call   DWORD PTR [eax+0x48]
  49c0d5:	50                   	push   eax
  49c0d6:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  49c0da:	e8 b1 87 0b 00       	call   0x554890
  49c0df:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  49c0e3:	89 9c 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],ebx
  49c0ea:	e8 41 85 0b 00       	call   0x554630
  49c0ef:	8a 86 98 01 00 00    	mov    al,BYTE PTR [esi+0x198]
  49c0f5:	84 c0                	test   al,al
  49c0f7:	0f 84 90 00 00 00    	je     0x49c18d
  49c0fd:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
  49c103:	85 c0                	test   eax,eax
  49c105:	75 6b                	jne    0x49c172
  49c107:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  49c10b:	6a 00                	push   0x0
  49c10d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  49c111:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  49c115:	e8 86 7f f6 ff       	call   0x4040a0
  49c11a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49c11f:	8b cb                	mov    ecx,ebx
  49c121:	33 c0                	xor    eax,eax
  49c123:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49c125:	f7 d1                	not    ecx
  49c127:	49                   	dec    ecx
  49c128:	51                   	push   ecx
  49c129:	68 70 3f 6b 00       	push   0x6b3f70
  49c12e:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  49c132:	e8 b9 7f f6 ff       	call   0x4040f0
  49c137:	8d 44 24 40          	lea    eax,[esp+0x40]
  49c13b:	c7 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],0x6
  49c142:	06 00 00 00 
  49c146:	50                   	push   eax
  49c147:	68 8d 01 00 00       	push   0x18d
  49c14c:	68 cc 4b 69 00       	push   0x694bcc
  49c151:	68 68 e7 68 00       	push   0x68e768
  49c156:	e8 95 46 10 00       	call   0x5a07f0
  49c15b:	ff d0                	call   eax
  49c15d:	83 c4 10             	add    esp,0x10
  49c160:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  49c164:	89 9c 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],ebx
  49c16b:	6a 01                	push   0x1
  49c16d:	e8 2e 7f f6 ff       	call   0x4040a0
  49c172:	8d 8e 68 01 00 00    	lea    ecx,[esi+0x168]
  49c178:	33 d2                	xor    edx,edx
  49c17a:	51                   	push   ecx
  49c17b:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
  49c181:	e8 1a 8f 11 00       	call   0x5b50a0
  49c186:	c6 86 98 01 00 00 00 	mov    BYTE PTR [esi+0x198],0x0
  49c18d:	8b 8c 24 90 00 00 00 	mov    ecx,DWORD PTR [esp+0x90]
  49c194:	5f                   	pop    edi
  49c195:	5e                   	pop    esi
  49c196:	5d                   	pop    ebp
  49c197:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49c19e:	5b                   	pop    ebx
  49c19f:	81 c4 8c 00 00 00    	add    esp,0x8c
  49c1a5:	c3                   	ret
  49c1a6:	90                   	nop
  49c1a7:	90                   	nop
  49c1a8:	90                   	nop
  49c1a9:	90                   	nop
  49c1aa:	90                   	nop
  49c1ab:	90                   	nop
  49c1ac:	90                   	nop
  49c1ad:	90                   	nop
  49c1ae:	90                   	nop
  49c1af:	90                   	nop
  49c1b0:	6a ff                	push   0xffffffff
  49c1b2:	68 50 c9 62 00       	push   0x62c950
  49c1b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49c1bd:	50                   	push   eax
  49c1be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49c1c5:	51                   	push   ecx
  49c1c6:	53                   	push   ebx
  49c1c7:	56                   	push   esi
  49c1c8:	57                   	push   edi
  49c1c9:	8b f1                	mov    esi,ecx
  49c1cb:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
  49c1cf:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
  49c1d6:	00 
  49c1d7:	85 db                	test   ebx,ebx
  49c1d9:	74 15                	je     0x49c1f0
  49c1db:	51                   	push   ecx
  49c1dc:	8b c4                	mov    eax,esp
  49c1de:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  49c1e2:	89 18                	mov    DWORD PTR [eax],ebx
  49c1e4:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
  49c1e7:	40                   	inc    eax
  49c1e8:	89 43 14             	mov    DWORD PTR [ebx+0x14],eax
  49c1eb:	e8 90 06 00 00       	call   0x49c880
  49c1f0:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  49c1f4:	85 ff                	test   edi,edi
  49c1f6:	74 32                	je     0x49c22a
  49c1f8:	51                   	push   ecx
  49c1f9:	8b ce                	mov    ecx,esi
  49c1fb:	8b c4                	mov    eax,esp
  49c1fd:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  49c201:	89 38                	mov    DWORD PTR [eax],edi
  49c203:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
  49c206:	40                   	inc    eax
  49c207:	89 47 14             	mov    DWORD PTR [edi+0x14],eax
  49c20a:	e8 51 08 00 00       	call   0x49ca60
  49c20f:	6a 01                	push   0x1
  49c211:	8b ce                	mov    ecx,esi
  49c213:	e8 c8 13 00 00       	call   0x49d5e0
  49c218:	8b 86 10 02 00 00    	mov    eax,DWORD PTR [esi+0x210]
  49c21e:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
  49c224:	50                   	push   eax
  49c225:	e8 b6 78 11 00       	call   0x5b3ae0
  49c22a:	85 db                	test   ebx,ebx
  49c22c:	c6 44 24 18 00       	mov    BYTE PTR [esp+0x18],0x0
  49c231:	74 12                	je     0x49c245
  49c233:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
  49c236:	48                   	dec    eax
  49c237:	89 43 14             	mov    DWORD PTR [ebx+0x14],eax
  49c23a:	75 09                	jne    0x49c245
  49c23c:	6a 00                	push   0x0
  49c23e:	8b cb                	mov    ecx,ebx
  49c240:	e8 7b fd 10 00       	call   0x5abfc0
  49c245:	85 ff                	test   edi,edi
  49c247:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  49c24e:	ff 
  49c24f:	74 12                	je     0x49c263
  49c251:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
  49c254:	48                   	dec    eax
  49c255:	89 47 14             	mov    DWORD PTR [edi+0x14],eax
  49c258:	75 09                	jne    0x49c263
  49c25a:	6a 00                	push   0x0
  49c25c:	8b cf                	mov    ecx,edi
  49c25e:	e8 5d fd 10 00       	call   0x5abfc0
  49c263:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  49c267:	5f                   	pop    edi
  49c268:	5e                   	pop    esi
  49c269:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49c270:	5b                   	pop    ebx
  49c271:	83 c4 10             	add    esp,0x10
  49c274:	c2 08 00             	ret    0x8
  49c277:	90                   	nop
  49c278:	90                   	nop
  49c279:	90                   	nop
  49c27a:	90                   	nop
  49c27b:	90                   	nop
  49c27c:	90                   	nop
  49c27d:	90                   	nop
  49c27e:	90                   	nop
  49c27f:	90                   	nop
  49c280:	8b 81 14 01 00 00    	mov    eax,DWORD PTR [ecx+0x114]
  49c286:	56                   	push   esi
  49c287:	8d b1 14 01 00 00    	lea    esi,[ecx+0x114]
  49c28d:	85 c0                	test   eax,eax
  49c28f:	74 0d                	je     0x49c29e
  49c291:	8b ce                	mov    ecx,esi
  49c293:	e8 78 7b 11 00       	call   0x5b3e10
  49c298:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
  49c29e:	5e                   	pop    esi
  49c29f:	c3                   	ret
  49c2a0:	6a ff                	push   0xffffffff
  49c2a2:	68 80 c9 62 00       	push   0x62c980
  49c2a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49c2ad:	50                   	push   eax
  49c2ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49c2b5:	83 ec 28             	sub    esp,0x28
  49c2b8:	53                   	push   ebx
  49c2b9:	55                   	push   ebp
  49c2ba:	56                   	push   esi
  49c2bb:	8b f1                	mov    esi,ecx
  49c2bd:	33 db                	xor    ebx,ebx
  49c2bf:	57                   	push   edi
  49c2c0:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
  49c2c6:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  49c2ca:	3b c3                	cmp    eax,ebx
  49c2cc:	0f 84 91 00 00 00    	je     0x49c363
  49c2d2:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  49c2d6:	53                   	push   ebx
  49c2d7:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49c2db:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  49c2df:	e8 bc 7d f6 ff       	call   0x4040a0
  49c2e4:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49c2e9:	83 c9 ff             	or     ecx,0xffffffff
  49c2ec:	33 c0                	xor    eax,eax
  49c2ee:	6a 01                	push   0x1
  49c2f0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49c2f2:	f7 d1                	not    ecx
  49c2f4:	49                   	dec    ecx
  49c2f5:	8b e9                	mov    ebp,ecx
  49c2f7:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49c2fb:	55                   	push   ebp
  49c2fc:	e8 3f 56 f6 ff       	call   0x401940
  49c301:	84 c0                	test   al,al
  49c303:	74 28                	je     0x49c32d
  49c305:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  49c309:	8b cd                	mov    ecx,ebp
  49c30b:	8b d1                	mov    edx,ecx
  49c30d:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  49c312:	c1 e9 02             	shr    ecx,0x2
  49c315:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49c317:	8b ca                	mov    ecx,edx
  49c319:	83 e1 03             	and    ecx,0x3
  49c31c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49c31e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  49c322:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  49c326:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  49c32a:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  49c32d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  49c331:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  49c335:	51                   	push   ecx
  49c336:	68 5f 01 00 00       	push   0x15f
  49c33b:	68 70 4c 69 00       	push   0x694c70
  49c340:	68 64 4c 69 00       	push   0x694c64
  49c345:	e8 a6 44 10 00       	call   0x5a07f0
  49c34a:	ff d0                	call   eax
  49c34c:	83 c4 10             	add    esp,0x10
  49c34f:	83 cd ff             	or     ebp,0xffffffff
  49c352:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  49c356:	89 6c 24 40          	mov    DWORD PTR [esp+0x40],ebp
  49c35a:	6a 01                	push   0x1
  49c35c:	e8 3f 7d f6 ff       	call   0x4040a0
  49c361:	eb 03                	jmp    0x49c366
  49c363:	83 cd ff             	or     ebp,0xffffffff
  49c366:	39 9e 10 01 00 00    	cmp    DWORD PTR [esi+0x110],ebx
  49c36c:	0f 85 ec 00 00 00    	jne    0x49c45e
  49c372:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49c377:	8b cd                	mov    ecx,ebp
  49c379:	33 c0                	xor    eax,eax
  49c37b:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  49c37f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49c381:	f7 d1                	not    ecx
  49c383:	49                   	dec    ecx
  49c384:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  49c388:	51                   	push   ecx
  49c389:	68 70 3f 6b 00       	push   0x6b3f70
  49c38e:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49c392:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  49c396:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  49c39a:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  49c39e:	e8 4d 7d f6 ff       	call   0x4040f0
  49c3a3:	8d 44 24 18          	lea    eax,[esp+0x18]
  49c3a7:	c7 44 24 40 01 00 00 	mov    DWORD PTR [esp+0x40],0x1
  49c3ae:	00 
  49c3af:	50                   	push   eax
  49c3b0:	68 60 01 00 00       	push   0x160
  49c3b5:	68 70 4c 69 00       	push   0x694c70
  49c3ba:	68 4c 4c 69 00       	push   0x694c4c
  49c3bf:	e8 2c 44 10 00       	call   0x5a07f0
  49c3c4:	ff d0                	call   eax
  49c3c6:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  49c3ca:	83 c4 10             	add    esp,0x10
  49c3cd:	3b c3                	cmp    eax,ebx
  49c3cf:	89 6c 24 40          	mov    DWORD PTR [esp+0x40],ebp
  49c3d3:	74 1d                	je     0x49c3f2
  49c3d5:	8d 48 ff             	lea    ecx,[eax-0x1]
  49c3d8:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49c3db:	3a c3                	cmp    al,bl
  49c3dd:	74 0a                	je     0x49c3e9
  49c3df:	3c ff                	cmp    al,0xff
  49c3e1:	74 06                	je     0x49c3e9
  49c3e3:	fe c8                	dec    al
  49c3e5:	88 01                	mov    BYTE PTR [ecx],al
  49c3e7:	eb 09                	jmp    0x49c3f2
  49c3e9:	51                   	push   ecx
  49c3ea:	e8 01 22 16 00       	call   0x5fe5f0
  49c3ef:	83 c4 04             	add    esp,0x4
  49c3f2:	39 9e 10 01 00 00    	cmp    DWORD PTR [esi+0x110],ebx
  49c3f8:	75 64                	jne    0x49c45e
  49c3fa:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  49c3fe:	53                   	push   ebx
  49c3ff:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  49c403:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49c407:	e8 94 7c f6 ff       	call   0x4040a0
  49c40c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49c411:	8b cd                	mov    ecx,ebp
  49c413:	33 c0                	xor    eax,eax
  49c415:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49c417:	f7 d1                	not    ecx
  49c419:	49                   	dec    ecx
  49c41a:	51                   	push   ecx
  49c41b:	68 70 3f 6b 00       	push   0x6b3f70
  49c420:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49c424:	e8 c7 7c f6 ff       	call   0x4040f0
  49c429:	8d 54 24 18          	lea    edx,[esp+0x18]
  49c42d:	c7 44 24 40 02 00 00 	mov    DWORD PTR [esp+0x40],0x2
  49c434:	00 
  49c435:	52                   	push   edx
  49c436:	68 b6 00 00 00       	push   0xb6
  49c43b:	68 38 d6 68 00       	push   0x68d638
  49c440:	68 2c d6 68 00       	push   0x68d62c
  49c445:	e8 a6 43 10 00       	call   0x5a07f0
  49c44a:	ff d0                	call   eax
  49c44c:	83 c4 10             	add    esp,0x10
  49c44f:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  49c453:	89 6c 24 40          	mov    DWORD PTR [esp+0x40],ebp
  49c457:	6a 01                	push   0x1
  49c459:	e8 42 7c f6 ff       	call   0x4040a0
  49c45e:	8b 8e 10 01 00 00    	mov    ecx,DWORD PTR [esi+0x110]
  49c464:	e8 b7 2c 00 00       	call   0x49f120
  49c469:	8b c8                	mov    ecx,eax
  49c46b:	e8 20 77 11 00       	call   0x5b3b90
  49c470:	3b c3                	cmp    eax,ebx
  49c472:	89 86 14 01 00 00    	mov    DWORD PTR [esi+0x114],eax
  49c478:	0f 85 93 00 00 00    	jne    0x49c511
  49c47e:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  49c482:	53                   	push   ebx
  49c483:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  49c487:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  49c48b:	e8 10 7c f6 ff       	call   0x4040a0
  49c490:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49c495:	8b cd                	mov    ecx,ebp
  49c497:	33 c0                	xor    eax,eax
  49c499:	6a 01                	push   0x1
  49c49b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49c49d:	f7 d1                	not    ecx
  49c49f:	49                   	dec    ecx
  49c4a0:	8b e9                	mov    ebp,ecx
  49c4a2:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  49c4a6:	55                   	push   ebp
  49c4a7:	e8 94 54 f6 ff       	call   0x401940
  49c4ac:	84 c0                	test   al,al
  49c4ae:	74 28                	je     0x49c4d8
  49c4b0:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  49c4b4:	8b cd                	mov    ecx,ebp
  49c4b6:	8b d1                	mov    edx,ecx
  49c4b8:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  49c4bd:	c1 e9 02             	shr    ecx,0x2
  49c4c0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49c4c2:	8b ca                	mov    ecx,edx
  49c4c4:	83 e1 03             	and    ecx,0x3
  49c4c7:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49c4c9:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  49c4cd:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  49c4d1:	89 6c 24 30          	mov    DWORD PTR [esp+0x30],ebp
  49c4d5:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  49c4d8:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49c4dc:	c7 44 24 40 03 00 00 	mov    DWORD PTR [esp+0x40],0x3
  49c4e3:	00 
  49c4e4:	51                   	push   ecx
  49c4e5:	68 65 01 00 00       	push   0x165
  49c4ea:	68 70 4c 69 00       	push   0x694c70
  49c4ef:	68 68 e7 68 00       	push   0x68e768
  49c4f4:	e8 f7 42 10 00       	call   0x5a07f0
  49c4f9:	ff d0                	call   eax
  49c4fb:	83 c4 10             	add    esp,0x10
  49c4fe:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49c502:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  49c509:	ff 
  49c50a:	6a 01                	push   0x1
  49c50c:	e8 8f 7b f6 ff       	call   0x4040a0
  49c511:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
  49c517:	8b d6                	mov    edx,esi
  49c519:	e8 52 85 11 00       	call   0x5b4a70
  49c51e:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  49c522:	5f                   	pop    edi
  49c523:	5e                   	pop    esi
  49c524:	5d                   	pop    ebp
  49c525:	5b                   	pop    ebx
  49c526:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49c52d:	83 c4 34             	add    esp,0x34
  49c530:	c3                   	ret
  49c531:	90                   	nop
  49c532:	90                   	nop
  49c533:	90                   	nop
  49c534:	90                   	nop
  49c535:	90                   	nop
  49c536:	90                   	nop
  49c537:	90                   	nop
  49c538:	90                   	nop
  49c539:	90                   	nop
  49c53a:	90                   	nop
  49c53b:	90                   	nop
  49c53c:	90                   	nop
  49c53d:	90                   	nop
  49c53e:	90                   	nop
  49c53f:	90                   	nop
