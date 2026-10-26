
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004fd100 <.text+0xfc100>:
  4fd100:	6a ff                	push   0xffffffff
  4fd102:	68 28 56 63 00       	push   0x635628
  4fd107:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4fd10d:	50                   	push   eax
  4fd10e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4fd115:	83 ec 14             	sub    esp,0x14
  4fd118:	53                   	push   ebx
  4fd119:	8b 5c 24 28          	mov    ebx,DWORD PTR [esp+0x28]
  4fd11d:	56                   	push   esi
  4fd11e:	8b f1                	mov    esi,ecx
  4fd120:	33 c9                	xor    ecx,ecx
  4fd122:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  4fd126:	3b d9                	cmp    ebx,ecx
  4fd128:	0f 85 af 00 00 00    	jne    0x4fd1dd
  4fd12e:	8a 44 24 2c          	mov    al,BYTE PTR [esp+0x2c]
  4fd132:	55                   	push   ebp
  4fd133:	57                   	push   edi
  4fd134:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  4fd138:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  4fd13c:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  4fd140:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  4fd144:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4fd149:	83 c9 ff             	or     ecx,0xffffffff
  4fd14c:	33 c0                	xor    eax,eax
  4fd14e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4fd150:	f7 d1                	not    ecx
  4fd152:	49                   	dec    ecx
  4fd153:	6a 01                	push   0x1
  4fd155:	8b e9                	mov    ebp,ecx
  4fd157:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4fd15b:	55                   	push   ebp
  4fd15c:	e8 df 47 f0 ff       	call   0x401940
  4fd161:	84 c0                	test   al,al
  4fd163:	74 29                	je     0x4fd18e
  4fd165:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4fd169:	8b cd                	mov    ecx,ebp
  4fd16b:	8b d1                	mov    edx,ecx
  4fd16d:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4fd172:	c1 e9 02             	shr    ecx,0x2
  4fd175:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4fd177:	8b ca                	mov    ecx,edx
  4fd179:	83 e1 03             	and    ecx,0x3
  4fd17c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4fd17e:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4fd182:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  4fd186:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  4fd18a:	c6 04 28 00          	mov    BYTE PTR [eax+ebp*1],0x0
  4fd18e:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4fd192:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
  4fd199:	00 
  4fd19a:	51                   	push   ecx
  4fd19b:	68 da 00 00 00       	push   0xda
  4fd1a0:	68 f4 9e 69 00       	push   0x699ef4
  4fd1a5:	68 0c c7 69 00       	push   0x69c70c
  4fd1aa:	e8 41 36 0a 00       	call   0x5a07f0
  4fd1af:	ff d0                	call   eax
  4fd1b1:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  4fd1b5:	83 c4 10             	add    esp,0x10
  4fd1b8:	85 c0                	test   eax,eax
  4fd1ba:	5f                   	pop    edi
  4fd1bb:	5d                   	pop    ebp
  4fd1bc:	74 1d                	je     0x4fd1db
  4fd1be:	8d 48 ff             	lea    ecx,[eax-0x1]
  4fd1c1:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4fd1c4:	84 c0                	test   al,al
  4fd1c6:	74 0a                	je     0x4fd1d2
  4fd1c8:	3c ff                	cmp    al,0xff
  4fd1ca:	74 06                	je     0x4fd1d2
  4fd1cc:	fe c8                	dec    al
  4fd1ce:	88 01                	mov    BYTE PTR [ecx],al
  4fd1d0:	eb 09                	jmp    0x4fd1db
  4fd1d2:	51                   	push   ecx
  4fd1d3:	e8 18 14 10 00       	call   0x5fe5f0
  4fd1d8:	83 c4 04             	add    esp,0x4
  4fd1db:	33 c9                	xor    ecx,ecx
  4fd1dd:	8b 06                	mov    eax,DWORD PTR [esi]
  4fd1df:	3b c1                	cmp    eax,ecx
  4fd1e1:	75 08                	jne    0x4fd1eb
  4fd1e3:	89 4b 04             	mov    DWORD PTR [ebx+0x4],ecx
  4fd1e6:	89 4b 08             	mov    DWORD PTR [ebx+0x8],ecx
  4fd1e9:	eb 0b                	jmp    0x4fd1f6
  4fd1eb:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
  4fd1ee:	89 4b 08             	mov    DWORD PTR [ebx+0x8],ecx
  4fd1f1:	8b 16                	mov    edx,DWORD PTR [esi]
  4fd1f3:	89 5a 08             	mov    DWORD PTR [edx+0x8],ebx
  4fd1f6:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  4fd1fa:	89 1e                	mov    DWORD PTR [esi],ebx
  4fd1fc:	5e                   	pop    esi
  4fd1fd:	5b                   	pop    ebx
  4fd1fe:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4fd205:	83 c4 20             	add    esp,0x20
  4fd208:	c2 04 00             	ret    0x4
