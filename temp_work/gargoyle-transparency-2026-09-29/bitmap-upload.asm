  5c1f40:	83 ec 68             	sub    esp,0x68
  5c1f43:	53                   	push   ebx
  5c1f44:	8b 5c 24 70          	mov    ebx,DWORD PTR [esp+0x70]
  5c1f48:	55                   	push   ebp
  5c1f49:	56                   	push   esi
  5c1f4a:	8b 43 70             	mov    eax,DWORD PTR [ebx+0x70]
  5c1f4d:	57                   	push   edi
  5c1f4e:	85 c0                	test   eax,eax
  5c1f50:	74 02                	je     0x5c1f54
  5c1f52:	8b d8                	mov    ebx,eax
  5c1f54:	8b 43 6c             	mov    eax,DWORD PTR [ebx+0x6c]
  5c1f57:	85 c0                	test   eax,eax
  5c1f59:	0f 8f 12 04 00 00    	jg     0x5c2371
  5c1f5f:	8b 43 74             	mov    eax,DWORD PTR [ebx+0x74]
  5c1f62:	85 c0                	test   eax,eax
  5c1f64:	0f 85 07 04 00 00    	jne    0x5c2371
  5c1f6a:	8b 83 ac 00 00 00    	mov    eax,DWORD PTR [ebx+0xac]
  5c1f70:	85 c0                	test   eax,eax
  5c1f72:	75 11                	jne    0x5c1f85
  5c1f74:	6a 00                	push   0x0
  5c1f76:	68 70 3f 6b 00       	push   0x6b3f70
  5c1f7b:	68 a8 07 00 00       	push   0x7a8
  5c1f80:	e9 f8 03 00 00       	jmp    0x5c237d
  5c1f85:	8b b3 90 00 00 00    	mov    esi,DWORD PTR [ebx+0x90]
  5c1f8b:	8b 8b 94 00 00 00    	mov    ecx,DWORD PTR [ebx+0x94]
  5c1f91:	8b c6                	mov    eax,esi
  5c1f93:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  5c1f9a:	00 
  5c1f9b:	3b c1                	cmp    eax,ecx
  5c1f9d:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5c1fa1:	7f 1e                	jg     0x5c1fc1
  5c1fa3:	8d 54 83 48          	lea    edx,[ebx+eax*4+0x48]
  5c1fa7:	83 3a 00             	cmp    DWORD PTR [edx],0x0
  5c1faa:	74 0d                	je     0x5c1fb9
  5c1fac:	3b 43 14             	cmp    eax,DWORD PTR [ebx+0x14]
  5c1faf:	74 08                	je     0x5c1fb9
  5c1fb1:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
  5c1fb8:	00 
  5c1fb9:	40                   	inc    eax
  5c1fba:	83 c2 04             	add    edx,0x4
  5c1fbd:	3b c1                	cmp    eax,ecx
  5c1fbf:	7e e6                	jle    0x5c1fa7
  5c1fc1:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5c1fc5:	85 c0                	test   eax,eax
  5c1fc7:	74 08                	je     0x5c1fd1
  5c1fc9:	8b e9                	mov    ebp,ecx
  5c1fcb:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  5c1fcf:	eb 06                	jmp    0x5c1fd7
  5c1fd1:	89 74 24 10          	mov    DWORD PTR [esp+0x10],esi
  5c1fd5:	8b ee                	mov    ebp,esi
  5c1fd7:	8b 43 68             	mov    eax,DWORD PTR [ebx+0x68]
  5c1fda:	8b bb ac 00 00 00    	mov    edi,DWORD PTR [ebx+0xac]
  5c1fe0:	85 c0                	test   eax,eax
  5c1fe2:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  5c1fe6:	c7 83 ac 00 00 00 00 	mov    DWORD PTR [ebx+0xac],0x0
  5c1fed:	00 00 00 
  5c1ff0:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  5c1ff4:	74 22                	je     0x5c2018
  5c1ff6:	8b 8b 8c 00 00 00    	mov    ecx,DWORD PTR [ebx+0x8c]
  5c1ffc:	e8 cf 4a 00 00       	call   0x5c6ad0
  5c2001:	85 c0                	test   eax,eax
  5c2003:	75 13                	jne    0x5c2018
  5c2005:	f7 83 a4 00 00 00 00 	test   DWORD PTR [ebx+0xa4],0x10000
  5c200c:	00 01 00 
  5c200f:	74 07                	je     0x5c2018
  5c2011:	c7 43 68 00 00 00 00 	mov    DWORD PTR [ebx+0x68],0x0
  5c2018:	55                   	push   ebp
  5c2019:	56                   	push   esi
  5c201a:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  5c201e:	8b cb                	mov    ecx,ebx
  5c2020:	e8 ab e8 ff ff       	call   0x5c08d0
  5c2025:	85 c0                	test   eax,eax
  5c2027:	75 10                	jne    0x5c2039
  5c2029:	50                   	push   eax
  5c202a:	68 70 3f 6b 00       	push   0x6b3f70
  5c202f:	68 d3 07 00 00       	push   0x7d3
  5c2034:	e9 44 03 00 00       	jmp    0x5c237d
  5c2039:	89 bb ac 00 00 00    	mov    DWORD PTR [ebx+0xac],edi
  5c203f:	33 ff                	xor    edi,edi
  5c2041:	3b f5                	cmp    esi,ebp
  5c2043:	c7 44 24 7c 01 00 00 	mov    DWORD PTR [esp+0x7c],0x1
  5c204a:	00 
  5c204b:	89 7b 68             	mov    DWORD PTR [ebx+0x68],edi
  5c204e:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  5c2052:	0f 8f 50 01 00 00    	jg     0x5c21a8
  5c2058:	8d 04 b5 00 00 00 00 	lea    eax,[esi*4+0x0]
  5c205f:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5c2063:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5c2067:	8d 0c b5 00 00 00 00 	lea    ecx,[esi*4+0x0]
  5c206e:	2b c1                	sub    eax,ecx
  5c2070:	8b 6c 04 34          	mov    ebp,DWORD PTR [esp+eax*1+0x34]
  5c2074:	8b cd                	mov    ecx,ebp
  5c2076:	e8 15 ed ff ff       	call   0x5c0d90
  5c207b:	b9 09 00 00 00       	mov    ecx,0x9
  5c2080:	8d b3 80 00 00 00    	lea    esi,[ebx+0x80]
  5c2086:	8d 7c 24 54          	lea    edi,[esp+0x54]
  5c208a:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  5c208e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5c2090:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  5c2094:	8d 44 24 54          	lea    eax,[esp+0x54]
  5c2098:	50                   	push   eax
  5c2099:	56                   	push   esi
  5c209a:	53                   	push   ebx
  5c209b:	e8 f0 12 00 00       	call   0x5c3390
  5c20a0:	83 c4 0c             	add    esp,0xc
  5c20a3:	85 c0                	test   eax,eax
  5c20a5:	75 10                	jne    0x5c20b7
  5c20a7:	50                   	push   eax
  5c20a8:	68 70 3f 6b 00       	push   0x6b3f70
  5c20ad:	68 f3 07 00 00       	push   0x7f3
  5c20b2:	e9 b1 00 00 00       	jmp    0x5c2168
  5c20b7:	8b 83 a8 00 00 00    	mov    eax,DWORD PTR [ebx+0xa8]
  5c20bd:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  5c20c1:	51                   	push   ecx
  5c20c2:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  5c20c6:	8b d6                	mov    edx,esi
  5c20c8:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
  5c20cb:	85 c0                	test   eax,eax
  5c20cd:	75 10                	jne    0x5c20df
  5c20cf:	50                   	push   eax
  5c20d0:	68 70 3f 6b 00       	push   0x6b3f70
  5c20d5:	68 00 08 00 00       	push   0x800
  5c20da:	e9 89 00 00 00       	jmp    0x5c2168
  5c20df:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  5c20e3:	85 d2                	test   edx,edx
  5c20e5:	74 75                	je     0x5c215c
  5c20e7:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  5c20eb:	85 c9                	test   ecx,ecx
  5c20ed:	74 6d                	je     0x5c215c
  5c20ef:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
  5c20f2:	8d 45 04             	lea    eax,[ebp+0x4]
  5c20f5:	57                   	push   edi
  5c20f6:	8b 38                	mov    edi,DWORD PTR [eax]
  5c20f8:	57                   	push   edi
  5c20f9:	53                   	push   ebx
  5c20fa:	51                   	push   ecx
  5c20fb:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  5c20ff:	51                   	push   ecx
  5c2100:	55                   	push   ebp
  5c2101:	52                   	push   edx
  5c2102:	50                   	push   eax
  5c2103:	e8 58 8a 01 00       	call   0x5dab60
  5c2108:	83 c4 20             	add    esp,0x20
  5c210b:	85 c0                	test   eax,eax
  5c210d:	75 0d                	jne    0x5c211c
  5c210f:	50                   	push   eax
  5c2110:	68 70 3f 6b 00       	push   0x6b3f70
  5c2115:	68 12 08 00 00       	push   0x812
  5c211a:	eb 4c                	jmp    0x5c2168
  5c211c:	8b 83 a8 00 00 00    	mov    eax,DWORD PTR [ebx+0xa8]
  5c2122:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  5c2126:	8b d6                	mov    edx,esi
  5c2128:	ff 50 40             	call   DWORD PTR [eax+0x40]
  5c212b:	85 c0                	test   eax,eax
  5c212d:	75 0d                	jne    0x5c213c
  5c212f:	50                   	push   eax
  5c2130:	68 70 3f 6b 00       	push   0x6b3f70
  5c2135:	68 1a 08 00 00       	push   0x81a
  5c213a:	eb 2c                	jmp    0x5c2168
  5c213c:	8b 54 24 74          	mov    edx,DWORD PTR [esp+0x74]
  5c2140:	8b 83 a0 00 00 00    	mov    eax,DWORD PTR [ebx+0xa0]
  5c2146:	3b d0                	cmp    edx,eax
  5c2148:	74 3a                	je     0x5c2184
  5c214a:	8b cb                	mov    ecx,ebx
  5c214c:	e8 4f 1e 00 00       	call   0x5c3fa0
  5c2151:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  5c2155:	e8 b6 2b 00 00       	call   0x5c4d10
  5c215a:	eb 28                	jmp    0x5c2184
  5c215c:	6a 00                	push   0x0
  5c215e:	68 70 3f 6b 00       	push   0x6b3f70
  5c2163:	68 07 08 00 00       	push   0x807
  5c2168:	68 ac 97 6a 00       	push   0x6a97ac
  5c216d:	68 70 3f 6b 00       	push   0x6b3f70
  5c2172:	6a ff                	push   0xffffffff
  5c2174:	e8 a7 d0 00 00       	call   0x5cf220
  5c2179:	83 c4 18             	add    esp,0x18
  5c217c:	c7 44 24 7c 00 00 00 	mov    DWORD PTR [esp+0x7c],0x0
  5c2183:	00 
  5c2184:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5c2188:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5c218c:	46                   	inc    esi
  5c218d:	83 c1 04             	add    ecx,0x4
  5c2190:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  5c2194:	3b f0                	cmp    esi,eax
  5c2196:	8b 74 24 24          	mov    esi,DWORD PTR [esp+0x24]
  5c219a:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  5c219e:	0f 8e bf fe ff ff    	jle    0x5c2063
  5c21a4:	8b e8                	mov    ebp,eax
  5c21a6:	33 ff                	xor    edi,edi
  5c21a8:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  5c21ac:	8b d5                	mov    edx,ebp
  5c21ae:	2b d6                	sub    edx,esi
  5c21b0:	89 4b 68             	mov    DWORD PTR [ebx+0x68],ecx
  5c21b3:	42                   	inc    edx
  5c21b4:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  5c21b8:	89 bb b4 00 00 00    	mov    DWORD PTR [ebx+0xb4],edi
  5c21be:	89 bb b0 00 00 00    	mov    DWORD PTR [ebx+0xb0],edi
  5c21c4:	89 bb b8 00 00 00    	mov    DWORD PTR [ebx+0xb8],edi
  5c21ca:	e8 e1 e9 ff ff       	call   0x5c0bb0
  5c21cf:	39 7c 24 7c          	cmp    DWORD PTR [esp+0x7c],edi
  5c21d3:	75 1f                	jne    0x5c21f4
  5c21d5:	57                   	push   edi
  5c21d6:	68 70 3f 6b 00       	push   0x6b3f70
  5c21db:	68 33 08 00 00       	push   0x833
  5c21e0:	68 ac 97 6a 00       	push   0x6a97ac
  5c21e5:	68 70 3f 6b 00       	push   0x6b3f70
  5c21ea:	6a ff                	push   0xffffffff
  5c21ec:	e8 2f d0 00 00       	call   0x5cf220
  5c21f1:	83 c4 18             	add    esp,0x18
  5c21f4:	39 7b 68             	cmp    DWORD PTR [ebx+0x68],edi
  5c21f7:	0f 84 d8 00 00 00    	je     0x5c22d5
  5c21fd:	8b 8b 8c 00 00 00    	mov    ecx,DWORD PTR [ebx+0x8c]
  5c2203:	e8 c8 48 00 00       	call   0x5c6ad0
  5c2208:	85 c0                	test   eax,eax
  5c220a:	0f 85 c5 00 00 00    	jne    0x5c22d5
  5c2210:	f7 83 a4 00 00 00 00 	test   DWORD PTR [ebx+0xa4],0x10000
  5c2217:	00 01 00 
  5c221a:	0f 84 b5 00 00 00    	je     0x5c22d5
  5c2220:	8b 93 a8 00 00 00    	mov    edx,DWORD PTR [ebx+0xa8]
  5c2226:	8b 8b ac 00 00 00    	mov    ecx,DWORD PTR [ebx+0xac]
  5c222c:	ff 52 50             	call   DWORD PTR [edx+0x50]
  5c222f:	3b c7                	cmp    eax,edi
  5c2231:	74 0f                	je     0x5c2242
  5c2233:	8b 4b 68             	mov    ecx,DWORD PTR [ebx+0x68]
  5c2236:	3b 81 ac 00 00 00    	cmp    eax,DWORD PTR [ecx+0xac]
  5c223c:	0f 84 93 00 00 00    	je     0x5c22d5
  5c2242:	8b 4b 68             	mov    ecx,DWORD PTR [ebx+0x68]
  5c2245:	8b 91 a4 00 00 00    	mov    edx,DWORD PTR [ecx+0xa4]
  5c224b:	83 ca 10             	or     edx,0x10
  5c224e:	52                   	push   edx
  5c224f:	8b 93 a8 00 00 00    	mov    edx,DWORD PTR [ebx+0xa8]
  5c2255:	e8 56 f7 ff ff       	call   0x5c19b0
  5c225a:	85 c0                	test   eax,eax
  5c225c:	75 10                	jne    0x5c226e
  5c225e:	57                   	push   edi
  5c225f:	68 70 3f 6b 00       	push   0x6b3f70
  5c2264:	68 42 08 00 00       	push   0x842
  5c2269:	e9 0f 01 00 00       	jmp    0x5c237d
  5c226e:	8b 4b 68             	mov    ecx,DWORD PTR [ebx+0x68]
  5c2271:	8b 83 a8 00 00 00    	mov    eax,DWORD PTR [ebx+0xa8]
  5c2277:	8b 91 ac 00 00 00    	mov    edx,DWORD PTR [ecx+0xac]
  5c227d:	8b 8b ac 00 00 00    	mov    ecx,DWORD PTR [ebx+0xac]
  5c2283:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  5c2286:	85 c0                	test   eax,eax
  5c2288:	75 3c                	jne    0x5c22c6
  5c228a:	57                   	push   edi
  5c228b:	68 70 3f 6b 00       	push   0x6b3f70
  5c2290:	68 49 08 00 00       	push   0x849
  5c2295:	68 ac 97 6a 00       	push   0x6a97ac
  5c229a:	68 70 3f 6b 00       	push   0x6b3f70
  5c229f:	6a ff                	push   0xffffffff
  5c22a1:	e8 7a cf 00 00       	call   0x5cf220
  5c22a6:	8b 4b 68             	mov    ecx,DWORD PTR [ebx+0x68]
  5c22a9:	83 c4 18             	add    esp,0x18
  5c22ac:	33 d2                	xor    edx,edx
  5c22ae:	e8 6d f9 ff ff       	call   0x5c1c20
  5c22b3:	33 d2                	xor    edx,edx
  5c22b5:	8b cb                	mov    ecx,ebx
  5c22b7:	e8 64 f9 ff ff       	call   0x5c1c20
  5c22bc:	5f                   	pop    edi
  5c22bd:	5e                   	pop    esi
  5c22be:	5d                   	pop    ebp
  5c22bf:	33 c0                	xor    eax,eax
  5c22c1:	5b                   	pop    ebx
  5c22c2:	83 c4 68             	add    esp,0x68
  5c22c5:	c3                   	ret
  5c22c6:	8b 93 a8 00 00 00    	mov    edx,DWORD PTR [ebx+0xa8]
  5c22cc:	8b 8b ac 00 00 00    	mov    ecx,DWORD PTR [ebx+0xac]
  5c22d2:	ff 52 50             	call   DWORD PTR [edx+0x50]
  5c22d5:	8b bb 94 00 00 00    	mov    edi,DWORD PTR [ebx+0x94]
  5c22db:	6a 00                	push   0x0
  5c22dd:	53                   	push   ebx
  5c22de:	89 ab 94 00 00 00    	mov    DWORD PTR [ebx+0x94],ebp
  5c22e4:	e8 67 76 01 00       	call   0x5d9950
  5c22e9:	83 c4 08             	add    esp,0x8
  5c22ec:	85 c0                	test   eax,eax
  5c22ee:	75 27                	jne    0x5c2317
  5c22f0:	50                   	push   eax
  5c22f1:	68 70 3f 6b 00       	push   0x6b3f70
  5c22f6:	68 5d 08 00 00       	push   0x85d
  5c22fb:	68 ac 97 6a 00       	push   0x6a97ac
  5c2300:	68 70 3f 6b 00       	push   0x6b3f70
  5c2305:	6a ff                	push   0xffffffff
  5c2307:	e8 14 cf 00 00       	call   0x5cf220
  5c230c:	83 c4 18             	add    esp,0x18
  5c230f:	c7 44 24 7c 00 00 00 	mov    DWORD PTR [esp+0x7c],0x0
  5c2316:	00 
  5c2317:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5c231b:	89 bb 94 00 00 00    	mov    DWORD PTR [ebx+0x94],edi
  5c2321:	85 c0                	test   eax,eax
  5c2323:	75 28                	jne    0x5c234d
  5c2325:	3b ef                	cmp    ebp,edi
  5c2327:	7d 24                	jge    0x5c234d
  5c2329:	8d 75 01             	lea    esi,[ebp+0x1]
  5c232c:	3b f7                	cmp    esi,edi
  5c232e:	7f 1d                	jg     0x5c234d
  5c2330:	8d 7e ff             	lea    edi,[esi-0x1]
  5c2333:	56                   	push   esi
  5c2334:	8b d7                	mov    edx,edi
  5c2336:	8b cb                	mov    ecx,ebx
  5c2338:	e8 03 03 00 00       	call   0x5c2640
  5c233d:	85 c0                	test   eax,eax
  5c233f:	74 22                	je     0x5c2363
  5c2341:	8b 83 94 00 00 00    	mov    eax,DWORD PTR [ebx+0x94]
  5c2347:	46                   	inc    esi
  5c2348:	47                   	inc    edi
  5c2349:	3b f0                	cmp    esi,eax
  5c234b:	7e e6                	jle    0x5c2333
  5c234d:	8b 44 24 7c          	mov    eax,DWORD PTR [esp+0x7c]
  5c2351:	5f                   	pop    edi
  5c2352:	5e                   	pop    esi
  5c2353:	c7 83 b8 00 00 00 00 	mov    DWORD PTR [ebx+0xb8],0x0
  5c235a:	00 00 00 
  5c235d:	5d                   	pop    ebp
  5c235e:	5b                   	pop    ebx
  5c235f:	83 c4 68             	add    esp,0x68
  5c2362:	c3                   	ret
  5c2363:	6a 00                	push   0x0
  5c2365:	68 70 3f 6b 00       	push   0x6b3f70
  5c236a:	68 68 08 00 00       	push   0x868
  5c236f:	eb 0c                	jmp    0x5c237d
  5c2371:	6a 00                	push   0x0
  5c2373:	68 70 3f 6b 00       	push   0x6b3f70
  5c2378:	68 a2 07 00 00       	push   0x7a2
  5c237d:	68 ac 97 6a 00       	push   0x6a97ac
  5c2382:	68 70 3f 6b 00       	push   0x6b3f70
  5c2387:	6a ff                	push   0xffffffff
  5c2389:	e8 92 ce 00 00       	call   0x5cf220
  5c238e:	83 c4 18             	add    esp,0x18
  5c2391:	33 c0                	xor    eax,eax
  5c2393:	5f                   	pop    edi
  5c2394:	5e                   	pop    esi
  5c2395:	5d                   	pop    ebp
  5c2396:	5b                   	pop    ebx
  5c2397:	83 c4 68             	add    esp,0x68
  5c239a:	c3                   	ret
  5c239b:	90                   	nop
  5c239c:	90                   	nop
  5c239d:	90                   	nop
  5c239e:	90                   	nop