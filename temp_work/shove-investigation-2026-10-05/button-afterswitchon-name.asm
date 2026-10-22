
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004ff900 <.text+0xfe900>:
  4ff900:	51                   	push   ecx
  4ff901:	8a 44 24 03          	mov    al,BYTE PTR [esp+0x3]
  4ff905:	53                   	push   ebx
  4ff906:	56                   	push   esi
  4ff907:	57                   	push   edi
  4ff908:	a2 28 97 6b 00       	mov    ds:0x6b9728,al
  4ff90d:	bf b0 d7 69 00       	mov    edi,0x69d7b0
  4ff912:	83 c9 ff             	or     ecx,0xffffffff
  4ff915:	33 c0                	xor    eax,eax
  4ff917:	33 d2                	xor    edx,edx
  4ff919:	33 f6                	xor    esi,esi
  4ff91b:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4ff91d:	f7 d1                	not    ecx
  4ff91f:	49                   	dec    ecx
