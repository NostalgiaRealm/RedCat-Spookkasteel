
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00426800 <.text+0x25800>:
  426800:	6a ff                	push   0xffffffff
  426802:	68 f3 2a 62 00       	push   0x622af3
  426807:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42680d:	50                   	push   eax
  42680e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  426815:	81 ec ac 00 00 00    	sub    esp,0xac
  42681b:	8b 84 24 bc 00 00 00 	mov    eax,DWORD PTR [esp+0xbc]
  426822:	55                   	push   ebp
  426823:	56                   	push   esi
  426824:	57                   	push   edi
  426825:	8b e9                	mov    ebp,ecx
  426827:	50                   	push   eax
  426828:	89 6c 24 4c          	mov    DWORD PTR [esp+0x4c],ebp
  42682c:	e8 ef e9 ff ff       	call   0x425220
  426831:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  426835:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x0
  42683c:	00 00 00 00 
  426840:	51                   	push   ecx
  426841:	8b cd                	mov    ecx,ebp
  426843:	c7 45 00 a0 bd 64 00 	mov    DWORD PTR [ebp+0x0],0x64bda0
  42684a:	e8 41 eb ff ff       	call   0x425390
  42684f:	8d 54 24 20          	lea    edx,[esp+0x20]
  426853:	c6 84 24 c0 00 00 00 	mov    BYTE PTR [esp+0xc0],0x1
  42685a:	01 
  42685b:	52                   	push   edx
  42685c:	e8 0f ed ff ff       	call   0x425570
  426861:	83 c4 04             	add    esp,0x4
  426864:	8a 44 24 0f          	mov    al,BYTE PTR [esp+0xf]
  426868:	6a 00                	push   0x0
  42686a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42686e:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x2
  426875:	02 
  426876:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  42687a:	e8 21 d8 fd ff       	call   0x4040a0
  42687f:	bf 98 fc 68 00       	mov    edi,0x68fc98
  426884:	83 c9 ff             	or     ecx,0xffffffff
  426887:	33 c0                	xor    eax,eax
  426889:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42688b:	f7 d1                	not    ecx
  42688d:	49                   	dec    ecx
  42688e:	51                   	push   ecx
  42688f:	68 98 fc 68 00       	push   0x68fc98
  426894:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426898:	e8 53 d8 fd ff       	call   0x4040f0
  42689d:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4268a1:	6a 00                	push   0x0
  4268a3:	51                   	push   ecx
  4268a4:	8d 54 24 28          	lea    edx,[esp+0x28]
  4268a8:	6a 03                	push   0x3
  4268aa:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4268ae:	52                   	push   edx
  4268af:	50                   	push   eax
  4268b0:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  4268b4:	c6 84 24 d4 00 00 00 	mov    BYTE PTR [esp+0xd4],0x3
  4268bb:	03 
  4268bc:	e8 0f 61 18 00       	call   0x5ac9d0
  4268c1:	8b f0                	mov    esi,eax
  4268c3:	8b 46 64             	mov    eax,DWORD PTR [esi+0x64]
  4268c6:	3d 00 00 00 80       	cmp    eax,0x80000000
  4268cb:	75 18                	jne    0x4268e5
  4268cd:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  4268d0:	85 c0                	test   eax,eax
  4268d2:	75 05                	jne    0x4268d9
  4268d4:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4268d9:	50                   	push   eax
  4268da:	e8 31 46 1e 00       	call   0x60af10
  4268df:	83 c4 04             	add    esp,0x4
  4268e2:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
  4268e5:	53                   	push   ebx
  4268e6:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4268ea:	89 45 2c             	mov    DWORD PTR [ebp+0x2c],eax
  4268ed:	e8 ae 63 18 00       	call   0x5acca0
  4268f2:	6a 01                	push   0x1
  4268f4:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4268f8:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x2
  4268ff:	02 
  426900:	e8 9b d7 fd ff       	call   0x4040a0
  426905:	db 45 2c             	fild   DWORD PTR [ebp+0x2c]
  426908:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  42690c:	e8 8f 3b 1e 00       	call   0x60a4a0
  426911:	99                   	cdq
  426912:	b9 10 27 00 00       	mov    ecx,0x2710
  426917:	f7 f9                	idiv   ecx
  426919:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  42691d:	db 44 24 38          	fild   DWORD PTR [esp+0x38]
  426921:	d9 44 24 34          	fld    DWORD PTR [esp+0x34]
  426925:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  42692b:	de c9                	fmulp  st(1),st
  42692d:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  426933:	d8 05 54 a3 64 00    	fadd   DWORD PTR ds:0x64a354
  426939:	e8 e2 41 1e 00       	call   0x60ab20
  42693e:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  426942:	6a 00                	push   0x0
  426944:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426948:	89 45 2c             	mov    DWORD PTR [ebp+0x2c],eax
  42694b:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  42694f:	e8 4c d7 fd ff       	call   0x4040a0
  426954:	bf 88 fc 68 00       	mov    edi,0x68fc88
  426959:	83 c9 ff             	or     ecx,0xffffffff
  42695c:	33 c0                	xor    eax,eax
  42695e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  426960:	f7 d1                	not    ecx
  426962:	49                   	dec    ecx
  426963:	51                   	push   ecx
  426964:	68 88 fc 68 00       	push   0x68fc88
  426969:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42696d:	e8 7e d7 fd ff       	call   0x4040f0
  426972:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  426976:	6a 00                	push   0x0
  426978:	50                   	push   eax
  426979:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  42697d:	68 cd cc 4c 3d       	push   0x3d4ccccd
  426982:	8d 54 24 20          	lea    edx,[esp+0x20]
  426986:	b3 04                	mov    bl,0x4
  426988:	51                   	push   ecx
  426989:	52                   	push   edx
  42698a:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  42698e:	88 9c 24 d8 00 00 00 	mov    BYTE PTR [esp+0xd8],bl
  426995:	e8 16 5f 18 00       	call   0x5ac8b0
  42699a:	8b f0                	mov    esi,eax
  42699c:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  42699f:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4269a5:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x5
  4269ac:	05 
  4269ad:	df e0                	fnstsw ax
  4269af:	f6 c4 40             	test   ah,0x40
  4269b2:	74 16                	je     0x4269ca
  4269b4:	8d 44 24 13          	lea    eax,[esp+0x13]
  4269b8:	8d 4e 14             	lea    ecx,[esi+0x14]
  4269bb:	50                   	push   eax
  4269bc:	51                   	push   ecx
  4269bd:	e8 ce 69 18 00       	call   0x5ad390
  4269c2:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4269c5:	83 c4 08             	add    esp,0x8
  4269c8:	eb 03                	jmp    0x4269cd
  4269ca:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4269cd:	d9 5d 28             	fstp   DWORD PTR [ebp+0x28]
  4269d0:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  4269d4:	88 9c 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],bl
  4269db:	e8 c0 62 18 00       	call   0x5acca0
  4269e0:	6a 01                	push   0x1
  4269e2:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4269e6:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x2
  4269ed:	02 
  4269ee:	e8 ad d6 fd ff       	call   0x4040a0
  4269f3:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4269f7:	6a 00                	push   0x0
  4269f9:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4269fd:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  426a01:	e8 9a d6 fd ff       	call   0x4040a0
  426a06:	bf 70 fc 68 00       	mov    edi,0x68fc70
  426a0b:	83 c9 ff             	or     ecx,0xffffffff
  426a0e:	33 c0                	xor    eax,eax
  426a10:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  426a12:	f7 d1                	not    ecx
  426a14:	49                   	dec    ecx
  426a15:	51                   	push   ecx
  426a16:	68 70 fc 68 00       	push   0x68fc70
  426a1b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  426a1f:	e8 cc d6 fd ff       	call   0x4040f0
  426a24:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  426a28:	6a 00                	push   0x0
  426a2a:	50                   	push   eax
  426a2b:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  426a2f:	68 00 00 00 3f       	push   0x3f000000
  426a34:	8d 54 24 20          	lea    edx,[esp+0x20]
  426a38:	b3 06                	mov    bl,0x6
  426a3a:	51                   	push   ecx
  426a3b:	52                   	push   edx
  426a3c:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  426a40:	88 9c 24 d8 00 00 00 	mov    BYTE PTR [esp+0xd8],bl
  426a47:	e8 64 5e 18 00       	call   0x5ac8b0
  426a4c:	8b f0                	mov    esi,eax
  426a4e:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426a51:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  426a57:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x7
  426a5e:	07 
  426a5f:	df e0                	fnstsw ax
  426a61:	f6 c4 40             	test   ah,0x40
  426a64:	74 16                	je     0x426a7c
  426a66:	8d 44 24 13          	lea    eax,[esp+0x13]
  426a6a:	8d 4e 14             	lea    ecx,[esi+0x14]
  426a6d:	50                   	push   eax
  426a6e:	51                   	push   ecx
  426a6f:	e8 1c 69 18 00       	call   0x5ad390
  426a74:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  426a77:	83 c4 08             	add    esp,0x8
  426a7a:	eb 03                	jmp    0x426a7f
  426a7c:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426a7f:	d9 5d 34             	fstp   DWORD PTR [ebp+0x34]
  426a82:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  426a86:	88 9c 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],bl
  426a8d:	e8 0e 62 18 00       	call   0x5acca0
  426a92:	6a 01                	push   0x1
  426a94:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426a98:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x2
  426a9f:	02 
  426aa0:	e8 fb d5 fd ff       	call   0x4040a0
  426aa5:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  426aa9:	6a 00                	push   0x0
  426aab:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426aaf:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  426ab3:	e8 e8 d5 fd ff       	call   0x4040a0
  426ab8:	bf 60 fc 68 00       	mov    edi,0x68fc60
  426abd:	83 c9 ff             	or     ecx,0xffffffff
  426ac0:	33 c0                	xor    eax,eax
  426ac2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  426ac4:	f7 d1                	not    ecx
  426ac6:	49                   	dec    ecx
  426ac7:	51                   	push   ecx
  426ac8:	68 60 fc 68 00       	push   0x68fc60
  426acd:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  426ad1:	e8 1a d6 fd ff       	call   0x4040f0
  426ad6:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  426ada:	6a 00                	push   0x0
  426adc:	50                   	push   eax
  426add:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  426ae1:	68 00 00 00 3f       	push   0x3f000000
  426ae6:	8d 54 24 20          	lea    edx,[esp+0x20]
  426aea:	b3 08                	mov    bl,0x8
  426aec:	51                   	push   ecx
  426aed:	52                   	push   edx
  426aee:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  426af2:	88 9c 24 d8 00 00 00 	mov    BYTE PTR [esp+0xd8],bl
  426af9:	e8 b2 5d 18 00       	call   0x5ac8b0
  426afe:	8b f0                	mov    esi,eax
  426b00:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426b03:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  426b09:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x9
  426b10:	09 
  426b11:	df e0                	fnstsw ax
  426b13:	f6 c4 40             	test   ah,0x40
  426b16:	74 16                	je     0x426b2e
  426b18:	8d 44 24 13          	lea    eax,[esp+0x13]
  426b1c:	8d 4e 14             	lea    ecx,[esi+0x14]
  426b1f:	50                   	push   eax
  426b20:	51                   	push   ecx
  426b21:	e8 6a 68 18 00       	call   0x5ad390
  426b26:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  426b29:	83 c4 08             	add    esp,0x8
  426b2c:	eb 03                	jmp    0x426b31
  426b2e:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426b31:	d9 5d 24             	fstp   DWORD PTR [ebp+0x24]
  426b34:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  426b38:	88 9c 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],bl
  426b3f:	e8 5c 61 18 00       	call   0x5acca0
  426b44:	6a 01                	push   0x1
  426b46:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426b4a:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x2
  426b51:	02 
  426b52:	e8 49 d5 fd ff       	call   0x4040a0
  426b57:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  426b5b:	6a 00                	push   0x0
  426b5d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426b61:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  426b65:	e8 36 d5 fd ff       	call   0x4040a0
  426b6a:	bf 4c fc 68 00       	mov    edi,0x68fc4c
  426b6f:	83                   	.byte 0x83

/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00426b70 <.text+0x25b70>:
  426b70:	c9                   	leave
  426b71:	ff 33                	push   DWORD PTR [ebx]
  426b73:	c0 f2 ae             	shl    dl,0xae
  426b76:	f7 d1                	not    ecx
  426b78:	49                   	dec    ecx
  426b79:	51                   	push   ecx
  426b7a:	68 4c fc 68 00       	push   0x68fc4c
  426b7f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  426b83:	e8 68 d5 fd ff       	call   0x4040f0
  426b88:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  426b8c:	6a 00                	push   0x0
  426b8e:	50                   	push   eax
  426b8f:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  426b93:	6a 02                	push   0x2
  426b95:	8d 54 24 20          	lea    edx,[esp+0x20]
  426b99:	b3 0a                	mov    bl,0xa
  426b9b:	51                   	push   ecx
  426b9c:	52                   	push   edx
  426b9d:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  426ba1:	88 9c 24 d8 00 00 00 	mov    BYTE PTR [esp+0xd8],bl
  426ba8:	e8 23 5e 18 00       	call   0x5ac9d0
  426bad:	8b f0                	mov    esi,eax
  426baf:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426bb2:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  426bb8:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0xb
  426bbf:	0b 
  426bc0:	df e0                	fnstsw ax
  426bc2:	f6 c4 40             	test   ah,0x40
  426bc5:	74 16                	je     0x426bdd
  426bc7:	8d 44 24 13          	lea    eax,[esp+0x13]
  426bcb:	8d 4e 14             	lea    ecx,[esi+0x14]
  426bce:	50                   	push   eax
  426bcf:	51                   	push   ecx
  426bd0:	e8 bb 67 18 00       	call   0x5ad390
  426bd5:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  426bd8:	83 c4 08             	add    esp,0x8
  426bdb:	eb 03                	jmp    0x426be0
  426bdd:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426be0:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  426be6:	e8 35 3f 1e 00       	call   0x60ab20
  426beb:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  426bef:	89 45 38             	mov    DWORD PTR [ebp+0x38],eax
  426bf2:	88 9c 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],bl
  426bf9:	e8 a2 60 18 00       	call   0x5acca0
  426bfe:	6a 01                	push   0x1
  426c00:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426c04:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x2
  426c0b:	02 
  426c0c:	e8 8f d4 fd ff       	call   0x4040a0
  426c11:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  426c15:	6a 00                	push   0x0
  426c17:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426c1b:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  426c1f:	e8 7c d4 fd ff       	call   0x4040a0
  426c24:	bf 34 fc 68 00       	mov    edi,0x68fc34
  426c29:	83 c9 ff             	or     ecx,0xffffffff
  426c2c:	33 c0                	xor    eax,eax
  426c2e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  426c30:	f7 d1                	not    ecx
  426c32:	49                   	dec    ecx
  426c33:	51                   	push   ecx
  426c34:	68 34 fc 68 00       	push   0x68fc34
  426c39:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  426c3d:	e8 ae d4 fd ff       	call   0x4040f0
  426c42:	33 ff                	xor    edi,edi
  426c44:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  426c48:	57                   	push   edi
  426c49:	50                   	push   eax
  426c4a:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  426c4e:	6a 02                	push   0x2
  426c50:	8d 54 24 20          	lea    edx,[esp+0x20]
  426c54:	b3 0c                	mov    bl,0xc
  426c56:	51                   	push   ecx
  426c57:	52                   	push   edx
  426c58:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  426c5c:	88 9c 24 d8 00 00 00 	mov    BYTE PTR [esp+0xd8],bl
  426c63:	e8 68 5d 18 00       	call   0x5ac9d0
  426c68:	8b f0                	mov    esi,eax
  426c6a:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426c6d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  426c73:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0xd
  426c7a:	0d 
  426c7b:	df e0                	fnstsw ax
  426c7d:	f6 c4 40             	test   ah,0x40
  426c80:	74 16                	je     0x426c98
  426c82:	8d 44 24 13          	lea    eax,[esp+0x13]
  426c86:	8d 4e 14             	lea    ecx,[esi+0x14]
  426c89:	50                   	push   eax
  426c8a:	51                   	push   ecx
  426c8b:	e8 00 67 18 00       	call   0x5ad390
  426c90:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  426c93:	83 c4 08             	add    esp,0x8
  426c96:	eb 03                	jmp    0x426c9b
  426c98:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  426c9b:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  426ca1:	e8 7a 3e 1e 00       	call   0x60ab20
  426ca6:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  426caa:	89 45 30             	mov    DWORD PTR [ebp+0x30],eax
  426cad:	88 9c 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],bl
  426cb4:	e8 e7 5f 18 00       	call   0x5acca0
  426cb9:	6a 01                	push   0x1
  426cbb:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426cbf:	c6 84 24 c8 00 00 00 	mov    BYTE PTR [esp+0xc8],0x2
  426cc6:	02 
  426cc7:	e8 d4 d3 fd ff       	call   0x4040a0
  426ccc:	d9 05 50 a4 64 00    	fld    DWORD PTR ds:0x64a450
  426cd2:	d8 5d 24             	fcomp  DWORD PTR [ebp+0x24]
  426cd5:	df e0                	fnstsw ax
  426cd7:	f6 c4 41             	test   ah,0x41
  426cda:	74 14                	je     0x426cf0
  426cdc:	d9 45 24             	fld    DWORD PTR [ebp+0x24]
  426cdf:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  426ce5:	df e0                	fnstsw ax
  426ce7:	f6 c4 41             	test   ah,0x41
  426cea:	0f 85 91 00 00 00    	jne    0x426d81
  426cf0:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  426cf4:	57                   	push   edi
  426cf5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426cf9:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  426cfd:	e8 9e d3 fd ff       	call   0x4040a0
  426d02:	bf 08 fc 68 00       	mov    edi,0x68fc08
  426d07:	83 c9 ff             	or     ecx,0xffffffff
  426d0a:	33 c0                	xor    eax,eax
  426d0c:	6a 01                	push   0x1
  426d0e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  426d10:	f7 d1                	not    ecx
  426d12:	49                   	dec    ecx
  426d13:	8b d9                	mov    ebx,ecx
  426d15:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426d19:	53                   	push   ebx
  426d1a:	e8 21 ac fd ff       	call   0x401940
  426d1f:	84 c0                	test   al,al
  426d21:	74 23                	je     0x426d46
  426d23:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  426d27:	8b cb                	mov    ecx,ebx
  426d29:	8b c1                	mov    eax,ecx
  426d2b:	be 08 fc 68 00       	mov    esi,0x68fc08
  426d30:	c1 e9 02             	shr    ecx,0x2
  426d33:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  426d35:	8b c8                	mov    ecx,eax
  426d37:	53                   	push   ebx
  426d38:	83 e1 03             	and    ecx,0x3
  426d3b:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  426d3d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426d41:	e8 4a d4 fd ff       	call   0x404190
  426d46:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  426d4a:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0xe
  426d51:	0e 
  426d52:	51                   	push   ecx
  426d53:	68 89 00 00 00       	push   0x89
  426d58:	68 60 fa 68 00       	push   0x68fa60
  426d5d:	68 dc fb 68 00       	push   0x68fbdc
  426d62:	e8 89 9a 17 00       	call   0x5a07f0
  426d67:	ff d0                	call   eax
  426d69:	83 c4 10             	add    esp,0x10
  426d6c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  426d70:	c6 84 24 c4 00 00 00 	mov    BYTE PTR [esp+0xc4],0x2
  426d77:	02 
  426d78:	6a 01                	push   0x1
  426d7a:	e8 21 d3 fd ff       	call   0x4040a0
  426d7f:	33 ff                	xor    edi,edi
  426d81:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  426d85:	5b                   	pop    ebx
  426d86:	3b cf                	cmp    ecx,edi
  426d88:	74 1c                	je     0x426da6
  426d8a:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  426d8d:	84 c0                	test   al,al
  426d8f:	74 0b                	je     0x426d9c
  426d91:	3c ff                	cmp    al,0xff
  426d93:	74 07                	je     0x426d9c
  426d95:	fe c8                	dec    al
  426d97:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  426d9a:	eb 0a                	jmp    0x426da6
  426d9c:	49                   	dec    ecx
  426d9d:	51                   	push   ecx
  426d9e:	e8 4d 78 1d 00       	call   0x5fe5f0
  426da3:	83 c4 04             	add    esp,0x4
  426da6:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  426daa:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  426dae:	3b cf                	cmp    ecx,edi
  426db0:	89 7c 24 28          	mov    DWORD PTR [esp+0x28],edi
  426db4:	89 7c 24 2c          	mov    DWORD PTR [esp+0x2c],edi
  426db8:	74 1c                	je     0x426dd6
  426dba:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  426dbd:	84 c0                	test   al,al
  426dbf:	74 0b                	je     0x426dcc
  426dc1:	3c ff                	cmp    al,0xff
  426dc3:	74 07                	je     0x426dcc
  426dc5:	fe c8                	dec    al
  426dc7:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  426dca:	eb 0a                	jmp    0x426dd6
  426dcc:	49                   	dec    ecx
  426dcd:	51                   	push   ecx
  426dce:	e8 1d 78 1d 00       	call   0x5fe5f0
  426dd3:	83 c4 04             	add    esp,0x4
  426dd6:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  426ddd:	5f                   	pop    edi
  426dde:	8b c5                	mov    eax,ebp
  426de0:	5e                   	pop    esi
  426de1:	5d                   	pop    ebp
  426de2:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  426de9:	81 c4 b8 00 00 00    	add    esp,0xb8
  426def:	c2 04 00             	ret    0x4
  426df2:	90                   	nop
  426df3:	90                   	nop
  426df4:	90                   	nop
  426df5:	90                   	nop
  426df6:	90                   	nop
  426df7:	90                   	nop
  426df8:	90                   	nop
  426df9:	90                   	nop
  426dfa:	90                   	nop
  426dfb:	90                   	nop
  426dfc:	90                   	nop
  426dfd:	90                   	nop
  426dfe:	90                   	nop
  426dff:	90                   	nop
  426e00:	6a ff                	push   0xffffffff
  426e02:	68 34 2b 62 00       	push   0x622b34
  426e07:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  426e0d:	50                   	push   eax
  426e0e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  426e15:	81 ec a4 00 00 00    	sub    esp,0xa4
  426e1b:	8b                   	.byte 0x8b
  426e1c:	84 24 b4             	test   BYTE PTR [esp+esi*4],ah
	...

/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00426e20 <.text+0x25e20>:
  426e20:	00 00                	add    BYTE PTR [eax],al
  426e22:	53                   	push   ebx
  426e23:	56                   	push   esi
  426e24:	57                   	push   edi
  426e25:	8b f1                	mov    esi,ecx
  426e27:	50                   	push   eax
  426e28:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  426e2c:	e8 ef e3 ff ff       	call   0x425220
  426e31:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  426e35:	33 db                	xor    ebx,ebx
  426e37:	51                   	push   ecx
  426e38:	8b ce                	mov    ecx,esi
  426e3a:	89 9c 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],ebx
  426e41:	c7 06 a8 bd 64 00    	mov    DWORD PTR [esi],0x64bda8
  426e47:	e8 44 e5 ff ff       	call   0x425390
  426e4c:	8d 54 24 20          	lea    edx,[esp+0x20]
  426e50:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x1
  426e57:	01 
  426e58:	52                   	push   edx
  426e59:	e8 12 e7 ff ff       	call   0x425570
  426e5e:	83 c4 04             	add    esp,0x4
  426e61:	8a 44 24 0f          	mov    al,BYTE PTR [esp+0xf]
  426e65:	bf cc fc 68 00       	mov    edi,0x68fccc
  426e6a:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  426e6e:	83 c9 ff             	or     ecx,0xffffffff
  426e71:	33 c0                	xor    eax,eax
  426e73:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x2
  426e7a:	02 
  426e7b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  426e7d:	f7 d1                	not    ecx
  426e7f:	49                   	dec    ecx
  426e80:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  426e84:	51                   	push   ecx
  426e85:	68 cc fc 68 00       	push   0x68fccc
  426e8a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  426e8e:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  426e92:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  426e96:	e8 55 d2 fd ff       	call   0x4040f0
  426e9b:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  426e9f:	53                   	push   ebx
  426ea0:	51                   	push   ecx
  426ea1:	8d 54 24 28          	lea    edx,[esp+0x28]
  426ea5:	6a 01                	push   0x1
  426ea7:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  426eab:	52                   	push   edx
  426eac:	50                   	push   eax
  426ead:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  426eb1:	c6 84 24 cc 00 00 00 	mov    BYTE PTR [esp+0xcc],0x3
  426eb8:	03 
  426eb9:	e8 12 5b 18 00       	call   0x5ac9d0
  426ebe:	8b f8                	mov    edi,eax
  426ec0:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  426ec3:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  426ec9:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x4
  426ed0:	04 
  426ed1:	df e0                	fnstsw ax
  426ed3:	f6 c4 40             	test   ah,0x40
  426ed6:	74 16                	je     0x426eee
  426ed8:	8d 4c 24 0f          	lea    ecx,[esp+0xf]
  426edc:	8d 57 14             	lea    edx,[edi+0x14]
  426edf:	51                   	push   ecx
  426ee0:	52                   	push   edx
  426ee1:	e8 aa 64 18 00       	call   0x5ad390
  426ee6:	d9 57 60             	fst    DWORD PTR [edi+0x60]
  426ee9:	83 c4 08             	add    esp,0x8
  426eec:	eb 03                	jmp    0x426ef1
  426eee:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  426ef1:	d9 5e 24             	fstp   DWORD PTR [esi+0x24]
  426ef4:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  426ef8:	c6 84 24 b8 00 00 00 	mov    BYTE PTR [esp+0xb8],0x3
  426eff:	03 
  426f00:	e8 9b 5d 18 00       	call   0x5acca0
  426f05:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  426f09:	3b c3                	cmp    eax,ebx
  426f0b:	74 1d                	je     0x426f2a
  426f0d:	8d 48 ff             	lea    ecx,[eax-0x1]
  426f10:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  426f13:	3a c3                	cmp    al,bl
  426f15:	74 0a                	je     0x426f21
  426f17:	3c ff                	cmp    al,0xff
  426f19:	74 06                	je     0x426f21
  426f1b:	fe c8                	dec    al
  426f1d:	88 01                	mov    BYTE PTR [ecx],al
  426f1f:	eb 09                	jmp    0x426f2a
  426f21:	51                   	push   ecx
  426f22:	e8 c9 76 1d 00       	call   0x5fe5f0
  426f27:	83 c4 04             	add    esp,0x4
  426f2a:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  426f2e:	3b cb                	cmp    ecx,ebx
  426f30:	74 1c                	je     0x426f4e
  426f32:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  426f35:	3a c3                	cmp    al,bl
  426f37:	74 0b                	je     0x426f44
  426f39:	3c ff                	cmp    al,0xff
  426f3b:	74 07                	je     0x426f44
  426f3d:	fe c8                	dec    al
  426f3f:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  426f42:	eb 0a                	jmp    0x426f4e
  426f44:	49                   	dec    ecx
  426f45:	51                   	push   ecx
  426f46:	e8 a5 76 1d 00       	call   0x5fe5f0
  426f4b:	83 c4 04             	add    esp,0x4
  426f4e:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  426f52:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  426f56:	3b cb                	cmp    ecx,ebx
  426f58:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  426f5c:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  426f60:	74 1c                	je     0x426f7e
  426f62:	8a 41 ff             	mov    al,BYTE PTR [ecx-0x1]
  426f65:	3a c3                	cmp    al,bl
  426f67:	74 0b                	je     0x426f74
  426f69:	3c ff                	cmp    al,0xff
  426f6b:	74 07                	je     0x426f74
  426f6d:	fe c8                	dec    al
  426f6f:	88 41 ff             	mov    BYTE PTR [ecx-0x1],al
  426f72:	eb 0a                	jmp    0x426f7e
  426f74:	49                   	dec    ecx
  426f75:	51                   	push   ecx
  426f76:	e8 75 76 1d 00       	call   0x5fe5f0
  426f7b:	83 c4 04             	add    esp,0x4
  426f7e:	8b 8c 24 b0 00 00 00 	mov    ecx,DWORD PTR [esp+0xb0]
  426f85:	8b c6                	mov    eax,esi
  426f87:	5f                   	pop    edi
  426f88:	5e                   	pop    esi
  426f89:	5b                   	pop    ebx
  426f8a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  426f91:	81 c4 b0 00 00 00    	add    esp,0xb0
  426f97:	c2 04 00             	ret    0x4
  426f9a:	90                   	nop
  426f9b:	90                   	nop
  426f9c:	90                   	nop
  426f9d:	90                   	nop
  426f9e:	90                   	nop
  426f9f:	90                   	nop
  426fa0:	56                   	push   esi
  426fa1:	8b f1                	mov    esi,ecx
  426fa3:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  426fa6:	85 c0                	test   eax,eax
  426fa8:	74 1d                	je     0x426fc7
  426faa:	8d 48 ff             	lea    ecx,[eax-0x1]
  426fad:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  426fb0:	84 c0                	test   al,al
  426fb2:	74 0a                	je     0x426fbe
  426fb4:	3c ff                	cmp    al,0xff
  426fb6:	74 06                	je     0x426fbe
  426fb8:	fe c8                	dec    al
  426fba:	88 01                	mov    BYTE PTR [ecx],al
  426fbc:	eb 09                	jmp    0x426fc7
  426fbe:	51                   	push   ecx
  426fbf:	e8 2c 76 1d 00       	call   0x5fe5f0
  426fc4:	83 c4 04             	add    esp,0x4
  426fc7:	8b ce                	mov    ecx,esi
  426fc9:	c7 46 18 00 00 00 00 	mov    DWORD PTR [esi+0x18],0x0
  426fd0:	c7 46 1c 00 00 00 00 	mov    DWORD PTR [esi+0x1c],0x0
  426fd7:	c7 46 20 00 00 00 00 	mov    DWORD PTR [esi+0x20],0x0
  426fde:	e8 ed 44 18 00       	call   0x5ab4d0
  426fe3:	5e                   	pop    esi
  426fe4:	c3                   	ret
  426fe5:	90                   	nop
  426fe6:	90                   	nop
  426fe7:	90                   	nop
  426fe8:	90                   	nop
  426fe9:	90                   	nop
  426fea:	90                   	nop
  426feb:	90                   	nop
  426fec:	90                   	nop
  426fed:	90                   	nop
  426fee:	90                   	nop
  426fef:	90                   	nop
  426ff0:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  426ff6:	b0 01                	mov    al,0x1
  426ff8:	84 c8                	test   al,cl
  426ffa:	75 08                	jne    0x427004
  426ffc:	0a c8                	or     cl,al
  426ffe:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  427004:	e9 07 00 00 00       	jmp    0x427010
  427009:	90                   	nop
  42700a:	90                   	nop
  42700b:	90                   	nop
  42700c:	90                   	nop
  42700d:	90                   	nop
  42700e:	90                   	nop
  42700f:	90                   	nop
  427010:	68 a0 1b 40 00       	push   0x401ba0
  427015:	e8 61 35 1e 00       	call   0x60a57b
  42701a:	59                   	pop    ecx
  42701b:	c3                   	ret
  42701c:	90                   	nop
  42701d:	90                   	nop
  42701e:	90                   	nop
  42701f:	90                   	nop
  427020:	e8 0b 00 00 00       	call   0x427030
  427025:	e9 e6 00 00 00       	jmp    0x427110
  42702a:	90                   	nop
  42702b:	90                   	nop
  42702c:	90                   	nop
  42702d:	90                   	nop
  42702e:	90                   	nop
  42702f:	90                   	nop
  427030:	6a ff                	push   0xffffffff
  427032:	68 48 2b 62 00       	push   0x622b48
  427037:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42703d:	50                   	push   eax
  42703e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  427045:	83 ec 14             	sub    esp,0x14
  427048:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  42704c:	53                   	push   ebx
  42704d:	55                   	push   ebp
  42704e:	57                   	push   edi
  42704f:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  427053:	bf f8 fc 68 00       	mov    edi,0x68fcf8
  427058:	83 c9 ff             	or     ecx,0xffffffff
  42705b:	33 c0                	xor    eax,eax
  42705d:	33 db                	xor    ebx,ebx
  42705f:	6a 01                	push   0x1
  427061:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  427063:	f7 d1                	not    ecx
  427065:	49                   	dec    ecx
  427066:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  42706a:	8b e9                	mov    ebp,ecx
  42706c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  427070:	55                   	push   ebp
  427071:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  427075:	89 5c 24 24          	mov    DWORD PTR [esp+0x24],ebx
  427079:	e8 c2 a8 fd ff       	call   0x401940
  42707e:	84 c0                	test   al,al
  427080:	74 26                	je     0x4270a8
  427082:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  427086:	8b cd                	mov    ecx,ebp
  427088:	8b d1                	mov    edx,ecx
  42708a:	56                   	push   esi
  42708b:	be f8 fc 68 00       	mov    esi,0x68fcf8
  427090:	c1 e9 02             	shr    ecx,0x2
  427093:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  427095:	8b ca                	mov    ecx,edx
  427097:	83 e1 03             	and    ecx,0x3
  42709a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42709c:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  4270a0:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  4270a4:	5e                   	pop    esi
  4270a5:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  4270a8:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4270ac:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  4270b0:	51                   	push   ecx
  4270b1:	b9 30 52 6b 00       	mov    ecx,0x6b5230
  4270b6:	e8 e5 00 14 00       	call   0x5671a0
  4270bb:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4270bf:	3b c3                	cmp    eax,ebx
  4270c1:	74 2d                	je     0x4270f0
  4270c3:	8d 48 ff             	lea    ecx,[eax-0x1]
  4270c6:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4270c9:	3a c3                	cmp    al,bl
  4270cb:	74 1a                	je     0x4270e7
  4270cd:	3c ff                	cmp    al,0xff
  4270cf:	74 16                	je     0x4270e7
  4270d1:	fe c8                	dec    al
  4270d3:	5f                   	pop    edi
  4270d4:	5d                   	pop    ebp
  4270d5:	88 01                	mov    BYTE PTR [ecx],al
  4270d7:	5b                   	pop    ebx
  4270d8:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4270dc:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4270e3:	83 c4 20             	add    esp,0x20
  4270e6:	c3                   	ret
  4270e7:	51                   	push   ecx
  4270e8:	e8 03 75 1d 00       	call   0x5fe5f0
  4270ed:	83 c4 04             	add    esp,0x4
  4270f0:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  4270f4:	5f                   	pop    edi
  4270f5:	5d                   	pop    ebp
  4270f6:	5b                   	pop    ebx
  4270f7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4270fe:	83                   	.byte 0x83
  4270ff:	c4                   	.byte 0xc4
