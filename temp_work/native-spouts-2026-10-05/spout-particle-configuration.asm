  468730:	83 ec 60             	sub    esp,0x60
  468733:	53                   	push   ebx
  468734:	55                   	push   ebp
  468735:	56                   	push   esi
  468736:	57                   	push   edi
  468737:	8b f9                	mov    edi,ecx
  468739:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
  468740:	00 
  468741:	8b 6c 24 58          	mov    ebp,DWORD PTR [esp+0x58]
  468745:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
  46874c:	00 
  46874d:	8b 87 f8 00 00 00    	mov    eax,DWORD PTR [edi+0xf8]
  468753:	8b 5c 24 5c          	mov    ebx,DWORD PTR [esp+0x5c]
  468757:	c7 44 24 60 00 00 00 	mov    DWORD PTR [esp+0x60],0x0
  46875e:	00 
  46875f:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  468766:	00 
  468767:	8d 48 08             	lea    ecx,[eax+0x8]
  46876a:	c7 44 24 54 00 00 00 	mov    DWORD PTR [esp+0x54],0x0
  468771:	00 
  468772:	8b d1                	mov    edx,ecx
  468774:	c7 44 24 40 00 00 a0 	mov    DWORD PTR [esp+0x40],0x41a00000
  46877b:	41 
  46877c:	d9 40 78             	fld    DWORD PTR [eax+0x78]
  46877f:	8b 32                	mov    esi,DWORD PTR [edx]
  468781:	c7 44 24 44 00 00 a0 	mov    DWORD PTR [esp+0x44],0x41a00000
  468788:	41 
  468789:	d8 0d 3c da 64 00    	fmul   DWORD PTR ds:0x64da3c
  46878f:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  468793:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  468796:	89 74 24 68          	mov    DWORD PTR [esp+0x68],esi
  46879a:	c7 44 24 48 00 00 a0 	mov    DWORD PTR [esp+0x48],0x41a00000
  4687a1:	41 
  4687a2:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  4687a5:	c7 44 24 28 db 0f c9 	mov    DWORD PTR [esp+0x28],0x3fc90fdb
  4687ac:	3f 
  4687ad:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
  4687b1:	8b 50 54             	mov    edx,DWORD PTR [eax+0x54]
  4687b4:	8b 40 58             	mov    eax,DWORD PTR [eax+0x58]
  4687b7:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  4687bb:	8b 11                	mov    edx,DWORD PTR [ecx]
  4687bd:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  4687c1:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  4687c4:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  4687c7:	d9 e0                	fchs
  4687c9:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  4687cd:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  4687d1:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  4687d5:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
  4687d9:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
  4687e0:	00 
  4687e1:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  4687e8:	00 
  4687e9:	8d b7 9c 01 00 00    	lea    esi,[edi+0x19c]
  4687ef:	c7 44 24 18 0f 00 00 	mov    DWORD PTR [esp+0x18],0xf
  4687f6:	00 
  4687f7:	8b 87 f8 00 00 00    	mov    eax,DWORD PTR [edi+0xf8]
  4687fd:	8b 50 40             	mov    edx,DWORD PTR [eax+0x40]
  468800:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
  468803:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  468807:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  46880b:	e8 90 1c 1a 00       	call   0x60a4a0
  468810:	99                   	cdq
  468811:	b9 10 27 00 00       	mov    ecx,0x2710
  468816:	6a 00                	push   0x0
  468818:	f7 f9                	idiv   ecx
  46881a:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  46881e:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  468822:	83 ec 0c             	sub    esp,0xc
  468825:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  468829:	8b d4                	mov    edx,esp
  46882b:	db 44 24 24          	fild   DWORD PTR [esp+0x24]
  46882f:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  468833:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
  468837:	89 02                	mov    DWORD PTR [edx],eax
  468839:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  46883d:	83 ec 0c             	sub    esp,0xc
  468840:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  468843:	8b cc                	mov    ecx,esp
  468845:	6a 02                	push   0x2
  468847:	68 00 00 80 3f       	push   0x3f800000
  46884c:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  46884f:	8b 54 24 58          	mov    edx,DWORD PTR [esp+0x58]
