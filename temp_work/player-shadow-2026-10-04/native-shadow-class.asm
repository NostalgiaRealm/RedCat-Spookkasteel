
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0046ce40 <.text+0x6be40>:
  46ce40:	6a ff                	push   0xffffffff
  46ce42:	68 1e 7f 62 00       	push   0x627f1e
  46ce47:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  46ce4d:	50                   	push   eax
  46ce4e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  46ce55:	83 ec 40             	sub    esp,0x40
  46ce58:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  46ce5c:	53                   	push   ebx
  46ce5d:	55                   	push   ebp
  46ce5e:	56                   	push   esi
  46ce5f:	57                   	push   edi
  46ce60:	8b f1                	mov    esi,ecx
  46ce62:	50                   	push   eax
  46ce63:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  46ce67:	e8 44 4e 09 00       	call   0x501cb0
  46ce6c:	8d ae f8 00 00 00    	lea    ebp,[esi+0xf8]
  46ce72:	33 db                	xor    ebx,ebx
  46ce74:	89 5c 24 58          	mov    DWORD PTR [esp+0x58],ebx
  46ce78:	89 5d 00             	mov    DWORD PTR [ebp+0x0],ebx
  46ce7b:	8b 0d 00 dd 64 00    	mov    ecx,DWORD PTR ds:0x64dd00
  46ce81:	c6 44 24 58 01       	mov    BYTE PTR [esp+0x58],0x1
  46ce86:	89 8e 8c 01 00 00    	mov    DWORD PTR [esi+0x18c],ecx
  46ce8c:	8d 8e 98 01 00 00    	lea    ecx,[esi+0x198]
  46ce92:	88 9e 90 01 00 00    	mov    BYTE PTR [esi+0x190],bl
  46ce98:	89 9e 94 01 00 00    	mov    DWORD PTR [esi+0x194],ebx
  46ce9e:	89 9e b0 01 00 00    	mov    DWORD PTR [esi+0x1b0],ebx
  46cea4:	c7 06 08 dd 64 00    	mov    DWORD PTR [esi],0x64dd08
  46ceaa:	e8 c1 61 14 00       	call   0x5b3070
  46ceaf:	8d 8e a4 01 00 00    	lea    ecx,[esi+0x1a4]
  46ceb5:	e8 b6 61 14 00       	call   0x5b3070
  46ceba:	8d 86 00 01 00 00    	lea    eax,[esi+0x100]
  46cec0:	ba 04 00 00 00       	mov    edx,0x4
  46cec5:	b9 00 00 7f 43       	mov    ecx,0x437f0000
  46ceca:	89 58 fc             	mov    DWORD PTR [eax-0x4],ebx
  46cecd:	89 18                	mov    DWORD PTR [eax],ebx
  46cecf:	89 58 04             	mov    DWORD PTR [eax+0x4],ebx
  46ced2:	89 48 10             	mov    DWORD PTR [eax+0x10],ecx
  46ced5:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  46ced8:	89 48 18             	mov    DWORD PTR [eax+0x18],ecx
  46cedb:	89 48 1c             	mov    DWORD PTR [eax+0x1c],ecx
  46cede:	83 c0 24             	add    eax,0x24
  46cee1:	4a                   	dec    edx
  46cee2:	75 e6                	jne    0x46ceca
  46cee4:	8a 54 24 60          	mov    dl,BYTE PTR [esp+0x60]
  46cee8:	b8 00 00 80 3f       	mov    eax,0x3f800000
  46ceed:	53                   	push   ebx
  46ceee:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  46cef2:	89 9e 08 01 00 00    	mov    DWORD PTR [esi+0x108],ebx
  46cef8:	89 86 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],eax
  46cefe:	89 86 2c 01 00 00    	mov    DWORD PTR [esi+0x12c],eax
  46cf04:	89 86 30 01 00 00    	mov    DWORD PTR [esi+0x130],eax
  46cf0a:	89 86 50 01 00 00    	mov    DWORD PTR [esi+0x150],eax
  46cf10:	89 9e 54 01 00 00    	mov    DWORD PTR [esi+0x154],ebx
  46cf16:	89 9e 74 01 00 00    	mov    DWORD PTR [esi+0x174],ebx
  46cf1c:	89 9e 78 01 00 00    	mov    DWORD PTR [esi+0x178],ebx
  46cf22:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  46cf26:	e8 75 71 f9 ff       	call   0x4040a0
  46cf2b:	bf 24 2d 69 00       	mov    edi,0x692d24
  46cf30:	83 c9 ff             	or     ecx,0xffffffff
  46cf33:	33 c0                	xor    eax,eax
  46cf35:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46cf37:	f7 d1                	not    ecx
  46cf39:	49                   	dec    ecx
  46cf3a:	51                   	push   ecx
  46cf3b:	68 24 2d 69 00       	push   0x692d24
  46cf40:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  46cf44:	e8 a7 71 f9 ff       	call   0x4040f0
  46cf49:	8a 44 24 60          	mov    al,BYTE PTR [esp+0x60]
  46cf4d:	53                   	push   ebx
  46cf4e:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46cf52:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  46cf57:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  46cf5b:	e8 40 71 f9 ff       	call   0x4040a0
  46cf60:	bf 18 2d 69 00       	mov    edi,0x692d18
  46cf65:	83 c9 ff             	or     ecx,0xffffffff
  46cf68:	33 c0                	xor    eax,eax
  46cf6a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46cf6c:	f7 d1                	not    ecx
  46cf6e:	49                   	dec    ecx
  46cf6f:	51                   	push   ecx
  46cf70:	68 18 2d 69 00       	push   0x692d18
  46cf75:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  46cf79:	e8 72 71 f9 ff       	call   0x4040f0
  46cf7e:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  46cf82:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  46cf86:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  46cf8b:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  46cf90:	3b c3                	cmp    eax,ebx
  46cf92:	75 05                	jne    0x46cf99
  46cf94:	e8 e7 e2 0e 00       	call   0x55b280
  46cf99:	8b f8                	mov    edi,eax
  46cf9b:	39 9f d8 00 00 00    	cmp    DWORD PTR [edi+0xd8],ebx
  46cfa1:	75 46                	jne    0x46cfe9
  46cfa3:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  46cfa7:	51                   	push   ecx
  46cfa8:	68 70 3f 6b 00       	push   0x6b3f70
  46cfad:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  46cfb1:	e8 5a c8 f9 ff       	call   0x409810
  46cfb6:	8d 54 24 40          	lea    edx,[esp+0x40]
  46cfba:	c6 44 24 58 06       	mov    BYTE PTR [esp+0x58],0x6
  46cfbf:	52                   	push   edx
  46cfc0:	68 88 01 00 00       	push   0x188
  46cfc5:	68 58 eb 68 00       	push   0x68eb58
  46cfca:	68 4c eb 68 00       	push   0x68eb4c
  46cfcf:	e8 1c 38 13 00       	call   0x5a07f0
  46cfd4:	ff d0                	call   eax
  46cfd6:	83 c4 10             	add    esp,0x10
  46cfd9:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  46cfdd:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  46cfe2:	6a 01                	push   0x1
  46cfe4:	e8 b7 70 f9 ff       	call   0x4040a0
  46cfe9:	8b 8f d8 00 00 00    	mov    ecx,DWORD PTR [edi+0xd8]
  46cfef:	8d 44 24 30          	lea    eax,[esp+0x30]
  46cff3:	8d 54 24 18          	lea    edx,[esp+0x18]
  46cff7:	50                   	push   eax
  46cff8:	52                   	push   edx
  46cff9:	e8 82 09 0a 00       	call   0x50d980
  46cffe:	8b f8                	mov    edi,eax
  46d000:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  46d004:	8b 0f                	mov    ecx,DWORD PTR [edi]
  46d006:	3b c1                	cmp    eax,ecx
  46d008:	c6 44 24 58 07       	mov    BYTE PTR [esp+0x58],0x7
  46d00d:	74 28                	je     0x46d037
  46d00f:	3b c3                	cmp    eax,ebx
  46d011:	74 15                	je     0x46d028
  46d013:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  46d016:	8b c8                	mov    ecx,eax
  46d018:	83 c0 14             	add    eax,0x14
  46d01b:	4a                   	dec    edx
  46d01c:	3b d3                	cmp    edx,ebx
  46d01e:	89 10                	mov    DWORD PTR [eax],edx
  46d020:	75 06                	jne    0x46d028
  46d022:	53                   	push   ebx
  46d023:	e8 98 ef 13 00       	call   0x5abfc0
  46d028:	8b 07                	mov    eax,DWORD PTR [edi]
  46d02a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  46d02e:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  46d032:	e8 79 74 11 00       	call   0x5844b0
  46d037:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  46d03b:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  46d040:	e8 cb 02 11 00       	call   0x57d310
  46d045:	39 5c 24 28          	cmp    DWORD PTR [esp+0x28],ebx
  46d049:	0f 86 bb 00 00 00    	jbe    0x46d10a
  46d04f:	8b 3d e0 8d 6c 00    	mov    edi,DWORD PTR ds:0x6c8de0
  46d055:	3b fb                	cmp    edi,ebx
  46d057:	75 07                	jne    0x46d060
  46d059:	e8 22 e2 0e 00       	call   0x55b280
  46d05e:	8b f8                	mov    edi,eax
  46d060:	39 9f d8 00 00 00    	cmp    DWORD PTR [edi+0xd8],ebx
  46d066:	75 46                	jne    0x46d0ae
  46d068:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  46d06c:	51                   	push   ecx
  46d06d:	68 70 3f 6b 00       	push   0x6b3f70
  46d072:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  46d076:	e8 95 c7 f9 ff       	call   0x409810
  46d07b:	8d 54 24 40          	lea    edx,[esp+0x40]
  46d07f:	c6 44 24 58 08       	mov    BYTE PTR [esp+0x58],0x8
  46d084:	52                   	push   edx
  46d085:	68 88 01 00 00       	push   0x188
  46d08a:	68 58 eb 68 00       	push   0x68eb58
  46d08f:	68 4c eb 68 00       	push   0x68eb4c
  46d094:	e8 57 37 13 00       	call   0x5a07f0
  46d099:	ff d0                	call   eax
  46d09b:	83 c4 10             	add    esp,0x10
  46d09e:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  46d0a2:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  46d0a7:	6a 01                	push   0x1
  46d0a9:	e8 f2 6f f9 ff       	call   0x4040a0
  46d0ae:	8b 8f d8 00 00 00    	mov    ecx,DWORD PTR [edi+0xd8]
  46d0b4:	8d 44 24 20          	lea    eax,[esp+0x20]
  46d0b8:	8d 54 24 18          	lea    edx,[esp+0x18]
  46d0bc:	50                   	push   eax
  46d0bd:	52                   	push   edx
  46d0be:	e8 bd 08 0a 00       	call   0x50d980
  46d0c3:	8b f8                	mov    edi,eax
  46d0c5:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  46d0c9:	8b 0f                	mov    ecx,DWORD PTR [edi]
  46d0cb:	3b c1                	cmp    eax,ecx
  46d0cd:	c6 44 24 58 09       	mov    BYTE PTR [esp+0x58],0x9
  46d0d2:	74 28                	je     0x46d0fc
  46d0d4:	3b c3                	cmp    eax,ebx
  46d0d6:	74 15                	je     0x46d0ed
  46d0d8:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  46d0db:	8b c8                	mov    ecx,eax
  46d0dd:	83 c0 14             	add    eax,0x14
  46d0e0:	4a                   	dec    edx
  46d0e1:	3b d3                	cmp    edx,ebx
  46d0e3:	89 10                	mov    DWORD PTR [eax],edx
  46d0e5:	75 06                	jne    0x46d0ed
  46d0e7:	53                   	push   ebx
  46d0e8:	e8 d3 ee 13 00       	call   0x5abfc0
  46d0ed:	8b 07                	mov    eax,DWORD PTR [edi]
  46d0ef:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  46d0f3:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  46d0f7:	e8 b4 73 11 00       	call   0x5844b0
  46d0fc:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  46d100:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  46d105:	e8 06 02 11 00       	call   0x57d310
  46d10a:	39 5c 24 10          	cmp    DWORD PTR [esp+0x10],ebx
  46d10e:	74 31                	je     0x46d141
  46d110:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  46d114:	3b cb                	cmp    ecx,ebx
  46d116:	74 29                	je     0x46d141
  46d118:	51                   	push   ecx
  46d119:	8b c4                	mov    eax,esp
  46d11b:	89 64 24 64          	mov    DWORD PTR [esp+0x64],esp
  46d11f:	89 08                	mov    DWORD PTR [eax],ecx
  46d121:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  46d125:	3b c3                	cmp    eax,ebx
  46d127:	74 03                	je     0x46d12c
  46d129:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  46d12c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  46d130:	c6 44 24 5c 05       	mov    BYTE PTR [esp+0x5c],0x5
  46d135:	e8 a6 5c fa ff       	call   0x412de0
  46d13a:	8b c8                	mov    ecx,eax
  46d13c:	e8 5f dd 09 00       	call   0x50aea0
  46d141:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  46d144:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  46d148:	3b c8                	cmp    ecx,eax
  46d14a:	74 21                	je     0x46d16d
  46d14c:	3b cb                	cmp    ecx,ebx
  46d14e:	74 0f                	je     0x46d15f
  46d150:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  46d153:	48                   	dec    eax
  46d154:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  46d157:	75 06                	jne    0x46d15f
  46d159:	53                   	push   ebx
  46d15a:	e8 61 ee 13 00       	call   0x5abfc0
  46d15f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  46d163:	89 4d 00             	mov    DWORD PTR [ebp+0x0],ecx
  46d166:	8b cd                	mov    ecx,ebp
  46d168:	e8 43 73 11 00       	call   0x5844b0
  46d16d:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  46d171:	c6 44 24 58 04       	mov    BYTE PTR [esp+0x58],0x4
  46d176:	3b cb                	cmp    ecx,ebx
  46d178:	74 09                	je     0x46d183
  46d17a:	e8 51 c7 f9 ff       	call   0x4098d0
  46d17f:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  46d183:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  46d187:	c6 44 24 58 03       	mov    BYTE PTR [esp+0x58],0x3
  46d18c:	3b cb                	cmp    ecx,ebx
  46d18e:	74 09                	je     0x46d199
  46d190:	e8 3b c7 f9 ff       	call   0x4098d0
  46d195:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  46d199:	6a 01                	push   0x1
  46d19b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46d19f:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  46d1a4:	e8 f7 6e f9 ff       	call   0x4040a0
  46d1a9:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  46d1ad:	3b cb                	cmp    ecx,ebx
  46d1af:	74 1c                	je     0x46d1cd
  46d1b1:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  46d1b4:	3a c3                	cmp    al,bl
  46d1b6:	74 0b                	je     0x46d1c3
  46d1b8:	3c ff                	cmp    al,0xff
  46d1ba:	74 07                	je     0x46d1c3
  46d1bc:	fe c8                	dec    al
  46d1be:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  46d1c1:	eb 0a                	jmp    0x46d1cd
  46d1c3:	49                   	dec    ecx
  46d1c4:	51                   	push   ecx
  46d1c5:	e8 26 14 19 00       	call   0x5fe5f0
  46d1ca:	83 c4 04             	add    esp,0x4
  46d1cd:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  46d1d1:	8b c6                	mov    eax,esi
  46d1d3:	5f                   	pop    edi
  46d1d4:	5e                   	pop    esi
  46d1d5:	5d                   	pop    ebp
  46d1d6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  46d1dd:	5b                   	pop    ebx
  46d1de:	83 c4 4c             	add    esp,0x4c
  46d1e1:	c2 04 00             	ret    0x4
  46d1e4:	90                   	nop
  46d1e5:	90                   	nop
  46d1e6:	90                   	nop
  46d1e7:	90                   	nop
  46d1e8:	90                   	nop
  46d1e9:	90                   	nop
  46d1ea:	90                   	nop
  46d1eb:	90                   	nop
  46d1ec:	90                   	nop
  46d1ed:	90                   	nop
  46d1ee:	90                   	nop
  46d1ef:	90                   	nop
  46d1f0:	56                   	push   esi
  46d1f1:	8b f1                	mov    esi,ecx
  46d1f3:	e8 18 00 00 00       	call   0x46d210
  46d1f8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  46d1fd:	74 09                	je     0x46d208
  46d1ff:	56                   	push   esi
  46d200:	e8 eb 13 19 00       	call   0x5fe5f0
  46d205:	83 c4 04             	add    esp,0x4
  46d208:	8b c6                	mov    eax,esi
  46d20a:	5e                   	pop    esi
  46d20b:	c2 04 00             	ret    0x4
  46d20e:	90                   	nop
  46d20f:	90                   	nop
  46d210:	6a ff                	push   0xffffffff
  46d212:	68 38 7f 62 00       	push   0x627f38
  46d217:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  46d21d:	50                   	push   eax
  46d21e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  46d225:	51                   	push   ecx
  46d226:	56                   	push   esi
  46d227:	8b f1                	mov    esi,ecx
  46d229:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  46d22d:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  46d233:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  46d23a:	00 
  46d23b:	85 c9                	test   ecx,ecx
  46d23d:	74 1a                	je     0x46d259
  46d23f:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  46d242:	48                   	dec    eax
  46d243:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  46d246:	75 07                	jne    0x46d24f
  46d248:	6a 00                	push   0x0
  46d24a:	e8 71 ed 13 00       	call   0x5abfc0
  46d24f:	c7 86 f8 00 00 00 00 	mov    DWORD PTR [esi+0xf8],0x0
  46d256:	00 00 00 
  46d259:	8b ce                	mov    ecx,esi
  46d25b:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  46d262:	ff 
  46d263:	e8 d8 4c 09 00       	call   0x501f40
  46d268:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  46d26c:	5e                   	pop    esi
  46d26d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  46d274:	83 c4 10             	add    esp,0x10
  46d277:	c3                   	ret
  46d278:	90                   	nop
  46d279:	90                   	nop
  46d27a:	90                   	nop
  46d27b:	90                   	nop
  46d27c:	90                   	nop
  46d27d:	90                   	nop
  46d27e:	90                   	nop
  46d27f:	90                   	nop
  46d280:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  46d284:	81 c1 a4 01 00 00    	add    ecx,0x1a4
  46d28a:	56                   	push   esi
  46d28b:	8b d0                	mov    edx,eax
  46d28d:	8b 31                	mov    esi,DWORD PTR [ecx]
  46d28f:	89 32                	mov    DWORD PTR [edx],esi
  46d291:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
  46d294:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
  46d297:	5e                   	pop    esi
  46d298:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  46d29b:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  46d29e:	c2 04 00             	ret    0x4
  46d2a1:	90                   	nop
  46d2a2:	90                   	nop
  46d2a3:	90                   	nop
  46d2a4:	90                   	nop
  46d2a5:	90                   	nop
  46d2a6:	90                   	nop
  46d2a7:	90                   	nop
  46d2a8:	90                   	nop
  46d2a9:	90                   	nop
  46d2aa:	90                   	nop
  46d2ab:	90                   	nop
  46d2ac:	90                   	nop
  46d2ad:	90                   	nop
  46d2ae:	90                   	nop
  46d2af:	90                   	nop
  46d2b0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  46d2b4:	81 c1 a4 01 00 00    	add    ecx,0x1a4
  46d2ba:	8b 10                	mov    edx,DWORD PTR [eax]
  46d2bc:	89 11                	mov    DWORD PTR [ecx],edx
  46d2be:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  46d2c1:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  46d2c4:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  46d2c7:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  46d2ca:	c2 04 00             	ret    0x4
  46d2cd:	90                   	nop
  46d2ce:	90                   	nop
  46d2cf:	90                   	nop
  46d2d0:	8a 81 90 01 00 00    	mov    al,BYTE PTR [ecx+0x190]
  46d2d6:	84 c0                	test   al,al
  46d2d8:	74 0f                	je     0x46d2e9
  46d2da:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  46d2de:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  46d2e2:	50                   	push   eax
  46d2e3:	52                   	push   edx
  46d2e4:	e8 97 03 00 00       	call   0x46d680
  46d2e9:	c2 08 00             	ret    0x8
  46d2ec:	90                   	nop
  46d2ed:	90                   	nop
  46d2ee:	90                   	nop
  46d2ef:	90                   	nop
  46d2f0:	e9 eb 00 00 00       	jmp    0x46d3e0
  46d2f5:	90                   	nop
  46d2f6:	90                   	nop
  46d2f7:	90                   	nop
  46d2f8:	90                   	nop
  46d2f9:	90                   	nop
  46d2fa:	90                   	nop
  46d2fb:	90                   	nop
  46d2fc:	90                   	nop
  46d2fd:	90                   	nop
  46d2fe:	90                   	nop
  46d2ff:	90                   	nop
  46d300:	6a ff                	push   0xffffffff
  46d302:	68 70 7f 62 00       	push   0x627f70
  46d307:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  46d30d:	50                   	push   eax
  46d30e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  46d315:	51                   	push   ecx
  46d316:	56                   	push   esi
  46d317:	8b f1                	mov    esi,ecx
  46d319:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  46d320:	00 
  46d321:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  46d325:	85 c0                	test   eax,eax
  46d327:	74 5e                	je     0x46d387
  46d329:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  46d32f:	85 c0                	test   eax,eax
  46d331:	74 54                	je     0x46d387
  46d333:	51                   	push   ecx
  46d334:	8b cc                	mov    ecx,esp
  46d336:	89 64 24 08          	mov    DWORD PTR [esp+0x8],esp
  46d33a:	89 01                	mov    DWORD PTR [ecx],eax
  46d33c:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  46d33f:	41                   	inc    ecx
  46d340:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  46d343:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  46d347:	c6 44 24 14 01       	mov    BYTE PTR [esp+0x14],0x1
  46d34c:	e8 df 40 fb ff       	call   0x421430
  46d351:	8b c8                	mov    ecx,eax
  46d353:	e8 48 e9 08 00       	call   0x4fbca0
  46d358:	84 c0                	test   al,al
  46d35a:	75 2b                	jne    0x46d387
  46d35c:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  46d362:	51                   	push   ecx
  46d363:	8b cc                	mov    ecx,esp
  46d365:	89 64 24 08          	mov    DWORD PTR [esp+0x8],esp
  46d369:	85 c0                	test   eax,eax
  46d36b:	89 01                	mov    DWORD PTR [ecx],eax
  46d36d:	74 03                	je     0x46d372
  46d36f:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  46d372:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  46d376:	c6 44 24 14 01       	mov    BYTE PTR [esp+0x14],0x1
  46d37b:	e8 b0 40 fb ff       	call   0x421430
  46d380:	8b c8                	mov    ecx,eax
  46d382:	e8 89 df 08 00       	call   0x4fb310
  46d387:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  46d38b:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
  46d390:	85 c9                	test   ecx,ecx
  46d392:	74 10                	je     0x46d3a4
  46d394:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  46d397:	48                   	dec    eax
  46d398:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  46d39b:	75 07                	jne    0x46d3a4
  46d39d:	6a 00                	push   0x0
  46d39f:	e8 1c ec 13 00       	call   0x5abfc0
  46d3a4:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  46d3a8:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  46d3af:	ff 
  46d3b0:	85 c0                	test   eax,eax
  46d3b2:	74 18                	je     0x46d3cc
  46d3b4:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  46d3b7:	8b c8                	mov    ecx,eax
  46d3b9:	83 c0 14             	add    eax,0x14
  46d3bc:	4e                   	dec    esi
  46d3bd:	8b d6                	mov    edx,esi
  46d3bf:	85 d2                	test   edx,edx
  46d3c1:	89 30                	mov    DWORD PTR [eax],esi
  46d3c3:	75 07                	jne    0x46d3cc
  46d3c5:	6a 00                	push   0x0
  46d3c7:	e8 f4 eb 13 00       	call   0x5abfc0
  46d3cc:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  46d3d0:	5e                   	pop    esi
  46d3d1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  46d3d8:	83 c4 10             	add    esp,0x10
  46d3db:	c2 08 00             	ret    0x8
  46d3de:	90                   	nop
  46d3df:	90                   	nop
  46d3e0:	6a ff                	push   0xffffffff
  46d3e2:	68 a0 7f 62 00       	push   0x627fa0
  46d3e7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  46d3ed:	50                   	push   eax
  46d3ee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  46d3f5:	83 ec 30             	sub    esp,0x30
  46d3f8:	53                   	push   ebx
  46d3f9:	8b d9                	mov    ebx,ecx
  46d3fb:	56                   	push   esi
  46d3fc:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  46d400:	8a 83 90 01 00 00    	mov    al,BYTE PTR [ebx+0x190]
  46d406:	84 c0                	test   al,al
  46d408:	0f 84 5a 02 00 00    	je     0x46d668
  46d40e:	8b 83 94 01 00 00    	mov    eax,DWORD PTR [ebx+0x194]
  46d414:	33 f6                	xor    esi,esi
  46d416:	3b c6                	cmp    eax,esi
  46d418:	75 16                	jne    0x46d430
  46d41a:	e8 71 06 00 00       	call   0x46da90
  46d41f:	5e                   	pop    esi
  46d420:	5b                   	pop    ebx
  46d421:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  46d425:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  46d42c:	83 c4 3c             	add    esp,0x3c
  46d42f:	c3                   	ret
  46d430:	55                   	push   ebp
  46d431:	8d 44 24 14          	lea    eax,[esp+0x14]
  46d435:	57                   	push   edi
  46d436:	50                   	push   eax
  46d437:	8b cb                	mov    ecx,ebx
  46d439:	e8 a2 6e f9 ff       	call   0x4042e0
  46d43e:	8b e8                	mov    ebp,eax
  46d440:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  46d443:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  46d447:	3b c6                	cmp    eax,esi
  46d449:	0f 85 8f 00 00 00    	jne    0x46d4de
  46d44f:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  46d453:	56                   	push   esi
  46d454:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  46d458:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46d45c:	e8 3f 6c f9 ff       	call   0x4040a0
  46d461:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  46d466:	83 c9 ff             	or     ecx,0xffffffff
  46d469:	33 c0                	xor    eax,eax
  46d46b:	6a 01                	push   0x1
  46d46d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46d46f:	f7 d1                	not    ecx
  46d471:	49                   	dec    ecx
  46d472:	8b d9                	mov    ebx,ecx
  46d474:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46d478:	53                   	push   ebx
  46d479:	e8 c2 44 f9 ff       	call   0x401940
  46d47e:	84 c0                	test   al,al
  46d480:	74 25                	je     0x46d4a7
  46d482:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  46d486:	8b cb                	mov    ecx,ebx
  46d488:	8b d1                	mov    edx,ecx
  46d48a:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  46d48f:	c1 e9 02             	shr    ecx,0x2
  46d492:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  46d494:	8b ca                	mov    ecx,edx
  46d496:	53                   	push   ebx
  46d497:	83 e1 03             	and    ecx,0x3
  46d49a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  46d49c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46d4a0:	e8 eb 6c f9 ff       	call   0x404190
  46d4a5:	33 f6                	xor    esi,esi
  46d4a7:	8d 44 24 20          	lea    eax,[esp+0x20]
  46d4ab:	c6 44 24 48 01       	mov    BYTE PTR [esp+0x48],0x1
  46d4b0:	50                   	push   eax
  46d4b1:	68 b6 00 00 00       	push   0xb6
  46d4b6:	68 38 d6 68 00       	push   0x68d638
  46d4bb:	68 2c d6 68 00       	push   0x68d62c
  46d4c0:	e8 2b 33 13 00       	call   0x5a07f0
  46d4c5:	ff d0                	call   eax
  46d4c7:	83 c4 10             	add    esp,0x10
  46d4ca:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  46d4ce:	c6 44 24 48 00       	mov    BYTE PTR [esp+0x48],0x0
  46d4d3:	6a 01                	push   0x1
  46d4d5:	e8 c6 6b f9 ff       	call   0x4040a0
  46d4da:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  46d4de:	8b 6d 00             	mov    ebp,DWORD PTR [ebp+0x0]
  46d4e1:	39 75 5c             	cmp    DWORD PTR [ebp+0x5c],esi
  46d4e4:	75 63                	jne    0x46d549
  46d4e6:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  46d4ea:	56                   	push   esi
  46d4eb:	88 4c 24 34          	mov    BYTE PTR [esp+0x34],cl
  46d4ef:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  46d4f3:	e8 a8 6b f9 ff       	call   0x4040a0
  46d4f8:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  46d4fd:	83 c9 ff             	or     ecx,0xffffffff
  46d500:	33 c0                	xor    eax,eax
  46d502:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46d504:	f7 d1                	not    ecx
  46d506:	49                   	dec    ecx
  46d507:	51                   	push   ecx
  46d508:	68 70 3f 6b 00       	push   0x6b3f70
  46d50d:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  46d511:	e8 da 6b f9 ff       	call   0x4040f0
  46d516:	8d 54 24 30          	lea    edx,[esp+0x30]
  46d51a:	c6 44 24 48 02       	mov    BYTE PTR [esp+0x48],0x2
  46d51f:	52                   	push   edx
  46d520:	68 44 01 00 00       	push   0x144
  46d525:	68 b8 e1 68 00       	push   0x68e1b8
  46d52a:	68 a8 e1 68 00       	push   0x68e1a8
  46d52f:	e8 bc 32 13 00       	call   0x5a07f0
  46d534:	ff d0                	call   eax
  46d536:	83 c4 10             	add    esp,0x10
  46d539:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  46d53d:	c6 44 24 48 00       	mov    BYTE PTR [esp+0x48],0x0
  46d542:	6a 01                	push   0x1
  46d544:	e8 57 6b f9 ff       	call   0x4040a0
  46d549:	8b 45 5c             	mov    eax,DWORD PTR [ebp+0x5c]
  46d54c:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  46d553:	ff 
  46d554:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  46d558:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  46d55c:	3b c6                	cmp    eax,esi
  46d55e:	74 17                	je     0x46d577
  46d560:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  46d563:	8b c8                	mov    ecx,eax
  46d565:	83 c0 14             	add    eax,0x14
  46d568:	4f                   	dec    edi
  46d569:	8b d7                	mov    edx,edi
  46d56b:	3b d6                	cmp    edx,esi
  46d56d:	89 38                	mov    DWORD PTR [eax],edi
  46d56f:	75 06                	jne    0x46d577
  46d571:	56                   	push   esi
  46d572:	e8 49 ea 13 00       	call   0x5abfc0
  46d577:	39 b3 f8 00 00 00    	cmp    DWORD PTR [ebx+0xf8],esi
  46d57d:	0f 85 bd 00 00 00    	jne    0x46d640
  46d583:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  46d587:	56                   	push   esi
  46d588:	88 4c 24 24          	mov    BYTE PTR [esp+0x24],cl
  46d58c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46d590:	e8 0b 6b f9 ff       	call   0x4040a0
  46d595:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  46d59a:	83 c9 ff             	or     ecx,0xffffffff
  46d59d:	33 c0                	xor    eax,eax
  46d59f:	6a 01                	push   0x1
  46d5a1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  46d5a3:	f7 d1                	not    ecx
  46d5a5:	49                   	dec    ecx
  46d5a6:	8b e9                	mov    ebp,ecx
  46d5a8:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46d5ac:	55                   	push   ebp
  46d5ad:	e8 8e 43 f9 ff       	call   0x401940
  46d5b2:	84 c0                	test   al,al
  46d5b4:	74 2b                	je     0x46d5e1
  46d5b6:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  46d5ba:	8b cd                	mov    ecx,ebp
  46d5bc:	8b d1                	mov    edx,ecx
  46d5be:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  46d5c3:	c1 e9 02             	shr    ecx,0x2
  46d5c6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  46d5c8:	8b ca                	mov    ecx,edx
  46d5ca:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
  46d5ce:	83 e1 03             	and    ecx,0x3
  46d5d1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  46d5d3:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  46d5d7:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  46d5db:	33 f6                	xor    esi,esi
  46d5dd:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  46d5e1:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  46d5e5:	c7 44 24 48 03 00 00 	mov    DWORD PTR [esp+0x48],0x3
  46d5ec:	00 
  46d5ed:	51                   	push   ecx
  46d5ee:	68 b6 00 00 00       	push   0xb6
  46d5f3:	68 38 d6 68 00       	push   0x68d638
  46d5f8:	68 2c d6 68 00       	push   0x68d62c
  46d5fd:	e8 ee 31 13 00       	call   0x5a07f0
  46d602:	ff d0                	call   eax
  46d604:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  46d608:	83 c4 10             	add    esp,0x10
  46d60b:	3b c6                	cmp    eax,esi
  46d60d:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  46d614:	ff 
  46d615:	74 1d                	je     0x46d634
  46d617:	8d 48 ff             	lea    ecx,[eax-0x1]
  46d61a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  46d61d:	84 c0                	test   al,al
  46d61f:	74 0a                	je     0x46d62b
  46d621:	3c ff                	cmp    al,0xff
  46d623:	74 06                	je     0x46d62b
  46d625:	fe c8                	dec    al
  46d627:	88 01                	mov    BYTE PTR [ecx],al
  46d629:	eb 09                	jmp    0x46d634
  46d62b:	51                   	push   ecx
  46d62c:	e8 bf 0f 19 00       	call   0x5fe5f0
  46d631:	83 c4 04             	add    esp,0x4
  46d634:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  46d638:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  46d63c:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  46d640:	8b 8b f8 00 00 00    	mov    ecx,DWORD PTR [ebx+0xf8]
  46d646:	56                   	push   esi
  46d647:	6a 01                	push   0x1
  46d649:	56                   	push   esi
  46d64a:	e8 21 d4 09 00       	call   0x50aa70
  46d64f:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  46d653:	50                   	push   eax
  46d654:	81 c3 fc 00 00 00    	add    ebx,0xfc
  46d65a:	6a 04                	push   0x4
  46d65c:	53                   	push   ebx
  46d65d:	52                   	push   edx
  46d65e:	e8 2d 98 14 00       	call   0x5b6e90
  46d663:	83 c4 1c             	add    esp,0x1c
  46d666:	5f                   	pop    edi
  46d667:	5d                   	pop    ebp
  46d668:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  46d66c:	5e                   	pop    esi
  46d66d:	5b                   	pop    ebx
  46d66e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  46d675:	83 c4 3c             	add    esp,0x3c
  46d678:	c3                   	ret
  46d679:	90                   	nop
  46d67a:	90                   	nop
  46d67b:	90                   	nop
  46d67c:	90                   	nop
  46d67d:	90                   	nop
  46d67e:	90                   	nop
  46d67f:	90                   	nop
  46d680:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  46d686:	6a ff                	push   0xffffffff
  46d688:	68 c6 7f 62 00       	push   0x627fc6
  46d68d:	50                   	push   eax
  46d68e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  46d695:	81 ec 34 01 00 00    	sub    esp,0x134
  46d69b:	53                   	push   ebx
  46d69c:	56                   	push   esi
  46d69d:	8b f1                	mov    esi,ecx
  46d69f:	33 db                	xor    ebx,ebx
  46d6a1:	57                   	push   edi
  46d6a2:	8b 8e 94 01 00 00    	mov    ecx,DWORD PTR [esi+0x194]
  46d6a8:	3b cb                	cmp    ecx,ebx
  46d6aa:	75 0c                	jne    0x46d6b8
  46d6ac:	8b ce                	mov    ecx,esi
  46d6ae:	e8 dd 03 00 00       	call   0x46da90
  46d6b3:	e9 41 03 00 00       	jmp    0x46d9f9
  46d6b8:	8b 01                	mov    eax,DWORD PTR [ecx]
  46d6ba:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  46d6be:	52                   	push   edx
  46d6bf:	ff 50 48             	call   DWORD PTR [eax+0x48]
  46d6c2:	8b 10                	mov    edx,DWORD PTR [eax]
  46d6c4:	8d 8e a4 01 00 00    	lea    ecx,[esi+0x1a4]
  46d6ca:	89 96 a4 01 00 00    	mov    DWORD PTR [esi+0x1a4],edx
  46d6d0:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  46d6d3:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  46d6d6:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  46d6d9:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  46d6dc:	8b 8e 8c 01 00 00    	mov    ecx,DWORD PTR [esi+0x18c]
  46d6e2:	51                   	push   ecx
  46d6e3:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  46d6e7:	8b d4                	mov    edx,esp
  46d6e9:	89 64 24 5c          	mov    DWORD PTR [esp+0x5c],esp
  46d6ed:	52                   	push   edx
  46d6ee:	8b ce                	mov    ecx,esi
  46d6f0:	e8 eb 6b f9 ff       	call   0x4042e0
  46d6f5:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  46d6f9:	e8 32 85 0f 00       	call   0x565c30
  46d6fe:	8b 8e 94 01 00 00    	mov    ecx,DWORD PTR [esi+0x194]
  46d704:	c7 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],0x3fa66666
  46d70b:	66 66 a6 3f 
  46d70f:	c6 44 24 71 01       	mov    BYTE PTR [esp+0x71],0x1
  46d714:	c6 44 24 72 01       	mov    BYTE PTR [esp+0x72],0x1
  46d719:	88 5c 24 73          	mov    BYTE PTR [esp+0x73],bl
  46d71d:	c6 44 24 74 01       	mov    BYTE PTR [esp+0x74],0x1
  46d722:	88 5c 24 75          	mov    BYTE PTR [esp+0x75],bl
  46d726:	c6 44 24 70 01       	mov    BYTE PTR [esp+0x70],0x1
  46d72b:	88 5c 24 76          	mov    BYTE PTR [esp+0x76],bl
  46d72f:	8b 01                	mov    eax,DWORD PTR [ecx]
  46d731:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  46d735:	89 9c 24 48 01 00 00 	mov    DWORD PTR [esp+0x148],ebx
  46d73c:	52                   	push   edx
  46d73d:	ff 50 48             	call   DWORD PTR [eax+0x48]
  46d740:	8b 08                	mov    ecx,DWORD PTR [eax]
  46d742:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  46d746:	8b 8e 94 01 00 00    	mov    ecx,DWORD PTR [esi+0x194]
  46d74c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  46d74f:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  46d753:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  46d757:	d8 05 5c ad 64 00    	fadd   DWORD PTR ds:0x64ad5c
  46d75d:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  46d760:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  46d764:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  46d768:	50                   	push   eax
  46d769:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  46d76d:	8b 11                	mov    edx,DWORD PTR [ecx]
  46d76f:	ff 52 48             	call   DWORD PTR [edx+0x48]
  46d772:	8b 08                	mov    ecx,DWORD PTR [eax]
  46d774:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  46d778:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  46d77c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  46d77f:	51                   	push   ecx
  46d780:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  46d784:	8d 54 24 34          	lea    edx,[esp+0x34]
  46d788:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  46d78c:	d8 25 6c dc 64 00    	fsub   DWORD PTR ds:0x64dc6c
  46d792:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  46d795:	52                   	push   edx
  46d796:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  46d79a:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  46d79e:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  46d7a2:	e8 69 86 0f 00       	call   0x565e10
  46d7a7:	84 c0                	test   al,al
  46d7a9:	74 44                	je     0x46d7ef
  46d7ab:	8b 84 24 f8 00 00 00 	mov    eax,DWORD PTR [esp+0xf8]
  46d7b2:	8b 8c 24 fc 00 00 00 	mov    ecx,DWORD PTR [esp+0xfc]
  46d7b9:	8b 94 24 00 01 00 00 	mov    edx,DWORD PTR [esp+0x100]
  46d7c0:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  46d7c4:	8b 84 24 d8 00 00 00 	mov    eax,DWORD PTR [esp+0xd8]
  46d7cb:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  46d7cf:	8b 8c 24 dc 00 00 00 	mov    ecx,DWORD PTR [esp+0xdc]
  46d7d6:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  46d7da:	8b 94 24 e0 00 00 00 	mov    edx,DWORD PTR [esp+0xe0]
  46d7e1:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  46d7e5:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
  46d7e9:	89 54 24 48          	mov    DWORD PTR [esp+0x48],edx
  46d7ed:	eb 28                	jmp    0x46d817
  46d7ef:	8b 8e 94 01 00 00    	mov    ecx,DWORD PTR [esi+0x194]
  46d7f5:	8d 94 24 34 01 00 00 	lea    edx,[esp+0x134]
  46d7fc:	52                   	push   edx
  46d7fd:	8b 01                	mov    eax,DWORD PTR [ecx]
  46d7ff:	ff 50 48             	call   DWORD PTR [eax+0x48]
  46d802:	d9 40 04             	fld    DWORD PTR [eax+0x4]
  46d805:	d8 25 7c cf 64 00    	fsub   DWORD PTR ds:0x64cf7c
  46d80b:	c7 44 24 44 00 00 80 	mov    DWORD PTR [esp+0x44],0x3f800000
  46d812:	3f 
  46d813:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  46d817:	8d 44 24 18          	lea    eax,[esp+0x18]
  46d81b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46d81f:	50                   	push   eax
  46d820:	8d 54 24 44          	lea    edx,[esp+0x44]
  46d824:	51                   	push   ecx
  46d825:	52                   	push   edx
  46d826:	8b ce                	mov    ecx,esi
  46d828:	e8 23 a5 00 00       	call   0x477d50
  46d82d:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
  46d831:	8d 54 24 24          	lea    edx,[esp+0x24]
  46d835:	57                   	push   edi
  46d836:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  46d83a:	e8 61 57 14 00       	call   0x5b2fa0
  46d83f:	8d 54 24 18          	lea    edx,[esp+0x18]
  46d843:	57                   	push   edi
  46d844:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  46d848:	e8 53 57 14 00       	call   0x5b2fa0
  46d84d:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  46d851:	d8 05 70 dc 64 00    	fadd   DWORD PTR ds:0x64dc70
  46d857:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  46d85b:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  46d85f:	d9 9e fc 00 00 00    	fstp   DWORD PTR [esi+0xfc]
  46d865:	d9 05 74 dc 64 00    	fld    DWORD PTR ds:0x64dc74
  46d86b:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  46d86f:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
  46d873:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  46d877:	d9 9e 00 01 00 00    	fstp   DWORD PTR [esi+0x100]
  46d87d:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  46d881:	d8 05 78 dc 64 00    	fadd   DWORD PTR ds:0x64dc78
  46d887:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  46d88b:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
  46d88f:	d9 9e 04 01 00 00    	fstp   DWORD PTR [esi+0x104]
  46d895:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  46d899:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  46d89d:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
  46d8a1:	d8 05 94 dc 64 00    	fadd   DWORD PTR ds:0x64dc94
  46d8a7:	d9 9e 20 01 00 00    	fstp   DWORD PTR [esi+0x120]
  46d8ad:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  46d8b1:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  46d8b5:	d8 05 98 dc 64 00    	fadd   DWORD PTR ds:0x64dc98
  46d8bb:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  46d8bf:	d9 9e 24 01 00 00    	fstp   DWORD PTR [esi+0x124]
  46d8c5:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  46d8c9:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  46d8cd:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  46d8d1:	d8 05 9c dc 64 00    	fadd   DWORD PTR ds:0x64dc9c
  46d8d7:	d9 9e 28 01 00 00    	fstp   DWORD PTR [esi+0x128]
  46d8dd:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
  46d8e1:	d8 44 24 0c          	fadd   DWORD PTR [esp+0xc]
  46d8e5:	d8 05 b8 dc 64 00    	fadd   DWORD PTR ds:0x64dcb8
  46d8eb:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  46d8ef:	d9 9e 44 01 00 00    	fstp   DWORD PTR [esi+0x144]
  46d8f5:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  46d8f9:	d8 05 bc dc 64 00    	fadd   DWORD PTR ds:0x64dcbc
  46d8ff:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  46d903:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  46d907:	d9 9e 48 01 00 00    	fstp   DWORD PTR [esi+0x148]
  46d90d:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  46d911:	d8 44 24 14          	fadd   DWORD PTR [esp+0x14]
  46d915:	d8 05 c0 dc 64 00    	fadd   DWORD PTR ds:0x64dcc0
  46d91b:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
  46d91f:	d9 9e 4c 01 00 00    	fstp   DWORD PTR [esi+0x14c]
  46d925:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  46d929:	d8 05 dc dc 64 00    	fadd   DWORD PTR ds:0x64dcdc
  46d92f:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  46d933:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  46d937:	d9 9e 68 01 00 00    	fstp   DWORD PTR [esi+0x168]
  46d93d:	d9 05 e0 dc 64 00    	fld    DWORD PTR ds:0x64dce0
  46d943:	d8 44 24 10          	fadd   DWORD PTR [esp+0x10]
  46d947:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
  46d94b:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  46d94f:	d9 9e 6c 01 00 00    	fstp   DWORD PTR [esi+0x16c]
  46d955:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  46d959:	d8 05 e4 dc 64 00    	fadd   DWORD PTR ds:0x64dce4
  46d95f:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  46d963:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
  46d967:	d9 9e 70 01 00 00    	fstp   DWORD PTR [esi+0x170]
  46d96d:	8b 84 24 28 01 00 00 	mov    eax,DWORD PTR [esp+0x128]
  46d974:	c7 84 24 48 01 00 00 	mov    DWORD PTR [esp+0x148],0x1
  46d97b:	01 00 00 00 
  46d97f:	50                   	push   eax
  46d980:	e8 6b 0c 19 00       	call   0x5fe5f0
  46d985:	8b 8c 24 1c 01 00 00 	mov    ecx,DWORD PTR [esp+0x11c]
  46d98c:	89 9c 24 2c 01 00 00 	mov    DWORD PTR [esp+0x12c],ebx
  46d993:	51                   	push   ecx
  46d994:	89 9c 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],ebx
  46d99b:	89 9c 24 38 01 00 00 	mov    DWORD PTR [esp+0x138],ebx
  46d9a2:	e8 49 0c 19 00       	call   0x5fe5f0
  46d9a7:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
  46d9ae:	83 c4 08             	add    esp,0x8
  46d9b1:	3b c3                	cmp    eax,ebx
  46d9b3:	89 9c 24 18 01 00 00 	mov    DWORD PTR [esp+0x118],ebx
  46d9ba:	89 9c 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],ebx
  46d9c1:	89 9c 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],ebx
  46d9c8:	74 1b                	je     0x46d9e5
  46d9ca:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  46d9cd:	8b c8                	mov    ecx,eax
  46d9cf:	83 c0 14             	add    eax,0x14
  46d9d2:	4e                   	dec    esi
  46d9d3:	8b d6                	mov    edx,esi
  46d9d5:	3b d3                	cmp    edx,ebx
  46d9d7:	89 30                	mov    DWORD PTR [eax],esi
  46d9d9:	75 06                	jne    0x46d9e1
  46d9db:	53                   	push   ebx
  46d9dc:	e8 df e5 13 00       	call   0x5abfc0
  46d9e1:	89 5c 24 7c          	mov    DWORD PTR [esp+0x7c],ebx
  46d9e5:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  46d9e9:	c7 84 24 48 01 00 00 	mov    DWORD PTR [esp+0x148],0xffffffff
  46d9f0:	ff ff ff ff 
  46d9f4:	e8 d7 da 13 00       	call   0x5ab4d0
  46d9f9:	8b 8c 24 40 01 00 00 	mov    ecx,DWORD PTR [esp+0x140]
  46da00:	5f                   	pop    edi
  46da01:	5e                   	pop    esi
  46da02:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  46da09:	5b                   	pop    ebx
  46da0a:	81 c4 40 01 00 00    	add    esp,0x140
  46da10:	c2 08 00             	ret    0x8
  46da13:	90                   	nop
  46da14:	90                   	nop
  46da15:	90                   	nop
  46da16:	90                   	nop
  46da17:	90                   	nop
  46da18:	90                   	nop
  46da19:	90                   	nop
  46da1a:	90                   	nop
  46da1b:	90                   	nop
  46da1c:	90                   	nop
  46da1d:	90                   	nop
  46da1e:	90                   	nop
  46da1f:	90                   	nop
  46da20:	83 ec 0c             	sub    esp,0xc
  46da23:	56                   	push   esi
  46da24:	8b f1                	mov    esi,ecx
  46da26:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  46da2a:	85 c9                	test   ecx,ecx
  46da2c:	74 51                	je     0x46da7f
  46da2e:	8a 86 90 01 00 00    	mov    al,BYTE PTR [esi+0x190]
  46da34:	84 c0                	test   al,al
  46da36:	74 08                	je     0x46da40
  46da38:	3b 8e 94 01 00 00    	cmp    ecx,DWORD PTR [esi+0x194]
  46da3e:	74 3f                	je     0x46da7f
  46da40:	c6 86 90 01 00 00 01 	mov    BYTE PTR [esi+0x190],0x1
  46da47:	89 8e 94 01 00 00    	mov    DWORD PTR [esi+0x194],ecx
  46da4d:	8b 01                	mov    eax,DWORD PTR [ecx]
  46da4f:	8d 54 24 04          	lea    edx,[esp+0x4]
  46da53:	52                   	push   edx
  46da54:	ff 50 48             	call   DWORD PTR [eax+0x48]
  46da57:	8b 10                	mov    edx,DWORD PTR [eax]
  46da59:	8d 8e 98 01 00 00    	lea    ecx,[esi+0x198]
  46da5f:	6a 01                	push   0x1
  46da61:	89 11                	mov    DWORD PTR [ecx],edx
  46da63:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  46da66:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  46da69:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  46da6c:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  46da6f:	8b ce                	mov    ecx,esi
  46da71:	e8 da 48 09 00       	call   0x502350
  46da76:	b0 01                	mov    al,0x1
  46da78:	5e                   	pop    esi
  46da79:	83 c4 0c             	add    esp,0xc
  46da7c:	c2 04 00             	ret    0x4
  46da7f:	32 c0                	xor    al,al
  46da81:	5e                   	pop    esi
  46da82:	83 c4 0c             	add    esp,0xc
  46da85:	c2 04 00             	ret    0x4
  46da88:	90                   	nop
  46da89:	90                   	nop
  46da8a:	90                   	nop
  46da8b:	90                   	nop
  46da8c:	90                   	nop
  46da8d:	90                   	nop
  46da8e:	90                   	nop
  46da8f:	90                   	nop
  46da90:	8a 91 90 01 00 00    	mov    dl,BYTE PTR [ecx+0x190]
  46da96:	33 c0                	xor    eax,eax
  46da98:	3a d0                	cmp    dl,al
  46da9a:	74 12                	je     0x46daae
  46da9c:	50                   	push   eax
  46da9d:	88 81 90 01 00 00    	mov    BYTE PTR [ecx+0x190],al
  46daa3:	89 81 94 01 00 00    	mov    DWORD PTR [ecx+0x194],eax
  46daa9:	e8 a2 48 09 00       	call   0x502350
  46daae:	c3                   	ret
  46daaf:	90                   	nop
