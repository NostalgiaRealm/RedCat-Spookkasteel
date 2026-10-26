
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004777b0 <.text+0x767b0>:
  4777b0:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4777b6:	6a ff                	push   0xffffffff
  4777b8:	68 72 89 62 00       	push   0x628972
  4777bd:	50                   	push   eax
  4777be:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4777c5:	81 ec 18 01 00 00    	sub    esp,0x118
  4777cb:	53                   	push   ebx
  4777cc:	55                   	push   ebp
  4777cd:	8b e9                	mov    ebp,ecx
  4777cf:	56                   	push   esi
  4777d0:	57                   	push   edi
  4777d1:	8b b5 ac 14 00 00    	mov    esi,DWORD PTR [ebp+0x14ac]
  4777d7:	8b 86 14 01 00 00    	mov    eax,DWORD PTR [esi+0x114]
  4777dd:	85 c0                	test   eax,eax
  4777df:	75 70                	jne    0x477851
  4777e1:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4777e5:	6a 00                	push   0x0
  4777e7:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4777eb:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  4777ef:	e8 ac c8 f8 ff       	call   0x4040a0
  4777f4:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4777f9:	83 c9 ff             	or     ecx,0xffffffff
  4777fc:	33 c0                	xor    eax,eax
  4777fe:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  477800:	f7 d1                	not    ecx
  477802:	49                   	dec    ecx
  477803:	51                   	push   ecx
  477804:	68 70 3f 6b 00       	push   0x6b3f70
  477809:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  47780d:	e8 de c8 f8 ff       	call   0x4040f0
  477812:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  477816:	c7 84 24 30 01 00 00 	mov    DWORD PTR [esp+0x130],0x0
  47781d:	00 00 00 00 
  477821:	51                   	push   ecx
  477822:	68 8d 01 00 00       	push   0x18d
  477827:	68 78 e7 68 00       	push   0x68e778
  47782c:	68 68 e7 68 00       	push   0x68e768
  477831:	e8 ba 8f 12 00       	call   0x5a07f0
  477836:	ff d0                	call   eax
  477838:	83 c4 10             	add    esp,0x10
  47783b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  47783f:	c7 84 24 30 01 00 00 	mov    DWORD PTR [esp+0x130],0xffffffff
  477846:	ff ff ff ff 
  47784a:	6a 01                	push   0x1
  47784c:	e8 4f c8 f8 ff       	call   0x4040a0
  477851:	8b 8e 14 01 00 00    	mov    ecx,DWORD PTR [esi+0x114]
  477857:	e8 94 c2 13 00       	call   0x5b3af0
  47785c:	8b c8                	mov    ecx,eax
  47785e:	e8 7d 39 12 00       	call   0x59b1e0
  477863:	8b c8                	mov    ecx,eax
  477865:	e8 d6 f8 13 00       	call   0x5b7140
  47786a:	51                   	push   ecx
  47786b:	8b cd                	mov    ecx,ebp
  47786d:	8b d4                	mov    edx,esp
  47786f:	89 64 24 24          	mov    DWORD PTR [esp+0x24],esp
  477873:	52                   	push   edx
  477874:	e8 67 ca f8 ff       	call   0x4042e0
  477879:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  47787d:	e8 ae e3 0e 00       	call   0x565c30
  477882:	8d b5 b0 14 00 00    	lea    esi,[ebp+0x14b0]
  477888:	c7 84 24 30 01 00 00 	mov    DWORD PTR [esp+0x130],0x1
  47788f:	01 00 00 00 
  477893:	8b c6                	mov    eax,esi
  477895:	c6 44 24 65 01       	mov    BYTE PTR [esp+0x65],0x1
  47789a:	c6 44 24 66 01       	mov    BYTE PTR [esp+0x66],0x1
  47789f:	c6 44 24 67 00       	mov    BYTE PTR [esp+0x67],0x0
  4778a4:	8b 08                	mov    ecx,DWORD PTR [eax]
  4778a6:	c6 44 24 68 01       	mov    BYTE PTR [esp+0x68],0x1
  4778ab:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  4778af:	8b ce                	mov    ecx,esi
  4778b1:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4778b4:	c6 44 24 69 00       	mov    BYTE PTR [esp+0x69],0x0
  4778b9:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  4778bd:	8b 11                	mov    edx,DWORD PTR [ecx]
  4778bf:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  4778c3:	d8 05 5c ad 64 00    	fadd   DWORD PTR ds:0x64ad5c
  4778c9:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4778cc:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  4778d0:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  4778d4:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  4778d7:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  4778db:	8d 54 24 14          	lea    edx,[esp+0x14]
  4778df:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  4778e3:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  4778e7:	d8 25 6c dc 64 00    	fsub   DWORD PTR ds:0x64dc6c
  4778ed:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  4778f0:	8d 44 24 34          	lea    eax,[esp+0x34]
  4778f4:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  4778f8:	52                   	push   edx
  4778f9:	50                   	push   eax
  4778fa:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4778fe:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  477902:	c6 44 24 6c 00       	mov    BYTE PTR [esp+0x6c],0x0
  477907:	c6 44 24 72 00       	mov    BYTE PTR [esp+0x72],0x0
  47790c:	e8 ff e4 0e 00       	call   0x565e10
  477911:	84 c0                	test   al,al
  477913:	74 1f                	je     0x477934
  477915:	8b 84 24 e0 00 00 00 	mov    eax,DWORD PTR [esp+0xe0]
  47791c:	8b 8c 24 e4 00 00 00 	mov    ecx,DWORD PTR [esp+0xe4]
  477923:	8b b4 24 e8 00 00 00 	mov    esi,DWORD PTR [esp+0xe8]
  47792a:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  47792e:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  477932:	eb 10                	jmp    0x477944
  477934:	8b 06                	mov    eax,DWORD PTR [esi]
  477936:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  477939:	8b 76 08             	mov    esi,DWORD PTR [esi+0x8]
  47793c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  477940:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  477944:	8a 95 bc 14 00 00    	mov    dl,BYTE PTR [ebp+0x14bc]
  47794a:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  47794e:	84 d2                	test   dl,dl
  477950:	8d 95 d4 14 00 00    	lea    edx,[ebp+0x14d4]
  477956:	8b fa                	mov    edi,edx
  477958:	89 07                	mov    DWORD PTR [edi],eax
  47795a:	89 4f 04             	mov    DWORD PTR [edi+0x4],ecx
  47795d:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
  477960:	0f 85 2b 01 00 00    	jne    0x477a91
  477966:	d9 05 44 e1 64 00    	fld    DWORD PTR ds:0x64e144
  47796c:	d8 85 d8 14 00 00    	fadd   DWORD PTR [ebp+0x14d8]
  477972:	8d bd e0 14 00 00    	lea    edi,[ebp+0x14e0]
  477978:	89 85 e0 14 00 00    	mov    DWORD PTR [ebp+0x14e0],eax
  47797e:	8d 85 10 02 00 00    	lea    eax,[ebp+0x210]
  477984:	d9 9d d8 14 00 00    	fstp   DWORD PTR [ebp+0x14d8]
  47798a:	89 4f 04             	mov    DWORD PTR [edi+0x4],ecx
  47798d:	b9 0f 00 00 00       	mov    ecx,0xf
  477992:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
  477995:	8b fa                	mov    edi,edx
  477997:	8d 70 10             	lea    esi,[eax+0x10]
  47799a:	8b 1f                	mov    ebx,DWORD PTR [edi]
  47799c:	89 1e                	mov    DWORD PTR [esi],ebx
  47799e:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
  4779a1:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
  4779a4:	8b 7f 08             	mov    edi,DWORD PTR [edi+0x8]
  4779a7:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
  4779aa:	8b fa                	mov    edi,edx
  4779ac:	8d b0 ec fe ff ff    	lea    esi,[eax-0x114]
  4779b2:	05 50 01 00 00       	add    eax,0x150
  4779b7:	8b 1f                	mov    ebx,DWORD PTR [edi]
  4779b9:	49                   	dec    ecx
  4779ba:	89 1e                	mov    DWORD PTR [esi],ebx
  4779bc:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
  4779bf:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
  4779c2:	8b 7f 08             	mov    edi,DWORD PTR [edi+0x8]
  4779c5:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
  4779c8:	d9 05 50 e1 64 00    	fld    DWORD PTR ds:0x64e150
  4779ce:	d9 05 4c e1 64 00    	fld    DWORD PTR ds:0x64e14c
  4779d4:	d9 98 ac fe ff ff    	fstp   DWORD PTR [eax-0x154]
  4779da:	d9 98 b0 fe ff ff    	fstp   DWORD PTR [eax-0x150]
  4779e0:	d9 05 58 e1 64 00    	fld    DWORD PTR ds:0x64e158
  4779e6:	d9 05 54 e1 64 00    	fld    DWORD PTR ds:0x64e154
  4779ec:	d9 98 24 fe ff ff    	fstp   DWORD PTR [eax-0x1dc]
  4779f2:	d9 98 28 fe ff ff    	fstp   DWORD PTR [eax-0x1d8]
  4779f8:	d9 05 34 e1 64 00    	fld    DWORD PTR ds:0x64e134
  4779fe:	d9 98 b8 fe ff ff    	fstp   DWORD PTR [eax-0x148]
  477a04:	75 8f                	jne    0x477995
  477a06:	d9 05 38 87 6b 00    	fld    DWORD PTR ds:0x6b8738
  477a0c:	e8 0f 31 19 00       	call   0x60ab20
  477a11:	8b f0                	mov    esi,eax
  477a13:	83 fe ff             	cmp    esi,0xffffffff
  477a16:	0f 84 cb 01 00 00    	je     0x477be7
  477a1c:	33 db                	xor    ebx,ebx
  477a1e:	3b f3                	cmp    esi,ebx
  477a20:	0f 8d c3 01 00 00    	jge    0x477be9
  477a26:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  477a2a:	53                   	push   ebx
  477a2b:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  477a2f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  477a33:	e8 68 c6 f8 ff       	call   0x4040a0
  477a38:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  477a3d:	83 c9 ff             	or     ecx,0xffffffff
  477a40:	33 c0                	xor    eax,eax
  477a42:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  477a44:	f7 d1                	not    ecx
  477a46:	49                   	dec    ecx
  477a47:	51                   	push   ecx
  477a48:	68 70 3f 6b 00       	push   0x6b3f70
  477a4d:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  477a51:	e8 9a c6 f8 ff       	call   0x4040f0
  477a56:	8d 54 24 24          	lea    edx,[esp+0x24]
  477a5a:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x2
  477a61:	02 
  477a62:	52                   	push   edx
  477a63:	6a 56                	push   0x56
  477a65:	68 c8 d4 68 00       	push   0x68d4c8
  477a6a:	68 90 d4 68 00       	push   0x68d490
  477a6f:	e8 7c 8d 12 00       	call   0x5a07f0
  477a74:	ff d0                	call   eax
  477a76:	83 c4 10             	add    esp,0x10
  477a79:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  477a7d:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x1
  477a84:	01 
  477a85:	6a 01                	push   0x1
  477a87:	e8 14 c6 f8 ff       	call   0x4040a0
  477a8c:	e9 58 01 00 00       	jmp    0x477be9
  477a91:	8d bd e0 14 00 00    	lea    edi,[ebp+0x14e0]
  477a97:	89 85 e0 14 00 00    	mov    DWORD PTR [ebp+0x14e0],eax
  477a9d:	8d 85 10 02 00 00    	lea    eax,[ebp+0x210]
  477aa3:	89 4f 04             	mov    DWORD PTR [edi+0x4],ecx
  477aa6:	b9 0f 00 00 00       	mov    ecx,0xf
  477aab:	89 77 08             	mov    DWORD PTR [edi+0x8],esi
  477aae:	d9 05 48 e1 64 00    	fld    DWORD PTR ds:0x64e148
  477ab4:	d8 85 e4 14 00 00    	fadd   DWORD PTR [ebp+0x14e4]
  477aba:	d9 9d e4 14 00 00    	fstp   DWORD PTR [ebp+0x14e4]
  477ac0:	8b fa                	mov    edi,edx
  477ac2:	8d 70 10             	lea    esi,[eax+0x10]
  477ac5:	8b 1f                	mov    ebx,DWORD PTR [edi]
  477ac7:	89 1e                	mov    DWORD PTR [esi],ebx
  477ac9:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
  477acc:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
  477acf:	8b 7f 08             	mov    edi,DWORD PTR [edi+0x8]
  477ad2:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
  477ad5:	8b fa                	mov    edi,edx
  477ad7:	8d b0 ec fe ff ff    	lea    esi,[eax-0x114]
  477add:	05 50 01 00 00       	add    eax,0x150
  477ae2:	8b 1f                	mov    ebx,DWORD PTR [edi]
  477ae4:	49                   	dec    ecx
  477ae5:	89 1e                	mov    DWORD PTR [esi],ebx
  477ae7:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
  477aea:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
  477aed:	8b 7f 08             	mov    edi,DWORD PTR [edi+0x8]
  477af0:	89 7e 08             	mov    DWORD PTR [esi+0x8],edi
  477af3:	d9 05 60 e1 64 00    	fld    DWORD PTR ds:0x64e160
  477af9:	d9 05 5c e1 64 00    	fld    DWORD PTR ds:0x64e15c
  477aff:	d9 98 ac fe ff ff    	fstp   DWORD PTR [eax-0x154]
  477b05:	d9 98 b0 fe ff ff    	fstp   DWORD PTR [eax-0x150]
  477b0b:	d9 05 68 e1 64 00    	fld    DWORD PTR ds:0x64e168
  477b11:	d9 05 64 e1 64 00    	fld    DWORD PTR ds:0x64e164
  477b17:	d9 98 24 fe ff ff    	fstp   DWORD PTR [eax-0x1dc]
  477b1d:	d9 98 28 fe ff ff    	fstp   DWORD PTR [eax-0x1d8]
  477b23:	d9 05 38 e1 64 00    	fld    DWORD PTR ds:0x64e138
  477b29:	d9 98 b8 fe ff ff    	fstp   DWORD PTR [eax-0x148]
  477b2f:	75 8f                	jne    0x477ac0
  477b31:	d9 05 34 87 6b 00    	fld    DWORD PTR ds:0x6b8734
  477b37:	e8 e4 2f 19 00       	call   0x60ab20
  477b3c:	8b f0                	mov    esi,eax
  477b3e:	83 fe ff             	cmp    esi,0xffffffff
  477b41:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  477b45:	0f 84 9c 00 00 00    	je     0x477be7
  477b4b:	33 db                	xor    ebx,ebx
  477b4d:	3b f3                	cmp    esi,ebx
  477b4f:	0f 8d 94 00 00 00    	jge    0x477be9
  477b55:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  477b59:	53                   	push   ebx
  477b5a:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  477b5e:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  477b62:	e8 39 c5 f8 ff       	call   0x4040a0
  477b67:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  477b6c:	83 c9 ff             	or     ecx,0xffffffff
  477b6f:	33 c0                	xor    eax,eax
  477b71:	6a 01                	push   0x1
  477b73:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  477b75:	f7 d1                	not    ecx
  477b77:	49                   	dec    ecx
  477b78:	8b d9                	mov    ebx,ecx
  477b7a:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  477b7e:	53                   	push   ebx
  477b7f:	e8 bc 9d f8 ff       	call   0x401940
  477b84:	84 c0                	test   al,al
  477b86:	74 29                	je     0x477bb1
  477b88:	8b 7c 24 44          	mov    edi,DWORD PTR [esp+0x44]
  477b8c:	8b cb                	mov    ecx,ebx
  477b8e:	8b d1                	mov    edx,ecx
  477b90:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  477b95:	c1 e9 02             	shr    ecx,0x2
  477b98:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  477b9a:	8b ca                	mov    ecx,edx
  477b9c:	83 e1 03             	and    ecx,0x3
  477b9f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  477ba1:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  477ba5:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  477ba9:	89 5c 24 48          	mov    DWORD PTR [esp+0x48],ebx
  477bad:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  477bb1:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  477bb5:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x3
  477bbc:	03 
  477bbd:	51                   	push   ecx
  477bbe:	6a 56                	push   0x56
  477bc0:	68 c8 d4 68 00       	push   0x68d4c8
  477bc5:	68 90 d4 68 00       	push   0x68d490
  477bca:	e8 21 8c 12 00       	call   0x5a07f0
  477bcf:	ff d0                	call   eax
  477bd1:	83 c4 10             	add    esp,0x10
  477bd4:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  477bd8:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x1
  477bdf:	01 
  477be0:	6a 01                	push   0x1
  477be2:	e8 b9 c4 f8 ff       	call   0x4040a0
  477be7:	33 db                	xor    ebx,ebx
  477be9:	89 b5 c0 14 00 00    	mov    DWORD PTR [ebp+0x14c0],esi
  477bef:	c7 85 c4 14 00 00 ff 	mov    DWORD PTR [ebp+0x14c4],0xffffffff
  477bf6:	ff ff ff 
  477bf9:	c7 85 c8 14 00 00 00 	mov    DWORD PTR [ebp+0x14c8],0x3f800000
  477c00:	00 80 3f 
  477c03:	c6 85 cc 14 00 00 01 	mov    BYTE PTR [ebp+0x14cc],0x1
  477c0a:	8b 94 24 1c 01 00 00 	mov    edx,DWORD PTR [esp+0x11c]
  477c11:	c7 84 24 30 01 00 00 	mov    DWORD PTR [esp+0x130],0x5
  477c18:	05 00 00 00 
  477c1c:	52                   	push   edx
  477c1d:	e8 ce 69 18 00       	call   0x5fe5f0
  477c22:	8b 84 24 14 01 00 00 	mov    eax,DWORD PTR [esp+0x114]
  477c29:	8b 8c 24 10 01 00 00 	mov    ecx,DWORD PTR [esp+0x110]
  477c30:	83 c4 04             	add    esp,0x4
  477c33:	89 9c 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],ebx
  477c3a:	89 9c 24 20 01 00 00 	mov    DWORD PTR [esp+0x120],ebx
  477c41:	89 9c 24 24 01 00 00 	mov    DWORD PTR [esp+0x124],ebx
  477c48:	50                   	push   eax
  477c49:	51                   	push   ecx
  477c4a:	8d 8c 24 10 01 00 00 	lea    ecx,[esp+0x110]
  477c51:	e8 fa 00 11 00       	call   0x587d50
  477c56:	8b 94 24 0c 01 00 00 	mov    edx,DWORD PTR [esp+0x10c]
  477c5d:	52                   	push   edx
  477c5e:	e8 8d 69 18 00       	call   0x5fe5f0
  477c63:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  477c67:	83 c4 04             	add    esp,0x4
  477c6a:	3b cb                	cmp    ecx,ebx
  477c6c:	89 9c 24 0c 01 00 00 	mov    DWORD PTR [esp+0x10c],ebx
  477c73:	89 9c 24 10 01 00 00 	mov    DWORD PTR [esp+0x110],ebx
  477c7a:	89 9c 24 14 01 00 00 	mov    DWORD PTR [esp+0x114],ebx
  477c81:	c6 84 24 30 01 00 00 	mov    BYTE PTR [esp+0x130],0x4
  477c88:	04 
  477c89:	74 09                	je     0x477c94
  477c8b:	e8 40 1c f9 ff       	call   0x4098d0
  477c90:	89 5c 24 70          	mov    DWORD PTR [esp+0x70],ebx
  477c94:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  477c98:	c7 84 24 30 01 00 00 	mov    DWORD PTR [esp+0x130],0xffffffff
  477c9f:	ff ff ff ff 
  477ca3:	e8 28 38 13 00       	call   0x5ab4d0
  477ca8:	8b 8c 24 28 01 00 00 	mov    ecx,DWORD PTR [esp+0x128]
  477caf:	5f                   	pop    edi
  477cb0:	5e                   	pop    esi
  477cb1:	5d                   	pop    ebp
  477cb2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  477cb9:	5b                   	pop    ebx
  477cba:	81 c4 24 01 00 00    	add    esp,0x124
  477cc0:	c3                   	ret
