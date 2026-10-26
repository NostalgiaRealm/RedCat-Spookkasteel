
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0042b880 <.text+0x2a880>:
  42b880:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  42b886:	b0 01                	mov    al,0x1
  42b888:	84 c8                	test   al,cl
  42b88a:	75 08                	jne    0x42b894
  42b88c:	0a c8                	or     cl,al
  42b88e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  42b894:	e9 07 00 00 00       	jmp    0x42b8a0
  42b899:	90                   	nop
  42b89a:	90                   	nop
  42b89b:	90                   	nop
  42b89c:	90                   	nop
  42b89d:	90                   	nop
  42b89e:	90                   	nop
  42b89f:	90                   	nop
  42b8a0:	68 a0 1b 40 00       	push   0x401ba0
  42b8a5:	e8 d1 ec 1d 00       	call   0x60a57b
  42b8aa:	59                   	pop    ecx
  42b8ab:	c3                   	ret
  42b8ac:	90                   	nop
  42b8ad:	90                   	nop
  42b8ae:	90                   	nop
  42b8af:	90                   	nop
  42b8b0:	6a ff                	push   0xffffffff
  42b8b2:	68 22 32 62 00       	push   0x623222
  42b8b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42b8bd:	50                   	push   eax
  42b8be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42b8c5:	81 ec a4 00 00 00    	sub    esp,0xa4
  42b8cb:	8b 84 24 bc 00 00 00 	mov    eax,DWORD PTR [esp+0xbc]
  42b8d2:	8b 94 24 b4 00 00 00 	mov    edx,DWORD PTR [esp+0xb4]
  42b8d9:	53                   	push   ebx
  42b8da:	55                   	push   ebp
  42b8db:	56                   	push   esi
  42b8dc:	8b b4 24 cc 00 00 00 	mov    esi,DWORD PTR [esp+0xcc]
  42b8e3:	8b e9                	mov    ebp,ecx
  42b8e5:	57                   	push   edi
  42b8e6:	8b 8c 24 c8 00 00 00 	mov    ecx,DWORD PTR [esp+0xc8]
  42b8ed:	56                   	push   esi
  42b8ee:	50                   	push   eax
  42b8ef:	51                   	push   ecx
  42b8f0:	52                   	push   edx
  42b8f1:	8b cd                	mov    ecx,ebp
  42b8f3:	89 6c 24 54          	mov    DWORD PTR [esp+0x54],ebp
  42b8f7:	e8 04 ee ff ff       	call   0x42a700
  42b8fc:	56                   	push   esi
  42b8fd:	8d 8d f4 01 00 00    	lea    ecx,[ebp+0x1f4]
  42b903:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x0
  42b90a:	00 00 00 00 
  42b90e:	c7 85 f0 01 00 00 ff 	mov    DWORD PTR [ebp+0x1f0],0xffffffff
  42b915:	ff ff ff 
  42b918:	e8 e3 b4 ff ff       	call   0x426e00
  42b91d:	8d 44 24 34          	lea    eax,[esp+0x34]
  42b921:	56                   	push   esi
  42b922:	50                   	push   eax
  42b923:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x1
  42b92a:	01 
  42b92b:	c7 45 00 a4 c1 64 00 	mov    DWORD PTR [ebp+0x0],0x64c1a4
  42b932:	e8 89 9a ff ff       	call   0x4253c0
  42b937:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  42b93b:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x2
  42b942:	02 
  42b943:	51                   	push   ecx
  42b944:	e8 27 9c ff ff       	call   0x425570
  42b949:	83 c4 0c             	add    esp,0xc
  42b94c:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  42b950:	6a 00                	push   0x0
  42b952:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42b956:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x3
  42b95d:	03 
  42b95e:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  42b962:	e8 39 87 fd ff       	call   0x4040a0
  42b967:	bf 0c 00 69 00       	mov    edi,0x69000c
  42b96c:	83 c9 ff             	or     ecx,0xffffffff
  42b96f:	33 c0                	xor    eax,eax
  42b971:	6a 01                	push   0x1
  42b973:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42b975:	f7 d1                	not    ecx
  42b977:	49                   	dec    ecx
  42b978:	8b d9                	mov    ebx,ecx
  42b97a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42b97e:	53                   	push   ebx
  42b97f:	e8 bc 5f fd ff       	call   0x401940
  42b984:	84 c0                	test   al,al
  42b986:	74 25                	je     0x42b9ad
  42b988:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  42b98c:	8b cb                	mov    ecx,ebx
  42b98e:	8b c1                	mov    eax,ecx
  42b990:	be 0c 00 69 00       	mov    esi,0x69000c
  42b995:	c1 e9 02             	shr    ecx,0x2
  42b998:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42b99a:	8b c8                	mov    ecx,eax
  42b99c:	83 e1 03             	and    ecx,0x3
  42b99f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42b9a1:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  42b9a5:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  42b9a9:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  42b9ad:	8d 54 24 34          	lea    edx,[esp+0x34]
  42b9b1:	6a 00                	push   0x0
  42b9b3:	52                   	push   edx
  42b9b4:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  42b9b8:	68 cd cc cc 3e       	push   0x3ecccccd
  42b9bd:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42b9c1:	50                   	push   eax
  42b9c2:	b3 04                	mov    bl,0x4
  42b9c4:	51                   	push   ecx
  42b9c5:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  42b9c9:	88 9c 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],bl
  42b9d0:	e8 db 0e 18 00       	call   0x5ac8b0
  42b9d5:	8b f0                	mov    esi,eax
  42b9d7:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  42b9da:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  42b9e0:	c6 84 24 bc 00 00 00 	mov    BYTE PTR [esp+0xbc],0x5
  42b9e7:	05 
  42b9e8:	df e0                	fnstsw ax
  42b9ea:	f6 c4 40             	test   ah,0x40
  42b9ed:	74 16                	je     0x42ba05
  42b9ef:	8d 54 24 13          	lea    edx,[esp+0x13]
  42b9f3:	8d 46 14             	lea    eax,[esi+0x14]
  42b9f6:	52                   	push   edx
  42b9f7:	50                   	push   eax
  42b9f8:	e8 93 19 18 00       	call   0x5ad390
  42b9fd:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  42ba00:	83 c4 08             	add    esp,0x8
  42ba03:	eb 03                	jmp    0x42ba08
  42ba05:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  42ba08:	d9 9d 1c 02 00 00    	fstp   DWORD PTR [ebp+0x21c]
  42ba0e:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  42ba12:	88 9c 24 bc 00 00 00 	mov    BYTE PTR [esp+0xbc],bl
  42ba19:	e8 82 12 18 00       	call   0x5acca0
  42ba1e:	6a 01                	push   0x1
  42ba20:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42ba24:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x3
  42ba2b:	03 
  42ba2c:	e8 6f 86 fd ff       	call   0x4040a0
  42ba31:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  42ba35:	6a 00                	push   0x0
  42ba37:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  42ba3b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42ba3f:	e8 5c 86 fd ff       	call   0x4040a0
  42ba44:	bf f4 ff 68 00       	mov    edi,0x68fff4
  42ba49:	83 c9 ff             	or     ecx,0xffffffff
  42ba4c:	33 c0                	xor    eax,eax
  42ba4e:	6a 01                	push   0x1
  42ba50:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42ba52:	f7 d1                	not    ecx
  42ba54:	49                   	dec    ecx
  42ba55:	8b d9                	mov    ebx,ecx
  42ba57:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42ba5b:	53                   	push   ebx
  42ba5c:	e8 df 5e fd ff       	call   0x401940
  42ba61:	84 c0                	test   al,al
  42ba63:	74 25                	je     0x42ba8a
  42ba65:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  42ba69:	8b cb                	mov    ecx,ebx
  42ba6b:	8b d1                	mov    edx,ecx
  42ba6d:	be f4 ff 68 00       	mov    esi,0x68fff4
  42ba72:	c1 e9 02             	shr    ecx,0x2
  42ba75:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ba77:	8b ca                	mov    ecx,edx
  42ba79:	83 e1 03             	and    ecx,0x3
  42ba7c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ba7e:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42ba82:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  42ba86:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42ba8a:	33 ff                	xor    edi,edi
  42ba8c:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  42ba90:	57                   	push   edi
  42ba91:	51                   	push   ecx
  42ba92:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  42ba96:	68 9a 99 19 3f       	push   0x3f19999a
  42ba9b:	8d 44 24 20          	lea    eax,[esp+0x20]
  42ba9f:	b3 06                	mov    bl,0x6
  42baa1:	52                   	push   edx
  42baa2:	50                   	push   eax
  42baa3:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  42baa7:	88 9c 24 d0 00 00 00 	mov    BYTE PTR [esp+0xd0],bl
  42baae:	e8 fd 0d 18 00       	call   0x5ac8b0
  42bab3:	8b f0                	mov    esi,eax
  42bab5:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  42bab8:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  42babe:	c6 84 24 bc 00 00 00 	mov    BYTE PTR [esp+0xbc],0x7
  42bac5:	07 
  42bac6:	df e0                	fnstsw ax
  42bac8:	f6 c4 40             	test   ah,0x40
  42bacb:	74 16                	je     0x42bae3
  42bacd:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  42bad1:	8d 56 14             	lea    edx,[esi+0x14]
  42bad4:	51                   	push   ecx
  42bad5:	52                   	push   edx
  42bad6:	e8 b5 18 18 00       	call   0x5ad390
  42badb:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  42bade:	83 c4 08             	add    esp,0x8
  42bae1:	eb 03                	jmp    0x42bae6
  42bae3:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  42bae6:	d9 9d 20 02 00 00    	fstp   DWORD PTR [ebp+0x220]
  42baec:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  42baf0:	88 9c 24 bc 00 00 00 	mov    BYTE PTR [esp+0xbc],bl
  42baf7:	e8 a4 11 18 00       	call   0x5acca0
  42bafc:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42bb00:	3b c7                	cmp    eax,edi
  42bb02:	74 1d                	je     0x42bb21
  42bb04:	8d 48 ff             	lea    ecx,[eax-0x1]
  42bb07:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42bb0a:	84 c0                	test   al,al
  42bb0c:	74 0a                	je     0x42bb18
  42bb0e:	3c ff                	cmp    al,0xff
  42bb10:	74 06                	je     0x42bb18
  42bb12:	fe c8                	dec    al
  42bb14:	88 01                	mov    BYTE PTR [ecx],al
  42bb16:	eb 09                	jmp    0x42bb21
  42bb18:	51                   	push   ecx
  42bb19:	e8 d2 2a 1d 00       	call   0x5fe5f0
  42bb1e:	83 c4 04             	add    esp,0x4
  42bb21:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  42bb25:	3b cf                	cmp    ecx,edi
  42bb27:	74 1c                	je     0x42bb45
  42bb29:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42bb2c:	84 c0                	test   al,al
  42bb2e:	74 0b                	je     0x42bb3b
  42bb30:	3c ff                	cmp    al,0xff
  42bb32:	74 07                	je     0x42bb3b
  42bb34:	fe c8                	dec    al
  42bb36:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42bb39:	eb 0a                	jmp    0x42bb45
  42bb3b:	49                   	dec    ecx
  42bb3c:	51                   	push   ecx
  42bb3d:	e8 ae 2a 1d 00       	call   0x5fe5f0
  42bb42:	83 c4 04             	add    esp,0x4
  42bb45:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  42bb49:	89 7c 24 28          	mov    DWORD PTR [esp+0x28],edi
  42bb4d:	3b cf                	cmp    ecx,edi
  42bb4f:	89 7c 24 2c          	mov    DWORD PTR [esp+0x2c],edi
  42bb53:	89 7c 24 30          	mov    DWORD PTR [esp+0x30],edi
  42bb57:	74 1c                	je     0x42bb75
  42bb59:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42bb5c:	84 c0                	test   al,al
  42bb5e:	74 0b                	je     0x42bb6b
  42bb60:	3c ff                	cmp    al,0xff
  42bb62:	74 07                	je     0x42bb6b
  42bb64:	fe c8                	dec    al
  42bb66:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42bb69:	eb 0a                	jmp    0x42bb75
  42bb6b:	49                   	dec    ecx
  42bb6c:	51                   	push   ecx
  42bb6d:	e8 7e 2a 1d 00       	call   0x5fe5f0
  42bb72:	83 c4 04             	add    esp,0x4
  42bb75:	8b 8c 24 b4 00 00 00 	mov    ecx,DWORD PTR [esp+0xb4]
  42bb7c:	5f                   	pop    edi
  42bb7d:	8b c5                	mov    eax,ebp
  42bb7f:	5e                   	pop    esi
  42bb80:	5d                   	pop    ebp
  42bb81:	5b                   	pop    ebx
  42bb82:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42bb89:	81 c4 b0 00 00 00    	add    esp,0xb0
  42bb8f:	c2 10 00             	ret    0x10
  42bb92:	90                   	nop
  42bb93:	90                   	nop
  42bb94:	90                   	nop
  42bb95:	90                   	nop
  42bb96:	90                   	nop
  42bb97:	90                   	nop
  42bb98:	90                   	nop
  42bb99:	90                   	nop
  42bb9a:	90                   	nop
  42bb9b:	90                   	nop
  42bb9c:	90                   	nop
  42bb9d:	90                   	nop
  42bb9e:	90                   	nop
  42bb9f:	90                   	nop
  42bba0:	56                   	push   esi
  42bba1:	8b f1                	mov    esi,ecx
  42bba3:	e8 18 00 00 00       	call   0x42bbc0
  42bba8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  42bbad:	74 09                	je     0x42bbb8
  42bbaf:	56                   	push   esi
  42bbb0:	e8 3b 2a 1d 00       	call   0x5fe5f0
  42bbb5:	83 c4 04             	add    esp,0x4
  42bbb8:	8b c6                	mov    eax,esi
  42bbba:	5e                   	pop    esi
  42bbbb:	c2 04 00             	ret    0x4
  42bbbe:	90                   	nop
  42bbbf:	90                   	nop
  42bbc0:	6a ff                	push   0xffffffff
  42bbc2:	68 4e 32 62 00       	push   0x62324e
  42bbc7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42bbcd:	50                   	push   eax
  42bbce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42bbd5:	51                   	push   ecx
  42bbd6:	53                   	push   ebx
  42bbd7:	56                   	push   esi
  42bbd8:	57                   	push   edi
  42bbd9:	8b f9                	mov    edi,ecx
  42bbdb:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
  42bbdf:	8b 87 0c 02 00 00    	mov    eax,DWORD PTR [edi+0x20c]
  42bbe5:	8d b7 f4 01 00 00    	lea    esi,[edi+0x1f4]
  42bbeb:	33 db                	xor    ebx,ebx
  42bbed:	3b c3                	cmp    eax,ebx
  42bbef:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  42bbf3:	74 1d                	je     0x42bc12
  42bbf5:	8d 48 ff             	lea    ecx,[eax-0x1]
  42bbf8:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42bbfb:	3a c3                	cmp    al,bl
  42bbfd:	74 0a                	je     0x42bc09
  42bbff:	3c ff                	cmp    al,0xff
  42bc01:	74 06                	je     0x42bc09
  42bc03:	fe c8                	dec    al
  42bc05:	88 01                	mov    BYTE PTR [ecx],al
  42bc07:	eb 09                	jmp    0x42bc12
  42bc09:	51                   	push   ecx
  42bc0a:	e8 e1 29 1d 00       	call   0x5fe5f0
  42bc0f:	83 c4 04             	add    esp,0x4
  42bc12:	8b ce                	mov    ecx,esi
  42bc14:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
  42bc17:	89 5e 1c             	mov    DWORD PTR [esi+0x1c],ebx
  42bc1a:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
  42bc1d:	e8 ae f8 17 00       	call   0x5ab4d0
  42bc22:	8b 87 d8 01 00 00    	mov    eax,DWORD PTR [edi+0x1d8]
  42bc28:	8d b7 c0 01 00 00    	lea    esi,[edi+0x1c0]
  42bc2e:	3b c3                	cmp    eax,ebx
  42bc30:	c7 44 24 18 02 00 00 	mov    DWORD PTR [esp+0x18],0x2
  42bc37:	00 
  42bc38:	74 1d                	je     0x42bc57
  42bc3a:	8d 48 ff             	lea    ecx,[eax-0x1]
  42bc3d:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42bc40:	3a c3                	cmp    al,bl
  42bc42:	74 0a                	je     0x42bc4e
  42bc44:	3c ff                	cmp    al,0xff
  42bc46:	74 06                	je     0x42bc4e
  42bc48:	fe c8                	dec    al
  42bc4a:	88 01                	mov    BYTE PTR [ecx],al
  42bc4c:	eb 09                	jmp    0x42bc57
  42bc4e:	51                   	push   ecx
  42bc4f:	e8 9c 29 1d 00       	call   0x5fe5f0
  42bc54:	83 c4 04             	add    esp,0x4
  42bc57:	8b ce                	mov    ecx,esi
  42bc59:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
  42bc5c:	89 5e 1c             	mov    DWORD PTR [esi+0x1c],ebx
  42bc5f:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
  42bc62:	e8 69 f8 17 00       	call   0x5ab4d0
  42bc67:	8b 87 9c 01 00 00    	mov    eax,DWORD PTR [edi+0x19c]
  42bc6d:	8d b7 84 01 00 00    	lea    esi,[edi+0x184]
  42bc73:	3b c3                	cmp    eax,ebx
  42bc75:	c6 44 24 18 01       	mov    BYTE PTR [esp+0x18],0x1
  42bc7a:	74 1d                	je     0x42bc99
  42bc7c:	8d 48 ff             	lea    ecx,[eax-0x1]
  42bc7f:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42bc82:	3a c3                	cmp    al,bl
  42bc84:	74 0a                	je     0x42bc90
  42bc86:	3c ff                	cmp    al,0xff
  42bc88:	74 06                	je     0x42bc90
  42bc8a:	fe c8                	dec    al
  42bc8c:	88 01                	mov    BYTE PTR [ecx],al
  42bc8e:	eb 09                	jmp    0x42bc99
  42bc90:	51                   	push   ecx
  42bc91:	e8 5a 29 1d 00       	call   0x5fe5f0
  42bc96:	83 c4 04             	add    esp,0x4
  42bc99:	8b ce                	mov    ecx,esi
  42bc9b:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
  42bc9e:	89 5e 1c             	mov    DWORD PTR [esi+0x1c],ebx
  42bca1:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
  42bca4:	e8 27 f8 17 00       	call   0x5ab4d0
  42bca9:	8b cf                	mov    ecx,edi
  42bcab:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  42bcb2:	ff 
  42bcb3:	e8 18 6c ff ff       	call   0x4228d0
  42bcb8:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  42bcbc:	5f                   	pop    edi
  42bcbd:	5e                   	pop    esi
  42bcbe:	5b                   	pop    ebx
  42bcbf:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42bcc6:	83 c4 10             	add    esp,0x10
  42bcc9:	c3                   	ret
  42bcca:	90                   	nop
  42bccb:	90                   	nop
  42bccc:	90                   	nop
  42bccd:	90                   	nop
  42bcce:	90                   	nop
  42bccf:	90                   	nop
  42bcd0:	d9 81 1c 02 00 00    	fld    DWORD PTR [ecx+0x21c]
  42bcd6:	c3                   	ret
  42bcd7:	90                   	nop
  42bcd8:	90                   	nop
  42bcd9:	90                   	nop
  42bcda:	90                   	nop
  42bcdb:	90                   	nop
  42bcdc:	90                   	nop
  42bcdd:	90                   	nop
  42bcde:	90                   	nop
  42bcdf:	90                   	nop
  42bce0:	d9 81 20 02 00 00    	fld    DWORD PTR [ecx+0x220]
  42bce6:	c3                   	ret
  42bce7:	90                   	nop
  42bce8:	90                   	nop
  42bce9:	90                   	nop
  42bcea:	90                   	nop
  42bceb:	90                   	nop
  42bcec:	90                   	nop
  42bced:	90                   	nop
  42bcee:	90                   	nop
  42bcef:	90                   	nop
  42bcf0:	8d 81 f4 01 00 00    	lea    eax,[ecx+0x1f4]
  42bcf6:	c3                   	ret
  42bcf7:	90                   	nop
  42bcf8:	90                   	nop
  42bcf9:	90                   	nop
  42bcfa:	90                   	nop
  42bcfb:	90                   	nop
  42bcfc:	90                   	nop
  42bcfd:	90                   	nop
  42bcfe:	90                   	nop
  42bcff:	90                   	nop
  42bd00:	6a ff                	push   0xffffffff
  42bd02:	68 97 32 62 00       	push   0x623297
  42bd07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42bd0d:	50                   	push   eax
  42bd0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42bd15:	81 ec e0 00 00 00    	sub    esp,0xe0
  42bd1b:	53                   	push   ebx
  42bd1c:	56                   	push   esi
  42bd1d:	8d 44 24 0c          	lea    eax,[esp+0xc]
  42bd21:	57                   	push   edi
  42bd22:	8b f1                	mov    esi,ecx
  42bd24:	50                   	push   eax
  42bd25:	e8 a6 7a ff ff       	call   0x4237d0
  42bd2a:	8b 10                	mov    edx,DWORD PTR [eax]
  42bd2c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  42bd30:	33 db                	xor    ebx,ebx
  42bd32:	3b d3                	cmp    edx,ebx
  42bd34:	0f 94 44 24 0f       	sete   BYTE PTR [esp+0xf]
  42bd39:	3b c3                	cmp    eax,ebx
  42bd3b:	74 17                	je     0x42bd54
  42bd3d:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  42bd40:	8b c8                	mov    ecx,eax
  42bd42:	83 c0 14             	add    eax,0x14
  42bd45:	4f                   	dec    edi
  42bd46:	8b d7                	mov    edx,edi
  42bd48:	3b d3                	cmp    edx,ebx
  42bd4a:	89 38                	mov    DWORD PTR [eax],edi
  42bd4c:	75 06                	jne    0x42bd54
  42bd4e:	53                   	push   ebx
  42bd4f:	e8 6c 02 18 00       	call   0x5abfc0
  42bd54:	38 5c 24 0f          	cmp    BYTE PTR [esp+0xf],bl
  42bd58:	0f 85 ec 01 00 00    	jne    0x42bf4a
  42bd5e:	51                   	push   ecx
  42bd5f:	8b cc                	mov    ecx,esp
  42bd61:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  42bd65:	51                   	push   ecx
  42bd66:	8b ce                	mov    ecx,esi
  42bd68:	e8 63 7a ff ff       	call   0x4237d0
  42bd6d:	e8 7e 85 fe ff       	call   0x4142f0
  42bd72:	8b f8                	mov    edi,eax
  42bd74:	83 c4 04             	add    esp,0x4
  42bd77:	3b fb                	cmp    edi,ebx
  42bd79:	0f 84 cb 01 00 00    	je     0x42bf4a
  42bd7f:	51                   	push   ecx
  42bd80:	8b ce                	mov    ecx,esi
  42bd82:	8b d4                	mov    edx,esp
  42bd84:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  42bd88:	52                   	push   edx
  42bd89:	e8 52 85 fd ff       	call   0x4042e0
  42bd8e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42bd92:	e8 99 9e 13 00       	call   0x565c30
  42bd97:	8b 06                	mov    eax,DWORD PTR [esi]
  42bd99:	8b ce                	mov    ecx,esi
  42bd9b:	89 9c 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],ebx
  42bda2:	c6 44 24 29 01       	mov    BYTE PTR [esp+0x29],0x1
  42bda7:	c6 44 24 2a 01       	mov    BYTE PTR [esp+0x2a],0x1
  42bdac:	88 5c 24 2b          	mov    BYTE PTR [esp+0x2b],bl
  42bdb0:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  42bdb5:	88 5c 24 2d          	mov    BYTE PTR [esp+0x2d],bl
  42bdb9:	c6 44 24 28 01       	mov    BYTE PTR [esp+0x28],0x1
  42bdbe:	88 5c 24 2e          	mov    BYTE PTR [esp+0x2e],bl
  42bdc2:	c7 44 24 30 08 00 00 	mov    DWORD PTR [esp+0x30],0x8
  42bdc9:	00 
  42bdca:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
  42bdd0:	50                   	push   eax
  42bdd1:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42bdd5:	e8 f6 a5 13 00       	call   0x5663d0
  42bdda:	8b 8c 24 00 01 00 00 	mov    ecx,DWORD PTR [esp+0x100]
  42bde1:	8b 94 24 fc 00 00 00 	mov    edx,DWORD PTR [esp+0xfc]
  42bde8:	51                   	push   ecx
  42bde9:	52                   	push   edx
  42bdea:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42bdee:	e8 1d a0 13 00       	call   0x565e10
  42bdf3:	84 c0                	test   al,al
  42bdf5:	0f 84 b9 00 00 00    	je     0x42beb4
  42bdfb:	53                   	push   ebx
  42bdfc:	56                   	push   esi
  42bdfd:	8b ce                	mov    ecx,esi
  42bdff:	e8 ec fe ff ff       	call   0x42bcf0
  42be04:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
  42be07:	8b cf                	mov    ecx,edi
  42be09:	50                   	push   eax
  42be0a:	e8 b1 81 0d 00       	call   0x503fc0
  42be0f:	8b 8c 24 e0 00 00 00 	mov    ecx,DWORD PTR [esp+0xe0]
  42be16:	c7 84 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],0x2
  42be1d:	02 00 00 00 
  42be21:	51                   	push   ecx
  42be22:	e8 c9 27 1d 00       	call   0x5fe5f0
  42be27:	8b 94 24 d8 00 00 00 	mov    edx,DWORD PTR [esp+0xd8]
  42be2e:	8b 84 24 d4 00 00 00 	mov    eax,DWORD PTR [esp+0xd4]
  42be35:	83 c4 04             	add    esp,0x4
  42be38:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  42be3f:	89 9c 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],ebx
  42be46:	89 9c 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],ebx
  42be4d:	52                   	push   edx
  42be4e:	50                   	push   eax
  42be4f:	89 9c 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],ebx
  42be56:	e8 f5 be 15 00       	call   0x587d50
  42be5b:	8b 8c 24 d0 00 00 00 	mov    ecx,DWORD PTR [esp+0xd0]
  42be62:	51                   	push   ecx
  42be63:	e8 88 27 1d 00       	call   0x5fe5f0
  42be68:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  42be6c:	83 c4 04             	add    esp,0x4
  42be6f:	3b cb                	cmp    ecx,ebx
  42be71:	89 9c 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],ebx
  42be78:	89 9c 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],ebx
  42be7f:	89 9c 24 d8 00 00 00 	mov    DWORD PTR [esp+0xd8],ebx
  42be86:	c6 84 24 f4 00 00 00 	mov    BYTE PTR [esp+0xf4],0x1
  42be8d:	01 
  42be8e:	74 09                	je     0x42be99
  42be90:	e8 3b da fd ff       	call   0x4098d0
  42be95:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  42be99:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42be9d:	c7 84 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],0xffffffff
  42bea4:	ff ff ff ff 
  42bea8:	e8 23 f6 17 00       	call   0x5ab4d0
  42bead:	b0 01                	mov    al,0x1
  42beaf:	e9 98 00 00 00       	jmp    0x42bf4c
  42beb4:	8b 94 24 e0 00 00 00 	mov    edx,DWORD PTR [esp+0xe0]
  42bebb:	c7 84 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],0x4
  42bec2:	04 00 00 00 
  42bec6:	52                   	push   edx
  42bec7:	e8 24 27 1d 00       	call   0x5fe5f0
  42becc:	8b 84 24 d8 00 00 00 	mov    eax,DWORD PTR [esp+0xd8]
  42bed3:	8b 8c 24 d4 00 00 00 	mov    ecx,DWORD PTR [esp+0xd4]
  42beda:	83 c4 04             	add    esp,0x4
  42bedd:	89 9c 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],ebx
  42bee4:	89 9c 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],ebx
  42beeb:	89 9c 24 e8 00 00 00 	mov    DWORD PTR [esp+0xe8],ebx
  42bef2:	50                   	push   eax
  42bef3:	51                   	push   ecx
  42bef4:	8d 8c 24 d4 00 00 00 	lea    ecx,[esp+0xd4]
  42befb:	e8 50 be 15 00       	call   0x587d50
  42bf00:	8b 94 24 d0 00 00 00 	mov    edx,DWORD PTR [esp+0xd0]
  42bf07:	52                   	push   edx
  42bf08:	e8 e3 26 1d 00       	call   0x5fe5f0
  42bf0d:	83 c4 04             	add    esp,0x4
  42bf10:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  42bf14:	89 9c 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],ebx
  42bf1b:	89 9c 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],ebx
  42bf22:	89 9c 24 d8 00 00 00 	mov    DWORD PTR [esp+0xd8],ebx
  42bf29:	c6 84 24 f4 00 00 00 	mov    BYTE PTR [esp+0xf4],0x3
  42bf30:	03 
  42bf31:	e8 da 13 15 00       	call   0x57d310
  42bf36:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42bf3a:	c7 84 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],0xffffffff
  42bf41:	ff ff ff ff 
  42bf45:	e8 86 f5 17 00       	call   0x5ab4d0
  42bf4a:	32 c0                	xor    al,al
  42bf4c:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  42bf53:	5f                   	pop    edi
  42bf54:	5e                   	pop    esi
  42bf55:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42bf5c:	5b                   	pop    ebx
  42bf5d:	81 c4 ec 00 00 00    	add    esp,0xec
  42bf63:	c2 08 00             	ret    0x8
  42bf66:	90                   	nop
  42bf67:	90                   	nop
  42bf68:	90                   	nop
  42bf69:	90                   	nop
  42bf6a:	90                   	nop
  42bf6b:	90                   	nop
  42bf6c:	90                   	nop
  42bf6d:	90                   	nop
  42bf6e:	90                   	nop
  42bf6f:	90                   	nop
  42bf70:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  42bf76:	b0 01                	mov    al,0x1
  42bf78:	84 c8                	test   al,cl
  42bf7a:	75 08                	jne    0x42bf84
  42bf7c:	0a c8                	or     cl,al
  42bf7e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  42bf84:	e9 07 00 00 00       	jmp    0x42bf90
  42bf89:	90                   	nop
  42bf8a:	90                   	nop
  42bf8b:	90                   	nop
  42bf8c:	90                   	nop
  42bf8d:	90                   	nop
  42bf8e:	90                   	nop
  42bf8f:	90                   	nop
  42bf90:	68 a0 1b 40 00       	push   0x401ba0
  42bf95:	e8 e1 e5 1d 00       	call   0x60a57b
  42bf9a:	59                   	pop    ecx
  42bf9b:	c3                   	ret
  42bf9c:	90                   	nop
  42bf9d:	90                   	nop
  42bf9e:	90                   	nop
  42bf9f:	90                   	nop
  42bfa0:	8b c1                	mov    eax,ecx
  42bfa2:	33 c9                	xor    ecx,ecx
  42bfa4:	c6 00 01             	mov    BYTE PTR [eax],0x1
  42bfa7:	c7 40 04 ff ff ff ff 	mov    DWORD PTR [eax+0x4],0xffffffff
  42bfae:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  42bfb1:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
  42bfb4:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
  42bfb7:	c3                   	ret
  42bfb8:	90                   	nop
  42bfb9:	90                   	nop
  42bfba:	90                   	nop
  42bfbb:	90                   	nop
  42bfbc:	90                   	nop
  42bfbd:	90                   	nop
  42bfbe:	90                   	nop
  42bfbf:	90                   	nop
  42bfc0:	6a ff                	push   0xffffffff
  42bfc2:	68 b8 32 62 00       	push   0x6232b8
  42bfc7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42bfcd:	50                   	push   eax
  42bfce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42bfd5:	83 ec 1c             	sub    esp,0x1c
  42bfd8:	8b 41 24             	mov    eax,DWORD PTR [ecx+0x24]
  42bfdb:	53                   	push   ebx
  42bfdc:	56                   	push   esi
  42bfdd:	33 db                	xor    ebx,ebx
  42bfdf:	8b 30                	mov    esi,DWORD PTR [eax]
  42bfe1:	32 d2                	xor    dl,dl
  42bfe3:	3b f0                	cmp    esi,eax
  42bfe5:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  42bfe9:	88 54 24 0b          	mov    BYTE PTR [esp+0xb],dl
  42bfed:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  42bff1:	0f 84 06 01 00 00    	je     0x42c0fd
  42bff7:	55                   	push   ebp
  42bff8:	57                   	push   edi
  42bff9:	eb 04                	jmp    0x42bfff
  42bffb:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  42bfff:	39 5e 08             	cmp    DWORD PTR [esi+0x8],ebx
  42c002:	0f 85 b9 00 00 00    	jne    0x42c0c1
  42c008:	8a 44 24 3c          	mov    al,BYTE PTR [esp+0x3c]
  42c00c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42c011:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  42c015:	83 c9 ff             	or     ecx,0xffffffff
  42c018:	33 c0                	xor    eax,eax
  42c01a:	6a 01                	push   0x1
  42c01c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42c01e:	f7 d1                	not    ecx
  42c020:	49                   	dec    ecx
  42c021:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  42c025:	8b e9                	mov    ebp,ecx
  42c027:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c02b:	55                   	push   ebp
  42c02c:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42c030:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  42c034:	e8 07 59 fd ff       	call   0x401940
  42c039:	84 c0                	test   al,al
  42c03b:	74 28                	je     0x42c065
  42c03d:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  42c041:	8b cd                	mov    ecx,ebp
  42c043:	8b d1                	mov    edx,ecx
  42c045:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42c04a:	c1 e9 02             	shr    ecx,0x2
  42c04d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42c04f:	8b ca                	mov    ecx,edx
  42c051:	83 e1 03             	and    ecx,0x3
  42c054:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42c056:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  42c05a:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  42c05e:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
  42c062:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  42c065:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42c069:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  42c06d:	51                   	push   ecx
  42c06e:	6a 1f                	push   0x1f
  42c070:	68 34 00 69 00       	push   0x690034
  42c075:	68 2c 00 69 00       	push   0x69002c
  42c07a:	e8 71 47 17 00       	call   0x5a07f0
  42c07f:	ff d0                	call   eax
  42c081:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  42c085:	83 c4 10             	add    esp,0x10
  42c088:	3b c3                	cmp    eax,ebx
  42c08a:	c7 44 24 34 ff ff ff 	mov    DWORD PTR [esp+0x34],0xffffffff
  42c091:	ff 
  42c092:	74 1d                	je     0x42c0b1
  42c094:	8d 48 ff             	lea    ecx,[eax-0x1]
  42c097:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42c09a:	3a c3                	cmp    al,bl
  42c09c:	74 0a                	je     0x42c0a8
  42c09e:	3c ff                	cmp    al,0xff
  42c0a0:	74 06                	je     0x42c0a8
  42c0a2:	fe c8                	dec    al
  42c0a4:	88 01                	mov    BYTE PTR [ecx],al
  42c0a6:	eb 09                	jmp    0x42c0b1
  42c0a8:	51                   	push   ecx
  42c0a9:	e8 42 25 1d 00       	call   0x5fe5f0
  42c0ae:	83 c4 04             	add    esp,0x4
  42c0b1:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  42c0b5:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42c0b9:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  42c0bd:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42c0c1:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  42c0c5:	8b 02                	mov    eax,DWORD PTR [edx]
  42c0c7:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
  42c0ca:	3b c2                	cmp    eax,edx
  42c0cc:	75 05                	jne    0x42c0d3
  42c0ce:	c6 44 24 13 01       	mov    BYTE PTR [esp+0x13],0x1
  42c0d3:	8b 06                	mov    eax,DWORD PTR [esi]
  42c0d5:	8b 51 24             	mov    edx,DWORD PTR [ecx+0x24]
  42c0d8:	3b c2                	cmp    eax,edx
  42c0da:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  42c0de:	0f 85 17 ff ff ff    	jne    0x42bffb
  42c0e4:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  42c0e8:	5f                   	pop    edi
  42c0e9:	5d                   	pop    ebp
  42c0ea:	5e                   	pop    esi
  42c0eb:	5b                   	pop    ebx
  42c0ec:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  42c0f0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42c0f7:	83 c4 28             	add    esp,0x28
  42c0fa:	c2 04 00             	ret    0x4
  42c0fd:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  42c101:	5e                   	pop    esi
  42c102:	8a c2                	mov    al,dl
  42c104:	5b                   	pop    ebx
  42c105:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42c10c:	83 c4 28             	add    esp,0x28
  42c10f:	c2 04 00             	ret    0x4
  42c112:	90                   	nop
  42c113:	90                   	nop
  42c114:	90                   	nop
  42c115:	90                   	nop
  42c116:	90                   	nop
  42c117:	90                   	nop
  42c118:	90                   	nop
  42c119:	90                   	nop
  42c11a:	90                   	nop
  42c11b:	90                   	nop
  42c11c:	90                   	nop
  42c11d:	90                   	nop
  42c11e:	90                   	nop
  42c11f:	90                   	nop
  42c120:	6a ff                	push   0xffffffff
  42c122:	68 d8 32 62 00       	push   0x6232d8
  42c127:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42c12d:	50                   	push   eax
  42c12e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42c135:	83 ec 1c             	sub    esp,0x1c
  42c138:	8b 41 30             	mov    eax,DWORD PTR [ecx+0x30]
  42c13b:	53                   	push   ebx
  42c13c:	56                   	push   esi
  42c13d:	33 db                	xor    ebx,ebx
  42c13f:	8b 30                	mov    esi,DWORD PTR [eax]
  42c141:	32 d2                	xor    dl,dl
  42c143:	3b f0                	cmp    esi,eax
  42c145:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  42c149:	88 54 24 0b          	mov    BYTE PTR [esp+0xb],dl
  42c14d:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  42c151:	0f 84 06 01 00 00    	je     0x42c25d
  42c157:	55                   	push   ebp
  42c158:	57                   	push   edi
  42c159:	eb 04                	jmp    0x42c15f
  42c15b:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  42c15f:	39 5e 08             	cmp    DWORD PTR [esi+0x8],ebx
  42c162:	0f 85 b9 00 00 00    	jne    0x42c221
  42c168:	8a 44 24 3c          	mov    al,BYTE PTR [esp+0x3c]
  42c16c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42c171:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  42c175:	83 c9 ff             	or     ecx,0xffffffff
  42c178:	33 c0                	xor    eax,eax
  42c17a:	6a 01                	push   0x1
  42c17c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42c17e:	f7 d1                	not    ecx
  42c180:	49                   	dec    ecx
  42c181:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  42c185:	8b e9                	mov    ebp,ecx
  42c187:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c18b:	55                   	push   ebp
  42c18c:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42c190:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  42c194:	e8 a7 57 fd ff       	call   0x401940
  42c199:	84 c0                	test   al,al
  42c19b:	74 28                	je     0x42c1c5
  42c19d:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  42c1a1:	8b cd                	mov    ecx,ebp
  42c1a3:	8b d1                	mov    edx,ecx
  42c1a5:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42c1aa:	c1 e9 02             	shr    ecx,0x2
  42c1ad:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42c1af:	8b ca                	mov    ecx,edx
  42c1b1:	83 e1 03             	and    ecx,0x3
  42c1b4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42c1b6:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  42c1ba:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  42c1be:	89 6c 24 24          	mov    DWORD PTR [esp+0x24],ebp
  42c1c2:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  42c1c5:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42c1c9:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  42c1cd:	51                   	push   ecx
  42c1ce:	6a 30                	push   0x30
  42c1d0:	68 34 00 69 00       	push   0x690034
  42c1d5:	68 2c 00 69 00       	push   0x69002c
  42c1da:	e8 11 46 17 00       	call   0x5a07f0
  42c1df:	ff d0                	call   eax
  42c1e1:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  42c1e5:	83 c4 10             	add    esp,0x10
  42c1e8:	3b c3                	cmp    eax,ebx
  42c1ea:	c7 44 24 34 ff ff ff 	mov    DWORD PTR [esp+0x34],0xffffffff
  42c1f1:	ff 
  42c1f2:	74 1d                	je     0x42c211
  42c1f4:	8d 48 ff             	lea    ecx,[eax-0x1]
  42c1f7:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42c1fa:	3a c3                	cmp    al,bl
  42c1fc:	74 0a                	je     0x42c208
  42c1fe:	3c ff                	cmp    al,0xff
  42c200:	74 06                	je     0x42c208
  42c202:	fe c8                	dec    al
  42c204:	88 01                	mov    BYTE PTR [ecx],al
  42c206:	eb 09                	jmp    0x42c211
  42c208:	51                   	push   ecx
  42c209:	e8 e2 23 1d 00       	call   0x5fe5f0
  42c20e:	83 c4 04             	add    esp,0x4
  42c211:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  42c215:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42c219:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  42c21d:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42c221:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  42c225:	8b 02                	mov    eax,DWORD PTR [edx]
  42c227:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
  42c22a:	3b c2                	cmp    eax,edx
  42c22c:	75 05                	jne    0x42c233
  42c22e:	c6 44 24 13 01       	mov    BYTE PTR [esp+0x13],0x1
  42c233:	8b 06                	mov    eax,DWORD PTR [esi]
  42c235:	8b 51 30             	mov    edx,DWORD PTR [ecx+0x30]
  42c238:	3b c2                	cmp    eax,edx
  42c23a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  42c23e:	0f 85 17 ff ff ff    	jne    0x42c15b
  42c244:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  42c248:	5f                   	pop    edi
  42c249:	5d                   	pop    ebp
  42c24a:	5e                   	pop    esi
  42c24b:	5b                   	pop    ebx
  42c24c:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  42c250:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42c257:	83 c4 28             	add    esp,0x28
  42c25a:	c2 04 00             	ret    0x4
  42c25d:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  42c261:	5e                   	pop    esi
  42c262:	8a c2                	mov    al,dl
  42c264:	5b                   	pop    ebx
  42c265:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42c26c:	83 c4 28             	add    esp,0x28
  42c26f:	c2 04 00             	ret    0x4
  42c272:	90                   	nop
  42c273:	90                   	nop
  42c274:	90                   	nop
  42c275:	90                   	nop
  42c276:	90                   	nop
  42c277:	90                   	nop
  42c278:	90                   	nop
  42c279:	90                   	nop
  42c27a:	90                   	nop
  42c27b:	90                   	nop
  42c27c:	90                   	nop
  42c27d:	90                   	nop
  42c27e:	90                   	nop
  42c27f:	90                   	nop
  42c280:	6a ff                	push   0xffffffff
  42c282:	68 10 33 62 00       	push   0x623310
  42c287:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42c28d:	50                   	push   eax
  42c28e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42c295:	83 ec 24             	sub    esp,0x24
  42c298:	53                   	push   ebx
  42c299:	55                   	push   ebp
  42c29a:	56                   	push   esi
  42c29b:	57                   	push   edi
  42c29c:	8b e9                	mov    ebp,ecx
  42c29e:	6a 4b                	push   0x4b
  42c2a0:	68 34 00 69 00       	push   0x690034
  42c2a5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42c2a9:	e8 42 23 18 00       	call   0x5ae5f0
  42c2ae:	8b 74 24 54          	mov    esi,DWORD PTR [esp+0x54]
  42c2b2:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  42c2b6:	33 db                	xor    ebx,ebx
  42c2b8:	89 1e                	mov    DWORD PTR [esi],ebx
  42c2ba:	89 18                	mov    DWORD PTR [eax],ebx
  42c2bc:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  42c2c1:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
  42c2c5:	3b c3                	cmp    eax,ebx
  42c2c7:	75 05                	jne    0x42c2ce
  42c2c9:	e8 b2 01 09 00       	call   0x4bc480
  42c2ce:	39 98 a4 03 00 00    	cmp    DWORD PTR [eax+0x3a4],ebx
  42c2d4:	75 62                	jne    0x42c338
  42c2d6:	8a 4c 24 58          	mov    cl,BYTE PTR [esp+0x58]
  42c2da:	53                   	push   ebx
  42c2db:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  42c2df:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42c2e3:	e8 b8 7d fd ff       	call   0x4040a0
  42c2e8:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42c2ed:	83 c9 ff             	or     ecx,0xffffffff
  42c2f0:	33 c0                	xor    eax,eax
  42c2f2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42c2f4:	f7 d1                	not    ecx
  42c2f6:	49                   	dec    ecx
  42c2f7:	51                   	push   ecx
  42c2f8:	68 70 3f 6b 00       	push   0x6b3f70
  42c2fd:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  42c301:	e8 ea 7d fd ff       	call   0x4040f0
  42c306:	8d 54 24 24          	lea    edx,[esp+0x24]
  42c30a:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  42c30f:	52                   	push   edx
  42c310:	68 30 01 00 00       	push   0x130
  42c315:	68 8c e5 68 00       	push   0x68e58c
  42c31a:	68 84 e5 68 00       	push   0x68e584
  42c31f:	e8 cc 44 17 00       	call   0x5a07f0
  42c324:	ff d0                	call   eax
  42c326:	83 c4 10             	add    esp,0x10
  42c329:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c32d:	88 5c 24 3c          	mov    BYTE PTR [esp+0x3c],bl
  42c331:	6a 01                	push   0x1
  42c333:	e8 68 7d fd ff       	call   0x4040a0
  42c338:	b9 50 99 6b 00       	mov    ecx,0x6b9950
  42c33d:	e8 2e 95 13 00       	call   0x565870
  42c342:	38 5d 44             	cmp    BYTE PTR [ebp+0x44],bl
  42c345:	0f 85 fe 01 00 00    	jne    0x42c549
  42c34b:	8b 7d 48             	mov    edi,DWORD PTR [ebp+0x48]
  42c34e:	8b 15 28 00 69 00    	mov    edx,DWORD PTR ds:0x690028
  42c354:	8b c8                	mov    ecx,eax
  42c356:	2b cf                	sub    ecx,edi
  42c358:	3b ca                	cmp    ecx,edx
  42c35a:	0f 8d e9 01 00 00    	jge    0x42c549
  42c360:	8b 45 4c             	mov    eax,DWORD PTR [ebp+0x4c]
  42c363:	48                   	dec    eax
  42c364:	0f 84 eb 00 00 00    	je     0x42c455
  42c36a:	48                   	dec    eax
  42c36b:	0f 85 bd 01 00 00    	jne    0x42c52e
  42c371:	39 5d 54             	cmp    DWORD PTR [ebp+0x54],ebx
  42c374:	0f 85 b2 00 00 00    	jne    0x42c42c
  42c37a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42c37f:	83 c9 ff             	or     ecx,0xffffffff
  42c382:	33 c0                	xor    eax,eax
  42c384:	8a 54 24 58          	mov    dl,BYTE PTR [esp+0x58]
  42c388:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42c38a:	f7 d1                	not    ecx
  42c38c:	49                   	dec    ecx
  42c38d:	6a 01                	push   0x1
  42c38f:	8b f9                	mov    edi,ecx
  42c391:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42c395:	57                   	push   edi
  42c396:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  42c39a:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42c39e:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  42c3a2:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42c3a6:	89 7c 24 5c          	mov    DWORD PTR [esp+0x5c],edi
  42c3aa:	e8 91 55 fd ff       	call   0x401940
  42c3af:	84 c0                	test   al,al
  42c3b1:	74 24                	je     0x42c3d7
  42c3b3:	8b cf                	mov    ecx,edi
  42c3b5:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  42c3b9:	8b c1                	mov    eax,ecx
  42c3bb:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42c3c0:	c1 e9 02             	shr    ecx,0x2
  42c3c3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42c3c5:	8b c8                	mov    ecx,eax
  42c3c7:	83 e1 03             	and    ecx,0x3
  42c3ca:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42c3cc:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  42c3d0:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  42c3d4:	88 1c 08             	mov    BYTE PTR [eax+ecx*1],bl
  42c3d7:	8d 54 24 14          	lea    edx,[esp+0x14]
  42c3db:	c6 44 24 3c 03       	mov    BYTE PTR [esp+0x3c],0x3
  42c3e0:	52                   	push   edx
  42c3e1:	6a 64                	push   0x64
  42c3e3:	68 34 00 69 00       	push   0x690034
  42c3e8:	68 78 00 69 00       	push   0x690078
  42c3ed:	e8 fe 43 17 00       	call   0x5a07f0
  42c3f2:	ff d0                	call   eax
  42c3f4:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  42c3f8:	83 c4 10             	add    esp,0x10
  42c3fb:	3b c3                	cmp    eax,ebx
  42c3fd:	88 5c 24 3c          	mov    BYTE PTR [esp+0x3c],bl
  42c401:	74 1d                	je     0x42c420
  42c403:	8d 48 ff             	lea    ecx,[eax-0x1]
  42c406:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42c409:	3a c3                	cmp    al,bl
  42c40b:	74 0a                	je     0x42c417
  42c40d:	3c ff                	cmp    al,0xff
  42c40f:	74 06                	je     0x42c417
  42c411:	fe c8                	dec    al
  42c413:	88 01                	mov    BYTE PTR [ecx],al
  42c415:	eb 09                	jmp    0x42c420
  42c417:	51                   	push   ecx
  42c418:	e8 d3 21 1d 00       	call   0x5fe5f0
  42c41d:	83 c4 04             	add    esp,0x4
  42c420:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  42c424:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  42c428:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42c42c:	8d 7d 54             	lea    edi,[ebp+0x54]
  42c42f:	8b cd                	mov    ecx,ebp
  42c431:	57                   	push   edi
  42c432:	e8 e9 fc ff ff       	call   0x42c120
  42c437:	84 c0                	test   al,al
  42c439:	74 0d                	je     0x42c448
  42c43b:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  42c43f:	8b 07                	mov    eax,DWORD PTR [edi]
  42c441:	89 01                	mov    DWORD PTR [ecx],eax
  42c443:	e9 e6 00 00 00       	jmp    0x42c52e
  42c448:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
  42c44c:	89 1f                	mov    DWORD PTR [edi],ebx
  42c44e:	89 1a                	mov    DWORD PTR [edx],ebx
  42c450:	e9 d9 00 00 00       	jmp    0x42c52e
  42c455:	39 5d 50             	cmp    DWORD PTR [ebp+0x50],ebx
  42c458:	0f 85 b7 00 00 00    	jne    0x42c515
  42c45e:	8a 44 24 58          	mov    al,BYTE PTR [esp+0x58]
  42c462:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42c467:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  42c46b:	83 c9 ff             	or     ecx,0xffffffff
  42c46e:	33 c0                	xor    eax,eax
  42c470:	6a 01                	push   0x1
  42c472:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42c474:	f7 d1                	not    ecx
  42c476:	49                   	dec    ecx
  42c477:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42c47b:	8b f9                	mov    edi,ecx
  42c47d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42c481:	57                   	push   edi
  42c482:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  42c486:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  42c48a:	89 7c 24 60          	mov    DWORD PTR [esp+0x60],edi
  42c48e:	e8 ad 54 fd ff       	call   0x401940
  42c493:	84 c0                	test   al,al
  42c495:	74 29                	je     0x42c4c0
  42c497:	8b cf                	mov    ecx,edi
  42c499:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  42c49d:	8b d1                	mov    edx,ecx
  42c49f:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42c4a4:	c1 e9 02             	shr    ecx,0x2
  42c4a7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42c4a9:	8b ca                	mov    ecx,edx
  42c4ab:	8b c2                	mov    eax,edx
  42c4ad:	83 e1 03             	and    ecx,0x3
  42c4b0:	50                   	push   eax
  42c4b1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42c4b3:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42c4b7:	e8 d4 7c fd ff       	call   0x404190
  42c4bc:	8b 74 24 54          	mov    esi,DWORD PTR [esp+0x54]
  42c4c0:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c4c4:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  42c4c9:	51                   	push   ecx
  42c4ca:	6a 59                	push   0x59
  42c4cc:	68 34 00 69 00       	push   0x690034
  42c4d1:	68 60 00 69 00       	push   0x690060
  42c4d6:	e8 15 43 17 00       	call   0x5a07f0
  42c4db:	ff d0                	call   eax
  42c4dd:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  42c4e1:	83 c4 10             	add    esp,0x10
  42c4e4:	3b c3                	cmp    eax,ebx
  42c4e6:	88 5c 24 3c          	mov    BYTE PTR [esp+0x3c],bl
  42c4ea:	74 1d                	je     0x42c509
  42c4ec:	8d 48 ff             	lea    ecx,[eax-0x1]
  42c4ef:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42c4f2:	3a c3                	cmp    al,bl
  42c4f4:	74 0a                	je     0x42c500
  42c4f6:	3c ff                	cmp    al,0xff
  42c4f8:	74 06                	je     0x42c500
  42c4fa:	fe c8                	dec    al
  42c4fc:	88 01                	mov    BYTE PTR [ecx],al
  42c4fe:	eb 09                	jmp    0x42c509
  42c500:	51                   	push   ecx
  42c501:	e8 ea 20 1d 00       	call   0x5fe5f0
  42c506:	83 c4 04             	add    esp,0x4
  42c509:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42c50d:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42c511:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  42c515:	8d 7d 50             	lea    edi,[ebp+0x50]
  42c518:	8b cd                	mov    ecx,ebp
  42c51a:	57                   	push   edi
  42c51b:	e8 a0 fa ff ff       	call   0x42bfc0
  42c520:	84 c0                	test   al,al
  42c522:	74 06                	je     0x42c52a
  42c524:	8b 17                	mov    edx,DWORD PTR [edi]
  42c526:	89 16                	mov    DWORD PTR [esi],edx
  42c528:	eb 04                	jmp    0x42c52e
  42c52a:	89 1f                	mov    DWORD PTR [edi],ebx
  42c52c:	89 1e                	mov    DWORD PTR [esi],ebx
  42c52e:	8b 6d 4c             	mov    ebp,DWORD PTR [ebp+0x4c]
  42c531:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42c535:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  42c53c:	ff 
  42c53d:	e8 2e 22 18 00       	call   0x5ae770
  42c542:	8b c5                	mov    eax,ebp
  42c544:	e9 b4 00 00 00       	jmp    0x42c5fd
  42c549:	8b 7c 24 50          	mov    edi,DWORD PTR [esp+0x50]
  42c54d:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  42c551:	56                   	push   esi
  42c552:	8b 74 24 50          	mov    esi,DWORD PTR [esp+0x50]
  42c556:	89 45 48             	mov    DWORD PTR [ebp+0x48],eax
  42c559:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  42c55d:	57                   	push   edi
  42c55e:	56                   	push   esi
  42c55f:	50                   	push   eax
  42c560:	51                   	push   ecx
  42c561:	8b cd                	mov    ecx,ebp
  42c563:	88 5d 44             	mov    BYTE PTR [ebp+0x44],bl
  42c566:	e8 f5 05 00 00       	call   0x42cb60
  42c56b:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  42c56f:	39 18                	cmp    DWORD PTR [eax],ebx
  42c571:	74 27                	je     0x42c59a
  42c573:	c7 45 4c 01 00 00 00 	mov    DWORD PTR [ebp+0x4c],0x1
  42c57a:	8b 10                	mov    edx,DWORD PTR [eax]
  42c57c:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42c580:	89 55 50             	mov    DWORD PTR [ebp+0x50],edx
  42c583:	89 5d 54             	mov    DWORD PTR [ebp+0x54],ebx
  42c586:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  42c58d:	ff 
  42c58e:	e8 dd 21 18 00       	call   0x5ae770
  42c593:	b8 01 00 00 00       	mov    eax,0x1
  42c598:	eb 63                	jmp    0x42c5fd
  42c59a:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  42c59e:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  42c5a2:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  42c5a6:	50                   	push   eax
  42c5a7:	57                   	push   edi
  42c5a8:	56                   	push   esi
  42c5a9:	51                   	push   ecx
  42c5aa:	52                   	push   edx
  42c5ab:	8b cd                	mov    ecx,ebp
  42c5ad:	e8 8e 09 00 00       	call   0x42cf40
  42c5b2:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  42c5b6:	39 18                	cmp    DWORD PTR [eax],ebx
  42c5b8:	74 27                	je     0x42c5e1
  42c5ba:	c7 45 4c 02 00 00 00 	mov    DWORD PTR [ebp+0x4c],0x2
  42c5c1:	89 5d 50             	mov    DWORD PTR [ebp+0x50],ebx
  42c5c4:	8b 00                	mov    eax,DWORD PTR [eax]
  42c5c6:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42c5ca:	89 45 54             	mov    DWORD PTR [ebp+0x54],eax
  42c5cd:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  42c5d4:	ff 
  42c5d5:	e8 96 21 18 00       	call   0x5ae770
  42c5da:	b8 02 00 00 00       	mov    eax,0x2
  42c5df:	eb 1c                	jmp    0x42c5fd
  42c5e1:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42c5e5:	89 5d 4c             	mov    DWORD PTR [ebp+0x4c],ebx
  42c5e8:	89 5d 50             	mov    DWORD PTR [ebp+0x50],ebx
  42c5eb:	89 5d 54             	mov    DWORD PTR [ebp+0x54],ebx
  42c5ee:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  42c5f5:	ff 
  42c5f6:	e8 75 21 18 00       	call   0x5ae770
  42c5fb:	33 c0                	xor    eax,eax
  42c5fd:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  42c601:	5f                   	pop    edi
  42c602:	5e                   	pop    esi
  42c603:	5d                   	pop    ebp
  42c604:	5b                   	pop    ebx
  42c605:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42c60c:	83 c4 30             	add    esp,0x30
  42c60f:	c2 18 00             	ret    0x18
  42c612:	90                   	nop
  42c613:	90                   	nop
  42c614:	90                   	nop
  42c615:	90                   	nop
  42c616:	90                   	nop
  42c617:	90                   	nop
  42c618:	90                   	nop
  42c619:	90                   	nop
  42c61a:	90                   	nop
  42c61b:	90                   	nop
  42c61c:	90                   	nop
  42c61d:	90                   	nop
  42c61e:	90                   	nop
  42c61f:	90                   	nop
  42c620:	83 ec 24             	sub    esp,0x24
  42c623:	53                   	push   ebx
  42c624:	56                   	push   esi
  42c625:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  42c629:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42c62d:	57                   	push   edi
  42c62e:	51                   	push   ecx
  42c62f:	8b 06                	mov    eax,DWORD PTR [esi]
  42c631:	8b ce                	mov    ecx,esi
  42c633:	ff 50 48             	call   DWORD PTR [eax+0x48]
  42c636:	8b 10                	mov    edx,DWORD PTR [eax]
  42c638:	81 c6 1c 01 00 00    	add    esi,0x11c
  42c63e:	8d 7c 24 18          	lea    edi,[esp+0x18]
  42c642:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  42c645:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  42c649:	b9 06 00 00 00       	mov    ecx,0x6
  42c64e:	8b 58 08             	mov    ebx,DWORD PTR [eax+0x8]
  42c651:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  42c655:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42c657:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  42c65b:	d8 0d 84 bd 64 00    	fmul   DWORD PTR ds:0x64bd84
  42c661:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  42c665:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  42c669:	8b c8                	mov    ecx,eax
  42c66b:	5f                   	pop    edi
  42c66c:	5e                   	pop    esi
  42c66d:	89 11                	mov    DWORD PTR [ecx],edx
  42c66f:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  42c673:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  42c676:	89 59 08             	mov    DWORD PTR [ecx+0x8],ebx
  42c679:	5b                   	pop    ebx
  42c67a:	83 c4 24             	add    esp,0x24
  42c67d:	c3                   	ret
  42c67e:	90                   	nop
  42c67f:	90                   	nop
  42c680:	6a ff                	push   0xffffffff
  42c682:	68 67 33 62 00       	push   0x623367
  42c687:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42c68d:	50                   	push   eax
  42c68e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42c695:	81 ec f4 00 00 00    	sub    esp,0xf4
  42c69b:	53                   	push   ebx
  42c69c:	55                   	push   ebp
  42c69d:	8b ac 24 0c 01 00 00 	mov    ebp,DWORD PTR [esp+0x10c]
  42c6a4:	56                   	push   esi
  42c6a5:	57                   	push   edi
  42c6a6:	8b f9                	mov    edi,ecx
  42c6a8:	51                   	push   ecx
  42c6a9:	8b cd                	mov    ecx,ebp
  42c6ab:	8b c4                	mov    eax,esp
  42c6ad:	89 64 24 20          	mov    DWORD PTR [esp+0x20],esp
  42c6b1:	50                   	push   eax
  42c6b2:	e8 29 7c fd ff       	call   0x4042e0
  42c6b7:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c6bb:	e8 70 95 13 00       	call   0x565c30
  42c6c0:	33 db                	xor    ebx,ebx
  42c6c2:	55                   	push   ebp
  42c6c3:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c6c7:	89 9c 24 10 01 00 00 	mov    DWORD PTR [esp+0x110],ebx
  42c6ce:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  42c6d3:	c6 44 24 39 01       	mov    BYTE PTR [esp+0x39],0x1
  42c6d8:	c6 44 24 3a 01       	mov    BYTE PTR [esp+0x3a],0x1
  42c6dd:	88 5c 24 3b          	mov    BYTE PTR [esp+0x3b],bl
  42c6e1:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  42c6e6:	88 5c 24 3d          	mov    BYTE PTR [esp+0x3d],bl
  42c6ea:	88 5c 24 3e          	mov    BYTE PTR [esp+0x3e],bl
  42c6ee:	e8 dd 9c 13 00       	call   0x5663d0
  42c6f3:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  42c6f6:	8b 30                	mov    esi,DWORD PTR [eax]
  42c6f8:	3b f0                	cmp    esi,eax
  42c6fa:	74 16                	je     0x42c712
  42c6fc:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  42c6ff:	51                   	push   ecx
  42c700:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c704:	e8 c7 9c 13 00       	call   0x5663d0
  42c709:	8b 36                	mov    esi,DWORD PTR [esi]
  42c70b:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  42c70e:	3b f0                	cmp    esi,eax
  42c710:	75 ea                	jne    0x42c6fc
  42c712:	8d 94 24 f8 00 00 00 	lea    edx,[esp+0xf8]
  42c719:	55                   	push   ebp
  42c71a:	52                   	push   edx
  42c71b:	e8 00 ff ff ff       	call   0x42c620
  42c720:	8b 08                	mov    ecx,DWORD PTR [eax]
  42c722:	83 c4 08             	add    esp,0x8
  42c725:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  42c729:	8b 8c 24 1c 01 00 00 	mov    ecx,DWORD PTR [esp+0x11c]
  42c730:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  42c733:	51                   	push   ecx
  42c734:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  42c738:	8d 54 24 14          	lea    edx,[esp+0x14]
  42c73c:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  42c73f:	52                   	push   edx
  42c740:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42c744:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  42c748:	e8 c3 96 13 00       	call   0x565e10
  42c74d:	84 c0                	test   al,al
  42c74f:	0f 84 b7 00 00 00    	je     0x42c80c
  42c755:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c759:	e8 12 9c 13 00       	call   0x566370
  42c75e:	85 c0                	test   eax,eax
  42c760:	74 16                	je     0x42c778
  42c762:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c766:	e8 05 9c 13 00       	call   0x566370
  42c76b:	3b 84 24 18 01 00 00 	cmp    eax,DWORD PTR [esp+0x118]
  42c772:	0f 84 94 00 00 00    	je     0x42c80c
  42c778:	8b 84 24 f0 00 00 00 	mov    eax,DWORD PTR [esp+0xf0]
  42c77f:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  42c786:	50                   	push   eax
  42c787:	51                   	push   ecx
  42c788:	8d 8c 24 f0 00 00 00 	lea    ecx,[esp+0xf0]
  42c78f:	c7 84 24 14 01 00 00 	mov    DWORD PTR [esp+0x114],0x6
  42c796:	06 00 00 00 
  42c79a:	e8 b1 b5 15 00       	call   0x587d50
  42c79f:	8b 94 24 ec 00 00 00 	mov    edx,DWORD PTR [esp+0xec]
  42c7a6:	52                   	push   edx
  42c7a7:	e8 44 1e 1d 00       	call   0x5fe5f0
  42c7ac:	83 c4 04             	add    esp,0x4
  42c7af:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  42c7b6:	89 9c 24 ec 00 00 00 	mov    DWORD PTR [esp+0xec],ebx
  42c7bd:	89 9c 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],ebx
  42c7c4:	89 9c 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],ebx
  42c7cb:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x5
  42c7d2:	05 
  42c7d3:	e8 58 7c 0e 00       	call   0x514430
  42c7d8:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  42c7dc:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x4
  42c7e3:	04 
  42c7e4:	3b cb                	cmp    ecx,ebx
  42c7e6:	74 09                	je     0x42c7f1
  42c7e8:	e8 e3 d0 fd ff       	call   0x4098d0
  42c7ed:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  42c7f1:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c7f5:	c7 84 24 0c 01 00 00 	mov    DWORD PTR [esp+0x10c],0xffffffff
  42c7fc:	ff ff ff ff 
  42c800:	e8 cb ec 17 00       	call   0x5ab4d0
  42c805:	32 c0                	xor    al,al
  42c807:	e9 bc 00 00 00       	jmp    0x42c8c8
  42c80c:	8b 84 24 f0 00 00 00 	mov    eax,DWORD PTR [esp+0xf0]
  42c813:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  42c81a:	50                   	push   eax
  42c81b:	51                   	push   ecx
  42c81c:	8d 8c 24 f0 00 00 00 	lea    ecx,[esp+0xf0]
  42c823:	c7 84 24 14 01 00 00 	mov    DWORD PTR [esp+0x114],0x3
  42c82a:	03 00 00 00 
  42c82e:	e8 1d b5 15 00       	call   0x587d50
  42c833:	8b 94 24 ec 00 00 00 	mov    edx,DWORD PTR [esp+0xec]
  42c83a:	52                   	push   edx
  42c83b:	e8 b0 1d 1d 00       	call   0x5fe5f0
  42c840:	8b 84 24 e4 00 00 00 	mov    eax,DWORD PTR [esp+0xe4]
  42c847:	8b 8c 24 e0 00 00 00 	mov    ecx,DWORD PTR [esp+0xe0]
  42c84e:	83 c4 04             	add    esp,0x4
  42c851:	89 9c 24 ec 00 00 00 	mov    DWORD PTR [esp+0xec],ebx
  42c858:	89 9c 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],ebx
  42c85f:	89 9c 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],ebx
  42c866:	50                   	push   eax
  42c867:	51                   	push   ecx
  42c868:	8d 8c 24 e0 00 00 00 	lea    ecx,[esp+0xe0]
  42c86f:	c6 84 24 14 01 00 00 	mov    BYTE PTR [esp+0x114],0x2
  42c876:	02 
  42c877:	e8 d4 b4 15 00       	call   0x587d50
  42c87c:	8b 94 24 dc 00 00 00 	mov    edx,DWORD PTR [esp+0xdc]
  42c883:	52                   	push   edx
  42c884:	e8 67 1d 1d 00       	call   0x5fe5f0
  42c889:	83 c4 04             	add    esp,0x4
  42c88c:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  42c890:	89 9c 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],ebx
  42c897:	89 9c 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],ebx
  42c89e:	89 9c 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],ebx
  42c8a5:	c6 84 24 0c 01 00 00 	mov    BYTE PTR [esp+0x10c],0x1
  42c8ac:	01 
  42c8ad:	e8 5e 0a 15 00       	call   0x57d310
  42c8b2:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c8b6:	c7 84 24 0c 01 00 00 	mov    DWORD PTR [esp+0x10c],0xffffffff
  42c8bd:	ff ff ff ff 
  42c8c1:	e8 0a ec 17 00       	call   0x5ab4d0
  42c8c6:	b0 01                	mov    al,0x1
  42c8c8:	8b 8c 24 04 01 00 00 	mov    ecx,DWORD PTR [esp+0x104]
  42c8cf:	5f                   	pop    edi
  42c8d0:	5e                   	pop    esi
  42c8d1:	5d                   	pop    ebp
  42c8d2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42c8d9:	5b                   	pop    ebx
  42c8da:	81 c4 00 01 00 00    	add    esp,0x100
  42c8e0:	c2 0c 00             	ret    0xc
  42c8e3:	90                   	nop
  42c8e4:	90                   	nop
  42c8e5:	90                   	nop
  42c8e6:	90                   	nop
  42c8e7:	90                   	nop
  42c8e8:	90                   	nop
  42c8e9:	90                   	nop
  42c8ea:	90                   	nop
  42c8eb:	90                   	nop
  42c8ec:	90                   	nop
  42c8ed:	90                   	nop
  42c8ee:	90                   	nop
  42c8ef:	90                   	nop
  42c8f0:	6a ff                	push   0xffffffff
  42c8f2:	68 c7 33 62 00       	push   0x6233c7
  42c8f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42c8fd:	50                   	push   eax
  42c8fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42c905:	81 ec 00 01 00 00    	sub    esp,0x100
  42c90b:	53                   	push   ebx
  42c90c:	55                   	push   ebp
  42c90d:	8b ac 24 18 01 00 00 	mov    ebp,DWORD PTR [esp+0x118]
  42c914:	56                   	push   esi
  42c915:	57                   	push   edi
  42c916:	8b f9                	mov    edi,ecx
  42c918:	51                   	push   ecx
  42c919:	8b cd                	mov    ecx,ebp
  42c91b:	8b c4                	mov    eax,esp
  42c91d:	89 64 24 20          	mov    DWORD PTR [esp+0x20],esp
  42c921:	50                   	push   eax
  42c922:	e8 b9 79 fd ff       	call   0x4042e0
  42c927:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c92b:	e8 00 93 13 00       	call   0x565c30
  42c930:	33 db                	xor    ebx,ebx
  42c932:	55                   	push   ebp
  42c933:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c937:	89 9c 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],ebx
  42c93e:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  42c943:	c6 44 24 39 01       	mov    BYTE PTR [esp+0x39],0x1
  42c948:	c6 44 24 3a 01       	mov    BYTE PTR [esp+0x3a],0x1
  42c94d:	88 5c 24 3b          	mov    BYTE PTR [esp+0x3b],bl
  42c951:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  42c956:	88 5c 24 3d          	mov    BYTE PTR [esp+0x3d],bl
  42c95a:	88 5c 24 3e          	mov    BYTE PTR [esp+0x3e],bl
  42c95e:	e8 6d 9a 13 00       	call   0x5663d0
  42c963:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  42c966:	8b 30                	mov    esi,DWORD PTR [eax]
  42c968:	3b f0                	cmp    esi,eax
  42c96a:	74 16                	je     0x42c982
  42c96c:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  42c96f:	51                   	push   ecx
  42c970:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42c974:	e8 57 9a 13 00       	call   0x5663d0
  42c979:	8b 36                	mov    esi,DWORD PTR [esi]
  42c97b:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  42c97e:	3b f0                	cmp    esi,eax
  42c980:	75 ea                	jne    0x42c96c
  42c982:	8d 94 24 f8 00 00 00 	lea    edx,[esp+0xf8]
  42c989:	55                   	push   ebp
  42c98a:	52                   	push   edx
  42c98b:	e8 90 fc ff ff       	call   0x42c620
  42c990:	8b 08                	mov    ecx,DWORD PTR [eax]
  42c992:	8b b4 24 2c 01 00 00 	mov    esi,DWORD PTR [esp+0x12c]
  42c999:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  42c99d:	83 c4 08             	add    esp,0x8
  42c9a0:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  42c9a3:	8b ce                	mov    ecx,esi
  42c9a5:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  42c9a9:	8b 16                	mov    edx,DWORD PTR [esi]
  42c9ab:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  42c9ae:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  42c9b2:	8d 84 24 04 01 00 00 	lea    eax,[esp+0x104]
  42c9b9:	50                   	push   eax
  42c9ba:	ff 52 48             	call   DWORD PTR [edx+0x48]
  42c9bd:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42c9c1:	50                   	push   eax
  42c9c2:	51                   	push   ecx
  42c9c3:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42c9c7:	e8 44 94 13 00       	call   0x565e10
  42c9cc:	84 c0                	test   al,al
  42c9ce:	0f 84 b2 00 00 00    	je     0x42ca86
  42c9d4:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c9d8:	e8 c3 9b 13 00       	call   0x5665a0
  42c9dd:	85 c0                	test   eax,eax
  42c9df:	74 11                	je     0x42c9f2
  42c9e1:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42c9e5:	e8 b6 9b 13 00       	call   0x5665a0
  42c9ea:	3b c6                	cmp    eax,esi
  42c9ec:	0f 84 94 00 00 00    	je     0x42ca86
  42c9f2:	8b 94 24 f0 00 00 00 	mov    edx,DWORD PTR [esp+0xf0]
  42c9f9:	8b 84 24 ec 00 00 00 	mov    eax,DWORD PTR [esp+0xec]
  42ca00:	52                   	push   edx
  42ca01:	50                   	push   eax
  42ca02:	8d 8c 24 f0 00 00 00 	lea    ecx,[esp+0xf0]
  42ca09:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0x6
  42ca10:	06 00 00 00 
  42ca14:	e8 37 b3 15 00       	call   0x587d50
  42ca19:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  42ca20:	51                   	push   ecx
  42ca21:	e8 ca 1b 1d 00       	call   0x5fe5f0
  42ca26:	83 c4 04             	add    esp,0x4
  42ca29:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  42ca30:	89 9c 24 ec 00 00 00 	mov    DWORD PTR [esp+0xec],ebx
  42ca37:	89 9c 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],ebx
  42ca3e:	89 9c 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],ebx
  42ca45:	c6 84 24 18 01 00 00 	mov    BYTE PTR [esp+0x118],0x5
  42ca4c:	05 
  42ca4d:	e8 de 79 0e 00       	call   0x514430
  42ca52:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  42ca56:	c6 84 24 18 01 00 00 	mov    BYTE PTR [esp+0x118],0x4
  42ca5d:	04 
  42ca5e:	3b cb                	cmp    ecx,ebx
  42ca60:	74 09                	je     0x42ca6b
  42ca62:	e8 69 ce fd ff       	call   0x4098d0
  42ca67:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  42ca6b:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42ca6f:	c7 84 24 18 01 00 00 	mov    DWORD PTR [esp+0x118],0xffffffff
  42ca76:	ff ff ff ff 
  42ca7a:	e8 51 ea 17 00       	call   0x5ab4d0
  42ca7f:	32 c0                	xor    al,al
  42ca81:	e9 bc 00 00 00       	jmp    0x42cb42
  42ca86:	8b 94 24 f0 00 00 00 	mov    edx,DWORD PTR [esp+0xf0]
  42ca8d:	8b 84 24 ec 00 00 00 	mov    eax,DWORD PTR [esp+0xec]
  42ca94:	52                   	push   edx
  42ca95:	50                   	push   eax
  42ca96:	8d 8c 24 f0 00 00 00 	lea    ecx,[esp+0xf0]
  42ca9d:	c7 84 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],0x3
  42caa4:	03 00 00 00 
  42caa8:	e8 a3 b2 15 00       	call   0x587d50
  42caad:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  42cab4:	51                   	push   ecx
  42cab5:	e8 36 1b 1d 00       	call   0x5fe5f0
  42caba:	8b 94 24 e4 00 00 00 	mov    edx,DWORD PTR [esp+0xe4]
  42cac1:	8b 84 24 e0 00 00 00 	mov    eax,DWORD PTR [esp+0xe0]
  42cac8:	83 c4 04             	add    esp,0x4
  42cacb:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  42cad2:	89 9c 24 ec 00 00 00 	mov    DWORD PTR [esp+0xec],ebx
  42cad9:	89 9c 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],ebx
  42cae0:	52                   	push   edx
  42cae1:	50                   	push   eax
  42cae2:	89 9c 24 fc 00 00 00 	mov    DWORD PTR [esp+0xfc],ebx
  42cae9:	c6 84 24 20 01 00 00 	mov    BYTE PTR [esp+0x120],0x2
  42caf0:	02 
  42caf1:	e8 5a b2 15 00       	call   0x587d50
  42caf6:	8b 8c 24 dc 00 00 00 	mov    ecx,DWORD PTR [esp+0xdc]
  42cafd:	51                   	push   ecx
  42cafe:	e8 ed 1a 1d 00       	call   0x5fe5f0
  42cb03:	83 c4 04             	add    esp,0x4
  42cb06:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  42cb0a:	89 9c 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],ebx
  42cb11:	89 9c 24 e0 00 00 00 	mov    DWORD PTR [esp+0xe0],ebx
  42cb18:	89 9c 24 e4 00 00 00 	mov    DWORD PTR [esp+0xe4],ebx
  42cb1f:	c6 84 24 18 01 00 00 	mov    BYTE PTR [esp+0x118],0x1
  42cb26:	01 
  42cb27:	e8 e4 07 15 00       	call   0x57d310
  42cb2c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42cb30:	c7 84 24 18 01 00 00 	mov    DWORD PTR [esp+0x118],0xffffffff
  42cb37:	ff ff ff ff 
  42cb3b:	e8 90 e9 17 00       	call   0x5ab4d0
  42cb40:	b0 01                	mov    al,0x1
  42cb42:	8b 8c 24 10 01 00 00 	mov    ecx,DWORD PTR [esp+0x110]
  42cb49:	5f                   	pop    edi
  42cb4a:	5e                   	pop    esi
  42cb4b:	5d                   	pop    ebp
  42cb4c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42cb53:	5b                   	pop    ebx
  42cb54:	81 c4 0c 01 00 00    	add    esp,0x10c
  42cb5a:	c2 08 00             	ret    0x8
  42cb5d:	90                   	nop
  42cb5e:	90                   	nop
  42cb5f:	90                   	nop
  42cb60:	6a ff                	push   0xffffffff
  42cb62:	68 f0 33 62 00       	push   0x6233f0
  42cb67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42cb6d:	50                   	push   eax
  42cb6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42cb75:	83 ec 7c             	sub    esp,0x7c
  42cb78:	d9 84 24 98 00 00 00 	fld    DWORD PTR [esp+0x98]
  42cb7f:	d8 8c 24 98 00 00 00 	fmul   DWORD PTR [esp+0x98]
  42cb86:	8b 84 24 9c 00 00 00 	mov    eax,DWORD PTR [esp+0x9c]
  42cb8d:	53                   	push   ebx
  42cb8e:	55                   	push   ebp
  42cb8f:	56                   	push   esi
  42cb90:	8b f1                	mov    esi,ecx
  42cb92:	57                   	push   edi
  42cb93:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  42cb97:	d9 84 24 a4 00 00 00 	fld    DWORD PTR [esp+0xa4]
  42cb9e:	8b 8c 24 9c 00 00 00 	mov    ecx,DWORD PTR [esp+0x9c]
  42cba5:	8d 54 24 54          	lea    edx,[esp+0x54]
  42cba9:	d9 e1                	fabs
  42cbab:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  42cbaf:	51                   	push   ecx
  42cbb0:	52                   	push   edx
  42cbb1:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  42cbb5:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
  42cbbb:	e8 60 fa ff ff       	call   0x42c620
  42cbc0:	8b d0                	mov    edx,eax
  42cbc2:	8d 6e 38             	lea    ebp,[esi+0x38]
  42cbc5:	83 c4 08             	add    esp,0x8
  42cbc8:	8b 02                	mov    eax,DWORD PTR [edx]
  42cbca:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  42cbcd:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  42cbd0:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  42cbd4:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42cbd7:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  42cbdb:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  42cbdf:	50                   	push   eax
  42cbe0:	8b 08                	mov    ecx,DWORD PTR [eax]
  42cbe2:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  42cbe6:	51                   	push   ecx
  42cbe7:	50                   	push   eax
  42cbe8:	8b cd                	mov    ecx,ebp
  42cbea:	e8 f1 0f 00 00       	call   0x42dbe0
  42cbef:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
  42cbf2:	8b 18                	mov    ebx,DWORD PTR [eax]
  42cbf4:	3b d8                	cmp    ebx,eax
  42cbf6:	0f 84 b7 01 00 00    	je     0x42cdb3
  42cbfc:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  42cbff:	85 c0                	test   eax,eax
  42cc01:	75 79                	jne    0x42cc7c
  42cc03:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  42cc07:	6a 00                	push   0x0
  42cc09:	88 8c 24 80 00 00 00 	mov    BYTE PTR [esp+0x80],cl
  42cc10:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  42cc17:	e8 84 74 fd ff       	call   0x4040a0
  42cc1c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42cc21:	83 c9 ff             	or     ecx,0xffffffff
  42cc24:	33 c0                	xor    eax,eax
  42cc26:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42cc28:	f7 d1                	not    ecx
  42cc2a:	49                   	dec    ecx
  42cc2b:	51                   	push   ecx
  42cc2c:	68 70 3f 6b 00       	push   0x6b3f70
  42cc31:	8d 8c 24 84 00 00 00 	lea    ecx,[esp+0x84]
  42cc38:	e8 b3 74 fd ff       	call   0x4040f0
  42cc3d:	8d 54 24 7c          	lea    edx,[esp+0x7c]
  42cc41:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x0
  42cc48:	00 00 00 00 
  42cc4c:	52                   	push   edx
  42cc4d:	68 03 01 00 00       	push   0x103
  42cc52:	68 34 00 69 00       	push   0x690034
  42cc57:	68 2c 00 69 00       	push   0x69002c
  42cc5c:	e8 8f 3b 17 00       	call   0x5a07f0
  42cc61:	ff d0                	call   eax
  42cc63:	83 c4 10             	add    esp,0x10
  42cc66:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  42cc6a:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0xffffffff
  42cc71:	ff ff ff ff 
  42cc75:	6a 01                	push   0x1
  42cc77:	e8 24 74 fd ff       	call   0x4040a0
  42cc7c:	8b 73 08             	mov    esi,DWORD PTR [ebx+0x8]
  42cc7f:	8a 46 7c             	mov    al,BYTE PTR [esi+0x7c]
  42cc82:	84 c0                	test   al,al
  42cc84:	0f 84 18 01 00 00    	je     0x42cda2
  42cc8a:	8b 06                	mov    eax,DWORD PTR [esi]
  42cc8c:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  42cc90:	51                   	push   ecx
  42cc91:	8b ce                	mov    ecx,esi
  42cc93:	ff 50 48             	call   DWORD PTR [eax+0x48]
  42cc96:	8b 10                	mov    edx,DWORD PTR [eax]
  42cc98:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
  42cc9c:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  42cc9f:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
  42cca3:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  42cca7:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  42ccaa:	8d 44 24 54          	lea    eax,[esp+0x54]
  42ccae:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  42ccb2:	50                   	push   eax
  42ccb3:	8d 54 24 40          	lea    edx,[esp+0x40]
  42ccb7:	e8 24 63 18 00       	call   0x5b2fe0
  42ccbc:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  42ccc0:	51                   	push   ecx
  42ccc1:	e8 2a 49 18 00       	call   0x5b15f0
  42ccc6:	d8 ac 24 a4 00 00 00 	fsubr  DWORD PTR [esp+0xa4]
  42cccd:	d9 1c 24             	fstp   DWORD PTR [esp]
  42ccd0:	e8 5b 49 18 00       	call   0x5b1630
  42ccd5:	d9 e1                	fabs
  42ccd7:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  42ccdb:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  42cce1:	83 c4 04             	add    esp,0x4
  42cce4:	de d9                	fcompp
  42cce6:	df e0                	fnstsw ax
  42cce8:	f6 c4 01             	test   ah,0x1
  42cceb:	0f 85 b1 00 00 00    	jne    0x42cda2
  42ccf1:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  42ccf5:	e8 c6 62 18 00       	call   0x5b2fc0
  42ccfa:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
  42ccfe:	d8 5c 24 20          	fcomp  DWORD PTR [esp+0x20]
  42cd02:	df e0                	fnstsw ax
  42cd04:	f6 c4 01             	test   ah,0x1
  42cd07:	0f 84 95 00 00 00    	je     0x42cda2
  42cd0d:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  42cd11:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  42cd15:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  42cd19:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  42cd1d:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
  42cd20:	32 c9                	xor    cl,cl
  42cd22:	8b 30                	mov    esi,DWORD PTR [eax]
  42cd24:	3b f0                	cmp    esi,eax
  42cd26:	74 65                	je     0x42cd8d
  42cd28:	84 c9                	test   cl,cl
  42cd2a:	75 76                	jne    0x42cda2
  42cd2c:	d9 46 08             	fld    DWORD PTR [esi+0x8]
  42cd2f:	d8 5c 24 18          	fcomp  DWORD PTR [esp+0x18]
  42cd33:	df e0                	fnstsw ax
  42cd35:	f6 c4 41             	test   ah,0x41
  42cd38:	75 44                	jne    0x42cd7e
  42cd3a:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  42cd3d:	6a 10                	push   0x10
  42cd3f:	e8 71 d3 1d 00       	call   0x60a0b5
  42cd44:	83 c4 04             	add    esp,0x4
  42cd47:	8b ce                	mov    ecx,esi
  42cd49:	85 f6                	test   esi,esi
  42cd4b:	75 02                	jne    0x42cd4f
  42cd4d:	8b c8                	mov    ecx,eax
  42cd4f:	89 08                	mov    DWORD PTR [eax],ecx
  42cd51:	8b cf                	mov    ecx,edi
  42cd53:	85 ff                	test   edi,edi
  42cd55:	75 02                	jne    0x42cd59
  42cd57:	8b c8                	mov    ecx,eax
  42cd59:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  42cd5c:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  42cd5f:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  42cd62:	89 01                	mov    DWORD PTR [ecx],eax
  42cd64:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42cd68:	83 c0 08             	add    eax,0x8
  42cd6b:	51                   	push   ecx
  42cd6c:	50                   	push   eax
  42cd6d:	e8 be 0e 00 00       	call   0x42dc30
  42cd72:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  42cd75:	83 c4 08             	add    esp,0x8
  42cd78:	40                   	inc    eax
  42cd79:	b1 01                	mov    cl,0x1
  42cd7b:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  42cd7e:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  42cd82:	8b 36                	mov    esi,DWORD PTR [esi]
  42cd84:	3b 72 3c             	cmp    esi,DWORD PTR [edx+0x3c]
  42cd87:	75 9f                	jne    0x42cd28
  42cd89:	84 c9                	test   cl,cl
  42cd8b:	75 15                	jne    0x42cda2
  42cd8d:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42cd90:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42cd94:	51                   	push   ecx
  42cd95:	8d 54 24 28          	lea    edx,[esp+0x28]
  42cd99:	50                   	push   eax
  42cd9a:	52                   	push   edx
  42cd9b:	8b cd                	mov    ecx,ebp
  42cd9d:	e8 de 0d 00 00       	call   0x42db80
  42cda2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  42cda6:	8b 1b                	mov    ebx,DWORD PTR [ebx]
  42cda8:	3b 58 24             	cmp    ebx,DWORD PTR [eax+0x24]
  42cdab:	0f 85 4b fe ff ff    	jne    0x42cbfc
  42cdb1:	8b f0                	mov    esi,eax
  42cdb3:	8b 46 3c             	mov    eax,DWORD PTR [esi+0x3c]
  42cdb6:	c6 44 24 13 00       	mov    BYTE PTR [esp+0x13],0x0
  42cdbb:	8b 18                	mov    ebx,DWORD PTR [eax]
  42cdbd:	3b d8                	cmp    ebx,eax
  42cdbf:	0f 84 49 01 00 00    	je     0x42cf0e
  42cdc5:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  42cdc9:	84 c0                	test   al,al
  42cdcb:	0f 85 3d 01 00 00    	jne    0x42cf0e
  42cdd1:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
  42cdd4:	85 c0                	test   eax,eax
  42cdd6:	0f 85 98 00 00 00    	jne    0x42ce74
  42cddc:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  42cde0:	6a 00                	push   0x0
  42cde2:	88 4c 24 64          	mov    BYTE PTR [esp+0x64],cl
  42cde6:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  42cdea:	e8 b1 72 fd ff       	call   0x4040a0
  42cdef:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42cdf4:	83 c9 ff             	or     ecx,0xffffffff
  42cdf7:	33 c0                	xor    eax,eax
  42cdf9:	6a 01                	push   0x1
  42cdfb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42cdfd:	f7 d1                	not    ecx
  42cdff:	49                   	dec    ecx
  42ce00:	8b e9                	mov    ebp,ecx
  42ce02:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  42ce06:	55                   	push   ebp
  42ce07:	e8 34 4b fd ff       	call   0x401940
  42ce0c:	84 c0                	test   al,al
  42ce0e:	74 25                	je     0x42ce35
  42ce10:	8b 7c 24 64          	mov    edi,DWORD PTR [esp+0x64]
  42ce14:	8b cd                	mov    ecx,ebp
  42ce16:	8b d1                	mov    edx,ecx
  42ce18:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42ce1d:	c1 e9 02             	shr    ecx,0x2
  42ce20:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ce22:	8b ca                	mov    ecx,edx
  42ce24:	83 e1 03             	and    ecx,0x3
  42ce27:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ce29:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  42ce2d:	89 6c 24 68          	mov    DWORD PTR [esp+0x68],ebp
  42ce31:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  42ce35:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  42ce39:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x1
  42ce40:	01 00 00 00 
  42ce44:	51                   	push   ecx
  42ce45:	68 3e 01 00 00       	push   0x13e
  42ce4a:	68 34 00 69 00       	push   0x690034
  42ce4f:	68 90 00 69 00       	push   0x690090
  42ce54:	e8 97 39 17 00       	call   0x5a07f0
  42ce59:	ff d0                	call   eax
  42ce5b:	83 c4 10             	add    esp,0x10
  42ce5e:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  42ce62:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0xffffffff
  42ce69:	ff ff ff ff 
  42ce6d:	6a 01                	push   0x1
  42ce6f:	e8 2c 72 fd ff       	call   0x4040a0
  42ce74:	8b 73 0c             	mov    esi,DWORD PTR [ebx+0xc]
  42ce77:	8d 44 24 70          	lea    eax,[esp+0x70]
  42ce7b:	50                   	push   eax
  42ce7c:	8b ce                	mov    ecx,esi
  42ce7e:	8b 16                	mov    edx,DWORD PTR [esi]
  42ce80:	ff 52 48             	call   DWORD PTR [edx+0x48]
  42ce83:	8b 08                	mov    ecx,DWORD PTR [eax]
  42ce85:	8b ac 24 9c 00 00 00 	mov    ebp,DWORD PTR [esp+0x9c]
  42ce8c:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  42ce90:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  42ce94:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  42ce97:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  42ce9b:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  42ce9f:	51                   	push   ecx
  42cea0:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  42cea3:	56                   	push   esi
  42cea4:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  42cea8:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  42ceac:	55                   	push   ebp
  42cead:	d8 86 20 01 00 00    	fadd   DWORD PTR [esi+0x120]
  42ceb3:	8b cf                	mov    ecx,edi
  42ceb5:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
  42ceb9:	e8 c2 f7 ff ff       	call   0x42c680
  42cebe:	84 c0                	test   al,al
  42cec0:	74 0b                	je     0x42cecd
  42cec2:	8b 94 24 ac 00 00 00 	mov    edx,DWORD PTR [esp+0xac]
  42cec9:	89 32                	mov    DWORD PTR [edx],esi
  42cecb:	eb 2f                	jmp    0x42cefc
  42cecd:	d9 86 2c 01 00 00    	fld    DWORD PTR [esi+0x12c]
  42ced3:	d8 a6 20 01 00 00    	fsub   DWORD PTR [esi+0x120]
  42ced9:	8d 44 24 30          	lea    eax,[esp+0x30]
  42cedd:	8b cf                	mov    ecx,edi
  42cedf:	50                   	push   eax
  42cee0:	56                   	push   esi
  42cee1:	d8 44 24 3c          	fadd   DWORD PTR [esp+0x3c]
  42cee5:	55                   	push   ebp
  42cee6:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
  42ceea:	e8 91 f7 ff ff       	call   0x42c680
  42ceef:	84 c0                	test   al,al
  42cef1:	74 0e                	je     0x42cf01
  42cef3:	8b 8c 24 ac 00 00 00 	mov    ecx,DWORD PTR [esp+0xac]
  42cefa:	89 31                	mov    DWORD PTR [ecx],esi
  42cefc:	c6 44 24 13 01       	mov    BYTE PTR [esp+0x13],0x1
  42cf01:	8b 1b                	mov    ebx,DWORD PTR [ebx]
  42cf03:	8b 47 3c             	mov    eax,DWORD PTR [edi+0x3c]
  42cf06:	3b d8                	cmp    ebx,eax
  42cf08:	0f 85 b7 fe ff ff    	jne    0x42cdc5
  42cf0e:	8b 94 24 ac 00 00 00 	mov    edx,DWORD PTR [esp+0xac]
  42cf15:	33 c0                	xor    eax,eax
  42cf17:	5f                   	pop    edi
  42cf18:	5e                   	pop    esi
  42cf19:	8b 0a                	mov    ecx,DWORD PTR [edx]
  42cf1b:	5d                   	pop    ebp
  42cf1c:	85 c9                	test   ecx,ecx
  42cf1e:	8b 8c 24 80 00 00 00 	mov    ecx,DWORD PTR [esp+0x80]
  42cf25:	5b                   	pop    ebx
  42cf26:	0f 95 c0             	setne  al
  42cf29:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42cf30:	81 c4 88 00 00 00    	add    esp,0x88
  42cf36:	c2 14 00             	ret    0x14
  42cf39:	90                   	nop
  42cf3a:	90                   	nop
  42cf3b:	90                   	nop
  42cf3c:	90                   	nop
  42cf3d:	90                   	nop
  42cf3e:	90                   	nop
  42cf3f:	90                   	nop
  42cf40:	6a ff                	push   0xffffffff
  42cf42:	68 08 34 62 00       	push   0x623408
  42cf47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42cf4d:	50                   	push   eax
  42cf4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42cf55:	83 ec 48             	sub    esp,0x48
  42cf58:	d9 44 24 64          	fld    DWORD PTR [esp+0x64]
  42cf5c:	d8 0d 68 c2 64 00    	fmul   DWORD PTR ds:0x64c268
  42cf62:	d9 44 24 60          	fld    DWORD PTR [esp+0x60]
  42cf66:	d9 e1                	fabs
  42cf68:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  42cf6c:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  42cf70:	53                   	push   ebx
  42cf71:	d9 c0                	fld    st(0)
  42cf73:	55                   	push   ebp
  42cf74:	56                   	push   esi
  42cf75:	d8 c9                	fmul   st,st(1)
  42cf77:	8b f1                	mov    esi,ecx
  42cf79:	8d 54 24 38          	lea    edx,[esp+0x38]
  42cf7d:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  42cf81:	33 db                	xor    ebx,ebx
  42cf83:	51                   	push   ecx
  42cf84:	52                   	push   edx
  42cf85:	d9 5c 24 74          	fstp   DWORD PTR [esp+0x74]
  42cf89:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  42cf8d:	89 18                	mov    DWORD PTR [eax],ebx
  42cf8f:	dd d8                	fstp   st(0)
  42cf91:	e8 8a f6 ff ff       	call   0x42c620
  42cf96:	8b d0                	mov    edx,eax
  42cf98:	83 c4 08             	add    esp,0x8
  42cf9b:	8b 02                	mov    eax,DWORD PTR [edx]
  42cf9d:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  42cfa0:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  42cfa3:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  42cfa7:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
  42cfaa:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  42cfae:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  42cfb2:	8b 28                	mov    ebp,DWORD PTR [eax]
  42cfb4:	3b e8                	cmp    ebp,eax
  42cfb6:	0f 84 45 01 00 00    	je     0x42d101
  42cfbc:	57                   	push   edi
  42cfbd:	39 5d 08             	cmp    DWORD PTR [ebp+0x8],ebx
  42cfc0:	0f 85 8d 00 00 00    	jne    0x42d053
  42cfc6:	8a 44 24 78          	mov    al,BYTE PTR [esp+0x78]
  42cfca:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42cfcf:	88 44 24 3c          	mov    BYTE PTR [esp+0x3c],al
  42cfd3:	83 c9 ff             	or     ecx,0xffffffff
  42cfd6:	33 c0                	xor    eax,eax
  42cfd8:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  42cfdc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42cfde:	f7 d1                	not    ecx
  42cfe0:	49                   	dec    ecx
  42cfe1:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
  42cfe5:	51                   	push   ecx
  42cfe6:	68 70 3f 6b 00       	push   0x6b3f70
  42cfeb:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  42cfef:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  42cff3:	e8 f8 70 fd ff       	call   0x4040f0
  42cff8:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  42cffc:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
  42d000:	51                   	push   ecx
  42d001:	68 81 01 00 00       	push   0x181
  42d006:	68 34 00 69 00       	push   0x690034
  42d00b:	68 2c 00 69 00       	push   0x69002c
  42d010:	e8 db 37 17 00       	call   0x5a07f0
  42d015:	ff d0                	call   eax
  42d017:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  42d01b:	83 c4 10             	add    esp,0x10
  42d01e:	3b c3                	cmp    eax,ebx
  42d020:	c7 44 24 60 ff ff ff 	mov    DWORD PTR [esp+0x60],0xffffffff
  42d027:	ff 
  42d028:	74 1d                	je     0x42d047
  42d02a:	8d 48 ff             	lea    ecx,[eax-0x1]
  42d02d:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42d030:	3a c3                	cmp    al,bl
  42d032:	74 0a                	je     0x42d03e
  42d034:	3c ff                	cmp    al,0xff
  42d036:	74 06                	je     0x42d03e
  42d038:	fe c8                	dec    al
  42d03a:	88 01                	mov    BYTE PTR [ecx],al
  42d03c:	eb 09                	jmp    0x42d047
  42d03e:	51                   	push   ecx
  42d03f:	e8 ac 15 1d 00       	call   0x5fe5f0
  42d044:	83 c4 04             	add    esp,0x4
  42d047:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  42d04b:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
  42d04f:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  42d053:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  42d056:	38 5e 7c             	cmp    BYTE PTR [esi+0x7c],bl
  42d059:	0f 84 91 00 00 00    	je     0x42d0f0
  42d05f:	8b 16                	mov    edx,DWORD PTR [esi]
  42d061:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  42d065:	50                   	push   eax
  42d066:	8b ce                	mov    ecx,esi
  42d068:	ff 52 48             	call   DWORD PTR [edx+0x48]
  42d06b:	8b 08                	mov    ecx,DWORD PTR [eax]
  42d06d:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  42d071:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  42d075:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  42d078:	51                   	push   ecx
  42d079:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  42d07d:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  42d081:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  42d084:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42d088:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  42d08c:	e8 4f 5f 18 00       	call   0x5b2fe0
  42d091:	8d 54 24 30          	lea    edx,[esp+0x30]
  42d095:	52                   	push   edx
  42d096:	e8 55 45 18 00       	call   0x5b15f0
  42d09b:	d8 6c 24 70          	fsubr  DWORD PTR [esp+0x70]
  42d09f:	83 c4 04             	add    esp,0x4
  42d0a2:	d9 e1                	fabs
  42d0a4:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42d0a8:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  42d0ae:	de d9                	fcompp
  42d0b0:	df e0                	fnstsw ax
  42d0b2:	f6 c4 01             	test   ah,0x1
  42d0b5:	75 39                	jne    0x42d0f0
  42d0b7:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  42d0bb:	e8 00 5f 18 00       	call   0x5b2fc0
  42d0c0:	d9 54 24 74          	fst    DWORD PTR [esp+0x74]
  42d0c4:	d8 5c 24 70          	fcomp  DWORD PTR [esp+0x70]
  42d0c8:	df e0                	fnstsw ax
  42d0ca:	f6 c4 01             	test   ah,0x1
  42d0cd:	74 21                	je     0x42d0f0
  42d0cf:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  42d0d3:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  42d0d7:	56                   	push   esi
  42d0d8:	50                   	push   eax
  42d0d9:	e8 12 f8 ff ff       	call   0x42c8f0
  42d0de:	84 c0                	test   al,al
  42d0e0:	74 0e                	je     0x42d0f0
  42d0e2:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
  42d0e6:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  42d0ea:	89 4c 24 70          	mov    DWORD PTR [esp+0x70],ecx
  42d0ee:	89 32                	mov    DWORD PTR [edx],esi
  42d0f0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  42d0f4:	8b 6d 00             	mov    ebp,DWORD PTR [ebp+0x0]
  42d0f7:	3b 68 30             	cmp    ebp,DWORD PTR [eax+0x30]
  42d0fa:	0f 85 bd fe ff ff    	jne    0x42cfbd
