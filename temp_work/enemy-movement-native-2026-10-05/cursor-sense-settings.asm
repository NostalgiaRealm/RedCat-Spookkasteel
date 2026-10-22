  4258a0:	6a ff                	push   0xffffffff
  4258a2:	68 f8 28 62 00       	push   0x6228f8
  4258a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4258ad:	50                   	push   eax
  4258ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4258b5:	81 ec b4 00 00 00    	sub    esp,0xb4
  4258bb:	53                   	push   ebx
  4258bc:	55                   	push   ebp
  4258bd:	8b ac 24 d0 00 00 00 	mov    ebp,DWORD PTR [esp+0xd0]
  4258c4:	56                   	push   esi
  4258c5:	57                   	push   edi
  4258c6:	8d 44 24 48          	lea    eax,[esp+0x48]
  4258ca:	55                   	push   ebp
  4258cb:	50                   	push   eax
  4258cc:	e8 ef fa ff ff       	call   0x4253c0
  4258d1:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4258d5:	c7 84 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],0x0
  4258dc:	00 00 00 00 
  4258e0:	51                   	push   ecx
  4258e1:	e8 8a fc ff ff       	call   0x425570
  4258e6:	83 c4 0c             	add    esp,0xc
  4258e9:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4258ed:	bb 01 00 00 00       	mov    ebx,0x1
  4258f2:	6a 00                	push   0x0
  4258f4:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4258f8:	88 9c 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],bl
  4258ff:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  425903:	e8 98 e7 fd ff       	call   0x4040a0
  425908:	bf 04 fb 68 00       	mov    edi,0x68fb04
  42590d:	83 c9 ff             	or     ecx,0xffffffff
  425910:	33 c0                	xor    eax,eax
  425912:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  425914:	f7 d1                	not    ecx
  425916:	49                   	dec    ecx
  425917:	51                   	push   ecx
  425918:	68 04 fb 68 00       	push   0x68fb04
  42591d:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  425921:	e8 ca e7 fd ff       	call   0x4040f0
  425926:	8d 44 24 48          	lea    eax,[esp+0x48]
  42592a:	6a 00                	push   0x0
  42592c:	50                   	push   eax
  42592d:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  425931:	68 fa 00 00 00       	push   0xfa
  425936:	8d 54 24 20          	lea    edx,[esp+0x20]
  42593a:	51                   	push   ecx
  42593b:	52                   	push   edx
  42593c:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  425940:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x2
  425947:	02 
  425948:	e8 83 70 18 00       	call   0x5ac9d0
  42594d:	8b f0                	mov    esi,eax
  42594f:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  425952:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  425958:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x3
  42595f:	03 
  425960:	df e0                	fnstsw ax
  425962:	f6 c4 40             	test   ah,0x40
  425965:	74 1a                	je     0x425981
  425967:	8d 44 24 13          	lea    eax,[esp+0x13]
  42596b:	8d 4e 14             	lea    ecx,[esi+0x14]
  42596e:	50                   	push   eax
  42596f:	51                   	push   ecx
  425970:	e8 1b 7a 18 00       	call   0x5ad390
  425975:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  425978:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  42597c:	83 c4 08             	add    esp,0x8
  42597f:	eb 07                	jmp    0x425988
  425981:	8b 56 60             	mov    edx,DWORD PTR [esi+0x60]
  425984:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  425988:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  42598c:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x2
  425993:	02 
  425994:	e8 07 73 18 00       	call   0x5acca0
  425999:	53                   	push   ebx
  42599a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42599e:	88 9c 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],bl
  4259a5:	e8 f6 e6 fd ff       	call   0x4040a0
  4259aa:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4259ae:	6a 00                	push   0x0
  4259b0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4259b4:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4259b8:	e8 e3 e6 fd ff       	call   0x4040a0
  4259bd:	bf f8 fa 68 00       	mov    edi,0x68faf8
  4259c2:	83 c9 ff             	or     ecx,0xffffffff
  4259c5:	33 c0                	xor    eax,eax
  4259c7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4259c9:	f7 d1                	not    ecx
  4259cb:	49                   	dec    ecx
  4259cc:	51                   	push   ecx
  4259cd:	68 f8 fa 68 00       	push   0x68faf8
  4259d2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4259d6:	e8 15 e7 fd ff       	call   0x4040f0
  4259db:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4259df:	6a 00                	push   0x0
  4259e1:	51                   	push   ecx
  4259e2:	8d 54 24 40          	lea    edx,[esp+0x40]
  4259e6:	6a 32                	push   0x32
  4259e8:	8d 44 24 20          	lea    eax,[esp+0x20]
  4259ec:	52                   	push   edx
  4259ed:	50                   	push   eax
  4259ee:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4259f2:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x4
  4259f9:	04 
  4259fa:	e8 d1 6f 18 00       	call   0x5ac9d0
  4259ff:	8b f0                	mov    esi,eax
  425a01:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  425a04:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  425a0a:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x5
  425a11:	05 
  425a12:	df e0                	fnstsw ax
  425a14:	f6 c4 40             	test   ah,0x40
  425a17:	74 1a                	je     0x425a33
  425a19:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  425a1d:	8d 56 14             	lea    edx,[esi+0x14]
  425a20:	51                   	push   ecx
  425a21:	52                   	push   edx
  425a22:	e8 69 79 18 00       	call   0x5ad390
  425a27:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  425a2a:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  425a2e:	83 c4 08             	add    esp,0x8
  425a31:	eb 07                	jmp    0x425a3a
  425a33:	8b 46 60             	mov    eax,DWORD PTR [esi+0x60]
  425a36:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  425a3a:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  425a3e:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x4
  425a45:	04 
  425a46:	e8 55 72 18 00       	call   0x5acca0
  425a4b:	53                   	push   ebx
  425a4c:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  425a50:	88 9c 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],bl
  425a57:	e8 44 e6 fd ff       	call   0x4040a0
  425a5c:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  425a60:	6a 00                	push   0x0
  425a62:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  425a66:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  425a6a:	e8 31 e6 fd ff       	call   0x4040a0
  425a6f:	bf fc f3 68 00       	mov    edi,0x68f3fc
  425a74:	83 c9 ff             	or     ecx,0xffffffff
  425a77:	33 c0                	xor    eax,eax
  425a79:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  425a7b:	f7 d1                	not    ecx
  425a7d:	49                   	dec    ecx
  425a7e:	51                   	push   ecx
  425a7f:	68 fc f3 68 00       	push   0x68f3fc
  425a84:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  425a88:	e8 63 e6 fd ff       	call   0x4040f0
  425a8d:	8d 54 24 48          	lea    edx,[esp+0x48]
  425a91:	6a 00                	push   0x0
  425a93:	52                   	push   edx
  425a94:	8d 44 24 40          	lea    eax,[esp+0x40]
  425a98:	6a 00                	push   0x0
  425a9a:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  425a9e:	50                   	push   eax
  425a9f:	51                   	push   ecx
  425aa0:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  425aa4:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x6
  425aab:	06 
  425aac:	e8 1f 6f 18 00       	call   0x5ac9d0
  425ab1:	8b f0                	mov    esi,eax
  425ab3:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  425ab6:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  425abc:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x7
  425ac3:	07 
  425ac4:	df e0                	fnstsw ax
  425ac6:	f6 c4 40             	test   ah,0x40
  425ac9:	74 1a                	je     0x425ae5
  425acb:	8d 54 24 13          	lea    edx,[esp+0x13]
  425acf:	8d 46 14             	lea    eax,[esi+0x14]
  425ad2:	52                   	push   edx
  425ad3:	50                   	push   eax
  425ad4:	e8 b7 78 18 00       	call   0x5ad390
  425ad9:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  425adc:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  425ae0:	83 c4 08             	add    esp,0x8
  425ae3:	eb 07                	jmp    0x425aec
  425ae5:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
  425ae8:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  425aec:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  425af0:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x6
  425af7:	06 
  425af8:	e8 a3 71 18 00       	call   0x5acca0
  425afd:	53                   	push   ebx
  425afe:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  425b02:	88 9c 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],bl
  425b09:	e8 92 e5 fd ff       	call   0x4040a0
  425b0e:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  425b12:	6a 00                	push   0x0
  425b14:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  425b18:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  425b1c:	e8 7f e5 fd ff       	call   0x4040a0
  425b21:	bf ec fa 68 00       	mov    edi,0x68faec
  425b26:	83 c9 ff             	or     ecx,0xffffffff
  425b29:	33 c0                	xor    eax,eax
  425b2b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  425b2d:	f7 d1                	not    ecx
  425b2f:	49                   	dec    ecx
  425b30:	51                   	push   ecx
  425b31:	68 ec fa 68 00       	push   0x68faec
  425b36:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  425b3a:	e8 b1 e5 fd ff       	call   0x4040f0
  425b3f:	8d 44 24 48          	lea    eax,[esp+0x48]
  425b43:	6a 00                	push   0x0
  425b45:	50                   	push   eax
  425b46:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  425b4a:	68 db 0f 49 40       	push   0x40490fdb
  425b4f:	8d 54 24 20          	lea    edx,[esp+0x20]
  425b53:	51                   	push   ecx
  425b54:	52                   	push   edx
  425b55:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  425b59:	c6 84 24 e0 00 00 00 	mov    BYTE PTR [esp+0xe0],0x8
  425b60:	08 
  425b61:	e8 4a 6d 18 00       	call   0x5ac8b0
  425b66:	8b f0                	mov    esi,eax
  425b68:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  425b6b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  425b71:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x9
  425b78:	09 
  425b79:	df e0                	fnstsw ax
  425b7b:	f6 c4 40             	test   ah,0x40
  425b7e:	74 1a                	je     0x425b9a
  425b80:	8d 44 24 13          	lea    eax,[esp+0x13]
  425b84:	8d 4e 14             	lea    ecx,[esi+0x14]
  425b87:	50                   	push   eax
  425b88:	51                   	push   ecx
  425b89:	e8 02 78 18 00       	call   0x5ad390
  425b8e:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  425b91:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  425b95:	83 c4 08             	add    esp,0x8
  425b98:	eb 07                	jmp    0x425ba1
  425b9a:	8b 56 60             	mov    edx,DWORD PTR [esi+0x60]
  425b9d:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  425ba1:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  425ba5:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x8
  425bac:	08 
  425bad:	e8 ee 70 18 00       	call   0x5acca0
  425bb2:	53                   	push   ebx
  425bb3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  425bb7:	88 9c 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],bl
  425bbe:	e8 dd e4 fd ff       	call   0x4040a0
  425bc3:	db 84 24 dc 00 00 00 	fild   DWORD PTR [esp+0xdc]
  425bca:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  425bce:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  425bd2:	d8 5c 24 34          	fcomp  DWORD PTR [esp+0x34]
  425bd6:	df e0                	fnstsw ax
  425bd8:	f6 c4 01             	test   ah,0x1
  425bdb:	0f 84 c8 00 00 00    	je     0x425ca9
  425be1:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  425be6:	33 f6                	xor    esi,esi
  425be8:	3b c6                	cmp    eax,esi
  425bea:	75 05                	jne    0x425bf1
  425bec:	e8 8f 68 09 00       	call   0x4bc480
  425bf1:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  425bf4:	3b c6                	cmp    eax,esi
  425bf6:	75 05                	jne    0x425bfd
  425bf8:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  425bfd:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  425c01:	83 ec 08             	sub    esp,0x8
  425c04:	dd 1c 24             	fstp   QWORD PTR [esp]
  425c07:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  425c0b:	83 ec 08             	sub    esp,0x8
  425c0e:	dd 1c 24             	fstp   QWORD PTR [esp]
  425c11:	50                   	push   eax
  425c12:	8d 44 24 28          	lea    eax,[esp+0x28]
  425c16:	68 b0 fa 68 00       	push   0x68fab0
  425c1b:	50                   	push   eax
  425c1c:	e8 6f 87 18 00       	call   0x5ae390
  425c21:	50                   	push   eax
  425c22:	c6 84 24 ec 00 00 00 	mov    BYTE PTR [esp+0xec],0xa
  425c29:	0a 
  425c2a:	e8 b1 e7 09 00       	call   0x4c43e0
  425c2f:	83 c4 20             	add    esp,0x20
  425c32:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  425c36:	88 9c 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],bl
  425c3d:	53                   	push   ebx
  425c3e:	e8 5d e4 fd ff       	call   0x4040a0
  425c43:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  425c47:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  425c4c:	dc c0                	fadd   st(0),st
  425c4e:	3b c6                	cmp    eax,esi
  425c50:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  425c54:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  425c58:	75 05                	jne    0x425c5f
  425c5a:	e8 21 68 09 00       	call   0x4bc480
  425c5f:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  425c62:	3b c6                	cmp    eax,esi
  425c64:	75 05                	jne    0x425c6b
  425c66:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  425c6b:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  425c6f:	83 ec 08             	sub    esp,0x8
  425c72:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  425c76:	dd 1c 24             	fstp   QWORD PTR [esp]
  425c79:	50                   	push   eax
  425c7a:	68 8c fa 68 00       	push   0x68fa8c
  425c7f:	51                   	push   ecx
  425c80:	e8 0b 87 18 00       	call   0x5ae390
  425c85:	50                   	push   eax
  425c86:	c6 84 24 e4 00 00 00 	mov    BYTE PTR [esp+0xe4],0xb
  425c8d:	0b 
  425c8e:	e8 4d e7 09 00       	call   0x4c43e0
  425c93:	83 c4 18             	add    esp,0x18
  425c96:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  425c9a:	88 9c 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],bl
  425ca1:	53                   	push   ebx
  425ca2:	e8 f9 e3 fd ff       	call   0x4040a0
  425ca7:	eb 02                	jmp    0x425cab
  425ca9:	33 f6                	xor    esi,esi
  425cab:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  425caf:	3b ce                	cmp    ecx,esi
  425cb1:	74 1c                	je     0x425ccf
  425cb3:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  425cb6:	84 c0                	test   al,al
  425cb8:	74 0b                	je     0x425cc5
  425cba:	3c ff                	cmp    al,0xff
  425cbc:	74 07                	je     0x425cc5
  425cbe:	fe c8                	dec    al
  425cc0:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  425cc3:	eb 0a                	jmp    0x425ccf
  425cc5:	49                   	dec    ecx
  425cc6:	51                   	push   ecx
  425cc7:	e8 24 89 1d 00       	call   0x5fe5f0
  425ccc:	83 c4 04             	add    esp,0x4
  425ccf:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  425cd3:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
  425cd7:	3b ce                	cmp    ecx,esi
  425cd9:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  425cdd:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
  425ce1:	74 1c                	je     0x425cff
  425ce3:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  425ce6:	84 c0                	test   al,al
  425ce8:	74 0b                	je     0x425cf5
  425cea:	3c ff                	cmp    al,0xff
  425cec:	74 07                	je     0x425cf5
  425cee:	fe c8                	dec    al
  425cf0:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  425cf3:	eb 0a                	jmp    0x425cff
  425cf5:	49                   	dec    ecx
  425cf6:	51                   	push   ecx
  425cf7:	e8 f4 88 1d 00       	call   0x5fe5f0
  425cfc:	83 c4 04             	add    esp,0x4
  425cff:	8b 84 24 d4 00 00 00 	mov    eax,DWORD PTR [esp+0xd4]
  425d06:	b9 05 00 00 00       	mov    ecx,0x5
  425d0b:	8d 74 24 24          	lea    esi,[esp+0x24]
  425d0f:	8b f8                	mov    edi,eax
  425d11:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  425d13:	8b 8c 24 c4 00 00 00 	mov    ecx,DWORD PTR [esp+0xc4]
  425d1a:	5f                   	pop    edi
  425d1b:	5e                   	pop    esi
  425d1c:	5d                   	pop    ebp
  425d1d:	5b                   	pop    ebx
  425d1e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  425d25:	81 c4 c0 00 00 00    	add    esp,0xc0
  425d2b:	c3                   	ret
  425d2c:	90                   	nop
  425d2d:	90                   	nop
  425d2e:	90                   	nop
  425d2f:	90                   	nop
