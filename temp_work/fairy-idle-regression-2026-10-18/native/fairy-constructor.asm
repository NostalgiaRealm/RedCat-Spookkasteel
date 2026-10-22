
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
  4794fb:	64                   	fs
  4794fc:	89                   	.byte 0x89
  4794fd:	0d                   	.byte 0xd
	...
