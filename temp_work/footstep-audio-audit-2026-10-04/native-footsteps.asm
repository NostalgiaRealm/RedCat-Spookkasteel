
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004d9d40 <.text+0xd8d40>:
  4d9d40:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4d9d46:	6a ff                	push   0xffffffff
  4d9d48:	68 df 1d 63 00       	push   0x631ddf
  4d9d4d:	50                   	push   eax
  4d9d4e:	a0 8c 92 6b 00       	mov    al,ds:0x6b928c
  4d9d53:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4d9d5a:	81 ec a8 00 00 00    	sub    esp,0xa8
  4d9d60:	a8 01                	test   al,0x1
  4d9d62:	53                   	push   ebx
  4d9d63:	55                   	push   ebp
  4d9d64:	56                   	push   esi
  4d9d65:	57                   	push   edi
  4d9d66:	8b d9                	mov    ebx,ecx
  4d9d68:	0f 85 83 01 00 00    	jne    0x4d9ef1
  4d9d6e:	8a c8                	mov    cl,al
  4d9d70:	8a 44 24 17          	mov    al,BYTE PTR [esp+0x17]
  4d9d74:	80 c9 01             	or     cl,0x1
  4d9d77:	6a 00                	push   0x0
  4d9d79:	88 0d 8c 92 6b 00    	mov    BYTE PTR ds:0x6b928c,cl
  4d9d7f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4d9d83:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  4d9d87:	e8 14 a3 f2 ff       	call   0x4040a0
  4d9d8c:	bf 00 9d 69 00       	mov    edi,0x699d00
  4d9d91:	83 c9 ff             	or     ecx,0xffffffff
  4d9d94:	33 c0                	xor    eax,eax
  4d9d96:	6a 01                	push   0x1
  4d9d98:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4d9d9a:	f7 d1                	not    ecx
  4d9d9c:	49                   	dec    ecx
  4d9d9d:	8b e9                	mov    ebp,ecx
  4d9d9f:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4d9da3:	55                   	push   ebp
  4d9da4:	e8 97 7b f2 ff       	call   0x401940
  4d9da9:	84 c0                	test   al,al
  4d9dab:	74 23                	je     0x4d9dd0
  4d9dad:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  4d9db1:	8b cd                	mov    ecx,ebp
  4d9db3:	8b d1                	mov    edx,ecx
  4d9db5:	be 00 9d 69 00       	mov    esi,0x699d00
  4d9dba:	c1 e9 02             	shr    ecx,0x2
  4d9dbd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4d9dbf:	8b ca                	mov    ecx,edx
  4d9dc1:	55                   	push   ebp
  4d9dc2:	83 e1 03             	and    ecx,0x3
  4d9dc5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4d9dc7:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4d9dcb:	e8 c0 a3 f2 ff       	call   0x404190
  4d9dd0:	8a 44 24 17          	mov    al,BYTE PTR [esp+0x17]
  4d9dd4:	6a 00                	push   0x0
  4d9dd6:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4d9dda:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x0
  4d9de1:	00 00 00 00 
  4d9de5:	88 44 24 30          	mov    BYTE PTR [esp+0x30],al
  4d9de9:	e8 b2 a2 f2 ff       	call   0x4040a0
  4d9dee:	bf 08 9d 69 00       	mov    edi,0x699d08
  4d9df3:	83 c9 ff             	or     ecx,0xffffffff
  4d9df6:	33 c0                	xor    eax,eax
  4d9df8:	6a 01                	push   0x1
  4d9dfa:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4d9dfc:	f7 d1                	not    ecx
  4d9dfe:	49                   	dec    ecx
  4d9dff:	8b e9                	mov    ebp,ecx
  4d9e01:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4d9e05:	55                   	push   ebp
  4d9e06:	e8 35 7b f2 ff       	call   0x401940
  4d9e0b:	84 c0                	test   al,al
  4d9e0d:	74 23                	je     0x4d9e32
  4d9e0f:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  4d9e13:	8b cd                	mov    ecx,ebp
  4d9e15:	8b d1                	mov    edx,ecx
  4d9e17:	be 08 9d 69 00       	mov    esi,0x699d08
  4d9e1c:	c1 e9 02             	shr    ecx,0x2
  4d9e1f:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4d9e21:	8b ca                	mov    ecx,edx
  4d9e23:	55                   	push   ebp
  4d9e24:	83 e1 03             	and    ecx,0x3
  4d9e27:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4d9e29:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4d9e2d:	e8 5e a3 f2 ff       	call   0x404190
  4d9e32:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  4d9e36:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x1
  4d9e3d:	01 
  4d9e3e:	50                   	push   eax
  4d9e3f:	e8 4c d1 f5 ff       	call   0x436f90
  4d9e44:	83 c4 04             	add    esp,0x4
  4d9e47:	6a 00                	push   0x0
  4d9e49:	50                   	push   eax
  4d9e4a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4d9e4e:	68 00 00 00 3f       	push   0x3f000000
  4d9e53:	8d 54 24 38          	lea    edx,[esp+0x38]
  4d9e57:	51                   	push   ecx
  4d9e58:	52                   	push   edx
  4d9e59:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  4d9e5d:	c6 84 24 d4 00 00 00 	mov    BYTE PTR [esp+0xd4],0x2
  4d9e64:	02 
  4d9e65:	e8 46 2a 0d 00       	call   0x5ac8b0
  4d9e6a:	8b f0                	mov    esi,eax
  4d9e6c:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4d9e6f:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4d9e75:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x3
  4d9e7c:	03 
  4d9e7d:	df e0                	fnstsw ax
  4d9e7f:	f6 c4 40             	test   ah,0x40
  4d9e82:	74 16                	je     0x4d9e9a
  4d9e84:	8d 44 24 17          	lea    eax,[esp+0x17]
  4d9e88:	8d 4e 14             	lea    ecx,[esi+0x14]
  4d9e8b:	50                   	push   eax
  4d9e8c:	51                   	push   ecx
  4d9e8d:	e8 fe 34 0d 00       	call   0x5ad390
  4d9e92:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4d9e95:	83 c4 08             	add    esp,0x8
  4d9e98:	eb 03                	jmp    0x4d9e9d
  4d9e9a:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4d9e9d:	d9 1d 88 92 6b 00    	fstp   DWORD PTR ds:0x6b9288
  4d9ea3:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4d9ea7:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x2
  4d9eae:	02 
  4d9eaf:	e8 ec 2d 0d 00       	call   0x5acca0
  4d9eb4:	6a 01                	push   0x1
  4d9eb6:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4d9eba:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x1
  4d9ec1:	01 
  4d9ec2:	e8 d9 a1 f2 ff       	call   0x4040a0
  4d9ec7:	6a 01                	push   0x1
  4d9ec9:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4d9ecd:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x0
  4d9ed4:	00 
  4d9ed5:	e8 c6 a1 f2 ff       	call   0x4040a0
  4d9eda:	83 cd ff             	or     ebp,0xffffffff
  4d9edd:	6a 01                	push   0x1
  4d9edf:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4d9ee3:	89 ac 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],ebp
  4d9eea:	e8 b1 a1 f2 ff       	call   0x4040a0
  4d9eef:	eb 03                	jmp    0x4d9ef4
  4d9ef1:	83 cd ff             	or     ebp,0xffffffff
  4d9ef4:	a0 8c 92 6b 00       	mov    al,ds:0x6b928c
  4d9ef9:	a8 02                	test   al,0x2
  4d9efb:	75 1f                	jne    0x4d9f1c
  4d9efd:	d9 05 c0 92 6b 00    	fld    DWORD PTR ds:0x6b92c0
  4d9f03:	d8 05 cc 92 6b 00    	fadd   DWORD PTR ds:0x6b92cc
  4d9f09:	0c 02                	or     al,0x2
  4d9f0b:	a2 8c 92 6b 00       	mov    ds:0x6b928c,al
  4d9f10:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  4d9f16:	d9 1d 84 92 6b 00    	fstp   DWORD PTR ds:0x6b9284
  4d9f1c:	8b 83 00 01 00 00    	mov    eax,DWORD PTR [ebx+0x100]
  4d9f22:	85 c0                	test   eax,eax
  4d9f24:	75 11                	jne    0x4d9f37
  4d9f26:	8d 8b 80 01 00 00    	lea    ecx,[ebx+0x180]
  4d9f2c:	e8 9f 90 0d 00       	call   0x5b2fd0
  4d9f31:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  4d9f35:	eb 08                	jmp    0x4d9f3f
  4d9f37:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  4d9f3e:	00 
  4d9f3f:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  4d9f43:	d8 35 84 92 6b 00    	fdiv   DWORD PTR ds:0x6b9284
  4d9f49:	d9 fa                	fsqrt
  4d9f4b:	d8 0d 88 92 6b 00    	fmul   DWORD PTR ds:0x6b9288
  4d9f51:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  4d9f55:	d9 83 34 01 00 00    	fld    DWORD PTR [ebx+0x134]
  4d9f5b:	dd 5c 24 2c          	fstp   QWORD PTR [esp+0x2c]
  4d9f5f:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  4d9f63:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  4d9f67:	52                   	push   edx
  4d9f68:	50                   	push   eax
  4d9f69:	e8 21 17 13 00       	call   0x60b68f
  4d9f6e:	dc 6c 24 34          	fsubr  QWORD PTR [esp+0x34]
  4d9f72:	8b 84 24 d0 00 00 00 	mov    eax,DWORD PTR [esp+0xd0]
  4d9f79:	83 c4 08             	add    esp,0x8
  4d9f7c:	3b c5                	cmp    eax,ebp
  4d9f7e:	d9 9b 38 01 00 00    	fstp   DWORD PTR [ebx+0x138]
  4d9f84:	75 6b                	jne    0x4d9ff1
  4d9f86:	8a 4c 24 17          	mov    cl,BYTE PTR [esp+0x17]
  4d9f8a:	6a 00                	push   0x0
  4d9f8c:	88 4c 24 20          	mov    BYTE PTR [esp+0x20],cl
  4d9f90:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4d9f94:	e8 07 a1 f2 ff       	call   0x4040a0
  4d9f99:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4d9f9e:	8b cd                	mov    ecx,ebp
  4d9fa0:	33 c0                	xor    eax,eax
  4d9fa2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4d9fa4:	f7 d1                	not    ecx
  4d9fa6:	49                   	dec    ecx
  4d9fa7:	51                   	push   ecx
  4d9fa8:	68 70 3f 6b 00       	push   0x6b3f70
  4d9fad:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4d9fb1:	e8 3a a1 f2 ff       	call   0x4040f0
  4d9fb6:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4d9fba:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x4
  4d9fc1:	04 00 00 00 
  4d9fc5:	52                   	push   edx
  4d9fc6:	68 8a 00 00 00       	push   0x8a
  4d9fcb:	68 2c e2 68 00       	push   0x68e22c
  4d9fd0:	68 14 e2 68 00       	push   0x68e214
  4d9fd5:	e8 16 68 0c 00       	call   0x5a07f0
  4d9fda:	ff d0                	call   eax
  4d9fdc:	83 c4 10             	add    esp,0x10
  4d9fdf:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4d9fe3:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  4d9fea:	6a 01                	push   0x1
  4d9fec:	e8 af a0 f2 ff       	call   0x4040a0
  4d9ff1:	db 84 24 c8 00 00 00 	fild   DWORD PTR [esp+0xc8]
  4d9ff8:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
  4d9ffc:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4da002:	d8 83 38 01 00 00    	fadd   DWORD PTR [ebx+0x138]
  4da008:	d9 93 34 01 00 00    	fst    DWORD PTR [ebx+0x134]
  4da00e:	d9 83 38 01 00 00    	fld    DWORD PTR [ebx+0x138]
  4da014:	d8 0d 2c a4 64 00    	fmul   DWORD PTR ds:0x64a42c
  4da01a:	e8 01 0b 13 00       	call   0x60ab20
  4da01f:	d8 0d 2c a4 64 00    	fmul   DWORD PTR ds:0x64a42c
  4da025:	8b f0                	mov    esi,eax
  4da027:	e8 f4 0a 13 00       	call   0x60ab20
  4da02c:	3b c6                	cmp    eax,esi
  4da02e:	0f 8e cc 03 00 00    	jle    0x4da400
  4da034:	8a 8b 30 01 00 00    	mov    cl,BYTE PTR [ebx+0x130]
  4da03a:	84 c9                	test   cl,cl
  4da03c:	0f 94 c0             	sete   al
  4da03f:	88 83 30 01 00 00    	mov    BYTE PTR [ebx+0x130],al
  4da045:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  4da04b:	85 f6                	test   esi,esi
  4da04d:	75 07                	jne    0x4da056
  4da04f:	e8 2c 12 08 00       	call   0x55b280
  4da054:	8b f0                	mov    esi,eax
  4da056:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  4da05c:	85 c0                	test   eax,eax
  4da05e:	75 6b                	jne    0x4da0cb
  4da060:	8a 4c 24 17          	mov    cl,BYTE PTR [esp+0x17]
  4da064:	6a 00                	push   0x0
  4da066:	88 4c 24 20          	mov    BYTE PTR [esp+0x20],cl
  4da06a:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4da06e:	e8 2d a0 f2 ff       	call   0x4040a0
  4da073:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4da078:	8b cd                	mov    ecx,ebp
  4da07a:	33 c0                	xor    eax,eax
  4da07c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4da07e:	f7 d1                	not    ecx
  4da080:	49                   	dec    ecx
  4da081:	51                   	push   ecx
  4da082:	68 70 3f 6b 00       	push   0x6b3f70
  4da087:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4da08b:	e8 60 a0 f2 ff       	call   0x4040f0
  4da090:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4da094:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x5
  4da09b:	05 00 00 00 
  4da09f:	52                   	push   edx
  4da0a0:	68 8f 01 00 00       	push   0x18f
  4da0a5:	68 58 eb 68 00       	push   0x68eb58
  4da0aa:	68 ec f8 68 00       	push   0x68f8ec
  4da0af:	e8 3c 67 0c 00       	call   0x5a07f0
  4da0b4:	ff d0                	call   eax
  4da0b6:	83 c4 10             	add    esp,0x10
  4da0b9:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4da0bd:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  4da0c4:	6a 01                	push   0x1
  4da0c6:	e8 d5 9f f2 ff       	call   0x4040a0
  4da0cb:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  4da0cf:	d8 1d 84 92 6b 00    	fcomp  DWORD PTR ds:0x6b9284
  4da0d5:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  4da0db:	df e0                	fnstsw ax
  4da0dd:	8a 83 30 01 00 00    	mov    al,BYTE PTR [ebx+0x130]
  4da0e3:	f6 c4 41             	test   ah,0x41
  4da0e6:	0f 85 98 01 00 00    	jne    0x4da284
  4da0ec:	8b 9b 08 01 00 00    	mov    ebx,DWORD PTR [ebx+0x108]
  4da0f2:	84 c0                	test   al,al
  4da0f4:	0f 84 c5 00 00 00    	je     0x4da1bf
  4da0fa:	f7 c3 00 00 02 00    	test   ebx,0x20000
  4da100:	74 40                	je     0x4da142
  4da102:	6a 00                	push   0x0
  4da104:	6a 00                	push   0x0
  4da106:	68 00 00 80 3f       	push   0x3f800000
  4da10b:	6a 00                	push   0x0
  4da10d:	8d 44 24 20          	lea    eax,[esp+0x20]
  4da111:	68 f0 55 6b 00       	push   0x6b55f0
  4da116:	50                   	push   eax
  4da117:	e8 c4 5e 07 00       	call   0x54ffe0
  4da11c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da120:	85 c0                	test   eax,eax
  4da122:	0f 84 d8 02 00 00    	je     0x4da400
  4da128:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da12b:	8b c8                	mov    ecx,eax
  4da12d:	83 c0 14             	add    eax,0x14
  4da130:	4e                   	dec    esi
  4da131:	8b d6                	mov    edx,esi
  4da133:	85 d2                	test   edx,edx
  4da135:	89 30                	mov    DWORD PTR [eax],esi
  4da137:	0f 85 c3 02 00 00    	jne    0x4da400
  4da13d:	e9 b7 02 00 00       	jmp    0x4da3f9
  4da142:	6a 00                	push   0x0
  4da144:	6a 00                	push   0x0
  4da146:	f7 c3 00 00 01 00    	test   ebx,0x10000
  4da14c:	68 00 00 80 3f       	push   0x3f800000
  4da151:	6a 00                	push   0x0
  4da153:	74 35                	je     0x4da18a
  4da155:	8d 54 24 20          	lea    edx,[esp+0x20]
  4da159:	68 f8 54 6b 00       	push   0x6b54f8
  4da15e:	52                   	push   edx
  4da15f:	e8 7c 5e 07 00       	call   0x54ffe0
  4da164:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da168:	85 c0                	test   eax,eax
  4da16a:	0f 84 90 02 00 00    	je     0x4da400
  4da170:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da173:	8b c8                	mov    ecx,eax
  4da175:	83 c0 14             	add    eax,0x14
  4da178:	4e                   	dec    esi
  4da179:	8b d6                	mov    edx,esi
  4da17b:	85 d2                	test   edx,edx
  4da17d:	89 30                	mov    DWORD PTR [eax],esi
  4da17f:	0f 85 7b 02 00 00    	jne    0x4da400
  4da185:	e9 6f 02 00 00       	jmp    0x4da3f9
  4da18a:	8d 44 24 20          	lea    eax,[esp+0x20]
  4da18e:	68 e0 56 6b 00       	push   0x6b56e0
  4da193:	50                   	push   eax
  4da194:	e8 47 5e 07 00       	call   0x54ffe0
  4da199:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da19d:	85 c0                	test   eax,eax
  4da19f:	0f 84 5b 02 00 00    	je     0x4da400
  4da1a5:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da1a8:	8b c8                	mov    ecx,eax
  4da1aa:	83 c0 14             	add    eax,0x14
  4da1ad:	4e                   	dec    esi
  4da1ae:	8b d6                	mov    edx,esi
  4da1b0:	85 d2                	test   edx,edx
  4da1b2:	89 30                	mov    DWORD PTR [eax],esi
  4da1b4:	0f 85 46 02 00 00    	jne    0x4da400
  4da1ba:	e9 3a 02 00 00       	jmp    0x4da3f9
  4da1bf:	f7 c3 00 00 02 00    	test   ebx,0x20000
  4da1c5:	74 40                	je     0x4da207
  4da1c7:	6a 00                	push   0x0
  4da1c9:	6a 00                	push   0x0
  4da1cb:	68 00 00 80 3f       	push   0x3f800000
  4da1d0:	6a 00                	push   0x0
  4da1d2:	8d 54 24 20          	lea    edx,[esp+0x20]
  4da1d6:	68 c0 55 6b 00       	push   0x6b55c0
  4da1db:	52                   	push   edx
  4da1dc:	e8 ff 5d 07 00       	call   0x54ffe0
  4da1e1:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da1e5:	85 c0                	test   eax,eax
  4da1e7:	0f 84 13 02 00 00    	je     0x4da400
  4da1ed:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da1f0:	8b c8                	mov    ecx,eax
  4da1f2:	83 c0 14             	add    eax,0x14
  4da1f5:	4e                   	dec    esi
  4da1f6:	8b d6                	mov    edx,esi
  4da1f8:	85 d2                	test   edx,edx
  4da1fa:	89 30                	mov    DWORD PTR [eax],esi
  4da1fc:	0f 85 fe 01 00 00    	jne    0x4da400
  4da202:	e9 f2 01 00 00       	jmp    0x4da3f9
  4da207:	6a 00                	push   0x0
  4da209:	6a 00                	push   0x0
  4da20b:	f7 c3 00 00 01 00    	test   ebx,0x10000
  4da211:	68 00 00 80 3f       	push   0x3f800000
  4da216:	6a 00                	push   0x0
  4da218:	74 35                	je     0x4da24f
  4da21a:	8d 44 24 20          	lea    eax,[esp+0x20]
  4da21e:	68 d0 54 6b 00       	push   0x6b54d0
  4da223:	50                   	push   eax
  4da224:	e8 b7 5d 07 00       	call   0x54ffe0
  4da229:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da22d:	85 c0                	test   eax,eax
  4da22f:	0f 84 cb 01 00 00    	je     0x4da400
  4da235:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da238:	8b c8                	mov    ecx,eax
  4da23a:	83 c0 14             	add    eax,0x14
  4da23d:	4e                   	dec    esi
  4da23e:	8b d6                	mov    edx,esi
  4da240:	85 d2                	test   edx,edx
  4da242:	89 30                	mov    DWORD PTR [eax],esi
  4da244:	0f 85 b6 01 00 00    	jne    0x4da400
  4da24a:	e9 aa 01 00 00       	jmp    0x4da3f9
  4da24f:	8d 54 24 20          	lea    edx,[esp+0x20]
  4da253:	68 b8 56 6b 00       	push   0x6b56b8
  4da258:	52                   	push   edx
  4da259:	e8 82 5d 07 00       	call   0x54ffe0
  4da25e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da262:	85 c0                	test   eax,eax
  4da264:	0f 84 96 01 00 00    	je     0x4da400
  4da26a:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da26d:	8b c8                	mov    ecx,eax
  4da26f:	83 c0 14             	add    eax,0x14
  4da272:	4e                   	dec    esi
  4da273:	8b d6                	mov    edx,esi
  4da275:	85 d2                	test   edx,edx
  4da277:	89 30                	mov    DWORD PTR [eax],esi
  4da279:	0f 85 81 01 00 00    	jne    0x4da400
  4da27f:	e9 75 01 00 00       	jmp    0x4da3f9
  4da284:	8b 9b 08 01 00 00    	mov    ebx,DWORD PTR [ebx+0x108]
  4da28a:	84 c0                	test   al,al
  4da28c:	0f 84 c5 00 00 00    	je     0x4da357
  4da292:	f7 c3 00 00 02 00    	test   ebx,0x20000
  4da298:	74 40                	je     0x4da2da
  4da29a:	6a 00                	push   0x0
  4da29c:	6a 00                	push   0x0
  4da29e:	68 00 00 80 3f       	push   0x3f800000
  4da2a3:	6a 00                	push   0x0
  4da2a5:	8d 44 24 20          	lea    eax,[esp+0x20]
  4da2a9:	68 98 55 6b 00       	push   0x6b5598
  4da2ae:	50                   	push   eax
  4da2af:	e8 2c 5d 07 00       	call   0x54ffe0
  4da2b4:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da2b8:	85 c0                	test   eax,eax
  4da2ba:	0f 84 40 01 00 00    	je     0x4da400
  4da2c0:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da2c3:	8b c8                	mov    ecx,eax
  4da2c5:	83 c0 14             	add    eax,0x14
  4da2c8:	4e                   	dec    esi
  4da2c9:	8b d6                	mov    edx,esi
  4da2cb:	85 d2                	test   edx,edx
  4da2cd:	89 30                	mov    DWORD PTR [eax],esi
  4da2cf:	0f 85 2b 01 00 00    	jne    0x4da400
  4da2d5:	e9 1f 01 00 00       	jmp    0x4da3f9
  4da2da:	6a 00                	push   0x0
  4da2dc:	6a 00                	push   0x0
  4da2de:	f7 c3 00 00 01 00    	test   ebx,0x10000
  4da2e4:	68 00 00 80 3f       	push   0x3f800000
  4da2e9:	6a 00                	push   0x0
  4da2eb:	74 35                	je     0x4da322
  4da2ed:	8d 54 24 20          	lea    edx,[esp+0x20]
  4da2f1:	68 a8 54 6b 00       	push   0x6b54a8
  4da2f6:	52                   	push   edx
  4da2f7:	e8 e4 5c 07 00       	call   0x54ffe0
  4da2fc:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da300:	85 c0                	test   eax,eax
  4da302:	0f 84 f8 00 00 00    	je     0x4da400
  4da308:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da30b:	8b c8                	mov    ecx,eax
  4da30d:	83 c0 14             	add    eax,0x14
  4da310:	4e                   	dec    esi
  4da311:	8b d6                	mov    edx,esi
  4da313:	85 d2                	test   edx,edx
  4da315:	89 30                	mov    DWORD PTR [eax],esi
  4da317:	0f 85 e3 00 00 00    	jne    0x4da400
  4da31d:	e9 d7 00 00 00       	jmp    0x4da3f9
  4da322:	8d 44 24 20          	lea    eax,[esp+0x20]
  4da326:	68 90 56 6b 00       	push   0x6b5690
  4da32b:	50                   	push   eax
  4da32c:	e8 af 5c 07 00       	call   0x54ffe0
  4da331:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da335:	85 c0                	test   eax,eax
  4da337:	0f 84 c3 00 00 00    	je     0x4da400
  4da33d:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da340:	8b c8                	mov    ecx,eax
  4da342:	83 c0 14             	add    eax,0x14
  4da345:	4e                   	dec    esi
  4da346:	8b d6                	mov    edx,esi
  4da348:	85 d2                	test   edx,edx
  4da34a:	89 30                	mov    DWORD PTR [eax],esi
  4da34c:	0f 85 ae 00 00 00    	jne    0x4da400
  4da352:	e9 a2 00 00 00       	jmp    0x4da3f9
  4da357:	f7 c3 00 00 02 00    	test   ebx,0x20000
  4da35d:	74 35                	je     0x4da394
  4da35f:	6a 00                	push   0x0
  4da361:	6a 00                	push   0x0
  4da363:	68 00 00 80 3f       	push   0x3f800000
  4da368:	6a 00                	push   0x0
  4da36a:	8d 54 24 20          	lea    edx,[esp+0x20]
  4da36e:	68 70 55 6b 00       	push   0x6b5570
  4da373:	52                   	push   edx
  4da374:	e8 67 5c 07 00       	call   0x54ffe0
  4da379:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da37d:	85 c0                	test   eax,eax
  4da37f:	74 7f                	je     0x4da400
  4da381:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da384:	8b c8                	mov    ecx,eax
  4da386:	83 c0 14             	add    eax,0x14
  4da389:	4e                   	dec    esi
  4da38a:	8b d6                	mov    edx,esi
  4da38c:	85 d2                	test   edx,edx
  4da38e:	89 30                	mov    DWORD PTR [eax],esi
  4da390:	75 6e                	jne    0x4da400
  4da392:	eb 65                	jmp    0x4da3f9
  4da394:	6a 00                	push   0x0
  4da396:	6a 00                	push   0x0
  4da398:	f7 c3 00 00 01 00    	test   ebx,0x10000
  4da39e:	68 00 00 80 3f       	push   0x3f800000
  4da3a3:	6a 00                	push   0x0
  4da3a5:	74 2a                	je     0x4da3d1
  4da3a7:	8d 44 24 20          	lea    eax,[esp+0x20]
  4da3ab:	68 78 54 6b 00       	push   0x6b5478
  4da3b0:	50                   	push   eax
  4da3b1:	e8 2a 5c 07 00       	call   0x54ffe0
  4da3b6:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4da3ba:	85 c0                	test   eax,eax
  4da3bc:	74 42                	je     0x4da400
  4da3be:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da3c1:	8b c8                	mov    ecx,eax
  4da3c3:	83 c0 14             	add    eax,0x14
  4da3c6:	4e                   	dec    esi
  4da3c7:	8b d6                	mov    edx,esi
  4da3c9:	85 d2                	test   edx,edx
  4da3cb:	89 30                	mov    DWORD PTR [eax],esi
  4da3cd:	75 31                	jne    0x4da400
  4da3cf:	eb 28                	jmp    0x4da3f9
  4da3d1:	8d 54 24 28          	lea    edx,[esp+0x28]
  4da3d5:	68 68 56 6b 00       	push   0x6b5668
  4da3da:	52                   	push   edx
  4da3db:	e8 00 5c 07 00       	call   0x54ffe0
  4da3e0:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4da3e4:	85 c0                	test   eax,eax
  4da3e6:	74 18                	je     0x4da400
  4da3e8:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  4da3eb:	8b c8                	mov    ecx,eax
  4da3ed:	83 c0 14             	add    eax,0x14
  4da3f0:	4e                   	dec    esi
  4da3f1:	8b d6                	mov    edx,esi
  4da3f3:	85 d2                	test   edx,edx
  4da3f5:	89 30                	mov    DWORD PTR [eax],esi
  4da3f7:	75 07                	jne    0x4da400
  4da3f9:	6a 00                	push   0x0
  4da3fb:	e8 c0 1b 0d 00       	call   0x5abfc0
  4da400:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  4da407:	5f                   	pop    edi
  4da408:	5e                   	pop    esi
  4da409:	5d                   	pop    ebp
  4da40a:	5b                   	pop    ebx
  4da40b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4da412:	81 c4 b4 00 00 00    	add    esp,0xb4
  4da418:	c2 08 00             	ret    0x8
  4da41b:	90                   	nop
  4da41c:	90                   	nop
  4da41d:	90                   	nop
  4da41e:	90                   	nop
  4da41f:	90                   	nop
  4da420:	6a ff                	push   0xffffffff
  4da422:	68 58 1e 63 00       	push   0x631e58
  4da427:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4da42d:	50                   	push   eax
  4da42e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4da435:	81 ec a8 00 00 00    	sub    esp,0xa8
  4da43b:	a0 80 92 6b 00       	mov    al,ds:0x6b9280
