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
  468853:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  468857:	68 00 00 20 41       	push   0x41200000
  46885c:	de c9                	fmulp  st(1),st
  46885e:	68 00 00 80 3f       	push   0x3f800000
  468863:	89 11                	mov    DWORD PTR [ecx],edx
  468865:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
  468869:	6a 00                	push   0x0
  46886b:	d8 0d c4 a2 64 00    	fmul   DWORD PTR ds:0x64a2c4
  468871:	6a 00                	push   0x0
  468873:	6a 00                	push   0x0
  468875:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  468878:	83 ec 0c             	sub    esp,0xc
  46887b:	d8 44 24 54          	fadd   DWORD PTR [esp+0x54]
  46887f:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  468882:	8b 8c 24 84 00 00 00 	mov    ecx,DWORD PTR [esp+0x84]
  468889:	8b 94 24 88 00 00 00 	mov    edx,DWORD PTR [esp+0x88]
  468890:	8b c4                	mov    eax,esp
  468892:	6a 00                	push   0x0
  468894:	68 6f 12 83 3a       	push   0x3a83126f
  468899:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  46889d:	d9 44 24 60          	fld    DWORD PTR [esp+0x60]
  4688a1:	89 08                	mov    DWORD PTR [eax],ecx
  4688a3:	8b 8c 24 94 00 00 00 	mov    ecx,DWORD PTR [esp+0x94]
  4688aa:	51                   	push   ecx
  4688ab:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  4688ae:	8b 54 24 70          	mov    edx,DWORD PTR [esp+0x70]
  4688b2:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  4688b5:	8b 44 24 74          	mov    eax,DWORD PTR [esp+0x74]
  4688b9:	d9 1c 24             	fstp   DWORD PTR [esp]
  4688bc:	52                   	push   edx
  4688bd:	8b 94 24 a0 00 00 00 	mov    edx,DWORD PTR [esp+0xa0]
  4688c4:	50                   	push   eax
  4688c5:	8b 84 24 a8 00 00 00 	mov    eax,DWORD PTR [esp+0xa8]
  4688cc:	83 ec 0c             	sub    esp,0xc
  4688cf:	8b cc                	mov    ecx,esp
  4688d1:	6a 01                	push   0x1
  4688d3:	6a 0a                	push   0xa
  4688d5:	89 11                	mov    DWORD PTR [ecx],edx
  4688d7:	8b 94 24 c0 00 00 00 	mov    edx,DWORD PTR [esp+0xc0]
  4688de:	6a 00                	push   0x0
  4688e0:	6a 00                	push   0x0
  4688e2:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  4688e5:	8b 84 24 88 00 00 00 	mov    eax,DWORD PTR [esp+0x88]
  4688ec:	50                   	push   eax
  4688ed:	83 ec 0c             	sub    esp,0xc
  4688f0:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  4688f3:	8b 94 24 e4 00 00 00 	mov    edx,DWORD PTR [esp+0xe4]
  4688fa:	8b cc                	mov    ecx,esp
  4688fc:	83 ec 0c             	sub    esp,0xc
  4688ff:	89 29                	mov    DWORD PTR [ecx],ebp
  468901:	89 59 04             	mov    DWORD PTR [ecx+0x4],ebx
  468904:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  468907:	8b 8c 24 f4 00 00 00 	mov    ecx,DWORD PTR [esp+0xf4]
  46890e:	8b 94 24 f8 00 00 00 	mov    edx,DWORD PTR [esp+0xf8]
  468915:	8b c4                	mov    eax,esp
  468917:	89 08                	mov    DWORD PTR [eax],ecx
  468919:	8b 8c 24 fc 00 00 00 	mov    ecx,DWORD PTR [esp+0xfc]
  468920:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  468923:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  468926:	8b ce                	mov    ecx,esi
  468928:	e8 33 52 01 00       	call   0x47db60
  46892d:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  468931:	81 c6 44 01 00 00    	add    esi,0x144
  468937:	48                   	dec    eax
  468938:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  46893c:	0f 85 b5 fe ff ff    	jne    0x4687f7
  468942:	5f                   	pop    edi
  468943:	5e                   	pop    esi
  468944:	5d                   	pop    ebp
  468945:	5b                   	pop    ebx
  468946:	83 c4 60             	add    esp,0x60
  468949:	c3                   	ret
  46894a:	90                   	nop
  46894b:	90                   	nop
  46894c:	90                   	nop
  46894d:	90                   	nop
  46894e:	90                   	nop
  46894f:	90                   	nop
  468950:	8a 0d a0 03 71 00    	mov    cl,BYTE PTR ds:0x7103a0
  468956:	b0 01                	mov    al,0x1
  468958:	84 c8                	test   al,cl
  46895a:	75 08                	jne    0x468964
  46895c:	0a c8                	or     cl,al
  46895e:	88 0d a0 03 71 00    	mov    BYTE PTR ds:0x7103a0,cl
  468964:	e9 07 00 00 00       	jmp    0x468970
  468969:	90                   	nop
  46896a:	90                   	nop
  46896b:	90                   	nop
  46896c:	90                   	nop
  46896d:	90                   	nop
  46896e:	90                   	nop
  46896f:	90                   	nop
  468970:	68 a0 1b 40 00       	push   0x401ba0
  468975:	e8 01 1c 1a 00       	call   0x60a57b
  46897a:	59                   	pop    ecx
  46897b:	c3                   	ret
  46897c:	90                   	nop
  46897d:	90                   	nop
  46897e:	90                   	nop
  46897f:	90                   	nop
  468980:	e9 0b 00 00 00       	jmp    0x468990
  468985:	90                   	nop
  468986:	90                   	nop
  468987:	90                   	nop
  468988:	90                   	nop
  468989:	90                   	nop
  46898a:	90                   	nop
  46898b:	90                   	nop
  46898c:	90                   	nop
  46898d:	90                   	nop
  46898e:	90                   	nop
  46898f:	90                   	nop
  468990:	a1 dc da 64 00       	mov    eax,ds:0x64dadc
  468995:	a3 d4 85 6b 00       	mov    ds:0x6b85d4,eax
  46899a:	c3                   	ret
  46899b:	90                   	nop
  46899c:	90                   	nop
  46899d:	90                   	nop
  46899e:	90                   	nop
  46899f:	90                   	nop
  4689a0:	6a ff                	push   0xffffffff
  4689a2:	68 2c 7a 62 00       	push   0x627a2c
  4689a7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4689ad:	50                   	push   eax
  4689ae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4689b5:	83 ec 48             	sub    esp,0x48
  4689b8:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
  4689bc:	53                   	push   ebx
  4689bd:	55                   	push   ebp
  4689be:	56                   	push   esi
  4689bf:	57                   	push   edi
  4689c0:	8b e9                	mov    ebp,ecx
  4689c2:	50                   	push   eax
  4689c3:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  4689c7:	e8 e4 92 09 00       	call   0x501cb0
  4689cc:	33 db                	xor    ebx,ebx
  4689ce:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
  4689d2:	89 9d f8 00 00 00    	mov    DWORD PTR [ebp+0xf8],ebx
  4689d8:	c6 44 24 60 01       	mov    BYTE PTR [esp+0x60],0x1
  4689dd:	c6 85 08 01 00 00 01 	mov    BYTE PTR [ebp+0x108],0x1
  4689e4:	89 9d 0c 01 00 00    	mov    DWORD PTR [ebp+0x10c],ebx
  4689ea:	8d b5 f4 03 00 00    	lea    esi,[ebp+0x3f4]
  4689f0:	bf 05 00 00 00       	mov    edi,0x5
  4689f5:	8b ce                	mov    ecx,esi
  4689f7:	e8 b4 4f 01 00       	call   0x47d9b0
  4689fc:	81 c6 44 01 00 00    	add    esi,0x144
  468a02:	4f                   	dec    edi
  468a03:	75 f0                	jne    0x4689f5
  468a05:	8d 8d ec 0a 00 00    	lea    ecx,[ebp+0xaec]
  468a0b:	6a ff                	push   0xffffffff
  468a0d:	e8 9e b7 f9 ff       	call   0x4041b0
  468a12:	68 10 d3 57 00       	push   0x57d310
  468a17:	68 40 8f 46 00       	push   0x468f40
  468a1c:	6a 05                	push   0x5
  468a1e:	8d 8d fc 0a 00 00    	lea    ecx,[ebp+0xafc]
  468a24:	6a 04                	push   0x4
  468a26:	51                   	push   ecx
  468a27:	e8 af 27 1a 00       	call   0x60b1db
  468a2c:	8d 95 f4 03 00 00    	lea    edx,[ebp+0x3f4]
  468a32:	c6 44 24 60 02       	mov    BYTE PTR [esp+0x60],0x2
  468a37:	c7 45 00 f4 da 64 00 	mov    DWORD PTR [ebp+0x0],0x64daf4
  468a3e:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  468a42:	8d bd 9c 01 00 00    	lea    edi,[ebp+0x19c]
  468a48:	c7 44 24 20 05 00 00 	mov    DWORD PTR [esp+0x20],0x5
  468a4f:	00 
  468a50:	8d 77 8c             	lea    esi,[edi-0x74]
  468a53:	c7 44 24 18 04 00 00 	mov    DWORD PTR [esp+0x18],0x4
  468a5a:	00 
  468a5b:	8d 8d 10 01 00 00    	lea    ecx,[ebp+0x110]
  468a61:	e8 0a a6 14 00       	call   0x5b3070
  468a66:	89 5e fc             	mov    DWORD PTR [esi-0x4],ebx
  468a69:	89 1e                	mov    DWORD PTR [esi],ebx
  468a6b:	b8 00 00 7f 43       	mov    eax,0x437f0000
  468a70:	89 5e 04             	mov    DWORD PTR [esi+0x4],ebx
  468a73:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  468a76:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  468a79:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
  468a7c:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  468a80:	c7 46 1c 00 00 16 43 	mov    DWORD PTR [esi+0x1c],0x43160000
  468a87:	83 c6 24             	add    esi,0x24
  468a8a:	48                   	dec    eax
  468a8b:	c7 85 20 01 00 00 00 	mov    DWORD PTR [ebp+0x120],0x41200000
  468a92:	00 20 41 
  468a95:	c7 85 1c 01 00 00 00 	mov    DWORD PTR [ebp+0x11c],0x41f00000
  468a9c:	00 f0 41 
  468a9f:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  468aa3:	75 b6                	jne    0x468a5b
  468aa5:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
  468aa9:	89 1f                	mov    DWORD PTR [edi],ebx
  468aab:	89 5f 04             	mov    DWORD PTR [edi+0x4],ebx
  468aae:	b8 00 00 80 3f       	mov    eax,0x3f800000
  468ab3:	89 5f 94             	mov    DWORD PTR [edi-0x6c],ebx
  468ab6:	89 47 98             	mov    DWORD PTR [edi-0x68],eax
  468ab9:	89 47 b8             	mov    DWORD PTR [edi-0x48],eax
  468abc:	89 47 bc             	mov    DWORD PTR [edi-0x44],eax
  468abf:	89 47 dc             	mov    DWORD PTR [edi-0x24],eax
  468ac2:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  468ac6:	55                   	push   ebp
  468ac7:	50                   	push   eax
  468ac8:	8b ce                	mov    ecx,esi
  468aca:	89 5f e0             	mov    DWORD PTR [edi-0x20],ebx
  468acd:	e8 7e 50 01 00       	call   0x47db50
  468ad2:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  468ad6:	81 c7 90 00 00 00    	add    edi,0x90
  468adc:	81 c6 44 01 00 00    	add    esi,0x144
  468ae2:	48                   	dec    eax
  468ae3:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  468ae7:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  468aeb:	0f 85 5f ff ff ff    	jne    0x468a50
  468af1:	8b cd                	mov    ecx,ebp
  468af3:	e8 78 0c 00 00       	call   0x469770
  468af8:	8b 0d d0 da 64 00    	mov    ecx,DWORD PTR ds:0x64dad0
  468afe:	53                   	push   ebx
  468aff:	89 8d fc 00 00 00    	mov    DWORD PTR [ebp+0xfc],ecx
  468b05:	8b 15 d4 da 64 00    	mov    edx,DWORD PTR ds:0x64dad4
  468b0b:	8a 4c 24 6c          	mov    cl,BYTE PTR [esp+0x6c]
  468b0f:	89 95 00 01 00 00    	mov    DWORD PTR [ebp+0x100],edx
  468b15:	a1 d0 da 64 00       	mov    eax,ds:0x64dad0
  468b1a:	88 4c 24 4c          	mov    BYTE PTR [esp+0x4c],cl
  468b1e:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  468b22:	89 85 04 01 00 00    	mov    DWORD PTR [ebp+0x104],eax
  468b28:	e8 73 b5 f9 ff       	call   0x4040a0
  468b2d:	bf 00 29 69 00       	mov    edi,0x692900
  468b32:	83 c9 ff             	or     ecx,0xffffffff
  468b35:	33 c0                	xor    eax,eax
  468b37:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  468b39:	f7 d1                	not    ecx
  468b3b:	49                   	dec    ecx
  468b3c:	51                   	push   ecx
  468b3d:	68 00 29 69 00       	push   0x692900
  468b42:	8d 4c 24 50          	lea    ecx,[esp+0x50]
  468b46:	e8 a5 b5 f9 ff       	call   0x4040f0
  468b4b:	8a 54 24 68          	mov    dl,BYTE PTR [esp+0x68]
  468b4f:	53                   	push   ebx
  468b50:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  468b54:	c6 44 24 64 03       	mov    BYTE PTR [esp+0x64],0x3
  468b59:	88 54 24 2c          	mov    BYTE PTR [esp+0x2c],dl
  468b5d:	e8 3e b5 f9 ff       	call   0x4040a0
  468b62:	bf f0 28 69 00       	mov    edi,0x6928f0
  468b67:	83 c9 ff             	or     ecx,0xffffffff
  468b6a:	33 c0                	xor    eax,eax
  468b6c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  468b6e:	f7 d1                	not    ecx
  468b70:	49                   	dec    ecx
  468b71:	51                   	push   ecx
  468b72:	68 f0 28 69 00       	push   0x6928f0
  468b77:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  468b7b:	e8 70 b5 f9 ff       	call   0x4040f0
  468b80:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  468b84:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  468b88:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  468b8d:	c6 44 24 60 06       	mov    BYTE PTR [esp+0x60],0x6
  468b92:	3b c3                	cmp    eax,ebx
  468b94:	75 05                	jne    0x468b9b
  468b96:	e8 e5 26 0f 00       	call   0x55b280
  468b9b:	8b f0                	mov    esi,eax
  468b9d:	39 9e d8 00 00 00    	cmp    DWORD PTR [esi+0xd8],ebx
  468ba3:	75 63                	jne    0x468c08
  468ba5:	8a 44 24 68          	mov    al,BYTE PTR [esp+0x68]
  468ba9:	53                   	push   ebx
  468baa:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  468bae:	88 44 24 3c          	mov    BYTE PTR [esp+0x3c],al
  468bb2:	e8 e9 b4 f9 ff       	call   0x4040a0
  468bb7:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  468bbc:	83 c9 ff             	or     ecx,0xffffffff
  468bbf:	33 c0                	xor    eax,eax
  468bc1:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  468bc3:	f7 d1                	not    ecx
  468bc5:	49                   	dec    ecx
  468bc6:	51                   	push   ecx
  468bc7:	68 70 3f 6b 00       	push   0x6b3f70
  468bcc:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  468bd0:	e8 1b b5 f9 ff       	call   0x4040f0
  468bd5:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  468bd9:	c6 44 24 60 07       	mov    BYTE PTR [esp+0x60],0x7
  468bde:	51                   	push   ecx
  468bdf:	68 88 01 00 00       	push   0x188
  468be4:	68 58 eb 68 00       	push   0x68eb58
  468be9:	68 4c eb 68 00       	push   0x68eb4c
  468bee:	e8 fd 7b 13 00       	call   0x5a07f0
  468bf3:	ff d0                	call   eax
  468bf5:	83 c4 10             	add    esp,0x10
  468bf8:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  468bfc:	c6 44 24 60 06       	mov    BYTE PTR [esp+0x60],0x6
  468c01:	6a 01                	push   0x1
  468c03:	e8 98 b4 f9 ff       	call   0x4040a0
  468c08:	8b b6 d8 00 00 00    	mov    esi,DWORD PTR [esi+0xd8]
  468c0e:	8d 54 24 48          	lea    edx,[esp+0x48]
  468c12:	8d 44 24 68          	lea    eax,[esp+0x68]
  468c16:	52                   	push   edx
  468c17:	50                   	push   eax
  468c18:	8b ce                	mov    ecx,esi
  468c1a:	e8 61 4d 0a 00       	call   0x50d980
  468c1f:	8b f0                	mov    esi,eax
  468c21:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  468c25:	8b 0e                	mov    ecx,DWORD PTR [esi]
  468c27:	3b c1                	cmp    eax,ecx
  468c29:	c6 44 24 60 08       	mov    BYTE PTR [esp+0x60],0x8
  468c2e:	74 2e                	je     0x468c5e
  468c30:	3b c3                	cmp    eax,ebx
  468c32:	74 17                	je     0x468c4b
  468c34:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  468c37:	8b c8                	mov    ecx,eax
  468c39:	83 c0 14             	add    eax,0x14
  468c3c:	4f                   	dec    edi
  468c3d:	8b d7                	mov    edx,edi
  468c3f:	3b d3                	cmp    edx,ebx
  468c41:	89 38                	mov    DWORD PTR [eax],edi
  468c43:	75 06                	jne    0x468c4b
  468c45:	53                   	push   ebx
  468c46:	e8 75 33 14 00       	call   0x5abfc0
  468c4b:	8b 0e                	mov    ecx,DWORD PTR [esi]
  468c4d:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  468c51:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  468c55:	e8 56 b8 11 00       	call   0x5844b0
  468c5a:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  468c5e:	8b 4c 24 68          	mov    ecx,DWORD PTR [esp+0x68]
  468c62:	c6 44 24 60 06       	mov    BYTE PTR [esp+0x60],0x6
  468c67:	3b cb                	cmp    ecx,ebx
  468c69:	74 09                	je     0x468c74
  468c6b:	e8 60 0c fa ff       	call   0x4098d0
  468c70:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  468c74:	39 5c 24 30          	cmp    DWORD PTR [esp+0x30],ebx
  468c78:	0f 86 ea 00 00 00    	jbe    0x468d68
  468c7e:	8b 35 e0 8d 6c 00    	mov    esi,DWORD PTR ds:0x6c8de0
  468c84:	3b f3                	cmp    esi,ebx
  468c86:	75 07                	jne    0x468c8f
  468c88:	e8 f3 25 0f 00       	call   0x55b280
  468c8d:	8b f0                	mov    esi,eax
  468c8f:	39 9e d8 00 00 00    	cmp    DWORD PTR [esi+0xd8],ebx
  468c95:	75 63                	jne    0x468cfa
  468c97:	8a 54 24 68          	mov    dl,BYTE PTR [esp+0x68]
  468c9b:	53                   	push   ebx
  468c9c:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
