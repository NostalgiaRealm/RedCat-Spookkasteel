  49bb70:	56                   	push   esi
  49bb71:	8b f1                	mov    esi,ecx
  49bb73:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  49bb77:	6a 01                	push   0x1
  49bb79:	8d 86 8c 01 00 00    	lea    eax,[esi+0x18c]
  49bb7f:	8b 11                	mov    edx,DWORD PTR [ecx]
  49bb81:	89 10                	mov    DWORD PTR [eax],edx
  49bb83:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  49bb86:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  49bb89:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  49bb8c:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  49bb8f:	8b ce                	mov    ecx,esi
  49bb91:	e8 4a 1a 00 00       	call   0x49d5e0
  49bb96:	8d 96 68 01 00 00    	lea    edx,[esi+0x168]
  49bb9c:	8b ce                	mov    ecx,esi
  49bb9e:	52                   	push   edx
  49bb9f:	c6 86 98 01 00 00 01 	mov    BYTE PTR [esi+0x198],0x1
  49bba6:	e8 35 8c f8 ff       	call   0x4247e0
  49bbab:	8b c8                	mov    ecx,eax
  49bbad:	33 d2                	xor    edx,edx
  49bbaf:	e8 ec 94 11 00       	call   0x5b50a0
  49bbb4:	6a 00                	push   0x0
  49bbb6:	8b ce                	mov    ecx,esi
  49bbb8:	e8 e3 7b f9 ff       	call   0x4337a0
  49bbbd:	5e                   	pop    esi
  49bbbe:	c2 04 00             	ret    0x4
