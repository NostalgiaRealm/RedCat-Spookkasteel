
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0042b550 <.text+0x2a550>:
  42b550:	6a ff                	push   0xffffffff
  42b552:	68 98 31 62 00       	push   0x623198
  42b557:	64 a1 00 00 00 00    	mov    eax,fs:0x0
  42b55d:	50                   	push   eax
  42b55e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  42b565:	83 ec 18             	sub    esp,0x18
  42b568:	53                   	push   ebx
  42b569:	56                   	push   esi
  42b56a:	57                   	push   edi
  42b56b:	8b d9                	mov    ebx,ecx
  42b56d:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  42b571:	8d 54 24 34          	lea    edx,[esp+0x34]
  42b575:	50                   	push   eax
  42b576:	51                   	push   ecx
  42b577:	8b cc                	mov    ecx,esp
  42b579:	89 64 24 40          	mov    DWORD PTR [esp+0x40],esp
  42b57d:	52                   	push   edx
  42b57e:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  42b585:	00 
  42b586:	e8 d5 e1 01 00       	call   0x449760
  42b58b:	8b cb                	mov    ecx,ebx
  42b58d:	e8 ae 81 ff ff       	call   0x423740
  42b592:	8b 4c 24 34          	mov    ecx,DWORD PTR [esp+0x34]
  42b596:	85 c9                	test   ecx,ecx
  42b598:	74 6d                	je     0x42b607
  42b59a:	51                   	push   ecx
  42b59b:	8b c4                	mov    eax,esp
  42b59d:	89 64 24 3c          	mov    DWORD PTR [esp+0x3c],esp
  42b5a1:	89 08                	mov    DWORD PTR [eax],ecx
  42b5a3:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  42b5a7:	85 c0                	test   eax,eax
  42b5a9:	74 03                	je     0x42b5ae
  42b5ab:	ff 40 14             	inc    DWORD PTR [eax+0x14]
  42b5ae:	e8 3d 8d fe ff       	call   0x4142f0
  42b5b3:	83 c4 04             	add    esp,0x4
  42b5b6:	85 c0                	test   eax,eax
  42b5b8:	74 25                	je     0x42b5df
  42b5ba:	8d b0 1c 01 00 00    	lea    esi,[eax+0x11c]
  42b5c0:	b9 06 00 00 00       	mov    ecx,0x6
  42b5c5:	8d 7c 24 0c          	lea    edi,[esp+0xc]
  42b5c9:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  42b5cb:	d9 44 24 1c          	fld    DWORD PTR [esp+0x1c]
  42b5cf:	d8 64 24 10          	fsub   DWORD PTR [esp+0x10]
  42b5d3:	d8 0d 98 ab 64 00    	fmul   DWORD PTR ds:0x64ab98
  42b5d9:	d9 9b 2c 02 00 00    	fstp   DWORD PTR [ebx+0x22c]
  42b5df:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
  42b5e3:	c7 44 24 2c ff ff ff 	mov    DWORD PTR [esp+0x2c],0xffffffff
  42b5ea:	ff 
  42b5eb:	85 c0                	test   eax,eax
  42b5ed:	74 18                	je     0x42b607
  42b5ef:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  42b5f2:	8b c8                	mov    ecx,eax
  42b5f4:	83 c0 14             	add    eax,0x14
  42b5f7:	4e                   	dec    esi
  42b5f8:	8b d6                	mov    edx,esi
  42b5fa:	85 d2                	test   edx,edx
  42b5fc:	89 30                	mov    DWORD PTR [eax],esi
  42b5fe:	75 07                	jne    0x42b607
  42b600:	6a 00                	push   0x0
  42b602:	e8 b9 09 18 00       	call   0x5abfc0
  42b607:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  42b60b:	5f                   	pop    edi
  42b60c:	5e                   	pop    esi
  42b60d:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  42b614:	5b                   	pop    ebx
  42b615:	83 c4 24             	add    esp,0x24
  42b618:	c2 08 00             	ret    0x8
