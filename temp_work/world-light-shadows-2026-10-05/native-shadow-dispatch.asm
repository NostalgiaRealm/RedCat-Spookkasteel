  5d21b0:	75 07                	jne    0x5d21b9
  5d21b2:	e8 29 0e 00 00       	call   0x5d2fe0
  5d21b7:	eb 05                	jmp    0x5d21be
  5d21b9:	e8 82 0d 00 00       	call   0x5d2f40
  5d21be:	83 c4 14             	add    esp,0x14
  5d21c1:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5d21c5:	45                   	inc    ebp
  5d21c6:	83 fd 04             	cmp    ebp,0x4
  5d21c9:	8d 14 18             	lea    edx,[eax+ebx*1]
  5d21cc:	8d 1c 42             	lea    ebx,[edx+eax*2]
  5d21cf:	0f 8c 1e ff ff ff    	jl     0x5d20f3
  5d21d5:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
  5d21d9:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  5d21dd:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  5d21e1:	85 c0                	test   eax,eax
  5d21e3:	0f 84 ac 00 00 00    	je     0x5d2295
  5d21e9:	a1 d0 ef 6c 00       	mov    eax,ds:0x6cefd0
  5d21ee:	33 ff                	xor    edi,edi
  5d21f0:	8d b0 e4 03 00 00    	lea    esi,[eax+0x3e4]
  5d21f6:	83 3e 00             	cmp    DWORD PTR [esi],0x0
  5d21f9:	0f 84 89 00 00 00    	je     0x5d2288
  5d21ff:	8b 85 80 00 00 00    	mov    eax,DWORD PTR [ebp+0x80]
  5d2205:	ba 01 00 00 00       	mov    edx,0x1
  5d220a:	8b cf                	mov    ecx,edi
  5d220c:	d3 e2                	shl    edx,cl
  5d220e:	85 d0                	test   eax,edx
  5d2210:	74 76                	je     0x5d2288
  5d2212:	a1 d4 ef 6c 00       	mov    eax,ds:0x6cefd4
  5d2217:	55                   	push   ebp
  5d2218:	8b 88 a0 36 03 00    	mov    ecx,DWORD PTR [eax+0x336a0]
  5d221e:	41                   	inc    ecx
  5d221f:	89 88 a0 36 03 00    	mov    DWORD PTR [eax+0x336a0],ecx
  5d2225:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
  5d2228:	85 c0                	test   eax,eax
  5d222a:	74 3d                	je     0x5d2269
  5d222c:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5d2230:	50                   	push   eax
  5d2231:	56                   	push   esi
  5d2232:	68 00 c6 6c 00       	push   0x6cc600
  5d2237:	e8 b4 0f 00 00       	call   0x5d31f0
  5d223c:	83 c4 10             	add    esp,0x10
  5d223f:	85 c0                	test   eax,eax
  5d2241:	74 45                	je     0x5d2288
  5d2243:	eb 3b                	jmp    0x5d2280
  5d2245:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  5d2249:	33 c0                	xor    eax,eax
  5d224b:	bf 00 c6 6c 00       	mov    edi,0x6cc600
