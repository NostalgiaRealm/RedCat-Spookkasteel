  427eb0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  427eb4:	56                   	push   esi
  427eb5:	8b f1                	mov    esi,ecx
  427eb7:	50                   	push   eax
  427eb8:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  427ebc:	51                   	push   ecx
  427ebd:	8b ce                	mov    ecx,esi
  427ebf:	e8 ec b0 ff ff       	call   0x422fb0
  427ec4:	8b ce                	mov    ecx,esi
  427ec6:	e8 c5 0b 00 00       	call   0x428a90
  427ecb:	5e                   	pop    esi
  427ecc:	c2 08 00             	ret    0x8
  427ecf:	90                   	nop
  427ed0:	56                   	push   esi
  427ed1:	8b f1                	mov    esi,ecx
  427ed3:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  427ed7:	8b 06                	mov    eax,DWORD PTR [esi]
  427ed9:	51                   	push   ecx
  427eda:	8b ce                	mov    ecx,esi
  427edc:	ff 90 a0 00 00 00    	call   DWORD PTR [eax+0xa0]
  427ee2:	84 c0                	test   al,al
  427ee4:	74 25                	je     0x427f0b
  427ee6:	8b 96 7c 01 00 00    	mov    edx,DWORD PTR [esi+0x17c]
  427eec:	52                   	push   edx
  427eed:	e8 ae ea 06 00       	call   0x4969a0
  427ef2:	8b c8                	mov    ecx,eax
  427ef4:	e8 77 53 00 00       	call   0x42d270
  427ef9:	6a 00                	push   0x0
  427efb:	8b ce                	mov    ecx,esi
  427efd:	e8 0e b8 ff ff       	call   0x423710
  427f02:	6a 00                	push   0x0
  427f04:	8b ce                	mov    ecx,esi
  427f06:	e8 45 a4 0d 00       	call   0x502350
  427f0b:	5e                   	pop    esi
  427f0c:	c2 04 00             	ret    0x4
  427f0f:	90                   	nop
  427f10:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  427f16:	6a ff                	push   0xffffffff
  427f18:	68 a0 2c 62 00       	push   0x622ca0
  427f1d:	50                   	push   eax
  427f1e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  427f25:	83 ec 24             	sub    esp,0x24
  427f28:	53                   	push   ebx
  427f29:	8b d9                	mov    ebx,ecx
  427f2b:	55                   	push   ebp
  427f2c:	56                   	push   esi
  427f2d:	8b 03                	mov    eax,DWORD PTR [ebx]
  427f2f:	57                   	push   edi
  427f30:	ff 90 a8 00 00 00    	call   DWORD PTR [eax+0xa8]
  427f36:	84 c0                	test   al,al
  427f38:	0f 85 92 00 00 00    	jne    0x427fd0
  427f3e:	8a 4c 24 48          	mov    cl,BYTE PTR [esp+0x48]
  427f42:	6a 00                	push   0x0
  427f44:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  427f48:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  427f4c:	e8 4f c1 fd ff       	call   0x4040a0
  427f51:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  427f56:	83 c9 ff             	or     ecx,0xffffffff
  427f59:	33 c0                	xor    eax,eax
  427f5b:	6a 01                	push   0x1
  427f5d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  427f5f:	f7 d1                	not    ecx
  427f61:	49                   	dec    ecx
  427f62:	8b e9                	mov    ebp,ecx
  427f64:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  427f68:	55                   	push   ebp
  427f69:	e8 d2 99 fd ff       	call   0x401940
  427f6e:	84 c0                	test   al,al
  427f70:	74 25                	je     0x427f97
  427f72:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  427f76:	8b cd                	mov    ecx,ebp
  427f78:	8b d1                	mov    edx,ecx
  427f7a:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  427f7f:	c1 e9 02             	shr    ecx,0x2
  427f82:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  427f84:	8b ca                	mov    ecx,edx
  427f86:	83 e1 03             	and    ecx,0x3
  427f89:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  427f8b:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  427f8f:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
  427f93:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  427f97:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  427f9b:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
  427fa2:	00 
  427fa3:	51                   	push   ecx
  427fa4:	68 ab 00 00 00       	push   0xab
  427fa9:	68 a8 fd 68 00       	push   0x68fda8
  427fae:	68 fc f8 68 00       	push   0x68f8fc
  427fb3:	e8 38 88 17 00       	call   0x5a07f0
  427fb8:	ff d0                	call   eax
  427fba:	83 c4 10             	add    esp,0x10
  427fbd:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  427fc1:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  427fc8:	ff 
  427fc9:	6a 01                	push   0x1
  427fcb:	e8 d0 c0 fd ff       	call   0x4040a0
  427fd0:	8b 83 a4 01 00 00    	mov    eax,DWORD PTR [ebx+0x1a4]
  427fd6:	85 c0                	test   eax,eax
  427fd8:	0f 84 4c 01 00 00    	je     0x42812a
  427fde:	8d 54 24 14          	lea    edx,[esp+0x14]
  427fe2:	8b cb                	mov    ecx,ebx
  427fe4:	52                   	push   edx
  427fe5:	e8 e6 b7 ff ff       	call   0x4237d0
  427fea:	8b 8b a4 01 00 00    	mov    ecx,DWORD PTR [ebx+0x1a4]
  427ff0:	8b 10                	mov    edx,DWORD PTR [eax]
  427ff2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  427ff6:	3b ca                	cmp    ecx,edx
  427ff8:	0f 94 44 24 13       	sete   BYTE PTR [esp+0x13]
  427ffd:	85 c0                	test   eax,eax
  427fff:	74 18                	je     0x428019
  428001:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  428004:	8b c8                	mov    ecx,eax
  428006:	83 c0 14             	add    eax,0x14
  428009:	4e                   	dec    esi
  42800a:	8b d6                	mov    edx,esi
  42800c:	85 d2                	test   edx,edx
  42800e:	89 30                	mov    DWORD PTR [eax],esi
  428010:	75 07                	jne    0x428019
  428012:	6a 00                	push   0x0
  428014:	e8 a7 3f 18 00       	call   0x5abfc0
  428019:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  42801d:	84 c0                	test   al,al
  42801f:	74 11                	je     0x428032
  428021:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  428025:	8b 13                	mov    edx,DWORD PTR [ebx]
  428027:	50                   	push   eax
  428028:	8b cb                	mov    ecx,ebx
  42802a:	ff 52 70             	call   DWORD PTR [edx+0x70]
  42802d:	e9 3a 01 00 00       	jmp    0x42816c
  428032:	8b 83 a4 01 00 00    	mov    eax,DWORD PTR [ebx+0x1a4]
  428038:	51                   	push   ecx
  428039:	8b cc                	mov    ecx,esp
  42803b:	89 64 24 18          	mov    DWORD PTR [esp+0x18],esp
  42803f:	85 c0                	test   eax,eax
  428041:	89 01                	mov    DWORD PTR [ecx],eax
  428043:	74 03                	je     0x428048
  428045:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  428048:	e8 13 30 fe ff       	call   0x40b060
  42804d:	8b f0                	mov    esi,eax
  42804f:	33 c0                	xor    eax,eax
  428051:	83 c4 04             	add    esp,0x4
  428054:	3b f0                	cmp    esi,eax
  428056:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  42805a:	0f 85 af 00 00 00    	jne    0x42810f
  428060:	8a 4c 24 48          	mov    cl,BYTE PTR [esp+0x48]
  428064:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  428069:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  42806d:	83 c9 ff             	or     ecx,0xffffffff
  428070:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  428072:	f7 d1                	not    ecx
  428074:	49                   	dec    ecx
  428075:	6a 01                	push   0x1
  428077:	8b e9                	mov    ebp,ecx
  428079:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42807d:	55                   	push   ebp
  42807e:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  428082:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  428086:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  42808a:	e8 b1 98 fd ff       	call   0x401940
  42808f:	84 c0                	test   al,al
  428091:	74 29                	je     0x4280bc
  428093:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  428097:	8b cd                	mov    ecx,ebp
  428099:	8b d1                	mov    edx,ecx
  42809b:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4280a0:	c1 e9 02             	shr    ecx,0x2
  4280a3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4280a5:	8b ca                	mov    ecx,edx
  4280a7:	83 e1 03             	and    ecx,0x3
  4280aa:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4280ac:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  4280b0:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4280b4:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
  4280b8:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  4280bc:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4280c0:	c7 44 24 3c 01 00 00 	mov    DWORD PTR [esp+0x3c],0x1
  4280c7:	00 
  4280c8:	51                   	push   ecx
  4280c9:	68 ba 00 00 00       	push   0xba
  4280ce:	68 a8 fd 68 00       	push   0x68fda8
  4280d3:	68 7c ec 68 00       	push   0x68ec7c
  4280d8:	e8 13 87 17 00       	call   0x5a07f0
  4280dd:	ff d0                	call   eax
  4280df:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4280e3:	83 c4 10             	add    esp,0x10
  4280e6:	85 c0                	test   eax,eax
  4280e8:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  4280ef:	ff 
  4280f0:	74 1d                	je     0x42810f
  4280f2:	8d 48 ff             	lea    ecx,[eax-0x1]
  4280f5:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4280f8:	84 c0                	test   al,al
  4280fa:	74 0a                	je     0x428106
  4280fc:	3c ff                	cmp    al,0xff
  4280fe:	74 06                	je     0x428106
  428100:	fe c8                	dec    al
  428102:	88 01                	mov    BYTE PTR [ecx],al
  428104:	eb 09                	jmp    0x42810f
  428106:	51                   	push   ecx
  428107:	e8 e4 64 1d 00       	call   0x5fe5f0
  42810c:	83 c4 04             	add    esp,0x4
  42810f:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  428113:	8b 06                	mov    eax,DWORD PTR [esi]
  428115:	8b 3b                	mov    edi,DWORD PTR [ebx]
  428117:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42811b:	52                   	push   edx
  42811c:	51                   	push   ecx
  42811d:	8b ce                	mov    ecx,esi
  42811f:	ff 50 48             	call   DWORD PTR [eax+0x48]
  428122:	50                   	push   eax
  428123:	8b cb                	mov    ecx,ebx
  428125:	ff 57 74             	call   DWORD PTR [edi+0x74]
  428128:	eb 42                	jmp    0x42816c
  42812a:	8b cb                	mov    ecx,ebx
  42812c:	e8 af 01 00 00       	call   0x4282e0
  428131:	8b c8                	mov    ecx,eax
  428133:	e8 38 d3 16 00       	call   0x595470
  428138:	8b c8                	mov    ecx,eax
  42813a:	e8 21 e4 12 00       	call   0x556560
  42813f:	8b c8                	mov    ecx,eax
  428141:	e8 aa 30 17 00       	call   0x59b1f0
  428146:	84 c0                	test   al,al
  428148:	74 22                	je     0x42816c
  42814a:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  42814e:	8b 33                	mov    esi,DWORD PTR [ebx]
  428150:	52                   	push   edx
  428151:	8b cb                	mov    ecx,ebx
  428153:	e8 88 01 00 00       	call   0x4282e0
  428158:	8b c8                	mov    ecx,eax
  42815a:	e8 11 d3 16 00       	call   0x595470
  42815f:	8b c8                	mov    ecx,eax
  428161:	e8 ba 3b 17 00       	call   0x59bd20
  428166:	50                   	push   eax
  428167:	8b cb                	mov    ecx,ebx
  428169:	ff 56 74             	call   DWORD PTR [esi+0x74]
  42816c:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  428170:	5f                   	pop    edi
  428171:	5e                   	pop    esi
  428172:	5d                   	pop    ebp
  428173:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42817a:	5b                   	pop    ebx
  42817b:	83 c4 30             	add    esp,0x30
  42817e:	c2 08 00             	ret    0x8
  428181:	90                   	nop
  428182:	90                   	nop
  428183:	90                   	nop
  428184:	90                   	nop
  428185:	90                   	nop
  428186:	90                   	nop
  428187:	90                   	nop
  428188:	90                   	nop
  428189:	90                   	nop
  42818a:	90                   	nop
  42818b:	90                   	nop
  42818c:	90                   	nop
  42818d:	90                   	nop
  42818e:	90                   	nop
  42818f:	90                   	nop
