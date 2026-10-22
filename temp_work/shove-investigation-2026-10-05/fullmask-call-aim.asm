
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

0043539e <.text+0x3439e>:
  43539e:	50                   	push   eax
  43539f:	e8 4e 53 1d 00       	call   0x60a6f2
  4353a4:	83 c4 14             	add    esp,0x14
  4353a7:	8b c8                	mov    ecx,eax
  4353a9:	e8 b2 cf 05 00       	call   0x492360
  4353ae:	8b 97 f0 01 00 00    	mov    edx,DWORD PTR [edi+0x1f0]
  4353b4:	6a 00                	push   0x0
  4353b6:	68 40 f9 68 00       	push   0x68f940
  4353bb:	68 18 f9 68 00       	push   0x68f918
  4353c0:	6a 00                	push   0x0
  4353c2:	52                   	push   edx
  4353c3:	8b f0                	mov    esi,eax
  4353c5:	e8 28 53 1d 00       	call   0x60a6f2
  4353ca:	8b f8                	mov    edi,eax
  4353cc:	8b 06                	mov    eax,DWORD PTR [esi]
  4353ce:	83 c4 14             	add    esp,0x14
  4353d1:	8b ce                	mov    ecx,esi
  4353d3:	ff 50 0c             	call   DWORD PTR [eax+0xc]
  4353d6:	84 c0                	test   al,al
  4353d8:	74 2f                	je     0x435409
  4353da:	8b cf                	mov    ecx,edi
  4353dc:	e8 4f 4b 00 00       	call   0x439f30
  4353e1:	85 c0                	test   eax,eax
  4353e3:	74 24                	je     0x435409
  4353e5:	8d 4c 24 40          	lea    ecx,[esp+0x40]
  4353e9:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  4353f0:	00 
  4353f1:	51                   	push   ecx
  4353f2:	8b cd                	mov    ecx,ebp
  4353f4:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  4353fb:	00 
  4353fc:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
  435403:	00 
  435404:	e8 67 23 00 00       	call   0x437770
