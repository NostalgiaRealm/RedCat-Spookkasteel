
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047c760 <.text+0x7b760>:
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
