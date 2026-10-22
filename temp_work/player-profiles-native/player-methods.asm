
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcMenu.dat:     file format pei-i386


Disassembly of section CODE:

00554300 <CODE+0x153300>:
  554300:	65 05 00 12 00 34    	gs add eax,0x34001200
  554306:	44                   	inc    esp
  554307:	55                   	push   ebp
  554308:	00 0b                	add    BYTE PTR [ebx],cl
  55430a:	47                   	inc    edi
  55430b:	44                   	inc    esp
  55430c:	49                   	dec    ecx
  55430d:	46                   	inc    esi
  55430e:	6f                   	outs   dx,DWORD PTR ds:[esi]
  55430f:	72 6d                	jb     0x55437e
  554311:	53                   	push   ebx
  554312:	68 6f 77 16 00       	push   0x16776f
  554317:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
  554318:	45                   	inc    ebp
  554319:	55                   	push   ebp
  55431a:	00 0f                	add    BYTE PTR [edi],cl
  55431c:	62 74 6e 52          	bound  esi,QWORD PTR [esi+ebp*2+0x52]
  554320:	65 71 48             	gs jno 0x55436b
  554323:	65 6c                	gs ins BYTE PTR es:[edi],dx
  554325:	70 43                	jo     0x55436a
  554327:	6c                   	ins    BYTE PTR es:[edi],dx
  554328:	69 63 6b 14 00 d0 45 	imul   esp,DWORD PTR [ebx+0x6b],0x45d00014
  55432f:	55                   	push   ebp
  554330:	00 0d 62 74 6e 52    	add    BYTE PTR ds:0x526e7462,cl
  554336:	65 71 4f             	gs jno 0x554388
  554339:	6b 43 6c 69          	imul   eax,DWORD PTR [ebx+0x6c],0x69
  55433d:	63 6b 18             	arpl   WORD PTR [ebx+0x18],ebp
  554340:	00 28                	add    BYTE PTR [eax],ch
  554342:	46                   	inc    esi
  554343:	55                   	push   ebp
  554344:	00 11                	add    BYTE PTR [ecx],dl
  554346:	62 74 6e 52          	bound  esi,QWORD PTR [esi+ebp*2+0x52]
  55434a:	65 71 43             	gs jno 0x554390
  55434d:	61                   	popa
  55434e:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55434f:	63 65 6c             	arpl   WORD PTR [ebp+0x6c],esp
  554352:	43                   	inc    ebx
  554353:	6c                   	ins    BYTE PTR es:[edi],dx
  554354:	69 63 6b 1a 00 80 46 	imul   esp,DWORD PTR [ebx+0x6b],0x4680001a
  55435b:	55                   	push   ebp
  55435c:	00 13                	add    BYTE PTR [ebx],dl
  55435e:	74 78                	je     0x5543d8
  554360:	74 50                	je     0x5543b2
  554362:	6c                   	ins    BYTE PTR es:[edi],dx
  554363:	61                   	popa
  554364:	79 65                	jns    0x5543cb
  554366:	72 4e                	jb     0x5543b6
  554368:	61                   	popa
  554369:	6d                   	ins    DWORD PTR es:[edi],dx
  55436a:	65 43                	gs inc ebx
  55436c:	68 61 6e 67 65       	push   0x65676e61
  554371:	0e                   	push   cs
  554372:	54                   	push   esp
  554373:	66 72 6d             	data16 jb 0x5543e3
  554376:	50                   	push   eax
  554377:	6c                   	ins    BYTE PTR es:[edi],dx
  554378:	61                   	popa
  554379:	79 65                	jns    0x5543e0
  55437b:	72 4e                	jb     0x5543cb
  55437d:	61                   	popa
  55437e:	6d                   	ins    DWORD PTR es:[edi],dx
  55437f:	65 02 00             	add    al,BYTE PTR gs:[eax]
  554382:	40                   	inc    eax
  554383:	50                   	push   eax
  554384:	42                   	inc    edx
  554385:	00 68 58             	add    BYTE PTR [eax+0x58],ch
  554388:	42                   	inc    edx
  554389:	00 8b c0 90 43 55    	add    BYTE PTR [ebx+0x554390c0],cl
  55438f:	00 07                	add    BYTE PTR [edi],al
  554391:	0e                   	push   cs
  554392:	54                   	push   esp
  554393:	66 72 6d             	data16 jb 0x554403
  554396:	50                   	push   eax
  554397:	6c                   	ins    BYTE PTR es:[edi],dx
  554398:	61                   	popa
  554399:	79 65                	jns    0x554400
  55439b:	72 4e                	jb     0x5543eb
  55439d:	61                   	popa
  55439e:	6d                   	ins    DWORD PTR es:[edi],dx
  55439f:	65 f0 41             	gs lock inc ecx
  5543a2:	55                   	push   ebp
  5543a3:	00 14 ea             	add    BYTE PTR [edx+ebp*8],dl
  5543a6:	54                   	push   esp
  5543a7:	00 5a 00             	add    BYTE PTR [edx+0x0],bl
  5543aa:	0e                   	push   cs
  5543ab:	46                   	inc    esi
  5543ac:	6f                   	outs   dx,DWORD PTR ds:[esi]
  5543ad:	72 6d                	jb     0x55441c
  5543af:	50                   	push   eax
  5543b0:	6c                   	ins    BYTE PTR es:[edi],dx
  5543b1:	61                   	popa
  5543b2:	79 65                	jns    0x554419
  5543b4:	72 4e                	jb     0x554404
  5543b6:	61                   	popa
  5543b7:	6d                   	ins    DWORD PTR es:[edi],dx
  5543b8:	65 00 00             	add    BYTE PTR gs:[eax],al
  5543bb:	90                   	nop
  5543bc:	55                   	push   ebp
  5543bd:	8b ec                	mov    ebp,esp
  5543bf:	83 c4 f4             	add    esp,0xfffffff4
  5543c2:	84 d2                	test   dl,dl
  5543c4:	74 08                	je     0x5543ce
  5543c6:	83 c4 f0             	add    esp,0xfffffff0
  5543c9:	e8 06 f0 ea ff       	call   0x4033d4
  5543ce:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  5543d1:	88 55 fb             	mov    BYTE PTR [ebp-0x5],dl
  5543d4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5543d7:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5543dc:	8b 00                	mov    eax,DWORD PTR [eax]
  5543de:	8b 80 28 01 00 00    	mov    eax,DWORD PTR [eax+0x128]
  5543e4:	50                   	push   eax
  5543e5:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  5543e8:	33 d2                	xor    edx,edx
  5543ea:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5543ed:	e8 52 a8 ff ff       	call   0x54ec44
  5543f2:	33 d2                	xor    edx,edx
  5543f4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5543f7:	8b 80 00 03 00 00    	mov    eax,DWORD PTR [eax+0x300]
  5543fd:	e8 42 e3 ed ff       	call   0x432744
  554402:	33 d2                	xor    edx,edx
  554404:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554407:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55440d:	e8 1a e2 ed ff       	call   0x43262c
  554412:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554415:	80 7d fb 00          	cmp    BYTE PTR [ebp-0x5],0x0
  554419:	74 0f                	je     0x55442a
  55441b:	e8 0c f0 ea ff       	call   0x40342c
  554420:	64 8f 05 00 00 00 00 	pop    DWORD PTR fs:0x0
  554427:	83 c4 0c             	add    esp,0xc
  55442a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55442d:	8b e5                	mov    esp,ebp
  55442f:	5d                   	pop    ebp
  554430:	c3                   	ret
  554431:	8d 40 00             	lea    eax,[eax+0x0]
  554434:	55                   	push   ebp
  554435:	8b ec                	mov    ebp,esp
  554437:	83 c4 e4             	add    esp,0xffffffe4
  55443a:	33 c9                	xor    ecx,ecx
  55443c:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  55443f:	89 4d e4             	mov    DWORD PTR [ebp-0x1c],ecx
  554442:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  554445:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  554448:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55444b:	33 c0                	xor    eax,eax
  55444d:	55                   	push   ebp
  55444e:	68 89 45 55 00       	push   0x554589
  554453:	64 ff 30             	push   DWORD PTR fs:[eax]
  554456:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  554459:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55445c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55445f:	e8 04 aa ff ff       	call   0x54ee68
  554464:	33 d2                	xor    edx,edx
  554466:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554469:	8b 80 00 03 00 00    	mov    eax,DWORD PTR [eax+0x300]
  55446f:	e8 d0 e2 ed ff       	call   0x432744
  554474:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55447a:	8b 52 1c             	mov    edx,DWORD PTR [edx+0x1c]
  55447d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554480:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  554486:	e8 b9 e2 ed ff       	call   0x432744
  55448b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55448e:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  554494:	e8 2b 53 ed ff       	call   0x4297c4
  554499:	8d 55 f4             	lea    edx,[ebp-0xc]
  55449c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55449f:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  5544a5:	e8 6a e2 ed ff       	call   0x432714
  5544aa:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  5544ae:	0f 95 c2             	setne  dl
  5544b1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5544b4:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  5544ba:	8b 08                	mov    ecx,DWORD PTR [eax]
  5544bc:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5544bf:	8d 45 f0             	lea    eax,[ebp-0x10]
  5544c2:	50                   	push   eax
  5544c3:	8d 55 e4             	lea    edx,[ebp-0x1c]
  5544c6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5544c9:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  5544cf:	e8 40 e2 ed ff       	call   0x432714
  5544d4:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
  5544d7:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  5544da:	c6 45 ec 0b          	mov    BYTE PTR [ebp-0x14],0xb
  5544de:	8d 55 e8             	lea    edx,[ebp-0x18]
  5544e1:	a1 04 24 57 00       	mov    eax,ds:0x572404
  5544e6:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
  5544e9:	33 c9                	xor    ecx,ecx
  5544eb:	e8 a4 63 eb ff       	call   0x40a894
  5544f0:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
  5544f3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5544f6:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  5544fc:	e8 43 e2 ed ff       	call   0x432744
  554501:	b2 01                	mov    dl,0x1
  554503:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554506:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55450c:	e8 1b e1 ed ff       	call   0x43262c
  554511:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554514:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55451a:	8b 10                	mov    edx,DWORD PTR [eax]
  55451c:	ff 92 b0 00 00 00    	call   DWORD PTR [edx+0xb0]
  554522:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554525:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55452b:	e8 94 52 ed ff       	call   0x4297c4
  554530:	33 d2                	xor    edx,edx
  554532:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554535:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  55453b:	e8 ec e0 ed ff       	call   0x43262c
  554540:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554545:	8b 00                	mov    eax,DWORD PTR [eax]
  554547:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55454d:	e8 8a ba ff ff       	call   0x54ffdc
  554552:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554557:	8b 00                	mov    eax,DWORD PTR [eax]
  554559:	ba 9c 45 55 00       	mov    edx,0x55459c
  55455e:	e8 09 57 01 00       	call   0x569c6c
  554563:	33 c0                	xor    eax,eax
  554565:	5a                   	pop    edx
  554566:	59                   	pop    ecx
  554567:	59                   	pop    ecx
  554568:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55456b:	68 90 45 55 00       	push   0x554590
  554570:	8d 45 e4             	lea    eax,[ebp-0x1c]
  554573:	e8 38 f8 ea ff       	call   0x403db0
  554578:	8d 45 f0             	lea    eax,[ebp-0x10]
  55457b:	e8 30 f8 ea ff       	call   0x403db0
  554580:	8d 45 f4             	lea    eax,[ebp-0xc]
  554583:	e8 28 f8 ea ff       	call   0x403db0
  554588:	c3                   	ret
  554589:	e9 66 f2 ea ff       	jmp    0x4037f4
  55458e:	eb e0                	jmp    0x554570
  554590:	8b e5                	mov    esp,ebp
  554592:	5d                   	pop    ebp
  554593:	c3                   	ret
  554594:	ff                   	(bad)
  554595:	ff                   	(bad)
  554596:	ff                   	(bad)
  554597:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  55459d:	63 4d 6e             	arpl   WORD PTR [ebp+0x6e],ecx
  5545a0:	37                   	aaa
  5545a1:	00 00                	add    BYTE PTR [eax],al
  5545a3:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  5545a6:	ec                   	in     al,dx
  5545a7:	83 c4 f8             	add    esp,0xfffffff8
  5545aa:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5545ad:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5545b0:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5545b3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5545b6:	e8 29 a9 ff ff       	call   0x54eee4
  5545bb:	a1 fc 23 57 00       	mov    eax,ds:0x5723fc
  5545c0:	8b 00                	mov    eax,DWORD PTR [eax]
  5545c2:	ba 14 00 00 00       	mov    edx,0x14
  5545c7:	e8 74 d2 ef ff       	call   0x451840
  5545cc:	59                   	pop    ecx
  5545cd:	59                   	pop    ecx
  5545ce:	5d                   	pop    ebp
  5545cf:	c3                   	ret
  5545d0:	55                   	push   ebp
  5545d1:	8b ec                	mov    ebp,esp
  5545d3:	83 c4 f8             	add    esp,0xfffffff8
  5545d6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5545d9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5545dc:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5545df:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5545e2:	e8 d5 a8 ff ff       	call   0x54eebc
  5545e7:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5545ec:	8b 00                	mov    eax,DWORD PTR [eax]
  5545ee:	ba 20 46 55 00       	mov    edx,0x554620
  5545f3:	e8 74 56 01 00       	call   0x569c6c
  5545f8:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5545fd:	8b 00                	mov    eax,DWORD PTR [eax]
  5545ff:	e8 e0 63 01 00       	call   0x56a9e4
  554604:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554607:	c7 80 34 02 00 00 01 	mov    DWORD PTR [eax+0x234],0x1
  55460e:	00 00 00 
  554611:	59                   	pop    ecx
  554612:	59                   	pop    ecx
  554613:	5d                   	pop    ebp
  554614:	c3                   	ret
  554615:	00 00                	add    BYTE PTR [eax],al
  554617:	00 ff                	add    bh,bh
  554619:	ff                   	(bad)
  55461a:	ff                   	(bad)
  55461b:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554621:	43                   	inc    ebx
  554622:	4d                   	dec    ebp
  554623:	6e                   	outs   dx,BYTE PTR ds:[esi]
  554624:	31 00                	xor    DWORD PTR [eax],eax
  554626:	00 00                	add    BYTE PTR [eax],al
  554628:	55                   	push   ebp
  554629:	8b ec                	mov    ebp,esp
  55462b:	83 c4 f8             	add    esp,0xfffffff8
  55462e:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  554631:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  554634:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  554637:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55463a:	e8 55 a8 ff ff       	call   0x54ee94
  55463f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554644:	8b 00                	mov    eax,DWORD PTR [eax]
  554646:	ba 78 46 55 00       	mov    edx,0x554678
  55464b:	e8 1c 56 01 00       	call   0x569c6c
  554650:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554655:	8b 00                	mov    eax,DWORD PTR [eax]
  554657:	e8 88 63 01 00       	call   0x56a9e4
  55465c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55465f:	c7 80 34 02 00 00 02 	mov    DWORD PTR [eax+0x234],0x2
  554666:	00 00 00 
  554669:	59                   	pop    ecx
  55466a:	59                   	pop    ecx
  55466b:	5d                   	pop    ebp
  55466c:	c3                   	ret
  55466d:	00 00                	add    BYTE PTR [eax],al
  55466f:	00 ff                	add    bh,bh
  554671:	ff                   	(bad)
  554672:	ff                   	(bad)
  554673:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554679:	63 4d 6e             	arpl   WORD PTR [ebp+0x6e],ecx
  55467c:	32 00                	xor    al,BYTE PTR [eax]
  55467e:	00 00                	add    BYTE PTR [eax],al
  554680:	55                   	push   ebp
  554681:	8b ec                	mov    ebp,esp
  554683:	83 c4 f4             	add    esp,0xfffffff4
  554686:	33 c9                	xor    ecx,ecx
  554688:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  55468b:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55468e:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  554691:	33 c0                	xor    eax,eax
  554693:	55                   	push   ebp
  554694:	68 db 46 55 00       	push   0x5546db
  554699:	64 ff 30             	push   DWORD PTR fs:[eax]
  55469c:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55469f:	8d 55 f4             	lea    edx,[ebp-0xc]
  5546a2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5546a5:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  5546ab:	e8 64 e0 ed ff       	call   0x432714
  5546b0:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  5546b4:	0f 95 c2             	setne  dl
  5546b7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5546ba:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  5546c0:	8b 08                	mov    ecx,DWORD PTR [eax]
  5546c2:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5546c5:	33 c0                	xor    eax,eax
  5546c7:	5a                   	pop    edx
  5546c8:	59                   	pop    ecx
  5546c9:	59                   	pop    ecx
  5546ca:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  5546cd:	68 e2 46 55 00       	push   0x5546e2
  5546d2:	8d 45 f4             	lea    eax,[ebp-0xc]
  5546d5:	e8 d6 f6 ea ff       	call   0x403db0
  5546da:	c3                   	ret
  5546db:	e9 14 f1 ea ff       	jmp    0x4037f4
  5546e0:	eb f0                	jmp    0x5546d2
  5546e2:	8b e5                	mov    esp,ebp
  5546e4:	5d                   	pop    ebp
  5546e5:	c3                   	ret
  5546e6:	8b c0                	mov    eax,eax
  5546e8:	55                   	push   ebp
  5546e9:	8b ec                	mov    ebp,esp
  5546eb:	33 c0                	xor    eax,eax
  5546ed:	55                   	push   ebp
  5546ee:	68 0d 47 55 00       	push   0x55470d
  5546f3:	64 ff 30             	push   DWORD PTR fs:[eax]
  5546f6:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  5546f9:	ff 05 60 48 57 00    	inc    DWORD PTR ds:0x574860
  5546ff:	33 c0                	xor    eax,eax
  554701:	5a                   	pop    edx
  554702:	59                   	pop    ecx
  554703:	59                   	pop    ecx
  554704:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  554707:	68 14 47 55 00       	push   0x554714
  55470c:	c3                   	ret
  55470d:	e9 e2 f0 ea ff       	jmp    0x4037f4
  554712:	eb f8                	jmp    0x55470c
  554714:	5d                   	pop    ebp
  554715:	c3                   	ret
  554716:	8b c0                	mov    eax,eax
  554718:	83 2d 60 48 57 00 01 	sub    DWORD PTR ds:0x574860,0x1
  55471f:	c3                   	ret
  554720:	6c                   	ins    BYTE PTR es:[edi],dx
  554721:	47                   	inc    edi
  554722:	55                   	push   ebp
	...
  55472b:	00 50 48             	add    BYTE PTR [eax+0x48],dl
  55472e:	55                   	push   ebp
  55472f:	00 e8                	add    al,ch
  554731:	48                   	dec    eax
  554732:	55                   	push   ebp
  554733:	00 72 48             	add    BYTE PTR [edx+0x48],dh
  554736:	55                   	push   ebp
  554737:	00 8e 48 55 00 00    	add    BYTE PTR [esi+0x5548],cl
  55473d:	00 00                	add    BYTE PTR [eax],al
  55473f:	00 ce                	add    dh,cl
  554741:	48                   	dec    eax
  554742:	55                   	push   ebp
  554743:	00 18                	add    BYTE PTR [eax],bl
  554745:	03 00                	add    eax,DWORD PTR [eax]
  554747:	00 ac e7 54 00 7c 96 	add    BYTE PTR [edi+eiz*8-0x6983ffac],ch
  55474e:	41                   	inc    ecx
  55474f:	00 5c 9e 44          	add    BYTE PTR [esi+ebx*4+0x44],bl
  554753:	00 f4                	add    ah,dh
  554755:	9f                   	lahf
  554756:	44                   	inc    esp
  554757:	00 cc                	add    ah,cl
  554759:	32 40 00             	xor    al,BYTE PTR [eax+0x0]
  55475c:	e8 c1 44 00 28       	call   0x28558c22
  554761:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  554764:	3c 30                	cmp    al,0x30
  554766:	40                   	inc    eax
  554767:	00 50 f1             	add    BYTE PTR [eax-0xf],dl
  55476a:	4a                   	dec    edx
  55476b:	00 ac 94 43 00 6c a5 	add    BYTE PTR [esp+edx*4-0x5a93ffbd],ch
  554772:	44                   	inc    esp
  554773:	00 74 2a 41          	add    BYTE PTR [edx+ebp*1+0x41],dh
  554777:	00 14 a2             	add    BYTE PTR [edx+eiz*4],dl
  55477a:	44                   	inc    esp
  55477b:	00 50 a2             	add    BYTE PTR [eax-0x5e],dl
  55477e:	44                   	inc    esp
  55477f:	00 5c a3 44          	add    BYTE PTR [ebx+eiz*4+0x44],bl
  554783:	00 f4                	add    ah,dh
  554785:	24 43                	and    al,0x43
  554787:	00 94 96 41 00 7c ab 	add    BYTE PTR [esi+edx*4-0x5483ffbf],dl
  55478e:	44                   	inc    esp
  55478f:	00 74 93 41          	add    BYTE PTR [ebx+edx*4+0x41],dh
  554793:	00 a0 e3 44 00 14    	add    BYTE PTR [eax+0x140044e3],ah
  554799:	49                   	dec    ecx
  55479a:	55                   	push   ebp
  55479b:	00 a4 8f 43 00 dc 94 	add    BYTE PTR [edi+ecx*4-0x6b23ffbd],ah
  5547a2:	43                   	inc    ebx
  5547a3:	00 08                	add    BYTE PTR [eax],cl
  5547a5:	94                   	xchg   esp,eax
  5547a6:	43                   	inc    ebx
  5547a7:	00 30                	add    BYTE PTR [eax],dh
  5547a9:	8a 43 00             	mov    al,BYTE PTR [ebx+0x0]
  5547ac:	5c                   	pop    esp
  5547ad:	a8 44                	test   al,0x44
  5547af:	00 a8 87 43 00 a0    	add    BYTE PTR [eax-0x5fffbc79],ch
  5547b5:	1a 43 00             	sbb    al,BYTE PTR [ebx+0x0]
  5547b8:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5547b9:	1a 43 00             	sbb    al,BYTE PTR [ebx+0x0]
  5547bc:	50                   	push   eax
  5547bd:	a9 44 00 24 46       	test   eax,0x46240044
  5547c2:	43                   	inc    ebx
  5547c3:	00 20                	add    BYTE PTR [eax],ah
  5547c5:	1c 43                	sbb    al,0x43
  5547c7:	00 70 26             	add    BYTE PTR [eax+0x26],dh
  5547ca:	43                   	inc    ebx
  5547cb:	00 44 ab 44          	add    BYTE PTR [ebx+ebp*4+0x44],al
  5547cf:	00 10                	add    BYTE PTR [eax],dl
  5547d1:	aa                   	stos   BYTE PTR es:[edi],al
  5547d2:	44                   	inc    esp
  5547d3:	00 a8 27 43 00 bc    	add    BYTE PTR [eax-0x43ffbcd9],ch
  5547d9:	ab                   	stos   DWORD PTR es:[edi],eax
  5547da:	44                   	inc    esp
  5547db:	00 a4 46 43 00 fc 87 	add    BYTE PTR [esi+eax*2-0x7803ffbd],ah
  5547e2:	43                   	inc    ebx
  5547e3:	00 78 88             	add    BYTE PTR [eax-0x78],bh
  5547e6:	43                   	inc    ebx
  5547e7:	00 fc                	add    ah,bh
  5547e9:	83 43 00 5c          	add    DWORD PTR [ebx+0x0],0x5c
  5547ed:	88 43 00             	mov    BYTE PTR [ebx+0x0],al
  5547f0:	d4 9a                	aam    0x9a
  5547f2:	44                   	inc    esp
  5547f3:	00 d0                	add    al,dl
  5547f5:	b0 44                	mov    al,0x44
  5547f7:	00 04 5d 43 00 50 bd 	add    BYTE PTR [ebx*2-0x42afffbd],al
  5547fe:	44                   	inc    esp
  5547ff:	00 a4 c0 44 00 64 bf 	add    BYTE PTR [eax+eax*8-0x409bffbc],ah
  554806:	44                   	inc    esp
  554807:	00 a4 c1 44 00 00 5c 	add    BYTE PTR [ecx+eax*8+0x5c000044],ah
  55480e:	43                   	inc    ebx
  55480f:	00 9c 89 43 00 98 c8 	add    BYTE PTR [ecx+ecx*4-0x3767ffbd],bl
  554816:	44                   	inc    esp
  554817:	00 58 86             	add    BYTE PTR [eax-0x7a],bl
  55481a:	43                   	inc    ebx
  55481b:	00 80 dc 44 00 c8    	add    BYTE PTR [eax-0x37ffbb24],al
  554821:	94                   	xchg   esp,eax
  554822:	44                   	inc    esp
  554823:	00 78 97             	add    BYTE PTR [eax-0x69],bh
  554826:	44                   	inc    esp
  554827:	00 94 ce 44 00 40 a1 	add    BYTE PTR [esi+ecx*8-0x5ebfffbc],dl
  55482e:	44                   	inc    esp
  55482f:	00 b4 a1 44 00 28 e0 	add    BYTE PTR [ecx+eiz*4-0x1fd7ffbc],dh
  554836:	44                   	inc    esp
  554837:	00 94 9e 44 00 54 db 	add    BYTE PTR [esi+ebx*4-0x24abffbc],dl
  55483e:	44                   	inc    esp
  55483f:	00 70 c3             	add    BYTE PTR [eax-0x3d],dh
  554842:	44                   	inc    esp
  554843:	00 18                	add    BYTE PTR [eax],bl
  554845:	dd 44 00 40          	fld    QWORD PTR [eax+eax*1+0x40]
  554849:	ab                   	stos   DWORD PTR es:[edi],eax
  55484a:	44                   	inc    esp
  55484b:	00 cc                	add    ah,cl
  55484d:	f1                   	int1
  55484e:	4a                   	dec    edx
  55484f:	00 0e                	add    BYTE PTR [esi],cl
  554851:	00 00                	add    BYTE PTR [eax],al
  554853:	00 00                	add    BYTE PTR [eax],al
  554855:	00 03                	add    BYTE PTR [ebx],al
  554857:	00 00                	add    BYTE PTR [eax],al
  554859:	00 e8                	add    al,ch
  55485b:	10 40 00             	adc    BYTE PTR [eax+0x0],al
  55485e:	0c 03                	or     al,0x3
  554860:	00 00                	add    BYTE PTR [eax],al
  554862:	e8 10 40 00 10       	call   0x10558877
  554867:	03 00                	add    eax,DWORD PTR [eax]
  554869:	00 e8                	add    al,ch
  55486b:	10 40 00             	adc    BYTE PTR [eax+0x0],al
  55486e:	14 03                	adc    al,0x3
  554870:	00 00                	add    BYTE PTR [eax],al
  554872:	01 00                	add    DWORD PTR [eax],eax
  554874:	dd 48 55             	fisttp QWORD PTR [eax+0x55]
  554877:	00 08                	add    BYTE PTR [eax],cl
  554879:	03 00                	add    eax,DWORD PTR [eax]
  55487b:	00 00                	add    BYTE PTR [eax],al
  55487d:	00 0f                	add    BYTE PTR [edi],cl
  55487f:	6c                   	ins    BYTE PTR es:[edi],dx
  554880:	62 6c 4d 65          	bound  ebp,QWORD PTR [ebp+ecx*2+0x65]
  554884:	73 73                	jae    0x5548f9
  554886:	61                   	popa
  554887:	67 65 42             	addr16 gs inc edx
  55488a:	6c                   	ins    BYTE PTR es:[edi],dx
  55488b:	6f                   	outs   dx,DWORD PTR ds:[esi]
  55488c:	63 6b 03             	arpl   WORD PTR [ebx+0x3],ebp
  55488f:	00 14 00             	add    BYTE PTR [eax+eax*1],dl
  554892:	6c                   	ins    BYTE PTR es:[edi],dx
  554893:	4a                   	dec    edx
  554894:	55                   	push   ebp
  554895:	00 0d 62 74 6e 52    	add    BYTE PTR ds:0x526e7462,cl
  55489b:	65 71 4f             	gs jno 0x5548ed
  55489e:	6b 43 6c 69          	imul   eax,DWORD PTR [ebx+0x6c],0x69
  5548a2:	63 6b 18             	arpl   WORD PTR [ebx+0x18],ebp
  5548a5:	00 c0                	add    al,al
  5548a7:	4a                   	dec    edx
  5548a8:	55                   	push   ebp
  5548a9:	00 11                	add    BYTE PTR [ecx],dl
  5548ab:	62 74 6e 52          	bound  esi,QWORD PTR [esi+ebp*2+0x52]
  5548af:	65 71 43             	gs jno 0x5548f5
  5548b2:	61                   	popa
  5548b3:	6e                   	outs   dx,BYTE PTR ds:[esi]
  5548b4:	63 65 6c             	arpl   WORD PTR [ebp+0x6c],esp
  5548b7:	43                   	inc    ebx
  5548b8:	6c                   	ins    BYTE PTR es:[edi],dx
  5548b9:	69 63 6b 12 00 28 4a 	imul   esp,DWORD PTR [ebx+0x6b],0x4a280012
  5548c0:	55                   	push   ebp
  5548c1:	00 0b                	add    BYTE PTR [ebx],cl
  5548c3:	47                   	inc    edi
  5548c4:	44                   	inc    esp
  5548c5:	49                   	dec    ecx
  5548c6:	46                   	inc    esi
  5548c7:	6f                   	outs   dx,DWORD PTR ds:[esi]
  5548c8:	72 6d                	jb     0x554937
  5548ca:	53                   	push   ebx
  5548cb:	68 6f 77 0e 54       	push   0x540e776f
  5548d0:	66 72 6d             	data16 jb 0x554940
  5548d3:	52                   	push   edx
  5548d4:	65 71 4d             	gs jno 0x554924
  5548d7:	65 73 73             	gs jae 0x55494d
  5548da:	61                   	popa
  5548db:	67 65 01 00          	add    DWORD PTR gs:[bx+si],eax
  5548df:	40                   	inc    eax
  5548e0:	50                   	push   eax
  5548e1:	42                   	inc    edx
  5548e2:	00 90 e8 48 55 00    	add    BYTE PTR [eax+0x5548e8],dl
  5548e8:	07                   	pop    es
  5548e9:	0e                   	push   cs
  5548ea:	54                   	push   esp
  5548eb:	66 72 6d             	data16 jb 0x55495b
  5548ee:	52                   	push   edx
  5548ef:	65 71 4d             	gs jno 0x55493f
  5548f2:	65 73 73             	gs jae 0x554968
  5548f5:	61                   	popa
  5548f6:	67 65 6c             	gs ins BYTE PTR es:[di],dx
  5548f9:	47                   	inc    edi
  5548fa:	55                   	push   ebp
  5548fb:	00 14 ea             	add    BYTE PTR [edx+ebp*8],dl
  5548fe:	54                   	push   esp
  5548ff:	00 5a 00             	add    BYTE PTR [edx+0x0],bl
  554902:	0e                   	push   cs
  554903:	46                   	inc    esi
  554904:	6f                   	outs   dx,DWORD PTR ds:[esi]
  554905:	72 6d                	jb     0x554974
  554907:	52                   	push   edx
  554908:	65 71 4d             	gs jno 0x554958
  55490b:	65 73 73             	gs jae 0x554981
  55490e:	61                   	popa
  55490f:	67 65 00 00          	add    BYTE PTR gs:[bx+si],al
  554913:	90                   	nop
  554914:	55                   	push   ebp
  554915:	8b ec                	mov    ebp,esp
  554917:	83 c4 f4             	add    esp,0xfffffff4
  55491a:	84 d2                	test   dl,dl
  55491c:	74 08                	je     0x554926
  55491e:	83 c4 f0             	add    esp,0xfffffff0
  554921:	e8 ae ea ea ff       	call   0x4033d4
  554926:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  554929:	88 55 fb             	mov    BYTE PTR [ebp-0x5],dl
  55492c:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55492f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554934:	8b 00                	mov    eax,DWORD PTR [eax]
  554936:	8b 80 28 01 00 00    	mov    eax,DWORD PTR [eax+0x128]
  55493c:	50                   	push   eax
  55493d:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  554940:	33 d2                	xor    edx,edx
  554942:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554945:	e8 fa a2 ff ff       	call   0x54ec44
  55494a:	33 d2                	xor    edx,edx
  55494c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55494f:	8b 80 00 03 00 00    	mov    eax,DWORD PTR [eax+0x300]
  554955:	e8 ea dd ed ff       	call   0x432744
  55495a:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554960:	8b 92 f0 00 00 00    	mov    edx,DWORD PTR [edx+0xf0]
  554966:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554969:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  55496f:	e8 d0 dd ed ff       	call   0x432744
  554974:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55497a:	8b 92 ec 00 00 00    	mov    edx,DWORD PTR [edx+0xec]
  554980:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554983:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554989:	e8 b6 dd ed ff       	call   0x432744
  55498e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554991:	05 0c 03 00 00       	add    eax,0x30c
  554996:	e8 15 f4 ea ff       	call   0x403db0
  55499b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55499e:	05 10 03 00 00       	add    eax,0x310
  5549a3:	e8 08 f4 ea ff       	call   0x403db0
  5549a8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5549ab:	05 14 03 00 00       	add    eax,0x314
  5549b0:	e8 fb f3 ea ff       	call   0x403db0
  5549b5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5549b8:	80 7d fb 00          	cmp    BYTE PTR [ebp-0x5],0x0
  5549bc:	74 0f                	je     0x5549cd
  5549be:	e8 69 ea ea ff       	call   0x40342c
  5549c3:	64 8f 05 00 00 00 00 	pop    DWORD PTR fs:0x0
  5549ca:	83 c4 0c             	add    esp,0xc
  5549cd:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5549d0:	8b e5                	mov    esp,ebp
  5549d2:	5d                   	pop    ebp
  5549d3:	c3                   	ret
  5549d4:	55                   	push   ebp
  5549d5:	8b ec                	mov    ebp,esp
  5549d7:	83 c4 f8             	add    esp,0xfffffff8
  5549da:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5549dd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5549e0:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5549e3:	e8 fc f7 ea ff       	call   0x4041e4
  5549e8:	33 c0                	xor    eax,eax
  5549ea:	55                   	push   ebp
  5549eb:	68 1d 4a 55 00       	push   0x554a1d
  5549f0:	64 ff 30             	push   DWORD PTR fs:[eax]
  5549f3:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  5549f6:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5549f9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5549fc:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  554a02:	e8 3d dd ed ff       	call   0x432744
  554a07:	33 c0                	xor    eax,eax
  554a09:	5a                   	pop    edx
  554a0a:	59                   	pop    ecx
  554a0b:	59                   	pop    ecx
  554a0c:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  554a0f:	68 24 4a 55 00       	push   0x554a24
  554a14:	8d 45 f8             	lea    eax,[ebp-0x8]
  554a17:	e8 94 f3 ea ff       	call   0x403db0
  554a1c:	c3                   	ret
  554a1d:	e9 d2 ed ea ff       	jmp    0x4037f4
  554a22:	eb f0                	jmp    0x554a14
  554a24:	59                   	pop    ecx
  554a25:	59                   	pop    ecx
  554a26:	5d                   	pop    ebp
  554a27:	c3                   	ret
  554a28:	55                   	push   ebp
  554a29:	8b ec                	mov    ebp,esp
  554a2b:	83 c4 f8             	add    esp,0xfffffff8
  554a2e:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  554a31:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  554a34:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  554a37:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554a3a:	e8 29 a4 ff ff       	call   0x54ee68
  554a3f:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554a44:	8b 00                	mov    eax,DWORD PTR [eax]
  554a46:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  554a4c:	e8 8b b5 ff ff       	call   0x54ffdc
  554a51:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554a56:	8b 00                	mov    eax,DWORD PTR [eax]
  554a58:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  554a5b:	8b 92 14 03 00 00    	mov    edx,DWORD PTR [edx+0x314]
  554a61:	e8 06 52 01 00       	call   0x569c6c
  554a66:	59                   	pop    ecx
  554a67:	59                   	pop    ecx
  554a68:	5d                   	pop    ebp
  554a69:	c3                   	ret
  554a6a:	8b c0                	mov    eax,eax
  554a6c:	55                   	push   ebp
  554a6d:	8b ec                	mov    ebp,esp
  554a6f:	83 c4 f8             	add    esp,0xfffffff8
  554a72:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  554a75:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  554a78:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  554a7b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554a7e:	e8 39 a4 ff ff       	call   0x54eebc
  554a83:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554a86:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  554a8c:	e8 9f f5 ea ff       	call   0x404030
  554a91:	85 c0                	test   eax,eax
  554a93:	7e 27                	jle    0x554abc
  554a95:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554a9a:	8b 00                	mov    eax,DWORD PTR [eax]
  554a9c:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  554aa2:	e8 35 b5 ff ff       	call   0x54ffdc
  554aa7:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554aac:	8b 00                	mov    eax,DWORD PTR [eax]
  554aae:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  554ab1:	8b 92 0c 03 00 00    	mov    edx,DWORD PTR [edx+0x30c]
  554ab7:	e8 b0 51 01 00       	call   0x569c6c
  554abc:	59                   	pop    ecx
  554abd:	59                   	pop    ecx
  554abe:	5d                   	pop    ebp
  554abf:	c3                   	ret
  554ac0:	55                   	push   ebp
  554ac1:	8b ec                	mov    ebp,esp
  554ac3:	83 c4 f8             	add    esp,0xfffffff8
  554ac6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  554ac9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  554acc:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  554acf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554ad2:	e8 bd a3 ff ff       	call   0x54ee94
  554ad7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554ada:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  554ae0:	e8 4b f5 ea ff       	call   0x404030
  554ae5:	85 c0                	test   eax,eax
  554ae7:	7e 27                	jle    0x554b10
  554ae9:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554aee:	8b 00                	mov    eax,DWORD PTR [eax]
  554af0:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  554af6:	e8 e1 b4 ff ff       	call   0x54ffdc
  554afb:	a1 08 21 57 00       	mov    eax,ds:0x572108
  554b00:	8b 00                	mov    eax,DWORD PTR [eax]
  554b02:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  554b05:	8b 92 10 03 00 00    	mov    edx,DWORD PTR [edx+0x310]
  554b0b:	e8 5c 51 01 00       	call   0x569c6c
  554b10:	59                   	pop    ecx
  554b11:	59                   	pop    ecx
  554b12:	5d                   	pop    ebp
  554b13:	c3                   	ret
  554b14:	55                   	push   ebp
  554b15:	8b ec                	mov    ebp,esp
  554b17:	33 c0                	xor    eax,eax
  554b19:	55                   	push   ebp
  554b1a:	68 39 4b 55 00       	push   0x554b39
  554b1f:	64 ff 30             	push   DWORD PTR fs:[eax]
  554b22:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  554b25:	ff 05 68 48 57 00    	inc    DWORD PTR ds:0x574868
  554b2b:	33 c0                	xor    eax,eax
  554b2d:	5a                   	pop    edx
  554b2e:	59                   	pop    ecx
  554b2f:	59                   	pop    ecx
  554b30:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  554b33:	68 40 4b 55 00       	push   0x554b40
  554b38:	c3                   	ret
  554b39:	e9 b6 ec ea ff       	jmp    0x4037f4
  554b3e:	eb f8                	jmp    0x554b38
  554b40:	5d                   	pop    ebp
  554b41:	c3                   	ret
  554b42:	8b c0                	mov    eax,eax
  554b44:	83 2d 68 48 57 00 01 	sub    DWORD PTR ds:0x574868,0x1
  554b4b:	c3                   	ret
  554b4c:	55                   	push   ebp
  554b4d:	8b ec                	mov    ebp,esp
  554b4f:	83 c4 ec             	add    esp,0xffffffec
  554b52:	33 d2                	xor    edx,edx
  554b54:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  554b57:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  554b5a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554b5d:	e8 82 f6 ea ff       	call   0x4041e4
  554b62:	33 c0                	xor    eax,eax
  554b64:	55                   	push   ebp
  554b65:	68 63 4c 55 00       	push   0x554c63
  554b6a:	64 ff 30             	push   DWORD PTR fs:[eax]
  554b6d:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  554b70:	8d 45 f4             	lea    eax,[ebp-0xc]
  554b73:	50                   	push   eax
  554b74:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  554b77:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  554b7a:	c6 45 f0 0b          	mov    BYTE PTR [ebp-0x10],0xb
  554b7e:	8d 55 ec             	lea    edx,[ebp-0x14]
  554b81:	a1 04 24 57 00       	mov    eax,ds:0x572404
  554b86:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  554b89:	33 c9                	xor    ecx,ecx
  554b8b:	e8 04 5d eb ff       	call   0x40a894
  554b90:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  554b93:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554b98:	8b 00                	mov    eax,DWORD PTR [eax]
  554b9a:	e8 35 fe ff ff       	call   0x5549d4
  554b9f:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554ba5:	8b 92 f0 00 00 00    	mov    edx,DWORD PTR [edx+0xf0]
  554bab:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554bb0:	8b 00                	mov    eax,DWORD PTR [eax]
  554bb2:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  554bb8:	e8 87 db ed ff       	call   0x432744
  554bbd:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554bc3:	8b 92 ec 00 00 00    	mov    edx,DWORD PTR [edx+0xec]
  554bc9:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554bce:	8b 00                	mov    eax,DWORD PTR [eax]
  554bd0:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554bd6:	e8 69 db ed ff       	call   0x432744
  554bdb:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554be0:	8b 00                	mov    eax,DWORD PTR [eax]
  554be2:	05 0c 03 00 00       	add    eax,0x30c
  554be7:	ba 7c 4c 55 00       	mov    edx,0x554c7c
  554bec:	e8 13 f2 ea ff       	call   0x403e04
  554bf1:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554bf6:	8b 00                	mov    eax,DWORD PTR [eax]
  554bf8:	05 10 03 00 00       	add    eax,0x310
  554bfd:	ba 8c 4c 55 00       	mov    edx,0x554c8c
  554c02:	e8 fd f1 ea ff       	call   0x403e04
  554c07:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554c0c:	8b 00                	mov    eax,DWORD PTR [eax]
  554c0e:	05 14 03 00 00       	add    eax,0x314
  554c13:	ba 9c 4c 55 00       	mov    edx,0x554c9c
  554c18:	e8 e7 f1 ea ff       	call   0x403e04
  554c1d:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554c22:	8b 00                	mov    eax,DWORD PTR [eax]
  554c24:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  554c2a:	33 d2                	xor    edx,edx
  554c2c:	e8 fb d9 ed ff       	call   0x43262c
  554c31:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554c36:	8b 00                	mov    eax,DWORD PTR [eax]
  554c38:	8b 10                	mov    edx,DWORD PTR [eax]
  554c3a:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
  554c40:	48                   	dec    eax
  554c41:	0f 94 45 fb          	sete   BYTE PTR [ebp-0x5]
  554c45:	33 c0                	xor    eax,eax
  554c47:	5a                   	pop    edx
  554c48:	59                   	pop    ecx
  554c49:	59                   	pop    ecx
  554c4a:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  554c4d:	68 6a 4c 55 00       	push   0x554c6a
  554c52:	8d 45 f4             	lea    eax,[ebp-0xc]
  554c55:	e8 56 f1 ea ff       	call   0x403db0
  554c5a:	8d 45 fc             	lea    eax,[ebp-0x4]
  554c5d:	e8 4e f1 ea ff       	call   0x403db0
  554c62:	c3                   	ret
  554c63:	e9 8c eb ea ff       	jmp    0x4037f4
  554c68:	eb e8                	jmp    0x554c52
  554c6a:	8a 45 fb             	mov    al,BYTE PTR [ebp-0x5]
  554c6d:	8b e5                	mov    esp,ebp
  554c6f:	5d                   	pop    ebp
  554c70:	c3                   	ret
  554c71:	00 00                	add    BYTE PTR [eax],al
  554c73:	00 ff                	add    bh,bh
  554c75:	ff                   	(bad)
  554c76:	ff                   	(bad)
  554c77:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554c7d:	43                   	inc    ebx
  554c7e:	4d                   	dec    ebp
  554c7f:	6e                   	outs   dx,BYTE PTR ds:[esi]
  554c80:	33 00                	xor    eax,DWORD PTR [eax]
  554c82:	00 00                	add    BYTE PTR [eax],al
  554c84:	ff                   	(bad)
  554c85:	ff                   	(bad)
  554c86:	ff                   	(bad)
  554c87:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554c8d:	43                   	inc    ebx
  554c8e:	4d                   	dec    ebp
  554c8f:	6e                   	outs   dx,BYTE PTR ds:[esi]
  554c90:	34 00                	xor    al,0x0
  554c92:	00 00                	add    BYTE PTR [eax],al
  554c94:	ff                   	(bad)
  554c95:	ff                   	(bad)
  554c96:	ff                   	(bad)
  554c97:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554c9d:	63 4d 6e             	arpl   WORD PTR [ebp+0x6e],ecx
  554ca0:	38 00                	cmp    BYTE PTR [eax],al
  554ca2:	00 00                	add    BYTE PTR [eax],al
  554ca4:	55                   	push   ebp
  554ca5:	8b ec                	mov    ebp,esp
  554ca7:	51                   	push   ecx
  554ca8:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554cae:	8b 52 38             	mov    edx,DWORD PTR [edx+0x38]
  554cb1:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554cb6:	8b 00                	mov    eax,DWORD PTR [eax]
  554cb8:	e8 17 fd ff ff       	call   0x5549d4
  554cbd:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554cc3:	8b 92 f0 00 00 00    	mov    edx,DWORD PTR [edx+0xf0]
  554cc9:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554cce:	8b 00                	mov    eax,DWORD PTR [eax]
  554cd0:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  554cd6:	e8 69 da ed ff       	call   0x432744
  554cdb:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554ce1:	8b 92 ec 00 00 00    	mov    edx,DWORD PTR [edx+0xec]
  554ce7:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554cec:	8b 00                	mov    eax,DWORD PTR [eax]
  554cee:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554cf4:	e8 4b da ed ff       	call   0x432744
  554cf9:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554cfe:	8b 00                	mov    eax,DWORD PTR [eax]
  554d00:	05 0c 03 00 00       	add    eax,0x30c
  554d05:	ba 5c 4d 55 00       	mov    edx,0x554d5c
  554d0a:	e8 f5 f0 ea ff       	call   0x403e04
  554d0f:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554d14:	8b 00                	mov    eax,DWORD PTR [eax]
  554d16:	05 10 03 00 00       	add    eax,0x310
  554d1b:	ba 6c 4d 55 00       	mov    edx,0x554d6c
  554d20:	e8 df f0 ea ff       	call   0x403e04
  554d25:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554d2a:	8b 00                	mov    eax,DWORD PTR [eax]
  554d2c:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  554d32:	33 d2                	xor    edx,edx
  554d34:	e8 f3 d8 ed ff       	call   0x43262c
  554d39:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554d3e:	8b 00                	mov    eax,DWORD PTR [eax]
  554d40:	8b 10                	mov    edx,DWORD PTR [eax]
  554d42:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
  554d48:	48                   	dec    eax
  554d49:	0f 94 45 ff          	sete   BYTE PTR [ebp-0x1]
  554d4d:	8a 45 ff             	mov    al,BYTE PTR [ebp-0x1]
  554d50:	59                   	pop    ecx
  554d51:	5d                   	pop    ebp
  554d52:	c3                   	ret
  554d53:	00 ff                	add    bh,bh
  554d55:	ff                   	(bad)
  554d56:	ff                   	(bad)
  554d57:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554d5d:	43                   	inc    ebx
  554d5e:	4d                   	dec    ebp
  554d5f:	6e                   	outs   dx,BYTE PTR ds:[esi]
  554d60:	33 00                	xor    eax,DWORD PTR [eax]
  554d62:	00 00                	add    BYTE PTR [eax],al
  554d64:	ff                   	(bad)
  554d65:	ff                   	(bad)
  554d66:	ff                   	(bad)
  554d67:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  554d6d:	43                   	inc    ebx
  554d6e:	4d                   	dec    ebp
  554d6f:	6e                   	outs   dx,BYTE PTR ds:[esi]
  554d70:	34 00                	xor    al,0x0
  554d72:	00 00                	add    BYTE PTR [eax],al
  554d74:	55                   	push   ebp
  554d75:	8b ec                	mov    ebp,esp
  554d77:	83 c4 f4             	add    esp,0xfffffff4
  554d7a:	33 c0                	xor    eax,eax
  554d7c:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  554d7f:	33 c0                	xor    eax,eax
  554d81:	55                   	push   ebp
  554d82:	68 ab 4e 55 00       	push   0x554eab
  554d87:	64 ff 30             	push   DWORD PTR fs:[eax]
  554d8a:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  554d8d:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554d93:	8b 52 64             	mov    edx,DWORD PTR [edx+0x64]
  554d96:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554d9b:	8b 00                	mov    eax,DWORD PTR [eax]
  554d9d:	e8 32 fc ff ff       	call   0x5549d4
  554da2:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554da7:	8b 00                	mov    eax,DWORD PTR [eax]
  554da9:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554daf:	8b 40 30             	mov    eax,DWORD PTR [eax+0x30]
  554db2:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  554db5:	8d 55 f4             	lea    edx,[ebp-0xc]
  554db8:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554dbd:	8b 00                	mov    eax,DWORD PTR [eax]
  554dbf:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554dc5:	e8 4a d9 ed ff       	call   0x432714
  554dca:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554dcf:	8b 00                	mov    eax,DWORD PTR [eax]
  554dd1:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  554dd7:	33 d2                	xor    edx,edx
  554dd9:	e8 4e d8 ed ff       	call   0x43262c
  554dde:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554de3:	8b 00                	mov    eax,DWORD PTR [eax]
  554de5:	8b 50 38             	mov    edx,DWORD PTR [eax+0x38]
  554de8:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554ded:	8b 00                	mov    eax,DWORD PTR [eax]
  554def:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554df5:	2b 50 38             	sub    edx,DWORD PTR [eax+0x38]
  554df8:	71 05                	jno    0x554dff
  554dfa:	e8 d5 e1 ea ff       	call   0x402fd4
  554dff:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554e04:	8b 00                	mov    eax,DWORD PTR [eax]
  554e06:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554e0c:	e8 23 d1 ed ff       	call   0x431f34
  554e11:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554e17:	8b 92 e4 00 00 00    	mov    edx,DWORD PTR [edx+0xe4]
  554e1d:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554e22:	8b 00                	mov    eax,DWORD PTR [eax]
  554e24:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554e2a:	e8 15 d9 ed ff       	call   0x432744
  554e2f:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554e34:	8b 00                	mov    eax,DWORD PTR [eax]
  554e36:	8b 10                	mov    edx,DWORD PTR [eax]
  554e38:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
  554e3e:	48                   	dec    eax
  554e3f:	0f 94 45 ff          	sete   BYTE PTR [ebp-0x1]
  554e43:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554e48:	8b 00                	mov    eax,DWORD PTR [eax]
  554e4a:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  554e50:	b2 01                	mov    dl,0x1
  554e52:	e8 d5 d7 ed ff       	call   0x43262c
  554e57:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554e5c:	8b 00                	mov    eax,DWORD PTR [eax]
  554e5e:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554e64:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  554e67:	e8 c8 d0 ed ff       	call   0x431f34
  554e6c:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554e71:	8b 00                	mov    eax,DWORD PTR [eax]
  554e73:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554e79:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  554e7c:	e8 c3 d8 ed ff       	call   0x432744
  554e81:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554e86:	8b 00                	mov    eax,DWORD PTR [eax]
  554e88:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  554e8e:	33 d2                	xor    edx,edx
  554e90:	e8 97 d7 ed ff       	call   0x43262c
  554e95:	33 c0                	xor    eax,eax
  554e97:	5a                   	pop    edx
  554e98:	59                   	pop    ecx
  554e99:	59                   	pop    ecx
  554e9a:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  554e9d:	68 b2 4e 55 00       	push   0x554eb2
  554ea2:	8d 45 f4             	lea    eax,[ebp-0xc]
  554ea5:	e8 06 ef ea ff       	call   0x403db0
  554eaa:	c3                   	ret
  554eab:	e9 44 e9 ea ff       	jmp    0x4037f4
  554eb0:	eb f0                	jmp    0x554ea2
  554eb2:	8a 45 ff             	mov    al,BYTE PTR [ebp-0x1]
  554eb5:	8b e5                	mov    esp,ebp
  554eb7:	5d                   	pop    ebp
  554eb8:	c3                   	ret
  554eb9:	8d 40 00             	lea    eax,[eax+0x0]
  554ebc:	55                   	push   ebp
  554ebd:	8b ec                	mov    ebp,esp
  554ebf:	83 c4 f4             	add    esp,0xfffffff4
  554ec2:	33 c0                	xor    eax,eax
  554ec4:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  554ec7:	33 c0                	xor    eax,eax
  554ec9:	55                   	push   ebp
  554eca:	68 f3 4f 55 00       	push   0x554ff3
  554ecf:	64 ff 30             	push   DWORD PTR fs:[eax]
  554ed2:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  554ed5:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554edb:	8b 52 68             	mov    edx,DWORD PTR [edx+0x68]
  554ede:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554ee3:	8b 00                	mov    eax,DWORD PTR [eax]
  554ee5:	e8 ea fa ff ff       	call   0x5549d4
  554eea:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554eef:	8b 00                	mov    eax,DWORD PTR [eax]
  554ef1:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554ef7:	8b 40 30             	mov    eax,DWORD PTR [eax+0x30]
  554efa:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  554efd:	8d 55 f4             	lea    edx,[ebp-0xc]
  554f00:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f05:	8b 00                	mov    eax,DWORD PTR [eax]
  554f07:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554f0d:	e8 02 d8 ed ff       	call   0x432714
  554f12:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f17:	8b 00                	mov    eax,DWORD PTR [eax]
  554f19:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  554f1f:	33 d2                	xor    edx,edx
  554f21:	e8 06 d7 ed ff       	call   0x43262c
  554f26:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f2b:	8b 00                	mov    eax,DWORD PTR [eax]
  554f2d:	8b 50 38             	mov    edx,DWORD PTR [eax+0x38]
  554f30:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f35:	8b 00                	mov    eax,DWORD PTR [eax]
  554f37:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554f3d:	2b 50 38             	sub    edx,DWORD PTR [eax+0x38]
  554f40:	71 05                	jno    0x554f47
  554f42:	e8 8d e0 ea ff       	call   0x402fd4
  554f47:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f4c:	8b 00                	mov    eax,DWORD PTR [eax]
  554f4e:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554f54:	e8 db cf ed ff       	call   0x431f34
  554f59:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  554f5f:	8b 92 e4 00 00 00    	mov    edx,DWORD PTR [edx+0xe4]
  554f65:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f6a:	8b 00                	mov    eax,DWORD PTR [eax]
  554f6c:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554f72:	e8 cd d7 ed ff       	call   0x432744
  554f77:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f7c:	8b 00                	mov    eax,DWORD PTR [eax]
  554f7e:	8b 10                	mov    edx,DWORD PTR [eax]
  554f80:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
  554f86:	48                   	dec    eax
  554f87:	0f 94 45 ff          	sete   BYTE PTR [ebp-0x1]
  554f8b:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554f90:	8b 00                	mov    eax,DWORD PTR [eax]
  554f92:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  554f98:	b2 01                	mov    dl,0x1
  554f9a:	e8 8d d6 ed ff       	call   0x43262c
  554f9f:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554fa4:	8b 00                	mov    eax,DWORD PTR [eax]
  554fa6:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554fac:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  554faf:	e8 80 cf ed ff       	call   0x431f34
  554fb4:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554fb9:	8b 00                	mov    eax,DWORD PTR [eax]
  554fbb:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  554fc1:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  554fc4:	e8 7b d7 ed ff       	call   0x432744
  554fc9:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  554fce:	8b 00                	mov    eax,DWORD PTR [eax]
  554fd0:	8b 80 ec 02 00 00    	mov    eax,DWORD PTR [eax+0x2ec]
  554fd6:	33 d2                	xor    edx,edx
  554fd8:	e8 4f d6 ed ff       	call   0x43262c
  554fdd:	33 c0                	xor    eax,eax
  554fdf:	5a                   	pop    edx
  554fe0:	59                   	pop    ecx
  554fe1:	59                   	pop    ecx
  554fe2:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  554fe5:	68 fa 4f 55 00       	push   0x554ffa
  554fea:	8d 45 f4             	lea    eax,[ebp-0xc]
  554fed:	e8 be ed ea ff       	call   0x403db0
  554ff2:	c3                   	ret
  554ff3:	e9 fc e7 ea ff       	jmp    0x4037f4
  554ff8:	eb f0                	jmp    0x554fea
  554ffa:	8a 45 ff             	mov    al,BYTE PTR [ebp-0x1]
  554ffd:	8b e5                	mov    esp,ebp
  554fff:	5d                   	pop    ebp
  555000:	c3                   	ret
  555001:	8d 40 00             	lea    eax,[eax+0x0]
  555004:	55                   	push   ebp
  555005:	8b ec                	mov    ebp,esp
  555007:	33 c0                	xor    eax,eax
  555009:	55                   	push   ebp
  55500a:	68 29 50 55 00       	push   0x555029
  55500f:	64 ff 30             	push   DWORD PTR fs:[eax]
  555012:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  555015:	ff 05 6c 48 57 00    	inc    DWORD PTR ds:0x57486c
  55501b:	33 c0                	xor    eax,eax
  55501d:	5a                   	pop    edx
  55501e:	59                   	pop    ecx
  55501f:	59                   	pop    ecx
  555020:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  555023:	68 30 50 55 00       	push   0x555030
  555028:	c3                   	ret
  555029:	e9 c6 e7 ea ff       	jmp    0x4037f4
  55502e:	eb f8                	jmp    0x555028
  555030:	5d                   	pop    ebp
  555031:	c3                   	ret
  555032:	8b c0                	mov    eax,eax
  555034:	83 2d 6c 48 57 00 01 	sub    DWORD PTR ds:0x57486c,0x1
  55503b:	c3                   	ret
  55503c:	88 50 55             	mov    BYTE PTR [eax+0x55],dl
	...
  55504b:	00 7c 52 55          	add    BYTE PTR [edx+edx*2+0x55],bh
  55504f:	00 6c 51 55          	add    BYTE PTR [ecx+edx*2+0x55],ch
  555053:	00 0f                	add    BYTE PTR [edi],cl
  555055:	52                   	push   edx
  555056:	55                   	push   ebp
  555057:	00 00                	add    BYTE PTR [eax],al
  555059:	00 00                	add    BYTE PTR [eax],al
  55505b:	00 5e 52             	add    BYTE PTR [esi+0x52],bl
  55505e:	55                   	push   ebp
  55505f:	00 54 03 00          	add    BYTE PTR [ebx+eax*1+0x0],dl
  555063:	00 ac e7 54 00 7c 96 	add    BYTE PTR [edi+eiz*8-0x6983ffac],ch
  55506a:	41                   	inc    ecx
  55506b:	00 5c 9e 44          	add    BYTE PTR [esi+ebx*4+0x44],bl
  55506f:	00 f4                	add    ah,dh
  555071:	9f                   	lahf
  555072:	44                   	inc    esp
  555073:	00 cc                	add    ah,cl
  555075:	32 40 00             	xor    al,BYTE PTR [eax+0x0]
  555078:	e8 c1 44 00 28       	call   0x2855953e
  55507d:	30 40 00             	xor    BYTE PTR [eax+0x0],al
  555080:	3c 30                	cmp    al,0x30
  555082:	40                   	inc    eax
  555083:	00 50 f1             	add    BYTE PTR [eax-0xf],dl
  555086:	4a                   	dec    edx
  555087:	00 ac 94 43 00 6c a5 	add    BYTE PTR [esp+edx*4-0x5a93ffbd],ch
  55508e:	44                   	inc    esp
  55508f:	00 74 2a 41          	add    BYTE PTR [edx+ebp*1+0x41],dh
  555093:	00 14 a2             	add    BYTE PTR [edx+eiz*4],dl
  555096:	44                   	inc    esp
  555097:	00 50 a2             	add    BYTE PTR [eax-0x5e],dl
  55509a:	44                   	inc    esp
  55509b:	00 5c a3 44          	add    BYTE PTR [ebx+eiz*4+0x44],bl
  55509f:	00 f4                	add    ah,dh
  5550a1:	24 43                	and    al,0x43
  5550a3:	00 94 96 41 00 7c ab 	add    BYTE PTR [esi+edx*4-0x5483ffbf],dl
  5550aa:	44                   	inc    esp
  5550ab:	00 74 93 41          	add    BYTE PTR [ebx+edx*4+0x41],dh
  5550af:	00 a0 e3 44 00 a0    	add    BYTE PTR [eax-0x5fffbb1d],ah
  5550b5:	52                   	push   edx
  5550b6:	55                   	push   ebp
  5550b7:	00 a4 8f 43 00 dc 94 	add    BYTE PTR [edi+ecx*4-0x6b23ffbd],ah
  5550be:	43                   	inc    ebx
  5550bf:	00 08                	add    BYTE PTR [eax],cl
  5550c1:	94                   	xchg   esp,eax
  5550c2:	43                   	inc    ebx
  5550c3:	00 30                	add    BYTE PTR [eax],dh
  5550c5:	8a 43 00             	mov    al,BYTE PTR [ebx+0x0]
  5550c8:	5c                   	pop    esp
  5550c9:	a8 44                	test   al,0x44
  5550cb:	00 a8 87 43 00 a0    	add    BYTE PTR [eax-0x5fffbc79],ch
  5550d1:	1a 43 00             	sbb    al,BYTE PTR [ebx+0x0]
  5550d4:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
  5550d5:	1a 43 00             	sbb    al,BYTE PTR [ebx+0x0]
  5550d8:	50                   	push   eax
  5550d9:	a9 44 00 24 46       	test   eax,0x46240044
  5550de:	43                   	inc    ebx
  5550df:	00 20                	add    BYTE PTR [eax],ah
  5550e1:	1c 43                	sbb    al,0x43
  5550e3:	00 70 26             	add    BYTE PTR [eax+0x26],dh
  5550e6:	43                   	inc    ebx
  5550e7:	00 44 ab 44          	add    BYTE PTR [ebx+ebp*4+0x44],al
  5550eb:	00 10                	add    BYTE PTR [eax],dl
  5550ed:	aa                   	stos   BYTE PTR es:[edi],al
  5550ee:	44                   	inc    esp
  5550ef:	00 a8 27 43 00 bc    	add    BYTE PTR [eax-0x43ffbcd9],ch
  5550f5:	ab                   	stos   DWORD PTR es:[edi],eax
  5550f6:	44                   	inc    esp
  5550f7:	00 a4 46 43 00 fc 87 	add    BYTE PTR [esi+eax*2-0x7803ffbd],ah
  5550fe:	43                   	inc    ebx
  5550ff:	00 78 88             	add    BYTE PTR [eax-0x78],bh
  555102:	43                   	inc    ebx
  555103:	00 fc                	add    ah,bh
  555105:	83 43 00 5c          	add    DWORD PTR [ebx+0x0],0x5c
  555109:	88 43 00             	mov    BYTE PTR [ebx+0x0],al
  55510c:	d4 9a                	aam    0x9a
  55510e:	44                   	inc    esp
  55510f:	00 d0                	add    al,dl
  555111:	b0 44                	mov    al,0x44
  555113:	00 04 5d 43 00 50 bd 	add    BYTE PTR [ebx*2-0x42afffbd],al
  55511a:	44                   	inc    esp
  55511b:	00 a4 c0 44 00 64 bf 	add    BYTE PTR [eax+eax*8-0x409bffbc],ah
  555122:	44                   	inc    esp
  555123:	00 a4 c1 44 00 00 5c 	add    BYTE PTR [ecx+eax*8+0x5c000044],ah
  55512a:	43                   	inc    ebx
  55512b:	00 9c 89 43 00 98 c8 	add    BYTE PTR [ecx+ecx*4-0x3767ffbd],bl
  555132:	44                   	inc    esp
  555133:	00 58 86             	add    BYTE PTR [eax-0x7a],bl
  555136:	43                   	inc    ebx
  555137:	00 80 dc 44 00 c8    	add    BYTE PTR [eax-0x37ffbb24],al
  55513d:	94                   	xchg   esp,eax
  55513e:	44                   	inc    esp
  55513f:	00 78 97             	add    BYTE PTR [eax-0x69],bh
  555142:	44                   	inc    esp
  555143:	00 94 ce 44 00 40 a1 	add    BYTE PTR [esi+ecx*8-0x5ebfffbc],dl
  55514a:	44                   	inc    esp
  55514b:	00 b4 a1 44 00 28 e0 	add    BYTE PTR [ecx+eiz*4-0x1fd7ffbc],dh
  555152:	44                   	inc    esp
  555153:	00 94 9e 44 00 54 db 	add    BYTE PTR [esi+ebx*4-0x24abffbc],dl
  55515a:	44                   	inc    esp
  55515b:	00 70 c3             	add    BYTE PTR [eax-0x3d],dh
  55515e:	44                   	inc    esp
  55515f:	00 18                	add    BYTE PTR [eax],bl
  555161:	dd 44 00 40          	fld    QWORD PTR [eax+eax*1+0x40]
  555165:	ab                   	stos   DWORD PTR es:[edi],eax
  555166:	44                   	inc    esp
  555167:	00 cc                	add    ah,cl
  555169:	f1                   	int1
  55516a:	4a                   	dec    edx
  55516b:	00 0b                	add    BYTE PTR [ebx],cl
  55516d:	00 69 52             	add    BYTE PTR [ecx+0x52],ch
  555170:	55                   	push   ebp
  555171:	00 08                	add    BYTE PTR [eax],cl
  555173:	03 00                	add    eax,DWORD PTR [eax]
  555175:	00 00                	add    BYTE PTR [eax],al
  555177:	00 06                	add    BYTE PTR [esi],al
  555179:	62 74 6e 4e          	bound  esi,QWORD PTR [esi+ebp*2+0x4e]
  55517d:	65 77 0c             	gs ja  0x55518c
  555180:	03 00                	add    eax,DWORD PTR [eax]
  555182:	00 00                	add    BYTE PTR [eax],al
  555184:	00 09                	add    BYTE PTR [ecx],cl
  555186:	62 74 6e 44          	bound  esi,QWORD PTR [esi+ebp*2+0x44]
  55518a:	65 6c                	gs ins BYTE PTR es:[edi],dx
  55518c:	65 74 65             	gs je  0x5551f4
  55518f:	10 03                	adc    BYTE PTR [ebx],al
  555191:	00 00                	add    BYTE PTR [eax],al
  555193:	01 00                	add    DWORD PTR [eax],eax
  555195:	07                   	pop    es
  555196:	50                   	push   eax
  555197:	6c                   	ins    BYTE PTR es:[edi],dx
  555198:	61                   	popa
  555199:	79 65                	jns    0x555200
  55519b:	72 31                	jb     0x5551ce
  55519d:	14 03                	adc    al,0x3
  55519f:	00 00                	add    BYTE PTR [eax],al
  5551a1:	01 00                	add    DWORD PTR [eax],eax
  5551a3:	07                   	pop    es
  5551a4:	50                   	push   eax
  5551a5:	6c                   	ins    BYTE PTR es:[edi],dx
  5551a6:	61                   	popa
  5551a7:	79 65                	jns    0x55520e
  5551a9:	72 32                	jb     0x5551dd
  5551ab:	18 03                	sbb    BYTE PTR [ebx],al
  5551ad:	00 00                	add    BYTE PTR [eax],al
  5551af:	01 00                	add    DWORD PTR [eax],eax
  5551b1:	07                   	pop    es
  5551b2:	50                   	push   eax
  5551b3:	6c                   	ins    BYTE PTR es:[edi],dx
  5551b4:	61                   	popa
  5551b5:	79 65                	jns    0x55521c
  5551b7:	72 33                	jb     0x5551ec
  5551b9:	1c 03                	sbb    al,0x3
  5551bb:	00 00                	add    BYTE PTR [eax],al
  5551bd:	01 00                	add    DWORD PTR [eax],eax
  5551bf:	07                   	pop    es
  5551c0:	50                   	push   eax
  5551c1:	6c                   	ins    BYTE PTR es:[edi],dx
  5551c2:	61                   	popa
  5551c3:	79 65                	jns    0x55522a
  5551c5:	72 34                	jb     0x5551fb
  5551c7:	20 03                	and    BYTE PTR [ebx],al
  5551c9:	00 00                	add    BYTE PTR [eax],al
  5551cb:	01 00                	add    DWORD PTR [eax],eax
  5551cd:	07                   	pop    es
  5551ce:	50                   	push   eax
  5551cf:	6c                   	ins    BYTE PTR es:[edi],dx
  5551d0:	61                   	popa
  5551d1:	79 65                	jns    0x555238
  5551d3:	72 35                	jb     0x55520a
  5551d5:	24 03                	and    al,0x3
  5551d7:	00 00                	add    BYTE PTR [eax],al
  5551d9:	01 00                	add    DWORD PTR [eax],eax
  5551db:	07                   	pop    es
  5551dc:	50                   	push   eax
  5551dd:	6c                   	ins    BYTE PTR es:[edi],dx
  5551de:	61                   	popa
  5551df:	79 65                	jns    0x555246
  5551e1:	72 36                	jb     0x555219
  5551e3:	28 03                	sub    BYTE PTR [ebx],al
  5551e5:	00 00                	add    BYTE PTR [eax],al
  5551e7:	01 00                	add    DWORD PTR [eax],eax
  5551e9:	07                   	pop    es
  5551ea:	50                   	push   eax
  5551eb:	6c                   	ins    BYTE PTR es:[edi],dx
  5551ec:	61                   	popa
  5551ed:	79 65                	jns    0x555254
  5551ef:	72 37                	jb     0x555228
  5551f1:	2c 03                	sub    al,0x3
  5551f3:	00 00                	add    BYTE PTR [eax],al
  5551f5:	01 00                	add    DWORD PTR [eax],eax
  5551f7:	07                   	pop    es
  5551f8:	50                   	push   eax
  5551f9:	6c                   	ins    BYTE PTR es:[edi],dx
  5551fa:	61                   	popa
  5551fb:	79 65                	jns    0x555262
  5551fd:	72 38                	jb     0x555237
  5551ff:	30 03                	xor    BYTE PTR [ebx],al
  555201:	00 00                	add    BYTE PTR [eax],al
  555203:	02 00                	add    al,BYTE PTR [eax]
  555205:	09 6c 62 6c          	or     DWORD PTR [edx+eiz*2+0x6c],ebp
  555209:	43                   	inc    ebx
  55520a:	68 6f 6f 73 65       	push   0x65736f6f
  55520f:	04 00                	add    al,0x0
  555211:	12 00                	adc    al,BYTE PTR [eax]
  555213:	90                   	nop
  555214:	59                   	pop    ecx
  555215:	55                   	push   ebp
  555216:	00 0b                	add    BYTE PTR [ebx],cl
  555218:	47                   	inc    edi
  555219:	44                   	inc    esp
  55521a:	49                   	dec    ecx
  55521b:	46                   	inc    esi
  55521c:	6f                   	outs   dx,DWORD PTR ds:[esi]
  55521d:	72 6d                	jb     0x55528c
  55521f:	53                   	push   ebx
  555220:	68 6f 77 15 00       	push   0x15776f
  555225:	e0 5f                	loopne 0x555286
  555227:	55                   	push   ebp
  555228:	00 0e                	add    BYTE PTR [esi],cl
  55522a:	62 74 6e 44          	bound  esi,QWORD PTR [esi+ebp*2+0x44]
  55522e:	65 6c                	gs ins BYTE PTR es:[edi],dx
  555230:	65 74 65             	gs je  0x555298
  555233:	43                   	inc    ebx
  555234:	6c                   	ins    BYTE PTR es:[edi],dx
  555235:	69 63 6b 12 00 a8 62 	imul   esp,DWORD PTR [ebx+0x6b],0x62a80012
  55523c:	55                   	push   ebp
  55523d:	00 0b                	add    BYTE PTR [ebx],cl
  55523f:	62 74 6e 4e          	bound  esi,QWORD PTR [esi+ebp*2+0x4e]
  555243:	65 77 43             	gs ja  0x555289
  555246:	6c                   	ins    BYTE PTR es:[edi],dx
  555247:	69 63 6b 14 00 6c 64 	imul   esp,DWORD PTR [ebx+0x6b],0x646c0014
  55524e:	55                   	push   ebp
  55524f:	00 0d 62 74 6e 52    	add    BYTE PTR ds:0x526e7462,cl
  555255:	65 71 4f             	gs jno 0x5552a7
  555258:	6b 43 6c 69          	imul   eax,DWORD PTR [ebx+0x6c],0x69
  55525c:	63 6b 0a             	arpl   WORD PTR [ebx+0xa],ebp
  55525f:	54                   	push   esp
  555260:	66 72 6d             	data16 jb 0x5552d0
  555263:	50                   	push   eax
  555264:	6c                   	ins    BYTE PTR es:[edi],dx
  555265:	61                   	popa
  555266:	79 65                	jns    0x5552cd
  555268:	72 03                	jb     0x55526d
  55526a:	00 28                	add    BYTE PTR [eax],ch
  55526c:	cb                   	retf
  55526d:	4a                   	dec    edx
  55526e:	00 04 3c             	add    BYTE PTR [esp+edi*1],al
  555271:	55                   	push   ebp
  555272:	00 40 50             	add    BYTE PTR [eax+0x50],al
  555275:	42                   	inc    edx
  555276:	00 90 7c 52 55 00    	add    BYTE PTR [eax+0x55527c],dl
  55527c:	07                   	pop    es
  55527d:	0a 54 66 72          	or     dl,BYTE PTR [esi+eiz*2+0x72]
  555281:	6d                   	ins    DWORD PTR es:[edi],dx
  555282:	50                   	push   eax
  555283:	6c                   	ins    BYTE PTR es:[edi],dx
  555284:	61                   	popa
  555285:	79 65                	jns    0x5552ec
  555287:	72 88                	jb     0x555211
  555289:	50                   	push   eax
  55528a:	55                   	push   ebp
  55528b:	00 14 ea             	add    BYTE PTR [edx+ebp*8],dl
  55528e:	54                   	push   esp
  55528f:	00 5a 00             	add    BYTE PTR [edx+0x0],bl
  555292:	0a 46 6f             	or     al,BYTE PTR [esi+0x6f]
  555295:	72 6d                	jb     0x555304
  555297:	50                   	push   eax
  555298:	6c                   	ins    BYTE PTR es:[edi],dx
  555299:	61                   	popa
  55529a:	79 65                	jns    0x555301
  55529c:	72 00                	jb     0x55529e
  55529e:	00 90 55 8b ec 83    	add    BYTE PTR [eax-0x7c1374ab],dl
  5552a4:	c4                   	(bad)
  5552a5:	f4                   	hlt
  5552a6:	84 d2                	test   dl,dl
  5552a8:	74 08                	je     0x5552b2
  5552aa:	83 c4 f0             	add    esp,0xfffffff0
  5552ad:	e8 22 e1 ea ff       	call   0x4033d4
  5552b2:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
  5552b5:	88 55 fb             	mov    BYTE PTR [ebp-0x5],dl
  5552b8:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5552bb:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5552c0:	8b 00                	mov    eax,DWORD PTR [eax]
  5552c2:	8b 80 2c 01 00 00    	mov    eax,DWORD PTR [eax+0x12c]
  5552c8:	50                   	push   eax
  5552c9:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
  5552cc:	33 d2                	xor    edx,edx
  5552ce:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5552d1:	e8 6e 99 ff ff       	call   0x54ec44
  5552d6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5552d9:	80 7d fb 00          	cmp    BYTE PTR [ebp-0x5],0x0
  5552dd:	74 0f                	je     0x5552ee
  5552df:	e8 48 e1 ea ff       	call   0x40342c
  5552e4:	64 8f 05 00 00 00 00 	pop    DWORD PTR fs:0x0
  5552eb:	83 c4 0c             	add    esp,0xc
  5552ee:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5552f1:	8b e5                	mov    esp,ebp
  5552f3:	5d                   	pop    ebp
  5552f4:	c3                   	ret
  5552f5:	8d 40 00             	lea    eax,[eax+0x0]
  5552f8:	55                   	push   ebp
  5552f9:	8b ec                	mov    ebp,esp
  5552fb:	83 c4 dc             	add    esp,0xffffffdc
  5552fe:	33 d2                	xor    edx,edx
  555300:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
  555303:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  555306:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  555309:	33 c0                	xor    eax,eax
  55530b:	55                   	push   ebp
  55530c:	68 83 59 55 00       	push   0x555983
  555311:	64 ff 30             	push   DWORD PTR fs:[eax]
  555314:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  555317:	33 c0                	xor    eax,eax
  555319:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  55531c:	33 d2                	xor    edx,edx
  55531e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555321:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555327:	e8 18 d4 ed ff       	call   0x432744
  55532c:	33 d2                	xor    edx,edx
  55532e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555331:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  555337:	e8 08 d4 ed ff       	call   0x432744
  55533c:	33 d2                	xor    edx,edx
  55533e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555341:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  555347:	e8 f8 d3 ed ff       	call   0x432744
  55534c:	33 d2                	xor    edx,edx
  55534e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555351:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  555357:	e8 e8 d3 ed ff       	call   0x432744
  55535c:	33 d2                	xor    edx,edx
  55535e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555361:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555367:	e8 d8 d3 ed ff       	call   0x432744
  55536c:	33 d2                	xor    edx,edx
  55536e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555371:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  555377:	e8 c8 d3 ed ff       	call   0x432744
  55537c:	33 d2                	xor    edx,edx
  55537e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555381:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555387:	e8 b8 d3 ed ff       	call   0x432744
  55538c:	33 d2                	xor    edx,edx
  55538e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555391:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  555397:	e8 a8 d3 ed ff       	call   0x432744
  55539c:	33 d2                	xor    edx,edx
  55539e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5553a1:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  5553a7:	8b 08                	mov    ecx,DWORD PTR [eax]
  5553a9:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5553ac:	33 d2                	xor    edx,edx
  5553ae:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5553b1:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  5553b7:	8b 08                	mov    ecx,DWORD PTR [eax]
  5553b9:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5553bc:	33 d2                	xor    edx,edx
  5553be:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5553c1:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  5553c7:	8b 08                	mov    ecx,DWORD PTR [eax]
  5553c9:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5553cc:	33 d2                	xor    edx,edx
  5553ce:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5553d1:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  5553d7:	8b 08                	mov    ecx,DWORD PTR [eax]
  5553d9:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5553dc:	33 d2                	xor    edx,edx
  5553de:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5553e1:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  5553e7:	8b 08                	mov    ecx,DWORD PTR [eax]
  5553e9:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5553ec:	33 d2                	xor    edx,edx
  5553ee:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5553f1:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  5553f7:	8b 08                	mov    ecx,DWORD PTR [eax]
  5553f9:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5553fc:	33 d2                	xor    edx,edx
  5553fe:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555401:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555407:	8b 08                	mov    ecx,DWORD PTR [eax]
  555409:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55540c:	33 d2                	xor    edx,edx
  55540e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555411:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  555417:	8b 08                	mov    ecx,DWORD PTR [eax]
  555419:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55541c:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555421:	8b 00                	mov    eax,DWORD PTR [eax]
  555423:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  555429:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55542c:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555432:	e8 b9 96 f5 ff       	call   0x4aeaf0
  555437:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55543c:	8b 00                	mov    eax,DWORD PTR [eax]
  55543e:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  555444:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555447:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  55544d:	e8 9e 96 f5 ff       	call   0x4aeaf0
  555452:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555457:	8b 00                	mov    eax,DWORD PTR [eax]
  555459:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  55545f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555462:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  555468:	e8 83 96 f5 ff       	call   0x4aeaf0
  55546d:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555472:	8b 00                	mov    eax,DWORD PTR [eax]
  555474:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  55547a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55547d:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  555483:	e8 68 96 f5 ff       	call   0x4aeaf0
  555488:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55548d:	8b 00                	mov    eax,DWORD PTR [eax]
  55548f:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  555495:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555498:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55549e:	e8 4d 96 f5 ff       	call   0x4aeaf0
  5554a3:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5554a8:	8b 00                	mov    eax,DWORD PTR [eax]
  5554aa:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  5554b0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5554b3:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  5554b9:	e8 32 96 f5 ff       	call   0x4aeaf0
  5554be:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5554c3:	8b 00                	mov    eax,DWORD PTR [eax]
  5554c5:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  5554cb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5554ce:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  5554d4:	e8 17 96 f5 ff       	call   0x4aeaf0
  5554d9:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5554de:	8b 00                	mov    eax,DWORD PTR [eax]
  5554e0:	8b 90 ac 00 00 00    	mov    edx,DWORD PTR [eax+0xac]
  5554e6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5554e9:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  5554ef:	e8 fc 95 f5 ff       	call   0x4aeaf0
  5554f4:	33 c0                	xor    eax,eax
  5554f6:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
  5554f9:	8d 45 f4             	lea    eax,[ebp-0xc]
  5554fc:	50                   	push   eax
  5554fd:	8d 45 f0             	lea    eax,[ebp-0x10]
  555500:	50                   	push   eax
  555501:	8d 45 dc             	lea    eax,[ebp-0x24]
  555504:	50                   	push   eax
  555505:	8d 4d f8             	lea    ecx,[ebp-0x8]
  555508:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55550d:	8b 00                	mov    eax,DWORD PTR [eax]
  55550f:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
  555512:	e8 3d 39 01 00       	call   0x568e54
  555517:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55551a:	83 f8 04             	cmp    eax,0x4
  55551d:	77 75                	ja     0x555594
  55551f:	ff 24 85 26 55 55 00 	jmp    DWORD PTR [eax*4+0x555526]
  555526:	3a 55 55             	cmp    dl,BYTE PTR [ebp+0x55]
  555529:	00 4c 55 55          	add    BYTE PTR [ebp+edx*2+0x55],cl
  55552d:	00 5e 55             	add    BYTE PTR [esi+0x55],bl
  555530:	55                   	push   ebp
  555531:	00 70 55             	add    BYTE PTR [eax+0x55],dh
  555534:	55                   	push   ebp
  555535:	00 82 55 55 00 a1    	add    BYTE PTR [edx-0x5effaaab],al
  55553b:	08 21                	or     BYTE PTR [ecx],ah
  55553d:	57                   	push   edi
  55553e:	00 8b 00 8b 80 98    	add    BYTE PTR [ebx-0x677f7500],cl
  555544:	00 00                	add    BYTE PTR [eax],al
  555546:	00 89 45 e4 eb 58    	add    BYTE PTR [ecx+0x58ebe445],cl
  55554c:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555551:	8b 00                	mov    eax,DWORD PTR [eax]
  555553:	8b 80 9c 00 00 00    	mov    eax,DWORD PTR [eax+0x9c]
  555559:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  55555c:	eb 46                	jmp    0x5555a4
  55555e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555563:	8b 00                	mov    eax,DWORD PTR [eax]
  555565:	8b 80 a0 00 00 00    	mov    eax,DWORD PTR [eax+0xa0]
  55556b:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  55556e:	eb 34                	jmp    0x5555a4
  555570:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555575:	8b 00                	mov    eax,DWORD PTR [eax]
  555577:	8b 80 a4 00 00 00    	mov    eax,DWORD PTR [eax+0xa4]
  55557d:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  555580:	eb 22                	jmp    0x5555a4
  555582:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555587:	8b 00                	mov    eax,DWORD PTR [eax]
  555589:	8b 80 a8 00 00 00    	mov    eax,DWORD PTR [eax+0xa8]
  55558f:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  555592:	eb 10                	jmp    0x5555a4
  555594:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555599:	8b 00                	mov    eax,DWORD PTR [eax]
  55559b:	8b 80 ac 00 00 00    	mov    eax,DWORD PTR [eax+0xac]
  5555a1:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
  5555a4:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5555a9:	8b 00                	mov    eax,DWORD PTR [eax]
  5555ab:	8b 80 1c 01 00 00    	mov    eax,DWORD PTR [eax+0x11c]
  5555b1:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
  5555b4:	3b 45 ec             	cmp    eax,DWORD PTR [ebp-0x14]
  5555b7:	0f 94 45 e3          	sete   BYTE PTR [ebp-0x1d]
  5555bb:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5555be:	e8 6d ea ea ff       	call   0x404030
  5555c3:	85 c0                	test   eax,eax
  5555c5:	0f 8e ee 02 00 00    	jle    0x5558b9
  5555cb:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
  5555ce:	83 f8 07             	cmp    eax,0x7
  5555d1:	0f 87 d7 02 00 00    	ja     0x5558ae
  5555d7:	ff 24 85 de 55 55 00 	jmp    DWORD PTR [eax*4+0x5555de]
  5555de:	fe                   	(bad)
  5555df:	55                   	push   ebp
  5555e0:	55                   	push   ebp
  5555e1:	00 55 56             	add    BYTE PTR [ebp+0x56],dl
  5555e4:	55                   	push   ebp
  5555e5:	00 ac 56 55 00 03 57 	add    BYTE PTR [esi+edx*2+0x57030055],ch
  5555ec:	55                   	push   ebp
  5555ed:	00 5a 57             	add    BYTE PTR [edx+0x57],bl
  5555f0:	55                   	push   ebp
  5555f1:	00 b1 57 55 00 08    	add    BYTE PTR [ecx+0x8005557],dh
  5555f7:	58                   	pop    eax
  5555f8:	55                   	push   ebp
  5555f9:	00 5c 58 55          	add    BYTE PTR [eax+ebx*2+0x55],bl
  5555fd:	00 8b 55 f8 8b 45    	add    BYTE PTR [ebx+0x458bf855],cl
  555603:	fc                   	cld
  555604:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  55560a:	e8 35 d1 ed ff       	call   0x432744
  55560f:	b2 01                	mov    dl,0x1
  555611:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555614:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  55561a:	8b 08                	mov    ecx,DWORD PTR [eax]
  55561c:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55561f:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  555622:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555625:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  55562b:	e8 c0 94 f5 ff       	call   0x4aeaf0
  555630:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  555633:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  555636:	89 82 34 03 00 00    	mov    DWORD PTR [edx+0x334],eax
  55563c:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  55563f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555642:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555648:	8b 08                	mov    ecx,DWORD PTR [eax]
  55564a:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  555650:	e9 59 02 00 00       	jmp    0x5558ae
  555655:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  555658:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55565b:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  555661:	e8 de d0 ed ff       	call   0x432744
  555666:	b2 01                	mov    dl,0x1
  555668:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55566b:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  555671:	8b 08                	mov    ecx,DWORD PTR [eax]
  555673:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  555676:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  555679:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55567c:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  555682:	e8 69 94 f5 ff       	call   0x4aeaf0
  555687:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  55568a:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55568d:	89 82 38 03 00 00    	mov    DWORD PTR [edx+0x338],eax
  555693:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  555696:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555699:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  55569f:	8b 08                	mov    ecx,DWORD PTR [eax]
  5556a1:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  5556a7:	e9 02 02 00 00       	jmp    0x5558ae
  5556ac:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5556af:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5556b2:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  5556b8:	e8 87 d0 ed ff       	call   0x432744
  5556bd:	b2 01                	mov    dl,0x1
  5556bf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5556c2:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  5556c8:	8b 08                	mov    ecx,DWORD PTR [eax]
  5556ca:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5556cd:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  5556d0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5556d3:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  5556d9:	e8 12 94 f5 ff       	call   0x4aeaf0
  5556de:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  5556e1:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  5556e4:	89 82 3c 03 00 00    	mov    DWORD PTR [edx+0x33c],eax
  5556ea:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  5556ed:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5556f0:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  5556f6:	8b 08                	mov    ecx,DWORD PTR [eax]
  5556f8:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  5556fe:	e9 ab 01 00 00       	jmp    0x5558ae
  555703:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  555706:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555709:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55570f:	e8 30 d0 ed ff       	call   0x432744
  555714:	b2 01                	mov    dl,0x1
  555716:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555719:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55571f:	8b 08                	mov    ecx,DWORD PTR [eax]
  555721:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  555724:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  555727:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55572a:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  555730:	e8 bb 93 f5 ff       	call   0x4aeaf0
  555735:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  555738:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  55573b:	89 82 40 03 00 00    	mov    DWORD PTR [edx+0x340],eax
  555741:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  555744:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555747:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55574d:	8b 08                	mov    ecx,DWORD PTR [eax]
  55574f:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  555755:	e9 54 01 00 00       	jmp    0x5558ae
  55575a:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55575d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555760:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555766:	e8 d9 cf ed ff       	call   0x432744
  55576b:	b2 01                	mov    dl,0x1
  55576d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555770:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555776:	8b 08                	mov    ecx,DWORD PTR [eax]
  555778:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55577b:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  55577e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555781:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555787:	e8 64 93 f5 ff       	call   0x4aeaf0
  55578c:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  55578f:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  555792:	89 82 44 03 00 00    	mov    DWORD PTR [edx+0x344],eax
  555798:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  55579b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55579e:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  5557a4:	8b 08                	mov    ecx,DWORD PTR [eax]
  5557a6:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  5557ac:	e9 fd 00 00 00       	jmp    0x5558ae
  5557b1:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5557b4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5557b7:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  5557bd:	e8 82 cf ed ff       	call   0x432744
  5557c2:	b2 01                	mov    dl,0x1
  5557c4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5557c7:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  5557cd:	8b 08                	mov    ecx,DWORD PTR [eax]
  5557cf:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5557d2:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  5557d5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5557d8:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  5557de:	e8 0d 93 f5 ff       	call   0x4aeaf0
  5557e3:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  5557e6:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  5557e9:	89 82 48 03 00 00    	mov    DWORD PTR [edx+0x348],eax
  5557ef:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  5557f2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5557f5:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  5557fb:	8b 08                	mov    ecx,DWORD PTR [eax]
  5557fd:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  555803:	e9 a6 00 00 00       	jmp    0x5558ae
  555808:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55580b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55580e:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555814:	e8 2b cf ed ff       	call   0x432744
  555819:	b2 01                	mov    dl,0x1
  55581b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55581e:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555824:	8b 08                	mov    ecx,DWORD PTR [eax]
  555826:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  555829:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  55582c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55582f:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555835:	e8 b6 92 f5 ff       	call   0x4aeaf0
  55583a:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  55583d:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  555840:	89 82 4c 03 00 00    	mov    DWORD PTR [edx+0x34c],eax
  555846:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  555849:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55584c:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555852:	8b 08                	mov    ecx,DWORD PTR [eax]
  555854:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  55585a:	eb 52                	jmp    0x5558ae
  55585c:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55585f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555862:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  555868:	e8 d7 ce ed ff       	call   0x432744
  55586d:	b2 01                	mov    dl,0x1
  55586f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555872:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  555878:	8b 08                	mov    ecx,DWORD PTR [eax]
  55587a:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  55587d:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
  555880:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555883:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  555889:	e8 62 92 f5 ff       	call   0x4aeaf0
  55588e:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  555891:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  555894:	89 82 50 03 00 00    	mov    DWORD PTR [edx+0x350],eax
  55589a:	8a 55 e3             	mov    dl,BYTE PTR [ebp-0x1d]
  55589d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5558a0:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  5558a6:	8b 08                	mov    ecx,DWORD PTR [eax]
  5558a8:	ff 91 bc 00 00 00    	call   DWORD PTR [ecx+0xbc]
  5558ae:	83 45 e8 01          	add    DWORD PTR [ebp-0x18],0x1
  5558b2:	71 05                	jno    0x5558b9
  5558b4:	e8 1b d7 ea ff       	call   0x402fd4
  5558b9:	ff 45 ec             	inc    DWORD PTR [ebp-0x14]
  5558bc:	83 7d ec 08          	cmp    DWORD PTR [ebp-0x14],0x8
  5558c0:	0f 85 33 fc ff ff    	jne    0x5554f9
  5558c6:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5558cb:	8b 00                	mov    eax,DWORD PTR [eax]
  5558cd:	e8 66 37 01 00       	call   0x569038
  5558d2:	85 c0                	test   eax,eax
  5558d4:	0f 9f c2             	setg   dl
  5558d7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5558da:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  5558e0:	8b 08                	mov    ecx,DWORD PTR [eax]
  5558e2:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  5558e5:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5558ea:	8b 00                	mov    eax,DWORD PTR [eax]
  5558ec:	e8 47 37 01 00       	call   0x569038
  5558f1:	83 f8 08             	cmp    eax,0x8
  5558f4:	0f 9c c2             	setl   dl
  5558f7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5558fa:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555900:	8b 08                	mov    ecx,DWORD PTR [eax]
  555902:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  555905:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555908:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55590e:	8b 10                	mov    edx,DWORD PTR [eax]
  555910:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
  555913:	84 c0                	test   al,al
  555915:	75 10                	jne    0x555927
  555917:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55591a:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555920:	e8 c7 d2 ed ff       	call   0x432bec
  555925:	eb 0e                	jmp    0x555935
  555927:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55592a:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555930:	e8 bf d2 ed ff       	call   0x432bf4
  555935:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555938:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55593e:	8b 10                	mov    edx,DWORD PTR [eax]
  555940:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
  555943:	84 c0                	test   al,al
  555945:	75 10                	jne    0x555957
  555947:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55594a:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555950:	e8 97 d2 ed ff       	call   0x432bec
  555955:	eb 0e                	jmp    0x555965
  555957:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55595a:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555960:	e8 8f d2 ed ff       	call   0x432bf4
  555965:	33 c0                	xor    eax,eax
  555967:	5a                   	pop    edx
  555968:	59                   	pop    ecx
  555969:	59                   	pop    ecx
  55596a:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55596d:	68 8a 59 55 00       	push   0x55598a
  555972:	8d 45 dc             	lea    eax,[ebp-0x24]
  555975:	e8 36 e4 ea ff       	call   0x403db0
  55597a:	8d 45 f8             	lea    eax,[ebp-0x8]
  55597d:	e8 2e e4 ea ff       	call   0x403db0
  555982:	c3                   	ret
  555983:	e9 6c de ea ff       	jmp    0x4037f4
  555988:	eb e8                	jmp    0x555972
  55598a:	8b e5                	mov    esp,ebp
  55598c:	5d                   	pop    ebp
  55598d:	c3                   	ret
  55598e:	8b c0                	mov    eax,eax
  555990:	55                   	push   ebp
  555991:	8b ec                	mov    ebp,esp
  555993:	81 c4 dc fe ff ff    	add    esp,0xfffffedc
  555999:	33 c9                	xor    ecx,ecx
  55599b:	89 8d e4 fe ff ff    	mov    DWORD PTR [ebp-0x11c],ecx
  5559a1:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  5559a4:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
  5559a7:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  5559aa:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5559ad:	33 c0                	xor    eax,eax
  5559af:	55                   	push   ebp
  5559b0:	68 00 5e 55 00       	push   0x555e00
  5559b5:	64 ff 30             	push   DWORD PTR fs:[eax]
  5559b8:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  5559bb:	8d 95 e8 fe ff ff    	lea    edx,[ebp-0x118]
  5559c1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5559c4:	8b 00                	mov    eax,DWORD PTR [eax]
  5559c6:	e8 15 d6 ea ff       	call   0x402fe0
  5559cb:	8d 95 e8 fe ff ff    	lea    edx,[ebp-0x118]
  5559d1:	8d 45 e8             	lea    eax,[ebp-0x18]
  5559d4:	e8 fb e5 ea ff       	call   0x403fd4
  5559d9:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
  5559dc:	68 14 5e 55 00       	push   0x555e14
  5559e1:	68 20 5e 55 00       	push   0x555e20
  5559e6:	8d 45 ec             	lea    eax,[ebp-0x14]
  5559e9:	ba 03 00 00 00       	mov    edx,0x3
  5559ee:	e8 fd e6 ea ff       	call   0x4040f0
  5559f3:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  5559f6:	50                   	push   eax
  5559f7:	e8 90 e7 f4 ff       	call   0x4a418c
  5559fc:	8a 0d 2c 5e 55 00    	mov    cl,BYTE PTR ds:0x555e2c
  555a02:	5a                   	pop    edx
  555a03:	e8 b0 ee f4 ff       	call   0x4a48b8
  555a08:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  555a0b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555a0e:	e8 55 94 ff ff       	call   0x54ee68
  555a13:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  555a19:	8b 92 a8 00 00 00    	mov    edx,DWORD PTR [edx+0xa8]
  555a1f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555a22:	8b 80 00 03 00 00    	mov    eax,DWORD PTR [eax+0x300]
  555a28:	e8 17 cd ed ff       	call   0x432744
  555a2d:	8d 85 e4 fe ff ff    	lea    eax,[ebp-0x11c]
  555a33:	50                   	push   eax
  555a34:	a1 04 24 57 00       	mov    eax,ds:0x572404
  555a39:	8b 80 e4 00 00 00    	mov    eax,DWORD PTR [eax+0xe4]
  555a3f:	89 85 dc fe ff ff    	mov    DWORD PTR [ebp-0x124],eax
  555a45:	c6 85 e0 fe ff ff 0b 	mov    BYTE PTR [ebp-0x120],0xb
  555a4c:	8d 95 dc fe ff ff    	lea    edx,[ebp-0x124]
  555a52:	a1 04 24 57 00       	mov    eax,ds:0x572404
  555a57:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  555a5a:	33 c9                	xor    ecx,ecx
  555a5c:	e8 33 4e eb ff       	call   0x40a894
  555a61:	8b 95 e4 fe ff ff    	mov    edx,DWORD PTR [ebp-0x11c]
  555a67:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555a6a:	8b 80 30 03 00 00    	mov    eax,DWORD PTR [eax+0x330]
  555a70:	e8 cf cc ed ff       	call   0x432744
  555a75:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  555a7b:	8b 92 24 01 00 00    	mov    edx,DWORD PTR [edx+0x124]
  555a81:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555a84:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555a8a:	e8 b5 cc ed ff       	call   0x432744
  555a8f:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  555a95:	8b 92 28 01 00 00    	mov    edx,DWORD PTR [edx+0x128]
  555a9b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555a9e:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555aa4:	e8 9b cc ed ff       	call   0x432744
  555aa9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555aac:	e8 47 f8 ff ff       	call   0x5552f8
  555ab1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555ab4:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555aba:	8b 40 38             	mov    eax,DWORD PTR [eax+0x38]
  555abd:	83 c0 02             	add    eax,0x2
  555ac0:	71 05                	jno    0x555ac7
  555ac2:	e8 0d d5 ea ff       	call   0x402fd4
  555ac7:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  555aca:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555acd:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555ad3:	8b 40 3c             	mov    eax,DWORD PTR [eax+0x3c]
  555ad6:	83 c0 02             	add    eax,0x2
  555ad9:	71 05                	jno    0x555ae0
  555adb:	e8 f4 d4 ea ff       	call   0x402fd4
  555ae0:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
  555ae3:	ba 84 00 00 00       	mov    edx,0x84
  555ae8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555aeb:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555af1:	e8 5e c4 ed ff       	call   0x431f54
  555af6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555af9:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555aff:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  555b02:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b05:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  555b0b:	e8 44 c4 ed ff       	call   0x431f54
  555b10:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b13:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555b19:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  555b1c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b1f:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  555b25:	e8 2a c4 ed ff       	call   0x431f54
  555b2a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b2d:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555b33:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  555b36:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b39:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  555b3f:	e8 10 c4 ed ff       	call   0x431f54
  555b44:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
  555b47:	81 c2 84 00 00 00    	add    edx,0x84
  555b4d:	71 05                	jno    0x555b54
  555b4f:	e8 80 d4 ea ff       	call   0x402fd4
  555b54:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b57:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555b5d:	e8 f2 c3 ed ff       	call   0x431f54
  555b62:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b65:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555b6b:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  555b6e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b71:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  555b77:	e8 d8 c3 ed ff       	call   0x431f54
  555b7c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b7f:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555b85:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  555b88:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b8b:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555b91:	e8 be c3 ed ff       	call   0x431f54
  555b96:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555b99:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555b9f:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  555ba2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555ba5:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  555bab:	e8 a4 c3 ed ff       	call   0x431f54
  555bb0:	33 d2                	xor    edx,edx
  555bb2:	71 05                	jno    0x555bb9
  555bb4:	e8 1b d4 ea ff       	call   0x402fd4
  555bb9:	83 c2 64             	add    edx,0x64
  555bbc:	71 05                	jno    0x555bc3
  555bbe:	e8 11 d4 ea ff       	call   0x402fd4
  555bc3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555bc6:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  555bcc:	e8 63 c3 ed ff       	call   0x431f34
  555bd1:	6b 55 f4 01          	imul   edx,DWORD PTR [ebp-0xc],0x1
  555bd5:	71 05                	jno    0x555bdc
  555bd7:	e8 f8 d3 ea ff       	call   0x402fd4
  555bdc:	83 c2 64             	add    edx,0x64
  555bdf:	71 05                	jno    0x555be6
  555be1:	e8 ee d3 ea ff       	call   0x402fd4
  555be6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555be9:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  555bef:	e8 40 c3 ed ff       	call   0x431f34
  555bf4:	6b 55 f4 02          	imul   edx,DWORD PTR [ebp-0xc],0x2
  555bf8:	71 05                	jno    0x555bff
  555bfa:	e8 d5 d3 ea ff       	call   0x402fd4
  555bff:	83 c2 64             	add    edx,0x64
  555c02:	71 05                	jno    0x555c09
  555c04:	e8 cb d3 ea ff       	call   0x402fd4
  555c09:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555c0c:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  555c12:	e8 1d c3 ed ff       	call   0x431f34
  555c17:	6b 55 f4 03          	imul   edx,DWORD PTR [ebp-0xc],0x3
  555c1b:	71 05                	jno    0x555c22
  555c1d:	e8 b2 d3 ea ff       	call   0x402fd4
  555c22:	83 c2 64             	add    edx,0x64
  555c25:	71 05                	jno    0x555c2c
  555c27:	e8 a8 d3 ea ff       	call   0x402fd4
  555c2c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555c2f:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  555c35:	e8 fa c2 ed ff       	call   0x431f34
  555c3a:	33 d2                	xor    edx,edx
  555c3c:	71 05                	jno    0x555c43
  555c3e:	e8 91 d3 ea ff       	call   0x402fd4
  555c43:	83 c2 64             	add    edx,0x64
  555c46:	71 05                	jno    0x555c4d
  555c48:	e8 87 d3 ea ff       	call   0x402fd4
  555c4d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555c50:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  555c56:	e8 d9 c2 ed ff       	call   0x431f34
  555c5b:	6b 55 f4 01          	imul   edx,DWORD PTR [ebp-0xc],0x1
  555c5f:	71 05                	jno    0x555c66
  555c61:	e8 6e d3 ea ff       	call   0x402fd4
  555c66:	83 c2 64             	add    edx,0x64
  555c69:	71 05                	jno    0x555c70
  555c6b:	e8 64 d3 ea ff       	call   0x402fd4
  555c70:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555c73:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  555c79:	e8 b6 c2 ed ff       	call   0x431f34
  555c7e:	6b 55 f4 02          	imul   edx,DWORD PTR [ebp-0xc],0x2
  555c82:	71 05                	jno    0x555c89
  555c84:	e8 4b d3 ea ff       	call   0x402fd4
  555c89:	83 c2 64             	add    edx,0x64
  555c8c:	71 05                	jno    0x555c93
  555c8e:	e8 41 d3 ea ff       	call   0x402fd4
  555c93:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555c96:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  555c9c:	e8 93 c2 ed ff       	call   0x431f34
  555ca1:	6b 55 f4 03          	imul   edx,DWORD PTR [ebp-0xc],0x3
  555ca5:	71 05                	jno    0x555cac
  555ca7:	e8 28 d3 ea ff       	call   0x402fd4
  555cac:	83 c2 64             	add    edx,0x64
  555caf:	71 05                	jno    0x555cb6
  555cb1:	e8 1e d3 ea ff       	call   0x402fd4
  555cb6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555cb9:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  555cbf:	e8 70 c2 ed ff       	call   0x431f34
  555cc4:	33 d2                	xor    edx,edx
  555cc6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555cc9:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  555ccf:	8b 08                	mov    ecx,DWORD PTR [eax]
  555cd1:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  555cd4:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555cd7:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  555cdd:	e8 0a cf ed ff       	call   0x432bec
  555ce2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555ce5:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  555ceb:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  555cee:	8b 52 38             	mov    edx,DWORD PTR [edx+0x38]
  555cf1:	2b 50 38             	sub    edx,DWORD PTR [eax+0x38]
  555cf4:	71 05                	jno    0x555cfb
  555cf6:	e8 d9 d2 ea ff       	call   0x402fd4
  555cfb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555cfe:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  555d04:	e8 2b c2 ed ff       	call   0x431f34
  555d09:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555d0e:	8b 00                	mov    eax,DWORD PTR [eax]
  555d10:	e8 23 33 01 00       	call   0x569038
  555d15:	85 c0                	test   eax,eax
  555d17:	0f 9f c2             	setg   dl
  555d1a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555d1d:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555d23:	8b 08                	mov    ecx,DWORD PTR [eax]
  555d25:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  555d28:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555d2d:	8b 00                	mov    eax,DWORD PTR [eax]
  555d2f:	e8 04 33 01 00       	call   0x569038
  555d34:	83 f8 08             	cmp    eax,0x8
  555d37:	0f 9c c2             	setl   dl
  555d3a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555d3d:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555d43:	8b 08                	mov    ecx,DWORD PTR [eax]
  555d45:	ff 51 5c             	call   DWORD PTR [ecx+0x5c]
  555d48:	33 d2                	xor    edx,edx
  555d4a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555d4d:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555d53:	e8 dc c1 ed ff       	call   0x431f34
  555d58:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555d5b:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555d61:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
  555d64:	8b 52 3c             	mov    edx,DWORD PTR [edx+0x3c]
  555d67:	2b 50 3c             	sub    edx,DWORD PTR [eax+0x3c]
  555d6a:	71 05                	jno    0x555d71
  555d6c:	e8 63 d2 ea ff       	call   0x402fd4
  555d71:	83 ea 02             	sub    edx,0x2
  555d74:	71 05                	jno    0x555d7b
  555d76:	e8 59 d2 ea ff       	call   0x402fd4
  555d7b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555d7e:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555d84:	e8 cb c1 ed ff       	call   0x431f54
  555d89:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555d8c:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555d92:	8b 50 30             	mov    edx,DWORD PTR [eax+0x30]
  555d95:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555d98:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555d9e:	03 50 38             	add    edx,DWORD PTR [eax+0x38]
  555da1:	71 05                	jno    0x555da8
  555da3:	e8 2c d2 ea ff       	call   0x402fd4
  555da8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555dab:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555db1:	e8 7e c1 ed ff       	call   0x431f34
  555db6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555db9:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  555dbf:	8b 50 34             	mov    edx,DWORD PTR [eax+0x34]
  555dc2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555dc5:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555dcb:	e8 84 c1 ed ff       	call   0x431f54
  555dd0:	e8 b7 e3 f4 ff       	call   0x4a418c
  555dd5:	e8 d6 eb f4 ff       	call   0x4a49b0
  555dda:	33 c0                	xor    eax,eax
  555ddc:	5a                   	pop    edx
  555ddd:	59                   	pop    ecx
  555dde:	59                   	pop    ecx
  555ddf:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  555de2:	68 07 5e 55 00       	push   0x555e07
  555de7:	8d 85 e4 fe ff ff    	lea    eax,[ebp-0x11c]
  555ded:	e8 be df ea ff       	call   0x403db0
  555df2:	8d 45 e8             	lea    eax,[ebp-0x18]
  555df5:	ba 02 00 00 00       	mov    edx,0x2
  555dfa:	e8 d5 df ea ff       	call   0x403dd4
  555dff:	c3                   	ret
  555e00:	e9 ef d9 ea ff       	jmp    0x4037f4
  555e05:	eb e0                	jmp    0x555de7
  555e07:	8b e5                	mov    esp,ebp
  555e09:	5d                   	pop    ebp
  555e0a:	c3                   	ret
  555e0b:	00 ff                	add    bh,bh
  555e0d:	ff                   	(bad)
  555e0e:	ff                   	(bad)
  555e0f:	ff 01                	inc    DWORD PTR [ecx]
  555e11:	00 00                	add    BYTE PTR [eax],al
  555e13:	00 2e                	add    BYTE PTR [esi],ch
  555e15:	00 00                	add    BYTE PTR [eax],al
  555e17:	00 ff                	add    bh,bh
  555e19:	ff                   	(bad)
  555e1a:	ff                   	(bad)
  555e1b:	ff 08                	dec    DWORD PTR [eax]
  555e1d:	00 00                	add    BYTE PTR [eax],al
  555e1f:	00 46 6f             	add    BYTE PTR [esi+0x6f],al
  555e22:	72 6d                	jb     0x555e91
  555e24:	53                   	push   ebx
  555e25:	68 6f 77 00 00       	push   0x776f
  555e2a:	00 00                	add    BYTE PTR [eax],al
  555e2c:	01 00                	add    DWORD PTR [eax],eax
  555e2e:	00 00                	add    BYTE PTR [eax],al
  555e30:	55                   	push   ebp
  555e31:	8b ec                	mov    ebp,esp
  555e33:	81 c4 e8 fe ff ff    	add    esp,0xfffffee8
  555e39:	33 d2                	xor    edx,edx
  555e3b:	89 95 e8 fe ff ff    	mov    DWORD PTR [ebp-0x118],edx
  555e41:	89 95 ec fe ff ff    	mov    DWORD PTR [ebp-0x114],edx
  555e47:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  555e4a:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
  555e4d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  555e50:	33 c0                	xor    eax,eax
  555e52:	55                   	push   ebp
  555e53:	68 aa 5f 55 00       	push   0x555faa
  555e58:	64 ff 30             	push   DWORD PTR fs:[eax]
  555e5b:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  555e5e:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  555e64:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  555e67:	8b 00                	mov    eax,DWORD PTR [eax]
  555e69:	e8 72 d1 ea ff       	call   0x402fe0
  555e6e:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
  555e74:	8d 45 f0             	lea    eax,[ebp-0x10]
  555e77:	e8 58 e1 ea ff       	call   0x403fd4
  555e7c:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
  555e7f:	68 c0 5f 55 00       	push   0x555fc0
  555e84:	68 cc 5f 55 00       	push   0x555fcc
  555e89:	8d 45 f4             	lea    eax,[ebp-0xc]
  555e8c:	ba 03 00 00 00       	mov    edx,0x3
  555e91:	e8 5a e2 ea ff       	call   0x4040f0
  555e96:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  555e99:	50                   	push   eax
  555e9a:	e8 ed e2 f4 ff       	call   0x4a418c
  555e9f:	8a 0d dc 5f 55 00    	mov    cl,BYTE PTR ds:0x555fdc
  555ea5:	5a                   	pop    edx
  555ea6:	e8 0d ea f4 ff       	call   0x4a48b8
  555eab:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  555eae:	b2 01                	mov    dl,0x1
  555eb0:	a1 a4 41 55 00       	mov    eax,ds:0x5541a4
  555eb5:	e8 02 e5 ff ff       	call   0x5543bc
  555eba:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  555ebd:	33 c0                	xor    eax,eax
  555ebf:	55                   	push   ebp
  555ec0:	68 6e 5f 55 00       	push   0x555f6e
  555ec5:	64 ff 30             	push   DWORD PTR fs:[eax]
  555ec8:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  555ecb:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  555ece:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  555ed4:	33 d2                	xor    edx,edx
  555ed6:	e8 51 c7 ed ff       	call   0x43262c
  555edb:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  555ee0:	8b 00                	mov    eax,DWORD PTR [eax]
  555ee2:	8b 50 38             	mov    edx,DWORD PTR [eax+0x38]
  555ee5:	a1 d4 25 57 00       	mov    eax,ds:0x5725d4
  555eea:	8b 00                	mov    eax,DWORD PTR [eax]
  555eec:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  555ef2:	2b 50 38             	sub    edx,DWORD PTR [eax+0x38]
  555ef5:	71 05                	jno    0x555efc
  555ef7:	e8 d8 d0 ea ff       	call   0x402fd4
  555efc:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  555eff:	8b 80 f4 02 00 00    	mov    eax,DWORD PTR [eax+0x2f4]
  555f05:	e8 2a c0 ed ff       	call   0x431f34
  555f0a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  555f0d:	8b 10                	mov    edx,DWORD PTR [eax]
  555f0f:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
  555f15:	8d 95 ec fe ff ff    	lea    edx,[ebp-0x114]
  555f1b:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  555f1e:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555f24:	e8 eb c7 ed ff       	call   0x432714
  555f29:	83 bd ec fe ff ff 00 	cmp    DWORD PTR [ebp-0x114],0x0
  555f30:	74 d8                	je     0x555f0a
  555f32:	8d 95 e8 fe ff ff    	lea    edx,[ebp-0x118]
  555f38:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  555f3b:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  555f41:	e8 ce c7 ed ff       	call   0x432714
  555f46:	8b 95 e8 fe ff ff    	mov    edx,DWORD PTR [ebp-0x118]
  555f4c:	a1 08 21 57 00       	mov    eax,ds:0x572108
  555f51:	8b 00                	mov    eax,DWORD PTR [eax]
  555f53:	e8 18 36 01 00       	call   0x569570
  555f58:	33 c0                	xor    eax,eax
  555f5a:	5a                   	pop    edx
  555f5b:	59                   	pop    ecx
  555f5c:	59                   	pop    ecx
  555f5d:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  555f60:	68 75 5f 55 00       	push   0x555f75
  555f65:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  555f68:	e8 27 d1 ea ff       	call   0x403094
  555f6d:	c3                   	ret
  555f6e:	e9 81 d8 ea ff       	jmp    0x4037f4
  555f73:	eb f0                	jmp    0x555f65
  555f75:	e8 12 e2 f4 ff       	call   0x4a418c
  555f7a:	e8 31 ea f4 ff       	call   0x4a49b0
  555f7f:	33 c0                	xor    eax,eax
  555f81:	5a                   	pop    edx
  555f82:	59                   	pop    ecx
  555f83:	59                   	pop    ecx
  555f84:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  555f87:	68 b1 5f 55 00       	push   0x555fb1
  555f8c:	8d 85 e8 fe ff ff    	lea    eax,[ebp-0x118]
  555f92:	ba 02 00 00 00       	mov    edx,0x2
  555f97:	e8 38 de ea ff       	call   0x403dd4
  555f9c:	8d 45 f0             	lea    eax,[ebp-0x10]
  555f9f:	ba 02 00 00 00       	mov    edx,0x2
  555fa4:	e8 2b de ea ff       	call   0x403dd4
  555fa9:	c3                   	ret
  555faa:	e9 45 d8 ea ff       	jmp    0x4037f4
  555faf:	eb db                	jmp    0x555f8c
  555fb1:	8b e5                	mov    esp,ebp
  555fb3:	5d                   	pop    ebp
  555fb4:	c3                   	ret
  555fb5:	00 00                	add    BYTE PTR [eax],al
  555fb7:	00 ff                	add    bh,bh
  555fb9:	ff                   	(bad)
  555fba:	ff                   	(bad)
  555fbb:	ff 01                	inc    DWORD PTR [ecx]
  555fbd:	00 00                	add    BYTE PTR [eax],al
  555fbf:	00 2e                	add    BYTE PTR [esi],ch
  555fc1:	00 00                	add    BYTE PTR [eax],al
  555fc3:	00 ff                	add    bh,bh
  555fc5:	ff                   	(bad)
  555fc6:	ff                   	(bad)
  555fc7:	ff 0f                	dec    DWORD PTR [edi]
  555fc9:	00 00                	add    BYTE PTR [eax],al
  555fcb:	00 41 73             	add    BYTE PTR [ecx+0x73],al
  555fce:	6b 46 6f 72          	imul   eax,DWORD PTR [esi+0x6f],0x72
  555fd2:	4e                   	dec    esi
  555fd3:	65 77 50             	gs ja  0x556026
  555fd6:	6c                   	ins    BYTE PTR es:[edi],dx
  555fd7:	61                   	popa
  555fd8:	79 65                	jns    0x55603f
  555fda:	72 00                	jb     0x555fdc
  555fdc:	00 00                	add    BYTE PTR [eax],al
  555fde:	00 00                	add    BYTE PTR [eax],al
  555fe0:	55                   	push   ebp
  555fe1:	8b ec                	mov    ebp,esp
  555fe3:	83 c4 e0             	add    esp,0xffffffe0
  555fe6:	33 c9                	xor    ecx,ecx
  555fe8:	89 4d e0             	mov    DWORD PTR [ebp-0x20],ecx
  555feb:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  555fee:	89 55 e4             	mov    DWORD PTR [ebp-0x1c],edx
  555ff1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  555ff4:	33 c0                	xor    eax,eax
  555ff6:	55                   	push   ebp
  555ff7:	68 86 62 55 00       	push   0x556286
  555ffc:	64 ff 30             	push   DWORD PTR fs:[eax]
  555fff:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  556002:	33 c0                	xor    eax,eax
  556004:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  556007:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55600a:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  556010:	8b 10                	mov    edx,DWORD PTR [eax]
  556012:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  556018:	84 c0                	test   al,al
  55601a:	74 1d                	je     0x556039
  55601c:	8d 55 ec             	lea    edx,[ebp-0x14]
  55601f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556022:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  556028:	e8 e7 c6 ed ff       	call   0x432714
  55602d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556030:	8b 80 34 03 00 00    	mov    eax,DWORD PTR [eax+0x334]
  556036:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  556039:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55603c:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  556042:	8b 10                	mov    edx,DWORD PTR [eax]
  556044:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55604a:	84 c0                	test   al,al
  55604c:	74 1d                	je     0x55606b
  55604e:	8d 55 ec             	lea    edx,[ebp-0x14]
  556051:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556054:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  55605a:	e8 b5 c6 ed ff       	call   0x432714
  55605f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556062:	8b 80 38 03 00 00    	mov    eax,DWORD PTR [eax+0x338]
  556068:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  55606b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55606e:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  556074:	8b 10                	mov    edx,DWORD PTR [eax]
  556076:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55607c:	84 c0                	test   al,al
  55607e:	74 1d                	je     0x55609d
  556080:	8d 55 ec             	lea    edx,[ebp-0x14]
  556083:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556086:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55608c:	e8 83 c6 ed ff       	call   0x432714
  556091:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556094:	8b 80 3c 03 00 00    	mov    eax,DWORD PTR [eax+0x33c]
  55609a:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  55609d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5560a0:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  5560a6:	8b 10                	mov    edx,DWORD PTR [eax]
  5560a8:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  5560ae:	84 c0                	test   al,al
  5560b0:	74 1d                	je     0x5560cf
  5560b2:	8d 55 ec             	lea    edx,[ebp-0x14]
  5560b5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5560b8:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  5560be:	e8 51 c6 ed ff       	call   0x432714
  5560c3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5560c6:	8b 80 40 03 00 00    	mov    eax,DWORD PTR [eax+0x340]
  5560cc:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  5560cf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5560d2:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  5560d8:	8b 10                	mov    edx,DWORD PTR [eax]
  5560da:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  5560e0:	84 c0                	test   al,al
  5560e2:	74 1d                	je     0x556101
  5560e4:	8d 55 ec             	lea    edx,[ebp-0x14]
  5560e7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5560ea:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  5560f0:	e8 1f c6 ed ff       	call   0x432714
  5560f5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5560f8:	8b 80 44 03 00 00    	mov    eax,DWORD PTR [eax+0x344]
  5560fe:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  556101:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556104:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55610a:	8b 10                	mov    edx,DWORD PTR [eax]
  55610c:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  556112:	84 c0                	test   al,al
  556114:	74 1d                	je     0x556133
  556116:	8d 55 ec             	lea    edx,[ebp-0x14]
  556119:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55611c:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  556122:	e8 ed c5 ed ff       	call   0x432714
  556127:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55612a:	8b 80 48 03 00 00    	mov    eax,DWORD PTR [eax+0x348]
  556130:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  556133:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556136:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  55613c:	8b 10                	mov    edx,DWORD PTR [eax]
  55613e:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  556144:	84 c0                	test   al,al
  556146:	74 1d                	je     0x556165
  556148:	8d 55 ec             	lea    edx,[ebp-0x14]
  55614b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55614e:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  556154:	e8 bb c5 ed ff       	call   0x432714
  556159:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55615c:	8b 80 4c 03 00 00    	mov    eax,DWORD PTR [eax+0x34c]
  556162:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  556165:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556168:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55616e:	8b 10                	mov    edx,DWORD PTR [eax]
  556170:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  556176:	84 c0                	test   al,al
  556178:	74 1d                	je     0x556197
  55617a:	8d 55 ec             	lea    edx,[ebp-0x14]
  55617d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556180:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  556186:	e8 89 c5 ed ff       	call   0x432714
  55618b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55618e:	8b 80 50 03 00 00    	mov    eax,DWORD PTR [eax+0x350]
  556194:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
  556197:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55619c:	8b 00                	mov    eax,DWORD PTR [eax]
  55619e:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  5561a4:	e8 33 9e ff ff       	call   0x54ffdc
  5561a9:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5561ae:	8b 00                	mov    eax,DWORD PTR [eax]
  5561b0:	ba 9c 62 55 00       	mov    edx,0x55629c
  5561b5:	e8 b2 3a 01 00       	call   0x569c6c
  5561ba:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5561bf:	8b 00                	mov    eax,DWORD PTR [eax]
  5561c1:	e8 1e 48 01 00       	call   0x56a9e4
  5561c6:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  5561c9:	e8 7e e9 ff ff       	call   0x554b4c
  5561ce:	84 c0                	test   al,al
  5561d0:	74 62                	je     0x556234
  5561d2:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5561d7:	8b 00                	mov    eax,DWORD PTR [eax]
  5561d9:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
  5561dc:	e8 6b 35 01 00       	call   0x56974c
  5561e1:	33 c0                	xor    eax,eax
  5561e3:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  5561e6:	8d 45 f4             	lea    eax,[ebp-0xc]
  5561e9:	50                   	push   eax
  5561ea:	8d 45 f0             	lea    eax,[ebp-0x10]
  5561ed:	50                   	push   eax
  5561ee:	8d 45 e0             	lea    eax,[ebp-0x20]
  5561f1:	50                   	push   eax
  5561f2:	8d 4d ec             	lea    ecx,[ebp-0x14]
  5561f5:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5561fa:	8b 00                	mov    eax,DWORD PTR [eax]
  5561fc:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  5561ff:	e8 50 2c 01 00       	call   0x568e54
  556204:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
  556207:	e8 24 de ea ff       	call   0x404030
  55620c:	85 c0                	test   eax,eax
  55620e:	7e 13                	jle    0x556223
  556210:	a1 08 21 57 00       	mov    eax,ds:0x572108
  556215:	8b 00                	mov    eax,DWORD PTR [eax]
  556217:	8b 80 1c 01 00 00    	mov    eax,DWORD PTR [eax+0x11c]
  55621d:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  556220:	89 50 28             	mov    DWORD PTR [eax+0x28],edx
  556223:	ff 45 f8             	inc    DWORD PTR [ebp-0x8]
  556226:	83 7d f8 08          	cmp    DWORD PTR [ebp-0x8],0x8
  55622a:	75 ba                	jne    0x5561e6
  55622c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55622f:	e8 c4 f0 ff ff       	call   0x5552f8
  556234:	a1 08 21 57 00       	mov    eax,ds:0x572108
  556239:	8b 00                	mov    eax,DWORD PTR [eax]
  55623b:	e8 f8 2d 01 00       	call   0x569038
  556240:	85 c0                	test   eax,eax
  556242:	7f 24                	jg     0x556268
  556244:	a1 08 21 57 00       	mov    eax,ds:0x572108
  556249:	8b 00                	mov    eax,DWORD PTR [eax]
  55624b:	8b 80 1c 01 00 00    	mov    eax,DWORD PTR [eax+0x11c]
  556251:	c7 40 28 ff ff ff ff 	mov    DWORD PTR [eax+0x28],0xffffffff
  556258:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55625b:	e8 d0 fb ff ff       	call   0x555e30
  556260:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556263:	e8 90 f0 ff ff       	call   0x5552f8
  556268:	33 c0                	xor    eax,eax
  55626a:	5a                   	pop    edx
  55626b:	59                   	pop    ecx
  55626c:	59                   	pop    ecx
  55626d:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  556270:	68 8d 62 55 00       	push   0x55628d
  556275:	8d 45 e0             	lea    eax,[ebp-0x20]
  556278:	e8 33 db ea ff       	call   0x403db0
  55627d:	8d 45 ec             	lea    eax,[ebp-0x14]
  556280:	e8 2b db ea ff       	call   0x403db0
  556285:	c3                   	ret
  556286:	e9 69 d5 ea ff       	jmp    0x4037f4
  55628b:	eb e8                	jmp    0x556275
  55628d:	8b e5                	mov    esp,ebp
  55628f:	5d                   	pop    ebp
  556290:	c3                   	ret
  556291:	00 00                	add    BYTE PTR [eax],al
  556293:	00 ff                	add    bh,bh
  556295:	ff                   	(bad)
  556296:	ff                   	(bad)
  556297:	ff 08                	dec    DWORD PTR [eax]
  556299:	00 00                	add    BYTE PTR [eax],al
  55629b:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55629e:	5f                   	pop    edi
  55629f:	52                   	push   edx
  5562a0:	65 64 32 37          	gs xor dh,BYTE PTR fs:[edi]
  5562a4:	00 00                	add    BYTE PTR [eax],al
  5562a6:	00 00                	add    BYTE PTR [eax],al
  5562a8:	55                   	push   ebp
  5562a9:	8b ec                	mov    ebp,esp
  5562ab:	81 c4 e4 fe ff ff    	add    esp,0xfffffee4
  5562b1:	33 c9                	xor    ecx,ecx
  5562b3:	89 8d e4 fe ff ff    	mov    DWORD PTR [ebp-0x11c],ecx
  5562b9:	89 8d e8 fe ff ff    	mov    DWORD PTR [ebp-0x118],ecx
  5562bf:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  5562c2:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  5562c5:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
  5562c8:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  5562cb:	33 c0                	xor    eax,eax
  5562cd:	55                   	push   ebp
  5562ce:	68 29 64 55 00       	push   0x556429
  5562d3:	64 ff 30             	push   DWORD PTR fs:[eax]
  5562d6:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  5562d9:	8d 95 ec fe ff ff    	lea    edx,[ebp-0x114]
  5562df:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5562e2:	8b 00                	mov    eax,DWORD PTR [eax]
  5562e4:	e8 f7 cc ea ff       	call   0x402fe0
  5562e9:	8d 95 ec fe ff ff    	lea    edx,[ebp-0x114]
  5562ef:	8d 45 ec             	lea    eax,[ebp-0x14]
  5562f2:	e8 dd dc ea ff       	call   0x403fd4
  5562f7:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  5562fa:	68 3c 64 55 00       	push   0x55643c
  5562ff:	68 48 64 55 00       	push   0x556448
  556304:	8d 45 f0             	lea    eax,[ebp-0x10]
  556307:	ba 03 00 00 00       	mov    edx,0x3
  55630c:	e8 df dd ea ff       	call   0x4040f0
  556311:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  556314:	50                   	push   eax
  556315:	e8 72 de f4 ff       	call   0x4a418c
  55631a:	8a 0d 54 64 55 00    	mov    cl,BYTE PTR ds:0x556454
  556320:	5a                   	pop    edx
  556321:	e8 92 e5 f4 ff       	call   0x4a48b8
  556326:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55632b:	8b 00                	mov    eax,DWORD PTR [eax]
  55632d:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  556333:	e8 a4 9c ff ff       	call   0x54ffdc
  556338:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55633d:	8b 00                	mov    eax,DWORD PTR [eax]
  55633f:	ba 60 64 55 00       	mov    edx,0x556460
  556344:	e8 23 39 01 00       	call   0x569c6c
  556349:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55634e:	8b 00                	mov    eax,DWORD PTR [eax]
  556350:	e8 8f 46 01 00       	call   0x56a9e4
  556355:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
  556358:	b2 01                	mov    dl,0x1
  55635a:	a1 a4 41 55 00       	mov    eax,ds:0x5541a4
  55635f:	e8 58 e0 ff ff       	call   0x5543bc
  556364:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
  556367:	33 c0                	xor    eax,eax
  556369:	55                   	push   ebp
  55636a:	68 e5 63 55 00       	push   0x5563e5
  55636f:	64 ff 30             	push   DWORD PTR fs:[eax]
  556372:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  556375:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  556378:	8b 10                	mov    edx,DWORD PTR [eax]
  55637a:	ff 92 d8 00 00 00    	call   DWORD PTR [edx+0xd8]
  556380:	8d 95 e8 fe ff ff    	lea    edx,[ebp-0x118]
  556386:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  556389:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55638f:	e8 80 c3 ed ff       	call   0x432714
  556394:	83 bd e8 fe ff ff 00 	cmp    DWORD PTR [ebp-0x118],0x0
  55639b:	74 32                	je     0x5563cf
  55639d:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5563a0:	83 b8 34 02 00 00 01 	cmp    DWORD PTR [eax+0x234],0x1
  5563a7:	75 26                	jne    0x5563cf
  5563a9:	8d 95 e4 fe ff ff    	lea    edx,[ebp-0x11c]
  5563af:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5563b2:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  5563b8:	e8 57 c3 ed ff       	call   0x432714
  5563bd:	8b 95 e4 fe ff ff    	mov    edx,DWORD PTR [ebp-0x11c]
  5563c3:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5563c8:	8b 00                	mov    eax,DWORD PTR [eax]
  5563ca:	e8 a1 31 01 00       	call   0x569570
  5563cf:	33 c0                	xor    eax,eax
  5563d1:	5a                   	pop    edx
  5563d2:	59                   	pop    ecx
  5563d3:	59                   	pop    ecx
  5563d4:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  5563d7:	68 ec 63 55 00       	push   0x5563ec
  5563dc:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
  5563df:	e8 b0 cc ea ff       	call   0x403094
  5563e4:	c3                   	ret
  5563e5:	e9 0a d4 ea ff       	jmp    0x4037f4
  5563ea:	eb f0                	jmp    0x5563dc
  5563ec:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5563ef:	e8 04 ef ff ff       	call   0x5552f8
  5563f4:	e8 93 dd f4 ff       	call   0x4a418c
  5563f9:	e8 b2 e5 f4 ff       	call   0x4a49b0
  5563fe:	33 c0                	xor    eax,eax
  556400:	5a                   	pop    edx
  556401:	59                   	pop    ecx
  556402:	59                   	pop    ecx
  556403:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  556406:	68 30 64 55 00       	push   0x556430
  55640b:	8d 85 e4 fe ff ff    	lea    eax,[ebp-0x11c]
  556411:	ba 02 00 00 00       	mov    edx,0x2
  556416:	e8 b9 d9 ea ff       	call   0x403dd4
  55641b:	8d 45 ec             	lea    eax,[ebp-0x14]
  55641e:	ba 02 00 00 00       	mov    edx,0x2
  556423:	e8 ac d9 ea ff       	call   0x403dd4
  556428:	c3                   	ret
  556429:	e9 c6 d3 ea ff       	jmp    0x4037f4
  55642e:	eb db                	jmp    0x55640b
  556430:	8b e5                	mov    esp,ebp
  556432:	5d                   	pop    ebp
  556433:	c3                   	ret
  556434:	ff                   	(bad)
  556435:	ff                   	(bad)
  556436:	ff                   	(bad)
  556437:	ff 01                	inc    DWORD PTR [ecx]
  556439:	00 00                	add    BYTE PTR [eax],al
  55643b:	00 2e                	add    BYTE PTR [esi],ch
  55643d:	00 00                	add    BYTE PTR [eax],al
  55643f:	00 ff                	add    bh,bh
  556441:	ff                   	(bad)
  556442:	ff                   	(bad)
  556443:	ff 0b                	dec    DWORD PTR [ebx]
  556445:	00 00                	add    BYTE PTR [eax],al
  556447:	00 62 74             	add    BYTE PTR [edx+0x74],ah
  55644a:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55644b:	4e                   	dec    esi
  55644c:	65 77 43             	gs ja  0x556492
  55644f:	6c                   	ins    BYTE PTR es:[edi],dx
  556450:	69 63 6b 00 00 00 00 	imul   esp,DWORD PTR [ebx+0x6b],0x0
  556457:	00 ff                	add    bh,bh
  556459:	ff                   	(bad)
  55645a:	ff                   	(bad)
  55645b:	ff 08                	dec    DWORD PTR [eax]
  55645d:	00 00                	add    BYTE PTR [eax],al
  55645f:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  556462:	5f                   	pop    edi
  556463:	52                   	push   edx
  556464:	65 64 32 36          	gs xor dh,BYTE PTR fs:[esi]
  556468:	00 00                	add    BYTE PTR [eax],al
  55646a:	00 00                	add    BYTE PTR [eax],al
  55646c:	55                   	push   ebp
  55646d:	8b ec                	mov    ebp,esp
  55646f:	83 c4 f4             	add    esp,0xfffffff4
  556472:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  556475:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  556478:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55647b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55647e:	e8 39 8a ff ff       	call   0x54eebc
  556483:	a1 08 21 57 00       	mov    eax,ds:0x572108
  556488:	8b 00                	mov    eax,DWORD PTR [eax]
  55648a:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  556490:	e8 47 9b ff ff       	call   0x54ffdc
  556495:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55649a:	8b 00                	mov    eax,DWORD PTR [eax]
  55649c:	ba 20 66 55 00       	mov    edx,0x556620
  5564a1:	e8 c6 37 01 00       	call   0x569c6c
  5564a6:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5564ab:	8b 00                	mov    eax,DWORD PTR [eax]
  5564ad:	e8 32 45 01 00       	call   0x56a9e4
  5564b2:	c7 45 f4 ff ff ff ff 	mov    DWORD PTR [ebp-0xc],0xffffffff
  5564b9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5564bc:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  5564c2:	8b 10                	mov    edx,DWORD PTR [eax]
  5564c4:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  5564ca:	84 c0                	test   al,al
  5564cc:	74 0c                	je     0x5564da
  5564ce:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5564d1:	8b 80 34 03 00 00    	mov    eax,DWORD PTR [eax+0x334]
  5564d7:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  5564da:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5564dd:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  5564e3:	8b 10                	mov    edx,DWORD PTR [eax]
  5564e5:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  5564eb:	84 c0                	test   al,al
  5564ed:	74 0c                	je     0x5564fb
  5564ef:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5564f2:	8b 80 38 03 00 00    	mov    eax,DWORD PTR [eax+0x338]
  5564f8:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  5564fb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5564fe:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  556504:	8b 10                	mov    edx,DWORD PTR [eax]
  556506:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55650c:	84 c0                	test   al,al
  55650e:	74 0c                	je     0x55651c
  556510:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556513:	8b 80 3c 03 00 00    	mov    eax,DWORD PTR [eax+0x33c]
  556519:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  55651c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55651f:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  556525:	8b 10                	mov    edx,DWORD PTR [eax]
  556527:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55652d:	84 c0                	test   al,al
  55652f:	74 0c                	je     0x55653d
  556531:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556534:	8b 80 40 03 00 00    	mov    eax,DWORD PTR [eax+0x340]
  55653a:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  55653d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556540:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  556546:	8b 10                	mov    edx,DWORD PTR [eax]
  556548:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55654e:	84 c0                	test   al,al
  556550:	74 0c                	je     0x55655e
  556552:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556555:	8b 80 44 03 00 00    	mov    eax,DWORD PTR [eax+0x344]
  55655b:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  55655e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556561:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  556567:	8b 10                	mov    edx,DWORD PTR [eax]
  556569:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  55656f:	84 c0                	test   al,al
  556571:	74 0c                	je     0x55657f
  556573:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556576:	8b 80 48 03 00 00    	mov    eax,DWORD PTR [eax+0x348]
  55657c:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  55657f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556582:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  556588:	8b 10                	mov    edx,DWORD PTR [eax]
  55658a:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  556590:	84 c0                	test   al,al
  556592:	74 0c                	je     0x5565a0
  556594:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  556597:	8b 80 4c 03 00 00    	mov    eax,DWORD PTR [eax+0x34c]
  55659d:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  5565a0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5565a3:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  5565a9:	8b 10                	mov    edx,DWORD PTR [eax]
  5565ab:	ff 92 b8 00 00 00    	call   DWORD PTR [edx+0xb8]
  5565b1:	84 c0                	test   al,al
  5565b3:	74 0c                	je     0x5565c1
  5565b5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5565b8:	8b 80 50 03 00 00    	mov    eax,DWORD PTR [eax+0x350]
  5565be:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  5565c1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5565c6:	8b 00                	mov    eax,DWORD PTR [eax]
  5565c8:	8b 80 1c 01 00 00    	mov    eax,DWORD PTR [eax+0x11c]
  5565ce:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
  5565d1:	89 50 28             	mov    DWORD PTR [eax+0x28],edx
  5565d4:	83 7d f4 00          	cmp    DWORD PTR [ebp-0xc],0x0
  5565d8:	7d 1c                	jge    0x5565f6
  5565da:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5565df:	8b 00                	mov    eax,DWORD PTR [eax]
  5565e1:	8b 80 1c 01 00 00    	mov    eax,DWORD PTR [eax+0x11c]
  5565e7:	c7 40 28 ff ff ff ff 	mov    DWORD PTR [eax+0x28],0xffffffff
  5565ee:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  5565f1:	e8 3a f8 ff ff       	call   0x555e30
  5565f6:	a1 08 21 57 00       	mov    eax,ds:0x572108
  5565fb:	8b 00                	mov    eax,DWORD PTR [eax]
  5565fd:	8b 80 1c 01 00 00    	mov    eax,DWORD PTR [eax+0x11c]
  556603:	8b 50 28             	mov    edx,DWORD PTR [eax+0x28]
  556606:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55660b:	8b 00                	mov    eax,DWORD PTR [eax]
  55660d:	e8 5e 2b 01 00       	call   0x569170
  556612:	8b e5                	mov    esp,ebp
  556614:	5d                   	pop    ebp
  556615:	c3                   	ret
  556616:	00 00                	add    BYTE PTR [eax],al
  556618:	ff                   	(bad)
  556619:	ff                   	(bad)
  55661a:	ff                   	(bad)
  55661b:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  556621:	43                   	inc    ebx
  556622:	4d                   	dec    ebp
  556623:	6e                   	outs   dx,BYTE PTR ds:[esi]
  556624:	31 00                	xor    DWORD PTR [eax],eax
  556626:	00 00                	add    BYTE PTR [eax],al
  556628:	55                   	push   ebp
  556629:	8b ec                	mov    ebp,esp
  55662b:	33 c0                	xor    eax,eax
  55662d:	55                   	push   ebp
  55662e:	68 4d 66 55 00       	push   0x55664d
  556633:	64 ff 30             	push   DWORD PTR fs:[eax]
  556636:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  556639:	ff 05 70 48 57 00    	inc    DWORD PTR ds:0x574870
  55663f:	33 c0                	xor    eax,eax
  556641:	5a                   	pop    edx
  556642:	59                   	pop    ecx
  556643:	59                   	pop    ecx
  556644:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  556647:	68 54 66 55 00       	push   0x556654
  55664c:	c3                   	ret
  55664d:	e9                   	.byte 0xe9
  55664e:	a2                   	.byte 0xa2
  55664f:	d1                   	.byte 0xd1
