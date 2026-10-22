  45eee0:	56                   	push   esi
  45eee1:	8b f1                	mov    esi,ecx
  45eee3:	8a 46 7c             	mov    al,BYTE PTR [esi+0x7c]
  45eee6:	84 c0                	test   al,al
  45eee8:	0f 85 4b 01 00 00    	jne    0x45f039
  45eeee:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  45eef2:	53                   	push   ebx
  45eef3:	8d 9e 60 15 00 00    	lea    ebx,[esi+0x1560]
  45eef9:	c6 86 b4 15 00 00 01 	mov    BYTE PTR [esi+0x15b4],0x1
  45ef00:	8b 10                	mov    edx,DWORD PTR [eax]
  45ef02:	8b cb                	mov    ecx,ebx
  45ef04:	55                   	push   ebp
  45ef05:	57                   	push   edi
  45ef06:	89 11                	mov    DWORD PTR [ecx],edx
  45ef08:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  45ef0b:	8d be 6c 15 00 00    	lea    edi,[esi+0x156c]
  45ef11:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  45ef14:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  45ef17:	8b d7                	mov    edx,edi
  45ef19:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  45ef1c:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  45ef20:	8b 01                	mov    eax,DWORD PTR [ecx]
  45ef22:	89 02                	mov    DWORD PTR [edx],eax
  45ef24:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  45ef27:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  45ef2a:	8b c7                	mov    eax,edi
  45ef2c:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  45ef2f:	c7 86 b8 15 00 00 00 	mov    DWORD PTR [esi+0x15b8],0x0
  45ef36:	00 00 00 
  45ef39:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  45ef3c:	8b 08                	mov    ecx,DWORD PTR [eax]
  45ef3e:	8d 96 9c 15 00 00    	lea    edx,[esi+0x159c]
  45ef44:	89 8e 9c 15 00 00    	mov    DWORD PTR [esi+0x159c],ecx
  45ef4a:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  45ef4d:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  45ef50:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  45ef53:	8d 8e a8 15 00 00    	lea    ecx,[esi+0x15a8]
  45ef59:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  45ef5c:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  45ef60:	8b c1                	mov    eax,ecx
  45ef62:	8b 2a                	mov    ebp,DWORD PTR [edx]
  45ef64:	89 28                	mov    DWORD PTR [eax],ebp
  45ef66:	8b 6a 04             	mov    ebp,DWORD PTR [edx+0x4]
  45ef69:	89 68 04             	mov    DWORD PTR [eax+0x4],ebp
  45ef6c:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  45ef6f:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  45ef72:	e8 09 41 15 00       	call   0x5b3080
  45ef77:	8d ae 84 15 00 00    	lea    ebp,[esi+0x1584]
  45ef7d:	8b d7                	mov    edx,edi
  45ef7f:	55                   	push   ebp
  45ef80:	8b cb                	mov    ecx,ebx
  45ef82:	e8 59 40 15 00       	call   0x5b2fe0
  45ef87:	8d 8e 78 15 00 00    	lea    ecx,[esi+0x1578]
  45ef8d:	8b c5                	mov    eax,ebp
  45ef8f:	8b d1                	mov    edx,ecx
  45ef91:	8b 18                	mov    ebx,DWORD PTR [eax]
  45ef93:	89 1a                	mov    DWORD PTR [edx],ebx
  45ef95:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
  45ef98:	89 5a 04             	mov    DWORD PTR [edx+0x4],ebx
  45ef9b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  45ef9e:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  45efa1:	e8 7a 3f 15 00       	call   0x5b2f20
  45efa6:	dd d8                	fstp   st(0)
  45efa8:	55                   	push   ebp
  45efa9:	e8 42 26 15 00       	call   0x5b15f0
  45efae:	8b 17                	mov    edx,DWORD PTR [edi]
  45efb0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  45efb3:	8d 9e 90 15 00 00    	lea    ebx,[esi+0x1590]
  45efb9:	8b cb                	mov    ecx,ebx
  45efbb:	dd d8                	fstp   st(0)
  45efbd:	89 11                	mov    DWORD PTR [ecx],edx
  45efbf:	8b 57 08             	mov    edx,DWORD PTR [edi+0x8]
  45efc2:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  45efc6:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  45efc9:	57                   	push   edi
  45efca:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  45efcd:	e8 5e ae fa ff       	call   0x409e30
  45efd2:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  45efd6:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  45efda:	83 c4 08             	add    esp,0x8
  45efdd:	8d 96 a8 15 00 00    	lea    edx,[esi+0x15a8]
  45efe3:	8b cb                	mov    ecx,ebx
  45efe5:	53                   	push   ebx
  45efe6:	50                   	push   eax
  45efe7:	e8 34 40 15 00       	call   0x5b3020
  45efec:	55                   	push   ebp
  45efed:	8b d3                	mov    edx,ebx
  45efef:	8d 8e 60 15 00 00    	lea    ecx,[esi+0x1560]
  45eff5:	e8 e6 3f 15 00       	call   0x5b2fe0
  45effa:	6a 01                	push   0x1
  45effc:	8b ce                	mov    ecx,esi
  45effe:	e8 4d 33 0a 00       	call   0x502350
  45f003:	57                   	push   edi
  45f004:	8d 8e bc 15 00 00    	lea    ecx,[esi+0x15bc]
  45f00a:	e8 a1 51 fa ff       	call   0x4041b0
  45f00f:	d9 05 c4 71 6b 00    	fld    DWORD PTR ds:0x6b71c4
  45f015:	e8 06 bb 1a 00       	call   0x60ab20
  45f01a:	50                   	push   eax
  45f01b:	8d 8e d0 15 00 00    	lea    ecx,[esi+0x15d0]
  45f021:	e8 8a 51 fa ff       	call   0x4041b0
  45f026:	5f                   	pop    edi
  45f027:	5d                   	pop    ebp
  45f028:	c7 86 cc 15 00 00 00 	mov    DWORD PTR [esi+0x15cc],0x0
  45f02f:	00 00 00 
  45f032:	5b                   	pop    ebx
  45f033:	b0 01                	mov    al,0x1
  45f035:	5e                   	pop    esi
  45f036:	c2 10 00             	ret    0x10
  45f039:	32 c0                	xor    al,al
  45f03b:	5e                   	pop    esi
  45f03c:	c2 10 00             	ret    0x10
