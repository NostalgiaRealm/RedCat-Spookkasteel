
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00418d50 <.text+0x17d50>:
  418d50:	6a ff                	push   0xffffffff
  418d52:	68 b0 14 62 00       	push   0x6214b0
  418d57:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  418d5d:	50                   	push   eax
  418d5e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  418d65:	83 ec 28             	sub    esp,0x28
  418d68:	8a 44 24 3c          	mov    al,BYTE PTR [esp+0x3c]
  418d6c:	53                   	push   ebx
  418d6d:	55                   	push   ebp
  418d6e:	56                   	push   esi
  418d6f:	57                   	push   edi
  418d70:	8b 3d 4c b5 64 00    	mov    edi,DWORD PTR ds:0x64b54c
  418d76:	8b f1                	mov    esi,ecx
  418d78:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  418d7c:	33 db                	xor    ebx,ebx
  418d7e:	83 c9 ff             	or     ecx,0xffffffff
  418d81:	33 c0                	xor    eax,eax
  418d83:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  418d87:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  418d8b:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  418d8f:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  418d93:	6a 01                	push   0x1
  418d95:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  418d97:	f7 d1                	not    ecx
  418d99:	49                   	dec    ecx
  418d9a:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  418d9e:	8b e9                	mov    ebp,ecx
  418da0:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  418da4:	55                   	push   ebp
  418da5:	e8 96 8b fe ff       	call   0x401940
  418daa:	84 c0                	test   al,al
  418dac:	74 26                	je     0x418dd4
  418dae:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  418db2:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  418db6:	8b cd                	mov    ecx,ebp
  418db8:	55                   	push   ebp
  418db9:	8b d1                	mov    edx,ecx
  418dbb:	c1 e9 02             	shr    ecx,0x2
  418dbe:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  418dc0:	8b ca                	mov    ecx,edx
  418dc2:	83 e1 03             	and    ecx,0x3
  418dc5:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  418dc7:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  418dcb:	e8 c0 b3 fe ff       	call   0x404190
  418dd0:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  418dd4:	8a 44 24 4c          	mov    al,BYTE PTR [esp+0x4c]
  418dd8:	8b 15 48 b5 64 00    	mov    edx,DWORD PTR ds:0x64b548
  418dde:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  418de2:	8b fa                	mov    edi,edx
  418de4:	83 c9 ff             	or     ecx,0xffffffff
  418de7:	33 c0                	xor    eax,eax
  418de9:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  418ded:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  418df1:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  418df5:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  418df9:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  418dfb:	f7 d1                	not    ecx
  418dfd:	49                   	dec    ecx
  418dfe:	51                   	push   ecx
  418dff:	52                   	push   edx
  418e00:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  418e04:	e8 e7 b2 fe ff       	call   0x4040f0
  418e09:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  418e0d:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  418e11:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  418e15:	c6 44 24 40 01       	mov    BYTE PTR [esp+0x40],0x1
  418e1a:	51                   	push   ecx
  418e1b:	52                   	push   edx
  418e1c:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
  418e20:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  418e24:	50                   	push   eax
  418e25:	51                   	push   ecx
  418e26:	52                   	push   edx
  418e27:	8b ce                	mov    ecx,esi
  418e29:	e8 52 4e 01 00       	call   0x42dc80
  418e2e:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  418e32:	3b c3                	cmp    eax,ebx
  418e34:	74 1d                	je     0x418e53
  418e36:	8d 48 ff             	lea    ecx,[eax-0x1]
  418e39:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  418e3c:	3a c3                	cmp    al,bl
  418e3e:	74 0a                	je     0x418e4a
  418e40:	3c ff                	cmp    al,0xff
  418e42:	74 06                	je     0x418e4a
  418e44:	fe c8                	dec    al
  418e46:	88 01                	mov    BYTE PTR [ecx],al
  418e48:	eb 09                	jmp    0x418e53
  418e4a:	51                   	push   ecx
  418e4b:	e8 a0 57 1e 00       	call   0x5fe5f0
  418e50:	83 c4 04             	add    esp,0x4
  418e53:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  418e57:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  418e5b:	3b c3                	cmp    eax,ebx
  418e5d:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  418e61:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  418e65:	74 1d                	je     0x418e84
  418e67:	8d 48 ff             	lea    ecx,[eax-0x1]
  418e6a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  418e6d:	3a c3                	cmp    al,bl
  418e6f:	74 0a                	je     0x418e7b
  418e71:	3c ff                	cmp    al,0xff
  418e73:	74 06                	je     0x418e7b
  418e75:	fe c8                	dec    al
  418e77:	88 01                	mov    BYTE PTR [ecx],al
  418e79:	eb 09                	jmp    0x418e84
  418e7b:	51                   	push   ecx
  418e7c:	e8 6f 57 1e 00       	call   0x5fe5f0
  418e81:	83 c4 04             	add    esp,0x4
  418e84:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  418e88:	c7 06 5c b5 64 00    	mov    DWORD PTR [esi],0x64b55c
  418e8e:	8b c6                	mov    eax,esi
  418e90:	5f                   	pop    edi
  418e91:	5e                   	pop    esi
  418e92:	5d                   	pop    ebp
  418e93:	5b                   	pop    ebx
  418e94:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  418e9b:	83 c4 34             	add    esp,0x34
  418e9e:	c2 0c 00             	ret    0xc
  418ea1:	90                   	nop
  418ea2:	90                   	nop
  418ea3:	90                   	nop
  418ea4:	90                   	nop
  418ea5:	90                   	nop
  418ea6:	90                   	nop
  418ea7:	90                   	nop
  418ea8:	90                   	nop
  418ea9:	90                   	nop
  418eaa:	90                   	nop
  418eab:	90                   	nop
  418eac:	90                   	nop
  418ead:	90                   	nop
  418eae:	90                   	nop
  418eaf:	90                   	nop
  418eb0:	56                   	push   esi
  418eb1:	8b f1                	mov    esi,ecx
  418eb3:	e8 18 00 00 00       	call   0x418ed0
  418eb8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  418ebd:	74 09                	je     0x418ec8
  418ebf:	56                   	push   esi
  418ec0:	e8 2b 57 1e 00       	call   0x5fe5f0
  418ec5:	83 c4 04             	add    esp,0x4
  418ec8:	8b c6                	mov    eax,esi
  418eca:	5e                   	pop    esi
  418ecb:	c2 04 00             	ret    0x4
  418ece:	90                   	nop
  418ecf:	90                   	nop
  418ed0:	6a ff                	push   0xffffffff
  418ed2:	68 de 14 62 00       	push   0x6214de
  418ed7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  418edd:	50                   	push   eax
  418ede:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  418ee5:	51                   	push   ecx
  418ee6:	53                   	push   ebx
  418ee7:	56                   	push   esi
  418ee8:	57                   	push   edi
  418ee9:	8b f9                	mov    edi,ecx
  418eeb:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
  418eef:	8b 87 c4 01 00 00    	mov    eax,DWORD PTR [edi+0x1c4]
  418ef5:	8d b7 ac 01 00 00    	lea    esi,[edi+0x1ac]
  418efb:	33 db                	xor    ebx,ebx
  418efd:	3b c3                	cmp    eax,ebx
  418eff:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  418f03:	74 1d                	je     0x418f22
  418f05:	8d 48 ff             	lea    ecx,[eax-0x1]
  418f08:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  418f0b:	3a c3                	cmp    al,bl
  418f0d:	74 0a                	je     0x418f19
  418f0f:	3c ff                	cmp    al,0xff
  418f11:	74 06                	je     0x418f19
  418f13:	fe c8                	dec    al
  418f15:	88 01                	mov    BYTE PTR [ecx],al
  418f17:	eb 09                	jmp    0x418f22
  418f19:	51                   	push   ecx
  418f1a:	e8 d1 56 1e 00       	call   0x5fe5f0
  418f1f:	83 c4 04             	add    esp,0x4
  418f22:	8b ce                	mov    ecx,esi
  418f24:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
  418f27:	89 5e 1c             	mov    DWORD PTR [esi+0x1c],ebx
  418f2a:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
  418f2d:	e8 9e 25 19 00       	call   0x5ab4d0
  418f32:	8b 8f a4 01 00 00    	mov    ecx,DWORD PTR [edi+0x1a4]
  418f38:	c7 44 24 18 02 00 00 	mov    DWORD PTR [esp+0x18],0x2
  418f3f:	00 
  418f40:	3b cb                	cmp    ecx,ebx
  418f42:	74 15                	je     0x418f59
  418f44:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  418f47:	48                   	dec    eax
  418f48:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  418f4b:	75 06                	jne    0x418f53
  418f4d:	53                   	push   ebx
  418f4e:	e8 6d 30 19 00       	call   0x5abfc0
  418f53:	89 9f a4 01 00 00    	mov    DWORD PTR [edi+0x1a4],ebx
  418f59:	8b 87 88 01 00 00    	mov    eax,DWORD PTR [edi+0x188]
  418f5f:	3b c3                	cmp    eax,ebx
  418f61:	74 1d                	je     0x418f80
  418f63:	8d 48 ff             	lea    ecx,[eax-0x1]
  418f66:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  418f69:	3a c3                	cmp    al,bl
  418f6b:	74 0a                	je     0x418f77
  418f6d:	3c ff                	cmp    al,0xff
  418f6f:	74 06                	je     0x418f77
  418f71:	fe c8                	dec    al
  418f73:	88 01                	mov    BYTE PTR [ecx],al
  418f75:	eb 09                	jmp    0x418f80
  418f77:	51                   	push   ecx
  418f78:	e8 73 56 1e 00       	call   0x5fe5f0
  418f7d:	83 c4 04             	add    esp,0x4
  418f80:	8b cf                	mov    ecx,edi
  418f82:	89 9f 88 01 00 00    	mov    DWORD PTR [edi+0x188],ebx
  418f88:	89 9f 8c 01 00 00    	mov    DWORD PTR [edi+0x18c],ebx
  418f8e:	89 9f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ebx
  418f94:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  418f9b:	ff 
  418f9c:	e8 2f 99 00 00       	call   0x4228d0
  418fa1:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  418fa5:	5f                   	pop    edi
  418fa6:	5e                   	pop    esi
  418fa7:	5b                   	pop    ebx
  418fa8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  418faf:	83 c4 10             	add    esp,0x10
  418fb2:	c3                   	ret
  418fb3:	90                   	nop
  418fb4:	90                   	nop
  418fb5:	90                   	nop
  418fb6:	90                   	nop
  418fb7:	90                   	nop
  418fb8:	90                   	nop
  418fb9:	90                   	nop
  418fba:	90                   	nop
  418fbb:	90                   	nop
  418fbc:	90                   	nop
  418fbd:	90                   	nop
  418fbe:	90                   	nop
  418fbf:	90                   	nop
  418fc0:	83 ec 28             	sub    esp,0x28
  418fc3:	53                   	push   ebx
  418fc4:	8b d9                	mov    ebx,ecx
  418fc6:	56                   	push   esi
  418fc7:	57                   	push   edi
  418fc8:	8b 03                	mov    eax,DWORD PTR [ebx]
  418fca:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
  418fd0:	8b 13                	mov    edx,DWORD PTR [ebx]
  418fd2:	8d b0 1c 01 00 00    	lea    esi,[eax+0x11c]
  418fd8:	b9 06 00 00 00       	mov    ecx,0x6
  418fdd:	8d 7c 24 1c          	lea    edi,[esp+0x1c]
  418fe1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  418fe3:	8b cb                	mov    ecx,ebx
  418fe5:	ff 92 9c 00 00 00    	call   DWORD PTR [edx+0x9c]
  418feb:	d9 80 50 01 00 00    	fld    DWORD PTR [eax+0x150]
  418ff1:	d8 0d 50 b5 64 00    	fmul   DWORD PTR ds:0x64b550
  418ff7:	8b 90 58 01 00 00    	mov    edx,DWORD PTR [eax+0x158]
  418ffd:	8b 88 54 01 00 00    	mov    ecx,DWORD PTR [eax+0x154]
  419003:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  419007:	8b 13                	mov    edx,DWORD PTR [ebx]
  419009:	d9 c0                	fld    st(0)
  41900b:	d9 e0                	fchs
  41900d:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  419011:	d9 05 50 b5 64 00    	fld    DWORD PTR ds:0x64b550
  419017:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
  41901b:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  41901f:	8b cb                	mov    ecx,ebx
  419021:	d9 54 24 0c          	fst    DWORD PTR [esp+0xc]
  419025:	d9 e0                	fchs
  419027:	d9 5c 24 24          	fstp   DWORD PTR [esp+0x24]
  41902b:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  41902f:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
  419033:	d9 05 54 b5 64 00    	fld    DWORD PTR ds:0x64b554
  419039:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  41903d:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  419041:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  419045:	ff 92 9c 00 00 00    	call   DWORD PTR [edx+0x9c]
  41904b:	8b f8                	mov    edi,eax
  41904d:	b9 06 00 00 00       	mov    ecx,0x6
  419052:	81 c7 1c 01 00 00    	add    edi,0x11c
  419058:	8d 74 24 1c          	lea    esi,[esp+0x1c]
  41905c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  41905e:	5f                   	pop    edi
  41905f:	5e                   	pop    esi
  419060:	5b                   	pop    ebx
  419061:	83 c4 28             	add    esp,0x28
  419064:	c3                   	ret
  419065:	90                   	nop
  419066:	90                   	nop
  419067:	90                   	nop
  419068:	90                   	nop
  419069:	90                   	nop
  41906a:	90                   	nop
  41906b:	90                   	nop
  41906c:	90                   	nop
  41906d:	90                   	nop
  41906e:	90                   	nop
  41906f:	90                   	nop
  419070:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  419074:	83 f8 05             	cmp    eax,0x5
  419077:	77 0c                	ja     0x419085
  419079:	ff 24 85 90 90 41 00 	jmp    DWORD PTR [eax*4+0x419090]
  419080:	b0 01                	mov    al,0x1
  419082:	c2 04 00             	ret    0x4
  419085:	50                   	push   eax
  419086:	e8 c5 4e 01 00       	call   0x42df50
  41908b:	c2 04 00             	ret    0x4
  41908e:	8b ff                	mov    edi,edi
  419090:	80 90 41 00 80 90 41 	adc    BYTE PTR [eax-0x6f7fffbf],0x41
  419097:	00 80 90 41 00 85    	add    BYTE PTR [eax-0x7affbe70],al
  41909d:	90                   	nop
  41909e:	41                   	inc    ecx
  41909f:	00 80 90 41 00 80    	add    BYTE PTR [eax-0x7fffbe70],al
  4190a5:	90                   	nop
  4190a6:	41                   	inc    ecx
  4190a7:	00 90 90 90 90 90    	add    BYTE PTR [eax-0x6f6f6f70],dl
  4190ad:	90                   	nop
  4190ae:	90                   	nop
  4190af:	90                   	nop
  4190b0:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  4190b4:	56                   	push   esi
  4190b5:	83 f8 04             	cmp    eax,0x4
  4190b8:	8b f1                	mov    esi,ecx
  4190ba:	0f 87 8f 00 00 00    	ja     0x41914f
  4190c0:	ff 24 85 54 91 41 00 	jmp    DWORD PTR [eax*4+0x419154]
  4190c7:	e8 d4 13 1f 00       	call   0x60a4a0
  4190cc:	25 01 00 00 80       	and    eax,0x80000001
  4190d1:	79 05                	jns    0x4190d8
  4190d3:	48                   	dec    eax
  4190d4:	83 c8 fe             	or     eax,0xfffffffe
  4190d7:	40                   	inc    eax
  4190d8:	b8 58 4e 6b 00       	mov    eax,0x6b4e58
  4190dd:	74 05                	je     0x4190e4
  4190df:	b8 28 4e 6b 00       	mov    eax,0x6b4e28
  4190e4:	68 00 00 80 3f       	push   0x3f800000
  4190e9:	6a 00                	push   0x0
  4190eb:	50                   	push   eax
  4190ec:	8b ce                	mov    ecx,esi
  4190ee:	e8 ed aa 00 00       	call   0x423be0
  4190f3:	5e                   	pop    esi
  4190f4:	c2 04 00             	ret    0x4
  4190f7:	68 00 00 80 3f       	push   0x3f800000
  4190fc:	6a 00                	push   0x0
  4190fe:	68 00 4e 6b 00       	push   0x6b4e00
  419103:	8b ce                	mov    ecx,esi
  419105:	e8 d6 aa 00 00       	call   0x423be0
  41910a:	5e                   	pop    esi
  41910b:	c2 04 00             	ret    0x4
  41910e:	68 00 00 80 3f       	push   0x3f800000
  419113:	6a 00                	push   0x0
  419115:	68 d8 4d 6b 00       	push   0x6b4dd8
  41911a:	8b ce                	mov    ecx,esi
  41911c:	e8 bf aa 00 00       	call   0x423be0
  419121:	5e                   	pop    esi
  419122:	c2 04 00             	ret    0x4
  419125:	68 00 00 80 3f       	push   0x3f800000
  41912a:	6a 00                	push   0x0
  41912c:	68 b0 4d 6b 00       	push   0x6b4db0
  419131:	8b ce                	mov    ecx,esi
  419133:	e8 a8 aa 00 00       	call   0x423be0
  419138:	5e                   	pop    esi
  419139:	c2 04 00             	ret    0x4
  41913c:	68 00 00 80 3f       	push   0x3f800000
  419141:	6a 00                	push   0x0
  419143:	68 88 4d 6b 00       	push   0x6b4d88
  419148:	8b ce                	mov    ecx,esi
  41914a:	e8 91 aa 00 00       	call   0x423be0
  41914f:	5e                   	pop    esi
  419150:	c2 04 00             	ret    0x4
  419153:	90                   	nop
  419154:	c7                   	(bad)
  419155:	90                   	nop
  419156:	41                   	inc    ecx
  419157:	00 f7                	add    bh,dh
  419159:	90                   	nop
  41915a:	41                   	inc    ecx
  41915b:	00 0e                	add    BYTE PTR [esi],cl
  41915d:	91                   	xchg   ecx,eax
  41915e:	41                   	inc    ecx
  41915f:	00 25 91 41 00 3c    	add    BYTE PTR ds:0x3c004191,ah
  419165:	91                   	xchg   ecx,eax
  419166:	41                   	inc    ecx
  419167:	00 90 90 90 90 90    	add    BYTE PTR [eax-0x6f6f6f70],dl
  41916d:	90                   	nop
  41916e:	90                   	nop
  41916f:	90                   	nop
  419170:	b8 0d 00 00 00       	mov    eax,0xd
  419175:	c3                   	ret
  419176:	90                   	nop
  419177:	90                   	nop
  419178:	90                   	nop
  419179:	90                   	nop
  41917a:	90                   	nop
  41917b:	90                   	nop
  41917c:	90                   	nop
  41917d:	90                   	nop
  41917e:	90                   	nop
  41917f:	90                   	nop
  419180:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  419186:	b0 01                	mov    al,0x1
  419188:	84 c8                	test   al,cl
  41918a:	75 08                	jne    0x419194
  41918c:	0a c8                	or     cl,al
  41918e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  419194:	e9 07 00 00 00       	jmp    0x4191a0
  419199:	90                   	nop
  41919a:	90                   	nop
  41919b:	90                   	nop
  41919c:	90                   	nop
  41919d:	90                   	nop
  41919e:	90                   	nop
  41919f:	90                   	nop
  4191a0:	68 a0 1b 40 00       	push   0x401ba0
  4191a5:	e8 d1 13 1f 00       	call   0x60a57b
  4191aa:	59                   	pop    ecx
  4191ab:	c3                   	ret
  4191ac:	90                   	nop
  4191ad:	90                   	nop
  4191ae:	90                   	nop
  4191af:	90                   	nop
  4191b0:	e8 0b 00 00 00       	call   0x4191c0
  4191b5:	e9 06 01 00 00       	jmp    0x4192c0
  4191ba:	90                   	nop
  4191bb:	90                   	nop
  4191bc:	90                   	nop
  4191bd:	90                   	nop
  4191be:	90                   	nop
  4191bf:	90                   	nop
  4191c0:	6a ff                	push   0xffffffff
  4191c2:	68 f8 14 62 00       	push   0x6214f8
  4191c7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4191cd:	50                   	push   eax
  4191ce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4191d5:	83 ec 08             	sub    esp,0x8
  4191d8:	53                   	push   ebx
  4191d9:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  4191dd:	55                   	push   ebp
  4191de:	56                   	push   esi
  4191df:	57                   	push   edi
  4191e0:	33 f6                	xor    esi,esi
  4191e2:	83 ec 10             	sub    esp,0x10
  4191e5:	bf 78 f0 68 00       	mov    edi,0x68f078
  4191ea:	8b ec                	mov    ebp,esp
  4191ec:	83 c9 ff             	or     ecx,0xffffffff
  4191ef:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  4191f3:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  4191f6:	33 c0                	xor    eax,eax
  4191f8:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  4191fb:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  4191fe:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  419201:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  419203:	f7 d1                	not    ecx
  419205:	49                   	dec    ecx
  419206:	8b d9                	mov    ebx,ecx
  419208:	83 fb fd             	cmp    ebx,0xfffffffd
  41920b:	76 05                	jbe    0x419212
  41920d:	e8 e9 53 1e 00       	call   0x5fe5fb
  419212:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  419215:	3b ce                	cmp    ecx,esi
  419217:	74 1e                	je     0x419237
  419219:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  41921c:	84 c0                	test   al,al
  41921e:	74 17                	je     0x419237
  419220:	3c ff                	cmp    al,0xff
  419222:	74 13                	je     0x419237
  419224:	3b de                	cmp    ebx,esi
  419226:	75 33                	jne    0x41925b
  419228:	fe c8                	dec    al
  41922a:	56                   	push   esi
  41922b:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  41922e:	8b cd                	mov    ecx,ebp
  419230:	e8 6b ae fe ff       	call   0x4040a0
  419235:	eb 50                	jmp    0x419287
  419237:	3b de                	cmp    ebx,esi
  419239:	75 0b                	jne    0x419246
  41923b:	6a 01                	push   0x1
  41923d:	8b cd                	mov    ecx,ebp
  41923f:	e8 5c ae fe ff       	call   0x4040a0
  419244:	eb 41                	jmp    0x419287
  419246:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  419249:	83 f8 1f             	cmp    eax,0x1f
  41924c:	77 04                	ja     0x419252
  41924e:	3b c3                	cmp    eax,ebx
  419250:	73 11                	jae    0x419263
  419252:	6a 01                	push   0x1
  419254:	8b cd                	mov    ecx,ebp
  419256:	e8 45 ae fe ff       	call   0x4040a0
  41925b:	53                   	push   ebx
  41925c:	8b cd                	mov    ecx,ebp
  41925e:	e8 fd 87 fe ff       	call   0x401a60
  419263:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  419266:	8b cb                	mov    ecx,ebx
  419268:	8b d1                	mov    edx,ecx
  41926a:	be 78 f0 68 00       	mov    esi,0x68f078
  41926f:	c1 e9 02             	shr    ecx,0x2
  419272:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  419274:	8b ca                	mov    ecx,edx
  419276:	83 e1 03             	and    ecx,0x3
  419279:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  41927b:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  41927e:	8b 6d 04             	mov    ebp,DWORD PTR [ebp+0x4]
  419281:	03 eb                	add    ebp,ebx
  419283:	c6 45 00 00          	mov    BYTE PTR [ebp+0x0],0x0
  419287:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  41928e:	ff 
  41928f:	e8 ac 92 07 00       	call   0x492540
  419294:	50                   	push   eax
  419295:	b9 d8 4e 6b 00       	mov    ecx,0x6b4ed8
  41929a:	e8 c1 35 ff ff       	call   0x40c860
  41929f:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4192a3:	5f                   	pop    edi
  4192a4:	5e                   	pop    esi
  4192a5:	5d                   	pop    ebp
  4192a6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4192ad:	5b                   	pop    ebx
  4192ae:	83 c4 14             	add    esp,0x14
  4192b1:	c3                   	ret
  4192b2:	90                   	nop
  4192b3:	90                   	nop
  4192b4:	90                   	nop
  4192b5:	90                   	nop
  4192b6:	90                   	nop
  4192b7:	90                   	nop
  4192b8:	90                   	nop
  4192b9:	90                   	nop
  4192ba:	90                   	nop
  4192bb:	90                   	nop
  4192bc:	90                   	nop
  4192bd:	90                   	nop
  4192be:	90                   	nop
  4192bf:	90                   	nop
  4192c0:	68 d0 92 41 00       	push   0x4192d0
  4192c5:	e8 b1 12 1f 00       	call   0x60a57b
  4192ca:	59                   	pop    ecx
  4192cb:	c3                   	ret
  4192cc:	90                   	nop
  4192cd:	90                   	nop
  4192ce:	90                   	nop
  4192cf:	90                   	nop
  4192d0:	8a 0d d0 4e 6b 00    	mov    cl,BYTE PTR ds:0x6b4ed0
  4192d6:	b0 01                	mov    al,0x1
  4192d8:	84 c8                	test   al,cl
  4192da:	75 12                	jne    0x4192ee
  4192dc:	0a c8                	or     cl,al
  4192de:	88 0d d0 4e 6b 00    	mov    BYTE PTR ds:0x6b4ed0,cl
  4192e4:	b9 d8 4e 6b 00       	mov    ecx,0x6b4ed8
  4192e9:	e9 d2 09 01 00       	jmp    0x429cc0
  4192ee:	c3                   	ret
  4192ef:	90                   	nop
  4192f0:	e8 0b 00 00 00       	call   0x419300
  4192f5:	e9 06 01 00 00       	jmp    0x419400
  4192fa:	90                   	nop
  4192fb:	90                   	nop
  4192fc:	90                   	nop
  4192fd:	90                   	nop
  4192fe:	90                   	nop
  4192ff:	90                   	nop
  419300:	6a ff                	push   0xffffffff
  419302:	68 18 15 62 00       	push   0x621518
  419307:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  41930d:	50                   	push   eax
  41930e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  419315:	83 ec 08             	sub    esp,0x8
  419318:	53                   	push   ebx
  419319:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  41931d:	55                   	push   ebp
  41931e:	56                   	push   esi
  41931f:	57                   	push   edi
  419320:	33 f6                	xor    esi,esi
  419322:	83 ec 10             	sub    esp,0x10
  419325:	bf 88 f0 68 00       	mov    edi,0x68f088
  41932a:	8b ec                	mov    ebp,esp
  41932c:	83 c9 ff             	or     ecx,0xffffffff
  41932f:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  419333:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  419336:	33 c0                	xor    eax,eax
  419338:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  41933b:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  41933e:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  419341:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  419343:	f7 d1                	not    ecx
  419345:	49                   	dec    ecx
  419346:	8b d9                	mov    ebx,ecx
  419348:	83 fb fd             	cmp    ebx,0xfffffffd
  41934b:	76 05                	jbe    0x419352
  41934d:	e8 a9 52 1e 00       	call   0x5fe5fb
  419352:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  419355:	3b ce                	cmp    ecx,esi
  419357:	74 1e                	je     0x419377
  419359:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  41935c:	84 c0                	test   al,al
  41935e:	74 17                	je     0x419377
  419360:	3c ff                	cmp    al,0xff
  419362:	74 13                	je     0x419377
  419364:	3b de                	cmp    ebx,esi
  419366:	75 33                	jne    0x41939b
  419368:	fe c8                	dec    al
  41936a:	56                   	push   esi
  41936b:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  41936e:	8b cd                	mov    ecx,ebp
  419370:	e8 2b ad fe ff       	call   0x4040a0
  419375:	eb 50                	jmp    0x4193c7
  419377:	3b de                	cmp    ebx,esi
  419379:	75 0b                	jne    0x419386
  41937b:	6a 01                	push   0x1
  41937d:	8b cd                	mov    ecx,ebp
  41937f:	e8 1c ad fe ff       	call   0x4040a0
  419384:	eb 41                	jmp    0x4193c7
  419386:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  419389:	83 f8 1f             	cmp    eax,0x1f
  41938c:	77 04                	ja     0x419392
  41938e:	3b c3                	cmp    eax,ebx
  419390:	73 11                	jae    0x4193a3
  419392:	6a 01                	push   0x1
  419394:	8b cd                	mov    ecx,ebp
  419396:	e8 05 ad fe ff       	call   0x4040a0
  41939b:	53                   	push   ebx
  41939c:	8b cd                	mov    ecx,ebp
  41939e:	e8 bd 86 fe ff       	call   0x401a60
  4193a3:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4193a6:	8b cb                	mov    ecx,ebx
  4193a8:	8b d1                	mov    edx,ecx
  4193aa:	be 88 f0 68 00       	mov    esi,0x68f088
  4193af:	c1 e9 02             	shr    ecx,0x2
  4193b2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4193b4:	8b ca                	mov    ecx,edx
  4193b6:	83 e1 03             	and    ecx,0x3
  4193b9:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4193bb:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4193be:	8b 6d 04             	mov    ebp,DWORD PTR [ebp+0x4]
  4193c1:	03 eb                	add    ebp,ebx
  4193c3:	c6 45 00 00          	mov    BYTE PTR [ebp+0x0],0x0
  4193c7:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  4193ce:	ff 
  4193cf:	e8 6c 91 07 00       	call   0x492540
  4193d4:	50                   	push   eax
  4193d5:	b9 a8 4e 6b 00       	mov    ecx,0x6b4ea8
  4193da:	e8 81 34 ff ff       	call   0x40c860
  4193df:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  4193e3:	5f                   	pop    edi
  4193e4:	5e                   	pop    esi
  4193e5:	5d                   	pop    ebp
  4193e6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4193ed:	5b                   	pop    ebx
  4193ee:	83 c4 14             	add    esp,0x14
  4193f1:	c3                   	ret
  4193f2:	90                   	nop
  4193f3:	90                   	nop
  4193f4:	90                   	nop
  4193f5:	90                   	nop
  4193f6:	90                   	nop
  4193f7:	90                   	nop
  4193f8:	90                   	nop
  4193f9:	90                   	nop
  4193fa:	90                   	nop
  4193fb:	90                   	nop
  4193fc:	90                   	nop
  4193fd:	90                   	nop
  4193fe:	90                   	nop
  4193ff:	90                   	nop
  419400:	68 10 94 41 00       	push   0x419410
  419405:	e8 71 11 1f 00       	call   0x60a57b
  41940a:	59                   	pop    ecx
  41940b:	c3                   	ret
  41940c:	90                   	nop
  41940d:	90                   	nop
  41940e:	90                   	nop
  41940f:	90                   	nop
  419410:	8a 0d d0 4e 6b 00    	mov    cl,BYTE PTR ds:0x6b4ed0
  419416:	b0 02                	mov    al,0x2
  419418:	84 c8                	test   al,cl
  41941a:	75 12                	jne    0x41942e
  41941c:	0a c8                	or     cl,al
  41941e:	88 0d d0 4e 6b 00    	mov    BYTE PTR ds:0x6b4ed0,cl
  419424:	b9 a8 4e 6b 00       	mov    ecx,0x6b4ea8
  419429:	e9 92 08 01 00       	jmp    0x429cc0
  41942e:	c3                   	ret
  41942f:	90                   	nop
  419430:	e8 0b 00 00 00       	call   0x419440
  419435:	e9 06 01 00 00       	jmp    0x419540
  41943a:	90                   	nop
  41943b:	90                   	nop
  41943c:	90                   	nop
  41943d:	90                   	nop
  41943e:	90                   	nop
  41943f:	90                   	nop
  419440:	6a ff                	push   0xffffffff
  419442:	68 38 15 62 00       	push   0x621538
  419447:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  41944d:	50                   	push   eax
  41944e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  419455:	83 ec 08             	sub    esp,0x8
  419458:	53                   	push   ebx
  419459:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  41945d:	55                   	push   ebp
  41945e:	56                   	push   esi
  41945f:	57                   	push   edi
  419460:	33 f6                	xor    esi,esi
  419462:	83 ec 10             	sub    esp,0x10
  419465:	bf 98 f0 68 00       	mov    edi,0x68f098
  41946a:	8b ec                	mov    ebp,esp
  41946c:	83 c9 ff             	or     ecx,0xffffffff
  41946f:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  419473:	88 45 00             	mov    BYTE PTR [ebp+0x0],al
  419476:	33 c0                	xor    eax,eax
  419478:	89 75 04             	mov    DWORD PTR [ebp+0x4],esi
  41947b:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
  41947e:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  419481:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  419483:	f7 d1                	not    ecx
  419485:	49                   	dec    ecx
  419486:	8b d9                	mov    ebx,ecx
  419488:	83 fb fd             	cmp    ebx,0xfffffffd
  41948b:	76 05                	jbe    0x419492
  41948d:	e8 69 51 1e 00       	call   0x5fe5fb
  419492:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  419495:	3b ce                	cmp    ecx,esi
  419497:	74 1e                	je     0x4194b7
  419499:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  41949c:	84 c0                	test   al,al
  41949e:	74 17                	je     0x4194b7
  4194a0:	3c ff                	cmp    al,0xff
  4194a2:	74 13                	je     0x4194b7
  4194a4:	3b de                	cmp    ebx,esi
  4194a6:	75 33                	jne    0x4194db
  4194a8:	fe c8                	dec    al
  4194aa:	56                   	push   esi
  4194ab:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  4194ae:	8b cd                	mov    ecx,ebp
  4194b0:	e8 eb ab fe ff       	call   0x4040a0
  4194b5:	eb 50                	jmp    0x419507
  4194b7:	3b de                	cmp    ebx,esi
  4194b9:	75 0b                	jne    0x4194c6
  4194bb:	6a 01                	push   0x1
  4194bd:	8b cd                	mov    ecx,ebp
  4194bf:	e8 dc ab fe ff       	call   0x4040a0
  4194c4:	eb 41                	jmp    0x419507
  4194c6:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  4194c9:	83 f8 1f             	cmp    eax,0x1f
  4194cc:	77 04                	ja     0x4194d2
  4194ce:	3b c3                	cmp    eax,ebx
  4194d0:	73 11                	jae    0x4194e3
  4194d2:	6a 01                	push   0x1
  4194d4:	8b cd                	mov    ecx,ebp
  4194d6:	e8 c5 ab fe ff       	call   0x4040a0
  4194db:	53                   	push   ebx
  4194dc:	8b cd                	mov    ecx,ebp
  4194de:	e8 7d 85 fe ff       	call   0x401a60
  4194e3:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  4194e6:	8b cb                	mov    ecx,ebx
  4194e8:	8b d1                	mov    edx,ecx
  4194ea:	be 98 f0 68 00       	mov    esi,0x68f098
  4194ef:	c1 e9 02             	shr    ecx,0x2
  4194f2:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4194f4:	8b ca                	mov    ecx,edx
  4194f6:	83 e1 03             	and    ecx,0x3
  4194f9:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4194fb:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  4194fe:	8b 6d 04             	mov    ebp,DWORD PTR [ebp+0x4]
  419501:	03 eb                	add    ebp,ebx
  419503:	c6 45 00 00          	mov    BYTE PTR [ebp+0x0],0x0
  419507:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  41950e:	ff 
  41950f:	e8 2c 90 07 00       	call   0x492540
  419514:	50                   	push   eax
  419515:	b9 80 4e 6b 00       	mov    ecx,0x6b4e80
  41951a:	e8 41 33 ff ff       	call   0x40c860
  41951f:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  419523:	5f                   	pop    edi
  419524:	5e                   	pop    esi
  419525:	5d                   	pop    ebp
  419526:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  41952d:	5b                   	pop    ebx
  41952e:	83 c4 14             	add    esp,0x14
  419531:	c3                   	ret
  419532:	90                   	nop
  419533:	90                   	nop
  419534:	90                   	nop
  419535:	90                   	nop
  419536:	90                   	nop
  419537:	90                   	nop
  419538:	90                   	nop
  419539:	90                   	nop
  41953a:	90                   	nop
  41953b:	90                   	nop
  41953c:	90                   	nop
  41953d:	90                   	nop
  41953e:	90                   	nop
  41953f:	90                   	nop
  419540:	68 50 95 41 00       	push   0x419550
  419545:	e8 31 10 1f 00       	call   0x60a57b
  41954a:	59                   	pop    ecx
  41954b:	c3                   	ret
  41954c:	90                   	nop
  41954d:	90                   	nop
  41954e:	90                   	nop
  41954f:	90                   	nop
  419550:	8a 0d d0 4e 6b 00    	mov    cl,BYTE PTR ds:0x6b4ed0
  419556:	b0 04                	mov    al,0x4
  419558:	84 c8                	test   al,cl
  41955a:	75 12                	jne    0x41956e
  41955c:	0a c8                	or     cl,al
  41955e:	88 0d d0 4e 6b 00    	mov    BYTE PTR ds:0x6b4ed0,cl
  419564:	b9 80 4e 6b 00       	mov    ecx,0x6b4e80
  419569:	e9 52 07 01 00       	jmp    0x429cc0
  41956e:	c3                   	ret
  41956f:	90                   	nop
  419570:	6a ff                	push   0xffffffff
  419572:	68 60 15 62 00       	push   0x621560
  419577:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  41957d:	50                   	push   eax
  41957e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  419585:	83 ec 24             	sub    esp,0x24
  419588:	8a 44 24 38          	mov    al,BYTE PTR [esp+0x38]
  41958c:	53                   	push   ebx
  41958d:	55                   	push   ebp
  41958e:	56                   	push   esi
  41958f:	8b 35 20 b6 64 00    	mov    esi,DWORD PTR ds:0x64b620
  419595:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  419599:	57                   	push   edi
  41959a:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  41959e:	33 db                	xor    ebx,ebx
  4195a0:	8b fe                	mov    edi,esi
  4195a2:	83 c9 ff             	or     ecx,0xffffffff
  4195a5:	33 c0                	xor    eax,eax
  4195a7:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  4195ab:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  4195af:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  4195b3:	6a 01                	push   0x1
  4195b5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4195b7:	f7 d1                	not    ecx
  4195b9:	49                   	dec    ecx
  4195ba:	8b e9                	mov    ebp,ecx
  4195bc:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4195c0:	55                   	push   ebp
  4195c1:	e8 7a 83 fe ff       	call   0x401940
  4195c6:	84 c0                	test   al,al
  4195c8:	74 1e                	je     0x4195e8
  4195ca:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  4195ce:	8b cd                	mov    ecx,ebp
  4195d0:	8b d1                	mov    edx,ecx
  4195d2:	55                   	push   ebp
  4195d3:	c1 e9 02             	shr    ecx,0x2
  4195d6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4195d8:	8b ca                	mov    ecx,edx
  4195da:	83 e1 03             	and    ecx,0x3
  4195dd:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4195df:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4195e3:	e8 a8 ab fe ff       	call   0x404190
  4195e8:	8a 44 24 48          	mov    al,BYTE PTR [esp+0x48]
  4195ec:	8b 15 1c b6 64 00    	mov    edx,DWORD PTR ds:0x64b61c
  4195f2:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  4195f6:	8b fa                	mov    edi,edx
  4195f8:	83 c9 ff             	or     ecx,0xffffffff
  4195fb:	33 c0                	xor    eax,eax
  4195fd:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  419601:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  419605:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  419609:	89 5c 24 3c          	mov    DWORD PTR [esp+0x3c],ebx
  41960d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  41960f:	f7 d1                	not    ecx
  419611:	49                   	dec    ecx
  419612:	51                   	push   ecx
  419613:	52                   	push   edx
  419614:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  419618:	e8 d3 aa fe ff       	call   0x4040f0
  41961d:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  419621:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  419625:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  419629:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  41962d:	51                   	push   ecx
  41962e:	52                   	push   edx
  41962f:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  419633:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  419637:	50                   	push   eax
  419638:	51                   	push   ecx
  419639:	52                   	push   edx
  41963a:	8b ce                	mov    ecx,esi
  41963c:	c6 44 24 50 01       	mov    BYTE PTR [esp+0x50],0x1
  419641:	e8 ca 07 01 00       	call   0x429e10
  419646:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  41964a:	3b c3                	cmp    eax,ebx
  41964c:	74 1d                	je     0x41966b
  41964e:	8d 48 ff             	lea    ecx,[eax-0x1]
  419651:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  419654:	3a c3                	cmp    al,bl
  419656:	74 0a                	je     0x419662
  419658:	3c ff                	cmp    al,0xff
  41965a:	74 06                	je     0x419662
  41965c:	fe c8                	dec    al
  41965e:	88 01                	mov    BYTE PTR [ecx],al
  419660:	eb 09                	jmp    0x41966b
  419662:	51                   	push   ecx
  419663:	e8 88 4f 1e 00       	call   0x5fe5f0
  419668:	83 c4 04             	add    esp,0x4
  41966b:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  41966f:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  419673:	3b c3                	cmp    eax,ebx
  419675:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  419679:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  41967d:	74 1d                	je     0x41969c
  41967f:	8d 48 ff             	lea    ecx,[eax-0x1]
  419682:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  419685:	3a c3                	cmp    al,bl
  419687:	74 0a                	je     0x419693
  419689:	3c ff                	cmp    al,0xff
  41968b:	74 06                	je     0x419693
  41968d:	fe c8                	dec    al
  41968f:	88 01                	mov    BYTE PTR [ecx],al
  419691:	eb 09                	jmp    0x41969c
  419693:	51                   	push   ecx
  419694:	e8 57 4f 1e 00       	call   0x5fe5f0
  419699:	83 c4 04             	add    esp,0x4
  41969c:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4196a0:	89 9e e8 01 00 00    	mov    DWORD PTR [esi+0x1e8],ebx
  4196a6:	c7 06 30 b6 64 00    	mov    DWORD PTR [esi],0x64b630
  4196ac:	8b c6                	mov    eax,esi
  4196ae:	5f                   	pop    edi
  4196af:	5e                   	pop    esi
  4196b0:	5d                   	pop    ebp
  4196b1:	5b                   	pop    ebx
  4196b2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4196b9:	83 c4 30             	add    esp,0x30
  4196bc:	c2 0c 00             	ret    0xc
  4196bf:	90                   	nop
  4196c0:	56                   	push   esi
  4196c1:	8b f1                	mov    esi,ecx
  4196c3:	e8 18 00 00 00       	call   0x4196e0
  4196c8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  4196cd:	74 09                	je     0x4196d8
  4196cf:	56                   	push   esi
  4196d0:	e8 1b 4f 1e 00       	call   0x5fe5f0
  4196d5:	83 c4 04             	add    esp,0x4
  4196d8:	8b c6                	mov    eax,esi
  4196da:	5e                   	pop    esi
  4196db:	c2 04 00             	ret    0x4
  4196de:	90                   	nop
  4196df:	90                   	nop
  4196e0:	6a ff                	push   0xffffffff
  4196e2:	68 8e 15 62 00       	push   0x62158e
  4196e7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4196ed:	50                   	push   eax
  4196ee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4196f5:	51                   	push   ecx
  4196f6:	53                   	push   ebx
  4196f7:	56                   	push   esi
  4196f8:	57                   	push   edi
  4196f9:	8b f9                	mov    edi,ecx
  4196fb:	89 7c 24 0c          	mov    DWORD PTR [esp+0xc],edi
  4196ff:	8b 87 c0 01 00 00    	mov    eax,DWORD PTR [edi+0x1c0]
  419705:	8d b7 a8 01 00 00    	lea    esi,[edi+0x1a8]
  41970b:	33 db                	xor    ebx,ebx
  41970d:	3b c3                	cmp    eax,ebx
  41970f:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  419713:	74 1d                	je     0x419732
  419715:	8d 48 ff             	lea    ecx,[eax-0x1]
  419718:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  41971b:	3a c3                	cmp    al,bl
  41971d:	74 0a                	je     0x419729
  41971f:	3c ff                	cmp    al,0xff
  419721:	74 06                	je     0x419729
  419723:	fe c8                	dec    al
  419725:	88 01                	mov    BYTE PTR [ecx],al
  419727:	eb 09                	jmp    0x419732
  419729:	51                   	push   ecx
  41972a:	e8 c1 4e 1e 00       	call   0x5fe5f0
  41972f:	83 c4 04             	add    esp,0x4
  419732:	8b ce                	mov    ecx,esi
  419734:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
  419737:	89 5e 1c             	mov    DWORD PTR [esi+0x1c],ebx
  41973a:	89 5e 20             	mov    DWORD PTR [esi+0x20],ebx
  41973d:	e8 8e 1d 19 00       	call   0x5ab4d0
  419742:	8b 8f a4 01 00 00    	mov    ecx,DWORD PTR [edi+0x1a4]
  419748:	c7 44 24 18 02 00 00 	mov    DWORD PTR [esp+0x18],0x2
  41974f:	00 
  419750:	3b cb                	cmp    ecx,ebx
  419752:	74 15                	je     0x419769
  419754:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  419757:	48                   	dec    eax
  419758:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  41975b:	75 06                	jne    0x419763
  41975d:	53                   	push   ebx
  41975e:	e8 5d 28 19 00       	call   0x5abfc0
  419763:	89 9f a4 01 00 00    	mov    DWORD PTR [edi+0x1a4],ebx
  419769:	8b 87 88 01 00 00    	mov    eax,DWORD PTR [edi+0x188]
  41976f:	3b c3                	cmp    eax,ebx
  419771:	74 1d                	je     0x419790
  419773:	8d 48 ff             	lea    ecx,[eax-0x1]
  419776:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  419779:	3a c3                	cmp    al,bl
  41977b:	74 0a                	je     0x419787
  41977d:	3c ff                	cmp    al,0xff
  41977f:	74 06                	je     0x419787
  419781:	fe c8                	dec    al
  419783:	88 01                	mov    BYTE PTR [ecx],al
  419785:	eb 09                	jmp    0x419790
  419787:	51                   	push   ecx
  419788:	e8 63 4e 1e 00       	call   0x5fe5f0
  41978d:	83 c4 04             	add    esp,0x4
  419790:	8b cf                	mov    ecx,edi
  419792:	89 9f 88 01 00 00    	mov    DWORD PTR [edi+0x188],ebx
  419798:	89 9f 8c 01 00 00    	mov    DWORD PTR [edi+0x18c],ebx
  41979e:	89 9f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ebx
  4197a4:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  4197ab:	ff 
  4197ac:	e8 1f 91 00 00       	call   0x4228d0
  4197b1:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  4197b5:	5f                   	pop    edi
  4197b6:	5e                   	pop    esi
  4197b7:	5b                   	pop    ebx
  4197b8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4197bf:	83 c4 10             	add    esp,0x10
  4197c2:	c3                   	ret
  4197c3:	90                   	nop
  4197c4:	90                   	nop
  4197c5:	90                   	nop
  4197c6:	90                   	nop
  4197c7:	90                   	nop
  4197c8:	90                   	nop
  4197c9:	90                   	nop
  4197ca:	90                   	nop
  4197cb:	90                   	nop
  4197cc:	90                   	nop
  4197cd:	90                   	nop
  4197ce:	90                   	nop
  4197cf:	90                   	nop
  4197d0:	6a ff                	push   0xffffffff
  4197d2:	68 ab 15 62 00       	push   0x6215ab
  4197d7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4197dd:	50                   	push   eax
  4197de:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4197e5:	51                   	push   ecx
  4197e6:	56                   	push   esi
  4197e7:	8b f1                	mov    esi,ecx
  4197e9:	6a 38                	push   0x38
  4197eb:	e8 c5 08 1f 00       	call   0x60a0b5
  4197f0:	83 c4 04             	add    esp,0x4
  4197f3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  4197f7:	85 c0                	test   eax,eax
  4197f9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  419800:	 
