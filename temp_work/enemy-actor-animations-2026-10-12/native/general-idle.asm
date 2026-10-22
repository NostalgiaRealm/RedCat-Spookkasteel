004035a0: sbb       dword ptr [eax], eax
004035a2: call      eax
004035a4: mov       eax, dword ptr [esp + 0x2c]
004035a8: add       esp, 0x10
004035ab: cmp       eax, ebx
004035ad: mov       dword ptr [esp + 0x30], 0xffffffff
004035b5: pop       edi
004035b6: pop       ebp
004035b7: je        0x4035d6
004035b9: lea       ecx, [eax - 1]
004035bc: mov       al, byte ptr [eax - 1]
004035bf: cmp       al, bl
004035c1: je        0x4035cd
004035c3: cmp       al, 0xff
004035c5: je        0x4035cd
004035c7: dec       al
004035c9: mov       byte ptr [ecx], al
004035cb: jmp       0x4035d6
004035cd: push      ecx
004035ce: call      0x5fe5f0
004035d3: add       esp, 4
004035d6: mov       dword ptr [esp + 0x14], ebx
004035da: mov       dword ptr [esp + 0x18], ebx
004035de: mov       dword ptr [esp + 0x1c], ebx
004035e2: mov       ecx, dword ptr [esi + 0x24]
004035e5: push      0x7f7fffff
004035ea: push      ebx
004035eb: push      ebx
004035ec: mov       edx, dword ptr [ecx]
004035ee: call      dword ptr [edx + 0x8c]
004035f4: mov       ecx, dword ptr [esp + 0x20]
004035f8: pop       esi
004035f9: pop       ebx
004035fa: mov       dword ptr fs:[0], ecx
00403601: add       esp, 0x24
00403604: ret       4
00403607: nop       
00403608: nop       
00403609: nop       
0040360a: nop       
0040360b: nop       
0040360c: nop       
0040360d: nop       
0040360e: nop       
0040360f: nop       
00403610: push      -1
00403612: push      0x61fb78
00403617: mov       eax, dword ptr fs:[0]
0040361d: push      eax
0040361e: mov       dword ptr fs:[0], esp
00403625: push      ecx
00403626: mov       eax, dword ptr [esp + 0x14]
0040362a: push      esi
0040362b: mov       esi, ecx
0040362d: push      eax
0040362e: mov       dword ptr [esp + 8], esi
00403632: call      0x402960
00403637: mov       ecx, dword ptr [esi + 0x24]
0040363a: mov       dword ptr [esi], 0x64a3f8
00403640: mov       dword ptr [esp + 0x10], 0
00403648: mov       edx, dword ptr [ecx]
0040364a: call      dword ptr [edx + 0x54]
0040364d: mov       ecx, dword ptr [esp + 8]
00403651: mov       eax, esi
00403653: pop       esi
00403654: mov       dword ptr fs:[0], ecx
0040365b: add       esp, 0x10
0040365e: ret       4
00403661: nop       
00403662: nop       
00403663: nop       
00403664: nop       
00403665: nop       
00403666: nop       
00403667: nop       
00403668: nop       
00403669: nop       
0040366a: nop       
0040366b: nop       
0040366c: nop       
0040366d: nop       
0040366e: nop       
0040366f: nop       
00403670: push      esi
00403671: mov       esi, ecx
00403673: call      0x4036a0
00403678: test      byte ptr [esp + 8], 1
0040367d: je        0x403688
0040367f: push      esi
00403680: call      0x5fe5f0
00403685: add       esp, 4
00403688: mov       eax, esi
0040368a: pop       esi
0040368b: ret       4
0040368e: nop       
0040368f: nop       
00403690: mov       eax, dword ptr [ecx + 0x24]
00403693: mov       ecx, dword ptr [esp + 4]
00403697: mov       dword ptr [eax + 0x168], ecx
0040369d: ret       4
004036a0: push      -1
004036a2: push      0x61fb98
004036a7: mov       eax, dword ptr fs:[0]
004036ad: push      eax
004036ae: mov       dword ptr fs:[0], esp
004036b5: push      ecx
004036b6: push      esi
004036b7: mov       esi, ecx
004036b9: mov       dword ptr [esp + 4], esi
004036bd: mov       dword ptr [esi], 0x64a3f8
004036c3: mov       ecx, dword ptr [esi + 0x24]
004036c6: mov       dword ptr [esp + 0x10], 0
004036ce: mov       eax, dword ptr [ecx]
004036d0: call      dword ptr [eax + 0x58]
004036d3: mov       ecx, esi
004036d5: mov       dword ptr [esp + 0x10], 0xffffffff
004036dd: call      0x4029b0
004036e2: mov       ecx, dword ptr [esp + 8]
004036e6: pop       esi
004036e7: mov       dword ptr fs:[0], ecx
004036ee: add       esp, 0x10
004036f1: ret       
004036f2: nop       
004036f3: nop       
004036f4: nop       
004036f5: nop       
004036f6: nop       
004036f7: nop       
004036f8: nop       
004036f9: nop       
004036fa: nop       
004036fb: nop       
004036fc: nop       
004036fd: nop       
004036fe: nop       
004036ff: nop       
