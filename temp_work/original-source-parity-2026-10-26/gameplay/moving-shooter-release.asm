
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00429e90 <.text+0x28e90>:
  429e90:	e8 5b 47 1d 00       	call   0x5fe5f0
  429e95:	83 c4 04             	add    esp,0x4
  429e98:	8b c6                	mov    eax,esi
  429e9a:	5e                   	pop    esi
  429e9b:	c2 04 00             	ret    0x4
  429e9e:	90                   	nop
  429e9f:	90                   	nop
  429ea0:	6a ff                	push   0xffffffff
  429ea2:	68 4b 2f 62 00       	push   0x622f4b
  429ea7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  429ead:	50                   	push   eax
  429eae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  429eb5:	51                   	push   ecx
  429eb6:	56                   	push   esi
  429eb7:	8b f1                	mov    esi,ecx
  429eb9:	6a 34                	push   0x34
  429ebb:	e8 f5 01 1e 00       	call   0x60a0b5
  429ec0:	83 c4 04             	add    esp,0x4
  429ec3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  429ec7:	85 c0                	test   eax,eax
  429ec9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  429ed0:	00 
  429ed1:	74 0a                	je     0x429edd
  429ed3:	56                   	push   esi
  429ed4:	8b c8                	mov    ecx,eax
  429ed6:	e8 e5 ce fd ff       	call   0x406dc0
  429edb:	eb 02                	jmp    0x429edf
  429edd:	33 c0                	xor    eax,eax
  429edf:	50                   	push   eax
  429ee0:	8b ce                	mov    ecx,esi
  429ee2:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  429ee9:	ff 
  429eea:	e8 21 98 ff ff       	call   0x423710
  429eef:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  429ef3:	5e                   	pop    esi
  429ef4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  429efb:	83 c4 10             	add    esp,0x10
  429efe:	c3                   	ret
  429eff:	90                   	nop
  429f00:	6a ff                	push   0xffffffff
  429f02:	68 68 2f 62 00       	push   0x622f68
  429f07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  429f0d:	50                   	push   eax
  429f0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  429f15:	83 ec 18             	sub    esp,0x18
  429f18:	53                   	push   ebx
  429f19:	56                   	push   esi
  429f1a:	57                   	push   edi
  429f1b:	8b d9                	mov    ebx,ecx
  429f1d:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  429f21:	8d 54 24 34          	lea    edx,[esp+0x34]
  429f25:	50                   	push   eax
  429f26:	51                   	push   ecx
  429f27:	8b cc                	mov    ecx,esp
  429f29:	89 64 24 40          	mov    DWORD PTR [esp+0x40],esp
  429f2d:	52                   	push   edx
  429f2e:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  429f35:	00 
  429f36:	e8 25 f8 01 00       	call   0x449760
  429f3b:	8b cb                	mov    ecx,ebx
  429f3d:	e8 6e e2 ff ff       	call   0x4281b0
  429f42:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  429f46:	85 c9                	test   ecx,ecx
  429f48:	74 6d                	je     0x429fb7
  429f4a:	51                   	push   ecx
  429f4b:	8b c4                	mov    eax,esp
  429f4d:	89 64 24 3c          	mov    DWORD PTR [esp+0x3c],esp
  429f51:	89 08                	mov    DWORD PTR [eax],ecx
  429f53:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  429f57:	85 c0                	test   eax,eax
  429f59:	74 03                	je     0x429f5e
  429f5b:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  429f5e:	e8 8d a3 fe ff       	call   0x4142f0
  429f63:	83 c4 04             	add    esp,0x4
  429f66:	85 c0                	test   eax,eax
  429f68:	74 25                	je     0x429f8f
  429f6a:	8d b0 1c 01 00 00    	lea    esi,[eax+0x11c]
  429f70:	b9 06 00 00 00       	mov    ecx,0x6
  429f75:	8d 7c 24 0c          	lea    edi,[esp+0xc]
  429f79:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  429f7b:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  429f7f:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  429f83:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  429f89:	d9 9b e4 01 00 00    	fstp   DWORD PTR [ebx+0x1e4]
  429f8f:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  429f93:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  429f9a:	ff 
  429f9b:	85 c0                	test   eax,eax
  429f9d:	74 18                	je     0x429fb7
  429f9f:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  429fa2:	8b c8                	mov    ecx,eax
  429fa4:	83 c0 14             	add    eax,0x14
  429fa7:	4e                   	dec    esi
  429fa8:	8b d6                	mov    edx,esi
  429faa:	85 d2                	test   edx,edx
  429fac:	89 30                	mov    DWORD PTR [eax],esi
  429fae:	75 07                	jne    0x429fb7
  429fb0:	6a 00                	push   0x0
  429fb2:	e8 09 20 18 00       	call   0x5abfc0
  429fb7:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  429fbb:	5f                   	pop    edi
  429fbc:	5e                   	pop    esi
  429fbd:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  429fc4:	5b                   	pop    ebx
  429fc5:	83 c4 24             	add    esp,0x24
  429fc8:	c2 08 00             	ret    0x8
  429fcb:	90                   	nop
  429fcc:	90                   	nop
  429fcd:	90                   	nop
  429fce:	90                   	nop
  429fcf:	90                   	nop
  429fd0:	8d 81 a8 01 00 00    	lea    eax,[ecx+0x1a8]
  429fd6:	c3                   	ret
  429fd7:	90                   	nop
  429fd8:	90                   	nop
  429fd9:	90                   	nop
  429fda:	90                   	nop
  429fdb:	90                   	nop
  429fdc:	90                   	nop
  429fdd:	90                   	nop
  429fde:	90                   	nop
  429fdf:	90                   	nop
  429fe0:	6a ff                	push   0xffffffff
  429fe2:	68 90 2f 62 00       	push   0x622f90
  429fe7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  429fed:	50                   	push   eax
  429fee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  429ff5:	83 ec 64             	sub    esp,0x64
  429ff8:	53                   	push   ebx
  429ff9:	55                   	push   ebp
  429ffa:	8b e9                	mov    ebp,ecx
  429ffc:	56                   	push   esi
  429ffd:	57                   	push   edi
  429ffe:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  42a005:	00 
  42a006:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  42a009:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
  42a010:	00 
  42a011:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
  42a018:	00 
  42a019:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
  42a01f:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  42a022:	8b d8                	mov    ebx,eax
  42a024:	8b cd                	mov    ecx,ebp
  42a026:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  42a02a:	ff 92 a4 00 00 00    	call   DWORD PTR [edx+0xa4]
  42a030:	8b 88 14 01 00 00    	mov    ecx,DWORD PTR [eax+0x114]
  42a036:	33 f6                	xor    esi,esi
  42a038:	3b ce                	cmp    ecx,esi
  42a03a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  42a03e:	0f 85 98 00 00 00    	jne    0x42a0dc
  42a044:	8a 84 24 84 00 00 00 	mov    al,BYTE PTR [esp+0x84]
  42a04b:	56                   	push   esi
  42a04c:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42a050:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  42a054:	e8 47 a0 fd ff       	call   0x4040a0
  42a059:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42a05e:	83 c9 ff             	or     ecx,0xffffffff
  42a061:	33 c0                	xor    eax,eax
  42a063:	6a 01                	push   0x1
  42a065:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a067:	f7 d1                	not    ecx
  42a069:	49                   	dec    ecx
  42a06a:	8b d9                	mov    ebx,ecx
  42a06c:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42a070:	53                   	push   ebx
  42a071:	e8 ca 78 fd ff       	call   0x401940
  42a076:	84 c0                	test   al,al
  42a078:	74 25                	je     0x42a09f
  42a07a:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  42a07e:	8b cb                	mov    ecx,ebx
  42a080:	8b d1                	mov    edx,ecx
  42a082:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  42a087:	c1 e9 02             	shr    ecx,0x2
  42a08a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42a08c:	8b ca                	mov    ecx,edx
  42a08e:	53                   	push   ebx
  42a08f:	83 e1 03             	and    ecx,0x3
  42a092:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42a094:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  42a098:	e8 f3 a0 fd ff       	call   0x404190
  42a09d:	33 f6                	xor    esi,esi
  42a09f:	8d 44 24 24          	lea    eax,[esp+0x24]
  42a0a3:	89 74 24 7c          	mov    DWORD PTR [esp+0x7c],esi
  42a0a7:	50                   	push   eax
  42a0a8:	68 8d 01 00 00       	push   0x18d
  42a0ad:	68 78 e7 68 00       	push   0x68e778
  42a0b2:	68 68 e7 68 00       	push   0x68e768
  42a0b7:	e8 34 67 17 00       	call   0x5a07f0
  42a0bc:	ff d0                	call   eax
  42a0be:	83 c4 10             	add    esp,0x10
  42a0c1:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42a0c5:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  42a0cc:	ff 
  42a0cd:	6a 01                	push   0x1
  42a0cf:	e8 cc 9f fd ff       	call   0x4040a0
  42a0d4:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
  42a0d8:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  42a0dc:	8b b8 14 01 00 00    	mov    edi,DWORD PTR [eax+0x114]
  42a0e2:	8b cf                	mov    ecx,edi
  42a0e4:	e8 07 9a 18 00       	call   0x5b3af0
  42a0e9:	8b c8                	mov    ecx,eax
  42a0eb:	8b d3                	mov    edx,ebx
  42a0ed:	e8 be 9e 18 00       	call   0x5b3fb0
  42a0f2:	85 c0                	test   eax,eax
  42a0f4:	74 4e                	je     0x42a144
  42a0f6:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  42a0fa:	8b d3                	mov    edx,ebx
  42a0fc:	51                   	push   ecx
  42a0fd:	8b cf                	mov    ecx,edi
  42a0ff:	e8 9c a3 18 00       	call   0x5b44a0
  42a104:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  42a107:	8b cd                	mov    ecx,ebp
  42a109:	ff 92 a4 00 00 00    	call   DWORD PTR [edx+0xa4]
  42a10f:	8b 88 50 01 00 00    	mov    ecx,DWORD PTR [eax+0x150]
  42a115:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  42a119:	8b 90 54 01 00 00    	mov    edx,DWORD PTR [eax+0x154]
  42a11f:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42a123:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  42a127:	8b 80 58 01 00 00    	mov    eax,DWORD PTR [eax+0x158]
  42a12d:	51                   	push   ecx
  42a12e:	8d 54 24 28          	lea    edx,[esp+0x28]
  42a132:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  42a136:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  42a13a:	e8 31 93 18 00       	call   0x5b3470
  42a13f:	e9 9b 00 00 00       	jmp    0x42a1df
  42a144:	bf e4 fe 68 00       	mov    edi,0x68fee4
  42a149:	83 c9 ff             	or     ecx,0xffffffff
  42a14c:	33 c0                	xor    eax,eax
  42a14e:	8a 94 24 84 00 00 00 	mov    dl,BYTE PTR [esp+0x84]
  42a155:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a157:	f7 d1                	not    ecx
  42a159:	49                   	dec    ecx
  42a15a:	6a 01                	push   0x1
  42a15c:	8b d9                	mov    ebx,ecx
  42a15e:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  42a162:	53                   	push   ebx
  42a163:	88 54 24 3c          	mov    BYTE PTR [esp+0x3c],dl
  42a167:	89 74 24 40          	mov    DWORD PTR [esp+0x40],esi
  42a16b:	89 74 24 44          	mov    DWORD PTR [esp+0x44],esi
  42a16f:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  42a173:	e8 c8 77 fd ff       	call   0x401940
  42a178:	84 c0                	test   al,al
  42a17a:	74 27                	je     0x42a1a3
  42a17c:	8b 7c 24 38          	mov    edi,DWORD PTR [esp+0x38]
  42a180:	8b cb                	mov    ecx,ebx
  42a182:	8b c1                	mov    eax,ecx
  42a184:	be e4 fe 68 00       	mov    esi,0x68fee4
  42a189:	c1 e9 02             	shr    ecx,0x2
  42a18c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42a18e:	8b c8                	mov    ecx,eax
  42a190:	83 e1 03             	and    ecx,0x3
  42a193:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42a195:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  42a199:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
  42a19d:	33 f6                	xor    esi,esi
  42a19f:	c6 04 19 00          	mov    BYTE PTR [ecx+ebx*1],0x0
  42a1a3:	8d 54 24 34          	lea    edx,[esp+0x34]
  42a1a7:	8b cd                	mov    ecx,ebp
  42a1a9:	52                   	push   edx
  42a1aa:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x1
  42a1b1:	01 00 00 00 
  42a1b5:	e8 e6 93 0d 00       	call   0x5035a0
  42a1ba:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  42a1be:	3b c6                	cmp    eax,esi
  42a1c0:	74 1d                	je     0x42a1df
  42a1c2:	8d 48 ff             	lea    ecx,[eax-0x1]
  42a1c5:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42a1c8:	84 c0                	test   al,al
  42a1ca:	74 0a                	je     0x42a1d6
  42a1cc:	3c ff                	cmp    al,0xff
  42a1ce:	74 06                	je     0x42a1d6
  42a1d0:	fe c8                	dec    al
  42a1d2:	88 01                	mov    BYTE PTR [ecx],al
  42a1d4:	eb 09                	jmp    0x42a1df
  42a1d6:	51                   	push   ecx
  42a1d7:	e8 14 44 1d 00       	call   0x5fe5f0
  42a1dc:	83 c4 04             	add    esp,0x4
  42a1df:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
  42a1e6:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  42a1ea:	8b c8                	mov    ecx,eax
  42a1ec:	5f                   	pop    edi
  42a1ed:	5e                   	pop    esi
  42a1ee:	5d                   	pop    ebp
  42a1ef:	89 11                	mov    DWORD PTR [ecx],edx
  42a1f1:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  42a1f5:	5b                   	pop    ebx
  42a1f6:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  42a1f9:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  42a1fd:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  42a200:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  42a204:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42a20b:	83 c4 70             	add    esp,0x70
  42a20e:	c2 04 00             	ret    0x4
  42a211:	90                   	nop
  42a212:	90                   	nop
  42a213:	90                   	nop
  42a214:	90                   	nop
  42a215:	90                   	nop
  42a216:	90                   	nop
  42a217:	90                   	nop
  42a218:	90                   	nop
  42a219:	90                   	nop
  42a21a:	90                   	nop
  42a21b:	90                   	nop
  42a21c:	90                   	nop
  42a21d:	90                   	nop
  42a21e:	90                   	nop
  42a21f:	90                   	nop
  42a220:	6a ff                	push   0xffffffff
  42a222:	68 a8 2f 62 00       	push   0x622fa8
  42a227:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42a22d:	50                   	push   eax
  42a22e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42a235:	83 ec 48             	sub    esp,0x48
  42a238:	53                   	push   ebx
  42a239:	55                   	push   ebp
  42a23a:	56                   	push   esi
  42a23b:	8d 44 24 18          	lea    eax,[esp+0x18]
  42a23f:	57                   	push   edi
  42a240:	8b f1                	mov    esi,ecx
  42a242:	50                   	push   eax
  42a243:	e8 88 95 ff ff       	call   0x4237d0
  42a248:	8b 10                	mov    edx,DWORD PTR [eax]
  42a24a:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  42a24e:	33 db                	xor    ebx,ebx
  42a250:	3b d3                	cmp    edx,ebx
  42a252:	0f 94 44 24 13       	sete   BYTE PTR [esp+0x13]
  42a257:	3b c3                	cmp    eax,ebx
  42a259:	74 17                	je     0x42a272
  42a25b:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  42a25e:	8b c8                	mov    ecx,eax
  42a260:	83 c0 14             	add    eax,0x14
  42a263:	4f                   	dec    edi
  42a264:	8b d7                	mov    edx,edi
  42a266:	3b d3                	cmp    edx,ebx
  42a268:	89 38                	mov    DWORD PTR [eax],edi
  42a26a:	75 06                	jne    0x42a272
  42a26c:	53                   	push   ebx
  42a26d:	e8 4e 1d 18 00       	call   0x5abfc0
  42a272:	38 5c 24 13          	cmp    BYTE PTR [esp+0x13],bl
  42a276:	0f 85 df 01 00 00    	jne    0x42a45b
  42a27c:	51                   	push   ecx
  42a27d:	8b cc                	mov    ecx,esp
  42a27f:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42a283:	51                   	push   ecx
  42a284:	8b ce                	mov    ecx,esi
  42a286:	e8 45 95 ff ff       	call   0x4237d0
  42a28b:	e8 d0 0d fe ff       	call   0x40b060
  42a290:	8b e8                	mov    ebp,eax
  42a292:	83 c4 04             	add    esp,0x4
  42a295:	3b eb                	cmp    ebp,ebx
  42a297:	75 7e                	jne    0x42a317
  42a299:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42a29e:	83 c9 ff             	or     ecx,0xffffffff
  42a2a1:	33 c0                	xor    eax,eax
  42a2a3:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  42a2a7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a2a9:	f7 d1                	not    ecx
  42a2ab:	49                   	dec    ecx
  42a2ac:	88 54 24 3c          	mov    BYTE PTR [esp+0x3c],dl
  42a2b0:	51                   	push   ecx
  42a2b1:	68 70 3f 6b 00       	push   0x6b3f70
  42a2b6:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  42a2ba:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  42a2be:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  42a2c2:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  42a2c6:	e8 25 9e fd ff       	call   0x4040f0
  42a2cb:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  42a2cf:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
  42a2d3:	50                   	push   eax
  42a2d4:	6a 72                	push   0x72
  42a2d6:	68 1c ff 68 00       	push   0x68ff1c
  42a2db:	68 14 e5 68 00       	push   0x68e514
  42a2e0:	e8 0b 65 17 00       	call   0x5a07f0
  42a2e5:	ff d0                	call   eax
  42a2e7:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  42a2eb:	83 c4 10             	add    esp,0x10
  42a2ee:	3b c3                	cmp    eax,ebx
  42a2f0:	c7 44 24 60 ff ff ff 	mov    DWORD PTR [esp+0x60],0xffffffff
  42a2f7:	ff 
  42a2f8:	74 1d                	je     0x42a317
  42a2fa:	8d 48 ff             	lea    ecx,[eax-0x1]
  42a2fd:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42a300:	3a c3                	cmp    al,bl
  42a302:	74 0a                	je     0x42a30e
  42a304:	3c ff                	cmp    al,0xff
  42a306:	74 06                	je     0x42a30e
  42a308:	fe c8                	dec    al
  42a30a:	88 01                	mov    BYTE PTR [ecx],al
  42a30c:	eb 09                	jmp    0x42a317
  42a30e:	51                   	push   ecx
  42a30f:	e8 dc 42 1d 00       	call   0x5fe5f0
  42a314:	83 c4 04             	add    esp,0x4
  42a317:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  42a31a:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  42a31e:	50                   	push   eax
  42a31f:	8b cd                	mov    ecx,ebp
  42a321:	ff 52 48             	call   DWORD PTR [edx+0x48]
  42a324:	8b 08                	mov    ecx,DWORD PTR [eax]
  42a326:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  42a32a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42a32e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  42a331:	51                   	push   ecx
  42a332:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  42a336:	8d 54 24 40          	lea    edx,[esp+0x40]
  42a33a:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  42a33e:	d8 86 e4 01 00 00    	fadd   DWORD PTR [esi+0x1e4]
  42a344:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  42a347:	52                   	push   edx
  42a348:	8b ce                	mov    ecx,esi
  42a34a:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  42a34e:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  42a352:	e8 89 fc ff ff       	call   0x429fe0
  42a357:	8b d0                	mov    edx,eax
  42a359:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  42a35d:	e8 7e 8c 18 00       	call   0x5b2fe0
  42a362:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42a366:	e8 b5 8b 18 00       	call   0x5b2f20
  42a36b:	8b 86 d0 01 00 00    	mov    eax,DWORD PTR [esi+0x1d0]
  42a371:	dd d8                	fstp   st(0)
  42a373:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  42a377:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42a37b:	d9 e0                	fchs
  42a37d:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
  42a381:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  42a385:	e8 16 01 1e 00       	call   0x60a4a0
  42a38a:	99                   	cdq
  42a38b:	b9 10 27 00 00       	mov    ecx,0x2710
  42a390:	f7 f9                	idiv   ecx
  42a392:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  42a396:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  42a39a:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  42a39e:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42a3a2:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  42a3a6:	de c9                	fmulp  st(1),st
  42a3a8:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  42a3ae:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  42a3b2:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  42a3b6:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  42a3ba:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  42a3be:	e8 dd 00 1e 00       	call   0x60a4a0
  42a3c3:	99                   	cdq
  42a3c4:	b9 10 27 00 00       	mov    ecx,0x2710
  42a3c9:	f7 f9                	idiv   ecx
  42a3cb:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  42a3cf:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  42a3d3:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  42a3d7:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42a3db:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  42a3df:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  42a3e3:	de c9                	fmulp  st(1),st
  42a3e5:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  42a3eb:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  42a3ef:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  42a3f3:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  42a3f7:	e8 a4 00 1e 00       	call   0x60a4a0
  42a3fc:	99                   	cdq
  42a3fd:	b9 10 27 00 00       	mov    ecx,0x2710
  42a402:	f7 f9                	idiv   ecx
  42a404:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42a408:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  42a40c:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  42a410:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  42a414:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
  42a418:	de c9                	fmulp  st(1),st
  42a41a:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  42a420:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  42a424:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  42a428:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  42a42c:	e8 ef 8a 18 00       	call   0x5b2f20
  42a431:	dd d8                	fstp   st(0)
  42a433:	8b 3e                	mov    edi,DWORD PTR [esi]
  42a435:	8d 54 24 24          	lea    edx,[esp+0x24]
  42a439:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  42a43d:	52                   	push   edx
  42a43e:	50                   	push   eax
  42a43f:	8b ce                	mov    ecx,esi
  42a441:	e8 9a fb ff ff       	call   0x429fe0
  42a446:	50                   	push   eax
  42a447:	8b ce                	mov    ecx,esi
  42a449:	ff 97 c4 00 00 00    	call   DWORD PTR [edi+0xc4]
  42a44f:	8b 16                	mov    edx,DWORD PTR [esi]
  42a451:	6a 02                	push   0x2
  42a453:	8b ce                	mov    ecx,esi
  42a455:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
  42a45b:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  42a45f:	5f                   	pop    edi
  42a460:	5e                   	pop    esi
  42a461:	5d                   	pop    ebp
  42a462:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42a469:	5b                   	pop    ebx
  42a46a:	83 c4 54             	add    esp,0x54
  42a46d:	c3                   	ret
  42a46e:	90                   	nop
  42a46f:	90                   	nop
  42a470:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  42a476:	b0 01                	mov    al,0x1
  42a478:	84 c8                	test   al,cl
  42a47a:	75 08                	jne    0x42a484
  42a47c:	0a c8                	or     cl,al
  42a47e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  42a484:	e9 07 00 00 00       	jmp    0x42a490
  42a489:	90                   	nop
  42a48a:	90                   	nop
  42a48b:	90                   	nop
  42a48c:	90                   	nop
  42a48d:	90                   	nop
  42a48e:	90                   	nop
  42a48f:	90                   	nop
  42a490:	68 a0 1b 40 00       	push   0x401ba0
  42a495:	e8 e1 00 1e 00       	call   0x60a57b
  42a49a:	59                   	pop    ecx
  42a49b:	c3                   	ret
  42a49c:	90                   	nop
  42a49d:	90                   	nop
  42a49e:	90                   	nop
  42a49f:	90                   	nop
  42a4a0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  42a4a4:	56                   	push   esi
  42a4a5:	8b f1                	mov    esi,ecx
  42a4a7:	50                   	push   eax
  42a4a8:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  42a4ac:	51                   	push   ecx
  42a4ad:	8b ce                	mov    ecx,esi
  42a4af:	e8 8c 0d 07 00       	call   0x49b240
  42a4b4:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  42a4b8:	c6 86 98 02 00 00 00 	mov    BYTE PTR [esi+0x298],0x0
  42a4bf:	89 96 94 02 00 00    	mov    DWORD PTR [esi+0x294],edx
  42a4c5:	c7 06 88 bf 64 00    	mov    DWORD PTR [esi],0x64bf88
  42a4cb:	8b c6                	mov    eax,esi
  42a4cd:	5e                   	pop    esi
  42a4ce:	c2 0c 00             	ret    0xc
  42a4d1:	90                   	nop
  42a4d2:	90                   	nop
  42a4d3:	90                   	nop
  42a4d4:	90                   	nop
  42a4d5:	90                   	nop
  42a4d6:	90                   	nop
  42a4d7:	90                   	nop
  42a4d8:	90                   	nop
  42a4d9:	90                   	nop
  42a4da:	90                   	nop
  42a4db:	90                   	nop
  42a4dc:	90                   	nop
  42a4dd:	90                   	nop
  42a4de:	90                   	nop
  42a4df:	90                   	nop
  42a4e0:	56                   	push   esi
  42a4e1:	8b f1                	mov    esi,ecx
  42a4e3:	e8 f8 c6 0c 00       	call   0x4f6be0
  42a4e8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  42a4ed:	74 09                	je     0x42a4f8
  42a4ef:	56                   	push   esi
  42a4f0:	e8 fb 40 1d 00       	call   0x5fe5f0
  42a4f5:	83 c4 04             	add    esp,0x4
  42a4f8:	8b c6                	mov    eax,esi
  42a4fa:	5e                   	pop    esi
  42a4fb:	c2 04 00             	ret    0x4
  42a4fe:	90                   	nop
  42a4ff:	90                   	nop
  42a500:	8a 81 98 02 00 00    	mov    al,BYTE PTR [ecx+0x298]
  42a506:	84 c0                	test   al,al
  42a508:	75 1a                	jne    0x42a524
  42a50a:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  42a50e:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  42a512:	8b 89 94 02 00 00    	mov    ecx,DWORD PTR [ecx+0x294]
  42a518:	50                   	push   eax
  42a519:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  42a51d:	52                   	push   edx
  42a51e:	50                   	push   eax
  42a51f:	e8 9c 9a 0d 00       	call   0x503fc0
  42a524:	c2 0c 00             	ret    0xc
  42a527:	90                   	nop
  42a528:	90                   	nop
  42a529:	90                   	nop
  42a52a:	90                   	nop
  42a52b:	90                   	nop
  42a52c:	90                   	nop
  42a52d:	90                   	nop
  42a52e:	90                   	nop
  42a52f:	90                   	nop
  42a530:	8a 81 98 02 00 00    	mov    al,BYTE PTR [ecx+0x298]
  42a536:	84 c0                	test   al,al
  42a538:	75 10                	jne    0x42a54a
  42a53a:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  42a53e:	8b 89 94 02 00 00    	mov    ecx,DWORD PTR [ecx+0x294]
  42a544:	50                   	push   eax
  42a545:	e8 36 8c 0d 00       	call   0x503180
  42a54a:	c2 04 00             	ret    0x4
  42a54d:	90                   	nop
  42a54e:	90                   	nop
  42a54f:	90                   	nop
  42a550:	8a 81 98 02 00 00    	mov    al,BYTE PTR [ecx+0x298]
  42a556:	84 c0                	test   al,al
  42a558:	75 0f                	jne    0x42a569
  42a55a:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  42a55e:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  42a562:	50                   	push   eax
  42a563:	52                   	push   edx
  42a564:	e8 27 33 07 00       	call   0x49d890
  42a569:	c2 08 00             	ret    0x8
  42a56c:	90                   	nop
  42a56d:	90                   	nop
  42a56e:	90                   	nop
  42a56f:	90                   	nop
  42a570:	56                   	push   esi
  42a571:	8b f1                	mov    esi,ecx
  42a573:	e8 f8 1f 07 00       	call   0x49c570
  42a578:	8b 8e 94 02 00 00    	mov    ecx,DWORD PTR [esi+0x294]
  42a57e:	8b 01                	mov    eax,DWORD PTR [ecx]
  42a580:	ff 90 98 00 00 00    	call   DWORD PTR [eax+0x98]
  42a586:	5e                   	pop    esi
  42a587:	c3                   	ret
  42a588:	90                   	nop
  42a589:	90                   	nop
  42a58a:	90                   	nop
  42a58b:	90                   	nop
  42a58c:	90                   	nop
  42a58d:	90                   	nop
  42a58e:	90                   	nop
  42a58f:	90                   	nop
  42a590:	8b 81 94 02 00 00    	mov    eax,DWORD PTR [ecx+0x294]
  42a596:	c3                   	ret
  42a597:	90                   	nop
  42a598:	90                   	nop
  42a599:	90                   	nop
  42a59a:	90                   	nop
  42a59b:	90                   	nop
  42a59c:	90                   	nop
  42a59d:	90                   	nop
  42a59e:	90                   	nop
  42a59f:	90                   	nop
  42a5a0:	c6 81 98 02 00 00 01 	mov    BYTE PTR [ecx+0x298],0x1
  42a5a7:	8b 89 94 02 00 00    	mov    ecx,DWORD PTR [ecx+0x294]
  42a5ad:	e9 ce a3 ff ff       	jmp    0x424980
  42a5b2:	90                   	nop
  42a5b3:	90                   	nop
  42a5b4:	90                   	nop
  42a5b5:	90                   	nop
  42a5b6:	90                   	nop
  42a5b7:	90                   	nop
  42a5b8:	90                   	nop
  42a5b9:	90                   	nop
  42a5ba:	90                   	nop
  42a5bb:	90                   	nop
  42a5bc:	90                   	nop
  42a5bd:	90                   	nop
  42a5be:	90                   	nop
  42a5bf:	90                   	nop
  42a5c0:	c6 81 98 02 00 00 00 	mov    BYTE PTR [ecx+0x298],0x0
  42a5c7:	8b 89 94 02 00 00    	mov    ecx,DWORD PTR [ecx+0x294]
  42a5cd:	e9 be a3 ff ff       	jmp    0x424990
  42a5d2:	90                   	nop
  42a5d3:	90                   	nop
  42a5d4:	90                   	nop
  42a5d5:	90                   	nop
  42a5d6:	90                   	nop
  42a5d7:	90                   	nop
  42a5d8:	90                   	nop
  42a5d9:	90                   	nop
  42a5da:	90                   	nop
  42a5db:	90                   	nop
  42a5dc:	90                   	nop
  42a5dd:	90                   	nop
  42a5de:	90                   	nop
  42a5df:	90                   	nop
  42a5e0:	e8 0b 00 00 00       	call   0x42a5f0
  42a5e5:	e9 e6 00 00 00       	jmp    0x42a6d0
  42a5ea:	90                   	nop
  42a5eb:	90                   	nop
  42a5ec:	90                   	nop
  42a5ed:	90                   	nop
  42a5ee:	90                   	nop
  42a5ef:	90                   	nop
  42a5f0:	6a ff                	push   0xffffffff
  42a5f2:	68 c8 2f 62 00       	push   0x622fc8
  42a5f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42a5fd:	50                   	push   eax
  42a5fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42a605:	83 ec 14             	sub    esp,0x14
  42a608:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  42a60c:	53                   	push   ebx
  42a60d:	55                   	push   ebp
  42a60e:	57                   	push   edi
  42a60f:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  42a613:	bf 78 ff 68 00       	mov    edi,0x68ff78
  42a618:	83 c9 ff             	or     ecx,0xffffffff
  42a61b:	33 c0                	xor    eax,eax
  42a61d:	33 db                	xor    ebx,ebx
  42a61f:	6a 01                	push   0x1
  42a621:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a623:	f7 d1                	not    ecx
  42a625:	49                   	dec    ecx
  42a626:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  42a62a:	8b e9                	mov    ebp,ecx
  42a62c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42a630:	55                   	push   ebp
  42a631:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  42a635:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  42a639:	e8 02 73 fd ff       	call   0x401940
  42a63e:	84 c0                	test   al,al
  42a640:	74 26                	je     0x42a668
  42a642:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  42a646:	8b cd                	mov    ecx,ebp
  42a648:	8b d1                	mov    edx,ecx
  42a64a:	56                   	push   esi
  42a64b:	be 78 ff 68 00       	mov    esi,0x68ff78
  42a650:	c1 e9 02             	shr    ecx,0x2
  42a653:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42a655:	8b ca                	mov    ecx,edx
  42a657:	83 e1 03             	and    ecx,0x3
  42a65a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42a65c:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42a660:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  42a664:	5e                   	pop    esi
  42a665:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  42a668:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  42a66c:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  42a670:	51                   	push   ecx
  42a671:	b9 60 52 6b 00       	mov    ecx,0x6b5260
  42a676:	e8 25 cb 13 00       	call   0x5671a0
  42a67b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  42a67f:	3b c3                	cmp    eax,ebx
  42a681:	74 2d                	je     0x42a6b0
  42a683:	8d 48 ff             	lea    ecx,[eax-0x1]
  42a686:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42a689:	3a c3                	cmp    al,bl
  42a68b:	74 1a                	je     0x42a6a7
  42a68d:	3c ff                	cmp    al,0xff
  42a68f:	74 16                	je     0x42a6a7
  42a691:	fe c8                	dec    al
  42a693:	5f                   	pop    edi
  42a694:	5d                   	pop    ebp
  42a695:	88 01                	mov    BYTE PTR [ecx],al
  42a697:	5b                   	pop    ebx
  42a698:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  42a69c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42a6a3:	83 c4 20             	add    esp,0x20
  42a6a6:	c3                   	ret
  42a6a7:	51                   	push   ecx
  42a6a8:	e8 43 3f 1d 00       	call   0x5fe5f0
  42a6ad:	83 c4 04             	add    esp,0x4
  42a6b0:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  42a6b4:	5f                   	pop    edi
  42a6b5:	5d                   	pop    ebp
  42a6b6:	5b                   	pop    ebx
  42a6b7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42a6be:	83 c4 20             	add    esp,0x20
  42a6c1:	c3                   	ret
  42a6c2:	90                   	nop
  42a6c3:	90                   	nop
  42a6c4:	90                   	nop
  42a6c5:	90                   	nop
  42a6c6:	90                   	nop
  42a6c7:	90                   	nop
  42a6c8:	90                   	nop
  42a6c9:	90                   	nop
  42a6ca:	90                   	nop
  42a6cb:	90                   	nop
  42a6cc:	90                   	nop
  42a6cd:	90                   	nop
  42a6ce:	90                   	nop
  42a6cf:	90                   	nop
  42a6d0:	68 e0 a6 42 00       	push   0x42a6e0
  42a6d5:	e8 a1 fe 1d 00       	call   0x60a57b
  42a6da:	59                   	pop    ecx
  42a6db:	c3                   	ret
  42a6dc:	90                   	nop
  42a6dd:	90                   	nop
  42a6de:	90                   	nop
  42a6df:	90                   	nop
  42a6e0:	8a 0d 58 52 6b 00    	mov    cl,BYTE PTR ds:0x6b5258
  42a6e6:	b0 01                	mov    al,0x1
  42a6e8:	84 c8                	test   al,cl
  42a6ea:	75 12                	jne    0x42a6fe
  42a6ec:	0a c8                	or     cl,al
  42a6ee:	88 0d 58 52 6b 00    	mov    BYTE PTR ds:0x6b5258,cl
  42a6f4:	b9 60 52 6b 00       	mov    ecx,0x6b5260
  42a6f9:	e9 02 cc 13 00       	jmp    0x567300
  42a6fe:	c3                   	ret
  42a6ff:	90                   	nop
  42a700:	6a ff                	push   0xffffffff
  42a702:	68 27 30 62 00       	push   0x623027
  42a707:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42a70d:	50                   	push   eax
  42a70e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42a715:	83 ec 14             	sub    esp,0x14
  42a718:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  42a71c:	53                   	push   ebx
  42a71d:	55                   	push   ebp
  42a71e:	56                   	push   esi
  42a71f:	8b 74 24 3c          	mov    esi,DWORD PTR [esp+0x3c]
  42a723:	8b e9                	mov    ebp,ecx
  42a725:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  42a729:	57                   	push   edi
  42a72a:	56                   	push   esi
  42a72b:	50                   	push   eax
  42a72c:	51                   	push   ecx
  42a72d:	8b cd                	mov    ecx,ebp
  42a72f:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  42a733:	e8 e8 7c ff ff       	call   0x422420
  42a738:	8b 5c 24 3c          	mov    ebx,DWORD PTR [esp+0x3c]
  42a73c:	56                   	push   esi
  42a73d:	8d 8d 84 01 00 00    	lea    ecx,[ebp+0x184]
  42a743:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  42a74a:	00 
  42a74b:	89 9d 80 01 00 00    	mov    DWORD PTR [ebp+0x180],ebx
  42a751:	e8 da b5 ff ff       	call   0x425d30
  42a756:	56                   	push   esi
  42a757:	8d 8d c0 01 00 00    	lea    ecx,[ebp+0x1c0]
  42a75d:	c6 44 24 30 01       	mov    BYTE PTR [esp+0x30],0x1
  42a762:	e8 89 ba ff ff       	call   0x4261f0
  42a767:	8a 54 24 38          	mov    dl,BYTE PTR [esp+0x38]
  42a76b:	c7 45 00 08 c0 64 00 	mov    DWORD PTR [ebp+0x0],0x64c008
  42a772:	8b 73 0c             	mov    esi,DWORD PTR [ebx+0xc]
  42a775:	6a 00                	push   0x0
  42a777:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42a77b:	c6 44 24 30 02       	mov    BYTE PTR [esp+0x30],0x2
  42a780:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  42a784:	e8 17 99 fd ff       	call   0x4040a0
  42a789:	85 f6                	test   esi,esi
  42a78b:	c6 44 24 2c 03       	mov    BYTE PTR [esp+0x2c],0x3
  42a790:	75 20                	jne    0x42a7b2
  42a792:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42a797:	83 c9 ff             	or     ecx,0xffffffff
  42a79a:	33 c0                	xor    eax,eax
  42a79c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a79e:	f7 d1                	not    ecx
  42a7a0:	49                   	dec    ecx
  42a7a1:	51                   	push   ecx
  42a7a2:	68 70 3f 6b 00       	push   0x6b3f70
  42a7a7:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42a7ab:	e8 40 99 fd ff       	call   0x4040f0
  42a7b0:	eb 42                	jmp    0x42a7f4
  42a7b2:	8b fe                	mov    edi,esi
  42a7b4:	83 c9 ff             	or     ecx,0xffffffff
  42a7b7:	33 c0                	xor    eax,eax
  42a7b9:	6a 01                	push   0x1
  42a7bb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a7bd:	f7 d1                	not    ecx
  42a7bf:	49                   	dec    ecx
  42a7c0:	8b f9                	mov    edi,ecx
  42a7c2:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42a7c6:	57                   	push   edi
  42a7c7:	89 7c 24 48          	mov    DWORD PTR [esp+0x48],edi
  42a7cb:	e8 70 71 fd ff       	call   0x401940
  42a7d0:	84 c0                	test   al,al
  42a7d2:	74 20                	je     0x42a7f4
  42a7d4:	8b cf                	mov    ecx,edi
  42a7d6:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  42a7da:	8b c1                	mov    eax,ecx
  42a7dc:	c1 e9 02             	shr    ecx,0x2
  42a7df:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42a7e1:	8b c8                	mov    ecx,eax
  42a7e3:	83 e1 03             	and    ecx,0x3
  42a7e6:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42a7e8:	8b c8                	mov    ecx,eax
  42a7ea:	51                   	push   ecx
  42a7eb:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42a7ef:	e8 9c 99 fd ff       	call   0x404190
  42a7f4:	8d 54 24 14          	lea    edx,[esp+0x14]
  42a7f8:	8b cd                	mov    ecx,ebp
  42a7fa:	52                   	push   edx
  42a7fb:	e8 e0 92 0d 00       	call   0x503ae0
  42a800:	6a 01                	push   0x1
  42a802:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42a806:	c6 44 24 30 02       	mov    BYTE PTR [esp+0x30],0x2
  42a80b:	e8 90 98 fd ff       	call   0x4040a0
  42a810:	8a 44 24 38          	mov    al,BYTE PTR [esp+0x38]
  42a814:	8b 5b 10             	mov    ebx,DWORD PTR [ebx+0x10]
  42a817:	33 f6                	xor    esi,esi
  42a819:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42a81d:	56                   	push   esi
  42a81e:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  42a822:	e8 79 98 fd ff       	call   0x4040a0
  42a827:	3b de                	cmp    ebx,esi
  42a829:	c6 44 24 2c 04       	mov    BYTE PTR [esp+0x2c],0x4
  42a82e:	74 17                	je     0x42a847
  42a830:	8b fb                	mov    edi,ebx
  42a832:	83 c9 ff             	or     ecx,0xffffffff
  42a835:	33 c0                	xor    eax,eax
  42a837:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a839:	f7 d1                	not    ecx
  42a83b:	49                   	dec    ecx
  42a83c:	51                   	push   ecx
  42a83d:	53                   	push   ebx
  42a83e:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42a842:	e8 a9 98 fd ff       	call   0x4040f0
  42a847:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  42a84d:	8d 54 24 14          	lea    edx,[esp+0x14]
  42a851:	51                   	push   ecx
  42a852:	56                   	push   esi
  42a853:	52                   	push   edx
  42a854:	8d 8d 90 00 00 00    	lea    ecx,[ebp+0x90]
  42a85a:	e8 a1 23 fe ff       	call   0x40cc00
  42a85f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42a863:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  42a868:	3b c6                	cmp    eax,esi
  42a86a:	74 1d                	je     0x42a889
  42a86c:	8d 48 ff             	lea    ecx,[eax-0x1]
  42a86f:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  42a872:	84 c0                	test   al,al
  42a874:	74 0a                	je     0x42a880
  42a876:	3c ff                	cmp    al,0xff
  42a878:	74 06                	je     0x42a880
  42a87a:	fe c8                	dec    al
  42a87c:	88 01                	mov    BYTE PTR [ecx],al
  42a87e:	eb 09                	jmp    0x42a889
  42a880:	51                   	push   ecx
  42a881:	e8 6a 3d 1d 00       	call   0x5fe5f0
  42a886:	83 c4 04             	add    esp,0x4
  42a889:	68 9c 02 00 00       	push   0x29c
  42a88e:	e8 22 f8 1d 00       	call   0x60a0b5
  42a893:	83 c4 04             	add    esp,0x4
  42a896:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  42a89a:	3b c6                	cmp    eax,esi
  42a89c:	c6 44 24 2c 05       	mov    BYTE PTR [esp+0x2c],0x5
  42a8a1:	74 14                	je     0x42a8b7
  42a8a3:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  42a8a7:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  42a8ab:	55                   	push   ebp
  42a8ac:	51                   	push   ecx
  42a8ad:	52                   	push   edx
  42a8ae:	8b c8                	mov    ecx,eax
  42a8b0:	e8 eb fb ff ff       	call   0x42a4a0
  42a8b5:	eb 02                	jmp    0x42a8b9
  42a8b7:	33 c0                	xor    eax,eax
  42a8b9:	3b c6                	cmp    eax,esi
  42a8bb:	c6 44 24 2c 02       	mov    BYTE PTR [esp+0x2c],0x2
  42a8c0:	89 85 7c 01 00 00    	mov    DWORD PTR [ebp+0x17c],eax
  42a8c6:	0f 85 a7 00 00 00    	jne    0x42a973
  42a8cc:	8a 44 24 38          	mov    al,BYTE PTR [esp+0x38]
  42a8d0:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42a8d5:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  42a8d9:	83 c9 ff             	or     ecx,0xffffffff
  42a8dc:	33 c0                	xor    eax,eax
  42a8de:	6a 01                	push   0x1
  42a8e0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42a8e2:	f7 d1                	not    ecx
  42a8e4:	49                   	dec    ecx
  42a8e5:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  42a8e9:	8b d9                	mov    ebx,ecx
  42a8eb:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  42a8ef:	53                   	push   ebx
  42a8f0:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  42a8f4:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  42a8f8:	e8 43 70 fd ff       	call   0x401940
  42a8fd:	84 c0                	test   al,al
  42a8ff:	74                   	.byte 0x74
