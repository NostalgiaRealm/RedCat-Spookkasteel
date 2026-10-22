  422f30:	8a 81 64 01 00 00    	mov    al,BYTE PTR [ecx+0x164]
  422f36:	84 c0                	test   al,al
  422f38:	74 05                	je     0x422f3f
  422f3a:	b0 01                	mov    al,0x1
  422f3c:	c2 04 00             	ret    0x4
  422f3f:	8b 81 68 01 00 00    	mov    eax,DWORD PTR [ecx+0x168]
  422f45:	83 f8 ff             	cmp    eax,0xffffffff
  422f48:	75 05                	jne    0x422f4f
  422f4a:	32 c0                	xor    al,al
  422f4c:	c2 04 00             	ret    0x4
  422f4f:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  422f53:	2b d0                	sub    edx,eax
  422f55:	8b 81 44 01 00 00    	mov    eax,DWORD PTR [ecx+0x144]
  422f5b:	3b d0                	cmp    edx,eax
  422f5d:	0f 9c c0             	setl   al
  422f60:	c2 04 00             	ret    0x4
  422f63:	90                   	nop
  422f64:	90                   	nop
  422f65:	90                   	nop
  422f66:	90                   	nop
  422f67:	90                   	nop
  422f68:	90                   	nop
  422f69:	90                   	nop
  422f6a:	90                   	nop
  422f6b:	90                   	nop
  422f6c:	90                   	nop
  422f6d:	90                   	nop
  422f6e:	90                   	nop
  422f6f:	90                   	nop
  422f70:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  422f74:	56                   	push   esi
  422f75:	8b f1                	mov    esi,ecx
  422f77:	50                   	push   eax
  422f78:	e8 b3 ff ff ff       	call   0x422f30
  422f7d:	84 c0                	test   al,al
  422f7f:	74 1c                	je     0x422f9d
  422f81:	d9 86 5c 01 00 00    	fld    DWORD PTR [esi+0x15c]
  422f87:	d8 9e 50 01 00 00    	fcomp  DWORD PTR [esi+0x150]
  422f8d:	df e0                	fnstsw ax
  422f8f:	f6 c4 41             	test   ah,0x41
  422f92:	74 09                	je     0x422f9d
  422f94:	b8 01 00 00 00       	mov    eax,0x1
  422f99:	5e                   	pop    esi
  422f9a:	c2 04 00             	ret    0x4
  422f9d:	33 c0                	xor    eax,eax
  422f9f:	5e                   	pop    esi
  422fa0:	c2 04 00             	ret    0x4
  422fa3:	90                   	nop
  422fa4:	90                   	nop
  422fa5:	90                   	nop
  422fa6:	90                   	nop
  422fa7:	90                   	nop
  422fa8:	90                   	nop
  422fa9:	90                   	nop
  422faa:	90                   	nop
  422fab:	90                   	nop
  422fac:	90                   	nop
  422fad:	90                   	nop
  422fae:	90                   	nop
  422faf:	90                   	nop
