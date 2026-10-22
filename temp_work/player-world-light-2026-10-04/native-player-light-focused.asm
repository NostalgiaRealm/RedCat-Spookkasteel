  430f80:	8b 06                	mov    eax,DWORD PTR [esi]
  430f82:	3b c3                	cmp    eax,ebx
  430f84:	74 09                	je     0x430f8f
  430f86:	56                   	push   esi
  430f87:	50                   	push   eax
  430f88:	8b cd                	mov    ecx,ebp
  430f8a:	e8 01 8b 0d 00       	call   0x509a90
  430f8f:	8b 35 5c 91 6b 00    	mov    esi,DWORD PTR ds:0x6b915c
  430f95:	3b f3                	cmp    esi,ebx
  430f97:	75 07                	jne    0x430fa0
  430f99:	e8 e2 b4 08 00       	call   0x4bc480
  430f9e:	8b f0                	mov    esi,eax
  430fa0:	8b 86 e8 04 00 00    	mov    eax,DWORD PTR [esi+0x4e8]
  430fa6:	3d 00 00 00 80       	cmp    eax,0x80000000
  430fab:	75 1e                	jne    0x430fcb
  430fad:	8b 86 9c 04 00 00    	mov    eax,DWORD PTR [esi+0x49c]
  430fb3:	3b c3                	cmp    eax,ebx
  430fb5:	75 05                	jne    0x430fbc
  430fb7:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  430fbc:	50                   	push   eax
  430fbd:	e8 4e 9f 1d 00       	call   0x60af10
  430fc2:	83 c4 04             	add    esp,0x4
  430fc5:	89 86 e8 04 00 00    	mov    DWORD PTR [esi+0x4e8],eax
  430fcb:	3b c3                	cmp    eax,ebx
  430fcd:	75 07                	jne    0x430fd6
  430fcf:	8b cd                	mov    ecx,ebp
  430fd1:	e8 ea 0d 00 00       	call   0x431dc0
  430fd6:	8b 8c 24 d0 00 00 00 	mov    ecx,DWORD PTR [esp+0xd0]
  430fdd:	5f                   	pop    edi
  430fde:	8b c5                	mov    eax,ebp
  430fe0:	5e                   	pop    esi
  430fe1:	5d                   	pop    ebp
  430fe2:	5b                   	pop    ebx
  430fe3:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  430fea:	81 c4 cc 00 00 00    	add    esp,0xcc
  430ff0:	c3                   	ret
  430ff1:	90                   	nop
  430ff2:	90                   	nop
  430ff3:	90                   	nop
  430ff4:	90                   	nop
  430ff5:	90                   	nop
  430ff6:	90                   	nop
  430ff7:	90                   	nop
  430ff8:	90                   	nop
  430ff9:	90                   	nop
  430ffa:	90                   	nop
  430ffb:	90                   	nop
  430ffc:	90                   	nop
  430ffd:	90                   	nop
  430ffe:	90                   	nop
  430fff:	90                   	nop
  431dc0:	6a ff                	push   0xffffffff
  431dc2:	68 e9 39 62 00       	push   0x6239e9
  431dc7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  431dcd:	50                   	push   eax
  431dce:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  431dd5:	83 ec 30             	sub    esp,0x30
  431dd8:	53                   	push   ebx
  431dd9:	56                   	push   esi
  431dda:	57                   	push   edi
  431ddb:	33 db                	xor    ebx,ebx
  431ddd:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  431de1:	68 f4 01 00 00       	push   0x1f4
  431de6:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  431dea:	e8 c6 82 1d 00       	call   0x60a0b5
  431def:	8b f0                	mov    esi,eax
  431df1:	83 c4 04             	add    esp,0x4
  431df4:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  431df8:	3b f3                	cmp    esi,ebx
  431dfa:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
  431dfe:	0f 84 99 00 00 00    	je     0x431e9d
  431e04:	8a 44 24 0f          	mov    al,BYTE PTR [esp+0xf]
  431e08:	bf a8 03 69 00       	mov    edi,0x6903a8
  431e0d:	88 44 24 1c          	mov    BYTE PTR [esp+0x1c],al
  431e11:	83 c9 ff             	or     ecx,0xffffffff
  431e14:	33 c0                	xor    eax,eax
  431e16:	55                   	push   ebp
  431e17:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  431e19:	f7 d1                	not    ecx
  431e1b:	49                   	dec    ecx
  431e1c:	6a 01                	push   0x1
  431e1e:	8b e9                	mov    ebp,ecx
  431e20:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  431e24:	55                   	push   ebp
  431e25:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
  431e29:	89 5c 24 30          	mov    DWORD PTR [esp+0x30],ebx
  431e2d:	89 5c 24 34          	mov    DWORD PTR [esp+0x34],ebx
  431e31:	e8 0a fb fc ff       	call   0x401940
  431e36:	84 c0                	test   al,al
  431e38:	74 28                	je     0x431e62
  431e3a:	8b 7c 24 24          	mov    edi,DWORD PTR [esp+0x24]
  431e3e:	8b cd                	mov    ecx,ebp
  431e40:	8b d1                	mov    edx,ecx
  431e42:	be a8 03 69 00       	mov    esi,0x6903a8
  431e47:	c1 e9 02             	shr    ecx,0x2
  431e4a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  431e4c:	8b ca                	mov    ecx,edx
  431e4e:	83 e1 03             	and    ecx,0x3
  431e51:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  431e53:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  431e57:	8b 74 24 1c          	mov    esi,DWORD PTR [esp+0x1c]
  431e5b:	89 6c 24 28          	mov    DWORD PTR [esp+0x28],ebp
  431e5f:	88 1c 28             	mov    BYTE PTR [eax+ebp*1],bl
  431e62:	c7 44 24 14 01 00 00 	mov    DWORD PTR [esp+0x14],0x1
  431e69:	00 
  431e6a:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  431e6e:	8d 54 24 30          	lea    edx,[esp+0x30]
  431e72:	51                   	push   ecx
  431e73:	52                   	push   edx
  431e74:	c6 44 24 50 01       	mov    BYTE PTR [esp+0x50],0x1
  431e79:	e8 22 15 0d 00       	call   0x5033a0
  431e7e:	bb 03 00 00 00       	mov    ebx,0x3
  431e83:	83 c4 08             	add    esp,0x8
  431e86:	89 5c 24 14          	mov    DWORD PTR [esp+0x14],ebx
  431e8a:	50                   	push   eax
  431e8b:	8b ce                	mov    ecx,esi
  431e8d:	c7 44 24 4c 02 00 00 	mov    DWORD PTR [esp+0x4c],0x2
  431e94:	00 
  431e95:	e8 06 04 0b 00       	call   0x4e22a0
  431e9a:	5d                   	pop    ebp
  431e9b:	eb 02                	jmp    0x431e9f
  431e9d:	33 c0                	xor    eax,eax
  431e9f:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  431ea3:	f6 c3 02             	test   bl,0x2
  431ea6:	8d b1 98 03 00 00    	lea    esi,[ecx+0x398]
  431eac:	89 06                	mov    DWORD PTR [esi],eax
  431eae:	74 44                	je     0x431ef4
  431eb0:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  431eb4:	33 ff                	xor    edi,edi
  431eb6:	83 e3 fd             	and    ebx,0xfffffffd
  431eb9:	3b c7                	cmp    eax,edi
  431ebb:	74 29                	je     0x431ee6
  431ebd:	8d 48 ff             	lea    ecx,[eax-0x1]
  431ec0:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  431ec3:	84 c0                	test   al,al
  431ec5:	74 16                	je     0x431edd
  431ec7:	3c ff                	cmp    al,0xff
  431ec9:	74 12                	je     0x431edd
  431ecb:	fe c8                	dec    al
  431ecd:	88 01                	mov    BYTE PTR [ecx],al
  431ecf:	89 7c 24 30          	mov    DWORD PTR [esp+0x30],edi
  431ed3:	89 7c 24 34          	mov    DWORD PTR [esp+0x34],edi
  431ed7:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
  431edb:	eb 19                	jmp    0x431ef6
  431edd:	51                   	push   ecx
  431ede:	e8 0d c7 1c 00       	call   0x5fe5f0
  431ee3:	83 c4 04             	add    esp,0x4
  431ee6:	89 7c 24 30          	mov    DWORD PTR [esp+0x30],edi
  431eea:	89 7c 24 34          	mov    DWORD PTR [esp+0x34],edi
  431eee:	89 7c 24 38          	mov    DWORD PTR [esp+0x38],edi
  431ef2:	eb 02                	jmp    0x431ef6
  431ef4:	33 ff                	xor    edi,edi
  431ef6:	f6 c3 01             	test   bl,0x1
  431ef9:	c7 44 24 44 ff ff ff 	mov    DWORD PTR [esp+0x44],0xffffffff
  431f00:	ff 
  431f01:	74 31                	je     0x431f34
  431f03:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  431f07:	3b c7                	cmp    eax,edi
  431f09:	74 1d                	je     0x431f28
  431f0b:	8d 48 ff             	lea    ecx,[eax-0x1]
  431f0e:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  431f11:	84 c0                	test   al,al
  431f13:	74 0a                	je     0x431f1f
  431f15:	3c ff                	cmp    al,0xff
  431f17:	74 06                	je     0x431f1f
  431f19:	fe c8                	dec    al
  431f1b:	88 01                	mov    BYTE PTR [ecx],al
  431f1d:	eb 09                	jmp    0x431f28
  431f1f:	51                   	push   ecx
  431f20:	e8 cb c6 1c 00       	call   0x5fe5f0
  431f25:	83 c4 04             	add    esp,0x4
  431f28:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
  431f2c:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
  431f30:	89 7c 24 28          	mov    DWORD PTR [esp+0x28],edi
  431f34:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f36:	3b cf                	cmp    ecx,edi
  431f38:	74 56                	je     0x431f90
  431f3a:	6a ff                	push   0xffffffff
  431f3c:	e8 ff 11 0b 00       	call   0x4e3140
  431f41:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f43:	6a ff                	push   0xffffffff
  431f45:	e8 16 12 0b 00       	call   0x4e3160
  431f4a:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f4c:	68 00 00 f0 42       	push   0x42f00000
  431f51:	e8 0a 0e 0b 00       	call   0x4e2d60
  431f56:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f58:	68 e8 c3 64 00       	push   0x64c3e8
  431f5d:	e8 2e 11 0b 00       	call   0x4e3090
  431f62:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f64:	57                   	push   edi
  431f65:	e8 66 11 0b 00       	call   0x4e30d0
  431f6a:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f6c:	57                   	push   edi
  431f6d:	e8 ae 11 0b 00       	call   0x4e3120
  431f72:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f74:	57                   	push   edi
  431f75:	e8 86 11 0b 00       	call   0x4e3100
  431f7a:	8b 0e                	mov    ecx,DWORD PTR [esi]
  431f7c:	6a 01                	push   0x1
  431f7e:	e8 cd 03 0d 00       	call   0x502350
  431f83:	8b 16                	mov    edx,DWORD PTR [esi]
  431f85:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  431f89:	56                   	push   esi
  431f8a:	52                   	push   edx
  431f8b:	e8 00 7b 0d 00       	call   0x509a90
  431f90:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  431f94:	5f                   	pop    edi
  431f95:	5e                   	pop    esi
  431f96:	b0 01                	mov    al,0x1
  431f98:	5b                   	pop    ebx
  431f99:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  431fa0:	83 c4 3c             	add    esp,0x3c
  431fa3:	c3                   	ret
  4336bb:	8b 85 98 03 00 00    	mov    eax,DWORD PTR [ebp+0x398]
  4336c1:	85 c0                	test   eax,eax
  4336c3:	74 42                	je     0x433707
  4336c5:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  4336c9:	51                   	push   ecx
  4336ca:	8b 8d 54 02 00 00    	mov    ecx,DWORD PTR [ebp+0x254]
  4336d0:	e8 ab 85 06 00       	call   0x49bc80
  4336d5:	8b 10                	mov    edx,DWORD PTR [eax]
  4336d7:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  4336db:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  4336de:	89 4c 24 30          	mov    DWORD PTR [esp+0x30],ecx
  4336e2:	8b 8d 98 03 00 00    	mov    ecx,DWORD PTR [ebp+0x398]
  4336e8:	d9 44 24 30          	fld    DWORD PTR [esp+0x30]
  4336ec:	d8 05 64 c5 64 00    	fadd   DWORD PTR ds:0x64c564
  4336f2:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  4336f5:	89 54 24 34          	mov    DWORD PTR [esp+0x34],edx
  4336f9:	8d 54 24 2c          	lea    edx,[esp+0x2c]
  4336fd:	52                   	push   edx
  4336fe:	d9 5c 24 34          	fstp   DWORD PTR [esp+0x34]
  433702:	8b 01                	mov    eax,DWORD PTR [ecx]
  433704:	ff 50 4c             	call   DWORD PTR [eax+0x4c]
  49bc80:	83 ec 18             	sub    esp,0x18
  49bc83:	8d 44 24 00          	lea    eax,[esp+0x0]
  49bc87:	56                   	push   esi
  49bc88:	8b f1                	mov    esi,ecx
  49bc8a:	57                   	push   edi
  49bc8b:	50                   	push   eax
  49bc8c:	8d 96 28 01 00 00    	lea    edx,[esi+0x128]
  49bc92:	8d 8e 1c 01 00 00    	lea    ecx,[esi+0x11c]
  49bc98:	e8 63 73 11 00       	call   0x5b3000
  49bc9d:	8b 16                	mov    edx,DWORD PTR [esi]
  49bc9f:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  49bca3:	51                   	push   ecx
  49bca4:	8d 44 24 18          	lea    eax,[esp+0x18]
  49bca8:	68 00 00 00 3f       	push   0x3f000000
  49bcad:	50                   	push   eax
  49bcae:	8b ce                	mov    ecx,esi
  49bcb0:	8d 7c 24 14          	lea    edi,[esp+0x14]
  49bcb4:	ff 52 48             	call   DWORD PTR [edx+0x48]
  49bcb7:	8b c8                	mov    ecx,eax
  49bcb9:	8b d7                	mov    edx,edi
  49bcbb:	e8 60 73 11 00       	call   0x5b3020
  49bcc0:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  49bcc4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  49bcc8:	8b c8                	mov    ecx,eax
  49bcca:	5f                   	pop    edi
  49bccb:	5e                   	pop    esi
  49bccc:	89 11                	mov    DWORD PTR [ecx],edx
  49bcce:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  49bcd2:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  49bcd5:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  49bcd9:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  49bcdc:	83 c4 18             	add    esp,0x18
  49bcdf:	c2 04 00             	ret    0x4
  49c540:	83 ec 18             	sub    esp,0x18
  49c543:	8d 44 24 00          	lea    eax,[esp+0x0]
  49c547:	56                   	push   esi
  49c548:	57                   	push   edi
  49c549:	8b f9                	mov    edi,ecx
  49c54b:	50                   	push   eax
  49c54c:	e8 af f6 ff ff       	call   0x49bc00
  49c551:	81 c7 34 01 00 00    	add    edi,0x134
  49c557:	b9 06 00 00 00       	mov    ecx,0x6
  49c55c:	8b f0                	mov    esi,eax
  49c55e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49c560:	5f                   	pop    edi
  49c561:	5e                   	pop    esi
  49c562:	83 c4 18             	add    esp,0x18
  49c565:	c3                   	ret
  49c566:	90                   	nop
  49c567:	90                   	nop
  49c568:	90                   	nop
  49c569:	90                   	nop
  49c56a:	90                   	nop
  49c56b:	90                   	nop
  49c56c:	90                   	nop
  49c56d:	90                   	nop
  49c56e:	90                   	nop
  49c56f:	90                   	nop
  49c570:	83 ec 18             	sub    esp,0x18
  49c573:	8d 44 24 00          	lea    eax,[esp+0x0]
  49c577:	56                   	push   esi
  49c578:	57                   	push   edi
  49c579:	8b f9                	mov    edi,ecx
  49c57b:	50                   	push   eax
  49c57c:	e8 7f f6 ff ff       	call   0x49bc00
  49c581:	81 c7 1c 01 00 00    	add    edi,0x11c
  49c587:	b9 06 00 00 00       	mov    ecx,0x6
  49c58c:	8b f0                	mov    esi,eax
  49c58e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  49c590:	5f                   	pop    edi
  49c591:	5e                   	pop    esi
  49c592:	83 c4 18             	add    esp,0x18
  49c595:	c3                   	ret
  49c596:	90                   	nop
  49c597:	90                   	nop
  49c598:	90                   	nop
  49c599:	90                   	nop
  49c59a:	90                   	nop
  49c59b:	90                   	nop
  49c59c:	90                   	nop
  49c59d:	90                   	nop
  49c59e:	90                   	nop
  49c59f:	90                   	nop
  49c5a0:	56                   	push   esi
  49c5a1:	8b f1                	mov    esi,ecx
  49c5a3:	57                   	push   edi
  49c5a4:	8b 06                	mov    eax,DWORD PTR [esi]
  49c5a6:	ff 50 64             	call   DWORD PTR [eax+0x64]
  49c5a9:	8b 16                	mov    edx,DWORD PTR [esi]
  49c5ab:	8b ce                	mov    ecx,esi
  49c5ad:	ff 52 68             	call   DWORD PTR [edx+0x68]
  49c5b0:	6a 00                	push   0x0
  49c5b2:	8b ce                	mov    ecx,esi
  49c5b4:	8d be 34 01 00 00    	lea    edi,[esi+0x134]
  49c5ba:	e8 21 82 f8 ff       	call   0x4247e0
  49c5bf:	8b c8                	mov    ecx,eax
  49c5c1:	8b d7                	mov    edx,edi
  49c5c3:	e8 c8 83 11 00       	call   0x5b4990
  49c5c8:	6a 00                	push   0x0
  49c5ca:	8b ce                	mov    ecx,esi
  49c5cc:	8d be 1c 01 00 00    	lea    edi,[esi+0x11c]
  49c5d2:	e8 09 82 f8 ff       	call   0x4247e0
  49c5d7:	8b c8                	mov    ecx,eax
  49c5d9:	8b d7                	mov    edx,edi
  49c5db:	e8 d0 82 11 00       	call   0x5b48b0
  49c5e0:	5f                   	pop    edi
  49c5e1:	5e                   	pop    esi
  49c5e2:	c3                   	ret
  4e2a30:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4e2a36:	6a ff                	push   0xffffffff
  4e2a38:	68 f0 28 63 00       	push   0x6328f0
  4e2a3d:	50                   	push   eax
  4e2a3e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4e2a45:	83 ec 28             	sub    esp,0x28
  4e2a48:	b0 01                	mov    al,0x1
  4e2a4a:	53                   	push   ebx
  4e2a4b:	56                   	push   esi
  4e2a4c:	8b f1                	mov    esi,ecx
  4e2a4e:	33 db                	xor    ebx,ebx
  4e2a50:	57                   	push   edi
  4e2a51:	39 9e 40 01 00 00    	cmp    DWORD PTR [esi+0x140],ebx
  4e2a57:	0f 84 d1 01 00 00    	je     0x4e2c2e
  4e2a5d:	39 5e 18             	cmp    DWORD PTR [esi+0x18],ebx
  4e2a60:	0f 84 c8 01 00 00    	je     0x4e2c2e
  4e2a66:	8d 44 24 10          	lea    eax,[esp+0x10]
  4e2a6a:	55                   	push   ebp
  4e2a6b:	50                   	push   eax
  4e2a6c:	8b ce                	mov    ecx,esi
  4e2a6e:	e8 6d 18 f2 ff       	call   0x4042e0
  4e2a73:	8b e8                	mov    ebp,eax
  4e2a75:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4e2a78:	89 5c 24 40          	mov    DWORD PTR [esp+0x40],ebx
  4e2a7c:	3b c3                	cmp    eax,ebx
  4e2a7e:	75 62                	jne    0x4e2ae2
  4e2a80:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4e2a84:	53                   	push   ebx
  4e2a85:	88 4c 24 1c          	mov    BYTE PTR [esp+0x1c],cl
  4e2a89:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4e2a8d:	e8 0e 16 f2 ff       	call   0x4040a0
  4e2a92:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4e2a97:	83 c9 ff             	or     ecx,0xffffffff
  4e2a9a:	33 c0                	xor    eax,eax
  4e2a9c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4e2a9e:	f7 d1                	not    ecx
  4e2aa0:	49                   	dec    ecx
  4e2aa1:	51                   	push   ecx
  4e2aa2:	68 70 3f 6b 00       	push   0x6b3f70
  4e2aa7:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4e2aab:	e8 40 16 f2 ff       	call   0x4040f0
  4e2ab0:	8d 54 24 18          	lea    edx,[esp+0x18]
  4e2ab4:	c6 44 24 40 01       	mov    BYTE PTR [esp+0x40],0x1
  4e2ab9:	52                   	push   edx
  4e2aba:	68 b6 00 00 00       	push   0xb6
  4e2abf:	68 38 d6 68 00       	push   0x68d638
  4e2ac4:	68 2c d6 68 00       	push   0x68d62c
  4e2ac9:	e8 22 dd 0b 00       	call   0x5a07f0
  4e2ace:	ff d0                	call   eax
  4e2ad0:	83 c4 10             	add    esp,0x10
  4e2ad3:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4e2ad7:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
  4e2adb:	6a 01                	push   0x1
  4e2add:	e8 be 15 f2 ff       	call   0x4040a0
  4e2ae2:	8b 6d 00             	mov    ebp,DWORD PTR [ebp+0x0]
  4e2ae5:	39 5d 5c             	cmp    DWORD PTR [ebp+0x5c],ebx
  4e2ae8:	75 62                	jne    0x4e2b4c
  4e2aea:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4e2aee:	53                   	push   ebx
  4e2aef:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4e2af3:	88 44 24 2c          	mov    BYTE PTR [esp+0x2c],al
  4e2af7:	e8 a4 15 f2 ff       	call   0x4040a0
  4e2afc:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4e2b01:	83 c9 ff             	or     ecx,0xffffffff
  4e2b04:	33 c0                	xor    eax,eax
  4e2b06:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4e2b08:	f7 d1                	not    ecx
  4e2b0a:	49                   	dec    ecx
  4e2b0b:	51                   	push   ecx
  4e2b0c:	68 70 3f 6b 00       	push   0x6b3f70
  4e2b11:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  4e2b15:	e8 d6 15 f2 ff       	call   0x4040f0
  4e2b1a:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4e2b1e:	c6 44 24 40 02       	mov    BYTE PTR [esp+0x40],0x2
  4e2b23:	51                   	push   ecx
  4e2b24:	68 44 01 00 00       	push   0x144
  4e2b29:	68 b8 e1 68 00       	push   0x68e1b8
  4e2b2e:	68 a8 e1 68 00       	push   0x68e1a8
  4e2b33:	e8 b8 dc 0b 00       	call   0x5a07f0
  4e2b38:	ff d0                	call   eax
  4e2b3a:	83 c4 10             	add    esp,0x10
  4e2b3d:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4e2b41:	88 5c 24 40          	mov    BYTE PTR [esp+0x40],bl
  4e2b45:	6a 01                	push   0x1
  4e2b47:	e8 54 15 f2 ff       	call   0x4040a0
  4e2b4c:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
  4e2b52:	33 d2                	xor    edx,edx
  4e2b54:	8a 96 2d 01 00 00    	mov    dl,BYTE PTR [esi+0x12d]
  4e2b5a:	8b 45 5c             	mov    eax,DWORD PTR [ebp+0x5c]
  4e2b5d:	52                   	push   edx
  4e2b5e:	8d 96 30 01 00 00    	lea    edx,[esi+0x130]
  4e2b64:	51                   	push   ecx
  4e2b65:	52                   	push   edx
  4e2b66:	8b 96 40 01 00 00    	mov    edx,DWORD PTR [esi+0x140]
  4e2b6c:	8d 8e 54 01 00 00    	lea    ecx,[esi+0x154]
  4e2b72:	51                   	push   ecx
  4e2b73:	52                   	push   edx
  4e2b74:	50                   	push   eax
  4e2b75:	e8 a6 51 0d 00       	call   0x5b7d20
  4e2b7a:	83 c4 18             	add    esp,0x18
  4e2b7d:	c7 44 24 40 ff ff ff 	mov    DWORD PTR [esp+0x40],0xffffffff
  4e2b84:	ff 
  4e2b85:	85 c0                	test   eax,eax
  4e2b87:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  4e2b8b:	5d                   	pop    ebp
  4e2b8c:	0f 94 44 24 0f       	sete   BYTE PTR [esp+0xf]
  4e2b91:	3b c3                	cmp    eax,ebx
  4e2b93:	74 17                	je     0x4e2bac
  4e2b95:	8b 78 14             	mov    edi,DWORD PTR [eax+0x14]
  4e2b98:	8b c8                	mov    ecx,eax
  4e2b9a:	83 c0 14             	add    eax,0x14
  4e2b9d:	4f                   	dec    edi
  4e2b9e:	8b d7                	mov    edx,edi
  4e2ba0:	3b d3                	cmp    edx,ebx
  4e2ba2:	89 38                	mov    DWORD PTR [eax],edi
  4e2ba4:	75 06                	jne    0x4e2bac
  4e2ba6:	53                   	push   ebx
  4e2ba7:	e8 14 94 0c 00       	call   0x5abfc0
  4e2bac:	38 5c 24 0f          	cmp    BYTE PTR [esp+0xf],bl
  4e2bb0:	0f 84 91 00 00 00    	je     0x4e2c47
  4e2bb6:	8a 44 24 0f          	mov    al,BYTE PTR [esp+0xf]
  4e2bba:	bf a0 a2 69 00       	mov    edi,0x69a2a0
  4e2bbf:	88 44 24 14          	mov    BYTE PTR [esp+0x14],al
  4e2bc3:	83 c9 ff             	or     ecx,0xffffffff
  4e2bc6:	33 c0                	xor    eax,eax
  4e2bc8:	89 5c 24 18          	mov    DWORD PTR [esp+0x18],ebx
  4e2bcc:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4e2bce:	f7 d1                	not    ecx
  4e2bd0:	49                   	dec    ecx
  4e2bd1:	89 5c 24 1c          	mov    DWORD PTR [esp+0x1c],ebx
  4e2bd5:	51                   	push   ecx
  4e2bd6:	68 a0 a2 69 00       	push   0x69a2a0
  4e2bdb:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4e2bdf:	89 5c 24 28          	mov    DWORD PTR [esp+0x28],ebx
  4e2be3:	e8 08 15 f2 ff       	call   0x4040f0
  4e2be8:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4e2bec:	c7 44 24 3c 03 00 00 	mov    DWORD PTR [esp+0x3c],0x3
  4e2bf3:	00 
  4e2bf4:	51                   	push   ecx
  4e2bf5:	68 eb 00 00 00       	push   0xeb
  4e2bfa:	68 74 a2 69 00       	push   0x69a274
  4e2bff:	e8 1c d3 0c 00       	call   0x5aff20
  4e2c04:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  4e2c08:	83 c4 0c             	add    esp,0xc
  4e2c0b:	3b c3                	cmp    eax,ebx
  4e2c0d:	74 1d                	je     0x4e2c2c
  4e2c0f:	8d 48 ff             	lea    ecx,[eax-0x1]
  4e2c12:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  4e2c15:	3a c3                	cmp    al,bl
  4e2c17:	74 0a                	je     0x4e2c23
  4e2c19:	3c ff                	cmp    al,0xff
  4e2c1b:	74 06                	je     0x4e2c23
  4e2c1d:	fe c8                	dec    al
  4e2c1f:	88 01                	mov    BYTE PTR [ecx],al
  4e2c21:	eb 09                	jmp    0x4e2c2c
  4e2c23:	51                   	push   ecx
  4e2c24:	e8 c7 b9 11 00       	call   0x5fe5f0
  4e2c29:	83 c4 04             	add    esp,0x4
  4e2c2c:	32 c0                	xor    al,al
  4e2c2e:	c6 86 f0 01 00 00 01 	mov    BYTE PTR [esi+0x1f0],0x1
  4e2c35:	5f                   	pop    edi
  4e2c36:	5e                   	pop    esi
  4e2c37:	5b                   	pop    ebx
  4e2c38:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  4e2c3c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4e2c43:	83 c4 34             	add    esp,0x34
  4e2c46:	c3                   	ret
  4e2c47:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  4e2c4b:	c6 86 f0 01 00 00 01 	mov    BYTE PTR [esi+0x1f0],0x1
  4e2c52:	5f                   	pop    edi
  4e2c53:	5e                   	pop    esi
  4e2c54:	b0 01                	mov    al,0x1
  4e2c56:	5b                   	pop    ebx
  4e2c57:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4e2c5e:	83 c4 34             	add    esp,0x34
  4e2c61:	c3                   	ret
  4e2c62:	90                   	nop
  4e2c63:	90                   	nop
  4e2c64:	90                   	nop
  4e2c65:	90                   	nop
  4e2c66:	90                   	nop
  4e2c67:	90                   	nop
  4e2c68:	90                   	nop
  4e2c69:	90                   	nop
  4e2c6a:	90                   	nop
  4e2c6b:	90                   	nop
  4e2c6c:	90                   	nop
  4e2c6d:	90                   	nop
  4e2c6e:	90                   	nop
  4e2c6f:	90                   	nop
  4e3090:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  4e3094:	56                   	push   esi
  4e3095:	8d 81 30 01 00 00    	lea    eax,[ecx+0x130]
  4e309b:	8b 32                	mov    esi,DWORD PTR [edx]
  4e309d:	89 30                	mov    DWORD PTR [eax],esi
  4e309f:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  4e30a2:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
  4e30a5:	8b 72 08             	mov    esi,DWORD PTR [edx+0x8]
  4e30a8:	89 70 08             	mov    DWORD PTR [eax+0x8],esi
  4e30ab:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
  4e30ae:	89 50 0c             	mov    DWORD PTR [eax+0xc],edx
  4e30b1:	c7 81 3c 01 00 00 00 	mov    DWORD PTR [ecx+0x13c],0x437f0000
  4e30b8:	00 7f 43 
  4e30bb:	e8 70 f9 ff ff       	call   0x4e2a30
  4e30c0:	5e                   	pop    esi
  4e30c1:	c2 04 00             	ret    0x4
  4e30c4:	90                   	nop
  4e30c5:	90                   	nop
  4e30c6:	90                   	nop
  4e30c7:	90                   	nop
  4e30c8:	90                   	nop
  4e30c9:	90                   	nop
  4e30ca:	90                   	nop
  4e30cb:	90                   	nop
  4e30cc:	90                   	nop
  4e30cd:	90                   	nop
  4e30ce:	90                   	nop
  4e30cf:	90                   	nop
  4e30d0:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
  4e30d4:	88 81 2c 01 00 00    	mov    BYTE PTR [ecx+0x12c],al
  4e30da:	e8 51 f9 ff ff       	call   0x4e2a30
  4e30df:	c2 04 00             	ret    0x4
  4e30e2:	90                   	nop
  4e30e3:	90                   	nop
  4e30e4:	90                   	nop
  4e30e5:	90                   	nop
  4e30e6:	90                   	nop
  4e30e7:	90                   	nop
  4e30e8:	90                   	nop
  4e30e9:	90                   	nop
  4e30ea:	90                   	nop
  4e30eb:	90                   	nop
  4e30ec:	90                   	nop
  4e30ed:	90                   	nop
  4e30ee:	90                   	nop
  4e30ef:	90                   	nop
  4e30f0:	8a 81 2c 01 00 00    	mov    al,BYTE PTR [ecx+0x12c]
  4e30f6:	c3                   	ret
  4e30f7:	90                   	nop
  4e30f8:	90                   	nop
  4e30f9:	90                   	nop
  4e30fa:	90                   	nop
  4e30fb:	90                   	nop
  4e30fc:	90                   	nop
  4e30fd:	90                   	nop
  4e30fe:	90                   	nop
  4e30ff:	90                   	nop
  4e3100:	8a 44 24 04          	mov    al,BYTE PTR [esp+0x4]
  4e3104:	88 81 2d 01 00 00    	mov    BYTE PTR [ecx+0x12d],al
  4e310a:	e8 21 f9 ff ff       	call   0x4e2a30
  4e310f:	c2 04 00             	ret    0x4
  4e3112:	90                   	nop
  4e3113:	90                   	nop
  4e3114:	90                   	nop
  4e3115:	90                   	nop
  4e3116:	90                   	nop
  4e3117:	90                   	nop
  4e3118:	90                   	nop
  4e3119:	90                   	nop
  4e311a:	90                   	nop
  4e311b:	90                   	nop
  4e311c:	90                   	nop
  4e311d:	90                   	nop
  4e311e:	90                   	nop
  4e311f:	90                   	nop
  4e3120:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  4e3124:	89 81 44 01 00 00    	mov    DWORD PTR [ecx+0x144],eax
  4e312a:	e8 01 f9 ff ff       	call   0x4e2a30
  4e312f:	c2 04 00             	ret    0x4
  4e3132:	90                   	nop
  4e3133:	90                   	nop
  4e3134:	90                   	nop
  4e3135:	90                   	nop
  4e3136:	90                   	nop
  4e3137:	90                   	nop
  4e3138:	90                   	nop
  4e3139:	90                   	nop
  4e313a:	90                   	nop
  4e313b:	90                   	nop
  4e313c:	90                   	nop
  4e313d:	90                   	nop
  4e313e:	90                   	nop
  4e313f:	90                   	nop
  4e3140:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  4e3144:	81 c1 64 01 00 00    	add    ecx,0x164
  4e314a:	50                   	push   eax
  4e314b:	e8 60 10 f2 ff       	call   0x4041b0
  4e3150:	c2 04 00             	ret    0x4
  4e3153:	90                   	nop
  4e3154:	90                   	nop
  4e3155:	90                   	nop
  4e3156:	90                   	nop
  4e3157:	90                   	nop
  4e3158:	90                   	nop
  4e3159:	90                   	nop
  4e315a:	90                   	nop
  4e315b:	90                   	nop
  4e315c:	90                   	nop
  4e315d:	90                   	nop
  4e315e:	90                   	nop
  4e315f:	90                   	nop
  4e3160:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  4e3164:	81 c1 74 01 00 00    	add    ecx,0x174
  4e316a:	50                   	push   eax
  4e316b:	e8 40 10 f2 ff       	call   0x4041b0
