
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00552e80 <.text+0x151e80>:
  552e80:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  552e86:	6a ff                	push   0xffffffff
  552e88:	68 58 e2 63 00       	push   0x63e258
  552e8d:	50                   	push   eax
  552e8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  552e95:	53                   	push   ebx
  552e96:	56                   	push   esi
  552e97:	8b f1                	mov    esi,ecx
  552e99:	33 db                	xor    ebx,ebx
  552e9b:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  552e9f:	e8 fc 85 05 00       	call   0x5ab4a0
  552ea4:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  552ea8:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  552eac:	89 46 1c             	mov    DWORD PTR [esi+0x1c],eax
  552eaf:	b8 00 00 80 3f       	mov    eax,0x3f800000
  552eb4:	89 5e 14             	mov    DWORD PTR [esi+0x14],ebx
  552eb7:	88 5e 18             	mov    BYTE PTR [esi+0x18],bl
  552eba:	c7 06 94 e7 64 00    	mov    DWORD PTR [esi],0x64e794
  552ec0:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
  552ec3:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
  552ec6:	89 5e 28             	mov    DWORD PTR [esi+0x28],ebx
  552ec9:	89 46 2c             	mov    DWORD PTR [esi+0x2c],eax
  552ecc:	89 5e 30             	mov    DWORD PTR [esi+0x30],ebx
  552ecf:	89 5e 34             	mov    DWORD PTR [esi+0x34],ebx
  552ed2:	88 5e 38             	mov    BYTE PTR [esi+0x38],bl
  552ed5:	88 5e 39             	mov    BYTE PTR [esi+0x39],bl
  552ed8:	89 5e 3c             	mov    DWORD PTR [esi+0x3c],ebx
  552edb:	89 5e 40             	mov    DWORD PTR [esi+0x40],ebx
  552ede:	89 5e 44             	mov    DWORD PTR [esi+0x44],ebx
  552ee1:	88 5e 48             	mov    BYTE PTR [esi+0x48],bl
  552ee4:	3b cb                	cmp    ecx,ebx
  552ee6:	89 4e 4c             	mov    DWORD PTR [esi+0x4c],ecx
  552ee9:	74 03                	je     0x552eee
  552eeb:	ff 41 14             	inc    DWORD PTR [ecx+0x14]
  552eee:	3b cb                	cmp    ecx,ebx
  552ef0:	c7 06 20 f8 64 00    	mov    DWORD PTR [esi],0x64f820
  552ef6:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  552efd:	ff 
  552efe:	74 0f                	je     0x552f0f
  552f00:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  552f03:	48                   	dec    eax
  552f04:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  552f07:	75 06                	jne    0x552f0f
  552f09:	53                   	push   ebx
  552f0a:	e8 b1 90 05 00       	call   0x5abfc0
  552f0f:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  552f13:	8b c6                	mov    eax,esi
  552f15:	5e                   	pop    esi
  552f16:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  552f1d:	5b                   	pop    ebx
  552f1e:	83 c4 0c             	add    esp,0xc
  552f21:	c2 08 00             	ret    0x8
  552f24:	90                   	nop
  552f25:	90                   	nop
  552f26:	90                   	nop
  552f27:	90                   	nop
  552f28:	90                   	nop
  552f29:	90                   	nop
  552f2a:	90                   	nop
  552f2b:	90                   	nop
  552f2c:	90                   	nop
  552f2d:	90                   	nop
  552f2e:	90                   	nop
  552f2f:	90                   	nop
  552f30:	56                   	push   esi
  552f31:	8b f1                	mov    esi,ecx
  552f33:	e8 18 00 00 00       	call   0x552f50
  552f38:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  552f3d:	74 09                	je     0x552f48
  552f3f:	56                   	push   esi
  552f40:	e8 ab b6 0a 00       	call   0x5fe5f0
  552f45:	83 c4 04             	add    esp,0x4
  552f48:	8b c6                	mov    eax,esi
  552f4a:	5e                   	pop    esi
  552f4b:	c2 04 00             	ret    0x4
  552f4e:	90                   	nop
  552f4f:	90                   	nop
  552f50:	6a ff                	push   0xffffffff
  552f52:	68 83 e2 63 00       	push   0x63e283
  552f57:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  552f5d:	50                   	push   eax
  552f5e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  552f65:	51                   	push   ecx
  552f66:	56                   	push   esi
  552f67:	8b f1                	mov    esi,ecx
  552f69:	89 74 24 04          	mov    DWORD PTR [esp+0x4],esi
  552f6d:	c7 06 20 f8 64 00    	mov    DWORD PTR [esi],0x64f820
  552f73:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  552f7a:	00 
  552f7b:	e8 b0 01 00 00       	call   0x553130
  552f80:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
  552f83:	c6 44 24 10 00       	mov    BYTE PTR [esp+0x10],0x0
  552f88:	85 c9                	test   ecx,ecx
  552f8a:	74 17                	je     0x552fa3
  552f8c:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  552f8f:	48                   	dec    eax
  552f90:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  552f93:	75 07                	jne    0x552f9c
  552f95:	6a 00                	push   0x0
  552f97:	e8 24 90 05 00       	call   0x5abfc0
  552f9c:	c7 46 4c 00 00 00 00 	mov    DWORD PTR [esi+0x4c],0x0
  552fa3:	8b ce                	mov    ecx,esi
  552fa5:	c7 44 24 10 ff ff ff 	mov    DWORD PTR [esp+0x10],0xffffffff
  552fac:	ff 
  552fad:	c7 06 94 e7 64 00    	mov    DWORD PTR [esi],0x64e794
  552fb3:	e8 18 85 05 00       	call   0x5ab4d0
  552fb8:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  552fbc:	5e                   	pop    esi
  552fbd:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  552fc4:	83 c4 10             	add    esp,0x10
  552fc7:	c3                   	ret
  552fc8:	90                   	nop
  552fc9:	90                   	nop
  552fca:	90                   	nop
  552fcb:	90                   	nop
  552fcc:	90                   	nop
  552fcd:	90                   	nop
  552fce:	90                   	nop
  552fcf:	90                   	nop
  552fd0:	6a ff                	push   0xffffffff
  552fd2:	68 98 e2 63 00       	push   0x63e298
  552fd7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  552fdd:	50                   	push   eax
  552fde:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  552fe5:	83 ec 18             	sub    esp,0x18
  552fe8:	53                   	push   ebx
  552fe9:	56                   	push   esi
  552fea:	8b f1                	mov    esi,ecx
  552fec:	33 db                	xor    ebx,ebx
  552fee:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  552ff2:	39 5e 1c             	cmp    DWORD PTR [esi+0x1c],ebx
  552ff5:	0f 85 ba 00 00 00    	jne    0x5530b5
  552ffb:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  552fff:	55                   	push   ebp
  553000:	57                   	push   edi
  553001:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  553005:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  55300a:	83 c9 ff             	or     ecx,0xffffffff
  55300d:	33 c0                	xor    eax,eax
  55300f:	6a 01                	push   0x1
  553011:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  553013:	f7 d1                	not    ecx
  553015:	49                   	dec    ecx
  553016:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  55301a:	8b e9                	mov    ebp,ecx
  55301c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  553020:	55                   	push   ebp
  553021:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  553025:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  553029:	e8 12 e9 ea ff       	call   0x401940
  55302e:	84 c0                	test   al,al
  553030:	74 28                	je     0x55305a
  553032:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  553036:	8b cd                	mov    ecx,ebp
  553038:	8b d1                	mov    edx,ecx
  55303a:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  55303f:	c1 e9 02             	shr    ecx,0x2
  553042:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  553044:	8b ca                	mov    ecx,edx
  553046:	83 e1 03             	and    ecx,0x3
  553049:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  55304b:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  55304f:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  553053:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  553057:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  55305a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  55305e:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  553062:	51                   	push   ecx
  553063:	68 92 04 00 00       	push   0x492
  553068:	68 98 17 6a 00       	push   0x6a1798
  55306d:	68 6c 1f 6a 00       	push   0x6a1f6c
  553072:	e8 79 d7 04 00       	call   0x5a07f0
  553077:	ff d0                	call   eax
  553079:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  55307d:	83 c4 10             	add    esp,0x10
  553080:	3b c3                	cmp    eax,ebx
  553082:	5f                   	pop    edi
  553083:	5d                   	pop    ebp
  553084:	74 2f                	je     0x5530b5
  553086:	8d 48 ff             	lea    ecx,[eax-0x1]
  553089:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  55308c:	3a c3                	cmp    al,bl
  55308e:	74 1c                	je     0x5530ac
  553090:	3c ff                	cmp    al,0xff
  553092:	74 18                	je     0x5530ac
  553094:	fe c8                	dec    al
  553096:	88 01                	mov    BYTE PTR [ecx],al
  553098:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  55309b:	5e                   	pop    esi
  55309c:	5b                   	pop    ebx
  55309d:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5530a1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5530a8:	83 c4 24             	add    esp,0x24
  5530ab:	c3                   	ret
  5530ac:	51                   	push   ecx
  5530ad:	e8 3e b5 0a 00       	call   0x5fe5f0
  5530b2:	83 c4 04             	add    esp,0x4
  5530b5:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  5530b8:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  5530bc:	5e                   	pop    esi
  5530bd:	5b                   	pop    ebx
  5530be:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5530c5:	83 c4 24             	add    esp,0x24
  5530c8:	c3                   	ret
  5530c9:	90                   	nop
  5530ca:	90                   	nop
  5530cb:	90                   	nop
  5530cc:	90                   	nop
  5530cd:	90                   	nop
  5530ce:	90                   	nop
  5530cf:	90                   	nop
  5530d0:	8b 41 1c             	mov    eax,DWORD PTR [ecx+0x1c]
  5530d3:	c3                   	ret
  5530d4:	90                   	nop
  5530d5:	90                   	nop
  5530d6:	90                   	nop
  5530d7:	90                   	nop
  5530d8:	90                   	nop
  5530d9:	90                   	nop
  5530da:	90                   	nop
  5530db:	90                   	nop
  5530dc:	90                   	nop
  5530dd:	90                   	nop
  5530de:	90                   	nop
  5530df:	90                   	nop
  5530e0:	56                   	push   esi
  5530e1:	8b f1                	mov    esi,ecx
  5530e3:	8a 46 38             	mov    al,BYTE PTR [esi+0x38]
  5530e6:	84 c0                	test   al,al
  5530e8:	74 3a                	je     0x553124
  5530ea:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  5530ed:	85 c0                	test   eax,eax
  5530ef:	74 33                	je     0x553124
  5530f1:	57                   	push   edi
  5530f2:	8d 4e 4c             	lea    ecx,[esi+0x4c]
  5530f5:	e8 76 0f 00 00       	call   0x554070
  5530fa:	8b 78 30             	mov    edi,DWORD PTR [eax+0x30]
  5530fd:	8b ce                	mov    ecx,esi
  5530ff:	e8 cc fe ff ff       	call   0x552fd0
  553104:	50                   	push   eax
  553105:	8b cf                	mov    ecx,edi
  553107:	e8 14 0d 00 00       	call   0x553e20
  55310c:	50                   	push   eax
  55310d:	e8 9e 4f 07 00       	call   0x5c80b0
  553112:	83 c4 08             	add    esp,0x8
  553115:	85 c0                	test   eax,eax
  553117:	5f                   	pop    edi
  553118:	74 0a                	je     0x553124
  55311a:	b8 01 00 00 00       	mov    eax,0x1
  55311f:	88 46 38             	mov    BYTE PTR [esi+0x38],al
  553122:	5e                   	pop    esi
  553123:	c3                   	ret
  553124:	33 c0                	xor    eax,eax
  553126:	88 46 38             	mov    BYTE PTR [esi+0x38],al
  553129:	5e                   	pop    esi
  55312a:	c3                   	ret
  55312b:	90                   	nop
  55312c:	90                   	nop
  55312d:	90                   	nop
  55312e:	90                   	nop
  55312f:	90                   	nop
  553130:	56                   	push   esi
  553131:	8b f1                	mov    esi,ecx
  553133:	e8 a8 ff ff ff       	call   0x5530e0
  553138:	84 c0                	test   al,al
  55313a:	74 29                	je     0x553165
  55313c:	57                   	push   edi
  55313d:	8d 4e 4c             	lea    ecx,[esi+0x4c]
  553140:	e8 2b 0f 00 00       	call   0x554070
  553145:	8b 78 30             	mov    edi,DWORD PTR [eax+0x30]
  553148:	8b ce                	mov    ecx,esi
  55314a:	e8 81 fe ff ff       	call   0x552fd0
  55314f:	50                   	push   eax
  553150:	8b cf                	mov    ecx,edi
  553152:	e8 c9 0c 00 00       	call   0x553e20
  553157:	50                   	push   eax
  553158:	e8 93 4e 07 00       	call   0x5c7ff0
  55315d:	83 c4 08             	add    esp,0x8
  553160:	c6 46 38 00          	mov    BYTE PTR [esi+0x38],0x0
  553164:	5f                   	pop    edi
  553165:	5e                   	pop    esi
  553166:	c3                   	ret
  553167:	90                   	nop
  553168:	90                   	nop
  553169:	90                   	nop
  55316a:	90                   	nop
  55316b:	90                   	nop
  55316c:	90                   	nop
  55316d:	90                   	nop
  55316e:	90                   	nop
  55316f:	90                   	nop
  553170:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  553176:	6a ff                	push   0xffffffff
  553178:	68 f8 e2 63 00       	push   0x63e2f8
  55317d:	50                   	push   eax
  55317e:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  553183:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  55318a:	83 ec 64             	sub    esp,0x64
  55318d:	85 c0                	test   eax,eax
  55318f:	55                   	push   ebp
  553190:	56                   	push   esi
  553191:	57                   	push   edi
  553192:	8b f1                	mov    esi,ecx
  553194:	75 05                	jne    0x55319b
  553196:	e8 e5 92 f6 ff       	call   0x4bc480
  55319b:	8b b8 a0 03 00 00    	mov    edi,DWORD PTR [eax+0x3a0]
  5531a1:	83 cd ff             	or     ebp,0xffffffff
  5531a4:	8b 87 fc 00 00 00    	mov    eax,DWORD PTR [edi+0xfc]
  5531aa:	85 c0                	test   eax,eax
  5531ac:	75 48                	jne    0x5531f6
  5531ae:	8d 44 24 0f          	lea    eax,[esp+0xf]
  5531b2:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5531b6:	50                   	push   eax
  5531b7:	68 70 3f 6b 00       	push   0x6b3f70
  5531bc:	e8 4f 66 eb ff       	call   0x409810
  5531c1:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5531c5:	c7 44 24 78 00 00 00 	mov    DWORD PTR [esp+0x78],0x0
  5531cc:	00 
  5531cd:	51                   	push   ecx
  5531ce:	68 8f 01 00 00       	push   0x18f
  5531d3:	68 58 eb 68 00       	push   0x68eb58
  5531d8:	68 ec f8 68 00       	push   0x68f8ec
  5531dd:	e8 0e d6 04 00       	call   0x5a07f0
  5531e2:	ff d0                	call   eax
  5531e4:	83 c4 10             	add    esp,0x10
  5531e7:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5531eb:	89 6c 24 78          	mov    DWORD PTR [esp+0x78],ebp
  5531ef:	6a 01                	push   0x1
  5531f1:	e8 aa 0e eb ff       	call   0x4040a0
  5531f6:	8b bf fc 00 00 00    	mov    edi,DWORD PTR [edi+0xfc]
  5531fc:	8b ce                	mov    ecx,esi
  5531fe:	e8 dd fe ff ff       	call   0x5530e0
  553203:	84 c0                	test   al,al
  553205:	0f 84 eb 03 00 00    	je     0x5535f6
  55320b:	8b 46 30             	mov    eax,DWORD PTR [esi+0x30]
  55320e:	8b 56 2c             	mov    edx,DWORD PTR [esi+0x2c]
  553211:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
  553214:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  553218:	8a 46 39             	mov    al,BYTE PTR [esi+0x39]
  55321b:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  55321f:	84 c0                	test   al,al
  553221:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  553225:	74 6f                	je     0x553296
  553227:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  55322a:	85 c0                	test   eax,eax
  55322c:	75 48                	jne    0x553276
  55322e:	8d 54 24 0f          	lea    edx,[esp+0xf]
  553232:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  553236:	52                   	push   edx
  553237:	68 70 3f 6b 00       	push   0x6b3f70
  55323c:	e8 cf 65 eb ff       	call   0x409810
  553241:	8d 44 24 20          	lea    eax,[esp+0x20]
  553245:	c7 44 24 78 01 00 00 	mov    DWORD PTR [esp+0x78],0x1
  55324c:	00 
  55324d:	50                   	push   eax
  55324e:	68 b6 00 00 00       	push   0xb6
  553253:	68 38 d6 68 00       	push   0x68d638
  553258:	68 2c d6 68 00       	push   0x68d62c
  55325d:	e8 8e d5 04 00       	call   0x5a07f0
  553262:	ff d0                	call   eax
  553264:	83 c4 10             	add    esp,0x10
  553267:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  55326b:	89 6c 24 78          	mov    DWORD PTR [esp+0x78],ebp
  55326f:	6a 01                	push   0x1
  553271:	e8 2a 0e eb ff       	call   0x4040a0
  553276:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  553279:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  55327d:	8d 54 24 14          	lea    edx,[esp+0x14]
  553281:	51                   	push   ecx
  553282:	8b 40 30             	mov    eax,DWORD PTR [eax+0x30]
  553285:	52                   	push   edx
  553286:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  55328a:	8d 56 3c             	lea    edx,[esi+0x3c]
  55328d:	51                   	push   ecx
  55328e:	52                   	push   edx
  55328f:	8b c8                	mov    ecx,eax
  553291:	e8 ba b4 ff ff       	call   0x54e750
  553296:	8a 46 50             	mov    al,BYTE PTR [esi+0x50]
  553299:	84 c0                	test   al,al
  55329b:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  55329e:	74 67                	je     0x553307
  5532a0:	85 c0                	test   eax,eax
  5532a2:	75 48                	jne    0x5532ec
  5532a4:	8d 44 24 0f          	lea    eax,[esp+0xf]
  5532a8:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5532ac:	50                   	push   eax
  5532ad:	68 70 3f 6b 00       	push   0x6b3f70
  5532b2:	e8 59 65 eb ff       	call   0x409810
  5532b7:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5532bb:	c7 44 24 78 02 00 00 	mov    DWORD PTR [esp+0x78],0x2
  5532c2:	00 
  5532c3:	51                   	push   ecx
  5532c4:	68 b6 00 00 00       	push   0xb6
  5532c9:	68 38 d6 68 00       	push   0x68d638
  5532ce:	68 2c d6 68 00       	push   0x68d62c
  5532d3:	e8 18 d5 04 00       	call   0x5a07f0
  5532d8:	ff d0                	call   eax
  5532da:	83 c4 10             	add    esp,0x10
  5532dd:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5532e1:	89 6c 24 78          	mov    DWORD PTR [esp+0x78],ebp
  5532e5:	6a 01                	push   0x1
  5532e7:	e8 b4 0d eb ff       	call   0x4040a0
  5532ec:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  5532ef:	8d 8f 78 01 00 00    	lea    ecx,[edi+0x178]
  5532f5:	8b 50 38             	mov    edx,DWORD PTR [eax+0x38]
  5532f8:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  5532fc:	e8 bf 3f f5 ff       	call   0x4a72c0
  553301:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
  553305:	eb 65                	jmp    0x55336c
  553307:	85 c0                	test   eax,eax
  553309:	75 48                	jne    0x553353
  55330b:	8d 44 24 0f          	lea    eax,[esp+0xf]
  55330f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  553313:	50                   	push   eax
  553314:	68 70 3f 6b 00       	push   0x6b3f70
  553319:	e8 f2 64 eb ff       	call   0x409810
  55331e:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  553322:	c7 44 24 78 03 00 00 	mov    DWORD PTR [esp+0x78],0x3
  553329:	00 
  55332a:	51                   	push   ecx
  55332b:	68 b6 00 00 00       	push   0xb6
  553330:	68 38 d6 68 00       	push   0x68d638
  553335:	68 2c d6 68 00       	push   0x68d62c
  55333a:	e8 b1 d4 04 00       	call   0x5a07f0
  55333f:	ff d0                	call   eax
  553341:	83 c4 10             	add    esp,0x10
  553344:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  553348:	89 6c 24 78          	mov    DWORD PTR [esp+0x78],ebp
  55334c:	6a 01                	push   0x1
  55334e:	e8 4d 0d eb ff       	call   0x4040a0
  553353:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  553356:	8d 8f 04 01 00 00    	lea    ecx,[edi+0x104]
  55335c:	8b 50 38             	mov    edx,DWORD PTR [eax+0x38]
  55335f:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  553363:	e8 58 3f f5 ff       	call   0x4a72c0
  553368:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
  55336c:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
  553370:	51                   	push   ecx
  553371:	d9 1c 24             	fstp   DWORD PTR [esp]
  553374:	e8 b7 9c ff ff       	call   0x54d030
  553379:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  55337d:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  553381:	d9 5e 20             	fstp   DWORD PTR [esi+0x20]
  553384:	83 c4 04             	add    esp,0x4
  553387:	89 46 24             	mov    DWORD PTR [esi+0x24],eax
  55338a:	89 4e 28             	mov    DWORD PTR [esi+0x28],ecx
  55338d:	e8 1e 3c fc ff       	call   0x516fb0
  553392:	8b f8                	mov    edi,eax
  553394:	8b 47 64             	mov    eax,DWORD PTR [edi+0x64]
  553397:	3d 00 00 00 80       	cmp    eax,0x80000000
  55339c:	75 18                	jne    0x5533b6
  55339e:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  5533a1:	85 c0                	test   eax,eax
  5533a3:	75 05                	jne    0x5533aa
  5533a5:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5533aa:	50                   	push   eax
  5533ab:	e8 60 7b 0b 00       	call   0x60af10
  5533b0:	83 c4 04             	add    esp,0x4
  5533b3:	89 47 64             	mov    DWORD PTR [edi+0x64],eax
  5533b6:	85 c0                	test   eax,eax
  5533b8:	0f 84 c9 00 00 00    	je     0x553487
  5533be:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  5533c1:	85 c0                	test   eax,eax
  5533c3:	75 65                	jne    0x55342a
  5533c5:	8a 54 24 0f          	mov    dl,BYTE PTR [esp+0xf]
  5533c9:	6a 00                	push   0x0
  5533cb:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  5533cf:	88 54 24 24          	mov    BYTE PTR [esp+0x24],dl
  5533d3:	e8 c8 0c eb ff       	call   0x4040a0
  5533d8:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  5533dd:	8b cd                	mov    ecx,ebp
  5533df:	33 c0                	xor    eax,eax
  5533e1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5533e3:	f7 d1                	not    ecx
  5533e5:	49                   	dec    ecx
  5533e6:	51                   	push   ecx
  5533e7:	68 70 3f 6b 00       	push   0x6b3f70
  5533ec:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5533f0:	e8 fb 0c eb ff       	call   0x4040f0
  5533f5:	8d 44 24 20          	lea    eax,[esp+0x20]
  5533f9:	c7 44 24 78 04 00 00 	mov    DWORD PTR [esp+0x78],0x4
  553400:	00 
  553401:	50                   	push   eax
  553402:	68 b6 00 00 00       	push   0xb6
  553407:	68 38 d6 68 00       	push   0x68d638
  55340c:	68 2c d6 68 00       	push   0x68d62c
  553411:	e8 da d3 04 00       	call   0x5a07f0
  553416:	ff d0                	call   eax
  553418:	83 c4 10             	add    esp,0x10
  55341b:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  55341f:	89 6c 24 78          	mov    DWORD PTR [esp+0x78],ebp
  553423:	6a 01                	push   0x1
  553425:	e8 76 0c eb ff       	call   0x4040a0
  55342a:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  55342d:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
  553430:	85 c0                	test   eax,eax
  553432:	75 05                	jne    0x553439
  553434:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  553439:	d9 46 24             	fld    DWORD PTR [esi+0x24]
  55343c:	83 ec 08             	sub    esp,0x8
  55343f:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  553443:	dd 1c 24             	fstp   QWORD PTR [esp]
  553446:	d9 46 28             	fld    DWORD PTR [esi+0x28]
  553449:	83 ec 08             	sub    esp,0x8
  55344c:	dd 1c 24             	fstp   QWORD PTR [esp]
  55344f:	d9 46 20             	fld    DWORD PTR [esi+0x20]
  553452:	83 ec 08             	sub    esp,0x8
  553455:	dd 1c 24             	fstp   QWORD PTR [esp]
  553458:	50                   	push   eax
  553459:	68 7c 1f 6a 00       	push   0x6a1f7c
  55345e:	51                   	push   ecx
  55345f:	e8 2c af 05 00       	call   0x5ae390
  553464:	50                   	push   eax
  553465:	c7 84 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],0x5
  55346c:	05 00 00 00 
  553470:	e8 8b ca 05 00       	call   0x5aff00
  553475:	83 c4 28             	add    esp,0x28
  553478:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  55347c:	89 6c 24 78          	mov    DWORD PTR [esp+0x78],ebp
  553480:	6a 01                	push   0x1
  553482:	e8 19 0c eb ff       	call   0x4040a0
  553487:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  55348a:	85 c0                	test   eax,eax
  55348c:	75 65                	jne    0x5534f3
  55348e:	8a 54 24 0f          	mov    dl,BYTE PTR [esp+0xf]
  553492:	6a 00                	push   0x0
  553494:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  553498:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  55349c:	e8 ff 0b eb ff       	call   0x4040a0
  5534a1:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  5534a6:	8b cd                	mov    ecx,ebp
  5534a8:	33 c0                	xor    eax,eax
  5534aa:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5534ac:	f7 d1                	not    ecx
  5534ae:	49                   	dec    ecx
  5534af:	51                   	push   ecx
  5534b0:	68 70 3f 6b 00       	push   0x6b3f70
  5534b5:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  5534b9:	e8 32 0c eb ff       	call   0x4040f0
  5534be:	8d 44 24 30          	lea    eax,[esp+0x30]
  5534c2:	c7 44 24 78 06 00 00 	mov    DWORD PTR [esp+0x78],0x6
  5534c9:	00 
  5534ca:	50                   	push   eax
  5534cb:	68 b6 00 00 00       	push   0xb6
  5534d0:	68 38 d6 68 00       	push   0x68d638
  5534d5:	68 2c d6 68 00       	push   0x68d62c
  5534da:	e8 11 d3 04 00       	call   0x5a07f0
  5534df:	ff d0                	call   eax
  5534e1:	83 c4 10             	add    esp,0x10
  5534e4:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5534e8:	89 6c 24 78          	mov    DWORD PTR [esp+0x78],ebp
  5534ec:	6a 01                	push   0x1
  5534ee:	e8 ad 0b eb ff       	call   0x4040a0
  5534f3:	8b 46 4c             	mov    eax,DWORD PTR [esi+0x4c]
  5534f6:	53                   	push   ebx
  5534f7:	8b 58 30             	mov    ebx,DWORD PTR [eax+0x30]
  5534fa:	8a 83 8c 00 00 00    	mov    al,BYTE PTR [ebx+0x8c]
  553500:	84 c0                	test   al,al
  553502:	75 65                	jne    0x553569
  553504:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  553508:	6a 00                	push   0x0
  55350a:	88 4c 24 48          	mov    BYTE PTR [esp+0x48],cl
  55350e:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  553512:	e8 89 0b eb ff       	call   0x4040a0
  553517:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  55351c:	8b cd                	mov    ecx,ebp
  55351e:	33 c0                	xor    eax,eax
  553520:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  553522:	f7 d1                	not    ecx
  553524:	49                   	dec    ecx
  553525:	51                   	push   ecx
  553526:	68 70 3f 6b 00       	push   0x6b3f70
  55352b:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  55352f:	e8 bc 0b eb ff       	call   0x4040f0
  553534:	8d 54 24 44          	lea    edx,[esp+0x44]
  553538:	c7 44 24 7c 07 00 00 	mov    DWORD PTR [esp+0x7c],0x7
  55353f:	00 
  553540:	52                   	push   edx
  553541:	68 2e 01 00 00       	push   0x12e
  553546:	68 dc 2c 69 00       	push   0x692cdc
  55354b:	68 b0 1b 69 00       	push   0x691bb0
  553550:	e8 9b d2 04 00       	call   0x5a07f0
  553555:	ff d0                	call   eax
  553557:	83 c4 10             	add    esp,0x10
  55355a:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  55355e:	89 6c 24 7c          	mov    DWORD PTR [esp+0x7c],ebp
  553562:	6a 01                	push   0x1
  553564:	e8 37 0b eb ff       	call   0x4040a0
  553569:	8b 43 50             	mov    eax,DWORD PTR [ebx+0x50]
  55356c:	85 c0                	test   eax,eax
  55356e:	75 65                	jne    0x5535d5
  553570:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  553574:	6a 00                	push   0x0
  553576:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  55357a:	88 44 24 58          	mov    BYTE PTR [esp+0x58],al
  55357e:	e8 1d 0b eb ff       	call   0x4040a0
  553583:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  553588:	8b cd                	mov    ecx,ebp
  55358a:	33 c0                	xor    eax,eax
  55358c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  55358e:	f7 d1                	not    ecx
  553590:	49                   	dec    ecx
  553591:	51                   	push   ecx
  553592:	68 70 3f 6b 00       	push   0x6b3f70
  553597:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  55359b:	e8 50 0b eb ff       	call   0x4040f0
  5535a0:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5535a4:	c7 44 24 7c 08 00 00 	mov    DWORD PTR [esp+0x7c],0x8
  5535ab:	00 
  5535ac:	51                   	push   ecx
  5535ad:	68 2f 01 00 00       	push   0x12f
  5535b2:	68 dc 2c 69 00       	push   0x692cdc
  5535b7:	68 80 1a 6a 00       	push   0x6a1a80
  5535bc:	e8 2f d2 04 00       	call   0x5a07f0
  5535c1:	ff d0                	call   eax
  5535c3:	83 c4 10             	add    esp,0x10
  5535c6:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  5535ca:	89 6c 24 7c          	mov    DWORD PTR [esp+0x7c],ebp
  5535ce:	6a 01                	push   0x1
  5535d0:	e8 cb 0a eb ff       	call   0x4040a0
  5535d5:	8b 56 24             	mov    edx,DWORD PTR [esi+0x24]
  5535d8:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
  5535db:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
  5535de:	8b 5b 50             	mov    ebx,DWORD PTR [ebx+0x50]
  5535e1:	52                   	push   edx
  5535e2:	50                   	push   eax
  5535e3:	51                   	push   ecx
  5535e4:	8b ce                	mov    ecx,esi
  5535e6:	e8 e5 f9 ff ff       	call   0x552fd0
  5535eb:	50                   	push   eax
  5535ec:	53                   	push   ebx
  5535ed:	e8 2e 4a 07 00       	call   0x5c8020
  5535f2:	83 c4 14             	add    esp,0x14
  5535f5:	5b                   	pop    ebx
  5535f6:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  5535fa:	5f                   	pop    edi
  5535fb:	5e                   	pop    esi
  5535fc:	5d                   	pop    ebp
  5535fd:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  553604:	83 c4 70             	add    esp,0x70
  553607:	c3                   	ret
  553608:	90                   	nop
  553609:	90                   	nop
  55360a:	90                   	nop
  55360b:	90                   	nop
  55360c:	90                   	nop
  55360d:	90                   	nop
  55360e:	90                   	nop
  55360f:	90                   	nop
  553610:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  553614:	89 41 2c             	mov    DWORD PTR [ecx+0x2c],eax
  553617:	e8 54 fb ff ff       	call   0x553170
  55361c:	c2 04 00             	ret    0x4
  55361f:	90                   	nop
  553620:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  553624:	d8 59 30             	fcomp  DWORD PTR [ecx+0x30]
  553627:	df e0                	fnstsw ax
  553629:	f6 c4 40             	test   ah,0x40
  55362c:	75 0c                	jne    0x55363a
  55362e:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  553632:	89 41 30             	mov    DWORD PTR [ecx+0x30],eax
  553635:	e8 36 fb ff ff       	call   0x553170
  55363a:	c2 04 00             	ret    0x4
  55363d:	90                   	nop
  55363e:	90                   	nop
  55363f:	90                   	nop
