
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00475720 <.text+0x74720>:
  475720:	51                   	push   ecx
  475721:	56                   	push   esi
  475722:	8b f1                	mov    esi,ecx
  475724:	57                   	push   edi
  475725:	bf 01 00 00 00       	mov    edi,0x1
  47572a:	39 be 54 49 01 00    	cmp    DWORD PTR [esi+0x14954],edi
  475730:	0f 84 cc 01 00 00    	je     0x475902
  475736:	53                   	push   ebx
  475737:	33 db                	xor    ebx,ebx
  475739:	c6 86 1c 49 01 00 01 	mov    BYTE PTR [esi+0x1491c],0x1
  475740:	88 9e 94 49 01 00    	mov    BYTE PTR [esi+0x14994],bl
  475746:	88 9e a8 49 01 00    	mov    BYTE PTR [esi+0x149a8],bl
  47574c:	88 9e c4 49 01 00    	mov    BYTE PTR [esi+0x149c4],bl
  475752:	a1 24 e0 64 00       	mov    eax,ds:0x64e024
  475757:	55                   	push   ebp
  475758:	8d 8e 78 03 00 00    	lea    ecx,[esi+0x378]
  47575e:	89 86 c8 49 01 00    	mov    DWORD PTR [esi+0x149c8],eax
  475764:	e8 a7 8f 00 00       	call   0x47e710
  475769:	8b 96 f8 00 00 00    	mov    edx,DWORD PTR [esi+0xf8]
  47576f:	8d 8e 7c 03 00 00    	lea    ecx,[esi+0x37c]
  475775:	53                   	push   ebx
  475776:	8b 02                	mov    eax,DWORD PTR [edx]
  475778:	89 01                	mov    DWORD PTR [ecx],eax
  47577a:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
  47577d:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  475780:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  475783:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  475786:	8d 8e 1c 48 01 00    	lea    ecx,[esi+0x1481c]
  47578c:	e8 1f ea f8 ff       	call   0x4041b0
  475791:	d9 86 74 48 01 00    	fld    DWORD PTR [esi+0x14874]
  475797:	e8 84 53 19 00       	call   0x60ab20
  47579c:	50                   	push   eax
  47579d:	8d 8e 3c 48 01 00    	lea    ecx,[esi+0x1483c]
  4757a3:	e8 08 ea f8 ff       	call   0x4041b0
  4757a8:	89 9e 78 48 01 00    	mov    DWORD PTR [esi+0x14878],ebx
  4757ae:	a1 00 e0 64 00       	mov    eax,ds:0x64e000
  4757b3:	89 be 54 49 01 00    	mov    DWORD PTR [esi+0x14954],edi
  4757b9:	89 86 80 48 01 00    	mov    DWORD PTR [esi+0x14880],eax
  4757bf:	8d be 74 06 00 00    	lea    edi,[esi+0x674]
  4757c5:	bd fa 00 00 00       	mov    ebp,0xfa
  4757ca:	38 9f 2c ff ff ff    	cmp    BYTE PTR [edi-0xd4],bl
  4757d0:	74 3b                	je     0x47580d
  4757d2:	89 9f 18 ff ff ff    	mov    DWORD PTR [edi-0xe8],ebx
  4757d8:	d9 05 88 86 6b 00    	fld    DWORD PTR ds:0x6b8688
  4757de:	d9 57 80             	fst    DWORD PTR [edi-0x80]
  4757e1:	d8 0d 9c b7 64 00    	fmul   DWORD PTR ds:0x64b79c
  4757e7:	e8 34 53 19 00       	call   0x60ab20
  4757ec:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  4757f0:	8d 8f c0 fe ff ff    	lea    ecx,[edi-0x140]
  4757f6:	db 44 24 10          	fild   DWORD PTR [esp+0x10]
  4757fa:	d9 1f                	fstp   DWORD PTR [edi]
  4757fc:	d9 05 88 86 6b 00    	fld    DWORD PTR ds:0x6b8688
  475802:	d9 9f 7c ff ff ff    	fstp   DWORD PTR [edi-0x84]
  475808:	e8 73 8f 00 00       	call   0x47e780
  47580d:	81 c7 44 01 00 00    	add    edi,0x144
  475813:	4d                   	dec    ebp
  475814:	75 b4                	jne    0x4757ca
  475816:	8b 8e 80 49 01 00    	mov    ecx,DWORD PTR [esi+0x14980]
  47581c:	8b                   	.byte 0x8b
  47581d:	96                   	xchg   esi,eax
  47581e:	18                   	.byte 0x18
  47581f:	48                   	dec    eax
