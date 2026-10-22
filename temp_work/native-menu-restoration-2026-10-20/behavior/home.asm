  561068:	55                   	push   ebp
  561069:	8b ec                	mov    ebp,esp
  56106b:	83 c4 f8             	add    esp,0xfffffff8
  56106e:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  561071:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  561074:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  561077:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  56107a:	e8 79 26 ff ff       	call   0x5536f8
  56107f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  561084:	8b 00                	mov    eax,DWORD PTR [eax]
  561086:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  56108c:	e8 4b ef fe ff       	call   0x54ffdc
  561091:	a1 08 21 57 00       	mov    eax,ds:0x572108
  561096:	8b 00                	mov    eax,DWORD PTR [eax]
  561098:	ba 44 11 56 00       	mov    edx,0x561144
  56109d:	e8 ca 8b 00 00       	call   0x569c6c
  5610a2:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5610a7:	8b 00                	mov    eax,DWORD PTR [eax]
  5610a9:	e8 36 99 00 00       	call   0x56a9e4
  5610ae:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5610b1:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  5610b7:	8b 10                	mov    edx,DWORD PTR [eax]
  5610b9:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  5610bf:	3c 01                	cmp    al,0x1
  5610c1:	75 39                	jne    0x5610fc
  5610c3:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5610c8:	8b 00                	mov    eax,DWORD PTR [eax]
  5610ca:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  5610d0:	80 78 14 01          	cmp    BYTE PTR [eax+0x14],0x1
  5610d4:	75 13                	jne    0x5610e9
  5610d6:	8b 15 4c cf 55 00    	mov    edx,DWORD PTR ds:0x55cf4c
  5610dc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5610df:	8b 08                	mov    ecx,DWORD PTR [eax]
  5610e1:	ff 91 e4 00 00 00    	call   DWORD PTR [ecx+0xe4]
  5610e7:	eb 4c                	jmp    0x561135
  5610e9:	8b 15 b8 c1 55 00    	mov    edx,DWORD PTR ds:0x55c1b8
  5610ef:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5610f2:	8b 08                	mov    ecx,DWORD PTR [eax]
  5610f4:	ff 91 e4 00 00 00    	call   DWORD PTR [ecx+0xe4]
  5610fa:	eb 39                	jmp    0x561135
  5610fc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5610ff:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  561105:	8b 10                	mov    edx,DWORD PTR [eax]
  561107:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  56110d:	3c 01                	cmp    al,0x1
  56110f:	75 13                	jne    0x561124
  561111:	8b 15 50 da 55 00    	mov    edx,DWORD PTR ds:0x55da50
  561117:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  56111a:	8b 08                	mov    ecx,DWORD PTR [eax]
  56111c:	ff 91 e4 00 00 00    	call   DWORD PTR [ecx+0xe4]
  561122:	eb 11                	jmp    0x561135
  561124:	8b 15 5c e7 55 00    	mov    edx,DWORD PTR ds:0x55e75c
  56112a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  56112d:	8b 08                	mov    ecx,DWORD PTR [eax]
  56112f:	ff 91 e4 00 00 00    	call   DWORD PTR [ecx+0xe4]
  561135:	59                   	pop    ecx
  561136:	59                   	pop    ecx
  561137:	5d                   	pop    ebp
  561138:	c3                   	ret
  561139:	00 00                	add    BYTE PTR [eax],al
  56113b:	00 ff                	add    bh,bh
  56113d:	ff                   	(bad)
  56113e:	ff                   	(bad)
  56113f:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  561145:	43                   	inc    ebx
  561146:	4d                   	dec    ebp
  561147:	6e                   	outs   dx,BYTE PTR ds:[esi]
  561148:	35 00 00 00 55       	xor    eax,0x55000000
  56114d:	8b ec                	mov    ebp,esp
  56114f:	83 c4 f8             	add    esp,0xfffffff8
  561152:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  561155:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  561158:	a1 08 21 57 00       	mov    eax,ds:0x572108
  56115d:	8b 00                	mov    eax,DWORD PTR [eax]
  56115f:	c6 80 00 01 00 00 02 	mov    BYTE PTR [eax+0x100],0x2
  561166:	a1 08 21 57 00       	mov    eax,ds:0x572108
  56116b:	8b 00                	mov    eax,DWORD PTR [eax]
  56116d:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  561173:	e8 64 ee fe ff       	call   0x54ffdc
  561178:	a1 08 21 57 00       	mov    eax,ds:0x572108
  56117d:	8b 00                	mov    eax,DWORD PTR [eax]
  56117f:	ba 98 11 56 00       	mov    edx,0x561198
  561184:	e8 e3 8a 00 00       	call   0x569c6c
  561189:	59                   	pop    ecx
  56118a:	59                   	pop    ecx
  56118b:	5d                   	pop    ebp
  56118c:	c3                   	ret
  56118d:	00 00                	add    BYTE PTR [eax],al
  56118f:	00 ff                	add    bh,bh
  561191:	ff                   	(bad)
  561192:	ff                   	(bad)
  561193:	ff 06                	inc    DWORD PTR [esi]
  561195:	00 00                	add    BYTE PTR [eax],al
  561197:	00 52 43             	add    BYTE PTR [edx+0x43],dl
  56119a:	4d                   	dec    ebp
  56119b:	6e                   	outs   dx,BYTE PTR ds:[esi]
  56119c:	31 30                	xor    DWORD PTR [eax],esi
  56119e:	00 00                	add    BYTE PTR [eax],al
  5611a0:	55                   	push   ebp
  5611a1:	8b ec                	mov    ebp,esp
  5611a3:	83 c4 f8             	add    esp,0xfffffff8
  5611a6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5611a9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5611ac:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5611b1:	8b 00                	mov    eax,DWORD PTR [eax]
  5611b3:	c6 80 00 01 00 00 01 	mov    BYTE PTR [eax+0x100],0x1
  5611ba:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5611bf:	8b 00                	mov    eax,DWORD PTR [eax]
  5611c1:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  5611c7:	e8 10 ee fe ff       	call   0x54ffdc
  5611cc:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5611d1:	8b 00                	mov    eax,DWORD PTR [eax]
  5611d3:	ba ec 11 56 00       	mov    edx,0x5611ec
  5611d8:	e8 8f 8a 00 00       	call   0x569c6c
  5611dd:	59                   	pop    ecx
  5611de:	59                   	pop    ecx
  5611df:	5d                   	pop    ebp
  5611e0:	c3                   	ret
  5611e1:	00 00                	add    BYTE PTR [eax],al
  5611e3:	00 ff                	add    bh,bh
  5611e5:	ff                   	(bad)
  5611e6:	ff                   	(bad)
  5611e7:	ff 06                	inc    DWORD PTR [esi]
  5611e9:	00 00                	add    BYTE PTR [eax],al
  5611eb:	00 52 43             	add    BYTE PTR [edx+0x43],dl
  5611ee:	4d                   	dec    ebp
  5611ef:	6e                   	outs   dx,BYTE PTR ds:[esi]
  5611f0:	31 31                	xor    DWORD PTR [ecx],esi
  5611f2:	00 00                	add    BYTE PTR [eax],al
  5611f4:	55                   	push   ebp
  5611f5:	8b ec                	mov    ebp,esp
  5611f7:	83 c4 f8             	add    esp,0xfffffff8
  5611fa:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5611fd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  561200:	a1 08 21 57 00       	mov    eax,ds:0x572108
  561205:	8b 00                	mov    eax,DWORD PTR [eax]
  561207:	c6 80 00 01 00 00 03 	mov    BYTE PTR [eax+0x100],0x3
  56120e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  561213:	8b 00                	mov    eax,DWORD PTR [eax]
  561215:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  56121b:	e8 bc ed fe ff       	call   0x54ffdc
  561220:	a1 08 21 57 00       	mov    eax,ds:0x572108
  561225:	8b 00                	mov    eax,DWORD PTR [eax]
  561227:	ba 40 12 56 00       	mov    edx,0x561240
  56122c:	e8 3b 8a 00 00       	call   0x569c6c
  561231:	59                   	pop    ecx
  561232:	59                   	pop    ecx
  561233:	5d                   	pop    ebp
  561234:	c3                   	ret
  561235:	00 00                	add    BYTE PTR [eax],al
  561237:	00 ff                	add    bh,bh
  561239:	ff                   	(bad)
  56123a:	ff                   	(bad)
  56123b:	ff 06                	inc    DWORD PTR [esi]
  56123d:	00 00                	add    BYTE PTR [eax],al
  56123f:	00 52 43             	add    BYTE PTR [edx+0x43],dl
  561242:	4d                   	dec    ebp
  561243:	6e                   	outs   dx,BYTE PTR ds:[esi]
  561244:	31 32                	xor    DWORD PTR [edx],esi
  561246:	00 00                	add    BYTE PTR [eax],al
