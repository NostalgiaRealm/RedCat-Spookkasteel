
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00554b00 <.text+0x153b00>:
  554b00:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  554b04:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  554b08:	6a 00                	push   0x0
  554b0a:	6a 00                	push   0x0
  554b0c:	50                   	push   eax
  554b0d:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  554b11:	52                   	push   edx
  554b12:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  554b16:	50                   	push   eax
  554b17:	52                   	push   edx
  554b18:	e8 03 00 00 00       	call   0x554b20
  554b1d:	c2 10 00             	ret    0x10
  554b20:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  554b24:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  554b28:	50                   	push   eax
  554b29:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  554b2d:	52                   	push   edx
  554b2e:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  554b32:	50                   	push   eax
  554b33:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  554b37:	52                   	push   edx
  554b38:	8d 51 10             	lea    edx,[ecx+0x10]
  554b3b:	50                   	push   eax
  554b3c:	52                   	push   edx
  554b3d:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  554b41:	8d 41 04             	lea    eax,[ecx+0x4]
  554b44:	50                   	push   eax
  554b45:	52                   	push   edx
  554b46:	e8 15 fb ff ff       	call   0x554660
  554b4b:	50                   	push   eax
  554b4c:	e8 6f 32 06 00       	call   0x5b7dc0
  554b51:	83 c4 24             	add    esp,0x24
  554b54:	f7 d8                	neg    eax
  554b56:	1b c0                	sbb    eax,eax
  554b58:	f7 d8                	neg    eax
  554b5a:	c2 18 00             	ret    0x18
  554b5d:	90                   	nop
  554b5e:	90                   	nop
  554b5f:	90                   	nop
  554b60:	83 ec 14             	sub    esp,0x14
  554b63:	56                   	push   esi
  554b64:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  554b68:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
  554b6c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  554b6f:	85 c0                	test   eax,eax
  554b71:	74 18                	je     0x554b8b
  554b73:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  554b76:	2b c8                	sub    ecx,eax
  554b78:	f7 c1 fc ff ff ff    	test   ecx,0xfffffffc
  554b7e:	7e 0b                	jle    0x554b8b
  554b80:	6a 00                	push   0x0
  554b82:	8b ce                	mov    ecx,esi
  554b84:	e8 77 06 00 00       	call   0x555200
  554b89:	eb e1                	jmp    0x554b6c
  554b8b:	53                   	push   ebx
  554b8c:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
  554b90:	55                   	push   ebp
  554b91:	8b 6c 24 2c          	mov    ebp,DWORD PTR [esp+0x2c]
  554b95:	57                   	push   edi
  554b96:	8d 7b 10             	lea    edi,[ebx+0x10]
  554b99:	83 c3 04             	add    ebx,0x4
  554b9c:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  554ba0:	8d 54 24 14          	lea    edx,[esp+0x14]
  554ba4:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  554ba8:	52                   	push   edx
  554ba9:	56                   	push   esi
  554baa:	68 d0 4d 55 00       	push   0x554dd0
  554baf:	55                   	push   ebp
  554bb0:	6a 04                	push   0x4
  554bb2:	57                   	push   edi
  554bb3:	53                   	push   ebx
  554bb4:	50                   	push   eax
  554bb5:	e8 a6 fa ff ff       	call   0x554660
  554bba:	50                   	push   eax
  554bbb:	e8 00 32 06 00       	call   0x5b7dc0
  554bc0:	83 c4 24             	add    esp,0x24
  554bc3:	85 c0                	test   eax,eax
  554bc5:	0f 95 c0             	setne  al
  554bc8:	84 c0                	test   al,al
  554bca:	74 25                	je     0x554bf1
  554bcc:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  554bd0:	51                   	push   ecx
  554bd1:	e8 4a 00 00 00       	call   0x554c20
  554bd6:	83 c4 04             	add    esp,0x4
  554bd9:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  554bdd:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  554be1:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  554be4:	52                   	push   edx
  554be5:	6a 01                	push   0x1
  554be7:	50                   	push   eax
  554be8:	8b ce                	mov    ecx,esi
  554bea:	e8 01 84 fe ff       	call   0x53cff0
  554bef:	eb ab                	jmp    0x554b9c
  554bf1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  554bf4:	5f                   	pop    edi
  554bf5:	5d                   	pop    ebp
  554bf6:	5b                   	pop    ebx
  554bf7:	85 c0                	test   eax,eax
  554bf9:	75 0e                	jne    0x554c09
  554bfb:	33 f6                	xor    esi,esi
  554bfd:	85 f6                	test   esi,esi
  554bff:	0f 9f c0             	setg   al
  554c02:	5e                   	pop    esi
  554c03:	83 c4 14             	add    esp,0x14
  554c06:	c2 0c 00             	ret    0xc
  554c09:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
  554c0c:	2b f0                	sub    esi,eax
  554c0e:	33 c0                	xor    eax,eax
  554c10:	c1 fe 02             	sar    esi,0x2
  554c13:	85 f6                	test   esi,esi
  554c15:	0f 9f c0             	setg   al
  554c18:	5e                   	pop    esi
  554c19:	83 c4 14             	add    esp,0x14
  554c1c:	c2 0c 00             	ret    0xc
  554c1f:	90                   	nop
  554c20:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  554c26:	6a ff                	push   0xffffffff
  554c28:	68 c0 e4 63 00       	push   0x63e4c0
  554c2d:	50                   	push   eax
  554c2e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  554c32:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  554c39:	83 ec 20             	sub    esp,0x20
  554c3c:	53                   	push   ebx
  554c3d:	33 db                	xor    ebx,ebx
  554c3f:	55                   	push   ebp
  554c40:	56                   	push   esi
  554c41:	3b c3                	cmp    eax,ebx
  554c43:	57                   	push   edi
  554c44:	0f 85 a7 00 00 00    	jne    0x554cf1
  554c4a:	8a 44 24 40          	mov    al,BYTE PTR [esp+0x40]
  554c4e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  554c53:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  554c57:	83 c9 ff             	or     ecx,0xffffffff
  554c5a:	33 c0                	xor    eax,eax
  554c5c:	6a 01                	push   0x1
  554c5e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  554c60:	f7 d1                	not    ecx
  554c62:	49                   	dec    ecx
  554c63:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  554c67:	8b e9                	mov    ebp,ecx
  554c69:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  554c6d:	55                   	push   ebp
  554c6e:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  554c72:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  554c76:	e8 c5 cc ea ff       	call   0x401940
  554c7b:	84 c0                	test   al,al
  554c7d:	74 23                	je     0x554ca2
  554c7f:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  554c83:	8b cd                	mov    ecx,ebp
  554c85:	8b d1                	mov    edx,ecx
  554c87:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  554c8c:	c1 e9 02             	shr    ecx,0x2
  554c8f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  554c91:	8b ca                	mov    ecx,edx
  554c93:	55                   	push   ebp
  554c94:	83 e1 03             	and    ecx,0x3
  554c97:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  554c99:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  554c9d:	e8 ee f4 ea ff       	call   0x404190
  554ca2:	8d 44 24 10          	lea    eax,[esp+0x10]
  554ca6:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  554caa:	50                   	push   eax
  554cab:	68 a1 01 00 00       	push   0x1a1
  554cb0:	68 cc 4b 69 00       	push   0x694bcc
  554cb5:	68 80 97 69 00       	push   0x699780
  554cba:	e8 31 bb 04 00       	call   0x5a07f0
  554cbf:	ff d0                	call   eax
  554cc1:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  554cc5:	83 c4 10             	add    esp,0x10
  554cc8:	3b c3                	cmp    eax,ebx
  554cca:	c7 44 24 38 ff ff ff 	mov    DWORD PTR [esp+0x38],0xffffffff
  554cd1:	ff 
  554cd2:	74 1d                	je     0x554cf1
  554cd4:	8d 48 ff             	lea    ecx,[eax-0x1]
  554cd7:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  554cda:	3a c3                	cmp    al,bl
  554cdc:	74 0a                	je     0x554ce8
  554cde:	3c ff                	cmp    al,0xff
  554ce0:	74 06                	je     0x554ce8
  554ce2:	fe c8                	dec    al
  554ce4:	88 01                	mov    BYTE PTR [ecx],al
  554ce6:	eb 09                	jmp    0x554cf1
  554ce8:	51                   	push   ecx
  554ce9:	e8 02 99 0a 00       	call   0x5fe5f0
  554cee:	83 c4 04             	add    esp,0x4
  554cf1:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  554cf5:	e8 c6 d8 ff ff       	call   0x5525c0
  554cfa:	8b f0                	mov    esi,eax
  554cfc:	3b f3                	cmp    esi,ebx
  554cfe:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  554d02:	0f 85 a5 00 00 00    	jne    0x554dad
  554d08:	8a 4c 24 40          	mov    cl,BYTE PTR [esp+0x40]
  554d0c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  554d11:	88 4c 24 20          	mov    BYTE PTR [esp+0x20],cl
  554d15:	83 c9 ff             	or     ecx,0xffffffff
  554d18:	33 c0                	xor    eax,eax
  554d1a:	6a 01                	push   0x1
  554d1c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  554d1e:	f7 d1                	not    ecx
  554d20:	49                   	dec    ecx
  554d21:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  554d25:	8b e9                	mov    ebp,ecx
  554d27:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  554d2b:	55                   	push   ebp
  554d2c:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  554d30:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  554d34:	e8 07 cc ea ff       	call   0x401940
  554d39:	84 c0                	test   al,al
  554d3b:	74 27                	je     0x554d64
  554d3d:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  554d41:	8b cd                	mov    ecx,ebp
  554d43:	8b d1                	mov    edx,ecx
  554d45:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  554d4a:	c1 e9 02             	shr    ecx,0x2
  554d4d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  554d4f:	8b ca                	mov    ecx,edx
  554d51:	55                   	push   ebp
  554d52:	83 e1 03             	and    ecx,0x3
  554d55:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  554d57:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  554d5b:	e8 30 f4 ea ff       	call   0x404190
  554d60:	8b 74 24 40          	mov    esi,DWORD PTR [esp+0x40]
  554d64:	8d 44 24 20          	lea    eax,[esp+0x20]
  554d68:	c7 44 24 38 01 00 00 	mov    DWORD PTR [esp+0x38],0x1
  554d6f:	00 
  554d70:	50                   	push   eax
  554d71:	68 a3 01 00 00       	push   0x1a3
  554d76:	68 cc 4b 69 00       	push   0x694bcc
  554d7b:	68 70 97 69 00       	push   0x699770
  554d80:	e8 6b ba 04 00       	call   0x5a07f0
  554d85:	ff d0                	call   eax
  554d87:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  554d8b:	83 c4 10             	add    esp,0x10
  554d8e:	3b cb                	cmp    ecx,ebx
  554d90:	74 1b                	je     0x554dad
  554d92:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  554d95:	49                   	dec    ecx
  554d96:	3a c3                	cmp    al,bl
  554d98:	74 0a                	je     0x554da4
  554d9a:	3c ff                	cmp    al,0xff
  554d9c:	74 06                	je     0x554da4
  554d9e:	fe c8                	dec    al
  554da0:	88 01                	mov    BYTE PTR [ecx],al
  554da2:	eb 09                	jmp    0x554dad
  554da4:	51                   	push   ecx
  554da5:	e8 46 98 0a 00       	call   0x5fe5f0
  554daa:	83 c4 04             	add    esp,0x4
  554dad:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  554db1:	8b c6                	mov    eax,esi
  554db3:	5f                   	pop    edi
  554db4:	5e                   	pop    esi
  554db5:	5d                   	pop    ebp
  554db6:	5b                   	pop    ebx
  554db7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  554dbe:	83                   	.byte 0x83
  554dbf:	c4                   	.byte 0xc4
