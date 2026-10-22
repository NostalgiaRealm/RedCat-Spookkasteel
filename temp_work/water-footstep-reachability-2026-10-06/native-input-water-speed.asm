
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004da920 <.text+0xd9920>:
  4da920:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
  4da924:	83 ec 3c             	sub    esp,0x3c
  4da927:	8d 4c 24 0c          	lea    ecx,[esp+0xc]
  4da92b:	50                   	push   eax
  4da92c:	e8 ff 87 0d 00       	call   0x5b3130
  4da931:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  4da935:	8d 4c 24 00          	lea    ecx,[esp+0x0]
  4da939:	51                   	push   ecx
  4da93a:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4da93e:	e8 6d 8c 0d 00       	call   0x5b35b0
  4da943:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  4da947:	8b 4c 24 00          	mov    ecx,DWORD PTR [esp+0x0]
  4da94b:	8b d0                	mov    edx,eax
  4da94d:	89 0a                	mov    DWORD PTR [edx],ecx
  4da94f:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  4da953:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  4da956:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4da95a:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  4da95d:	83 c4 3c             	add    esp,0x3c
  4da960:	c2 0c 00             	ret    0xc
  4da963:	90                   	nop
  4da964:	90                   	nop
  4da965:	90                   	nop
  4da966:	90                   	nop
  4da967:	90                   	nop
  4da968:	90                   	nop
  4da969:	90                   	nop
  4da96a:	90                   	nop
  4da96b:	90                   	nop
  4da96c:	90                   	nop
  4da96d:	90                   	nop
  4da96e:	90                   	nop
  4da96f:	90                   	nop
  4da970:	6a ff                	push   0xffffffff
  4da972:	68 72 1f 63 00       	push   0x631f72
  4da977:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4da97d:	50                   	push   eax
  4da97e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4da985:	81 ec 40 01 00 00    	sub    esp,0x140
  4da98b:	53                   	push   ebx
  4da98c:	55                   	push   ebp
  4da98d:	8b e9                	mov    ebp,ecx
  4da98f:	33 db                	xor    ebx,ebx
  4da991:	56                   	push   esi
  4da992:	8b b4 24 5c 01 00 00 	mov    esi,DWORD PTR [esp+0x15c]
  4da999:	8b 85 18 02 00 00    	mov    eax,DWORD PTR [ebp+0x218]
  4da99f:	b2 01                	mov    dl,0x1
  4da9a1:	83 f8 ff             	cmp    eax,0xffffffff
  4da9a4:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4da9a8:	74 4d                	je     0x4da9f7
  4da9aa:	8b 8d 1c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x21c]
  4da9b0:	83 f9 ff             	cmp    ecx,0xffffffff
  4da9b3:	75 14                	jne    0x4da9c9
  4da9b5:	03 c6                	add    eax,esi
  4da9b7:	c7 85 20 02 00 00 00 	mov    DWORD PTR [ebp+0x220],0x3f800000
  4da9be:	00 80 3f 
  4da9c1:	89 85 1c 02 00 00    	mov    DWORD PTR [ebp+0x21c],eax
  4da9c7:	eb 2e                	jmp    0x4da9f7
  4da9c9:	3b f1                	cmp    esi,ecx
  4da9cb:	7e 0a                	jle    0x4da9d7
  4da9cd:	89 9d 20 02 00 00    	mov    DWORD PTR [ebp+0x220],ebx
  4da9d3:	32 d2                	xor    dl,dl
  4da9d5:	eb 20                	jmp    0x4da9f7
  4da9d7:	3b c3                	cmp    eax,ebx
  4da9d9:	7e 16                	jle    0x4da9f1
  4da9db:	2b ce                	sub    ecx,esi
  4da9dd:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  4da9e1:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  4da9e5:	da 74 24 28          	fidiv  DWORD PTR [esp+0x28]
  4da9e9:	d9 9d 20 02 00 00    	fstp   DWORD PTR [ebp+0x220]
  4da9ef:	eb 06                	jmp    0x4da9f7
  4da9f1:	89 9d 20 02 00 00    	mov    DWORD PTR [ebp+0x220],ebx
  4da9f7:	88 95 24 02 00 00    	mov    BYTE PTR [ebp+0x224],dl
  4da9fd:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4daa03:	3b c3                	cmp    eax,ebx
  4daa05:	0f 84 e6 0f 00 00    	je     0x4db9f1
  4daa0b:	8b 84 24 60 01 00 00 	mov    eax,DWORD PTR [esp+0x160]
  4daa12:	57                   	push   edi
  4daa13:	83 f8 ff             	cmp    eax,0xffffffff
  4daa16:	75 6b                	jne    0x4daa83
  4daa18:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4daa1c:	53                   	push   ebx
  4daa1d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4daa21:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4daa25:	e8 76 96 f2 ff       	call   0x4040a0
  4daa2a:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4daa2f:	83 c9 ff             	or     ecx,0xffffffff
  4daa32:	33 c0                	xor    eax,eax
  4daa34:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daa36:	f7 d1                	not    ecx
  4daa38:	49                   	dec    ecx
  4daa39:	51                   	push   ecx
  4daa3a:	68 70 3f 6b 00       	push   0x6b3f70
  4daa3f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4daa43:	e8 a8 96 f2 ff       	call   0x4040f0
  4daa48:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4daa4c:	89 9c 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],ebx
  4daa53:	51                   	push   ecx
  4daa54:	68 8a 00 00 00       	push   0x8a
  4daa59:	68 2c e2 68 00       	push   0x68e22c
  4daa5e:	68 14 e2 68 00       	push   0x68e214
  4daa63:	e8 88 5d 0c 00       	call   0x5a07f0
  4daa68:	ff d0                	call   eax
  4daa6a:	83 c4 10             	add    esp,0x10
  4daa6d:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4daa71:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xffffffff
  4daa78:	ff ff ff ff 
  4daa7c:	6a 01                	push   0x1
  4daa7e:	e8 1d 96 f2 ff       	call   0x4040a0
  4daa83:	db 84 24 64 01 00 00 	fild   DWORD PTR [esp+0x164]
  4daa8a:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4daa90:	d9 54 24 2c          	fst    DWORD PTR [esp+0x2c]
  4daa94:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4daa9a:	8b 11                	mov    edx,DWORD PTR [ecx]
  4daa9c:	d9 5c 24 30          	fstp   DWORD PTR [esp+0x30]
  4daaa0:	ff 52 04             	call   DWORD PTR [edx+0x4]
  4daaa3:	8b d8                	mov    ebx,eax
  4daaa5:	85 db                	test   ebx,ebx
  4daaa7:	0f 85 a2 00 00 00    	jne    0x4dab4f
  4daaad:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4daab1:	53                   	push   ebx
  4daab2:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4daab6:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4daaba:	e8 e1 95 f2 ff       	call   0x4040a0
  4daabf:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4daac4:	83 c9 ff             	or     ecx,0xffffffff
  4daac7:	33 c0                	xor    eax,eax
  4daac9:	6a 01                	push   0x1
  4daacb:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daacd:	f7 d1                	not    ecx
  4daacf:	49                   	dec    ecx
  4daad0:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  4daad4:	51                   	push   ecx
  4daad5:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4daad9:	e8 62 6e f2 ff       	call   0x401940
  4daade:	84 c0                	test   al,al
  4daae0:	74 2e                	je     0x4dab10
  4daae2:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  4daae6:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4daaea:	8b c8                	mov    ecx,eax
  4daaec:	be 70 3f 6b 00       	mov    esi,0x6b3f70
  4daaf1:	8b d1                	mov    edx,ecx
  4daaf3:	50                   	push   eax
  4daaf4:	c1 e9 02             	shr    ecx,0x2
  4daaf7:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4daaf9:	8b ca                	mov    ecx,edx
  4daafb:	83 e1 03             	and    ecx,0x3
  4daafe:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4dab00:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4dab04:	e8 87 96 f2 ff       	call   0x404190
  4dab09:	8b b4 24 60 01 00 00 	mov    esi,DWORD PTR [esp+0x160]
  4dab10:	8d 44 24 14          	lea    eax,[esp+0x14]
  4dab14:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x1
  4dab1b:	01 00 00 00 
  4dab1f:	50                   	push   eax
  4dab20:	68 20 06 00 00       	push   0x620
  4dab25:	68 28 97 69 00       	push   0x699728
  4dab2a:	68 80 9d 69 00       	push   0x699d80
  4dab2f:	e8                   	.byte 0xe8
