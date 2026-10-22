; Original complete assembly excerpt
; source line279410
  4cc369:	8a 86 73 01 00 00    	mov    al,BYTE PTR [esi+0x173]
; source line279411
  4cc36f:	84 c0                	test   al,al
; source line279412
  4cc371:	74 28                	je     0x4cc39b
; source line279413
  4cc373:	8b 86 3c 01 00 00    	mov    eax,DWORD PTR [esi+0x13c]
; source line279414
  4cc379:	50                   	push   eax
; source line279415
  4cc37a:	e8 f1 43 00 00       	call   0x4d0770
; source line279416
  4cc37f:	6a 01                	push   0x1
; source line279417
  4cc381:	8b ce                	mov    ecx,esi
; source line279418
  4cc383:	c7 86 6c 01 00 00 06 	mov    DWORD PTR [esi+0x16c],0x6
; source line279419
  4cc38a:	00 00 00 
; source line279420
  4cc38d:	e8 5e 0f 00 00       	call   0x4cd2f0
; source line279421
  4cc392:	8b ce                	mov    ecx,esi
; source line279422
  4cc394:	e8 27 1a 00 00       	call   0x4cddc0
; source line279423
  4cc399:	eb 28                	jmp    0x4cc3c3
; source line279424
  4cc39b:	8b 8e 40 01 00 00    	mov    ecx,DWORD PTR [esi+0x140]
; source line279425
  4cc3a1:	51                   	push   ecx
; source line279426
  4cc3a2:	8b ce                	mov    ecx,esi
; source line279427
  4cc3a4:	e8 c7 43 00 00       	call   0x4d0770
; source line279428
  4cc3a9:	6a 00                	push   0x0
; source line279429
  4cc3ab:	8b ce                	mov    ecx,esi
; source line279430
  4cc3ad:	c7 86 6c 01 00 00 01 	mov    DWORD PTR [esi+0x16c],0x1
; source line279431
  4cc3b4:	00 00 00 
; source line279432
  4cc3b7:	e8 34 0f 00 00       	call   0x4cd2f0
; source line279433
  4cc3bc:	8b ce                	mov    ecx,esi
; source line279434
  4cc3be:	e8 1d 1c 00 00       	call   0x4cdfe0
