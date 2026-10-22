  5b8e83:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  5b8e87:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  5b8e8b:	50                   	push   eax
  5b8e8c:	57                   	push   edi
  5b8e8d:	8b 14 8e             	mov    edx,DWORD PTR [esi+ecx*4]
  5b8e90:	52                   	push   edx
  5b8e91:	e8 2a fe ff ff       	call   0x5b8cc0
  5b8e96:	8b 0d 20 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc420
  5b8e9c:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b8e9f:	83 c4 0c             	add    esp,0xc
  5b8ea2:	8b 51 64             	mov    edx,DWORD PTR [ecx+0x64]
  5b8ea5:	8d 04 80             	lea    eax,[eax+eax*4]
  5b8ea8:	68 f8 28 72 00       	push   0x7228f8
  5b8ead:	8d 04 82             	lea    eax,[edx+eax*4]
  5b8eb0:	8b 10                	mov    edx,DWORD PTR [eax]
  5b8eb2:	89 15 e8 28 72 00    	mov    DWORD PTR ds:0x7228e8,edx
  5b8eb8:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5b8ebb:	89 15 ec 28 72 00    	mov    DWORD PTR ds:0x7228ec,edx
  5b8ec1:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5b8ec4:	a3 f0 28 72 00       	mov    ds:0x7228f0,eax
  5b8ec9:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b8ecc:	8d 14 80             	lea    edx,[eax+eax*4]
  5b8ecf:	8b 41 64             	mov    eax,DWORD PTR [ecx+0x64]
  5b8ed2:	d9 44 90 0c          	fld    DWORD PTR [eax+edx*4+0xc]
  5b8ed6:	d9 1d f4 28 72 00    	fstp   DWORD PTR ds:0x7228f4
  5b8edc:	8b 0f                	mov    ecx,DWORD PTR [edi]
  5b8ede:	e8 5d 2f fe ff       	call   0x59be40
  5b8ee3:	8b c8                	mov    ecx,eax
  5b8ee5:	ba e8 28 72 00       	mov    edx,0x7228e8
  5b8eea:	e8 c1 a6 ff ff       	call   0x5b35b0
  5b8eef:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5b8ef2:	33 ff                	xor    edi,edi
  5b8ef4:	85 c0                	test   eax,eax
  5b8ef6:	7e 66                	jle    0x5b8f5e
  5b8ef8:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b8efe:	83 c5 0c             	add    ebp,0xc
  5b8f01:	83 c3 58             	add    ebx,0x58
  5b8f04:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
