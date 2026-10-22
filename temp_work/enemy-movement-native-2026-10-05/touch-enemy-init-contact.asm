  42dc80:	6a ff                	push   0xffffffff
  42dc82:	68 28 35 62 00       	push   0x623528
  42dc87:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42dc8d:	50                   	push   eax
  42dc8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42dc95:	51                   	push   ecx
  42dc96:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  42dc9a:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  42dc9e:	56                   	push   esi
  42dc9f:	57                   	push   edi
  42dca0:	8b 7c 24 2c          	mov    edi,DWORD PTR [esp+0x2c]
  42dca4:	8b f1                	mov    esi,ecx
  42dca6:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  42dcaa:	57                   	push   edi
  42dcab:	50                   	push   eax
  42dcac:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  42dcb0:	51                   	push   ecx
  42dcb1:	52                   	push   edx
  42dcb2:	50                   	push   eax
  42dcb3:	8b ce                	mov    ecx,esi
  42dcb5:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  42dcb9:	e8 12 96 ff ff       	call   0x4272d0
  42dcbe:	57                   	push   edi
  42dcbf:	8d 8e ac 01 00 00    	lea    ecx,[esi+0x1ac]
  42dcc5:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
  42dccc:	00 
  42dccd:	c7 86 a8 01 00 00 ff 	mov    DWORD PTR [esi+0x1a8],0xffffffff
  42dcd4:	ff ff ff 
  42dcd7:	e8 24 91 ff ff       	call   0x426e00
  42dcdc:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  42dce0:	c7 06 74 c2 64 00    	mov    DWORD PTR [esi],0x64c274
  42dce6:	8b c6                	mov    eax,esi
  42dce8:	5f                   	pop    edi
  42dce9:	5e                   	pop    esi
  42dcea:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42dcf1:	83 c4 10             	add    esp,0x10
  42dcf4:	c2 14 00             	ret    0x14
  42dcf7:	90                   	nop
  42dcf8:	90                   	nop
  42dcf9:	90                   	nop
  42dcfa:	90                   	nop
  42dcfb:	90                   	nop
  42dcfc:	90                   	nop
  42dcfd:	90                   	nop
  42dcfe:	90                   	nop
  42dcff:	90                   	nop
  42dd00:	56                   	push   esi
  42dd01:	8b f1                	mov    esi,ecx
  42dd03:	e8 18 9d fe ff       	call   0x417a20
  42dd08:	f6 44 24 08 01       	test   BYTE PTR [esp+0x8],0x1
  42dd0d:	74 09                	je     0x42dd18
  42dd0f:	56                   	push   esi
  42dd10:	e8 db 08 1d 00       	call   0x5fe5f0
  42dd15:	83 c4 04             	add    esp,0x4
  42dd18:	8b c6                	mov    eax,esi
  42dd1a:	5e                   	pop    esi
  42dd1b:	c2 04 00             	ret    0x4
  42dd1e:	90                   	nop
  42dd1f:	90                   	nop
  42dd20:	6a ff                	push   0xffffffff
  42dd22:	68 4b 35 62 00       	push   0x62354b
  42dd27:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42dd2d:	50                   	push   eax
  42dd2e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42dd35:	51                   	push   ecx
  42dd36:	56                   	push   esi
  42dd37:	8b f1                	mov    esi,ecx
  42dd39:	6a 34                	push   0x34
  42dd3b:	e8 75 c3 1d 00       	call   0x60a0b5
  42dd40:	83 c4 04             	add    esp,0x4
  42dd43:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  42dd47:	85 c0                	test   eax,eax
  42dd49:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  42dd50:	00 
  42dd51:	74 0a                	je     0x42dd5d
  42dd53:	56                   	push   esi
  42dd54:	8b c8                	mov    ecx,eax
  42dd56:	e8 25 ce fd ff       	call   0x40ab80
  42dd5b:	eb 02                	jmp    0x42dd5f
  42dd5d:	33 c0                	xor    eax,eax
  42dd5f:	50                   	push   eax
  42dd60:	8b ce                	mov    ecx,esi
  42dd62:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  42dd69:	ff 
  42dd6a:	e8 a1 59 ff ff       	call   0x423710
  42dd6f:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  42dd73:	5e                   	pop    esi
  42dd74:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42dd7b:	83 c4 10             	add    esp,0x10
  42dd7e:	c3                   	ret
  42dd7f:	90                   	nop
  42dd80:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42dd86:	6a ff                	push   0xffffffff
  42dd88:	68 70 35 62 00       	push   0x623570
  42dd8d:	50                   	push   eax
  42dd8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42dd95:	83 ec 1c             	sub    esp,0x1c
  42dd98:	53                   	push   ebx
  42dd99:	8b 5c 24 30          	mov    ebx,DWORD PTR [esp+0x30]
  42dd9d:	55                   	push   ebp
  42dd9e:	56                   	push   esi
  42dd9f:	57                   	push   edi
  42dda0:	8b f1                	mov    esi,ecx
  42dda2:	53                   	push   ebx
  42dda3:	e8 88 9f ff ff       	call   0x427d30
  42dda8:	8b ce                	mov    ecx,esi
  42ddaa:	e8 71 66 ff ff       	call   0x424420
  42ddaf:	84 c0                	test   al,al
  42ddb1:	0f 85 79 01 00 00    	jne    0x42df30
  42ddb7:	85 db                	test   ebx,ebx
  42ddb9:	0f 84 71 01 00 00    	je     0x42df30
  42ddbf:	8d 44 24 18          	lea    eax,[esp+0x18]
  42ddc3:	8b ce                	mov    ecx,esi
  42ddc5:	50                   	push   eax
  42ddc6:	e8 05 5a ff ff       	call   0x4237d0
  42ddcb:	8b 10                	mov    edx,DWORD PTR [eax]
  42ddcd:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  42ddd1:	85 d2                	test   edx,edx
  42ddd3:	0f 94 44 24 13       	sete   BYTE PTR [esp+0x13]
  42ddd8:	85 c0                	test   eax,eax
  42ddda:	74 18                	je     0x42ddf4
  42dddc:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  42dddf:	8b c8                	mov    ecx,eax
  42dde1:	83 c0 14             	add    eax,0x14
  42dde4:	4f                   	dec    edi
  42dde5:	8b d7                	mov    edx,edi
  42dde7:	85 d2                	test   edx,edx
  42dde9:	89 38                	mov    DWORD PTR [eax],edi
  42ddeb:	75 07                	jne    0x42ddf4
  42dded:	6a 00                	push   0x0
  42ddef:	e8 cc e1 17 00       	call   0x5abfc0
  42ddf4:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  42ddf8:	84 c0                	test   al,al
  42ddfa:	0f 85 30 01 00 00    	jne    0x42df30
  42de00:	8a 86 70 01 00 00    	mov    al,BYTE PTR [esi+0x170]
  42de06:	84 c0                	test   al,al
  42de08:	0f 84 c9 00 00 00    	je     0x42ded7
  42de0e:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  42de12:	51                   	push   ecx
  42de13:	8b ce                	mov    ecx,esi
  42de15:	e8 c6 64 fd ff       	call   0x4042e0
  42de1a:	8b e8                	mov    ebp,eax
  42de1c:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  42de1f:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  42de26:	00 
  42de27:	85 c0                	test   eax,eax
  42de29:	75 64                	jne    0x42de8f
  42de2b:	8a 54 24 3c          	mov    dl,BYTE PTR [esp+0x3c]
  42de2f:	6a 00                	push   0x0
  42de31:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  42de35:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
  42de39:	e8 62 62 fd ff       	call   0x4040a0
  42de3e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  42de43:	83 c9 ff             	or     ecx,0xffffffff
  42de46:	33 c0                	xor    eax,eax
  42de48:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  42de4a:	f7 d1                	not    ecx
  42de4c:	49                   	dec    ecx
  42de4d:	51                   	push   ecx
  42de4e:	68 70 3f 6b 00       	push   0x6b3f70
  42de53:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  42de57:	e8 94 62 fd ff       	call   0x4040f0
  42de5c:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  42de60:	c6 44 24 34 01       	mov    BYTE PTR [esp+0x34],0x1
  42de65:	50                   	push   eax
  42de66:	68 b6 00 00 00       	push   0xb6
  42de6b:	68 38 d6 68 00       	push   0x68d638
  42de70:	68 2c d6 68 00       	push   0x68d62c
  42de75:	e8 76 29 17 00       	call   0x5a07f0
  42de7a:	ff d0                	call   eax
  42de7c:	83 c4 10             	add    esp,0x10
  42de7f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  42de83:	c6 44 24 34 00       	mov    BYTE PTR [esp+0x34],0x0
  42de88:	6a 01                	push   0x1
  42de8a:	e8 11 62 fd ff       	call   0x4040a0
  42de8f:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  42de92:	c7 44 24 34 ff ff ff 	mov    DWORD PTR [esp+0x34],0xffffffff
  42de99:	ff 
  42de9a:	8b 90 60 03 00 00    	mov    edx,DWORD PTR [eax+0x360]
  42dea0:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  42dea4:	3b da                	cmp    ebx,edx
  42dea6:	0f 95 c3             	setne  bl
  42dea9:	85 c0                	test   eax,eax
  42deab:	74 20                	je     0x42decd
  42dead:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  42deb0:	8b c8                	mov    ecx,eax
  42deb2:	83 c0 14             	add    eax,0x14
  42deb5:	4f                   	dec    edi
  42deb6:	8b d7                	mov    edx,edi
  42deb8:	85 d2                	test   edx,edx
  42deba:	89 38                	mov    DWORD PTR [eax],edi
  42debc:	75 07                	jne    0x42dec5
  42debe:	6a 00                	push   0x0
  42dec0:	e8 fb e0 17 00       	call   0x5abfc0
  42dec5:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  42decc:	00 
  42decd:	84 db                	test   bl,bl
  42decf:	75 5f                	jne    0x42df30
  42ded1:	8b 5c 24 3c          	mov    ebx,DWORD PTR [esp+0x3c]
  42ded5:	eb 1b                	jmp    0x42def2
  42ded7:	51                   	push   ecx
  42ded8:	8b cc                	mov    ecx,esp
  42deda:	89 64 24 40          	mov    DWORD PTR [esp+0x40],esp
  42dede:	51                   	push   ecx
  42dedf:	8b ce                	mov    ecx,esi
  42dee1:	e8 ea 58 ff ff       	call   0x4237d0
  42dee6:	e8 75 d1 fd ff       	call   0x40b060
  42deeb:	83 c4 04             	add    esp,0x4
  42deee:	3b d8                	cmp    ebx,eax
  42def0:	75 3e                	jne    0x42df30
  42def2:	b9 50 99 6b 00       	mov    ecx,0x6b9950
  42def7:	e8 74 79 13 00       	call   0x565870
  42defc:	8b f8                	mov    edi,eax
  42defe:	8b 86 a8 01 00 00    	mov    eax,DWORD PTR [esi+0x1a8]
  42df04:	83 f8 ff             	cmp    eax,0xffffffff
  42df07:	74 0c                	je     0x42df15
  42df09:	8b d7                	mov    edx,edi
  42df0b:	2b d0                	sub    edx,eax
  42df0d:	81 fa e8 03 00 00    	cmp    edx,0x3e8
  42df13:	7c 1b                	jl     0x42df30
  42df15:	6a 00                	push   0x0
  42df17:	56                   	push   esi
  42df18:	8b ce                	mov    ecx,esi
  42df1a:	e8 c1 e2 01 00       	call   0x44c1e0
  42df1f:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
  42df22:	8b cb                	mov    ecx,ebx
  42df24:	50                   	push   eax
  42df25:	e8 96 60 0d 00       	call   0x503fc0
  42df2a:	89 be a8 01 00 00    	mov    DWORD PTR [esi+0x1a8],edi
  42df30:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  42df34:	5f                   	pop    edi
  42df35:	5e                   	pop    esi
  42df36:	5d                   	pop    ebp
  42df37:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42df3e:	5b                   	pop    ebx
  42df3f:	83 c4 28             	add    esp,0x28
