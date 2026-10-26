
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0042a900 <.text+0x29900>:
  42a900:	25 8b 7c 24 18       	and    eax,0x18247c8b
  42a905:	8b cb                	mov    ecx,ebx
  42a907:	8b d1                	mov    edx,ecx
  42a909:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42a90e:	c1 e9 02             	shr    ecx,0x2
  42a911:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42a913:	8b ca                	mov    ecx,edx
  42a915:	53                   	push   ebx
  42a916:	83 e1 03             	and    ecx,0x3
  42a919:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42a91b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42a91f:	e8 6c 98 fd ff       	call   0x404190
  42a924:	33 f6                	xor    esi,esi
  42a926:	8d 44 24 14          	lea    eax,[esp+0x14]
  42a92a:	c6 44 24 2c 06       	mov    BYTE PTR [esp+0x2c],0x6
  42a92f:	50                   	push   eax
  42a930:	68 82 00 00 00       	push   0x82
  42a935:	68 88 ff 68 00       	push   0x68ff88
  42a93a:	68 68 e7 68 00       	push   0x68e768
  42a93f:	e8 ac 5e 17 00       	call   0x5a07f0
  42a944:	ff d0                	call   eax
  42a946:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  42a94a:	83 c4 10             	add    esp,0x10
  42a94d:	3b c6                	cmp    eax,esi
  42a94f:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  42a954:	74 1d                	je     0x42a973
  42a956:	8d 48 ff             	lea    ecx,[eax-0x1]
  42a959:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42a95c:	84 c0                	test   al,al
  42a95e:	74 0a                	je     0x42a96a
  42a960:	3c ff                	cmp    al,0xff
  42a962:	74 06                	je     0x42a96a
  42a964:	fe c8                	dec    al
  42a966:	88 01                	mov    BYTE PTR [ecx],al
  42a968:	eb 09                	jmp    0x42a973
  42a96a:	51                   	push   ecx
  42a96b:	e8 80 3c 1d 00       	call   0x5fe5f0
  42a970:	83 c4 04             	add    esp,0x4
  42a973:	8b 8d 7c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x17c]
  42a979:	51                   	push   ecx
  42a97a:	8b cd                	mov    ecx,ebp
  42a97c:	e8 ff f0 0d 00       	call   0x509a80
  42a981:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  42a985:	5f                   	pop    edi
  42a986:	8b c5                	mov    eax,ebp
  42a988:	5e                   	pop    esi
  42a989:	5d                   	pop    ebp
  42a98a:	5b                   	pop    ebx
  42a98b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42a992:	83 c4 20             	add    esp,0x20
  42a995:	c2 10 00             	ret    0x10
  42a998:	90                   	nop
  42a999:	90                   	nop
  42a99a:	90                   	nop
  42a99b:	90                   	nop
  42a99c:	90                   	nop
  42a99d:	90                   	nop
  42a99e:	90                   	nop
  42a99f:	90                   	nop
  42a9a0:	56                   	push   esi
  42a9a1:	8b f1                	mov    esi,ecx
  42a9a3:	e8 48 13 fe ff       	call   0x40bcf0
  42a9a8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  42a9ad:	74 09                	je     0x42a9b8
  42a9af:	56                   	push   esi
  42a9b0:	e8 3b 3c 1d 00       	call   0x5fe5f0
  42a9b5:	83 c4 04             	add    esp,0x4
  42a9b8:	8b c6                	mov    eax,esi
  42a9ba:	5e                   	pop    esi
  42a9bb:	c2 04 00             	ret    0x4
  42a9be:	90                   	nop
  42a9bf:	90                   	nop
  42a9c0:	6a ff                	push   0xffffffff
  42a9c2:	68 4b 30 62 00       	push   0x62304b
  42a9c7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42a9cd:	50                   	push   eax
  42a9ce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42a9d5:	51                   	push   ecx
  42a9d6:	56                   	push   esi
  42a9d7:	8b f1                	mov    esi,ecx
  42a9d9:	6a 30                	push   0x30
  42a9db:	e8 d5 f6 1d 00       	call   0x60a0b5
  42a9e0:	83 c4 04             	add    esp,0x4
  42a9e3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  42a9e7:	85 c0                	test   eax,eax
  42a9e9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  42a9f0:	00 
  42a9f1:	74 0a                	je     0x42a9fd
  42a9f3:	56                   	push   esi
  42a9f4:	8b c8                	mov    ecx,eax
  42a9f6:	e8 45 fd fd ff       	call   0x40a740
  42a9fb:	eb 02                	jmp    0x42a9ff
  42a9fd:	33 c0                	xor    eax,eax
  42a9ff:	50                   	push   eax
  42aa00:	8b ce                	mov    ecx,esi
  42aa02:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  42aa09:	ff 
  42aa0a:	e8 01 8d ff ff       	call   0x423710
  42aa0f:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  42aa13:	5e                   	pop    esi
  42aa14:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42aa1b:	83 c4 10             	add    esp,0x10
  42aa1e:	c3                   	ret
  42aa1f:	90                   	nop
  42aa20:	6a ff                	push   0xffffffff
  42aa22:	68 78 30 62 00       	push   0x623078
  42aa27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42aa2d:	50                   	push   eax
  42aa2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42aa35:	83 ec 14             	sub    esp,0x14
  42aa38:	53                   	push   ebx
  42aa39:	55                   	push   ebp
  42aa3a:	56                   	push   esi
  42aa3b:	57                   	push   edi
  42aa3c:	8b e9                	mov    ebp,ecx
  42aa3e:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  42aa42:	51                   	push   ecx
  42aa43:	33 db                	xor    ebx,ebx
  42aa45:	8b c4                	mov    eax,esp
  42aa47:	3b f3                	cmp    esi,ebx
  42aa49:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  42aa4d:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  42aa51:	89 30                	mov    DWORD PTR [eax],esi
  42aa53:	74 03                	je     0x42aa58
  42aa55:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  42aa58:	8b cd                	mov    ecx,ebp
  42aa5a:	e8 b1 80 ff ff       	call   0x422b10
  42aa5f:	39 9d 7c 01 00 00    	cmp    DWORD PTR [ebp+0x17c],ebx
  42aa65:	75 7f                	jne    0x42aae6
  42aa67:	8a 44 24 34          	mov    al,BYTE PTR [esp+0x34]
  42aa6b:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42aa70:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  42aa74:	83 c9 ff             	or     ecx,0xffffffff
  42aa77:	33 c0                	xor    eax,eax
  42aa79:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  42aa7d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42aa7f:	f7 d1                	not    ecx
  42aa81:	49                   	dec    ecx
  42aa82:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  42aa86:	51                   	push   ecx
  42aa87:	68 70 3f 6b 00       	push   0x6b3f70
  42aa8c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42aa90:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42aa94:	e8 57 96 fd ff       	call   0x4040f0
  42aa99:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42aa9d:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  42aaa2:	51                   	push   ecx
  42aaa3:	68 9e 00 00 00       	push   0x9e
  42aaa8:	68 88 ff 68 00       	push   0x68ff88
  42aaad:	68 68 e7 68 00       	push   0x68e768
  42aab2:	e8 39 5d 17 00       	call   0x5a07f0
  42aab7:	ff d0                	call   eax
  42aab9:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  42aabd:	83 c4 10             	add    esp,0x10
  42aac0:	3b c3                	cmp    eax,ebx
  42aac2:	c6 44 24 2c 00       	mov    BYTE PTR [esp+0x2c],0x0
  42aac7:	74 1d                	je     0x42aae6
  42aac9:	8d 48 ff             	lea    ecx,[eax-0x1]
  42aacc:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42aacf:	84 c0                	test   al,al
  42aad1:	74 0a                	je     0x42aadd
  42aad3:	3c ff                	cmp    al,0xff
  42aad5:	74 06                	je     0x42aadd
  42aad7:	fe c8                	dec    al
  42aad9:	88 01                	mov    BYTE PTR [ecx],al
  42aadb:	eb 09                	jmp    0x42aae6
  42aadd:	51                   	push   ecx
  42aade:	e8 0d 3b 1d 00       	call   0x5fe5f0
  42aae3:	83 c4 04             	add    esp,0x4
  42aae6:	3b f3                	cmp    esi,ebx
  42aae8:	0f 85 8f 00 00 00    	jne    0x42ab7d
  42aaee:	8a 54 24 34          	mov    dl,BYTE PTR [esp+0x34]
  42aaf2:	53                   	push   ebx
  42aaf3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42aaf7:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  42aafb:	e8 a0 95 fd ff       	call   0x4040a0
  42ab00:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42ab05:	83 c9 ff             	or     ecx,0xffffffff
  42ab08:	33 c0                	xor    eax,eax
  42ab0a:	6a 01                	push   0x1
  42ab0c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42ab0e:	f7 d1                	not    ecx
  42ab10:	49                   	dec    ecx
  42ab11:	8b d9                	mov    ebx,ecx
  42ab13:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42ab17:	53                   	push   ebx
  42ab18:	e8 23 6e fd ff       	call   0x401940
  42ab1d:	84 c0                	test   al,al
  42ab1f:	74 27                	je     0x42ab48
  42ab21:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  42ab25:	8b cb                	mov    ecx,ebx
  42ab27:	8b c1                	mov    eax,ecx
  42ab29:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42ab2e:	c1 e9 02             	shr    ecx,0x2
  42ab31:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ab33:	8b c8                	mov    ecx,eax
  42ab35:	53                   	push   ebx
  42ab36:	83 e1 03             	and    ecx,0x3
  42ab39:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ab3b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42ab3f:	e8 4c 96 fd ff       	call   0x404190
  42ab44:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  42ab48:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42ab4c:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  42ab51:	51                   	push   ecx
  42ab52:	68 b6 00 00 00       	push   0xb6
  42ab57:	68 38 d6 68 00       	push   0x68d638
  42ab5c:	68 2c d6 68 00       	push   0x68d62c
  42ab61:	e8 8a 5c 17 00       	call   0x5a07f0
  42ab66:	ff d0                	call   eax
  42ab68:	83 c4 10             	add    esp,0x10
  42ab6b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42ab6f:	c6 44 24 2c 00       	mov    BYTE PTR [esp+0x2c],0x0
  42ab74:	6a 01                	push   0x1
  42ab76:	e8 25 95 fd ff       	call   0x4040a0
  42ab7b:	33 db                	xor    ebx,ebx
  42ab7d:	8b 95 7c 01 00 00    	mov    edx,DWORD PTR [ebp+0x17c]
  42ab83:	8b ce                	mov    ecx,esi
  42ab85:	52                   	push   edx
  42ab86:	e8 35 96 0c 00       	call   0x4f41c0
  42ab8b:	8b 85 80 01 00 00    	mov    eax,DWORD PTR [ebp+0x180]
  42ab91:	39 58 18             	cmp    DWORD PTR [eax+0x18],ebx
  42ab94:	0f 95 c1             	setne  cl
  42ab97:	51                   	push   ecx
  42ab98:	8b cd                	mov    ecx,ebp
  42ab9a:	e8 b1 77 0d 00       	call   0x502350
  42ab9f:	8b 8d 7c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x17c]
  42aba5:	8b 85 80 01 00 00    	mov    eax,DWORD PTR [ebp+0x180]
  42abab:	50                   	push   eax
  42abac:	8b 11                	mov    edx,DWORD PTR [ecx]
  42abae:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
  42abb1:	8b 8d 80 01 00 00    	mov    ecx,DWORD PTR [ebp+0x180]
  42abb7:	8b 51 14             	mov    edx,DWORD PTR [ecx+0x14]
  42abba:	52                   	push   edx
  42abbb:	e8 20 6c 18 00       	call   0x5b17e0
  42abc0:	d8 05 d4 b1 64 00    	fadd   DWORD PTR ds:0x64b1d4
  42abc6:	8b 8d 7c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x17c]
  42abcc:	d9 1c 24             	fstp   DWORD PTR [esp]
  42abcf:	e8 bc 21 07 00       	call   0x49cd90
  42abd4:	8b 85 80 01 00 00    	mov    eax,DWORD PTR [ebp+0x180]
  42abda:	39 58 18             	cmp    DWORD PTR [eax+0x18],ebx
  42abdd:	0f 95 c1             	setne  cl
  42abe0:	51                   	push   ecx
  42abe1:	8b 8d 7c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x17c]
  42abe7:	e8 64 77 0d 00       	call   0x502350
  42abec:	8b 95 80 01 00 00    	mov    edx,DWORD PTR [ebp+0x180]
  42abf2:	d9 42 1c             	fld    DWORD PTR [edx+0x1c]
  42abf5:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  42abf9:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  42abff:	df e0                	fnstsw ax
  42ac01:	f6 c4 41             	test   ah,0x41
  42ac04:	75 12                	jne    0x42ac18
  42ac06:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  42ac0a:	8b 8d 7c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x17c]
  42ac10:	50                   	push   eax
  42ac11:	50                   	push   eax
  42ac12:	50                   	push   eax
  42ac13:	e8 88 20 07 00       	call   0x49cca0
  42ac18:	8b 85 7c 01 00 00    	mov    eax,DWORD PTR [ebp+0x17c]
  42ac1e:	50                   	push   eax
  42ac1f:	e8 7c bd 06 00       	call   0x4969a0
  42ac24:	8b c8                	mov    ecx,eax
  42ac26:	e8 05 25 00 00       	call   0x42d130
  42ac2b:	3b f3                	cmp    esi,ebx
  42ac2d:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  42ac34:	ff 
  42ac35:	74 11                	je     0x42ac48
  42ac37:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  42ac3a:	48                   	dec    eax
  42ac3b:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  42ac3e:	75 08                	jne    0x42ac48
  42ac40:	53                   	push   ebx
  42ac41:	8b ce                	mov    ecx,esi
  42ac43:	e8 78 13 18 00       	call   0x5abfc0
  42ac48:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  42ac4c:	5f                   	pop    edi
  42ac4d:	5e                   	pop    esi
  42ac4e:	5d                   	pop    ebp
  42ac4f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42ac56:	5b                   	pop    ebx
  42ac57:	83 c4 20             	add    esp,0x20
  42ac5a:	c2 04 00             	ret    0x4
  42ac5d:	90                   	nop
  42ac5e:	90                   	nop
  42ac5f:	90                   	nop
  42ac60:	6a ff                	push   0xffffffff
  42ac62:	68 98 30 62 00       	push   0x623098
  42ac67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42ac6d:	50                   	push   eax
  42ac6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42ac75:	51                   	push   ecx
  42ac76:	56                   	push   esi
  42ac77:	57                   	push   edi
  42ac78:	8b f1                	mov    esi,ecx
  42ac7a:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  42ac7e:	51                   	push   ecx
  42ac7f:	8b c4                	mov    eax,esp
  42ac81:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  42ac88:	00 
  42ac89:	85 ff                	test   edi,edi
  42ac8b:	89 64 24 0c          	mov    DWORD PTR [esp+0xc],esp
  42ac8f:	89 38                	mov    DWORD PTR [eax],edi
  42ac91:	74 03                	je     0x42ac96
  42ac93:	ff 47 14             	inc    DWORD PTR [edi+0x14]
  42ac96:	8b ce                	mov    ecx,esi
  42ac98:	e8 93 80 ff ff       	call   0x422d30
  42ac9d:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
  42aca3:	85 c0                	test   eax,eax
  42aca5:	74 0d                	je     0x42acb4
  42aca7:	50                   	push   eax
  42aca8:	e8 f3 bc 06 00       	call   0x4969a0
  42acad:	8b c8                	mov    ecx,eax
  42acaf:	e8 bc 25 00 00       	call   0x42d270
  42acb4:	6a 00                	push   0x0
  42acb6:	51                   	push   ecx
  42acb7:	8b cc                	mov    ecx,esp
  42acb9:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  42acbd:	6a 00                	push   0x0
  42acbf:	e8 7c c5 02 00       	call   0x457240
  42acc4:	8b 06                	mov    eax,DWORD PTR [esi]
  42acc6:	8b ce                	mov    ecx,esi
  42acc8:	ff 90 94 00 00 00    	call   DWORD PTR [eax+0x94]
  42acce:	85 ff                	test   edi,edi
  42acd0:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  42acd7:	ff 
  42acd8:	74 12                	je     0x42acec
  42acda:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
  42acdd:	48                   	dec    eax
  42acde:	89 47 14             	mov    DWORD PTR [edi+0x14],eax
  42ace1:	75 09                	jne    0x42acec
  42ace3:	6a 00                	push   0x0
  42ace5:	8b cf                	mov    ecx,edi
  42ace7:	e8 d4 12 18 00       	call   0x5abfc0
  42acec:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  42acf0:	5f                   	pop    edi
  42acf1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42acf8:	5e                   	pop    esi
  42acf9:	83 c4 10             	add    esp,0x10
  42acfc:	c2 04 00             	ret    0x4
  42acff:	90                   	nop
  42ad00:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42ad06:	6a ff                	push   0xffffffff
  42ad08:	68 ff 30 62 00       	push   0x6230ff
  42ad0d:	50                   	push   eax
  42ad0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42ad15:	83 ec 30             	sub    esp,0x30
  42ad18:	53                   	push   ebx
  42ad19:	55                   	push   ebp
  42ad1a:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
  42ad1e:	56                   	push   esi
  42ad1f:	33 f6                	xor    esi,esi
  42ad21:	57                   	push   edi
  42ad22:	3b ee                	cmp    ebp,esi
  42ad24:	0f 85 8e 00 00 00    	jne    0x42adb8
  42ad2a:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  42ad2e:	56                   	push   esi
  42ad2f:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  42ad33:	88 44 24 34          	mov    BYTE PTR [esp+0x34],al
  42ad37:	e8 64 93 fd ff       	call   0x4040a0
  42ad3c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42ad41:	83 c9 ff             	or     ecx,0xffffffff
  42ad44:	33 c0                	xor    eax,eax
  42ad46:	6a 01                	push   0x1
  42ad48:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42ad4a:	f7 d1                	not    ecx
  42ad4c:	49                   	dec    ecx
  42ad4d:	8b d9                	mov    ebx,ecx
  42ad4f:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  42ad53:	53                   	push   ebx
  42ad54:	e8 e7 6b fd ff       	call   0x401940
  42ad59:	84 c0                	test   al,al
  42ad5b:	74 25                	je     0x42ad82
  42ad5d:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
  42ad61:	8b cb                	mov    ecx,ebx
  42ad63:	8b d1                	mov    edx,ecx
  42ad65:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42ad6a:	c1 e9 02             	shr    ecx,0x2
  42ad6d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ad6f:	8b ca                	mov    ecx,edx
  42ad71:	53                   	push   ebx
  42ad72:	83 e1 03             	and    ecx,0x3
  42ad75:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ad77:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  42ad7b:	e8 10 94 fd ff       	call   0x404190
  42ad80:	33 f6                	xor    esi,esi
  42ad82:	8d 44 24 30          	lea    eax,[esp+0x30]
  42ad86:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  42ad8a:	50                   	push   eax
  42ad8b:	68 c0 00 00 00       	push   0xc0
  42ad90:	68 88 ff 68 00       	push   0x68ff88
  42ad95:	68 b8 ff 68 00       	push   0x68ffb8
  42ad9a:	e8 51 5a 17 00       	call   0x5a07f0
  42ad9f:	ff d0                	call   eax
  42ada1:	83 c4 10             	add    esp,0x10
  42ada4:	83 cb ff             	or     ebx,0xffffffff
  42ada7:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  42adab:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  42adaf:	6a 01                	push   0x1
  42adb1:	e8 ea 92 fd ff       	call   0x4040a0
  42adb6:	eb 03                	jmp    0x42adbb
  42adb8:	83 cb ff             	or     ebx,0xffffffff
  42adbb:	b9 60 52 6b 00       	mov    ecx,0x6b5260
  42adc0:	e8 9b 6f 17 00       	call   0x5a1d60
  42adc5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  42adc8:	3b c6                	cmp    eax,esi
  42adca:	75 05                	jne    0x42add1
  42adcc:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  42add1:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  42add4:	50                   	push   eax
  42add5:	8d 54 24 14          	lea    edx,[esp+0x14]
  42add9:	51                   	push   ecx
  42adda:	52                   	push   edx
  42addb:	e8 10 86 0d 00       	call   0x5033f0
  42ade0:	83 c4 0c             	add    esp,0xc
  42ade3:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  42ade6:	c7 44 24 48 01 00 00 	mov    DWORD PTR [esp+0x48],0x1
  42aded:	00 
  42adee:	48                   	dec    eax
  42adef:	83 f8 04             	cmp    eax,0x4
  42adf2:	0f 87 59 01 00 00    	ja     0x42af51
  42adf8:	ff 24 85 10 b0 42 00 	jmp    DWORD PTR [eax*4+0x42b010]
  42adff:	68 30 02 00 00       	push   0x230
  42ae04:	e8 ac f2 1d 00       	call   0x60a0b5
  42ae09:	83 c4 04             	add    esp,0x4
  42ae0c:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  42ae10:	3b c6                	cmp    eax,esi
  42ae12:	c6 44 24 48 02       	mov    BYTE PTR [esp+0x48],0x2
  42ae17:	74 11                	je     0x42ae2a
  42ae19:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42ae1d:	55                   	push   ebp
  42ae1e:	51                   	push   ecx
  42ae1f:	8b c8                	mov    ecx,eax
  42ae21:	e8 1a 41 fe ff       	call   0x40ef40
  42ae26:	8b f8                	mov    edi,eax
  42ae28:	eb 02                	jmp    0x42ae2c
  42ae2a:	33 ff                	xor    edi,edi
  42ae2c:	6a 01                	push   0x1
  42ae2e:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42ae32:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  42ae36:	e8 65 92 fd ff       	call   0x4040a0
  42ae3b:	8b c7                	mov    eax,edi
  42ae3d:	5f                   	pop    edi
  42ae3e:	5e                   	pop    esi
  42ae3f:	5d                   	pop    ebp
  42ae40:	5b                   	pop    ebx
  42ae41:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  42ae45:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42ae4c:	83 c4 3c             	add    esp,0x3c
  42ae4f:	c3                   	ret
  42ae50:	68 28 02 00 00       	push   0x228
  42ae55:	e8 5b f2 1d 00       	call   0x60a0b5
  42ae5a:	83 c4 04             	add    esp,0x4
  42ae5d:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  42ae61:	3b c6                	cmp    eax,esi
  42ae63:	c6 44 24 48 03       	mov    BYTE PTR [esp+0x48],0x3
  42ae68:	74 c0                	je     0x42ae2a
  42ae6a:	8d 54 24 10          	lea    edx,[esp+0x10]
  42ae6e:	55                   	push   ebp
  42ae6f:	52                   	push   edx
  42ae70:	8b c8                	mov    ecx,eax
  42ae72:	e8 99 32 fe ff       	call   0x40e110
  42ae77:	8b f8                	mov    edi,eax
  42ae79:	eb b1                	jmp    0x42ae2c
  42ae7b:	68 38 02 00 00       	push   0x238
  42ae80:	e8 30 f2 1d 00       	call   0x60a0b5
  42ae85:	83 c4 04             	add    esp,0x4
  42ae88:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  42ae8c:	3b c6                	cmp    eax,esi
  42ae8e:	c6 44 24 48 04       	mov    BYTE PTR [esp+0x48],0x4
  42ae93:	74 95                	je     0x42ae2a
  42ae95:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42ae99:	55                   	push   ebp
  42ae9a:	51                   	push   ecx
  42ae9b:	8b c8                	mov    ecx,eax
  42ae9d:	e8 de 09 fe ff       	call   0x40b880
  42aea2:	8b f8                	mov    edi,eax
  42aea4:	eb 86                	jmp    0x42ae2c
  42aea6:	68 54 02 00 00       	push   0x254
  42aeab:	e8 05 f2 1d 00       	call   0x60a0b5
  42aeb0:	83 c4 04             	add    esp,0x4
  42aeb3:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  42aeb7:	3b c6                	cmp    eax,esi
  42aeb9:	c6 44 24 48 05       	mov    BYTE PTR [esp+0x48],0x5
  42aebe:	0f 84 66 ff ff ff    	je     0x42ae2a
  42aec4:	8d 54 24 10          	lea    edx,[esp+0x10]
  42aec8:	55                   	push   ebp
  42aec9:	52                   	push   edx
  42aeca:	8b c8                	mov    ecx,eax
  42aecc:	e8 1f 28 ff ff       	call   0x41d6f0
  42aed1:	8b f8                	mov    edi,eax
  42aed3:	e9 54 ff ff ff       	jmp    0x42ae2c
  42aed8:	68 44 02 00 00       	push   0x244
  42aedd:	e8 d3 f1 1d 00       	call   0x60a0b5
  42aee2:	83 c4 04             	add    esp,0x4
  42aee5:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  42aee9:	3b c6                	cmp    eax,esi
  42aeeb:	c6 44 24 48 06       	mov    BYTE PTR [esp+0x48],0x6
  42aef0:	74 11                	je     0x42af03
  42aef2:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42aef6:	55                   	push   ebp
  42aef7:	51                   	push   ecx
  42aef8:	8b c8                	mov    ecx,eax
  42aefa:	e8 01 07 ff ff       	call   0x41b600
  42aeff:	8b f8                	mov    edi,eax
  42af01:	eb 02                	jmp    0x42af05
  42af03:	33 ff                	xor    edi,edi
  42af05:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  42af09:	3b ce                	cmp    ecx,esi
  42af0b:	74 2f                	je     0x42af3c
  42af0d:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42af10:	84 c0                	test   al,al
  42af12:	74 1e                	je     0x42af32
  42af14:	3c ff                	cmp    al,0xff
  42af16:	74 1a                	je     0x42af32
  42af18:	fe c8                	dec    al
  42af1a:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42af1d:	8b c7                	mov    eax,edi
  42af1f:	5f                   	pop    edi
  42af20:	5e                   	pop    esi
  42af21:	5d                   	pop    ebp
  42af22:	5b                   	pop    ebx
  42af23:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  42af27:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42af2e:	83 c4 3c             	add    esp,0x3c
  42af31:	c3                   	ret
  42af32:	49                   	dec    ecx
  42af33:	51                   	push   ecx
  42af34:	e8 b7 36 1d 00       	call   0x5fe5f0
  42af39:	83 c4 04             	add    esp,0x4
  42af3c:	8b c7                	mov    eax,edi
  42af3e:	5f                   	pop    edi
  42af3f:	5e                   	pop    esi
  42af40:	5d                   	pop    ebp
  42af41:	5b                   	pop    ebx
  42af42:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  42af46:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42af4d:	83 c4 3c             	add    esp,0x3c
  42af50:	c3                   	ret
  42af51:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42af56:	8b cb                	mov    ecx,ebx
  42af58:	33 c0                	xor    eax,eax
  42af5a:	8a 54 24 50          	mov    dl,BYTE PTR [esp+0x50]
  42af5e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42af60:	f7 d1                	not    ecx
  42af62:	49                   	dec    ecx
  42af63:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  42af67:	51                   	push   ecx
  42af68:	68 70 3f 6b 00       	push   0x6b3f70
  42af6d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42af71:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  42af75:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  42af79:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  42af7d:	e8 6e 91 fd ff       	call   0x4040f0
  42af82:	8d 44 24 20          	lea    eax,[esp+0x20]
  42af86:	c6 44 24 48 07       	mov    BYTE PTR [esp+0x48],0x7
  42af8b:	50                   	push   eax
  42af8c:	68 d2 00 00 00       	push   0xd2
  42af91:	68 88 ff 68 00       	push   0x68ff88
  42af96:	68 d0 d2 68 00       	push   0x68d2d0
  42af9b:	e8 50 58 17 00       	call   0x5a07f0
  42afa0:	ff d0                	call   eax
  42afa2:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  42afa6:	83 c4 10             	add    esp,0x10
  42afa9:	3b c6                	cmp    eax,esi
  42afab:	74 1d                	je     0x42afca
  42afad:	8d 48 ff             	lea    ecx,[eax-0x1]
  42afb0:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42afb3:	84 c0                	test   al,al
  42afb5:	74 0a                	je     0x42afc1
  42afb7:	3c ff                	cmp    al,0xff
  42afb9:	74 06                	je     0x42afc1
  42afbb:	fe c8                	dec    al
  42afbd:	88 01                	mov    BYTE PTR [ecx],al
  42afbf:	eb 09                	jmp    0x42afca
  42afc1:	51                   	push   ecx
  42afc2:	e8 29 36 1d 00       	call   0x5fe5f0
  42afc7:	83 c4 04             	add    esp,0x4
  42afca:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  42afce:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  42afd2:	3b ce                	cmp    ecx,esi
  42afd4:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  42afd8:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  42afdc:	74 1c                	je     0x42affa
  42afde:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42afe1:	84 c0                	test   al,al
  42afe3:	74 0b                	je     0x42aff0
  42afe5:	3c ff                	cmp    al,0xff
  42afe7:	74 07                	je     0x42aff0
  42afe9:	fe c8                	dec    al
  42afeb:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42afee:	eb 0a                	jmp    0x42affa
  42aff0:	49                   	dec    ecx
  42aff1:	51                   	push   ecx
  42aff2:	e8 f9 35 1d 00       	call   0x5fe5f0
  42aff7:	83 c4 04             	add    esp,0x4
  42affa:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  42affe:	5f                   	pop    edi
  42afff:	5e                   	pop    esi
  42b000:	5d                   	pop    ebp
  42b001:	33 c0                	xor    eax,eax
  42b003:	5b                   	pop    ebx
  42b004:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42b00b:	83 c4 3c             	add    esp,0x3c
  42b00e:	c3                   	ret
  42b00f:	90                   	nop
  42b010:	ff ad 42 00 50 ae    	jmp    FWORD PTR [ebp-0x51afffbe]
  42b016:	42                   	inc    edx
  42b017:	00 7b ae             	add    BYTE PTR [ebx-0x52],bh
  42b01a:	42                   	inc    edx
  42b01b:	00 a6 ae 42 00 d8    	add    BYTE PTR [esi-0x27ffbd52],ah
  42b021:	ae                   	scas   al,BYTE PTR es:[edi]
  42b022:	42                   	inc    edx
  42b023:	00 90 90 90 90 90    	add    BYTE PTR [eax-0x6f6f6f70],dl
  42b029:	90                   	nop
  42b02a:	90                   	nop
  42b02b:	90                   	nop
  42b02c:	90                   	nop
  42b02d:	90                   	nop
  42b02e:	90                   	nop
  42b02f:	90                   	nop
  42b030:	6a ff                	push   0xffffffff
  42b032:	68 18 31 62 00       	push   0x623118
  42b037:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42b03d:	50                   	push   eax
  42b03e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42b045:	83 ec 18             	sub    esp,0x18
  42b048:	53                   	push   ebx
  42b049:	56                   	push   esi
  42b04a:	8b f1                	mov    esi,ecx
  42b04c:	33 db                	xor    ebx,ebx
  42b04e:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  42b052:	39 9e 7c 01 00 00    	cmp    DWORD PTR [esi+0x17c],ebx
  42b058:	0f 85 a8 00 00 00    	jne    0x42b106
  42b05e:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  42b062:	55                   	push   ebp
  42b063:	57                   	push   edi
  42b064:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  42b068:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42b06d:	83 c9 ff             	or     ecx,0xffffffff
  42b070:	33 c0                	xor    eax,eax
  42b072:	6a 01                	push   0x1
  42b074:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42b076:	f7 d1                	not    ecx
  42b078:	49                   	dec    ecx
  42b079:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42b07d:	8b e9                	mov    ebp,ecx
  42b07f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42b083:	55                   	push   ebp
  42b084:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42b088:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42b08c:	e8 af 68 fd ff       	call   0x401940
  42b091:	84 c0                	test   al,al
  42b093:	74 28                	je     0x42b0bd
  42b095:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  42b099:	8b cd                	mov    ecx,ebp
  42b09b:	8b d1                	mov    edx,ecx
  42b09d:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42b0a2:	c1 e9 02             	shr    ecx,0x2
  42b0a5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42b0a7:	8b ca                	mov    ecx,edx
  42b0a9:	83 e1 03             	and    ecx,0x3
  42b0ac:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42b0ae:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  42b0b2:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  42b0b6:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  42b0ba:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  42b0bd:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42b0c1:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  42b0c5:	51                   	push   ecx
  42b0c6:	68 da 00 00 00       	push   0xda
  42b0cb:	68 88 ff 68 00       	push   0x68ff88
  42b0d0:	68 68 e7 68 00       	push   0x68e768
  42b0d5:	e8 16 57 17 00       	call   0x5a07f0
  42b0da:	ff d0                	call   eax
  42b0dc:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  42b0e0:	83 c4 10             	add    esp,0x10
  42b0e3:	3b c3                	cmp    eax,ebx
  42b0e5:	5f                   	pop    edi
  42b0e6:	5d                   	pop    ebp
  42b0e7:	74 1d                	je     0x42b106
  42b0e9:	8d 48 ff             	lea    ecx,[eax-0x1]
  42b0ec:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42b0ef:	3a c3                	cmp    al,bl
  42b0f1:	74 0a                	je     0x42b0fd
  42b0f3:	3c ff                	cmp    al,0xff
  42b0f5:	74 06                	je     0x42b0fd
  42b0f7:	fe c8                	dec    al
  42b0f9:	88 01                	mov    BYTE PTR [ecx],al
  42b0fb:	eb 09                	jmp    0x42b106
  42b0fd:	51                   	push   ecx
  42b0fe:	e8 ed 34 1d 00       	call   0x5fe5f0
  42b103:	83 c4 04             	add    esp,0x4
  42b106:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
  42b10c:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  42b110:	5e                   	pop    esi
  42b111:	5b                   	pop    ebx
  42b112:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42b119:	83 c4 24             	add    esp,0x24
  42b11c:	c3                   	ret
  42b11d:	90                   	nop
  42b11e:	90                   	nop
  42b11f:	90                   	nop
  42b120:	6a ff                	push   0xffffffff
  42b122:	68 38 31 62 00       	push   0x623138
  42b127:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42b12d:	50                   	push   eax
  42b12e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42b135:	83 ec 18             	sub    esp,0x18
  42b138:	53                   	push   ebx
  42b139:	56                   	push   esi
  42b13a:	8b f1                	mov    esi,ecx
  42b13c:	33 db                	xor    ebx,ebx
  42b13e:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  42b142:	39 9e 7c 01 00 00    	cmp    DWORD PTR [esi+0x17c],ebx
  42b148:	0f 85 a8 00 00 00    	jne    0x42b1f6
  42b14e:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  42b152:	55                   	push   ebp
  42b153:	57                   	push   edi
  42b154:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  42b158:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42b15d:	83 c9 ff             	or     ecx,0xffffffff
  42b160:	33 c0                	xor    eax,eax
  42b162:	6a 01                	push   0x1
  42b164:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42b166:	f7 d1                	not    ecx
  42b168:	49                   	dec    ecx
  42b169:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42b16d:	8b e9                	mov    ebp,ecx
  42b16f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42b173:	55                   	push   ebp
  42b174:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42b178:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42b17c:	e8 bf 67 fd ff       	call   0x401940
  42b181:	84 c0                	test   al,al
  42b183:	74 28                	je     0x42b1ad
  42b185:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  42b189:	8b cd                	mov    ecx,ebp
  42b18b:	8b d1                	mov    edx,ecx
  42b18d:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42b192:	c1 e9 02             	shr    ecx,0x2
  42b195:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42b197:	8b ca                	mov    ecx,edx
  42b199:	83 e1 03             	and    ecx,0x3
  42b19c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42b19e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  42b1a2:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  42b1a6:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  42b1aa:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  42b1ad:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42b1b1:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  42b1b5:	51                   	push   ecx
  42b1b6:	68 e1 00 00 00       	push   0xe1
  42b1bb:	68 88 ff 68 00       	push   0x68ff88
  42b1c0:	68 68 e7 68 00       	push   0x68e768
  42b1c5:	e8 26 56 17 00       	call   0x5a07f0
  42b1ca:	ff d0                	call   eax
  42b1cc:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  42b1d0:	83 c4 10             	add    esp,0x10
  42b1d3:	3b c3                	cmp    eax,ebx
  42b1d5:	5f                   	pop    edi
  42b1d6:	5d                   	pop    ebp
  42b1d7:	74 1d                	je     0x42b1f6
  42b1d9:	8d 48 ff             	lea    ecx,[eax-0x1]
  42b1dc:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42b1df:	3a c3                	cmp    al,bl
  42b1e1:	74 0a                	je     0x42b1ed
  42b1e3:	3c ff                	cmp    al,0xff
  42b1e5:	74 06                	je     0x42b1ed
  42b1e7:	fe c8                	dec    al
  42b1e9:	88 01                	mov    BYTE PTR [ecx],al
  42b1eb:	eb 09                	jmp    0x42b1f6
  42b1ed:	51                   	push   ecx
  42b1ee:	e8 fd 33 1d 00       	call   0x5fe5f0
  42b1f3:	83 c4 04             	add    esp,0x4
  42b1f6:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
  42b1fc:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  42b200:	5e                   	pop    esi
  42b201:	5b                   	pop    ebx
  42b202:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42b209:	83 c4 24             	add    esp,0x24
  42b20c:	c3                   	ret
  42b20d:	90                   	nop
  42b20e:	90                   	nop
  42b20f:	90                   	nop
  42b210:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  42b214:	56                   	push   esi
  42b215:	8b b1 7c 01 00 00    	mov    esi,DWORD PTR [ecx+0x17c]
  42b21b:	33 c0                	xor    eax,eax
  42b21d:	3b d6                	cmp    edx,esi
  42b21f:	5e                   	pop    esi
  42b220:	0f 94 c0             	sete   al
  42b223:	c2 04 00             	ret    0x4
  42b226:	90                   	nop
  42b227:	90                   	nop
  42b228:	90                   	nop
  42b229:	90                   	nop
  42b22a:	90                   	nop
  42b22b:	90                   	nop
  42b22c:	90                   	nop
  42b22d:	90                   	nop
  42b22e:	90                   	nop
  42b22f:	90                   	nop
  42b230:	d9 81 e4 01 00 00    	fld    DWORD PTR [ecx+0x1e4]
  42b236:	c3                   	ret
  42b237:	90                   	nop
  42b238:	90                   	nop
  42b239:	90                   	nop
  42b23a:	90                   	nop
  42b23b:	90                   	nop
  42b23c:	90                   	nop
  42b23d:	90                   	nop
  42b23e:	90                   	nop
  42b23f:	90                   	nop
  42b240:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  42b246:	b0 01                	mov    al,0x1
  42b248:	84 c8                	test   al,cl
  42b24a:	75 08                	jne    0x42b254
  42b24c:	0a c8                	or     cl,al
  42b24e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  42b254:	e9 07 00 00 00       	jmp    0x42b260
  42b259:	90                   	nop
  42b25a:	90                   	nop
  42b25b:	90                   	nop
  42b25c:	90                   	nop
  42b25d:	90                   	nop
  42b25e:	90                   	nop
  42b25f:	90                   	nop
  42b260:	68 a0 1b 40 00       	push   0x401ba0
  42b265:	e8 11 f3 1d 00       	call   0x60a57b
  42b26a:	59                   	pop    ecx
  42b26b:	c3                   	ret
  42b26c:	90                   	nop
  42b26d:	90                   	nop
  42b26e:	90                   	nop
  42b26f:	90                   	nop
  42b270:	6a ff                	push   0xffffffff
  42b272:	68 58 31 62 00       	push   0x623158
  42b277:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42b27d:	50                   	push   eax
  42b27e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42b285:	51                   	push   ecx
  42b286:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  42b28a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  42b28e:	56                   	push   esi
  42b28f:	57                   	push   edi
  42b290:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  42b294:	8b f1                	mov    esi,ecx
  42b296:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  42b29a:	57                   	push   edi
  42b29b:	50                   	push   eax
  42b29c:	51                   	push   ecx
  42b29d:	52                   	push   edx
  42b29e:	8b ce                	mov    ecx,esi
  42b2a0:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  42b2a4:	e8 57 f4 ff ff       	call   0x42a700
  42b2a9:	57                   	push   edi
  42b2aa:	8d 8e f0 01 00 00    	lea    ecx,[esi+0x1f0]
  42b2b0:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  42b2b7:	00 
  42b2b8:	e8 43 b5 ff ff       	call   0x426800
  42b2bd:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  42b2c1:	c7 06 cc c0 64 00    	mov    DWORD PTR [esi],0x64c0cc
  42b2c7:	8b c6                	mov    eax,esi
  42b2c9:	5f                   	pop    edi
  42b2ca:	5e                   	pop    esi
  42b2cb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42b2d2:	83 c4 10             	add    esp,0x10
  42b2d5:	c2 10 00             	ret    0x10
  42b2d8:	90                   	nop
  42b2d9:	90                   	nop
  42b2da:	90                   	nop
  42b2db:	90                   	nop
  42b2dc:	90                   	nop
  42b2dd:	90                   	nop
  42b2de:	90                   	nop
  42b2df:	90                   	nop
  42b2e0:	56                   	push   esi
  42b2e1:	8b f1                	mov    esi,ecx
  42b2e3:	e8 e8 07 fe ff       	call   0x40bad0
  42b2e8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  42b2ed:	74 09                	je     0x42b2f8
  42b2ef:	56                   	push   esi
  42b2f0:	e8 fb 32 1d 00       	call   0x5fe5f0
  42b2f5:	83 c4 04             	add    esp,0x4
  42b2f8:	8b c6                	mov    eax,esi
  42b2fa:	5e                   	pop    esi
  42b2fb:	c2 04 00             	ret    0x4
  42b2fe:	90                   	nop
  42b2ff:	90                   	nop
  42b300:	8d 81 f0 01 00 00    	lea    eax,[ecx+0x1f0]
  42b306:	c3                   	ret
  42b307:	90                   	nop
  42b308:	90                   	nop
  42b309:	90                   	nop
  42b30a:	90                   	nop
  42b30b:	90                   	nop
  42b30c:	90                   	nop
  42b30d:	90                   	nop
  42b30e:	90                   	nop
  42b30f:	90                   	nop
