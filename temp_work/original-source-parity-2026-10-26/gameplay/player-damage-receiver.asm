
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00433820 <.text+0x32820>:
  433820:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  433826:	6a ff                	push   0xffffffff
  433828:	d9 44 24 08          	fld    DWORD PTR [esp+0x8]
  43382c:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  433832:	68 90 3b 62 00       	push   0x623b90
  433837:	50                   	push   eax
  433838:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  43383f:	81 ec a8 00 00 00    	sub    esp,0xa8
  433845:	df e0                	fnstsw ax
  433847:	53                   	push   ebx
  433848:	55                   	push   ebp
  433849:	56                   	push   esi
  43384a:	57                   	push   edi
  43384b:	f6 c4 01             	test   ah,0x1
  43384e:	8b f1                	mov    esi,ecx
  433850:	74 70                	je     0x4338c2
  433852:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433856:	6a 00                	push   0x0
  433858:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  43385c:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433860:	e8 3b 08 fd ff       	call   0x4040a0
  433865:	83 cd ff             	or     ebp,0xffffffff
  433868:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  43386d:	8b cd                	mov    ecx,ebp
  43386f:	33 c0                	xor    eax,eax
  433871:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433873:	f7 d1                	not    ecx
  433875:	49                   	dec    ecx
  433876:	51                   	push   ecx
  433877:	68 70 3f 6b 00       	push   0x6b3f70
  43387c:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433880:	e8 6b 08 fd ff       	call   0x4040f0
  433885:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433889:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x0
  433890:	00 00 00 00 
  433894:	51                   	push   ecx
  433895:	68 58 03 00 00       	push   0x358
  43389a:	68 28 03 69 00       	push   0x690328
  43389f:	68 a0 04 69 00       	push   0x6904a0
  4338a4:	e8 47 cf 16 00       	call   0x5a07f0
  4338a9:	ff d0                	call   eax
  4338ab:	83 c4 10             	add    esp,0x10
  4338ae:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4338b2:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  4338b9:	6a 01                	push   0x1
  4338bb:	e8 e0 07 fd ff       	call   0x4040a0
  4338c0:	eb 03                	jmp    0x4338c5
  4338c2:	83 cd ff             	or     ebp,0xffffffff
  4338c5:	8b bc 24 cc 00 00 00 	mov    edi,DWORD PTR [esp+0xcc]
  4338cc:	85 ff                	test   edi,edi
  4338ce:	0f 84 7e 02 00 00    	je     0x433b52
  4338d4:	8b 17                	mov    edx,DWORD PTR [edi]
  4338d6:	8d 44 24 60          	lea    eax,[esp+0x60]
  4338da:	50                   	push   eax
  4338db:	8b cf                	mov    ecx,edi
  4338dd:	ff 52 48             	call   DWORD PTR [edx+0x48]
  4338e0:	8b c8                	mov    ecx,eax
  4338e2:	e8 e9 f6 17 00       	call   0x5b2fd0
  4338e7:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4338ed:	df e0                	fnstsw ax
  4338ef:	f6 c4 41             	test   ah,0x41
  4338f2:	0f 85 5a 02 00 00    	jne    0x433b52
  4338f8:	8b 17                	mov    edx,DWORD PTR [edi]
  4338fa:	8d 44 24 2c          	lea    eax,[esp+0x2c]
  4338fe:	50                   	push   eax
  4338ff:	8b cf                	mov    ecx,edi
  433901:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433904:	8b 16                	mov    edx,DWORD PTR [esi]
  433906:	50                   	push   eax
  433907:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  43390b:	8b ce                	mov    ecx,esi
  43390d:	50                   	push   eax
  43390e:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433911:	50                   	push   eax
  433912:	e8 e9 dc 17 00       	call   0x5b1600
  433917:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  43391b:	83 c4 08             	add    esp,0x8
  43391e:	8b ce                	mov    ecx,esi
  433920:	e8 3b 30 0a 00       	call   0x4d6960
  433925:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  433929:	d8 e1                	fsub   st,st(1)
  43392b:	51                   	push   ecx
  43392c:	d9 1c 24             	fstp   DWORD PTR [esp]
  43392f:	dd d8                	fstp   st(0)
  433931:	e8 fa dc 17 00       	call   0x5b1630
  433936:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  43393a:	d9 05 20 c4 64 00    	fld    DWORD PTR ds:0x64c420
  433940:	d8 8c 24 cc 00 00 00 	fmul   DWORD PTR [esp+0xcc]
  433947:	8b 16                	mov    edx,DWORD PTR [esi]
  433949:	83 c4 04             	add    esp,0x4
  43394c:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  433950:	8d 44 24 18          	lea    eax,[esp+0x18]
  433954:	d8 0d 74 c5 64 00    	fmul   DWORD PTR ds:0x64c574
  43395a:	51                   	push   ecx
  43395b:	50                   	push   eax
  43395c:	8b ce                	mov    ecx,esi
  43395e:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  433962:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433965:	8b 17                	mov    edx,DWORD PTR [edi]
  433967:	8b d8                	mov    ebx,eax
  433969:	8d 44 24 30          	lea    eax,[esp+0x30]
  43396d:	8b cf                	mov    ecx,edi
  43396f:	50                   	push   eax
  433970:	ff 52 48             	call   DWORD PTR [edx+0x48]
  433973:	8b c8                	mov    ecx,eax
  433975:	8b d3                	mov    edx,ebx
  433977:	e8 64 f6 17 00       	call   0x5b2fe0
  43397c:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  433980:	8d 54 24 6c          	lea    edx,[esp+0x6c]
  433984:	51                   	push   ecx
  433985:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  433989:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  433990:	00 
  433991:	c7 44 24 4c 00 00 80 	mov    DWORD PTR [esp+0x4c],0x3f800000
  433998:	3f 
  433999:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
  4339a0:	00 
  4339a1:	e8 ba f4 17 00       	call   0x5b2e60
  4339a6:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4339aa:	e8 21 f6 17 00       	call   0x5b2fd0
  4339af:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  4339b5:	df e0                	fnstsw ax
  4339b7:	f6 c4 40             	test   ah,0x40
  4339ba:	74 34                	je     0x4339f0
  4339bc:	c7 44 24 2c 00 00 80 	mov    DWORD PTR [esp+0x2c],0x3f800000
  4339c3:	3f 
  4339c4:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  4339c8:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  4339cf:	00 
  4339d0:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  4339d4:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  4339db:	00 
  4339dc:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4339e0:	dd d8                	fstp   st(0)
  4339e2:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  4339e6:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
  4339ea:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  4339ee:	eb 1b                	jmp    0x433a0b
  4339f0:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  4339f6:	d8 f1                	fdiv   st,st(1)
  4339f8:	51                   	push   ecx
  4339f9:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  4339fd:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  433a01:	d9 1c 24             	fstp   DWORD PTR [esp]
  433a04:	dd d8                	fstp   st(0)
  433a06:	e8 95 f5 17 00       	call   0x5b2fa0
  433a0b:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  433a0f:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  433a13:	52                   	push   edx
  433a14:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  433a18:	e8 23 1b 18 00       	call   0x5b5540
  433a1d:	8d 94 24 88 00 00 00 	lea    edx,[esp+0x88]
  433a24:	8d 4c 24 78          	lea    ecx,[esp+0x78]
  433a28:	e8 f3 1e 18 00       	call   0x5b5920
  433a2d:	8d 54 24 60          	lea    edx,[esp+0x60]
  433a31:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  433a38:	e8 63 fd 17 00       	call   0x5b37a0
  433a3d:	8b 86 f0 01 00 00    	mov    eax,DWORD PTR [esi+0x1f0]
  433a43:	85 c0                	test   eax,eax
  433a45:	75 6b                	jne    0x433ab2
  433a47:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433a4b:	6a 00                	push   0x0
  433a4d:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433a51:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433a55:	e8 46 06 fd ff       	call   0x4040a0
  433a5a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433a5f:	8b cd                	mov    ecx,ebp
  433a61:	33 c0                	xor    eax,eax
  433a63:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433a65:	f7 d1                	not    ecx
  433a67:	49                   	dec    ecx
  433a68:	51                   	push   ecx
  433a69:	68 70 3f 6b 00       	push   0x6b3f70
  433a6e:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433a72:	e8 79 06 fd ff       	call   0x4040f0
  433a77:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433a7b:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x1
  433a82:	01 00 00 00 
  433a86:	51                   	push   ecx
  433a87:	68 5b 01 00 00       	push   0x15b
  433a8c:	68 88 f9 68 00       	push   0x68f988
  433a91:	68 70 f9 68 00       	push   0x68f970
  433a96:	e8 55 cd 16 00       	call   0x5a07f0
  433a9b:	ff d0                	call   eax
  433a9d:	83 c4 10             	add    esp,0x10
  433aa0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433aa4:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433aab:	6a 01                	push   0x1
  433aad:	e8 ee 05 fd ff       	call   0x4040a0
  433ab2:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
  433ab8:	e8 53 f2 fc ff       	call   0x402d10
  433abd:	84 c0                	test   al,al
  433abf:	75 0c                	jne    0x433acd
  433ac1:	8d 54 24 60          	lea    edx,[esp+0x60]
  433ac5:	8b ce                	mov    ecx,esi
  433ac7:	52                   	push   edx
  433ac8:	e8 f3 59 0a 00       	call   0x4d94c0
  433acd:	8b 86 f4 01 00 00    	mov    eax,DWORD PTR [esi+0x1f4]
  433ad3:	85 c0                	test   eax,eax
  433ad5:	75 6b                	jne    0x433b42
  433ad7:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433adb:	6a 00                	push   0x0
  433add:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433ae1:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433ae5:	e8 b6 05 fd ff       	call   0x4040a0
  433aea:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433aef:	8b cd                	mov    ecx,ebp
  433af1:	33 c0                	xor    eax,eax
  433af3:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433af5:	f7 d1                	not    ecx
  433af7:	49                   	dec    ecx
  433af8:	51                   	push   ecx
  433af9:	68 70 3f 6b 00       	push   0x6b3f70
  433afe:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433b02:	e8 e9 05 fd ff       	call   0x4040f0
  433b07:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433b0b:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x2
  433b12:	02 00 00 00 
  433b16:	51                   	push   ecx
  433b17:	68 61 01 00 00       	push   0x161
  433b1c:	68 88 f9 68 00       	push   0x68f988
  433b21:	68 10 04 69 00       	push   0x690410
  433b26:	e8 c5 cc 16 00       	call   0x5a07f0
  433b2b:	ff d0                	call   eax
  433b2d:	83 c4 10             	add    esp,0x10
  433b30:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433b34:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433b3b:	6a 01                	push   0x1
  433b3d:	e8 5e 05 fd ff       	call   0x4040a0
  433b42:	8b 8e f4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f4]
  433b48:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  433b4c:	50                   	push   eax
  433b4d:	8b 11                	mov    edx,DWORD PTR [ecx]
  433b4f:	ff 52 20             	call   DWORD PTR [edx+0x20]
  433b52:	8b ce                	mov    ecx,esi
  433b54:	e8 27 98 0a 00       	call   0x4dd380
  433b59:	84 c0                	test   al,al
  433b5b:	0f 85 49 04 00 00    	jne    0x433faa
  433b61:	8a 86 3c 02 00 00    	mov    al,BYTE PTR [esi+0x23c]
  433b67:	84 c0                	test   al,al
  433b69:	0f 85 3b 04 00 00    	jne    0x433faa
  433b6f:	8b 86 f0 01 00 00    	mov    eax,DWORD PTR [esi+0x1f0]
  433b75:	85 c0                	test   eax,eax
  433b77:	75 4e                	jne    0x433bc7
  433b79:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  433b7d:	51                   	push   ecx
  433b7e:	68 70 3f 6b 00       	push   0x6b3f70
  433b83:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433b87:	e8 84 5c fd ff       	call   0x409810
  433b8c:	8d 54 24 18          	lea    edx,[esp+0x18]
  433b90:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x3
  433b97:	03 00 00 00 
  433b9b:	52                   	push   edx
  433b9c:	68 5b 01 00 00       	push   0x15b
  433ba1:	68 88 f9 68 00       	push   0x68f988
  433ba6:	68 70 f9 68 00       	push   0x68f970
  433bab:	e8 40 cc 16 00       	call   0x5a07f0
  433bb0:	ff d0                	call   eax
  433bb2:	83 c4 10             	add    esp,0x10
  433bb5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433bb9:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433bc0:	6a 01                	push   0x1
  433bc2:	e8 d9 04 fd ff       	call   0x4040a0
  433bc7:	8b 8e f0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f0]
  433bcd:	6a 00                	push   0x0
  433bcf:	d9 84 24 cc 00 00 00 	fld    DWORD PTR [esp+0xcc]
  433bd6:	8b 01                	mov    eax,DWORD PTR [ecx]
  433bd8:	6a 00                	push   0x0
  433bda:	51                   	push   ecx
  433bdb:	d9 e0                	fchs
  433bdd:	d9 1c 24             	fstp   DWORD PTR [esp]
  433be0:	ff 50 20             	call   DWORD PTR [eax+0x20]
  433be3:	84 c0                	test   al,al
  433be5:	0f 84 bf 03 00 00    	je     0x433faa
  433beb:	8b ce                	mov    ecx,esi
  433bed:	e8 8e 97 0a 00       	call   0x4dd380
  433bf2:	84 c0                	test   al,al
  433bf4:	0f 84 18 01 00 00    	je     0x433d12
  433bfa:	8b 8e 50 02 00 00    	mov    ecx,DWORD PTR [esi+0x250]
  433c00:	6a 05                	push   0x5
  433c02:	e8 c9 53 02 00       	call   0x458fd0
  433c07:	a1 48 58 6b 00       	mov    eax,ds:0x6b5848
  433c0c:	85 c0                	test   eax,eax
  433c0e:	0f 85 bd 00 00 00    	jne    0x433cd1
  433c14:	8b 1d e0 8d 6c 00    	mov    ebx,DWORD PTR ds:0x6c8de0
  433c1a:	85 db                	test   ebx,ebx
  433c1c:	75 07                	jne    0x433c25
  433c1e:	e8 5d 76 12 00       	call   0x55b280
  433c23:	8b d8                	mov    ebx,eax
  433c25:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  433c2b:	85 c0                	test   eax,eax
  433c2d:	75 6b                	jne    0x433c9a
  433c2f:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  433c33:	6a 00                	push   0x0
  433c35:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  433c39:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433c3d:	e8 5e 04 fd ff       	call   0x4040a0
  433c42:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433c47:	8b cd                	mov    ecx,ebp
  433c49:	33 c0                	xor    eax,eax
  433c4b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433c4d:	f7 d1                	not    ecx
  433c4f:	49                   	dec    ecx
  433c50:	51                   	push   ecx
  433c51:	68 70 3f 6b 00       	push   0x6b3f70
  433c56:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433c5a:	e8 91 04 fd ff       	call   0x4040f0
  433c5f:	8d 54 24 18          	lea    edx,[esp+0x18]
  433c63:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x4
  433c6a:	04 00 00 00 
  433c6e:	52                   	push   edx
  433c6f:	68 8f 01 00 00       	push   0x18f
  433c74:	68 58 eb 68 00       	push   0x68eb58
  433c79:	68 ec f8 68 00       	push   0x68f8ec
  433c7e:	e8 6d cb 16 00       	call   0x5a07f0
  433c83:	ff d0                	call   eax
  433c85:	83 c4 10             	add    esp,0x10
  433c88:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433c8c:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433c93:	6a 01                	push   0x1
  433c95:	e8 06 04 fd ff       	call   0x4040a0
  433c9a:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  433ca0:	6a 00                	push   0x0
  433ca2:	6a 00                	push   0x0
  433ca4:	68 00 00 80 3f       	push   0x3f800000
  433ca9:	6a 00                	push   0x0
  433cab:	8d 44 24 38          	lea    eax,[esp+0x38]
  433caf:	68 60 53 6b 00       	push   0x6b5360
  433cb4:	50                   	push   eax
  433cb5:	e8 26 c3 11 00       	call   0x54ffe0
  433cba:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  433cbe:	85 c9                	test   ecx,ecx
  433cc0:	74 05                	je     0x433cc7
  433cc2:	e8 09 5c fd ff       	call   0x4098d0
  433cc7:	c7 05 48 58 6b 00 01 	mov    DWORD PTR ds:0x6b5848,0x1
  433cce:	00 00 00 
  433cd1:	b8 e8 03 00 00       	mov    eax,0x3e8
  433cd6:	b9 00 00 80 3f       	mov    ecx,0x3f800000
  433cdb:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
  433ce1:	89 ae 14 01 00 00    	mov    DWORD PTR [esi+0x114],ebp
  433ce7:	89 8e 18 01 00 00    	mov    DWORD PTR [esi+0x118],ecx
  433ced:	c6 86 1c 01 00 00 01 	mov    BYTE PTR [esi+0x11c],0x1
  433cf4:	89 86 20 01 00 00    	mov    DWORD PTR [esi+0x120],eax
  433cfa:	89 ae 24 01 00 00    	mov    DWORD PTR [esi+0x124],ebp
  433d00:	89 8e 28 01 00 00    	mov    DWORD PTR [esi+0x128],ecx
  433d06:	c6 86 2c 01 00 00 01 	mov    BYTE PTR [esi+0x12c],0x1
  433d0d:	e9 98 02 00 00       	jmp    0x433faa
  433d12:	8d 9e 14 02 00 00    	lea    ebx,[esi+0x214]
  433d18:	c7 05 48 58 6b 00 00 	mov    DWORD PTR ds:0x6b5848,0x0
  433d1f:	00 00 00 
  433d22:	8b 03                	mov    eax,DWORD PTR [ebx]
  433d24:	85 c0                	test   eax,eax
  433d26:	74 61                	je     0x433d89
  433d28:	85 c0                	test   eax,eax
  433d2a:	75 4e                	jne    0x433d7a
  433d2c:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  433d30:	51                   	push   ecx
  433d31:	68 70 3f 6b 00       	push   0x6b3f70
  433d36:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433d3a:	e8 d1 5a fd ff       	call   0x409810
  433d3f:	8d 54 24 18          	lea    edx,[esp+0x18]
  433d43:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x7
  433d4a:	07 00 00 00 
  433d4e:	52                   	push   edx
  433d4f:	68 b6 00 00 00       	push   0xb6
  433d54:	68 38 d6 68 00       	push   0x68d638
  433d59:	68 2c d6 68 00       	push   0x68d62c
  433d5e:	e8 8d ca 16 00       	call   0x5a07f0
  433d63:	ff d0                	call   eax
  433d65:	83 c4 10             	add    esp,0x10
  433d68:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433d6c:	89 ac 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebp
  433d73:	6a 01                	push   0x1
  433d75:	e8 26 03 fd ff       	call   0x4040a0
  433d7a:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  433d7c:	e8 5f f3 11 00       	call   0x5530e0
  433d81:	84 c0                	test   al,al
  433d83:	0f 85 21 02 00 00    	jne    0x433faa
  433d89:	8a 86 24 02 00 00    	mov    al,BYTE PTR [esi+0x224]
  433d8f:	84 c0                	test   al,al
  433d91:	0f 85 13 02 00 00    	jne    0x433faa
  433d97:	d9 84 24 c8 00 00 00 	fld    DWORD PTR [esp+0xc8]
  433d9e:	d8 1d 1c c4 64 00    	fcomp  DWORD PTR ds:0x64c41c
  433da4:	df e0                	fnstsw ax
  433da6:	f6 c4 01             	test   ah,0x1
  433da9:	75 0a                	jne    0x433db5
  433dab:	c7 44 24 14 88 53 6b 	mov    DWORD PTR [esp+0x14],0x6b5388
  433db2:	00 
  433db3:	eb 3e                	jmp    0x433df3
  433db5:	d9 84 24 c8 00 00 00 	fld    DWORD PTR [esp+0xc8]
  433dbc:	d8 1d 18 c4 64 00    	fcomp  DWORD PTR ds:0x64c418
  433dc2:	df e0                	fnstsw ax
  433dc4:	f6 c4 01             	test   ah,0x1
  433dc7:	75 0a                	jne    0x433dd3
  433dc9:	c7 44 24 14 b0 53 6b 	mov    DWORD PTR [esp+0x14],0x6b53b0
  433dd0:	00 
  433dd1:	eb 20                	jmp    0x433df3
  433dd3:	d9 84 24 c8 00 00 00 	fld    DWORD PTR [esp+0xc8]
  433dda:	d8 1d 14 c4 64 00    	fcomp  DWORD PTR ds:0x64c414
  433de0:	df e0                	fnstsw ax
  433de2:	f6 c4 01             	test   ah,0x1
  433de5:	0f 85 bf 01 00 00    	jne    0x433faa
  433deb:	c7 44 24 14 d8 53 6b 	mov    DWORD PTR [esp+0x14],0x6b53d8
  433df2:	00 
  433df3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  433df7:	85 c0                	test   eax,eax
  433df9:	0f 84 ab 01 00 00    	je     0x433faa
  433dff:	8b 2d e0 8d 6c 00    	mov    ebp,DWORD PTR ds:0x6c8de0
  433e05:	85 ed                	test   ebp,ebp
  433e07:	75 07                	jne    0x433e10
  433e09:	e8 72 74 12 00       	call   0x55b280
  433e0e:	8b e8                	mov    ebp,eax
  433e10:	8b 85 fc 00 00 00    	mov    eax,DWORD PTR [ebp+0xfc]
  433e16:	85 c0                	test   eax,eax
  433e18:	75 70                	jne    0x433e8a
  433e1a:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  433e1e:	6a 00                	push   0x0
  433e20:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  433e24:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  433e28:	e8 73 02 fd ff       	call   0x4040a0
  433e2d:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433e32:	83 c9 ff             	or     ecx,0xffffffff
  433e35:	33 c0                	xor    eax,eax
  433e37:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433e39:	f7 d1                	not    ecx
  433e3b:	49                   	dec    ecx
  433e3c:	51                   	push   ecx
  433e3d:	68 70 3f 6b 00       	push   0x6b3f70
  433e42:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  433e46:	e8 a5 02 fd ff       	call   0x4040f0
  433e4b:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433e4f:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x8
  433e56:	08 00 00 00 
  433e5a:	51                   	push   ecx
  433e5b:	68 8f 01 00 00       	push   0x18f
  433e60:	68 58 eb 68 00       	push   0x68eb58
  433e65:	68 ec f8 68 00       	push   0x68f8ec
  433e6a:	e8 81 c9 16 00       	call   0x5a07f0
  433e6f:	ff d0                	call   eax
  433e71:	83 c4 10             	add    esp,0x10
  433e74:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  433e78:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0xffffffff
  433e7f:	ff ff ff ff 
  433e83:	6a 01                	push   0x1
  433e85:	e8 16 02 fd ff       	call   0x4040a0
  433e8a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  433e8e:	8b 8d fc 00 00 00    	mov    ecx,DWORD PTR [ebp+0xfc]
  433e94:	6a 00                	push   0x0
  433e96:	6a 00                	push   0x0
  433e98:	68 00 00 80 3f       	push   0x3f800000
  433e9d:	6a 00                	push   0x0
  433e9f:	8d 44 24 38          	lea    eax,[esp+0x38]
  433ea3:	52                   	push   edx
  433ea4:	50                   	push   eax
  433ea5:	e8 36 c1 11 00       	call   0x54ffe0
  433eaa:	8b f8                	mov    edi,eax
  433eac:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  433eae:	8b 07                	mov    eax,DWORD PTR [edi]
  433eb0:	3b c8                	cmp    ecx,eax
  433eb2:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x9
  433eb9:	09 00 00 00 
  433ebd:	74 1f                	je     0x433ede
  433ebf:	85 c9                	test   ecx,ecx
  433ec1:	74 10                	je     0x433ed3
  433ec3:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  433ec6:	48                   	dec    eax
  433ec7:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  433eca:	75 07                	jne    0x433ed3
  433ecc:	6a 00                	push   0x0
  433ece:	e8 ed 80 17 00       	call   0x5abfc0
  433ed3:	8b 0f                	mov    ecx,DWORD PTR [edi]
  433ed5:	89 0b                	mov    DWORD PTR [ebx],ecx
  433ed7:	8b cb                	mov    ecx,ebx
  433ed9:	e8 d2 05 15 00       	call   0x5844b0
  433ede:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  433ee2:	83 cb ff             	or     ebx,0xffffffff
  433ee5:	85 c9                	test   ecx,ecx
  433ee7:	89 9c 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebx
  433eee:	74 05                	je     0x433ef5
  433ef0:	e8 db 59 fd ff       	call   0x4098d0
  433ef5:	e8 a6 65 1d 00       	call   0x60a4a0
  433efa:	99                   	cdq
  433efb:	b9 10 27 00 00       	mov    ecx,0x2710
  433f00:	f7 f9                	idiv   ecx
  433f02:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  433f06:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  433f0a:	d8 0d 70 c5 64 00    	fmul   DWORD PTR ds:0x64c570
  433f10:	d8 05 9c b7 64 00    	fadd   DWORD PTR ds:0x64b79c
  433f16:	e8 05 6c 1d 00       	call   0x60ab20
  433f1b:	8b e8                	mov    ebp,eax
  433f1d:	3b eb                	cmp    ebp,ebx
  433f1f:	74 6c                	je     0x433f8d
  433f21:	85 ed                	test   ebp,ebp
  433f23:	7d 68                	jge    0x433f8d
  433f25:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  433f29:	6a 00                	push   0x0
  433f2b:	8d 4c 24 54          	lea    ecx,[esp+0x54]
  433f2f:	88 54 24 54          	mov    BYTE PTR [esp+0x54],dl
  433f33:	e8 68 01 fd ff       	call   0x4040a0
  433f38:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  433f3d:	8b cb                	mov    ecx,ebx
  433f3f:	33 c0                	xor    eax,eax
  433f41:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  433f43:	f7 d1                	not    ecx
  433f45:	49                   	dec    ecx
  433f46:	51                   	push   ecx
  433f47:	68 70 3f 6b 00       	push   0x6b3f70
  433f4c:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  433f50:	e8 9b 01 fd ff       	call   0x4040f0
  433f55:	8d 44 24 50          	lea    eax,[esp+0x50]
  433f59:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0xa
  433f60:	0a 00 00 00 
  433f64:	50                   	push   eax
  433f65:	6a 56                	push   0x56
  433f67:	68 c8 d4 68 00       	push   0x68d4c8
  433f6c:	68 90 d4 68 00       	push   0x68d490
  433f71:	e8 7a c8 16 00       	call   0x5a07f0
  433f76:	ff d0                	call   eax
  433f78:	83 c4 10             	add    esp,0x10
  433f7b:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  433f7f:	89 9c 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],ebx
  433f86:	6a 01                	push   0x1
  433f88:	e8 13 01 fd ff       	call   0x4040a0
  433f8d:	89 ae 18 02 00 00    	mov    DWORD PTR [esi+0x218],ebp
  433f93:	89 9e 1c 02 00 00    	mov    DWORD PTR [esi+0x21c],ebx
  433f99:	c7 86 20 02 00 00 00 	mov    DWORD PTR [esi+0x220],0x3f800000
  433fa0:	00 80 3f 
  433fa3:	c6 86 24 02 00 00 01 	mov    BYTE PTR [esi+0x224],0x1
  433faa:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  433fb1:	5f                   	pop    edi
  433fb2:	5e                   	pop    esi
  433fb3:	5d                   	pop    ebp
  433fb4:	5b                   	pop    ebx
  433fb5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  433fbc:	81                   	.byte 0x81
  433fbd:	c4                   	.byte 0xc4
  433fbe:	b4 00                	mov    ah,0x0
