  5b3b00:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
  5b3b03:	40                   	inc    eax
  5b3b04:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
  5b3b07:	8b 0d e0 ad 6c 00    	mov    ecx,DWORD PTR ds:0x6cade0
  5b3b0d:	41                   	inc    ecx
  5b3b0e:	89 0d e0 ad 6c 00    	mov    DWORD PTR ds:0x6cade0,ecx
  5b3b14:	c3                   	ret
  5b3b15:	90                   	nop
  5b3b16:	90                   	nop
  5b3b17:	90                   	nop
  5b3b18:	90                   	nop
  5b3b19:	90                   	nop
  5b3b1a:	90                   	nop
  5b3b1b:	90                   	nop
  5b3b1c:	90                   	nop
  5b3b1d:	90                   	nop
  5b3b1e:	90                   	nop
  5b3b1f:	90                   	nop
  5b3b20:	6a 18                	push   0x18
  5b3b22:	e8 89 b8 01 00       	call   0x5cf3b0
  5b3b27:	33 c9                	xor    ecx,ecx
  5b3b29:	83 c4 04             	add    esp,0x4
  5b3b2c:	3b c1                	cmp    eax,ecx
  5b3b2e:	75 22                	jne    0x5b3b52
  5b3b30:	51                   	push   ecx
  5b3b31:	68 70 3f 6b 00       	push   0x6b3f70
  5b3b36:	68 cf 00 00 00       	push   0xcf
  5b3b3b:	68 30 94 6a 00       	push   0x6a9430
  5b3b40:	68 70 3f 6b 00       	push   0x6b3f70
  5b3b45:	6a 6e                	push   0x6e
  5b3b47:	e8 d4 b6 01 00       	call   0x5cf220
  5b3b4c:	83 c4 18             	add    esp,0x18
  5b3b4f:	33 c0                	xor    eax,eax
  5b3b51:	c3                   	ret
  5b3b52:	89 08                	mov    DWORD PTR [eax],ecx
  5b3b54:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  5b3b57:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
  5b3b5a:	89 40 14             	mov    DWORD PTR [eax+0x14],eax
  5b3b5d:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
  5b3b60:	8b 0d dc ad 6c 00    	mov    ecx,DWORD PTR ds:0x6caddc
  5b3b66:	41                   	inc    ecx
  5b3b67:	89 0d dc ad 6c 00    	mov    DWORD PTR ds:0x6caddc,ecx
  5b3b6d:	c3                   	ret
  5b3b6e:	90                   	nop
  5b3b6f:	90                   	nop
  5b3b70:	8b 01                	mov    eax,DWORD PTR [ecx]
  5b3b72:	40                   	inc    eax
  5b3b73:	89 01                	mov    DWORD PTR [ecx],eax
  5b3b75:	8b 0d d8 ad 6c 00    	mov    ecx,DWORD PTR ds:0x6cadd8
  5b3b7b:	41                   	inc    ecx
  5b3b7c:	89 0d d8 ad 6c 00    	mov    DWORD PTR ds:0x6cadd8,ecx
  5b3b82:	c3                   	ret
  5b3b83:	90                   	nop
  5b3b84:	90                   	nop
  5b3b85:	90                   	nop
  5b3b86:	90                   	nop
  5b3b87:	90                   	nop
  5b3b88:	90                   	nop
  5b3b89:	90                   	nop
  5b3b8a:	90                   	nop
  5b3b8b:	90                   	nop
  5b3b8c:	90                   	nop
  5b3b8d:	90                   	nop
  5b3b8e:	90                   	nop
  5b3b8f:	90                   	nop
  5b3b90:	83 ec 44             	sub    esp,0x44
  5b3b93:	53                   	push   ebx
  5b3b94:	55                   	push   ebp
  5b3b95:	56                   	push   esi
  5b3b96:	57                   	push   edi
  5b3b97:	8b f9                	mov    edi,ecx
  5b3b99:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  5b3b9d:	83 3f 00             	cmp    DWORD PTR [edi],0x0
  5b3ba0:	75 2a                	jne    0x5b3bcc
  5b3ba2:	6a 00                	push   0x0
  5b3ba4:	68 70 3f 6b 00       	push   0x6b3f70
  5b3ba9:	68 ea 00 00 00       	push   0xea
  5b3bae:	68 30 94 6a 00       	push   0x6a9430
  5b3bb3:	68 70 3f 6b 00       	push   0x6b3f70
  5b3bb8:	6a ff                	push   0xffffffff
  5b3bba:	e8 61 b6 01 00       	call   0x5cf220
  5b3bbf:	83 c4 18             	add    esp,0x18
  5b3bc2:	33 c0                	xor    eax,eax
  5b3bc4:	5f                   	pop    edi
  5b3bc5:	5e                   	pop    esi
  5b3bc6:	5d                   	pop    ebp
  5b3bc7:	5b                   	pop    ebx
  5b3bc8:	83 c4 44             	add    esp,0x44
  5b3bcb:	c3                   	ret
  5b3bcc:	6a 5c                	push   0x5c
  5b3bce:	e8 dd b7 01 00       	call   0x5cf3b0
  5b3bd3:	8b f0                	mov    esi,eax
  5b3bd5:	83 c4 04             	add    esp,0x4
  5b3bd8:	85 f6                	test   esi,esi
  5b3bda:	75 29                	jne    0x5b3c05
  5b3bdc:	50                   	push   eax
  5b3bdd:	68 70 3f 6b 00       	push   0x6b3f70
  5b3be2:	68 f2 00 00 00       	push   0xf2
  5b3be7:	68 30 94 6a 00       	push   0x6a9430
  5b3bec:	68 70 3f 6b 00       	push   0x6b3f70
  5b3bf1:	6a 6e                	push   0x6e
  5b3bf3:	e8 28 b6 01 00       	call   0x5cf220
  5b3bf8:	83 c4 18             	add    esp,0x18
  5b3bfb:	33 c0                	xor    eax,eax
  5b3bfd:	5f                   	pop    edi
  5b3bfe:	5e                   	pop    esi
  5b3bff:	5d                   	pop    ebp
  5b3c00:	5b                   	pop    ebx
  5b3c01:	83 c4 44             	add    esp,0x44
  5b3c04:	c3                   	ret
  5b3c05:	8d 5e 08             	lea    ebx,[esi+0x8]
  5b3c08:	8d 6e 14             	lea    ebp,[esi+0x14]
  5b3c0b:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
  5b3c12:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
  5b3c18:	c7 45 00 00 00 00 00 	mov    DWORD PTR [ebp+0x0],0x0
  5b3c1f:	e8 4c b8 01 00       	call   0x5cf470
  5b3c24:	85 c0                	test   eax,eax
  5b3c26:	89 03                	mov    DWORD PTR [ebx],eax
  5b3c28:	75 10                	jne    0x5b3c3a
  5b3c2a:	50                   	push   eax
  5b3c2b:	68 70 3f 6b 00       	push   0x6b3f70
  5b3c30:	68 fc 00 00 00       	push   0xfc
  5b3c35:	e9 db 00 00 00       	jmp    0x5b3d15
  5b3c3a:	b9 01 00 00 00       	mov    ecx,0x1
  5b3c3f:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
  5b3c45:	89 4e 0c             	mov    DWORD PTR [esi+0xc],ecx
  5b3c48:	89 7e 10             	mov    DWORD PTR [esi+0x10],edi
  5b3c4b:	e8 f0 97 00 00       	call   0x5bd440
  5b3c50:	33 ff                	xor    edi,edi
  5b3c52:	89 45 00             	mov    DWORD PTR [ebp+0x0],eax
  5b3c55:	57                   	push   edi
  5b3c56:	57                   	push   edi
  5b3c57:	57                   	push   edi
  5b3c58:	57                   	push   edi
  5b3c59:	83 c8 ff             	or     eax,0xffffffff
  5b3c5c:	57                   	push   edi
  5b3c5d:	57                   	push   edi
  5b3c5e:	8d 4e 3c             	lea    ecx,[esi+0x3c]
  5b3c61:	89 46 30             	mov    DWORD PTR [esi+0x30],eax
  5b3c64:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
  5b3c67:	89 7e 58             	mov    DWORD PTR [esi+0x58],edi
  5b3c6a:	89 46 34             	mov    DWORD PTR [esi+0x34],eax
  5b3c6d:	e8 8e c5 01 00       	call   0x5d0200
  5b3c72:	39 7d 00             	cmp    DWORD PTR [ebp+0x0],edi
  5b3c75:	75 10                	jne    0x5b3c87
  5b3c77:	57                   	push   edi
  5b3c78:	68 70 3f 6b 00       	push   0x6b3f70
  5b3c7d:	68 0b 01 00 00       	push   0x10b
  5b3c82:	e9 8e 00 00 00       	jmp    0x5b3d15
  5b3c87:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b3c8a:	8b 08                	mov    ecx,DWORD PTR [eax]
  5b3c8c:	e8 af 34 00 00       	call   0x5b7140
  5b3c91:	85 c0                	test   eax,eax
  5b3c93:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5b3c97:	7e 42                	jle    0x5b3cdb
  5b3c99:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5b3c9d:	8d 54 24 24          	lea    edx,[esp+0x24]
  5b3ca1:	51                   	push   ecx
  5b3ca2:	8b 4e 10             	mov    ecx,DWORD PTR [esi+0x10]
  5b3ca5:	8d 44 24 14          	lea    eax,[esp+0x14]
  5b3ca9:	52                   	push   edx
  5b3caa:	8b 09                	mov    ecx,DWORD PTR [ecx]
  5b3cac:	50                   	push   eax
  5b3cad:	8b d7                	mov    edx,edi
  5b3caf:	e8 9c 34 00 00       	call   0x5b7150
  5b3cb4:	8d 54 24 20          	lea    edx,[esp+0x20]
  5b3cb8:	8d 44 24 24          	lea    eax,[esp+0x24]
  5b3cbc:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5b3cc0:	52                   	push   edx
  5b3cc1:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5b3cc5:	50                   	push   eax
  5b3cc6:	51                   	push   ecx
  5b3cc7:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  5b3cc9:	e8 f2 ba 01 00       	call   0x5cf7c0
  5b3cce:	85 c0                	test   eax,eax
  5b3cd0:	74 37                	je     0x5b3d09
  5b3cd2:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b3cd6:	47                   	inc    edi
  5b3cd7:	3b f8                	cmp    edi,eax
  5b3cd9:	7c be                	jl     0x5b3c99
  5b3cdb:	8d 4e 18             	lea    ecx,[esi+0x18]
  5b3cde:	e8 8d f3 ff ff       	call   0x5b3070
  5b3ce3:	8d 4e 24             	lea    ecx,[esi+0x24]
  5b3ce6:	e8 85 f3 ff ff       	call   0x5b3070
  5b3ceb:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5b3cef:	e8 0c fe ff ff       	call   0x5b3b00
  5b3cf4:	a1 d4 ad 6c 00       	mov    eax,ds:0x6cadd4
  5b3cf9:	40                   	inc    eax
  5b3cfa:	5f                   	pop    edi
  5b3cfb:	a3 d4 ad 6c 00       	mov    ds:0x6cadd4,eax
  5b3d00:	8b c6                	mov    eax,esi
  5b3d02:	5e                   	pop    esi
  5b3d03:	5d                   	pop    ebp
  5b3d04:	5b                   	pop    ebx
  5b3d05:	83 c4 44             	add    esp,0x44
  5b3d08:	c3                   	ret
  5b3d09:	6a 00                	push   0x0
  5b3d0b:	68 70 3f 6b 00       	push   0x6b3f70
  5b3d10:	68 1f 01 00 00       	push   0x11f
  5b3d15:	68 30 94 6a 00       	push   0x6a9430
  5b3d1a:	68 70 3f 6b 00       	push   0x6b3f70
  5b3d1f:	6a 6e                	push   0x6e
  5b3d21:	e8 fa b4 01 00       	call   0x5cf220
  5b3d26:	8b 03                	mov    eax,DWORD PTR [ebx]
  5b3d28:	83 c4 18             	add    esp,0x18
  5b3d2b:	85 c0                	test   eax,eax
  5b3d2d:	74 07                	je     0x5b3d36
  5b3d2f:	8b cb                	mov    ecx,ebx
  5b3d31:	e8 1a ba 01 00       	call   0x5cf750
  5b3d36:	83 7d 00 00          	cmp    DWORD PTR [ebp+0x0],0x0
  5b3d3a:	74 07                	je     0x5b3d43
  5b3d3c:	8b cd                	mov    ecx,ebp
  5b3d3e:	e8 bd 97 00 00       	call   0x5bd500
  5b3d43:	56                   	push   esi
  5b3d44:	e8 b7 b6 01 00       	call   0x5cf400
  5b3d49:	83 c4 04             	add    esp,0x4
  5b3d4c:	c7 05 c0 03 72 00 00 	mov    DWORD PTR ds:0x7203c0,0x0
  5b3d53:	00 00 00 
  5b3d56:	33 c0                	xor    eax,eax
  5b3d58:	5f                   	pop    edi
  5b3d59:	5e                   	pop    esi
  5b3d5a:	5d                   	pop    ebp
  5b3d5b:	5b                   	pop    ebx
  5b3d5c:	83 c4 44             	add    esp,0x44
  5b3d5f:	c3                   	ret
  5b3d60:	55                   	push   ebp
  5b3d61:	8b e9                	mov    ebp,ecx
  5b3d63:	56                   	push   esi
  5b3d64:	57                   	push   edi
  5b3d65:	8b 75 00             	mov    esi,DWORD PTR [ebp+0x0]
  5b3d68:	33 ff                	xor    edi,edi
  5b3d6a:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b3d6d:	3b c7                	cmp    eax,edi
  5b3d6f:	7e 15                	jle    0x5b3d86
  5b3d71:	48                   	dec    eax
  5b3d72:	5f                   	pop    edi
  5b3d73:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5b3d76:	a1 e0 ad 6c 00       	mov    eax,ds:0x6cade0
  5b3d7b:	48                   	dec    eax
  5b3d7c:	5e                   	pop    esi
  5b3d7d:	a3 e0 ad 6c 00       	mov    ds:0x6cade0,eax
  5b3d82:	33 c0                	xor    eax,eax
  5b3d84:	5d                   	pop    ebp
  5b3d85:	c3                   	ret
  5b3d86:	39 3e                	cmp    DWORD PTR [esi],edi
  5b3d88:	74 09                	je     0x5b3d93
  5b3d8a:	8b ce                	mov    ecx,esi
  5b3d8c:	e8 9f 33 00 00       	call   0x5b7130
  5b3d91:	89 3e                	mov    DWORD PTR [esi],edi
  5b3d93:	39 7e 0c             	cmp    DWORD PTR [esi+0xc],edi
  5b3d96:	74 41                	je     0x5b3dd9
  5b3d98:	39 7e 08             	cmp    DWORD PTR [esi+0x8],edi
  5b3d9b:	7e 27                	jle    0x5b3dc4
  5b3d9d:	53                   	push   ebx
  5b3d9e:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
  5b3da1:	8d 1c bd 00 00 00 00 	lea    ebx,[edi*4+0x0]
  5b3da8:	03 cb                	add    ecx,ebx
  5b3daa:	e8 51 97 00 00       	call   0x5bd500
  5b3daf:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  5b3db2:	47                   	inc    edi
  5b3db3:	c7 04 18 00 00 00 00 	mov    DWORD PTR [eax+ebx*1],0x0
  5b3dba:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5b3dbd:	3b f8                	cmp    edi,eax
  5b3dbf:	7c dd                	jl     0x5b3d9e
  5b3dc1:	33 ff                	xor    edi,edi
  5b3dc3:	5b                   	pop    ebx
  5b3dc4:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
  5b3dc7:	51                   	push   ecx
  5b3dc8:	e8 33 b6 01 00       	call   0x5cf400
  5b3dcd:	89 3d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,edi
  5b3dd3:	83 c4 04             	add    esp,0x4
  5b3dd6:	89 7e 0c             	mov    DWORD PTR [esi+0xc],edi
  5b3dd9:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
  5b3ddc:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  5b3ddf:	52                   	push   edx
  5b3de0:	e8 1b b6 01 00       	call   0x5cf400
  5b3de5:	89 3d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,edi
  5b3deb:	89 7d 00             	mov    DWORD PTR [ebp+0x0],edi
  5b3dee:	a1 dc ad 6c 00       	mov    eax,ds:0x6caddc
  5b3df3:	83 c4 04             	add    esp,0x4
  5b3df6:	48                   	dec    eax
  5b3df7:	5f                   	pop    edi
  5b3df8:	a3 dc ad 6c 00       	mov    ds:0x6caddc,eax
  5b3dfd:	5e                   	pop    esi
  5b3dfe:	b8 01 00 00 00       	mov    eax,0x1
  5b3e03:	5d                   	pop    ebp
  5b3e04:	c3                   	ret
  5b3e05:	90                   	nop
  5b3e06:	90                   	nop
  5b3e07:	90                   	nop
  5b3e08:	90                   	nop
  5b3e09:	90                   	nop
  5b3e0a:	90                   	nop
  5b3e0b:	90                   	nop
  5b3e0c:	90                   	nop
  5b3e0d:	90                   	nop
  5b3e0e:	90                   	nop
  5b3e0f:	90                   	nop
  5b3e10:	53                   	push   ebx
  5b3e11:	8b d9                	mov    ebx,ecx
  5b3e13:	56                   	push   esi
  5b3e14:	8b 33                	mov    esi,DWORD PTR [ebx]
  5b3e16:	8b 06                	mov    eax,DWORD PTR [esi]
  5b3e18:	85 c0                	test   eax,eax
  5b3e1a:	7e 11                	jle    0x5b3e2d
  5b3e1c:	48                   	dec    eax
  5b3e1d:	89 06                	mov    DWORD PTR [esi],eax
  5b3e1f:	a1 d8 ad 6c 00       	mov    eax,ds:0x6cadd8
  5b3e24:	48                   	dec    eax
  5b3e25:	5e                   	pop    esi
  5b3e26:	a3 d8 ad 6c 00       	mov    ds:0x6cadd8,eax
  5b3e2b:	5b                   	pop    ebx
  5b3e2c:	c3                   	ret
  5b3e2d:	57                   	push   edi
  5b3e2e:	8d 4e 10             	lea    ecx,[esi+0x10]
  5b3e31:	e8 2a ff ff ff       	call   0x5b3d60
  5b3e36:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  5b3e39:	8d 7e 04             	lea    edi,[esi+0x4]
  5b3e3c:	85 c0                	test   eax,eax
  5b3e3e:	74 0d                	je     0x5b3e4d
  5b3e40:	8b cf                	mov    ecx,edi
  5b3e42:	e8 69 99 01 00       	call   0x5cd7b0
  5b3e47:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
  5b3e4d:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5b3e50:	8d 7e 08             	lea    edi,[esi+0x8]
  5b3e53:	85 c0                	test   eax,eax
  5b3e55:	74 0d                	je     0x5b3e64
  5b3e57:	8b cf                	mov    ecx,edi
  5b3e59:	e8 f2 b8 01 00       	call   0x5cf750
  5b3e5e:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
  5b3e64:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  5b3e67:	83 c6 14             	add    esi,0x14
  5b3e6a:	85 c0                	test   eax,eax
  5b3e6c:	5f                   	pop    edi
  5b3e6d:	74 0d                	je     0x5b3e7c
  5b3e6f:	8b ce                	mov    ecx,esi
  5b3e71:	e8 8a 96 00 00       	call   0x5bd500
  5b3e76:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
  5b3e7c:	8b 03                	mov    eax,DWORD PTR [ebx]
  5b3e7e:	50                   	push   eax
  5b3e7f:	e8 7c b5 01 00       	call   0x5cf400
  5b3e84:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
  5b3e8a:	a1 d4 ad 6c 00       	mov    eax,ds:0x6cadd4
  5b3e8f:	83 c4 04             	add    esp,0x4
  5b3e92:	48                   	dec    eax
  5b3e93:	c7 05 c0 03 72 00 00 	mov    DWORD PTR ds:0x7203c0,0x0
  5b3e9a:	00 00 00 
  5b3e9d:	a3 d4 ad 6c 00       	mov    ds:0x6cadd4,eax
  5b3ea2:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
  5b3ea8:	5e                   	pop    esi
  5b3ea9:	5b                   	pop    ebx
  5b3eaa:	c3                   	ret
  5b3eab:	90                   	nop
  5b3eac:	90                   	nop
  5b3ead:	90                   	nop
  5b3eae:	90                   	nop
  5b3eaf:	90                   	nop
  5b3eb0:	56                   	push   esi
  5b3eb1:	8b f1                	mov    esi,ecx
  5b3eb3:	57                   	push   edi
  5b3eb4:	8b fa                	mov    edi,edx
  5b3eb6:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b3eb9:	85 c0                	test   eax,eax
  5b3ebb:	7e 25                	jle    0x5b3ee2
  5b3ebd:	6a 00                	push   0x0
  5b3ebf:	68 70 3f 6b 00       	push   0x6b3f70
  5b3ec4:	68 8d 01 00 00       	push   0x18d
  5b3ec9:	68 30 94 6a 00       	push   0x6a9430
  5b3ece:	68 70 3f 6b 00       	push   0x6b3f70
  5b3ed3:	6a ff                	push   0xffffffff
  5b3ed5:	e8 46 b3 01 00       	call   0x5cf220
  5b3eda:	83 c4 18             	add    esp,0x18
  5b3edd:	33 c0                	xor    eax,eax
  5b3edf:	5f                   	pop    edi
