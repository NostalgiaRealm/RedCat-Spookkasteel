  5d31f0:	83 ec 5c             	sub    esp,0x5c
  5d31f3:	8b 44 24 68          	mov    eax,DWORD PTR [esp+0x68]
  5d31f7:	8b 0d cc ef 6c 00    	mov    ecx,DWORD PTR ds:0x6cefcc
  5d31fd:	55                   	push   ebp
  5d31fe:	8b 6c 24 68          	mov    ebp,DWORD PTR [esp+0x68]
  5d3202:	8b 91 88 00 00 00    	mov    edx,DWORD PTR [ecx+0x88]
  5d3208:	8b 49 64             	mov    ecx,DWORD PTR [ecx+0x64]
  5d320b:	56                   	push   esi
  5d320c:	57                   	push   edi
  5d320d:	8b 78 10             	mov    edi,DWORD PTR [eax+0x10]
  5d3210:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5d3213:	c1 e7 06             	shl    edi,0x6
  5d3216:	03 fa                	add    edi,edx
  5d3218:	8b 55 20             	mov    edx,DWORD PTR [ebp+0x20]
  5d321b:	8d 04 80             	lea    eax,[eax+eax*4]
  5d321e:	89 54 24 74          	mov    DWORD PTR [esp+0x74],edx
  5d3222:	8d 54 24 44          	lea    edx,[esp+0x44]
  5d3226:	8d 34 81             	lea    esi,[ecx+eax*4]
  5d3229:	8d 4d 14             	lea    ecx,[ebp+0x14]
  5d322c:	e8 1f fe fd ff       	call   0x5b3050
  5d3231:	8b d6                	mov    edx,esi
  5d3233:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  5d3237:	e8 04 fc fd ff       	call   0x5b2e40
  5d323c:	d8 66 0c             	fsub   DWORD PTR [esi+0xc]
  5d323f:	d9 e1                	fabs
  5d3241:	d8 6c 24 74          	fsubr  DWORD PTR [esp+0x74]
  5d3245:	d9 54 24 74          	fst    DWORD PTR [esp+0x74]
  5d3249:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  5d324f:	df e0                	fnstsw ax
  5d3251:	f6 c4 41             	test   ah,0x41
  5d3254:	74 09                	je     0x5d325f
  5d3256:	5f                   	pop    edi
  5d3257:	5e                   	pop    esi
  5d3258:	33 c0                	xor    eax,eax
  5d325a:	5d                   	pop    ebp
  5d325b:	83 c4 5c             	add    esp,0x5c
  5d325e:	c3                   	ret
  5d325f:	53                   	push   ebx
  5d3260:	8b d7                	mov    edx,edi
  5d3262:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5d3266:	e8 d5 fb fd ff       	call   0x5b2e40
  5d326b:	e8 b0 78 03 00       	call   0x60ab20
  5d3270:	8d 57 0c             	lea    edx,[edi+0xc]
  5d3273:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  5d3277:	8b f0                	mov    esi,eax
  5d3279:	e8 c2 fb fd ff       	call   0x5b2e40
  5d327e:	e8 9d 78 03 00       	call   0x60ab20
  5d3283:	8b 7c 24 7c          	mov    edi,DWORD PTR [esp+0x7c]
  5d3287:	8b 4d 2c             	mov    ecx,DWORD PTR [ebp+0x2c]
  5d328a:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  5d328e:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
  5d3291:	8b d8                	mov    ebx,eax
  5d3293:	2b f2                	sub    esi,edx
  5d3295:	8b 55 24             	mov    edx,DWORD PTR [ebp+0x24]
  5d3298:	0f af 77 68          	imul   esi,DWORD PTR [edi+0x68]
  5d329c:	8b 45 28             	mov    eax,DWORD PTR [ebp+0x28]
  5d329f:	89 74 24 1c          	mov    DWORD PTR [esp+0x1c],esi
  5d32a3:	33 f6                	xor    esi,esi
  5d32a5:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  5d32a9:	89 74 24 18          	mov    DWORD PTR [esp+0x18],esi
  5d32ad:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  5d32b1:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  5d32b5:	e8 66 78 03 00       	call   0x60ab20
  5d32ba:	8b 4f 08             	mov    ecx,DWORD PTR [edi+0x8]
  5d32bd:	8b 57 60             	mov    edx,DWORD PTR [edi+0x60]
  5d32c0:	8b e8                	mov    ebp,eax
  5d32c2:	8b 47 64             	mov    eax,DWORD PTR [edi+0x64]
  5d32c5:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  5d32c9:	8d 47 34             	lea    eax,[edi+0x34]
  5d32cc:	2b d9                	sub    ebx,ecx
  5d32ce:	8b c8                	mov    ecx,eax
  5d32d0:	89 54 24 7c          	mov    DWORD PTR [esp+0x7c],edx
  5d32d4:	0f af 5f 6c          	imul   ebx,DWORD PTR [edi+0x6c]
  5d32d8:	8b 11                	mov    edx,DWORD PTR [ecx]
  5d32da:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5d32de:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  5d32e2:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  5d32e5:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  5d32e9:	8b 10                	mov    edx,DWORD PTR [eax]
  5d32eb:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5d32ee:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  5d32f2:	8b 50 08             	mov    edx,DWORD PTR [eax+0x8]
  5d32f5:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
  5d32f9:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5d32fc:	8d 47 1c             	lea    eax,[edi+0x1c]
  5d32ff:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  5d3303:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  5d3307:	8b 08                	mov    ecx,DWORD PTR [eax]
  5d3309:	89 4c 24 54          	mov    DWORD PTR [esp+0x54],ecx
  5d330d:	8d 4f 28             	lea    ecx,[edi+0x28]
  5d3310:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  5d3313:	89 54 24 58          	mov    DWORD PTR [esp+0x58],edx
  5d3317:	8b 11                	mov    edx,DWORD PTR [ecx]
  5d3319:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  5d331c:	89 54 24 60          	mov    DWORD PTR [esp+0x60],edx
  5d3320:	8b 15 d8 ef 6c 00    	mov    edx,DWORD PTR ds:0x6cefd8
  5d3326:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
  5d332a:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
  5d332d:	52                   	push   edx
  5d332e:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
  5d3332:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  5d3335:	89 4c 24 6c          	mov    DWORD PTR [esp+0x6c],ecx
  5d3339:	e8 c2 89 ff ff       	call   0x5cbd00
  5d333e:	83 c4 04             	add    esp,0x4
  5d3341:	66 39 77 02          	cmp    WORD PTR [edi+0x2],si
  5d3345:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
  5d3349:	0f 8e 56 01 00 00    	jle    0x5d34a5
  5d334f:	8b 74 24 70          	mov    esi,DWORD PTR [esp+0x70]
  5d3353:	8b cb                	mov    ecx,ebx
  5d3355:	c1 f9 0a             	sar    ecx,0xa
  5d3358:	89 4c 24 74          	mov    DWORD PTR [esp+0x74],ecx
  5d335c:	79 06                	jns    0x5d3364
  5d335e:	f7 d9                	neg    ecx
  5d3360:	89 4c 24 74          	mov    DWORD PTR [esp+0x74],ecx
  5d3364:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  5d3368:	66 83 3f 00          	cmp    WORD PTR [edi],0x0
  5d336c:	89 44 24 78          	mov    DWORD PTR [esp+0x78],eax
  5d3370:	c7 44 24 70 00 00 00 	mov    DWORD PTR [esp+0x70],0x0
  5d3377:	00 
  5d3378:	0f 8e de 00 00 00    	jle    0x5d345c
  5d337e:	eb 04                	jmp    0x5d3384
  5d3380:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  5d3384:	8b 44 24 78          	mov    eax,DWORD PTR [esp+0x78]
  5d3388:	c1 f8 0a             	sar    eax,0xa
  5d338b:	79 02                	jns    0x5d338f
  5d338d:	f7 d8                	neg    eax
  5d338f:	3b c1                	cmp    eax,ecx
  5d3391:	7e 08                	jle    0x5d339b
  5d3393:	8b d9                	mov    ebx,ecx
  5d3395:	d1 fb                	sar    ebx,1
  5d3397:	03 d8                	add    ebx,eax
  5d3399:	eb 06                	jmp    0x5d33a1
  5d339b:	d1 f8                	sar    eax,1
  5d339d:	03 c1                	add    eax,ecx
  5d339f:	8b d8                	mov    ebx,eax
  5d33a1:	3b dd                	cmp    ebx,ebp
  5d33a3:	7d 7c                	jge    0x5d3421
  5d33a5:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5d33a9:	6a 00                	push   0x0
  5d33ab:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  5d33af:	51                   	push   ecx
  5d33b0:	52                   	push   edx
  5d33b1:	e8 7a 89 ff ff       	call   0x5cbd30
  5d33b6:	83 c4 0c             	add    esp,0xc
  5d33b9:	85 c0                	test   eax,eax
  5d33bb:	74 25                	je     0x5d33e2
  5d33bd:	8b 44 24 7c          	mov    eax,DWORD PTR [esp+0x7c]
  5d33c1:	8b 4c 24 78          	mov    ecx,DWORD PTR [esp+0x78]
  5d33c5:	2b c8                	sub    ecx,eax
  5d33c7:	8d 54 24 54          	lea    edx,[esp+0x54]
  5d33cb:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
  5d33cf:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5d33d3:	51                   	push   ecx
  5d33d4:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  5d33d8:	83 c6 0c             	add    esi,0xc
  5d33db:	e8 20 fc fd ff       	call   0x5b3000
  5d33e0:	eb 62                	jmp    0x5d3444
  5d33e2:	8b c5                	mov    eax,ebp
  5d33e4:	83 c6 04             	add    esi,0x4
  5d33e7:	2b c3                	sub    eax,ebx
  5d33e9:	8b 5e fc             	mov    ebx,DWORD PTR [esi-0x4]
  5d33ec:	8b d0                	mov    edx,eax
  5d33ee:	8b c8                	mov    ecx,eax
  5d33f0:	0f af 54 24 20       	imul   edx,DWORD PTR [esp+0x20]
  5d33f5:	0f af 4c 24 24       	imul   ecx,DWORD PTR [esp+0x24]
  5d33fa:	0f af 44 24 28       	imul   eax,DWORD PTR [esp+0x28]
  5d33ff:	03 da                	add    ebx,edx
  5d3401:	c7 44 24 18 01 00 00 	mov    DWORD PTR [esp+0x18],0x1
  5d3408:	00 
  5d3409:	89 5e fc             	mov    DWORD PTR [esi-0x4],ebx
  5d340c:	8b 1e                	mov    ebx,DWORD PTR [esi]
  5d340e:	03 d9                	add    ebx,ecx
  5d3410:	89 1e                	mov    DWORD PTR [esi],ebx
  5d3412:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
  5d3415:	83 c6 04             	add    esi,0x4
  5d3418:	03 c8                	add    ecx,eax
  5d341a:	89 0e                	mov    DWORD PTR [esi],ecx
  5d341c:	83 c6 04             	add    esi,0x4
  5d341f:	eb 03                	jmp    0x5d3424
  5d3421:	83 c6 0c             	add    esi,0xc
  5d3424:	8d 54 24 30          	lea    edx,[esp+0x30]
  5d3428:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5d342c:	52                   	push   edx
  5d342d:	8d 54 24 58          	lea    edx,[esp+0x58]
  5d3431:	e8 ca fb fd ff       	call   0x5b3000
  5d3436:	8b 44 24 7c          	mov    eax,DWORD PTR [esp+0x7c]
  5d343a:	8b 4c 24 78          	mov    ecx,DWORD PTR [esp+0x78]
  5d343e:	2b c8                	sub    ecx,eax
  5d3440:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
  5d3444:	8b 44 24 70          	mov    eax,DWORD PTR [esp+0x70]
  5d3448:	0f bf 0f             	movsx  ecx,WORD PTR [edi]
  5d344b:	40                   	inc    eax
  5d344c:	3b c1                	cmp    eax,ecx
  5d344e:	89 44 24 70          	mov    DWORD PTR [esp+0x70],eax
  5d3452:	0f 8c 28 ff ff ff    	jl     0x5d3380
  5d3458:	8b 5c 24 10          	mov    ebx,DWORD PTR [esp+0x10]
  5d345c:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  5d3460:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5d3464:	52                   	push   edx
  5d3465:	8d 54 24 64          	lea    edx,[esp+0x64]
  5d3469:	e8 92 fb fd ff       	call   0x5b3000
  5d346e:	8b 54 24 44          	mov    edx,DWORD PTR [esp+0x44]
  5d3472:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
  5d3476:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
  5d347a:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  5d347e:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  5d3482:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  5d3486:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5d348a:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  5d348e:	0f bf 4f 02          	movsx  ecx,WORD PTR [edi+0x2]
  5d3492:	2b da                	sub    ebx,edx
  5d3494:	40                   	inc    eax
  5d3495:	3b c1                	cmp    eax,ecx
  5d3497:	89 5c 24 10          	mov    DWORD PTR [esp+0x10],ebx
  5d349b:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  5d349f:	0f 8c ae fe ff ff    	jl     0x5d3353
  5d34a5:	8b 44 24 18          	mov    eax,DWORD PTR [esp+0x18]
  5d34a9:	5b                   	pop    ebx
  5d34aa:	5f                   	pop    edi
  5d34ab:	5e                   	pop    esi
  5d34ac:	5d                   	pop    ebp
  5d34ad:	83 c4 5c             	add    esp,0x5c
  5d34b0:	c3                   	ret
