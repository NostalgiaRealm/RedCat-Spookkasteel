
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005fc900 <.text+0x1fb900>:
  5fc900:	ff                   	(bad)
  5fc901:	ff 8b 4d 10 dd 41    	dec    DWORD PTR [ebx+0x41dd104d]
  5fc907:	10 d9                	adc    cl,bl
  5fc909:	ed                   	in     eax,dx
  5fc90a:	eb a9                	jmp    0x5fc8b5
  5fc90c:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc90f:	8d 54 24 38          	lea    edx,[esp+0x38]
  5fc913:	52                   	push   edx
  5fc914:	e8 f7 10 e6 ff       	call   0x45da10
  5fc919:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5fc91c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc91f:	50                   	push   eax
  5fc920:	8b ce                	mov    ecx,esi
  5fc922:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x2
  5fc929:	02 00 00 00 
  5fc92d:	e8 5e 79 ff ff       	call   0x5f4290
  5fc932:	6a 01                	push   0x1
  5fc934:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5fc938:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc93e:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc945:	ff ff ff ff 
  5fc949:	e8 52 77 e0 ff       	call   0x4040a0
  5fc94e:	8b c6                	mov    eax,esi
  5fc950:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc957:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc95e:	5f                   	pop    edi
  5fc95f:	5e                   	pop    esi
  5fc960:	5b                   	pop    ebx
  5fc961:	8b e5                	mov    esp,ebp
  5fc963:	5d                   	pop    ebp
  5fc964:	c3                   	ret
  5fc965:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fc968:	83 ec 10             	sub    esp,0x10
  5fc96b:	8b c4                	mov    eax,esp
  5fc96d:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  5fc971:	50                   	push   eax
  5fc972:	e8 99 10 e6 ff       	call   0x45da10
  5fc977:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  5fc97b:	51                   	push   ecx
  5fc97c:	e8 7f 02 00 00       	call   0x5fcc00
  5fc981:	83 c4 14             	add    esp,0x14
  5fc984:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fc987:	50                   	push   eax
  5fc988:	8b ce                	mov    ecx,esi
  5fc98a:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x3
  5fc991:	03 00 00 00 
  5fc995:	e8 46 62 fe ff       	call   0x5e2be0
  5fc99a:	6a 01                	push   0x1
  5fc99c:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5fc9a0:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fc9a6:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fc9ad:	ff ff ff ff 
  5fc9b1:	e8 ea 76 e0 ff       	call   0x4040a0
  5fc9b6:	8b c6                	mov    eax,esi
  5fc9b8:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fc9bf:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fc9c6:	5f                   	pop    edi
  5fc9c7:	5e                   	pop    esi
  5fc9c8:	5b                   	pop    ebx
  5fc9c9:	8b e5                	mov    esp,ebp
  5fc9cb:	5d                   	pop    ebp
  5fc9cc:	c3                   	ret
  5fc9cd:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  5fc9d0:	6a 00                	push   0x0
  5fc9d2:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5fc9d6:	c6 44 24 11 00       	mov    BYTE PTR [esp+0x11],0x0
  5fc9db:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
  5fc9de:	88 44 24 10          	mov    BYTE PTR [esp+0x10],al
  5fc9e2:	8a 44 24 10          	mov    al,BYTE PTR [esp+0x10]
  5fc9e6:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  5fc9ea:	e8 b1 76 e0 ff       	call   0x4040a0
  5fc9ef:	8d 7c 24 0c          	lea    edi,[esp+0xc]
  5fc9f3:	83 c9 ff             	or     ecx,0xffffffff
  5fc9f6:	33 c0                	xor    eax,eax
  5fc9f8:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  5fc9fa:	f7 d1                	not    ecx
  5fc9fc:	49                   	dec    ecx
  5fc9fd:	51                   	push   ecx
  5fc9fe:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  5fca02:	51                   	push   ecx
  5fca03:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  5fca07:	e8 e4 76 e0 ff       	call   0x4040f0
  5fca0c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fca0f:	8d 54 24 18          	lea    edx,[esp+0x18]
  5fca13:	52                   	push   edx
  5fca14:	8b ce                	mov    ecx,esi
  5fca16:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x4
  5fca1d:	04 00 00 00 
  5fca21:	e8 ba 61 fe ff       	call   0x5e2be0
  5fca26:	6a 01                	push   0x1
  5fca28:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  5fca2c:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fca32:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fca39:	ff ff ff ff 
  5fca3d:	e8 5e 76 e0 ff       	call   0x4040a0
  5fca42:	8b c6                	mov    eax,esi
  5fca44:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fca4b:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fca52:	5f                   	pop    edi
  5fca53:	5e                   	pop    esi
  5fca54:	5b                   	pop    ebx
  5fca55:	8b e5                	mov    esp,ebp
  5fca57:	5d                   	pop    ebp
  5fca58:	c3                   	ret
  5fca59:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
  5fca5c:	8d 84 24 88 00 00 00 	lea    eax,[esp+0x88]
  5fca63:	50                   	push   eax
  5fca64:	8b ce                	mov    ecx,esi
  5fca66:	e8 a5 0f e6 ff       	call   0x45da10
  5fca6b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5fca6e:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0x5
  5fca75:	05 00 00 00 
  5fca79:	85 c0                	test   eax,eax
  5fca7b:	74 25                	je     0x5fcaa2
  5fca7d:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  5fca81:	51                   	push   ecx
  5fca82:	8b ce                	mov    ecx,esi
  5fca84:	e8 87 0f e6 ff       	call   0x45da10
  5fca89:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  5fca8c:	bb 02 00 00 00       	mov    ebx,0x2
  5fca91:	85 c0                	test   eax,eax
  5fca93:	75 05                	jne    0x5fca9a
  5fca95:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  5fca9a:	33 d2                	xor    edx,edx
  5fca9c:	8a 10                	mov    dl,BYTE PTR [eax]
  5fca9e:	8b c2                	mov    eax,edx
  5fcaa0:	eb 02                	jmp    0x5fcaa4
  5fcaa2:	33 c0                	xor    eax,eax
  5fcaa4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fcaa7:	83 cb 01             	or     ebx,0x1
  5fcaaa:	f6 c3 02             	test   bl,0x2
  5fcaad:	c7 46 08 02 00 00 00 	mov    DWORD PTR [esi+0x8],0x2
  5fcab4:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5fcab7:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fcabd:	74 0b                	je     0x5fcaca
  5fcabf:	6a 01                	push   0x1
  5fcac1:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  5fcac5:	e8 d6 75 e0 ff       	call   0x4040a0
  5fcaca:	6a 01                	push   0x1
  5fcacc:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
  5fcad3:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0xffffffff
  5fcada:	ff ff ff ff 
  5fcade:	e8 bd 75 e0 ff       	call   0x4040a0
  5fcae3:	8b c6                	mov    eax,esi
  5fcae5:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fcaec:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcaf3:	5f                   	pop    edi
  5fcaf4:	5e                   	pop    esi
  5fcaf5:	5b                   	pop    ebx
  5fcaf6:	8b e5                	mov    esp,ebp
  5fcaf8:	5d                   	pop    ebp
  5fcaf9:	c3                   	ret
  5fcafa:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
  5fcafd:	83 ec 10             	sub    esp,0x10
  5fcb00:	8b c4                	mov    eax,esp
  5fcb02:	89 64 24 1c          	mov    DWORD PTR [esp+0x1c],esp
  5fcb06:	50                   	push   eax
  5fcb07:	e8 04 0f e6 ff       	call   0x45da10
  5fcb0c:	8d 8c 24 b8 00 00 00 	lea    ecx,[esp+0xb8]
  5fcb13:	51                   	push   ecx
  5fcb14:	e8 d7 01 00 00       	call   0x5fccf0
  5fcb19:	83 c4 14             	add    esp,0x14
  5fcb1c:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
  5fcb1f:	50                   	push   eax
  5fcb20:	8b ce                	mov    ecx,esi
  5fcb22:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x6
  5fcb29:	06 00 00 00 
  5fcb2d:	e8 ae 60 fe ff       	call   0x5e2be0
  5fcb32:	8b 84 24 ac 00 00 00 	mov    eax,DWORD PTR [esp+0xac]
  5fcb39:	c7 06 d4 0a 65 00    	mov    DWORD PTR [esi],0x650ad4
  5fcb3f:	85 c0                	test   eax,eax
  5fcb41:	0f 84 c3 fa ff ff    	je     0x5fc60a
  5fcb47:	8d 48 ff             	lea    ecx,[eax-0x1]
  5fcb4a:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  5fcb4d:	84 c0                	test   al,al
  5fcb4f:	74 1f                	je     0x5fcb70
  5fcb51:	3c ff                	cmp    al,0xff
  5fcb53:	74 1b                	je     0x5fcb70
  5fcb55:	fe c8                	dec    al
  5fcb57:	88 01                	mov    BYTE PTR [ecx],al
  5fcb59:	8b c6                	mov    eax,esi
  5fcb5b:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  5fcb62:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcb69:	5f                   	pop    edi
  5fcb6a:	5e                   	pop    esi
  5fcb6b:	5b                   	pop    ebx
  5fcb6c:	8b e5                	mov    esp,ebp
  5fcb6e:	5d                   	pop    ebp
  5fcb6f:	c3                   	ret
  5fcb70:	51                   	push   ecx
  5fcb71:	e8 7a 1a 00 00       	call   0x5fe5f0
  5fcb76:	8b 8c 24 bc 00 00 00 	mov    ecx,DWORD PTR [esp+0xbc]
  5fcb7d:	83 c4 04             	add    esp,0x4
  5fcb80:	8b c6                	mov    eax,esi
  5fcb82:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  5fcb89:	5f                   	pop    edi
  5fcb8a:	5e                   	pop    esi
  5fcb8b:	5b                   	pop    ebx
  5fcb8c:	8b e5                	mov    esp,ebp
  5fcb8e:	5d                   	pop    ebp
  5fcb8f:	c3                   	ret
