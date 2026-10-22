  595c30:	53                   	push   ebx
  595c31:	55                   	push   ebp
  595c32:	8b 6c 24 10          	mov    ebp,DWORD PTR [esp+0x10]
  595c36:	56                   	push   esi
  595c37:	57                   	push   edi
  595c38:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  595c3c:	55                   	push   ebp
  595c3d:	8b f1                	mov    esi,ecx
  595c3f:	57                   	push   edi
  595c40:	e8 4b 7c f0 ff       	call   0x49d890
  595c45:	8d 9e 08 03 00 00    	lea    ebx,[esi+0x308]
  595c4b:	8b cb                	mov    ecx,ebx
  595c4d:	e8 be 09 00 00       	call   0x596610
  595c52:	84 c0                	test   al,al
  595c54:	74 11                	je     0x595c67
  595c56:	57                   	push   edi
  595c57:	55                   	push   ebp
  595c58:	8b cb                	mov    ecx,ebx
  595c5a:	e8 a1 0e 00 00       	call   0x596b00
  595c5f:	57                   	push   edi
  595c60:	8b ce                	mov    ecx,esi
  595c62:	e8 e9 04 00 00       	call   0x596150
  595c67:	8b 8e 04 03 00 00    	mov    ecx,DWORD PTR [esi+0x304]
  595c6d:	85 c9                	test   ecx,ecx
  595c6f:	74 07                	je     0x595c78
  595c71:	57                   	push   edi
  595c72:	55                   	push   ebp
  595c73:	e8 88 ec ff ff       	call   0x594900
  595c78:	5f                   	pop    edi
  595c79:	5e                   	pop    esi
  595c7a:	5d                   	pop    ebp
  595c7b:	5b                   	pop    ebx
  595c7c:	c2 08 00             	ret    0x8
  595c7f:	90                   	nop
