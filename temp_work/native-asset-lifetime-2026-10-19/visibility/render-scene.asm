; Retained original RcHcGame.dat disassembly; lines597502-597704 fromtemp_work/player-world-light-2026-10-04/native-full.asm
  5b88d0:	a1 24 2f 72 00       	mov    eax,ds:0x722f24
  5b88d5:	81 ec e4 0f 00 00    	sub    esp,0xfe4
  5b88db:	53                   	push   ebx
  5b88dc:	55                   	push   ebp
  5b88dd:	56                   	push   esi
  5b88de:	33 f6                	xor    esi,esi
  5b88e0:	3b c6                	cmp    eax,esi
  5b88e2:	57                   	push   edi
  5b88e3:	7e 1d                	jle    0x5b8902
  5b88e5:	c1 e0 02             	shl    eax,0x2
  5b88e8:	8b 88 3c 7b 74 00    	mov    ecx,DWORD PTR [eax+0x747b3c]
  5b88ee:	8b 90 44 7b 74 00    	mov    edx,DWORD PTR [eax+0x747b44]
  5b88f4:	89 88 40 28 72 00    	mov    DWORD PTR [eax+0x722840],ecx
  5b88fa:	89 90 10 29 72 00    	mov    DWORD PTR [eax+0x722910],edx
  5b8900:	eb 0f                	jmp    0x5b8911
  5b8902:	c1 e0 02             	shl    eax,0x2
  5b8905:	89 b0 40 28 72 00    	mov    DWORD PTR [eax+0x722840],esi
  5b890b:	89 b0 10 29 72 00    	mov    DWORD PTR [eax+0x722910],esi
  5b8911:	8b ac 24 04 10 00 00 	mov    ebp,DWORD PTR [esp+0x1004]
  5b8918:	8b 9c 24 00 10 00 00 	mov    ebx,DWORD PTR [esp+0x1000]
  5b891f:	89 b0 40 7b 74 00    	mov    DWORD PTR [eax+0x747b40],esi
  5b8925:	89 b0 48 7b 74 00    	mov    DWORD PTR [eax+0x747b48],esi
  5b892b:	b9 6c 02 00 00       	mov    ecx,0x26c
  5b8930:	33 c0                	xor    eax,eax
  5b8932:	8d bc 24 44 06 00 00 	lea    edi,[esp+0x644]
  5b8939:	f3 ab                	rep stos DWORD PTR es:[edi],eax
  5b893b:	8b bc 24 fc 0f 00 00 	mov    edi,DWORD PTR [esp+0xffc]
  5b8942:	8d 84 24 44 06 00 00 	lea    eax,[esp+0x644]
  5b8949:	50                   	push   eax
  5b894a:	55                   	push   ebp
  5b894b:	8d 4f 1c             	lea    ecx,[edi+0x1c]
  5b894e:	53                   	push   ebx
  5b894f:	51                   	push   ecx
  5b8950:	e8 0b 18 00 00       	call   0x5ba160
  5b8955:	8d 94 24 54 06 00 00 	lea    edx,[esp+0x654]
  5b895c:	52                   	push   edx
  5b895d:	55                   	push   ebp
  5b895e:	53                   	push   ebx
  5b895f:	e8 dc 01 00 00       	call   0x5b8b40
  5b8964:	83 c4 1c             	add    esp,0x1c
  5b8967:	85 c0                	test   eax,eax
  5b8969:	75 0b                	jne    0x5b8976
  5b896b:	5f                   	pop    edi
  5b896c:	5e                   	pop    esi
  5b896d:	5d                   	pop    ebp
  5b896e:	5b                   	pop    ebx
  5b896f:	81 c4 e4 0f 00 00    	add    esp,0xfe4
  5b8975:	c3                   	ret
  5b8976:	8d 84 24 44 06 00 00 	lea    eax,[esp+0x644]
  5b897d:	50                   	push   eax
  5b897e:	55                   	push   ebp
  5b897f:	53                   	push   ebx
  5b8980:	e8 4b 07 00 00       	call   0x5b90d0
  5b8985:	83 c4 0c             	add    esp,0xc
  5b8988:	85 c0                	test   eax,eax
  5b898a:	75 0b                	jne    0x5b8997
  5b898c:	5f                   	pop    edi
  5b898d:	5e                   	pop    esi
  5b898e:	5d                   	pop    ebp
  5b898f:	5b                   	pop    ebx
  5b8990:	81 c4 e4 0f 00 00    	add    esp,0xfe4
  5b8996:	c3                   	ret
  5b8997:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  5b899b:	51                   	push   ecx
  5b899c:	53                   	push   ebx
  5b899d:	55                   	push   ebp
  5b899e:	e8 0d 81 01 00       	call   0x5d0ab0
  5b89a3:	8b ac 24 04 10 00 00 	mov    ebp,DWORD PTR [esp+0x1004]
  5b89aa:	83 c4 0c             	add    esp,0xc
  5b89ad:	8b 95 78 36 03 00    	mov    edx,DWORD PTR [ebp+0x33678]
  5b89b3:	ff 52 68             	call   DWORD PTR [edx+0x68]
  5b89b6:	85 c0                	test   eax,eax
  5b89b8:	75 2c                	jne    0x5b89e6
  5b89ba:	56                   	push   esi
  5b89bb:	68 70 3f 6b 00       	push   0x6b3f70
  5b89c0:	68 b5 03 00 00       	push   0x3b5
  5b89c5:	68 28 95 6a 00       	push   0x6a9528
  5b89ca:	68 70 3f 6b 00       	push   0x6b3f70
  5b89cf:	6a 1a                	push   0x1a
  5b89d1:	e8 4a 68 01 00       	call   0x5cf220
  5b89d6:	83 c4 18             	add    esp,0x18
  5b89d9:	33 c0                	xor    eax,eax
  5b89db:	5f                   	pop    edi
  5b89dc:	5e                   	pop    esi
  5b89dd:	5d                   	pop    ebp
  5b89de:	5b                   	pop    ebx
  5b89df:	81 c4 e4 0f 00 00    	add    esp,0xfe4
  5b89e5:	c3                   	ret
  5b89e6:	8b 87 b8 03 00 00    	mov    eax,DWORD PTR [edi+0x3b8]
  5b89ec:	8b b7 bc 03 00 00    	mov    esi,DWORD PTR [edi+0x3bc]
  5b89f2:	85 c0                	test   eax,eax
  5b89f4:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  5b89fb:	00 
  5b89fc:	0f 8e bd 00 00 00    	jle    0x5b8abf
  5b8a02:	a1 24 2f 72 00       	mov    eax,ds:0x722f24
  5b8a07:	85 c0                	test   eax,eax
  5b8a09:	75 0c                	jne    0x5b8a17
  5b8a0b:	f6 46 04 05          	test   BYTE PTR [esi+0x4],0x5
  5b8a0f:	0f 84 90 00 00 00    	je     0x5b8aa5
  5b8a15:	eb 0c                	jmp    0x5b8a23
  5b8a17:	7e 0a                	jle    0x5b8a23
  5b8a19:	f6 46 04 06          	test   BYTE PTR [esi+0x4],0x6
  5b8a1d:	0f 84 82 00 00 00    	je     0x5b8aa5
  5b8a23:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5b8a25:	8d 44 24 14          	lea    eax,[esp+0x14]
  5b8a29:	50                   	push   eax
  5b8a2a:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  5b8a2e:	e8 fd be ff ff       	call   0x5b4930
  5b8a33:	83 7c 24 14 01       	cmp    DWORD PTR [esp+0x14],0x1
  5b8a38:	75 3f                	jne    0x5b8a79
  5b8a3a:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5b8a3e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  5b8a42:	e8 39 78 01 00       	call   0x5d0280
  5b8a47:	f6 46 04 04          	test   BYTE PTR [esi+0x4],0x4
  5b8a4b:	75 2c                	jne    0x5b8a79
  5b8a4d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  5b8a51:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5b8a55:	51                   	push   ecx
  5b8a56:	52                   	push   edx
  5b8a57:	57                   	push   edi
  5b8a58:	e8 83 11 00 00       	call   0x5b9be0
  5b8a5d:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5b8a61:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
  5b8a64:	83 c4 0c             	add    esp,0xc
  5b8a67:	8d 14 40             	lea    edx,[eax+eax*2]
  5b8a6a:	8b 81 cc d5 00 00    	mov    eax,DWORD PTR [ecx+0xd5cc]
  5b8a70:	8b 0c 90             	mov    ecx,DWORD PTR [eax+edx*4]
  5b8a73:	8b 07                	mov    eax,DWORD PTR [edi]
  5b8a75:	3b c8                	cmp    ecx,eax
  5b8a77:	75 2c                	jne    0x5b8aa5
  5b8a79:	a1 24 2f 72 00       	mov    eax,ds:0x722f24
  5b8a7e:	85 c0                	test   eax,eax
  5b8a80:	75 0d                	jne    0x5b8a8f
  5b8a82:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5b8a84:	53                   	push   ebx
  5b8a85:	57                   	push   edi
  5b8a86:	8b d5                	mov    edx,ebp
  5b8a88:	e8 a3 c9 ff ff       	call   0x5b5430
  5b8a8d:	eb 16                	jmp    0x5b8aa5
  5b8a8f:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5b8a91:	8d 54 24 40          	lea    edx,[esp+0x40]
  5b8a95:	52                   	push   edx
  5b8a96:	53                   	push   ebx
  5b8a97:	57                   	push   edi
  5b8a98:	8b d5                	mov    edx,ebp
  5b8a9a:	e8 f1 c8 ff ff       	call   0x5b5390
  5b8a9f:	ff 85 98 36 03 00    	inc    DWORD PTR [ebp+0x33698]
  5b8aa5:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b8aa9:	8b 8f b8 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b8]
  5b8aaf:	40                   	inc    eax
  5b8ab0:	83 c6 0c             	add    esi,0xc
  5b8ab3:	3b c1                	cmp    eax,ecx
  5b8ab5:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5b8ab9:	0f 8c 43 ff ff ff    	jl     0x5b8a02
  5b8abf:	8b 85 78 36 03 00    	mov    eax,DWORD PTR [ebp+0x33678]
  5b8ac5:	ff 50 6c             	call   DWORD PTR [eax+0x6c]
  5b8ac8:	85 c0                	test   eax,eax
  5b8aca:	75 2c                	jne    0x5b8af8
  5b8acc:	50                   	push   eax
  5b8acd:	68 70 3f 6b 00       	push   0x6b3f70
  5b8ad2:	68 e7 03 00 00       	push   0x3e7
  5b8ad7:	68 28 95 6a 00       	push   0x6a9528
  5b8adc:	68 70 3f 6b 00       	push   0x6b3f70
  5b8ae1:	6a 1b                	push   0x1b
  5b8ae3:	e8 38 67 01 00       	call   0x5cf220
  5b8ae8:	83 c4 18             	add    esp,0x18
  5b8aeb:	33 c0                	xor    eax,eax
  5b8aed:	5f                   	pop    edi
  5b8aee:	5e                   	pop    esi
  5b8aef:	5d                   	pop    ebp
  5b8af0:	5b                   	pop    ebx
  5b8af1:	81 c4 e4 0f 00 00    	add    esp,0xfe4
  5b8af7:	c3                   	ret
  5b8af8:	53                   	push   ebx
  5b8af9:	e8 e2 06 01 00       	call   0x5c91e0
  5b8afe:	8b 8c 24 08 10 00 00 	mov    ecx,DWORD PTR [esp+0x1008]
  5b8b05:	51                   	push   ecx
  5b8b06:	53                   	push   ebx
  5b8b07:	57                   	push   edi
  5b8b08:	55                   	push   ebp
  5b8b09:	e8 a2 d7 ff ff       	call   0x5b62b0
  5b8b0e:	83 c4 14             	add    esp,0x14
  5b8b11:	85 c0                	test   eax,eax
  5b8b13:	75 0b                	jne    0x5b8b20
  5b8b15:	5f                   	pop    edi
  5b8b16:	5e                   	pop    esi
  5b8b17:	5d                   	pop    ebp
  5b8b18:	5b                   	pop    ebx
  5b8b19:	81 c4 e4 0f 00 00    	add    esp,0xfe4
  5b8b1f:	c3                   	ret
  5b8b20:	53                   	push   ebx
  5b8b21:	55                   	push   ebp
  5b8b22:	e8 a9 f3 ff ff       	call   0x5b7ed0
  5b8b27:	83 c4 08             	add    esp,0x8
  5b8b2a:	f7 d8                	neg    eax
  5b8b2c:	5f                   	pop    edi
  5b8b2d:	5e                   	pop    esi
  5b8b2e:	1b c0                	sbb    eax,eax
  5b8b30:	5d                   	pop    ebp
  5b8b31:	f7 d8                	neg    eax
  5b8b33:	5b                   	pop    ebx
  5b8b34:	81 c4 e4 0f 00 00    	add    esp,0xfe4
  5b8b3a:	c3                   	ret
