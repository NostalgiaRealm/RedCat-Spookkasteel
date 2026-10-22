
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0054ed80 <.text+0x14dd80>:
  54ed80:	6a ff                	push   0xffffffff
  54ed82:	68 e7 da 63 00       	push   0x63dae7
  54ed87:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54ed8d:	50                   	push   eax
  54ed8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54ed95:	83 ec 24             	sub    esp,0x24
  54ed98:	53                   	push   ebx
  54ed99:	55                   	push   ebp
  54ed9a:	56                   	push   esi
  54ed9b:	33 db                	xor    ebx,ebx
  54ed9d:	57                   	push   edi
  54ed9e:	8b f9                	mov    edi,ecx
  54eda0:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  54eda4:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  54eda8:	c7 44 24 3c 01 00 00 	mov    DWORD PTR [esp+0x3c],0x1
  54edaf:	00 
  54edb0:	e8 8b 48 00 00       	call   0x553640
  54edb5:	84 c0                	test   al,al
  54edb7:	0f 84 c0 01 00 00    	je     0x54ef7d
  54edbd:	8a 87 8c 00 00 00    	mov    al,BYTE PTR [edi+0x8c]
  54edc3:	3a c3                	cmp    al,bl
  54edc5:	0f 84 b2 01 00 00    	je     0x54ef7d
  54edcb:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  54edcf:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54edd4:	75 46                	jne    0x54ee1c
  54edd6:	8d 44 24 13          	lea    eax,[esp+0x13]
  54edda:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54edde:	50                   	push   eax
  54eddf:	68 70 3f 6b 00       	push   0x6b3f70
  54ede4:	e8 27 aa eb ff       	call   0x409810
  54ede9:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54eded:	c6 44 24 3c 03       	mov    BYTE PTR [esp+0x3c],0x3
  54edf2:	51                   	push   ecx
  54edf3:	68 4b 01 00 00       	push   0x14b
  54edf8:	68 dc 2c 69 00       	push   0x692cdc
  54edfd:	68 b0 1b 69 00       	push   0x691bb0
  54ee02:	e8 e9 19 05 00       	call   0x5a07f0
  54ee07:	ff d0                	call   eax
  54ee09:	83 c4 10             	add    esp,0x10
  54ee0c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54ee10:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54ee15:	6a 01                	push   0x1
  54ee17:	e8 84 52 eb ff       	call   0x4040a0
  54ee1c:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
  54ee20:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  54ee24:	55                   	push   ebp
  54ee25:	52                   	push   edx
  54ee26:	8d 4f 14             	lea    ecx,[edi+0x14]
  54ee29:	e8 72 24 00 00       	call   0x5512a0
  54ee2e:	8b f0                	mov    esi,eax
  54ee30:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  54ee34:	8b 0e                	mov    ecx,DWORD PTR [esi]
  54ee36:	3b c1                	cmp    eax,ecx
  54ee38:	c6 44 24 3c 04       	mov    BYTE PTR [esp+0x3c],0x4
  54ee3d:	74 2c                	je     0x54ee6b
  54ee3f:	3b c3                	cmp    eax,ebx
  54ee41:	74 15                	je     0x54ee58
  54ee43:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  54ee46:	8b c8                	mov    ecx,eax
  54ee48:	83 c0 14             	add    eax,0x14
  54ee4b:	4a                   	dec    edx
  54ee4c:	3b d3                	cmp    edx,ebx
  54ee4e:	89 10                	mov    DWORD PTR [eax],edx
  54ee50:	75 06                	jne    0x54ee58
  54ee52:	53                   	push   ebx
  54ee53:	e8 68 d1 05 00       	call   0x5abfc0
  54ee58:	8b 06                	mov    eax,DWORD PTR [esi]
  54ee5a:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54ee5e:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  54ee62:	e8 49 56 03 00       	call   0x5844b0
  54ee67:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  54ee6b:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  54ee6f:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54ee74:	3b cb                	cmp    ecx,ebx
  54ee76:	74 09                	je     0x54ee81
  54ee78:	e8 53 aa eb ff       	call   0x4098d0
  54ee7d:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  54ee81:	3b c3                	cmp    eax,ebx
  54ee83:	0f 84 84 00 00 00    	je     0x54ef0d
  54ee89:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  54ee8d:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
  54ee91:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  54ee95:	51                   	push   ecx
  54ee96:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  54ee9a:	52                   	push   edx
  54ee9b:	50                   	push   eax
  54ee9c:	51                   	push   ecx
  54ee9d:	51                   	push   ecx
  54ee9e:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  54eea2:	8b cc                	mov    ecx,esp
  54eea4:	89 64 24 5c          	mov    DWORD PTR [esp+0x5c],esp
  54eea8:	52                   	push   edx
  54eea9:	e8 b2 a8 ef ff       	call   0x449760
  54eeae:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  54eeb2:	8b cf                	mov    ecx,edi
  54eeb4:	50                   	push   eax
  54eeb5:	e8 86 03 00 00       	call   0x54f240
  54eeba:	8b f0                	mov    esi,eax
  54eebc:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54eec0:	8b 0e                	mov    ecx,DWORD PTR [esi]
  54eec2:	3b c1                	cmp    eax,ecx
  54eec4:	c6 44 24 3c 05       	mov    BYTE PTR [esp+0x3c],0x5
  54eec9:	74 2e                	je     0x54eef9
  54eecb:	3b c3                	cmp    eax,ebx
  54eecd:	74 17                	je     0x54eee6
  54eecf:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  54eed2:	8b c8                	mov    ecx,eax
  54eed4:	83 c0 14             	add    eax,0x14
  54eed7:	4f                   	dec    edi
  54eed8:	8b d7                	mov    edx,edi
  54eeda:	3b d3                	cmp    edx,ebx
  54eedc:	89 38                	mov    DWORD PTR [eax],edi
  54eede:	75 06                	jne    0x54eee6
  54eee0:	53                   	push   ebx
  54eee1:	e8 da d0 05 00       	call   0x5abfc0
  54eee6:	8b 0e                	mov    ecx,DWORD PTR [esi]
  54eee8:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  54eeec:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54eef0:	e8 bb 55 03 00       	call   0x5844b0
  54eef5:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54eef9:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  54eefd:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54ef02:	3b cb                	cmp    ecx,ebx
  54ef04:	74 55                	je     0x54ef5b
  54ef06:	e8 c5 a9 eb ff       	call   0x4098d0
  54ef0b:	eb 4a                	jmp    0x54ef57
  54ef0d:	e8 9e 80 fc ff       	call   0x516fb0
  54ef12:	8b c8                	mov    ecx,eax
  54ef14:	e8 c7 48 ee ff       	call   0x4337e0
  54ef19:	85 c0                	test   eax,eax
  54ef1b:	74 3a                	je     0x54ef57
  54ef1d:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  54ef20:	3b c3                	cmp    eax,ebx
  54ef22:	75 05                	jne    0x54ef29
  54ef24:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54ef29:	50                   	push   eax
  54ef2a:	8d 54 24 28          	lea    edx,[esp+0x28]
  54ef2e:	68 8c 1a 6a 00       	push   0x6a1a8c
  54ef33:	52                   	push   edx
  54ef34:	e8 57 f4 05 00       	call   0x5ae390
  54ef39:	50                   	push   eax
  54ef3a:	c6 44 24 4c 06       	mov    BYTE PTR [esp+0x4c],0x6
  54ef3f:	e8 bc 0f 06 00       	call   0x5aff00
  54ef44:	83 c4 10             	add    esp,0x10
  54ef47:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54ef4b:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54ef50:	6a 01                	push   0x1
  54ef52:	e8 49 51 eb ff       	call   0x4040a0
  54ef57:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54ef5b:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  54ef5f:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  54ef64:	3b cb                	cmp    ecx,ebx
  54ef66:	74 19                	je     0x54ef81
  54ef68:	8b 71 14             	mov    esi,DWORD PTR [ecx+0x14]
  54ef6b:	8d 41 14             	lea    eax,[ecx+0x14]
  54ef6e:	4e                   	dec    esi
  54ef6f:	8b d6                	mov    edx,esi
  54ef71:	89 30                	mov    DWORD PTR [eax],esi
  54ef73:	3b d3                	cmp    edx,ebx
  54ef75:	75 06                	jne    0x54ef7d
  54ef77:	53                   	push   ebx
  54ef78:	e8 43 d0 05 00       	call   0x5abfc0
  54ef7d:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54ef81:	8b 74 24 44          	mov    esi,DWORD PTR [esp+0x44]
  54ef85:	3b c3                	cmp    eax,ebx
  54ef87:	89 06                	mov    DWORD PTR [esi],eax
  54ef89:	74 0b                	je     0x54ef96
  54ef8b:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  54ef8e:	41                   	inc    ecx
  54ef8f:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  54ef92:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54ef96:	c7 44 24 20 01 00 00 	mov    DWORD PTR [esp+0x20],0x1
  54ef9d:	00 
  54ef9e:	3b c3                	cmp    eax,ebx
  54efa0:	88 5c 24 3c          	mov    BYTE PTR [esp+0x3c],bl
  54efa4:	74 17                	je     0x54efbd
  54efa6:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  54efa9:	8b c8                	mov    ecx,eax
  54efab:	83 c0 14             	add    eax,0x14
  54efae:	4f                   	dec    edi
  54efaf:	8b d7                	mov    edx,edi
  54efb1:	3b d3                	cmp    edx,ebx
  54efb3:	89 38                	mov    DWORD PTR [eax],edi
  54efb5:	75 06                	jne    0x54efbd
  54efb7:	53                   	push   ebx
  54efb8:	e8 03 d0 05 00       	call   0x5abfc0
  54efbd:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  54efc1:	8b c6                	mov    eax,esi
  54efc3:	5f                   	pop    edi
  54efc4:	5e                   	pop    esi
  54efc5:	5d                   	pop    ebp
  54efc6:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54efcd:	5b                   	pop    ebx
  54efce:	83 c4 30             	add    esp,0x30
  54efd1:	c2 18 00             	ret    0x18
  54efd4:	90                   	nop
  54efd5:	90                   	nop
  54efd6:	90                   	nop
  54efd7:	90                   	nop
  54efd8:	90                   	nop
  54efd9:	90                   	nop
  54efda:	90                   	nop
  54efdb:	90                   	nop
  54efdc:	90                   	nop
  54efdd:	90                   	nop
  54efde:	90                   	nop
  54efdf:	90                   	nop
  54efe0:	6a ff                	push   0xffffffff
  54efe2:	68 47 db 63 00       	push   0x63db47
  54efe7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54efed:	50                   	push   eax
  54efee:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54eff5:	83 ec 24             	sub    esp,0x24
  54eff8:	53                   	push   ebx
  54eff9:	55                   	push   ebp
  54effa:	56                   	push   esi
  54effb:	33 db                	xor    ebx,ebx
  54effd:	57                   	push   edi
  54effe:	8b f9                	mov    edi,ecx
  54f000:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  54f004:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  54f008:	c7 44 24 3c 01 00 00 	mov    DWORD PTR [esp+0x3c],0x1
  54f00f:	00 
  54f010:	e8 2b 46 00 00       	call   0x553640
  54f015:	84 c0                	test   al,al
  54f017:	0f 84 c0 01 00 00    	je     0x54f1dd
  54f01d:	8a 87 8c 00 00 00    	mov    al,BYTE PTR [edi+0x8c]
  54f023:	3a c3                	cmp    al,bl
  54f025:	0f 84 b2 01 00 00    	je     0x54f1dd
  54f02b:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  54f02f:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54f034:	75 46                	jne    0x54f07c
  54f036:	8d 44 24 13          	lea    eax,[esp+0x13]
  54f03a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54f03e:	50                   	push   eax
  54f03f:	68 70 3f 6b 00       	push   0x6b3f70
  54f044:	e8 c7 a7 eb ff       	call   0x409810
  54f049:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54f04d:	c6 44 24 3c 03       	mov    BYTE PTR [esp+0x3c],0x3
  54f052:	51                   	push   ecx
  54f053:	68 4b 01 00 00       	push   0x14b
  54f058:	68 dc 2c 69 00       	push   0x692cdc
  54f05d:	68 b0 1b 69 00       	push   0x691bb0
  54f062:	e8 89 17 05 00       	call   0x5a07f0
  54f067:	ff d0                	call   eax
  54f069:	83 c4 10             	add    esp,0x10
  54f06c:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54f070:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54f075:	6a 01                	push   0x1
  54f077:	e8 24 50 eb ff       	call   0x4040a0
  54f07c:	8b 6c 24 48          	mov    ebp,DWORD PTR [esp+0x48]
  54f080:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  54f084:	55                   	push   ebp
  54f085:	52                   	push   edx
  54f086:	8d 4f 14             	lea    ecx,[edi+0x14]
  54f089:	e8 12 22 00 00       	call   0x5512a0
  54f08e:	8b f0                	mov    esi,eax
  54f090:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  54f094:	8b 0e                	mov    ecx,DWORD PTR [esi]
  54f096:	3b c1                	cmp    eax,ecx
  54f098:	c6 44 24 3c 04       	mov    BYTE PTR [esp+0x3c],0x4
  54f09d:	74 2c                	je     0x54f0cb
  54f09f:	3b c3                	cmp    eax,ebx
  54f0a1:	74 15                	je     0x54f0b8
  54f0a3:	8b 50 14             	mov    edx,DWORD PTR [eax+0x14]
  54f0a6:	8b c8                	mov    ecx,eax
  54f0a8:	83 c0 14             	add    eax,0x14
  54f0ab:	4a                   	dec    edx
  54f0ac:	3b d3                	cmp    edx,ebx
  54f0ae:	89 10                	mov    DWORD PTR [eax],edx
  54f0b0:	75 06                	jne    0x54f0b8
  54f0b2:	53                   	push   ebx
  54f0b3:	e8 08 cf 05 00       	call   0x5abfc0
  54f0b8:	8b 06                	mov    eax,DWORD PTR [esi]
  54f0ba:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  54f0be:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  54f0c2:	e8 e9 53 03 00       	call   0x5844b0
  54f0c7:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  54f0cb:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  54f0cf:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54f0d4:	3b cb                	cmp    ecx,ebx
  54f0d6:	74 09                	je     0x54f0e1
  54f0d8:	e8 f3 a7 eb ff       	call   0x4098d0
  54f0dd:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  54f0e1:	3b c3                	cmp    eax,ebx
  54f0e3:	0f 84 84 00 00 00    	je     0x54f16d
  54f0e9:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
  54f0ed:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
  54f0f1:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  54f0f5:	51                   	push   ecx
  54f0f6:	8b 4c 24 50          	mov    ecx,DWORD PTR [esp+0x50]
  54f0fa:	52                   	push   edx
  54f0fb:	50                   	push   eax
  54f0fc:	51                   	push   ecx
  54f0fd:	51                   	push   ecx
  54f0fe:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  54f102:	8b cc                	mov    ecx,esp
  54f104:	89 64 24 5c          	mov    DWORD PTR [esp+0x5c],esp
  54f108:	52                   	push   edx
  54f109:	e8 52 a6 ef ff       	call   0x449760
  54f10e:	8d 44 24 5c          	lea    eax,[esp+0x5c]
  54f112:	8b cf                	mov    ecx,edi
  54f114:	50                   	push   eax
  54f115:	e8 f6 07 00 00       	call   0x54f910
  54f11a:	8b f0                	mov    esi,eax
  54f11c:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54f120:	8b 0e                	mov    ecx,DWORD PTR [esi]
  54f122:	3b c1                	cmp    eax,ecx
  54f124:	c6 44 24 3c 05       	mov    BYTE PTR [esp+0x3c],0x5
  54f129:	74 2e                	je     0x54f159
  54f12b:	3b c3                	cmp    eax,ebx
  54f12d:	74 17                	je     0x54f146
  54f12f:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  54f132:	8b c8                	mov    ecx,eax
  54f134:	83 c0 14             	add    eax,0x14
  54f137:	4f                   	dec    edi
  54f138:	8b d7                	mov    edx,edi
  54f13a:	3b d3                	cmp    edx,ebx
  54f13c:	89 38                	mov    DWORD PTR [eax],edi
  54f13e:	75 06                	jne    0x54f146
  54f140:	53                   	push   ebx
  54f141:	e8 7a ce 05 00       	call   0x5abfc0
  54f146:	8b 0e                	mov    ecx,DWORD PTR [esi]
  54f148:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  54f14c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f150:	e8 5b 53 03 00       	call   0x5844b0
  54f155:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54f159:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  54f15d:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54f162:	3b cb                	cmp    ecx,ebx
  54f164:	74 55                	je     0x54f1bb
  54f166:	e8 65 a7 eb ff       	call   0x4098d0
  54f16b:	eb 4a                	jmp    0x54f1b7
  54f16d:	e8 3e 7e fc ff       	call   0x516fb0
  54f172:	8b c8                	mov    ecx,eax
  54f174:	e8 67 46 ee ff       	call   0x4337e0
  54f179:	85 c0                	test   eax,eax
  54f17b:	74 3a                	je     0x54f1b7
  54f17d:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  54f180:	3b c3                	cmp    eax,ebx
  54f182:	75 05                	jne    0x54f189
  54f184:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  54f189:	50                   	push   eax
  54f18a:	8d 54 24 28          	lea    edx,[esp+0x28]
  54f18e:	68 8c 1a 6a 00       	push   0x6a1a8c
  54f193:	52                   	push   edx
  54f194:	e8 f7 f1 05 00       	call   0x5ae390
  54f199:	50                   	push   eax
  54f19a:	c6 44 24 4c 06       	mov    BYTE PTR [esp+0x4c],0x6
  54f19f:	e8 5c 0d 06 00       	call   0x5aff00
  54f1a4:	83 c4 10             	add    esp,0x10
  54f1a7:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  54f1ab:	c6 44 24 3c 02       	mov    BYTE PTR [esp+0x3c],0x2
  54f1b0:	6a 01                	push   0x1
  54f1b2:	e8 e9 4e eb ff       	call   0x4040a0
  54f1b7:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54f1bb:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  54f1bf:	c6 44 24 3c 01       	mov    BYTE PTR [esp+0x3c],0x1
  54f1c4:	3b cb                	cmp    ecx,ebx
  54f1c6:	74 19                	je     0x54f1e1
  54f1c8:	8b 71 14             	mov    esi,DWORD PTR [ecx+0x14]
  54f1cb:	8d 41 14             	lea    eax,[ecx+0x14]
  54f1ce:	4e                   	dec    esi
  54f1cf:	8b d6                	mov    edx,esi
  54f1d1:	89 30                	mov    DWORD PTR [eax],esi
  54f1d3:	3b d3                	cmp    edx,ebx
  54f1d5:	75 06                	jne    0x54f1dd
  54f1d7:	53                   	push   ebx
  54f1d8:	e8 e3 cd 05 00       	call   0x5abfc0
  54f1dd:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54f1e1:	8b 74 24 44          	mov    esi,DWORD PTR [esp+0x44]
  54f1e5:	3b c3                	cmp    eax,ebx
  54f1e7:	89 06                	mov    DWORD PTR [esi],eax
  54f1e9:	74 0b                	je     0x54f1f6
  54f1eb:	8b 48 14             	mov    ecx,DWORD PTR [eax+0x14]
  54f1ee:	41                   	inc    ecx
  54f1ef:	89 48 14             	mov    DWORD PTR [eax+0x14],ecx
  54f1f2:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  54f1f6:	c7 44 24 20 01 00 00 	mov    DWORD PTR [esp+0x20],0x1
  54f1fd:	00 
  54f1fe:	3b c3                	cmp    eax,ebx
  54f200:	88 5c 24 3c          	mov    BYTE PTR [esp+0x3c],bl
  54f204:	74 17                	je     0x54f21d
  54f206:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  54f209:	8b c8                	mov    ecx,eax
  54f20b:	83 c0 14             	add    eax,0x14
  54f20e:	4f                   	dec    edi
  54f20f:	8b d7                	mov    edx,edi
  54f211:	3b d3                	cmp    edx,ebx
  54f213:	89 38                	mov    DWORD PTR [eax],edi
  54f215:	75 06                	jne    0x54f21d
  54f217:	53                   	push   ebx
  54f218:	e8 a3 cd 05 00       	call   0x5abfc0
  54f21d:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  54f221:	8b c6                	mov    eax,esi
  54f223:	5f                   	pop    edi
  54f224:	5e                   	pop    esi
  54f225:	5d                   	pop    ebp
  54f226:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  54f22d:	5b                   	pop    ebx
  54f22e:	83 c4 30             	add    esp,0x30
  54f231:	c2 18 00             	ret    0x18
  54f234:	90                   	nop
  54f235:	90                   	nop
  54f236:	90                   	nop
  54f237:	90                   	nop
  54f238:	90                   	nop
  54f239:	90                   	nop
  54f23a:	90                   	nop
  54f23b:	90                   	nop
  54f23c:	90                   	nop
  54f23d:	90                   	nop
  54f23e:	90                   	nop
  54f23f:	90                   	nop
  54f240:	6a ff                	push   0xffffffff
  54f242:	68 f2 db 63 00       	push   0x63dbf2
  54f247:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  54f24d:	50                   	push   eax
  54f24e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  54f255:	83 ec 60             	sub    esp,0x60
  54f258:	53                   	push   ebx
  54f259:	55                   	push   ebp
  54f25a:	8b d9                	mov    ebx,ecx
  54f25c:	33 ed                	xor    ebp,ebp
  54f25e:	56                   	push   esi
  54f25f:	57                   	push   edi
  54f260:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  54f264:	89 6c 24 2c          	mov    DWORD PTR [esp+0x2c],ebp
  54f268:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  54f26c:	c7 44 24 78 01 00 00 	mov    DWORD PTR [esp+0x78],0x1
  54f273:	00 
  54f274:	89 6c 24 14          	mov    DWORD PTR [esp+0x14],ebp
  54f278:	e8 33 52 03 00       	call   0x5844b0
  54f27d:	8b 84 24 84 00 00 00 	mov    eax,DWORD PTR [esp+0x84]
  54f284:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f289:	3b c5                	cmp    eax,ebp
  54f28b:	75 46                	jne    0x54f2d3
  54f28d:	8d 44 24 10          	lea    eax,[esp+0x10]
  54f291:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f295:	50                   	push   eax
  54f296:	68 70 3f 6b 00       	push   0x6b3f70
  54f29b:	e8 70 a5 eb ff       	call   0x409810
  54f2a0:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f2a4:	c6 44 24 78 03       	mov    BYTE PTR [esp+0x78],0x3
  54f2a9:	51                   	push   ecx
  54f2aa:	68 b6 00 00 00       	push   0xb6
  54f2af:	68 38 d6 68 00       	push   0x68d638
  54f2b4:	68 2c d6 68 00       	push   0x68d62c
  54f2b9:	e8 32 15 05 00       	call   0x5a07f0
  54f2be:	ff d0                	call   eax
  54f2c0:	83 c4 10             	add    esp,0x10
  54f2c3:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  54f2c7:	c6 44 24 78 02       	mov    BYTE PTR [esp+0x78],0x2
  54f2cc:	6a 01                	push   0x1
  54f2ce:	e8 cd 4d eb ff       	call   0x4040a0
  54f2d3:	8b 94 24 84 00 00 00 	mov    edx,DWORD PTR [esp+0x84]
  54f2da:	8d 8b 04 01 00 00    	lea    ecx,[ebx+0x104]
  54f2e0:	8b 42 38             	mov    eax,DWORD PTR [edx+0x38]
  54f2e3:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  54f2e7:	e8 d4 7f f5 ff       	call   0x4a72c0
  54f2ec:	d8 4c 24 20          	fmul   DWORD PTR [esp+0x20]
  54f2f0:	51                   	push   ecx
  54f2f1:	d8 8c 24 90 00 00 00 	fmul   DWORD PTR [esp+0x90]
  54f2f8:	d9 1c 24             	fstp   DWORD PTR [esp]
  54f2fb:	e8 30 dd ff ff       	call   0x54d030
  54f300:	d9 5c 24 1c          	fstp   DWORD PTR [esp+0x1c]
  54f304:	83 c4 04             	add    esp,0x4
  54f307:	e8 34 43 00 00       	call   0x553640
  54f30c:	84 c0                	test   al,al
  54f30e:	0f 84 aa 05 00 00    	je     0x54f8be
  54f314:	8a 83 8c 00 00 00    	mov    al,BYTE PTR [ebx+0x8c]
  54f31a:	84 c0                	test   al,al
  54f31c:	0f 84 9c 05 00 00    	je     0x54f8be
  54f322:	8d 7b 54             	lea    edi,[ebx+0x54]
  54f325:	8b cf                	mov    ecx,edi
  54f327:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  54f32b:	e8 90 f1 ef ff       	call   0x44e4c0
  54f330:	83 f8 19             	cmp    eax,0x19
  54f333:	7e 09                	jle    0x54f33e
  54f335:	6a 01                	push   0x1
  54f337:	8b cb                	mov    ecx,ebx
  54f339:	e8 f2 0f 00 00       	call   0x550330
  54f33e:	e8 6d 7c fc ff       	call   0x516fb0
  54f343:	8b c8                	mov    ecx,eax
  54f345:	e8 96 44 ee ff       	call   0x4337e0
  54f34a:	85 c0                	test   eax,eax
  54f34c:	0f 84 b7 00 00 00    	je     0x54f409
  54f352:	39 ac 24 84 00 00 00 	cmp    DWORD PTR [esp+0x84],ebp
  54f359:	75 46                	jne    0x54f3a1
  54f35b:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  54f35f:	51                   	push   ecx
  54f360:	68 70 3f 6b 00       	push   0x6b3f70
  54f365:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  54f369:	e8 a2 a4 eb ff       	call   0x409810
  54f36e:	8d 54 24 30          	lea    edx,[esp+0x30]
  54f372:	c6 44 24 78 04       	mov    BYTE PTR [esp+0x78],0x4
  54f377:	52                   	push   edx
  54f378:	68 b6 00 00 00       	push   0xb6
  54f37d:	68                   	.byte 0x68
  54f37e:	38 d6                	cmp    dh,dl
