
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0059df80 <.text+0x19cf80>:
  59df80:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59df87:	5b                   	pop    ebx
  59df88:	83 c4 40             	add    esp,0x40
  59df8b:	c2 10 00             	ret    0x10
  59df8e:	90                   	nop
  59df8f:	90                   	nop
  59df90:	6a ff                	push   0xffffffff
  59df92:	68 50 4a 64 00       	push   0x644a50
  59df97:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59df9d:	50                   	push   eax
  59df9e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59dfa5:	83 ec 10             	sub    esp,0x10
  59dfa8:	53                   	push   ebx
  59dfa9:	55                   	push   ebp
  59dfaa:	56                   	push   esi
  59dfab:	57                   	push   edi
  59dfac:	8b e9                	mov    ebp,ecx
  59dfae:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
  59dfb1:	33 db                	xor    ebx,ebx
  59dfb3:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  59dfb7:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  59dfba:	3b cb                	cmp    ecx,ebx
  59dfbc:	75 04                	jne    0x59dfc2
  59dfbe:	33 f6                	xor    esi,esi
  59dfc0:	eb 08                	jmp    0x59dfca
  59dfc2:	8b 70 08             	mov    esi,DWORD PTR [eax+0x8]
  59dfc5:	2b f1                	sub    esi,ecx
  59dfc7:	c1 fe 02             	sar    esi,0x2
  59dfca:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59dfce:	e8 0d d2 ff ff       	call   0x59b1e0
  59dfd3:	3b c6                	cmp    eax,esi
  59dfd5:	7c 7e                	jl     0x59e055
  59dfd7:	8a 44 24 30          	mov    al,BYTE PTR [esp+0x30]
  59dfdb:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59dfe0:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  59dfe4:	83 c9 ff             	or     ecx,0xffffffff
  59dfe7:	33 c0                	xor    eax,eax
  59dfe9:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  59dfed:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59dfef:	f7 d1                	not    ecx
  59dff1:	49                   	dec    ecx
  59dff2:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  59dff6:	51                   	push   ecx
  59dff7:	68 70 3f 6b 00       	push   0x6b3f70
  59dffc:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59e000:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  59e004:	e8 e7 60 e6 ff       	call   0x4040f0
  59e009:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  59e00d:	c6 44 24 28 01       	mov    BYTE PTR [esp+0x28],0x1
  59e012:	51                   	push   ecx
  59e013:	68 44 02 00 00       	push   0x244
  59e018:	68 cc 72 6a 00       	push   0x6a72cc
  59e01d:	68 74 75 6a 00       	push   0x6a7574
  59e022:	e8 c9 27 00 00       	call   0x5a07f0
  59e027:	ff d0                	call   eax
  59e029:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59e02d:	83 c4 10             	add    esp,0x10
  59e030:	3b c3                	cmp    eax,ebx
  59e032:	88 5c 24 28          	mov    BYTE PTR [esp+0x28],bl
  59e036:	74 1d                	je     0x59e055
  59e038:	8d 48 ff             	lea    ecx,[eax-0x1]
  59e03b:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59e03e:	3a c3                	cmp    al,bl
  59e040:	74 0a                	je     0x59e04c
  59e042:	3c ff                	cmp    al,0xff
  59e044:	74 06                	je     0x59e04c
  59e046:	fe c8                	dec    al
  59e048:	88 01                	mov    BYTE PTR [ecx],al
  59e04a:	eb 09                	jmp    0x59e055
  59e04c:	51                   	push   ecx
  59e04d:	e8 9e 05 06 00       	call   0x5fe5f0
  59e052:	83 c4 04             	add    esp,0x4
  59e055:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e059:	e8 92 d1 ff ff       	call   0x59b1f0
  59e05e:	84 c0                	test   al,al
  59e060:	75 0d                	jne    0x59e06f
  59e062:	68 44 75 6a 00       	push   0x6a7544
  59e067:	e8 c4 1d 01 00       	call   0x5afe30
  59e06c:	83 c4 04             	add    esp,0x4
  59e06f:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e073:	e8 78 d1 ff ff       	call   0x59b1f0
  59e078:	84 c0                	test   al,al
  59e07a:	75 7e                	jne    0x59e0fa
  59e07c:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59e081:	83 c9 ff             	or     ecx,0xffffffff
  59e084:	33 c0                	xor    eax,eax
  59e086:	8a 54 24 30          	mov    dl,BYTE PTR [esp+0x30]
  59e08a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e08c:	f7 d1                	not    ecx
  59e08e:	49                   	dec    ecx
  59e08f:	88 54 24 10          	mov    BYTE PTR [esp+0x10],dl
  59e093:	51                   	push   ecx
  59e094:	68 70 3f 6b 00       	push   0x6b3f70
  59e099:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59e09d:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  59e0a1:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59e0a5:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  59e0a9:	e8 42 60 e6 ff       	call   0x4040f0
  59e0ae:	8d 44 24 10          	lea    eax,[esp+0x10]
  59e0b2:	c6 44 24 28 02       	mov    BYTE PTR [esp+0x28],0x2
  59e0b7:	50                   	push   eax
  59e0b8:	68 4b 02 00 00       	push   0x24b
  59e0bd:	68 cc 72 6a 00       	push   0x6a72cc
  59e0c2:	68 30 75 6a 00       	push   0x6a7530
  59e0c7:	e8 24 27 00 00       	call   0x5a07f0
  59e0cc:	ff d0                	call   eax
  59e0ce:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59e0d2:	83 c4 10             	add    esp,0x10
  59e0d5:	3b c3                	cmp    eax,ebx
  59e0d7:	88 5c 24 28          	mov    BYTE PTR [esp+0x28],bl
  59e0db:	74 1d                	je     0x59e0fa
  59e0dd:	8d 48 ff             	lea    ecx,[eax-0x1]
  59e0e0:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59e0e3:	3a c3                	cmp    al,bl
  59e0e5:	74 0a                	je     0x59e0f1
  59e0e7:	3c ff                	cmp    al,0xff
  59e0e9:	74 06                	je     0x59e0f1
  59e0eb:	fe c8                	dec    al
  59e0ed:	88 01                	mov    BYTE PTR [ecx],al
  59e0ef:	eb 09                	jmp    0x59e0fa
  59e0f1:	51                   	push   ecx
  59e0f2:	e8 f9 04 06 00       	call   0x5fe5f0
  59e0f7:	83 c4 04             	add    esp,0x4
  59e0fa:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e0fe:	e8 dd d0 ff ff       	call   0x59b1e0
  59e103:	8b 6d 18             	mov    ebp,DWORD PTR [ebp+0x18]
  59e106:	8b f0                	mov    esi,eax
  59e108:	3b f3                	cmp    esi,ebx
  59e10a:	7c 0b                	jl     0x59e117
  59e10c:	8b cd                	mov    ecx,ebp
  59e10e:	e8 ad 03 eb ff       	call   0x44e4c0
  59e113:	3b f0                	cmp    esi,eax
  59e115:	7c 62                	jl     0x59e179
  59e117:	8a 4c 24 30          	mov    cl,BYTE PTR [esp+0x30]
  59e11b:	53                   	push   ebx
  59e11c:	88 4c 24 14          	mov    BYTE PTR [esp+0x14],cl
  59e120:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59e124:	e8 77 5f e6 ff       	call   0x4040a0
  59e129:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59e12e:	83 c9 ff             	or     ecx,0xffffffff
  59e131:	33 c0                	xor    eax,eax
  59e133:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e135:	f7 d1                	not    ecx
  59e137:	49                   	dec    ecx
  59e138:	51                   	push   ecx
  59e139:	68 70 3f 6b 00       	push   0x6b3f70
  59e13e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59e142:	e8 a9 5f e6 ff       	call   0x4040f0
  59e147:	8d 54 24 10          	lea    edx,[esp+0x10]
  59e14b:	c6 44 24 28 03       	mov    BYTE PTR [esp+0x28],0x3
  59e150:	52                   	push   edx
  59e151:	68 8b 00 00 00       	push   0x8b
  59e156:	68 58 f4 68 00       	push   0x68f458
  59e15b:	68 70 f4 68 00       	push   0x68f470
  59e160:	e8 8b 26 00 00       	call   0x5a07f0
  59e165:	ff d0                	call   eax
  59e167:	83 c4 10             	add    esp,0x10
  59e16a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  59e16e:	88 5c 24 28          	mov    BYTE PTR [esp+0x28],bl
  59e172:	6a 01                	push   0x1
  59e174:	e8 27 5f e6 ff       	call   0x4040a0
  59e179:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  59e17c:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e180:	c7 44 24 28 ff ff ff 	mov    DWORD PTR [esp+0x28],0xffffffff
  59e187:	ff 
  59e188:	8b 34 b0             	mov    esi,DWORD PTR [eax+esi*4]
  59e18b:	e8 50 4f fc ff       	call   0x5630e0
  59e190:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  59e194:	8b c6                	mov    eax,esi
  59e196:	5f                   	pop    edi
  59e197:	5e                   	pop    esi
  59e198:	5d                   	pop    ebp
  59e199:	5b                   	pop    ebx
  59e19a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59e1a1:	83 c4 1c             	add    esp,0x1c
  59e1a4:	c2 04 00             	ret    0x4
  59e1a7:	90                   	nop
  59e1a8:	90                   	nop
  59e1a9:	90                   	nop
  59e1aa:	90                   	nop
  59e1ab:	90                   	nop
  59e1ac:	90                   	nop
  59e1ad:	90                   	nop
  59e1ae:	90                   	nop
  59e1af:	90                   	nop
  59e1b0:	6a ff                	push   0xffffffff
  59e1b2:	68 68 4a 64 00       	push   0x644a68
  59e1b7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59e1bd:	50                   	push   eax
  59e1be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59e1c5:	51                   	push   ecx
  59e1c6:	56                   	push   esi
  59e1c7:	57                   	push   edi
  59e1c8:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  59e1cc:	8d 44 24 08          	lea    eax,[esp+0x8]
  59e1d0:	50                   	push   eax
  59e1d1:	8b cf                	mov    ecx,edi
  59e1d3:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  59e1da:	00 
  59e1db:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  59e1e2:	00 
  59e1e3:	e8 e8 cf ff ff       	call   0x59b1d0
  59e1e8:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  59e1ec:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
  59e1f3:	00 
  59e1f4:	68 c8 a5 6b 00       	push   0x6ba5c8
  59e1f9:	51                   	push   ecx
  59e1fa:	8d 54 24 24          	lea    edx,[esp+0x24]
  59e1fe:	8b cc                	mov    ecx,esp
  59e200:	89 64 24 28          	mov    DWORD PTR [esp+0x28],esp
  59e204:	52                   	push   edx
  59e205:	e8 56 b5 ea ff       	call   0x449760
  59e20a:	e8 d1 06 e8 ff       	call   0x41e8e0
  59e20f:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  59e213:	83 c4 08             	add    esp,0x8
  59e216:	3b c8                	cmp    ecx,eax
  59e218:	7d 72                	jge    0x59e28c
  59e21a:	51                   	push   ecx
  59e21b:	68 c8 a5 6b 00       	push   0x6ba5c8
  59e220:	51                   	push   ecx
  59e221:	8d 44 24 28          	lea    eax,[esp+0x28]
  59e225:	8b cc                	mov    ecx,esp
  59e227:	89 64 24 2c          	mov    DWORD PTR [esp+0x2c],esp
  59e22b:	50                   	push   eax
  59e22c:	e8 2f b5 ea ff       	call   0x449760
  59e231:	e8 5a 22 00 00       	call   0x5a0490
  59e236:	83 c4 0c             	add    esp,0xc
  59e239:	3b f0                	cmp    esi,eax
  59e23b:	74 06                	je     0x59e243
  59e23d:	ff 44 24 24          	inc    DWORD PTR [esp+0x24]
  59e241:	eb b1                	jmp    0x59e1f4
  59e243:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  59e247:	51                   	push   ecx
  59e248:	8b cf                	mov    ecx,edi
  59e24a:	e8 81 cf ff ff       	call   0x59b1d0
  59e24f:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59e253:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  59e25a:	ff 
  59e25b:	85 c0                	test   eax,eax
  59e25d:	74 18                	je     0x59e277
  59e25f:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59e262:	8b c8                	mov    ecx,eax
  59e264:	83 c0 14             	add    eax,0x14
  59e267:	4e                   	dec    esi
  59e268:	8b d6                	mov    edx,esi
  59e26a:	85 d2                	test   edx,edx
  59e26c:	89 30                	mov    DWORD PTR [eax],esi
  59e26e:	75 07                	jne    0x59e277
  59e270:	6a 00                	push   0x0
  59e272:	e8 49 dd 00 00       	call   0x5abfc0
  59e277:	b0 01                	mov    al,0x1
  59e279:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  59e27d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59e284:	5f                   	pop    edi
  59e285:	5e                   	pop    esi
  59e286:	83 c4 10             	add    esp,0x10
  59e289:	c2 0c 00             	ret    0xc
  59e28c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59e290:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  59e297:	ff 
  59e298:	85 c0                	test   eax,eax
  59e29a:	74 18                	je     0x59e2b4
  59e29c:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59e29f:	8b c8                	mov    ecx,eax
  59e2a1:	83 c0 14             	add    eax,0x14
  59e2a4:	4e                   	dec    esi
  59e2a5:	8b d6                	mov    edx,esi
  59e2a7:	85 d2                	test   edx,edx
  59e2a9:	89 30                	mov    DWORD PTR [eax],esi
  59e2ab:	75 07                	jne    0x59e2b4
  59e2ad:	6a 00                	push   0x0
  59e2af:	e8 0c dd 00 00       	call   0x5abfc0
  59e2b4:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  59e2b8:	5f                   	pop    edi
  59e2b9:	32 c0                	xor    al,al
  59e2bb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59e2c2:	5e                   	pop    esi
  59e2c3:	83 c4 10             	add    esp,0x10
  59e2c6:	c2 0c 00             	ret    0xc
  59e2c9:	90                   	nop
  59e2ca:	90                   	nop
  59e2cb:	90                   	nop
  59e2cc:	90                   	nop
  59e2cd:	90                   	nop
  59e2ce:	90                   	nop
  59e2cf:	90                   	nop
  59e2d0:	6a ff                	push   0xffffffff
  59e2d2:	68 1f 4b 64 00       	push   0x644b1f
  59e2d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59e2dd:	50                   	push   eax
  59e2de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59e2e5:	81 ec 9c 00 00 00    	sub    esp,0x9c
  59e2eb:	53                   	push   ebx
  59e2ec:	55                   	push   ebp
  59e2ed:	56                   	push   esi
  59e2ee:	8b d9                	mov    ebx,ecx
  59e2f0:	33 f6                	xor    esi,esi
  59e2f2:	57                   	push   edi
  59e2f3:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  59e2f7:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59e2fb:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59e2ff:	89 b4 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],esi
  59e306:	e8 b5 ce ff ff       	call   0x59b1c0
  59e30b:	8b 84 24 bc 00 00 00 	mov    eax,DWORD PTR [esp+0xbc]
  59e312:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x1
  59e319:	01 
  59e31a:	3b c6                	cmp    eax,esi
  59e31c:	75 69                	jne    0x59e387
  59e31e:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59e322:	56                   	push   esi
  59e323:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  59e327:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  59e32b:	e8 70 5d e6 ff       	call   0x4040a0
  59e330:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59e335:	83 c9 ff             	or     ecx,0xffffffff
  59e338:	33 c0                	xor    eax,eax
  59e33a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e33c:	f7 d1                	not    ecx
  59e33e:	49                   	dec    ecx
  59e33f:	51                   	push   ecx
  59e340:	68 70 3f 6b 00       	push   0x6b3f70
  59e345:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  59e349:	e8 a2 5d e6 ff       	call   0x4040f0
  59e34e:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  59e352:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x2
  59e359:	02 
  59e35a:	51                   	push   ecx
  59e35b:	68 b6 00 00 00       	push   0xb6
  59e360:	68 38 d6 68 00       	push   0x68d638
  59e365:	68 2c d6 68 00       	push   0x68d62c
  59e36a:	e8 81 24 00 00       	call   0x5a07f0
  59e36f:	ff d0                	call   eax
  59e371:	83 c4 10             	add    esp,0x10
  59e374:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  59e378:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x1
  59e37f:	01 
  59e380:	6a 01                	push   0x1
  59e382:	e8 19 5d e6 ff       	call   0x4040a0
  59e387:	8b 94 24 bc 00 00 00 	mov    edx,DWORD PTR [esp+0xbc]
  59e38e:	39 72 5c             	cmp    DWORD PTR [edx+0x5c],esi
  59e391:	0f 85 8f 00 00 00    	jne    0x59e426
  59e397:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59e39b:	56                   	push   esi
  59e39c:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e3a0:	88 44 24 30          	mov    BYTE PTR [esp+0x30],al
  59e3a4:	e8 f7 5c e6 ff       	call   0x4040a0
  59e3a9:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59e3ae:	83 c9 ff             	or     ecx,0xffffffff
  59e3b1:	33 c0                	xor    eax,eax
  59e3b3:	6a 01                	push   0x1
  59e3b5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e3b7:	f7 d1                	not    ecx
  59e3b9:	49                   	dec    ecx
  59e3ba:	8b e9                	mov    ebp,ecx
  59e3bc:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e3c0:	55                   	push   ebp
  59e3c1:	e8 7a 35 e6 ff       	call   0x401940
  59e3c6:	84 c0                	test   al,al
  59e3c8:	74 23                	je     0x59e3ed
  59e3ca:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  59e3ce:	8b cd                	mov    ecx,ebp
  59e3d0:	8b d1                	mov    edx,ecx
  59e3d2:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  59e3d7:	c1 e9 02             	shr    ecx,0x2
  59e3da:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59e3dc:	8b ca                	mov    ecx,edx
  59e3de:	55                   	push   ebp
  59e3df:	83 e1 03             	and    ecx,0x3
  59e3e2:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59e3e4:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e3e8:	e8 a3 5d e6 ff       	call   0x404190
  59e3ed:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  59e3f1:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x3
  59e3f8:	03 
  59e3f9:	50                   	push   eax
  59e3fa:	68 96 02 00 00       	push   0x296
  59e3ff:	68 cc 72 6a 00       	push   0x6a72cc
  59e404:	68 30 76 6a 00       	push   0x6a7630
  59e409:	e8 e2 23 00 00       	call   0x5a07f0
  59e40e:	ff d0                	call   eax
  59e410:	83 c4 10             	add    esp,0x10
  59e413:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59e417:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x1
  59e41e:	01 
  59e41f:	6a 01                	push   0x1
  59e421:	e8 7a 5c e6 ff       	call   0x4040a0
  59e426:	68 c8 a5 6b 00       	push   0x6ba5c8
  59e42b:	51                   	push   ecx
  59e42c:	8d 94 24 c4 00 00 00 	lea    edx,[esp+0xc4]
  59e433:	8b cc                	mov    ecx,esp
  59e435:	89 64 24 28          	mov    DWORD PTR [esp+0x28],esp
  59e439:	52                   	push   edx
  59e43a:	e8 21 b3 ea ff       	call   0x449760
  59e43f:	e8 9c 04 e8 ff       	call   0x41e8e0
  59e444:	8b e8                	mov    ebp,eax
  59e446:	83 c4 08             	add    esp,0x8
  59e449:	85 ed                	test   ebp,ebp
  59e44b:	89 6c 24 54          	mov    DWORD PTR [esp+0x54],ebp
  59e44f:	0f 85 ce 00 00 00    	jne    0x59e523
  59e455:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59e459:	55                   	push   ebp
  59e45a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e45e:	88 44 24 30          	mov    BYTE PTR [esp+0x30],al
  59e462:	e8 39 5c e6 ff       	call   0x4040a0
  59e467:	bf fc 75 6a 00       	mov    edi,0x6a75fc
  59e46c:	83 c9 ff             	or     ecx,0xffffffff
  59e46f:	33 c0                	xor    eax,eax
  59e471:	6a 01                	push   0x1
  59e473:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e475:	f7 d1                	not    ecx
  59e477:	49                   	dec    ecx
  59e478:	8b d9                	mov    ebx,ecx
  59e47a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e47e:	53                   	push   ebx
  59e47f:	e8 bc 34 e6 ff       	call   0x401940
  59e484:	84 c0                	test   al,al
  59e486:	74 23                	je     0x59e4ab
  59e488:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  59e48c:	8b cb                	mov    ecx,ebx
  59e48e:	8b d1                	mov    edx,ecx
  59e490:	be fc 75 6a 00       	mov    esi,0x6a75fc
  59e495:	c1 e9 02             	shr    ecx,0x2
  59e498:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59e49a:	8b ca                	mov    ecx,edx
  59e49c:	53                   	push   ebx
  59e49d:	83 e1 03             	and    ecx,0x3
  59e4a0:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59e4a2:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e4a6:	e8 e5 5c e6 ff       	call   0x404190
  59e4ab:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  59e4af:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x4
  59e4b6:	04 
  59e4b7:	50                   	push   eax
  59e4b8:	68 9d 02 00 00       	push   0x29d
  59e4bd:	68 cc 72 6a 00       	push   0x6a72cc
  59e4c2:	e8 59 1a 01 00       	call   0x5aff20
  59e4c7:	83 c4 0c             	add    esp,0xc
  59e4ca:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  59e4ce:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x1
  59e4d5:	01 
  59e4d6:	6a 01                	push   0x1
  59e4d8:	e8 c3 5b e6 ff       	call   0x4040a0
  59e4dd:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59e4e1:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x0
  59e4e8:	00 
  59e4e9:	e8 f2 4b fc ff       	call   0x5630e0
  59e4ee:	8b 84 24 bc 00 00 00 	mov    eax,DWORD PTR [esp+0xbc]
  59e4f5:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0xffffffff
  59e4fc:	ff ff ff ff 
  59e500:	85 c0                	test   eax,eax
  59e502:	74 18                	je     0x59e51c
  59e504:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59e507:	8b c8                	mov    ecx,eax
  59e509:	83 c0 14             	add    eax,0x14
  59e50c:	4e                   	dec    esi
  59e50d:	8b d6                	mov    edx,esi
  59e50f:	85 d2                	test   edx,edx
  59e511:	89 30                	mov    DWORD PTR [eax],esi
  59e513:	75 07                	jne    0x59e51c
  59e515:	6a 00                	push   0x0
  59e517:	e8 a4 da 00 00       	call   0x5abfc0
  59e51c:	32 c0                	xor    al,al
  59e51e:	e9 c3 05 00 00       	jmp    0x59eae6
  59e523:	33 c0                	xor    eax,eax
  59e525:	85 ed                	test   ebp,ebp
  59e527:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  59e52b:	0f 8e 14 04 00 00    	jle    0x59e945
  59e531:	50                   	push   eax
  59e532:	68 c8 a5 6b 00       	push   0x6ba5c8
  59e537:	51                   	push   ecx
  59e538:	8d 94 24 c8 00 00 00 	lea    edx,[esp+0xc8]
  59e53f:	8b cc                	mov    ecx,esp
  59e541:	89 64 24 2c          	mov    DWORD PTR [esp+0x2c],esp
  59e545:	52                   	push   edx
  59e546:	e8 15 b2 ea ff       	call   0x449760
  59e54b:	e8 40 1f 00 00       	call   0x5a0490
  59e550:	83 c4 0c             	add    esp,0xc
  59e553:	8b e8                	mov    ebp,eax
  59e555:	e8 76 c9 ff ff       	call   0x59aed0
  59e55a:	8b f0                	mov    esi,eax
  59e55c:	81 c6 88 02 00 00    	add    esi,0x288
  59e562:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  59e565:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  59e56b:	df e0                	fnstsw ax
  59e56d:	f6 c4 40             	test   ah,0x40
  59e570:	74 1a                	je     0x59e58c
  59e572:	8d 44 24 13          	lea    eax,[esp+0x13]
  59e576:	8d 4e 14             	lea    ecx,[esi+0x14]
  59e579:	50                   	push   eax
  59e57a:	51                   	push   ecx
  59e57b:	e8 10 ee 00 00       	call   0x5ad390
  59e580:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  59e583:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  59e587:	83 c4 08             	add    esp,0x8
  59e58a:	eb 07                	jmp    0x59e593
  59e58c:	8b 56 60             	mov    edx,DWORD PTR [esi+0x60]
  59e58f:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  59e593:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  59e597:	6a 00                	push   0x0
  59e599:	50                   	push   eax
  59e59a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59e59e:	55                   	push   ebp
  59e59f:	51                   	push   ecx
  59e5a0:	8b cb                	mov    ecx,ebx
  59e5a2:	e8 69 e2 ff ff       	call   0x59c810
  59e5a7:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59e5ab:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x5
  59e5b2:	05 
  59e5b3:	e8 38 cc ff ff       	call   0x59b1f0
  59e5b8:	84 c0                	test   al,al
  59e5ba:	0f 84 21 02 00 00    	je     0x59e7e1
  59e5c0:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  59e5c4:	8b cb                	mov    ecx,ebx
  59e5c6:	52                   	push   edx
  59e5c7:	e8 c4 f9 ff ff       	call   0x59df90
  59e5cc:	8b c8                	mov    ecx,eax
  59e5ce:	e8 dd 99 ff ff       	call   0x597fb0
  59e5d3:	8b d0                	mov    edx,eax
  59e5d5:	8b cd                	mov    ecx,ebp
  59e5d7:	e8 c4 4a 01 00       	call   0x5b30a0
  59e5dc:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  59e5e2:	df e0                	fnstsw ax
  59e5e4:	f6 c4 01             	test   ah,0x1
  59e5e7:	0f 84 fc 00 00 00    	je     0x59e6e9
  59e5ed:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  59e5f1:	8d 84 24 8c 00 00 00 	lea    eax,[esp+0x8c]
  59e5f8:	50                   	push   eax
  59e5f9:	51                   	push   ecx
  59e5fa:	8b cb                	mov    ecx,ebx
  59e5fc:	e8 8f f9 ff ff       	call   0x59df90
  59e601:	8b c8                	mov    ecx,eax
  59e603:	e8 a8 bb ff ff       	call   0x59a1b0
  59e608:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  59e60c:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  59e610:	6a 00                	push   0x0
  59e612:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  59e616:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x6
  59e61d:	06 
  59e61e:	88 54 24 60          	mov    BYTE PTR [esp+0x60],dl
  59e622:	e8 79 5a e6 ff       	call   0x4040a0
  59e627:	bf d0 75 6a 00       	mov    edi,0x6a75d0
  59e62c:	83 c9 ff             	or     ecx,0xffffffff
  59e62f:	33 c0                	xor    eax,eax
  59e631:	6a 01                	push   0x1
  59e633:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e635:	f7 d1                	not    ecx
  59e637:	49                   	dec    ecx
  59e638:	8b f9                	mov    edi,ecx
  59e63a:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  59e63e:	57                   	push   edi
  59e63f:	89 7c 24 44          	mov    DWORD PTR [esp+0x44],edi
  59e643:	e8 f8 32 e6 ff       	call   0x401940
  59e648:	84 c0                	test   al,al
  59e64a:	74 25                	je     0x59e671
  59e64c:	8b cf                	mov    ecx,edi
  59e64e:	8b 7c 24 60          	mov    edi,DWORD PTR [esp+0x60]
  59e652:	8b c1                	mov    eax,ecx
  59e654:	be d0 75 6a 00       	mov    esi,0x6a75d0
  59e659:	c1 e9 02             	shr    ecx,0x2
  59e65c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59e65e:	8b c8                	mov    ecx,eax
  59e660:	83 e1 03             	and    ecx,0x3
  59e663:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59e665:	8b c8                	mov    ecx,eax
  59e667:	51                   	push   ecx
  59e668:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  59e66c:	e8 1f 5b e6 ff       	call   0x404190
  59e671:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  59e675:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  59e679:	52                   	push   edx
  59e67a:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  59e67e:	50                   	push   eax
  59e67f:	51                   	push   ecx
  59e680:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x7
  59e687:	07 
  59e688:	e8 e3 fc ea ff       	call   0x44e370
  59e68d:	50                   	push   eax
  59e68e:	68 b1 02 00 00       	push   0x2b1
  59e693:	68 cc 72 6a 00       	push   0x6a72cc
  59e698:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x8
  59e69f:	08 
  59e6a0:	e8 7b 18 01 00       	call   0x5aff20
  59e6a5:	83 c4 18             	add    esp,0x18
  59e6a8:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  59e6ac:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x7
  59e6b3:	07 
  59e6b4:	6a 01                	push   0x1
  59e6b6:	e8 e5 59 e6 ff       	call   0x4040a0
  59e6bb:	6a 01                	push   0x1
  59e6bd:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  59e6c1:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x6
  59e6c8:	06 
  59e6c9:	e8 d2 59 e6 ff       	call   0x4040a0
  59e6ce:	6a 01                	push   0x1
  59e6d0:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  59e6d7:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x5
  59e6de:	05 
  59e6df:	e8 bc 59 e6 ff       	call   0x4040a0
  59e6e4:	e9 f8 00 00 00       	jmp    0x59e7e1
  59e6e9:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  59e6ed:	8d 94 24 9c 00 00 00 	lea    edx,[esp+0x9c]
  59e6f4:	52                   	push   edx
  59e6f5:	50                   	push   eax
  59e6f6:	8b cb                	mov    ecx,ebx
  59e6f8:	e8 93 f8 ff ff       	call   0x59df90
  59e6fd:	8b c8                	mov    ecx,eax
  59e6ff:	e8 ac ba ff ff       	call   0x59a1b0
  59e704:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  59e708:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  59e70c:	6a 00                	push   0x0
  59e70e:	88 4c 24 44          	mov    BYTE PTR [esp+0x44],cl
  59e712:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  59e716:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x9
  59e71d:	09 
  59e71e:	e8 7d 59 e6 ff       	call   0x4040a0
  59e723:	bf 94 75 6a 00       	mov    edi,0x6a7594
  59e728:	83 c9 ff             	or     ecx,0xffffffff
  59e72b:	33 c0                	xor    eax,eax
  59e72d:	6a 01                	push   0x1
  59e72f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e731:	f7 d1                	not    ecx
  59e733:	49                   	dec    ecx
  59e734:	8b d9                	mov    ebx,ecx
  59e736:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  59e73a:	53                   	push   ebx
  59e73b:	e8 00 32 e6 ff       	call   0x401940
  59e740:	84 c0                	test   al,al
  59e742:	74 23                	je     0x59e767
  59e744:	8b 7c 24 44          	mov    edi,DWORD PTR [esp+0x44]
  59e748:	8b cb                	mov    ecx,ebx
  59e74a:	8b d1                	mov    edx,ecx
  59e74c:	be 94 75 6a 00       	mov    esi,0x6a7594
  59e751:	c1 e9 02             	shr    ecx,0x2
  59e754:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59e756:	8b ca                	mov    ecx,edx
  59e758:	53                   	push   ebx
  59e759:	83 e1 03             	and    ecx,0x3
  59e75c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59e75e:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  59e762:	e8 29 5a e6 ff       	call   0x404190
  59e767:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  59e76b:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  59e76f:	50                   	push   eax
  59e770:	8d 94 24 80 00 00 00 	lea    edx,[esp+0x80]
  59e777:	51                   	push   ecx
  59e778:	52                   	push   edx
  59e779:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0xa
  59e780:	0a 
  59e781:	e8 ea fb ea ff       	call   0x44e370
  59e786:	50                   	push   eax
  59e787:	68 b6 02 00 00       	push   0x2b6
  59e78c:	68 cc 72 6a 00       	push   0x6a72cc
  59e791:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0xb
  59e798:	0b 
  59e799:	e8 82 17 01 00       	call   0x5aff20
  59e79e:	83 c4 18             	add    esp,0x18
  59e7a1:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  59e7a5:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0xa
  59e7ac:	0a 
  59e7ad:	6a 01                	push   0x1
  59e7af:	e8 ec 58 e6 ff       	call   0x4040a0
  59e7b4:	6a 01                	push   0x1
  59e7b6:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  59e7ba:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x9
  59e7c1:	09 
  59e7c2:	e8 d9 58 e6 ff       	call   0x4040a0
  59e7c7:	6a 01                	push   0x1
  59e7c9:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  59e7d0:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x5
  59e7d7:	05 
  59e7d8:	e8 c3 58 e6 ff       	call   0x4040a0
  59e7dd:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  59e7e1:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
  59e7e4:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  59e7e7:	85 c9                	test   ecx,ecx
  59e7e9:	75 06                	jne    0x59e7f1
  59e7eb:	89 4c 24 50          	mov    DWORD PTR [esp+0x50],ecx
  59e7ef:	eb 0c                	jmp    0x59e7fd
  59e7f1:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  59e7f4:	2b c1                	sub    eax,ecx
  59e7f6:	c1 f8 02             	sar    eax,0x2
  59e7f9:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
  59e7fd:	68 ac 00 00 00       	push   0xac
  59e802:	e8 ae b8 06 00       	call   0x60a0b5
  59e807:	8b f0                	mov    esi,eax
  59e809:	83 c4 04             	add    esp,0x4
  59e80c:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  59e810:	33 c9                	xor    ecx,ecx
  59e812:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0xc
  59e819:	0c 
  59e81a:	3b f1                	cmp    esi,ecx
  59e81c:	0f 84 8a 00 00 00    	je     0x59e8ac
  59e822:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  59e826:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
  59e829:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  59e82d:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  59e831:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  59e835:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  59e839:	8b fa                	mov    edi,edx
  59e83b:	83 c9 ff             	or     ecx,0xffffffff
  59e83e:	33 c0                	xor    eax,eax
  59e840:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59e842:	f7 d1                	not    ecx
  59e844:	49                   	dec    ecx
  59e845:	51                   	push   ecx
  59e846:	52                   	push   edx
  59e847:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  59e84b:	e8 a0 58 e6 ff       	call   0x4040f0
  59e850:	83 4c 24 24 01       	or     DWORD PTR [esp+0x24],0x1
  59e855:	53                   	push   ebx
  59e856:	51                   	push   ecx
  59e857:	8d 54 24 58          	lea    edx,[esp+0x58]
  59e85b:	8b cc                	mov    ecx,esp
  59e85d:	89 64 24 44          	mov    DWORD PTR [esp+0x44],esp
  59e861:	52                   	push   edx
  59e862:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0xd
  59e869:	0d 
  59e86a:	e8 61 c9 ff ff       	call   0x59b1d0
  59e86f:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  59e872:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
  59e875:	8d 44 24 34          	lea    eax,[esp+0x34]
  59e879:	c7 84 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],0xd
  59e880:	0d 00 00 00 
  59e884:	50                   	push   eax
  59e885:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  59e888:	51                   	push   ecx
  59e889:	52                   	push   edx
  59e88a:	50                   	push   eax
  59e88b:	8d 8c 24 d4 00 00 00 	lea    ecx,[esp+0xd4]
  59e892:	e8 99 2b e8 ff       	call   0x421430
  59e897:	8b c8                	mov    ecx,eax
  59e899:	e8 f2 e2 f5 ff       	call   0x4fcb90
  59e89e:	50                   	push   eax
  59e89f:	8b ce                	mov    ecx,esi
  59e8a1:	e8 5a 93 ff ff       	call   0x597c00
  59e8a6:	8b f8                	mov    edi,eax
  59e8a8:	33 c9                	xor    ecx,ecx
  59e8aa:	eb 02                	jmp    0x59e8ae
  59e8ac:	33 ff                	xor    edi,edi
  59e8ae:	8a 44 24 24          	mov    al,BYTE PTR [esp+0x24]
  59e8b2:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0x5
  59e8b9:	05 00 00 00 
  59e8bd:	a8 01                	test   al,0x1
  59e8bf:	74 3e                	je     0x59e8ff
  59e8c1:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  59e8c5:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  59e8c9:	83 e6 fe             	and    esi,0xfffffffe
  59e8cc:	3b c1                	cmp    eax,ecx
  59e8ce:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59e8d2:	74 1f                	je     0x59e8f3
  59e8d4:	8d 50 ff             	lea    edx,[eax-0x1]
  59e8d7:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59e8da:	84 c0                	test   al,al
  59e8dc:	74 0a                	je     0x59e8e8
  59e8de:	3c ff                	cmp    al,0xff
  59e8e0:	74 06                	je     0x59e8e8
  59e8e2:	fe c8                	dec    al
  59e8e4:	88 02                	mov    BYTE PTR [edx],al
  59e8e6:	eb 0b                	jmp    0x59e8f3
  59e8e8:	52                   	push   edx
  59e8e9:	e8 02 fd 05 00       	call   0x5fe5f0
  59e8ee:	83 c4 04             	add    esp,0x4
  59e8f1:	33 c9                	xor    ecx,ecx
  59e8f3:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  59e8f7:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  59e8fb:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  59e8ff:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  59e902:	51                   	push   ecx
  59e903:	8b cf                	mov    ecx,edi
  59e905:	e8 36 ac ff ff       	call   0x599540
  59e90a:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
  59e90d:	8b cf                	mov    ecx,edi
  59e90f:	52                   	push   edx
  59e910:	e8 db bd ff ff       	call   0x59a6f0
  59e915:	57                   	push   edi
  59e916:	8b cb                	mov    ecx,ebx
  59e918:	e8 33 da ff ff       	call   0x59c350
  59e91d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59e921:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x1
  59e928:	01 
  59e929:	e8 b2 47 fc ff       	call   0x5630e0
  59e92e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59e932:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  59e936:	40                   	inc    eax
  59e937:	3b c1                	cmp    eax,ecx
  59e939:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  59e93d:	0f 8c ee fb ff ff    	jl     0x59e531
  59e943:	8b e9                	mov    ebp,ecx
  59e945:	33 c0                	xor    eax,eax
  59e947:	85 ed                	test   ebp,ebp
  59e949:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  59e94d:	0f 8e 52 01 00 00    	jle    0x59eaa5
  59e953:	50                   	push   eax
  59e954:	68 c8 a5 6b 00       	push   0x6ba5c8
  59e959:	51                   	push   ecx
  59e95a:	8d 84 24 c8 00 00 00 	lea    eax,[esp+0xc8]
  59e961:	8b cc                	mov    ecx,esp
  59e963:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  59e967:	50                   	push   eax
  59e968:	e8 f3 ad ea ff       	call   0x449760
  59e96d:	e8 1e 1b 00 00       	call   0x5a0490
  59e972:	83 c4 08             	add    esp,0x8
  59e975:	8d 54 24 20          	lea    edx,[esp+0x20]
  59e979:	8b cc                	mov    ecx,esp
  59e97b:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  59e97f:	52                   	push   edx
  59e980:	8b f8                	mov    edi,eax
  59e982:	e8 49 c8 ff ff       	call   0x59b1d0
  59e987:	8b cb                	mov    ecx,ebx
  59e989:	e8 02 f6 ff ff       	call   0x59df90
  59e98e:	8b f0                	mov    esi,eax
  59e990:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  59e993:	85 c0                	test   eax,eax
  59e995:	74 3a                	je     0x59e9d1
  59e997:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59e99b:	8d 94 24 bc 00 00 00 	lea    edx,[esp+0xbc]
  59e9a2:	51                   	push   ecx
  59e9a3:	50                   	push   eax
  59e9a4:	51                   	push   ecx
  59e9a5:	8b cc                	mov    ecx,esp
  59e9a7:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  59e9ab:	52                   	push   edx
  59e9ac:	e8 af ad ea ff       	call   0x449760
  59e9b1:	8b cb                	mov    ecx,ebx
  59e9b3:	e8 f8 f7 ff ff       	call   0x59e1b0
  59e9b8:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  59e9bc:	8b ce                	mov    ecx,esi
  59e9be:	50                   	push   eax
  59e9bf:	e8 bc a2 ff ff       	call   0x598c80
  59e9c4:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59e9c8:	51                   	push   ecx
  59e9c9:	8d 4e 54             	lea    ecx,[esi+0x54]
  59e9cc:	e8 ff c7 ff ff       	call   0x59b1d0
  59e9d1:	8b 47 1c             	mov    eax,DWORD PTR [edi+0x1c]
  59e9d4:	85 c0                	test   eax,eax
  59e9d6:	74 3a                	je     0x59ea12
  59e9d8:	8d 54 24 14          	lea    edx,[esp+0x14]
  59e9dc:	52                   	push   edx
  59e9dd:	50                   	push   eax
  59e9de:	51                   	push   ecx
  59e9df:	8d 84 24 c8 00 00 00 	lea    eax,[esp+0xc8]
  59e9e6:	8b cc                	mov    ecx,esp
  59e9e8:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  59e9ec:	50                   	push   eax
  59e9ed:	e8 6e ad ea ff       	call   0x449760
  59e9f2:	8b cb                	mov    ecx,ebx
  59e9f4:	e8 b7 f7 ff ff       	call   0x59e1b0
  59e9f9:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  59e9fd:	51                   	push   ecx
  59e9fe:	8b ce                	mov    ecx,esi
  59ea00:	e8 7b a2 ff ff       	call   0x598c80
  59ea05:	8d 54 24 14          	lea    edx,[esp+0x14]
  59ea09:	8d 4e 58             	lea    ecx,[esi+0x58]
  59ea0c:	52                   	push   edx
  59ea0d:	e8 be c7 ff ff       	call   0x59b1d0
  59ea12:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
  59ea15:	85 c0                	test   eax,eax
  59ea17:	74 3a                	je     0x59ea53
  59ea19:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59ea1d:	8d 94 24 bc 00 00 00 	lea    edx,[esp+0xbc]
  59ea24:	51                   	push   ecx
  59ea25:	50                   	push   eax
  59ea26:	51                   	push   ecx
  59ea27:	8b cc                	mov    ecx,esp
  59ea29:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  59ea2d:	52                   	push   edx
  59ea2e:	e8 2d ad ea ff       	call   0x449760
  59ea33:	8b cb                	mov    ecx,ebx
  59ea35:	e8 76 f7 ff ff       	call   0x59e1b0
  59ea3a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  59ea3e:	8b ce                	mov    ecx,esi
  59ea40:	50                   	push   eax
  59ea41:	e8 3a a2 ff ff       	call   0x598c80
  59ea46:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59ea4a:	51                   	push   ecx
  59ea4b:	8d 4e 5c             	lea    ecx,[esi+0x5c]
  59ea4e:	e8 7d c7 ff ff       	call   0x59b1d0
  59ea53:	8b 7f 24             	mov    edi,DWORD PTR [edi+0x24]
  59ea56:	85 ff                	test   edi,edi
  59ea58:	74 3a                	je     0x59ea94
  59ea5a:	8d 54 24 14          	lea    edx,[esp+0x14]
  59ea5e:	8d 84 24 bc 00 00 00 	lea    eax,[esp+0xbc]
  59ea65:	52                   	push   edx
  59ea66:	57                   	push   edi
  59ea67:	51                   	push   ecx
  59ea68:	8b cc                	mov    ecx,esp
  59ea6a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  59ea6e:	50                   	push   eax
  59ea6f:	e8 ec ac ea ff       	call   0x449760
  59ea74:	8b cb                	mov    ecx,ebx
  59ea76:	e8 35 f7 ff ff       	call   0x59e1b0
  59ea7b:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  59ea7f:	51                   	push   ecx
  59ea80:	8b ce                	mov    ecx,esi
  59ea82:	e8 f9 a1 ff ff       	call   0x598c80
  59ea87:	8d 54 24 14          	lea    edx,[esp+0x14]
  59ea8b:	8d 4e 60             	lea    ecx,[esi+0x60]
  59ea8e:	52                   	push   edx
  59ea8f:	e8 3c c7 ff ff       	call   0x59b1d0
  59ea94:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59ea98:	40                   	inc    eax
  59ea99:	3b c5                	cmp    eax,ebp
  59ea9b:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  59ea9f:	0f 8c ae fe ff ff    	jl     0x59e953
  59eaa5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59eaa9:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x0
  59eab0:	00 
  59eab1:	e8 2a 46 fc ff       	call   0x5630e0
  59eab6:	8b 84 24 bc 00 00 00 	mov    eax,DWORD PTR [esp+0xbc]
  59eabd:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0xffffffff
  59eac4:	ff ff ff ff 
  59eac8:	85 c0                	test   eax,eax
  59eaca:	74 18                	je     0x59eae4
  59eacc:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59eacf:	8b c8                	mov    ecx,eax
  59ead1:	83 c0 14             	add    eax,0x14
  59ead4:	4e                   	dec    esi
  59ead5:	8b d6                	mov    edx,esi
  59ead7:	85 d2                	test   edx,edx
  59ead9:	89 30                	mov    DWORD PTR [eax],esi
  59eadb:	75 07                	jne    0x59eae4
  59eadd:	6a 00                	push   0x0
  59eadf:	e8 dc d4 00 00       	call   0x5abfc0
  59eae4:	b0 01                	mov    al,0x1
  59eae6:	8b 8c 24 ac 00 00 00 	mov    ecx,DWORD PTR [esp+0xac]
  59eaed:	5f                   	pop    edi
  59eaee:	5e                   	pop    esi
  59eaef:	5d                   	pop    ebp
  59eaf0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59eaf7:	5b                   	pop    ebx
  59eaf8:	81 c4 a8 00 00 00    	add    esp,0xa8
  59eafe:	c2 04 00             	ret    0x4
  59eb01:	90                   	nop
  59eb02:	90                   	nop
  59eb03:	90                   	nop
  59eb04:	90                   	nop
  59eb05:	90                   	nop
  59eb06:	90                   	nop
  59eb07:	90                   	nop
  59eb08:	90                   	nop
  59eb09:	90                   	nop
  59eb0a:	90                   	nop
  59eb0b:	90                   	nop
  59eb0c:	90                   	nop
  59eb0d:	90                   	nop
  59eb0e:	90                   	nop
  59eb0f:	90                   	nop
  59eb10:	83 ec 30             	sub    esp,0x30
  59eb13:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  59eb17:	56                   	push   esi
  59eb18:	8b 74 24 38          	mov    esi,DWORD PTR [esp+0x38]
  59eb1c:	8d 44 24 04          	lea    eax,[esp+0x4]
  59eb20:	50                   	push   eax
  59eb21:	8b d6                	mov    edx,esi
  59eb23:	e8 b8 44 01 00       	call   0x5b2fe0
  59eb28:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59eb2c:	8b d6                	mov    edx,esi
  59eb2e:	51                   	push   ecx
  59eb2f:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  59eb33:	e8 a8 44 01 00       	call   0x5b2fe0
  59eb38:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  59eb3c:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  59eb40:	52                   	push   edx
  59eb41:	8b d6                	mov    edx,esi
  59eb43:	e8 98 44 01 00       	call   0x5b2fe0
  59eb48:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  59eb4c:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  59eb50:	51                   	push   ecx
  59eb51:	d9 e0                	fchs
  59eb53:	d9 1c 24             	fstp   DWORD PTR [esp]
  59eb56:	6a 00                	push   0x0
  59eb58:	50                   	push   eax
  59eb59:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59eb5d:	e8 be 42 01 00       	call   0x5b2e20
  59eb62:	8d 54 24 10          	lea    edx,[esp+0x10]
  59eb66:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59eb6a:	e8 d1 42 01 00       	call   0x5b2e40
  59eb6f:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  59eb73:	8d 54 24 10          	lea    edx,[esp+0x10]
  59eb77:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59eb7b:	e8 c0 42 01 00       	call   0x5b2e40
  59eb80:	d8 4c 24 38          	fmul   DWORD PTR [esp+0x38]
  59eb84:	5e                   	pop    esi
  59eb85:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  59eb8b:	df e0                	fnstsw ax
  59eb8d:	f6 c4 01             	test   ah,0x1
  59eb90:	75 09                	jne    0x59eb9b
  59eb92:	b8 01 00 00 00       	mov    eax,0x1
  59eb97:	83 c4 30             	add    esp,0x30
  59eb9a:	c3                   	ret
  59eb9b:	33 c0                	xor    eax,eax
  59eb9d:	83 c4 30             	add    esp,0x30
  59eba0:	c3                   	ret
  59eba1:	90                   	nop
  59eba2:	90                   	nop
  59eba3:	90                   	nop
  59eba4:	90                   	nop
  59eba5:	90                   	nop
  59eba6:	90                   	nop
  59eba7:	90                   	nop
  59eba8:	90                   	nop
  59eba9:	90                   	nop
  59ebaa:	90                   	nop
  59ebab:	90                   	nop
  59ebac:	90                   	nop
  59ebad:	90                   	nop
  59ebae:	90                   	nop
  59ebaf:	90                   	nop
