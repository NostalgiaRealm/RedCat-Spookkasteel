
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

005c7f50 <.text+0x1c6f50>:
  5c7f50:	83 ec 0c             	sub    esp,0xc
  5c7f53:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  5c7f57:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5c7f5b:	89 4c 24 08          	mov    DWORD PTR [esp+0x8],ecx
  5c7f5f:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5c7f63:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  5c7f67:	d9 41 08             	fld    DWORD PTR [ecx+0x8]
  5c7f6a:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  5c7f70:	d8 44 24 18          	fadd   DWORD PTR [esp+0x18]
  5c7f74:	d9 54 24 00          	fst    DWORD PTR [esp+0x0]
  5c7f78:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5c7f7e:	df e0                	fnstsw ax
  5c7f80:	f6 c4 01             	test   ah,0x1
  5c7f83:	74 53                	je     0x5c7fd8
  5c7f85:	c7 44 24 00 00 00 00 	mov    DWORD PTR [esp+0x0],0x0
  5c7f8c:	00 
  5c7f8d:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5c7f91:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
  5c7f94:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  5c7f98:	52                   	push   edx
  5c7f99:	50                   	push   eax
  5c7f9a:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5c7f9e:	8d 54 24 08          	lea    edx,[esp+0x8]
  5c7fa2:	52                   	push   edx
  5c7fa3:	50                   	push   eax
  5c7fa4:	51                   	push   ecx
  5c7fa5:	e8 46 0a 00 00       	call   0x5c89f0
  5c7faa:	83 c4 14             	add    esp,0x14
  5c7fad:	85 c0                	test   eax,eax
  5c7faf:	75 1f                	jne    0x5c7fd0
  5c7fb1:	50                   	push   eax
  5c7fb2:	68 70 3f 6b 00       	push   0x6b3f70
  5c7fb7:	68 5e 01 00 00       	push   0x15e
  5c7fbc:	68 28 9a 6a 00       	push   0x6a9a28
  5c7fc1:	68 70 3f 6b 00       	push   0x6b3f70
  5c7fc6:	6a 0b                	push   0xb
  5c7fc8:	e8 53 72 00 00       	call   0x5cf220
  5c7fcd:	83 c4 18             	add    esp,0x18
  5c7fd0:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5c7fd4:	83 c4 0c             	add    esp,0xc
  5c7fd7:	c3                   	ret
  5c7fd8:	d9 44 24 00          	fld    DWORD PTR [esp+0x0]
  5c7fdc:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  5c7fe2:	df e0                	fnstsw ax
  5c7fe4:	f6 c4 41             	test   ah,0x41
  5c7fe7:	75 a4                	jne    0x5c7f8d
  5c7fe9:	33 c0                	xor    eax,eax
  5c7feb:	83 c4 0c             	add    esp,0xc
  5c7fee:	c3                   	ret
  5c7fef:	90                   	nop
  5c7ff0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  5c7ff4:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5c7ff8:	50                   	push   eax
  5c7ff9:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5c7ffc:	52                   	push   edx
  5c7ffd:	e8 ce 0e 00 00       	call   0x5c8ed0
  5c8002:	83 c4 08             	add    esp,0x8
  5c8005:	85 c0                	test   eax,eax
  5c8007:	75 01                	jne    0x5c800a
  5c8009:	c3                   	ret
  5c800a:	50                   	push   eax
  5c800b:	e8 00 0c 00 00       	call   0x5c8c10
  5c8010:	83 c4 04             	add    esp,0x4
  5c8013:	c3                   	ret
  5c8014:	90                   	nop
  5c8015:	90                   	nop
  5c8016:	90                   	nop
  5c8017:	90                   	nop
  5c8018:	90                   	nop
  5c8019:	90                   	nop
  5c801a:	90                   	nop
  5c801b:	90                   	nop
  5c801c:	90                   	nop
  5c801d:	90                   	nop
  5c801e:	90                   	nop
  5c801f:	90                   	nop
  5c8020:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5c8024:	83 ec 0c             	sub    esp,0xc
  5c8027:	56                   	push   esi
  5c8028:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
  5c802c:	50                   	push   eax
  5c802d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  5c8030:	51                   	push   ecx
  5c8031:	e8 9a 0e 00 00       	call   0x5c8ed0
  5c8036:	8b c8                	mov    ecx,eax
  5c8038:	83 c4 08             	add    esp,0x8
  5c803b:	85 c9                	test   ecx,ecx
  5c803d:	75 05                	jne    0x5c8044
  5c803f:	5e                   	pop    esi
  5c8040:	83 c4 0c             	add    esp,0xc
  5c8043:	c3                   	ret
  5c8044:	d9 46 08             	fld    DWORD PTR [esi+0x8]
  5c8047:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  5c804d:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5c8051:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  5c8055:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
  5c8059:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
  5c805d:	d8 44 24 1c          	fadd   DWORD PTR [esp+0x1c]
  5c8061:	d9 54 24 04          	fst    DWORD PTR [esp+0x4]
  5c8065:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5c806b:	df e0                	fnstsw ax
  5c806d:	f6 c4 01             	test   ah,0x1
  5c8070:	74 1b                	je     0x5c808d
  5c8072:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
  5c8079:	00 
  5c807a:	8d 54 24 04          	lea    edx,[esp+0x4]
  5c807e:	52                   	push   edx
  5c807f:	51                   	push   ecx
  5c8080:	e8 fb 0c 00 00       	call   0x5c8d80
  5c8085:	83 c4 08             	add    esp,0x8
  5c8088:	5e                   	pop    esi
  5c8089:	83 c4 0c             	add    esp,0xc
  5c808c:	c3                   	ret
  5c808d:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5c8091:	d8 1d 54 a3 64 00    	fcomp  DWORD PTR ds:0x64a354
  5c8097:	df e0                	fnstsw ax
  5c8099:	f6 c4 41             	test   ah,0x41
  5c809c:	75 dc                	jne    0x5c807a
  5c809e:	33 c0                	xor    eax,eax
  5c80a0:	5e                   	pop    esi
  5c80a1:	83 c4 0c             	add    esp,0xc
  5c80a4:	c3                   	ret
  5c80a5:	90                   	nop
  5c80a6:	90                   	nop
  5c80a7:	90                   	nop
  5c80a8:	90                   	nop
  5c80a9:	90                   	nop
  5c80aa:	90                   	nop
  5c80ab:	90                   	nop
  5c80ac:	90                   	nop
  5c80ad:	90                   	nop
  5c80ae:	90                   	nop
  5c80af:	90                   	nop
  5c80b0:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  5c80b4:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
  5c80b8:	50                   	push   eax
  5c80b9:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5c80bc:	52                   	push   edx
  5c80bd:	e8 0e 0e 00 00       	call   0x5c8ed0
  5c80c2:	83 c4 08             	add    esp,0x8
  5c80c5:	85 c0                	test   eax,eax
  5c80c7:	75 01                	jne    0x5c80ca
  5c80c9:	c3                   	ret
  5c80ca:	50                   	push   eax
  5c80cb:	e8 d0 0d 00 00       	call   0x5c8ea0
  5c80d0:	83 c4 04             	add    esp,0x4
  5c80d3:	c3                   	ret
  5c80d4:	90                   	nop
  5c80d5:	90                   	nop
  5c80d6:	90                   	nop
  5c80d7:	90                   	nop
  5c80d8:	90                   	nop
  5c80d9:	90                   	nop
  5c80da:	90                   	nop
  5c80db:	90                   	nop
  5c80dc:	90                   	nop
  5c80dd:	90                   	nop
  5c80de:	90                   	nop
  5c80df:	90                   	nop
