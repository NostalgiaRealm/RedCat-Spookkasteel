  5997e0:	83 ec 0c             	sub    esp,0xc
  5997e3:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5997e7:	53                   	push   ebx
  5997e8:	55                   	push   ebp
  5997e9:	56                   	push   esi
  5997ea:	57                   	push   edi
  5997eb:	33 ed                	xor    ebp,ebp
  5997ed:	8b f1                	mov    esi,ecx
  5997ef:	50                   	push   eax
  5997f0:	89 6c 24 1c          	mov    DWORD PTR [esp+0x1c],ebp
  5997f4:	e8 c7 e7 ff ff       	call   0x597fc0
  5997f9:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  5997fd:	8d 5e 34             	lea    ebx,[esi+0x34]
  599800:	c7 44 24 10 08 00 00 	mov    DWORD PTR [esp+0x10],0x8
  599807:	00 
  599808:	8b cb                	mov    ecx,ebx
  59980a:	e8 e1 19 00 00       	call   0x59b1f0
  59980f:	84 c0                	test   al,al
  599811:	74 3b                	je     0x59984e
  599813:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  599815:	51                   	push   ecx
  599816:	8b 4e 6c             	mov    ecx,DWORD PTR [esi+0x6c]
  599819:	e8 72 47 00 00       	call   0x59df90
  59981e:	8b f8                	mov    edi,eax
  599820:	e8 db e1 ff ff       	call   0x597a00
  599825:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  599829:	50                   	push   eax
  59982a:	52                   	push   edx
  59982b:	8b cf                	mov    ecx,edi
  59982d:	e8 de 05 00 00       	call   0x599e10
  599832:	84 c0                	test   al,al
  599834:	74 18                	je     0x59984e
  599836:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  59983a:	8b cf                	mov    ecx,edi
  59983c:	50                   	push   eax
  59983d:	e8 7e e7 ff ff       	call   0x597fc0
  599842:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  599846:	df e0                	fnstsw ax
  599848:	f6 c4 01             	test   ah,0x1
  59984b:	74 01                	je     0x59984e
  59984d:	45                   	inc    ebp
  59984e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  599852:	83 c3 04             	add    ebx,0x4
  599855:	48                   	dec    eax
  599856:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  59985a:	75 ac                	jne    0x599808
  59985c:	85 ed                	test   ebp,ebp
  59985e:	7e 79                	jle    0x5998d9
  599860:	e8 3b 0c 07 00       	call   0x60a4a0
  599865:	99                   	cdq
  599866:	f7 fd                	idiv   ebp
  599868:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  59986f:	00 
  599870:	8d 7e 34             	lea    edi,[esi+0x34]
  599873:	42                   	inc    edx
  599874:	33 ed                	xor    ebp,ebp
  599876:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  59987a:	8b cf                	mov    ecx,edi
  59987c:	e8 6f 19 00 00       	call   0x59b1f0
  599881:	84 c0                	test   al,al
  599883:	74 4b                	je     0x5998d0
  599885:	8b 0f                	mov    ecx,DWORD PTR [edi]
  599887:	51                   	push   ecx
  599888:	8b 4e 6c             	mov    ecx,DWORD PTR [esi+0x6c]
  59988b:	e8 00 47 00 00       	call   0x59df90
  599890:	8b d8                	mov    ebx,eax
  599892:	e8 69 e1 ff ff       	call   0x597a00
  599897:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  59989b:	50                   	push   eax
  59989c:	52                   	push   edx
  59989d:	8b cb                	mov    ecx,ebx
  59989f:	e8 6c 05 00 00       	call   0x599e10
  5998a4:	84 c0                	test   al,al
  5998a6:	74 28                	je     0x5998d0
  5998a8:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5998ac:	8b cb                	mov    ecx,ebx
  5998ae:	50                   	push   eax
  5998af:	e8 0c e7 ff ff       	call   0x597fc0
  5998b4:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  5998b8:	df e0                	fnstsw ax
  5998ba:	f6 c4 01             	test   ah,0x1
  5998bd:	74 11                	je     0x5998d0
  5998bf:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5998c3:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5998c7:	40                   	inc    eax
  5998c8:	3b c1                	cmp    eax,ecx
  5998ca:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  5998ce:	74 25                	je     0x5998f5
  5998d0:	45                   	inc    ebp
  5998d1:	83 c7 04             	add    edi,0x4
  5998d4:	83 fd 08             	cmp    ebp,0x8
  5998d7:	7c a1                	jl     0x59987a
  5998d9:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  5998dd:	68 84 00 65 00       	push   0x650084
  5998e2:	8b ce                	mov    ecx,esi
  5998e4:	e8 e7 18 00 00       	call   0x59b1d0
  5998e9:	8b c6                	mov    eax,esi
  5998eb:	5f                   	pop    edi
  5998ec:	5e                   	pop    esi
  5998ed:	5d                   	pop    ebp
  5998ee:	5b                   	pop    ebx
  5998ef:	83 c4 0c             	add    esp,0xc
  5998f2:	c2 0c 00             	ret    0xc
  5998f5:	8b 4c ae 34          	mov    ecx,DWORD PTR [esi+ebp*4+0x34]
  5998f9:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  5998fd:	5f                   	pop    edi
  5998fe:	5e                   	pop    esi
  5998ff:	5d                   	pop    ebp
  599900:	89 08                	mov    DWORD PTR [eax],ecx
  599902:	5b                   	pop    ebx
  599903:	83 c4 0c             	add    esp,0xc
  599906:	c2 0c 00             	ret    0xc
  599909:	90                   	nop
  59990a:	90                   	nop
  59990b:	90                   	nop
  59990c:	90                   	nop
  59990d:	90                   	nop
  59990e:	90                   	nop
  59990f:	90                   	nop
  599910:	6a ff                	push   0xffffffff
  599912:	68 f7 42 64 00       	push   0x6442f7
  599917:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  59991d:	50                   	push   eax
  59991e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  599925:	83 ec 08             	sub    esp,0x8
  599928:	53                   	push   ebx
  599929:	56                   	push   esi
  59992a:	8b f1                	mov    esi,ecx
  59992c:	68 84 00 65 00       	push   0x650084
  599931:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  599935:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  59993c:	00 
  59993d:	e8 8e 18 00 00       	call   0x59b1d0
  599942:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  599946:	8d 44 24 08          	lea    eax,[esp+0x8]
  59994a:	bb 01 00 00 00       	mov    ebx,0x1
  59994f:	50                   	push   eax
  599950:	8b 11                	mov    edx,DWORD PTR [ecx]
  599952:	8b 4e 6c             	mov    ecx,DWORD PTR [esi+0x6c]
  599955:	52                   	push   edx
  599956:	89 5c 24 20          	mov    DWORD PTR [esp+0x20],ebx
  59995a:	e8 31 46 00 00       	call   0x59df90
  59995f:	8b 4e 6c             	mov    ecx,DWORD PTR [esi+0x6c]
  599962:	50                   	push   eax
  599963:	56                   	push   esi
  599964:	e8 a7 30 00 00       	call   0x59ca10
  599969:	84 c0                	test   al,al
  59996b:	75 37                	jne    0x5999a4
  59996d:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  599971:	68 84 00 65 00       	push   0x650084
  599976:	8b ce                	mov    ecx,esi
  599978:	e8 53 18 00 00       	call   0x59b1d0
  59997d:	89 5c 24 0c          	mov    DWORD PTR [esp+0xc],ebx
  599981:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  599985:	c6 44 24 18 00       	mov    BYTE PTR [esp+0x18],0x0
  59998a:	e8 51 97 fc ff       	call   0x5630e0
  59998f:	8b c6                	mov    eax,esi
  599991:	5e                   	pop    esi
  599992:	5b                   	pop    ebx
  599993:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  599997:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59999e:	83 c4 14             	add    esp,0x14
  5999a1:	c2 0c 00             	ret    0xc
  5999a4:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5999a8:	8b 4e 6c             	mov    ecx,DWORD PTR [esi+0x6c]
  5999ab:	55                   	push   ebp
  5999ac:	57                   	push   edi
  5999ad:	50                   	push   eax
  5999ae:	e8 dd 45 00 00       	call   0x59df90
  5999b3:	8b 6c 24 30          	mov    ebp,DWORD PTR [esp+0x30]
  5999b7:	8b f8                	mov    edi,eax
  5999b9:	53                   	push   ebx
  5999ba:	55                   	push   ebp
  5999bb:	8b cf                	mov    ecx,edi
  5999bd:	e8 4e 04 00 00       	call   0x599e10
  5999c2:	84 c0                	test   al,al
  5999c4:	75 61                	jne    0x599a27
  5999c6:	e8 d5 0a 07 00       	call   0x60a4a0
  5999cb:	25 01 00 00 80       	and    eax,0x80000001
  5999d0:	79 05                	jns    0x5999d7
  5999d2:	48                   	dec    eax
  5999d3:	83 c8 fe             	or     eax,0xfffffffe
  5999d6:	40                   	inc    eax
  5999d7:	0f 94 c1             	sete   cl
  5999da:	88 4c 24 2c          	mov    BYTE PTR [esp+0x2c],cl
  5999de:	55                   	push   ebp
  5999df:	8b cf                	mov    ecx,edi
  5999e1:	e8 ca e5 ff ff       	call   0x597fb0
  5999e6:	50                   	push   eax
  5999e7:	8b ce                	mov    ecx,esi
  5999e9:	e8 d2 e5 ff ff       	call   0x597fc0
  5999ee:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  5999f2:	51                   	push   ecx
  5999f3:	8b cf                	mov    ecx,edi
  5999f5:	d9 1c 24             	fstp   DWORD PTR [esp]
  5999f8:	52                   	push   edx
  5999f9:	e8 b2 e5 ff ff       	call   0x597fb0
  5999fe:	50                   	push   eax
  5999ff:	8d 44 24 40          	lea    eax,[esp+0x40]
  599a03:	50                   	push   eax
  599a04:	8b ce                	mov    ecx,esi
  599a06:	e8 75 02 00 00       	call   0x599c80
  599a0b:	50                   	push   eax
  599a0c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  599a10:	c6 44 24 24 02       	mov    BYTE PTR [esp+0x24],0x2
  599a15:	e8 b6 17 00 00       	call   0x59b1d0
  599a1a:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  599a1e:	88 5c 24 20          	mov    BYTE PTR [esp+0x20],bl
  599a22:	e8 b9 96 fc ff       	call   0x5630e0
  599a27:	8b 74 24 28          	mov    esi,DWORD PTR [esp+0x28]
  599a2b:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  599a2f:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  599a33:	c6 44 24 20 00       	mov    BYTE PTR [esp+0x20],0x0
  599a38:	89 0e                	mov    DWORD PTR [esi],ecx
  599a3a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  599a3e:	e8 9d 96 fc ff       	call   0x5630e0
  599a43:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  599a47:	5f                   	pop    edi
  599a48:	8b c6                	mov    eax,esi
  599a4a:	5d                   	pop    ebp
  599a4b:	5e                   	pop    esi
  599a4c:	5b                   	pop    ebx
  599a4d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  599a54:	83 c4 14             	add    esp,0x14
  599a57:	c2 0c 00             	ret    0xc
  599a5a:	90                   	nop
  599a5b:	90                   	nop
  599a5c:	90                   	nop
  599a5d:	90                   	nop
  599a5e:	90                   	nop
  599a5f:	90                   	nop
  599a60:	6a ff                	push   0xffffffff
  599a62:	68 37 43 64 00       	push   0x644337
  599a67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  599a6d:	50                   	push   eax
  599a6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  599a75:	83 ec 14             	sub    esp,0x14
  599a78:	53                   	push   ebx
  599a79:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
  599a7d:	55                   	push   ebp
  599a7e:	56                   	push   esi
  599a7f:	57                   	push   edi
  599a80:	8b e9                	mov    ebp,ecx
  599a82:	53                   	push   ebx
  599a83:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
  599a8a:	00 
  599a8b:	e8 30 e5 ff ff       	call   0x597fc0
  599a90:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  599a94:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  599a98:	e8 23 17 00 00       	call   0x59b1c0
  599a9d:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  599aa1:	c7 44 24 2c 01 00 00 	mov    DWORD PTR [esp+0x2c],0x1
  599aa8:	00 
  599aa9:	e8 52 17 00 00       	call   0x59b200
  599aae:	8d 7d 34             	lea    edi,[ebp+0x34]
  599ab1:	c7 44 24 18 08 00 00 	mov    DWORD PTR [esp+0x18],0x8
  599ab8:	00 
  599ab9:	8b cf                	mov    ecx,edi
  599abb:	e8 30 17 00 00       	call   0x59b1f0
  599ac0:	84 c0                	test   al,al
  599ac2:	74 6b                	je     0x599b2f
  599ac4:	8b 07                	mov    eax,DWORD PTR [edi]
  599ac6:	8b 4d 6c             	mov    ecx,DWORD PTR [ebp+0x6c]
  599ac9:	50                   	push   eax
  599aca:	e8 c1 44 00 00       	call   0x59df90
  599acf:	8b f0                	mov    esi,eax
  599ad1:	53                   	push   ebx
  599ad2:	8b ce                	mov    ecx,esi
  599ad4:	e8 e7 e4 ff ff       	call   0x597fc0
  599ad9:	d9 54 24 10          	fst    DWORD PTR [esp+0x10]
  599add:	d8 5c 24 14          	fcomp  DWORD PTR [esp+0x14]
  599ae1:	df e0                	fnstsw ax
  599ae3:	f6 c4 41             	test   ah,0x41
  599ae6:	75 47                	jne    0x599b2f
  599ae8:	e8 13 df ff ff       	call   0x597a00
  599aed:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  599af1:	50                   	push   eax
  599af2:	51                   	push   ecx
  599af3:	8b ce                	mov    ecx,esi
  599af5:	e8 16 03 00 00       	call   0x599e10
  599afa:	84 c0                	test   al,al
  599afc:	74 31                	je     0x599b2f
  599afe:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  599b02:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  599b06:	50                   	push   eax
  599b07:	8b ce                	mov    ecx,esi
  599b09:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  599b0d:	e8 3e f9 ff ff       	call   0x599450
  599b12:	50                   	push   eax
  599b13:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  599b17:	c6 44 24 30 02       	mov    BYTE PTR [esp+0x30],0x2
  599b1c:	e8 af 16 00 00       	call   0x59b1d0
  599b21:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  599b25:	c6 44 24 2c 01       	mov    BYTE PTR [esp+0x2c],0x1
  599b2a:	e8 b1 95 fc ff       	call   0x5630e0
  599b2f:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  599b33:	83 c7 04             	add    edi,0x4
  599b36:	48                   	dec    eax
  599b37:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  599b3b:	0f 85 78 ff ff ff    	jne    0x599ab9
  599b41:	8b 74 24 34          	mov    esi,DWORD PTR [esp+0x34]
  599b45:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  599b49:	c7 44 24 20 01 00 00 	mov    DWORD PTR [esp+0x20],0x1
  599b50:	00 
  599b51:	89 0e                	mov    DWORD PTR [esi],ecx
  599b53:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  599b57:	c6 44 24 2c 00       	mov    BYTE PTR [esp+0x2c],0x0
  599b5c:	e8 7f 95 fc ff       	call   0x5630e0
  599b61:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  599b65:	8b c6                	mov    eax,esi
  599b67:	5f                   	pop    edi
  599b68:	5e                   	pop    esi
  599b69:	5d                   	pop    ebp
  599b6a:	5b                   	pop    ebx
  599b6b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  599b72:	83 c4 20             	add    esp,0x20
  599b75:	c2 0c 00             	ret    0xc
  599b78:	90                   	nop
  599b79:	90                   	nop
  599b7a:	90                   	nop
  599b7b:	90                   	nop
  599b7c:	90                   	nop
  599b7d:	90                   	nop
  599b7e:	90                   	nop
  599b7f:	90                   	nop
  599b80:	83 ec 0c             	sub    esp,0xc
  599b83:	53                   	push   ebx
  599b84:	8b d9                	mov    ebx,ecx
  599b86:	55                   	push   ebp
  599b87:	56                   	push   esi
  599b88:	33 c0                	xor    eax,eax
  599b8a:	8d 73 34             	lea    esi,[ebx+0x34]
  599b8d:	57                   	push   edi
  599b8e:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  599b92:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  599b96:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  599b9a:	8b fe                	mov    edi,esi
  599b9c:	c7 44 24 14 08 00 00 	mov    DWORD PTR [esp+0x14],0x8
  599ba3:	00 
  599ba4:	8b cf                	mov    ecx,edi
  599ba6:	e8 45 16 00 00       	call   0x59b1f0
  599bab:	84 c0                	test   al,al
  599bad:	74 27                	je     0x599bd6
  599baf:	8b 07                	mov    eax,DWORD PTR [edi]
  599bb1:	8b 4b 6c             	mov    ecx,DWORD PTR [ebx+0x6c]
  599bb4:	50                   	push   eax
  599bb5:	e8 d6 43 00 00       	call   0x59df90
  599bba:	8b e8                	mov    ebp,eax
  599bbc:	e8 3f de ff ff       	call   0x597a00
  599bc1:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  599bc5:	50                   	push   eax
  599bc6:	51                   	push   ecx
  599bc7:	8b cd                	mov    ecx,ebp
  599bc9:	e8 42 02 00 00       	call   0x599e10
  599bce:	84 c0                	test   al,al
  599bd0:	74 04                	je     0x599bd6
  599bd2:	ff 44 24 10          	inc    DWORD PTR [esp+0x10]
  599bd6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  599bda:	83 c7 04             	add    edi,0x4
  599bdd:	48                   	dec    eax
  599bde:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  599be2:	75 c0                	jne    0x599ba4
  599be4:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  599be8:	85 ff                	test   edi,edi
  599bea:	7e 59                	jle    0x599c45
  599bec:	e8 af 08 07 00       	call   0x60a4a0
  599bf1:	99                   	cdq
  599bf2:	f7 ff                	idiv   edi
  599bf4:	8b ea                	mov    ebp,edx
  599bf6:	45                   	inc    ebp
  599bf7:	33 ff                	xor    edi,edi
  599bf9:	89 7c 24 14          	mov    DWORD PTR [esp+0x14],edi
  599bfd:	8b ce                	mov    ecx,esi
  599bff:	e8 ec 15 00 00       	call   0x59b1f0
  599c04:	84 c0                	test   al,al
  599c06:	74 34                	je     0x599c3c
  599c08:	8b 16                	mov    edx,DWORD PTR [esi]
  599c0a:	8b 4b 6c             	mov    ecx,DWORD PTR [ebx+0x6c]
  599c0d:	52                   	push   edx
  599c0e:	e8 7d 43 00 00       	call   0x59df90
  599c13:	8b d8                	mov    ebx,eax
  599c15:	e8 e6 dd ff ff       	call   0x597a00
  599c1a:	50                   	push   eax
  599c1b:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  599c1f:	50                   	push   eax
  599c20:	8b cb                	mov    ecx,ebx
  599c22:	e8 e9 01 00 00       	call   0x599e10
  599c27:	84 c0                	test   al,al
  599c29:	74 0d                	je     0x599c38
  599c2b:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  599c2f:	40                   	inc    eax
  599c30:	3b c5                	cmp    eax,ebp
  599c32:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  599c36:	74 29                	je     0x599c61
  599c38:	8b 5c 24 18          	mov    ebx,DWORD PTR [esp+0x18]
  599c3c:	47                   	inc    edi
  599c3d:	83 c6 04             	add    esi,0x4
  599c40:	83 ff 08             	cmp    edi,0x8
  599c43:	7c b8                	jl     0x599bfd
  599c45:	8b 74 24 20          	mov    esi,DWORD PTR [esp+0x20]
  599c49:	68 84 00 65 00       	push   0x650084
  599c4e:	8b ce                	mov    ecx,esi
  599c50:	e8 7b 15 00 00       	call   0x59b1d0
  599c55:	8b c6                	mov    eax,esi
  599c57:	5f                   	pop    edi
  599c58:	5e                   	pop    esi
  599c59:	5d                   	pop    ebp
  599c5a:	5b                   	pop    ebx
  599c5b:	83 c4 0c             	add    esp,0xc
  599c5e:	c2 08 00             	ret    0x8
  599c61:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  599c65:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  599c69:	8b 54 b9 34          	mov    edx,DWORD PTR [ecx+edi*4+0x34]
  599c6d:	5f                   	pop    edi
  599c6e:	5e                   	pop    esi
  599c6f:	5d                   	pop    ebp
  599c70:	89 10                	mov    DWORD PTR [eax],edx
  599c72:	5b                   	pop    ebx
  599c73:	83 c4 0c             	add    esp,0xc
  599c76:	c2 08 00             	ret    0x8
  599c79:	90                   	nop
  599c7a:	90                   	nop
  599c7b:	90                   	nop
  599c7c:	90                   	nop
  599c7d:	90                   	nop
  599c7e:	90                   	nop
  599c7f:	90                   	nop
  599c80:	6a ff                	push   0xffffffff
  599c82:	68 6f 43 64 00       	push   0x64436f
  599c87:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  599c8d:	50                   	push   eax
  599c8e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  599c95:	83 ec 1c             	sub    esp,0x1c
  599c98:	53                   	push   ebx
  599c99:	55                   	push   ebp
  599c9a:	56                   	push   esi
  599c9b:	8b e9                	mov    ebp,ecx
  599c9d:	57                   	push   edi
  599c9e:	68 84 00 65 00       	push   0x650084
  599ca3:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  599ca7:	c7 44 24 20 00 00 00 	mov    DWORD PTR [esp+0x20],0x0
  599cae:	00 
  599caf:	e8 1c 15 00 00       	call   0x59b1d0
  599cb4:	8b cd                	mov    ecx,ebp
  599cb6:	c7 44 24 34 01 00 00 	mov    DWORD PTR [esp+0x34],0x1
  599cbd:	00 
  599cbe:	c7 44 24 14 f3 4f c3 	mov    DWORD PTR [esp+0x14],0x47c34ff3
  599cc5:	47 
  599cc6:	e8 e5 e2 ff ff       	call   0x597fb0
  599ccb:	50                   	push   eax
  599ccc:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  599cd0:	50                   	push   eax
  599cd1:	e8 2a 79 01 00       	call   0x5b1600
  599cd6:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
  599cda:	83 c4 08             	add    esp,0x8
  599cdd:	8d 7d 34             	lea    edi,[ebp+0x34]
  599ce0:	bb 08 00 00 00       	mov    ebx,0x8
  599ce5:	8b cf                	mov    ecx,edi
  599ce7:	e8 04 15 00 00       	call   0x59b1f0
  599cec:	84 c0                	test   al,al
  599cee:	0f 84 d0 00 00 00    	je     0x599dc4
  599cf4:	8b 0f                	mov    ecx,DWORD PTR [edi]
  599cf6:	51                   	push   ecx
  599cf7:	8b 4d 6c             	mov    ecx,DWORD PTR [ebp+0x6c]
  599cfa:	e8 91 42 00 00       	call   0x59df90
  599cff:	8b f0                	mov    esi,eax
  599d01:	e8 fa dc ff ff       	call   0x597a00
  599d06:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  599d0a:	50                   	push   eax
  599d0b:	52                   	push   edx
  599d0c:	8b ce                	mov    ecx,esi
  599d0e:	e8 fd 00 00 00       	call   0x599e10
  599d13:	84 c0                	test   al,al
  599d15:	0f 84 a9 00 00 00    	je     0x599dc4
  599d1b:	8b ce                	mov    ecx,esi
  599d1d:	e8 8e e2 ff ff       	call   0x597fb0
  599d22:	8b 08                	mov    ecx,DWORD PTR [eax]
  599d24:	89 4c 24 20          	mov    DWORD PTR [esp+0x20],ecx
  599d28:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  599d2c:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  599d2f:	51                   	push   ecx
  599d30:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  599d34:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  599d38:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  599d3b:	52                   	push   edx
  599d3c:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  599d40:	e8 bb 78 01 00       	call   0x5b1600
  599d45:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
  599d49:	83 c4 08             	add    esp,0x8
  599d4c:	d8 15 10 d9 64 00    	fcom   DWORD PTR ds:0x64d910
  599d52:	df e0                	fnstsw ax
  599d54:	f6 c4 01             	test   ah,0x1
  599d57:	75 0d                	jne    0x599d66
  599d59:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  599d5f:	df e0                	fnstsw ax
  599d61:	f6 c4 01             	test   ah,0x1
  599d64:	75 1e                	jne    0x599d84
  599d66:	d8 15 54 d6 64 00    	fcom   DWORD PTR ds:0x64d654
  599d6c:	df e0                	fnstsw ax
  599d6e:	f6 c4 01             	test   ah,0x1
  599d71:	75 17                	jne    0x599d8a
  599d73:	d8 1d d8 b1 64 00    	fcomp  DWORD PTR ds:0x64b1d8
  599d79:	df e0                	fnstsw ax
  599d7b:	f6 c4 01             	test   ah,0x1
  599d7e:	74 0c                	je     0x599d8c
  599d80:	b0 01                	mov    al,0x1
  599d82:	eb 0a                	jmp    0x599d8e
  599d84:	dd d8                	fstp   st(0)
  599d86:	b0 01                	mov    al,0x1
  599d88:	eb 04                	jmp    0x599d8e
  599d8a:	dd d8                	fstp   st(0)
  599d8c:	32 c0                	xor    al,al
  599d8e:	3a 44 24 44          	cmp    al,BYTE PTR [esp+0x44]
  599d92:	75 30                	jne    0x599dc4
  599d94:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
  599d98:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  599d9c:	e8 ff 92 01 00       	call   0x5b30a0
  599da1:	d8 64 24 48          	fsub   DWORD PTR [esp+0x48]
  599da5:	d9 e1                	fabs
  599da7:	d8 54 24 14          	fcom   DWORD PTR [esp+0x14]
  599dab:	df e0                	fnstsw ax
  599dad:	f6 c4 01             	test   ah,0x1
  599db0:	74 10                	je     0x599dc2
  599db2:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  599db6:	57                   	push   edi
  599db7:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  599dbb:	e8 10 14 00 00       	call   0x59b1d0
  599dc0:	eb 02                	jmp    0x599dc4
  599dc2:	dd d8                	fstp   st(0)
  599dc4:	83 c7 04             	add    edi,0x4
  599dc7:	4b                   	dec    ebx
  599dc8:	0f 85 17 ff ff ff    	jne    0x599ce5
  599dce:	8b 74 24 3c          	mov    esi,DWORD PTR [esp+0x3c]
  599dd2:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  599dd6:	c7 44 24 1c 01 00 00 	mov    DWORD PTR [esp+0x1c],0x1
  599ddd:	00 
  599dde:	89 06                	mov    DWORD PTR [esi],eax
  599de0:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  599de4:	c6 44 24 34 00       	mov    BYTE PTR [esp+0x34],0x0
  599de9:	e8 f2 92 fc ff       	call   0x5630e0
  599dee:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  599df2:	8b c6                	mov    eax,esi
  599df4:	5f                   	pop    edi
  599df5:	5e                   	pop    esi
  599df6:	5d                   	pop    ebp
  599df7:	5b                   	pop    ebx
  599df8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  599dff:	83 c4 28             	add    esp,0x28
  599e02:	c2 14 00             	ret    0x14
  599e05:	90                   	nop
  599e06:	90                   	nop
  599e07:	90                   	nop
  599e08:	90                   	nop
  599e09:	90                   	nop
  599e0a:	90                   	nop
  599e0b:	90                   	nop
  599e0c:	90                   	nop
  599e0d:	90                   	nop
  599e0e:	90                   	nop
  599e0f:	90                   	nop
  599e10:	6a ff                	push   0xffffffff
  599e12:	68 a8 43 64 00       	push   0x6443a8
  599e17:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  599e1d:	50                   	push   eax
  599e1e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  599e25:	83 ec 44             	sub    esp,0x44
  599e28:	53                   	push   ebx
  599e29:	55                   	push   ebp
  599e2a:	56                   	push   esi
  599e2b:	57                   	push   edi
  599e2c:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  599e30:	e8 3b e7 ff ff       	call   0x598570
  599e35:	85 c0                	test   eax,eax
  599e37:	7e 07                	jle    0x599e40
  599e39:	32 c0                	xor    al,al
  599e3b:	e9 58 03 00 00       	jmp    0x59a198
  599e40:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  599e46:	85 f6                	test   esi,esi
  599e48:	75 07                	jne    0x599e51
  599e4a:	e8 31 26 f2 ff       	call   0x4bc480
  599e4f:	8b f0                	mov    esi,eax
  599e51:	8b 86 a4 03 00 00    	mov    eax,DWORD PTR [esi+0x3a4]
  599e57:	85 c0                	test   eax,eax
  599e59:	75 6a                	jne    0x599ec5
  599e5b:	8a 44 24 68          	mov    al,BYTE PTR [esp+0x68]
  599e5f:	6a 00                	push   0x0
  599e61:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  599e65:	88 44 24 38          	mov    BYTE PTR [esp+0x38],al
  599e69:	e8 32 a2 e6 ff       	call   0x4040a0
  599e6e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  599e73:	83 c9 ff             	or     ecx,0xffffffff
  599e76:	33 c0                	xor    eax,eax
  599e78:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  599e7a:	f7 d1                	not    ecx
  599e7c:	49                   	dec    ecx
  599e7d:	51                   	push   ecx
  599e7e:	68 70 3f 6b 00       	push   0x6b3f70
  599e83:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  599e87:	e8 64 a2 e6 ff       	call   0x4040f0
  599e8c:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  599e90:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
  599e97:	00 
  599e98:	51                   	push   ecx
  599e99:	68 30 01 00 00       	push   0x130
  599e9e:	68 8c e5 68 00       	push   0x68e58c
  599ea3:	68 84 e5 68 00       	push   0x68e584
  599ea8:	e8 43 69 00 00       	call   0x5a07f0
  599ead:	ff d0                	call   eax
  599eaf:	83 c4 10             	add    esp,0x10
  599eb2:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  599eb6:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
  599ebd:	ff 
  599ebe:	6a 01                	push   0x1
  599ec0:	e8 db a1 e6 ff       	call   0x4040a0
  599ec5:	8b 8e a4 03 00 00    	mov    ecx,DWORD PTR [esi+0x3a4]
  599ecb:	8d 54 24 10          	lea    edx,[esp+0x10]
  599ecf:	52                   	push   edx
  599ed0:	e8 4b 9e eb ff       	call   0x453d20
  599ed5:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  599ed9:	c7 44 24 5c 01 00 00 	mov    DWORD PTR [esp+0x5c],0x1
  599ee0:	00 
  599ee1:	85 c0                	test   eax,eax
  599ee3:	0f 85 f6 00 00 00    	jne    0x599fdf
  599ee9:	8a 44 24 68          	mov    al,BYTE PTR [esp+0x68]
  599eed:	6a 00                	push   0x0
  599eef:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  599ef3:	88 44 24 28          	mov    BYTE PTR [esp+0x28],al
  599ef7:	e8 a4 a1 e6 ff       	call   0x4040a0
  599efc:	bf 24 6f 6a 00       	mov    edi,0x6a6f24
  599f01:	83 c9 ff             	or     ecx,0xffffffff
  599f04:	33 c0                	xor    eax,eax
  599f06:	6a 01                	push   0x1
  599f08:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  599f0a:	f7 d1                	not    ecx
  599f0c:	49                   	dec    ecx
  599f0d:	8b e9                	mov    ebp,ecx
  599f0f:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  599f13:	55                   	push   ebp
  599f14:	e8 27 7a e6 ff       	call   0x401940
  599f19:	84 c0                	test   al,al
  599f1b:	74 23                	je     0x599f40
  599f1d:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  599f21:	8b cd                	mov    ecx,ebp
  599f23:	8b d1                	mov    edx,ecx
  599f25:	be 24 6f 6a 00       	mov    esi,0x6a6f24
  599f2a:	c1 e9 02             	shr    ecx,0x2
  599f2d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  599f2f:	8b ca                	mov    ecx,edx
  599f31:	55                   	push   ebp
  599f32:	83 e1 03             	and    ecx,0x3
  599f35:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  599f37:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  599f3b:	e8 50 a2 e6 ff       	call   0x404190
  599f40:	8d 44 24 24          	lea    eax,[esp+0x24]
  599f44:	c6 44 24 5c 02       	mov    BYTE PTR [esp+0x5c],0x2
  599f49:	50                   	push   eax
  599f4a:	68 aa 03 00 00       	push   0x3aa
  599f4f:	68 ec 6c 6a 00       	push   0x6a6cec
  599f54:	68 10 6f 6a 00       	push   0x6a6f10
  599f59:	e8 92 68 00 00       	call   0x5a07f0
  599f5e:	ff d0                	call   eax
  599f60:	83 c4 10             	add    esp,0x10
  599f63:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  599f67:	c6 44 24 5c 01       	mov    BYTE PTR [esp+0x5c],0x1
  599f6c:	6a 01                	push   0x1
  599f6e:	e8 2d a1 e6 ff       	call   0x4040a0
  599f73:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  599f77:	85 c0                	test   eax,eax
  599f79:	75 64                	jne    0x599fdf
  599f7b:	8a 4c 24 68          	mov    cl,BYTE PTR [esp+0x68]
  599f7f:	6a 00                	push   0x0
  599f81:	88 4c 24 48          	mov    BYTE PTR [esp+0x48],cl
  599f85:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  599f89:	e8 12 a1 e6 ff       	call   0x4040a0
  599f8e:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  599f93:	83 c9 ff             	or     ecx,0xffffffff
  599f96:	33 c0                	xor    eax,eax
  599f98:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  599f9a:	f7 d1                	not    ecx
  599f9c:	49                   	dec    ecx
  599f9d:	51                   	push   ecx
  599f9e:	68 70 3f 6b 00       	push   0x6b3f70
  599fa3:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  599fa7:	e8 44 a1 e6 ff       	call   0x4040f0
  599fac:	8d 54 24 44          	lea    edx,[esp+0x44]
  599fb0:	c6 44 24 5c 03       	mov    BYTE PTR [esp+0x5c],0x3
  599fb5:	52                   	push   edx
  599fb6:	68 b6 00 00 00       	push   0xb6
  599fbb:	68 38 d6 68 00       	push   0x68d638
  599fc0:	68 2c d6 68 00       	push   0x68d62c
  599fc5:	e8 26 68 00 00       	call   0x5a07f0
  599fca:	ff d0                	call   eax
  599fcc:	83 c4 10             	add    esp,0x10
  599fcf:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  599fd3:	c6 44 24 5c 01       	mov    BYTE PTR [esp+0x5c],0x1
  599fd8:	6a 01                	push   0x1
  599fda:	e8 c1 a0 e6 ff       	call   0x4040a0
  599fdf:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  599fe3:	8b 98 60 03 00 00    	mov    ebx,DWORD PTR [eax+0x360]
  599fe9:	85 db                	test   ebx,ebx
  599feb:	0f 85 89 00 00 00    	jne    0x59a07a
  599ff1:	8a 4c 24 68          	mov    cl,BYTE PTR [esp+0x68]
  599ff5:	53                   	push   ebx
  599ff6:	88 4c 24 28          	mov    BYTE PTR [esp+0x28],cl
  599ffa:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  599ffe:	e8 9d a0 e6 ff       	call   0x4040a0
  59a003:	bf f4 6e 6a 00       	mov    edi,0x6a6ef4
  59a008:	83 c9 ff             	or     ecx,0xffffffff
  59a00b:	33 c0                	xor    eax,eax
  59a00d:	6a 01                	push   0x1
  59a00f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  59a011:	f7 d1                	not    ecx
  59a013:	49                   	dec    ecx
  59a014:	8b e9                	mov    ebp,ecx
  59a016:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59a01a:	55                   	push   ebp
  59a01b:	e8 20 79 e6 ff       	call   0x401940
  59a020:	84 c0                	test   al,al
  59a022:	74 23                	je     0x59a047
  59a024:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  59a028:	8b cd                	mov    ecx,ebp
  59a02a:	8b d1                	mov    edx,ecx
  59a02c:	be f4 6e 6a 00       	mov    esi,0x6a6ef4
  59a031:	c1 e9 02             	shr    ecx,0x2
  59a034:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  59a036:	8b ca                	mov    ecx,edx
  59a038:	55                   	push   ebp
  59a039:	83 e1 03             	and    ecx,0x3
  59a03c:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  59a03e:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  59a042:	e8 49 a1 e6 ff       	call   0x404190
  59a047:	8d 44 24 24          	lea    eax,[esp+0x24]
  59a04b:	c6 44 24 5c 04       	mov    BYTE PTR [esp+0x5c],0x4
  59a050:	50                   	push   eax
  59a051:	68 ac 03 00 00       	push   0x3ac
  59a056:	68 ec 6c 6a 00       	push   0x6a6cec
  59a05b:	68 c0 f0 69 00       	push   0x69f0c0
  59a060:	e8 8b 67 00 00       	call   0x5a07f0
  59a065:	ff d0                	call   eax
  59a067:	83 c4 10             	add    esp,0x10
  59a06a:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  59a06e:	c6 44 24 5c 01       	mov    BYTE PTR [esp+0x5c],0x1
  59a073:	6a 01                	push   0x1
  59a075:	e8 26 a0 e6 ff       	call   0x4040a0
  59a07a:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  59a07e:	e8 2d df ff ff       	call   0x597fb0
  59a083:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  59a087:	50                   	push   eax
  59a088:	51                   	push   ecx
  59a089:	e8 d2 1d f4 ff       	call   0x4dbe60
  59a08e:	8b d0                	mov    edx,eax
  59a090:	83 c4 08             	add    esp,0x8
  59a093:	8b 02                	mov    eax,DWORD PTR [edx]
  59a095:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  59a098:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  59a09b:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  59a09f:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  59a0a3:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  59a0a7:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  59a0ab:	8b 03                	mov    eax,DWORD PTR [ebx]
  59a0ad:	51                   	push   ecx
  59a0ae:	8b cb                	mov    ecx,ebx
  59a0b0:	ff 50 48             	call   DWORD PTR [eax+0x48]
  59a0b3:	8b d0                	mov    edx,eax
  59a0b5:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  59a0b9:	e8 e2 8f 01 00       	call   0x5b30a0
  59a0be:	8b 74 24 64          	mov    esi,DWORD PTR [esp+0x64]
  59a0c2:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  59a0c6:	8b ce                	mov    ecx,esi
  59a0c8:	e8 d3 b3 ff ff       	call   0x5954a0
  59a0cd:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  59a0d1:	d8 58 10             	fcomp  DWORD PTR [eax+0x10]
  59a0d4:	df e0                	fnstsw ax
  59a0d6:	f6 c4 01             	test   ah,0x1
  59a0d9:	74 2f                	je     0x59a10a
  59a0db:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  59a0df:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
  59a0e6:	ff 
  59a0e7:	85 c0                	test   eax,eax
  59a0e9:	74 7f                	je     0x59a16a
  59a0eb:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59a0ee:	8b c8                	mov    ecx,eax
  59a0f0:	83 c0 14             	add    eax,0x14
  59a0f3:	4e                   	dec    esi
  59a0f4:	8b d6                	mov    edx,esi
  59a0f6:	85 d2                	test   edx,edx
  59a0f8:	89 30                	mov    DWORD PTR [eax],esi
  59a0fa:	75 6e                	jne    0x59a16a
  59a0fc:	6a 00                	push   0x0
  59a0fe:	e8 bd 1e 01 00       	call   0x5abfc0
  59a103:	32 c0                	xor    al,al
  59a105:	e9 8e 00 00 00       	jmp    0x59a198
  59a10a:	8a 44 24 68          	mov    al,BYTE PTR [esp+0x68]
  59a10e:	84 c0                	test   al,al
  59a110:	74 5c                	je     0x59a16e
  59a112:	8b 06                	mov    eax,DWORD PTR [esi]
  59a114:	8d 54 24 18          	lea    edx,[esp+0x18]
  59a118:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  59a11c:	52                   	push   edx
  59a11d:	51                   	push   ecx
  59a11e:	8b ce                	mov    ecx,esi
  59a120:	ff 90 88 00 00 00    	call   DWORD PTR [eax+0x88]
  59a126:	50                   	push   eax
  59a127:	51                   	push   ecx
  59a128:	8b d4                	mov    edx,esp
  59a12a:	89 64 24 74          	mov    DWORD PTR [esp+0x74],esp
  59a12e:	52                   	push   edx
  59a12f:	8b ce                	mov    ecx,esi
  59a131:	e8 aa a1 e6 ff       	call   0x4042e0
  59a136:	e8 a5 ae ff ff       	call   0x594fe0
  59a13b:	83 c4 0c             	add    esp,0xc
  59a13e:	84 c0                	test   al,al
  59a140:	75 2c                	jne    0x59a16e
  59a142:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  59a146:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
  59a14d:	ff 
  59a14e:	85 c0                	test   eax,eax
  59a150:	74 18                	je     0x59a16a
  59a152:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59a155:	8b c8                	mov    ecx,eax
  59a157:	83 c0 14             	add    eax,0x14
  59a15a:	4e                   	dec    esi
  59a15b:	8b d6                	mov    edx,esi
  59a15d:	85 d2                	test   edx,edx
  59a15f:	89 30                	mov    DWORD PTR [eax],esi
  59a161:	75 07                	jne    0x59a16a
  59a163:	6a 00                	push   0x0
  59a165:	e8 56 1e 01 00       	call   0x5abfc0
  59a16a:	32 c0                	xor    al,al
  59a16c:	eb 2a                	jmp    0x59a198
  59a16e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  59a172:	c7 44 24 5c ff ff ff 	mov    DWORD PTR [esp+0x5c],0xffffffff
  59a179:	ff 
  59a17a:	85 c0                	test   eax,eax
  59a17c:	74 18                	je     0x59a196
  59a17e:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  59a181:	8b c8                	mov    ecx,eax
  59a183:	83 c0 14             	add    eax,0x14
  59a186:	4e                   	dec    esi
  59a187:	8b d6                	mov    edx,esi
  59a189:	85 d2                	test   edx,edx
  59a18b:	89 30                	mov    DWORD PTR [eax],esi
  59a18d:	75 07                	jne    0x59a196
  59a18f:	6a 00                	push   0x0
  59a191:	e8 2a 1e 01 00       	call   0x5abfc0
  59a196:	b0 01                	mov    al,0x1
  59a198:	8b 4c 24 54          	mov    ecx,DWORD PTR [esp+0x54]
  59a19c:	5f                   	pop    edi
  59a19d:	5e                   	pop    esi
  59a19e:	5d                   	pop    ebp
  59a19f:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  59a1a6:	5b                   	pop    ebx
  59a1a7:	83 c4 50             	add    esp,0x50
  59a1aa:	c2 08 00             	ret    0x8
  59a1ad:	90                   	nop
  59a1ae:	90                   	nop
  59a1af:	90                   	nop
