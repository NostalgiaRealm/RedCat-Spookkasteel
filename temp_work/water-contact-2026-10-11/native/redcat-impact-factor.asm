
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

00435000 <.text+0x34000>:
  435000:	01 51 68             	add    DWORD PTR [ecx+0x68],edx
  435003:	b6 00                	mov    dh,0x0
  435005:	00 00                	add    BYTE PTR [eax],al
  435007:	68 38 d6 68 00       	push   0x68d638
  43500c:	68 2c d6 68 00       	push   0x68d62c
  435011:	e8 da b7 16 00       	call   0x5a07f0
  435016:	ff d0                	call   eax
  435018:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  43501c:	83 c4 10             	add    esp,0x10
  43501f:	3b c6                	cmp    eax,esi
  435021:	74 1d                	je     0x435040
  435023:	8d 48 ff             	lea    ecx,[eax-0x1]
  435026:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  435029:	84 c0                	test   al,al
  43502b:	74 0a                	je     0x435037
  43502d:	3c ff                	cmp    al,0xff
  43502f:	74 06                	je     0x435037
  435031:	fe c8                	dec    al
  435033:	88 01                	mov    BYTE PTR [ecx],al
  435035:	eb 09                	jmp    0x435040
  435037:	51                   	push   ecx
  435038:	e8 b3 95 1c 00       	call   0x5fe5f0
  43503d:	83 c4 04             	add    esp,0x4
  435040:	89 74 24 50          	mov    DWORD PTR [esp+0x50],esi
  435044:	89 74 24 54          	mov    DWORD PTR [esp+0x54],esi
  435048:	89 74 24 58          	mov    DWORD PTR [esp+0x58],esi
  43504c:	8b 03                	mov    eax,DWORD PTR [ebx]
  43504e:	b9 0c 00 00 00       	mov    ecx,0xc
  435053:	8d 7c 24 5c          	lea    edi,[esp+0x5c]
  435057:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0xffffffff
  43505e:	ff ff ff ff 
  435062:	8d b0 e0 01 00 00    	lea    esi,[eax+0x1e0]
  435068:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  43506c:	85 c0                	test   eax,eax
  43506e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  435070:	74 18                	je     0x43508a
  435072:	8b 70 14             	mov    esi,DWORD PTR [eax+0x14]
  435075:	8b c8                	mov    ecx,eax
  435077:	83 c0 14             	add    eax,0x14
  43507a:	4e                   	dec    esi
  43507b:	8b d6                	mov    edx,esi
  43507d:	85 d2                	test   edx,edx
  43507f:	89 30                	mov    DWORD PTR [eax],esi
  435081:	75 07                	jne    0x43508a
  435083:	6a 00                	push   0x0
  435085:	e8 36 6f 17 00       	call   0x5abfc0
  43508a:	8d 54 24 34          	lea    edx,[esp+0x34]
  43508e:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  435092:	e8 99 e5 17 00       	call   0x5b3630
  435097:	8d 54 24 28          	lea    edx,[esp+0x28]
  43509b:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  43509f:	e8 ac e5 17 00       	call   0x5b3650
  4350a4:	8d 4c 24 28          	lea    ecx,[esp+0x28]
  4350a8:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  4350af:	00 
  4350b0:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
  4350b7:	00 
  4350b8:	e8 63 de 17 00       	call   0x5b2f20
  4350bd:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4350c1:	b3 01                	mov    bl,0x1
  4350c3:	dd d8                	fstp   st(0)
  4350c5:	8a 87 64 03 00 00    	mov    al,BYTE PTR [edi+0x364]
  4350cb:	84 c0                	test   al,al
  4350cd:	75 04                	jne    0x4350d3
  4350cf:	8a 5c 24 13          	mov    bl,BYTE PTR [esp+0x13]
  4350d3:	8b ac 24 a0 00 00 00 	mov    ebp,DWORD PTR [esp+0xa0]
  4350da:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4350de:	50                   	push   eax
  4350df:	8b cd                	mov    ecx,ebp
  4350e1:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4350e4:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4350e7:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  4350ea:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4350f0:	df e0                	fnstsw ax
  4350f2:	f6 c4 41             	test   ah,0x41
  4350f5:	0f 84 86 01 00 00    	je     0x435281
  4350fb:	84 db                	test   bl,bl
  4350fd:	0f 85 7e 01 00 00    	jne    0x435281
  435103:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  435106:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  43510a:	50                   	push   eax
  43510b:	8b cd                	mov    ecx,ebp
  43510d:	ff 52 24             	call   DWORD PTR [edx+0x24]
  435110:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  435113:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435119:	df e0                	fnstsw ax
  43511b:	f6 c4 40             	test   ah,0x40
  43511e:	75 18                	jne    0x435138
  435120:	8b 4c 24 28          	mov    ecx,DWORD PTR [esp+0x28]
  435124:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  435128:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  43512c:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  435130:	89 54 24 20          	mov    DWORD PTR [esp+0x20],edx
  435134:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  435138:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  43513b:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  43513f:	50                   	push   eax
  435140:	8b cd                	mov    ecx,ebp
  435142:	ff 52 24             	call   DWORD PTR [edx+0x24]
  435145:	d9 00                	fld    DWORD PTR [eax]
  435147:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  43514d:	df e0                	fnstsw ax
  43514f:	f6 c4 01             	test   ah,0x1
  435152:	74 1e                	je     0x435172
  435154:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  435158:	8d 54 24 34          	lea    edx,[esp+0x34]
  43515c:	51                   	push   ecx
  43515d:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  435161:	e8 9a de 17 00       	call   0x5b3000
  435166:	c7 87 44 03 00 00 07 	mov    DWORD PTR [edi+0x344],0x7
  43516d:	00 00 00 
  435170:	eb 41                	jmp    0x4351b3
  435172:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  435175:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  435179:	50                   	push   eax
  43517a:	8b cd                	mov    ecx,ebp
  43517c:	ff 52 24             	call   DWORD PTR [edx+0x24]
  43517f:	d9 00                	fld    DWORD PTR [eax]
  435181:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435187:	df e0                	fnstsw ax
  435189:	f6 c4 41             	test   ah,0x41
  43518c:	75 25                	jne    0x4351b3
  43518e:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  435192:	e8 e9 de 17 00       	call   0x5b3080
  435197:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  43519b:	8d 54 24 34          	lea    edx,[esp+0x34]
  43519f:	51                   	push   ecx
  4351a0:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4351a4:	e8 57 de 17 00       	call   0x5b3000
  4351a9:	c7 87 44 03 00 00 08 	mov    DWORD PTR [edi+0x344],0x8
  4351b0:	00 00 00 
  4351b3:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4351b7:	e8 14 de 17 00       	call   0x5b2fd0
  4351bc:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4351c2:	df e0                	fnstsw ax
  4351c4:	f6 c4 41             	test   ah,0x41
  4351c7:	75 0b                	jne    0x4351d4
  4351c9:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4351cd:	e8 4e dd 17 00       	call   0x5b2f20
  4351d2:	dd d8                	fstp   st(0)
  4351d4:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4351d7:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4351db:	50                   	push   eax
  4351dc:	8b cd                	mov    ecx,ebp
  4351de:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4351e1:	d9 00                	fld    DWORD PTR [eax]
  4351e3:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4351e9:	df e0                	fnstsw ax
  4351eb:	f6 c4 40             	test   ah,0x40
  4351ee:	75 3a                	jne    0x43522a
  4351f0:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4351f3:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4351f7:	50                   	push   eax
  4351f8:	8b cd                	mov    ecx,ebp
  4351fa:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4351fd:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  435200:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435206:	df e0                	fnstsw ax
  435208:	f6 c4 40             	test   ah,0x40
  43520b:	74 1d                	je     0x43522a
  43520d:	83 bf 3c 03 00 00 01 	cmp    DWORD PTR [edi+0x33c],0x1
  435214:	75 14                	jne    0x43522a
  435216:	c7 05 58 58 6b 00 00 	mov    DWORD PTR ds:0x6b5858,0x0
  43521d:	00 00 00 
  435220:	68 50 58 6b 00       	push   0x6b5850
  435225:	e9 51 01 00 00       	jmp    0x43537b
  43522a:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  43522d:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  435231:	50                   	push   eax
  435232:	8b cd                	mov    ecx,ebp
  435234:	ff 52 24             	call   DWORD PTR [edx+0x24]
  435237:	d9 00                	fld    DWORD PTR [eax]
  435239:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  43523f:	df e0                	fnstsw ax
  435241:	f6 c4 40             	test   ah,0x40
  435244:	74 27                	je     0x43526d
  435246:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  435249:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  43524d:	50                   	push   eax
  43524e:	8b cd                	mov    ecx,ebp
  435250:	ff 52 24             	call   DWORD PTR [edx+0x24]
  435253:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  435256:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  43525c:	df e0                	fnstsw ax
  43525e:	f6 c4 40             	test   ah,0x40
  435261:	75 0a                	jne    0x43526d
  435263:	c7 87 44 03 00 00 04 	mov    DWORD PTR [edi+0x344],0x4
  43526a:	00 00 00 
  43526d:	c7 05 58 58 6b 00 00 	mov    DWORD PTR ds:0x6b5858,0xbf800000
  435274:	00 80 bf 
  435277:	68 50 58 6b 00       	push   0x6b5850
  43527c:	e9 fa 00 00 00       	jmp    0x43537b
  435281:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  435284:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  435288:	50                   	push   eax
  435289:	8b cd                	mov    ecx,ebp
  43528b:	ff 52 24             	call   DWORD PTR [edx+0x24]
  43528e:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  435291:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435297:	df e0                	fnstsw ax
  435299:	f6 c4 41             	test   ah,0x41
  43529c:	0f 85 9d 00 00 00    	jne    0x43533f
  4352a2:	84 db                	test   bl,bl
  4352a4:	0f 85 99 00 00 00    	jne    0x435343
  4352aa:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4352ad:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4352b1:	50                   	push   eax
  4352b2:	8b cd                	mov    ecx,ebp
  4352b4:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4352b7:	d9 00                	fld    DWORD PTR [eax]
  4352b9:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4352bf:	df e0                	fnstsw ax
  4352c1:	f6 c4 01             	test   ah,0x1
  4352c4:	74 1d                	je     0x4352e3
  4352c6:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4352ca:	e8 b1 dd 17 00       	call   0x5b3080
  4352cf:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4352d3:	8d 54 24 34          	lea    edx,[esp+0x34]
  4352d7:	51                   	push   ecx
  4352d8:	8d 4c 24 2c          	lea    ecx,[esp+0x2c]
  4352dc:	e8 1f dd 17 00       	call   0x5b3000
  4352e1:	eb 34                	jmp    0x435317
  4352e3:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4352e6:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4352ea:	50                   	push   eax
  4352eb:	8b cd                	mov    ecx,ebp
  4352ed:	ff 52 24             	call   DWORD PTR [edx+0x24]
  4352f0:	d9 00                	fld    DWORD PTR [eax]
  4352f2:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4352f8:	df e0                	fnstsw ax
  4352fa:	f6 c4 41             	test   ah,0x41
  4352fd:	74 d0                	je     0x4352cf
  4352ff:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  435303:	8b 44 24 2c          	mov    eax,DWORD PTR [esp+0x2c]
  435307:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  43530b:	89 54 24 1c          	mov    DWORD PTR [esp+0x1c],edx
  43530f:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  435313:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  435317:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  43531b:	e8 b0 dc 17 00       	call   0x5b2fd0
  435320:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435326:	df e0                	fnstsw ax
  435328:	f6 c4 41             	test   ah,0x41
  43532b:	75 0b                	jne    0x435338
  43532d:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  435331:	e8 ea db 17 00       	call   0x5b2f20
  435336:	dd d8                	fstp   st(0)
  435338:	68 80 01 69 00       	push   0x690180
  43533d:	eb 3c                	jmp    0x43537b
  43533f:	84 db                	test   bl,bl
  435341:	74 3f                	je     0x435382
  435343:	8a 87 64 03 00 00    	mov    al,BYTE PTR [edi+0x364]
  435349:	84 c0                	test   al,al
  43534b:	75 35                	jne    0x435382
  43534d:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  435350:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  435354:	50                   	push   eax
  435355:	8b cd                	mov    ecx,ebp
  435357:	ff 52 24             	call   DWORD PTR [edx+0x24]
  43535a:	8b 08                	mov    ecx,DWORD PTR [eax]
  43535c:	c7 05 94 01 69 00 00 	mov    DWORD PTR ds:0x690194,0x0
  435363:	00 00 00 
  435366:	89 0d 90 01 69 00    	mov    DWORD PTR ds:0x690190,ecx
  43536c:	c7 05 98 01 69 00 00 	mov    DWORD PTR ds:0x690198,0x0
  435373:	00 00 00 
  435376:	68 90 01 69 00       	push   0x690190
  43537b:	8b cd                	mov    ecx,ebp
  43537d:	e8 ee 23 00 00       	call   0x437770
  435382:	a1 5c 91 6b 00       	mov    eax,ds:0x6b915c
  435387:	85 c0                	test   eax,eax
  435389:	75 05                	jne    0x435390
  43538b:	e8 f0 70 08 00       	call   0x4bc480
  435390:	6a 01                	push   0x1
  435392:	68 08 03 69 00       	push   0x690308
  435397:	68 e8 02 69 00       	push   0x6902e8
  43539c:	6a 00                	push   0x0
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
  435409:	8b 84 24 9c 00 00 00 	mov    eax,DWORD PTR [esp+0x9c]
  435410:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  435414:	8b d0                	mov    edx,eax
  435416:	5f                   	pop    edi
  435417:	5e                   	pop    esi
  435418:	5d                   	pop    ebp
  435419:	89 0a                	mov    DWORD PTR [edx],ecx
  43541b:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  43541f:	5b                   	pop    ebx
  435420:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  435423:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  435427:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  43542a:	8b 4c 24 7c          	mov    ecx,DWORD PTR [esp+0x7c]
  43542e:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
  435435:	81 c4 88 00 00 00    	add    esp,0x88
  43543b:	c2 08 00             	ret    0x8
  43543e:	90                   	nop
  43543f:	90                   	nop
  435440:	56                   	push   esi
  435441:	8b f1                	mov    esi,ecx
  435443:	8b 8e 50 02 00 00    	mov    ecx,DWORD PTR [esi+0x250]
  435449:	e8 e2 3e 02 00       	call   0x459330
  43544e:	83 c0 f9             	add    eax,0xfffffff9
  435451:	83 f8 04             	cmp    eax,0x4
  435454:	77 16                	ja     0x43546c
  435456:	ff 24 85 7c 54 43 00 	jmp    DWORD PTR [eax*4+0x43547c]
  43545d:	c6 86 71 03 00 00 01 	mov    BYTE PTR [esi+0x371],0x1
  435464:	8a 86 71 03 00 00    	mov    al,BYTE PTR [esi+0x371]
  43546a:	5e                   	pop    esi
  43546b:	c3                   	ret
  43546c:	c6 86 71 03 00 00 00 	mov    BYTE PTR [esi+0x371],0x0
  435473:	8a 86 71 03 00 00    	mov    al,BYTE PTR [esi+0x371]
  435479:	5e                   	pop    esi
  43547a:	c3                   	ret
  43547b:	90                   	nop
  43547c:	5d                   	pop    ebp
  43547d:	54                   	push   esp
  43547e:	43                   	inc    ebx
  43547f:	00 5d 54             	add    BYTE PTR [ebp+0x54],bl
  435482:	43                   	inc    ebx
  435483:	00 6c 54 43          	add    BYTE PTR [esp+edx*2+0x43],ch
  435487:	00 5d 54             	add    BYTE PTR [ebp+0x54],bl
  43548a:	43                   	inc    ebx
  43548b:	00 5d 54             	add    BYTE PTR [ebp+0x54],bl
  43548e:	43                   	inc    ebx
  43548f:	00 64 a1 00          	add    BYTE PTR [ecx+eiz*4+0x0],ah
  435493:	00 00                	add    BYTE PTR [eax],al
  435495:	00 6a ff             	add    BYTE PTR [edx-0x1],ch
  435498:	68 3b 3c 62 00       	push   0x623c3b
  43549d:	50                   	push   eax
  43549e:	64 89 25 00 00 00 00 	mov    DWORD PTR fs:0x0,esp
  4354a5:	81 ec 74 01 00 00    	sub    esp,0x174
  4354ab:	55                   	push   ebp
  4354ac:	8b e9                	mov    ebp,ecx
  4354ae:	56                   	push   esi
  4354af:	8a 85 04 01 00 00    	mov    al,BYTE PTR [ebp+0x104]
  4354b5:	84 c0                	test   al,al
  4354b7:	74 0a                	je     0x4354c3
  4354b9:	8a 85 71 03 00 00    	mov    al,BYTE PTR [ebp+0x371]
  4354bf:	84 c0                	test   al,al
  4354c1:	74 25                	je     0x4354e8
  4354c3:	8b 8c 24 90 01 00 00 	mov    ecx,DWORD PTR [esp+0x190]
  4354ca:	8b 84 24 8c 01 00 00 	mov    eax,DWORD PTR [esp+0x18c]
  4354d1:	8b d0                	mov    edx,eax
  4354d3:	8b 31                	mov    esi,DWORD PTR [ecx]
  4354d5:	89 32                	mov    DWORD PTR [edx],esi
  4354d7:	8b 71 04             	mov    esi,DWORD PTR [ecx+0x4]
  4354da:	89 72 04             	mov    DWORD PTR [edx+0x4],esi
  4354dd:	8b 49 08             	mov    ecx,DWORD PTR [ecx+0x8]
  4354e0:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  4354e3:	e9 58 0e 00 00       	jmp    0x436340
  4354e8:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  4354ed:	85 c0                	test   eax,eax
  4354ef:	75 05                	jne    0x4354f6
  4354f1:	e8 8a 5d 12 00       	call   0x55b280
  4354f6:	8a 40 48             	mov    al,BYTE PTR [eax+0x48]
  4354f9:	84 c0                	test   al,al
  4354fb:	75 0a                	jne    0x435507
  4354fd:	c7 85 00 01 00 00 04 	mov    DWORD PTR [ebp+0x100],0x4
  435504:	00 00 00 
  435507:	d9 85 b8 01 00 00    	fld    DWORD PTR [ebp+0x1b8]
  43550d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435513:	df e0                	fnstsw ax
  435515:	f6 c4 41             	test   ah,0x41
  435518:	75 26                	jne    0x435540
  43551a:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
  435521:	00 00 00 
  435524:	8d b5 74 01 00 00    	lea    esi,[ebp+0x174]
  43552a:	e8 d1 ba ff ff       	call   0x431000
  43552f:	51                   	push   ecx
  435530:	8d 8d b4 01 00 00    	lea    ecx,[ebp+0x1b4]
  435536:	8b d6                	mov    edx,esi
  435538:	d9 1c 24             	fstp   DWORD PTR [esp]
  43553b:	e8 60 da 17 00       	call   0x5b2fa0
  435540:	8b 94 24 90 01 00 00 	mov    edx,DWORD PTR [esp+0x190]
  435547:	8b b4 24 98 01 00 00 	mov    esi,DWORD PTR [esp+0x198]
  43554e:	53                   	push   ebx
  43554f:	8b 9c 24 98 01 00 00 	mov    ebx,DWORD PTR [esp+0x198]
  435556:	8b 02                	mov    eax,DWORD PTR [edx]
  435558:	57                   	push   edi
  435559:	56                   	push   esi
  43555a:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  43555e:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  435561:	89 4c 24 24          	mov    DWORD PTR [esp+0x24],ecx
  435565:	8b cb                	mov    ecx,ebx
  435567:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  43556a:	89 54 24 28          	mov    DWORD PTR [esp+0x28],edx
  43556e:	8d 54 24 78          	lea    edx,[esp+0x78]
  435572:	e8 29 da 17 00       	call   0x5b2fa0
  435577:	8b c3                	mov    eax,ebx
  435579:	56                   	push   esi
  43557a:	8b 08                	mov    ecx,DWORD PTR [eax]
  43557c:	89 8c 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],ecx
  435583:	8d 8c 24 88 00 00 00 	lea    ecx,[esp+0x88]
  43558a:	d9 84 24 88 00 00 00 	fld    DWORD PTR [esp+0x88]
  435591:	d8 0d a8 c5 64 00    	fmul   DWORD PTR ds:0x64c5a8
  435597:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  43559a:	89 94 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],edx
  4355a1:	8d 94 24 ac 00 00 00 	lea    edx,[esp+0xac]
  4355a8:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4355ab:	d9 9c 24 88 00 00 00 	fstp   DWORD PTR [esp+0x88]
  4355b2:	d9 84 24 8c 00 00 00 	fld    DWORD PTR [esp+0x8c]
  4355b9:	d8 0d a8 c5 64 00    	fmul   DWORD PTR ds:0x64c5a8
  4355bf:	89 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],eax
  4355c6:	d9 9c 24 8c 00 00 00 	fstp   DWORD PTR [esp+0x8c]
  4355cd:	d9 84 24 90 00 00 00 	fld    DWORD PTR [esp+0x90]
  4355d4:	d8 0d a8 c5 64 00    	fmul   DWORD PTR ds:0x64c5a8
  4355da:	d9 9c 24 90 00 00 00 	fstp   DWORD PTR [esp+0x90]
  4355e1:	e8 ba d9 17 00       	call   0x5b2fa0
  4355e6:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  4355ea:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  4355ee:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  4355f2:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  4355f6:	8b 44 24 7c          	mov    eax,DWORD PTR [esp+0x7c]
  4355fa:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  4355fe:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  435602:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
  435606:	8b 84 24 b0 00 00 00 	mov    eax,DWORD PTR [esp+0xb0]
  43560d:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  435611:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
  435615:	89 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],eax
  43561c:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
  435622:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
  435626:	8b 8c 24 a8 00 00 00 	mov    ecx,DWORD PTR [esp+0xa8]
  43562d:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  435631:	8b 94 24 ac 00 00 00 	mov    edx,DWORD PTR [esp+0xac]
  435638:	83 f8 04             	cmp    eax,0x4
  43563b:	89 8c 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],ecx
  435642:	89 94 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],edx
  435649:	0f 87 c2 0a 00 00    	ja     0x436111
  43564f:	ff 24 85 5c 63 43 00 	jmp    DWORD PTR [eax*4+0x43635c]
  435656:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  43565a:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435660:	df e0                	fnstsw ax
  435662:	f6 c4 41             	test   ah,0x41
  435665:	75 08                	jne    0x43566f
  435667:	c7 44 24 50 00 00 00 	mov    DWORD PTR [esp+0x50],0x0
  43566e:	00 
  43566f:	d9 44 24 4c          	fld    DWORD PTR [esp+0x4c]
  435673:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435679:	df e0                	fnstsw ax
  43567b:	f6 c4 40             	test   ah,0x40
  43567e:	0f 84 ae 00 00 00    	je     0x435732
  435684:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  435688:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  43568e:	df e0                	fnstsw ax
  435690:	f6 c4 40             	test   ah,0x40
  435693:	0f 84 99 00 00 00    	je     0x435732
  435699:	d9 44 24 54          	fld    DWORD PTR [esp+0x54]
  43569d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4356a3:	df e0                	fnstsw ax
  4356a5:	f6 c4 40             	test   ah,0x40
  4356a8:	0f 84 84 00 00 00    	je     0x435732
  4356ae:	d9 05 c4 92 6b 00    	fld    DWORD PTR ds:0x6b92c4
  4356b4:	d9 e0                	fchs
  4356b6:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  4356ba:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  4356be:	56                   	push   esi
  4356bf:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4356c3:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  4356ca:	00 
  4356cb:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  4356d2:	00 
  4356d3:	e8 c8 d8 17 00       	call   0x5b2fa0
  4356d8:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4356dc:	8d 54 24 10          	lea    edx,[esp+0x10]
  4356e0:	51                   	push   ecx
  4356e1:	52                   	push   edx
  4356e2:	8d 84 24 ec 00 00 00 	lea    eax,[esp+0xec]
  4356e9:	6a 01                	push   0x1
  4356eb:	50                   	push   eax
  4356ec:	8b cd                	mov    ecx,ebp
  4356ee:	e8 1d 20 0a 00       	call   0x4d7710
  4356f3:	8b 08                	mov    ecx,DWORD PTR [eax]
  4356f5:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  4356f9:	8a 48 04             	mov    cl,BYTE PTR [eax+0x4]
  4356fc:	84 c9                	test   cl,cl
  4356fe:	0f 85 37 03 00 00    	jne    0x435a3b
  435704:	8d b5 74 01 00 00    	lea    esi,[ebp+0x174]
  43570a:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  43570e:	8b d6                	mov    edx,esi
  435710:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
  435717:	00 00 00 
  43571a:	e8 31 d9 17 00       	call   0x5b3050
  43571f:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
  435725:	85 c9                	test   ecx,ecx
  435727:	0f 84 0e 03 00 00    	je     0x435a3b
  43572d:	e9 fa 02 00 00       	jmp    0x435a2c
  435732:	8d 94 24 9c 00 00 00 	lea    edx,[esp+0x9c]
  435739:	8d 44 24 10          	lea    eax,[esp+0x10]
  43573d:	52                   	push   edx
  43573e:	50                   	push   eax
  43573f:	8d 8c 24 d4 00 00 00 	lea    ecx,[esp+0xd4]
  435746:	6a 03                	push   0x3
  435748:	51                   	push   ecx
  435749:	8b cd                	mov    ecx,ebp
  43574b:	e8 c0 1f 0a 00       	call   0x4d7710
  435750:	8b 10                	mov    edx,DWORD PTR [eax]
  435752:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  435756:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  435759:	89 44 24 44          	mov    DWORD PTR [esp+0x44],eax
  43575d:	8a 44 24 46          	mov    al,BYTE PTR [esp+0x46]
  435761:	84 c0                	test   al,al
  435763:	0f 84 fd 01 00 00    	je     0x435966
  435769:	8b 94 24 9c 00 00 00 	mov    edx,DWORD PTR [esp+0x9c]
  435770:	8b 84 24 a0 00 00 00 	mov    eax,DWORD PTR [esp+0xa0]
  435777:	8d b5 c4 01 00 00    	lea    esi,[ebp+0x1c4]
  43577d:	8b ce                	mov    ecx,esi
  43577f:	89 11                	mov    DWORD PTR [ecx],edx
  435781:	8b 94 24 a4 00 00 00 	mov    edx,DWORD PTR [esp+0xa4]
  435788:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  43578b:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  43578e:	c7 85 c8 01 00 00 00 	mov    DWORD PTR [ebp+0x1c8],0x0
  435795:	00 00 00 
  435798:	e8 83 d7 17 00       	call   0x5b2f20
  43579d:	dd d8                	fstp   st(0)
  43579f:	e8 ec 0b 00 00       	call   0x436390
  4357a4:	dc c0                	fadd   st(0),st
  4357a6:	51                   	push   ecx
  4357a7:	8b ce                	mov    ecx,esi
  4357a9:	8b d6                	mov    edx,esi
  4357ab:	d9 1c 24             	fstp   DWORD PTR [esp]
  4357ae:	e8 ed d7 17 00       	call   0x5b2fa0
  4357b3:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  4357b7:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  4357bb:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  4357bf:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4357c3:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  4357c7:	8d 85 5c 01 00 00    	lea    eax,[ebp+0x15c]
  4357cd:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4357d1:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  4357d5:	50                   	push   eax
  4357d6:	51                   	push   ecx
  4357d7:	8d 94 24 e4 00 00 00 	lea    edx,[esp+0xe4]
  4357de:	6a 01                	push   0x1
  4357e0:	52                   	push   edx
  4357e1:	8b cd                	mov    ecx,ebp
  4357e3:	e8 28 1f 0a 00       	call   0x4d7710
  4357e8:	d9 85 60 01 00 00    	fld    DWORD PTR [ebp+0x160]
  4357ee:	8d bd d0 01 00 00    	lea    edi,[ebp+0x1d0]
  4357f4:	51                   	push   ecx
  4357f5:	d9 e0                	fchs
  4357f7:	d9 1c 24             	fstp   DWORD PTR [esp]
  4357fa:	8b cf                	mov    ecx,edi
  4357fc:	e8 8f f2 11 00       	call   0x554a90
  435801:	8d 44 24 10          	lea    eax,[esp+0x10]
  435805:	56                   	push   esi
  435806:	50                   	push   eax
  435807:	8d 8c 24 f4 00 00 00 	lea    ecx,[esp+0xf4]
  43580e:	6a 03                	push   0x3
  435810:	51                   	push   ecx
  435811:	8b cd                	mov    ecx,ebp
  435813:	e8 f8 1e 0a 00       	call   0x4d7710
  435818:	8d 85 68 01 00 00    	lea    eax,[ebp+0x168]
  43581e:	8d 54 24 10          	lea    edx,[esp+0x10]
  435822:	50                   	push   eax
  435823:	52                   	push   edx
  435824:	8d 84 24 04 01 00 00 	lea    eax,[esp+0x104]
  43582b:	6a 01                	push   0x1
  43582d:	50                   	push   eax
  43582e:	8b cd                	mov    ecx,ebp
  435830:	e8 db 1e 0a 00       	call   0x4d7710
  435835:	8b 08                	mov    ecx,DWORD PTR [eax]
  435837:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  43583b:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
  43583f:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  435842:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  435846:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  43584a:	8b 85 60 01 00 00    	mov    eax,DWORD PTR [ebp+0x160]
  435850:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  435854:	8b 54 24 18          	mov    edx,DWORD PTR [esp+0x18]
  435858:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  43585c:	50                   	push   eax
  43585d:	8b cf                	mov    ecx,edi
  43585f:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  435863:	e8 28 f2 11 00       	call   0x554a90
  435868:	8a 44 24 44          	mov    al,BYTE PTR [esp+0x44]
  43586c:	84 c0                	test   al,al
  43586e:	0f 84 f2 00 00 00    	je     0x435966
  435874:	d9 44 24 38          	fld    DWORD PTR [esp+0x38]
  435878:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  43587c:	df e0                	fnstsw ax
  43587e:	f6 c4 41             	test   ah,0x41
  435881:	0f 85 df 00 00 00    	jne    0x435966
  435887:	e8 04 0b 00 00       	call   0x436390
  43588c:	d8 44 24 38          	fadd   DWORD PTR [esp+0x38]
  435890:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  435894:	8b 54 24 30          	mov    edx,DWORD PTR [esp+0x30]
  435898:	8b 7c 24 28          	mov    edi,DWORD PTR [esp+0x28]
  43589c:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  4358a0:	8d 44 24 68          	lea    eax,[esp+0x68]
  4358a4:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4358a8:	d9 95 c0 01 00 00    	fst    DWORD PTR [ebp+0x1c0]
  4358ae:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  4358b2:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  4358b6:	50                   	push   eax
  4358b7:	51                   	push   ecx
  4358b8:	8d 94 24 14 01 00 00 	lea    edx,[esp+0x114]
  4358bf:	6a 01                	push   0x1
  4358c1:	52                   	push   edx
  4358c2:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
  4358c6:	8b cd                	mov    ecx,ebp
  4358c8:	89 7c 24 20          	mov    DWORD PTR [esp+0x20],edi
  4358cc:	c7 44 24 78 00 00 00 	mov    DWORD PTR [esp+0x78],0x0
  4358d3:	00 
  4358d4:	c7 84 24 80 00 00 00 	mov    DWORD PTR [esp+0x80],0x0
  4358db:	00 00 00 00 
  4358df:	e8 2c 1e 0a 00       	call   0x4d7710
  4358e4:	8b c8                	mov    ecx,eax
  4358e6:	8b 01                	mov    eax,DWORD PTR [ecx]
  4358e8:	85 c0                	test   eax,eax
  4358ea:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
  4358ed:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  4358f1:	75 73                	jne    0x435966
  4358f3:	8d 44 24 10          	lea    eax,[esp+0x10]
  4358f7:	56                   	push   esi
  4358f8:	50                   	push   eax
  4358f9:	8d 8c 24 24 01 00 00 	lea    ecx,[esp+0x124]
  435900:	6a 03                	push   0x3
  435902:	51                   	push   ecx
  435903:	8b cd                	mov    ecx,ebp
  435905:	e8 06 1e 0a 00       	call   0x4d7710
  43590a:	8d 85 68 01 00 00    	lea    eax,[ebp+0x168]
  435910:	8d 54 24 10          	lea    edx,[esp+0x10]
  435914:	50                   	push   eax
  435915:	52                   	push   edx
  435916:	8d 84 24 34 01 00 00 	lea    eax,[esp+0x134]
  43591d:	6a 01                	push   0x1
  43591f:	50                   	push   eax
  435920:	8b cd                	mov    ecx,ebp
  435922:	e8 e9 1d 0a 00       	call   0x4d7710
  435927:	8b 08                	mov    ecx,DWORD PTR [eax]
  435929:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  43592d:	8a 48 04             	mov    cl,BYTE PTR [eax+0x4]
  435930:	84 c9                	test   cl,cl
  435932:	74 32                	je     0x435966
  435934:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  435938:	d8 5c 24 2c          	fcomp  DWORD PTR [esp+0x2c]
  43593c:	df e0                	fnstsw ax
  43593e:	f6 c4 41             	test   ah,0x41
  435941:	75 23                	jne    0x435966
  435943:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  435947:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  43594b:	89 7c 24 10          	mov    DWORD PTR [esp+0x10],edi
  43594f:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  435953:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  435957:	c7 85 00 01 00 00 01 	mov    DWORD PTR [ebp+0x100],0x1
  43595e:	00 00 00 
  435961:	e9 c8 08 00 00       	jmp    0x43622e
  435966:	8b 4c 24 1c          	mov    ecx,DWORD PTR [esp+0x1c]
  43596a:	8b 54 24 20          	mov    edx,DWORD PTR [esp+0x20]
  43596e:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  435972:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  435976:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  43597a:	8d 8c 24 9c 00 00 00 	lea    ecx,[esp+0x9c]
  435981:	8d 54 24 10          	lea    edx,[esp+0x10]
  435985:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
  435989:	51                   	push   ecx
  43598a:	52                   	push   edx
  43598b:	8d 84 24 44 01 00 00 	lea    eax,[esp+0x144]
  435992:	6a 03                	push   0x3
  435994:	50                   	push   eax
  435995:	8b cd                	mov    ecx,ebp
  435997:	e8 74 1d 0a 00       	call   0x4d7710
  43599c:	8b 08                	mov    ecx,DWORD PTR [eax]
  43599e:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  4359a2:	8a 48 04             	mov    cl,BYTE PTR [eax+0x4]
  4359a5:	84 c9                	test   cl,cl
  4359a7:	0f 85 8e 00 00 00    	jne    0x435a3b
  4359ad:	d9 05 c4 92 6b 00    	fld    DWORD PTR ds:0x6b92c4
  4359b3:	8b 84 24 a0 01 00 00 	mov    eax,DWORD PTR [esp+0x1a0]
  4359ba:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  4359be:	d9 e0                	fchs
  4359c0:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  4359c4:	50                   	push   eax
  4359c5:	8d 4c 24 38          	lea    ecx,[esp+0x38]
  4359c9:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  4359d0:	00 
  4359d1:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  4359d8:	00 
  4359d9:	e8 c2 d5 17 00       	call   0x5b2fa0
  4359de:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  4359e2:	8d 54 24 10          	lea    edx,[esp+0x10]
  4359e6:	51                   	push   ecx
  4359e7:	52                   	push   edx
  4359e8:	8d 84 24 54 01 00 00 	lea    eax,[esp+0x154]
  4359ef:	6a 01                	push   0x1
  4359f1:	50                   	push   eax
  4359f2:	8b cd                	mov    ecx,ebp
  4359f4:	e8 17 1d 0a 00       	call   0x4d7710
  4359f9:	8b 08                	mov    ecx,DWORD PTR [eax]
  4359fb:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  4359ff:	8a 48 04             	mov    cl,BYTE PTR [eax+0x4]
  435a02:	84 c9                	test   cl,cl
  435a04:	75 35                	jne    0x435a3b
  435a06:	8d b5 74 01 00 00    	lea    esi,[ebp+0x174]
  435a0c:	8d 54 24 34          	lea    edx,[esp+0x34]
  435a10:	56                   	push   esi
  435a11:	8b cb                	mov    ecx,ebx
  435a13:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
  435a1a:	00 00 00 
  435a1d:	e8 de d5 17 00       	call   0x5b3000
  435a22:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
  435a28:	85 c9                	test   ecx,ecx
  435a2a:	74 0f                	je     0x435a3b
  435a2c:	56                   	push   esi
  435a2d:	e8 fe be 09 00       	call   0x4d1930
  435a32:	8b d0                	mov    edx,eax
  435a34:	8b ce                	mov    ecx,esi
  435a36:	e8 c5 d5 17 00       	call   0x5b3000
  435a3b:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  435a41:	8b 11                	mov    edx,DWORD PTR [ecx]
  435a43:	ff 52 30             	call   DWORD PTR [edx+0x30]
  435a46:	84 c0                	test   al,al
  435a48:	0f 84 e0 07 00 00    	je     0x43622e
  435a4e:	8b 03                	mov    eax,DWORD PTR [ebx]
  435a50:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
  435a53:	8b 53 08             	mov    edx,DWORD PTR [ebx+0x8]
  435a56:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
  435a5a:	8b 85 94 01 00 00    	mov    eax,DWORD PTR [ebp+0x194]
  435a60:	8d b5 74 01 00 00    	lea    esi,[ebp+0x174]
  435a66:	89 4c 24 38          	mov    DWORD PTR [esp+0x38],ecx
  435a6a:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  435a6e:	8b d6                	mov    edx,esi
  435a70:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  435a74:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  435a78:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
  435a7f:	00 00 00 
  435a82:	e8 c9 d5 17 00       	call   0x5b3050
  435a87:	8b 8d 2c 02 00 00    	mov    ecx,DWORD PTR [ebp+0x22c]
  435a8d:	85 c9                	test   ecx,ecx
  435a8f:	0f 84 99 07 00 00    	je     0x43622e
  435a95:	56                   	push   esi
  435a96:	e8 95 be 09 00       	call   0x4d1930
  435a9b:	8b d0                	mov    edx,eax
  435a9d:	8b ce                	mov    ecx,esi
  435a9f:	e8 5c d5 17 00       	call   0x5b3000
  435aa4:	e9 85 07 00 00       	jmp    0x43622e
  435aa9:	8b 0b                	mov    ecx,DWORD PTR [ebx]
  435aab:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
  435aae:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  435ab1:	6a 08                	push   0x8
  435ab3:	6a 00                	push   0x0
  435ab5:	89 4c 24 70          	mov    DWORD PTR [esp+0x70],ecx
  435ab9:	8b 8d f0 01 00 00    	mov    ecx,DWORD PTR [ebp+0x1f0]
  435abf:	68 40 f9 68 00       	push   0x68f940
  435ac4:	68 18 f9 68 00       	push   0x68f918
  435ac9:	6a 00                	push   0x0
  435acb:	51                   	push   ecx
  435acc:	89 94 24 84 00 00 00 	mov    DWORD PTR [esp+0x84],edx
  435ad3:	89 84 24 88 00 00 00 	mov    DWORD PTR [esp+0x88],eax
  435ada:	e8 13 4c 1d 00       	call   0x60a6f2
  435adf:	83 c4 14             	add    esp,0x14
  435ae2:	8b c8                	mov    ecx,eax
  435ae4:	e8 27 44 00 00       	call   0x439f10
  435ae9:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  435aef:	8a d8                	mov    bl,al
  435af1:	8b 11                	mov    edx,DWORD PTR [ecx]
  435af3:	ff 52 30             	call   DWORD PTR [edx+0x30]
  435af6:	84 c0                	test   al,al
  435af8:	74 33                	je     0x435b2d
  435afa:	84 db                	test   bl,bl
  435afc:	74 33                	je     0x435b31
  435afe:	56                   	push   esi
  435aff:	8b cd                	mov    ecx,ebp
  435b01:	e8 aa 0b 00 00       	call   0x4366b0
  435b06:	84 c0                	test   al,al
  435b08:	74 23                	je     0x435b2d
  435b0a:	8a 85 70 03 00 00    	mov    al,BYTE PTR [ebp+0x370]
  435b10:	84 c0                	test   al,al
  435b12:	75 19                	jne    0x435b2d
  435b14:	d9 85 88 03 00 00    	fld    DWORD PTR [ebp+0x388]
  435b1a:	d8 8d 94 01 00 00    	fmul   DWORD PTR [ebp+0x194]
  435b20:	c6 85 70 03 00 00 01 	mov    BYTE PTR [ebp+0x370],0x1
  435b27:	d9 9d 78 01 00 00    	fstp   DWORD PTR [ebp+0x178]
  435b2d:	84 db                	test   bl,bl
  435b2f:	75 07                	jne    0x435b38
  435b31:	c6 85 70 03 00 00 00 	mov    BYTE PTR [ebp+0x370],0x0
  435b38:	d9 85 78 01 00 00    	fld    DWORD PTR [ebp+0x178]
  435b3e:	d9 05 b0 92 6b 00    	fld    DWORD PTR ds:0x6b92b0
  435b44:	d8 8c 24 a0 01 00 00 	fmul   DWORD PTR [esp+0x1a0]
  435b4b:	8d 44 24 68          	lea    eax,[esp+0x68]
  435b4f:	8d 95 74 01 00 00    	lea    edx,[ebp+0x174]
  435b55:	50                   	push   eax
  435b56:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  435b5a:	dc 0d a0 c5 64 00    	fmul   QWORD PTR ds:0x64c5a0
  435b60:	de e9                	fsubp  st(1),st
  435b62:	d9 9d 78 01 00 00    	fstp   DWORD PTR [ebp+0x178]
  435b68:	e8 93 d4 17 00       	call   0x5b3000
  435b6d:	d9 85 78 01 00 00    	fld    DWORD PTR [ebp+0x178]
  435b73:	d9 05 b0 92 6b 00    	fld    DWORD PTR ds:0x6b92b0
  435b79:	d8 8c 24 a0 01 00 00 	fmul   DWORD PTR [esp+0x1a0]
  435b80:	8a 85 70 03 00 00    	mov    al,BYTE PTR [ebp+0x370]
  435b86:	84 c0                	test   al,al
  435b88:	dc 0d a0 c5 64 00    	fmul   QWORD PTR ds:0x64c5a0
  435b8e:	de e9                	fsubp  st(1),st
  435b90:	d9 9d 78 01 00 00    	fstp   DWORD PTR [ebp+0x178]
  435b96:	74 1c                	je     0x435bb4
  435b98:	d9 44 24 70          	fld    DWORD PTR [esp+0x70]
  435b9c:	d8 0d 9c c5 64 00    	fmul   DWORD PTR ds:0x64c59c
  435ba2:	d9 5c 24 70          	fstp   DWORD PTR [esp+0x70]
  435ba6:	d9 44 24 68          	fld    DWORD PTR [esp+0x68]
  435baa:	d8 0d 9c c5 64 00    	fmul   DWORD PTR ds:0x64c59c
  435bb0:	d9 5c 24 68          	fstp   DWORD PTR [esp+0x68]
  435bb4:	8d 54 24 74          	lea    edx,[esp+0x74]
  435bb8:	56                   	push   esi
  435bb9:	8d 4c 24 6c          	lea    ecx,[esp+0x6c]
  435bbd:	e8 de d3 17 00       	call   0x5b2fa0
  435bc2:	8b 44 24 7c          	mov    eax,DWORD PTR [esp+0x7c]
  435bc6:	8b 4c 24 74          	mov    ecx,DWORD PTR [esp+0x74]
  435bca:	8b 54 24 78          	mov    edx,DWORD PTR [esp+0x78]
  435bce:	89 44 24 54          	mov    DWORD PTR [esp+0x54],eax
  435bd2:	a1 cc 57 6b 00       	mov    eax,ds:0x6b57cc
  435bd7:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
  435bdb:	3d 00 00 00 80       	cmp    eax,0x80000000
  435be0:	89 54 24 50          	mov    DWORD PTR [esp+0x50],edx
  435be4:	75 1c                	jne    0x435c02
  435be6:	a1 80 57 6b 00       	mov    eax,ds:0x6b5780
  435beb:	85 c0                	test   eax,eax
  435bed:	75 05                	jne    0x435bf4
  435bef:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  435bf4:	50                   	push   eax
  435bf5:	e8 16 53 1d 00       	call   0x60af10
  435bfa:	83 c4 04             	add    esp,0x4
  435bfd:	a3 cc 57 6b 00       	mov    ds:0x6b57cc,eax
  435c02:	85 c0                	test   eax,eax
  435c04:	74 12                	je     0x435c18
  435c06:	8d 4c 24 4c          	lea    ecx,[esp+0x4c]
  435c0a:	68 00 06 69 00       	push   0x690600
  435c0f:	51                   	push   ecx
  435c10:	e8 fb e5 11 00       	call   0x554210
  435c15:	83 c4 08             	add    esp,0x8
  435c18:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
  435c1c:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  435c20:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
  435c24:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  435c28:	89 54 24 30          	mov    DWORD PTR [esp+0x30],edx
  435c2c:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  435c30:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  435c34:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
  435c38:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  435c3c:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  435c40:	89 4c 24 28          	mov    DWORD PTR [esp+0x28],ecx
  435c44:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  435c48:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  435c4c:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  435c50:	8d 54 24 28          	lea    edx,[esp+0x28]
  435c54:	8d 44 24 10          	lea    eax,[esp+0x10]
  435c58:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  435c5c:	52                   	push   edx
  435c5d:	50                   	push   eax
  435c5e:	8d 8c 24 64 01 00 00 	lea    ecx,[esp+0x164]
  435c65:	6a 03                	push   0x3
  435c67:	51                   	push   ecx
  435c68:	8b cd                	mov    ecx,ebp
  435c6a:	c7 44 24 48 00 00 00 	mov    DWORD PTR [esp+0x48],0x0
  435c71:	00 
  435c72:	c7 44 24 38 00 00 00 	mov    DWORD PTR [esp+0x38],0x0
  435c79:	00 
  435c7a:	c7 44 24 40 00 00 00 	mov    DWORD PTR [esp+0x40],0x0
  435c81:	00 
  435c82:	e8 89 1a 0a 00       	call   0x4d7710
  435c87:	d9 44 24 50          	fld    DWORD PTR [esp+0x50]
  435c8b:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435c91:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  435c95:	51                   	push   ecx
  435c96:	8d b5 d0 01 00 00    	lea    esi,[ebp+0x1d0]
  435c9c:	d9 e0                	fchs
  435c9e:	d9 1c 24             	fstp   DWORD PTR [esp]
  435ca1:	df e0                	fnstsw ax
  435ca3:	8b ce                	mov    ecx,esi
  435ca5:	f6 c4 01             	test   ah,0x1
  435ca8:	0f 85 b1 01 00 00    	jne    0x435e5f
  435cae:	e8 dd ed 11 00       	call   0x554a90
  435cb3:	8d 54 24 34          	lea    edx,[esp+0x34]
  435cb7:	8d 44 24 10          	lea    eax,[esp+0x10]
  435cbb:	52                   	push   edx
  435cbc:	50                   	push   eax
  435cbd:	8d 8c 24 74 01 00 00 	lea    ecx,[esp+0x174]
  435cc4:	6a 03                	push   0x3
  435cc6:	51                   	push   ecx
  435cc7:	8b cd                	mov    ecx,ebp
  435cc9:	e8 42 1a 0a 00       	call   0x4d7710
  435cce:	8d bd 68 01 00 00    	lea    edi,[ebp+0x168]
  435cd4:	8d 54 24 10          	lea    edx,[esp+0x10]
  435cd8:	57                   	push   edi
  435cd9:	52                   	push   edx
  435cda:	8d 84 24 84 01 00 00 	lea    eax,[esp+0x184]
  435ce1:	6a 01                	push   0x1
  435ce3:	50                   	push   eax
  435ce4:	8b cd                	mov    ecx,ebp
  435ce6:	e8 25 1a 0a 00       	call   0x4d7710
  435ceb:	8b 08                	mov    ecx,DWORD PTR [eax]
  435ced:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  435cf1:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  435cf5:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  435cf9:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
  435cfc:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  435d00:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  435d04:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  435d08:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
  435d0c:	52                   	push   edx
  435d0d:	8b ce                	mov    ecx,esi
  435d0f:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  435d13:	e8 78 ed 11 00       	call   0x554a90
  435d18:	84 db                	test   bl,bl
  435d1a:	0f 84 a5 00 00 00    	je     0x435dc5
  435d20:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  435d24:	d8 5c 24 20          	fcomp  DWORD PTR [esp+0x20]
  435d28:	df e0                	fnstsw ax
  435d2a:	f6 c4 41             	test   ah,0x41
  435d2d:	0f 85 92 00 00 00    	jne    0x435dc5
  435d33:	e8 58 06 00 00       	call   0x436390
  435d38:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  435d3c:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  435d40:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  435d44:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
  435d48:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  435d4c:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  435d50:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  435d54:	8d 44 24 28          	lea    eax,[esp+0x28]
  435d58:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  435d5c:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  435d60:	de c1                	faddp  st(1),st
  435d62:	50                   	push   eax
  435d63:	51                   	push   ecx
  435d64:	8d 94 24 cc 00 00 00 	lea    edx,[esp+0xcc]
  435d6b:	6a 03                	push   0x3
  435d6d:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  435d71:	52                   	push   edx
  435d72:	8b cd                	mov    ecx,ebp
  435d74:	e8 97 19 0a 00       	call   0x4d7710
  435d79:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  435d7d:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  435d81:	8d 44 24 34          	lea    eax,[esp+0x34]
  435d85:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  435d89:	50                   	push   eax
  435d8a:	51                   	push   ecx
  435d8b:	8d 94 24 2c 01 00 00 	lea    edx,[esp+0x12c]
  435d92:	6a 03                	push   0x3
  435d94:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  435d98:	52                   	push   edx
  435d99:	8b cd                	mov    ecx,ebp
  435d9b:	e8 70 19 0a 00       	call   0x4d7710
  435da0:	8d 44 24 10          	lea    eax,[esp+0x10]
  435da4:	57                   	push   edi
  435da5:	50                   	push   eax
  435da6:	8d 8c 24 dc 00 00 00 	lea    ecx,[esp+0xdc]
  435dad:	6a 01                	push   0x1
  435daf:	51                   	push   ecx
  435db0:	8b cd                	mov    ecx,ebp
  435db2:	e8 59 19 0a 00       	call   0x4d7710
  435db7:	8b 10                	mov    edx,DWORD PTR [eax]
  435db9:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  435dbd:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
  435dc0:	e9 32 02 00 00       	jmp    0x435ff7
  435dc5:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  435dc9:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  435dcd:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  435dd1:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  435dd5:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  435dd9:	8d 44 24 74          	lea    eax,[esp+0x74]
  435ddd:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  435de1:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  435de5:	50                   	push   eax
  435de6:	51                   	push   ecx
  435de7:	8d 94 24 5c 01 00 00 	lea    edx,[esp+0x15c]
  435dee:	6a 03                	push   0x3
  435df0:	52                   	push   edx
  435df1:	8b cd                	mov    ecx,ebp
  435df3:	e8 18 19 0a 00       	call   0x4d7710
  435df8:	8b 08                	mov    ecx,DWORD PTR [eax]
  435dfa:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
  435dfd:	84 ff                	test   bh,bh
  435dff:	74 1d                	je     0x435e1e
  435e01:	d9 85 78 01 00 00    	fld    DWORD PTR [ebp+0x178]
  435e07:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  435e0d:	df e0                	fnstsw ax
  435e0f:	f6 c4 41             	test   ah,0x41
  435e12:	75 0a                	jne    0x435e1e
  435e14:	c7 85 78 01 00 00 00 	mov    DWORD PTR [ebp+0x178],0x0
  435e1b:	00 00 00 
  435e1e:	85 c9                	test   ecx,ecx
  435e20:	c7 05 9c 01 69 00 00 	mov    DWORD PTR ds:0x69019c,0x3f800000
  435e27:	00 80 3f 
  435e2a:	0f 8e c7 01 00 00    	jle    0x435ff7
  435e30:	8d 84 24 90 00 00 00 	lea    eax,[esp+0x90]
  435e37:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  435e3b:	50                   	push   eax
  435e3c:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  435e40:	e8 9b d1 17 00       	call   0x5b2fe0
  435e45:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  435e4c:	e8 cf d0 17 00       	call   0x5b2f20
  435e51:	dd d8                	fstp   st(0)
  435e53:	d9 84 24 94 00 00 00 	fld    DWORD PTR [esp+0x94]
  435e5a:	e9 90 01 00 00       	jmp    0x435fef
  435e5f:	e8 3c ec 11 00       	call   0x554aa0
  435e64:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  435e68:	8d 54 24 10          	lea    edx,[esp+0x10]
  435e6c:	51                   	push   ecx
  435e6d:	52                   	push   edx
  435e6e:	8d 84 24 bc 00 00 00 	lea    eax,[esp+0xbc]
  435e75:	6a 03                	push   0x3
  435e77:	50                   	push   eax
  435e78:	8b cd                	mov    ecx,ebp
  435e7a:	e8 91 18 0a 00       	call   0x4d7710
  435e7f:	8d 8d 5c 01 00 00    	lea    ecx,[ebp+0x15c]
  435e85:	8d 54 24 10          	lea    edx,[esp+0x10]
  435e89:	51                   	push   ecx
  435e8a:	52                   	push   edx
  435e8b:	8d 84 24 3c 01 00 00 	lea    eax,[esp+0x13c]
  435e92:	6a 01                	push   0x1
  435e94:	50                   	push   eax
  435e95:	8b cd                	mov    ecx,ebp
  435e97:	e8 74 18 0a 00       	call   0x4d7710
  435e9c:	8b 08                	mov    ecx,DWORD PTR [eax]
  435e9e:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
  435ea2:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  435ea6:	8b 4c 24 18          	mov    ecx,DWORD PTR [esp+0x18]
  435eaa:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
  435ead:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  435eb1:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
  435eb5:	8b 54 24 2c          	mov    edx,DWORD PTR [esp+0x2c]
  435eb9:	89 4c 24 48          	mov    DWORD PTR [esp+0x48],ecx
  435ebd:	52                   	push   edx
  435ebe:	8b ce                	mov    ecx,esi
  435ec0:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  435ec4:	e8 d7 eb 11 00       	call   0x554aa0
  435ec9:	84 db                	test   bl,bl
  435ecb:	0f 84 ac 00 00 00    	je     0x435f7d
  435ed1:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  435ed5:	d8 5c 24 20          	fcomp  DWORD PTR [esp+0x20]
  435ed9:	df e0                	fnstsw ax
  435edb:	f6 c4 01             	test   ah,0x1
  435ede:	0f 84 99 00 00 00    	je     0x435f7d
  435ee4:	d9 44 24 44          	fld    DWORD PTR [esp+0x44]
  435ee8:	d8 64 24 20          	fsub   DWORD PTR [esp+0x20]
  435eec:	d9 5c 24 40          	fstp   DWORD PTR [esp+0x40]
  435ef0:	e8 9b 04 00 00       	call   0x436390
  435ef5:	8b 44 24 1c          	mov    eax,DWORD PTR [esp+0x1c]
  435ef9:	8b 4c 24 20          	mov    ecx,DWORD PTR [esp+0x20]
  435efd:	8b 54 24 24          	mov    edx,DWORD PTR [esp+0x24]
  435f01:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
  435f05:	d8 6c 24 40          	fsubr  DWORD PTR [esp+0x40]
  435f09:	89 4c 24 14          	mov    DWORD PTR [esp+0x14],ecx
  435f0d:	8d 44 24 28          	lea    eax,[esp+0x28]
  435f11:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  435f15:	89 54 24 18          	mov    DWORD PTR [esp+0x18],edx
  435f19:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  435f1d:	50                   	push   eax
  435f1e:	51                   	push   ecx
  435f1f:	8d 94 24 fc 00 00 00 	lea    edx,[esp+0xfc]
  435f26:	6a 03                	push   0x3
  435f28:	52                   	push   edx
  435f29:	8b cd                	mov    ecx,ebp
  435f2b:	e8 e0 17 0a 00       	call   0x4d7710
  435f30:	d9 44 24 78          	fld    DWORD PTR [esp+0x78]
  435f34:	d8 64 24 2c          	fsub   DWORD PTR [esp+0x2c]
  435f38:	8d 44 24 34          	lea    eax,[esp+0x34]
  435f3c:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  435f40:	50                   	push   eax
  435f41:	51                   	push   ecx
  435f42:	8d 94 24 7c 01 00 00 	lea    edx,[esp+0x17c]
  435f49:	6a 03                	push   0x3
  435f4b:	d9 5c 24 38          	fstp   DWORD PTR [esp+0x38]
  435f4f:	52                   	push   edx
  435f50:	8b cd                	mov    ecx,ebp
  435f52:	e8 b9 17 0a 00       	call   0x4d7710
  435f57:	8d 44 24 28          	lea    eax,[esp+0x28]
  435f5b:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  435f5f:	50                   	push   eax
  435f60:	51                   	push   ecx
  435f61:	8d 94 24 0c 01 00 00 	lea    edx,[esp+0x10c]
  435f68:	6a 03                	push   0x3
  435f6a:	52                   	push   edx
  435f6b:	8b cd                	mov    ecx,ebp
  435f6d:	e8 9e 17 0a 00       	call   0x4d7710
  435f72:	8b 08                	mov    ecx,DWORD PTR [eax]
  435f74:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
  435f78:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
  435f7b:	eb 7a                	jmp    0x435ff7
  435f7d:	8b 54 24 1c          	mov    edx,DWORD PTR [esp+0x1c]
  435f81:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  435f85:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
  435f89:	89 54 24 10          	mov    DWORD PTR [esp+0x10],edx
  435f8d:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
  435f91:	8d 54 24 74          	lea    edx,[esp+0x74]
  435f95:	8d 44 24 10          	lea    eax,[esp+0x10]
  435f99:	89 4c 24 18          	mov    DWORD PTR [esp+0x18],ecx
  435f9d:	52                   	push   edx
  435f9e:	50                   	push   eax
  435f9f:	8d 8c 24 4c 01 00 00 	lea    ecx,[esp+0x14c]
  435fa6:	6a 03                	push   0x3
  435fa8:	51                   	push   ecx
  435fa9:	8b cd                	mov    ecx,ebp
  435fab:	e8 60 17 0a 00       	call   0x4d7710
  435fb0:	8b d0                	mov    edx,eax
  435fb2:	8b 02                	mov    eax,DWORD PTR [edx]
  435fb4:	85 c0                	test   eax,eax
  435fb6:	8b 5a 04             	mov    ebx,DWORD PTR [edx+0x4]
  435fb9:	c7 05 9c 01 69 00 00 	mov    DWORD PTR ds:0x69019c,0x3f800000
  435fc0:	00 80 3f 
  435fc3:	7e 32                	jle    0x435ff7
  435fc5:	8d 84 24 90 00 00 00 	lea    eax,[esp+0x90]
  435fcc:	8d 54 24 1c          	lea    edx,[esp+0x1c]
  435fd0:	50                   	push   eax
  435fd1:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  435fd5:	e8 06 d0 17 00       	call   0x5b2fe0
  435fda:	8d 8c 24 90 00 00 00 	lea    ecx,[esp+0x90]
  435fe1:	e8 3a cf 17 00       	call   0x5b2f20
  435fe6:	dd d8                	fstp   st(0)
  435fe8:	d9 84 24 94 00 00 00 	fld    DWORD PTR [esp+0x94]
  435fef:	d9 e1                	fabs
  435ff1:	d9 1d 9c 01 69 00    	fstp   DWORD PTR ds:0x69019c
  435ff7:	84 db                	test   bl,bl
  435ff9:	0f 84 2f 02 00 00    	je     0x43622e
  435fff:	c6 85 70 03 00 00 00 	mov    BYTE PTR [ebp+0x370],0x0
  436006:	c7 85 00 01 00 00 00 	mov    DWORD PTR [ebp+0x100],0x0
  43600d:	00 00 00 
  436010:	e9 19 02 00 00       	jmp    0x43622e
  436015:	8b 8d 8c 01 00 00    	mov    ecx,DWORD PTR [ebp+0x18c]
  43601b:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  43601f:	89 8c 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],ecx
  436026:	56                   	push   esi
  436027:	8d 8c 24 94 00 00 00 	lea    ecx,[esp+0x94]
  43602e:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x0
  436035:	00 00 00 00 
  436039:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x0
  436040:	00 00 00 00 
  436044:	e8 57 cf 17 00       	call   0x5b2fa0
  436049:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  43604d:	8d 44 24 10          	lea    eax,[esp+0x10]
  436051:	52                   	push   edx
  436052:	50                   	push   eax
  436053:	8d 8c 24 1c 01 00 00 	lea    ecx,[esp+0x11c]
  43605a:	6a 01                	push   0x1
  43605c:	51                   	push   ecx
  43605d:	8b cd                	mov    ecx,ebp
  43605f:	e8 ac 16 0a 00       	call   0x4d7710
  436064:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  436068:	d8 9d c0 01 00 00    	fcomp  DWORD PTR [ebp+0x1c0]
  43606e:	df e0                	fnstsw ax
  436070:	f6 c4 41             	test   ah,0x41
  436073:	0f 85 b5 01 00 00    	jne    0x43622e
  436079:	8b 95 c0 01 00 00    	mov    edx,DWORD PTR [ebp+0x1c0]
  43607f:	8d 85 c4 01 00 00    	lea    eax,[ebp+0x1c4]
  436085:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  436089:	89 54 24 14          	mov    DWORD PTR [esp+0x14],edx
  43608d:	50                   	push   eax
  43608e:	51                   	push   ecx
  43608f:	8d 94 24 6c 01 00 00 	lea    edx,[esp+0x16c]
  436096:	6a 03                	push   0x3
  436098:	52                   	push   edx
  436099:	8b cd                	mov    ecx,ebp
  43609b:	e8 70 16 0a 00       	call   0x4d7710
  4360a0:	8d 85 68 01 00 00    	lea    eax,[ebp+0x168]
  4360a6:	8d 4c 24 10          	lea    ecx,[esp+0x10]
  4360aa:	50                   	push   eax
  4360ab:	51                   	push   ecx
  4360ac:	8d 94 24 c4 00 00 00 	lea    edx,[esp+0xc4]
  4360b3:	6a 01                	push   0x1
  4360b5:	52                   	push   edx
  4360b6:	8b cd                	mov    ecx,ebp
  4360b8:	e8 53 16 0a 00       	call   0x4d7710
  4360bd:	c7 85 00 01 00 00 00 	mov    DWORD PTR [ebp+0x100],0x0
  4360c4:	00 00 00 
  4360c7:	e9 62 01 00 00       	jmp    0x43622e
  4360cc:	8d 44 24 10          	lea    eax,[esp+0x10]
  4360d0:	8d 54 24 74          	lea    edx,[esp+0x74]
  4360d4:	50                   	push   eax
  4360d5:	8d 4c 24 20          	lea    ecx,[esp+0x20]
  4360d9:	e8 22 cf 17 00       	call   0x5b3000
  4360de:	a1 e0 8d 6c 00       	mov    eax,ds:0x6c8de0
  4360e3:	85 c0                	test   eax,eax
  4360e5:	75 05                	jne    0x4360ec
  4360e7:	e8 94 51 12 00       	call   0x55b280
  4360ec:	8a 48 48             	mov    cl,BYTE PTR [eax+0x48]
  4360ef:	84 c9                	test   cl,cl
  4360f1:	0f 84 37 01 00 00    	je     0x43622e
  4360f7:	8d 8d 74 01 00 00    	lea    ecx,[ebp+0x174]
  4360fd:	c7 85 00 01 00 00 02 	mov    DWORD PTR [ebp+0x100],0x2
  436104:	00 00 00 
  436107:	e8 64 cf 17 00       	call   0x5b3070
  43610c:	e9 1d 01 00 00       	jmp    0x43622e
  436111:	8a 8c 24 83 00 00 00 	mov    cl,BYTE PTR [esp+0x83]
  436118:	bf e8 05 69 00       	mov    edi,0x6905e8
  43611d:	88 4c 24 58          	mov    BYTE PTR [esp+0x58],cl
  436121:	83 c9 ff             	or     ecx,0xffffffff
  436124:	33 c0                	xor    eax,eax
  436126:	33 f6                	xor    esi,esi
  436128:	33 d2                	xor    edx,edx
  43612a:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  43612e:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  436130:	f7 d1                	not    ecx
  436132:	49                   	dec    ecx
  436133:	89 54 24 5c          	mov    DWORD PTR [esp+0x5c],edx
  436137:	8b d9                	mov    ebx,ecx
  436139:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  43613d:	83 fb fd             	cmp    ebx,0xfffffffd
  436140:	76 2f                	jbe    0x436171
  436142:	e8 b4 84 1c 00       	call   0x5fe5fb
  436147:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  43614b:	3b d6                	cmp    edx,esi
  43614d:	74 22                	je     0x436171
  43614f:	8a 42 ff             	mov    al,BYTE PTR [edx-0x1]
  436152:	84 c0                	test   al,al
  436154:	74 1b                	je     0x436171
  436156:	3c ff                	cmp    al,0xff
  436158:	74 17                	je     0x436171
  43615a:	3b de                	cmp    ebx,esi
  43615c:	75 3c                	jne    0x43619a
  43615e:	fe c8                	dec    al
  436160:	88 42 ff             	mov    BYTE PTR [edx-0x1],al
  436163:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
  436167:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  43616b:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  43616f:	eb 5c                	jmp    0x4361cd
  436171:	3b de                	cmp    ebx,esi
  436173:	75 0d                	jne    0x436182
  436175:	6a 01                	push   0x1
  436177:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  43617b:	e8 20 df fc ff       	call   0x4040a0
  436180:	eb 4b                	jmp    0x4361cd
  436182:	8b 44 24 64          	mov    eax,DWORD PTR [esp+0x64]
  436186:	83 f8 1f             	cmp    eax,0x1f
  436189:	77 04                	ja     0x43618f
  43618b:	3b c3                	cmp    eax,ebx
  43618d:	73 19                	jae    0x4361a8
  43618f:	6a 01                	push   0x1
  436191:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  436195:	e8 06 df fc ff       	call   0x4040a0
  43619a:	53                   	push   ebx
  43619b:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
  43619f:	e8 bc b8 fc ff       	call   0x401a60
  4361a4:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
  4361a8:	8b cb                	mov    ecx,ebx
  4361aa:	8b fa                	mov    edi,edx
  4361ac:	8b d1                	mov    edx,ecx
  4361ae:	be e8 05 69 00       	mov    esi,0x6905e8
  4361b3:	c1 e9 02             	shr    ecx,0x2
  4361b6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4361b8:	8b ca                	mov    ecx,edx
  4361ba:	83 e1 03             	and    ecx,0x3
  4361bd:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4361bf:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
  4361c3:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
  4361c7:	33 f6                	xor    esi,esi
  4361c9:	c6 04 18 00          	mov    BYTE PTR [eax+ebx*1],0x0
  4361cd:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  4361d1:	89 b4 24 8c 01 00 00 	mov    DWORD PTR [esp+0x18c],esi
  4361d8:	51                   	push   ecx
  4361d9:	68 70 07 00 00       	push   0x770
  4361de:	68 28 03 69 00       	push   0x690328
  4361e3:	68 d0 d2 68 00       	push   0x68d2d0
  4361e8:	e8 03 a6 16 00       	call   0x5a07f0
  4361ed:	ff d0                	call   eax
  4361ef:	8b 44 24 6c          	mov    eax,DWORD PTR [esp+0x6c]
  4361f3:	83 c4 10             	add    esp,0x10
  4361f6:	3b c6                	cmp    eax,esi
  4361f8:	c7 84 24 8c 01 00 00 	mov    DWORD PTR [esp+0x18c],0xffffffff
  4361ff:	ff ff ff ff 
  436203:	74 1d                	je     0x436222
  436205:	8d 48 ff             	lea    ecx,[eax-0x1]
  436208:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
  43620b:	84 c0                	test   al,al
  43620d:	74 0a                	je     0x436219
  43620f:	3c ff                	cmp    al,0xff
  436211:	74 06                	je     0x436219
  436213:	fe c8                	dec    al
  436215:	88 01                	mov    BYTE PTR [ecx],al
  436217:	eb 09                	jmp    0x436222
  436219:	51                   	push   ecx
  43621a:	e8 d1 83 1c 00       	call   0x5fe5f0
  43621f:	83 c4 04             	add    esp,0x4
  436222:	89 74 24 5c          	mov    DWORD PTR [esp+0x5c],esi
  436226:	89 74 24 60          	mov    DWORD PTR [esp+0x60],esi
  43622a:	89 74 24 64          	mov    DWORD PTR [esp+0x64],esi
  43622e:	a1 cc 57 6b 00       	mov    eax,ds:0x6b57cc
  436233:	5f                   	pop    edi
  436234:	3d 00 00 00 80       	cmp    eax,0x80000000
  436239:	5b                   	pop    ebx
  43623a:	75 1c                	jne    0x436258
  43623c:	a1 80 57 6b 00       	mov    eax,ds:0x6b5780
  436241:	85 c0                	test   eax,eax
  436243:	75 05                	jne    0x43624a
  436245:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  43624a:	50                   	push   eax
  43624b:	e8 c0 4c 1d 00       	call   0x60af10
  436250:	83 c4 04             	add    esp,0x4
  436253:	a3 cc 57 6b 00       	mov    ds:0x6b57cc,eax
  436258:	85 c0                	test   eax,eax
  43625a:	74 66                	je     0x4362c2
  43625c:	68 d0 05 69 00       	push   0x6905d0
  436261:	e8 ca 9b 17 00       	call   0x5afe30
  436266:	8d 54 24 0c          	lea    edx,[esp+0xc]
  43626a:	68 c8 05 69 00       	push   0x6905c8
  43626f:	52                   	push   edx
  436270:	e8 9b df 11 00       	call   0x554210
  436275:	8d 44 24 50          	lea    eax,[esp+0x50]
  436279:	68 c0 05 69 00       	push   0x6905c0
  43627e:	50                   	push   eax
  43627f:	e8 8c df 11 00       	call   0x554210
  436284:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
  43628a:	83 c4 14             	add    esp,0x14
  43628d:	83 f8 04             	cmp    eax,0x4
  436290:	77 23                	ja     0x4362b5
  436292:	ff 24 85 70 63 43 00 	jmp    DWORD PTR [eax*4+0x436370]
  436299:	68 ac 05 69 00       	push   0x6905ac
  43629e:	eb 1a                	jmp    0x4362ba
  4362a0:	68 98 05 69 00       	push   0x690598
  4362a5:	eb 13                	jmp    0x4362ba
  4362a7:	68 80 05 69 00       	push   0x690580
  4362ac:	eb 0c                	jmp    0x4362ba
  4362ae:	68 68 05 69 00       	push   0x690568
  4362b3:	eb 05                	jmp    0x4362ba
  4362b5:	68 48 05 69 00       	push   0x690548
  4362ba:	e8 71 9b 17 00       	call   0x5afe30
  4362bf:	83 c4 04             	add    esp,0x4
  4362c2:	8d 4c 24 08          	lea    ecx,[esp+0x8]
  4362c6:	51                   	push   ecx
  4362c7:	8b cd                	mov    ecx,ebp
  4362c9:	e8 e2 06 0a 00       	call   0x4d69b0
  4362ce:	8d 54 24 08          	lea    edx,[esp+0x8]
  4362d2:	8b cd                	mov    ecx,ebp
  4362d4:	52                   	push   edx
  4362d5:	e8 a6 0b 0a 00       	call   0x4d6e80
  4362da:	84 c0                	test   al,al
  4362dc:	75 39                	jne    0x436317
  4362de:	a1 3c 58 6b 00       	mov    eax,ds:0x6b583c
  4362e3:	3d 00 00 00 80       	cmp    eax,0x80000000
  4362e8:	75 1c                	jne    0x436306
  4362ea:	a1 f0 57 6b 00       	mov    eax,ds:0x6b57f0
  4362ef:	85 c0                	test   eax,eax
  4362f1:	75 05                	jne    0x4362f8
  4362f3:	b8 b4 a3 64 00       	mov    eax,0x64a3b4
  4362f8:	50                   	push   eax
  4362f9:	e8 12 4c 1d 00       	call   0x60af10
  4362fe:	83                   	.byte 0x83
  4362ff:	c4                   	.byte 0xc4
