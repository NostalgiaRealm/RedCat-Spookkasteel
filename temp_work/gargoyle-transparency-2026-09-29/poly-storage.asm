  5b6d60:	53                   	push   ebx
  5b6d61:	68 bc 00 00 00       	push   0xbc
  5b6d66:	e8 45 86 01 00       	call   0x5cf3b0
  5b6d6b:	8b d8                	mov    ebx,eax
  5b6d6d:	33 c9                	xor    ecx,ecx
  5b6d6f:	83 c4 04             	add    esp,0x4
  5b6d72:	3b d9                	cmp    ebx,ecx
  5b6d74:	75 04                	jne    0x5b6d7a
  5b6d76:	33 c0                	xor    eax,eax
  5b6d78:	5b                   	pop    ebx
  5b6d79:	c3                   	ret
  5b6d7a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5b6d7e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b6d82:	89 93 a0 00 00 00    	mov    DWORD PTR [ebx+0xa0],edx
  5b6d88:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5b6d8c:	89 8b b8 00 00 00    	mov    DWORD PTR [ebx+0xb8],ecx
  5b6d92:	89 8b b4 00 00 00    	mov    DWORD PTR [ebx+0xb4],ecx
  5b6d98:	89 8b b0 00 00 00    	mov    DWORD PTR [ebx+0xb0],ecx
  5b6d9e:	89 8b 94 00 00 00    	mov    DWORD PTR [ebx+0x94],ecx
  5b6da4:	8d 0c c0             	lea    ecx,[eax+eax*8]
  5b6da7:	89 93 a4 00 00 00    	mov    DWORD PTR [ebx+0xa4],edx
  5b6dad:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5b6db1:	55                   	push   ebp
  5b6db2:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
  5b6db6:	89 83 9c 00 00 00    	mov    DWORD PTR [ebx+0x9c],eax
  5b6dbc:	c1 e1 02             	shl    ecx,0x2
  5b6dbf:	56                   	push   esi
  5b6dc0:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  5b6dc4:	89 93 a8 00 00 00    	mov    DWORD PTR [ebx+0xa8],edx
  5b6dca:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  5b6dce:	8b c1                	mov    eax,ecx
  5b6dd0:	57                   	push   edi
  5b6dd1:	8d 7b 04             	lea    edi,[ebx+0x4]
  5b6dd4:	89 93 ac 00 00 00    	mov    DWORD PTR [ebx+0xac],edx
  5b6dda:	c1 e9 02             	shr    ecx,0x2
  5b6ddd:	89 2b                	mov    DWORD PTR [ebx],ebp
  5b6ddf:	53                   	push   ebx
  5b6de0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5b6de2:	8b c8                	mov    ecx,eax
  5b6de4:	55                   	push   ebp
  5b6de5:	83 e1 03             	and    ecx,0x3
  5b6de8:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5b6dea:	e8 21 00 00 00       	call   0x5b6e10
  5b6def:	8b 85 c8 0b 00 00    	mov    eax,DWORD PTR [ebp+0xbc8]
  5b6df5:	83 c4 08             	add    esp,0x8
  5b6df8:	40                   	inc    eax
  5b6df9:	5f                   	pop    edi
  5b6dfa:	89 85 c8 0b 00 00    	mov    DWORD PTR [ebp+0xbc8],eax
  5b6e00:	5e                   	pop    esi
  5b6e01:	8b c3                	mov    eax,ebx
  5b6e03:	5d                   	pop    ebp
  5b6e04:	5b                   	pop    ebx
  5b6e05:	c3                   	ret
  5b6e06:	90                   	nop
  5b6e07:	90                   	nop
  5b6e08:	90                   	nop
  5b6e09:	90                   	nop
  5b6e0a:	90                   	nop
  5b6e0b:	90                   	nop
  5b6e0c:	90                   	nop
  5b6e0d:	90                   	nop
  5b6e0e:	90                   	nop
  5b6e0f:	90                   	nop
  5b6e10:	83 ec 0c             	sub    esp,0xc
  5b6e13:	56                   	push   esi
  5b6e14:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5b6e18:	57                   	push   edi
  5b6e19:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  5b6e1d:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  5b6e20:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  5b6e23:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
  5b6e26:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  5b6e2a:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
  5b6e2d:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
  5b6e31:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5b6e35:	8d 44 24 08          	lea    eax,[esp+0x8]
  5b6e39:	8b 91 10 01 00 00    	mov    edx,DWORD PTR [ecx+0x110]
  5b6e3f:	50                   	push   eax
  5b6e40:	8b cf                	mov    ecx,edi
  5b6e42:	8b 12                	mov    edx,DWORD PTR [edx]
  5b6e44:	e8 47 a9 01 00       	call   0x5d1790
  5b6e49:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
  5b6e4c:	8d 14 40             	lea    edx,[eax+eax*2]
  5b6e4f:	8b 81 cc d5 00 00    	mov    eax,DWORD PTR [ecx+0xd5cc]
  5b6e55:	8b 4c 90 08          	mov    ecx,DWORD PTR [eax+edx*4+0x8]
  5b6e59:	85 c9                	test   ecx,ecx
  5b6e5b:	8d 04 90             	lea    eax,[eax+edx*4]
  5b6e5e:	74 06                	je     0x5b6e66
  5b6e60:	89 b1 b0 00 00 00    	mov    DWORD PTR [ecx+0xb0],esi
  5b6e66:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  5b6e69:	c7 86 b0 00 00 00 00 	mov    DWORD PTR [esi+0xb0],0x0
  5b6e70:	00 00 00 
  5b6e73:	89 8e b4 00 00 00    	mov    DWORD PTR [esi+0xb4],ecx
  5b6e79:	89 70 08             	mov    DWORD PTR [eax+0x8],esi
  5b6e7c:	89 86 94 00 00 00    	mov    DWORD PTR [esi+0x94],eax
  5b6e82:	5f                   	pop    edi
  5b6e83:	5e                   	pop    esi
  5b6e84:	83 c4 0c             	add    esp,0xc
  5b6e87:	c3                   	ret
  5b6e88:	90                   	nop
  5b6e89:	90                   	nop
  5b6e8a:	90                   	nop
  5b6e8b:	90                   	nop
  5b6e8c:	90                   	nop
  5b6e8d:	90                   	nop
  5b6e8e:	90                   	nop
  5b6e8f:	90                   	nop
  5b6e90:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5b6e94:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5b6e98:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5b6e9c:	56                   	push   esi
  5b6e9d:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5b6ea1:	50                   	push   eax
  5b6ea2:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b6ea6:	51                   	push   ecx
  5b6ea7:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5b6eab:	52                   	push   edx
  5b6eac:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5b6eb0:	50                   	push   eax
  5b6eb1:	51                   	push   ecx
  5b6eb2:	52                   	push   edx
  5b6eb3:	56                   	push   esi
  5b6eb4:	e8 a7 fe ff ff       	call   0x5b6d60
  5b6eb9:	83 c4 1c             	add    esp,0x1c
  5b6ebc:	85 c0                	test   eax,eax
  5b6ebe:	75 02                	jne    0x5b6ec2
  5b6ec0:	5e                   	pop    esi
  5b6ec1:	c3                   	ret
  5b6ec2:	8b 8e c4 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc4]
  5b6ec8:	8b 11                	mov    edx,DWORD PTR [ecx]
  5b6eca:	89 90 b8 00 00 00    	mov    DWORD PTR [eax+0xb8],edx
  5b6ed0:	8b 8e c4 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc4]
  5b6ed6:	5e                   	pop    esi
  5b6ed7:	89 01                	mov    DWORD PTR [ecx],eax
  5b6ed9:	c3                   	ret
