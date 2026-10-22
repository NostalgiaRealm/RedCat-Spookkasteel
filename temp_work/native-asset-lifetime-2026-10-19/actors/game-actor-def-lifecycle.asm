  49ef30:	6a ff                	push   0xffffffff
  49ef32:	68 28 cc 62 00       	push   0x62cc28
  49ef37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49ef3d:	50                   	push   eax
  49ef3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49ef45:	51                   	push   ecx
  49ef46:	53                   	push   ebx
  49ef47:	55                   	push   ebp
  49ef48:	56                   	push   esi
  49ef49:	8b d9                	mov    ebx,ecx
  49ef4b:	57                   	push   edi
  49ef4c:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  49ef50:	e8 4b c5 10 00       	call   0x5ab4a0
  49ef55:	33 c0                	xor    eax,eax
  49ef57:	c7 03 94 e7 64 00    	mov    DWORD PTR [ebx],0x64e794
  49ef5d:	89 43 14             	mov    DWORD PTR [ebx+0x14],eax
  49ef60:	88 43 18             	mov    BYTE PTR [ebx+0x18],al
  49ef63:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  49ef67:	89 43 1c             	mov    DWORD PTR [ebx+0x1c],eax
  49ef6a:	8d 6b 20             	lea    ebp,[ebx+0x20]
  49ef6d:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  49ef71:	8a 0e                	mov    cl,BYTE PTR [esi]
  49ef73:	88 4d 00             	mov    BYTE PTR [ebp+0x0],cl
  49ef76:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
  49ef79:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  49ef7c:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  49ef7f:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  49ef82:	8b 15 a8 ab 64 00    	mov    edx,DWORD PTR ds:0x64aba8
  49ef88:	8b f9                	mov    edi,ecx
  49ef8a:	3b d7                	cmp    edx,edi
  49ef8c:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  49ef90:	73 06                	jae    0x49ef98
  49ef92:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  49ef96:	8b fa                	mov    edi,edx
  49ef98:	3b ee                	cmp    ebp,esi
  49ef9a:	75 5e                	jne    0x49effa
  49ef9c:	3b f8                	cmp    edi,eax
  49ef9e:	8b f2                	mov    esi,edx
  49efa0:	76 05                	jbe    0x49efa7
  49efa2:	e8 a0 f7 15 00       	call   0x5fe747
  49efa7:	8b cd                	mov    ecx,ebp
  49efa9:	e8 62 de f6 ff       	call   0x40ce10
  49efae:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  49efb1:	2b c7                	sub    eax,edi
  49efb3:	3b c6                	cmp    eax,esi
  49efb5:	73 02                	jae    0x49efb9
  49efb7:	8b f0                	mov    esi,eax
  49efb9:	85 f6                	test   esi,esi
  49efbb:	76 31                	jbe    0x49efee
  49efbd:	8b 55 04             	mov    edx,DWORD PTR [ebp+0x4]
  49efc0:	2b c6                	sub    eax,esi
  49efc2:	50                   	push   eax
  49efc3:	8d 0c 17             	lea    ecx,[edi+edx*1]
  49efc6:	8d 04 31             	lea    eax,[ecx+esi*1]
  49efc9:	50                   	push   eax
  49efca:	51                   	push   ecx
  49efcb:	e8 80 bb 16 00       	call   0x60ab50
  49efd0:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  49efd3:	83 c4 0c             	add    esp,0xc
  49efd6:	2b fe                	sub    edi,esi
  49efd8:	8b cd                	mov    ecx,ebp
  49efda:	6a 00                	push   0x0
  49efdc:	57                   	push   edi
  49efdd:	e8 5e 29 f6 ff       	call   0x401940
  49efe2:	84 c0                	test   al,al
  49efe4:	74 08                	je     0x49efee
  49efe6:	57                   	push   edi
  49efe7:	8b cd                	mov    ecx,ebp
  49efe9:	e8 a2 51 f6 ff       	call   0x404190
  49efee:	8b cd                	mov    ecx,ebp
  49eff0:	e8 1b de f6 ff       	call   0x40ce10
  49eff5:	e9 83 00 00 00       	jmp    0x49f07d
  49effa:	3b f8                	cmp    edi,eax
  49effc:	76 44                	jbe    0x49f042
  49effe:	3b f9                	cmp    edi,ecx
  49f000:	75 40                	jne    0x49f042
  49f002:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  49f005:	3b c8                	cmp    ecx,eax
  49f007:	75 05                	jne    0x49f00e
  49f009:	b9 b4 a3 64 00       	mov    ecx,0x64a3b4
  49f00e:	80 79 ff fe          	cmp    BYTE PTR [ecx-0x1],0xfe
  49f012:	73 2e                	jae    0x49f042
  49f014:	6a 01                	push   0x1
  49f016:	8b cd                	mov    ecx,ebp
  49f018:	e8 83 50 f6 ff       	call   0x4040a0
  49f01d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  49f020:	85 c0                	test   eax,eax
  49f022:	75 05                	jne    0x49f029
  49f024:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49f029:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
  49f02c:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  49f02f:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
  49f032:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
  49f035:	89 55 0c             	mov    DWORD PTR [ebp+0xc],edx
  49f038:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  49f03b:	fe c1                	inc    cl
  49f03d:	88 48 ff             	mov    BYTE PTR [eax-0x1],cl
  49f040:	eb 3b                	jmp    0x49f07d
  49f042:	6a 01                	push   0x1
  49f044:	57                   	push   edi
  49f045:	8b cd                	mov    ecx,ebp
  49f047:	e8 f4 28 f6 ff       	call   0x401940
  49f04c:	84 c0                	test   al,al
  49f04e:	74 2d                	je     0x49f07d
  49f050:	8b 76 04             	mov    esi,DWORD PTR [esi+0x4]
  49f053:	85 f6                	test   esi,esi
  49f055:	75 05                	jne    0x49f05c
  49f057:	be b4 a3 64 00       	mov    esi,0x64a3b4
  49f05c:	8b cf                	mov    ecx,edi
  49f05e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  49f061:	8b c1                	mov    eax,ecx
  49f063:	c1 e9 02             	shr    ecx,0x2
  49f066:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49f068:	8b c8                	mov    ecx,eax
  49f06a:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  49f06e:	83 e1 03             	and    ecx,0x3
  49f071:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49f073:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  49f076:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  49f079:	c6 04 08 00          	mov    BYTE PTR [eax+ecx*1],0x0
  49f07d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  49f081:	5f                   	pop    edi
  49f082:	5e                   	pop    esi
  49f083:	c7 03 44 e8 64 00    	mov    DWORD PTR [ebx],0x64e844
  49f089:	8b c3                	mov    eax,ebx
  49f08b:	5d                   	pop    ebp
  49f08c:	5b                   	pop    ebx
  49f08d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49f094:	83 c4 10             	add    esp,0x10
  49f097:	c2 04 00             	ret    0x4
  49f09a:	90                   	nop
  49f09b:	90                   	nop
  49f09c:	90                   	nop
  49f09d:	90                   	nop
  49f09e:	90                   	nop
  49f09f:	90                   	nop
  49f0a0:	56                   	push   esi
  49f0a1:	8b f1                	mov    esi,ecx
  49f0a3:	e8 18 00 00 00       	call   0x49f0c0
  49f0a8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  49f0ad:	74 09                	je     0x49f0b8
  49f0af:	56                   	push   esi
  49f0b0:	e8 3b f5 15 00       	call   0x5fe5f0
  49f0b5:	83 c4 04             	add    esp,0x4
  49f0b8:	8b c6                	mov    eax,esi
  49f0ba:	5e                   	pop    esi
  49f0bb:	c2 04 00             	ret    0x4
  49f0be:	90                   	nop
  49f0bf:	90                   	nop
  49f0c0:	56                   	push   esi
  49f0c1:	8b f1                	mov    esi,ecx
  49f0c3:	c7 06 44 e8 64 00    	mov    DWORD PTR [esi],0x64e844
  49f0c9:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
  49f0cc:	85 c0                	test   eax,eax
  49f0ce:	74 1d                	je     0x49f0ed
  49f0d0:	8d 48 ff             	lea    ecx,[eax-0x1]
  49f0d3:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49f0d6:	84 c0                	test   al,al
  49f0d8:	74 0a                	je     0x49f0e4
  49f0da:	3c ff                	cmp    al,0xff
  49f0dc:	74 06                	je     0x49f0e4
  49f0de:	fe c8                	dec    al
  49f0e0:	88 01                	mov    BYTE PTR [ecx],al
  49f0e2:	eb 09                	jmp    0x49f0ed
  49f0e4:	51                   	push   ecx
  49f0e5:	e8 06 f5 15 00       	call   0x5fe5f0
  49f0ea:	83 c4 04             	add    esp,0x4
  49f0ed:	c7 46 24 00 00 00 00 	mov    DWORD PTR [esi+0x24],0x0
  49f0f4:	c7 46 28 00 00 00 00 	mov    DWORD PTR [esi+0x28],0x0
  49f0fb:	c7 46 2c 00 00 00 00 	mov    DWORD PTR [esi+0x2c],0x0
  49f102:	8b ce                	mov    ecx,esi
  49f104:	c7 06 94 e7 64 00    	mov    DWORD PTR [esi],0x64e794
  49f10a:	e8 c1 c3 10 00       	call   0x5ab4d0
  49f10f:	5e                   	pop    esi
  49f110:	c3                   	ret
  49f111:	90                   	nop
  49f112:	90                   	nop
  49f113:	90                   	nop
  49f114:	90                   	nop
  49f115:	90                   	nop
  49f116:	90                   	nop
  49f117:	90                   	nop
  49f118:	90                   	nop
  49f119:	90                   	nop
  49f11a:	90                   	nop
  49f11b:	90                   	nop
  49f11c:	90                   	nop
  49f11d:	90                   	nop
  49f11e:	90                   	nop
  49f11f:	90                   	nop
  49f120:	6a ff                	push   0xffffffff
  49f122:	68 48 cc 62 00       	push   0x62cc48
  49f127:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49f12d:	50                   	push   eax
  49f12e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49f135:	83 ec 18             	sub    esp,0x18
  49f138:	53                   	push   ebx
  49f139:	56                   	push   esi
  49f13a:	8b f1                	mov    esi,ecx
  49f13c:	33 db                	xor    ebx,ebx
  49f13e:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  49f142:	39 5e 1c             	cmp    DWORD PTR [esi+0x1c],ebx
  49f145:	0f 85 b7 00 00 00    	jne    0x49f202
  49f14b:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  49f14f:	55                   	push   ebp
  49f150:	57                   	push   edi
  49f151:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  49f155:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49f15a:	83 c9 ff             	or     ecx,0xffffffff
  49f15d:	33 c0                	xor    eax,eax
  49f15f:	6a 01                	push   0x1
  49f161:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49f163:	f7 d1                	not    ecx
  49f165:	49                   	dec    ecx
  49f166:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  49f16a:	8b e9                	mov    ebp,ecx
  49f16c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49f170:	55                   	push   ebp
  49f171:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  49f175:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  49f179:	e8 c2 27 f6 ff       	call   0x401940
  49f17e:	84 c0                	test   al,al
  49f180:	74 28                	je     0x49f1aa
  49f182:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  49f186:	8b cd                	mov    ecx,ebp
  49f188:	8b d1                	mov    edx,ecx
  49f18a:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  49f18f:	c1 e9 02             	shr    ecx,0x2
  49f192:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49f194:	8b ca                	mov    ecx,edx
  49f196:	83 e1 03             	and    ecx,0x3
  49f199:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49f19b:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  49f19f:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  49f1a3:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  49f1a7:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  49f1aa:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  49f1ae:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  49f1b2:	51                   	push   ecx
  49f1b3:	6a 20                	push   0x20
  49f1b5:	68 8c 50 69 00       	push   0x69508c
  49f1ba:	68 7c 50 69 00       	push   0x69507c
  49f1bf:	e8 2c 16 10 00       	call   0x5a07f0
  49f1c4:	ff d0                	call   eax
  49f1c6:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  49f1ca:	83 c4 10             	add    esp,0x10
  49f1cd:	3b c3                	cmp    eax,ebx
  49f1cf:	5f                   	pop    edi
  49f1d0:	5d                   	pop    ebp
  49f1d1:	74 2f                	je     0x49f202
  49f1d3:	8d 48 ff             	lea    ecx,[eax-0x1]
  49f1d6:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49f1d9:	3a c3                	cmp    al,bl
  49f1db:	74 1c                	je     0x49f1f9
  49f1dd:	3c ff                	cmp    al,0xff
  49f1df:	74 18                	je     0x49f1f9
  49f1e1:	fe c8                	dec    al
  49f1e3:	88 01                	mov    BYTE PTR [ecx],al
  49f1e5:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  49f1e8:	5e                   	pop    esi
  49f1e9:	5b                   	pop    ebx
  49f1ea:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  49f1ee:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49f1f5:	83 c4 24             	add    esp,0x24
  49f1f8:	c3                   	ret
  49f1f9:	51                   	push   ecx
  49f1fa:	e8 f1 f3 15 00       	call   0x5fe5f0
  49f1ff:	83 c4 04             	add    esp,0x4
  49f202:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  49f205:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  49f209:	5e                   	pop    esi
  49f20a:	5b                   	pop    ebx
  49f20b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49f212:	83 c4 24             	add    esp,0x24
  49f215:	c3                   	ret
  49f216:	90                   	nop
  49f217:	90                   	nop
  49f218:	90                   	nop
  49f219:	90                   	nop
  49f21a:	90                   	nop
  49f21b:	90                   	nop
  49f21c:	90                   	nop
  49f21d:	90                   	nop
  49f21e:	90                   	nop
  49f21f:	90                   	nop
  49f220:	6a ff                	push   0xffffffff
  49f222:	68 a2 cc 62 00       	push   0x62cca2
  49f227:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49f22d:	50                   	push   eax
  49f22e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49f235:	83 ec 44             	sub    esp,0x44
  49f238:	56                   	push   esi
  49f239:	33 f6                	xor    esi,esi
  49f23b:	57                   	push   edi
  49f23c:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  49f243:	00 
  49f244:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  49f248:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49f24c:	c7 44 24 54 01 00 00 	mov    DWORD PTR [esp+0x54],0x1
  49f253:	00 
  49f254:	e8 c7 40 10 00       	call   0x5a3320
  49f259:	6a 30                	push   0x30
  49f25b:	c6 44 24 58 02       	mov    BYTE PTR [esp+0x58],0x2
  49f260:	e8 50 ae 16 00       	call   0x60a0b5
  49f265:	83 c4 04             	add    esp,0x4
  49f268:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  49f26c:	8b 7c 24 60          	mov    edi,DWORD PTR [esp+0x60]
  49f270:	c6 44 24 54 03       	mov    BYTE PTR [esp+0x54],0x3
  49f275:	85 c0                	test   eax,eax
  49f277:	0f 84 8b 00 00 00    	je     0x49f308
  49f27d:	57                   	push   edi
  49f27e:	8b c8                	mov    ecx,eax
  49f280:	e8 ab fc ff ff       	call   0x49ef30
  49f285:	85 c0                	test   eax,eax
  49f287:	74 03                	je     0x49f28c
  49f289:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  49f28c:	85 c0                	test   eax,eax
  49f28e:	74 0d                	je     0x49f29d
  49f290:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  49f293:	8b f0                	mov    esi,eax
  49f295:	41                   	inc    ecx
  49f296:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  49f29a:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  49f29d:	85 c0                	test   eax,eax
  49f29f:	c6 44 24 54 02       	mov    BYTE PTR [esp+0x54],0x2
  49f2a4:	74 12                	je     0x49f2b8
  49f2a6:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  49f2a9:	49                   	dec    ecx
  49f2aa:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  49f2ad:	75 09                	jne    0x49f2b8
  49f2af:	6a 00                	push   0x0
  49f2b1:	8b c8                	mov    ecx,eax
  49f2b3:	e8 08 cd 10 00       	call   0x5abfc0
  49f2b8:	85 f6                	test   esi,esi
  49f2ba:	74 68                	je     0x49f324
  49f2bc:	53                   	push   ebx
  49f2bd:	8d 44 24 18          	lea    eax,[esp+0x18]
  49f2c1:	57                   	push   edi
  49f2c2:	50                   	push   eax
  49f2c3:	b9 78 8d 6b 00       	mov    ecx,0x6b8d78
  49f2c8:	e8 83 3e 10 00       	call   0x5a3150
  49f2cd:	50                   	push   eax
  49f2ce:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  49f2d2:	c6 44 24 5c 05       	mov    BYTE PTR [esp+0x5c],0x5
  49f2d7:	e8 24 41 10 00       	call   0x5a3400
  49f2dc:	6a 01                	push   0x1
  49f2de:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49f2e2:	8a d8                	mov    bl,al
  49f2e4:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  49f2e9:	e8 b2 4d f6 ff       	call   0x4040a0
  49f2ee:	84 db                	test   bl,bl
  49f2f0:	5b                   	pop    ebx
  49f2f1:	74 19                	je     0x49f30c
  49f2f3:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49f2f7:	e8 c4 43 10 00       	call   0x5a36c0
  49f2fc:	8b c8                	mov    ecx,eax
  49f2fe:	e8 dd 4c 11 00       	call   0x5b3fe0
  49f303:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
  49f306:	eb 1c                	jmp    0x49f324
  49f308:	33 c0                	xor    eax,eax
  49f30a:	eb 80                	jmp    0x49f28c
  49f30c:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  49f30f:	48                   	dec    eax
  49f310:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  49f313:	75 09                	jne    0x49f31e
  49f315:	6a 00                	push   0x0
  49f317:	8b ce                	mov    ecx,esi
  49f319:	e8 a2 cc 10 00       	call   0x5abfc0
  49f31e:	33 f6                	xor    esi,esi
  49f320:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  49f324:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
  49f328:	85 f6                	test   esi,esi
  49f32a:	89 37                	mov    DWORD PTR [edi],esi
  49f32c:	74 03                	je     0x49f331
  49f32e:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  49f331:	c7 44 24 0c 01 00 00 	mov    DWORD PTR [esp+0xc],0x1
  49f338:	00 
  49f339:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49f33d:	c6 44 24 54 01       	mov    BYTE PTR [esp+0x54],0x1
  49f342:	e8 29 40 10 00       	call   0x5a3370
  49f347:	85 f6                	test   esi,esi
  49f349:	c6 44 24 54 00       	mov    BYTE PTR [esp+0x54],0x0
  49f34e:	74 12                	je     0x49f362
  49f350:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
  49f353:	48                   	dec    eax
  49f354:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  49f357:	75 09                	jne    0x49f362
  49f359:	6a 00                	push   0x0
  49f35b:	8b ce                	mov    ecx,esi
  49f35d:	e8 5e cc 10 00       	call   0x5abfc0
  49f362:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  49f366:	8b c7                	mov    eax,edi
  49f368:	5f                   	pop    edi
  49f369:	5e                   	pop    esi
  49f36a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49f371:	83 c4 50             	add    esp,0x50
  49f374:	c3                   	ret
  49f375:	90                   	nop
  49f376:	90                   	nop
  49f377:	90                   	nop
  49f378:	90                   	nop
  49f379:	90                   	nop
  49f37a:	90                   	nop
  49f37b:	90                   	nop
  49f37c:	90                   	nop
  49f37d:	90                   	nop
  49f37e:	90                   	nop
  49f37f:	90                   	nop
  49f380:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  49f386:	b0 01                	mov    al,0x1
  49f388:	84 c8                	test   al,cl
  49f38a:	75 08                	jne    0x49f394
  49f38c:	0a c8                	or     cl,al
  49f38e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  49f394:	e9 07 00 00 00       	jmp    0x49f3a0
  49f399:	90                   	nop
  49f39a:	90                   	nop
  49f39b:	90                   	nop
  49f39c:	90                   	nop
  49f39d:	90                   	nop
  49f39e:	90                   	nop
  49f39f:	90                   	nop
  49f3a0:	68 a0 1b 40 00       	push   0x401ba0
  49f3a5:	e8 d1 b1 16 00       	call   0x60a57b
  49f3aa:	59                   	pop    ecx
  49f3ab:	c3                   	ret
  49f3ac:	90                   	nop
  49f3ad:	90                   	nop
  49f3ae:	90                   	nop
  49f3af:	90                   	nop
  49f3b0:	51                   	push   ecx
  49f3b1:	56                   	push   esi
  49f3b2:	8b f1                	mov    esi,ecx
  49f3b4:	e8 e7 c0 10 00       	call   0x5ab4a0
  49f3b9:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  49f3bd:	c7 46 28 50 66 56 00 	mov    DWORD PTR [esi+0x28],0x566650
  49f3c4:	88 46 14             	mov    BYTE PTR [esi+0x14],al
  49f3c7:	33 c0                	xor    eax,eax
  49f3c9:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
  49f3cc:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
  49f3cf:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
  49f3d2:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
  49f3d5:	88 46 2c             	mov    BYTE PTR [esi+0x2c],al
  49f3d8:	c7 06 4c e8 64 00    	mov    DWORD PTR [esi],0x64e84c
  49f3de:	8b c6                	mov    eax,esi
  49f3e0:	5e                   	pop    esi
  49f3e1:	59                   	pop    ecx
  49f3e2:	c3                   	ret
  49f3e3:	90                   	nop
  49f3e4:	90                   	nop
  49f3e5:	90                   	nop
  49f3e6:	90                   	nop
  49f3e7:	90                   	nop
  49f3e8:	90                   	nop
  49f3e9:	90                   	nop
  49f3ea:	90                   	nop
  49f3eb:	90                   	nop
  49f3ec:	90                   	nop
  49f3ed:	90                   	nop
  49f3ee:	90                   	nop
  49f3ef:	90                   	nop
  49f3f0:	56                   	push   esi
  49f3f1:	8b f1                	mov    esi,ecx
  49f3f3:	e8 18 00 00 00       	call   0x49f410
  49f3f8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  49f3fd:	74 09                	je     0x49f408
  49f3ff:	56                   	push   esi
  49f400:	e8 eb f1 15 00       	call   0x5fe5f0
  49f405:	83 c4 04             	add    esp,0x4
  49f408:	8b c6                	mov    eax,esi
  49f40a:	5e                   	pop    esi
  49f40b:	c2 04 00             	ret    0x4
  49f40e:	90                   	nop
  49f40f:	90                   	nop
  49f410:	6a ff                	push   0xffffffff
  49f412:	68 eb cc 62 00       	push   0x62cceb
  49f417:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49f41d:	50                   	push   eax
  49f41e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49f425:	83 ec 44             	sub    esp,0x44
  49f428:	53                   	push   ebx
  49f429:	55                   	push   ebp
  49f42a:	8b e9                	mov    ebp,ecx
  49f42c:	56                   	push   esi
  49f42d:	57                   	push   edi
  49f42e:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  49f432:	c7 45 00 4c e8 64 00 	mov    DWORD PTR [ebp+0x0],0x64e84c
  49f439:	6a 0e                	push   0xe
  49f43b:	68 28 51 69 00       	push   0x695128
  49f440:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49f444:	c7 44 24 64 01 00 00 	mov    DWORD PTR [esp+0x64],0x1
  49f44b:	00 
  49f44c:	e8 9f f1 10 00       	call   0x5ae5f0
  49f451:	33 db                	xor    ebx,ebx
  49f453:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  49f458:	33 ff                	xor    edi,edi
  49f45a:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
  49f45d:	8d 75 14             	lea    esi,[ebp+0x14]
  49f460:	3b cb                	cmp    ecx,ebx
  49f462:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  49f466:	75 04                	jne    0x49f46c
  49f468:	33 c0                	xor    eax,eax
  49f46a:	eb 08                	jmp    0x49f474
  49f46c:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  49f46f:	2b c1                	sub    eax,ecx
  49f471:	c1 f8 02             	sar    eax,0x2
  49f474:	3b f8                	cmp    edi,eax
  49f476:	0f 8d 7a 01 00 00    	jge    0x49f5f6
  49f47c:	8b 75 18             	mov    esi,DWORD PTR [ebp+0x18]
  49f47f:	39 1c be             	cmp    DWORD PTR [esi+edi*4],ebx
  49f482:	75 67                	jne    0x49f4eb
  49f484:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  49f488:	53                   	push   ebx
  49f489:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49f48d:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  49f491:	e8 0a 4c f6 ff       	call   0x4040a0
  49f496:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49f49b:	83 c9 ff             	or     ecx,0xffffffff
  49f49e:	33 c0                	xor    eax,eax
  49f4a0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49f4a2:	f7 d1                	not    ecx
  49f4a4:	49                   	dec    ecx
  49f4a5:	51                   	push   ecx
  49f4a6:	68 70 3f 6b 00       	push   0x6b3f70
  49f4ab:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  49f4af:	e8 3c 4c f6 ff       	call   0x4040f0
  49f4b4:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49f4b8:	c6 44 24 5c 03       	mov    BYTE PTR [esp+0x5c],0x3
  49f4bd:	51                   	push   ecx
  49f4be:	68 b6 00 00 00       	push   0xb6
  49f4c3:	68 38 d6 68 00       	push   0x68d638
  49f4c8:	68 2c d6 68 00       	push   0x68d62c
  49f4cd:	e8 1e 13 10 00       	call   0x5a07f0
  49f4d2:	ff d0                	call   eax
  49f4d4:	83 c4 10             	add    esp,0x10
  49f4d7:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49f4db:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  49f4e0:	6a 01                	push   0x1
  49f4e2:	e8 b9 4b f6 ff       	call   0x4040a0
  49f4e7:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  49f4eb:	8b 04 be             	mov    eax,DWORD PTR [esi+edi*4]
  49f4ee:	83 78 14 01          	cmp    DWORD PTR [eax+0x14],0x1
  49f4f2:	0f 84 f8 00 00 00    	je     0x49f5f0
  49f4f8:	8b 75 18             	mov    esi,DWORD PTR [ebp+0x18]
  49f4fb:	39 1c be             	cmp    DWORD PTR [esi+edi*4],ebx
  49f4fe:	75 67                	jne    0x49f567
  49f500:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  49f504:	53                   	push   ebx
  49f505:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  49f509:	88 54 24 38          	mov    BYTE PTR [esp+0x38],dl
  49f50d:	e8 8e 4b f6 ff       	call   0x4040a0
  49f512:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49f517:	83 c9 ff             	or     ecx,0xffffffff
  49f51a:	33 c0                	xor    eax,eax
  49f51c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49f51e:	f7 d1                	not    ecx
  49f520:	49                   	dec    ecx
  49f521:	51                   	push   ecx
  49f522:	68 70 3f 6b 00       	push   0x6b3f70
  49f527:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  49f52b:	e8 c0 4b f6 ff       	call   0x4040f0
  49f530:	8d 44 24 34          	lea    eax,[esp+0x34]
  49f534:	c6 44 24 5c 04       	mov    BYTE PTR [esp+0x5c],0x4
  49f539:	50                   	push   eax
  49f53a:	68 b6 00 00 00       	push   0xb6
  49f53f:	68 38 d6 68 00       	push   0x68d638
  49f544:	68 2c d6 68 00       	push   0x68d62c
  49f549:	e8 a2 12 10 00       	call   0x5a07f0
  49f54e:	ff d0                	call   eax
  49f550:	83 c4 10             	add    esp,0x10
  49f553:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  49f557:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  49f55c:	6a 01                	push   0x1
  49f55e:	e8 3d 4b f6 ff       	call   0x4040a0
  49f563:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  49f567:	8b 0c be             	mov    ecx,DWORD PTR [esi+edi*4]
  49f56a:	e8 b1 c7 0f 00       	call   0x59bd20
  49f56f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  49f572:	3b c3                	cmp    eax,ebx
  49f574:	75 05                	jne    0x49f57b
  49f576:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49f57b:	50                   	push   eax
  49f57c:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  49f580:	68 04 51 69 00       	push   0x695104
  49f585:	51                   	push   ecx
  49f586:	e8 05 ee 10 00       	call   0x5ae390
  49f58b:	83 c4 0c             	add    esp,0xc
  49f58e:	50                   	push   eax
  49f58f:	6a 16                	push   0x16
  49f591:	68 28 51 69 00       	push   0x695128
  49f596:	68 e0 50 69 00       	push   0x6950e0
  49f59b:	c6 44 24 6c 05       	mov    BYTE PTR [esp+0x6c],0x5
  49f5a0:	e8 4b 12 10 00       	call   0x5a07f0
  49f5a5:	ff d0                	call   eax
  49f5a7:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  49f5ab:	83 c4 10             	add    esp,0x10
  49f5ae:	3b c3                	cmp    eax,ebx
  49f5b0:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  49f5b5:	74 2d                	je     0x49f5e4
  49f5b7:	8d 48 ff             	lea    ecx,[eax-0x1]
  49f5ba:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49f5bd:	3a c3                	cmp    al,bl
  49f5bf:	74 1a                	je     0x49f5db
  49f5c1:	3c ff                	cmp    al,0xff
  49f5c3:	74 16                	je     0x49f5db
  49f5c5:	fe c8                	dec    al
  49f5c7:	47                   	inc    edi
  49f5c8:	88 01                	mov    BYTE PTR [ecx],al
  49f5ca:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  49f5ce:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  49f5d2:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  49f5d6:	e9 7f fe ff ff       	jmp    0x49f45a
  49f5db:	51                   	push   ecx
  49f5dc:	e8 0f f0 15 00       	call   0x5fe5f0
  49f5e1:	83 c4 04             	add    esp,0x4
  49f5e4:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  49f5e8:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  49f5ec:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  49f5f0:	47                   	inc    edi
  49f5f1:	e9 64 fe ff ff       	jmp    0x49f45a
  49f5f6:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  49f5fa:	c6 44 24 5c 01       	mov    BYTE PTR [esp+0x5c],0x1
  49f5ff:	e8 6c f1 10 00       	call   0x5ae770
  49f604:	8b fe                	mov    edi,esi
  49f606:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
  49f60a:	6a 2d                	push   0x2d
  49f60c:	68 98 07 69 00       	push   0x690798
  49f611:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49f615:	c6 44 24 64 06       	mov    BYTE PTR [esp+0x64],0x6
  49f61a:	e8 d1 ef 10 00       	call   0x5ae5f0
  49f61f:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  49f623:	e8 48 f1 10 00       	call   0x5ae770
  49f628:	8b 6f 08             	mov    ebp,DWORD PTR [edi+0x8]
  49f62b:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
  49f62e:	3b f5                	cmp    esi,ebp
  49f630:	88 5c 24 5c          	mov    BYTE PTR [esp+0x5c],bl
  49f634:	74 14                	je     0x49f64a
  49f636:	8b 0e                	mov    ecx,DWORD PTR [esi]
  49f638:	3b cb                	cmp    ecx,ebx
  49f63a:	74 07                	je     0x49f643
  49f63c:	e8 8f a2 f6 ff       	call   0x4098d0
  49f641:	89 1e                	mov    DWORD PTR [esi],ebx
  49f643:	83 c6 04             	add    esi,0x4
  49f646:	3b f5                	cmp    esi,ebp
  49f648:	75 ec                	jne    0x49f636
  49f64a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  49f64d:	50                   	push   eax
  49f64e:	e8 9d ef 15 00       	call   0x5fe5f0
  49f653:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  49f657:	83 c4 04             	add    esp,0x4
  49f65a:	89 5f 04             	mov    DWORD PTR [edi+0x4],ebx
  49f65d:	89 5f 08             	mov    DWORD PTR [edi+0x8],ebx
  49f660:	89 5f 0c             	mov    DWORD PTR [edi+0xc],ebx
  49f663:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
  49f66a:	ff 
  49f66b:	e8 60 be 10 00       	call   0x5ab4d0
  49f670:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  49f674:	5f                   	pop    edi
  49f675:	5e                   	pop    esi
  49f676:	5d                   	pop    ebp
  49f677:	5b                   	pop    ebx
  49f678:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49f67f:	83 c4 50             	add    esp,0x50
  49f682:	c3                   	ret
  49f683:	90                   	nop
  49f684:	90                   	nop
  49f685:	90                   	nop
  49f686:	90                   	nop
  49f687:	90                   	nop
  49f688:	90                   	nop
  49f689:	90                   	nop
  49f68a:	90                   	nop
  49f68b:	90                   	nop
  49f68c:	90                   	nop
  49f68d:	90                   	nop
  49f68e:	90                   	nop
  49f68f:	90                   	nop
  49f690:	6a ff                	push   0xffffffff
  49f692:	68 5f cd 62 00       	push   0x62cd5f
  49f697:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49f69d:	50                   	push   eax
  49f69e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49f6a5:	83 ec 48             	sub    esp,0x48
  49f6a8:	53                   	push   ebx
  49f6a9:	55                   	push   ebp
  49f6aa:	56                   	push   esi
  49f6ab:	57                   	push   edi
  49f6ac:	8b e9                	mov    ebp,ecx
  49f6ae:	33 f6                	xor    esi,esi
  49f6b0:	6a 22                	push   0x22
  49f6b2:	68 28 51 69 00       	push   0x695128
  49f6b7:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49f6bb:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  49f6bf:	e8 2c ef 10 00       	call   0x5ae5f0
  49f6c4:	c7 44 24 60 01 00 00 	mov    DWORD PTR [esp+0x60],0x1
  49f6cb:	00 
  49f6cc:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  49f6d0:	8b 7c 24 6c          	mov    edi,DWORD PTR [esp+0x6c]
  49f6d4:	c6 44 24 60 02       	mov    BYTE PTR [esp+0x60],0x2
  49f6d9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  49f6dc:	3b c6                	cmp    eax,esi
  49f6de:	75 05                	jne    0x49f6e5
  49f6e0:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49f6e5:	50                   	push   eax
  49f6e6:	8d 44 24 34          	lea    eax,[esp+0x34]
  49f6ea:	68 a8 51 69 00       	push   0x6951a8
  49f6ef:	50                   	push   eax
  49f6f0:	e8 9b ec 10 00       	call   0x5ae390
  49f6f5:	83 c4 0c             	add    esp,0xc
  49f6f8:	8b f0                	mov    esi,eax
  49f6fa:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  49f6fe:	c6 44 24 60 03       	mov    BYTE PTR [esp+0x60],0x3
  49f703:	e8 98 bd 10 00       	call   0x5ab4a0
  49f708:	b3 04                	mov    bl,0x4
  49f70a:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
  49f70e:	ff 15 58 a2 64 00    	call   DWORD PTR ds:0x64a258
  49f714:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
  49f718:	a1 40 99 6b 00       	mov    eax,ds:0x6b9940
  49f71d:	56                   	push   esi
  49f71e:	50                   	push   eax
  49f71f:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  49f724:	c7 44 24 48 54 e8 64 	mov    DWORD PTR [esp+0x48],0x64e854
  49f72b:	00 
  49f72c:	e8 bf 34 fa ff       	call   0x442bf0
  49f731:	e8 4a ca 07 00       	call   0x51c180
  49f736:	e8 b5 68 07 00       	call   0x515ff0
  49f73b:	8b c8                	mov    ecx,eax
  49f73d:	e8 9e 40 f9 ff       	call   0x4337e0
  49f742:	85 c0                	test   eax,eax
  49f744:	74 3e                	je     0x49f784
  49f746:	e8 05 02 00 00       	call   0x49f950
  49f74b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  49f74e:	85 c0                	test   eax,eax
  49f750:	75 05                	jne    0x49f757
  49f752:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49f757:	50                   	push   eax
  49f758:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49f75c:	68 90 51 69 00       	push   0x695190
  49f761:	51                   	push   ecx
  49f762:	e8 29 ec 10 00       	call   0x5ae390
  49f767:	50                   	push   eax
  49f768:	c6 44 24 70 05       	mov    BYTE PTR [esp+0x70],0x5
  49f76d:	e8 8e 07 11 00       	call   0x5aff00
  49f772:	83 c4 10             	add    esp,0x10
  49f775:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49f779:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
  49f77d:	6a 01                	push   0x1
  49f77f:	e8 1c 49 f6 ff       	call   0x4040a0
  49f784:	b3 07                	mov    bl,0x7
  49f786:	6a 01                	push   0x1
  49f788:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  49f78c:	88 5c 24 64          	mov    BYTE PTR [esp+0x64],bl
  49f790:	e8 0b 49 f6 ff       	call   0x4040a0
  49f795:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  49f799:	57                   	push   edi
  49f79a:	52                   	push   edx
  49f79b:	e8 80 fa ff ff       	call   0x49f220
  49f7a0:	83 c4 08             	add    esp,0x8
  49f7a3:	8b f0                	mov    esi,eax
  49f7a5:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  49f7a9:	8b 06                	mov    eax,DWORD PTR [esi]
  49f7ab:	3b c8                	cmp    ecx,eax
  49f7ad:	c6 44 24 60 08       	mov    BYTE PTR [esp+0x60],0x8
  49f7b2:	74 2d                	je     0x49f7e1
  49f7b4:	85 c9                	test   ecx,ecx
  49f7b6:	74 16                	je     0x49f7ce
  49f7b8:	8b 79 14             	mov    edi,DWORD PTR [ecx+0x14]
  49f7bb:	8d 41 14             	lea    eax,[ecx+0x14]
  49f7be:	4f                   	dec    edi
  49f7bf:	8b d7                	mov    edx,edi
  49f7c1:	89 38                	mov    DWORD PTR [eax],edi
  49f7c3:	85 d2                	test   edx,edx
  49f7c5:	75 07                	jne    0x49f7ce
  49f7c7:	6a 00                	push   0x0
  49f7c9:	e8 f2 c7 10 00       	call   0x5abfc0
  49f7ce:	8b 06                	mov    eax,DWORD PTR [esi]
  49f7d0:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  49f7d4:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  49f7d8:	e8 d3 4c 0e 00       	call   0x5844b0
  49f7dd:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  49f7e1:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  49f7e5:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
  49f7e9:	85 c0                	test   eax,eax
  49f7eb:	74 1c                	je     0x49f809
  49f7ed:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  49f7f0:	8b c8                	mov    ecx,eax
  49f7f2:	83 c0 14             	add    eax,0x14
  49f7f5:	4e                   	dec    esi
  49f7f6:	8b d6                	mov    edx,esi
  49f7f8:	85 d2                	test   edx,edx
  49f7fa:	89 30                	mov    DWORD PTR [eax],esi
  49f7fc:	75 07                	jne    0x49f805
  49f7fe:	6a 00                	push   0x0
  49f800:	e8 bb c7 10 00       	call   0x5abfc0
  49f805:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  49f809:	85 c9                	test   ecx,ecx
  49f80b:	0f 84 c3 00 00 00    	je     0x49f8d4
  49f811:	e8 0a c5 0f 00       	call   0x59bd20
  49f816:	8d 75 14             	lea    esi,[ebp+0x14]
  49f819:	8b f8                	mov    edi,eax
  49f81b:	8a 46 18             	mov    al,BYTE PTR [esi+0x18]
  49f81e:	84 c0                	test   al,al
  49f820:	74 42                	je     0x49f864
  49f822:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  49f826:	51                   	push   ecx
  49f827:	68 70 3f 6b 00       	push   0x6b3f70
  49f82c:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49f830:	e8 db 9f f6 ff       	call   0x409810
  49f835:	8d 54 24 20          	lea    edx,[esp+0x20]
  49f839:	c6 44 24 60 0a       	mov    BYTE PTR [esp+0x60],0xa
  49f83e:	52                   	push   edx
  49f83f:	6a 49                	push   0x49
  49f841:	68 98 07 69 00       	push   0x690798
  49f846:	68 80 51 69 00       	push   0x695180
  49f84b:	e8 a0 0f 10 00       	call   0x5a07f0
  49f850:	ff d0                	call   eax
  49f852:	83 c4 10             	add    esp,0x10
  49f855:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49f859:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
  49f85d:	6a 01                	push   0x1
  49f85f:	e8 3c 48 f6 ff       	call   0x4040a0
  49f864:	8d 44 24 6c          	lea    eax,[esp+0x6c]
  49f868:	8b ce                	mov    ecx,esi
  49f86a:	50                   	push   eax
  49f86b:	57                   	push   edi
  49f86c:	e8 4f 0a 00 00       	call   0x4a02c0
  49f871:	8b f8                	mov    edi,eax
  49f873:	8a 44 24 6c          	mov    al,BYTE PTR [esp+0x6c]
  49f877:	84 c0                	test   al,al
  49f879:	74 42                	je     0x49f8bd
  49f87b:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  49f87f:	51                   	push   ecx
  49f880:	68 70 3f 6b 00       	push   0x6b3f70
  49f885:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49f889:	e8 82 9f f6 ff       	call   0x409810
  49f88e:	8d 54 24 20          	lea    edx,[esp+0x20]
  49f892:	c6 44 24 60 0b       	mov    BYTE PTR [esp+0x60],0xb
  49f897:	52                   	push   edx
  49f898:	6a 4b                	push   0x4b
  49f89a:	68 98 07 69 00       	push   0x690798
  49f89f:	68 78 51 69 00       	push   0x695178
  49f8a4:	e8 47 0f 10 00       	call   0x5a07f0
  49f8a9:	ff d0                	call   eax
  49f8ab:	83 c4 10             	add    esp,0x10
  49f8ae:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49f8b2:	88 5c 24 60          	mov    BYTE PTR [esp+0x60],bl
  49f8b6:	6a 01                	push   0x1
  49f8b8:	e8 e3 47 f6 ff       	call   0x4040a0
  49f8bd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  49f8c0:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  49f8c4:	51                   	push   ecx
  49f8c5:	8b ce                	mov    ecx,esi
  49f8c7:	8d 14 b8             	lea    edx,[eax+edi*4]
  49f8ca:	52                   	push   edx
  49f8cb:	e8 c0 e2 05 00       	call   0x4fdb90
  49f8d0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  49f8d4:	8b 74 24 68          	mov    esi,DWORD PTR [esp+0x68]
  49f8d8:	85 c9                	test   ecx,ecx
  49f8da:	89 0e                	mov    DWORD PTR [esi],ecx
  49f8dc:	74 03                	je     0x49f8e1
  49f8de:	ff 41 14             	inc    DWORD PTR [ecx+0x14]
  49f8e1:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
  49f8e8:	00 
  49f8e9:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  49f8ed:	c6 44 24 60 02       	mov    BYTE PTR [esp+0x60],0x2
  49f8f2:	e8 29 01 00 00       	call   0x49fa20
  49f8f7:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  49f8fb:	c6 44 24 60 01       	mov    BYTE PTR [esp+0x60],0x1
  49f900:	85 c0                	test   eax,eax
  49f902:	74 20                	je     0x49f924
  49f904:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  49f907:	8b c8                	mov    ecx,eax
  49f909:	83 c0 14             	add    eax,0x14
  49f90c:	4f                   	dec    edi
  49f90d:	8b d7                	mov    edx,edi
  49f90f:	85 d2                	test   edx,edx
  49f911:	89 38                	mov    DWORD PTR [eax],edi
  49f913:	75 07                	jne    0x49f91c
  49f915:	6a 00                	push   0x0
  49f917:	e8 a4 c6 10 00       	call   0x5abfc0
  49f91c:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  49f923:	00 
  49f924:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49f928:	c6 44 24 60 00       	mov    BYTE PTR [esp+0x60],0x0
  49f92d:	e8 3e ee 10 00       	call   0x5ae770
  49f932:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  49f936:	8b c6                	mov    eax,esi
  49f938:	5f                   	pop    edi
  49f939:	5e                   	pop    esi
  49f93a:	5d                   	pop    ebp
  49f93b:	5b                   	pop    ebx
  49f93c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49f943:	83 c4 54             	add    esp,0x54
  49f946:	c2 08 00             	ret    0x8
  49f949:	90                   	nop
  49f94a:	90                   	nop
  49f94b:	90                   	nop
  49f94c:	90                   	nop
  49f94d:	90                   	nop
  49f94e:	90                   	nop
  49f94f:	90                   	nop
  49f950:	51                   	push   ecx
  49f951:	a0 81 03 71 00       	mov    al,ds:0x710381
  49f956:	ba 01 00 00 00       	mov    edx,0x1
  49f95b:	84 c2                	test   dl,al
  49f95d:	0f 85 88 00 00 00    	jne    0x49f9eb
  49f963:	0a c2                	or     al,dl
  49f965:	53                   	push   ebx
  49f966:	a2 81 03 71 00       	mov    ds:0x710381,al
  49f96b:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  49f96f:	57                   	push   edi
  49f970:	a2 90 03 71 00       	mov    ds:0x710390,al
  49f975:	bf d4 51 69 00       	mov    edi,0x6951d4
  49f97a:	83 c9 ff             	or     ecx,0xffffffff
  49f97d:	33 c0                	xor    eax,eax
  49f97f:	52                   	push   edx
  49f980:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49f982:	f7 d1                	not    ecx
  49f984:	49                   	dec    ecx
  49f985:	c7 05 94 03 71 00 00 	mov    DWORD PTR ds:0x710394,0x0
  49f98c:	00 00 00 
  49f98f:	8b d9                	mov    ebx,ecx
  49f991:	b9 90 03 71 00       	mov    ecx,0x710390
  49f996:	53                   	push   ebx
  49f997:	c7 05 98 03 71 00 00 	mov    DWORD PTR ds:0x710398,0x0
  49f99e:	00 00 00 
  49f9a1:	c7 05 9c 03 71 00 00 	mov    DWORD PTR ds:0x71039c,0x0
  49f9a8:	00 00 00 
  49f9ab:	e8 90 1f f6 ff       	call   0x401940
  49f9b0:	84 c0                	test   al,al
  49f9b2:	74 28                	je     0x49f9dc
  49f9b4:	8b 3d 94 03 71 00    	mov    edi,DWORD PTR ds:0x710394
  49f9ba:	8b cb                	mov    ecx,ebx
  49f9bc:	8b d1                	mov    edx,ecx
  49f9be:	56                   	push   esi
  49f9bf:	be d4 51 69 00       	mov    esi,0x6951d4
  49f9c4:	53                   	push   ebx
  49f9c5:	c1 e9 02             	shr    ecx,0x2
  49f9c8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49f9ca:	8b ca                	mov    ecx,edx
  49f9cc:	83 e1 03             	and    ecx,0x3
  49f9cf:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49f9d1:	b9 90 03 71 00       	mov    ecx,0x710390
  49f9d6:	e8 b5 47 f6 ff       	call   0x404190
  49f9db:	5e                   	pop    esi
  49f9dc:	68 a0 fd 49 00       	push   0x49fda0
  49f9e1:	e8 95 ab 16 00       	call   0x60a57b
  49f9e6:	83 c4 04             	add    esp,0x4
  49f9e9:	5f                   	pop    edi
  49f9ea:	5b                   	pop    ebx
  49f9eb:	8b 15 3c 99 6b 00    	mov    edx,DWORD PTR ds:0x6b993c
  49f9f1:	85 d2                	test   edx,edx
  49f9f3:	74 0d                	je     0x49fa02
  49f9f5:	8b 0d 40 99 6b 00    	mov    ecx,DWORD PTR ds:0x6b9940
  49f9fb:	2b ca                	sub    ecx,edx
  49f9fd:	c1 f9 04             	sar    ecx,0x4
  49fa00:	75 07                	jne    0x49fa09
  49fa02:	b8 90 03 71 00       	mov    eax,0x710390
  49fa07:	59                   	pop    ecx
  49fa08:	c3                   	ret
  49fa09:	8b c2                	mov    eax,edx
  49fa0b:	f7 d8                	neg    eax
  49fa0d:	1b c0                	sbb    eax,eax
  49fa0f:	23 c1                	and    eax,ecx
  49fa11:	c1 e0 04             	shl    eax,0x4
  49fa14:	8d 44 10 f0          	lea    eax,[eax+edx*1-0x10]
  49fa18:	59                   	pop    ecx
  49fa19:	c3                   	ret
  49fa1a:	90                   	nop
  49fa1b:	90                   	nop
  49fa1c:	90                   	nop
  49fa1d:	90                   	nop
  49fa1e:	90                   	nop
  49fa1f:	90                   	nop
  49fa20:	6a ff                	push   0xffffffff
  49fa22:	68 98 cd 62 00       	push   0x62cd98
  49fa27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49fa2d:	50                   	push   eax
  49fa2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49fa35:	83 ec 3c             	sub    esp,0x3c
  49fa38:	53                   	push   ebx
  49fa39:	55                   	push   ebp
  49fa3a:	56                   	push   esi
  49fa3b:	57                   	push   edi
  49fa3c:	8b f9                	mov    edi,ecx
  49fa3e:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
  49fa42:	c7 07 54 e8 64 00    	mov    DWORD PTR [edi],0x64e854
  49fa48:	33 db                	xor    ebx,ebx
  49fa4a:	89 5c 24 54          	mov    DWORD PTR [esp+0x54],ebx
  49fa4e:	e8 9d 65 07 00       	call   0x515ff0
  49fa53:	8b c8                	mov    ecx,eax
  49fa55:	e8 86 3d f9 ff       	call   0x4337e0
  49fa5a:	85 c0                	test   eax,eax
  49fa5c:	0f 84 bc 01 00 00    	je     0x49fc1e
  49fa62:	ff 15 58 a2 64 00    	call   DWORD PTR ds:0x64a258
  49fa68:	8b 6f 14             	mov    ebp,DWORD PTR [edi+0x14]
  49fa6b:	8b f0                	mov    esi,eax
  49fa6d:	83 fe ff             	cmp    esi,0xffffffff
  49fa70:	0f 84 42 01 00 00    	je     0x49fbb8
  49fa76:	83 fd ff             	cmp    ebp,0xffffffff
  49fa79:	0f 84 39 01 00 00    	je     0x49fbb8
  49fa7f:	3b f5                	cmp    esi,ebp
  49fa81:	7d 5f                	jge    0x49fae2
  49fa83:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  49fa87:	53                   	push   ebx
  49fa88:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  49fa8c:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  49fa90:	e8 0b 46 f6 ff       	call   0x4040a0
  49fa95:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49fa9a:	83 c9 ff             	or     ecx,0xffffffff
  49fa9d:	33 c0                	xor    eax,eax
  49fa9f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49faa1:	f7 d1                	not    ecx
  49faa3:	49                   	dec    ecx
  49faa4:	51                   	push   ecx
  49faa5:	68 70 3f 6b 00       	push   0x6b3f70
  49faaa:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  49faae:	e8 3d 46 f6 ff       	call   0x4040f0
  49fab3:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49fab7:	c6 44 24 54 01       	mov    BYTE PTR [esp+0x54],0x1
  49fabc:	51                   	push   ecx
  49fabd:	6a 7d                	push   0x7d
  49fabf:	68 2c e2 68 00       	push   0x68e22c
  49fac4:	68 d0 34 69 00       	push   0x6934d0
  49fac9:	e8 22 0d 10 00       	call   0x5a07f0
  49face:	ff d0                	call   eax
  49fad0:	83 c4 10             	add    esp,0x10
  49fad3:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49fad7:	88 5c 24 54          	mov    BYTE PTR [esp+0x54],bl
  49fadb:	6a 01                	push   0x1
  49fadd:	e8 be 45 f6 ff       	call   0x4040a0
  49fae2:	2b f5                	sub    esi,ebp
  49fae4:	83 fe ff             	cmp    esi,0xffffffff
  49fae7:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  49faeb:	75 61                	jne    0x49fb4e
  49faed:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  49faf1:	53                   	push   ebx
  49faf2:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  49faf6:	88 54 24 30          	mov    BYTE PTR [esp+0x30],dl
  49fafa:	e8 a1 45 f6 ff       	call   0x4040a0
  49faff:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49fb04:	0b ce                	or     ecx,esi
  49fb06:	33 c0                	xor    eax,eax
  49fb08:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49fb0a:	f7 d1                	not    ecx
  49fb0c:	49                   	dec    ecx
  49fb0d:	51                   	push   ecx
  49fb0e:	68 70 3f 6b 00       	push   0x6b3f70
  49fb13:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  49fb17:	e8 d4 45 f6 ff       	call   0x4040f0
  49fb1c:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  49fb20:	c6 44 24 54 02       	mov    BYTE PTR [esp+0x54],0x2
  49fb25:	50                   	push   eax
  49fb26:	68 8a 00 00 00       	push   0x8a
  49fb2b:	68 2c e2 68 00       	push   0x68e22c
  49fb30:	68 14 e2 68 00       	push   0x68e214
  49fb35:	e8 b6 0c 10 00       	call   0x5a07f0
  49fb3a:	ff d0                	call   eax
  49fb3c:	83 c4 10             	add    esp,0x10
  49fb3f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  49fb43:	88 5c 24 54          	mov    BYTE PTR [esp+0x54],bl
  49fb47:	6a 01                	push   0x1
  49fb49:	e8 52 45 f6 ff       	call   0x4040a0
  49fb4e:	a0 81 03 71 00       	mov    al,ds:0x710381
  49fb53:	a8 01                	test   al,0x1
  49fb55:	75 4c                	jne    0x49fba3
  49fb57:	8a c8                	mov    cl,al
  49fb59:	53                   	push   ebx
  49fb5a:	80 c9 01             	or     cl,0x1
  49fb5d:	88 0d 81 03 71 00    	mov    BYTE PTR ds:0x710381,cl
  49fb63:	8a 4c 24 17          	mov    cl,BYTE PTR [esp+0x17]
  49fb67:	88 0d 90 03 71 00    	mov    BYTE PTR ds:0x710390,cl
  49fb6d:	b9 90 03 71 00       	mov    ecx,0x710390
  49fb72:	e8 29 45 f6 ff       	call   0x4040a0
  49fb77:	bf d4 51 69 00       	mov    edi,0x6951d4
  49fb7c:	83 c9 ff             	or     ecx,0xffffffff
  49fb7f:	33 c0                	xor    eax,eax
  49fb81:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49fb83:	f7 d1                	not    ecx
  49fb85:	49                   	dec    ecx
  49fb86:	51                   	push   ecx
  49fb87:	68 d4 51 69 00       	push   0x6951d4
  49fb8c:	b9 90 03 71 00       	mov    ecx,0x710390
  49fb91:	e8 5a 45 f6 ff       	call   0x4040f0
  49fb96:	68 a0 fd 49 00       	push   0x49fda0
  49fb9b:	e8 db a9 16 00       	call   0x60a57b
  49fba0:	83 c4 04             	add    esp,0x4
  49fba3:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  49fba8:	e8 d3 31 fa ff       	call   0x442d80
  49fbad:	85 c0                	test   eax,eax
  49fbaf:	75 0d                	jne    0x49fbbe
  49fbb1:	b8 90 03 71 00       	mov    eax,0x710390
  49fbb6:	eb 1d                	jmp    0x49fbd5
  49fbb8:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  49fbbc:	eb 90                	jmp    0x49fb4e
  49fbbe:	8b 35 3c 99 6b 00    	mov    esi,DWORD PTR ds:0x6b993c
  49fbc4:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  49fbc9:	e8 b2 31 fa ff       	call   0x442d80
  49fbce:	c1 e0 04             	shl    eax,0x4
  49fbd1:	8d 44 30 f0          	lea    eax,[eax+esi*1-0x10]
  49fbd5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  49fbd8:	3b c3                	cmp    eax,ebx
  49fbda:	75 05                	jne    0x49fbe1
  49fbdc:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49fbe1:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  49fbe5:	83 ec 08             	sub    esp,0x8
  49fbe8:	8d 54 24 44          	lea    edx,[esp+0x44]
  49fbec:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  49fbf2:	dd 1c 24             	fstp   QWORD PTR [esp]
  49fbf5:	50                   	push   eax
  49fbf6:	68 fc 51 69 00       	push   0x6951fc
  49fbfb:	52                   	push   edx
  49fbfc:	e8 8f e7 10 00       	call   0x5ae390
  49fc01:	50                   	push   eax
  49fc02:	c6 44 24 6c 03       	mov    BYTE PTR [esp+0x6c],0x3
  49fc07:	e8 f4 02 11 00       	call   0x5aff00
  49fc0c:	83 c4 18             	add    esp,0x18
  49fc0f:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  49fc13:	88 5c 24 54          	mov    BYTE PTR [esp+0x54],bl
  49fc17:	6a 01                	push   0x1
  49fc19:	e8 82 44 f6 ff       	call   0x4040a0
  49fc1e:	a1 40 99 6b 00       	mov    eax,ds:0x6b9940
  49fc23:	8b e8                	mov    ebp,eax
  49fc25:	8d 30                	lea    esi,[eax]
  49fc27:	3b f5                	cmp    esi,ebp
  49fc29:	74 21                	je     0x49fc4c
  49fc2b:	8d 7e f0             	lea    edi,[esi-0x10]
  49fc2e:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  49fc33:	8b cf                	mov    ecx,edi
  49fc35:	50                   	push   eax
  49fc36:	53                   	push   ebx
  49fc37:	56                   	push   esi
  49fc38:	e8 c3 cf f6 ff       	call   0x40cc00
  49fc3d:	83 c6 10             	add    esi,0x10
  49fc40:	83 c7 10             	add    edi,0x10
  49fc43:	3b f5                	cmp    esi,ebp
  49fc45:	75 e7                	jne    0x49fc2e
  49fc47:	a1 40 99 6b 00       	mov    eax,ds:0x6b9940
  49fc4c:	50                   	push   eax
  49fc4d:	83 c0 f0             	add    eax,0xfffffff0
  49fc50:	50                   	push   eax
  49fc51:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  49fc56:	e8 45 31 fa ff       	call   0x442da0
  49fc5b:	83 2d 40 99 6b 00 10 	sub    DWORD PTR ds:0x6b9940,0x10
  49fc62:	e8 19 c5 07 00       	call   0x51c180
  49fc67:	e8 84 63 07 00       	call   0x515ff0
  49fc6c:	8b f0                	mov    esi,eax
  49fc6e:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  49fc71:	3d 00 00 00 80       	cmp    eax,0x80000000
  49fc76:	75 18                	jne    0x49fc90
  49fc78:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  49fc7b:	3b c3                	cmp    eax,ebx
  49fc7d:	75 05                	jne    0x49fc84
  49fc7f:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49fc84:	50                   	push   eax
  49fc85:	e8 86 b2 16 00       	call   0x60af10
  49fc8a:	83 c4 04             	add    esp,0x4
  49fc8d:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  49fc90:	3b c3                	cmp    eax,ebx
  49fc92:	0f 84 dc 00 00 00    	je     0x49fd74
  49fc98:	a0 81 03 71 00       	mov    al,ds:0x710381
  49fc9d:	a8 01                	test   al,0x1
  49fc9f:	75 4c                	jne    0x49fced
  49fca1:	8a c8                	mov    cl,al
  49fca3:	53                   	push   ebx
  49fca4:	80 c9 01             	or     cl,0x1
  49fca7:	88 0d 81 03 71 00    	mov    BYTE PTR ds:0x710381,cl
  49fcad:	8a 4c 24 17          	mov    cl,BYTE PTR [esp+0x17]
  49fcb1:	88 0d 90 03 71 00    	mov    BYTE PTR ds:0x710390,cl
  49fcb7:	b9 90 03 71 00       	mov    ecx,0x710390
  49fcbc:	e8 df 43 f6 ff       	call   0x4040a0
  49fcc1:	bf d4 51 69 00       	mov    edi,0x6951d4
  49fcc6:	83 c9 ff             	or     ecx,0xffffffff
  49fcc9:	33 c0                	xor    eax,eax
  49fccb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49fccd:	f7 d1                	not    ecx
  49fccf:	49                   	dec    ecx
  49fcd0:	51                   	push   ecx
  49fcd1:	68 d4 51 69 00       	push   0x6951d4
  49fcd6:	b9 90 03 71 00       	mov    ecx,0x710390
  49fcdb:	e8 10 44 f6 ff       	call   0x4040f0
  49fce0:	68 a0 fd 49 00       	push   0x49fda0
  49fce5:	e8 91 a8 16 00       	call   0x60a57b
  49fcea:	83 c4 04             	add    esp,0x4
  49fced:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  49fcf2:	e8 89 30 fa ff       	call   0x442d80
  49fcf7:	85 c0                	test   eax,eax
  49fcf9:	75 07                	jne    0x49fd02
  49fcfb:	b8 90 03 71 00       	mov    eax,0x710390
  49fd00:	eb 17                	jmp    0x49fd19
  49fd02:	8b 35 3c 99 6b 00    	mov    esi,DWORD PTR ds:0x6b993c
  49fd08:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  49fd0d:	e8 6e 30 fa ff       	call   0x442d80
  49fd12:	c1 e0 04             	shl    eax,0x4
  49fd15:	8d 44 30 f0          	lea    eax,[eax+esi*1-0x10]
  49fd19:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  49fd1c:	3b c3                	cmp    eax,ebx
  49fd1e:	75 05                	jne    0x49fd25
  49fd20:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  49fd25:	50                   	push   eax
  49fd26:	8d 54 24 30          	lea    edx,[esp+0x30]
  49fd2a:	68 e4 51 69 00       	push   0x6951e4
  49fd2f:	52                   	push   edx
  49fd30:	e8 5b e6 10 00       	call   0x5ae390
  49fd35:	50                   	push   eax
  49fd36:	c6 44 24 64 04       	mov    BYTE PTR [esp+0x64],0x4
  49fd3b:	e8 c0 01 11 00       	call   0x5aff00
  49fd40:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  49fd44:	83 c4 10             	add    esp,0x10
  49fd47:	3b c3                	cmp    eax,ebx
  49fd49:	74 1d                	je     0x49fd68
  49fd4b:	8d 48 ff             	lea    ecx,[eax-0x1]
  49fd4e:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49fd51:	3a c3                	cmp    al,bl
  49fd53:	74 0a                	je     0x49fd5f
  49fd55:	3c ff                	cmp    al,0xff
  49fd57:	74 06                	je     0x49fd5f
  49fd59:	fe c8                	dec    al
  49fd5b:	88 01                	mov    BYTE PTR [ecx],al
  49fd5d:	eb 09                	jmp    0x49fd68
  49fd5f:	51                   	push   ecx
  49fd60:	e8 8b e8 15 00       	call   0x5fe5f0
  49fd65:	83 c4 04             	add    esp,0x4
  49fd68:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  49fd6c:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  49fd70:	89 5c 24 38          	mov    DWORD PTR [esp+0x38],ebx
  49fd74:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  49fd78:	c7 44 24 54 ff ff ff 	mov    DWORD PTR [esp+0x54],0xffffffff
  49fd7f:	ff 
  49fd80:	e8 4b b7 10 00       	call   0x5ab4d0
  49fd85:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  49fd89:	5f                   	pop    edi
  49fd8a:	5e                   	pop    esi
  49fd8b:	5d                   	pop    ebp
  49fd8c:	5b                   	pop    ebx
  49fd8d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49fd94:	83 c4 48             	add    esp,0x48
  49fd97:	c3                   	ret
  49fd98:	90                   	nop
  49fd99:	90                   	nop
  49fd9a:	90                   	nop
  49fd9b:	90                   	nop
  49fd9c:	90                   	nop
  49fd9d:	90                   	nop
  49fd9e:	90                   	nop
  49fd9f:	90                   	nop
  49fda0:	8b 0d 94 03 71 00    	mov    ecx,DWORD PTR ds:0x710394
  49fda6:	85 c9                	test   ecx,ecx
  49fda8:	74 1c                	je     0x49fdc6
  49fdaa:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  49fdad:	84 c0                	test   al,al
  49fdaf:	74 0b                	je     0x49fdbc
  49fdb1:	3c ff                	cmp    al,0xff
  49fdb3:	74 07                	je     0x49fdbc
  49fdb5:	fe c8                	dec    al
  49fdb7:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  49fdba:	eb 0a                	jmp    0x49fdc6
  49fdbc:	49                   	dec    ecx
  49fdbd:	51                   	push   ecx
  49fdbe:	e8 2d e8 15 00       	call   0x5fe5f0
  49fdc3:	83 c4 04             	add    esp,0x4
  49fdc6:	c7 05 94 03 71 00 00 	mov    DWORD PTR ds:0x710394,0x0
  49fdcd:	00 00 00 
  49fdd0:	c7 05 98 03 71 00 00 	mov    DWORD PTR ds:0x710398,0x0
  49fdd7:	00 00 00 
  49fdda:	c7 05 9c 03 71 00 00 	mov    DWORD PTR ds:0x71039c,0x0
  49fde1:	00 00 00 
  49fde4:	c3                   	ret
  49fde5:	90                   	nop
  49fde6:	90                   	nop
  49fde7:	90                   	nop
  49fde8:	90                   	nop
  49fde9:	90                   	nop
  49fdea:	90                   	nop
  49fdeb:	90                   	nop
  49fdec:	90                   	nop
  49fded:	90                   	nop
  49fdee:	90                   	nop
  49fdef:	90                   	nop
  49fdf0:	56                   	push   esi
  49fdf1:	8b f1                	mov    esi,ecx
  49fdf3:	e8 28 fc ff ff       	call   0x49fa20
  49fdf8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  49fdfd:	74 09                	je     0x49fe08
  49fdff:	56                   	push   esi
  49fe00:	e8 eb e7 15 00       	call   0x5fe5f0
  49fe05:	83 c4 04             	add    esp,0x4
  49fe08:	8b c6                	mov    eax,esi
  49fe0a:	5e                   	pop    esi
  49fe0b:	c2 04 00             	ret    0x4
  49fe0e:	90                   	nop
  49fe0f:	90                   	nop
  49fe10:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  49fe14:	8d 44 24 04          	lea    eax,[esp+0x4]
  49fe18:	50                   	push   eax
  49fe19:	52                   	push   edx
  49fe1a:	83 c1 14             	add    ecx,0x14
  49fe1d:	e8 9e 04 00 00       	call   0x4a02c0
  49fe22:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
  49fe26:	c2 04 00             	ret    0x4
  49fe29:	90                   	nop
  49fe2a:	90                   	nop
  49fe2b:	90                   	nop
  49fe2c:	90                   	nop
  49fe2d:	90                   	nop
  49fe2e:	90                   	nop
  49fe2f:	90                   	nop
  49fe30:	6a ff                	push   0xffffffff
  49fe32:	68 df cd 62 00       	push   0x62cddf
  49fe37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49fe3d:	50                   	push   eax
  49fe3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49fe45:	83 ec 18             	sub    esp,0x18
  49fe48:	53                   	push   ebx
  49fe49:	33 db                	xor    ebx,ebx
  49fe4b:	56                   	push   esi
  49fe4c:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  49fe53:	00 
  49fe54:	89 5c 24 08          	mov    DWORD PTR [esp+0x8],ebx
  49fe58:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  49fe5c:	8d 54 24 34          	lea    edx,[esp+0x34]
  49fe60:	50                   	push   eax
  49fe61:	52                   	push   edx
  49fe62:	c7 44 24 30 01 00 00 	mov    DWORD PTR [esp+0x30],0x1
  49fe69:	00 
  49fe6a:	e8 31 01 00 00       	call   0x49ffa0
  49fe6f:	8b 00                	mov    eax,DWORD PTR [eax]
  49fe71:	85 c0                	test   eax,eax
  49fe73:	74 0d                	je     0x49fe82
  49fe75:	8b d8                	mov    ebx,eax
  49fe77:	85 db                	test   ebx,ebx
  49fe79:	89 5c 24 08          	mov    DWORD PTR [esp+0x8],ebx
  49fe7d:	74 03                	je     0x49fe82
  49fe7f:	ff 43 14             	inc    DWORD PTR [ebx+0x14]
  49fe82:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  49fe86:	c6 44 24 28 01       	mov    BYTE PTR [esp+0x28],0x1
  49fe8b:	85 c0                	test   eax,eax
  49fe8d:	74 18                	je     0x49fea7
  49fe8f:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  49fe92:	8b c8                	mov    ecx,eax
  49fe94:	83 c0 14             	add    eax,0x14
  49fe97:	4e                   	dec    esi
  49fe98:	8b d6                	mov    edx,esi
  49fe9a:	85 d2                	test   edx,edx
  49fe9c:	89 30                	mov    DWORD PTR [eax],esi
  49fe9e:	75 07                	jne    0x49fea7
  49fea0:	6a 00                	push   0x0
  49fea2:	e8 19 c1 10 00       	call   0x5abfc0
  49fea7:	85 db                	test   ebx,ebx
  49fea9:	0f 85 a0 00 00 00    	jne    0x49ff4f
  49feaf:	8a 44 24 34          	mov    al,BYTE PTR [esp+0x34]
  49feb3:	55                   	push   ebp
  49feb4:	57                   	push   edi
  49feb5:	53                   	push   ebx
  49feb6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49feba:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  49febe:	e8 dd 41 f6 ff       	call   0x4040a0
  49fec3:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  49fec8:	83 c9 ff             	or     ecx,0xffffffff
  49fecb:	33 c0                	xor    eax,eax
  49fecd:	6a 01                	push   0x1
  49fecf:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  49fed1:	f7 d1                	not    ecx
  49fed3:	49                   	dec    ecx
  49fed4:	8b e9                	mov    ebp,ecx
  49fed6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  49feda:	55                   	push   ebp
  49fedb:	e8 60 1a f6 ff       	call   0x401940
  49fee0:	84 c0                	test   al,al
  49fee2:	74 24                	je     0x49ff08
  49fee4:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  49fee8:	8b cd                	mov    ecx,ebp
  49feea:	8b d1                	mov    edx,ecx
  49feec:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  49fef1:	c1 e9 02             	shr    ecx,0x2
  49fef4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49fef6:	8b ca                	mov    ecx,edx
  49fef8:	83 e1 03             	and    ecx,0x3
  49fefb:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  49fefd:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  49ff01:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  49ff05:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  49ff08:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  49ff0c:	c6 44 24 30 03       	mov    BYTE PTR [esp+0x30],0x3
  49ff11:	51                   	push   ecx
  49ff12:	6a 4a                	push   0x4a
  49ff14:	68 28 51 69 00       	push   0x695128
  49ff19:	68 34 52 69 00       	push   0x695234
  49ff1e:	e8 cd 08 10 00       	call   0x5a07f0
  49ff23:	ff d0                	call   eax
  49ff25:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  49ff29:	83 c4 10             	add    esp,0x10
  49ff2c:	85 c0                	test   eax,eax
  49ff2e:	5f                   	pop    edi
  49ff2f:	5d                   	pop    ebp
  49ff30:	74 1d                	je     0x49ff4f
  49ff32:	8d 48 ff             	lea    ecx,[eax-0x1]
  49ff35:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  49ff38:	84 c0                	test   al,al
  49ff3a:	74 0a                	je     0x49ff46
  49ff3c:	3c ff                	cmp    al,0xff
  49ff3e:	74 06                	je     0x49ff46
  49ff40:	fe c8                	dec    al
  49ff42:	88 01                	mov    BYTE PTR [ecx],al
  49ff44:	eb 09                	jmp    0x49ff4f
  49ff46:	51                   	push   ecx
  49ff47:	e8 a4 e6 15 00       	call   0x5fe5f0
  49ff4c:	83 c4 04             	add    esp,0x4
  49ff4f:	8b 74 24 30          	mov    esi,DWORD PTR [esp+0x30]
  49ff53:	85 db                	test   ebx,ebx
  49ff55:	89 1e                	mov    DWORD PTR [esi],ebx
  49ff57:	74 03                	je     0x49ff5c
  49ff59:	ff 43 14             	inc    DWORD PTR [ebx+0x14]
  49ff5c:	c7 44 24 0c 01 00 00 	mov    DWORD PTR [esp+0xc],0x1
  49ff63:	00 
  49ff64:	85 db                	test   ebx,ebx
  49ff66:	c6 44 24 28 00       	mov    BYTE PTR [esp+0x28],0x0
  49ff6b:	74 12                	je     0x49ff7f
  49ff6d:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
  49ff70:	48                   	dec    eax
  49ff71:	89 43 14             	mov    DWORD PTR [ebx+0x14],eax
  49ff74:	75 09                	jne    0x49ff7f
  49ff76:	6a 00                	push   0x0
  49ff78:	8b cb                	mov    ecx,ebx
  49ff7a:	e8 41 c0 10 00       	call   0x5abfc0
  49ff7f:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  49ff83:	8b c6                	mov    eax,esi
  49ff85:	5e                   	pop    esi
  49ff86:	5b                   	pop    ebx
  49ff87:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  49ff8e:	83 c4 24             	add    esp,0x24
  49ff91:	c2 08 00             	ret    0x8
  49ff94:	90                   	nop
  49ff95:	90                   	nop
  49ff96:	90                   	nop
  49ff97:	90                   	nop
  49ff98:	90                   	nop
  49ff99:	90                   	nop
  49ff9a:	90                   	nop
  49ff9b:	90                   	nop
  49ff9c:	90                   	nop
  49ff9d:	90                   	nop
  49ff9e:	90                   	nop
  49ff9f:	90                   	nop
  49ffa0:	6a ff                	push   0xffffffff
  49ffa2:	68 27 ce 62 00       	push   0x62ce27
  49ffa7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  49ffad:	50                   	push   eax
  49ffae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  49ffb5:	83 ec 24             	sub    esp,0x24
  49ffb8:	53                   	push   ebx
  49ffb9:	55                   	push   ebp
  49ffba:	56                   	push   esi
  49ffbb:	57                   	push   edi
  49ffbc:	8b f1                	mov    esi,ecx
  49ffbe:	33 ff                	xor    edi,edi
  49ffc0:	6a 52                	push   0x52
  49ffc2:	68 28 51 69 00       	push   0x695128
  49ffc7:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49ffcb:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  49ffcf:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  49ffd3:	e8 18 e6 10 00       	call   0x5ae5f0
  49ffd8:	c7 44 24 3c 01 00 00 	mov    DWORD PTR [esp+0x3c],0x1
  49ffdf:	00 
  49ffe0:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  49ffe4:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
  49ffe7:	8d 6e 14             	lea    ebp,[esi+0x14]
  49ffea:	3b c7                	cmp    eax,edi
  49ffec:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  49fff1:	75 63                	jne    0x4a0056
  49fff3:	8a 44 24 48          	mov    al,BYTE PTR [esp+0x48]
  49fff7:	57                   	push   edi
  49fff8:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  49fffc:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  4a0000:	e8 9b 40 f6 ff       	call   0x4040a0
  4a0005:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4a000a:	83 c9 ff             	or     ecx,0xffffffff
  4a000d:	33 c0                	xor    eax,eax
  4a000f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4a0011:	f7 d1                	not    ecx
  4a0013:	49                   	dec    ecx
  4a0014:	51                   	push   ecx
  4a0015:	68 70 3f 6b 00       	push   0x6b3f70
  4a001a:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4a001e:	e8 cd 40 f6 ff       	call   0x4040f0
  4a0023:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4a0027:	c6 44 24 3c 03       	mov    BYTE PTR [esp+0x3c],0x3
  4a002c:	51                   	push   ecx
  4a002d:	68 b9 00 00 00       	push   0xb9
  4a0032:	68 98 07 69 00       	push   0x690798
  4a0037:	68 2c 52 69 00       	push   0x69522c
  4a003c:	e8 af 07 10 00       	call   0x5a07f0
  4a0041:	ff d0                	call   eax
  4a0043:	83 c4 10             	add    esp,0x10
  4a0046:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4a004a:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  4a004f:	6a 01                	push   0x1
  4a0051:	e8 4a 40 f6 ff       	call   0x4040a0
  4a0056:	8b cd                	mov    ecx,ebp
  4a0058:	e8 63 e4 fa ff       	call   0x44e4c0
  4a005d:	85 c0                	test   eax,eax
  4a005f:	74 5c                	je     0x4a00bd
  4a0061:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
  4a0064:	8b cd                	mov    ecx,ebp
  4a0066:	f7 db                	neg    ebx
  4a0068:	1b db                	sbb    ebx,ebx
  4a006a:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  4a0071:	00 
  4a0072:	83 e3 fe             	and    ebx,0xfffffffe
  4a0075:	83 c3 02             	add    ebx,0x2
  4a0078:	e8 43 e4 fa ff       	call   0x44e4c0
  4a007d:	8b f8                	mov    edi,eax
  4a007f:	4f                   	dec    edi
  4a0080:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  4a0084:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  4a0088:	8d 04 17             	lea    eax,[edi+edx*1]
  4a008b:	99                   	cdq
  4a008c:	2b c2                	sub    eax,edx
  4a008e:	8b f0                	mov    esi,eax
  4a0090:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  4a0093:	d1 fe                	sar    esi,1
  4a0095:	8d 04 b0             	lea    eax,[eax+esi*4]
  4a0098:	50                   	push   eax
  4a0099:	51                   	push   ecx
  4a009a:	ff 55 14             	call   DWORD PTR [ebp+0x14]
  4a009d:	83 c4 08             	add    esp,0x8
  4a00a0:	83 f8 01             	cmp    eax,0x1
  4a00a3:	74 7d                	je     0x4a0122
  4a00a5:	3b c3                	cmp    eax,ebx
  4a00a7:	75 07                	jne    0x4a00b0
  4a00a9:	46                   	inc    esi
  4a00aa:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  4a00ae:	eb 03                	jmp    0x4a00b3
  4a00b0:	8d 7e ff             	lea    edi,[esi-0x1]
  4a00b3:	39 7c 24 14          	cmp    DWORD PTR [esp+0x14],edi
  4a00b7:	7e c7                	jle    0x4a0080
  4a00b9:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  4a00bd:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  4a00c1:	8d 44 24 48          	lea    eax,[esp+0x48]
  4a00c5:	52                   	push   edx
  4a00c6:	50                   	push   eax
  4a00c7:	8b ce                	mov    ecx,esi
  4a00c9:	e8 c2 f5 ff ff       	call   0x49f690
  4a00ce:	8b f0                	mov    esi,eax
  4a00d0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4a00d4:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4a00d6:	3b c1                	cmp    eax,ecx
  4a00d8:	c6 44 24 3c 04       	mov    BYTE PTR [esp+0x3c],0x4
  4a00dd:	74 2f                	je     0x4a010e
  4a00df:	85 c0                	test   eax,eax
  4a00e1:	74 18                	je     0x4a00fb
  4a00e3:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  4a00e6:	8b c8                	mov    ecx,eax
  4a00e8:	83 c0 14             	add    eax,0x14
  4a00eb:	4f                   	dec    edi
  4a00ec:	8b d7                	mov    edx,edi
  4a00ee:	85 d2                	test   edx,edx
  4a00f0:	89 38                	mov    DWORD PTR [eax],edi
  4a00f2:	75 07                	jne    0x4a00fb
  4a00f4:	6a 00                	push   0x0
  4a00f6:	e8 c5 be 10 00       	call   0x5abfc0
  4a00fb:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4a00fd:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  4a0101:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4a0105:	e8 a6 43 0e 00       	call   0x5844b0
  4a010a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4a010e:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  4a0112:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  4a0117:	85 c9                	test   ecx,ecx
  4a0119:	74 47                	je     0x4a0162
  4a011b:	e8 b0 97 f6 ff       	call   0x4098d0
  4a0120:	eb 3c                	jmp    0x4a015e
  4a0122:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  4a0126:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4a012a:	8b 7a 18             	mov    edi,DWORD PTR [edx+0x18]
  4a012d:	3b 04 b7             	cmp    eax,DWORD PTR [edi+esi*4]
  4a0130:	74 30                	je     0x4a0162
  4a0132:	85 c0                	test   eax,eax
  4a0134:	74 18                	je     0x4a014e
  4a0136:	8b 58 14             	mov    ebx,DWORD PTR [eax+0x14]
  4a0139:	8b c8                	mov    ecx,eax
  4a013b:	83 c0 14             	add    eax,0x14
  4a013e:	4b                   	dec    ebx
  4a013f:	8b d3                	mov    edx,ebx
  4a0141:	85 d2                	test   edx,edx
  4a0143:	89 18                	mov    DWORD PTR [eax],ebx
  4a0145:	75 07                	jne    0x4a014e
  4a0147:	6a 00                	push   0x0
  4a0149:	e8 72 be 10 00       	call   0x5abfc0
  4a014e:	8b 04 b7             	mov    eax,DWORD PTR [edi+esi*4]
  4a0151:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4a0155:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  4a0159:	e8 52 43 0e 00       	call   0x5844b0
  4a015e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4a0162:	8b 74 24 44          	mov    esi,DWORD PTR [esp+0x44]
  4a0166:	85 c0                	test   eax,eax
  4a0168:	89 06                	mov    DWORD PTR [esi],eax
  4a016a:	74 0b                	je     0x4a0177
  4a016c:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  4a016f:	41                   	inc    ecx
  4a0170:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  4a0173:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4a0177:	c7 44 24 1c 01 00 00 	mov    DWORD PTR [esp+0x1c],0x1
  4a017e:	00 
  4a017f:	85 c0                	test   eax,eax
  4a0181:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  4a0186:	74 20                	je     0x4a01a8
  4a0188:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  4a018b:	8b c8                	mov    ecx,eax
  4a018d:	83 c0 14             	add    eax,0x14
  4a0190:	4f                   	dec    edi
  4a0191:	8b d7                	mov    edx,edi
  4a0193:	85 d2                	test   edx,edx
  4a0195:	89 38                	mov    DWORD PTR [eax],edi
  4a0197:	75 07                	jne    0x4a01a0
  4a0199:	6a 00                	push   0x0
  4a019b:	e8 20 be 10 00       	call   0x5abfc0
  4a01a0:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  4a01a7:	00 
  4a01a8:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4a01ac:	c6 44 24 3c 00       	mov    BYTE PTR [esp+0x3c],0x0
  4a01b1:	e8 ba e5 10 00       	call   0x5ae770
  4a01b6:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4a01ba:	8b c6                	mov    eax,esi
  4a01bc:	5f                   	pop    edi
  4a01bd:	5e                   	pop    esi
  4a01be:	5d                   	pop    ebp
  4a01bf:	5b                   	pop    ebx
  4a01c0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4a01c7:	83 c4 30             	add    esp,0x30
  4a01ca:	c2 08 00             	ret    0x8
  4a01cd:	90                   	nop
  4a01ce:	90                   	nop
  4a01cf:	90                   	nop
