
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcMenu.dat:     file format pei-i386


Disassembly of section CODE:

0054ee94 <CODE+0x14de94>:
  54ee94:	55                   	push   ebp
  54ee95:	8b ec                	mov    ebp,esp
  54ee97:	83 c4 f8             	add    esp,0xfffffff8
  54ee9a:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  54ee9d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  54eea0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  54eea3:	c7 80 34 02 00 00 02 	mov    DWORD PTR [eax+0x234],0x2
  54eeaa:	00 00 00 
  54eead:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  54eeb0:	e8 63 01 00 00       	call   0x54f018
  54eeb5:	59                   	pop    ecx
  54eeb6:	59                   	pop    ecx
  54eeb7:	5d                   	pop    ebp
  54eeb8:	c3                   	ret
  54eeb9:	8d 40 00             	lea    eax,[eax+0x0]
  54eebc:	55                   	push   ebp
  54eebd:	8b ec                	mov    ebp,esp
  54eebf:	83 c4 f8             	add    esp,0xfffffff8
  54eec2:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  54eec5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  54eec8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  54eecb:	c7 80 34 02 00 00 01 	mov    DWORD PTR [eax+0x234],0x1
  54eed2:	00 00 00 
  54eed5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  54eed8:	e8 3b 01 00 00       	call   0x54f018
  54eedd:	59                   	pop    ecx
  54eede:	59                   	pop    ecx
  54eedf:	5d                   	pop    ebp
  54eee0:	c3                   	ret
  54eee1:	8d 40 00             	lea    eax,[eax+0x0]
  54eee4:	55                   	push   ebp
  54eee5:	8b ec                	mov    ebp,esp
  54eee7:	81 c4 f0 fe ff ff    	add    esp,0xfffffef0
  54eeed:	33 c9                	xor    ecx,ecx
  54eeef:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  54eef2:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  54eef5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  54eef8:	33 c0                	xor    eax,eax
  54eefa:	55                   	push   ebp
  54eefb:	68 de ef 54 00       	push   0x54efde
  54ef00:	64 ff 30             	push   DWORD PTR fs:[eax]
  54ef03:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  54ef06:	a1 08 21 57 00       	mov    eax,ds:0x572108
  54ef0b:	8b 00                	mov    eax,DWORD PTR [eax]
  54ef0d:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  54ef13:	e8 c4 10 00 00       	call   0x54ffdc
  54ef18:	a1 08 21 57 00       	mov    eax,ds:0x572108
  54ef1d:	8b 00                	mov    eax,DWORD PTR [eax]
  54ef1f:	ba f4 ef 54 00       	mov    edx,0x54eff4
  54ef24:	e8 43 ad 01 00       	call   0x569c6c
  54ef29:	a1 08 21 57 00       	mov    eax,ds:0x572108
  54ef2e:	8b 00                	mov    eax,DWORD PTR [eax]
  54ef30:	e8 af ba 01 00       	call   0x56a9e4
  54ef35:	e8 1e d3 ff ff       	call   0x54c258
  54ef3a:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  54ef3d:	89 90 44 03 00 00    	mov    DWORD PTR [eax+0x344],edx
  54ef43:	c7 80 40 03 00 00 00 	mov    DWORD PTR [eax+0x340],0x54f000
  54ef4a:	f0 54 00 
  54ef4d:	e8 06 d3 ff ff       	call   0x54c258
  54ef52:	b2 04                	mov    dl,0x4
  54ef54:	e8 13 e3 ff ff       	call   0x54d26c
  54ef59:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  54ef5f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  54ef62:	8b 00                	mov    eax,DWORD PTR [eax]
  54ef64:	e8 77 40 eb ff       	call   0x402fe0
  54ef69:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  54ef6f:	8d 45 f0             	lea    eax,[ebp-0x10]
  54ef72:	e8 5d 50 eb ff       	call   0x403fd4
  54ef77:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  54ef7a:	e8 a9 17 f6 ff       	call   0x4b0728
  54ef7f:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  54ef82:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
  54ef86:	74 1b                	je     0x54efa3
  54ef88:	e8 cb d2 ff ff       	call   0x54c258
  54ef8d:	33 d2                	xor    edx,edx
  54ef8f:	e8 80 db ff ff       	call   0x54cb14
  54ef94:	e8 bf d2 ff ff       	call   0x54c258
  54ef99:	33 c9                	xor    ecx,ecx
  54ef9b:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  54ef9e:	e8 41 db ff ff       	call   0x54cae4
  54efa3:	e8 b0 d2 ff ff       	call   0x54c258
  54efa8:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  54efab:	8b 92 04 03 00 00    	mov    edx,DWORD PTR [edx+0x304]
  54efb1:	e8 7a d3 ff ff       	call   0x54c330
  54efb6:	e8 9d d2 ff ff       	call   0x54c258
  54efbb:	e8 e0 da ff ff       	call   0x54caa0
  54efc0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  54efc3:	8b 10                	mov    edx,DWORD PTR [eax]
  54efc5:	ff 52 74             	call   DWORD PTR [edx+0x74]
  54efc8:	33 c0                	xor    eax,eax
  54efca:	5a                   	pop    edx
  54efcb:	59                   	pop    ecx
  54efcc:	59                   	pop    ecx
  54efcd:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  54efd0:	68 e5 ef 54 00       	push   0x54efe5
  54efd5:	8d 45 f0             	lea    eax,[ebp-0x10]
  54efd8:	e8 d3 4d eb ff       	call   0x403db0
  54efdd:	c3                   	ret
  54efde:	e9 11 48 eb ff       	jmp    0x4037f4
  54efe3:	eb f0                	jmp    0x54efd5
  54efe5:	8b e5                	mov    esp,ebp
  54efe7:	5d                   	pop    ebp
  54efe8:	c3                   	ret
  54efe9:	00 00                	add    BYTE PTR [eax],al
  54efeb:	00 ff                	add    bh,bh
  54efed:	ff                   	(bad)
  54efee:	ff                   	(bad)
  54efef:	ff 08                	dec    DWORD PTR [eax]
  54eff1:	00 00                	add    BYTE PTR [eax],al
  54eff3:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  54eff6:	5f                   	pop    edi
  54eff7:	72 65                	jb     0x54f05e
  54eff9:	64 32 31             	xor    dh,BYTE PTR fs:[ecx]
  54effc:	00 00                	add    BYTE PTR [eax],al
  54effe:	00 00                	add    BYTE PTR [eax],al
  54f000:	55                   	push   ebp
  54f001:	8b ec                	mov    ebp,esp
  54f003:	83 c4 f8             	add    esp,0xfffffff8
  54f006:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  54f009:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  54f00c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  54f00f:	e8 04 00 00 00       	call   0x54f018
  54f014:	59                   	pop    ecx
  54f015:	59                   	pop    ecx
  54f016:	5d                   	pop    ebp
  54f017:	c3                   	ret
  54f018:	55                   	push   ebp
  54f019:	8b ec                	mov    ebp,esp
  54f01b:	51                   	push   ecx
  54f01c:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  54f01f:	e8 34 d2 ff ff       	call   0x54c258
  54f024:	e8 8b d4 ff ff       	call   0x54c4b4
  54f029:	e8 2a d2 ff ff       	call   0x54c258
  54f02e:	e8 55 da ff ff       	call   0x54ca88
  54f033:	e8 20 d2 ff ff       	call   0x54c258
  54f038:	e8 b7 d4 ff ff       	call   0x54c4f4
  54f03d:	59                   	pop    ecx
  54f03e:	5d                   	pop    ebp
  54f03f:	c3                   	ret
