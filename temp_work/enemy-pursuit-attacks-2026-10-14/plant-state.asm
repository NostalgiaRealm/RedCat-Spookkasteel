
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00406960 <.text+0x5960>:
  406960:	56                   	push   esi
  406961:	57                   	push   edi
  406962:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  406966:	8b f1                	mov    esi,ecx
  406968:	57                   	push   edi
  406969:	e8 d2 35 00 00       	call   0x409f40
  40696e:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
  406971:	c7 06 04 a7 64 00    	mov    DWORD PTR [esi],0x64a704
  406977:	8b c6                	mov    eax,esi
  406979:	5f                   	pop    edi
  40697a:	5e                   	pop    esi
  40697b:	c2 04 00             	ret    0x4
  40697e:	90                   	nop
  40697f:	90                   	nop
  406980:	6a ff                	push   0xffffffff
  406982:	68 fb 00 62 00       	push   0x6200fb
  406987:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  40698d:	50                   	push   eax
  40698e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  406995:	51                   	push   ecx
  406996:	56                   	push   esi
  406997:	8b f1                	mov    esi,ecx
  406999:	6a 2c                	push   0x2c
  40699b:	e8 15 37 20 00       	call   0x60a0b5
  4069a0:	83 c4 04             	add    esp,0x4
  4069a3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  4069a7:	85 c0                	test   eax,eax
  4069a9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  4069b0:	00 
  4069b1:	74 0d                	je     0x4069c0
  4069b3:	8b 4e 30             	mov    ecx,DWORD PTR [esi+0x30]
  4069b6:	51                   	push   ecx
  4069b7:	8b c8                	mov    ecx,eax
  4069b9:	e8 a2 00 00 00       	call   0x406a60
  4069be:	eb 02                	jmp    0x4069c2
  4069c0:	33 c0                	xor    eax,eax
  4069c2:	50                   	push   eax
  4069c3:	6a 01                	push   0x1
  4069c5:	8b ce                	mov    ecx,esi
  4069c7:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  4069ce:	ff 
  4069cf:	e8 3c c0 ff ff       	call   0x402a10
  4069d4:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  4069d8:	5e                   	pop    esi
  4069d9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  4069e0:	83 c4 10             	add    esp,0x10
  4069e3:	c3                   	ret
  4069e4:	90                   	nop
  4069e5:	90                   	nop
  4069e6:	90                   	nop
  4069e7:	90                   	nop
  4069e8:	90                   	nop
  4069e9:	90                   	nop
  4069ea:	90                   	nop
  4069eb:	90                   	nop
  4069ec:	90                   	nop
  4069ed:	90                   	nop
  4069ee:	90                   	nop
  4069ef:	90                   	nop
  4069f0:	6a ff                	push   0xffffffff
  4069f2:	68 1b 01 62 00       	push   0x62011b
  4069f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4069fd:	50                   	push   eax
  4069fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  406a05:	51                   	push   ecx
  406a06:	56                   	push   esi
  406a07:	8b f1                	mov    esi,ecx
  406a09:	6a 2c                	push   0x2c
  406a0b:	e8 a5 36 20 00       	call   0x60a0b5
  406a10:	83 c4 04             	add    esp,0x4
  406a13:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  406a17:	85 c0                	test   eax,eax
  406a19:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  406a20:	00 
  406a21:	74 0d                	je     0x406a30
  406a23:	8b 4e 34             	mov    ecx,DWORD PTR [esi+0x34]
  406a26:	51                   	push   ecx
  406a27:	8b c8                	mov    ecx,eax
  406a29:	e8 02 01 00 00       	call   0x406b30
  406a2e:	eb 02                	jmp    0x406a32
  406a30:	33 c0                	xor    eax,eax
  406a32:	50                   	push   eax
  406a33:	6a 02                	push   0x2
  406a35:	8b ce                	mov    ecx,esi
  406a37:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  406a3e:	ff 
  406a3f:	e8 cc bf ff ff       	call   0x402a10
  406a44:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  406a48:	5e                   	pop    esi
  406a49:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  406a50:	83 c4 10             	add    esp,0x10
  406a53:	c3                   	ret
  406a54:	90                   	nop
  406a55:	90                   	nop
  406a56:	90                   	nop
  406a57:	90                   	nop
  406a58:	90                   	nop
  406a59:	90                   	nop
  406a5a:	90                   	nop
  406a5b:	90                   	nop
  406a5c:	90                   	nop
  406a5d:	90                   	nop
  406a5e:	90                   	nop
  406a5f:	90                   	nop
  406a60:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  406a64:	56                   	push   esi
  406a65:	8b f1                	mov    esi,ecx
  406a67:	50                   	push   eax
  406a68:	e8 b3 3c 00 00       	call   0x40a720
  406a6d:	c7 06 38 a7 64 00    	mov    DWORD PTR [esi],0x64a738
  406a73:	8b c6                	mov    eax,esi
  406a75:	5e                   	pop    esi
  406a76:	c2 04 00             	ret    0x4
  406a79:	90                   	nop
  406a7a:	90                   	nop
  406a7b:	90                   	nop
  406a7c:	90                   	nop
  406a7d:	90                   	nop
  406a7e:	90                   	nop
  406a7f:	90                   	nop
  406a80:	51                   	push   ecx
  406a81:	56                   	push   esi
  406a82:	8b f1                	mov    esi,ecx
  406a84:	57                   	push   edi
  406a85:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
  406a88:	8b 38                	mov    edi,DWORD PTR [eax]
  406a8a:	e8 11 3a 20 00       	call   0x60a4a0
  406a8f:	99                   	cdq
  406a90:	b9 10 27 00 00       	mov    ecx,0x2710
  406a95:	f7 f9                	idiv   ecx
  406a97:	51                   	push   ecx
  406a98:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406a9b:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  406a9f:	db 44 24 0c          	fild   DWORD PTR [esp+0xc]
  406aa3:	d8 0d 44 a7 64 00    	fmul   DWORD PTR ds:0x64a744
  406aa9:	d8 05 c8 a2 64 00    	fadd   DWORD PTR ds:0x64a2c8
  406aaf:	d9 1c 24             	fstp   DWORD PTR [esp]
  406ab2:	6a 00                	push   0x0
  406ab4:	6a 01                	push   0x1
  406ab6:	ff 97 8c 00 00 00    	call   DWORD PTR [edi+0x8c]
  406abc:	5f                   	pop    edi
  406abd:	5e                   	pop    esi
  406abe:	59                   	pop    ecx
  406abf:	c2 04 00             	ret    0x4
  406ac2:	90                   	nop
  406ac3:	90                   	nop
  406ac4:	90                   	nop
  406ac5:	90                   	nop
  406ac6:	90                   	nop
  406ac7:	90                   	nop
  406ac8:	90                   	nop
  406ac9:	90                   	nop
  406aca:	90                   	nop
  406acb:	90                   	nop
  406acc:	90                   	nop
  406acd:	90                   	nop
  406ace:	90                   	nop
  406acf:	90                   	nop
  406ad0:	51                   	push   ecx
  406ad1:	56                   	push   esi
  406ad2:	8b f1                	mov    esi,ecx
  406ad4:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406ad7:	e8 24 cc 01 00       	call   0x423700
  406adc:	8b c8                	mov    ecx,eax
  406ade:	e8 1d a2 09 00       	call   0x4a0d00
  406ae3:	84 c0                	test   al,al
  406ae5:	74 39                	je     0x406b20
  406ae7:	8b 46 28             	mov    eax,DWORD PTR [esi+0x28]
  406aea:	57                   	push   edi
  406aeb:	8b 38                	mov    edi,DWORD PTR [eax]
  406aed:	e8 ae 39 20 00       	call   0x60a4a0
  406af2:	99                   	cdq
  406af3:	b9 10 27 00 00       	mov    ecx,0x2710
  406af8:	f7 f9                	idiv   ecx
  406afa:	51                   	push   ecx
  406afb:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406afe:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
  406b02:	db 44 24 0c          	fild   DWORD PTR [esp+0xc]
  406b06:	d8 0d 44 a7 64 00    	fmul   DWORD PTR ds:0x64a744
  406b0c:	d8 05 c8 a2 64 00    	fadd   DWORD PTR ds:0x64a2c8
  406b12:	d9 1c 24             	fstp   DWORD PTR [esp]
  406b15:	6a 00                	push   0x0
  406b17:	6a 01                	push   0x1
  406b19:	ff 97 8c 00 00 00    	call   DWORD PTR [edi+0x8c]
  406b1f:	5f                   	pop    edi
  406b20:	5e                   	pop    esi
  406b21:	59                   	pop    ecx
  406b22:	c2 08 00             	ret    0x8
  406b25:	90                   	nop
  406b26:	90                   	nop
  406b27:	90                   	nop
  406b28:	90                   	nop
  406b29:	90                   	nop
  406b2a:	90                   	nop
  406b2b:	90                   	nop
  406b2c:	90                   	nop
  406b2d:	90                   	nop
  406b2e:	90                   	nop
  406b2f:	90                   	nop
  406b30:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  406b34:	56                   	push   esi
  406b35:	8b f1                	mov    esi,ecx
  406b37:	50                   	push   eax
  406b38:	e8 93 34 00 00       	call   0x409fd0
  406b3d:	c7 06 4c a7 64 00    	mov    DWORD PTR [esi],0x64a74c
  406b43:	8b c6                	mov    eax,esi
  406b45:	5e                   	pop    esi
  406b46:	c2 04 00             	ret    0x4
  406b49:	90                   	nop
  406b4a:	90                   	nop
  406b4b:	90                   	nop
  406b4c:	90                   	nop
  406b4d:	90                   	nop
  406b4e:	90                   	nop
  406b4f:	90                   	nop
  406b50:	56                   	push   esi
  406b51:	6a 00                	push   0x0
  406b53:	8b f1                	mov    esi,ecx
  406b55:	6a 00                	push   0x0
  406b57:	e8 b4 be ff ff       	call   0x402a10
  406b5c:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406b5f:	68 ff ff 7f 7f       	push   0x7f7fffff
  406b64:	6a 00                	push   0x0
  406b66:	6a 01                	push   0x1
  406b68:	8b 01                	mov    eax,DWORD PTR [ecx]
  406b6a:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  406b70:	5e                   	pop    esi
  406b71:	c2 04 00             	ret    0x4
  406b74:	90                   	nop
  406b75:	90                   	nop
  406b76:	90                   	nop
  406b77:	90                   	nop
  406b78:	90                   	nop
  406b79:	90                   	nop
  406b7a:	90                   	nop
  406b7b:	90                   	nop
  406b7c:	90                   	nop
  406b7d:	90                   	nop
  406b7e:	90                   	nop
  406b7f:	90                   	nop
  406b80:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  406b84:	56                   	push   esi
  406b85:	8b f1                	mov    esi,ecx
  406b87:	50                   	push   eax
  406b88:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  406b8c:	51                   	push   ecx
  406b8d:	8b ce                	mov    ecx,esi
  406b8f:	e8 5c 34 00 00       	call   0x409ff0
  406b94:	8b ce                	mov    ecx,esi
  406b96:	e8 75 c1 ff ff       	call   0x402d10
  406b9b:	84 c0                	test   al,al
  406b9d:	75 27                	jne    0x406bc6
  406b9f:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406ba2:	e8 59 cb 01 00       	call   0x423700
  406ba7:	8b c8                	mov    ecx,eax
  406ba9:	e8 52 a1 09 00       	call   0x4a0d00
  406bae:	84 c0                	test   al,al
  406bb0:	74 14                	je     0x406bc6
  406bb2:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406bb5:	68 ff ff 7f 7f       	push   0x7f7fffff
  406bba:	6a 00                	push   0x0
  406bbc:	6a 01                	push   0x1
  406bbe:	8b 11                	mov    edx,DWORD PTR [ecx]
  406bc0:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  406bc6:	5e                   	pop    esi
  406bc7:	c2 08 00             	ret    0x8
  406bca:	90                   	nop
  406bcb:	90                   	nop
  406bcc:	90                   	nop
  406bcd:	90                   	nop
  406bce:	90                   	nop
  406bcf:	90                   	nop
  406bd0:	6a ff                	push   0xffffffff
  406bd2:	68 3b 01 62 00       	push   0x62013b
  406bd7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  406bdd:	50                   	push   eax
  406bde:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  406be5:	51                   	push   ecx
  406be6:	56                   	push   esi
  406be7:	8b f1                	mov    esi,ecx
  406be9:	6a 2c                	push   0x2c
  406beb:	e8 c5 34 20 00       	call   0x60a0b5
  406bf0:	83 c4 04             	add    esp,0x4
  406bf3:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  406bf7:	85 c0                	test   eax,eax
  406bf9:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  406c00:	00 
  406c01:	74 0d                	je     0x406c10
  406c03:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406c06:	51                   	push   ecx
  406c07:	8b c8                	mov    ecx,eax
  406c09:	e8 32 00 00 00       	call   0x406c40
  406c0e:	eb 02                	jmp    0x406c12
  406c10:	33 c0                	xor    eax,eax
  406c12:	50                   	push   eax
  406c13:	6a 01                	push   0x1
  406c15:	8b ce                	mov    ecx,esi
  406c17:	c7 44 24 18 ff ff ff 	mov    DWORD PTR [esp+0x18],0xffffffff
  406c1e:	ff 
  406c1f:	e8 ec bd ff ff       	call   0x402a10
  406c24:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  406c28:	5e                   	pop    esi
  406c29:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  406c30:	83 c4 10             	add    esp,0x10
  406c33:	c3                   	ret
  406c34:	90                   	nop
  406c35:	90                   	nop
  406c36:	90                   	nop
  406c37:	90                   	nop
  406c38:	90                   	nop
  406c39:	90                   	nop
  406c3a:	90                   	nop
  406c3b:	90                   	nop
  406c3c:	90                   	nop
  406c3d:	90                   	nop
  406c3e:	90                   	nop
  406c3f:	90                   	nop
  406c40:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  406c44:	56                   	push   esi
  406c45:	8b f1                	mov    esi,ecx
  406c47:	50                   	push   eax
  406c48:	e8 83 35 00 00       	call   0x40a1d0
  406c4d:	c7 06 60 a7 64 00    	mov    DWORD PTR [esi],0x64a760
  406c53:	8b c6                	mov    eax,esi
  406c55:	5e                   	pop    esi
  406c56:	c2 04 00             	ret    0x4
  406c59:	90                   	nop
  406c5a:	90                   	nop
  406c5b:	90                   	nop
  406c5c:	90                   	nop
  406c5d:	90                   	nop
  406c5e:	90                   	nop
  406c5f:	90                   	nop
  406c60:	6a ff                	push   0xffffffff
  406c62:	68 5b 01 62 00       	push   0x62015b
  406c67:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  406c6d:	50                   	push   eax
  406c6e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  406c75:	51                   	push   ecx
  406c76:	56                   	push   esi
  406c77:	57                   	push   edi
  406c78:	8b f1                	mov    esi,ecx
  406c7a:	6a 38                	push   0x38
  406c7c:	e8 34 34 20 00       	call   0x60a0b5
  406c81:	8b f8                	mov    edi,eax
  406c83:	83 c4 04             	add    esp,0x4
  406c86:	89 7c 24 08          	mov    DWORD PTR [esp+0x8],edi
  406c8a:	85 ff                	test   edi,edi
  406c8c:	c7 44 24 14 00 00 00 	mov    DWORD PTR [esp+0x14],0x0
  406c93:	00 
  406c94:	74 19                	je     0x406caf
  406c96:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406c99:	e8 62 46 02 00       	call   0x42b300
  406c9e:	8b 40 38             	mov    eax,DWORD PTR [eax+0x38]
  406ca1:	8b 4e 28             	mov    ecx,DWORD PTR [esi+0x28]
  406ca4:	50                   	push   eax
  406ca5:	51                   	push   ecx
  406ca6:	8b cf                	mov    ecx,edi
  406ca8:	e8 33 00 00 00       	call   0x406ce0
  406cad:	eb 02                	jmp    0x406cb1
  406caf:	33 c0                	xor    eax,eax
  406cb1:	50                   	push   eax
  406cb2:	6a 00                	push   0x0
  406cb4:	8b ce                	mov    ecx,esi
  406cb6:	c7 44 24 1c ff ff ff 	mov    DWORD PTR [esp+0x1c],0xffffffff
  406cbd:	ff 
  406cbe:	e8 4d bd ff ff       	call   0x402a10
  406cc3:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  406cc7:	5f                   	pop    edi
  406cc8:	5e                   	pop    esi
  406cc9:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  406cd0:	83 c4 10             	add    esp,0x10
  406cd3:	c3                   	ret
  406cd4:	90                   	nop
  406cd5:	90                   	nop
  406cd6:	90                   	nop
  406cd7:	90                   	nop
  406cd8:	90                   	nop
  406cd9:	90                   	nop
  406cda:	90                   	nop
  406cdb:	90                   	nop
  406cdc:	90                   	nop
  406cdd:	90                   	nop
  406cde:	90                   	nop
  406cdf:	90                   	nop
  406ce0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  406ce4:	56                   	push   esi
  406ce5:	8b f1                	mov    esi,ecx
  406ce7:	50                   	push   eax
  406ce8:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  406cec:	51                   	push   ecx
  406ced:	8b ce                	mov    ecx,esi
  406cef:	e8 dc d1 ff ff       	call   0x403ed0
  406cf4:	c7 06 78 a7 64 00    	mov    DWORD PTR [esi],0x64a778
  406cfa:	8b c6                	mov    eax,esi
  406cfc:	5e                   	pop    esi
  406cfd:	c2 08 00             	ret    0x8
  406d00:	8b 49 24             	mov    ecx,DWORD PTR [ecx+0x24]
  406d03:	68 ff ff 7f 7f       	push   0x7f7fffff
  406d08:	6a 00                	push   0x0
  406d0a:	6a 01                	push   0x1
  406d0c:	8b 01                	mov    eax,DWORD PTR [ecx]
  406d0e:	ff 90 8c 00 00 00    	call   DWORD PTR [eax+0x8c]
  406d14:	c3                   	ret
  406d15:	90                   	nop
  406d16:	90                   	nop
  406d17:	90                   	nop
  406d18:	90                   	nop
  406d19:	90                   	nop
  406d1a:	90                   	nop
  406d1b:	90                   	nop
  406d1c:	90                   	nop
  406d1d:	90                   	nop
  406d1e:	90                   	nop
  406d1f:	90                   	nop
  406d20:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  406d24:	56                   	push   esi
  406d25:	8b f1                	mov    esi,ecx
  406d27:	50                   	push   eax
  406d28:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
  406d2c:	51                   	push   ecx
  406d2d:	8b ce                	mov    ecx,esi
  406d2f:	e8 ec d2 ff ff       	call   0x404020
  406d34:	8b ce                	mov    ecx,esi
  406d36:	e8 d5 bf ff ff       	call   0x402d10
  406d3b:	84 c0                	test   al,al
  406d3d:	75 27                	jne    0x406d66
  406d3f:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  406d42:	e8 b9 c9 01 00       	call   0x423700
  406d47:	8b c8                	mov    ecx,eax
  406d49:	e8 b2 9f 09 00       	call   0x4a0d00
  406d4e:	84 c0                	test   al,al
  406d50:	74 14                	je     0x406d66
  406d52:	8b 4e 24             	mov    ecx,DWORD PTR [esi+0x24]
  406d55:	68 ff ff 7f 7f       	push   0x7f7fffff
  406d5a:	6a 00                	push   0x0
  406d5c:	6a 01                	push   0x1
  406d5e:	8b 11                	mov    edx,DWORD PTR [ecx]
  406d60:	ff 92 8c 00 00 00    	call   DWORD PTR [edx+0x8c]
  406d66:	5e                   	pop    esi
  406d67:	c2 08 00             	ret    0x8
  406d6a:	90                   	nop
  406d6b:	90                   	nop
  406d6c:	90                   	nop
  406d6d:	90                   	nop
  406d6e:	90                   	nop
  406d6f:	90                   	nop
