
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005b2e40 <.text+0x1b1e40>:
  5b2e40:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
  5b2e43:	d8 4a 08             	fmul   DWORD PTR [edx+0x8]
  5b2e46:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
  5b2e49:	d8 4a 04             	fmul   DWORD PTR [edx+0x4]
  5b2e4c:	de c1                	faddp  st(1),st
  5b2e4e:	d9 01                	fld    DWORD PTR [ecx]
  5b2e50:	d8 0a                	fmul   DWORD PTR [edx]
  5b2e52:	de c1                	faddp  st(1),st
  5b2e54:	c3                   	ret
  5b2e55:	90                   	nop
  5b2e56:	90                   	nop
  5b2e57:	90                   	nop
  5b2e58:	90                   	nop
  5b2e59:	90                   	nop
  5b2e5a:	90                   	nop
  5b2e5b:	90                   	nop
  5b2e5c:	90                   	nop
  5b2e5d:	90                   	nop
  5b2e5e:	90                   	nop
  5b2e5f:	90                   	nop
  5b2e60:	83 ec 0c             	sub    esp,0xc
  5b2e63:	d9 42 08             	fld    DWORD PTR [edx+0x8]
  5b2e66:	d8 49 04             	fmul   DWORD PTR [ecx+0x4]
  5b2e69:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
  5b2e6c:	d8 4a 04             	fmul   DWORD PTR [edx+0x4]
  5b2e6f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b2e73:	de e9                	fsubp  st(1),st
  5b2e75:	d9 5c 24 00          	fstp   DWORD PTR [esp+0x0]
  5b2e79:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
  5b2e7c:	d8 0a                	fmul   DWORD PTR [edx]
  5b2e7e:	d9 01                	fld    DWORD PTR [ecx]
  5b2e80:	d8 4a 08             	fmul   DWORD PTR [edx+0x8]
  5b2e83:	de e9                	fsubp  st(1),st
  5b2e85:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  5b2e89:	d9 01                	fld    DWORD PTR [ecx]
  5b2e8b:	d8 4a 04             	fmul   DWORD PTR [edx+0x4]
  5b2e8e:	d9 02                	fld    DWORD PTR [edx]
  5b2e90:	d8 49 04             	fmul   DWORD PTR [ecx+0x4]
  5b2e93:	8b 4c 24 00          	mov    ecx,DWORD PTR [esp+0x0]
  5b2e97:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5b2e9b:	89 08                	mov    DWORD PTR [eax],ecx
  5b2e9d:	de e9                	fsubp  st(1),st
  5b2e9f:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  5b2ea2:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5b2ea6:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5b2eaa:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  5b2ead:	83 c4 0c             	add    esp,0xc
  5b2eb0:	c2 04 00             	ret    0x4
  5b2eb3:	90                   	nop
  5b2eb4:	90                   	nop
  5b2eb5:	90                   	nop
  5b2eb6:	90                   	nop
  5b2eb7:	90                   	nop
  5b2eb8:	90                   	nop
  5b2eb9:	90                   	nop
  5b2eba:	90                   	nop
  5b2ebb:	90                   	nop
  5b2ebc:	90                   	nop
  5b2ebd:	90                   	nop
  5b2ebe:	90                   	nop
  5b2ebf:	90                   	nop
  5b2ec0:	d9 02                	fld    DWORD PTR [edx]
  5b2ec2:	d8 21                	fsub   DWORD PTR [ecx]
  5b2ec4:	d9 e1                	fabs
  5b2ec6:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b2eca:	de d9                	fcompp
  5b2ecc:	df e0                	fnstsw ax
  5b2ece:	f6 c4 01             	test   ah,0x1
  5b2ed1:	74 05                	je     0x5b2ed8
  5b2ed3:	33 c0                	xor    eax,eax
  5b2ed5:	c2 04 00             	ret    0x4
  5b2ed8:	d9 42 04             	fld    DWORD PTR [edx+0x4]
  5b2edb:	d8 61 04             	fsub   DWORD PTR [ecx+0x4]
  5b2ede:	d9 e1                	fabs
  5b2ee0:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b2ee4:	de d9                	fcompp
  5b2ee6:	df e0                	fnstsw ax
  5b2ee8:	f6 c4 01             	test   ah,0x1
  5b2eeb:	74 05                	je     0x5b2ef2
  5b2eed:	33 c0                	xor    eax,eax
  5b2eef:	c2 04 00             	ret    0x4
  5b2ef2:	d9 42 08             	fld    DWORD PTR [edx+0x8]
  5b2ef5:	d8 61 08             	fsub   DWORD PTR [ecx+0x8]
  5b2ef8:	d9 e1                	fabs
  5b2efa:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b2efe:	de d9                	fcompp
  5b2f00:	df e0                	fnstsw ax
  5b2f02:	f6 c4 01             	test   ah,0x1
  5b2f05:	74 05                	je     0x5b2f0c
  5b2f07:	33 c0                	xor    eax,eax
  5b2f09:	c2 04 00             	ret    0x4
  5b2f0c:	b8 01 00 00 00       	mov    eax,0x1
  5b2f11:	c2 04 00             	ret    0x4
  5b2f14:	90                   	nop
  5b2f15:	90                   	nop
  5b2f16:	90                   	nop
  5b2f17:	90                   	nop
  5b2f18:	90                   	nop
  5b2f19:	90                   	nop
  5b2f1a:	90                   	nop
  5b2f1b:	90                   	nop
  5b2f1c:	90                   	nop
  5b2f1d:	90                   	nop
  5b2f1e:	90                   	nop
  5b2f1f:	90                   	nop
  5b2f20:	55                   	push   ebp
  5b2f21:	8b ec                	mov    ebp,esp
  5b2f23:	51                   	push   ecx
  5b2f24:	d9 01                	fld    DWORD PTR [ecx]
  5b2f26:	8d 51 04             	lea    edx,[ecx+0x4]
  5b2f29:	d9 c0                	fld    st(0)
  5b2f2b:	8b c2                	mov    eax,edx
  5b2f2d:	de c9                	fmulp  st(1),st
  5b2f2f:	d9 00                	fld    DWORD PTR [eax]
  5b2f31:	d9 c0                	fld    st(0)
  5b2f33:	d8 c9                	fmul   st,st(1)
  5b2f35:	83 c0 04             	add    eax,0x4
  5b2f38:	de c2                	faddp  st(2),st
  5b2f3a:	dd d8                	fstp   st(0)
  5b2f3c:	d9 00                	fld    DWORD PTR [eax]
  5b2f3e:	d9 c0                	fld    st(0)
  5b2f40:	d8 c9                	fmul   st,st(1)
  5b2f42:	d8 c2                	fadd   st,st(2)
  5b2f44:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
  5b2f47:	dd d8                	fstp   st(0)
  5b2f49:	dd d8                	fstp   st(0)
  5b2f4b:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
  5b2f4e:	d9 fa                	fsqrt
  5b2f50:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
  5b2f53:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
  5b2f56:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5b2f5c:	df e0                	fnstsw ax
  5b2f5e:	f6 c4 40             	test   ah,0x40
  5b2f61:	74 0a                	je     0x5b2f6d
  5b2f63:	d9 05 50 a4 64 00    	fld    DWORD PTR ds:0x64a450
  5b2f69:	8b e5                	mov    esp,ebp
  5b2f6b:	5d                   	pop    ebp
  5b2f6c:	c3                   	ret
  5b2f6d:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  5b2f73:	d8 75 fc             	fdiv   DWORD PTR [ebp-0x4]
  5b2f76:	8b c2                	mov    eax,edx
  5b2f78:	83 c0 04             	add    eax,0x4
  5b2f7b:	d9 c0                	fld    st(0)
  5b2f7d:	d8 09                	fmul   DWORD PTR [ecx]
  5b2f7f:	d9 19                	fstp   DWORD PTR [ecx]
  5b2f81:	d9 c0                	fld    st(0)
  5b2f83:	d8 48 fc             	fmul   DWORD PTR [eax-0x4]
  5b2f86:	d9 58 fc             	fstp   DWORD PTR [eax-0x4]
  5b2f89:	d8 08                	fmul   DWORD PTR [eax]
  5b2f8b:	d9 18                	fstp   DWORD PTR [eax]
  5b2f8d:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
  5b2f90:	8b e5                	mov    esp,ebp
  5b2f92:	5d                   	pop    ebp
  5b2f93:	c3                   	ret
  5b2f94:	90                   	nop
  5b2f95:	90                   	nop
  5b2f96:	90                   	nop
  5b2f97:	90                   	nop
  5b2f98:	90                   	nop
  5b2f99:	90                   	nop
  5b2f9a:	90                   	nop
  5b2f9b:	90                   	nop
  5b2f9c:	90                   	nop
  5b2f9d:	90                   	nop
  5b2f9e:	90                   	nop
  5b2f9f:	90                   	nop
  5b2fa0:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b2fa4:	d8 09                	fmul   DWORD PTR [ecx]
  5b2fa6:	d9 1a                	fstp   DWORD PTR [edx]
  5b2fa8:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b2fac:	d8 49 04             	fmul   DWORD PTR [ecx+0x4]
  5b2faf:	d9 5a 04             	fstp   DWORD PTR [edx+0x4]
  5b2fb2:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b2fb6:	d8 49 08             	fmul   DWORD PTR [ecx+0x8]
  5b2fb9:	d9 5a 08             	fstp   DWORD PTR [edx+0x8]
  5b2fbc:	c2 04 00             	ret    0x4
  5b2fbf:	90                   	nop
  5b2fc0:	8b d1                	mov    edx,ecx
  5b2fc2:	e9 79 fe ff ff       	jmp    0x5b2e40
  5b2fc7:	90                   	nop
  5b2fc8:	90                   	nop
  5b2fc9:	90                   	nop
  5b2fca:	90                   	nop
  5b2fcb:	90                   	nop
  5b2fcc:	90                   	nop
  5b2fcd:	90                   	nop
  5b2fce:	90                   	nop
  5b2fcf:	90                   	nop
  5b2fd0:	8b d1                	mov    edx,ecx
  5b2fd2:	e8 69 fe ff ff       	call   0x5b2e40
  5b2fd7:	d9 fa                	fsqrt
  5b2fd9:	c3                   	ret
  5b2fda:	90                   	nop
  5b2fdb:	90                   	nop
  5b2fdc:	90                   	nop
  5b2fdd:	90                   	nop
  5b2fde:	90                   	nop
  5b2fdf:	90                   	nop
  5b2fe0:	d9 01                	fld    DWORD PTR [ecx]
  5b2fe2:	d8 22                	fsub   DWORD PTR [edx]
  5b2fe4:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5b2fe8:	d9 18                	fstp   DWORD PTR [eax]
  5b2fea:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
  5b2fed:	d8 62 04             	fsub   DWORD PTR [edx+0x4]
  5b2ff0:	d9 58 04             	fstp   DWORD PTR [eax+0x4]
  5b2ff3:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
  5b2ff6:	d8 62 08             	fsub   DWORD PTR [edx+0x8]
  5b2ff9:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
  5b2ffc:	c2 04 00             	ret    0x4
  5b2fff:	90                   	nop
  5b3000:	d9 01                	fld    DWORD PTR [ecx]
  5b3002:	d8 02                	fadd   DWORD PTR [edx]
  5b3004:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5b3008:	d9 18                	fstp   DWORD PTR [eax]
  5b300a:	d9 41 04             	fld    DWORD PTR [ecx+0x4]
  5b300d:	d8 42 04             	fadd   DWORD PTR [edx+0x4]
