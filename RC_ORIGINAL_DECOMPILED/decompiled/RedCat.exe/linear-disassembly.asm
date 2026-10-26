
/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RC_ORIGINAL_DECOMPILED/originals/RedCat.exe:     file format pei-i386


Disassembly of section .text:

00401000 <.text>:
  401000:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  401004:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  401008:	68 30 7e 40 00       	push   0x407e30
  40100d:	6a 00                	push   0x0
  40100f:	50                   	push   eax
  401010:	51                   	push   ecx
  401011:	ff 15 88 60 40 00    	call   DWORD PTR ds:0x406088
  401017:	c3                   	ret
  401018:	90                   	nop
  401019:	90                   	nop
  40101a:	90                   	nop
  40101b:	90                   	nop
  40101c:	90                   	nop
  40101d:	90                   	nop
  40101e:	90                   	nop
  40101f:	90                   	nop
  401020:	56                   	push   esi
  401021:	57                   	push   edi
  401022:	68 18 01 00 00       	push   0x118
  401027:	68 30 7e 40 00       	push   0x407e30
  40102c:	e8 25 40 00 00       	call   0x405056
  401031:	bf 30 7e 40 00       	mov    edi,0x407e30
  401036:	83 c9 ff             	or     ecx,0xffffffff
  401039:	33 c0                	xor    eax,eax
  40103b:	83 c4 08             	add    esp,0x8
  40103e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  401040:	f7 d1                	not    ecx
  401042:	49                   	dec    ecx
  401043:	80 b9 2f 7e 40 00 5c 	cmp    BYTE PTR [ecx+0x407e2f],0x5c
  40104a:	74 2d                	je     0x401079
  40104c:	bf 30 70 40 00       	mov    edi,0x407030
  401051:	83 c9 ff             	or     ecx,0xffffffff
  401054:	33 c0                	xor    eax,eax
  401056:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  401058:	f7 d1                	not    ecx
  40105a:	2b f9                	sub    edi,ecx
  40105c:	8b f7                	mov    esi,edi
  40105e:	8b d1                	mov    edx,ecx
  401060:	bf 30 7e 40 00       	mov    edi,0x407e30
  401065:	83 c9 ff             	or     ecx,0xffffffff
  401068:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  40106a:	8b ca                	mov    ecx,edx
  40106c:	4f                   	dec    edi
  40106d:	c1 e9 02             	shr    ecx,0x2
  401070:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  401072:	8b ca                	mov    ecx,edx
  401074:	83 e1 03             	and    ecx,0x3
  401077:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  401079:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  40107d:	83 c9 ff             	or     ecx,0xffffffff
  401080:	33 c0                	xor    eax,eax
  401082:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  401084:	f7 d1                	not    ecx
  401086:	2b f9                	sub    edi,ecx
  401088:	8b f7                	mov    esi,edi
  40108a:	8b d1                	mov    edx,ecx
  40108c:	bf 30 7e 40 00       	mov    edi,0x407e30
  401091:	83 c9 ff             	or     ecx,0xffffffff
  401094:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  401096:	8b ca                	mov    ecx,edx
  401098:	4f                   	dec    edi
  401099:	c1 e9 02             	shr    ecx,0x2
  40109c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  40109e:	8b ca                	mov    ecx,edx
  4010a0:	83 e1 03             	and    ecx,0x3
  4010a3:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4010a5:	5f                   	pop    edi
  4010a6:	c7 05 5c 7f 40 00 01 	mov    DWORD PTR ds:0x407f5c,0x1
  4010ad:	00 00 00 
  4010b0:	5e                   	pop    esi
  4010b1:	c3                   	ret
  4010b2:	90                   	nop
  4010b3:	90                   	nop
  4010b4:	90                   	nop
  4010b5:	90                   	nop
  4010b6:	90                   	nop
  4010b7:	90                   	nop
  4010b8:	90                   	nop
  4010b9:	90                   	nop
  4010ba:	90                   	nop
  4010bb:	90                   	nop
  4010bc:	90                   	nop
  4010bd:	90                   	nop
  4010be:	90                   	nop
  4010bf:	90                   	nop
  4010c0:	83 ec 40             	sub    esp,0x40
  4010c3:	56                   	push   esi
  4010c4:	68 bc 70 40 00       	push   0x4070bc
  4010c9:	e8 52 ff ff ff       	call   0x401020
  4010ce:	68 b0 70 40 00       	push   0x4070b0
  4010d3:	68 a8 70 40 00       	push   0x4070a8
  4010d8:	e8 23 ff ff ff       	call   0x401000
  4010dd:	8b f0                	mov    esi,eax
  4010df:	83 c4 0c             	add    esp,0xc
  4010e2:	85 f6                	test   esi,esi
  4010e4:	75 3a                	jne    0x401120
  4010e6:	68 b0 70 40 00       	push   0x4070b0
  4010eb:	68 a8 70 40 00       	push   0x4070a8
  4010f0:	68 bc 70 40 00       	push   0x4070bc
  4010f5:	6a 64                	push   0x64
  4010f7:	68 88 70 40 00       	push   0x407088
  4010fc:	8d 44 24 18          	lea    eax,[esp+0x18]
  401100:	68 3c 70 40 00       	push   0x40703c
  401105:	50                   	push   eax
  401106:	e8 f5 03 00 00       	call   0x401500
  40110b:	83 c4 1c             	add    esp,0x1c
  40110e:	8d 4c 24 04          	lea    ecx,[esp+0x4]
  401112:	56                   	push   esi
  401113:	68 34 70 40 00       	push   0x407034
  401118:	51                   	push   ecx
  401119:	56                   	push   esi
  40111a:	ff 15 d0 60 40 00    	call   DWORD PTR ds:0x4060d0
  401120:	8b c6                	mov    eax,esi
  401122:	5e                   	pop    esi
  401123:	83 c4 40             	add    esp,0x40
  401126:	c3                   	ret
  401127:	90                   	nop
  401128:	90                   	nop
  401129:	90                   	nop
  40112a:	90                   	nop
  40112b:	90                   	nop
  40112c:	90                   	nop
  40112d:	90                   	nop
  40112e:	90                   	nop
  40112f:	90                   	nop
  401130:	83 ec 50             	sub    esp,0x50
  401133:	57                   	push   edi
  401134:	b9 14 00 00 00       	mov    ecx,0x14
  401139:	33 c0                	xor    eax,eax
  40113b:	8d 7c 24 04          	lea    edi,[esp+0x4]
  40113f:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  401141:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  401145:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  401149:	8d 54 24 04          	lea    edx,[esp+0x4]
  40114d:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  401151:	52                   	push   edx
  401152:	50                   	push   eax
  401153:	6a 00                	push   0x0
  401155:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  401159:	e8 13 40 00 00       	call   0x405171
  40115e:	83 c4 0c             	add    esp,0xc
  401161:	83 f8 ff             	cmp    eax,0xffffffff
  401164:	5f                   	pop    edi
  401165:	0f 85 a8 00 00 00    	jne    0x401213
  40116b:	a1 64 7f 40 00       	mov    eax,ds:0x407f64
  401170:	83 c0 fe             	add    eax,0xfffffffe
  401173:	83 f8 14             	cmp    eax,0x14
  401176:	0f 87 97 00 00 00    	ja     0x401213
  40117c:	33 c9                	xor    ecx,ecx
  40117e:	8a 88 34 12 40 00    	mov    cl,BYTE PTR [eax+0x401234]
  401184:	ff 24 8d 1c 12 40 00 	jmp    DWORD PTR [ecx*4+0x40121c]
  40118b:	6a 00                	push   0x0
  40118d:	68 34 70 40 00       	push   0x407034
  401192:	68 88 71 40 00       	push   0x407188
  401197:	6a 00                	push   0x0
  401199:	ff 15 d0 60 40 00    	call   DWORD PTR ds:0x4060d0
  40119f:	e8 1c ff ff ff       	call   0x4010c0
  4011a4:	83 c4 50             	add    esp,0x50
  4011a7:	c3                   	ret
  4011a8:	6a 00                	push   0x0
  4011aa:	68 34 70 40 00       	push   0x407034
  4011af:	68 6c 71 40 00       	push   0x40716c
  4011b4:	6a 00                	push   0x0
  4011b6:	ff 15 d0 60 40 00    	call   DWORD PTR ds:0x4060d0
  4011bc:	e8 ff fe ff ff       	call   0x4010c0
  4011c1:	83 c4 50             	add    esp,0x50
  4011c4:	c3                   	ret
  4011c5:	6a 00                	push   0x0
  4011c7:	68 34 70 40 00       	push   0x407034
  4011cc:	68 50 71 40 00       	push   0x407150
  4011d1:	6a 00                	push   0x0
  4011d3:	ff 15 d0 60 40 00    	call   DWORD PTR ds:0x4060d0
  4011d9:	e8 e2 fe ff ff       	call   0x4010c0
  4011de:	83 c4 50             	add    esp,0x50
  4011e1:	c3                   	ret
  4011e2:	6a 00                	push   0x0
  4011e4:	68 34 70 40 00       	push   0x407034
  4011e9:	68 08 71 40 00       	push   0x407108
  4011ee:	6a 00                	push   0x0
  4011f0:	ff 15 d0 60 40 00    	call   DWORD PTR ds:0x4060d0
  4011f6:	e8 c5 fe ff ff       	call   0x4010c0
  4011fb:	83 c4 50             	add    esp,0x50
  4011fe:	c3                   	ret
  4011ff:	6a 00                	push   0x0
  401201:	68 34 70 40 00       	push   0x407034
  401206:	68 d0 70 40 00       	push   0x4070d0
  40120b:	6a 00                	push   0x0
  40120d:	ff 15 d0 60 40 00    	call   DWORD PTR ds:0x4060d0
  401213:	e8 a8 fe ff ff       	call   0x4010c0
  401218:	83 c4 50             	add    esp,0x50
  40121b:	c3                   	ret
  40121c:	c5 11                	lds    edx,FWORD PTR [ecx]
  40121e:	40                   	inc    eax
  40121f:	00 8b 11 40 00 e2    	add    BYTE PTR [ebx-0x1dffbfef],cl
  401225:	11 40 00             	adc    DWORD PTR [eax+0x0],eax
  401228:	ff 11                	call   DWORD PTR [ecx]
  40122a:	40                   	inc    eax
  40122b:	00 a8 11 40 00 13    	add    BYTE PTR [eax+0x13004011],ch
  401231:	12 40 00             	adc    al,BYTE PTR [eax+0x0]
  401234:	00 05 05 05 05 01    	add    BYTE PTR ds:0x1050505,al
  40123a:	02 05 05 05 03 05    	add    al,BYTE PTR ds:0x5030505
  401240:	05 05 05 05 05       	add    eax,0x5050505
  401245:	05 05 05 04 90       	add    eax,0x90040505
  40124a:	90                   	nop
  40124b:	90                   	nop
  40124c:	90                   	nop
  40124d:	90                   	nop
  40124e:	90                   	nop
  40124f:	90                   	nop
  401250:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  401254:	81 ec b0 00 00 00    	sub    esp,0xb0
  40125a:	55                   	push   ebp
  40125b:	56                   	push   esi
  40125c:	8b b4 24 bc 00 00 00 	mov    esi,DWORD PTR [esp+0xbc]
  401263:	33 ed                	xor    ebp,ebp
  401265:	3b c5                	cmp    eax,ebp
  401267:	57                   	push   edi
  401268:	89 35 d4 7a 40 00    	mov    DWORD PTR ds:0x407ad4,esi
  40126e:	0f 85 89 00 00 00    	jne    0x4012fd
  401274:	68 00 7f 00 00       	push   0x7f00
  401279:	55                   	push   ebp
  40127a:	c7 44 24 14 30 00 00 	mov    DWORD PTR [esp+0x14],0x30
  401281:	00 
  401282:	c7 44 24 3c 34 70 40 	mov    DWORD PTR [esp+0x3c],0x407034
  401289:	00 
  40128a:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  40128e:	c7 44 24 1c 60 14 40 	mov    DWORD PTR [esp+0x1c],0x401460
  401295:	00 
  401296:	ff 15 f4 60 40 00    	call   DWORD PTR ds:0x4060f4
  40129c:	8b 3d f8 60 40 00    	mov    edi,DWORD PTR ds:0x4060f8
  4012a2:	68 00 7f 00 00       	push   0x7f00
  4012a7:	56                   	push   esi
  4012a8:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  4012ac:	ff d7                	call   edi
  4012ae:	68 00 7f 00 00       	push   0x7f00
  4012b3:	56                   	push   esi
  4012b4:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  4012b8:	ff d7                	call   edi
  4012ba:	6a 04                	push   0x4
  4012bc:	89 6c 24 34          	mov    DWORD PTR [esp+0x34],ebp
  4012c0:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  4012c4:	ff 15 00 60 40 00    	call   DWORD PTR ds:0x406000
  4012ca:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  4012ce:	89 6c 24 18          	mov    DWORD PTR [esp+0x18],ebp
  4012d2:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  4012d6:	8d 44 24 0c          	lea    eax,[esp+0xc]
  4012da:	50                   	push   eax
  4012db:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  4012df:	ff 15 f0 60 40 00    	call   DWORD PTR ds:0x4060f0
  4012e5:	66 85 c0             	test   ax,ax
  4012e8:	75 21                	jne    0x40130b
  4012ea:	6a 30                	push   0x30
  4012ec:	68 10 72 40 00       	push   0x407210
  4012f1:	68 ec 71 40 00       	push   0x4071ec
  4012f6:	55                   	push   ebp
  4012f7:	ff 15 d0 60 40 00    	call   DWORD PTR ds:0x4060d0
  4012fd:	5f                   	pop    edi
  4012fe:	5e                   	pop    esi
  4012ff:	33 c0                	xor    eax,eax
  401301:	5d                   	pop    ebp
  401302:	81 c4 b0 00 00 00    	add    esp,0xb0
  401308:	c2 10 00             	ret    0x10
  40130b:	55                   	push   ebp
  40130c:	56                   	push   esi
  40130d:	8b 35 00 61 40 00    	mov    esi,DWORD PTR ds:0x406100
  401313:	55                   	push   ebp
  401314:	55                   	push   ebp
  401315:	6a 01                	push   0x1
  401317:	ff d6                	call   esi
  401319:	50                   	push   eax
  40131a:	55                   	push   ebp
  40131b:	ff d6                	call   esi
  40131d:	50                   	push   eax
  40131e:	55                   	push   ebp
  40131f:	55                   	push   ebp
  401320:	68 00 00 00 80       	push   0x80000000
  401325:	68 60 7f 40 00       	push   0x407f60
  40132a:	68 34 70 40 00       	push   0x407034
  40132f:	68 00 00 04 00       	push   0x40000
  401334:	ff 15 04 61 40 00    	call   DWORD PTR ds:0x406104
  40133a:	3b c5                	cmp    eax,ebp
  40133c:	a3 d0 7a 40 00       	mov    ds:0x407ad0,eax
  401341:	74 ba                	je     0x4012fd
  401343:	8b 8c 24 cc 00 00 00 	mov    ecx,DWORD PTR [esp+0xcc]
  40134a:	53                   	push   ebx
  40134b:	51                   	push   ecx
  40134c:	50                   	push   eax
  40134d:	ff 15 fc 60 40 00    	call   DWORD PTR ds:0x4060fc
  401353:	6a 63                	push   0x63
  401355:	8d 54 24 60          	lea    edx,[esp+0x60]
  401359:	68 e0 71 40 00       	push   0x4071e0
  40135e:	52                   	push   edx
  40135f:	e8 fc 02 00 00       	call   0x401660
  401364:	8b 1d 0c 61 40 00    	mov    ebx,DWORD PTR ds:0x40610c
  40136a:	83 c4 0c             	add    esp,0xc
  40136d:	6a 01                	push   0x1
  40136f:	6a 00                	push   0x0
  401371:	6a 00                	push   0x0
  401373:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  401377:	6a 00                	push   0x0
  401379:	50                   	push   eax
  40137a:	ff 15 10 61 40 00    	call   DWORD PTR ds:0x406110
  401380:	85 c0                	test   eax,eax
  401382:	74 23                	je     0x4013a7
  401384:	83 7c 24 44 12       	cmp    DWORD PTR [esp+0x44],0x12
  401389:	0f 84 b4 00 00 00    	je     0x401443
  40138f:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  401393:	51                   	push   ecx
  401394:	ff 15 08 61 40 00    	call   DWORD PTR ds:0x406108
  40139a:	8d 54 24 40          	lea    edx,[esp+0x40]
  40139e:	52                   	push   edx
  40139f:	ff 15 d4 60 40 00    	call   DWORD PTR ds:0x4060d4
  4013a5:	eb c6                	jmp    0x40136d
  4013a7:	85 ed                	test   ebp,ebp
  4013a9:	75 c2                	jne    0x40136d
  4013ab:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  4013af:	50                   	push   eax
  4013b0:	68 d0 71 40 00       	push   0x4071d0
  4013b5:	e8 76 fd ff ff       	call   0x401130
  4013ba:	83 c4 08             	add    esp,0x8
  4013bd:	83 e8 28             	sub    eax,0x28
  4013c0:	74 59                	je     0x40141b
  4013c2:	83 e8 02             	sub    eax,0x2
  4013c5:	74 3d                	je     0x401404
  4013c7:	bf 60 7f 40 00       	mov    edi,0x407f60
  4013cc:	83 c9 ff             	or     ecx,0xffffffff
  4013cf:	33 c0                	xor    eax,eax
  4013d1:	8d 54 24 5c          	lea    edx,[esp+0x5c]
  4013d5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4013d7:	f7 d1                	not    ecx
  4013d9:	2b f9                	sub    edi,ecx
  4013db:	55                   	push   ebp
  4013dc:	8b c1                	mov    eax,ecx
  4013de:	8b f7                	mov    esi,edi
  4013e0:	8b fa                	mov    edi,edx
  4013e2:	55                   	push   ebp
  4013e3:	c1 e9 02             	shr    ecx,0x2
  4013e6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4013e8:	8b c8                	mov    ecx,eax
  4013ea:	6a 10                	push   0x10
  4013ec:	83 e1 03             	and    ecx,0x3
  4013ef:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4013f1:	8b 0d d0 7a 40 00    	mov    ecx,DWORD PTR ds:0x407ad0
  4013f7:	51                   	push   ecx
  4013f8:	ff d3                	call   ebx
  4013fa:	bd 01 00 00 00       	mov    ebp,0x1
  4013ff:	e9 69 ff ff ff       	jmp    0x40136d
  401404:	68 60 7f 40 00       	push   0x407f60
  401409:	68 d0 71 40 00       	push   0x4071d0
  40140e:	e8 1d fd ff ff       	call   0x401130
  401413:	83 c4 08             	add    esp,0x8
  401416:	e9 52 ff ff ff       	jmp    0x40136d
  40141b:	68 c8 71 40 00       	push   0x4071c8
  401420:	68 b8 71 40 00       	push   0x4071b8
  401425:	e8 06 fd ff ff       	call   0x401130
  40142a:	6a 63                	push   0x63
  40142c:	8d 54 24 68          	lea    edx,[esp+0x68]
  401430:	68 ac 71 40 00       	push   0x4071ac
  401435:	52                   	push   edx
  401436:	e8 25 02 00 00       	call   0x401660
  40143b:	83 c4 14             	add    esp,0x14
  40143e:	e9 2a ff ff ff       	jmp    0x40136d
  401443:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  401447:	5b                   	pop    ebx
  401448:	5f                   	pop    edi
  401449:	5e                   	pop    esi
  40144a:	5d                   	pop    ebp
  40144b:	81 c4 b0 00 00 00    	add    esp,0xb0
  401451:	c2 10 00             	ret    0x10
  401454:	90                   	nop
  401455:	90                   	nop
  401456:	90                   	nop
  401457:	90                   	nop
  401458:	90                   	nop
  401459:	90                   	nop
  40145a:	90                   	nop
  40145b:	90                   	nop
  40145c:	90                   	nop
  40145d:	90                   	nop
  40145e:	90                   	nop
  40145f:	90                   	nop
  401460:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  401464:	83 ec 40             	sub    esp,0x40
  401467:	83 f8 0f             	cmp    eax,0xf
  40146a:	77 40                	ja     0x4014ac
  40146c:	74 18                	je     0x401486
  40146e:	8b c8                	mov    ecx,eax
  401470:	49                   	dec    ecx
  401471:	74 7c                	je     0x4014ef
  401473:	49                   	dec    ecx
  401474:	75 42                	jne    0x4014b8
  401476:	6a 00                	push   0x0
  401478:	ff 15 dc 60 40 00    	call   DWORD PTR ds:0x4060dc
  40147e:	33 c0                	xor    eax,eax
  401480:	83 c4 40             	add    esp,0x40
  401483:	c2 10 00             	ret    0x10
  401486:	56                   	push   esi
  401487:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
  40148b:	8d 44 24 04          	lea    eax,[esp+0x4]
  40148f:	50                   	push   eax
  401490:	56                   	push   esi
  401491:	ff 15 e0 60 40 00    	call   DWORD PTR ds:0x4060e0
  401497:	8d 4c 24 04          	lea    ecx,[esp+0x4]
  40149b:	51                   	push   ecx
  40149c:	56                   	push   esi
  40149d:	ff 15 d8 60 40 00    	call   DWORD PTR ds:0x4060d8
  4014a3:	5e                   	pop    esi
  4014a4:	33 c0                	xor    eax,eax
  4014a6:	83 c4 40             	add    esp,0x40
  4014a9:	c2 10 00             	ret    0x10
  4014ac:	83 f8 10             	cmp    eax,0x10
  4014af:	74 33                	je     0x4014e4
  4014b1:	3d 00 02 00 00       	cmp    eax,0x200
  4014b6:	74 1c                	je     0x4014d4
  4014b8:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
  4014bc:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  4014c0:	52                   	push   edx
  4014c1:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  4014c5:	51                   	push   ecx
  4014c6:	50                   	push   eax
  4014c7:	52                   	push   edx
  4014c8:	ff 15 e8 60 40 00    	call   DWORD PTR ds:0x4060e8
  4014ce:	83 c4 40             	add    esp,0x40
  4014d1:	c2 10 00             	ret    0x10
  4014d4:	6a 00                	push   0x0
  4014d6:	ff 15 ec 60 40 00    	call   DWORD PTR ds:0x4060ec
  4014dc:	33 c0                	xor    eax,eax
  4014de:	83 c4 40             	add    esp,0x40
  4014e1:	c2 10 00             	ret    0x10
  4014e4:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  4014e8:	50                   	push   eax
  4014e9:	ff 15 e4 60 40 00    	call   DWORD PTR ds:0x4060e4
  4014ef:	33 c0                	xor    eax,eax
  4014f1:	83 c4 40             	add    esp,0x40
  4014f4:	c2 10 00             	ret    0x10
  4014f7:	90                   	nop
  4014f8:	90                   	nop
  4014f9:	90                   	nop
  4014fa:	90                   	nop
  4014fb:	90                   	nop
  4014fc:	90                   	nop
  4014fd:	90                   	nop
  4014fe:	90                   	nop
  4014ff:	90                   	nop
  401500:	55                   	push   ebp
  401501:	8b ec                	mov    ebp,esp
  401503:	83 ec 20             	sub    esp,0x20
  401506:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  401509:	56                   	push   esi
  40150a:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  40150d:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
  401510:	8d 45 10             	lea    eax,[ebp+0x10]
  401513:	c7 45 ec 42 00 00 00 	mov    DWORD PTR [ebp-0x14],0x42
  40151a:	50                   	push   eax
  40151b:	8d 45 e0             	lea    eax,[ebp-0x20]
  40151e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  401521:	c7 45 e4 ff ff ff 7f 	mov    DWORD PTR [ebp-0x1c],0x7fffffff
  401528:	50                   	push   eax
  401529:	e8 84 04 00 00       	call   0x4019b2
  40152e:	83 c4 0c             	add    esp,0xc
  401531:	ff 4d e4             	dec    DWORD PTR [ebp-0x1c]
  401534:	8b f0                	mov    esi,eax
  401536:	78 08                	js     0x401540
  401538:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  40153b:	80 20 00             	and    BYTE PTR [eax],0x0
  40153e:	eb 0d                	jmp    0x40154d
  401540:	8d 45 e0             	lea    eax,[ebp-0x20]
  401543:	50                   	push   eax
  401544:	6a 00                	push   0x0
  401546:	e8 52 03 00 00       	call   0x40189d
  40154b:	59                   	pop    ecx
  40154c:	59                   	pop    ecx
  40154d:	8b c6                	mov    eax,esi
  40154f:	5e                   	pop    esi
  401550:	c9                   	leave
  401551:	c3                   	ret
  401552:	a1 98 94 40 00       	mov    eax,ds:0x409498
  401557:	85 c0                	test   eax,eax
  401559:	74 02                	je     0x40155d
  40155b:	ff d0                	call   eax
  40155d:	68 14 70 40 00       	push   0x407014
  401562:	68 08 70 40 00       	push   0x407008
  401567:	e8 ce 00 00 00       	call   0x40163a
  40156c:	68 04 70 40 00       	push   0x407004
  401571:	68 00 70 40 00       	push   0x407000
  401576:	e8 bf 00 00 00       	call   0x40163a
  40157b:	83 c4 10             	add    esp,0x10
  40157e:	c3                   	ret
  40157f:	6a 00                	push   0x0
  401581:	6a 00                	push   0x0
  401583:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  401587:	e8 15 00 00 00       	call   0x4015a1
  40158c:	83 c4 0c             	add    esp,0xc
  40158f:	c3                   	ret
  401590:	6a 00                	push   0x0
  401592:	6a 01                	push   0x1
  401594:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  401598:	e8 04 00 00 00       	call   0x4015a1
  40159d:	83 c4 0c             	add    esp,0xc
  4015a0:	c3                   	ret
  4015a1:	57                   	push   edi
  4015a2:	6a 01                	push   0x1
  4015a4:	5f                   	pop    edi
  4015a5:	39 3d ac 7f 40 00    	cmp    DWORD PTR ds:0x407fac,edi
  4015ab:	75 11                	jne    0x4015be
  4015ad:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  4015b1:	ff 15 5c 60 40 00    	call   DWORD PTR ds:0x40605c
  4015b7:	50                   	push   eax
  4015b8:	ff 15 58 60 40 00    	call   DWORD PTR ds:0x406058
  4015be:	83 7c 24 0c 00       	cmp    DWORD PTR [esp+0xc],0x0
  4015c3:	53                   	push   ebx
  4015c4:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  4015c8:	89 3d a8 7f 40 00    	mov    DWORD PTR ds:0x407fa8,edi
  4015ce:	88 1d a4 7f 40 00    	mov    BYTE PTR ds:0x407fa4,bl
  4015d4:	75 3c                	jne    0x401612
  4015d6:	a1 94 94 40 00       	mov    eax,ds:0x409494
  4015db:	85 c0                	test   eax,eax
  4015dd:	74 22                	je     0x401601
  4015df:	8b 0d 90 94 40 00    	mov    ecx,DWORD PTR ds:0x409490
  4015e5:	56                   	push   esi
  4015e6:	8d 71 fc             	lea    esi,[ecx-0x4]
  4015e9:	3b f0                	cmp    esi,eax
  4015eb:	72 13                	jb     0x401600
  4015ed:	8b 06                	mov    eax,DWORD PTR [esi]
  4015ef:	85 c0                	test   eax,eax
  4015f1:	74 02                	je     0x4015f5
  4015f3:	ff d0                	call   eax
  4015f5:	83 ee 04             	sub    esi,0x4
  4015f8:	3b 35 94 94 40 00    	cmp    esi,DWORD PTR ds:0x409494
  4015fe:	73 ed                	jae    0x4015ed
  401600:	5e                   	pop    esi
  401601:	68 20 70 40 00       	push   0x407020
  401606:	68 18 70 40 00       	push   0x407018
  40160b:	e8 2a 00 00 00       	call   0x40163a
  401610:	59                   	pop    ecx
  401611:	59                   	pop    ecx
  401612:	68 28 70 40 00       	push   0x407028
  401617:	68 24 70 40 00       	push   0x407024
  40161c:	e8 19 00 00 00       	call   0x40163a
  401621:	59                   	pop    ecx
  401622:	59                   	pop    ecx
  401623:	85 db                	test   ebx,ebx
  401625:	5b                   	pop    ebx
  401626:	75 10                	jne    0x401638
  401628:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40162c:	89 3d ac 7f 40 00    	mov    DWORD PTR ds:0x407fac,edi
  401632:	ff 15 54 60 40 00    	call   DWORD PTR ds:0x406054
  401638:	5f                   	pop    edi
  401639:	c3                   	ret
  40163a:	56                   	push   esi
  40163b:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40163f:	3b 74 24 0c          	cmp    esi,DWORD PTR [esp+0xc]
  401643:	73 0d                	jae    0x401652
  401645:	8b 06                	mov    eax,DWORD PTR [esi]
  401647:	85 c0                	test   eax,eax
  401649:	74 02                	je     0x40164d
  40164b:	ff d0                	call   eax
  40164d:	83 c6 04             	add    esi,0x4
  401650:	eb ed                	jmp    0x40163f
  401652:	5e                   	pop    esi
  401653:	c3                   	ret
  401654:	cc                   	int3
  401655:	cc                   	int3
  401656:	cc                   	int3
  401657:	cc                   	int3
  401658:	cc                   	int3
  401659:	cc                   	int3
  40165a:	cc                   	int3
  40165b:	cc                   	int3
  40165c:	cc                   	int3
  40165d:	cc                   	int3
  40165e:	cc                   	int3
  40165f:	cc                   	int3
  401660:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  401664:	57                   	push   edi
  401665:	85 c9                	test   ecx,ecx
  401667:	74 7a                	je     0x4016e3
  401669:	56                   	push   esi
  40166a:	53                   	push   ebx
  40166b:	8b d9                	mov    ebx,ecx
  40166d:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  401671:	f7 c6 03 00 00 00    	test   esi,0x3
  401677:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  40167b:	75 07                	jne    0x401684
  40167d:	c1 e9 02             	shr    ecx,0x2
  401680:	75 6f                	jne    0x4016f1
  401682:	eb 21                	jmp    0x4016a5
  401684:	8a 06                	mov    al,BYTE PTR [esi]
  401686:	46                   	inc    esi
  401687:	88 07                	mov    BYTE PTR [edi],al
  401689:	47                   	inc    edi
  40168a:	49                   	dec    ecx
  40168b:	74 25                	je     0x4016b2
  40168d:	84 c0                	test   al,al
  40168f:	74 29                	je     0x4016ba
  401691:	f7 c6 03 00 00 00    	test   esi,0x3
  401697:	75 eb                	jne    0x401684
  401699:	8b d9                	mov    ebx,ecx
  40169b:	c1 e9 02             	shr    ecx,0x2
  40169e:	75 51                	jne    0x4016f1
  4016a0:	83 e3 03             	and    ebx,0x3
  4016a3:	74 0d                	je     0x4016b2
  4016a5:	8a 06                	mov    al,BYTE PTR [esi]
  4016a7:	46                   	inc    esi
  4016a8:	88 07                	mov    BYTE PTR [edi],al
  4016aa:	47                   	inc    edi
  4016ab:	84 c0                	test   al,al
  4016ad:	74 2f                	je     0x4016de
  4016af:	4b                   	dec    ebx
  4016b0:	75 f3                	jne    0x4016a5
  4016b2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4016b6:	5b                   	pop    ebx
  4016b7:	5e                   	pop    esi
  4016b8:	5f                   	pop    edi
  4016b9:	c3                   	ret
  4016ba:	f7 c7 03 00 00 00    	test   edi,0x3
  4016c0:	74 12                	je     0x4016d4
  4016c2:	88 07                	mov    BYTE PTR [edi],al
  4016c4:	47                   	inc    edi
  4016c5:	49                   	dec    ecx
  4016c6:	0f 84 8a 00 00 00    	je     0x401756
  4016cc:	f7 c7 03 00 00 00    	test   edi,0x3
  4016d2:	75 ee                	jne    0x4016c2
  4016d4:	8b d9                	mov    ebx,ecx
  4016d6:	c1 e9 02             	shr    ecx,0x2
  4016d9:	75 6c                	jne    0x401747
  4016db:	88 07                	mov    BYTE PTR [edi],al
  4016dd:	47                   	inc    edi
  4016de:	4b                   	dec    ebx
  4016df:	75 fa                	jne    0x4016db
  4016e1:	5b                   	pop    ebx
  4016e2:	5e                   	pop    esi
  4016e3:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  4016e7:	5f                   	pop    edi
  4016e8:	c3                   	ret
  4016e9:	89 17                	mov    DWORD PTR [edi],edx
  4016eb:	83 c7 04             	add    edi,0x4
  4016ee:	49                   	dec    ecx
  4016ef:	74 af                	je     0x4016a0
  4016f1:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  4016f6:	8b 06                	mov    eax,DWORD PTR [esi]
  4016f8:	03 d0                	add    edx,eax
  4016fa:	83 f0 ff             	xor    eax,0xffffffff
  4016fd:	33 c2                	xor    eax,edx
  4016ff:	8b 16                	mov    edx,DWORD PTR [esi]
  401701:	83 c6 04             	add    esi,0x4
  401704:	a9 00 01 01 81       	test   eax,0x81010100
  401709:	74 de                	je     0x4016e9
  40170b:	84 d2                	test   dl,dl
  40170d:	74 2c                	je     0x40173b
  40170f:	84 f6                	test   dh,dh
  401711:	74 1e                	je     0x401731
  401713:	f7 c2 00 00 ff 00    	test   edx,0xff0000
  401719:	74 0c                	je     0x401727
  40171b:	f7 c2 00 00 00 ff    	test   edx,0xff000000
  401721:	75 c6                	jne    0x4016e9
  401723:	89 17                	mov    DWORD PTR [edi],edx
  401725:	eb 18                	jmp    0x40173f
  401727:	81 e2 ff ff 00 00    	and    edx,0xffff
  40172d:	89 17                	mov    DWORD PTR [edi],edx
  40172f:	eb 0e                	jmp    0x40173f
  401731:	81 e2 ff 00 00 00    	and    edx,0xff
  401737:	89 17                	mov    DWORD PTR [edi],edx
  401739:	eb 04                	jmp    0x40173f
  40173b:	33 d2                	xor    edx,edx
  40173d:	89 17                	mov    DWORD PTR [edi],edx
  40173f:	83 c7 04             	add    edi,0x4
  401742:	33 c0                	xor    eax,eax
  401744:	49                   	dec    ecx
  401745:	74 0a                	je     0x401751
  401747:	33 c0                	xor    eax,eax
  401749:	89 07                	mov    DWORD PTR [edi],eax
  40174b:	83 c7 04             	add    edi,0x4
  40174e:	49                   	dec    ecx
  40174f:	75 f8                	jne    0x401749
  401751:	83 e3 03             	and    ebx,0x3
  401754:	75 85                	jne    0x4016db
  401756:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  40175a:	5b                   	pop    ebx
  40175b:	5e                   	pop    esi
  40175c:	5f                   	pop    edi
  40175d:	c3                   	ret
  40175e:	55                   	push   ebp
  40175f:	8b ec                	mov    ebp,esp
  401761:	6a ff                	push   0xffffffff
  401763:	68 18 61 40 00       	push   0x406118
  401768:	68 b0 2a 40 00       	push   0x402ab0
  40176d:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  401773:	50                   	push   eax
  401774:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40177b:	83 ec 58             	sub    esp,0x58
  40177e:	53                   	push   ebx
  40177f:	56                   	push   esi
  401780:	57                   	push   edi
  401781:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  401784:	ff 15 6c 60 40 00    	call   DWORD PTR ds:0x40606c
  40178a:	33 d2                	xor    edx,edx
  40178c:	8a d4                	mov    dl,ah
  40178e:	89 15 7c 7f 40 00    	mov    DWORD PTR ds:0x407f7c,edx
  401794:	8b c8                	mov    ecx,eax
  401796:	81 e1 ff 00 00 00    	and    ecx,0xff
  40179c:	89 0d 78 7f 40 00    	mov    DWORD PTR ds:0x407f78,ecx
  4017a2:	c1 e1 08             	shl    ecx,0x8
  4017a5:	03 ca                	add    ecx,edx
  4017a7:	89 0d 74 7f 40 00    	mov    DWORD PTR ds:0x407f74,ecx
  4017ad:	c1 e8 10             	shr    eax,0x10
  4017b0:	a3 70 7f 40 00       	mov    ds:0x407f70,eax
  4017b5:	33 f6                	xor    esi,esi
  4017b7:	56                   	push   esi
  4017b8:	e8 be 11 00 00       	call   0x40297b
  4017bd:	59                   	pop    ecx
  4017be:	85 c0                	test   eax,eax
  4017c0:	75 08                	jne    0x4017ca
  4017c2:	6a 1c                	push   0x1c
  4017c4:	e8 b0 00 00 00       	call   0x401879
  4017c9:	59                   	pop    ecx
  4017ca:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
  4017cd:	e8 fe 0f 00 00       	call   0x4027d0
  4017d2:	ff 15 68 60 40 00    	call   DWORD PTR ds:0x406068
  4017d8:	a3 84 94 40 00       	mov    ds:0x409484,eax
  4017dd:	e8 bc 0e 00 00       	call   0x40269e
  4017e2:	a3 b0 7f 40 00       	mov    ds:0x407fb0,eax
  4017e7:	e8 65 0c 00 00       	call   0x402451
  4017ec:	e8 a7 0b 00 00       	call   0x402398
  4017f1:	e8 5c fd ff ff       	call   0x401552
  4017f6:	89 75 d0             	mov    DWORD PTR [ebp-0x30],esi
  4017f9:	8d 45 a4             	lea    eax,[ebp-0x5c]
  4017fc:	50                   	push   eax
  4017fd:	ff 15 64 60 40 00    	call   DWORD PTR ds:0x406064
  401803:	e8 38 0b 00 00       	call   0x402340
  401808:	89 45 9c             	mov    DWORD PTR [ebp-0x64],eax
  40180b:	f6 45 d0 01          	test   BYTE PTR [ebp-0x30],0x1
  40180f:	74 06                	je     0x401817
  401811:	0f b7 45 d4          	movzx  eax,WORD PTR [ebp-0x2c]
  401815:	eb 03                	jmp    0x40181a
  401817:	6a 0a                	push   0xa
  401819:	58                   	pop    eax
  40181a:	50                   	push   eax
  40181b:	ff 75 9c             	push   DWORD PTR [ebp-0x64]
  40181e:	56                   	push   esi
  40181f:	56                   	push   esi
  401820:	ff 15 60 60 40 00    	call   DWORD PTR ds:0x406060
  401826:	50                   	push   eax
  401827:	e8 24 fa ff ff       	call   0x401250
  40182c:	89 45 a0             	mov    DWORD PTR [ebp-0x60],eax
  40182f:	50                   	push   eax
  401830:	e8 4a fd ff ff       	call   0x40157f
  401835:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  401838:	8b 08                	mov    ecx,DWORD PTR [eax]
  40183a:	8b 09                	mov    ecx,DWORD PTR [ecx]
  40183c:	89 4d 98             	mov    DWORD PTR [ebp-0x68],ecx
  40183f:	50                   	push   eax
  401840:	51                   	push   ecx
  401841:	e8 76 09 00 00       	call   0x4021bc
  401846:	59                   	pop    ecx
  401847:	59                   	pop    ecx
  401848:	c3                   	ret
  401849:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  40184c:	ff 75 98             	push   DWORD PTR [ebp-0x68]
  40184f:	e8 3c fd ff ff       	call   0x401590
  401854:	83 3d b8 7f 40 00 01 	cmp    DWORD PTR ds:0x407fb8,0x1
  40185b:	75 05                	jne    0x401862
  40185d:	e8 26 13 00 00       	call   0x402b88
  401862:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  401866:	e8 56 13 00 00       	call   0x402bc1
  40186b:	68 ff 00 00 00       	push   0xff
  401870:	ff 15 30 72 40 00    	call   DWORD PTR ds:0x407230
  401876:	59                   	pop    ecx
  401877:	59                   	pop    ecx
  401878:	c3                   	ret
  401879:	83 3d b8 7f 40 00 01 	cmp    DWORD PTR ds:0x407fb8,0x1
  401880:	75 05                	jne    0x401887
  401882:	e8 01 13 00 00       	call   0x402b88
  401887:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  40188b:	e8 31 13 00 00       	call   0x402bc1
  401890:	59                   	pop    ecx
  401891:	68 ff 00 00 00       	push   0xff
  401896:	ff 15 54 60 40 00    	call   DWORD PTR ds:0x406054
  40189c:	c3                   	ret
  40189d:	55                   	push   ebp
  40189e:	8b ec                	mov    ebp,esp
  4018a0:	53                   	push   ebx
  4018a1:	56                   	push   esi
  4018a2:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  4018a5:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  4018a8:	8b 5e 10             	mov    ebx,DWORD PTR [esi+0x10]
  4018ab:	a8 82                	test   al,0x82
  4018ad:	0f 84 f3 00 00 00    	je     0x4019a6
  4018b3:	a8 40                	test   al,0x40
  4018b5:	0f 85 eb 00 00 00    	jne    0x4019a6
  4018bb:	a8 01                	test   al,0x1
  4018bd:	74 16                	je     0x4018d5
  4018bf:	83 66 04 00          	and    DWORD PTR [esi+0x4],0x0
  4018c3:	a8 10                	test   al,0x10
  4018c5:	0f 84 db 00 00 00    	je     0x4019a6
  4018cb:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  4018ce:	24 fe                	and    al,0xfe
  4018d0:	89 0e                	mov    DWORD PTR [esi],ecx
  4018d2:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  4018d5:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  4018d8:	83 66 04 00          	and    DWORD PTR [esi+0x4],0x0
  4018dc:	83 65 0c 00          	and    DWORD PTR [ebp+0xc],0x0
  4018e0:	24 ef                	and    al,0xef
  4018e2:	0c 02                	or     al,0x2
  4018e4:	66 a9 0c 01          	test   ax,0x10c
  4018e8:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  4018eb:	75 22                	jne    0x40190f
  4018ed:	81 fe 98 73 40 00    	cmp    esi,0x407398
  4018f3:	74 08                	je     0x4018fd
  4018f5:	81 fe b8 73 40 00    	cmp    esi,0x4073b8
  4018fb:	75 0b                	jne    0x401908
  4018fd:	53                   	push   ebx
  4018fe:	e8 9c 16 00 00       	call   0x402f9f
  401903:	85 c0                	test   eax,eax
  401905:	59                   	pop    ecx
  401906:	75 07                	jne    0x40190f
  401908:	56                   	push   esi
  401909:	e8 4d 16 00 00       	call   0x402f5b
  40190e:	59                   	pop    ecx
  40190f:	66 f7 46 0c 08 01    	test   WORD PTR [esi+0xc],0x108
  401915:	57                   	push   edi
  401916:	74 64                	je     0x40197c
  401918:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  40191b:	8b 3e                	mov    edi,DWORD PTR [esi]
  40191d:	2b f8                	sub    edi,eax
  40191f:	8d 48 01             	lea    ecx,[eax+0x1]
  401922:	89 0e                	mov    DWORD PTR [esi],ecx
  401924:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  401927:	49                   	dec    ecx
  401928:	85 ff                	test   edi,edi
  40192a:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  40192d:	7e 10                	jle    0x40193f
  40192f:	57                   	push   edi
  401930:	50                   	push   eax
  401931:	53                   	push   ebx
  401932:	e8 77 14 00 00       	call   0x402dae
  401937:	83 c4 0c             	add    esp,0xc
  40193a:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  40193d:	eb 33                	jmp    0x401972
  40193f:	83 fb ff             	cmp    ebx,0xffffffff
  401942:	74 16                	je     0x40195a
  401944:	8b c3                	mov    eax,ebx
  401946:	8b cb                	mov    ecx,ebx
  401948:	c1 f8 05             	sar    eax,0x5
  40194b:	83 e1 1f             	and    ecx,0x1f
  40194e:	8b 04 85 80 93 40 00 	mov    eax,DWORD PTR [eax*4+0x409380]
  401955:	8d 04 c8             	lea    eax,[eax+ecx*8]
  401958:	eb 05                	jmp    0x40195f
  40195a:	b8 c8 72 40 00       	mov    eax,0x4072c8
  40195f:	f6 40 04 20          	test   BYTE PTR [eax+0x4],0x20
  401963:	74 0d                	je     0x401972
  401965:	6a 02                	push   0x2
  401967:	6a 00                	push   0x0
  401969:	53                   	push   ebx
  40196a:	e8 a5 13 00 00       	call   0x402d14
  40196f:	83 c4 0c             	add    esp,0xc
  401972:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  401975:	8a 4d 08             	mov    cl,BYTE PTR [ebp+0x8]
  401978:	88 08                	mov    BYTE PTR [eax],cl
  40197a:	eb 14                	jmp    0x401990
  40197c:	6a 01                	push   0x1
  40197e:	8d 45 08             	lea    eax,[ebp+0x8]
  401981:	5f                   	pop    edi
  401982:	57                   	push   edi
  401983:	50                   	push   eax
  401984:	53                   	push   ebx
  401985:	e8 24 14 00 00       	call   0x402dae
  40198a:	83 c4 0c             	add    esp,0xc
  40198d:	89 45 0c             	mov    DWORD PTR [ebp+0xc],eax
  401990:	39 7d 0c             	cmp    DWORD PTR [ebp+0xc],edi
  401993:	5f                   	pop    edi
  401994:	74 06                	je     0x40199c
  401996:	83 4e 0c 20          	or     DWORD PTR [esi+0xc],0x20
  40199a:	eb 0f                	jmp    0x4019ab
  40199c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40199f:	25 ff 00 00 00       	and    eax,0xff
  4019a4:	eb 08                	jmp    0x4019ae
  4019a6:	0c 20                	or     al,0x20
  4019a8:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  4019ab:	83 c8 ff             	or     eax,0xffffffff
  4019ae:	5e                   	pop    esi
  4019af:	5b                   	pop    ebx
  4019b0:	5d                   	pop    ebp
  4019b1:	c3                   	ret
  4019b2:	55                   	push   ebp
  4019b3:	8b ec                	mov    ebp,esp
  4019b5:	81 ec 48 02 00 00    	sub    esp,0x248
  4019bb:	53                   	push   ebx
  4019bc:	56                   	push   esi
  4019bd:	57                   	push   edi
  4019be:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  4019c1:	33 f6                	xor    esi,esi
  4019c3:	8a 1f                	mov    bl,BYTE PTR [edi]
  4019c5:	47                   	inc    edi
  4019c6:	84 db                	test   bl,bl
  4019c8:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
  4019cb:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
  4019ce:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  4019d1:	0f 84 f4 06 00 00    	je     0x4020cb
  4019d7:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  4019da:	33 d2                	xor    edx,edx
  4019dc:	eb 08                	jmp    0x4019e6
  4019de:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  4019e1:	8b 75 d0             	mov    esi,DWORD PTR [ebp-0x30]
  4019e4:	33 d2                	xor    edx,edx
  4019e6:	39 55 ec             	cmp    DWORD PTR [ebp-0x14],edx
  4019e9:	0f 8c dc 06 00 00    	jl     0x4020cb
  4019ef:	80 fb 20             	cmp    bl,0x20
  4019f2:	7c 13                	jl     0x401a07
  4019f4:	80 fb 78             	cmp    bl,0x78
  4019f7:	7f 0e                	jg     0x401a07
  4019f9:	0f be c3             	movsx  eax,bl
  4019fc:	8a 80 04 61 40 00    	mov    al,BYTE PTR [eax+0x406104]
  401a02:	83 e0 0f             	and    eax,0xf
  401a05:	eb 02                	jmp    0x401a09
  401a07:	33 c0                	xor    eax,eax
  401a09:	0f be 84 c6 24 61 40 	movsx  eax,BYTE PTR [esi+eax*8+0x406124]
  401a10:	00 
  401a11:	c1 f8 04             	sar    eax,0x4
  401a14:	83 f8 07             	cmp    eax,0x7
  401a17:	89 45 d0             	mov    DWORD PTR [ebp-0x30],eax
  401a1a:	0f 87 9a 06 00 00    	ja     0x4020ba
  401a20:	ff 24 85 d3 20 40 00 	jmp    DWORD PTR [eax*4+0x4020d3]
  401a27:	83 4d f0 ff          	or     DWORD PTR [ebp-0x10],0xffffffff
  401a2b:	89 55 cc             	mov    DWORD PTR [ebp-0x34],edx
  401a2e:	89 55 d8             	mov    DWORD PTR [ebp-0x28],edx
  401a31:	89 55 e0             	mov    DWORD PTR [ebp-0x20],edx
  401a34:	89 55 e4             	mov    DWORD PTR [ebp-0x1c],edx
  401a37:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
  401a3a:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
  401a3d:	e9 78 06 00 00       	jmp    0x4020ba
  401a42:	0f be c3             	movsx  eax,bl
  401a45:	83 e8 20             	sub    eax,0x20
  401a48:	74 3b                	je     0x401a85
  401a4a:	83 e8 03             	sub    eax,0x3
  401a4d:	74 2d                	je     0x401a7c
  401a4f:	83 e8 08             	sub    eax,0x8
  401a52:	74 1f                	je     0x401a73
  401a54:	48                   	dec    eax
  401a55:	48                   	dec    eax
  401a56:	74 12                	je     0x401a6a
  401a58:	83 e8 03             	sub    eax,0x3
  401a5b:	0f 85 59 06 00 00    	jne    0x4020ba
  401a61:	83 4d fc 08          	or     DWORD PTR [ebp-0x4],0x8
  401a65:	e9 50 06 00 00       	jmp    0x4020ba
  401a6a:	83 4d fc 04          	or     DWORD PTR [ebp-0x4],0x4
  401a6e:	e9 47 06 00 00       	jmp    0x4020ba
  401a73:	83 4d fc 01          	or     DWORD PTR [ebp-0x4],0x1
  401a77:	e9 3e 06 00 00       	jmp    0x4020ba
  401a7c:	80 4d fc 80          	or     BYTE PTR [ebp-0x4],0x80
  401a80:	e9 35 06 00 00       	jmp    0x4020ba
  401a85:	83 4d fc 02          	or     DWORD PTR [ebp-0x4],0x2
  401a89:	e9 2c 06 00 00       	jmp    0x4020ba
  401a8e:	80 fb 2a             	cmp    bl,0x2a
  401a91:	75 23                	jne    0x401ab6
  401a93:	8d 45 10             	lea    eax,[ebp+0x10]
  401a96:	50                   	push   eax
  401a97:	e8 f5 06 00 00       	call   0x402191
  401a9c:	85 c0                	test   eax,eax
  401a9e:	59                   	pop    ecx
  401a9f:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
  401aa2:	0f 8d 12 06 00 00    	jge    0x4020ba
  401aa8:	83 4d fc 04          	or     DWORD PTR [ebp-0x4],0x4
  401aac:	f7 d8                	neg    eax
  401aae:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
  401ab1:	e9 04 06 00 00       	jmp    0x4020ba
  401ab6:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
  401ab9:	0f be cb             	movsx  ecx,bl
  401abc:	8d 04 80             	lea    eax,[eax+eax*4]
  401abf:	8d 44 41 d0          	lea    eax,[ecx+eax*2-0x30]
  401ac3:	eb e9                	jmp    0x401aae
  401ac5:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
  401ac8:	e9 ed 05 00 00       	jmp    0x4020ba
  401acd:	80 fb 2a             	cmp    bl,0x2a
  401ad0:	75 1e                	jne    0x401af0
  401ad2:	8d 45 10             	lea    eax,[ebp+0x10]
  401ad5:	50                   	push   eax
  401ad6:	e8 b6 06 00 00       	call   0x402191
  401adb:	85 c0                	test   eax,eax
  401add:	59                   	pop    ecx
  401ade:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  401ae1:	0f 8d d3 05 00 00    	jge    0x4020ba
  401ae7:	83 4d f0 ff          	or     DWORD PTR [ebp-0x10],0xffffffff
  401aeb:	e9 ca 05 00 00       	jmp    0x4020ba
  401af0:	8d 04 89             	lea    eax,[ecx+ecx*4]
  401af3:	0f be cb             	movsx  ecx,bl
  401af6:	8d 44 41 d0          	lea    eax,[ecx+eax*2-0x30]
  401afa:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  401afd:	e9 b8 05 00 00       	jmp    0x4020ba
  401b02:	80 fb 49             	cmp    bl,0x49
  401b05:	74 2e                	je     0x401b35
  401b07:	80 fb 68             	cmp    bl,0x68
  401b0a:	74 20                	je     0x401b2c
  401b0c:	80 fb 6c             	cmp    bl,0x6c
  401b0f:	74 12                	je     0x401b23
  401b11:	80 fb 77             	cmp    bl,0x77
  401b14:	0f 85 a0 05 00 00    	jne    0x4020ba
  401b1a:	80 4d fd 08          	or     BYTE PTR [ebp-0x3],0x8
  401b1e:	e9 97 05 00 00       	jmp    0x4020ba
  401b23:	83 4d fc 10          	or     DWORD PTR [ebp-0x4],0x10
  401b27:	e9 8e 05 00 00       	jmp    0x4020ba
  401b2c:	83 4d fc 20          	or     DWORD PTR [ebp-0x4],0x20
  401b30:	e9 85 05 00 00       	jmp    0x4020ba
  401b35:	80 3f 36             	cmp    BYTE PTR [edi],0x36
  401b38:	75 14                	jne    0x401b4e
  401b3a:	80 7f 01 34          	cmp    BYTE PTR [edi+0x1],0x34
  401b3e:	75 0e                	jne    0x401b4e
  401b40:	47                   	inc    edi
  401b41:	47                   	inc    edi
  401b42:	80 4d fd 80          	or     BYTE PTR [ebp-0x3],0x80
  401b46:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  401b49:	e9 6c 05 00 00       	jmp    0x4020ba
  401b4e:	89 55 d0             	mov    DWORD PTR [ebp-0x30],edx
  401b51:	8b 0d 18 76 40 00    	mov    ecx,DWORD PTR ds:0x407618
  401b57:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
  401b5a:	0f b6 c3             	movzx  eax,bl
  401b5d:	f6 44 41 01 80       	test   BYTE PTR [ecx+eax*2+0x1],0x80
  401b62:	74 19                	je     0x401b7d
  401b64:	8d 45 ec             	lea    eax,[ebp-0x14]
  401b67:	50                   	push   eax
  401b68:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401b6b:	0f be c3             	movsx  eax,bl
  401b6e:	50                   	push   eax
  401b6f:	e8 7f 05 00 00       	call   0x4020f3
  401b74:	8a 1f                	mov    bl,BYTE PTR [edi]
  401b76:	83 c4 0c             	add    esp,0xc
  401b79:	47                   	inc    edi
  401b7a:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  401b7d:	8d 45 ec             	lea    eax,[ebp-0x14]
  401b80:	50                   	push   eax
  401b81:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  401b84:	0f be c3             	movsx  eax,bl
  401b87:	50                   	push   eax
  401b88:	e8 66 05 00 00       	call   0x4020f3
  401b8d:	83 c4 0c             	add    esp,0xc
  401b90:	e9 25 05 00 00       	jmp    0x4020ba
  401b95:	0f be c3             	movsx  eax,bl
  401b98:	83 f8 67             	cmp    eax,0x67
  401b9b:	0f 8f 1c 02 00 00    	jg     0x401dbd
  401ba1:	83 f8 65             	cmp    eax,0x65
  401ba4:	0f 8d 96 00 00 00    	jge    0x401c40
  401baa:	83 f8 58             	cmp    eax,0x58
  401bad:	0f 8f eb 00 00 00    	jg     0x401c9e
  401bb3:	0f 84 78 02 00 00    	je     0x401e31
  401bb9:	83 e8 43             	sub    eax,0x43
  401bbc:	0f 84 9f 00 00 00    	je     0x401c61
  401bc2:	48                   	dec    eax
  401bc3:	48                   	dec    eax
  401bc4:	74 70                	je     0x401c36
  401bc6:	48                   	dec    eax
  401bc7:	48                   	dec    eax
  401bc8:	74 6c                	je     0x401c36
  401bca:	83 e8 0c             	sub    eax,0xc
  401bcd:	0f 85 e9 03 00 00    	jne    0x401fbc
  401bd3:	66 f7 45 fc 30 08    	test   WORD PTR [ebp-0x4],0x830
  401bd9:	75 04                	jne    0x401bdf
  401bdb:	80 4d fd 08          	or     BYTE PTR [ebp-0x3],0x8
  401bdf:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
  401be2:	83 fe ff             	cmp    esi,0xffffffff
  401be5:	75 05                	jne    0x401bec
  401be7:	be ff ff ff 7f       	mov    esi,0x7fffffff
  401bec:	8d 45 10             	lea    eax,[ebp+0x10]
  401bef:	50                   	push   eax
  401bf0:	e8 9c 05 00 00       	call   0x402191
  401bf5:	66 f7 45 fc 10 08    	test   WORD PTR [ebp-0x4],0x810
  401bfb:	59                   	pop    ecx
  401bfc:	8b c8                	mov    ecx,eax
  401bfe:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  401c01:	0f 84 fe 01 00 00    	je     0x401e05
  401c07:	85 c9                	test   ecx,ecx
  401c09:	75 09                	jne    0x401c14
  401c0b:	8b 0d 3c 72 40 00    	mov    ecx,DWORD PTR ds:0x40723c
  401c11:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  401c14:	c7 45 dc 01 00 00 00 	mov    DWORD PTR [ebp-0x24],0x1
  401c1b:	8b c1                	mov    eax,ecx
  401c1d:	8b d6                	mov    edx,esi
  401c1f:	4e                   	dec    esi
  401c20:	85 d2                	test   edx,edx
  401c22:	0f 84 d4 01 00 00    	je     0x401dfc
  401c28:	66 83 38 00          	cmp    WORD PTR [eax],0x0
  401c2c:	0f 84 ca 01 00 00    	je     0x401dfc
  401c32:	40                   	inc    eax
  401c33:	40                   	inc    eax
  401c34:	eb e7                	jmp    0x401c1d
  401c36:	c7 45 cc 01 00 00 00 	mov    DWORD PTR [ebp-0x34],0x1
  401c3d:	80 c3 20             	add    bl,0x20
  401c40:	83 4d fc 40          	or     DWORD PTR [ebp-0x4],0x40
  401c44:	8d bd b8 fd ff ff    	lea    edi,[ebp-0x248]
  401c4a:	3b ca                	cmp    ecx,edx
  401c4c:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
  401c4f:	0f 8d cf 00 00 00    	jge    0x401d24
  401c55:	c7 45 f0 06 00 00 00 	mov    DWORD PTR [ebp-0x10],0x6
  401c5c:	e9 d1 00 00 00       	jmp    0x401d32
  401c61:	66 f7 45 fc 30 08    	test   WORD PTR [ebp-0x4],0x830
  401c67:	75 04                	jne    0x401c6d
  401c69:	80 4d fd 08          	or     BYTE PTR [ebp-0x3],0x8
  401c6d:	66 f7 45 fc 10 08    	test   WORD PTR [ebp-0x4],0x810
  401c73:	8d 45 10             	lea    eax,[ebp+0x10]
  401c76:	50                   	push   eax
  401c77:	74 3b                	je     0x401cb4
  401c79:	e8 30 05 00 00       	call   0x4021ae
  401c7e:	50                   	push   eax
  401c7f:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
  401c85:	50                   	push   eax
  401c86:	e8 70 14 00 00       	call   0x4030fb
  401c8b:	83 c4 0c             	add    esp,0xc
  401c8e:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  401c91:	85 c0                	test   eax,eax
  401c93:	7d 32                	jge    0x401cc7
  401c95:	c7 45 d8 01 00 00 00 	mov    DWORD PTR [ebp-0x28],0x1
  401c9c:	eb 29                	jmp    0x401cc7
  401c9e:	83 e8 5a             	sub    eax,0x5a
  401ca1:	74 32                	je     0x401cd5
  401ca3:	83 e8 09             	sub    eax,0x9
  401ca6:	74 c5                	je     0x401c6d
  401ca8:	48                   	dec    eax
  401ca9:	0f 84 e8 01 00 00    	je     0x401e97
  401caf:	e9 08 03 00 00       	jmp    0x401fbc
  401cb4:	e8 d8 04 00 00       	call   0x402191
  401cb9:	59                   	pop    ecx
  401cba:	88 85 b8 fd ff ff    	mov    BYTE PTR [ebp-0x248],al
  401cc0:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
  401cc7:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
  401ccd:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  401cd0:	e9 e7 02 00 00       	jmp    0x401fbc
  401cd5:	8d 45 10             	lea    eax,[ebp+0x10]
  401cd8:	50                   	push   eax
  401cd9:	e8 b3 04 00 00       	call   0x402191
  401cde:	85 c0                	test   eax,eax
  401ce0:	59                   	pop    ecx
  401ce1:	74 33                	je     0x401d16
  401ce3:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  401ce6:	85 c9                	test   ecx,ecx
  401ce8:	74 2c                	je     0x401d16
  401cea:	f6 45 fd 08          	test   BYTE PTR [ebp-0x3],0x8
  401cee:	74 17                	je     0x401d07
  401cf0:	0f bf 00             	movsx  eax,WORD PTR [eax]
  401cf3:	d1 e8                	shr    eax,1
  401cf5:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  401cf8:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  401cfb:	c7 45 dc 01 00 00 00 	mov    DWORD PTR [ebp-0x24],0x1
  401d02:	e9 b5 02 00 00       	jmp    0x401fbc
  401d07:	83 65 dc 00          	and    DWORD PTR [ebp-0x24],0x0
  401d0b:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  401d0e:	0f bf 00             	movsx  eax,WORD PTR [eax]
  401d11:	e9 a3 02 00 00       	jmp    0x401fb9
  401d16:	a1 38 72 40 00       	mov    eax,ds:0x407238
  401d1b:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  401d1e:	50                   	push   eax
  401d1f:	e9 8e 00 00 00       	jmp    0x401db2
  401d24:	75 0c                	jne    0x401d32
  401d26:	80 fb 67             	cmp    bl,0x67
  401d29:	75 07                	jne    0x401d32
  401d2b:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
  401d32:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  401d35:	ff 75 cc             	push   DWORD PTR [ebp-0x34]
  401d38:	83 c0 08             	add    eax,0x8
  401d3b:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  401d3e:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  401d41:	8b 48 f8             	mov    ecx,DWORD PTR [eax-0x8]
  401d44:	89 4d b8             	mov    DWORD PTR [ebp-0x48],ecx
  401d47:	8b 40 fc             	mov    eax,DWORD PTR [eax-0x4]
  401d4a:	89 45 bc             	mov    DWORD PTR [ebp-0x44],eax
  401d4d:	0f be c3             	movsx  eax,bl
  401d50:	50                   	push   eax
  401d51:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
  401d57:	50                   	push   eax
  401d58:	8d 45 b8             	lea    eax,[ebp-0x48]
  401d5b:	50                   	push   eax
  401d5c:	ff 15 00 76 40 00    	call   DWORD PTR ds:0x407600
  401d62:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
  401d65:	83 c4 14             	add    esp,0x14
  401d68:	81 e6 80 00 00 00    	and    esi,0x80
  401d6e:	74 14                	je     0x401d84
  401d70:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
  401d74:	75 0e                	jne    0x401d84
  401d76:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
  401d7c:	50                   	push   eax
  401d7d:	ff 15 0c 76 40 00    	call   DWORD PTR ds:0x40760c
  401d83:	59                   	pop    ecx
  401d84:	80 fb 67             	cmp    bl,0x67
  401d87:	75 12                	jne    0x401d9b
  401d89:	85 f6                	test   esi,esi
  401d8b:	75 0e                	jne    0x401d9b
  401d8d:	8d 85 b8 fd ff ff    	lea    eax,[ebp-0x248]
  401d93:	50                   	push   eax
  401d94:	ff 15 04 76 40 00    	call   DWORD PTR ds:0x407604
  401d9a:	59                   	pop    ecx
  401d9b:	80 bd b8 fd ff ff 2d 	cmp    BYTE PTR [ebp-0x248],0x2d
  401da2:	75 0d                	jne    0x401db1
  401da4:	80 4d fd 01          	or     BYTE PTR [ebp-0x3],0x1
  401da8:	8d bd b9 fd ff ff    	lea    edi,[ebp-0x247]
  401dae:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
  401db1:	57                   	push   edi
  401db2:	e8 c9 12 00 00       	call   0x403080
  401db7:	59                   	pop    ecx
  401db8:	e9 fc 01 00 00       	jmp    0x401fb9
  401dbd:	83 e8 69             	sub    eax,0x69
  401dc0:	0f 84 d1 00 00 00    	je     0x401e97
  401dc6:	83 e8 05             	sub    eax,0x5
  401dc9:	0f 84 9e 00 00 00    	je     0x401e6d
  401dcf:	48                   	dec    eax
  401dd0:	0f 84 84 00 00 00    	je     0x401e5a
  401dd6:	48                   	dec    eax
  401dd7:	74 51                	je     0x401e2a
  401dd9:	83 e8 03             	sub    eax,0x3
  401ddc:	0f 84 fd fd ff ff    	je     0x401bdf
  401de2:	48                   	dec    eax
  401de3:	48                   	dec    eax
  401de4:	0f 84 b1 00 00 00    	je     0x401e9b
  401dea:	83 e8 03             	sub    eax,0x3
  401ded:	0f 85 c9 01 00 00    	jne    0x401fbc
  401df3:	c7 45 d4 27 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x27
  401dfa:	eb 3c                	jmp    0x401e38
  401dfc:	2b c1                	sub    eax,ecx
  401dfe:	d1 f8                	sar    eax,1
  401e00:	e9 b4 01 00 00       	jmp    0x401fb9
  401e05:	85 c9                	test   ecx,ecx
  401e07:	75 09                	jne    0x401e12
  401e09:	8b 0d 38 72 40 00    	mov    ecx,DWORD PTR ds:0x407238
  401e0f:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  401e12:	8b c1                	mov    eax,ecx
  401e14:	8b d6                	mov    edx,esi
  401e16:	4e                   	dec    esi
  401e17:	85 d2                	test   edx,edx
  401e19:	74 08                	je     0x401e23
  401e1b:	80 38 00             	cmp    BYTE PTR [eax],0x0
  401e1e:	74 03                	je     0x401e23
  401e20:	40                   	inc    eax
  401e21:	eb f1                	jmp    0x401e14
  401e23:	2b c1                	sub    eax,ecx
  401e25:	e9 8f 01 00 00       	jmp    0x401fb9
  401e2a:	c7 45 f0 08 00 00 00 	mov    DWORD PTR [ebp-0x10],0x8
  401e31:	c7 45 d4 07 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x7
  401e38:	f6 45 fc 80          	test   BYTE PTR [ebp-0x4],0x80
  401e3c:	c7 45 f4 10 00 00 00 	mov    DWORD PTR [ebp-0xc],0x10
  401e43:	74 5d                	je     0x401ea2
  401e45:	8a 45 d4             	mov    al,BYTE PTR [ebp-0x2c]
  401e48:	c6 45 ea 30          	mov    BYTE PTR [ebp-0x16],0x30
  401e4c:	04 51                	add    al,0x51
  401e4e:	c7 45 e4 02 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x2
  401e55:	88 45 eb             	mov    BYTE PTR [ebp-0x15],al
  401e58:	eb 48                	jmp    0x401ea2
  401e5a:	f6 45 fc 80          	test   BYTE PTR [ebp-0x4],0x80
  401e5e:	c7 45 f4 08 00 00 00 	mov    DWORD PTR [ebp-0xc],0x8
  401e65:	74 3b                	je     0x401ea2
  401e67:	80 4d fd 02          	or     BYTE PTR [ebp-0x3],0x2
  401e6b:	eb 35                	jmp    0x401ea2
  401e6d:	8d 45 10             	lea    eax,[ebp+0x10]
  401e70:	50                   	push   eax
  401e71:	e8 1b 03 00 00       	call   0x402191
  401e76:	f6 45 fc 20          	test   BYTE PTR [ebp-0x4],0x20
  401e7a:	59                   	pop    ecx
  401e7b:	74 09                	je     0x401e86
  401e7d:	66 8b 4d ec          	mov    cx,WORD PTR [ebp-0x14]
  401e81:	66 89 08             	mov    WORD PTR [eax],cx
  401e84:	eb 05                	jmp    0x401e8b
  401e86:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  401e89:	89 08                	mov    DWORD PTR [eax],ecx
  401e8b:	c7 45 d8 01 00 00 00 	mov    DWORD PTR [ebp-0x28],0x1
  401e92:	e9 23 02 00 00       	jmp    0x4020ba
  401e97:	83 4d fc 40          	or     DWORD PTR [ebp-0x4],0x40
  401e9b:	c7 45 f4 0a 00 00 00 	mov    DWORD PTR [ebp-0xc],0xa
  401ea2:	f6 45 fd 80          	test   BYTE PTR [ebp-0x3],0x80
  401ea6:	74 0c                	je     0x401eb4
  401ea8:	8d 45 10             	lea    eax,[ebp+0x10]
  401eab:	50                   	push   eax
  401eac:	e8 ed 02 00 00       	call   0x40219e
  401eb1:	59                   	pop    ecx
  401eb2:	eb 41                	jmp    0x401ef5
  401eb4:	f6 45 fc 20          	test   BYTE PTR [ebp-0x4],0x20
  401eb8:	74 21                	je     0x401edb
  401eba:	f6 45 fc 40          	test   BYTE PTR [ebp-0x4],0x40
  401ebe:	8d 45 10             	lea    eax,[ebp+0x10]
  401ec1:	50                   	push   eax
  401ec2:	74 0c                	je     0x401ed0
  401ec4:	e8 c8 02 00 00       	call   0x402191
  401ec9:	59                   	pop    ecx
  401eca:	0f bf c0             	movsx  eax,ax
  401ecd:	99                   	cdq
  401ece:	eb 25                	jmp    0x401ef5
  401ed0:	e8 bc 02 00 00       	call   0x402191
  401ed5:	59                   	pop    ecx
  401ed6:	0f b7 c0             	movzx  eax,ax
  401ed9:	eb f2                	jmp    0x401ecd
  401edb:	f6 45 fc 40          	test   BYTE PTR [ebp-0x4],0x40
  401edf:	8d 45 10             	lea    eax,[ebp+0x10]
  401ee2:	50                   	push   eax
  401ee3:	74 08                	je     0x401eed
  401ee5:	e8 a7 02 00 00       	call   0x402191
  401eea:	59                   	pop    ecx
  401eeb:	eb e0                	jmp    0x401ecd
  401eed:	e8 9f 02 00 00       	call   0x402191
  401ef2:	59                   	pop    ecx
  401ef3:	33 d2                	xor    edx,edx
  401ef5:	f6 45 fc 40          	test   BYTE PTR [ebp-0x4],0x40
  401ef9:	74 1b                	je     0x401f16
  401efb:	85 d2                	test   edx,edx
  401efd:	7f 17                	jg     0x401f16
  401eff:	7c 04                	jl     0x401f05
  401f01:	85 c0                	test   eax,eax
  401f03:	73 11                	jae    0x401f16
  401f05:	f7 d8                	neg    eax
  401f07:	83 d2 00             	adc    edx,0x0
  401f0a:	8b f0                	mov    esi,eax
  401f0c:	f7 da                	neg    edx
  401f0e:	80 4d fd 01          	or     BYTE PTR [ebp-0x3],0x1
  401f12:	8b fa                	mov    edi,edx
  401f14:	eb 04                	jmp    0x401f1a
  401f16:	8b f0                	mov    esi,eax
  401f18:	8b fa                	mov    edi,edx
  401f1a:	f6 45 fd 80          	test   BYTE PTR [ebp-0x3],0x80
  401f1e:	75 03                	jne    0x401f23
  401f20:	83 e7 00             	and    edi,0x0
  401f23:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
  401f27:	7d 09                	jge    0x401f32
  401f29:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
  401f30:	eb 04                	jmp    0x401f36
  401f32:	83 65 fc f7          	and    DWORD PTR [ebp-0x4],0xfffffff7
  401f36:	8b c6                	mov    eax,esi
  401f38:	0b c7                	or     eax,edi
  401f3a:	75 04                	jne    0x401f40
  401f3c:	83 65 e4 00          	and    DWORD PTR [ebp-0x1c],0x0
  401f40:	8d 45 b7             	lea    eax,[ebp-0x49]
  401f43:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  401f46:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  401f49:	ff 4d f0             	dec    DWORD PTR [ebp-0x10]
  401f4c:	85 c0                	test   eax,eax
  401f4e:	7f 06                	jg     0x401f56
  401f50:	8b c6                	mov    eax,esi
  401f52:	0b c7                	or     eax,edi
  401f54:	74 3b                	je     0x401f91
  401f56:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  401f59:	99                   	cdq
  401f5a:	52                   	push   edx
  401f5b:	50                   	push   eax
  401f5c:	57                   	push   edi
  401f5d:	56                   	push   esi
  401f5e:	89 45 c0             	mov    DWORD PTR [ebp-0x40],eax
  401f61:	89 55 c4             	mov    DWORD PTR [ebp-0x3c],edx
  401f64:	e8 77 12 00 00       	call   0x4031e0
  401f69:	ff 75 c4             	push   DWORD PTR [ebp-0x3c]
  401f6c:	8b d8                	mov    ebx,eax
  401f6e:	83 c3 30             	add    ebx,0x30
  401f71:	ff 75 c0             	push   DWORD PTR [ebp-0x40]
  401f74:	57                   	push   edi
  401f75:	56                   	push   esi
  401f76:	e8 f5 11 00 00       	call   0x403170
  401f7b:	83 fb 39             	cmp    ebx,0x39
  401f7e:	8b f0                	mov    esi,eax
  401f80:	8b fa                	mov    edi,edx
  401f82:	7e 03                	jle    0x401f87
  401f84:	03 5d d4             	add    ebx,DWORD PTR [ebp-0x2c]
  401f87:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  401f8a:	ff 4d f8             	dec    DWORD PTR [ebp-0x8]
  401f8d:	88 18                	mov    BYTE PTR [eax],bl
  401f8f:	eb b5                	jmp    0x401f46
  401f91:	8d 45 b7             	lea    eax,[ebp-0x49]
  401f94:	2b 45 f8             	sub    eax,DWORD PTR [ebp-0x8]
  401f97:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
  401f9a:	f6 45 fd 02          	test   BYTE PTR [ebp-0x3],0x2
  401f9e:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  401fa1:	74 19                	je     0x401fbc
  401fa3:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  401fa6:	80 39 30             	cmp    BYTE PTR [ecx],0x30
  401fa9:	75 04                	jne    0x401faf
  401fab:	85 c0                	test   eax,eax
  401fad:	75 0d                	jne    0x401fbc
  401faf:	ff 4d f8             	dec    DWORD PTR [ebp-0x8]
  401fb2:	40                   	inc    eax
  401fb3:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  401fb6:	c6 01 30             	mov    BYTE PTR [ecx],0x30
  401fb9:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  401fbc:	83 7d d8 00          	cmp    DWORD PTR [ebp-0x28],0x0
  401fc0:	0f 85 f4 00 00 00    	jne    0x4020ba
  401fc6:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
  401fc9:	f6 c3 40             	test   bl,0x40
  401fcc:	74 26                	je     0x401ff4
  401fce:	f6 c7 01             	test   bh,0x1
  401fd1:	74 06                	je     0x401fd9
  401fd3:	c6 45 ea 2d          	mov    BYTE PTR [ebp-0x16],0x2d
  401fd7:	eb 14                	jmp    0x401fed
  401fd9:	f6 c3 01             	test   bl,0x1
  401fdc:	74 06                	je     0x401fe4
  401fde:	c6 45 ea 2b          	mov    BYTE PTR [ebp-0x16],0x2b
  401fe2:	eb 09                	jmp    0x401fed
  401fe4:	f6 c3 02             	test   bl,0x2
  401fe7:	74 0b                	je     0x401ff4
  401fe9:	c6 45 ea 20          	mov    BYTE PTR [ebp-0x16],0x20
  401fed:	c7 45 e4 01 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x1
  401ff4:	8b 75 e0             	mov    esi,DWORD PTR [ebp-0x20]
  401ff7:	2b 75 e4             	sub    esi,DWORD PTR [ebp-0x1c]
  401ffa:	2b 75 f4             	sub    esi,DWORD PTR [ebp-0xc]
  401ffd:	f6 c3 0c             	test   bl,0xc
  402000:	75 12                	jne    0x402014
  402002:	8d 45 ec             	lea    eax,[ebp-0x14]
  402005:	50                   	push   eax
  402006:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402009:	56                   	push   esi
  40200a:	6a 20                	push   0x20
  40200c:	e8 17 01 00 00       	call   0x402128
  402011:	83 c4 10             	add    esp,0x10
  402014:	8d 45 ec             	lea    eax,[ebp-0x14]
  402017:	50                   	push   eax
  402018:	8d 45 ea             	lea    eax,[ebp-0x16]
  40201b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40201e:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  402021:	50                   	push   eax
  402022:	e8 32 01 00 00       	call   0x402159
  402027:	83 c4 10             	add    esp,0x10
  40202a:	f6 c3 08             	test   bl,0x8
  40202d:	74 17                	je     0x402046
  40202f:	f6 c3 04             	test   bl,0x4
  402032:	75 12                	jne    0x402046
  402034:	8d 45 ec             	lea    eax,[ebp-0x14]
  402037:	50                   	push   eax
  402038:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40203b:	56                   	push   esi
  40203c:	6a 30                	push   0x30
  40203e:	e8 e5 00 00 00       	call   0x402128
  402043:	83 c4 10             	add    esp,0x10
  402046:	83 7d dc 00          	cmp    DWORD PTR [ebp-0x24],0x0
  40204a:	74 41                	je     0x40208d
  40204c:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  402050:	7e 3b                	jle    0x40208d
  402052:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  402055:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
  402058:	8d 78 ff             	lea    edi,[eax-0x1]
  40205b:	66 8b 03             	mov    ax,WORD PTR [ebx]
  40205e:	43                   	inc    ebx
  40205f:	50                   	push   eax
  402060:	8d 45 c8             	lea    eax,[ebp-0x38]
  402063:	50                   	push   eax
  402064:	43                   	inc    ebx
  402065:	e8 91 10 00 00       	call   0x4030fb
  40206a:	59                   	pop    ecx
  40206b:	85 c0                	test   eax,eax
  40206d:	59                   	pop    ecx
  40206e:	7e 32                	jle    0x4020a2
  402070:	8d 4d ec             	lea    ecx,[ebp-0x14]
  402073:	51                   	push   ecx
  402074:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402077:	50                   	push   eax
  402078:	8d 45 c8             	lea    eax,[ebp-0x38]
  40207b:	50                   	push   eax
  40207c:	e8 d8 00 00 00       	call   0x402159
  402081:	83 c4 10             	add    esp,0x10
  402084:	8b c7                	mov    eax,edi
  402086:	4f                   	dec    edi
  402087:	85 c0                	test   eax,eax
  402089:	75 d0                	jne    0x40205b
  40208b:	eb 15                	jmp    0x4020a2
  40208d:	8d 45 ec             	lea    eax,[ebp-0x14]
  402090:	50                   	push   eax
  402091:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402094:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  402097:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40209a:	e8 ba 00 00 00       	call   0x402159
  40209f:	83 c4 10             	add    esp,0x10
  4020a2:	f6 45 fc 04          	test   BYTE PTR [ebp-0x4],0x4
  4020a6:	74 12                	je     0x4020ba
  4020a8:	8d 45 ec             	lea    eax,[ebp-0x14]
  4020ab:	50                   	push   eax
  4020ac:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4020af:	56                   	push   esi
  4020b0:	6a 20                	push   0x20
  4020b2:	e8 71 00 00 00       	call   0x402128
  4020b7:	83 c4 10             	add    esp,0x10
  4020ba:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  4020bd:	8a 1f                	mov    bl,BYTE PTR [edi]
  4020bf:	47                   	inc    edi
  4020c0:	84 db                	test   bl,bl
  4020c2:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  4020c5:	0f 85 13 f9 ff ff    	jne    0x4019de
  4020cb:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  4020ce:	5f                   	pop    edi
  4020cf:	5e                   	pop    esi
  4020d0:	5b                   	pop    ebx
  4020d1:	c9                   	leave
  4020d2:	c3                   	ret
  4020d3:	51                   	push   ecx
  4020d4:	1b 40 00             	sbb    eax,DWORD PTR [eax+0x0]
  4020d7:	27                   	daa
  4020d8:	1a 40 00             	sbb    al,BYTE PTR [eax+0x0]
  4020db:	42                   	inc    edx
  4020dc:	1a 40 00             	sbb    al,BYTE PTR [eax+0x0]
  4020df:	8e 1a                	mov    ds,WORD PTR [edx]
  4020e1:	40                   	inc    eax
  4020e2:	00 c5                	add    ch,al
  4020e4:	1a 40 00             	sbb    al,BYTE PTR [eax+0x0]
  4020e7:	cd 1a                	int    0x1a
  4020e9:	40                   	inc    eax
  4020ea:	00 02                	add    BYTE PTR [edx],al
  4020ec:	1b 40 00             	sbb    eax,DWORD PTR [eax+0x0]
  4020ef:	95                   	xchg   ebp,eax
  4020f0:	1b 40 00             	sbb    eax,DWORD PTR [eax+0x0]
  4020f3:	55                   	push   ebp
  4020f4:	8b ec                	mov    ebp,esp
  4020f6:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  4020f9:	ff 49 04             	dec    DWORD PTR [ecx+0x4]
  4020fc:	78 0e                	js     0x40210c
  4020fe:	8b 11                	mov    edx,DWORD PTR [ecx]
  402100:	8a 45 08             	mov    al,BYTE PTR [ebp+0x8]
  402103:	88 02                	mov    BYTE PTR [edx],al
  402105:	ff 01                	inc    DWORD PTR [ecx]
  402107:	0f b6 c0             	movzx  eax,al
  40210a:	eb 0b                	jmp    0x402117
  40210c:	51                   	push   ecx
  40210d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402110:	e8 88 f7 ff ff       	call   0x40189d
  402115:	59                   	pop    ecx
  402116:	59                   	pop    ecx
  402117:	83 f8 ff             	cmp    eax,0xffffffff
  40211a:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40211d:	75 05                	jne    0x402124
  40211f:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  402122:	5d                   	pop    ebp
  402123:	c3                   	ret
  402124:	ff 00                	inc    DWORD PTR [eax]
  402126:	5d                   	pop    ebp
  402127:	c3                   	ret
  402128:	56                   	push   esi
  402129:	57                   	push   edi
  40212a:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  40212e:	8b c7                	mov    eax,edi
  402130:	4f                   	dec    edi
  402131:	85 c0                	test   eax,eax
  402133:	7e 21                	jle    0x402156
  402135:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  402139:	56                   	push   esi
  40213a:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  40213e:	ff 74 24 14          	push   DWORD PTR [esp+0x14]
  402142:	e8 ac ff ff ff       	call   0x4020f3
  402147:	83 c4 0c             	add    esp,0xc
  40214a:	83 3e ff             	cmp    DWORD PTR [esi],0xffffffff
  40214d:	74 07                	je     0x402156
  40214f:	8b c7                	mov    eax,edi
  402151:	4f                   	dec    edi
  402152:	85 c0                	test   eax,eax
  402154:	7f e3                	jg     0x402139
  402156:	5f                   	pop    edi
  402157:	5e                   	pop    esi
  402158:	c3                   	ret
  402159:	53                   	push   ebx
  40215a:	8b 5c 24 0c          	mov    ebx,DWORD PTR [esp+0xc]
  40215e:	8b c3                	mov    eax,ebx
  402160:	4b                   	dec    ebx
  402161:	56                   	push   esi
  402162:	57                   	push   edi
  402163:	85 c0                	test   eax,eax
  402165:	7e 26                	jle    0x40218d
  402167:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  40216b:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  40216f:	0f be 06             	movsx  eax,BYTE PTR [esi]
  402172:	57                   	push   edi
  402173:	46                   	inc    esi
  402174:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
  402178:	50                   	push   eax
  402179:	e8 75 ff ff ff       	call   0x4020f3
  40217e:	83 c4 0c             	add    esp,0xc
  402181:	83 3f ff             	cmp    DWORD PTR [edi],0xffffffff
  402184:	74 07                	je     0x40218d
  402186:	8b c3                	mov    eax,ebx
  402188:	4b                   	dec    ebx
  402189:	85 c0                	test   eax,eax
  40218b:	7f e2                	jg     0x40216f
  40218d:	5f                   	pop    edi
  40218e:	5e                   	pop    esi
  40218f:	5b                   	pop    ebx
  402190:	c3                   	ret
  402191:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  402195:	83 00 04             	add    DWORD PTR [eax],0x4
  402198:	8b 00                	mov    eax,DWORD PTR [eax]
  40219a:	8b 40 fc             	mov    eax,DWORD PTR [eax-0x4]
  40219d:	c3                   	ret
  40219e:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  4021a2:	83 00 08             	add    DWORD PTR [eax],0x8
  4021a5:	8b 08                	mov    ecx,DWORD PTR [eax]
  4021a7:	8b 41 f8             	mov    eax,DWORD PTR [ecx-0x8]
  4021aa:	8b 51 fc             	mov    edx,DWORD PTR [ecx-0x4]
  4021ad:	c3                   	ret
  4021ae:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  4021b2:	83 00 04             	add    DWORD PTR [eax],0x4
  4021b5:	8b 00                	mov    eax,DWORD PTR [eax]
  4021b7:	66 8b 40 fc          	mov    ax,WORD PTR [eax-0x4]
  4021bb:	c3                   	ret
  4021bc:	55                   	push   ebp
  4021bd:	8b ec                	mov    ebp,esp
  4021bf:	53                   	push   ebx
  4021c0:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4021c3:	e8 35 01 00 00       	call   0x4022fd
  4021c8:	85 c0                	test   eax,eax
  4021ca:	59                   	pop    ecx
  4021cb:	0f 84 20 01 00 00    	je     0x4022f1
  4021d1:	8b 58 08             	mov    ebx,DWORD PTR [eax+0x8]
  4021d4:	85 db                	test   ebx,ebx
  4021d6:	0f 84 15 01 00 00    	je     0x4022f1
  4021dc:	83 fb 05             	cmp    ebx,0x5
  4021df:	75 0c                	jne    0x4021ed
  4021e1:	83 60 08 00          	and    DWORD PTR [eax+0x8],0x0
  4021e5:	6a 01                	push   0x1
  4021e7:	58                   	pop    eax
  4021e8:	e9 0d 01 00 00       	jmp    0x4022fa
  4021ed:	83 fb 01             	cmp    ebx,0x1
  4021f0:	0f 84 f6 00 00 00    	je     0x4022ec
  4021f6:	8b 0d bc 7f 40 00    	mov    ecx,DWORD PTR ds:0x407fbc
  4021fc:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
  4021ff:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  402202:	89 0d bc 7f 40 00    	mov    DWORD PTR ds:0x407fbc,ecx
  402208:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  40220b:	83 f9 08             	cmp    ecx,0x8
  40220e:	0f 85 c8 00 00 00    	jne    0x4022dc
  402214:	8b 0d b8 72 40 00    	mov    ecx,DWORD PTR ds:0x4072b8
  40221a:	8b 15 bc 72 40 00    	mov    edx,DWORD PTR ds:0x4072bc
  402220:	03 d1                	add    edx,ecx
  402222:	56                   	push   esi
  402223:	3b ca                	cmp    ecx,edx
  402225:	7d 15                	jge    0x40223c
  402227:	8d 34 49             	lea    esi,[ecx+ecx*2]
  40222a:	2b d1                	sub    edx,ecx
  40222c:	8d 34 b5 48 72 40 00 	lea    esi,[esi*4+0x407248]
  402233:	83 26 00             	and    DWORD PTR [esi],0x0
  402236:	83 c6 0c             	add    esi,0xc
  402239:	4a                   	dec    edx
  40223a:	75 f7                	jne    0x402233
  40223c:	8b 00                	mov    eax,DWORD PTR [eax]
  40223e:	8b 35 c4 72 40 00    	mov    esi,DWORD PTR ds:0x4072c4
  402244:	3d 8e 00 00 c0       	cmp    eax,0xc000008e
  402249:	75 0c                	jne    0x402257
  40224b:	c7 05 c4 72 40 00 83 	mov    DWORD PTR ds:0x4072c4,0x83
  402252:	00 00 00 
  402255:	eb 70                	jmp    0x4022c7
  402257:	3d 90 00 00 c0       	cmp    eax,0xc0000090
  40225c:	75 0c                	jne    0x40226a
  40225e:	c7 05 c4 72 40 00 81 	mov    DWORD PTR ds:0x4072c4,0x81
  402265:	00 00 00 
  402268:	eb 5d                	jmp    0x4022c7
  40226a:	3d 91 00 00 c0       	cmp    eax,0xc0000091
  40226f:	75 0c                	jne    0x40227d
  402271:	c7 05 c4 72 40 00 84 	mov    DWORD PTR ds:0x4072c4,0x84
  402278:	00 00 00 
  40227b:	eb 4a                	jmp    0x4022c7
  40227d:	3d 93 00 00 c0       	cmp    eax,0xc0000093
  402282:	75 0c                	jne    0x402290
  402284:	c7 05 c4 72 40 00 85 	mov    DWORD PTR ds:0x4072c4,0x85
  40228b:	00 00 00 
  40228e:	eb 37                	jmp    0x4022c7
  402290:	3d 8d 00 00 c0       	cmp    eax,0xc000008d
  402295:	75 0c                	jne    0x4022a3
  402297:	c7 05 c4 72 40 00 82 	mov    DWORD PTR ds:0x4072c4,0x82
  40229e:	00 00 00 
  4022a1:	eb 24                	jmp    0x4022c7
  4022a3:	3d 8f 00 00 c0       	cmp    eax,0xc000008f
  4022a8:	75 0c                	jne    0x4022b6
  4022aa:	c7 05 c4 72 40 00 86 	mov    DWORD PTR ds:0x4072c4,0x86
  4022b1:	00 00 00 
  4022b4:	eb 11                	jmp    0x4022c7
  4022b6:	3d 92 00 00 c0       	cmp    eax,0xc0000092
  4022bb:	75 0a                	jne    0x4022c7
  4022bd:	c7 05 c4 72 40 00 8a 	mov    DWORD PTR ds:0x4072c4,0x8a
  4022c4:	00 00 00 
  4022c7:	ff 35 c4 72 40 00    	push   DWORD PTR ds:0x4072c4
  4022cd:	6a 08                	push   0x8
  4022cf:	ff d3                	call   ebx
  4022d1:	59                   	pop    ecx
  4022d2:	89 35 c4 72 40 00    	mov    DWORD PTR ds:0x4072c4,esi
  4022d8:	59                   	pop    ecx
  4022d9:	5e                   	pop    esi
  4022da:	eb 08                	jmp    0x4022e4
  4022dc:	83 60 08 00          	and    DWORD PTR [eax+0x8],0x0
  4022e0:	51                   	push   ecx
  4022e1:	ff d3                	call   ebx
  4022e3:	59                   	pop    ecx
  4022e4:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  4022e7:	a3 bc 7f 40 00       	mov    ds:0x407fbc,eax
  4022ec:	83 c8 ff             	or     eax,0xffffffff
  4022ef:	eb 09                	jmp    0x4022fa
  4022f1:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4022f4:	ff 15 70 60 40 00    	call   DWORD PTR ds:0x406070
  4022fa:	5b                   	pop    ebx
  4022fb:	5d                   	pop    ebp
  4022fc:	c3                   	ret
  4022fd:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  402301:	8b 0d c0 72 40 00    	mov    ecx,DWORD PTR ds:0x4072c0
  402307:	39 15 40 72 40 00    	cmp    DWORD PTR ds:0x407240,edx
  40230d:	56                   	push   esi
  40230e:	b8 40 72 40 00       	mov    eax,0x407240
  402313:	74 15                	je     0x40232a
  402315:	8d 34 49             	lea    esi,[ecx+ecx*2]
  402318:	8d 34 b5 40 72 40 00 	lea    esi,[esi*4+0x407240]
  40231f:	83 c0 0c             	add    eax,0xc
  402322:	3b c6                	cmp    eax,esi
  402324:	73 04                	jae    0x40232a
  402326:	39 10                	cmp    DWORD PTR [eax],edx
  402328:	75 f5                	jne    0x40231f
  40232a:	8d 0c 49             	lea    ecx,[ecx+ecx*2]
  40232d:	5e                   	pop    esi
  40232e:	8d 0c 8d 40 72 40 00 	lea    ecx,[ecx*4+0x407240]
  402335:	3b c1                	cmp    eax,ecx
  402337:	73 04                	jae    0x40233d
  402339:	39 10                	cmp    DWORD PTR [eax],edx
  40233b:	74 02                	je     0x40233f
  40233d:	33 c0                	xor    eax,eax
  40233f:	c3                   	ret
  402340:	83 3d 8c 94 40 00 00 	cmp    DWORD PTR ds:0x40948c,0x0
  402347:	75 05                	jne    0x40234e
  402349:	e8 0d 13 00 00       	call   0x40365b
  40234e:	56                   	push   esi
  40234f:	8b 35 84 94 40 00    	mov    esi,DWORD PTR ds:0x409484
  402355:	8a 06                	mov    al,BYTE PTR [esi]
  402357:	3c 22                	cmp    al,0x22
  402359:	75 25                	jne    0x402380
  40235b:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  40235e:	46                   	inc    esi
  40235f:	3c 22                	cmp    al,0x22
  402361:	74 15                	je     0x402378
  402363:	84 c0                	test   al,al
  402365:	74 11                	je     0x402378
  402367:	0f b6 c0             	movzx  eax,al
  40236a:	50                   	push   eax
  40236b:	e8 e5 0e 00 00       	call   0x403255
  402370:	85 c0                	test   eax,eax
  402372:	59                   	pop    ecx
  402373:	74 e6                	je     0x40235b
  402375:	46                   	inc    esi
  402376:	eb e3                	jmp    0x40235b
  402378:	80 3e 22             	cmp    BYTE PTR [esi],0x22
  40237b:	75 0d                	jne    0x40238a
  40237d:	46                   	inc    esi
  40237e:	eb 0a                	jmp    0x40238a
  402380:	3c 20                	cmp    al,0x20
  402382:	76 06                	jbe    0x40238a
  402384:	46                   	inc    esi
  402385:	80 3e 20             	cmp    BYTE PTR [esi],0x20
  402388:	77 fa                	ja     0x402384
  40238a:	8a 06                	mov    al,BYTE PTR [esi]
  40238c:	84 c0                	test   al,al
  40238e:	74 04                	je     0x402394
  402390:	3c 20                	cmp    al,0x20
  402392:	76 e9                	jbe    0x40237d
  402394:	8b c6                	mov    eax,esi
  402396:	5e                   	pop    esi
  402397:	c3                   	ret
  402398:	53                   	push   ebx
  402399:	33 db                	xor    ebx,ebx
  40239b:	39 1d 8c 94 40 00    	cmp    DWORD PTR ds:0x40948c,ebx
  4023a1:	56                   	push   esi
  4023a2:	57                   	push   edi
  4023a3:	75 05                	jne    0x4023aa
  4023a5:	e8 b1 12 00 00       	call   0x40365b
  4023aa:	8b 35 b0 7f 40 00    	mov    esi,DWORD PTR ds:0x407fb0
  4023b0:	33 ff                	xor    edi,edi
  4023b2:	8a 06                	mov    al,BYTE PTR [esi]
  4023b4:	3a c3                	cmp    al,bl
  4023b6:	74 12                	je     0x4023ca
  4023b8:	3c 3d                	cmp    al,0x3d
  4023ba:	74 01                	je     0x4023bd
  4023bc:	47                   	inc    edi
  4023bd:	56                   	push   esi
  4023be:	e8 bd 0c 00 00       	call   0x403080
  4023c3:	59                   	pop    ecx
  4023c4:	8d 74 06 01          	lea    esi,[esi+eax*1+0x1]
  4023c8:	eb e8                	jmp    0x4023b2
  4023ca:	8d 04 bd 04 00 00 00 	lea    eax,[edi*4+0x4]
  4023d1:	50                   	push   eax
  4023d2:	e8 c9 13 00 00       	call   0x4037a0
  4023d7:	8b f0                	mov    esi,eax
  4023d9:	59                   	pop    ecx
  4023da:	3b f3                	cmp    esi,ebx
  4023dc:	89 35 8c 7f 40 00    	mov    DWORD PTR ds:0x407f8c,esi
  4023e2:	75 08                	jne    0x4023ec
  4023e4:	6a 09                	push   0x9
  4023e6:	e8 69 f4 ff ff       	call   0x401854
  4023eb:	59                   	pop    ecx
  4023ec:	8b 3d b0 7f 40 00    	mov    edi,DWORD PTR ds:0x407fb0
  4023f2:	38 1f                	cmp    BYTE PTR [edi],bl
  4023f4:	74 39                	je     0x40242f
  4023f6:	55                   	push   ebp
  4023f7:	57                   	push   edi
  4023f8:	e8 83 0c 00 00       	call   0x403080
  4023fd:	8b e8                	mov    ebp,eax
  4023ff:	59                   	pop    ecx
  402400:	45                   	inc    ebp
  402401:	80 3f 3d             	cmp    BYTE PTR [edi],0x3d
  402404:	74 22                	je     0x402428
  402406:	55                   	push   ebp
  402407:	e8 94 13 00 00       	call   0x4037a0
  40240c:	3b c3                	cmp    eax,ebx
  40240e:	59                   	pop    ecx
  40240f:	89 06                	mov    DWORD PTR [esi],eax
  402411:	75 08                	jne    0x40241b
  402413:	6a 09                	push   0x9
  402415:	e8 3a f4 ff ff       	call   0x401854
  40241a:	59                   	pop    ecx
  40241b:	57                   	push   edi
  40241c:	ff 36                	push   DWORD PTR [esi]
  40241e:	e8 8d 12 00 00       	call   0x4036b0
  402423:	59                   	pop    ecx
  402424:	83 c6 04             	add    esi,0x4
  402427:	59                   	pop    ecx
  402428:	03 fd                	add    edi,ebp
  40242a:	38 1f                	cmp    BYTE PTR [edi],bl
  40242c:	75 c9                	jne    0x4023f7
  40242e:	5d                   	pop    ebp
  40242f:	ff 35 b0 7f 40 00    	push   DWORD PTR ds:0x407fb0
  402435:	e8 3d 12 00 00       	call   0x403677
  40243a:	59                   	pop    ecx
  40243b:	89 1d b0 7f 40 00    	mov    DWORD PTR ds:0x407fb0,ebx
  402441:	89 1e                	mov    DWORD PTR [esi],ebx
  402443:	5f                   	pop    edi
  402444:	5e                   	pop    esi
  402445:	c7 05 88 94 40 00 01 	mov    DWORD PTR ds:0x409488,0x1
  40244c:	00 00 00 
  40244f:	5b                   	pop    ebx
  402450:	c3                   	ret
  402451:	55                   	push   ebp
  402452:	8b ec                	mov    ebp,esp
  402454:	51                   	push   ecx
  402455:	51                   	push   ecx
  402456:	53                   	push   ebx
  402457:	33 db                	xor    ebx,ebx
  402459:	39 1d 8c 94 40 00    	cmp    DWORD PTR ds:0x40948c,ebx
  40245f:	56                   	push   esi
  402460:	57                   	push   edi
  402461:	75 05                	jne    0x402468
  402463:	e8 f3 11 00 00       	call   0x40365b
  402468:	be c0 7f 40 00       	mov    esi,0x407fc0
  40246d:	68 04 01 00 00       	push   0x104
  402472:	56                   	push   esi
  402473:	53                   	push   ebx
  402474:	ff 15 74 60 40 00    	call   DWORD PTR ds:0x406074
  40247a:	a1 84 94 40 00       	mov    eax,ds:0x409484
  40247f:	89 35 9c 7f 40 00    	mov    DWORD PTR ds:0x407f9c,esi
  402485:	8b fe                	mov    edi,esi
  402487:	38 18                	cmp    BYTE PTR [eax],bl
  402489:	74 02                	je     0x40248d
  40248b:	8b f8                	mov    edi,eax
  40248d:	8d 45 f8             	lea    eax,[ebp-0x8]
  402490:	50                   	push   eax
  402491:	8d 45 fc             	lea    eax,[ebp-0x4]
  402494:	50                   	push   eax
  402495:	53                   	push   ebx
  402496:	53                   	push   ebx
  402497:	57                   	push   edi
  402498:	e8 4d 00 00 00       	call   0x4024ea
  40249d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  4024a0:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4024a3:	8d 04 88             	lea    eax,[eax+ecx*4]
  4024a6:	50                   	push   eax
  4024a7:	e8 f4 12 00 00       	call   0x4037a0
  4024ac:	8b f0                	mov    esi,eax
  4024ae:	83 c4 18             	add    esp,0x18
  4024b1:	3b f3                	cmp    esi,ebx
  4024b3:	75 08                	jne    0x4024bd
  4024b5:	6a 08                	push   0x8
  4024b7:	e8 98 f3 ff ff       	call   0x401854
  4024bc:	59                   	pop    ecx
  4024bd:	8d 45 f8             	lea    eax,[ebp-0x8]
  4024c0:	50                   	push   eax
  4024c1:	8d 45 fc             	lea    eax,[ebp-0x4]
  4024c4:	50                   	push   eax
  4024c5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4024c8:	8d 04 86             	lea    eax,[esi+eax*4]
  4024cb:	50                   	push   eax
  4024cc:	56                   	push   esi
  4024cd:	57                   	push   edi
  4024ce:	e8 17 00 00 00       	call   0x4024ea
  4024d3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  4024d6:	83 c4 14             	add    esp,0x14
  4024d9:	48                   	dec    eax
  4024da:	89 35 84 7f 40 00    	mov    DWORD PTR ds:0x407f84,esi
  4024e0:	5f                   	pop    edi
  4024e1:	5e                   	pop    esi
  4024e2:	a3 80 7f 40 00       	mov    ds:0x407f80,eax
  4024e7:	5b                   	pop    ebx
  4024e8:	c9                   	leave
  4024e9:	c3                   	ret
  4024ea:	55                   	push   ebp
  4024eb:	8b ec                	mov    ebp,esp
  4024ed:	8b 4d 18             	mov    ecx,DWORD PTR [ebp+0x18]
  4024f0:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  4024f3:	53                   	push   ebx
  4024f4:	56                   	push   esi
  4024f5:	83 21 00             	and    DWORD PTR [ecx],0x0
  4024f8:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  4024fb:	57                   	push   edi
  4024fc:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  4024ff:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
  402505:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  402508:	85 ff                	test   edi,edi
  40250a:	74 08                	je     0x402514
  40250c:	89 37                	mov    DWORD PTR [edi],esi
  40250e:	83 c7 04             	add    edi,0x4
  402511:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  402514:	80 38 22             	cmp    BYTE PTR [eax],0x22
  402517:	75 44                	jne    0x40255d
  402519:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
  40251c:	40                   	inc    eax
  40251d:	80 fa 22             	cmp    dl,0x22
  402520:	74 29                	je     0x40254b
  402522:	84 d2                	test   dl,dl
  402524:	74 25                	je     0x40254b
  402526:	0f b6 d2             	movzx  edx,dl
  402529:	f6 82 41 82 40 00 04 	test   BYTE PTR [edx+0x408241],0x4
  402530:	74 0c                	je     0x40253e
  402532:	ff 01                	inc    DWORD PTR [ecx]
  402534:	85 f6                	test   esi,esi
  402536:	74 06                	je     0x40253e
  402538:	8a 10                	mov    dl,BYTE PTR [eax]
  40253a:	88 16                	mov    BYTE PTR [esi],dl
  40253c:	46                   	inc    esi
  40253d:	40                   	inc    eax
  40253e:	ff 01                	inc    DWORD PTR [ecx]
  402540:	85 f6                	test   esi,esi
  402542:	74 d5                	je     0x402519
  402544:	8a 10                	mov    dl,BYTE PTR [eax]
  402546:	88 16                	mov    BYTE PTR [esi],dl
  402548:	46                   	inc    esi
  402549:	eb ce                	jmp    0x402519
  40254b:	ff 01                	inc    DWORD PTR [ecx]
  40254d:	85 f6                	test   esi,esi
  40254f:	74 04                	je     0x402555
  402551:	80 26 00             	and    BYTE PTR [esi],0x0
  402554:	46                   	inc    esi
  402555:	80 38 22             	cmp    BYTE PTR [eax],0x22
  402558:	75 46                	jne    0x4025a0
  40255a:	40                   	inc    eax
  40255b:	eb 43                	jmp    0x4025a0
  40255d:	ff 01                	inc    DWORD PTR [ecx]
  40255f:	85 f6                	test   esi,esi
  402561:	74 05                	je     0x402568
  402563:	8a 10                	mov    dl,BYTE PTR [eax]
  402565:	88 16                	mov    BYTE PTR [esi],dl
  402567:	46                   	inc    esi
  402568:	8a 10                	mov    dl,BYTE PTR [eax]
  40256a:	40                   	inc    eax
  40256b:	0f b6 da             	movzx  ebx,dl
  40256e:	f6 83 41 82 40 00 04 	test   BYTE PTR [ebx+0x408241],0x4
  402575:	74 0c                	je     0x402583
  402577:	ff 01                	inc    DWORD PTR [ecx]
  402579:	85 f6                	test   esi,esi
  40257b:	74 05                	je     0x402582
  40257d:	8a 18                	mov    bl,BYTE PTR [eax]
  40257f:	88 1e                	mov    BYTE PTR [esi],bl
  402581:	46                   	inc    esi
  402582:	40                   	inc    eax
  402583:	80 fa 20             	cmp    dl,0x20
  402586:	74 09                	je     0x402591
  402588:	84 d2                	test   dl,dl
  40258a:	74 09                	je     0x402595
  40258c:	80 fa 09             	cmp    dl,0x9
  40258f:	75 cc                	jne    0x40255d
  402591:	84 d2                	test   dl,dl
  402593:	75 03                	jne    0x402598
  402595:	48                   	dec    eax
  402596:	eb 08                	jmp    0x4025a0
  402598:	85 f6                	test   esi,esi
  40259a:	74 04                	je     0x4025a0
  40259c:	80 66 ff 00          	and    BYTE PTR [esi-0x1],0x0
  4025a0:	83 65 18 00          	and    DWORD PTR [ebp+0x18],0x0
  4025a4:	80 38 00             	cmp    BYTE PTR [eax],0x0
  4025a7:	0f 84 e0 00 00 00    	je     0x40268d
  4025ad:	8a 10                	mov    dl,BYTE PTR [eax]
  4025af:	80 fa 20             	cmp    dl,0x20
  4025b2:	74 05                	je     0x4025b9
  4025b4:	80 fa 09             	cmp    dl,0x9
  4025b7:	75 03                	jne    0x4025bc
  4025b9:	40                   	inc    eax
  4025ba:	eb f1                	jmp    0x4025ad
  4025bc:	80 38 00             	cmp    BYTE PTR [eax],0x0
  4025bf:	0f 84 c8 00 00 00    	je     0x40268d
  4025c5:	85 ff                	test   edi,edi
  4025c7:	74 08                	je     0x4025d1
  4025c9:	89 37                	mov    DWORD PTR [edi],esi
  4025cb:	83 c7 04             	add    edi,0x4
  4025ce:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  4025d1:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
  4025d4:	ff 02                	inc    DWORD PTR [edx]
  4025d6:	c7 45 08 01 00 00 00 	mov    DWORD PTR [ebp+0x8],0x1
  4025dd:	33 db                	xor    ebx,ebx
  4025df:	80 38 5c             	cmp    BYTE PTR [eax],0x5c
  4025e2:	75 04                	jne    0x4025e8
  4025e4:	40                   	inc    eax
  4025e5:	43                   	inc    ebx
  4025e6:	eb f7                	jmp    0x4025df
  4025e8:	80 38 22             	cmp    BYTE PTR [eax],0x22
  4025eb:	75 2c                	jne    0x402619
  4025ed:	f6 c3 01             	test   bl,0x1
  4025f0:	75 25                	jne    0x402617
  4025f2:	33 ff                	xor    edi,edi
  4025f4:	39 7d 18             	cmp    DWORD PTR [ebp+0x18],edi
  4025f7:	74 0d                	je     0x402606
  4025f9:	80 78 01 22          	cmp    BYTE PTR [eax+0x1],0x22
  4025fd:	8d 50 01             	lea    edx,[eax+0x1]
  402600:	75 04                	jne    0x402606
  402602:	8b c2                	mov    eax,edx
  402604:	eb 03                	jmp    0x402609
  402606:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  402609:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  40260c:	33 d2                	xor    edx,edx
  40260e:	39 55 18             	cmp    DWORD PTR [ebp+0x18],edx
  402611:	0f 94 c2             	sete   dl
  402614:	89 55 18             	mov    DWORD PTR [ebp+0x18],edx
  402617:	d1 eb                	shr    ebx,1
  402619:	8b d3                	mov    edx,ebx
  40261b:	4b                   	dec    ebx
  40261c:	85 d2                	test   edx,edx
  40261e:	74 0e                	je     0x40262e
  402620:	43                   	inc    ebx
  402621:	85 f6                	test   esi,esi
  402623:	74 04                	je     0x402629
  402625:	c6 06 5c             	mov    BYTE PTR [esi],0x5c
  402628:	46                   	inc    esi
  402629:	ff 01                	inc    DWORD PTR [ecx]
  40262b:	4b                   	dec    ebx
  40262c:	75 f3                	jne    0x402621
  40262e:	8a 10                	mov    dl,BYTE PTR [eax]
  402630:	84 d2                	test   dl,dl
  402632:	74 4a                	je     0x40267e
  402634:	83 7d 18 00          	cmp    DWORD PTR [ebp+0x18],0x0
  402638:	75 0a                	jne    0x402644
  40263a:	80 fa 20             	cmp    dl,0x20
  40263d:	74 3f                	je     0x40267e
  40263f:	80 fa 09             	cmp    dl,0x9
  402642:	74 3a                	je     0x40267e
  402644:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
  402648:	74 2e                	je     0x402678
  40264a:	85 f6                	test   esi,esi
  40264c:	74 19                	je     0x402667
  40264e:	0f b6 da             	movzx  ebx,dl
  402651:	f6 83 41 82 40 00 04 	test   BYTE PTR [ebx+0x408241],0x4
  402658:	74 06                	je     0x402660
  40265a:	88 16                	mov    BYTE PTR [esi],dl
  40265c:	46                   	inc    esi
  40265d:	40                   	inc    eax
  40265e:	ff 01                	inc    DWORD PTR [ecx]
  402660:	8a 10                	mov    dl,BYTE PTR [eax]
  402662:	88 16                	mov    BYTE PTR [esi],dl
  402664:	46                   	inc    esi
  402665:	eb 0f                	jmp    0x402676
  402667:	0f b6 d2             	movzx  edx,dl
  40266a:	f6 82 41 82 40 00 04 	test   BYTE PTR [edx+0x408241],0x4
  402671:	74 03                	je     0x402676
  402673:	40                   	inc    eax
  402674:	ff 01                	inc    DWORD PTR [ecx]
  402676:	ff 01                	inc    DWORD PTR [ecx]
  402678:	40                   	inc    eax
  402679:	e9 58 ff ff ff       	jmp    0x4025d6
  40267e:	85 f6                	test   esi,esi
  402680:	74 04                	je     0x402686
  402682:	80 26 00             	and    BYTE PTR [esi],0x0
  402685:	46                   	inc    esi
  402686:	ff 01                	inc    DWORD PTR [ecx]
  402688:	e9 17 ff ff ff       	jmp    0x4025a4
  40268d:	85 ff                	test   edi,edi
  40268f:	74 03                	je     0x402694
  402691:	83 27 00             	and    DWORD PTR [edi],0x0
  402694:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  402697:	5f                   	pop    edi
  402698:	5e                   	pop    esi
  402699:	5b                   	pop    ebx
  40269a:	ff 00                	inc    DWORD PTR [eax]
  40269c:	5d                   	pop    ebp
  40269d:	c3                   	ret
  40269e:	51                   	push   ecx
  40269f:	51                   	push   ecx
  4026a0:	a1 c4 80 40 00       	mov    eax,ds:0x4080c4
  4026a5:	53                   	push   ebx
  4026a6:	55                   	push   ebp
  4026a7:	8b 2d 08 60 40 00    	mov    ebp,DWORD PTR ds:0x406008
  4026ad:	56                   	push   esi
  4026ae:	57                   	push   edi
  4026af:	33 db                	xor    ebx,ebx
  4026b1:	33 f6                	xor    esi,esi
  4026b3:	33 ff                	xor    edi,edi
  4026b5:	3b c3                	cmp    eax,ebx
  4026b7:	75 33                	jne    0x4026ec
  4026b9:	ff d5                	call   ebp
  4026bb:	8b f0                	mov    esi,eax
  4026bd:	3b f3                	cmp    esi,ebx
  4026bf:	74 0c                	je     0x4026cd
  4026c1:	c7 05 c4 80 40 00 01 	mov    DWORD PTR ds:0x4080c4,0x1
  4026c8:	00 00 00 
  4026cb:	eb 28                	jmp    0x4026f5
  4026cd:	ff 15 84 60 40 00    	call   DWORD PTR ds:0x406084
  4026d3:	8b f8                	mov    edi,eax
  4026d5:	3b fb                	cmp    edi,ebx
  4026d7:	0f 84 ea 00 00 00    	je     0x4027c7
  4026dd:	c7 05 c4 80 40 00 02 	mov    DWORD PTR ds:0x4080c4,0x2
  4026e4:	00 00 00 
  4026e7:	e9 8f 00 00 00       	jmp    0x40277b
  4026ec:	83 f8 01             	cmp    eax,0x1
  4026ef:	0f 85 81 00 00 00    	jne    0x402776
  4026f5:	3b f3                	cmp    esi,ebx
  4026f7:	75 0c                	jne    0x402705
  4026f9:	ff d5                	call   ebp
  4026fb:	8b f0                	mov    esi,eax
  4026fd:	3b f3                	cmp    esi,ebx
  4026ff:	0f 84 c2 00 00 00    	je     0x4027c7
  402705:	66 39 1e             	cmp    WORD PTR [esi],bx
  402708:	8b c6                	mov    eax,esi
  40270a:	74 0e                	je     0x40271a
  40270c:	40                   	inc    eax
  40270d:	40                   	inc    eax
  40270e:	66 39 18             	cmp    WORD PTR [eax],bx
  402711:	75 f9                	jne    0x40270c
  402713:	40                   	inc    eax
  402714:	40                   	inc    eax
  402715:	66 39 18             	cmp    WORD PTR [eax],bx
  402718:	75 f2                	jne    0x40270c
  40271a:	2b c6                	sub    eax,esi
  40271c:	8b 3d 80 60 40 00    	mov    edi,DWORD PTR ds:0x406080
  402722:	d1 f8                	sar    eax,1
  402724:	53                   	push   ebx
  402725:	53                   	push   ebx
  402726:	40                   	inc    eax
  402727:	53                   	push   ebx
  402728:	53                   	push   ebx
  402729:	50                   	push   eax
  40272a:	56                   	push   esi
  40272b:	53                   	push   ebx
  40272c:	53                   	push   ebx
  40272d:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  402731:	ff d7                	call   edi
  402733:	8b e8                	mov    ebp,eax
  402735:	3b eb                	cmp    ebp,ebx
  402737:	74 32                	je     0x40276b
  402739:	55                   	push   ebp
  40273a:	e8 61 10 00 00       	call   0x4037a0
  40273f:	3b c3                	cmp    eax,ebx
  402741:	59                   	pop    ecx
  402742:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  402746:	74 23                	je     0x40276b
  402748:	53                   	push   ebx
  402749:	53                   	push   ebx
  40274a:	55                   	push   ebp
  40274b:	50                   	push   eax
  40274c:	ff 74 24 24          	push   DWORD PTR [esp+0x24]
  402750:	56                   	push   esi
  402751:	53                   	push   ebx
  402752:	53                   	push   ebx
  402753:	ff d7                	call   edi
  402755:	85 c0                	test   eax,eax
  402757:	75 0e                	jne    0x402767
  402759:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  40275d:	e8 15 0f 00 00       	call   0x403677
  402762:	59                   	pop    ecx
  402763:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  402767:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
  40276b:	56                   	push   esi
  40276c:	ff 15 7c 60 40 00    	call   DWORD PTR ds:0x40607c
  402772:	8b c3                	mov    eax,ebx
  402774:	eb 53                	jmp    0x4027c9
  402776:	83 f8 02             	cmp    eax,0x2
  402779:	75 4c                	jne    0x4027c7
  40277b:	3b fb                	cmp    edi,ebx
  40277d:	75 0c                	jne    0x40278b
  40277f:	ff 15 84 60 40 00    	call   DWORD PTR ds:0x406084
  402785:	8b f8                	mov    edi,eax
  402787:	3b fb                	cmp    edi,ebx
  402789:	74 3c                	je     0x4027c7
  40278b:	38 1f                	cmp    BYTE PTR [edi],bl
  40278d:	8b c7                	mov    eax,edi
  40278f:	74 0a                	je     0x40279b
  402791:	40                   	inc    eax
  402792:	38 18                	cmp    BYTE PTR [eax],bl
  402794:	75 fb                	jne    0x402791
  402796:	40                   	inc    eax
  402797:	38 18                	cmp    BYTE PTR [eax],bl
  402799:	75 f6                	jne    0x402791
  40279b:	2b c7                	sub    eax,edi
  40279d:	40                   	inc    eax
  40279e:	8b e8                	mov    ebp,eax
  4027a0:	55                   	push   ebp
  4027a1:	e8 fa 0f 00 00       	call   0x4037a0
  4027a6:	8b f0                	mov    esi,eax
  4027a8:	59                   	pop    ecx
  4027a9:	3b f3                	cmp    esi,ebx
  4027ab:	75 04                	jne    0x4027b1
  4027ad:	33 f6                	xor    esi,esi
  4027af:	eb 0b                	jmp    0x4027bc
  4027b1:	55                   	push   ebp
  4027b2:	57                   	push   edi
  4027b3:	56                   	push   esi
  4027b4:	e8 67 10 00 00       	call   0x403820
  4027b9:	83 c4 0c             	add    esp,0xc
  4027bc:	57                   	push   edi
  4027bd:	ff 15 78 60 40 00    	call   DWORD PTR ds:0x406078
  4027c3:	8b c6                	mov    eax,esi
  4027c5:	eb 02                	jmp    0x4027c9
  4027c7:	33 c0                	xor    eax,eax
  4027c9:	5f                   	pop    edi
  4027ca:	5e                   	pop    esi
  4027cb:	5d                   	pop    ebp
  4027cc:	5b                   	pop    ebx
  4027cd:	59                   	pop    ecx
  4027ce:	59                   	pop    ecx
  4027cf:	c3                   	ret
  4027d0:	83 ec 44             	sub    esp,0x44
  4027d3:	53                   	push   ebx
  4027d4:	55                   	push   ebp
  4027d5:	56                   	push   esi
  4027d6:	57                   	push   edi
  4027d7:	68 00 01 00 00       	push   0x100
  4027dc:	e8 bf 0f 00 00       	call   0x4037a0
  4027e1:	8b f0                	mov    esi,eax
  4027e3:	59                   	pop    ecx
  4027e4:	85 f6                	test   esi,esi
  4027e6:	75 08                	jne    0x4027f0
  4027e8:	6a 1b                	push   0x1b
  4027ea:	e8 65 f0 ff ff       	call   0x401854
  4027ef:	59                   	pop    ecx
  4027f0:	89 35 80 93 40 00    	mov    DWORD PTR ds:0x409380,esi
  4027f6:	c7 05 80 94 40 00 20 	mov    DWORD PTR ds:0x409480,0x20
  4027fd:	00 00 00 
  402800:	8d 86 00 01 00 00    	lea    eax,[esi+0x100]
  402806:	3b f0                	cmp    esi,eax
  402808:	73 1a                	jae    0x402824
  40280a:	80 66 04 00          	and    BYTE PTR [esi+0x4],0x0
  40280e:	83 0e ff             	or     DWORD PTR [esi],0xffffffff
  402811:	c6 46 05 0a          	mov    BYTE PTR [esi+0x5],0xa
  402815:	a1 80 93 40 00       	mov    eax,ds:0x409380
  40281a:	83 c6 08             	add    esi,0x8
  40281d:	05 00 01 00 00       	add    eax,0x100
  402822:	eb e2                	jmp    0x402806
  402824:	8d 44 24 10          	lea    eax,[esp+0x10]
  402828:	50                   	push   eax
  402829:	ff 15 64 60 40 00    	call   DWORD PTR ds:0x406064
  40282f:	66 83 7c 24 42 00    	cmp    WORD PTR [esp+0x42],0x0
  402835:	0f 84 c5 00 00 00    	je     0x402900
  40283b:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  40283f:	85 c0                	test   eax,eax
  402841:	0f 84 b9 00 00 00    	je     0x402900
  402847:	8b 30                	mov    esi,DWORD PTR [eax]
  402849:	8d 68 04             	lea    ebp,[eax+0x4]
  40284c:	b8 00 08 00 00       	mov    eax,0x800
  402851:	3b f0                	cmp    esi,eax
  402853:	8d 1c 2e             	lea    ebx,[esi+ebp*1]
  402856:	7c 02                	jl     0x40285a
  402858:	8b f0                	mov    esi,eax
  40285a:	39 35 80 94 40 00    	cmp    DWORD PTR ds:0x409480,esi
  402860:	7d 52                	jge    0x4028b4
  402862:	bf 84 93 40 00       	mov    edi,0x409384
  402867:	68 00 01 00 00       	push   0x100
  40286c:	e8 2f 0f 00 00       	call   0x4037a0
  402871:	85 c0                	test   eax,eax
  402873:	59                   	pop    ecx
  402874:	74 38                	je     0x4028ae
  402876:	83 05 80 94 40 00 20 	add    DWORD PTR ds:0x409480,0x20
  40287d:	89 07                	mov    DWORD PTR [edi],eax
  40287f:	8d 88 00 01 00 00    	lea    ecx,[eax+0x100]
  402885:	3b c1                	cmp    eax,ecx
  402887:	73 18                	jae    0x4028a1
  402889:	80 60 04 00          	and    BYTE PTR [eax+0x4],0x0
  40288d:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  402890:	c6 40 05 0a          	mov    BYTE PTR [eax+0x5],0xa
  402894:	8b 0f                	mov    ecx,DWORD PTR [edi]
  402896:	83 c0 08             	add    eax,0x8
  402899:	81 c1 00 01 00 00    	add    ecx,0x100
  40289f:	eb e4                	jmp    0x402885
  4028a1:	83 c7 04             	add    edi,0x4
  4028a4:	39 35 80 94 40 00    	cmp    DWORD PTR ds:0x409480,esi
  4028aa:	7c bb                	jl     0x402867
  4028ac:	eb 06                	jmp    0x4028b4
  4028ae:	8b 35 80 94 40 00    	mov    esi,DWORD PTR ds:0x409480
  4028b4:	33 ff                	xor    edi,edi
  4028b6:	85 f6                	test   esi,esi
  4028b8:	7e 46                	jle    0x402900
  4028ba:	8b 03                	mov    eax,DWORD PTR [ebx]
  4028bc:	83 f8 ff             	cmp    eax,0xffffffff
  4028bf:	74 36                	je     0x4028f7
  4028c1:	8a 4d 00             	mov    cl,BYTE PTR [ebp+0x0]
  4028c4:	f6 c1 01             	test   cl,0x1
  4028c7:	74 2e                	je     0x4028f7
  4028c9:	f6 c1 08             	test   cl,0x8
  4028cc:	75 0b                	jne    0x4028d9
  4028ce:	50                   	push   eax
  4028cf:	ff 15 10 60 40 00    	call   DWORD PTR ds:0x406010
  4028d5:	85 c0                	test   eax,eax
  4028d7:	74 1e                	je     0x4028f7
  4028d9:	8b c7                	mov    eax,edi
  4028db:	8b cf                	mov    ecx,edi
  4028dd:	c1 f8 05             	sar    eax,0x5
  4028e0:	83 e1 1f             	and    ecx,0x1f
  4028e3:	8b 04 85 80 93 40 00 	mov    eax,DWORD PTR [eax*4+0x409380]
  4028ea:	8d 04 c8             	lea    eax,[eax+ecx*8]
  4028ed:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  4028ef:	89 08                	mov    DWORD PTR [eax],ecx
  4028f1:	8a 4d 00             	mov    cl,BYTE PTR [ebp+0x0]
  4028f4:	88 48 04             	mov    BYTE PTR [eax+0x4],cl
  4028f7:	47                   	inc    edi
  4028f8:	45                   	inc    ebp
  4028f9:	83 c3 04             	add    ebx,0x4
  4028fc:	3b fe                	cmp    edi,esi
  4028fe:	7c ba                	jl     0x4028ba
  402900:	33 db                	xor    ebx,ebx
  402902:	a1 80 93 40 00       	mov    eax,ds:0x409380
  402907:	83 3c d8 ff          	cmp    DWORD PTR [eax+ebx*8],0xffffffff
  40290b:	8d 34 d8             	lea    esi,[eax+ebx*8]
  40290e:	75 4d                	jne    0x40295d
  402910:	85 db                	test   ebx,ebx
  402912:	c6 46 04 81          	mov    BYTE PTR [esi+0x4],0x81
  402916:	75 05                	jne    0x40291d
  402918:	6a f6                	push   0xfffffff6
  40291a:	58                   	pop    eax
  40291b:	eb 0a                	jmp    0x402927
  40291d:	8b c3                	mov    eax,ebx
  40291f:	48                   	dec    eax
  402920:	f7 d8                	neg    eax
  402922:	1b c0                	sbb    eax,eax
  402924:	83 c0 f5             	add    eax,0xfffffff5
  402927:	50                   	push   eax
  402928:	ff 15 0c 60 40 00    	call   DWORD PTR ds:0x40600c
  40292e:	8b f8                	mov    edi,eax
  402930:	83 ff ff             	cmp    edi,0xffffffff
  402933:	74 17                	je     0x40294c
  402935:	57                   	push   edi
  402936:	ff 15 10 60 40 00    	call   DWORD PTR ds:0x406010
  40293c:	85 c0                	test   eax,eax
  40293e:	74 0c                	je     0x40294c
  402940:	25 ff 00 00 00       	and    eax,0xff
  402945:	89 3e                	mov    DWORD PTR [esi],edi
  402947:	83 f8 02             	cmp    eax,0x2
  40294a:	75 06                	jne    0x402952
  40294c:	80 4e 04 40          	or     BYTE PTR [esi+0x4],0x40
  402950:	eb 0f                	jmp    0x402961
  402952:	83 f8 03             	cmp    eax,0x3
  402955:	75 0a                	jne    0x402961
  402957:	80 4e 04 08          	or     BYTE PTR [esi+0x4],0x8
  40295b:	eb 04                	jmp    0x402961
  40295d:	80 4e 04 80          	or     BYTE PTR [esi+0x4],0x80
  402961:	43                   	inc    ebx
  402962:	83 fb 03             	cmp    ebx,0x3
  402965:	7c 9b                	jl     0x402902
  402967:	ff 35 80 94 40 00    	push   DWORD PTR ds:0x409480
  40296d:	ff 15 8c 60 40 00    	call   DWORD PTR ds:0x40608c
  402973:	5f                   	pop    edi
  402974:	5e                   	pop    esi
  402975:	5d                   	pop    ebp
  402976:	5b                   	pop    ebx
  402977:	83 c4 44             	add    esp,0x44
  40297a:	c3                   	ret
  40297b:	33 c0                	xor    eax,eax
  40297d:	6a 00                	push   0x0
  40297f:	39 44 24 08          	cmp    DWORD PTR [esp+0x8],eax
  402983:	68 00 10 00 00       	push   0x1000
  402988:	0f 94 c0             	sete   al
  40298b:	50                   	push   eax
  40298c:	ff 15 98 60 40 00    	call   DWORD PTR ds:0x406098
  402992:	85 c0                	test   eax,eax
  402994:	a3 64 93 40 00       	mov    ds:0x409364,eax
  402999:	74 15                	je     0x4029b0
  40299b:	e8 b5 11 00 00       	call   0x403b55
  4029a0:	85 c0                	test   eax,eax
  4029a2:	75 0f                	jne    0x4029b3
  4029a4:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  4029aa:	ff 15 94 60 40 00    	call   DWORD PTR ds:0x406094
  4029b0:	33 c0                	xor    eax,eax
  4029b2:	c3                   	ret
  4029b3:	6a 01                	push   0x1
  4029b5:	58                   	pop    eax
  4029b6:	c3                   	ret
  4029b7:	cc                   	int3
  4029b8:	55                   	push   ebp
  4029b9:	8b ec                	mov    ebp,esp
  4029bb:	53                   	push   ebx
  4029bc:	56                   	push   esi
  4029bd:	57                   	push   edi
  4029be:	55                   	push   ebp
  4029bf:	6a 00                	push   0x0
  4029c1:	6a 00                	push   0x0
  4029c3:	68 d0 29 40 00       	push   0x4029d0
  4029c8:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4029cb:	e8 80 26 00 00       	call   0x405050
  4029d0:	5d                   	pop    ebp
  4029d1:	5f                   	pop    edi
  4029d2:	5e                   	pop    esi
  4029d3:	5b                   	pop    ebx
  4029d4:	8b e5                	mov    esp,ebp
  4029d6:	5d                   	pop    ebp
  4029d7:	c3                   	ret
  4029d8:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  4029dc:	f7 41 04 06 00 00 00 	test   DWORD PTR [ecx+0x4],0x6
  4029e3:	b8 01 00 00 00       	mov    eax,0x1
  4029e8:	74 0f                	je     0x4029f9
  4029ea:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  4029ee:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  4029f2:	89 02                	mov    DWORD PTR [edx],eax
  4029f4:	b8 03 00 00 00       	mov    eax,0x3
  4029f9:	c3                   	ret
  4029fa:	53                   	push   ebx
  4029fb:	56                   	push   esi
  4029fc:	57                   	push   edi
  4029fd:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  402a01:	50                   	push   eax
  402a02:	6a fe                	push   0xfffffffe
  402a04:	68 d8 29 40 00       	push   0x4029d8
  402a09:	64 ff 35 00 00 00 00 	push   DWORD PTR fs:0x0
  402a10:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  402a17:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  402a1b:	8b 58 08             	mov    ebx,DWORD PTR [eax+0x8]
  402a1e:	8b 70 0c             	mov    esi,DWORD PTR [eax+0xc]
  402a21:	83 fe ff             	cmp    esi,0xffffffff
  402a24:	74 2e                	je     0x402a54
  402a26:	3b 74 24 24          	cmp    esi,DWORD PTR [esp+0x24]
  402a2a:	74 28                	je     0x402a54
  402a2c:	8d 34 76             	lea    esi,[esi+esi*2]
  402a2f:	8b 0c b3             	mov    ecx,DWORD PTR [ebx+esi*4]
  402a32:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  402a36:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
  402a39:	83 7c b3 04 00       	cmp    DWORD PTR [ebx+esi*4+0x4],0x0
  402a3e:	75 12                	jne    0x402a52
  402a40:	68 01 01 00 00       	push   0x101
  402a45:	8b 44 b3 08          	mov    eax,DWORD PTR [ebx+esi*4+0x8]
  402a49:	e8 40 00 00 00       	call   0x402a8e
  402a4e:	ff 54 b3 08          	call   DWORD PTR [ebx+esi*4+0x8]
  402a52:	eb c3                	jmp    0x402a17
  402a54:	64 8f 05 00 00 00 00 	pop    DWORD PTR fs:0x0
  402a5b:	83 c4 0c             	add    esp,0xc
  402a5e:	5f                   	pop    edi
  402a5f:	5e                   	pop    esi
  402a60:	5b                   	pop    ebx
  402a61:	c3                   	ret
  402a62:	33 c0                	xor    eax,eax
  402a64:	64 8b 0d 00 00 00 00 	mov    ecx,DWORD PTR fs:0x0
  402a6b:	81 79 04 d8 29 40 00 	cmp    DWORD PTR [ecx+0x4],0x4029d8
  402a72:	75 10                	jne    0x402a84
  402a74:	8b 51 0c             	mov    edx,DWORD PTR [ecx+0xc]
  402a77:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
  402a7a:	39 51 08             	cmp    DWORD PTR [ecx+0x8],edx
  402a7d:	75 05                	jne    0x402a84
  402a7f:	b8 01 00 00 00       	mov    eax,0x1
  402a84:	c3                   	ret
  402a85:	53                   	push   ebx
  402a86:	51                   	push   ecx
  402a87:	bb d4 72 40 00       	mov    ebx,0x4072d4
  402a8c:	eb 0a                	jmp    0x402a98
  402a8e:	53                   	push   ebx
  402a8f:	51                   	push   ecx
  402a90:	bb d4 72 40 00       	mov    ebx,0x4072d4
  402a95:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  402a98:	89 4b 08             	mov    DWORD PTR [ebx+0x8],ecx
  402a9b:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
  402a9e:	89 6b 0c             	mov    DWORD PTR [ebx+0xc],ebp
  402aa1:	59                   	pop    ecx
  402aa2:	5b                   	pop    ebx
  402aa3:	c2 04 00             	ret    0x4
  402aa6:	cc                   	int3
  402aa7:	cc                   	int3
  402aa8:	56                   	push   esi
  402aa9:	43                   	inc    ebx
  402aaa:	32 30                	xor    dh,BYTE PTR [eax]
  402aac:	58                   	pop    eax
  402aad:	43                   	inc    ebx
  402aae:	30 30                	xor    BYTE PTR [eax],dh
  402ab0:	55                   	push   ebp
  402ab1:	8b ec                	mov    ebp,esp
  402ab3:	83 ec 08             	sub    esp,0x8
  402ab6:	53                   	push   ebx
  402ab7:	56                   	push   esi
  402ab8:	57                   	push   edi
  402ab9:	55                   	push   ebp
  402aba:	fc                   	cld
  402abb:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
  402abe:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  402ac1:	f7 40 04 06 00 00 00 	test   DWORD PTR [eax+0x4],0x6
  402ac8:	0f 85 82 00 00 00    	jne    0x402b50
  402ace:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  402ad1:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  402ad4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  402ad7:	8d 45 f8             	lea    eax,[ebp-0x8]
  402ada:	89 43 fc             	mov    DWORD PTR [ebx-0x4],eax
  402add:	8b 73 0c             	mov    esi,DWORD PTR [ebx+0xc]
  402ae0:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
  402ae3:	83 fe ff             	cmp    esi,0xffffffff
  402ae6:	74 61                	je     0x402b49
  402ae8:	8d 0c 76             	lea    ecx,[esi+esi*2]
  402aeb:	83 7c 8f 04 00       	cmp    DWORD PTR [edi+ecx*4+0x4],0x0
  402af0:	74 45                	je     0x402b37
  402af2:	56                   	push   esi
  402af3:	55                   	push   ebp
  402af4:	8d 6b 10             	lea    ebp,[ebx+0x10]
  402af7:	ff 54 8f 04          	call   DWORD PTR [edi+ecx*4+0x4]
  402afb:	5d                   	pop    ebp
  402afc:	5e                   	pop    esi
  402afd:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
  402b00:	0b c0                	or     eax,eax
  402b02:	74 33                	je     0x402b37
  402b04:	78 3c                	js     0x402b42
  402b06:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
  402b09:	53                   	push   ebx
  402b0a:	e8 a9 fe ff ff       	call   0x4029b8
  402b0f:	83 c4 04             	add    esp,0x4
  402b12:	8d 6b 10             	lea    ebp,[ebx+0x10]
  402b15:	56                   	push   esi
  402b16:	53                   	push   ebx
  402b17:	e8 de fe ff ff       	call   0x4029fa
  402b1c:	83 c4 08             	add    esp,0x8
  402b1f:	8d 0c 76             	lea    ecx,[esi+esi*2]
  402b22:	6a 01                	push   0x1
  402b24:	8b 44 8f 08          	mov    eax,DWORD PTR [edi+ecx*4+0x8]
  402b28:	e8 61 ff ff ff       	call   0x402a8e
  402b2d:	8b 04 8f             	mov    eax,DWORD PTR [edi+ecx*4]
  402b30:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
  402b33:	ff 54 8f 08          	call   DWORD PTR [edi+ecx*4+0x8]
  402b37:	8b 7b 08             	mov    edi,DWORD PTR [ebx+0x8]
  402b3a:	8d 0c 76             	lea    ecx,[esi+esi*2]
  402b3d:	8b 34 8f             	mov    esi,DWORD PTR [edi+ecx*4]
  402b40:	eb a1                	jmp    0x402ae3
  402b42:	b8 00 00 00 00       	mov    eax,0x0
  402b47:	eb 1c                	jmp    0x402b65
  402b49:	b8 01 00 00 00       	mov    eax,0x1
  402b4e:	eb 15                	jmp    0x402b65
  402b50:	55                   	push   ebp
  402b51:	8d 6b 10             	lea    ebp,[ebx+0x10]
  402b54:	6a ff                	push   0xffffffff
  402b56:	53                   	push   ebx
  402b57:	e8 9e fe ff ff       	call   0x4029fa
  402b5c:	83 c4 08             	add    esp,0x8
  402b5f:	5d                   	pop    ebp
  402b60:	b8 01 00 00 00       	mov    eax,0x1
  402b65:	5d                   	pop    ebp
  402b66:	5f                   	pop    edi
  402b67:	5e                   	pop    esi
  402b68:	5b                   	pop    ebx
  402b69:	8b e5                	mov    esp,ebp
  402b6b:	5d                   	pop    ebp
  402b6c:	c3                   	ret
  402b6d:	55                   	push   ebp
  402b6e:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  402b72:	8b 29                	mov    ebp,DWORD PTR [ecx]
  402b74:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
  402b77:	50                   	push   eax
  402b78:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
  402b7b:	50                   	push   eax
  402b7c:	e8 79 fe ff ff       	call   0x4029fa
  402b81:	83 c4 08             	add    esp,0x8
  402b84:	5d                   	pop    ebp
  402b85:	c2 04 00             	ret    0x4
  402b88:	a1 b8 7f 40 00       	mov    eax,ds:0x407fb8
  402b8d:	83 f8 01             	cmp    eax,0x1
  402b90:	74 0d                	je     0x402b9f
  402b92:	85 c0                	test   eax,eax
  402b94:	75 2a                	jne    0x402bc0
  402b96:	83 3d 34 72 40 00 01 	cmp    DWORD PTR ds:0x407234,0x1
  402b9d:	75 21                	jne    0x402bc0
  402b9f:	68 fc 00 00 00       	push   0xfc
  402ba4:	e8 18 00 00 00       	call   0x402bc1
  402ba9:	a1 c8 80 40 00       	mov    eax,ds:0x4080c8
  402bae:	59                   	pop    ecx
  402baf:	85 c0                	test   eax,eax
  402bb1:	74 02                	je     0x402bb5
  402bb3:	ff d0                	call   eax
  402bb5:	68 ff 00 00 00       	push   0xff
  402bba:	e8 02 00 00 00       	call   0x402bc1
  402bbf:	59                   	pop    ecx
  402bc0:	c3                   	ret
  402bc1:	55                   	push   ebp
  402bc2:	8b ec                	mov    ebp,esp
  402bc4:	81 ec a4 01 00 00    	sub    esp,0x1a4
  402bca:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
  402bcd:	33 c9                	xor    ecx,ecx
  402bcf:	b8 e8 72 40 00       	mov    eax,0x4072e8
  402bd4:	3b 10                	cmp    edx,DWORD PTR [eax]
  402bd6:	74 0b                	je     0x402be3
  402bd8:	83 c0 08             	add    eax,0x8
  402bdb:	41                   	inc    ecx
  402bdc:	3d 78 73 40 00       	cmp    eax,0x407378
  402be1:	7c f1                	jl     0x402bd4
  402be3:	56                   	push   esi
  402be4:	8b f1                	mov    esi,ecx
  402be6:	c1 e6 03             	shl    esi,0x3
  402be9:	3b 96 e8 72 40 00    	cmp    edx,DWORD PTR [esi+0x4072e8]
  402bef:	0f 85 1c 01 00 00    	jne    0x402d11
  402bf5:	a1 b8 7f 40 00       	mov    eax,ds:0x407fb8
  402bfa:	83 f8 01             	cmp    eax,0x1
  402bfd:	0f 84 e8 00 00 00    	je     0x402ceb
  402c03:	85 c0                	test   eax,eax
  402c05:	75 0d                	jne    0x402c14
  402c07:	83 3d 34 72 40 00 01 	cmp    DWORD PTR ds:0x407234,0x1
  402c0e:	0f 84 d7 00 00 00    	je     0x402ceb
  402c14:	81 fa fc 00 00 00    	cmp    edx,0xfc
  402c1a:	0f 84 f1 00 00 00    	je     0x402d11
  402c20:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  402c26:	68 04 01 00 00       	push   0x104
  402c2b:	50                   	push   eax
  402c2c:	6a 00                	push   0x0
  402c2e:	ff 15 74 60 40 00    	call   DWORD PTR ds:0x406074
  402c34:	85 c0                	test   eax,eax
  402c36:	75 13                	jne    0x402c4b
  402c38:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  402c3e:	68 70 64 40 00       	push   0x406470
  402c43:	50                   	push   eax
  402c44:	e8 67 0a 00 00       	call   0x4036b0
  402c49:	59                   	pop    ecx
  402c4a:	59                   	pop    ecx
  402c4b:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  402c51:	57                   	push   edi
  402c52:	50                   	push   eax
  402c53:	8d bd 5c fe ff ff    	lea    edi,[ebp-0x1a4]
  402c59:	e8 22 04 00 00       	call   0x403080
  402c5e:	40                   	inc    eax
  402c5f:	59                   	pop    ecx
  402c60:	83 f8 3c             	cmp    eax,0x3c
  402c63:	76 29                	jbe    0x402c8e
  402c65:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  402c6b:	50                   	push   eax
  402c6c:	e8 0f 04 00 00       	call   0x403080
  402c71:	8b f8                	mov    edi,eax
  402c73:	8d 85 5c fe ff ff    	lea    eax,[ebp-0x1a4]
  402c79:	83 e8 3b             	sub    eax,0x3b
  402c7c:	6a 03                	push   0x3
  402c7e:	03 f8                	add    edi,eax
  402c80:	68 6c 64 40 00       	push   0x40646c
  402c85:	57                   	push   edi
  402c86:	e8 d5 e9 ff ff       	call   0x401660
  402c8b:	83 c4 10             	add    esp,0x10
  402c8e:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  402c94:	68 50 64 40 00       	push   0x406450
  402c99:	50                   	push   eax
  402c9a:	e8 11 0a 00 00       	call   0x4036b0
  402c9f:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  402ca5:	57                   	push   edi
  402ca6:	50                   	push   eax
  402ca7:	e8 14 0a 00 00       	call   0x4036c0
  402cac:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  402cb2:	68 4c 64 40 00       	push   0x40644c
  402cb7:	50                   	push   eax
  402cb8:	e8 03 0a 00 00       	call   0x4036c0
  402cbd:	ff b6 ec 72 40 00    	push   DWORD PTR [esi+0x4072ec]
  402cc3:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  402cc9:	50                   	push   eax
  402cca:	e8 f1 09 00 00       	call   0x4036c0
  402ccf:	68 10 20 01 00       	push   0x12010
  402cd4:	8d 85 60 ff ff ff    	lea    eax,[ebp-0xa0]
  402cda:	68 24 64 40 00       	push   0x406424
  402cdf:	50                   	push   eax
  402ce0:	e8 b9 16 00 00       	call   0x40439e
  402ce5:	83 c4 2c             	add    esp,0x2c
  402ce8:	5f                   	pop    edi
  402ce9:	eb 26                	jmp    0x402d11
  402ceb:	8d 45 08             	lea    eax,[ebp+0x8]
  402cee:	8d b6 ec 72 40 00    	lea    esi,[esi+0x4072ec]
  402cf4:	6a 00                	push   0x0
  402cf6:	50                   	push   eax
  402cf7:	ff 36                	push   DWORD PTR [esi]
  402cf9:	e8 82 03 00 00       	call   0x403080
  402cfe:	59                   	pop    ecx
  402cff:	50                   	push   eax
  402d00:	ff 36                	push   DWORD PTR [esi]
  402d02:	6a f4                	push   0xfffffff4
  402d04:	ff 15 0c 60 40 00    	call   DWORD PTR ds:0x40600c
  402d0a:	50                   	push   eax
  402d0b:	ff 15 a8 60 40 00    	call   DWORD PTR ds:0x4060a8
  402d11:	5e                   	pop    esi
  402d12:	c9                   	leave
  402d13:	c3                   	ret
  402d14:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  402d18:	53                   	push   ebx
  402d19:	3b 05 80 94 40 00    	cmp    eax,DWORD PTR ds:0x409480
  402d1f:	56                   	push   esi
  402d20:	57                   	push   edi
  402d21:	73 73                	jae    0x402d96
  402d23:	8b c8                	mov    ecx,eax
  402d25:	8b f0                	mov    esi,eax
  402d27:	c1 f9 05             	sar    ecx,0x5
  402d2a:	83 e6 1f             	and    esi,0x1f
  402d2d:	8d 3c 8d 80 93 40 00 	lea    edi,[ecx*4+0x409380]
  402d34:	c1 e6 03             	shl    esi,0x3
  402d37:	8b 0f                	mov    ecx,DWORD PTR [edi]
  402d39:	f6 44 31 04 01       	test   BYTE PTR [ecx+esi*1+0x4],0x1
  402d3e:	74 56                	je     0x402d96
  402d40:	50                   	push   eax
  402d41:	e8 c2 17 00 00       	call   0x404508
  402d46:	83 f8 ff             	cmp    eax,0xffffffff
  402d49:	59                   	pop    ecx
  402d4a:	75 0c                	jne    0x402d58
  402d4c:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  402d53:	00 00 00 
  402d56:	eb 4f                	jmp    0x402da7
  402d58:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  402d5c:	6a 00                	push   0x0
  402d5e:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
  402d62:	50                   	push   eax
  402d63:	ff 15 b0 60 40 00    	call   DWORD PTR ds:0x4060b0
  402d69:	8b d8                	mov    ebx,eax
  402d6b:	83 fb ff             	cmp    ebx,0xffffffff
  402d6e:	75 08                	jne    0x402d78
  402d70:	ff 15 ac 60 40 00    	call   DWORD PTR ds:0x4060ac
  402d76:	eb 02                	jmp    0x402d7a
  402d78:	33 c0                	xor    eax,eax
  402d7a:	85 c0                	test   eax,eax
  402d7c:	74 09                	je     0x402d87
  402d7e:	50                   	push   eax
  402d7f:	e8 a3 16 00 00       	call   0x404427
  402d84:	59                   	pop    ecx
  402d85:	eb 20                	jmp    0x402da7
  402d87:	8b 07                	mov    eax,DWORD PTR [edi]
  402d89:	80 64 30 04 fd       	and    BYTE PTR [eax+esi*1+0x4],0xfd
  402d8e:	8d 44 30 04          	lea    eax,[eax+esi*1+0x4]
  402d92:	8b c3                	mov    eax,ebx
  402d94:	eb 14                	jmp    0x402daa
  402d96:	83 25 68 7f 40 00 00 	and    DWORD PTR ds:0x407f68,0x0
  402d9d:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  402da4:	00 00 00 
  402da7:	83 c8 ff             	or     eax,0xffffffff
  402daa:	5f                   	pop    edi
  402dab:	5e                   	pop    esi
  402dac:	5b                   	pop    ebx
  402dad:	c3                   	ret
  402dae:	55                   	push   ebp
  402daf:	8b ec                	mov    ebp,esp
  402db1:	81 ec 14 04 00 00    	sub    esp,0x414
  402db7:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  402dba:	53                   	push   ebx
  402dbb:	3b 0d 80 94 40 00    	cmp    ecx,DWORD PTR ds:0x409480
  402dc1:	56                   	push   esi
  402dc2:	57                   	push   edi
  402dc3:	0f 83 79 01 00 00    	jae    0x402f42
  402dc9:	8b c1                	mov    eax,ecx
  402dcb:	8b f1                	mov    esi,ecx
  402dcd:	c1 f8 05             	sar    eax,0x5
  402dd0:	83 e6 1f             	and    esi,0x1f
  402dd3:	8d 1c 85 80 93 40 00 	lea    ebx,[eax*4+0x409380]
  402dda:	c1 e6 03             	shl    esi,0x3
  402ddd:	8b 03                	mov    eax,DWORD PTR [ebx]
  402ddf:	8a 44 30 04          	mov    al,BYTE PTR [eax+esi*1+0x4]
  402de3:	a8 01                	test   al,0x1
  402de5:	0f 84 57 01 00 00    	je     0x402f42
  402deb:	33 ff                	xor    edi,edi
  402ded:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
  402df0:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
  402df3:	89 7d f0             	mov    DWORD PTR [ebp-0x10],edi
  402df6:	75 07                	jne    0x402dff
  402df8:	33 c0                	xor    eax,eax
  402dfa:	e9 57 01 00 00       	jmp    0x402f56
  402dff:	a8 20                	test   al,0x20
  402e01:	74 0c                	je     0x402e0f
  402e03:	6a 02                	push   0x2
  402e05:	57                   	push   edi
  402e06:	51                   	push   ecx
  402e07:	e8 08 ff ff ff       	call   0x402d14
  402e0c:	83 c4 0c             	add    esp,0xc
  402e0f:	8b 03                	mov    eax,DWORD PTR [ebx]
  402e11:	03 c6                	add    eax,esi
  402e13:	f6 40 04 80          	test   BYTE PTR [eax+0x4],0x80
  402e17:	0f 84 c1 00 00 00    	je     0x402ede
  402e1d:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  402e20:	39 7d 10             	cmp    DWORD PTR [ebp+0x10],edi
  402e23:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  402e26:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  402e29:	0f 86 e7 00 00 00    	jbe    0x402f16
  402e2f:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
  402e35:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  402e38:	2b 4d 0c             	sub    ecx,DWORD PTR [ebp+0xc]
  402e3b:	3b 4d 10             	cmp    ecx,DWORD PTR [ebp+0x10]
  402e3e:	73 29                	jae    0x402e69
  402e40:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  402e43:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  402e46:	8a 09                	mov    cl,BYTE PTR [ecx]
  402e48:	80 f9 0a             	cmp    cl,0xa
  402e4b:	75 07                	jne    0x402e54
  402e4d:	ff 45 f0             	inc    DWORD PTR [ebp-0x10]
  402e50:	c6 00 0d             	mov    BYTE PTR [eax],0xd
  402e53:	40                   	inc    eax
  402e54:	88 08                	mov    BYTE PTR [eax],cl
  402e56:	40                   	inc    eax
  402e57:	8b c8                	mov    ecx,eax
  402e59:	8d 95 ec fb ff ff    	lea    edx,[ebp-0x414]
  402e5f:	2b ca                	sub    ecx,edx
  402e61:	81 f9 00 04 00 00    	cmp    ecx,0x400
  402e67:	7c cc                	jl     0x402e35
  402e69:	8b f8                	mov    edi,eax
  402e6b:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
  402e71:	2b f8                	sub    edi,eax
  402e73:	8d 45 f4             	lea    eax,[ebp-0xc]
  402e76:	6a 00                	push   0x0
  402e78:	50                   	push   eax
  402e79:	8d 85 ec fb ff ff    	lea    eax,[ebp-0x414]
  402e7f:	57                   	push   edi
  402e80:	50                   	push   eax
  402e81:	8b 03                	mov    eax,DWORD PTR [ebx]
  402e83:	ff 34 30             	push   DWORD PTR [eax+esi*1]
  402e86:	ff 15 a8 60 40 00    	call   DWORD PTR ds:0x4060a8
  402e8c:	85 c0                	test   eax,eax
  402e8e:	74 43                	je     0x402ed3
  402e90:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  402e93:	01 45 f8             	add    DWORD PTR [ebp-0x8],eax
  402e96:	3b c7                	cmp    eax,edi
  402e98:	7c 0b                	jl     0x402ea5
  402e9a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  402e9d:	2b 45 0c             	sub    eax,DWORD PTR [ebp+0xc]
  402ea0:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
  402ea3:	72 8a                	jb     0x402e2f
  402ea5:	33 ff                	xor    edi,edi
  402ea7:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  402eaa:	3b c7                	cmp    eax,edi
  402eac:	0f 85 8b 00 00 00    	jne    0x402f3d
  402eb2:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
  402eb5:	74 5f                	je     0x402f16
  402eb7:	6a 05                	push   0x5
  402eb9:	58                   	pop    eax
  402eba:	39 45 08             	cmp    DWORD PTR [ebp+0x8],eax
  402ebd:	75 4c                	jne    0x402f0b
  402ebf:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  402ec6:	00 00 00 
  402ec9:	a3 68 7f 40 00       	mov    ds:0x407f68,eax
  402ece:	e9 80 00 00 00       	jmp    0x402f53
  402ed3:	ff 15 ac 60 40 00    	call   DWORD PTR ds:0x4060ac
  402ed9:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  402edc:	eb c7                	jmp    0x402ea5
  402ede:	8d 4d f4             	lea    ecx,[ebp-0xc]
  402ee1:	57                   	push   edi
  402ee2:	51                   	push   ecx
  402ee3:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  402ee6:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  402ee9:	ff 30                	push   DWORD PTR [eax]
  402eeb:	ff 15 a8 60 40 00    	call   DWORD PTR ds:0x4060a8
  402ef1:	85 c0                	test   eax,eax
  402ef3:	74 0b                	je     0x402f00
  402ef5:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  402ef8:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  402efb:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  402efe:	eb a7                	jmp    0x402ea7
  402f00:	ff 15 ac 60 40 00    	call   DWORD PTR ds:0x4060ac
  402f06:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
  402f09:	eb 9c                	jmp    0x402ea7
  402f0b:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  402f0e:	e8 14 15 00 00       	call   0x404427
  402f13:	59                   	pop    ecx
  402f14:	eb 3d                	jmp    0x402f53
  402f16:	8b 03                	mov    eax,DWORD PTR [ebx]
  402f18:	f6 44 30 04 40       	test   BYTE PTR [eax+esi*1+0x4],0x40
  402f1d:	74 0c                	je     0x402f2b
  402f1f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  402f22:	80 38 1a             	cmp    BYTE PTR [eax],0x1a
  402f25:	0f 84 cd fe ff ff    	je     0x402df8
  402f2b:	c7 05 64 7f 40 00 1c 	mov    DWORD PTR ds:0x407f64,0x1c
  402f32:	00 00 00 
  402f35:	89 3d 68 7f 40 00    	mov    DWORD PTR ds:0x407f68,edi
  402f3b:	eb 16                	jmp    0x402f53
  402f3d:	2b 45 f0             	sub    eax,DWORD PTR [ebp-0x10]
  402f40:	eb 14                	jmp    0x402f56
  402f42:	83 25 68 7f 40 00 00 	and    DWORD PTR ds:0x407f68,0x0
  402f49:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  402f50:	00 00 00 
  402f53:	83 c8 ff             	or     eax,0xffffffff
  402f56:	5f                   	pop    edi
  402f57:	5e                   	pop    esi
  402f58:	5b                   	pop    ebx
  402f59:	c9                   	leave
  402f5a:	c3                   	ret
  402f5b:	ff 05 cc 80 40 00    	inc    DWORD PTR ds:0x4080cc
  402f61:	68 00 10 00 00       	push   0x1000
  402f66:	e8 35 08 00 00       	call   0x4037a0
  402f6b:	59                   	pop    ecx
  402f6c:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  402f70:	85 c0                	test   eax,eax
  402f72:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  402f75:	74 0d                	je     0x402f84
  402f77:	83 49 0c 08          	or     DWORD PTR [ecx+0xc],0x8
  402f7b:	c7 41 18 00 10 00 00 	mov    DWORD PTR [ecx+0x18],0x1000
  402f82:	eb 11                	jmp    0x402f95
  402f84:	83 49 0c 04          	or     DWORD PTR [ecx+0xc],0x4
  402f88:	8d 41 14             	lea    eax,[ecx+0x14]
  402f8b:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  402f8e:	c7 41 18 02 00 00 00 	mov    DWORD PTR [ecx+0x18],0x2
  402f95:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
  402f98:	83 61 04 00          	and    DWORD PTR [ecx+0x4],0x0
  402f9c:	89 01                	mov    DWORD PTR [ecx],eax
  402f9e:	c3                   	ret
  402f9f:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  402fa3:	3b 05 80 94 40 00    	cmp    eax,DWORD PTR ds:0x409480
  402fa9:	72 03                	jb     0x402fae
  402fab:	33 c0                	xor    eax,eax
  402fad:	c3                   	ret
  402fae:	8b c8                	mov    ecx,eax
  402fb0:	83 e0 1f             	and    eax,0x1f
  402fb3:	c1 f9 05             	sar    ecx,0x5
  402fb6:	8b 0c 8d 80 93 40 00 	mov    ecx,DWORD PTR [ecx*4+0x409380]
  402fbd:	8a 44 c1 04          	mov    al,BYTE PTR [ecx+eax*8+0x4]
  402fc1:	83 e0 40             	and    eax,0x40
  402fc4:	c3                   	ret
  402fc5:	a1 60 93 40 00       	mov    eax,ds:0x409360
  402fca:	56                   	push   esi
  402fcb:	6a 14                	push   0x14
  402fcd:	85 c0                	test   eax,eax
  402fcf:	5e                   	pop    esi
  402fd0:	75 07                	jne    0x402fd9
  402fd2:	b8 00 02 00 00       	mov    eax,0x200
  402fd7:	eb 06                	jmp    0x402fdf
  402fd9:	3b c6                	cmp    eax,esi
  402fdb:	7d 07                	jge    0x402fe4
  402fdd:	8b c6                	mov    eax,esi
  402fdf:	a3 60 93 40 00       	mov    ds:0x409360,eax
  402fe4:	6a 04                	push   0x4
  402fe6:	50                   	push   eax
  402fe7:	e8 59 15 00 00       	call   0x404545
  402fec:	59                   	pop    ecx
  402fed:	a3 48 83 40 00       	mov    ds:0x408348,eax
  402ff2:	85 c0                	test   eax,eax
  402ff4:	59                   	pop    ecx
  402ff5:	75 21                	jne    0x403018
  402ff7:	6a 04                	push   0x4
  402ff9:	56                   	push   esi
  402ffa:	89 35 60 93 40 00    	mov    DWORD PTR ds:0x409360,esi
  403000:	e8 40 15 00 00       	call   0x404545
  403005:	59                   	pop    ecx
  403006:	a3 48 83 40 00       	mov    ds:0x408348,eax
  40300b:	85 c0                	test   eax,eax
  40300d:	59                   	pop    ecx
  40300e:	75 08                	jne    0x403018
  403010:	6a 1a                	push   0x1a
  403012:	e8 3d e8 ff ff       	call   0x401854
  403017:	59                   	pop    ecx
  403018:	33 c9                	xor    ecx,ecx
  40301a:	b8 78 73 40 00       	mov    eax,0x407378
  40301f:	8b 15 48 83 40 00    	mov    edx,DWORD PTR ds:0x408348
  403025:	89 04 11             	mov    DWORD PTR [ecx+edx*1],eax
  403028:	83 c0 20             	add    eax,0x20
  40302b:	83 c1 04             	add    ecx,0x4
  40302e:	3d f8 75 40 00       	cmp    eax,0x4075f8
  403033:	7c ea                	jl     0x40301f
  403035:	33 d2                	xor    edx,edx
  403037:	b9 88 73 40 00       	mov    ecx,0x407388
  40303c:	8b c2                	mov    eax,edx
  40303e:	8b f2                	mov    esi,edx
  403040:	c1 f8 05             	sar    eax,0x5
  403043:	83 e6 1f             	and    esi,0x1f
  403046:	8b 04 85 80 93 40 00 	mov    eax,DWORD PTR [eax*4+0x409380]
  40304d:	8b 04 f0             	mov    eax,DWORD PTR [eax+esi*8]
  403050:	83 f8 ff             	cmp    eax,0xffffffff
  403053:	74 04                	je     0x403059
  403055:	85 c0                	test   eax,eax
  403057:	75 03                	jne    0x40305c
  403059:	83 09 ff             	or     DWORD PTR [ecx],0xffffffff
  40305c:	83 c1 20             	add    ecx,0x20
  40305f:	42                   	inc    edx
  403060:	81 f9 e8 73 40 00    	cmp    ecx,0x4073e8
  403066:	7c d4                	jl     0x40303c
  403068:	5e                   	pop    esi
  403069:	c3                   	ret
  40306a:	e8 42 16 00 00       	call   0x4046b1
  40306f:	80 3d a4 7f 40 00 00 	cmp    BYTE PTR ds:0x407fa4,0x0
  403076:	74 05                	je     0x40307d
  403078:	e9 45 15 00 00       	jmp    0x4045c2
  40307d:	c3                   	ret
  40307e:	cc                   	int3
  40307f:	cc                   	int3
  403080:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  403084:	f7 c1 03 00 00 00    	test   ecx,0x3
  40308a:	74 14                	je     0x4030a0
  40308c:	8a 01                	mov    al,BYTE PTR [ecx]
  40308e:	41                   	inc    ecx
  40308f:	84 c0                	test   al,al
  403091:	74 40                	je     0x4030d3
  403093:	f7 c1 03 00 00 00    	test   ecx,0x3
  403099:	75 f1                	jne    0x40308c
  40309b:	05 00 00 00 00       	add    eax,0x0
  4030a0:	8b 01                	mov    eax,DWORD PTR [ecx]
  4030a2:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  4030a7:	03 d0                	add    edx,eax
  4030a9:	83 f0 ff             	xor    eax,0xffffffff
  4030ac:	33 c2                	xor    eax,edx
  4030ae:	83 c1 04             	add    ecx,0x4
  4030b1:	a9 00 01 01 81       	test   eax,0x81010100
  4030b6:	74 e8                	je     0x4030a0
  4030b8:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
  4030bb:	84 c0                	test   al,al
  4030bd:	74 32                	je     0x4030f1
  4030bf:	84 e4                	test   ah,ah
  4030c1:	74 24                	je     0x4030e7
  4030c3:	a9 00 00 ff 00       	test   eax,0xff0000
  4030c8:	74 13                	je     0x4030dd
  4030ca:	a9 00 00 00 ff       	test   eax,0xff000000
  4030cf:	74 02                	je     0x4030d3
  4030d1:	eb cd                	jmp    0x4030a0
  4030d3:	8d 41 ff             	lea    eax,[ecx-0x1]
  4030d6:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  4030da:	2b c1                	sub    eax,ecx
  4030dc:	c3                   	ret
  4030dd:	8d 41 fe             	lea    eax,[ecx-0x2]
  4030e0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  4030e4:	2b c1                	sub    eax,ecx
  4030e6:	c3                   	ret
  4030e7:	8d 41 fd             	lea    eax,[ecx-0x3]
  4030ea:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  4030ee:	2b c1                	sub    eax,ecx
  4030f0:	c3                   	ret
  4030f1:	8d 41 fc             	lea    eax,[ecx-0x4]
  4030f4:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  4030f8:	2b c1                	sub    eax,ecx
  4030fa:	c3                   	ret
  4030fb:	55                   	push   ebp
  4030fc:	8b ec                	mov    ebp,esp
  4030fe:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403101:	85 c0                	test   eax,eax
  403103:	75 02                	jne    0x403107
  403105:	5d                   	pop    ebp
  403106:	c3                   	ret
  403107:	83 3d e8 80 40 00 00 	cmp    DWORD PTR ds:0x4080e8,0x0
  40310e:	75 12                	jne    0x403122
  403110:	66 8b 4d 0c          	mov    cx,WORD PTR [ebp+0xc]
  403114:	66 81 f9 ff 00       	cmp    cx,0xff
  403119:	77 39                	ja     0x403154
  40311b:	6a 01                	push   0x1
  40311d:	88 08                	mov    BYTE PTR [eax],cl
  40311f:	58                   	pop    eax
  403120:	5d                   	pop    ebp
  403121:	c3                   	ret
  403122:	8d 4d 08             	lea    ecx,[ebp+0x8]
  403125:	83 65 08 00          	and    DWORD PTR [ebp+0x8],0x0
  403129:	51                   	push   ecx
  40312a:	6a 00                	push   0x0
  40312c:	ff 35 a0 7a 40 00    	push   DWORD PTR ds:0x407aa0
  403132:	50                   	push   eax
  403133:	8d 45 0c             	lea    eax,[ebp+0xc]
  403136:	6a 01                	push   0x1
  403138:	50                   	push   eax
  403139:	68 20 02 00 00       	push   0x220
  40313e:	ff 35 f8 80 40 00    	push   DWORD PTR ds:0x4080f8
  403144:	ff 15 80 60 40 00    	call   DWORD PTR ds:0x406080
  40314a:	85 c0                	test   eax,eax
  40314c:	74 06                	je     0x403154
  40314e:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
  403152:	74 0d                	je     0x403161
  403154:	c7 05 64 7f 40 00 2a 	mov    DWORD PTR ds:0x407f64,0x2a
  40315b:	00 00 00 
  40315e:	83 c8 ff             	or     eax,0xffffffff
  403161:	5d                   	pop    ebp
  403162:	c3                   	ret
  403163:	cc                   	int3
  403164:	cc                   	int3
  403165:	cc                   	int3
  403166:	cc                   	int3
  403167:	cc                   	int3
  403168:	cc                   	int3
  403169:	cc                   	int3
  40316a:	cc                   	int3
  40316b:	cc                   	int3
  40316c:	cc                   	int3
  40316d:	cc                   	int3
  40316e:	cc                   	int3
  40316f:	cc                   	int3
  403170:	53                   	push   ebx
  403171:	56                   	push   esi
  403172:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  403176:	0b c0                	or     eax,eax
  403178:	75 18                	jne    0x403192
  40317a:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  40317e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  403182:	33 d2                	xor    edx,edx
  403184:	f7 f1                	div    ecx
  403186:	8b d8                	mov    ebx,eax
  403188:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  40318c:	f7 f1                	div    ecx
  40318e:	8b d3                	mov    edx,ebx
  403190:	eb 41                	jmp    0x4031d3
  403192:	8b c8                	mov    ecx,eax
  403194:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  403198:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  40319c:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  4031a0:	d1 e9                	shr    ecx,1
  4031a2:	d1 db                	rcr    ebx,1
  4031a4:	d1 ea                	shr    edx,1
  4031a6:	d1 d8                	rcr    eax,1
  4031a8:	0b c9                	or     ecx,ecx
  4031aa:	75 f4                	jne    0x4031a0
  4031ac:	f7 f3                	div    ebx
  4031ae:	8b f0                	mov    esi,eax
  4031b0:	f7 64 24 18          	mul    DWORD PTR [esp+0x18]
  4031b4:	8b c8                	mov    ecx,eax
  4031b6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4031ba:	f7 e6                	mul    esi
  4031bc:	03 d1                	add    edx,ecx
  4031be:	72 0e                	jb     0x4031ce
  4031c0:	3b 54 24 10          	cmp    edx,DWORD PTR [esp+0x10]
  4031c4:	77 08                	ja     0x4031ce
  4031c6:	72 07                	jb     0x4031cf
  4031c8:	3b 44 24 0c          	cmp    eax,DWORD PTR [esp+0xc]
  4031cc:	76 01                	jbe    0x4031cf
  4031ce:	4e                   	dec    esi
  4031cf:	33 d2                	xor    edx,edx
  4031d1:	8b c6                	mov    eax,esi
  4031d3:	5e                   	pop    esi
  4031d4:	5b                   	pop    ebx
  4031d5:	c2 10 00             	ret    0x10
  4031d8:	cc                   	int3
  4031d9:	cc                   	int3
  4031da:	cc                   	int3
  4031db:	cc                   	int3
  4031dc:	cc                   	int3
  4031dd:	cc                   	int3
  4031de:	cc                   	int3
  4031df:	cc                   	int3
  4031e0:	53                   	push   ebx
  4031e1:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4031e5:	0b c0                	or     eax,eax
  4031e7:	75 18                	jne    0x403201
  4031e9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4031ed:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  4031f1:	33 d2                	xor    edx,edx
  4031f3:	f7 f1                	div    ecx
  4031f5:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  4031f9:	f7 f1                	div    ecx
  4031fb:	8b c2                	mov    eax,edx
  4031fd:	33 d2                	xor    edx,edx
  4031ff:	eb 50                	jmp    0x403251
  403201:	8b c8                	mov    ecx,eax
  403203:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
  403207:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  40320b:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40320f:	d1 e9                	shr    ecx,1
  403211:	d1 db                	rcr    ebx,1
  403213:	d1 ea                	shr    edx,1
  403215:	d1 d8                	rcr    eax,1
  403217:	0b c9                	or     ecx,ecx
  403219:	75 f4                	jne    0x40320f
  40321b:	f7 f3                	div    ebx
  40321d:	8b c8                	mov    ecx,eax
  40321f:	f7 64 24 14          	mul    DWORD PTR [esp+0x14]
  403223:	91                   	xchg   ecx,eax
  403224:	f7 64 24 10          	mul    DWORD PTR [esp+0x10]
  403228:	03 d1                	add    edx,ecx
  40322a:	72 0e                	jb     0x40323a
  40322c:	3b 54 24 0c          	cmp    edx,DWORD PTR [esp+0xc]
  403230:	77 08                	ja     0x40323a
  403232:	72 0e                	jb     0x403242
  403234:	3b 44 24 08          	cmp    eax,DWORD PTR [esp+0x8]
  403238:	76 08                	jbe    0x403242
  40323a:	2b 44 24 10          	sub    eax,DWORD PTR [esp+0x10]
  40323e:	1b 54 24 14          	sbb    edx,DWORD PTR [esp+0x14]
  403242:	2b 44 24 08          	sub    eax,DWORD PTR [esp+0x8]
  403246:	1b 54 24 0c          	sbb    edx,DWORD PTR [esp+0xc]
  40324a:	f7 da                	neg    edx
  40324c:	f7 d8                	neg    eax
  40324e:	83 da 00             	sbb    edx,0x0
  403251:	5b                   	pop    ebx
  403252:	c2 10 00             	ret    0x10
  403255:	6a 04                	push   0x4
  403257:	6a 00                	push   0x0
  403259:	ff 74 24 0c          	push   DWORD PTR [esp+0xc]
  40325d:	e8 04 00 00 00       	call   0x403266
  403262:	83 c4 0c             	add    esp,0xc
  403265:	c3                   	ret
  403266:	0f b6 44 24 04       	movzx  eax,BYTE PTR [esp+0x4]
  40326b:	8a 4c 24 0c          	mov    cl,BYTE PTR [esp+0xc]
  40326f:	84 88 41 82 40 00    	test   BYTE PTR [eax+0x408241],cl
  403275:	75 1c                	jne    0x403293
  403277:	83 7c 24 08 00       	cmp    DWORD PTR [esp+0x8],0x0
  40327c:	74 0e                	je     0x40328c
  40327e:	0f b7 04 45 22 76 40 	movzx  eax,WORD PTR [eax*2+0x407622]
  403285:	00 
  403286:	23 44 24 08          	and    eax,DWORD PTR [esp+0x8]
  40328a:	eb 02                	jmp    0x40328e
  40328c:	33 c0                	xor    eax,eax
  40328e:	85 c0                	test   eax,eax
  403290:	75 01                	jne    0x403293
  403292:	c3                   	ret
  403293:	6a 01                	push   0x1
  403295:	58                   	pop    eax
  403296:	c3                   	ret
  403297:	55                   	push   ebp
  403298:	8b ec                	mov    ebp,esp
  40329a:	83 ec 18             	sub    esp,0x18
  40329d:	53                   	push   ebx
  40329e:	56                   	push   esi
  40329f:	57                   	push   edi
  4032a0:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4032a3:	e8 88 01 00 00       	call   0x403430
  4032a8:	8b f0                	mov    esi,eax
  4032aa:	59                   	pop    ecx
  4032ab:	3b 35 28 81 40 00    	cmp    esi,DWORD PTR ds:0x408128
  4032b1:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4032b4:	0f 84 6a 01 00 00    	je     0x403424
  4032ba:	33 db                	xor    ebx,ebx
  4032bc:	3b f3                	cmp    esi,ebx
  4032be:	0f 84 56 01 00 00    	je     0x40341a
  4032c4:	33 d2                	xor    edx,edx
  4032c6:	b8 38 78 40 00       	mov    eax,0x407838
  4032cb:	39 30                	cmp    DWORD PTR [eax],esi
  4032cd:	74 72                	je     0x403341
  4032cf:	83 c0 30             	add    eax,0x30
  4032d2:	42                   	inc    edx
  4032d3:	3d 28 79 40 00       	cmp    eax,0x407928
  4032d8:	7c f1                	jl     0x4032cb
  4032da:	8d 45 e8             	lea    eax,[ebp-0x18]
  4032dd:	50                   	push   eax
  4032de:	56                   	push   esi
  4032df:	ff 15 b4 60 40 00    	call   DWORD PTR ds:0x4060b4
  4032e5:	83 f8 01             	cmp    eax,0x1
  4032e8:	0f 85 24 01 00 00    	jne    0x403412
  4032ee:	6a 40                	push   0x40
  4032f0:	33 c0                	xor    eax,eax
  4032f2:	59                   	pop    ecx
  4032f3:	bf 40 82 40 00       	mov    edi,0x408240
  4032f8:	83 7d e8 01          	cmp    DWORD PTR [ebp-0x18],0x1
  4032fc:	89 35 28 81 40 00    	mov    DWORD PTR ds:0x408128,esi
  403302:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  403304:	aa                   	stos   BYTE PTR es:[edi],al
  403305:	89 1d 44 83 40 00    	mov    DWORD PTR ds:0x408344,ebx
  40330b:	0f 86 ef 00 00 00    	jbe    0x403400
  403311:	80 7d ee 00          	cmp    BYTE PTR [ebp-0x12],0x0
  403315:	0f 84 bb 00 00 00    	je     0x4033d6
  40331b:	8d 4d ef             	lea    ecx,[ebp-0x11]
  40331e:	8a 11                	mov    dl,BYTE PTR [ecx]
  403320:	84 d2                	test   dl,dl
  403322:	0f 84 ae 00 00 00    	je     0x4033d6
  403328:	0f b6 41 ff          	movzx  eax,BYTE PTR [ecx-0x1]
  40332c:	0f b6 d2             	movzx  edx,dl
  40332f:	3b c2                	cmp    eax,edx
  403331:	0f 87 93 00 00 00    	ja     0x4033ca
  403337:	80 88 41 82 40 00 04 	or     BYTE PTR [eax+0x408241],0x4
  40333e:	40                   	inc    eax
  40333f:	eb ee                	jmp    0x40332f
  403341:	6a 40                	push   0x40
  403343:	33 c0                	xor    eax,eax
  403345:	59                   	pop    ecx
  403346:	bf 40 82 40 00       	mov    edi,0x408240
  40334b:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  40334d:	8d 34 52             	lea    esi,[edx+edx*2]
  403350:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  403353:	c1 e6 04             	shl    esi,0x4
  403356:	aa                   	stos   BYTE PTR es:[edi],al
  403357:	8d 9e 48 78 40 00    	lea    ebx,[esi+0x407848]
  40335d:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
  403360:	8b cb                	mov    ecx,ebx
  403362:	74 2c                	je     0x403390
  403364:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
  403367:	84 d2                	test   dl,dl
  403369:	74 25                	je     0x403390
  40336b:	0f b6 01             	movzx  eax,BYTE PTR [ecx]
  40336e:	0f b6 fa             	movzx  edi,dl
  403371:	3b c7                	cmp    eax,edi
  403373:	77 14                	ja     0x403389
  403375:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  403378:	8a 92 30 78 40 00    	mov    dl,BYTE PTR [edx+0x407830]
  40337e:	08 90 41 82 40 00    	or     BYTE PTR [eax+0x408241],dl
  403384:	40                   	inc    eax
  403385:	3b c7                	cmp    eax,edi
  403387:	76 f5                	jbe    0x40337e
  403389:	41                   	inc    ecx
  40338a:	41                   	inc    ecx
  40338b:	80 39 00             	cmp    BYTE PTR [ecx],0x0
  40338e:	75 d4                	jne    0x403364
  403390:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  403393:	83 c3 08             	add    ebx,0x8
  403396:	83 7d fc 04          	cmp    DWORD PTR [ebp-0x4],0x4
  40339a:	72 c1                	jb     0x40335d
  40339c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40339f:	c7 05 3c 81 40 00 01 	mov    DWORD PTR ds:0x40813c,0x1
  4033a6:	00 00 00 
  4033a9:	50                   	push   eax
  4033aa:	a3 28 81 40 00       	mov    ds:0x408128,eax
  4033af:	e8 c6 00 00 00       	call   0x40347a
  4033b4:	8d b6 3c 78 40 00    	lea    esi,[esi+0x40783c]
  4033ba:	bf 30 81 40 00       	mov    edi,0x408130
  4033bf:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4033c0:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4033c1:	59                   	pop    ecx
  4033c2:	a3 44 83 40 00       	mov    ds:0x408344,eax
  4033c7:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4033c8:	eb 55                	jmp    0x40341f
  4033ca:	41                   	inc    ecx
  4033cb:	41                   	inc    ecx
  4033cc:	80 79 ff 00          	cmp    BYTE PTR [ecx-0x1],0x0
  4033d0:	0f 85 48 ff ff ff    	jne    0x40331e
  4033d6:	6a 01                	push   0x1
  4033d8:	58                   	pop    eax
  4033d9:	80 88 41 82 40 00 08 	or     BYTE PTR [eax+0x408241],0x8
  4033e0:	40                   	inc    eax
  4033e1:	3d ff 00 00 00       	cmp    eax,0xff
  4033e6:	72 f1                	jb     0x4033d9
  4033e8:	56                   	push   esi
  4033e9:	e8 8c 00 00 00       	call   0x40347a
  4033ee:	59                   	pop    ecx
  4033ef:	a3 44 83 40 00       	mov    ds:0x408344,eax
  4033f4:	c7 05 3c 81 40 00 01 	mov    DWORD PTR ds:0x40813c,0x1
  4033fb:	00 00 00 
  4033fe:	eb 06                	jmp    0x403406
  403400:	89 1d 3c 81 40 00    	mov    DWORD PTR ds:0x40813c,ebx
  403406:	33 c0                	xor    eax,eax
  403408:	bf 30 81 40 00       	mov    edi,0x408130
  40340d:	ab                   	stos   DWORD PTR es:[edi],eax
  40340e:	ab                   	stos   DWORD PTR es:[edi],eax
  40340f:	ab                   	stos   DWORD PTR es:[edi],eax
  403410:	eb 0d                	jmp    0x40341f
  403412:	39 1d d0 80 40 00    	cmp    DWORD PTR ds:0x4080d0,ebx
  403418:	74 0e                	je     0x403428
  40341a:	e8 8e 00 00 00       	call   0x4034ad
  40341f:	e8 b2 00 00 00       	call   0x4034d6
  403424:	33 c0                	xor    eax,eax
  403426:	eb 03                	jmp    0x40342b
  403428:	83 c8 ff             	or     eax,0xffffffff
  40342b:	5f                   	pop    edi
  40342c:	5e                   	pop    esi
  40342d:	5b                   	pop    ebx
  40342e:	c9                   	leave
  40342f:	c3                   	ret
  403430:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  403434:	83 25 d0 80 40 00 00 	and    DWORD PTR ds:0x4080d0,0x0
  40343b:	83 f8 fe             	cmp    eax,0xfffffffe
  40343e:	75 10                	jne    0x403450
  403440:	c7 05 d0 80 40 00 01 	mov    DWORD PTR ds:0x4080d0,0x1
  403447:	00 00 00 
  40344a:	ff 25 bc 60 40 00    	jmp    DWORD PTR ds:0x4060bc
  403450:	83 f8 fd             	cmp    eax,0xfffffffd
  403453:	75 10                	jne    0x403465
  403455:	c7 05 d0 80 40 00 01 	mov    DWORD PTR ds:0x4080d0,0x1
  40345c:	00 00 00 
  40345f:	ff 25 b8 60 40 00    	jmp    DWORD PTR ds:0x4060b8
  403465:	83 f8 fc             	cmp    eax,0xfffffffc
  403468:	75 0f                	jne    0x403479
  40346a:	a1 f8 80 40 00       	mov    eax,ds:0x4080f8
  40346f:	c7 05 d0 80 40 00 01 	mov    DWORD PTR ds:0x4080d0,0x1
  403476:	00 00 00 
  403479:	c3                   	ret
  40347a:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40347e:	2d a4 03 00 00       	sub    eax,0x3a4
  403483:	74 22                	je     0x4034a7
  403485:	83 e8 04             	sub    eax,0x4
  403488:	74 17                	je     0x4034a1
  40348a:	83 e8 0d             	sub    eax,0xd
  40348d:	74 0c                	je     0x40349b
  40348f:	48                   	dec    eax
  403490:	74 03                	je     0x403495
  403492:	33 c0                	xor    eax,eax
  403494:	c3                   	ret
  403495:	b8 04 04 00 00       	mov    eax,0x404
  40349a:	c3                   	ret
  40349b:	b8 12 04 00 00       	mov    eax,0x412
  4034a0:	c3                   	ret
  4034a1:	b8 04 08 00 00       	mov    eax,0x804
  4034a6:	c3                   	ret
  4034a7:	b8 11 04 00 00       	mov    eax,0x411
  4034ac:	c3                   	ret
  4034ad:	57                   	push   edi
  4034ae:	6a 40                	push   0x40
  4034b0:	59                   	pop    ecx
  4034b1:	33 c0                	xor    eax,eax
  4034b3:	bf 40 82 40 00       	mov    edi,0x408240
  4034b8:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  4034ba:	aa                   	stos   BYTE PTR es:[edi],al
  4034bb:	33 c0                	xor    eax,eax
  4034bd:	bf 30 81 40 00       	mov    edi,0x408130
  4034c2:	a3 28 81 40 00       	mov    ds:0x408128,eax
  4034c7:	a3 3c 81 40 00       	mov    ds:0x40813c,eax
  4034cc:	a3 44 83 40 00       	mov    ds:0x408344,eax
  4034d1:	ab                   	stos   DWORD PTR es:[edi],eax
  4034d2:	ab                   	stos   DWORD PTR es:[edi],eax
  4034d3:	ab                   	stos   DWORD PTR es:[edi],eax
  4034d4:	5f                   	pop    edi
  4034d5:	c3                   	ret
  4034d6:	55                   	push   ebp
  4034d7:	8b ec                	mov    ebp,esp
  4034d9:	81 ec 14 05 00 00    	sub    esp,0x514
  4034df:	8d 45 ec             	lea    eax,[ebp-0x14]
  4034e2:	56                   	push   esi
  4034e3:	50                   	push   eax
  4034e4:	ff 35 28 81 40 00    	push   DWORD PTR ds:0x408128
  4034ea:	ff 15 b4 60 40 00    	call   DWORD PTR ds:0x4060b4
  4034f0:	83 f8 01             	cmp    eax,0x1
  4034f3:	0f 85 16 01 00 00    	jne    0x40360f
  4034f9:	33 c0                	xor    eax,eax
  4034fb:	be 00 01 00 00       	mov    esi,0x100
  403500:	88 84 05 ec fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x114],al
  403507:	40                   	inc    eax
  403508:	3b c6                	cmp    eax,esi
  40350a:	72 f4                	jb     0x403500
  40350c:	8a 45 f2             	mov    al,BYTE PTR [ebp-0xe]
  40350f:	c6 85 ec fe ff ff 20 	mov    BYTE PTR [ebp-0x114],0x20
  403516:	84 c0                	test   al,al
  403518:	74 37                	je     0x403551
  40351a:	53                   	push   ebx
  40351b:	57                   	push   edi
  40351c:	8d 55 f3             	lea    edx,[ebp-0xd]
  40351f:	0f b6 0a             	movzx  ecx,BYTE PTR [edx]
  403522:	0f b6 c0             	movzx  eax,al
  403525:	3b c1                	cmp    eax,ecx
  403527:	77 1d                	ja     0x403546
  403529:	2b c8                	sub    ecx,eax
  40352b:	8d bc 05 ec fe ff ff 	lea    edi,[ebp+eax*1-0x114]
  403532:	41                   	inc    ecx
  403533:	b8 20 20 20 20       	mov    eax,0x20202020
  403538:	8b d9                	mov    ebx,ecx
  40353a:	c1 e9 02             	shr    ecx,0x2
  40353d:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  40353f:	8b cb                	mov    ecx,ebx
  403541:	83 e1 03             	and    ecx,0x3
  403544:	f3 aa                	rep stos BYTE PTR es:[edi],al
  403546:	42                   	inc    edx
  403547:	42                   	inc    edx
  403548:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  40354b:	84 c0                	test   al,al
  40354d:	75 d0                	jne    0x40351f
  40354f:	5f                   	pop    edi
  403550:	5b                   	pop    ebx
  403551:	6a 00                	push   0x0
  403553:	8d 85 ec fa ff ff    	lea    eax,[ebp-0x514]
  403559:	ff 35 44 83 40 00    	push   DWORD PTR ds:0x408344
  40355f:	ff 35 28 81 40 00    	push   DWORD PTR ds:0x408128
  403565:	50                   	push   eax
  403566:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40356c:	56                   	push   esi
  40356d:	50                   	push   eax
  40356e:	6a 01                	push   0x1
  403570:	e8 0a 14 00 00       	call   0x40497f
  403575:	6a 00                	push   0x0
  403577:	8d 85 ec fd ff ff    	lea    eax,[ebp-0x214]
  40357d:	ff 35 28 81 40 00    	push   DWORD PTR ds:0x408128
  403583:	56                   	push   esi
  403584:	50                   	push   eax
  403585:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  40358b:	56                   	push   esi
  40358c:	50                   	push   eax
  40358d:	56                   	push   esi
  40358e:	ff 35 44 83 40 00    	push   DWORD PTR ds:0x408344
  403594:	e8 97 11 00 00       	call   0x404730
  403599:	6a 00                	push   0x0
  40359b:	8d 85 ec fc ff ff    	lea    eax,[ebp-0x314]
  4035a1:	ff 35 28 81 40 00    	push   DWORD PTR ds:0x408128
  4035a7:	56                   	push   esi
  4035a8:	50                   	push   eax
  4035a9:	8d 85 ec fe ff ff    	lea    eax,[ebp-0x114]
  4035af:	56                   	push   esi
  4035b0:	50                   	push   eax
  4035b1:	68 00 02 00 00       	push   0x200
  4035b6:	ff 35 44 83 40 00    	push   DWORD PTR ds:0x408344
  4035bc:	e8 6f 11 00 00       	call   0x404730
  4035c1:	83 c4 5c             	add    esp,0x5c
  4035c4:	33 c0                	xor    eax,eax
  4035c6:	8d 8d ec fa ff ff    	lea    ecx,[ebp-0x514]
  4035cc:	66 8b 11             	mov    dx,WORD PTR [ecx]
  4035cf:	f6 c2 01             	test   dl,0x1
  4035d2:	74 16                	je     0x4035ea
  4035d4:	80 88 41 82 40 00 10 	or     BYTE PTR [eax+0x408241],0x10
  4035db:	8a 94 05 ec fd ff ff 	mov    dl,BYTE PTR [ebp+eax*1-0x214]
  4035e2:	88 90 40 81 40 00    	mov    BYTE PTR [eax+0x408140],dl
  4035e8:	eb 1c                	jmp    0x403606
  4035ea:	f6 c2 02             	test   dl,0x2
  4035ed:	74 10                	je     0x4035ff
  4035ef:	80 88 41 82 40 00 20 	or     BYTE PTR [eax+0x408241],0x20
  4035f6:	8a 94 05 ec fc ff ff 	mov    dl,BYTE PTR [ebp+eax*1-0x314]
  4035fd:	eb e3                	jmp    0x4035e2
  4035ff:	80 a0 40 81 40 00 00 	and    BYTE PTR [eax+0x408140],0x0
  403606:	40                   	inc    eax
  403607:	41                   	inc    ecx
  403608:	41                   	inc    ecx
  403609:	3b c6                	cmp    eax,esi
  40360b:	72 bf                	jb     0x4035cc
  40360d:	eb 49                	jmp    0x403658
  40360f:	33 c0                	xor    eax,eax
  403611:	be 00 01 00 00       	mov    esi,0x100
  403616:	83 f8 41             	cmp    eax,0x41
  403619:	72 19                	jb     0x403634
  40361b:	83 f8 5a             	cmp    eax,0x5a
  40361e:	77 14                	ja     0x403634
  403620:	80 88 41 82 40 00 10 	or     BYTE PTR [eax+0x408241],0x10
  403627:	8a c8                	mov    cl,al
  403629:	80 c1 20             	add    cl,0x20
  40362c:	88 88 40 81 40 00    	mov    BYTE PTR [eax+0x408140],cl
  403632:	eb 1f                	jmp    0x403653
  403634:	83 f8 61             	cmp    eax,0x61
  403637:	72 13                	jb     0x40364c
  403639:	83 f8 7a             	cmp    eax,0x7a
  40363c:	77 0e                	ja     0x40364c
  40363e:	80 88 41 82 40 00 20 	or     BYTE PTR [eax+0x408241],0x20
  403645:	8a c8                	mov    cl,al
  403647:	80 e9 20             	sub    cl,0x20
  40364a:	eb e0                	jmp    0x40362c
  40364c:	80 a0 40 81 40 00 00 	and    BYTE PTR [eax+0x408140],0x0
  403653:	40                   	inc    eax
  403654:	3b c6                	cmp    eax,esi
  403656:	72 be                	jb     0x403616
  403658:	5e                   	pop    esi
  403659:	c9                   	leave
  40365a:	c3                   	ret
  40365b:	83 3d 8c 94 40 00 00 	cmp    DWORD PTR ds:0x40948c,0x0
  403662:	75 12                	jne    0x403676
  403664:	6a fd                	push   0xfffffffd
  403666:	e8 2c fc ff ff       	call   0x403297
  40366b:	59                   	pop    ecx
  40366c:	c7 05 8c 94 40 00 01 	mov    DWORD PTR ds:0x40948c,0x1
  403673:	00 00 00 
  403676:	c3                   	ret
  403677:	56                   	push   esi
  403678:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40367c:	85 f6                	test   esi,esi
  40367e:	74 24                	je     0x4036a4
  403680:	56                   	push   esi
  403681:	e8 0d 05 00 00       	call   0x403b93
  403686:	59                   	pop    ecx
  403687:	85 c0                	test   eax,eax
  403689:	56                   	push   esi
  40368a:	74 0a                	je     0x403696
  40368c:	50                   	push   eax
  40368d:	e8 2c 05 00 00       	call   0x403bbe
  403692:	59                   	pop    ecx
  403693:	59                   	pop    ecx
  403694:	5e                   	pop    esi
  403695:	c3                   	ret
  403696:	6a 00                	push   0x0
  403698:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  40369e:	ff 15 a0 60 40 00    	call   DWORD PTR ds:0x4060a0
  4036a4:	5e                   	pop    esi
  4036a5:	c3                   	ret
  4036a6:	cc                   	int3
  4036a7:	cc                   	int3
  4036a8:	cc                   	int3
  4036a9:	cc                   	int3
  4036aa:	cc                   	int3
  4036ab:	cc                   	int3
  4036ac:	cc                   	int3
  4036ad:	cc                   	int3
  4036ae:	cc                   	int3
  4036af:	cc                   	int3
  4036b0:	57                   	push   edi
  4036b1:	8b 7c 24 08          	mov    edi,DWORD PTR [esp+0x8]
  4036b5:	eb 6a                	jmp    0x403721
  4036b7:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
  4036be:	8b ff                	mov    edi,edi
  4036c0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  4036c4:	57                   	push   edi
  4036c5:	f7 c1 03 00 00 00    	test   ecx,0x3
  4036cb:	74 0f                	je     0x4036dc
  4036cd:	8a 01                	mov    al,BYTE PTR [ecx]
  4036cf:	41                   	inc    ecx
  4036d0:	84 c0                	test   al,al
  4036d2:	74 3b                	je     0x40370f
  4036d4:	f7 c1 03 00 00 00    	test   ecx,0x3
  4036da:	75 f1                	jne    0x4036cd
  4036dc:	8b 01                	mov    eax,DWORD PTR [ecx]
  4036de:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  4036e3:	03 d0                	add    edx,eax
  4036e5:	83 f0 ff             	xor    eax,0xffffffff
  4036e8:	33 c2                	xor    eax,edx
  4036ea:	83 c1 04             	add    ecx,0x4
  4036ed:	a9 00 01 01 81       	test   eax,0x81010100
  4036f2:	74 e8                	je     0x4036dc
  4036f4:	8b 41 fc             	mov    eax,DWORD PTR [ecx-0x4]
  4036f7:	84 c0                	test   al,al
  4036f9:	74 23                	je     0x40371e
  4036fb:	84 e4                	test   ah,ah
  4036fd:	74 1a                	je     0x403719
  4036ff:	a9 00 00 ff 00       	test   eax,0xff0000
  403704:	74 0e                	je     0x403714
  403706:	a9 00 00 00 ff       	test   eax,0xff000000
  40370b:	74 02                	je     0x40370f
  40370d:	eb cd                	jmp    0x4036dc
  40370f:	8d 79 ff             	lea    edi,[ecx-0x1]
  403712:	eb 0d                	jmp    0x403721
  403714:	8d 79 fe             	lea    edi,[ecx-0x2]
  403717:	eb 08                	jmp    0x403721
  403719:	8d 79 fd             	lea    edi,[ecx-0x3]
  40371c:	eb 03                	jmp    0x403721
  40371e:	8d 79 fc             	lea    edi,[ecx-0x4]
  403721:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  403725:	f7 c1 03 00 00 00    	test   ecx,0x3
  40372b:	74 19                	je     0x403746
  40372d:	8a 11                	mov    dl,BYTE PTR [ecx]
  40372f:	41                   	inc    ecx
  403730:	84 d2                	test   dl,dl
  403732:	74 64                	je     0x403798
  403734:	88 17                	mov    BYTE PTR [edi],dl
  403736:	47                   	inc    edi
  403737:	f7 c1 03 00 00 00    	test   ecx,0x3
  40373d:	75 ee                	jne    0x40372d
  40373f:	eb 05                	jmp    0x403746
  403741:	89 17                	mov    DWORD PTR [edi],edx
  403743:	83 c7 04             	add    edi,0x4
  403746:	ba ff fe fe 7e       	mov    edx,0x7efefeff
  40374b:	8b 01                	mov    eax,DWORD PTR [ecx]
  40374d:	03 d0                	add    edx,eax
  40374f:	83 f0 ff             	xor    eax,0xffffffff
  403752:	33 c2                	xor    eax,edx
  403754:	8b 11                	mov    edx,DWORD PTR [ecx]
  403756:	83 c1 04             	add    ecx,0x4
  403759:	a9 00 01 01 81       	test   eax,0x81010100
  40375e:	74 e1                	je     0x403741
  403760:	84 d2                	test   dl,dl
  403762:	74 34                	je     0x403798
  403764:	84 f6                	test   dh,dh
  403766:	74 27                	je     0x40378f
  403768:	f7 c2 00 00 ff 00    	test   edx,0xff0000
  40376e:	74 12                	je     0x403782
  403770:	f7 c2 00 00 00 ff    	test   edx,0xff000000
  403776:	74 02                	je     0x40377a
  403778:	eb c7                	jmp    0x403741
  40377a:	89 17                	mov    DWORD PTR [edi],edx
  40377c:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  403780:	5f                   	pop    edi
  403781:	c3                   	ret
  403782:	66 89 17             	mov    WORD PTR [edi],dx
  403785:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  403789:	c6 47 02 00          	mov    BYTE PTR [edi+0x2],0x0
  40378d:	5f                   	pop    edi
  40378e:	c3                   	ret
  40378f:	66 89 17             	mov    WORD PTR [edi],dx
  403792:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  403796:	5f                   	pop    edi
  403797:	c3                   	ret
  403798:	88 17                	mov    BYTE PTR [edi],dl
  40379a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  40379e:	5f                   	pop    edi
  40379f:	c3                   	ret
  4037a0:	ff 35 08 81 40 00    	push   DWORD PTR ds:0x408108
  4037a6:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  4037aa:	e8 03 00 00 00       	call   0x4037b2
  4037af:	59                   	pop    ecx
  4037b0:	59                   	pop    ecx
  4037b1:	c3                   	ret
  4037b2:	83 7c 24 04 e0       	cmp    DWORD PTR [esp+0x4],0xffffffe0
  4037b7:	77 22                	ja     0x4037db
  4037b9:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  4037bd:	e8 1c 00 00 00       	call   0x4037de
  4037c2:	85 c0                	test   eax,eax
  4037c4:	59                   	pop    ecx
  4037c5:	75 16                	jne    0x4037dd
  4037c7:	39 44 24 08          	cmp    DWORD PTR [esp+0x8],eax
  4037cb:	74 10                	je     0x4037dd
  4037cd:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  4037d1:	e8 f2 12 00 00       	call   0x404ac8
  4037d6:	85 c0                	test   eax,eax
  4037d8:	59                   	pop    ecx
  4037d9:	75 de                	jne    0x4037b9
  4037db:	33 c0                	xor    eax,eax
  4037dd:	c3                   	ret
  4037de:	56                   	push   esi
  4037df:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  4037e3:	3b 35 30 79 40 00    	cmp    esi,DWORD PTR ds:0x407930
  4037e9:	77 0b                	ja     0x4037f6
  4037eb:	56                   	push   esi
  4037ec:	e8 f8 06 00 00       	call   0x403ee9
  4037f1:	85 c0                	test   eax,eax
  4037f3:	59                   	pop    ecx
  4037f4:	75 1c                	jne    0x403812
  4037f6:	85 f6                	test   esi,esi
  4037f8:	75 03                	jne    0x4037fd
  4037fa:	6a 01                	push   0x1
  4037fc:	5e                   	pop    esi
  4037fd:	83 c6 0f             	add    esi,0xf
  403800:	83 e6 f0             	and    esi,0xfffffff0
  403803:	56                   	push   esi
  403804:	6a 00                	push   0x0
  403806:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  40380c:	ff 15 c0 60 40 00    	call   DWORD PTR ds:0x4060c0
  403812:	5e                   	pop    esi
  403813:	c3                   	ret
  403814:	cc                   	int3
  403815:	cc                   	int3
  403816:	cc                   	int3
  403817:	cc                   	int3
  403818:	cc                   	int3
  403819:	cc                   	int3
  40381a:	cc                   	int3
  40381b:	cc                   	int3
  40381c:	cc                   	int3
  40381d:	cc                   	int3
  40381e:	cc                   	int3
  40381f:	cc                   	int3
  403820:	55                   	push   ebp
  403821:	8b ec                	mov    ebp,esp
  403823:	57                   	push   edi
  403824:	56                   	push   esi
  403825:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  403828:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  40382b:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  40382e:	8b c1                	mov    eax,ecx
  403830:	8b d1                	mov    edx,ecx
  403832:	03 c6                	add    eax,esi
  403834:	3b fe                	cmp    edi,esi
  403836:	76 08                	jbe    0x403840
  403838:	3b f8                	cmp    edi,eax
  40383a:	0f 82 78 01 00 00    	jb     0x4039b8
  403840:	f7 c7 03 00 00 00    	test   edi,0x3
  403846:	75 14                	jne    0x40385c
  403848:	c1 e9 02             	shr    ecx,0x2
  40384b:	83 e2 03             	and    edx,0x3
  40384e:	83 f9 08             	cmp    ecx,0x8
  403851:	72 29                	jb     0x40387c
  403853:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  403855:	ff 24 95 68 39 40 00 	jmp    DWORD PTR [edx*4+0x403968]
  40385c:	8b c7                	mov    eax,edi
  40385e:	ba 03 00 00 00       	mov    edx,0x3
  403863:	83 e9 04             	sub    ecx,0x4
  403866:	72 0c                	jb     0x403874
  403868:	83 e0 03             	and    eax,0x3
  40386b:	03 c8                	add    ecx,eax
  40386d:	ff 24 85 80 38 40 00 	jmp    DWORD PTR [eax*4+0x403880]
  403874:	ff 24 8d 78 39 40 00 	jmp    DWORD PTR [ecx*4+0x403978]
  40387b:	90                   	nop
  40387c:	ff 24 8d fc 38 40 00 	jmp    DWORD PTR [ecx*4+0x4038fc]
  403883:	90                   	nop
  403884:	90                   	nop
  403885:	38 40 00             	cmp    BYTE PTR [eax+0x0],al
  403888:	bc 38 40 00 e0       	mov    esp,0xe0004038
  40388d:	38 40 00             	cmp    BYTE PTR [eax+0x0],al
  403890:	23 d1                	and    edx,ecx
  403892:	8a 06                	mov    al,BYTE PTR [esi]
  403894:	88 07                	mov    BYTE PTR [edi],al
  403896:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  403899:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  40389c:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  40389f:	c1 e9 02             	shr    ecx,0x2
  4038a2:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  4038a5:	83 c6 03             	add    esi,0x3
  4038a8:	83 c7 03             	add    edi,0x3
  4038ab:	83 f9 08             	cmp    ecx,0x8
  4038ae:	72 cc                	jb     0x40387c
  4038b0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4038b2:	ff 24 95 68 39 40 00 	jmp    DWORD PTR [edx*4+0x403968]
  4038b9:	8d 49 00             	lea    ecx,[ecx+0x0]
  4038bc:	23 d1                	and    edx,ecx
  4038be:	8a 06                	mov    al,BYTE PTR [esi]
  4038c0:	88 07                	mov    BYTE PTR [edi],al
  4038c2:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  4038c5:	c1 e9 02             	shr    ecx,0x2
  4038c8:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  4038cb:	83 c6 02             	add    esi,0x2
  4038ce:	83 c7 02             	add    edi,0x2
  4038d1:	83 f9 08             	cmp    ecx,0x8
  4038d4:	72 a6                	jb     0x40387c
  4038d6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4038d8:	ff 24 95 68 39 40 00 	jmp    DWORD PTR [edx*4+0x403968]
  4038df:	90                   	nop
  4038e0:	23 d1                	and    edx,ecx
  4038e2:	8a 06                	mov    al,BYTE PTR [esi]
  4038e4:	88 07                	mov    BYTE PTR [edi],al
  4038e6:	46                   	inc    esi
  4038e7:	c1 e9 02             	shr    ecx,0x2
  4038ea:	47                   	inc    edi
  4038eb:	83 f9 08             	cmp    ecx,0x8
  4038ee:	72 8c                	jb     0x40387c
  4038f0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4038f2:	ff 24 95 68 39 40 00 	jmp    DWORD PTR [edx*4+0x403968]
  4038f9:	8d 49 00             	lea    ecx,[ecx+0x0]
  4038fc:	5f                   	pop    edi
  4038fd:	39 40 00             	cmp    DWORD PTR [eax+0x0],eax
  403900:	4c                   	dec    esp
  403901:	39 40 00             	cmp    DWORD PTR [eax+0x0],eax
  403904:	44                   	inc    esp
  403905:	39 40 00             	cmp    DWORD PTR [eax+0x0],eax
  403908:	3c 39                	cmp    al,0x39
  40390a:	40                   	inc    eax
  40390b:	00 34 39             	add    BYTE PTR [ecx+edi*1],dh
  40390e:	40                   	inc    eax
  40390f:	00 2c 39             	add    BYTE PTR [ecx+edi*1],ch
  403912:	40                   	inc    eax
  403913:	00 24 39             	add    BYTE PTR [ecx+edi*1],ah
  403916:	40                   	inc    eax
  403917:	00 1c 39             	add    BYTE PTR [ecx+edi*1],bl
  40391a:	40                   	inc    eax
  40391b:	00 8b 44 8e e4 89    	add    BYTE PTR [ebx-0x761b71bc],cl
  403921:	44                   	inc    esp
  403922:	8f                   	(bad)
  403923:	e4 8b                	in     al,0x8b
  403925:	44                   	inc    esp
  403926:	8e e8                	mov    gs,eax
  403928:	89 44 8f e8          	mov    DWORD PTR [edi+ecx*4-0x18],eax
  40392c:	8b 44 8e ec          	mov    eax,DWORD PTR [esi+ecx*4-0x14]
  403930:	89 44 8f ec          	mov    DWORD PTR [edi+ecx*4-0x14],eax
  403934:	8b 44 8e f0          	mov    eax,DWORD PTR [esi+ecx*4-0x10]
  403938:	89 44 8f f0          	mov    DWORD PTR [edi+ecx*4-0x10],eax
  40393c:	8b 44 8e f4          	mov    eax,DWORD PTR [esi+ecx*4-0xc]
  403940:	89 44 8f f4          	mov    DWORD PTR [edi+ecx*4-0xc],eax
  403944:	8b 44 8e f8          	mov    eax,DWORD PTR [esi+ecx*4-0x8]
  403948:	89 44 8f f8          	mov    DWORD PTR [edi+ecx*4-0x8],eax
  40394c:	8b 44 8e fc          	mov    eax,DWORD PTR [esi+ecx*4-0x4]
  403950:	89 44 8f fc          	mov    DWORD PTR [edi+ecx*4-0x4],eax
  403954:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  40395b:	03 f0                	add    esi,eax
  40395d:	03 f8                	add    edi,eax
  40395f:	ff 24 95 68 39 40 00 	jmp    DWORD PTR [edx*4+0x403968]
  403966:	8b ff                	mov    edi,edi
  403968:	78 39                	js     0x4039a3
  40396a:	40                   	inc    eax
  40396b:	00 80 39 40 00 8c    	add    BYTE PTR [eax-0x73ffbfc7],al
  403971:	39 40 00             	cmp    DWORD PTR [eax+0x0],eax
  403974:	a0 39 40 00 8b       	mov    al,ds:0x8b004039
  403979:	45                   	inc    ebp
  40397a:	08 5e 5f             	or     BYTE PTR [esi+0x5f],bl
  40397d:	c9                   	leave
  40397e:	c3                   	ret
  40397f:	90                   	nop
  403980:	8a 06                	mov    al,BYTE PTR [esi]
  403982:	88 07                	mov    BYTE PTR [edi],al
  403984:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403987:	5e                   	pop    esi
  403988:	5f                   	pop    edi
  403989:	c9                   	leave
  40398a:	c3                   	ret
  40398b:	90                   	nop
  40398c:	8a 06                	mov    al,BYTE PTR [esi]
  40398e:	88 07                	mov    BYTE PTR [edi],al
  403990:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  403993:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  403996:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403999:	5e                   	pop    esi
  40399a:	5f                   	pop    edi
  40399b:	c9                   	leave
  40399c:	c3                   	ret
  40399d:	8d 49 00             	lea    ecx,[ecx+0x0]
  4039a0:	8a 06                	mov    al,BYTE PTR [esi]
  4039a2:	88 07                	mov    BYTE PTR [edi],al
  4039a4:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  4039a7:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  4039aa:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  4039ad:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  4039b0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  4039b3:	5e                   	pop    esi
  4039b4:	5f                   	pop    edi
  4039b5:	c9                   	leave
  4039b6:	c3                   	ret
  4039b7:	90                   	nop
  4039b8:	8d 74 31 fc          	lea    esi,[ecx+esi*1-0x4]
  4039bc:	8d 7c 39 fc          	lea    edi,[ecx+edi*1-0x4]
  4039c0:	f7 c7 03 00 00 00    	test   edi,0x3
  4039c6:	75 24                	jne    0x4039ec
  4039c8:	c1 e9 02             	shr    ecx,0x2
  4039cb:	83 e2 03             	and    edx,0x3
  4039ce:	83 f9 08             	cmp    ecx,0x8
  4039d1:	72 0d                	jb     0x4039e0
  4039d3:	fd                   	std
  4039d4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4039d6:	fc                   	cld
  4039d7:	ff 24 95 00 3b 40 00 	jmp    DWORD PTR [edx*4+0x403b00]
  4039de:	8b ff                	mov    edi,edi
  4039e0:	f7 d9                	neg    ecx
  4039e2:	ff 24 8d b0 3a 40 00 	jmp    DWORD PTR [ecx*4+0x403ab0]
  4039e9:	8d 49 00             	lea    ecx,[ecx+0x0]
  4039ec:	8b c7                	mov    eax,edi
  4039ee:	ba 03 00 00 00       	mov    edx,0x3
  4039f3:	83 f9 04             	cmp    ecx,0x4
  4039f6:	72 0c                	jb     0x403a04
  4039f8:	83 e0 03             	and    eax,0x3
  4039fb:	2b c8                	sub    ecx,eax
  4039fd:	ff 24 85 08 3a 40 00 	jmp    DWORD PTR [eax*4+0x403a08]
  403a04:	ff 24 8d 00 3b 40 00 	jmp    DWORD PTR [ecx*4+0x403b00]
  403a0b:	90                   	nop
  403a0c:	18 3a                	sbb    BYTE PTR [edx],bh
  403a0e:	40                   	inc    eax
  403a0f:	00 38                	add    BYTE PTR [eax],bh
  403a11:	3a 40 00             	cmp    al,BYTE PTR [eax+0x0]
  403a14:	60                   	pusha
  403a15:	3a 40 00             	cmp    al,BYTE PTR [eax+0x0]
  403a18:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  403a1b:	23 d1                	and    edx,ecx
  403a1d:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  403a20:	4e                   	dec    esi
  403a21:	c1 e9 02             	shr    ecx,0x2
  403a24:	4f                   	dec    edi
  403a25:	83 f9 08             	cmp    ecx,0x8
  403a28:	72 b6                	jb     0x4039e0
  403a2a:	fd                   	std
  403a2b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  403a2d:	fc                   	cld
  403a2e:	ff 24 95 00 3b 40 00 	jmp    DWORD PTR [edx*4+0x403b00]
  403a35:	8d 49 00             	lea    ecx,[ecx+0x0]
  403a38:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  403a3b:	23 d1                	and    edx,ecx
  403a3d:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  403a40:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  403a43:	c1 e9 02             	shr    ecx,0x2
  403a46:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  403a49:	83 ee 02             	sub    esi,0x2
  403a4c:	83 ef 02             	sub    edi,0x2
  403a4f:	83 f9 08             	cmp    ecx,0x8
  403a52:	72 8c                	jb     0x4039e0
  403a54:	fd                   	std
  403a55:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  403a57:	fc                   	cld
  403a58:	ff 24 95 00 3b 40 00 	jmp    DWORD PTR [edx*4+0x403b00]
  403a5f:	90                   	nop
  403a60:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  403a63:	23 d1                	and    edx,ecx
  403a65:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  403a68:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  403a6b:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  403a6e:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  403a71:	c1 e9 02             	shr    ecx,0x2
  403a74:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  403a77:	83 ee 03             	sub    esi,0x3
  403a7a:	83 ef 03             	sub    edi,0x3
  403a7d:	83 f9 08             	cmp    ecx,0x8
  403a80:	0f 82 5a ff ff ff    	jb     0x4039e0
  403a86:	fd                   	std
  403a87:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  403a89:	fc                   	cld
  403a8a:	ff 24 95 00 3b 40 00 	jmp    DWORD PTR [edx*4+0x403b00]
  403a91:	8d 49 00             	lea    ecx,[ecx+0x0]
  403a94:	b4 3a                	mov    ah,0x3a
  403a96:	40                   	inc    eax
  403a97:	00 bc 3a 40 00 c4 3a 	add    BYTE PTR [edx+edi*1+0x3ac40040],bh
  403a9e:	40                   	inc    eax
  403a9f:	00 cc                	add    ah,cl
  403aa1:	3a 40 00             	cmp    al,BYTE PTR [eax+0x0]
  403aa4:	d4 3a                	aam    0x3a
  403aa6:	40                   	inc    eax
  403aa7:	00 dc                	add    ah,bl
  403aa9:	3a 40 00             	cmp    al,BYTE PTR [eax+0x0]
  403aac:	e4 3a                	in     al,0x3a
  403aae:	40                   	inc    eax
  403aaf:	00 f7                	add    bh,dh
  403ab1:	3a 40 00             	cmp    al,BYTE PTR [eax+0x0]
  403ab4:	8b 44 8e 1c          	mov    eax,DWORD PTR [esi+ecx*4+0x1c]
  403ab8:	89 44 8f 1c          	mov    DWORD PTR [edi+ecx*4+0x1c],eax
  403abc:	8b 44 8e 18          	mov    eax,DWORD PTR [esi+ecx*4+0x18]
  403ac0:	89 44 8f 18          	mov    DWORD PTR [edi+ecx*4+0x18],eax
  403ac4:	8b 44 8e 14          	mov    eax,DWORD PTR [esi+ecx*4+0x14]
  403ac8:	89 44 8f 14          	mov    DWORD PTR [edi+ecx*4+0x14],eax
  403acc:	8b 44 8e 10          	mov    eax,DWORD PTR [esi+ecx*4+0x10]
  403ad0:	89 44 8f 10          	mov    DWORD PTR [edi+ecx*4+0x10],eax
  403ad4:	8b 44 8e 0c          	mov    eax,DWORD PTR [esi+ecx*4+0xc]
  403ad8:	89 44 8f 0c          	mov    DWORD PTR [edi+ecx*4+0xc],eax
  403adc:	8b 44 8e 08          	mov    eax,DWORD PTR [esi+ecx*4+0x8]
  403ae0:	89 44 8f 08          	mov    DWORD PTR [edi+ecx*4+0x8],eax
  403ae4:	8b 44 8e 04          	mov    eax,DWORD PTR [esi+ecx*4+0x4]
  403ae8:	89 44 8f 04          	mov    DWORD PTR [edi+ecx*4+0x4],eax
  403aec:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  403af3:	03 f0                	add    esi,eax
  403af5:	03 f8                	add    edi,eax
  403af7:	ff 24 95 00 3b 40 00 	jmp    DWORD PTR [edx*4+0x403b00]
  403afe:	8b ff                	mov    edi,edi
  403b00:	10 3b                	adc    BYTE PTR [ebx],bh
  403b02:	40                   	inc    eax
  403b03:	00 18                	add    BYTE PTR [eax],bl
  403b05:	3b 40 00             	cmp    eax,DWORD PTR [eax+0x0]
  403b08:	28 3b                	sub    BYTE PTR [ebx],bh
  403b0a:	40                   	inc    eax
  403b0b:	00 3c 3b             	add    BYTE PTR [ebx+edi*1],bh
  403b0e:	40                   	inc    eax
  403b0f:	00 8b 45 08 5e 5f    	add    BYTE PTR [ebx+0x5f5e0845],cl
  403b15:	c9                   	leave
  403b16:	c3                   	ret
  403b17:	90                   	nop
  403b18:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  403b1b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  403b1e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403b21:	5e                   	pop    esi
  403b22:	5f                   	pop    edi
  403b23:	c9                   	leave
  403b24:	c3                   	ret
  403b25:	8d 49 00             	lea    ecx,[ecx+0x0]
  403b28:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  403b2b:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  403b2e:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  403b31:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  403b34:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403b37:	5e                   	pop    esi
  403b38:	5f                   	pop    edi
  403b39:	c9                   	leave
  403b3a:	c3                   	ret
  403b3b:	90                   	nop
  403b3c:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  403b3f:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  403b42:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  403b45:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  403b48:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  403b4b:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  403b4e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403b51:	5e                   	pop    esi
  403b52:	5f                   	pop    edi
  403b53:	c9                   	leave
  403b54:	c3                   	ret
  403b55:	68 40 01 00 00       	push   0x140
  403b5a:	6a 00                	push   0x0
  403b5c:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  403b62:	ff 15 c0 60 40 00    	call   DWORD PTR ds:0x4060c0
  403b68:	85 c0                	test   eax,eax
  403b6a:	a3 24 81 40 00       	mov    ds:0x408124,eax
  403b6f:	75 01                	jne    0x403b72
  403b71:	c3                   	ret
  403b72:	83 25 1c 81 40 00 00 	and    DWORD PTR ds:0x40811c,0x0
  403b79:	83 25 20 81 40 00 00 	and    DWORD PTR ds:0x408120,0x0
  403b80:	6a 01                	push   0x1
  403b82:	a3 18 81 40 00       	mov    ds:0x408118,eax
  403b87:	c7 05 10 81 40 00 10 	mov    DWORD PTR ds:0x408110,0x10
  403b8e:	00 00 00 
  403b91:	58                   	pop    eax
  403b92:	c3                   	ret
  403b93:	a1 20 81 40 00       	mov    eax,ds:0x408120
  403b98:	8d 0c 80             	lea    ecx,[eax+eax*4]
  403b9b:	a1 24 81 40 00       	mov    eax,ds:0x408124
  403ba0:	8d 0c 88             	lea    ecx,[eax+ecx*4]
  403ba3:	3b c1                	cmp    eax,ecx
  403ba5:	73 14                	jae    0x403bbb
  403ba7:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  403bab:	2b 50 0c             	sub    edx,DWORD PTR [eax+0xc]
  403bae:	81 fa 00 00 10 00    	cmp    edx,0x100000
  403bb4:	72 07                	jb     0x403bbd
  403bb6:	83 c0 14             	add    eax,0x14
  403bb9:	eb e8                	jmp    0x403ba3
  403bbb:	33 c0                	xor    eax,eax
  403bbd:	c3                   	ret
  403bbe:	55                   	push   ebp
  403bbf:	8b ec                	mov    ebp,esp
  403bc1:	83 ec 14             	sub    esp,0x14
  403bc4:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
  403bc7:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  403bca:	53                   	push   ebx
  403bcb:	56                   	push   esi
  403bcc:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
  403bcf:	8b f2                	mov    esi,edx
  403bd1:	2b 71 0c             	sub    esi,DWORD PTR [ecx+0xc]
  403bd4:	8b 5a fc             	mov    ebx,DWORD PTR [edx-0x4]
  403bd7:	83 c2 fc             	add    edx,0xfffffffc
  403bda:	57                   	push   edi
  403bdb:	c1 ee 0f             	shr    esi,0xf
  403bde:	8b ce                	mov    ecx,esi
  403be0:	8b 7a fc             	mov    edi,DWORD PTR [edx-0x4]
  403be3:	69 c9 04 02 00 00    	imul   ecx,ecx,0x204
  403be9:	4b                   	dec    ebx
  403bea:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  403bed:	8d 8c 01 44 01 00 00 	lea    ecx,[ecx+eax*1+0x144]
  403bf4:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  403bf7:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  403bfa:	8b 0c 13             	mov    ecx,DWORD PTR [ebx+edx*1]
  403bfd:	f6 c1 01             	test   cl,0x1
  403c00:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  403c03:	75 7f                	jne    0x403c84
  403c05:	c1 f9 04             	sar    ecx,0x4
  403c08:	6a 3f                	push   0x3f
  403c0a:	49                   	dec    ecx
  403c0b:	5f                   	pop    edi
  403c0c:	89 4d 0c             	mov    DWORD PTR [ebp+0xc],ecx
  403c0f:	3b cf                	cmp    ecx,edi
  403c11:	76 03                	jbe    0x403c16
  403c13:	89 7d 0c             	mov    DWORD PTR [ebp+0xc],edi
  403c16:	8b 4c 13 04          	mov    ecx,DWORD PTR [ebx+edx*1+0x4]
  403c1a:	3b 4c 13 08          	cmp    ecx,DWORD PTR [ebx+edx*1+0x8]
  403c1e:	75 48                	jne    0x403c68
  403c20:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  403c23:	83 f9 20             	cmp    ecx,0x20
  403c26:	73 1c                	jae    0x403c44
  403c28:	bf 00 00 00 80       	mov    edi,0x80000000
  403c2d:	d3 ef                	shr    edi,cl
  403c2f:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  403c33:	f7 d7                	not    edi
  403c35:	21 7c b0 44          	and    DWORD PTR [eax+esi*4+0x44],edi
  403c39:	fe 09                	dec    BYTE PTR [ecx]
  403c3b:	75 2b                	jne    0x403c68
  403c3d:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  403c40:	21 39                	and    DWORD PTR [ecx],edi
  403c42:	eb 24                	jmp    0x403c68
  403c44:	83 c1 e0             	add    ecx,0xffffffe0
  403c47:	bf 00 00 00 80       	mov    edi,0x80000000
  403c4c:	d3 ef                	shr    edi,cl
  403c4e:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  403c51:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  403c55:	f7 d7                	not    edi
  403c57:	21 bc b0 c4 00 00 00 	and    DWORD PTR [eax+esi*4+0xc4],edi
  403c5e:	fe 09                	dec    BYTE PTR [ecx]
  403c60:	75 06                	jne    0x403c68
  403c62:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  403c65:	21 79 04             	and    DWORD PTR [ecx+0x4],edi
  403c68:	8b 4c 13 08          	mov    ecx,DWORD PTR [ebx+edx*1+0x8]
  403c6c:	8b 7c 13 04          	mov    edi,DWORD PTR [ebx+edx*1+0x4]
  403c70:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
  403c73:	8b 4c 13 04          	mov    ecx,DWORD PTR [ebx+edx*1+0x4]
  403c77:	8b 7c 13 08          	mov    edi,DWORD PTR [ebx+edx*1+0x8]
  403c7b:	03 5d f8             	add    ebx,DWORD PTR [ebp-0x8]
  403c7e:	89 79 08             	mov    DWORD PTR [ecx+0x8],edi
  403c81:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  403c84:	8b fb                	mov    edi,ebx
  403c86:	c1 ff 04             	sar    edi,0x4
  403c89:	4f                   	dec    edi
  403c8a:	83 ff 3f             	cmp    edi,0x3f
  403c8d:	76 03                	jbe    0x403c92
  403c8f:	6a 3f                	push   0x3f
  403c91:	5f                   	pop    edi
  403c92:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  403c95:	83 e1 01             	and    ecx,0x1
  403c98:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  403c9b:	0f 85 a0 00 00 00    	jne    0x403d41
  403ca1:	2b 55 fc             	sub    edx,DWORD PTR [ebp-0x4]
  403ca4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  403ca7:	c1 f9 04             	sar    ecx,0x4
  403caa:	6a 3f                	push   0x3f
  403cac:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  403caf:	49                   	dec    ecx
  403cb0:	5a                   	pop    edx
  403cb1:	3b ca                	cmp    ecx,edx
  403cb3:	89 4d 0c             	mov    DWORD PTR [ebp+0xc],ecx
  403cb6:	76 05                	jbe    0x403cbd
  403cb8:	89 55 0c             	mov    DWORD PTR [ebp+0xc],edx
  403cbb:	8b ca                	mov    ecx,edx
  403cbd:	03 5d fc             	add    ebx,DWORD PTR [ebp-0x4]
  403cc0:	8b fb                	mov    edi,ebx
  403cc2:	89 5d f4             	mov    DWORD PTR [ebp-0xc],ebx
  403cc5:	c1 ff 04             	sar    edi,0x4
  403cc8:	4f                   	dec    edi
  403cc9:	3b fa                	cmp    edi,edx
  403ccb:	76 02                	jbe    0x403ccf
  403ccd:	8b fa                	mov    edi,edx
  403ccf:	3b cf                	cmp    ecx,edi
  403cd1:	74 6b                	je     0x403d3e
  403cd3:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  403cd6:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  403cd9:	3b 51 08             	cmp    edx,DWORD PTR [ecx+0x8]
  403cdc:	75 48                	jne    0x403d26
  403cde:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  403ce1:	83 f9 20             	cmp    ecx,0x20
  403ce4:	73 1c                	jae    0x403d02
  403ce6:	ba 00 00 00 80       	mov    edx,0x80000000
  403ceb:	d3 ea                	shr    edx,cl
  403ced:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  403cf1:	f7 d2                	not    edx
  403cf3:	21 54 b0 44          	and    DWORD PTR [eax+esi*4+0x44],edx
  403cf7:	fe 09                	dec    BYTE PTR [ecx]
  403cf9:	75 2b                	jne    0x403d26
  403cfb:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  403cfe:	21 11                	and    DWORD PTR [ecx],edx
  403d00:	eb 24                	jmp    0x403d26
  403d02:	83 c1 e0             	add    ecx,0xffffffe0
  403d05:	ba 00 00 00 80       	mov    edx,0x80000000
  403d0a:	d3 ea                	shr    edx,cl
  403d0c:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  403d0f:	8d 4c 01 04          	lea    ecx,[ecx+eax*1+0x4]
  403d13:	f7 d2                	not    edx
  403d15:	21 94 b0 c4 00 00 00 	and    DWORD PTR [eax+esi*4+0xc4],edx
  403d1c:	fe 09                	dec    BYTE PTR [ecx]
  403d1e:	75 06                	jne    0x403d26
  403d20:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  403d23:	21 51 04             	and    DWORD PTR [ecx+0x4],edx
  403d26:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  403d29:	8b 51 08             	mov    edx,DWORD PTR [ecx+0x8]
  403d2c:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  403d2f:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  403d32:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  403d35:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  403d38:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  403d3b:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  403d3e:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  403d41:	83 7d ec 00          	cmp    DWORD PTR [ebp-0x14],0x0
  403d45:	75 09                	jne    0x403d50
  403d47:	39 7d 0c             	cmp    DWORD PTR [ebp+0xc],edi
  403d4a:	0f 84 89 00 00 00    	je     0x403dd9
  403d50:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  403d53:	8d 0c f9             	lea    ecx,[ecx+edi*8]
  403d56:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  403d59:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  403d5c:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  403d5f:	8d 0c f9             	lea    ecx,[ecx+edi*8]
  403d62:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  403d65:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  403d68:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  403d6b:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  403d6e:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  403d71:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
  403d74:	75 63                	jne    0x403dd9
  403d76:	8a 4c 07 04          	mov    cl,BYTE PTR [edi+eax*1+0x4]
  403d7a:	83 ff 20             	cmp    edi,0x20
  403d7d:	88 4d 0f             	mov    BYTE PTR [ebp+0xf],cl
  403d80:	fe c1                	inc    cl
  403d82:	88 4c 07 04          	mov    BYTE PTR [edi+eax*1+0x4],cl
  403d86:	73 25                	jae    0x403dad
  403d88:	80 7d 0f 00          	cmp    BYTE PTR [ebp+0xf],0x0
  403d8c:	75 0e                	jne    0x403d9c
  403d8e:	bb 00 00 00 80       	mov    ebx,0x80000000
  403d93:	8b cf                	mov    ecx,edi
  403d95:	d3 eb                	shr    ebx,cl
  403d97:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  403d9a:	09 19                	or     DWORD PTR [ecx],ebx
  403d9c:	bb 00 00 00 80       	mov    ebx,0x80000000
  403da1:	8b cf                	mov    ecx,edi
  403da3:	d3 eb                	shr    ebx,cl
  403da5:	8d 44 b0 44          	lea    eax,[eax+esi*4+0x44]
  403da9:	09 18                	or     DWORD PTR [eax],ebx
  403dab:	eb 29                	jmp    0x403dd6
  403dad:	80 7d 0f 00          	cmp    BYTE PTR [ebp+0xf],0x0
  403db1:	75 10                	jne    0x403dc3
  403db3:	8d 4f e0             	lea    ecx,[edi-0x20]
  403db6:	bb 00 00 00 80       	mov    ebx,0x80000000
  403dbb:	d3 eb                	shr    ebx,cl
  403dbd:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  403dc0:	09 59 04             	or     DWORD PTR [ecx+0x4],ebx
  403dc3:	8d 4f e0             	lea    ecx,[edi-0x20]
  403dc6:	bf 00 00 00 80       	mov    edi,0x80000000
  403dcb:	d3 ef                	shr    edi,cl
  403dcd:	8d 84 b0 c4 00 00 00 	lea    eax,[eax+esi*4+0xc4]
  403dd4:	09 38                	or     DWORD PTR [eax],edi
  403dd6:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
  403dd9:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  403ddc:	89 1a                	mov    DWORD PTR [edx],ebx
  403dde:	89 5c 13 fc          	mov    DWORD PTR [ebx+edx*1-0x4],ebx
  403de2:	ff 08                	dec    DWORD PTR [eax]
  403de4:	0f 85 fa 00 00 00    	jne    0x403ee4
  403dea:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403def:	85 c0                	test   eax,eax
  403df1:	0f 84 df 00 00 00    	je     0x403ed6
  403df7:	8b 0d 14 81 40 00    	mov    ecx,DWORD PTR ds:0x408114
  403dfd:	8b 3d 9c 60 40 00    	mov    edi,DWORD PTR ds:0x40609c
  403e03:	c1 e1 0f             	shl    ecx,0xf
  403e06:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
  403e09:	bb 00 80 00 00       	mov    ebx,0x8000
  403e0e:	68 00 40 00 00       	push   0x4000
  403e13:	53                   	push   ebx
  403e14:	51                   	push   ecx
  403e15:	ff d7                	call   edi
  403e17:	8b 0d 14 81 40 00    	mov    ecx,DWORD PTR ds:0x408114
  403e1d:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403e22:	ba 00 00 00 80       	mov    edx,0x80000000
  403e27:	d3 ea                	shr    edx,cl
  403e29:	09 50 08             	or     DWORD PTR [eax+0x8],edx
  403e2c:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403e31:	8b 0d 14 81 40 00    	mov    ecx,DWORD PTR ds:0x408114
  403e37:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  403e3a:	83 a4 88 c4 00 00 00 	and    DWORD PTR [eax+ecx*4+0xc4],0x0
  403e41:	00 
  403e42:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403e47:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  403e4a:	fe 48 43             	dec    BYTE PTR [eax+0x43]
  403e4d:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403e52:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  403e55:	80 79 43 00          	cmp    BYTE PTR [ecx+0x43],0x0
  403e59:	75 09                	jne    0x403e64
  403e5b:	83 60 04 fe          	and    DWORD PTR [eax+0x4],0xfffffffe
  403e5f:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403e64:	83 78 08 ff          	cmp    DWORD PTR [eax+0x8],0xffffffff
  403e68:	75 6c                	jne    0x403ed6
  403e6a:	53                   	push   ebx
  403e6b:	6a 00                	push   0x0
  403e6d:	ff 70 0c             	push   DWORD PTR [eax+0xc]
  403e70:	ff d7                	call   edi
  403e72:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403e77:	ff 70 10             	push   DWORD PTR [eax+0x10]
  403e7a:	6a 00                	push   0x0
  403e7c:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  403e82:	ff 15 a0 60 40 00    	call   DWORD PTR ds:0x4060a0
  403e88:	a1 20 81 40 00       	mov    eax,ds:0x408120
  403e8d:	8b 15 24 81 40 00    	mov    edx,DWORD PTR ds:0x408124
  403e93:	8d 04 80             	lea    eax,[eax+eax*4]
  403e96:	c1 e0 02             	shl    eax,0x2
  403e99:	8b c8                	mov    ecx,eax
  403e9b:	a1 1c 81 40 00       	mov    eax,ds:0x40811c
  403ea0:	2b c8                	sub    ecx,eax
  403ea2:	8d 4c 11 ec          	lea    ecx,[ecx+edx*1-0x14]
  403ea6:	51                   	push   ecx
  403ea7:	8d 48 14             	lea    ecx,[eax+0x14]
  403eaa:	51                   	push   ecx
  403eab:	50                   	push   eax
  403eac:	e8 3f 0c 00 00       	call   0x404af0
  403eb1:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403eb4:	83 c4 0c             	add    esp,0xc
  403eb7:	ff 0d 20 81 40 00    	dec    DWORD PTR ds:0x408120
  403ebd:	3b 05 1c 81 40 00    	cmp    eax,DWORD PTR ds:0x40811c
  403ec3:	76 03                	jbe    0x403ec8
  403ec5:	83 e8 14             	sub    eax,0x14
  403ec8:	8b 0d 24 81 40 00    	mov    ecx,DWORD PTR ds:0x408124
  403ece:	89 0d 18 81 40 00    	mov    DWORD PTR ds:0x408118,ecx
  403ed4:	eb 03                	jmp    0x403ed9
  403ed6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403ed9:	a3 1c 81 40 00       	mov    ds:0x40811c,eax
  403ede:	89 35 14 81 40 00    	mov    DWORD PTR ds:0x408114,esi
  403ee4:	5f                   	pop    edi
  403ee5:	5e                   	pop    esi
  403ee6:	5b                   	pop    ebx
  403ee7:	c9                   	leave
  403ee8:	c3                   	ret
  403ee9:	55                   	push   ebp
  403eea:	8b ec                	mov    ebp,esp
  403eec:	83 ec 14             	sub    esp,0x14
  403eef:	a1 20 81 40 00       	mov    eax,ds:0x408120
  403ef4:	8b 15 24 81 40 00    	mov    edx,DWORD PTR ds:0x408124
  403efa:	53                   	push   ebx
  403efb:	56                   	push   esi
  403efc:	8d 04 80             	lea    eax,[eax+eax*4]
  403eff:	57                   	push   edi
  403f00:	8d 3c 82             	lea    edi,[edx+eax*4]
  403f03:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  403f06:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  403f09:	8d 48 17             	lea    ecx,[eax+0x17]
  403f0c:	83 e1 f0             	and    ecx,0xfffffff0
  403f0f:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  403f12:	c1 f9 04             	sar    ecx,0x4
  403f15:	49                   	dec    ecx
  403f16:	83 f9 20             	cmp    ecx,0x20
  403f19:	7d 0e                	jge    0x403f29
  403f1b:	83 ce ff             	or     esi,0xffffffff
  403f1e:	d3 ee                	shr    esi,cl
  403f20:	83 4d f8 ff          	or     DWORD PTR [ebp-0x8],0xffffffff
  403f24:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
  403f27:	eb 10                	jmp    0x403f39
  403f29:	83 c1 e0             	add    ecx,0xffffffe0
  403f2c:	83 c8 ff             	or     eax,0xffffffff
  403f2f:	33 f6                	xor    esi,esi
  403f31:	d3 e8                	shr    eax,cl
  403f33:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
  403f36:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  403f39:	a1 18 81 40 00       	mov    eax,ds:0x408118
  403f3e:	8b d8                	mov    ebx,eax
  403f40:	3b df                	cmp    ebx,edi
  403f42:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  403f45:	73 19                	jae    0x403f60
  403f47:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  403f4a:	8b 3b                	mov    edi,DWORD PTR [ebx]
  403f4c:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  403f4f:	23 fe                	and    edi,esi
  403f51:	0b cf                	or     ecx,edi
  403f53:	75 0b                	jne    0x403f60
  403f55:	83 c3 14             	add    ebx,0x14
  403f58:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  403f5b:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  403f5e:	72 e7                	jb     0x403f47
  403f60:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  403f63:	75 79                	jne    0x403fde
  403f65:	8b da                	mov    ebx,edx
  403f67:	3b d8                	cmp    ebx,eax
  403f69:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  403f6c:	73 15                	jae    0x403f83
  403f6e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  403f71:	8b 3b                	mov    edi,DWORD PTR [ebx]
  403f73:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  403f76:	23 fe                	and    edi,esi
  403f78:	0b cf                	or     ecx,edi
  403f7a:	75 05                	jne    0x403f81
  403f7c:	83 c3 14             	add    ebx,0x14
  403f7f:	eb e6                	jmp    0x403f67
  403f81:	3b d8                	cmp    ebx,eax
  403f83:	75 59                	jne    0x403fde
  403f85:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  403f88:	73 11                	jae    0x403f9b
  403f8a:	83 7b 08 00          	cmp    DWORD PTR [ebx+0x8],0x0
  403f8e:	75 08                	jne    0x403f98
  403f90:	83 c3 14             	add    ebx,0x14
  403f93:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  403f96:	eb ed                	jmp    0x403f85
  403f98:	3b 5d fc             	cmp    ebx,DWORD PTR [ebp-0x4]
  403f9b:	75 26                	jne    0x403fc3
  403f9d:	8b da                	mov    ebx,edx
  403f9f:	3b d8                	cmp    ebx,eax
  403fa1:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  403fa4:	73 0d                	jae    0x403fb3
  403fa6:	83 7b 08 00          	cmp    DWORD PTR [ebx+0x8],0x0
  403faa:	75 05                	jne    0x403fb1
  403fac:	83 c3 14             	add    ebx,0x14
  403faf:	eb ee                	jmp    0x403f9f
  403fb1:	3b d8                	cmp    ebx,eax
  403fb3:	75 0e                	jne    0x403fc3
  403fb5:	e8 38 02 00 00       	call   0x4041f2
  403fba:	8b d8                	mov    ebx,eax
  403fbc:	85 db                	test   ebx,ebx
  403fbe:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  403fc1:	74 14                	je     0x403fd7
  403fc3:	53                   	push   ebx
  403fc4:	e8 da 02 00 00       	call   0x4042a3
  403fc9:	59                   	pop    ecx
  403fca:	8b 4b 10             	mov    ecx,DWORD PTR [ebx+0x10]
  403fcd:	89 01                	mov    DWORD PTR [ecx],eax
  403fcf:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
  403fd2:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
  403fd5:	75 07                	jne    0x403fde
  403fd7:	33 c0                	xor    eax,eax
  403fd9:	e9 0f 02 00 00       	jmp    0x4041ed
  403fde:	89 1d 18 81 40 00    	mov    DWORD PTR ds:0x408118,ebx
  403fe4:	8b 43 10             	mov    eax,DWORD PTR [ebx+0x10]
  403fe7:	8b 10                	mov    edx,DWORD PTR [eax]
  403fe9:	83 fa ff             	cmp    edx,0xffffffff
  403fec:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
  403fef:	74 14                	je     0x404005
  403ff1:	8b 8c 90 c4 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xc4]
  403ff8:	8b 7c 90 44          	mov    edi,DWORD PTR [eax+edx*4+0x44]
  403ffc:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  403fff:	23 fe                	and    edi,esi
  404001:	0b cf                	or     ecx,edi
  404003:	75 37                	jne    0x40403c
  404005:	8b 90 c4 00 00 00    	mov    edx,DWORD PTR [eax+0xc4]
  40400b:	8b 70 44             	mov    esi,DWORD PTR [eax+0x44]
  40400e:	23 55 f8             	and    edx,DWORD PTR [ebp-0x8]
  404011:	23 75 f4             	and    esi,DWORD PTR [ebp-0xc]
  404014:	83 65 fc 00          	and    DWORD PTR [ebp-0x4],0x0
  404018:	8d 48 44             	lea    ecx,[eax+0x44]
  40401b:	0b d6                	or     edx,esi
  40401d:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
  404020:	75 17                	jne    0x404039
  404022:	8b 91 84 00 00 00    	mov    edx,DWORD PTR [ecx+0x84]
  404028:	ff 45 fc             	inc    DWORD PTR [ebp-0x4]
  40402b:	23 55 f8             	and    edx,DWORD PTR [ebp-0x8]
  40402e:	83 c1 04             	add    ecx,0x4
  404031:	8b fe                	mov    edi,esi
  404033:	23 39                	and    edi,DWORD PTR [ecx]
  404035:	0b d7                	or     edx,edi
  404037:	74 e9                	je     0x404022
  404039:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  40403c:	8b ca                	mov    ecx,edx
  40403e:	33 ff                	xor    edi,edi
  404040:	69 c9 04 02 00 00    	imul   ecx,ecx,0x204
  404046:	8d 8c 01 44 01 00 00 	lea    ecx,[ecx+eax*1+0x144]
  40404d:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  404050:	8b 4c 90 44          	mov    ecx,DWORD PTR [eax+edx*4+0x44]
  404054:	23 ce                	and    ecx,esi
  404056:	75 0d                	jne    0x404065
  404058:	8b 8c 90 c4 00 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0xc4]
  40405f:	6a 20                	push   0x20
  404061:	23 4d f8             	and    ecx,DWORD PTR [ebp-0x8]
  404064:	5f                   	pop    edi
  404065:	85 c9                	test   ecx,ecx
  404067:	7c 05                	jl     0x40406e
  404069:	d1 e1                	shl    ecx,1
  40406b:	47                   	inc    edi
  40406c:	eb f7                	jmp    0x404065
  40406e:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  404071:	8b 54 f9 04          	mov    edx,DWORD PTR [ecx+edi*8+0x4]
  404075:	8b 0a                	mov    ecx,DWORD PTR [edx]
  404077:	2b 4d f0             	sub    ecx,DWORD PTR [ebp-0x10]
  40407a:	8b f1                	mov    esi,ecx
  40407c:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
  40407f:	c1 fe 04             	sar    esi,0x4
  404082:	4e                   	dec    esi
  404083:	83 fe 3f             	cmp    esi,0x3f
  404086:	7e 03                	jle    0x40408b
  404088:	6a 3f                	push   0x3f
  40408a:	5e                   	pop    esi
  40408b:	3b f7                	cmp    esi,edi
  40408d:	0f 84 0d 01 00 00    	je     0x4041a0
  404093:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  404096:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
  404099:	75 61                	jne    0x4040fc
  40409b:	83 ff 20             	cmp    edi,0x20
  40409e:	7d 2b                	jge    0x4040cb
  4040a0:	bb 00 00 00 80       	mov    ebx,0x80000000
  4040a5:	8b cf                	mov    ecx,edi
  4040a7:	d3 eb                	shr    ebx,cl
  4040a9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4040ac:	8d 7c 38 04          	lea    edi,[eax+edi*1+0x4]
  4040b0:	f7 d3                	not    ebx
  4040b2:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
  4040b5:	23 5c 88 44          	and    ebx,DWORD PTR [eax+ecx*4+0x44]
  4040b9:	89 5c 88 44          	mov    DWORD PTR [eax+ecx*4+0x44],ebx
  4040bd:	fe 0f                	dec    BYTE PTR [edi]
  4040bf:	75 38                	jne    0x4040f9
  4040c1:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  4040c4:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  4040c7:	21 0b                	and    DWORD PTR [ebx],ecx
  4040c9:	eb 31                	jmp    0x4040fc
  4040cb:	8d 4f e0             	lea    ecx,[edi-0x20]
  4040ce:	bb 00 00 00 80       	mov    ebx,0x80000000
  4040d3:	d3 eb                	shr    ebx,cl
  4040d5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4040d8:	8d 7c 38 04          	lea    edi,[eax+edi*1+0x4]
  4040dc:	8d 8c 88 c4 00 00 00 	lea    ecx,[eax+ecx*4+0xc4]
  4040e3:	f7 d3                	not    ebx
  4040e5:	21 19                	and    DWORD PTR [ecx],ebx
  4040e7:	fe 0f                	dec    BYTE PTR [edi]
  4040e9:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
  4040ec:	75 0b                	jne    0x4040f9
  4040ee:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  4040f1:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
  4040f4:	21 4b 04             	and    DWORD PTR [ebx+0x4],ecx
  4040f7:	eb 03                	jmp    0x4040fc
  4040f9:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  4040fc:	8b 4a 08             	mov    ecx,DWORD PTR [edx+0x8]
  4040ff:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  404102:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
  404106:	89 79 04             	mov    DWORD PTR [ecx+0x4],edi
  404109:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40410c:	8b 7a 08             	mov    edi,DWORD PTR [edx+0x8]
  40410f:	89 79 08             	mov    DWORD PTR [ecx+0x8],edi
  404112:	0f 84 94 00 00 00    	je     0x4041ac
  404118:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  40411b:	8b 7c f1 04          	mov    edi,DWORD PTR [ecx+esi*8+0x4]
  40411f:	8d 0c f1             	lea    ecx,[ecx+esi*8]
  404122:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
  404125:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  404128:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  40412b:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  40412e:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  404131:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  404134:	3b 4a 08             	cmp    ecx,DWORD PTR [edx+0x8]
  404137:	75 64                	jne    0x40419d
  404139:	8a 4c 06 04          	mov    cl,BYTE PTR [esi+eax*1+0x4]
  40413d:	83 fe 20             	cmp    esi,0x20
  404140:	88 4d 0b             	mov    BYTE PTR [ebp+0xb],cl
  404143:	7d 29                	jge    0x40416e
  404145:	fe c1                	inc    cl
  404147:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
  40414b:	88 4c 06 04          	mov    BYTE PTR [esi+eax*1+0x4],cl
  40414f:	75 0b                	jne    0x40415c
  404151:	bf 00 00 00 80       	mov    edi,0x80000000
  404156:	8b ce                	mov    ecx,esi
  404158:	d3 ef                	shr    edi,cl
  40415a:	09 3b                	or     DWORD PTR [ebx],edi
  40415c:	bf 00 00 00 80       	mov    edi,0x80000000
  404161:	8b ce                	mov    ecx,esi
  404163:	d3 ef                	shr    edi,cl
  404165:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  404168:	09 7c 88 44          	or     DWORD PTR [eax+ecx*4+0x44],edi
  40416c:	eb 2f                	jmp    0x40419d
  40416e:	fe c1                	inc    cl
  404170:	80 7d 0b 00          	cmp    BYTE PTR [ebp+0xb],0x0
  404174:	88 4c 06 04          	mov    BYTE PTR [esi+eax*1+0x4],cl
  404178:	75 0d                	jne    0x404187
  40417a:	8d 4e e0             	lea    ecx,[esi-0x20]
  40417d:	bf 00 00 00 80       	mov    edi,0x80000000
  404182:	d3 ef                	shr    edi,cl
  404184:	09 7b 04             	or     DWORD PTR [ebx+0x4],edi
  404187:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  40418a:	8d bc 88 c4 00 00 00 	lea    edi,[eax+ecx*4+0xc4]
  404191:	8d 4e e0             	lea    ecx,[esi-0x20]
  404194:	be 00 00 00 80       	mov    esi,0x80000000
  404199:	d3 ee                	shr    esi,cl
  40419b:	09 37                	or     DWORD PTR [edi],esi
  40419d:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  4041a0:	85 c9                	test   ecx,ecx
  4041a2:	74 0b                	je     0x4041af
  4041a4:	89 0a                	mov    DWORD PTR [edx],ecx
  4041a6:	89 4c 11 fc          	mov    DWORD PTR [ecx+edx*1-0x4],ecx
  4041aa:	eb 03                	jmp    0x4041af
  4041ac:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
  4041af:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
  4041b2:	03 d1                	add    edx,ecx
  4041b4:	8d 4e 01             	lea    ecx,[esi+0x1]
  4041b7:	89 0a                	mov    DWORD PTR [edx],ecx
  4041b9:	89 4c 32 fc          	mov    DWORD PTR [edx+esi*1-0x4],ecx
  4041bd:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
  4041c0:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4041c2:	85 c9                	test   ecx,ecx
  4041c4:	8d 79 01             	lea    edi,[ecx+0x1]
  4041c7:	89 3e                	mov    DWORD PTR [esi],edi
  4041c9:	75 1a                	jne    0x4041e5
  4041cb:	3b 1d 1c 81 40 00    	cmp    ebx,DWORD PTR ds:0x40811c
  4041d1:	75 12                	jne    0x4041e5
  4041d3:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4041d6:	3b 0d 14 81 40 00    	cmp    ecx,DWORD PTR ds:0x408114
  4041dc:	75 07                	jne    0x4041e5
  4041de:	83 25 1c 81 40 00 00 	and    DWORD PTR ds:0x40811c,0x0
  4041e5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  4041e8:	89 08                	mov    DWORD PTR [eax],ecx
  4041ea:	8d 42 04             	lea    eax,[edx+0x4]
  4041ed:	5f                   	pop    edi
  4041ee:	5e                   	pop    esi
  4041ef:	5b                   	pop    ebx
  4041f0:	c9                   	leave
  4041f1:	c3                   	ret
  4041f2:	a1 20 81 40 00       	mov    eax,ds:0x408120
  4041f7:	8b 0d 10 81 40 00    	mov    ecx,DWORD PTR ds:0x408110
  4041fd:	56                   	push   esi
  4041fe:	57                   	push   edi
  4041ff:	33 ff                	xor    edi,edi
  404201:	3b c1                	cmp    eax,ecx
  404203:	75 30                	jne    0x404235
  404205:	8d 44 89 50          	lea    eax,[ecx+ecx*4+0x50]
  404209:	c1 e0 02             	shl    eax,0x2
  40420c:	50                   	push   eax
  40420d:	ff 35 24 81 40 00    	push   DWORD PTR ds:0x408124
  404213:	57                   	push   edi
  404214:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  40421a:	ff 15 c8 60 40 00    	call   DWORD PTR ds:0x4060c8
  404220:	3b c7                	cmp    eax,edi
  404222:	74 61                	je     0x404285
  404224:	83 05 10 81 40 00 10 	add    DWORD PTR ds:0x408110,0x10
  40422b:	a3 24 81 40 00       	mov    ds:0x408124,eax
  404230:	a1 20 81 40 00       	mov    eax,ds:0x408120
  404235:	8b 0d 24 81 40 00    	mov    ecx,DWORD PTR ds:0x408124
  40423b:	68 c4 41 00 00       	push   0x41c4
  404240:	6a 08                	push   0x8
  404242:	8d 04 80             	lea    eax,[eax+eax*4]
  404245:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  40424b:	8d 34 81             	lea    esi,[ecx+eax*4]
  40424e:	ff 15 c0 60 40 00    	call   DWORD PTR ds:0x4060c0
  404254:	3b c7                	cmp    eax,edi
  404256:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  404259:	74 2a                	je     0x404285
  40425b:	6a 04                	push   0x4
  40425d:	68 00 20 00 00       	push   0x2000
  404262:	68 00 00 10 00       	push   0x100000
  404267:	57                   	push   edi
  404268:	ff 15 c4 60 40 00    	call   DWORD PTR ds:0x4060c4
  40426e:	3b c7                	cmp    eax,edi
  404270:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  404273:	75 14                	jne    0x404289
  404275:	ff 76 10             	push   DWORD PTR [esi+0x10]
  404278:	57                   	push   edi
  404279:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  40427f:	ff 15 a0 60 40 00    	call   DWORD PTR ds:0x4060a0
  404285:	33 c0                	xor    eax,eax
  404287:	eb 17                	jmp    0x4042a0
  404289:	83 4e 08 ff          	or     DWORD PTR [esi+0x8],0xffffffff
  40428d:	89 3e                	mov    DWORD PTR [esi],edi
  40428f:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  404292:	ff 05 20 81 40 00    	inc    DWORD PTR ds:0x408120
  404298:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  40429b:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  40429e:	8b c6                	mov    eax,esi
  4042a0:	5f                   	pop    edi
  4042a1:	5e                   	pop    esi
  4042a2:	c3                   	ret
  4042a3:	55                   	push   ebp
  4042a4:	8b ec                	mov    ebp,esp
  4042a6:	51                   	push   ecx
  4042a7:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  4042aa:	53                   	push   ebx
  4042ab:	56                   	push   esi
  4042ac:	57                   	push   edi
  4042ad:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
  4042b0:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
  4042b3:	33 db                	xor    ebx,ebx
  4042b5:	85 c0                	test   eax,eax
  4042b7:	7c 05                	jl     0x4042be
  4042b9:	d1 e0                	shl    eax,1
  4042bb:	43                   	inc    ebx
  4042bc:	eb f7                	jmp    0x4042b5
  4042be:	8b c3                	mov    eax,ebx
  4042c0:	6a 3f                	push   0x3f
  4042c2:	69 c0 04 02 00 00    	imul   eax,eax,0x204
  4042c8:	5a                   	pop    edx
  4042c9:	8d 84 30 44 01 00 00 	lea    eax,[eax+esi*1+0x144]
  4042d0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  4042d3:	89 40 08             	mov    DWORD PTR [eax+0x8],eax
  4042d6:	89 40 04             	mov    DWORD PTR [eax+0x4],eax
  4042d9:	83 c0 08             	add    eax,0x8
  4042dc:	4a                   	dec    edx
  4042dd:	75 f4                	jne    0x4042d3
  4042df:	8b fb                	mov    edi,ebx
  4042e1:	6a 04                	push   0x4
  4042e3:	c1 e7 0f             	shl    edi,0xf
  4042e6:	03 79 0c             	add    edi,DWORD PTR [ecx+0xc]
  4042e9:	68 00 10 00 00       	push   0x1000
  4042ee:	68 00 80 00 00       	push   0x8000
  4042f3:	57                   	push   edi
  4042f4:	ff 15 c4 60 40 00    	call   DWORD PTR ds:0x4060c4
  4042fa:	85 c0                	test   eax,eax
  4042fc:	75 08                	jne    0x404306
  4042fe:	83 c8 ff             	or     eax,0xffffffff
  404301:	e9 93 00 00 00       	jmp    0x404399
  404306:	8d 97 00 70 00 00    	lea    edx,[edi+0x7000]
  40430c:	3b fa                	cmp    edi,edx
  40430e:	77 3c                	ja     0x40434c
  404310:	8d 47 10             	lea    eax,[edi+0x10]
  404313:	83 48 f8 ff          	or     DWORD PTR [eax-0x8],0xffffffff
  404317:	83 88 ec 0f 00 00 ff 	or     DWORD PTR [eax+0xfec],0xffffffff
  40431e:	8d 88 fc 0f 00 00    	lea    ecx,[eax+0xffc]
  404324:	c7 40 fc f0 0f 00 00 	mov    DWORD PTR [eax-0x4],0xff0
  40432b:	89 08                	mov    DWORD PTR [eax],ecx
  40432d:	8d 88 fc ef ff ff    	lea    ecx,[eax-0x1004]
  404333:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  404336:	c7 80 e8 0f 00 00 f0 	mov    DWORD PTR [eax+0xfe8],0xff0
  40433d:	0f 00 00 
  404340:	05 00 10 00 00       	add    eax,0x1000
  404345:	8d 48 f0             	lea    ecx,[eax-0x10]
  404348:	3b ca                	cmp    ecx,edx
  40434a:	76 c7                	jbe    0x404313
  40434c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  40434f:	8d 4f 0c             	lea    ecx,[edi+0xc]
  404352:	05 f8 01 00 00       	add    eax,0x1f8
  404357:	6a 01                	push   0x1
  404359:	5f                   	pop    edi
  40435a:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  40435d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  404360:	8d 4a 0c             	lea    ecx,[edx+0xc]
  404363:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  404366:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  404369:	83 64 9e 44 00       	and    DWORD PTR [esi+ebx*4+0x44],0x0
  40436e:	89 bc 9e c4 00 00 00 	mov    DWORD PTR [esi+ebx*4+0xc4],edi
  404375:	8a 46 43             	mov    al,BYTE PTR [esi+0x43]
  404378:	8a c8                	mov    cl,al
  40437a:	fe c1                	inc    cl
  40437c:	84 c0                	test   al,al
  40437e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  404381:	88 4e 43             	mov    BYTE PTR [esi+0x43],cl
  404384:	75 03                	jne    0x404389
  404386:	09 78 04             	or     DWORD PTR [eax+0x4],edi
  404389:	ba 00 00 00 80       	mov    edx,0x80000000
  40438e:	8b cb                	mov    ecx,ebx
  404390:	d3 ea                	shr    edx,cl
  404392:	f7 d2                	not    edx
  404394:	21 50 08             	and    DWORD PTR [eax+0x8],edx
  404397:	8b c3                	mov    eax,ebx
  404399:	5f                   	pop    edi
  40439a:	5e                   	pop    esi
  40439b:	5b                   	pop    ebx
  40439c:	c9                   	leave
  40439d:	c3                   	ret
  40439e:	53                   	push   ebx
  40439f:	33 db                	xor    ebx,ebx
  4043a1:	39 1d d4 80 40 00    	cmp    DWORD PTR ds:0x4080d4,ebx
  4043a7:	56                   	push   esi
  4043a8:	57                   	push   edi
  4043a9:	75 42                	jne    0x4043ed
  4043ab:	68 b8 64 40 00       	push   0x4064b8
  4043b0:	ff 15 90 60 40 00    	call   DWORD PTR ds:0x406090
  4043b6:	8b f8                	mov    edi,eax
  4043b8:	3b fb                	cmp    edi,ebx
  4043ba:	74 67                	je     0x404423
  4043bc:	8b 35 50 60 40 00    	mov    esi,DWORD PTR ds:0x406050
  4043c2:	68 ac 64 40 00       	push   0x4064ac
  4043c7:	57                   	push   edi
  4043c8:	ff d6                	call   esi
  4043ca:	85 c0                	test   eax,eax
  4043cc:	a3 d4 80 40 00       	mov    ds:0x4080d4,eax
  4043d1:	74 50                	je     0x404423
  4043d3:	68 9c 64 40 00       	push   0x40649c
  4043d8:	57                   	push   edi
  4043d9:	ff d6                	call   esi
  4043db:	68 88 64 40 00       	push   0x406488
  4043e0:	57                   	push   edi
  4043e1:	a3 d8 80 40 00       	mov    ds:0x4080d8,eax
  4043e6:	ff d6                	call   esi
  4043e8:	a3 dc 80 40 00       	mov    ds:0x4080dc,eax
  4043ed:	a1 d8 80 40 00       	mov    eax,ds:0x4080d8
  4043f2:	85 c0                	test   eax,eax
  4043f4:	74 16                	je     0x40440c
  4043f6:	ff d0                	call   eax
  4043f8:	8b d8                	mov    ebx,eax
  4043fa:	85 db                	test   ebx,ebx
  4043fc:	74 0e                	je     0x40440c
  4043fe:	a1 dc 80 40 00       	mov    eax,ds:0x4080dc
  404403:	85 c0                	test   eax,eax
  404405:	74 05                	je     0x40440c
  404407:	53                   	push   ebx
  404408:	ff d0                	call   eax
  40440a:	8b d8                	mov    ebx,eax
  40440c:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  404410:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  404414:	ff 74 24 18          	push   DWORD PTR [esp+0x18]
  404418:	53                   	push   ebx
  404419:	ff 15 d4 80 40 00    	call   DWORD PTR ds:0x4080d4
  40441f:	5f                   	pop    edi
  404420:	5e                   	pop    esi
  404421:	5b                   	pop    ebx
  404422:	c3                   	ret
  404423:	33 c0                	xor    eax,eax
  404425:	eb f8                	jmp    0x40441f
  404427:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  40442b:	33 d2                	xor    edx,edx
  40442d:	89 0d 68 7f 40 00    	mov    DWORD PTR ds:0x407f68,ecx
  404433:	b8 38 79 40 00       	mov    eax,0x407938
  404438:	3b 08                	cmp    ecx,DWORD PTR [eax]
  40443a:	74 20                	je     0x40445c
  40443c:	83 c0 08             	add    eax,0x8
  40443f:	42                   	inc    edx
  404440:	3d a0 7a 40 00       	cmp    eax,0x407aa0
  404445:	7c f1                	jl     0x404438
  404447:	83 f9 13             	cmp    ecx,0x13
  40444a:	72 1d                	jb     0x404469
  40444c:	83 f9 24             	cmp    ecx,0x24
  40444f:	77 18                	ja     0x404469
  404451:	c7 05 64 7f 40 00 0d 	mov    DWORD PTR ds:0x407f64,0xd
  404458:	00 00 00 
  40445b:	c3                   	ret
  40445c:	8b 04 d5 3c 79 40 00 	mov    eax,DWORD PTR [edx*8+0x40793c]
  404463:	a3 64 7f 40 00       	mov    ds:0x407f64,eax
  404468:	c3                   	ret
  404469:	81 f9 bc 00 00 00    	cmp    ecx,0xbc
  40446f:	72 12                	jb     0x404483
  404471:	81 f9 ca 00 00 00    	cmp    ecx,0xca
  404477:	c7 05 64 7f 40 00 08 	mov    DWORD PTR ds:0x407f64,0x8
  40447e:	00 00 00 
  404481:	76 0a                	jbe    0x40448d
  404483:	c7 05 64 7f 40 00 16 	mov    DWORD PTR ds:0x407f64,0x16
  40448a:	00 00 00 
  40448d:	c3                   	ret
  40448e:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  404492:	56                   	push   esi
  404493:	3b 0d 80 94 40 00    	cmp    ecx,DWORD PTR ds:0x409480
  404499:	57                   	push   edi
  40449a:	73 55                	jae    0x4044f1
  40449c:	8b c1                	mov    eax,ecx
  40449e:	8b f1                	mov    esi,ecx
  4044a0:	c1 f8 05             	sar    eax,0x5
  4044a3:	83 e6 1f             	and    esi,0x1f
  4044a6:	8d 3c 85 80 93 40 00 	lea    edi,[eax*4+0x409380]
  4044ad:	c1 e6 03             	shl    esi,0x3
  4044b0:	8b 07                	mov    eax,DWORD PTR [edi]
  4044b2:	03 c6                	add    eax,esi
  4044b4:	f6 40 04 01          	test   BYTE PTR [eax+0x4],0x1
  4044b8:	74 37                	je     0x4044f1
  4044ba:	83 38 ff             	cmp    DWORD PTR [eax],0xffffffff
  4044bd:	74 32                	je     0x4044f1
  4044bf:	83 3d 34 72 40 00 01 	cmp    DWORD PTR ds:0x407234,0x1
  4044c6:	75 1f                	jne    0x4044e7
  4044c8:	33 c0                	xor    eax,eax
  4044ca:	2b c8                	sub    ecx,eax
  4044cc:	74 10                	je     0x4044de
  4044ce:	49                   	dec    ecx
  4044cf:	74 08                	je     0x4044d9
  4044d1:	49                   	dec    ecx
  4044d2:	75 13                	jne    0x4044e7
  4044d4:	50                   	push   eax
  4044d5:	6a f4                	push   0xfffffff4
  4044d7:	eb 08                	jmp    0x4044e1
  4044d9:	50                   	push   eax
  4044da:	6a f5                	push   0xfffffff5
  4044dc:	eb 03                	jmp    0x4044e1
  4044de:	50                   	push   eax
  4044df:	6a f6                	push   0xfffffff6
  4044e1:	ff 15 48 60 40 00    	call   DWORD PTR ds:0x406048
  4044e7:	8b 07                	mov    eax,DWORD PTR [edi]
  4044e9:	83 0c 30 ff          	or     DWORD PTR [eax+esi*1],0xffffffff
  4044ed:	33 c0                	xor    eax,eax
  4044ef:	eb 14                	jmp    0x404505
  4044f1:	83 25 68 7f 40 00 00 	and    DWORD PTR ds:0x407f68,0x0
  4044f8:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  4044ff:	00 00 00 
  404502:	83 c8 ff             	or     eax,0xffffffff
  404505:	5f                   	pop    edi
  404506:	5e                   	pop    esi
  404507:	c3                   	ret
  404508:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40450c:	3b 05 80 94 40 00    	cmp    eax,DWORD PTR ds:0x409480
  404512:	73 1c                	jae    0x404530
  404514:	8b c8                	mov    ecx,eax
  404516:	83 e0 1f             	and    eax,0x1f
  404519:	c1 f9 05             	sar    ecx,0x5
  40451c:	8b 0c 8d 80 93 40 00 	mov    ecx,DWORD PTR [ecx*4+0x409380]
  404523:	f6 44 c1 04 01       	test   BYTE PTR [ecx+eax*8+0x4],0x1
  404528:	8d 04 c1             	lea    eax,[ecx+eax*8]
  40452b:	74 03                	je     0x404530
  40452d:	8b 00                	mov    eax,DWORD PTR [eax]
  40452f:	c3                   	ret
  404530:	83 25 68 7f 40 00 00 	and    DWORD PTR ds:0x407f68,0x0
  404537:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  40453e:	00 00 00 
  404541:	83 c8 ff             	or     eax,0xffffffff
  404544:	c3                   	ret
  404545:	53                   	push   ebx
  404546:	56                   	push   esi
  404547:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
  40454b:	57                   	push   edi
  40454c:	0f af 74 24 14       	imul   esi,DWORD PTR [esp+0x14]
  404551:	83 fe e0             	cmp    esi,0xffffffe0
  404554:	8b de                	mov    ebx,esi
  404556:	77 0d                	ja     0x404565
  404558:	85 f6                	test   esi,esi
  40455a:	75 03                	jne    0x40455f
  40455c:	6a 01                	push   0x1
  40455e:	5e                   	pop    esi
  40455f:	83 c6 0f             	add    esi,0xf
  404562:	83 e6 f0             	and    esi,0xfffffff0
  404565:	33 ff                	xor    edi,edi
  404567:	83 fe e0             	cmp    esi,0xffffffe0
  40456a:	77 2a                	ja     0x404596
  40456c:	3b 1d 30 79 40 00    	cmp    ebx,DWORD PTR ds:0x407930
  404572:	77 0d                	ja     0x404581
  404574:	53                   	push   ebx
  404575:	e8 6f f9 ff ff       	call   0x403ee9
  40457a:	8b f8                	mov    edi,eax
  40457c:	59                   	pop    ecx
  40457d:	85 ff                	test   edi,edi
  40457f:	75 2b                	jne    0x4045ac
  404581:	56                   	push   esi
  404582:	6a 08                	push   0x8
  404584:	ff 35 64 93 40 00    	push   DWORD PTR ds:0x409364
  40458a:	ff 15 c0 60 40 00    	call   DWORD PTR ds:0x4060c0
  404590:	8b f8                	mov    edi,eax
  404592:	85 ff                	test   edi,edi
  404594:	75 22                	jne    0x4045b8
  404596:	83 3d 08 81 40 00 00 	cmp    DWORD PTR ds:0x408108,0x0
  40459d:	74 19                	je     0x4045b8
  40459f:	56                   	push   esi
  4045a0:	e8 23 05 00 00       	call   0x404ac8
  4045a5:	85 c0                	test   eax,eax
  4045a7:	59                   	pop    ecx
  4045a8:	74 14                	je     0x4045be
  4045aa:	eb b9                	jmp    0x404565
  4045ac:	53                   	push   ebx
  4045ad:	6a 00                	push   0x0
  4045af:	57                   	push   edi
  4045b0:	e8 7b 08 00 00       	call   0x404e30
  4045b5:	83 c4 0c             	add    esp,0xc
  4045b8:	8b c7                	mov    eax,edi
  4045ba:	5f                   	pop    edi
  4045bb:	5e                   	pop    esi
  4045bc:	5b                   	pop    ebx
  4045bd:	c3                   	ret
  4045be:	33 c0                	xor    eax,eax
  4045c0:	eb f8                	jmp    0x4045ba
  4045c2:	56                   	push   esi
  4045c3:	57                   	push   edi
  4045c4:	6a 03                	push   0x3
  4045c6:	33 ff                	xor    edi,edi
  4045c8:	5e                   	pop    esi
  4045c9:	39 35 60 93 40 00    	cmp    DWORD PTR ds:0x409360,esi
  4045cf:	7e 44                	jle    0x404615
  4045d1:	a1 48 83 40 00       	mov    eax,ds:0x408348
  4045d6:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4045d9:	85 c0                	test   eax,eax
  4045db:	74 2f                	je     0x40460c
  4045dd:	f6 40 0c 83          	test   BYTE PTR [eax+0xc],0x83
  4045e1:	74 0d                	je     0x4045f0
  4045e3:	50                   	push   eax
  4045e4:	e8 9f 08 00 00       	call   0x404e88
  4045e9:	83 f8 ff             	cmp    eax,0xffffffff
  4045ec:	59                   	pop    ecx
  4045ed:	74 01                	je     0x4045f0
  4045ef:	47                   	inc    edi
  4045f0:	83 fe 14             	cmp    esi,0x14
  4045f3:	7c 17                	jl     0x40460c
  4045f5:	a1 48 83 40 00       	mov    eax,ds:0x408348
  4045fa:	ff 34 b0             	push   DWORD PTR [eax+esi*4]
  4045fd:	e8 75 f0 ff ff       	call   0x403677
  404602:	a1 48 83 40 00       	mov    eax,ds:0x408348
  404607:	59                   	pop    ecx
  404608:	83 24 b0 00          	and    DWORD PTR [eax+esi*4],0x0
  40460c:	46                   	inc    esi
  40460d:	3b 35 60 93 40 00    	cmp    esi,DWORD PTR ds:0x409360
  404613:	7c bc                	jl     0x4045d1
  404615:	8b c7                	mov    eax,edi
  404617:	5f                   	pop    edi
  404618:	5e                   	pop    esi
  404619:	c3                   	ret
  40461a:	56                   	push   esi
  40461b:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  40461f:	85 f6                	test   esi,esi
  404621:	75 09                	jne    0x40462c
  404623:	56                   	push   esi
  404624:	e8 91 00 00 00       	call   0x4046ba
  404629:	59                   	pop    ecx
  40462a:	5e                   	pop    esi
  40462b:	c3                   	ret
  40462c:	56                   	push   esi
  40462d:	e8 23 00 00 00       	call   0x404655
  404632:	85 c0                	test   eax,eax
  404634:	59                   	pop    ecx
  404635:	74 05                	je     0x40463c
  404637:	83 c8 ff             	or     eax,0xffffffff
  40463a:	5e                   	pop    esi
  40463b:	c3                   	ret
  40463c:	f6 46 0d 40          	test   BYTE PTR [esi+0xd],0x40
  404640:	74 0f                	je     0x404651
  404642:	ff 76 10             	push   DWORD PTR [esi+0x10]
  404645:	e8 94 08 00 00       	call   0x404ede
  40464a:	f7 d8                	neg    eax
  40464c:	59                   	pop    ecx
  40464d:	5e                   	pop    esi
  40464e:	1b c0                	sbb    eax,eax
  404650:	c3                   	ret
  404651:	33 c0                	xor    eax,eax
  404653:	5e                   	pop    esi
  404654:	c3                   	ret
  404655:	53                   	push   ebx
  404656:	56                   	push   esi
  404657:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
  40465b:	33 db                	xor    ebx,ebx
  40465d:	57                   	push   edi
  40465e:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  404661:	8b c8                	mov    ecx,eax
  404663:	83 e1 03             	and    ecx,0x3
  404666:	80 f9 02             	cmp    cl,0x2
  404669:	75 37                	jne    0x4046a2
  40466b:	66 a9 08 01          	test   ax,0x108
  40466f:	74 31                	je     0x4046a2
  404671:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  404674:	8b 3e                	mov    edi,DWORD PTR [esi]
  404676:	2b f8                	sub    edi,eax
  404678:	85 ff                	test   edi,edi
  40467a:	7e 26                	jle    0x4046a2
  40467c:	57                   	push   edi
  40467d:	50                   	push   eax
  40467e:	ff 76 10             	push   DWORD PTR [esi+0x10]
  404681:	e8 28 e7 ff ff       	call   0x402dae
  404686:	83 c4 0c             	add    esp,0xc
  404689:	3b c7                	cmp    eax,edi
  40468b:	75 0e                	jne    0x40469b
  40468d:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  404690:	a8 80                	test   al,0x80
  404692:	74 0e                	je     0x4046a2
  404694:	24 fd                	and    al,0xfd
  404696:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  404699:	eb 07                	jmp    0x4046a2
  40469b:	83 4e 0c 20          	or     DWORD PTR [esi+0xc],0x20
  40469f:	83 cb ff             	or     ebx,0xffffffff
  4046a2:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  4046a5:	83 66 04 00          	and    DWORD PTR [esi+0x4],0x0
  4046a9:	89 06                	mov    DWORD PTR [esi],eax
  4046ab:	5f                   	pop    edi
  4046ac:	8b c3                	mov    eax,ebx
  4046ae:	5e                   	pop    esi
  4046af:	5b                   	pop    ebx
  4046b0:	c3                   	ret
  4046b1:	6a 01                	push   0x1
  4046b3:	e8 02 00 00 00       	call   0x4046ba
  4046b8:	59                   	pop    ecx
  4046b9:	c3                   	ret
  4046ba:	53                   	push   ebx
  4046bb:	56                   	push   esi
  4046bc:	57                   	push   edi
  4046bd:	33 f6                	xor    esi,esi
  4046bf:	33 db                	xor    ebx,ebx
  4046c1:	33 ff                	xor    edi,edi
  4046c3:	39 35 60 93 40 00    	cmp    DWORD PTR ds:0x409360,esi
  4046c9:	7e 4d                	jle    0x404718
  4046cb:	a1 48 83 40 00       	mov    eax,ds:0x408348
  4046d0:	8b 04 b0             	mov    eax,DWORD PTR [eax+esi*4]
  4046d3:	85 c0                	test   eax,eax
  4046d5:	74 38                	je     0x40470f
  4046d7:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
  4046da:	f6 c1 83             	test   cl,0x83
  4046dd:	74 30                	je     0x40470f
  4046df:	83 7c 24 10 01       	cmp    DWORD PTR [esp+0x10],0x1
  4046e4:	75 0f                	jne    0x4046f5
  4046e6:	50                   	push   eax
  4046e7:	e8 2e ff ff ff       	call   0x40461a
  4046ec:	83 f8 ff             	cmp    eax,0xffffffff
  4046ef:	59                   	pop    ecx
  4046f0:	74 1d                	je     0x40470f
  4046f2:	43                   	inc    ebx
  4046f3:	eb 1a                	jmp    0x40470f
  4046f5:	83 7c 24 10 00       	cmp    DWORD PTR [esp+0x10],0x0
  4046fa:	75 13                	jne    0x40470f
  4046fc:	f6 c1 02             	test   cl,0x2
  4046ff:	74 0e                	je     0x40470f
  404701:	50                   	push   eax
  404702:	e8 13 ff ff ff       	call   0x40461a
  404707:	83 f8 ff             	cmp    eax,0xffffffff
  40470a:	59                   	pop    ecx
  40470b:	75 02                	jne    0x40470f
  40470d:	0b f8                	or     edi,eax
  40470f:	46                   	inc    esi
  404710:	3b 35 60 93 40 00    	cmp    esi,DWORD PTR ds:0x409360
  404716:	7c b3                	jl     0x4046cb
  404718:	83 7c 24 10 01       	cmp    DWORD PTR [esp+0x10],0x1
  40471d:	8b c3                	mov    eax,ebx
  40471f:	74 02                	je     0x404723
  404721:	8b c7                	mov    eax,edi
  404723:	5f                   	pop    edi
  404724:	5e                   	pop    esi
  404725:	5b                   	pop    ebx
  404726:	c3                   	ret
  404727:	6a 02                	push   0x2
  404729:	e8 26 d1 ff ff       	call   0x401854
  40472e:	59                   	pop    ecx
  40472f:	c3                   	ret
  404730:	55                   	push   ebp
  404731:	8b ec                	mov    ebp,esp
  404733:	6a ff                	push   0xffffffff
  404735:	68 d0 64 40 00       	push   0x4064d0
  40473a:	68 b0 2a 40 00       	push   0x402ab0
  40473f:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  404745:	50                   	push   eax
  404746:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40474d:	83 ec 1c             	sub    esp,0x1c
  404750:	53                   	push   ebx
  404751:	56                   	push   esi
  404752:	57                   	push   edi
  404753:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  404756:	33 ff                	xor    edi,edi
  404758:	39 3d 00 81 40 00    	cmp    DWORD PTR ds:0x408100,edi
  40475e:	75 46                	jne    0x4047a6
  404760:	57                   	push   edi
  404761:	57                   	push   edi
  404762:	6a 01                	push   0x1
  404764:	5b                   	pop    ebx
  404765:	53                   	push   ebx
  404766:	68 c8 64 40 00       	push   0x4064c8
  40476b:	be 00 01 00 00       	mov    esi,0x100
  404770:	56                   	push   esi
  404771:	57                   	push   edi
  404772:	ff 15 3c 60 40 00    	call   DWORD PTR ds:0x40603c
  404778:	85 c0                	test   eax,eax
  40477a:	74 08                	je     0x404784
  40477c:	89 1d 00 81 40 00    	mov    DWORD PTR ds:0x408100,ebx
  404782:	eb 22                	jmp    0x4047a6
  404784:	57                   	push   edi
  404785:	57                   	push   edi
  404786:	53                   	push   ebx
  404787:	68 c4 64 40 00       	push   0x4064c4
  40478c:	56                   	push   esi
  40478d:	57                   	push   edi
  40478e:	ff 15 4c 60 40 00    	call   DWORD PTR ds:0x40604c
  404794:	85 c0                	test   eax,eax
  404796:	0f 84 22 01 00 00    	je     0x4048be
  40479c:	c7 05 00 81 40 00 02 	mov    DWORD PTR ds:0x408100,0x2
  4047a3:	00 00 00 
  4047a6:	39 7d 14             	cmp    DWORD PTR [ebp+0x14],edi
  4047a9:	7e 10                	jle    0x4047bb
  4047ab:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  4047ae:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4047b1:	e8 9e 01 00 00       	call   0x404954
  4047b6:	59                   	pop    ecx
  4047b7:	59                   	pop    ecx
  4047b8:	89 45 14             	mov    DWORD PTR [ebp+0x14],eax
  4047bb:	a1 00 81 40 00       	mov    eax,ds:0x408100
  4047c0:	83 f8 02             	cmp    eax,0x2
  4047c3:	75 1d                	jne    0x4047e2
  4047c5:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  4047c8:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  4047cb:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  4047ce:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4047d1:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4047d4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4047d7:	ff 15 4c 60 40 00    	call   DWORD PTR ds:0x40604c
  4047dd:	e9 de 00 00 00       	jmp    0x4048c0
  4047e2:	83 f8 01             	cmp    eax,0x1
  4047e5:	0f 85 d3 00 00 00    	jne    0x4048be
  4047eb:	39 7d 20             	cmp    DWORD PTR [ebp+0x20],edi
  4047ee:	75 08                	jne    0x4047f8
  4047f0:	a1 f8 80 40 00       	mov    eax,ds:0x4080f8
  4047f5:	89 45 20             	mov    DWORD PTR [ebp+0x20],eax
  4047f8:	57                   	push   edi
  4047f9:	57                   	push   edi
  4047fa:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  4047fd:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  404800:	8b 45 24             	mov    eax,DWORD PTR [ebp+0x24]
  404803:	f7 d8                	neg    eax
  404805:	1b c0                	sbb    eax,eax
  404807:	83 e0 08             	and    eax,0x8
  40480a:	40                   	inc    eax
  40480b:	50                   	push   eax
  40480c:	ff 75 20             	push   DWORD PTR [ebp+0x20]
  40480f:	ff 15 44 60 40 00    	call   DWORD PTR ds:0x406044
  404815:	8b d8                	mov    ebx,eax
  404817:	89 5d e4             	mov    DWORD PTR [ebp-0x1c],ebx
  40481a:	3b df                	cmp    ebx,edi
  40481c:	0f 84 9c 00 00 00    	je     0x4048be
  404822:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
  404825:	8d 04 1b             	lea    eax,[ebx+ebx*1]
  404828:	83 c0 03             	add    eax,0x3
  40482b:	24 fc                	and    al,0xfc
  40482d:	e8 0e 07 00 00       	call   0x404f40
  404832:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  404835:	8b c4                	mov    eax,esp
  404837:	89 45 dc             	mov    DWORD PTR [ebp-0x24],eax
  40483a:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  40483e:	eb 13                	jmp    0x404853
  404840:	6a 01                	push   0x1
  404842:	58                   	pop    eax
  404843:	c3                   	ret
  404844:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  404847:	33 ff                	xor    edi,edi
  404849:	89 7d dc             	mov    DWORD PTR [ebp-0x24],edi
  40484c:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  404850:	8b 5d e4             	mov    ebx,DWORD PTR [ebp-0x1c]
  404853:	39 7d dc             	cmp    DWORD PTR [ebp-0x24],edi
  404856:	74 66                	je     0x4048be
  404858:	53                   	push   ebx
  404859:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  40485c:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40485f:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  404862:	6a 01                	push   0x1
  404864:	ff 75 20             	push   DWORD PTR [ebp+0x20]
  404867:	ff 15 44 60 40 00    	call   DWORD PTR ds:0x406044
  40486d:	85 c0                	test   eax,eax
  40486f:	74 4d                	je     0x4048be
  404871:	57                   	push   edi
  404872:	57                   	push   edi
  404873:	53                   	push   ebx
  404874:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  404877:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  40487a:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40487d:	ff 15 3c 60 40 00    	call   DWORD PTR ds:0x40603c
  404883:	8b f0                	mov    esi,eax
  404885:	89 75 d8             	mov    DWORD PTR [ebp-0x28],esi
  404888:	3b f7                	cmp    esi,edi
  40488a:	74 32                	je     0x4048be
  40488c:	f6 45 0d 04          	test   BYTE PTR [ebp+0xd],0x4
  404890:	74 40                	je     0x4048d2
  404892:	39 7d 1c             	cmp    DWORD PTR [ebp+0x1c],edi
  404895:	0f 84 b2 00 00 00    	je     0x40494d
  40489b:	3b 75 1c             	cmp    esi,DWORD PTR [ebp+0x1c]
  40489e:	7f 1e                	jg     0x4048be
  4048a0:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  4048a3:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  4048a6:	53                   	push   ebx
  4048a7:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  4048aa:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4048ad:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4048b0:	ff 15 3c 60 40 00    	call   DWORD PTR ds:0x40603c
  4048b6:	85 c0                	test   eax,eax
  4048b8:	0f 85 8f 00 00 00    	jne    0x40494d
  4048be:	33 c0                	xor    eax,eax
  4048c0:	8d 65 c8             	lea    esp,[ebp-0x38]
  4048c3:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  4048c6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4048cd:	5f                   	pop    edi
  4048ce:	5e                   	pop    esi
  4048cf:	5b                   	pop    ebx
  4048d0:	c9                   	leave
  4048d1:	c3                   	ret
  4048d2:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  4048d9:	8d 04 36             	lea    eax,[esi+esi*1]
  4048dc:	83 c0 03             	add    eax,0x3
  4048df:	24 fc                	and    al,0xfc
  4048e1:	e8 5a 06 00 00       	call   0x404f40
  4048e6:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  4048e9:	8b dc                	mov    ebx,esp
  4048eb:	89 5d e0             	mov    DWORD PTR [ebp-0x20],ebx
  4048ee:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  4048f2:	eb 12                	jmp    0x404906
  4048f4:	6a 01                	push   0x1
  4048f6:	58                   	pop    eax
  4048f7:	c3                   	ret
  4048f8:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  4048fb:	33 ff                	xor    edi,edi
  4048fd:	33 db                	xor    ebx,ebx
  4048ff:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  404903:	8b 75 d8             	mov    esi,DWORD PTR [ebp-0x28]
  404906:	3b df                	cmp    ebx,edi
  404908:	74 b4                	je     0x4048be
  40490a:	56                   	push   esi
  40490b:	53                   	push   ebx
  40490c:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  40490f:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
  404912:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  404915:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404918:	ff 15 3c 60 40 00    	call   DWORD PTR ds:0x40603c
  40491e:	85 c0                	test   eax,eax
  404920:	74 9c                	je     0x4048be
  404922:	39 7d 1c             	cmp    DWORD PTR [ebp+0x1c],edi
  404925:	57                   	push   edi
  404926:	57                   	push   edi
  404927:	75 04                	jne    0x40492d
  404929:	57                   	push   edi
  40492a:	57                   	push   edi
  40492b:	eb 06                	jmp    0x404933
  40492d:	ff 75 1c             	push   DWORD PTR [ebp+0x1c]
  404930:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  404933:	56                   	push   esi
  404934:	53                   	push   ebx
  404935:	68 20 02 00 00       	push   0x220
  40493a:	ff 75 20             	push   DWORD PTR [ebp+0x20]
  40493d:	ff 15 80 60 40 00    	call   DWORD PTR ds:0x406080
  404943:	8b f0                	mov    esi,eax
  404945:	3b f7                	cmp    esi,edi
  404947:	0f 84 71 ff ff ff    	je     0x4048be
  40494d:	8b c6                	mov    eax,esi
  40494f:	e9 6c ff ff ff       	jmp    0x4048c0
  404954:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  404958:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  40495c:	85 d2                	test   edx,edx
  40495e:	56                   	push   esi
  40495f:	8d 4a ff             	lea    ecx,[edx-0x1]
  404962:	74 0d                	je     0x404971
  404964:	80 38 00             	cmp    BYTE PTR [eax],0x0
  404967:	74 08                	je     0x404971
  404969:	40                   	inc    eax
  40496a:	8b f1                	mov    esi,ecx
  40496c:	49                   	dec    ecx
  40496d:	85 f6                	test   esi,esi
  40496f:	75 f3                	jne    0x404964
  404971:	80 38 00             	cmp    BYTE PTR [eax],0x0
  404974:	5e                   	pop    esi
  404975:	75 05                	jne    0x40497c
  404977:	2b 44 24 04          	sub    eax,DWORD PTR [esp+0x4]
  40497b:	c3                   	ret
  40497c:	8b c2                	mov    eax,edx
  40497e:	c3                   	ret
  40497f:	55                   	push   ebp
  404980:	8b ec                	mov    ebp,esp
  404982:	6a ff                	push   0xffffffff
  404984:	68 e8 64 40 00       	push   0x4064e8
  404989:	68 b0 2a 40 00       	push   0x402ab0
  40498e:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  404994:	50                   	push   eax
  404995:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  40499c:	83 ec 18             	sub    esp,0x18
  40499f:	53                   	push   ebx
  4049a0:	56                   	push   esi
  4049a1:	57                   	push   edi
  4049a2:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  4049a5:	a1 04 81 40 00       	mov    eax,ds:0x408104
  4049aa:	33 db                	xor    ebx,ebx
  4049ac:	3b c3                	cmp    eax,ebx
  4049ae:	75 3e                	jne    0x4049ee
  4049b0:	8d 45 e4             	lea    eax,[ebp-0x1c]
  4049b3:	50                   	push   eax
  4049b4:	6a 01                	push   0x1
  4049b6:	5e                   	pop    esi
  4049b7:	56                   	push   esi
  4049b8:	68 c8 64 40 00       	push   0x4064c8
  4049bd:	56                   	push   esi
  4049be:	ff 15 40 60 40 00    	call   DWORD PTR ds:0x406040
  4049c4:	85 c0                	test   eax,eax
  4049c6:	74 04                	je     0x4049cc
  4049c8:	8b c6                	mov    eax,esi
  4049ca:	eb 1d                	jmp    0x4049e9
  4049cc:	8d 45 e4             	lea    eax,[ebp-0x1c]
  4049cf:	50                   	push   eax
  4049d0:	56                   	push   esi
  4049d1:	68 c4 64 40 00       	push   0x4064c4
  4049d6:	56                   	push   esi
  4049d7:	53                   	push   ebx
  4049d8:	ff 15 38 60 40 00    	call   DWORD PTR ds:0x406038
  4049de:	85 c0                	test   eax,eax
  4049e0:	0f 84 ce 00 00 00    	je     0x404ab4
  4049e6:	6a 02                	push   0x2
  4049e8:	58                   	pop    eax
  4049e9:	a3 04 81 40 00       	mov    ds:0x408104,eax
  4049ee:	83 f8 02             	cmp    eax,0x2
  4049f1:	75 24                	jne    0x404a17
  4049f3:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
  4049f6:	3b c3                	cmp    eax,ebx
  4049f8:	75 05                	jne    0x4049ff
  4049fa:	a1 e8 80 40 00       	mov    eax,ds:0x4080e8
  4049ff:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  404a02:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  404a05:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  404a08:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404a0b:	50                   	push   eax
  404a0c:	ff 15 38 60 40 00    	call   DWORD PTR ds:0x406038
  404a12:	e9 9f 00 00 00       	jmp    0x404ab6
  404a17:	83 f8 01             	cmp    eax,0x1
  404a1a:	0f 85 94 00 00 00    	jne    0x404ab4
  404a20:	39 5d 18             	cmp    DWORD PTR [ebp+0x18],ebx
  404a23:	75 08                	jne    0x404a2d
  404a25:	a1 f8 80 40 00       	mov    eax,ds:0x4080f8
  404a2a:	89 45 18             	mov    DWORD PTR [ebp+0x18],eax
  404a2d:	53                   	push   ebx
  404a2e:	53                   	push   ebx
  404a2f:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  404a32:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  404a35:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  404a38:	f7 d8                	neg    eax
  404a3a:	1b c0                	sbb    eax,eax
  404a3c:	83 e0 08             	and    eax,0x8
  404a3f:	40                   	inc    eax
  404a40:	50                   	push   eax
  404a41:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  404a44:	ff 15 44 60 40 00    	call   DWORD PTR ds:0x406044
  404a4a:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
  404a4d:	3b c3                	cmp    eax,ebx
  404a4f:	74 63                	je     0x404ab4
  404a51:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  404a54:	8d 3c 00             	lea    edi,[eax+eax*1]
  404a57:	8b c7                	mov    eax,edi
  404a59:	83 c0 03             	add    eax,0x3
  404a5c:	24 fc                	and    al,0xfc
  404a5e:	e8 dd 04 00 00       	call   0x404f40
  404a63:	89 65 e8             	mov    DWORD PTR [ebp-0x18],esp
  404a66:	8b f4                	mov    esi,esp
  404a68:	89 75 dc             	mov    DWORD PTR [ebp-0x24],esi
  404a6b:	57                   	push   edi
  404a6c:	53                   	push   ebx
  404a6d:	56                   	push   esi
  404a6e:	e8 bd 03 00 00       	call   0x404e30
  404a73:	83 c4 0c             	add    esp,0xc
  404a76:	eb 0b                	jmp    0x404a83
  404a78:	6a 01                	push   0x1
  404a7a:	58                   	pop    eax
  404a7b:	c3                   	ret
  404a7c:	8b 65 e8             	mov    esp,DWORD PTR [ebp-0x18]
  404a7f:	33 db                	xor    ebx,ebx
  404a81:	33 f6                	xor    esi,esi
  404a83:	83 4d fc ff          	or     DWORD PTR [ebp-0x4],0xffffffff
  404a87:	3b f3                	cmp    esi,ebx
  404a89:	74 29                	je     0x404ab4
  404a8b:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
  404a8e:	56                   	push   esi
  404a8f:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  404a92:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  404a95:	6a 01                	push   0x1
  404a97:	ff 75 18             	push   DWORD PTR [ebp+0x18]
  404a9a:	ff 15 44 60 40 00    	call   DWORD PTR ds:0x406044
  404aa0:	3b c3                	cmp    eax,ebx
  404aa2:	74 10                	je     0x404ab4
  404aa4:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  404aa7:	50                   	push   eax
  404aa8:	56                   	push   esi
  404aa9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  404aac:	ff 15 40 60 40 00    	call   DWORD PTR ds:0x406040
  404ab2:	eb 02                	jmp    0x404ab6
  404ab4:	33 c0                	xor    eax,eax
  404ab6:	8d 65 cc             	lea    esp,[ebp-0x34]
  404ab9:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
  404abc:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  404ac3:	5f                   	pop    edi
  404ac4:	5e                   	pop    esi
  404ac5:	5b                   	pop    ebx
  404ac6:	c9                   	leave
  404ac7:	c3                   	ret
  404ac8:	a1 0c 81 40 00       	mov    eax,ds:0x40810c
  404acd:	85 c0                	test   eax,eax
  404acf:	74 0f                	je     0x404ae0
  404ad1:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  404ad5:	ff d0                	call   eax
  404ad7:	85 c0                	test   eax,eax
  404ad9:	59                   	pop    ecx
  404ada:	74 04                	je     0x404ae0
  404adc:	6a 01                	push   0x1
  404ade:	58                   	pop    eax
  404adf:	c3                   	ret
  404ae0:	33 c0                	xor    eax,eax
  404ae2:	c3                   	ret
  404ae3:	cc                   	int3
  404ae4:	cc                   	int3
  404ae5:	cc                   	int3
  404ae6:	cc                   	int3
  404ae7:	cc                   	int3
  404ae8:	cc                   	int3
  404ae9:	cc                   	int3
  404aea:	cc                   	int3
  404aeb:	cc                   	int3
  404aec:	cc                   	int3
  404aed:	cc                   	int3
  404aee:	cc                   	int3
  404aef:	cc                   	int3
  404af0:	55                   	push   ebp
  404af1:	8b ec                	mov    ebp,esp
  404af3:	57                   	push   edi
  404af4:	56                   	push   esi
  404af5:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  404af8:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  404afb:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  404afe:	8b c1                	mov    eax,ecx
  404b00:	8b d1                	mov    edx,ecx
  404b02:	03 c6                	add    eax,esi
  404b04:	3b fe                	cmp    edi,esi
  404b06:	76 08                	jbe    0x404b10
  404b08:	3b f8                	cmp    edi,eax
  404b0a:	0f 82 78 01 00 00    	jb     0x404c88
  404b10:	f7 c7 03 00 00 00    	test   edi,0x3
  404b16:	75 14                	jne    0x404b2c
  404b18:	c1 e9 02             	shr    ecx,0x2
  404b1b:	83 e2 03             	and    edx,0x3
  404b1e:	83 f9 08             	cmp    ecx,0x8
  404b21:	72 29                	jb     0x404b4c
  404b23:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404b25:	ff 24 95 38 4c 40 00 	jmp    DWORD PTR [edx*4+0x404c38]
  404b2c:	8b c7                	mov    eax,edi
  404b2e:	ba 03 00 00 00       	mov    edx,0x3
  404b33:	83 e9 04             	sub    ecx,0x4
  404b36:	72 0c                	jb     0x404b44
  404b38:	83 e0 03             	and    eax,0x3
  404b3b:	03 c8                	add    ecx,eax
  404b3d:	ff 24 85 50 4b 40 00 	jmp    DWORD PTR [eax*4+0x404b50]
  404b44:	ff 24 8d 48 4c 40 00 	jmp    DWORD PTR [ecx*4+0x404c48]
  404b4b:	90                   	nop
  404b4c:	ff 24 8d cc 4b 40 00 	jmp    DWORD PTR [ecx*4+0x404bcc]
  404b53:	90                   	nop
  404b54:	60                   	pusha
  404b55:	4b                   	dec    ebx
  404b56:	40                   	inc    eax
  404b57:	00 8c 4b 40 00 b0 4b 	add    BYTE PTR [ebx+ecx*2+0x4bb00040],cl
  404b5e:	40                   	inc    eax
  404b5f:	00 23                	add    BYTE PTR [ebx],ah
  404b61:	d1 8a 06 88 07 8a    	ror    DWORD PTR [edx-0x75f877fa],1
  404b67:	46                   	inc    esi
  404b68:	01 88 47 01 8a 46    	add    DWORD PTR [eax+0x468a0147],ecx
  404b6e:	02 c1                	add    al,cl
  404b70:	e9 02 88 47 02       	jmp    0x287d377
  404b75:	83 c6 03             	add    esi,0x3
  404b78:	83 c7 03             	add    edi,0x3
  404b7b:	83 f9 08             	cmp    ecx,0x8
  404b7e:	72 cc                	jb     0x404b4c
  404b80:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404b82:	ff 24 95 38 4c 40 00 	jmp    DWORD PTR [edx*4+0x404c38]
  404b89:	8d 49 00             	lea    ecx,[ecx+0x0]
  404b8c:	23 d1                	and    edx,ecx
  404b8e:	8a 06                	mov    al,BYTE PTR [esi]
  404b90:	88 07                	mov    BYTE PTR [edi],al
  404b92:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  404b95:	c1 e9 02             	shr    ecx,0x2
  404b98:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  404b9b:	83 c6 02             	add    esi,0x2
  404b9e:	83 c7 02             	add    edi,0x2
  404ba1:	83 f9 08             	cmp    ecx,0x8
  404ba4:	72 a6                	jb     0x404b4c
  404ba6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404ba8:	ff 24 95 38 4c 40 00 	jmp    DWORD PTR [edx*4+0x404c38]
  404baf:	90                   	nop
  404bb0:	23 d1                	and    edx,ecx
  404bb2:	8a 06                	mov    al,BYTE PTR [esi]
  404bb4:	88 07                	mov    BYTE PTR [edi],al
  404bb6:	46                   	inc    esi
  404bb7:	c1 e9 02             	shr    ecx,0x2
  404bba:	47                   	inc    edi
  404bbb:	83 f9 08             	cmp    ecx,0x8
  404bbe:	72 8c                	jb     0x404b4c
  404bc0:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404bc2:	ff 24 95 38 4c 40 00 	jmp    DWORD PTR [edx*4+0x404c38]
  404bc9:	8d 49 00             	lea    ecx,[ecx+0x0]
  404bcc:	2f                   	das
  404bcd:	4c                   	dec    esp
  404bce:	40                   	inc    eax
  404bcf:	00 1c 4c             	add    BYTE PTR [esp+ecx*2],bl
  404bd2:	40                   	inc    eax
  404bd3:	00 14 4c             	add    BYTE PTR [esp+ecx*2],dl
  404bd6:	40                   	inc    eax
  404bd7:	00 0c 4c             	add    BYTE PTR [esp+ecx*2],cl
  404bda:	40                   	inc    eax
  404bdb:	00 04 4c             	add    BYTE PTR [esp+ecx*2],al
  404bde:	40                   	inc    eax
  404bdf:	00 fc                	add    ah,bh
  404be1:	4b                   	dec    ebx
  404be2:	40                   	inc    eax
  404be3:	00 f4                	add    ah,dh
  404be5:	4b                   	dec    ebx
  404be6:	40                   	inc    eax
  404be7:	00 ec                	add    ah,ch
  404be9:	4b                   	dec    ebx
  404bea:	40                   	inc    eax
  404beb:	00 8b 44 8e e4 89    	add    BYTE PTR [ebx-0x761b71bc],cl
  404bf1:	44                   	inc    esp
  404bf2:	8f                   	(bad)
  404bf3:	e4 8b                	in     al,0x8b
  404bf5:	44                   	inc    esp
  404bf6:	8e e8                	mov    gs,eax
  404bf8:	89 44 8f e8          	mov    DWORD PTR [edi+ecx*4-0x18],eax
  404bfc:	8b 44 8e ec          	mov    eax,DWORD PTR [esi+ecx*4-0x14]
  404c00:	89 44 8f ec          	mov    DWORD PTR [edi+ecx*4-0x14],eax
  404c04:	8b 44 8e f0          	mov    eax,DWORD PTR [esi+ecx*4-0x10]
  404c08:	89 44 8f f0          	mov    DWORD PTR [edi+ecx*4-0x10],eax
  404c0c:	8b 44 8e f4          	mov    eax,DWORD PTR [esi+ecx*4-0xc]
  404c10:	89 44 8f f4          	mov    DWORD PTR [edi+ecx*4-0xc],eax
  404c14:	8b 44 8e f8          	mov    eax,DWORD PTR [esi+ecx*4-0x8]
  404c18:	89 44 8f f8          	mov    DWORD PTR [edi+ecx*4-0x8],eax
  404c1c:	8b 44 8e fc          	mov    eax,DWORD PTR [esi+ecx*4-0x4]
  404c20:	89 44 8f fc          	mov    DWORD PTR [edi+ecx*4-0x4],eax
  404c24:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  404c2b:	03 f0                	add    esi,eax
  404c2d:	03 f8                	add    edi,eax
  404c2f:	ff 24 95 38 4c 40 00 	jmp    DWORD PTR [edx*4+0x404c38]
  404c36:	8b ff                	mov    edi,edi
  404c38:	48                   	dec    eax
  404c39:	4c                   	dec    esp
  404c3a:	40                   	inc    eax
  404c3b:	00 50 4c             	add    BYTE PTR [eax+0x4c],dl
  404c3e:	40                   	inc    eax
  404c3f:	00 5c 4c 40          	add    BYTE PTR [esp+ecx*2+0x40],bl
  404c43:	00 70 4c             	add    BYTE PTR [eax+0x4c],dh
  404c46:	40                   	inc    eax
  404c47:	00 8b 45 08 5e 5f    	add    BYTE PTR [ebx+0x5f5e0845],cl
  404c4d:	c9                   	leave
  404c4e:	c3                   	ret
  404c4f:	90                   	nop
  404c50:	8a 06                	mov    al,BYTE PTR [esi]
  404c52:	88 07                	mov    BYTE PTR [edi],al
  404c54:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  404c57:	5e                   	pop    esi
  404c58:	5f                   	pop    edi
  404c59:	c9                   	leave
  404c5a:	c3                   	ret
  404c5b:	90                   	nop
  404c5c:	8a 06                	mov    al,BYTE PTR [esi]
  404c5e:	88 07                	mov    BYTE PTR [edi],al
  404c60:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  404c63:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  404c66:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  404c69:	5e                   	pop    esi
  404c6a:	5f                   	pop    edi
  404c6b:	c9                   	leave
  404c6c:	c3                   	ret
  404c6d:	8d 49 00             	lea    ecx,[ecx+0x0]
  404c70:	8a 06                	mov    al,BYTE PTR [esi]
  404c72:	88 07                	mov    BYTE PTR [edi],al
  404c74:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  404c77:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  404c7a:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  404c7d:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  404c80:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  404c83:	5e                   	pop    esi
  404c84:	5f                   	pop    edi
  404c85:	c9                   	leave
  404c86:	c3                   	ret
  404c87:	90                   	nop
  404c88:	8d 74 31 fc          	lea    esi,[ecx+esi*1-0x4]
  404c8c:	8d 7c 39 fc          	lea    edi,[ecx+edi*1-0x4]
  404c90:	f7 c7 03 00 00 00    	test   edi,0x3
  404c96:	75 24                	jne    0x404cbc
  404c98:	c1 e9 02             	shr    ecx,0x2
  404c9b:	83 e2 03             	and    edx,0x3
  404c9e:	83 f9 08             	cmp    ecx,0x8
  404ca1:	72 0d                	jb     0x404cb0
  404ca3:	fd                   	std
  404ca4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404ca6:	fc                   	cld
  404ca7:	ff 24 95 d0 4d 40 00 	jmp    DWORD PTR [edx*4+0x404dd0]
  404cae:	8b ff                	mov    edi,edi
  404cb0:	f7 d9                	neg    ecx
  404cb2:	ff 24 8d 80 4d 40 00 	jmp    DWORD PTR [ecx*4+0x404d80]
  404cb9:	8d 49 00             	lea    ecx,[ecx+0x0]
  404cbc:	8b c7                	mov    eax,edi
  404cbe:	ba 03 00 00 00       	mov    edx,0x3
  404cc3:	83 f9 04             	cmp    ecx,0x4
  404cc6:	72 0c                	jb     0x404cd4
  404cc8:	83 e0 03             	and    eax,0x3
  404ccb:	2b c8                	sub    ecx,eax
  404ccd:	ff 24 85 d8 4c 40 00 	jmp    DWORD PTR [eax*4+0x404cd8]
  404cd4:	ff 24 8d d0 4d 40 00 	jmp    DWORD PTR [ecx*4+0x404dd0]
  404cdb:	90                   	nop
  404cdc:	e8 4c 40 00 08       	call   0x8408d2d
  404ce1:	4d                   	dec    ebp
  404ce2:	40                   	inc    eax
  404ce3:	00 30                	add    BYTE PTR [eax],dh
  404ce5:	4d                   	dec    ebp
  404ce6:	40                   	inc    eax
  404ce7:	00 8a 46 03 23 d1    	add    BYTE PTR [edx-0x2edcfcba],cl
  404ced:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  404cf0:	4e                   	dec    esi
  404cf1:	c1 e9 02             	shr    ecx,0x2
  404cf4:	4f                   	dec    edi
  404cf5:	83 f9 08             	cmp    ecx,0x8
  404cf8:	72 b6                	jb     0x404cb0
  404cfa:	fd                   	std
  404cfb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404cfd:	fc                   	cld
  404cfe:	ff 24 95 d0 4d 40 00 	jmp    DWORD PTR [edx*4+0x404dd0]
  404d05:	8d 49 00             	lea    ecx,[ecx+0x0]
  404d08:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  404d0b:	23 d1                	and    edx,ecx
  404d0d:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  404d10:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  404d13:	c1 e9 02             	shr    ecx,0x2
  404d16:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  404d19:	83 ee 02             	sub    esi,0x2
  404d1c:	83 ef 02             	sub    edi,0x2
  404d1f:	83 f9 08             	cmp    ecx,0x8
  404d22:	72 8c                	jb     0x404cb0
  404d24:	fd                   	std
  404d25:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404d27:	fc                   	cld
  404d28:	ff 24 95 d0 4d 40 00 	jmp    DWORD PTR [edx*4+0x404dd0]
  404d2f:	90                   	nop
  404d30:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  404d33:	23 d1                	and    edx,ecx
  404d35:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  404d38:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  404d3b:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  404d3e:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  404d41:	c1 e9 02             	shr    ecx,0x2
  404d44:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  404d47:	83 ee 03             	sub    esi,0x3
  404d4a:	83 ef 03             	sub    edi,0x3
  404d4d:	83 f9 08             	cmp    ecx,0x8
  404d50:	0f 82 5a ff ff ff    	jb     0x404cb0
  404d56:	fd                   	std
  404d57:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  404d59:	fc                   	cld
  404d5a:	ff 24 95 d0 4d 40 00 	jmp    DWORD PTR [edx*4+0x404dd0]
  404d61:	8d 49 00             	lea    ecx,[ecx+0x0]
  404d64:	84 4d 40             	test   BYTE PTR [ebp+0x40],cl
  404d67:	00 8c 4d 40 00 94 4d 	add    BYTE PTR [ebp+ecx*2+0x4d940040],cl
  404d6e:	40                   	inc    eax
  404d6f:	00 9c 4d 40 00 a4 4d 	add    BYTE PTR [ebp+ecx*2+0x4da40040],bl
  404d76:	40                   	inc    eax
  404d77:	00 ac 4d 40 00 b4 4d 	add    BYTE PTR [ebp+ecx*2+0x4db40040],ch
  404d7e:	40                   	inc    eax
  404d7f:	00 c7                	add    bh,al
  404d81:	4d                   	dec    ebp
  404d82:	40                   	inc    eax
  404d83:	00 8b 44 8e 1c 89    	add    BYTE PTR [ebx-0x76e371bc],cl
  404d89:	44                   	inc    esp
  404d8a:	8f                   	(bad)
  404d8b:	1c 8b                	sbb    al,0x8b
  404d8d:	44                   	inc    esp
  404d8e:	8e 18                	mov    ds,WORD PTR [eax]
  404d90:	89 44 8f 18          	mov    DWORD PTR [edi+ecx*4+0x18],eax
  404d94:	8b 44 8e 14          	mov    eax,DWORD PTR [esi+ecx*4+0x14]
  404d98:	89 44 8f 14          	mov    DWORD PTR [edi+ecx*4+0x14],eax
  404d9c:	8b 44 8e 10          	mov    eax,DWORD PTR [esi+ecx*4+0x10]
  404da0:	89 44 8f 10          	mov    DWORD PTR [edi+ecx*4+0x10],eax
  404da4:	8b 44 8e 0c          	mov    eax,DWORD PTR [esi+ecx*4+0xc]
  404da8:	89 44 8f 0c          	mov    DWORD PTR [edi+ecx*4+0xc],eax
  404dac:	8b 44 8e 08          	mov    eax,DWORD PTR [esi+ecx*4+0x8]
  404db0:	89 44 8f 08          	mov    DWORD PTR [edi+ecx*4+0x8],eax
  404db4:	8b 44 8e 04          	mov    eax,DWORD PTR [esi+ecx*4+0x4]
  404db8:	89 44 8f 04          	mov    DWORD PTR [edi+ecx*4+0x4],eax
  404dbc:	8d 04 8d 00 00 00 00 	lea    eax,[ecx*4+0x0]
  404dc3:	03 f0                	add    esi,eax
  404dc5:	03 f8                	add    edi,eax
  404dc7:	ff 24 95 d0 4d 40 00 	jmp    DWORD PTR [edx*4+0x404dd0]
  404dce:	8b ff                	mov    edi,edi
  404dd0:	e0 4d                	loopne 0x404e1f
  404dd2:	40                   	inc    eax
  404dd3:	00 e8                	add    al,ch
  404dd5:	4d                   	dec    ebp
  404dd6:	40                   	inc    eax
  404dd7:	00 f8                	add    al,bh
  404dd9:	4d                   	dec    ebp
  404dda:	40                   	inc    eax
  404ddb:	00 0c 4e             	add    BYTE PTR [esi+ecx*2],cl
  404dde:	40                   	inc    eax
  404ddf:	00 8b 45 08 5e 5f    	add    BYTE PTR [ebx+0x5f5e0845],cl
  404de5:	c9                   	leave
  404de6:	c3                   	ret
  404de7:	90                   	nop
  404de8:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  404deb:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  404dee:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  404df1:	5e                   	pop    esi
  404df2:	5f                   	pop    edi
  404df3:	c9                   	leave
  404df4:	c3                   	ret
  404df5:	8d 49 00             	lea    ecx,[ecx+0x0]
  404df8:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  404dfb:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  404dfe:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  404e01:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  404e04:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  404e07:	5e                   	pop    esi
  404e08:	5f                   	pop    edi
  404e09:	c9                   	leave
  404e0a:	c3                   	ret
  404e0b:	90                   	nop
  404e0c:	8a 46 03             	mov    al,BYTE PTR [esi+0x3]
  404e0f:	88 47 03             	mov    BYTE PTR [edi+0x3],al
  404e12:	8a 46 02             	mov    al,BYTE PTR [esi+0x2]
  404e15:	88 47 02             	mov    BYTE PTR [edi+0x2],al
  404e18:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
  404e1b:	88 47 01             	mov    BYTE PTR [edi+0x1],al
  404e1e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  404e21:	5e                   	pop    esi
  404e22:	5f                   	pop    edi
  404e23:	c9                   	leave
  404e24:	c3                   	ret
  404e25:	cc                   	int3
  404e26:	cc                   	int3
  404e27:	cc                   	int3
  404e28:	cc                   	int3
  404e29:	cc                   	int3
  404e2a:	cc                   	int3
  404e2b:	cc                   	int3
  404e2c:	cc                   	int3
  404e2d:	cc                   	int3
  404e2e:	cc                   	int3
  404e2f:	cc                   	int3
  404e30:	8b 54 24 0c          	mov    edx,DWORD PTR [esp+0xc]
  404e34:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  404e38:	85 d2                	test   edx,edx
  404e3a:	74 47                	je     0x404e83
  404e3c:	33 c0                	xor    eax,eax
  404e3e:	8a 44 24 08          	mov    al,BYTE PTR [esp+0x8]
  404e42:	57                   	push   edi
  404e43:	8b f9                	mov    edi,ecx
  404e45:	83 fa 04             	cmp    edx,0x4
  404e48:	72 2d                	jb     0x404e77
  404e4a:	f7 d9                	neg    ecx
  404e4c:	83 e1 03             	and    ecx,0x3
  404e4f:	74 08                	je     0x404e59
  404e51:	2b d1                	sub    edx,ecx
  404e53:	88 07                	mov    BYTE PTR [edi],al
  404e55:	47                   	inc    edi
  404e56:	49                   	dec    ecx
  404e57:	75 fa                	jne    0x404e53
  404e59:	8b c8                	mov    ecx,eax
  404e5b:	c1 e0 08             	shl    eax,0x8
  404e5e:	03 c1                	add    eax,ecx
  404e60:	8b c8                	mov    ecx,eax
  404e62:	c1 e0 10             	shl    eax,0x10
  404e65:	03 c1                	add    eax,ecx
  404e67:	8b ca                	mov    ecx,edx
  404e69:	83 e2 03             	and    edx,0x3
  404e6c:	c1 e9 02             	shr    ecx,0x2
  404e6f:	74 06                	je     0x404e77
  404e71:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  404e73:	85 d2                	test   edx,edx
  404e75:	74 06                	je     0x404e7d
  404e77:	88 07                	mov    BYTE PTR [edi],al
  404e79:	47                   	inc    edi
  404e7a:	4a                   	dec    edx
  404e7b:	75 fa                	jne    0x404e77
  404e7d:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  404e81:	5f                   	pop    edi
  404e82:	c3                   	ret
  404e83:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  404e87:	c3                   	ret
  404e88:	56                   	push   esi
  404e89:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  404e8d:	57                   	push   edi
  404e8e:	83 cf ff             	or     edi,0xffffffff
  404e91:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  404e94:	a8 40                	test   al,0x40
  404e96:	74 05                	je     0x404e9d
  404e98:	83 c8 ff             	or     eax,0xffffffff
  404e9b:	eb 3a                	jmp    0x404ed7
  404e9d:	a8 83                	test   al,0x83
  404e9f:	74 34                	je     0x404ed5
  404ea1:	56                   	push   esi
  404ea2:	e8 ae f7 ff ff       	call   0x404655
  404ea7:	56                   	push   esi
  404ea8:	8b f8                	mov    edi,eax
  404eaa:	e8 73 01 00 00       	call   0x405022
  404eaf:	ff 76 10             	push   DWORD PTR [esi+0x10]
  404eb2:	e8 b8 00 00 00       	call   0x404f6f
  404eb7:	83 c4 0c             	add    esp,0xc
  404eba:	85 c0                	test   eax,eax
  404ebc:	7d 05                	jge    0x404ec3
  404ebe:	83 cf ff             	or     edi,0xffffffff
  404ec1:	eb 12                	jmp    0x404ed5
  404ec3:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  404ec6:	85 c0                	test   eax,eax
  404ec8:	74 0b                	je     0x404ed5
  404eca:	50                   	push   eax
  404ecb:	e8 a7 e7 ff ff       	call   0x403677
  404ed0:	83 66 1c 00          	and    DWORD PTR [esi+0x1c],0x0
  404ed4:	59                   	pop    ecx
  404ed5:	8b c7                	mov    eax,edi
  404ed7:	83 66 0c 00          	and    DWORD PTR [esi+0xc],0x0
  404edb:	5f                   	pop    edi
  404edc:	5e                   	pop    esi
  404edd:	c3                   	ret
  404ede:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  404ee2:	3b 05 80 94 40 00    	cmp    eax,DWORD PTR ds:0x409480
  404ee8:	73 3d                	jae    0x404f27
  404eea:	8b c8                	mov    ecx,eax
  404eec:	8b d0                	mov    edx,eax
  404eee:	c1 f9 05             	sar    ecx,0x5
  404ef1:	83 e2 1f             	and    edx,0x1f
  404ef4:	8b 0c 8d 80 93 40 00 	mov    ecx,DWORD PTR [ecx*4+0x409380]
  404efb:	f6 44 d1 04 01       	test   BYTE PTR [ecx+edx*8+0x4],0x1
  404f00:	74 25                	je     0x404f27
  404f02:	50                   	push   eax
  404f03:	e8 00 f6 ff ff       	call   0x404508
  404f08:	59                   	pop    ecx
  404f09:	50                   	push   eax
  404f0a:	ff 15 30 60 40 00    	call   DWORD PTR ds:0x406030
  404f10:	85 c0                	test   eax,eax
  404f12:	75 08                	jne    0x404f1c
  404f14:	ff 15 ac 60 40 00    	call   DWORD PTR ds:0x4060ac
  404f1a:	eb 02                	jmp    0x404f1e
  404f1c:	33 c0                	xor    eax,eax
  404f1e:	85 c0                	test   eax,eax
  404f20:	74 12                	je     0x404f34
  404f22:	a3 68 7f 40 00       	mov    ds:0x407f68,eax
  404f27:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  404f2e:	00 00 00 
  404f31:	83 c8 ff             	or     eax,0xffffffff
  404f34:	c3                   	ret
  404f35:	cc                   	int3
  404f36:	cc                   	int3
  404f37:	cc                   	int3
  404f38:	cc                   	int3
  404f39:	cc                   	int3
  404f3a:	cc                   	int3
  404f3b:	cc                   	int3
  404f3c:	cc                   	int3
  404f3d:	cc                   	int3
  404f3e:	cc                   	int3
  404f3f:	cc                   	int3
  404f40:	51                   	push   ecx
  404f41:	3d 00 10 00 00       	cmp    eax,0x1000
  404f46:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  404f4a:	72 14                	jb     0x404f60
  404f4c:	81 e9 00 10 00 00    	sub    ecx,0x1000
  404f52:	2d 00 10 00 00       	sub    eax,0x1000
  404f57:	85 01                	test   DWORD PTR [ecx],eax
  404f59:	3d 00 10 00 00       	cmp    eax,0x1000
  404f5e:	73 ec                	jae    0x404f4c
  404f60:	2b c8                	sub    ecx,eax
  404f62:	8b c4                	mov    eax,esp
  404f64:	85 01                	test   DWORD PTR [ecx],eax
  404f66:	8b e1                	mov    esp,ecx
  404f68:	8b 08                	mov    ecx,DWORD PTR [eax]
  404f6a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  404f6d:	50                   	push   eax
  404f6e:	c3                   	ret
  404f6f:	53                   	push   ebx
  404f70:	55                   	push   ebp
  404f71:	56                   	push   esi
  404f72:	57                   	push   edi
  404f73:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  404f77:	3b 3d 80 94 40 00    	cmp    edi,DWORD PTR ds:0x409480
  404f7d:	0f 83 86 00 00 00    	jae    0x405009
  404f83:	8b c7                	mov    eax,edi
  404f85:	8b f7                	mov    esi,edi
  404f87:	c1 f8 05             	sar    eax,0x5
  404f8a:	83 e6 1f             	and    esi,0x1f
  404f8d:	8d 1c 85 80 93 40 00 	lea    ebx,[eax*4+0x409380]
  404f94:	c1 e6 03             	shl    esi,0x3
  404f97:	8b 03                	mov    eax,DWORD PTR [ebx]
  404f99:	f6 44 30 04 01       	test   BYTE PTR [eax+esi*1+0x4],0x1
  404f9e:	74 69                	je     0x405009
  404fa0:	57                   	push   edi
  404fa1:	e8 62 f5 ff ff       	call   0x404508
  404fa6:	83 f8 ff             	cmp    eax,0xffffffff
  404fa9:	59                   	pop    ecx
  404faa:	74 3c                	je     0x404fe8
  404fac:	83 ff 01             	cmp    edi,0x1
  404faf:	74 05                	je     0x404fb6
  404fb1:	83 ff 02             	cmp    edi,0x2
  404fb4:	75 16                	jne    0x404fcc
  404fb6:	6a 02                	push   0x2
  404fb8:	e8 4b f5 ff ff       	call   0x404508
  404fbd:	6a 01                	push   0x1
  404fbf:	8b e8                	mov    ebp,eax
  404fc1:	e8 42 f5 ff ff       	call   0x404508
  404fc6:	59                   	pop    ecx
  404fc7:	3b c5                	cmp    eax,ebp
  404fc9:	59                   	pop    ecx
  404fca:	74 1c                	je     0x404fe8
  404fcc:	57                   	push   edi
  404fcd:	e8 36 f5 ff ff       	call   0x404508
  404fd2:	59                   	pop    ecx
  404fd3:	50                   	push   eax
  404fd4:	ff 15 2c 60 40 00    	call   DWORD PTR ds:0x40602c
  404fda:	85 c0                	test   eax,eax
  404fdc:	75 0a                	jne    0x404fe8
  404fde:	ff 15 ac 60 40 00    	call   DWORD PTR ds:0x4060ac
  404fe4:	8b e8                	mov    ebp,eax
  404fe6:	eb 02                	jmp    0x404fea
  404fe8:	33 ed                	xor    ebp,ebp
  404fea:	57                   	push   edi
  404feb:	e8 9e f4 ff ff       	call   0x40448e
  404ff0:	8b 03                	mov    eax,DWORD PTR [ebx]
  404ff2:	59                   	pop    ecx
  404ff3:	80 64 30 04 00       	and    BYTE PTR [eax+esi*1+0x4],0x0
  404ff8:	85 ed                	test   ebp,ebp
  404ffa:	74 09                	je     0x405005
  404ffc:	55                   	push   ebp
  404ffd:	e8 25 f4 ff ff       	call   0x404427
  405002:	59                   	pop    ecx
  405003:	eb 15                	jmp    0x40501a
  405005:	33 c0                	xor    eax,eax
  405007:	eb 14                	jmp    0x40501d
  405009:	83 25 68 7f 40 00 00 	and    DWORD PTR ds:0x407f68,0x0
  405010:	c7 05 64 7f 40 00 09 	mov    DWORD PTR ds:0x407f64,0x9
  405017:	00 00 00 
  40501a:	83 c8 ff             	or     eax,0xffffffff
  40501d:	5f                   	pop    edi
  40501e:	5e                   	pop    esi
  40501f:	5d                   	pop    ebp
  405020:	5b                   	pop    ebx
  405021:	c3                   	ret
  405022:	56                   	push   esi
  405023:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  405027:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
  40502a:	a8 83                	test   al,0x83
  40502c:	74 1d                	je     0x40504b
  40502e:	a8 08                	test   al,0x8
  405030:	74 19                	je     0x40504b
  405032:	ff 76 08             	push   DWORD PTR [esi+0x8]
  405035:	e8 3d e6 ff ff       	call   0x403677
  40503a:	66 81 66 0c f7 fb    	and    WORD PTR [esi+0xc],0xfbf7
  405040:	33 c0                	xor    eax,eax
  405042:	59                   	pop    ecx
  405043:	89 06                	mov    DWORD PTR [esi],eax
  405045:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  405048:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  40504b:	5e                   	pop    esi
  40504c:	c3                   	ret
  40504d:	cc                   	int3
  40504e:	cc                   	int3
  40504f:	cc                   	int3
  405050:	ff 25 a4 60 40 00    	jmp    DWORD PTR ds:0x4060a4
  405056:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40505a:	ff 74 24 08          	push   DWORD PTR [esp+0x8]
  40505e:	6a 00                	push   0x0
  405060:	e8 04 00 00 00       	call   0x405069
  405065:	83 c4 0c             	add    esp,0xc
  405068:	c3                   	ret
  405069:	55                   	push   ebp
  40506a:	8b ec                	mov    ebp,esp
  40506c:	81 ec 08 01 00 00    	sub    esp,0x108
  405072:	53                   	push   ebx
  405073:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  405076:	85 db                	test   ebx,ebx
  405078:	74 52                	je     0x4050cc
  40507a:	53                   	push   ebx
  40507b:	e8 ba 00 00 00       	call   0x40513a
  405080:	85 c0                	test   eax,eax
  405082:	59                   	pop    ecx
  405083:	75 19                	jne    0x40509e
  405085:	c7 05 68 7f 40 00 0f 	mov    DWORD PTR ds:0x407f68,0xf
  40508c:	00 00 00 
  40508f:	c7 05 64 7f 40 00 0d 	mov    DWORD PTR ds:0x407f64,0xd
  405096:	00 00 00 
  405099:	33 c0                	xor    eax,eax
  40509b:	5b                   	pop    ebx
  40509c:	c9                   	leave
  40509d:	c3                   	ret
  40509e:	8d 45 fc             	lea    eax,[ebp-0x4]
  4050a1:	80 65 0b 00          	and    BYTE PTR [ebp+0xb],0x0
  4050a5:	50                   	push   eax
  4050a6:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  4050ac:	50                   	push   eax
  4050ad:	8d 45 08             	lea    eax,[ebp+0x8]
  4050b0:	80 c3 40             	add    bl,0x40
  4050b3:	68 04 01 00 00       	push   0x104
  4050b8:	50                   	push   eax
  4050b9:	88 5d 08             	mov    BYTE PTR [ebp+0x8],bl
  4050bc:	c6 45 09 3a          	mov    BYTE PTR [ebp+0x9],0x3a
  4050c0:	c6 45 0a 2e          	mov    BYTE PTR [ebp+0xa],0x2e
  4050c4:	ff 15 24 60 40 00    	call   DWORD PTR ds:0x406024
  4050ca:	eb 12                	jmp    0x4050de
  4050cc:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  4050d2:	50                   	push   eax
  4050d3:	68 04 01 00 00       	push   0x104
  4050d8:	ff 15 34 60 40 00    	call   DWORD PTR ds:0x406034
  4050de:	85 c0                	test   eax,eax
  4050e0:	74 b7                	je     0x405099
  4050e2:	40                   	inc    eax
  4050e3:	3d 04 01 00 00       	cmp    eax,0x104
  4050e8:	77 af                	ja     0x405099
  4050ea:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
  4050ed:	85 c9                	test   ecx,ecx
  4050ef:	75 21                	jne    0x405112
  4050f1:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
  4050f4:	7f 03                	jg     0x4050f9
  4050f6:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  4050f9:	50                   	push   eax
  4050fa:	e8 a1 e6 ff ff       	call   0x4037a0
  4050ff:	59                   	pop    ecx
  405100:	8b c8                	mov    ecx,eax
  405102:	85 c9                	test   ecx,ecx
  405104:	75 20                	jne    0x405126
  405106:	c7 05 64 7f 40 00 0c 	mov    DWORD PTR ds:0x407f64,0xc
  40510d:	00 00 00 
  405110:	eb 87                	jmp    0x405099
  405112:	3b 45 10             	cmp    eax,DWORD PTR [ebp+0x10]
  405115:	7e 0f                	jle    0x405126
  405117:	c7 05 64 7f 40 00 22 	mov    DWORD PTR ds:0x407f64,0x22
  40511e:	00 00 00 
  405121:	e9 73 ff ff ff       	jmp    0x405099
  405126:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
  40512c:	50                   	push   eax
  40512d:	51                   	push   ecx
  40512e:	e8 7d e5 ff ff       	call   0x4036b0
  405133:	59                   	pop    ecx
  405134:	59                   	pop    ecx
  405135:	e9 61 ff ff ff       	jmp    0x40509b
  40513a:	55                   	push   ebp
  40513b:	8b ec                	mov    ebp,esp
  40513d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  405140:	85 c0                	test   eax,eax
  405142:	74 24                	je     0x405168
  405144:	80 65 0b 00          	and    BYTE PTR [ebp+0xb],0x0
  405148:	04 40                	add    al,0x40
  40514a:	88 45 08             	mov    BYTE PTR [ebp+0x8],al
  40514d:	8d 45 08             	lea    eax,[ebp+0x8]
  405150:	50                   	push   eax
  405151:	c6 45 09 3a          	mov    BYTE PTR [ebp+0x9],0x3a
  405155:	c6 45 0a 5c          	mov    BYTE PTR [ebp+0xa],0x5c
  405159:	ff 15 20 60 40 00    	call   DWORD PTR ds:0x406020
  40515f:	85 c0                	test   eax,eax
  405161:	74 0a                	je     0x40516d
  405163:	83 f8 01             	cmp    eax,0x1
  405166:	74 05                	je     0x40516d
  405168:	6a 01                	push   0x1
  40516a:	58                   	pop    eax
  40516b:	5d                   	pop    ebp
  40516c:	c3                   	ret
  40516d:	33 c0                	xor    eax,eax
  40516f:	5d                   	pop    ebp
  405170:	c3                   	ret
  405171:	6a 00                	push   0x0
  405173:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  405177:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  40517b:	ff 74 24 10          	push   DWORD PTR [esp+0x10]
  40517f:	e8 04 00 00 00       	call   0x405188
  405184:	83 c4 10             	add    esp,0x10
  405187:	c3                   	ret
  405188:	55                   	push   ebp
  405189:	8b ec                	mov    ebp,esp
  40518b:	51                   	push   ecx
  40518c:	51                   	push   ecx
  40518d:	53                   	push   ebx
  40518e:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
  405191:	56                   	push   esi
  405192:	57                   	push   edi
  405193:	6a 5c                	push   0x5c
  405195:	53                   	push   ebx
  405196:	8b fb                	mov    edi,ebx
  405198:	e8 3c 02 00 00       	call   0x4053d9
  40519d:	6a 2f                	push   0x2f
  40519f:	53                   	push   ebx
  4051a0:	8b f0                	mov    esi,eax
  4051a2:	e8 32 02 00 00       	call   0x4053d9
  4051a7:	83 c4 10             	add    esp,0x10
  4051aa:	85 c0                	test   eax,eax
  4051ac:	75 45                	jne    0x4051f3
  4051ae:	85 f6                	test   esi,esi
  4051b0:	75 4b                	jne    0x4051fd
  4051b2:	6a 3a                	push   0x3a
  4051b4:	53                   	push   ebx
  4051b5:	e8 ac 01 00 00       	call   0x405366
  4051ba:	8b f0                	mov    esi,eax
  4051bc:	59                   	pop    ecx
  4051bd:	85 f6                	test   esi,esi
  4051bf:	59                   	pop    ecx
  4051c0:	75 3b                	jne    0x4051fd
  4051c2:	53                   	push   ebx
  4051c3:	e8 b8 de ff ff       	call   0x403080
  4051c8:	83 c0 03             	add    eax,0x3
  4051cb:	50                   	push   eax
  4051cc:	e8 cf e5 ff ff       	call   0x4037a0
  4051d1:	8b f8                	mov    edi,eax
  4051d3:	59                   	pop    ecx
  4051d4:	85 ff                	test   edi,edi
  4051d6:	59                   	pop    ecx
  4051d7:	74 7d                	je     0x405256
  4051d9:	68 14 65 40 00       	push   0x406514
  4051de:	57                   	push   edi
  4051df:	e8 cc e4 ff ff       	call   0x4036b0
  4051e4:	53                   	push   ebx
  4051e5:	57                   	push   edi
  4051e6:	e8 d5 e4 ff ff       	call   0x4036c0
  4051eb:	83 c4 10             	add    esp,0x10
  4051ee:	8d 77 02             	lea    esi,[edi+0x2]
  4051f1:	eb 0a                	jmp    0x4051fd
  4051f3:	85 f6                	test   esi,esi
  4051f5:	74 04                	je     0x4051fb
  4051f7:	3b c6                	cmp    eax,esi
  4051f9:	76 02                	jbe    0x4051fd
  4051fb:	8b f0                	mov    esi,eax
  4051fd:	83 4d f8 ff          	or     DWORD PTR [ebp-0x8],0xffffffff
  405201:	6a 2e                	push   0x2e
  405203:	56                   	push   esi
  405204:	e8 d0 01 00 00       	call   0x4053d9
  405209:	59                   	pop    ecx
  40520a:	85 c0                	test   eax,eax
  40520c:	59                   	pop    ecx
  40520d:	74 2d                	je     0x40523c
  40520f:	6a 00                	push   0x0
  405211:	57                   	push   edi
  405212:	e8 0b 01 00 00       	call   0x405322
  405217:	59                   	pop    ecx
  405218:	83 f8 ff             	cmp    eax,0xffffffff
  40521b:	59                   	pop    ecx
  40521c:	0f 84 9c 00 00 00    	je     0x4052be
  405222:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  405225:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  405228:	57                   	push   edi
  405229:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  40522c:	e8 a0 00 00 00       	call   0x4052d1
  405231:	83 c4 10             	add    esp,0x10
  405234:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  405237:	e9 82 00 00 00       	jmp    0x4052be
  40523c:	57                   	push   edi
  40523d:	e8 3e de ff ff       	call   0x403080
  405242:	83 c0 05             	add    eax,0x5
  405245:	50                   	push   eax
  405246:	e8 55 e5 ff ff       	call   0x4037a0
  40524b:	8b d8                	mov    ebx,eax
  40524d:	59                   	pop    ecx
  40524e:	85 db                	test   ebx,ebx
  405250:	59                   	pop    ecx
  405251:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
  405254:	75 05                	jne    0x40525b
  405256:	83 c8 ff             	or     eax,0xffffffff
  405259:	eb 71                	jmp    0x4052cc
  40525b:	57                   	push   edi
  40525c:	53                   	push   ebx
  40525d:	e8 4e e4 ff ff       	call   0x4036b0
  405262:	57                   	push   edi
  405263:	e8 18 de ff ff       	call   0x403080
  405268:	8b f0                	mov    esi,eax
  40526a:	83 c4 0c             	add    esp,0xc
  40526d:	03 f3                	add    esi,ebx
  40526f:	bb bc 7a 40 00       	mov    ebx,0x407abc
  405274:	ff 33                	push   DWORD PTR [ebx]
  405276:	56                   	push   esi
  405277:	e8 34 e4 ff ff       	call   0x4036b0
  40527c:	6a 00                	push   0x0
  40527e:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  405281:	e8 9c 00 00 00       	call   0x405322
  405286:	83 c4 10             	add    esp,0x10
  405289:	83 f8 ff             	cmp    eax,0xffffffff
  40528c:	75 0d                	jne    0x40529b
  40528e:	83 eb 04             	sub    ebx,0x4
  405291:	81 fb b0 7a 40 00    	cmp    ebx,0x407ab0
  405297:	7d db                	jge    0x405274
  405299:	eb 17                	jmp    0x4052b2
  40529b:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40529e:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4052a1:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  4052a4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4052a7:	e8 25 00 00 00       	call   0x4052d1
  4052ac:	83 c4 10             	add    esp,0x10
  4052af:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  4052b2:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
  4052b5:	e8 bd e3 ff ff       	call   0x403677
  4052ba:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
  4052bd:	59                   	pop    ecx
  4052be:	3b fb                	cmp    edi,ebx
  4052c0:	74 07                	je     0x4052c9
  4052c2:	57                   	push   edi
  4052c3:	e8 af e3 ff ff       	call   0x403677
  4052c8:	59                   	pop    ecx
  4052c9:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  4052cc:	5f                   	pop    edi
  4052cd:	5e                   	pop    esi
  4052ce:	5b                   	pop    ebx
  4052cf:	c9                   	leave
  4052d0:	c3                   	ret
  4052d1:	55                   	push   ebp
  4052d2:	8b ec                	mov    ebp,esp
  4052d4:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4052d7:	8d 45 10             	lea    eax,[ebp+0x10]
  4052da:	50                   	push   eax
  4052db:	8d 45 14             	lea    eax,[ebp+0x14]
  4052de:	50                   	push   eax
  4052df:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  4052e2:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4052e5:	e8 2e 03 00 00       	call   0x405618
  4052ea:	83 c4 14             	add    esp,0x14
  4052ed:	83 f8 ff             	cmp    eax,0xffffffff
  4052f0:	75 04                	jne    0x4052f6
  4052f2:	0b c0                	or     eax,eax
  4052f4:	5d                   	pop    ebp
  4052f5:	c3                   	ret
  4052f6:	56                   	push   esi
  4052f7:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  4052fa:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  4052fd:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  405300:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  405303:	e8 31 01 00 00       	call   0x405439
  405308:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  40530b:	8b f0                	mov    esi,eax
  40530d:	e8 65 e3 ff ff       	call   0x403677
  405312:	ff 75 10             	push   DWORD PTR [ebp+0x10]
  405315:	e8 5d e3 ff ff       	call   0x403677
  40531a:	83 c4 18             	add    esp,0x18
  40531d:	8b c6                	mov    eax,esi
  40531f:	5e                   	pop    esi
  405320:	5d                   	pop    ebp
  405321:	c3                   	ret
  405322:	ff 74 24 04          	push   DWORD PTR [esp+0x4]
  405326:	ff 15 28 60 40 00    	call   DWORD PTR ds:0x406028
  40532c:	83 f8 ff             	cmp    eax,0xffffffff
  40532f:	75 11                	jne    0x405342
  405331:	ff 15 ac 60 40 00    	call   DWORD PTR ds:0x4060ac
  405337:	50                   	push   eax
  405338:	e8 ea f0 ff ff       	call   0x404427
  40533d:	59                   	pop    ecx
  40533e:	83 c8 ff             	or     eax,0xffffffff
  405341:	c3                   	ret
  405342:	a8 01                	test   al,0x1
  405344:	74 1d                	je     0x405363
  405346:	f6 44 24 08 02       	test   BYTE PTR [esp+0x8],0x2
  40534b:	74 16                	je     0x405363
  40534d:	c7 05 64 7f 40 00 0d 	mov    DWORD PTR ds:0x407f64,0xd
  405354:	00 00 00 
  405357:	c7 05 68 7f 40 00 05 	mov    DWORD PTR ds:0x407f68,0x5
  40535e:	00 00 00 
  405361:	eb db                	jmp    0x40533e
  405363:	33 c0                	xor    eax,eax
  405365:	c3                   	ret
  405366:	55                   	push   ebp
  405367:	8b ec                	mov    ebp,esp
  405369:	83 3d 3c 81 40 00 00 	cmp    DWORD PTR ds:0x40813c,0x0
  405370:	75 0f                	jne    0x405381
  405372:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  405375:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  405378:	e8 b3 04 00 00       	call   0x405830
  40537d:	59                   	pop    ecx
  40537e:	59                   	pop    ecx
  40537f:	5d                   	pop    ebp
  405380:	c3                   	ret
  405381:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  405384:	66 0f b6 01          	movzx  ax,BYTE PTR [ecx]
  405388:	66 85 c0             	test   ax,ax
  40538b:	74 3a                	je     0x4053c7
  40538d:	0f b6 d0             	movzx  edx,al
  405390:	f6 82 41 82 40 00 04 	test   BYTE PTR [edx+0x408241],0x4
  405397:	74 1a                	je     0x4053b3
  405399:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
  40539c:	41                   	inc    ecx
  40539d:	84 d2                	test   dl,dl
  40539f:	74 1d                	je     0x4053be
  4053a1:	0f b7 c0             	movzx  eax,ax
  4053a4:	0f b6 d2             	movzx  edx,dl
  4053a7:	c1 e0 08             	shl    eax,0x8
  4053aa:	0b c2                	or     eax,edx
  4053ac:	39 45 0c             	cmp    DWORD PTR [ebp+0xc],eax
  4053af:	74 11                	je     0x4053c2
  4053b1:	eb 08                	jmp    0x4053bb
  4053b3:	0f b7 d0             	movzx  edx,ax
  4053b6:	39 55 0c             	cmp    DWORD PTR [ebp+0xc],edx
  4053b9:	74 0c                	je     0x4053c7
  4053bb:	41                   	inc    ecx
  4053bc:	eb c6                	jmp    0x405384
  4053be:	33 c0                	xor    eax,eax
  4053c0:	5d                   	pop    ebp
  4053c1:	c3                   	ret
  4053c2:	8d 41 ff             	lea    eax,[ecx-0x1]
  4053c5:	5d                   	pop    ebp
  4053c6:	c3                   	ret
  4053c7:	0f b7 d0             	movzx  edx,ax
  4053ca:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4053cd:	2b c2                	sub    eax,edx
  4053cf:	f7 d8                	neg    eax
  4053d1:	1b c0                	sbb    eax,eax
  4053d3:	f7 d0                	not    eax
  4053d5:	23 c1                	and    eax,ecx
  4053d7:	5d                   	pop    ebp
  4053d8:	c3                   	ret
  4053d9:	55                   	push   ebp
  4053da:	8b ec                	mov    ebp,esp
  4053dc:	33 c0                	xor    eax,eax
  4053de:	39 05 3c 81 40 00    	cmp    DWORD PTR ds:0x40813c,eax
  4053e4:	75 0f                	jne    0x4053f5
  4053e6:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  4053e9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
  4053ec:	e8 ff 04 00 00       	call   0x4058f0
  4053f1:	59                   	pop    ecx
  4053f2:	59                   	pop    ecx
  4053f3:	5d                   	pop    ebp
  4053f4:	c3                   	ret
  4053f5:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
  4053f8:	53                   	push   ebx
  4053f9:	56                   	push   esi
  4053fa:	8a 1a                	mov    bl,BYTE PTR [edx]
  4053fc:	0f b6 cb             	movzx  ecx,bl
  4053ff:	0f b6 f1             	movzx  esi,cl
  405402:	f6 86 41 82 40 00 04 	test   BYTE PTR [esi+0x408241],0x4
  405409:	74 1e                	je     0x405429
  40540b:	8a 5a 01             	mov    bl,BYTE PTR [edx+0x1]
  40540e:	42                   	inc    edx
  40540f:	84 db                	test   bl,bl
  405411:	74 12                	je     0x405425
  405413:	0f b6 f3             	movzx  esi,bl
  405416:	c1 e1 08             	shl    ecx,0x8
  405419:	0b ce                	or     ecx,esi
  40541b:	39 4d 0c             	cmp    DWORD PTR [ebp+0xc],ecx
  40541e:	75 10                	jne    0x405430
  405420:	8d 42 ff             	lea    eax,[edx-0x1]
  405423:	eb 0b                	jmp    0x405430
  405425:	85 c0                	test   eax,eax
  405427:	eb 03                	jmp    0x40542c
  405429:	39 4d 0c             	cmp    DWORD PTR [ebp+0xc],ecx
  40542c:	75 02                	jne    0x405430
  40542e:	8b c2                	mov    eax,edx
  405430:	42                   	inc    edx
  405431:	84 db                	test   bl,bl
  405433:	75 c5                	jne    0x4053fa
  405435:	5e                   	pop    esi
  405436:	5b                   	pop    ebx
  405437:	5d                   	pop    ebp
  405438:	c3                   	ret
  405439:	55                   	push   ebp
  40543a:	8b ec                	mov    ebp,esp
  40543c:	83 ec 60             	sub    esp,0x60
  40543f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  405442:	80 65 ff 00          	and    BYTE PTR [ebp-0x1],0x0
  405446:	53                   	push   ebx
  405447:	56                   	push   esi
  405448:	57                   	push   edi
  405449:	33 ff                	xor    edi,edi
  40544b:	3b c7                	cmp    eax,edi
  40544d:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
  405450:	74 15                	je     0x405467
  405452:	83 f8 01             	cmp    eax,0x1
  405455:	74 10                	je     0x405467
  405457:	7e 30                	jle    0x405489
  405459:	83 f8 03             	cmp    eax,0x3
  40545c:	7e 09                	jle    0x405467
  40545e:	83 f8 04             	cmp    eax,0x4
  405461:	75 26                	jne    0x405489
  405463:	c6 45 ff 01          	mov    BYTE PTR [ebp-0x1],0x1
  405467:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  40546a:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  40546d:	8a 08                	mov    cl,BYTE PTR [eax]
  40546f:	84 c9                	test   cl,cl
  405471:	74 2b                	je     0x40549e
  405473:	40                   	inc    eax
  405474:	80 38 00             	cmp    BYTE PTR [eax],0x0
  405477:	75 fa                	jne    0x405473
  405479:	80 78 01 00          	cmp    BYTE PTR [eax+0x1],0x0
  40547d:	8d 48 01             	lea    ecx,[eax+0x1]
  405480:	74 eb                	je     0x40546d
  405482:	c6 00 20             	mov    BYTE PTR [eax],0x20
  405485:	8b c1                	mov    eax,ecx
  405487:	eb e4                	jmp    0x40546d
  405489:	c7 05 64 7f 40 00 16 	mov    DWORD PTR ds:0x407f64,0x16
  405490:	00 00 00 
  405493:	89 3d 68 7f 40 00    	mov    DWORD PTR ds:0x407f68,edi
  405499:	e9 1c 01 00 00       	jmp    0x4055ba
  40549e:	6a 44                	push   0x44
  4054a0:	8d 45 a0             	lea    eax,[ebp-0x60]
  4054a3:	5e                   	pop    esi
  4054a4:	56                   	push   esi
  4054a5:	57                   	push   edi
  4054a6:	50                   	push   eax
  4054a7:	e8 84 f9 ff ff       	call   0x404e30
  4054ac:	89 75 a0             	mov    DWORD PTR [ebp-0x60],esi
  4054af:	8b 35 80 94 40 00    	mov    esi,DWORD PTR ds:0x409480
  4054b5:	83 c4 0c             	add    esp,0xc
  4054b8:	3b f7                	cmp    esi,edi
  4054ba:	74 21                	je     0x4054dd
  4054bc:	8d 46 ff             	lea    eax,[esi-0x1]
  4054bf:	8b c8                	mov    ecx,eax
  4054c1:	8b d0                	mov    edx,eax
  4054c3:	c1 f9 05             	sar    ecx,0x5
  4054c6:	83 e2 1f             	and    edx,0x1f
  4054c9:	8b 0c 8d 80 93 40 00 	mov    ecx,DWORD PTR [ecx*4+0x409380]
  4054d0:	80 7c d1 04 00       	cmp    BYTE PTR [ecx+edx*8+0x4],0x0
  4054d5:	75 06                	jne    0x4054dd
  4054d7:	4e                   	dec    esi
  4054d8:	48                   	dec    eax
  4054d9:	3b f7                	cmp    esi,edi
  4054db:	75 e2                	jne    0x4054bf
  4054dd:	8d 44 b6 04          	lea    eax,[esi+esi*4+0x4]
  4054e1:	6a 01                	push   0x1
  4054e3:	66 89 45 d2          	mov    WORD PTR [ebp-0x2e],ax
  4054e7:	0f b7 c0             	movzx  eax,ax
  4054ea:	50                   	push   eax
  4054eb:	e8 55 f0 ff ff       	call   0x404545
  4054f0:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
  4054f3:	59                   	pop    ecx
  4054f4:	89 30                	mov    DWORD PTR [eax],esi
  4054f6:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
  4054f9:	59                   	pop    ecx
  4054fa:	33 db                	xor    ebx,ebx
  4054fc:	3b f7                	cmp    esi,edi
  4054fe:	8d 48 04             	lea    ecx,[eax+0x4]
  405501:	8d 54 30 04          	lea    edx,[eax+esi*1+0x4]
  405505:	7e 37                	jle    0x40553e
  405507:	8b c3                	mov    eax,ebx
  405509:	8b fb                	mov    edi,ebx
  40550b:	c1 f8 05             	sar    eax,0x5
  40550e:	83 e7 1f             	and    edi,0x1f
  405511:	8b 04 85 80 93 40 00 	mov    eax,DWORD PTR [eax*4+0x409380]
  405518:	8d 3c f8             	lea    edi,[eax+edi*8]
  40551b:	8a 47 04             	mov    al,BYTE PTR [edi+0x4]
  40551e:	a8 10                	test   al,0x10
  405520:	75 08                	jne    0x40552a
  405522:	88 01                	mov    BYTE PTR [ecx],al
  405524:	8b 07                	mov    eax,DWORD PTR [edi]
  405526:	89 02                	mov    DWORD PTR [edx],eax
  405528:	eb 06                	jmp    0x405530
  40552a:	80 21 00             	and    BYTE PTR [ecx],0x0
  40552d:	83 0a ff             	or     DWORD PTR [edx],0xffffffff
  405530:	43                   	inc    ebx
  405531:	41                   	inc    ecx
  405532:	83 c2 04             	add    edx,0x4
  405535:	3b de                	cmp    ebx,esi
  405537:	7c ce                	jl     0x405507
  405539:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
  40553c:	33 ff                	xor    edi,edi
  40553e:	80 7d ff 00          	cmp    BYTE PTR [ebp-0x1],0x0
  405542:	74 2d                	je     0x405571
  405544:	8d 48 04             	lea    ecx,[eax+0x4]
  405547:	33 d2                	xor    edx,edx
  405549:	8d 44 30 04          	lea    eax,[eax+esi*1+0x4]
  40554d:	83 fe 03             	cmp    esi,0x3
  405550:	7d 04                	jge    0x405556
  405552:	8b de                	mov    ebx,esi
  405554:	eb 03                	jmp    0x405559
  405556:	6a 03                	push   0x3
  405558:	5b                   	pop    ebx
  405559:	3b d3                	cmp    edx,ebx
  40555b:	7d 0d                	jge    0x40556a
  40555d:	80 21 00             	and    BYTE PTR [ecx],0x0
  405560:	83 08 ff             	or     DWORD PTR [eax],0xffffffff
  405563:	42                   	inc    edx
  405564:	41                   	inc    ecx
  405565:	83 c0 04             	add    eax,0x4
  405568:	eb e3                	jmp    0x40554d
  40556a:	c7 45 f8 08 00 00 00 	mov    DWORD PTR [ebp-0x8],0x8
  405571:	8d 45 e4             	lea    eax,[ebp-0x1c]
  405574:	89 3d 64 7f 40 00    	mov    DWORD PTR ds:0x407f64,edi
  40557a:	50                   	push   eax
  40557b:	8d 45 a0             	lea    eax,[ebp-0x60]
  40557e:	50                   	push   eax
  40557f:	57                   	push   edi
  405580:	ff 75 14             	push   DWORD PTR [ebp+0x14]
  405583:	89 3d 68 7f 40 00    	mov    DWORD PTR ds:0x407f68,edi
  405589:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
  40558c:	6a 01                	push   0x1
  40558e:	57                   	push   edi
  40558f:	57                   	push   edi
  405590:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
  405593:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
  405596:	ff 15 1c 60 40 00    	call   DWORD PTR ds:0x40601c
  40559c:	8b f0                	mov    esi,eax
  40559e:	ff 15 ac 60 40 00    	call   DWORD PTR ds:0x4060ac
  4055a4:	ff 75 d4             	push   DWORD PTR [ebp-0x2c]
  4055a7:	8b d8                	mov    ebx,eax
  4055a9:	e8 c9 e0 ff ff       	call   0x403677
  4055ae:	3b f7                	cmp    esi,edi
  4055b0:	59                   	pop    ecx
  4055b1:	75 0c                	jne    0x4055bf
  4055b3:	53                   	push   ebx
  4055b4:	e8 6e ee ff ff       	call   0x404427
  4055b9:	59                   	pop    ecx
  4055ba:	83 c8 ff             	or     eax,0xffffffff
  4055bd:	eb 54                	jmp    0x405613
  4055bf:	83 7d 08 02          	cmp    DWORD PTR [ebp+0x8],0x2
  4055c3:	75 06                	jne    0x4055cb
  4055c5:	57                   	push   edi
  4055c6:	e8 c5 bf ff ff       	call   0x401590
  4055cb:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
  4055ce:	8b 35 2c 60 40 00    	mov    esi,DWORD PTR ds:0x40602c
  4055d4:	75 1f                	jne    0x4055f5
  4055d6:	6a ff                	push   0xffffffff
  4055d8:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  4055db:	ff 15 14 60 40 00    	call   DWORD PTR ds:0x406014
  4055e1:	8d 45 10             	lea    eax,[ebp+0x10]
  4055e4:	50                   	push   eax
  4055e5:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  4055e8:	ff 15 18 60 40 00    	call   DWORD PTR ds:0x406018
  4055ee:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  4055f1:	ff d6                	call   esi
  4055f3:	eb 16                	jmp    0x40560b
  4055f5:	83 7d 08 04          	cmp    DWORD PTR [ebp+0x8],0x4
  4055f9:	75 0a                	jne    0x405605
  4055fb:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
  4055fe:	ff d6                	call   esi
  405600:	89 7d 10             	mov    DWORD PTR [ebp+0x10],edi
  405603:	eb 06                	jmp    0x40560b
  405605:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  405608:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  40560b:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
  40560e:	ff d6                	call   esi
  405610:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  405613:	5f                   	pop    edi
  405614:	5e                   	pop    esi
  405615:	5b                   	pop    ebx
  405616:	c9                   	leave
  405617:	c3                   	ret
  405618:	55                   	push   ebp
  405619:	8b ec                	mov    ebp,esp
  40561b:	53                   	push   ebx
  40561c:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  40561f:	56                   	push   esi
  405620:	57                   	push   edi
  405621:	6a 02                	push   0x2
  405623:	5e                   	pop    esi
  405624:	8b fe                	mov    edi,esi
  405626:	8b 03                	mov    eax,DWORD PTR [ebx]
  405628:	85 c0                	test   eax,eax
  40562a:	74 10                	je     0x40563c
  40562c:	50                   	push   eax
  40562d:	83 c3 04             	add    ebx,0x4
  405630:	e8 4b da ff ff       	call   0x403080
  405635:	59                   	pop    ecx
  405636:	8d 7c 07 01          	lea    edi,[edi+eax*1+0x1]
  40563a:	eb ea                	jmp    0x405626
  40563c:	57                   	push   edi
  40563d:	e8 5e e1 ff ff       	call   0x4037a0
  405642:	59                   	pop    ecx
  405643:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  405646:	85 c0                	test   eax,eax
  405648:	89 01                	mov    DWORD PTR [ecx],eax
  40564a:	75 0b                	jne    0x405657
  40564c:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  40564f:	83 20 00             	and    DWORD PTR [eax],0x0
  405652:	e9 e2 00 00 00       	jmp    0x405739
  405657:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  40565a:	85 ff                	test   edi,edi
  40565c:	74 16                	je     0x405674
  40565e:	8b 07                	mov    eax,DWORD PTR [edi]
  405660:	85 c0                	test   eax,eax
  405662:	74 37                	je     0x40569b
  405664:	50                   	push   eax
  405665:	83 c7 04             	add    edi,0x4
  405668:	e8 13 da ff ff       	call   0x403080
  40566d:	59                   	pop    ecx
  40566e:	8d 74 06 01          	lea    esi,[esi+eax*1+0x1]
  405672:	eb ea                	jmp    0x40565e
  405674:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  405677:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
  40567a:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
  40567d:	83 20 00             	and    DWORD PTR [eax],0x0
  405680:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  405683:	8b 30                	mov    esi,DWORD PTR [eax]
  405685:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  405688:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  40568b:	8b 00                	mov    eax,DWORD PTR [eax]
  40568d:	85 c0                	test   eax,eax
  40568f:	0f 85 c0 00 00 00    	jne    0x405755
  405695:	46                   	inc    esi
  405696:	e9 d9 00 00 00       	jmp    0x405774
  40569b:	a1 b0 7f 40 00       	mov    eax,ds:0x407fb0
  4056a0:	85 c0                	test   eax,eax
  4056a2:	75 12                	jne    0x4056b6
  4056a4:	e8 f5 cf ff ff       	call   0x40269e
  4056a9:	85 c0                	test   eax,eax
  4056ab:	a3 b0 7f 40 00       	mov    ds:0x407fb0,eax
  4056b0:	0f 84 97 00 00 00    	je     0x40574d
  4056b6:	33 db                	xor    ebx,ebx
  4056b8:	38 18                	cmp    BYTE PTR [eax],bl
  4056ba:	74 23                	je     0x4056df
  4056bc:	8b f8                	mov    edi,eax
  4056be:	8a 0f                	mov    cl,BYTE PTR [edi]
  4056c0:	80 f9 3d             	cmp    cl,0x3d
  4056c3:	74 1a                	je     0x4056df
  4056c5:	57                   	push   edi
  4056c6:	e8 b5 d9 ff ff       	call   0x403080
  4056cb:	8d 5c 03 01          	lea    ebx,[ebx+eax*1+0x1]
  4056cf:	a1 b0 7f 40 00       	mov    eax,ds:0x407fb0
  4056d4:	59                   	pop    ecx
  4056d5:	8a 0c 18             	mov    cl,BYTE PTR [eax+ebx*1]
  4056d8:	8d 3c 18             	lea    edi,[eax+ebx*1]
  4056db:	84 c9                	test   cl,cl
  4056dd:	75 e1                	jne    0x4056c0
  4056df:	8b fb                	mov    edi,ebx
  4056e1:	03 c3                	add    eax,ebx
  4056e3:	80 38 3d             	cmp    BYTE PTR [eax],0x3d
  4056e6:	75 29                	jne    0x405711
  4056e8:	80 78 01 00          	cmp    BYTE PTR [eax+0x1],0x0
  4056ec:	74 23                	je     0x405711
  4056ee:	80 78 02 3a          	cmp    BYTE PTR [eax+0x2],0x3a
  4056f2:	75 1d                	jne    0x405711
  4056f4:	80 78 03 3d          	cmp    BYTE PTR [eax+0x3],0x3d
  4056f8:	75 17                	jne    0x405711
  4056fa:	83 c0 04             	add    eax,0x4
  4056fd:	50                   	push   eax
  4056fe:	e8 7d d9 ff ff       	call   0x403080
  405703:	8d 7c 07 05          	lea    edi,[edi+eax*1+0x5]
  405707:	a1 b0 7f 40 00       	mov    eax,ds:0x407fb0
  40570c:	59                   	pop    ecx
  40570d:	03 c7                	add    eax,edi
  40570f:	eb d2                	jmp    0x4056e3
  405711:	8b c7                	mov    eax,edi
  405713:	2b c3                	sub    eax,ebx
  405715:	03 c6                	add    eax,esi
  405717:	50                   	push   eax
  405718:	e8 83 e0 ff ff       	call   0x4037a0
  40571d:	59                   	pop    ecx
  40571e:	8b 4d 14             	mov    ecx,DWORD PTR [ebp+0x14]
  405721:	85 c0                	test   eax,eax
  405723:	89 01                	mov    DWORD PTR [ecx],eax
  405725:	0f 85 55 ff ff ff    	jne    0x405680
  40572b:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  40572e:	ff 36                	push   DWORD PTR [esi]
  405730:	e8 42 df ff ff       	call   0x403677
  405735:	83 26 00             	and    DWORD PTR [esi],0x0
  405738:	59                   	pop    ecx
  405739:	c7 05 64 7f 40 00 0c 	mov    DWORD PTR ds:0x407f64,0xc
  405740:	00 00 00 
  405743:	c7 05 68 7f 40 00 08 	mov    DWORD PTR ds:0x407f68,0x8
  40574a:	00 00 00 
  40574d:	83 c8 ff             	or     eax,0xffffffff
  405750:	e9 c2 00 00 00       	jmp    0x405817
  405755:	50                   	push   eax
  405756:	56                   	push   esi
  405757:	e8 54 df ff ff       	call   0x4036b0
  40575c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  40575f:	8b 08                	mov    ecx,DWORD PTR [eax]
  405761:	83 c0 04             	add    eax,0x4
  405764:	51                   	push   ecx
  405765:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  405768:	e8 13 d9 ff ff       	call   0x403080
  40576d:	83 c4 0c             	add    esp,0xc
  405770:	8d 74 06 01          	lea    esi,[esi+eax*1+0x1]
  405774:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  405777:	8b 00                	mov    eax,DWORD PTR [eax]
  405779:	85 c0                	test   eax,eax
  40577b:	74 23                	je     0x4057a0
  40577d:	50                   	push   eax
  40577e:	56                   	push   esi
  40577f:	e8 2c df ff ff       	call   0x4036b0
  405784:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  405787:	83 45 10 04          	add    DWORD PTR [ebp+0x10],0x4
  40578b:	8b 00                	mov    eax,DWORD PTR [eax]
  40578d:	50                   	push   eax
  40578e:	e8 ed d8 ff ff       	call   0x403080
  405793:	83 c4 0c             	add    esp,0xc
  405796:	03 f0                	add    esi,eax
  405798:	c6 06 20             	mov    BYTE PTR [esi],0x20
  40579b:	e9 f5 fe ff ff       	jmp    0x405695
  4057a0:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  4057a3:	80 66 ff 00          	and    BYTE PTR [esi-0x1],0x0
  4057a7:	80 26 00             	and    BYTE PTR [esi],0x0
  4057aa:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
  4057ae:	8b 30                	mov    esi,DWORD PTR [eax]
  4057b0:	74 3e                	je     0x4057f0
  4057b2:	8b c7                	mov    eax,edi
  4057b4:	2b c3                	sub    eax,ebx
  4057b6:	50                   	push   eax
  4057b7:	a1 b0 7f 40 00       	mov    eax,ds:0x407fb0
  4057bc:	03 c3                	add    eax,ebx
  4057be:	50                   	push   eax
  4057bf:	56                   	push   esi
  4057c0:	e8 5b e0 ff ff       	call   0x403820
  4057c5:	2b fb                	sub    edi,ebx
  4057c7:	83 c4 0c             	add    esp,0xc
  4057ca:	03 f7                	add    esi,edi
  4057cc:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  4057cf:	8b 07                	mov    eax,DWORD PTR [edi]
  4057d1:	85 c0                	test   eax,eax
  4057d3:	74 1b                	je     0x4057f0
  4057d5:	50                   	push   eax
  4057d6:	56                   	push   esi
  4057d7:	e8 d4 de ff ff       	call   0x4036b0
  4057dc:	8b 07                	mov    eax,DWORD PTR [edi]
  4057de:	83 c7 04             	add    edi,0x4
  4057e1:	50                   	push   eax
  4057e2:	e8 99 d8 ff ff       	call   0x403080
  4057e7:	83 c4 0c             	add    esp,0xc
  4057ea:	8d 74 06 01          	lea    esi,[esi+eax*1+0x1]
  4057ee:	eb df                	jmp    0x4057cf
  4057f0:	85 f6                	test   esi,esi
  4057f2:	74 0e                	je     0x405802
  4057f4:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  4057f7:	3b 30                	cmp    esi,DWORD PTR [eax]
  4057f9:	75 04                	jne    0x4057ff
  4057fb:	80 26 00             	and    BYTE PTR [esi],0x0
  4057fe:	46                   	inc    esi
  4057ff:	80 26 00             	and    BYTE PTR [esi],0x0
  405802:	ff 35 b0 7f 40 00    	push   DWORD PTR ds:0x407fb0
  405808:	e8 6a de ff ff       	call   0x403677
  40580d:	83 25 b0 7f 40 00 00 	and    DWORD PTR ds:0x407fb0,0x0
  405814:	59                   	pop    ecx
  405815:	33 c0                	xor    eax,eax
  405817:	5f                   	pop    edi
  405818:	5e                   	pop    esi
  405819:	5b                   	pop    ebx
  40581a:	5d                   	pop    ebp
  40581b:	c3                   	ret
  40581c:	cc                   	int3
  40581d:	cc                   	int3
  40581e:	cc                   	int3
  40581f:	cc                   	int3
  405820:	8d 42 ff             	lea    eax,[edx-0x1]
  405823:	5b                   	pop    ebx
  405824:	c3                   	ret
  405825:	8d a4 24 00 00 00 00 	lea    esp,[esp+0x0]
  40582c:	8d 64 24 00          	lea    esp,[esp+0x0]
  405830:	33 c0                	xor    eax,eax
  405832:	8a 44 24 08          	mov    al,BYTE PTR [esp+0x8]
  405836:	53                   	push   ebx
  405837:	8b d8                	mov    ebx,eax
  405839:	c1 e0 08             	shl    eax,0x8
  40583c:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  405840:	f7 c2 03 00 00 00    	test   edx,0x3
  405846:	74 13                	je     0x40585b
  405848:	8a 0a                	mov    cl,BYTE PTR [edx]
  40584a:	42                   	inc    edx
  40584b:	38 d9                	cmp    cl,bl
  40584d:	74 d1                	je     0x405820
  40584f:	84 c9                	test   cl,cl
  405851:	74 51                	je     0x4058a4
  405853:	f7 c2 03 00 00 00    	test   edx,0x3
  405859:	75 ed                	jne    0x405848
  40585b:	0b d8                	or     ebx,eax
  40585d:	57                   	push   edi
  40585e:	8b c3                	mov    eax,ebx
  405860:	c1 e3 10             	shl    ebx,0x10
  405863:	56                   	push   esi
  405864:	0b d8                	or     ebx,eax
  405866:	8b 0a                	mov    ecx,DWORD PTR [edx]
  405868:	bf ff fe fe 7e       	mov    edi,0x7efefeff
  40586d:	8b c1                	mov    eax,ecx
  40586f:	8b f7                	mov    esi,edi
  405871:	33 cb                	xor    ecx,ebx
  405873:	03 f0                	add    esi,eax
  405875:	03 f9                	add    edi,ecx
  405877:	83 f1 ff             	xor    ecx,0xffffffff
  40587a:	83 f0 ff             	xor    eax,0xffffffff
  40587d:	33 cf                	xor    ecx,edi
  40587f:	33 c6                	xor    eax,esi
  405881:	83 c2 04             	add    edx,0x4
  405884:	81 e1 00 01 01 81    	and    ecx,0x81010100
  40588a:	75 1c                	jne    0x4058a8
  40588c:	25 00 01 01 81       	and    eax,0x81010100
  405891:	74 d3                	je     0x405866
  405893:	25 00 01 01 01       	and    eax,0x1010100
  405898:	75 08                	jne    0x4058a2
  40589a:	81 e6 00 00 00 80    	and    esi,0x80000000
  4058a0:	75 c4                	jne    0x405866
  4058a2:	5e                   	pop    esi
  4058a3:	5f                   	pop    edi
  4058a4:	5b                   	pop    ebx
  4058a5:	33 c0                	xor    eax,eax
  4058a7:	c3                   	ret
  4058a8:	8b 42 fc             	mov    eax,DWORD PTR [edx-0x4]
  4058ab:	38 d8                	cmp    al,bl
  4058ad:	74 36                	je     0x4058e5
  4058af:	84 c0                	test   al,al
  4058b1:	74 ef                	je     0x4058a2
  4058b3:	38 dc                	cmp    ah,bl
  4058b5:	74 27                	je     0x4058de
  4058b7:	84 e4                	test   ah,ah
  4058b9:	74 e7                	je     0x4058a2
  4058bb:	c1 e8 10             	shr    eax,0x10
  4058be:	38 d8                	cmp    al,bl
  4058c0:	74 15                	je     0x4058d7
  4058c2:	84 c0                	test   al,al
  4058c4:	74 dc                	je     0x4058a2
  4058c6:	38 dc                	cmp    ah,bl
  4058c8:	74 06                	je     0x4058d0
  4058ca:	84 e4                	test   ah,ah
  4058cc:	74 d4                	je     0x4058a2
  4058ce:	eb 96                	jmp    0x405866
  4058d0:	5e                   	pop    esi
  4058d1:	5f                   	pop    edi
  4058d2:	8d 42 ff             	lea    eax,[edx-0x1]
  4058d5:	5b                   	pop    ebx
  4058d6:	c3                   	ret
  4058d7:	8d 42 fe             	lea    eax,[edx-0x2]
  4058da:	5e                   	pop    esi
  4058db:	5f                   	pop    edi
  4058dc:	5b                   	pop    ebx
  4058dd:	c3                   	ret
  4058de:	8d 42 fd             	lea    eax,[edx-0x3]
  4058e1:	5e                   	pop    esi
  4058e2:	5f                   	pop    edi
  4058e3:	5b                   	pop    ebx
  4058e4:	c3                   	ret
  4058e5:	8d 42 fc             	lea    eax,[edx-0x4]
  4058e8:	5e                   	pop    esi
  4058e9:	5f                   	pop    edi
  4058ea:	5b                   	pop    ebx
  4058eb:	c3                   	ret
  4058ec:	cc                   	int3
  4058ed:	cc                   	int3
  4058ee:	cc                   	int3
  4058ef:	cc                   	int3
  4058f0:	55                   	push   ebp
  4058f1:	8b ec                	mov    ebp,esp
  4058f3:	57                   	push   edi
  4058f4:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  4058f7:	33 c0                	xor    eax,eax
  4058f9:	83 c9 ff             	or     ecx,0xffffffff
  4058fc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4058fe:	41                   	inc    ecx
  4058ff:	f7 d9                	neg    ecx
  405901:	4f                   	dec    edi
  405902:	8a 45 0c             	mov    al,BYTE PTR [ebp+0xc]
  405905:	fd                   	std
  405906:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  405908:	47                   	inc    edi
  405909:	38 07                	cmp    BYTE PTR [edi],al
  40590b:	74 04                	je     0x405911
  40590d:	33 c0                	xor    eax,eax
  40590f:	eb 02                	jmp    0x405913
  405911:	8b c7                	mov    eax,edi
  405913:	fc                   	cld
  405914:	5f                   	pop    edi
  405915:	c9                   	leave
  405916:	c3                   	ret
