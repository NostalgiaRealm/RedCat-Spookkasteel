  45ecf0:	83 ec 60             	sub    esp,0x60
  45ecf3:	8d 81 9c 15 00 00    	lea    eax,[ecx+0x159c]
  45ecf9:	53                   	push   ebx
  45ecfa:	55                   	push   ebp
  45ecfb:	56                   	push   esi
  45ecfc:	8b 10                	mov    edx,DWORD PTR [eax]
  45ecfe:	57                   	push   edi
  45ecff:	89 54 24 64          	mov    DWORD PTR [esp+0x64],edx
  45ed03:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
  45ed0a:	00 
  45ed0b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  45ed0e:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
  45ed12:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  45ed16:	8b 15 e8 d6 64 00    	mov    edx,DWORD PTR ds:0x64d6e8
  45ed1c:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  45ed1f:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  45ed23:	8b 15 f0 d6 64 00    	mov    edx,DWORD PTR ds:0x64d6f0
  45ed29:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
  45ed2d:	a1 ec d6 64 00       	mov    eax,ds:0x64d6ec
  45ed32:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  45ed36:	8b 15 f4 d6 64 00    	mov    edx,DWORD PTR ds:0x64d6f4
  45ed3c:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  45ed40:	a1 c8 71 6b 00       	mov    eax,ds:0x6b71c8
  45ed45:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
  45ed4c:	00 
  45ed4d:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  45ed51:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  45ed58:	00 
  45ed59:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
  45ed5d:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
  45ed64:	00 
  45ed65:	c7 44 24 5c cd cc 4c 	mov    DWORD PTR [esp+0x5c],0x3d4ccccd
  45ed6c:	3d 
  45ed6d:	c7 44 24 60 00 00 00 	mov    DWORD PTR [esp+0x60],0x0
  45ed74:	00 
  45ed75:	c7 44 24 4c 00 00 a0 	mov    DWORD PTR [esp+0x4c],0x41a00000
  45ed7c:	41 
  45ed7d:	c7 44 24 50 00 00 a0 	mov    DWORD PTR [esp+0x50],0x41a00000
  45ed84:	41 
  45ed85:	c7 44 24 54 00 00 a0 	mov    DWORD PTR [esp+0x54],0x41a00000
  45ed8c:	41 
  45ed8d:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  45ed91:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  45ed95:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  45ed9c:	00 
  45ed9d:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
  45eda4:	00 
  45eda5:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  45edac:	00 
  45edad:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  45edb4:	00 
  45edb5:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  45edbc:	00 
  45edbd:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
  45edc4:	00 
  45edc5:	8d b1 08 01 00 00    	lea    esi,[ecx+0x108]
  45edcb:	c7 44 24 10 0f 00 00 	mov    DWORD PTR [esp+0x10],0xf
  45edd2:	00 
  45edd3:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  45edd7:	6a 00                	push   0x0
  45edd9:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  45eddd:	83 ec 0c             	sub    esp,0xc
  45ede0:	8b c4                	mov    eax,esp
  45ede2:	83 ec 0c             	sub    esp,0xc
  45ede5:	89 08                	mov    DWORD PTR [eax],ecx
  45ede7:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  45edeb:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  45edee:	8b d4                	mov    edx,esp
  45edf0:	6a 01                	push   0x1
  45edf2:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  45edf5:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  45edf9:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  45edfd:	89 02                	mov    DWORD PTR [edx],eax
  45edff:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  45ee03:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  45ee06:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  45ee0a:	51                   	push   ecx
  45ee0b:	6a 00                	push   0x0
  45ee0d:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  45ee10:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
  45ee14:	6a 00                	push   0x0
  45ee16:	8b 4c 24 78          	mov    ecx,DWORD PTR [esp+0x78]
  45ee1a:	52                   	push   edx
  45ee1b:	6a 00                	push   0x0
  45ee1d:	6a 00                	push   0x0
  45ee1f:	8b 94 24 88 00 00 00 	mov    edx,DWORD PTR [esp+0x88]
  45ee26:	83 ec 0c             	sub    esp,0xc
  45ee29:	8b c4                	mov    eax,esp
  45ee2b:	6a 00                	push   0x0
  45ee2d:	89 08                	mov    DWORD PTR [eax],ecx
  45ee2f:	8b 8c 24 9c 00 00 00 	mov    ecx,DWORD PTR [esp+0x9c]
  45ee36:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  45ee39:	8b 54 24 64          	mov    edx,DWORD PTR [esp+0x64]
  45ee3d:	52                   	push   edx
  45ee3e:	8b 94 24 a4 00 00 00 	mov    edx,DWORD PTR [esp+0xa4]
  45ee45:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  45ee48:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  45ee4c:	50                   	push   eax
  45ee4d:	6a 00                	push   0x0
  45ee4f:	68 00 00 c8 42       	push   0x42c80000
  45ee54:	8b 84 24 b4 00 00 00 	mov    eax,DWORD PTR [esp+0xb4]
  45ee5b:	83 ec 0c             	sub    esp,0xc
  45ee5e:	8b cc                	mov    ecx,esp
  45ee60:	6a 01                	push   0x1
  45ee62:	6a 00                	push   0x0
  45ee64:	89 11                	mov    DWORD PTR [ecx],edx
  45ee66:	8b 94 24 cc 00 00 00 	mov    edx,DWORD PTR [esp+0xcc]
  45ee6d:	6a 00                	push   0x0
  45ee6f:	6a 00                	push   0x0
  45ee71:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  45ee74:	8b 84 24 98 00 00 00 	mov    eax,DWORD PTR [esp+0x98]
  45ee7b:	50                   	push   eax
  45ee7c:	8b 84 24 dc 00 00 00 	mov    eax,DWORD PTR [esp+0xdc]
  45ee83:	83 ec 0c             	sub    esp,0xc
  45ee86:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  45ee89:	8b cc                	mov    ecx,esp
  45ee8b:	83 ec 0c             	sub    esp,0xc
  45ee8e:	8b d4                	mov    edx,esp
  45ee90:	89 19                	mov    DWORD PTR [ecx],ebx
  45ee92:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
  45ee95:	89 69 08             	mov    DWORD PTR [ecx+0x8],ebp
  45ee98:	8b 8c 24 f8 00 00 00 	mov    ecx,DWORD PTR [esp+0xf8]
  45ee9f:	89 02                	mov    DWORD PTR [edx],eax
  45eea1:	8b 84 24 fc 00 00 00 	mov    eax,DWORD PTR [esp+0xfc]
  45eea8:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  45eeab:	8b ce                	mov    ecx,esi
  45eead:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  45eeb0:	e8 ab ec 01 00       	call   0x47db60
  45eeb5:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  45eeb9:	81 c6 5c 01 00 00    	add    esi,0x15c
  45eebf:	48                   	dec    eax
  45eec0:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  45eec4:	0f 85 09 ff ff ff    	jne    0x45edd3
  45eeca:	5f                   	pop    edi
  45eecb:	5e                   	pop    esi
  45eecc:	5d                   	pop    ebp
  45eecd:	5b                   	pop    ebx
  45eece:	83 c4 60             	add    esp,0x60
  45eed1:	c3                   	ret
  45eed2:	90                   	nop
  45eed3:	90                   	nop
  45eed4:	90                   	nop
  45eed5:	90                   	nop
  45eed6:	90                   	nop
  45eed7:	90                   	nop
  45eed8:	90                   	nop
  45eed9:	90                   	nop
  45eeda:	90                   	nop
  45eedb:	90                   	nop
  45eedc:	90                   	nop
  45eedd:	90                   	nop
  45eede:	90                   	nop
  45eedf:	90                   	nop
