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
