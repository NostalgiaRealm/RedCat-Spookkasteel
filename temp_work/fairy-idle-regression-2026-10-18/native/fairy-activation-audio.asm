
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047cdb0 <.text+0x7bdb0>:
  47cdb0:	56                   	push   esi
  47cdb1:	8b f1                	mov    esi,ecx
  47cdb3:	8a 86 e8 4b 00 00    	mov    al,BYTE PTR [esi+0x4be8]
  47cdb9:	84 c0                	test   al,al
  47cdbb:	0f 85 5d 01 00 00    	jne    0x47cf1e
  47cdc1:	57                   	push   edi
  47cdc2:	8d 8e 8c 03 00 00    	lea    ecx,[esi+0x38c]
  47cdc8:	c6 86 e8 4b 00 00 01 	mov    BYTE PTR [esi+0x4be8],0x1
  47cdcf:	e8 3c 19 00 00       	call   0x47e710
  47cdd4:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  47cdda:	8d 86 90 03 00 00    	lea    eax,[esi+0x390]
  47cde0:	8b 11                	mov    edx,DWORD PTR [ecx]
  47cde2:	89 10                	mov    DWORD PTR [eax],edx
  47cde4:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  47cde7:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47cdea:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  47cded:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47cdf0:	8b 96 14 4b 00 00    	mov    edx,DWORD PTR [esi+0x4b14]
  47cdf6:	52                   	push   edx
  47cdf7:	8d 8e e4 4a 00 00    	lea    ecx,[esi+0x4ae4]
  47cdfd:	e8 ae 73 f8 ff       	call   0x4041b0
  47ce02:	8b 86 18 4b 00 00    	mov    eax,DWORD PTR [esi+0x4b18]
  47ce08:	8d 8e f4 4a 00 00    	lea    ecx,[esi+0x4af4]
  47ce0e:	50                   	push   eax
  47ce0f:	e8 9c 73 f8 ff       	call   0x4041b0
  47ce14:	d9 86 3c 4b 00 00    	fld    DWORD PTR [esi+0x4b3c]
  47ce1a:	e8 01 dd 18 00       	call   0x60ab20
  47ce1f:	50                   	push   eax
  47ce20:	8d 8e 04 4b 00 00    	lea    ecx,[esi+0x4b04]
  47ce26:	e8 85 73 f8 ff       	call   0x4041b0
  47ce2b:	c7 86 40 4b 00 00 00 	mov    DWORD PTR [esi+0x4b40],0x0
  47ce32:	00 00 00 
  47ce35:	8b 0d 68 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e268
  47ce3b:	89 8e 48 4b 00 00    	mov    DWORD PTR [esi+0x4b48],ecx
  47ce41:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  47ce47:	85 ff                	test   edi,edi
  47ce49:	75 07                	jne    0x47ce52
  47ce4b:	e8 30 f6 03 00       	call   0x4bc480
  47ce50:	8b f8                	mov    edi,eax
  47ce52:	8b 87 e8 04 00 00    	mov    eax,DWORD PTR [edi+0x4e8]
  47ce58:	3d 00 00 00 80       	cmp    eax,0x80000000
  47ce5d:	75 1e                	jne    0x47ce7d
  47ce5f:	8b 87 9c 04 00 00    	mov    eax,DWORD PTR [edi+0x49c]
  47ce65:	85 c0                	test   eax,eax
  47ce67:	75 05                	jne    0x47ce6e
  47ce69:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47ce6e:	50                   	push   eax
  47ce6f:	e8 9c e0 18 00       	call   0x60af10
  47ce74:	83 c4 04             	add    esp,0x4
  47ce77:	89 87 e8 04 00 00    	mov    DWORD PTR [edi+0x4e8],eax
  47ce7d:	85 c0                	test   eax,eax
  47ce7f:	0f 85 86 00 00 00    	jne    0x47cf0b
  47ce85:	53                   	push   ebx
  47ce86:	55                   	push   ebp
  47ce87:	8d 9e 20 4b 00 00    	lea    ebx,[esi+0x4b20]
  47ce8d:	8d be 90 44 00 00    	lea    edi,[esi+0x4490]
  47ce93:	bd 05 00 00 00       	mov    ebp,0x5
  47ce98:	6a 01                	push   0x1
  47ce9a:	53                   	push   ebx
  47ce9b:	8b cf                	mov    ecx,edi
  47ce9d:	e8 ce 1b 00 00       	call   0x47ea70
  47cea2:	8b cf                	mov    ecx,edi
  47cea4:	e8 67 18 00 00       	call   0x47e710
  47cea9:	81 c7 44 01 00 00    	add    edi,0x144
  47ceaf:	4d                   	dec    ebp
  47ceb0:	75 e6                	jne    0x47ce98
  47ceb2:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47ceb8:	5d                   	pop    ebp
  47ceb9:	85 c9                	test   ecx,ecx
  47cebb:	5b                   	pop    ebx
  47cebc:	74 46                	je     0x47cf04
  47cebe:	6a 01                	push   0x1
  47cec0:	e8 8b 54 08 00       	call   0x502350
  47cec5:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47cecb:	6a 00                	push   0x0
  47cecd:	e8 8e 5e 06 00       	call   0x4e2d60
  47ced2:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
  47ced8:	d9 42 18             	fld    DWORD PTR [edx+0x18]
  47cedb:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  47cee1:	e8 3a dc 18 00       	call   0x60ab20
  47cee6:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47ceec:	50                   	push   eax
  47ceed:	e8 6e 62 06 00       	call   0x4e3160
  47cef2:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47cef8:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
  47cefe:	52                   	push   edx
  47ceff:	8b 01                	mov    eax,DWORD PTR [ecx]
  47cf01:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  47cf04:	c6 86 54 4b 00 00 01 	mov    BYTE PTR [esi+0x4b54],0x1
  47cf0b:	6a 00                	push   0x0
  47cf0d:	8b ce                	mov    ecx,esi
  47cf0f:	e8 dc 03 00 00       	call   0x47d2f0
  47cf14:	6a 02                	push   0x2
  47cf16:	8b ce                	mov    ecx,esi
  47cf18:	e8 53 06 00 00       	call   0x47d570
  47cf1d:	5f                   	pop    edi
  47cf1e:	5e                   	pop    esi
  47cf1f:	c3                   	ret
  47cf20:	6a ff                	push   0xffffffff
  47cf22:	68 18 8e 62 00       	push   0x628e18
  47cf27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47cf2d:	50                   	push   eax
  47cf2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47cf35:	83 ec 34             	sub    esp,0x34
  47cf38:	53                   	push   ebx
  47cf39:	55                   	push   ebp
  47cf3a:	8b 6c 24 4c          	mov    ebp,DWORD PTR [esp+0x4c]
  47cf3e:	56                   	push   esi
  47cf3f:	57                   	push   edi
  47cf40:	55                   	push   ebp
  47cf41:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47cf45:	e8 a6 02 00 00       	call   0x47d1f0
  47cf4a:	e8 f1 66 0d 00       	call   0x553640
  47cf4f:	84 c0                	test   al,al
  47cf51:	0f 84 5d 02 00 00    	je     0x47d1b4
  47cf57:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47cf5c:	85 c0                	test   eax,eax
  47cf5e:	75 0e                	jne    0x47cf6e
  47cf60:	e8 1b e3 0d 00       	call   0x55b280
  47cf65:	8b f0                	mov    esi,eax
  47cf67:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47cf6c:	eb 02                	jmp    0x47cf70
  47cf6e:	8b f0                	mov    esi,eax
  47cf70:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  47cf76:	85 c9                	test   ecx,ecx
  47cf78:	75 6f                	jne    0x47cfe9
  47cf7a:	8a 44 24 54          	mov    al,BYTE PTR [esp+0x54]
  47cf7e:	6a 00                	push   0x0
  47cf80:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47cf84:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  47cf88:	e8 13 71 f8 ff       	call   0x4040a0
  47cf8d:	83 cb ff             	or     ebx,0xffffffff
  47cf90:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47cf95:	8b cb                	mov    ecx,ebx
  47cf97:	33 c0                	xor    eax,eax
  47cf99:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47cf9b:	f7 d1                	not    ecx
  47cf9d:	49                   	dec    ecx
  47cf9e:	51                   	push   ecx
  47cf9f:	68 70 3f 6b 00       	push   0x6b3f70
  47cfa4:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47cfa8:	e8 43 71 f8 ff       	call   0x4040f0
  47cfad:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47cfb1:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  47cfb8:	00 
  47cfb9:	51                   	push   ecx
  47cfba:	68 8f 01 00 00       	push   0x18f
  47cfbf:	68 58 eb 68 00       	push   0x68eb58
  47cfc4:	68 ec f8 68 00       	push   0x68f8ec
  47cfc9:	e8 22 38 12 00       	call   0x5a07f0
  47cfce:	ff d0                	call   eax
  47cfd0:	83 c4 10             	add    esp,0x10
  47cfd3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47cfd7:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  47cfdb:	6a 01                	push   0x1
  47cfdd:	e8 be 70 f8 ff       	call   0x4040a0
  47cfe2:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47cfe7:	eb 03                	jmp    0x47cfec
  47cfe9:	83 cb ff             	or     ebx,0xffffffff
  47cfec:	8b b6 fc 00 00 00    	mov    esi,DWORD PTR [esi+0xfc]
  47cff2:	8a 8e 8c 00 00 00    	mov    cl,BYTE PTR [esi+0x8c]
  47cff8:	84 c9                	test   cl,cl
  47cffa:	0f 84 b4 01 00 00    	je     0x47d1b4
  47d000:	85 c0                	test   eax,eax
  47d002:	75 05                	jne    0x47d009
  47d004:	e8 77 e2 0d 00       	call   0x55b280
  47d009:	8b f0                	mov    esi,eax
  47d00b:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  47d011:	85 c0                	test   eax,eax
  47d013:	75 65                	jne    0x47d07a
  47d015:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  47d019:	6a 00                	push   0x0
  47d01b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47d01f:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  47d023:	e8 78 70 f8 ff       	call   0x4040a0
  47d028:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d02d:	8b cb                	mov    ecx,ebx
  47d02f:	33 c0                	xor    eax,eax
  47d031:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d033:	f7 d1                	not    ecx
  47d035:	49                   	dec    ecx
  47d036:	51                   	push   ecx
  47d037:	68 70 3f 6b 00       	push   0x6b3f70
  47d03c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47d040:	e8 ab 70 f8 ff       	call   0x4040f0
  47d045:	8d 44 24 14          	lea    eax,[esp+0x14]
  47d049:	c7 44 24 4c 01 00 00 	mov    DWORD PTR [esp+0x4c],0x1
  47d050:	00 
  47d051:	50                   	push   eax
  47d052:	68 8f 01 00 00       	push   0x18f
  47d057:	68 58 eb 68 00       	push   0x68eb58
  47d05c:	68 ec f8 68 00       	push   0x68f8ec
  47d061:	e8 8a 37 12 00       	call   0x5a07f0
  47d066:	ff d0                	call   eax
  47d068:	83 c4 10             	add    esp,0x10
  47d06b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47d06f:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  47d073:	6a 01                	push   0x1
  47d075:	e8 26 70 f8 ff       	call   0x4040a0
  47d07a:	8b b6 fc 00 00 00    	mov    esi,DWORD PTR [esi+0xfc]
  47d080:	8a 86 8c 00 00 00    	mov    al,BYTE PTR [esi+0x8c]
  47d086:	84 c0                	test   al,al
  47d088:	75 65                	jne    0x47d0ef
  47d08a:	8a 4c 24 54          	mov    cl,BYTE PTR [esp+0x54]
  47d08e:	6a 00                	push   0x0
  47d090:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  47d094:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47d098:	e8 03 70 f8 ff       	call   0x4040a0
  47d09d:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d0a2:	8b cb                	mov    ecx,ebx
  47d0a4:	33 c0                	xor    eax,eax
  47d0a6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d0a8:	f7 d1                	not    ecx
  47d0aa:	49                   	dec    ecx
  47d0ab:	51                   	push   ecx
  47d0ac:	68 70 3f 6b 00       	push   0x6b3f70
  47d0b1:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47d0b5:	e8 36 70 f8 ff       	call   0x4040f0
  47d0ba:	8d 54 24 24          	lea    edx,[esp+0x24]
  47d0be:	c7 44 24 4c 02 00 00 	mov    DWORD PTR [esp+0x4c],0x2
  47d0c5:	00 
  47d0c6:	52                   	push   edx
  47d0c7:	68 4b 01 00 00       	push   0x14b
  47d0cc:	68 dc 2c 69 00       	push   0x692cdc
  47d0d1:	68 b0 1b 69 00       	push   0x691bb0
  47d0d6:	e8 15 37 12 00       	call   0x5a07f0
  47d0db:	ff d0                	call   eax
  47d0dd:	83 c4 10             	add    esp,0x10
  47d0e0:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47d0e4:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  47d0e8:	6a 01                	push   0x1
  47d0ea:	e8 b1 6f f8 ff       	call   0x4040a0
  47d0ef:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47d0f3:	8d 84 6d 6c 09 00 00 	lea    eax,[ebp+ebp*2+0x96c]
  47d0fa:	8d 54 24 54          	lea    edx,[esp+0x54]
  47d0fe:	8d 1c c1             	lea    ebx,[ecx+eax*8]
  47d101:	8d 4e 14             	lea    ecx,[esi+0x14]
  47d104:	53                   	push   ebx
  47d105:	52                   	push   edx
  47d106:	e8 d5 43 0d 00       	call   0x5514e0
  47d10b:	8b f8                	mov    edi,eax
  47d10d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47d111:	8d 44 6d 00          	lea    eax,[ebp+ebp*2+0x0]
  47d115:	c7 44 24 4c 03 00 00 	mov    DWORD PTR [esp+0x4c],0x3
  47d11c:	00 
  47d11d:	8d b4 c1 58 4b 00 00 	lea    esi,[ecx+eax*8+0x4b58]
  47d124:	8b 07                	mov    eax,DWORD PTR [edi]
  47d126:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47d128:	3b c8                	cmp    ecx,eax
  47d12a:	74 1f                	je     0x47d14b
  47d12c:	85 c9                	test   ecx,ecx
  47d12e:	74 10                	je     0x47d140
  47d130:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d133:	48                   	dec    eax
  47d134:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d137:	75 07                	jne    0x47d140
  47d139:	6a 00                	push   0x0
  47d13b:	e8 80 ee 12 00       	call   0x5abfc0
  47d140:	8b 17                	mov    edx,DWORD PTR [edi]
  47d142:	8b ce                	mov    ecx,esi
  47d144:	89 16                	mov    DWORD PTR [esi],edx
  47d146:	e8 65 73 10 00       	call   0x5844b0
  47d14b:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  47d14f:	c7 44 24 4c ff ff ff 	mov    DWORD PTR [esp+0x4c],0xffffffff
  47d156:	ff 
  47d157:	85 c9                	test   ecx,ecx
  47d159:	74 05                	je     0x47d160
  47d15b:	e8 70 c7 f8 ff       	call   0x4098d0
  47d160:	83 3e 00             	cmp    DWORD PTR [esi],0x0
  47d163:	75 5c                	jne    0x47d1c1
  47d165:	8b 5b 04             	mov    ebx,DWORD PTR [ebx+0x4]
  47d168:	85 db                	test   ebx,ebx
  47d16a:	75 05                	jne    0x47d171
  47d16c:	bb b4 a3 64 00       	mov    ebx,0x64a3b4
  47d171:	53                   	push   ebx
  47d172:	8d 44 24 38          	lea    eax,[esp+0x38]
  47d176:	68 a8 2c 69 00       	push   0x692ca8
  47d17b:	50                   	push   eax
  47d17c:	e8 0f 12 13 00       	call   0x5ae390
  47d181:	50                   	push   eax
  47d182:	c7 44 24 5c 04 00 00 	mov    DWORD PTR [esp+0x5c],0x4
  47d189:	00 
  47d18a:	e8 71 2d 13 00       	call   0x5aff00
  47d18f:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  47d193:	83 c4 10             	add    esp,0x10
  47d196:	85 c9                	test   ecx,ecx
  47d198:	74 27                	je     0x47d1c1
  47d19a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  47d19d:	49                   	dec    ecx
  47d19e:	84 c0                	test   al,al
  47d1a0:	74 0a                	je     0x47d1ac
  47d1a2:	3c ff                	cmp    al,0xff
  47d1a4:	74 06                	je     0x47d1ac
  47d1a6:	fe c8                	dec    al
  47d1a8:	88 01                	mov    BYTE PTR [ecx],al
  47d1aa:	eb 15                	jmp    0x47d1c1
  47d1ac:	51                   	push   ecx
  47d1ad:	e8 3e 14 18 00       	call   0x5fe5f0
  47d1b2:	eb 0a                	jmp    0x47d1be
  47d1b4:	68 8c 2c 69 00       	push   0x692c8c
  47d1b9:	e8 72 2c 13 00       	call   0x5afe30
  47d1be:	83 c4 04             	add    esp,0x4
  47d1c1:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  47d1c5:	8d 4c 6d 00          	lea    ecx,[ebp+ebp*2+0x0]
  47d1c9:	33 c0                	xor    eax,eax
  47d1cb:	5f                   	pop    edi
  47d1cc:	8b b4 ca 58 4b 00 00 	mov    esi,DWORD PTR [edx+ecx*8+0x4b58]
  47d1d3:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  47d1d7:	85 f6                	test   esi,esi
  47d1d9:	5e                   	pop    esi
  47d1da:	5d                   	pop    ebp
  47d1db:	0f 95 c0             	setne  al
  47d1de:	5b                   	pop    ebx
  47d1df:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47d1e6:	83 c4 40             	add    esp,0x40
  47d1e9:	c2 04 00             	ret    0x4
  47d1ec:	90                   	nop
  47d1ed:	90                   	nop
  47d1ee:	90                   	nop
  47d1ef:	90                   	nop
  47d1f0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47d1f6:	6a ff                	push   0xffffffff
  47d1f8:	68 40 8e 62 00       	push   0x628e40
  47d1fd:	50                   	push   eax
  47d1fe:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47d202:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47d209:	83 ec 10             	sub    esp,0x10
  47d20c:	8d 04 40             	lea    eax,[eax+eax*2]
  47d20f:	56                   	push   esi
  47d210:	8b 94 c1 5c 4b 00 00 	mov    edx,DWORD PTR [ecx+eax*8+0x4b5c]
  47d217:	8d b4 c1 5c 4b 00 00 	lea    esi,[ecx+eax*8+0x4b5c]
  47d21e:	85 d2                	test   edx,edx
  47d220:	0f 95 c0             	setne  al
  47d223:	84 c0                	test   al,al
  47d225:	0f 84 a5 00 00 00    	je     0x47d2d0
  47d22b:	8b c2                	mov    eax,edx
  47d22d:	85 c0                	test   eax,eax
  47d22f:	75 6c                	jne    0x47d29d
  47d231:	8a 4c 24 24          	mov    cl,BYTE PTR [esp+0x24]
  47d235:	57                   	push   edi
  47d236:	88 4c 24 08          	mov    BYTE PTR [esp+0x8],cl
  47d23a:	6a 00                	push   0x0
  47d23c:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  47d240:	e8 5b 6e f8 ff       	call   0x4040a0
  47d245:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d24a:	83 c9 ff             	or     ecx,0xffffffff
  47d24d:	33 c0                	xor    eax,eax
  47d24f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d251:	f7 d1                	not    ecx
  47d253:	49                   	dec    ecx
  47d254:	51                   	push   ecx
  47d255:	68 70 3f 6b 00       	push   0x6b3f70
  47d25a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  47d25e:	e8 8d 6e f8 ff       	call   0x4040f0
  47d263:	8d 54 24 08          	lea    edx,[esp+0x8]
  47d267:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
  47d26e:	00 
  47d26f:	52                   	push   edx
  47d270:	68 b6 00 00 00       	push   0xb6
  47d275:	68 38 d6 68 00       	push   0x68d638
  47d27a:	68 2c d6 68 00       	push   0x68d62c
  47d27f:	e8 6c 35 12 00       	call   0x5a07f0
  47d284:	ff d0                	call   eax
  47d286:	83 c4 10             	add    esp,0x10
  47d289:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  47d28d:	c7 44 24 20 ff ff ff 	mov    DWORD PTR [esp+0x20],0xffffffff
  47d294:	ff 
  47d295:	6a 01                	push   0x1
  47d297:	e8 04 6e f8 ff       	call   0x4040a0
  47d29c:	5f                   	pop    edi
  47d29d:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47d29f:	e8 8c 5e 0d 00       	call   0x553130
  47d2a4:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
  47d2ab:	00 
  47d2ac:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47d2ae:	c7 44 24 1c 01 00 00 	mov    DWORD PTR [esp+0x1c],0x1
  47d2b5:	00 
  47d2b6:	85 c9                	test   ecx,ecx
  47d2b8:	74 16                	je     0x47d2d0
  47d2ba:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d2bd:	48                   	dec    eax
  47d2be:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d2c1:	75 07                	jne    0x47d2ca
  47d2c3:	6a 00                	push   0x0
  47d2c5:	e8 f6 ec 12 00       	call   0x5abfc0
  47d2ca:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
  47d2d0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47d2d4:	5e                   	pop    esi
  47d2d5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47d2dc:	83 c4 1c             	add    esp,0x1c
  47d2df:	c2 04 00             	ret    0x4
  47d2e2:	90                   	nop
  47d2e3:	90                   	nop
  47d2e4:	90                   	nop
  47d2e5:	90                   	nop
  47d2e6:	90                   	nop
  47d2e7:	90                   	nop
  47d2e8:	90                   	nop
  47d2e9:	90                   	nop
  47d2ea:	90                   	nop
  47d2eb:	90                   	nop
  47d2ec:	90                   	nop
  47d2ed:	90                   	nop
  47d2ee:	90                   	nop
  47d2ef:	90                   	nop
  47d2f0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47d2f6:	6a ff                	push   0xffffffff
  47d2f8:	68 70 8e 62 00       	push   0x628e70
  47d2fd:	50                   	push   eax
  47d2fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47d305:	83 ec 28             	sub    esp,0x28
  47d308:	53                   	push   ebx
  47d309:	55                   	push   ebp
  47d30a:	56                   	push   esi
  47d30b:	8b 74 24 44          	mov    esi,DWORD PTR [esp+0x44]
  47d30f:	8b d9                	mov    ebx,ecx
  47d311:	57                   	push   edi
  47d312:	8d 04 76             	lea    eax,[esi+esi*2]
  47d315:	8b 94 c3 5c 4b 00 00 	mov    edx,DWORD PTR [ebx+eax*8+0x4b5c]
  47d31c:	8d ac c3 5c 4b 00 00 	lea    ebp,[ebx+eax*8+0x4b5c]
  47d323:	85 d2                	test   edx,edx
  47d325:	0f 94 c0             	sete   al
  47d328:	84 c0                	test   al,al
  47d32a:	0f 84 13 01 00 00    	je     0x47d443
  47d330:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47d335:	85 c0                	test   eax,eax
  47d337:	75 05                	jne    0x47d33e
  47d339:	e8 42 df 0d 00       	call   0x55b280
  47d33e:	8b c8                	mov    ecx,eax
  47d340:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  47d344:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
  47d34a:	85 c0                	test   eax,eax
  47d34c:	75 6a                	jne    0x47d3b8
  47d34e:	8a 54 24 48          	mov    dl,BYTE PTR [esp+0x48]
  47d352:	6a 00                	push   0x0
  47d354:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47d358:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  47d35c:	e8 3f 6d f8 ff       	call   0x4040a0
  47d361:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d366:	83 c9 ff             	or     ecx,0xffffffff
  47d369:	33 c0                	xor    eax,eax
  47d36b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d36d:	f7 d1                	not    ecx
  47d36f:	49                   	dec    ecx
  47d370:	51                   	push   ecx
  47d371:	68 70 3f 6b 00       	push   0x6b3f70
  47d376:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47d37a:	e8 71 6d f8 ff       	call   0x4040f0
  47d37f:	8d 44 24 18          	lea    eax,[esp+0x18]
  47d383:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  47d38a:	00 
  47d38b:	50                   	push   eax
  47d38c:	68 8f 01 00 00       	push   0x18f
  47d391:	68 58 eb 68 00       	push   0x68eb58
  47d396:	68 ec f8 68 00       	push   0x68f8ec
  47d39b:	e8 50 34 12 00       	call   0x5a07f0
  47d3a0:	ff d0                	call   eax
  47d3a2:	83 c4 10             	add    esp,0x10
  47d3a5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47d3a9:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d3b0:	ff 
  47d3b1:	6a 01                	push   0x1
  47d3b3:	e8 e8 6c f8 ff       	call   0x4040a0
  47d3b8:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  47d3bc:	8d 94 76 6c 09 00 00 	lea    edx,[esi+esi*2+0x96c]
  47d3c3:	6a 00                	push   0x0
  47d3c5:	6a 00                	push   0x0
  47d3c7:	8b 89 fc 00 00 00    	mov    ecx,DWORD PTR [ecx+0xfc]
  47d3cd:	68 00 00 80 3f       	push   0x3f800000
  47d3d2:	8d 04 d3             	lea    eax,[ebx+edx*8]
  47d3d5:	6a 00                	push   0x0
  47d3d7:	8d 54 24 20          	lea    edx,[esp+0x20]
  47d3db:	50                   	push   eax
  47d3dc:	52                   	push   edx
  47d3dd:	e8 9e 19 0d 00       	call   0x54ed80
  47d3e2:	8b f0                	mov    esi,eax
  47d3e4:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  47d3e7:	8b 06                	mov    eax,DWORD PTR [esi]
  47d3e9:	3b c8                	cmp    ecx,eax
  47d3eb:	c7 44 24 40 01 00 00 	mov    DWORD PTR [esp+0x40],0x1
  47d3f2:	00 
  47d3f3:	74 20                	je     0x47d415
  47d3f5:	85 c9                	test   ecx,ecx
  47d3f7:	74 10                	je     0x47d409
  47d3f9:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d3fc:	48                   	dec    eax
  47d3fd:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d400:	75 07                	jne    0x47d409
  47d402:	6a 00                	push   0x0
  47d404:	e8 b7 eb 12 00       	call   0x5abfc0
  47d409:	8b 36                	mov    esi,DWORD PTR [esi]
  47d40b:	85 f6                	test   esi,esi
  47d40d:	89 75 00             	mov    DWORD PTR [ebp+0x0],esi
  47d410:	74 03                	je     0x47d415
  47d412:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  47d415:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47d419:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d420:	ff 
  47d421:	85 c0                	test   eax,eax
  47d423:	0f 84 2d 01 00 00    	je     0x47d556
  47d429:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47d42c:	8b c8                	mov    ecx,eax
  47d42e:	83 c0 14             	add    eax,0x14
  47d431:	4e                   	dec    esi
  47d432:	8b d6                	mov    edx,esi
  47d434:	85 d2                	test   edx,edx
  47d436:	89 30                	mov    DWORD PTR [eax],esi
  47d438:	0f 85 18 01 00 00    	jne    0x47d556
  47d43e:	e9 0c 01 00 00       	jmp    0x47d54f
  47d443:	56                   	push   esi
  47d444:	8b cb                	mov    ecx,ebx
  47d446:	e8 a5 fd ff ff       	call   0x47d1f0
  47d44b:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47d450:	85 c0                	test   eax,eax
  47d452:	75 05                	jne    0x47d459
  47d454:	e8 27 de 0d 00       	call   0x55b280
  47d459:	8b 88 fc 00 00 00    	mov    ecx,DWORD PTR [eax+0xfc]
  47d45f:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  47d463:	85 c9                	test   ecx,ecx
  47d465:	75 6a                	jne    0x47d4d1
  47d467:	8a 4c 24 48          	mov    cl,BYTE PTR [esp+0x48]
  47d46b:	6a 00                	push   0x0
  47d46d:	88 4c 24 2c          	mov    BYTE PTR [esp+0x2c],cl
  47d471:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47d475:	e8 26 6c f8 ff       	call   0x4040a0
  47d47a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d47f:	83 c9 ff             	or     ecx,0xffffffff
  47d482:	33 c0                	xor    eax,eax
  47d484:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d486:	f7 d1                	not    ecx
  47d488:	49                   	dec    ecx
  47d489:	51                   	push   ecx
  47d48a:	68 70 3f 6b 00       	push   0x6b3f70
  47d48f:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47d493:	e8 58 6c f8 ff       	call   0x4040f0
  47d498:	8d 54 24 28          	lea    edx,[esp+0x28]
  47d49c:	c7 44 24 40 02 00 00 	mov    DWORD PTR [esp+0x40],0x2
  47d4a3:	00 
  47d4a4:	52                   	push   edx
  47d4a5:	68 8f 01 00 00       	push   0x18f
  47d4aa:	68 58 eb 68 00       	push   0x68eb58
  47d4af:	68 ec f8 68 00       	push   0x68f8ec
  47d4b4:	e8 37 33 12 00       	call   0x5a07f0
  47d4b9:	ff d0                	call   eax
  47d4bb:	83 c4 10             	add    esp,0x10
  47d4be:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47d4c2:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d4c9:	ff 
  47d4ca:	6a 01                	push   0x1
  47d4cc:	e8 cf 6b f8 ff       	call   0x4040a0
  47d4d1:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  47d4d5:	8d 94 76 6c 09 00 00 	lea    edx,[esi+esi*2+0x96c]
  47d4dc:	6a 00                	push   0x0
  47d4de:	6a 00                	push   0x0
