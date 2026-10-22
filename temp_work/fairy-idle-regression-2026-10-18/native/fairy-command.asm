
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004797e0 <.text+0x787e0>:
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
  47991c:	e8                   	.byte 0xe8
  47991d:	7f a7                	jg     0x4798c6
  47991f:	f8                   	clc
