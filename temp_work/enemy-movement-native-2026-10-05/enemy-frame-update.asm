  422fb0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  422fb6:	6a ff                	push   0xffffffff
  422fb8:	68 a8 25 62 00       	push   0x6225a8
  422fbd:	50                   	push   eax
  422fbe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  422fc5:	83 ec 4c             	sub    esp,0x4c
  422fc8:	53                   	push   ebx
  422fc9:	55                   	push   ebp
  422fca:	8b e9                	mov    ebp,ecx
  422fcc:	56                   	push   esi
  422fcd:	57                   	push   edi
  422fce:	8a 45 7c             	mov    al,BYTE PTR [ebp+0x7c]
  422fd1:	84 c0                	test   al,al
  422fd3:	0f 84 35 01 00 00    	je     0x42310e
  422fd9:	8b 8d e0 00 00 00    	mov    ecx,DWORD PTR [ebp+0xe0]
  422fdf:	41                   	inc    ecx
  422fe0:	8b c1                	mov    eax,ecx
  422fe2:	89 8d e0 00 00 00    	mov    DWORD PTR [ebp+0xe0],ecx
  422fe8:	83 f8 0d             	cmp    eax,0xd
  422feb:	0f 8e 0b 01 00 00    	jle    0x4230fc
  422ff1:	33 db                	xor    ebx,ebx
  422ff3:	89 9d e0 00 00 00    	mov    DWORD PTR [ebp+0xe0],ebx
  422ff9:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  422ffe:	3b c3                	cmp    eax,ebx
  423000:	75 05                	jne    0x423007
  423002:	e8 79 82 13 00       	call   0x55b280
  423007:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42300b:	51                   	push   ecx
  42300c:	8b c8                	mov    ecx,eax
  42300e:	e8 3d e7 ff ff       	call   0x421750
  423013:	8b f0                	mov    esi,eax
  423015:	8b 06                	mov    eax,DWORD PTR [esi]
  423017:	89 5c 24 64          	mov    DWORD PTR [esp+0x64],ebx
  42301b:	3b c3                	cmp    eax,ebx
  42301d:	75 46                	jne    0x423065
  42301f:	8d 54 24 13          	lea    edx,[esp+0x13]
  423023:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  423027:	52                   	push   edx
  423028:	68 70 3f 6b 00       	push   0x6b3f70
  42302d:	e8 de 67 fe ff       	call   0x409810
  423032:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  423036:	c6 44 24 64 01       	mov    BYTE PTR [esp+0x64],0x1
  42303b:	50                   	push   eax
  42303c:	68 b6 00 00 00       	push   0xb6
  423041:	68 38 d6 68 00       	push   0x68d638
  423046:	68 2c d6 68 00       	push   0x68d62c
  42304b:	e8 a0 d7 17 00       	call   0x5a07f0
  423050:	ff d0                	call   eax
  423052:	83 c4 10             	add    esp,0x10
  423055:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  423059:	c6 44 24 64 00       	mov    BYTE PTR [esp+0x64],0x0
  42305e:	6a 01                	push   0x1
  423060:	e8 3b 10 fe ff       	call   0x4040a0
  423065:	8b 06                	mov    eax,DWORD PTR [esi]
  423067:	c7 44 24 64 ff ff ff 	mov    DWORD PTR [esp+0x64],0xffffffff
  42306e:	ff 
  42306f:	05 10 02 00 00       	add    eax,0x210
  423074:	8b 08                	mov    ecx,DWORD PTR [eax]
  423076:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  42307a:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  42307d:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  423081:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  423084:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  423088:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  42308c:	3b c3                	cmp    eax,ebx
  42308e:	74 1b                	je     0x4230ab
  423090:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  423093:	8b c8                	mov    ecx,eax
  423095:	83 c0 14             	add    eax,0x14
  423098:	4e                   	dec    esi
  423099:	8b d6                	mov    edx,esi
  42309b:	3b d3                	cmp    edx,ebx
  42309d:	89 30                	mov    DWORD PTR [eax],esi
  42309f:	75 06                	jne    0x4230a7
  4230a1:	53                   	push   ebx
  4230a2:	e8 19 8f 18 00       	call   0x5abfc0
  4230a7:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  4230ab:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4230ae:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4230b2:	8d 44 24 30          	lea    eax,[esp+0x30]
  4230b6:	51                   	push   ecx
  4230b7:	50                   	push   eax
  4230b8:	8b cd                	mov    ecx,ebp
  4230ba:	ff 52 48             	call   DWORD PTR [edx+0x48]
  4230bd:	8b d0                	mov    edx,eax
  4230bf:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4230c3:	e8 18 ff 18 00       	call   0x5b2fe0
  4230c8:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4230cc:	e8 ef fe 18 00       	call   0x5b2fc0
  4230d1:	d8 9d e4 00 00 00    	fcomp  DWORD PTR [ebp+0xe4]
  4230d7:	df e0                	fnstsw ax
  4230d9:	f6 c4 41             	test   ah,0x41
  4230dc:	75 0f                	jne    0x4230ed
  4230de:	c6 85 de 00 00 00 00 	mov    BYTE PTR [ebp+0xde],0x0
  4230e5:	8a 85 de 00 00 00    	mov    al,BYTE PTR [ebp+0xde]
  4230eb:	eb 17                	jmp    0x423104
  4230ed:	c6 85 de 00 00 00 01 	mov    BYTE PTR [ebp+0xde],0x1
  4230f4:	8a 85 de 00 00 00    	mov    al,BYTE PTR [ebp+0xde]
  4230fa:	eb 08                	jmp    0x423104
  4230fc:	8a 85 de 00 00 00    	mov    al,BYTE PTR [ebp+0xde]
  423102:	33 db                	xor    ebx,ebx
  423104:	84 c0                	test   al,al
  423106:	0f 85 f4 00 00 00    	jne    0x423200
  42310c:	eb 02                	jmp    0x423110
  42310e:	33 db                	xor    ebx,ebx
  423110:	39 9d fc 00 00 00    	cmp    DWORD PTR [ebp+0xfc],ebx
  423116:	0f 85 b9 00 00 00    	jne    0x4231d5
  42311c:	8a 4c 24 70          	mov    cl,BYTE PTR [esp+0x70]
  423120:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  423125:	88 4c 24 3c          	mov    BYTE PTR [esp+0x3c],cl
  423129:	83 c9 ff             	or     ecx,0xffffffff
  42312c:	33 c0                	xor    eax,eax
  42312e:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  423132:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  423134:	f7 d1                	not    ecx
  423136:	49                   	dec    ecx
  423137:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
  42313b:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  42313f:	8b d9                	mov    ebx,ecx
  423141:	6a 01                	push   0x1
  423143:	53                   	push   ebx
  423144:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  423148:	e8 f3 e7 fd ff       	call   0x401940
  42314d:	84 c0                	test   al,al
  42314f:	74 23                	je     0x423174
  423151:	8b 7c 24 40          	mov    edi,DWORD PTR [esp+0x40]
  423155:	8b cb                	mov    ecx,ebx
  423157:	8b d1                	mov    edx,ecx
  423159:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42315e:	c1 e9 02             	shr    ecx,0x2
  423161:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  423163:	8b ca                	mov    ecx,edx
  423165:	53                   	push   ebx
  423166:	83 e1 03             	and    ecx,0x3
  423169:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42316b:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  42316f:	e8 1c 10 fe ff       	call   0x404190
  423174:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  423178:	c7 44 24 64 02 00 00 	mov    DWORD PTR [esp+0x64],0x2
  42317f:	00 
  423180:	50                   	push   eax
  423181:	68 f0 00 00 00       	push   0xf0
  423186:	68 f4 f7 68 00       	push   0x68f7f4
  42318b:	68 b0 f8 68 00       	push   0x68f8b0
  423190:	e8 5b d6 17 00       	call   0x5a07f0
  423195:	ff d0                	call   eax
  423197:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  42319b:	33 f6                	xor    esi,esi
  42319d:	83 c4 10             	add    esp,0x10
  4231a0:	3b c6                	cmp    eax,esi
  4231a2:	c7 44 24 64 ff ff ff 	mov    DWORD PTR [esp+0x64],0xffffffff
  4231a9:	ff 
  4231aa:	74 1d                	je     0x4231c9
  4231ac:	8d 48 ff             	lea    ecx,[eax-0x1]
  4231af:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4231b2:	84 c0                	test   al,al
  4231b4:	74 0a                	je     0x4231c0
  4231b6:	3c ff                	cmp    al,0xff
  4231b8:	74 06                	je     0x4231c0
  4231ba:	fe c8                	dec    al
  4231bc:	88 01                	mov    BYTE PTR [ecx],al
  4231be:	eb 09                	jmp    0x4231c9
  4231c0:	51                   	push   ecx
  4231c1:	e8 2a b4 1d 00       	call   0x5fe5f0
  4231c6:	83 c4 04             	add    esp,0x4
  4231c9:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  4231cd:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
  4231d1:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  4231d5:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  4231db:	e8 c0 02 fe ff       	call   0x4034a0
  4231e0:	84 c0                	test   al,al
  4231e2:	75 0f                	jne    0x4231f3
  4231e4:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  4231ea:	e8 d1 02 fe ff       	call   0x4034c0
  4231ef:	84 c0                	test   al,al
  4231f1:	74 78                	je     0x42326b
  4231f3:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  4231f9:	8b 11                	mov    edx,DWORD PTR [ecx]
  4231fb:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4231fe:	eb 6b                	jmp    0x42326b
  423200:	8a 85 00 01 00 00    	mov    al,BYTE PTR [ebp+0x100]
  423206:	84 c0                	test   al,al
  423208:	75 61                	jne    0x42326b
  42320a:	8b 7c 24 70          	mov    edi,DWORD PTR [esp+0x70]
  42320e:	8b 74 24 6c          	mov    esi,DWORD PTR [esp+0x6c]
  423212:	57                   	push   edi
  423213:	56                   	push   esi
  423214:	8b cd                	mov    ecx,ebp
  423216:	e8 a5 0c fe ff       	call   0x403ec0
  42321b:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  423221:	3b cb                	cmp    ecx,ebx
  423223:	74 07                	je     0x42322c
  423225:	56                   	push   esi
  423226:	57                   	push   edi
  423227:	e8 f4 fa fd ff       	call   0x402d20
  42322c:	8b 95 6c 01 00 00    	mov    edx,DWORD PTR [ebp+0x16c]
  423232:	8b 0d f0 f7 68 00    	mov    ecx,DWORD PTR ds:0x68f7f0
  423238:	8b c6                	mov    eax,esi
  42323a:	2b c2                	sub    eax,edx
  42323c:	3b c1                	cmp    eax,ecx
  42323e:	7d 12                	jge    0x423252
  423240:	8a 85 64 01 00 00    	mov    al,BYTE PTR [ebp+0x164]
  423246:	84 c0                	test   al,al
  423248:	74 17                	je     0x423261
  42324a:	89 b5 68 01 00 00    	mov    DWORD PTR [ebp+0x168],esi
  423250:	eb 0f                	jmp    0x423261
  423252:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  423255:	56                   	push   esi
  423256:	8b cd                	mov    ecx,ebp
  423258:	89 b5 6c 01 00 00    	mov    DWORD PTR [ebp+0x16c],esi
  42325e:	ff 52 78             	call   DWORD PTR [edx+0x78]
  423261:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  423264:	57                   	push   edi
  423265:	56                   	push   esi
  423266:	8b cd                	mov    ecx,ebp
  423268:	ff 50 5c             	call   DWORD PTR [eax+0x5c]
  42326b:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  42326f:	5f                   	pop    edi
  423270:	5e                   	pop    esi
  423271:	5d                   	pop    ebp
  423272:	5b                   	pop    ebx
  423273:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42327a:	83 c4 58             	add    esp,0x58
  42327d:	c2 08 00             	ret    0x8
