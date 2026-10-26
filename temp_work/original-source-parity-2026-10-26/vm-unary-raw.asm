
RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005fbf00 <.text+0x1faf00>:
  5fbf00:	00 8b ce 88 16 e8    	add    BYTE PTR [ebx-0x17e97732],cl
  5fbf06:	96                   	xchg   esi,eax
  5fbf07:	81 e0 ff bf f4 16    	and    eax,0x16f4bfff
  5fbf0d:	6b 00 83             	imul   eax,DWORD PTR [eax],0xffffff83
  5fbf10:	c9                   	leave
  5fbf11:	ff 33                	push   DWORD PTR [ebx]
  5fbf13:	c0 f2 ae             	shl    dl,0xae
  5fbf16:	f7 d1                	not    ecx
  5fbf18:	49                   	dec    ecx
  5fbf19:	51                   	push   ecx
  5fbf1a:	68 f4 16 6b 00       	push   0x6b16f4
  5fbf1f:	8b ce                	mov    ecx,esi
  5fbf21:	e8 ca 81 e0 ff       	call   0x4040f0
  5fbf26:	8b c6                	mov    eax,esi
  5fbf28:	5f                   	pop    edi
  5fbf29:	5e                   	pop    esi
  5fbf2a:	5d                   	pop    ebp
  5fbf2b:	5b                   	pop    ebx
  5fbf2c:	59                   	pop    ecx
  5fbf2d:	c3                   	ret
  5fbf2e:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbf32:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbf36:	6a 00                	push   0x0
  5fbf38:	8b ce                	mov    ecx,esi
  5fbf3a:	88 06                	mov    BYTE PTR [esi],al
  5fbf3c:	e8 5f 81 e0 ff       	call   0x4040a0
  5fbf41:	bf f0 16 6b 00       	mov    edi,0x6b16f0
  5fbf46:	83 c9 ff             	or     ecx,0xffffffff
  5fbf49:	33 c0                	xor    eax,eax
  5fbf4b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbf4d:	f7 d1                	not    ecx
  5fbf4f:	49                   	dec    ecx
  5fbf50:	51                   	push   ecx
  5fbf51:	68 f0 16 6b 00       	push   0x6b16f0
  5fbf56:	8b ce                	mov    ecx,esi
  5fbf58:	e8 93 81 e0 ff       	call   0x4040f0
  5fbf5d:	8b c6                	mov    eax,esi
  5fbf5f:	5f                   	pop    edi
  5fbf60:	5e                   	pop    esi
  5fbf61:	5d                   	pop    ebp
  5fbf62:	5b                   	pop    ebx
  5fbf63:	59                   	pop    ecx
  5fbf64:	c3                   	ret
  5fbf65:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbf69:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fbf6d:	6a 00                	push   0x0
  5fbf6f:	88 0e                	mov    BYTE PTR [esi],cl
  5fbf71:	8b ce                	mov    ecx,esi
  5fbf73:	e8 28 81 e0 ff       	call   0x4040a0
  5fbf78:	bf ec 16 6b 00       	mov    edi,0x6b16ec
  5fbf7d:	83 c9 ff             	or     ecx,0xffffffff
  5fbf80:	33 c0                	xor    eax,eax
  5fbf82:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbf84:	f7 d1                	not    ecx
  5fbf86:	49                   	dec    ecx
  5fbf87:	51                   	push   ecx
  5fbf88:	68 ec 16 6b 00       	push   0x6b16ec
  5fbf8d:	8b ce                	mov    ecx,esi
  5fbf8f:	e8 5c 81 e0 ff       	call   0x4040f0
  5fbf94:	8b c6                	mov    eax,esi
  5fbf96:	5f                   	pop    edi
  5fbf97:	5e                   	pop    esi
  5fbf98:	5d                   	pop    ebp
  5fbf99:	5b                   	pop    ebx
  5fbf9a:	59                   	pop    ecx
  5fbf9b:	c3                   	ret
  5fbf9c:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbfa0:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fbfa4:	6a 00                	push   0x0
  5fbfa6:	8b ce                	mov    ecx,esi
  5fbfa8:	88 16                	mov    BYTE PTR [esi],dl
  5fbfaa:	e8 f1 80 e0 ff       	call   0x4040a0
  5fbfaf:	bf e4 16 6b 00       	mov    edi,0x6b16e4
  5fbfb4:	83 c9 ff             	or     ecx,0xffffffff
  5fbfb7:	33 c0                	xor    eax,eax
  5fbfb9:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbfbb:	f7 d1                	not    ecx
  5fbfbd:	49                   	dec    ecx
  5fbfbe:	51                   	push   ecx
  5fbfbf:	68 e4 16 6b 00       	push   0x6b16e4
  5fbfc4:	8b ce                	mov    ecx,esi
  5fbfc6:	e8 25 81 e0 ff       	call   0x4040f0
  5fbfcb:	8b c6                	mov    eax,esi
  5fbfcd:	5f                   	pop    edi
  5fbfce:	5e                   	pop    esi
  5fbfcf:	5d                   	pop    ebp
  5fbfd0:	5b                   	pop    ebx
  5fbfd1:	59                   	pop    ecx
  5fbfd2:	c3                   	ret
  5fbfd3:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fbfd7:	8a 44 24 18          	mov    al,BYTE PTR [esp+0x18]
  5fbfdb:	6a 00                	push   0x0
  5fbfdd:	8b ce                	mov    ecx,esi
  5fbfdf:	88 06                	mov    BYTE PTR [esi],al
  5fbfe1:	e8 ba 80 e0 ff       	call   0x4040a0
  5fbfe6:	bf dc 16 6b 00       	mov    edi,0x6b16dc
  5fbfeb:	83 c9 ff             	or     ecx,0xffffffff
  5fbfee:	33 c0                	xor    eax,eax
  5fbff0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fbff2:	f7 d1                	not    ecx
  5fbff4:	49                   	dec    ecx
  5fbff5:	51                   	push   ecx
  5fbff6:	68 dc 16 6b 00       	push   0x6b16dc
  5fbffb:	8b ce                	mov    ecx,esi
  5fbffd:	e8 ee 80 e0 ff       	call   0x4040f0
  5fc002:	8b c6                	mov    eax,esi
  5fc004:	5f                   	pop    edi
  5fc005:	5e                   	pop    esi
  5fc006:	5d                   	pop    ebp
  5fc007:	5b                   	pop    ebx
  5fc008:	59                   	pop    ecx
  5fc009:	c3                   	ret
  5fc00a:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fc00e:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fc012:	6a 00                	push   0x0
  5fc014:	88 0e                	mov    BYTE PTR [esi],cl
  5fc016:	8b ce                	mov    ecx,esi
  5fc018:	e8 83 80 e0 ff       	call   0x4040a0
  5fc01d:	bf d8 16 6b 00       	mov    edi,0x6b16d8
  5fc022:	83 c9 ff             	or     ecx,0xffffffff
  5fc025:	33 c0                	xor    eax,eax
  5fc027:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc029:	f7 d1                	not    ecx
  5fc02b:	49                   	dec    ecx
  5fc02c:	51                   	push   ecx
  5fc02d:	68 d8 16 6b 00       	push   0x6b16d8
  5fc032:	8b ce                	mov    ecx,esi
  5fc034:	e8 b7 80 e0 ff       	call   0x4040f0
  5fc039:	8b c6                	mov    eax,esi
  5fc03b:	5f                   	pop    edi
  5fc03c:	5e                   	pop    esi
  5fc03d:	5d                   	pop    ebp
  5fc03e:	5b                   	pop    ebx
  5fc03f:	59                   	pop    ecx
  5fc040:	c3                   	ret
  5fc041:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  5fc045:	8a 54 24 18          	mov    dl,BYTE PTR [esp+0x18]
  5fc049:	6a 00                	push   0x0
  5fc04b:	8b cb                	mov    ecx,ebx
  5fc04d:	88 13                	mov    BYTE PTR [ebx],dl
  5fc04f:	e8 4c 80 e0 ff       	call   0x4040a0
  5fc054:	bf d0 16 6b 00       	mov    edi,0x6b16d0
  5fc059:	83 c9 ff             	or     ecx,0xffffffff
  5fc05c:	33 c0                	xor    eax,eax
  5fc05e:	6a 01                	push   0x1
  5fc060:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc062:	f7 d1                	not    ecx
  5fc064:	49                   	dec    ecx
  5fc065:	8b e9                	mov    ebp,ecx
  5fc067:	8b cb                	mov    ecx,ebx
  5fc069:	55                   	push   ebp
  5fc06a:	e8 d1 58 e0 ff       	call   0x401940
  5fc06f:	84 c0                	test   al,al
  5fc071:	0f 84 04 fc ff ff    	je     0x5fbc7b
  5fc077:	8b cd                	mov    ecx,ebp
  5fc079:	be d0 16 6b 00       	mov    esi,0x6b16d0
  5fc07e:	e9 df fb ff ff       	jmp    0x5fbc62
  5fc083:	8b 74 24 18          	mov    esi,DWORD PTR [esp+0x18]
  5fc087:	8a 4c 24 18          	mov    cl,BYTE PTR [esp+0x18]
  5fc08b:	6a 00                	push   0x0
  5fc08d:	88 0e                	mov    BYTE PTR [esi],cl
  5fc08f:	8b ce                	mov    ecx,esi
  5fc091:	e8 0a 80 e0 ff       	call   0x4040a0
  5fc096:	bf c8 16 6b 00       	mov    edi,0x6b16c8
  5fc09b:	83 c9 ff             	or     ecx,0xffffffff
  5fc09e:	33 c0                	xor    eax,eax
  5fc0a0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc0a2:	f7 d1                	not    ecx
  5fc0a4:	49                   	dec    ecx
  5fc0a5:	51                   	push   ecx
  5fc0a6:	68 c8 16 6b 00       	push   0x6b16c8
  5fc0ab:	8b ce                	mov    ecx,esi
  5fc0ad:	e8 3e 80 e0 ff       	call   0x4040f0
  5fc0b2:	8b c6                	mov    eax,esi
  5fc0b4:	5f                   	pop    edi
  5fc0b5:	5e                   	pop    esi
  5fc0b6:	5d                   	pop    ebp
  5fc0b7:	5b                   	pop    ebx
  5fc0b8:	59                   	pop    ecx
  5fc0b9:	c3                   	ret
  5fc0ba:	8b ff                	mov    edi,edi
  5fc0bc:	c8 ba 5f 00          	enter  0x5fba,0x0
  5fc0c0:	16                   	push   ss
  5fc0c1:	bb 5f 00 bb bb       	mov    ebx,0xbbbb005f
  5fc0c6:	5f                   	pop    edi
  5fc0c7:	00 f2                	add    dl,dh
  5fc0c9:	bb 5f 00 84 bb       	mov    ebx,0xbb84005f
  5fc0ce:	5f                   	pop    edi
  5fc0cf:	00 4d bb             	add    BYTE PTR [ebp-0x45],cl
  5fc0d2:	5f                   	pop    edi
  5fc0d3:	00 29                	add    BYTE PTR [ecx],ch
  5fc0d5:	bc 5f 00 83 bc       	mov    esp,0xbc83005f
  5fc0da:	5f                   	pop    edi
  5fc0db:	00 ba bc 5f 00 f1    	add    BYTE PTR [edx-0xeffa044],bh
  5fc0e1:	bc 5f 00 28 bd       	mov    esp,0xbd28005f
  5fc0e6:	5f                   	pop    edi
  5fc0e7:	00 5f bd             	add    BYTE PTR [edi-0x43],bl
  5fc0ea:	5f                   	pop    edi
  5fc0eb:	00 3b                	add    BYTE PTR [ebx],bh
  5fc0ed:	be 5f 00 89 be       	mov    esi,0xbe89005f
  5fc0f2:	5f                   	pop    edi
  5fc0f3:	00 c0                	add    al,al
  5fc0f5:	be 5f 00 96 bd       	mov    esi,0xbd96005f
  5fc0fa:	5f                   	pop    edi
  5fc0fb:	00 cd                	add    ch,cl
  5fc0fd:	bd 5f 00 04 be       	mov    ebp,0xbe04005f
  5fc102:	5f                   	pop    edi
  5fc103:	00 f7                	add    bh,dh
  5fc105:	be 5f 00 2e bf       	mov    esi,0xbf2e005f
  5fc10a:	5f                   	pop    edi
  5fc10b:	00 65 bf             	add    BYTE PTR [ebp-0x41],ah
  5fc10e:	5f                   	pop    edi
  5fc10f:	00 9c bf 5f 00 d3 bf 	add    BYTE PTR [edi+edi*4-0x402cffa1],bl
  5fc116:	5f                   	pop    edi
  5fc117:	00 83 c0 5f 00 41    	add    BYTE PTR [ebx+0x41005fc0],al
  5fc11d:	c0 5f 00 0a          	rcr    BYTE PTR [edi+0x0],0xa
  5fc121:	c0 5f 00 90          	rcr    BYTE PTR [edi+0x0],0x90
  5fc125:	90                   	nop
  5fc126:	90                   	nop
  5fc127:	90                   	nop
  5fc128:	90                   	nop
  5fc129:	90                   	nop
  5fc12a:	90                   	nop
  5fc12b:	90                   	nop
  5fc12c:	90                   	nop
  5fc12d:	90                   	nop
  5fc12e:	90                   	nop
  5fc12f:	90                   	nop
  5fc130:	56                   	push   esi
  5fc131:	57                   	push   edi
  5fc132:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  5fc136:	8b f1                	mov    esi,ecx
  5fc138:	57                   	push   edi
  5fc139:	e8 f2 af ff ff       	call   0x5f7130
  5fc13e:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5fc141:	8b cf                	mov    ecx,edi
  5fc143:	50                   	push   eax
  5fc144:	e8 57 dc fe ff       	call   0x5e9da0
  5fc149:	5f                   	pop    edi
  5fc14a:	5e                   	pop    esi
  5fc14b:	c2 04 00             	ret    0x4
  5fc14e:	90                   	nop
  5fc14f:	90                   	nop
  5fc150:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5fc154:	56                   	push   esi
  5fc155:	57                   	push   edi
  5fc156:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  5fc15a:	50                   	push   eax
  5fc15b:	8b f1                	mov    esi,ecx
  5fc15d:	57                   	push   edi
  5fc15e:	e8 0d b0 ff ff       	call   0x5f7170
  5fc163:	8b cf                	mov    ecx,edi
  5fc165:	e8 a6 dd fe ff       	call   0x5e9f10
  5fc16a:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fc16d:	5f                   	pop    edi
  5fc16e:	5e                   	pop    esi
  5fc16f:	c2 08 00             	ret    0x8
  5fc172:	90                   	nop
  5fc173:	90                   	nop
  5fc174:	90                   	nop
  5fc175:	90                   	nop
  5fc176:	90                   	nop
  5fc177:	90                   	nop
  5fc178:	90                   	nop
  5fc179:	90                   	nop
  5fc17a:	90                   	nop
  5fc17b:	90                   	nop
  5fc17c:	90                   	nop
  5fc17d:	90                   	nop
  5fc17e:	90                   	nop
  5fc17f:	90                   	nop
  5fc180:	6a ff                	push   0xffffffff
  5fc182:	68 10 8b 64 00       	push   0x648b10
  5fc187:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fc18d:	50                   	push   eax
  5fc18e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fc195:	83 ec 30             	sub    esp,0x30
  5fc198:	55                   	push   ebp
  5fc199:	56                   	push   esi
  5fc19a:	8b f1                	mov    esi,ecx
  5fc19c:	57                   	push   edi
  5fc19d:	8b 06                	mov    eax,DWORD PTR [esi]
  5fc19f:	ff 50 10             	call   DWORD PTR [eax+0x10]
  5fc1a2:	8b 7c 24 4c          	mov    edi,DWORD PTR [esp+0x4c]
  5fc1a6:	8b 10                	mov    edx,DWORD PTR [eax]
  5fc1a8:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5fc1ac:	57                   	push   edi
  5fc1ad:	51                   	push   ecx
  5fc1ae:	8b c8                	mov    ecx,eax
  5fc1b0:	ff 52 08             	call   DWORD PTR [edx+0x8]
  5fc1b3:	8b 56 10             	mov    edx,DWORD PTR [esi+0x10]
  5fc1b6:	50                   	push   eax
  5fc1b7:	8d 44 24 10          	lea    eax,[esp+0x10]
  5fc1bb:	52                   	push   edx
  5fc1bc:	50                   	push   eax
  5fc1bd:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
  5fc1c4:	00 
  5fc1c5:	e8 b6 02 00 00       	call   0x5fc480
  5fc1ca:	83 c4 0c             	add    esp,0xc
  5fc1cd:	8b e8                	mov    ebp,eax
  5fc1cf:	8b 16                	mov    edx,DWORD PTR [esi]
  5fc1d1:	8b ce                	mov    ecx,esi
  5fc1d3:	c6 44 24 44 01       	mov    BYTE PTR [esp+0x44],0x1
  5fc1d8:	ff 52 14             	call   DWORD PTR [edx+0x14]
  5fc1db:	8b 10                	mov    edx,DWORD PTR [eax]
  5fc1dd:	55                   	push   ebp
  5fc1de:	57                   	push   edi
  5fc1df:	8b c8                	mov    ecx,eax
  5fc1e1:	ff 52 0c             	call   DWORD PTR [edx+0xc]
  5fc1e4:	be d4 0a 65 00       	mov    esi,0x650ad4
  5fc1e9:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  5fc1ed:	c6 44 24 44 00       	mov    BYTE PTR [esp+0x44],0x0
  5fc1f2:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  5fc1f6:	e8 05 6d fe ff       	call   0x5e2f00
  5fc1fb:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5fc1ff:	c7 44 24 44 ff ff ff 	mov    DWORD PTR [esp+0x44],0xffffffff
  5fc206:	ff 
  5fc207:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5fc20b:	e8 f0 6c fe ff       	call   0x5e2f00
  5fc210:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  5fc214:	5f                   	pop    edi
  5fc215:	5e                   	pop    esi
  5fc216:	5d                   	pop    ebp
  5fc217:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc21e:	83 c4 3c             	add    esp,0x3c
  5fc221:	c2 04 00             	ret    0x4
  5fc224:	90                   	nop
  5fc225:	90                   	nop
  5fc226:	90                   	nop
  5fc227:	90                   	nop
  5fc228:	90                   	nop
  5fc229:	90                   	nop
  5fc22a:	90                   	nop
  5fc22b:	90                   	nop
  5fc22c:	90                   	nop
  5fc22d:	90                   	nop
  5fc22e:	90                   	nop
  5fc22f:	90                   	nop
  5fc230:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fc236:	6a ff                	push   0xffffffff
  5fc238:	68 58 8b 64 00       	push   0x648b58
  5fc23d:	50                   	push   eax
  5fc23e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fc245:	83 ec 70             	sub    esp,0x70
  5fc248:	33 c0                	xor    eax,eax
  5fc24a:	53                   	push   ebx
  5fc24b:	55                   	push   ebp
  5fc24c:	56                   	push   esi
  5fc24d:	8b e9                	mov    ebp,ecx
  5fc24f:	57                   	push   edi
  5fc250:	bf 90 17 6b 00       	mov    edi,0x6b1790
  5fc255:	83 c9 ff             	or     ecx,0xffffffff
  5fc258:	8b b4 24 90 00 00 00 	mov    esi,DWORD PTR [esp+0x90]
  5fc25f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc261:	f7 d1                	not    ecx
  5fc263:	49                   	dec    ecx
  5fc264:	6a 01                	push   0x1
  5fc266:	8b d9                	mov    ebx,ecx
  5fc268:	8b ce                	mov    ecx,esi
  5fc26a:	53                   	push   ebx
  5fc26b:	e8 d0 56 e0 ff       	call   0x401940
  5fc270:	84 c0                	test   al,al
  5fc272:	74 25                	je     0x5fc299
  5fc274:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  5fc277:	8b cb                	mov    ecx,ebx
  5fc279:	8b c1                	mov    eax,ecx
  5fc27b:	be 90 17 6b 00       	mov    esi,0x6b1790
  5fc280:	c1 e9 02             	shr    ecx,0x2
  5fc283:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fc285:	8b c8                	mov    ecx,eax
  5fc287:	53                   	push   ebx
  5fc288:	83 e1 03             	and    ecx,0x3
  5fc28b:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5fc28d:	8b 8c 24 94 00 00 00 	mov    ecx,DWORD PTR [esp+0x94]
  5fc294:	e8 f7 7e e0 ff       	call   0x404190
  5fc299:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  5fc29c:	8b cd                	mov    ecx,ebp
  5fc29e:	ff 52 10             	call   DWORD PTR [edx+0x10]
  5fc2a1:	8b 10                	mov    edx,DWORD PTR [eax]
  5fc2a3:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  5fc2a7:	51                   	push   ecx
  5fc2a8:	8b c8                	mov    ecx,eax
  5fc2aa:	ff 52 04             	call   DWORD PTR [edx+0x4]
  5fc2ad:	8b f0                	mov    esi,eax
  5fc2af:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc2b2:	8d 44 24 30          	lea    eax,[esp+0x30]
  5fc2b6:	52                   	push   edx
  5fc2b7:	50                   	push   eax
  5fc2b8:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x0
  5fc2bf:	00 00 00 00 
  5fc2c3:	e8 e8 f7 ff ff       	call   0x5fbab0
  5fc2c8:	83 c4 08             	add    esp,0x8
  5fc2cb:	8b f8                	mov    edi,eax
  5fc2cd:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  5fc2d0:	8b cd                	mov    ecx,ebp
  5fc2d2:	c6 84 24 88 00 00 00 	mov    BYTE PTR [esp+0x88],0x1
  5fc2d9:	01 
  5fc2da:	ff 52 14             	call   DWORD PTR [edx+0x14]
  5fc2dd:	8b 10                	mov    edx,DWORD PTR [eax]
  5fc2df:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5fc2e3:	51                   	push   ecx
  5fc2e4:	8b c8                	mov    ecx,eax
  5fc2e6:	ff 52 04             	call   DWORD PTR [edx+0x4]
  5fc2e9:	68 8c 67 6a 00       	push   0x6a678c
  5fc2ee:	8d 54 24 14          	lea    edx,[esp+0x14]
  5fc2f2:	50                   	push   eax
  5fc2f3:	52                   	push   edx
  5fc2f4:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x2
  5fc2fb:	02 
  5fc2fc:	e8 cf 07 e1 ff       	call   0x40cad0
  5fc301:	57                   	push   edi
  5fc302:	50                   	push   eax
  5fc303:	8d 44 24 74          	lea    eax,[esp+0x74]
  5fc307:	c6 84 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],0x3
  5fc30e:	03 
  5fc30f:	50                   	push   eax
  5fc310:	e8 5b 20 e5 ff       	call   0x44e370
  5fc315:	68 60 34 69 00       	push   0x693460
  5fc31a:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  5fc31e:	50                   	push   eax
  5fc31f:	51                   	push   ecx
  5fc320:	c6 84 24 ac 00 00 00 	mov    BYTE PTR [esp+0xac],0x4
  5fc327:	04 
  5fc328:	e8 a3 07 e1 ff       	call   0x40cad0
  5fc32d:	56                   	push   esi
  5fc32e:	8d 54 24 68          	lea    edx,[esp+0x68]
  5fc332:	b3 05                	mov    bl,0x5
  5fc334:	50                   	push   eax
  5fc335:	52                   	push   edx
  5fc336:	88 9c 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],bl
  5fc33d:	e8 2e 20 e5 ff       	call   0x44e370
  5fc342:	83 c4 30             	add    esp,0x30
  5fc345:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  5fc34b:	33 f6                	xor    esi,esi
  5fc34d:	51                   	push   ecx
  5fc34e:	8b 8c 24 98 00 00 00 	mov    ecx,DWORD PTR [esp+0x98]
  5fc355:	56                   	push   esi
  5fc356:	50                   	push   eax
  5fc357:	c6 84 24 94 00 00 00 	mov    BYTE PTR [esp+0x94],0x6
  5fc35e:	06 
  5fc35f:	e8 9c 08 e1 ff       	call   0x40cc00
  5fc364:	6a 01                	push   0x1
  5fc366:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  5fc36a:	88 9c 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],bl
  5fc371:	e8 2a 7d e0 ff       	call   0x4040a0
  5fc376:	6a 01                	push   0x1
  5fc378:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5fc37c:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x4
  5fc383:	04 
  5fc384:	e8 17 7d e0 ff       	call   0x4040a0
  5fc389:	6a 01                	push   0x1
  5fc38b:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  5fc38f:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x3
  5fc396:	03 
  5fc397:	e8 04 7d e0 ff       	call   0x4040a0
  5fc39c:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5fc3a0:	3b c6                	cmp    eax,esi
  5fc3a2:	74 1c                	je     0x5fc3c0
  5fc3a4:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  5fc3a7:	48                   	dec    eax
  5fc3a8:	84 c9                	test   cl,cl
  5fc3aa:	74 0b                	je     0x5fc3b7
  5fc3ac:	80 f9 ff             	cmp    cl,0xff
  5fc3af:	74 06                	je     0x5fc3b7
  5fc3b1:	fe c9                	dec    cl
  5fc3b3:	88 08                	mov    BYTE PTR [eax],cl
  5fc3b5:	eb 09                	jmp    0x5fc3c0
  5fc3b7:	50                   	push   eax
  5fc3b8:	e8 33 22 00 00       	call   0x5fe5f0
  5fc3bd:	83 c4 04             	add    esp,0x4
  5fc3c0:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5fc3c4:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  5fc3c8:	3b c6                	cmp    eax,esi
  5fc3ca:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  5fc3ce:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  5fc3d2:	74 1d                	je     0x5fc3f1
  5fc3d4:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fc3d7:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fc3da:	84 c0                	test   al,al
  5fc3dc:	74 0a                	je     0x5fc3e8
  5fc3de:	3c ff                	cmp    al,0xff
  5fc3e0:	74 06                	je     0x5fc3e8
  5fc3e2:	fe c8                	dec    al
  5fc3e4:	88 01                	mov    BYTE PTR [ecx],al
  5fc3e6:	eb 09                	jmp    0x5fc3f1
  5fc3e8:	51                   	push   ecx
  5fc3e9:	e8 02 22 00 00       	call   0x5fe5f0
  5fc3ee:	83 c4 04             	add    esp,0x4
  5fc3f1:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5fc3f5:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5fc3f9:	3b c6                	cmp    eax,esi
  5fc3fb:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  5fc3ff:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  5fc403:	74 1d                	je     0x5fc422
  5fc405:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fc408:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fc40b:	84 c0                	test   al,al
  5fc40d:	74 0a                	je     0x5fc419
  5fc40f:	3c ff                	cmp    al,0xff
  5fc411:	74 06                	je     0x5fc419
  5fc413:	fe c8                	dec    al
  5fc415:	88 01                	mov    BYTE PTR [ecx],al
  5fc417:	eb 09                	jmp    0x5fc422
  5fc419:	51                   	push   ecx
  5fc41a:	e8 d1 21 00 00       	call   0x5fe5f0
  5fc41f:	83 c4 04             	add    esp,0x4
  5fc422:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
  5fc426:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  5fc42a:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
  5fc42e:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
  5fc432:	5f                   	pop    edi
  5fc433:	3b c6                	cmp    eax,esi
  5fc435:	5e                   	pop    esi
  5fc436:	5d                   	pop    ebp
  5fc437:	5b                   	pop    ebx
  5fc438:	74 2c                	je     0x5fc466
  5fc43a:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fc43d:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fc440:	84 c0                	test   al,al
  5fc442:	74 19                	je     0x5fc45d
  5fc444:	3c ff                	cmp    al,0xff
  5fc446:	74 15                	je     0x5fc45d
  5fc448:	fe c8                	dec    al
  5fc44a:	88 01                	mov    BYTE PTR [ecx],al
  5fc44c:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  5fc450:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc457:	83 c4 7c             	add    esp,0x7c
  5fc45a:	c2 08 00             	ret    0x8
  5fc45d:	51                   	push   ecx
  5fc45e:	e8 8d 21 00 00       	call   0x5fe5f0
  5fc463:	83 c4 04             	add    esp,0x4
  5fc466:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  5fc46a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc471:	83 c4 7c             	add    esp,0x7c
  5fc474:	c2 08 00             	ret    0x8
  5fc477:	90                   	nop
  5fc478:	90                   	nop
  5fc479:	90                   	nop
  5fc47a:	90                   	nop
  5fc47b:	90                   	nop
  5fc47c:	90                   	nop
  5fc47d:	90                   	nop
  5fc47e:	90                   	nop
  5fc47f:	90                   	nop
  5fc480:	55                   	push   ebp
  5fc481:	8b ec                	mov    ebp,esp
  5fc483:	83 e4 f8             	and    esp,0xfffffff8
  5fc486:	6a ff                	push   0xffffffff
  5fc488:	68 ae 8b 64 00       	push   0x648bae
  5fc48d:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fc493:	50                   	push   eax
  5fc494:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fc49b:	81 ec ac 00 00 00    	sub    esp,0xac
  5fc4a1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  5fc4a4:	53                   	push   ebx
  5fc4a5:	33 db                	xor    ebx,ebx
  5fc4a7:	56                   	push   esi
  5fc4a8:	57                   	push   edi
  5fc4a9:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  5fc4ad:	ff 24 85 90 cb 5f 00 	jmp    DWORD PTR [eax*4+0x5fcb90]
  5fc4b4:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc4b7:	83 78 08 02          	cmp    DWORD PTR [eax+0x8],0x2
  5fc4bb:	75 15                	jne    0x5fc4d2
  5fc4bd:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  5fc4c0:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc4c3:	f7 d9                	neg    ecx
  5fc4c5:	51                   	push   ecx
  5fc4c6:	8b ce                	mov    ecx,esi
  5fc4c8:	e8 c3 7d ff ff       	call   0x5f4290
  5fc4cd:	e9 32 01 00 00       	jmp    0x5fc604
  5fc4d2:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc4d5:	d9 e0                	fchs
  5fc4d7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc4da:	83 ec 08             	sub    esp,0x8
  5fc4dd:	8b ce                	mov    ecx,esi
  5fc4df:	dd 1c 24             	fstp   QWORD PTR [esp]
  5fc4e2:	e8 89 7d ff ff       	call   0x5f4270
  5fc4e7:	e9 18 01 00 00       	jmp    0x5fc604
  5fc4ec:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc4ef:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc4f2:	33 d2                	xor    edx,edx
  5fc4f4:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
  5fc4f7:	85 c9                	test   ecx,ecx
  5fc4f9:	0f 94 c2             	sete   dl
  5fc4fc:	52                   	push   edx
  5fc4fd:	8b ce                	mov    ecx,esi
  5fc4ff:	e8 8c 7d ff ff       	call   0x5f4290
  5fc504:	e9 fb 00 00 00       	jmp    0x5fc604
  5fc509:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc50c:	db 41 10             	fild   DWORD PTR [ecx+0x10]
  5fc50f:	eb c6                	jmp    0x5fc4d7
  5fc511:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc514:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
  5fc517:	50                   	push   eax
  5fc518:	8d 84 24 9c 00 00 00 	lea    eax,[esp+0x9c]
  5fc51f:	68 18 08 69 00       	push   0x690818
  5fc524:	50                   	push   eax
  5fc525:	e8 e6 ab fe ff       	call   0x5e7110
  5fc52a:	83 c4 0c             	add    esp,0xc
  5fc52d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc530:	50                   	push   eax
  5fc531:	8b ce                	mov    ecx,esi
  5fc533:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x0
  5fc53a:	00 00 00 00 
  5fc53e:	e8 9d 66 fe ff       	call   0x5e2be0
  5fc543:	6a 01                	push   0x1
  5fc545:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  5fc54c:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc552:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc559:	ff ff ff ff 
  5fc55d:	e8 3e 7b e0 ff       	call   0x4040a0
  5fc562:	8b c6                	mov    eax,esi
  5fc564:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc56b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc572:	5f                   	pop    edi
  5fc573:	5e                   	pop    esi
  5fc574:	5b                   	pop    ebx
  5fc575:	8b e5                	mov    esp,ebp
  5fc577:	5d                   	pop    ebp
  5fc578:	c3                   	ret
  5fc579:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc57c:	8b 51 10             	mov    edx,DWORD PTR [ecx+0x10]
  5fc57f:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  5fc583:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  5fc586:	8b c8                	mov    ecx,eax
  5fc588:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5fc58c:	51                   	push   ecx
  5fc58d:	52                   	push   edx
  5fc58e:	8d 84 24 80 00 00 00 	lea    eax,[esp+0x80]
  5fc595:	68 98 17 6b 00       	push   0x6b1798
  5fc59a:	50                   	push   eax
  5fc59b:	e8 70 ab fe ff       	call   0x5e7110
  5fc5a0:	83 c4 10             	add    esp,0x10
  5fc5a3:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc5a6:	50                   	push   eax
  5fc5a7:	8b ce                	mov    ecx,esi
  5fc5a9:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x1
  5fc5b0:	01 00 00 00 
  5fc5b4:	e8 27 66 fe ff       	call   0x5e2be0
  5fc5b9:	6a 01                	push   0x1
  5fc5bb:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  5fc5bf:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc5c5:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc5cc:	ff ff ff ff 
  5fc5d0:	e8 cb 7a e0 ff       	call   0x4040a0
  5fc5d5:	8b c6                	mov    eax,esi
  5fc5d7:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc5de:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc5e5:	5f                   	pop    edi
  5fc5e6:	5e                   	pop    esi
  5fc5e7:	5b                   	pop    ebx
  5fc5e8:	8b e5                	mov    esp,ebp
  5fc5ea:	5d                   	pop    ebp
  5fc5eb:	c3                   	ret
  5fc5ec:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc5ef:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc5f2:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc5f5:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fc5fc:	e8 1f e5 00 00       	call   0x60ab20
  5fc601:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fc604:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc60a:	8b c6                	mov    eax,esi
  5fc60c:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc613:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc61a:	5f                   	pop    edi
  5fc61b:	5e                   	pop    esi
  5fc61c:	5b                   	pop    ebx
  5fc61d:	8b e5                	mov    esp,ebp
  5fc61f:	5d                   	pop    ebp
  5fc620:	c3                   	ret
  5fc621:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc624:	8d 54 24 58          	lea    edx,[esp+0x58]
  5fc628:	52                   	push   edx
  5fc629:	e8 e2 13 e6 ff       	call   0x45da10
  5fc62e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5fc631:	85 c0                	test   eax,eax
  5fc633:	75 05                	jne    0x5fc63a
  5fc635:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5fc63a:	50                   	push   eax
  5fc63b:	e8 d0 e8 00 00       	call   0x60af10
  5fc640:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc643:	83 c4 04             	add    esp,0x4
  5fc646:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  5fc64a:	6a 01                	push   0x1
  5fc64c:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fc653:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fc656:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc65c:	e8 3f 7a e0 ff       	call   0x4040a0
  5fc661:	8b c6                	mov    eax,esi
  5fc663:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc66a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc671:	5f                   	pop    edi
  5fc672:	5e                   	pop    esi
  5fc673:	5b                   	pop    ebx
  5fc674:	8b e5                	mov    esp,ebp
  5fc676:	5d                   	pop    ebp
  5fc677:	c3                   	ret
  5fc678:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc67b:	8d 44 24 28          	lea    eax,[esp+0x28]
  5fc67f:	50                   	push   eax
  5fc680:	e8 8b 13 e6 ff       	call   0x45da10
  5fc685:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5fc688:	85 c0                	test   eax,eax
  5fc68a:	75 05                	jne    0x5fc691
  5fc68c:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5fc691:	50                   	push   eax
  5fc692:	e8 b5 23 01 00       	call   0x60ea4c
  5fc697:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc69a:	83 c4 04             	add    esp,0x4
  5fc69d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5fc6a1:	dd 5e 10             	fstp   QWORD PTR [esi+0x10]
  5fc6a4:	6a 01                	push   0x1
  5fc6a6:	c7 46 08 01 00 00 00 	mov    DWORD PTR [esi+0x8],0x1
  5fc6ad:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc6b3:	e8 e8 79 e0 ff       	call   0x4040a0
  5fc6b8:	8b c6                	mov    eax,esi
  5fc6ba:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc6c1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc6c8:	5f                   	pop    edi
  5fc6c9:	5e                   	pop    esi
  5fc6ca:	5b                   	pop    ebx
  5fc6cb:	8b e5                	mov    esp,ebp
  5fc6cd:	5d                   	pop    ebp
  5fc6ce:	c3                   	ret
  5fc6cf:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc6d2:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc6d5:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc6d8:	dc 05 a0 c5 64 00    	fadd   QWORD PTR ds:0x64c5a0
  5fc6de:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fc6e5:	e9 12 ff ff ff       	jmp    0x5fc5fc
  5fc6ea:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc6ed:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc6f0:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc6f3:	d9 f2                	fptan
  5fc6f5:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc6fc:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc702:	dd d8                	fstp   st(0)
  5fc704:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc707:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc70e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc715:	5f                   	pop    edi
  5fc716:	5e                   	pop    esi
  5fc717:	5b                   	pop    ebx
  5fc718:	8b e5                	mov    esp,ebp
  5fc71a:	5d                   	pop    ebp
  5fc71b:	c3                   	ret
  5fc71c:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc71f:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc722:	d9 fe                	fsin
  5fc724:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc727:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc72e:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc734:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc737:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc73e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc745:	5f                   	pop    edi
  5fc746:	5e                   	pop    esi
  5fc747:	5b                   	pop    ebx
  5fc748:	8b e5                	mov    esp,ebp
  5fc74a:	5d                   	pop    ebp
  5fc74b:	c3                   	ret
  5fc74c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc74f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc752:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc755:	d9 ff                	fcos
  5fc757:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc75e:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc764:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc767:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc76e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc775:	5f                   	pop    edi
  5fc776:	5e                   	pop    esi
  5fc777:	5b                   	pop    ebx
  5fc778:	8b e5                	mov    esp,ebp
  5fc77a:	5d                   	pop    ebp
  5fc77b:	c3                   	ret
  5fc77c:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc77f:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc782:	e8 89 e9 00 00       	call   0x60b110
  5fc787:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc78a:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc78d:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc794:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc79a:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc7a1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc7a8:	5f                   	pop    edi
  5fc7a9:	5e                   	pop    esi
  5fc7aa:	5b                   	pop    ebx
  5fc7ab:	8b e5                	mov    esp,ebp
  5fc7ad:	5d                   	pop    ebp
  5fc7ae:	c3                   	ret
  5fc7af:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc7b2:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc7b5:	e8 16 15 01 00       	call   0x60dcd0
  5fc7ba:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc7bd:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc7c0:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc7c7:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc7cd:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc7d4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc7db:	5f                   	pop    edi
  5fc7dc:	5e                   	pop    esi
  5fc7dd:	5b                   	pop    ebx
  5fc7de:	8b e5                	mov    esp,ebp
  5fc7e0:	5d                   	pop    ebp
  5fc7e1:	c3                   	ret
  5fc7e2:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc7e5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc7e8:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc7eb:	d9 e8                	fld1
  5fc7ed:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc7f4:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc7fa:	d9 f3                	fpatan
  5fc7fc:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc7ff:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc806:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc80d:	5f                   	pop    edi
  5fc80e:	5e                   	pop    esi
  5fc80f:	5b                   	pop    ebx
  5fc810:	8b e5                	mov    esp,ebp
  5fc812:	5d                   	pop    ebp
  5fc813:	c3                   	ret
  5fc814:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc817:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc81a:	e8 99 22 01 00       	call   0x60eab8
  5fc81f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc822:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc825:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc82c:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc832:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc839:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc840:	5f                   	pop    edi
  5fc841:	5e                   	pop    esi
  5fc842:	5b                   	pop    ebx
  5fc843:	8b e5                	mov    esp,ebp
  5fc845:	5d                   	pop    ebp
  5fc846:	c3                   	ret
  5fc847:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc84a:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc84d:	e8 77 22 01 00       	call   0x60eac9
  5fc852:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc855:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc858:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc85f:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc865:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc86c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc873:	5f                   	pop    edi
  5fc874:	5e                   	pop    esi
  5fc875:	5b                   	pop    ebx
  5fc876:	8b e5                	mov    esp,ebp
  5fc878:	5d                   	pop    ebp
  5fc879:	c3                   	ret
  5fc87a:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc87d:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc880:	e8 3d 22 01 00       	call   0x60eac2
  5fc885:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc888:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc88b:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc892:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc898:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc89f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc8a6:	5f                   	pop    edi
  5fc8a7:	5e                   	pop    esi
  5fc8a8:	5b                   	pop    ebx
  5fc8a9:	8b e5                	mov    esp,ebp
  5fc8ab:	5d                   	pop    ebp
  5fc8ac:	c3                   	ret
  5fc8ad:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc8b0:	dd 42 10             	fld    QWORD PTR [edx+0x10]
  5fc8b3:	d9 ec                	fldlg2
  5fc8b5:	d9 c9                	fxch   st(1)
  5fc8b7:	d9 f1                	fyl2x
  5fc8b9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  5fc8bc:	c7 40 08 01 00 00 00 	mov    DWORD PTR [eax+0x8],0x1
  5fc8c3:	c7 00 d4 0a 65 00    	mov    DWORD PTR [eax],0x650ad4
  5fc8c9:	dd 58 10             	fstp   QWORD PTR [eax+0x10]
  5fc8cc:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc8d3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc8da:	5f                   	pop    edi
  5fc8db:	5e                   	pop    esi
  5fc8dc:	5b                   	pop    ebx
  5fc8dd:	8b e5                	mov    esp,ebp
  5fc8df:	5d                   	pop    ebp
  5fc8e0:	c3                   	ret
  5fc8e1:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
  5fc8e4:	dd 40 10             	fld    QWORD PTR [eax+0x10]
  5fc8e7:	d9 ea                	fldl2e
  5fc8e9:	de c9                	fmulp  st(1),st
  5fc8eb:	d9 c0                	fld    st(0)
  5fc8ed:	d9 fc                	frndint
  5fc8ef:	d9 c9                	fxch   st(1)
  5fc8f1:	d8 e1                	fsub   st,st(1)
  5fc8f3:	d9 f0                	f2xm1
  5fc8f5:	d9 e8                	fld1
  5fc8f7:	de c1                	faddp  st(1),st
  5fc8f9:	d9 fd                	fscale
  5fc8fb:	dd d9                	fstp   st(1)
  5fc8fd:	e9 d5 fb ff ff       	jmp    0x5fc4d7
  5fc902:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc905:	dd 41 10             	fld    QWORD PTR [ecx+0x10]
  5fc908:	d9 ed                	fldln2
  5fc90a:	eb a9                	jmp    0x5fc8b5
  5fc90c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc90f:	8d 54 24 38          	lea    edx,[esp+0x38]
  5fc913:	52                   	push   edx
  5fc914:	e8 f7 10 e6 ff       	call   0x45da10
  5fc919:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5fc91c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc91f:	50                   	push   eax
  5fc920:	8b ce                	mov    ecx,esi
  5fc922:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x2
  5fc929:	02 00 00 00 
  5fc92d:	e8 5e 79 ff ff       	call   0x5f4290
  5fc932:	6a 01                	push   0x1
  5fc934:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5fc938:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc93e:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc945:	ff ff ff ff 
  5fc949:	e8 52 77 e0 ff       	call   0x4040a0
  5fc94e:	8b c6                	mov    eax,esi
  5fc950:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc957:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc95e:	5f                   	pop    edi
  5fc95f:	5e                   	pop    esi
  5fc960:	5b                   	pop    ebx
  5fc961:	8b e5                	mov    esp,ebp
  5fc963:	5d                   	pop    ebp
  5fc964:	c3                   	ret
  5fc965:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc968:	83 ec 10             	sub    esp,0x10
  5fc96b:	8b c4                	mov    eax,esp
  5fc96d:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  5fc971:	50                   	push   eax
  5fc972:	e8 99 10 e6 ff       	call   0x45da10
  5fc977:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  5fc97b:	51                   	push   ecx
  5fc97c:	e8 7f 02 00 00       	call   0x5fcc00
  5fc981:	83 c4 14             	add    esp,0x14
  5fc984:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc987:	50                   	push   eax
  5fc988:	8b ce                	mov    ecx,esi
  5fc98a:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x3
  5fc991:	03 00 00 00 
  5fc995:	e8 46 62 fe ff       	call   0x5e2be0
  5fc99a:	6a 01                	push   0x1
  5fc99c:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5fc9a0:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc9a6:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc9ad:	ff ff ff ff 
  5fc9b1:	e8 ea 76 e0 ff       	call   0x4040a0
  5fc9b6:	8b c6                	mov    eax,esi
  5fc9b8:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc9bf:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc9c6:	5f                   	pop    edi
  5fc9c7:	5e                   	pop    esi
  5fc9c8:	5b                   	pop    ebx
  5fc9c9:	8b e5                	mov    esp,ebp
  5fc9cb:	5d                   	pop    ebp
  5fc9cc:	c3                   	ret
  5fc9cd:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc9d0:	6a 00                	push   0x0
  5fc9d2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5fc9d6:	c6 44 24 11 00       	mov    BYTE PTR [esp+0x11],0x0
  5fc9db:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
  5fc9de:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  5fc9e2:	8a 44 24 10          	mov    al,BYTE PTR [esp+0x10]
  5fc9e6:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  5fc9ea:	e8 b1 76 e0 ff       	call   0x4040a0
  5fc9ef:	8d 7c 24 0c          	lea    edi,[esp+0xc]
  5fc9f3:	83 c9 ff             	or     ecx,0xffffffff
  5fc9f6:	33 c0                	xor    eax,eax
  5fc9f8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc9fa:	f7 d1                	not    ecx
  5fc9fc:	49                   	dec    ecx
  5fc9fd:	51                   	push   ecx
  5fc9fe:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5fca02:	51                   	push   ecx
  5fca03:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5fca07:	e8 e4 76 e0 ff       	call   0x4040f0
  5fca0c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fca0f:	8d 54 24 18          	lea    edx,[esp+0x18]
  5fca13:	52                   	push   edx
  5fca14:	8b ce                	mov    ecx,esi
  5fca16:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x4
  5fca1d:	04 00 00 00 
  5fca21:	e8 ba 61 fe ff       	call   0x5e2be0
  5fca26:	6a 01                	push   0x1
  5fca28:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5fca2c:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fca32:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fca39:	ff ff ff ff 
  5fca3d:	e8 5e 76 e0 ff       	call   0x4040a0
  5fca42:	8b c6                	mov    eax,esi
  5fca44:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fca4b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fca52:	5f                   	pop    edi
  5fca53:	5e                   	pop    esi
  5fca54:	5b                   	pop    ebx
  5fca55:	8b e5                	mov    esp,ebp
  5fca57:	5d                   	pop    ebp
  5fca58:	c3                   	ret
  5fca59:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  5fca5c:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  5fca63:	50                   	push   eax
  5fca64:	8b ce                	mov    ecx,esi
  5fca66:	e8 a5 0f e6 ff       	call   0x45da10
  5fca6b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5fca6e:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x5
  5fca75:	05 00 00 00 
  5fca79:	85 c0                	test   eax,eax
  5fca7b:	74 25                	je     0x5fcaa2
  5fca7d:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  5fca81:	51                   	push   ecx
  5fca82:	8b ce                	mov    ecx,esi
  5fca84:	e8 87 0f e6 ff       	call   0x45da10
  5fca89:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5fca8c:	bb 02 00 00 00       	mov    ebx,0x2
  5fca91:	85 c0                	test   eax,eax
  5fca93:	75 05                	jne    0x5fca9a
  5fca95:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5fca9a:	33 d2                	xor    edx,edx
  5fca9c:	8a 10                	mov    dl,BYTE PTR [eax]
  5fca9e:	8b c2                	mov    eax,edx
  5fcaa0:	eb 02                	jmp    0x5fcaa4
  5fcaa2:	33 c0                	xor    eax,eax
  5fcaa4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fcaa7:	83 cb 01             	or     ebx,0x1
  5fcaaa:	f6 c3 02             	test   bl,0x2
  5fcaad:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fcab4:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fcab7:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fcabd:	74 0b                	je     0x5fcaca
  5fcabf:	6a 01                	push   0x1
  5fcac1:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  5fcac5:	e8 d6 75 e0 ff       	call   0x4040a0
  5fcaca:	6a 01                	push   0x1
  5fcacc:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  5fcad3:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fcada:	ff ff ff ff 
  5fcade:	e8 bd 75 e0 ff       	call   0x4040a0
  5fcae3:	8b c6                	mov    eax,esi
  5fcae5:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fcaec:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcaf3:	5f                   	pop    edi
  5fcaf4:	5e                   	pop    esi
  5fcaf5:	5b                   	pop    ebx
  5fcaf6:	8b e5                	mov    esp,ebp
  5fcaf8:	5d                   	pop    ebp
  5fcaf9:	c3                   	ret
  5fcafa:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fcafd:	83 ec 10             	sub    esp,0x10
  5fcb00:	8b c4                	mov    eax,esp
  5fcb02:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  5fcb06:	50                   	push   eax
  5fcb07:	e8 04 0f e6 ff       	call   0x45da10
  5fcb0c:	8d 8c 24 b8 00 00 00 	lea    ecx,[esp+0xb8]
  5fcb13:	51                   	push   ecx
  5fcb14:	e8 d7 01 00 00       	call   0x5fccf0
  5fcb19:	83 c4 14             	add    esp,0x14
  5fcb1c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fcb1f:	50                   	push   eax
  5fcb20:	8b ce                	mov    ecx,esi
  5fcb22:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x6
  5fcb29:	06 00 00 00 
  5fcb2d:	e8 ae 60 fe ff       	call   0x5e2be0
  5fcb32:	8b 84 24 ac 00 00 00 	mov    eax,DWORD PTR [esp+0xac]
  5fcb39:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fcb3f:	85 c0                	test   eax,eax
  5fcb41:	0f 84 c3 fa ff ff    	je     0x5fc60a
  5fcb47:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fcb4a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fcb4d:	84 c0                	test   al,al
  5fcb4f:	74 1f                	je     0x5fcb70
  5fcb51:	3c ff                	cmp    al,0xff
  5fcb53:	74 1b                	je     0x5fcb70
  5fcb55:	fe c8                	dec    al
  5fcb57:	88 01                	mov    BYTE PTR [ecx],al
  5fcb59:	8b c6                	mov    eax,esi
  5fcb5b:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fcb62:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcb69:	5f                   	pop    edi
  5fcb6a:	5e                   	pop    esi
  5fcb6b:	5b                   	pop    ebx
  5fcb6c:	8b e5                	mov    esp,ebp
  5fcb6e:	5d                   	pop    ebp
  5fcb6f:	c3                   	ret
  5fcb70:	51                   	push   ecx
  5fcb71:	e8 7a 1a 00 00       	call   0x5fe5f0
  5fcb76:	8b 8c 24 bc 00 00 00 	mov    ecx,DWORD PTR [esp+0xbc]
  5fcb7d:	83 c4 04             	add    esp,0x4
  5fcb80:	8b c6                	mov    eax,esi
  5fcb82:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcb89:	5f                   	pop    edi
  5fcb8a:	5e                   	pop    esi
  5fcb8b:	5b                   	pop    ebx
  5fcb8c:	8b e5                	mov    esp,ebp
  5fcb8e:	5d                   	pop    ebp
  5fcb8f:	c3                   	ret
  5fcb90:	b4 c4                	mov    ah,0xc4
  5fcb92:	5f                   	pop    edi
  5fcb93:	00 ec                	add    ah,ch
  5fcb95:	c4 5f 00             	les    ebx,FWORD PTR [edi+0x0]
  5fcb98:	09 c5                	or     ebp,eax
  5fcb9a:	5f                   	pop    edi
  5fcb9b:	00 11                	add    BYTE PTR [ecx],dl
  5fcb9d:	c5 5f 00             	lds    ebx,FWORD PTR [edi+0x0]
  5fcba0:	79 c5                	jns    0x5fcb67
  5fcba2:	5f                   	pop    edi
  5fcba3:	00 ec                	add    ah,ch
  5fcba5:	c5 5f 00             	lds    ebx,FWORD PTR [edi+0x0]
  5fcba8:	21 c6                	and    esi,eax
  5fcbaa:	5f                   	pop    edi
  5fcbab:	00 78 c6             	add    BYTE PTR [eax-0x3a],bh
  5fcbae:	5f                   	pop    edi
  5fcbaf:	00 cf                	add    bh,cl
  5fcbb1:	c6                   	(bad)
  5fcbb2:	5f                   	pop    edi
  5fcbb3:	00 1c c7             	add    BYTE PTR [edi+eax*8],bl
  5fcbb6:	5f                   	pop    edi
  5fcbb7:	00 4c c7 5f          	add    BYTE PTR [edi+eax*8+0x5f],cl
  5fcbbb:	00 ea                	add    dl,ch
  5fcbbd:	c6                   	(bad)
  5fcbbe:	5f                   	pop    edi
  5fcbbf:	00 14 c8             	add    BYTE PTR [eax+ecx*8],dl
  5fcbc2:	5f                   	pop    edi
  5fcbc3:	00 47 c8             	add    BYTE PTR [edi-0x38],al
  5fcbc6:	5f                   	pop    edi
  5fcbc7:	00 7a c8             	add    BYTE PTR [edx-0x38],bh
  5fcbca:	5f                   	pop    edi
  5fcbcb:	00 7c c7 5f          	add    BYTE PTR [edi+eax*8+0x5f],bh
  5fcbcf:	00 af c7 5f 00 e2    	add    BYTE PTR [edi-0x1dffa039],ch
  5fcbd5:	c7                   	(bad)
  5fcbd6:	5f                   	pop    edi
  5fcbd7:	00 ad c8 5f 00 e1    	add    BYTE PTR [ebp-0x1effa038],ch
  5fcbdd:	c8 5f 00 02          	enter  0x5f,0x2
  5fcbe1:	c9                   	leave
  5fcbe2:	5f                   	pop    edi
  5fcbe3:	00 0c c9             	add    BYTE PTR [ecx+ecx*8],cl
  5fcbe6:	5f                   	pop    edi
  5fcbe7:	00 65 c9             	add    BYTE PTR [ebp-0x37],ah
  5fcbea:	5f                   	pop    edi
  5fcbeb:	00 fa                	add    dl,bh
  5fcbed:	ca 5f 00             	retf   0x5f
  5fcbf0:	59                   	pop    ecx
  5fcbf1:	ca 5f 00             	retf   0x5f
  5fcbf4:	cd c9                	int    0xc9
  5fcbf6:	5f                   	pop    edi
  5fcbf7:	00 90 90 90 90 90    	add    BYTE PTR [eax-0x6f6f6f70],dl
  5fcbfd:	90                   	nop
  5fcbfe:	90                   	nop
  5fcbff:	90                   	nop
  5fcc00:	55                   	push   ebp
  5fcc01:	8b ec                	mov    ebp,esp
  5fcc03:	6a ff                	push   0xffffffff
  5fcc05:	68 c8 8b 64 00       	push   0x648bc8
  5fcc0a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fcc10:	50                   	push   eax
  5fcc11:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fcc18:	51                   	push   ecx
  5fcc19:	53                   	push   ebx
  5fcc1a:	56                   	push   esi
  5fcc1b:	33 f6                	xor    esi,esi
  5fcc1d:	57                   	push   edi
  5fcc1e:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
  5fcc21:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  5fcc24:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
  5fcc27:	83 c0 04             	add    eax,0x4
  5fcc2a:	24 fc                	and    al,0xfc
  5fcc2c:	e8 3f 13 01 00       	call   0x60df70
  5fcc31:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
  5fcc34:	8b d4                	mov    edx,esp
  5fcc36:	3b fe                	cmp    edi,esi
  5fcc38:	75 05                	jne    0x5fcc3f
  5fcc3a:	bf b4 a3 64 00       	mov    edi,0x64a3b4
  5fcc3f:	83 c9 ff             	or     ecx,0xffffffff
  5fcc42:	33 c0                	xor    eax,eax
  5fcc44:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fcc46:	f7 d1                	not    ecx
  5fcc48:	2b f9                	sub    edi,ecx
  5fcc4a:	52                   	push   edx
  5fcc4b:	8b c1                	mov    eax,ecx
  5fcc4d:	8b f7                	mov    esi,edi
  5fcc4f:	8b fa                	mov    edi,edx
  5fcc51:	c1 e9 02             	shr    ecx,0x2
  5fcc54:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fcc56:	8b c8                	mov    ecx,eax
  5fcc58:	83 e1 03             	and    ecx,0x3
  5fcc5b:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5fcc5d:	e8 c6 2a 02 00       	call   0x61f728
  5fcc62:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  5fcc65:	8a 4d 0b             	mov    cl,BYTE PTR [ebp+0xb]
  5fcc68:	8b f0                	mov    esi,eax
  5fcc6a:	33 c0                	xor    eax,eax
  5fcc6c:	88 0b                	mov    BYTE PTR [ebx],cl
  5fcc6e:	8b fe                	mov    edi,esi
  5fcc70:	83 c9 ff             	or     ecx,0xffffffff
  5fcc73:	83 c4 04             	add    esp,0x4
  5fcc76:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
  5fcc79:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
  5fcc7c:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
  5fcc7f:	6a 01                	push   0x1
  5fcc81:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fcc83:	f7 d1                	not    ecx
  5fcc85:	49                   	dec    ecx
  5fcc86:	8b f9                	mov    edi,ecx
  5fcc88:	8b cb                	mov    ecx,ebx
  5fcc8a:	57                   	push   edi
  5fcc8b:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  5fcc8e:	e8 ad 4c e0 ff       	call   0x401940
  5fcc93:	84 c0                	test   al,al
  5fcc95:	74 1f                	je     0x5fccb6
  5fcc97:	8b cf                	mov    ecx,edi
  5fcc99:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  5fcc9c:	8b d1                	mov    edx,ecx
  5fcc9e:	c1 e9 02             	shr    ecx,0x2
  5fcca1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fcca3:	8b ca                	mov    ecx,edx
  5fcca5:	8b c2                	mov    eax,edx
  5fcca7:	83 e1 03             	and    ecx,0x3
  5fccaa:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5fccac:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  5fccaf:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
  5fccb2:	c6 04 08 00          	mov    BYTE PTR [eax+ecx*1],0x0
  5fccb6:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fccb9:	85 c9                	test   ecx,ecx
  5fccbb:	74 1c                	je     0x5fccd9
  5fccbd:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  5fccc0:	84 c0                	test   al,al
  5fccc2:	74 0b                	je     0x5fcccf
  5fccc4:	3c ff                	cmp    al,0xff
  5fccc6:	74 07                	je     0x5fcccf
  5fccc8:	fe c8                	dec    al
  5fccca:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  5fcccd:	eb 0a                	jmp    0x5fccd9
  5fcccf:	49                   	dec    ecx
  5fccd0:	51                   	push   ecx
  5fccd1:	e8 1a 19 00 00       	call   0x5fe5f0
  5fccd6:	83 c4 04             	add    esp,0x4
  5fccd9:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  5fccdc:	8d 65 e4             	lea    esp,[ebp-0x1c]
  5fccdf:	8b c3                	mov    eax,ebx
  5fcce1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcce8:	5f                   	pop    edi
  5fcce9:	5e                   	pop    esi
  5fccea:	5b                   	pop    ebx
  5fcceb:	8b e5                	mov    esp,ebp
  5fcced:	5d                   	pop    ebp
  5fccee:	c3                   	ret
  5fccef:	90                   	nop
  5fccf0:	55                   	push   ebp
  5fccf1:	8b ec                	mov    ebp,esp
  5fccf3:	6a ff                	push   0xffffffff
  5fccf5:	68 e8 8b 64 00       	push   0x648be8
  5fccfa:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fcd00:	50                   	push   eax
  5fcd01:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fcd08:	51                   	push   ecx
  5fcd09:	53                   	push   ebx
  5fcd0a:	56                   	push   esi
  5fcd0b:	33 f6                	xor    esi,esi
  5fcd0d:	57                   	push   edi
  5fcd0e:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
  5fcd11:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
  5fcd14:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
  5fcd17:	83 c0 04             	add    eax,0x4
  5fcd1a:	24 fc                	and    al,0xfc
  5fcd1c:	e8 4f 12 01 00       	call   0x60df70
  5fcd21:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
  5fcd24:	8b d4                	mov    edx,esp
  5fcd26:	3b fe                	cmp    edi,esi
  5fcd28:	75 05                	jne    0x5fcd2f
  5fcd2a:	bf b4 a3 64 00       	mov    edi,0x64a3b4
  5fcd2f:	83 c9 ff             	or     ecx,0xffffffff
  5fcd32:	33 c0                	xor    eax,eax
  5fcd34:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fcd36:	f7 d1                	not    ecx
  5fcd38:	2b f9                	sub    edi,ecx
  5fcd3a:	52                   	push   edx
  5fcd3b:	8b c1                	mov    eax,ecx
  5fcd3d:	8b f7                	mov    esi,edi
  5fcd3f:	8b fa                	mov    edi,edx
  5fcd41:	c1 e9 02             	shr    ecx,0x2
  5fcd44:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fcd46:	8b c8                	mov    ecx,eax
  5fcd48:	83 e1 03             	and    ecx,0x3
  5fcd4b:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5fcd4d:	e8 38 29 02 00       	call   0x61f68a
  5fcd52:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  5fcd55:	8a 4d 0b             	mov    cl,BYTE PTR [ebp+0xb]
  5fcd58:	8b f0                	mov    esi,eax
  5fcd5a:	33 c0                	xor    eax,eax
  5fcd5c:	88 0b                	mov    BYTE PTR [ebx],cl
  5fcd5e:	8b fe                	mov    edi,esi
  5fcd60:	83 c9 ff             	or     ecx,0xffffffff
  5fcd63:	83 c4 04             	add    esp,0x4
  5fcd66:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
  5fcd69:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
  5fcd6c:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
  5fcd6f:	6a 01                	push   0x1
  5fcd71:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fcd73:	f7 d1                	not    ecx
  5fcd75:	49                   	dec    ecx
  5fcd76:	8b f9                	mov    edi,ecx
  5fcd78:	8b cb                	mov    ecx,ebx
  5fcd7a:	57                   	push   edi
  5fcd7b:	89 7d 08             	mov    DWORD PTR [ebp+0x8],edi
  5fcd7e:	e8 bd 4b e0 ff       	call   0x401940
  5fcd83:	84 c0                	test   al,al
  5fcd85:	74 1f                	je     0x5fcda6
  5fcd87:	8b cf                	mov    ecx,edi
  5fcd89:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  5fcd8c:	8b d1                	mov    edx,ecx
  5fcd8e:	c1 e9 02             	shr    ecx,0x2
  5fcd91:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fcd93:	8b ca                	mov    ecx,edx
  5fcd95:	8b c2                	mov    eax,edx
  5fcd97:	83 e1 03             	and    ecx,0x3
  5fcd9a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5fcd9c:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  5fcd9f:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
  5fcda2:	c6 04 08 00          	mov    BYTE PTR [eax+ecx*1],0x0
  5fcda6:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fcda9:	85 c9                	test   ecx,ecx
  5fcdab:	74 1c                	je     0x5fcdc9
  5fcdad:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  5fcdb0:	84 c0                	test   al,al
  5fcdb2:	74 0b                	je     0x5fcdbf
  5fcdb4:	3c ff                	cmp    al,0xff
  5fcdb6:	74 07                	je     0x5fcdbf
  5fcdb8:	fe c8                	dec    al
  5fcdba:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  5fcdbd:	eb 0a                	jmp    0x5fcdc9
  5fcdbf:	49                   	dec    ecx
  5fcdc0:	51                   	push   ecx
  5fcdc1:	e8 2a 18 00 00       	call   0x5fe5f0
  5fcdc6:	83 c4 04             	add    esp,0x4
  5fcdc9:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  5fcdcc:	8d 65 e4             	lea    esp,[ebp-0x1c]
  5fcdcf:	8b c3                	mov    eax,ebx
  5fcdd1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcdd8:	5f                   	pop    edi
  5fcdd9:	5e                   	pop    esi
  5fcdda:	5b                   	pop    ebx
  5fcddb:	8b e5                	mov    esp,ebp
  5fcddd:	5d                   	pop    ebp
  5fcdde:	c3                   	ret
  5fcddf:	90                   	nop
  5fcde0:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  5fcde6:	b0 01                	mov    al,0x1
  5fcde8:	84 c8                	test   al,cl
  5fcdea:	75 08                	jne    0x5fcdf4
  5fcdec:	0a c8                	or     cl,al
  5fcdee:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  5fcdf4:	68 a0 1b 40 00       	push   0x401ba0
  5fcdf9:	e8 7d d7 00 00       	call   0x60a57b
  5fcdfe:	59                   	pop    ecx
  5fcdff:	c3                   	ret
  5fce00:	6a ff                	push   0xffffffff
  5fce02:	68 08 8c 64 00       	push   0x648c08
  5fce07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fce0d:	50                   	push   eax
  5fce0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fce15:	83 ec 18             	sub    esp,0x18
  5fce18:	53                   	push   ebx
  5fce19:	56                   	push   esi
  5fce1a:	8b f1                	mov    esi,ecx
  5fce1c:	57                   	push   edi
  5fce1d:	8b 06                	mov    eax,DWORD PTR [esi]
  5fce1f:	ff 50 10             	call   DWORD PTR [eax+0x10]
  5fce22:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
  5fce26:	8b 10                	mov    edx,DWORD PTR [eax]
  5fce28:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  5fce2c:	57                   	push   edi
  5fce2d:	51                   	push   ecx
  5fce2e:	8b c8                	mov    ecx,eax
  5fce30:	ff 52 08             	call   DWORD PTR [edx+0x8]
  5fce33:	8b d8                	mov    ebx,eax
  5fce35:	8b 16                	mov    edx,DWORD PTR [esi]
  5fce37:	8b ce                	mov    ecx,esi
  5fce39:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
  5fce40:	00 
  5fce41:	ff 52 14             	call   DWORD PTR [edx+0x14]
  5fce44:	8b 4e 10             	mov    ecx,DWORD PTR [esi+0x10]
  5fce47:	8b 10                	mov    edx,DWORD PTR [eax]
  5fce49:	51                   	push   ecx
  5fce4a:	53                   	push   ebx
  5fce4b:	57                   	push   edi
  5fce4c:	8b c8                	mov    ecx,eax
  5fce4e:	ff 52 14             	call   DWORD PTR [edx+0x14]
  5fce51:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  5fce55:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  5fce5c:	ff 
  5fce5d:	c7 44 24 0c d4 0a 65 	mov    DWORD PTR [esp+0xc],0x650ad4
  5fce64:	00 
  5fce65:	e8 96 60 fe ff       	call   0x5e2f00
  5fce6a:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  5fce6e:	5f                   	pop    edi
  5fce6f:	5e                   	pop    esi
  5fce70:	5b                   	pop    ebx
  5fce71:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fce78:	83 c4 24             	add    esp,0x24
  5fce7b:	c2 04 00             	ret    0x4
  5fce7e:	90                   	nop
  5fce7f:	90                   	nop
  5fce80:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fce86:	6a ff                	push   0xffffffff
  5fce88:	68 50 8c 64 00       	push   0x648c50
  5fce8d:	50                   	push   eax
  5fce8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5fce95:	83 ec 60             	sub    esp,0x60
  5fce98:	33 c0                	xor    eax,eax
  5fce9a:	53                   	push   ebx
  5fce9b:	55                   	push   ebp
  5fce9c:	56                   	push   esi
  5fce9d:	8b e9                	mov    ebp,ecx
  5fce9f:	57                   	push   edi
  5fcea0:	bf a0 17 6b 00       	mov    edi,0x6b17a0
  5fcea5:	83 c9 ff             	or     ecx,0xffffffff
  5fcea8:	8b b4 24 80 00 00 00 	mov    esi,DWORD PTR [esp+0x80]
  5fceaf:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fceb1:	f7 d1                	not    ecx
  5fceb3:	49                   	dec    ecx
  5fceb4:	6a 01                	push   0x1
  5fceb6:	8b d9                	mov    ebx,ecx
  5fceb8:	8b ce                	mov    ecx,esi
  5fceba:	53                   	push   ebx
  5fcebb:	e8 80 4a e0 ff       	call   0x401940
  5fcec0:	84 c0                	test   al,al
  5fcec2:	74 25                	je     0x5fcee9
  5fcec4:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  5fcec7:	8b cb                	mov    ecx,ebx
  5fcec9:	8b c1                	mov    eax,ecx
  5fcecb:	be a0 17 6b 00       	mov    esi,0x6b17a0
  5fced0:	c1 e9 02             	shr    ecx,0x2
  5fced3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  5fced5:	8b c8                	mov    ecx,eax
  5fced7:	53                   	push   ebx
  5fced8:	83 e1 03             	and    ecx,0x3
  5fcedb:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5fcedd:	8b 8c 24 84 00 00 00 	mov    ecx,DWORD PTR [esp+0x84]
  5fcee4:	e8 a7 72 e0 ff       	call   0x404190
  5fcee9:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  5fceec:	8b cd                	mov    ecx,ebp
  5fceee:	ff 52 10             	call   DWORD PTR [edx+0x10]
  5fcef1:	8b 10                	mov    edx,DWORD PTR [eax]
  5fcef3:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  5fcef7:	51                   	push   ecx
  5fcef8:	8b c8                	mov    ecx,eax
  5fcefa:	ff 52 04             	call   DWORD PTR [edx+0x4]
  5fcefd:	8b f0                	mov    esi,eax
  5fceff:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fcf02:	8d 44 24 30          	lea    eax,[esp+0x30]
  5fcf06:	52                   	push   edx
  5fcf07:	50                   	push   eax
  5fcf08:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x0
  5fcf0f:	00 00 00 00 
  5fcf13:	e8 88 b2 ff ff       	call   0x5f81a0
  5fcf18:	83 c4 08             	add    esp,0x8
  5fcf1b:	8b f8                	mov    edi,eax
  5fcf1d:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  5fcf20:	8b cd                	mov    ecx,ebp
  5fcf22:	c6 44 24 78 01       	mov    BYTE PTR [esp+0x78],0x1
  5fcf27:	ff 52 14             	call   DWORD PTR [edx+0x14]
  5fcf2a:	8b 10                	mov    edx,DWORD PTR [eax]
  5fcf2c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5fcf30:	51                   	push   ecx
  5fcf31:	8b c8                	mov    ecx,eax
  5fcf33:	ff 52 04             	call   DWORD PTR [edx+0x4]
  5fcf36:	57                   	push   edi
  5fcf37:	8d 54 24 14          	lea    edx,[esp+0x14]
  5fcf3b:	50                   	push   eax
  5fcf3c:	52                   	push   edx
  5fcf3d:	c6 84 24 84 00 00 00 	mov    BYTE PTR [esp+0x84],0x2
  5fcf44:	02 
  5fcf45:	e8 26 14 e5 ff       	call   0x44e370
  5fcf4a:	68 9c 17 6b 00       	push   0x6b179c
  5fcf4f:	50                   	push   eax
  5fcf50:	8d 44 24 64          	lea    eax,[esp+0x64]
  5fcf54:	c6 84 24 8c 00 00 00 	mov    BYTE PTR [esp+0x8c],0x3
  5fcf5b:	03 
  5fcf5c:	50                   	push   eax
  5fcf5d:	e8 6e fb e0 ff       	call   0x40cad0
  5fcf62:	56                   	push   esi
  5fcf63:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  5fcf67:	b3 04                	mov    bl,0x4
  5fcf69:	50                   	push   eax
  5fcf6a:	51                   	push   ecx
  5fcf6b:	88 9c 24 9c 00 00 00 	mov    BYTE PTR [esp+0x9c],bl
  5fcf72:	e8 f9 13 e5 ff       	call   0x44e370
  5fcf77:	83 c4 24             	add    esp,0x24
  5fcf7a:	8b 15 a8 ab 64 00    	mov    edx,DWORD PTR ds:0x64aba8
  5fcf80:	8b 8c 24 84 00 00 00 	mov    ecx,DWORD PTR [esp+0x84]
  5fcf87:	33 f6                	xor    esi,esi
  5fcf89:	52                   	push   edx
  5fcf8a:	56                   	push   esi
  5fcf8b:	50                   	push   eax
  5fcf8c:	c6 84 24 84 00 00 00 	mov    BYTE PTR [esp+0x84],0x5
  5fcf93:	05 
  5fcf94:	e8 67 fc e0 ff       	call   0x40cc00
  5fcf99:	6a 01                	push   0x1
  5fcf9b:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  5fcf9f:	88 5c 24 7c          	mov    BYTE PTR [esp+0x7c],bl
  5fcfa3:	e8 f8 70 e0 ff       	call   0x4040a0
  5fcfa8:	6a 01                	push   0x1
  5fcfaa:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5fcfae:	c6 44 24 7c 03       	mov    BYTE PTR [esp+0x7c],0x3
  5fcfb3:	e8 e8 70 e0 ff       	call   0x4040a0
  5fcfb8:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5fcfbc:	3b c6                	cmp    eax,esi
  5fcfbe:	74 1d                	je     0x5fcfdd
  5fcfc0:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fcfc3:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fcfc6:	84 c0                	test   al,al
  5fcfc8:	74 0a                	je     0x5fcfd4
  5fcfca:	3c ff                	cmp    al,0xff
  5fcfcc:	74 06                	je     0x5fcfd4
  5fcfce:	fe c8                	dec    al
  5fcfd0:	88 01                	mov    BYTE PTR [ecx],al
  5fcfd2:	eb 09                	jmp    0x5fcfdd
  5fcfd4:	51                   	push   ecx
  5fcfd5:	e8 16 16 00 00       	call   0x5fe5f0
  5fcfda:	83 c4 04             	add    esp,0x4
  5fcfdd:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5fcfe1:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  5fcfe5:	3b c6                	cmp    eax,esi
  5fcfe7:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  5fcfeb:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  5fcfef:	74 1d                	je     0x5fd00e
  5fcff1:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fcff4:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fcff7:	84 c0                	test   al,al
  5fcff9:	74 0a                	je     0x5fd005
  5fcffb:	3c ff                	cmp    al,0xff
  5fcffd:	74 06                	je     0x5fd005
  5fcfff:	fe c8                	dec    al
  5fd001:	88 01                	mov    BYTE PTR [ecx],al
  5fd003:	eb 09                	jmp    0x5fd00e
  5fd005:	51                   	push   ecx
  5fd006:	e8 e5 15 00 00       	call   0x5fe5f0
  5fd00b:	83 c4 04             	add    esp,0x4
  5fd00e:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  5fd012:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  5fd016:	3b c6                	cmp    eax,esi
  5fd018:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  5fd01c:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  5fd020:	74 1d                	je     0x5fd03f
  5fd022:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fd025:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fd028:	84 c0                	test   al,al
  5fd02a:	74 0a                	je     0x5fd036
  5fd02c:	3c ff                	cmp    al,0xff
  5fd02e:	74 06                	je     0x5fd036
  5fd030:	fe c8                	dec    al
  5fd032:	88 01                	mov    BYTE PTR [ecx],al
  5fd034:	eb 09                	jmp    0x5fd03f
  5fd036:	51                   	push   ecx
  5fd037:	e8 b4 15 00 00       	call   0x5fe5f0
  5fd03c:	83 c4 04             	add    esp,0x4
  5fd03f:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  5fd043:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  5fd047:	89 74 24 38          	mov    DWORD PTR [esp+0x38],esi
  5fd04b:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
  5fd04f:	5f                   	pop    edi
  5fd050:	3b c6                	cmp    eax,esi
  5fd052:	5e                   	pop    esi
  5fd053:	5d                   	pop    ebp
  5fd054:	5b                   	pop    ebx
  5fd055:	74 2c                	je     0x5fd083
  5fd057:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fd05a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fd05d:	84 c0                	test   al,al
  5fd05f:	74 19                	je     0x5fd07a
  5fd061:	3c ff                	cmp    al,0xff
  5fd063:	74 15                	je     0x5fd07a
  5fd065:	fe c8                	dec    al
  5fd067:	88 01                	mov    BYTE PTR [ecx],al
  5fd069:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  5fd06d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fd074:	83 c4 6c             	add    esp,0x6c
  5fd077:	c2 08 00             	ret    0x8
  5fd07a:	51                   	push   ecx
  5fd07b:	e8 70 15 00 00       	call   0x5fe5f0
  5fd080:	83 c4 04             	add    esp,0x4
  5fd083:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  5fd087:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fd08e:	83 c4 6c             	add    esp,0x6c
  5fd091:	c2 08 00             	ret    0x8
  5fd094:	90                   	nop
  5fd095:	90                   	nop
  5fd096:	90                   	nop
  5fd097:	90                   	nop
  5fd098:	90                   	nop
  5fd099:	90                   	nop
  5fd09a:	90                   	nop
  5fd09b:	90                   	nop
  5fd09c:	90                   	nop
  5fd09d:	90                   	nop
  5fd09e:	90                   	nop
  5fd09f:	90                   	nop
  5fd0a0:	56                   	push   esi
  5fd0a1:	57                   	push   edi
  5fd0a2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  5fd0a6:	8b f1                	mov    esi,ecx
  5fd0a8:	57                   	push   edi
  5fd0a9:	e8 82 a0 ff ff       	call   0x5f7130
  5fd0ae:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5fd0b1:	50                   	push   eax
  5fd0b2:	57                   	push   edi
  5fd0b3:	e8 c8 1d ff ff       	call   0x5eee80
  5fd0b8:	83 c4 08             	add    esp,0x8
  5fd0bb:	5f                   	pop    edi
  5fd0bc:	5e                   	pop    esi
  5fd0bd:	c2 04 00             	ret    0x4
  5fd0c0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5fd0c4:	56                   	push   esi
  5fd0c5:	57                   	push   edi
  5fd0c6:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  5fd0ca:	50                   	push   eax
  5fd0cb:	8b f1                	mov    esi,ecx
  5fd0cd:	57                   	push   edi
  5fd0ce:	e8 9d a0 ff ff       	call   0x5f7170
  5fd0d3:	83 c6 10             	add    esi,0x10
  5fd0d6:	56                   	push   esi
  5fd0d7:	57                   	push   edi
  5fd0d8:	e8 b3 1d ff ff       	call   0x5eee90
  5fd0dd:	83 c4 08             	add    esp,0x8
  5fd0e0:	5f                   	pop    edi
  5fd0e1:	5e                   	pop    esi
  5fd0e2:	c2 08 00             	ret    0x8
  5fd0e5:	90                   	nop
  5fd0e6:	90                   	nop
  5fd0e7:	90                   	nop
  5fd0e8:	90                   	nop
  5fd0e9:	90                   	nop
  5fd0ea:	90                   	nop
  5fd0eb:	90                   	nop
  5fd0ec:	90                   	nop
  5fd0ed:	90                   	nop
  5fd0ee:	90                   	nop
  5fd0ef:	90                   	nop
  5fd0f0:	6a ff                	push   0xffffffff
  5fd0f2:	68 68 8c 64 00       	push   0x648c68
  5fd0f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5fd0fd:	50                   	push   eax
  5fd0fe:	64                   	fs
  5fd0ff:	89                   	.byte 0x89
