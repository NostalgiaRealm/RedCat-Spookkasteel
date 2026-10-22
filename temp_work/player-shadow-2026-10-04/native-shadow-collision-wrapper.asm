
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00565c30 <.text+0x164c30>:
  565c30:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  565c36:	6a ff                	push   0xffffffff
  565c38:	68 38 00 64 00       	push   0x640038
  565c3d:	50                   	push   eax
  565c3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  565c45:	53                   	push   ebx
  565c46:	56                   	push   esi
  565c47:	57                   	push   edi
  565c48:	8b f1                	mov    esi,ecx
  565c4a:	33 db                	xor    ebx,ebx
  565c4c:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  565c50:	e8 4b 58 04 00       	call   0x5ab4a0
  565c55:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  565c59:	b0 01                	mov    al,0x1
  565c5b:	88 5e 14             	mov    BYTE PTR [esi+0x14],bl
  565c5e:	88 46 15             	mov    BYTE PTR [esi+0x15],al
  565c61:	88 46 16             	mov    BYTE PTR [esi+0x16],al
  565c64:	88 46 17             	mov    BYTE PTR [esi+0x17],al
  565c67:	88 46 18             	mov    BYTE PTR [esi+0x18],al
  565c6a:	88 5e 19             	mov    BYTE PTR [esi+0x19],bl
  565c6d:	88 5e 1a             	mov    BYTE PTR [esi+0x1a],bl
  565c70:	c7 46 1c ff ff ff ff 	mov    DWORD PTR [esi+0x1c],0xffffffff
  565c77:	3b d3                	cmp    edx,ebx
  565c79:	89 56 20             	mov    DWORD PTR [esi+0x20],edx
  565c7c:	74 03                	je     0x565c81
  565c7e:	ff 42 14             	inc    DWORD PTR [edx+0x14]
  565c81:	8a 44 24 1c          	mov    al,BYTE PTR [esp+0x1c]
  565c85:	8a 4c 24 1c          	mov    cl,BYTE PTR [esp+0x1c]
  565c89:	89 5e 54             	mov    DWORD PTR [esi+0x54],ebx
  565c8c:	89 5e 58             	mov    DWORD PTR [esi+0x58],ebx
  565c8f:	89 5e 5c             	mov    DWORD PTR [esi+0x5c],ebx
  565c92:	88 9e 8c 00 00 00    	mov    BYTE PTR [esi+0x8c],bl
  565c98:	c7 86 a8 00 00 00 00 	mov    DWORD PTR [esi+0xa8],0x3f800000
  565c9f:	00 80 3f 
  565ca2:	88 9e ac 00 00 00    	mov    BYTE PTR [esi+0xac],bl
  565ca8:	89 9e b0 00 00 00    	mov    DWORD PTR [esi+0xb0],ebx
  565cae:	89 9e b4 00 00 00    	mov    DWORD PTR [esi+0xb4],ebx
  565cb4:	88 86 b8 00 00 00    	mov    BYTE PTR [esi+0xb8],al
  565cba:	89 9e bc 00 00 00    	mov    DWORD PTR [esi+0xbc],ebx
  565cc0:	89 9e c0 00 00 00    	mov    DWORD PTR [esi+0xc0],ebx
  565cc6:	89 9e c4 00 00 00    	mov    DWORD PTR [esi+0xc4],ebx
  565ccc:	88 8e c8 00 00 00    	mov    BYTE PTR [esi+0xc8],cl
  565cd2:	8d 4e 3c             	lea    ecx,[esi+0x3c]
  565cd5:	89 9e cc 00 00 00    	mov    DWORD PTR [esi+0xcc],ebx
  565cdb:	89 9e d0 00 00 00    	mov    DWORD PTR [esi+0xd0],ebx
  565ce1:	89 9e d4 00 00 00    	mov    DWORD PTR [esi+0xd4],ebx
  565ce7:	33 c0                	xor    eax,eax
  565ce9:	c7 06 68 f8 64 00    	mov    DWORD PTR [esi],0x64f868
  565cef:	89 01                	mov    DWORD PTR [ecx],eax
  565cf1:	8d 7e 60             	lea    edi,[esi+0x60]
  565cf4:	3b d3                	cmp    edx,ebx
  565cf6:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  565cf9:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  565d00:	ff 
  565d01:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  565d04:	8d 4e 48             	lea    ecx,[esi+0x48]
  565d07:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
  565d0a:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  565d0d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  565d10:	8d 4e 30             	lea    ecx,[esi+0x30]
  565d13:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
  565d16:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  565d19:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  565d1c:	8d 8e 90 00 00 00    	lea    ecx,[esi+0x90]
  565d22:	89 86 90 00 00 00    	mov    DWORD PTR [esi+0x90],eax
  565d28:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  565d2b:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  565d2e:	b9 0b 00 00 00       	mov    ecx,0xb
  565d33:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  565d35:	8d 4e 24             	lea    ecx,[esi+0x24]
  565d38:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
  565d3b:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  565d3e:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  565d41:	8d 8e 9c 00 00 00    	lea    ecx,[esi+0x9c]
  565d47:	89 86 9c 00 00 00    	mov    DWORD PTR [esi+0x9c],eax
  565d4d:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  565d50:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  565d53:	74 11                	je     0x565d66
  565d55:	8b 42 14             	mov    eax,DWORD PTR [edx+0x14]
  565d58:	48                   	dec    eax
  565d59:	89 42 14             	mov    DWORD PTR [edx+0x14],eax
  565d5c:	75 08                	jne    0x565d66
  565d5e:	53                   	push   ebx
  565d5f:	8b ca                	mov    ecx,edx
  565d61:	e8 5a 62 04 00       	call   0x5abfc0
  565d66:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  565d6a:	8b c6                	mov    eax,esi
  565d6c:	5f                   	pop    edi
  565d6d:	5e                   	pop    esi
  565d6e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  565d75:	5b                   	pop    ebx
  565d76:	83 c4 0c             	add    esp,0xc
  565d79:	c2 04 00             	ret    0x4
  565d7c:	90                   	nop
  565d7d:	90                   	nop
  565d7e:	90                   	nop
  565d7f:	90                   	nop
  565d80:	56                   	push   esi
  565d81:	8b f1                	mov    esi,ecx
  565d83:	e8 18 e3 ea ff       	call   0x4140a0
  565d88:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  565d8d:	74 09                	je     0x565d98
  565d8f:	56                   	push   esi
  565d90:	e8 5b 88 09 00       	call   0x5fe5f0
  565d95:	83 c4 04             	add    esp,0x4
  565d98:	8b c6                	mov    eax,esi
  565d9a:	5e                   	pop    esi
  565d9b:	c2 04 00             	ret    0x4
  565d9e:	90                   	nop
  565d9f:	90                   	nop
  565da0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  565da4:	d9 01                	fld    DWORD PTR [ecx]
  565da6:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  565dac:	df e0                	fnstsw ax
  565dae:	f6 c4 40             	test   ah,0x40
  565db1:	74 23                	je     0x565dd6
  565db3:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
  565db6:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  565dbc:	df e0                	fnstsw ax
  565dbe:	f6 c4 40             	test   ah,0x40
  565dc1:	74 13                	je     0x565dd6
  565dc3:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
  565dc6:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  565dcc:	df e0                	fnstsw ax
  565dce:	f6 c4 40             	test   ah,0x40
  565dd1:	74 03                	je     0x565dd6
  565dd3:	33 c0                	xor    eax,eax
  565dd5:	c3                   	ret
  565dd6:	8b c1                	mov    eax,ecx
  565dd8:	c3                   	ret
  565dd9:	90                   	nop
  565dda:	90                   	nop
  565ddb:	90                   	nop
  565ddc:	90                   	nop
  565ddd:	90                   	nop
  565dde:	90                   	nop
  565ddf:	90                   	nop
  565de0:	8a 41 17             	mov    al,BYTE PTR [ecx+0x17]
  565de3:	84 c0                	test   al,al
  565de5:	75 18                	jne    0x565dff
  565de7:	8a 41 19             	mov    al,BYTE PTR [ecx+0x19]
  565dea:	84 c0                	test   al,al
  565dec:	75 11                	jne    0x565dff
  565dee:	8a 41 16             	mov    al,BYTE PTR [ecx+0x16]
  565df1:	84 c0                	test   al,al
  565df3:	75 0a                	jne    0x565dff
  565df5:	8a 41 18             	mov    al,BYTE PTR [ecx+0x18]
  565df8:	84 c0                	test   al,al
  565dfa:	75 03                	jne    0x565dff
  565dfc:	33 c0                	xor    eax,eax
  565dfe:	c3                   	ret
  565dff:	b8 01 00 00 00       	mov    eax,0x1
  565e04:	c3                   	ret
  565e05:	90                   	nop
  565e06:	90                   	nop
  565e07:	90                   	nop
  565e08:	90                   	nop
  565e09:	90                   	nop
  565e0a:	90                   	nop
  565e0b:	90                   	nop
  565e0c:	90                   	nop
  565e0d:	90                   	nop
  565e0e:	90                   	nop
  565e0f:	90                   	nop
  565e10:	83 ec 4c             	sub    esp,0x4c
  565e13:	53                   	push   ebx
  565e14:	55                   	push   ebp
  565e15:	8b e9                	mov    ebp,ecx
  565e17:	56                   	push   esi
  565e18:	57                   	push   edi
  565e19:	b9 0b 00 00 00       	mov    ecx,0xb
  565e1e:	8d 75 60             	lea    esi,[ebp+0x60]
  565e21:	33 c0                	xor    eax,eax
  565e23:	8b fe                	mov    edi,esi
  565e25:	33 d2                	xor    edx,edx
  565e27:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  565e29:	8d 85 90 00 00 00    	lea    eax,[ebp+0x90]
  565e2f:	33 c9                	xor    ecx,ecx
  565e31:	8d 5d 24             	lea    ebx,[ebp+0x24]
  565e34:	8d 7d 30             	lea    edi,[ebp+0x30]
  565e37:	89 08                	mov    DWORD PTR [eax],ecx
  565e39:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  565e3c:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  565e3f:	8d 85 9c 00 00 00    	lea    eax,[ebp+0x9c]
  565e45:	8b cb                	mov    ecx,ebx
  565e47:	89 10                	mov    DWORD PTR [eax],edx
  565e49:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  565e4c:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  565e4f:	33 c0                	xor    eax,eax
  565e51:	89 85 b0 00 00 00    	mov    DWORD PTR [ebp+0xb0],eax
  565e57:	89 85 b4 00 00 00    	mov    DWORD PTR [ebp+0xb4],eax
  565e5d:	88 85 ac 00 00 00    	mov    BYTE PTR [ebp+0xac],al
  565e63:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  565e67:	88 95 8c 00 00 00    	mov    BYTE PTR [ebp+0x8c],dl
  565e6d:	c7 85 a8 00 00 00 00 	mov    DWORD PTR [ebp+0xa8],0x3f800000
  565e74:	00 80 3f 
  565e77:	8b 10                	mov    edx,DWORD PTR [eax]
  565e79:	89 11                	mov    DWORD PTR [ecx],edx
  565e7b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  565e7e:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  565e81:	8b d7                	mov    edx,edi
  565e83:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  565e86:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  565e89:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  565e8d:	8b 01                	mov    eax,DWORD PTR [ecx]
  565e8f:	89 02                	mov    DWORD PTR [edx],eax
  565e91:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  565e94:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  565e97:	33 c0                	xor    eax,eax
  565e99:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  565e9c:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
  565ea0:	89 44 24 64          	mov    DWORD PTR [esp+0x64],eax
  565ea4:	8a 45 14             	mov    al,BYTE PTR [ebp+0x14]
  565ea7:	84 c0                	test   al,al
  565ea9:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  565eac:	74 08                	je     0x565eb6
  565eae:	c7 44 24 60 04 00 00 	mov    DWORD PTR [esp+0x60],0x4
  565eb5:	00 
  565eb6:	8a 45 15             	mov    al,BYTE PTR [ebp+0x15]
  565eb9:	84 c0                	test   al,al
  565ebb:	74 0a                	je     0x565ec7
  565ebd:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  565ec1:	0c 02                	or     al,0x2
  565ec3:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
  565ec7:	8b cd                	mov    ecx,ebp
  565ec9:	e8 12 ff ff ff       	call   0x565de0
  565ece:	8b 54 24 60          	mov    edx,DWORD PTR [esp+0x60]
  565ed2:	84 c0                	test   al,al
  565ed4:	74 03                	je     0x565ed9
  565ed6:	83 ca 01             	or     edx,0x1
  565ed9:	8a 45 17             	mov    al,BYTE PTR [ebp+0x17]
  565edc:	b9 40 00 00 00       	mov    ecx,0x40
  565ee1:	84 c0                	test   al,al
  565ee3:	75 04                	jne    0x565ee9
  565ee5:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  565ee9:	8a 45 19             	mov    al,BYTE PTR [ebp+0x19]
  565eec:	84 c0                	test   al,al
  565eee:	74 03                	je     0x565ef3
  565ef0:	83 c9 04             	or     ecx,0x4
  565ef3:	8a 45 16             	mov    al,BYTE PTR [ebp+0x16]
  565ef6:	84 c0                	test   al,al
  565ef8:	74 03                	je     0x565efd
  565efa:	83 c9 01             	or     ecx,0x1
  565efd:	8a 45 18             	mov    al,BYTE PTR [ebp+0x18]
  565f00:	84 c0                	test   al,al
  565f02:	74 03                	je     0x565f07
  565f04:	83 c9 02             	or     ecx,0x2
  565f07:	8a 45 14             	mov    al,BYTE PTR [ebp+0x14]
  565f0a:	84 c0                	test   al,al
  565f0c:	75 08                	jne    0x565f16
  565f0e:	85 d2                	test   edx,edx
  565f10:	75 04                	jne    0x565f16
  565f12:	85 c9                	test   ecx,ecx
  565f14:	74 5b                	je     0x565f71
  565f16:	80 7d 15 00          	cmp    BYTE PTR [ebp+0x15],0x0
  565f1a:	75 08                	jne    0x565f24
  565f1c:	84 c0                	test   al,al
  565f1e:	75 04                	jne    0x565f24
  565f20:	33 c0                	xor    eax,eax
  565f22:	eb 05                	jmp    0x565f29
  565f24:	b8 70 61 56 00       	mov    eax,0x566170
  565f29:	56                   	push   esi
  565f2a:	55                   	push   ebp
  565f2b:	50                   	push   eax
  565f2c:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
  565f2f:	50                   	push   eax
  565f30:	52                   	push   edx
  565f31:	51                   	push   ecx
  565f32:	57                   	push   edi
  565f33:	8d 4d 48             	lea    ecx,[ebp+0x48]
  565f36:	53                   	push   ebx
  565f37:	51                   	push   ecx
  565f38:	e8 63 fe ff ff       	call   0x565da0
  565f3d:	83 c4 04             	add    esp,0x4
  565f40:	8d 55 3c             	lea    edx,[ebp+0x3c]
  565f43:	50                   	push   eax
  565f44:	52                   	push   edx
  565f45:	e8 56 fe ff ff       	call   0x565da0
  565f4a:	83 c4 04             	add    esp,0x4
  565f4d:	8d 4d 20             	lea    ecx,[ebp+0x20]
  565f50:	50                   	push   eax
  565f51:	e8 da b4 eb ff       	call   0x421430
  565f56:	8b c8                	mov    ecx,eax
  565f58:	e8 33 6c f9 ff       	call   0x4fcb90
  565f5d:	50                   	push   eax
  565f5e:	e8 1d 1e 05 00       	call   0x5b7d80
  565f63:	83 c4 2c             	add    esp,0x2c
  565f66:	85 c0                	test   eax,eax
  565f68:	0f 95 c0             	setne  al
  565f6b:	88 85 8c 00 00 00    	mov    BYTE PTR [ebp+0x8c],al
  565f71:	8a 45 1a             	mov    al,BYTE PTR [ebp+0x1a]
  565f74:	84 c0                	test   al,al
  565f76:	0f 84 39 01 00 00    	je     0x5660b5
  565f7c:	8d 4d 20             	lea    ecx,[ebp+0x20]
  565f7f:	e8 ac b4 eb ff       	call   0x421430
  565f84:	8b 80 60 03 00 00    	mov    eax,DWORD PTR [eax+0x360]
  565f8a:	85 c0                	test   eax,eax
  565f8c:	89 44 24 64          	mov    DWORD PTR [esp+0x64],eax
  565f90:	0f 84 1f 01 00 00    	je     0x5660b5
  565f96:	8b c8                	mov    ecx,eax
  565f98:	e8 33 61 f7 ff       	call   0x4dc0d0
  565f9d:	8b c8                	mov    ecx,eax
  565f9f:	e8 7c ea fe ff       	call   0x554a20
  565fa4:	b9 06 00 00 00       	mov    ecx,0x6
  565fa9:	8b f0                	mov    esi,eax
  565fab:	8d 7c 24 44          	lea    edi,[esp+0x44]
  565faf:	8d 44 24 38          	lea    eax,[esp+0x38]
  565fb3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  565fb5:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  565fb9:	50                   	push   eax
  565fba:	8b 11                	mov    edx,DWORD PTR [ecx]
  565fbc:	ff 52 48             	call   DWORD PTR [edx+0x48]
  565fbf:	8b 08                	mov    ecx,DWORD PTR [eax]
  565fc1:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  565fc5:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  565fc9:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  565fcc:	51                   	push   ecx
  565fcd:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  565fd1:	8d 54 24 18          	lea    edx,[esp+0x18]
  565fd5:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  565fd8:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  565fdc:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  565fe0:	e8 1b d0 04 00       	call   0x5b3000
  565fe5:	8d 54 24 50          	lea    edx,[esp+0x50]
  565fe9:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  565fed:	52                   	push   edx
  565fee:	8d 54 24 18          	lea    edx,[esp+0x18]
  565ff2:	e8 09 d0 04 00       	call   0x5b3000
  565ff7:	8a 85 8c 00 00 00    	mov    al,BYTE PTR [ebp+0x8c]
  565ffd:	84 c0                	test   al,al
  565fff:	74 10                	je     0x566011
  566001:	8d 55 6c             	lea    edx,[ebp+0x6c]
  566004:	8b cb                	mov    ecx,ebx
  566006:	e8 95 d0 04 00       	call   0x5b30a0
  56600b:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  56600f:	eb 08                	jmp    0x566019
  566011:	c7 44 24 60 80 96 18 	mov    DWORD PTR [esp+0x60],0x4b189680
  566018:	4b 
  566019:	8d 44 24 10          	lea    eax,[esp+0x10]
  56601d:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  566021:	50                   	push   eax
  566022:	8d 54 24 24          	lea    edx,[esp+0x24]
  566026:	51                   	push   ecx
  566027:	8d 44 24 68          	lea    eax,[esp+0x68]
  56602b:	52                   	push   edx
  56602c:	50                   	push   eax
  56602d:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  566031:	8d 45 30             	lea    eax,[ebp+0x30]
  566034:	51                   	push   ecx
  566035:	50                   	push   eax
  566036:	8d 55 48             	lea    edx,[ebp+0x48]
  566039:	53                   	push   ebx
  56603a:	52                   	push   edx
  56603b:	e8 60 fd ff ff       	call   0x565da0
  566040:	83 c4 04             	add    esp,0x4
  566043:	50                   	push   eax
  566044:	8d 45 3c             	lea    eax,[ebp+0x3c]
  566047:	50                   	push   eax
  566048:	e8 53 fd ff ff       	call   0x565da0
  56604d:	83 c4 04             	add    esp,0x4
  566050:	50                   	push   eax
  566051:	e8 7a 5e 06 00       	call   0x5cbed0
  566056:	83 c4 24             	add    esp,0x24
  566059:	85 c0                	test   eax,eax
  56605b:	0f 95 c0             	setne  al
  56605e:	84 c0                	test   al,al
  566060:	88 85 ac 00 00 00    	mov    BYTE PTR [ebp+0xac],al
  566066:	74 4d                	je     0x5660b5
  566068:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  56606c:	8d 4d 6c             	lea    ecx,[ebp+0x6c]
  56606f:	33 c0                	xor    eax,eax
  566071:	c6 85 8c 00 00 00 01 	mov    BYTE PTR [ebp+0x8c],0x1
  566078:	89 11                	mov    DWORD PTR [ecx],edx
  56607a:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  56607e:	89 45 60             	mov    DWORD PTR [ebp+0x60],eax
  566081:	89 45 64             	mov    DWORD PTR [ebp+0x64],eax
  566084:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  566087:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  56608b:	89 45 68             	mov    DWORD PTR [ebp+0x68],eax
  56608e:	89 45 78             	mov    DWORD PTR [ebp+0x78],eax
  566091:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  566095:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  566098:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  56609c:	8d 4d 7c             	lea    ecx,[ebp+0x7c]
  56609f:	89 85 88 00 00 00    	mov    DWORD PTR [ebp+0x88],eax
  5660a5:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  5660a9:	89 11                	mov    DWORD PTR [ecx],edx
  5660ab:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  5660af:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  5660b2:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  5660b5:	8a 85 8c 00 00 00    	mov    al,BYTE PTR [ebp+0x8c]
  5660bb:	84 c0                	test   al,al
  5660bd:	0f 84 94 00 00 00    	je     0x566157
  5660c3:	8d b5 a8 00 00 00    	lea    esi,[ebp+0xa8]
  5660c9:	8d 7d 30             	lea    edi,[ebp+0x30]
  5660cc:	56                   	push   esi
  5660cd:	57                   	push   edi
  5660ce:	8d 45 60             	lea    eax,[ebp+0x60]
  5660d1:	53                   	push   ebx
  5660d2:	50                   	push   eax
  5660d3:	e8 e8 b3 04 00       	call   0x5b14c0
  5660d8:	8d 85 90 00 00 00    	lea    eax,[ebp+0x90]
  5660de:	50                   	push   eax
  5660df:	8b 06                	mov    eax,DWORD PTR [esi]
  5660e1:	50                   	push   eax
  5660e2:	6a 00                	push   0x0
  5660e4:	57                   	push   edi
  5660e5:	8d 45 60             	lea    eax,[ebp+0x60]
  5660e8:	53                   	push   ebx
  5660e9:	50                   	push   eax
  5660ea:	e8 31 b4 04 00       	call   0x5b1520
  5660ef:	d9 45 5c             	fld    DWORD PTR [ebp+0x5c]
  5660f2:	83 c4 28             	add    esp,0x28
  5660f5:	d9 54 24 60          	fst    DWORD PTR [esp+0x60]
  5660f9:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5660ff:	df e0                	fnstsw ax
  566101:	f6 c4 40             	test   ah,0x40
  566104:	75 1d                	jne    0x566123
  566106:	8b 0e                	mov    ecx,DWORD PTR [esi]
  566108:	8b 54 24 60          	mov    edx,DWORD PTR [esp+0x60]
  56610c:	8d 85 9c 00 00 00    	lea    eax,[ebp+0x9c]
  566112:	50                   	push   eax
  566113:	51                   	push   ecx
  566114:	52                   	push   edx
  566115:	57                   	push   edi
  566116:	8d 45 60             	lea    eax,[ebp+0x60]
  566119:	53                   	push   ebx
  56611a:	50                   	push   eax
  56611b:	e8 00 b4 04 00       	call   0x5b1520
  566120:	83 c4 18             	add    esp,0x18
  566123:	8b 45 68             	mov    eax,DWORD PTR [ebp+0x68]
  566126:	85 c0                	test   eax,eax
  566128:	74 13                	je     0x56613d
  56612a:	50                   	push   eax
  56612b:	e8 f0 ea fe ff       	call   0x554c20
  566130:	83 c4 04             	add    esp,0x4
  566133:	85 c0                	test   eax,eax
  566135:	74 06                	je     0x56613d
  566137:	89 85 b0 00 00 00    	mov    DWORD PTR [ebp+0xb0],eax
  56613d:	8b 45 60             	mov    eax,DWORD PTR [ebp+0x60]
  566140:	85 c0                	test   eax,eax
  566142:	74 13                	je     0x566157
  566144:	50                   	push   eax
  566145:	e8 26 a4 f6 ff       	call   0x4d0570
  56614a:	83 c4 04             	add    esp,0x4
  56614d:	85 c0                	test   eax,eax
  56614f:	74 06                	je     0x566157
  566151:	89 85 b4 00 00 00    	mov    DWORD PTR [ebp+0xb4],eax
  566157:	8a 85 8c 00 00 00    	mov    al,BYTE PTR [ebp+0x8c]
  56615d:	5f                   	pop    edi
  56615e:	5e                   	pop    esi
  56615f:	5d                   	pop    ebp
  566160:	5b                   	pop    ebx
  566161:	83 c4 4c             	add    esp,0x4c
  566164:	c2 08 00             	ret    0x8
  566167:	90                   	nop
  566168:	90                   	nop
  566169:	90                   	nop
  56616a:	90                   	nop
  56616b:	90                   	nop
  56616c:	90                   	nop
  56616d:	90                   	nop
  56616e:	90                   	nop
  56616f:	90                   	nop
  566170:	6a ff                	push   0xffffffff
  566172:	68 60 00 64 00       	push   0x640060
  566177:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  56617d:	50                   	push   eax
  56617e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  566185:	83 ec 24             	sub    esp,0x24
  566188:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  56618c:	53                   	push   ebx
  56618d:	55                   	push   ebp
  56618e:	33 ed                	xor    ebp,ebp
  566190:	56                   	push   esi
  566191:	b3 01                	mov    bl,0x1
  566193:	57                   	push   edi
  566194:	8b 7c 24 4c          	mov    edi,DWORD PTR [esp+0x4c]
  566198:	3b c5                	cmp    eax,ebp
  56619a:	88 5c 24 10          	mov    BYTE PTR [esp+0x10],bl
  56619e:	74 38                	je     0x5661d8
  5661a0:	50                   	push   eax
  5661a1:	e8 ca a3 f6 ff       	call   0x4d0570
  5661a6:	8b f0                	mov    esi,eax
  5661a8:	83 c4 04             	add    esp,0x4
  5661ab:	3b f5                	cmp    esi,ebp
  5661ad:	74 29                	je     0x5661d8
  5661af:	56                   	push   esi
  5661b0:	8b cf                	mov    ecx,edi
  5661b2:	e8 f9 03 00 00       	call   0x5665b0
  5661b7:	84 c0                	test   al,al
  5661b9:	0f 94 c3             	sete   bl
  5661bc:	84 db                	test   bl,bl
  5661be:	88 5c 24 10          	mov    BYTE PTR [esp+0x10],bl
  5661c2:	74 14                	je     0x5661d8
  5661c4:	8b 47 58             	mov    eax,DWORD PTR [edi+0x58]
  5661c7:	3b c5                	cmp    eax,ebp
  5661c9:	74 0d                	je     0x5661d8
  5661cb:	57                   	push   edi
  5661cc:	56                   	push   esi
  5661cd:	ff d0                	call   eax
  5661cf:	8a d8                	mov    bl,al
  5661d1:	83 c4 08             	add    esp,0x8
  5661d4:	88 5c 24 10          	mov    BYTE PTR [esp+0x10],bl
  5661d8:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  5661dc:	3b cd                	cmp    ecx,ebp
  5661de:	0f 84 65 01 00 00    	je     0x566349
  5661e4:	e8 d7 c3 fe ff       	call   0x5525c0
  5661e9:	8b f0                	mov    esi,eax
  5661eb:	3b f5                	cmp    esi,ebp
  5661ed:	75 6e                	jne    0x56625d
  5661ef:	8a 44 24 44          	mov    al,BYTE PTR [esp+0x44]
  5661f3:	55                   	push   ebp
  5661f4:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5661f8:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  5661fc:	e8 9f de e9 ff       	call   0x4040a0
  566201:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  566206:	83 c9 ff             	or     ecx,0xffffffff
  566209:	33 c0                	xor    eax,eax
  56620b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  56620d:	f7 d1                	not    ecx
  56620f:	49                   	dec    ecx
  566210:	51                   	push   ecx
  566211:	68 70 3f 6b 00       	push   0x6b3f70
  566216:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  56621a:	e8 d1 de e9 ff       	call   0x4040f0
  56621f:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  566223:	c7 44 24 3c 01 00 00 	mov    DWORD PTR [esp+0x3c],0x1
  56622a:	00 
  56622b:	51                   	push   ecx
  56622c:	68 a3 01 00 00       	push   0x1a3
  566231:	68 cc 4b 69 00       	push   0x694bcc
  566236:	68 70 97 69 00       	push   0x699770
  56623b:	e8 b0 a5 03 00       	call   0x5a07f0
  566240:	ff d0                	call   eax
  566242:	83 c4 10             	add    esp,0x10
  566245:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  566249:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  566250:	ff 
  566251:	6a 01                	push   0x1
  566253:	e8 48 de e9 ff       	call   0x4040a0
  566258:	e9 ec 00 00 00       	jmp    0x566349
  56625d:	8b 96 4c 01 00 00    	mov    edx,DWORD PTR [esi+0x14c]
  566263:	c1 ea 03             	shr    edx,0x3
  566266:	f6 c2 01             	test   dl,0x1
  566269:	0f 85 b1 00 00 00    	jne    0x566320
  56626f:	8a 44 24 44          	mov    al,BYTE PTR [esp+0x44]
  566273:	bf 54 21 6a 00       	mov    edi,0x6a2154
  566278:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  56627c:	83 c9 ff             	or     ecx,0xffffffff
  56627f:	33 c0                	xor    eax,eax
  566281:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  566285:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  566287:	f7 d1                	not    ecx
  566289:	49                   	dec    ecx
  56628a:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  56628e:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  566292:	8b e9                	mov    ebp,ecx
  566294:	6a 01                	push   0x1
  566296:	55                   	push   ebp
  566297:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  56629b:	e8 a0 b6 e9 ff       	call   0x401940
  5662a0:	84 c0                	test   al,al
  5662a2:	74 25                	je     0x5662c9
  5662a4:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  5662a8:	8b cd                	mov    ecx,ebp
  5662aa:	8b d1                	mov    edx,ecx
  5662ac:	be 54 21 6a 00       	mov    esi,0x6a2154
  5662b1:	c1 e9 02             	shr    ecx,0x2
  5662b4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5662b6:	8b ca                	mov    ecx,edx
  5662b8:	83 e1 03             	and    ecx,0x3
  5662bb:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5662bd:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5662c1:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  5662c5:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  5662c9:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5662cd:	c7 44 24 3c 02 00 00 	mov    DWORD PTR [esp+0x3c],0x2
  5662d4:	00 
  5662d5:	51                   	push   ecx
  5662d6:	68 0d 01 00 00       	push   0x10d
  5662db:	68 b0 3d 6a 00       	push   0x6a3db0
  5662e0:	68 d0 d2 68 00       	push   0x68d2d0
  5662e5:	e8 06 a5 03 00       	call   0x5a07f0
  5662ea:	ff d0                	call   eax
  5662ec:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  5662f0:	83 c4 10             	add    esp,0x10
  5662f3:	85 c0                	test   eax,eax
  5662f5:	74 22                	je     0x566319
  5662f7:	8d 48 ff             	lea    ecx,[eax-0x1]
  5662fa:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5662fd:	84 c0                	test   al,al
  5662ff:	74 0f                	je     0x566310
  566301:	3c ff                	cmp    al,0xff
  566303:	74 0b                	je     0x566310
  566305:	fe c8                	dec    al
  566307:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
  56630c:	88 01                	mov    BYTE PTR [ecx],al
  56630e:	eb 39                	jmp    0x566349
  566310:	51                   	push   ecx
  566311:	e8 da 82 09 00       	call   0x5fe5f0
  566316:	83 c4 04             	add    esp,0x4
  566319:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
  56631e:	eb 29                	jmp    0x566349
  566320:	56                   	push   esi
  566321:	8b cf                	mov    ecx,edi
  566323:	e8 58 00 00 00       	call   0x566380
  566328:	84 c0                	test   al,al
  56632a:	74 07                	je     0x566333
  56632c:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
  566331:	eb 16                	jmp    0x566349
  566333:	84 db                	test   bl,bl
  566335:	74 12                	je     0x566349
  566337:	8b 47 54             	mov    eax,DWORD PTR [edi+0x54]
  56633a:	3b c5                	cmp    eax,ebp
  56633c:	74 0b                	je     0x566349
  56633e:	57                   	push   edi
  56633f:	56                   	push   esi
  566340:	ff d0                	call   eax
  566342:	83 c4 08             	add    esp,0x8
  566345:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  566349:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  56634d:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  566351:	5f                   	pop    edi
  566352:	5e                   	pop    esi
  566353:	5d                   	pop    ebp
  566354:	25 ff 00 00 00       	and    eax,0xff
  566359:	5b                   	pop    ebx
  56635a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  566361:	83 c4 30             	add    esp,0x30
  566364:	c3                   	ret
  566365:	90                   	nop
  566366:	90                   	nop
  566367:	90                   	nop
  566368:	90                   	nop
  566369:	90                   	nop
  56636a:	90                   	nop
  56636b:	90                   	nop
  56636c:	90                   	nop
  56636d:	90                   	nop
  56636e:	90                   	nop
  56636f:	90                   	nop
  566370:	8b 81 b0 00 00 00    	mov    eax,DWORD PTR [ecx+0xb0]
  566376:	c3                   	ret
  566377:	90                   	nop
  566378:	90                   	nop
  566379:	90                   	nop
  56637a:	90                   	nop
  56637b:	90                   	nop
  56637c:	90                   	nop
  56637d:	90                   	nop
  56637e:	90                   	nop
  56637f:	90                   	nop
  566380:	8b 91 bc 00 00 00    	mov    edx,DWORD PTR [ecx+0xbc]
  566386:	85 d2                	test   edx,edx
  566388:	75 04                	jne    0x56638e
  56638a:	33 c0                	xor    eax,eax
  56638c:	eb 0b                	jmp    0x566399
  56638e:	8b 81 c0 00 00 00    	mov    eax,DWORD PTR [ecx+0xc0]
  566394:	2b c2                	sub    eax,edx
  566396:	c1 f8 02             	sar    eax,0x2
  566399:	33 d2                	xor    edx,edx
  56639b:	56                   	push   esi
  56639c:	85 c0                	test   eax,eax
  56639e:	7e 16                	jle    0x5663b6
  5663a0:	8b 89 bc 00 00 00    	mov    ecx,DWORD PTR [ecx+0xbc]
  5663a6:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5663aa:	3b 31                	cmp    esi,DWORD PTR [ecx]
  5663ac:	74 0e                	je     0x5663bc
  5663ae:	42                   	inc    edx
  5663af:	83 c1 04             	add    ecx,0x4
  5663b2:	3b d0                	cmp    edx,eax
  5663b4:	7c f4                	jl     0x5663aa
  5663b6:	32 c0                	xor    al,al
  5663b8:	5e                   	pop    esi
  5663b9:	c2 04 00             	ret    0x4
  5663bc:	b0 01                	mov    al,0x1
  5663be:	5e                   	pop    esi
  5663bf:	c2 04 00             	ret    0x4
  5663c2:	90                   	nop
  5663c3:	90                   	nop
  5663c4:	90                   	nop
  5663c5:	90                   	nop
  5663c6:	90                   	nop
  5663c7:	90                   	nop
  5663c8:	90                   	nop
  5663c9:	90                   	nop
  5663ca:	90                   	nop
  5663cb:	90                   	nop
  5663cc:	90                   	nop
  5663cd:	90                   	nop
  5663ce:	90                   	nop
  5663cf:	90                   	nop
  5663d0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5663d4:	83 ec 08             	sub    esp,0x8
  5663d7:	56                   	push   esi
  5663d8:	57                   	push   edi
  5663d9:	8b f1                	mov    esi,ecx
  5663db:	50                   	push   eax
  5663dc:	e8 9f ff ff ff       	call   0x566380
  5663e1:	84 c0                	test   al,al
  5663e3:	0f 85 a2 01 00 00    	jne    0x56658b
  5663e9:	8b 86 c0 00 00 00    	mov    eax,DWORD PTR [esi+0xc0]
  5663ef:	8b 8e c4 00 00 00    	mov    ecx,DWORD PTR [esi+0xc4]
  5663f5:	81 c6 b8 00 00 00    	add    esi,0xb8
  5663fb:	2b c8                	sub    ecx,eax
  5663fd:	c1 f9 02             	sar    ecx,0x2
  566400:	83 f9 01             	cmp    ecx,0x1
  566403:	8b f8                	mov    edi,eax
  566405:	0f 83 e3 00 00 00    	jae    0x5664ee
  56640b:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
  56640e:	85 d2                	test   edx,edx
  566410:	74 0c                	je     0x56641e
  566412:	8b c8                	mov    ecx,eax
  566414:	2b ca                	sub    ecx,edx
  566416:	c1 f9 02             	sar    ecx,0x2
  566419:	83 f9 01             	cmp    ecx,0x1
  56641c:	77 05                	ja     0x566423
  56641e:	b9 01 00 00 00       	mov    ecx,0x1
  566423:	85 d2                	test   edx,edx
  566425:	75 04                	jne    0x56642b
  566427:	33 c0                	xor    eax,eax
  566429:	eb 05                	jmp    0x566430
  56642b:	2b c2                	sub    eax,edx
  56642d:	c1 f8 02             	sar    eax,0x2
  566430:	03 c1                	add    eax,ecx
  566432:	85 c0                	test   eax,eax
  566434:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  566438:	7d 02                	jge    0x56643c
  56643a:	33 c0                	xor    eax,eax
  56643c:	53                   	push   ebx
  56643d:	8d 14 85 00 00 00 00 	lea    edx,[eax*4+0x0]
  566444:	55                   	push   ebp
  566445:	52                   	push   edx
  566446:	e8 6a 3c 0a 00       	call   0x60a0b5
  56644b:	8b 6e 04             	mov    ebp,DWORD PTR [esi+0x4]
  56644e:	83 c4 04             	add    esp,0x4
  566451:	3b ef                	cmp    ebp,edi
  566453:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  566457:	8b d8                	mov    ebx,eax
  566459:	74 14                	je     0x56646f
  56645b:	55                   	push   ebp
  56645c:	53                   	push   ebx
  56645d:	e8 fe a2 08 00       	call   0x5f0760
  566462:	83 c5 04             	add    ebp,0x4
  566465:	83 c4 08             	add    esp,0x8
  566468:	83 c3 04             	add    ebx,0x4
  56646b:	3b ef                	cmp    ebp,edi
  56646d:	75 ec                	jne    0x56645b
  56646f:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  566473:	8b ce                	mov    ecx,esi
  566475:	50                   	push   eax
  566476:	6a 01                	push   0x1
  566478:	53                   	push   ebx
  566479:	e8 82 0e f4 ff       	call   0x4a7300
  56647e:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  566481:	83 c3 04             	add    ebx,0x4
  566484:	53                   	push   ebx
  566485:	51                   	push   ecx
  566486:	57                   	push   edi
  566487:	8b ce                	mov    ecx,esi
  566489:	e8 62 79 f7 ff       	call   0x4dddf0
  56648e:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
  566491:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  566494:	52                   	push   edx
  566495:	50                   	push   eax
  566496:	8b ce                	mov    ecx,esi
  566498:	e8 b3 18 02 00       	call   0x587d50
  56649d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  5664a0:	51                   	push   ecx
  5664a1:	e8 4a 81 09 00       	call   0x5fe5f0
  5664a6:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5664aa:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5664ae:	83 c4 04             	add    esp,0x4
  5664b1:	8d 0c 82             	lea    ecx,[edx+eax*4]
  5664b4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  5664b7:	5d                   	pop    ebp
  5664b8:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
  5664bb:	85 c0                	test   eax,eax
  5664bd:	5b                   	pop    ebx
  5664be:	75 14                	jne    0x5664d4
  5664c0:	33 c9                	xor    ecx,ecx
  5664c2:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
  5664c5:	5f                   	pop    edi
  5664c6:	8d 44 8a 04          	lea    eax,[edx+ecx*4+0x4]
  5664ca:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  5664cd:	5e                   	pop    esi
  5664ce:	83 c4 08             	add    esp,0x8
  5664d1:	c2 04 00             	ret    0x4
  5664d4:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  5664d7:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
  5664da:	2b c8                	sub    ecx,eax
  5664dc:	5f                   	pop    edi
  5664dd:	c1 f9 02             	sar    ecx,0x2
  5664e0:	8d 44 8a 04          	lea    eax,[edx+ecx*4+0x4]
  5664e4:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  5664e7:	5e                   	pop    esi
  5664e8:	83 c4 08             	add    esp,0x8
  5664eb:	c2 04 00             	ret    0x4
  5664ee:	8b c8                	mov    ecx,eax
  5664f0:	2b cf                	sub    ecx,edi
  5664f2:	c1 f9 02             	sar    ecx,0x2
  5664f5:	83 f9 01             	cmp    ecx,0x1
  5664f8:	73 51                	jae    0x56654b
  5664fa:	8d 57 04             	lea    edx,[edi+0x4]
  5664fd:	8b ce                	mov    ecx,esi
  5664ff:	52                   	push   edx
  566500:	50                   	push   eax
  566501:	57                   	push   edi
  566502:	e8 e9 78 f7 ff       	call   0x4dddf0
  566507:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  56650a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  56650e:	8b d0                	mov    edx,eax
  566510:	51                   	push   ecx
  566511:	2b d7                	sub    edx,edi
  566513:	b9 01 00 00 00       	mov    ecx,0x1
  566518:	c1 fa 02             	sar    edx,0x2
  56651b:	2b ca                	sub    ecx,edx
  56651d:	51                   	push   ecx
  56651e:	50                   	push   eax
  56651f:	8b ce                	mov    ecx,esi
  566521:	e8 da 0d f4 ff       	call   0x4a7300
  566526:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  566529:	3b f8                	cmp    edi,eax
  56652b:	74 5a                	je     0x566587
  56652d:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  566531:	89 17                	mov    DWORD PTR [edi],edx
  566533:	83 c7 04             	add    edi,0x4
  566536:	3b f8                	cmp    edi,eax
  566538:	75 f3                	jne    0x56652d
  56653a:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  56653d:	5f                   	pop    edi
  56653e:	83 c0 04             	add    eax,0x4
  566541:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  566544:	5e                   	pop    esi
  566545:	83 c4 08             	add    esp,0x8
  566548:	c2 04 00             	ret    0x4
  56654b:	50                   	push   eax
  56654c:	50                   	push   eax
  56654d:	83 c0 fc             	add    eax,0xfffffffc
  566550:	8b ce                	mov    ecx,esi
  566552:	50                   	push   eax
  566553:	e8 98 78 f7 ff       	call   0x4dddf0
  566558:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  56655b:	8d 41 fc             	lea    eax,[ecx-0x4]
  56655e:	3b f8                	cmp    edi,eax
  566560:	74 0f                	je     0x566571
  566562:	8b 50 fc             	mov    edx,DWORD PTR [eax-0x4]
  566565:	83 e8 04             	sub    eax,0x4
  566568:	83 e9 04             	sub    ecx,0x4
  56656b:	3b c7                	cmp    eax,edi
  56656d:	89 11                	mov    DWORD PTR [ecx],edx
  56656f:	75 f1                	jne    0x566562
  566571:	8d 4f 04             	lea    ecx,[edi+0x4]
  566574:	8b c7                	mov    eax,edi
  566576:	3b f9                	cmp    edi,ecx
  566578:	74 0d                	je     0x566587
  56657a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  56657e:	89 10                	mov    DWORD PTR [eax],edx
  566580:	83 c0 04             	add    eax,0x4
  566583:	3b c1                	cmp    eax,ecx
  566585:	75 f3                	jne    0x56657a
  566587:	83 46 08 04          	add    DWORD PTR [esi+0x8],0x4
  56658b:	5f                   	pop    edi
  56658c:	5e                   	pop    esi
  56658d:	83 c4 08             	add    esp,0x8
  566590:	c2 04 00             	ret    0x4
  566593:	90                   	nop
  566594:	90                   	nop
  566595:	90                   	nop
  566596:	90                   	nop
  566597:	90                   	nop
  566598:	90                   	nop
  566599:	90                   	nop
  56659a:	90                   	nop
  56659b:	90                   	nop
  56659c:	90                   	nop
  56659d:	90                   	nop
  56659e:	90                   	nop
  56659f:	90                   	nop
  5665a0:	8b 81 b4 00 00 00    	mov    eax,DWORD PTR [ecx+0xb4]
  5665a6:	c3                   	ret
  5665a7:	90                   	nop
  5665a8:	90                   	nop
  5665a9:	90                   	nop
  5665aa:	90                   	nop
  5665ab:	90                   	nop
  5665ac:	90                   	nop
  5665ad:	90                   	nop
  5665ae:	90                   	nop
  5665af:	90                   	nop
  5665b0:	8b 91 cc 00 00 00    	mov    edx,DWORD PTR [ecx+0xcc]
  5665b6:	85 d2                	test   edx,edx
  5665b8:	75 04                	jne    0x5665be
  5665ba:	33 c0                	xor    eax,eax
  5665bc:	eb 0b                	jmp    0x5665c9
  5665be:	8b 81 d0 00 00 00    	mov    eax,DWORD PTR [ecx+0xd0]
  5665c4:	2b c2                	sub    eax,edx
  5665c6:	c1 f8 02             	sar    eax,0x2
  5665c9:	33 d2                	xor    edx,edx
  5665cb:	56                   	push   esi
  5665cc:	85 c0                	test   eax,eax
  5665ce:	7e 16                	jle    0x5665e6
  5665d0:	8b 89 cc 00 00 00    	mov    ecx,DWORD PTR [ecx+0xcc]
  5665d6:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5665da:	3b 31                	cmp    esi,DWORD PTR [ecx]
  5665dc:	74 0e                	je     0x5665ec
  5665de:	42                   	inc    edx
  5665df:	83 c1 04             	add    ecx,0x4
  5665e2:	3b d0                	cmp    edx,eax
  5665e4:	7c f4                	jl     0x5665da
  5665e6:	32 c0                	xor    al,al
  5665e8:	5e                   	pop    esi
  5665e9:	c2 04 00             	ret    0x4
  5665ec:	b0 01                	mov    al,0x1
  5665ee:	5e                   	pop    esi
  5665ef:	c2 04 00             	ret    0x4
  5665f2:	90                   	nop
  5665f3:	90                   	nop
  5665f4:	90                   	nop
  5665f5:	90                   	nop
  5665f6:	90                   	nop
  5665f7:	90                   	nop
  5665f8:	90                   	nop
  5665f9:	90                   	nop
  5665fa:	90                   	nop
  5665fb:	90                   	nop
  5665fc:	90                   	nop
  5665fd:	90                   	nop
  5665fe:	90                   	nop
  5665ff:	90                   	nop
  566600:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  566606:	b0 01                	mov    al,0x1
  566608:	84 c8                	test   al,cl
  56660a:	75 08                	jne    0x566614
  56660c:	0a c8                	or     cl,al
  56660e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  566614:	e9 07 00 00 00       	jmp    0x566620
  566619:	90                   	nop
  56661a:	90                   	nop
  56661b:	90                   	nop
  56661c:	90                   	nop
  56661d:	90                   	nop
  56661e:	90                   	nop
  56661f:	90                   	nop
  566620:	68 a0 1b 40 00       	push   0x401ba0
  566625:	e8 51 3f 0a 00       	call   0x60a57b
  56662a:	59                   	pop    ecx
  56662b:	c3                   	ret
  56662c:	90                   	nop
  56662d:	90                   	nop
  56662e:	90                   	nop
  56662f:	90                   	nop
  566630:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  566634:	e8 f7 ad eb ff       	call   0x421430
  566639:	83 c0 1c             	add    eax,0x1c
  56663c:	50                   	push   eax
  56663d:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  566641:	50                   	push   eax
  566642:	e8 e9 99 04 00       	call   0x5b0030
  566647:	83 c4 08             	add    esp,0x8
  56664a:	c3                   	ret
  56664b:	90                   	nop
  56664c:	90                   	nop
  56664d:	90                   	nop
  56664e:	90                   	nop
  56664f:	90                   	nop
  566650:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  566654:	e8 e7 01 00 00       	call   0x566840
  566659:	8b c8                	mov    ecx,eax
  56665b:	e8 c0 56 03 00       	call   0x59bd20
  566660:	50                   	push   eax
  566661:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  566665:	50                   	push   eax
  566666:	e8 c5 99 04 00       	call   0x5b0030
  56666b:	83 c4 08             	add    esp,0x8
  56666e:	c3                   	ret
  56666f:	90                   	nop
