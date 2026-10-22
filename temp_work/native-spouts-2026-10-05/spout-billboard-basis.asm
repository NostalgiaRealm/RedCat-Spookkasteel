  477d50:	83 ec 0c             	sub    esp,0xc
  477d53:	53                   	push   ebx
  477d54:	56                   	push   esi
  477d55:	57                   	push   edi
  477d56:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  477d5a:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  477d61:	00 
  477d62:	c7 44 24 10 00 00 80 	mov    DWORD PTR [esp+0x10],0xbf800000
  477d69:	bf 
  477d6a:	d9 47 04             	fld    DWORD PTR [edi+0x4]
  477d6d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  477d73:	df e0                	fnstsw ax
  477d75:	f6 c4 01             	test   ah,0x1
  477d78:	75 08                	jne    0x477d82
  477d7a:	c7 44 24 10 00 00 80 	mov    DWORD PTR [esp+0x10],0x3f800000
  477d81:	3f 
  477d82:	68 cd cc cc 3d       	push   0x3dcccccd
  477d87:	8b d7                	mov    edx,edi
  477d89:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  477d8d:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  477d94:	00 
  477d95:	e8 26 b1 13 00       	call   0x5b2ec0
  477d9a:	85 c0                	test   eax,eax
  477d9c:	74 30                	je     0x477dce
  477d9e:	d9 47 08             	fld    DWORD PTR [edi+0x8]
  477da1:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  477da7:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  477dae:	00 
  477daf:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  477db6:	00 
  477db7:	c7 44 24 14 00 00 80 	mov    DWORD PTR [esp+0x14],0xbf800000
  477dbe:	bf 
  477dbf:	df e0                	fnstsw ax
  477dc1:	f6 c4 01             	test   ah,0x1
  477dc4:	75 08                	jne    0x477dce
  477dc6:	c7 44 24 14 00 00 80 	mov    DWORD PTR [esp+0x14],0x3f800000
  477dcd:	3f 
  477dce:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  477dd2:	8d 54 24 0c          	lea    edx,[esp+0xc]
  477dd6:	56                   	push   esi
  477dd7:	8b cf                	mov    ecx,edi
  477dd9:	e8 82 b0 13 00       	call   0x5b2e60
  477dde:	8b ce                	mov    ecx,esi
  477de0:	e8 3b b1 13 00       	call   0x5b2f20
  477de5:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
  477de9:	8b d6                	mov    edx,esi
  477deb:	53                   	push   ebx
  477dec:	8b cf                	mov    ecx,edi
  477dee:	dd d8                	fstp   st(0)
  477df0:	e8 6b b0 13 00       	call   0x5b2e60
  477df5:	8b cb                	mov    ecx,ebx
  477df7:	e8 24 b1 13 00       	call   0x5b2f20
  477dfc:	5f                   	pop    edi
  477dfd:	5e                   	pop    esi
  477dfe:	dd d8                	fstp   st(0)
  477e00:	5b                   	pop    ebx
  477e01:	83 c4 0c             	add    esp,0xc
  477e04:	c2 0c 00             	ret    0xc
  477e07:	90                   	nop
  477e08:	90                   	nop
  477e09:	90                   	nop
  477e0a:	90                   	nop
  477e0b:	90                   	nop
  477e0c:	90                   	nop
  477e0d:	90                   	nop
  477e0e:	90                   	nop
  477e0f:	90                   	nop
  477e10:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  477e16:	b0 01                	mov    al,0x1
  477e18:	84 c8                	test   al,cl
  477e1a:	75 08                	jne    0x477e24
  477e1c:	0a c8                	or     cl,al
  477e1e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  477e24:	e9 07 00 00 00       	jmp    0x477e30
  477e29:	90                   	nop
  477e2a:	90                   	nop
  477e2b:	90                   	nop
  477e2c:	90                   	nop
  477e2d:	90                   	nop
  477e2e:	90                   	nop
  477e2f:	90                   	nop
  477e30:	68 a0 1b 40 00       	push   0x401ba0
  477e35:	e8 41 27 19 00       	call   0x60a57b
  477e3a:	59                   	pop    ecx
  477e3b:	c3                   	ret
  477e3c:	90                   	nop
  477e3d:	90                   	nop
  477e3e:	90                   	nop
  477e3f:	90                   	nop
  477e40:	e8 0b 00 00 00       	call   0x477e50
  477e45:	e9 e6 00 00 00       	jmp    0x477f30
  477e4a:	90                   	nop
  477e4b:	90                   	nop
  477e4c:	90                   	nop
  477e4d:	90                   	nop
  477e4e:	90                   	nop
  477e4f:	90                   	nop
  477e50:	6a ff                	push   0xffffffff
  477e52:	68 88 89 62 00       	push   0x628988
  477e57:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  477e5d:	50                   	push   eax
  477e5e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  477e65:	83 ec 14             	sub    esp,0x14
  477e68:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  477e6c:	53                   	push   ebx
  477e6d:	55                   	push   ebp
  477e6e:	57                   	push   edi
  477e6f:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  477e73:	bf 20 2f 69 00       	mov    edi,0x692f20
  477e78:	83 c9 ff             	or     ecx,0xffffffff
  477e7b:	33 c0                	xor    eax,eax
  477e7d:	33 db                	xor    ebx,ebx
  477e7f:	6a 01                	push   0x1
  477e81:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  477e83:	f7 d1                	not    ecx
  477e85:	49                   	dec    ecx
  477e86:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  477e8a:	8b e9                	mov    ebp,ecx
  477e8c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  477e90:	55                   	push   ebp
  477e91:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  477e95:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  477e99:	e8 a2 9a f8 ff       	call   0x401940
  477e9e:	84 c0                	test   al,al
  477ea0:	74 26                	je     0x477ec8
  477ea2:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  477ea6:	8b cd                	mov    ecx,ebp
  477ea8:	8b d1                	mov    edx,ecx
  477eaa:	56                   	push   esi
  477eab:	be 20 2f 69 00       	mov    esi,0x692f20
  477eb0:	c1 e9 02             	shr    ecx,0x2
  477eb3:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  477eb5:	8b ca                	mov    ecx,edx
  477eb7:	83 e1 03             	and    ecx,0x3
  477eba:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  477ebc:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
