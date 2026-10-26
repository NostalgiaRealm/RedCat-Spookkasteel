
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004775b0 <.text+0x765b0>:
  4775b0:	83 ec 64             	sub    esp,0x64
  4775b3:	8d 81 b0 14 00 00    	lea    eax,[ecx+0x14b0]
  4775b9:	53                   	push   ebx
  4775ba:	55                   	push   ebp
  4775bb:	56                   	push   esi
  4775bc:	8b 10                	mov    edx,DWORD PTR [eax]
  4775be:	57                   	push   edi
  4775bf:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  4775c3:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
  4775ca:	00 
  4775cb:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4775ce:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
  4775d2:	89 54 24 6c          	mov    DWORD PTR [esp+0x6c],edx
  4775d6:	8b 15 28 e1 64 00    	mov    edx,DWORD PTR ds:0x64e128
  4775dc:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4775df:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  4775e3:	8b 15 30 e1 64 00    	mov    edx,DWORD PTR ds:0x64e130
  4775e9:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
  4775ed:	a1 2c e1 64 00       	mov    eax,ds:0x64e12c
  4775f2:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  4775f6:	8b 15 34 e1 64 00    	mov    edx,DWORD PTR ds:0x64e134
  4775fc:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  477600:	a1 3c 87 6b 00       	mov    eax,ds:0x6b873c
  477605:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
  47760c:	00 
  47760d:	8b 7c 24 30          	mov    edi,DWORD PTR [esp+0x30]
  477611:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
  477618:	00 
  477619:	8b 6c 24 34          	mov    ebp,DWORD PTR [esp+0x34]
  47761d:	c7 44 24 5c 00 00 00 	mov    DWORD PTR [esp+0x5c],0x0
  477624:	00 
  477625:	c7 44 24 60 cd cc 4c 	mov    DWORD PTR [esp+0x60],0x3d4ccccd
  47762c:	3d 
  47762d:	c7 44 24 64 00 00 00 	mov    DWORD PTR [esp+0x64],0x0
  477634:	00 
  477635:	c7 44 24 50 00 00 a0 	mov    DWORD PTR [esp+0x50],0x41a00000
  47763c:	41 
  47763d:	c7 44 24 54 00 00 a0 	mov    DWORD PTR [esp+0x54],0x41a00000
  477644:	41 
  477645:	c7 44 24 58 00 00 a0 	mov    DWORD PTR [esp+0x58],0x41a00000
  47764c:	41 
  47764d:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
  477651:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  477655:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
  47765c:	00 
  47765d:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  477664:	00 
  477665:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  47766c:	00 
  47766d:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  477674:	00 
  477675:	c7 44 24 3c 00 00 00 	mov    DWORD PTR [esp+0x3c],0x0
  47767c:	00 
  47767d:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  477684:	00 
  477685:	c7 44 24 10 00 00 00 	mov    DWORD PTR [esp+0x10],0x0
  47768c:	00 
  47768d:	8d b1 08 01 00 00    	lea    esi,[ecx+0x108]
  477693:	c7 44 24 14 0f 00 00 	mov    DWORD PTR [esp+0x14],0xf
  47769a:	00 
  47769b:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  47769f:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  4776a3:	50                   	push   eax
  4776a4:	8b 44 24 40          	mov    eax,DWORD PTR [esp+0x40]
  4776a8:	83 ec 0c             	sub    esp,0xc
  4776ab:	8b cc                	mov    ecx,esp
  4776ad:	83 ec 0c             	sub    esp,0xc
  4776b0:	89 11                	mov    DWORD PTR [ecx],edx
  4776b2:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  4776b6:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  4776b9:	8b c4                	mov    eax,esp
  4776bb:	6a 01                	push   0x1
  4776bd:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  4776c0:	8b 4c 24 64          	mov    ecx,DWORD PTR [esp+0x64]
  4776c4:	8b 54 24 68          	mov    edx,DWORD PTR [esp+0x68]
  4776c8:	89 08                	mov    DWORD PTR [eax],ecx
  4776ca:	8b 4c 24 6c          	mov    ecx,DWORD PTR [esp+0x6c]
  4776ce:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  4776d1:	8b 54 24 38          	mov    edx,DWORD PTR [esp+0x38]
  4776d5:	52                   	push   edx
  4776d6:	6a 00                	push   0x0
  4776d8:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  4776db:	8b 44 24 44          	mov    eax,DWORD PTR [esp+0x44]
  4776df:	6a 00                	push   0x0
  4776e1:	8b 54 24 7c          	mov    edx,DWORD PTR [esp+0x7c]
  4776e5:	50                   	push   eax
  4776e6:	6a 00                	push   0x0
  4776e8:	6a 00                	push   0x0
  4776ea:	8b 84 24 8c 00 00 00 	mov    eax,DWORD PTR [esp+0x8c]
  4776f1:	83 ec 0c             	sub    esp,0xc
  4776f4:	8b cc                	mov    ecx,esp
  4776f6:	6a 00                	push   0x0
  4776f8:	89 11                	mov    DWORD PTR [ecx],edx
  4776fa:	8b 94 24 a0 00 00 00 	mov    edx,DWORD PTR [esp+0xa0]
  477701:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  477704:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  477708:	50                   	push   eax
  477709:	8b 84 24 a8 00 00 00 	mov    eax,DWORD PTR [esp+0xa8]
  477710:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  477713:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  477717:	51                   	push   ecx
  477718:	6a 00                	push   0x0
  47771a:	68 00 00 48 42       	push   0x42480000
  47771f:	8b 8c 24 b8 00 00 00 	mov    ecx,DWORD PTR [esp+0xb8]
  477726:	83 ec 0c             	sub    esp,0xc
  477729:	8b d4                	mov    edx,esp
  47772b:	6a 02                	push   0x2
  47772d:	6a 00                	push   0x0
  47772f:	89 02                	mov    DWORD PTR [edx],eax
  477731:	8b 84 24 d0 00 00 00 	mov    eax,DWORD PTR [esp+0xd0]
  477738:	6a 00                	push   0x0
  47773a:	6a 00                	push   0x0
  47773c:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  47773f:	8b 8c 24 9c 00 00 00 	mov    ecx,DWORD PTR [esp+0x9c]
  477746:	51                   	push   ecx
  477747:	8b 8c 24 e0 00 00 00 	mov    ecx,DWORD PTR [esp+0xe0]
  47774e:	83 ec 0c             	sub    esp,0xc
  477751:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
  477754:	8b d4                	mov    edx,esp
  477756:	83 ec 0c             	sub    esp,0xc
  477759:	8b c4                	mov    eax,esp
  47775b:	89 1a                	mov    DWORD PTR [edx],ebx
  47775d:	89 7a 04             	mov    DWORD PTR [edx+0x4],edi
  477760:	89 6a 08             	mov    DWORD PTR [edx+0x8],ebp
  477763:	8b 94 24 fc 00 00 00 	mov    edx,DWORD PTR [esp+0xfc]
  47776a:	89 08                	mov    DWORD PTR [eax],ecx
  47776c:	8b 8c 24 00 01 00 00 	mov    ecx,DWORD PTR [esp+0x100]
  477773:	89 50 04             	mov    DWORD PTR [eax+0x4],edx
  477776:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
  477779:	8b ce                	mov    ecx,esi
  47777b:	e8 e0 63 00 00       	call   0x47db60
  477780:	d9 44 24 10          	fld    DWORD PTR [esp+0x10]
  477784:	d8 05 c8 e1 64 00    	fadd   DWORD PTR ds:0x64e1c8
  47778a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  47778e:	81 c6 50 01 00 00    	add    esi,0x150
  477794:	48                   	dec    eax
  477795:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  477799:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
  47779d:	0f 85 f8 fe ff ff    	jne    0x47769b
  4777a3:	5f                   	pop    edi
  4777a4:	5e                   	pop    esi
  4777a5:	5d                   	pop    ebp
  4777a6:	5b                   	pop    ebx
  4777a7:	83 c4 64             	add    esp,0x64
  4777aa:	c3                   	ret
