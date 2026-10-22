  42ecf5:	be 14 02 69 00       	mov    esi,0x690214
  42ecfa:	c1 e9 02             	shr    ecx,0x2
  42ecfd:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42ecff:	8b ca                	mov    ecx,edx
  42ed01:	83 e1 03             	and    ecx,0x3
  42ed04:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  42ed06:	8b 45 04             	mov    eax,DWORD PTR [ebp+0x4]
  42ed09:	89 5d 08             	mov    DWORD PTR [ebp+0x8],ebx
  42ed0c:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  42ed10:	68 f0 8d 6b 00       	push   0x6b8df0
  42ed15:	b9 08 57 6b 00       	mov    ecx,0x6b5708
  42ed1a:	e8 41 db fd ff       	call   0x40c860
  42ed1f:	5f                   	pop    edi
  42ed20:	5e                   	pop    esi
  42ed21:	5d                   	pop    ebp
  42ed22:	5b                   	pop    ebx
--
  42ed3c:	90                   	nop
  42ed3d:	90                   	nop
  42ed3e:	90                   	nop
  42ed3f:	90                   	nop
  42ed40:	8a 0d 30 57 6b 00    	mov    cl,BYTE PTR ds:0x6b5730
  42ed46:	b0 02                	mov    al,0x2
  42ed48:	84 c8                	test   al,cl
  42ed4a:	75 12                	jne    0x42ed5e
  42ed4c:	0a c8                	or     cl,al
  42ed4e:	88 0d 30 57 6b 00    	mov    BYTE PTR ds:0x6b5730,cl
  42ed54:	b9 08 57 6b 00       	mov    ecx,0x6b5708
  42ed59:	e9 62 af ff ff       	jmp    0x429cc0
  42ed5e:	c3                   	ret
  42ed5f:	90                   	nop
  42ed60:	e8 0b 00 00 00       	call   0x42ed70
  42ed65:	e9 d6 00 00 00       	jmp    0x42ee40
--
  4d86a2:	e8 89 77 0d 00       	call   0x5afe30
  4d86a7:	83 c4 04             	add    esp,0x4
  4d86aa:	d9 85 78 01 00 00    	fld    DWORD PTR [ebp+0x178]
  4d86b0:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4d86b6:	df e0                	fnstsw ax
  4d86b8:	f6 c4 41             	test   ah,0x41
  4d86bb:	75 0a                	jne    0x4d86c7
  4d86bd:	c7 85 78 01 00 00 00 	mov    DWORD PTR [ebp+0x178],0x0
  4d86c4:	00 00 00 
  4d86c7:	85 f6                	test   esi,esi
  4d86c9:	c7 05 e0 96 69 00 00 	mov    DWORD PTR ds:0x6996e0,0x3f800000
  4d86d0:	00 80 3f 
  4d86d3:	0f 8e c9 02 00 00    	jle    0x4d89a2
  4d86d9:	8d 84 24 84 00 00 00 	lea    eax,[esp+0x84]
  4d86e0:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4d86e4:	50                   	push   eax
--
  4d8949:	50                   	push   eax
  4d894a:	8d 8c 24 a0 00 00 00 	lea    ecx,[esp+0xa0]
  4d8951:	6a 03                	push   0x3
  4d8953:	51                   	push   ecx
  4d8954:	8b cd                	mov    ecx,ebp
  4d8956:	e8 b5 ed ff ff       	call   0x4d7710
  4d895b:	8b d0                	mov    edx,eax
  4d895d:	8b 02                	mov    eax,DWORD PTR [edx]
  4d895f:	85 c0                	test   eax,eax
  4d8961:	8b 5a 04             	mov    ebx,DWORD PTR [edx+0x4]
  4d8964:	c7 05 e0 96 69 00 00 	mov    DWORD PTR ds:0x6996e0,0x3f800000
  4d896b:	00 80 3f 
  4d896e:	7e 32                	jle    0x4d89a2
  4d8970:	8d 84 24 84 00 00 00 	lea    eax,[esp+0x84]
  4d8977:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  4d897b:	50                   	push   eax
  4d897c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4d8980:	e8 5b a6 0d 00       	call   0x5b2fe0
  4d8985:	8d 8c 24 84 00 00 00 	lea    ecx,[esp+0x84]
  4d898c:	e8 8f a5 0d 00       	call   0x5b2f20
  4d8991:	dd d8                	fstp   st(0)
  4d8993:	d9 84 24 88 00 00 00 	fld    DWORD PTR [esp+0x88]
  4d899a:	d9 e1                	fabs
  4d899c:	d9 1d e0 96 69 00    	fstp   DWORD PTR ds:0x6996e0
  4d89a2:	84 db                	test   bl,bl
  4d89a4:	0f 84 40 03 00 00    	je     0x4d8cea
  4d89aa:	a1 54 93 6b 00       	mov    eax,ds:0x6b9354
  4d89af:	3d 00 00 00 80       	cmp    eax,0x80000000
  4d89b4:	75 1c                	jne    0x4d89d2
--
  4dc297:	e8 f4 10 0d 00       	call   0x5ad390
  4dc29c:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc29f:	83 c4 08             	add    esp,0x8
  4dc2a2:	eb 03                	jmp    0x4dc2a7
  4dc2a4:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc2a7:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc2ab:	8d 8c 24 d8 00 00 00 	lea    ecx,[esp+0xd8]
  4dc2b2:	c6 84 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],0x3
  4dc2b9:	03 
  4dc2ba:	d8 8e 94 01 00 00    	fmul   DWORD PTR [esi+0x194]
  4dc2c0:	d9 1d 70 92 6b 00    	fstp   DWORD PTR ds:0x6b9270
  4dc2c6:	e8 d5 09 0d 00       	call   0x5acca0
  4dc2cb:	6a 01                	push   0x1
  4dc2cd:	8d 8c 24 ac 00 00 00 	lea    ecx,[esp+0xac]
  4dc2d4:	88 9c 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],bl
  4dc2db:	e8 c0 7d f2 ff       	call   0x4040a0
--
  4dc400:	50                   	push   eax
  4dc401:	e8 8a 0f 0d 00       	call   0x5ad390
  4dc406:	d9 56 60             	fst    DWORD PTR [esi+0x60]
  4dc409:	83 c4 08             	add    esp,0x8
  4dc40c:	eb 03                	jmp    0x4dc411
  4dc40e:	d9 46 60             	fld    DWORD PTR [esi+0x60]
  4dc411:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4dc415:	88 9c 24 24 02 00 00 	mov    BYTE PTR [esp+0x224],bl
  4dc41c:	d8 89 94 01 00 00    	fmul   DWORD PTR [ecx+0x194]
  4dc422:	8d 8c 24 44 01 00 00 	lea    ecx,[esp+0x144]
  4dc429:	d9 1d 6c 92 6b 00    	fstp   DWORD PTR ds:0x6b926c
  4dc42f:	e8 6c 08 0d 00       	call   0x5acca0
  4dc434:	6a 01                	push   0x1
  4dc436:	8d 8c 24 bc 00 00 00 	lea    ecx,[esp+0xbc]
  4dc43d:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x6
  4dc444:	06 
--
  4dc5ea:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  4dc5ee:	c6 84 24 28 02 00 00 	mov    BYTE PTR [esp+0x228],0x9
  4dc5f5:	09 
  4dc5f6:	e8 a5 7a f2 ff       	call   0x4040a0
  4dc5fb:	6a 01                	push   0x1
  4dc5fd:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4dc601:	c7 84 24 28 02 00 00 	mov    DWORD PTR [esp+0x228],0xffffffff
  4dc608:	ff ff ff ff 
  4dc60c:	e8 8f 7a f2 ff       	call   0x4040a0
  4dc611:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  4dc615:	d9 05 e0 96 69 00    	fld    DWORD PTR ds:0x6996e0
  4dc61b:	d8 8e 78 01 00 00    	fmul   DWORD PTR [esi+0x178]
  4dc621:	c7 86 78 01 00 00 00 	mov    DWORD PTR [esi+0x178],0x0
  4dc628:	00 00 00 
  4dc62b:	d9 e0                	fchs
  4dc62d:	d8 15 70 92 6b 00    	fcom   DWORD PTR ds:0x6b9270
  4dc633:	df e0                	fnstsw ax
  4dc635:	f6 c4 01             	test   ah,0x1
  4dc638:	0f 85 d3 02 00 00    	jne    0x4dc911
  4dc63e:	d8 35 6c 92 6b 00    	fdiv   DWORD PTR ds:0x6b926c
  4dc644:	d9 54 24 18          	fst    DWORD PTR [esp+0x18]
  4dc648:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  4dc64e:	df e0                	fnstsw ax
  4dc650:	f6 c4 41             	test   ah,0x41
  4dc653:	75 39                	jne    0x4dc68e
--
  4dc72d:	89 30                	mov    DWORD PTR [eax],esi
  4dc72f:	0f 85 de 01 00 00    	jne    0x4dc913
  4dc735:	6a 00                	push   0x0
  4dc737:	e8 84 f8 0c 00       	call   0x5abfc0
  4dc73c:	e9 d2 01 00 00       	jmp    0x4dc913
  4dc741:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  4dc745:	8d 54 24 40          	lea    edx,[esp+0x40]
  4dc749:	51                   	push   ecx
  4dc74a:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  4dc74e:	6a 00                	push   0x0
  4dc750:	68 08 57 6b 00       	push   0x6b5708
  4dc755:	52                   	push   edx
  4dc756:	e8 85 38 07 00       	call   0x54ffe0
  4dc75b:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4dc75f:	85 c0                	test   eax,eax
  4dc761:	0f 84 ac 01 00 00    	je     0x4dc913
