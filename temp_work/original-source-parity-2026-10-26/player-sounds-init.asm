
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0042ec00 <.text+0x2dc00>:
  42ec00:	68 f0 8d 6b 00       	push   0x6b8df0
  42ec05:	b9 38 57 6b 00       	mov    ecx,0x6b5738
  42ec0a:	e8 51 dc fd ff       	call   0x40c860
  42ec0f:	5f                   	pop    edi
  42ec10:	5e                   	pop    esi
  42ec11:	5d                   	pop    ebp
  42ec12:	5b                   	pop    ebx
  42ec13:	83 c4 08             	add    esp,0x8
  42ec16:	c3                   	ret
  42ec17:	90                   	nop
  42ec18:	90                   	nop
  42ec19:	90                   	nop
  42ec1a:	90                   	nop
  42ec1b:	90                   	nop
  42ec1c:	90                   	nop
  42ec1d:	90                   	nop
  42ec1e:	90                   	nop
  42ec1f:	90                   	nop
  42ec20:	68 30 ec 42 00       	push   0x42ec30
  42ec25:	e8 51 b9 1d 00       	call   0x60a57b
  42ec2a:	59                   	pop    ecx
  42ec2b:	c3                   	ret
  42ec2c:	90                   	nop
  42ec2d:	90                   	nop
  42ec2e:	90                   	nop
  42ec2f:	90                   	nop
  42ec30:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42ec36:	b0 01                	mov    al,0x1
  42ec38:	84 c8                	test   al,cl
  42ec3a:	75 12                	jne    0x42ec4e
  42ec3c:	0a c8                	or     cl,al
  42ec3e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42ec44:	b9 38 57 6b 00       	mov    ecx,0x6b5738
  42ec49:	e9 72 b0 ff ff       	jmp    0x429cc0
  42ec4e:	c3                   	ret
  42ec4f:	90                   	nop
  42ec50:	e8 0b 00 00 00       	call   0x42ec60
  42ec55:	e9 d6 00 00 00       	jmp    0x42ed30
  42ec5a:	90                   	nop
  42ec5b:	90                   	nop
  42ec5c:	90                   	nop
  42ec5d:	90                   	nop
  42ec5e:	90                   	nop
  42ec5f:	90                   	nop
  42ec60:	83 ec 08             	sub    esp,0x8
  42ec63:	53                   	push   ebx
  42ec64:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  42ec68:	55                   	push   ebp
  42ec69:	56                   	push   esi
  42ec6a:	57                   	push   edi
  42ec6b:	33 f6                	xor    esi,esi
  42ec6d:	83 ec 10             	sub    esp,0x10
  42ec70:	bf 14 02 69 00       	mov    edi,0x690214
  42ec75:	8b ec                	mov    ebp,esp
  42ec77:	83 c9 ff             	or     ecx,0xffffffff
  42ec7a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  42ec7e:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  42ec81:	33 c0                	xor    eax,eax
  42ec83:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  42ec86:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  42ec89:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  42ec8c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42ec8e:	f7 d1                	not    ecx
  42ec90:	49                   	dec    ecx
  42ec91:	8b d9                	mov    ebx,ecx
  42ec93:	83 fb fd             	cmp    ebx,0xfffffffd
  42ec96:	76 05                	jbe    0x42ec9d
  42ec98:	e8 5e f9 1c 00       	call   0x5fe5fb
  42ec9d:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  42eca0:	3b ce                	cmp    ecx,esi
  42eca2:	74 1e                	je     0x42ecc2
  42eca4:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  42eca7:	84 c0                	test   al,al
  42eca9:	74 17                	je     0x42ecc2
  42ecab:	3c ff                	cmp    al,0xff
  42ecad:	74 13                	je     0x42ecc2
  42ecaf:	3b de                	cmp    ebx,esi
  42ecb1:	75 33                	jne    0x42ece6
  42ecb3:	fe c8                	dec    al
  42ecb5:	56                   	push   esi
  42ecb6:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  42ecb9:	8b cd                	mov    ecx,ebp
  42ecbb:	e8 e0 53 fd ff       	call   0x4040a0
  42ecc0:	eb 4e                	jmp    0x42ed10
  42ecc2:	3b de                	cmp    ebx,esi
  42ecc4:	75 0b                	jne    0x42ecd1
  42ecc6:	6a 01                	push   0x1
  42ecc8:	8b cd                	mov    ecx,ebp
  42ecca:	e8 d1 53 fd ff       	call   0x4040a0
  42eccf:	eb 3f                	jmp    0x42ed10
  42ecd1:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  42ecd4:	83 f8 1f             	cmp    eax,0x1f
  42ecd7:	77 04                	ja     0x42ecdd
  42ecd9:	3b c3                	cmp    eax,ebx
  42ecdb:	73 11                	jae    0x42ecee
  42ecdd:	6a 01                	push   0x1
  42ecdf:	8b cd                	mov    ecx,ebp
  42ece1:	e8 ba 53 fd ff       	call   0x4040a0
  42ece6:	53                   	push   ebx
  42ece7:	8b cd                	mov    ecx,ebp
  42ece9:	e8 72 2d fd ff       	call   0x401a60
  42ecee:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42ecf1:	8b cb                	mov    ecx,ebx
  42ecf3:	8b d1                	mov    edx,ecx
  42ecf5:	be 14 02 69 00       	mov    esi,0x690214
  42ecfa:	c1 e9 02             	shr    ecx,0x2
  42ecfd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ecff:	8b ca                	mov    ecx,edx
  42ed01:	83 e1 03             	and    ecx,0x3
  42ed04:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ed06:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42ed09:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42ed0c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42ed10:	68 f0 8d 6b 00       	push   0x6b8df0
  42ed15:	b9 08 57 6b 00       	mov    ecx,0x6b5708
  42ed1a:	e8 41 db fd ff       	call   0x40c860
  42ed1f:	5f                   	pop    edi
  42ed20:	5e                   	pop    esi
  42ed21:	5d                   	pop    ebp
  42ed22:	5b                   	pop    ebx
  42ed23:	83 c4 08             	add    esp,0x8
  42ed26:	c3                   	ret
  42ed27:	90                   	nop
  42ed28:	90                   	nop
  42ed29:	90                   	nop
  42ed2a:	90                   	nop
  42ed2b:	90                   	nop
  42ed2c:	90                   	nop
  42ed2d:	90                   	nop
  42ed2e:	90                   	nop
  42ed2f:	90                   	nop
  42ed30:	68 40 ed 42 00       	push   0x42ed40
  42ed35:	e8 41 b8 1d 00       	call   0x60a57b
  42ed3a:	59                   	pop    ecx
  42ed3b:	c3                   	ret
  42ed3c:	90                   	nop
  42ed3d:	90                   	nop
  42ed3e:	90                   	nop
  42ed3f:	90                   	nop
  42ed40:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42ed46:	b0 02                	mov    al,0x2
  42ed48:	84 c8                	test   al,cl
  42ed4a:	75 12                	jne    0x42ed5e
  42ed4c:	0a c8                	or     cl,al
  42ed4e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42ed54:	b9 08 57 6b 00       	mov    ecx,0x6b5708
  42ed59:	e9 62 af ff ff       	jmp    0x429cc0
  42ed5e:	c3                   	ret
  42ed5f:	90                   	nop
  42ed60:	e8 0b 00 00 00       	call   0x42ed70
  42ed65:	e9 d6 00 00 00       	jmp    0x42ee40
  42ed6a:	90                   	nop
  42ed6b:	90                   	nop
  42ed6c:	90                   	nop
  42ed6d:	90                   	nop
  42ed6e:	90                   	nop
  42ed6f:	90                   	nop
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
  42eeff:	8b                   	.byte 0x8b
