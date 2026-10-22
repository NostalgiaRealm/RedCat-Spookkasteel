  595c80:	51                   	push   ecx
  595c81:	56                   	push   esi
  595c82:	57                   	push   edi
  595c83:	8b f1                	mov    esi,ecx
  595c85:	33 ff                	xor    edi,edi
  595c87:	e8 04 04 00 00       	call   0x596090
  595c8c:	8b c8                	mov    ecx,eax
  595c8e:	e8 ad 11 00 00       	call   0x596e40
  595c93:	83 38 00             	cmp    DWORD PTR [eax],0x0
  595c96:	74 2c                	je     0x595cc4
  595c98:	8b ce                	mov    ecx,esi
  595c9a:	e8 f1 03 00 00       	call   0x596090
  595c9f:	8b c8                	mov    ecx,eax
  595ca1:	e8 9a 11 00 00       	call   0x596e40
  595ca6:	8b 00                	mov    eax,DWORD PTR [eax]
  595ca8:	51                   	push   ecx
  595ca9:	8b cc                	mov    ecx,esp
  595cab:	89 64 24 0c          	mov    DWORD PTR [esp+0xc],esp
  595caf:	85 c0                	test   eax,eax
  595cb1:	89 01                	mov    DWORD PTR [ecx],eax
  595cb3:	74 03                	je     0x595cb8
  595cb5:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  595cb8:	e8 a3 53 e7 ff       	call   0x40b060
  595cbd:	83 c4 04             	add    esp,0x4
  595cc0:	5f                   	pop    edi
  595cc1:	5e                   	pop    esi
  595cc2:	59                   	pop    ecx
  595cc3:	c3                   	ret
  595cc4:	8b c7                	mov    eax,edi
  595cc6:	5f                   	pop    edi
  595cc7:	5e                   	pop    esi
  595cc8:	59                   	pop    ecx
  595cc9:	c3                   	ret
  595cca:	90                   	nop
  595ccb:	90                   	nop
  595ccc:	90                   	nop
  595ccd:	90                   	nop
  595cce:	90                   	nop
  595ccf:	90                   	nop
  595cd0:	83 ec 18             	sub    esp,0x18
  595cd3:	56                   	push   esi
  595cd4:	8b f1                	mov    esi,ecx
  595cd6:	8d 4c 24 04          	lea    ecx,[esp+0x4]
  595cda:	e8 91 d3 01 00       	call   0x5b3070
  595cdf:	8b ce                	mov    ecx,esi
  595ce1:	e8 9a ff ff ff       	call   0x595c80
  595ce6:	85 c0                	test   eax,eax
  595ce8:	74 25                	je     0x595d0f
  595cea:	8b ce                	mov    ecx,esi
  595cec:	e8 8f ff ff ff       	call   0x595c80
  595cf1:	8b 10                	mov    edx,DWORD PTR [eax]
  595cf3:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  595cf7:	51                   	push   ecx
  595cf8:	8b c8                	mov    ecx,eax
  595cfa:	ff 52 48             	call   DWORD PTR [edx+0x48]
  595cfd:	8b 10                	mov    edx,DWORD PTR [eax]
  595cff:	89 54 24 04          	mov    DWORD PTR [esp+0x4],edx
  595d03:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  595d06:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  595d0a:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
  595d0d:	eb 04                	jmp    0x595d13
  595d0f:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  595d13:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  595d17:	8b 74 24 04          	mov    esi,DWORD PTR [esp+0x4]
  595d1b:	8b d0                	mov    edx,eax
  595d1d:	89 32                	mov    DWORD PTR [edx],esi
  595d1f:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  595d23:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
  595d26:	5e                   	pop    esi
  595d27:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  595d2a:	83 c4 18             	add    esp,0x18
  595d2d:	c2 04 00             	ret    0x4
