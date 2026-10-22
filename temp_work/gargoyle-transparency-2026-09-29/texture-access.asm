  50a951:	c6 44 24 3c 06       	mov    BYTE PTR [esp+0x3c],0x6
  50a956:	52                   	push   edx
  50a957:	6a 1e                	push   0x1e
  50a959:	68 54 e5 69 00       	push   0x69e554
  50a95e:	68 b0 e5 69 00       	push   0x69e5b0
  50a963:	e8 88 5e 09 00       	call   0x5a07f0
  50a968:	ff d0                	call   eax
  50a96a:	83 c4 10             	add    esp,0x10
  50a96d:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  50a971:	c6 44 24 3c 04       	mov    BYTE PTR [esp+0x3c],0x4
  50a976:	6a 01                	push   0x1
  50a978:	e8 23 97 ef ff       	call   0x4040a0
  50a97d:	8b 45 2c             	mov    eax,DWORD PTR [ebp+0x2c]
  50a980:	8d 4d 2c             	lea    ecx,[ebp+0x2c]
  50a983:	85 c0                	test   eax,eax
  50a985:	74 05                	je     0x50a98c
  50a987:	e8 24 59 0b 00       	call   0x5c02b0
  50a98c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  50a990:	c6 44 24 3c 03       	mov    BYTE PTR [esp+0x3c],0x3
  50a995:	e8 d6 3d 0a 00       	call   0x5ae770
  50a99a:	8b 4d 50             	mov    ecx,DWORD PTR [ebp+0x50]
  50a99d:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  50a9a2:	85 c9                	test   ecx,ecx
  50a9a4:	74 17                	je     0x50a9bd
  50a9a6:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  50a9a9:	48                   	dec    eax
  50a9aa:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  50a9ad:	75 07                	jne    0x50a9b6
  50a9af:	6a 00                	push   0x0
  50a9b1:	e8 0a 16 0a 00       	call   0x5abfc0
  50a9b6:	c7 45 50 00 00 00 00 	mov    DWORD PTR [ebp+0x50],0x0
  50a9bd:	8d 7d 30             	lea    edi,[ebp+0x30]
  50a9c0:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
  50a9c4:	6a 2d                	push   0x2d
  50a9c6:	68 98 07 69 00       	push   0x690798
  50a9cb:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  50a9cf:	c6 44 24 44 07       	mov    BYTE PTR [esp+0x44],0x7
  50a9d4:	e8 17 3c 0a 00       	call   0x5ae5f0
  50a9d9:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  50a9dd:	e8 8e 3d 0a 00       	call   0x5ae770
  50a9e2:	8b 5f 08             	mov    ebx,DWORD PTR [edi+0x8]
  50a9e5:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
  50a9e8:	3b f3                	cmp    esi,ebx
  50a9ea:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  50a9ef:	74 10                	je     0x50aa01
  50a9f1:	6a 00                	push   0x0
  50a9f3:	8b ce                	mov    ecx,esi
  50a9f5:	e8 76 97 04 00       	call   0x554170
  50a9fa:	83 c6 04             	add    esi,0x4
  50a9fd:	3b f3                	cmp    esi,ebx
  50a9ff:	75 f0                	jne    0x50a9f1
  50aa01:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  50aa04:	50                   	push   eax
  50aa05:	e8 e6 3b 0f 00       	call   0x5fe5f0
  50aa0a:	33 f6                	xor    esi,esi
  50aa0c:	83 c4 04             	add    esp,0x4
  50aa0f:	89 77 04             	mov    DWORD PTR [edi+0x4],esi
  50aa12:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
  50aa15:	89 77 0c             	mov    DWORD PTR [edi+0xc],esi
  50aa18:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  50aa1b:	3b c6                	cmp    eax,esi
  50aa1d:	74 1d                	je     0x50aa3c
  50aa1f:	8d 48 ff             	lea    ecx,[eax-0x1]
  50aa22:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  50aa25:	84 c0                	test   al,al
  50aa27:	74 0a                	je     0x50aa33
  50aa29:	3c ff                	cmp    al,0xff
  50aa2b:	74 06                	je     0x50aa33
  50aa2d:	fe c8                	dec    al
  50aa2f:	88 01                	mov    BYTE PTR [ecx],al
  50aa31:	eb 09                	jmp    0x50aa3c
  50aa33:	51                   	push   ecx
  50aa34:	e8 b7 3b 0f 00       	call   0x5fe5f0
  50aa39:	83 c4 04             	add    esp,0x4
  50aa3c:	89 75 20             	mov    DWORD PTR [ebp+0x20],esi
  50aa3f:	89 75 24             	mov    DWORD PTR [ebp+0x24],esi
  50aa42:	89 75 28             	mov    DWORD PTR [ebp+0x28],esi
  50aa45:	8b cd                	mov    ecx,ebp
  50aa47:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  50aa4e:	ff 
  50aa4f:	c7 45 00 94 e7 64 00 	mov    DWORD PTR [ebp+0x0],0x64e794
  50aa56:	e8 75 0a 0a 00       	call   0x5ab4d0
  50aa5b:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  50aa5f:	5f                   	pop    edi
  50aa60:	5e                   	pop    esi
  50aa61:	5d                   	pop    ebp
  50aa62:	5b                   	pop    ebx
  50aa63:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  50aa6a:	83 c4 30             	add    esp,0x30
  50aa6d:	c3                   	ret
  50aa6e:	90                   	nop
  50aa6f:	90                   	nop
  50aa70:	6a ff                	push   0xffffffff
  50aa72:	68 98 67 63 00       	push   0x636798
  50aa77:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  50aa7d:	50                   	push   eax
  50aa7e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  50aa85:	83 ec 18             	sub    esp,0x18
  50aa88:	53                   	push   ebx
  50aa89:	56                   	push   esi
  50aa8a:	8b f1                	mov    esi,ecx
  50aa8c:	33 db                	xor    ebx,ebx
  50aa8e:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  50aa92:	39 5e 2c             	cmp    DWORD PTR [esi+0x2c],ebx
  50aa95:	0f 85 b7 00 00 00    	jne    0x50ab52
  50aa9b:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  50aa9f:	55                   	push   ebp
  50aaa0:	57                   	push   edi
  50aaa1:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  50aaa5:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  50aaaa:	83 c9 ff             	or     ecx,0xffffffff
  50aaad:	33 c0                	xor    eax,eax
  50aaaf:	6a 01                	push   0x1
  50aab1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  50aab3:	f7 d1                	not    ecx
  50aab5:	49                   	dec    ecx
  50aab6:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  50aaba:	8b e9                	mov    ebp,ecx
  50aabc:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  50aac0:	55                   	push   ebp
  50aac1:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  50aac5:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  50aac9:	e8 72 6e ef ff       	call   0x401940
  50aace:	84 c0                	test   al,al
  50aad0:	74 28                	je     0x50aafa
  50aad2:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  50aad6:	8b cd                	mov    ecx,ebp
  50aad8:	8b d1                	mov    edx,ecx
  50aada:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  50aadf:	c1 e9 02             	shr    ecx,0x2
  50aae2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  50aae4:	8b ca                	mov    ecx,edx
  50aae6:	83 e1 03             	and    ecx,0x3
  50aae9:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  50aaeb:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  50aaef:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  50aaf3:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  50aaf7:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  50aafa:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  50aafe:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  50ab02:	51                   	push   ecx
  50ab03:	6a 32                	push   0x32
  50ab05:	68 54 e5 69 00       	push   0x69e554
  50ab0a:	68 20 e6 69 00       	push   0x69e620
  50ab0f:	e8 dc 5c 09 00       	call   0x5a07f0
  50ab14:	ff d0                	call   eax
  50ab16:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  50ab1a:	83 c4 10             	add    esp,0x10
  50ab1d:	3b c3                	cmp    eax,ebx
  50ab1f:	5f                   	pop    edi
  50ab20:	5d                   	pop    ebp
  50ab21:	74 2f                	je     0x50ab52
  50ab23:	8d 48 ff             	lea    ecx,[eax-0x1]
  50ab26:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  50ab29:	3a c3                	cmp    al,bl
  50ab2b:	74 1c                	je     0x50ab49
  50ab2d:	3c ff                	cmp    al,0xff
  50ab2f:	74 18                	je     0x50ab49
  50ab31:	fe c8                	dec    al
  50ab33:	88 01                	mov    BYTE PTR [ecx],al
  50ab35:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
  50ab38:	5e                   	pop    esi
  50ab39:	5b                   	pop    ebx
  50ab3a:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  50ab3e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  50ab45:	83 c4 24             	add    esp,0x24
  50ab48:	c3                   	ret
  50ab49:	51                   	push   ecx
  50ab4a:	e8 a1 3a 0f 00       	call   0x5fe5f0
  50ab4f:	83 c4 04             	add    esp,0x4
  50ab52:	8b 46 2c             	mov    eax,DWORD PTR [esi+0x2c]
  50ab55:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  50ab59:	5e                   	pop    esi
  50ab5a:	5b                   	pop    ebx
  50ab5b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  50ab62:	83 c4 24             	add    esp,0x24
  50ab65:	c3                   	ret
  50ab66:	90                   	nop
  50ab67:	90                   	nop
  50ab68:	90                   	nop
  50ab69:	90                   	nop
  50ab6a:	90                   	nop
  50ab6b:	90                   	nop
  50ab6c:	90                   	nop
  50ab6d:	90                   	nop
  50ab6e:	90                   	nop
  50ab6f:	90                   	nop
  50ab70:	6a ff                	push   0xffffffff
  50ab72:	68 c0 67 63 00       	push   0x6367c0
  50ab77:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  50ab7d:	50                   	push   eax
  50ab7e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  50ab85:	83 ec 18             	sub    esp,0x18
  50ab88:	53                   	push   ebx
  50ab89:	33 db                	xor    ebx,ebx
  50ab8b:	56                   	push   esi
  50ab8c:	8b f1                	mov    esi,ecx
  50ab8e:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  50ab92:	8b 4e 50             	mov    ecx,DWORD PTR [esi+0x50]
  50ab95:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  50ab99:	3b cb                	cmp    ecx,ebx
  50ab9b:	74 12                	je     0x50abaf
  50ab9d:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  50aba0:	48                   	dec    eax
  50aba1:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  50aba4:	75 06                	jne    0x50abac
  50aba6:	53                   	push   ebx
  50aba7:	e8 14 14 0a 00       	call   0x5abfc0
  50abac:	89 5e 50             	mov    DWORD PTR [esi+0x50],ebx
  50abaf:	8b ce                	mov    ecx,esi
  50abb1:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
  50abb8:	ff 
  50abb9:	e8 b2 fe ff ff       	call   0x50aa70
  50abbe:	8b c8                	mov    ecx,eax
  50abc0:	33 d2                	xor    edx,edx
  50abc2:	e8 59 95 0b 00       	call   0x5c4120
  50abc7:	3b c3                	cmp    eax,ebx
  50abc9:	0f 95 c0             	setne  al
  50abcc:	3a c3                	cmp    al,bl
  50abce:	0f 85 b4 00 00 00    	jne    0x50ac88
  50abd4:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  50abd8:	55                   	push   ebp
  50abd9:	57                   	push   edi
  50abda:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  50abde:	bf 30 e6 69 00       	mov    edi,0x69e630
  50abe3:	83 c9 ff             	or     ecx,0xffffffff
  50abe6:	33 c0                	xor    eax,eax
  50abe8:	6a 01                	push   0x1
  50abea:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  50abec:	f7 d1                	not    ecx
  50abee:	49                   	dec    ecx
  50abef:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  50abf3:	8b e9                	mov    ebp,ecx
  50abf5:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  50abf9:	55                   	push   ebp
  50abfa:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  50abfe:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
