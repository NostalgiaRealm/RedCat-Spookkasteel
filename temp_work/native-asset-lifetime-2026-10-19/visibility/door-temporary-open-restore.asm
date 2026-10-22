; Original complete assembly excerpt
; source line280993
  4cd7a0:	56                   	push   esi
; source line280994
  4cd7a1:	8b f1                	mov    esi,ecx
; source line280995
  4cd7a3:	6a 01                	push   0x1
; source line280996
  4cd7a5:	8a 86 68 01 00 00    	mov    al,BYTE PTR [esi+0x168]
; source line280997
  4cd7ab:	88 86 69 01 00 00    	mov    BYTE PTR [esi+0x169],al
; source line280998
  4cd7b1:	e8 3a fb ff ff       	call   0x4cd2f0
; source line280999
  4cd7b6:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
; source line281000
  4cd7ba:	51                   	push   ecx
; source line281001
  4cd7bb:	8b ce                	mov    ecx,esi
; source line281002
  4cd7bd:	e8 0e 48 00 00       	call   0x4d1fd0
; source line281003
  4cd7c2:	5e                   	pop    esi
; source line281004
  4cd7c3:	c2 04 00             	ret    0x4
; source line281005
  4cd7c6:	90                   	nop
; source line281006
  4cd7c7:	90                   	nop
; source line281007
  4cd7c8:	90                   	nop
; source line281008
  4cd7c9:	90                   	nop
; source line281009
  4cd7ca:	90                   	nop
; source line281010
  4cd7cb:	90                   	nop
; source line281011
  4cd7cc:	90                   	nop
; source line281012
  4cd7cd:	90                   	nop
; source line281013
  4cd7ce:	90                   	nop
; source line281014
  4cd7cf:	90                   	nop
; source line281015
  4cd7d0:	56                   	push   esi
; source line281016
  4cd7d1:	8b f1                	mov    esi,ecx
; source line281017
  4cd7d3:	e8 28 48 00 00       	call   0x4d2000
; source line281018
  4cd7d8:	8a 86 69 01 00 00    	mov    al,BYTE PTR [esi+0x169]
; source line281019
  4cd7de:	8b ce                	mov    ecx,esi
; source line281020
  4cd7e0:	50                   	push   eax
; source line281021
  4cd7e1:	e8 0a fb ff ff       	call   0x4cd2f0
; source line281022
  4cd7e6:	5e                   	pop    esi
; source line281023
  4cd7e7:	c3                   	ret
