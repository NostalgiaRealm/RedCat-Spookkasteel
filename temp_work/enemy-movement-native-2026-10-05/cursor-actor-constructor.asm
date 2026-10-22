  421fa0:	6a ff                	push   0xffffffff
  421fa2:	68 a8 23 62 00       	push   0x6223a8
  421fa7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  421fad:	50                   	push   eax
  421fae:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  421fb5:	51                   	push   ecx
  421fb6:	53                   	push   ebx
  421fb7:	55                   	push   ebp
  421fb8:	8b e9                	mov    ebp,ecx
  421fba:	56                   	push   esi
  421fbb:	57                   	push   edi
  421fbc:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  421fc0:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  421fc4:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  421fc8:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  421fcc:	83 ec 14             	sub    esp,0x14
  421fcf:	b9 05 00 00 00       	mov    ecx,0x5
  421fd4:	8b fc                	mov    edi,esp
  421fd6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  421fd8:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  421fdc:	50                   	push   eax
  421fdd:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  421fe1:	51                   	push   ecx
  421fe2:	33 db                	xor    ebx,ebx
  421fe4:	52                   	push   edx
  421fe5:	50                   	push   eax
  421fe6:	8b cd                	mov    ecx,ebp
  421fe8:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  421fec:	e8 8f 32 17 00       	call   0x595280
  421ff1:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  421ff5:	8b 74 24 38          	mov    esi,DWORD PTR [esp+0x38]
  421ff9:	8d bd 48 03 00 00    	lea    edi,[ebp+0x348]
  421fff:	89 8d 44 03 00 00    	mov    DWORD PTR [ebp+0x344],ecx
  422005:	56                   	push   esi
  422006:	8b cf                	mov    ecx,edi
  422008:	c6 44 24 20 01       	mov    BYTE PTR [esp+0x20],0x1
  42200d:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
  422011:	e8 3a 94 18 00       	call   0x5ab450
  422016:	8a 56 14             	mov    dl,BYTE PTR [esi+0x14]
  422019:	83 c6 14             	add    esi,0x14
  42201c:	8d 6f 14             	lea    ebp,[edi+0x14]
  42201f:	c6 44 24 1c 02       	mov    BYTE PTR [esp+0x1c],0x2
  422024:	88 55 00             	mov    BYTE PTR [ebp+0x0],dl
  422027:	89 5d 04             	mov    DWORD PTR [ebp+0x4],ebx
  42202a:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42202d:	89 5d 0c             	mov    DWORD PTR [ebp+0xc],ebx
  422030:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  422033:	8b 0d a8 ab 64 00    	mov    ecx,DWORD PTR ds:0x64aba8
  422039:	8b d8                	mov    ebx,eax
  42203b:	3b cb                	cmp    ecx,ebx
  42203d:	73 02                	jae    0x422041
  42203f:	8b d9                	mov    ebx,ecx
  422041:	3b ee                	cmp    ebp,esi
  422043:	75 61                	jne    0x4220a6
  422045:	85 db                	test   ebx,ebx
  422047:	8b f1                	mov    esi,ecx
  422049:	76 05                	jbe    0x422050
  42204b:	e8 f7 c6 1d 00       	call   0x5fe747
  422050:	8b cd                	mov    ecx,ebp
  422052:	e8 b9 ad fe ff       	call   0x40ce10
  422057:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
  42205a:	2b c3                	sub    eax,ebx
  42205c:	3b c6                	cmp    eax,esi
  42205e:	73 02                	jae    0x422062
  422060:	8b f0                	mov    esi,eax
  422062:	85 f6                	test   esi,esi
  422064:	76 30                	jbe    0x422096
  422066:	8b 4d 04             	mov    ecx,DWORD PTR [ebp+0x4]
  422069:	2b c6                	sub    eax,esi
  42206b:	03 d9                	add    ebx,ecx
  42206d:	50                   	push   eax
  42206e:	8d 0c 33             	lea    ecx,[ebx+esi*1]
  422071:	51                   	push   ecx
  422072:	53                   	push   ebx
  422073:	e8 d8 8a 1e 00       	call   0x60ab50
  422078:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
  42207b:	83 c4 0c             	add    esp,0xc
  42207e:	2b de                	sub    ebx,esi
  422080:	8b cd                	mov    ecx,ebp
  422082:	6a 00                	push   0x0
  422084:	53                   	push   ebx
  422085:	e8 b6 f8 fd ff       	call   0x401940
  42208a:	84 c0                	test   al,al
  42208c:	74 08                	je     0x422096
  42208e:	53                   	push   ebx
  42208f:	8b cd                	mov    ecx,ebp
  422091:	e8 fa 20 fe ff       	call   0x404190
  422096:	6a 00                	push   0x0
  422098:	6a 00                	push   0x0
  42209a:	8b cd                	mov    ecx,ebp
  42209c:	e8 0f a9 fe ff       	call   0x40c9b0
  4220a1:	e9 86 00 00 00       	jmp    0x42212c
  4220a6:	85 db                	test   ebx,ebx
  4220a8:	76 44                	jbe    0x4220ee
  4220aa:	3b d8                	cmp    ebx,eax
  4220ac:	75 40                	jne    0x4220ee
  4220ae:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  4220b1:	85 c0                	test   eax,eax
  4220b3:	75 05                	jne    0x4220ba
  4220b5:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4220ba:	80 78 ff fe          	cmp    BYTE PTR [eax-0x1],0xfe
  4220be:	73 2e                	jae    0x4220ee
  4220c0:	6a 01                	push   0x1
  4220c2:	8b cd                	mov    ecx,ebp
  4220c4:	e8 d7 1f fe ff       	call   0x4040a0
  4220c9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
  4220cc:	85 c0                	test   eax,eax
  4220ce:	75 05                	jne    0x4220d5
  4220d0:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4220d5:	89 45 04             	mov    DWORD PTR [ebp+0x4],eax
  4220d8:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
  4220db:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
  4220de:	8b 76 0c             	mov    esi,DWORD PTR [esi+0xc]
  4220e1:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
  4220e4:	8a 48 ff             	mov    cl,BYTE PTR [eax-0x1]
  4220e7:	fe c1                	inc    cl
  4220e9:	88 48 ff             	mov    BYTE PTR [eax-0x1],cl
  4220ec:	eb 3e                	jmp    0x42212c
  4220ee:	6a 01                	push   0x1
  4220f0:	53                   	push   ebx
  4220f1:	8b cd                	mov    ecx,ebp
  4220f3:	e8 48 f8 fd ff       	call   0x401940
  4220f8:	84 c0                	test   al,al
  4220fa:	74 30                	je     0x42212c
  4220fc:	8b 76 04             	mov    esi,DWORD PTR [esi+0x4]
  4220ff:	85 f6                	test   esi,esi
  422101:	75 05                	jne    0x422108
  422103:	be b4 a3 64 00       	mov    esi,0x64a3b4
  422108:	8b 7d 04             	mov    edi,DWORD PTR [ebp+0x4]
  42210b:	8b cb                	mov    ecx,ebx
  42210d:	8b d1                	mov    edx,ecx
  42210f:	c1 e9 02             	shr    ecx,0x2
  422112:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  422114:	8b ca                	mov    ecx,edx
  422116:	83 e1 03             	and    ecx,0x3
  422119:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42211b:	8b 7c 24 34          	mov    edi,DWORD PTR [esp+0x34]
  42211f:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  422122:	8b 6d 04             	mov    ebp,DWORD PTR [ebp+0x4]
  422125:	c6 44 1d 00 00       	mov    BYTE PTR [ebp+ebx*1+0x0],0x0
  42212a:	03 eb                	add    ebp,ebx
  42212c:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  422130:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  422134:	c7 07 a0 bc 64 00    	mov    DWORD PTR [edi],0x64bca0
  42213a:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
  422141:	ff 
  422142:	8b 48 24             	mov    ecx,DWORD PTR [eax+0x24]
  422145:	89 4f 24             	mov    DWORD PTR [edi+0x24],ecx
  422148:	8b 50 28             	mov    edx,DWORD PTR [eax+0x28]
  42214b:	89 57 28             	mov    DWORD PTR [edi+0x28],edx
  42214e:	c7 07 98 bc 64 00    	mov    DWORD PTR [edi],0x64bc98
  422154:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  422158:	c6 86 74 03 00 00 00 	mov    BYTE PTR [esi+0x374],0x0
  42215f:	c6 86 75 03 00 00 00 	mov    BYTE PTR [esi+0x375],0x0
  422166:	c7 06 08 bc 64 00    	mov    DWORD PTR [esi],0x64bc08
  42216c:	e8 6f 0f 14 00       	call   0x5630e0
  422171:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  422175:	8b c6                	mov    eax,esi
  422177:	5f                   	pop    edi
  422178:	5e                   	pop    esi
  422179:	5d                   	pop    ebp
  42217a:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  422181:	5b                   	pop    ebx
  422182:	83 c4 10             	add    esp,0x10
  422185:	c2 1c 00             	ret    0x1c
  422188:	90                   	nop
  422189:	90                   	nop
  42218a:	90                   	nop
  42218b:	90                   	nop
  42218c:	90                   	nop
  42218d:	90                   	nop
  42218e:	90                   	nop
  42218f:	90                   	nop
