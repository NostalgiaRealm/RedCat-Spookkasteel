  595b30:	6a ff                	push   0xffffffff
  595b32:	68 18 3d 64 00       	push   0x643d18
  595b37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  595b3d:	50                   	push   eax
  595b3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  595b45:	83 ec 08             	sub    esp,0x8
  595b48:	56                   	push   esi
  595b49:	57                   	push   edi
  595b4a:	8b f1                	mov    esi,ecx
  595b4c:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  595b53:	00 
  595b54:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  595b58:	51                   	push   ecx
  595b59:	8b c4                	mov    eax,esp
  595b5b:	89 64 24 0c          	mov    DWORD PTR [esp+0xc],esp
  595b5f:	85 ff                	test   edi,edi
  595b61:	89 38                	mov    DWORD PTR [eax],edi
  595b63:	74 03                	je     0x595b68
  595b65:	ff 47 14             	inc    DWORD PTR [edi+0x14]
  595b68:	51                   	push   ecx
  595b69:	8d 44 24 28          	lea    eax,[esp+0x28]
  595b6d:	8b cc                	mov    ecx,esp
  595b6f:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  595b73:	50                   	push   eax
  595b74:	c6 44 24 24 02       	mov    BYTE PTR [esp+0x24],0x2
  595b79:	e8 e2 3b eb ff       	call   0x449760
  595b7e:	8b ce                	mov    ecx,esi
  595b80:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
  595b85:	e8 26 66 f0 ff       	call   0x49c1b0
  595b8a:	85 ff                	test   edi,edi
  595b8c:	74 3a                	je     0x595bc8
  595b8e:	8d 8e f4 02 00 00    	lea    ecx,[esi+0x2f4]
  595b94:	51                   	push   ecx
  595b95:	8b ce                	mov    ecx,esi
  595b97:	e8 d4 f8 ff ff       	call   0x595470
  595b9c:	8b c8                	mov    ecx,eax
  595b9e:	e8 dd 5d 00 00       	call   0x59b980
  595ba3:	8b 16                	mov    edx,DWORD PTR [esi]
  595ba5:	8b ce                	mov    ecx,esi
  595ba7:	ff 92 84 00 00 00    	call   DWORD PTR [edx+0x84]
  595bad:	6a 00                	push   0x0
  595baf:	8b ce                	mov    ecx,esi
  595bb1:	e8 ea f8 ff ff       	call   0x5954a0
  595bb6:	8b 00                	mov    eax,DWORD PTR [eax]
  595bb8:	50                   	push   eax
  595bb9:	e8 22 bc 01 00       	call   0x5b17e0
  595bbe:	d9 1c 24             	fstp   DWORD PTR [esp]
  595bc1:	8b ce                	mov    ecx,esi
  595bc3:	e8 f8 02 00 00       	call   0x595ec0
  595bc8:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  595bcc:	c6 44 24 18 00       	mov    BYTE PTR [esp+0x18],0x0
  595bd1:	85 c0                	test   eax,eax
  595bd3:	74 20                	je     0x595bf5
  595bd5:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  595bd8:	8b c8                	mov    ecx,eax
  595bda:	83 c0 14             	add    eax,0x14
  595bdd:	4e                   	dec    esi
  595bde:	8b d6                	mov    edx,esi
  595be0:	85 d2                	test   edx,edx
  595be2:	89 30                	mov    DWORD PTR [eax],esi
  595be4:	75 07                	jne    0x595bed
  595be6:	6a 00                	push   0x0
  595be8:	e8 d3 63 01 00       	call   0x5abfc0
  595bed:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
  595bf4:	00 
  595bf5:	85 ff                	test   edi,edi
  595bf7:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  595bfe:	ff 
  595bff:	74 12                	je     0x595c13
  595c01:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
  595c04:	48                   	dec    eax
  595c05:	89 47 14             	mov    DWORD PTR [edi+0x14],eax
  595c08:	75 09                	jne    0x595c13
  595c0a:	6a 00                	push   0x0
  595c0c:	8b cf                	mov    ecx,edi
  595c0e:	e8 ad 63 01 00       	call   0x5abfc0
  595c13:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  595c17:	5f                   	pop    edi
  595c18:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  595c1f:	5e                   	pop    esi
  595c20:	83 c4 14             	add    esp,0x14
  595c23:	c2 08 00             	ret    0x8
  595c26:	90                   	nop
  595c27:	90                   	nop
  595c28:	90                   	nop
  595c29:	90                   	nop
  595c2a:	90                   	nop
  595c2b:	90                   	nop
  595c2c:	90                   	nop
  595c2d:	90                   	nop
  595c2e:	90                   	nop
  595c2f:	90                   	nop
