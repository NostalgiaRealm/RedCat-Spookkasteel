
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0042ed70 <.text+0x2dd70>:
  42ed70:	83 ec 08             	sub    esp,0x8
  42ed73:	53                   	push   ebx
  42ed74:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42ed78:	55                   	push   ebp
  42ed79:	56                   	push   esi
  42ed7a:	57                   	push   edi
  42ed7b:	33 f6                	xor    esi,esi
  42ed7d:	83 ec 10             	sub    esp,0x10
  42ed80:	bf 20 02 69 00       	mov    edi,0x690220
  42ed85:	8b ec                	mov    ebp,esp
  42ed87:	83 c9 ff             	or     ecx,0xffffffff
  42ed8a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42ed8e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42ed91:	33 c0                	xor    eax,eax
  42ed93:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42ed96:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42ed99:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42ed9c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42ed9e:	f7 d1                	not    ecx
  42eda0:	49                   	dec    ecx
  42eda1:	8b d9                	mov    ebx,ecx
  42eda3:	83 fb fd             	cmp    ebx,0xfffffffd
  42eda6:	76 05                	jbe    0x42edad
  42eda8:	e8 4e f8 1c 00       	call   0x5fe5fb
  42edad:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42edb0:	3b ce                	cmp    ecx,esi
  42edb2:	74 1e                	je     0x42edd2
  42edb4:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42edb7:	84 c0                	test   al,al
  42edb9:	74 17                	je     0x42edd2
  42edbb:	3c ff                	cmp    al,0xff
  42edbd:	74 13                	je     0x42edd2
  42edbf:	3b de                	cmp    ebx,esi
  42edc1:	75 33                	jne    0x42edf6
  42edc3:	fe c8                	dec    al
  42edc5:	56                   	push   esi
  42edc6:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42edc9:	8b cd                	mov    ecx,ebp
  42edcb:	e8 d0 52 fd ff       	call   0x4040a0
  42edd0:	eb 4e                	jmp    0x42ee20
  42edd2:	3b de                	cmp    ebx,esi
  42edd4:	75 0b                	jne    0x42ede1
  42edd6:	6a 01                	push   0x1
  42edd8:	8b cd                	mov    ecx,ebp
  42edda:	e8 c1 52 fd ff       	call   0x4040a0
  42eddf:	eb 3f                	jmp    0x42ee20
  42ede1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42ede4:	83 f8 1f             	cmp    eax,0x1f
  42ede7:	77 04                	ja     0x42eded
  42ede9:	3b c3                	cmp    eax,ebx
  42edeb:	73 11                	jae    0x42edfe
  42eded:	6a 01                	push   0x1
  42edef:	8b cd                	mov    ecx,ebp
  42edf1:	e8 aa 52 fd ff       	call   0x4040a0
  42edf6:	53                   	push   ebx
  42edf7:	8b cd                	mov    ecx,ebp
  42edf9:	e8 62 2c fd ff       	call   0x401a60
  42edfe:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42ee01:	8b cb                	mov    ecx,ebx
  42ee03:	8b d1                	mov    edx,ecx
  42ee05:	be 20 02 69 00       	mov    esi,0x690220
  42ee0a:	c1 e9 02             	shr    ecx,0x2
  42ee0d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ee0f:	8b ca                	mov    ecx,edx
  42ee11:	83 e1 03             	and    ecx,0x3
  42ee14:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ee16:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42ee19:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42ee1c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42ee20:	68 f0 8d 6b 00       	push   0x6b8df0
  42ee25:	b9 e0 56 6b 00       	mov    ecx,0x6b56e0
  42ee2a:	e8 31 da fd ff       	call   0x40c860
  42ee2f:	5f                   	pop    edi
  42ee30:	5e                   	pop    esi
  42ee31:	5d                   	pop    ebp
  42ee32:	5b                   	pop    ebx
  42ee33:	83 c4 08             	add    esp,0x8
  42ee36:	c3                   	ret
  42ee37:	90                   	nop
  42ee38:	90                   	nop
  42ee39:	90                   	nop
  42ee3a:	90                   	nop
  42ee3b:	90                   	nop
  42ee3c:	90                   	nop
  42ee3d:	90                   	nop
  42ee3e:	90                   	nop
  42ee3f:	90                   	nop
  42ee40:	68 50 ee 42 00       	push   0x42ee50
  42ee45:	e8 31 b7 1d 00       	call   0x60a57b
  42ee4a:	59                   	pop    ecx
  42ee4b:	c3                   	ret
  42ee4c:	90                   	nop
  42ee4d:	90                   	nop
  42ee4e:	90                   	nop
  42ee4f:	90                   	nop
  42ee50:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42ee56:	b0 04                	mov    al,0x4
  42ee58:	84 c8                	test   al,cl
  42ee5a:	75 12                	jne    0x42ee6e
  42ee5c:	0a c8                	or     cl,al
  42ee5e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42ee64:	b9 e0 56 6b 00       	mov    ecx,0x6b56e0
  42ee69:	e9 52 ae ff ff       	jmp    0x429cc0
  42ee6e:	c3                   	ret
  42ee6f:	90                   	nop
  42ee70:	e8 0b 00 00 00       	call   0x42ee80
  42ee75:	e9 d6 00 00 00       	jmp    0x42ef50
  42ee7a:	90                   	nop
  42ee7b:	90                   	nop
  42ee7c:	90                   	nop
  42ee7d:	90                   	nop
  42ee7e:	90                   	nop
  42ee7f:	90                   	nop
  42ee80:	83 ec 08             	sub    esp,0x8
  42ee83:	53                   	push   ebx
  42ee84:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42ee88:	55                   	push   ebp
  42ee89:	56                   	push   esi
  42ee8a:	57                   	push   edi
  42ee8b:	33 f6                	xor    esi,esi
  42ee8d:	83 ec 10             	sub    esp,0x10
  42ee90:	bf 2c 02 69 00       	mov    edi,0x69022c
  42ee95:	8b ec                	mov    ebp,esp
  42ee97:	83 c9 ff             	or     ecx,0xffffffff
  42ee9a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42ee9e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42eea1:	33 c0                	xor    eax,eax
  42eea3:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42eea6:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42eea9:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42eeac:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42eeae:	f7 d1                	not    ecx
  42eeb0:	49                   	dec    ecx
  42eeb1:	8b d9                	mov    ebx,ecx
  42eeb3:	83 fb fd             	cmp    ebx,0xfffffffd
  42eeb6:	76 05                	jbe    0x42eebd
  42eeb8:	e8 3e f7 1c 00       	call   0x5fe5fb
  42eebd:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42eec0:	3b ce                	cmp    ecx,esi
  42eec2:	74 1e                	je     0x42eee2
  42eec4:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42eec7:	84 c0                	test   al,al
  42eec9:	74 17                	je     0x42eee2
  42eecb:	3c ff                	cmp    al,0xff
  42eecd:	74 13                	je     0x42eee2
  42eecf:	3b de                	cmp    ebx,esi
  42eed1:	75 33                	jne    0x42ef06
  42eed3:	fe c8                	dec    al
  42eed5:	56                   	push   esi
  42eed6:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42eed9:	8b cd                	mov    ecx,ebp
  42eedb:	e8 c0 51 fd ff       	call   0x4040a0
  42eee0:	eb 4e                	jmp    0x42ef30
  42eee2:	3b de                	cmp    ebx,esi
  42eee4:	75 0b                	jne    0x42eef1
  42eee6:	6a 01                	push   0x1
  42eee8:	8b cd                	mov    ecx,ebp
  42eeea:	e8 b1 51 fd ff       	call   0x4040a0
  42eeef:	eb 3f                	jmp    0x42ef30
  42eef1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42eef4:	83 f8 1f             	cmp    eax,0x1f
  42eef7:	77 04                	ja     0x42eefd
  42eef9:	3b c3                	cmp    eax,ebx
  42eefb:	73 11                	jae    0x42ef0e
  42eefd:	6a 01                	push   0x1
  42eeff:	8b cd                	mov    ecx,ebp
  42ef01:	e8 9a 51 fd ff       	call   0x4040a0
  42ef06:	53                   	push   ebx
  42ef07:	8b cd                	mov    ecx,ebp
  42ef09:	e8 52 2b fd ff       	call   0x401a60
  42ef0e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42ef11:	8b cb                	mov    ecx,ebx
  42ef13:	8b d1                	mov    edx,ecx
  42ef15:	be 2c 02 69 00       	mov    esi,0x69022c
  42ef1a:	c1 e9 02             	shr    ecx,0x2
  42ef1d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ef1f:	8b ca                	mov    ecx,edx
  42ef21:	83 e1 03             	and    ecx,0x3
  42ef24:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ef26:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42ef29:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42ef2c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42ef30:	68 f0 8d 6b 00       	push   0x6b8df0
  42ef35:	b9 b8 56 6b 00       	mov    ecx,0x6b56b8
  42ef3a:	e8 21 d9 fd ff       	call   0x40c860
  42ef3f:	5f                   	pop    edi
  42ef40:	5e                   	pop    esi
  42ef41:	5d                   	pop    ebp
  42ef42:	5b                   	pop    ebx
  42ef43:	83 c4 08             	add    esp,0x8
  42ef46:	c3                   	ret
  42ef47:	90                   	nop
  42ef48:	90                   	nop
  42ef49:	90                   	nop
  42ef4a:	90                   	nop
  42ef4b:	90                   	nop
  42ef4c:	90                   	nop
  42ef4d:	90                   	nop
  42ef4e:	90                   	nop
  42ef4f:	90                   	nop
  42ef50:	68 60 ef 42 00       	push   0x42ef60
  42ef55:	e8 21 b6 1d 00       	call   0x60a57b
  42ef5a:	59                   	pop    ecx
  42ef5b:	c3                   	ret
  42ef5c:	90                   	nop
  42ef5d:	90                   	nop
  42ef5e:	90                   	nop
  42ef5f:	90                   	nop
  42ef60:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42ef66:	b0 08                	mov    al,0x8
  42ef68:	84 c8                	test   al,cl
  42ef6a:	75 12                	jne    0x42ef7e
  42ef6c:	0a c8                	or     cl,al
  42ef6e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42ef74:	b9 b8 56 6b 00       	mov    ecx,0x6b56b8
  42ef79:	e9 42 ad ff ff       	jmp    0x429cc0
  42ef7e:	c3                   	ret
  42ef7f:	90                   	nop
  42ef80:	e8 0b 00 00 00       	call   0x42ef90
  42ef85:	e9 d6 00 00 00       	jmp    0x42f060
  42ef8a:	90                   	nop
  42ef8b:	90                   	nop
  42ef8c:	90                   	nop
  42ef8d:	90                   	nop
  42ef8e:	90                   	nop
  42ef8f:	90                   	nop
  42ef90:	83 ec 08             	sub    esp,0x8
  42ef93:	53                   	push   ebx
  42ef94:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42ef98:	55                   	push   ebp
  42ef99:	56                   	push   esi
  42ef9a:	57                   	push   edi
  42ef9b:	33 f6                	xor    esi,esi
  42ef9d:	83 ec 10             	sub    esp,0x10
  42efa0:	bf 20 02 69 00       	mov    edi,0x690220
  42efa5:	8b ec                	mov    ebp,esp
  42efa7:	83 c9 ff             	or     ecx,0xffffffff
  42efaa:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42efae:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42efb1:	33 c0                	xor    eax,eax
  42efb3:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42efb6:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42efb9:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42efbc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42efbe:	f7 d1                	not    ecx
  42efc0:	49                   	dec    ecx
  42efc1:	8b d9                	mov    ebx,ecx
  42efc3:	83 fb fd             	cmp    ebx,0xfffffffd
  42efc6:	76 05                	jbe    0x42efcd
  42efc8:	e8 2e f6 1c 00       	call   0x5fe5fb
  42efcd:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42efd0:	3b ce                	cmp    ecx,esi
  42efd2:	74 1e                	je     0x42eff2
  42efd4:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42efd7:	84 c0                	test   al,al
  42efd9:	74 17                	je     0x42eff2
  42efdb:	3c ff                	cmp    al,0xff
  42efdd:	74 13                	je     0x42eff2
  42efdf:	3b de                	cmp    ebx,esi
  42efe1:	75 33                	jne    0x42f016
  42efe3:	fe c8                	dec    al
  42efe5:	56                   	push   esi
  42efe6:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42efe9:	8b cd                	mov    ecx,ebp
  42efeb:	e8 b0 50 fd ff       	call   0x4040a0
  42eff0:	eb 4e                	jmp    0x42f040
  42eff2:	3b de                	cmp    ebx,esi
  42eff4:	75 0b                	jne    0x42f001
  42eff6:	6a 01                	push   0x1
  42eff8:	8b cd                	mov    ecx,ebp
  42effa:	e8 a1 50 fd ff       	call   0x4040a0
  42efff:	eb 3f                	jmp    0x42f040
  42f001:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f004:	83 f8 1f             	cmp    eax,0x1f
  42f007:	77 04                	ja     0x42f00d
  42f009:	3b c3                	cmp    eax,ebx
  42f00b:	73 11                	jae    0x42f01e
  42f00d:	6a 01                	push   0x1
  42f00f:	8b cd                	mov    ecx,ebp
  42f011:	e8 8a 50 fd ff       	call   0x4040a0
  42f016:	53                   	push   ebx
  42f017:	8b cd                	mov    ecx,ebp
  42f019:	e8 42 2a fd ff       	call   0x401a60
  42f01e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f021:	8b cb                	mov    ecx,ebx
  42f023:	8b d1                	mov    edx,ecx
  42f025:	be 20 02 69 00       	mov    esi,0x690220
  42f02a:	c1 e9 02             	shr    ecx,0x2
  42f02d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f02f:	8b ca                	mov    ecx,edx
  42f031:	83 e1 03             	and    ecx,0x3
  42f034:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f036:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f039:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f03c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f040:	68 f0 8d 6b 00       	push   0x6b8df0
  42f045:	b9 90 56 6b 00       	mov    ecx,0x6b5690
  42f04a:	e8 11 d8 fd ff       	call   0x40c860
  42f04f:	5f                   	pop    edi
  42f050:	5e                   	pop    esi
  42f051:	5d                   	pop    ebp
  42f052:	5b                   	pop    ebx
  42f053:	83 c4 08             	add    esp,0x8
  42f056:	c3                   	ret
  42f057:	90                   	nop
  42f058:	90                   	nop
  42f059:	90                   	nop
  42f05a:	90                   	nop
  42f05b:	90                   	nop
  42f05c:	90                   	nop
  42f05d:	90                   	nop
  42f05e:	90                   	nop
  42f05f:	90                   	nop
  42f060:	68 70 f0 42 00       	push   0x42f070
  42f065:	e8 11 b5 1d 00       	call   0x60a57b
  42f06a:	59                   	pop    ecx
  42f06b:	c3                   	ret
  42f06c:	90                   	nop
  42f06d:	90                   	nop
  42f06e:	90                   	nop
  42f06f:	90                   	nop
  42f070:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42f076:	b0 10                	mov    al,0x10
  42f078:	84 c8                	test   al,cl
  42f07a:	75 12                	jne    0x42f08e
  42f07c:	0a c8                	or     cl,al
  42f07e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42f084:	b9 90 56 6b 00       	mov    ecx,0x6b5690
  42f089:	e9 32 ac ff ff       	jmp    0x429cc0
  42f08e:	c3                   	ret
  42f08f:	90                   	nop
  42f090:	e8 0b 00 00 00       	call   0x42f0a0
  42f095:	e9 d6 00 00 00       	jmp    0x42f170
  42f09a:	90                   	nop
  42f09b:	90                   	nop
  42f09c:	90                   	nop
  42f09d:	90                   	nop
  42f09e:	90                   	nop
  42f09f:	90                   	nop
  42f0a0:	83 ec 08             	sub    esp,0x8
  42f0a3:	53                   	push   ebx
  42f0a4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f0a8:	55                   	push   ebp
  42f0a9:	56                   	push   esi
  42f0aa:	57                   	push   edi
  42f0ab:	33 f6                	xor    esi,esi
  42f0ad:	83 ec 10             	sub    esp,0x10
  42f0b0:	bf 2c 02 69 00       	mov    edi,0x69022c
  42f0b5:	8b ec                	mov    ebp,esp
  42f0b7:	83 c9 ff             	or     ecx,0xffffffff
  42f0ba:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f0be:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f0c1:	33 c0                	xor    eax,eax
  42f0c3:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f0c6:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f0c9:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f0cc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f0ce:	f7 d1                	not    ecx
  42f0d0:	49                   	dec    ecx
  42f0d1:	8b d9                	mov    ebx,ecx
  42f0d3:	83 fb fd             	cmp    ebx,0xfffffffd
  42f0d6:	76 05                	jbe    0x42f0dd
  42f0d8:	e8 1e f5 1c 00       	call   0x5fe5fb
  42f0dd:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f0e0:	3b ce                	cmp    ecx,esi
  42f0e2:	74 1e                	je     0x42f102
  42f0e4:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f0e7:	84 c0                	test   al,al
  42f0e9:	74 17                	je     0x42f102
  42f0eb:	3c ff                	cmp    al,0xff
  42f0ed:	74 13                	je     0x42f102
  42f0ef:	3b de                	cmp    ebx,esi
  42f0f1:	75 33                	jne    0x42f126
  42f0f3:	fe c8                	dec    al
  42f0f5:	56                   	push   esi
  42f0f6:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f0f9:	8b cd                	mov    ecx,ebp
  42f0fb:	e8 a0 4f fd ff       	call   0x4040a0
  42f100:	eb 4e                	jmp    0x42f150
  42f102:	3b de                	cmp    ebx,esi
  42f104:	75 0b                	jne    0x42f111
  42f106:	6a 01                	push   0x1
  42f108:	8b cd                	mov    ecx,ebp
  42f10a:	e8 91 4f fd ff       	call   0x4040a0
  42f10f:	eb 3f                	jmp    0x42f150
  42f111:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f114:	83 f8 1f             	cmp    eax,0x1f
  42f117:	77 04                	ja     0x42f11d
  42f119:	3b c3                	cmp    eax,ebx
  42f11b:	73 11                	jae    0x42f12e
  42f11d:	6a 01                	push   0x1
  42f11f:	8b cd                	mov    ecx,ebp
  42f121:	e8 7a 4f fd ff       	call   0x4040a0
  42f126:	53                   	push   ebx
  42f127:	8b cd                	mov    ecx,ebp
  42f129:	e8 32 29 fd ff       	call   0x401a60
  42f12e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f131:	8b cb                	mov    ecx,ebx
  42f133:	8b d1                	mov    edx,ecx
  42f135:	be 2c 02 69 00       	mov    esi,0x69022c
  42f13a:	c1 e9 02             	shr    ecx,0x2
  42f13d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f13f:	8b ca                	mov    ecx,edx
  42f141:	83 e1 03             	and    ecx,0x3
  42f144:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f146:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f149:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f14c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f150:	68 f0 8d 6b 00       	push   0x6b8df0
  42f155:	b9 68 56 6b 00       	mov    ecx,0x6b5668
  42f15a:	e8 01 d7 fd ff       	call   0x40c860
  42f15f:	5f                   	pop    edi
  42f160:	5e                   	pop    esi
  42f161:	5d                   	pop    ebp
  42f162:	5b                   	pop    ebx
  42f163:	83 c4 08             	add    esp,0x8
  42f166:	c3                   	ret
  42f167:	90                   	nop
  42f168:	90                   	nop
  42f169:	90                   	nop
  42f16a:	90                   	nop
  42f16b:	90                   	nop
  42f16c:	90                   	nop
  42f16d:	90                   	nop
  42f16e:	90                   	nop
  42f16f:	90                   	nop
  42f170:	68 80 f1 42 00       	push   0x42f180
  42f175:	e8 01 b4 1d 00       	call   0x60a57b
  42f17a:	59                   	pop    ecx
  42f17b:	c3                   	ret
  42f17c:	90                   	nop
  42f17d:	90                   	nop
  42f17e:	90                   	nop
  42f17f:	90                   	nop
  42f180:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42f186:	b0 20                	mov    al,0x20
  42f188:	84 c8                	test   al,cl
  42f18a:	75 12                	jne    0x42f19e
  42f18c:	0a c8                	or     cl,al
  42f18e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42f194:	b9 68 56 6b 00       	mov    ecx,0x6b5668
  42f199:	e9 22 ab ff ff       	jmp    0x429cc0
  42f19e:	c3                   	ret
  42f19f:	90                   	nop
  42f1a0:	e8 0b 00 00 00       	call   0x42f1b0
  42f1a5:	e9 d6 00 00 00       	jmp    0x42f280
  42f1aa:	90                   	nop
  42f1ab:	90                   	nop
  42f1ac:	90                   	nop
  42f1ad:	90                   	nop
  42f1ae:	90                   	nop
  42f1af:	90                   	nop
  42f1b0:	83 ec 08             	sub    esp,0x8
  42f1b3:	53                   	push   ebx
  42f1b4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f1b8:	55                   	push   ebp
  42f1b9:	56                   	push   esi
  42f1ba:	57                   	push   edi
  42f1bb:	33 f6                	xor    esi,esi
  42f1bd:	83 ec 10             	sub    esp,0x10
  42f1c0:	bf 20 02 69 00       	mov    edi,0x690220
  42f1c5:	8b ec                	mov    ebp,esp
  42f1c7:	83 c9 ff             	or     ecx,0xffffffff
  42f1ca:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f1ce:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f1d1:	33 c0                	xor    eax,eax
  42f1d3:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f1d6:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f1d9:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f1dc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f1de:	f7 d1                	not    ecx
  42f1e0:	49                   	dec    ecx
  42f1e1:	8b d9                	mov    ebx,ecx
  42f1e3:	83 fb fd             	cmp    ebx,0xfffffffd
  42f1e6:	76 05                	jbe    0x42f1ed
  42f1e8:	e8 0e f4 1c 00       	call   0x5fe5fb
  42f1ed:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f1f0:	3b ce                	cmp    ecx,esi
  42f1f2:	74 1e                	je     0x42f212
  42f1f4:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f1f7:	84 c0                	test   al,al
  42f1f9:	74 17                	je     0x42f212
  42f1fb:	3c ff                	cmp    al,0xff
  42f1fd:	74 13                	je     0x42f212
  42f1ff:	3b de                	cmp    ebx,esi
  42f201:	75 33                	jne    0x42f236
  42f203:	fe c8                	dec    al
  42f205:	56                   	push   esi
  42f206:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f209:	8b cd                	mov    ecx,ebp
  42f20b:	e8 90 4e fd ff       	call   0x4040a0
  42f210:	eb 4e                	jmp    0x42f260
  42f212:	3b de                	cmp    ebx,esi
  42f214:	75 0b                	jne    0x42f221
  42f216:	6a 01                	push   0x1
  42f218:	8b cd                	mov    ecx,ebp
  42f21a:	e8 81 4e fd ff       	call   0x4040a0
  42f21f:	eb 3f                	jmp    0x42f260
  42f221:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f224:	83 f8 1f             	cmp    eax,0x1f
  42f227:	77 04                	ja     0x42f22d
  42f229:	3b c3                	cmp    eax,ebx
  42f22b:	73 11                	jae    0x42f23e
  42f22d:	6a 01                	push   0x1
  42f22f:	8b cd                	mov    ecx,ebp
  42f231:	e8 6a 4e fd ff       	call   0x4040a0
  42f236:	53                   	push   ebx
  42f237:	8b cd                	mov    ecx,ebp
  42f239:	e8 22 28 fd ff       	call   0x401a60
  42f23e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f241:	8b cb                	mov    ecx,ebx
  42f243:	8b d1                	mov    edx,ecx
  42f245:	be 20 02 69 00       	mov    esi,0x690220
  42f24a:	c1 e9 02             	shr    ecx,0x2
  42f24d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f24f:	8b ca                	mov    ecx,edx
  42f251:	83 e1 03             	and    ecx,0x3
  42f254:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f256:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f259:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f25c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f260:	68 f0 8d 6b 00       	push   0x6b8df0
  42f265:	b9 40 56 6b 00       	mov    ecx,0x6b5640
  42f26a:	e8 f1 d5 fd ff       	call   0x40c860
  42f26f:	5f                   	pop    edi
  42f270:	5e                   	pop    esi
  42f271:	5d                   	pop    ebp
  42f272:	5b                   	pop    ebx
  42f273:	83 c4 08             	add    esp,0x8
  42f276:	c3                   	ret
  42f277:	90                   	nop
  42f278:	90                   	nop
  42f279:	90                   	nop
  42f27a:	90                   	nop
  42f27b:	90                   	nop
  42f27c:	90                   	nop
  42f27d:	90                   	nop
  42f27e:	90                   	nop
  42f27f:	90                   	nop
  42f280:	68 90 f2 42 00       	push   0x42f290
  42f285:	e8 f1 b2 1d 00       	call   0x60a57b
  42f28a:	59                   	pop    ecx
  42f28b:	c3                   	ret
  42f28c:	90                   	nop
  42f28d:	90                   	nop
  42f28e:	90                   	nop
  42f28f:	90                   	nop
  42f290:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42f296:	b0 40                	mov    al,0x40
  42f298:	84 c8                	test   al,cl
  42f29a:	75 12                	jne    0x42f2ae
  42f29c:	0a c8                	or     cl,al
  42f29e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42f2a4:	b9 40 56 6b 00       	mov    ecx,0x6b5640
  42f2a9:	e9 12 aa ff ff       	jmp    0x429cc0
  42f2ae:	c3                   	ret
  42f2af:	90                   	nop
  42f2b0:	e8 0b 00 00 00       	call   0x42f2c0
  42f2b5:	e9 d6 00 00 00       	jmp    0x42f390
  42f2ba:	90                   	nop
  42f2bb:	90                   	nop
  42f2bc:	90                   	nop
  42f2bd:	90                   	nop
  42f2be:	90                   	nop
  42f2bf:	90                   	nop
  42f2c0:	83 ec 08             	sub    esp,0x8
  42f2c3:	53                   	push   ebx
  42f2c4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f2c8:	55                   	push   ebp
  42f2c9:	56                   	push   esi
  42f2ca:	57                   	push   edi
  42f2cb:	33 f6                	xor    esi,esi
  42f2cd:	83 ec 10             	sub    esp,0x10
  42f2d0:	bf 20 02 69 00       	mov    edi,0x690220
  42f2d5:	8b ec                	mov    ebp,esp
  42f2d7:	83 c9 ff             	or     ecx,0xffffffff
  42f2da:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f2de:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f2e1:	33 c0                	xor    eax,eax
  42f2e3:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f2e6:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f2e9:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f2ec:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f2ee:	f7 d1                	not    ecx
  42f2f0:	49                   	dec    ecx
  42f2f1:	8b d9                	mov    ebx,ecx
  42f2f3:	83 fb fd             	cmp    ebx,0xfffffffd
  42f2f6:	76 05                	jbe    0x42f2fd
  42f2f8:	e8 fe f2 1c 00       	call   0x5fe5fb
  42f2fd:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f300:	3b ce                	cmp    ecx,esi
  42f302:	74 1e                	je     0x42f322
  42f304:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f307:	84 c0                	test   al,al
  42f309:	74 17                	je     0x42f322
  42f30b:	3c ff                	cmp    al,0xff
  42f30d:	74 13                	je     0x42f322
  42f30f:	3b de                	cmp    ebx,esi
  42f311:	75 33                	jne    0x42f346
  42f313:	fe c8                	dec    al
  42f315:	56                   	push   esi
  42f316:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f319:	8b cd                	mov    ecx,ebp
  42f31b:	e8 80 4d fd ff       	call   0x4040a0
  42f320:	eb 4e                	jmp    0x42f370
  42f322:	3b de                	cmp    ebx,esi
  42f324:	75 0b                	jne    0x42f331
  42f326:	6a 01                	push   0x1
  42f328:	8b cd                	mov    ecx,ebp
  42f32a:	e8 71 4d fd ff       	call   0x4040a0
  42f32f:	eb 3f                	jmp    0x42f370
  42f331:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f334:	83 f8 1f             	cmp    eax,0x1f
  42f337:	77 04                	ja     0x42f33d
  42f339:	3b c3                	cmp    eax,ebx
  42f33b:	73 11                	jae    0x42f34e
  42f33d:	6a 01                	push   0x1
  42f33f:	8b cd                	mov    ecx,ebp
  42f341:	e8 5a 4d fd ff       	call   0x4040a0
  42f346:	53                   	push   ebx
  42f347:	8b cd                	mov    ecx,ebp
  42f349:	e8 12 27 fd ff       	call   0x401a60
  42f34e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f351:	8b cb                	mov    ecx,ebx
  42f353:	8b d1                	mov    edx,ecx
  42f355:	be 20 02 69 00       	mov    esi,0x690220
  42f35a:	c1 e9 02             	shr    ecx,0x2
  42f35d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f35f:	8b ca                	mov    ecx,edx
  42f361:	83 e1 03             	and    ecx,0x3
  42f364:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f366:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f369:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f36c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f370:	68 f0 8d 6b 00       	push   0x6b8df0
  42f375:	b9 18 56 6b 00       	mov    ecx,0x6b5618
  42f37a:	e8 e1 d4 fd ff       	call   0x40c860
  42f37f:	5f                   	pop    edi
  42f380:	5e                   	pop    esi
  42f381:	5d                   	pop    ebp
  42f382:	5b                   	pop    ebx
  42f383:	83 c4 08             	add    esp,0x8
  42f386:	c3                   	ret
  42f387:	90                   	nop
  42f388:	90                   	nop
  42f389:	90                   	nop
  42f38a:	90                   	nop
  42f38b:	90                   	nop
  42f38c:	90                   	nop
  42f38d:	90                   	nop
  42f38e:	90                   	nop
  42f38f:	90                   	nop
  42f390:	68 a0 f3 42 00       	push   0x42f3a0
  42f395:	e8 e1 b1 1d 00       	call   0x60a57b
  42f39a:	59                   	pop    ecx
  42f39b:	c3                   	ret
  42f39c:	90                   	nop
  42f39d:	90                   	nop
  42f39e:	90                   	nop
  42f39f:	90                   	nop
  42f3a0:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42f3a6:	b0 80                	mov    al,0x80
  42f3a8:	84 c8                	test   al,cl
  42f3aa:	75 12                	jne    0x42f3be
  42f3ac:	0a c8                	or     cl,al
  42f3ae:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42f3b4:	b9 18 56 6b 00       	mov    ecx,0x6b5618
  42f3b9:	e9 02 a9 ff ff       	jmp    0x429cc0
  42f3be:	c3                   	ret
  42f3bf:	90                   	nop
  42f3c0:	e8 0b 00 00 00       	call   0x42f3d0
  42f3c5:	e9 d6 00 00 00       	jmp    0x42f4a0
  42f3ca:	90                   	nop
  42f3cb:	90                   	nop
  42f3cc:	90                   	nop
  42f3cd:	90                   	nop
  42f3ce:	90                   	nop
  42f3cf:	90                   	nop
  42f3d0:	83 ec 08             	sub    esp,0x8
  42f3d3:	53                   	push   ebx
  42f3d4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f3d8:	55                   	push   ebp
  42f3d9:	56                   	push   esi
  42f3da:	57                   	push   edi
  42f3db:	33 f6                	xor    esi,esi
  42f3dd:	83 ec 10             	sub    esp,0x10
  42f3e0:	bf 20 02 69 00       	mov    edi,0x690220
  42f3e5:	8b ec                	mov    ebp,esp
  42f3e7:	83 c9 ff             	or     ecx,0xffffffff
  42f3ea:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f3ee:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f3f1:	33 c0                	xor    eax,eax
  42f3f3:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f3f6:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f3f9:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f3fc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f3fe:	f7 d1                	not    ecx
  42f400:	49                   	dec    ecx
  42f401:	8b d9                	mov    ebx,ecx
  42f403:	83 fb fd             	cmp    ebx,0xfffffffd
  42f406:	76 05                	jbe    0x42f40d
  42f408:	e8 ee f1 1c 00       	call   0x5fe5fb
  42f40d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f410:	3b ce                	cmp    ecx,esi
  42f412:	74 1e                	je     0x42f432
  42f414:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f417:	84 c0                	test   al,al
  42f419:	74 17                	je     0x42f432
  42f41b:	3c ff                	cmp    al,0xff
  42f41d:	74 13                	je     0x42f432
  42f41f:	3b de                	cmp    ebx,esi
  42f421:	75 33                	jne    0x42f456
  42f423:	fe c8                	dec    al
  42f425:	56                   	push   esi
  42f426:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f429:	8b cd                	mov    ecx,ebp
  42f42b:	e8 70 4c fd ff       	call   0x4040a0
  42f430:	eb 4e                	jmp    0x42f480
  42f432:	3b de                	cmp    ebx,esi
  42f434:	75 0b                	jne    0x42f441
  42f436:	6a 01                	push   0x1
  42f438:	8b cd                	mov    ecx,ebp
  42f43a:	e8 61 4c fd ff       	call   0x4040a0
  42f43f:	eb 3f                	jmp    0x42f480
  42f441:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f444:	83 f8 1f             	cmp    eax,0x1f
  42f447:	77 04                	ja     0x42f44d
  42f449:	3b c3                	cmp    eax,ebx
  42f44b:	73 11                	jae    0x42f45e
  42f44d:	6a 01                	push   0x1
  42f44f:	8b cd                	mov    ecx,ebp
  42f451:	e8 4a 4c fd ff       	call   0x4040a0
  42f456:	53                   	push   ebx
  42f457:	8b cd                	mov    ecx,ebp
  42f459:	e8 02 26 fd ff       	call   0x401a60
  42f45e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f461:	8b cb                	mov    ecx,ebx
  42f463:	8b d1                	mov    edx,ecx
  42f465:	be 20 02 69 00       	mov    esi,0x690220
  42f46a:	c1 e9 02             	shr    ecx,0x2
  42f46d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f46f:	8b ca                	mov    ecx,edx
  42f471:	83 e1 03             	and    ecx,0x3
  42f474:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f476:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f479:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f47c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f480:	68 f0 8d 6b 00       	push   0x6b8df0
  42f485:	b9 f0 55 6b 00       	mov    ecx,0x6b55f0
  42f48a:	e8 d1 d3 fd ff       	call   0x40c860
  42f48f:	5f                   	pop    edi
  42f490:	5e                   	pop    esi
  42f491:	5d                   	pop    ebp
  42f492:	5b                   	pop    ebx
  42f493:	83 c4 08             	add    esp,0x8
  42f496:	c3                   	ret
  42f497:	90                   	nop
  42f498:	90                   	nop
  42f499:	90                   	nop
  42f49a:	90                   	nop
  42f49b:	90                   	nop
  42f49c:	90                   	nop
  42f49d:	90                   	nop
  42f49e:	90                   	nop
  42f49f:	90                   	nop
  42f4a0:	68 b0 f4 42 00       	push   0x42f4b0
  42f4a5:	e8 d1 b0 1d 00       	call   0x60a57b
  42f4aa:	59                   	pop    ecx
  42f4ab:	c3                   	ret
  42f4ac:	90                   	nop
  42f4ad:	90                   	nop
  42f4ae:	90                   	nop
  42f4af:	90                   	nop
  42f4b0:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42f4b6:	b0 01                	mov    al,0x1
  42f4b8:	84 c8                	test   al,cl
  42f4ba:	75 12                	jne    0x42f4ce
  42f4bc:	0a c8                	or     cl,al
  42f4be:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42f4c4:	b9 f0 55 6b 00       	mov    ecx,0x6b55f0
  42f4c9:	e9 f2 a7 ff ff       	jmp    0x429cc0
  42f4ce:	c3                   	ret
  42f4cf:	90                   	nop
  42f4d0:	e8 0b 00 00 00       	call   0x42f4e0
  42f4d5:	e9 d6 00 00 00       	jmp    0x42f5b0
  42f4da:	90                   	nop
  42f4db:	90                   	nop
  42f4dc:	90                   	nop
  42f4dd:	90                   	nop
  42f4de:	90                   	nop
  42f4df:	90                   	nop
  42f4e0:	83 ec 08             	sub    esp,0x8
  42f4e3:	53                   	push   ebx
  42f4e4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f4e8:	55                   	push   ebp
  42f4e9:	56                   	push   esi
  42f4ea:	57                   	push   edi
  42f4eb:	33 f6                	xor    esi,esi
  42f4ed:	83 ec 10             	sub    esp,0x10
  42f4f0:	bf 20 02 69 00       	mov    edi,0x690220
  42f4f5:	8b ec                	mov    ebp,esp
  42f4f7:	83 c9 ff             	or     ecx,0xffffffff
  42f4fa:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f4fe:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f501:	33 c0                	xor    eax,eax
  42f503:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f506:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f509:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f50c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f50e:	f7 d1                	not    ecx
  42f510:	49                   	dec    ecx
  42f511:	8b d9                	mov    ebx,ecx
  42f513:	83 fb fd             	cmp    ebx,0xfffffffd
  42f516:	76 05                	jbe    0x42f51d
  42f518:	e8 de f0 1c 00       	call   0x5fe5fb
  42f51d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f520:	3b ce                	cmp    ecx,esi
  42f522:	74 1e                	je     0x42f542
  42f524:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f527:	84 c0                	test   al,al
  42f529:	74 17                	je     0x42f542
  42f52b:	3c ff                	cmp    al,0xff
  42f52d:	74 13                	je     0x42f542
  42f52f:	3b de                	cmp    ebx,esi
  42f531:	75 33                	jne    0x42f566
  42f533:	fe c8                	dec    al
  42f535:	56                   	push   esi
  42f536:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f539:	8b cd                	mov    ecx,ebp
  42f53b:	e8 60 4b fd ff       	call   0x4040a0
  42f540:	eb 4e                	jmp    0x42f590
  42f542:	3b de                	cmp    ebx,esi
  42f544:	75 0b                	jne    0x42f551
  42f546:	6a 01                	push   0x1
  42f548:	8b cd                	mov    ecx,ebp
  42f54a:	e8 51 4b fd ff       	call   0x4040a0
  42f54f:	eb 3f                	jmp    0x42f590
  42f551:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f554:	83 f8 1f             	cmp    eax,0x1f
  42f557:	77 04                	ja     0x42f55d
  42f559:	3b c3                	cmp    eax,ebx
  42f55b:	73 11                	jae    0x42f56e
  42f55d:	6a 01                	push   0x1
  42f55f:	8b cd                	mov    ecx,ebp
  42f561:	e8 3a 4b fd ff       	call   0x4040a0
  42f566:	53                   	push   ebx
  42f567:	8b cd                	mov    ecx,ebp
  42f569:	e8 f2 24 fd ff       	call   0x401a60
  42f56e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f571:	8b cb                	mov    ecx,ebx
  42f573:	8b d1                	mov    edx,ecx
  42f575:	be 20 02 69 00       	mov    esi,0x690220
  42f57a:	c1 e9 02             	shr    ecx,0x2
  42f57d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f57f:	8b ca                	mov    ecx,edx
  42f581:	83 e1 03             	and    ecx,0x3
  42f584:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f586:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f589:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f58c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f590:	68 f0 8d 6b 00       	push   0x6b8df0
  42f595:	b9 c0 55 6b 00       	mov    ecx,0x6b55c0
  42f59a:	e8 c1 d2 fd ff       	call   0x40c860
  42f59f:	5f                   	pop    edi
  42f5a0:	5e                   	pop    esi
  42f5a1:	5d                   	pop    ebp
  42f5a2:	5b                   	pop    ebx
  42f5a3:	83 c4 08             	add    esp,0x8
  42f5a6:	c3                   	ret
  42f5a7:	90                   	nop
  42f5a8:	90                   	nop
  42f5a9:	90                   	nop
  42f5aa:	90                   	nop
  42f5ab:	90                   	nop
  42f5ac:	90                   	nop
  42f5ad:	90                   	nop
  42f5ae:	90                   	nop
  42f5af:	90                   	nop
  42f5b0:	68 c0 f5 42 00       	push   0x42f5c0
  42f5b5:	e8 c1 af 1d 00       	call   0x60a57b
  42f5ba:	59                   	pop    ecx
  42f5bb:	c3                   	ret
  42f5bc:	90                   	nop
  42f5bd:	90                   	nop
  42f5be:	90                   	nop
  42f5bf:	90                   	nop
  42f5c0:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42f5c6:	b0 02                	mov    al,0x2
  42f5c8:	84 c8                	test   al,cl
  42f5ca:	75 12                	jne    0x42f5de
  42f5cc:	0a c8                	or     cl,al
  42f5ce:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42f5d4:	b9 c0 55 6b 00       	mov    ecx,0x6b55c0
  42f5d9:	e9 e2 a6 ff ff       	jmp    0x429cc0
  42f5de:	c3                   	ret
  42f5df:	90                   	nop
  42f5e0:	e8 0b 00 00 00       	call   0x42f5f0
  42f5e5:	e9 d6 00 00 00       	jmp    0x42f6c0
  42f5ea:	90                   	nop
  42f5eb:	90                   	nop
  42f5ec:	90                   	nop
  42f5ed:	90                   	nop
  42f5ee:	90                   	nop
  42f5ef:	90                   	nop
  42f5f0:	83 ec 08             	sub    esp,0x8
  42f5f3:	53                   	push   ebx
  42f5f4:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f5f8:	55                   	push   ebp
  42f5f9:	56                   	push   esi
  42f5fa:	57                   	push   edi
  42f5fb:	33 f6                	xor    esi,esi
  42f5fd:	83 ec 10             	sub    esp,0x10
  42f600:	bf 20 02 69 00       	mov    edi,0x690220
  42f605:	8b ec                	mov    ebp,esp
  42f607:	83 c9 ff             	or     ecx,0xffffffff
  42f60a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f60e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f611:	33 c0                	xor    eax,eax
  42f613:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f616:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f619:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f61c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f61e:	f7 d1                	not    ecx
  42f620:	49                   	dec    ecx
  42f621:	8b d9                	mov    ebx,ecx
  42f623:	83 fb fd             	cmp    ebx,0xfffffffd
  42f626:	76 05                	jbe    0x42f62d
  42f628:	e8 ce ef 1c 00       	call   0x5fe5fb
  42f62d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f630:	3b ce                	cmp    ecx,esi
  42f632:	74 1e                	je     0x42f652
  42f634:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f637:	84 c0                	test   al,al
  42f639:	74 17                	je     0x42f652
  42f63b:	3c ff                	cmp    al,0xff
  42f63d:	74 13                	je     0x42f652
  42f63f:	3b de                	cmp    ebx,esi
  42f641:	75 33                	jne    0x42f676
  42f643:	fe c8                	dec    al
  42f645:	56                   	push   esi
  42f646:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f649:	8b cd                	mov    ecx,ebp
  42f64b:	e8 50 4a fd ff       	call   0x4040a0
  42f650:	eb 4e                	jmp    0x42f6a0
  42f652:	3b de                	cmp    ebx,esi
  42f654:	75 0b                	jne    0x42f661
  42f656:	6a 01                	push   0x1
  42f658:	8b cd                	mov    ecx,ebp
  42f65a:	e8 41 4a fd ff       	call   0x4040a0
  42f65f:	eb 3f                	jmp    0x42f6a0
  42f661:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f664:	83 f8 1f             	cmp    eax,0x1f
  42f667:	77 04                	ja     0x42f66d
  42f669:	3b c3                	cmp    eax,ebx
  42f66b:	73 11                	jae    0x42f67e
  42f66d:	6a 01                	push   0x1
  42f66f:	8b cd                	mov    ecx,ebp
  42f671:	e8 2a 4a fd ff       	call   0x4040a0
  42f676:	53                   	push   ebx
  42f677:	8b cd                	mov    ecx,ebp
  42f679:	e8 e2 23 fd ff       	call   0x401a60
  42f67e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f681:	8b cb                	mov    ecx,ebx
  42f683:	8b d1                	mov    edx,ecx
  42f685:	be 20 02 69 00       	mov    esi,0x690220
  42f68a:	c1 e9 02             	shr    ecx,0x2
  42f68d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f68f:	8b ca                	mov    ecx,edx
  42f691:	83 e1 03             	and    ecx,0x3
  42f694:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f696:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f699:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f69c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f6a0:	68 f0 8d 6b 00       	push   0x6b8df0
  42f6a5:	b9 98 55 6b 00       	mov    ecx,0x6b5598
  42f6aa:	e8 b1 d1 fd ff       	call   0x40c860
  42f6af:	5f                   	pop    edi
  42f6b0:	5e                   	pop    esi
  42f6b1:	5d                   	pop    ebp
  42f6b2:	5b                   	pop    ebx
  42f6b3:	83 c4 08             	add    esp,0x8
  42f6b6:	c3                   	ret
  42f6b7:	90                   	nop
  42f6b8:	90                   	nop
  42f6b9:	90                   	nop
  42f6ba:	90                   	nop
  42f6bb:	90                   	nop
  42f6bc:	90                   	nop
  42f6bd:	90                   	nop
  42f6be:	90                   	nop
  42f6bf:	90                   	nop
  42f6c0:	68 d0 f6 42 00       	push   0x42f6d0
  42f6c5:	e8 b1 ae 1d 00       	call   0x60a57b
  42f6ca:	59                   	pop    ecx
  42f6cb:	c3                   	ret
  42f6cc:	90                   	nop
  42f6cd:	90                   	nop
  42f6ce:	90                   	nop
  42f6cf:	90                   	nop
  42f6d0:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42f6d6:	b0 04                	mov    al,0x4
  42f6d8:	84 c8                	test   al,cl
  42f6da:	75 12                	jne    0x42f6ee
  42f6dc:	0a c8                	or     cl,al
  42f6de:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42f6e4:	b9 98 55 6b 00       	mov    ecx,0x6b5598
  42f6e9:	e9 d2 a5 ff ff       	jmp    0x429cc0
  42f6ee:	c3                   	ret
  42f6ef:	90                   	nop
  42f6f0:	e8 0b 00 00 00       	call   0x42f700
  42f6f5:	e9 d6 00 00 00       	jmp    0x42f7d0
  42f6fa:	90                   	nop
  42f6fb:	90                   	nop
  42f6fc:	90                   	nop
  42f6fd:	90                   	nop
  42f6fe:	90                   	nop
  42f6ff:	90                   	nop
  42f700:	83 ec 08             	sub    esp,0x8
  42f703:	53                   	push   ebx
  42f704:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f708:	55                   	push   ebp
  42f709:	56                   	push   esi
  42f70a:	57                   	push   edi
  42f70b:	33 f6                	xor    esi,esi
  42f70d:	83 ec 10             	sub    esp,0x10
  42f710:	bf 20 02 69 00       	mov    edi,0x690220
  42f715:	8b ec                	mov    ebp,esp
  42f717:	83 c9 ff             	or     ecx,0xffffffff
  42f71a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f71e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f721:	33 c0                	xor    eax,eax
  42f723:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f726:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f729:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f72c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f72e:	f7 d1                	not    ecx
  42f730:	49                   	dec    ecx
  42f731:	8b d9                	mov    ebx,ecx
  42f733:	83 fb fd             	cmp    ebx,0xfffffffd
  42f736:	76 05                	jbe    0x42f73d
  42f738:	e8 be ee 1c 00       	call   0x5fe5fb
  42f73d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f740:	3b ce                	cmp    ecx,esi
  42f742:	74 1e                	je     0x42f762
  42f744:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f747:	84 c0                	test   al,al
  42f749:	74 17                	je     0x42f762
  42f74b:	3c ff                	cmp    al,0xff
  42f74d:	74 13                	je     0x42f762
  42f74f:	3b de                	cmp    ebx,esi
  42f751:	75 33                	jne    0x42f786
  42f753:	fe c8                	dec    al
  42f755:	56                   	push   esi
  42f756:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f759:	8b cd                	mov    ecx,ebp
  42f75b:	e8 40 49 fd ff       	call   0x4040a0
  42f760:	eb 4e                	jmp    0x42f7b0
  42f762:	3b de                	cmp    ebx,esi
  42f764:	75 0b                	jne    0x42f771
  42f766:	6a 01                	push   0x1
  42f768:	8b cd                	mov    ecx,ebp
  42f76a:	e8 31 49 fd ff       	call   0x4040a0
  42f76f:	eb 3f                	jmp    0x42f7b0
  42f771:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f774:	83 f8 1f             	cmp    eax,0x1f
  42f777:	77 04                	ja     0x42f77d
  42f779:	3b c3                	cmp    eax,ebx
  42f77b:	73 11                	jae    0x42f78e
  42f77d:	6a 01                	push   0x1
  42f77f:	8b cd                	mov    ecx,ebp
  42f781:	e8 1a 49 fd ff       	call   0x4040a0
  42f786:	53                   	push   ebx
  42f787:	8b cd                	mov    ecx,ebp
  42f789:	e8 d2 22 fd ff       	call   0x401a60
  42f78e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f791:	8b cb                	mov    ecx,ebx
  42f793:	8b d1                	mov    edx,ecx
  42f795:	be 20 02 69 00       	mov    esi,0x690220
  42f79a:	c1 e9 02             	shr    ecx,0x2
  42f79d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f79f:	8b ca                	mov    ecx,edx
  42f7a1:	83 e1 03             	and    ecx,0x3
  42f7a4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f7a6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f7a9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f7ac:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f7b0:	68 f0 8d 6b 00       	push   0x6b8df0
  42f7b5:	b9 70 55 6b 00       	mov    ecx,0x6b5570
  42f7ba:	e8 a1 d0 fd ff       	call   0x40c860
  42f7bf:	5f                   	pop    edi
  42f7c0:	5e                   	pop    esi
  42f7c1:	5d                   	pop    ebp
  42f7c2:	5b                   	pop    ebx
  42f7c3:	83 c4 08             	add    esp,0x8
  42f7c6:	c3                   	ret
  42f7c7:	90                   	nop
  42f7c8:	90                   	nop
  42f7c9:	90                   	nop
  42f7ca:	90                   	nop
  42f7cb:	90                   	nop
  42f7cc:	90                   	nop
  42f7cd:	90                   	nop
  42f7ce:	90                   	nop
  42f7cf:	90                   	nop
  42f7d0:	68 e0 f7 42 00       	push   0x42f7e0
  42f7d5:	e8 a1 ad 1d 00       	call   0x60a57b
  42f7da:	59                   	pop    ecx
  42f7db:	c3                   	ret
  42f7dc:	90                   	nop
  42f7dd:	90                   	nop
  42f7de:	90                   	nop
  42f7df:	90                   	nop
  42f7e0:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42f7e6:	b0 08                	mov    al,0x8
  42f7e8:	84 c8                	test   al,cl
  42f7ea:	75 12                	jne    0x42f7fe
  42f7ec:	0a c8                	or     cl,al
  42f7ee:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42f7f4:	b9 70 55 6b 00       	mov    ecx,0x6b5570
  42f7f9:	e9 c2 a4 ff ff       	jmp    0x429cc0
  42f7fe:	c3                   	ret
  42f7ff:	90                   	nop
  42f800:	e8 0b 00 00 00       	call   0x42f810
  42f805:	e9 d6 00 00 00       	jmp    0x42f8e0
  42f80a:	90                   	nop
  42f80b:	90                   	nop
  42f80c:	90                   	nop
  42f80d:	90                   	nop
  42f80e:	90                   	nop
  42f80f:	90                   	nop
  42f810:	83 ec 08             	sub    esp,0x8
  42f813:	53                   	push   ebx
  42f814:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f818:	55                   	push   ebp
  42f819:	56                   	push   esi
  42f81a:	57                   	push   edi
  42f81b:	33 f6                	xor    esi,esi
  42f81d:	83 ec 10             	sub    esp,0x10
  42f820:	bf 20 02 69 00       	mov    edi,0x690220
  42f825:	8b ec                	mov    ebp,esp
  42f827:	83 c9 ff             	or     ecx,0xffffffff
  42f82a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f82e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f831:	33 c0                	xor    eax,eax
  42f833:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f836:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f839:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f83c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f83e:	f7 d1                	not    ecx
  42f840:	49                   	dec    ecx
  42f841:	8b d9                	mov    ebx,ecx
  42f843:	83 fb fd             	cmp    ebx,0xfffffffd
  42f846:	76 05                	jbe    0x42f84d
  42f848:	e8 ae ed 1c 00       	call   0x5fe5fb
  42f84d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f850:	3b ce                	cmp    ecx,esi
  42f852:	74 1e                	je     0x42f872
  42f854:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f857:	84 c0                	test   al,al
  42f859:	74 17                	je     0x42f872
  42f85b:	3c ff                	cmp    al,0xff
  42f85d:	74 13                	je     0x42f872
  42f85f:	3b de                	cmp    ebx,esi
  42f861:	75 33                	jne    0x42f896
  42f863:	fe c8                	dec    al
  42f865:	56                   	push   esi
  42f866:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f869:	8b cd                	mov    ecx,ebp
  42f86b:	e8 30 48 fd ff       	call   0x4040a0
  42f870:	eb 4e                	jmp    0x42f8c0
  42f872:	3b de                	cmp    ebx,esi
  42f874:	75 0b                	jne    0x42f881
  42f876:	6a 01                	push   0x1
  42f878:	8b cd                	mov    ecx,ebp
  42f87a:	e8 21 48 fd ff       	call   0x4040a0
  42f87f:	eb 3f                	jmp    0x42f8c0
  42f881:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f884:	83 f8 1f             	cmp    eax,0x1f
  42f887:	77 04                	ja     0x42f88d
  42f889:	3b c3                	cmp    eax,ebx
  42f88b:	73 11                	jae    0x42f89e
  42f88d:	6a 01                	push   0x1
  42f88f:	8b cd                	mov    ecx,ebp
  42f891:	e8 0a 48 fd ff       	call   0x4040a0
  42f896:	53                   	push   ebx
  42f897:	8b cd                	mov    ecx,ebp
  42f899:	e8 c2 21 fd ff       	call   0x401a60
  42f89e:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f8a1:	8b cb                	mov    ecx,ebx
  42f8a3:	8b d1                	mov    edx,ecx
  42f8a5:	be 20 02 69 00       	mov    esi,0x690220
  42f8aa:	c1 e9 02             	shr    ecx,0x2
  42f8ad:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f8af:	8b ca                	mov    ecx,edx
  42f8b1:	83 e1 03             	and    ecx,0x3
  42f8b4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f8b6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f8b9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f8bc:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f8c0:	68 f0 8d 6b 00       	push   0x6b8df0
  42f8c5:	b9 48 55 6b 00       	mov    ecx,0x6b5548
  42f8ca:	e8 91 cf fd ff       	call   0x40c860
  42f8cf:	5f                   	pop    edi
  42f8d0:	5e                   	pop    esi
  42f8d1:	5d                   	pop    ebp
  42f8d2:	5b                   	pop    ebx
  42f8d3:	83 c4 08             	add    esp,0x8
  42f8d6:	c3                   	ret
  42f8d7:	90                   	nop
  42f8d8:	90                   	nop
  42f8d9:	90                   	nop
  42f8da:	90                   	nop
  42f8db:	90                   	nop
  42f8dc:	90                   	nop
  42f8dd:	90                   	nop
  42f8de:	90                   	nop
  42f8df:	90                   	nop
  42f8e0:	68 f0 f8 42 00       	push   0x42f8f0
  42f8e5:	e8 91 ac 1d 00       	call   0x60a57b
  42f8ea:	59                   	pop    ecx
  42f8eb:	c3                   	ret
  42f8ec:	90                   	nop
  42f8ed:	90                   	nop
  42f8ee:	90                   	nop
  42f8ef:	90                   	nop
  42f8f0:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42f8f6:	b0 10                	mov    al,0x10
  42f8f8:	84 c8                	test   al,cl
  42f8fa:	75 12                	jne    0x42f90e
  42f8fc:	0a c8                	or     cl,al
  42f8fe:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42f904:	b9 48 55 6b 00       	mov    ecx,0x6b5548
  42f909:	e9 b2 a3 ff ff       	jmp    0x429cc0
  42f90e:	c3                   	ret
  42f90f:	90                   	nop
  42f910:	e8 0b 00 00 00       	call   0x42f920
  42f915:	e9 d6 00 00 00       	jmp    0x42f9f0
  42f91a:	90                   	nop
  42f91b:	90                   	nop
  42f91c:	90                   	nop
  42f91d:	90                   	nop
  42f91e:	90                   	nop
  42f91f:	90                   	nop
  42f920:	83 ec 08             	sub    esp,0x8
  42f923:	53                   	push   ebx
  42f924:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42f928:	55                   	push   ebp
  42f929:	56                   	push   esi
  42f92a:	57                   	push   edi
  42f92b:	33 f6                	xor    esi,esi
  42f92d:	83 ec 10             	sub    esp,0x10
  42f930:	bf 20 02 69 00       	mov    edi,0x690220
  42f935:	8b ec                	mov    ebp,esp
  42f937:	83 c9 ff             	or     ecx,0xffffffff
  42f93a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42f93e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42f941:	33 c0                	xor    eax,eax
  42f943:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42f946:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42f949:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42f94c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42f94e:	f7 d1                	not    ecx
  42f950:	49                   	dec    ecx
  42f951:	8b d9                	mov    ebx,ecx
  42f953:	83 fb fd             	cmp    ebx,0xfffffffd
  42f956:	76 05                	jbe    0x42f95d
  42f958:	e8 9e ec 1c 00       	call   0x5fe5fb
  42f95d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42f960:	3b ce                	cmp    ecx,esi
  42f962:	74 1e                	je     0x42f982
  42f964:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42f967:	84 c0                	test   al,al
  42f969:	74 17                	je     0x42f982
  42f96b:	3c ff                	cmp    al,0xff
  42f96d:	74 13                	je     0x42f982
  42f96f:	3b de                	cmp    ebx,esi
  42f971:	75 33                	jne    0x42f9a6
  42f973:	fe c8                	dec    al
  42f975:	56                   	push   esi
  42f976:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42f979:	8b cd                	mov    ecx,ebp
  42f97b:	e8 20 47 fd ff       	call   0x4040a0
  42f980:	eb 4e                	jmp    0x42f9d0
  42f982:	3b de                	cmp    ebx,esi
  42f984:	75 0b                	jne    0x42f991
  42f986:	6a 01                	push   0x1
  42f988:	8b cd                	mov    ecx,ebp
  42f98a:	e8 11 47 fd ff       	call   0x4040a0
  42f98f:	eb 3f                	jmp    0x42f9d0
  42f991:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42f994:	83 f8 1f             	cmp    eax,0x1f
  42f997:	77 04                	ja     0x42f99d
  42f999:	3b c3                	cmp    eax,ebx
  42f99b:	73 11                	jae    0x42f9ae
  42f99d:	6a 01                	push   0x1
  42f99f:	8b cd                	mov    ecx,ebp
  42f9a1:	e8 fa 46 fd ff       	call   0x4040a0
  42f9a6:	53                   	push   ebx
  42f9a7:	8b cd                	mov    ecx,ebp
  42f9a9:	e8 b2 20 fd ff       	call   0x401a60
  42f9ae:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42f9b1:	8b cb                	mov    ecx,ebx
  42f9b3:	8b d1                	mov    edx,ecx
  42f9b5:	be 20 02 69 00       	mov    esi,0x690220
  42f9ba:	c1 e9 02             	shr    ecx,0x2
  42f9bd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42f9bf:	8b ca                	mov    ecx,edx
  42f9c1:	83 e1 03             	and    ecx,0x3
  42f9c4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42f9c6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42f9c9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42f9cc:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42f9d0:	68 f0 8d 6b 00       	push   0x6b8df0
  42f9d5:	b9 20 55 6b 00       	mov    ecx,0x6b5520
  42f9da:	e8 81 ce fd ff       	call   0x40c860
  42f9df:	5f                   	pop    edi
  42f9e0:	5e                   	pop    esi
  42f9e1:	5d                   	pop    ebp
  42f9e2:	5b                   	pop    ebx
  42f9e3:	83 c4 08             	add    esp,0x8
  42f9e6:	c3                   	ret
  42f9e7:	90                   	nop
  42f9e8:	90                   	nop
  42f9e9:	90                   	nop
  42f9ea:	90                   	nop
  42f9eb:	90                   	nop
  42f9ec:	90                   	nop
  42f9ed:	90                   	nop
  42f9ee:	90                   	nop
  42f9ef:	90                   	nop
  42f9f0:	68 00 fa 42 00       	push   0x42fa00
  42f9f5:	e8 81 ab 1d 00       	call   0x60a57b
  42f9fa:	59                   	pop    ecx
  42f9fb:	c3                   	ret
  42f9fc:	90                   	nop
  42f9fd:	90                   	nop
  42f9fe:	90                   	nop
  42f9ff:	90                   	nop
  42fa00:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42fa06:	b0 20                	mov    al,0x20
  42fa08:	84 c8                	test   al,cl
  42fa0a:	75 12                	jne    0x42fa1e
  42fa0c:	0a c8                	or     cl,al
  42fa0e:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42fa14:	b9 20 55 6b 00       	mov    ecx,0x6b5520
  42fa19:	e9 a2 a2 ff ff       	jmp    0x429cc0
  42fa1e:	c3                   	ret
  42fa1f:	90                   	nop
  42fa20:	e8 0b 00 00 00       	call   0x42fa30
  42fa25:	e9 d6 00 00 00       	jmp    0x42fb00
  42fa2a:	90                   	nop
  42fa2b:	90                   	nop
  42fa2c:	90                   	nop
  42fa2d:	90                   	nop
  42fa2e:	90                   	nop
  42fa2f:	90                   	nop
  42fa30:	83 ec 08             	sub    esp,0x8
  42fa33:	53                   	push   ebx
  42fa34:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42fa38:	55                   	push   ebp
  42fa39:	56                   	push   esi
  42fa3a:	57                   	push   edi
  42fa3b:	33 f6                	xor    esi,esi
  42fa3d:	83 ec 10             	sub    esp,0x10
  42fa40:	bf 38 02 69 00       	mov    edi,0x690238
  42fa45:	8b ec                	mov    ebp,esp
  42fa47:	83 c9 ff             	or     ecx,0xffffffff
  42fa4a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42fa4e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42fa51:	33 c0                	xor    eax,eax
  42fa53:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42fa56:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42fa59:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42fa5c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42fa5e:	f7 d1                	not    ecx
  42fa60:	49                   	dec    ecx
  42fa61:	8b d9                	mov    ebx,ecx
  42fa63:	83 fb fd             	cmp    ebx,0xfffffffd
  42fa66:	76 05                	jbe    0x42fa6d
  42fa68:	e8 8e eb 1c 00       	call   0x5fe5fb
  42fa6d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42fa70:	3b ce                	cmp    ecx,esi
  42fa72:	74 1e                	je     0x42fa92
  42fa74:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42fa77:	84 c0                	test   al,al
  42fa79:	74 17                	je     0x42fa92
  42fa7b:	3c ff                	cmp    al,0xff
  42fa7d:	74 13                	je     0x42fa92
  42fa7f:	3b de                	cmp    ebx,esi
  42fa81:	75 33                	jne    0x42fab6
  42fa83:	fe c8                	dec    al
  42fa85:	56                   	push   esi
  42fa86:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42fa89:	8b cd                	mov    ecx,ebp
  42fa8b:	e8 10 46 fd ff       	call   0x4040a0
  42fa90:	eb 4e                	jmp    0x42fae0
  42fa92:	3b de                	cmp    ebx,esi
  42fa94:	75 0b                	jne    0x42faa1
  42fa96:	6a 01                	push   0x1
  42fa98:	8b cd                	mov    ecx,ebp
  42fa9a:	e8 01 46 fd ff       	call   0x4040a0
  42fa9f:	eb 3f                	jmp    0x42fae0
  42faa1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42faa4:	83 f8 1f             	cmp    eax,0x1f
  42faa7:	77 04                	ja     0x42faad
  42faa9:	3b c3                	cmp    eax,ebx
  42faab:	73 11                	jae    0x42fabe
  42faad:	6a 01                	push   0x1
  42faaf:	8b cd                	mov    ecx,ebp
  42fab1:	e8 ea 45 fd ff       	call   0x4040a0
  42fab6:	53                   	push   ebx
  42fab7:	8b cd                	mov    ecx,ebp
  42fab9:	e8 a2 1f fd ff       	call   0x401a60
  42fabe:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42fac1:	8b cb                	mov    ecx,ebx
  42fac3:	8b d1                	mov    edx,ecx
  42fac5:	be 38 02 69 00       	mov    esi,0x690238
  42faca:	c1 e9 02             	shr    ecx,0x2
  42facd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42facf:	8b ca                	mov    ecx,edx
  42fad1:	83 e1 03             	and    ecx,0x3
  42fad4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42fad6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42fad9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42fadc:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42fae0:	68 f0 8d 6b 00       	push   0x6b8df0
  42fae5:	b9 f8 54 6b 00       	mov    ecx,0x6b54f8
  42faea:	e8 71 cd fd ff       	call   0x40c860
  42faef:	5f                   	pop    edi
  42faf0:	5e                   	pop    esi
  42faf1:	5d                   	pop    ebp
  42faf2:	5b                   	pop    ebx
  42faf3:	83 c4 08             	add    esp,0x8
  42faf6:	c3                   	ret
  42faf7:	90                   	nop
  42faf8:	90                   	nop
  42faf9:	90                   	nop
  42fafa:	90                   	nop
  42fafb:	90                   	nop
  42fafc:	90                   	nop
  42fafd:	90                   	nop
  42fafe:	90                   	nop
  42faff:	90                   	nop
  42fb00:	68 10 fb 42 00       	push   0x42fb10
  42fb05:	e8 71 aa 1d 00       	call   0x60a57b
  42fb0a:	59                   	pop    ecx
  42fb0b:	c3                   	ret
  42fb0c:	90                   	nop
  42fb0d:	90                   	nop
  42fb0e:	90                   	nop
  42fb0f:	90                   	nop
  42fb10:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42fb16:	b0 40                	mov    al,0x40
  42fb18:	84 c8                	test   al,cl
  42fb1a:	75 12                	jne    0x42fb2e
  42fb1c:	0a c8                	or     cl,al
  42fb1e:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42fb24:	b9 f8 54 6b 00       	mov    ecx,0x6b54f8
  42fb29:	e9 92 a1 ff ff       	jmp    0x429cc0
  42fb2e:	c3                   	ret
  42fb2f:	90                   	nop
  42fb30:	e8 0b 00 00 00       	call   0x42fb40
  42fb35:	e9 d6 00 00 00       	jmp    0x42fc10
  42fb3a:	90                   	nop
  42fb3b:	90                   	nop
  42fb3c:	90                   	nop
  42fb3d:	90                   	nop
  42fb3e:	90                   	nop
  42fb3f:	90                   	nop
  42fb40:	83 ec 08             	sub    esp,0x8
  42fb43:	53                   	push   ebx
  42fb44:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42fb48:	55                   	push   ebp
  42fb49:	56                   	push   esi
  42fb4a:	57                   	push   edi
  42fb4b:	33 f6                	xor    esi,esi
  42fb4d:	83 ec 10             	sub    esp,0x10
  42fb50:	bf 48 02 69 00       	mov    edi,0x690248
  42fb55:	8b ec                	mov    ebp,esp
  42fb57:	83 c9 ff             	or     ecx,0xffffffff
  42fb5a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42fb5e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42fb61:	33 c0                	xor    eax,eax
  42fb63:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42fb66:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42fb69:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42fb6c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42fb6e:	f7 d1                	not    ecx
  42fb70:	49                   	dec    ecx
  42fb71:	8b d9                	mov    ebx,ecx
  42fb73:	83 fb fd             	cmp    ebx,0xfffffffd
  42fb76:	76 05                	jbe    0x42fb7d
  42fb78:	e8 7e ea 1c 00       	call   0x5fe5fb
  42fb7d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42fb80:	3b ce                	cmp    ecx,esi
  42fb82:	74 1e                	je     0x42fba2
  42fb84:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42fb87:	84 c0                	test   al,al
  42fb89:	74 17                	je     0x42fba2
  42fb8b:	3c ff                	cmp    al,0xff
  42fb8d:	74 13                	je     0x42fba2
  42fb8f:	3b de                	cmp    ebx,esi
  42fb91:	75 33                	jne    0x42fbc6
  42fb93:	fe c8                	dec    al
  42fb95:	56                   	push   esi
  42fb96:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42fb99:	8b cd                	mov    ecx,ebp
  42fb9b:	e8 00 45 fd ff       	call   0x4040a0
  42fba0:	eb 4e                	jmp    0x42fbf0
  42fba2:	3b de                	cmp    ebx,esi
  42fba4:	75 0b                	jne    0x42fbb1
  42fba6:	6a 01                	push   0x1
  42fba8:	8b cd                	mov    ecx,ebp
  42fbaa:	e8 f1 44 fd ff       	call   0x4040a0
  42fbaf:	eb 3f                	jmp    0x42fbf0
  42fbb1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42fbb4:	83 f8 1f             	cmp    eax,0x1f
  42fbb7:	77 04                	ja     0x42fbbd
  42fbb9:	3b c3                	cmp    eax,ebx
  42fbbb:	73 11                	jae    0x42fbce
  42fbbd:	6a 01                	push   0x1
  42fbbf:	8b cd                	mov    ecx,ebp
  42fbc1:	e8 da 44 fd ff       	call   0x4040a0
  42fbc6:	53                   	push   ebx
  42fbc7:	8b cd                	mov    ecx,ebp
  42fbc9:	e8 92 1e fd ff       	call   0x401a60
  42fbce:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42fbd1:	8b cb                	mov    ecx,ebx
  42fbd3:	8b d1                	mov    edx,ecx
  42fbd5:	be 48 02 69 00       	mov    esi,0x690248
  42fbda:	c1 e9 02             	shr    ecx,0x2
  42fbdd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42fbdf:	8b ca                	mov    ecx,edx
  42fbe1:	83 e1 03             	and    ecx,0x3
  42fbe4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42fbe6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42fbe9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42fbec:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42fbf0:	68 f0 8d 6b 00       	push   0x6b8df0
  42fbf5:	b9 d0 54 6b 00       	mov    ecx,0x6b54d0
  42fbfa:	e8 61 cc fd ff       	call   0x40c860
  42fbff:	5f                   	pop    edi
  42fc00:	5e                   	pop    esi
  42fc01:	5d                   	pop    ebp
  42fc02:	5b                   	pop    ebx
  42fc03:	83 c4 08             	add    esp,0x8
  42fc06:	c3                   	ret
  42fc07:	90                   	nop
  42fc08:	90                   	nop
  42fc09:	90                   	nop
  42fc0a:	90                   	nop
  42fc0b:	90                   	nop
  42fc0c:	90                   	nop
  42fc0d:	90                   	nop
  42fc0e:	90                   	nop
  42fc0f:	90                   	nop
  42fc10:	68 20 fc 42 00       	push   0x42fc20
  42fc15:	e8 61 a9 1d 00       	call   0x60a57b
  42fc1a:	59                   	pop    ecx
  42fc1b:	c3                   	ret
  42fc1c:	90                   	nop
  42fc1d:	90                   	nop
  42fc1e:	90                   	nop
  42fc1f:	90                   	nop
  42fc20:	8a 0d e8 55 6b 00    	mov    cl,BYTE PTR ds:0x6b55e8
  42fc26:	b0 80                	mov    al,0x80
  42fc28:	84 c8                	test   al,cl
  42fc2a:	75 12                	jne    0x42fc3e
  42fc2c:	0a c8                	or     cl,al
  42fc2e:	88 0d e8 55 6b 00    	mov    BYTE PTR ds:0x6b55e8,cl
  42fc34:	b9 d0 54 6b 00       	mov    ecx,0x6b54d0
  42fc39:	e9 82 a0 ff ff       	jmp    0x429cc0
  42fc3e:	c3                   	ret
  42fc3f:	90                   	nop
  42fc40:	e8 0b 00 00 00       	call   0x42fc50
  42fc45:	e9 d6 00 00 00       	jmp    0x42fd20
  42fc4a:	90                   	nop
  42fc4b:	90                   	nop
  42fc4c:	90                   	nop
  42fc4d:	90                   	nop
  42fc4e:	90                   	nop
  42fc4f:	90                   	nop
  42fc50:	83 ec 08             	sub    esp,0x8
  42fc53:	53                   	push   ebx
  42fc54:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42fc58:	55                   	push   ebp
  42fc59:	56                   	push   esi
  42fc5a:	57                   	push   edi
  42fc5b:	33 f6                	xor    esi,esi
  42fc5d:	83 ec 10             	sub    esp,0x10
  42fc60:	bf 20 02 69 00       	mov    edi,0x690220
  42fc65:	8b ec                	mov    ebp,esp
  42fc67:	83 c9 ff             	or     ecx,0xffffffff
  42fc6a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42fc6e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42fc71:	33 c0                	xor    eax,eax
  42fc73:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42fc76:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42fc79:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42fc7c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42fc7e:	f7 d1                	not    ecx
  42fc80:	49                   	dec    ecx
  42fc81:	8b d9                	mov    ebx,ecx
  42fc83:	83 fb fd             	cmp    ebx,0xfffffffd
  42fc86:	76 05                	jbe    0x42fc8d
  42fc88:	e8 6e e9 1c 00       	call   0x5fe5fb
  42fc8d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42fc90:	3b ce                	cmp    ecx,esi
  42fc92:	74 1e                	je     0x42fcb2
  42fc94:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42fc97:	84 c0                	test   al,al
  42fc99:	74 17                	je     0x42fcb2
  42fc9b:	3c ff                	cmp    al,0xff
  42fc9d:	74 13                	je     0x42fcb2
  42fc9f:	3b de                	cmp    ebx,esi
  42fca1:	75 33                	jne    0x42fcd6
  42fca3:	fe c8                	dec    al
  42fca5:	56                   	push   esi
  42fca6:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42fca9:	8b cd                	mov    ecx,ebp
  42fcab:	e8 f0 43 fd ff       	call   0x4040a0
  42fcb0:	eb 4e                	jmp    0x42fd00
  42fcb2:	3b de                	cmp    ebx,esi
  42fcb4:	75 0b                	jne    0x42fcc1
  42fcb6:	6a 01                	push   0x1
  42fcb8:	8b cd                	mov    ecx,ebp
  42fcba:	e8 e1 43 fd ff       	call   0x4040a0
  42fcbf:	eb 3f                	jmp    0x42fd00
  42fcc1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42fcc4:	83 f8 1f             	cmp    eax,0x1f
  42fcc7:	77 04                	ja     0x42fccd
  42fcc9:	3b c3                	cmp    eax,ebx
  42fccb:	73 11                	jae    0x42fcde
  42fccd:	6a 01                	push   0x1
  42fccf:	8b cd                	mov    ecx,ebp
  42fcd1:	e8 ca 43 fd ff       	call   0x4040a0
  42fcd6:	53                   	push   ebx
  42fcd7:	8b cd                	mov    ecx,ebp
  42fcd9:	e8 82 1d fd ff       	call   0x401a60
  42fcde:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42fce1:	8b cb                	mov    ecx,ebx
  42fce3:	8b d1                	mov    edx,ecx
  42fce5:	be 20 02 69 00       	mov    esi,0x690220
  42fcea:	c1 e9 02             	shr    ecx,0x2
  42fced:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42fcef:	8b ca                	mov    ecx,edx
  42fcf1:	83 e1 03             	and    ecx,0x3
  42fcf4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42fcf6:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42fcf9:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42fcfc:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42fd00:	68 f0 8d 6b 00       	push   0x6b8df0
  42fd05:	b9 a8 54 6b 00       	mov    ecx,0x6b54a8
  42fd0a:	e8 51 cb fd ff       	call   0x40c860
  42fd0f:	5f                   	pop    edi
  42fd10:	5e                   	pop    esi
  42fd11:	5d                   	pop    ebp
  42fd12:	5b                   	pop    ebx
  42fd13:	83 c4 08             	add    esp,0x8
  42fd16:	c3                   	ret
  42fd17:	90                   	nop
  42fd18:	90                   	nop
  42fd19:	90                   	nop
  42fd1a:	90                   	nop
  42fd1b:	90                   	nop
  42fd1c:	90                   	nop
  42fd1d:	90                   	nop
  42fd1e:	90                   	nop
  42fd1f:	90                   	nop
  42fd20:	68 30 fd 42 00       	push   0x42fd30
  42fd25:	e8 51 a8 1d 00       	call   0x60a57b
  42fd2a:	59                   	pop    ecx
  42fd2b:	c3                   	ret
  42fd2c:	90                   	nop
  42fd2d:	90                   	nop
  42fd2e:	90                   	nop
  42fd2f:	90                   	nop
  42fd30:	8a 0d a0 54 6b 00    	mov    cl,BYTE PTR ds:0x6b54a0
  42fd36:	b0 01                	mov    al,0x1
  42fd38:	84 c8                	test   al,cl
  42fd3a:	75 12                	jne    0x42fd4e
  42fd3c:	0a c8                	or     cl,al
  42fd3e:	88 0d a0 54 6b 00    	mov    BYTE PTR ds:0x6b54a0,cl
  42fd44:	b9 a8 54 6b 00       	mov    ecx,0x6b54a8
  42fd49:	e9 72 9f ff ff       	jmp    0x429cc0
  42fd4e:	c3                   	ret
  42fd4f:	90                   	nop
  42fd50:	e8 0b 00 00 00       	call   0x42fd60
  42fd55:	e9 d6 00 00 00       	jmp    0x42fe30
  42fd5a:	90                   	nop
  42fd5b:	90                   	nop
  42fd5c:	90                   	nop
  42fd5d:	90                   	nop
  42fd5e:	90                   	nop
  42fd5f:	90                   	nop
  42fd60:	83 ec 08             	sub    esp,0x8
  42fd63:	53                   	push   ebx
  42fd64:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42fd68:	55                   	push   ebp
  42fd69:	56                   	push   esi
  42fd6a:	57                   	push   edi
  42fd6b:	33 f6                	xor    esi,esi
  42fd6d:	83 ec 10             	sub    esp,0x10
  42fd70:	bf 20 02 69 00       	mov    edi,0x690220
  42fd75:	8b ec                	mov    ebp,esp
  42fd77:	83 c9 ff             	or     ecx,0xffffffff
  42fd7a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42fd7e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42fd81:	33 c0                	xor    eax,eax
  42fd83:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42fd86:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42fd89:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42fd8c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42fd8e:	f7 d1                	not    ecx
  42fd90:	49                   	dec    ecx
  42fd91:	8b d9                	mov    ebx,ecx
  42fd93:	83 fb fd             	cmp    ebx,0xfffffffd
  42fd96:	76 05                	jbe    0x42fd9d
  42fd98:	e8 5e e8 1c 00       	call   0x5fe5fb
  42fd9d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42fda0:	3b ce                	cmp    ecx,esi
  42fda2:	74 1e                	je     0x42fdc2
  42fda4:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42fda7:	84 c0                	test   al,al
  42fda9:	74 17                	je     0x42fdc2
  42fdab:	3c ff                	cmp    al,0xff
  42fdad:	74 13                	je     0x42fdc2
  42fdaf:	3b de                	cmp    ebx,esi
  42fdb1:	75 33                	jne    0x42fde6
  42fdb3:	fe c8                	dec    al
  42fdb5:	56                   	push   esi
  42fdb6:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42fdb9:	8b cd                	mov    ecx,ebp
  42fdbb:	e8 e0 42 fd ff       	call   0x4040a0
  42fdc0:	eb 4e                	jmp    0x42fe10
  42fdc2:	3b de                	cmp    ebx,esi
  42fdc4:	75 0b                	jne    0x42fdd1
  42fdc6:	6a 01                	push   0x1
  42fdc8:	8b cd                	mov    ecx,ebp
  42fdca:	e8 d1 42 fd ff       	call   0x4040a0
  42fdcf:	eb 3f                	jmp    0x42fe10
  42fdd1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42fdd4:	83 f8 1f             	cmp    eax,0x1f
  42fdd7:	77 04                	ja     0x42fddd
  42fdd9:	3b c3                	cmp    eax,ebx
  42fddb:	73 11                	jae    0x42fdee
  42fddd:	6a 01                	push   0x1
  42fddf:	8b cd                	mov    ecx,ebp
  42fde1:	e8 ba 42 fd ff       	call   0x4040a0
  42fde6:	53                   	push   ebx
  42fde7:	8b cd                	mov    ecx,ebp
  42fde9:	e8 72 1c fd ff       	call   0x401a60
  42fdee:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42fdf1:	8b cb                	mov    ecx,ebx
  42fdf3:	8b d1                	mov    edx,ecx
  42fdf5:	be 20 02 69 00       	mov    esi,0x690220
  42fdfa:	c1 e9 02             	shr    ecx,0x2
  42fdfd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42fdff:	8b ca                	mov    ecx,edx
  42fe01:	83 e1 03             	and    ecx,0x3
  42fe04:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42fe06:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42fe09:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42fe0c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42fe10:	68 f0 8d 6b 00       	push   0x6b8df0
  42fe15:	b9 78 54 6b 00       	mov    ecx,0x6b5478
  42fe1a:	e8 41 ca fd ff       	call   0x40c860
  42fe1f:	5f                   	pop    edi
