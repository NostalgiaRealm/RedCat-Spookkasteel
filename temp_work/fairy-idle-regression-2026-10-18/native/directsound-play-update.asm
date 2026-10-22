
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005c89f0 <.text+0x1c79f0>:
  5c89f0:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5c89f4:	56                   	push   esi
  5c89f5:	85 c0                	test   eax,eax
  5c89f7:	57                   	push   edi
  5c89f8:	0f 84 a4 00 00 00    	je     0x5c8aa2
  5c89fe:	8b 7c 24 0c          	mov    edi,DWORD PTR [esp+0xc]
  5c8a02:	50                   	push   eax
  5c8a03:	57                   	push   edi
  5c8a04:	e8 c7 04 00 00       	call   0x5c8ed0
  5c8a09:	8b f0                	mov    esi,eax
  5c8a0b:	56                   	push   esi
  5c8a0c:	e8 8f ff ff ff       	call   0x5c89a0
  5c8a11:	56                   	push   esi
  5c8a12:	e8 89 04 00 00       	call   0x5c8ea0
  5c8a17:	83 c4 10             	add    esp,0x10
  5c8a1a:	85 c0                	test   eax,eax
  5c8a1c:	74 17                	je     0x5c8a35
  5c8a1e:	8d 44 24 10          	lea    eax,[esp+0x10]
  5c8a22:	50                   	push   eax
  5c8a23:	56                   	push   esi
  5c8a24:	57                   	push   edi
  5c8a25:	e8 86 00 00 00       	call   0x5c8ab0
  5c8a2a:	83 c4 0c             	add    esp,0xc
  5c8a2d:	85 c0                	test   eax,eax
  5c8a2f:	74 71                	je     0x5c8aa2
  5c8a31:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  5c8a35:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  5c8a39:	51                   	push   ecx
  5c8a3a:	56                   	push   esi
  5c8a3b:	e8 40 03 00 00       	call   0x5c8d80
  5c8a40:	83 c4 08             	add    esp,0x8
  5c8a43:	85 c0                	test   eax,eax
  5c8a45:	74 5b                	je     0x5c8aa2
  5c8a47:	8b 06                	mov    eax,DWORD PTR [esi]
  5c8a49:	6a 00                	push   0x0
  5c8a4b:	50                   	push   eax
  5c8a4c:	8b 10                	mov    edx,DWORD PTR [eax]
  5c8a4e:	ff 52 34             	call   DWORD PTR [edx+0x34]
  5c8a51:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  5c8a55:	8b 06                	mov    eax,DWORD PTR [esi]
  5c8a57:	33 d2                	xor    edx,edx
  5c8a59:	8b 08                	mov    ecx,DWORD PTR [eax]
  5c8a5b:	85 ff                	test   edi,edi
  5c8a5d:	0f 95 c2             	setne  dl
  5c8a60:	52                   	push   edx
  5c8a61:	6a 00                	push   0x0
  5c8a63:	6a 00                	push   0x0
  5c8a65:	50                   	push   eax
  5c8a66:	ff 51 30             	call   DWORD PTR [ecx+0x30]
  5c8a69:	85 c0                	test   eax,eax
  5c8a6b:	75 15                	jne    0x5c8a82
  5c8a6d:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5c8a71:	85 c0                	test   eax,eax
  5c8a73:	74 05                	je     0x5c8a7a
  5c8a75:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  5c8a78:	89 08                	mov    DWORD PTR [eax],ecx
  5c8a7a:	5f                   	pop    edi
  5c8a7b:	b8 01 00 00 00       	mov    eax,0x1
  5c8a80:	5e                   	pop    esi
  5c8a81:	c3                   	ret
  5c8a82:	6a 00                	push   0x0
  5c8a84:	68 70 3f 6b 00       	push   0x6b3f70
  5c8a89:	68 9d 04 00 00       	push   0x49d
  5c8a8e:	68 28 9a 6a 00       	push   0x6a9a28
  5c8a93:	68 70 3f 6b 00       	push   0x6b3f70
  5c8a98:	6a 0b                	push   0xb
  5c8a9a:	e8 81 67 00 00       	call   0x5cf220
  5c8a9f:	83 c4 18             	add    esp,0x18
  5c8aa2:	5f                   	pop    edi
  5c8aa3:	33 c0                	xor    eax,eax
  5c8aa5:	5e                   	pop    esi
  5c8aa6:	c3                   	ret
  5c8aa7:	90                   	nop
  5c8aa8:	90                   	nop
  5c8aa9:	90                   	nop
  5c8aaa:	90                   	nop
  5c8aab:	90                   	nop
  5c8aac:	90                   	nop
  5c8aad:	90                   	nop
  5c8aae:	90                   	nop
  5c8aaf:	90                   	nop
  5c8ab0:	53                   	push   ebx
  5c8ab1:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
  5c8ab5:	56                   	push   esi
  5c8ab6:	57                   	push   edi
  5c8ab7:	6a 24                	push   0x24
  5c8ab9:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
  5c8abf:	e8 ec 68 00 00       	call   0x5cf3b0
  5c8ac4:	8b f0                	mov    esi,eax
  5c8ac6:	83 c4 04             	add    esp,0x4
  5c8ac9:	85 f6                	test   esi,esi
  5c8acb:	75 25                	jne    0x5c8af2
  5c8acd:	50                   	push   eax
  5c8ace:	68 70 3f 6b 00       	push   0x6b3f70
  5c8ad3:	68 62 04 00 00       	push   0x462
  5c8ad8:	68 28 9a 6a 00       	push   0x6a9a28
  5c8add:	68 70 3f 6b 00       	push   0x6b3f70
  5c8ae2:	6a 34                	push   0x34
  5c8ae4:	e8 37 67 00 00       	call   0x5cf220
  5c8ae9:	83 c4 18             	add    esp,0x18
  5c8aec:	33 c0                	xor    eax,eax
  5c8aee:	5f                   	pop    edi
  5c8aef:	5e                   	pop    esi
  5c8af0:	5b                   	pop    ebx
  5c8af1:	c3                   	ret
  5c8af2:	8b 7c 24 14          	mov    edi,DWORD PTR [esp+0x14]
  5c8af6:	a1 90 c4 6c 00       	mov    eax,ds:0x6cc490
  5c8afb:	56                   	push   esi
  5c8afc:	8b 17                	mov    edx,DWORD PTR [edi]
  5c8afe:	8b 08                	mov    ecx,DWORD PTR [eax]
  5c8b00:	52                   	push   edx
  5c8b01:	50                   	push   eax
  5c8b02:	ff 51 14             	call   DWORD PTR [ecx+0x14]
  5c8b05:	85 c0                	test   eax,eax
  5c8b07:	74 47                	je     0x5c8b50
  5c8b09:	56                   	push   esi
  5c8b0a:	e8 f1 68 00 00       	call   0x5cf400
  5c8b0f:	c7 05 c0 03 72 00 00 	mov    DWORD PTR ds:0x7203c0,0x0
  5c8b16:	00 00 00 
  5c8b19:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
  5c8b1c:	50                   	push   eax
  5c8b1d:	e8 7e 00 00 00       	call   0x5c8ba0
  5c8b22:	8b f0                	mov    esi,eax
  5c8b24:	83 c4 08             	add    esp,0x8
  5c8b27:	85 f6                	test   esi,esi
  5c8b29:	75 25                	jne    0x5c8b50
  5c8b2b:	50                   	push   eax
  5c8b2c:	68 70 3f 6b 00       	push   0x6b3f70
  5c8b31:	68 6d 04 00 00       	push   0x46d
  5c8b36:	68 28 9a 6a 00       	push   0x6a9a28
  5c8b3b:	68 70 3f 6b 00       	push   0x6b3f70
  5c8b40:	6a 0b                	push   0xb
  5c8b42:	e8 d9 66 00 00       	call   0x5cf220
  5c8b47:	83 c4 18             	add    esp,0x18
  5c8b4a:	33 c0                	xor    eax,eax
  5c8b4c:	5f                   	pop    edi
  5c8b4d:	5e                   	pop    esi
  5c8b4e:	5b                   	pop    ebx
  5c8b4f:	c3                   	ret
  5c8b50:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5c8b54:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5c8b57:	89 4e 04             	mov    DWORD PTR [esi+0x4],ecx
  5c8b5a:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5c8b5d:	41                   	inc    ecx
  5c8b5e:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  5c8b61:	c7 46 1c 00 00 00 00 	mov    DWORD PTR [esi+0x1c],0x0
  5c8b68:	8b 57 20             	mov    edx,DWORD PTR [edi+0x20]
  5c8b6b:	8d 47 0c             	lea    eax,[edi+0xc]
  5c8b6e:	89 56 20             	mov    DWORD PTR [esi+0x20],edx
  5c8b71:	8d 4e 0c             	lea    ecx,[esi+0xc]
  5c8b74:	8b 10                	mov    edx,DWORD PTR [eax]
  5c8b76:	89 11                	mov    DWORD PTR [ecx],edx
  5c8b78:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5c8b7b:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  5c8b7e:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5c8b81:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
  5c8b84:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
  5c8b87:	89 4e 18             	mov    DWORD PTR [esi+0x18],ecx
  5c8b8a:	89 77 20             	mov    DWORD PTR [edi+0x20],esi
  5c8b8d:	89 33                	mov    DWORD PTR [ebx],esi
  5c8b8f:	5f                   	pop    edi
  5c8b90:	5e                   	pop    esi
  5c8b91:	b8 01 00 00 00       	mov    eax,0x1
  5c8b96:	5b                   	pop    ebx
  5c8b97:	c3                   	ret
  5c8b98:	90                   	nop
  5c8b99:	90                   	nop
  5c8b9a:	90                   	nop
  5c8b9b:	90                   	nop
  5c8b9c:	90                   	nop
  5c8b9d:	90                   	nop
  5c8b9e:	90                   	nop
  5c8b9f:	90                   	nop
  5c8ba0:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5c8ba4:	83 ec 28             	sub    esp,0x28
  5c8ba7:	8d 44 24 00          	lea    eax,[esp+0x0]
  5c8bab:	8d 4c 24 04          	lea    ecx,[esp+0x4]
  5c8baf:	56                   	push   esi
  5c8bb0:	50                   	push   eax
  5c8bb1:	51                   	push   ecx
  5c8bb2:	52                   	push   edx
  5c8bb3:	e8 68 fc ff ff       	call   0x5c8820
  5c8bb8:	83 c4 0c             	add    esp,0xc
  5c8bbb:	85 c0                	test   eax,eax
  5c8bbd:	75 05                	jne    0x5c8bc4
  5c8bbf:	5e                   	pop    esi
  5c8bc0:	83 c4 28             	add    esp,0x28
  5c8bc3:	c3                   	ret
  5c8bc4:	8b 74 24 10          	mov    esi,DWORD PTR [esp+0x10]
  5c8bc8:	8d 44 24 30          	lea    eax,[esp+0x30]
  5c8bcc:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  5c8bd0:	50                   	push   eax
  5c8bd1:	51                   	push   ecx
  5c8bd2:	e8 e9 fa ff ff       	call   0x5c86c0
  5c8bd7:	83 c4 08             	add    esp,0x8
  5c8bda:	85 c0                	test   eax,eax
  5c8bdc:	75 05                	jne    0x5c8be3
  5c8bde:	5e                   	pop    esi
  5c8bdf:	83 c4 28             	add    esp,0x28
  5c8be2:	c3                   	ret
  5c8be3:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  5c8be7:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5c8beb:	56                   	push   esi
  5c8bec:	52                   	push   edx
  5c8bed:	8b 08                	mov    ecx,DWORD PTR [eax]
  5c8bef:	51                   	push   ecx
  5c8bf0:	e8 fb f9 ff ff       	call   0x5c85f0
  5c8bf5:	8b 4c 24 3c          	mov    ecx,DWORD PTR [esp+0x3c]
  5c8bf9:	83 c4 0c             	add    esp,0xc
  5c8bfc:	f7 d8                	neg    eax
  5c8bfe:	1b c0                	sbb    eax,eax
  5c8c00:	5e                   	pop    esi
  5c8c01:	23 c1                	and    eax,ecx
  5c8c03:	83 c4 28             	add    esp,0x28
  5c8c06:	c3                   	ret
  5c8c07:	90                   	nop
  5c8c08:	90                   	nop
  5c8c09:	90                   	nop
  5c8c0a:	90                   	nop
  5c8c0b:	90                   	nop
  5c8c0c:	90                   	nop
  5c8c0d:	90                   	nop
  5c8c0e:	90                   	nop
  5c8c0f:	90                   	nop
  5c8c10:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
  5c8c14:	8b 00                	mov    eax,DWORD PTR [eax]
  5c8c16:	50                   	push   eax
  5c8c17:	8b 08                	mov    ecx,DWORD PTR [eax]
  5c8c19:	ff 51 48             	call   DWORD PTR [ecx+0x48]
  5c8c1c:	85 c0                	test   eax,eax
  5c8c1e:	75 06                	jne    0x5c8c26
  5c8c20:	b8 01 00 00 00       	mov    eax,0x1
  5c8c25:	c3                   	ret
  5c8c26:	6a 00                	push   0x0
  5c8c28:	68 70 3f 6b 00       	push   0x6b3f70
  5c8c2d:	68 ac 04 00 00       	push   0x4ac
  5c8c32:	68 28 9a 6a 00       	push   0x6a9a28
  5c8c37:	68 70 3f 6b 00       	push   0x6b3f70
  5c8c3c:	6a 0b                	push   0xb
  5c8c3e:	e8 dd 65 00 00       	call   0x5cf220
  5c8c43:	83 c4 18             	add    esp,0x18
  5c8c46:	33 c0                	xor    eax,eax
  5c8c48:	c3                   	ret
  5c8c49:	90                   	nop
  5c8c4a:	90                   	nop
  5c8c4b:	90                   	nop
  5c8c4c:	90                   	nop
  5c8c4d:	90                   	nop
  5c8c4e:	90                   	nop
  5c8c4f:	90                   	nop
  5c8c50:	56                   	push   esi
  5c8c51:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5c8c55:	85 f6                	test   esi,esi
  5c8c57:	74 48                	je     0x5c8ca1
  5c8c59:	56                   	push   esi
  5c8c5a:	e8 51 00 00 00       	call   0x5c8cb0
  5c8c5f:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5c8c62:	83 c4 04             	add    esp,0x4
  5c8c65:	85 c0                	test   eax,eax
  5c8c67:	74 06                	je     0x5c8c6f
  5c8c69:	8b 08                	mov    ecx,DWORD PTR [eax]
  5c8c6b:	50                   	push   eax
  5c8c6c:	ff 51 08             	call   DWORD PTR [ecx+0x8]
  5c8c6f:	a1 90 c4 6c 00       	mov    eax,ds:0x6cc490
  5c8c74:	85 c0                	test   eax,eax
  5c8c76:	74 06                	je     0x5c8c7e
  5c8c78:	8b 10                	mov    edx,DWORD PTR [eax]
  5c8c7a:	50                   	push   eax
  5c8c7b:	ff 52 08             	call   DWORD PTR [edx+0x8]
  5c8c7e:	a1 9c c4 6c 00       	mov    eax,ds:0x6cc49c
  5c8c83:	85 c0                	test   eax,eax
  5c8c85:	74 07                	je     0x5c8c8e
  5c8c87:	50                   	push   eax
  5c8c88:	ff 15 98 a0 64 00    	call   DWORD PTR ds:0x64a098
  5c8c8e:	56                   	push   esi
  5c8c8f:	e8 6c 67 00 00       	call   0x5cf400
  5c8c94:	83 c4 04             	add    esp,0x4
  5c8c97:	c7 05 c0 03 72 00 00 	mov    DWORD PTR ds:0x7203c0,0x0
  5c8c9e:	00 00 00 
  5c8ca1:	5e                   	pop    esi
  5c8ca2:	c3                   	ret
  5c8ca3:	90                   	nop
  5c8ca4:	90                   	nop
  5c8ca5:	90                   	nop
  5c8ca6:	90                   	nop
  5c8ca7:	90                   	nop
  5c8ca8:	90                   	nop
  5c8ca9:	90                   	nop
  5c8caa:	90                   	nop
  5c8cab:	90                   	nop
  5c8cac:	90                   	nop
  5c8cad:	90                   	nop
  5c8cae:	90                   	nop
  5c8caf:	90                   	nop
  5c8cb0:	53                   	push   ebx
  5c8cb1:	55                   	push   ebp
  5c8cb2:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
  5c8cb6:	56                   	push   esi
  5c8cb7:	33 db                	xor    ebx,ebx
  5c8cb9:	57                   	push   edi
  5c8cba:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
  5c8cbd:	3b f3                	cmp    esi,ebx
  5c8cbf:	74 58                	je     0x5c8d19
  5c8cc1:	8b 7e 1c             	mov    edi,DWORD PTR [esi+0x1c]
  5c8cc4:	56                   	push   esi
  5c8cc5:	e8 b6 fc ff ff       	call   0x5c8980
  5c8cca:	56                   	push   esi
  5c8ccb:	e8 d0 fc ff ff       	call   0x5c89a0
  5c8cd0:	8b 06                	mov    eax,DWORD PTR [esi]
  5c8cd2:	83 c4 08             	add    esp,0x8
  5c8cd5:	8b 08                	mov    ecx,DWORD PTR [eax]
  5c8cd7:	50                   	push   eax
  5c8cd8:	ff 51 48             	call   DWORD PTR [ecx+0x48]
  5c8cdb:	85 c0                	test   eax,eax
  5c8cdd:	75 4a                	jne    0x5c8d29
  5c8cdf:	8b 06                	mov    eax,DWORD PTR [esi]
  5c8ce1:	50                   	push   eax
  5c8ce2:	8b 10                	mov    edx,DWORD PTR [eax]
  5c8ce4:	ff 52 08             	call   DWORD PTR [edx+0x8]
  5c8ce7:	85 c0                	test   eax,eax
  5c8ce9:	75 64                	jne    0x5c8d4f
  5c8ceb:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
  5c8cee:	3b c3                	cmp    eax,ebx
  5c8cf0:	74 12                	je     0x5c8d04
  5c8cf2:	50                   	push   eax
  5c8cf3:	e8 08 67 00 00       	call   0x5cf400
  5c8cf8:	89 5e 18             	mov    DWORD PTR [esi+0x18],ebx
  5c8cfb:	83 c4 04             	add    esp,0x4
  5c8cfe:	89 1d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,ebx
  5c8d04:	56                   	push   esi
  5c8d05:	e8 f6 66 00 00       	call   0x5cf400
  5c8d0a:	83 c4 04             	add    esp,0x4
  5c8d0d:	3b fb                	cmp    edi,ebx
  5c8d0f:	89 1d c0 03 72 00    	mov    DWORD PTR ds:0x7203c0,ebx
  5c8d15:	8b f7                	mov    esi,edi
  5c8d17:	75 a8                	jne    0x5c8cc1
  5c8d19:	5f                   	pop    edi
  5c8d1a:	89 5d 0c             	mov    DWORD PTR [ebp+0xc],ebx
  5c8d1d:	89 5d 00             	mov    DWORD PTR [ebp+0x0],ebx
  5c8d20:	5e                   	pop    esi
  5c8d21:	5d                   	pop    ebp
  5c8d22:	b8 01 00 00 00       	mov    eax,0x1
  5c8d27:	5b                   	pop    ebx
  5c8d28:	c3                   	ret
  5c8d29:	53                   	push   ebx
  5c8d2a:	68 70 3f 6b 00       	push   0x6b3f70
  5c8d2f:	68 ef 03 00 00       	push   0x3ef
  5c8d34:	68 28 9a 6a 00       	push   0x6a9a28
  5c8d39:	68 70 3f 6b 00       	push   0x6b3f70
  5c8d3e:	6a 0b                	push   0xb
  5c8d40:	e8 db 64 00 00       	call   0x5cf220
  5c8d45:	83 c4 18             	add    esp,0x18
  5c8d48:	33 c0                	xor    eax,eax
  5c8d4a:	5f                   	pop    edi
  5c8d4b:	5e                   	pop    esi
  5c8d4c:	5d                   	pop    ebp
  5c8d4d:	5b                   	pop    ebx
  5c8d4e:	c3                   	ret
  5c8d4f:	53                   	push   ebx
  5c8d50:	68 70 3f 6b 00       	push   0x6b3f70
  5c8d55:	68 f5 03 00 00       	push   0x3f5
  5c8d5a:	68 28 9a 6a 00       	push   0x6a9a28
  5c8d5f:	68 70 3f 6b 00       	push   0x6b3f70
  5c8d64:	6a 0b                	push   0xb
  5c8d66:	e8 b5 64 00 00       	call   0x5cf220
  5c8d6b:	83 c4 18             	add    esp,0x18
  5c8d6e:	33 c0                	xor    eax,eax
  5c8d70:	5f                   	pop    edi
  5c8d71:	5e                   	pop    esi
  5c8d72:	5d                   	pop    ebp
  5c8d73:	5b                   	pop    ebx
  5c8d74:	c3                   	ret
  5c8d75:	90                   	nop
  5c8d76:	90                   	nop
  5c8d77:	90                   	nop
  5c8d78:	90                   	nop
  5c8d79:	90                   	nop
  5c8d7a:	90                   	nop
  5c8d7b:	90                   	nop
  5c8d7c:	90                   	nop
  5c8d7d:	90                   	nop
  5c8d7e:	90                   	nop
  5c8d7f:	90                   	nop
  5c8d80:	56                   	push   esi
  5c8d81:	57                   	push   edi
  5c8d82:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
  5c8d86:	85 ff                	test   edi,edi
  5c8d88:	0f 84 06 01 00 00    	je     0x5c8e94
  5c8d8e:	8b 74 24 0c          	mov    esi,DWORD PTR [esp+0xc]
  5c8d92:	56                   	push   esi
  5c8d93:	e8 08 fc ff ff       	call   0x5c89a0
  5c8d98:	d9 07                	fld    DWORD PTR [edi]
  5c8d9a:	d8 5e 0c             	fcomp  DWORD PTR [esi+0xc]
  5c8d9d:	83 c4 04             	add    esp,0x4
  5c8da0:	df e0                	fnstsw ax
  5c8da2:	f6 c4 40             	test   ah,0x40
  5c8da5:	75 4a                	jne    0x5c8df1
  5c8da7:	d9 07                	fld    DWORD PTR [edi]
  5c8da9:	dc 2d 18 d9 64 00    	fsubr  QWORD PTR ds:0x64d918
  5c8daf:	dc 0d e0 08 65 00    	fmul   QWORD PTR ds:0x6508e0
  5c8db5:	e8 66 1d 04 00       	call   0x60ab20
  5c8dba:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5c8dbc:	50                   	push   eax
  5c8dbd:	51                   	push   ecx
  5c8dbe:	8b 11                	mov    edx,DWORD PTR [ecx]
  5c8dc0:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
  5c8dc3:	85 c0                	test   eax,eax
  5c8dc5:	74 25                	je     0x5c8dec
  5c8dc7:	6a 00                	push   0x0
  5c8dc9:	68 70 3f 6b 00       	push   0x6b3f70
  5c8dce:	68 cd 04 00 00       	push   0x4cd
  5c8dd3:	68 28 9a 6a 00       	push   0x6a9a28
  5c8dd8:	68 70 3f 6b 00       	push   0x6b3f70
  5c8ddd:	6a 0b                	push   0xb
  5c8ddf:	e8 3c 64 00 00       	call   0x5cf220
  5c8de4:	83 c4 18             	add    esp,0x18
  5c8de7:	33 c0                	xor    eax,eax
  5c8de9:	5f                   	pop    edi
  5c8dea:	5e                   	pop    esi
  5c8deb:	c3                   	ret
  5c8dec:	8b 07                	mov    eax,DWORD PTR [edi]
  5c8dee:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
  5c8df1:	d9 47 04             	fld    DWORD PTR [edi+0x4]
  5c8df4:	d8 5e 10             	fcomp  DWORD PTR [esi+0x10]
  5c8df7:	df e0                	fnstsw ax
  5c8df9:	f6 c4 40             	test   ah,0x40
  5c8dfc:	75 46                	jne    0x5c8e44
  5c8dfe:	d9 47 04             	fld    DWORD PTR [edi+0x4]
  5c8e01:	d8 0d 6c dc 64 00    	fmul   DWORD PTR ds:0x64dc6c
  5c8e07:	e8 14 1d 04 00       	call   0x60ab20
  5c8e0c:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5c8e0e:	50                   	push   eax
  5c8e0f:	51                   	push   ecx
  5c8e10:	8b 11                	mov    edx,DWORD PTR [ecx]
  5c8e12:	ff 52 40             	call   DWORD PTR [edx+0x40]
  5c8e15:	85 c0                	test   eax,eax
  5c8e17:	74 25                	je     0x5c8e3e
  5c8e19:	6a 00                	push   0x0
  5c8e1b:	68 70 3f 6b 00       	push   0x6b3f70
  5c8e20:	68 d9 04 00 00       	push   0x4d9
  5c8e25:	68 28 9a 6a 00       	push   0x6a9a28
  5c8e2a:	68 70 3f 6b 00       	push   0x6b3f70
  5c8e2f:	6a 0b                	push   0xb
  5c8e31:	e8 ea 63 00 00       	call   0x5cf220
  5c8e36:	83 c4 18             	add    esp,0x18
  5c8e39:	33 c0                	xor    eax,eax
  5c8e3b:	5f                   	pop    edi
  5c8e3c:	5e                   	pop    esi
  5c8e3d:	c3                   	ret
  5c8e3e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
  5c8e41:	89 46 10             	mov    DWORD PTR [esi+0x10],eax
  5c8e44:	d9 47 08             	fld    DWORD PTR [edi+0x8]
  5c8e47:	d8 5e 14             	fcomp  DWORD PTR [esi+0x14]
  5c8e4a:	df e0                	fnstsw ax
  5c8e4c:	f6 c4 40             	test   ah,0x40
  5c8e4f:	75 43                	jne    0x5c8e94
  5c8e51:	db 46 08             	fild   DWORD PTR [esi+0x8]
  5c8e54:	d8 4f 08             	fmul   DWORD PTR [edi+0x8]
  5c8e57:	e8 c4 1c 04 00       	call   0x60ab20
  5c8e5c:	8b 0e                	mov    ecx,DWORD PTR [esi]
  5c8e5e:	50                   	push   eax
  5c8e5f:	51                   	push   ecx
  5c8e60:	8b 11                	mov    edx,DWORD PTR [ecx]
  5c8e62:	ff 52 44             	call   DWORD PTR [edx+0x44]
  5c8e65:	85 c0                	test   eax,eax
  5c8e67:	74 25                	je     0x5c8e8e
  5c8e69:	6a 00                	push   0x0
  5c8e6b:	68 70 3f 6b 00       	push   0x6b3f70
  5c8e70:	68 e7 04 00 00       	push   0x4e7
  5c8e75:	68 28 9a 6a 00       	push   0x6a9a28
  5c8e7a:	68 70 3f 6b 00       	push   0x6b3f70
  5c8e7f:	6a 0b                	push   0xb
  5c8e81:	e8 9a 63 00 00       	call   0x5cf220
  5c8e86:	83 c4 18             	add    esp,0x18
  5c8e89:	33 c0                	xor    eax,eax
  5c8e8b:	5f                   	pop    edi
  5c8e8c:	5e                   	pop    esi
  5c8e8d:	c3                   	ret
  5c8e8e:	8b 47 08             	mov    eax,DWORD PTR [edi+0x8]
  5c8e91:	89 46 14             	mov    DWORD PTR [esi+0x14],eax
  5c8e94:	5f                   	pop    edi
  5c8e95:	b8 01 00 00 00       	mov    eax,0x1
  5c8e9a:	5e                   	pop    esi
  5c8e9b:	c3                   	ret
  5c8e9c:	90                   	nop
  5c8e9d:	90                   	nop
  5c8e9e:	90                   	nop
  5c8e9f:	90                   	nop
