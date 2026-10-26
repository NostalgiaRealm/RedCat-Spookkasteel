
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005028d0 <.text+0x1018d0>:
  5028d0:	55                   	push   ebp
  5028d1:	8b ec                	mov    ebp,esp
  5028d3:	6a ff                	push   0xffffffff
  5028d5:	68 70 5b 63 00       	push   0x635b70
  5028da:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  5028e0:	50                   	push   eax
  5028e1:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  5028e8:	83 ec 28             	sub    esp,0x28
  5028eb:	53                   	push   ebx
  5028ec:	56                   	push   esi
  5028ed:	57                   	push   edi
  5028ee:	8b f1                	mov    esi,ecx
  5028f0:	89 65 f0             	mov    DWORD PTR [ebp-0x10],esp
  5028f3:	89 75 e8             	mov    DWORD PTR [ebp-0x18],esi
  5028f6:	68 2e 01 00 00       	push   0x12e
  5028fb:	68 90 d9 69 00       	push   0x69d990
  502900:	8d 4d e0             	lea    ecx,[ebp-0x20]
  502903:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  50290a:	e8 e1 bc 0a 00       	call   0x5ae5f0
  50290f:	8a 46 7c             	mov    al,BYTE PTR [esi+0x7c]
  502912:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
  502916:	84 c0                	test   al,al
  502918:	0f 84 8b 02 00 00    	je     0x502ba9
  50291e:	33 ff                	xor    edi,edi
  502920:	8d 4d e4             	lea    ecx,[ebp-0x1c]
  502923:	89 7d e4             	mov    DWORD PTR [ebp-0x1c],edi
  502926:	e8 85 1b 08 00       	call   0x5844b0
  50292b:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  50292e:	8b 4d e4             	mov    ecx,DWORD PTR [ebp-0x1c]
  502931:	3b c1                	cmp    eax,ecx
  502933:	8d 4d e4             	lea    ecx,[ebp-0x1c]
  502936:	0f 95 c3             	setne  bl
  502939:	e8 d2 a9 07 00       	call   0x57d310
  50293e:	84 db                	test   bl,bl
  502940:	74 52                	je     0x502994
  502942:	39 7d 08             	cmp    DWORD PTR [ebp+0x8],edi
  502945:	75 40                	jne    0x502987
  502947:	8d 4d ef             	lea    ecx,[ebp-0x11]
  50294a:	51                   	push   ecx
  50294b:	68 70 3f 6b 00       	push   0x6b3f70
  502950:	8d 4d cc             	lea    ecx,[ebp-0x34]
  502953:	e8 b8 6e f0 ff       	call   0x409810
  502958:	c6 45 fc 04          	mov    BYTE PTR [ebp-0x4],0x4
  50295c:	e8 8f de 09 00       	call   0x5a07f0
  502961:	8d 55 cc             	lea    edx,[ebp-0x34]
  502964:	52                   	push   edx
  502965:	68 b6 00 00 00       	push   0xb6
  50296a:	68 38 d6 68 00       	push   0x68d638
  50296f:	68 2c d6 68 00       	push   0x68d62c
  502974:	ff d0                	call   eax
  502976:	83 c4 10             	add    esp,0x10
  502979:	8d 4d cc             	lea    ecx,[ebp-0x34]
  50297c:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
  502980:	6a 01                	push   0x1
  502982:	e8 19 17 f0 ff       	call   0x4040a0
  502987:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  50298a:	83 c6 1c             	add    esi,0x1c
  50298d:	57                   	push   edi
  50298e:	56                   	push   esi
  50298f:	e8 4c 39 ff ff       	call   0x4f62e0
  502994:	89 7d e4             	mov    DWORD PTR [ebp-0x1c],edi
  502997:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
  50299a:	85 ff                	test   edi,edi
  50299c:	8d 4d e4             	lea    ecx,[ebp-0x1c]
  50299f:	0f 95 c3             	setne  bl
  5029a2:	e8 69 a9 07 00       	call   0x57d310
  5029a7:	84 db                	test   bl,bl
  5029a9:	74 54                	je     0x5029ff
  5029ab:	85 ff                	test   edi,edi
  5029ad:	75 40                	jne    0x5029ef
  5029af:	8d 45 ef             	lea    eax,[ebp-0x11]
  5029b2:	8d 4d cc             	lea    ecx,[ebp-0x34]
  5029b5:	50                   	push   eax
  5029b6:	68 70 3f 6b 00       	push   0x6b3f70
  5029bb:	e8 50 6e f0 ff       	call   0x409810
  5029c0:	c6 45 fc 05          	mov    BYTE PTR [ebp-0x4],0x5
  5029c4:	e8 27 de 09 00       	call   0x5a07f0
  5029c9:	8d 4d cc             	lea    ecx,[ebp-0x34]
  5029cc:	51                   	push   ecx
  5029cd:	68 b6 00 00 00       	push   0xb6
  5029d2:	68 38 d6 68 00       	push   0x68d638
  5029d7:	68 2c d6 68 00       	push   0x68d62c
  5029dc:	ff d0                	call   eax
  5029de:	83 c4 10             	add    esp,0x10
  5029e1:	8d 4d cc             	lea    ecx,[ebp-0x34]
  5029e4:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
  5029e8:	6a 01                	push   0x1
  5029ea:	e8 b1 16 f0 ff       	call   0x4040a0
  5029ef:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  5029f2:	6a 01                	push   0x1
  5029f4:	83 c2 1c             	add    edx,0x1c
  5029f7:	8b cf                	mov    ecx,edi
  5029f9:	52                   	push   edx
  5029fa:	e8 e1 38 ff ff       	call   0x4f62e0
  5029ff:	8b 75 e8             	mov    esi,DWORD PTR [ebp-0x18]
  502a02:	8a 46 7d             	mov    al,BYTE PTR [esi+0x7d]
  502a05:	84 c0                	test   al,al
  502a07:	0f 84 ca 00 00 00    	je     0x502ad7
  502a0d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  502a10:	8d 4d e4             	lea    ecx,[ebp-0x1c]
  502a13:	85 c0                	test   eax,eax
  502a15:	c7 45 e4 00 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x0
  502a1c:	0f 95 c3             	setne  bl
  502a1f:	e8 ec a8 07 00       	call   0x57d310
  502a24:	84 db                	test   bl,bl
  502a26:	74 55                	je     0x502a7d
  502a28:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  502a2b:	85 c0                	test   eax,eax
  502a2d:	75 40                	jne    0x502a6f
  502a2f:	8d 45 ef             	lea    eax,[ebp-0x11]
  502a32:	8d 4d cc             	lea    ecx,[ebp-0x34]
  502a35:	50                   	push   eax
  502a36:	68 70 3f 6b 00       	push   0x6b3f70
  502a3b:	e8 d0 6d f0 ff       	call   0x409810
  502a40:	c6 45 fc 06          	mov    BYTE PTR [ebp-0x4],0x6
  502a44:	e8 a7 dd 09 00       	call   0x5a07f0
  502a49:	8d 4d cc             	lea    ecx,[ebp-0x34]
  502a4c:	51                   	push   ecx
  502a4d:	68 b6 00 00 00       	push   0xb6
  502a52:	68 38 d6 68 00       	push   0x68d638
  502a57:	68 2c d6 68 00       	push   0x68d62c
  502a5c:	ff d0                	call   eax
  502a5e:	83 c4 10             	add    esp,0x10
  502a61:	8d 4d cc             	lea    ecx,[ebp-0x34]
  502a64:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
  502a68:	6a 01                	push   0x1
  502a6a:	e8 31 16 f0 ff       	call   0x4040a0
  502a6f:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  502a72:	8d 56 34             	lea    edx,[esi+0x34]
  502a75:	6a 00                	push   0x0
  502a77:	52                   	push   edx
  502a78:	e8 43 38 ff ff       	call   0x4f62c0
  502a7d:	85 ff                	test   edi,edi
  502a7f:	0f 95 c0             	setne  al
  502a82:	84 c0                	test   al,al
  502a84:	74 51                	je     0x502ad7
  502a86:	85 ff                	test   edi,edi
  502a88:	75 40                	jne    0x502aca
  502a8a:	8d 45 ef             	lea    eax,[ebp-0x11]
  502a8d:	8d 4d cc             	lea    ecx,[ebp-0x34]
  502a90:	50                   	push   eax
  502a91:	68 70 3f 6b 00       	push   0x6b3f70
  502a96:	e8 75 6d f0 ff       	call   0x409810
  502a9b:	c6 45 fc 07          	mov    BYTE PTR [ebp-0x4],0x7
  502a9f:	e8 4c dd 09 00       	call   0x5a07f0
  502aa4:	8d 4d cc             	lea    ecx,[ebp-0x34]
  502aa7:	51                   	push   ecx
  502aa8:	68 b6 00 00 00       	push   0xb6
  502aad:	68 38 d6 68 00       	push   0x68d638
  502ab2:	68 2c d6 68 00       	push   0x68d62c
  502ab7:	ff d0                	call   eax
  502ab9:	83 c4 10             	add    esp,0x10
  502abc:	8d 4d cc             	lea    ecx,[ebp-0x34]
  502abf:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
  502ac3:	6a 01                	push   0x1
  502ac5:	e8 d6 15 f0 ff       	call   0x4040a0
  502aca:	8d 56 34             	lea    edx,[esi+0x34]
  502acd:	6a 01                	push   0x1
  502acf:	52                   	push   edx
  502ad0:	8b cf                	mov    ecx,edi
  502ad2:	e8 e9 37 ff ff       	call   0x4f62c0
  502ad7:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
  502ada:	83 c6 18             	add    esi,0x18
  502add:	3b cf                	cmp    ecx,edi
  502adf:	74 12                	je     0x502af3
  502ae1:	85 c9                	test   ecx,ecx
  502ae3:	74 05                	je     0x502aea
  502ae5:	e8 e6 6d f0 ff       	call   0x4098d0
  502aea:	8b ce                	mov    ecx,esi
  502aec:	89 3e                	mov    DWORD PTR [esi],edi
  502aee:	e8 bd 19 08 00       	call   0x5844b0
  502af3:	51                   	push   ecx
  502af4:	8b cc                	mov    ecx,esp
  502af6:	89 65 e4             	mov    DWORD PTR [ebp-0x1c],esp
  502af9:	89 39                	mov    DWORD PTR [ecx],edi
  502afb:	e8 b0 19 08 00       	call   0x5844b0
  502b00:	51                   	push   ecx
  502b01:	8d 45 08             	lea    eax,[ebp+0x8]
  502b04:	8b cc                	mov    ecx,esp
  502b06:	89 65 dc             	mov    DWORD PTR [ebp-0x24],esp
  502b09:	50                   	push   eax
  502b0a:	c6 45 fc 08          	mov    BYTE PTR [ebp-0x4],0x8
  502b0e:	e8 4d 6c f4 ff       	call   0x449760
  502b13:	8b 75 e8             	mov    esi,DWORD PTR [ebp-0x18]
  502b16:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
  502b1a:	8b ce                	mov    ecx,esi
  502b1c:	8b 16                	mov    edx,DWORD PTR [esi]
  502b1e:	ff 52 34             	call   DWORD PTR [edx+0x34]
  502b21:	85 ff                	test   edi,edi
  502b23:	74 1b                	je     0x502b40
  502b25:	8a 86 aa 00 00 00    	mov    al,BYTE PTR [esi+0xaa]
  502b2b:	84 c0                	test   al,al
  502b2d:	74 11                	je     0x502b40
  502b2f:	8a 86 ab 00 00 00    	mov    al,BYTE PTR [esi+0xab]
  502b35:	84 c0                	test   al,al
  502b37:	75 07                	jne    0x502b40
  502b39:	8b cf                	mov    ecx,edi
  502b3b:	e8 40 85 ff ff       	call   0x4fb080
  502b40:	8d 4d e0             	lea    ecx,[ebp-0x20]
  502b43:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
  502b4a:	e8 21 bc 0a 00       	call   0x5ae770
  502b4f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  502b52:	c6 45 fc 00          	mov    BYTE PTR [ebp-0x4],0x0
  502b56:	85 c0                	test   eax,eax
  502b58:	74 1f                	je     0x502b79
  502b5a:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  502b5d:	8b c8                	mov    ecx,eax
  502b5f:	83 c0 14             	add    eax,0x14
  502b62:	4e                   	dec    esi
  502b63:	8b d6                	mov    edx,esi
  502b65:	85 d2                	test   edx,edx
  502b67:	89 30                	mov    DWORD PTR [eax],esi
  502b69:	75 07                	jne    0x502b72
  502b6b:	6a 00                	push   0x0
  502b6d:	e8                   	.byte 0xe8
  502b6e:	4e                   	dec    esi
  502b6f:	94                   	xchg   esp,eax
