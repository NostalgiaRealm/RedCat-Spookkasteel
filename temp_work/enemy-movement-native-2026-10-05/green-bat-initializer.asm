  4158f0:	6a ff                	push   0xffffffff
  4158f2:	68 0b 12 62 00       	push   0x62120b
  4158f7:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  4158fd:	50                   	push   eax
  4158fe:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  415905:	51                   	push   ecx
  415906:	56                   	push   esi
  415907:	8b f1                	mov    esi,ecx
  415909:	6a 34                	push   0x34
  41590b:	e8 a5 47 1f 00       	call   0x60a0b5
  415910:	83 c4 04             	add    esp,0x4
  415913:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
  415917:	85 c0                	test   eax,eax
  415919:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  415920:	00 
  415921:	74 0a                	je     0x41592d
  415923:	56                   	push   esi
  415924:	8b c8                	mov    ecx,eax
  415926:	e8 45 eb fe ff       	call   0x404470
  41592b:	eb 02                	jmp    0x41592f
  41592d:	33 c0                	xor    eax,eax
  41592f:	50                   	push   eax
  415930:	8b ce                	mov    ecx,esi
  415932:	c7 44 24 14 ff ff ff 	mov    DWORD PTR [esp+0x14],0xffffffff
  415939:	ff 
  41593a:	e8 d1 dd 00 00       	call   0x423710
  41593f:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  415943:	5e                   	pop    esi
  415944:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  41594b:	83 c4 10             	add    esp,0x10
  41594e:	c3                   	ret
  41594f:	90                   	nop
