
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00435aa9 <.text+0x34aa9>:
  435aa9:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  435aab:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  435aae:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  435ab1:	6a 08                	push   0x8
  435ab3:	6a 00                	push   0x0
  435ab5:	89 4c 24 70          	mov    DWORD PTR [esp+0x70],ecx
  435ab9:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  435abf:	68 40 f9 68 00       	push   0x68f940
  435ac4:	68 18 f9 68 00       	push   0x68f918
  435ac9:	6a 00                	push   0x0
  435acb:	51                   	push   ecx
  435acc:	89 94 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edx
  435ad3:	89 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],eax
  435ada:	e8 13 4c 1d 00       	call   0x60a6f2
  435adf:	83 c4 14             	add    esp,0x14
  435ae2:	8b c8                	mov    ecx,eax
  435ae4:	e8 27 44 00 00       	call   0x439f10
  435ae9:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  435aef:	8a d8                	mov    bl,al
  435af1:	8b 11                	mov    edx,DWORD PTR [ecx]
  435af3:	ff 52 30             	call   DWORD PTR [edx+0x30]
  435af6:	84 c0                	test   al,al
  435af8:	74 33                	je     0x435b2d
  435afa:	84 db                	test   bl,bl
  435afc:	74 33                	je     0x435b31
  435afe:	56                   	push   esi
  435aff:	8b cd                	mov    ecx,ebp
  435b01:	e8 aa 0b 00 00       	call   0x4366b0
  435b06:	84 c0                	test   al,al
  435b08:	74 23                	je     0x435b2d
  435b0a:	8a 85 70 03 00 00    	mov    al,BYTE PTR [ebp+0x370]
  435b10:	84 c0                	test   al,al
  435b12:	75 19                	jne    0x435b2d
  435b14:	d9 85 88 03 00 00    	fld    DWORD PTR [ebp+0x388]
  435b1a:	d8 8d 94 01 00 00    	fmul   DWORD PTR [ebp+0x194]
  435b20:	c6 85 70 03 00 00 01 	mov    BYTE PTR [ebp+0x370],0x1
  435b27:	d9 9d 78 01 00 00    	fstp   DWORD PTR [ebp+0x178]
  435b2d:	84 db                	test   bl,bl
  435b2f:	75 07                	jne    0x435b38
  435b31:	c6                   	.byte 0xc6
  435b32:	85                   	.byte 0x85
  435b33:	70                   	.byte 0x70
