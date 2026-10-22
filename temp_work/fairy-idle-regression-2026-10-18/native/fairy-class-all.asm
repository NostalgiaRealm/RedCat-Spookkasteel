
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00478a00 <.text+0x77a00>:
  478a00:	6a ff                	push   0xffffffff
  478a02:	68 8b 8a 62 00       	push   0x628a8b
  478a07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  478a0d:	50                   	push   eax
  478a0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  478a15:	83 ec 3c             	sub    esp,0x3c
  478a18:	53                   	push   ebx
  478a19:	55                   	push   ebp
  478a1a:	56                   	push   esi
  478a1b:	57                   	push   edi
  478a1c:	8b 7c 24 5c          	mov    edi,DWORD PTR [esp+0x5c]
  478a20:	8b e9                	mov    ebp,ecx
  478a22:	33 f6                	xor    esi,esi
  478a24:	57                   	push   edi
  478a25:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  478a29:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  478a2d:	e8 7e 92 08 00       	call   0x501cb0
  478a32:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  478a36:	89 74 24 54          	mov    DWORD PTR [esp+0x54],esi
  478a3a:	89 85 f8 00 00 00    	mov    DWORD PTR [ebp+0xf8],eax
  478a40:	89 b5 fc 00 00 00    	mov    DWORD PTR [ebp+0xfc],esi
  478a46:	89 b5 00 01 00 00    	mov    DWORD PTR [ebp+0x100],esi
  478a4c:	89 b5 04 01 00 00    	mov    DWORD PTR [ebp+0x104],esi
  478a52:	89 b5 08 01 00 00    	mov    DWORD PTR [ebp+0x108],esi
  478a58:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  478a5c:	c6 44 24 54 04       	mov    BYTE PTR [esp+0x54],0x4
  478a61:	51                   	push   ecx
  478a62:	8b cd                	mov    ecx,ebp
  478a64:	e8 a7 0a 00 00       	call   0x479510
  478a69:	8b 08                	mov    ecx,DWORD PTR [eax]
  478a6b:	8d 95 0c 01 00 00    	lea    edx,[ebp+0x10c]
  478a71:	8d 9d 74 03 00 00    	lea    ebx,[ebp+0x374]
  478a77:	55                   	push   ebp
  478a78:	89 0a                	mov    DWORD PTR [edx],ecx
  478a7a:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  478a7d:	57                   	push   edi
  478a7e:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  478a81:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  478a84:	8d 8d 8c 03 00 00    	lea    ecx,[ebp+0x38c]
  478a8a:	89 33                	mov    DWORD PTR [ebx],esi
  478a8c:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  478a8f:	e8 bc 4e 00 00       	call   0x47d950
  478a94:	8d bd 48 05 00 00    	lea    edi,[ebp+0x548]
  478a9a:	be 32 00 00 00       	mov    esi,0x32
  478a9f:	8b cf                	mov    ecx,edi
  478aa1:	e8 0a 4f 00 00       	call   0x47d9b0
  478aa6:	81 c7 44 01 00 00    	add    edi,0x144
  478aac:	4e                   	dec    esi
  478aad:	75 f0                	jne    0x478a9f
  478aaf:	8d bd 90 44 00 00    	lea    edi,[ebp+0x4490]
  478ab5:	be 05 00 00 00       	mov    esi,0x5
  478aba:	8b cf                	mov    ecx,edi
  478abc:	e8 ef 4e 00 00       	call   0x47d9b0
  478ac1:	81 c7 44 01 00 00    	add    edi,0x144
  478ac7:	4e                   	dec    esi
  478ac8:	75 f0                	jne    0x478aba
  478aca:	8d 8d e4 4a 00 00    	lea    ecx,[ebp+0x4ae4]
  478ad0:	6a ff                	push   0xffffffff
  478ad2:	e8 d9 b6 f8 ff       	call   0x4041b0
  478ad7:	8d 8d f4 4a 00 00    	lea    ecx,[ebp+0x4af4]
  478add:	6a ff                	push   0xffffffff
  478adf:	e8 cc b6 f8 ff       	call   0x4041b0
  478ae4:	8d 8d 04 4b 00 00    	lea    ecx,[ebp+0x4b04]
  478aea:	6a ff                	push   0xffffffff
  478aec:	e8 bf b6 f8 ff       	call   0x4041b0
  478af1:	b8 00 00 80 3f       	mov    eax,0x3f800000
  478af6:	33 ff                	xor    edi,edi
  478af8:	68 e0 ac 46 00       	push   0x46ace0
  478afd:	89 85 2c 4b 00 00    	mov    DWORD PTR [ebp+0x4b2c],eax
  478b03:	89 85 30 4b 00 00    	mov    DWORD PTR [ebp+0x4b30],eax
  478b09:	68 a0 ad 46 00       	push   0x46ada0
  478b0e:	c7 85 14 4b 00 00 fa 	mov    DWORD PTR [ebp+0x4b14],0xfa
  478b15:	00 00 00 
  478b18:	c7 85 18 4b 00 00 c4 	mov    DWORD PTR [ebp+0x4b18],0x9c4
  478b1f:	09 00 00 
  478b22:	c7 85 1c 4b 00 00 00 	mov    DWORD PTR [ebp+0x4b1c],0x42200000
  478b29:	00 20 42 
  478b2c:	c6 85 34 4b 00 00 01 	mov    BYTE PTR [ebp+0x4b34],0x1
  478b33:	c7 85 38 4b 00 00 00 	mov    DWORD PTR [ebp+0x4b38],0x41700000
  478b3a:	00 70 41 
  478b3d:	c7 85 3c 4b 00 00 00 	mov    DWORD PTR [ebp+0x4b3c],0x42480000
  478b44:	00 48 42 
  478b47:	89 bd 40 4b 00 00    	mov    DWORD PTR [ebp+0x4b40],edi
  478b4d:	c6 85 44 4b 00 00 00 	mov    BYTE PTR [ebp+0x4b44],0x0
  478b54:	8b 0d 68 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e268
  478b5a:	8d 85 58 4b 00 00    	lea    eax,[ebp+0x4b58]
  478b60:	6a 06                	push   0x6
  478b62:	6a 18                	push   0x18
  478b64:	50                   	push   eax
  478b65:	89 8d 48 4b 00 00    	mov    DWORD PTR [ebp+0x4b48],ecx
  478b6b:	c6 85 4c 4b 00 00 01 	mov    BYTE PTR [ebp+0x4b4c],0x1
  478b72:	89 bd 50 4b 00 00    	mov    DWORD PTR [ebp+0x4b50],edi
  478b78:	c6 85 54 4b 00 00 00 	mov    BYTE PTR [ebp+0x4b54],0x0
  478b7f:	e8 57 26 19 00       	call   0x60b1db
  478b84:	c6 44 24 54 05       	mov    BYTE PTR [esp+0x54],0x5
  478b89:	c6 85 e8 4b 00 00 00 	mov    BYTE PTR [ebp+0x4be8],0x0
  478b90:	c7 45 00 94 e2 64 00 	mov    DWORD PTR [ebp+0x0],0x64e294
  478b97:	8d 85 1c 01 00 00    	lea    eax,[ebp+0x11c]
  478b9d:	b9 04 00 00 00       	mov    ecx,0x4
  478ba2:	8b 15 84 e2 64 00    	mov    edx,DWORD PTR ds:0x64e284
  478ba8:	89 50 fc             	mov    DWORD PTR [eax-0x4],edx
  478bab:	8b 15 88 e2 64 00    	mov    edx,DWORD PTR ds:0x64e288
  478bb1:	89 10                	mov    DWORD PTR [eax],edx
  478bb3:	8b 15 84 e2 64 00    	mov    edx,DWORD PTR ds:0x64e284
  478bb9:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  478bbc:	83 c0 0c             	add    eax,0xc
  478bbf:	49                   	dec    ecx
  478bc0:	75 e0                	jne    0x478ba2
  478bc2:	8d 8d 20 4b 00 00    	lea    ecx,[ebp+0x4b20]
  478bc8:	e8 a3 a4 13 00       	call   0x5b3070
  478bcd:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  478bd3:	3b f7                	cmp    esi,edi
  478bd5:	75 07                	jne    0x478bde
  478bd7:	e8 a4 38 04 00       	call   0x4bc480
  478bdc:	8b f0                	mov    esi,eax
  478bde:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  478be4:	3d 00 00 00 80       	cmp    eax,0x80000000
  478be9:	75 1e                	jne    0x478c09
  478beb:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  478bf1:	3b c7                	cmp    eax,edi
  478bf3:	75 05                	jne    0x478bfa
  478bf5:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  478bfa:	50                   	push   eax
  478bfb:	e8 10 23 19 00       	call   0x60af10
  478c00:	83 c4 04             	add    esp,0x4
  478c03:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  478c09:	3b c7                	cmp    eax,edi
  478c0b:	0f 85 c2 03 00 00    	jne    0x478fd3
  478c11:	8b 74 24 5c          	mov    esi,DWORD PTR [esp+0x5c]
  478c15:	8d bd 48 05 00 00    	lea    edi,[ebp+0x548]
  478c1b:	c7 44 24 60 32 00 00 	mov    DWORD PTR [esp+0x60],0x32
  478c22:	00 
  478c23:	55                   	push   ebp
  478c24:	56                   	push   esi
  478c25:	8b cf                	mov    ecx,edi
  478c27:	e8 24 4f 00 00       	call   0x47db50
  478c2c:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  478c30:	81 c7 44 01 00 00    	add    edi,0x144
  478c36:	48                   	dec    eax
  478c37:	89 44 24 60          	mov    DWORD PTR [esp+0x60],eax
  478c3b:	75 e6                	jne    0x478c23
  478c3d:	8d bd 90 44 00 00    	lea    edi,[ebp+0x4490]
  478c43:	c7 44 24 5c 05 00 00 	mov    DWORD PTR [esp+0x5c],0x5
  478c4a:	00 
  478c4b:	55                   	push   ebp
  478c4c:	56                   	push   esi
  478c4d:	8b cf                	mov    ecx,edi
  478c4f:	e8 fc 4e 00 00       	call   0x47db50
  478c54:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  478c58:	81 c7 44 01 00 00    	add    edi,0x144
  478c5e:	48                   	dec    eax
  478c5f:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
  478c63:	75 e6                	jne    0x478c4b
  478c65:	8b 03                	mov    eax,DWORD PTR [ebx]
  478c67:	c7 44 24 1c 00 00 7f 	mov    DWORD PTR [esp+0x1c],0x437f0000
  478c6e:	43 
  478c6f:	85 c0                	test   eax,eax
  478c71:	c7 44 24 20 00 00 7f 	mov    DWORD PTR [esp+0x20],0x437f0000
  478c78:	43 
  478c79:	c7 44 24 24 00 00 c8 	mov    DWORD PTR [esp+0x24],0x41c80000
  478c80:	41 
  478c81:	c7 44 24 28 00 00 7f 	mov    DWORD PTR [esp+0x28],0x437f0000
  478c88:	43 
  478c89:	0f 84 90 00 00 00    	je     0x478d1f
  478c8f:	8a 44 24 5c          	mov    al,BYTE PTR [esp+0x5c]
  478c93:	6a 00                	push   0x0
  478c95:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478c99:	88 44 24 30          	mov    BYTE PTR [esp+0x30],al
  478c9d:	e8 fe b3 f8 ff       	call   0x4040a0
  478ca2:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  478ca7:	83 c9 ff             	or     ecx,0xffffffff
  478caa:	33 c0                	xor    eax,eax
  478cac:	6a 01                	push   0x1
  478cae:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  478cb0:	f7 d1                	not    ecx
  478cb2:	49                   	dec    ecx
  478cb3:	89 4c 24 60          	mov    DWORD PTR [esp+0x60],ecx
  478cb7:	51                   	push   ecx
  478cb8:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  478cbc:	e8 7f 8c f8 ff       	call   0x401940
  478cc1:	84 c0                	test   al,al
  478cc3:	74 27                	je     0x478cec
  478cc5:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  478cc9:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  478ccd:	8b c8                	mov    ecx,eax
  478ccf:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  478cd4:	8b d1                	mov    edx,ecx
  478cd6:	50                   	push   eax
  478cd7:	c1 e9 02             	shr    ecx,0x2
  478cda:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  478cdc:	8b ca                	mov    ecx,edx
  478cde:	83 e1 03             	and    ecx,0x3
  478ce1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  478ce3:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478ce7:	e8 a4 b4 f8 ff       	call   0x404190
  478cec:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  478cf0:	c6 44 24 54 06       	mov    BYTE PTR [esp+0x54],0x6
  478cf5:	50                   	push   eax
  478cf6:	68 88 00 00 00       	push   0x88
  478cfb:	68 10 30 69 00       	push   0x693010
  478d00:	68 54 2e 69 00       	push   0x692e54
  478d05:	e8 e6 7a 12 00       	call   0x5a07f0
  478d0a:	ff d0                	call   eax
  478d0c:	83 c4 10             	add    esp,0x10
  478d0f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  478d13:	c6 44 24 54 05       	mov    BYTE PTR [esp+0x54],0x5
  478d18:	6a 01                	push   0x1
  478d1a:	e8 81 b3 f8 ff       	call   0x4040a0
  478d1f:	68 f4 01 00 00       	push   0x1f4
  478d24:	e8 8c 13 19 00       	call   0x60a0b5
  478d29:	8b f0                	mov    esi,eax
  478d2b:	83 c4 04             	add    esp,0x4
  478d2e:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  478d32:	85 f6                	test   esi,esi
  478d34:	c6 44 24 54 07       	mov    BYTE PTR [esp+0x54],0x7
  478d39:	0f 84 9a 00 00 00    	je     0x478dd9
  478d3f:	8a 4c 24 5c          	mov    cl,BYTE PTR [esp+0x5c]
  478d43:	6a 00                	push   0x0
  478d45:	88 4c 24 30          	mov    BYTE PTR [esp+0x30],cl
  478d49:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478d4d:	e8 4e b3 f8 ff       	call   0x4040a0
  478d52:	bf 04 30 69 00       	mov    edi,0x693004
  478d57:	83 c9 ff             	or     ecx,0xffffffff
  478d5a:	33 c0                	xor    eax,eax
  478d5c:	6a 01                	push   0x1
  478d5e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  478d60:	f7 d1                	not    ecx
  478d62:	49                   	dec    ecx
  478d63:	89 4c 24 60          	mov    DWORD PTR [esp+0x60],ecx
  478d67:	51                   	push   ecx
  478d68:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  478d6c:	e8 cf 8b f8 ff       	call   0x401940
  478d71:	84 c0                	test   al,al
  478d73:	74 2b                	je     0x478da0
  478d75:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  478d79:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  478d7d:	8b c8                	mov    ecx,eax
  478d7f:	be 04 30 69 00       	mov    esi,0x693004
  478d84:	8b d1                	mov    edx,ecx
  478d86:	50                   	push   eax
  478d87:	c1 e9 02             	shr    ecx,0x2
  478d8a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  478d8c:	8b ca                	mov    ecx,edx
  478d8e:	83 e1 03             	and    ecx,0x3
  478d91:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  478d93:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478d97:	e8 f4 b3 f8 ff       	call   0x404190
  478d9c:	8b 74 24 60          	mov    esi,DWORD PTR [esp+0x60]
  478da0:	c7 44 24 10 01 00 00 	mov    DWORD PTR [esp+0x10],0x1
  478da7:	00 
  478da8:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  478dac:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  478db0:	50                   	push   eax
  478db1:	51                   	push   ecx
  478db2:	c6 44 24 5c 08       	mov    BYTE PTR [esp+0x5c],0x8
  478db7:	e8 e4 a5 08 00       	call   0x5033a0
  478dbc:	83 c4 08             	add    esp,0x8
  478dbf:	c7 44 24 10 03 00 00 	mov    DWORD PTR [esp+0x10],0x3
  478dc6:	00 
  478dc7:	50                   	push   eax
  478dc8:	8b ce                	mov    ecx,esi
  478dca:	c7 44 24 58 09 00 00 	mov    DWORD PTR [esp+0x58],0x9
  478dd1:	00 
  478dd2:	e8 c9 94 06 00       	call   0x4e22a0
  478dd7:	eb 02                	jmp    0x478ddb
  478dd9:	33 c0                	xor    eax,eax
  478ddb:	89 03                	mov    DWORD PTR [ebx],eax
  478ddd:	8a 44 24 10          	mov    al,BYTE PTR [esp+0x10]
  478de1:	a8 02                	test   al,0x2
  478de3:	c7 44 24 54 0a 00 00 	mov    DWORD PTR [esp+0x54],0xa
  478dea:	00 
  478deb:	74 16                	je     0x478e03
  478ded:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  478df1:	6a 01                	push   0x1
  478df3:	83 e1 fd             	and    ecx,0xfffffffd
  478df6:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  478dfa:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  478dfe:	e8 9d b2 f8 ff       	call   0x4040a0
  478e03:	8a 44 24 10          	mov    al,BYTE PTR [esp+0x10]
  478e07:	c7 44 24 54 05 00 00 	mov    DWORD PTR [esp+0x54],0x5
  478e0e:	00 
  478e0f:	a8 01                	test   al,0x1
  478e11:	74 16                	je     0x478e29
  478e13:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  478e17:	6a 01                	push   0x1
  478e19:	83 e1 fe             	and    ecx,0xfffffffe
  478e1c:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  478e20:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478e24:	e8 77 b2 f8 ff       	call   0x4040a0
  478e29:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e2b:	6a ff                	push   0xffffffff
  478e2d:	e8 0e a3 06 00       	call   0x4e3140
  478e32:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e34:	6a 00                	push   0x0
  478e36:	e8 25 a3 06 00       	call   0x4e3160
  478e3b:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e3d:	6a 00                	push   0x0
  478e3f:	e8 1c 9f 06 00       	call   0x4e2d60
  478e44:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e46:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  478e4a:	52                   	push   edx
  478e4b:	e8 40 a2 06 00       	call   0x4e3090
  478e50:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e52:	6a 00                	push   0x0
  478e54:	e8 77 a2 06 00       	call   0x4e30d0
  478e59:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e5b:	6a 00                	push   0x0
  478e5d:	e8 be a2 06 00       	call   0x4e3120
  478e62:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e64:	6a 00                	push   0x0
  478e66:	e8 95 a2 06 00       	call   0x4e3100
  478e6b:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478e6d:	6a 00                	push   0x0
  478e6f:	e8 dc 94 08 00       	call   0x502350
  478e74:	8b 03                	mov    eax,DWORD PTR [ebx]
  478e76:	53                   	push   ebx
  478e77:	50                   	push   eax
  478e78:	8b cd                	mov    ecx,ebp
  478e7a:	e8 11 0c 09 00       	call   0x509a90
  478e7f:	8d 9d 78 03 00 00    	lea    ebx,[ebp+0x378]
  478e85:	c7 44 24 5c 05 00 00 	mov    DWORD PTR [esp+0x5c],0x5
  478e8c:	00 
  478e8d:	6a 64                	push   0x64
  478e8f:	e8 21 12 19 00       	call   0x60a0b5
  478e94:	8b f0                	mov    esi,eax
  478e96:	83 c4 04             	add    esp,0x4
  478e99:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  478e9d:	85 f6                	test   esi,esi
  478e9f:	c6 44 24 54 0c       	mov    BYTE PTR [esp+0x54],0xc
  478ea4:	74 79                	je     0x478f1f
  478ea6:	8a 4c 24 5c          	mov    cl,BYTE PTR [esp+0x5c]
  478eaa:	6a 00                	push   0x0
  478eac:	88 4c 24 30          	mov    BYTE PTR [esp+0x30],cl
  478eb0:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478eb4:	e8 e7 b1 f8 ff       	call   0x4040a0
  478eb9:	bf f8 2f 69 00       	mov    edi,0x692ff8
  478ebe:	83 c9 ff             	or     ecx,0xffffffff
  478ec1:	33 c0                	xor    eax,eax
  478ec3:	6a 01                	push   0x1
  478ec5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  478ec7:	f7 d1                	not    ecx
  478ec9:	49                   	dec    ecx
  478eca:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
  478ece:	51                   	push   ecx
  478ecf:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  478ed3:	e8 68 8a f8 ff       	call   0x401940
  478ed8:	84 c0                	test   al,al
  478eda:	74 2b                	je     0x478f07
  478edc:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  478ee0:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  478ee4:	8b c8                	mov    ecx,eax
  478ee6:	be f8 2f 69 00       	mov    esi,0x692ff8
  478eeb:	8b d1                	mov    edx,ecx
  478eed:	50                   	push   eax
  478eee:	c1 e9 02             	shr    ecx,0x2
  478ef1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  478ef3:	8b ca                	mov    ecx,edx
  478ef5:	83 e1 03             	and    ecx,0x3
  478ef8:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  478efa:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478efe:	e8 8d b2 f8 ff       	call   0x404190
  478f03:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  478f07:	83 4c 24 10 04       	or     DWORD PTR [esp+0x10],0x4
  478f0c:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  478f10:	8b ce                	mov    ecx,esi
  478f12:	50                   	push   eax
  478f13:	c6 44 24 58 0d       	mov    BYTE PTR [esp+0x58],0xd
  478f18:	e8 23 dc 10 00       	call   0x586b40
  478f1d:	eb 02                	jmp    0x478f21
  478f1f:	33 c0                	xor    eax,eax
  478f21:	89 03                	mov    DWORD PTR [ebx],eax
  478f23:	8a 44 24 10          	mov    al,BYTE PTR [esp+0x10]
  478f27:	a8 04                	test   al,0x4
  478f29:	c7 44 24 54 05 00 00 	mov    DWORD PTR [esp+0x54],0x5
  478f30:	00 
  478f31:	74 16                	je     0x478f49
  478f33:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  478f37:	6a 01                	push   0x1
  478f39:	83 e1 fb             	and    ecx,0xfffffffb
  478f3c:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  478f40:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  478f44:	e8 57 b1 f8 ff       	call   0x4040a0
  478f49:	83 3b 00             	cmp    DWORD PTR [ebx],0x0
  478f4c:	74 71                	je     0x478fbf
  478f4e:	51                   	push   ecx
  478f4f:	8b cc                	mov    ecx,esp
  478f51:	89 64 24 64          	mov    DWORD PTR [esp+0x64],esp
  478f55:	68 d8 87 6b 00       	push   0x6b87d8
  478f5a:	51                   	push   ecx
  478f5b:	e8 a0 b2 fd ff       	call   0x454200
  478f60:	8b c8                	mov    ecx,eax
  478f62:	e8 99 48 00 00       	call   0x47d800
  478f67:	8b c8                	mov    ecx,eax
  478f69:	e8 c2 47 09 00       	call   0x50d730
  478f6e:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478f70:	e8 8b e1 10 00       	call   0x587100
  478f75:	8b 03                	mov    eax,DWORD PTR [ebx]
  478f77:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  478f7b:	83 c0 40             	add    eax,0x40
  478f7e:	89 10                	mov    DWORD PTR [eax],edx
  478f80:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  478f84:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  478f87:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  478f8b:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  478f8e:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  478f92:	89 48 0c             	mov    DWORD PTR [eax+0xc],ecx
  478f95:	8b 03                	mov    eax,DWORD PTR [ebx]
  478f97:	c7 40 60 00 00 c8 42 	mov    DWORD PTR [eax+0x60],0x42c80000
  478f9e:	8b 13                	mov    edx,DWORD PTR [ebx]
  478fa0:	c7 42 50 cd cc cc 3f 	mov    DWORD PTR [edx+0x50],0x3fcccccd
  478fa7:	8b 03                	mov    eax,DWORD PTR [ebx]
  478fa9:	c7 40 3c 8f c2 75 3f 	mov    DWORD PTR [eax+0x3c],0x3f75c28f
  478fb0:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  478fb2:	c7 41 58 20 03 00 00 	mov    DWORD PTR [ecx+0x58],0x320
  478fb9:	8b 03                	mov    eax,DWORD PTR [ebx]
  478fbb:	c6 40 39 01          	mov    BYTE PTR [eax+0x39],0x1
  478fbf:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  478fc3:	83 c3 04             	add    ebx,0x4
  478fc6:	48                   	dec    eax
  478fc7:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
  478fcb:	0f 85 bc fe ff ff    	jne    0x478e8d
  478fd1:	eb 22                	jmp    0x478ff5
  478fd3:	33 d2                	xor    edx,edx
  478fd5:	89 3b                	mov    DWORD PTR [ebx],edi
  478fd7:	89 95 78 03 00 00    	mov    DWORD PTR [ebp+0x378],edx
  478fdd:	89 95 7c 03 00 00    	mov    DWORD PTR [ebp+0x37c],edx
  478fe3:	89 95 80 03 00 00    	mov    DWORD PTR [ebp+0x380],edx
  478fe9:	89 95 84 03 00 00    	mov    DWORD PTR [ebp+0x384],edx
  478fef:	89 95 88 03 00 00    	mov    DWORD PTR [ebp+0x388],edx
  478ff5:	33 f6                	xor    esi,esi
  478ff7:	bf 06 00 00 00       	mov    edi,0x6
  478ffc:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
  479000:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  479004:	b3 10                	mov    bl,0x10
  479006:	8b 8d 58 4b 00 00    	mov    ecx,DWORD PTR [ebp+0x4b58]
  47900c:	c6 44 24 54 0f       	mov    BYTE PTR [esp+0x54],0xf
  479011:	3b ce                	cmp    ecx,esi
  479013:	74 15                	je     0x47902a
  479015:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  479018:	48                   	dec    eax
  479019:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47901c:	75 06                	jne    0x479024
  47901e:	56                   	push   esi
  47901f:	e8 9c 2f 13 00       	call   0x5abfc0
  479024:	89 b5 58 4b 00 00    	mov    DWORD PTR [ebp+0x4b58],esi
  47902a:	8b 8d 5c 4b 00 00    	mov    ecx,DWORD PTR [ebp+0x4b5c]
  479030:	88 5c 24 54          	mov    BYTE PTR [esp+0x54],bl
  479034:	3b ce                	cmp    ecx,esi
  479036:	74 15                	je     0x47904d
  479038:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47903b:	48                   	dec    eax
  47903c:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47903f:	75 06                	jne    0x479047
  479041:	56                   	push   esi
  479042:	e8 79 2f 13 00       	call   0x5abfc0
  479047:	89 b5 5c 4b 00 00    	mov    DWORD PTR [ebp+0x4b5c],esi
  47904d:	4f                   	dec    edi
  47904e:	c6 44 24 54 05       	mov    BYTE PTR [esp+0x54],0x5
  479053:	75 b1                	jne    0x479006
  479055:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  47905a:	8d 8d 60 4b 00 00    	lea    ecx,[ebp+0x4b60]
  479060:	50                   	push   eax
  479061:	6a 00                	push   0x0
  479063:	68 c8 87 6b 00       	push   0x6b87c8
  479068:	e8 93 3b f9 ff       	call   0x40cc00
  47906d:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  479073:	51                   	push   ecx
  479074:	6a 00                	push   0x0
  479076:	68 b8 87 6b 00       	push   0x6b87b8
  47907b:	8d 8d 78 4b 00 00    	lea    ecx,[ebp+0x4b78]
  479081:	e8 7a 3b f9 ff       	call   0x40cc00
  479086:	8b 0d b0 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b87b0
  47908c:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  479091:	8b d9                	mov    ebx,ecx
  479093:	8d bd 90 4b 00 00    	lea    edi,[ebp+0x4b90]
  479099:	3b c3                	cmp    eax,ebx
  47909b:	73 02                	jae    0x47909f
  47909d:	8b d8                	mov    ebx,eax
  47909f:	81 ff a8 87 6b 00    	cmp    edi,0x6b87a8
  4790a5:	75 19                	jne    0x4790c0
  4790a7:	50                   	push   eax
  4790a8:	53                   	push   ebx
  4790a9:	8b cf                	mov    ecx,edi
  4790ab:	e8 00 39 f9 ff       	call   0x40c9b0
  4790b0:	6a 00                	push   0x0
  4790b2:	6a 00                	push   0x0
  4790b4:	8b cf                	mov    ecx,edi
  4790b6:	e8 f5 38 f9 ff       	call   0x40c9b0
  4790bb:	e9 8e 00 00 00       	jmp    0x47914e
  4790c0:	85 db                	test   ebx,ebx
  4790c2:	76 4e                	jbe    0x479112
  4790c4:	3b d9                	cmp    ebx,ecx
  4790c6:	75 4a                	jne    0x479112
  4790c8:	a1 ac 87 6b 00       	mov    eax,ds:0x6b87ac
  4790cd:	85 c0                	test   eax,eax
  4790cf:	75 05                	jne    0x4790d6
  4790d1:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4790d6:	80 78 ff fe          	cmp    BYTE PTR [eax-0x1],0xfe
  4790da:	73 36                	jae    0x479112
  4790dc:	6a 01                	push   0x1
  4790de:	8b cf                	mov    ecx,edi
  4790e0:	e8 bb af f8 ff       	call   0x4040a0
  4790e5:	a1 ac 87 6b 00       	mov    eax,ds:0x6b87ac
  4790ea:	85 c0                	test   eax,eax
  4790ec:	75 05                	jne    0x4790f3
  4790ee:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4790f3:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  4790f6:	8b 15 b0 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87b0
  4790fc:	89 57 08             	mov    DWORD PTR [edi+0x8],edx
  4790ff:	8b 0d b4 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b87b4
  479105:	89 4f 0c             	mov    DWORD PTR [edi+0xc],ecx
  479108:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  47910b:	fe c1                	inc    cl
  47910d:	88 48 ff             	mov    BYTE PTR [eax-0x1],cl
  479110:	eb 3c                	jmp    0x47914e
  479112:	6a 01                	push   0x1
  479114:	53                   	push   ebx
  479115:	8b cf                	mov    ecx,edi
  479117:	e8 24 88 f8 ff       	call   0x401940
  47911c:	84 c0                	test   al,al
  47911e:	74 2e                	je     0x47914e
  479120:	8b 35 ac 87 6b 00    	mov    esi,DWORD PTR ds:0x6b87ac
  479126:	85 f6                	test   esi,esi
  479128:	75 05                	jne    0x47912f
  47912a:	be b4 a3 64 00       	mov    esi,0x64a3b4
  47912f:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
  479132:	8b cb                	mov    ecx,ebx
  479134:	8b d1                	mov    edx,ecx
  479136:	53                   	push   ebx
  479137:	c1 e9 02             	shr    ecx,0x2
  47913a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47913c:	8b ca                	mov    ecx,edx
  47913e:	83 e1 03             	and    ecx,0x3
  479141:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  479143:	8d 8d 90 4b 00 00    	lea    ecx,[ebp+0x4b90]
  479149:	e8 42 b0 f8 ff       	call   0x404190
  47914e:	8b 0d a0 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b87a0
  479154:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  479159:	8b d9                	mov    ebx,ecx
  47915b:	8d bd a8 4b 00 00    	lea    edi,[ebp+0x4ba8]
  479161:	3b c3                	cmp    eax,ebx
  479163:	73 02                	jae    0x479167
  479165:	8b d8                	mov    ebx,eax
  479167:	81 ff 98 87 6b 00    	cmp    edi,0x6b8798
  47916d:	75 19                	jne    0x479188
  47916f:	50                   	push   eax
  479170:	53                   	push   ebx
  479171:	8b cf                	mov    ecx,edi
  479173:	e8 38 38 f9 ff       	call   0x40c9b0
  479178:	6a 00                	push   0x0
  47917a:	6a 00                	push   0x0
  47917c:	8b cf                	mov    ecx,edi
  47917e:	e8 2d 38 f9 ff       	call   0x40c9b0
  479183:	e9 92 00 00 00       	jmp    0x47921a
  479188:	85 db                	test   ebx,ebx
  47918a:	76 4e                	jbe    0x4791da
  47918c:	3b d9                	cmp    ebx,ecx
  47918e:	75 4a                	jne    0x4791da
  479190:	a1 9c 87 6b 00       	mov    eax,ds:0x6b879c
  479195:	85 c0                	test   eax,eax
  479197:	75 05                	jne    0x47919e
  479199:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47919e:	80 78 ff fe          	cmp    BYTE PTR [eax-0x1],0xfe
  4791a2:	73 36                	jae    0x4791da
  4791a4:	6a 01                	push   0x1
  4791a6:	8b cf                	mov    ecx,edi
  4791a8:	e8 f3 ae f8 ff       	call   0x4040a0
  4791ad:	a1 9c 87 6b 00       	mov    eax,ds:0x6b879c
  4791b2:	85 c0                	test   eax,eax
  4791b4:	75 05                	jne    0x4791bb
  4791b6:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4791bb:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  4791be:	8b 0d a0 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b87a0
  4791c4:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
  4791c7:	8b 15 a4 87 6b 00    	mov    edx,DWORD PTR ds:0x6b87a4
  4791cd:	89 57 0c             	mov    DWORD PTR [edi+0xc],edx
  4791d0:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  4791d3:	fe c1                	inc    cl
  4791d5:	88 48 ff             	mov    BYTE PTR [eax-0x1],cl
  4791d8:	eb 40                	jmp    0x47921a
  4791da:	6a 01                	push   0x1
  4791dc:	53                   	push   ebx
  4791dd:	8b cf                	mov    ecx,edi
  4791df:	e8 5c 87 f8 ff       	call   0x401940
  4791e4:	84 c0                	test   al,al
  4791e6:	74 32                	je     0x47921a
  4791e8:	8b 35 9c 87 6b 00    	mov    esi,DWORD PTR ds:0x6b879c
  4791ee:	85 f6                	test   esi,esi
  4791f0:	75 05                	jne    0x4791f7
  4791f2:	be b4 a3 64 00       	mov    esi,0x64a3b4
  4791f7:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
  4791fa:	8b cb                	mov    ecx,ebx
  4791fc:	8b c1                	mov    eax,ecx
  4791fe:	c1 e9 02             	shr    ecx,0x2
  479201:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  479203:	8b c8                	mov    ecx,eax
  479205:	83 e1 03             	and    ecx,0x3
  479208:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  47920a:	8b 8d ac 4b 00 00    	mov    ecx,DWORD PTR [ebp+0x4bac]
  479210:	89 9d b0 4b 00 00    	mov    DWORD PTR [ebp+0x4bb0],ebx
  479216:	c6 04 0b 00          	mov    BYTE PTR [ebx+ecx*1],0x0
  47921a:	8b 0d 90 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b8790
  479220:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  479225:	8b d9                	mov    ebx,ecx
  479227:	8d bd c0 4b 00 00    	lea    edi,[ebp+0x4bc0]
  47922d:	3b c3                	cmp    eax,ebx
  47922f:	73 02                	jae    0x479233
  479231:	8b d8                	mov    ebx,eax
  479233:	81 ff 88 87 6b 00    	cmp    edi,0x6b8788
  479239:	75 19                	jne    0x479254
  47923b:	50                   	push   eax
  47923c:	53                   	push   ebx
  47923d:	8b cf                	mov    ecx,edi
  47923f:	e8 6c 37 f9 ff       	call   0x40c9b0
  479244:	6a 00                	push   0x0
  479246:	6a 00                	push   0x0
  479248:	8b cf                	mov    ecx,edi
  47924a:	e8 61 37 f9 ff       	call   0x40c9b0
  47924f:	e9 92 00 00 00       	jmp    0x4792e6
  479254:	85 db                	test   ebx,ebx
  479256:	76 4e                	jbe    0x4792a6
  479258:	3b d9                	cmp    ebx,ecx
  47925a:	75 4a                	jne    0x4792a6
  47925c:	a1 8c 87 6b 00       	mov    eax,ds:0x6b878c
  479261:	85 c0                	test   eax,eax
  479263:	75 05                	jne    0x47926a
  479265:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47926a:	80 78 ff fe          	cmp    BYTE PTR [eax-0x1],0xfe
  47926e:	73 36                	jae    0x4792a6
  479270:	6a 01                	push   0x1
  479272:	8b cf                	mov    ecx,edi
  479274:	e8 27 ae f8 ff       	call   0x4040a0
  479279:	a1 8c 87 6b 00       	mov    eax,ds:0x6b878c
  47927e:	85 c0                	test   eax,eax
  479280:	75 05                	jne    0x479287
  479282:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  479287:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  47928a:	8b 15 90 87 6b 00    	mov    edx,DWORD PTR ds:0x6b8790
  479290:	89 57 08             	mov    DWORD PTR [edi+0x8],edx
  479293:	8b 0d 94 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b8794
  479299:	89 4f 0c             	mov    DWORD PTR [edi+0xc],ecx
  47929c:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  47929f:	fe c1                	inc    cl
  4792a1:	88 48 ff             	mov    BYTE PTR [eax-0x1],cl
  4792a4:	eb 40                	jmp    0x4792e6
  4792a6:	6a 01                	push   0x1
  4792a8:	53                   	push   ebx
  4792a9:	8b cf                	mov    ecx,edi
  4792ab:	e8 90 86 f8 ff       	call   0x401940
  4792b0:	84 c0                	test   al,al
  4792b2:	74 32                	je     0x4792e6
  4792b4:	8b 35 8c 87 6b 00    	mov    esi,DWORD PTR ds:0x6b878c
  4792ba:	85 f6                	test   esi,esi
  4792bc:	75 05                	jne    0x4792c3
  4792be:	be b4 a3 64 00       	mov    esi,0x64a3b4
  4792c3:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
  4792c6:	8b cb                	mov    ecx,ebx
  4792c8:	8b d1                	mov    edx,ecx
  4792ca:	c1 e9 02             	shr    ecx,0x2
  4792cd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4792cf:	8b ca                	mov    ecx,edx
  4792d1:	83 e1 03             	and    ecx,0x3
  4792d4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4792d6:	8b 85 c4 4b 00 00    	mov    eax,DWORD PTR [ebp+0x4bc4]
  4792dc:	89 9d c8 4b 00 00    	mov    DWORD PTR [ebp+0x4bc8],ebx
  4792e2:	c6 04 03 00          	mov    BYTE PTR [ebx+eax*1],0x0
  4792e6:	8b 0d 80 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b8780
  4792ec:	a1 a8 ab 64 00       	mov    eax,ds:0x64aba8
  4792f1:	8b f9                	mov    edi,ecx
  4792f3:	8d 9d d8 4b 00 00    	lea    ebx,[ebp+0x4bd8]
  4792f9:	3b c7                	cmp    eax,edi
  4792fb:	89 7c 24 5c          	mov    DWORD PTR [esp+0x5c],edi
  4792ff:	73 06                	jae    0x479307
  479301:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
  479305:	8b f8                	mov    edi,eax
  479307:	81 fb 78 87 6b 00    	cmp    ebx,0x6b8778
  47930d:	75 19                	jne    0x479328
  47930f:	50                   	push   eax
  479310:	57                   	push   edi
  479311:	8b cb                	mov    ecx,ebx
  479313:	e8 98 36 f9 ff       	call   0x40c9b0
  479318:	6a 00                	push   0x0
  47931a:	6a 00                	push   0x0
  47931c:	8b cb                	mov    ecx,ebx
  47931e:	e8 8d 36 f9 ff       	call   0x40c9b0
  479323:	e9 90 00 00 00       	jmp    0x4793b8
  479328:	85 ff                	test   edi,edi
  47932a:	76 4e                	jbe    0x47937a
  47932c:	3b f9                	cmp    edi,ecx
  47932e:	75 4a                	jne    0x47937a
  479330:	a1 7c 87 6b 00       	mov    eax,ds:0x6b877c
  479335:	85 c0                	test   eax,eax
  479337:	75 05                	jne    0x47933e
  479339:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47933e:	80 78 ff fe          	cmp    BYTE PTR [eax-0x1],0xfe
  479342:	73 36                	jae    0x47937a
  479344:	6a 01                	push   0x1
  479346:	8b cb                	mov    ecx,ebx
  479348:	e8 53 ad f8 ff       	call   0x4040a0
  47934d:	a1 7c 87 6b 00       	mov    eax,ds:0x6b877c
  479352:	85 c0                	test   eax,eax
  479354:	75 05                	jne    0x47935b
  479356:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47935b:	89 43 04             	mov    DWORD PTR [ebx+0x4],eax
  47935e:	8b 0d 80 87 6b 00    	mov    ecx,DWORD PTR ds:0x6b8780
  479364:	89 4b 08             	mov    DWORD PTR [ebx+0x8],ecx
  479367:	8b 15 84 87 6b 00    	mov    edx,DWORD PTR ds:0x6b8784
  47936d:	89 53 0c             	mov    DWORD PTR [ebx+0xc],edx
  479370:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  479373:	fe c1                	inc    cl
  479375:	88 48 ff             	mov    BYTE PTR [eax-0x1],cl
  479378:	eb 3e                	jmp    0x4793b8
  47937a:	6a 01                	push   0x1
  47937c:	57                   	push   edi
  47937d:	8b cb                	mov    ecx,ebx
  47937f:	e8 bc 85 f8 ff       	call   0x401940
  479384:	84 c0                	test   al,al
  479386:	74 30                	je     0x4793b8
  479388:	8b 35 7c 87 6b 00    	mov    esi,DWORD PTR ds:0x6b877c
  47938e:	85 f6                	test   esi,esi
  479390:	75 05                	jne    0x479397
  479392:	be b4 a3 64 00       	mov    esi,0x64a3b4
  479397:	8b cf                	mov    ecx,edi
  479399:	8b 7b 04             	mov    edi,DWORD PTR [ebx+0x4]
  47939c:	8b c1                	mov    eax,ecx
  47939e:	c1 e9 02             	shr    ecx,0x2
  4793a1:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4793a3:	8b c8                	mov    ecx,eax
  4793a5:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  4793a9:	83 e1 03             	and    ecx,0x3
  4793ac:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4793ae:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  4793b1:	89 43 08             	mov    DWORD PTR [ebx+0x8],eax
  4793b4:	c6 04 08 00          	mov    BYTE PTR [eax+ecx*1],0x0
  4793b8:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  4793bc:	5f                   	pop    edi
  4793bd:	8b c5                	mov    eax,ebp
  4793bf:	5e                   	pop    esi
  4793c0:	5d                   	pop    ebp
  4793c1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4793c8:	5b                   	pop    ebx
  4793c9:	83 c4 48             	add    esp,0x48
  4793cc:	c2 08 00             	ret    0x8
  4793cf:	90                   	nop
  4793d0:	56                   	push   esi
  4793d1:	8b f1                	mov    esi,ecx
  4793d3:	e8 18 00 00 00       	call   0x4793f0
  4793d8:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  4793dd:	74 09                	je     0x4793e8
  4793df:	56                   	push   esi
  4793e0:	e8 0b 52 18 00       	call   0x5fe5f0
  4793e5:	83 c4 04             	add    esp,0x4
  4793e8:	8b c6                	mov    eax,esi
  4793ea:	5e                   	pop    esi
  4793eb:	c2 04 00             	ret    0x4
  4793ee:	90                   	nop
  4793ef:	90                   	nop
  4793f0:	6a ff                	push   0xffffffff
  4793f2:	68 f8 8a 62 00       	push   0x628af8
  4793f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4793fd:	50                   	push   eax
  4793fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  479405:	51                   	push   ecx
  479406:	53                   	push   ebx
  479407:	55                   	push   ebp
  479408:	56                   	push   esi
  479409:	57                   	push   edi
  47940a:	8b f9                	mov    edi,ecx
  47940c:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  479410:	c7 07 94 e2 64 00    	mov    DWORD PTR [edi],0x64e294
  479416:	bd 05 00 00 00       	mov    ebp,0x5
  47941b:	8d b7 78 03 00 00    	lea    esi,[edi+0x378]
  479421:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  479425:	33 db                	xor    ebx,ebx
  479427:	8b 0e                	mov    ecx,DWORD PTR [esi]
  479429:	3b cb                	cmp    ecx,ebx
  47942b:	74 06                	je     0x479433
  47942d:	8b 01                	mov    eax,DWORD PTR [ecx]
  47942f:	6a 01                	push   0x1
  479431:	ff 10                	call   DWORD PTR [eax]
  479433:	89 1e                	mov    DWORD PTR [esi],ebx
  479435:	83 c6 04             	add    esi,0x4
  479438:	4d                   	dec    ebp
  479439:	75 ec                	jne    0x479427
  47943b:	68 e0 ac 46 00       	push   0x46ace0
  479440:	6a 06                	push   0x6
  479442:	8d 8f 58 4b 00 00    	lea    ecx,[edi+0x4b58]
  479448:	6a 18                	push   0x18
  47944a:	51                   	push   ecx
  47944b:	c6 44 24 2c 04       	mov    BYTE PTR [esp+0x2c],0x4
  479450:	e8 17 1b 19 00       	call   0x60af6c
  479455:	8b 8f 08 01 00 00    	mov    ecx,DWORD PTR [edi+0x108]
  47945b:	c6 44 24 1c 03       	mov    BYTE PTR [esp+0x1c],0x3
  479460:	3b cb                	cmp    ecx,ebx
  479462:	74 15                	je     0x479479
  479464:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  479467:	48                   	dec    eax
  479468:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47946b:	75 06                	jne    0x479473
  47946d:	53                   	push   ebx
  47946e:	e8 4d 2b 13 00       	call   0x5abfc0
  479473:	89 9f 08 01 00 00    	mov    DWORD PTR [edi+0x108],ebx
  479479:	8b 8f 04 01 00 00    	mov    ecx,DWORD PTR [edi+0x104]
  47947f:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
  479484:	3b cb                	cmp    ecx,ebx
  479486:	74 15                	je     0x47949d
  479488:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47948b:	48                   	dec    eax
  47948c:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47948f:	75 06                	jne    0x479497
  479491:	53                   	push   ebx
  479492:	e8 29 2b 13 00       	call   0x5abfc0
  479497:	89 9f 04 01 00 00    	mov    DWORD PTR [edi+0x104],ebx
  47949d:	8b 8f 00 01 00 00    	mov    ecx,DWORD PTR [edi+0x100]
  4794a3:	c6 44 24 1c 01       	mov    BYTE PTR [esp+0x1c],0x1
  4794a8:	3b cb                	cmp    ecx,ebx
  4794aa:	74 15                	je     0x4794c1
  4794ac:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  4794af:	48                   	dec    eax
  4794b0:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  4794b3:	75 06                	jne    0x4794bb
  4794b5:	53                   	push   ebx
  4794b6:	e8 05 2b 13 00       	call   0x5abfc0
  4794bb:	89 9f 00 01 00 00    	mov    DWORD PTR [edi+0x100],ebx
  4794c1:	8b 8f fc 00 00 00    	mov    ecx,DWORD PTR [edi+0xfc]
  4794c7:	88 5c 24 1c          	mov    BYTE PTR [esp+0x1c],bl
  4794cb:	3b cb                	cmp    ecx,ebx
  4794cd:	74 15                	je     0x4794e4
  4794cf:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  4794d2:	48                   	dec    eax
  4794d3:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  4794d6:	75 06                	jne    0x4794de
  4794d8:	53                   	push   ebx
  4794d9:	e8 e2 2a 13 00       	call   0x5abfc0
  4794de:	89 9f fc 00 00 00    	mov    DWORD PTR [edi+0xfc],ebx
  4794e4:	8b cf                	mov    ecx,edi
  4794e6:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
  4794ed:	ff 
  4794ee:	e8 4d 8a 08 00       	call   0x501f40
  4794f3:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4794f7:	5f                   	pop    edi
  4794f8:	5e                   	pop    esi
  4794f9:	5d                   	pop    ebp
  4794fa:	5b                   	pop    ebx
  4794fb:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  479502:	83 c4 10             	add    esp,0x10
  479505:	c3                   	ret
  479506:	90                   	nop
  479507:	90                   	nop
  479508:	90                   	nop
  479509:	90                   	nop
  47950a:	90                   	nop
  47950b:	90                   	nop
  47950c:	90                   	nop
  47950d:	90                   	nop
  47950e:	90                   	nop
  47950f:	90                   	nop
  479510:	8b 89 f8 00 00 00    	mov    ecx,DWORD PTR [ecx+0xf8]
  479516:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  47951a:	56                   	push   esi
  47951b:	8b d0                	mov    edx,eax
  47951d:	8b 31                	mov    esi,DWORD PTR [ecx]
  47951f:	89 32                	mov    DWORD PTR [edx],esi
  479521:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
  479524:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
  479527:	5e                   	pop    esi
  479528:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  47952b:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  47952e:	c2 04 00             	ret    0x4
  479531:	90                   	nop
  479532:	90                   	nop
  479533:	90                   	nop
  479534:	90                   	nop
  479535:	90                   	nop
  479536:	90                   	nop
  479537:	90                   	nop
  479538:	90                   	nop
  479539:	90                   	nop
  47953a:	90                   	nop
  47953b:	90                   	nop
  47953c:	90                   	nop
  47953d:	90                   	nop
  47953e:	90                   	nop
  47953f:	90                   	nop
  479540:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  479544:	8b 89 f8 00 00 00    	mov    ecx,DWORD PTR [ecx+0xf8]
  47954a:	8b 10                	mov    edx,DWORD PTR [eax]
  47954c:	89 11                	mov    DWORD PTR [ecx],edx
  47954e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  479551:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  479554:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  479557:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  47955a:	c2 04 00             	ret    0x4
  47955d:	90                   	nop
  47955e:	90                   	nop
  47955f:	90                   	nop
  479560:	83 ec 24             	sub    esp,0x24
  479563:	53                   	push   ebx
  479564:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
  479568:	55                   	push   ebp
  479569:	8b e9                	mov    ebp,ecx
  47956b:	56                   	push   esi
  47956c:	57                   	push   edi
  47956d:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
  479571:	8a 85 f8 03 00 00    	mov    al,BYTE PTR [ebp+0x3f8]
  479577:	8b 95 8c 03 00 00    	mov    edx,DWORD PTR [ebp+0x38c]
  47957d:	8d 8d 8c 03 00 00    	lea    ecx,[ebp+0x38c]
  479583:	57                   	push   edi
  479584:	53                   	push   ebx
  479585:	88 44 24 1b          	mov    BYTE PTR [esp+0x1b],al
  479589:	ff 52 04             	call   DWORD PTR [edx+0x4]
  47958c:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  479592:	8a 85 f8 03 00 00    	mov    al,BYTE PTR [ebp+0x3f8]
  479598:	85 f6                	test   esi,esi
  47959a:	88 44 24 12          	mov    BYTE PTR [esp+0x12],al
  47959e:	75 07                	jne    0x4795a7
  4795a0:	e8 db 2e 04 00       	call   0x4bc480
  4795a5:	8b f0                	mov    esi,eax
  4795a7:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  4795ad:	3d 00 00 00 80       	cmp    eax,0x80000000
  4795b2:	75 1e                	jne    0x4795d2
  4795b4:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  4795ba:	85 c0                	test   eax,eax
  4795bc:	75 05                	jne    0x4795c3
  4795be:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4795c3:	50                   	push   eax
  4795c4:	e8 47 19 19 00       	call   0x60af10
  4795c9:	83 c4 04             	add    esp,0x4
  4795cc:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  4795d2:	85 c0                	test   eax,eax
  4795d4:	75 38                	jne    0x47960e
  4795d6:	8d b5 48 05 00 00    	lea    esi,[ebp+0x548]
  4795dc:	c7 44 24 14 32 00 00 	mov    DWORD PTR [esp+0x14],0x32
  4795e3:	00 
  4795e4:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  4795e7:	84 c0                	test   al,al
  4795e9:	74 09                	je     0x4795f4
  4795eb:	8b 16                	mov    edx,DWORD PTR [esi]
  4795ed:	57                   	push   edi
  4795ee:	53                   	push   ebx
  4795ef:	8b ce                	mov    ecx,esi
  4795f1:	ff 52 04             	call   DWORD PTR [edx+0x4]
  4795f4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4795f8:	81 c6 44 01 00 00    	add    esi,0x144
  4795fe:	48                   	dec    eax
  4795ff:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  479603:	75 df                	jne    0x4795e4
  479605:	57                   	push   edi
  479606:	53                   	push   ebx
  479607:	8b cd                	mov    ecx,ebp
  479609:	e8 a2 2c 00 00       	call   0x47c2b0
  47960e:	8a 44 24 12          	mov    al,BYTE PTR [esp+0x12]
  479612:	84 c0                	test   al,al
  479614:	74 27                	je     0x47963d
  479616:	57                   	push   edi
  479617:	53                   	push   ebx
  479618:	8b cd                	mov    ecx,ebp
  47961a:	e8 41 22 00 00       	call   0x47b860
  47961f:	8d 85 90 03 00 00    	lea    eax,[ebp+0x390]
  479625:	8d 8d 20 4b 00 00    	lea    ecx,[ebp+0x4b20]
  47962b:	8b 10                	mov    edx,DWORD PTR [eax]
  47962d:	89 11                	mov    DWORD PTR [ecx],edx
  47962f:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  479632:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  479635:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  479638:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  47963b:	eb 2a                	jmp    0x479667
  47963d:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  479641:	84 c0                	test   al,al
  479643:	74 22                	je     0x479667
  479645:	6a ff                	push   0xffffffff
  479647:	8b cd                	mov    ecx,ebp
  479649:	e8 32 2f 00 00       	call   0x47c580
  47964e:	6a 02                	push   0x2
  479650:	8b cd                	mov    ecx,ebp
  479652:	e8 99 3b 00 00       	call   0x47d1f0
  479657:	6a 01                	push   0x1
  479659:	8b cd                	mov    ecx,ebp
  47965b:	e8 90 3c 00 00       	call   0x47d2f0
  479660:	c6 85 e8 4b 00 00 00 	mov    BYTE PTR [ebp+0x4be8],0x0
  479667:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  47966d:	85 f6                	test   esi,esi
  47966f:	75 07                	jne    0x479678
  479671:	e8 0a 2e 04 00       	call   0x4bc480
  479676:	8b f0                	mov    esi,eax
  479678:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  47967e:	3d 00 00 00 80       	cmp    eax,0x80000000
  479683:	75 1e                	jne    0x4796a3
  479685:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  47968b:	85 c0                	test   eax,eax
  47968d:	75 05                	jne    0x479694
  47968f:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  479694:	50                   	push   eax
  479695:	e8 76 18 19 00       	call   0x60af10
  47969a:	83 c4 04             	add    esp,0x4
  47969d:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  4796a3:	85 c0                	test   eax,eax
  4796a5:	0f 85 28 01 00 00    	jne    0x4797d3
  4796ab:	8d 9d 78 03 00 00    	lea    ebx,[ebp+0x378]
  4796b1:	8d bd 90 44 00 00    	lea    edi,[ebp+0x4490]
  4796b7:	c7 44 24 14 05 00 00 	mov    DWORD PTR [esp+0x14],0x5
  4796be:	00 
  4796bf:	8a 47 6c             	mov    al,BYTE PTR [edi+0x6c]
  4796c2:	84 c0                	test   al,al
  4796c4:	0f 84 89 00 00 00    	je     0x479753
  4796ca:	8d 77 04             	lea    esi,[edi+0x4]
  4796cd:	8b ce                	mov    ecx,esi
  4796cf:	8b 11                	mov    edx,DWORD PTR [ecx]
  4796d1:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  4796d5:	8d 95 20 4b 00 00    	lea    edx,[ebp+0x4b20]
  4796db:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  4796de:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4796e2:	8b 02                	mov    eax,DWORD PTR [edx]
  4796e4:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  4796e7:	89 87 18 01 00 00    	mov    DWORD PTR [edi+0x118],eax
  4796ed:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  4796f1:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  4796f4:	89 8f 1c 01 00 00    	mov    DWORD PTR [edi+0x11c],ecx
  4796fa:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  4796fe:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  479701:	51                   	push   ecx
  479702:	89 97 20 01 00 00    	mov    DWORD PTR [edi+0x120],edx
  479708:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  47970c:	8b 07                	mov    eax,DWORD PTR [edi]
  47970e:	52                   	push   edx
  47970f:	8b cf                	mov    ecx,edi
  479711:	ff 50 04             	call   DWORD PTR [eax+0x4]
  479714:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  479717:	8b 06                	mov    eax,DWORD PTR [esi]
  479719:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
  47971c:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  479720:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  479722:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  479726:	85 c9                	test   ecx,ecx
  479728:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  47972c:	74 2c                	je     0x47975a
  47972e:	8a 85 54 4b 00 00    	mov    al,BYTE PTR [ebp+0x4b54]
  479734:	84 c0                	test   al,al
  479736:	74 22                	je     0x47975a
  479738:	8d 54 24 18          	lea    edx,[esp+0x18]
  47973c:	8b 01                	mov    eax,DWORD PTR [ecx]
  47973e:	52                   	push   edx
  47973f:	8d 54 24 28          	lea    edx,[esp+0x28]
  479743:	52                   	push   edx
  479744:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  479748:	52                   	push   edx
  479749:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  47974d:	52                   	push   edx
  47974e:	ff 50 04             	call   DWORD PTR [eax+0x4]
  479751:	eb 07                	jmp    0x47975a
  479753:	c6 85 54 4b 00 00 00 	mov    BYTE PTR [ebp+0x4b54],0x0
  47975a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47975e:	83 c3 04             	add    ebx,0x4
  479761:	81 c7 44 01 00 00    	add    edi,0x144
  479767:	48                   	dec    eax
  479768:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47976c:	0f 85 4d ff ff ff    	jne    0x4796bf
  479772:	8b 8d 74 03 00 00    	mov    ecx,DWORD PTR [ebp+0x374]
  479778:	85 c9                	test   ecx,ecx
  47977a:	74 57                	je     0x4797d3
  47977c:	8b 01                	mov    eax,DWORD PTR [ecx]
  47977e:	8d 95 20 4b 00 00    	lea    edx,[ebp+0x4b20]
  479784:	52                   	push   edx
  479785:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  479788:	d9 05 80 e2 64 00    	fld    DWORD PTR ds:0x64e280
  47978e:	d8 8d 2c 4b 00 00    	fmul   DWORD PTR [ebp+0x4b2c]
  479794:	51                   	push   ecx
  479795:	8b 8d 74 03 00 00    	mov    ecx,DWORD PTR [ebp+0x374]
  47979b:	d9 1c 24             	fstp   DWORD PTR [esp]
  47979e:	e8 bd 95 06 00       	call   0x4e2d60
  4797a3:	8b 8d 74 03 00 00    	mov    ecx,DWORD PTR [ebp+0x374]
  4797a9:	8d 44 24 24          	lea    eax,[esp+0x24]
  4797ad:	50                   	push   eax
  4797ae:	c7 44 24 28 00 00 7f 	mov    DWORD PTR [esp+0x28],0x437f0000
  4797b5:	43 
  4797b6:	c7 44 24 2c 00 00 7f 	mov    DWORD PTR [esp+0x2c],0x437f0000
  4797bd:	43 
  4797be:	c7 44 24 30 00 00 c8 	mov    DWORD PTR [esp+0x30],0x41c80000
  4797c5:	41 
  4797c6:	c7 44 24 34 00 00 7f 	mov    DWORD PTR [esp+0x34],0x437f0000
  4797cd:	43 
  4797ce:	e8 bd 98 06 00       	call   0x4e3090
  4797d3:	5f                   	pop    edi
  4797d4:	5e                   	pop    esi
  4797d5:	5d                   	pop    ebp
  4797d6:	5b                   	pop    ebx
  4797d7:	83 c4 24             	add    esp,0x24
  4797da:	c2 08 00             	ret    0x8
  4797dd:	90                   	nop
  4797de:	90                   	nop
  4797df:	90                   	nop
  4797e0:	56                   	push   esi
  4797e1:	57                   	push   edi
  4797e2:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  4797e6:	8b f1                	mov    esi,ecx
  4797e8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  4797eb:	85 c0                	test   eax,eax
  4797ed:	75 05                	jne    0x4797f4
  4797ef:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4797f4:	68 e4 f0 68 00       	push   0x68f0e4
  4797f9:	50                   	push   eax
  4797fa:	e8 f1 fd 19 00       	call   0x6195f0
  4797ff:	83 c4 08             	add    esp,0x8
  479802:	85 c0                	test   eax,eax
  479804:	75 17                	jne    0x47981d
  479806:	6a 01                	push   0x1
  479808:	8b ce                	mov    ecx,esi
  47980a:	e8 41 8b 08 00       	call   0x502350
  47980f:	8b ce                	mov    ecx,esi
  479811:	e8 9a 35 00 00       	call   0x47cdb0
  479816:	5f                   	pop    edi
  479817:	b0 01                	mov    al,0x1
  479819:	5e                   	pop    esi
  47981a:	c2 0c 00             	ret    0xc
  47981d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  479820:	85 c0                	test   eax,eax
  479822:	75 05                	jne    0x479829
  479824:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  479829:	68 dc f0 68 00       	push   0x68f0dc
  47982e:	50                   	push   eax
  47982f:	e8 bc fd 19 00       	call   0x6195f0
  479834:	83 c4 08             	add    esp,0x8
  479837:	85 c0                	test   eax,eax
  479839:	75 0f                	jne    0x47984a
  47983b:	50                   	push   eax
  47983c:	8b ce                	mov    ecx,esi
  47983e:	e8 0d 8b 08 00       	call   0x502350
  479843:	5f                   	pop    edi
  479844:	b0 01                	mov    al,0x1
  479846:	5e                   	pop    esi
  479847:	c2 0c 00             	ret    0xc
  47984a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47984e:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  479852:	50                   	push   eax
  479853:	51                   	push   ecx
  479854:	57                   	push   edi
  479855:	8b ce                	mov    ecx,esi
  479857:	e8 74 8f 08 00       	call   0x5027d0
  47985c:	5f                   	pop    edi
  47985d:	5e                   	pop    esi
  47985e:	c2 0c 00             	ret    0xc
  479861:	90                   	nop
  479862:	90                   	nop
  479863:	90                   	nop
  479864:	90                   	nop
  479865:	90                   	nop
  479866:	90                   	nop
  479867:	90                   	nop
  479868:	90                   	nop
  479869:	90                   	nop
  47986a:	90                   	nop
  47986b:	90                   	nop
  47986c:	90                   	nop
  47986d:	90                   	nop
  47986e:	90                   	nop
  47986f:	90                   	nop
  479870:	6a ff                	push   0xffffffff
  479872:	68 28 8b 62 00       	push   0x628b28
  479877:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47987d:	50                   	push   eax
  47987e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  479885:	83 ec 28             	sub    esp,0x28
  479888:	53                   	push   ebx
  479889:	55                   	push   ebp
  47988a:	56                   	push   esi
  47988b:	8d 44 24 10          	lea    eax,[esp+0x10]
  47988f:	57                   	push   edi
  479890:	8b e9                	mov    ebp,ecx
  479892:	50                   	push   eax
  479893:	e8 48 aa f8 ff       	call   0x4042e0
  479898:	8b f0                	mov    esi,eax
  47989a:	8b 06                	mov    eax,DWORD PTR [esi]
  47989c:	33 db                	xor    ebx,ebx
  47989e:	3b c3                	cmp    eax,ebx
  4798a0:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  4798a4:	75 62                	jne    0x479908
  4798a6:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4798aa:	53                   	push   ebx
  4798ab:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  4798af:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4798b3:	e8 e8 a7 f8 ff       	call   0x4040a0
  4798b8:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4798bd:	83 c9 ff             	or     ecx,0xffffffff
  4798c0:	33 c0                	xor    eax,eax
  4798c2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4798c4:	f7 d1                	not    ecx
  4798c6:	49                   	dec    ecx
  4798c7:	51                   	push   ecx
  4798c8:	68 70 3f 6b 00       	push   0x6b3f70
  4798cd:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4798d1:	e8 1a a8 f8 ff       	call   0x4040f0
  4798d6:	8d 54 24 18          	lea    edx,[esp+0x18]
  4798da:	c6 44 24 40 01       	mov    BYTE PTR [esp+0x40],0x1
  4798df:	52                   	push   edx
  4798e0:	68 b6 00 00 00       	push   0xb6
  4798e5:	68 38 d6 68 00       	push   0x68d638
  4798ea:	68 2c d6 68 00       	push   0x68d62c
  4798ef:	e8 fc 6e 12 00       	call   0x5a07f0
  4798f4:	ff d0                	call   eax
  4798f6:	83 c4 10             	add    esp,0x10
  4798f9:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4798fd:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
  479901:	6a 01                	push   0x1
  479903:	e8 98 a7 f8 ff       	call   0x4040a0
  479908:	8b 36                	mov    esi,DWORD PTR [esi]
  47990a:	39 5e 5c             	cmp    DWORD PTR [esi+0x5c],ebx
  47990d:	75 62                	jne    0x479971
  47990f:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  479913:	53                   	push   ebx
  479914:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  479918:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  47991c:	e8 7f a7 f8 ff       	call   0x4040a0
  479921:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  479926:	83 c9 ff             	or     ecx,0xffffffff
  479929:	33 c0                	xor    eax,eax
  47992b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47992d:	f7 d1                	not    ecx
  47992f:	49                   	dec    ecx
  479930:	51                   	push   ecx
  479931:	68 70 3f 6b 00       	push   0x6b3f70
  479936:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47993a:	e8 b1 a7 f8 ff       	call   0x4040f0
  47993f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  479943:	c6 44 24 40 02       	mov    BYTE PTR [esp+0x40],0x2
  479948:	51                   	push   ecx
  479949:	68 44 01 00 00       	push   0x144
  47994e:	68 b8 e1 68 00       	push   0x68e1b8
  479953:	68 a8 e1 68 00       	push   0x68e1a8
  479958:	e8 93 6e 12 00       	call   0x5a07f0
  47995d:	ff d0                	call   eax
  47995f:	83 c4 10             	add    esp,0x10
  479962:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  479966:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
  47996a:	6a 01                	push   0x1
  47996c:	e8 2f a7 f8 ff       	call   0x4040a0
  479971:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  479975:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47997c:	ff 
  47997d:	3b c3                	cmp    eax,ebx
  47997f:	74 1b                	je     0x47999c
  479981:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  479984:	8b c8                	mov    ecx,eax
  479986:	83 c0 14             	add    eax,0x14
  479989:	4e                   	dec    esi
  47998a:	8b d6                	mov    edx,esi
  47998c:	3b d3                	cmp    edx,ebx
  47998e:	89 30                	mov    DWORD PTR [eax],esi
  479990:	75 06                	jne    0x479998
  479992:	53                   	push   ebx
  479993:	e8 28 26 13 00       	call   0x5abfc0
  479998:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  47999c:	8b cd                	mov    ecx,ebp
  47999e:	e8 0d 0e 00 00       	call   0x47a7b0
  4799a3:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  4799a9:	3b f3                	cmp    esi,ebx
  4799ab:	75 07                	jne    0x4799b4
  4799ad:	e8 ce 2a 04 00       	call   0x4bc480
  4799b2:	8b f0                	mov    esi,eax
  4799b4:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  4799ba:	3d 00 00 00 80       	cmp    eax,0x80000000
  4799bf:	75 1e                	jne    0x4799df
  4799c1:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  4799c7:	3b c3                	cmp    eax,ebx
  4799c9:	75 05                	jne    0x4799d0
  4799cb:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4799d0:	50                   	push   eax
  4799d1:	e8 3a 15 19 00       	call   0x60af10
  4799d6:	83 c4 04             	add    esp,0x4
  4799d9:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  4799df:	3b c3                	cmp    eax,ebx
  4799e1:	75 0e                	jne    0x4799f1
  4799e3:	8b cd                	mov    ecx,ebp
  4799e5:	e8 76 11 00 00       	call   0x47ab60
  4799ea:	8b cd                	mov    ecx,ebp
  4799ec:	e8 6f 17 00 00       	call   0x47b160
  4799f1:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  4799f5:	5f                   	pop    edi
  4799f6:	5e                   	pop    esi
  4799f7:	5d                   	pop    ebp
  4799f8:	5b                   	pop    ebx
  4799f9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  479a00:	83 c4 34             	add    esp,0x34
  479a03:	c3                   	ret
  479a04:	90                   	nop
  479a05:	90                   	nop
  479a06:	90                   	nop
  479a07:	90                   	nop
  479a08:	90                   	nop
  479a09:	90                   	nop
  479a0a:	90                   	nop
  479a0b:	90                   	nop
  479a0c:	90                   	nop
  479a0d:	90                   	nop
  479a0e:	90                   	nop
  479a0f:	90                   	nop
  479a10:	6a ff                	push   0xffffffff
  479a12:	68 a8 8b 62 00       	push   0x628ba8
  479a17:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  479a1d:	50                   	push   eax
  479a1e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  479a25:	83 ec 1c             	sub    esp,0x1c
  479a28:	55                   	push   ebp
  479a29:	56                   	push   esi
  479a2a:	57                   	push   edi
  479a2b:	8b e9                	mov    ebp,ecx
  479a2d:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  479a31:	c7 44 24 30 01 00 00 	mov    DWORD PTR [esp+0x30],0x1
  479a38:	00 
  479a39:	85 c0                	test   eax,eax
  479a3b:	0f 84 b7 01 00 00    	je     0x479bf8
  479a41:	8b 85 fc 00 00 00    	mov    eax,DWORD PTR [ebp+0xfc]
  479a47:	85 c0                	test   eax,eax
  479a49:	74 54                	je     0x479a9f
  479a4b:	51                   	push   ecx
  479a4c:	8b cc                	mov    ecx,esp
  479a4e:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479a52:	89 01                	mov    DWORD PTR [ecx],eax
  479a54:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  479a57:	41                   	inc    ecx
  479a58:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  479a5b:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479a5f:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479a64:	e8 c7 79 fa ff       	call   0x421430
  479a69:	8b c8                	mov    ecx,eax
  479a6b:	e8 30 22 08 00       	call   0x4fbca0
  479a70:	84 c0                	test   al,al
  479a72:	75 2b                	jne    0x479a9f
  479a74:	8b 85 fc 00 00 00    	mov    eax,DWORD PTR [ebp+0xfc]
  479a7a:	51                   	push   ecx
  479a7b:	8b cc                	mov    ecx,esp
  479a7d:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479a81:	85 c0                	test   eax,eax
  479a83:	89 01                	mov    DWORD PTR [ecx],eax
  479a85:	74 03                	je     0x479a8a
  479a87:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  479a8a:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479a8e:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479a93:	e8 98 79 fa ff       	call   0x421430
  479a98:	8b c8                	mov    ecx,eax
  479a9a:	e8 71 18 08 00       	call   0x4fb310
  479a9f:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  479aa3:	85 c0                	test   eax,eax
  479aa5:	0f 84 4d 01 00 00    	je     0x479bf8
  479aab:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
  479ab1:	85 c0                	test   eax,eax
  479ab3:	74 54                	je     0x479b09
  479ab5:	51                   	push   ecx
  479ab6:	8b cc                	mov    ecx,esp
  479ab8:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479abc:	89 01                	mov    DWORD PTR [ecx],eax
  479abe:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  479ac1:	41                   	inc    ecx
  479ac2:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  479ac5:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479ac9:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479ace:	e8 5d 79 fa ff       	call   0x421430
  479ad3:	8b c8                	mov    ecx,eax
  479ad5:	e8 c6 21 08 00       	call   0x4fbca0
  479ada:	84 c0                	test   al,al
  479adc:	75 2b                	jne    0x479b09
  479ade:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
  479ae4:	51                   	push   ecx
  479ae5:	8b cc                	mov    ecx,esp
  479ae7:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479aeb:	85 c0                	test   eax,eax
  479aed:	89 01                	mov    DWORD PTR [ecx],eax
  479aef:	74 03                	je     0x479af4
  479af1:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  479af4:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479af8:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479afd:	e8 2e 79 fa ff       	call   0x421430
  479b02:	8b c8                	mov    ecx,eax
  479b04:	e8 07 18 08 00       	call   0x4fb310
  479b09:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  479b0d:	85 c0                	test   eax,eax
  479b0f:	0f 84 e3 00 00 00    	je     0x479bf8
  479b15:	8b 85 04 01 00 00    	mov    eax,DWORD PTR [ebp+0x104]
  479b1b:	85 c0                	test   eax,eax
  479b1d:	74 54                	je     0x479b73
  479b1f:	51                   	push   ecx
  479b20:	8b cc                	mov    ecx,esp
  479b22:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479b26:	89 01                	mov    DWORD PTR [ecx],eax
  479b28:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  479b2b:	41                   	inc    ecx
  479b2c:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  479b2f:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479b33:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479b38:	e8 f3 78 fa ff       	call   0x421430
  479b3d:	8b c8                	mov    ecx,eax
  479b3f:	e8 5c 21 08 00       	call   0x4fbca0
  479b44:	84 c0                	test   al,al
  479b46:	75 2b                	jne    0x479b73
  479b48:	8b 85 04 01 00 00    	mov    eax,DWORD PTR [ebp+0x104]
  479b4e:	51                   	push   ecx
  479b4f:	8b cc                	mov    ecx,esp
  479b51:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479b55:	85 c0                	test   eax,eax
  479b57:	89 01                	mov    DWORD PTR [ecx],eax
  479b59:	74 03                	je     0x479b5e
  479b5b:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  479b5e:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479b62:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479b67:	e8 c4 78 fa ff       	call   0x421430
  479b6c:	8b c8                	mov    ecx,eax
  479b6e:	e8 9d 17 08 00       	call   0x4fb310
  479b73:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  479b77:	85 c0                	test   eax,eax
  479b79:	74 7d                	je     0x479bf8
  479b7b:	8b 85 08 01 00 00    	mov    eax,DWORD PTR [ebp+0x108]
  479b81:	85 c0                	test   eax,eax
  479b83:	74 54                	je     0x479bd9
  479b85:	51                   	push   ecx
  479b86:	8b cc                	mov    ecx,esp
  479b88:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479b8c:	89 01                	mov    DWORD PTR [ecx],eax
  479b8e:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  479b91:	41                   	inc    ecx
  479b92:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  479b95:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479b99:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479b9e:	e8 8d 78 fa ff       	call   0x421430
  479ba3:	8b c8                	mov    ecx,eax
  479ba5:	e8 f6 20 08 00       	call   0x4fbca0
  479baa:	84 c0                	test   al,al
  479bac:	75 2b                	jne    0x479bd9
  479bae:	8b 85 08 01 00 00    	mov    eax,DWORD PTR [ebp+0x108]
  479bb4:	51                   	push   ecx
  479bb5:	8b cc                	mov    ecx,esp
  479bb7:	89 64 24 10          	mov    DWORD PTR [esp+0x10],esp
  479bbb:	85 c0                	test   eax,eax
  479bbd:	89 01                	mov    DWORD PTR [ecx],eax
  479bbf:	74 03                	je     0x479bc4
  479bc1:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  479bc4:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  479bc8:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  479bcd:	e8 5e 78 fa ff       	call   0x421430
  479bd2:	8b c8                	mov    ecx,eax
  479bd4:	e8 37 17 08 00       	call   0x4fb310
  479bd9:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  479bdd:	85 c0                	test   eax,eax
  479bdf:	74 17                	je     0x479bf8
  479be1:	33 f6                	xor    esi,esi
  479be3:	56                   	push   esi
  479be4:	8b cd                	mov    ecx,ebp
  479be6:	e8 35 33 00 00       	call   0x47cf20
  479beb:	46                   	inc    esi
  479bec:	83 fe 06             	cmp    esi,0x6
  479bef:	7c f2                	jl     0x479be3
  479bf1:	8b cd                	mov    ecx,ebp
  479bf3:	e8 68 2b 00 00       	call   0x47c760
  479bf8:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  479bfe:	85 f6                	test   esi,esi
  479c00:	75 07                	jne    0x479c09
  479c02:	e8 79 28 04 00       	call   0x4bc480
  479c07:	8b f0                	mov    esi,eax
  479c09:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  479c0f:	3d 00 00 00 80       	cmp    eax,0x80000000
  479c14:	75 1e                	jne    0x479c34
  479c16:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  479c1c:	85 c0                	test   eax,eax
  479c1e:	75 05                	jne    0x479c25
  479c20:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  479c25:	50                   	push   eax
  479c26:	e8 e5 12 19 00       	call   0x60af10
  479c2b:	83 c4 04             	add    esp,0x4
  479c2e:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  479c34:	85 c0                	test   eax,eax
  479c36:	0f 85 2f 01 00 00    	jne    0x479d6b
  479c3c:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  479c40:	85 c0                	test   eax,eax
  479c42:	0f 84 d3 00 00 00    	je     0x479d1b
  479c48:	8b 85 74 03 00 00    	mov    eax,DWORD PTR [ebp+0x374]
  479c4e:	85 c0                	test   eax,eax
  479c50:	0f 84 c5 00 00 00    	je     0x479d1b
  479c56:	8d 44 24 0c          	lea    eax,[esp+0xc]
  479c5a:	8b cd                	mov    ecx,ebp
  479c5c:	50                   	push   eax
  479c5d:	e8 7e a6 f8 ff       	call   0x4042e0
  479c62:	8b f0                	mov    esi,eax
  479c64:	8b 06                	mov    eax,DWORD PTR [esi]
  479c66:	c6 44 24 30 0a       	mov    BYTE PTR [esp+0x30],0xa
  479c6b:	85 c0                	test   eax,eax
  479c6d:	75 64                	jne    0x479cd3
  479c6f:	8a 4c 24 3c          	mov    cl,BYTE PTR [esp+0x3c]
  479c73:	6a 00                	push   0x0
  479c75:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  479c79:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  479c7d:	e8 1e a4 f8 ff       	call   0x4040a0
  479c82:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  479c87:	83 c9 ff             	or     ecx,0xffffffff
  479c8a:	33 c0                	xor    eax,eax
  479c8c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  479c8e:	f7 d1                	not    ecx
  479c90:	49                   	dec    ecx
  479c91:	51                   	push   ecx
  479c92:	68 70 3f 6b 00       	push   0x6b3f70
  479c97:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  479c9b:	e8 50 a4 f8 ff       	call   0x4040f0
  479ca0:	8d 54 24 18          	lea    edx,[esp+0x18]
  479ca4:	c6 44 24 30 0b       	mov    BYTE PTR [esp+0x30],0xb
  479ca9:	52                   	push   edx
  479caa:	68 b6 00 00 00       	push   0xb6
  479caf:	68 38 d6 68 00       	push   0x68d638
  479cb4:	68 2c d6 68 00       	push   0x68d62c
  479cb9:	e8 32 6b 12 00       	call   0x5a07f0
  479cbe:	ff d0                	call   eax
  479cc0:	83 c4 10             	add    esp,0x10
  479cc3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  479cc7:	c6 44 24 30 0a       	mov    BYTE PTR [esp+0x30],0xa
  479ccc:	6a 01                	push   0x1
  479cce:	e8 cd a3 f8 ff       	call   0x4040a0
  479cd3:	8b 85 74 03 00 00    	mov    eax,DWORD PTR [ebp+0x374]
  479cd9:	8b 0e                	mov    ecx,DWORD PTR [esi]
  479cdb:	50                   	push   eax
  479cdc:	e8 df a4 07 00       	call   0x4f41c0
  479ce1:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  479ce5:	c6 44 24 30 01       	mov    BYTE PTR [esp+0x30],0x1
  479cea:	85 c0                	test   eax,eax
  479cec:	74 20                	je     0x479d0e
  479cee:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  479cf1:	8b c8                	mov    ecx,eax
  479cf3:	83 c0 14             	add    eax,0x14
  479cf6:	4e                   	dec    esi
  479cf7:	8b d6                	mov    edx,esi
  479cf9:	85 d2                	test   edx,edx
  479cfb:	89 30                	mov    DWORD PTR [eax],esi
  479cfd:	75 07                	jne    0x479d06
  479cff:	6a 00                	push   0x0
  479d01:	e8 ba 22 13 00       	call   0x5abfc0
  479d06:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
  479d0d:	00 
  479d0e:	8b 8d 74 03 00 00    	mov    ecx,DWORD PTR [ebp+0x374]
  479d14:	6a 01                	push   0x1
  479d16:	e8 35 86 08 00       	call   0x502350
  479d1b:	8d b5 78 03 00 00    	lea    esi,[ebp+0x378]
  479d21:	bf 05 00 00 00       	mov    edi,0x5
  479d26:	83 3e 00             	cmp    DWORD PTR [esi],0x0
  479d29:	74 3a                	je     0x479d65
  479d2b:	51                   	push   ecx
  479d2c:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  479d30:	8b c4                	mov    eax,esp
  479d32:	89 64 24 14          	mov    DWORD PTR [esp+0x14],esp
  479d36:	89 08                	mov    DWORD PTR [eax],ecx
  479d38:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  479d3c:	85 c0                	test   eax,eax
  479d3e:	74 03                	je     0x479d43
  479d40:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  479d43:	51                   	push   ecx
  479d44:	8d 54 24 40          	lea    edx,[esp+0x40]
  479d48:	8b cc                	mov    ecx,esp
  479d4a:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  479d4e:	52                   	push   edx
  479d4f:	c6 44 24 3c 0c       	mov    BYTE PTR [esp+0x3c],0xc
  479d54:	e8 07 fa fc ff       	call   0x449760
  479d59:	8b 0e                	mov    ecx,DWORD PTR [esi]
  479d5b:	c6 44 24 38 01       	mov    BYTE PTR [esp+0x38],0x1
  479d60:	8b 01                	mov    eax,DWORD PTR [ecx]
  479d62:	ff 50 08             	call   DWORD PTR [eax+0x8]
  479d65:	83 c6 04             	add    esi,0x4
  479d68:	4f                   	dec    edi
  479d69:	75 bb                	jne    0x479d26
  479d6b:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  479d6f:	c6 44 24 30 00       	mov    BYTE PTR [esp+0x30],0x0
  479d74:	85 c0                	test   eax,eax
  479d76:	74 20                	je     0x479d98
  479d78:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  479d7b:	8b c8                	mov    ecx,eax
  479d7d:	83 c0 14             	add    eax,0x14
  479d80:	4e                   	dec    esi
  479d81:	8b d6                	mov    edx,esi
  479d83:	85 d2                	test   edx,edx
  479d85:	89 30                	mov    DWORD PTR [eax],esi
  479d87:	75 07                	jne    0x479d90
  479d89:	6a 00                	push   0x0
  479d8b:	e8 30 22 13 00       	call   0x5abfc0
  479d90:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  479d97:	00 
  479d98:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  479d9c:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  479da3:	ff 
  479da4:	85 c0                	test   eax,eax
  479da6:	74 18                	je     0x479dc0
  479da8:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  479dab:	8b c8                	mov    ecx,eax
  479dad:	83 c0 14             	add    eax,0x14
  479db0:	4e                   	dec    esi
  479db1:	8b d6                	mov    edx,esi
  479db3:	85 d2                	test   edx,edx
  479db5:	89 30                	mov    DWORD PTR [eax],esi
  479db7:	75 07                	jne    0x479dc0
  479db9:	6a 00                	push   0x0
  479dbb:	e8 00 22 13 00       	call   0x5abfc0
  479dc0:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  479dc4:	5f                   	pop    edi
  479dc5:	5e                   	pop    esi
  479dc6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  479dcd:	5d                   	pop    ebp
  479dce:	83 c4 28             	add    esp,0x28
  479dd1:	c2 08 00             	ret    0x8
  479dd4:	90                   	nop
  479dd5:	90                   	nop
  479dd6:	90                   	nop
  479dd7:	90                   	nop
  479dd8:	90                   	nop
  479dd9:	90                   	nop
  479dda:	90                   	nop
  479ddb:	90                   	nop
  479ddc:	90                   	nop
  479ddd:	90                   	nop
  479dde:	90                   	nop
  479ddf:	90                   	nop
  479de0:	6a ff                	push   0xffffffff
  479de2:	68 aa 8c 62 00       	push   0x628caa
  479de7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  479ded:	50                   	push   eax
  479dee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  479df5:	83 ec 54             	sub    esp,0x54
  479df8:	53                   	push   ebx
  479df9:	55                   	push   ebp
  479dfa:	56                   	push   esi
  479dfb:	57                   	push   edi
  479dfc:	33 db                	xor    ebx,ebx
  479dfe:	68 ec 4b 00 00       	push   0x4bec
  479e03:	33 ed                	xor    ebp,ebp
  479e05:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  479e09:	e8 a7 02 19 00       	call   0x60a0b5
  479e0e:	8b f0                	mov    esi,eax
  479e10:	83 c4 04             	add    esp,0x4
  479e13:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  479e17:	8b 7c 24 74          	mov    edi,DWORD PTR [esp+0x74]
  479e1b:	3b f5                	cmp    esi,ebp
  479e1d:	89 6c 24 6c          	mov    DWORD PTR [esp+0x6c],ebp
  479e21:	74 2e                	je     0x479e51
  479e23:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
  479e26:	68 ac 2f 69 00       	push   0x692fac
  479e2b:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  479e2f:	50                   	push   eax
  479e30:	51                   	push   ecx
  479e31:	e8 ba 95 08 00       	call   0x5033f0
  479e36:	bb 01 00 00 00       	mov    ebx,0x1
  479e3b:	83 c4 0c             	add    esp,0xc
  479e3e:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  479e42:	57                   	push   edi
  479e43:	50                   	push   eax
  479e44:	8b ce                	mov    ecx,esi
  479e46:	88 5c 24 74          	mov    BYTE PTR [esp+0x74],bl
  479e4a:	e8 b1 eb ff ff       	call   0x478a00
  479e4f:	8b e8                	mov    ebp,eax
  479e51:	f6 c3 01             	test   bl,0x1
  479e54:	c7 44 24 6c ff ff ff 	mov    DWORD PTR [esp+0x6c],0xffffffff
  479e5b:	ff 
  479e5c:	74 0b                	je     0x479e69
  479e5e:	6a 01                	push   0x1
  479e60:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  479e64:	e8 37 a2 f8 ff       	call   0x4040a0
  479e69:	8a 54 24 74          	mov    dl,BYTE PTR [esp+0x74]
  479e6d:	33 f6                	xor    esi,esi
  479e6f:	56                   	push   esi
  479e70:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  479e74:	88 54 24 38          	mov    BYTE PTR [esp+0x38],dl
  479e78:	e8 23 a2 f8 ff       	call   0x4040a0
  479e7d:	bf f0 2e 69 00       	mov    edi,0x692ef0
  479e82:	83 c9 ff             	or     ecx,0xffffffff
  479e85:	33 c0                	xor    eax,eax
  479e87:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  479e89:	f7 d1                	not    ecx
  479e8b:	49                   	dec    ecx
  479e8c:	51                   	push   ecx
  479e8d:	68 f0 2e 69 00       	push   0x692ef0
  479e92:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  479e96:	e8 55 a2 f8 ff       	call   0x4040f0
  479e9b:	8a 44 24 74          	mov    al,BYTE PTR [esp+0x74]
  479e9f:	56                   	push   esi
  479ea0:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  479ea4:	c7 44 24 70 03 00 00 	mov    DWORD PTR [esp+0x70],0x3
  479eab:	00 
  479eac:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  479eb0:	e8 eb a1 f8 ff       	call   0x4040a0
  479eb5:	bf e0 2e 69 00       	mov    edi,0x692ee0
  479eba:	83 c9 ff             	or     ecx,0xffffffff
  479ebd:	33 c0                	xor    eax,eax
  479ebf:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  479ec1:	f7 d1                	not    ecx
  479ec3:	49                   	dec    ecx
  479ec4:	51                   	push   ecx
  479ec5:	68 e0 2e 69 00       	push   0x692ee0
  479eca:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  479ece:	e8 1d a2 f8 ff       	call   0x4040f0
  479ed3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  479ed7:	c6 44 24 6c 04       	mov    BYTE PTR [esp+0x6c],0x4
  479edc:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  479ee0:	e8 cb a5 10 00       	call   0x5844b0
  479ee5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  479ee9:	c6 44 24 6c 05       	mov    BYTE PTR [esp+0x6c],0x5
  479eee:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  479ef2:	e8 b9 a5 10 00       	call   0x5844b0
  479ef7:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  479efc:	b3 06                	mov    bl,0x6
  479efe:	3b c6                	cmp    eax,esi
  479f00:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  479f04:	75 05                	jne    0x479f0b
  479f06:	e8 75 13 0e 00       	call   0x55b280
  479f0b:	8b f0                	mov    esi,eax
  479f0d:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  479f13:	85 c0                	test   eax,eax
  479f15:	75 45                	jne    0x479f5c
  479f17:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  479f1b:	51                   	push   ecx
  479f1c:	68 70 3f 6b 00       	push   0x6b3f70
  479f21:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  479f25:	e8 e6 f8 f8 ff       	call   0x409810
  479f2a:	8d 54 24 44          	lea    edx,[esp+0x44]
  479f2e:	c6 44 24 6c 07       	mov    BYTE PTR [esp+0x6c],0x7
  479f33:	52                   	push   edx
  479f34:	68 88 01 00 00       	push   0x188
  479f39:	68 58 eb 68 00       	push   0x68eb58
  479f3e:	68 4c eb 68 00       	push   0x68eb4c
  479f43:	e8 a8 68 12 00       	call   0x5a07f0
  479f48:	ff d0                	call   eax
  479f4a:	83 c4 10             	add    esp,0x10
  479f4d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  479f51:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  479f55:	6a 01                	push   0x1
  479f57:	e8 44 a1 f8 ff       	call   0x4040a0
  479f5c:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  479f62:	8d 44 24 34          	lea    eax,[esp+0x34]
  479f66:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  479f6a:	50                   	push   eax
  479f6b:	52                   	push   edx
  479f6c:	e8 0f 3a 09 00       	call   0x50d980
  479f71:	8b f0                	mov    esi,eax
  479f73:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  479f77:	8b 06                	mov    eax,DWORD PTR [esi]
  479f79:	3b c8                	cmp    ecx,eax
  479f7b:	c6 44 24 6c 08       	mov    BYTE PTR [esp+0x6c],0x8
  479f80:	74 18                	je     0x479f9a
  479f82:	85 c9                	test   ecx,ecx
  479f84:	74 05                	je     0x479f8b
  479f86:	e8 45 f9 f8 ff       	call   0x4098d0
  479f8b:	8b 06                	mov    eax,DWORD PTR [esi]
  479f8d:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  479f91:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  479f95:	e8 16 a5 10 00       	call   0x5844b0
  479f9a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  479f9e:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  479fa2:	e8 69 33 10 00       	call   0x57d310
  479fa7:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  479fab:	85 c0                	test   eax,eax
  479fad:	0f 86 ab 00 00 00    	jbe    0x47a05e
  479fb3:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  479fb9:	85 f6                	test   esi,esi
  479fbb:	75 07                	jne    0x479fc4
  479fbd:	e8 be 12 0e 00       	call   0x55b280
  479fc2:	8b f0                	mov    esi,eax
  479fc4:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  479fca:	85 c0                	test   eax,eax
  479fcc:	75 45                	jne    0x47a013
  479fce:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  479fd2:	51                   	push   ecx
  479fd3:	68 70 3f 6b 00       	push   0x6b3f70
  479fd8:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  479fdc:	e8 2f f8 f8 ff       	call   0x409810
  479fe1:	8d 54 24 44          	lea    edx,[esp+0x44]
  479fe5:	c6 44 24 6c 09       	mov    BYTE PTR [esp+0x6c],0x9
  479fea:	52                   	push   edx
  479feb:	68 88 01 00 00       	push   0x188
  479ff0:	68 58 eb 68 00       	push   0x68eb58
  479ff5:	68 4c eb 68 00       	push   0x68eb4c
  479ffa:	e8 f1 67 12 00       	call   0x5a07f0
  479fff:	ff d0                	call   eax
  47a001:	83 c4 10             	add    esp,0x10
  47a004:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a008:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a00c:	6a 01                	push   0x1
  47a00e:	e8 8d a0 f8 ff       	call   0x4040a0
  47a013:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  47a019:	8d 44 24 24          	lea    eax,[esp+0x24]
  47a01d:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47a021:	50                   	push   eax
  47a022:	52                   	push   edx
  47a023:	e8 58 39 09 00       	call   0x50d980
  47a028:	8b f0                	mov    esi,eax
  47a02a:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  47a02e:	8b 06                	mov    eax,DWORD PTR [esi]
  47a030:	3b c8                	cmp    ecx,eax
  47a032:	c6 44 24 6c 0a       	mov    BYTE PTR [esp+0x6c],0xa
  47a037:	74 18                	je     0x47a051
  47a039:	85 c9                	test   ecx,ecx
  47a03b:	74 05                	je     0x47a042
  47a03d:	e8 8e f8 f8 ff       	call   0x4098d0
  47a042:	8b 06                	mov    eax,DWORD PTR [esi]
  47a044:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a048:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  47a04c:	e8 5f a4 10 00       	call   0x5844b0
  47a051:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a055:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a059:	e8 b2 32 10 00       	call   0x57d310
  47a05e:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a062:	85 c0                	test   eax,eax
  47a064:	74 2a                	je     0x47a090
  47a066:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47a06a:	85 c0                	test   eax,eax
  47a06c:	74 22                	je     0x47a090
  47a06e:	51                   	push   ecx
  47a06f:	8b cc                	mov    ecx,esp
  47a071:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  47a075:	89 01                	mov    DWORD PTR [ecx],eax
  47a077:	e8 34 a4 10 00       	call   0x5844b0
  47a07c:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a080:	88 5c 24 70          	mov    BYTE PTR [esp+0x70],bl
  47a084:	e8 57 8d f9 ff       	call   0x412de0
  47a089:	8b c8                	mov    ecx,eax
  47a08b:	e8 10 0e 09 00       	call   0x50aea0
  47a090:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  47a096:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a09a:	8d b5 fc 00 00 00    	lea    esi,[ebp+0xfc]
  47a0a0:	3b c8                	cmp    ecx,eax
  47a0a2:	74 16                	je     0x47a0ba
  47a0a4:	85 c9                	test   ecx,ecx
  47a0a6:	74 05                	je     0x47a0ad
  47a0a8:	e8 23 f8 f8 ff       	call   0x4098d0
  47a0ad:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47a0b1:	89 0e                	mov    DWORD PTR [esi],ecx
  47a0b3:	8b ce                	mov    ecx,esi
  47a0b5:	e8 f6 a3 10 00       	call   0x5844b0
  47a0ba:	bf 7c 30 69 00       	mov    edi,0x69307c
  47a0bf:	83 c9 ff             	or     ecx,0xffffffff
  47a0c2:	33 c0                	xor    eax,eax
  47a0c4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a0c6:	f7 d1                	not    ecx
  47a0c8:	49                   	dec    ecx
  47a0c9:	51                   	push   ecx
  47a0ca:	68 7c 30 69 00       	push   0x69307c
  47a0cf:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47a0d3:	e8 18 a0 f8 ff       	call   0x4040f0
  47a0d8:	bf 6c 30 69 00       	mov    edi,0x69306c
  47a0dd:	83 c9 ff             	or     ecx,0xffffffff
  47a0e0:	33 c0                	xor    eax,eax
  47a0e2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a0e4:	f7 d1                	not    ecx
  47a0e6:	49                   	dec    ecx
  47a0e7:	51                   	push   ecx
  47a0e8:	68 6c 30 69 00       	push   0x69306c
  47a0ed:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47a0f1:	e8 fa 9f f8 ff       	call   0x4040f0
  47a0f6:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47a0fb:	85 c0                	test   eax,eax
  47a0fd:	75 05                	jne    0x47a104
  47a0ff:	e8 7c 11 0e 00       	call   0x55b280
  47a104:	8b f0                	mov    esi,eax
  47a106:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  47a10c:	85 c0                	test   eax,eax
  47a10e:	75 45                	jne    0x47a155
  47a110:	8d 54 24 13          	lea    edx,[esp+0x13]
  47a114:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a118:	52                   	push   edx
  47a119:	68 70 3f 6b 00       	push   0x6b3f70
  47a11e:	e8 ed f6 f8 ff       	call   0x409810
  47a123:	8d 44 24 44          	lea    eax,[esp+0x44]
  47a127:	c6 44 24 6c 0c       	mov    BYTE PTR [esp+0x6c],0xc
  47a12c:	50                   	push   eax
  47a12d:	68 88 01 00 00       	push   0x188
  47a132:	68 58 eb 68 00       	push   0x68eb58
  47a137:	68 4c eb 68 00       	push   0x68eb4c
  47a13c:	e8 af 66 12 00       	call   0x5a07f0
  47a141:	ff d0                	call   eax
  47a143:	83 c4 10             	add    esp,0x10
  47a146:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a14a:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a14e:	6a 01                	push   0x1
  47a150:	e8 4b 9f f8 ff       	call   0x4040a0
  47a155:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  47a15b:	8d 54 24 34          	lea    edx,[esp+0x34]
  47a15f:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  47a163:	52                   	push   edx
  47a164:	50                   	push   eax
  47a165:	e8 16 38 09 00       	call   0x50d980
  47a16a:	8b f0                	mov    esi,eax
  47a16c:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47a170:	8b 06                	mov    eax,DWORD PTR [esi]
  47a172:	3b c8                	cmp    ecx,eax
  47a174:	c6 44 24 6c 0d       	mov    BYTE PTR [esp+0x6c],0xd
  47a179:	74 18                	je     0x47a193
  47a17b:	85 c9                	test   ecx,ecx
  47a17d:	74 05                	je     0x47a184
  47a17f:	e8 4c f7 f8 ff       	call   0x4098d0
  47a184:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47a186:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47a18a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47a18e:	e8 1d a3 10 00       	call   0x5844b0
  47a193:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a197:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a19b:	e8 70 31 10 00       	call   0x57d310
  47a1a0:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47a1a4:	85 c0                	test   eax,eax
  47a1a6:	0f 86 ab 00 00 00    	jbe    0x47a257
  47a1ac:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  47a1b2:	85 f6                	test   esi,esi
  47a1b4:	75 07                	jne    0x47a1bd
  47a1b6:	e8 c5 10 0e 00       	call   0x55b280
  47a1bb:	8b f0                	mov    esi,eax
  47a1bd:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  47a1c3:	85 c0                	test   eax,eax
  47a1c5:	75 45                	jne    0x47a20c
  47a1c7:	8d 54 24 13          	lea    edx,[esp+0x13]
  47a1cb:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a1cf:	52                   	push   edx
  47a1d0:	68 70 3f 6b 00       	push   0x6b3f70
  47a1d5:	e8 36 f6 f8 ff       	call   0x409810
  47a1da:	8d 44 24 44          	lea    eax,[esp+0x44]
  47a1de:	c6 44 24 6c 0e       	mov    BYTE PTR [esp+0x6c],0xe
  47a1e3:	50                   	push   eax
  47a1e4:	68 88 01 00 00       	push   0x188
  47a1e9:	68 58 eb 68 00       	push   0x68eb58
  47a1ee:	68 4c eb 68 00       	push   0x68eb4c
  47a1f3:	e8 f8 65 12 00       	call   0x5a07f0
  47a1f8:	ff d0                	call   eax
  47a1fa:	83 c4 10             	add    esp,0x10
  47a1fd:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a201:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a205:	6a 01                	push   0x1
  47a207:	e8 94 9e f8 ff       	call   0x4040a0
  47a20c:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  47a212:	8d 54 24 24          	lea    edx,[esp+0x24]
  47a216:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  47a21a:	52                   	push   edx
  47a21b:	50                   	push   eax
  47a21c:	e8 5f 37 09 00       	call   0x50d980
  47a221:	8b f0                	mov    esi,eax
  47a223:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  47a227:	8b 06                	mov    eax,DWORD PTR [esi]
  47a229:	3b c8                	cmp    ecx,eax
  47a22b:	c6 44 24 6c 0f       	mov    BYTE PTR [esp+0x6c],0xf
  47a230:	74 18                	je     0x47a24a
  47a232:	85 c9                	test   ecx,ecx
  47a234:	74 05                	je     0x47a23b
  47a236:	e8 95 f6 f8 ff       	call   0x4098d0
  47a23b:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47a23d:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  47a241:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a245:	e8 66 a2 10 00       	call   0x5844b0
  47a24a:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a24e:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a252:	e8 b9 30 10 00       	call   0x57d310
  47a257:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a25b:	85 c0                	test   eax,eax
  47a25d:	74 2a                	je     0x47a289
  47a25f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47a263:	85 c0                	test   eax,eax
  47a265:	74 22                	je     0x47a289
  47a267:	51                   	push   ecx
  47a268:	8b cc                	mov    ecx,esp
  47a26a:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  47a26e:	89 01                	mov    DWORD PTR [ecx],eax
  47a270:	e8 3b a2 10 00       	call   0x5844b0
  47a275:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a279:	88 5c 24 70          	mov    BYTE PTR [esp+0x70],bl
  47a27d:	e8 5e 8b f9 ff       	call   0x412de0
  47a282:	8b c8                	mov    ecx,eax
  47a284:	e8 17 0c 09 00       	call   0x50aea0
  47a289:	8b 8d 00 01 00 00    	mov    ecx,DWORD PTR [ebp+0x100]
  47a28f:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a293:	8d b5 00 01 00 00    	lea    esi,[ebp+0x100]
  47a299:	3b c8                	cmp    ecx,eax
  47a29b:	74 16                	je     0x47a2b3
  47a29d:	85 c9                	test   ecx,ecx
  47a29f:	74 05                	je     0x47a2a6
  47a2a1:	e8 2a f6 f8 ff       	call   0x4098d0
  47a2a6:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47a2aa:	8b ce                	mov    ecx,esi
  47a2ac:	89 16                	mov    DWORD PTR [esi],edx
  47a2ae:	e8 fd a1 10 00       	call   0x5844b0
  47a2b3:	bf 60 30 69 00       	mov    edi,0x693060
  47a2b8:	83 c9 ff             	or     ecx,0xffffffff
  47a2bb:	33 c0                	xor    eax,eax
  47a2bd:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a2bf:	f7 d1                	not    ecx
  47a2c1:	49                   	dec    ecx
  47a2c2:	51                   	push   ecx
  47a2c3:	68 60 30 69 00       	push   0x693060
  47a2c8:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47a2cc:	e8 1f 9e f8 ff       	call   0x4040f0
  47a2d1:	bf 50 30 69 00       	mov    edi,0x693050
  47a2d6:	83 c9 ff             	or     ecx,0xffffffff
  47a2d9:	33 c0                	xor    eax,eax
  47a2db:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a2dd:	f7 d1                	not    ecx
  47a2df:	49                   	dec    ecx
  47a2e0:	51                   	push   ecx
  47a2e1:	68 50 30 69 00       	push   0x693050
  47a2e6:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47a2ea:	e8 01 9e f8 ff       	call   0x4040f0
  47a2ef:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47a2f4:	85 c0                	test   eax,eax
  47a2f6:	75 05                	jne    0x47a2fd
  47a2f8:	e8 83 0f 0e 00       	call   0x55b280
  47a2fd:	8b f0                	mov    esi,eax
  47a2ff:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  47a305:	85 c0                	test   eax,eax
  47a307:	75 45                	jne    0x47a34e
  47a309:	8d 44 24 13          	lea    eax,[esp+0x13]
  47a30d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a311:	50                   	push   eax
  47a312:	68 70 3f 6b 00       	push   0x6b3f70
  47a317:	e8 f4 f4 f8 ff       	call   0x409810
  47a31c:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a320:	c6 44 24 6c 11       	mov    BYTE PTR [esp+0x6c],0x11
  47a325:	51                   	push   ecx
  47a326:	68 88 01 00 00       	push   0x188
  47a32b:	68 58 eb 68 00       	push   0x68eb58
  47a330:	68 4c eb 68 00       	push   0x68eb4c
  47a335:	e8 b6 64 12 00       	call   0x5a07f0
  47a33a:	ff d0                	call   eax
  47a33c:	83 c4 10             	add    esp,0x10
  47a33f:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a343:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a347:	6a 01                	push   0x1
  47a349:	e8 52 9d f8 ff       	call   0x4040a0
  47a34e:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  47a354:	8d 54 24 34          	lea    edx,[esp+0x34]
  47a358:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  47a35c:	52                   	push   edx
  47a35d:	50                   	push   eax
  47a35e:	e8 1d 36 09 00       	call   0x50d980
  47a363:	8b f0                	mov    esi,eax
  47a365:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47a369:	8b 06                	mov    eax,DWORD PTR [esi]
  47a36b:	3b c8                	cmp    ecx,eax
  47a36d:	c6 44 24 6c 12       	mov    BYTE PTR [esp+0x6c],0x12
  47a372:	74 18                	je     0x47a38c
  47a374:	85 c9                	test   ecx,ecx
  47a376:	74 05                	je     0x47a37d
  47a378:	e8 53 f5 f8 ff       	call   0x4098d0
  47a37d:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47a37f:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47a383:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47a387:	e8 24 a1 10 00       	call   0x5844b0
  47a38c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a390:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a394:	e8 77 2f 10 00       	call   0x57d310
  47a399:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47a39d:	85 c0                	test   eax,eax
  47a39f:	0f 86 ab 00 00 00    	jbe    0x47a450
  47a3a5:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  47a3ab:	85 f6                	test   esi,esi
  47a3ad:	75 07                	jne    0x47a3b6
  47a3af:	e8 cc 0e 0e 00       	call   0x55b280
  47a3b4:	8b f0                	mov    esi,eax
  47a3b6:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  47a3bc:	85 c0                	test   eax,eax
  47a3be:	75 45                	jne    0x47a405
  47a3c0:	8d 54 24 13          	lea    edx,[esp+0x13]
  47a3c4:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a3c8:	52                   	push   edx
  47a3c9:	68 70 3f 6b 00       	push   0x6b3f70
  47a3ce:	e8 3d f4 f8 ff       	call   0x409810
  47a3d3:	8d 44 24 44          	lea    eax,[esp+0x44]
  47a3d7:	c6 44 24 6c 13       	mov    BYTE PTR [esp+0x6c],0x13
  47a3dc:	50                   	push   eax
  47a3dd:	68 88 01 00 00       	push   0x188
  47a3e2:	68 58 eb 68 00       	push   0x68eb58
  47a3e7:	68 4c eb 68 00       	push   0x68eb4c
  47a3ec:	e8 ff 63 12 00       	call   0x5a07f0
  47a3f1:	ff d0                	call   eax
  47a3f3:	83 c4 10             	add    esp,0x10
  47a3f6:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a3fa:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a3fe:	6a 01                	push   0x1
  47a400:	e8 9b 9c f8 ff       	call   0x4040a0
  47a405:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  47a40b:	8d 54 24 24          	lea    edx,[esp+0x24]
  47a40f:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  47a413:	52                   	push   edx
  47a414:	50                   	push   eax
  47a415:	e8 66 35 09 00       	call   0x50d980
  47a41a:	8b f0                	mov    esi,eax
  47a41c:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  47a420:	8b 06                	mov    eax,DWORD PTR [esi]
  47a422:	3b c8                	cmp    ecx,eax
  47a424:	c6 44 24 6c 14       	mov    BYTE PTR [esp+0x6c],0x14
  47a429:	74 18                	je     0x47a443
  47a42b:	85 c9                	test   ecx,ecx
  47a42d:	74 05                	je     0x47a434
  47a42f:	e8 9c f4 f8 ff       	call   0x4098d0
  47a434:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47a436:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  47a43a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a43e:	e8 6d a0 10 00       	call   0x5844b0
  47a443:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a447:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a44b:	e8 c0 2e 10 00       	call   0x57d310
  47a450:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a454:	85 c0                	test   eax,eax
  47a456:	74 2a                	je     0x47a482
  47a458:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47a45c:	85 c0                	test   eax,eax
  47a45e:	74 22                	je     0x47a482
  47a460:	51                   	push   ecx
  47a461:	8b cc                	mov    ecx,esp
  47a463:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  47a467:	89 01                	mov    DWORD PTR [ecx],eax
  47a469:	e8 42 a0 10 00       	call   0x5844b0
  47a46e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a472:	88 5c 24 70          	mov    BYTE PTR [esp+0x70],bl
  47a476:	e8 65 89 f9 ff       	call   0x412de0
  47a47b:	8b c8                	mov    ecx,eax
  47a47d:	e8 1e 0a 09 00       	call   0x50aea0
  47a482:	8b 8d 04 01 00 00    	mov    ecx,DWORD PTR [ebp+0x104]
  47a488:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a48c:	8d b5 04 01 00 00    	lea    esi,[ebp+0x104]
  47a492:	3b c8                	cmp    ecx,eax
  47a494:	74 16                	je     0x47a4ac
  47a496:	85 c9                	test   ecx,ecx
  47a498:	74 05                	je     0x47a49f
  47a49a:	e8 31 f4 f8 ff       	call   0x4098d0
  47a49f:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47a4a3:	8b ce                	mov    ecx,esi
  47a4a5:	89 16                	mov    DWORD PTR [esi],edx
  47a4a7:	e8 04 a0 10 00       	call   0x5844b0
  47a4ac:	bf 44 30 69 00       	mov    edi,0x693044
  47a4b1:	83 c9 ff             	or     ecx,0xffffffff
  47a4b4:	33 c0                	xor    eax,eax
  47a4b6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a4b8:	f7 d1                	not    ecx
  47a4ba:	49                   	dec    ecx
  47a4bb:	51                   	push   ecx
  47a4bc:	68 44 30 69 00       	push   0x693044
  47a4c1:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47a4c5:	e8 26 9c f8 ff       	call   0x4040f0
  47a4ca:	bf 38 30 69 00       	mov    edi,0x693038
  47a4cf:	83 c9 ff             	or     ecx,0xffffffff
  47a4d2:	33 c0                	xor    eax,eax
  47a4d4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a4d6:	f7 d1                	not    ecx
  47a4d8:	49                   	dec    ecx
  47a4d9:	51                   	push   ecx
  47a4da:	68 38 30 69 00       	push   0x693038
  47a4df:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47a4e3:	e8 08 9c f8 ff       	call   0x4040f0
  47a4e8:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47a4ed:	85 c0                	test   eax,eax
  47a4ef:	75 05                	jne    0x47a4f6
  47a4f1:	e8 8a 0d 0e 00       	call   0x55b280
  47a4f6:	8b f0                	mov    esi,eax
  47a4f8:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  47a4fe:	85 c0                	test   eax,eax
  47a500:	75 45                	jne    0x47a547
  47a502:	8d 44 24 13          	lea    eax,[esp+0x13]
  47a506:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a50a:	50                   	push   eax
  47a50b:	68 70 3f 6b 00       	push   0x6b3f70
  47a510:	e8 fb f2 f8 ff       	call   0x409810
  47a515:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a519:	c6 44 24 6c 16       	mov    BYTE PTR [esp+0x6c],0x16
  47a51e:	51                   	push   ecx
  47a51f:	68 88 01 00 00       	push   0x188
  47a524:	68 58 eb 68 00       	push   0x68eb58
  47a529:	68 4c eb 68 00       	push   0x68eb4c
  47a52e:	e8 bd 62 12 00       	call   0x5a07f0
  47a533:	ff d0                	call   eax
  47a535:	83 c4 10             	add    esp,0x10
  47a538:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a53c:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a540:	6a 01                	push   0x1
  47a542:	e8 59 9b f8 ff       	call   0x4040a0
  47a547:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  47a54d:	8d 54 24 34          	lea    edx,[esp+0x34]
  47a551:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  47a555:	52                   	push   edx
  47a556:	50                   	push   eax
  47a557:	e8 24 34 09 00       	call   0x50d980
  47a55c:	8b f0                	mov    esi,eax
  47a55e:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47a562:	8b 06                	mov    eax,DWORD PTR [esi]
  47a564:	3b c8                	cmp    ecx,eax
  47a566:	c6 44 24 6c 17       	mov    BYTE PTR [esp+0x6c],0x17
  47a56b:	74 18                	je     0x47a585
  47a56d:	85 c9                	test   ecx,ecx
  47a56f:	74 05                	je     0x47a576
  47a571:	e8 5a f3 f8 ff       	call   0x4098d0
  47a576:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47a578:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47a57c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47a580:	e8 2b 9f 10 00       	call   0x5844b0
  47a585:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a589:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a58d:	e8 7e 2d 10 00       	call   0x57d310
  47a592:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47a596:	85 c0                	test   eax,eax
  47a598:	0f 86 ab 00 00 00    	jbe    0x47a649
  47a59e:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  47a5a4:	85 f6                	test   esi,esi
  47a5a6:	75 07                	jne    0x47a5af
  47a5a8:	e8 d3 0c 0e 00       	call   0x55b280
  47a5ad:	8b f0                	mov    esi,eax
  47a5af:	8b 86 d8 00 00 00    	mov    eax,DWORD PTR [esi+0xd8]
  47a5b5:	85 c0                	test   eax,eax
  47a5b7:	75 45                	jne    0x47a5fe
  47a5b9:	8d 54 24 13          	lea    edx,[esp+0x13]
  47a5bd:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a5c1:	52                   	push   edx
  47a5c2:	68 70 3f 6b 00       	push   0x6b3f70
  47a5c7:	e8 44 f2 f8 ff       	call   0x409810
  47a5cc:	8d 44 24 44          	lea    eax,[esp+0x44]
  47a5d0:	c6 44 24 6c 18       	mov    BYTE PTR [esp+0x6c],0x18
  47a5d5:	50                   	push   eax
  47a5d6:	68 88 01 00 00       	push   0x188
  47a5db:	68 58 eb 68 00       	push   0x68eb58
  47a5e0:	68 4c eb 68 00       	push   0x68eb4c
  47a5e5:	e8 06 62 12 00       	call   0x5a07f0
  47a5ea:	ff d0                	call   eax
  47a5ec:	83 c4 10             	add    esp,0x10
  47a5ef:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47a5f3:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a5f7:	6a 01                	push   0x1
  47a5f9:	e8 a2 9a f8 ff       	call   0x4040a0
  47a5fe:	8b 8e d8 00 00 00    	mov    ecx,DWORD PTR [esi+0xd8]
  47a604:	8d 54 24 24          	lea    edx,[esp+0x24]
  47a608:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  47a60c:	52                   	push   edx
  47a60d:	50                   	push   eax
  47a60e:	e8 6d 33 09 00       	call   0x50d980
  47a613:	8b f0                	mov    esi,eax
  47a615:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  47a619:	8b 06                	mov    eax,DWORD PTR [esi]
  47a61b:	3b c8                	cmp    ecx,eax
  47a61d:	c6 44 24 6c 19       	mov    BYTE PTR [esp+0x6c],0x19
  47a622:	74 18                	je     0x47a63c
  47a624:	85 c9                	test   ecx,ecx
  47a626:	74 05                	je     0x47a62d
  47a628:	e8 a3 f2 f8 ff       	call   0x4098d0
  47a62d:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47a62f:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  47a633:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a637:	e8 74 9e 10 00       	call   0x5844b0
  47a63c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a640:	88 5c 24 6c          	mov    BYTE PTR [esp+0x6c],bl
  47a644:	e8 c7 2c 10 00       	call   0x57d310
  47a649:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a64d:	85 c0                	test   eax,eax
  47a64f:	74 2a                	je     0x47a67b
  47a651:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47a655:	85 c0                	test   eax,eax
  47a657:	74 22                	je     0x47a67b
  47a659:	51                   	push   ecx
  47a65a:	8b cc                	mov    ecx,esp
  47a65c:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  47a660:	89 01                	mov    DWORD PTR [ecx],eax
  47a662:	e8 49 9e 10 00       	call   0x5844b0
  47a667:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a66b:	88 5c 24 70          	mov    BYTE PTR [esp+0x70],bl
  47a66f:	e8 6c 87 f9 ff       	call   0x412de0
  47a674:	8b c8                	mov    ecx,eax
  47a676:	e8 25 08 09 00       	call   0x50aea0
  47a67b:	8b 8d 08 01 00 00    	mov    ecx,DWORD PTR [ebp+0x108]
  47a681:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47a685:	8d b5 08 01 00 00    	lea    esi,[ebp+0x108]
  47a68b:	3b c8                	cmp    ecx,eax
  47a68d:	74 16                	je     0x47a6a5
  47a68f:	85 c9                	test   ecx,ecx
  47a691:	74 05                	je     0x47a698
  47a693:	e8 38 f2 f8 ff       	call   0x4098d0
  47a698:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47a69c:	8b ce                	mov    ecx,esi
  47a69e:	89 16                	mov    DWORD PTR [esi],edx
  47a6a0:	e8 0b 9e 10 00       	call   0x5844b0
  47a6a5:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
  47a6a9:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  47a6ad:	51                   	push   ecx
  47a6ae:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47a6b2:	8b 70 0c             	mov    esi,DWORD PTR [eax+0xc]
  47a6b5:	e8 e6 3d fd ff       	call   0x44e4a0
  47a6ba:	85 f6                	test   esi,esi
  47a6bc:	c6 44 24 6c 1b       	mov    BYTE PTR [esp+0x6c],0x1b
  47a6c1:	75 17                	jne    0x47a6da
  47a6c3:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47a6c8:	83 c9 ff             	or     ecx,0xffffffff
  47a6cb:	33 c0                	xor    eax,eax
  47a6cd:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a6cf:	f7 d1                	not    ecx
  47a6d1:	49                   	dec    ecx
  47a6d2:	51                   	push   ecx
  47a6d3:	68 70 3f 6b 00       	push   0x6b3f70
  47a6d8:	eb 0e                	jmp    0x47a6e8
  47a6da:	8b fe                	mov    edi,esi
  47a6dc:	83 c9 ff             	or     ecx,0xffffffff
  47a6df:	33 c0                	xor    eax,eax
  47a6e1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a6e3:	f7 d1                	not    ecx
  47a6e5:	49                   	dec    ecx
  47a6e6:	51                   	push   ecx
  47a6e7:	56                   	push   esi
  47a6e8:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  47a6ec:	e8 ff 99 f8 ff       	call   0x4040f0
  47a6f1:	8d 54 24 44          	lea    edx,[esp+0x44]
  47a6f5:	8b cd                	mov    ecx,ebp
  47a6f7:	52                   	push   edx
  47a6f8:	e8 e3 93 08 00       	call   0x503ae0
  47a6fd:	6a 01                	push   0x1
  47a6ff:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47a703:	88 5c 24 70          	mov    BYTE PTR [esp+0x70],bl
  47a707:	e8 94 99 f8 ff       	call   0x4040a0
  47a70c:	8b 74 24 74          	mov    esi,DWORD PTR [esp+0x74]
  47a710:	8b cd                	mov    ecx,ebp
  47a712:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  47a715:	50                   	push   eax
  47a716:	e8 25 bf ff ff       	call   0x476640
  47a71b:	8b 7e 14             	mov    edi,DWORD PTR [esi+0x14]
  47a71e:	85 ff                	test   edi,edi
  47a720:	0f 95 c1             	setne  cl
  47a723:	51                   	push   ecx
  47a724:	8b cd                	mov    ecx,ebp
  47a726:	e8 25 7c 08 00       	call   0x502350
  47a72b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a72f:	c6 44 24 6c 05       	mov    BYTE PTR [esp+0x6c],0x5
  47a734:	e8 d7 2b 10 00       	call   0x57d310
  47a739:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47a73d:	c6 44 24 6c 04       	mov    BYTE PTR [esp+0x6c],0x4
  47a742:	e8 c9 2b 10 00       	call   0x57d310
  47a747:	6a 01                	push   0x1
  47a749:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47a74d:	c6 44 24 70 03       	mov    BYTE PTR [esp+0x70],0x3
  47a752:	e8 49 99 f8 ff       	call   0x4040a0
  47a757:	6a 01                	push   0x1
  47a759:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47a75d:	c7 44 24 70 ff ff ff 	mov    DWORD PTR [esp+0x70],0xffffffff
  47a764:	ff 
  47a765:	e8 36 99 f8 ff       	call   0x4040a0
  47a76a:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  47a76e:	5f                   	pop    edi
  47a76f:	8b c5                	mov    eax,ebp
  47a771:	5e                   	pop    esi
  47a772:	5d                   	pop    ebp
  47a773:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47a77a:	5b                   	pop    ebx
  47a77b:	83 c4 60             	add    esp,0x60
  47a77e:	c3                   	ret
  47a77f:	90                   	nop
  47a780:	56                   	push   esi
  47a781:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  47a785:	8b ce                	mov    ecx,esi
  47a787:	e8 44 88 13 00       	call   0x5b2fd0
  47a78c:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  47a790:	d9 46 04             	fld    DWORD PTR [esi+0x4]
  47a793:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  47a797:	d9 e1                	fabs
  47a799:	de f9                	fdivp  st(1),st
  47a79b:	e8 70 09 19 00       	call   0x60b110
  47a7a0:	5e                   	pop    esi
  47a7a1:	c3                   	ret
  47a7a2:	90                   	nop
  47a7a3:	90                   	nop
  47a7a4:	90                   	nop
  47a7a5:	90                   	nop
  47a7a6:	90                   	nop
  47a7a7:	90                   	nop
  47a7a8:	90                   	nop
  47a7a9:	90                   	nop
  47a7aa:	90                   	nop
  47a7ab:	90                   	nop
  47a7ac:	90                   	nop
  47a7ad:	90                   	nop
  47a7ae:	90                   	nop
  47a7af:	90                   	nop
  47a7b0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47a7b6:	6a ff                	push   0xffffffff
  47a7b8:	68 f8 8c 62 00       	push   0x628cf8
  47a7bd:	50                   	push   eax
  47a7be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47a7c5:	83 ec 28             	sub    esp,0x28
  47a7c8:	56                   	push   esi
  47a7c9:	8b f1                	mov    esi,ecx
  47a7cb:	8a 86 f8 03 00 00    	mov    al,BYTE PTR [esi+0x3f8]
  47a7d1:	84 c0                	test   al,al
  47a7d3:	0f 84 71 03 00 00    	je     0x47ab4a
  47a7d9:	55                   	push   ebp
  47a7da:	8d 44 24 0c          	lea    eax,[esp+0xc]
  47a7de:	57                   	push   edi
  47a7df:	50                   	push   eax
  47a7e0:	e8 fb 9a f8 ff       	call   0x4042e0
  47a7e5:	8b e8                	mov    ebp,eax
  47a7e7:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  47a7ea:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
  47a7f1:	00 
  47a7f2:	85 c0                	test   eax,eax
  47a7f4:	75 64                	jne    0x47a85a
  47a7f6:	8a 4c 24 0e          	mov    cl,BYTE PTR [esp+0xe]
  47a7fa:	6a 00                	push   0x0
  47a7fc:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  47a800:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47a804:	e8 97 98 f8 ff       	call   0x4040a0
  47a809:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47a80e:	83 c9 ff             	or     ecx,0xffffffff
  47a811:	33 c0                	xor    eax,eax
  47a813:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a815:	f7 d1                	not    ecx
  47a817:	49                   	dec    ecx
  47a818:	51                   	push   ecx
  47a819:	68 70 3f 6b 00       	push   0x6b3f70
  47a81e:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47a822:	e8 c9 98 f8 ff       	call   0x4040f0
  47a827:	8d 54 24 14          	lea    edx,[esp+0x14]
  47a82b:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  47a830:	52                   	push   edx
  47a831:	68 b6 00 00 00       	push   0xb6
  47a836:	68 38 d6 68 00       	push   0x68d638
  47a83b:	68 2c d6 68 00       	push   0x68d62c
  47a840:	e8 ab 5f 12 00       	call   0x5a07f0
  47a845:	ff d0                	call   eax
  47a847:	83 c4 10             	add    esp,0x10
  47a84a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47a84e:	c6 44 24 3c 00       	mov    BYTE PTR [esp+0x3c],0x0
  47a853:	6a 01                	push   0x1
  47a855:	e8 46 98 f8 ff       	call   0x4040a0
  47a85a:	8b 6d 00             	mov    ebp,DWORD PTR [ebp+0x0]
  47a85d:	8b 45 5c             	mov    eax,DWORD PTR [ebp+0x5c]
  47a860:	85 c0                	test   eax,eax
  47a862:	75 64                	jne    0x47a8c8
  47a864:	8a 44 24 0e          	mov    al,BYTE PTR [esp+0xe]
  47a868:	6a 00                	push   0x0
  47a86a:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47a86e:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  47a872:	e8 29 98 f8 ff       	call   0x4040a0
  47a877:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47a87c:	83 c9 ff             	or     ecx,0xffffffff
  47a87f:	33 c0                	xor    eax,eax
  47a881:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a883:	f7 d1                	not    ecx
  47a885:	49                   	dec    ecx
  47a886:	51                   	push   ecx
  47a887:	68 70 3f 6b 00       	push   0x6b3f70
  47a88c:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47a890:	e8 5b 98 f8 ff       	call   0x4040f0
  47a895:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47a899:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  47a89e:	51                   	push   ecx
  47a89f:	68 44 01 00 00       	push   0x144
  47a8a4:	68 b8 e1 68 00       	push   0x68e1b8
  47a8a9:	68 a8 e1 68 00       	push   0x68e1a8
  47a8ae:	e8 3d 5f 12 00       	call   0x5a07f0
  47a8b3:	ff d0                	call   eax
  47a8b5:	83 c4 10             	add    esp,0x10
  47a8b8:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47a8bc:	c6 44 24 3c 00       	mov    BYTE PTR [esp+0x3c],0x0
  47a8c1:	6a 01                	push   0x1
  47a8c3:	e8 d8 97 f8 ff       	call   0x4040a0
  47a8c8:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47a8cc:	8b 6d 5c             	mov    ebp,DWORD PTR [ebp+0x5c]
  47a8cf:	85 c9                	test   ecx,ecx
  47a8d1:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  47a8d8:	ff 
  47a8d9:	74 05                	je     0x47a8e0
  47a8db:	e8 f0 ef f8 ff       	call   0x4098d0
  47a8e0:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  47a8e6:	85 ff                	test   edi,edi
  47a8e8:	75 07                	jne    0x47a8f1
  47a8ea:	e8 91 1b 04 00       	call   0x4bc480
  47a8ef:	8b f8                	mov    edi,eax
  47a8f1:	8b 87 e8 04 00 00    	mov    eax,DWORD PTR [edi+0x4e8]
  47a8f7:	3d 00 00 00 80       	cmp    eax,0x80000000
  47a8fc:	75 1e                	jne    0x47a91c
  47a8fe:	8b 87 9c 04 00 00    	mov    eax,DWORD PTR [edi+0x49c]
  47a904:	85 c0                	test   eax,eax
  47a906:	75 05                	jne    0x47a90d
  47a908:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47a90d:	50                   	push   eax
  47a90e:	e8 fd 05 19 00       	call   0x60af10
  47a913:	83 c4 04             	add    esp,0x4
  47a916:	89 87 e8 04 00 00    	mov    DWORD PTR [edi+0x4e8],eax
  47a91c:	85 c0                	test   eax,eax
  47a91e:	0f 85 30 01 00 00    	jne    0x47aa54
  47a924:	8b 86 04 01 00 00    	mov    eax,DWORD PTR [esi+0x104]
  47a92a:	85 c0                	test   eax,eax
  47a92c:	75 6a                	jne    0x47a998
  47a92e:	8a 54 24 0e          	mov    dl,BYTE PTR [esp+0xe]
  47a932:	6a 00                	push   0x0
  47a934:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47a938:	88 54 24 28          	mov    BYTE PTR [esp+0x28],dl
  47a93c:	e8 5f 97 f8 ff       	call   0x4040a0
  47a941:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47a946:	83 c9 ff             	or     ecx,0xffffffff
  47a949:	33 c0                	xor    eax,eax
  47a94b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a94d:	f7 d1                	not    ecx
  47a94f:	49                   	dec    ecx
  47a950:	51                   	push   ecx
  47a951:	68 70 3f 6b 00       	push   0x6b3f70
  47a956:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47a95a:	e8 91 97 f8 ff       	call   0x4040f0
  47a95f:	8d 44 24 24          	lea    eax,[esp+0x24]
  47a963:	c7 44 24 3c 03 00 00 	mov    DWORD PTR [esp+0x3c],0x3
  47a96a:	00 
  47a96b:	50                   	push   eax
  47a96c:	68 b6 00 00 00       	push   0xb6
  47a971:	68 38 d6 68 00       	push   0x68d638
  47a976:	68 2c d6 68 00       	push   0x68d62c
  47a97b:	e8 70 5e 12 00       	call   0x5a07f0
  47a980:	ff d0                	call   eax
  47a982:	83 c4 10             	add    esp,0x10
  47a985:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47a989:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  47a990:	ff 
  47a991:	6a 01                	push   0x1
  47a993:	e8 08 97 f8 ff       	call   0x4040a0
  47a998:	8b 8e 04 01 00 00    	mov    ecx,DWORD PTR [esi+0x104]
  47a99e:	6a 00                	push   0x0
  47a9a0:	6a 01                	push   0x1
  47a9a2:	6a 00                	push   0x0
  47a9a4:	e8 c7 00 09 00       	call   0x50aa70
  47a9a9:	50                   	push   eax
  47a9aa:	8d 8e c0 01 00 00    	lea    ecx,[esi+0x1c0]
  47a9b0:	6a 04                	push   0x4
  47a9b2:	51                   	push   ecx
  47a9b3:	55                   	push   ebp
  47a9b4:	e8 d7 c4 13 00       	call   0x5b6e90
  47a9b9:	8b 86 04 01 00 00    	mov    eax,DWORD PTR [esi+0x104]
  47a9bf:	83 c4 1c             	add    esp,0x1c
  47a9c2:	85 c0                	test   eax,eax
  47a9c4:	75 6a                	jne    0x47aa30
  47a9c6:	8a 54 24 0e          	mov    dl,BYTE PTR [esp+0xe]
  47a9ca:	6a 00                	push   0x0
  47a9cc:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47a9d0:	88 54 24 28          	mov    BYTE PTR [esp+0x28],dl
  47a9d4:	e8 c7 96 f8 ff       	call   0x4040a0
  47a9d9:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47a9de:	83 c9 ff             	or     ecx,0xffffffff
  47a9e1:	33 c0                	xor    eax,eax
  47a9e3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47a9e5:	f7 d1                	not    ecx
  47a9e7:	49                   	dec    ecx
  47a9e8:	51                   	push   ecx
  47a9e9:	68 70 3f 6b 00       	push   0x6b3f70
  47a9ee:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47a9f2:	e8 f9 96 f8 ff       	call   0x4040f0
  47a9f7:	8d 44 24 24          	lea    eax,[esp+0x24]
  47a9fb:	c7 44 24 3c 04 00 00 	mov    DWORD PTR [esp+0x3c],0x4
  47aa02:	00 
  47aa03:	50                   	push   eax
  47aa04:	68 b6 00 00 00       	push   0xb6
  47aa09:	68 38 d6 68 00       	push   0x68d638
  47aa0e:	68 2c d6 68 00       	push   0x68d62c
  47aa13:	e8 d8 5d 12 00       	call   0x5a07f0
  47aa18:	ff d0                	call   eax
  47aa1a:	83 c4 10             	add    esp,0x10
  47aa1d:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47aa21:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  47aa28:	ff 
  47aa29:	6a 01                	push   0x1
  47aa2b:	e8 70 96 f8 ff       	call   0x4040a0
  47aa30:	8b 8e 04 01 00 00    	mov    ecx,DWORD PTR [esi+0x104]
  47aa36:	6a 00                	push   0x0
  47aa38:	6a 01                	push   0x1
  47aa3a:	6a 00                	push   0x0
  47aa3c:	e8 2f 00 09 00       	call   0x50aa70
  47aa41:	50                   	push   eax
  47aa42:	8d 8e 50 02 00 00    	lea    ecx,[esi+0x250]
  47aa48:	6a 04                	push   0x4
  47aa4a:	51                   	push   ecx
  47aa4b:	55                   	push   ebp
  47aa4c:	e8 3f c4 13 00       	call   0x5b6e90
  47aa51:	83 c4 1c             	add    esp,0x1c
  47aa54:	8b 86 00 01 00 00    	mov    eax,DWORD PTR [esi+0x100]
  47aa5a:	85 c0                	test   eax,eax
  47aa5c:	75 4c                	jne    0x47aaaa
  47aa5e:	8d 54 24 0e          	lea    edx,[esp+0xe]
  47aa62:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47aa66:	52                   	push   edx
  47aa67:	68 70 3f 6b 00       	push   0x6b3f70
  47aa6c:	e8 9f ed f8 ff       	call   0x409810
  47aa71:	8d 44 24 24          	lea    eax,[esp+0x24]
  47aa75:	c7 44 24 3c 05 00 00 	mov    DWORD PTR [esp+0x3c],0x5
  47aa7c:	00 
  47aa7d:	50                   	push   eax
  47aa7e:	68 b6 00 00 00       	push   0xb6
  47aa83:	68 38 d6 68 00       	push   0x68d638
  47aa88:	68 2c d6 68 00       	push   0x68d62c
  47aa8d:	e8 5e 5d 12 00       	call   0x5a07f0
  47aa92:	ff d0                	call   eax
  47aa94:	83 c4 10             	add    esp,0x10
  47aa97:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47aa9b:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  47aaa2:	ff 
  47aaa3:	6a 01                	push   0x1
  47aaa5:	e8 f6 95 f8 ff       	call   0x4040a0
  47aaaa:	8b 8e 00 01 00 00    	mov    ecx,DWORD PTR [esi+0x100]
  47aab0:	6a 00                	push   0x0
  47aab2:	6a 01                	push   0x1
  47aab4:	6a 00                	push   0x0
  47aab6:	e8 b5 ff 08 00       	call   0x50aa70
  47aabb:	50                   	push   eax
  47aabc:	8d 8e e0 02 00 00    	lea    ecx,[esi+0x2e0]
  47aac2:	6a 04                	push   0x4
  47aac4:	51                   	push   ecx
  47aac5:	55                   	push   ebp
  47aac6:	e8 c5 c3 13 00       	call   0x5b6e90
  47aacb:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  47aad1:	83 c4 1c             	add    esp,0x1c
  47aad4:	85 c0                	test   eax,eax
  47aad6:	75 4c                	jne    0x47ab24
  47aad8:	8d 54 24 0f          	lea    edx,[esp+0xf]
  47aadc:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47aae0:	52                   	push   edx
  47aae1:	68 70 3f 6b 00       	push   0x6b3f70
  47aae6:	e8 25 ed f8 ff       	call   0x409810
  47aaeb:	8d 44 24 14          	lea    eax,[esp+0x14]
  47aaef:	c7 44 24 3c 06 00 00 	mov    DWORD PTR [esp+0x3c],0x6
  47aaf6:	00 
  47aaf7:	50                   	push   eax
  47aaf8:	68 b6 00 00 00       	push   0xb6
  47aafd:	68 38 d6 68 00       	push   0x68d638
  47ab02:	68 2c d6 68 00       	push   0x68d62c
  47ab07:	e8 e4 5c 12 00       	call   0x5a07f0
  47ab0c:	ff d0                	call   eax
  47ab0e:	83 c4 10             	add    esp,0x10
  47ab11:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47ab15:	c7 44 24 3c ff ff ff 	mov    DWORD PTR [esp+0x3c],0xffffffff
  47ab1c:	ff 
  47ab1d:	6a 01                	push   0x1
  47ab1f:	e8 7c 95 f8 ff       	call   0x4040a0
  47ab24:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  47ab2a:	6a 00                	push   0x0
  47ab2c:	6a 08                	push   0x8
  47ab2e:	6a 00                	push   0x0
  47ab30:	e8 3b ff 08 00       	call   0x50aa70
  47ab35:	50                   	push   eax
  47ab36:	81 c6 30 01 00 00    	add    esi,0x130
  47ab3c:	6a 04                	push   0x4
  47ab3e:	56                   	push   esi
  47ab3f:	55                   	push   ebp
  47ab40:	e8 4b c3 13 00       	call   0x5b6e90
  47ab45:	83 c4 1c             	add    esp,0x1c
  47ab48:	5f                   	pop    edi
  47ab49:	5d                   	pop    ebp
  47ab4a:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  47ab4e:	5e                   	pop    esi
  47ab4f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47ab56:	83 c4 34             	add    esp,0x34
  47ab59:	c3                   	ret
  47ab5a:	90                   	nop
  47ab5b:	90                   	nop
  47ab5c:	90                   	nop
  47ab5d:	90                   	nop
  47ab5e:	90                   	nop
  47ab5f:	90                   	nop
  47ab60:	6a ff                	push   0xffffffff
  47ab62:	68 52 8d 62 00       	push   0x628d52
  47ab67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47ab6d:	50                   	push   eax
  47ab6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47ab75:	81 ec 04 01 00 00    	sub    esp,0x104
  47ab7b:	53                   	push   ebx
  47ab7c:	55                   	push   ebp
  47ab7d:	56                   	push   esi
  47ab7e:	8d 44 24 10          	lea    eax,[esp+0x10]
  47ab82:	57                   	push   edi
  47ab83:	8b e9                	mov    ebp,ecx
  47ab85:	50                   	push   eax
  47ab86:	89 6c 24 50          	mov    DWORD PTR [esp+0x50],ebp
  47ab8a:	e8 51 97 f8 ff       	call   0x4042e0
  47ab8f:	8b f0                	mov    esi,eax
  47ab91:	8b 06                	mov    eax,DWORD PTR [esi]
  47ab93:	33 db                	xor    ebx,ebx
  47ab95:	3b c3                	cmp    eax,ebx
  47ab97:	89 9c 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],ebx
  47ab9e:	75 68                	jne    0x47ac08
  47aba0:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  47aba4:	53                   	push   ebx
  47aba5:	88 4c 24 40          	mov    BYTE PTR [esp+0x40],cl
  47aba9:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  47abad:	e8 ee 94 f8 ff       	call   0x4040a0
  47abb2:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47abb7:	83 c9 ff             	or     ecx,0xffffffff
  47abba:	33 c0                	xor    eax,eax
  47abbc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47abbe:	f7 d1                	not    ecx
  47abc0:	49                   	dec    ecx
  47abc1:	51                   	push   ecx
  47abc2:	68 70 3f 6b 00       	push   0x6b3f70
  47abc7:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47abcb:	e8 20 95 f8 ff       	call   0x4040f0
  47abd0:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47abd4:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x1
  47abdb:	01 
  47abdc:	52                   	push   edx
  47abdd:	68 b6 00 00 00       	push   0xb6
  47abe2:	68 38 d6 68 00       	push   0x68d638
  47abe7:	68 2c d6 68 00       	push   0x68d62c
  47abec:	e8 ff 5b 12 00       	call   0x5a07f0
  47abf1:	ff d0                	call   eax
  47abf3:	83 c4 10             	add    esp,0x10
  47abf6:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47abfa:	88 9c 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],bl
  47ac01:	6a 01                	push   0x1
  47ac03:	e8 98 94 f8 ff       	call   0x4040a0
  47ac08:	8b 36                	mov    esi,DWORD PTR [esi]
  47ac0a:	39 5e 5c             	cmp    DWORD PTR [esi+0x5c],ebx
  47ac0d:	75 68                	jne    0x47ac77
  47ac0f:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  47ac13:	53                   	push   ebx
  47ac14:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  47ac18:	88 44 24 58          	mov    BYTE PTR [esp+0x58],al
  47ac1c:	e8 7f 94 f8 ff       	call   0x4040a0
  47ac21:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47ac26:	83 c9 ff             	or     ecx,0xffffffff
  47ac29:	33 c0                	xor    eax,eax
  47ac2b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47ac2d:	f7 d1                	not    ecx
  47ac2f:	49                   	dec    ecx
  47ac30:	51                   	push   ecx
  47ac31:	68 70 3f 6b 00       	push   0x6b3f70
  47ac36:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  47ac3a:	e8 b1 94 f8 ff       	call   0x4040f0
  47ac3f:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47ac43:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x2
  47ac4a:	02 
  47ac4b:	51                   	push   ecx
  47ac4c:	68 44 01 00 00       	push   0x144
  47ac51:	68 b8 e1 68 00       	push   0x68e1b8
  47ac56:	68 a8 e1 68 00       	push   0x68e1a8
  47ac5b:	e8 90 5b 12 00       	call   0x5a07f0
  47ac60:	ff d0                	call   eax
  47ac62:	83 c4 10             	add    esp,0x10
  47ac65:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47ac69:	88 9c 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],bl
  47ac70:	6a 01                	push   0x1
  47ac72:	e8 29 94 f8 ff       	call   0x4040a0
  47ac77:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47ac7b:	8b 56 5c             	mov    edx,DWORD PTR [esi+0x5c]
  47ac7e:	3b c3                	cmp    eax,ebx
  47ac80:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  47ac84:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0xffffffff
  47ac8b:	ff ff ff ff 
  47ac8f:	74 17                	je     0x47aca8
  47ac91:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47ac94:	8b c8                	mov    ecx,eax
  47ac96:	83 c0 14             	add    eax,0x14
  47ac99:	4e                   	dec    esi
  47ac9a:	8b d6                	mov    edx,esi
  47ac9c:	3b d3                	cmp    edx,ebx
  47ac9e:	89 30                	mov    DWORD PTR [eax],esi
  47aca0:	75 06                	jne    0x47aca8
  47aca2:	53                   	push   ebx
  47aca3:	e8 18 13 13 00       	call   0x5abfc0
  47aca8:	81 c5 8c 03 00 00    	add    ebp,0x38c
  47acae:	8d b4 24 90 00 00 00 	lea    esi,[esp+0x90]
  47acb5:	bf 04 00 00 00       	mov    edi,0x4
  47acba:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  47acbe:	8b 15 88 e2 64 00    	mov    edx,DWORD PTR ds:0x64e288
  47acc4:	8b 88 18 01 00 00    	mov    ecx,DWORD PTR [eax+0x118]
  47acca:	8b 80 20 01 00 00    	mov    eax,DWORD PTR [eax+0x120]
  47acd0:	89 4e fc             	mov    DWORD PTR [esi-0x4],ecx
  47acd3:	89 16                	mov    DWORD PTR [esi],edx
  47acd5:	8b cd                	mov    ecx,ebp
  47acd7:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  47acda:	e8 f1 e8 11 00       	call   0x5995d0
  47acdf:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47ace3:	83 c6 24             	add    esi,0x24
  47ace6:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47acea:	4f                   	dec    edi
  47aceb:	d9 5e e4             	fstp   DWORD PTR [esi-0x1c]
  47acee:	75 ca                	jne    0x47acba
  47acf0:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47acf5:	3b c3                	cmp    eax,ebx
  47acf7:	75 05                	jne    0x47acfe
  47acf9:	e8 82 05 0e 00       	call   0x55b280
  47acfe:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47ad02:	51                   	push   ecx
  47ad03:	8b c8                	mov    ecx,eax
  47ad05:	e8 46 6a fa ff       	call   0x421750
  47ad0a:	8b f0                	mov    esi,eax
  47ad0c:	8b 06                	mov    eax,DWORD PTR [esi]
  47ad0e:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0x3
  47ad15:	03 00 00 00 
  47ad19:	3b c3                	cmp    eax,ebx
  47ad1b:	75 69                	jne    0x47ad86
  47ad1d:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  47ad21:	53                   	push   ebx
  47ad22:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  47ad26:	88 54 24 58          	mov    BYTE PTR [esp+0x58],dl
  47ad2a:	e8 71 93 f8 ff       	call   0x4040a0
  47ad2f:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47ad34:	83 c9 ff             	or     ecx,0xffffffff
  47ad37:	33 c0                	xor    eax,eax
  47ad39:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47ad3b:	f7 d1                	not    ecx
  47ad3d:	49                   	dec    ecx
  47ad3e:	51                   	push   ecx
  47ad3f:	68 70 3f 6b 00       	push   0x6b3f70
  47ad44:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  47ad48:	e8 a3 93 f8 ff       	call   0x4040f0
  47ad4d:	8d 44 24 54          	lea    eax,[esp+0x54]
  47ad51:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x4
  47ad58:	04 
  47ad59:	50                   	push   eax
  47ad5a:	68 b6 00 00 00       	push   0xb6
  47ad5f:	68 38 d6 68 00       	push   0x68d638
  47ad64:	68 2c d6 68 00       	push   0x68d62c
  47ad69:	e8 82 5a 12 00       	call   0x5a07f0
  47ad6e:	ff d0                	call   eax
  47ad70:	83 c4 10             	add    esp,0x10
  47ad73:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47ad77:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x3
  47ad7e:	03 
  47ad7f:	6a 01                	push   0x1
  47ad81:	e8 1a 93 f8 ff       	call   0x4040a0
  47ad86:	8b 06                	mov    eax,DWORD PTR [esi]
  47ad88:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0xffffffff
  47ad8f:	ff ff ff ff 
  47ad93:	05 10 02 00 00       	add    eax,0x210
  47ad98:	8b 08                	mov    ecx,DWORD PTR [eax]
  47ad9a:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
  47ad9e:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47ada1:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
  47ada5:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47ada8:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
  47adac:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47adb0:	3b c3                	cmp    eax,ebx
  47adb2:	74 17                	je     0x47adcb
  47adb4:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47adb7:	8b c8                	mov    ecx,eax
  47adb9:	83 c0 14             	add    eax,0x14
  47adbc:	4e                   	dec    esi
  47adbd:	8b d6                	mov    edx,esi
  47adbf:	3b d3                	cmp    edx,ebx
  47adc1:	89 30                	mov    DWORD PTR [eax],esi
  47adc3:	75 06                	jne    0x47adcb
  47adc5:	53                   	push   ebx
  47adc6:	e8 f5 11 13 00       	call   0x5abfc0
  47adcb:	8b 0d e4 e1 64 00    	mov    ecx,DWORD PTR ds:0x64e1e4
  47add1:	8b 15 e8 e1 64 00    	mov    edx,DWORD PTR ds:0x64e1e8
  47add7:	a1 08 e2 64 00       	mov    eax,ds:0x64e208
  47addc:	8b 7c 24 4c          	mov    edi,DWORD PTR [esp+0x4c]
  47ade0:	89 8c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ecx
  47ade7:	8b 0d 0c e2 64 00    	mov    ecx,DWORD PTR ds:0x64e20c
  47aded:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
  47adf4:	8b 15 2c e2 64 00    	mov    edx,DWORD PTR ds:0x64e22c
  47adfa:	89 84 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],eax
  47ae01:	a1 30 e2 64 00       	mov    eax,ds:0x64e230
  47ae06:	89 8c 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],ecx
  47ae0d:	8b 0d 50 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e250
  47ae13:	89 94 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],edx
  47ae1a:	8b 15 54 e2 64 00    	mov    edx,DWORD PTR ds:0x64e254
  47ae20:	8d b7 4c 05 00 00    	lea    esi,[edi+0x54c]
  47ae26:	89 84 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],eax
  47ae2d:	89 8c 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],ecx
  47ae34:	89 94 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],edx
  47ae3b:	89 74 24 50          	mov    DWORD PTR [esp+0x50],esi
  47ae3f:	c7 44 24 14 32 00 00 	mov    DWORD PTR [esp+0x14],0x32
  47ae46:	00 
  47ae47:	38 5e 68             	cmp    BYTE PTR [esi+0x68],bl
  47ae4a:	0f 84 d6 02 00 00    	je     0x47b126
  47ae50:	8b c6                	mov    eax,esi
  47ae52:	8b 08                	mov    ecx,DWORD PTR [eax]
  47ae54:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  47ae58:	8d 8c 24 08 01 00 00 	lea    ecx,[esp+0x108]
  47ae5f:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47ae62:	51                   	push   ecx
  47ae63:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  47ae67:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47ae6b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47ae6e:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  47ae72:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  47ae76:	e8 65 81 13 00       	call   0x5b2fe0
  47ae7b:	8d 54 24 24          	lea    edx,[esp+0x24]
  47ae7f:	8d 44 24 30          	lea    eax,[esp+0x30]
  47ae83:	52                   	push   edx
  47ae84:	8d 8c 24 0c 01 00 00 	lea    ecx,[esp+0x10c]
  47ae8b:	50                   	push   eax
  47ae8c:	51                   	push   ecx
  47ae8d:	8b cf                	mov    ecx,edi
  47ae8f:	e8 bc ce ff ff       	call   0x477d50
  47ae94:	8d 54 24 30          	lea    edx,[esp+0x30]
  47ae98:	68 00 00 40 40       	push   0x40400000
  47ae9d:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  47aea1:	e8 fa 80 13 00       	call   0x5b2fa0
  47aea6:	8d 54 24 24          	lea    edx,[esp+0x24]
  47aeaa:	68 00 00 40 40       	push   0x40400000
  47aeaf:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47aeb3:	e8 e8 80 13 00       	call   0x5b2fa0
  47aeb8:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  47aebc:	d8 5c 24 1c          	fcomp  DWORD PTR [esp+0x1c]
  47aec0:	df e0                	fnstsw ax
  47aec2:	f6 c4 41             	test   ah,0x41
  47aec5:	75 12                	jne    0x47aed9
  47aec7:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47aecb:	e8 b0 81 13 00       	call   0x5b3080
  47aed0:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47aed4:	e8 a7 81 13 00       	call   0x5b3080
  47aed9:	d9 05 d8 e1 64 00    	fld    DWORD PTR ds:0x64e1d8
  47aedf:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  47aee3:	8d 4e fc             	lea    ecx,[esi-0x4]
  47aee6:	d8 64 24 30          	fsub   DWORD PTR [esp+0x30]
  47aeea:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  47aeee:	d9 5c 24 78          	fstp   DWORD PTR [esp+0x78]
  47aef2:	d9 05 dc e1 64 00    	fld    DWORD PTR ds:0x64e1dc
  47aef8:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  47aefc:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
  47af00:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  47af04:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  47af08:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47af0c:	d8 05 e0 e1 64 00    	fadd   DWORD PTR ds:0x64e1e0
  47af12:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
  47af16:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  47af1a:	d9 9c 24 80 00 00 00 	fstp   DWORD PTR [esp+0x80]
  47af21:	d9 05 fc e1 64 00    	fld    DWORD PTR ds:0x64e1fc
  47af27:	d8 44 24 24          	fadd   DWORD PTR [esp+0x24]
  47af2b:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  47af2f:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  47af33:	d9 9c 24 9c 00 00 00 	fstp   DWORD PTR [esp+0x9c]
  47af3a:	d9 44 24 28          	fld    DWORD PTR [esp+0x28]
  47af3e:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  47af42:	d8 05 00 e2 64 00    	fadd   DWORD PTR ds:0x64e200
  47af48:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  47af4c:	d9 9c 24 a0 00 00 00 	fstp   DWORD PTR [esp+0xa0]
  47af53:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  47af57:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  47af5b:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
  47af5f:	d8 05 04 e2 64 00    	fadd   DWORD PTR ds:0x64e204
  47af65:	d9 9c 24 a4 00 00 00 	fstp   DWORD PTR [esp+0xa4]
  47af6c:	d9 05 20 e2 64 00    	fld    DWORD PTR ds:0x64e220
  47af72:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  47af76:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  47af7a:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  47af7e:	d9 9c 24 c0 00 00 00 	fstp   DWORD PTR [esp+0xc0]
  47af85:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  47af89:	d8 05 24 e2 64 00    	fadd   DWORD PTR ds:0x64e224
  47af8f:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  47af93:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
  47af97:	d9 9c 24 c4 00 00 00 	fstp   DWORD PTR [esp+0xc4]
  47af9e:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  47afa2:	d8 44 24 20          	fadd   DWORD PTR [esp+0x20]
  47afa6:	d8 05 28 e2 64 00    	fadd   DWORD PTR ds:0x64e228
  47afac:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  47afb0:	d9 9c 24 c8 00 00 00 	fstp   DWORD PTR [esp+0xc8]
  47afb7:	d9 05 44 e2 64 00    	fld    DWORD PTR ds:0x64e244
  47afbd:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  47afc1:	d8 64 24 30          	fsub   DWORD PTR [esp+0x30]
  47afc5:	d8 64 24 24          	fsub   DWORD PTR [esp+0x24]
  47afc9:	d9 9c 24 e4 00 00 00 	fstp   DWORD PTR [esp+0xe4]
  47afd0:	d9 05 48 e2 64 00    	fld    DWORD PTR ds:0x64e248
  47afd6:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  47afda:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
  47afde:	d8 64 24 28          	fsub   DWORD PTR [esp+0x28]
  47afe2:	d9 9c 24 e8 00 00 00 	fstp   DWORD PTR [esp+0xe8]
  47afe9:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47afed:	d8 05 4c e2 64 00    	fadd   DWORD PTR ds:0x64e24c
  47aff3:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
  47aff7:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  47affb:	d9 9c 24 ec 00 00 00 	fstp   DWORD PTR [esp+0xec]
  47b002:	e8 c9 e5 11 00       	call   0x5995d0
  47b007:	89 44 24 64          	mov    DWORD PTR [esp+0x64],eax
  47b00b:	8b 87 08 01 00 00    	mov    eax,DWORD PTR [edi+0x108]
  47b011:	db 44 24 64          	fild   DWORD PTR [esp+0x64]
  47b015:	3b c3                	cmp    eax,ebx
  47b017:	d9 94 24 98 00 00 00 	fst    DWORD PTR [esp+0x98]
  47b01e:	d9 94 24 bc 00 00 00 	fst    DWORD PTR [esp+0xbc]
  47b025:	d9 94 24 e0 00 00 00 	fst    DWORD PTR [esp+0xe0]
  47b02c:	d9 9c 24 04 01 00 00 	fstp   DWORD PTR [esp+0x104]
  47b033:	0f 85 c6 00 00 00    	jne    0x47b0ff
  47b039:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47b03e:	83 c9 ff             	or     ecx,0xffffffff
  47b041:	33 c0                	xor    eax,eax
  47b043:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  47b047:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47b049:	f7 d1                	not    ecx
  47b04b:	49                   	dec    ecx
  47b04c:	6a 01                	push   0x1
  47b04e:	8b e9                	mov    ebp,ecx
  47b050:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  47b054:	55                   	push   ebp
  47b055:	88 54 24 44          	mov    BYTE PTR [esp+0x44],dl
  47b059:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  47b05d:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  47b061:	89 5c 24 50          	mov    DWORD PTR [esp+0x50],ebx
  47b065:	e8 d6 68 f8 ff       	call   0x401940
  47b06a:	84 c0                	test   al,al
  47b06c:	74 28                	je     0x47b096
  47b06e:	8b 7c 24 40          	mov    edi,DWORD PTR [esp+0x40]
  47b072:	8b cd                	mov    ecx,ebp
  47b074:	8b c1                	mov    eax,ecx
  47b076:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  47b07b:	c1 e9 02             	shr    ecx,0x2
  47b07e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47b080:	8b c8                	mov    ecx,eax
  47b082:	83 e1 03             	and    ecx,0x3
  47b085:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  47b087:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  47b08b:	8b 74 24 50          	mov    esi,DWORD PTR [esp+0x50]
  47b08f:	89 6c 24 44          	mov    DWORD PTR [esp+0x44],ebp
  47b093:	88 1c 29             	mov    BYTE PTR [ecx+ebp*1],bl
  47b096:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47b09a:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0x5
  47b0a1:	05 00 00 00 
  47b0a5:	52                   	push   edx
  47b0a6:	68 b6 00 00 00       	push   0xb6
  47b0ab:	68 38 d6 68 00       	push   0x68d638
  47b0b0:	68 2c d6 68 00       	push   0x68d62c
  47b0b5:	e8 36 57 12 00       	call   0x5a07f0
  47b0ba:	ff d0                	call   eax
  47b0bc:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  47b0c0:	83 c4 10             	add    esp,0x10
  47b0c3:	3b c3                	cmp    eax,ebx
  47b0c5:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0xffffffff
  47b0cc:	ff ff ff ff 
  47b0d0:	74 1d                	je     0x47b0ef
  47b0d2:	8d 48 ff             	lea    ecx,[eax-0x1]
  47b0d5:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  47b0d8:	3a c3                	cmp    al,bl
  47b0da:	74 0a                	je     0x47b0e6
  47b0dc:	3c ff                	cmp    al,0xff
  47b0de:	74 06                	je     0x47b0e6
  47b0e0:	fe c8                	dec    al
  47b0e2:	88 01                	mov    BYTE PTR [ecx],al
  47b0e4:	eb 09                	jmp    0x47b0ef
  47b0e6:	51                   	push   ecx
  47b0e7:	e8 04 35 18 00       	call   0x5fe5f0
  47b0ec:	83 c4 04             	add    esp,0x4
  47b0ef:	8b 7c 24 4c          	mov    edi,DWORD PTR [esp+0x4c]
  47b0f3:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  47b0f7:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
  47b0fb:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  47b0ff:	8b 8f 08 01 00 00    	mov    ecx,DWORD PTR [edi+0x108]
  47b105:	53                   	push   ebx
  47b106:	6a 01                	push   0x1
  47b108:	53                   	push   ebx
  47b109:	e8 62 f9 08 00       	call   0x50aa70
  47b10e:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  47b112:	50                   	push   eax
  47b113:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  47b11a:	6a 04                	push   0x4
  47b11c:	50                   	push   eax
  47b11d:	51                   	push   ecx
  47b11e:	e8 6d bd 13 00       	call   0x5b6e90
  47b123:	83 c4 1c             	add    esp,0x1c
  47b126:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47b12a:	81 c6 44 01 00 00    	add    esi,0x144
  47b130:	48                   	dec    eax
  47b131:	89 74 24 50          	mov    DWORD PTR [esp+0x50],esi
  47b135:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47b139:	0f 85 08 fd ff ff    	jne    0x47ae47
  47b13f:	8b 8c 24 14 01 00 00 	mov    ecx,DWORD PTR [esp+0x114]
  47b146:	5f                   	pop    edi
  47b147:	5e                   	pop    esi
  47b148:	5d                   	pop    ebp
  47b149:	5b                   	pop    ebx
  47b14a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47b151:	81 c4 10 01 00 00    	add    esp,0x110
  47b157:	c3                   	ret
  47b158:	90                   	nop
  47b159:	90                   	nop
  47b15a:	90                   	nop
  47b15b:	90                   	nop
  47b15c:	90                   	nop
  47b15d:	90                   	nop
  47b15e:	90                   	nop
  47b15f:	90                   	nop
  47b160:	6a ff                	push   0xffffffff
  47b162:	68 a2 8d 62 00       	push   0x628da2
  47b167:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47b16d:	50                   	push   eax
  47b16e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47b175:	81 ec 04 01 00 00    	sub    esp,0x104
  47b17b:	53                   	push   ebx
  47b17c:	55                   	push   ebp
  47b17d:	56                   	push   esi
  47b17e:	8d 44 24 10          	lea    eax,[esp+0x10]
  47b182:	57                   	push   edi
  47b183:	8b d9                	mov    ebx,ecx
  47b185:	50                   	push   eax
  47b186:	e8 55 91 f8 ff       	call   0x4042e0
  47b18b:	8b f0                	mov    esi,eax
  47b18d:	8b 06                	mov    eax,DWORD PTR [esi]
  47b18f:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0x0
  47b196:	00 00 00 00 
  47b19a:	85 c0                	test   eax,eax
  47b19c:	75 6a                	jne    0x47b208
  47b19e:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  47b1a2:	6a 00                	push   0x0
  47b1a4:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  47b1a8:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47b1ac:	e8 ef 8e f8 ff       	call   0x4040a0
  47b1b1:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47b1b6:	83 c9 ff             	or     ecx,0xffffffff
  47b1b9:	33 c0                	xor    eax,eax
  47b1bb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47b1bd:	f7 d1                	not    ecx
  47b1bf:	49                   	dec    ecx
  47b1c0:	51                   	push   ecx
  47b1c1:	68 70 3f 6b 00       	push   0x6b3f70
  47b1c6:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47b1ca:	e8 21 8f f8 ff       	call   0x4040f0
  47b1cf:	8d 54 24 18          	lea    edx,[esp+0x18]
  47b1d3:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x1
  47b1da:	01 
  47b1db:	52                   	push   edx
  47b1dc:	68 b6 00 00 00       	push   0xb6
  47b1e1:	68 38 d6 68 00       	push   0x68d638
  47b1e6:	68 2c d6 68 00       	push   0x68d62c
  47b1eb:	e8 00 56 12 00       	call   0x5a07f0
  47b1f0:	ff d0                	call   eax
  47b1f2:	83 c4 10             	add    esp,0x10
  47b1f5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47b1f9:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x0
  47b200:	00 
  47b201:	6a 01                	push   0x1
  47b203:	e8 98 8e f8 ff       	call   0x4040a0
  47b208:	8b 36                	mov    esi,DWORD PTR [esi]
  47b20a:	8b 46 5c             	mov    eax,DWORD PTR [esi+0x5c]
  47b20d:	85 c0                	test   eax,eax
  47b20f:	75 6a                	jne    0x47b27b
  47b211:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  47b215:	6a 00                	push   0x0
  47b217:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  47b21b:	88 44 24 6c          	mov    BYTE PTR [esp+0x6c],al
  47b21f:	e8 7c 8e f8 ff       	call   0x4040a0
  47b224:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47b229:	83 c9 ff             	or     ecx,0xffffffff
  47b22c:	33 c0                	xor    eax,eax
  47b22e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47b230:	f7 d1                	not    ecx
  47b232:	49                   	dec    ecx
  47b233:	51                   	push   ecx
  47b234:	68 70 3f 6b 00       	push   0x6b3f70
  47b239:	8d 4c 24 70          	lea    ecx,[esp+0x70]
  47b23d:	e8 ae 8e f8 ff       	call   0x4040f0
  47b242:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  47b246:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x2
  47b24d:	02 
  47b24e:	51                   	push   ecx
  47b24f:	68 44 01 00 00       	push   0x144
  47b254:	68 b8 e1 68 00       	push   0x68e1b8
  47b259:	68 a8 e1 68 00       	push   0x68e1a8
  47b25e:	e8 8d 55 12 00       	call   0x5a07f0
  47b263:	ff d0                	call   eax
  47b265:	83 c4 10             	add    esp,0x10
  47b268:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  47b26c:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x0
  47b273:	00 
  47b274:	6a 01                	push   0x1
  47b276:	e8 25 8e f8 ff       	call   0x4040a0
  47b27b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47b27f:	8b 56 5c             	mov    edx,DWORD PTR [esi+0x5c]
  47b282:	85 c0                	test   eax,eax
  47b284:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  47b288:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0xffffffff
  47b28f:	ff ff ff ff 
  47b293:	74 18                	je     0x47b2ad
  47b295:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47b298:	8b c8                	mov    ecx,eax
  47b29a:	83 c0 14             	add    eax,0x14
  47b29d:	4e                   	dec    esi
  47b29e:	8b d6                	mov    edx,esi
  47b2a0:	85 d2                	test   edx,edx
  47b2a2:	89 30                	mov    DWORD PTR [eax],esi
  47b2a4:	75 07                	jne    0x47b2ad
  47b2a6:	6a 00                	push   0x0
  47b2a8:	e8 13 0d 13 00       	call   0x5abfc0
  47b2ad:	8d ab 8c 03 00 00    	lea    ebp,[ebx+0x38c]
  47b2b3:	8d b4 24 90 00 00 00 	lea    esi,[esp+0x90]
  47b2ba:	bf 04 00 00 00       	mov    edi,0x4
  47b2bf:	8b 83 18 01 00 00    	mov    eax,DWORD PTR [ebx+0x118]
  47b2c5:	8b 0d 88 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e288
  47b2cb:	8b 93 20 01 00 00    	mov    edx,DWORD PTR [ebx+0x120]
  47b2d1:	89 46 fc             	mov    DWORD PTR [esi-0x4],eax
  47b2d4:	89 0e                	mov    DWORD PTR [esi],ecx
  47b2d6:	8b cd                	mov    ecx,ebp
  47b2d8:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
  47b2db:	e8 f0 e2 11 00       	call   0x5995d0
  47b2e0:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47b2e4:	83 c6 24             	add    esi,0x24
  47b2e7:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47b2eb:	4f                   	dec    edi
  47b2ec:	d9 5e e4             	fstp   DWORD PTR [esi-0x1c]
  47b2ef:	75 ce                	jne    0x47b2bf
  47b2f1:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47b2f6:	33 ff                	xor    edi,edi
  47b2f8:	3b c7                	cmp    eax,edi
  47b2fa:	75 05                	jne    0x47b301
  47b2fc:	e8 7f ff 0d 00       	call   0x55b280
  47b301:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  47b305:	51                   	push   ecx
  47b306:	8b c8                	mov    ecx,eax
  47b308:	e8 43 64 fa ff       	call   0x421750
  47b30d:	8b f0                	mov    esi,eax
  47b30f:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  47b313:	8b 06                	mov    eax,DWORD PTR [esi]
  47b315:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0x3
  47b31c:	03 00 00 00 
  47b320:	3b c7                	cmp    eax,edi
  47b322:	0f 85 95 00 00 00    	jne    0x47b3bd
  47b328:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  47b32c:	57                   	push   edi
  47b32d:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47b331:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  47b335:	e8 66 8d f8 ff       	call   0x4040a0
  47b33a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47b33f:	83 c9 ff             	or     ecx,0xffffffff
  47b342:	33 c0                	xor    eax,eax
  47b344:	6a 01                	push   0x1
  47b346:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47b348:	f7 d1                	not    ecx
  47b34a:	49                   	dec    ecx
  47b34b:	8b e9                	mov    ebp,ecx
  47b34d:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47b351:	55                   	push   ebp
  47b352:	e8 e9 65 f8 ff       	call   0x401940
  47b357:	84 c0                	test   al,al
  47b359:	74 27                	je     0x47b382
  47b35b:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  47b35f:	8b cd                	mov    ecx,ebp
  47b361:	8b c1                	mov    eax,ecx
  47b363:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  47b368:	c1 e9 02             	shr    ecx,0x2
  47b36b:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47b36d:	8b c8                	mov    ecx,eax
  47b36f:	55                   	push   ebp
  47b370:	83 e1 03             	and    ecx,0x3
  47b373:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  47b375:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47b379:	e8 12 8e f8 ff       	call   0x404190
  47b37e:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  47b382:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47b386:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x4
  47b38d:	04 
  47b38e:	51                   	push   ecx
  47b38f:	68 b6 00 00 00       	push   0xb6
  47b394:	68 38 d6 68 00       	push   0x68d638
  47b399:	68 2c d6 68 00       	push   0x68d62c
  47b39e:	e8 4d 54 12 00       	call   0x5a07f0
  47b3a3:	ff d0                	call   eax
  47b3a5:	83 c4 10             	add    esp,0x10
  47b3a8:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47b3ac:	c6 84 24 1c 01 00 00 	mov    BYTE PTR [esp+0x11c],0x3
  47b3b3:	03 
  47b3b4:	6a 01                	push   0x1
  47b3b6:	e8 e5 8c f8 ff       	call   0x4040a0
  47b3bb:	33 ff                	xor    edi,edi
  47b3bd:	8b 06                	mov    eax,DWORD PTR [esi]
  47b3bf:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0xffffffff
  47b3c6:	ff ff ff ff 
  47b3ca:	05 10 02 00 00       	add    eax,0x210
  47b3cf:	8b 10                	mov    edx,DWORD PTR [eax]
  47b3d1:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
  47b3d5:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  47b3d8:	89 4c 24 60          	mov    DWORD PTR [esp+0x60],ecx
  47b3dc:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  47b3df:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
  47b3e3:	3b c7                	cmp    eax,edi
  47b3e5:	89 54 24 64          	mov    DWORD PTR [esp+0x64],edx
  47b3e9:	74 17                	je     0x47b402
  47b3eb:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47b3ee:	8b c8                	mov    ecx,eax
  47b3f0:	83 c0 14             	add    eax,0x14
  47b3f3:	4e                   	dec    esi
  47b3f4:	8b d6                	mov    edx,esi
  47b3f6:	3b d7                	cmp    edx,edi
  47b3f8:	89 30                	mov    DWORD PTR [eax],esi
  47b3fa:	75 06                	jne    0x47b402
  47b3fc:	57                   	push   edi
  47b3fd:	e8 be 0b 13 00       	call   0x5abfc0
  47b402:	a1 e4 e1 64 00       	mov    eax,ds:0x64e1e4
  47b407:	8b 0d e8 e1 64 00    	mov    ecx,DWORD PTR ds:0x64e1e8
  47b40d:	8b 15 08 e2 64 00    	mov    edx,DWORD PTR ds:0x64e208
  47b413:	89 84 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],eax
  47b41a:	a1 0c e2 64 00       	mov    eax,ds:0x64e20c
  47b41f:	89 8c 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],ecx
  47b426:	8b 0d 2c e2 64 00    	mov    ecx,DWORD PTR ds:0x64e22c
  47b42c:	89 94 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],edx
  47b433:	8b 15 30 e2 64 00    	mov    edx,DWORD PTR ds:0x64e230
  47b439:	89 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],eax
  47b440:	a1 50 e2 64 00       	mov    eax,ds:0x64e250
  47b445:	89 8c 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],ecx
  47b44c:	8b 0d 54 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e254
  47b452:	89 94 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],edx
  47b459:	8d 93 78 03 00 00    	lea    edx,[ebx+0x378]
  47b45f:	8d b3 94 44 00 00    	lea    esi,[ebx+0x4494]
  47b465:	89 84 24 f0 00 00 00 	mov    DWORD PTR [esp+0xf0],eax
  47b46c:	89 8c 24 f4 00 00 00 	mov    DWORD PTR [esp+0xf4],ecx
  47b473:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  47b477:	89 74 24 4c          	mov    DWORD PTR [esp+0x4c],esi
  47b47b:	c7 44 24 14 05 00 00 	mov    DWORD PTR [esp+0x14],0x5
  47b482:	00 
  47b483:	8a 46 68             	mov    al,BYTE PTR [esi+0x68]
  47b486:	84 c0                	test   al,al
  47b488:	0f 84 f0 02 00 00    	je     0x47b77e
  47b48e:	8b c6                	mov    eax,esi
  47b490:	8b 08                	mov    ecx,DWORD PTR [eax]
  47b492:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  47b496:	8d 8c 24 08 01 00 00 	lea    ecx,[esp+0x108]
  47b49d:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47b4a0:	51                   	push   ecx
  47b4a1:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  47b4a5:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  47b4a9:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47b4ac:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  47b4b0:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  47b4b4:	e8 27 7b 13 00       	call   0x5b2fe0
  47b4b9:	8d 54 24 34          	lea    edx,[esp+0x34]
  47b4bd:	8d 44 24 40          	lea    eax,[esp+0x40]
  47b4c1:	52                   	push   edx
  47b4c2:	8d 8c 24 0c 01 00 00 	lea    ecx,[esp+0x10c]
  47b4c9:	50                   	push   eax
  47b4ca:	51                   	push   ecx
  47b4cb:	8b cb                	mov    ecx,ebx
  47b4cd:	e8 7e c8 ff ff       	call   0x477d50
  47b4d2:	8d 54 24 40          	lea    edx,[esp+0x40]
  47b4d6:	68 00 00 40 40       	push   0x40400000
  47b4db:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  47b4df:	e8 bc 7a 13 00       	call   0x5b2fa0
  47b4e4:	8d 54 24 34          	lea    edx,[esp+0x34]
  47b4e8:	68 00 00 40 40       	push   0x40400000
  47b4ed:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  47b4f1:	e8 aa 7a 13 00       	call   0x5b2fa0
  47b4f6:	d9 44 24 60          	fld    DWORD PTR [esp+0x60]
  47b4fa:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  47b4fe:	df e0                	fnstsw ax
  47b500:	f6 c4 41             	test   ah,0x41
  47b503:	75 12                	jne    0x47b517
  47b505:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  47b509:	e8 72 7b 13 00       	call   0x5b3080
  47b50e:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  47b512:	e8 69 7b 13 00       	call   0x5b3080
  47b517:	d9 05 d8 e1 64 00    	fld    DWORD PTR ds:0x64e1d8
  47b51d:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  47b521:	8d 4e fc             	lea    ecx,[esi-0x4]
  47b524:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
  47b528:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  47b52c:	d9 5c 24 78          	fstp   DWORD PTR [esp+0x78]
  47b530:	d9 05 dc e1 64 00    	fld    DWORD PTR ds:0x64e1dc
  47b536:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  47b53a:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
  47b53e:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  47b542:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  47b546:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  47b54a:	d8 05 e0 e1 64 00    	fadd   DWORD PTR ds:0x64e1e0
  47b550:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  47b554:	d8 44 24 3c          	fadd   DWORD PTR [esp+0x3c]
  47b558:	d9 9c 24 80 00 00 00 	fstp   DWORD PTR [esp+0x80]
  47b55f:	d9 05 fc e1 64 00    	fld    DWORD PTR ds:0x64e1fc
  47b565:	d8 44 24 34          	fadd   DWORD PTR [esp+0x34]
  47b569:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  47b56d:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  47b571:	d9 9c 24 9c 00 00 00 	fstp   DWORD PTR [esp+0x9c]
  47b578:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  47b57c:	d8 44 24 44          	fadd   DWORD PTR [esp+0x44]
  47b580:	d8 05 00 e2 64 00    	fadd   DWORD PTR ds:0x64e200
  47b586:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  47b58a:	d9 9c 24 a0 00 00 00 	fstp   DWORD PTR [esp+0xa0]
  47b591:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  47b595:	d8 44 24 48          	fadd   DWORD PTR [esp+0x48]
  47b599:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  47b59d:	d8 05 04 e2 64 00    	fadd   DWORD PTR ds:0x64e204
  47b5a3:	d9 9c 24 a4 00 00 00 	fstp   DWORD PTR [esp+0xa4]
  47b5aa:	d9 05 20 e2 64 00    	fld    DWORD PTR ds:0x64e220
  47b5b0:	d8 44 24 40          	fadd   DWORD PTR [esp+0x40]
  47b5b4:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  47b5b8:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
  47b5bc:	d9 9c 24 c0 00 00 00 	fstp   DWORD PTR [esp+0xc0]
  47b5c3:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  47b5c7:	d8 05 24 e2 64 00    	fadd   DWORD PTR ds:0x64e224
  47b5cd:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  47b5d1:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
  47b5d5:	d9 9c 24 c4 00 00 00 	fstp   DWORD PTR [esp+0xc4]
  47b5dc:	d9 44 24 48          	fld    DWORD PTR [esp+0x48]
  47b5e0:	d8 44 24 30          	fadd   DWORD PTR [esp+0x30]
  47b5e4:	d8 05 28 e2 64 00    	fadd   DWORD PTR ds:0x64e228
  47b5ea:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  47b5ee:	d9 9c 24 c8 00 00 00 	fstp   DWORD PTR [esp+0xc8]
  47b5f5:	d9 05 44 e2 64 00    	fld    DWORD PTR ds:0x64e244
  47b5fb:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
  47b5ff:	d8 64 24 40          	fsub   DWORD PTR [esp+0x40]
  47b603:	d8 64 24 34          	fsub   DWORD PTR [esp+0x34]
  47b607:	d9 9c 24 e4 00 00 00 	fstp   DWORD PTR [esp+0xe4]
  47b60e:	d9 05 48 e2 64 00    	fld    DWORD PTR ds:0x64e248
  47b614:	d8 44 24 2c          	fadd   DWORD PTR [esp+0x2c]
  47b618:	d8 64 24 44          	fsub   DWORD PTR [esp+0x44]
  47b61c:	d8 64 24 38          	fsub   DWORD PTR [esp+0x38]
  47b620:	d9 9c 24 e8 00 00 00 	fstp   DWORD PTR [esp+0xe8]
  47b627:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  47b62b:	d8 05 4c e2 64 00    	fadd   DWORD PTR ds:0x64e24c
  47b631:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  47b635:	d8 64 24 3c          	fsub   DWORD PTR [esp+0x3c]
  47b639:	d9 9c 24 ec 00 00 00 	fstp   DWORD PTR [esp+0xec]
  47b640:	e8 8b df 11 00       	call   0x5995d0
  47b645:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
  47b649:	8b 83 08 01 00 00    	mov    eax,DWORD PTR [ebx+0x108]
  47b64f:	db 44 24 54          	fild   DWORD PTR [esp+0x54]
  47b653:	3b c7                	cmp    eax,edi
  47b655:	d9 94 24 98 00 00 00 	fst    DWORD PTR [esp+0x98]
  47b65c:	d9 94 24 bc 00 00 00 	fst    DWORD PTR [esp+0xbc]
  47b663:	d9 94 24 e0 00 00 00 	fst    DWORD PTR [esp+0xe0]
  47b66a:	d9 9c 24 04 01 00 00 	fstp   DWORD PTR [esp+0x104]
  47b671:	0f 85 c7 00 00 00    	jne    0x47b73e
  47b677:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  47b67b:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
  47b67f:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  47b683:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47b688:	83 c9 ff             	or     ecx,0xffffffff
  47b68b:	33 c0                	xor    eax,eax
  47b68d:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47b68f:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  47b693:	6a 01                	push   0x1
  47b695:	f7 d1                	not    ecx
  47b697:	49                   	dec    ecx
  47b698:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  47b69c:	8b e9                	mov    ebp,ecx
  47b69e:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47b6a2:	55                   	push   ebp
  47b6a3:	e8 98 62 f8 ff       	call   0x401940
  47b6a8:	84 c0                	test   al,al
  47b6aa:	74 29                	je     0x47b6d5
  47b6ac:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  47b6b0:	8b cd                	mov    ecx,ebp
  47b6b2:	8b c1                	mov    eax,ecx
  47b6b4:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  47b6b9:	c1 e9 02             	shr    ecx,0x2
  47b6bc:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47b6be:	8b c8                	mov    ecx,eax
  47b6c0:	83 e1 03             	and    ecx,0x3
  47b6c3:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  47b6c5:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  47b6c9:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
  47b6cd:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  47b6d1:	c6 04 29 00          	mov    BYTE PTR [ecx+ebp*1],0x0
  47b6d5:	8d 54 24 18          	lea    edx,[esp+0x18]
  47b6d9:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0x5
  47b6e0:	05 00 00 00 
  47b6e4:	52                   	push   edx
  47b6e5:	68 b6 00 00 00       	push   0xb6
  47b6ea:	68 38 d6 68 00       	push   0x68d638
  47b6ef:	68 2c d6 68 00       	push   0x68d62c
  47b6f4:	e8 f7 50 12 00       	call   0x5a07f0
  47b6f9:	ff d0                	call   eax
  47b6fb:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47b6ff:	33 ff                	xor    edi,edi
  47b701:	83 c4 10             	add    esp,0x10
  47b704:	3b c7                	cmp    eax,edi
  47b706:	c7 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],0xffffffff
  47b70d:	ff ff ff ff 
  47b711:	74 1d                	je     0x47b730
  47b713:	8d 48 ff             	lea    ecx,[eax-0x1]
  47b716:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  47b719:	84 c0                	test   al,al
  47b71b:	74 0a                	je     0x47b727
  47b71d:	3c ff                	cmp    al,0xff
  47b71f:	74 06                	je     0x47b727
  47b721:	fe c8                	dec    al
  47b723:	88 01                	mov    BYTE PTR [ecx],al
  47b725:	eb 09                	jmp    0x47b730
  47b727:	51                   	push   ecx
  47b728:	e8 c3 2e 18 00       	call   0x5fe5f0
  47b72d:	83 c4 04             	add    esp,0x4
  47b730:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  47b734:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
  47b738:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  47b73c:	33 ff                	xor    edi,edi
  47b73e:	8b 8b 08 01 00 00    	mov    ecx,DWORD PTR [ebx+0x108]
  47b744:	57                   	push   edi
  47b745:	6a 01                	push   0x1
  47b747:	57                   	push   edi
  47b748:	e8 23 f3 08 00       	call   0x50aa70
  47b74d:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  47b751:	50                   	push   eax
  47b752:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  47b759:	6a 04                	push   0x4
  47b75b:	50                   	push   eax
  47b75c:	51                   	push   ecx
  47b75d:	e8 2e b7 13 00       	call   0x5b6e90
  47b762:	8b 54 24 6c          	mov    edx,DWORD PTR [esp+0x6c]
  47b766:	83 c4 1c             	add    esp,0x1c
  47b769:	8b 0a                	mov    ecx,DWORD PTR [edx]
  47b76b:	3b cf                	cmp    ecx,edi
  47b76d:	74 0f                	je     0x47b77e
  47b76f:	8a 83 54 4b 00 00    	mov    al,BYTE PTR [ebx+0x4b54]
  47b775:	84 c0                	test   al,al
  47b777:	74 05                	je     0x47b77e
  47b779:	8b 01                	mov    eax,DWORD PTR [ecx]
  47b77b:	ff 50 0c             	call   DWORD PTR [eax+0xc]
  47b77e:	8b 54 24 50          	mov    edx,DWORD PTR [esp+0x50]
  47b782:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47b786:	83 c2 04             	add    edx,0x4
  47b789:	81 c6 44 01 00 00    	add    esi,0x144
  47b78f:	48                   	dec    eax
  47b790:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  47b794:	89 74 24 4c          	mov    DWORD PTR [esp+0x4c],esi
  47b798:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47b79c:	0f 85 e1 fc ff ff    	jne    0x47b483
  47b7a2:	8b 8c 24 14 01 00 00 	mov    ecx,DWORD PTR [esp+0x114]
  47b7a9:	5f                   	pop    edi
  47b7aa:	5e                   	pop    esi
  47b7ab:	5d                   	pop    ebp
  47b7ac:	5b                   	pop    ebx
  47b7ad:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47b7b4:	81 c4 10 01 00 00    	add    esp,0x110
  47b7ba:	c3                   	ret
  47b7bb:	90                   	nop
  47b7bc:	90                   	nop
  47b7bd:	90                   	nop
  47b7be:	90                   	nop
  47b7bf:	90                   	nop
  47b7c0:	53                   	push   ebx
  47b7c1:	56                   	push   esi
  47b7c2:	8b f1                	mov    esi,ecx
  47b7c4:	32 db                	xor    bl,bl
  47b7c6:	8a 86 4c 4b 00 00    	mov    al,BYTE PTR [esi+0x4b4c]
  47b7cc:	84 c0                	test   al,al
  47b7ce:	74 1b                	je     0x47b7eb
  47b7d0:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  47b7d4:	50                   	push   eax
  47b7d5:	e8 56 e6 f8 ff       	call   0x409e30
  47b7da:	d8 0d 8c e2 64 00    	fmul   DWORD PTR ds:0x64e28c
  47b7e0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47b7e4:	83 c4 04             	add    esp,0x4
  47b7e7:	d8 01                	fadd   DWORD PTR [ecx]
  47b7e9:	eb 19                	jmp    0x47b804
  47b7eb:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  47b7ef:	51                   	push   ecx
  47b7f0:	e8 3b e6 f8 ff       	call   0x409e30
  47b7f5:	d8 0d 8c e2 64 00    	fmul   DWORD PTR ds:0x64e28c
  47b7fb:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47b7ff:	83 c4 04             	add    esp,0x4
  47b802:	d8 29                	fsubr  DWORD PTR [ecx]
  47b804:	d9 19                	fstp   DWORD PTR [ecx]
  47b806:	d9 01                	fld    DWORD PTR [ecx]
  47b808:	d8 1d 88 e2 64 00    	fcomp  DWORD PTR ds:0x64e288
  47b80e:	df e0                	fnstsw ax
  47b810:	f6 c4 41             	test   ah,0x41
  47b813:	75 08                	jne    0x47b81d
  47b815:	8b 15 88 e2 64 00    	mov    edx,DWORD PTR ds:0x64e288
  47b81b:	eb 15                	jmp    0x47b832
  47b81d:	d9 01                	fld    DWORD PTR [ecx]
  47b81f:	d8 1d 84 e2 64 00    	fcomp  DWORD PTR ds:0x64e284
  47b825:	df e0                	fnstsw ax
  47b827:	f6 c4 01             	test   ah,0x1
  47b82a:	74 20                	je     0x47b84c
  47b82c:	8b 15 84 e2 64 00    	mov    edx,DWORD PTR ds:0x64e284
  47b832:	89 11                	mov    DWORD PTR [ecx],edx
  47b834:	8a 86 4c 4b 00 00    	mov    al,BYTE PTR [esi+0x4b4c]
  47b83a:	84 c0                	test   al,al
  47b83c:	0f 94 c0             	sete   al
  47b83f:	88 86 4c 4b 00 00    	mov    BYTE PTR [esi+0x4b4c],al
  47b845:	5e                   	pop    esi
  47b846:	b0 01                	mov    al,0x1
  47b848:	5b                   	pop    ebx
  47b849:	c2 08 00             	ret    0x8
  47b84c:	8a c3                	mov    al,bl
  47b84e:	5e                   	pop    esi
  47b84f:	5b                   	pop    ebx
  47b850:	c2 08 00             	ret    0x8
  47b853:	90                   	nop
  47b854:	90                   	nop
  47b855:	90                   	nop
  47b856:	90                   	nop
  47b857:	90                   	nop
  47b858:	90                   	nop
  47b859:	90                   	nop
  47b85a:	90                   	nop
  47b85b:	90                   	nop
  47b85c:	90                   	nop
  47b85d:	90                   	nop
  47b85e:	90                   	nop
  47b85f:	90                   	nop
  47b860:	6a ff                	push   0xffffffff
  47b862:	68 dc 8d 62 00       	push   0x628ddc
  47b867:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47b86d:	50                   	push   eax
  47b86e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47b875:	81 ec 1c 01 00 00    	sub    esp,0x11c
  47b87b:	55                   	push   ebp
  47b87c:	8b e9                	mov    ebp,ecx
  47b87e:	56                   	push   esi
  47b87f:	57                   	push   edi
  47b880:	8d 85 90 03 00 00    	lea    eax,[ebp+0x390]
  47b886:	8b 8d 90 03 00 00    	mov    ecx,DWORD PTR [ebp+0x390]
  47b88c:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  47b890:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47b893:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  47b897:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47b89a:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  47b89e:	8b 85 50 4b 00 00    	mov    eax,DWORD PTR [ebp+0x4b50]
  47b8a4:	83 e8 00             	sub    eax,0x0
  47b8a7:	74 28                	je     0x47b8d1
  47b8a9:	48                   	dec    eax
  47b8aa:	74 14                	je     0x47b8c0
  47b8ac:	48                   	dec    eax
  47b8ad:	75 22                	jne    0x47b8d1
  47b8af:	8b 8c 24 3c 01 00 00 	mov    ecx,DWORD PTR [esp+0x13c]
  47b8b6:	8d 85 20 01 00 00    	lea    eax,[ebp+0x120]
  47b8bc:	50                   	push   eax
  47b8bd:	51                   	push   ecx
  47b8be:	eb 20                	jmp    0x47b8e0
  47b8c0:	8b 84 24 3c 01 00 00 	mov    eax,DWORD PTR [esp+0x13c]
  47b8c7:	8d 95 1c 01 00 00    	lea    edx,[ebp+0x11c]
  47b8cd:	52                   	push   edx
  47b8ce:	50                   	push   eax
  47b8cf:	eb 0f                	jmp    0x47b8e0
  47b8d1:	8b 94 24 3c 01 00 00 	mov    edx,DWORD PTR [esp+0x13c]
  47b8d8:	8d 8d 18 01 00 00    	lea    ecx,[ebp+0x118]
  47b8de:	51                   	push   ecx
  47b8df:	52                   	push   edx
  47b8e0:	8b cd                	mov    ecx,ebp
  47b8e2:	e8 d9 fe ff ff       	call   0x47b7c0
  47b8e7:	84 c0                	test   al,al
  47b8e9:	74 1e                	je     0x47b909
  47b8eb:	8b 8d 50 4b 00 00    	mov    ecx,DWORD PTR [ebp+0x4b50]
  47b8f1:	41                   	inc    ecx
  47b8f2:	8b c1                	mov    eax,ecx
  47b8f4:	89 8d 50 4b 00 00    	mov    DWORD PTR [ebp+0x4b50],ecx
  47b8fa:	83 f8 02             	cmp    eax,0x2
  47b8fd:	7e 0a                	jle    0x47b909
  47b8ff:	c7 85 50 4b 00 00 00 	mov    DWORD PTR [ebp+0x4b50],0x0
  47b906:	00 00 00 
  47b909:	53                   	push   ebx
  47b90a:	8d b5 48 01 00 00    	lea    esi,[ebp+0x148]
  47b910:	c7 44 24 18 04 00 00 	mov    DWORD PTR [esp+0x18],0x4
  47b917:	00 
  47b918:	bb 00 00 34 43       	mov    ebx,0x43340000
  47b91d:	a1 88 e2 64 00       	mov    eax,ds:0x64e288
  47b922:	89 46 fc             	mov    DWORD PTR [esi-0x4],eax
  47b925:	8b 0d 88 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e288
  47b92b:	89 0e                	mov    DWORD PTR [esi],ecx
  47b92d:	8b 15 88 e2 64 00    	mov    edx,DWORD PTR ds:0x64e288
  47b933:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
  47b936:	c7 46 08 00 00 48 43 	mov    DWORD PTR [esi+0x8],0x43480000
  47b93d:	8b 85 18 01 00 00    	mov    eax,DWORD PTR [ebp+0x118]
  47b943:	89 86 ac 01 00 00    	mov    DWORD PTR [esi+0x1ac],eax
  47b949:	8b 0d 88 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e288
  47b94f:	89 8e b0 01 00 00    	mov    DWORD PTR [esi+0x1b0],ecx
  47b955:	8b 95 20 01 00 00    	mov    edx,DWORD PTR [ebp+0x120]
  47b95b:	89 96 b4 01 00 00    	mov    DWORD PTR [esi+0x1b4],edx
  47b961:	89 9e b8 01 00 00    	mov    DWORD PTR [esi+0x1b8],ebx
  47b967:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  47b96d:	85 ff                	test   edi,edi
  47b96f:	75 07                	jne    0x47b978
  47b971:	e8 0a 0b 04 00       	call   0x4bc480
  47b976:	8b f8                	mov    edi,eax
  47b978:	8b 87 e8 04 00 00    	mov    eax,DWORD PTR [edi+0x4e8]
  47b97e:	3d 00 00 00 80       	cmp    eax,0x80000000
  47b983:	75 1e                	jne    0x47b9a3
  47b985:	8b 87 9c 04 00 00    	mov    eax,DWORD PTR [edi+0x49c]
  47b98b:	85 c0                	test   eax,eax
  47b98d:	75 05                	jne    0x47b994
  47b98f:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47b994:	50                   	push   eax
  47b995:	e8 76 f5 18 00       	call   0x60af10
  47b99a:	83 c4 04             	add    esp,0x4
  47b99d:	89 87 e8 04 00 00    	mov    DWORD PTR [edi+0x4e8],eax
  47b9a3:	85 c0                	test   eax,eax
  47b9a5:	75 59                	jne    0x47ba00
  47b9a7:	8b 85 18 01 00 00    	mov    eax,DWORD PTR [ebp+0x118]
  47b9ad:	89 86 8c 00 00 00    	mov    DWORD PTR [esi+0x8c],eax
  47b9b3:	8b 8d 1c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x11c]
  47b9b9:	89 8e 90 00 00 00    	mov    DWORD PTR [esi+0x90],ecx
  47b9bf:	8b 95 20 01 00 00    	mov    edx,DWORD PTR [ebp+0x120]
  47b9c5:	b8 00 00 c8 42       	mov    eax,0x42c80000
  47b9ca:	89 96 94 00 00 00    	mov    DWORD PTR [esi+0x94],edx
  47b9d0:	89 86 98 00 00 00    	mov    DWORD PTR [esi+0x98],eax
  47b9d6:	8b 8d 20 01 00 00    	mov    ecx,DWORD PTR [ebp+0x120]
  47b9dc:	89 8e 1c 01 00 00    	mov    DWORD PTR [esi+0x11c],ecx
  47b9e2:	8b 95 1c 01 00 00    	mov    edx,DWORD PTR [ebp+0x11c]
  47b9e8:	89 96 20 01 00 00    	mov    DWORD PTR [esi+0x120],edx
  47b9ee:	8b 8d 18 01 00 00    	mov    ecx,DWORD PTR [ebp+0x118]
  47b9f4:	89 8e 24 01 00 00    	mov    DWORD PTR [esi+0x124],ecx
  47b9fa:	89 86 28 01 00 00    	mov    DWORD PTR [esi+0x128],eax
  47ba00:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47ba04:	83 c6 24             	add    esi,0x24
  47ba07:	48                   	dec    eax
  47ba08:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  47ba0c:	0f 85 0b ff ff ff    	jne    0x47b91d
  47ba12:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47ba17:	85 c0                	test   eax,eax
  47ba19:	75 05                	jne    0x47ba20
  47ba1b:	e8 60 f8 0d 00       	call   0x55b280
  47ba20:	8d 54 24 18          	lea    edx,[esp+0x18]
  47ba24:	8b c8                	mov    ecx,eax
  47ba26:	52                   	push   edx
  47ba27:	e8 24 5d fa ff       	call   0x421750
  47ba2c:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  47ba30:	8b 08                	mov    ecx,DWORD PTR [eax]
  47ba32:	c7 84 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],0x0
  47ba39:	00 00 00 00 
  47ba3d:	85 c9                	test   ecx,ecx
  47ba3f:	0f 85 b7 00 00 00    	jne    0x47bafc
  47ba45:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  47ba49:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47ba4e:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  47ba52:	83 c9 ff             	or     ecx,0xffffffff
  47ba55:	33 c0                	xor    eax,eax
  47ba57:	33 f6                	xor    esi,esi
  47ba59:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47ba5b:	f7 d1                	not    ecx
  47ba5d:	49                   	dec    ecx
  47ba5e:	6a 01                	push   0x1
  47ba60:	8b d9                	mov    ebx,ecx
  47ba62:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47ba66:	53                   	push   ebx
  47ba67:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  47ba6b:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  47ba6f:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  47ba73:	e8 c8 5e f8 ff       	call   0x401940
  47ba78:	84 c0                	test   al,al
  47ba7a:	74 25                	je     0x47baa1
  47ba7c:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  47ba80:	8b cb                	mov    ecx,ebx
  47ba82:	8b d1                	mov    edx,ecx
  47ba84:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  47ba89:	c1 e9 02             	shr    ecx,0x2
  47ba8c:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47ba8e:	8b ca                	mov    ecx,edx
  47ba90:	53                   	push   ebx
  47ba91:	83 e1 03             	and    ecx,0x3
  47ba94:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  47ba96:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47ba9a:	e8 f1 86 f8 ff       	call   0x404190
  47ba9f:	33 f6                	xor    esi,esi
  47baa1:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  47baa5:	c6 84 24 34 01 00 00 	mov    BYTE PTR [esp+0x134],0x1
  47baac:	01 
  47baad:	50                   	push   eax
  47baae:	68 b6 00 00 00       	push   0xb6
  47bab3:	68 38 d6 68 00       	push   0x68d638
  47bab8:	68 2c d6 68 00       	push   0x68d62c
  47babd:	e8 2e 4d 12 00       	call   0x5a07f0
  47bac2:	ff d0                	call   eax
  47bac4:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  47bac8:	83 c4 10             	add    esp,0x10
  47bacb:	3b c6                	cmp    eax,esi
  47bacd:	74 1d                	je     0x47baec
  47bacf:	8d 48 ff             	lea    ecx,[eax-0x1]
  47bad2:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  47bad5:	84 c0                	test   al,al
  47bad7:	74 0a                	je     0x47bae3
  47bad9:	3c ff                	cmp    al,0xff
  47badb:	74 06                	je     0x47bae3
  47badd:	fe c8                	dec    al
  47badf:	88 01                	mov    BYTE PTR [ecx],al
  47bae1:	eb 09                	jmp    0x47baec
  47bae3:	51                   	push   ecx
  47bae4:	e8 07 2b 18 00       	call   0x5fe5f0
  47bae9:	83 c4 04             	add    esp,0x4
  47baec:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  47baf0:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  47baf4:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  47baf8:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  47bafc:	8b 00                	mov    eax,DWORD PTR [eax]
  47bafe:	83 ce ff             	or     esi,0xffffffff
  47bb01:	05 10 02 00 00       	add    eax,0x210
  47bb06:	89 b4 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],esi
  47bb0d:	8b 08                	mov    ecx,DWORD PTR [eax]
  47bb0f:	89 8c 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],ecx
  47bb16:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47bb19:	89 94 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],edx
  47bb20:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47bb23:	89 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],eax
  47bb2a:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47bb2e:	85 c0                	test   eax,eax
  47bb30:	74 18                	je     0x47bb4a
  47bb32:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  47bb35:	8b c8                	mov    ecx,eax
  47bb37:	83 c0 14             	add    eax,0x14
  47bb3a:	4f                   	dec    edi
  47bb3b:	8b d7                	mov    edx,edi
  47bb3d:	85 d2                	test   edx,edx
  47bb3f:	89 38                	mov    DWORD PTR [eax],edi
  47bb41:	75 07                	jne    0x47bb4a
  47bb43:	6a 00                	push   0x0
  47bb45:	e8 76 04 13 00       	call   0x5abfc0
  47bb4a:	39 b4 24 40 01 00 00 	cmp    DWORD PTR [esp+0x140],esi
  47bb51:	0f 85 d2 00 00 00    	jne    0x47bc29
  47bb57:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  47bb5b:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47bb60:	88 4c 24 74          	mov    BYTE PTR [esp+0x74],cl
  47bb64:	83 c9 ff             	or     ecx,0xffffffff
  47bb67:	33 c0                	xor    eax,eax
  47bb69:	33 f6                	xor    esi,esi
  47bb6b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47bb6d:	f7 d1                	not    ecx
  47bb6f:	49                   	dec    ecx
  47bb70:	6a 01                	push   0x1
  47bb72:	8b d9                	mov    ebx,ecx
  47bb74:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  47bb78:	53                   	push   ebx
  47bb79:	89 b4 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],esi
  47bb80:	89 b4 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],esi
  47bb87:	89 b4 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],esi
  47bb8e:	e8 ad 5d f8 ff       	call   0x401940
  47bb93:	84 c0                	test   al,al
  47bb95:	74 27                	je     0x47bbbe
  47bb97:	8b 7c 24 78          	mov    edi,DWORD PTR [esp+0x78]
  47bb9b:	8b cb                	mov    ecx,ebx
  47bb9d:	8b d1                	mov    edx,ecx
  47bb9f:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  47bba4:	c1 e9 02             	shr    ecx,0x2
  47bba7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47bba9:	8b ca                	mov    ecx,edx
  47bbab:	83 e1 03             	and    ecx,0x3
  47bbae:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  47bbb0:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
  47bbb4:	89 5c 24 7c          	mov    DWORD PTR [esp+0x7c],ebx
  47bbb8:	33 f6                	xor    esi,esi
  47bbba:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  47bbbe:	8d 4c 24 74          	lea    ecx,[esp+0x74]
  47bbc2:	c7 84 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],0x2
  47bbc9:	02 00 00 00 
  47bbcd:	51                   	push   ecx
  47bbce:	68 8a 00 00 00       	push   0x8a
  47bbd3:	68 2c e2 68 00       	push   0x68e22c
  47bbd8:	68 14 e2 68 00       	push   0x68e214
  47bbdd:	e8 0e 4c 12 00       	call   0x5a07f0
  47bbe2:	ff d0                	call   eax
  47bbe4:	8b 84 24 88 00 00 00 	mov    eax,DWORD PTR [esp+0x88]
  47bbeb:	83 c4 10             	add    esp,0x10
  47bbee:	3b c6                	cmp    eax,esi
  47bbf0:	c7 84 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],0xffffffff
  47bbf7:	ff ff ff ff 
  47bbfb:	74 1d                	je     0x47bc1a
  47bbfd:	8d 48 ff             	lea    ecx,[eax-0x1]
  47bc00:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  47bc03:	84 c0                	test   al,al
  47bc05:	74 0a                	je     0x47bc11
  47bc07:	3c ff                	cmp    al,0xff
  47bc09:	74 06                	je     0x47bc11
  47bc0b:	fe c8                	dec    al
  47bc0d:	88 01                	mov    BYTE PTR [ecx],al
  47bc0f:	eb 09                	jmp    0x47bc1a
  47bc11:	51                   	push   ecx
  47bc12:	e8 d9 29 18 00       	call   0x5fe5f0
  47bc17:	83 c4 04             	add    esp,0x4
  47bc1a:	89 74 24 78          	mov    DWORD PTR [esp+0x78],esi
  47bc1e:	89 74 24 7c          	mov    DWORD PTR [esp+0x7c],esi
  47bc22:	89 b4 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],esi
  47bc29:	db 84 24 40 01 00 00 	fild   DWORD PTR [esp+0x140]
  47bc30:	8b 95 2c 4b 00 00    	mov    edx,DWORD PTR [ebp+0x4b2c]
  47bc36:	a1 7c e2 64 00       	mov    eax,ds:0x64e27c
  47bc3b:	52                   	push   edx
  47bc3c:	8b 15 78 e2 64 00    	mov    edx,DWORD PTR ds:0x64e278
  47bc42:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
  47bc46:	d9 44 24 40          	fld    DWORD PTR [esp+0x40]
  47bc4a:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  47bc50:	51                   	push   ecx
  47bc51:	8b 0d 74 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e274
  47bc57:	d9 1c 24             	fstp   DWORD PTR [esp]
  47bc5a:	50                   	push   eax
  47bc5b:	51                   	push   ecx
  47bc5c:	52                   	push   edx
  47bc5d:	8b cd                	mov    ecx,ebp
  47bc5f:	e8 ac 0a 00 00       	call   0x47c710
  47bc64:	8a 8d 34 4b 00 00    	mov    cl,BYTE PTR [ebp+0x4b34]
  47bc6a:	84 c9                	test   cl,cl
  47bc6c:	74 20                	je     0x47bc8e
  47bc6e:	d9 c0                	fld    st(0)
  47bc70:	d8 85 2c 4b 00 00    	fadd   DWORD PTR [ebp+0x4b2c]
  47bc76:	d9 9d 2c 4b 00 00    	fstp   DWORD PTR [ebp+0x4b2c]
  47bc7c:	d9 85 30 4b 00 00    	fld    DWORD PTR [ebp+0x4b30]
  47bc82:	d8 e1                	fsub   st,st(1)
  47bc84:	d9 9d 30 4b 00 00    	fstp   DWORD PTR [ebp+0x4b30]
  47bc8a:	dd d8                	fstp   st(0)
  47bc8c:	eb 1a                	jmp    0x47bca8
  47bc8e:	d9 85 2c 4b 00 00    	fld    DWORD PTR [ebp+0x4b2c]
  47bc94:	d8 e1                	fsub   st,st(1)
  47bc96:	d9 9d 2c 4b 00 00    	fstp   DWORD PTR [ebp+0x4b2c]
  47bc9c:	d8 85 30 4b 00 00    	fadd   DWORD PTR [ebp+0x4b30]
  47bca2:	d9 9d 30 4b 00 00    	fstp   DWORD PTR [ebp+0x4b30]
  47bca8:	d9 85 2c 4b 00 00    	fld    DWORD PTR [ebp+0x4b2c]
  47bcae:	d8 1d 78 e2 64 00    	fcomp  DWORD PTR ds:0x64e278
  47bcb4:	df e0                	fnstsw ax
  47bcb6:	f6 c4 41             	test   ah,0x41
  47bcb9:	74 13                	je     0x47bcce
  47bcbb:	d9 85 2c 4b 00 00    	fld    DWORD PTR [ebp+0x4b2c]
  47bcc1:	d8 1d 74 e2 64 00    	fcomp  DWORD PTR ds:0x64e274
  47bcc7:	df e0                	fnstsw ax
  47bcc9:	f6 c4 01             	test   ah,0x1
  47bccc:	74 39                	je     0x47bd07
  47bcce:	84 c9                	test   cl,cl
  47bcd0:	74 13                	je     0x47bce5
  47bcd2:	a1 78 e2 64 00       	mov    eax,ds:0x64e278
  47bcd7:	89 85 2c 4b 00 00    	mov    DWORD PTR [ebp+0x4b2c],eax
  47bcdd:	8b 15 74 e2 64 00    	mov    edx,DWORD PTR ds:0x64e274
  47bce3:	eb 11                	jmp    0x47bcf6
  47bce5:	a1 74 e2 64 00       	mov    eax,ds:0x64e274
  47bcea:	89 85 2c 4b 00 00    	mov    DWORD PTR [ebp+0x4b2c],eax
  47bcf0:	8b 15 78 e2 64 00    	mov    edx,DWORD PTR ds:0x64e278
  47bcf6:	84 c9                	test   cl,cl
  47bcf8:	0f 94 c0             	sete   al
  47bcfb:	89 95 30 4b 00 00    	mov    DWORD PTR [ebp+0x4b30],edx
  47bd01:	88 85 34 4b 00 00    	mov    BYTE PTR [ebp+0x4b34],al
  47bd07:	d9 85 2c 4b 00 00    	fld    DWORD PTR [ebp+0x4b2c]
  47bd0d:	d8 8d 38 4b 00 00    	fmul   DWORD PTR [ebp+0x4b38]
  47bd13:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  47bd1a:	8d 94 24 84 00 00 00 	lea    edx,[esp+0x84]
  47bd21:	51                   	push   ecx
  47bd22:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47bd26:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  47bd2a:	d9 85 38 4b 00 00    	fld    DWORD PTR [ebp+0x4b38]
  47bd30:	d8 8d 30 4b 00 00    	fmul   DWORD PTR [ebp+0x4b30]
  47bd36:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  47bd3a:	e8 a1 72 13 00       	call   0x5b2fe0
  47bd3f:	8d 94 24 90 00 00 00 	lea    edx,[esp+0x90]
  47bd46:	52                   	push   edx
  47bd47:	e8 a4 58 13 00       	call   0x5b15f0
  47bd4c:	d9 5c 24 74          	fstp   DWORD PTR [esp+0x74]
  47bd50:	8d 84 24 94 00 00 00 	lea    eax,[esp+0x94]
  47bd57:	50                   	push   eax
  47bd58:	e8 23 ea ff ff       	call   0x47a780
  47bd5d:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47bd61:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  47bd65:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47bd6b:	83 c4 08             	add    esp,0x8
  47bd6e:	df e0                	fnstsw ax
  47bd70:	f6 c4 01             	test   ah,0x1
  47bd73:	74 1b                	je     0x47bd90
  47bd75:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  47bd79:	d8 1d 10 d9 64 00    	fcomp  DWORD PTR ds:0x64d910
  47bd7f:	df e0                	fnstsw ax
  47bd81:	f6 c4 41             	test   ah,0x41
  47bd84:	75 0a                	jne    0x47bd90
  47bd86:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  47bd8a:	d9 e0                	fchs
  47bd8c:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  47bd90:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  47bd94:	e8 27 73 13 00       	call   0x5b30c0
  47bd99:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  47bda0:	e8 1b 73 13 00       	call   0x5b30c0
  47bda5:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  47bdac:	e8 0f 73 13 00       	call   0x5b30c0
  47bdb1:	8d 8c 24 fc 00 00 00 	lea    ecx,[esp+0xfc]
  47bdb8:	e8 03 73 13 00       	call   0x5b30c0
  47bdbd:	83 bc 24 40 01 00 00 	cmp    DWORD PTR [esp+0x140],0xffffffff
  47bdc4:	ff 
  47bdc5:	0f 85 c3 00 00 00    	jne    0x47be8e
  47bdcb:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  47bdcf:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47bdd4:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  47bdd8:	83 c9 ff             	or     ecx,0xffffffff
  47bddb:	33 c0                	xor    eax,eax
  47bddd:	33 f6                	xor    esi,esi
  47bddf:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47bde1:	f7 d1                	not    ecx
  47bde3:	49                   	dec    ecx
  47bde4:	6a 01                	push   0x1
  47bde6:	8b d9                	mov    ebx,ecx
  47bde8:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47bdec:	53                   	push   ebx
  47bded:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  47bdf1:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  47bdf5:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  47bdf9:	e8 42 5b f8 ff       	call   0x401940
  47bdfe:	84 c0                	test   al,al
  47be00:	74 27                	je     0x47be29
  47be02:	8b 7c 24 20          	mov    edi,DWORD PTR [esp+0x20]
  47be06:	8b cb                	mov    ecx,ebx
  47be08:	8b d1                	mov    edx,ecx
  47be0a:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  47be0f:	c1 e9 02             	shr    ecx,0x2
  47be12:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  47be14:	8b ca                	mov    ecx,edx
  47be16:	83 e1 03             	and    ecx,0x3
  47be19:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  47be1b:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  47be1f:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  47be23:	33 f6                	xor    esi,esi
  47be25:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  47be29:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47be2d:	c7 84 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],0x3
  47be34:	03 00 00 00 
  47be38:	51                   	push   ecx
  47be39:	68 8a 00 00 00       	push   0x8a
  47be3e:	68 2c e2 68 00       	push   0x68e22c
  47be43:	68 14 e2 68 00       	push   0x68e214
  47be48:	e8 a3 49 12 00       	call   0x5a07f0
  47be4d:	ff d0                	call   eax
  47be4f:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  47be53:	83 c4 10             	add    esp,0x10
  47be56:	3b c6                	cmp    eax,esi
  47be58:	c7 84 24 34 01 00 00 	mov    DWORD PTR [esp+0x134],0xffffffff
  47be5f:	ff ff ff ff 
  47be63:	74 1d                	je     0x47be82
  47be65:	8d 48 ff             	lea    ecx,[eax-0x1]
  47be68:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  47be6b:	84 c0                	test   al,al
  47be6d:	74 0a                	je     0x47be79
  47be6f:	3c ff                	cmp    al,0xff
  47be71:	74 06                	je     0x47be79
  47be73:	fe c8                	dec    al
  47be75:	88 01                	mov    BYTE PTR [ecx],al
  47be77:	eb 09                	jmp    0x47be82
  47be79:	51                   	push   ecx
  47be7a:	e8 71 27 18 00       	call   0x5fe5f0
  47be7f:	83 c4 04             	add    esp,0x4
  47be82:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  47be86:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  47be8a:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
  47be8e:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  47be92:	d8 0d ec e2 64 00    	fmul   DWORD PTR ds:0x64e2ec
  47be98:	51                   	push   ecx
  47be99:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  47bea0:	d8 85 40 4b 00 00    	fadd   DWORD PTR [ebp+0x4b40]
  47bea6:	d9 95 40 4b 00 00    	fst    DWORD PTR [ebp+0x4b40]
  47beac:	d9 e0                	fchs
  47beae:	d9 1c 24             	fstp   DWORD PTR [esp]
  47beb1:	e8 ba 72 13 00       	call   0x5b3170
  47beb6:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  47beba:	d8 25 d4 b1 64 00    	fsub   DWORD PTR ds:0x64b1d4
  47bec0:	51                   	push   ecx
  47bec1:	8d 8c 24 d0 00 00 00 	lea    ecx,[esp+0xd0]
  47bec8:	d9 1c 24             	fstp   DWORD PTR [esp]
  47becb:	e8 60 72 13 00       	call   0x5b3130
  47bed0:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  47bed4:	8d 8c 24 fc 00 00 00 	lea    ecx,[esp+0xfc]
  47bedb:	52                   	push   edx
  47bedc:	e8 0f 72 13 00       	call   0x5b30f0
  47bee1:	be dc e1 64 00       	mov    esi,0x64e1dc
  47bee6:	8d bd e4 02 00 00    	lea    edi,[ebp+0x2e4]
  47beec:	5b                   	pop    ebx
  47beed:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  47bef1:	d8 4e fc             	fmul   DWORD PTR [esi-0x4]
  47bef4:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  47bef8:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47befc:	50                   	push   eax
  47befd:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  47bf04:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
  47bf08:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  47bf0c:	d8 0e                	fmul   DWORD PTR [esi]
  47bf0e:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
  47bf12:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  47bf16:	d8 4e 04             	fmul   DWORD PTR [esi+0x4]
  47bf19:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
  47bf1d:	e8 9e 73 13 00       	call   0x5b32c0
  47bf22:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47bf26:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47bf2a:	51                   	push   ecx
  47bf2b:	8d 8c 24 fc 00 00 00 	lea    ecx,[esp+0xfc]
  47bf32:	e8 89 73 13 00       	call   0x5b32c0
  47bf37:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  47bf3b:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47bf3f:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47bf43:	52                   	push   edx
  47bf44:	50                   	push   eax
  47bf45:	51                   	push   ecx
  47bf46:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47bf4a:	e8 31 73 13 00       	call   0x5b3280
  47bf4f:	8b 54 24 60          	mov    edx,DWORD PTR [esp+0x60]
  47bf53:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  47bf57:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  47bf5b:	89 57 fc             	mov    DWORD PTR [edi-0x4],edx
  47bf5e:	89 07                	mov    DWORD PTR [edi],eax
  47bf60:	89 4f 04             	mov    DWORD PTR [edi+0x4],ecx
  47bf63:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
  47bf66:	83 c6 24             	add    esi,0x24
  47bf69:	89 57 08             	mov    DWORD PTR [edi+0x8],edx
  47bf6c:	8b 46 e8             	mov    eax,DWORD PTR [esi-0x18]
  47bf6f:	89 47 0c             	mov    DWORD PTR [edi+0xc],eax
  47bf72:	83 c7 24             	add    edi,0x24
  47bf75:	81 fe 6c e2 64 00    	cmp    esi,0x64e26c
  47bf7b:	0f 8c 6c ff ff ff    	jl     0x47beed
  47bf81:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  47bf87:	85 f6                	test   esi,esi
  47bf89:	75 07                	jne    0x47bf92
  47bf8b:	e8 f0 04 04 00       	call   0x4bc480
  47bf90:	8b f0                	mov    esi,eax
  47bf92:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  47bf98:	3d 00 00 00 80       	cmp    eax,0x80000000
  47bf9d:	75 1e                	jne    0x47bfbd
  47bf9f:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  47bfa5:	85 c0                	test   eax,eax
  47bfa7:	75 05                	jne    0x47bfae
  47bfa9:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47bfae:	50                   	push   eax
  47bfaf:	e8 5c ef 18 00       	call   0x60af10
  47bfb4:	83 c4 04             	add    esp,0x4
  47bfb7:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  47bfbd:	85 c0                	test   eax,eax
  47bfbf:	0f 85 1a 02 00 00    	jne    0x47c1df
  47bfc5:	8b 8d 40 4b 00 00    	mov    ecx,DWORD PTR [ebp+0x4b40]
  47bfcb:	51                   	push   ecx
  47bfcc:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  47bfd3:	e8 98 71 13 00       	call   0x5b3170
  47bfd8:	be d8 e1 64 00       	mov    esi,0x64e1d8
  47bfdd:	8d bd 54 02 00 00    	lea    edi,[ebp+0x254]
  47bfe3:	81 fe d8 e1 64 00    	cmp    esi,0x64e1d8
  47bfe9:	74 18                	je     0x47c003
  47bfeb:	81 fe 20 e2 64 00    	cmp    esi,0x64e220
  47bff1:	74 10                	je     0x47c003
  47bff3:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  47bff7:	d8 0e                	fmul   DWORD PTR [esi]
  47bff9:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  47bffd:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  47c001:	eb 0e                	jmp    0x47c011
  47c003:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  47c007:	d8 0e                	fmul   DWORD PTR [esi]
  47c009:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  47c00d:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  47c011:	d8 4e 04             	fmul   DWORD PTR [esi+0x4]
  47c014:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c018:	8d 8c 24 98 00 00 00 	lea    ecx,[esp+0x98]
  47c01f:	52                   	push   edx
  47c020:	8d 54 24 40          	lea    edx,[esp+0x40]
  47c024:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
  47c028:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  47c02c:	d8 4e 08             	fmul   DWORD PTR [esi+0x8]
  47c02f:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
  47c033:	e8 88 72 13 00       	call   0x5b32c0
  47c038:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  47c03c:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c040:	50                   	push   eax
  47c041:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  47c048:	e8 73 72 13 00       	call   0x5b32c0
  47c04d:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47c051:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c055:	51                   	push   ecx
  47c056:	8d 8c 24 fc 00 00 00 	lea    ecx,[esp+0xfc]
  47c05d:	e8 5e 72 13 00       	call   0x5b32c0
  47c062:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  47c066:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47c06a:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47c06e:	52                   	push   edx
  47c06f:	50                   	push   eax
  47c070:	51                   	push   ecx
  47c071:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47c075:	e8 06 72 13 00       	call   0x5b3280
  47c07a:	8b 54 24 60          	mov    edx,DWORD PTR [esp+0x60]
  47c07e:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  47c082:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  47c086:	89 57 fc             	mov    DWORD PTR [edi-0x4],edx
  47c089:	89 07                	mov    DWORD PTR [edi],eax
  47c08b:	81 fe d8 e1 64 00    	cmp    esi,0x64e1d8
  47c091:	89 4f 04             	mov    DWORD PTR [edi+0x4],ecx
  47c094:	74 16                	je     0x47c0ac
  47c096:	81 fe 20 e2 64 00    	cmp    esi,0x64e220
  47c09c:	74 0e                	je     0x47c0ac
  47c09e:	8b 56 e8             	mov    edx,DWORD PTR [esi-0x18]
  47c0a1:	89 57 08             	mov    DWORD PTR [edi+0x8],edx
  47c0a4:	8b 46 ec             	mov    eax,DWORD PTR [esi-0x14]
  47c0a7:	89 47 0c             	mov    DWORD PTR [edi+0xc],eax
  47c0aa:	eb 0c                	jmp    0x47c0b8
  47c0ac:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
  47c0af:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
  47c0b2:	8b 56 34             	mov    edx,DWORD PTR [esi+0x34]
  47c0b5:	89 57 0c             	mov    DWORD PTR [edi+0xc],edx
  47c0b8:	83 c6 24             	add    esi,0x24
  47c0bb:	83 c7 24             	add    edi,0x24
  47c0be:	81 fe 68 e2 64 00    	cmp    esi,0x64e268
  47c0c4:	0f 8c 19 ff ff ff    	jl     0x47bfe3
  47c0ca:	d9 05 6c e2 64 00    	fld    DWORD PTR ds:0x64e26c
  47c0d0:	d8 a5 2c 4b 00 00    	fsub   DWORD PTR [ebp+0x4b2c]
  47c0d6:	51                   	push   ecx
  47c0d7:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  47c0de:	d8 05 70 e2 64 00    	fadd   DWORD PTR ds:0x64e270
  47c0e4:	d8 8d 38 4b 00 00    	fmul   DWORD PTR [ebp+0x4b38]
  47c0ea:	d8 0d 5c d6 64 00    	fmul   DWORD PTR ds:0x64d65c
  47c0f0:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  47c0f4:	d9 85 40 4b 00 00    	fld    DWORD PTR [ebp+0x4b40]
  47c0fa:	d8 05 e8 e2 64 00    	fadd   DWORD PTR ds:0x64e2e8
  47c100:	d9 e0                	fchs
  47c102:	d9 1c 24             	fstp   DWORD PTR [esp]
  47c105:	e8 66 70 13 00       	call   0x5b3170
  47c10a:	be dc e1 64 00       	mov    esi,0x64e1dc
  47c10f:	8d bd c4 01 00 00    	lea    edi,[ebp+0x1c4]
  47c115:	81 fe dc e1 64 00    	cmp    esi,0x64e1dc
  47c11b:	74 19                	je     0x47c136
  47c11d:	81 fe 24 e2 64 00    	cmp    esi,0x64e224
  47c123:	74 11                	je     0x47c136
  47c125:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  47c129:	d8 4e fc             	fmul   DWORD PTR [esi-0x4]
  47c12c:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  47c130:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  47c134:	eb 0f                	jmp    0x47c145
  47c136:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  47c13a:	d8 4e fc             	fmul   DWORD PTR [esi-0x4]
  47c13d:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  47c141:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  47c145:	d8 0e                	fmul   DWORD PTR [esi]
  47c147:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  47c14b:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c14f:	50                   	push   eax
  47c150:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  47c157:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
  47c15b:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  47c15f:	d8 4e 04             	fmul   DWORD PTR [esi+0x4]
  47c162:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
  47c166:	e8 55 71 13 00       	call   0x5b32c0
  47c16b:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  47c16f:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c173:	51                   	push   ecx
  47c174:	8d 8c 24 cc 00 00 00 	lea    ecx,[esp+0xcc]
  47c17b:	e8 40 71 13 00       	call   0x5b32c0
  47c180:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c184:	8d 8c 24 f8 00 00 00 	lea    ecx,[esp+0xf8]
  47c18b:	52                   	push   edx
  47c18c:	8d 54 24 40          	lea    edx,[esp+0x40]
  47c190:	e8 2b 71 13 00       	call   0x5b32c0
  47c195:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  47c199:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  47c19d:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  47c1a1:	50                   	push   eax
  47c1a2:	51                   	push   ecx
  47c1a3:	52                   	push   edx
  47c1a4:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47c1a8:	e8 d3 70 13 00       	call   0x5b3280
  47c1ad:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  47c1b1:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  47c1b5:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
  47c1b9:	89 47 fc             	mov    DWORD PTR [edi-0x4],eax
  47c1bc:	89 0f                	mov    DWORD PTR [edi],ecx
  47c1be:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
  47c1c1:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  47c1c4:	83 c6 24             	add    esi,0x24
  47c1c7:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
  47c1ca:	8b 4e e8             	mov    ecx,DWORD PTR [esi-0x18]
  47c1cd:	89 4f 0c             	mov    DWORD PTR [edi+0xc],ecx
  47c1d0:	83 c7 24             	add    edi,0x24
  47c1d3:	81 fe 6c e2 64 00    	cmp    esi,0x64e26c
  47c1d9:	0f 8c 36 ff ff ff    	jl     0x47c115
  47c1df:	be dc e1 64 00       	mov    esi,0x64e1dc
  47c1e4:	8d bd 34 01 00 00    	lea    edi,[ebp+0x134]
  47c1ea:	d9 46 fc             	fld    DWORD PTR [esi-0x4]
  47c1ed:	d8 8d 38 4b 00 00    	fmul   DWORD PTR [ebp+0x4b38]
  47c1f3:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c1f7:	8d 8c 24 c8 00 00 00 	lea    ecx,[esp+0xc8]
  47c1fe:	52                   	push   edx
  47c1ff:	8d 54 24 40          	lea    edx,[esp+0x40]
  47c203:	d8 0d 2c a4 64 00    	fmul   DWORD PTR ds:0x64a42c
  47c209:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
  47c20d:	d9 06                	fld    DWORD PTR [esi]
  47c20f:	d8 8d 38 4b 00 00    	fmul   DWORD PTR [ebp+0x4b38]
  47c215:	d8 0d 2c a4 64 00    	fmul   DWORD PTR ds:0x64a42c
  47c21b:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
  47c21f:	d9 46 04             	fld    DWORD PTR [esi+0x4]
  47c222:	d8 8d 38 4b 00 00    	fmul   DWORD PTR [ebp+0x4b38]
  47c228:	d8 0d 2c a4 64 00    	fmul   DWORD PTR ds:0x64a42c
  47c22e:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
  47c232:	e8 89 70 13 00       	call   0x5b32c0
  47c237:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  47c23b:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  47c23f:	50                   	push   eax
  47c240:	8d 8c 24 fc 00 00 00 	lea    ecx,[esp+0xfc]
  47c247:	e8 74 70 13 00       	call   0x5b32c0
  47c24c:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  47c250:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  47c254:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  47c258:	51                   	push   ecx
  47c259:	52                   	push   edx
  47c25a:	50                   	push   eax
  47c25b:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  47c25f:	e8 1c 70 13 00       	call   0x5b3280
  47c264:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  47c268:	8b 54 24 64          	mov    edx,DWORD PTR [esp+0x64]
  47c26c:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  47c270:	89 4f fc             	mov    DWORD PTR [edi-0x4],ecx
  47c273:	89 17                	mov    DWORD PTR [edi],edx
  47c275:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
  47c278:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  47c27b:	83 c6 24             	add    esi,0x24
  47c27e:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
  47c281:	8b 56 e8             	mov    edx,DWORD PTR [esi-0x18]
  47c284:	89 57 0c             	mov    DWORD PTR [edi+0xc],edx
  47c287:	83 c7 24             	add    edi,0x24
  47c28a:	81 fe 6c e2 64 00    	cmp    esi,0x64e26c
  47c290:	0f 8c 54 ff ff ff    	jl     0x47c1ea
  47c296:	8b 8c 24 28 01 00 00 	mov    ecx,DWORD PTR [esp+0x128]
  47c29d:	5f                   	pop    edi
  47c29e:	5e                   	pop    esi
  47c29f:	5d                   	pop    ebp
  47c2a0:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47c2a7:	81 c4 28 01 00 00    	add    esp,0x128
  47c2ad:	c2 08 00             	ret    0x8
  47c2b0:	83 ec 20             	sub    esp,0x20
  47c2b3:	53                   	push   ebx
  47c2b4:	55                   	push   ebp
  47c2b5:	56                   	push   esi
  47c2b6:	57                   	push   edi
  47c2b7:	8b f9                	mov    edi,ecx
  47c2b9:	33 ed                	xor    ebp,ebp
  47c2bb:	c6 44 24 13 00       	mov    BYTE PTR [esp+0x13],0x0
  47c2c0:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
  47c2c4:	8a 87 f8 03 00 00    	mov    al,BYTE PTR [edi+0x3f8]
  47c2ca:	84 c0                	test   al,al
  47c2cc:	0f 84 97 02 00 00    	je     0x47c569
  47c2d2:	8a 87 06 04 00 00    	mov    al,BYTE PTR [edi+0x406]
  47c2d8:	84 c0                	test   al,al
  47c2da:	0f 84 89 02 00 00    	je     0x47c569
  47c2e0:	8b 87 e4 4a 00 00    	mov    eax,DWORD PTR [edi+0x4ae4]
  47c2e6:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
  47c2ea:	8d b7 e4 4a 00 00    	lea    esi,[edi+0x4ae4]
  47c2f0:	83 f8 ff             	cmp    eax,0xffffffff
  47c2f3:	b2 01                	mov    dl,0x1
  47c2f5:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  47c2f9:	74 3b                	je     0x47c336
  47c2fb:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  47c2fe:	83 f9 ff             	cmp    ecx,0xffffffff
  47c301:	75 0e                	jne    0x47c311
  47c303:	03 c3                	add    eax,ebx
  47c305:	c7 46 08 00 00 80 3f 	mov    DWORD PTR [esi+0x8],0x3f800000
  47c30c:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  47c30f:	eb 25                	jmp    0x47c336
  47c311:	3b d9                	cmp    ebx,ecx
  47c313:	7e 07                	jle    0x47c31c
  47c315:	89 6e 08             	mov    DWORD PTR [esi+0x8],ebp
  47c318:	32 d2                	xor    dl,dl
  47c31a:	eb 1a                	jmp    0x47c336
  47c31c:	3b c5                	cmp    eax,ebp
  47c31e:	7e 13                	jle    0x47c333
  47c320:	2b cb                	sub    ecx,ebx
  47c322:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  47c326:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c32a:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
  47c32e:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
  47c331:	eb 03                	jmp    0x47c336
  47c333:	89 6e 08             	mov    DWORD PTR [esi+0x8],ebp
  47c336:	84 d2                	test   dl,dl
  47c338:	88 56 0c             	mov    BYTE PTR [esi+0xc],dl
  47c33b:	74 6c                	je     0x47c3a9
  47c33d:	8b 8f f4 4a 00 00    	mov    ecx,DWORD PTR [edi+0x4af4]
  47c343:	b2 01                	mov    dl,0x1
  47c345:	83 f9 ff             	cmp    ecx,0xffffffff
  47c348:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  47c34c:	74 4d                	je     0x47c39b
  47c34e:	8b 87 f8 4a 00 00    	mov    eax,DWORD PTR [edi+0x4af8]
  47c354:	83 f8 ff             	cmp    eax,0xffffffff
  47c357:	75 14                	jne    0x47c36d
  47c359:	03 cb                	add    ecx,ebx
  47c35b:	c7 87 fc 4a 00 00 00 	mov    DWORD PTR [edi+0x4afc],0x3f800000
  47c362:	00 80 3f 
  47c365:	89 8f f8 4a 00 00    	mov    DWORD PTR [edi+0x4af8],ecx
  47c36b:	eb 2e                	jmp    0x47c39b
  47c36d:	3b d8                	cmp    ebx,eax
  47c36f:	7e 0a                	jle    0x47c37b
  47c371:	89 af fc 4a 00 00    	mov    DWORD PTR [edi+0x4afc],ebp
  47c377:	32 d2                	xor    dl,dl
  47c379:	eb 20                	jmp    0x47c39b
  47c37b:	3b cd                	cmp    ecx,ebp
  47c37d:	7e 16                	jle    0x47c395
  47c37f:	2b c3                	sub    eax,ebx
  47c381:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  47c385:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c389:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
  47c38d:	d9 9f fc 4a 00 00    	fstp   DWORD PTR [edi+0x4afc]
  47c393:	eb 06                	jmp    0x47c39b
  47c395:	89 af fc 4a 00 00    	mov    DWORD PTR [edi+0x4afc],ebp
  47c39b:	84 d2                	test   dl,dl
  47c39d:	88 97 00 4b 00 00    	mov    BYTE PTR [edi+0x4b00],dl
  47c3a3:	0f 85 c0 01 00 00    	jne    0x47c569
  47c3a9:	8d af 48 05 00 00    	lea    ebp,[edi+0x548]
  47c3af:	83 7c 24 14 32       	cmp    DWORD PTR [esp+0x14],0x32
  47c3b4:	0f 8d af 01 00 00    	jge    0x47c569
  47c3ba:	8a 45 6c             	mov    al,BYTE PTR [ebp+0x6c]
  47c3bd:	84 c0                	test   al,al
  47c3bf:	0f 85 89 01 00 00    	jne    0x47c54e
  47c3c5:	8b cd                	mov    ecx,ebp
  47c3c7:	e8 44 23 00 00       	call   0x47e710
  47c3cc:	8d 87 90 03 00 00    	lea    eax,[edi+0x390]
  47c3d2:	8d 4d 04             	lea    ecx,[ebp+0x4]
  47c3d5:	8b 10                	mov    edx,DWORD PTR [eax]
  47c3d7:	89 11                	mov    DWORD PTR [ecx],edx
  47c3d9:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  47c3dc:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  47c3df:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47c3e2:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  47c3e5:	e8 b6 e0 18 00       	call   0x60a4a0
  47c3ea:	99                   	cdq
  47c3eb:	b9 10 27 00 00       	mov    ecx,0x2710
  47c3f0:	f7 f9                	idiv   ecx
  47c3f2:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  47c3f6:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c3fa:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  47c400:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  47c406:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  47c40a:	e8 91 e0 18 00       	call   0x60a4a0
  47c40f:	99                   	cdq
  47c410:	b9 10 27 00 00       	mov    ecx,0x2710
  47c415:	f7 f9                	idiv   ecx
  47c417:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  47c41b:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  47c41f:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  47c425:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  47c429:	e8 72 e0 18 00       	call   0x60a4a0
  47c42e:	99                   	cdq
  47c42f:	b9 10 27 00 00       	mov    ecx,0x2710
  47c434:	f7 f9                	idiv   ecx
  47c436:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  47c43a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47c43e:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  47c442:	81 e2 03 00 00 80    	and    edx,0x80000003
  47c448:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  47c44e:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  47c454:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  47c458:	79 05                	jns    0x47c45f
  47c45a:	4a                   	dec    edx
  47c45b:	83 ca fc             	or     edx,0xfffffffc
  47c45e:	42                   	inc    edx
  47c45f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47c463:	50                   	push   eax
  47c464:	75 0c                	jne    0x47c472
  47c466:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  47c46a:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  47c46e:	51                   	push   ecx
  47c46f:	52                   	push   edx
  47c470:	eb 0f                	jmp    0x47c481
  47c472:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  47c476:	51                   	push   ecx
  47c477:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47c47b:	d9 e0                	fchs
  47c47d:	d9 1c 24             	fstp   DWORD PTR [esp]
  47c480:	51                   	push   ecx
  47c481:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47c485:	e8 96 69 13 00       	call   0x5b2e20
  47c48a:	8d 54 24 24          	lea    edx,[esp+0x24]
  47c48e:	68 00 00 f0 41       	push   0x41f00000
  47c493:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47c497:	e8 04 6b 13 00       	call   0x5b2fa0
  47c49c:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  47c4a0:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  47c4a4:	8d 55 10             	lea    edx,[ebp+0x10]
  47c4a7:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
  47c4aa:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47c4ae:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c4b1:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  47c4b4:	8b 06                	mov    eax,DWORD PTR [esi]
  47c4b6:	83 f8 ff             	cmp    eax,0xffffffff
  47c4b9:	b2 01                	mov    dl,0x1
  47c4bb:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  47c4bf:	74 4d                	je     0x47c50e
  47c4c1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  47c4c4:	83 f9 ff             	cmp    ecx,0xffffffff
  47c4c7:	75 0e                	jne    0x47c4d7
  47c4c9:	03 c3                	add    eax,ebx
  47c4cb:	c7 46 08 00 00 80 3f 	mov    DWORD PTR [esi+0x8],0x3f800000
  47c4d2:	89 46 04             	mov    DWORD PTR [esi+0x4],eax
  47c4d5:	eb 37                	jmp    0x47c50e
  47c4d7:	39 4c 24 34          	cmp    DWORD PTR [esp+0x34],ecx
  47c4db:	7e 0b                	jle    0x47c4e8
  47c4dd:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
  47c4e4:	32 d2                	xor    dl,dl
  47c4e6:	eb 22                	jmp    0x47c50a
  47c4e8:	85 c0                	test   eax,eax
  47c4ea:	7e 17                	jle    0x47c503
  47c4ec:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
  47c4f0:	2b cb                	sub    ecx,ebx
  47c4f2:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  47c4f6:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  47c4fa:	da 74 24 1c          	fidiv  DWORD PTR [esp+0x1c]
  47c4fe:	d9 5e 08             	fstp   DWORD PTR [esi+0x8]
  47c501:	eb 0b                	jmp    0x47c50e
  47c503:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
  47c50a:	8b 5c 24 34          	mov    ebx,DWORD PTR [esp+0x34]
  47c50e:	84 d2                	test   dl,dl
  47c510:	88 56 0c             	mov    BYTE PTR [esi+0xc],dl
  47c513:	75 10                	jne    0x47c525
  47c515:	8b 8f 14 4b 00 00    	mov    ecx,DWORD PTR [edi+0x4b14]
  47c51b:	51                   	push   ecx
  47c51c:	8b ce                	mov    ecx,esi
  47c51e:	e8 8d 7c f8 ff       	call   0x4041b0
  47c523:	eb 24                	jmp    0x47c549
  47c525:	8b 97 18 4b 00 00    	mov    edx,DWORD PTR [edi+0x4b18]
  47c52b:	8d 8f f4 4a 00 00    	lea    ecx,[edi+0x4af4]
  47c531:	52                   	push   edx
  47c532:	e8 79 7c f8 ff       	call   0x4041b0
  47c537:	6a 05                	push   0x5
  47c539:	8b cf                	mov    ecx,edi
  47c53b:	e8 40 00 00 00       	call   0x47c580
  47c540:	6a 02                	push   0x2
  47c542:	8b cf                	mov    ecx,edi
  47c544:	e8 a7 0d 00 00       	call   0x47d2f0
  47c549:	c6 44 24 13 01       	mov    BYTE PTR [esp+0x13],0x1
  47c54e:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  47c552:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  47c556:	42                   	inc    edx
  47c557:	81 c5 44 01 00 00    	add    ebp,0x144
  47c55d:	84 c0                	test   al,al
  47c55f:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  47c563:	0f 84 46 fe ff ff    	je     0x47c3af
  47c569:	5f                   	pop    edi
  47c56a:	5e                   	pop    esi
  47c56b:	5d                   	pop    ebp
  47c56c:	5b                   	pop    ebx
  47c56d:	83 c4 20             	add    esp,0x20
  47c570:	c2 08 00             	ret    0x8
  47c573:	90                   	nop
  47c574:	90                   	nop
  47c575:	90                   	nop
  47c576:	90                   	nop
  47c577:	90                   	nop
  47c578:	90                   	nop
  47c579:	90                   	nop
  47c57a:	90                   	nop
  47c57b:	90                   	nop
  47c57c:	90                   	nop
  47c57d:	90                   	nop
  47c57e:	90                   	nop
  47c57f:	90                   	nop
  47c580:	83 ec 18             	sub    esp,0x18
  47c583:	53                   	push   ebx
  47c584:	55                   	push   ebp
  47c585:	56                   	push   esi
  47c586:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  47c58c:	85 f6                	test   esi,esi
  47c58e:	57                   	push   edi
  47c58f:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  47c593:	75 07                	jne    0x47c59c
  47c595:	e8 e6 fe 03 00       	call   0x4bc480
  47c59a:	8b f0                	mov    esi,eax
  47c59c:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  47c5a2:	3d 00 00 00 80       	cmp    eax,0x80000000
  47c5a7:	75 1e                	jne    0x47c5c7
  47c5a9:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  47c5af:	85 c0                	test   eax,eax
  47c5b1:	75 05                	jne    0x47c5b8
  47c5b3:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47c5b8:	50                   	push   eax
  47c5b9:	e8 52 e9 18 00       	call   0x60af10
  47c5be:	83 c4 04             	add    esp,0x4
  47c5c1:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  47c5c7:	85 c0                	test   eax,eax
  47c5c9:	0f 85 37 01 00 00    	jne    0x47c706
  47c5cf:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47c5d3:	33 db                	xor    ebx,ebx
  47c5d5:	85 c0                	test   eax,eax
  47c5d7:	7e 07                	jle    0x47c5e0
  47c5d9:	83 f8 32             	cmp    eax,0x32
  47c5dc:	8b e8                	mov    ebp,eax
  47c5de:	7c 05                	jl     0x47c5e5
  47c5e0:	bd 32 00 00 00       	mov    ebp,0x32
  47c5e5:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  47c5e9:	33 ff                	xor    edi,edi
  47c5eb:	8d b0 48 05 00 00    	lea    esi,[eax+0x548]
  47c5f1:	3b dd                	cmp    ebx,ebp
  47c5f3:	0f 8d 0d 01 00 00    	jge    0x47c706
  47c5f9:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  47c5fc:	84 c0                	test   al,al
  47c5fe:	0f 85 f2 00 00 00    	jne    0x47c6f6
  47c604:	e8 97 de 18 00       	call   0x60a4a0
  47c609:	99                   	cdq
  47c60a:	b9 10 27 00 00       	mov    ecx,0x2710
  47c60f:	f7 f9                	idiv   ecx
  47c611:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  47c615:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  47c619:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  47c61f:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  47c625:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  47c629:	e8 72 de 18 00       	call   0x60a4a0
  47c62e:	99                   	cdq
  47c62f:	b9 10 27 00 00       	mov    ecx,0x2710
  47c634:	f7 f9                	idiv   ecx
  47c636:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  47c63a:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  47c63e:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  47c644:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  47c648:	e8 53 de 18 00       	call   0x60a4a0
  47c64d:	99                   	cdq
  47c64e:	b9 10 27 00 00       	mov    ecx,0x2710
  47c653:	f7 f9                	idiv   ecx
  47c655:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  47c659:	8b d7                	mov    edx,edi
  47c65b:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  47c65f:	81 e2 03 00 00 80    	and    edx,0x80000003
  47c665:	d8 0d 58 a6 64 00    	fmul   DWORD PTR ds:0x64a658
  47c66b:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  47c671:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  47c675:	79 05                	jns    0x47c67c
  47c677:	4a                   	dec    edx
  47c678:	83 ca fc             	or     edx,0xfffffffc
  47c67b:	42                   	inc    edx
  47c67c:	75 11                	jne    0x47c68f
  47c67e:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  47c682:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  47c686:	50                   	push   eax
  47c687:	51                   	push   ecx
  47c688:	d9 e0                	fchs
  47c68a:	d9 1c 24             	fstp   DWORD PTR [esp]
  47c68d:	eb 0a                	jmp    0x47c699
  47c68f:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  47c693:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47c697:	52                   	push   edx
  47c698:	50                   	push   eax
  47c699:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  47c69d:	51                   	push   ecx
  47c69e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47c6a2:	e8 79 67 13 00       	call   0x5b2e20
  47c6a7:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47c6ab:	68 00 00 dc 42       	push   0x42dc0000
  47c6b0:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47c6b4:	e8 e7 68 13 00       	call   0x5b2fa0
  47c6b9:	8b ce                	mov    ecx,esi
  47c6bb:	e8 50 20 00 00       	call   0x47e710
  47c6c0:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  47c6c4:	8d 46 04             	lea    eax,[esi+0x4]
  47c6c7:	81 c2 20 4b 00 00    	add    edx,0x4b20
  47c6cd:	43                   	inc    ebx
  47c6ce:	8b 0a                	mov    ecx,DWORD PTR [edx]
  47c6d0:	89 08                	mov    DWORD PTR [eax],ecx
  47c6d2:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  47c6d5:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  47c6d8:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  47c6dc:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47c6df:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  47c6e2:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  47c6e6:	8d 46 10             	lea    eax,[esi+0x10]
  47c6e9:	89 4e 10             	mov    DWORD PTR [esi+0x10],ecx
  47c6ec:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  47c6f0:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47c6f3:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47c6f6:	47                   	inc    edi
  47c6f7:	81 c6 44 01 00 00    	add    esi,0x144
  47c6fd:	83 ff 32             	cmp    edi,0x32
  47c700:	0f 8c eb fe ff ff    	jl     0x47c5f1
  47c706:	5f                   	pop    edi
  47c707:	5e                   	pop    esi
  47c708:	5d                   	pop    ebp
  47c709:	5b                   	pop    ebx
  47c70a:	83 c4 18             	add    esp,0x18
  47c70d:	c2 04 00             	ret    0x4
  47c710:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  47c714:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  47c718:	d9 e1                	fabs
  47c71a:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  47c720:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  47c724:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  47c728:	d9 e1                	fabs
  47c72a:	d8 d1                	fcom   st(1)
  47c72c:	df e0                	fnstsw ax
  47c72e:	f6 c4 41             	test   ah,0x41
  47c731:	75 06                	jne    0x47c739
  47c733:	d8 e1                	fsub   st,st(1)
  47c735:	de f1                	fdivrp st(1),st
  47c737:	eb 08                	jmp    0x47c741
  47c739:	d9 c1                	fld    st(1)
  47c73b:	d8 e1                	fsub   st,st(1)
  47c73d:	de f2                	fdivrp st(2),st
  47c73f:	dd d8                	fstp   st(0)
  47c741:	d8 4c 24 0c          	fmul   DWORD PTR [esp+0xc]
  47c745:	d8 6c 24 0c          	fsubr  DWORD PTR [esp+0xc]
  47c749:	d9 44 24 0c          	fld    DWORD PTR [esp+0xc]
  47c74d:	d8 0d d8 d9 64 00    	fmul   DWORD PTR ds:0x64d9d8
  47c753:	de c1                	faddp  st(1),st
  47c755:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
  47c759:	c2 14 00             	ret    0x14
  47c75c:	90                   	nop
  47c75d:	90                   	nop
  47c75e:	90                   	nop
  47c75f:	90                   	nop
  47c760:	83 ec 50             	sub    esp,0x50
  47c763:	8b 81 f8 00 00 00    	mov    eax,DWORD PTR [ecx+0xf8]
  47c769:	89 4c 24 00          	mov    DWORD PTR [esp+0x0],ecx
  47c76d:	53                   	push   ebx
  47c76e:	8b c8                	mov    ecx,eax
  47c770:	8b 50 18             	mov    edx,DWORD PTR [eax+0x18]
  47c773:	55                   	push   ebp
  47c774:	56                   	push   esi
  47c775:	8b 31                	mov    esi,DWORD PTR [ecx]
  47c777:	57                   	push   edi
  47c778:	68 00 00 80 3f       	push   0x3f800000
  47c77d:	8b 79 04             	mov    edi,DWORD PTR [ecx+0x4]
  47c780:	83 ec 0c             	sub    esp,0xc
  47c783:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  47c787:	c7 44 24 40 00 00 c0 	mov    DWORD PTR [esp+0x40],0x3fc00000
  47c78e:	3f 
  47c78f:	8b 59 08             	mov    ebx,DWORD PTR [ecx+0x8]
  47c792:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
  47c796:	8b cc                	mov    ecx,esp
  47c798:	c7 44 24 44 00 00 c0 	mov    DWORD PTR [esp+0x44],0x3fc00000
  47c79f:	3f 
  47c7a0:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  47c7a7:	00 
  47c7a8:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
  47c7ac:	89 11                	mov    DWORD PTR [ecx],edx
  47c7ae:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  47c7b2:	83 ec 0c             	sub    esp,0xc
  47c7b5:	c7 44 24 58 00 00 a0 	mov    DWORD PTR [esp+0x58],0x41a00000
  47c7bc:	41 
  47c7bd:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  47c7c0:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
  47c7c4:	c7 44 24 5c 00 00 a0 	mov    DWORD PTR [esp+0x5c],0x41a00000
  47c7cb:	41 
  47c7cc:	c7 44 24 60 00 00 a0 	mov    DWORD PTR [esp+0x60],0x41a00000
  47c7d3:	41 
  47c7d4:	89 69 08             	mov    DWORD PTR [ecx+0x8],ebp
  47c7d7:	8b cc                	mov    ecx,esp
  47c7d9:	6a 02                	push   0x2
  47c7db:	68 00 00 a0 40       	push   0x40a00000
  47c7e0:	89 11                	mov    DWORD PTR [ecx],edx
  47c7e2:	8b 54 24 64          	mov    edx,DWORD PTR [esp+0x64]
  47c7e6:	68 00 00 f0 41       	push   0x41f00000
  47c7eb:	68 00 00 f0 41       	push   0x41f00000
  47c7f0:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  47c7f3:	8b 54 24 70          	mov    edx,DWORD PTR [esp+0x70]
  47c7f7:	c7 44 24 50 00 00 a0 	mov    DWORD PTR [esp+0x50],0x41a00000
  47c7fe:	41 
  47c7ff:	c7 44 24 54 00 00 a0 	mov    DWORD PTR [esp+0x54],0x41a00000
  47c806:	41 
  47c807:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  47c80a:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  47c80e:	51                   	push   ecx
  47c80f:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  47c813:	6a 00                	push   0x0
  47c815:	6a 00                	push   0x0
  47c817:	83 ec 0c             	sub    esp,0xc
  47c81a:	c7 44 24 70 00 00 a0 	mov    DWORD PTR [esp+0x70],0x41a00000
  47c821:	41 
  47c822:	8b d4                	mov    edx,esp
  47c824:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0x0
  47c82b:	00 00 00 00 
  47c82f:	6a 00                	push   0x0
  47c831:	6a 00                	push   0x0
  47c833:	89 0a                	mov    DWORD PTR [edx],ecx
  47c835:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  47c839:	6a 00                	push   0x0
  47c83b:	68 00 00 c8 42       	push   0x42c80000
  47c840:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c843:	8b 8c 24 80 00 00 00 	mov    ecx,DWORD PTR [esp+0x80]
  47c84a:	68 00 00 c8 42       	push   0x42c80000
  47c84f:	c7 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],0xbfc00000
  47c856:	00 00 c0 bf 
  47c85a:	83 ec 0c             	sub    esp,0xc
  47c85d:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  47c860:	8b 8c 24 ac 00 00 00 	mov    ecx,DWORD PTR [esp+0xac]
  47c867:	8b d4                	mov    edx,esp
  47c869:	d9 40 18             	fld    DWORD PTR [eax+0x18]
  47c86c:	89 0a                	mov    DWORD PTR [edx],ecx
  47c86e:	8b 8c 24 b0 00 00 00 	mov    ecx,DWORD PTR [esp+0xb0]
  47c875:	6a 00                	push   0x0
  47c877:	c7 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],0x0
  47c87e:	00 00 00 00 
  47c882:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c885:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  47c88c:	6a 0a                	push   0xa
  47c88e:	6a 00                	push   0x0
  47c890:	6a 00                	push   0x0
  47c892:	51                   	push   ecx
  47c893:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  47c896:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0x0
  47c89d:	00 00 00 00 
  47c8a1:	d9 1c 24             	fstp   DWORD PTR [esp]
  47c8a4:	c7 84 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],0x0
  47c8ab:	00 00 00 00 
  47c8af:	c7 84 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],0x0
  47c8b6:	00 00 00 00 
  47c8ba:	8b 8c 24 cc 00 00 00 	mov    ecx,DWORD PTR [esp+0xcc]
  47c8c1:	83 ec 0c             	sub    esp,0xc
  47c8c4:	8b d4                	mov    edx,esp
  47c8c6:	83 ec 0c             	sub    esp,0xc
  47c8c9:	89 0a                	mov    DWORD PTR [edx],ecx
  47c8cb:	8b 8c 24 e8 00 00 00 	mov    ecx,DWORD PTR [esp+0xe8]
  47c8d2:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c8d5:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  47c8dc:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  47c8df:	8b 08                	mov    ecx,DWORD PTR [eax]
  47c8e1:	8b d4                	mov    edx,esp
  47c8e3:	89 0a                	mov    DWORD PTR [edx],ecx
  47c8e5:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  47c8e8:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  47c8eb:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c8ee:	8b 8c 24 a0 00 00 00 	mov    ecx,DWORD PTR [esp+0xa0]
  47c8f5:	81 c1 8c 03 00 00    	add    ecx,0x38c
  47c8fb:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  47c8fe:	e8 5d 12 00 00       	call   0x47db60
  47c903:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47c907:	e8 c4 02 00 00       	call   0x47cbd0
  47c90c:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  47c911:	85 c0                	test   eax,eax
  47c913:	75 0b                	jne    0x47c920
  47c915:	e8 66 fb 03 00       	call   0x4bc480
  47c91a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47c91e:	eb 04                	jmp    0x47c924
  47c920:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47c924:	8b 88 e8 04 00 00    	mov    ecx,DWORD PTR [eax+0x4e8]
  47c92a:	81 f9 00 00 00 80    	cmp    ecx,0x80000000
  47c930:	75 24                	jne    0x47c956
  47c932:	8b 80 9c 04 00 00    	mov    eax,DWORD PTR [eax+0x49c]
  47c938:	85 c0                	test   eax,eax
  47c93a:	75 05                	jne    0x47c941
  47c93c:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47c941:	50                   	push   eax
  47c942:	e8 c9 e5 18 00       	call   0x60af10
  47c947:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  47c94b:	83 c4 04             	add    esp,0x4
  47c94e:	89 82 e8 04 00 00    	mov    DWORD PTR [edx+0x4e8],eax
  47c954:	eb 02                	jmp    0x47c958
  47c956:	8b c1                	mov    eax,ecx
  47c958:	85 c0                	test   eax,eax
  47c95a:	0f 85 67 02 00 00    	jne    0x47cbc7
  47c960:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47c964:	c7 44 24 1c 32 00 00 	mov    DWORD PTR [esp+0x1c],0x32
  47c96b:	00 
  47c96c:	8b 88 1c 4b 00 00    	mov    ecx,DWORD PTR [eax+0x4b1c]
  47c972:	05 48 05 00 00       	add    eax,0x548
  47c977:	8b d1                	mov    edx,ecx
  47c979:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  47c97d:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  47c981:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  47c985:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47c989:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  47c98d:	68 00 00 80 3f       	push   0x3f800000
  47c992:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  47c996:	83 ec 0c             	sub    esp,0xc
  47c999:	8b d4                	mov    edx,esp
  47c99b:	83 ec 0c             	sub    esp,0xc
  47c99e:	89 02                	mov    DWORD PTR [edx],eax
  47c9a0:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  47c9a4:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c9a7:	8b 4c 24 5c          	mov    ecx,DWORD PTR [esp+0x5c]
  47c9ab:	89 6a 08             	mov    DWORD PTR [edx+0x8],ebp
  47c9ae:	8b d4                	mov    edx,esp
  47c9b0:	6a 02                	push   0x2
  47c9b2:	68 00 00 a0 40       	push   0x40a00000
  47c9b7:	89 02                	mov    DWORD PTR [edx],eax
  47c9b9:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  47c9bd:	68 00 00 f0 41       	push   0x41f00000
  47c9c2:	68 00 00 f0 41       	push   0x41f00000
  47c9c7:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c9ca:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  47c9ce:	51                   	push   ecx
  47c9cf:	6a 01                	push   0x1
  47c9d1:	6a 01                	push   0x1
  47c9d3:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  47c9d7:	83 ec 0c             	sub    esp,0xc
  47c9da:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  47c9dd:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  47c9e1:	8b d4                	mov    edx,esp
  47c9e3:	6a 00                	push   0x0
  47c9e5:	68 00 00 80 3f       	push   0x3f800000
  47c9ea:	89 02                	mov    DWORD PTR [edx],eax
  47c9ec:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
  47c9f0:	68 00 00 40 40       	push   0x40400000
  47c9f5:	6a 00                	push   0x0
  47c9f7:	68 00 00 c8 42       	push   0x42c80000
  47c9fc:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47c9ff:	83 ec 0c             	sub    esp,0xc
  47ca02:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  47ca05:	8b 94 24 ac 00 00 00 	mov    edx,DWORD PTR [esp+0xac]
  47ca0c:	8b 84 24 b0 00 00 00 	mov    eax,DWORD PTR [esp+0xb0]
  47ca13:	8b cc                	mov    ecx,esp
  47ca15:	6a 01                	push   0x1
  47ca17:	6a 00                	push   0x0
  47ca19:	89 11                	mov    DWORD PTR [ecx],edx
  47ca1b:	8b 94 24 bc 00 00 00 	mov    edx,DWORD PTR [esp+0xbc]
  47ca22:	6a 00                	push   0x0
  47ca24:	6a 00                	push   0x0
  47ca26:	68 00 00 80 40       	push   0x40800000
  47ca2b:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  47ca2e:	83 ec 0c             	sub    esp,0xc
  47ca31:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  47ca34:	8b 8c 24 d8 00 00 00 	mov    ecx,DWORD PTR [esp+0xd8]
  47ca3b:	8b 94 24 dc 00 00 00 	mov    edx,DWORD PTR [esp+0xdc]
  47ca42:	8b c4                	mov    eax,esp
  47ca44:	83 ec 0c             	sub    esp,0xc
  47ca47:	89 08                	mov    DWORD PTR [eax],ecx
  47ca49:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  47ca50:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47ca53:	8b d4                	mov    edx,esp
  47ca55:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47ca58:	8b 8c 24 a4 00 00 00 	mov    ecx,DWORD PTR [esp+0xa4]
  47ca5f:	89 32                	mov    DWORD PTR [edx],esi
  47ca61:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
  47ca64:	89 5a 08             	mov    DWORD PTR [edx+0x8],ebx
  47ca67:	e8 f4 10 00 00       	call   0x47db60
  47ca6c:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47ca70:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  47ca74:	81 c1 44 01 00 00    	add    ecx,0x144
  47ca7a:	48                   	dec    eax
  47ca7b:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47ca7f:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  47ca83:	0f 85 00 ff ff ff    	jne    0x47c989
  47ca89:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47ca8d:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  47ca94:	00 
  47ca95:	8b 88 f8 00 00 00    	mov    ecx,DWORD PTR [eax+0xf8]
  47ca9b:	05 90 44 00 00       	add    eax,0x4490
  47caa0:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  47caa4:	8b 51 18             	mov    edx,DWORD PTR [ecx+0x18]
  47caa7:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  47caab:	db 44 24 14          	fild   DWORD PTR [esp+0x14]
  47caaf:	d8 0d 78 b8 64 00    	fmul   DWORD PTR ds:0x64b878
  47cab5:	d9 54 24 1c          	fst    DWORD PTR [esp+0x1c]
  47cab9:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  47cabd:	d9 54 24 30          	fst    DWORD PTR [esp+0x30]
  47cac1:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  47cac5:	50                   	push   eax
  47cac6:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  47caca:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  47cace:	83 ec 0c             	sub    esp,0xc
  47cad1:	8b cc                	mov    ecx,esp
  47cad3:	83 ec 0c             	sub    esp,0xc
  47cad6:	89 11                	mov    DWORD PTR [ecx],edx
  47cad8:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
  47cadc:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  47cadf:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  47cae3:	89 69 08             	mov    DWORD PTR [ecx+0x8],ebp
  47cae6:	8b cc                	mov    ecx,esp
  47cae8:	6a 02                	push   0x2
  47caea:	68 00 00 a0 40       	push   0x40a00000
  47caef:	89 11                	mov    DWORD PTR [ecx],edx
  47caf1:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
  47caf5:	68 00 00 f0 41       	push   0x41f00000
  47cafa:	68 00 00 f0 41       	push   0x41f00000
  47caff:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  47cb02:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  47cb06:	50                   	push   eax
  47cb07:	6a 01                	push   0x1
  47cb09:	6a 01                	push   0x1
  47cb0b:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  47cb0f:	83 ec 0c             	sub    esp,0xc
  47cb12:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  47cb15:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
  47cb19:	8b cc                	mov    ecx,esp
  47cb1b:	6a 00                	push   0x0
  47cb1d:	68 00 00 80 3f       	push   0x3f800000
  47cb22:	89 11                	mov    DWORD PTR [ecx],edx
  47cb24:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
  47cb28:	68 00 00 40 40       	push   0x40400000
  47cb2d:	6a 00                	push   0x0
  47cb2f:	68 00 00 c8 42       	push   0x42c80000
  47cb34:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  47cb37:	83 ec 0c             	sub    esp,0xc
  47cb3a:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  47cb3d:	8b 8c 24 ac 00 00 00 	mov    ecx,DWORD PTR [esp+0xac]
  47cb44:	8b 94 24 b0 00 00 00 	mov    edx,DWORD PTR [esp+0xb0]
  47cb4b:	8b c4                	mov    eax,esp
  47cb4d:	6a 02                	push   0x2
  47cb4f:	6a 00                	push   0x0
  47cb51:	89 08                	mov    DWORD PTR [eax],ecx
  47cb53:	8b 8c 24 bc 00 00 00 	mov    ecx,DWORD PTR [esp+0xbc]
  47cb5a:	6a 00                	push   0x0
  47cb5c:	6a 00                	push   0x0
  47cb5e:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47cb61:	8b 94 24 94 00 00 00 	mov    edx,DWORD PTR [esp+0x94]
  47cb68:	52                   	push   edx
  47cb69:	8b 94 24 d0 00 00 00 	mov    edx,DWORD PTR [esp+0xd0]
  47cb70:	83 ec 0c             	sub    esp,0xc
  47cb73:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47cb76:	8b 8c 24 d8 00 00 00 	mov    ecx,DWORD PTR [esp+0xd8]
  47cb7d:	8b c4                	mov    eax,esp
  47cb7f:	83 ec 0c             	sub    esp,0xc
  47cb82:	89 08                	mov    DWORD PTR [eax],ecx
  47cb84:	8b 8c 24 ec 00 00 00 	mov    ecx,DWORD PTR [esp+0xec]
  47cb8b:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47cb8e:	8b d4                	mov    edx,esp
  47cb90:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47cb93:	8b 8c 24 a0 00 00 00 	mov    ecx,DWORD PTR [esp+0xa0]
  47cb9a:	89 32                	mov    DWORD PTR [edx],esi
  47cb9c:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
  47cb9f:	89 5a 08             	mov    DWORD PTR [edx+0x8],ebx
  47cba2:	e8 b9 0f 00 00       	call   0x47db60
  47cba7:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47cbab:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  47cbaf:	40                   	inc    eax
  47cbb0:	81 c2 44 01 00 00    	add    edx,0x144
  47cbb6:	83 f8 05             	cmp    eax,0x5
  47cbb9:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47cbbd:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  47cbc1:	0f 8c e4 fe ff ff    	jl     0x47caab
  47cbc7:	5f                   	pop    edi
  47cbc8:	5e                   	pop    esi
  47cbc9:	5d                   	pop    ebp
  47cbca:	5b                   	pop    ebx
  47cbcb:	83 c4 50             	add    esp,0x50
  47cbce:	c3                   	ret
  47cbcf:	90                   	nop
  47cbd0:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cbd6:	33 c0                	xor    eax,eax
  47cbd8:	56                   	push   esi
  47cbd9:	8b 52 24             	mov    edx,DWORD PTR [edx+0x24]
  47cbdc:	85 d2                	test   edx,edx
  47cbde:	74 1f                	je     0x47cbff
  47cbe0:	8b 32                	mov    esi,DWORD PTR [edx]
  47cbe2:	8d 81 d0 04 00 00    	lea    eax,[ecx+0x4d0]
  47cbe8:	89 b1 d0 04 00 00    	mov    DWORD PTR [ecx+0x4d0],esi
  47cbee:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  47cbf1:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
  47cbf4:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cbf7:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  47cbfa:	b8 01 00 00 00       	mov    eax,0x1
  47cbff:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cc05:	57                   	push   edi
  47cc06:	8b 52 28             	mov    edx,DWORD PTR [edx+0x28]
  47cc09:	85 d2                	test   edx,edx
  47cc0b:	74 1b                	je     0x47cc28
  47cc0d:	8b 3a                	mov    edi,DWORD PTR [edx]
  47cc0f:	8d 34 40             	lea    esi,[eax+eax*2]
  47cc12:	40                   	inc    eax
  47cc13:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cc1a:	89 3e                	mov    DWORD PTR [esi],edi
  47cc1c:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cc1f:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47cc22:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cc25:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47cc28:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cc2e:	8b 52 2c             	mov    edx,DWORD PTR [edx+0x2c]
  47cc31:	85 d2                	test   edx,edx
  47cc33:	74 1b                	je     0x47cc50
  47cc35:	8b 3a                	mov    edi,DWORD PTR [edx]
  47cc37:	8d 34 40             	lea    esi,[eax+eax*2]
  47cc3a:	40                   	inc    eax
  47cc3b:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cc42:	89 3e                	mov    DWORD PTR [esi],edi
  47cc44:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cc47:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47cc4a:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cc4d:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47cc50:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cc56:	8b 52 30             	mov    edx,DWORD PTR [edx+0x30]
  47cc59:	85 d2                	test   edx,edx
  47cc5b:	74 1b                	je     0x47cc78
  47cc5d:	8b 3a                	mov    edi,DWORD PTR [edx]
  47cc5f:	8d 34 40             	lea    esi,[eax+eax*2]
  47cc62:	40                   	inc    eax
  47cc63:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cc6a:	89 3e                	mov    DWORD PTR [esi],edi
  47cc6c:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cc6f:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47cc72:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cc75:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47cc78:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cc7e:	8b 52 34             	mov    edx,DWORD PTR [edx+0x34]
  47cc81:	85 d2                	test   edx,edx
  47cc83:	74 1b                	je     0x47cca0
  47cc85:	8b 3a                	mov    edi,DWORD PTR [edx]
  47cc87:	8d 34 40             	lea    esi,[eax+eax*2]
  47cc8a:	40                   	inc    eax
  47cc8b:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cc92:	89 3e                	mov    DWORD PTR [esi],edi
  47cc94:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cc97:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47cc9a:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cc9d:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47cca0:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cca6:	8b 52 38             	mov    edx,DWORD PTR [edx+0x38]
  47cca9:	85 d2                	test   edx,edx
  47ccab:	74 1b                	je     0x47ccc8
  47ccad:	8b 3a                	mov    edi,DWORD PTR [edx]
  47ccaf:	8d 34 40             	lea    esi,[eax+eax*2]
  47ccb2:	40                   	inc    eax
  47ccb3:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47ccba:	89 3e                	mov    DWORD PTR [esi],edi
  47ccbc:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47ccbf:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47ccc2:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47ccc5:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47ccc8:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47ccce:	8b 52 3c             	mov    edx,DWORD PTR [edx+0x3c]
  47ccd1:	85 d2                	test   edx,edx
  47ccd3:	74 1b                	je     0x47ccf0
  47ccd5:	8b 3a                	mov    edi,DWORD PTR [edx]
  47ccd7:	8d 34 40             	lea    esi,[eax+eax*2]
  47ccda:	40                   	inc    eax
  47ccdb:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cce2:	89 3e                	mov    DWORD PTR [esi],edi
  47cce4:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cce7:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47ccea:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cced:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47ccf0:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47ccf6:	8b 52 40             	mov    edx,DWORD PTR [edx+0x40]
  47ccf9:	85 d2                	test   edx,edx
  47ccfb:	74 1b                	je     0x47cd18
  47ccfd:	8b 3a                	mov    edi,DWORD PTR [edx]
  47ccff:	8d 34 40             	lea    esi,[eax+eax*2]
  47cd02:	40                   	inc    eax
  47cd03:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cd0a:	89 3e                	mov    DWORD PTR [esi],edi
  47cd0c:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cd0f:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47cd12:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cd15:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47cd18:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cd1e:	8b 52 44             	mov    edx,DWORD PTR [edx+0x44]
  47cd21:	85 d2                	test   edx,edx
  47cd23:	74 1b                	je     0x47cd40
  47cd25:	8b 3a                	mov    edi,DWORD PTR [edx]
  47cd27:	8d 34 40             	lea    esi,[eax+eax*2]
  47cd2a:	40                   	inc    eax
  47cd2b:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cd32:	89 3e                	mov    DWORD PTR [esi],edi
  47cd34:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cd37:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47cd3a:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cd3d:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47cd40:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cd46:	8b 52 48             	mov    edx,DWORD PTR [edx+0x48]
  47cd49:	85 d2                	test   edx,edx
  47cd4b:	74 1b                	je     0x47cd68
  47cd4d:	8b 3a                	mov    edi,DWORD PTR [edx]
  47cd4f:	8d 34 40             	lea    esi,[eax+eax*2]
  47cd52:	40                   	inc    eax
  47cd53:	8d b4 b1 d0 04 00 00 	lea    esi,[ecx+esi*4+0x4d0]
  47cd5a:	89 3e                	mov    DWORD PTR [esi],edi
  47cd5c:	8b 7a 04             	mov    edi,DWORD PTR [edx+0x4]
  47cd5f:	89 7e 04             	mov    DWORD PTR [esi+0x4],edi
  47cd62:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  47cd65:	89 56 08             	mov    DWORD PTR [esi+0x8],edx
  47cd68:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cd6e:	be 0a 00 00 00       	mov    esi,0xa
  47cd73:	8b 7a 20             	mov    edi,DWORD PTR [edx+0x20]
  47cd76:	3b fe                	cmp    edi,esi
  47cd78:	5f                   	pop    edi
  47cd79:	7e 03                	jle    0x47cd7e
  47cd7b:	89 72 20             	mov    DWORD PTR [edx+0x20],esi
  47cd7e:	8b 91 f8 00 00 00    	mov    edx,DWORD PTR [ecx+0xf8]
  47cd84:	5e                   	pop    esi
  47cd85:	8b 52 20             	mov    edx,DWORD PTR [edx+0x20]
  47cd88:	3b d0                	cmp    edx,eax
  47cd8a:	7d 02                	jge    0x47cd8e
  47cd8c:	8b c2                	mov    eax,edx
  47cd8e:	50                   	push   eax
  47cd8f:	8d 81 d0 04 00 00    	lea    eax,[ecx+0x4d0]
  47cd95:	50                   	push   eax
  47cd96:	81 c1 8c 03 00 00    	add    ecx,0x38c
  47cd9c:	e8 cf 1c 00 00       	call   0x47ea70
  47cda1:	c3                   	ret
  47cda2:	90                   	nop
  47cda3:	90                   	nop
  47cda4:	90                   	nop
  47cda5:	90                   	nop
  47cda6:	90                   	nop
  47cda7:	90                   	nop
  47cda8:	90                   	nop
  47cda9:	90                   	nop
  47cdaa:	90                   	nop
  47cdab:	90                   	nop
  47cdac:	90                   	nop
  47cdad:	90                   	nop
  47cdae:	90                   	nop
  47cdaf:	90                   	nop
  47cdb0:	56                   	push   esi
  47cdb1:	8b f1                	mov    esi,ecx
  47cdb3:	8a 86 e8 4b 00 00    	mov    al,BYTE PTR [esi+0x4be8]
  47cdb9:	84 c0                	test   al,al
  47cdbb:	0f 85 5d 01 00 00    	jne    0x47cf1e
  47cdc1:	57                   	push   edi
  47cdc2:	8d 8e 8c 03 00 00    	lea    ecx,[esi+0x38c]
  47cdc8:	c6 86 e8 4b 00 00 01 	mov    BYTE PTR [esi+0x4be8],0x1
  47cdcf:	e8 3c 19 00 00       	call   0x47e710
  47cdd4:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  47cdda:	8d 86 90 03 00 00    	lea    eax,[esi+0x390]
  47cde0:	8b 11                	mov    edx,DWORD PTR [ecx]
  47cde2:	89 10                	mov    DWORD PTR [eax],edx
  47cde4:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  47cde7:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  47cdea:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  47cded:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  47cdf0:	8b 96 14 4b 00 00    	mov    edx,DWORD PTR [esi+0x4b14]
  47cdf6:	52                   	push   edx
  47cdf7:	8d 8e e4 4a 00 00    	lea    ecx,[esi+0x4ae4]
  47cdfd:	e8 ae 73 f8 ff       	call   0x4041b0
  47ce02:	8b 86 18 4b 00 00    	mov    eax,DWORD PTR [esi+0x4b18]
  47ce08:	8d 8e f4 4a 00 00    	lea    ecx,[esi+0x4af4]
  47ce0e:	50                   	push   eax
  47ce0f:	e8 9c 73 f8 ff       	call   0x4041b0
  47ce14:	d9 86 3c 4b 00 00    	fld    DWORD PTR [esi+0x4b3c]
  47ce1a:	e8 01 dd 18 00       	call   0x60ab20
  47ce1f:	50                   	push   eax
  47ce20:	8d 8e 04 4b 00 00    	lea    ecx,[esi+0x4b04]
  47ce26:	e8 85 73 f8 ff       	call   0x4041b0
  47ce2b:	c7 86 40 4b 00 00 00 	mov    DWORD PTR [esi+0x4b40],0x0
  47ce32:	00 00 00 
  47ce35:	8b 0d 68 e2 64 00    	mov    ecx,DWORD PTR ds:0x64e268
  47ce3b:	89 8e 48 4b 00 00    	mov    DWORD PTR [esi+0x4b48],ecx
  47ce41:	8b 3d 5c 91 6b 00    	mov    edi,DWORD PTR ds:0x6b915c
  47ce47:	85 ff                	test   edi,edi
  47ce49:	75 07                	jne    0x47ce52
  47ce4b:	e8 30 f6 03 00       	call   0x4bc480
  47ce50:	8b f8                	mov    edi,eax
  47ce52:	8b 87 e8 04 00 00    	mov    eax,DWORD PTR [edi+0x4e8]
  47ce58:	3d 00 00 00 80       	cmp    eax,0x80000000
  47ce5d:	75 1e                	jne    0x47ce7d
  47ce5f:	8b 87 9c 04 00 00    	mov    eax,DWORD PTR [edi+0x49c]
  47ce65:	85 c0                	test   eax,eax
  47ce67:	75 05                	jne    0x47ce6e
  47ce69:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  47ce6e:	50                   	push   eax
  47ce6f:	e8 9c e0 18 00       	call   0x60af10
  47ce74:	83 c4 04             	add    esp,0x4
  47ce77:	89 87 e8 04 00 00    	mov    DWORD PTR [edi+0x4e8],eax
  47ce7d:	85 c0                	test   eax,eax
  47ce7f:	0f 85 86 00 00 00    	jne    0x47cf0b
  47ce85:	53                   	push   ebx
  47ce86:	55                   	push   ebp
  47ce87:	8d 9e 20 4b 00 00    	lea    ebx,[esi+0x4b20]
  47ce8d:	8d be 90 44 00 00    	lea    edi,[esi+0x4490]
  47ce93:	bd 05 00 00 00       	mov    ebp,0x5
  47ce98:	6a 01                	push   0x1
  47ce9a:	53                   	push   ebx
  47ce9b:	8b cf                	mov    ecx,edi
  47ce9d:	e8 ce 1b 00 00       	call   0x47ea70
  47cea2:	8b cf                	mov    ecx,edi
  47cea4:	e8 67 18 00 00       	call   0x47e710
  47cea9:	81 c7 44 01 00 00    	add    edi,0x144
  47ceaf:	4d                   	dec    ebp
  47ceb0:	75 e6                	jne    0x47ce98
  47ceb2:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47ceb8:	5d                   	pop    ebp
  47ceb9:	85 c9                	test   ecx,ecx
  47cebb:	5b                   	pop    ebx
  47cebc:	74 46                	je     0x47cf04
  47cebe:	6a 01                	push   0x1
  47cec0:	e8 8b 54 08 00       	call   0x502350
  47cec5:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47cecb:	6a 00                	push   0x0
  47cecd:	e8 8e 5e 06 00       	call   0x4e2d60
  47ced2:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
  47ced8:	d9 42 18             	fld    DWORD PTR [edx+0x18]
  47cedb:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  47cee1:	e8 3a dc 18 00       	call   0x60ab20
  47cee6:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47ceec:	50                   	push   eax
  47ceed:	e8 6e 62 06 00       	call   0x4e3160
  47cef2:	8b 8e 74 03 00 00    	mov    ecx,DWORD PTR [esi+0x374]
  47cef8:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
  47cefe:	52                   	push   edx
  47ceff:	8b 01                	mov    eax,DWORD PTR [ecx]
  47cf01:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  47cf04:	c6 86 54 4b 00 00 01 	mov    BYTE PTR [esi+0x4b54],0x1
  47cf0b:	6a 00                	push   0x0
  47cf0d:	8b ce                	mov    ecx,esi
  47cf0f:	e8 dc 03 00 00       	call   0x47d2f0
  47cf14:	6a 02                	push   0x2
  47cf16:	8b ce                	mov    ecx,esi
  47cf18:	e8 53 06 00 00       	call   0x47d570
  47cf1d:	5f                   	pop    edi
  47cf1e:	5e                   	pop    esi
  47cf1f:	c3                   	ret
  47cf20:	6a ff                	push   0xffffffff
  47cf22:	68 18 8e 62 00       	push   0x628e18
  47cf27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47cf2d:	50                   	push   eax
  47cf2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47cf35:	83 ec 34             	sub    esp,0x34
  47cf38:	53                   	push   ebx
  47cf39:	55                   	push   ebp
  47cf3a:	8b 6c 24 4c          	mov    ebp,DWORD PTR [esp+0x4c]
  47cf3e:	56                   	push   esi
  47cf3f:	57                   	push   edi
  47cf40:	55                   	push   ebp
  47cf41:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  47cf45:	e8 a6 02 00 00       	call   0x47d1f0
  47cf4a:	e8 f1 66 0d 00       	call   0x553640
  47cf4f:	84 c0                	test   al,al
  47cf51:	0f 84 5d 02 00 00    	je     0x47d1b4
  47cf57:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47cf5c:	85 c0                	test   eax,eax
  47cf5e:	75 0e                	jne    0x47cf6e
  47cf60:	e8 1b e3 0d 00       	call   0x55b280
  47cf65:	8b f0                	mov    esi,eax
  47cf67:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47cf6c:	eb 02                	jmp    0x47cf70
  47cf6e:	8b f0                	mov    esi,eax
  47cf70:	8b 8e fc 00 00 00    	mov    ecx,DWORD PTR [esi+0xfc]
  47cf76:	85 c9                	test   ecx,ecx
  47cf78:	75 6f                	jne    0x47cfe9
  47cf7a:	8a 44 24 54          	mov    al,BYTE PTR [esp+0x54]
  47cf7e:	6a 00                	push   0x0
  47cf80:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47cf84:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  47cf88:	e8 13 71 f8 ff       	call   0x4040a0
  47cf8d:	83 cb ff             	or     ebx,0xffffffff
  47cf90:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47cf95:	8b cb                	mov    ecx,ebx
  47cf97:	33 c0                	xor    eax,eax
  47cf99:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47cf9b:	f7 d1                	not    ecx
  47cf9d:	49                   	dec    ecx
  47cf9e:	51                   	push   ecx
  47cf9f:	68 70 3f 6b 00       	push   0x6b3f70
  47cfa4:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47cfa8:	e8 43 71 f8 ff       	call   0x4040f0
  47cfad:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47cfb1:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  47cfb8:	00 
  47cfb9:	51                   	push   ecx
  47cfba:	68 8f 01 00 00       	push   0x18f
  47cfbf:	68 58 eb 68 00       	push   0x68eb58
  47cfc4:	68 ec f8 68 00       	push   0x68f8ec
  47cfc9:	e8 22 38 12 00       	call   0x5a07f0
  47cfce:	ff d0                	call   eax
  47cfd0:	83 c4 10             	add    esp,0x10
  47cfd3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47cfd7:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  47cfdb:	6a 01                	push   0x1
  47cfdd:	e8 be 70 f8 ff       	call   0x4040a0
  47cfe2:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47cfe7:	eb 03                	jmp    0x47cfec
  47cfe9:	83 cb ff             	or     ebx,0xffffffff
  47cfec:	8b b6 fc 00 00 00    	mov    esi,DWORD PTR [esi+0xfc]
  47cff2:	8a 8e 8c 00 00 00    	mov    cl,BYTE PTR [esi+0x8c]
  47cff8:	84 c9                	test   cl,cl
  47cffa:	0f 84 b4 01 00 00    	je     0x47d1b4
  47d000:	85 c0                	test   eax,eax
  47d002:	75 05                	jne    0x47d009
  47d004:	e8 77 e2 0d 00       	call   0x55b280
  47d009:	8b f0                	mov    esi,eax
  47d00b:	8b 86 fc 00 00 00    	mov    eax,DWORD PTR [esi+0xfc]
  47d011:	85 c0                	test   eax,eax
  47d013:	75 65                	jne    0x47d07a
  47d015:	8a 54 24 54          	mov    dl,BYTE PTR [esp+0x54]
  47d019:	6a 00                	push   0x0
  47d01b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47d01f:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  47d023:	e8 78 70 f8 ff       	call   0x4040a0
  47d028:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d02d:	8b cb                	mov    ecx,ebx
  47d02f:	33 c0                	xor    eax,eax
  47d031:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d033:	f7 d1                	not    ecx
  47d035:	49                   	dec    ecx
  47d036:	51                   	push   ecx
  47d037:	68 70 3f 6b 00       	push   0x6b3f70
  47d03c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47d040:	e8 ab 70 f8 ff       	call   0x4040f0
  47d045:	8d 44 24 14          	lea    eax,[esp+0x14]
  47d049:	c7 44 24 4c 01 00 00 	mov    DWORD PTR [esp+0x4c],0x1
  47d050:	00 
  47d051:	50                   	push   eax
  47d052:	68 8f 01 00 00       	push   0x18f
  47d057:	68 58 eb 68 00       	push   0x68eb58
  47d05c:	68 ec f8 68 00       	push   0x68f8ec
  47d061:	e8 8a 37 12 00       	call   0x5a07f0
  47d066:	ff d0                	call   eax
  47d068:	83 c4 10             	add    esp,0x10
  47d06b:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  47d06f:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  47d073:	6a 01                	push   0x1
  47d075:	e8 26 70 f8 ff       	call   0x4040a0
  47d07a:	8b b6 fc 00 00 00    	mov    esi,DWORD PTR [esi+0xfc]
  47d080:	8a 86 8c 00 00 00    	mov    al,BYTE PTR [esi+0x8c]
  47d086:	84 c0                	test   al,al
  47d088:	75 65                	jne    0x47d0ef
  47d08a:	8a 4c 24 54          	mov    cl,BYTE PTR [esp+0x54]
  47d08e:	6a 00                	push   0x0
  47d090:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  47d094:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47d098:	e8 03 70 f8 ff       	call   0x4040a0
  47d09d:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d0a2:	8b cb                	mov    ecx,ebx
  47d0a4:	33 c0                	xor    eax,eax
  47d0a6:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d0a8:	f7 d1                	not    ecx
  47d0aa:	49                   	dec    ecx
  47d0ab:	51                   	push   ecx
  47d0ac:	68 70 3f 6b 00       	push   0x6b3f70
  47d0b1:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47d0b5:	e8 36 70 f8 ff       	call   0x4040f0
  47d0ba:	8d 54 24 24          	lea    edx,[esp+0x24]
  47d0be:	c7 44 24 4c 02 00 00 	mov    DWORD PTR [esp+0x4c],0x2
  47d0c5:	00 
  47d0c6:	52                   	push   edx
  47d0c7:	68 4b 01 00 00       	push   0x14b
  47d0cc:	68 dc 2c 69 00       	push   0x692cdc
  47d0d1:	68 b0 1b 69 00       	push   0x691bb0
  47d0d6:	e8 15 37 12 00       	call   0x5a07f0
  47d0db:	ff d0                	call   eax
  47d0dd:	83 c4 10             	add    esp,0x10
  47d0e0:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47d0e4:	89 5c 24 4c          	mov    DWORD PTR [esp+0x4c],ebx
  47d0e8:	6a 01                	push   0x1
  47d0ea:	e8 b1 6f f8 ff       	call   0x4040a0
  47d0ef:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47d0f3:	8d 84 6d 6c 09 00 00 	lea    eax,[ebp+ebp*2+0x96c]
  47d0fa:	8d 54 24 54          	lea    edx,[esp+0x54]
  47d0fe:	8d 1c c1             	lea    ebx,[ecx+eax*8]
  47d101:	8d 4e 14             	lea    ecx,[esi+0x14]
  47d104:	53                   	push   ebx
  47d105:	52                   	push   edx
  47d106:	e8 d5 43 0d 00       	call   0x5514e0
  47d10b:	8b f8                	mov    edi,eax
  47d10d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  47d111:	8d 44 6d 00          	lea    eax,[ebp+ebp*2+0x0]
  47d115:	c7 44 24 4c 03 00 00 	mov    DWORD PTR [esp+0x4c],0x3
  47d11c:	00 
  47d11d:	8d b4 c1 58 4b 00 00 	lea    esi,[ecx+eax*8+0x4b58]
  47d124:	8b 07                	mov    eax,DWORD PTR [edi]
  47d126:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47d128:	3b c8                	cmp    ecx,eax
  47d12a:	74 1f                	je     0x47d14b
  47d12c:	85 c9                	test   ecx,ecx
  47d12e:	74 10                	je     0x47d140
  47d130:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d133:	48                   	dec    eax
  47d134:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d137:	75 07                	jne    0x47d140
  47d139:	6a 00                	push   0x0
  47d13b:	e8 80 ee 12 00       	call   0x5abfc0
  47d140:	8b 17                	mov    edx,DWORD PTR [edi]
  47d142:	8b ce                	mov    ecx,esi
  47d144:	89 16                	mov    DWORD PTR [esi],edx
  47d146:	e8 65 73 10 00       	call   0x5844b0
  47d14b:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  47d14f:	c7 44 24 4c ff ff ff 	mov    DWORD PTR [esp+0x4c],0xffffffff
  47d156:	ff 
  47d157:	85 c9                	test   ecx,ecx
  47d159:	74 05                	je     0x47d160
  47d15b:	e8 70 c7 f8 ff       	call   0x4098d0
  47d160:	83 3e 00             	cmp    DWORD PTR [esi],0x0
  47d163:	75 5c                	jne    0x47d1c1
  47d165:	8b 5b 04             	mov    ebx,DWORD PTR [ebx+0x4]
  47d168:	85 db                	test   ebx,ebx
  47d16a:	75 05                	jne    0x47d171
  47d16c:	bb b4 a3 64 00       	mov    ebx,0x64a3b4
  47d171:	53                   	push   ebx
  47d172:	8d 44 24 38          	lea    eax,[esp+0x38]
  47d176:	68 a8 2c 69 00       	push   0x692ca8
  47d17b:	50                   	push   eax
  47d17c:	e8 0f 12 13 00       	call   0x5ae390
  47d181:	50                   	push   eax
  47d182:	c7 44 24 5c 04 00 00 	mov    DWORD PTR [esp+0x5c],0x4
  47d189:	00 
  47d18a:	e8 71 2d 13 00       	call   0x5aff00
  47d18f:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  47d193:	83 c4 10             	add    esp,0x10
  47d196:	85 c9                	test   ecx,ecx
  47d198:	74 27                	je     0x47d1c1
  47d19a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  47d19d:	49                   	dec    ecx
  47d19e:	84 c0                	test   al,al
  47d1a0:	74 0a                	je     0x47d1ac
  47d1a2:	3c ff                	cmp    al,0xff
  47d1a4:	74 06                	je     0x47d1ac
  47d1a6:	fe c8                	dec    al
  47d1a8:	88 01                	mov    BYTE PTR [ecx],al
  47d1aa:	eb 15                	jmp    0x47d1c1
  47d1ac:	51                   	push   ecx
  47d1ad:	e8 3e 14 18 00       	call   0x5fe5f0
  47d1b2:	eb 0a                	jmp    0x47d1be
  47d1b4:	68 8c 2c 69 00       	push   0x692c8c
  47d1b9:	e8 72 2c 13 00       	call   0x5afe30
  47d1be:	83 c4 04             	add    esp,0x4
  47d1c1:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  47d1c5:	8d 4c 6d 00          	lea    ecx,[ebp+ebp*2+0x0]
  47d1c9:	33 c0                	xor    eax,eax
  47d1cb:	5f                   	pop    edi
  47d1cc:	8b b4 ca 58 4b 00 00 	mov    esi,DWORD PTR [edx+ecx*8+0x4b58]
  47d1d3:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  47d1d7:	85 f6                	test   esi,esi
  47d1d9:	5e                   	pop    esi
  47d1da:	5d                   	pop    ebp
  47d1db:	0f 95 c0             	setne  al
  47d1de:	5b                   	pop    ebx
  47d1df:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47d1e6:	83 c4 40             	add    esp,0x40
  47d1e9:	c2 04 00             	ret    0x4
  47d1ec:	90                   	nop
  47d1ed:	90                   	nop
  47d1ee:	90                   	nop
  47d1ef:	90                   	nop
  47d1f0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47d1f6:	6a ff                	push   0xffffffff
  47d1f8:	68 40 8e 62 00       	push   0x628e40
  47d1fd:	50                   	push   eax
  47d1fe:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47d202:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47d209:	83 ec 10             	sub    esp,0x10
  47d20c:	8d 04 40             	lea    eax,[eax+eax*2]
  47d20f:	56                   	push   esi
  47d210:	8b 94 c1 5c 4b 00 00 	mov    edx,DWORD PTR [ecx+eax*8+0x4b5c]
  47d217:	8d b4 c1 5c 4b 00 00 	lea    esi,[ecx+eax*8+0x4b5c]
  47d21e:	85 d2                	test   edx,edx
  47d220:	0f 95 c0             	setne  al
  47d223:	84 c0                	test   al,al
  47d225:	0f 84 a5 00 00 00    	je     0x47d2d0
  47d22b:	8b c2                	mov    eax,edx
  47d22d:	85 c0                	test   eax,eax
  47d22f:	75 6c                	jne    0x47d29d
  47d231:	8a 4c 24 24          	mov    cl,BYTE PTR [esp+0x24]
  47d235:	57                   	push   edi
  47d236:	88 4c 24 08          	mov    BYTE PTR [esp+0x8],cl
  47d23a:	6a 00                	push   0x0
  47d23c:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  47d240:	e8 5b 6e f8 ff       	call   0x4040a0
  47d245:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d24a:	83 c9 ff             	or     ecx,0xffffffff
  47d24d:	33 c0                	xor    eax,eax
  47d24f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d251:	f7 d1                	not    ecx
  47d253:	49                   	dec    ecx
  47d254:	51                   	push   ecx
  47d255:	68 70 3f 6b 00       	push   0x6b3f70
  47d25a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  47d25e:	e8 8d 6e f8 ff       	call   0x4040f0
  47d263:	8d 54 24 08          	lea    edx,[esp+0x8]
  47d267:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
  47d26e:	00 
  47d26f:	52                   	push   edx
  47d270:	68 b6 00 00 00       	push   0xb6
  47d275:	68 38 d6 68 00       	push   0x68d638
  47d27a:	68 2c d6 68 00       	push   0x68d62c
  47d27f:	e8 6c 35 12 00       	call   0x5a07f0
  47d284:	ff d0                	call   eax
  47d286:	83 c4 10             	add    esp,0x10
  47d289:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  47d28d:	c7 44 24 20 ff ff ff 	mov    DWORD PTR [esp+0x20],0xffffffff
  47d294:	ff 
  47d295:	6a 01                	push   0x1
  47d297:	e8 04 6e f8 ff       	call   0x4040a0
  47d29c:	5f                   	pop    edi
  47d29d:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47d29f:	e8 8c 5e 0d 00       	call   0x553130
  47d2a4:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
  47d2ab:	00 
  47d2ac:	8b 0e                	mov    ecx,DWORD PTR [esi]
  47d2ae:	c7 44 24 1c 01 00 00 	mov    DWORD PTR [esp+0x1c],0x1
  47d2b5:	00 
  47d2b6:	85 c9                	test   ecx,ecx
  47d2b8:	74 16                	je     0x47d2d0
  47d2ba:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d2bd:	48                   	dec    eax
  47d2be:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d2c1:	75 07                	jne    0x47d2ca
  47d2c3:	6a 00                	push   0x0
  47d2c5:	e8 f6 ec 12 00       	call   0x5abfc0
  47d2ca:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
  47d2d0:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  47d2d4:	5e                   	pop    esi
  47d2d5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47d2dc:	83 c4 1c             	add    esp,0x1c
  47d2df:	c2 04 00             	ret    0x4
  47d2e2:	90                   	nop
  47d2e3:	90                   	nop
  47d2e4:	90                   	nop
  47d2e5:	90                   	nop
  47d2e6:	90                   	nop
  47d2e7:	90                   	nop
  47d2e8:	90                   	nop
  47d2e9:	90                   	nop
  47d2ea:	90                   	nop
  47d2eb:	90                   	nop
  47d2ec:	90                   	nop
  47d2ed:	90                   	nop
  47d2ee:	90                   	nop
  47d2ef:	90                   	nop
  47d2f0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47d2f6:	6a ff                	push   0xffffffff
  47d2f8:	68 70 8e 62 00       	push   0x628e70
  47d2fd:	50                   	push   eax
  47d2fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47d305:	83 ec 28             	sub    esp,0x28
  47d308:	53                   	push   ebx
  47d309:	55                   	push   ebp
  47d30a:	56                   	push   esi
  47d30b:	8b 74 24 44          	mov    esi,DWORD PTR [esp+0x44]
  47d30f:	8b d9                	mov    ebx,ecx
  47d311:	57                   	push   edi
  47d312:	8d 04 76             	lea    eax,[esi+esi*2]
  47d315:	8b 94 c3 5c 4b 00 00 	mov    edx,DWORD PTR [ebx+eax*8+0x4b5c]
  47d31c:	8d ac c3 5c 4b 00 00 	lea    ebp,[ebx+eax*8+0x4b5c]
  47d323:	85 d2                	test   edx,edx
  47d325:	0f 94 c0             	sete   al
  47d328:	84 c0                	test   al,al
  47d32a:	0f 84 13 01 00 00    	je     0x47d443
  47d330:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47d335:	85 c0                	test   eax,eax
  47d337:	75 05                	jne    0x47d33e
  47d339:	e8 42 df 0d 00       	call   0x55b280
  47d33e:	8b c8                	mov    ecx,eax
  47d340:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  47d344:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
  47d34a:	85 c0                	test   eax,eax
  47d34c:	75 6a                	jne    0x47d3b8
  47d34e:	8a 54 24 48          	mov    dl,BYTE PTR [esp+0x48]
  47d352:	6a 00                	push   0x0
  47d354:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47d358:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  47d35c:	e8 3f 6d f8 ff       	call   0x4040a0
  47d361:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d366:	83 c9 ff             	or     ecx,0xffffffff
  47d369:	33 c0                	xor    eax,eax
  47d36b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d36d:	f7 d1                	not    ecx
  47d36f:	49                   	dec    ecx
  47d370:	51                   	push   ecx
  47d371:	68 70 3f 6b 00       	push   0x6b3f70
  47d376:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47d37a:	e8 71 6d f8 ff       	call   0x4040f0
  47d37f:	8d 44 24 18          	lea    eax,[esp+0x18]
  47d383:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  47d38a:	00 
  47d38b:	50                   	push   eax
  47d38c:	68 8f 01 00 00       	push   0x18f
  47d391:	68 58 eb 68 00       	push   0x68eb58
  47d396:	68 ec f8 68 00       	push   0x68f8ec
  47d39b:	e8 50 34 12 00       	call   0x5a07f0
  47d3a0:	ff d0                	call   eax
  47d3a2:	83 c4 10             	add    esp,0x10
  47d3a5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47d3a9:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d3b0:	ff 
  47d3b1:	6a 01                	push   0x1
  47d3b3:	e8 e8 6c f8 ff       	call   0x4040a0
  47d3b8:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  47d3bc:	8d 94 76 6c 09 00 00 	lea    edx,[esi+esi*2+0x96c]
  47d3c3:	6a 00                	push   0x0
  47d3c5:	6a 00                	push   0x0
  47d3c7:	8b 89 fc 00 00 00    	mov    ecx,DWORD PTR [ecx+0xfc]
  47d3cd:	68 00 00 80 3f       	push   0x3f800000
  47d3d2:	8d 04 d3             	lea    eax,[ebx+edx*8]
  47d3d5:	6a 00                	push   0x0
  47d3d7:	8d 54 24 20          	lea    edx,[esp+0x20]
  47d3db:	50                   	push   eax
  47d3dc:	52                   	push   edx
  47d3dd:	e8 9e 19 0d 00       	call   0x54ed80
  47d3e2:	8b f0                	mov    esi,eax
  47d3e4:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  47d3e7:	8b 06                	mov    eax,DWORD PTR [esi]
  47d3e9:	3b c8                	cmp    ecx,eax
  47d3eb:	c7 44 24 40 01 00 00 	mov    DWORD PTR [esp+0x40],0x1
  47d3f2:	00 
  47d3f3:	74 20                	je     0x47d415
  47d3f5:	85 c9                	test   ecx,ecx
  47d3f7:	74 10                	je     0x47d409
  47d3f9:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d3fc:	48                   	dec    eax
  47d3fd:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d400:	75 07                	jne    0x47d409
  47d402:	6a 00                	push   0x0
  47d404:	e8 b7 eb 12 00       	call   0x5abfc0
  47d409:	8b 36                	mov    esi,DWORD PTR [esi]
  47d40b:	85 f6                	test   esi,esi
  47d40d:	89 75 00             	mov    DWORD PTR [ebp+0x0],esi
  47d410:	74 03                	je     0x47d415
  47d412:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  47d415:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47d419:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d420:	ff 
  47d421:	85 c0                	test   eax,eax
  47d423:	0f 84 2d 01 00 00    	je     0x47d556
  47d429:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47d42c:	8b c8                	mov    ecx,eax
  47d42e:	83 c0 14             	add    eax,0x14
  47d431:	4e                   	dec    esi
  47d432:	8b d6                	mov    edx,esi
  47d434:	85 d2                	test   edx,edx
  47d436:	89 30                	mov    DWORD PTR [eax],esi
  47d438:	0f 85 18 01 00 00    	jne    0x47d556
  47d43e:	e9 0c 01 00 00       	jmp    0x47d54f
  47d443:	56                   	push   esi
  47d444:	8b cb                	mov    ecx,ebx
  47d446:	e8 a5 fd ff ff       	call   0x47d1f0
  47d44b:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47d450:	85 c0                	test   eax,eax
  47d452:	75 05                	jne    0x47d459
  47d454:	e8 27 de 0d 00       	call   0x55b280
  47d459:	8b 88 fc 00 00 00    	mov    ecx,DWORD PTR [eax+0xfc]
  47d45f:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  47d463:	85 c9                	test   ecx,ecx
  47d465:	75 6a                	jne    0x47d4d1
  47d467:	8a 4c 24 48          	mov    cl,BYTE PTR [esp+0x48]
  47d46b:	6a 00                	push   0x0
  47d46d:	88 4c 24 2c          	mov    BYTE PTR [esp+0x2c],cl
  47d471:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47d475:	e8 26 6c f8 ff       	call   0x4040a0
  47d47a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d47f:	83 c9 ff             	or     ecx,0xffffffff
  47d482:	33 c0                	xor    eax,eax
  47d484:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d486:	f7 d1                	not    ecx
  47d488:	49                   	dec    ecx
  47d489:	51                   	push   ecx
  47d48a:	68 70 3f 6b 00       	push   0x6b3f70
  47d48f:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47d493:	e8 58 6c f8 ff       	call   0x4040f0
  47d498:	8d 54 24 28          	lea    edx,[esp+0x28]
  47d49c:	c7 44 24 40 02 00 00 	mov    DWORD PTR [esp+0x40],0x2
  47d4a3:	00 
  47d4a4:	52                   	push   edx
  47d4a5:	68 8f 01 00 00       	push   0x18f
  47d4aa:	68 58 eb 68 00       	push   0x68eb58
  47d4af:	68 ec f8 68 00       	push   0x68f8ec
  47d4b4:	e8 37 33 12 00       	call   0x5a07f0
  47d4b9:	ff d0                	call   eax
  47d4bb:	83 c4 10             	add    esp,0x10
  47d4be:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47d4c2:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d4c9:	ff 
  47d4ca:	6a 01                	push   0x1
  47d4cc:	e8 cf 6b f8 ff       	call   0x4040a0
  47d4d1:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  47d4d5:	8d 94 76 6c 09 00 00 	lea    edx,[esi+esi*2+0x96c]
  47d4dc:	6a 00                	push   0x0
  47d4de:	6a 00                	push   0x0
  47d4e0:	8b 88 fc 00 00 00    	mov    ecx,DWORD PTR [eax+0xfc]
  47d4e6:	68 00 00 80 3f       	push   0x3f800000
  47d4eb:	8d 04 d3             	lea    eax,[ebx+edx*8]
  47d4ee:	6a 00                	push   0x0
  47d4f0:	8d 54 24 24          	lea    edx,[esp+0x24]
  47d4f4:	50                   	push   eax
  47d4f5:	52                   	push   edx
  47d4f6:	e8 85 18 0d 00       	call   0x54ed80
  47d4fb:	8b f0                	mov    esi,eax
  47d4fd:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  47d500:	8b 06                	mov    eax,DWORD PTR [esi]
  47d502:	3b c8                	cmp    ecx,eax
  47d504:	c7 44 24 40 03 00 00 	mov    DWORD PTR [esp+0x40],0x3
  47d50b:	00 
  47d50c:	74 20                	je     0x47d52e
  47d50e:	85 c9                	test   ecx,ecx
  47d510:	74 10                	je     0x47d522
  47d512:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d515:	48                   	dec    eax
  47d516:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d519:	75 07                	jne    0x47d522
  47d51b:	6a 00                	push   0x0
  47d51d:	e8 9e ea 12 00       	call   0x5abfc0
  47d522:	8b 36                	mov    esi,DWORD PTR [esi]
  47d524:	85 f6                	test   esi,esi
  47d526:	89 75 00             	mov    DWORD PTR [ebp+0x0],esi
  47d529:	74 03                	je     0x47d52e
  47d52b:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  47d52e:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47d532:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d539:	ff 
  47d53a:	85 c0                	test   eax,eax
  47d53c:	74 18                	je     0x47d556
  47d53e:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47d541:	8b c8                	mov    ecx,eax
  47d543:	83 c0 14             	add    eax,0x14
  47d546:	4e                   	dec    esi
  47d547:	8b d6                	mov    edx,esi
  47d549:	85 d2                	test   edx,edx
  47d54b:	89 30                	mov    DWORD PTR [eax],esi
  47d54d:	75 07                	jne    0x47d556
  47d54f:	6a 00                	push   0x0
  47d551:	e8 6a ea 12 00       	call   0x5abfc0
  47d556:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  47d55a:	5f                   	pop    edi
  47d55b:	5e                   	pop    esi
  47d55c:	5d                   	pop    ebp
  47d55d:	5b                   	pop    ebx
  47d55e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47d565:	83 c4 34             	add    esp,0x34
  47d568:	c2 04 00             	ret    0x4
  47d56b:	90                   	nop
  47d56c:	90                   	nop
  47d56d:	90                   	nop
  47d56e:	90                   	nop
  47d56f:	90                   	nop
  47d570:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  47d576:	6a ff                	push   0xffffffff
  47d578:	68 a0 8e 62 00       	push   0x628ea0
  47d57d:	50                   	push   eax
  47d57e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  47d585:	83 ec 28             	sub    esp,0x28
  47d588:	53                   	push   ebx
  47d589:	55                   	push   ebp
  47d58a:	56                   	push   esi
  47d58b:	8b 74 24 44          	mov    esi,DWORD PTR [esp+0x44]
  47d58f:	8b d9                	mov    ebx,ecx
  47d591:	57                   	push   edi
  47d592:	8d 04 76             	lea    eax,[esi+esi*2]
  47d595:	8b 94 c3 5c 4b 00 00 	mov    edx,DWORD PTR [ebx+eax*8+0x4b5c]
  47d59c:	8d ac c3 5c 4b 00 00 	lea    ebp,[ebx+eax*8+0x4b5c]
  47d5a3:	85 d2                	test   edx,edx
  47d5a5:	0f 94 c0             	sete   al
  47d5a8:	84 c0                	test   al,al
  47d5aa:	0f 84 16 01 00 00    	je     0x47d6c6
  47d5b0:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47d5b5:	85 c0                	test   eax,eax
  47d5b7:	75 05                	jne    0x47d5be
  47d5b9:	e8 c2 dc 0d 00       	call   0x55b280
  47d5be:	8b c8                	mov    ecx,eax
  47d5c0:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  47d5c4:	8b 81 fc 00 00 00    	mov    eax,DWORD PTR [ecx+0xfc]
  47d5ca:	85 c0                	test   eax,eax
  47d5cc:	75 6a                	jne    0x47d638
  47d5ce:	8a 54 24 48          	mov    dl,BYTE PTR [esp+0x48]
  47d5d2:	6a 00                	push   0x0
  47d5d4:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47d5d8:	88 54 24 1c          	mov    BYTE PTR [esp+0x1c],dl
  47d5dc:	e8 bf 6a f8 ff       	call   0x4040a0
  47d5e1:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d5e6:	83 c9 ff             	or     ecx,0xffffffff
  47d5e9:	33 c0                	xor    eax,eax
  47d5eb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d5ed:	f7 d1                	not    ecx
  47d5ef:	49                   	dec    ecx
  47d5f0:	51                   	push   ecx
  47d5f1:	68 70 3f 6b 00       	push   0x6b3f70
  47d5f6:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  47d5fa:	e8 f1 6a f8 ff       	call   0x4040f0
  47d5ff:	8d 44 24 18          	lea    eax,[esp+0x18]
  47d603:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  47d60a:	00 
  47d60b:	50                   	push   eax
  47d60c:	68 8f 01 00 00       	push   0x18f
  47d611:	68 58 eb 68 00       	push   0x68eb58
  47d616:	68 ec f8 68 00       	push   0x68f8ec
  47d61b:	e8 d0 31 12 00       	call   0x5a07f0
  47d620:	ff d0                	call   eax
  47d622:	83 c4 10             	add    esp,0x10
  47d625:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  47d629:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d630:	ff 
  47d631:	6a 01                	push   0x1
  47d633:	e8 68 6a f8 ff       	call   0x4040a0
  47d638:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  47d63c:	8d 94 76 6c 09 00 00 	lea    edx,[esi+esi*2+0x96c]
  47d643:	6a 00                	push   0x0
  47d645:	68 00 00 80 3f       	push   0x3f800000
  47d64a:	8b 89 fc 00 00 00    	mov    ecx,DWORD PTR [ecx+0xfc]
  47d650:	68 cd cc cc 3e       	push   0x3ecccccd
  47d655:	8d 04 d3             	lea    eax,[ebx+edx*8]
  47d658:	6a 01                	push   0x1
  47d65a:	8d 54 24 20          	lea    edx,[esp+0x20]
  47d65e:	50                   	push   eax
  47d65f:	52                   	push   edx
  47d660:	e8 1b 17 0d 00       	call   0x54ed80
  47d665:	8b f0                	mov    esi,eax
  47d667:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  47d66a:	8b 06                	mov    eax,DWORD PTR [esi]
  47d66c:	3b c8                	cmp    ecx,eax
  47d66e:	c7 44 24 40 01 00 00 	mov    DWORD PTR [esp+0x40],0x1
  47d675:	00 
  47d676:	74 20                	je     0x47d698
  47d678:	85 c9                	test   ecx,ecx
  47d67a:	74 10                	je     0x47d68c
  47d67c:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d67f:	48                   	dec    eax
  47d680:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d683:	75 07                	jne    0x47d68c
  47d685:	6a 00                	push   0x0
  47d687:	e8 34 e9 12 00       	call   0x5abfc0
  47d68c:	8b 36                	mov    esi,DWORD PTR [esi]
  47d68e:	85 f6                	test   esi,esi
  47d690:	89 75 00             	mov    DWORD PTR [ebp+0x0],esi
  47d693:	74 03                	je     0x47d698
  47d695:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  47d698:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47d69c:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d6a3:	ff 
  47d6a4:	85 c0                	test   eax,eax
  47d6a6:	0f 84 30 01 00 00    	je     0x47d7dc
  47d6ac:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47d6af:	8b c8                	mov    ecx,eax
  47d6b1:	83 c0 14             	add    eax,0x14
  47d6b4:	4e                   	dec    esi
  47d6b5:	8b d6                	mov    edx,esi
  47d6b7:	85 d2                	test   edx,edx
  47d6b9:	89 30                	mov    DWORD PTR [eax],esi
  47d6bb:	0f 85 1b 01 00 00    	jne    0x47d7dc
  47d6c1:	e9 0f 01 00 00       	jmp    0x47d7d5
  47d6c6:	56                   	push   esi
  47d6c7:	8b cb                	mov    ecx,ebx
  47d6c9:	e8 22 fb ff ff       	call   0x47d1f0
  47d6ce:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  47d6d3:	85 c0                	test   eax,eax
  47d6d5:	75 05                	jne    0x47d6dc
  47d6d7:	e8 a4 db 0d 00       	call   0x55b280
  47d6dc:	8b 88 fc 00 00 00    	mov    ecx,DWORD PTR [eax+0xfc]
  47d6e2:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  47d6e6:	85 c9                	test   ecx,ecx
  47d6e8:	75 6a                	jne    0x47d754
  47d6ea:	8a 4c 24 48          	mov    cl,BYTE PTR [esp+0x48]
  47d6ee:	6a 00                	push   0x0
  47d6f0:	88 4c 24 2c          	mov    BYTE PTR [esp+0x2c],cl
  47d6f4:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47d6f8:	e8 a3 69 f8 ff       	call   0x4040a0
  47d6fd:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  47d702:	83 c9 ff             	or     ecx,0xffffffff
  47d705:	33 c0                	xor    eax,eax
  47d707:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  47d709:	f7 d1                	not    ecx
  47d70b:	49                   	dec    ecx
  47d70c:	51                   	push   ecx
  47d70d:	68 70 3f 6b 00       	push   0x6b3f70
  47d712:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  47d716:	e8 d5 69 f8 ff       	call   0x4040f0
  47d71b:	8d 54 24 28          	lea    edx,[esp+0x28]
  47d71f:	c7 44 24 40 02 00 00 	mov    DWORD PTR [esp+0x40],0x2
  47d726:	00 
  47d727:	52                   	push   edx
  47d728:	68 8f 01 00 00       	push   0x18f
  47d72d:	68 58 eb 68 00       	push   0x68eb58
  47d732:	68 ec f8 68 00       	push   0x68f8ec
  47d737:	e8 b4 30 12 00       	call   0x5a07f0
  47d73c:	ff d0                	call   eax
  47d73e:	83 c4 10             	add    esp,0x10
  47d741:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  47d745:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d74c:	ff 
  47d74d:	6a 01                	push   0x1
  47d74f:	e8 4c 69 f8 ff       	call   0x4040a0
  47d754:	8b 44 24 48          	mov    eax,DWORD PTR [esp+0x48]
  47d758:	8d 94 76 6c 09 00 00 	lea    edx,[esi+esi*2+0x96c]
  47d75f:	6a 00                	push   0x0
  47d761:	68 00 00 80 3f       	push   0x3f800000
  47d766:	8b 88 fc 00 00 00    	mov    ecx,DWORD PTR [eax+0xfc]
  47d76c:	68 cd cc cc 3e       	push   0x3ecccccd
  47d771:	8d 04 d3             	lea    eax,[ebx+edx*8]
  47d774:	6a 01                	push   0x1
  47d776:	8d 54 24 24          	lea    edx,[esp+0x24]
  47d77a:	50                   	push   eax
  47d77b:	52                   	push   edx
  47d77c:	e8 ff 15 0d 00       	call   0x54ed80
  47d781:	8b f0                	mov    esi,eax
  47d783:	8b 4d 00             	mov    ecx,DWORD PTR [ebp+0x0]
  47d786:	8b 06                	mov    eax,DWORD PTR [esi]
  47d788:	3b c8                	cmp    ecx,eax
  47d78a:	c7 44 24 40 03 00 00 	mov    DWORD PTR [esp+0x40],0x3
  47d791:	00 
  47d792:	74 20                	je     0x47d7b4
  47d794:	85 c9                	test   ecx,ecx
  47d796:	74 10                	je     0x47d7a8
  47d798:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  47d79b:	48                   	dec    eax
  47d79c:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  47d79f:	75 07                	jne    0x47d7a8
  47d7a1:	6a 00                	push   0x0
  47d7a3:	e8 18 e8 12 00       	call   0x5abfc0
  47d7a8:	8b 36                	mov    esi,DWORD PTR [esi]
  47d7aa:	85 f6                	test   esi,esi
  47d7ac:	89 75 00             	mov    DWORD PTR [ebp+0x0],esi
  47d7af:	74 03                	je     0x47d7b4
  47d7b1:	ff 46 14             	inc    DWORD PTR [esi+0x14]
  47d7b4:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47d7b8:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  47d7bf:	ff 
  47d7c0:	85 c0                	test   eax,eax
  47d7c2:	74 18                	je     0x47d7dc
  47d7c4:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  47d7c7:	8b c8                	mov    ecx,eax
  47d7c9:	83 c0 14             	add    eax,0x14
  47d7cc:	4e                   	dec    esi
  47d7cd:	8b d6                	mov    edx,esi
  47d7cf:	85 d2                	test   edx,edx
  47d7d1:	89 30                	mov    DWORD PTR [eax],esi
  47d7d3:	75 07                	jne    0x47d7dc
  47d7d5:	6a 00                	push   0x0
  47d7d7:	e8 e4 e7 12 00       	call   0x5abfc0
  47d7dc:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  47d7e0:	5f                   	pop    edi
  47d7e1:	5e                   	pop    esi
  47d7e2:	5d                   	pop    ebp
  47d7e3:	5b                   	pop    ebx
  47d7e4:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  47d7eb:	83 c4 34             	add    esp,0x34
  47d7ee:	c2 04 00             	ret    0x4
  47d7f1:	90                   	nop
  47d7f2:	90                   	nop
  47d7f3:	90                   	nop
  47d7f4:	90                   	nop
  47d7f5:	90                   	nop
  47d7f6:	90                   	nop
  47d7f7:	90                   	nop
  47d7f8:	90                   	nop
  47d7f9:	90                   	nop
  47d7fa:	90                   	nop
  47d7fb:	90                   	nop
  47d7fc:	90                   	nop
  47d7fd:	90                   	nop
  47d7fe:	90                   	nop
  47d7ff:	90                   	nop
