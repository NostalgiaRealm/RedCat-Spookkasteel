  5b8f04:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  5b8f07:	8b 13                	mov    edx,DWORD PTR [ebx]
  5b8f09:	03 c7                	add    eax,edi
  5b8f0b:	3b 11                	cmp    edx,DWORD PTR [ecx]
  5b8f0d:	74 07                	je     0x5b8f16
  5b8f0f:	8b 51 14             	mov    edx,DWORD PTR [ecx+0x14]
  5b8f12:	85 d2                	test   edx,edx
  5b8f14:	75 35                	jne    0x5b8f4b
  5b8f16:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  5b8f1a:	39 55 00             	cmp    DWORD PTR [ebp+0x0],edx
  5b8f1d:	75 2c                	jne    0x5b8f4b
  5b8f1f:	8b 0d 18 c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc418
  5b8f25:	8b 91 80 36 03 00    	mov    edx,DWORD PTR [ecx+0x33680]
  5b8f2b:	42                   	inc    edx
  5b8f2c:	89 91 80 36 03 00    	mov    DWORD PTR [ecx+0x33680],edx
  5b8f32:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  5b8f36:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  5b8f3a:	51                   	push   ecx
  5b8f3b:	52                   	push   edx
  5b8f3c:	50                   	push   eax
  5b8f3d:	e8 ce 17 00 00       	call   0x5ba710
  5b8f42:	8b 0d 1c c4 6c 00    	mov    ecx,DWORD PTR ds:0x6cc41c
  5b8f48:	83 c4 0c             	add    esp,0xc
  5b8f4b:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5b8f4e:	47                   	inc    edi
  5b8f4f:	81 c3 88 00 00 00    	add    ebx,0x88
  5b8f55:	83 c5 24             	add    ebp,0x24
  5b8f58:	3b f8                	cmp    edi,eax
  5b8f5a:	7c a8                	jl     0x5b8f04
  5b8f5c:	eb 06                	jmp    0x5b8f64
