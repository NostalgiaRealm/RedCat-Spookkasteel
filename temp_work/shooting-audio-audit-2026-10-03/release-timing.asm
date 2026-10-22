
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00434b93 <.text+0x33b93>:
  434b93:	8b ce                	mov    ecx,esi
  434b95:	e8 96 1e 00 00       	call   0x436a30
  434b9a:	39 1d 4c 58 6b 00    	cmp    DWORD PTR ds:0x6b584c,ebx
  434ba0:	0f 85 a9 00 00 00    	jne    0x434c4f
  434ba6:	c7 05 4c 58 6b 00 01 	mov    DWORD PTR ds:0x6b584c,0x1
  434bad:	00 00 00 
  434bb0:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434bb6:	68 33 33 f3 3f       	push   0x3ff33333
  434bbb:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434bc1:	e8 0a c0 06 00       	call   0x4a0bd0
  434bc6:	e9 84 00 00 00       	jmp    0x434c4f
  434bcb:	39 1d 4c 58 6b 00    	cmp    DWORD PTR ds:0x6b584c,ebx
  434bd1:	75 07                	jne    0x434bda
  434bd3:	8b ce                	mov    ecx,esi
  434bd5:	e8 66 1f 00 00       	call   0x436b40
  434bda:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434be0:	68 b8 1e 85 3e       	push   0x3e851eb8
  434be5:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434beb:	e8 30 c2 06 00       	call   0x4a0e20
  434bf0:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434bf6:	53                   	push   ebx
  434bf7:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434bfd:	e8 ce bf 06 00       	call   0x4a0bd0
  434c02:	d9 44 24 58          	fld    DWORD PTR [esp+0x58]
  434c06:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  434c0c:	51                   	push   ecx
  434c0d:	8b ce                	mov    ecx,esi
  434c0f:	d9 1c 24             	fstp   DWORD PTR [esp]
  434c12:	e8 a9 cc ff ff       	call   0x4318c0
  434c17:	89 9e 6c 03 00 00    	mov    DWORD PTR [esi+0x36c],ebx
  434c1d:	89 1d 4c 58 6b 00    	mov    DWORD PTR ds:0x6b584c,ebx
  434c23:	eb 2a                	jmp    0x434c4f
  434c25:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434c2b:	68 33 33 f3 3f       	push   0x3ff33333
  434c30:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434c36:	e8 95 bf 06 00       	call   0x4a0bd0
  434c3b:	c7 05 7c 01 69 00 00 	mov    DWORD PTR ds:0x69017c,0x42c80000
  434c42:	00 c8 42 
  434c45:	c7 05 4c 58 6b 00 01 	mov    DWORD PTR ds:0x6b584c,0x1
  434c4c:	00 00 00 
  434c4f:	8d 44 24 38          	lea    eax,[esp+0x38]
  434c53:	8b ce                	mov    ecx,esi
  434c55:	50                   	push   eax
  434c56:	e8 25 02 00 00       	call   0x434e80
  434c5b:	8b 08                	mov    ecx,DWORD PTR [eax]
  434c5d:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  434c61:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434c64:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  434c68:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434c6b:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  434c6f:	8a 86 94 03 00 00    	mov    al,BYTE PTR [esi+0x394]
  434c75:	3a c3                	cmp    al,bl
  434c77:	74 7e                	je     0x434cf7
  434c79:	39 9e 90 03 00 00    	cmp    DWORD PTR [esi+0x390],ebx
  434c7f:	74 62                	je     0x434ce3
  434c81:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  434c87:	3b fb                	cmp    edi,ebx
  434c89:	75 07                	jne    0x434c92
  434c8b:	e8 f0 77 08 00       	call   0x4bc480
  434c90:	8b f8                	mov    edi,eax
  434c92:	8b 87 e8 04 00 00    	mov    eax,DWORD PTR [edi+0x4e8]
  434c98:	3d 00 00 00 80       	cmp    eax,0x80000000
  434c9d:	75 1e                	jne    0x434cbd
  434c9f:	8b 87 9c 04 00 00    	mov    eax,DWORD PTR [edi+0x49c]
  434ca5:	3b c3                	cmp    eax,ebx
  434ca7:	75 05                	jne    0x434cae
  434ca9:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  434cae:	50                   	push   eax
  434caf:	e8 5c 62 1d 00       	call   0x60af10
  434cb4:	83 c4 04             	add    esp,0x4
  434cb7:	89 87 e8 04 00 00    	mov    DWORD PTR [edi+0x4e8],eax
  434cbd:	3b c3                	cmp    eax,ebx
  434cbf:	75 22                	jne    0x434ce3
  434cc1:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
  434cc7:	8d 54 24 38          	lea    edx,[esp+0x38]
  434ccb:	52                   	push   edx
  434ccc:	8b 39                	mov    edi,DWORD PTR [ecx]
  434cce:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434cd4:	e8 a7 6f 06 00       	call   0x49bc80
  434cd9:	8b 8e 90 03 00 00    	mov    ecx,DWORD PTR [esi+0x390]
  434cdf:	50                   	push   eax
  434ce0:	ff 57 4c             	call   DWORD PTR [edi+0x4c]
  434ce3:	8b 8e 30 03 00 00    	mov    ecx,DWORD PTR [esi+0x330]
  434ce9:	3b cb                	cmp    ecx,ebx
  434ceb:	74 0a                	je     0x434cf7
  434ced:	8b 01                	mov    eax,DWORD PTR [ecx]
  434cef:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  434cf3:	52                   	push   edx
  434cf4:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  434cf7:	8b 8e 54 02 00 00    	mov    ecx,DWORD PTR [esi+0x254]
  434cfd:	81 c1 9c 01 00 00    	add    ecx,0x19c
  434d03:	e8 58 c3 06 00       	call   0x4a1060
  434d08:	d8 1d 98 c5 64 00    	fcomp  DWORD PTR ds:0x64c598
  434d0e:	df e0                	fnstsw ax
  434d10:	f6 c4 41             	test   ah,0x41
  434d13:	0f 85 fb 00 00 00    	jne    0x434e14
  434d19:	39 1d 4c 58 6b 00    	cmp    DWORD PTR ds:0x6b584c,ebx
  434d1f:	0f 84 ef 00 00 00    	je     0x434e14
  434d25:	d9 86 6c 03 00 00    	fld    DWORD PTR [esi+0x36c]
  434d2b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  434d31:	df e0                	fnstsw ax
  434d33:	f6 c4 40             	test   ah,0x40
  434d36:	0f 84 d8 00 00 00    	je     0x434e14
  434d3c:	83 fd 0b             	cmp    ebp,0xb
  434d3f:	8b ce                	mov    ecx,esi
  434d41:	75 07                	jne    0x434d4a
  434d43:	e8 e8 1c 00 00       	call   0x436a30
  434d48:	eb 05                	jmp    0x434d4f
  434d4a:	e8 f1 1d 00 00       	call   0x436b40
  434d4f:	8b ce                	mov    ecx,esi
  434d51:	e8 ca ca ff ff       	call   0x431820
  434d56:	8d 44 24 58          	lea    eax,[esp+0x58]
  434d5a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  434d5e:	50                   	push   eax
  434d5f:	6a 01                	push   0x1
  434d61:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  434d65:	83 ec 0c             	sub    esp,0xc
  434d68:	8b cc                	mov    ecx,esp
  434d6a:	89 11                	mov    DWORD PTR [ecx],edx
  434d6c:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  434d70:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  434d73:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  434d77:	50                   	push   eax
  434d78:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  434d7b:	8b ce                	mov    ecx,esi
  434d7d:	e8 fe 00 00 00       	call   0x434e80
  434d82:	8b 10                	mov    edx,DWORD PTR [eax]
  434d84:	83 ec 0c             	sub    esp,0xc
  434d87:	8b cc                	mov    ecx,esp
  434d89:	55                   	push   ebp
  434d8a:	89 11                	mov    DWORD PTR [ecx],edx
  434d8c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  434d8f:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  434d92:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  434d95:	51                   	push   ecx
  434d96:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  434d99:	8b cc                	mov    ecx,esp
  434d9b:	89 64 24 38          	mov    DWORD PTR [esp+0x38],esp
  434d9f:	51                   	push   ecx
  434da0:	8b ce                	mov    ecx,esi
  434da2:	e8 39 f5 fc ff       	call   0x4042e0
  434da7:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  434dab:	52                   	push   edx
  434dac:	e8 af 84 01 00       	call   0x44d260
  434db1:	d9 05 7c 01 69 00    	fld    DWORD PTR ds:0x69017c
  434db7:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  434dbd:	8b 8c 24 84 00 00 00 	mov    ecx,DWORD PTR [esp+0x84]
  434dc4:	83 c4 2c             	add    esp,0x2c
  434dc7:	d8 89 d8 01 00 00    	fmul   DWORD PTR [ecx+0x1d8]
  434dcd:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  434dd3:	df e0                	fnstsw ax
  434dd5:	f6 c4 01             	test   ah,0x1
  434dd8:	74 08                	je     0x434de2
  434dda:	dd d8                	fstp   st(0)
  434ddc:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  434de2:	d9 99 d8 01 00 00    	fstp   DWORD PTR [ecx+0x1d8]
  434de8:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  434dec:	d9 80 d8 01 00 00    	fld    DWORD PTR [eax+0x1d8]
  434df2:	d8 0d 78 be 64 00    	fmul   DWORD PTR ds:0x64be78
  434df8:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  434dfe:	d9 98 d8 01 00 00    	fstp   DWORD PTR [eax+0x1d8]
  434e04:	c7 86 6c 03 00 00 00 	mov    DWORD PTR [esi+0x36c],0x3f800000
  434e0b:	00 80 3f 
  434e0e:	89 1d 4c 58 6b 00    	mov    DWORD PTR ds:0x6b584c,ebx
  434e14:	5f                   	pop    edi
  434e15:	5e                   	pop    esi
  434e16:	5d                   	pop    ebp
  434e17:	5b                   	pop    ebx
  434e18:	83 c4 44             	add    esp,0x44
  434e1b:	c2 04 00             	ret    0x4
  434e1e:	90                   	nop
  434e1f:	90                   	nop
