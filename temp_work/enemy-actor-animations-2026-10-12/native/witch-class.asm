0041ffe0: and       eax, 0
0041ffe5: sub       esp, 8
0041ffe8: push      ebx
0041ffe9: mov       al, byte ptr [esp + 7]
0041ffed: push      ebp
0041ffee: push      esi
0041ffef: push      edi
0041fff0: xor       esi, esi
0041fff2: sub       esp, 0x10
0041fff5: mov       edi, 0x68f53c
0041fffa: mov       ebp, esp
0041fffc: or        ecx, 0xffffffff
0041ffff: mov       dword ptr [esp + 0x24], esp
00420003: mov       byte ptr [ebp], al
00420006: xor       eax, eax
00420008: mov       dword ptr [ebp + 4], esi
0042000b: mov       dword ptr [ebp + 8], esi
0042000e: mov       dword ptr [ebp + 0xc], esi
00420011: repne scasb al, byte ptr es:[edi]
00420013: not       ecx
00420015: dec       ecx
00420016: mov       ebx, ecx
00420018: cmp       ebx, -3
0042001b: jbe       0x420022
0042001d: call      0x5fe5fb
00420022: mov       ecx, dword ptr [ebp + 4]
00420025: cmp       ecx, esi
00420027: je        0x420047
00420029: mov       al, byte ptr [ecx - 1]
0042002c: test      al, al
0042002e: je        0x420047
00420030: cmp       al, 0xff
00420032: je        0x420047
00420034: cmp       ebx, esi
00420036: jne       0x42006b
00420038: dec       al
0042003a: push      esi
0042003b: mov       byte ptr [ecx - 1], al
0042003e: mov       ecx, ebp
00420040: call      0x4040a0
00420045: jmp       0x420097
00420047: cmp       ebx, esi
00420049: jne       0x420056
0042004b: push      1
0042004d: mov       ecx, ebp
0042004f: call      0x4040a0
00420054: jmp       0x420097
00420056: mov       eax, dword ptr [ebp + 0xc]
00420059: cmp       eax, 0x1f
0042005c: ja        0x420062
0042005e: cmp       eax, ebx
00420060: jae       0x420073
00420062: push      1
00420064: mov       ecx, ebp
00420066: call      0x4040a0
0042006b: push      ebx
0042006c: mov       ecx, ebp
0042006e: call      0x401a60
00420073: mov       edi, dword ptr [ebp + 4]
00420076: mov       ecx, ebx
00420078: mov       edx, ecx
0042007a: mov       esi, 0x68f53c
0042007f: shr       ecx, 2
00420082: rep movsd dword ptr es:[edi], dword ptr [esi]
00420084: mov       ecx, edx
00420086: and       ecx, 3
00420089: rep movsb byte ptr es:[edi], byte ptr [esi]
0042008b: mov       dword ptr [ebp + 8], ebx
0042008e: mov       ebp, dword ptr [ebp + 4]
00420091: add       ebp, ebx
00420093: mov       byte ptr [ebp], 0
00420097: mov       dword ptr [esp + 0x30], 0xffffffff
0042009f: call      0x492540
004200a4: push      eax
004200a5: mov       ecx, 0x6b50d0
004200aa: call      0x40c860
004200af: mov       ecx, dword ptr [esp + 0x18]
004200b3: pop       edi
004200b4: pop       esi
004200b5: pop       ebp
004200b6: mov       dword ptr fs:[0], ecx
004200bd: pop       ebx
004200be: add       esp, 0x14
004200c1: ret       
004200c2: nop       
004200c3: nop       
004200c4: nop       
004200c5: nop       
004200c6: nop       
004200c7: nop       
004200c8: nop       
004200c9: nop       
004200ca: nop       
004200cb: nop       
004200cc: nop       
004200cd: nop       
004200ce: nop       
004200cf: nop       
004200d0: push      0x4200e0
004200d5: call      0x60a57b
004200da: pop       ecx
004200db: ret       
004200dc: nop       
004200dd: nop       
004200de: nop       
004200df: nop       
004200e0: mov       cl, byte ptr [0x6b5120]
004200e6: mov       al, 4
004200e8: test      al, cl
004200ea: jne       0x4200fe
004200ec: or        cl, al
004200ee: mov       byte ptr [0x6b5120], cl
004200f4: mov       ecx, 0x6b50d0
004200f9: jmp       0x429cc0
004200fe: ret       
004200ff: nop       
00420100: call      0x420110
00420105: jmp       0x420210
0042010a: nop       
0042010b: nop       
0042010c: nop       
0042010d: nop       
0042010e: nop       
0042010f: nop       
00420110: push      -1
00420112: push      0x622018
00420117: mov       eax, dword ptr fs:[0]
0042011d: push      eax
0042011e: mov       dword ptr fs:[0], esp
00420125: sub       esp, 8
00420128: push      ebx
00420129: mov       al, byte ptr [esp + 7]
0042012d: push      ebp
0042012e: push      esi
0042012f: push      edi
00420130: xor       esi, esi
00420132: sub       esp, 0x10
00420135: mov       edi, 0x68f54c
0042013a: mov       ebp, esp
0042013c: or        ecx, 0xffffffff
0042013f: mov       dword ptr [esp + 0x24], esp
00420143: mov       byte ptr [ebp], al
00420146: xor       eax, eax
00420148: mov       dword ptr [ebp + 4], esi
0042014b: mov       dword ptr [ebp + 8], esi
0042014e: mov       dword ptr [ebp + 0xc], esi
00420151: repne scasb al, byte ptr es:[edi]
00420153: not       ecx
00420155: dec       ecx
00420156: mov       ebx, ecx
00420158: cmp       ebx, -3
0042015b: jbe       0x420162
0042015d: call      0x5fe5fb
00420162: mov       ecx, dword ptr [ebp + 4]
00420165: cmp       ecx, esi
00420167: je        0x420187
00420169: mov       al, byte ptr [ecx - 1]
0042016c: test      al, al
0042016e: je        0x420187
00420170: cmp       al, 0xff
00420172: je        0x420187
00420174: cmp       ebx, esi
00420176: jne       0x4201ab
00420178: dec       al
0042017a: push      esi
0042017b: mov       byte ptr [ecx - 1], al
0042017e: mov       ecx, ebp
00420180: call      0x4040a0
00420185: jmp       0x4201d7
00420187: cmp       ebx, esi
00420189: jne       0x420196
0042018b: push      1
0042018d: mov       ecx, ebp
0042018f: call      0x4040a0
00420194: jmp       0x4201d7
00420196: mov       eax, dword ptr [ebp + 0xc]
00420199: cmp       eax, 0x1f
0042019c: ja        0x4201a2
0042019e: cmp       eax, ebx
004201a0: jae       0x4201b3
004201a2: push      1
004201a4: mov       ecx, ebp
004201a6: call      0x4040a0
004201ab: push      ebx
004201ac: mov       ecx, ebp
004201ae: call      0x401a60
004201b3: mov       edi, dword ptr [ebp + 4]
004201b6: mov       ecx, ebx
004201b8: mov       edx, ecx
004201ba: mov       esi, 0x68f54c
004201bf: shr       ecx, 2
004201c2: rep movsd dword ptr es:[edi], dword ptr [esi]
004201c4: mov       ecx, edx
004201c6: and       ecx, 3
004201c9: rep movsb byte ptr es:[edi], byte ptr [esi]
004201cb: mov       dword ptr [ebp + 8], ebx
004201ce: mov       ebp, dword ptr [ebp + 4]
004201d1: add       ebp, ebx
004201d3: mov       byte ptr [ebp], 0
004201d7: mov       dword ptr [esp + 0x30], 0xffffffff
004201df: call      0x492540
004201e4: push      eax
004201e5: mov       ecx, 0x6b50a8
004201ea: call      0x40c860
004201ef: mov       ecx, dword ptr [esp + 0x18]
004201f3: pop       edi
004201f4: pop       esi
004201f5: pop       ebp
004201f6: mov       dword ptr fs:[0], ecx
004201fd: pop       ebx
004201fe: add       esp, 0x14
00420201: ret       
00420202: nop       
00420203: nop       
00420204: nop       
00420205: nop       
00420206: nop       
00420207: nop       
00420208: nop       
00420209: nop       
0042020a: nop       
0042020b: nop       
0042020c: nop       
0042020d: nop       
0042020e: nop       
0042020f: nop       
00420210: push      0x420220
00420215: call      0x60a57b
0042021a: pop       ecx
0042021b: ret       
0042021c: nop       
0042021d: nop       
0042021e: nop       
0042021f: nop       
00420220: mov       cl, byte ptr [0x6b5120]
00420226: mov       al, 8
00420228: test      al, cl
0042022a: jne       0x42023e
0042022c: or        cl, al
0042022e: mov       byte ptr [0x6b5120], cl
00420234: mov       ecx, 0x6b50a8
00420239: jmp       0x429cc0
0042023e: ret       
0042023f: nop       
00420240: push      -1
00420242: push      0x622040
00420247: mov       eax, dword ptr fs:[0]
0042024d: push      eax
0042024e: mov       dword ptr fs:[0], esp
00420255: sub       esp, 0x28
00420258: mov       al, byte ptr [esp + 0x3c]
0042025c: push      ebx
0042025d: push      ebp
0042025e: push      esi
0042025f: push      edi
00420260: mov       edi, dword ptr [0x64ba38]
00420266: mov       esi, ecx
00420268: mov       byte ptr [esp + 0x28], al
0042026c: xor       ebx, ebx
0042026e: or        ecx, 0xffffffff
00420271: xor       eax, eax
00420273: mov       dword ptr [esp + 0x10], edi
00420277: mov       dword ptr [esp + 0x2c], ebx
0042027b: mov       dword ptr [esp + 0x30], ebx
0042027f: mov       dword ptr [esp + 0x34], ebx
00420283: push      1
00420285: repne scasb al, byte ptr es:[edi]
00420287: not       ecx
00420289: dec       ecx
0042028a: mov       dword ptr [esp + 0x18], esi
0042028e: mov       ebp, ecx
00420290: lea       ecx, [esp + 0x2c]
00420294: push      ebp
00420295: call      0x401940
0042029a: test      al, al
0042029c: je        0x4202c4
0042029e: mov       esi, dword ptr [esp + 0x10]
004202a2: mov       edi, dword ptr [esp + 0x2c]
004202a6: mov       ecx, ebp
004202a8: push      ebp
004202a9: mov       edx, ecx
004202ab: shr       ecx, 2
004202ae: rep movsd dword ptr es:[edi], dword ptr [esi]
004202b0: mov       ecx, edx
004202b2: and       ecx, 3
004202b5: rep movsb byte ptr es:[edi], byte ptr [esi]
004202b7: lea       ecx, [esp + 0x2c]
004202bb: call      0x404190
004202c0: mov       esi, dword ptr [esp + 0x14]
004202c4: mov       al, byte ptr [esp + 0x4c]
004202c8: mov       edx, dword ptr [0x64ba34]
004202ce: mov       byte ptr [esp + 0x18], al
004202d2: mov       edi, edx
004202d4: or        ecx, 0xffffffff
004202d7: xor       eax, eax
004202d9: mov       dword ptr [esp + 0x1c], ebx
004202dd: mov       dword ptr [esp + 0x20], ebx
004202e1: mov       dword ptr [esp + 0x24], ebx
004202e5: mov       dword ptr [esp + 0x40], ebx
004202e9: repne scasb al, byte ptr es:[edi]
004202eb: not       ecx
004202ed: dec       ecx
004202ee: push      ecx
004202ef: push      edx
004202f0: lea       ecx, [esp + 0x20]
004202f4: call      0x4040f0
004202f9: mov       edx, dword ptr [esp + 0x4c]
004202fd: mov       eax, dword ptr [esp + 0x50]
00420301: lea       ecx, [esp + 0x28]
00420305: mov       byte ptr [esp + 0x40], 1
0042030a: push      ecx
0042030b: push      edx
0042030c: mov       edx, dword ptr [esp + 0x50]
00420310: lea       ecx, [esp + 0x20]
00420314: push      eax
00420315: push      ecx
00420316: push      edx
00420317: mov       ecx, esi
00420319: call      0x429e10
0042031e: mov       eax, dword ptr [esp + 0x1c]
00420322: cmp       eax, ebx
00420324: je        0x420343
00420326: lea       ecx, [eax - 1]
00420329: mov       al, byte ptr [eax - 1]
0042032c: cmp       al, bl
0042032e: je        0x42033a
00420330: cmp       al, 0xff
00420332: je        0x42033a
00420334: dec       al
00420336: mov       byte ptr [ecx], al
00420338: jmp       0x420343
0042033a: push      ecx
0042033b: call      0x5fe5f0
00420340: add       esp, 4
00420343: mov       eax, dword ptr [esp + 0x2c]
00420347: mov       dword ptr [esp + 0x1c], ebx
0042034b: cmp       eax, ebx
0042034d: mov       dword ptr [esp + 0x20], ebx
00420351: mov       dword ptr [esp + 0x24], ebx
00420355: je        0x420374
00420357: lea       ecx, [eax - 1]
0042035a: mov       al, byte ptr [eax - 1]
0042035d: cmp       al, bl
0042035f: je        0x42036b
00420361: cmp       al, 0xff
00420363: je        0x42036b
00420365: dec       al
00420367: mov       byte ptr [ecx], al
00420369: jmp       0x420374
0042036b: push      ecx
0042036c: call      0x5fe5f0
00420371: add       esp, 4
00420374: mov       ecx, dword ptr [esp + 0x38]
00420378: mov       dword ptr [esi], 0x64ba48
0042037e: mov       eax, esi
00420380: pop       edi
00420381: pop       esi
00420382: pop       ebp
00420383: pop       ebx
00420384: mov       dword ptr fs:[0], ecx
0042038b: add       esp, 0x34
0042038e: ret       0xc
00420391: nop       
00420392: nop       
00420393: nop       
00420394: nop       
00420395: nop       
00420396: nop       
00420397: nop       
00420398: nop       
00420399: nop       
0042039a: nop       
0042039b: nop       
0042039c: nop       
0042039d: nop       
0042039e: nop       
0042039f: nop       
004203a0: push      esi
004203a1: mov       esi, ecx
004203a3: call      0x4203c0
004203a8: test      byte ptr [esp + 8], 1
004203ad: je        0x4203b8
004203af: push      esi
004203b0: call      0x5fe5f0
004203b5: add       esp, 4
004203b8: mov       eax, esi
004203ba: pop       esi
004203bb: ret       4
004203be: nop       
004203bf: nop       
004203c0: push      -1
004203c2: push      0x62206e
004203c7: mov       eax, dword ptr fs:[0]
004203cd: push      eax
004203ce: mov       dword ptr fs:[0], esp
004203d5: push      ecx
004203d6: push      ebx
004203d7: push      esi
004203d8: push      edi
004203d9: mov       edi, ecx
004203db: mov       dword ptr [esp + 0xc], edi
004203df: mov       eax, dword ptr [edi + 0x1c0]
004203e5: lea       esi, [edi + 0x1a8]
004203eb: xor       ebx, ebx
004203ed: cmp       eax, ebx
004203ef: mov       dword ptr [esp + 0x18], ebx
004203f3: je        0x420412
004203f5: lea       ecx, [eax - 1]
004203f8: mov       al, byte ptr [eax - 1]
004203fb: cmp       al, bl
004203fd: je        0x420409
004203ff: cmp       al, 0xff
00420401: je        0x420409
00420403: dec       al
00420405: mov       byte ptr [ecx], al
00420407: jmp       0x420412
00420409: push      ecx
0042040a: call      0x5fe5f0
0042040f: add       esp, 4
00420412: mov       ecx, esi
00420414: mov       dword ptr [esi + 0x18], ebx
00420417: mov       dword ptr [esi + 0x1c], ebx
0042041a: mov       dword ptr [esi + 0x20], ebx
0042041d: call      0x5ab4d0
00420422: mov       ecx, dword ptr [edi + 0x1a4]
00420428: mov       dword ptr [esp + 0x18], 2
00420430: cmp       ecx, ebx
00420432: je        0x420449
00420434: mov       eax, dword ptr [ecx + 0x14]
00420437: dec       eax
00420438: mov       dword ptr [ecx + 0x14], eax
0042043b: jne       0x420443
0042043d: push      ebx
0042043e: call      0x5abfc0
00420443: mov       dword ptr [edi + 0x1a4], ebx
00420449: mov       eax, dword ptr [edi + 0x188]
0042044f: cmp       eax, ebx
00420451: je        0x420470
00420453: lea       ecx, [eax - 1]
00420456: mov       al, byte ptr [eax - 1]
00420459: cmp       al, bl
0042045b: je        0x420467
0042045d: cmp       al, 0xff
0042045f: je        0x420467
00420461: dec       al
00420463: mov       byte ptr [ecx], al
00420465: jmp       0x420470
00420467: push      ecx
00420468: call      0x5fe5f0
0042046d: add       esp, 4
00420470: mov       ecx, edi
00420472: mov       dword ptr [edi + 0x188], ebx
00420478: mov       dword ptr [edi + 0x18c], ebx
0042047e: mov       dword ptr [edi + 0x190], ebx
00420484: mov       dword ptr [esp + 0x18], 0xffffffff
0042048c: call      0x4228d0
00420491: mov       ecx, dword ptr [esp + 0x10]
00420495: pop       edi
00420496: pop       esi
00420497: pop       ebx
00420498: mov       dword ptr fs:[0], ecx
0042049f: add       esp, 0x10
004204a2: ret       
004204a3: nop       
004204a4: nop       
004204a5: nop       
004204a6: nop       
004204a7: nop       
004204a8: nop       
004204a9: nop       
004204aa: nop       
004204ab: nop       
004204ac: nop       
004204ad: nop       
004204ae: nop       
004204af: nop       
004204b0: push      -1
004204b2: push      0x62208b
004204b7: mov       eax, dword ptr fs:[0]
004204bd: push      eax
004204be: mov       dword ptr fs:[0], esp
004204c5: push      ecx
004204c6: push      esi
004204c7: mov       esi, ecx
004204c9: push      0x38
004204cb: call      0x60a0b5
004204d0: add       esp, 4
004204d3: mov       dword ptr [esp + 4], eax
004204d7: test      eax, eax
004204d9: mov       dword ptr [esp + 0x10], 0
004204e1: je        0x4204ed
004204e3: push      esi
004204e4: mov       ecx, eax
004204e6: call      0x40b1a0
004204eb: jmp       0x4204ef
004204ed: xor       eax, eax
004204ef: push      eax
004204f0: mov       ecx, esi
004204f2: mov       dword ptr [esp + 0x14], 0xffffffff
004204fa: call      0x423710
004204ff: mov       ecx, dword ptr [esp + 8]
00420503: pop       esi
00420504: mov       dword ptr fs:[0], ecx
0042050b: add       esp, 0x10
0042050e: ret       
0042050f: nop       
00420510: push      -1
00420512: push      0x6220a8
00420517: mov       eax, dword ptr fs:[0]
0042051d: push      eax
0042051e: mov       dword ptr fs:[0], esp
00420525: push      ecx
00420526: push      esi
00420527: push      edi
00420528: mov       edi, ecx
0042052a: mov       esi, dword ptr [esp + 0x1c]
0042052e: push      ecx
0042052f: mov       eax, esp
00420531: mov       dword ptr [esp + 0x18], 0
00420539: test      esi, esi
0042053b: mov       dword ptr [esp + 0xc], esp
0042053f: mov       dword ptr [eax], esi
00420541: je        0x420546
00420543: inc       dword ptr [esi + 0x14]
00420546: mov       ecx, edi
00420548: call      0x427ab0
0042054d: mov       al, byte ptr [edi + 0x7c]
00420550: mov       byte ptr [esp + 8], al
00420554: mov       ecx, dword ptr [esp + 8]
00420558: push      ecx
00420559: mov       ecx, edi
0042055b: call      0x422880
00420560: test      esi, esi
00420562: mov       dword ptr [esp + 0x14], 0xffffffff
0042056a: je        0x42057e
0042056c: mov       eax, dword ptr [esi + 0x14]
0042056f: dec       eax
00420570: mov       dword ptr [esi + 0x14], eax
00420573: jne       0x42057e
00420575: push      0
00420577: mov       ecx, esi
00420579: call      0x5abfc0
0042057e: mov       ecx, dword ptr [esp + 0xc]
00420582: pop       edi
00420583: mov       dword ptr fs:[0], ecx
0042058a: pop       esi
0042058b: add       esp, 0x10
0042058e: ret       4
00420591: nop       
00420592: nop       
00420593: nop       
00420594: nop       
00420595: nop       
00420596: nop       
00420597: nop       
00420598: nop       
00420599: nop       
0042059a: nop       
0042059b: nop       
0042059c: nop       
0042059d: nop       
0042059e: nop       
0042059f: nop       
004205a0: push      -1
004205a2: push      0x6220c8
004205a7: mov       eax, dword ptr fs:[0]
004205ad: push      eax
004205ae: mov       dword ptr fs:[0], esp
004205b5: push      ecx
004205b6: push      esi
004205b7: push      edi
004205b8: mov       edi, ecx
004205ba: mov       esi, dword ptr [esp + 0x1c]
004205be: push      ecx
004205bf: mov       eax, esp
004205c1: mov       dword ptr [esp + 0x18], 0
004205c9: test      esi, esi
004205cb: mov       dword ptr [esp + 0xc], esp
004205cf: mov       dword ptr [eax], esi
004205d1: je        0x4205d6
004205d3: inc       dword ptr [esi + 0x14]
004205d6: mov       ecx, edi
004205d8: call      0x427c90
004205dd: push      0
004205df: mov       ecx, edi
004205e1: call      0x422880
004205e6: test      esi, esi
004205e8: mov       dword ptr [esp + 0x14], 0xffffffff
004205f0: je        0x420604
004205f2: mov       eax, dword ptr [esi + 0x14]
004205f5: dec       eax
004205f6: mov       dword ptr [esi + 0x14], eax
004205f9: jne       0x420604
004205fb: push      0
004205fd: mov       ecx, esi
004205ff: call      0x5abfc0
00420604: mov       ecx, dword ptr [esp + 0xc]
00420608: pop       edi
00420609: mov       dword ptr fs:[0], ecx
00420610: pop       esi
00420611: add       esp, 0x10
00420614: ret       4
00420617: nop       
00420618: nop       
00420619: nop       
0042061a: nop       
0042061b: nop       
0042061c: nop       
0042061d: nop       
0042061e: nop       
0042061f: nop       
00420620: mov       eax, dword ptr [0x6b915c]
00420625: push      esi
00420626: test      eax, eax
00420628: push      edi
00420629: mov       esi, ecx
0042062b: jne       0x420632
0042062d: call      0x4bc480
00420632: mov       ecx, eax
00420634: call      0x40cf10
00420639: mov       ecx, 0x6b9950
0042063e: call      0x565870
00420643: mov       edi, dword ptr [esi + 0x178]
00420649: mov       dword ptr [esi + 0x168], eax
0042064f: cmp       edi, 2
00420652: jle       0x4206c0
00420654: fld       dword ptr [esp + 0xc]
00420658: call      0x60ab20
0042065d: mov       ecx, edi
0042065f: sub       ecx, eax
00420661: cmp       ecx, 2
00420664: jg        0x42066b
00420666: mov       ecx, 2
0042066b: cmp       ecx, 2
0042066e: mov       dword ptr [esi + 0x178], ecx
00420674: jne       0x42068e
00420676: push      0x6b9760
0042067b: mov       ecx, esi
0042067d: call      0x505400
00420682: mov       eax, dword ptr [esi]
00420684: mov       ecx, esi
00420686: call      dword ptr [eax + 0x60]
00420689: pop       edi
0042068a: pop       esi
0042068b: ret       0xc
0042068e: call      0x60a4a0
00420693: and       eax, 0x80000001
00420698: jns       0x42069f
0042069a: dec       eax
0042069b: or        eax, 0xfffffffe
0042069e: inc       eax
0042069f: jne       0x4206b4
004206a1: mov       ecx, esi
004206a3: call      0x424e90
004206a8: mov       edx, dword ptr [eax]
004206aa: mov       ecx, eax
004206ac: call      dword ptr [edx + 0x20]
004206af: pop       edi
004206b0: pop       esi
004206b1: ret       0xc
004206b4: mov       eax, dword ptr [esi]
004206b6: push      3
004206b8: mov       ecx, esi
004206ba: call      dword ptr [eax + 0xbc]
004206c0: pop       edi
004206c1: pop       esi
004206c2: ret       0xc
004206c5: nop       
004206c6: nop       
004206c7: nop       
004206c8: nop       
004206c9: nop       
004206ca: nop       
004206cb: nop       
004206cc: nop       
004206cd: nop       
004206ce: nop       
004206cf: nop       
004206d0: sub       esp, 0x24
004206d3: push      ebx
004206d4: mov       ebx, ecx
004206d6: push      esi
004206d7: push      edi
004206d8: mov       eax, dword ptr [ebx]
004206da: call      dword ptr [eax + 0x9c]
004206e0: mov       edx, dword ptr [ebx]
004206e2: lea       esi, [eax + 0x11c]
004206e8: mov       ecx, 6
004206ed: lea       edi, [esp + 0x18]
004206f1: rep movsd dword ptr es:[edi], dword ptr [esi]
004206f3: mov       ecx, ebx
004206f5: call      dword ptr [edx + 0x9c]
004206fb: fld       dword ptr [eax + 0x150]
00420701: fmul      dword ptr [0x64ba3c]
00420707: mov       eax, dword ptr [eax + 0x158]
0042070d: mov       edx, dword ptr [ebx]
0042070f: mov       dword ptr [esp + 0x14], eax
00420713: mov       ecx, ebx
00420715: fld       st(0)
00420717: fchs      
00420719: fstp      dword ptr [esp + 0x18]
0042071d: fstp      dword ptr [esp + 0x24]
00420721: fld       dword ptr [0x64ba40]
00420727: fmul      dword ptr [esp + 0x14]
0042072b: fstp      dword ptr [esp + 0x28]
0042072f: fld       dword ptr [0x64ba3c]
00420735: fmul      dword ptr [esp + 0x14]
00420739: fld       st(0)
0042073b: fchs      
0042073d: fstp      dword ptr [esp + 0x20]
00420741: fstp      dword ptr [esp + 0x2c]
00420745: call      dword ptr [edx + 0x9c]
0042074b: mov       edi, eax
0042074d: mov       ecx, 6
00420752: add       edi, 0x11c
00420758: lea       esi, [esp + 0x18]
0042075c: rep movsd dword ptr es:[edi], dword ptr [esi]
0042075e: pop       edi
0042075f: pop       esi
00420760: pop       ebx
00420761: add       esp, 0x24
00420764: ret       
00420765: nop       
00420766: nop       
00420767: nop       
00420768: nop       
00420769: nop       
0042076a: nop       
0042076b: nop       
0042076c: nop       
0042076d: nop       
0042076e: nop       
0042076f: nop       
00420770: push      -1
00420772: push      0x6220e8
00420777: mov       eax, dword ptr fs:[0]
0042077d: push      eax
0042077e: mov       dword ptr fs:[0], esp
00420785: sub       esp, 0x14
00420788: push      esi
00420789: mov       esi, ecx
0042078b: push      ecx
0042078c: mov       eax, esp
0042078e: mov       dword ptr [esp + 8], esp
00420792: push      eax
00420793: call      0x4237d0
00420798: mov       ecx, dword ptr [esp + 0x2c]
0042079c: sub       esp, 0xc
0042079f: mov       edx, esp
004207a1: mov       dword ptr [esp + 0x30], 0
004207a9: mov       eax, dword ptr [ecx]
004207ab: mov       dword ptr [edx], eax
004207ad: mov       eax, dword ptr [ecx + 4]
004207b0: mov       dword ptr [edx + 4], eax
004207b3: mov       ecx, dword ptr [ecx + 8]
004207b6: push      ecx
004207b7: mov       dword ptr [edx + 8], ecx
004207ba: mov       edx, esp
004207bc: mov       dword ptr [esp + 0x3c], esp
004207c0: push      edx
004207c1: mov       ecx, esi
004207c3: call      0x4042e0
004207c8: lea       eax, [esp + 0x1c]
004207cc: mov       dword ptr [esp + 0x34], 0xffffffff
004207d4: push      eax
004207d5: call      0x446cd0
004207da: mov       ecx, dword ptr [esp + 0x30]
004207de: add       esp, 0x18
004207e1: mov       dword ptr fs:[0], ecx
004207e8: pop       esi
004207e9: add       esp, 0x20
004207ec: ret       8
004207ef: nop       
004207f0: mov       eax, 0x68f578
004207f5: ret       
004207f6: nop       
004207f7: nop       
004207f8: nop       
004207f9: nop       
004207fa: nop       
004207fb: nop       
004207fc: nop       
004207fd: nop       
004207fe: nop       
004207ff: nop       
00420800: mov       eax, dword ptr [esp + 4]
00420804: cmp       eax, 6
00420807: ja        0x42081d
00420809: xor       ecx, ecx
0042080b: mov       cl, byte ptr [eax + 0x42082c]
00420811: jmp       dword ptr [ecx*4 + 0x420824]
00420818: mov       al, 1
0042081a: ret       4
0042081d: xor       al, al
0042081f: ret       4
00420822: mov       edi, edi
00420824: sbb       byte ptr [eax], cl
00420826: inc       edx
00420827: add       byte ptr [0x4208], bl
0042082d: add       byte ptr [eax], al
0042082f: add       dword ptr [eax], eax
00420831: add       byte ptr [eax], al
00420833: nop       
00420834: nop       
00420835: nop       
00420836: nop       
00420837: nop       
00420838: nop       
00420839: nop       
0042083a: nop       
0042083b: nop       
0042083c: nop       
0042083d: nop       
0042083e: nop       
0042083f: nop       
00420840: mov       eax, dword ptr [esp + 4]
00420844: cmp       eax, 4
00420847: jne       0x42085d
00420849: mov       eax, dword ptr [esp + 0xc]
0042084d: mov       edx, dword ptr [esp + 8]
00420851: push      eax
00420852: push      edx
00420853: push      4
00420855: call      0x4233e0
0042085a: ret       0xc
0042085d: mov       edx, dword ptr [esp + 0xc]
00420861: push      edx
00420862: mov       edx, dword ptr [esp + 0xc]
00420866: push      edx
00420867: push      eax
00420868: call      0x4233e0
0042086d: ret       0xc
00420870: mov       eax, dword ptr [esp + 4]
00420874: cmp       eax, 2
00420877: jl        0x420883
00420879: cmp       eax, 3
0042087c: jg        0x420883
0042087e: mov       al, 1
00420880: ret       4
00420883: xor       al, al
00420885: ret       4
00420888: nop       
00420889: nop       
0042088a: nop       
0042088b: nop       
0042088c: nop       
0042088d: nop       
0042088e: nop       
0042088f: nop       
00420890: mov       eax, dword ptr [esp + 4]
00420894: push      esi
00420895: sub       eax, 2
00420898: mov       esi, ecx
0042089a: je        0x4208bb
0042089c: dec       eax
0042089d: jne       0x4208d3
0042089f: call      0x60a4a0
004208a4: push      0x3f800000
004208a9: push      0
004208ab: push      0x6b50d0
004208b0: mov       ecx, esi
004208b2: call      0x423be0
004208b7: pop       esi
004208b8: ret       4
004208bb: call      0x60a4a0
004208c0: push      0x3f800000
004208c5: push      0
004208c7: push      0x6b5128
004208cc: mov       ecx, esi
004208ce: call      0x423be0
004208d3: pop       esi
004208d4: ret       4
004208d7: nop       
004208d8: nop       
004208d9: nop       
004208da: nop       
004208db: nop       
004208dc: nop       
004208dd: nop       
004208de: nop       
004208df: nop       
004208e0: mov       eax, 0x10
004208e5: ret       
004208e6: nop       
004208e7: nop       
004208e8: nop       
004208e9: nop       
004208ea: nop       
004208eb: nop       
004208ec: nop       
004208ed: nop       
004208ee: nop       
004208ef: nop       
004208f0: mov       cl, byte ptr [0x7103a0]
004208f6: mov       al, 1
004208f8: test      al, cl
004208fa: jne       0x420904
004208fc: or        cl, al
004208fe: mov       byte ptr [0x7103a0], cl
00420904: jmp       0x420910
00420909: nop       
0042090a: nop       
0042090b: nop       
0042090c: nop       
0042090d: nop       
0042090e: nop       
0042090f: nop       
00420910: push      0x401ba0
00420915: call      0x60a57b
0042091a: pop       ecx
0042091b: ret       
0042091c: nop       
0042091d: nop       
0042091e: nop       
0042091f: nop       
00420920: call      0x420930
00420925: jmp       0x420a10
0042092a: nop       
0042092b: nop       
0042092c: nop       
0042092d: nop       
0042092e: nop       
0042092f: nop       
00420930: push      -1
00420932: push      0x622108
00420937: mov       eax, dword ptr fs:[0]
0042093d: push      eax
0042093e: mov       dword ptr fs:[0], esp
00420945: sub       esp, 0x14
00420948: mov       al, byte ptr [esp + 3]
0042094c: push      ebx
0042094d: push      ebp
0042094e: push      edi
0042094f: mov       byte ptr [esp + 0x10], al
00420953: mov       edi, 0x68f590
00420958: or        ecx, 0xffffffff
0042095b: xor       eax, eax
0042095d: xor       ebx, ebx
0042095f: push      1
00420961: repne scasb al, byte ptr es:[edi]
00420963: not       ecx
00420965: dec       ecx
00420966: mov       dword ptr [esp + 0x18], ebx
0042096a: mov       ebp, ecx
0042096c: lea       ecx, [esp + 0x14]
00420970: push      ebp
00420971: mov       dword ptr [esp + 0x20], ebx
00420975: mov       dword ptr [esp + 0x24], ebx
00420979: call      0x401940
0042097e: test      al, al
00420980: je        0x4209a8
00420982: mov       edi, dword ptr [esp + 0x14]
00420986: mov       ecx, ebp
00420988: mov       edx, ecx
0042098a: push      esi
0042098b: mov       esi, 0x68f590
00420990: shr       ecx, 2
00420993: rep movsd dword ptr es:[edi], dword ptr [esi]
00420995: mov       ecx, edx
00420997: and       ecx, 3
0042099a: rep movsb byte ptr es:[edi], byte ptr [esi]
0042099c: mov       eax, dword ptr [esp + 0x18]
004209a0: mov       dword ptr [esp + 0x1c], ebp
004209a4: pop       esi
004209a5: mov       byte ptr [eax + ebp], bl
004209a8: lea       ecx, [esp + 0x10]
004209ac: mov       dword ptr [esp + 0x28], ebx
004209b0: push      ecx
004209b1: mov       ecx, 0x6b5158
004209b6: call      0x5671a0
004209bb: mov       eax, dword ptr [esp + 0x14]
004209bf: cmp       eax, ebx
004209c1: je        0x4209f0
004209c3: lea       ecx, [eax - 1]
004209c6: mov       al, byte ptr [eax - 1]
004209c9: cmp       al, bl
004209cb: je        0x4209e7
004209cd: cmp       al, 0xff
004209cf: je        0x4209e7
004209d1: dec       al
004209d3: pop       edi
004209d4: pop       ebp
004209d5: mov       byte ptr [ecx], al
004209d7: pop       ebx
004209d8: mov       ecx, dword ptr [esp + 0x14]
004209dc: mov       dword ptr fs:[0], ecx
004209e3: add       esp, 0x20
004209e6: ret       
004209e7: push      ecx
004209e8: call      0x5fe5f0
004209ed: add       esp, 4
004209f0: mov       ecx, dword ptr [esp + 0x20]
004209f4: pop       edi
004209f5: pop       ebp
004209f6: pop       ebx
004209f7: mov       dword ptr fs:[0], ecx
004209fe: add       esp, 0x20
00420a01: ret       
00420a02: nop       
00420a03: nop       
00420a04: nop       
00420a05: nop       
00420a06: nop       
00420a07: nop       
00420a08: nop       
00420a09: nop       
00420a0a: nop       
00420a0b: nop       
00420a0c: nop       
00420a0d: nop       
00420a0e: nop       
00420a0f: nop       
00420a10: push      0x420a20
00420a15: call      0x60a57b
00420a1a: pop       ecx
00420a1b: ret       
00420a1c: nop       
00420a1d: nop       
00420a1e: nop       
00420a1f: nop       
00420a20: mov       cl, byte ptr [0x6b5150]
00420a26: mov       al, 1
00420a28: test      al, cl
00420a2a: jne       0x420a3e
00420a2c: or        cl, al
00420a2e: mov       byte ptr [0x6b5150], cl
00420a34: mov       ecx, 0x6b5158
00420a39: jmp       0x567300
00420a3e: ret       
00420a3f: nop       
00420a40: push      -1
00420a42: push      0x62213e
00420a47: mov       eax, dword ptr fs:[0]
00420a4d: push      eax
00420a4e: mov       dword ptr fs:[0], esp
00420a55: sub       esp, 0x14
00420a58: mov       eax, dword ptr [esp + 0x28]
00420a5c: push      ebx
00420a5d: push      esi
00420a5e: push      edi
00420a5f: mov       edi, dword ptr [esp + 0x38]
00420a63: mov       ebx, ecx
00420a65: mov       ecx, dword ptr [esp + 0x30]
00420a69: push      edi
00420a6a: push      eax
00420a6b: push      ecx
00420a6c: mov       ecx, ebx
00420a6e: mov       dword ptr [esp + 0x18], ebx
00420a72: call      0x4a8460
00420a77: xor       esi, esi
00420a79: mov       byte ptr [ebx + 0x30d], 0
00420a80: mov       dword ptr [esp + 0x28], esi
00420a84: mov       dword ptr [ebx + 0x310], esi
00420a8a: cmp       edi, esi
00420a8c: mov       byte ptr [esp + 0x28], 1
00420a91: mov       dword ptr [ebx], 0x64bb14
00420a97: jne       0x420b40
00420a9d: mov       edi, 0x6b3f70
00420aa2: or        ecx, 0xffffffff
00420aa5: xor       eax, eax
00420aa7: mov       dl, byte ptr [esp + 0x38]
00420aab: repne scasb al, byte ptr es:[edi]
00420aad: not       ecx
00420aaf: dec       ecx
00420ab0: push      ebp
00420ab1: mov       ebp, ecx
00420ab3: push      1
00420ab5: push      ebp
00420ab6: lea       ecx, [esp + 0x1c]
00420aba: mov       byte ptr [esp + 0x1c], dl
00420abe: mov       dword ptr [esp + 0x20], esi
00420ac2: mov       dword ptr [esp + 0x24], esi
00420ac6: mov       dword ptr [esp + 0x28], esi
00420aca: call      0x401940
00420acf: test      al, al
00420ad1: je        0x420afa
00420ad3: mov       edi, dword ptr [esp + 0x18]
00420ad7: mov       ecx, ebp
00420ad9: mov       eax, ecx
00420adb: mov       esi, 0x6b3f70
00420ae0: shr       ecx, 2
00420ae3: rep movsd dword ptr es:[edi], dword ptr [esi]
00420ae5: mov       ecx, eax
00420ae7: and       ecx, 3
00420aea: rep movsb byte ptr es:[edi], byte ptr [esi]
00420aec: mov       ecx, dword ptr [esp + 0x18]
00420af0: mov       dword ptr [esp + 0x1c], ebp
00420af4: xor       esi, esi
00420af6: mov       byte ptr [ecx + ebp], 0
00420afa: lea       edx, [esp + 0x14]
00420afe: mov       byte ptr [esp + 0x2c], 2
00420b03: push      edx
00420b04: push      0x12
00420b06: push      0x68f614
00420b0b: push      0x68f604
00420b10: call      0x5a07f0
00420b15: call      eax
00420b17: mov       eax, dword ptr [esp + 0x28]
00420b1b: add       esp, 0x10
00420b1e: cmp       eax, esi
00420b20: pop       ebp
00420b21: je        0x420b40
00420b23: lea       ecx, [eax - 1]
00420b26: mov       al, byte ptr [eax - 1]
00420b29: test      al, al
00420b2b: je        0x420b37
00420b2d: cmp       al, 0xff
00420b2f: je        0x420b37
00420b31: dec       al
00420b33: mov       byte ptr [ecx], al
00420b35: jmp       0x420b40
00420b37: push      ecx
00420b38: call      0x5fe5f0
00420b3d: add       esp, 4
00420b40: mov       eax, dword ptr [esp + 0x38]
00420b44: cmp       dword ptr [eax + 0x50], esi
00420b47: setne     cl
00420b4a: mov       byte ptr [ebx + 0x30c], cl
00420b50: lea       ecx, [ebx + 0x314]
00420b56: call      0x5b3070
00420b5b: mov       ecx, dword ptr [esp + 0x20]
00420b5f: pop       edi
00420b60: mov       eax, ebx
00420b62: pop       esi
00420b63: pop       ebx
00420b64: mov       dword ptr fs:[0], ecx
00420b6b: add       esp, 0x20
00420b6e: ret       0xc
00420b71: nop       
00420b72: nop       
00420b73: nop       
00420b74: nop       
00420b75: nop       
00420b76: nop       
00420b77: nop       
00420b78: nop       
00420b79: nop       
00420b7a: nop       
00420b7b: nop       
00420b7c: nop       
00420b7d: nop       
00420b7e: nop       
00420b7f: nop       
00420b80: push      esi
00420b81: mov       esi, ecx
00420b83: call      0x420ba0
00420b88: test      byte ptr [esp + 8], 1
00420b8d: je        0x420b98
00420b8f: push      esi
00420b90: call      0x5fe5f0
00420b95: add       esp, 4
00420b98: mov       eax, esi
00420b9a: pop       esi
00420b9b: ret       4
00420b9e: nop       
00420b9f: nop       
00420ba0: push      -1
00420ba2: push      0x622158
00420ba7: mov       eax, dword ptr fs:[0]
00420bad: push      eax
00420bae: mov       dword ptr fs:[0], esp
00420bb5: push      ecx
00420bb6: push      esi
00420bb7: mov       esi, ecx
00420bb9: mov       dword ptr [esp + 4], esi
00420bbd: mov       ecx, dword ptr [esi + 0x310]
00420bc3: mov       dword ptr [esp + 0x10], 0
00420bcb: test      ecx, ecx
00420bcd: je        0x420be9
00420bcf: mov       eax, dword ptr [ecx + 0x14]
00420bd2: dec       eax
00420bd3: mov       dword ptr [ecx + 0x14], eax
00420bd6: jne       0x420bdf
00420bd8: push      0
00420bda: call      0x5abfc0
00420bdf: mov       dword ptr [esi + 0x310], 0
00420be9: mov       ecx, esi
00420beb: mov       dword ptr [esp + 0x10], 0xffffffff
00420bf3: call      0x49b720
00420bf8: mov       ecx, dword ptr [esp + 8]
00420bfc: pop       esi
