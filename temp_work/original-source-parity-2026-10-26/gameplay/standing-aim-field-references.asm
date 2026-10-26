16885-  40c20c:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
16886-  40c210:	8b cd                	mov    ecx,ebp
16887-  40c212:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
16888-  40c215:	8d 44 24 28          	lea    eax,[esp+0x28]
16889-  40c219:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
16890:  40c21d:	d8 85 2c 02 00 00    	fadd   DWORD PTR [ebp+0x22c]
16891-  40c223:	50                   	push   eax
16892-  40c224:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
16893-  40c228:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
16894-  40c22b:	8d 44 24 50          	lea    eax,[esp+0x50]
16895-  40c22f:	50                   	push   eax
--
41828-  41c5ba:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
41829-  41c5be:	89 74 24 20          	mov    DWORD PTR [esp+0x20],esi
41830-  41c5c2:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
41831-  41c5c5:	89 4c 24 3c          	mov    DWORD PTR [esp+0x3c],ecx
41832-  41c5c9:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
41833:  41c5cd:	d8 83 2c 02 00 00    	fadd   DWORD PTR [ebx+0x22c]
41834-  41c5d3:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
41835-  41c5d6:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
41836-  41c5da:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
41837-  41c5de:	8b 83 30 02 00 00    	mov    eax,DWORD PTR [ebx+0x230]
41838-  41c5e4:	85 c0                	test   eax,eax
--
63339-  42b5c5:	8d 7c 24 0c          	lea    edi,[esp+0xc]
63340-  42b5c9:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
63341-  42b5cb:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
63342-  42b5cf:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
63343-  42b5d3:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
63344:  42b5d9:	d9 9b 2c 02 00 00    	fstp   DWORD PTR [ebx+0x22c]
63345-  42b5df:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
63346-  42b5e3:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
63347-  42b5ea:	ff 
63348-  42b5eb:	85 c0                	test   eax,eax
63349-  42b5ed:	74 18                	je     0x42b607
--
63467-  42b732:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
63468-  42b736:	8b 16                	mov    edx,DWORD PTR [esi]
63469-  42b738:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
63470-  42b73c:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
63471-  42b73f:	8b ce                	mov    ecx,esi
63472:  42b741:	d8 86 2c 02 00 00    	fadd   DWORD PTR [esi+0x22c]
63473-  42b747:	89 44 24 3c          	mov    DWORD PTR [esp+0x3c],eax
63474-  42b74b:	8d 44 24 40          	lea    eax,[esp+0x40]
63475-  42b74f:	50                   	push   eax
63476-  42b750:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
63477-  42b754:	ff 92 c8 00 00 00    	call   DWORD PTR [edx+0xc8]
--
77093-  43570a:	8d 4c 24 34          	lea    ecx,[esp+0x34]
77094-  43570e:	8b d6                	mov    edx,esi
77095-  435710:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
77096-  435717:	00 00 00 
77097-  43571a:	e8 31 d9 17 00       	call   0x5b3050
77098:  43571f:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
77099-  435725:	85 c9                	test   ecx,ecx
77100-  435727:	0f 84 0e 03 00 00    	je     0x435a3b
77101-  43572d:	e9 fa 02 00 00       	jmp    0x435a2c
77102-  435732:	8d 94 24 9c 00 00 00 	lea    edx,[esp+0x9c]
77103-  435739:	8d 44 24 10          	lea    eax,[esp+0x10]
--
77311-  435a10:	56                   	push   esi
77312-  435a11:	8b cb                	mov    ecx,ebx
77313-  435a13:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
77314-  435a1a:	00 00 00 
77315-  435a1d:	e8 de d5 17 00       	call   0x5b3000
77316:  435a22:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
77317-  435a28:	85 c9                	test   ecx,ecx
77318-  435a2a:	74 0f                	je     0x435a3b
77319-  435a2c:	56                   	push   esi
77320-  435a2d:	e8 fe be 09 00       	call   0x4d1930
77321-  435a32:	8b d0                	mov    edx,eax
--
77338-  435a70:	8d 4c 24 34          	lea    ecx,[esp+0x34]
77339-  435a74:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
77340-  435a78:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
77341-  435a7f:	00 00 00 
77342-  435a82:	e8 c9 d5 17 00       	call   0x5b3050
77343:  435a87:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
77344-  435a8d:	85 c9                	test   ecx,ecx
77345-  435a8f:	0f 84 99 07 00 00    	je     0x43622e
77346-  435a95:	56                   	push   esi
77347-  435a96:	e8 95 be 09 00       	call   0x4d1930
77348-  435a9b:	8b d0                	mov    edx,eax
--
110630-  44c948:	74 4d                	je     0x44c997
110631-  44c94a:	8b 86 28 02 00 00    	mov    eax,DWORD PTR [esi+0x228]
110632-  44c950:	83 f8 ff             	cmp    eax,0xffffffff
110633-  44c953:	75 14                	jne    0x44c969
110634-  44c955:	03 cb                	add    ecx,ebx
110635:  44c957:	c7 86 2c 02 00 00 00 	mov    DWORD PTR [esi+0x22c],0x3f800000
110636-  44c95e:	00 80 3f 
110637-  44c961:	89 8e 28 02 00 00    	mov    DWORD PTR [esi+0x228],ecx
110638-  44c967:	eb 2e                	jmp    0x44c997
110639-  44c969:	3b d8                	cmp    ebx,eax
110640-  44c96b:	7e 0a                	jle    0x44c977
110641:  44c96d:	89 ae 2c 02 00 00    	mov    DWORD PTR [esi+0x22c],ebp
110642-  44c973:	32 d2                	xor    dl,dl
110643-  44c975:	eb 20                	jmp    0x44c997
110644-  44c977:	3b cd                	cmp    ecx,ebp
110645-  44c979:	7e 16                	jle    0x44c991
110646-  44c97b:	2b c3                	sub    eax,ebx
110647-  44c97d:	89 44 24 7c          	mov    DWORD PTR [esp+0x7c],eax
110648-  44c981:	db 44 24 7c          	fild   DWORD PTR [esp+0x7c]
110649-  44c985:	da 74 24 18          	fidiv  DWORD PTR [esp+0x18]
110650:  44c989:	d9 9e 2c 02 00 00    	fstp   DWORD PTR [esi+0x22c]
110651-  44c98f:	eb 06                	jmp    0x44c997
110652:  44c991:	89 ae 2c 02 00 00    	mov    DWORD PTR [esi+0x22c],ebp
110653-  44c997:	84 d2                	test   dl,dl
110654-  44c999:	88 96 30 02 00 00    	mov    BYTE PTR [esi+0x230],dl
110655-  44c99f:	0f 85 23 01 00 00    	jne    0x44cac8
110656-  44c9a5:	8b 06                	mov    eax,DWORD PTR [esi]
110657-  44c9a7:	8b ce                	mov    ecx,esi
--
110729-  44ca9e:	89 6c 24 70          	mov    DWORD PTR [esp+0x70],ebp
110730-  44caa2:	6a 01                	push   0x1
110731-  44caa4:	e8 f7 75 fb ff       	call   0x4040a0
110732-  44caa9:	89 ae 28 02 00 00    	mov    DWORD PTR [esi+0x228],ebp
110733-  44caaf:	89 be 24 02 00 00    	mov    DWORD PTR [esi+0x224],edi
110734:  44cab5:	c7 86 2c 02 00 00 00 	mov    DWORD PTR [esi+0x22c],0x3f800000
110735-  44cabc:	00 80 3f 
110736-  44cabf:	c6 86 30 02 00 00 01 	mov    BYTE PTR [esi+0x230],0x1
110737-  44cac6:	33 ed                	xor    ebp,ebp
110738-  44cac8:	8b ce                	mov    ecx,esi
110739-  44caca:	e8 b1 f1 ff ff       	call   0x44bc80
--
165757-  475f72:	d9 9d 10 02 00 00    	fstp   DWORD PTR [ebp+0x210]
165758-  475f78:	d9 44 24 24          	fld    DWORD PTR [esp+0x24]
165759-  475f7c:	d8 05 dc df 64 00    	fadd   DWORD PTR ds:0x64dfdc
165760-  475f82:	d8 64 24 0c          	fsub   DWORD PTR [esp+0xc]
165761-  475f86:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
165762:  475f8a:	d9 9d 2c 02 00 00    	fstp   DWORD PTR [ebp+0x22c]
165763-  475f90:	d9 05 e0 df 64 00    	fld    DWORD PTR ds:0x64dfe0
165764-  475f96:	d8 44 24 28          	fadd   DWORD PTR [esp+0x28]
165765-  475f9a:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
165766-  475f9e:	d8 64 24 1c          	fsub   DWORD PTR [esp+0x1c]
165767-  475fa2:	d9 9d 30 02 00 00    	fstp   DWORD PTR [ebp+0x230]
--
217302-  49d919:	d9 9e 28 02 00 00    	fstp   DWORD PTR [esi+0x228]
217303-  49d91f:	eb 0a                	jmp    0x49d92b
217304-  49d921:	c7 86 28 02 00 00 00 	mov    DWORD PTR [esi+0x228],0x0
217305-  49d928:	00 00 00 
217306-  49d92b:	84 d2                	test   dl,dl
217307:  49d92d:	88 96 2c 02 00 00    	mov    BYTE PTR [esi+0x22c],dl
217308-  49d933:	75 24                	jne    0x49d959
217309-  49d935:	55                   	push   ebp
217310-  49d936:	57                   	push   edi
217311-  49d937:	8b ce                	mov    ecx,esi
217312-  49d939:	e8 b2 fc ff ff       	call   0x49d5f0
--
291866-  4d5918:	07 
291867-  4d5919:	e8 92 e8 f2 ff       	call   0x4041b0
291868-  4d591e:	68 e8 f0 64 00       	push   0x64f0e8
291869-  4d5923:	8d 8e 28 02 00 00    	lea    ecx,[esi+0x228]
291870-  4d5929:	e8 a2 58 0c 00       	call   0x59b1d0
291871:  4d592e:	89 9e 2c 02 00 00    	mov    DWORD PTR [esi+0x22c],ebx
291872-  4d5934:	8b 15 f0 f0 64 00    	mov    edx,DWORD PTR ds:0x64f0f0
291873-  4d593a:	8d 8e 40 02 00 00    	lea    ecx,[esi+0x240]
291874-  4d5940:	6a ff                	push   0xffffffff
291875-  4d5942:	c6 84 24 14 01 00 00 	mov    BYTE PTR [esp+0x114],0x8
291876-  4d5949:	08 
--
292951-  4d671f:	90                   	nop
292952-  4d6720:	83 ec 44             	sub    esp,0x44
292953-  4d6723:	56                   	push   esi
292954-  4d6724:	8b f1                	mov    esi,ecx
292955-  4d6726:	8b 16                	mov    edx,DWORD PTR [esi]
292956:  4d6728:	c7 86 2c 02 00 00 00 	mov    DWORD PTR [esi+0x22c],0x0
292957-  4d672f:	00 00 00 
292958-  4d6732:	a1 f0 f0 64 00       	mov    eax,ds:0x64f0f0
292959-  4d6737:	89 86 30 02 00 00    	mov    DWORD PTR [esi+0x230],eax
292960-  4d673d:	8d 44 24 10          	lea    eax,[esp+0x10]
292961-  4d6741:	50                   	push   eax
--
292996-  4d67a8:	d9 9e 30 02 00 00    	fstp   DWORD PTR [esi+0x230]
292997-  4d67ae:	74 0f                	je     0x4d67bf
292998-  4d67b0:	50                   	push   eax
292999-  4d67b1:	e8 ba 9d ff ff       	call   0x4d0570
293000-  4d67b6:	83 c4 04             	add    esp,0x4
293001:  4d67b9:	89 86 2c 02 00 00    	mov    DWORD PTR [esi+0x22c],eax
293002-  4d67bf:	5e                   	pop    esi
293003-  4d67c0:	83 c4 44             	add    esp,0x44
293004-  4d67c3:	c3                   	ret
293005-  4d67c4:	90                   	nop
293006-  4d67c5:	90                   	nop
--
293012-  4d67cb:	90                   	nop
293013-  4d67cc:	90                   	nop
293014-  4d67cd:	90                   	nop
293015-  4d67ce:	90                   	nop
293016-  4d67cf:	90                   	nop
293017:  4d67d0:	8b 89 2c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x22c]
293018-  4d67d6:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
293019-  4d67da:	33 c0                	xor    eax,eax
293020-  4d67dc:	3b ca                	cmp    ecx,edx
293021-  4d67de:	0f 94 c0             	sete   al
293022-  4d67e1:	c2 04 00             	ret    0x4
--
294777-  4d7d74:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
294778-  4d7d78:	8b d6                	mov    edx,esi
294779-  4d7d7a:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
294780-  4d7d81:	00 00 00 
294781-  4d7d84:	e8 c7 b2 0d 00       	call   0x5b3050
294782:  4d7d89:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
294783-  4d7d8f:	85 c9                	test   ecx,ecx
294784-  4d7d91:	0f 84 7c 04 00 00    	je     0x4d8213
294785-  4d7d97:	e9 68 04 00 00       	jmp    0x4d8204
294786-  4d7d9c:	81 f9 00 00 00 80    	cmp    ecx,0x80000000
294787-  4d7da2:	75 21                	jne    0x4d7dc5
--
295098-  4d81e6:	56                   	push   esi
295099-  4d81e7:	8d 54 24 50          	lea    edx,[esp+0x50]
295100-  4d81eb:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
295101-  4d81f2:	00 00 00 
295102-  4d81f5:	e8 06 ae 0d 00       	call   0x5b3000
295103:  4d81fa:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
295104-  4d8200:	85 c9                	test   ecx,ecx
295105-  4d8202:	74 0f                	je     0x4d8213
295106-  4d8204:	56                   	push   esi
295107-  4d8205:	e8 26 97 ff ff       	call   0x4d1930
295108-  4d820a:	8b d0                	mov    edx,eax
--
295142-  4d8288:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
295143-  4d828c:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
295144-  4d8290:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
295145-  4d8297:	00 00 00 
295146-  4d829a:	e8 b1 ad 0d 00       	call   0x5b3050
295147:  4d829f:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
295148-  4d82a5:	85 c9                	test   ecx,ecx
295149-  4d82a7:	0f 84 3d 0a 00 00    	je     0x4d8cea
295150-  4d82ad:	56                   	push   esi
295151-  4d82ae:	e8 7d 96 ff ff       	call   0x4d1930
295152-  4d82b3:	8b d0                	mov    edx,eax
--
502742-  573ff8:	8d 8d 28 02 00 00    	lea    ecx,[ebp+0x228]
502743-  573ffe:	e8 3d d9 e8 ff       	call   0x401940
502744-  574003:	84 c0                	test   al,al
502745-  574005:	74 31                	je     0x574038
502746-  574007:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
502747:  57400b:	8b bd 2c 02 00 00    	mov    edi,DWORD PTR [ebp+0x22c]
502748-  574011:	8b b4 24 8c 00 00 00 	mov    esi,DWORD PTR [esp+0x8c]
502749-  574018:	8d 85 28 02 00 00    	lea    eax,[ebp+0x228]
502750-  57401e:	8b d1                	mov    edx,ecx
502751-  574020:	c1 e9 02             	shr    ecx,0x2
502752-  574023:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
--
502872-  5741d8:	8d 8d 28 02 00 00    	lea    ecx,[ebp+0x228]
502873-  5741de:	53                   	push   ebx
502874-  5741df:	e8 5c d7 e8 ff       	call   0x401940
502875-  5741e4:	84 c0                	test   al,al
502876-  5741e6:	74 2b                	je     0x574213
502877:  5741e8:	8b bd 2c 02 00 00    	mov    edi,DWORD PTR [ebp+0x22c]
502878-  5741ee:	8b cb                	mov    ecx,ebx
502879-  5741f0:	8d 85 28 02 00 00    	lea    eax,[ebp+0x228]
502880-  5741f6:	8b d1                	mov    edx,ecx
502881-  5741f8:	be 70 3f 6b 00       	mov    esi,0x6b3f70
502882-  5741fd:	53                   	push   ebx
