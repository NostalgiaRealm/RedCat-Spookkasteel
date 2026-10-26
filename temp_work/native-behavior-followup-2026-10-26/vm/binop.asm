
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005f8990 <.text+0x1f7990>:
  5f8990:	55                   	push   ebp
  5f8991:	8b ec                	mov    ebp,esp
  5f8993:	83 e4 f8             	and    esp,0xfffffff8
  5f8996:	6a ff                	push   0xffffffff
  5f8998:	68 cf 87 64 00       	push   0x6487cf
  5f899d:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5f89a3:	50                   	push   eax
  5f89a4:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5f89ab:	83 ec 5c             	sub    esp,0x5c
  5f89ae:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  5f89b2:	53                   	push   ebx
  5f89b3:	56                   	push   esi
  5f89b4:	57                   	push   edi
  5f89b5:	6a 00                	push   0x0
  5f89b7:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5f89bb:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  5f89c2:	00 
  5f89c3:	88 44 24 4c          	mov    BYTE PTR [esp+0x4c],al
  5f89c7:	e8 d4 b6 e0 ff       	call   0x4040a0
  5f89cc:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  5f89d0:	bb 01 00 00 00       	mov    ebx,0x1
  5f89d5:	88 4c 24 38          	mov    BYTE PTR [esp+0x38],cl
  5f89d9:	6a 00                	push   0x0
  5f89db:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5f89df:	89 5c 24 74          	mov    DWORD PTR [esp+0x74],ebx
  5f89e3:	e8 b8 b6 e0 ff       	call   0x4040a0
  5f89e8:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
  5f89eb:	c6 44 24 70 02       	mov    BYTE PTR [esp+0x70],0x2
  5f89f0:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
  5f89f3:	48                   	dec    eax
  5f89f4:	0f 84 0b 03 00 00    	je     0x5f8d05
  5f89fa:	48                   	dec    eax
  5f89fb:	0f 84 7e 01 00 00    	je     0x5f8b7f
  5f8a01:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
  5f8a04:	8d 54 24 24          	lea    edx,[esp+0x24]
  5f8a08:	52                   	push   edx
  5f8a09:	e8 02 50 e6 ff       	call   0x45da10
  5f8a0e:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  5f8a14:	c6 44 24 70 03       	mov    BYTE PTR [esp+0x70],0x3
  5f8a19:	51                   	push   ecx
  5f8a1a:	6a 00                	push   0x0
  5f8a1c:	50                   	push   eax
  5f8a1d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  5f8a21:	e8 da 41 e1 ff       	call   0x40cc00
  5f8a26:	53                   	push   ebx
  5f8a27:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5f8a2b:	c6 44 24 74 02       	mov    BYTE PTR [esp+0x74],0x2
  5f8a30:	e8 6b b6 e0 ff       	call   0x4040a0
  5f8a35:	8d 54 24 14          	lea    edx,[esp+0x14]
  5f8a39:	8b cf                	mov    ecx,edi
  5f8a3b:	52                   	push   edx
  5f8a3c:	e8 cf 4f e6 ff       	call   0x45da10
  5f8a41:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  5f8a47:	c6 44 24 70 04       	mov    BYTE PTR [esp+0x70],0x4
  5f8a4c:	51                   	push   ecx
  5f8a4d:	6a 00                	push   0x0
  5f8a4f:	50                   	push   eax
  5f8a50:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5f8a54:	e8 a7 41 e1 ff       	call   0x40cc00
  5f8a59:	53                   	push   ebx
  5f8a5a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  5f8a5e:	c6 44 24 74 02       	mov    BYTE PTR [esp+0x74],0x2
  5f8a63:	e8 38 b6 e0 ff       	call   0x4040a0
  5f8a68:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
  5f8a6b:	4a                   	dec    edx
  5f8a6c:	ff 24 95 30 8e 5f 00 	jmp    DWORD PTR [edx*4+0x5f8e30]
  5f8a73:	8d 44 24 38          	lea    eax,[esp+0x38]
  5f8a77:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5f8a7b:	50                   	push   eax
  5f8a7c:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  5f8a80:	51                   	push   ecx
  5f8a81:	52                   	push   edx
  5f8a82:	e8 e9 58 e5 ff       	call   0x44e370
  5f8a87:	83 c4 0c             	add    esp,0xc
  5f8a8a:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5f8a8d:	50                   	push   eax
  5f8a8e:	8b ce                	mov    ecx,esi
  5f8a90:	c6 44 24 74 05       	mov    BYTE PTR [esp+0x74],0x5
  5f8a95:	e8 46 a1 fe ff       	call   0x5e2be0
  5f8a9a:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5f8aa0:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5f8aa4:	53                   	push   ebx
  5f8aa5:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  5f8aa9:	c6 44 24 74 02       	mov    BYTE PTR [esp+0x74],0x2
  5f8aae:	e8 ed b5 e0 ff       	call   0x4040a0
  5f8ab3:	53                   	push   ebx
  5f8ab4:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5f8ab8:	88 5c 24 74          	mov    BYTE PTR [esp+0x74],bl
  5f8abc:	e8 df b5 e0 ff       	call   0x4040a0
  5f8ac1:	53                   	push   ebx
  5f8ac2:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5f8ac6:	c6 44 24 74 00       	mov    BYTE PTR [esp+0x74],0x0
  5f8acb:	e8 d0 b5 e0 ff       	call   0x4040a0
  5f8ad0:	8b c6                	mov    eax,esi
  5f8ad2:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  5f8ad6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5f8add:	5f                   	pop    edi
  5f8ade:	5e                   	pop    esi
  5f8adf:	5b                   	pop    ebx
  5f8ae0:	8b e5                	mov    esp,ebp
  5f8ae2:	5d                   	pop    ebp
  5f8ae3:	c3                   	ret
  5f8ae4:	8d 44 24 38          	lea    eax,[esp+0x38]
  5f8ae8:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5f8aec:	50                   	push   eax
  5f8aed:	e8 8e c0 e8 ff       	call   0x484b80
  5f8af2:	85 c0                	test   eax,eax
  5f8af4:	0f 9d c0             	setge  al
  5f8af7:	25 ff 00 00 00       	and    eax,0xff
  5f8afc:	50                   	push   eax
  5f8afd:	e9 ca 00 00 00       	jmp    0x5f8bcc
  5f8b02:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5f8b06:	51                   	push   ecx
  5f8b07:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5f8b0b:	eb e0                	jmp    0x5f8aed
  5f8b0d:	8d 54 24 48          	lea    edx,[esp+0x48]
  5f8b11:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  5f8b15:	52                   	push   edx
  5f8b16:	e8 65 c0 e8 ff       	call   0x484b80
  5f8b1b:	85 c0                	test   eax,eax
  5f8b1d:	0f 9c c0             	setl   al
  5f8b20:	25 ff 00 00 00       	and    eax,0xff
  5f8b25:	50                   	push   eax
  5f8b26:	e9 a1 00 00 00       	jmp    0x5f8bcc
  5f8b2b:	8d 44 24 38          	lea    eax,[esp+0x38]
  5f8b2f:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5f8b33:	50                   	push   eax
  5f8b34:	e8 47 c0 e8 ff       	call   0x484b80
  5f8b39:	85 c0                	test   eax,eax
  5f8b3b:	0f 9c c0             	setl   al
  5f8b3e:	25 ff 00 00 00       	and    eax,0xff
  5f8b43:	50                   	push   eax
  5f8b44:	e9 83 00 00 00       	jmp    0x5f8bcc
  5f8b49:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  5f8b4d:	51                   	push   ecx
  5f8b4e:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5f8b52:	e8 29 c0 e8 ff       	call   0x484b80
  5f8b57:	85 c0                	test   eax,eax
  5f8b59:	0f 94 c0             	sete   al
  5f8b5c:	25 ff 00 00 00       	and    eax,0xff
  5f8b61:	50                   	push   eax
  5f8b62:	eb 68                	jmp    0x5f8bcc
  5f8b64:	8d 54 24 38          	lea    edx,[esp+0x38]
  5f8b68:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5f8b6c:	52                   	push   edx
  5f8b6d:	e8 0e c0 e8 ff       	call   0x484b80
  5f8b72:	85 c0                	test   eax,eax
  5f8b74:	0f 95 c0             	setne  al
  5f8b77:	25 ff 00 00 00       	and    eax,0xff
  5f8b7c:	50                   	push   eax
  5f8b7d:	eb 4d                	jmp    0x5f8bcc
  5f8b7f:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  5f8b82:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  5f8b85:	49                   	dec    ecx
  5f8b86:	8b 70 10             	mov    esi,DWORD PTR [eax+0x10]
  5f8b89:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
  5f8b8c:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5f8b90:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5f8b94:	ff 24 8d 58 8e 5f 00 	jmp    DWORD PTR [ecx*4+0x5f8e58]
  5f8b9b:	03 c6                	add    eax,esi
  5f8b9d:	50                   	push   eax
  5f8b9e:	eb 2c                	jmp    0x5f8bcc
  5f8ba0:	0f af c6             	imul   eax,esi
  5f8ba3:	50                   	push   eax
  5f8ba4:	eb 26                	jmp    0x5f8bcc
  5f8ba6:	2b c6                	sub    eax,esi
  5f8ba8:	50                   	push   eax
  5f8ba9:	eb 21                	jmp    0x5f8bcc
  5f8bab:	99                   	cdq
  5f8bac:	f7 fe                	idiv   esi
  5f8bae:	50                   	push   eax
  5f8baf:	eb 1b                	jmp    0x5f8bcc
  5f8bb1:	33 d2                	xor    edx,edx
  5f8bb3:	3b c6                	cmp    eax,esi
  5f8bb5:	0f 9d c2             	setge  dl
  5f8bb8:	eb 11                	jmp    0x5f8bcb
  5f8bba:	33 c9                	xor    ecx,ecx
  5f8bbc:	3b c6                	cmp    eax,esi
  5f8bbe:	0f 9e c1             	setle  cl
  5f8bc1:	51                   	push   ecx
  5f8bc2:	eb 08                	jmp    0x5f8bcc
  5f8bc4:	33 d2                	xor    edx,edx
  5f8bc6:	3b c6                	cmp    eax,esi
  5f8bc8:	0f 9f c2             	setg   dl
  5f8bcb:	52                   	push   edx
  5f8bcc:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5f8bcf:	8b ce                	mov    ecx,esi
  5f8bd1:	e8 ba b6 ff ff       	call   0x5f4290
  5f8bd6:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5f8bdc:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5f8be0:	e9 ce fe ff ff       	jmp    0x5f8ab3
  5f8be5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  5f8be8:	33 c9                	xor    ecx,ecx
  5f8bea:	3b c6                	cmp    eax,esi
  5f8bec:	0f 9c c1             	setl   cl
  5f8bef:	c7 47 08 02 00 00 00 	mov    DWORD PTR [edi+0x8],0x2
  5f8bf6:	89 4f 10             	mov    DWORD PTR [edi+0x10],ecx
  5f8bf9:	eb 14                	jmp    0x5f8c0f
  5f8bfb:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  5f8bfe:	33 d2                	xor    edx,edx
  5f8c00:	3b c6                	cmp    eax,esi
  5f8c02:	c7 47 08 02 00 00 00 	mov    DWORD PTR [edi+0x8],0x2
  5f8c09:	0f 94 c2             	sete   dl
  5f8c0c:	89 57 10             	mov    DWORD PTR [edi+0x10],edx
  5f8c0f:	53                   	push   ebx
  5f8c10:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5f8c14:	c7 07 d4 0a 65 00    	mov    DWORD PTR [edi],0x650ad4
  5f8c1a:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  5f8c1e:	88 5c 24 74          	mov    BYTE PTR [esp+0x74],bl
  5f8c22:	e8 79 b4 e0 ff       	call   0x4040a0
  5f8c27:	53                   	push   ebx
  5f8c28:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5f8c2c:	c6 44 24 74 00       	mov    BYTE PTR [esp+0x74],0x0
  5f8c31:	e8 6a b4 e0 ff       	call   0x4040a0
  5f8c36:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  5f8c3a:	8b c7                	mov    eax,edi
  5f8c3c:	5f                   	pop    edi
  5f8c3d:	5e                   	pop    esi
  5f8c3e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5f8c45:	5b                   	pop    ebx
  5f8c46:	8b e5                	mov    esp,ebp
  5f8c48:	5d                   	pop    ebp
  5f8c49:	c3                   	ret
  5f8c4a:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  5f8c4d:	33 c9                	xor    ecx,ecx
  5f8c4f:	3b c6                	cmp    eax,esi
  5f8c51:	0f 95 c1             	setne  cl
  5f8c54:	c7 47 08 02 00 00 00 	mov    DWORD PTR [edi+0x8],0x2
  5f8c5b:	89 4f 10             	mov    DWORD PTR [edi+0x10],ecx
  5f8c5e:	eb af                	jmp    0x5f8c0f
  5f8c60:	85 c0                	test   eax,eax
  5f8c62:	74 08                	je     0x5f8c6c
  5f8c64:	85 f6                	test   esi,esi
  5f8c66:	74 04                	je     0x5f8c6c
  5f8c68:	8b c3                	mov    eax,ebx
  5f8c6a:	eb 02                	jmp    0x5f8c6e
  5f8c6c:	33 c0                	xor    eax,eax
  5f8c6e:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5f8c71:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5f8c75:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5f8c7c:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5f8c7f:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5f8c85:	e9 29 fe ff ff       	jmp    0x5f8ab3
  5f8c8a:	85 c0                	test   eax,eax
  5f8c8c:	75 04                	jne    0x5f8c92
  5f8c8e:	85 f6                	test   esi,esi
  5f8c90:	74 02                	je     0x5f8c94
  5f8c92:	8b c3                	mov    eax,ebx
  5f8c94:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5f8c97:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5f8c9b:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5f8ca2:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5f8ca5:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5f8cab:	e9 03 fe ff ff       	jmp    0x5f8ab3
  5f8cb0:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  5f8cb4:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  5f8cb8:	e8 a3 2a 01 00       	call   0x60b760
  5f8cbd:	e8 5e 1e 01 00       	call   0x60ab20
  5f8cc2:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5f8cc5:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5f8cc9:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5f8cd0:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5f8cd3:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5f8cd9:	e9 d5 fd ff ff       	jmp    0x5f8ab3
  5f8cde:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  5f8ce1:	99                   	cdq
  5f8ce2:	c7 47 08 02 00 00 00 	mov    DWORD PTR [edi+0x8],0x2
  5f8ce9:	f7 fe                	idiv   esi
  5f8ceb:	e9 1c ff ff ff       	jmp    0x5f8c0c
  5f8cf0:	99                   	cdq
  5f8cf1:	f7 fe                	idiv   esi
  5f8cf3:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  5f8cf6:	c7 47 08 02 00 00 00 	mov    DWORD PTR [edi+0x8],0x2
  5f8cfd:	89 47 10             	mov    DWORD PTR [edi+0x10],eax
  5f8d00:	e9 0a ff ff ff       	jmp    0x5f8c0f
  5f8d05:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
  5f8d08:	dd 47 10             	fld    QWORD PTR [edi+0x10]
  5f8d0b:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
  5f8d0e:	dd 54 24 24          	fst    QWORD PTR [esp+0x24]
  5f8d12:	8b 4a 14             	mov    ecx,DWORD PTR [edx+0x14]
  5f8d15:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
  5f8d18:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5f8d1c:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  5f8d20:	4a                   	dec    edx
  5f8d21:	ff 24 95 98 8e 5f 00 	jmp    DWORD PTR [edx*4+0x5f8e98]
  5f8d28:	dc 44 24 14          	fadd   QWORD PTR [esp+0x14]
  5f8d2c:	83 ec 08             	sub    esp,0x8
  5f8d2f:	dd 1c 24             	fstp   QWORD PTR [esp]
  5f8d32:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5f8d35:	8b ce                	mov    ecx,esi
  5f8d37:	e8 34 b5 ff ff       	call   0x5f4270
  5f8d3c:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5f8d42:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5f8d46:	e9 68 fd ff ff       	jmp    0x5f8ab3
  5f8d4b:	dc 4c 24 14          	fmul   QWORD PTR [esp+0x14]
  5f8d4f:	eb db                	jmp    0x5f8d2c
  5f8d51:	dc 64 24 14          	fsub   QWORD PTR [esp+0x14]
  5f8d55:	eb d5                	jmp    0x5f8d2c
  5f8d57:	dc 74 24 14          	fdiv   QWORD PTR [esp+0x14]
  5f8d5b:	eb cf                	jmp    0x5f8d2c
  5f8d5d:	dc 5c 24 14          	fcomp  QWORD PTR [esp+0x14]
  5f8d61:	df e0                	fnstsw ax
  5f8d63:	f6 c4 01             	test   ah,0x1
  5f8d66:	75 08                	jne    0x5f8d70
  5f8d68:	8b c3                	mov    eax,ebx
  5f8d6a:	50                   	push   eax
  5f8d6b:	e9 5c fe ff ff       	jmp    0x5f8bcc
  5f8d70:	33 c0                	xor    eax,eax
  5f8d72:	50                   	push   eax
  5f8d73:	e9 54 fe ff ff       	jmp    0x5f8bcc
  5f8d78:	dc 5c 24 14          	fcomp  QWORD PTR [esp+0x14]
  5f8d7c:	df e0                	fnstsw ax
  5f8d7e:	f6 c4 41             	test   ah,0x41
  5f8d81:	74 ed                	je     0x5f8d70
  5f8d83:	8b c3                	mov    eax,ebx
  5f8d85:	50                   	push   eax
  5f8d86:	e9 41 fe ff ff       	jmp    0x5f8bcc
  5f8d8b:	dc 5c 24 14          	fcomp  QWORD PTR [esp+0x14]
  5f8d8f:	df e0                	fnstsw ax
  5f8d91:	f6 c4 41             	test   ah,0x41
  5f8d94:	75 da                	jne    0x5f8d70
  5f8d96:	8b c3                	mov    eax,ebx
  5f8d98:	50                   	push   eax
  5f8d99:	e9 2e fe ff ff       	jmp    0x5f8bcc
  5f8d9e:	dc 5c 24 14          	fcomp  QWORD PTR [esp+0x14]
  5f8da2:	df e0                	fnstsw ax
  5f8da4:	f6 c4 01             	test   ah,0x1
  5f8da7:	74 c7                	je     0x5f8d70
  5f8da9:	8b c3                	mov    eax,ebx
  5f8dab:	50                   	push   eax
  5f8dac:	e9 1b fe ff ff       	jmp    0x5f8bcc
  5f8db1:	dc 5c 24 14          	fcomp  QWORD PTR [esp+0x14]
  5f8db5:	df e0                	fnstsw ax
  5f8db7:	f6 c4 40             	test   ah,0x40
  5f8dba:	74 b4                	je     0x5f8d70
  5f8dbc:	8b c3                	mov    eax,ebx
  5f8dbe:	50                   	push   eax
  5f8dbf:	e9 08 fe ff ff       	jmp    0x5f8bcc
  5f8dc4:	dc 5c 24 14          	fcomp  QWORD PTR [esp+0x14]
  5f8dc8:	df e0                	fnstsw ax
  5f8dca:	f6 c4 40             	test   ah,0x40
  5f8dcd:	75 a1                	jne    0x5f8d70
  5f8dcf:	8b c3                	mov    eax,ebx
  5f8dd1:	50                   	push   eax
  5f8dd2:	e9 f5 fd ff ff       	jmp    0x5f8bcc
  5f8dd7:	dd d8                	fstp   st(0)
  5f8dd9:	dd 44 24 24          	fld    QWORD PTR [esp+0x24]
  5f8ddd:	dd 44 24 14          	fld    QWORD PTR [esp+0x14]
  5f8de1:	e8 7a 29 01 00       	call   0x60b760
  5f8de6:	dd 5c 24 24          	fstp   QWORD PTR [esp+0x24]
  5f8dea:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  5f8dee:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  5f8df2:	50                   	push   eax
  5f8df3:	51                   	push   ecx
  5f8df4:	e9 39 ff ff ff       	jmp    0x5f8d32
  5f8df9:	d9 c0                	fld    st(0)
  5f8dfb:	dc 74 24 14          	fdiv   QWORD PTR [esp+0x14]
  5f8dff:	e8 1c 1d 01 00       	call   0x60ab20
  5f8e04:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  5f8e08:	83 ec 08             	sub    esp,0x8
  5f8e0b:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  5f8e0f:	dc 4c 24 1c          	fmul   QWORD PTR [esp+0x1c]
  5f8e13:	d8 e9                	fsubr  st,st(1)
  5f8e15:	dd 1c 24             	fstp   QWORD PTR [esp]
  5f8e18:	dd d8                	fstp   st(0)
  5f8e1a:	e9 13 ff ff ff       	jmp    0x5f8d32
  5f8e1f:	dc 74 24 14          	fdiv   QWORD PTR [esp+0x14]
  5f8e23:	e8 f8 1c 01 00       	call   0x60ab20
  5f8e28:	50                   	push   eax
  5f8e29:	e9 9e fd ff ff       	jmp    0x5f8bcc
  5f8e2e:	dd d8                	fstp   st(0)
