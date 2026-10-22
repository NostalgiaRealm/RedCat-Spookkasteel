
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0054ffe0 <.text+0x14efe0>:
  54ffe0:	6a ff                	push   0xffffffff
  54ffe2:	68 e7 dc 63 00       	push   0x63dce7
  54ffe7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54ffed:	50                   	push   eax
  54ffee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54fff5:	83 ec 20             	sub    esp,0x20
  54fff8:	53                   	push   ebx
  54fff9:	55                   	push   ebp
  54fffa:	33 db                	xor    ebx,ebx
  54fffc:	56                   	push   esi
  54fffd:	57                   	push   edi
  54fffe:	8b e9                	mov    ebp,ecx
  550000:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  550004:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  550008:	c7 44 24 38 01 00 00 	mov    DWORD PTR [esp+0x38],0x1
  55000f:	00 
  550010:	e8 2b 36 00 00       	call   0x553640
  550015:	84 c0                	test   al,al
  550017:	0f 84 e1 01 00 00    	je     0x5501fe
  55001d:	8a 85 8c 00 00 00    	mov    al,BYTE PTR [ebp+0x8c]
  550023:	3a c3                	cmp    al,bl
  550025:	0f 84 d3 01 00 00    	je     0x5501fe
  55002b:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  55002f:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  550034:	75 63                	jne    0x550099
  550036:	8a 44 24 44          	mov    al,BYTE PTR [esp+0x44]
  55003a:	53                   	push   ebx
  55003b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  55003f:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  550043:	e8 58 40 eb ff       	call   0x4040a0
  550048:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  55004d:	83 c9 ff             	or     ecx,0xffffffff
  550050:	33 c0                	xor    eax,eax
  550052:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  550054:	f7 d1                	not    ecx
  550056:	49                   	dec    ecx
  550057:	51                   	push   ecx
  550058:	68 70 3f 6b 00       	push   0x6b3f70
  55005d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  550061:	e8 8a 40 eb ff       	call   0x4040f0
  550066:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  55006a:	c6 44 24 38 03       	mov    BYTE PTR [esp+0x38],0x3
  55006f:	51                   	push   ecx
  550070:	68 4b 01 00 00       	push   0x14b
  550075:	68 dc 2c 69 00       	push   0x692cdc
  55007a:	68 b0 1b 69 00       	push   0x691bb0
  55007f:	e8 6c 07 05 00       	call   0x5a07f0
  550084:	ff d0                	call   eax
  550086:	83 c4 10             	add    esp,0x10
  550089:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  55008d:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  550092:	6a 01                	push   0x1
  550094:	e8 07 40 eb ff       	call   0x4040a0
  550099:	8b 7c 24 44          	mov    edi,DWORD PTR [esp+0x44]
  55009d:	8d 54 24 18          	lea    edx,[esp+0x18]
  5500a1:	57                   	push   edi
  5500a2:	52                   	push   edx
  5500a3:	8d 4d 14             	lea    ecx,[ebp+0x14]
  5500a6:	e8 25 1b 00 00       	call   0x551bd0
  5500ab:	8b f0                	mov    esi,eax
  5500ad:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5500b1:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5500b3:	3b c1                	cmp    eax,ecx
  5500b5:	c6 44 24 38 04       	mov    BYTE PTR [esp+0x38],0x4
  5500ba:	74 2c                	je     0x5500e8
  5500bc:	3b c3                	cmp    eax,ebx
  5500be:	74 15                	je     0x5500d5
  5500c0:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  5500c3:	8b c8                	mov    ecx,eax
  5500c5:	83 c0 14             	add    eax,0x14
  5500c8:	4a                   	dec    edx
  5500c9:	3b d3                	cmp    edx,ebx
  5500cb:	89 10                	mov    DWORD PTR [eax],edx
  5500cd:	75 06                	jne    0x5500d5
  5500cf:	53                   	push   ebx
  5500d0:	e8 eb be 05 00       	call   0x5abfc0
  5500d5:	8b 06                	mov    eax,DWORD PTR [esi]
  5500d7:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  5500db:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5500df:	e8 cc 43 03 00       	call   0x5844b0
  5500e4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5500e8:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5500ec:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  5500f1:	3b cb                	cmp    ecx,ebx
  5500f3:	74 09                	je     0x5500fe
  5500f5:	e8 d6 97 eb ff       	call   0x4098d0
  5500fa:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5500fe:	3b c3                	cmp    eax,ebx
  550100:	75 44                	jne    0x550146
  550102:	8b cf                	mov    ecx,edi
  550104:	e8 e7 2b 05 00       	call   0x5a2cf0
  550109:	50                   	push   eax
  55010a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  55010e:	68 1c 1b 6a 00       	push   0x6a1b1c
  550113:	51                   	push   ecx
  550114:	e8 77 e2 05 00       	call   0x5ae390
  550119:	50                   	push   eax
  55011a:	68 9c 02 00 00       	push   0x29c
  55011f:	68 98 17 6a 00       	push   0x6a1798
  550124:	c6 44 24 50 05       	mov    BYTE PTR [esp+0x50],0x5
  550129:	e8 f2 fd 05 00       	call   0x5aff20
  55012e:	83 c4 18             	add    esp,0x18
  550131:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  550135:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  55013a:	6a 01                	push   0x1
  55013c:	e8 5f 3f eb ff       	call   0x4040a0
  550141:	e9 92 00 00 00       	jmp    0x5501d8
  550146:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
  55014a:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  55014e:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  550152:	52                   	push   edx
  550153:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  550157:	50                   	push   eax
  550158:	51                   	push   ecx
  550159:	52                   	push   edx
  55015a:	51                   	push   ecx
  55015b:	8d 44 24 28          	lea    eax,[esp+0x28]
  55015f:	8b cc                	mov    ecx,esp
  550161:	89 64 24 58          	mov    DWORD PTR [esp+0x58],esp
  550165:	50                   	push   eax
  550166:	e8 f5 95 ef ff       	call   0x449760
  55016b:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  55016f:	51                   	push   ecx
  550170:	8b cd                	mov    ecx,ebp
  550172:	e8 c9 f0 ff ff       	call   0x54f240
  550177:	8b f0                	mov    esi,eax
  550179:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  55017d:	8b 0e                	mov    ecx,DWORD PTR [esi]
  55017f:	3b c1                	cmp    eax,ecx
  550181:	c6 44 24 38 06       	mov    BYTE PTR [esp+0x38],0x6
  550186:	74 2e                	je     0x5501b6
  550188:	3b c3                	cmp    eax,ebx
  55018a:	74 17                	je     0x5501a3
  55018c:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  55018f:	8b c8                	mov    ecx,eax
  550191:	83 c0 14             	add    eax,0x14
  550194:	4f                   	dec    edi
  550195:	8b d7                	mov    edx,edi
  550197:	3b d3                	cmp    edx,ebx
  550199:	89 38                	mov    DWORD PTR [eax],edi
  55019b:	75 06                	jne    0x5501a3
  55019d:	53                   	push   ebx
  55019e:	e8 1d be 05 00       	call   0x5abfc0
  5501a3:	8b 16                	mov    edx,DWORD PTR [esi]
  5501a5:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5501a9:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  5501ad:	e8 fe 42 03 00       	call   0x5844b0
  5501b2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5501b6:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  5501ba:	c6 44 24 38 02       	mov    BYTE PTR [esp+0x38],0x2
  5501bf:	3b cb                	cmp    ecx,ebx
  5501c1:	74 19                	je     0x5501dc
  5501c3:	8b 71 14             	mov    esi,DWORD PTR [ecx+0x14]
  5501c6:	8d 41 14             	lea    eax,[ecx+0x14]
  5501c9:	4e                   	dec    esi
  5501ca:	8b d6                	mov    edx,esi
  5501cc:	89 30                	mov    DWORD PTR [eax],esi
  5501ce:	3b d3                	cmp    edx,ebx
  5501d0:	75 06                	jne    0x5501d8
  5501d2:	53                   	push   ebx
  5501d3:	e8 e8 bd 05 00       	call   0x5abfc0
  5501d8:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5501dc:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5501e0:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  5501e5:	3b cb                	cmp    ecx,ebx
  5501e7:	74 19                	je     0x550202
  5501e9:	8b 71 14             	mov    esi,DWORD PTR [ecx+0x14]
  5501ec:	8d 41 14             	lea    eax,[ecx+0x14]
  5501ef:	4e                   	dec    esi
  5501f0:	8b d6                	mov    edx,esi
  5501f2:	89 30                	mov    DWORD PTR [eax],esi
  5501f4:	3b d3                	cmp    edx,ebx
  5501f6:	75 06                	jne    0x5501fe
  5501f8:	53                   	push   ebx
  5501f9:	e8 c2 bd 05 00       	call   0x5abfc0
  5501fe:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  550202:	8b 74 24 40          	mov    esi,DWORD PTR [esp+0x40]
  550206:	3b c3                	cmp    eax,ebx
  550208:	89 06                	mov    DWORD PTR [esi],eax
  55020a:	74 0b                	je     0x550217
  55020c:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  55020f:	41                   	inc    ecx
  550210:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  550213:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  550217:	c7 44 24 1c 01 00 00 	mov    DWORD PTR [esp+0x1c],0x1
  55021e:	00 
  55021f:	3b c3                	cmp    eax,ebx
  550221:	88 5c 24 38          	mov    BYTE PTR [esp+0x38],bl
  550225:	74 17                	je     0x55023e
  550227:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  55022a:	8b c8                	mov    ecx,eax
  55022c:	83 c0 14             	add    eax,0x14
  55022f:	4f                   	dec    edi
  550230:	8b d7                	mov    edx,edi
  550232:	3b d3                	cmp    edx,ebx
  550234:	89 38                	mov    DWORD PTR [eax],edi
  550236:	75 06                	jne    0x55023e
  550238:	53                   	push   ebx
  550239:	e8 82 bd 05 00       	call   0x5abfc0
  55023e:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  550242:	8b c6                	mov    eax,esi
  550244:	5f                   	pop    edi
  550245:	5e                   	pop    esi
  550246:	5d                   	pop    ebp
  550247:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  55024e:	5b                   	pop    ebx
  55024f:	83 c4 2c             	add    esp,0x2c
  550252:	c2 18 00             	ret    0x18
  550255:	90                   	nop
  550256:	90                   	nop
  550257:	90                   	nop
  550258:	90                   	nop
  550259:	90                   	nop
  55025a:	90                   	nop
  55025b:	90                   	nop
  55025c:	90                   	nop
  55025d:	90                   	nop
  55025e:	90                   	nop
  55025f:	90                   	nop
  550260:	6a ff                	push   0xffffffff
  550262:	68 08 dd 63 00       	push   0x63dd08
  550267:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  55026d:	50                   	push   eax
  55026e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  550275:	51                   	push   ecx
  550276:	53                   	push   ebx
  550277:	55                   	push   ebp
  550278:	56                   	push   esi
  550279:	33 db                	xor    ebx,ebx
  55027b:	33 f6                	xor    esi,esi
  55027d:	57                   	push   edi
  55027e:	8b e9                	mov    ebp,ecx
