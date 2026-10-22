  579fa7:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  579fad:	8b 45 28             	mov    eax,DWORD PTR [ebp+0x28]
  579fb0:	6a 00                	push   0x0
  579fb2:	89 42 2c             	mov    DWORD PTR [edx+0x2c],eax
  579fb5:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  579fbb:	8b 55 18             	mov    edx,DWORD PTR [ebp+0x18]
  579fbe:	89 51 30             	mov    DWORD PTR [ecx+0x30],edx
  579fc1:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  579fc7:	8b 4d 1c             	mov    ecx,DWORD PTR [ebp+0x1c]
  579fca:	89 48 34             	mov    DWORD PTR [eax+0x34],ecx
  579fcd:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  579fd3:	8b 45 20             	mov    eax,DWORD PTR [ebp+0x20]
  579fd6:	89 42 3c             	mov    DWORD PTR [edx+0x3c],eax
  579fd9:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  579fdf:	8b 55 24             	mov    edx,DWORD PTR [ebp+0x24]
  579fe2:	89 51 38             	mov    DWORD PTR [ecx+0x38],edx
  579fe5:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  579feb:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
  579fee:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  579ff1:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  579ff7:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
  579ffa:	89 42 0c             	mov    DWORD PTR [edx+0xc],eax
  579ffd:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a003:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
  57a006:	89 51 10             	mov    DWORD PTR [ecx+0x10],edx
  57a009:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57a00f:	8b 4d 2c             	mov    ecx,DWORD PTR [ebp+0x2c]
  57a012:	89 48 1c             	mov    DWORD PTR [eax+0x1c],ecx
  57a015:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  57a01b:	8b 45 30             	mov    eax,DWORD PTR [ebp+0x30]
  57a01e:	89 42 20             	mov    DWORD PTR [edx+0x20],eax
  57a021:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a027:	8b 55 34             	mov    edx,DWORD PTR [ebp+0x34]
  57a02a:	89 51 24             	mov    DWORD PTR [ecx+0x24],edx
  57a02d:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57a033:	c7 40 28 00 00 7f 43 	mov    DWORD PTR [eax+0x28],0x437f0000
  57a03a:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a040:	89 71 18             	mov    DWORD PTR [ecx+0x18],esi
  57a043:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  57a049:	89 72 14             	mov    DWORD PTR [edx+0x14],esi
  57a04c:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57a052:	89 30                	mov    DWORD PTR [eax],esi
  57a054:	8b 8b fc 00 00 00    	mov    ecx,DWORD PTR [ebx+0xfc]
  57a05a:	c7 41 44 00 00 80 3f 	mov    DWORD PTR [ecx+0x44],0x3f800000
  57a061:	8a 54 24 58          	mov    dl,BYTE PTR [esp+0x58]
  57adc6:	8b 83 fc 00 00 00    	mov    eax,DWORD PTR [ebx+0xfc]
  57adcc:	8b 8b 00 01 00 00    	mov    ecx,DWORD PTR [ebx+0x100]
  57add2:	51                   	push   ecx
  57add3:	d9 40 44             	fld    DWORD PTR [eax+0x44]
  57add6:	d8 08                	fmul   DWORD PTR [eax]
  57add8:	d8 0d 60 d7 64 00    	fmul   DWORD PTR ds:0x64d760
  57adde:	d9 1c 24             	fstp   DWORD PTR [esp]
  57ade1:	6a 02                	push   0x2
  57ade3:	6a 02                	push   0x2
  57ade5:	e8 86 fc f8 ff       	call   0x50aa70
  57adea:	8b 93 fc 00 00 00    	mov    edx,DWORD PTR [ebx+0xfc]
  57adf0:	50                   	push   eax
  57adf1:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  57adf5:	83 c2 08             	add    edx,0x8
  57adf8:	6a 01                	push   0x1
  57adfa:	52                   	push   edx
  57adfb:	50                   	push   eax
  57adfc:	e8 8f c0 03 00       	call   0x5b6e90
  57ae01:	83 c4 1c             	add    esp,0x1c
  57ae04:	8b 4c 24 38          	mov    ecx,DWORD PTR [esp+0x38]
  59b220:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  59b223:	c3                   	ret
  59b224:	90                   	nop
  59b225:	90                   	nop
  59b226:	90                   	nop
  59b227:	90                   	nop
  59b228:	90                   	nop
  59b229:	90                   	nop
  59b22a:	90                   	nop
  59b22b:	90                   	nop
  59b22c:	90                   	nop
  59b22d:	90                   	nop
  59b22e:	90                   	nop
  59b22f:	90                   	nop
  59b230:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
  59b233:	c3                   	ret
  59b234:	90                   	nop
  59b235:	90                   	nop
  59b236:	90                   	nop
  5b6449:	d9 85 ac 00 00 00    	fld    DWORD PTR [ebp+0xac]
  5b644f:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5b6455:	8b 8d a0 00 00 00    	mov    ecx,DWORD PTR [ebp+0xa0]
  5b645b:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  5b645f:	e8 bc 4d fe ff       	call   0x59b220
  5b6464:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  5b6468:	8b 8d a0 00 00 00    	mov    ecx,DWORD PTR [ebp+0xa0]
  5b646e:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  5b6472:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  5b6476:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5b647a:	e8 b1 4d fe ff       	call   0x59b230
  5b647f:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  5b6483:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b6487:	db 44 24 1c          	fild   DWORD PTR [esp+0x1c]
  5b648b:	8d 54 24 48          	lea    edx,[esp+0x48]
  5b648f:	50                   	push   eax
  5b6490:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  5b6494:	d8 4c 24 18          	fmul   DWORD PTR [esp+0x18]
  5b6498:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5b669d:	e8 be 29 01 00       	call   0x5c9060
  5b66a2:	d8 74 24 10          	fdiv   DWORD PTR [esp+0x10]
  5b66a6:	8b be a0 00 00 00    	mov    edi,DWORD PTR [esi+0xa0]
  5b66ac:	8b cf                	mov    ecx,edi
  5b66ae:	d8 8e ac 00 00 00    	fmul   DWORD PTR [esi+0xac]
  5b66b4:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5b66b8:	e8 63 4b fe ff       	call   0x59b220
  5b66bd:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  5b66c1:	8b cf                	mov    ecx,edi
  5b66c3:	db 44 24 18          	fild   DWORD PTR [esp+0x18]
  5b66c7:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
  5b66cb:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5b66cf:	e8 5c 4b fe ff       	call   0x59b230
  5b66d4:	89 44 24 08          	mov    DWORD PTR [esp+0x8],eax
  5b66d8:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
  5b66db:	db 44 24 08          	fild   DWORD PTR [esp+0x8]
  5b66df:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
  5b66e2:	8b d1                	mov    edx,ecx
  5b66e4:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
  5b66e8:	89 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],eax
  5b66ef:	d8 4c 24 10          	fmul   DWORD PTR [esp+0x10]
  5b66f3:	89 4c 24 5c          	mov    DWORD PTR [esp+0x5c],ecx
  5b66f7:	89 94 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],edx
  5b66fe:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  5b6702:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5b6706:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5b670c:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  5b6710:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  5b6716:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5b671a:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  5b671e:	d8 e1                	fsub   st,st(1)
  5b6720:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
  5b6724:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  5b6728:	d8 64 24 08          	fsub   DWORD PTR [esp+0x8]
  5b672c:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  5b6d60:	53                   	push   ebx
  5b6d61:	68 bc 00 00 00       	push   0xbc
  5b6d66:	e8 45 86 01 00       	call   0x5cf3b0
  5b6d6b:	8b d8                	mov    ebx,eax
  5b6d6d:	33 c9                	xor    ecx,ecx
  5b6d6f:	83 c4 04             	add    esp,0x4
  5b6d72:	3b d9                	cmp    ebx,ecx
  5b6d74:	75 04                	jne    0x5b6d7a
  5b6d76:	33 c0                	xor    eax,eax
  5b6d78:	5b                   	pop    ebx
  5b6d79:	c3                   	ret
  5b6d7a:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5b6d7e:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b6d82:	89 93 a0 00 00 00    	mov    DWORD PTR [ebx+0xa0],edx
  5b6d88:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5b6d8c:	89 8b b8 00 00 00    	mov    DWORD PTR [ebx+0xb8],ecx
  5b6d92:	89 8b b4 00 00 00    	mov    DWORD PTR [ebx+0xb4],ecx
  5b6d98:	89 8b b0 00 00 00    	mov    DWORD PTR [ebx+0xb0],ecx
  5b6d9e:	89 8b 94 00 00 00    	mov    DWORD PTR [ebx+0x94],ecx
  5b6da4:	8d 0c c0             	lea    ecx,[eax+eax*8]
  5b6da7:	89 93 a4 00 00 00    	mov    DWORD PTR [ebx+0xa4],edx
  5b6dad:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  5b6db1:	55                   	push   ebp
  5b6db2:	8b 6c 24 0c          	mov    ebp,DWORD PTR [esp+0xc]
  5b6db6:	89 83 9c 00 00 00    	mov    DWORD PTR [ebx+0x9c],eax
  5b6dbc:	c1 e1 02             	shl    ecx,0x2
  5b6dbf:	56                   	push   esi
  5b6dc0:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  5b6dc4:	89 93 a8 00 00 00    	mov    DWORD PTR [ebx+0xa8],edx
  5b6dca:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  5b6dce:	8b c1                	mov    eax,ecx
  5b6dd0:	57                   	push   edi
  5b6dd1:	8d 7b 04             	lea    edi,[ebx+0x4]
  5b6dd4:	89 93 ac 00 00 00    	mov    DWORD PTR [ebx+0xac],edx
  5b6dda:	c1 e9 02             	shr    ecx,0x2
  5b6e90:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5b6e94:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5b6e98:	8b 54 24 14          	mov    edx,DWORD PTR [esp+0x14]
  5b6e9c:	56                   	push   esi
  5b6e9d:	8b 74 24 08          	mov    esi,DWORD PTR [esp+0x8]
  5b6ea1:	50                   	push   eax
  5b6ea2:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5b6ea6:	51                   	push   ecx
  5b6ea7:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  5b6eab:	52                   	push   edx
  5b6eac:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  5b6eb0:	50                   	push   eax
  5b6eb1:	51                   	push   ecx
  5b6eb2:	52                   	push   edx
  5b6eb3:	56                   	push   esi
  5b6eb4:	e8 a7 fe ff ff       	call   0x5b6d60
  5b6eb9:	83 c4 1c             	add    esp,0x1c
  5b6ebc:	85 c0                	test   eax,eax
  5b6ebe:	75 02                	jne    0x5b6ec2
  5b6ec0:	5e                   	pop    esi
  5b6ec1:	c3                   	ret
  5b6ec2:	8b 8e c4 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc4]
  5b6ec8:	8b 11                	mov    edx,DWORD PTR [ecx]
  5b6eca:	89 90 b8 00 00 00    	mov    DWORD PTR [eax+0xb8],edx
  5b6ed0:	8b 8e c4 0b 00 00    	mov    ecx,DWORD PTR [esi+0xbc4]
  5b6ed6:	5e                   	pop    esi
  5b6ed7:	89 01                	mov    DWORD PTR [ecx],eax
  5b6ed9:	c3                   	ret
