  45dca0:	6a ff                	push   0xffffffff
  45dca2:	68 ee 72 62 00       	push   0x6272ee
  45dca7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  45dcad:	50                   	push   eax
  45dcae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  45dcb5:	83 ec 40             	sub    esp,0x40
  45dcb8:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  45dcbc:	53                   	push   ebx
  45dcbd:	55                   	push   ebp
  45dcbe:	56                   	push   esi
  45dcbf:	57                   	push   edi
  45dcc0:	8b f1                	mov    esi,ecx
  45dcc2:	50                   	push   eax
  45dcc3:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
  45dcc7:	e8 e4 3f 0a 00       	call   0x501cb0
  45dccc:	8d 8e f8 00 00 00    	lea    ecx,[esi+0xf8]
  45dcd2:	c7 44 24 58 00 00 00 	mov    DWORD PTR [esp+0x58],0x0
  45dcd9:	00 
  45dcda:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
  45dce0:	e8 cb 67 12 00       	call   0x5844b0
  45dce5:	8d be fc 00 00 00    	lea    edi,[esi+0xfc]
  45dceb:	c6 44 24 58 01       	mov    BYTE PTR [esp+0x58],0x1
  45dcf0:	bb 0f 00 00 00       	mov    ebx,0xf
  45dcf5:	8d 6f 0c             	lea    ebp,[edi+0xc]
  45dcf8:	8b cd                	mov    ecx,ebp
  45dcfa:	e8 b1 fc 01 00       	call   0x47d9b0
  45dcff:	81 c5 5c 01 00 00    	add    ebp,0x15c
  45dd05:	4b                   	dec    ebx
  45dd06:	75 f0                	jne    0x45dcf8
  45dd08:	33 db                	xor    ebx,ebx
  45dd0a:	8d 8e bc 15 00 00    	lea    ecx,[esi+0x15bc]
  45dd10:	6a ff                	push   0xffffffff
  45dd12:	c6 86 b4 15 00 00 01 	mov    BYTE PTR [esi+0x15b4],0x1
  45dd19:	89 9e b8 15 00 00    	mov    DWORD PTR [esi+0x15b8],ebx
  45dd1f:	e8 8c 64 fa ff       	call   0x4041b0
  45dd24:	8d 8e d0 15 00 00    	lea    ecx,[esi+0x15d0]
  45dd2a:	6a ff                	push   0xffffffff
  45dd2c:	89 9e cc 15 00 00    	mov    DWORD PTR [esi+0x15cc],ebx
  45dd32:	e8 79 64 fa ff       	call   0x4041b0
  45dd37:	c7 06 0c d7 64 00    	mov    DWORD PTR [esi],0x64d70c
  45dd3d:	bd 0f 00 00 00       	mov    ebp,0xf
  45dd42:	8b 4c 24 60          	mov    ecx,DWORD PTR [esp+0x60]
  45dd46:	56                   	push   esi
  45dd47:	51                   	push   ecx
  45dd48:	8d 4f 0c             	lea    ecx,[edi+0xc]
  45dd4b:	e8 00 fe 01 00       	call   0x47db50
  45dd50:	8b cf                	mov    ecx,edi
  45dd52:	e8 19 53 15 00       	call   0x5b3070
  45dd57:	81 c7 5c 01 00 00    	add    edi,0x15c
  45dd5d:	4d                   	dec    ebp
  45dd5e:	75 e2                	jne    0x45dd42
  45dd60:	8d 8e 60 15 00 00    	lea    ecx,[esi+0x1560]
  45dd66:	e8 05 53 15 00       	call   0x5b3070
  45dd6b:	8d 8e 6c 15 00 00    	lea    ecx,[esi+0x156c]
  45dd71:	e8 fa 52 15 00       	call   0x5b3070
  45dd76:	8d 8e 78 15 00 00    	lea    ecx,[esi+0x1578]
  45dd7c:	e8 ef 52 15 00       	call   0x5b3070
  45dd81:	8d 8e 84 15 00 00    	lea    ecx,[esi+0x1584]
  45dd87:	e8 e4 52 15 00       	call   0x5b3070
  45dd8c:	8d 8e 9c 15 00 00    	lea    ecx,[esi+0x159c]
  45dd92:	e8 d9 52 15 00       	call   0x5b3070
  45dd97:	8d 8e 90 15 00 00    	lea    ecx,[esi+0x1590]
  45dd9d:	e8 ce 52 15 00       	call   0x5b3070
  45dda2:	8d 8e a8 15 00 00    	lea    ecx,[esi+0x15a8]
  45dda8:	e8 c3 52 15 00       	call   0x5b3070
  45ddad:	8b ce                	mov    ecx,esi
  45ddaf:	e8 3c 0f 00 00       	call   0x45ecf0
  45ddb4:	8a 54 24 60          	mov    dl,BYTE PTR [esp+0x60]
  45ddb8:	53                   	push   ebx
  45ddb9:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  45ddbd:	88 54 24 34          	mov    BYTE PTR [esp+0x34],dl
  45ddc1:	e8 da 62 fa ff       	call   0x4040a0
  45ddc6:	bf e0 22 69 00       	mov    edi,0x6922e0
  45ddcb:	83 c9 ff             	or     ecx,0xffffffff
  45ddce:	33 c0                	xor    eax,eax
  45ddd0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  45ddd2:	f7 d1                	not    ecx
  45ddd4:	49                   	dec    ecx
  45ddd5:	51                   	push   ecx
  45ddd6:	68 e0 22 69 00       	push   0x6922e0
  45dddb:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  45dddf:	e8 0c 63 fa ff       	call   0x4040f0
  45dde4:	8a 44 24 60          	mov    al,BYTE PTR [esp+0x60]
  45dde8:	53                   	push   ebx
  45dde9:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  45dded:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  45ddf2:	88 44 24 24          	mov    BYTE PTR [esp+0x24],al
  45ddf6:	e8 a5 62 fa ff       	call   0x4040a0
  45ddfb:	bf d0 22 69 00       	mov    edi,0x6922d0
  45de00:	83 c9 ff             	or     ecx,0xffffffff
  45de03:	33 c0                	xor    eax,eax
  45de05:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  45de07:	f7 d1                	not    ecx
  45de09:	49                   	dec    ecx
  45de0a:	51                   	push   ecx
  45de0b:	68 d0 22 69 00       	push   0x6922d0
  45de10:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  45de14:	e8 d7 62 fa ff       	call   0x4040f0
  45de19:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  45de1d:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  45de21:	c6 44 24 58 04       	mov    BYTE PTR [esp+0x58],0x4
  45de26:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  45de2a:	e8 81 66 12 00       	call   0x5844b0
  45de2f:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  45de34:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  45de39:	3b c3                	cmp    eax,ebx
  45de3b:	75 05                	jne    0x45de42
  45de3d:	e8 3e d4 0f 00       	call   0x55b280
  45de42:	8b f8                	mov    edi,eax
  45de44:	39 9f d8 00 00 00    	cmp    DWORD PTR [edi+0xd8],ebx
  45de4a:	75 46                	jne    0x45de92
  45de4c:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  45de50:	51                   	push   ecx
  45de51:	68 70 3f 6b 00       	push   0x6b3f70
  45de56:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  45de5a:	e8 b1 b9 fa ff       	call   0x409810
  45de5f:	8d 54 24 40          	lea    edx,[esp+0x40]
  45de63:	c6 44 24 58 06       	mov    BYTE PTR [esp+0x58],0x6
  45de68:	52                   	push   edx
  45de69:	68 88 01 00 00       	push   0x188
  45de6e:	68 58 eb 68 00       	push   0x68eb58
  45de73:	68 4c eb 68 00       	push   0x68eb4c
  45de78:	e8 73 29 14 00       	call   0x5a07f0
  45de7d:	ff d0                	call   eax
  45de7f:	83 c4 10             	add    esp,0x10
  45de82:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  45de86:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  45de8b:	6a 01                	push   0x1
  45de8d:	e8 0e 62 fa ff       	call   0x4040a0
  45de92:	8b 8f d8 00 00 00    	mov    ecx,DWORD PTR [edi+0xd8]
  45de98:	8d 44 24 30          	lea    eax,[esp+0x30]
  45de9c:	8d 54 24 18          	lea    edx,[esp+0x18]
  45dea0:	50                   	push   eax
  45dea1:	52                   	push   edx
  45dea2:	e8 d9 fa 0a 00       	call   0x50d980
  45dea7:	8b f8                	mov    edi,eax
  45dea9:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  45dead:	8b 07                	mov    eax,DWORD PTR [edi]
  45deaf:	3b c8                	cmp    ecx,eax
  45deb1:	c6 44 24 58 07       	mov    BYTE PTR [esp+0x58],0x7
  45deb6:	74 18                	je     0x45ded0
  45deb8:	3b cb                	cmp    ecx,ebx
  45deba:	74 05                	je     0x45dec1
  45debc:	e8 0f ba fa ff       	call   0x4098d0
  45dec1:	8b 07                	mov    eax,DWORD PTR [edi]
  45dec3:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  45dec7:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  45decb:	e8 e0 65 12 00       	call   0x5844b0
  45ded0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  45ded4:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  45ded9:	e8 32 f4 11 00       	call   0x57d310
  45dede:	39 5c 24 28          	cmp    DWORD PTR [esp+0x28],ebx
  45dee2:	0f 86 bd 00 00 00    	jbe    0x45dfa5
  45dee8:	8b 3d e0 8d 6c 00    	mov    edi,DWORD PTR ds:0x6c8de0
  45deee:	3b fb                	cmp    edi,ebx
  45def0:	75 07                	jne    0x45def9
  45def2:	e8 89 d3 0f 00       	call   0x55b280
  45def7:	8b f8                	mov    edi,eax
  45def9:	39 9f d8 00 00 00    	cmp    DWORD PTR [edi+0xd8],ebx
  45deff:	75 46                	jne    0x45df47
  45df01:	8d 4c 24 60          	lea    ecx,[esp+0x60]
  45df05:	51                   	push   ecx
  45df06:	68 70 3f 6b 00       	push   0x6b3f70
  45df0b:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  45df0f:	e8 fc b8 fa ff       	call   0x409810
  45df14:	8d 54 24 40          	lea    edx,[esp+0x40]
  45df18:	c6 44 24 58 08       	mov    BYTE PTR [esp+0x58],0x8
  45df1d:	52                   	push   edx
  45df1e:	68 88 01 00 00       	push   0x188
  45df23:	68 58 eb 68 00       	push   0x68eb58
  45df28:	68 4c eb 68 00       	push   0x68eb4c
  45df2d:	e8 be 28 14 00       	call   0x5a07f0
  45df32:	ff d0                	call   eax
  45df34:	83 c4 10             	add    esp,0x10
  45df37:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  45df3b:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  45df40:	6a 01                	push   0x1
  45df42:	e8 59 61 fa ff       	call   0x4040a0
  45df47:	8b 8f d8 00 00 00    	mov    ecx,DWORD PTR [edi+0xd8]
  45df4d:	8d 44 24 20          	lea    eax,[esp+0x20]
  45df51:	8d 54 24 18          	lea    edx,[esp+0x18]
  45df55:	50                   	push   eax
  45df56:	52                   	push   edx
  45df57:	e8 24 fa 0a 00       	call   0x50d980
  45df5c:	8b f8                	mov    edi,eax
  45df5e:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  45df62:	8b 0f                	mov    ecx,DWORD PTR [edi]
  45df64:	3b c1                	cmp    eax,ecx
  45df66:	c6 44 24 58 09       	mov    BYTE PTR [esp+0x58],0x9
  45df6b:	74 2a                	je     0x45df97
  45df6d:	3b c3                	cmp    eax,ebx
  45df6f:	74 17                	je     0x45df88
  45df71:	8b 68 14             	mov    ebp,DWORD PTR [eax+0x14]
  45df74:	8b c8                	mov    ecx,eax
  45df76:	83 c0 14             	add    eax,0x14
  45df79:	4d                   	dec    ebp
  45df7a:	8b d5                	mov    edx,ebp
  45df7c:	3b d3                	cmp    edx,ebx
  45df7e:	89 28                	mov    DWORD PTR [eax],ebp
  45df80:	75 06                	jne    0x45df88
  45df82:	53                   	push   ebx
  45df83:	e8 38 e0 14 00       	call   0x5abfc0
  45df88:	8b 07                	mov    eax,DWORD PTR [edi]
  45df8a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  45df8e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  45df92:	e8 19 65 12 00       	call   0x5844b0
  45df97:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  45df9b:	c6 44 24 58 05       	mov    BYTE PTR [esp+0x58],0x5
  45dfa0:	e8 6b f3 11 00       	call   0x57d310
  45dfa5:	39 5c 24 10          	cmp    DWORD PTR [esp+0x10],ebx
  45dfa9:	74 31                	je     0x45dfdc
  45dfab:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  45dfaf:	3b cb                	cmp    ecx,ebx
  45dfb1:	74 29                	je     0x45dfdc
  45dfb3:	51                   	push   ecx
  45dfb4:	8b c4                	mov    eax,esp
  45dfb6:	89 64 24 64          	mov    DWORD PTR [esp+0x64],esp
  45dfba:	89 08                	mov    DWORD PTR [eax],ecx
  45dfbc:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  45dfc0:	3b c3                	cmp    eax,ebx
  45dfc2:	74 03                	je     0x45dfc7
  45dfc4:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  45dfc7:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  45dfcb:	c6 44 24 5c 05       	mov    BYTE PTR [esp+0x5c],0x5
  45dfd0:	e8 0b 4e fb ff       	call   0x412de0
  45dfd5:	8b c8                	mov    ecx,eax
  45dfd7:	e8 c4 ce 0a 00       	call   0x50aea0
  45dfdc:	8b 8e f8 00 00 00    	mov    ecx,DWORD PTR [esi+0xf8]
  45dfe2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  45dfe6:	8d be f8 00 00 00    	lea    edi,[esi+0xf8]
  45dfec:	3b c8                	cmp    ecx,eax
  45dfee:	74 20                	je     0x45e010
  45dff0:	3b cb                	cmp    ecx,ebx
  45dff2:	74 0f                	je     0x45e003
  45dff4:	8b 41 14             	mov    eax,DWORD PTR [ecx+0x14]
  45dff7:	48                   	dec    eax
  45dff8:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
  45dffb:	75 06                	jne    0x45e003
  45dffd:	53                   	push   ebx
  45dffe:	e8 bd df 14 00       	call   0x5abfc0
