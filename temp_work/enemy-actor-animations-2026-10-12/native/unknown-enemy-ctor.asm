0040dc00: dec       ecx
0040dc01: mov       ebx, ecx
0040dc03: cmp       ebx, -3
0040dc06: jbe       0x40dc0d
0040dc08: call      0x5fe5fb
0040dc0d: mov       ecx, dword ptr [ebp + 4]
0040dc10: cmp       ecx, esi
0040dc12: je        0x40dc32
0040dc14: mov       al, byte ptr [ecx - 1]
0040dc17: test      al, al
0040dc19: je        0x40dc32
0040dc1b: cmp       al, 0xff
0040dc1d: je        0x40dc32
0040dc1f: cmp       ebx, esi
0040dc21: jne       0x40dc56
0040dc23: dec       al
0040dc25: push      esi
0040dc26: mov       byte ptr [ecx - 1], al
0040dc29: mov       ecx, ebp
0040dc2b: call      0x4040a0
0040dc30: jmp       0x40dc80
0040dc32: cmp       ebx, esi
0040dc34: jne       0x40dc41
0040dc36: push      1
0040dc38: mov       ecx, ebp
0040dc3a: call      0x4040a0
0040dc3f: jmp       0x40dc80
0040dc41: mov       eax, dword ptr [ebp + 0xc]
0040dc44: cmp       eax, 0x1f
0040dc47: ja        0x40dc4d
0040dc49: cmp       eax, ebx
0040dc4b: jae       0x40dc5e
0040dc4d: push      1
0040dc4f: mov       ecx, ebp
0040dc51: call      0x4040a0
0040dc56: push      ebx
0040dc57: mov       ecx, ebp
0040dc59: call      0x401a60
0040dc5e: mov       edi, dword ptr [ebp + 4]
0040dc61: mov       ecx, ebx
0040dc63: mov       edx, ecx
0040dc65: mov       esi, 0x68e6a4
0040dc6a: shr       ecx, 2
0040dc6d: rep movsd dword ptr es:[edi], dword ptr [esi]
0040dc6f: mov       ecx, edx
0040dc71: and       ecx, 3
0040dc74: rep movsb byte ptr es:[edi], byte ptr [esi]
0040dc76: mov       eax, dword ptr [ebp + 4]
0040dc79: mov       dword ptr [ebp + 8], ebx
0040dc7c: mov       byte ptr [eax + ebx], 0
0040dc80: push      0x6b8df0
0040dc85: mov       ecx, 0x6b4208
0040dc8a: call      0x40c860
0040dc8f: pop       edi
0040dc90: pop       esi
0040dc91: pop       ebp
0040dc92: pop       ebx
0040dc93: add       esp, 8
0040dc96: ret       
0040dc97: nop       
0040dc98: nop       
0040dc99: nop       
0040dc9a: nop       
0040dc9b: nop       
0040dc9c: nop       
0040dc9d: nop       
0040dc9e: nop       
0040dc9f: nop       
0040dca0: push      0x40dcb0
0040dca5: call      0x60a57b
0040dcaa: pop       ecx
0040dcab: ret       
0040dcac: nop       
0040dcad: nop       
0040dcae: nop       
0040dcaf: nop       
0040dcb0: mov       cl, byte ptr [0x6b4230]
0040dcb6: mov       al, 2
0040dcb8: test      al, cl
0040dcba: jne       0x40dcce
0040dcbc: or        cl, al
0040dcbe: mov       byte ptr [0x6b4230], cl
0040dcc4: mov       ecx, 0x6b4208
0040dcc9: jmp       0x429cc0
0040dcce: ret       
0040dccf: nop       
0040dcd0: call      0x40dce0
0040dcd5: jmp       0x40ddb0
0040dcda: nop       
0040dcdb: nop       
0040dcdc: nop       
0040dcdd: nop       
0040dcde: nop       
0040dcdf: nop       
0040dce0: sub       esp, 8
0040dce3: push      ebx
0040dce4: mov       al, byte ptr [esp + 7]
0040dce8: push      ebp
0040dce9: push      esi
0040dcea: push      edi
0040dceb: xor       esi, esi
0040dced: sub       esp, 0x10
0040dcf0: mov       edi, 0x68e6b0
0040dcf5: mov       ebp, esp
0040dcf7: or        ecx, 0xffffffff
0040dcfa: mov       dword ptr [esp + 0x24], esp
0040dcfe: mov       byte ptr [ebp], al
0040dd01: xor       eax, eax
0040dd03: mov       dword ptr [ebp + 4], esi
0040dd06: mov       dword ptr [ebp + 8], esi
0040dd09: mov       dword ptr [ebp + 0xc], esi
0040dd0c: repne scasb al, byte ptr es:[edi]
0040dd0e: not       ecx
0040dd10: dec       ecx
0040dd11: mov       ebx, ecx
0040dd13: cmp       ebx, -3
0040dd16: jbe       0x40dd1d
0040dd18: call      0x5fe5fb
0040dd1d: mov       ecx, dword ptr [ebp + 4]
0040dd20: cmp       ecx, esi
0040dd22: je        0x40dd42
0040dd24: mov       al, byte ptr [ecx - 1]
0040dd27: test      al, al
0040dd29: je        0x40dd42
0040dd2b: cmp       al, 0xff
0040dd2d: je        0x40dd42
0040dd2f: cmp       ebx, esi
0040dd31: jne       0x40dd66
0040dd33: dec       al
0040dd35: push      esi
0040dd36: mov       byte ptr [ecx - 1], al
0040dd39: mov       ecx, ebp
0040dd3b: call      0x4040a0
0040dd40: jmp       0x40dd90
0040dd42: cmp       ebx, esi
0040dd44: jne       0x40dd51
0040dd46: push      1
0040dd48: mov       ecx, ebp
0040dd4a: call      0x4040a0
0040dd4f: jmp       0x40dd90
0040dd51: mov       eax, dword ptr [ebp + 0xc]
0040dd54: cmp       eax, 0x1f
0040dd57: ja        0x40dd5d
0040dd59: cmp       eax, ebx
0040dd5b: jae       0x40dd6e
0040dd5d: push      1
0040dd5f: mov       ecx, ebp
0040dd61: call      0x4040a0
0040dd66: push      ebx
0040dd67: mov       ecx, ebp
0040dd69: call      0x401a60
0040dd6e: mov       edi, dword ptr [ebp + 4]
0040dd71: mov       ecx, ebx
0040dd73: mov       edx, ecx
0040dd75: mov       esi, 0x68e6b0
0040dd7a: shr       ecx, 2
0040dd7d: rep movsd dword ptr es:[edi], dword ptr [esi]
0040dd7f: mov       ecx, edx
0040dd81: and       ecx, 3
0040dd84: rep movsb byte ptr es:[edi], byte ptr [esi]
0040dd86: mov       eax, dword ptr [ebp + 4]
0040dd89: mov       dword ptr [ebp + 8], ebx
0040dd8c: mov       byte ptr [eax + ebx], 0
0040dd90: push      0x6b8df0
0040dd95: mov       ecx, 0x6b41e0
0040dd9a: call      0x40c860
0040dd9f: pop       edi
0040dda0: pop       esi
0040dda1: pop       ebp
0040dda2: pop       ebx
0040dda3: add       esp, 8
0040dda6: ret       
0040dda7: nop       
0040dda8: nop       
0040dda9: nop       
0040ddaa: nop       
0040ddab: nop       
0040ddac: nop       
0040ddad: nop       
0040ddae: nop       
0040ddaf: nop       
0040ddb0: push      0x40ddc0
0040ddb5: call      0x60a57b
0040ddba: pop       ecx
0040ddbb: ret       
0040ddbc: nop       
0040ddbd: nop       
0040ddbe: nop       
0040ddbf: nop       
0040ddc0: mov       cl, byte ptr [0x6b4230]
0040ddc6: mov       al, 4
0040ddc8: test      al, cl
0040ddca: jne       0x40ddde
0040ddcc: or        cl, al
0040ddce: mov       byte ptr [0x6b4230], cl
0040ddd4: mov       ecx, 0x6b41e0
0040ddd9: jmp       0x429cc0
0040ddde: ret       
0040dddf: nop       
0040dde0: call      0x40ddf0
0040dde5: jmp       0x40dec0
0040ddea: nop       
0040ddeb: nop       
0040ddec: nop       
0040dded: nop       
0040ddee: nop       
0040ddef: nop       
0040ddf0: sub       esp, 8
0040ddf3: push      ebx
0040ddf4: mov       al, byte ptr [esp + 7]
0040ddf8: push      ebp
0040ddf9: push      esi
0040ddfa: push      edi
0040ddfb: xor       esi, esi
0040ddfd: sub       esp, 0x10
0040de00: mov       edi, 0x68e6bc
0040de05: mov       ebp, esp
0040de07: or        ecx, 0xffffffff
0040de0a: mov       dword ptr [esp + 0x24], esp
0040de0e: mov       byte ptr [ebp], al
0040de11: xor       eax, eax
0040de13: mov       dword ptr [ebp + 4], esi
0040de16: mov       dword ptr [ebp + 8], esi
0040de19: mov       dword ptr [ebp + 0xc], esi
0040de1c: repne scasb al, byte ptr es:[edi]
0040de1e: not       ecx
0040de20: dec       ecx
0040de21: mov       ebx, ecx
0040de23: cmp       ebx, -3
0040de26: jbe       0x40de2d
0040de28: call      0x5fe5fb
0040de2d: mov       ecx, dword ptr [ebp + 4]
0040de30: cmp       ecx, esi
0040de32: je        0x40de52
0040de34: mov       al, byte ptr [ecx - 1]
0040de37: test      al, al
0040de39: je        0x40de52
0040de3b: cmp       al, 0xff
0040de3d: je        0x40de52
0040de3f: cmp       ebx, esi
0040de41: jne       0x40de76
0040de43: dec       al
0040de45: push      esi
0040de46: mov       byte ptr [ecx - 1], al
0040de49: mov       ecx, ebp
0040de4b: call      0x4040a0
0040de50: jmp       0x40dea0
0040de52: cmp       ebx, esi
0040de54: jne       0x40de61
0040de56: push      1
0040de58: mov       ecx, ebp
0040de5a: call      0x4040a0
0040de5f: jmp       0x40dea0
0040de61: mov       eax, dword ptr [ebp + 0xc]
0040de64: cmp       eax, 0x1f
0040de67: ja        0x40de6d
0040de69: cmp       eax, ebx
0040de6b: jae       0x40de7e
0040de6d: push      1
0040de6f: mov       ecx, ebp
0040de71: call      0x4040a0
0040de76: push      ebx
0040de77: mov       ecx, ebp
0040de79: call      0x401a60
0040de7e: mov       edi, dword ptr [ebp + 4]
0040de81: mov       ecx, ebx
0040de83: mov       edx, ecx
0040de85: mov       esi, 0x68e6bc
0040de8a: shr       ecx, 2
0040de8d: rep movsd dword ptr es:[edi], dword ptr [esi]
0040de8f: mov       ecx, edx
0040de91: and       ecx, 3
0040de94: rep movsb byte ptr es:[edi], byte ptr [esi]
0040de96: mov       eax, dword ptr [ebp + 4]
0040de99: mov       dword ptr [ebp + 8], ebx
0040de9c: mov       byte ptr [eax + ebx], 0
0040dea0: push      0x6b8df0
0040dea5: mov       ecx, 0x6b41b8
0040deaa: call      0x40c860
0040deaf: pop       edi
0040deb0: pop       esi
0040deb1: pop       ebp
0040deb2: pop       ebx
0040deb3: add       esp, 8
0040deb6: ret       
0040deb7: nop       
0040deb8: nop       
0040deb9: nop       
0040deba: nop       
0040debb: nop       
0040debc: nop       
0040debd: nop       
0040debe: nop       
0040debf: nop       
0040dec0: push      0x40ded0
0040dec5: call      0x60a57b
0040deca: pop       ecx
0040decb: ret       
0040decc: nop       
0040decd: nop       
0040dece: nop       
0040decf: nop       
0040ded0: mov       cl, byte ptr [0x6b4230]
0040ded6: mov       al, 8
0040ded8: test      al, cl
0040deda: jne       0x40deee
0040dedc: or        cl, al
0040dede: mov       byte ptr [0x6b4230], cl
0040dee4: mov       ecx, 0x6b41b8
0040dee9: jmp       0x429cc0
0040deee: ret       
0040deef: nop       
0040def0: call      0x40df00
0040def5: jmp       0x40dfd0
0040defa: nop       
0040defb: nop       
0040defc: nop       
0040defd: nop       
0040defe: nop       
0040deff: nop       
