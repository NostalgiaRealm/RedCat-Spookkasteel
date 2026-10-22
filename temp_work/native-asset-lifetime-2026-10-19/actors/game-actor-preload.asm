  4f6e60:	6a ff                	push   0xffffffff
  4f6e62:	68 c8 4c 63 00       	push   0x634cc8
  4f6e67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4f6e6d:	50                   	push   eax
  4f6e6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4f6e75:	83 ec 50             	sub    esp,0x50
  4f6e78:	53                   	push   ebx
  4f6e79:	55                   	push   ebp
  4f6e7a:	56                   	push   esi
  4f6e7b:	57                   	push   edi
  4f6e7c:	8b e9                	mov    ebp,ecx
  4f6e7e:	68 fe 03 00 00       	push   0x3fe
  4f6e83:	68 28 c6 69 00       	push   0x69c628
  4f6e88:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4f6e8c:	e8 5f 77 0b 00       	call   0x5ae5f0
  4f6e91:	33 db                	xor    ebx,ebx
  4f6e93:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4f6e97:	89 5c 24 68          	mov    DWORD PTR [esp+0x68],ebx
  4f6e9b:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  4f6e9f:	e8 0c d6 08 00       	call   0x5844b0
  4f6ea4:	8a 44 24 70          	mov    al,BYTE PTR [esp+0x70]
  4f6ea8:	53                   	push   ebx
  4f6ea9:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f6ead:	c6 44 24 6c 01       	mov    BYTE PTR [esp+0x6c],0x1
  4f6eb2:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  4f6eb6:	e8 e5 d1 f0 ff       	call   0x4040a0
  4f6ebb:	8a 4c 24 70          	mov    cl,BYTE PTR [esp+0x70]
  4f6ebf:	53                   	push   ebx
  4f6ec0:	88 4c 24 34          	mov    BYTE PTR [esp+0x34],cl
  4f6ec4:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4f6ec8:	c6 44 24 6c 02       	mov    BYTE PTR [esp+0x6c],0x2
  4f6ecd:	e8 ce d1 f0 ff       	call   0x4040a0
  4f6ed2:	8a 54 24 70          	mov    dl,BYTE PTR [esp+0x70]
  4f6ed6:	53                   	push   ebx
  4f6ed7:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4f6edb:	c6 44 24 6c 03       	mov    BYTE PTR [esp+0x6c],0x3
  4f6ee0:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  4f6ee4:	e8 b7 d1 f0 ff       	call   0x4040a0
  4f6ee9:	bf ac c9 69 00       	mov    edi,0x69c9ac
  4f6eee:	83 c9 ff             	or     ecx,0xffffffff
  4f6ef1:	33 c0                	xor    eax,eax
  4f6ef3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f6ef5:	f7 d1                	not    ecx
  4f6ef7:	49                   	dec    ecx
  4f6ef8:	51                   	push   ecx
  4f6ef9:	68 ac c9 69 00       	push   0x69c9ac
  4f6efe:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4f6f02:	e8 e9 d1 f0 ff       	call   0x4040f0
  4f6f07:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  4f6f0b:	8d 44 24 30          	lea    eax,[esp+0x30]
  4f6f0f:	53                   	push   ebx
  4f6f10:	50                   	push   eax
  4f6f11:	53                   	push   ebx
  4f6f12:	53                   	push   ebx
  4f6f13:	51                   	push   ecx
  4f6f14:	c6 44 24 7c 04       	mov    BYTE PTR [esp+0x7c],0x4
  4f6f19:	e8 22 a2 0b 00       	call   0x5b1140
  4f6f1e:	8d 54 24 34          	lea    edx,[esp+0x34]
  4f6f22:	8d 44 24 44          	lea    eax,[esp+0x44]
  4f6f26:	52                   	push   edx
  4f6f27:	50                   	push   eax
  4f6f28:	53                   	push   ebx
  4f6f29:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  4f6f2d:	53                   	push   ebx
  4f6f2e:	51                   	push   ecx
  4f6f2f:	e8 bc a0 0b 00       	call   0x5b0ff0
  4f6f34:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  4f6f39:	83 c4 28             	add    esp,0x28
  4f6f3c:	3b c3                	cmp    eax,ebx
  4f6f3e:	75 05                	jne    0x4f6f45
  4f6f40:	e8 3b 43 06 00       	call   0x55b280
  4f6f45:	8b f0                	mov    esi,eax
  4f6f47:	39 9e f8 00 00 00    	cmp    DWORD PTR [esi+0xf8],ebx
  4f6f4d:	75 46                	jne    0x4f6f95
  4f6f4f:	8d 54 24 70          	lea    edx,[esp+0x70]
  4f6f53:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4f6f57:	52                   	push   edx
  4f6f58:	68 70 3f 6b 00       	push   0x6b3f70
  4f6f5d:	e8 ae 28 f1 ff       	call   0x409810
  4f6f62:	8d 44 24 50          	lea    eax,[esp+0x50]
  4f6f66:	c6 44 24 68 05       	mov    BYTE PTR [esp+0x68],0x5
  4f6f6b:	50                   	push   eax
  4f6f6c:	68 82 01 00 00       	push   0x182
  4f6f71:	68 58 eb 68 00       	push   0x68eb58
  4f6f76:	68 9c 4c 69 00       	push   0x694c9c
  4f6f7b:	e8 70 98 0a 00       	call   0x5a07f0
  4f6f80:	ff d0                	call   eax
  4f6f82:	83 c4 10             	add    esp,0x10
  4f6f85:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4f6f89:	c6 44 24 68 04       	mov    BYTE PTR [esp+0x68],0x4
  4f6f8e:	6a 01                	push   0x1
  4f6f90:	e8 0b d1 f0 ff       	call   0x4040a0
  4f6f95:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  4f6f9b:	8d 54 24 40          	lea    edx,[esp+0x40]
  4f6f9f:	8d 44 24 18          	lea    eax,[esp+0x18]
  4f6fa3:	52                   	push   edx
  4f6fa4:	50                   	push   eax
  4f6fa5:	e8 f6 8f fa ff       	call   0x49ffa0
  4f6faa:	8b f0                	mov    esi,eax
  4f6fac:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4f6fb0:	8b 06                	mov    eax,DWORD PTR [esi]
  4f6fb2:	3b c8                	cmp    ecx,eax
  4f6fb4:	c6 44 24 68 06       	mov    BYTE PTR [esp+0x68],0x6
  4f6fb9:	74 18                	je     0x4f6fd3
  4f6fbb:	3b cb                	cmp    ecx,ebx
  4f6fbd:	74 05                	je     0x4f6fc4
  4f6fbf:	e8 0c 29 f1 ff       	call   0x4098d0
  4f6fc4:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4f6fc6:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  4f6fca:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4f6fce:	e8 dd d4 08 00       	call   0x5844b0
  4f6fd3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4f6fd7:	c6 44 24 68 04       	mov    BYTE PTR [esp+0x68],0x4
  4f6fdc:	e8 2f 63 08 00       	call   0x57d310
  4f6fe1:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4f6fe5:	3b cb                	cmp    ecx,ebx
  4f6fe7:	75 5d                	jne    0x4f7046
  4f6fe9:	6a 01                	push   0x1
  4f6feb:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4f6fef:	c6 44 24 6c 03       	mov    BYTE PTR [esp+0x6c],0x3
  4f6ff4:	e8 a7 d0 f0 ff       	call   0x4040a0
  4f6ff9:	6a 01                	push   0x1
  4f6ffb:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4f6fff:	c6 44 24 6c 02       	mov    BYTE PTR [esp+0x6c],0x2
  4f7004:	e8 97 d0 f0 ff       	call   0x4040a0
  4f7009:	6a 01                	push   0x1
  4f700b:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f700f:	c6 44 24 6c 01       	mov    BYTE PTR [esp+0x6c],0x1
  4f7014:	e8 87 d0 f0 ff       	call   0x4040a0
  4f7019:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4f701d:	88 5c 24 68          	mov    BYTE PTR [esp+0x68],bl
  4f7021:	3b cb                	cmp    ecx,ebx
  4f7023:	74 09                	je     0x4f702e
  4f7025:	e8 a6 28 f1 ff       	call   0x4098d0
  4f702a:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  4f702e:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4f7032:	c7 44 24 68 ff ff ff 	mov    DWORD PTR [esp+0x68],0xffffffff
  4f7039:	ff 
  4f703a:	e8 31 77 0b 00       	call   0x5ae770
  4f703f:	32 c0                	xor    al,al
  4f7041:	e9 85 00 00 00       	jmp    0x4f70cb
  4f7046:	51                   	push   ecx
  4f7047:	8b c4                	mov    eax,esp
  4f7049:	89 64 24 20          	mov    DWORD PTR [esp+0x20],esp
  4f704d:	89 08                	mov    DWORD PTR [eax],ecx
  4f704f:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4f7053:	3b c3                	cmp    eax,ebx
  4f7055:	74 03                	je     0x4f705a
  4f7057:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  4f705a:	8b cd                	mov    ecx,ebp
  4f705c:	e8 3f f8 ff ff       	call   0x4f68a0
  4f7061:	6a 01                	push   0x1
  4f7063:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4f7067:	c6 44 24 6c 03       	mov    BYTE PTR [esp+0x6c],0x3
  4f706c:	e8 2f d0 f0 ff       	call   0x4040a0
  4f7071:	6a 01                	push   0x1
  4f7073:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4f7077:	c6 44 24 6c 02       	mov    BYTE PTR [esp+0x6c],0x2
  4f707c:	e8 1f d0 f0 ff       	call   0x4040a0
  4f7081:	6a 01                	push   0x1
  4f7083:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f7087:	c6 44 24 6c 01       	mov    BYTE PTR [esp+0x6c],0x1
  4f708c:	e8 0f d0 f0 ff       	call   0x4040a0
  4f7091:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4f7095:	88 5c 24 68          	mov    BYTE PTR [esp+0x68],bl
  4f7099:	3b c3                	cmp    eax,ebx
  4f709b:	74 1b                	je     0x4f70b8
  4f709d:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4f70a0:	8b c8                	mov    ecx,eax
  4f70a2:	83 c0 14             	add    eax,0x14
  4f70a5:	4e                   	dec    esi
  4f70a6:	8b d6                	mov    edx,esi
  4f70a8:	3b d3                	cmp    edx,ebx
  4f70aa:	89 30                	mov    DWORD PTR [eax],esi
  4f70ac:	75 06                	jne    0x4f70b4
  4f70ae:	53                   	push   ebx
  4f70af:	e8 0c 4f 0b 00       	call   0x5abfc0
  4f70b4:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  4f70b8:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4f70bc:	c7 44 24 68 ff ff ff 	mov    DWORD PTR [esp+0x68],0xffffffff
  4f70c3:	ff 
  4f70c4:	e8 a7 76 0b 00       	call   0x5ae770
  4f70c9:	b0 01                	mov    al,0x1
  4f70cb:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  4f70cf:	5f                   	pop    edi
  4f70d0:	5e                   	pop    esi
  4f70d1:	5d                   	pop    ebp
  4f70d2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4f70d9:	5b                   	pop    ebx
  4f70da:	83 c4 5c             	add    esp,0x5c
  4f70dd:	c2 04 00             	ret    0x4
  4f70e0:	6a ff                	push   0xffffffff
  4f70e2:	68 90 4d 63 00       	push   0x634d90
  4f70e7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4f70ed:	50                   	push   eax
  4f70ee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4f70f5:	81 ec c8 01 00 00    	sub    esp,0x1c8
  4f70fb:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  4f70ff:	53                   	push   ebx
  4f7100:	55                   	push   ebp
  4f7101:	56                   	push   esi
  4f7102:	8b e9                	mov    ebp,ecx
  4f7104:	33 f6                	xor    esi,esi
  4f7106:	56                   	push   esi
  4f7107:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4f710b:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  4f710f:	88 44 24 70          	mov    BYTE PTR [esp+0x70],al
  4f7113:	e8 88 cf f0 ff       	call   0x4040a0
  4f7118:	8a 4c 24 0f          	mov    cl,BYTE PTR [esp+0xf]
  4f711c:	56                   	push   esi
  4f711d:	88 4c 24 40          	mov    BYTE PTR [esp+0x40],cl
  4f7121:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4f7125:	89 b4 24 e0 01 00 00 	mov    DWORD PTR [esp+0x1e0],esi
  4f712c:	e8 6f cf f0 ff       	call   0x4040a0
  4f7131:	c6 84 24 dc 01 00 00 	mov    BYTE PTR [esp+0x1dc],0x1
  4f7138:	01 
  4f7139:	e8 b2 ee 01 00       	call   0x515ff0
  4f713e:	8b c8                	mov    ecx,eax
  4f7140:	e8 9b c6 f3 ff       	call   0x4337e0
  4f7145:	8b 9c 24 e4 01 00 00 	mov    ebx,DWORD PTR [esp+0x1e4]
  4f714c:	85 c0                	test   eax,eax
  4f714e:	74 40                	je     0x4f7190
  4f7150:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
  4f7153:	3b c6                	cmp    eax,esi
  4f7155:	75 05                	jne    0x4f715c
  4f7157:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f715c:	50                   	push   eax
  4f715d:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4f7161:	68 c0 ca 69 00       	push   0x69cac0
  4f7166:	52                   	push   edx
  4f7167:	e8 24 72 0b 00       	call   0x5ae390
  4f716c:	50                   	push   eax
  4f716d:	c6 84 24 ec 01 00 00 	mov    BYTE PTR [esp+0x1ec],0x2
  4f7174:	02 
  4f7175:	e8 86 8d 0b 00       	call   0x5aff00
  4f717a:	83 c4 10             	add    esp,0x10
  4f717d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4f7181:	c6 84 24 dc 01 00 00 	mov    BYTE PTR [esp+0x1dc],0x1
  4f7188:	01 
  4f7189:	6a 01                	push   0x1
  4f718b:	e8 10 cf f0 ff       	call   0x4040a0
  4f7190:	57                   	push   edi
  4f7191:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4f7195:	53                   	push   ebx
  4f7196:	50                   	push   eax
  4f7197:	b9 78 8d 6b 00       	mov    ecx,0x6b8d78
  4f719c:	e8 af bf 0a 00       	call   0x5a3150
  4f71a1:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  4f71a7:	c6 84 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],0x3
  4f71ae:	03 
  4f71af:	51                   	push   ecx
  4f71b0:	56                   	push   esi
  4f71b1:	50                   	push   eax
  4f71b2:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  4f71b6:	e8 45 5a f1 ff       	call   0x40cc00
  4f71bb:	6a 01                	push   0x1
  4f71bd:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f71c1:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0x1
  4f71c8:	01 
  4f71c9:	e8 d2 ce f0 ff       	call   0x4040a0
  4f71ce:	bf ac c9 69 00       	mov    edi,0x69c9ac
  4f71d3:	83 c9 ff             	or     ecx,0xffffffff
  4f71d6:	33 c0                	xor    eax,eax
  4f71d8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f71da:	f7 d1                	not    ecx
  4f71dc:	49                   	dec    ecx
  4f71dd:	51                   	push   ecx
  4f71de:	68 ac c9 69 00       	push   0x69c9ac
  4f71e3:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4f71e7:	e8 04 cf f0 ff       	call   0x4040f0
  4f71ec:	ff 15 58 a2 64 00    	call   DWORD PTR ds:0x64a258
  4f71f2:	8b f8                	mov    edi,eax
  4f71f4:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
  4f71f8:	3b c6                	cmp    eax,esi
  4f71fa:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  4f71fe:	75 05                	jne    0x4f7205
  4f7200:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7205:	8d 94 24 c0 00 00 00 	lea    edx,[esp+0xc0]
  4f720c:	52                   	push   edx
  4f720d:	50                   	push   eax
  4f720e:	e8 6a 42 11 00       	call   0x60b47d
  4f7213:	83 c4 08             	add    esp,0x8
  4f7216:	83 f8 ff             	cmp    eax,0xffffffff
  4f7219:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  4f721d:	0f 84 d0 02 00 00    	je     0x4f74f3
  4f7223:	b3 06                	mov    bl,0x6
  4f7225:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4f7229:	6a 00                	push   0x0
  4f722b:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f722f:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  4f7233:	e8 68 ce f0 ff       	call   0x4040a0
  4f7238:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4f723c:	6a 00                	push   0x0
  4f723e:	88 4c 24 30          	mov    BYTE PTR [esp+0x30],cl
  4f7242:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4f7246:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0x4
  4f724d:	04 
  4f724e:	e8 4d ce f0 ff       	call   0x4040a0
  4f7253:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4f7257:	6a 00                	push   0x0
  4f7259:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4f725d:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0x5
  4f7264:	05 
  4f7265:	88 54 24 54          	mov    BYTE PTR [esp+0x54],dl
  4f7269:	e8 32 ce f0 ff       	call   0x4040a0
  4f726e:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4f7272:	83 c9 ff             	or     ecx,0xffffffff
  4f7275:	47                   	inc    edi
  4f7276:	33 c0                	xor    eax,eax
  4f7278:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
  4f727c:	8d bc 24 d4 00 00 00 	lea    edi,[esp+0xd4]
  4f7283:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f7285:	f7 d1                	not    ecx
  4f7287:	49                   	dec    ecx
  4f7288:	8d 84 24 d4 00 00 00 	lea    eax,[esp+0xd4]
  4f728f:	51                   	push   ecx
  4f7290:	50                   	push   eax
  4f7291:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4f7295:	88 9c 24 e8 01 00 00 	mov    BYTE PTR [esp+0x1e8],bl
  4f729c:	e8 4f ce f0 ff       	call   0x4040f0
  4f72a1:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4f72a5:	6a 00                	push   0x0
  4f72a7:	51                   	push   ecx
  4f72a8:	6a 00                	push   0x0
  4f72aa:	8d 54 24 38          	lea    edx,[esp+0x38]
  4f72ae:	6a 00                	push   0x0
  4f72b0:	52                   	push   edx
  4f72b1:	e8 8a 9e 0b 00       	call   0x5b1140
  4f72b6:	83 c4 14             	add    esp,0x14
  4f72b9:	e8 32 ed 01 00       	call   0x515ff0
  4f72be:	8b c8                	mov    ecx,eax
  4f72c0:	e8 1b c5 f3 ff       	call   0x4337e0
  4f72c5:	85 c0                	test   eax,eax
  4f72c7:	74 46                	je     0x4f730f
  4f72c9:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  4f72cd:	85 c0                	test   eax,eax
  4f72cf:	75 05                	jne    0x4f72d6
  4f72d1:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f72d6:	50                   	push   eax
  4f72d7:	8d 84 24 84 00 00 00 	lea    eax,[esp+0x84]
  4f72de:	68 a4 ca 69 00       	push   0x69caa4
  4f72e3:	50                   	push   eax
  4f72e4:	e8 a7 70 0b 00       	call   0x5ae390
  4f72e9:	50                   	push   eax
  4f72ea:	c6 84 24 f0 01 00 00 	mov    BYTE PTR [esp+0x1f0],0x7
  4f72f1:	07 
  4f72f2:	e8 09 8c 0b 00       	call   0x5aff00
  4f72f7:	83 c4 10             	add    esp,0x10
  4f72fa:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4f7301:	88 9c 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],bl
  4f7308:	6a 01                	push   0x1
  4f730a:	e8 91 cd f0 ff       	call   0x4040a0
  4f730f:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4f7313:	8d 54 24 50          	lea    edx,[esp+0x50]
  4f7317:	51                   	push   ecx
  4f7318:	52                   	push   edx
  4f7319:	6a 00                	push   0x0
  4f731b:	8d 44 24 28          	lea    eax,[esp+0x28]
  4f731f:	6a 00                	push   0x0
  4f7321:	50                   	push   eax
  4f7322:	e8 c9 9c 0b 00       	call   0x5b0ff0
  4f7327:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4f732b:	51                   	push   ecx
  4f732c:	e8 4f a9 fa ff       	call   0x4a1c80
  4f7331:	8b f0                	mov    esi,eax
  4f7333:	83 c4 18             	add    esp,0x18
  4f7336:	8a 46 60             	mov    al,BYTE PTR [esi+0x60]
  4f7339:	84 c0                	test   al,al
  4f733b:	0f 84 07 01 00 00    	je     0x4f7448
  4f7341:	e8 aa ec 01 00       	call   0x515ff0
  4f7346:	8b c8                	mov    ecx,eax
  4f7348:	e8 93 c4 f3 ff       	call   0x4337e0
  4f734d:	85 c0                	test   eax,eax
  4f734f:	74 48                	je     0x4f7399
  4f7351:	8b 86 f8 00 00 00    	mov    eax,DWORD PTR [esi+0xf8]
  4f7357:	85 c0                	test   eax,eax
  4f7359:	75 05                	jne    0x4f7360
  4f735b:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7360:	50                   	push   eax
  4f7361:	8d 94 24 a4 00 00 00 	lea    edx,[esp+0xa4]
  4f7368:	68 94 ca 69 00       	push   0x69ca94
  4f736d:	52                   	push   edx
  4f736e:	e8 1d 70 0b 00       	call   0x5ae390
  4f7373:	50                   	push   eax
  4f7374:	c6 84 24 f0 01 00 00 	mov    BYTE PTR [esp+0x1f0],0x8
  4f737b:	08 
  4f737c:	e8 7f 8b 0b 00       	call   0x5aff00
  4f7381:	83 c4 10             	add    esp,0x10
  4f7384:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  4f738b:	88 9c 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],bl
  4f7392:	6a 01                	push   0x1
  4f7394:	e8 07 cd f0 ff       	call   0x4040a0
  4f7399:	81 c6 f4 00 00 00    	add    esi,0xf4
  4f739f:	8b cd                	mov    ecx,ebp
  4f73a1:	56                   	push   esi
  4f73a2:	e8 b9 fa ff ff       	call   0x4f6e60
  4f73a7:	84 c0                	test   al,al
  4f73a9:	0f 85 e3 00 00 00    	jne    0x4f7492
  4f73af:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  4f73b3:	85 c0                	test   eax,eax
  4f73b5:	75 05                	jne    0x4f73bc
  4f73b7:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f73bc:	50                   	push   eax
  4f73bd:	8d 84 24 94 00 00 00 	lea    eax,[esp+0x94]
  4f73c4:	68 8c ca 69 00       	push   0x69ca8c
  4f73c9:	50                   	push   eax
  4f73ca:	e8 c1 6f 0b 00       	call   0x5ae390
  4f73cf:	83 c4 0c             	add    esp,0xc
  4f73d2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f73d5:	c6 84 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],0x9
  4f73dc:	09 
  4f73dd:	85 c0                	test   eax,eax
  4f73df:	b9 b4 a3 64 00       	mov    ecx,0x64a3b4
  4f73e4:	74 02                	je     0x4f73e8
  4f73e6:	8b c8                	mov    ecx,eax
  4f73e8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  4f73eb:	85 c0                	test   eax,eax
  4f73ed:	75 05                	jne    0x4f73f4
  4f73ef:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f73f4:	68 ac 5c 69 00       	push   0x695cac
  4f73f9:	51                   	push   ecx
  4f73fa:	50                   	push   eax
  4f73fb:	8d 8c 24 bc 00 00 00 	lea    ecx,[esp+0xbc]
  4f7402:	68 40 ca 69 00       	push   0x69ca40
  4f7407:	51                   	push   ecx
  4f7408:	e8 83 6f 0b 00       	call   0x5ae390
  4f740d:	83 c4 14             	add    esp,0x14
  4f7410:	50                   	push   eax
  4f7411:	8b cd                	mov    ecx,ebp
  4f7413:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0xa
  4f741a:	0a 
  4f741b:	e8 e0 4f 00 00       	call   0x4fc400
  4f7420:	6a 01                	push   0x1
  4f7422:	8d 8c 24 b4 00 00 00 	lea    ecx,[esp+0xb4]
  4f7429:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0x9
  4f7430:	09 
  4f7431:	e8 6a cc f0 ff       	call   0x4040a0
  4f7436:	88 9c 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],bl
  4f743d:	6a 01                	push   0x1
  4f743f:	8d 8c 24 94 00 00 00 	lea    ecx,[esp+0x94]
  4f7446:	eb 45                	jmp    0x4f748d
  4f7448:	8b 44 24 54          	mov    eax,DWORD PTR [esp+0x54]
  4f744c:	85 c0                	test   eax,eax
  4f744e:	75 05                	jne    0x4f7455
  4f7450:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7455:	50                   	push   eax
  4f7456:	8d 54 24 64          	lea    edx,[esp+0x64]
  4f745a:	68 fc c9 69 00       	push   0x69c9fc
  4f745f:	52                   	push   edx
  4f7460:	e8 2b 6f 0b 00       	call   0x5ae390
  4f7465:	50                   	push   eax
  4f7466:	68 55 04 00 00       	push   0x455
  4f746b:	68 28 c6 69 00       	push   0x69c628
  4f7470:	c6 84 24 f8 01 00 00 	mov    BYTE PTR [esp+0x1f8],0xb
  4f7477:	0b 
  4f7478:	e8 93 cf fc ff       	call   0x4c4410
  4f747d:	83 c4 18             	add    esp,0x18
  4f7480:	88 9c 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],bl
  4f7487:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  4f748b:	6a 01                	push   0x1
  4f748d:	e8 0e cc f0 ff       	call   0x4040a0
  4f7492:	6a 01                	push   0x1
  4f7494:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4f7498:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0x5
  4f749f:	05 
  4f74a0:	e8 fb cb f0 ff       	call   0x4040a0
  4f74a5:	6a 01                	push   0x1
  4f74a7:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4f74ab:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0x4
  4f74b2:	04 
  4f74b3:	e8 e8 cb f0 ff       	call   0x4040a0
  4f74b8:	6a 01                	push   0x1
  4f74ba:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f74be:	c6 84 24 e4 01 00 00 	mov    BYTE PTR [esp+0x1e4],0x1
  4f74c5:	01 
  4f74c6:	e8 d5 cb f0 ff       	call   0x4040a0
  4f74cb:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  4f74cf:	8d 84 24 c0 00 00 00 	lea    eax,[esp+0xc0]
  4f74d6:	50                   	push   eax
  4f74d7:	51                   	push   ecx
  4f74d8:	e8 6a 40 11 00       	call   0x60b547
  4f74dd:	83 c4 08             	add    esp,0x8
  4f74e0:	85 c0                	test   eax,eax
  4f74e2:	0f 84 3d fd ff ff    	je     0x4f7225
  4f74e8:	8b 9c 24 e8 01 00 00 	mov    ebx,DWORD PTR [esp+0x1e8]
  4f74ef:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  4f74f3:	e8 f8 ea 01 00       	call   0x515ff0
  4f74f8:	8b f0                	mov    esi,eax
  4f74fa:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  4f74fd:	3d 00 00 00 80       	cmp    eax,0x80000000
  4f7502:	75 1c                	jne    0x4f7520
  4f7504:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  4f7507:	33 ed                	xor    ebp,ebp
  4f7509:	3b c5                	cmp    eax,ebp
  4f750b:	75 05                	jne    0x4f7512
  4f750d:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7512:	50                   	push   eax
  4f7513:	e8 f8 39 11 00       	call   0x60af10
  4f7518:	83 c4 04             	add    esp,0x4
  4f751b:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  4f751e:	eb 02                	jmp    0x4f7522
  4f7520:	33 ed                	xor    ebp,ebp
  4f7522:	3b c5                	cmp    eax,ebp
  4f7524:	0f 84 73 01 00 00    	je     0x4f769d
  4f752a:	ff 15 58 a2 64 00    	call   DWORD PTR ds:0x64a258
  4f7530:	8b f0                	mov    esi,eax
  4f7532:	83 fe ff             	cmp    esi,0xffffffff
  4f7535:	0f 84 53 01 00 00    	je     0x4f768e
  4f753b:	83 ff ff             	cmp    edi,0xffffffff
  4f753e:	0f 84 4a 01 00 00    	je     0x4f768e
  4f7544:	3b f7                	cmp    esi,edi
  4f7546:	7d 6a                	jge    0x4f75b2
  4f7548:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4f754c:	55                   	push   ebp
  4f754d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f7551:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  4f7555:	e8 46 cb f0 ff       	call   0x4040a0
  4f755a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f755f:	83 c9 ff             	or     ecx,0xffffffff
  4f7562:	33 c0                	xor    eax,eax
  4f7564:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f7566:	f7 d1                	not    ecx
  4f7568:	49                   	dec    ecx
  4f7569:	51                   	push   ecx
  4f756a:	68 70 3f 6b 00       	push   0x6b3f70
  4f756f:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4f7573:	e8 78 cb f0 ff       	call   0x4040f0
  4f7578:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4f757c:	c6 84 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],0xc
  4f7583:	0c 
  4f7584:	50                   	push   eax
  4f7585:	6a 7d                	push   0x7d
  4f7587:	68 2c e2 68 00       	push   0x68e22c
  4f758c:	68 d0 34 69 00       	push   0x6934d0
  4f7591:	e8 5a 92 0a 00       	call   0x5a07f0
  4f7596:	ff d0                	call   eax
  4f7598:	83 c4 10             	add    esp,0x10
  4f759b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4f759f:	c6 84 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],0x1
  4f75a6:	01 
  4f75a7:	6a 01                	push   0x1
  4f75a9:	e8 f2 ca f0 ff       	call   0x4040a0
  4f75ae:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  4f75b2:	2b f7                	sub    esi,edi
  4f75b4:	83 fe ff             	cmp    esi,0xffffffff
  4f75b7:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  4f75bb:	75 68                	jne    0x4f7625
  4f75bd:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4f75c1:	55                   	push   ebp
  4f75c2:	88 4c 24 30          	mov    BYTE PTR [esp+0x30],cl
  4f75c6:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4f75ca:	e8 d1 ca f0 ff       	call   0x4040a0
  4f75cf:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4f75d4:	0b ce                	or     ecx,esi
  4f75d6:	33 c0                	xor    eax,eax
  4f75d8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f75da:	f7 d1                	not    ecx
  4f75dc:	49                   	dec    ecx
  4f75dd:	51                   	push   ecx
  4f75de:	68 70 3f 6b 00       	push   0x6b3f70
  4f75e3:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4f75e7:	e8 04 cb f0 ff       	call   0x4040f0
  4f75ec:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4f75f0:	c6 84 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],0xd
  4f75f7:	0d 
  4f75f8:	52                   	push   edx
  4f75f9:	68 8a 00 00 00       	push   0x8a
  4f75fe:	68 2c e2 68 00       	push   0x68e22c
  4f7603:	68 14 e2 68 00       	push   0x68e214
  4f7608:	e8 e3 91 0a 00       	call   0x5a07f0
  4f760d:	ff d0                	call   eax
  4f760f:	83 c4 10             	add    esp,0x10
  4f7612:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4f7616:	c6 84 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],0x1
  4f761d:	01 
  4f761e:	6a 01                	push   0x1
  4f7620:	e8 7b ca f0 ff       	call   0x4040a0
  4f7625:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
  4f7628:	3b c5                	cmp    eax,ebp
  4f762a:	75 05                	jne    0x4f7631
  4f762c:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7631:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  4f7635:	83 ec 08             	sub    esp,0x8
  4f7638:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4f763c:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4f7642:	dd 1c 24             	fstp   QWORD PTR [esp]
  4f7645:	50                   	push   eax
  4f7646:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  4f764a:	50                   	push   eax
  4f764b:	68 cc c9 69 00       	push   0x69c9cc
  4f7650:	51                   	push   ecx
  4f7651:	e8 3a 6d 0b 00       	call   0x5ae390
  4f7656:	50                   	push   eax
  4f7657:	c6 84 24 fc 01 00 00 	mov    BYTE PTR [esp+0x1fc],0xe
  4f765e:	0e 
  4f765f:	e8 9c 88 0b 00       	call   0x5aff00
  4f7664:	8b 84 24 80 00 00 00 	mov    eax,DWORD PTR [esp+0x80]
  4f766b:	83 c4 1c             	add    esp,0x1c
  4f766e:	3b c5                	cmp    eax,ebp
  4f7670:	c6 84 24 e0 01 00 00 	mov    BYTE PTR [esp+0x1e0],0x1
  4f7677:	01 
  4f7678:	74 23                	je     0x4f769d
  4f767a:	8d 48 ff             	lea    ecx,[eax-0x1]
  4f767d:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4f7680:	84 c0                	test   al,al
  4f7682:	74 10                	je     0x4f7694
  4f7684:	3c ff                	cmp    al,0xff
  4f7686:	74 0c                	je     0x4f7694
  4f7688:	fe c8                	dec    al
  4f768a:	88 01                	mov    BYTE PTR [ecx],al
  4f768c:	eb 0f                	jmp    0x4f769d
  4f768e:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
  4f7692:	eb 91                	jmp    0x4f7625
  4f7694:	51                   	push   ecx
  4f7695:	e8 56 6f 10 00       	call   0x5fe5f0
  4f769a:	83 c4 04             	add    esp,0x4
  4f769d:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4f76a1:	5f                   	pop    edi
  4f76a2:	3b c5                	cmp    eax,ebp
  4f76a4:	75 5c                	jne    0x4f7702
  4f76a6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
  4f76a9:	3b c5                	cmp    eax,ebp
  4f76ab:	75 05                	jne    0x4f76b2
  4f76ad:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f76b2:	50                   	push   eax
  4f76b3:	8d 54 24 60          	lea    edx,[esp+0x60]
  4f76b7:	68 b4 c9 69 00       	push   0x69c9b4
  4f76bc:	52                   	push   edx
  4f76bd:	e8 ce 6c 0b 00       	call   0x5ae390
  4f76c2:	50                   	push   eax
  4f76c3:	68 67 04 00 00       	push   0x467
  4f76c8:	68 28 c6 69 00       	push   0x69c628
  4f76cd:	c6 84 24 f4 01 00 00 	mov    BYTE PTR [esp+0x1f4],0xf
  4f76d4:	0f 
  4f76d5:	e8 36 cd fc ff       	call   0x4c4410
  4f76da:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
  4f76de:	83 c4 18             	add    esp,0x18
  4f76e1:	3b c5                	cmp    eax,ebp
  4f76e3:	74 1d                	je     0x4f7702
  4f76e5:	8d 48 ff             	lea    ecx,[eax-0x1]
  4f76e8:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4f76eb:	84 c0                	test   al,al
  4f76ed:	74 0a                	je     0x4f76f9
  4f76ef:	3c ff                	cmp    al,0xff
  4f76f1:	74 06                	je     0x4f76f9
  4f76f3:	fe c8                	dec    al
  4f76f5:	88 01                	mov    BYTE PTR [ecx],al
  4f76f7:	eb 09                	jmp    0x4f7702
  4f76f9:	51                   	push   ecx
  4f76fa:	e8 f1 6e 10 00       	call   0x5fe5f0
  4f76ff:	83 c4 04             	add    esp,0x4
  4f7702:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  4f7706:	3b cd                	cmp    ecx,ebp
  4f7708:	74 1c                	je     0x4f7726
  4f770a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4f770d:	84 c0                	test   al,al
  4f770f:	74 0b                	je     0x4f771c
  4f7711:	3c ff                	cmp    al,0xff
  4f7713:	74 07                	je     0x4f771c
  4f7715:	fe c8                	dec    al
  4f7717:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4f771a:	eb 0a                	jmp    0x4f7726
  4f771c:	49                   	dec    ecx
  4f771d:	51                   	push   ecx
  4f771e:	e8 cd 6e 10 00       	call   0x5fe5f0
  4f7723:	83 c4 04             	add    esp,0x4
  4f7726:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  4f772a:	89 6c 24 40          	mov    DWORD PTR [esp+0x40],ebp
  4f772e:	89 6c 24 44          	mov    DWORD PTR [esp+0x44],ebp
  4f7732:	89 6c 24 48          	mov    DWORD PTR [esp+0x48],ebp
  4f7736:	5e                   	pop    esi
  4f7737:	3b cd                	cmp    ecx,ebp
  4f7739:	5d                   	pop    ebp
  4f773a:	5b                   	pop    ebx
  4f773b:	74 31                	je     0x4f776e
  4f773d:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  4f7740:	84 c0                	test   al,al
  4f7742:	74 20                	je     0x4f7764
  4f7744:	3c ff                	cmp    al,0xff
  4f7746:	74 1c                	je     0x4f7764
  4f7748:	fe c8                	dec    al
  4f774a:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4f774d:	8b 8c 24 c8 01 00 00 	mov    ecx,DWORD PTR [esp+0x1c8]
  4f7754:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4f775b:	81 c4 d4 01 00 00    	add    esp,0x1d4
  4f7761:	c2 04 00             	ret    0x4
  4f7764:	49                   	dec    ecx
  4f7765:	51                   	push   ecx
  4f7766:	e8 85 6e 10 00       	call   0x5fe5f0
  4f776b:	83 c4 04             	add    esp,0x4
  4f776e:	8b 8c 24 c8 01 00 00 	mov    ecx,DWORD PTR [esp+0x1c8]
  4f7775:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4f777c:	81 c4 d4 01 00 00    	add    esp,0x1d4
  4f7782:	c2 04 00             	ret    0x4
  4f7785:	90                   	nop
  4f7786:	90                   	nop
  4f7787:	90                   	nop
  4f7788:	90                   	nop
  4f7789:	90                   	nop
  4f778a:	90                   	nop
  4f778b:	90                   	nop
  4f778c:	90                   	nop
  4f778d:	90                   	nop
  4f778e:	90                   	nop
  4f778f:	90                   	nop
  4f7790:	6a ff                	push   0xffffffff
  4f7792:	68 83 4e 63 00       	push   0x634e83
  4f7797:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4f779d:	50                   	push   eax
  4f779e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4f77a5:	81 ec 98 00 00 00    	sub    esp,0x98
  4f77ab:	53                   	push   ebx
  4f77ac:	55                   	push   ebp
  4f77ad:	56                   	push   esi
  4f77ae:	57                   	push   edi
  4f77af:	8b e9                	mov    ebp,ecx
  4f77b1:	68 71 04 00 00       	push   0x471
  4f77b6:	68 28 c6 69 00       	push   0x69c628
  4f77bb:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4f77bf:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  4f77c3:	e8 28 6e 0b 00       	call   0x5ae5f0
  4f77c8:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4f77cc:	6a 00                	push   0x0
  4f77ce:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4f77d2:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0x0
  4f77d9:	00 00 00 00 
  4f77dd:	88 44 24 6c          	mov    BYTE PTR [esp+0x6c],al
  4f77e1:	e8 ba c8 f0 ff       	call   0x4040a0
  4f77e6:	bf 2c cc 69 00       	mov    edi,0x69cc2c
  4f77eb:	83 c9 ff             	or     ecx,0xffffffff
  4f77ee:	33 c0                	xor    eax,eax
  4f77f0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f77f2:	f7 d1                	not    ecx
  4f77f4:	49                   	dec    ecx
  4f77f5:	51                   	push   ecx
  4f77f6:	68 2c cc 69 00       	push   0x69cc2c
  4f77fb:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  4f77ff:	e8 ec c8 f0 ff       	call   0x4040f0
  4f7804:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  4f780b:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x1
  4f7812:	01 
  4f7813:	e8 88 3c 0b 00       	call   0x5ab4a0
  4f7818:	8b 35 58 a2 64 00    	mov    esi,DWORD PTR ds:0x64a258
  4f781e:	b3 02                	mov    bl,0x2
  4f7820:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7827:	ff d6                	call   esi
  4f7829:	89 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],eax
  4f7830:	a1 40 99 6b 00       	mov    eax,ds:0x6b9940
  4f7835:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4f7839:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x64e854
  4f7840:	54 e8 64 00 
  4f7844:	51                   	push   ecx
  4f7845:	50                   	push   eax
  4f7846:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  4f784b:	e8 a0 b3 f4 ff       	call   0x442bf0
  4f7850:	e8 2b 49 02 00       	call   0x51c180
  4f7855:	e8 96 e7 01 00       	call   0x515ff0
  4f785a:	8b c8                	mov    ecx,eax
  4f785c:	e8 7f bf f3 ff       	call   0x4337e0
  4f7861:	85 c0                	test   eax,eax
  4f7863:	74 44                	je     0x4f78a9
  4f7865:	e8 e6 80 fa ff       	call   0x49f950
  4f786a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f786d:	85 c0                	test   eax,eax
  4f786f:	75 05                	jne    0x4f7876
  4f7871:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7876:	50                   	push   eax
  4f7877:	8d 54 24 24          	lea    edx,[esp+0x24]
  4f787b:	68 90 51 69 00       	push   0x695190
  4f7880:	52                   	push   edx
  4f7881:	e8 0a 6b 0b 00       	call   0x5ae390
  4f7886:	50                   	push   eax
  4f7887:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x3
  4f788e:	03 
  4f788f:	e8 6c 86 0b 00       	call   0x5aff00
  4f7894:	83 c4 10             	add    esp,0x10
  4f7897:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f789b:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f78a2:	6a 01                	push   0x1
  4f78a4:	e8 f7 c7 f0 ff       	call   0x4040a0
  4f78a9:	6a 01                	push   0x1
  4f78ab:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  4f78af:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x5
  4f78b6:	05 
  4f78b7:	e8 e4 c7 f0 ff       	call   0x4040a0
  4f78bc:	e8 af 12 06 00       	call   0x558b70
  4f78c1:	8b c8                	mov    ecx,eax
  4f78c3:	e8 18 bf f3 ff       	call   0x4337e0
  4f78c8:	85 c0                	test   eax,eax
  4f78ca:	0f 84 5a 02 00 00    	je     0x4f7b2a
  4f78d0:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4f78d4:	6a 00                	push   0x0
  4f78d6:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4f78da:	88 44 24 58          	mov    BYTE PTR [esp+0x58],al
  4f78de:	e8 bd c7 f0 ff       	call   0x4040a0
  4f78e3:	bf d4 cb 69 00       	mov    edi,0x69cbd4
  4f78e8:	83 c9 ff             	or     ecx,0xffffffff
  4f78eb:	33 c0                	xor    eax,eax
  4f78ed:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f78ef:	f7 d1                	not    ecx
  4f78f1:	49                   	dec    ecx
  4f78f2:	51                   	push   ecx
  4f78f3:	68 d4 cb 69 00       	push   0x69cbd4
  4f78f8:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4f78fc:	e8 ef c7 f0 ff       	call   0x4040f0
  4f7901:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  4f7905:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x6
  4f790c:	06 
  4f790d:	e8 8e 3b 0b 00       	call   0x5ab4a0
  4f7912:	b3 07                	mov    bl,0x7
  4f7914:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f791b:	ff d6                	call   esi
  4f791d:	89 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],eax
  4f7924:	a1 40 99 6b 00       	mov    eax,ds:0x6b9940
  4f7929:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4f792d:	c7 44 24 78 54 e8 64 	mov    DWORD PTR [esp+0x78],0x64e854
  4f7934:	00 
  4f7935:	51                   	push   ecx
  4f7936:	50                   	push   eax
  4f7937:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  4f793c:	e8 af b2 f4 ff       	call   0x442bf0
  4f7941:	e8 3a 48 02 00       	call   0x51c180
  4f7946:	e8 a5 e6 01 00       	call   0x515ff0
  4f794b:	8b c8                	mov    ecx,eax
  4f794d:	e8 8e be f3 ff       	call   0x4337e0
  4f7952:	85 c0                	test   eax,eax
  4f7954:	74 44                	je     0x4f799a
  4f7956:	e8 f5 7f fa ff       	call   0x49f950
  4f795b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f795e:	85 c0                	test   eax,eax
  4f7960:	75 05                	jne    0x4f7967
  4f7962:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7967:	50                   	push   eax
  4f7968:	8d 54 24 24          	lea    edx,[esp+0x24]
  4f796c:	68 90 51 69 00       	push   0x695190
  4f7971:	52                   	push   edx
  4f7972:	e8 19 6a 0b 00       	call   0x5ae390
  4f7977:	50                   	push   eax
  4f7978:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x8
  4f797f:	08 
  4f7980:	e8 7b 85 0b 00       	call   0x5aff00
  4f7985:	83 c4 10             	add    esp,0x10
  4f7988:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f798c:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7993:	6a 01                	push   0x1
  4f7995:	e8 06 c7 f0 ff       	call   0x4040a0
  4f799a:	b3 0a                	mov    bl,0xa
  4f799c:	6a 01                	push   0x1
  4f799e:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4f79a2:	88 9c 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],bl
  4f79a9:	e8 f2 c6 f0 ff       	call   0x4040a0
  4f79ae:	e8 3d e6 01 00       	call   0x515ff0
  4f79b3:	8b c8                	mov    ecx,eax
  4f79b5:	e8 26 be f3 ff       	call   0x4337e0
  4f79ba:	85 c0                	test   eax,eax
  4f79bc:	74 0d                	je     0x4f79cb
  4f79be:	68 ac cb 69 00       	push   0x69cbac
  4f79c3:	e8 68 84 0b 00       	call   0x5afe30
  4f79c8:	83 c4 04             	add    esp,0x4
  4f79cb:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4f79cf:	6a 00                	push   0x0
  4f79d1:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4f79d5:	88 44 24 48          	mov    BYTE PTR [esp+0x48],al
  4f79d9:	e8 c2 c6 f0 ff       	call   0x4040a0
  4f79de:	bf a4 cb 69 00       	mov    edi,0x69cba4
  4f79e3:	83 c9 ff             	or     ecx,0xffffffff
  4f79e6:	33 c0                	xor    eax,eax
  4f79e8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4f79ea:	f7 d1                	not    ecx
  4f79ec:	49                   	dec    ecx
  4f79ed:	51                   	push   ecx
  4f79ee:	68 a4 cb 69 00       	push   0x69cba4
  4f79f3:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4f79f7:	e8 f4 c6 f0 ff       	call   0x4040f0
  4f79fc:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f7a00:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0xb
  4f7a07:	0b 
  4f7a08:	51                   	push   ecx
  4f7a09:	8b cd                	mov    ecx,ebp
  4f7a0b:	e8 d0 f6 ff ff       	call   0x4f70e0
  4f7a10:	6a 01                	push   0x1
  4f7a12:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4f7a16:	88 9c 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],bl
  4f7a1d:	e8 7e c6 f0 ff       	call   0x4040a0
  4f7a22:	c7 44 24 78 54 e8 64 	mov    DWORD PTR [esp+0x78],0x64e854
  4f7a29:	00 
  4f7a2a:	b3 0c                	mov    bl,0xc
  4f7a2c:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7a33:	e8 b8 e5 01 00       	call   0x515ff0
  4f7a38:	8b c8                	mov    ecx,eax
  4f7a3a:	e8 a1 bd f3 ff       	call   0x4337e0
  4f7a3f:	85 c0                	test   eax,eax
  4f7a41:	74 65                	je     0x4f7aa8
  4f7a43:	ff d6                	call   esi
  4f7a45:	8b f8                	mov    edi,eax
  4f7a47:	e8 04 7f fa ff       	call   0x49f950
  4f7a4c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f7a4f:	be b4 a3 64 00       	mov    esi,0x64a3b4
  4f7a54:	85 c0                	test   eax,eax
  4f7a56:	74 02                	je     0x4f7a5a
  4f7a58:	8b f0                	mov    esi,eax
  4f7a5a:	8b 94 24 8c 00 00 00 	mov    edx,DWORD PTR [esp+0x8c]
  4f7a61:	52                   	push   edx
  4f7a62:	57                   	push   edi
  4f7a63:	e8 08 d3 f8 ff       	call   0x484d70
  4f7a68:	50                   	push   eax
  4f7a69:	e8 c2 23 f1 ff       	call   0x409e30
  4f7a6e:	dd 5c 24 04          	fstp   QWORD PTR [esp+0x4]
  4f7a72:	83 c4 04             	add    esp,0x4
  4f7a75:	8d 44 24 28          	lea    eax,[esp+0x28]
  4f7a79:	56                   	push   esi
  4f7a7a:	68 fc 51 69 00       	push   0x6951fc
  4f7a7f:	50                   	push   eax
  4f7a80:	e8 0b 69 0b 00       	call   0x5ae390
  4f7a85:	50                   	push   eax
  4f7a86:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0xd
  4f7a8d:	0d 
  4f7a8e:	e8 6d 84 0b 00       	call   0x5aff00
  4f7a93:	83 c4 18             	add    esp,0x18
  4f7a96:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f7a9a:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7aa1:	6a 01                	push   0x1
  4f7aa3:	e8 f8 c5 f0 ff       	call   0x4040a0
  4f7aa8:	a1 40 99 6b 00       	mov    eax,ds:0x6b9940
  4f7aad:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  4f7ab2:	83 c0 f0             	add    eax,0xfffffff0
  4f7ab5:	50                   	push   eax
  4f7ab6:	e8 85 ca fc ff       	call   0x4c4540
  4f7abb:	e8 c0 46 02 00       	call   0x51c180
  4f7ac0:	e8 2b e5 01 00       	call   0x515ff0
  4f7ac5:	8b c8                	mov    ecx,eax
  4f7ac7:	e8 14 bd f3 ff       	call   0x4337e0
  4f7acc:	85 c0                	test   eax,eax
  4f7ace:	74 44                	je     0x4f7b14
  4f7ad0:	e8 7b 7e fa ff       	call   0x49f950
  4f7ad5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f7ad8:	85 c0                	test   eax,eax
  4f7ada:	75 05                	jne    0x4f7ae1
  4f7adc:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7ae1:	50                   	push   eax
  4f7ae2:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4f7ae6:	68 e4 51 69 00       	push   0x6951e4
  4f7aeb:	51                   	push   ecx
  4f7aec:	e8 9f 68 0b 00       	call   0x5ae390
  4f7af1:	50                   	push   eax
  4f7af2:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0xe
  4f7af9:	0e 
  4f7afa:	e8 01 84 0b 00       	call   0x5aff00
  4f7aff:	83 c4 10             	add    esp,0x10
  4f7b02:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f7b06:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7b0d:	6a 01                	push   0x1
  4f7b0f:	e8 8c c5 f0 ff       	call   0x4040a0
  4f7b14:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  4f7b18:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x5
  4f7b1f:	05 
  4f7b20:	e8 ab 39 0b 00       	call   0x5ab4d0
  4f7b25:	e9 c1 00 00 00       	jmp    0x4f7beb
  4f7b2a:	e8 c1 e4 01 00       	call   0x515ff0
  4f7b2f:	8b c8                	mov    ecx,eax
  4f7b31:	e8 aa bc f3 ff       	call   0x4337e0
  4f7b36:	85 c0                	test   eax,eax
  4f7b38:	74 0d                	je     0x4f7b47
  4f7b3a:	68 7c cb 69 00       	push   0x69cb7c
  4f7b3f:	e8 ec 82 0b 00       	call   0x5afe30
  4f7b44:	83 c4 04             	add    esp,0x4
  4f7b47:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  4f7b4d:	85 f6                	test   esi,esi
  4f7b4f:	75 07                	jne    0x4f7b58
  4f7b51:	e8 2a 49 fc ff       	call   0x4bc480
  4f7b56:	8b f0                	mov    esi,eax
  4f7b58:	8b 86 a4 03 00 00    	mov    eax,DWORD PTR [esi+0x3a4]
  4f7b5e:	85 c0                	test   eax,eax
  4f7b60:	75 4c                	jne    0x4f7bae
  4f7b62:	8d 54 24 13          	lea    edx,[esp+0x13]
  4f7b66:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f7b6a:	52                   	push   edx
  4f7b6b:	68 70 3f 6b 00       	push   0x6b3f70
  4f7b70:	e8 9b 1c f1 ff       	call   0x409810
  4f7b75:	8d 44 24 44          	lea    eax,[esp+0x44]
  4f7b79:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0xf
  4f7b80:	0f 
  4f7b81:	50                   	push   eax
  4f7b82:	68 30 01 00 00       	push   0x130
  4f7b87:	68 8c e5 68 00       	push   0x68e58c
  4f7b8c:	68 84 e5 68 00       	push   0x68e584
  4f7b91:	e8 5a 8c 0a 00       	call   0x5a07f0
  4f7b96:	ff d0                	call   eax
  4f7b98:	83 c4 10             	add    esp,0x10
  4f7b9b:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f7b9f:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x5
  4f7ba6:	05 
  4f7ba7:	6a 01                	push   0x1
  4f7ba9:	e8 f2 c4 f0 ff       	call   0x4040a0
  4f7bae:	8b ae a4 03 00 00    	mov    ebp,DWORD PTR [esi+0x3a4]
  4f7bb4:	33 f6                	xor    esi,esi
  4f7bb6:	8d 9d b4 00 00 00    	lea    ebx,[ebp+0xb4]
  4f7bbc:	8b cb                	mov    ecx,ebx
  4f7bbe:	e8 bd b1 f4 ff       	call   0x442d80
  4f7bc3:	85 c0                	test   eax,eax
  4f7bc5:	7e 24                	jle    0x4f7beb
  4f7bc7:	33 ff                	xor    edi,edi
  4f7bc9:	8b 85 b8 00 00 00    	mov    eax,DWORD PTR [ebp+0xb8]
  4f7bcf:	8d 0c 07             	lea    ecx,[edi+eax*1]
  4f7bd2:	51                   	push   ecx
  4f7bd3:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  4f7bd7:	e8 04 f5 ff ff       	call   0x4f70e0
  4f7bdc:	8b cb                	mov    ecx,ebx
  4f7bde:	46                   	inc    esi
  4f7bdf:	83 c7 10             	add    edi,0x10
  4f7be2:	e8 99 b1 f4 ff       	call   0x442d80
  4f7be7:	3b f0                	cmp    esi,eax
  4f7be9:	7c de                	jl     0x4f7bc9
  4f7beb:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4f7bef:	33 ff                	xor    edi,edi
  4f7bf1:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  4f7bf5:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
  4f7bf9:	89 7c 24 3c          	mov    DWORD PTR [esp+0x3c],edi
  4f7bfd:	89 7c 24 40          	mov    DWORD PTR [esp+0x40],edi
  4f7c01:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x10
  4f7c08:	10 
  4f7c09:	33 ed                	xor    ebp,ebp
  4f7c0b:	b3 13                	mov    bl,0x13
  4f7c0d:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4f7c13:	3b f7                	cmp    esi,edi
  4f7c15:	75 07                	jne    0x4f7c1e
  4f7c17:	e8 64 36 06 00       	call   0x55b280
  4f7c1c:	8b f0                	mov    esi,eax
  4f7c1e:	39 be f8 00 00 00    	cmp    DWORD PTR [esi+0xf8],edi
  4f7c24:	75 4c                	jne    0x4f7c72
  4f7c26:	8d 44 24 13          	lea    eax,[esp+0x13]
  4f7c2a:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f7c2e:	50                   	push   eax
  4f7c2f:	68 70 3f 6b 00       	push   0x6b3f70
  4f7c34:	e8 d7 1b f1 ff       	call   0x409810
  4f7c39:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f7c3d:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x11
  4f7c44:	11 
  4f7c45:	51                   	push   ecx
  4f7c46:	68 82 01 00 00       	push   0x182
  4f7c4b:	68 58 eb 68 00       	push   0x68eb58
  4f7c50:	68 9c 4c 69 00       	push   0x694c9c
  4f7c55:	e8 96 8b 0a 00       	call   0x5a07f0
  4f7c5a:	ff d0                	call   eax
  4f7c5c:	83 c4 10             	add    esp,0x10
  4f7c5f:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4f7c63:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x10
  4f7c6a:	10 
  4f7c6b:	6a 01                	push   0x1
  4f7c6d:	e8 2e c4 f0 ff       	call   0x4040a0
  4f7c72:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  4f7c78:	e8 53 85 fa ff       	call   0x4a01d0
  4f7c7d:	3b e8                	cmp    ebp,eax
  4f7c7f:	0f 8d fd 00 00 00    	jge    0x4f7d82
  4f7c85:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4f7c8b:	3b f7                	cmp    esi,edi
  4f7c8d:	75 07                	jne    0x4f7c96
  4f7c8f:	e8 ec 35 06 00       	call   0x55b280
  4f7c94:	8b f0                	mov    esi,eax
  4f7c96:	39 be f8 00 00 00    	cmp    DWORD PTR [esi+0xf8],edi
  4f7c9c:	75 4c                	jne    0x4f7cea
  4f7c9e:	8d 54 24 32          	lea    edx,[esp+0x32]
  4f7ca2:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4f7ca6:	52                   	push   edx
  4f7ca7:	68 70 3f 6b 00       	push   0x6b3f70
  4f7cac:	e8 5f 1b f1 ff       	call   0x409810
  4f7cb1:	8d 44 24 54          	lea    eax,[esp+0x54]
  4f7cb5:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x12
  4f7cbc:	12 
  4f7cbd:	50                   	push   eax
  4f7cbe:	68 82 01 00 00       	push   0x182
  4f7cc3:	68 58 eb 68 00       	push   0x68eb58
  4f7cc8:	68 9c 4c 69 00       	push   0x694c9c
  4f7ccd:	e8 1e 8b 0a 00       	call   0x5a07f0
  4f7cd2:	ff d0                	call   eax
  4f7cd4:	83 c4 10             	add    esp,0x10
  4f7cd7:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  4f7cdb:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x10
  4f7ce2:	10 
  4f7ce3:	6a 01                	push   0x1
  4f7ce5:	e8 b6 c3 f0 ff       	call   0x4040a0
  4f7cea:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  4f7cf0:	8d 54 24 14          	lea    edx,[esp+0x14]
  4f7cf4:	55                   	push   ebp
  4f7cf5:	52                   	push   edx
  4f7cf6:	e8 f5 84 fa ff       	call   0x4a01f0
  4f7cfb:	8b f0                	mov    esi,eax
  4f7cfd:	8b 06                	mov    eax,DWORD PTR [esi]
  4f7cff:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7d06:	3b c7                	cmp    eax,edi
  4f7d08:	75 4b                	jne    0x4f7d55
  4f7d0a:	8d 44 24 33          	lea    eax,[esp+0x33]
  4f7d0e:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f7d12:	50                   	push   eax
  4f7d13:	68 70 3f 6b 00       	push   0x6b3f70
  4f7d18:	e8 f3 1a f1 ff       	call   0x409810
  4f7d1d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f7d21:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x14
  4f7d28:	14 
  4f7d29:	51                   	push   ecx
  4f7d2a:	68 b6 00 00 00       	push   0xb6
  4f7d2f:	68 38 d6 68 00       	push   0x68d638
  4f7d34:	68 2c d6 68 00       	push   0x68d62c
  4f7d39:	e8 b2 8a 0a 00       	call   0x5a07f0
  4f7d3e:	ff d0                	call   eax
  4f7d40:	83 c4 10             	add    esp,0x10
  4f7d43:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f7d47:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7d4e:	6a 01                	push   0x1
  4f7d50:	e8 4b c3 f0 ff       	call   0x4040a0
  4f7d55:	8b 0e                	mov    ecx,DWORD PTR [esi]
  4f7d57:	e8 c4 3f 0a 00       	call   0x59bd20
  4f7d5c:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  4f7d60:	50                   	push   eax
  4f7d61:	52                   	push   edx
  4f7d62:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  4f7d66:	e8 85 ae f4 ff       	call   0x442bf0
  4f7d6b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4f7d6f:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x10
  4f7d76:	10 
  4f7d77:	e8 94 55 08 00       	call   0x57d310
  4f7d7c:	45                   	inc    ebp
  4f7d7d:	e9 8b fe ff ff       	jmp    0x4f7c0d
  4f7d82:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  4f7d86:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  4f7d8a:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  4f7d8e:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4f7d92:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  4f7d96:	3b c7                	cmp    eax,edi
  4f7d98:	0f 84 ce 01 00 00    	je     0x4f7f6c
  4f7d9e:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4f7da2:	8b d1                	mov    edx,ecx
  4f7da4:	2b d0                	sub    edx,eax
  4f7da6:	c1 fa 04             	sar    edx,0x4
  4f7da9:	3b f2                	cmp    esi,edx
  4f7dab:	0f 83 bb 01 00 00    	jae    0x4f7f6c
  4f7db1:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  4f7db5:	03 c1                	add    eax,ecx
  4f7db7:	50                   	push   eax
  4f7db8:	e8 c3 9e fa ff       	call   0x4a1c80
  4f7dbd:	8b f0                	mov    esi,eax
  4f7dbf:	83 c4 04             	add    esp,0x4
  4f7dc2:	39 7e 64             	cmp    DWORD PTR [esi+0x64],edi
  4f7dc5:	0f 8e 86 01 00 00    	jle    0x4f7f51
  4f7dcb:	33 ed                	xor    ebp,ebp
  4f7dcd:	bf 01 00 00 00       	mov    edi,0x1
  4f7dd2:	e8 19 e2 01 00       	call   0x515ff0
  4f7dd7:	8b c8                	mov    ecx,eax
  4f7dd9:	e8 02 ba f3 ff       	call   0x4337e0
  4f7dde:	85 c0                	test   eax,eax
  4f7de0:	74 65                	je     0x4f7e47
  4f7de2:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  4f7de6:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4f7dea:	b9 b4 a3 64 00       	mov    ecx,0x64a3b4
  4f7def:	8b 44 02 04          	mov    eax,DWORD PTR [edx+eax*1+0x4]
  4f7df3:	85 c0                	test   eax,eax
  4f7df5:	74 02                	je     0x4f7df9
  4f7df7:	8b c8                	mov    ecx,eax
  4f7df9:	8b 86 50 01 00 00    	mov    eax,DWORD PTR [esi+0x150]
  4f7dff:	8b 04 28             	mov    eax,DWORD PTR [eax+ebp*1]
  4f7e02:	83 c0 14             	add    eax,0x14
  4f7e05:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f7e08:	85 c0                	test   eax,eax
  4f7e0a:	75 05                	jne    0x4f7e11
  4f7e0c:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7e11:	51                   	push   ecx
  4f7e12:	50                   	push   eax
  4f7e13:	57                   	push   edi
  4f7e14:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4f7e18:	68 38 cb 69 00       	push   0x69cb38
  4f7e1d:	51                   	push   ecx
  4f7e1e:	e8 6d 65 0b 00       	call   0x5ae390
  4f7e23:	50                   	push   eax
  4f7e24:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x15
  4f7e2b:	15 
  4f7e2c:	e8 cf 80 0b 00       	call   0x5aff00
  4f7e31:	83 c4 18             	add    esp,0x18
  4f7e34:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f7e38:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x10
  4f7e3f:	10 
  4f7e40:	6a 01                	push   0x1
  4f7e42:	e8 59 c2 f0 ff       	call   0x4040a0
  4f7e47:	8b 86 50 01 00 00    	mov    eax,DWORD PTR [esi+0x150]
  4f7e4d:	8b cb                	mov    ecx,ebx
  4f7e4f:	8b 14 28             	mov    edx,DWORD PTR [eax+ebp*1]
  4f7e52:	83 c2 14             	add    edx,0x14
  4f7e55:	52                   	push   edx
  4f7e56:	e8 05 f0 ff ff       	call   0x4f6e60
  4f7e5b:	84 c0                	test   al,al
  4f7e5d:	0f 85 a3 00 00 00    	jne    0x4f7f06
  4f7e63:	57                   	push   edi
  4f7e64:	8d 44 24 58          	lea    eax,[esp+0x58]
  4f7e68:	68 0c 55 69 00       	push   0x69550c
  4f7e6d:	50                   	push   eax
  4f7e6e:	e8 1d 65 0b 00       	call   0x5ae390
  4f7e73:	83 c4 0c             	add    esp,0xc
  4f7e76:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f7e79:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x16
  4f7e80:	16 
  4f7e81:	85 c0                	test   eax,eax
  4f7e83:	ba b4 a3 64 00       	mov    edx,0x64a3b4
  4f7e88:	74 02                	je     0x4f7e8c
  4f7e8a:	8b d0                	mov    edx,eax
  4f7e8c:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  4f7e90:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4f7e94:	8b 44 01 04          	mov    eax,DWORD PTR [ecx+eax*1+0x4]
  4f7e98:	b9 b4 a3 64 00       	mov    ecx,0x64a3b4
  4f7e9d:	85 c0                	test   eax,eax
  4f7e9f:	74 02                	je     0x4f7ea3
  4f7ea1:	8b c8                	mov    ecx,eax
  4f7ea3:	8b 86 50 01 00 00    	mov    eax,DWORD PTR [esi+0x150]
  4f7ea9:	8b 04 28             	mov    eax,DWORD PTR [eax+ebp*1]
  4f7eac:	83 c0 14             	add    eax,0x14
  4f7eaf:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f7eb2:	85 c0                	test   eax,eax
  4f7eb4:	75 05                	jne    0x4f7ebb
  4f7eb6:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f7ebb:	52                   	push   edx
  4f7ebc:	51                   	push   ecx
  4f7ebd:	50                   	push   eax
  4f7ebe:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4f7ec2:	68 e8 ca 69 00       	push   0x69cae8
  4f7ec7:	51                   	push   ecx
  4f7ec8:	e8 c3 64 0b 00       	call   0x5ae390
  4f7ecd:	83 c4 14             	add    esp,0x14
  4f7ed0:	50                   	push   eax
  4f7ed1:	8b cb                	mov    ecx,ebx
  4f7ed3:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x17
  4f7eda:	17 
  4f7edb:	e8 20 45 00 00       	call   0x4fc400
  4f7ee0:	6a 01                	push   0x1
  4f7ee2:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4f7ee6:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x16
  4f7eed:	16 
  4f7eee:	e8 ad c1 f0 ff       	call   0x4040a0
  4f7ef3:	6a 01                	push   0x1
  4f7ef5:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4f7ef9:	c6 84 24 b4 00 00 00 	mov    BYTE PTR [esp+0xb4],0x10
  4f7f00:	10 
  4f7f01:	e8 9a c1 f0 ff       	call   0x4040a0
  4f7f06:	8b 86 50 01 00 00    	mov    eax,DWORD PTR [esi+0x150]
  4f7f0c:	8d 54 24 18          	lea    edx,[esp+0x18]
  4f7f10:	52                   	push   edx
  4f7f11:	8b 0c 28             	mov    ecx,DWORD PTR [eax+ebp*1]
  4f7f14:	e8 97 9a fa ff       	call   0x4a19b0
  4f7f19:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4f7f1d:	85 c0                	test   eax,eax
  4f7f1f:	74 1e                	je     0x4f7f3f
  4f7f21:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  4f7f24:	8b c8                	mov    ecx,eax
  4f7f26:	83 c0 14             	add    eax,0x14
  4f7f29:	4a                   	dec    edx
  4f7f2a:	85 d2                	test   edx,edx
  4f7f2c:	89 10                	mov    DWORD PTR [eax],edx
  4f7f2e:	75 07                	jne    0x4f7f37
  4f7f30:	6a 00                	push   0x0
  4f7f32:	e8 89 40 0b 00       	call   0x5abfc0
  4f7f37:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  4f7f3e:	00 
  4f7f3f:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  4f7f42:	47                   	inc    edi
  4f7f43:	83 c5 04             	add    ebp,0x4
  4f7f46:	8d 4f ff             	lea    ecx,[edi-0x1]
  4f7f49:	3b c8                	cmp    ecx,eax
  4f7f4b:	0f 8c 81 fe ff ff    	jl     0x4f7dd2
  4f7f51:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4f7f55:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  4f7f59:	41                   	inc    ecx
  4f7f5a:	83 c0 10             	add    eax,0x10
  4f7f5d:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4f7f61:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  4f7f65:	33 ff                	xor    edi,edi
  4f7f67:	e9 22 fe ff ff       	jmp    0x4f7d8e
  4f7f6c:	3b c1                	cmp    eax,ecx
  4f7f6e:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x5
  4f7f75:	05 
  4f7f76:	8b d9                	mov    ebx,ecx
  4f7f78:	8b f0                	mov    esi,eax
  4f7f7a:	74 14                	je     0x4f7f90
  4f7f7c:	6a 01                	push   0x1
  4f7f7e:	8b ce                	mov    ecx,esi
  4f7f80:	e8 1b c1 f0 ff       	call   0x4040a0
  4f7f85:	83 c6 10             	add    esi,0x10
  4f7f88:	3b f3                	cmp    esi,ebx
  4f7f8a:	75 f0                	jne    0x4f7f7c
  4f7f8c:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4f7f90:	50                   	push   eax
  4f7f91:	e8 5a 66 10 00       	call   0x5fe5f0
  4f7f96:	83 c4 04             	add    esp,0x4
  4f7f99:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
  4f7f9d:	89 7c 24 3c          	mov    DWORD PTR [esp+0x3c],edi
  4f7fa1:	89 7c 24 40          	mov    DWORD PTR [esp+0x40],edi
  4f7fa5:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0x64e854
  4f7fac:	54 e8 64 00 
  4f7fb0:	b3 18                	mov    bl,0x18
  4f7fb2:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f7fb9:	e8 32 e0 01 00       	call   0x515ff0
  4f7fbe:	8b c8                	mov    ecx,eax
  4f7fc0:	e8 1b b8 f3 ff       	call   0x4337e0
  4f7fc5:	85 c0                	test   eax,eax
  4f7fc7:	74 69                	je     0x4f8032
  4f7fc9:	ff 15 58 a2 64 00    	call   DWORD PTR ds:0x64a258
  4f7fcf:	8b e8                	mov    ebp,eax
  4f7fd1:	e8 7a 79 fa ff       	call   0x49f950
  4f7fd6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f7fd9:	be b4 a3 64 00       	mov    esi,0x64a3b4
  4f7fde:	3b c7                	cmp    eax,edi
  4f7fe0:	74 02                	je     0x4f7fe4
  4f7fe2:	8b f0                	mov    esi,eax
  4f7fe4:	8b 94 24 a4 00 00 00 	mov    edx,DWORD PTR [esp+0xa4]
  4f7feb:	52                   	push   edx
  4f7fec:	55                   	push   ebp
  4f7fed:	e8 7e cd f8 ff       	call   0x484d70
  4f7ff2:	50                   	push   eax
  4f7ff3:	e8 38 1e f1 ff       	call   0x409e30
  4f7ff8:	dd 5c 24 04          	fstp   QWORD PTR [esp+0x4]
  4f7ffc:	83 c4 04             	add    esp,0x4
  4f7fff:	8d 44 24 28          	lea    eax,[esp+0x28]
  4f8003:	56                   	push   esi
  4f8004:	68 fc 51 69 00       	push   0x6951fc
  4f8009:	50                   	push   eax
  4f800a:	e8 81 63 0b 00       	call   0x5ae390
  4f800f:	50                   	push   eax
  4f8010:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x19
  4f8017:	19 
  4f8018:	e8 e3 7e 0b 00       	call   0x5aff00
  4f801d:	83 c4 18             	add    esp,0x18
  4f8020:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f8024:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f802b:	6a 01                	push   0x1
  4f802d:	e8 6e c0 f0 ff       	call   0x4040a0
  4f8032:	a1 40 99 6b 00       	mov    eax,ds:0x6b9940
  4f8037:	b9 38 99 6b 00       	mov    ecx,0x6b9938
  4f803c:	83 c0 f0             	add    eax,0xfffffff0
  4f803f:	50                   	push   eax
  4f8040:	e8 fb c4 fc ff       	call   0x4c4540
  4f8045:	e8 36 41 02 00       	call   0x51c180
  4f804a:	e8 a1 df 01 00       	call   0x515ff0
  4f804f:	8b c8                	mov    ecx,eax
  4f8051:	e8 8a b7 f3 ff       	call   0x4337e0
  4f8056:	85 c0                	test   eax,eax
  4f8058:	74 44                	je     0x4f809e
  4f805a:	e8 f1 78 fa ff       	call   0x49f950
  4f805f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4f8062:	3b c7                	cmp    eax,edi
  4f8064:	75 05                	jne    0x4f806b
  4f8066:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4f806b:	50                   	push   eax
  4f806c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4f8070:	68 e4 51 69 00       	push   0x6951e4
  4f8075:	51                   	push   ecx
  4f8076:	e8 15 63 0b 00       	call   0x5ae390
  4f807b:	50                   	push   eax
  4f807c:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x1a
  4f8083:	1a 
  4f8084:	e8 77 7e 0b 00       	call   0x5aff00
  4f8089:	83 c4 10             	add    esp,0x10
  4f808c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4f8090:	88 9c 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],bl
  4f8097:	6a 01                	push   0x1
  4f8099:	e8 02 c0 f0 ff       	call   0x4040a0
  4f809e:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  4f80a5:	c6 84 24 b0 00 00 00 	mov    BYTE PTR [esp+0xb0],0x0
  4f80ac:	00 
  4f80ad:	e8 1e 34 0b 00       	call   0x5ab4d0
  4f80b2:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  4f80b6:	c7 84 24 b0 00 00 00 	mov    DWORD PTR [esp+0xb0],0xffffffff
  4f80bd:	ff ff ff ff 
  4f80c1:	e8 aa 66 0b 00       	call   0x5ae770
  4f80c6:	8b 8c 24 a8 00 00 00 	mov    ecx,DWORD PTR [esp+0xa8]
  4f80cd:	5f                   	pop    edi
  4f80ce:	5e                   	pop    esi
  4f80cf:	5d                   	pop    ebp
  4f80d0:	b0 01                	mov    al,0x1
  4f80d2:	5b                   	pop    ebx
  4f80d3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4f80da:	81 c4 a4 00 00 00    	add    esp,0xa4
  4f80e0:	c3                   	ret
  4f80e1:	90                   	nop
  4f80e2:	90                   	nop
  4f80e3:	90                   	nop
  4f80e4:	90                   	nop
  4f80e5:	90                   	nop
  4f80e6:	90                   	nop
  4f80e7:	90                   	nop
  4f80e8:	90                   	nop
  4f80e9:	90                   	nop
  4f80ea:	90                   	nop
  4f80eb:	90                   	nop
  4f80ec:	90                   	nop
  4f80ed:	90                   	nop
  4f80ee:	90                   	nop
  4f80ef:	90                   	nop
