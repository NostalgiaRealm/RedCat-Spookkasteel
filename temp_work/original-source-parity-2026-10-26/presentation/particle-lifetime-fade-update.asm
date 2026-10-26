
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047dd60 <.text+0x7cd60>:
  47dd60:	51                   	push   ecx
  47dd61:	53                   	push   ebx
  47dd62:	56                   	push   esi
  47dd63:	8b f1                	mov    esi,ecx
  47dd65:	33 db                	xor    ebx,ebx
  47dd67:	57                   	push   edi
  47dd68:	38 5e 6c             	cmp    BYTE PTR [esi+0x6c],bl
  47dd6b:	0f 84 ef 01 00 00    	je     0x47df60
  47dd71:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
  47dd74:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  47dd78:	83 f8 ff             	cmp    eax,0xffffffff
  47dd7b:	b2 01                	mov    dl,0x1
  47dd7d:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  47dd81:	74 3b                	je     0x47ddbe
  47dd83:	8b 4e 20             	mov    ecx,DWORD PTR [esi+0x20]
  47dd86:	83 f9 ff             	cmp    ecx,0xffffffff
  47dd89:	75 0e                	jne    0x47dd99
  47dd8b:	03 c7                	add    eax,edi
  47dd8d:	c7 46 24 00 00 80 3f 	mov    DWORD PTR [esi+0x24],0x3f800000
  47dd94:	89 46 20             	mov    DWORD PTR [esi+0x20],eax
  47dd97:	eb 25                	jmp    0x47ddbe
  47dd99:	3b f9                	cmp    edi,ecx
  47dd9b:	7e 07                	jle    0x47dda4
  47dd9d:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
  47dda0:	32 d2                	xor    dl,dl
  47dda2:	eb 1a                	jmp    0x47ddbe
  47dda4:	3b c3                	cmp    eax,ebx
  47dda6:	7e 13                	jle    0x47ddbb
  47dda8:	2b cf                	sub    ecx,edi
  47ddaa:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47ddae:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47ddb2:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47ddb6:	d9 5e 24             	fstp   DWORD PTR [esi+0x24]
  47ddb9:	eb 03                	jmp    0x47ddbe
  47ddbb:	89 5e 24             	mov    DWORD PTR [esi+0x24],ebx
  47ddbe:	3a d3                	cmp    dl,bl
  47ddc0:	88 56 28             	mov    BYTE PTR [esi+0x28],dl
  47ddc3:	75 0a                	jne    0x47ddcf
  47ddc5:	88 5e 6c             	mov    BYTE PTR [esi+0x6c],bl
  47ddc8:	5f                   	pop    edi
  47ddc9:	5e                   	pop    esi
  47ddca:	5b                   	pop    ebx
  47ddcb:	59                   	pop    ecx
  47ddcc:	c2 08 00             	ret    0x8
  47ddcf:	8a 46 79             	mov    al,BYTE PTR [esi+0x79]
  47ddd2:	b2 01                	mov    dl,0x1
  47ddd4:	3a c3                	cmp    al,bl
  47ddd6:	0f 84 99 00 00 00    	je     0x47de75
  47dddc:	8b 8e 84 00 00 00    	mov    ecx,DWORD PTR [esi+0x84]
  47dde2:	83 f9 ff             	cmp    ecx,0xffffffff
  47dde5:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  47dde9:	74 4d                	je     0x47de38
  47ddeb:	8b 86 88 00 00 00    	mov    eax,DWORD PTR [esi+0x88]
  47ddf1:	83 f8 ff             	cmp    eax,0xffffffff
  47ddf4:	75 14                	jne    0x47de0a
  47ddf6:	03 cf                	add    ecx,edi
  47ddf8:	c7 86 8c 00 00 00 00 	mov    DWORD PTR [esi+0x8c],0x3f800000
  47ddff:	00 80 3f 
  47de02:	89 8e 88 00 00 00    	mov    DWORD PTR [esi+0x88],ecx
  47de08:	eb 2e                	jmp    0x47de38
  47de0a:	3b f8                	cmp    edi,eax
  47de0c:	7e 0a                	jle    0x47de18
  47de0e:	89 9e 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],ebx
  47de14:	32 d2                	xor    dl,dl
  47de16:	eb 20                	jmp    0x47de38
  47de18:	3b cb                	cmp    ecx,ebx
  47de1a:	7e 16                	jle    0x47de32
  47de1c:	2b c7                	sub    eax,edi
  47de1e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47de22:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47de26:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47de2a:	d9 9e 8c 00 00 00    	fstp   DWORD PTR [esi+0x8c]
  47de30:	eb 06                	jmp    0x47de38
  47de32:	89 9e 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],ebx
  47de38:	3a d3                	cmp    dl,bl
  47de3a:	88 96 90 00 00 00    	mov    BYTE PTR [esi+0x90],dl
  47de40:	75 03                	jne    0x47de45
  47de42:	88 5e 79             	mov    BYTE PTR [esi+0x79],bl
  47de45:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47de4b:	d8 a6 8c 00 00 00    	fsub   DWORD PTR [esi+0x8c]
  47de51:	d8 8e 80 00 00 00    	fmul   DWORD PTR [esi+0x80]
  47de57:	d9 46 7c             	fld    DWORD PTR [esi+0x7c]
  47de5a:	d8 8e 8c 00 00 00    	fmul   DWORD PTR [esi+0x8c]
  47de60:	de c1                	faddp  st(1),st
  47de62:	dc 0d 28 e3 64 00    	fmul   QWORD PTR ds:0x64e328
  47de68:	e8 b3 cc 18 00       	call   0x60ab20
  47de6d:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
  47de70:	e9 87 00 00 00       	jmp    0x47defc
  47de75:	8b 8e d0 00 00 00    	mov    ecx,DWORD PTR [esi+0xd0]
  47de7b:	83 f9 ff             	cmp    ecx,0xffffffff
  47de7e:	89 4c 24 0c          	mov    DWORD PTR [esp+0xc],ecx
  47de82:	74 4d                	je     0x47ded1
  47de84:	8b 86 d4 00 00 00    	mov    eax,DWORD PTR [esi+0xd4]
  47de8a:	83 f8 ff             	cmp    eax,0xffffffff
  47de8d:	75 14                	jne    0x47dea3
  47de8f:	03 cf                	add    ecx,edi
  47de91:	c7 86 d8 00 00 00 00 	mov    DWORD PTR [esi+0xd8],0x3f800000
  47de98:	00 80 3f 
  47de9b:	89 8e d4 00 00 00    	mov    DWORD PTR [esi+0xd4],ecx
  47dea1:	eb 2e                	jmp    0x47ded1
  47dea3:	3b f8                	cmp    edi,eax
  47dea5:	7e 0a                	jle    0x47deb1
  47dea7:	89 9e d8 00 00 00    	mov    DWORD PTR [esi+0xd8],ebx
  47dead:	32 d2                	xor    dl,dl
  47deaf:	eb 20                	jmp    0x47ded1
  47deb1:	3b cb                	cmp    ecx,ebx
  47deb3:	7e 16                	jle    0x47decb
  47deb5:	2b c7                	sub    eax,edi
  47deb7:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47debb:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47debf:	da 74 24 0c          	fidiv  DWORD PTR [esp+0xc]
  47dec3:	d9 9e d8 00 00 00    	fstp   DWORD PTR [esi+0xd8]
  47dec9:	eb 06                	jmp    0x47ded1
  47decb:	89 9e d8 00 00 00    	mov    DWORD PTR [esi+0xd8],ebx
  47ded1:	3a d3                	cmp    dl,bl
  47ded3:	88 96 dc 00 00 00    	mov    BYTE PTR [esi+0xdc],dl
  47ded9:	75 21                	jne    0x47defc
  47dedb:	d9 86 bc 00 00 00    	fld    DWORD PTR [esi+0xbc]
  47dee1:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  47dee7:	c6 46 79 01          	mov    BYTE PTR [esi+0x79],0x1
  47deeb:	e8 30 cc 18 00       	call   0x60ab20
  47def0:	50                   	push   eax
  47def1:	8d 8e 84 00 00 00    	lea    ecx,[esi+0x84]
  47def7:	e8 b4 62 f8 ff       	call   0x4041b0
