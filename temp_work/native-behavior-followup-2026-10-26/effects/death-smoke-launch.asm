
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0046e8b0 <.text+0x6d8b0>:
  46e8b0:	83 ec 5c             	sub    esp,0x5c
  46e8b3:	53                   	push   ebx
  46e8b4:	55                   	push   ebp
  46e8b5:	56                   	push   esi
  46e8b6:	8b f1                	mov    esi,ecx
  46e8b8:	57                   	push   edi
  46e8b9:	8b 8e f8 13 00 00    	mov    ecx,DWORD PTR [esi+0x13f8]
  46e8bf:	e8 1c 5f fb ff       	call   0x4247e0
  46e8c4:	8b c8                	mov    ecx,eax
  46e8c6:	e8 25 52 14 00       	call   0x5b3af0
  46e8cb:	8b c8                	mov    ecx,eax
  46e8cd:	e8 0e c9 12 00       	call   0x59b1e0
  46e8d2:	8b e8                	mov    ebp,eax
  46e8d4:	8b cd                	mov    ecx,ebp
  46e8d6:	e8 65 88 14 00       	call   0x5b7140
  46e8db:	33 ff                	xor    edi,edi
  46e8dd:	33 db                	xor    ebx,ebx
  46e8df:	48                   	dec    eax
  46e8e0:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  46e8e4:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  46e8e8:	8d 86 fc 13 00 00    	lea    eax,[esi+0x13fc]
  46e8ee:	89 7c 24 18          	mov    DWORD PTR [esp+0x18],edi
  46e8f2:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  46e8f6:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  46e8fa:	81 c6 00 01 00 00    	add    esi,0x100
  46e900:	8d 4e fc             	lea    ecx,[esi-0x4]
  46e903:	e8 08 fe 00 00       	call   0x47e710
  46e908:	3b 7c 24 14          	cmp    edi,DWORD PTR [esp+0x14]
  46e90c:	7c 02                	jl     0x46e910
  46e90e:	33 ff                	xor    edi,edi
  46e910:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  46e914:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  46e918:	51                   	push   ecx
  46e919:	8d 44 24 20          	lea    eax,[esp+0x20]
  46e91d:	52                   	push   edx
  46e91e:	50                   	push   eax
  46e91f:	8b d7                	mov    edx,edi
  46e921:	8b cd                	mov    ecx,ebp
  46e923:	e8 28 88 14 00       	call   0x5b7150
  46e928:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  46e92c:	8b 54 24 64          	mov    edx,DWORD PTR [esp+0x64]
  46e930:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  46e934:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  46e938:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  46e93c:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  46e940:	83 c7 02             	add    edi,0x2
  46e943:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  46e947:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  46e94b:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  46e94f:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  46e953:	e8 c8 45 14 00       	call   0x5b2f20
  46e958:	8d 54 24 24          	lea    edx,[esp+0x24]
  46e95c:	68 00 00 a0 41       	push   0x41a00000
  46e961:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  46e965:	dd d8                	fstp   st(0)
  46e967:	e8 34 46 14 00       	call   0x5b2fa0
  46e96c:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  46e970:	51                   	push   ecx
  46e971:	8d 54 24 34          	lea    edx,[esp+0x34]
  46e975:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  46e979:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  46e97f:	d9 1c 24             	fstp   DWORD PTR [esp]
  46e982:	e8 19 46 14 00       	call   0x5b2fa0
  46e987:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  46e98b:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  46e98f:	51                   	push   ecx
  46e990:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  46e994:	e8 67 46 14 00       	call   0x5b3000
  46e999:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  46e99d:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  46e9a1:	8b d6                	mov    edx,esi
  46e9a3:	43                   	inc    ebx
  46e9a4:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  46e9a8:	89 02                	mov    DWORD PTR [edx],eax
  46e9aa:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  46e9ae:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  46e9b1:	8d 4e 0c             	lea    ecx,[esi+0xc]
  46e9b4:	81 c6 44 01 00 00    	add    esi,0x144
  46e9ba:	83 fb 0f             	cmp    ebx,0xf
  46e9bd:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  46e9c0:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  46e9c4:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  46e9c8:	89 11                	mov    DWORD PTR [ecx],edx
  46e9ca:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  46e9ce:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  46e9d1:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  46e9d4:	0f 8c 26 ff ff ff    	jl     0x46e900
  46e9da:	5f                   	pop    edi
  46e9db:	5e                   	pop    esi
  46e9dc:	5d                   	pop    ebp
  46e9dd:	5b                   	pop    ebx
  46e9de:	83 c4 5c             	add    esp,0x5c
  46e9e1:	c3                   	ret
