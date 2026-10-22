
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004ccc8c <.text+0xcbc8c>:
  4ccc8c:	8b cd                	mov    ecx,ebp
  4ccc8e:	e8 7d 3a 00 00       	call   0x4d0710
  4ccc93:	db 84 24 a4 00 00 00 	fild   DWORD PTR [esp+0xa4]
  4ccc9a:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4ccca0:	de c1                	faddp  st(1),st
  4ccca2:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
  4ccca6:	d8 9d 3c 01 00 00    	fcomp  DWORD PTR [ebp+0x13c]
  4cccac:	df e0                	fnstsw ax
  4cccae:	f6 c4 41             	test   ah,0x41
  4cccb1:	75 33                	jne    0x4ccce6
  4cccb3:	8b 8d 3c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x13c]
  4cccb9:	8b 94 24 a4 00 00 00 	mov    edx,DWORD PTR [esp+0xa4]
  4cccc0:	8b c1                	mov    eax,ecx
  4cccc2:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4cccc6:	52                   	push   edx
  4cccc7:	50                   	push   eax
  4cccc8:	8b cd                	mov    ecx,ebp
  4cccca:	e8 c1 3d 00 00       	call   0x4d0a90
  4ccccf:	84 c0                	test   al,al
  4cccd1:	0f 84 eb 02 00 00    	je     0x4ccfc2
  4cccd7:	c7 85 6c 01 00 00 05 	mov    DWORD PTR [ebp+0x16c],0x5
  4cccde:	00 00 00 
  4ccce1:	e9 dc 02 00 00       	jmp    0x4ccfc2
  4ccce6:	8b 8c 24 a4 00 00 00 	mov    ecx,DWORD PTR [esp+0xa4]
  4ccced:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  4cccf1:	51                   	push   ecx
  4cccf2:	52                   	push   edx
  4cccf3:	8b cd                	mov    ecx,ebp
  4cccf5:	e8 96 3d 00 00       	call   0x4d0a90
  4cccfa:	e9 c3 02 00 00       	jmp    0x4ccfc2
  4cccff:	8b 85 84 01 00 00    	mov    eax,DWORD PTR [ebp+0x184]
  4ccd05:	39 70 44             	cmp    DWORD PTR [eax+0x44],esi
  4ccd08:	74 0c                	je     0x4ccd16
  4ccd0a:	68 e8 96 6b 00       	push   0x6b96e8
  4ccd0f:	8b cd                	mov    ecx,ebp
  4ccd11:	e8 ea 86 03 00       	call   0x505400
  4ccd16:	8b cd                	mov    ecx,ebp
  4ccd18:	e8 a3 10 00 00       	call   0x4cddc0
  4ccd1d:	8b 8c 24 a0 00 00 00 	mov    ecx,DWORD PTR [esp+0xa0]
  4ccd24:	c7 85 6c 01 00 00 06 	mov    DWORD PTR [ebp+0x16c],0x6
  4ccd2b:	00 00 00 
  4ccd2e:	89 8d 78 01 00 00    	mov    DWORD PTR [ebp+0x178],ecx
  4ccd34:	e9 89 02 00 00       	jmp    0x4ccfc2
