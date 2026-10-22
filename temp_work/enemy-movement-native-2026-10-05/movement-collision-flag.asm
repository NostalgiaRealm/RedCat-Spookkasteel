  597a00:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  597a06:	6a ff                	push   0xffffffff
  597a08:	68 e1 3f 64 00       	push   0x643fe1
  597a0d:	50                   	push   eax
  597a0e:	a0 79 9f 6c 00       	mov    al,ds:0x6c9f79
  597a13:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  597a1a:	81 ec a0 00 00 00    	sub    esp,0xa0
  597a20:	a8 01                	test   al,0x1
  597a22:	53                   	push   ebx
  597a23:	0f 85 ba 01 00 00    	jne    0x597be3
  597a29:	8a c8                	mov    cl,al
  597a2b:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  597a2f:	55                   	push   ebp
  597a30:	80 c9 01             	or     cl,0x1
  597a33:	56                   	push   esi
  597a34:	33 db                	xor    ebx,ebx
  597a36:	57                   	push   edi
  597a37:	88 0d 79 9f 6c 00    	mov    BYTE PTR ds:0x6c9f79,cl
  597a3d:	53                   	push   ebx
  597a3e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  597a42:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  597a46:	e8 55 c6 e6 ff       	call   0x4040a0
  597a4b:	bf 98 6c 6a 00       	mov    edi,0x6a6c98
  597a50:	83 c9 ff             	or     ecx,0xffffffff
  597a53:	33 c0                	xor    eax,eax
  597a55:	6a 01                	push   0x1
  597a57:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  597a59:	f7 d1                	not    ecx
  597a5b:	49                   	dec    ecx
  597a5c:	8b e9                	mov    ebp,ecx
  597a5e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  597a62:	55                   	push   ebp
  597a63:	e8 d8 9e e6 ff       	call   0x401940
  597a68:	84 c0                	test   al,al
  597a6a:	74 24                	je     0x597a90
  597a6c:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  597a70:	8b cd                	mov    ecx,ebp
  597a72:	8b d1                	mov    edx,ecx
  597a74:	be 98 6c 6a 00       	mov    esi,0x6a6c98
  597a79:	c1 e9 02             	shr    ecx,0x2
  597a7c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  597a7e:	8b ca                	mov    ecx,edx
  597a80:	83 e1 03             	and    ecx,0x3
  597a83:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  597a85:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  597a89:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
  597a8d:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  597a90:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  597a94:	53                   	push   ebx
  597a95:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  597a99:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  597a9d:	89 9c 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],ebx
  597aa4:	e8 f7 c5 e6 ff       	call   0x4040a0
  597aa9:	bf 84 6c 6a 00       	mov    edi,0x6a6c84
  597aae:	83 c9 ff             	or     ecx,0xffffffff
  597ab1:	33 c0                	xor    eax,eax
  597ab3:	6a 01                	push   0x1
  597ab5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  597ab7:	f7 d1                	not    ecx
  597ab9:	49                   	dec    ecx
  597aba:	8b e9                	mov    ebp,ecx
  597abc:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  597ac0:	55                   	push   ebp
  597ac1:	e8 7a 9e e6 ff       	call   0x401940
  597ac6:	84 c0                	test   al,al
  597ac8:	74 24                	je     0x597aee
  597aca:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  597ace:	8b cd                	mov    ecx,ebp
  597ad0:	8b d1                	mov    edx,ecx
  597ad2:	be 84 6c 6a 00       	mov    esi,0x6a6c84
  597ad7:	c1 e9 02             	shr    ecx,0x2
  597ada:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  597adc:	8b ca                	mov    ecx,edx
  597ade:	83 e1 03             	and    ecx,0x3
  597ae1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  597ae3:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  597ae7:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  597aeb:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  597aee:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  597af2:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x1
  597af9:	01 
  597afa:	51                   	push   ecx
  597afb:	e8 90 f4 e9 ff       	call   0x436f90
  597b00:	83 c4 04             	add    esp,0x4
  597b03:	53                   	push   ebx
  597b04:	50                   	push   eax
  597b05:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  597b09:	53                   	push   ebx
  597b0a:	8d 44 24 20          	lea    eax,[esp+0x20]
  597b0e:	52                   	push   edx
  597b0f:	50                   	push   eax
  597b10:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  597b14:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x2
  597b1b:	02 
  597b1c:	e8 af 4e 01 00       	call   0x5ac9d0
  597b21:	8b f0                	mov    esi,eax
  597b23:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  597b26:	3d 00 00 00 80       	cmp    eax,0x80000000
  597b2b:	75 18                	jne    0x597b45
  597b2d:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  597b30:	3b c3                	cmp    eax,ebx
  597b32:	75 05                	jne    0x597b39
  597b34:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  597b39:	50                   	push   eax
  597b3a:	e8 d1 33 07 00       	call   0x60af10
  597b3f:	83 c4 04             	add    esp,0x4
  597b42:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  597b45:	3b c3                	cmp    eax,ebx
  597b47:	0f 95 c1             	setne  cl
  597b4a:	88 0d 78 9f 6c 00    	mov    BYTE PTR ds:0x6c9f78,cl
  597b50:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  597b54:	e8 47 51 01 00       	call   0x5acca0
  597b59:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  597b5d:	5f                   	pop    edi
  597b5e:	5e                   	pop    esi
  597b5f:	3b c3                	cmp    eax,ebx
  597b61:	5d                   	pop    ebp
  597b62:	74 1d                	je     0x597b81
  597b64:	8d 48 ff             	lea    ecx,[eax-0x1]
  597b67:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  597b6a:	3a c3                	cmp    al,bl
  597b6c:	74 0a                	je     0x597b78
  597b6e:	3c ff                	cmp    al,0xff
  597b70:	74 06                	je     0x597b78
  597b72:	fe c8                	dec    al
  597b74:	88 01                	mov    BYTE PTR [ecx],al
  597b76:	eb 09                	jmp    0x597b81
  597b78:	51                   	push   ecx
  597b79:	e8 72 6a 06 00       	call   0x5fe5f0
  597b7e:	83 c4 04             	add    esp,0x4
  597b81:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  597b85:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  597b89:	3b c3                	cmp    eax,ebx
  597b8b:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  597b8f:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  597b93:	74 1d                	je     0x597bb2
  597b95:	8d 48 ff             	lea    ecx,[eax-0x1]
  597b98:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  597b9b:	3a c3                	cmp    al,bl
  597b9d:	74 0a                	je     0x597ba9
  597b9f:	3c ff                	cmp    al,0xff
  597ba1:	74 06                	je     0x597ba9
  597ba3:	fe c8                	dec    al
  597ba5:	88 01                	mov    BYTE PTR [ecx],al
  597ba7:	eb 09                	jmp    0x597bb2
  597ba9:	51                   	push   ecx
  597baa:	e8 41 6a 06 00       	call   0x5fe5f0
  597baf:	83 c4 04             	add    esp,0x4
  597bb2:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  597bb6:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  597bba:	3b c3                	cmp    eax,ebx
  597bbc:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  597bc0:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  597bc4:	74 1d                	je     0x597be3
  597bc6:	8d 48 ff             	lea    ecx,[eax-0x1]
  597bc9:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  597bcc:	3a c3                	cmp    al,bl
  597bce:	74 0a                	je     0x597bda
  597bd0:	3c ff                	cmp    al,0xff
  597bd2:	74 06                	je     0x597bda
  597bd4:	fe c8                	dec    al
  597bd6:	88 01                	mov    BYTE PTR [ecx],al
  597bd8:	eb 09                	jmp    0x597be3
  597bda:	51                   	push   ecx
  597bdb:	e8 10 6a 06 00       	call   0x5fe5f0
  597be0:	83 c4 04             	add    esp,0x4
  597be3:	8b 8c 24 a4 00 00 00 	mov    ecx,DWORD PTR [esp+0xa4]
  597bea:	a0 78 9f 6c 00       	mov    al,ds:0x6c9f78
  597bef:	5b                   	pop    ebx
  597bf0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  597bf7:	81 c4 ac 00 00 00    	add    esp,0xac
  597bfd:	c3                   	ret
  597bfe:	90                   	nop
  597bff:	90                   	nop
