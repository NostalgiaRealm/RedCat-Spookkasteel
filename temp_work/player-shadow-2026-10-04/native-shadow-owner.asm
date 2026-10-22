
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0042dfa0 <.text+0x2cfa0>:
  42dfa0:	6a ff                	push   0xffffffff
  42dfa2:	68 c9 35 62 00       	push   0x6235c9
  42dfa7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42dfad:	50                   	push   eax
  42dfae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42dfb5:	83 ec 28             	sub    esp,0x28
  42dfb8:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  42dfbc:	53                   	push   ebx
  42dfbd:	56                   	push   esi
  42dfbe:	8b f1                	mov    esi,ecx
  42dfc0:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  42dfc4:	57                   	push   edi
  42dfc5:	50                   	push   eax
  42dfc6:	33 db                	xor    ebx,ebx
  42dfc8:	51                   	push   ecx
  42dfc9:	8b ce                	mov    ecx,esi
  42dfcb:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  42dfcf:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  42dfd3:	e8 68 d2 06 00       	call   0x49b240
  42dfd8:	53                   	push   ebx
  42dfd9:	8b ce                	mov    ecx,esi
  42dfdb:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  42dfdf:	89 9e 94 02 00 00    	mov    DWORD PTR [esi+0x294],ebx
  42dfe5:	88 9e 98 02 00 00    	mov    BYTE PTR [esi+0x298],bl
  42dfeb:	88 9e a8 02 00 00    	mov    BYTE PTR [esi+0x2a8],bl
  42dff1:	c7 06 38 c3 64 00    	mov    DWORD PTR [esi],0x64c338
  42dff7:	e8 54 43 0d 00       	call   0x502350
  42dffc:	39 9e 94 02 00 00    	cmp    DWORD PTR [esi+0x294],ebx
  42e002:	74 7b                	je     0x42e07f
  42e004:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42e009:	83 c9 ff             	or     ecx,0xffffffff
  42e00c:	33 c0                	xor    eax,eax
  42e00e:	8a 54 24 48          	mov    dl,BYTE PTR [esp+0x48]
  42e012:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42e014:	f7 d1                	not    ecx
  42e016:	49                   	dec    ecx
  42e017:	88 54 24 14          	mov    BYTE PTR [esp+0x14],dl
  42e01b:	51                   	push   ecx
  42e01c:	68 70 3f 6b 00       	push   0x6b3f70
  42e021:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42e025:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42e029:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  42e02d:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42e031:	e8 ba 60 fd ff       	call   0x4040f0
  42e036:	8d 44 24 14          	lea    eax,[esp+0x14]
  42e03a:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  42e03f:	50                   	push   eax
  42e040:	6a 26                	push   0x26
  42e042:	68 04 01 69 00       	push   0x690104
  42e047:	68 f8 00 69 00       	push   0x6900f8
  42e04c:	e8 9f 27 17 00       	call   0x5a07f0
  42e051:	ff d0                	call   eax
  42e053:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  42e057:	83 c4 10             	add    esp,0x10
  42e05a:	3b c3                	cmp    eax,ebx
  42e05c:	88 5c 24 3c          	mov    BYTE PTR [esp+0x3c],bl
  42e060:	74 1d                	je     0x42e07f
  42e062:	8d 48 ff             	lea    ecx,[eax-0x1]
  42e065:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42e068:	3a c3                	cmp    al,bl
  42e06a:	74 0a                	je     0x42e076
  42e06c:	3c ff                	cmp    al,0xff
  42e06e:	74 06                	je     0x42e076
  42e070:	fe c8                	dec    al
  42e072:	88 01                	mov    BYTE PTR [ecx],al
  42e074:	eb 09                	jmp    0x42e07f
  42e076:	51                   	push   ecx
  42e077:	e8 74 05 1d 00       	call   0x5fe5f0
  42e07c:	83 c4 04             	add    esp,0x4
  42e07f:	55                   	push   ebp
  42e080:	68 b4 01 00 00       	push   0x1b4
  42e085:	e8 2b c0 1d 00       	call   0x60a0b5
  42e08a:	8b e8                	mov    ebp,eax
  42e08c:	83 c4 04             	add    esp,0x4
  42e08f:	89 6c 24 4c          	mov    DWORD PTR [esp+0x4c],ebp
  42e093:	3b eb                	cmp    ebp,ebx
  42e095:	c6 44 24 40 02       	mov    BYTE PTR [esp+0x40],0x2
  42e09a:	74 6b                	je     0x42e107
  42e09c:	8a 4c 24 4c          	mov    cl,BYTE PTR [esp+0x4c]
  42e0a0:	bf e8 00 69 00       	mov    edi,0x6900e8
  42e0a5:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  42e0a9:	83 c9 ff             	or     ecx,0xffffffff
  42e0ac:	33 c0                	xor    eax,eax
  42e0ae:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  42e0b2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42e0b4:	f7 d1                	not    ecx
  42e0b6:	49                   	dec    ecx
  42e0b7:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42e0bb:	51                   	push   ecx
  42e0bc:	68 e8 00 69 00       	push   0x6900e8
  42e0c1:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42e0c5:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42e0c9:	e8 22 60 fd ff       	call   0x4040f0
  42e0ce:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  42e0d5:	00 
  42e0d6:	8d 54 24 18          	lea    edx,[esp+0x18]
  42e0da:	8d 44 24 28          	lea    eax,[esp+0x28]
  42e0de:	52                   	push   edx
  42e0df:	50                   	push   eax
  42e0e0:	c6 44 24 48 03       	mov    BYTE PTR [esp+0x48],0x3
  42e0e5:	e8 b6 52 0d 00       	call   0x5033a0
  42e0ea:	83 c4 08             	add    esp,0x8
  42e0ed:	c7 44 24 10 03 00 00 	mov    DWORD PTR [esp+0x10],0x3
  42e0f4:	00 
  42e0f5:	50                   	push   eax
  42e0f6:	8b cd                	mov    ecx,ebp
  42e0f8:	c7 44 24 44 04 00 00 	mov    DWORD PTR [esp+0x44],0x4
  42e0ff:	00 
  42e100:	e8 3b ed 03 00       	call   0x46ce40
  42e105:	eb 02                	jmp    0x42e109
  42e107:	33 c0                	xor    eax,eax
  42e109:	8d be 94 02 00 00    	lea    edi,[esi+0x294]
  42e10f:	5d                   	pop    ebp
  42e110:	89 07                	mov    DWORD PTR [edi],eax
  42e112:	8a 44 24 0c          	mov    al,BYTE PTR [esp+0xc]
  42e116:	a8 02                	test   al,0x2
  42e118:	74 3c                	je     0x42e156
  42e11a:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  42e11e:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  42e122:	83 e2 fd             	and    edx,0xfffffffd
  42e125:	3b c3                	cmp    eax,ebx
  42e127:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  42e12b:	74 1d                	je     0x42e14a
  42e12d:	8d 48 ff             	lea    ecx,[eax-0x1]
  42e130:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42e133:	3a c3                	cmp    al,bl
  42e135:	74 0a                	je     0x42e141
  42e137:	3c ff                	cmp    al,0xff
  42e139:	74 06                	je     0x42e141
  42e13b:	fe c8                	dec    al
  42e13d:	88 01                	mov    BYTE PTR [ecx],al
  42e13f:	eb 09                	jmp    0x42e14a
  42e141:	51                   	push   ecx
  42e142:	e8 a9 04 1d 00       	call   0x5fe5f0
  42e147:	83 c4 04             	add    esp,0x4
  42e14a:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42e14e:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  42e152:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  42e156:	8a 44 24 0c          	mov    al,BYTE PTR [esp+0xc]
  42e15a:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
  42e15e:	a8 01                	test   al,0x1
  42e160:	74 25                	je     0x42e187
  42e162:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42e166:	3b c3                	cmp    eax,ebx
  42e168:	74 1d                	je     0x42e187
  42e16a:	8d 48 ff             	lea    ecx,[eax-0x1]
  42e16d:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42e170:	3a c3                	cmp    al,bl
  42e172:	74 0a                	je     0x42e17e
  42e174:	3c ff                	cmp    al,0xff
  42e176:	74 06                	je     0x42e17e
  42e178:	fe c8                	dec    al
  42e17a:	88 01                	mov    BYTE PTR [ecx],al
  42e17c:	eb 09                	jmp    0x42e187
  42e17e:	51                   	push   ecx
  42e17f:	e8 6c 04 1d 00       	call   0x5fe5f0
  42e184:	83 c4 04             	add    esp,0x4
  42e187:	8b 0f                	mov    ecx,DWORD PTR [edi]
  42e189:	53                   	push   ebx
  42e18a:	e8 c1 41 0d 00       	call   0x502350
  42e18f:	8b 0f                	mov    ecx,DWORD PTR [edi]
  42e191:	57                   	push   edi
  42e192:	51                   	push   ecx
  42e193:	8b ce                	mov    ecx,esi
  42e195:	e8 f6 b8 0d 00       	call   0x509a90
  42e19a:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  42e19e:	8b c6                	mov    eax,esi
  42e1a0:	5f                   	pop    edi
  42e1a1:	5e                   	pop    esi
  42e1a2:	5b                   	pop    ebx
  42e1a3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42e1aa:	83 c4 34             	add    esp,0x34
  42e1ad:	c2 08 00             	ret    0x8
  42e1b0:	56                   	push   esi
  42e1b1:	8b f1                	mov    esi,ecx
  42e1b3:	e8 18 00 00 00       	call   0x42e1d0
  42e1b8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  42e1bd:	74 09                	je     0x42e1c8
  42e1bf:	56                   	push   esi
  42e1c0:	e8 2b 04 1d 00       	call   0x5fe5f0
  42e1c5:	83 c4 04             	add    esp,0x4
  42e1c8:	8b c6                	mov    eax,esi
  42e1ca:	5e                   	pop    esi
  42e1cb:	c2 04 00             	ret    0x4
  42e1ce:	90                   	nop
  42e1cf:	90                   	nop
  42e1d0:	6a ff                	push   0xffffffff
  42e1d2:	68 e8 35 62 00       	push   0x6235e8
  42e1d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42e1dd:	50                   	push   eax
  42e1de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42e1e5:	51                   	push   ecx
  42e1e6:	56                   	push   esi
  42e1e7:	8b f1                	mov    esi,ecx
  42e1e9:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  42e1ed:	c7 06 38 c3 64 00    	mov    DWORD PTR [esi],0x64c338
  42e1f3:	8b 8e 94 02 00 00    	mov    ecx,DWORD PTR [esi+0x294]
  42e1f9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  42e200:	00 
  42e201:	85 c9                	test   ecx,ecx
  42e203:	74 10                	je     0x42e215
  42e205:	8b 01                	mov    eax,DWORD PTR [ecx]
  42e207:	6a 01                	push   0x1
  42e209:	ff 10                	call   DWORD PTR [eax]
  42e20b:	c7 86 94 02 00 00 00 	mov    DWORD PTR [esi+0x294],0x0
  42e212:	00 00 00 
  42e215:	8b ce                	mov    ecx,esi
  42e217:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  42e21e:	ff 
  42e21f:	e8 fc d4 06 00       	call   0x49b720
  42e224:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  42e228:	5e                   	pop    esi
  42e229:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42e230:	83 c4 10             	add    esp,0x10
  42e233:	c3                   	ret
  42e234:	90                   	nop
  42e235:	90                   	nop
  42e236:	90                   	nop
  42e237:	90                   	nop
  42e238:	90                   	nop
  42e239:	90                   	nop
  42e23a:	90                   	nop
  42e23b:	90                   	nop
  42e23c:	90                   	nop
  42e23d:	90                   	nop
  42e23e:	90                   	nop
  42e23f:	90                   	nop
  42e240:	6a ff                	push   0xffffffff
  42e242:	68 08 36 62 00       	push   0x623608
  42e247:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42e24d:	50                   	push   eax
  42e24e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42e255:	83 ec 14             	sub    esp,0x14
  42e258:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  42e25c:	53                   	push   ebx
  42e25d:	56                   	push   esi
  42e25e:	33 db                	xor    ebx,ebx
  42e260:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
  42e263:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  42e267:	3b f3                	cmp    esi,ebx
  42e269:	75 05                	jne    0x42e270
  42e26b:	be b4 a3 64 00       	mov    esi,0x64a3b4
  42e270:	8a 4c 24 2c          	mov    cl,BYTE PTR [esp+0x2c]
  42e274:	55                   	push   ebp
  42e275:	57                   	push   edi
  42e276:	88 4c 24 14          	mov    BYTE PTR [esp+0x14],cl
  42e27a:	8b fe                	mov    edi,esi
  42e27c:	83 c9 ff             	or     ecx,0xffffffff
  42e27f:	33 c0                	xor    eax,eax
  42e281:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  42e285:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  42e289:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42e28d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42e28f:	f7 d1                	not    ecx
  42e291:	49                   	dec    ecx
  42e292:	6a 01                	push   0x1
  42e294:	8b e9                	mov    ebp,ecx
  42e296:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42e29a:	55                   	push   ebp
  42e29b:	e8 a0 36 fd ff       	call   0x401940
  42e2a0:	84 c0                	test   al,al
  42e2a2:	74 1f                	je     0x42e2c3
  42e2a4:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  42e2a8:	8b cd                	mov    ecx,ebp
  42e2aa:	8b d1                	mov    edx,ecx
  42e2ac:	c1 e9 02             	shr    ecx,0x2
  42e2af:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42e2b1:	8b ca                	mov    ecx,edx
  42e2b3:	83 e1 03             	and    ecx,0x3
  42e2b6:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42e2b8:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42e2bc:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  42e2c0:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  42e2c3:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  42e2c7:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  42e2cb:	51                   	push   ecx
  42e2cc:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  42e2d0:	8d 44 24 18          	lea    eax,[esp+0x18]
  42e2d4:	52                   	push   edx
  42e2d5:	50                   	push   eax
  42e2d6:	81 c1 9c 01 00 00    	add    ecx,0x19c
  42e2dc:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  42e2e0:	e8 7b 23 07 00       	call   0x4a0660
  42e2e5:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42e2e9:	5f                   	pop    edi
  42e2ea:	3b c3                	cmp    eax,ebx
  42e2ec:	5d                   	pop    ebp
  42e2ed:	74 2e                	je     0x42e31d
  42e2ef:	8d 48 ff             	lea    ecx,[eax-0x1]
  42e2f2:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42e2f5:	3a c3                	cmp    al,bl
  42e2f7:	74 1b                	je     0x42e314
  42e2f9:	3c ff                	cmp    al,0xff
  42e2fb:	74 17                	je     0x42e314
  42e2fd:	fe c8                	dec    al
  42e2ff:	5e                   	pop    esi
  42e300:	88 01                	mov    BYTE PTR [ecx],al
  42e302:	5b                   	pop    ebx
  42e303:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  42e307:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42e30e:	83 c4 20             	add    esp,0x20
  42e311:	c2 0c 00             	ret    0xc
  42e314:	51                   	push   ecx
  42e315:	e8 d6 02 1d 00       	call   0x5fe5f0
  42e31a:	83 c4 04             	add    esp,0x4
  42e31d:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  42e321:	5e                   	pop    esi
  42e322:	5b                   	pop    ebx
  42e323:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42e32a:	83 c4 20             	add    esp,0x20
  42e32d:	c2 0c 00             	ret    0xc
  42e330:	53                   	push   ebx
  42e331:	8b 5c 24 08          	mov    ebx,DWORD PTR [esp+0x8]
  42e335:	56                   	push   esi
  42e336:	57                   	push   edi
  42e337:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  42e33b:	8b f1                	mov    esi,ecx
  42e33d:	57                   	push   edi
  42e33e:	53                   	push   ebx
  42e33f:	e8 4c f5 06 00       	call   0x49d890
  42e344:	8b 8e 94 02 00 00    	mov    ecx,DWORD PTR [esi+0x294]
  42e34a:	85 c9                	test   ecx,ecx
  42e34c:	74 07                	je     0x42e355
  42e34e:	8b 01                	mov    eax,DWORD PTR [ecx]
  42e350:	57                   	push   edi
  42e351:	53                   	push   ebx
  42e352:	ff 50 08             	call   DWORD PTR [eax+0x8]
  42e355:	5f                   	pop    edi
  42e356:	5e                   	pop    esi
  42e357:	5b                   	pop    ebx
  42e358:	c2 08 00             	ret    0x8
  42e35b:	90                   	nop
  42e35c:	90                   	nop
  42e35d:	90                   	nop
  42e35e:	90                   	nop
  42e35f:	90                   	nop
  42e360:	6a ff                	push   0xffffffff
  42e362:	68 48 36 62 00       	push   0x623648
  42e367:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42e36d:	50                   	push   eax
  42e36e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42e375:	83 ec 1c             	sub    esp,0x1c
  42e378:	55                   	push   ebp
  42e379:	56                   	push   esi
  42e37a:	57                   	push   edi
  42e37b:	8b f1                	mov    esi,ecx
  42e37d:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
  42e381:	c7 44 24 30 01 00 00 	mov    DWORD PTR [esp+0x30],0x1
  42e388:	00 
  42e389:	85 ff                	test   edi,edi
  42e38b:	0f 84 d6 00 00 00    	je     0x42e467
  42e391:	8b 86 94 02 00 00    	mov    eax,DWORD PTR [esi+0x294]
  42e397:	85 c0                	test   eax,eax
  42e399:	0f 84 c8 00 00 00    	je     0x42e467
  42e39f:	8d 44 24 0c          	lea    eax,[esp+0xc]
  42e3a3:	50                   	push   eax
  42e3a4:	e8 37 5f fd ff       	call   0x4042e0
  42e3a9:	8b e8                	mov    ebp,eax
  42e3ab:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  42e3ae:	c6 44 24 30 02       	mov    BYTE PTR [esp+0x30],0x2
  42e3b3:	85 c0                	test   eax,eax
  42e3b5:	75 68                	jne    0x42e41f
  42e3b7:	8a 4c 24 38          	mov    cl,BYTE PTR [esp+0x38]
  42e3bb:	6a 00                	push   0x0
  42e3bd:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  42e3c1:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42e3c5:	e8 d6 5c fd ff       	call   0x4040a0
  42e3ca:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42e3cf:	83 c9 ff             	or     ecx,0xffffffff
  42e3d2:	33 c0                	xor    eax,eax
  42e3d4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42e3d6:	f7 d1                	not    ecx
  42e3d8:	49                   	dec    ecx
  42e3d9:	51                   	push   ecx
  42e3da:	68 70 3f 6b 00       	push   0x6b3f70
  42e3df:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42e3e3:	e8 08 5d fd ff       	call   0x4040f0
  42e3e8:	8d 54 24 18          	lea    edx,[esp+0x18]
  42e3ec:	c6 44 24 30 03       	mov    BYTE PTR [esp+0x30],0x3
  42e3f1:	52                   	push   edx
  42e3f2:	68 b6 00 00 00       	push   0xb6
  42e3f7:	68 38 d6 68 00       	push   0x68d638
  42e3fc:	68 2c d6 68 00       	push   0x68d62c
  42e401:	e8 ea 23 17 00       	call   0x5a07f0
  42e406:	ff d0                	call   eax
  42e408:	83 c4 10             	add    esp,0x10
  42e40b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42e40f:	c6 44 24 30 02       	mov    BYTE PTR [esp+0x30],0x2
  42e414:	6a 01                	push   0x1
  42e416:	e8 85 5c fd ff       	call   0x4040a0
  42e41b:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
  42e41f:	8b 86 94 02 00 00    	mov    eax,DWORD PTR [esi+0x294]
  42e425:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  42e428:	50                   	push   eax
  42e429:	e8 92 5d 0c 00       	call   0x4f41c0
  42e42e:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  42e432:	c6 44 24 30 01       	mov    BYTE PTR [esp+0x30],0x1
  42e437:	85 c0                	test   eax,eax
  42e439:	74 20                	je     0x42e45b
  42e43b:	8b 68 14             	mov    ebp,DWORD PTR [eax+0x14]
  42e43e:	8b c8                	mov    ecx,eax
  42e440:	83 c0 14             	add    eax,0x14
  42e443:	4d                   	dec    ebp
  42e444:	8b d5                	mov    edx,ebp
  42e446:	85 d2                	test   edx,edx
  42e448:	89 28                	mov    DWORD PTR [eax],ebp
  42e44a:	75 07                	jne    0x42e453
  42e44c:	6a 00                	push   0x0
  42e44e:	e8 6d db 17 00       	call   0x5abfc0
  42e453:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  42e45a:	00 
  42e45b:	8b 8e 94 02 00 00    	mov    ecx,DWORD PTR [esi+0x294]
  42e461:	56                   	push   esi
  42e462:	e8 b9 f5 03 00       	call   0x46da20
  42e467:	51                   	push   ecx
  42e468:	8b c4                	mov    eax,esp
  42e46a:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  42e46e:	85 ff                	test   edi,edi
  42e470:	89 38                	mov    DWORD PTR [eax],edi
  42e472:	74 03                	je     0x42e477
  42e474:	ff 47 14             	inc    DWORD PTR [edi+0x14]
  42e477:	51                   	push   ecx
  42e478:	8d 54 24 40          	lea    edx,[esp+0x40]
  42e47c:	8b cc                	mov    ecx,esp
  42e47e:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  42e482:	52                   	push   edx
  42e483:	c6 44 24 3c 04       	mov    BYTE PTR [esp+0x3c],0x4
  42e488:	e8 d3 b2 01 00       	call   0x449760
  42e48d:	8b ce                	mov    ecx,esi
  42e48f:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  42e494:	e8 17 dd 06 00       	call   0x49c1b0
  42e499:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  42e49d:	c6 44 24 30 00       	mov    BYTE PTR [esp+0x30],0x0
  42e4a2:	85 c0                	test   eax,eax
  42e4a4:	74 20                	je     0x42e4c6
  42e4a6:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  42e4a9:	8b c8                	mov    ecx,eax
  42e4ab:	83 c0 14             	add    eax,0x14
  42e4ae:	4e                   	dec    esi
  42e4af:	8b d6                	mov    edx,esi
  42e4b1:	85 d2                	test   edx,edx
  42e4b3:	89 30                	mov    DWORD PTR [eax],esi
  42e4b5:	75 07                	jne    0x42e4be
  42e4b7:	6a 00                	push   0x0
  42e4b9:	e8 02 db 17 00       	call   0x5abfc0
  42e4be:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  42e4c5:	00 
  42e4c6:	85 ff                	test   edi,edi
  42e4c8:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  42e4cf:	ff 
  42e4d0:	74 12                	je     0x42e4e4
  42e4d2:	8b 47 14             	mov    eax,DWORD PTR [edi+0x14]
  42e4d5:	48                   	dec    eax
  42e4d6:	89 47 14             	mov    DWORD PTR [edi+0x14],eax
  42e4d9:	75 09                	jne    0x42e4e4
  42e4db:	6a 00                	push   0x0
  42e4dd:	8b cf                	mov    ecx,edi
  42e4df:	e8 dc da 17 00       	call   0x5abfc0
  42e4e4:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  42e4e8:	5f                   	pop    edi
  42e4e9:	5e                   	pop    esi
  42e4ea:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42e4f1:	5d                   	pop    ebp
  42e4f2:	83 c4 28             	add    esp,0x28
  42e4f5:	c2 08 00             	ret    0x8
  42e4f8:	90                   	nop
  42e4f9:	90                   	nop
  42e4fa:	90                   	nop
  42e4fb:	90                   	nop
  42e4fc:	90                   	nop
  42e4fd:	90                   	nop
  42e4fe:	90                   	nop
  42e4ff:	90                   	nop
  42e500:	e9 0b ed 06 00       	jmp    0x49d210
  42e505:	90                   	nop
  42e506:	90                   	nop
  42e507:	90                   	nop
  42e508:	90                   	nop
  42e509:	90                   	nop
  42e50a:	90                   	nop
  42e50b:	90                   	nop
  42e50c:	90                   	nop
  42e50d:	90                   	nop
  42e50e:	90                   	nop
  42e50f:	90                   	nop
  42e510:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  42e514:	56                   	push   esi
  42e515:	8b f1                	mov    esi,ecx
  42e517:	50                   	push   eax
  42e518:	e8 63 41 0d 00       	call   0x502680
  42e51d:	c6 86 a8 02 00 00 01 	mov    BYTE PTR [esi+0x2a8],0x1
  42e524:	5e                   	pop    esi
  42e525:	c2 04 00             	ret    0x4
  42e528:	90                   	nop
  42e529:	90                   	nop
  42e52a:	90                   	nop
  42e52b:	90                   	nop
  42e52c:	90                   	nop
  42e52d:	90                   	nop
  42e52e:	90                   	nop
  42e52f:	90                   	nop
  42e530:	56                   	push   esi
  42e531:	8b f1                	mov    esi,ecx
  42e533:	e8 d8 41 0d 00       	call   0x502710
  42e538:	c6 86 a8 02 00 00 00 	mov    BYTE PTR [esi+0x2a8],0x0
  42e53f:	5e                   	pop    esi
  42e540:	c3                   	ret
  42e541:	90                   	nop
  42e542:	90                   	nop
  42e543:	90                   	nop
  42e544:	90                   	nop
  42e545:	90                   	nop
  42e546:	90                   	nop
  42e547:	90                   	nop
  42e548:	90                   	nop
  42e549:	90                   	nop
  42e54a:	90                   	nop
  42e54b:	90                   	nop
  42e54c:	90                   	nop
  42e54d:	90                   	nop
  42e54e:	90                   	nop
  42e54f:	90                   	nop
  42e550:	8a 81 a8 02 00 00    	mov    al,BYTE PTR [ecx+0x2a8]
  42e556:	c3                   	ret
  42e557:	90                   	nop
  42e558:	90                   	nop
  42e559:	90                   	nop
  42e55a:	90                   	nop
  42e55b:	90                   	nop
  42e55c:	90                   	nop
  42e55d:	90                   	nop
  42e55e:	90                   	nop
  42e55f:	90                   	nop
