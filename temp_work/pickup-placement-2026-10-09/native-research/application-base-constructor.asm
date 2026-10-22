  4bb0e0: push   0xffffffff // None
  4bb0e2: push   0x62f735
  4bb0e7: mov    eax,fs:0x0
  4bb0ed: push   eax
  4bb0ee: mov    DWORD PTR fs:0x0,esp
  4bb0f5: sub    esp,0x2ec
  4bb0fb: push   ebx
  4bb0fc: push   ebp
  4bb0fd: push   esi
  4bb0fe: mov    ebp,ecx
  4bb100: push   edi
  4bb101: mov    DWORD PTR [esp+0xac],ebp
  4bb108: call   0x5ab4a0
  4bb10d: mov    al,BYTE PTR [esp+0x13]
  4bb111: xor    ebx,ebx
  4bb113: lea    esi,[ebp+0x14]
  4bb116: push   ebx
  4bb117: mov    ecx,esi
  4bb119: mov    DWORD PTR [esp+0x308],ebx
  4bb120: mov    BYTE PTR [esi],al
  4bb122: call   0x4040a0
  4bb127: mov    edi,0x6b3f70 // 0.0
  4bb12c: or     ecx,0xffffffff // None
  4bb12f: xor    eax,eax
  4bb131: repnz scas al,BYTE PTR es:[edi]
  4bb133: not    ecx
  4bb135: dec    ecx
  4bb136: push   ecx
  4bb137: push   0x6b3f70 // 0.0
  4bb13c: mov    ecx,esi
  4bb13e: call   0x4040f0
  4bb143: mov    cl,BYTE PTR [esp+0x13]
  4bb147: lea    esi,[ebp+0x24]
  4bb14a: push   ebx
  4bb14b: mov    BYTE PTR [esp+0x308],0x1
  4bb152: 
  4bb153: mov    BYTE PTR [esi],cl
  4bb155: mov    ecx,esi
  4bb157: call   0x4040a0
  4bb15c: mov    edi,0x6b3f70 // 0.0
  4bb161: or     ecx,0xffffffff // None
  4bb164: xor    eax,eax
  4bb166: repnz scas al,BYTE PTR es:[edi]
  4bb168: not    ecx
  4bb16a: dec    ecx
  4bb16b: push   ecx
  4bb16c: push   0x6b3f70 // 0.0
  4bb171: mov    ecx,esi
  4bb173: call   0x4040f0
  4bb178: lea    esi,[ebp+0x48]
  4bb17b: lea    edx,[esp+0x13]
  4bb17f: push   edx
  4bb180: mov    ecx,esi
  4bb182: mov    BYTE PTR [esp+0x308],0x2
  4bb189: 
  4bb18a: mov    BYTE PTR [ebp+0x34],0x1
  4bb18e: mov    DWORD PTR [ebp+0x38],0x800000 // None
  4bb195: mov    BYTE PTR [ebp+0x3c],0x1
  4bb199: mov    BYTE PTR [ebp+0x3d],0x1
  4bb19d: mov    BYTE PTR [ebp+0x3e],bl
  4bb1a0: mov    DWORD PTR [ebp+0x40],ebx
  4bb1a3: mov    BYTE PTR [ebp+0x44],bl
  4bb1a6: mov    BYTE PTR [ebp+0x45],bl
  4bb1a9: mov    DWORD PTR [esp+0x78],esi
  4bb1ad: call   0x44e4a0
  4bb1b2: push   ebx
  4bb1b3: mov    ecx,esi
  4bb1b5: mov    BYTE PTR [esp+0x308],0x3
  4bb1bc: 
  4bb1bd: call   0x4c4990
  4bb1c2: mov    eax,ds:0x6cad58 // None
  4bb1c7: mov    BYTE PTR [esp+0x304],0x4
  4bb1ce: 
  4bb1cf: cmp    eax,ebx
  4bb1d1: jne    0x4bb1d8
  4bb1d3: call   0x5a78b0
  4bb1d8: mov    edi,DWORD PTR [esp+0x30c]
  4bb1df: mov    DWORD PTR [ebp+0x58],eax
  4bb1e2: mov    DWORD PTR [ebp+0x5c],ebx
  4bb1e5: lea    esi,[ebp+0x60]
  4bb1e8: mov    al,BYTE PTR [edi]
  4bb1ea: push   ebx
  4bb1eb: mov    ecx,esi
  4bb1ed: mov    BYTE PTR [esi],al
  4bb1ef: call   0x4040a0
  4bb1f4: mov    ecx,DWORD PTR ds:0x64aba8 // nan
  4bb1fa: push   ecx
  4bb1fb: push   ebx
  4bb1fc: push   edi
  4bb1fd: mov    ecx,esi
  4bb1ff: call   0x40cc00
  4bb204: mov    dl,BYTE PTR [edi]
  4bb206: lea    esi,[ebp+0x70]
  4bb209: push   ebx
  4bb20a: mov    ecx,esi
  4bb20c: mov    BYTE PTR [esp+0x308],0x5
  4bb213: 
  4bb214: mov    BYTE PTR [esi],dl
  4bb216: call   0x4040a0
  4bb21b: mov    eax,ds:0x64aba8 // nan
  4bb220: mov    ecx,esi
  4bb222: push   eax
  4bb223: push   ebx
  4bb224: push   edi
  4bb225: call   0x40cc00
  4bb22a: lea    ecx,[ebp+0x88]
  4bb230: mov    BYTE PTR [esp+0x304],0x6
  4bb237: 
  4bb238: mov    DWORD PTR [ebp+0x80],0x190
  4bb23f: 
  4bb242: mov    DWORD PTR [ebp+0x84],0x12c
  4bb249: 
  4bb24c: call   0x592a50
  4bb251: mov    BYTE PTR [ebp+0x39c],0x0
  4bb258: mov    eax,ds:0x6c8de0 // None
  4bb25d: cmp    eax,ebx
  4bb25f: mov    BYTE PTR [esp+0x304],0x7
  4bb266: 
  4bb267: jne    0x4bb26e
  4bb269: call   0x55b280
  4bb26e: mov    cl,BYTE PTR [esp+0x13]
  4bb272: push   ebx
  4bb273: mov    BYTE PTR [esp+0x58],cl
  4bb277: lea    ecx,[esp+0x58]
  4bb27b: mov    DWORD PTR [ebp+0x3a0],eax
  4bb281: mov    DWORD PTR [ebp+0x3a4],ebx
  4bb287: call   0x4040a0
  4bb28c: mov    edi,0x6b3f70 // 0.0
  4bb291: or     ecx,0xffffffff // None
  4bb294: xor    eax,eax
  4bb296: repnz scas al,BYTE PTR es:[edi]
  4bb298: not    ecx
  4bb29a: dec    ecx
  4bb29b: push   ecx
  4bb29c: push   0x6b3f70 // 0.0
  4bb2a1: lea    ecx,[esp+0x5c]
  4bb2a5: call   0x4040f0
  4bb2aa: mov    dl,BYTE PTR [esp+0x13]
  4bb2ae: push   ebx
  4bb2af: lea    ecx,[esp+0x48]
  4bb2b3: mov    BYTE PTR [esp+0x308],0x8
  4bb2ba: 
  4bb2bb: mov    BYTE PTR [esp+0x48],dl
  4bb2bf: call   0x4040a0
  4bb2c4: mov    edi,0x697684 // Application
  4bb2c9: or     ecx,0xffffffff // None
  4bb2cc: xor    eax,eax
  4bb2ce: repnz scas al,BYTE PTR es:[edi]
  4bb2d0: not    ecx
  4bb2d2: dec    ecx
  4bb2d3: push   ecx
  4bb2d4: push   0x697684 // Application
  4bb2d9: lea    ecx,[esp+0x4c]
  4bb2dd: call   0x4040f0
  4bb2e2: mov    al,BYTE PTR [esp+0x13]
  4bb2e6: push   ebx
  4bb2e7: lea    ecx,[esp+0x38]
  4bb2eb: mov    BYTE PTR [esp+0x308],0x9
  4bb2f2: 
  4bb2f3: mov    BYTE PTR [esp+0x38],al
  4bb2f7: call   0x4040a0
  4bb2fc: mov    edi,0x6949e0 // ClockSpeed
  4bb301: or     ecx,0xffffffff // None
  4bb304: xor    eax,eax
  4bb306: repnz scas al,BYTE PTR es:[edi]
  4bb308: not    ecx
  4bb30a: dec    ecx
  4bb30b: push   ecx
  4bb30c: push   0x6949e0 // ClockSpeed
  4bb311: lea    ecx,[esp+0x3c]
  4bb315: call   0x4040f0
  4bb31a: lea    ecx,[esp+0x54]
  4bb31e: push   ebx
  4bb31f: push   ecx
  4bb320: lea    edx,[esp+0x4c]
  4bb324: push   0x697680 // 6.866362475191604e-44
  4bb329: lea    eax,[esp+0x40]
  4bb32d: push   edx
  4bb32e: push   eax
  4bb32f: lea    ecx,[ebp+0x3ac]
  4bb335: mov    BYTE PTR [esp+0x318],0xa
  4bb33c: 
  4bb33d: call   0x5acaf0
  4bb342: push   0x1
  4bb344: lea    ecx,[esp+0x38]
  4bb348: mov    BYTE PTR [esp+0x308],0xe
  4bb34f: 
  4bb350: call   0x4040a0
  4bb355: push   0x1
  4bb357: lea    ecx,[esp+0x48]
  4bb35b: mov    BYTE PTR [esp+0x308],0xd
  4bb362: 
  4bb363: call   0x4040a0
  4bb368: push   0x1
  4bb36a: lea    ecx,[esp+0x58]
  4bb36e: mov    BYTE PTR [esp+0x308],0xc
  4bb375: 
  4bb376: call   0x4040a0
  4bb37b: mov    cl,BYTE PTR [esp+0x13]
  4bb37f: mov    BYTE PTR [esp+0x14],cl
  4bb383: push   ebx
  4bb384: lea    ecx,[esp+0x18]
  4bb388: call   0x4040a0
  4bb38d: mov    edi,0x6b3f70 // 0.0
  4bb392: or     ecx,0xffffffff // None
  4bb395: xor    eax,eax
  4bb397: repnz scas al,BYTE PTR es:[edi]
  4bb399: not    ecx
  4bb39b: dec    ecx
  4bb39c: push   ecx
  4bb39d: push   0x6b3f70 // 0.0
  4bb3a2: lea    ecx,[esp+0x1c]
  4bb3a6: call   0x4040f0
  4bb3ab: mov    dl,BYTE PTR [esp+0x13]
  4bb3af: push   ebx
  4bb3b0: lea    ecx,[esp+0x28]
  4bb3b4: mov    BYTE PTR [esp+0x308],0xf
  4bb3bb: 
  4bb3bc: mov    BYTE PTR [esp+0x28],dl
  4bb3c0: call   0x4040a0
  4bb3c5: mov    edi,0x697684 // Application
  4bb3ca: or     ecx,0xffffffff // None
  4bb3cd: xor    eax,eax
  4bb3cf: repnz scas al,BYTE PTR es:[edi]
  4bb3d1: not    ecx
  4bb3d3: dec    ecx
  4bb3d4: push   ecx
  4bb3d5: push   0x697684 // Application
  4bb3da: lea    ecx,[esp+0x2c]
  4bb3de: call   0x4040f0
  4bb3e3: mov    al,BYTE PTR [esp+0x13]
  4bb3e7: push   ebx
  4bb3e8: lea    ecx,[esp+0x68]
  4bb3ec: mov    BYTE PTR [esp+0x308],0x10
  4bb3f3: 
  4bb3f4: mov    BYTE PTR [esp+0x68],al
  4bb3f8: call   0x4040a0
  4bb3fd: mov    edi,0x69766c // GeneralWorldScale
  4bb402: or     ecx,0xffffffff // None
  4bb405: xor    eax,eax
  4bb407: repnz scas al,BYTE PTR es:[edi]
  4bb409: not    ecx
  4bb40b: dec    ecx
  4bb40c: push   ecx
  4bb40d: push   0x69766c // GeneralWorldScale
  4bb412: lea    ecx,[esp+0x6c]
  4bb416: call   0x4040f0
  4bb41b: lea    ecx,[esp+0x14]
  4bb41f: push   ebx
  4bb420: push   ecx
  4bb421: lea    edx,[esp+0x2c]
  4bb425: push   0x42000000
  4bb42a: lea    eax,[esp+0x70]
  4bb42e: push   edx
  4bb42f: push   eax
  4bb430: lea    ecx,[ebp+0x418]
  4bb436: mov    BYTE PTR [esp+0x318],0x11
  4bb43d: 
  4bb43e: call   0x5ac8b0
  4bb443: push   0x1
  4bb445: lea    ecx,[esp+0x68]
  4bb449: mov    BYTE PTR [esp+0x308],0x15
  4bb450: 
  4bb451: call   0x4040a0
  4bb456: push   0x1
  4bb458: lea    ecx,[esp+0x28]
  4bb45c: mov    BYTE PTR [esp+0x308],0x14
  4bb463: 
  4bb464: call   0x4040a0
  4bb469: push   0x1
  4bb46b: lea    ecx,[esp+0x18]
  4bb46f: mov    BYTE PTR [esp+0x308],0x13
  4bb476: 
  4bb477: call   0x4040a0
  4bb47c: mov    cl,BYTE PTR [esp+0x13]
  4bb480: push   ebx
  4bb481: mov    BYTE PTR [esp+0x48],cl
  4bb485: lea    ecx,[esp+0x48]
  4bb489: call   0x4040a0
  4bb48e: mov    edi,0x693a14 // 1.0143991175456565e-38
  4bb493: or     ecx,0xffffffff // None
  4bb496: xor    eax,eax
  4bb498: repnz scas al,BYTE PTR es:[edi]
  4bb49a: not    ecx
  4bb49c: dec    ecx
  4bb49d: push   ecx
  4bb49e: push   0x693a14 // 1.0143991175456565e-38
  4bb4a3: lea    ecx,[esp+0x4c]
  4bb4a7: call   0x4040f0
  4bb4ac: mov    dl,BYTE PTR [esp+0x13]
  4bb4b0: push   ebx
  4bb4b1: lea    ecx,[esp+0x38]
  4bb4b5: mov    BYTE PTR [esp+0x308],0x16
  4bb4bc: 
  4bb4bd: mov    BYTE PTR [esp+0x38],dl
  4bb4c1: call   0x4040a0
  4bb4c6: mov    edi,0x697660 // IsLowEndPC
  4bb4cb: or     ecx,0xffffffff // None
  4bb4ce: xor    eax,eax
  4bb4d0: repnz scas al,BYTE PTR es:[edi]
  4bb4d2: not    ecx
  4bb4d4: dec    ecx
  4bb4d5: push   ecx
  4bb4d6: push   0x697660 // IsLowEndPC
  4bb4db: lea    ecx,[esp+0x3c]
  4bb4df: call   0x4040f0
  4bb4e4: lea    eax,[esp+0x7c]
  4bb4e8: mov    BYTE PTR [esp+0x304],0x17
  4bb4ef: 
  4bb4f0: push   eax
  4bb4f1: call   0x436f90
  4bb4f6: add    esp,0x4
  4bb4f9: push   0x0
  4bb4fb: push   eax
  4bb4fc: lea    ecx,[esp+0x4c]
  4bb500: lea    ebx,[ebp+0x484]
  4bb506: push   0x0
  4bb508: lea    edx,[esp+0x40]
  4bb50c: push   ecx
  4bb50d: push   edx
  4bb50e: mov    ecx,ebx
  4bb510: mov    BYTE PTR [esp+0x318],0x18
  4bb517: 
  4bb518: call   0x5ac9d0
  4bb51d: push   0x1
  4bb51f: lea    ecx,[esp+0x80]
  4bb526: mov    BYTE PTR [esp+0x308],0x1c
  4bb52d: 
  4bb52e: call   0x4040a0
  4bb533: push   0x1
  4bb535: lea    ecx,[esp+0x38]
  4bb539: mov    BYTE PTR [esp+0x308],0x1b
  4bb540: 
  4bb541: call   0x4040a0
  4bb546: push   0x1
  4bb548: lea    ecx,[esp+0x48]
  4bb54c: mov    BYTE PTR [esp+0x308],0x1a
  4bb553: 
  4bb554: call   0x4040a0
  4bb559: mov    al,BYTE PTR [esp+0x13]
  4bb55d: push   0x0
  4bb55f: lea    ecx,[esp+0x28]
  4bb563: mov    BYTE PTR [esp+0x28],al
  4bb567: call   0x4040a0
  4bb56c: mov    edi,0x6b3f70 // 0.0
  4bb571: or     ecx,0xffffffff // None
  4bb574: xor    eax,eax
  4bb576: repnz scas al,BYTE PTR es:[edi]
  4bb578: not    ecx
  4bb57a: dec    ecx
  4bb57b: push   ecx
  4bb57c: push   0x6b3f70 // 0.0
  4bb581: lea    ecx,[esp+0x2c]
  4bb585: call   0x4040f0
  4bb58a: mov    cl,BYTE PTR [esp+0x13]
  4bb58e: mov    BYTE PTR [esp+0x304],0x1d
  4bb595: 
  4bb596: mov    BYTE PTR [esp+0x64],cl
  4bb59a: push   0x0
  4bb59c: lea    ecx,[esp+0x68]
  4bb5a0: call   0x4040a0
  4bb5a5: mov    edi,0x697684 // Application
  4bb5aa: or     ecx,0xffffffff // None
  4bb5ad: xor    eax,eax
  4bb5af: repnz scas al,BYTE PTR es:[edi]
  4bb5b1: not    ecx
  4bb5b3: dec    ecx
  4bb5b4: push   ecx
  4bb5b5: push   0x697684 // Application
  4bb5ba: lea    ecx,[esp+0x6c]
  4bb5be: call   0x4040f0
  4bb5c3: mov    dl,BYTE PTR [esp+0x13]
  4bb5c7: push   0x0
  4bb5c9: lea    ecx,[esp+0x58]
  4bb5cd: mov    BYTE PTR [esp+0x308],0x1e
  4bb5d4: 
  4bb5d5: mov    BYTE PTR [esp+0x58],dl
  4bb5d9: call   0x4040a0
  4bb5de: mov    edi,0x697650 // RenderAIInfo
  4bb5e3: or     ecx,0xffffffff // None
  4bb5e6: xor    eax,eax
  4bb5e8: repnz scas al,BYTE PTR es:[edi]
  4bb5ea: not    ecx
  4bb5ec: dec    ecx
  4bb5ed: push   ecx
  4bb5ee: push   0x697650 // RenderAIInfo
  4bb5f3: lea    ecx,[esp+0x5c]
  4bb5f7: call   0x4040f0
  4bb5fc: lea    eax,[esp+0x24]
  4bb600: push   0x0
  4bb602: push   eax
  4bb603: lea    ecx,[esp+0x6c]
  4bb607: push   0x0
  4bb609: lea    edx,[esp+0x60]
  4bb60d: push   ecx
  4bb60e: push   edx
  4bb60f: lea    ecx,[ebp+0x4f0]
  4bb615: mov    BYTE PTR [esp+0x318],0x1f
  4bb61c: 
  4bb61d: call   0x5ac9d0
  4bb622: push   0x1
  4bb624: lea    ecx,[esp+0x58]
  4bb628: mov    BYTE PTR [esp+0x308],0x23
  4bb62f: 
  4bb630: call   0x4040a0
  4bb635: push   0x1
  4bb637: lea    ecx,[esp+0x68]
  4bb63b: mov    BYTE PTR [esp+0x308],0x22
  4bb642: 
  4bb643: call   0x4040a0
  4bb648: push   0x1
  4bb64a: lea    ecx,[esp+0x28]
  4bb64e: mov    BYTE PTR [esp+0x308],0x21
  4bb655: 
  4bb656: call   0x4040a0
  4bb65b: mov    al,BYTE PTR [esp+0x13]
  4bb65f: push   0x0
  4bb661: lea    ecx,[esp+0x18]
  4bb665: mov    BYTE PTR [esp+0x18],al
  4bb669: call   0x4040a0
  4bb66e: mov    edi,0x6b3f70 // 0.0
  4bb673: or     ecx,0xffffffff // None
  4bb676: xor    eax,eax
  4bb678: repnz scas al,BYTE PTR es:[edi]
  4bb67a: not    ecx
  4bb67c: dec    ecx
  4bb67d: push   ecx
  4bb67e: push   0x6b3f70 // 0.0
  4bb683: lea    ecx,[esp+0x1c]
  4bb687: call   0x4040f0
  4bb68c: mov    cl,BYTE PTR [esp+0x13]
  4bb690: push   0x0
  4bb692: mov    BYTE PTR [esp+0x48],cl
  4bb696: lea    ecx,[esp+0x48]
  4bb69a: mov    BYTE PTR [esp+0x308],0x24
  4bb6a1: 
  4bb6a2: call   0x4040a0
  4bb6a7: or     ecx,0xffffffff // None
  4bb6aa: mov    edi,0x697684 // Application
  4bb6af: xor    eax,eax
  4bb6b1: repnz scas al,BYTE PTR es:[edi]
  4bb6b3: not    ecx
  4bb6b5: dec    ecx
  4bb6b6: push   ecx
  4bb6b7: push   0x697684 // Application
  4bb6bc: lea    ecx,[esp+0x4c]
  4bb6c0: call   0x4040f0
  4bb6c5: mov    dl,BYTE PTR [esp+0x13]
  4bb6c9: push   0x0
  4bb6cb: lea    ecx,[esp+0x38]
  4bb6cf: mov    BYTE PTR [esp+0x308],0x25
  4bb6d6: 
  4bb6d7: mov    BYTE PTR [esp+0x38],dl
  4bb6db: call   0x4040a0
  4bb6e0: mov    edi,0x69763c // RenderBoundingBoxes
  4bb6e5: or     ecx,0xffffffff // None
  4bb6e8: xor    eax,eax
  4bb6ea: repnz scas al,BYTE PTR es:[edi]
  4bb6ec: not    ecx
  4bb6ee: dec    ecx
  4bb6ef: push   ecx
  4bb6f0: push   0x69763c // RenderBoundingBoxes
  4bb6f5: lea    ecx,[esp+0x3c]
  4bb6f9: call   0x4040f0
  4bb6fe: lea    eax,[esp+0x14]
  4bb702: push   0x0
  4bb704: push   eax
  4bb705: lea    ecx,[esp+0x4c]
  4bb709: push   0x0
  4bb70b: lea    edx,[esp+0x40]
  4bb70f: push   ecx
  4bb710: push   edx
  4bb711: lea    ecx,[ebp+0x55c]
  4bb717: mov    BYTE PTR [esp+0x318],0x26
  4bb71e: 
  4bb71f: call   0x5ac9d0
  4bb724: push   0x1
  4bb726: lea    ecx,[esp+0x38]
  4bb72a: mov    BYTE PTR [esp+0x308],0x2a
  4bb731: 
  4bb732: call   0x4040a0
  4bb737: push   0x1
  4bb739: lea    ecx,[esp+0x48]
  4bb73d: mov    BYTE PTR [esp+0x308],0x29
  4bb744: 
  4bb745: call   0x4040a0
  4bb74a: push   0x1
  4bb74c: lea    ecx,[esp+0x18]
  4bb750: mov    BYTE PTR [esp+0x308],0x28
  4bb757: 
  4bb758: call   0x4040a0
  4bb75d: mov    al,BYTE PTR [esp+0x13]
  4bb761: push   0x0
  4bb763: lea    ecx,[esp+0x28]
  4bb767: mov    BYTE PTR [esp+0x28],al
  4bb76b: call   0x4040a0
  4bb770: mov    edi,0x6b3f70 // 0.0
  4bb775: or     ecx,0xffffffff // None
  4bb778: xor    eax,eax
  4bb77a: repnz scas al,BYTE PTR es:[edi]
  4bb77c: not    ecx
  4bb77e: dec    ecx
  4bb77f: push   ecx
  4bb780: push   0x6b3f70 // 0.0
  4bb785: lea    ecx,[esp+0x2c]
  4bb789: call   0x4040f0
  4bb78e: mov    cl,BYTE PTR [esp+0x13]
  4bb792: push   0x0
  4bb794: mov    BYTE PTR [esp+0x68],cl
  4bb798: lea    ecx,[esp+0x68]
  4bb79c: mov    BYTE PTR [esp+0x308],0x2b
  4bb7a3: 
  4bb7a4: call   0x4040a0
  4bb7a9: mov    edi,0x697684 // Application
  4bb7ae: or     ecx,0xffffffff // None
  4bb7b1: xor    eax,eax
  4bb7b3: repnz scas al,BYTE PTR es:[edi]
  4bb7b5: not    ecx
  4bb7b7: dec    ecx
  4bb7b8: push   ecx
  4bb7b9: push   0x697684 // Application
  4bb7be: lea    ecx,[esp+0x6c]
  4bb7c2: call   0x4040f0
  4bb7c7: mov    dl,BYTE PTR [esp+0x13]
  4bb7cb: push   0x0
  4bb7cd: lea    ecx,[esp+0x58]
  4bb7d1: mov    BYTE PTR [esp+0x308],0x2c
  4bb7d8: 
  4bb7d9: mov    BYTE PTR [esp+0x58],dl
  4bb7dd: call   0x4040a0
  4bb7e2: mov    edi,0x697634 // Console
  4bb7e7: or     ecx,0xffffffff // None
  4bb7ea: xor    eax,eax
  4bb7ec: repnz scas al,BYTE PTR es:[edi]
  4bb7ee: not    ecx
  4bb7f0: dec    ecx
  4bb7f1: push   ecx
  4bb7f2: push   0x697634 // Console
  4bb7f7: lea    ecx,[esp+0x5c]
  4bb7fb: call   0x4040f0
  4bb800: lea    eax,[esp+0x24]
  4bb804: push   0x0
  4bb806: push   eax
  4bb807: lea    ecx,[esp+0x6c]
  4bb80b: push   0x0
  4bb80d: lea    edx,[esp+0x60]
  4bb811: push   ecx
  4bb812: push   edx
  4bb813: lea    ecx,[ebp+0x5c8]
  4bb819: mov    BYTE PTR [esp+0x318],0x2d
  4bb820: 
  4bb821: call   0x5ac9d0
  4bb826: push   0x1
  4bb828: lea    ecx,[esp+0x58]
  4bb82c: mov    BYTE PTR [esp+0x308],0x31
  4bb833: 
  4bb834: call   0x4040a0
  4bb839: push   0x1
  4bb83b: lea    ecx,[esp+0x68]
  4bb83f: mov    BYTE PTR [esp+0x308],0x30
  4bb846: 
  4bb847: call   0x4040a0
  4bb84c: push   0x1
  4bb84e: lea    ecx,[esp+0x28]
  4bb852: mov    BYTE PTR [esp+0x308],0x2f
  4bb859: 
  4bb85a: call   0x4040a0
  4bb85f: mov    al,BYTE PTR [esp+0x13]
  4bb863: push   0x0
  4bb865: lea    ecx,[esp+0x80]
  4bb86c: mov    BYTE PTR [esp+0x80],al
  4bb873: call   0x4040a0
  4bb878: mov    edi,0x6b3f70 // 0.0
  4bb87d: or     ecx,0xffffffff // None
  4bb880: xor    eax,eax
  4bb882: repnz scas al,BYTE PTR es:[edi]
  4bb884: not    ecx
  4bb886: dec    ecx
  4bb887: push   ecx
  4bb888: push   0x6b3f70 // 0.0
  4bb88d: lea    ecx,[esp+0x84]
  4bb894: call   0x4040f0
  4bb899: mov    cl,BYTE PTR [esp+0x13]
  4bb89d: push   0x0
  4bb89f: mov    BYTE PTR [esp+0xa0],cl
  4bb8a6: lea    ecx,[esp+0xa0]
  4bb8ad: mov    BYTE PTR [esp+0x308],0x32
  4bb8b4: 
  4bb8b5: call   0x4040a0
  4bb8ba: mov    edi,0x697684 // Application
  4bb8bf: or     ecx,0xffffffff // None
  4bb8c2: xor    eax,eax
  4bb8c4: repnz scas al,BYTE PTR es:[edi]
  4bb8c6: not    ecx
  4bb8c8: dec    ecx
  4bb8c9: push   ecx
  4bb8ca: push   0x697684 // Application
  4bb8cf: lea    ecx,[esp+0xa4]
  4bb8d6: call   0x4040f0
  4bb8db: mov    dl,BYTE PTR [esp+0x13]
  4bb8df: push   0x0
  4bb8e1: lea    ecx,[esp+0x90]
  4bb8e8: mov    BYTE PTR [esp+0x308],0x33
  4bb8ef: 
  4bb8f0: mov    BYTE PTR [esp+0x90],dl
  4bb8f7: call   0x4040a0
  4bb8fc: mov    edi,0x697620 // LastFileNameUsed
  4bb901: or     ecx,0xffffffff // None
  4bb904: xor    eax,eax
  4bb906: repnz scas al,BYTE PTR es:[edi]
  4bb908: not    ecx
  4bb90a: dec    ecx
  4bb90b: push   ecx
  4bb90c: push   0x697620 // LastFileNameUsed
  4bb911: lea    ecx,[esp+0x94]
  4bb918: call   0x4040f0
  4bb91d: lea    eax,[esp+0x7c]
  4bb921: push   0x0
  4bb923: push   eax
  4bb924: lea    ecx,[esp+0xa4]
  4bb92b: push   0x6b3f70 // 0.0
  4bb930: lea    edx,[esp+0x98]
  4bb937: push   ecx
  4bb938: push   edx
  4bb939: lea    ecx,[ebp+0x634]
  4bb93f: mov    BYTE PTR [esp+0x318],0x34
  4bb946: 
  4bb947: call   0x5acaf0
  4bb94c: push   0x1
  4bb94e: lea    ecx,[esp+0x90]
  4bb955: mov    BYTE PTR [esp+0x308],0x38
  4bb95c: 
  4bb95d: call   0x4040a0
  4bb962: push   0x1
  4bb964: lea    ecx,[esp+0xa0]
  4bb96b: mov    BYTE PTR [esp+0x308],0x37
  4bb972: 
  4bb973: call   0x4040a0
  4bb978: push   0x1
  4bb97a: lea    ecx,[esp+0x80]
  4bb981: mov    BYTE PTR [esp+0x308],0x36
  4bb988: 
  4bb989: call   0x4040a0
  4bb98e: push   0x3d
  4bb990: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bb995: lea    ecx,[esp+0x80]
  4bb99c: mov    DWORD PTR [ebp+0x0],0x64ee04 // 6.956471571641547e-39
  4bb9a3: call   0x5ae5f0
  4bb9a8: mov    eax,ds:0x6b915c // None
  4bb9ad: mov    BYTE PTR [esp+0x304],0x39
  4bb9b4: 
  4bb9b5: test   eax,eax
  4bb9b7: je     0x4bba50
  4bb9bd: mov    al,BYTE PTR [esp+0x13]
  4bb9c1: push   0x0
  4bb9c3: lea    ecx,[esp+0x18]
  4bb9c7: mov    BYTE PTR [esp+0x18],al
  4bb9cb: call   0x4040a0
  4bb9d0: mov    edi,0x6b3f70 // 0.0
  4bb9d5: or     ecx,0xffffffff // None
  4bb9d8: xor    eax,eax
  4bb9da: push   0x1
  4bb9dc: repnz scas al,BYTE PTR es:[edi]
  4bb9de: not    ecx
  4bb9e0: dec    ecx
  4bb9e1: mov    esi,ecx
  4bb9e3: lea    ecx,[esp+0x18]
  4bb9e7: push   esi
  4bb9e8: mov    DWORD PTR [esp+0x7c],esi
  4bb9ec: call   0x401940
  4bb9f1: test   al,al
  4bb9f3: je     0x4bba1a
  4bb9f5: mov    edi,DWORD PTR [esp+0x18]
  4bb9f9: mov    ecx,esi
  4bb9fb: mov    edx,ecx
  4bb9fd: mov    esi,0x6b3f70 // 0.0
  4bba02: shr    ecx,0x2
  4bba05: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bba07: mov    ecx,edx
  4bba09: mov    eax,edx
  4bba0b: and    ecx,0x3
  4bba0e: push   eax
  4bba0f: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bba11: lea    ecx,[esp+0x18]
  4bba15: call   0x404190
  4bba1a: lea    ecx,[esp+0x14]
  4bba1e: mov    BYTE PTR [esp+0x304],0x3a
  4bba25: 
  4bba26: push   ecx
  4bba27: push   0x3f
  4bba29: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bba2e: push   0x6975e0 // m_Instance==0
  4bba33: call   0x5a07f0
  4bba38: call   eax
  4bba3a: add    esp,0x10
  4bba3d: lea    ecx,[esp+0x14]
  4bba41: mov    BYTE PTR [esp+0x304],0x39
  4bba48: 
  4bba49: push   0x1
  4bba4b: call   0x4040a0
  4bba50: push   0x1
  4bba52: mov    ecx,0x40
  4bba57: xor    eax,eax
  4bba59: lea    edi,[esp+0x200]
  4bba60: push   0x690818 // 3.5925088729895335e-41
  4bba65: lea    edx,[esp+0x204]
  4bba6c: push   0xff
  4bba71: push   edx
  4bba72: rep stos DWORD PTR es:[edi],eax
  4bba74: mov    DWORD PTR ds:0x6b915c,ebp // None
  4bba7a: call   0x60af1b
  4bba7f: add    esp,0x10
  4bba82: lea    eax,[esp+0x1fc]
  4bba89: mov    ecx,ebx
  4bba8b: push   eax
  4bba8c: call   0x5acdb0
  4bba91: mov    cl,BYTE PTR [esp+0x13]
  4bba95: push   0x0
  4bba97: mov    BYTE PTR [esp+0x28],cl
  4bba9b: lea    ecx,[esp+0x28]
  4bba9f: call   0x4040a0
  4bbaa4: mov    edi,0x6975d8 // Display
  4bbaa9: or     ecx,0xffffffff // None
  4bbaac: xor    eax,eax
  4bbaae: push   0x1
  4bbab0: repnz scas al,BYTE PTR es:[edi]
  4bbab2: not    ecx
  4bbab4: dec    ecx
  4bbab5: mov    ebx,ecx
  4bbab7: lea    ecx,[esp+0x28]
  4bbabb: push   ebx
  4bbabc: call   0x401940
  4bbac1: test   al,al
  4bbac3: je     0x4bbae8
  4bbac5: mov    edi,DWORD PTR [esp+0x28]
  4bbac9: mov    ecx,ebx
  4bbacb: mov    edx,ecx
  4bbacd: mov    esi,0x6975d8 // Display
  4bbad2: shr    ecx,0x2
  4bbad5: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbad7: mov    ecx,edx
  4bbad9: push   ebx
  4bbada: and    ecx,0x3
  4bbadd: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbadf: lea    ecx,[esp+0x28]
  4bbae3: call   0x404190
  4bbae8: mov    al,BYTE PTR [esp+0x13]
  4bbaec: push   0x0
  4bbaee: lea    ecx,[esp+0x18]
  4bbaf2: mov    BYTE PTR [esp+0x308],0x3b
  4bbaf9: 
  4bbafa: mov    BYTE PTR [esp+0x18],al
  4bbafe: call   0x4040a0
  4bbb03: mov    edi,0x6975d0 // Gamma
  4bbb08: or     ecx,0xffffffff // None
  4bbb0b: xor    eax,eax
  4bbb0d: push   0x1
  4bbb0f: repnz scas al,BYTE PTR es:[edi]
  4bbb11: not    ecx
  4bbb13: dec    ecx
  4bbb14: mov    ebx,ecx
  4bbb16: lea    ecx,[esp+0x18]
  4bbb1a: push   ebx
  4bbb1b: call   0x401940
  4bbb20: test   al,al
  4bbb22: je     0x4bbb47
  4bbb24: mov    edi,DWORD PTR [esp+0x18]
  4bbb28: mov    ecx,ebx
  4bbb2a: mov    edx,ecx
  4bbb2c: mov    esi,0x6975d0 // Gamma
  4bbb31: shr    ecx,0x2
  4bbb34: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbb36: mov    ecx,edx
  4bbb38: push   ebx
  4bbb39: and    ecx,0x3
  4bbb3c: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbb3e: lea    ecx,[esp+0x18]
  4bbb42: call   0x404190
  4bbb47: lea    eax,[esp+0x34]
  4bbb4b: mov    bl,0x3c
  4bbb4d: push   eax
  4bbb4e: mov    BYTE PTR [esp+0x308],bl
  4bbb55: call   0x43b0a0
  4bbb5a: add    esp,0x4
  4bbb5d: push   eax
  4bbb5e: push   0x40400000
  4bbb63: push   0x0
  4bbb65: lea    ecx,[esp+0x30]
  4bbb69: push   0x3f800000
  4bbb6e: lea    edx,[esp+0x24]
  4bbb72: push   ecx
  4bbb73: push   edx
  4bbb74: lea    ecx,[esp+0x1a0]
  4bbb7b: mov    BYTE PTR [esp+0x31c],0x3d
  4bbb82: 
  4bbb83: call   0x5a3d10
  4bbb88: mov    esi,eax
  4bbb8a: fld    DWORD PTR [esi+0x60]
  4bbb8d: fcomp  DWORD PTR ds:0x64a450 // 0.0
  4bbb93: mov    BYTE PTR [esp+0x304],0x3e
  4bbb9a: 
  4bbb9b: fnstsw ax
  4bbb9d: test   ah,0x40
  4bbba0: je     0x4bbbb8
  4bbba2: lea    eax,[esp+0x13]
  4bbba6: lea    ecx,[esi+0x14]
  4bbba9: push   eax
  4bbbaa: push   ecx
  4bbbab: call   0x5ad390
  4bbbb0: fst    DWORD PTR [esi+0x60]
  4bbbb3: add    esp,0x8
  4bbbb6: jmp    0x4bbbbb
  4bbbb8: fld    DWORD PTR [esi+0x60]
  4bbbbb: fstp   DWORD PTR [ebp+0x38]
  4bbbbe: lea    ecx,[esp+0x188]
  4bbbc5: mov    BYTE PTR [esp+0x304],0x3d
  4bbbcc: 
  4bbbcd: call   0x5a3ce0
  4bbbd2: push   0x1
  4bbbd4: lea    ecx,[esp+0x38]
  4bbbd8: mov    BYTE PTR [esp+0x308],bl
  4bbbdf: call   0x4040a0
  4bbbe4: push   0x1
  4bbbe6: lea    ecx,[esp+0x18]
  4bbbea: mov    BYTE PTR [esp+0x308],0x3b
  4bbbf1: 
  4bbbf2: call   0x4040a0
  4bbbf7: push   0x1
  4bbbf9: lea    ecx,[esp+0x28]
  4bbbfd: mov    BYTE PTR [esp+0x308],0x39
  4bbc04: 
  4bbc05: call   0x4040a0
  4bbc0a: mov    dl,BYTE PTR [esp+0x13]
  4bbc0e: push   0x0
  4bbc10: lea    ecx,[esp+0x68]
  4bbc14: mov    BYTE PTR [esp+0x68],dl
  4bbc18: call   0x4040a0
  4bbc1d: mov    edi,0x6b3f70 // 0.0
  4bbc22: or     ecx,0xffffffff // None
  4bbc25: xor    eax,eax
  4bbc27: push   0x1
  4bbc29: repnz scas al,BYTE PTR es:[edi]
  4bbc2b: not    ecx
  4bbc2d: dec    ecx
  4bbc2e: mov    ebx,ecx
  4bbc30: lea    ecx,[esp+0x68]
  4bbc34: push   ebx
  4bbc35: call   0x401940
  4bbc3a: test   al,al
  4bbc3c: je     0x4bbc61
  4bbc3e: mov    edi,DWORD PTR [esp+0x68]
  4bbc42: mov    ecx,ebx
  4bbc44: mov    eax,ecx
  4bbc46: mov    esi,0x6b3f70 // 0.0
  4bbc4b: shr    ecx,0x2
  4bbc4e: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbc50: mov    ecx,eax
  4bbc52: push   ebx
  4bbc53: and    ecx,0x3
  4bbc56: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbc58: lea    ecx,[esp+0x68]
  4bbc5c: call   0x404190
  4bbc61: mov    cl,BYTE PTR [esp+0x13]
  4bbc65: push   0x0
  4bbc67: mov    BYTE PTR [esp+0x18],cl
  4bbc6b: lea    ecx,[esp+0x18]
  4bbc6f: mov    BYTE PTR [esp+0x308],0x3f
  4bbc76: 
  4bbc77: call   0x4040a0
  4bbc7c: mov    edi,0x6975c0 // Windowed Mode
  4bbc81: or     ecx,0xffffffff // None
  4bbc84: xor    eax,eax
  4bbc86: push   0x1
  4bbc88: repnz scas al,BYTE PTR es:[edi]
  4bbc8a: not    ecx
  4bbc8c: dec    ecx
  4bbc8d: mov    ebx,ecx
  4bbc8f: lea    ecx,[esp+0x18]
  4bbc93: push   ebx
  4bbc94: call   0x401940
  4bbc99: test   al,al
  4bbc9b: je     0x4bbcc0
  4bbc9d: mov    edi,DWORD PTR [esp+0x18]
  4bbca1: mov    ecx,ebx
  4bbca3: mov    edx,ecx
  4bbca5: mov    esi,0x6975c0 // Windowed Mode
  4bbcaa: shr    ecx,0x2
  4bbcad: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbcaf: mov    ecx,edx
  4bbcb1: push   ebx
  4bbcb2: and    ecx,0x3
  4bbcb5: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbcb7: lea    ecx,[esp+0x18]
  4bbcbb: call   0x404190
  4bbcc0: mov    al,BYTE PTR [esp+0x13]
  4bbcc4: push   0x0
  4bbcc6: lea    ecx,[esp+0x28]
  4bbcca: mov    BYTE PTR [esp+0x308],0x40
  4bbcd1: 
  4bbcd2: mov    BYTE PTR [esp+0x28],al
  4bbcd6: call   0x4040a0
  4bbcdb: mov    edi,0x6975b8 // Width
  4bbce0: or     ecx,0xffffffff // None
  4bbce3: xor    eax,eax
  4bbce5: push   0x1
  4bbce7: repnz scas al,BYTE PTR es:[edi]
  4bbce9: not    ecx
  4bbceb: dec    ecx
  4bbcec: mov    ebx,ecx
  4bbcee: lea    ecx,[esp+0x28]
  4bbcf2: push   ebx
  4bbcf3: call   0x401940
  4bbcf8: test   al,al
  4bbcfa: je     0x4bbd1f
  4bbcfc: mov    edi,DWORD PTR [esp+0x28]
  4bbd00: mov    ecx,ebx
  4bbd02: mov    edx,ecx
  4bbd04: mov    esi,0x6975b8 // Width
  4bbd09: shr    ecx,0x2
  4bbd0c: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbd0e: mov    ecx,edx
  4bbd10: push   ebx
  4bbd11: and    ecx,0x3
  4bbd14: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbd16: lea    ecx,[esp+0x28]
  4bbd1a: call   0x404190
  4bbd1f: lea    eax,[esp+0x64]
  4bbd23: push   0x0
  4bbd25: push   eax
  4bbd26: lea    ecx,[esp+0x1c]
  4bbd2a: push   0x280
  4bbd2f: lea    edx,[esp+0x30]
  4bbd33: push   ecx
  4bbd34: push   edx
  4bbd35: lea    ecx,[esp+0x130]
  4bbd3c: mov    BYTE PTR [esp+0x318],0x41
  4bbd43: 
  4bbd44: call   0x5ac9d0
  4bbd49: push   0x1
  4bbd4b: lea    ecx,[esp+0x28]
  4bbd4f: mov    BYTE PTR [esp+0x308],0x45
  4bbd56: 
  4bbd57: call   0x4040a0
  4bbd5c: push   0x1
  4bbd5e: lea    ecx,[esp+0x18]
  4bbd62: mov    BYTE PTR [esp+0x308],0x44
  4bbd69: 
  4bbd6a: call   0x4040a0
  4bbd6f: push   0x1
  4bbd71: lea    ecx,[esp+0x68]
  4bbd75: mov    BYTE PTR [esp+0x308],0x43
  4bbd7c: 
  4bbd7d: call   0x4040a0
  4bbd82: mov    al,BYTE PTR [esp+0x13]
  4bbd86: push   0x0
  4bbd88: lea    ecx,[esp+0x38]
  4bbd8c: mov    BYTE PTR [esp+0x38],al
  4bbd90: call   0x4040a0
  4bbd95: mov    edi,0x6b3f70 // 0.0
  4bbd9a: or     ecx,0xffffffff // None
  4bbd9d: xor    eax,eax
  4bbd9f: push   0x1
  4bbda1: repnz scas al,BYTE PTR es:[edi]
  4bbda3: not    ecx
  4bbda5: dec    ecx
  4bbda6: mov    ebx,ecx
  4bbda8: lea    ecx,[esp+0x38]
  4bbdac: push   ebx
  4bbdad: call   0x401940
  4bbdb2: test   al,al
  4bbdb4: je     0x4bbdd9
  4bbdb6: mov    edi,DWORD PTR [esp+0x38]
  4bbdba: mov    ecx,ebx
  4bbdbc: mov    edx,ecx
  4bbdbe: mov    esi,0x6b3f70 // 0.0
  4bbdc3: shr    ecx,0x2
  4bbdc6: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbdc8: mov    ecx,edx
  4bbdca: push   ebx
  4bbdcb: and    ecx,0x3
  4bbdce: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbdd0: lea    ecx,[esp+0x38]
  4bbdd4: call   0x404190
  4bbdd9: mov    al,BYTE PTR [esp+0x13]
  4bbddd: push   0x0
  4bbddf: lea    ecx,[esp+0x48]
  4bbde3: mov    BYTE PTR [esp+0x308],0x46
  4bbdea: 
  4bbdeb: mov    BYTE PTR [esp+0x48],al
  4bbdef: call   0x4040a0
  4bbdf4: mov    edi,0x6975c0 // Windowed Mode
  4bbdf9: or     ecx,0xffffffff // None
  4bbdfc: xor    eax,eax
  4bbdfe: push   0x1
  4bbe00: repnz scas al,BYTE PTR es:[edi]
  4bbe02: not    ecx
  4bbe04: dec    ecx
  4bbe05: mov    ebx,ecx
  4bbe07: lea    ecx,[esp+0x48]
  4bbe0b: push   ebx
  4bbe0c: call   0x401940
  4bbe11: test   al,al
  4bbe13: je     0x4bbe38
  4bbe15: mov    edi,DWORD PTR [esp+0x48]
  4bbe19: mov    ecx,ebx
  4bbe1b: mov    edx,ecx
  4bbe1d: mov    esi,0x6975c0 // Windowed Mode
  4bbe22: shr    ecx,0x2
  4bbe25: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbe27: mov    ecx,edx
  4bbe29: push   ebx
  4bbe2a: and    ecx,0x3
  4bbe2d: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbe2f: lea    ecx,[esp+0x48]
  4bbe33: call   0x404190
  4bbe38: mov    al,BYTE PTR [esp+0x13]
  4bbe3c: push   0x0
  4bbe3e: lea    ecx,[esp+0x58]
  4bbe42: mov    BYTE PTR [esp+0x308],0x47
  4bbe49: 
  4bbe4a: mov    BYTE PTR [esp+0x58],al
  4bbe4e: call   0x4040a0
  4bbe53: mov    edi,0x6975b0 // Height
  4bbe58: or     ecx,0xffffffff // None
  4bbe5b: xor    eax,eax
  4bbe5d: push   0x1
  4bbe5f: repnz scas al,BYTE PTR es:[edi]
  4bbe61: not    ecx
  4bbe63: dec    ecx
  4bbe64: mov    ebx,ecx
  4bbe66: lea    ecx,[esp+0x58]
  4bbe6a: push   ebx
  4bbe6b: call   0x401940
  4bbe70: test   al,al
  4bbe72: je     0x4bbe97
  4bbe74: mov    edi,DWORD PTR [esp+0x58]
  4bbe78: mov    ecx,ebx
  4bbe7a: mov    edx,ecx
  4bbe7c: mov    esi,0x6975b0 // Height
  4bbe81: shr    ecx,0x2
  4bbe84: rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4bbe86: mov    ecx,edx
  4bbe88: push   ebx
  4bbe89: and    ecx,0x3
  4bbe8c: rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4bbe8e: lea    ecx,[esp+0x58]
  4bbe92: call   0x404190
  4bbe97: lea    eax,[esp+0x34]
  4bbe9b: push   0x0
  4bbe9d: push   eax
  4bbe9e: lea    ecx,[esp+0x4c]
  4bbea2: push   0x1e0
  4bbea7: lea    edx,[esp+0x60]
  4bbeab: push   ecx
  4bbeac: push   edx
  4bbead: lea    ecx,[esp+0xc4]
  4bbeb4: mov    BYTE PTR [esp+0x318],0x48
  4bbebb: 
  4bbebc: call   0x5ac9d0
  4bbec1: push   0x1
  4bbec3: lea    ecx,[esp+0x58]
  4bbec7: mov    BYTE PTR [esp+0x308],0x4c
  4bbece: 
  4bbecf: call   0x4040a0
  4bbed4: push   0x1
  4bbed6: lea    ecx,[esp+0x48]
  4bbeda: mov    BYTE PTR [esp+0x308],0x4b
  4bbee1: 
  4bbee2: call   0x4040a0
  4bbee7: mov    eax,DWORD PTR [esp+0x38]
  4bbeeb: test   eax,eax
  4bbeed: je     0x4bbf0c
  4bbeef: lea    ecx,[eax-0x1]
  4bbef2: mov    al,BYTE PTR [eax-0x1]
  4bbef5: test   al,al
  4bbef7: je     0x4bbf03
  4bbef9: cmp    al,0xff
  4bbefb: je     0x4bbf03
  4bbefd: dec    al
  4bbeff: mov    BYTE PTR [ecx],al
  4bbf01: jmp    0x4bbf0c
  4bbf03: push   ecx
  4bbf04: call   0x5fe5f0
  4bbf09: add    esp,0x4
  4bbf0c: mov    eax,DWORD PTR [esp+0x180]
  4bbf13: cmp    eax,0x80000000 // None
  4bbf18: jne    0x4bbf3a
  4bbf1a: mov    eax,DWORD PTR [esp+0x134]
  4bbf21: test   eax,eax
  4bbf23: jne    0x4bbf2a
  4bbf25: mov    eax,0x64a3b4 // 0.0
  4bbf2a: push   eax
  4bbf2b: call   0x60af10
  4bbf30: add    esp,0x4
  4bbf33: mov    DWORD PTR [esp+0x180],eax
  4bbf3a: mov    DWORD PTR [ebp+0x80],eax
  4bbf40: mov    eax,DWORD PTR [esp+0x114]
  4bbf47: cmp    eax,0x80000000 // None
  4bbf4c: jne    0x4bbf6e
  4bbf4e: mov    eax,DWORD PTR [esp+0xc8]
  4bbf55: test   eax,eax
  4bbf57: jne    0x4bbf5e
  4bbf59: mov    eax,0x64a3b4 // 0.0
  4bbf5e: push   eax
  4bbf5f: call   0x60af10
  4bbf64: add    esp,0x4
  4bbf67: mov    DWORD PTR [esp+0x114],eax
  4bbf6e: lea    ecx,[esp+0xb0]
  4bbf75: mov    DWORD PTR [ebp+0x84],eax
  4bbf7b: mov    BYTE PTR [esp+0x304],0x43
  4bbf82: 
  4bbf83: call   0x5acca0
  4bbf88: lea    ecx,[esp+0x11c]
  4bbf8f: mov    BYTE PTR [esp+0x304],0x39
  4bbf96: 
  4bbf97: call   0x5acca0
  4bbf9c: lea    ecx,[esp+0x78]
  4bbfa0: mov    BYTE PTR [esp+0x304],0x36
  4bbfa7: 
  4bbfa8: call   0x5ae770
  4bbfad: mov    ecx,DWORD PTR [esp+0x2fc]
  4bbfb4: pop    edi
  4bbfb5: mov    eax,ebp
  4bbfb7: pop    esi
  4bbfb8: pop    ebp
  4bbfb9: pop    ebx
  4bbfba: mov    DWORD PTR fs:0x0,ecx
  4bbfc1: add    esp,0x2f8
  4bbfc7: ret    0x4
  4bbfd0: push   esi
  4bbfd1: mov    esi,ecx
  4bbfd3: call   0x4bc1f0
  4bbfd8: test   BYTE PTR [esp+0x8],0x1
  4bbfdd: je     0x4bbfe8
  4bbfdf: push   esi
  4bbfe0: call   0x5fe5f0
  4bbfe5: add    esp,0x4
  4bbfe8: mov    eax,esi
  4bbfea: pop    esi
  4bbfeb: ret    0x4
  4bbff0: sub    esp,0x8
  4bbff3: push   ebx
  4bbff4: push   ebp
  4bbff5: push   edi
  4bbff6: mov    edi,ecx
  4bbff8: xor    ebx,ebx
  4bbffa: mov    DWORD PTR [esp+0xc],edi
  4bbffe: mov    eax,DWORD PTR [edi+0x8]
  4bc001: mov    ebp,DWORD PTR [edi+0x4]
  4bc004: cmp    ebp,eax
  4bc006: mov    DWORD PTR [esp+0x10],eax
  4bc00a: je     0x4bc06f
  4bc00c: push   esi
  4bc00d: lea    esi,[ebp+0x10]
  4bc010: mov    eax,DWORD PTR [esi]
  4bc012: cmp    eax,ebx
  4bc014: je     0x4bc058
  4bc016: lea    edi,[esi-0x4]
  4bc019: push   eax
  4bc01a: mov    ecx,edi
  4bc01c: call   0x43b090
  4bc021: cmp    BYTE PTR [eax],bl
  4bc023: je     0x4bc042
  4bc025: mov    eax,DWORD PTR [esi]
  4bc027: mov    ecx,edi
  4bc029: push   eax
  4bc02a: call   0x43b090
  4bc02f: cmp    BYTE PTR [eax],0xff
  4bc032: je     0x4bc042
  4bc034: mov    ecx,DWORD PTR [esi]
  4bc036: push   ecx
  4bc037: mov    ecx,edi
  4bc039: call   0x43b090
  4bc03e: dec    BYTE PTR [eax]
  4bc040: jmp    0x4bc054
  4bc042: mov    edx,DWORD PTR [esi+0x8]
  4bc045: mov    eax,DWORD PTR [esi]
  4bc047: add    edx,0x2
  4bc04a: dec    eax
  4bc04b: push   edx
  4bc04c: push   eax
  4bc04d: mov    ecx,edi
  4bc04f: call   0x548d30
  4bc054: mov    edi,DWORD PTR [esp+0x10]
  4bc058: mov    eax,DWORD PTR [esp+0x14]
  4bc05c: mov    DWORD PTR [esi],ebx
  4bc05e: mov    DWORD PTR [esi+0x4],ebx
  4bc061: mov    DWORD PTR [esi+0x8],ebx
  4bc064: add    ebp,0x40
  4bc067: add    esi,0x40
  4bc06a: cmp    ebp,eax
  4bc06c: jne    0x4bc010
  4bc06e: pop    esi
  4bc06f: mov    ecx,DWORD PTR [edi+0x4]
  4bc072: push   ecx
  4bc073: call   0x5fe5f0
  4bc078: add    esp,0x4
  4bc07b: mov    DWORD PTR [edi+0x4],ebx
  4bc07e: mov    DWORD PTR [edi+0x8],ebx
  4bc081: mov    DWORD PTR [edi+0xc],ebx
  4bc084: pop    edi
  4bc085: pop    ebp
  4bc086: pop    ebx
  4bc087: add    esp,0x8
  4bc08a: ret
  4bc090: mov    eax,fs:0x0
  4bc096: push   0xffffffff // None
  4bc098: push   0x62f748
  4bc09d: push   eax
  4bc09e: mov    DWORD PTR fs:0x0,esp
  4bc0a5: sub    esp,0x14
  4bc0a8: push   esi
  4bc0a9: mov    esi,ecx
  4bc0ab: mov    al,BYTE PTR [esi+0x45]
  4bc0ae: test   al,al
  4bc0b0: jne    0x4bc1d1
  4bc0b6: push   0x58
  4bc0b8: push   0x6975f0 // D:\Work\RCHorror\AdamSource\AdamApplication.cpp
  4bc0bd: lea    ecx,[esp+0xc]
  4bc0c1: call   0x5ae5f0
  4bc0c6: push   0x4c4110
  4bc0cb: mov    DWORD PTR [esp+0x24],0x0
  4bc0d2: 
  4bc0d3: mov    BYTE PTR [esi+0x45],0x1
  4bc0d7: call   0x5afdd0
  4bc0dc: mov    eax,ds:0x6c8de0 // None
  4bc0e1: add    esp,0x4
  4bc0e4: test   eax,eax
  4bc0e6: je     0x4bc12f
  4bc0e8: push   edi
  4bc0e9: call   0x516d70
  4bc0ee: mov    edi,eax
  4bc0f0: mov    eax,DWORD PTR [edi+0x64]
  4bc0f3: cmp    eax,0x80000000 // None
  4bc0f8: jne    0x4bc112
  4bc0fa: mov    eax,DWORD PTR [edi+0x18]
  4bc0fd: test   eax,eax
  4bc0ff: jne    0x4bc106
  4bc101: mov    eax,0x64a3b4 // 0.0
  4bc106: push   eax
  4bc107: call   0x60af10
  4bc10c: add    esp,0x4
  4bc10f: mov    DWORD PTR [edi+0x64],eax
  4bc112: test   eax,eax
  4bc114: pop    edi
  4bc115: je     0x4bc124
  4bc117: push   0x697690 // m_Engine.RemoveAllSubLevels()
  4bc11c: call   0x5afe30
  4bc121: add    esp,0x4
  4bc124: mov    ecx,DWORD PTR [esi+0x3a0]
  4bc12a: call   0x55d670
  4bc12f: mov    ecx,DWORD PTR [esi+0x3a4]
  4bc135: test   ecx,ecx
  4bc137: je     0x4bc149
  4bc139: mov    eax,DWORD PTR [ecx]
  4bc13b: push   0x1
  4bc13d: call   DWORD PTR [eax]
  4bc13f: mov    DWORD PTR [esi+0x3a4],0x0
  4bc146: 
  4bc149: mov    eax,ds:0x6c8de0 // None
  4bc14e: test   eax,eax
  4bc150: je     0x4bc161
  4bc152: mov    ecx,DWORD PTR [esi+0x3a0]
  4bc158: push   ecx
  4bc159: call   0x55b480
  4bc15e: add    esp,0x4
  4bc161: lea    edx,[esp+0x8]
  4bc165: push   edx
  4bc166: call   DWORD PTR ds:0x64a1bc // 3.735062965765297e-39
  4bc16c: push   eax
  4bc16d: call   DWORD PTR ds:0x64a1d0 // 3.735113412510013e-39
  4bc173: mov    eax,DWORD PTR [esi+0x58]
  4bc176: mov    edx,DWORD PTR [esp+0x14]
  4bc17a: push   0x104
  4bc17f: push   0xc8
  4bc184: mov    ecx,DWORD PTR [eax+0x54]
  4bc187: mov    eax,DWORD PTR [esp+0x14]
  4bc18b: add    eax,edx
  4bc18d: push   0x140
  4bc192: cdq
  4bc193: sub    eax,edx
  4bc195: mov    edx,DWORD PTR [esp+0x1c]
  4bc199: sar    eax,1
  4bc19b: sub    eax,0x64
  4bc19e: push   eax
  4bc19f: mov    eax,DWORD PTR [esp+0x18]
  4bc1a3: add    eax,edx
  4bc1a5: cdq
  4bc1a6: sub    eax,edx
  4bc1a8: sar    eax,1
  4bc1aa: sub    eax,0xa0
  4bc1af: push   eax
  4bc1b0: push   0x0
  4bc1b2: push   ecx
  4bc1b3: call   DWORD PTR ds:0x64a1cc // 3.7350909917345837e-39
  4bc1b9: mov    ecx,esi
  4bc1bb: call   0x4c4380
  4bc1c0: lea    ecx,[esp+0x4]
  4bc1c4: mov    DWORD PTR [esp+0x20],0xffffffff // None
  4bc1cb: 
  4bc1cc: call   0x5ae770
  4bc1d1: mov    ecx,DWORD PTR [esp+0x18]
  4bc1d5: pop    esi
  4bc1d6: mov    DWORD PTR fs:0x0,ecx
  4bc1dd: add    esp,0x20
  4bc1e0: ret
