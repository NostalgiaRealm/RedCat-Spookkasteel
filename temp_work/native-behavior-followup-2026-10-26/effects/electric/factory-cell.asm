
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0058da3c <.text+0x18ca3c>:
  58da3c:	8a 85 74 01 00 00    	mov    al,BYTE PTR [ebp+0x174]
  58da42:	84 c0                	test   al,al
  58da44:	0f 84 87 01 00 00    	je     0x58dbd1
  58da4a:	e8 21 9f fc ff       	call   0x557970
  58da4f:	8b f0                	mov    esi,eax
  58da51:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  58da54:	3d 00 00 00 80       	cmp    eax,0x80000000
  58da59:	75 18                	jne    0x58da73
  58da5b:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  58da5e:	3b c7                	cmp    eax,edi
  58da60:	75 05                	jne    0x58da67
  58da62:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  58da67:	50                   	push   eax
  58da68:	e8 a3 d4 07 00       	call   0x60af10
  58da6d:	83 c4 04             	add    esp,0x4
  58da70:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  58da73:	83 f8 03             	cmp    eax,0x3
  58da76:	0f 85 55 01 00 00    	jne    0x58dbd1
  58da7c:	e8 1f ca 07 00       	call   0x60a4a0
  58da81:	99                   	cdq
  58da82:	b9 10 27 00 00       	mov    ecx,0x2710
  58da87:	f7 f9                	idiv   ecx
  58da89:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  58da8d:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  58da91:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  58da97:	d8 05 98 bb 64 00    	fadd   DWORD PTR ds:0x64bb98
  58da9d:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  58daa1:	e8 fa c9 07 00       	call   0x60a4a0
  58daa6:	25 01 00 00 80       	and    eax,0x80000001
  58daab:	79 05                	jns    0x58dab2
  58daad:	48                   	dec    eax
  58daae:	83 c8 fe             	or     eax,0xfffffffe
  58dab1:	40                   	inc    eax
  58dab2:	f7 d8                	neg    eax
  58dab4:	1b c0                	sbb    eax,eax
  58dab6:	24 fe                	and    al,0xfe
  58dab8:	40                   	inc    eax
  58dab9:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  58dabd:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  58dac1:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
  58dac5:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  58dac9:	e8 d2 c9 07 00       	call   0x60a4a0
  58dace:	99                   	cdq
  58dacf:	b9 10 27 00 00       	mov    ecx,0x2710
  58dad4:	f7 f9                	idiv   ecx
  58dad6:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  58dada:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  58dade:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  58dae4:	d8 05 00 d8 64 00    	fadd   DWORD PTR ds:0x64d800
  58daea:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  58daee:	e8 ad c9 07 00       	call   0x60a4a0
  58daf3:	99                   	cdq
  58daf4:	b9 10 27 00 00       	mov    ecx,0x2710
  58daf9:	68 00 00 00 3f       	push   0x3f000000
  58dafe:	f7 f9                	idiv   ecx
  58db00:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  58db04:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  58db08:	8d 54 24 30          	lea    edx,[esp+0x30]
  58db0c:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  58db10:	d8 0d fc d7 64 00    	fmul   DWORD PTR ds:0x64d7fc
  58db16:	d8 25 f8 d7 64 00    	fsub   DWORD PTR ds:0x64d7f8
  58db1c:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  58db20:	e8 7b 54 02 00       	call   0x5b2fa0
  58db25:	68 8c 00 00 00       	push   0x8c
  58db2a:	e8 86 c5 07 00       	call   0x60a0b5
  58db2f:	8b f0                	mov    esi,eax
  58db31:	83 c4 04             	add    esp,0x4
  58db34:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  58db38:	3b f7                	cmp    esi,edi
  58db3a:	c7 44 24 78 0d 00 00 	mov    DWORD PTR [esp+0x78],0xd
  58db41:	00 
  58db42:	74 4c                	je     0x58db90
  58db44:	6a 00                	push   0x0
  58db46:	8b ce                	mov    ecx,esi
  58db48:	8d 7d 5c             	lea    edi,[ebp+0x5c]
  58db4b:	e8 80 fc f1 ff       	call   0x4ad7d0
  58db50:	8a 17                	mov    dl,BYTE PTR [edi]
  58db52:	8d 5e 50             	lea    ebx,[esi+0x50]
  58db55:	6a 00                	push   0x0
  58db57:	8b cb                	mov    ecx,ebx
  58db59:	c6 44 24 7c 0e       	mov    BYTE PTR [esp+0x7c],0xe
  58db5e:	88 13                	mov    BYTE PTR [ebx],dl
  58db60:	e8 3b 65 e7 ff       	call   0x4040a0
  58db65:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  58db6a:	8b cb                	mov    ecx,ebx
  58db6c:	50                   	push   eax
  58db6d:	6a 00                	push   0x0
  58db6f:	57                   	push   edi
  58db70:	e8 8b f0 e7 ff       	call   0x40cc00
  58db75:	c7 86 84 00 00 00 cd 	mov    DWORD PTR [esi+0x84],0x411ccccd
  58db7c:	cc 1c 41 
  58db7f:	c6 86 88 00 00 00 00 	mov    BYTE PTR [esi+0x88],0x0
  58db86:	c7 06 dc d7 64 00    	mov    DWORD PTR [esi],0x64d7dc
  58db8c:	33 ff                	xor    edi,edi
  58db8e:	eb 02                	jmp    0x58db92
  58db90:	33 f6                	xor    esi,esi
  58db92:	56                   	push   esi
  58db93:	8b cd                	mov    ecx,ebp
  58db95:	c7 44 24 7c ff ff ff 	mov    DWORD PTR [esp+0x7c],0xffffffff
  58db9c:	ff 
  58db9d:	e8 3e f5 f1 ff       	call   0x4ad0e0
  58dba2:	8b c8                	mov    ecx,eax
  58dba4:	e8 37 f7 f1 ff       	call   0x4ad2e0
  58dba9:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  58dbad:	8d 4e 78             	lea    ecx,[esi+0x78]
  58dbb0:	68 bb 02 00 00       	push   0x2bb
  58dbb5:	68 2c 01 00 00       	push   0x12c
  58dbba:	89 11                	mov    DWORD PTR [ecx],edx
  58dbbc:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  58dbc0:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  58dbc3:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  58dbc7:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  58dbca:	8b ce                	mov    ecx,esi
  58dbcc:	e8 cf fd f1 ff       	call   0x4ad9a0
