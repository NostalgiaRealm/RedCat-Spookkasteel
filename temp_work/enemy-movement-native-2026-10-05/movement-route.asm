  59bc20:	6a ff                	push   0xffffffff
  59bc22:	68 f8 46 64 00       	push   0x6446f8
  59bc27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59bc2d:	50                   	push   eax
  59bc2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59bc35:	83 ec 18             	sub    esp,0x18
  59bc38:	53                   	push   ebx
  59bc39:	56                   	push   esi
  59bc3a:	8b f1                	mov    esi,ecx
  59bc3c:	33 db                	xor    ebx,ebx
  59bc3e:	89 74 24 0c          	mov    DWORD PTR [esp+0xc],esi
  59bc42:	39 5e 18             	cmp    DWORD PTR [esi+0x18],ebx
  59bc45:	0f 85 ba 00 00 00    	jne    0x59bd05
  59bc4b:	8a 44 24 0b          	mov    al,BYTE PTR [esp+0xb]
  59bc4f:	55                   	push   ebp
  59bc50:	57                   	push   edi
  59bc51:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  59bc55:	bf 08 72 6a 00       	mov    edi,0x6a7208
  59bc5a:	83 c9 ff             	or     ecx,0xffffffff
  59bc5d:	33 c0                	xor    eax,eax
  59bc5f:	6a 01                	push   0x1
  59bc61:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59bc63:	f7 d1                	not    ecx
  59bc65:	49                   	dec    ecx
  59bc66:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59bc6a:	8b e9                	mov    ebp,ecx
  59bc6c:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59bc70:	55                   	push   ebp
  59bc71:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  59bc75:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  59bc79:	e8 c2 5c e6 ff       	call   0x401940
  59bc7e:	84 c0                	test   al,al
  59bc80:	74 28                	je     0x59bcaa
  59bc82:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  59bc86:	8b cd                	mov    ecx,ebp
  59bc88:	8b d1                	mov    edx,ecx
  59bc8a:	be 08 72 6a 00       	mov    esi,0x6a7208
  59bc8f:	c1 e9 02             	shr    ecx,0x2
  59bc92:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59bc94:	8b ca                	mov    ecx,edx
  59bc96:	83 e1 03             	and    ecx,0x3
  59bc99:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59bc9b:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59bc9f:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  59bca3:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  59bca7:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  59bcaa:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59bcae:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  59bcb2:	51                   	push   ecx
  59bcb3:	68 bc 00 00 00       	push   0xbc
  59bcb8:	68 c8 70 6a 00       	push   0x6a70c8
  59bcbd:	68 e8 71 6a 00       	push   0x6a71e8
  59bcc2:	e8 29 4b 00 00       	call   0x5a07f0
  59bcc7:	ff d0                	call   eax
  59bcc9:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  59bccd:	83 c4 10             	add    esp,0x10
  59bcd0:	3b c3                	cmp    eax,ebx
  59bcd2:	5f                   	pop    edi
  59bcd3:	5d                   	pop    ebp
  59bcd4:	74 2f                	je     0x59bd05
  59bcd6:	8d 48 ff             	lea    ecx,[eax-0x1]
  59bcd9:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59bcdc:	3a c3                	cmp    al,bl
  59bcde:	74 1c                	je     0x59bcfc
  59bce0:	3c ff                	cmp    al,0xff
  59bce2:	74 18                	je     0x59bcfc
  59bce4:	fe c8                	dec    al
  59bce6:	88 01                	mov    BYTE PTR [ecx],al
  59bce8:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  59bceb:	5e                   	pop    esi
  59bcec:	5b                   	pop    ebx
  59bced:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  59bcf1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59bcf8:	83 c4 24             	add    esp,0x24
  59bcfb:	c3                   	ret
  59bcfc:	51                   	push   ecx
  59bcfd:	e8 ee 28 06 00       	call   0x5fe5f0
  59bd02:	83 c4 04             	add    esp,0x4
  59bd05:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  59bd08:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  59bd0c:	5e                   	pop    esi
  59bd0d:	5b                   	pop    ebx
  59bd0e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59bd15:	83 c4 24             	add    esp,0x24
  59bd18:	c3                   	ret
  59bd19:	90                   	nop
  59bd1a:	90                   	nop
  59bd1b:	90                   	nop
  59bd1c:	90                   	nop
  59bd1d:	90                   	nop
  59bd1e:	90                   	nop
  59bd1f:	90                   	nop
  59bd20:	8d 41 20             	lea    eax,[ecx+0x20]
  59bd23:	c3                   	ret
  59bd24:	90                   	nop
  59bd25:	90                   	nop
  59bd26:	90                   	nop
  59bd27:	90                   	nop
  59bd28:	90                   	nop
  59bd29:	90                   	nop
  59bd2a:	90                   	nop
  59bd2b:	90                   	nop
  59bd2c:	90                   	nop
  59bd2d:	90                   	nop
  59bd2e:	90                   	nop
  59bd2f:	90                   	nop
  59bd30:	6a ff                	push   0xffffffff
  59bd32:	68 18 47 64 00       	push   0x644718
  59bd37:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59bd3d:	50                   	push   eax
  59bd3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59bd45:	83 ec 18             	sub    esp,0x18
  59bd48:	56                   	push   esi
  59bd49:	8b f1                	mov    esi,ecx
  59bd4b:	89 74 24 08          	mov    DWORD PTR [esp+0x8],esi
  59bd4f:	e8 0c 01 00 00       	call   0x59be60
  59bd54:	84 c0                	test   al,al
  59bd56:	0f 85 c0 00 00 00    	jne    0x59be1c
  59bd5c:	8a 44 24 07          	mov    al,BYTE PTR [esp+0x7]
  59bd60:	53                   	push   ebx
  59bd61:	55                   	push   ebp
  59bd62:	57                   	push   edi
  59bd63:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  59bd67:	bf 2c 72 6a 00       	mov    edi,0x6a722c
  59bd6c:	83 c9 ff             	or     ecx,0xffffffff
  59bd6f:	33 c0                	xor    eax,eax
  59bd71:	33 db                	xor    ebx,ebx
  59bd73:	6a 01                	push   0x1
  59bd75:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59bd77:	f7 d1                	not    ecx
  59bd79:	49                   	dec    ecx
  59bd7a:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59bd7e:	8b e9                	mov    ebp,ecx
  59bd80:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  59bd84:	55                   	push   ebp
  59bd85:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  59bd89:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  59bd8d:	e8 ae 5b e6 ff       	call   0x401940
  59bd92:	84 c0                	test   al,al
  59bd94:	74 28                	je     0x59bdbe
  59bd96:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  59bd9a:	8b cd                	mov    ecx,ebp
  59bd9c:	8b d1                	mov    edx,ecx
  59bd9e:	be 2c 72 6a 00       	mov    esi,0x6a722c
  59bda3:	c1 e9 02             	shr    ecx,0x2
  59bda6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59bda8:	8b ca                	mov    ecx,edx
  59bdaa:	83 e1 03             	and    ecx,0x3
  59bdad:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59bdaf:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  59bdb3:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  59bdb7:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  59bdbb:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  59bdbe:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59bdc2:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  59bdc6:	51                   	push   ecx
  59bdc7:	68 ce 00 00 00       	push   0xce
  59bdcc:	68 c8 70 6a 00       	push   0x6a70c8
  59bdd1:	68 1c 72 6a 00       	push   0x6a721c
  59bdd6:	e8 15 4a 00 00       	call   0x5a07f0
  59bddb:	ff d0                	call   eax
  59bddd:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  59bde1:	83 c4 10             	add    esp,0x10
  59bde4:	3b c3                	cmp    eax,ebx
  59bde6:	c7 44 24 30 ff ff ff 	mov    DWORD PTR [esp+0x30],0xffffffff
  59bded:	ff 
  59bdee:	74 1d                	je     0x59be0d
  59bdf0:	8d 48 ff             	lea    ecx,[eax-0x1]
  59bdf3:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59bdf6:	3a c3                	cmp    al,bl
  59bdf8:	74 0a                	je     0x59be04
  59bdfa:	3c ff                	cmp    al,0xff
  59bdfc:	74 06                	je     0x59be04
  59bdfe:	fe c8                	dec    al
  59be00:	88 01                	mov    BYTE PTR [ecx],al
  59be02:	eb 09                	jmp    0x59be0d
  59be04:	51                   	push   ecx
  59be05:	e8 e6 27 06 00       	call   0x5fe5f0
  59be0a:	83 c4 04             	add    esp,0x4
  59be0d:	5f                   	pop    edi
  59be0e:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  59be12:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  59be16:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59be1a:	5d                   	pop    ebp
  59be1b:	5b                   	pop    ebx
  59be1c:	8b 56 30             	mov    edx,DWORD PTR [esi+0x30]
  59be1f:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  59be22:	52                   	push   edx
  59be23:	e8 68 21 00 00       	call   0x59df90
  59be28:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  59be2c:	5e                   	pop    esi
  59be2d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59be34:	83 c4 24             	add    esp,0x24
  59be37:	c3                   	ret
  59be38:	90                   	nop
  59be39:	90                   	nop
  59be3a:	90                   	nop
  59be3b:	90                   	nop
  59be3c:	90                   	nop
  59be3d:	90                   	nop
  59be3e:	90                   	nop
  59be3f:	90                   	nop
  59be40:	8d 41 30             	lea    eax,[ecx+0x30]
  59be43:	c3                   	ret
  59be44:	90                   	nop
  59be45:	90                   	nop
  59be46:	90                   	nop
  59be47:	90                   	nop
  59be48:	90                   	nop
  59be49:	90                   	nop
  59be4a:	90                   	nop
  59be4b:	90                   	nop
  59be4c:	90                   	nop
  59be4d:	90                   	nop
  59be4e:	90                   	nop
  59be4f:	90                   	nop
  59be50:	8d 41 3c             	lea    eax,[ecx+0x3c]
  59be53:	c3                   	ret
  59be54:	90                   	nop
  59be55:	90                   	nop
  59be56:	90                   	nop
  59be57:	90                   	nop
  59be58:	90                   	nop
  59be59:	90                   	nop
  59be5a:	90                   	nop
  59be5b:	90                   	nop
  59be5c:	90                   	nop
  59be5d:	90                   	nop
  59be5e:	90                   	nop
  59be5f:	90                   	nop
  59be60:	8a 41 34             	mov    al,BYTE PTR [ecx+0x34]
  59be63:	c3                   	ret
  59be64:	90                   	nop
  59be65:	90                   	nop
  59be66:	90                   	nop
  59be67:	90                   	nop
  59be68:	90                   	nop
  59be69:	90                   	nop
  59be6a:	90                   	nop
  59be6b:	90                   	nop
  59be6c:	90                   	nop
  59be6d:	90                   	nop
  59be6e:	90                   	nop
  59be6f:	90                   	nop
  59be70:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59be76:	6a ff                	push   0xffffffff
  59be78:	68 48 47 64 00       	push   0x644748
  59be7d:	50                   	push   eax
  59be7e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  59be85:	83 ec 30             	sub    esp,0x30
  59be88:	53                   	push   ebx
  59be89:	55                   	push   ebp
  59be8a:	8b e9                	mov    ebp,ecx
  59be8c:	56                   	push   esi
  59be8d:	57                   	push   edi
  59be8e:	8d 4d 1c             	lea    ecx,[ebp+0x1c]
  59be91:	e8 5a f3 ff ff       	call   0x59b1f0
  59be96:	84 c0                	test   al,al
  59be98:	0f 85 85 00 00 00    	jne    0x59bf23
  59be9e:	8a 44 24 50          	mov    al,BYTE PTR [esp+0x50]
  59bea2:	bf 78 72 6a 00       	mov    edi,0x6a7278
  59bea7:	88 44 24 20          	mov    BYTE PTR [esp+0x20],al
  59beab:	83 c9 ff             	or     ecx,0xffffffff
  59beae:	33 c0                	xor    eax,eax
  59beb0:	33 f6                	xor    esi,esi
  59beb2:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59beb4:	f7 d1                	not    ecx
  59beb6:	49                   	dec    ecx
  59beb7:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
  59bebb:	51                   	push   ecx
  59bebc:	68 78 72 6a 00       	push   0x6a7278
  59bec1:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59bec5:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  59bec9:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  59becd:	e8 1e 82 e6 ff       	call   0x4040f0
  59bed2:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  59bed6:	89 74 24 48          	mov    DWORD PTR [esp+0x48],esi
  59beda:	51                   	push   ecx
  59bedb:	68 f4 00 00 00       	push   0xf4
  59bee0:	68 c8 70 6a 00       	push   0x6a70c8
  59bee5:	68 18 6c 6a 00       	push   0x6a6c18
  59beea:	e8 01 49 00 00       	call   0x5a07f0
  59beef:	ff d0                	call   eax
  59bef1:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  59bef5:	83 c4 10             	add    esp,0x10
  59bef8:	3b c6                	cmp    eax,esi
  59befa:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  59bf01:	ff 
  59bf02:	74 21                	je     0x59bf25
  59bf04:	8d 48 ff             	lea    ecx,[eax-0x1]
  59bf07:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59bf0a:	84 c0                	test   al,al
  59bf0c:	74 0a                	je     0x59bf18
  59bf0e:	3c ff                	cmp    al,0xff
  59bf10:	74 06                	je     0x59bf18
  59bf12:	fe c8                	dec    al
  59bf14:	88 01                	mov    BYTE PTR [ecx],al
  59bf16:	eb 0d                	jmp    0x59bf25
  59bf18:	51                   	push   ecx
  59bf19:	e8 d2 26 06 00       	call   0x5fe5f0
  59bf1e:	83 c4 04             	add    esp,0x4
  59bf21:	eb 02                	jmp    0x59bf25
  59bf23:	33 f6                	xor    esi,esi
  59bf25:	8a 45 2c             	mov    al,BYTE PTR [ebp+0x2c]
  59bf28:	84 c0                	test   al,al
  59bf2a:	0f 84 85 00 00 00    	je     0x59bfb5
  59bf30:	bf 58 72 6a 00       	mov    edi,0x6a7258
  59bf35:	83 c9 ff             	or     ecx,0xffffffff
  59bf38:	33 c0                	xor    eax,eax
  59bf3a:	8a 54 24 50          	mov    dl,BYTE PTR [esp+0x50]
  59bf3e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59bf40:	f7 d1                	not    ecx
  59bf42:	49                   	dec    ecx
  59bf43:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  59bf47:	51                   	push   ecx
  59bf48:	68 58 72 6a 00       	push   0x6a7258
  59bf4d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59bf51:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
  59bf55:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
  59bf59:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
  59bf5d:	e8 8e 81 e6 ff       	call   0x4040f0
  59bf62:	8d 44 24 20          	lea    eax,[esp+0x20]
  59bf66:	c7 44 24 48 01 00 00 	mov    DWORD PTR [esp+0x48],0x1
  59bf6d:	00 
  59bf6e:	50                   	push   eax
  59bf6f:	68 f5 00 00 00       	push   0xf5
  59bf74:	68 c8 70 6a 00       	push   0x6a70c8
  59bf79:	68 44 72 6a 00       	push   0x6a7244
  59bf7e:	e8 6d 48 00 00       	call   0x5a07f0
  59bf83:	ff d0                	call   eax
  59bf85:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  59bf89:	83 c4 10             	add    esp,0x10
  59bf8c:	3b c6                	cmp    eax,esi
  59bf8e:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  59bf95:	ff 
  59bf96:	74 1d                	je     0x59bfb5
  59bf98:	8d 48 ff             	lea    ecx,[eax-0x1]
  59bf9b:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  59bf9e:	84 c0                	test   al,al
  59bfa0:	74 0a                	je     0x59bfac
  59bfa2:	3c ff                	cmp    al,0xff
  59bfa4:	74 06                	je     0x59bfac
  59bfa6:	fe c8                	dec    al
  59bfa8:	88 01                	mov    BYTE PTR [ecx],al
  59bfaa:	eb 09                	jmp    0x59bfb5
  59bfac:	51                   	push   ecx
  59bfad:	e8 3e 26 06 00       	call   0x5fe5f0
  59bfb2:	83 c4 04             	add    esp,0x4
  59bfb5:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59bfb9:	8d 75 3c             	lea    esi,[ebp+0x3c]
  59bfbc:	8d 5d 20             	lea    ebx,[ebp+0x20]
  59bfbf:	51                   	push   ecx
  59bfc0:	8b d6                	mov    edx,esi
  59bfc2:	8b cb                	mov    ecx,ebx
  59bfc4:	e8 17 70 01 00       	call   0x5b2fe0
  59bfc9:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  59bfcd:	e8 fe 6f 01 00       	call   0x5b2fd0
  59bfd2:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  59bfd6:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  59bfda:	83 f8 ff             	cmp    eax,0xffffffff
  59bfdd:	75 6a                	jne    0x59c049
  59bfdf:	8a 54 24 50          	mov    dl,BYTE PTR [esp+0x50]
  59bfe3:	6a 00                	push   0x0
  59bfe5:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  59bfe9:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  59bfed:	e8 ae 80 e6 ff       	call   0x4040a0
  59bff2:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  59bff7:	83 c9 ff             	or     ecx,0xffffffff
  59bffa:	33 c0                	xor    eax,eax
  59bffc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59bffe:	f7 d1                	not    ecx
  59c000:	49                   	dec    ecx
  59c001:	51                   	push   ecx
  59c002:	68 70 3f 6b 00       	push   0x6b3f70
  59c007:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  59c00b:	e8 e0 80 e6 ff       	call   0x4040f0
  59c010:	8d 44 24 30          	lea    eax,[esp+0x30]
  59c014:	c7 44 24 48 02 00 00 	mov    DWORD PTR [esp+0x48],0x2
  59c01b:	00 
  59c01c:	50                   	push   eax
  59c01d:	68 8a 00 00 00       	push   0x8a
  59c022:	68 2c e2 68 00       	push   0x68e22c
  59c027:	68 14 e2 68 00       	push   0x68e214
  59c02c:	e8 bf 47 00 00       	call   0x5a07f0
  59c031:	ff d0                	call   eax
  59c033:	83 c4 10             	add    esp,0x10
  59c036:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  59c03a:	c7 44 24 48 ff ff ff 	mov    DWORD PTR [esp+0x48],0xffffffff
  59c041:	ff 
  59c042:	6a 01                	push   0x1
  59c044:	e8 57 80 e6 ff       	call   0x4040a0
  59c049:	db 44 24 50          	fild   DWORD PTR [esp+0x50]
  59c04d:	8b cd                	mov    ecx,ebp
  59c04f:	d8 4d 38             	fmul   DWORD PTR [ebp+0x38]
  59c052:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  59c058:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  59c05c:	e8 ef f3 ff ff       	call   0x59b450
  59c061:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  59c065:	d8 5c 24 10          	fcomp  DWORD PTR [esp+0x10]
  59c069:	df e0                	fnstsw ax
  59c06b:	f6 c4 01             	test   ah,0x1
  59c06e:	75 21                	jne    0x59c091
  59c070:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  59c072:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  59c075:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  59c078:	89 0e                	mov    DWORD PTR [esi],ecx
  59c07a:	89 56 04             	mov    DWORD PTR [esi+0x4],edx
  59c07d:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
  59c080:	8d 45 1c             	lea    eax,[ebp+0x1c]
  59c083:	8b cd                	mov    ecx,ebp
  59c085:	50                   	push   eax
  59c086:	c6 45 2c 01          	mov    BYTE PTR [ebp+0x2c],0x1
  59c08a:	e8 61 f4 ff ff       	call   0x59b4f0
  59c08f:	eb 1c                	jmp    0x59c0ad
  59c091:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  59c095:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
  59c099:	56                   	push   esi
  59c09a:	51                   	push   ecx
  59c09b:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  59c09f:	8b ce                	mov    ecx,esi
  59c0a1:	d9 1c 24             	fstp   DWORD PTR [esp]
  59c0a4:	e8 77 6f 01 00       	call   0x5b3020
  59c0a9:	c6 45 2c 00          	mov    BYTE PTR [ebp+0x2c],0x0
  59c0ad:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  59c0b1:	5f                   	pop    edi
  59c0b2:	5e                   	pop    esi
  59c0b3:	5d                   	pop    ebp
  59c0b4:	5b                   	pop    ebx
  59c0b5:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59c0bc:	83 c4 3c             	add    esp,0x3c
  59c0bf:	c2 04 00             	ret    0x4
