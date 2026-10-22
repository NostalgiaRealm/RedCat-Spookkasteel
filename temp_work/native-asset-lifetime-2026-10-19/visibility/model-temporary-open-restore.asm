; Original complete assembly excerpt
; source line286949
  4d1fd0:	56                   	push   esi
; source line286950
  4d1fd1:	8b f1                	mov    esi,ecx
; source line286951
  4d1fd3:	6a 01                	push   0x1
; source line286952
  4d1fd5:	8a 86 34 01 00 00    	mov    al,BYTE PTR [esi+0x134]
; source line286953
  4d1fdb:	88 86 35 01 00 00    	mov    BYTE PTR [esi+0x135],al
; source line286954
  4d1fe1:	e8 0a fe ff ff       	call   0x4d1df0
; source line286955
  4d1fe6:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
; source line286956
  4d1fea:	51                   	push   ecx
; source line286957
  4d1feb:	8b ce                	mov    ecx,esi
; source line286958
  4d1fed:	e8 8e 06 03 00       	call   0x502680
; source line286959
  4d1ff2:	5e                   	pop    esi
; source line286960
  4d1ff3:	c2 04 00             	ret    0x4
; source line286961
  4d1ff6:	90                   	nop
; source line286962
  4d1ff7:	90                   	nop
; source line286963
  4d1ff8:	90                   	nop
; source line286964
  4d1ff9:	90                   	nop
; source line286965
  4d1ffa:	90                   	nop
; source line286966
  4d1ffb:	90                   	nop
; source line286967
  4d1ffc:	90                   	nop
; source line286968
  4d1ffd:	90                   	nop
; source line286969
  4d1ffe:	90                   	nop
; source line286970
  4d1fff:	90                   	nop
; source line286971
  4d2000:	56                   	push   esi
; source line286972
  4d2001:	8b f1                	mov    esi,ecx
; source line286973
  4d2003:	e8 08 07 03 00       	call   0x502710
; source line286974
  4d2008:	8a 86 35 01 00 00    	mov    al,BYTE PTR [esi+0x135]
; source line286975
  4d200e:	8b ce                	mov    ecx,esi
; source line286976
  4d2010:	50                   	push   eax
; source line286977
  4d2011:	e8 da fd ff ff       	call   0x4d1df0
; source line286978
  4d2016:	5e                   	pop    esi
; source line286979
  4d2017:	c3                   	ret
