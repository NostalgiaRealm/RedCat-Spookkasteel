
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00477d50 <.text+0x76d50>:
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
