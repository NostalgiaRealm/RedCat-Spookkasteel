
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004c6dfe <.text+0xc5dfe>:
  4c6dfe:	6a 04                	push   0x4
  4c6e00:	e8 0b 31 f7 ff       	call   0x439f10
  4c6e05:	84 c0                	test   al,al
  4c6e07:	74 50                	je     0x4c6e59
  4c6e09:	bf 20 89 69 00       	mov    edi,0x698920
  4c6e0e:	83 c9 ff             	or     ecx,0xffffffff
  4c6e11:	33 c0                	xor    eax,eax
  4c6e13:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4c6e15:	f7 d1                	not    ecx
  4c6e17:	49                   	dec    ecx
  4c6e18:	51                   	push   ecx
  4c6e19:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  4c6e1d:	68 20 89 69 00       	push   0x698920
  4c6e22:	e8 c9 d2 f3 ff       	call   0x4040f0
  4c6e27:	6a 10                	push   0x10
  4c6e29:	8b cd                	mov    ecx,ebp
  4c6e2b:	e8 c0 30 f7 ff       	call   0x439ef0
  4c6e30:	6a 04                	push   0x4
  4c6e32:	8b cd                	mov    ecx,ebp
  4c6e34:	e8 b7 30 f7 ff       	call   0x439ef0
  4c6e39:	6a 08                	push   0x8
  4c6e3b:	8b cd                	mov    ecx,ebp
  4c6e3d:	e8 ae 30 f7 ff       	call   0x439ef0
  4c6e42:	6a 02                	push   0x2
  4c6e44:	8b cd                	mov    ecx,ebp
  4c6e46:	e8 a5 30 f7 ff       	call   0x439ef0
  4c6e4b:	6a 01                	push   0x1
  4c6e4d:	8b cd                	mov    ecx,ebp
  4c6e4f:	e8 9c 30 f7 ff       	call   0x439ef0
  4c6e54:	e9 b3 01 00 00       	jmp    0x4c700c
  4c6e59:	6a 08                	push   0x8
  4c6e5b:	8b cd                	mov    ecx,ebp
  4c6e5d:	e8 ae 30 f7 ff       	call   0x439f10
  4c6e62:	84 c0                	test   al,al
  4c6e64:	74 53                	je     0x4c6eb9
  4c6e66:	bf 04 89 69 00       	mov    edi,0x698904
  4c6e6b:	83 c9 ff             	or     ecx,0xffffffff
  4c6e6e:	33 c0                	xor    eax,eax
  4c6e70:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
  4c6e74:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4c6e76:	f7 d1                	not    ecx
  4c6e78:	49                   	dec    ecx
  4c6e79:	6a 01                	push   0x1
  4c6e7b:	8b d9                	mov    ebx,ecx
  4c6e7d:	8b ce                	mov    ecx,esi
  4c6e7f:	53                   	push   ebx
  4c6e80:	e8 bb aa f3 ff       	call   0x401940
  4c6e85:	84 c0                	test   al,al
  4c6e87:	74 22                	je     0x4c6eab
  4c6e89:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  4c6e8c:	8b cb                	mov    ecx,ebx
  4c6e8e:	8b c1                	mov    eax,ecx
  4c6e90:	be 04 89 69 00       	mov    esi,0x698904
  4c6e95:	c1 e9 02             	shr    ecx,0x2
  4c6e98:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4c6e9a:	8b c8                	mov    ecx,eax
  4c6e9c:	53                   	push   ebx
  4c6e9d:	83 e1 03             	and    ecx,0x3
  4c6ea0:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4c6ea2:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  4c6ea6:	e8 e5 d2 f3 ff       	call   0x404190
  4c6eab:	6a 04                	push   0x4
  4c6ead:	8b cd                	mov    ecx,ebp
  4c6eaf:	e8 2c 30 f7 ff       	call   0x439ee0
  4c6eb4:	e9 53 01 00 00       	jmp    0x4c700c
  4c6eb9:	6a 02                	push   0x2
  4c6ebb:	8b cd                	mov    ecx,ebp
  4c6ebd:	e8 4e 30 f7 ff       	call   0x439f10
  4c6ec2:	84 c0                	test   al,al
  4c6ec4:	74 53                	je     0x4c6f19
  4c6ec6:	bf e8 88 69 00       	mov    edi,0x6988e8
  4c6ecb:	83 c9 ff             	or     ecx,0xffffffff
  4c6ece:	33 c0                	xor    eax,eax
  4c6ed0:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
  4c6ed4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4c6ed6:	f7 d1                	not    ecx
  4c6ed8:	49                   	dec    ecx
  4c6ed9:	6a 01                	push   0x1
  4c6edb:	8b d9                	mov    ebx,ecx
  4c6edd:	8b ce                	mov    ecx,esi
  4c6edf:	53                   	push   ebx
  4c6ee0:	e8 5b aa f3 ff       	call   0x401940
  4c6ee5:	84 c0                	test   al,al
  4c6ee7:	74 22                	je     0x4c6f0b
  4c6ee9:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  4c6eec:	8b cb                	mov    ecx,ebx
  4c6eee:	8b d1                	mov    edx,ecx
  4c6ef0:	be e8 88 69 00       	mov    esi,0x6988e8
  4c6ef5:	c1 e9 02             	shr    ecx,0x2
  4c6ef8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4c6efa:	8b ca                	mov    ecx,edx
  4c6efc:	53                   	push   ebx
  4c6efd:	83 e1 03             	and    ecx,0x3
  4c6f00:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4c6f02:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  4c6f06:	e8 85 d2 f3 ff       	call   0x404190
  4c6f0b:	6a 08                	push   0x8
  4c6f0d:	8b cd                	mov    ecx,ebp
  4c6f0f:	e8 cc 2f f7 ff       	call   0x439ee0
  4c6f14:	e9 f3 00 00 00       	jmp    0x4c700c
  4c6f19:	6a 01                	push   0x1
  4c6f1b:	8b cd                	mov    ecx,ebp
  4c6f1d:	e8 ee 2f f7 ff       	call   0x439f10
  4c6f22:	84 c0                	test   al,al
  4c6f24:	74 53                	je     0x4c6f79
  4c6f26:	bf cc 88 69 00       	mov    edi,0x6988cc
  4c6f2b:	83 c9 ff             	or     ecx,0xffffffff
  4c6f2e:	33 c0                	xor    eax,eax
  4c6f30:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
  4c6f34:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4c6f36:	f7 d1                	not    ecx
  4c6f38:	49                   	dec    ecx
  4c6f39:	6a 01                	push   0x1
  4c6f3b:	8b d9                	mov    ebx,ecx
  4c6f3d:	8b ce                	mov    ecx,esi
  4c6f3f:	53                   	push   ebx
  4c6f40:	e8 fb a9 f3 ff       	call   0x401940
  4c6f45:	84 c0                	test   al,al
  4c6f47:	74 22                	je     0x4c6f6b
  4c6f49:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  4c6f4c:	8b cb                	mov    ecx,ebx
  4c6f4e:	8b c1                	mov    eax,ecx
  4c6f50:	be cc 88 69 00       	mov    esi,0x6988cc
  4c6f55:	c1 e9 02             	shr    ecx,0x2
  4c6f58:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4c6f5a:	8b c8                	mov    ecx,eax
  4c6f5c:	53                   	push   ebx
  4c6f5d:	83 e1 03             	and    ecx,0x3
  4c6f60:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4c6f62:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  4c6f66:	e8 25 d2 f3 ff       	call   0x404190
  4c6f6b:	6a 02                	push   0x2
  4c6f6d:	8b cd                	mov    ecx,ebp
  4c6f6f:	e8 6c 2f f7 ff       	call   0x439ee0
  4c6f74:	e9 93 00 00 00       	jmp    0x4c700c
  4c6f79:	bf b8 88 69 00       	mov    edi,0x6988b8
  4c6f7e:	83 c9 ff             	or     ecx,0xffffffff
  4c6f81:	33 c0                	xor    eax,eax
  4c6f83:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
  4c6f87:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4c6f89:	f7 d1                	not    ecx
  4c6f8b:	49                   	dec    ecx
  4c6f8c:	6a 01                	push   0x1
  4c6f8e:	8b d9                	mov    ebx,ecx
  4c6f90:	8b ce                	mov    ecx,esi
  4c6f92:	53                   	push   ebx
  4c6f93:	e8 a8 a9 f3 ff       	call   0x401940
  4c6f98:	84 c0                	test   al,al
  4c6f9a:	74 22                	je     0x4c6fbe
  4c6f9c:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
  4c6f9f:	8b cb                	mov    ecx,ebx
  4c6fa1:	8b d1                	mov    edx,ecx
  4c6fa3:	be b8 88 69 00       	mov    esi,0x6988b8
  4c6fa8:	c1 e9 02             	shr    ecx,0x2
  4c6fab:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4c6fad:	8b ca                	mov    ecx,edx
  4c6faf:	53                   	push   ebx
  4c6fb0:	83 e1 03             	and    ecx,0x3
  4c6fb3:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4c6fb5:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  4c6fb9:	e8 d2 d1 f3 ff       	call   0x404190
  4c6fbe:	6a 01                	push   0x1
  4c6fc0:	8b cd                	mov    ecx,ebp
  4c6fc2:	e8 19 2f f7 ff       	call   0x439ee0
  4c6fc7:	eb 43                	jmp    0x4c700c
  4c6fc9:	bf 4c 88 69 00       	mov    edi,0x69884c
  4c6fce:	83 c9 ff             	or     ecx,0xffffffff
  4c6fd1:	33 c0                	xor    eax,eax
  4c6fd3:	8b 5c 24 4c          	mov    ebx,DWORD PTR [esp+0x4c]
  4c6fd7:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4c6fd9:	f7 d1                	not    ecx
  4c6fdb:	49                   	dec    ecx
  4c6fdc:	6a 01                	push   0x1
  4c6fde:	8b e9                	mov    ebp,ecx
  4c6fe0:	8b cb                	mov    ecx,ebx
  4c6fe2:	55                   	push   ebp
  4c6fe3:	e8 58 a9 f3 ff       	call   0x401940
  4c6fe8:	84 c0                	test   al,al
  4c6fea:	74 20                	je     0x4c700c
  4c6fec:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  4c6fef:	8b cd                	mov    ecx,ebp
  4c6ff1:	8b c1                	mov    eax,ecx
  4c6ff3:	be 4c 88 69 00       	mov    esi,0x69884c
  4c6ff8:	c1 e9 02             	shr    ecx,0x2
  4c6ffb:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4c6ffd:	8b c8                	mov    ecx,eax
  4c6fff:	55                   	push   ebp
  4c7000:	83 e1 03             	and    ecx,0x3
  4c7003:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4c7005:	8b cb                	mov    ecx,ebx
  4c7007:	e8 84 d1 f3 ff       	call   0x404190
