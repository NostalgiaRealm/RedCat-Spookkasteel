
/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RC_ORIGINAL_DECOMPILED/originals/CTL3D32.DLL:     file format pei-i386


Disassembly of section .text:

5f001000 <.text>:
5f001000:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
5f001004:	85 c0                	test   eax,eax
5f001006:	75 03                	jne    0x5f00100b
5f001008:	33 c0                	xor    eax,eax
5f00100a:	c3                   	ret
5f00100b:	33 c9                	xor    ecx,ecx
5f00100d:	66 8b 0d 4e 52 00 5f 	mov    cx,WORD PTR ds:0x5f00524e
5f001014:	51                   	push   ecx
5f001015:	50                   	push   eax
5f001016:	ff 15 00 d3 00 5f    	call   DWORD PTR ds:0x5f00d300
5f00101c:	c3                   	ret
5f00101d:	cc                   	int3
5f00101e:	cc                   	int3
5f00101f:	cc                   	int3
5f001020:	56                   	push   esi
5f001021:	57                   	push   edi
5f001022:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
5f001026:	56                   	push   esi
5f001027:	e8 d4 ff ff ff       	call   0x5f001000
5f00102c:	83 c4 04             	add    esp,0x4
5f00102f:	8b f8                	mov    edi,eax
5f001031:	85 ff                	test   edi,edi
5f001033:	75 2c                	jne    0x5f001061
5f001035:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f001039:	83 f8 06             	cmp    eax,0x6
5f00103c:	75 08                	jne    0x5f001046
5f00103e:	8b 3d 90 a3 00 5f    	mov    edi,DWORD PTR ds:0x5f00a390
5f001044:	eb 0a                	jmp    0x5f001050
5f001046:	8d 04 80             	lea    eax,[eax+eax*4]
5f001049:	8b 3c c5 a4 a2 00 5f 	mov    edi,DWORD PTR [eax*8+0x5f00a2a4]
5f001050:	57                   	push   edi
5f001051:	33 c0                	xor    eax,eax
5f001053:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f001059:	50                   	push   eax
5f00105a:	56                   	push   esi
5f00105b:	ff 15 fc d2 00 5f    	call   DWORD PTR ds:0x5f00d2fc
5f001061:	8b c7                	mov    eax,edi
5f001063:	5f                   	pop    edi
5f001064:	5e                   	pop    esi
5f001065:	c3                   	ret
5f001066:	cc                   	int3
5f001067:	cc                   	int3
5f001068:	cc                   	int3
5f001069:	cc                   	int3
5f00106a:	cc                   	int3
5f00106b:	cc                   	int3
5f00106c:	cc                   	int3
5f00106d:	cc                   	int3
5f00106e:	cc                   	int3
5f00106f:	cc                   	int3
5f001070:	83 ec 20             	sub    esp,0x20
5f001073:	33 c0                	xor    eax,eax
5f001075:	66 a1 48 52 00 5f    	mov    ax,ds:0x5f005248
5f00107b:	56                   	push   esi
5f00107c:	8b 74 24 28          	mov    esi,DWORD PTR [esp+0x28]
5f001080:	57                   	push   edi
5f001081:	50                   	push   eax
5f001082:	8b 3d 00 d3 00 5f    	mov    edi,DWORD PTR ds:0x5f00d300
5f001088:	56                   	push   esi
5f001089:	ff d7                	call   edi
5f00108b:	85 c0                	test   eax,eax
5f00108d:	0f 85 d2 00 00 00    	jne    0x5f001165
5f001093:	33 c0                	xor    eax,eax
5f001095:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f00109b:	50                   	push   eax
5f00109c:	56                   	push   esi
5f00109d:	ff d7                	call   edi
5f00109f:	85 c0                	test   eax,eax
5f0010a1:	0f 85 be 00 00 00    	jne    0x5f001165
5f0010a7:	33 c0                	xor    eax,eax
5f0010a9:	66 a1 52 52 00 5f    	mov    ax,ds:0x5f005252
5f0010af:	50                   	push   eax
5f0010b0:	56                   	push   esi
5f0010b1:	ff d7                	call   edi
5f0010b3:	85 c0                	test   eax,eax
5f0010b5:	0f 85 aa 00 00 00    	jne    0x5f001165
5f0010bb:	33 c0                	xor    eax,eax
5f0010bd:	66 a1 4c 52 00 5f    	mov    ax,ds:0x5f00524c
5f0010c3:	50                   	push   eax
5f0010c4:	56                   	push   esi
5f0010c5:	ff d7                	call   edi
5f0010c7:	85 c0                	test   eax,eax
5f0010c9:	0f 85 96 00 00 00    	jne    0x5f001165
5f0010cf:	33 c0                	xor    eax,eax
5f0010d1:	66 a1 50 52 00 5f    	mov    ax,ds:0x5f005250
5f0010d7:	50                   	push   eax
5f0010d8:	56                   	push   esi
5f0010d9:	ff d7                	call   edi
5f0010db:	85 c0                	test   eax,eax
5f0010dd:	0f 85 82 00 00 00    	jne    0x5f001165
5f0010e3:	33 c0                	xor    eax,eax
5f0010e5:	66 a1 4a 52 00 5f    	mov    ax,ds:0x5f00524a
5f0010eb:	50                   	push   eax
5f0010ec:	56                   	push   esi
5f0010ed:	ff d7                	call   edi
5f0010ef:	85 c0                	test   eax,eax
5f0010f1:	75 72                	jne    0x5f001165
5f0010f3:	56                   	push   esi
5f0010f4:	e8 07 ff ff ff       	call   0x5f001000
5f0010f9:	83 c4 04             	add    esp,0x4
5f0010fc:	85 c0                	test   eax,eax
5f0010fe:	75 65                	jne    0x5f001165
5f001100:	80 3d a5 a3 00 5f 00 	cmp    BYTE PTR ds:0x5f00a3a5,0x0
5f001107:	74 3d                	je     0x5f001146
5f001109:	56                   	push   esi
5f00110a:	ff 15 ec d2 00 5f    	call   DWORD PTR ds:0x5f00d2ec
5f001110:	85 c0                	test   eax,eax
5f001112:	75 32                	jne    0x5f001146
5f001114:	8d 44 24 08          	lea    eax,[esp+0x8]
5f001118:	6a 10                	push   0x10
5f00111a:	50                   	push   eax
5f00111b:	56                   	push   esi
5f00111c:	ff 15 f0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f0
5f001122:	8d 4c 24 08          	lea    ecx,[esp+0x8]
5f001126:	68 00 c0 00 5f       	push   0x5f00c000
5f00112b:	51                   	push   ecx
5f00112c:	ff 15 3c d2 00 5f    	call   DWORD PTR ds:0x5f00d23c
5f001132:	85 c0                	test   eax,eax
5f001134:	75 10                	jne    0x5f001146
5f001136:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
5f00113a:	50                   	push   eax
5f00113b:	6a fc                	push   0xfffffffc
5f00113d:	56                   	push   esi
5f00113e:	ff 15 f4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f4
5f001144:	eb 0e                	jmp    0x5f001154
5f001146:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
5f00114a:	50                   	push   eax
5f00114b:	6a fc                	push   0xfffffffc
5f00114d:	56                   	push   esi
5f00114e:	ff 15 f8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f8
5f001154:	50                   	push   eax
5f001155:	33 c0                	xor    eax,eax
5f001157:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f00115d:	50                   	push   eax
5f00115e:	56                   	push   esi
5f00115f:	ff 15 fc d2 00 5f    	call   DWORD PTR ds:0x5f00d2fc
5f001165:	5f                   	pop    edi
5f001166:	5e                   	pop    esi
5f001167:	83 c4 20             	add    esp,0x20
5f00116a:	c3                   	ret
5f00116b:	cc                   	int3
5f00116c:	cc                   	int3
5f00116d:	cc                   	int3
5f00116e:	cc                   	int3
5f00116f:	cc                   	int3
5f001170:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f001174:	83 ec 04             	sub    esp,0x4
5f001177:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
5f00117b:	56                   	push   esi
5f00117c:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
5f001180:	57                   	push   edi
5f001181:	56                   	push   esi
5f001182:	8b 15 0c 52 00 5f    	mov    edx,DWORD PTR ds:0x5f00520c
5f001188:	50                   	push   eax
5f001189:	51                   	push   ecx
5f00118a:	52                   	push   edx
5f00118b:	ff 15 dc d2 00 5f    	call   DWORD PTR ds:0x5f00d2dc
5f001191:	8b f8                	mov    edi,eax
5f001193:	8b 0d 08 52 00 5f    	mov    ecx,DWORD PTR ds:0x5f005208
5f001199:	39 4e 0c             	cmp    DWORD PTR [esi+0xc],ecx
5f00119c:	75 77                	jne    0x5f001215
5f00119e:	a1 0c 52 00 5f       	mov    eax,ds:0x5f00520c
5f0011a3:	50                   	push   eax
5f0011a4:	ff 15 e0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e0
5f0011aa:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f0011b1:	5f 03 
5f0011b3:	72 18                	jb     0x5f0011cd
5f0011b5:	6a f0                	push   0xfffffff0
5f0011b7:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
5f0011ba:	50                   	push   eax
5f0011bb:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f0011c1:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x0
5f0011c8:	00 
5f0011c9:	a8 04                	test   al,0x4
5f0011cb:	75 08                	jne    0x5f0011d5
5f0011cd:	c7 44 24 08 01 00 00 	mov    DWORD PTR [esp+0x8],0x1
5f0011d4:	00 
5f0011d5:	8d 44 24 08          	lea    eax,[esp+0x8]
5f0011d9:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
5f0011dc:	50                   	push   eax
5f0011dd:	6a 00                	push   0x0
5f0011df:	68 f0 11 00 00       	push   0x11f0
5f0011e4:	51                   	push   ecx
5f0011e5:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f0011eb:	83 7c 24 08 00       	cmp    DWORD PTR [esp+0x8],0x0
5f0011f0:	74 12                	je     0x5f001204
5f0011f2:	a1 10 52 00 5f       	mov    eax,ds:0x5f005210
5f0011f7:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
5f0011fa:	50                   	push   eax
5f0011fb:	51                   	push   ecx
5f0011fc:	e8 6f fe ff ff       	call   0x5f001070
5f001201:	83 c4 08             	add    esp,0x8
5f001204:	33 c0                	xor    eax,eax
5f001206:	a3 0c 52 00 5f       	mov    ds:0x5f00520c,eax
5f00120b:	a3 10 52 00 5f       	mov    ds:0x5f005210,eax
5f001210:	a3 08 52 00 5f       	mov    ds:0x5f005208,eax
5f001215:	8b c7                	mov    eax,edi
5f001217:	5f                   	pop    edi
5f001218:	5e                   	pop    esi
5f001219:	83 c4 04             	add    esp,0x4
5f00121c:	c2 0c 00             	ret    0xc
5f00121f:	cc                   	int3
5f001220:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f001224:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
5f001228:	a3 10 52 00 5f       	mov    ds:0x5f005210,eax
5f00122d:	89 0d 08 52 00 5f    	mov    DWORD PTR ds:0x5f005208,ecx
5f001233:	ff 15 40 d2 00 5f    	call   DWORD PTR ds:0x5f00d240
5f001239:	50                   	push   eax
5f00123a:	8b 0d 5c 52 00 5f    	mov    ecx,DWORD PTR ds:0x5f00525c
5f001240:	51                   	push   ecx
5f001241:	68 70 11 00 5f       	push   0x5f001170
5f001246:	6a 04                	push   0x4
5f001248:	ff 15 d8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d8
5f00124e:	a3 0c 52 00 5f       	mov    ds:0x5f00520c,eax
5f001253:	c3                   	ret
5f001254:	cc                   	int3
5f001255:	cc                   	int3
5f001256:	cc                   	int3
5f001257:	cc                   	int3
5f001258:	cc                   	int3
5f001259:	cc                   	int3
5f00125a:	cc                   	int3
5f00125b:	cc                   	int3
5f00125c:	cc                   	int3
5f00125d:	cc                   	int3
5f00125e:	cc                   	int3
5f00125f:	cc                   	int3
5f001260:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f001264:	53                   	push   ebx
5f001265:	56                   	push   esi
5f001266:	57                   	push   edi
5f001267:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
5f00126b:	50                   	push   eax
5f00126c:	56                   	push   esi
5f00126d:	e8 ae fd ff ff       	call   0x5f001020
5f001272:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
5f001276:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
5f00127a:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
5f00127e:	83 c4 08             	add    esp,0x8
5f001281:	51                   	push   ecx
5f001282:	52                   	push   edx
5f001283:	53                   	push   ebx
5f001284:	56                   	push   esi
5f001285:	50                   	push   eax
5f001286:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f00128c:	8b f8                	mov    edi,eax
5f00128e:	8b 1d d4 d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d2d4
5f001294:	33 c0                	xor    eax,eax
5f001296:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f00129c:	50                   	push   eax
5f00129d:	56                   	push   esi
5f00129e:	ff d3                	call   ebx
5f0012a0:	33 c0                	xor    eax,eax
5f0012a2:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f0012a8:	50                   	push   eax
5f0012a9:	56                   	push   esi
5f0012aa:	ff d3                	call   ebx
5f0012ac:	8b c7                	mov    eax,edi
5f0012ae:	5f                   	pop    edi
5f0012af:	5e                   	pop    esi
5f0012b0:	5b                   	pop    ebx
5f0012b1:	c3                   	ret
5f0012b2:	cc                   	int3
5f0012b3:	cc                   	int3
5f0012b4:	cc                   	int3
5f0012b5:	cc                   	int3
5f0012b6:	cc                   	int3
5f0012b7:	cc                   	int3
5f0012b8:	cc                   	int3
5f0012b9:	cc                   	int3
5f0012ba:	cc                   	int3
5f0012bb:	cc                   	int3
5f0012bc:	cc                   	int3
5f0012bd:	cc                   	int3
5f0012be:	cc                   	int3
5f0012bf:	cc                   	int3
5f0012c0:	56                   	push   esi
5f0012c1:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
5f0012c5:	8b 06                	mov    eax,DWORD PTR [esi]
5f0012c7:	85 c0                	test   eax,eax
5f0012c9:	74 0d                	je     0x5f0012d8
5f0012cb:	50                   	push   eax
5f0012cc:	ff 15 bc d1 00 5f    	call   DWORD PTR ds:0x5f00d1bc
5f0012d2:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
5f0012d8:	5e                   	pop    esi
5f0012d9:	c3                   	ret
5f0012da:	cc                   	int3
5f0012db:	cc                   	int3
5f0012dc:	cc                   	int3
5f0012dd:	cc                   	int3
5f0012de:	cc                   	int3
5f0012df:	cc                   	int3
5f0012e0:	56                   	push   esi
5f0012e1:	be 84 52 00 5f       	mov    esi,0x5f005284
5f0012e6:	56                   	push   esi
5f0012e7:	e8 d4 ff ff ff       	call   0x5f0012c0
5f0012ec:	83 c4 04             	add    esp,0x4
5f0012ef:	83 c6 04             	add    esi,0x4
5f0012f2:	81 fe 90 52 00 5f    	cmp    esi,0x5f005290
5f0012f8:	72 ec                	jb     0x5f0012e6
5f0012fa:	68 90 52 00 5f       	push   0x5f005290
5f0012ff:	e8 bc ff ff ff       	call   0x5f0012c0
5f001304:	83 c4 04             	add    esp,0x4
5f001307:	5e                   	pop    esi
5f001308:	c3                   	ret
5f001309:	cc                   	int3
5f00130a:	cc                   	int3
5f00130b:	cc                   	int3
5f00130c:	cc                   	int3
5f00130d:	cc                   	int3
5f00130e:	cc                   	int3
5f00130f:	cc                   	int3
5f001310:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f001314:	56                   	push   esi
5f001315:	68 21 00 f0 00       	push   0xf00021
5f00131a:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
5f00131d:	8b 10                	mov    edx,DWORD PTR [eax]
5f00131f:	8b 48 0c             	mov    ecx,DWORD PTR [eax+0xc]
5f001322:	2b ce                	sub    ecx,esi
5f001324:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
5f001327:	51                   	push   ecx
5f001328:	2b c2                	sub    eax,edx
5f00132a:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
5f00132e:	50                   	push   eax
5f00132f:	56                   	push   esi
5f001330:	52                   	push   edx
5f001331:	51                   	push   ecx
5f001332:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f001338:	5e                   	pop    esi
5f001339:	c3                   	ret
5f00133a:	cc                   	int3
5f00133b:	cc                   	int3
5f00133c:	cc                   	int3
5f00133d:	cc                   	int3
5f00133e:	cc                   	int3
5f00133f:	cc                   	int3
5f001340:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
5f001344:	83 ec 10             	sub    esp,0x10
5f001347:	25 ff ff 00 00       	and    eax,0xffff
5f00134c:	53                   	push   ebx
5f00134d:	56                   	push   esi
5f00134e:	57                   	push   edi
5f00134f:	55                   	push   ebp
5f001350:	8b 0c 85 64 52 00 5f 	mov    ecx,DWORD PTR [eax*4+0x5f005264]
5f001357:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
5f00135b:	51                   	push   ecx
5f00135c:	57                   	push   edi
5f00135d:	ff 15 b8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b8
5f001363:	8b f0                	mov    esi,eax
5f001365:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
5f001369:	8d 4c 24 10          	lea    ecx,[esp+0x10]
5f00136d:	8b 03                	mov    eax,DWORD PTR [ebx]
5f00136f:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
5f001372:	8b 6b 08             	mov    ebp,DWORD PTR [ebx+0x8]
5f001375:	89 01                	mov    DWORD PTR [ecx],eax
5f001377:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
5f00137a:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
5f00137d:	89 69 08             	mov    DWORD PTR [ecx+0x8],ebp
5f001380:	66 8b 6c 24 34       	mov    bp,WORD PTR [esp+0x34]
5f001385:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
5f001388:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f00138c:	40                   	inc    eax
5f00138d:	66 f7 c5 02 00       	test   bp,0x2
5f001392:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
5f001396:	74 18                	je     0x5f0013b0
5f001398:	8d 44 24 10          	lea    eax,[esp+0x10]
5f00139c:	6a 00                	push   0x0
5f00139e:	6a 00                	push   0x0
5f0013a0:	6a 00                	push   0x0
5f0013a2:	50                   	push   eax
5f0013a3:	6a 02                	push   0x2
5f0013a5:	6a 00                	push   0x0
5f0013a7:	6a 00                	push   0x0
5f0013a9:	57                   	push   edi
5f0013aa:	ff 15 c8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1c8
5f0013b0:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
5f0013b3:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
5f0013b7:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f0013bb:	40                   	inc    eax
5f0013bc:	66 f7 c5 01 00       	test   bp,0x1
5f0013c1:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
5f0013c5:	74 18                	je     0x5f0013df
5f0013c7:	8d 44 24 10          	lea    eax,[esp+0x10]
5f0013cb:	6a 00                	push   0x0
5f0013cd:	6a 00                	push   0x0
5f0013cf:	6a 00                	push   0x0
5f0013d1:	50                   	push   eax
5f0013d2:	6a 02                	push   0x2
5f0013d4:	6a 00                	push   0x0
5f0013d6:	6a 00                	push   0x0
5f0013d8:	57                   	push   edi
5f0013d9:	ff 15 c8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1c8
5f0013df:	66 8b 44 24 30       	mov    ax,WORD PTR [esp+0x30]
5f0013e4:	66 3b 44 24 2c       	cmp    ax,WORD PTR [esp+0x2c]
5f0013e9:	74 12                	je     0x5f0013fd
5f0013eb:	0f b7 c0             	movzx  eax,ax
5f0013ee:	8b 0c 85 64 52 00 5f 	mov    ecx,DWORD PTR [eax*4+0x5f005264]
5f0013f5:	51                   	push   ecx
5f0013f6:	57                   	push   edi
5f0013f7:	ff 15 b8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b8
5f0013fd:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
5f001400:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
5f001404:	48                   	dec    eax
5f001405:	66 f7 c5 04 00       	test   bp,0x4
5f00140a:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f00140e:	74 18                	je     0x5f001428
5f001410:	8d 44 24 10          	lea    eax,[esp+0x10]
5f001414:	6a 00                	push   0x0
5f001416:	6a 00                	push   0x0
5f001418:	6a 00                	push   0x0
5f00141a:	50                   	push   eax
5f00141b:	6a 02                	push   0x2
5f00141d:	6a 00                	push   0x0
5f00141f:	6a 00                	push   0x0
5f001421:	57                   	push   edi
5f001422:	ff 15 c8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1c8
5f001428:	66 f7 c5 08 00       	test   bp,0x8
5f00142d:	74 33                	je     0x5f001462
5f00142f:	8b 03                	mov    eax,DWORD PTR [ebx]
5f001431:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f001435:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f001439:	48                   	dec    eax
5f00143a:	66 f7 c5 00 10       	test   bp,0x1000
5f00143f:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
5f001443:	74 05                	je     0x5f00144a
5f001445:	83 6c 24 18 02       	sub    DWORD PTR [esp+0x18],0x2
5f00144a:	8d 44 24 10          	lea    eax,[esp+0x10]
5f00144e:	6a 00                	push   0x0
5f001450:	6a 00                	push   0x0
5f001452:	6a 00                	push   0x0
5f001454:	50                   	push   eax
5f001455:	6a 02                	push   0x2
5f001457:	6a 00                	push   0x0
5f001459:	6a 00                	push   0x0
5f00145b:	57                   	push   edi
5f00145c:	ff 15 c8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1c8
5f001462:	56                   	push   esi
5f001463:	57                   	push   edi
5f001464:	ff 15 b8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b8
5f00146a:	5d                   	pop    ebp
5f00146b:	5f                   	pop    edi
5f00146c:	5e                   	pop    esi
5f00146d:	5b                   	pop    ebx
5f00146e:	83 c4 10             	add    esp,0x10
5f001471:	c3                   	ret
5f001472:	cc                   	int3
5f001473:	cc                   	int3
5f001474:	cc                   	int3
5f001475:	cc                   	int3
5f001476:	cc                   	int3
5f001477:	cc                   	int3
5f001478:	cc                   	int3
5f001479:	cc                   	int3
5f00147a:	cc                   	int3
5f00147b:	cc                   	int3
5f00147c:	cc                   	int3
5f00147d:	cc                   	int3
5f00147e:	cc                   	int3
5f00147f:	cc                   	int3
5f001480:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
5f001484:	83 ec 10             	sub    esp,0x10
5f001487:	8d 54 24 00          	lea    edx,[esp+0x0]
5f00148b:	56                   	push   esi
5f00148c:	57                   	push   edi
5f00148d:	8b 01                	mov    eax,DWORD PTR [ecx]
5f00148f:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
5f001492:	8b 79 08             	mov    edi,DWORD PTR [ecx+0x8]
5f001495:	89 02                	mov    DWORD PTR [edx],eax
5f001497:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
5f00149a:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
5f00149d:	89 7a 08             	mov    DWORD PTR [edx+0x8],edi
5f0014a0:	66 8b 7c 24 24       	mov    di,WORD PTR [esp+0x24]
5f0014a5:	89 42 0c             	mov    DWORD PTR [edx+0xc],eax
5f0014a8:	66 8b c7             	mov    ax,di
5f0014ab:	8d 54 24 08          	lea    edx,[esp+0x8]
5f0014af:	66 25 0f 00          	and    ax,0xf
5f0014b3:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
5f0014b7:	50                   	push   eax
5f0014b8:	6a 01                	push   0x1
5f0014ba:	6a 07                	push   0x7
5f0014bc:	52                   	push   edx
5f0014bd:	56                   	push   esi
5f0014be:	e8 7d fe ff ff       	call   0x5f001340
5f0014c3:	ff 4c 24 1c          	dec    DWORD PTR [esp+0x1c]
5f0014c7:	ff 4c 24 20          	dec    DWORD PTR [esp+0x20]
5f0014cb:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
5f0014cf:	ff 44 24 24          	inc    DWORD PTR [esp+0x24]
5f0014d3:	ff 44 24 28          	inc    DWORD PTR [esp+0x28]
5f0014d7:	83 c4 14             	add    esp,0x14
5f0014da:	57                   	push   edi
5f0014db:	6a 00                	push   0x0
5f0014dd:	6a 02                	push   0x2
5f0014df:	51                   	push   ecx
5f0014e0:	56                   	push   esi
5f0014e1:	e8 5a fe ff ff       	call   0x5f001340
5f0014e6:	83 c4 14             	add    esp,0x14
5f0014e9:	5f                   	pop    edi
5f0014ea:	5e                   	pop    esi
5f0014eb:	83 c4 10             	add    esp,0x10
5f0014ee:	c3                   	ret
5f0014ef:	cc                   	int3
5f0014f0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
5f0014f4:	83 ec 10             	sub    esp,0x10
5f0014f7:	8d 44 24 00          	lea    eax,[esp+0x0]
5f0014fb:	50                   	push   eax
5f0014fc:	51                   	push   ecx
5f0014fd:	ff 15 cc d2 00 5f    	call   DWORD PTR ds:0x5f00d2cc
5f001503:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
5f001507:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
5f00150b:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
5f00150f:	51                   	push   ecx
5f001510:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
5f001514:	52                   	push   edx
5f001515:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
5f001519:	50                   	push   eax
5f00151a:	51                   	push   ecx
5f00151b:	52                   	push   edx
5f00151c:	ff 15 c0 d1 00 5f    	call   DWORD PTR ds:0x5f00d1c0
5f001522:	83 c4 10             	add    esp,0x10
5f001525:	c3                   	ret
5f001526:	cc                   	int3
5f001527:	cc                   	int3
5f001528:	cc                   	int3
5f001529:	cc                   	int3
5f00152a:	cc                   	int3
5f00152b:	cc                   	int3
5f00152c:	cc                   	int3
5f00152d:	cc                   	int3
5f00152e:	cc                   	int3
5f00152f:	cc                   	int3
5f001530:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f001534:	81 ec 08 02 00 00    	sub    esp,0x208
5f00153a:	66 83 38 00          	cmp    WORD PTR [eax],0x0
5f00153e:	53                   	push   ebx
5f00153f:	56                   	push   esi
5f001540:	57                   	push   edi
5f001541:	8d 7c 24 14          	lea    edi,[esp+0x14]
5f001545:	55                   	push   ebp
5f001546:	74 65                	je     0x5f0015ad
5f001548:	8b 35 a4 d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d2a4
5f00154e:	33 db                	xor    ebx,ebx
5f001550:	66 8b 08             	mov    cx,WORD PTR [eax]
5f001553:	66 83 f9 26          	cmp    cx,0x26
5f001557:	75 0a                	jne    0x5f001563
5f001559:	83 c0 02             	add    eax,0x2
5f00155c:	66 39 18             	cmp    WORD PTR [eax],bx
5f00155f:	75 3b                	jne    0x5f00159c
5f001561:	eb 4a                	jmp    0x5f0015ad
5f001563:	38 1d a5 a3 00 5f    	cmp    BYTE PTR ds:0x5f00a3a5,bl
5f001569:	74 31                	je     0x5f00159c
5f00156b:	0f be 15 a4 a3 00 5f 	movsx  edx,BYTE PTR ds:0x5f00a3a4
5f001572:	0f b7 e9             	movzx  ebp,cx
5f001575:	3b d5                	cmp    edx,ebp
5f001577:	75 0a                	jne    0x5f001583
5f001579:	83 c0 02             	add    eax,0x2
5f00157c:	66 39 18             	cmp    WORD PTR [eax],bx
5f00157f:	75 1b                	jne    0x5f00159c
5f001581:	eb 2a                	jmp    0x5f0015ad
5f001583:	66 83 f9 1e          	cmp    cx,0x1e
5f001587:	74 06                	je     0x5f00158f
5f001589:	66 83 f9 1f          	cmp    cx,0x1f
5f00158d:	75 0d                	jne    0x5f00159c
5f00158f:	83 c0 02             	add    eax,0x2
5f001592:	66 39 18             	cmp    WORD PTR [eax],bx
5f001595:	74 16                	je     0x5f0015ad
5f001597:	50                   	push   eax
5f001598:	ff d6                	call   esi
5f00159a:	eb 0c                	jmp    0x5f0015a8
5f00159c:	66 8b 08             	mov    cx,WORD PTR [eax]
5f00159f:	83 c0 02             	add    eax,0x2
5f0015a2:	66 89 0f             	mov    WORD PTR [edi],cx
5f0015a5:	83 c7 02             	add    edi,0x2
5f0015a8:	66 39 18             	cmp    WORD PTR [eax],bx
5f0015ab:	75 a3                	jne    0x5f001550
5f0015ad:	66 c7 07 00 00       	mov    WORD PTR [edi],0x0
5f0015b2:	8d 44 24 10          	lea    eax,[esp+0x10]
5f0015b6:	8d 4c 24 18          	lea    ecx,[esp+0x18]
5f0015ba:	50                   	push   eax
5f0015bb:	51                   	push   ecx
5f0015bc:	ff 15 44 d2 00 5f    	call   DWORD PTR ds:0x5f00d244
5f0015c2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
5f0015c6:	50                   	push   eax
5f0015c7:	8b 84 24 24 02 00 00 	mov    eax,DWORD PTR [esp+0x224]
5f0015ce:	51                   	push   ecx
5f0015cf:	50                   	push   eax
5f0015d0:	ff 15 c4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1c4
5f0015d6:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
5f0015da:	8b 84 24 24 02 00 00 	mov    eax,DWORD PTR [esp+0x224]
5f0015e1:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
5f0015e5:	89 08                	mov    DWORD PTR [eax],ecx
5f0015e7:	8b 8c 24 28 02 00 00 	mov    ecx,DWORD PTR [esp+0x228]
5f0015ee:	5d                   	pop    ebp
5f0015ef:	5f                   	pop    edi
5f0015f0:	5e                   	pop    esi
5f0015f1:	5b                   	pop    ebx
5f0015f2:	89 11                	mov    DWORD PTR [ecx],edx
5f0015f4:	81 c4 08 02 00 00    	add    esp,0x208
5f0015fa:	c3                   	ret
5f0015fb:	cc                   	int3
5f0015fc:	cc                   	int3
5f0015fd:	cc                   	int3
5f0015fe:	cc                   	int3
5f0015ff:	cc                   	int3
5f001600:	68 20 52 00 5f       	push   0x5f005220
5f001605:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f00160b:	68 20 52 00 5f       	push   0x5f005220
5f001610:	ff 05 44 52 00 5f    	inc    DWORD PTR ds:0x5f005244
5f001616:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f00161c:	83 3d 44 52 00 5f 01 	cmp    DWORD PTR ds:0x5f005244,0x1
5f001623:	75 05                	jne    0x5f00162a
5f001625:	e8 56 0b 00 00       	call   0x5f002180
5f00162a:	e8 31 02 00 00       	call   0x5f001860
5f00162f:	85 c0                	test   eax,eax
5f001631:	74 0a                	je     0x5f00163d
5f001633:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
5f001637:	50                   	push   eax
5f001638:	e8 d3 00 00 00       	call   0x5f001710
5f00163d:	a1 40 52 00 5f       	mov    eax,ds:0x5f005240
5f001642:	c2 04 00             	ret    0x4
5f001645:	cc                   	int3
5f001646:	cc                   	int3
5f001647:	cc                   	int3
5f001648:	cc                   	int3
5f001649:	cc                   	int3
5f00164a:	cc                   	int3
5f00164b:	cc                   	int3
5f00164c:	cc                   	int3
5f00164d:	cc                   	int3
5f00164e:	cc                   	int3
5f00164f:	cc                   	int3
5f001650:	53                   	push   ebx
5f001651:	56                   	push   esi
5f001652:	57                   	push   edi
5f001653:	55                   	push   ebp
5f001654:	33 ed                	xor    ebp,ebp
5f001656:	ff 15 40 d2 00 5f    	call   DWORD PTR ds:0x5f00d240
5f00165c:	8b d8                	mov    ebx,eax
5f00165e:	68 20 52 00 5f       	push   0x5f005220
5f001663:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f001669:	39 2d 9c 52 00 5f    	cmp    DWORD PTR ds:0x5f00529c,ebp
5f00166f:	7e 6f                	jle    0x5f0016e0
5f001671:	8d 04 ad 00 00 00 00 	lea    eax,[ebp*4+0x0]
5f001678:	39 9c 80 a4 52 00 5f 	cmp    DWORD PTR [eax+eax*4+0x5f0052a4],ebx
5f00167f:	8d 34 80             	lea    esi,[eax+eax*4]
5f001682:	75 53                	jne    0x5f0016d7
5f001684:	8b 86 ac 52 00 5f    	mov    eax,DWORD PTR [esi+0x5f0052ac]
5f00168a:	48                   	dec    eax
5f00168b:	89 86 ac 52 00 5f    	mov    DWORD PTR [esi+0x5f0052ac],eax
5f001691:	74 0c                	je     0x5f00169f
5f001693:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f001697:	39 86 a0 52 00 5f    	cmp    DWORD PTR [esi+0x5f0052a0],eax
5f00169d:	75 38                	jne    0x5f0016d7
5f00169f:	8b 86 a8 52 00 5f    	mov    eax,DWORD PTR [esi+0x5f0052a8]
5f0016a5:	50                   	push   eax
5f0016a6:	ff 15 e0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e0
5f0016ac:	ff 0d 9c 52 00 5f    	dec    DWORD PTR ds:0x5f00529c
5f0016b2:	3b 2d 9c 52 00 5f    	cmp    ebp,DWORD PTR ds:0x5f00529c
5f0016b8:	7d 1d                	jge    0x5f0016d7
5f0016ba:	8d be a0 52 00 5f    	lea    edi,[esi+0x5f0052a0]
5f0016c0:	8d 47 14             	lea    eax,[edi+0x14]
5f0016c3:	b9 05 00 00 00       	mov    ecx,0x5
5f0016c8:	8b f0                	mov    esi,eax
5f0016ca:	45                   	inc    ebp
5f0016cb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
5f0016cd:	8b f8                	mov    edi,eax
5f0016cf:	3b 2d 9c 52 00 5f    	cmp    ebp,DWORD PTR ds:0x5f00529c
5f0016d5:	7c e9                	jl     0x5f0016c0
5f0016d7:	45                   	inc    ebp
5f0016d8:	3b 2d 9c 52 00 5f    	cmp    ebp,DWORD PTR ds:0x5f00529c
5f0016de:	7c 91                	jl     0x5f001671
5f0016e0:	68 20 52 00 5f       	push   0x5f005220
5f0016e5:	ff 0d 44 52 00 5f    	dec    DWORD PTR ds:0x5f005244
5f0016eb:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f0016f1:	83 3d 44 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005244,0x0
5f0016f8:	75 05                	jne    0x5f0016ff
5f0016fa:	e8 81 0d 00 00       	call   0x5f002480
5f0016ff:	b8 01 00 00 00       	mov    eax,0x1
5f001704:	5d                   	pop    ebp
5f001705:	5f                   	pop    edi
5f001706:	5e                   	pop    esi
5f001707:	5b                   	pop    ebx
5f001708:	c2 04 00             	ret    0x4
5f00170b:	cc                   	int3
5f00170c:	cc                   	int3
5f00170d:	cc                   	int3
5f00170e:	cc                   	int3
5f00170f:	cc                   	int3
5f001710:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
5f001714:	6a 00                	push   0x0
5f001716:	50                   	push   eax
5f001717:	e8 04 00 00 00       	call   0x5f001720
5f00171c:	c2 04 00             	ret    0x4
5f00171f:	cc                   	int3
5f001720:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x30a
5f001727:	0a 03 
5f001729:	56                   	push   esi
5f00172a:	57                   	push   edi
5f00172b:	73 07                	jae    0x5f001734
5f00172d:	33 c0                	xor    eax,eax
5f00172f:	5f                   	pop    edi
5f001730:	5e                   	pop    esi
5f001731:	c2 08 00             	ret    0x8
5f001734:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f00173b:	75 07                	jne    0x5f001744
5f00173d:	33 c0                	xor    eax,eax
5f00173f:	5f                   	pop    edi
5f001740:	5e                   	pop    esi
5f001741:	c2 08 00             	ret    0x8
5f001744:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
5f001748:	83 ce 01             	or     esi,0x1
5f00174b:	f7 c6 02 00 00 00    	test   esi,0x2
5f001751:	74 03                	je     0x5f001756
5f001753:	83 e6 fc             	and    esi,0xfffffffc
5f001756:	68 20 52 00 5f       	push   0x5f005220
5f00175b:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f001761:	81 3d 9c 52 00 5f 00 	cmp    DWORD PTR ds:0x5f00529c,0x400
5f001768:	04 00 00 
5f00176b:	0f 84 d6 00 00 00    	je     0x5f001847
5f001771:	ff 15 40 d2 00 5f    	call   DWORD PTR ds:0x5f00d240
5f001777:	8b f8                	mov    edi,eax
5f001779:	33 c0                	xor    eax,eax
5f00177b:	39 05 9c 52 00 5f    	cmp    DWORD PTR ds:0x5f00529c,eax
5f001781:	7e 19                	jle    0x5f00179c
5f001783:	b9 a4 52 00 5f       	mov    ecx,0x5f0052a4
5f001788:	39 39                	cmp    DWORD PTR [ecx],edi
5f00178a:	0f 84 ab 00 00 00    	je     0x5f00183b
5f001790:	83 c1 14             	add    ecx,0x14
5f001793:	40                   	inc    eax
5f001794:	3b 05 9c 52 00 5f    	cmp    eax,DWORD PTR ds:0x5f00529c
5f00179a:	7c ec                	jl     0x5f001788
5f00179c:	57                   	push   edi
5f00179d:	a1 5c 52 00 5f       	mov    eax,ds:0x5f00525c
5f0017a2:	50                   	push   eax
5f0017a3:	68 60 2a 00 5f       	push   0x5f002a60
5f0017a8:	6a 05                	push   0x5
5f0017aa:	ff 15 d8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d8
5f0017b0:	85 c0                	test   eax,eax
5f0017b2:	0f 84 8f 00 00 00    	je     0x5f001847
5f0017b8:	8b 15 9c 52 00 5f    	mov    edx,DWORD PTR ds:0x5f00529c
5f0017be:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
5f0017c2:	c1 e2 02             	shl    edx,0x2
5f0017c5:	89 8c 92 a0 52 00 5f 	mov    DWORD PTR [edx+edx*4+0x5f0052a0],ecx
5f0017cc:	8b 0d 9c 52 00 5f    	mov    ecx,DWORD PTR ds:0x5f00529c
5f0017d2:	c1 e1 02             	shl    ecx,0x2
5f0017d5:	89 bc 89 a4 52 00 5f 	mov    DWORD PTR [ecx+ecx*4+0x5f0052a4],edi
5f0017dc:	8b 0d 9c 52 00 5f    	mov    ecx,DWORD PTR ds:0x5f00529c
5f0017e2:	c1 e1 02             	shl    ecx,0x2
5f0017e5:	89 84 89 a8 52 00 5f 	mov    DWORD PTR [ecx+ecx*4+0x5f0052a8],eax
5f0017ec:	a1 9c 52 00 5f       	mov    eax,ds:0x5f00529c
5f0017f1:	c1 e0 02             	shl    eax,0x2
5f0017f4:	c7 84 80 ac 52 00 5f 	mov    DWORD PTR [eax+eax*4+0x5f0052ac],0x1
5f0017fb:	01 00 00 00 
5f0017ff:	a1 9c 52 00 5f       	mov    eax,ds:0x5f00529c
5f001804:	c1 e0 02             	shl    eax,0x2
5f001807:	89 b4 80 b0 52 00 5f 	mov    DWORD PTR [eax+eax*4+0x5f0052b0],esi
5f00180e:	8b 0d 9c 52 00 5f    	mov    ecx,DWORD PTR ds:0x5f00529c
5f001814:	89 3d 94 52 00 5f    	mov    DWORD PTR ds:0x5f005294,edi
5f00181a:	89 0d 98 52 00 5f    	mov    DWORD PTR ds:0x5f005298,ecx
5f001820:	ff 05 9c 52 00 5f    	inc    DWORD PTR ds:0x5f00529c
5f001826:	68 20 52 00 5f       	push   0x5f005220
5f00182b:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f001831:	b8 01 00 00 00       	mov    eax,0x1
5f001836:	5f                   	pop    edi
5f001837:	5e                   	pop    esi
5f001838:	c2 08 00             	ret    0x8
5f00183b:	c1 e0 02             	shl    eax,0x2
5f00183e:	ff 84 80 ac 52 00 5f 	inc    DWORD PTR [eax+eax*4+0x5f0052ac]
5f001845:	eb df                	jmp    0x5f001826
5f001847:	68 20 52 00 5f       	push   0x5f005220
5f00184c:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f001852:	33 c0                	xor    eax,eax
5f001854:	5f                   	pop    edi
5f001855:	5e                   	pop    esi
5f001856:	c2 08 00             	ret    0x8
5f001859:	cc                   	int3
5f00185a:	cc                   	int3
5f00185b:	cc                   	int3
5f00185c:	cc                   	int3
5f00185d:	cc                   	int3
5f00185e:	cc                   	int3
5f00185f:	cc                   	int3
5f001860:	ff 15 40 d2 00 5f    	call   DWORD PTR ds:0x5f00d240
5f001866:	33 d2                	xor    edx,edx
5f001868:	39 15 9c 52 00 5f    	cmp    DWORD PTR ds:0x5f00529c,edx
5f00186e:	7e 15                	jle    0x5f001885
5f001870:	b9 a4 52 00 5f       	mov    ecx,0x5f0052a4
5f001875:	39 01                	cmp    DWORD PTR [ecx],eax
5f001877:	74 0f                	je     0x5f001888
5f001879:	83 c1 14             	add    ecx,0x14
5f00187c:	42                   	inc    edx
5f00187d:	3b 15 9c 52 00 5f    	cmp    edx,DWORD PTR ds:0x5f00529c
5f001883:	7c f0                	jl     0x5f001875
5f001885:	33 c0                	xor    eax,eax
5f001887:	c3                   	ret
5f001888:	b8 01 00 00 00       	mov    eax,0x1
5f00188d:	c3                   	ret
5f00188e:	cc                   	int3
5f00188f:	cc                   	int3
5f001890:	53                   	push   ebx
5f001891:	56                   	push   esi
5f001892:	57                   	push   edi
5f001893:	55                   	push   ebp
5f001894:	33 ed                	xor    ebp,ebp
5f001896:	ff 15 40 d2 00 5f    	call   DWORD PTR ds:0x5f00d240
5f00189c:	8b d8                	mov    ebx,eax
5f00189e:	68 20 52 00 5f       	push   0x5f005220
5f0018a3:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f0018a9:	39 2d 9c 52 00 5f    	cmp    DWORD PTR ds:0x5f00529c,ebp
5f0018af:	7e 63                	jle    0x5f001914
5f0018b1:	8d 04 ad 00 00 00 00 	lea    eax,[ebp*4+0x0]
5f0018b8:	39 9c 80 a4 52 00 5f 	cmp    DWORD PTR [eax+eax*4+0x5f0052a4],ebx
5f0018bf:	8d 34 80             	lea    esi,[eax+eax*4]
5f0018c2:	75 47                	jne    0x5f00190b
5f0018c4:	8b 86 ac 52 00 5f    	mov    eax,DWORD PTR [esi+0x5f0052ac]
5f0018ca:	48                   	dec    eax
5f0018cb:	89 86 ac 52 00 5f    	mov    DWORD PTR [esi+0x5f0052ac],eax
5f0018d1:	75 38                	jne    0x5f00190b
5f0018d3:	8b 86 a8 52 00 5f    	mov    eax,DWORD PTR [esi+0x5f0052a8]
5f0018d9:	50                   	push   eax
5f0018da:	ff 15 e0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e0
5f0018e0:	ff 0d 9c 52 00 5f    	dec    DWORD PTR ds:0x5f00529c
5f0018e6:	3b 2d 9c 52 00 5f    	cmp    ebp,DWORD PTR ds:0x5f00529c
5f0018ec:	7d 1d                	jge    0x5f00190b
5f0018ee:	8d be a0 52 00 5f    	lea    edi,[esi+0x5f0052a0]
5f0018f4:	8d 47 14             	lea    eax,[edi+0x14]
5f0018f7:	b9 05 00 00 00       	mov    ecx,0x5
5f0018fc:	8b f0                	mov    esi,eax
5f0018fe:	45                   	inc    ebp
5f0018ff:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
5f001901:	8b f8                	mov    edi,eax
5f001903:	3b 2d 9c 52 00 5f    	cmp    ebp,DWORD PTR ds:0x5f00529c
5f001909:	7c e9                	jl     0x5f0018f4
5f00190b:	45                   	inc    ebp
5f00190c:	3b 2d 9c 52 00 5f    	cmp    ebp,DWORD PTR ds:0x5f00529c
5f001912:	7c 9d                	jl     0x5f0018b1
5f001914:	68 20 52 00 5f       	push   0x5f005220
5f001919:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f00191f:	b8 01 00 00 00       	mov    eax,0x1
5f001924:	5d                   	pop    ebp
5f001925:	5f                   	pop    edi
5f001926:	5e                   	pop    esi
5f001927:	5b                   	pop    ebx
5f001928:	c3                   	ret
5f001929:	cc                   	int3
5f00192a:	cc                   	int3
5f00192b:	cc                   	int3
5f00192c:	cc                   	int3
5f00192d:	cc                   	int3
5f00192e:	cc                   	int3
5f00192f:	cc                   	int3
5f001930:	66 33 c0             	xor    ax,ax
5f001933:	c2 0c 00             	ret    0xc
5f001936:	cc                   	int3
5f001937:	cc                   	int3
5f001938:	cc                   	int3
5f001939:	cc                   	int3
5f00193a:	cc                   	int3
5f00193b:	cc                   	int3
5f00193c:	cc                   	int3
5f00193d:	cc                   	int3
5f00193e:	cc                   	int3
5f00193f:	cc                   	int3
5f001940:	66 b8 31 02          	mov    ax,0x231
5f001944:	c3                   	ret
5f001945:	cc                   	int3
5f001946:	cc                   	int3
5f001947:	cc                   	int3
5f001948:	cc                   	int3
5f001949:	cc                   	int3
5f00194a:	cc                   	int3
5f00194b:	cc                   	int3
5f00194c:	cc                   	int3
5f00194d:	cc                   	int3
5f00194e:	cc                   	int3
5f00194f:	cc                   	int3
5f001950:	a1 40 52 00 5f       	mov    eax,ds:0x5f005240
5f001955:	c3                   	ret
5f001956:	cc                   	int3
5f001957:	cc                   	int3
5f001958:	cc                   	int3
5f001959:	cc                   	int3
5f00195a:	cc                   	int3
5f00195b:	cc                   	int3
5f00195c:	cc                   	int3
5f00195d:	cc                   	int3
5f00195e:	cc                   	int3
5f00195f:	cc                   	int3
5f001960:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001967:	75 05                	jne    0x5f00196e
5f001969:	33 c0                	xor    eax,eax
5f00196b:	c2 04 00             	ret    0x4
5f00196e:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
5f001972:	6a 00                	push   0x0
5f001974:	6a 00                	push   0x0
5f001976:	68 ff ff 00 00       	push   0xffff
5f00197b:	50                   	push   eax
5f00197c:	e8 bf 14 00 00       	call   0x5f002e40
5f001981:	83 c4 10             	add    esp,0x10
5f001984:	c2 04 00             	ret    0x4
5f001987:	cc                   	int3
5f001988:	cc                   	int3
5f001989:	cc                   	int3
5f00198a:	cc                   	int3
5f00198b:	cc                   	int3
5f00198c:	cc                   	int3
5f00198d:	cc                   	int3
5f00198e:	cc                   	int3
5f00198f:	cc                   	int3
5f001990:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001997:	53                   	push   ebx
5f001998:	56                   	push   esi
5f001999:	57                   	push   edi
5f00199a:	55                   	push   ebp
5f00199b:	75 09                	jne    0x5f0019a6
5f00199d:	33 c0                	xor    eax,eax
5f00199f:	5d                   	pop    ebp
5f0019a0:	5f                   	pop    edi
5f0019a1:	5e                   	pop    esi
5f0019a2:	5b                   	pop    ebx
5f0019a3:	c2 04 00             	ret    0x4
5f0019a6:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
5f0019aa:	6a fc                	push   0xfffffffc
5f0019ac:	56                   	push   esi
5f0019ad:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f0019b3:	33 c9                	xor    ecx,ecx
5f0019b5:	8b 3d d4 d2 00 5f    	mov    edi,DWORD PTR ds:0x5f00d2d4
5f0019bb:	8b 1d f8 d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d2f8
5f0019c1:	8d 14 89             	lea    edx,[ecx+ecx*4]
5f0019c4:	39 04 d5 a0 a2 00 5f 	cmp    DWORD PTR [edx*8+0x5f00a2a0],eax
5f0019cb:	75 25                	jne    0x5f0019f2
5f0019cd:	51                   	push   ecx
5f0019ce:	56                   	push   esi
5f0019cf:	e8 4c f6 ff ff       	call   0x5f001020
5f0019d4:	83 c4 08             	add    esp,0x8
5f0019d7:	8b e8                	mov    ebp,eax
5f0019d9:	33 c0                	xor    eax,eax
5f0019db:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f0019e1:	50                   	push   eax
5f0019e2:	56                   	push   esi
5f0019e3:	ff d7                	call   edi
5f0019e5:	55                   	push   ebp
5f0019e6:	6a fc                	push   0xfffffffc
5f0019e8:	56                   	push   esi
5f0019e9:	ff d3                	call   ebx
5f0019eb:	33 c0                	xor    eax,eax
5f0019ed:	b9 10 00 00 00       	mov    ecx,0x10
5f0019f2:	41                   	inc    ecx
5f0019f3:	83 f9 06             	cmp    ecx,0x6
5f0019f6:	7c c9                	jl     0x5f0019c1
5f0019f8:	75 6f                	jne    0x5f001a69
5f0019fa:	3d f0 26 00 5f       	cmp    eax,0x5f0026f0
5f0019ff:	75 20                	jne    0x5f001a21
5f001a01:	51                   	push   ecx
5f001a02:	56                   	push   esi
5f001a03:	e8 18 f6 ff ff       	call   0x5f001020
5f001a08:	83 c4 08             	add    esp,0x8
5f001a0b:	8b e8                	mov    ebp,eax
5f001a0d:	33 c0                	xor    eax,eax
5f001a0f:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f001a15:	50                   	push   eax
5f001a16:	56                   	push   esi
5f001a17:	ff d7                	call   edi
5f001a19:	55                   	push   ebp
5f001a1a:	6a fc                	push   0xfffffffc
5f001a1c:	56                   	push   esi
5f001a1d:	ff d3                	call   ebx
5f001a1f:	eb 48                	jmp    0x5f001a69
5f001a21:	33 c0                	xor    eax,eax
5f001a23:	8b 3d 00 d3 00 5f    	mov    edi,DWORD PTR ds:0x5f00d300
5f001a29:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f001a2f:	50                   	push   eax
5f001a30:	56                   	push   esi
5f001a31:	ff d7                	call   edi
5f001a33:	85 c0                	test   eax,eax
5f001a35:	75 20                	jne    0x5f001a57
5f001a37:	33 c0                	xor    eax,eax
5f001a39:	66 a1 52 52 00 5f    	mov    ax,ds:0x5f005252
5f001a3f:	50                   	push   eax
5f001a40:	56                   	push   esi
5f001a41:	ff d7                	call   edi
5f001a43:	85 c0                	test   eax,eax
5f001a45:	75 10                	jne    0x5f001a57
5f001a47:	33 c0                	xor    eax,eax
5f001a49:	66 a1 50 52 00 5f    	mov    ax,ds:0x5f005250
5f001a4f:	50                   	push   eax
5f001a50:	56                   	push   esi
5f001a51:	ff d7                	call   edi
5f001a53:	85 c0                	test   eax,eax
5f001a55:	74 12                	je     0x5f001a69
5f001a57:	6a 01                	push   0x1
5f001a59:	33 c0                	xor    eax,eax
5f001a5b:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f001a61:	50                   	push   eax
5f001a62:	56                   	push   esi
5f001a63:	ff 15 fc d2 00 5f    	call   DWORD PTR ds:0x5f00d2fc
5f001a69:	6a 05                	push   0x5
5f001a6b:	56                   	push   esi
5f001a6c:	8b 35 5c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d25c
5f001a72:	ff d6                	call   esi
5f001a74:	8b f8                	mov    edi,eax
5f001a76:	85 ff                	test   edi,edi
5f001a78:	74 11                	je     0x5f001a8b
5f001a7a:	57                   	push   edi
5f001a7b:	e8 10 ff ff ff       	call   0x5f001990
5f001a80:	6a 02                	push   0x2
5f001a82:	57                   	push   edi
5f001a83:	ff d6                	call   esi
5f001a85:	8b f8                	mov    edi,eax
5f001a87:	85 ff                	test   edi,edi
5f001a89:	75 ef                	jne    0x5f001a7a
5f001a8b:	b8 01 00 00 00       	mov    eax,0x1
5f001a90:	5d                   	pop    ebp
5f001a91:	5f                   	pop    edi
5f001a92:	5e                   	pop    esi
5f001a93:	5b                   	pop    ebx
5f001a94:	c2 04 00             	ret    0x4
5f001a97:	cc                   	int3
5f001a98:	cc                   	int3
5f001a99:	cc                   	int3
5f001a9a:	cc                   	int3
5f001a9b:	cc                   	int3
5f001a9c:	cc                   	int3
5f001a9d:	cc                   	int3
5f001a9e:	cc                   	int3
5f001a9f:	cc                   	int3
5f001aa0:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001aa7:	53                   	push   ebx
5f001aa8:	56                   	push   esi
5f001aa9:	57                   	push   edi
5f001aaa:	75 08                	jne    0x5f001ab4
5f001aac:	33 c0                	xor    eax,eax
5f001aae:	5f                   	pop    edi
5f001aaf:	5e                   	pop    esi
5f001ab0:	5b                   	pop    ebx
5f001ab1:	c2 08 00             	ret    0x8
5f001ab4:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
5f001ab8:	85 ff                	test   edi,edi
5f001aba:	7c 6e                	jl     0x5f001b2a
5f001abc:	83 ff 06             	cmp    edi,0x6
5f001abf:	7f 69                	jg     0x5f001b2a
5f001ac1:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
5f001ac5:	56                   	push   esi
5f001ac6:	e8 35 f5 ff ff       	call   0x5f001000
5f001acb:	83 c4 04             	add    esp,0x4
5f001ace:	85 c0                	test   eax,eax
5f001ad0:	74 08                	je     0x5f001ada
5f001ad2:	33 c0                	xor    eax,eax
5f001ad4:	5f                   	pop    edi
5f001ad5:	5e                   	pop    esi
5f001ad6:	5b                   	pop    ebx
5f001ad7:	c2 08 00             	ret    0x8
5f001ada:	6a f0                	push   0xfffffff0
5f001adc:	56                   	push   esi
5f001add:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f001ae3:	8b d8                	mov    ebx,eax
5f001ae5:	56                   	push   esi
5f001ae6:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f001aec:	50                   	push   eax
5f001aed:	6a 00                	push   0x0
5f001aef:	68 ff ff 00 00       	push   0xffff
5f001af4:	8d 04 7f             	lea    eax,[edi+edi*2]
5f001af7:	53                   	push   ebx
5f001af8:	56                   	push   esi
5f001af9:	8d 1c 87             	lea    ebx,[edi+eax*4]
5f001afc:	ff 14 9d 64 b0 00 5f 	call   DWORD PTR [ebx*4+0x5f00b064]
5f001b03:	83 c4 14             	add    esp,0x14
5f001b06:	83 f8 01             	cmp    eax,0x1
5f001b09:	75 14                	jne    0x5f001b1f
5f001b0b:	8d 04 bf             	lea    eax,[edi+edi*4]
5f001b0e:	8b 0c c5 a0 a2 00 5f 	mov    ecx,DWORD PTR [eax*8+0x5f00a2a0]
5f001b15:	51                   	push   ecx
5f001b16:	56                   	push   esi
5f001b17:	e8 54 f5 ff ff       	call   0x5f001070
5f001b1c:	83 c4 08             	add    esp,0x8
5f001b1f:	b8 01 00 00 00       	mov    eax,0x1
5f001b24:	5f                   	pop    edi
5f001b25:	5e                   	pop    esi
5f001b26:	5b                   	pop    ebx
5f001b27:	c2 08 00             	ret    0x8
5f001b2a:	33 c0                	xor    eax,eax
5f001b2c:	5f                   	pop    edi
5f001b2d:	5e                   	pop    esi
5f001b2e:	5b                   	pop    ebx
5f001b2f:	c2 08 00             	ret    0x8
5f001b32:	cc                   	int3
5f001b33:	cc                   	int3
5f001b34:	cc                   	int3
5f001b35:	cc                   	int3
5f001b36:	cc                   	int3
5f001b37:	cc                   	int3
5f001b38:	cc                   	int3
5f001b39:	cc                   	int3
5f001b3a:	cc                   	int3
5f001b3b:	cc                   	int3
5f001b3c:	cc                   	int3
5f001b3d:	cc                   	int3
5f001b3e:	cc                   	int3
5f001b3f:	cc                   	int3
5f001b40:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001b47:	53                   	push   ebx
5f001b48:	56                   	push   esi
5f001b49:	57                   	push   edi
5f001b4a:	75 08                	jne    0x5f001b54
5f001b4c:	33 c0                	xor    eax,eax
5f001b4e:	5f                   	pop    edi
5f001b4f:	5e                   	pop    esi
5f001b50:	5b                   	pop    ebx
5f001b51:	c2 08 00             	ret    0x8
5f001b54:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f001b58:	6a 05                	push   0x5
5f001b5a:	50                   	push   eax
5f001b5b:	8b 35 5c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d25c
5f001b61:	ff d6                	call   esi
5f001b63:	8b d8                	mov    ebx,eax
5f001b65:	85 db                	test   ebx,ebx
5f001b67:	74 1e                	je     0x5f001b87
5f001b69:	66 8b 7c 24 14       	mov    di,WORD PTR [esp+0x14]
5f001b6e:	6a 00                	push   0x0
5f001b70:	6a 00                	push   0x0
5f001b72:	57                   	push   edi
5f001b73:	53                   	push   ebx
5f001b74:	e8 c7 12 00 00       	call   0x5f002e40
5f001b79:	83 c4 10             	add    esp,0x10
5f001b7c:	6a 02                	push   0x2
5f001b7e:	53                   	push   ebx
5f001b7f:	ff d6                	call   esi
5f001b81:	8b d8                	mov    ebx,eax
5f001b83:	85 db                	test   ebx,ebx
5f001b85:	75 e7                	jne    0x5f001b6e
5f001b87:	b8 01 00 00 00       	mov    eax,0x1
5f001b8c:	5f                   	pop    edi
5f001b8d:	5e                   	pop    esi
5f001b8e:	5b                   	pop    ebx
5f001b8f:	c2 08 00             	ret    0x8
5f001b92:	cc                   	int3
5f001b93:	cc                   	int3
5f001b94:	cc                   	int3
5f001b95:	cc                   	int3
5f001b96:	cc                   	int3
5f001b97:	cc                   	int3
5f001b98:	cc                   	int3
5f001b99:	cc                   	int3
5f001b9a:	cc                   	int3
5f001b9b:	cc                   	int3
5f001b9c:	cc                   	int3
5f001b9d:	cc                   	int3
5f001b9e:	cc                   	int3
5f001b9f:	cc                   	int3
5f001ba0:	83 ec 04             	sub    esp,0x4
5f001ba3:	53                   	push   ebx
5f001ba4:	56                   	push   esi
5f001ba5:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
5f001ba9:	57                   	push   edi
5f001baa:	56                   	push   esi
5f001bab:	e8 50 f4 ff ff       	call   0x5f001000
5f001bb0:	83 c4 04             	add    esp,0x4
5f001bb3:	85 c0                	test   eax,eax
5f001bb5:	75 1c                	jne    0x5f001bd3
5f001bb7:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f001bbb:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
5f001bbf:	50                   	push   eax
5f001bc0:	6a 00                	push   0x0
5f001bc2:	51                   	push   ecx
5f001bc3:	56                   	push   esi
5f001bc4:	e8 77 12 00 00       	call   0x5f002e40
5f001bc9:	83 c4 10             	add    esp,0x10
5f001bcc:	5f                   	pop    edi
5f001bcd:	5e                   	pop    esi
5f001bce:	5b                   	pop    ebx
5f001bcf:	83 c4 04             	add    esp,0x4
5f001bd2:	c3                   	ret
5f001bd3:	33 c0                	xor    eax,eax
5f001bd5:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f001bdb:	50                   	push   eax
5f001bdc:	56                   	push   esi
5f001bdd:	ff 15 00 d3 00 5f    	call   DWORD PTR ds:0x5f00d300
5f001be3:	85 c0                	test   eax,eax
5f001be5:	75 62                	jne    0x5f001c49
5f001be7:	8d 7c 24 0c          	lea    edi,[esp+0xc]
5f001beb:	8b 1d e8 d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d2e8
5f001bf1:	c7 44 24 0c 9a 02 00 	mov    DWORD PTR [esp+0xc],0x29a
5f001bf8:	00 
5f001bf9:	57                   	push   edi
5f001bfa:	6a 00                	push   0x0
5f001bfc:	68 44 19 00 00       	push   0x1944
5f001c01:	56                   	push   esi
5f001c02:	ff d3                	call   ebx
5f001c04:	81 7c 24 0c 9a 02 00 	cmp    DWORD PTR [esp+0xc],0x29a
5f001c0b:	00 
5f001c0c:	75 3b                	jne    0x5f001c49
5f001c0e:	57                   	push   edi
5f001c0f:	6a 00                	push   0x0
5f001c11:	68 43 19 00 00       	push   0x1943
5f001c16:	56                   	push   esi
5f001c17:	ff d3                	call   ebx
5f001c19:	81 7c 24 0c 9a 02 00 	cmp    DWORD PTR [esp+0xc],0x29a
5f001c20:	00 
5f001c21:	75 26                	jne    0x5f001c49
5f001c23:	33 c0                	xor    eax,eax
5f001c25:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f001c2b:	50                   	push   eax
5f001c2c:	56                   	push   esi
5f001c2d:	ff 15 d4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d4
5f001c33:	66 8b 44 24 18       	mov    ax,WORD PTR [esp+0x18]
5f001c38:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
5f001c3c:	51                   	push   ecx
5f001c3d:	6a 00                	push   0x0
5f001c3f:	50                   	push   eax
5f001c40:	56                   	push   esi
5f001c41:	e8 fa 11 00 00       	call   0x5f002e40
5f001c46:	83 c4 10             	add    esp,0x10
5f001c49:	5f                   	pop    edi
5f001c4a:	5e                   	pop    esi
5f001c4b:	5b                   	pop    ebx
5f001c4c:	83 c4 04             	add    esp,0x4
5f001c4f:	c3                   	ret
5f001c50:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001c57:	53                   	push   ebx
5f001c58:	56                   	push   esi
5f001c59:	57                   	push   edi
5f001c5a:	55                   	push   ebp
5f001c5b:	75 09                	jne    0x5f001c66
5f001c5d:	33 c0                	xor    eax,eax
5f001c5f:	5d                   	pop    ebp
5f001c60:	5f                   	pop    edi
5f001c61:	5e                   	pop    esi
5f001c62:	5b                   	pop    ebx
5f001c63:	c2 08 00             	ret    0x8
5f001c66:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f001c6a:	6a 05                	push   0x5
5f001c6c:	50                   	push   eax
5f001c6d:	8b 2d 5c d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d25c
5f001c73:	ff d5                	call   ebp
5f001c75:	8b f8                	mov    edi,eax
5f001c77:	85 ff                	test   edi,edi
5f001c79:	74 3d                	je     0x5f001cb8
5f001c7b:	66 8b 74 24 18       	mov    si,WORD PTR [esp+0x18]
5f001c80:	6a 00                	push   0x0
5f001c82:	56                   	push   esi
5f001c83:	57                   	push   edi
5f001c84:	e8 17 ff ff ff       	call   0x5f001ba0
5f001c89:	83 c4 0c             	add    esp,0xc
5f001c8c:	6a 05                	push   0x5
5f001c8e:	57                   	push   edi
5f001c8f:	ff d5                	call   ebp
5f001c91:	8b d8                	mov    ebx,eax
5f001c93:	85 db                	test   ebx,ebx
5f001c95:	74 16                	je     0x5f001cad
5f001c97:	57                   	push   edi
5f001c98:	56                   	push   esi
5f001c99:	53                   	push   ebx
5f001c9a:	e8 01 ff ff ff       	call   0x5f001ba0
5f001c9f:	83 c4 0c             	add    esp,0xc
5f001ca2:	6a 02                	push   0x2
5f001ca4:	53                   	push   ebx
5f001ca5:	ff d5                	call   ebp
5f001ca7:	8b d8                	mov    ebx,eax
5f001ca9:	85 db                	test   ebx,ebx
5f001cab:	75 ea                	jne    0x5f001c97
5f001cad:	6a 02                	push   0x2
5f001caf:	57                   	push   edi
5f001cb0:	ff d5                	call   ebp
5f001cb2:	8b f8                	mov    edi,eax
5f001cb4:	85 ff                	test   edi,edi
5f001cb6:	75 c8                	jne    0x5f001c80
5f001cb8:	b8 01 00 00 00       	mov    eax,0x1
5f001cbd:	5d                   	pop    ebp
5f001cbe:	5f                   	pop    edi
5f001cbf:	5e                   	pop    esi
5f001cc0:	5b                   	pop    ebx
5f001cc1:	c2 08 00             	ret    0x8
5f001cc4:	cc                   	int3
5f001cc5:	cc                   	int3
5f001cc6:	cc                   	int3
5f001cc7:	cc                   	int3
5f001cc8:	cc                   	int3
5f001cc9:	cc                   	int3
5f001cca:	cc                   	int3
5f001ccb:	cc                   	int3
5f001ccc:	cc                   	int3
5f001ccd:	cc                   	int3
5f001cce:	cc                   	int3
5f001ccf:	cc                   	int3
5f001cd0:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001cd7:	53                   	push   ebx
5f001cd8:	56                   	push   esi
5f001cd9:	57                   	push   edi
5f001cda:	55                   	push   ebp
5f001cdb:	75 09                	jne    0x5f001ce6
5f001cdd:	33 c0                	xor    eax,eax
5f001cdf:	5d                   	pop    ebp
5f001ce0:	5f                   	pop    edi
5f001ce1:	5e                   	pop    esi
5f001ce2:	5b                   	pop    ebx
5f001ce3:	c2 08 00             	ret    0x8
5f001ce6:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
5f001cea:	6a 05                	push   0x5
5f001cec:	57                   	push   edi
5f001ced:	8b 35 5c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d25c
5f001cf3:	ff d6                	call   esi
5f001cf5:	8b d8                	mov    ebx,eax
5f001cf7:	85 db                	test   ebx,ebx
5f001cf9:	74 1e                	je     0x5f001d19
5f001cfb:	66 8b 6c 24 18       	mov    bp,WORD PTR [esp+0x18]
5f001d00:	6a 00                	push   0x0
5f001d02:	6a 00                	push   0x0
5f001d04:	55                   	push   ebp
5f001d05:	53                   	push   ebx
5f001d06:	e8 35 11 00 00       	call   0x5f002e40
5f001d0b:	83 c4 10             	add    esp,0x10
5f001d0e:	6a 02                	push   0x2
5f001d10:	53                   	push   ebx
5f001d11:	ff d6                	call   esi
5f001d13:	8b d8                	mov    ebx,eax
5f001d15:	85 db                	test   ebx,ebx
5f001d17:	75 e7                	jne    0x5f001d00
5f001d19:	68 f0 26 00 5f       	push   0x5f0026f0
5f001d1e:	57                   	push   edi
5f001d1f:	e8 4c f3 ff ff       	call   0x5f001070
5f001d24:	83 c4 08             	add    esp,0x8
5f001d27:	b8 01 00 00 00       	mov    eax,0x1
5f001d2c:	5d                   	pop    ebp
5f001d2d:	5f                   	pop    edi
5f001d2e:	5e                   	pop    esi
5f001d2f:	5b                   	pop    ebx
5f001d30:	c2 08 00             	ret    0x8
5f001d33:	cc                   	int3
5f001d34:	cc                   	int3
5f001d35:	cc                   	int3
5f001d36:	cc                   	int3
5f001d37:	cc                   	int3
5f001d38:	cc                   	int3
5f001d39:	cc                   	int3
5f001d3a:	cc                   	int3
5f001d3b:	cc                   	int3
5f001d3c:	cc                   	int3
5f001d3d:	cc                   	int3
5f001d3e:	cc                   	int3
5f001d3f:	cc                   	int3
5f001d40:	33 c0                	xor    eax,eax
5f001d42:	c2 08 00             	ret    0x8
5f001d45:	cc                   	int3
5f001d46:	cc                   	int3
5f001d47:	cc                   	int3
5f001d48:	cc                   	int3
5f001d49:	cc                   	int3
5f001d4a:	cc                   	int3
5f001d4b:	cc                   	int3
5f001d4c:	cc                   	int3
5f001d4d:	cc                   	int3
5f001d4e:	cc                   	int3
5f001d4f:	cc                   	int3
5f001d50:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001d57:	56                   	push   esi
5f001d58:	74 72                	je     0x5f001dcc
5f001d5a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f001d5e:	3d 34 01 00 00       	cmp    eax,0x134
5f001d63:	72 67                	jb     0x5f001dcc
5f001d65:	3d 37 01 00 00       	cmp    eax,0x137
5f001d6a:	74 60                	je     0x5f001dcc
5f001d6c:	3d 34 01 00 00       	cmp    eax,0x134
5f001d71:	75 31                	jne    0x5f001da4
5f001d73:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f001d7a:	5f 03 
5f001d7c:	73 20                	jae    0x5f001d9e
5f001d7e:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
5f001d82:	6a 05                	push   0x5
5f001d84:	56                   	push   esi
5f001d85:	ff 15 5c d2 00 5f    	call   DWORD PTR ds:0x5f00d25c
5f001d8b:	85 c0                	test   eax,eax
5f001d8d:	74 0f                	je     0x5f001d9e
5f001d8f:	6a f0                	push   0xfffffff0
5f001d91:	56                   	push   esi
5f001d92:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f001d98:	24 03                	and    al,0x3
5f001d9a:	3c 03                	cmp    al,0x3
5f001d9c:	75 06                	jne    0x5f001da4
5f001d9e:	33 c0                	xor    eax,eax
5f001da0:	5e                   	pop    esi
5f001da1:	c2 0c 00             	ret    0xc
5f001da4:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
5f001da8:	a1 70 52 00 5f       	mov    eax,ds:0x5f005270
5f001dad:	50                   	push   eax
5f001dae:	56                   	push   esi
5f001daf:	ff 15 d4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d4
5f001db5:	8b 0d 68 52 00 5f    	mov    ecx,DWORD PTR ds:0x5f005268
5f001dbb:	51                   	push   ecx
5f001dbc:	56                   	push   esi
5f001dbd:	ff 15 b8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b8
5f001dc3:	a1 88 52 00 5f       	mov    eax,ds:0x5f005288
5f001dc8:	5e                   	pop    esi
5f001dc9:	c2 0c 00             	ret    0xc
5f001dcc:	33 c0                	xor    eax,eax
5f001dce:	5e                   	pop    esi
5f001dcf:	c2 0c 00             	ret    0xc
5f001dd2:	cc                   	int3
5f001dd3:	cc                   	int3
5f001dd4:	cc                   	int3
5f001dd5:	cc                   	int3
5f001dd6:	cc                   	int3
5f001dd7:	cc                   	int3
5f001dd8:	cc                   	int3
5f001dd9:	cc                   	int3
5f001dda:	cc                   	int3
5f001ddb:	cc                   	int3
5f001ddc:	cc                   	int3
5f001ddd:	cc                   	int3
5f001dde:	cc                   	int3
5f001ddf:	cc                   	int3
5f001de0:	56                   	push   esi
5f001de1:	68 20 52 00 5f       	push   0x5f005220
5f001de6:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f001dec:	6a 00                	push   0x0
5f001dee:	e8 6d 07 00 00       	call   0x5f002560
5f001df3:	83 c4 04             	add    esp,0x4
5f001df6:	8b f0                	mov    esi,eax
5f001df8:	68 20 52 00 5f       	push   0x5f005220
5f001dfd:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f001e03:	8b c6                	mov    eax,esi
5f001e05:	5e                   	pop    esi
5f001e06:	c3                   	ret
5f001e07:	cc                   	int3
5f001e08:	cc                   	int3
5f001e09:	cc                   	int3
5f001e0a:	cc                   	int3
5f001e0b:	cc                   	int3
5f001e0c:	cc                   	int3
5f001e0d:	cc                   	int3
5f001e0e:	cc                   	int3
5f001e0f:	cc                   	int3
5f001e10:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f001e14:	6a 01                	push   0x1
5f001e16:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
5f001e1a:	50                   	push   eax
5f001e1b:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
5f001e1f:	51                   	push   ecx
5f001e20:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f001e24:	52                   	push   edx
5f001e25:	50                   	push   eax
5f001e26:	e8 05 00 00 00       	call   0x5f001e30
5f001e2b:	c2 10 00             	ret    0x10
5f001e2e:	cc                   	int3
5f001e2f:	cc                   	int3
5f001e30:	83 ec 3c             	sub    esp,0x3c
5f001e33:	83 7c 24 50 00       	cmp    DWORD PTR [esp+0x50],0x0
5f001e38:	53                   	push   ebx
5f001e39:	56                   	push   esi
5f001e3a:	57                   	push   edi
5f001e3b:	55                   	push   ebp
5f001e3c:	74 08                	je     0x5f001e46
5f001e3e:	33 c0                	xor    eax,eax
5f001e40:	8b 74 24 50          	mov    esi,DWORD PTR [esp+0x50]
5f001e44:	eb 0f                	jmp    0x5f001e55
5f001e46:	8b 74 24 50          	mov    esi,DWORD PTR [esp+0x50]
5f001e4a:	6a 06                	push   0x6
5f001e4c:	56                   	push   esi
5f001e4d:	e8 ce f1 ff ff       	call   0x5f001020
5f001e52:	83 c4 08             	add    esp,0x8
5f001e55:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
5f001e59:	85 c0                	test   eax,eax
5f001e5b:	51                   	push   ecx
5f001e5c:	74 14                	je     0x5f001e72
5f001e5e:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
5f001e62:	8b 5c 24 58          	mov    ebx,DWORD PTR [esp+0x58]
5f001e66:	52                   	push   edx
5f001e67:	53                   	push   ebx
5f001e68:	56                   	push   esi
5f001e69:	50                   	push   eax
5f001e6a:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f001e70:	eb 11                	jmp    0x5f001e83
5f001e72:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
5f001e76:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
5f001e7a:	50                   	push   eax
5f001e7b:	52                   	push   edx
5f001e7c:	56                   	push   esi
5f001e7d:	ff 15 68 d2 00 5f    	call   DWORD PTR ds:0x5f00d268
5f001e83:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f001e8a:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f001e8e:	75 0e                	jne    0x5f001e9e
5f001e90:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f001e94:	5d                   	pop    ebp
5f001e95:	5f                   	pop    edi
5f001e96:	5e                   	pop    esi
5f001e97:	5b                   	pop    ebx
5f001e98:	83 c4 3c             	add    esp,0x3c
5f001e9b:	c2 14 00             	ret    0x14
5f001e9e:	56                   	push   esi
5f001e9f:	ff 15 64 d2 00 5f    	call   DWORD PTR ds:0x5f00d264
5f001ea5:	85 c0                	test   eax,eax
5f001ea7:	74 0e                	je     0x5f001eb7
5f001ea9:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f001ead:	5d                   	pop    ebp
5f001eae:	5f                   	pop    edi
5f001eaf:	5e                   	pop    esi
5f001eb0:	5b                   	pop    ebx
5f001eb1:	83 c4 3c             	add    esp,0x3c
5f001eb4:	c2 14 00             	ret    0x14
5f001eb7:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
5f001ebe:	00 
5f001ebf:	8d 44 24 14          	lea    eax,[esp+0x14]
5f001ec3:	50                   	push   eax
5f001ec4:	6a 00                	push   0x0
5f001ec6:	68 ef 11 00 00       	push   0x11ef
5f001ecb:	56                   	push   esi
5f001ecc:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f001ed2:	6a f0                	push   0xfffffff0
5f001ed4:	8b 2d e4 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d2e4
5f001eda:	56                   	push   esi
5f001edb:	ff d5                	call   ebp
5f001edd:	83 7c 24 14 00       	cmp    DWORD PTR [esp+0x14],0x0
5f001ee2:	0f 84 e0 01 00 00    	je     0x5f0020c8
5f001ee8:	8b c8                	mov    ecx,eax
5f001eea:	81 e1 80 00 40 10    	and    ecx,0x10400080
5f001ef0:	81 f9 80 00 40 10    	cmp    ecx,0x10400080
5f001ef6:	0f 85 cc 01 00 00    	jne    0x5f0020c8
5f001efc:	25 00 00 c0 00       	and    eax,0xc00000
5f001f01:	8b 1d 98 a3 00 5f    	mov    ebx,DWORD PTR ds:0x5f00a398
5f001f07:	2d 00 00 c0 00       	sub    eax,0xc00000
5f001f0c:	83 f8 01             	cmp    eax,0x1
5f001f0f:	56                   	push   esi
5f001f10:	1b ed                	sbb    ebp,ebp
5f001f12:	f7 dd                	neg    ebp
5f001f14:	83 fd 01             	cmp    ebp,0x1
5f001f17:	1b c0                	sbb    eax,eax
5f001f19:	40                   	inc    eax
5f001f1a:	2b d8                	sub    ebx,eax
5f001f1c:	ff 15 08 d3 00 5f    	call   DWORD PTR ds:0x5f00d308
5f001f22:	8b f8                	mov    edi,eax
5f001f24:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f001f28:	50                   	push   eax
5f001f29:	56                   	push   esi
5f001f2a:	ff 15 04 d3 00 5f    	call   DWORD PTR ds:0x5f00d304
5f001f30:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
5f001f34:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
5f001f38:	29 4c 24 24          	sub    DWORD PTR [esp+0x24],ecx
5f001f3c:	6a 0f                	push   0xf
5f001f3e:	8d 44 24 20          	lea    eax,[esp+0x20]
5f001f42:	6a 07                	push   0x7
5f001f44:	29 54 24 30          	sub    DWORD PTR [esp+0x30],edx
5f001f48:	6a 02                	push   0x2
5f001f4a:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
5f001f51:	00 
5f001f52:	c7 44 24 28 00 00 00 	mov    DWORD PTR [esp+0x28],0x0
5f001f59:	00 
5f001f5a:	50                   	push   eax
5f001f5b:	57                   	push   edi
5f001f5c:	e8 df f3 ff ff       	call   0x5f001340
5f001f61:	8d 4c 24 30          	lea    ecx,[esp+0x30]
5f001f65:	83 c4 14             	add    esp,0x14
5f001f68:	6a ff                	push   0xffffffff
5f001f6a:	6a ff                	push   0xffffffff
5f001f6c:	51                   	push   ecx
5f001f6d:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f001f73:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
5f001f77:	6a 0f                	push   0xf
5f001f79:	6a 02                	push   0x2
5f001f7b:	6a 00                	push   0x0
5f001f7d:	51                   	push   ecx
5f001f7e:	57                   	push   edi
5f001f7f:	e8 bc f3 ff ff       	call   0x5f001340
5f001f84:	8d 4c 24 30          	lea    ecx,[esp+0x30]
5f001f88:	83 c4 14             	add    esp,0x14
5f001f8b:	6a ff                	push   0xffffffff
5f001f8d:	6a ff                	push   0xffffffff
5f001f8f:	51                   	push   ecx
5f001f90:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f001f96:	8b 0d 88 52 00 5f    	mov    ecx,DWORD PTR ds:0x5f005288
5f001f9c:	51                   	push   ecx
5f001f9d:	57                   	push   edi
5f001f9e:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f001fa4:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
5f001fa8:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
5f001fac:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f001fb0:	8b 10                	mov    edx,DWORD PTR [eax]
5f001fb2:	89 11                	mov    DWORD PTR [ecx],edx
5f001fb4:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
5f001fb7:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
5f001fba:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
5f001fbd:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
5f001fc0:	51                   	push   ecx
5f001fc1:	57                   	push   edi
5f001fc2:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
5f001fc5:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
5f001fc8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f001fcc:	03 05 94 a3 00 5f    	add    eax,DWORD PTR ds:0x5f00a394
5f001fd2:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
5f001fd6:	e8 35 f3 ff ff       	call   0x5f001310
5f001fdb:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
5f001fdf:	8d 4c 24 34          	lea    ecx,[esp+0x34]
5f001fe3:	2b 44 24 24          	sub    eax,DWORD PTR [esp+0x24]
5f001fe7:	83 c4 08             	add    esp,0x8
5f001fea:	2b 05 94 a3 00 5f    	sub    eax,DWORD PTR ds:0x5f00a394
5f001ff0:	6a 00                	push   0x0
5f001ff2:	50                   	push   eax
5f001ff3:	51                   	push   ecx
5f001ff4:	ff 15 50 d2 00 5f    	call   DWORD PTR ds:0x5f00d250
5f001ffa:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
5f001ffe:	51                   	push   ecx
5f001fff:	57                   	push   edi
5f002000:	e8 0b f3 ff ff       	call   0x5f001310
5f002005:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f002009:	83 c4 08             	add    esp,0x8
5f00200c:	03 05 94 a3 00 5f    	add    eax,DWORD PTR ds:0x5f00a394
5f002012:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
5f002016:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f00201a:	2b 05 94 a3 00 5f    	sub    eax,DWORD PTR ds:0x5f00a394
5f002020:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
5f002024:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
5f002028:	51                   	push   ecx
5f002029:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
5f00202d:	57                   	push   edi
5f00202e:	03 c3                	add    eax,ebx
5f002030:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
5f002034:	e8 d7 f2 ff ff       	call   0x5f001310
5f002039:	83 c4 08             	add    esp,0x8
5f00203c:	85 ed                	test   ebp,ebp
5f00203e:	74 46                	je     0x5f002086
5f002040:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
5f002044:	8d 54 24 2c          	lea    edx,[esp+0x2c]
5f002048:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
5f00204c:	8b 02                	mov    eax,DWORD PTR [edx]
5f00204e:	03 5c 24 30          	add    ebx,DWORD PTR [esp+0x30]
5f002052:	89 01                	mov    DWORD PTR [ecx],eax
5f002054:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
5f002057:	89 69 04             	mov    DWORD PTR [ecx+0x4],ebp
5f00205a:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
5f00205d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
5f002060:	a1 9c a3 00 5f       	mov    eax,ds:0x5f00a39c
5f002065:	6a 0f                	push   0xf
5f002067:	03 c3                	add    eax,ebx
5f002069:	6a 00                	push   0x0
5f00206b:	6a 02                	push   0x2
5f00206d:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
5f002070:	8d 4c 24 48          	lea    ecx,[esp+0x48]
5f002074:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
5f002078:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
5f00207c:	51                   	push   ecx
5f00207d:	57                   	push   edi
5f00207e:	e8 bd f2 ff ff       	call   0x5f001340
5f002083:	83 c4 14             	add    esp,0x14
5f002086:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
5f00208a:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
5f00208e:	2b 44 24 20          	sub    eax,DWORD PTR [esp+0x20]
5f002092:	51                   	push   ecx
5f002093:	2b 05 94 a3 00 5f    	sub    eax,DWORD PTR ds:0x5f00a394
5f002099:	57                   	push   edi
5f00209a:	01 44 24 38          	add    DWORD PTR [esp+0x38],eax
5f00209e:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
5f0020a2:	03 05 98 a3 00 5f    	add    eax,DWORD PTR ds:0x5f00a398
5f0020a8:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
5f0020ac:	e8 5f f2 ff ff       	call   0x5f001310
5f0020b1:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
5f0020b5:	83 c4 08             	add    esp,0x8
5f0020b8:	51                   	push   ecx
5f0020b9:	57                   	push   edi
5f0020ba:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0020c0:	57                   	push   edi
5f0020c1:	56                   	push   esi
5f0020c2:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f0020c8:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f0020cc:	5d                   	pop    ebp
5f0020cd:	5f                   	pop    edi
5f0020ce:	5e                   	pop    esi
5f0020cf:	5b                   	pop    ebx
5f0020d0:	83 c4 3c             	add    esp,0x3c
5f0020d3:	c2 14 00             	ret    0x14
5f0020d6:	cc                   	int3
5f0020d7:	cc                   	int3
5f0020d8:	cc                   	int3
5f0020d9:	cc                   	int3
5f0020da:	cc                   	int3
5f0020db:	cc                   	int3
5f0020dc:	cc                   	int3
5f0020dd:	cc                   	int3
5f0020de:	cc                   	int3
5f0020df:	cc                   	int3
5f0020e0:	83 ec 14             	sub    esp,0x14
5f0020e3:	80 3d a5 a3 00 5f 00 	cmp    BYTE PTR ds:0x5f00a3a5,0x0
5f0020ea:	56                   	push   esi
5f0020eb:	57                   	push   edi
5f0020ec:	0f 84 87 00 00 00    	je     0x5f002179
5f0020f2:	68 20 52 00 5f       	push   0x5f005220
5f0020f7:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f0020fd:	8d 44 24 08          	lea    eax,[esp+0x8]
5f002101:	6a 09                	push   0x9
5f002103:	50                   	push   eax
5f002104:	8b 3d 2c d2 00 5f    	mov    edi,DWORD PTR ds:0x5f00d22c
5f00210a:	c6 05 a4 a3 00 5f 1e 	mov    BYTE PTR ds:0x5f00a3a4,0x1e
5f002111:	68 38 c0 00 5f       	push   0x5f00c038
5f002116:	68 5c c0 00 5f       	push   0x5f00c05c
5f00211b:	68 70 c0 00 5f       	push   0x5f00c070
5f002120:	ff d7                	call   edi
5f002122:	8d 4c 24 08          	lea    ecx,[esp+0x8]
5f002126:	68 1c c0 00 5f       	push   0x5f00c01c
5f00212b:	51                   	push   ecx
5f00212c:	8b 35 3c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d23c
5f002132:	ff d6                	call   esi
5f002134:	85 c0                	test   eax,eax
5f002136:	75 07                	jne    0x5f00213f
5f002138:	c6 05 a4 a3 00 5f 1f 	mov    BYTE PTR ds:0x5f00a3a4,0x1f
5f00213f:	8d 44 24 08          	lea    eax,[esp+0x8]
5f002143:	6a 09                	push   0x9
5f002145:	50                   	push   eax
5f002146:	68 28 c0 00 5f       	push   0x5f00c028
5f00214b:	68 44 c0 00 5f       	push   0x5f00c044
5f002150:	68 70 c0 00 5f       	push   0x5f00c070
5f002155:	ff d7                	call   edi
5f002157:	8d 44 24 08          	lea    eax,[esp+0x8]
5f00215b:	68 0c c0 00 5f       	push   0x5f00c00c
5f002160:	50                   	push   eax
5f002161:	ff d6                	call   esi
5f002163:	85 c0                	test   eax,eax
5f002165:	75 07                	jne    0x5f00216e
5f002167:	c6 05 a4 a3 00 5f 1f 	mov    BYTE PTR ds:0x5f00a3a4,0x1f
5f00216e:	68 20 52 00 5f       	push   0x5f005220
5f002173:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f002179:	5f                   	pop    edi
5f00217a:	5e                   	pop    esi
5f00217b:	83 c4 14             	add    esp,0x14
5f00217e:	c3                   	ret
5f00217f:	cc                   	int3
5f002180:	81 ec 34 02 00 00    	sub    esp,0x234
5f002186:	53                   	push   ebx
5f002187:	56                   	push   esi
5f002188:	57                   	push   edi
5f002189:	68 20 52 00 5f       	push   0x5f005220
5f00218e:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f002194:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f002198:	6a 02                	push   0x2
5f00219a:	50                   	push   eax
5f00219b:	68 00 c2 00 5f       	push   0x5f00c200
5f0021a0:	ff 15 14 d2 00 5f    	call   DWORD PTR ds:0x5f00d214
5f0021a6:	85 c0                	test   eax,eax
5f0021a8:	74 0c                	je     0x5f0021b6
5f0021aa:	66 83 7c 24 0c 31    	cmp    WORD PTR [esp+0xc],0x31
5f0021b0:	0f 84 fc 00 00 00    	je     0x5f0022b2
5f0021b6:	ff 15 18 d2 00 5f    	call   DWORD PTR ds:0x5f00d218
5f0021bc:	a9 00 00 00 80       	test   eax,0x80000000
5f0021c1:	74 38                	je     0x5f0021fb
5f0021c3:	6a 10                	push   0x10
5f0021c5:	68 f4 c1 00 5f       	push   0x5f00c1f4
5f0021ca:	68 68 c1 00 5f       	push   0x5f00c168
5f0021cf:	6a 00                	push   0x0
5f0021d1:	ff 15 80 d2 00 5f    	call   DWORD PTR ds:0x5f00d280
5f0021d7:	c7 05 40 52 00 5f 00 	mov    DWORD PTR ds:0x5f005240,0x0
5f0021de:	00 00 00 
5f0021e1:	68 20 52 00 5f       	push   0x5f005220
5f0021e6:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f0021ec:	a1 40 52 00 5f       	mov    eax,ds:0x5f005240
5f0021f1:	5f                   	pop    edi
5f0021f2:	5e                   	pop    esi
5f0021f3:	5b                   	pop    ebx
5f0021f4:	81 c4 34 02 00 00    	add    esp,0x234
5f0021fa:	c3                   	ret
5f0021fb:	68 04 01 00 00       	push   0x104
5f002200:	a1 58 52 00 5f       	mov    eax,ds:0x5f005258
5f002205:	68 00 50 00 5f       	push   0x5f005000
5f00220a:	50                   	push   eax
5f00220b:	ff 15 10 d2 00 5f    	call   DWORD PTR ds:0x5f00d210
5f002211:	8d 04 45 fe 4f 00 5f 	lea    eax,[eax*2+0x5f004ffe]
5f002218:	3d 00 50 00 5f       	cmp    eax,0x5f005000
5f00221d:	72 31                	jb     0x5f002250
5f00221f:	8b 35 7c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d27c
5f002225:	66 83 38 5c          	cmp    WORD PTR [eax],0x5c
5f002229:	74 11                	je     0x5f00223c
5f00222b:	50                   	push   eax
5f00222c:	68 00 50 00 5f       	push   0x5f005000
5f002231:	ff d6                	call   esi
5f002233:	3d 00 50 00 5f       	cmp    eax,0x5f005000
5f002238:	73 eb                	jae    0x5f002225
5f00223a:	eb 14                	jmp    0x5f002250
5f00223c:	66 83 78 fe 3a       	cmp    WORD PTR [eax-0x2],0x3a
5f002241:	74 07                	je     0x5f00224a
5f002243:	66 c7 00 00 00       	mov    WORD PTR [eax],0x0
5f002248:	eb 06                	jmp    0x5f002250
5f00224a:	66 c7 40 02 00 00    	mov    WORD PTR [eax+0x2],0x0
5f002250:	8d 44 24 38          	lea    eax,[esp+0x38]
5f002254:	68 04 01 00 00       	push   0x104
5f002259:	50                   	push   eax
5f00225a:	ff 15 20 d2 00 5f    	call   DWORD PTR ds:0x5f00d220
5f002260:	8d 4c 24 38          	lea    ecx,[esp+0x38]
5f002264:	8b 35 3c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d23c
5f00226a:	51                   	push   ecx
5f00226b:	68 00 50 00 5f       	push   0x5f005000
5f002270:	ff d6                	call   esi
5f002272:	85 c0                	test   eax,eax
5f002274:	74 3c                	je     0x5f0022b2
5f002276:	8d 44 24 38          	lea    eax,[esp+0x38]
5f00227a:	68 04 01 00 00       	push   0x104
5f00227f:	50                   	push   eax
5f002280:	ff 15 24 d2 00 5f    	call   DWORD PTR ds:0x5f00d224
5f002286:	8d 4c 24 38          	lea    ecx,[esp+0x38]
5f00228a:	51                   	push   ecx
5f00228b:	68 00 50 00 5f       	push   0x5f005000
5f002290:	ff d6                	call   esi
5f002292:	85 c0                	test   eax,eax
5f002294:	74 1c                	je     0x5f0022b2
5f002296:	68 20 52 00 5f       	push   0x5f005220
5f00229b:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f0022a1:	6a 10                	push   0x10
5f0022a3:	68 f4 c1 00 5f       	push   0x5f00c1f4
5f0022a8:	68 dc c0 00 5f       	push   0x5f00c0dc
5f0022ad:	e9 1d ff ff ff       	jmp    0x5f0021cf
5f0022b2:	6a 00                	push   0x0
5f0022b4:	ff 15 78 d2 00 5f    	call   DWORD PTR ds:0x5f00d278
5f0022ba:	8b d8                	mov    ebx,eax
5f0022bc:	6a 0c                	push   0xc
5f0022be:	53                   	push   ebx
5f0022bf:	8b 35 d0 d1 00 5f    	mov    esi,DWORD PTR ds:0x5f00d1d0
5f0022c5:	ff d6                	call   esi
5f0022c7:	8b f8                	mov    edi,eax
5f0022c9:	6a 0e                	push   0xe
5f0022cb:	53                   	push   ebx
5f0022cc:	ff d6                	call   esi
5f0022ce:	0f af f8             	imul   edi,eax
5f0022d1:	b8 01 00 00 00       	mov    eax,0x1
5f0022d6:	83 ff 04             	cmp    edi,0x4
5f0022d9:	7d 02                	jge    0x5f0022dd
5f0022db:	33 c0                	xor    eax,eax
5f0022dd:	6a 01                	push   0x1
5f0022df:	8b 3d 74 d2 00 5f    	mov    edi,DWORD PTR ds:0x5f00d274
5f0022e5:	a3 40 52 00 5f       	mov    ds:0x5f005240,eax
5f0022ea:	ff d7                	call   edi
5f0022ec:	3d 5e 01 00 00       	cmp    eax,0x15e
5f0022f1:	75 15                	jne    0x5f002308
5f0022f3:	6a 00                	push   0x0
5f0022f5:	ff d7                	call   edi
5f0022f7:	3d 80 02 00 00       	cmp    eax,0x280
5f0022fc:	75 0a                	jne    0x5f002308
5f0022fe:	c7 05 40 52 00 5f 00 	mov    DWORD PTR ds:0x5f005240,0x0
5f002305:	00 00 00 
5f002308:	53                   	push   ebx
5f002309:	6a 00                	push   0x0
5f00230b:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f002311:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f002318:	0f 84 c3 fe ff ff    	je     0x5f0021e1
5f00231e:	68 c8 c0 00 5f       	push   0x5f00c0c8
5f002323:	8b 35 1c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d21c
5f002329:	ff d6                	call   esi
5f00232b:	66 a3 48 52 00 5f    	mov    ds:0x5f005248,ax
5f002331:	66 85 c0             	test   ax,ax
5f002334:	0f 84 9d fe ff ff    	je     0x5f0021d7
5f00233a:	68 a0 c0 00 5f       	push   0x5f00c0a0
5f00233f:	ff d6                	call   esi
5f002341:	66 a3 4e 52 00 5f    	mov    ds:0x5f00524e,ax
5f002347:	66 85 c0             	test   ax,ax
5f00234a:	0f 84 87 fe ff ff    	je     0x5f0021d7
5f002350:	68 bc c0 00 5f       	push   0x5f00c0bc
5f002355:	ff d6                	call   esi
5f002357:	66 a3 4c 52 00 5f    	mov    ds:0x5f00524c,ax
5f00235d:	68 b0 c0 00 5f       	push   0x5f00c0b0
5f002362:	ff d6                	call   esi
5f002364:	66 83 3d 4c 52 00 5f 	cmp    WORD PTR ds:0x5f00524c,0x0
5f00236b:	00 
5f00236c:	66 a3 4a 52 00 5f    	mov    ds:0x5f00524a,ax
5f002372:	0f 84 eb 00 00 00    	je     0x5f002463
5f002378:	66 85 c0             	test   ax,ax
5f00237b:	0f 84 e2 00 00 00    	je     0x5f002463
5f002381:	68 90 c0 00 5f       	push   0x5f00c090
5f002386:	ff d6                	call   esi
5f002388:	66 a3 52 52 00 5f    	mov    ds:0x5f005252,ax
5f00238e:	68 80 c0 00 5f       	push   0x5f00c080
5f002393:	ff d6                	call   esi
5f002395:	66 83 3d 52 52 00 5f 	cmp    WORD PTR ds:0x5f005252,0x0
5f00239c:	00 
5f00239d:	66 a3 50 52 00 5f    	mov    ds:0x5f005250,ax
5f0023a3:	0f 84 a4 00 00 00    	je     0x5f00244d
5f0023a9:	66 85 c0             	test   ax,ax
5f0023ac:	0f 84 9b 00 00 00    	je     0x5f00244d
5f0023b2:	68 d0 c0 00 5f       	push   0x5f00c0d0
5f0023b7:	ff d6                	call   esi
5f0023b9:	66 a3 54 52 00 5f    	mov    ds:0x5f005254,ax
5f0023bf:	66 85 c0             	test   ax,ax
5f0023c2:	0f 84 0f fe ff ff    	je     0x5f0021d7
5f0023c8:	6a 2a                	push   0x2a
5f0023ca:	ff d7                	call   edi
5f0023cc:	a2 a5 a3 00 5f       	mov    ds:0x5f00a3a5,al
5f0023d1:	e8 0a fd ff ff       	call   0x5f0020e0
5f0023d6:	6a 01                	push   0x1
5f0023d8:	e8 83 01 00 00       	call   0x5f002560
5f0023dd:	83 c4 04             	add    esp,0x4
5f0023e0:	85 c0                	test   eax,eax
5f0023e2:	0f 84 ef fd ff ff    	je     0x5f0021d7
5f0023e8:	bb a0 a2 00 5f       	mov    ebx,0x5f00a2a0
5f0023ed:	be 60 b0 00 5f       	mov    esi,0x5f00b060
5f0023f2:	8b 3d 70 d2 00 5f    	mov    edi,DWORD PTR ds:0x5f00d270
5f0023f8:	8b 06                	mov    eax,DWORD PTR [esi]
5f0023fa:	8d 56 d8             	lea    edx,[esi-0x28]
5f0023fd:	89 03                	mov    DWORD PTR [ebx],eax
5f0023ff:	8d 4c 24 10          	lea    ecx,[esp+0x10]
5f002403:	51                   	push   ecx
5f002404:	83 c3 28             	add    ebx,0x28
5f002407:	52                   	push   edx
5f002408:	83 c6 34             	add    esi,0x34
5f00240b:	6a 00                	push   0x0
5f00240d:	ff d7                	call   edi
5f00240f:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
5f002413:	81 fe 98 b1 00 5f    	cmp    esi,0x5f00b198
5f002419:	89 4b dc             	mov    DWORD PTR [ebx-0x24],ecx
5f00241c:	72 da                	jb     0x5f0023f8
5f00241e:	8d 44 24 10          	lea    eax,[esp+0x10]
5f002422:	50                   	push   eax
5f002423:	68 02 80 00 00       	push   0x8002
5f002428:	6a 00                	push   0x0
5f00242a:	ff d7                	call   edi
5f00242c:	85 c0                	test   eax,eax
5f00242e:	74 0e                	je     0x5f00243e
5f002430:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f002434:	a3 90 a3 00 5f       	mov    ds:0x5f00a390,eax
5f002439:	e9 a3 fd ff ff       	jmp    0x5f0021e1
5f00243e:	a1 6c d2 00 5f       	mov    eax,ds:0x5f00d26c
5f002443:	a3 90 a3 00 5f       	mov    ds:0x5f00a390,eax
5f002448:	e9 94 fd ff ff       	jmp    0x5f0021e1
5f00244d:	33 c0                	xor    eax,eax
5f00244f:	5f                   	pop    edi
5f002450:	c7 05 40 52 00 5f 00 	mov    DWORD PTR ds:0x5f005240,0x0
5f002457:	00 00 00 
5f00245a:	5e                   	pop    esi
5f00245b:	5b                   	pop    ebx
5f00245c:	81 c4 34 02 00 00    	add    esp,0x234
5f002462:	c3                   	ret
5f002463:	33 c0                	xor    eax,eax
5f002465:	5f                   	pop    edi
5f002466:	c7 05 40 52 00 5f 00 	mov    DWORD PTR ds:0x5f005240,0x0
5f00246d:	00 00 00 
5f002470:	5e                   	pop    esi
5f002471:	5b                   	pop    ebx
5f002472:	81 c4 34 02 00 00    	add    esp,0x234
5f002478:	c3                   	ret
5f002479:	cc                   	int3
5f00247a:	cc                   	int3
5f00247b:	cc                   	int3
5f00247c:	cc                   	int3
5f00247d:	cc                   	int3
5f00247e:	cc                   	int3
5f00247f:	cc                   	int3
5f002480:	56                   	push   esi
5f002481:	68 20 52 00 5f       	push   0x5f005220
5f002486:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f00248c:	b8 a0 a2 00 5f       	mov    eax,0x5f00a2a0
5f002491:	83 38 00             	cmp    DWORD PTR [eax],0x0
5f002494:	74 06                	je     0x5f00249c
5f002496:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
5f00249c:	83 c0 28             	add    eax,0x28
5f00249f:	3d 90 a3 00 5f       	cmp    eax,0x5f00a390
5f0024a4:	72 eb                	jb     0x5f002491
5f0024a6:	e8 35 ee ff ff       	call   0x5f0012e0
5f0024ab:	66 83 3d 48 52 00 5f 	cmp    WORD PTR ds:0x5f005248,0x0
5f0024b2:	00 
5f0024b3:	74 11                	je     0x5f0024c6
5f0024b5:	66 a1 48 52 00 5f    	mov    ax,ds:0x5f005248
5f0024bb:	8b 35 fc d1 00 5f    	mov    esi,DWORD PTR ds:0x5f00d1fc
5f0024c1:	50                   	push   eax
5f0024c2:	ff d6                	call   esi
5f0024c4:	eb 06                	jmp    0x5f0024cc
5f0024c6:	8b 35 fc d1 00 5f    	mov    esi,DWORD PTR ds:0x5f00d1fc
5f0024cc:	66 83 3d 4e 52 00 5f 	cmp    WORD PTR ds:0x5f00524e,0x0
5f0024d3:	00 
5f0024d4:	74 09                	je     0x5f0024df
5f0024d6:	66 a1 4e 52 00 5f    	mov    ax,ds:0x5f00524e
5f0024dc:	50                   	push   eax
5f0024dd:	ff d6                	call   esi
5f0024df:	66 83 3d 4c 52 00 5f 	cmp    WORD PTR ds:0x5f00524c,0x0
5f0024e6:	00 
5f0024e7:	74 09                	je     0x5f0024f2
5f0024e9:	66 a1 4c 52 00 5f    	mov    ax,ds:0x5f00524c
5f0024ef:	50                   	push   eax
5f0024f0:	ff d6                	call   esi
5f0024f2:	66 83 3d 4a 52 00 5f 	cmp    WORD PTR ds:0x5f00524a,0x0
5f0024f9:	00 
5f0024fa:	74 09                	je     0x5f002505
5f0024fc:	66 a1 4a 52 00 5f    	mov    ax,ds:0x5f00524a
5f002502:	50                   	push   eax
5f002503:	ff d6                	call   esi
5f002505:	66 83 3d 52 52 00 5f 	cmp    WORD PTR ds:0x5f005252,0x0
5f00250c:	00 
5f00250d:	74 09                	je     0x5f002518
5f00250f:	66 a1 52 52 00 5f    	mov    ax,ds:0x5f005252
5f002515:	50                   	push   eax
5f002516:	ff d6                	call   esi
5f002518:	66 83 3d 50 52 00 5f 	cmp    WORD PTR ds:0x5f005250,0x0
5f00251f:	00 
5f002520:	74 09                	je     0x5f00252b
5f002522:	66 a1 50 52 00 5f    	mov    ax,ds:0x5f005250
5f002528:	50                   	push   eax
5f002529:	ff d6                	call   esi
5f00252b:	66 83 3d 54 52 00 5f 	cmp    WORD PTR ds:0x5f005254,0x0
5f002532:	00 
5f002533:	74 09                	je     0x5f00253e
5f002535:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f00253b:	50                   	push   eax
5f00253c:	ff d6                	call   esi
5f00253e:	c7 05 40 52 00 5f 00 	mov    DWORD PTR ds:0x5f005240,0x0
5f002545:	00 00 00 
5f002548:	68 20 52 00 5f       	push   0x5f005220
5f00254d:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f002553:	5e                   	pop    esi
5f002554:	c3                   	ret
5f002555:	cc                   	int3
5f002556:	cc                   	int3
5f002557:	cc                   	int3
5f002558:	cc                   	int3
5f002559:	cc                   	int3
5f00255a:	cc                   	int3
5f00255b:	cc                   	int3
5f00255c:	cc                   	int3
5f00255d:	cc                   	int3
5f00255e:	cc                   	int3
5f00255f:	cc                   	int3
5f002560:	83 ec 30             	sub    esp,0x30
5f002563:	83 3d 40 52 00 5f 00 	cmp    DWORD PTR ds:0x5f005240,0x0
5f00256a:	53                   	push   ebx
5f00256b:	56                   	push   esi
5f00256c:	57                   	push   edi
5f00256d:	75 09                	jne    0x5f002578
5f00256f:	33 c0                	xor    eax,eax
5f002571:	5f                   	pop    edi
5f002572:	5e                   	pop    esi
5f002573:	5b                   	pop    ebx
5f002574:	83 c4 30             	add    esp,0x30
5f002577:	c3                   	ret
5f002578:	66 33 db             	xor    bx,bx
5f00257b:	8b 3d 84 d2 00 5f    	mov    edi,DWORD PTR ds:0x5f00d284
5f002581:	0f b7 f3             	movzx  esi,bx
5f002584:	66 43                	inc    bx
5f002586:	33 c0                	xor    eax,eax
5f002588:	66 8b 04 75 70 b1 00 	mov    ax,WORD PTR [esi*2+0x5f00b170]
5f00258f:	5f 
5f002590:	50                   	push   eax
5f002591:	ff d7                	call   edi
5f002593:	66 83 fb 08          	cmp    bx,0x8
5f002597:	89 44 b4 1c          	mov    DWORD PTR [esp+esi*4+0x1c],eax
5f00259b:	72 e4                	jb     0x5f002581
5f00259d:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x300
5f0025a4:	00 03 
5f0025a6:	75 08                	jne    0x5f0025b0
5f0025a8:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffff
5f0025af:	00 
5f0025b0:	83 7c 24 34 00       	cmp    DWORD PTR [esp+0x34],0x0
5f0025b5:	74 0a                	je     0x5f0025c1
5f0025b7:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
5f0025bb:	39 44 24 20          	cmp    DWORD PTR [esp+0x20],eax
5f0025bf:	75 1a                	jne    0x5f0025db
5f0025c1:	81 7c 24 20 80 80 80 	cmp    DWORD PTR [esp+0x20],0x808080
5f0025c8:	00 
5f0025c9:	c7 44 24 34 c0 c0 c0 	mov    DWORD PTR [esp+0x34],0xc0c0c0
5f0025d0:	00 
5f0025d1:	74 08                	je     0x5f0025db
5f0025d3:	c7 44 24 34 80 80 80 	mov    DWORD PTR [esp+0x34],0x808080
5f0025da:	00 
5f0025db:	83 7c 24 40 00       	cmp    DWORD PTR [esp+0x40],0x0
5f0025e0:	75 1e                	jne    0x5f002600
5f0025e2:	be 64 52 00 5f       	mov    esi,0x5f005264
5f0025e7:	8d 7c 24 1c          	lea    edi,[esp+0x1c]
5f0025eb:	b9 20 00 00 00       	mov    ecx,0x20
5f0025f0:	f3 a6                	repz cmps BYTE PTR ds:[esi],BYTE PTR es:[edi]
5f0025f2:	75 0c                	jne    0x5f002600
5f0025f4:	b8 01 00 00 00       	mov    eax,0x1
5f0025f9:	5f                   	pop    edi
5f0025fa:	5e                   	pop    esi
5f0025fb:	5b                   	pop    ebx
5f0025fc:	83 c4 30             	add    esp,0x30
5f0025ff:	c3                   	ret
5f002600:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
5f002604:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
5f002608:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
5f00260c:	50                   	push   eax
5f00260d:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
5f002611:	51                   	push   ecx
5f002612:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
5f002616:	52                   	push   edx
5f002617:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
5f00261b:	50                   	push   eax
5f00261c:	51                   	push   ecx
5f00261d:	a1 58 52 00 5f       	mov    eax,ds:0x5f005258
5f002622:	66 33 ff             	xor    di,di
5f002625:	52                   	push   edx
5f002626:	68 c7 67 00 00       	push   0x67c7
5f00262b:	50                   	push   eax
5f00262c:	e8 bf 21 00 00       	call   0x5f0047f0
5f002631:	8b 35 e0 d1 00 5f    	mov    esi,DWORD PTR ds:0x5f00d1e0
5f002637:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
5f00263b:	0f b7 c7             	movzx  eax,di
5f00263e:	66 47                	inc    di
5f002640:	8b 4c 84 1c          	mov    ecx,DWORD PTR [esp+eax*4+0x1c]
5f002644:	8d 1c 85 00 00 00 00 	lea    ebx,[eax*4+0x0]
5f00264b:	51                   	push   ecx
5f00264c:	ff d6                	call   esi
5f00264e:	66 83 ff 03          	cmp    di,0x3
5f002652:	89 44 1c 10          	mov    DWORD PTR [esp+ebx*1+0x10],eax
5f002656:	72 e3                	jb     0x5f00263b
5f002658:	33 c0                	xor    eax,eax
5f00265a:	33 c9                	xor    ecx,ecx
5f00265c:	0f b7 d0             	movzx  edx,ax
5f00265f:	39 4c 94 10          	cmp    DWORD PTR [esp+edx*4+0x10],ecx
5f002663:	74 53                	je     0x5f0026b8
5f002665:	66 40                	inc    ax
5f002667:	66 3d 03 00          	cmp    ax,0x3
5f00266b:	72 ef                	jb     0x5f00265c
5f00266d:	83 7c 24 0c 00       	cmp    DWORD PTR [esp+0xc],0x0
5f002672:	74 44                	je     0x5f0026b8
5f002674:	e8 67 ec ff ff       	call   0x5f0012e0
5f002679:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
5f00267d:	8d 4c 24 10          	lea    ecx,[esp+0x10]
5f002681:	ba 84 52 00 5f       	mov    edx,0x5f005284
5f002686:	8d 74 24 1c          	lea    esi,[esp+0x1c]
5f00268a:	8b 01                	mov    eax,DWORD PTR [ecx]
5f00268c:	bf 64 52 00 5f       	mov    edi,0x5f005264
5f002691:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
5f002694:	89 02                	mov    DWORD PTR [edx],eax
5f002696:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
5f002699:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
5f00269c:	b9 08 00 00 00       	mov    ecx,0x8
5f0026a1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
5f0026a3:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
5f0026a7:	5f                   	pop    edi
5f0026a8:	5e                   	pop    esi
5f0026a9:	a3 90 52 00 5f       	mov    ds:0x5f005290,eax
5f0026ae:	b8 01 00 00 00       	mov    eax,0x1
5f0026b3:	5b                   	pop    ebx
5f0026b4:	83 c4 30             	add    esp,0x30
5f0026b7:	c3                   	ret
5f0026b8:	66 33 f6             	xor    si,si
5f0026bb:	0f b7 c6             	movzx  eax,si
5f0026be:	66 46                	inc    si
5f0026c0:	8d 4c 84 10          	lea    ecx,[esp+eax*4+0x10]
5f0026c4:	51                   	push   ecx
5f0026c5:	e8 f6 eb ff ff       	call   0x5f0012c0
5f0026ca:	83 c4 04             	add    esp,0x4
5f0026cd:	66 83 fe 03          	cmp    si,0x3
5f0026d1:	72 e8                	jb     0x5f0026bb
5f0026d3:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f0026d7:	50                   	push   eax
5f0026d8:	e8 e3 eb ff ff       	call   0x5f0012c0
5f0026dd:	83 c4 04             	add    esp,0x4
5f0026e0:	33 c0                	xor    eax,eax
5f0026e2:	5f                   	pop    edi
5f0026e3:	5e                   	pop    esi
5f0026e4:	5b                   	pop    ebx
5f0026e5:	83 c4 30             	add    esp,0x30
5f0026e8:	c3                   	ret
5f0026e9:	cc                   	int3
5f0026ea:	cc                   	int3
5f0026eb:	cc                   	int3
5f0026ec:	cc                   	int3
5f0026ed:	cc                   	int3
5f0026ee:	cc                   	int3
5f0026ef:	cc                   	int3
5f0026f0:	83 ec 28             	sub    esp,0x28
5f0026f3:	53                   	push   ebx
5f0026f4:	56                   	push   esi
5f0026f5:	57                   	push   edi
5f0026f6:	55                   	push   ebp
5f0026f7:	8b 7c 24 40          	mov    edi,DWORD PTR [esp+0x40]
5f0026fb:	81 ff 82 00 00 00    	cmp    edi,0x82
5f002701:	75 24                	jne    0x5f002727
5f002703:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f002707:	6a 06                	push   0x6
5f002709:	8b 5c 24 48          	mov    ebx,DWORD PTR [esp+0x48]
5f00270d:	55                   	push   ebp
5f00270e:	8b 74 24 44          	mov    esi,DWORD PTR [esp+0x44]
5f002712:	53                   	push   ebx
5f002713:	57                   	push   edi
5f002714:	56                   	push   esi
5f002715:	e8 46 eb ff ff       	call   0x5f001260
5f00271a:	83 c4 14             	add    esp,0x14
5f00271d:	5d                   	pop    ebp
5f00271e:	5f                   	pop    edi
5f00271f:	5e                   	pop    esi
5f002720:	5b                   	pop    ebx
5f002721:	83 c4 28             	add    esp,0x28
5f002724:	c2 10 00             	ret    0x10
5f002727:	33 c0                	xor    eax,eax
5f002729:	8b 74 24 3c          	mov    esi,DWORD PTR [esp+0x3c]
5f00272d:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f002733:	50                   	push   eax
5f002734:	56                   	push   esi
5f002735:	ff 15 00 d3 00 5f    	call   DWORD PTR ds:0x5f00d300
5f00273b:	85 c0                	test   eax,eax
5f00273d:	74 28                	je     0x5f002767
5f00273f:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f002743:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f002747:	55                   	push   ebp
5f002748:	53                   	push   ebx
5f002749:	57                   	push   edi
5f00274a:	56                   	push   esi
5f00274b:	6a 06                	push   0x6
5f00274d:	56                   	push   esi
5f00274e:	e8 cd e8 ff ff       	call   0x5f001020
5f002753:	83 c4 08             	add    esp,0x8
5f002756:	50                   	push   eax
5f002757:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f00275d:	5d                   	pop    ebp
5f00275e:	5f                   	pop    edi
5f00275f:	5e                   	pop    esi
5f002760:	5b                   	pop    ebx
5f002761:	83 c4 28             	add    esp,0x28
5f002764:	c2 10 00             	ret    0x10
5f002767:	81 ff 86 00 00 00    	cmp    edi,0x86
5f00276d:	77 35                	ja     0x5f0027a4
5f00276f:	81 ff 85 00 00 00    	cmp    edi,0x85
5f002775:	73 61                	jae    0x5f0027d8
5f002777:	83 ff 0c             	cmp    edi,0xc
5f00277a:	74 5c                	je     0x5f0027d8
5f00277c:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f002780:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f002784:	55                   	push   ebp
5f002785:	53                   	push   ebx
5f002786:	57                   	push   edi
5f002787:	56                   	push   esi
5f002788:	6a 06                	push   0x6
5f00278a:	56                   	push   esi
5f00278b:	e8 90 e8 ff ff       	call   0x5f001020
5f002790:	83 c4 08             	add    esp,0x8
5f002793:	50                   	push   eax
5f002794:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f00279a:	5d                   	pop    ebp
5f00279b:	5f                   	pop    edi
5f00279c:	5e                   	pop    esi
5f00279d:	5b                   	pop    ebx
5f00279e:	83 c4 28             	add    esp,0x28
5f0027a1:	c2 10 00             	ret    0x10
5f0027a4:	81 ff 38 01 00 00    	cmp    edi,0x138
5f0027aa:	77 16                	ja     0x5f0027c2
5f0027ac:	81 ff 32 01 00 00    	cmp    edi,0x132
5f0027b2:	0f 83 3b 01 00 00    	jae    0x5f0028f3
5f0027b8:	81 ff 10 01 00 00    	cmp    edi,0x110
5f0027be:	74 73                	je     0x5f002833
5f0027c0:	eb ba                	jmp    0x5f00277c
5f0027c2:	81 ff 43 19 00 00    	cmp    edi,0x1943
5f0027c8:	72 b2                	jb     0x5f00277c
5f0027ca:	81 ff 44 19 00 00    	cmp    edi,0x1944
5f0027d0:	0f 86 30 02 00 00    	jbe    0x5f002a06
5f0027d6:	eb a4                	jmp    0x5f00277c
5f0027d8:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f0027df:	5f 03 
5f0027e1:	73 28                	jae    0x5f00280b
5f0027e3:	56                   	push   esi
5f0027e4:	ff 15 64 d2 00 5f    	call   DWORD PTR ds:0x5f00d264
5f0027ea:	85 c0                	test   eax,eax
5f0027ec:	75 1d                	jne    0x5f00280b
5f0027ee:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f0027f2:	6a 00                	push   0x0
5f0027f4:	8b 5c 24 48          	mov    ebx,DWORD PTR [esp+0x48]
5f0027f8:	55                   	push   ebp
5f0027f9:	53                   	push   ebx
5f0027fa:	57                   	push   edi
5f0027fb:	56                   	push   esi
5f0027fc:	e8 2f f6 ff ff       	call   0x5f001e30
5f002801:	5d                   	pop    ebp
5f002802:	5f                   	pop    edi
5f002803:	5e                   	pop    esi
5f002804:	5b                   	pop    ebx
5f002805:	83 c4 28             	add    esp,0x28
5f002808:	c2 10 00             	ret    0x10
5f00280b:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f00280f:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f002813:	55                   	push   ebp
5f002814:	53                   	push   ebx
5f002815:	57                   	push   edi
5f002816:	56                   	push   esi
5f002817:	6a 06                	push   0x6
5f002819:	56                   	push   esi
5f00281a:	e8 01 e8 ff ff       	call   0x5f001020
5f00281f:	83 c4 08             	add    esp,0x8
5f002822:	50                   	push   eax
5f002823:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f002829:	5d                   	pop    ebp
5f00282a:	5f                   	pop    edi
5f00282b:	5e                   	pop    esi
5f00282c:	5b                   	pop    ebx
5f00282d:	83 c4 28             	add    esp,0x28
5f002830:	c2 10 00             	ret    0x10
5f002833:	6a 06                	push   0x6
5f002835:	56                   	push   esi
5f002836:	e8 e5 e7 ff ff       	call   0x5f001020
5f00283b:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
5f00283f:	83 c4 08             	add    esp,0x8
5f002842:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002849:	5f 03 
5f00284b:	72 15                	jb     0x5f002862
5f00284d:	6a f0                	push   0xfffffff0
5f00284f:	56                   	push   esi
5f002850:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f002856:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
5f00285d:	00 
5f00285e:	a8 04                	test   al,0x4
5f002860:	75 08                	jne    0x5f00286a
5f002862:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
5f002869:	00 
5f00286a:	8d 44 24 10          	lea    eax,[esp+0x10]
5f00286e:	50                   	push   eax
5f00286f:	6a 00                	push   0x0
5f002871:	68 f0 11 00 00       	push   0x11f0
5f002876:	56                   	push   esi
5f002877:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f00287d:	83 7c 24 10 00       	cmp    DWORD PTR [esp+0x10],0x0
5f002882:	75 27                	jne    0x5f0028ab
5f002884:	56                   	push   esi
5f002885:	e8 06 f1 ff ff       	call   0x5f001990
5f00288a:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f00288e:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f002892:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f002896:	55                   	push   ebp
5f002897:	53                   	push   ebx
5f002898:	57                   	push   edi
5f002899:	56                   	push   esi
5f00289a:	50                   	push   eax
5f00289b:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f0028a1:	5d                   	pop    ebp
5f0028a2:	5f                   	pop    edi
5f0028a3:	5e                   	pop    esi
5f0028a4:	5b                   	pop    ebx
5f0028a5:	83 c4 28             	add    esp,0x28
5f0028a8:	c2 10 00             	ret    0x10
5f0028ab:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f0028af:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f0028b3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f0028b7:	55                   	push   ebp
5f0028b8:	53                   	push   ebx
5f0028b9:	57                   	push   edi
5f0028ba:	56                   	push   esi
5f0028bb:	50                   	push   eax
5f0028bc:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f0028c2:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f0028c9:	5f 03 
5f0028cb:	8b f8                	mov    edi,eax
5f0028cd:	72 0d                	jb     0x5f0028dc
5f0028cf:	6a f0                	push   0xfffffff0
5f0028d1:	56                   	push   esi
5f0028d2:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f0028d8:	a8 04                	test   al,0x4
5f0028da:	75 0b                	jne    0x5f0028e7
5f0028dc:	68 ff ff 00 00       	push   0xffff
5f0028e1:	56                   	push   esi
5f0028e2:	e8 69 f3 ff ff       	call   0x5f001c50
5f0028e7:	8b c7                	mov    eax,edi
5f0028e9:	5d                   	pop    ebp
5f0028ea:	5f                   	pop    edi
5f0028eb:	5e                   	pop    esi
5f0028ec:	5b                   	pop    ebx
5f0028ed:	83 c4 28             	add    esp,0x28
5f0028f0:	c2 10 00             	ret    0x10
5f0028f3:	8d 44 24 18          	lea    eax,[esp+0x18]
5f0028f7:	6a 10                	push   0x10
5f0028f9:	50                   	push   eax
5f0028fa:	56                   	push   esi
5f0028fb:	ff 15 f0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f0
5f002901:	8d 4c 24 18          	lea    ecx,[esp+0x18]
5f002905:	51                   	push   ecx
5f002906:	68 20 c2 00 5f       	push   0x5f00c220
5f00290b:	ff 15 0c d2 00 5f    	call   DWORD PTR ds:0x5f00d20c
5f002911:	85 c0                	test   eax,eax
5f002913:	74 3a                	je     0x5f00294f
5f002915:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f002919:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f00291d:	55                   	push   ebp
5f00291e:	8d 87 bf 0c 00 00    	lea    eax,[edi+0xcbf]
5f002924:	53                   	push   ebx
5f002925:	50                   	push   eax
5f002926:	56                   	push   esi
5f002927:	6a 06                	push   0x6
5f002929:	56                   	push   esi
5f00292a:	e8 f1 e6 ff ff       	call   0x5f001020
5f00292f:	83 c4 08             	add    esp,0x8
5f002932:	50                   	push   eax
5f002933:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f002939:	85 c0                	test   eax,eax
5f00293b:	0f 84 ab 00 00 00    	je     0x5f0029ec
5f002941:	83 f8 01             	cmp    eax,0x1
5f002944:	0f 85 aa 00 00 00    	jne    0x5f0029f4
5f00294a:	e9 9d 00 00 00       	jmp    0x5f0029ec
5f00294f:	6a 04                	push   0x4
5f002951:	56                   	push   esi
5f002952:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f002958:	85 c0                	test   eax,eax
5f00295a:	75 0e                	jne    0x5f00296a
5f00295c:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f002960:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f002964:	55                   	push   ebp
5f002965:	e9 83 00 00 00       	jmp    0x5f0029ed
5f00296a:	3d 00 00 ff ff       	cmp    eax,0xffff0000
5f00296f:	76 3a                	jbe    0x5f0029ab
5f002971:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x30a
5f002978:	0a 03 
5f00297a:	77 2f                	ja     0x5f0029ab
5f00297c:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f002980:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f002984:	55                   	push   ebp
5f002985:	8d 87 bf 0c 00 00    	lea    eax,[edi+0xcbf]
5f00298b:	53                   	push   ebx
5f00298c:	50                   	push   eax
5f00298d:	56                   	push   esi
5f00298e:	6a 06                	push   0x6
5f002990:	56                   	push   esi
5f002991:	e8 8a e6 ff ff       	call   0x5f001020
5f002996:	83 c4 08             	add    esp,0x8
5f002999:	50                   	push   eax
5f00299a:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f0029a0:	85 c0                	test   eax,eax
5f0029a2:	74 48                	je     0x5f0029ec
5f0029a4:	83 f8 01             	cmp    eax,0x1
5f0029a7:	75 4b                	jne    0x5f0029f4
5f0029a9:	eb 41                	jmp    0x5f0029ec
5f0029ab:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f0029af:	8b 5c 24 44          	mov    ebx,DWORD PTR [esp+0x44]
5f0029b3:	55                   	push   ebp
5f0029b4:	53                   	push   ebx
5f0029b5:	57                   	push   edi
5f0029b6:	56                   	push   esi
5f0029b7:	50                   	push   eax
5f0029b8:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f0029be:	85 c0                	test   eax,eax
5f0029c0:	74 05                	je     0x5f0029c7
5f0029c2:	83 f8 01             	cmp    eax,0x1
5f0029c5:	75 2d                	jne    0x5f0029f4
5f0029c7:	55                   	push   ebp
5f0029c8:	8d 87 bf 0c 00 00    	lea    eax,[edi+0xcbf]
5f0029ce:	53                   	push   ebx
5f0029cf:	50                   	push   eax
5f0029d0:	56                   	push   esi
5f0029d1:	6a 06                	push   0x6
5f0029d3:	56                   	push   esi
5f0029d4:	e8 47 e6 ff ff       	call   0x5f001020
5f0029d9:	83 c4 08             	add    esp,0x8
5f0029dc:	50                   	push   eax
5f0029dd:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f0029e3:	85 c0                	test   eax,eax
5f0029e5:	74 05                	je     0x5f0029ec
5f0029e7:	83 f8 01             	cmp    eax,0x1
5f0029ea:	75 08                	jne    0x5f0029f4
5f0029ec:	55                   	push   ebp
5f0029ed:	53                   	push   ebx
5f0029ee:	57                   	push   edi
5f0029ef:	e8 5c f3 ff ff       	call   0x5f001d50
5f0029f4:	85 c0                	test   eax,eax
5f0029f6:	0f 84 88 fd ff ff    	je     0x5f002784
5f0029fc:	5d                   	pop    ebp
5f0029fd:	5f                   	pop    edi
5f0029fe:	5e                   	pop    esi
5f0029ff:	5b                   	pop    ebx
5f002a00:	83 c4 28             	add    esp,0x28
5f002a03:	c2 10 00             	ret    0x10
5f002a06:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f002a0a:	b8 ee 03 00 00       	mov    eax,0x3ee
5f002a0f:	c7 45 00 01 00 00 00 	mov    DWORD PTR [ebp+0x0],0x1
5f002a16:	5d                   	pop    ebp
5f002a17:	5f                   	pop    edi
5f002a18:	5e                   	pop    esi
5f002a19:	5b                   	pop    ebx
5f002a1a:	83 c4 28             	add    esp,0x28
5f002a1d:	c2 10 00             	ret    0x10
5f002a20:	56                   	push   esi
5f002a21:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
5f002a25:	56                   	push   esi
5f002a26:	e8 d5 e5 ff ff       	call   0x5f001000
5f002a2b:	83 c4 04             	add    esp,0x4
5f002a2e:	85 c0                	test   eax,eax
5f002a30:	75 04                	jne    0x5f002a36
5f002a32:	33 c0                	xor    eax,eax
5f002a34:	5e                   	pop    esi
5f002a35:	c3                   	ret
5f002a36:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002a3d:	5f 03 
5f002a3f:	72 11                	jb     0x5f002a52
5f002a41:	6a f0                	push   0xfffffff0
5f002a43:	56                   	push   esi
5f002a44:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f002a4a:	a8 04                	test   al,0x4
5f002a4c:	74 04                	je     0x5f002a52
5f002a4e:	33 c0                	xor    eax,eax
5f002a50:	5e                   	pop    esi
5f002a51:	c3                   	ret
5f002a52:	b8 01 00 00 00       	mov    eax,0x1
5f002a57:	5e                   	pop    esi
5f002a58:	c3                   	ret
5f002a59:	cc                   	int3
5f002a5a:	cc                   	int3
5f002a5b:	cc                   	int3
5f002a5c:	cc                   	int3
5f002a5d:	cc                   	int3
5f002a5e:	cc                   	int3
5f002a5f:	cc                   	int3
5f002a60:	83 ec 04             	sub    esp,0x4
5f002a63:	53                   	push   ebx
5f002a64:	56                   	push   esi
5f002a65:	57                   	push   edi
5f002a66:	55                   	push   ebp
5f002a67:	ff 15 40 d2 00 5f    	call   DWORD PTR ds:0x5f00d240
5f002a6d:	8b f0                	mov    esi,eax
5f002a6f:	68 20 52 00 5f       	push   0x5f005220
5f002a74:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f002a7a:	3b 35 94 52 00 5f    	cmp    esi,DWORD PTR ds:0x5f005294
5f002a80:	74 61                	je     0x5f002ae3
5f002a82:	33 c9                	xor    ecx,ecx
5f002a84:	3b 0d 9c 52 00 5f    	cmp    ecx,DWORD PTR ds:0x5f00529c
5f002a8a:	7d 29                	jge    0x5f002ab5
5f002a8c:	b8 a4 52 00 5f       	mov    eax,0x5f0052a4
5f002a91:	39 30                	cmp    DWORD PTR [eax],esi
5f002a93:	74 0e                	je     0x5f002aa3
5f002a95:	83 c0 14             	add    eax,0x14
5f002a98:	41                   	inc    ecx
5f002a99:	3b 0d 9c 52 00 5f    	cmp    ecx,DWORD PTR ds:0x5f00529c
5f002a9f:	7c f0                	jl     0x5f002a91
5f002aa1:	eb 0c                	jmp    0x5f002aaf
5f002aa3:	89 0d 98 52 00 5f    	mov    DWORD PTR ds:0x5f005298,ecx
5f002aa9:	89 35 94 52 00 5f    	mov    DWORD PTR ds:0x5f005294,esi
5f002aaf:	3b 0d 9c 52 00 5f    	cmp    ecx,DWORD PTR ds:0x5f00529c
5f002ab5:	75 2c                	jne    0x5f002ae3
5f002ab7:	68 20 52 00 5f       	push   0x5f005220
5f002abc:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f002ac2:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
5f002ac6:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f002aca:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
5f002ace:	53                   	push   ebx
5f002acf:	50                   	push   eax
5f002ad0:	56                   	push   esi
5f002ad1:	6a 00                	push   0x0
5f002ad3:	ff 15 dc d2 00 5f    	call   DWORD PTR ds:0x5f00d2dc
5f002ad9:	5d                   	pop    ebp
5f002ada:	5f                   	pop    edi
5f002adb:	5e                   	pop    esi
5f002adc:	5b                   	pop    ebx
5f002add:	83 c4 04             	add    esp,0x4
5f002ae0:	c2 0c 00             	ret    0xc
5f002ae3:	8b 3d 98 52 00 5f    	mov    edi,DWORD PTR ds:0x5f005298
5f002ae9:	68 20 52 00 5f       	push   0x5f005220
5f002aee:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f002af4:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
5f002af8:	8b 5c 24 20          	mov    ebx,DWORD PTR [esp+0x20]
5f002afc:	83 fe 03             	cmp    esi,0x3
5f002aff:	0f 85 e7 00 00 00    	jne    0x5f002bec
5f002b05:	8b 2b                	mov    ebp,DWORD PTR [ebx]
5f002b07:	81 7d 28 02 80 00 00 	cmp    DWORD PTR [ebp+0x28],0x8002
5f002b0e:	75 7e                	jne    0x5f002b8e
5f002b10:	66 83 3d 62 52 00 5f 	cmp    WORD PTR ds:0x5f005262,0x20
5f002b17:	20 
5f002b18:	75 60                	jne    0x5f002b7a
5f002b1a:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002b21:	5f 03 
5f002b23:	72 1b                	jb     0x5f002b40
5f002b25:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f002b29:	6a f0                	push   0xfffffff0
5f002b2b:	50                   	push   eax
5f002b2c:	8b 2d e4 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d2e4
5f002b32:	ff d5                	call   ebp
5f002b34:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
5f002b3b:	00 
5f002b3c:	a8 04                	test   al,0x4
5f002b3e:	75 08                	jne    0x5f002b48
5f002b40:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
5f002b47:	00 
5f002b48:	8b 6c 24 1c          	mov    ebp,DWORD PTR [esp+0x1c]
5f002b4c:	8d 44 24 10          	lea    eax,[esp+0x10]
5f002b50:	50                   	push   eax
5f002b51:	6a 00                	push   0x0
5f002b53:	68 f0 11 00 00       	push   0x11f0
5f002b58:	55                   	push   ebp
5f002b59:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f002b5f:	83 7c 24 10 00       	cmp    DWORD PTR [esp+0x10],0x0
5f002b64:	0f 84 82 00 00 00    	je     0x5f002bec
5f002b6a:	68 f0 26 00 5f       	push   0x5f0026f0
5f002b6f:	55                   	push   ebp
5f002b70:	e8 fb e4 ff ff       	call   0x5f001070
5f002b75:	83 c4 08             	add    esp,0x8
5f002b78:	eb 72                	jmp    0x5f002bec
5f002b7a:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f002b7e:	68 f0 26 00 5f       	push   0x5f0026f0
5f002b83:	50                   	push   eax
5f002b84:	e8 97 e6 ff ff       	call   0x5f001220
5f002b89:	83 c4 08             	add    esp,0x8
5f002b8c:	eb 5e                	jmp    0x5f002bec
5f002b8e:	8d 04 bd 00 00 00 00 	lea    eax,[edi*4+0x0]
5f002b95:	f6 84 80 b0 52 00 5f 	test   BYTE PTR [eax+eax*4+0x5f0052b0],0x1
5f002b9c:	01 
5f002b9d:	74 4d                	je     0x5f002bec
5f002b9f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
5f002ba2:	50                   	push   eax
5f002ba3:	e8 78 fe ff ff       	call   0x5f002a20
5f002ba8:	83 c4 04             	add    esp,0x4
5f002bab:	85 c0                	test   eax,eax
5f002bad:	75 25                	jne    0x5f002bd4
5f002baf:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
5f002bb2:	85 c0                	test   eax,eax
5f002bb4:	74 36                	je     0x5f002bec
5f002bb6:	66 83 3d 62 52 00 5f 	cmp    WORD PTR ds:0x5f005262,0x18
5f002bbd:	18 
5f002bbe:	74 2c                	je     0x5f002bec
5f002bc0:	50                   	push   eax
5f002bc1:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f002bc7:	50                   	push   eax
5f002bc8:	e8 53 fe ff ff       	call   0x5f002a20
5f002bcd:	83 c4 04             	add    esp,0x4
5f002bd0:	85 c0                	test   eax,eax
5f002bd2:	74 18                	je     0x5f002bec
5f002bd4:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
5f002bd7:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
5f002bdb:	50                   	push   eax
5f002bdc:	6a 01                	push   0x1
5f002bde:	68 ff ff 00 00       	push   0xffff
5f002be3:	51                   	push   ecx
5f002be4:	e8 57 02 00 00       	call   0x5f002e40
5f002be9:	83 c4 10             	add    esp,0x10
5f002bec:	c1 e7 02             	shl    edi,0x2
5f002bef:	53                   	push   ebx
5f002bf0:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
5f002bf4:	8b 8c bf a8 52 00 5f 	mov    ecx,DWORD PTR [edi+edi*4+0x5f0052a8]
5f002bfb:	50                   	push   eax
5f002bfc:	56                   	push   esi
5f002bfd:	51                   	push   ecx
5f002bfe:	ff 15 dc d2 00 5f    	call   DWORD PTR ds:0x5f00d2dc
5f002c04:	5d                   	pop    ebp
5f002c05:	5f                   	pop    edi
5f002c06:	5e                   	pop    esi
5f002c07:	5b                   	pop    ebx
5f002c08:	83 c4 04             	add    esp,0x4
5f002c0b:	c2 0c 00             	ret    0xc
5f002c0e:	cc                   	int3
5f002c0f:	cc                   	int3
5f002c10:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002c17:	5f 03 
5f002c19:	72 03                	jb     0x5f002c1e
5f002c1b:	33 c0                	xor    eax,eax
5f002c1d:	c3                   	ret
5f002c1e:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f002c22:	83 e0 df             	and    eax,0xffffffdf
5f002c25:	66 3d 09 00          	cmp    ax,0x9
5f002c29:	77 06                	ja     0x5f002c31
5f002c2b:	b8 01 00 00 00       	mov    eax,0x1
5f002c30:	c3                   	ret
5f002c31:	33 c0                	xor    eax,eax
5f002c33:	c3                   	ret
5f002c34:	cc                   	int3
5f002c35:	cc                   	int3
5f002c36:	cc                   	int3
5f002c37:	cc                   	int3
5f002c38:	cc                   	int3
5f002c39:	cc                   	int3
5f002c3a:	cc                   	int3
5f002c3b:	cc                   	int3
5f002c3c:	cc                   	int3
5f002c3d:	cc                   	int3
5f002c3e:	cc                   	int3
5f002c3f:	cc                   	int3
5f002c40:	83 ec 20             	sub    esp,0x20
5f002c43:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002c4a:	5f 03 
5f002c4c:	72 30                	jb     0x5f002c7e
5f002c4e:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
5f002c52:	85 c0                	test   eax,eax
5f002c54:	74 28                	je     0x5f002c7e
5f002c56:	8d 4c 24 00          	lea    ecx,[esp+0x0]
5f002c5a:	6a 10                	push   0x10
5f002c5c:	51                   	push   ecx
5f002c5d:	50                   	push   eax
5f002c5e:	ff 15 f0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f0
5f002c64:	8d 4c 24 00          	lea    ecx,[esp+0x0]
5f002c68:	68 d4 b0 00 5f       	push   0x5f00b0d4
5f002c6d:	51                   	push   ecx
5f002c6e:	ff 15 0c d2 00 5f    	call   DWORD PTR ds:0x5f00d20c
5f002c74:	83 f8 01             	cmp    eax,0x1
5f002c77:	1b c0                	sbb    eax,eax
5f002c79:	83 c4 20             	add    esp,0x20
5f002c7c:	40                   	inc    eax
5f002c7d:	c3                   	ret
5f002c7e:	b8 01 00 00 00       	mov    eax,0x1
5f002c83:	83 c4 20             	add    esp,0x20
5f002c86:	c3                   	ret
5f002c87:	cc                   	int3
5f002c88:	cc                   	int3
5f002c89:	cc                   	int3
5f002c8a:	cc                   	int3
5f002c8b:	cc                   	int3
5f002c8c:	cc                   	int3
5f002c8d:	cc                   	int3
5f002c8e:	cc                   	int3
5f002c8f:	cc                   	int3
5f002c90:	83 ec 20             	sub    esp,0x20
5f002c93:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002c9a:	5f 03 
5f002c9c:	72 30                	jb     0x5f002cce
5f002c9e:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
5f002ca2:	85 c0                	test   eax,eax
5f002ca4:	74 28                	je     0x5f002cce
5f002ca6:	8d 4c 24 00          	lea    ecx,[esp+0x0]
5f002caa:	6a 10                	push   0x10
5f002cac:	51                   	push   ecx
5f002cad:	50                   	push   eax
5f002cae:	ff 15 f0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f0
5f002cb4:	8d 4c 24 00          	lea    ecx,[esp+0x0]
5f002cb8:	68 d4 b0 00 5f       	push   0x5f00b0d4
5f002cbd:	51                   	push   ecx
5f002cbe:	ff 15 0c d2 00 5f    	call   DWORD PTR ds:0x5f00d20c
5f002cc4:	83 f8 01             	cmp    eax,0x1
5f002cc7:	1b c0                	sbb    eax,eax
5f002cc9:	83 c4 20             	add    esp,0x20
5f002ccc:	40                   	inc    eax
5f002ccd:	c3                   	ret
5f002cce:	b8 01 00 00 00       	mov    eax,0x1
5f002cd3:	83 c4 20             	add    esp,0x20
5f002cd6:	c3                   	ret
5f002cd7:	cc                   	int3
5f002cd8:	cc                   	int3
5f002cd9:	cc                   	int3
5f002cda:	cc                   	int3
5f002cdb:	cc                   	int3
5f002cdc:	cc                   	int3
5f002cdd:	cc                   	int3
5f002cde:	cc                   	int3
5f002cdf:	cc                   	int3
5f002ce0:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002ce7:	5f 03 
5f002ce9:	72 03                	jb     0x5f002cee
5f002ceb:	33 c0                	xor    eax,eax
5f002ced:	c3                   	ret
5f002cee:	66 83 7c 24 10 01    	cmp    WORD PTR [esp+0x10],0x1
5f002cf4:	75 23                	jne    0x5f002d19
5f002cf6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f002cfa:	6a f0                	push   0xfffffff0
5f002cfc:	50                   	push   eax
5f002cfd:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f002d03:	83 e0 03             	and    eax,0x3
5f002d06:	83 f8 02             	cmp    eax,0x2
5f002d09:	74 0b                	je     0x5f002d16
5f002d0b:	83 f8 03             	cmp    eax,0x3
5f002d0e:	74 06                	je     0x5f002d16
5f002d10:	b8 01 00 00 00       	mov    eax,0x1
5f002d15:	c3                   	ret
5f002d16:	33 c0                	xor    eax,eax
5f002d18:	c3                   	ret
5f002d19:	b8 01 00 00 00       	mov    eax,0x1
5f002d1e:	c3                   	ret
5f002d1f:	cc                   	int3
5f002d20:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002d27:	5f 03 
5f002d29:	53                   	push   ebx
5f002d2a:	56                   	push   esi
5f002d2b:	57                   	push   edi
5f002d2c:	55                   	push   ebp
5f002d2d:	72 07                	jb     0x5f002d36
5f002d2f:	33 c0                	xor    eax,eax
5f002d31:	5d                   	pop    ebp
5f002d32:	5f                   	pop    edi
5f002d33:	5e                   	pop    esi
5f002d34:	5b                   	pop    ebx
5f002d35:	c3                   	ret
5f002d36:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
5f002d3a:	83 e0 03             	and    eax,0x3
5f002d3d:	83 f8 02             	cmp    eax,0x2
5f002d40:	75 3a                	jne    0x5f002d7c
5f002d42:	66 8b 5c 24 20       	mov    bx,WORD PTR [esp+0x20]
5f002d47:	66 83 fb 01          	cmp    bx,0x1
5f002d4b:	75 07                	jne    0x5f002d54
5f002d4d:	33 c0                	xor    eax,eax
5f002d4f:	5d                   	pop    ebp
5f002d50:	5f                   	pop    edi
5f002d51:	5e                   	pop    esi
5f002d52:	5b                   	pop    ebx
5f002d53:	c3                   	ret
5f002d54:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
5f002d58:	6a 05                	push   0x5
5f002d5a:	57                   	push   edi
5f002d5b:	ff 15 5c d2 00 5f    	call   DWORD PTR ds:0x5f00d25c
5f002d61:	85 c0                	test   eax,eax
5f002d63:	74 0d                	je     0x5f002d72
5f002d65:	57                   	push   edi
5f002d66:	53                   	push   ebx
5f002d67:	6a 04                	push   0x4
5f002d69:	50                   	push   eax
5f002d6a:	e8 d1 00 00 00       	call   0x5f002e40
5f002d6f:	83 c4 10             	add    esp,0x10
5f002d72:	b8 01 00 00 00       	mov    eax,0x1
5f002d77:	5d                   	pop    ebp
5f002d78:	5f                   	pop    edi
5f002d79:	5e                   	pop    esi
5f002d7a:	5b                   	pop    ebx
5f002d7b:	c3                   	ret
5f002d7c:	83 f8 03             	cmp    eax,0x3
5f002d7f:	75 0a                	jne    0x5f002d8b
5f002d81:	b8 01 00 00 00       	mov    eax,0x1
5f002d86:	5d                   	pop    ebp
5f002d87:	5f                   	pop    edi
5f002d88:	5e                   	pop    esi
5f002d89:	5b                   	pop    ebx
5f002d8a:	c3                   	ret
5f002d8b:	66 8b 5c 24 20       	mov    bx,WORD PTR [esp+0x20]
5f002d90:	66 83 fb 01          	cmp    bx,0x1
5f002d94:	75 0a                	jne    0x5f002da0
5f002d96:	b8 01 00 00 00       	mov    eax,0x1
5f002d9b:	5d                   	pop    ebp
5f002d9c:	5f                   	pop    edi
5f002d9d:	5e                   	pop    esi
5f002d9e:	5b                   	pop    ebx
5f002d9f:	c3                   	ret
5f002da0:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
5f002da4:	6a 05                	push   0x5
5f002da6:	57                   	push   edi
5f002da7:	8b 35 5c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d25c
5f002dad:	ff d6                	call   esi
5f002daf:	8b e8                	mov    ebp,eax
5f002db1:	85 ed                	test   ebp,ebp
5f002db3:	74 2d                	je     0x5f002de2
5f002db5:	57                   	push   edi
5f002db6:	53                   	push   ebx
5f002db7:	6a 02                	push   0x2
5f002db9:	55                   	push   ebp
5f002dba:	e8 81 00 00 00       	call   0x5f002e40
5f002dbf:	83 c4 10             	add    esp,0x10
5f002dc2:	6a 02                	push   0x2
5f002dc4:	55                   	push   ebp
5f002dc5:	ff d6                	call   esi
5f002dc7:	85 c0                	test   eax,eax
5f002dc9:	74 0d                	je     0x5f002dd8
5f002dcb:	57                   	push   edi
5f002dcc:	53                   	push   ebx
5f002dcd:	6a 04                	push   0x4
5f002dcf:	50                   	push   eax
5f002dd0:	e8 6b 00 00 00       	call   0x5f002e40
5f002dd5:	83 c4 10             	add    esp,0x10
5f002dd8:	b8 01 00 00 00       	mov    eax,0x1
5f002ddd:	5d                   	pop    ebp
5f002dde:	5f                   	pop    edi
5f002ddf:	5e                   	pop    esi
5f002de0:	5b                   	pop    ebx
5f002de1:	c3                   	ret
5f002de2:	33 c0                	xor    eax,eax
5f002de4:	5d                   	pop    ebp
5f002de5:	5f                   	pop    edi
5f002de6:	5e                   	pop    esi
5f002de7:	5b                   	pop    ebx
5f002de8:	c3                   	ret
5f002de9:	cc                   	int3
5f002dea:	cc                   	int3
5f002deb:	cc                   	int3
5f002dec:	cc                   	int3
5f002ded:	cc                   	int3
5f002dee:	cc                   	int3
5f002def:	cc                   	int3
5f002df0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f002df4:	66 25 1f 00          	and    ax,0x1f
5f002df8:	0f b7 c8             	movzx  ecx,ax
5f002dfb:	83 f9 03             	cmp    ecx,0x3
5f002dfe:	74 3c                	je     0x5f002e3c
5f002e00:	66 8b 44 24 0c       	mov    ax,WORD PTR [esp+0xc]
5f002e05:	a8 10                	test   al,0x10
5f002e07:	74 0a                	je     0x5f002e13
5f002e09:	83 f9 02             	cmp    ecx,0x2
5f002e0c:	7e 28                	jle    0x5f002e36
5f002e0e:	83 f9 0c             	cmp    ecx,0xc
5f002e11:	74 23                	je     0x5f002e36
5f002e13:	a8 20                	test   al,0x20
5f002e15:	74 25                	je     0x5f002e3c
5f002e17:	83 f9 04             	cmp    ecx,0x4
5f002e1a:	7c 05                	jl     0x5f002e21
5f002e1c:	83 f9 09             	cmp    ecx,0x9
5f002e1f:	7e 15                	jle    0x5f002e36
5f002e21:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x35f
5f002e28:	5f 03 
5f002e2a:	73 10                	jae    0x5f002e3c
5f002e2c:	83 f9 10             	cmp    ecx,0x10
5f002e2f:	7c 0b                	jl     0x5f002e3c
5f002e31:	83 f9 12             	cmp    ecx,0x12
5f002e34:	7f 06                	jg     0x5f002e3c
5f002e36:	b8 01 00 00 00       	mov    eax,0x1
5f002e3b:	c3                   	ret
5f002e3c:	33 c0                	xor    eax,eax
5f002e3e:	c3                   	ret
5f002e3f:	cc                   	int3
5f002e40:	83 ec 20             	sub    esp,0x20
5f002e43:	53                   	push   ebx
5f002e44:	56                   	push   esi
5f002e45:	8b 74 24 2c          	mov    esi,DWORD PTR [esp+0x2c]
5f002e49:	57                   	push   edi
5f002e4a:	55                   	push   ebp
5f002e4b:	56                   	push   esi
5f002e4c:	e8 af e1 ff ff       	call   0x5f001000
5f002e51:	83 c4 04             	add    esp,0x4
5f002e54:	85 c0                	test   eax,eax
5f002e56:	74 0a                	je     0x5f002e62
5f002e58:	33 c0                	xor    eax,eax
5f002e5a:	5d                   	pop    ebp
5f002e5b:	5f                   	pop    edi
5f002e5c:	5e                   	pop    esi
5f002e5d:	5b                   	pop    ebx
5f002e5e:	83 c4 20             	add    esp,0x20
5f002e61:	c3                   	ret
5f002e62:	8d 44 24 10          	lea    eax,[esp+0x10]
5f002e66:	6a 10                	push   0x10
5f002e68:	50                   	push   eax
5f002e69:	33 ed                	xor    ebp,ebp
5f002e6b:	56                   	push   esi
5f002e6c:	bb 68 b0 00 5f       	mov    ebx,0x5f00b068
5f002e71:	ff 15 f0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f0
5f002e77:	66 8b 7c 24 38       	mov    di,WORD PTR [esp+0x38]
5f002e7c:	66 85 3b             	test   WORD PTR [ebx],di
5f002e7f:	74 13                	je     0x5f002e94
5f002e81:	8d 44 24 10          	lea    eax,[esp+0x10]
5f002e85:	8d 4b d0             	lea    ecx,[ebx-0x30]
5f002e88:	50                   	push   eax
5f002e89:	51                   	push   ecx
5f002e8a:	ff 15 0c d2 00 5f    	call   DWORD PTR ds:0x5f00d20c
5f002e90:	85 c0                	test   eax,eax
5f002e92:	74 16                	je     0x5f002eaa
5f002e94:	83 c3 34             	add    ebx,0x34
5f002e97:	45                   	inc    ebp
5f002e98:	81 fb a0 b1 00 5f    	cmp    ebx,0x5f00b1a0
5f002e9e:	72 dc                	jb     0x5f002e7c
5f002ea0:	33 c0                	xor    eax,eax
5f002ea2:	5d                   	pop    ebp
5f002ea3:	5f                   	pop    edi
5f002ea4:	5e                   	pop    esi
5f002ea5:	5b                   	pop    ebx
5f002ea6:	83 c4 20             	add    esp,0x20
5f002ea9:	c3                   	ret
5f002eaa:	6a f0                	push   0xfffffff0
5f002eac:	56                   	push   esi
5f002ead:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f002eb3:	66 8b 5c 24 3c       	mov    bx,WORD PTR [esp+0x3c]
5f002eb8:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
5f002ebc:	51                   	push   ecx
5f002ebd:	53                   	push   ebx
5f002ebe:	57                   	push   edi
5f002ebf:	50                   	push   eax
5f002ec0:	56                   	push   esi
5f002ec1:	8d 44 6d 00          	lea    eax,[ebp+ebp*2+0x0]
5f002ec5:	8d 7c 85 00          	lea    edi,[ebp+eax*4+0x0]
5f002ec9:	ff 14 bd 64 b0 00 5f 	call   DWORD PTR [edi*4+0x5f00b064]
5f002ed0:	83 c4 14             	add    esp,0x14
5f002ed3:	8b f8                	mov    edi,eax
5f002ed5:	83 ff 01             	cmp    edi,0x1
5f002ed8:	75 4b                	jne    0x5f002f25
5f002eda:	66 83 fb 01          	cmp    bx,0x1
5f002ede:	75 2d                	jne    0x5f002f0d
5f002ee0:	66 83 3d 62 52 00 5f 	cmp    WORD PTR ds:0x5f005262,0x10
5f002ee7:	10 
5f002ee8:	75 23                	jne    0x5f002f0d
5f002eea:	8d 44 ad 00          	lea    eax,[ebp+ebp*4+0x0]
5f002eee:	8b 0c c5 a0 a2 00 5f 	mov    ecx,DWORD PTR [eax*8+0x5f00a2a0]
5f002ef5:	51                   	push   ecx
5f002ef6:	56                   	push   esi
5f002ef7:	e8 24 e3 ff ff       	call   0x5f001220
5f002efc:	83 c4 08             	add    esp,0x8
5f002eff:	83 ff 01             	cmp    edi,0x1
5f002f02:	1b c0                	sbb    eax,eax
5f002f04:	5d                   	pop    ebp
5f002f05:	40                   	inc    eax
5f002f06:	5f                   	pop    edi
5f002f07:	5e                   	pop    esi
5f002f08:	5b                   	pop    ebx
5f002f09:	83 c4 20             	add    esp,0x20
5f002f0c:	c3                   	ret
5f002f0d:	8d 44 ad 00          	lea    eax,[ebp+ebp*4+0x0]
5f002f11:	8b 0c c5 a0 a2 00 5f 	mov    ecx,DWORD PTR [eax*8+0x5f00a2a0]
5f002f18:	51                   	push   ecx
5f002f19:	56                   	push   esi
5f002f1a:	e8 51 e1 ff ff       	call   0x5f001070
5f002f1f:	83 c4 08             	add    esp,0x8
5f002f22:	83 ff 01             	cmp    edi,0x1
5f002f25:	1b c0                	sbb    eax,eax
5f002f27:	5d                   	pop    ebp
5f002f28:	40                   	inc    eax
5f002f29:	5f                   	pop    edi
5f002f2a:	5e                   	pop    esi
5f002f2b:	5b                   	pop    ebx
5f002f2c:	83 c4 20             	add    esp,0x20
5f002f2f:	c3                   	ret
5f002f30:	83 ec 10             	sub    esp,0x10
5f002f33:	8d 44 24 00          	lea    eax,[esp+0x0]
5f002f37:	53                   	push   ebx
5f002f38:	56                   	push   esi
5f002f39:	57                   	push   edi
5f002f3a:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
5f002f3e:	50                   	push   eax
5f002f3f:	56                   	push   esi
5f002f40:	ff 15 04 d3 00 5f    	call   DWORD PTR ds:0x5f00d304
5f002f46:	6a f0                	push   0xfffffff0
5f002f48:	56                   	push   esi
5f002f49:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f002f4f:	a9 00 00 00 10       	test   eax,0x10000000
5f002f54:	8b f8                	mov    edi,eax
5f002f56:	0f 84 8b 00 00 00    	je     0x5f002fe7
5f002f5c:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f002f60:	85 c0                	test   eax,eax
5f002f62:	74 3b                	je     0x5f002f9f
5f002f64:	8b 48 18             	mov    ecx,DWORD PTR [eax+0x18]
5f002f67:	f6 c1 c0             	test   cl,0xc0
5f002f6a:	75 0a                	jne    0x5f002f76
5f002f6c:	f6 c1 02             	test   cl,0x2
5f002f6f:	74 05                	je     0x5f002f76
5f002f71:	f6 c1 01             	test   cl,0x1
5f002f74:	75 71                	jne    0x5f002fe7
5f002f76:	80 e1 03             	and    cl,0x3
5f002f79:	80 f9 02             	cmp    cl,0x2
5f002f7c:	75 21                	jne    0x5f002f9f
5f002f7e:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
5f002f82:	2b 48 10             	sub    ecx,DWORD PTR [eax+0x10]
5f002f85:	3b 4c 24 0c          	cmp    ecx,DWORD PTR [esp+0xc]
5f002f89:	75 14                	jne    0x5f002f9f
5f002f8b:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
5f002f8e:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
5f002f92:	2b 4c 24 10          	sub    ecx,DWORD PTR [esp+0x10]
5f002f96:	3b c8                	cmp    ecx,eax
5f002f98:	7c 05                	jl     0x5f002f9f
5f002f9a:	40                   	inc    eax
5f002f9b:	01 44 24 10          	add    DWORD PTR [esp+0x10],eax
5f002f9f:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f002fa3:	6a 01                	push   0x1
5f002fa5:	6a 01                	push   0x1
5f002fa7:	50                   	push   eax
5f002fa8:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f002fae:	56                   	push   esi
5f002faf:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f002fb5:	8b f0                	mov    esi,eax
5f002fb7:	8b 1d 8c d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d28c
5f002fbd:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f002fc1:	50                   	push   eax
5f002fc2:	56                   	push   esi
5f002fc3:	ff d3                	call   ebx
5f002fc5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
5f002fc9:	51                   	push   ecx
5f002fca:	56                   	push   esi
5f002fcb:	ff d3                	call   ebx
5f002fcd:	f7 c7 00 00 20 00    	test   edi,0x200000
5f002fd3:	74 04                	je     0x5f002fd9
5f002fd5:	ff 44 24 14          	inc    DWORD PTR [esp+0x14]
5f002fd9:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f002fdd:	6a 00                	push   0x0
5f002fdf:	50                   	push   eax
5f002fe0:	56                   	push   esi
5f002fe1:	ff 15 88 d2 00 5f    	call   DWORD PTR ds:0x5f00d288
5f002fe7:	5f                   	pop    edi
5f002fe8:	5e                   	pop    esi
5f002fe9:	5b                   	pop    ebx
5f002fea:	83 c4 10             	add    esp,0x10
5f002fed:	c3                   	ret
5f002fee:	cc                   	int3
5f002fef:	cc                   	int3
5f002ff0:	83 ec 10             	sub    esp,0x10
5f002ff3:	53                   	push   ebx
5f002ff4:	56                   	push   esi
5f002ff5:	57                   	push   edi
5f002ff6:	6a f0                	push   0xfffffff0
5f002ff8:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
5f002ffc:	57                   	push   edi
5f002ffd:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003003:	8b f0                	mov    esi,eax
5f003005:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f003009:	50                   	push   eax
5f00300a:	57                   	push   edi
5f00300b:	ff 15 04 d3 00 5f    	call   DWORD PTR ds:0x5f00d304
5f003011:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
5f003015:	6a 01                	push   0x1
5f003017:	6a 01                	push   0x1
5f003019:	51                   	push   ecx
5f00301a:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f003020:	57                   	push   edi
5f003021:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f003027:	8b f8                	mov    edi,eax
5f003029:	8b 1d 8c d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d28c
5f00302f:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f003033:	50                   	push   eax
5f003034:	57                   	push   edi
5f003035:	ff d3                	call   ebx
5f003037:	8d 4c 24 14          	lea    ecx,[esp+0x14]
5f00303b:	51                   	push   ecx
5f00303c:	57                   	push   edi
5f00303d:	ff d3                	call   ebx
5f00303f:	f7 c6 00 00 20 00    	test   esi,0x200000
5f003045:	74 04                	je     0x5f00304b
5f003047:	ff 44 24 14          	inc    DWORD PTR [esp+0x14]
5f00304b:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f00304f:	50                   	push   eax
5f003050:	57                   	push   edi
5f003051:	ff 15 90 d2 00 5f    	call   DWORD PTR ds:0x5f00d290
5f003057:	5f                   	pop    edi
5f003058:	5e                   	pop    esi
5f003059:	5b                   	pop    ebx
5f00305a:	83 c4 10             	add    esp,0x10
5f00305d:	c3                   	ret
5f00305e:	cc                   	int3
5f00305f:	cc                   	int3
5f003060:	83 ec 1c             	sub    esp,0x1c
5f003063:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
5f003067:	53                   	push   ebx
5f003068:	56                   	push   esi
5f003069:	57                   	push   edi
5f00306a:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
5f00306e:	55                   	push   ebp
5f00306f:	8b 07                	mov    eax,DWORD PTR [edi]
5f003071:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
5f003074:	8b 5f 08             	mov    ebx,DWORD PTR [edi+0x8]
5f003077:	6a 0f                	push   0xf
5f003079:	6a 07                	push   0x7
5f00307b:	89 01                	mov    DWORD PTR [ecx],eax
5f00307d:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
5f003080:	6a 07                	push   0x7
5f003082:	8b 74 24 40          	mov    esi,DWORD PTR [esp+0x40]
5f003086:	57                   	push   edi
5f003087:	56                   	push   esi
5f003088:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
5f00308b:	89 59 08             	mov    DWORD PTR [ecx+0x8],ebx
5f00308e:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
5f003091:	e8 aa e2 ff ff       	call   0x5f001340
5f003096:	8d 4c 24 30          	lea    ecx,[esp+0x30]
5f00309a:	83 c4 14             	add    esp,0x14
5f00309d:	6a ff                	push   0xffffffff
5f00309f:	6a ff                	push   0xffffffff
5f0030a1:	51                   	push   ecx
5f0030a2:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f0030a8:	66 83 7c 24 44 01    	cmp    WORD PTR [esp+0x44],0x1
5f0030ae:	75 32                	jne    0x5f0030e2
5f0030b0:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
5f0030b4:	50                   	push   eax
5f0030b5:	ff 15 60 d2 00 5f    	call   DWORD PTR ds:0x5f00d260
5f0030bb:	85 c0                	test   eax,eax
5f0030bd:	74 23                	je     0x5f0030e2
5f0030bf:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f0030c3:	6a 0f                	push   0xf
5f0030c5:	6a 07                	push   0x7
5f0030c7:	6a 07                	push   0x7
5f0030c9:	50                   	push   eax
5f0030ca:	56                   	push   esi
5f0030cb:	e8 70 e2 ff ff       	call   0x5f001340
5f0030d0:	8d 44 24 30          	lea    eax,[esp+0x30]
5f0030d4:	83 c4 14             	add    esp,0x14
5f0030d7:	6a ff                	push   0xffffffff
5f0030d9:	6a ff                	push   0xffffffff
5f0030db:	50                   	push   eax
5f0030dc:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f0030e2:	68 21 00 f0 00       	push   0xf00021
5f0030e7:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
5f0030ea:	6a 01                	push   0x1
5f0030ec:	8b 0f                	mov    ecx,DWORD PTR [edi]
5f0030ee:	6a 01                	push   0x1
5f0030f0:	50                   	push   eax
5f0030f1:	51                   	push   ecx
5f0030f2:	56                   	push   esi
5f0030f3:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f0030f9:	68 21 00 f0 00       	push   0xf00021
5f0030fe:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
5f003101:	6a 01                	push   0x1
5f003103:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
5f003106:	6a 01                	push   0x1
5f003108:	48                   	dec    eax
5f003109:	51                   	push   ecx
5f00310a:	50                   	push   eax
5f00310b:	56                   	push   esi
5f00310c:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f003112:	68 21 00 f0 00       	push   0xf00021
5f003117:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
5f00311a:	6a 01                	push   0x1
5f00311c:	48                   	dec    eax
5f00311d:	6a 01                	push   0x1
5f00311f:	8b 0f                	mov    ecx,DWORD PTR [edi]
5f003121:	50                   	push   eax
5f003122:	51                   	push   ecx
5f003123:	56                   	push   esi
5f003124:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f00312a:	68 21 00 f0 00       	push   0xf00021
5f00312f:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
5f003132:	6a 01                	push   0x1
5f003134:	48                   	dec    eax
5f003135:	6a 01                	push   0x1
5f003137:	50                   	push   eax
5f003138:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
5f00313b:	48                   	dec    eax
5f00313c:	50                   	push   eax
5f00313d:	56                   	push   esi
5f00313e:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f003144:	83 7c 24 48 01       	cmp    DWORD PTR [esp+0x48],0x1
5f003149:	1b db                	sbb    ebx,ebx
5f00314b:	f7 db                	neg    ebx
5f00314d:	43                   	inc    ebx
5f00314e:	83 7c 24 48 00       	cmp    DWORD PTR [esp+0x48],0x0
5f003153:	74 07                	je     0x5f00315c
5f003155:	a1 8c 52 00 5f       	mov    eax,ds:0x5f00528c
5f00315a:	eb 05                	jmp    0x5f003161
5f00315c:	a1 84 52 00 5f       	mov    eax,ds:0x5f005284
5f003161:	50                   	push   eax
5f003162:	56                   	push   esi
5f003163:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f003169:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
5f00316d:	68 21 00 f0 00       	push   0xf00021
5f003172:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
5f003176:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
5f00317a:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
5f00317e:	2b 44 24 24          	sub    eax,DWORD PTR [esp+0x24]
5f003182:	50                   	push   eax
5f003183:	53                   	push   ebx
5f003184:	51                   	push   ecx
5f003185:	52                   	push   edx
5f003186:	56                   	push   esi
5f003187:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f00318d:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f003191:	68 21 00 f0 00       	push   0xf00021
5f003196:	2b 44 24 20          	sub    eax,DWORD PTR [esp+0x20]
5f00319a:	53                   	push   ebx
5f00319b:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
5f00319f:	50                   	push   eax
5f0031a0:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
5f0031a4:	51                   	push   ecx
5f0031a5:	52                   	push   edx
5f0031a6:	56                   	push   esi
5f0031a7:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f0031ad:	83 7c 24 48 00       	cmp    DWORD PTR [esp+0x48],0x0
5f0031b2:	75 79                	jne    0x5f00322d
5f0031b4:	a1 8c 52 00 5f       	mov    eax,ds:0x5f00528c
5f0031b9:	33 ed                	xor    ebp,ebp
5f0031bb:	50                   	push   eax
5f0031bc:	56                   	push   esi
5f0031bd:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0031c3:	ff 4c 24 28          	dec    DWORD PTR [esp+0x28]
5f0031c7:	ff 4c 24 24          	dec    DWORD PTR [esp+0x24]
5f0031cb:	85 db                	test   ebx,ebx
5f0031cd:	7e 5e                	jle    0x5f00322d
5f0031cf:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f0031d3:	68 21 00 f0 00       	push   0xf00021
5f0031d8:	2b 44 24 20          	sub    eax,DWORD PTR [esp+0x20]
5f0031dc:	6a 01                	push   0x1
5f0031de:	40                   	inc    eax
5f0031df:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
5f0031e3:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
5f0031e7:	50                   	push   eax
5f0031e8:	51                   	push   ecx
5f0031e9:	52                   	push   edx
5f0031ea:	56                   	push   esi
5f0031eb:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f0031f1:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
5f0031f5:	68 21 00 f0 00       	push   0xf00021
5f0031fa:	2b 44 24 24          	sub    eax,DWORD PTR [esp+0x24]
5f0031fe:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
5f003202:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
5f003206:	50                   	push   eax
5f003207:	6a 01                	push   0x1
5f003209:	51                   	push   ecx
5f00320a:	52                   	push   edx
5f00320b:	56                   	push   esi
5f00320c:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f003212:	8d 4b ff             	lea    ecx,[ebx-0x1]
5f003215:	3b e9                	cmp    ebp,ecx
5f003217:	7d 0f                	jge    0x5f003228
5f003219:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f00321d:	6a ff                	push   0xffffffff
5f00321f:	6a ff                	push   0xffffffff
5f003221:	50                   	push   eax
5f003222:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f003228:	45                   	inc    ebp
5f003229:	3b eb                	cmp    ebp,ebx
5f00322b:	7c a2                	jl     0x5f0031cf
5f00322d:	a1 88 52 00 5f       	mov    eax,ds:0x5f005288
5f003232:	ff 44 24 1c          	inc    DWORD PTR [esp+0x1c]
5f003236:	ff 44 24 20          	inc    DWORD PTR [esp+0x20]
5f00323a:	50                   	push   eax
5f00323b:	56                   	push   esi
5f00323c:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f003242:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
5f003246:	68 21 00 f0 00       	push   0xf00021
5f00324b:	2b 44 24 24          	sub    eax,DWORD PTR [esp+0x24]
5f00324f:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
5f003253:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
5f003257:	50                   	push   eax
5f003258:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
5f00325c:	2b 44 24 24          	sub    eax,DWORD PTR [esp+0x24]
5f003260:	50                   	push   eax
5f003261:	51                   	push   ecx
5f003262:	52                   	push   edx
5f003263:	56                   	push   esi
5f003264:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f00326a:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
5f00326e:	51                   	push   ecx
5f00326f:	ff 15 60 d2 00 5f    	call   DWORD PTR ds:0x5f00d260
5f003275:	85 c0                	test   eax,eax
5f003277:	75 0d                	jne    0x5f003286
5f003279:	a1 7c 52 00 5f       	mov    eax,ds:0x5f00527c
5f00327e:	50                   	push   eax
5f00327f:	56                   	push   esi
5f003280:	ff 15 d4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d4
5f003286:	8d 44 24 18          	lea    eax,[esp+0x18]
5f00328a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
5f00328e:	8b 5c 24 3c          	mov    ebx,DWORD PTR [esp+0x3c]
5f003292:	50                   	push   eax
5f003293:	51                   	push   ecx
5f003294:	53                   	push   ebx
5f003295:	56                   	push   esi
5f003296:	e8 95 e2 ff ff       	call   0x5f001530
5f00329b:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
5f00329f:	2b 44 24 30          	sub    eax,DWORD PTR [esp+0x30]
5f0032a3:	2b 44 24 28          	sub    eax,DWORD PTR [esp+0x28]
5f0032a7:	83 c4 10             	add    esp,0x10
5f0032aa:	99                   	cdq
5f0032ab:	2b c2                	sub    eax,edx
5f0032ad:	c1 f8 01             	sar    eax,0x1
5f0032b0:	01 44 24 20          	add    DWORD PTR [esp+0x20],eax
5f0032b4:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f0032b8:	2b 44 24 1c          	sub    eax,DWORD PTR [esp+0x1c]
5f0032bc:	2b 44 24 14          	sub    eax,DWORD PTR [esp+0x14]
5f0032c0:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
5f0032c4:	99                   	cdq
5f0032c5:	2b c2                	sub    eax,edx
5f0032c7:	c1 f8 01             	sar    eax,0x1
5f0032ca:	01 44 24 1c          	add    DWORD PTR [esp+0x1c],eax
5f0032ce:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
5f0032d2:	03 44 24 18          	add    eax,DWORD PTR [esp+0x18]
5f0032d6:	3b c1                	cmp    eax,ecx
5f0032d8:	7c 02                	jl     0x5f0032dc
5f0032da:	8b c1                	mov    eax,ecx
5f0032dc:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
5f0032e0:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
5f0032e4:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f0032e8:	03 44 24 14          	add    eax,DWORD PTR [esp+0x14]
5f0032ec:	3b c1                	cmp    eax,ecx
5f0032ee:	7c 02                	jl     0x5f0032f2
5f0032f0:	8b c1                	mov    eax,ecx
5f0032f2:	83 7c 24 48 00       	cmp    DWORD PTR [esp+0x48],0x0
5f0032f7:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
5f0032fb:	74 39                	je     0x5f003336
5f0032fd:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f003301:	6a 01                	push   0x1
5f003303:	6a 01                	push   0x1
5f003305:	8b 2d 50 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d250
5f00330b:	50                   	push   eax
5f00330c:	ff d5                	call   ebp
5f00330e:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
5f003311:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
5f003315:	83 e8 03             	sub    eax,0x3
5f003318:	3b c1                	cmp    eax,ecx
5f00331a:	7c 02                	jl     0x5f00331e
5f00331c:	8b c1                	mov    eax,ecx
5f00331e:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
5f003322:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
5f003326:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
5f003329:	83 e8 03             	sub    eax,0x3
5f00332c:	3b c1                	cmp    eax,ecx
5f00332e:	7c 02                	jl     0x5f003332
5f003330:	8b c1                	mov    eax,ecx
5f003332:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
5f003336:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f00333a:	6a 20                	push   0x20
5f00333c:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
5f003340:	50                   	push   eax
5f003341:	51                   	push   ecx
5f003342:	53                   	push   ebx
5f003343:	56                   	push   esi
5f003344:	ff 15 a0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2a0
5f00334a:	8b 2d 9c d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d29c
5f003350:	ff d5                	call   ebp
5f003352:	3b 44 24 30          	cmp    eax,DWORD PTR [esp+0x30]
5f003356:	75 2c                	jne    0x5f003384
5f003358:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f00335c:	6a 01                	push   0x1
5f00335e:	6a 01                	push   0x1
5f003360:	50                   	push   eax
5f003361:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f003367:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f00336b:	57                   	push   edi
5f00336c:	50                   	push   eax
5f00336d:	8d 44 24 24          	lea    eax,[esp+0x24]
5f003371:	50                   	push   eax
5f003372:	ff 15 98 d2 00 5f    	call   DWORD PTR ds:0x5f00d298
5f003378:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
5f00337c:	51                   	push   ecx
5f00337d:	56                   	push   esi
5f00337e:	ff 15 94 d2 00 5f    	call   DWORD PTR ds:0x5f00d294
5f003384:	83 7c 24 10 00       	cmp    DWORD PTR [esp+0x10],0x0
5f003389:	74 0c                	je     0x5f003397
5f00338b:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f00338f:	50                   	push   eax
5f003390:	56                   	push   esi
5f003391:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f003397:	5d                   	pop    ebp
5f003398:	5f                   	pop    edi
5f003399:	5e                   	pop    esi
5f00339a:	5b                   	pop    ebx
5f00339b:	83 c4 1c             	add    esp,0x1c
5f00339e:	c3                   	ret
5f00339f:	cc                   	int3
5f0033a0:	81 ec 54 02 00 00    	sub    esp,0x254
5f0033a6:	53                   	push   ebx
5f0033a7:	56                   	push   esi
5f0033a8:	57                   	push   edi
5f0033a9:	55                   	push   ebp
5f0033aa:	8b bc 24 68 02 00 00 	mov    edi,DWORD PTR [esp+0x268]
5f0033b1:	6a f0                	push   0xfffffff0
5f0033b3:	57                   	push   edi
5f0033b4:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f0033ba:	8b d8                	mov    ebx,eax
5f0033bc:	57                   	push   edi
5f0033bd:	83 e0 20             	and    eax,0x20
5f0033c0:	83 e3 1f             	and    ebx,0x1f
5f0033c3:	8b 2d 58 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d258
5f0033c9:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
5f0033cd:	ff d5                	call   ebp
5f0033cf:	8b b4 24 6c 02 00 00 	mov    esi,DWORD PTR [esp+0x26c]
5f0033d6:	6a 02                	push   0x2
5f0033d8:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
5f0033dc:	56                   	push   esi
5f0033dd:	ff 15 e4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1e4
5f0033e3:	8d 44 24 44          	lea    eax,[esp+0x44]
5f0033e7:	8b 2d cc d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d2cc
5f0033ed:	50                   	push   eax
5f0033ee:	57                   	push   edi
5f0033ef:	ff d5                	call   ebp
5f0033f1:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
5f0033f5:	8d 54 24 44          	lea    edx,[esp+0x44]
5f0033f9:	8d 4c 24 34          	lea    ecx,[esp+0x34]
5f0033fd:	8b 02                	mov    eax,DWORD PTR [edx]
5f0033ff:	6a 00                	push   0x0
5f003401:	6a 00                	push   0x0
5f003403:	6a 31                	push   0x31
5f003405:	89 01                	mov    DWORD PTR [ecx],eax
5f003407:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
5f00340a:	57                   	push   edi
5f00340b:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
5f00340e:	89 69 04             	mov    DWORD PTR [ecx+0x4],ebp
5f003411:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
5f003414:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
5f003417:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f00341d:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f003421:	85 c0                	test   eax,eax
5f003423:	74 0c                	je     0x5f003431
5f003425:	50                   	push   eax
5f003426:	56                   	push   esi
5f003427:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f00342d:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f003431:	6a 0f                	push   0xf
5f003433:	8b 2d 84 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d284
5f003439:	ff d5                	call   ebp
5f00343b:	50                   	push   eax
5f00343c:	56                   	push   esi
5f00343d:	ff 15 b8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b8
5f003443:	6a 12                	push   0x12
5f003445:	ff d5                	call   ebp
5f003447:	50                   	push   eax
5f003448:	56                   	push   esi
5f003449:	ff 15 d4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d4
5f00344f:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f003453:	57                   	push   edi
5f003454:	56                   	push   esi
5f003455:	68 35 01 00 00       	push   0x135
5f00345a:	50                   	push   eax
5f00345b:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003461:	50                   	push   eax
5f003462:	56                   	push   esi
5f003463:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f003469:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
5f00346d:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
5f003471:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
5f003475:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
5f003479:	50                   	push   eax
5f00347a:	8b 2d c0 d1 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d1c0
5f003480:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
5f003484:	51                   	push   ecx
5f003485:	52                   	push   edx
5f003486:	50                   	push   eax
5f003487:	56                   	push   esi
5f003488:	ff d5                	call   ebp
5f00348a:	8b ac 24 70 02 00 00 	mov    ebp,DWORD PTR [esp+0x270]
5f003491:	f7 c5 10 00 00 00    	test   ebp,0x10
5f003497:	74 2d                	je     0x5f0034c6
5f003499:	83 fb 07             	cmp    ebx,0x7
5f00349c:	74 28                	je     0x5f0034c6
5f00349e:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
5f0034a2:	68 21 00 f0 00       	push   0xf00021
5f0034a7:	2b 44 24 3c          	sub    eax,DWORD PTR [esp+0x3c]
5f0034ab:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
5f0034af:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
5f0034b3:	50                   	push   eax
5f0034b4:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
5f0034b8:	2b 44 24 3c          	sub    eax,DWORD PTR [esp+0x3c]
5f0034bc:	50                   	push   eax
5f0034bd:	51                   	push   ecx
5f0034be:	52                   	push   edx
5f0034bf:	56                   	push   esi
5f0034c0:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f0034c6:	57                   	push   edi
5f0034c7:	ff 15 60 d2 00 5f    	call   DWORD PTR ds:0x5f00d260
5f0034cd:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
5f0034d1:	6a 00                	push   0x0
5f0034d3:	6a 00                	push   0x0
5f0034d5:	68 f2 00 00 00       	push   0xf2
5f0034da:	57                   	push   edi
5f0034db:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f0034e1:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
5f0034e8:	00 
5f0034e9:	8b c8                	mov    ecx,eax
5f0034eb:	83 e1 03             	and    ecx,0x3
5f0034ee:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
5f0034f2:	83 f9 01             	cmp    ecx,0x1
5f0034f5:	1b c9                	sbb    ecx,ecx
5f0034f7:	83 e0 04             	and    eax,0x4
5f0034fa:	41                   	inc    ecx
5f0034fb:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
5f0034ff:	c1 f8 01             	sar    eax,0x1
5f003502:	0b c1                	or     eax,ecx
5f003504:	8b d0                	mov    edx,eax
5f003506:	c1 e0 03             	shl    eax,0x3
5f003509:	2b c2                	sub    eax,edx
5f00350b:	03 c0                	add    eax,eax
5f00350d:	83 7c 24 28 00       	cmp    DWORD PTR [esp+0x28],0x0
5f003512:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
5f003516:	75 15                	jne    0x5f00352d
5f003518:	83 c1 02             	add    ecx,0x2
5f00351b:	8b c1                	mov    eax,ecx
5f00351d:	c1 e1 03             	shl    ecx,0x3
5f003520:	2b c8                	sub    ecx,eax
5f003522:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f003526:	8d 14 48             	lea    edx,[eax+ecx*2]
5f003529:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
5f00352d:	f7 c5 0a 00 00 00    	test   ebp,0xa
5f003533:	75 09                	jne    0x5f00353e
5f003535:	85 db                	test   ebx,ebx
5f003537:	74 05                	je     0x5f00353e
5f003539:	83 fb 01             	cmp    ebx,0x1
5f00353c:	75 15                	jne    0x5f003553
5f00353e:	8d 44 24 64          	lea    eax,[esp+0x64]
5f003542:	68 00 01 00 00       	push   0x100
5f003547:	50                   	push   eax
5f003548:	57                   	push   edi
5f003549:	ff 15 ac d2 00 5f    	call   DWORD PTR ds:0x5f00d2ac
5f00354f:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
5f003553:	83 fb 09             	cmp    ebx,0x9
5f003556:	0f 87 39 03 00 00    	ja     0x5f003895
5f00355c:	ff 24 9d c0 38 00 5f 	jmp    DWORD PTR [ebx*4+0x5f0038c0]
5f003563:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
5f003567:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
5f00356b:	8d 54 24 64          	lea    edx,[esp+0x64]
5f00356f:	50                   	push   eax
5f003570:	8d 44 24 48          	lea    eax,[esp+0x48]
5f003574:	53                   	push   ebx
5f003575:	51                   	push   ecx
5f003576:	52                   	push   edx
5f003577:	50                   	push   eax
5f003578:	56                   	push   esi
5f003579:	57                   	push   edi
5f00357a:	e8 e1 fa ff ff       	call   0x5f003060
5f00357f:	83 c4 1c             	add    esp,0x1c
5f003582:	e9 0e 03 00 00       	jmp    0x5f003895
5f003587:	c7 44 24 18 0d 00 00 	mov    DWORD PTR [esp+0x18],0xd
5f00358e:	00 
5f00358f:	f7 c5 04 00 00 00    	test   ebp,0x4
5f003595:	0f 84 0c 02 00 00    	je     0x5f0037a7
5f00359b:	56                   	push   esi
5f00359c:	ff 15 e8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1e8
5f0035a2:	8b f8                	mov    edi,eax
5f0035a4:	85 ff                	test   edi,edi
5f0035a6:	0f 84 fb 01 00 00    	je     0x5f0037a7
5f0035ac:	a1 90 52 00 5f       	mov    eax,ds:0x5f005290
5f0035b1:	50                   	push   eax
5f0035b2:	57                   	push   edi
5f0035b3:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0035b9:	8b d8                	mov    ebx,eax
5f0035bb:	85 db                	test   ebx,ebx
5f0035bd:	0f 84 dd 01 00 00    	je     0x5f0037a0
5f0035c3:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
5f0035c7:	68 20 00 cc 00       	push   0xcc0020
5f0035cc:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
5f0035d0:	50                   	push   eax
5f0035d1:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
5f0035d5:	51                   	push   ecx
5f0035d6:	83 7c 24 2c 00       	cmp    DWORD PTR [esp+0x2c],0x0
5f0035db:	57                   	push   edi
5f0035dc:	6a 0d                	push   0xd
5f0035de:	6a 0e                	push   0xe
5f0035e0:	0f 84 92 01 00 00    	je     0x5f003778
5f0035e6:	2b 44 24 50          	sub    eax,DWORD PTR [esp+0x50]
5f0035ea:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
5f0035ee:	83 e8 0d             	sub    eax,0xd
5f0035f1:	99                   	cdq
5f0035f2:	2b c2                	sub    eax,edx
5f0035f4:	c1 f8 01             	sar    eax,0x1
5f0035f7:	03 c8                	add    ecx,eax
5f0035f9:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
5f0035fd:	51                   	push   ecx
5f0035fe:	83 e8 0e             	sub    eax,0xe
5f003601:	e9 8a 01 00 00       	jmp    0x5f003790
5f003606:	83 7c 24 30 02       	cmp    DWORD PTR [esp+0x30],0x2
5f00360b:	75 82                	jne    0x5f00358f
5f00360d:	c7 44 24 18 1a 00 00 	mov    DWORD PTR [esp+0x18],0x1a
5f003614:	00 
5f003615:	e9 75 ff ff ff       	jmp    0x5f00358f
5f00361a:	f7 c5 06 00 00 00    	test   ebp,0x6
5f003620:	0f 84 6f 02 00 00    	je     0x5f003895
5f003626:	8d 44 24 20          	lea    eax,[esp+0x20]
5f00362a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
5f00362e:	8d 54 24 64          	lea    edx,[esp+0x64]
5f003632:	50                   	push   eax
5f003633:	51                   	push   ecx
5f003634:	52                   	push   edx
5f003635:	56                   	push   esi
5f003636:	e8 f5 de ff ff       	call   0x5f001530
5f00363b:	83 c4 10             	add    esp,0x10
5f00363e:	83 7c 24 20 00       	cmp    DWORD PTR [esp+0x20],0x0
5f003643:	75 18                	jne    0x5f00365d
5f003645:	8d 44 24 20          	lea    eax,[esp+0x20]
5f003649:	8d 4c 24 54          	lea    ecx,[esp+0x54]
5f00364d:	50                   	push   eax
5f00364e:	51                   	push   ecx
5f00364f:	68 30 c2 00 5f       	push   0x5f00c230
5f003654:	56                   	push   esi
5f003655:	e8 d6 de ff ff       	call   0x5f001530
5f00365a:	83 c4 10             	add    esp,0x10
5f00365d:	83 44 24 34 04       	add    DWORD PTR [esp+0x34],0x4
5f003662:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
5f003666:	03 44 24 30          	add    eax,DWORD PTR [esp+0x30]
5f00366a:	83 c0 04             	add    eax,0x4
5f00366d:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
5f003671:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
5f003675:	03 44 24 20          	add    eax,DWORD PTR [esp+0x20]
5f003679:	f7 c5 20 00 00 00    	test   ebp,0x20
5f00367f:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
5f003683:	74 75                	je     0x5f0036fa
5f003685:	8b 5c 24 38          	mov    ebx,DWORD PTR [esp+0x38]
5f003689:	8b 6c 24 3c          	mov    ebp,DWORD PTR [esp+0x3c]
5f00368d:	8d 4c 24 34          	lea    ecx,[esp+0x34]
5f003691:	8d 54 24 54          	lea    edx,[esp+0x54]
5f003695:	8b 01                	mov    eax,DWORD PTR [ecx]
5f003697:	89 02                	mov    DWORD PTR [edx],eax
5f003699:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
5f00369c:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
5f0036a0:	52                   	push   edx
5f0036a1:	57                   	push   edi
5f0036a2:	8b 35 a8 d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d2a8
5f0036a8:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
5f0036ab:	89 6a 08             	mov    DWORD PTR [edx+0x8],ebp
5f0036ae:	89 42 0c             	mov    DWORD PTR [edx+0xc],eax
5f0036b1:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
5f0036b5:	ff d6                	call   esi
5f0036b7:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
5f0036bb:	51                   	push   ecx
5f0036bc:	57                   	push   edi
5f0036bd:	ff d6                	call   esi
5f0036bf:	8d 44 24 54          	lea    eax,[esp+0x54]
5f0036c3:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
5f0036c7:	50                   	push   eax
5f0036c8:	8b 35 8c d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d28c
5f0036ce:	51                   	push   ecx
5f0036cf:	ff d6                	call   esi
5f0036d1:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
5f0036d5:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f0036d9:	51                   	push   ecx
5f0036da:	50                   	push   eax
5f0036db:	ff d6                	call   esi
5f0036dd:	8d 4c 24 54          	lea    ecx,[esp+0x54]
5f0036e1:	6a 01                	push   0x1
5f0036e3:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
5f0036e7:	51                   	push   ecx
5f0036e8:	52                   	push   edx
5f0036e9:	ff 15 88 d2 00 5f    	call   DWORD PTR ds:0x5f00d288
5f0036ef:	5d                   	pop    ebp
5f0036f0:	5f                   	pop    edi
5f0036f1:	5e                   	pop    esi
5f0036f2:	5b                   	pop    ebx
5f0036f3:	81 c4 54 02 00 00    	add    esp,0x254
5f0036f9:	c3                   	ret
5f0036fa:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
5f0036fe:	ff 4c 24 4c          	dec    DWORD PTR [esp+0x4c]
5f003702:	ff 4c 24 50          	dec    DWORD PTR [esp+0x50]
5f003706:	6a 0f                	push   0xf
5f003708:	99                   	cdq
5f003709:	2b c2                	sub    eax,edx
5f00370b:	6a 02                	push   0x2
5f00370d:	c1 f8 01             	sar    eax,0x1
5f003710:	6a 02                	push   0x2
5f003712:	01 44 24 54          	add    DWORD PTR [esp+0x54],eax
5f003716:	8d 44 24 50          	lea    eax,[esp+0x50]
5f00371a:	50                   	push   eax
5f00371b:	56                   	push   esi
5f00371c:	e8 1f dc ff ff       	call   0x5f001340
5f003721:	8d 44 24 58          	lea    eax,[esp+0x58]
5f003725:	83 c4 14             	add    esp,0x14
5f003728:	6a 01                	push   0x1
5f00372a:	6a 01                	push   0x1
5f00372c:	50                   	push   eax
5f00372d:	ff 15 50 d2 00 5f    	call   DWORD PTR ds:0x5f00d250
5f003733:	8d 4c 24 44          	lea    ecx,[esp+0x44]
5f003737:	6a 0f                	push   0xf
5f003739:	6a 00                	push   0x0
5f00373b:	6a 00                	push   0x0
5f00373d:	51                   	push   ecx
5f00373e:	56                   	push   esi
5f00373f:	e8 fc db ff ff       	call   0x5f001340
5f003744:	83 c4 14             	add    esp,0x14
5f003747:	83 7c 24 28 00       	cmp    DWORD PTR [esp+0x28],0x0
5f00374c:	75 0d                	jne    0x5f00375b
5f00374e:	a1 7c 52 00 5f       	mov    eax,ds:0x5f00527c
5f003753:	50                   	push   eax
5f003754:	56                   	push   esi
5f003755:	ff 15 d4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d4
5f00375b:	8d 44 24 34          	lea    eax,[esp+0x34]
5f00375f:	6a 20                	push   0x20
5f003761:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
5f003765:	50                   	push   eax
5f003766:	8d 54 24 6c          	lea    edx,[esp+0x6c]
5f00376a:	51                   	push   ecx
5f00376b:	52                   	push   edx
5f00376c:	56                   	push   esi
5f00376d:	ff 15 a0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2a0
5f003773:	e9 1d 01 00 00       	jmp    0x5f003895
5f003778:	2b 44 24 50          	sub    eax,DWORD PTR [esp+0x50]
5f00377c:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
5f003780:	83 e8 0d             	sub    eax,0xd
5f003783:	99                   	cdq
5f003784:	2b c2                	sub    eax,edx
5f003786:	c1 f8 01             	sar    eax,0x1
5f003789:	03 c8                	add    ecx,eax
5f00378b:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
5f00378f:	51                   	push   ecx
5f003790:	50                   	push   eax
5f003791:	56                   	push   esi
5f003792:	ff 15 dc d1 00 5f    	call   DWORD PTR ds:0x5f00d1dc
5f003798:	53                   	push   ebx
5f003799:	57                   	push   edi
5f00379a:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0037a0:	57                   	push   edi
5f0037a1:	ff 15 d8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d8
5f0037a7:	f7 c5 02 00 00 00    	test   ebp,0x2
5f0037ad:	74 4b                	je     0x5f0037fa
5f0037af:	83 7c 24 20 00       	cmp    DWORD PTR [esp+0x20],0x0
5f0037b4:	74 0d                	je     0x5f0037c3
5f0037b6:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
5f0037ba:	83 e8 12             	sub    eax,0x12
5f0037bd:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
5f0037c1:	eb 0b                	jmp    0x5f0037ce
5f0037c3:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
5f0037c7:	83 c0 12             	add    eax,0x12
5f0037ca:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
5f0037ce:	83 7c 24 28 00       	cmp    DWORD PTR [esp+0x28],0x0
5f0037d3:	75 0d                	jne    0x5f0037e2
5f0037d5:	a1 7c 52 00 5f       	mov    eax,ds:0x5f00527c
5f0037da:	50                   	push   eax
5f0037db:	56                   	push   esi
5f0037dc:	ff 15 d4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d4
5f0037e2:	8d 44 24 34          	lea    eax,[esp+0x34]
5f0037e6:	6a 24                	push   0x24
5f0037e8:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
5f0037ec:	50                   	push   eax
5f0037ed:	8d 54 24 6c          	lea    edx,[esp+0x6c]
5f0037f1:	51                   	push   ecx
5f0037f2:	52                   	push   edx
5f0037f3:	56                   	push   esi
5f0037f4:	ff 15 a0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2a0
5f0037fa:	f7 c5 08 00 00 00    	test   ebp,0x8
5f003800:	0f 84 8f 00 00 00    	je     0x5f003895
5f003806:	8d 44 24 30          	lea    eax,[esp+0x30]
5f00380a:	8d 4c 24 54          	lea    ecx,[esp+0x54]
5f00380e:	8d 54 24 64          	lea    edx,[esp+0x64]
5f003812:	50                   	push   eax
5f003813:	51                   	push   ecx
5f003814:	52                   	push   edx
5f003815:	56                   	push   esi
5f003816:	e8 15 dd ff ff       	call   0x5f001530
5f00381b:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
5f00381f:	2b 44 24 40          	sub    eax,DWORD PTR [esp+0x40]
5f003823:	2b 44 24 48          	sub    eax,DWORD PTR [esp+0x48]
5f003827:	83 c4 10             	add    esp,0x10
5f00382a:	99                   	cdq
5f00382b:	2b c2                	sub    eax,edx
5f00382d:	c1 f8 01             	sar    eax,0x1
5f003830:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
5f003834:	03 44 24 30          	add    eax,DWORD PTR [esp+0x30]
5f003838:	83 7c 24 20 00       	cmp    DWORD PTR [esp+0x20],0x0
5f00383d:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
5f003841:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
5f003845:	74 0b                	je     0x5f003852
5f003847:	83 6c 24 4c 12       	sub    DWORD PTR [esp+0x4c],0x12
5f00384c:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
5f003850:	eb 07                	jmp    0x5f003859
5f003852:	83 c0 12             	add    eax,0x12
5f003855:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
5f003859:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
5f00385d:	6a 01                	push   0x1
5f00385f:	03 44 24 58          	add    eax,DWORD PTR [esp+0x58]
5f003863:	6a 01                	push   0x1
5f003865:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
5f003869:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
5f00386d:	51                   	push   ecx
5f00386e:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f003874:	8d 4c 24 44          	lea    ecx,[esp+0x44]
5f003878:	8d 44 24 34          	lea    eax,[esp+0x34]
5f00387c:	51                   	push   ecx
5f00387d:	50                   	push   eax
5f00387e:	8d 44 24 3c          	lea    eax,[esp+0x3c]
5f003882:	50                   	push   eax
5f003883:	ff 15 98 d2 00 5f    	call   DWORD PTR ds:0x5f00d298
5f003889:	8d 4c 24 34          	lea    ecx,[esp+0x34]
5f00388d:	51                   	push   ecx
5f00388e:	56                   	push   esi
5f00388f:	ff 15 94 d2 00 5f    	call   DWORD PTR ds:0x5f00d294
5f003895:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
5f003899:	50                   	push   eax
5f00389a:	56                   	push   esi
5f00389b:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0038a1:	83 7c 24 10 00       	cmp    DWORD PTR [esp+0x10],0x0
5f0038a6:	74 0c                	je     0x5f0038b4
5f0038a8:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f0038ac:	50                   	push   eax
5f0038ad:	56                   	push   esi
5f0038ae:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0038b4:	5d                   	pop    ebp
5f0038b5:	5f                   	pop    edi
5f0038b6:	5e                   	pop    esi
5f0038b7:	5b                   	pop    ebx
5f0038b8:	81 c4 54 02 00 00    	add    esp,0x254
5f0038be:	c3                   	ret
5f0038bf:	90                   	nop
5f0038c0:	63 35 00 5f 63 35    	arpl   WORD PTR ds:0x35635f00,esi
5f0038c6:	00 5f 8f             	add    BYTE PTR [edi-0x71],bl
5f0038c9:	35 00 5f 8f 35       	xor    eax,0x358f5f00
5f0038ce:	00 5f 87             	add    BYTE PTR [edi-0x79],bl
5f0038d1:	35 00 5f 06 36       	xor    eax,0x36065f00
5f0038d6:	00 5f 06             	add    BYTE PTR [edi+0x6],bl
5f0038d9:	36 00 5f 1a          	add    BYTE PTR ss:[edi+0x1a],bl
5f0038dd:	36 00 5f 95          	add    BYTE PTR ss:[edi-0x6b],bl
5f0038e1:	38 00                	cmp    BYTE PTR [eax],al
5f0038e3:	5f                   	pop    edi
5f0038e4:	87 35 00 5f cc cc    	xchg   DWORD PTR ds:0xcccc5f00,esi
5f0038ea:	cc                   	int3
5f0038eb:	cc                   	int3
5f0038ec:	cc                   	int3
5f0038ed:	cc                   	int3
5f0038ee:	cc                   	int3
5f0038ef:	cc                   	int3
5f0038f0:	83 ec 48             	sub    esp,0x48
5f0038f3:	53                   	push   ebx
5f0038f4:	56                   	push   esi
5f0038f5:	57                   	push   edi
5f0038f6:	55                   	push   ebp
5f0038f7:	8b 7c 24 60          	mov    edi,DWORD PTR [esp+0x60]
5f0038fb:	81 ff 82 00 00 00    	cmp    edi,0x82
5f003901:	75 24                	jne    0x5f003927
5f003903:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
5f003907:	6a 00                	push   0x0
5f003909:	8b 5c 24 68          	mov    ebx,DWORD PTR [esp+0x68]
5f00390d:	50                   	push   eax
5f00390e:	8b 74 24 64          	mov    esi,DWORD PTR [esp+0x64]
5f003912:	53                   	push   ebx
5f003913:	57                   	push   edi
5f003914:	56                   	push   esi
5f003915:	e8 46 d9 ff ff       	call   0x5f001260
5f00391a:	83 c4 14             	add    esp,0x14
5f00391d:	5d                   	pop    ebp
5f00391e:	5f                   	pop    edi
5f00391f:	5e                   	pop    esi
5f003920:	5b                   	pop    ebx
5f003921:	83 c4 48             	add    esp,0x48
5f003924:	c2 10 00             	ret    0x10
5f003927:	33 c0                	xor    eax,eax
5f003929:	8b 74 24 5c          	mov    esi,DWORD PTR [esp+0x5c]
5f00392d:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f003933:	50                   	push   eax
5f003934:	56                   	push   esi
5f003935:	ff 15 00 d3 00 5f    	call   DWORD PTR ds:0x5f00d300
5f00393b:	85 c0                	test   eax,eax
5f00393d:	74 2a                	je     0x5f003969
5f00393f:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
5f003943:	8b 5c 24 64          	mov    ebx,DWORD PTR [esp+0x64]
5f003947:	50                   	push   eax
5f003948:	53                   	push   ebx
5f003949:	57                   	push   edi
5f00394a:	56                   	push   esi
5f00394b:	6a 00                	push   0x0
5f00394d:	56                   	push   esi
5f00394e:	e8 cd d6 ff ff       	call   0x5f001020
5f003953:	83 c4 08             	add    esp,0x8
5f003956:	8b 2d d0 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d2d0
5f00395c:	50                   	push   eax
5f00395d:	ff d5                	call   ebp
5f00395f:	5d                   	pop    ebp
5f003960:	5f                   	pop    edi
5f003961:	5e                   	pop    esi
5f003962:	5b                   	pop    ebx
5f003963:	83 c4 48             	add    esp,0x48
5f003966:	c2 10 00             	ret    0x10
5f003969:	81 ff f1 00 00 00    	cmp    edi,0xf1
5f00396f:	8b c7                	mov    eax,edi
5f003971:	77 15                	ja     0x5f003988
5f003973:	0f 84 1d 01 00 00    	je     0x5f003a96
5f003979:	83 e8 07             	sub    eax,0x7
5f00397c:	83 f8 08             	cmp    eax,0x8
5f00397f:	77 24                	ja     0x5f0039a5
5f003981:	ff 24 85 a0 3b 00 5f 	jmp    DWORD PTR [eax*4+0x5f003ba0]
5f003988:	3d f3 00 00 00       	cmp    eax,0xf3
5f00398d:	0f 84 03 01 00 00    	je     0x5f003a96
5f003993:	3d 43 19 00 00       	cmp    eax,0x1943
5f003998:	72 0b                	jb     0x5f0039a5
5f00399a:	3d 44 19 00 00       	cmp    eax,0x1944
5f00399f:	0f 86 e0 01 00 00    	jbe    0x5f003b85
5f0039a5:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
5f0039a9:	8b 5c 24 64          	mov    ebx,DWORD PTR [esp+0x64]
5f0039ad:	50                   	push   eax
5f0039ae:	53                   	push   ebx
5f0039af:	57                   	push   edi
5f0039b0:	56                   	push   esi
5f0039b1:	6a 00                	push   0x0
5f0039b3:	56                   	push   esi
5f0039b4:	e8 67 d6 ff ff       	call   0x5f001020
5f0039b9:	83 c4 08             	add    esp,0x8
5f0039bc:	8b 2d d0 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d2d0
5f0039c2:	50                   	push   eax
5f0039c3:	ff d5                	call   ebp
5f0039c5:	5d                   	pop    ebp
5f0039c6:	5f                   	pop    edi
5f0039c7:	5e                   	pop    esi
5f0039c8:	5b                   	pop    ebx
5f0039c9:	83 c4 48             	add    esp,0x48
5f0039cc:	c2 10 00             	ret    0x10
5f0039cf:	bd 16 00 00 00       	mov    ebp,0x16
5f0039d4:	e9 c2 00 00 00       	jmp    0x5f003a9b
5f0039d9:	6a f0                	push   0xfffffff0
5f0039db:	56                   	push   esi
5f0039dc:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f0039e2:	24 1f                	and    al,0x1f
5f0039e4:	3c 09                	cmp    al,0x9
5f0039e6:	75 10                	jne    0x5f0039f8
5f0039e8:	6a 00                	push   0x0
5f0039ea:	6a 00                	push   0x0
5f0039ec:	68 f3 00 00 00       	push   0xf3
5f0039f1:	56                   	push   esi
5f0039f2:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f0039f8:	33 ed                	xor    ebp,ebp
5f0039fa:	e9 9c 00 00 00       	jmp    0x5f003a9b
5f0039ff:	bd 06 00 00 00       	mov    ebp,0x6
5f003a04:	e9 92 00 00 00       	jmp    0x5f003a9b
5f003a09:	6a f0                	push   0xfffffff0
5f003a0b:	56                   	push   esi
5f003a0c:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003a12:	a9 00 00 00 10       	test   eax,0x10000000
5f003a17:	74 0d                	je     0x5f003a26
5f003a19:	24 1f                	and    al,0x1f
5f003a1b:	3c 07                	cmp    al,0x7
5f003a1d:	75 07                	jne    0x5f003a26
5f003a1f:	bd 22 00 00 00       	mov    ebp,0x22
5f003a24:	eb 75                	jmp    0x5f003a9b
5f003a26:	bd 16 00 00 00       	mov    ebp,0x16
5f003a2b:	eb 6e                	jmp    0x5f003a9b
5f003a2d:	6a 00                	push   0x0
5f003a2f:	6a 00                	push   0x0
5f003a31:	68 f2 00 00 00       	push   0xf2
5f003a36:	56                   	push   esi
5f003a37:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003a3d:	8b f8                	mov    edi,eax
5f003a3f:	8b 5c 24 64          	mov    ebx,DWORD PTR [esp+0x64]
5f003a43:	8b eb                	mov    ebp,ebx
5f003a45:	85 ed                	test   ebp,ebp
5f003a47:	75 10                	jne    0x5f003a59
5f003a49:	8d 44 24 18          	lea    eax,[esp+0x18]
5f003a4d:	8b 2d b8 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d2b8
5f003a53:	50                   	push   eax
5f003a54:	56                   	push   esi
5f003a55:	ff d5                	call   ebp
5f003a57:	8b e8                	mov    ebp,eax
5f003a59:	6a f0                	push   0xfffffff0
5f003a5b:	56                   	push   esi
5f003a5c:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003a62:	a9 00 00 00 10       	test   eax,0x10000000
5f003a67:	74 11                	je     0x5f003a7a
5f003a69:	83 e7 08             	and    edi,0x8
5f003a6c:	83 cf 06             	or     edi,0x6
5f003a6f:	57                   	push   edi
5f003a70:	55                   	push   ebp
5f003a71:	56                   	push   esi
5f003a72:	e8 29 f9 ff ff       	call   0x5f0033a0
5f003a77:	83 c4 0c             	add    esp,0xc
5f003a7a:	85 db                	test   ebx,ebx
5f003a7c:	75 0c                	jne    0x5f003a8a
5f003a7e:	8d 44 24 18          	lea    eax,[esp+0x18]
5f003a82:	50                   	push   eax
5f003a83:	56                   	push   esi
5f003a84:	ff 15 b4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2b4
5f003a8a:	33 c0                	xor    eax,eax
5f003a8c:	5d                   	pop    ebp
5f003a8d:	5f                   	pop    edi
5f003a8e:	5e                   	pop    esi
5f003a8f:	5b                   	pop    ebx
5f003a90:	83 c4 48             	add    esp,0x48
5f003a93:	c2 10 00             	ret    0x10
5f003a96:	bd 04 00 00 00       	mov    ebp,0x4
5f003a9b:	6a 00                	push   0x0
5f003a9d:	6a 00                	push   0x0
5f003a9f:	68 f2 00 00 00       	push   0xf2
5f003aa4:	56                   	push   esi
5f003aa5:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003aab:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f003aaf:	6a f0                	push   0xfffffff0
5f003ab1:	56                   	push   esi
5f003ab2:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003ab8:	a9 00 00 00 10       	test   eax,0x10000000
5f003abd:	0f 84 e2 fe ff ff    	je     0x5f0039a5
5f003ac3:	83 ff 07             	cmp    edi,0x7
5f003ac6:	74 0f                	je     0x5f003ad7
5f003ac8:	25 ff ff ff ef       	and    eax,0xefffffff
5f003acd:	50                   	push   eax
5f003ace:	6a f0                	push   0xfffffff0
5f003ad0:	56                   	push   esi
5f003ad1:	ff 15 f8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f8
5f003ad7:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
5f003adb:	8b 5c 24 64          	mov    ebx,DWORD PTR [esp+0x64]
5f003adf:	50                   	push   eax
5f003ae0:	53                   	push   ebx
5f003ae1:	57                   	push   edi
5f003ae2:	56                   	push   esi
5f003ae3:	6a 00                	push   0x0
5f003ae5:	56                   	push   esi
5f003ae6:	e8 35 d5 ff ff       	call   0x5f001020
5f003aeb:	83 c4 08             	add    esp,0x8
5f003aee:	50                   	push   eax
5f003aef:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f003af5:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
5f003af9:	83 ff 07             	cmp    edi,0x7
5f003afc:	74 18                	je     0x5f003b16
5f003afe:	6a f0                	push   0xfffffff0
5f003b00:	56                   	push   esi
5f003b01:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003b07:	0d 00 00 00 10       	or     eax,0x10000000
5f003b0c:	50                   	push   eax
5f003b0d:	6a f0                	push   0xfffffff0
5f003b0f:	56                   	push   esi
5f003b10:	ff 15 f8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f8
5f003b16:	6a 00                	push   0x0
5f003b18:	6a 00                	push   0x0
5f003b1a:	68 f2 00 00 00       	push   0xf2
5f003b1f:	56                   	push   esi
5f003b20:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003b26:	8b d8                	mov    ebx,eax
5f003b28:	81 ff f3 00 00 00    	cmp    edi,0xf3
5f003b2e:	74 08                	je     0x5f003b38
5f003b30:	81 ff f1 00 00 00    	cmp    edi,0xf1
5f003b36:	75 06                	jne    0x5f003b3e
5f003b38:	39 5c 24 10          	cmp    DWORD PTR [esp+0x10],ebx
5f003b3c:	74 39                	je     0x5f003b77
5f003b3e:	56                   	push   esi
5f003b3f:	ff 15 78 d2 00 5f    	call   DWORD PTR ds:0x5f00d278
5f003b45:	8b f8                	mov    edi,eax
5f003b47:	85 ff                	test   edi,edi
5f003b49:	74 2c                	je     0x5f003b77
5f003b4b:	33 5c 24 10          	xor    ebx,DWORD PTR [esp+0x10]
5f003b4f:	f6 c3 03             	test   bl,0x3
5f003b52:	74 03                	je     0x5f003b57
5f003b54:	83 cd 04             	or     ebp,0x4
5f003b57:	56                   	push   esi
5f003b58:	83 e3 08             	and    ebx,0x8
5f003b5b:	57                   	push   edi
5f003b5c:	0b dd                	or     ebx,ebp
5f003b5e:	ff 15 b0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2b0
5f003b64:	53                   	push   ebx
5f003b65:	57                   	push   edi
5f003b66:	56                   	push   esi
5f003b67:	e8 34 f8 ff ff       	call   0x5f0033a0
5f003b6c:	83 c4 0c             	add    esp,0xc
5f003b6f:	57                   	push   edi
5f003b70:	56                   	push   esi
5f003b71:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f003b77:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f003b7b:	5d                   	pop    ebp
5f003b7c:	5f                   	pop    edi
5f003b7d:	5e                   	pop    esi
5f003b7e:	5b                   	pop    ebx
5f003b7f:	83 c4 48             	add    esp,0x48
5f003b82:	c2 10 00             	ret    0x10
5f003b85:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
5f003b89:	5d                   	pop    ebp
5f003b8a:	5f                   	pop    edi
5f003b8b:	5e                   	pop    esi
5f003b8c:	5b                   	pop    ebx
5f003b8d:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
5f003b93:	b8 e8 03 00 00       	mov    eax,0x3e8
5f003b98:	83 c4 48             	add    esp,0x48
5f003b9b:	c2 10 00             	ret    0x10
5f003b9e:	8b ff                	mov    edi,edi
5f003ba0:	cf                   	iret
5f003ba1:	39 00                	cmp    DWORD PTR [eax],eax
5f003ba3:	5f                   	pop    edi
5f003ba4:	d9 39                	fnstcw WORD PTR [ecx]
5f003ba6:	00 5f a5             	add    BYTE PTR [edi-0x5b],bl
5f003ba9:	39 00                	cmp    DWORD PTR [eax],eax
5f003bab:	5f                   	pop    edi
5f003bac:	ff                   	(bad)
5f003bad:	39 00                	cmp    DWORD PTR [eax],eax
5f003baf:	5f                   	pop    edi
5f003bb0:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
5f003bb1:	39 00                	cmp    DWORD PTR [eax],eax
5f003bb3:	5f                   	pop    edi
5f003bb4:	09 3a                	or     DWORD PTR [edx],edi
5f003bb6:	00 5f a5             	add    BYTE PTR [edi-0x5b],bl
5f003bb9:	39 00                	cmp    DWORD PTR [eax],eax
5f003bbb:	5f                   	pop    edi
5f003bbc:	a5                   	movs   DWORD PTR es:[edi],DWORD PTR ds:[esi]
5f003bbd:	39 00                	cmp    DWORD PTR [eax],eax
5f003bbf:	5f                   	pop    edi
5f003bc0:	2d 3a 00 5f cc       	sub    eax,0xcc5f003a
5f003bc5:	cc                   	int3
5f003bc6:	cc                   	int3
5f003bc7:	cc                   	int3
5f003bc8:	cc                   	int3
5f003bc9:	cc                   	int3
5f003bca:	cc                   	int3
5f003bcb:	cc                   	int3
5f003bcc:	cc                   	int3
5f003bcd:	cc                   	int3
5f003bce:	cc                   	int3
5f003bcf:	cc                   	int3
5f003bd0:	83 ec 54             	sub    esp,0x54
5f003bd3:	53                   	push   ebx
5f003bd4:	56                   	push   esi
5f003bd5:	8b 74 24 60          	mov    esi,DWORD PTR [esp+0x60]
5f003bd9:	57                   	push   edi
5f003bda:	55                   	push   ebp
5f003bdb:	6a f0                	push   0xfffffff0
5f003bdd:	56                   	push   esi
5f003bde:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003be4:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f003be8:	a9 00 00 00 10       	test   eax,0x10000000
5f003bed:	0f 84 0b 03 00 00    	je     0x5f003efe
5f003bf3:	83 7c 24 70 03       	cmp    DWORD PTR [esp+0x70],0x3
5f003bf8:	75 1e                	jne    0x5f003c18
5f003bfa:	24 03                	and    al,0x3
5f003bfc:	3c 03                	cmp    al,0x3
5f003bfe:	75 18                	jne    0x5f003c18
5f003c00:	6a 00                	push   0x0
5f003c02:	6a 00                	push   0x0
5f003c04:	68 57 01 00 00       	push   0x157
5f003c09:	56                   	push   esi
5f003c0a:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003c10:	85 c0                	test   eax,eax
5f003c12:	0f 85 e6 02 00 00    	jne    0x5f003efe
5f003c18:	83 7c 24 6c 00       	cmp    DWORD PTR [esp+0x6c],0x0
5f003c1d:	74 07                	je     0x5f003c26
5f003c1f:	56                   	push   esi
5f003c20:	ff 15 c4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2c4
5f003c26:	8d 44 24 24          	lea    eax,[esp+0x24]
5f003c2a:	50                   	push   eax
5f003c2b:	56                   	push   esi
5f003c2c:	ff 15 04 d3 00 5f    	call   DWORD PTR ds:0x5f00d304
5f003c32:	56                   	push   esi
5f003c33:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f003c39:	8b f8                	mov    edi,eax
5f003c3b:	8b 1d 8c d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d28c
5f003c41:	8d 44 24 24          	lea    eax,[esp+0x24]
5f003c45:	50                   	push   eax
5f003c46:	57                   	push   edi
5f003c47:	ff d3                	call   ebx
5f003c49:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
5f003c4d:	66 bd 0f 00          	mov    bp,0xf
5f003c51:	51                   	push   ecx
5f003c52:	57                   	push   edi
5f003c53:	ff d3                	call   ebx
5f003c55:	57                   	push   edi
5f003c56:	ff 15 78 d2 00 5f    	call   DWORD PTR ds:0x5f00d278
5f003c5c:	8b d8                	mov    ebx,eax
5f003c5e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f003c62:	25 00 00 10 00       	and    eax,0x100000
5f003c67:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
5f003c6b:	74 04                	je     0x5f003c71
5f003c6d:	66 bd 07 00          	mov    bp,0x7
5f003c71:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f003c75:	25 00 00 20 00       	and    eax,0x200000
5f003c7a:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
5f003c7e:	74 05                	je     0x5f003c85
5f003c80:	66 81 e5 fb ff       	and    bp,0xfffb
5f003c85:	6a f4                	push   0xfffffff4
5f003c87:	56                   	push   esi
5f003c88:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003c8e:	8b 4c 24 6c          	mov    ecx,DWORD PTR [esp+0x6c]
5f003c92:	2b c8                	sub    ecx,eax
5f003c94:	81 f9 18 fc ff ff    	cmp    ecx,0xfffffc18
5f003c9a:	0f 85 52 01 00 00    	jne    0x5f003df2
5f003ca0:	c7 44 24 18 9a 02 00 	mov    DWORD PTR [esp+0x18],0x29a
5f003ca7:	00 
5f003ca8:	8d 44 24 18          	lea    eax,[esp+0x18]
5f003cac:	50                   	push   eax
5f003cad:	6a 00                	push   0x0
5f003caf:	68 44 19 00 00       	push   0x1944
5f003cb4:	57                   	push   edi
5f003cb5:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003cbb:	81 7c 24 18 9a 02 00 	cmp    DWORD PTR [esp+0x18],0x29a
5f003cc2:	00 
5f003cc3:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
5f003cc7:	75 17                	jne    0x5f003ce0
5f003cc9:	8d 44 24 18          	lea    eax,[esp+0x18]
5f003ccd:	50                   	push   eax
5f003cce:	6a 00                	push   0x0
5f003cd0:	68 43 19 00 00       	push   0x1943
5f003cd5:	57                   	push   edi
5f003cd6:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003cdc:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
5f003ce0:	8d 44 24 44          	lea    eax,[esp+0x44]
5f003ce4:	6a 10                	push   0x10
5f003ce6:	50                   	push   eax
5f003ce7:	57                   	push   edi
5f003ce8:	ff 15 f0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2f0
5f003cee:	8d 4c 24 44          	lea    ecx,[esp+0x44]
5f003cf2:	68 d4 b0 00 5f       	push   0x5f00b0d4
5f003cf7:	51                   	push   ecx
5f003cf8:	ff 15 0c d2 00 5f    	call   DWORD PTR ds:0x5f00d20c
5f003cfe:	85 c0                	test   eax,eax
5f003d00:	74 19                	je     0x5f003d1b
5f003d02:	83 7c 24 18 01       	cmp    DWORD PTR [esp+0x18],0x1
5f003d07:	0f 85 e5 00 00 00    	jne    0x5f003df2
5f003d0d:	81 7c 24 34 eb 03 00 	cmp    DWORD PTR [esp+0x34],0x3eb
5f003d14:	00 
5f003d15:	0f 85 d7 00 00 00    	jne    0x5f003df2
5f003d1b:	57                   	push   edi
5f003d1c:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f003d22:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
5f003d26:	6a 02                	push   0x2
5f003d28:	8d 44 24 28          	lea    eax,[esp+0x28]
5f003d2c:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
5f003d30:	50                   	push   eax
5f003d31:	51                   	push   ecx
5f003d32:	57                   	push   edi
5f003d33:	ff 15 c0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2c0
5f003d39:	53                   	push   ebx
5f003d3a:	57                   	push   edi
5f003d3b:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f003d41:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
5f003d45:	51                   	push   ecx
5f003d46:	ff 15 78 d2 00 5f    	call   DWORD PTR ds:0x5f00d278
5f003d4c:	83 7c 24 6c 00       	cmp    DWORD PTR [esp+0x6c],0x0
5f003d51:	8b d8                	mov    ebx,eax
5f003d53:	0f 84 8c 00 00 00    	je     0x5f003de5
5f003d59:	6a f0                	push   0xfffffff0
5f003d5b:	57                   	push   edi
5f003d5c:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003d62:	83 e0 03             	and    eax,0x3
5f003d65:	83 f8 02             	cmp    eax,0x2
5f003d68:	74 4c                	je     0x5f003db6
5f003d6a:	83 f8 03             	cmp    eax,0x3
5f003d6d:	74 47                	je     0x5f003db6
5f003d6f:	66 81 e5 f7 ff       	and    bp,0xfff7
5f003d74:	6a 05                	push   0x5
5f003d76:	57                   	push   edi
5f003d77:	ff 15 5c d2 00 5f    	call   DWORD PTR ds:0x5f00d25c
5f003d7d:	8d 4c 24 34          	lea    ecx,[esp+0x34]
5f003d81:	51                   	push   ecx
5f003d82:	50                   	push   eax
5f003d83:	ff 15 04 d3 00 5f    	call   DWORD PTR ds:0x5f00d304
5f003d89:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
5f003d8d:	68 08 10 00 00       	push   0x1008
5f003d92:	2b 44 24 40          	sub    eax,DWORD PTR [esp+0x40]
5f003d96:	8d 4c 24 28          	lea    ecx,[esp+0x28]
5f003d9a:	01 44 24 30          	add    DWORD PTR [esp+0x30],eax
5f003d9e:	51                   	push   ecx
5f003d9f:	53                   	push   ebx
5f003da0:	e8 db d6 ff ff       	call   0x5f001480
5f003da5:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
5f003da9:	2b 44 24 40          	sub    eax,DWORD PTR [esp+0x40]
5f003dad:	01 44 24 38          	add    DWORD PTR [esp+0x38],eax
5f003db1:	83 c4 0c             	add    esp,0xc
5f003db4:	eb 38                	jmp    0x5f003dee
5f003db6:	6a 00                	push   0x0
5f003db8:	6a 00                	push   0x0
5f003dba:	68 57 01 00 00       	push   0x157
5f003dbf:	57                   	push   edi
5f003dc0:	ff 15 e8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e8
5f003dc6:	85 c0                	test   eax,eax
5f003dc8:	74 24                	je     0x5f003dee
5f003dca:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
5f003dce:	53                   	push   ebx
5f003dcf:	50                   	push   eax
5f003dd0:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f003dd6:	56                   	push   esi
5f003dd7:	ff 15 bc d2 00 5f    	call   DWORD PTR ds:0x5f00d2bc
5f003ddd:	5d                   	pop    ebp
5f003dde:	5f                   	pop    edi
5f003ddf:	5e                   	pop    esi
5f003de0:	5b                   	pop    ebx
5f003de1:	83 c4 54             	add    esp,0x54
5f003de4:	c3                   	ret
5f003de5:	66 81 e5 fd ff       	and    bp,0xfffd
5f003dea:	ff 44 24 28          	inc    DWORD PTR [esp+0x28]
5f003dee:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
5f003df2:	8d 44 24 24          	lea    eax,[esp+0x24]
5f003df6:	55                   	push   ebp
5f003df7:	50                   	push   eax
5f003df8:	53                   	push   ebx
5f003df9:	e8 82 d6 ff ff       	call   0x5f001480
5f003dfe:	83 c4 0c             	add    esp,0xc
5f003e01:	83 7c 24 70 03       	cmp    DWORD PTR [esp+0x70],0x3
5f003e06:	75 3e                	jne    0x5f003e46
5f003e08:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f003e0c:	24 03                	and    al,0x3
5f003e0e:	3c 03                	cmp    al,0x3
5f003e10:	75 34                	jne    0x5f003e46
5f003e12:	8b 6c 24 2c          	mov    ebp,DWORD PTR [esp+0x2c]
5f003e16:	6a 02                	push   0x2
5f003e18:	ff 15 74 d2 00 5f    	call   DWORD PTR ds:0x5f00d274
5f003e1e:	2b e8                	sub    ebp,eax
5f003e20:	6a 0c                	push   0xc
5f003e22:	8d 44 24 28          	lea    eax,[esp+0x28]
5f003e26:	6a 07                	push   0x7
5f003e28:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
5f003e2c:	6a 07                	push   0x7
5f003e2e:	50                   	push   eax
5f003e2f:	53                   	push   ebx
5f003e30:	e8 0b d5 ff ff       	call   0x5f001340
5f003e35:	83 c4 14             	add    esp,0x14
5f003e38:	56                   	push   esi
5f003e39:	e8 b2 f1 ff ff       	call   0x5f002ff0
5f003e3e:	83 c4 04             	add    esp,0x4
5f003e41:	e9 a2 00 00 00       	jmp    0x5f003ee8
5f003e46:	83 7c 24 20 00       	cmp    DWORD PTR [esp+0x20],0x0
5f003e4b:	74 52                	je     0x5f003e9f
5f003e4d:	8d 44 24 24          	lea    eax,[esp+0x24]
5f003e51:	6a 04                	push   0x4
5f003e53:	ff 44 24 30          	inc    DWORD PTR [esp+0x30]
5f003e57:	6a 00                	push   0x0
5f003e59:	6a 00                	push   0x0
5f003e5b:	50                   	push   eax
5f003e5c:	53                   	push   ebx
5f003e5d:	e8 de d4 ff ff       	call   0x5f001340
5f003e62:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
5f003e66:	ff 4c 24 40          	dec    DWORD PTR [esp+0x40]
5f003e6a:	8b 6c 24 40          	mov    ebp,DWORD PTR [esp+0x40]
5f003e6e:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
5f003e72:	83 c4 14             	add    esp,0x14
5f003e75:	6a 02                	push   0x2
5f003e77:	ff 15 74 d2 00 5f    	call   DWORD PTR ds:0x5f00d274
5f003e7d:	2b e8                	sub    ebp,eax
5f003e7f:	6a 08                	push   0x8
5f003e81:	8d 44 24 28          	lea    eax,[esp+0x28]
5f003e85:	6a 07                	push   0x7
5f003e87:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
5f003e8b:	6a 07                	push   0x7
5f003e8d:	50                   	push   eax
5f003e8e:	53                   	push   ebx
5f003e8f:	e8 ac d4 ff ff       	call   0x5f001340
5f003e94:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
5f003e98:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
5f003e9c:	83 c4 14             	add    esp,0x14
5f003e9f:	83 7c 24 1c 00       	cmp    DWORD PTR [esp+0x1c],0x0
5f003ea4:	74 42                	je     0x5f003ee8
5f003ea6:	8d 44 24 24          	lea    eax,[esp+0x24]
5f003eaa:	6a 08                	push   0x8
5f003eac:	ff 44 24 34          	inc    DWORD PTR [esp+0x34]
5f003eb0:	6a 00                	push   0x0
5f003eb2:	6a 00                	push   0x0
5f003eb4:	50                   	push   eax
5f003eb5:	53                   	push   ebx
5f003eb6:	e8 85 d4 ff ff       	call   0x5f001340
5f003ebb:	ff 4c 24 44          	dec    DWORD PTR [esp+0x44]
5f003ebf:	83 c4 14             	add    esp,0x14
5f003ec2:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
5f003ec6:	6a 15                	push   0x15
5f003ec8:	ff 15 74 d2 00 5f    	call   DWORD PTR ds:0x5f00d274
5f003ece:	2b e8                	sub    ebp,eax
5f003ed0:	6a 04                	push   0x4
5f003ed2:	8d 44 24 28          	lea    eax,[esp+0x28]
5f003ed6:	6a 07                	push   0x7
5f003ed8:	89 6c 24 30          	mov    DWORD PTR [esp+0x30],ebp
5f003edc:	6a 07                	push   0x7
5f003ede:	50                   	push   eax
5f003edf:	53                   	push   ebx
5f003ee0:	e8 5b d4 ff ff       	call   0x5f001340
5f003ee5:	83 c4 14             	add    esp,0x14
5f003ee8:	53                   	push   ebx
5f003ee9:	57                   	push   edi
5f003eea:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f003ef0:	83 7c 24 6c 00       	cmp    DWORD PTR [esp+0x6c],0x0
5f003ef5:	74 07                	je     0x5f003efe
5f003ef7:	56                   	push   esi
5f003ef8:	ff 15 bc d2 00 5f    	call   DWORD PTR ds:0x5f00d2bc
5f003efe:	5d                   	pop    ebp
5f003eff:	5f                   	pop    edi
5f003f00:	5e                   	pop    esi
5f003f01:	5b                   	pop    ebx
5f003f02:	83 c4 54             	add    esp,0x54
5f003f05:	c3                   	ret
5f003f06:	cc                   	int3
5f003f07:	cc                   	int3
5f003f08:	cc                   	int3
5f003f09:	cc                   	int3
5f003f0a:	cc                   	int3
5f003f0b:	cc                   	int3
5f003f0c:	cc                   	int3
5f003f0d:	cc                   	int3
5f003f0e:	cc                   	int3
5f003f0f:	cc                   	int3
5f003f10:	83 ec 04             	sub    esp,0x4
5f003f13:	53                   	push   ebx
5f003f14:	56                   	push   esi
5f003f15:	57                   	push   edi
5f003f16:	55                   	push   ebp
5f003f17:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
5f003f1b:	81 ff 82 00 00 00    	cmp    edi,0x82
5f003f21:	75 25                	jne    0x5f003f48
5f003f23:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
5f003f27:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
5f003f2b:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
5f003f2f:	53                   	push   ebx
5f003f30:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
5f003f34:	55                   	push   ebp
5f003f35:	50                   	push   eax
5f003f36:	57                   	push   edi
5f003f37:	56                   	push   esi
5f003f38:	e8 23 d3 ff ff       	call   0x5f001260
5f003f3d:	83 c4 14             	add    esp,0x14
5f003f40:	5d                   	pop    ebp
5f003f41:	5f                   	pop    edi
5f003f42:	5e                   	pop    esi
5f003f43:	5b                   	pop    ebx
5f003f44:	83 c4 04             	add    esp,0x4
5f003f47:	c3                   	ret
5f003f48:	33 c0                	xor    eax,eax
5f003f4a:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
5f003f4e:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f003f54:	50                   	push   eax
5f003f55:	56                   	push   esi
5f003f56:	ff 15 00 d3 00 5f    	call   DWORD PTR ds:0x5f00d300
5f003f5c:	8b 6c 24 24          	mov    ebp,DWORD PTR [esp+0x24]
5f003f60:	85 c0                	test   eax,eax
5f003f62:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
5f003f66:	55                   	push   ebp
5f003f67:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
5f003f6b:	50                   	push   eax
5f003f6c:	57                   	push   edi
5f003f6d:	56                   	push   esi
5f003f6e:	53                   	push   ebx
5f003f6f:	56                   	push   esi
5f003f70:	74 19                	je     0x5f003f8b
5f003f72:	e8 a9 d0 ff ff       	call   0x5f001020
5f003f77:	83 c4 08             	add    esp,0x8
5f003f7a:	8b 2d d0 d2 00 5f    	mov    ebp,DWORD PTR ds:0x5f00d2d0
5f003f80:	50                   	push   eax
5f003f81:	ff d5                	call   ebp
5f003f83:	5d                   	pop    ebp
5f003f84:	5f                   	pop    edi
5f003f85:	5e                   	pop    esi
5f003f86:	5b                   	pop    ebx
5f003f87:	83 c4 04             	add    esp,0x4
5f003f8a:	c3                   	ret
5f003f8b:	e8 90 d0 ff ff       	call   0x5f001020
5f003f90:	83 c4 08             	add    esp,0x8
5f003f93:	50                   	push   eax
5f003f94:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f003f9a:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f003f9e:	83 fb 03             	cmp    ebx,0x3
5f003fa1:	75 1f                	jne    0x5f003fc2
5f003fa3:	6a f0                	push   0xfffffff0
5f003fa5:	56                   	push   esi
5f003fa6:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f003fac:	8b c8                	mov    ecx,eax
5f003fae:	80 e1 03             	and    cl,0x3
5f003fb1:	80 f9 02             	cmp    cl,0x2
5f003fb4:	75 10                	jne    0x5f003fc6
5f003fb6:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f003fba:	5d                   	pop    ebp
5f003fbb:	5f                   	pop    edi
5f003fbc:	5e                   	pop    esi
5f003fbd:	5b                   	pop    ebx
5f003fbe:	83 c4 04             	add    esp,0x4
5f003fc1:	c3                   	ret
5f003fc2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f003fc6:	83 ff 18             	cmp    edi,0x18
5f003fc9:	77 13                	ja     0x5f003fde
5f003fcb:	74 48                	je     0x5f004015
5f003fcd:	83 ff 0f             	cmp    edi,0xf
5f003fd0:	74 23                	je     0x5f003ff5
5f003fd2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f003fd6:	5d                   	pop    ebp
5f003fd7:	5f                   	pop    edi
5f003fd8:	5e                   	pop    esi
5f003fd9:	5b                   	pop    ebx
5f003fda:	83 c4 04             	add    esp,0x4
5f003fdd:	c3                   	ret
5f003fde:	83 ff 46             	cmp    edi,0x46
5f003fe1:	74 51                	je     0x5f004034
5f003fe3:	81 ff 43 19 00 00    	cmp    edi,0x1943
5f003fe9:	72 e7                	jb     0x5f003fd2
5f003feb:	81 ff 44 19 00 00    	cmp    edi,0x1944
5f003ff1:	76 58                	jbe    0x5f00404b
5f003ff3:	eb dd                	jmp    0x5f003fd2
5f003ff5:	83 fb 03             	cmp    ebx,0x3
5f003ff8:	75 0d                	jne    0x5f004007
5f003ffa:	83 e0 03             	and    eax,0x3
5f003ffd:	83 f8 02             	cmp    eax,0x2
5f004000:	74 05                	je     0x5f004007
5f004002:	83 f8 03             	cmp    eax,0x3
5f004005:	75 cb                	jne    0x5f003fd2
5f004007:	53                   	push   ebx
5f004008:	6a 01                	push   0x1
5f00400a:	56                   	push   esi
5f00400b:	e8 c0 fb ff ff       	call   0x5f003bd0
5f004010:	83 c4 0c             	add    esp,0xc
5f004013:	eb bd                	jmp    0x5f003fd2
5f004015:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x30a
5f00401c:	0a 03 
5f00401e:	73 b2                	jae    0x5f003fd2
5f004020:	83 7c 24 20 00       	cmp    DWORD PTR [esp+0x20],0x0
5f004025:	75 ab                	jne    0x5f003fd2
5f004027:	6a 00                	push   0x0
5f004029:	56                   	push   esi
5f00402a:	e8 01 ef ff ff       	call   0x5f002f30
5f00402f:	83 c4 08             	add    esp,0x8
5f004032:	eb 9e                	jmp    0x5f003fd2
5f004034:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x30a
5f00403b:	0a 03 
5f00403d:	72 93                	jb     0x5f003fd2
5f00403f:	55                   	push   ebp
5f004040:	56                   	push   esi
5f004041:	e8 ea ee ff ff       	call   0x5f002f30
5f004046:	83 c4 08             	add    esp,0x8
5f004049:	eb 87                	jmp    0x5f003fd2
5f00404b:	b8 ea 03 00 00       	mov    eax,0x3ea
5f004050:	c7 45 00 01 00 00 00 	mov    DWORD PTR [ebp+0x0],0x1
5f004057:	5d                   	pop    ebp
5f004058:	5f                   	pop    edi
5f004059:	5e                   	pop    esi
5f00405a:	5b                   	pop    ebx
5f00405b:	83 c4 04             	add    esp,0x4
5f00405e:	c3                   	ret
5f00405f:	cc                   	int3
5f004060:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f004064:	6a 02                	push   0x2
5f004066:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
5f00406a:	50                   	push   eax
5f00406b:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
5f00406f:	51                   	push   ecx
5f004070:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f004074:	52                   	push   edx
5f004075:	50                   	push   eax
5f004076:	e8 95 fe ff ff       	call   0x5f003f10
5f00407b:	83 c4 14             	add    esp,0x14
5f00407e:	c2 10 00             	ret    0x10
5f004081:	cc                   	int3
5f004082:	cc                   	int3
5f004083:	cc                   	int3
5f004084:	cc                   	int3
5f004085:	cc                   	int3
5f004086:	cc                   	int3
5f004087:	cc                   	int3
5f004088:	cc                   	int3
5f004089:	cc                   	int3
5f00408a:	cc                   	int3
5f00408b:	cc                   	int3
5f00408c:	cc                   	int3
5f00408d:	cc                   	int3
5f00408e:	cc                   	int3
5f00408f:	cc                   	int3
5f004090:	83 ec 20             	sub    esp,0x20
5f004093:	53                   	push   ebx
5f004094:	56                   	push   esi
5f004095:	8b 74 24 30          	mov    esi,DWORD PTR [esp+0x30]
5f004099:	57                   	push   edi
5f00409a:	81 fe 82 00 00 00    	cmp    esi,0x82
5f0040a0:	75 24                	jne    0x5f0040c6
5f0040a2:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
5f0040a6:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
5f0040aa:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
5f0040ae:	50                   	push   eax
5f0040af:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
5f0040b3:	51                   	push   ecx
5f0040b4:	52                   	push   edx
5f0040b5:	56                   	push   esi
5f0040b6:	57                   	push   edi
5f0040b7:	e8 a4 d1 ff ff       	call   0x5f001260
5f0040bc:	83 c4 14             	add    esp,0x14
5f0040bf:	5f                   	pop    edi
5f0040c0:	5e                   	pop    esi
5f0040c1:	5b                   	pop    ebx
5f0040c2:	83 c4 20             	add    esp,0x20
5f0040c5:	c3                   	ret
5f0040c6:	33 c0                	xor    eax,eax
5f0040c8:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
5f0040cc:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f0040d2:	50                   	push   eax
5f0040d3:	57                   	push   edi
5f0040d4:	ff 15 00 d3 00 5f    	call   DWORD PTR ds:0x5f00d300
5f0040da:	85 c0                	test   eax,eax
5f0040dc:	74 28                	je     0x5f004106
5f0040de:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
5f0040e2:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
5f0040e6:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
5f0040ea:	50                   	push   eax
5f0040eb:	51                   	push   ecx
5f0040ec:	56                   	push   esi
5f0040ed:	57                   	push   edi
5f0040ee:	52                   	push   edx
5f0040ef:	57                   	push   edi
5f0040f0:	e8 2b cf ff ff       	call   0x5f001020
5f0040f5:	83 c4 08             	add    esp,0x8
5f0040f8:	50                   	push   eax
5f0040f9:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f0040ff:	5f                   	pop    edi
5f004100:	5e                   	pop    esi
5f004101:	5b                   	pop    ebx
5f004102:	83 c4 20             	add    esp,0x20
5f004105:	c3                   	ret
5f004106:	83 fe 18             	cmp    esi,0x18
5f004109:	77 33                	ja     0x5f00413e
5f00410b:	0f 84 90 00 00 00    	je     0x5f0041a1
5f004111:	83 fe 0f             	cmp    esi,0xf
5f004114:	74 53                	je     0x5f004169
5f004116:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
5f00411a:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
5f00411e:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
5f004122:	50                   	push   eax
5f004123:	51                   	push   ecx
5f004124:	56                   	push   esi
5f004125:	57                   	push   edi
5f004126:	52                   	push   edx
5f004127:	57                   	push   edi
5f004128:	e8 f3 ce ff ff       	call   0x5f001020
5f00412d:	83 c4 08             	add    esp,0x8
5f004130:	50                   	push   eax
5f004131:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f004137:	5f                   	pop    edi
5f004138:	5e                   	pop    esi
5f004139:	5b                   	pop    ebx
5f00413a:	83 c4 20             	add    esp,0x20
5f00413d:	c3                   	ret
5f00413e:	81 fe 83 00 00 00    	cmp    esi,0x83
5f004144:	77 0d                	ja     0x5f004153
5f004146:	0f 84 a1 00 00 00    	je     0x5f0041ed
5f00414c:	83 fe 46             	cmp    esi,0x46
5f00414f:	74 7a                	je     0x5f0041cb
5f004151:	eb c3                	jmp    0x5f004116
5f004153:	81 fe 43 19 00 00    	cmp    esi,0x1943
5f004159:	72 bb                	jb     0x5f004116
5f00415b:	81 fe 44 19 00 00    	cmp    esi,0x1944
5f004161:	0f 86 41 01 00 00    	jbe    0x5f0042a8
5f004167:	eb ad                	jmp    0x5f004116
5f004169:	8b 5c 24 40          	mov    ebx,DWORD PTR [esp+0x40]
5f00416d:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
5f004171:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
5f004175:	50                   	push   eax
5f004176:	51                   	push   ecx
5f004177:	56                   	push   esi
5f004178:	57                   	push   edi
5f004179:	53                   	push   ebx
5f00417a:	57                   	push   edi
5f00417b:	e8 a0 ce ff ff       	call   0x5f001020
5f004180:	83 c4 08             	add    esp,0x8
5f004183:	50                   	push   eax
5f004184:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f00418a:	8b f0                	mov    esi,eax
5f00418c:	53                   	push   ebx
5f00418d:	6a 00                	push   0x0
5f00418f:	57                   	push   edi
5f004190:	e8 3b fa ff ff       	call   0x5f003bd0
5f004195:	83 c4 0c             	add    esp,0xc
5f004198:	8b c6                	mov    eax,esi
5f00419a:	5f                   	pop    edi
5f00419b:	5e                   	pop    esi
5f00419c:	5b                   	pop    ebx
5f00419d:	83 c4 20             	add    esp,0x20
5f0041a0:	c3                   	ret
5f0041a1:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x30a
5f0041a8:	0a 03 
5f0041aa:	0f 83 66 ff ff ff    	jae    0x5f004116
5f0041b0:	83 7c 24 38 00       	cmp    DWORD PTR [esp+0x38],0x0
5f0041b5:	0f 85 5b ff ff ff    	jne    0x5f004116
5f0041bb:	6a 00                	push   0x0
5f0041bd:	57                   	push   edi
5f0041be:	e8 6d ed ff ff       	call   0x5f002f30
5f0041c3:	83 c4 08             	add    esp,0x8
5f0041c6:	e9 4b ff ff ff       	jmp    0x5f004116
5f0041cb:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x30a
5f0041d2:	0a 03 
5f0041d4:	0f 82 3c ff ff ff    	jb     0x5f004116
5f0041da:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
5f0041de:	50                   	push   eax
5f0041df:	57                   	push   edi
5f0041e0:	e8 4b ed ff ff       	call   0x5f002f30
5f0041e5:	83 c4 08             	add    esp,0x8
5f0041e8:	e9 29 ff ff ff       	jmp    0x5f004116
5f0041ed:	66 81 3d 60 52 00 5f 	cmp    WORD PTR ds:0x5f005260,0x30a
5f0041f4:	0a 03 
5f0041f6:	0f 83 1a ff ff ff    	jae    0x5f004116
5f0041fc:	8d 44 24 1c          	lea    eax,[esp+0x1c]
5f004200:	50                   	push   eax
5f004201:	57                   	push   edi
5f004202:	ff 15 04 d3 00 5f    	call   DWORD PTR ds:0x5f00d304
5f004208:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
5f00420c:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
5f004210:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
5f004214:	51                   	push   ecx
5f004215:	50                   	push   eax
5f004216:	56                   	push   esi
5f004217:	57                   	push   edi
5f004218:	52                   	push   edx
5f004219:	57                   	push   edi
5f00421a:	e8 01 ce ff ff       	call   0x5f001020
5f00421f:	83 c4 08             	add    esp,0x8
5f004222:	50                   	push   eax
5f004223:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f004229:	8b f0                	mov    esi,eax
5f00422b:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
5f00422f:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
5f004233:	8b 02                	mov    eax,DWORD PTR [edx]
5f004235:	8b 5a 04             	mov    ebx,DWORD PTR [edx+0x4]
5f004238:	6a 01                	push   0x1
5f00423a:	6a 02                	push   0x2
5f00423c:	89 01                	mov    DWORD PTR [ecx],eax
5f00423e:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
5f004241:	89 59 04             	mov    DWORD PTR [ecx+0x4],ebx
5f004244:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
5f004247:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
5f00424a:	89 51 0c             	mov    DWORD PTR [ecx+0xc],edx
5f00424d:	8d 4c 24 14          	lea    ecx,[esp+0x14]
5f004251:	51                   	push   ecx
5f004252:	ff 15 54 d2 00 5f    	call   DWORD PTR ds:0x5f00d254
5f004258:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
5f00425c:	39 4c 24 18          	cmp    DWORD PTR [esp+0x18],ecx
5f004260:	7d 3d                	jge    0x5f00429f
5f004262:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
5f004266:	57                   	push   edi
5f004267:	40                   	inc    eax
5f004268:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
5f00426c:	8d 41 01             	lea    eax,[ecx+0x1]
5f00426f:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
5f004273:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f004279:	8b f8                	mov    edi,eax
5f00427b:	8b 1d 8c d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d28c
5f004281:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f004285:	50                   	push   eax
5f004286:	57                   	push   edi
5f004287:	ff d3                	call   ebx
5f004289:	8d 4c 24 14          	lea    ecx,[esp+0x14]
5f00428d:	51                   	push   ecx
5f00428e:	57                   	push   edi
5f00428f:	ff d3                	call   ebx
5f004291:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f004295:	6a 01                	push   0x1
5f004297:	50                   	push   eax
5f004298:	57                   	push   edi
5f004299:	ff 15 88 d2 00 5f    	call   DWORD PTR ds:0x5f00d288
5f00429f:	8b c6                	mov    eax,esi
5f0042a1:	5f                   	pop    edi
5f0042a2:	5e                   	pop    esi
5f0042a3:	5b                   	pop    ebx
5f0042a4:	83 c4 20             	add    esp,0x20
5f0042a7:	c3                   	ret
5f0042a8:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
5f0042ac:	5f                   	pop    edi
5f0042ad:	5e                   	pop    esi
5f0042ae:	5b                   	pop    ebx
5f0042af:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
5f0042b5:	b8 e9 03 00 00       	mov    eax,0x3e9
5f0042ba:	83 c4 20             	add    esp,0x20
5f0042bd:	c3                   	ret
5f0042be:	cc                   	int3
5f0042bf:	cc                   	int3
5f0042c0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f0042c4:	6a 01                	push   0x1
5f0042c6:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
5f0042ca:	50                   	push   eax
5f0042cb:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
5f0042cf:	51                   	push   ecx
5f0042d0:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f0042d4:	52                   	push   edx
5f0042d5:	50                   	push   eax
5f0042d6:	e8 b5 fd ff ff       	call   0x5f004090
5f0042db:	83 c4 14             	add    esp,0x14
5f0042de:	c2 10 00             	ret    0x10
5f0042e1:	cc                   	int3
5f0042e2:	cc                   	int3
5f0042e3:	cc                   	int3
5f0042e4:	cc                   	int3
5f0042e5:	cc                   	int3
5f0042e6:	cc                   	int3
5f0042e7:	cc                   	int3
5f0042e8:	cc                   	int3
5f0042e9:	cc                   	int3
5f0042ea:	cc                   	int3
5f0042eb:	cc                   	int3
5f0042ec:	cc                   	int3
5f0042ed:	cc                   	int3
5f0042ee:	cc                   	int3
5f0042ef:	cc                   	int3
5f0042f0:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
5f0042f4:	81 f9 43 19 00 00    	cmp    ecx,0x1943
5f0042fa:	72 08                	jb     0x5f004304
5f0042fc:	81 f9 44 19 00 00    	cmp    ecx,0x1944
5f004302:	76 1d                	jbe    0x5f004321
5f004304:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f004308:	6a 03                	push   0x3
5f00430a:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
5f00430e:	50                   	push   eax
5f00430f:	52                   	push   edx
5f004310:	51                   	push   ecx
5f004311:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
5f004315:	51                   	push   ecx
5f004316:	e8 f5 fb ff ff       	call   0x5f003f10
5f00431b:	83 c4 14             	add    esp,0x14
5f00431e:	c2 10 00             	ret    0x10
5f004321:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f004325:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
5f00432b:	b8 eb 03 00 00       	mov    eax,0x3eb
5f004330:	c2 10 00             	ret    0x10
5f004333:	cc                   	int3
5f004334:	cc                   	int3
5f004335:	cc                   	int3
5f004336:	cc                   	int3
5f004337:	cc                   	int3
5f004338:	cc                   	int3
5f004339:	cc                   	int3
5f00433a:	cc                   	int3
5f00433b:	cc                   	int3
5f00433c:	cc                   	int3
5f00433d:	cc                   	int3
5f00433e:	cc                   	int3
5f00433f:	cc                   	int3
5f004340:	55                   	push   ebp
5f004341:	8b ec                	mov    ebp,esp
5f004343:	83 ec 08             	sub    esp,0x8
5f004346:	53                   	push   ebx
5f004347:	56                   	push   esi
5f004348:	57                   	push   edi
5f004349:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
5f00434c:	68 21 00 f0 00       	push   0xf00021
5f004351:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
5f004354:	8b 0e                	mov    ecx,DWORD PTR [esi]
5f004356:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
5f004359:	2b c2                	sub    eax,edx
5f00435b:	50                   	push   eax
5f00435c:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
5f00435f:	2b c1                	sub    eax,ecx
5f004361:	50                   	push   eax
5f004362:	52                   	push   edx
5f004363:	51                   	push   ecx
5f004364:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
5f004367:	51                   	push   ecx
5f004368:	ff 15 b4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b4
5f00436e:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
5f004371:	57                   	push   edi
5f004372:	ff 15 c8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2c8
5f004378:	8b d8                	mov    ebx,eax
5f00437a:	8d 04 45 0d 00 00 00 	lea    eax,[eax*2+0xd]
5f004381:	83 e0 fc             	and    eax,0xfffffffc
5f004384:	e8 d3 05 00 00       	call   0x5f00495c
5f004389:	89 65 fc             	mov    DWORD PTR [ebp-0x4],esp
5f00438c:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
5f004390:	74 7a                	je     0x5f00440c
5f004392:	83 c3 04             	add    ebx,0x4
5f004395:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
5f004398:	53                   	push   ebx
5f004399:	50                   	push   eax
5f00439a:	57                   	push   edi
5f00439b:	ff 15 ac d2 00 5f    	call   DWORD PTR ds:0x5f00d2ac
5f0043a1:	85 c0                	test   eax,eax
5f0043a3:	74 67                	je     0x5f00440c
5f0043a5:	66 bb 40 01          	mov    bx,0x140
5f0043a9:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
5f0043ac:	8b c7                	mov    eax,edi
5f0043ae:	24 0f                	and    al,0xf
5f0043b0:	3c 0c                	cmp    al,0xc
5f0043b2:	74 0b                	je     0x5f0043bf
5f0043b4:	8b df                	mov    ebx,edi
5f0043b6:	66 83 e3 0f          	and    bx,0xf
5f0043ba:	66 81 cb 50 01       	or     bx,0x150
5f0043bf:	f7 c7 80 00 00 00    	test   edi,0x80
5f0043c5:	74 03                	je     0x5f0043ca
5f0043c7:	80 cf 08             	or     bh,0x8
5f0043ca:	81 e7 00 00 00 08    	and    edi,0x8000000
5f0043d0:	74 13                	je     0x5f0043e5
5f0043d2:	a1 7c 52 00 5f       	mov    eax,ds:0x5f00527c
5f0043d7:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
5f0043da:	50                   	push   eax
5f0043db:	51                   	push   ecx
5f0043dc:	ff 15 d4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d4
5f0043e2:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
5f0043e5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
5f0043e8:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
5f0043eb:	0f b7 c3             	movzx  eax,bx
5f0043ee:	50                   	push   eax
5f0043ef:	56                   	push   esi
5f0043f0:	6a ff                	push   0xffffffff
5f0043f2:	51                   	push   ecx
5f0043f3:	52                   	push   edx
5f0043f4:	ff 15 a0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2a0
5f0043fa:	85 ff                	test   edi,edi
5f0043fc:	74 0e                	je     0x5f00440c
5f0043fe:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
5f004401:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
5f004404:	50                   	push   eax
5f004405:	51                   	push   ecx
5f004406:	ff 15 d4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1d4
5f00440c:	8d 65 ec             	lea    esp,[ebp-0x14]
5f00440f:	5f                   	pop    edi
5f004410:	5e                   	pop    esi
5f004411:	5b                   	pop    ebx
5f004412:	8b e5                	mov    esp,ebp
5f004414:	5d                   	pop    ebp
5f004415:	c3                   	ret
5f004416:	cc                   	int3
5f004417:	cc                   	int3
5f004418:	cc                   	int3
5f004419:	cc                   	int3
5f00441a:	cc                   	int3
5f00441b:	cc                   	int3
5f00441c:	cc                   	int3
5f00441d:	cc                   	int3
5f00441e:	cc                   	int3
5f00441f:	cc                   	int3
5f004420:	83 ec 14             	sub    esp,0x14
5f004423:	53                   	push   ebx
5f004424:	56                   	push   esi
5f004425:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
5f004429:	57                   	push   edi
5f00442a:	55                   	push   ebp
5f00442b:	6a f0                	push   0xfffffff0
5f00442d:	56                   	push   esi
5f00442e:	ff 15 e4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2e4
5f004434:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
5f004438:	a9 00 00 00 10       	test   eax,0x10000000
5f00443d:	0f 84 39 01 00 00    	je     0x5f00457c
5f004443:	8d 44 24 14          	lea    eax,[esp+0x14]
5f004447:	50                   	push   eax
5f004448:	56                   	push   esi
5f004449:	ff 15 cc d2 00 5f    	call   DWORD PTR ds:0x5f00d2cc
5f00444f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f004453:	83 e0 1f             	and    eax,0x1f
5f004456:	83 f8 12             	cmp    eax,0x12
5f004459:	0f 87 1d 01 00 00    	ja     0x5f00457c
5f00445f:	33 c9                	xor    ecx,ecx
5f004461:	8a 88 ac 45 00 5f    	mov    cl,BYTE PTR [eax+0x5f0045ac]
5f004467:	ff 24 8d 84 45 00 5f 	jmp    DWORD PTR [ecx*4+0x5f004584]
5f00446e:	6a 00                	push   0x0
5f004470:	8b 1d e8 d2 00 5f    	mov    ebx,DWORD PTR ds:0x5f00d2e8
5f004476:	6a 00                	push   0x0
5f004478:	6a 31                	push   0x31
5f00447a:	56                   	push   esi
5f00447b:	ff d3                	call   ebx
5f00447d:	8b e8                	mov    ebp,eax
5f00447f:	85 ed                	test   ebp,ebp
5f004481:	74 10                	je     0x5f004493
5f004483:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
5f004487:	55                   	push   ebp
5f004488:	57                   	push   edi
5f004489:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f00448f:	8b e8                	mov    ebp,eax
5f004491:	eb 04                	jmp    0x5f004497
5f004493:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
5f004497:	6a 02                	push   0x2
5f004499:	57                   	push   edi
5f00449a:	ff 15 e4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1e4
5f0044a0:	56                   	push   esi
5f0044a1:	57                   	push   edi
5f0044a2:	68 38 01 00 00       	push   0x138
5f0044a7:	56                   	push   esi
5f0044a8:	ff 15 58 d2 00 5f    	call   DWORD PTR ds:0x5f00d258
5f0044ae:	50                   	push   eax
5f0044af:	ff d3                	call   ebx
5f0044b1:	8b d8                	mov    ebx,eax
5f0044b3:	85 db                	test   ebx,ebx
5f0044b5:	74 0a                	je     0x5f0044c1
5f0044b7:	53                   	push   ebx
5f0044b8:	57                   	push   edi
5f0044b9:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0044bf:	8b d8                	mov    ebx,eax
5f0044c1:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
5f0044c5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
5f0044c9:	50                   	push   eax
5f0044ca:	51                   	push   ecx
5f0044cb:	57                   	push   edi
5f0044cc:	56                   	push   esi
5f0044cd:	e8 6e fe ff ff       	call   0x5f004340
5f0044d2:	83 c4 10             	add    esp,0x10
5f0044d5:	85 ed                	test   ebp,ebp
5f0044d7:	74 08                	je     0x5f0044e1
5f0044d9:	55                   	push   ebp
5f0044da:	57                   	push   edi
5f0044db:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0044e1:	85 db                	test   ebx,ebx
5f0044e3:	0f 84 93 00 00 00    	je     0x5f00457c
5f0044e9:	53                   	push   ebx
5f0044ea:	57                   	push   edi
5f0044eb:	ff 15 cc d1 00 5f    	call   DWORD PTR ds:0x5f00d1cc
5f0044f1:	5d                   	pop    ebp
5f0044f2:	5f                   	pop    edi
5f0044f3:	5e                   	pop    esi
5f0044f4:	5b                   	pop    ebx
5f0044f5:	83 c4 14             	add    esp,0x14
5f0044f8:	c3                   	ret
5f0044f9:	8d 44 24 14          	lea    eax,[esp+0x14]
5f0044fd:	6a 0f                	push   0xf
5f0044ff:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
5f004503:	6a 00                	push   0x0
5f004505:	6a 02                	push   0x2
5f004507:	50                   	push   eax
5f004508:	57                   	push   edi
5f004509:	e8 32 ce ff ff       	call   0x5f001340
5f00450e:	83 c4 14             	add    esp,0x14
5f004511:	5d                   	pop    ebp
5f004512:	5f                   	pop    edi
5f004513:	5e                   	pop    esi
5f004514:	5b                   	pop    ebx
5f004515:	83 c4 14             	add    esp,0x14
5f004518:	c3                   	ret
5f004519:	8d 44 24 14          	lea    eax,[esp+0x14]
5f00451d:	6a 0f                	push   0xf
5f00451f:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
5f004523:	6a 00                	push   0x0
5f004525:	ff 44 24 1c          	inc    DWORD PTR [esp+0x1c]
5f004529:	6a 00                	push   0x0
5f00452b:	ff 44 24 24          	inc    DWORD PTR [esp+0x24]
5f00452f:	50                   	push   eax
5f004530:	57                   	push   edi
5f004531:	e8 0a ce ff ff       	call   0x5f001340
5f004536:	8d 4c 24 28          	lea    ecx,[esp+0x28]
5f00453a:	83 c4 14             	add    esp,0x14
5f00453d:	6a ff                	push   0xffffffff
5f00453f:	6a ff                	push   0xffffffff
5f004541:	51                   	push   ecx
5f004542:	ff 15 50 d2 00 5f    	call   DWORD PTR ds:0x5f00d250
5f004548:	8d 4c 24 14          	lea    ecx,[esp+0x14]
5f00454c:	6a 0f                	push   0xf
5f00454e:	6a 02                	push   0x2
5f004550:	6a 02                	push   0x2
5f004552:	51                   	push   ecx
5f004553:	57                   	push   edi
5f004554:	e8 e7 cd ff ff       	call   0x5f001340
5f004559:	83 c4 14             	add    esp,0x14
5f00455c:	5d                   	pop    ebp
5f00455d:	5f                   	pop    edi
5f00455e:	5e                   	pop    esi
5f00455f:	5b                   	pop    ebx
5f004560:	83 c4 14             	add    esp,0x14
5f004563:	c3                   	ret
5f004564:	8d 44 24 14          	lea    eax,[esp+0x14]
5f004568:	6a 0f                	push   0xf
5f00456a:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
5f00456e:	6a 02                	push   0x2
5f004570:	6a 00                	push   0x0
5f004572:	50                   	push   eax
5f004573:	57                   	push   edi
5f004574:	e8 c7 cd ff ff       	call   0x5f001340
5f004579:	83 c4 14             	add    esp,0x14
5f00457c:	5d                   	pop    ebp
5f00457d:	5f                   	pop    edi
5f00457e:	5e                   	pop    esi
5f00457f:	5b                   	pop    ebx
5f004580:	83 c4 14             	add    esp,0x14
5f004583:	c3                   	ret
5f004584:	6e                   	outs   dx,BYTE PTR ds:[esi]
5f004585:	44                   	inc    esp
5f004586:	00 5f f9             	add    BYTE PTR [edi-0x7],bl
5f004589:	44                   	inc    esp
5f00458a:	00 5f 19             	add    BYTE PTR [edi+0x19],bl
5f00458d:	45                   	inc    ebp
5f00458e:	00 5f 64             	add    BYTE PTR [edi+0x64],bl
5f004591:	45                   	inc    ebp
5f004592:	00 5f f9             	add    BYTE PTR [edi-0x7],bl
5f004595:	44                   	inc    esp
5f004596:	00 5f 19             	add    BYTE PTR [edi+0x19],bl
5f004599:	45                   	inc    ebp
5f00459a:	00 5f 64             	add    BYTE PTR [edi+0x64],bl
5f00459d:	45                   	inc    ebp
5f00459e:	00 5f 6e             	add    BYTE PTR [edi+0x6e],bl
5f0045a1:	44                   	inc    esp
5f0045a2:	00 5f 19             	add    BYTE PTR [edi+0x19],bl
5f0045a5:	45                   	inc    ebp
5f0045a6:	00 5f 7c             	add    BYTE PTR [edi+0x7c],bl
5f0045a9:	45                   	inc    ebp
5f0045aa:	00 5f 00             	add    BYTE PTR [edi+0x0],bl
5f0045ad:	00 00                	add    BYTE PTR [eax],al
5f0045af:	09 01                	or     DWORD PTR [ecx],eax
5f0045b1:	02 03                	add    al,BYTE PTR [ebx]
5f0045b3:	04 05                	add    al,0x5
5f0045b5:	06                   	push   es
5f0045b6:	09 09                	or     DWORD PTR [ecx],ecx
5f0045b8:	07                   	pop    es
5f0045b9:	09 09                	or     DWORD PTR [ecx],ecx
5f0045bb:	09 08                	or     DWORD PTR [eax],ecx
5f0045bd:	08 08                	or     BYTE PTR [eax],cl
5f0045bf:	cc                   	int3
5f0045c0:	83 ec 40             	sub    esp,0x40
5f0045c3:	53                   	push   ebx
5f0045c4:	56                   	push   esi
5f0045c5:	57                   	push   edi
5f0045c6:	8b 7c 24 54          	mov    edi,DWORD PTR [esp+0x54]
5f0045ca:	81 ff 82 00 00 00    	cmp    edi,0x82
5f0045d0:	75 23                	jne    0x5f0045f5
5f0045d2:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
5f0045d6:	6a 04                	push   0x4
5f0045d8:	8b 5c 24 5c          	mov    ebx,DWORD PTR [esp+0x5c]
5f0045dc:	50                   	push   eax
5f0045dd:	8b 74 24 58          	mov    esi,DWORD PTR [esp+0x58]
5f0045e1:	53                   	push   ebx
5f0045e2:	57                   	push   edi
5f0045e3:	56                   	push   esi
5f0045e4:	e8 77 cc ff ff       	call   0x5f001260
5f0045e9:	83 c4 14             	add    esp,0x14
5f0045ec:	5f                   	pop    edi
5f0045ed:	5e                   	pop    esi
5f0045ee:	5b                   	pop    ebx
5f0045ef:	83 c4 40             	add    esp,0x40
5f0045f2:	c2 10 00             	ret    0x10
5f0045f5:	33 c0                	xor    eax,eax
5f0045f7:	8b 74 24 50          	mov    esi,DWORD PTR [esp+0x50]
5f0045fb:	66 a1 54 52 00 5f    	mov    ax,ds:0x5f005254
5f004601:	50                   	push   eax
5f004602:	56                   	push   esi
5f004603:	ff 15 00 d3 00 5f    	call   DWORD PTR ds:0x5f00d300
5f004609:	85 c0                	test   eax,eax
5f00460b:	74 27                	je     0x5f004634
5f00460d:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
5f004611:	8b 5c 24 58          	mov    ebx,DWORD PTR [esp+0x58]
5f004615:	50                   	push   eax
5f004616:	53                   	push   ebx
5f004617:	57                   	push   edi
5f004618:	56                   	push   esi
5f004619:	6a 04                	push   0x4
5f00461b:	56                   	push   esi
5f00461c:	e8 ff c9 ff ff       	call   0x5f001020
5f004621:	83 c4 08             	add    esp,0x8
5f004624:	50                   	push   eax
5f004625:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f00462b:	5f                   	pop    edi
5f00462c:	5e                   	pop    esi
5f00462d:	5b                   	pop    ebx
5f00462e:	83 c4 40             	add    esp,0x40
5f004631:	c2 10 00             	ret    0x10
5f004634:	83 ff 0f             	cmp    edi,0xf
5f004637:	77 09                	ja     0x5f004642
5f004639:	74 72                	je     0x5f0046ad
5f00463b:	83 ff 0a             	cmp    edi,0xa
5f00463e:	74 3d                	je     0x5f00467d
5f004640:	eb 14                	jmp    0x5f004656
5f004642:	81 ff 43 19 00 00    	cmp    edi,0x1943
5f004648:	72 0c                	jb     0x5f004656
5f00464a:	81 ff 44 19 00 00    	cmp    edi,0x1944
5f004650:	0f 86 9e 00 00 00    	jbe    0x5f0046f4
5f004656:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
5f00465a:	8b 5c 24 58          	mov    ebx,DWORD PTR [esp+0x58]
5f00465e:	50                   	push   eax
5f00465f:	53                   	push   ebx
5f004660:	57                   	push   edi
5f004661:	56                   	push   esi
5f004662:	6a 04                	push   0x4
5f004664:	56                   	push   esi
5f004665:	e8 b6 c9 ff ff       	call   0x5f001020
5f00466a:	83 c4 08             	add    esp,0x8
5f00466d:	50                   	push   eax
5f00466e:	ff 15 d0 d2 00 5f    	call   DWORD PTR ds:0x5f00d2d0
5f004674:	5f                   	pop    edi
5f004675:	5e                   	pop    esi
5f004676:	5b                   	pop    ebx
5f004677:	83 c4 40             	add    esp,0x40
5f00467a:	c2 10 00             	ret    0x10
5f00467d:	56                   	push   esi
5f00467e:	ff 15 78 d2 00 5f    	call   DWORD PTR ds:0x5f00d278
5f004684:	50                   	push   eax
5f004685:	8b f8                	mov    edi,eax
5f004687:	56                   	push   esi
5f004688:	e8 63 ce ff ff       	call   0x5f0014f0
5f00468d:	83 c4 08             	add    esp,0x8
5f004690:	57                   	push   edi
5f004691:	56                   	push   esi
5f004692:	e8 89 fd ff ff       	call   0x5f004420
5f004697:	83 c4 08             	add    esp,0x8
5f00469a:	57                   	push   edi
5f00469b:	56                   	push   esi
5f00469c:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f0046a2:	33 c0                	xor    eax,eax
5f0046a4:	5f                   	pop    edi
5f0046a5:	5e                   	pop    esi
5f0046a6:	5b                   	pop    ebx
5f0046a7:	83 c4 40             	add    esp,0x40
5f0046aa:	c2 10 00             	ret    0x10
5f0046ad:	8b 5c 24 58          	mov    ebx,DWORD PTR [esp+0x58]
5f0046b1:	8b fb                	mov    edi,ebx
5f0046b3:	85 ff                	test   edi,edi
5f0046b5:	75 18                	jne    0x5f0046cf
5f0046b7:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f0046bb:	50                   	push   eax
5f0046bc:	56                   	push   esi
5f0046bd:	ff 15 b8 d2 00 5f    	call   DWORD PTR ds:0x5f00d2b8
5f0046c3:	50                   	push   eax
5f0046c4:	8b f8                	mov    edi,eax
5f0046c6:	56                   	push   esi
5f0046c7:	e8 24 ce ff ff       	call   0x5f0014f0
5f0046cc:	83 c4 08             	add    esp,0x8
5f0046cf:	57                   	push   edi
5f0046d0:	56                   	push   esi
5f0046d1:	e8 4a fd ff ff       	call   0x5f004420
5f0046d6:	83 c4 08             	add    esp,0x8
5f0046d9:	85 db                	test   ebx,ebx
5f0046db:	75 0c                	jne    0x5f0046e9
5f0046dd:	8d 44 24 0c          	lea    eax,[esp+0xc]
5f0046e1:	50                   	push   eax
5f0046e2:	56                   	push   esi
5f0046e3:	ff 15 b4 d2 00 5f    	call   DWORD PTR ds:0x5f00d2b4
5f0046e9:	33 c0                	xor    eax,eax
5f0046eb:	5f                   	pop    edi
5f0046ec:	5e                   	pop    esi
5f0046ed:	5b                   	pop    ebx
5f0046ee:	83 c4 40             	add    esp,0x40
5f0046f1:	c2 10 00             	ret    0x10
5f0046f4:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
5f0046f8:	5f                   	pop    edi
5f0046f9:	5e                   	pop    esi
5f0046fa:	5b                   	pop    ebx
5f0046fb:	c7 00 01 00 00 00    	mov    DWORD PTR [eax],0x1
5f004701:	b8 ec 03 00 00       	mov    eax,0x3ec
5f004706:	83 c4 40             	add    esp,0x40
5f004709:	c2 10 00             	ret    0x10
5f00470c:	cc                   	int3
5f00470d:	cc                   	int3
5f00470e:	cc                   	int3
5f00470f:	cc                   	int3
5f004710:	83 ec 04             	sub    esp,0x4
5f004713:	83 7c 24 0c 01       	cmp    DWORD PTR [esp+0xc],0x1
5f004718:	56                   	push   esi
5f004719:	0f 85 bd 00 00 00    	jne    0x5f0047dc
5f00471f:	68 50 c2 00 5f       	push   0x5f00c250
5f004724:	ff 15 f4 d1 00 5f    	call   DWORD PTR ds:0x5f00d1f4
5f00472a:	68 34 c2 00 5f       	push   0x5f00c234
5f00472f:	50                   	push   eax
5f004730:	ff 15 f8 d1 00 5f    	call   DWORD PTR ds:0x5f00d1f8
5f004736:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
5f00473a:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
5f00473e:	85 c0                	test   eax,eax
5f004740:	74 05                	je     0x5f004747
5f004742:	56                   	push   esi
5f004743:	ff 54 24 08          	call   DWORD PTR [esp+0x8]
5f004747:	68 20 52 00 5f       	push   0x5f005220
5f00474c:	ff 15 08 d2 00 5f    	call   DWORD PTR ds:0x5f00d208
5f004752:	68 20 52 00 5f       	push   0x5f005220
5f004757:	ff 15 30 d2 00 5f    	call   DWORD PTR ds:0x5f00d230
5f00475d:	89 35 5c 52 00 5f    	mov    DWORD PTR ds:0x5f00525c,esi
5f004763:	89 35 58 52 00 5f    	mov    DWORD PTR ds:0x5f005258,esi
5f004769:	ff 15 18 d2 00 5f    	call   DWORD PTR ds:0x5f00d218
5f00476f:	66 0f b6 c8          	movzx  cx,al
5f004773:	66 c1 e1 08          	shl    cx,0x8
5f004777:	66 0f b6 d4          	movzx  dx,ah
5f00477b:	66 0b ca             	or     cx,dx
5f00477e:	a9 00 00 00 80       	test   eax,0x80000000
5f004783:	66 89 0d 60 52 00 5f 	mov    WORD PTR ds:0x5f005260,cx
5f00478a:	74 10                	je     0x5f00479c
5f00478c:	66 c7 05 62 52 00 5f 	mov    WORD PTR ds:0x5f005262,0x10
5f004793:	10 00 
5f004795:	66 81 f9 5f 03       	cmp    cx,0x35f
5f00479a:	72 09                	jb     0x5f0047a5
5f00479c:	66 c7 05 62 52 00 5f 	mov    WORD PTR ds:0x5f005262,0x20
5f0047a3:	20 00 
5f0047a5:	6a 07                	push   0x7
5f0047a7:	8b 35 74 d2 00 5f    	mov    esi,DWORD PTR ds:0x5f00d274
5f0047ad:	ff d6                	call   esi
5f0047af:	48                   	dec    eax
5f0047b0:	6a 08                	push   0x8
5f0047b2:	a3 94 a3 00 5f       	mov    ds:0x5f00a394,eax
5f0047b7:	ff d6                	call   esi
5f0047b9:	48                   	dec    eax
5f0047ba:	6a 04                	push   0x4
5f0047bc:	a3 98 a3 00 5f       	mov    ds:0x5f00a398,eax
5f0047c1:	ff d6                	call   esi
5f0047c3:	6a 1e                	push   0x1e
5f0047c5:	a3 9c a3 00 5f       	mov    ds:0x5f00a39c,eax
5f0047ca:	ff d6                	call   esi
5f0047cc:	68 20 52 00 5f       	push   0x5f005220
5f0047d1:	a3 a0 a3 00 5f       	mov    ds:0x5f00a3a0,eax
5f0047d6:	ff 15 28 d2 00 5f    	call   DWORD PTR ds:0x5f00d228
5f0047dc:	b8 01 00 00 00       	mov    eax,0x1
5f0047e1:	5e                   	pop    esi
5f0047e2:	83 c4 04             	add    esp,0x4
5f0047e5:	c2 0c 00             	ret    0xc
5f0047e8:	cc                   	int3
5f0047e9:	cc                   	int3
5f0047ea:	cc                   	int3
5f0047eb:	cc                   	int3
5f0047ec:	cc                   	int3
5f0047ed:	cc                   	int3
5f0047ee:	cc                   	int3
5f0047ef:	cc                   	int3
5f0047f0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
5f0047f4:	53                   	push   ebx
5f0047f5:	56                   	push   esi
5f0047f6:	57                   	push   edi
5f0047f7:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
5f0047fb:	55                   	push   ebp
5f0047fc:	6a 02                	push   0x2
5f0047fe:	50                   	push   eax
5f0047ff:	56                   	push   esi
5f004800:	ff 15 04 d2 00 5f    	call   DWORD PTR ds:0x5f00d204
5f004806:	8b f8                	mov    edi,eax
5f004808:	85 ff                	test   edi,edi
5f00480a:	75 09                	jne    0x5f004815
5f00480c:	33 c0                	xor    eax,eax
5f00480e:	5d                   	pop    ebp
5f00480f:	5f                   	pop    edi
5f004810:	5e                   	pop    esi
5f004811:	5b                   	pop    ebx
5f004812:	c2 20 00             	ret    0x20
5f004815:	57                   	push   edi
5f004816:	56                   	push   esi
5f004817:	ff 15 00 d2 00 5f    	call   DWORD PTR ds:0x5f00d200
5f00481d:	8b d8                	mov    ebx,eax
5f00481f:	57                   	push   edi
5f004820:	56                   	push   esi
5f004821:	ff 15 38 d2 00 5f    	call   DWORD PTR ds:0x5f00d238
5f004827:	8b f0                	mov    esi,eax
5f004829:	85 f6                	test   esi,esi
5f00482b:	75 09                	jne    0x5f004836
5f00482d:	33 c0                	xor    eax,eax
5f00482f:	5d                   	pop    ebp
5f004830:	5f                   	pop    edi
5f004831:	5e                   	pop    esi
5f004832:	5b                   	pop    ebx
5f004833:	c2 20 00             	ret    0x20
5f004836:	53                   	push   ebx
5f004837:	6a 40                	push   0x40
5f004839:	ff 15 34 d2 00 5f    	call   DWORD PTR ds:0x5f00d234
5f00483f:	8b e8                	mov    ebp,eax
5f004841:	85 ed                	test   ebp,ebp
5f004843:	75 09                	jne    0x5f00484e
5f004845:	33 c0                	xor    eax,eax
5f004847:	5d                   	pop    ebp
5f004848:	5f                   	pop    edi
5f004849:	5e                   	pop    esi
5f00484a:	5b                   	pop    ebx
5f00484b:	c2 20 00             	ret    0x20
5f00484e:	8b fd                	mov    edi,ebp
5f004850:	8b cb                	mov    ecx,ebx
5f004852:	c1 e9 02             	shr    ecx,0x2
5f004855:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
5f004857:	8b cb                	mov    ecx,ebx
5f004859:	83 e1 03             	and    ecx,0x3
5f00485c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
5f00485e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
5f004862:	33 c9                	xor    ecx,ecx
5f004864:	8a cc                	mov    cl,ah
5f004866:	33 d2                	xor    edx,edx
5f004868:	c1 e1 08             	shl    ecx,0x8
5f00486b:	8a d0                	mov    dl,al
5f00486d:	c1 e2 10             	shl    edx,0x10
5f004870:	c1 e8 10             	shr    eax,0x10
5f004873:	0b ca                	or     ecx,edx
5f004875:	33 d2                	xor    edx,edx
5f004877:	8a d0                	mov    dl,al
5f004879:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
5f00487d:	0b ca                	or     ecx,edx
5f00487f:	33 d2                	xor    edx,edx
5f004881:	8a d0                	mov    dl,al
5f004883:	89 4d 28             	mov    DWORD PTR [ebp+0x28],ecx
5f004886:	c1 e2 10             	shl    edx,0x10
5f004889:	33 c9                	xor    ecx,ecx
5f00488b:	8a cc                	mov    cl,ah
5f00488d:	c1 e1 08             	shl    ecx,0x8
5f004890:	c1 e8 10             	shr    eax,0x10
5f004893:	0b ca                	or     ecx,edx
5f004895:	33 d2                	xor    edx,edx
5f004897:	8a d0                	mov    dl,al
5f004899:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
5f00489d:	0b ca                	or     ecx,edx
5f00489f:	33 d2                	xor    edx,edx
5f0048a1:	8a d0                	mov    dl,al
5f0048a3:	89 4d 44             	mov    DWORD PTR [ebp+0x44],ecx
5f0048a6:	c1 e2 10             	shl    edx,0x10
5f0048a9:	33 c9                	xor    ecx,ecx
5f0048ab:	8a cc                	mov    cl,ah
5f0048ad:	c1 e1 08             	shl    ecx,0x8
5f0048b0:	c1 e8 10             	shr    eax,0x10
5f0048b3:	0b ca                	or     ecx,edx
5f0048b5:	33 d2                	xor    edx,edx
5f0048b7:	8a d0                	mov    dl,al
5f0048b9:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
5f0048bd:	0b ca                	or     ecx,edx
5f0048bf:	33 d2                	xor    edx,edx
5f0048c1:	8a d0                	mov    dl,al
5f0048c3:	89 4d 48             	mov    DWORD PTR [ebp+0x48],ecx
5f0048c6:	c1 e2 10             	shl    edx,0x10
5f0048c9:	33 c9                	xor    ecx,ecx
5f0048cb:	8a cc                	mov    cl,ah
5f0048cd:	c1 e1 08             	shl    ecx,0x8
5f0048d0:	c1 e8 10             	shr    eax,0x10
5f0048d3:	0b ca                	or     ecx,edx
5f0048d5:	33 d2                	xor    edx,edx
5f0048d7:	8a d0                	mov    dl,al
5f0048d9:	0b ca                	or     ecx,edx
5f0048db:	89 4d 64             	mov    DWORD PTR [ebp+0x64],ecx
5f0048de:	33 c9                	xor    ecx,ecx
5f0048e0:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
5f0048e4:	c1 e8 10             	shr    eax,0x10
5f0048e7:	8a 4c 24 2d          	mov    cl,BYTE PTR [esp+0x2d]
5f0048eb:	c1 e1 08             	shl    ecx,0x8
5f0048ee:	33 d2                	xor    edx,edx
5f0048f0:	8a d0                	mov    dl,al
5f0048f2:	33 c0                	xor    eax,eax
5f0048f4:	0b ca                	or     ecx,edx
5f0048f6:	8a 44 24 2c          	mov    al,BYTE PTR [esp+0x2c]
5f0048fa:	c1 e0 10             	shl    eax,0x10
5f0048fd:	0b c8                	or     ecx,eax
5f0048ff:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
5f004903:	c1 e8 10             	shr    eax,0x10
5f004906:	33 d2                	xor    edx,edx
5f004908:	8a d0                	mov    dl,al
5f00490a:	89 4d 54             	mov    DWORD PTR [ebp+0x54],ecx
5f00490d:	33 c9                	xor    ecx,ecx
5f00490f:	33 c0                	xor    eax,eax
5f004911:	8a 4c 24 31          	mov    cl,BYTE PTR [esp+0x31]
5f004915:	8a 44 24 30          	mov    al,BYTE PTR [esp+0x30]
5f004919:	c1 e1 08             	shl    ecx,0x8
5f00491c:	6a 00                	push   0x0
5f00491e:	c1 e0 10             	shl    eax,0x10
5f004921:	0b ca                	or     ecx,edx
5f004923:	0b c8                	or     ecx,eax
5f004925:	89 4d 50             	mov    DWORD PTR [ebp+0x50],ecx
5f004928:	ff 15 78 d2 00 5f    	call   DWORD PTR ds:0x5f00d278
5f00492e:	8b f8                	mov    edi,eax
5f004930:	6a 00                	push   0x0
5f004932:	55                   	push   ebp
5f004933:	8d 45 68             	lea    eax,[ebp+0x68]
5f004936:	50                   	push   eax
5f004937:	6a 04                	push   0x4
5f004939:	55                   	push   ebp
5f00493a:	57                   	push   edi
5f00493b:	ff 15 b0 d1 00 5f    	call   DWORD PTR ds:0x5f00d1b0
5f004941:	8b f0                	mov    esi,eax
5f004943:	57                   	push   edi
5f004944:	6a 00                	push   0x0
5f004946:	ff 15 4c d2 00 5f    	call   DWORD PTR ds:0x5f00d24c
5f00494c:	55                   	push   ebp
5f00494d:	ff 15 f0 d1 00 5f    	call   DWORD PTR ds:0x5f00d1f0
5f004953:	8b c6                	mov    eax,esi
5f004955:	5d                   	pop    ebp
5f004956:	5f                   	pop    edi
5f004957:	5e                   	pop    esi
5f004958:	5b                   	pop    ebx
5f004959:	c2 20 00             	ret    0x20
5f00495c:	51                   	push   ecx
5f00495d:	8b cc                	mov    ecx,esp
5f00495f:	83 c1 08             	add    ecx,0x8
5f004962:	3d 00 10 00 00       	cmp    eax,0x1000
5f004967:	72 10                	jb     0x5f004979
5f004969:	81 e9 00 10 00 00    	sub    ecx,0x1000
5f00496f:	83 09 00             	or     DWORD PTR [ecx],0x0
5f004972:	2d 00 10 00 00       	sub    eax,0x1000
5f004977:	eb e9                	jmp    0x5f004962
5f004979:	2b c8                	sub    ecx,eax
5f00497b:	83 09 00             	or     DWORD PTR [ecx],0x0
5f00497e:	8b c4                	mov    eax,esp
5f004980:	8b e1                	mov    esp,ecx
5f004982:	8b 08                	mov    ecx,DWORD PTR [eax]
5f004984:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
5f004987:	ff e0                	jmp    eax
5f004989:	cc                   	int3
5f00498a:	ff 25 3c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d23c
5f004990:	ff 25 40 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d240
5f004996:	ff 25 44 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d244
5f00499c:	ff 25 28 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d228
5f0049a2:	ff 25 30 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d230
5f0049a8:	ff 25 2c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d22c
5f0049ae:	ff 25 1c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d21c
5f0049b4:	ff 25 24 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d224
5f0049ba:	ff 25 20 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d220
5f0049c0:	ff 25 10 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d210
5f0049c6:	ff 25 18 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d218
5f0049cc:	ff 25 14 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d214
5f0049d2:	ff 25 fc d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1fc
5f0049d8:	ff 25 0c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d20c
5f0049de:	ff 25 08 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d208
5f0049e4:	ff 25 f8 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1f8
5f0049ea:	ff 25 f4 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1f4
5f0049f0:	ff 25 f0 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1f0
5f0049f6:	ff 25 34 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d234
5f0049fc:	ff 25 38 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d238
5f004a02:	ff 25 00 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d200
5f004a08:	ff 25 04 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d204
5f004a0e:	ff 25 00 d3 00 5f    	jmp    DWORD PTR ds:0x5f00d300
5f004a14:	ff 25 fc d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2fc
5f004a1a:	ff 25 f8 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2f8
5f004a20:	ff 25 f4 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2f4
5f004a26:	ff 25 f0 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2f0
5f004a2c:	ff 25 ec d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2ec
5f004a32:	ff 25 e8 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2e8
5f004a38:	ff 25 e4 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2e4
5f004a3e:	ff 25 e0 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2e0
5f004a44:	ff 25 dc d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2dc
5f004a4a:	ff 25 d8 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2d8
5f004a50:	ff 25 d4 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2d4
5f004a56:	ff 25 d0 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2d0
5f004a5c:	ff 25 cc d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2cc
5f004a62:	ff 25 a4 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2a4
5f004a68:	ff 25 5c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d25c
5f004a6e:	ff 25 58 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d258
5f004a74:	ff 25 4c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d24c
5f004a7a:	ff 25 50 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d250
5f004a80:	ff 25 54 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d254
5f004a86:	ff 25 04 d3 00 5f    	jmp    DWORD PTR ds:0x5f00d304
5f004a8c:	ff 25 08 d3 00 5f    	jmp    DWORD PTR ds:0x5f00d308
5f004a92:	ff 25 64 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d264
5f004a98:	ff 25 68 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d268
5f004a9e:	ff 25 6c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d26c
5f004aa4:	ff 25 70 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d270
5f004aaa:	ff 25 74 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d274
5f004ab0:	ff 25 78 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d278
5f004ab6:	ff 25 7c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d27c
5f004abc:	ff 25 80 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d280
5f004ac2:	ff 25 84 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d284
5f004ac8:	ff 25 88 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d288
5f004ace:	ff 25 8c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d28c
5f004ad4:	ff 25 90 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d290
5f004ada:	ff 25 94 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d294
5f004ae0:	ff 25 98 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d298
5f004ae6:	ff 25 9c d2 00 5f    	jmp    DWORD PTR ds:0x5f00d29c
5f004aec:	ff 25 a0 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2a0
5f004af2:	ff 25 60 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d260
5f004af8:	ff 25 a8 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2a8
5f004afe:	ff 25 ac d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2ac
5f004b04:	ff 25 b0 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2b0
5f004b0a:	ff 25 b4 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2b4
5f004b10:	ff 25 b8 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2b8
5f004b16:	ff 25 bc d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2bc
5f004b1c:	ff 25 c0 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2c0
5f004b22:	ff 25 c4 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2c4
5f004b28:	ff 25 c8 d2 00 5f    	jmp    DWORD PTR ds:0x5f00d2c8
5f004b2e:	ff 25 bc d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1bc
5f004b34:	ff 25 b4 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1b4
5f004b3a:	ff 25 b8 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1b8
5f004b40:	ff 25 c8 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1c8
5f004b46:	ff 25 c0 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1c0
5f004b4c:	ff 25 c4 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1c4
5f004b52:	ff 25 d4 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1d4
5f004b58:	ff 25 cc d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1cc
5f004b5e:	ff 25 d0 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1d0
5f004b64:	ff 25 e0 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1e0
5f004b6a:	ff 25 d8 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1d8
5f004b70:	ff 25 dc d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1dc
5f004b76:	ff 25 e8 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1e8
5f004b7c:	ff 25 e4 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1e4
5f004b82:	ff 25 b0 d1 00 5f    	jmp    DWORD PTR ds:0x5f00d1b0
