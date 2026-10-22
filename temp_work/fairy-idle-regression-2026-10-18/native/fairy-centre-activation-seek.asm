
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0047e710 <.text+0x7d710>:
  47e710:	56                   	push   esi
  47e711:	8b f1                	mov    esi,ecx
  47e713:	8a 46 6c             	mov    al,BYTE PTR [esi+0x6c]
  47e716:	84 c0                	test   al,al
  47e718:	75 5a                	jne    0x47e774
  47e71a:	d9 46 7c             	fld    DWORD PTR [esi+0x7c]
  47e71d:	d8 0d 38 e3 64 00    	fmul   DWORD PTR ds:0x64e338
  47e723:	b0 01                	mov    al,0x1
  47e725:	c7 46 54 00 00 00 00 	mov    DWORD PTR [esi+0x54],0x0
  47e72c:	88 46 6c             	mov    BYTE PTR [esi+0x6c],al
  47e72f:	88 46 7a             	mov    BYTE PTR [esi+0x7a],al
  47e732:	e8 e9 c3 18 00       	call   0x60ab20
  47e737:	89 46 70             	mov    DWORD PTR [esi+0x70],eax
  47e73a:	8b 86 30 01 00 00    	mov    eax,DWORD PTR [esi+0x130]
  47e740:	8d 8e 34 01 00 00    	lea    ecx,[esi+0x134]
  47e746:	89 86 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],eax
  47e74c:	8d 56 10             	lea    edx,[esi+0x10]
  47e74f:	c6 46 79 00          	mov    BYTE PTR [esi+0x79],0x0
  47e753:	8b 01                	mov    eax,DWORD PTR [ecx]
  47e755:	c7 86 b4 00 00 00 00 	mov    DWORD PTR [esi+0xb4],0x0
  47e75c:	00 00 00 
  47e75f:	89 02                	mov    DWORD PTR [edx],eax
  47e761:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  47e764:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
  47e767:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  47e76a:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  47e76d:	8b ce                	mov    ecx,esi
  47e76f:	e8 3c 00 00 00       	call   0x47e7b0
  47e774:	5e                   	pop    esi
  47e775:	c3                   	ret
  47e776:	90                   	nop
  47e777:	90                   	nop
  47e778:	90                   	nop
  47e779:	90                   	nop
  47e77a:	90                   	nop
  47e77b:	90                   	nop
  47e77c:	90                   	nop
  47e77d:	90                   	nop
  47e77e:	90                   	nop
  47e77f:	90                   	nop
  47e780:	8b 91 30 01 00 00    	mov    edx,DWORD PTR [ecx+0x130]
  47e786:	b0 01                	mov    al,0x1
  47e788:	88 41 6c             	mov    BYTE PTR [ecx+0x6c],al
  47e78b:	88 41 7a             	mov    BYTE PTR [ecx+0x7a],al
  47e78e:	33 c0                	xor    eax,eax
  47e790:	89 91 0c 01 00 00    	mov    DWORD PTR [ecx+0x10c],edx
  47e796:	89 41 54             	mov    DWORD PTR [ecx+0x54],eax
  47e799:	88 41 79             	mov    BYTE PTR [ecx+0x79],al
  47e79c:	89 81 b4 00 00 00    	mov    DWORD PTR [ecx+0xb4],eax
  47e7a2:	e9 09 00 00 00       	jmp    0x47e7b0
  47e7a7:	90                   	nop
  47e7a8:	90                   	nop
  47e7a9:	90                   	nop
  47e7aa:	90                   	nop
  47e7ab:	90                   	nop
  47e7ac:	90                   	nop
  47e7ad:	90                   	nop
  47e7ae:	90                   	nop
  47e7af:	90                   	nop
  47e7b0:	56                   	push   esi
  47e7b1:	8b f1                	mov    esi,ecx
  47e7b3:	d9 86 c0 00 00 00    	fld    DWORD PTR [esi+0xc0]
  47e7b9:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e7bf:	df e0                	fnstsw ax
  47e7c1:	f6 c4 41             	test   ah,0x41
  47e7c4:	74 04                	je     0x47e7ca
  47e7c6:	6a ff                	push   0xffffffff
  47e7c8:	eb 0c                	jmp    0x47e7d6
  47e7ca:	d9 86 40 01 00 00    	fld    DWORD PTR [esi+0x140]
  47e7d0:	e8 4b c3 18 00       	call   0x60ab20
  47e7d5:	50                   	push   eax
  47e7d6:	8d 4e 1c             	lea    ecx,[esi+0x1c]
  47e7d9:	e8 d2 59 f8 ff       	call   0x4041b0
  47e7de:	d9 86 e0 00 00 00    	fld    DWORD PTR [esi+0xe0]
  47e7e4:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e7ea:	df e0                	fnstsw ax
  47e7ec:	f6 c4 41             	test   ah,0x41
  47e7ef:	74 04                	je     0x47e7f5
  47e7f1:	6a ff                	push   0xffffffff
  47e7f3:	eb 0c                	jmp    0x47e801
  47e7f5:	d9 86 e4 00 00 00    	fld    DWORD PTR [esi+0xe4]
  47e7fb:	e8 20 c3 18 00       	call   0x60ab20
  47e800:	50                   	push   eax
  47e801:	8d 8e d0 00 00 00    	lea    ecx,[esi+0xd0]
  47e807:	e8 a4 59 f8 ff       	call   0x4041b0
  47e80c:	d9 86 fc 00 00 00    	fld    DWORD PTR [esi+0xfc]
  47e812:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  47e818:	df e0                	fnstsw ax
  47e81a:	f6 c4 41             	test   ah,0x41
  47e81d:	74 04                	je     0x47e823
  47e81f:	6a ff                	push   0xffffffff
  47e821:	eb 0c                	jmp    0x47e82f
  47e823:	d9 86 00 01 00 00    	fld    DWORD PTR [esi+0x100]
  47e829:	e8 f2 c2 18 00       	call   0x60ab20
  47e82e:	50                   	push   eax
  47e82f:	8d 8e ec 00 00 00    	lea    ecx,[esi+0xec]
  47e835:	e8 76 59 f8 ff       	call   0x4041b0
  47e83a:	6a ff                	push   0xffffffff
  47e83c:	8d 8e 84 00 00 00    	lea    ecx,[esi+0x84]
  47e842:	e8 69 59 f8 ff       	call   0x4041b0
  47e847:	5e                   	pop    esi
  47e848:	c3                   	ret
  47e849:	90                   	nop
  47e84a:	90                   	nop
  47e84b:	90                   	nop
  47e84c:	90                   	nop
  47e84d:	90                   	nop
  47e84e:	90                   	nop
  47e84f:	90                   	nop
  47e850:	83 ec 3c             	sub    esp,0x3c
  47e853:	53                   	push   ebx
  47e854:	56                   	push   esi
  47e855:	8b f1                	mov    esi,ecx
  47e857:	32 db                	xor    bl,bl
  47e859:	38 5e 6c             	cmp    BYTE PTR [esi+0x6c],bl
  47e85c:	0f 84 fa 01 00 00    	je     0x47ea5c
  47e862:	38 5e 5c             	cmp    BYTE PTR [esi+0x5c],bl
  47e865:	75 0b                	jne    0x47e872
  47e867:	88 5e 6c             	mov    BYTE PTR [esi+0x6c],bl
  47e86a:	5e                   	pop    esi
  47e86b:	5b                   	pop    ebx
  47e86c:	83 c4 3c             	add    esp,0x3c
  47e86f:	c2 04 00             	ret    0x4
  47e872:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
  47e875:	8b 56 54             	mov    edx,DWORD PTR [esi+0x54]
  47e878:	55                   	push   ebp
  47e879:	8b 6c 24 4c          	mov    ebp,DWORD PTR [esp+0x4c]
  47e87d:	8d 48 ff             	lea    ecx,[eax-0x1]
  47e880:	57                   	push   edi
  47e881:	3b d1                	cmp    edx,ecx
  47e883:	c7 86 c4 00 00 00 00 	mov    DWORD PTR [esi+0xc4],0x41a00000
  47e88a:	00 a0 41 
  47e88d:	7c 77                	jl     0x47e906
  47e88f:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
  47e892:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e896:	8d 04 40             	lea    eax,[eax+eax*2]
  47e899:	52                   	push   edx
  47e89a:	8d 56 04             	lea    edx,[esi+0x4]
  47e89d:	8d 4c 81 f4          	lea    ecx,[ecx+eax*4-0xc]
  47e8a1:	e8 3a 47 13 00       	call   0x5b2fe0
  47e8a6:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47e8aa:	e8 71 46 13 00       	call   0x5b2f20
  47e8af:	dd d8                	fstp   st(0)
  47e8b1:	55                   	push   ebp
  47e8b2:	e8 79 b5 f8 ff       	call   0x409e30
  47e8b7:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  47e8bd:	83 c4 04             	add    esp,0x4
  47e8c0:	d8 15 54 a3 64 00    	fcom   DWORD PTR ds:0x64a354
  47e8c6:	df e0                	fnstsw ax
  47e8c8:	f6 c4 41             	test   ah,0x41
  47e8cb:	75 08                	jne    0x47e8d5
  47e8cd:	dd d8                	fstp   st(0)
  47e8cf:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e8d5:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  47e8db:	d8 e1                	fsub   st,st(1)
  47e8dd:	51                   	push   ecx
  47e8de:	8d 7e 10             	lea    edi,[esi+0x10]
  47e8e1:	8b d7                	mov    edx,edi
  47e8e3:	8b cf                	mov    ecx,edi
  47e8e5:	d9 1c 24             	fstp   DWORD PTR [esp]
  47e8e8:	dd d8                	fstp   st(0)
  47e8ea:	e8 b1 46 13 00       	call   0x5b2fa0
  47e8ef:	8b cf                	mov    ecx,edi
  47e8f1:	e8 da 46 13 00       	call   0x5b2fd0
  47e8f6:	d8 1d 04 e3 64 00    	fcomp  DWORD PTR ds:0x64e304
  47e8fc:	df e0                	fnstsw ax
  47e8fe:	f6 c4 01             	test   ah,0x1
  47e901:	74 03                	je     0x47e906
  47e903:	88 5e 7a             	mov    BYTE PTR [esi+0x7a],bl
  47e906:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
  47e909:	8b 4e 4c             	mov    ecx,DWORD PTR [esi+0x4c]
  47e90c:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  47e910:	8d 5e 04             	lea    ebx,[esi+0x4]
  47e913:	8d 04 40             	lea    eax,[eax+eax*2]
  47e916:	52                   	push   edx
  47e917:	8b d3                	mov    edx,ebx
  47e919:	8d 0c 81             	lea    ecx,[ecx+eax*4]
  47e91c:	e8 bf 46 13 00       	call   0x5b2fe0
  47e921:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  47e925:	e8 f6 45 13 00       	call   0x5b2f20
  47e92a:	d8 96 c4 00 00 00    	fcom   DWORD PTR [esi+0xc4]
  47e930:	df e0                	fnstsw ax
  47e932:	f6 c4 01             	test   ah,0x1
  47e935:	74 0f                	je     0x47e946
  47e937:	8b 56 50             	mov    edx,DWORD PTR [esi+0x50]
  47e93a:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
  47e93d:	4a                   	dec    edx
  47e93e:	3b c2                	cmp    eax,edx
  47e940:	7d 04                	jge    0x47e946
  47e942:	40                   	inc    eax
  47e943:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
  47e946:	d9 05 f0 e2 64 00    	fld    DWORD PTR ds:0x64e2f0
  47e94c:	d8 c9                	fmul   st,st(1)
  47e94e:	de c9                	fmulp  st(1),st
  47e950:	d9 56 3c             	fst    DWORD PTR [esi+0x3c]
  47e953:	d8 1d f4 e2 64 00    	fcomp  DWORD PTR ds:0x64e2f4
  47e959:	df e0                	fnstsw ax
  47e95b:	f6 c4 41             	test   ah,0x41
  47e95e:	75 08                	jne    0x47e968
