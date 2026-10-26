
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047ea90 <.text+0x7da90>:
  47ea90:	81 ec f8 00 00 00    	sub    esp,0xf8
  47ea96:	56                   	push   esi
  47ea97:	8b f1                	mov    esi,ecx
  47ea99:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  47ea9c:	84 c0                	test   al,al
  47ea9e:	0f 84 2c 02 00 00    	je     0x47ecd0
  47eaa4:	8b 8e ec 00 00 00    	mov    ecx,DWORD PTR [esi+0xec]
  47eaaa:	57                   	push   edi
  47eaab:	83 f9 ff             	cmp    ecx,0xffffffff
  47eaae:	b2 01                	mov    dl,0x1
  47eab0:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  47eab4:	74 63                	je     0x47eb19
  47eab6:	8b 86 f0 00 00 00    	mov    eax,DWORD PTR [esi+0xf0]
  47eabc:	83 f8 ff             	cmp    eax,0xffffffff
  47eabf:	75 1b                	jne    0x47eadc
  47eac1:	8b 84 24 04 01 00 00 	mov    eax,DWORD PTR [esp+0x104]
  47eac8:	c7 86 f4 00 00 00 00 	mov    DWORD PTR [esi+0xf4],0x3f800000
  47eacf:	00 80 3f 
  47ead2:	03 c8                	add    ecx,eax
  47ead4:	89 8e f0 00 00 00    	mov    DWORD PTR [esi+0xf0],ecx
  47eada:	eb 3d                	jmp    0x47eb19
  47eadc:	8b bc 24 04 01 00 00 	mov    edi,DWORD PTR [esp+0x104]
  47eae3:	3b f8                	cmp    edi,eax
  47eae5:	7e 0e                	jle    0x47eaf5
  47eae7:	c7 86 f4 00 00 00 00 	mov    DWORD PTR [esi+0xf4],0x0
  47eaee:	00 00 00 
  47eaf1:	32 d2                	xor    dl,dl
  47eaf3:	eb 24                	jmp    0x47eb19
  47eaf5:	85 c9                	test   ecx,ecx
  47eaf7:	7e 16                	jle    0x47eb0f
  47eaf9:	2b c7                	sub    eax,edi
  47eafb:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
  47eaff:	db 44 24 08          	fild   DWORD PTR [esp+0x8]
  47eb03:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47eb07:	d9 9e f4 00 00 00    	fstp   DWORD PTR [esi+0xf4]
  47eb0d:	eb 0a                	jmp    0x47eb19
  47eb0f:	c7 86 f4 00 00 00 00 	mov    DWORD PTR [esi+0xf4],0x0
  47eb16:	00 00 00 
  47eb19:	84 d2                	test   dl,dl
  47eb1b:	88 96 f8 00 00 00    	mov    BYTE PTR [esi+0xf8],dl
  47eb21:	5f                   	pop    edi
  47eb22:	75 0f                	jne    0x47eb33
  47eb24:	8b 8e 08 01 00 00    	mov    ecx,DWORD PTR [esi+0x108]
  47eb2a:	88 56 7a             	mov    BYTE PTR [esi+0x7a],dl
  47eb2d:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
  47eb31:	eb 24                	jmp    0x47eb57
  47eb33:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47eb39:	d8 a6 f4 00 00 00    	fsub   DWORD PTR [esi+0xf4]
  47eb3f:	d8 8e 08 01 00 00    	fmul   DWORD PTR [esi+0x108]
  47eb45:	d9 86 04 01 00 00    	fld    DWORD PTR [esi+0x104]
  47eb4b:	d8 8e f4 00 00 00    	fmul   DWORD PTR [esi+0xf4]
  47eb51:	de c1                	faddp  st(1),st
  47eb53:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
  47eb57:	8b 94 24 04 01 00 00 	mov    edx,DWORD PTR [esp+0x104]
  47eb5e:	52                   	push   edx
  47eb5f:	e8 cc b2 f8 ff       	call   0x409e30
  47eb64:	d8 8e 10 01 00 00    	fmul   DWORD PTR [esi+0x110]
  47eb6a:	83 c4 04             	add    esp,0x4
  47eb6d:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47eb71:	d8 86 0c 01 00 00    	fadd   DWORD PTR [esi+0x10c]
  47eb77:	d9 9e 0c 01 00 00    	fstp   DWORD PTR [esi+0x10c]
  47eb7d:	e8 3e 45 13 00       	call   0x5b30c0
  47eb82:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  47eb86:	e8 35 45 13 00       	call   0x5b30c0
  47eb8b:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  47eb92:	e8 29 45 13 00       	call   0x5b30c0
  47eb97:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  47eb9e:	e8 1d 45 13 00       	call   0x5b30c0
  47eba3:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  47eba7:	e8 14 45 13 00       	call   0x5b30c0
  47ebac:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
  47ebb2:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  47ebb9:	00 
  47ebba:	83 e8 00             	sub    eax,0x0
  47ebbd:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  47ebc4:	00 
  47ebc5:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  47ebcc:	00 
  47ebcd:	74 54                	je     0x47ec23
  47ebcf:	48                   	dec    eax
  47ebd0:	74 37                	je     0x47ec09
  47ebd2:	48                   	dec    eax
  47ebd3:	74 1a                	je     0x47ebef
  47ebd5:	8b 86 0c 01 00 00    	mov    eax,DWORD PTR [esi+0x10c]
  47ebdb:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ebdf:	50                   	push   eax
  47ebe0:	e8 4b 45 13 00       	call   0x5b3130
  47ebe5:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  47ebe9:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  47ebed:	eb 4c                	jmp    0x47ec3b
  47ebef:	8b 96 0c 01 00 00    	mov    edx,DWORD PTR [esi+0x10c]
  47ebf5:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ebf9:	52                   	push   edx
  47ebfa:	e8 71 45 13 00       	call   0x5b3170
  47ebff:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  47ec03:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  47ec07:	eb 32                	jmp    0x47ec3b
  47ec09:	8b 8e 0c 01 00 00    	mov    ecx,DWORD PTR [esi+0x10c]
  47ec0f:	51                   	push   ecx
  47ec10:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  47ec14:	e8 17 45 13 00       	call   0x5b3130
  47ec19:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  47ec1d:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  47ec21:	eb 18                	jmp    0x47ec3b
  47ec23:	8b 86 0c 01 00 00    	mov    eax,DWORD PTR [esi+0x10c]
  47ec29:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ec2d:	50                   	push   eax
  47ec2e:	e8 bd 44 13 00       	call   0x5b30f0
  47ec33:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  47ec37:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  47ec3b:	8d 54 24 0c          	lea    edx,[esp+0xc]
  47ec3f:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47ec43:	52                   	push   edx
  47ec44:	8d 54 24 10          	lea    edx,[esp+0x10]
  47ec48:	e8 73 46 13 00       	call   0x5b32c0
  47ec4d:	8b 86 24 01 00 00    	mov    eax,DWORD PTR [esi+0x124]
  47ec53:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  47ec57:	50                   	push   eax
  47ec58:	e8 93 44 13 00       	call   0x5b30f0
  47ec5d:	8b 8e 28 01 00 00    	mov    ecx,DWORD PTR [esi+0x128]
  47ec63:	51                   	push   ecx
  47ec64:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  47ec6b:	e8 80 44 13 00       	call   0x5b30f0
  47ec70:	8d 94 24 cc 00 00 00 	lea    edx,[esp+0xcc]
  47ec77:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  47ec7b:	52                   	push   edx
  47ec7c:	8d 94 24 a0 00 00 00 	lea    edx,[esp+0xa0]
  47ec83:	e8 38 46 13 00       	call   0x5b32c0
  47ec88:	8d 44 24 0c          	lea    eax,[esp+0xc]
  47ec8c:	8d 54 24 0c          	lea    edx,[esp+0xc]
  47ec90:	50                   	push   eax
  47ec91:	8d 8c 24 d0 00 00 00 	lea    ecx,[esp+0xd0]
  47ec98:	e8 23 46 13 00       	call   0x5b32c0
  47ec9d:	8b 8e 20 01 00 00    	mov    ecx,DWORD PTR [esi+0x120]
  47eca3:	8b 96 1c 01 00 00    	mov    edx,DWORD PTR [esi+0x11c]
  47eca9:	8b 86 18 01 00 00    	mov    eax,DWORD PTR [esi+0x118]
  47ecaf:	51                   	push   ecx
  47ecb0:	52                   	push   edx
  47ecb1:	50                   	push   eax
  47ecb2:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47ecb6:	e8 c5 45 13 00       	call   0x5b3280
  47ecbb:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47ecbf:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  47ecc3:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  47ecc7:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  47ecca:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47eccd:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  47ecd0:	5e                   	pop    esi
  47ecd1:	81 c4 f8 00 00 00    	add    esp,0xf8
  47ecd7:	c2 08 00             	ret    0x8
