0040db00: cmp        ecx, esi
0040db02: je         0x40db22
0040db04: mov        al, byte ptr [ecx - 1]
0040db07: test       al, al
0040db09: je         0x40db22
0040db0b: cmp        al, 0xff
0040db0d: je         0x40db22
0040db0f: cmp        ebx, esi
0040db11: jne        0x40db46
0040db13: dec        al
0040db15: push       esi
0040db16: mov        byte ptr [ecx - 1], al
0040db19: mov        ecx, ebp
0040db1b: call       0x4040a0
0040db20: jmp        0x40db70
0040db22: cmp        ebx, esi
0040db24: jne        0x40db31
0040db26: push       1
0040db28: mov        ecx, ebp
0040db2a: call       0x4040a0
0040db2f: jmp        0x40db70
0040db31: mov        eax, dword ptr [ebp + 0xc]
0040db34: cmp        eax, 0x1f
0040db37: ja         0x40db3d
0040db39: cmp        eax, ebx
0040db3b: jae        0x40db4e
0040db3d: push       1
0040db3f: mov        ecx, ebp
0040db41: call       0x4040a0
0040db46: push       ebx
0040db47: mov        ecx, ebp
0040db49: call       0x401a60
0040db4e: mov        edi, dword ptr [ebp + 4]
0040db51: mov        ecx, ebx
0040db53: mov        edx, ecx
0040db55: mov        esi, 0x68e698
0040db5a: shr        ecx, 2
0040db5d: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040db5f: mov        ecx, edx
0040db61: and        ecx, 3
0040db64: rep movsb  byte ptr es:[edi], byte ptr [esi]
0040db66: mov        eax, dword ptr [ebp + 4]
0040db69: mov        dword ptr [ebp + 8], ebx
0040db6c: mov        byte ptr [eax + ebx], 0
0040db70: push       0x6b8df0
0040db75: mov        ecx, 0x6b4238
0040db7a: call       0x40c860
0040db7f: pop        edi
0040db80: pop        esi
0040db81: pop        ebp
0040db82: pop        ebx
0040db83: add        esp, 8
0040db86: ret        
0040db87: nop        
0040db88: nop        
0040db89: nop        
0040db8a: nop        
0040db8b: nop        
0040db8c: nop        
0040db8d: nop        
0040db8e: nop        
0040db8f: nop        
0040db90: push       0x40dba0
0040db95: call       0x60a57b
0040db9a: pop        ecx
0040db9b: ret        
0040db9c: nop        
0040db9d: nop        
0040db9e: nop        
0040db9f: nop        
0040dba0: mov        cl, byte ptr [0x6b4230]
0040dba6: mov        al, 1
0040dba8: test       al, cl
0040dbaa: jne        0x40dbbe
0040dbac: or         cl, al
0040dbae: mov        byte ptr [0x6b4230], cl
0040dbb4: mov        ecx, 0x6b4238
0040dbb9: jmp        0x429cc0
0040dbbe: ret        
0040dbbf: nop        
0040dbc0: call       0x40dbd0
0040dbc5: jmp        0x40dca0
0040dbca: nop        
0040dbcb: nop        
0040dbcc: nop        
0040dbcd: nop        
0040dbce: nop        
0040dbcf: nop        
0040dbd0: sub        esp, 8
0040dbd3: push       ebx
0040dbd4: mov        al, byte ptr [esp + 7]
0040dbd8: push       ebp
0040dbd9: push       esi
0040dbda: push       edi
0040dbdb: xor        esi, esi
0040dbdd: sub        esp, 0x10
0040dbe0: mov        edi, 0x68e6a4
0040dbe5: mov        ebp, esp
0040dbe7: or         ecx, 0xffffffff
0040dbea: mov        dword ptr [esp + 0x24], esp
0040dbee: mov        byte ptr [ebp], al
0040dbf1: xor        eax, eax
0040dbf3: mov        dword ptr [ebp + 4], esi
0040dbf6: mov        dword ptr [ebp + 8], esi
0040dbf9: mov        dword ptr [ebp + 0xc], esi
0040dbfc: repne scasb al, byte ptr es:[edi]
0040dbfe: not        ecx
0040dc00: dec        ecx
0040dc01: mov        ebx, ecx
0040dc03: cmp        ebx, -3
0040dc06: jbe        0x40dc0d
0040dc08: call       0x5fe5fb
0040dc0d: mov        ecx, dword ptr [ebp + 4]
0040dc10: cmp        ecx, esi
0040dc12: je         0x40dc32
0040dc14: mov        al, byte ptr [ecx - 1]
0040dc17: test       al, al
0040dc19: je         0x40dc32
0040dc1b: cmp        al, 0xff
0040dc1d: je         0x40dc32
0040dc1f: cmp        ebx, esi
0040dc21: jne        0x40dc56
0040dc23: dec        al
0040dc25: push       esi
0040dc26: mov        byte ptr [ecx - 1], al
0040dc29: mov        ecx, ebp
0040dc2b: call       0x4040a0
0040dc30: jmp        0x40dc80
0040dc32: cmp        ebx, esi
0040dc34: jne        0x40dc41
0040dc36: push       1
0040dc38: mov        ecx, ebp
0040dc3a: call       0x4040a0
0040dc3f: jmp        0x40dc80
0040dc41: mov        eax, dword ptr [ebp + 0xc]
0040dc44: cmp        eax, 0x1f
0040dc47: ja         0x40dc4d
0040dc49: cmp        eax, ebx
0040dc4b: jae        0x40dc5e
0040dc4d: push       1
0040dc4f: mov        ecx, ebp
0040dc51: call       0x4040a0
0040dc56: push       ebx
0040dc57: mov        ecx, ebp
0040dc59: call       0x401a60
0040dc5e: mov        edi, dword ptr [ebp + 4]
0040dc61: mov        ecx, ebx
0040dc63: mov        edx, ecx
0040dc65: mov        esi, 0x68e6a4
0040dc6a: shr        ecx, 2
0040dc6d: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040dc6f: mov        ecx, edx
0040dc71: and        ecx, 3
0040dc74: rep movsb  byte ptr es:[edi], byte ptr [esi]
0040dc76: mov        eax, dword ptr [ebp + 4]
0040dc79: mov        dword ptr [ebp + 8], ebx
0040dc7c: mov        byte ptr [eax + ebx], 0
0040dc80: push       0x6b8df0
0040dc85: mov        ecx, 0x6b4208
0040dc8a: call       0x40c860
0040dc8f: pop        edi
0040dc90: pop        esi
0040dc91: pop        ebp
0040dc92: pop        ebx
0040dc93: add        esp, 8
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
0040dca0: push       0x40dcb0
0040dca5: call       0x60a57b
0040dcaa: pop        ecx
0040dcab: ret        
0040dcac: nop        
0040dcad: nop        
0040dcae: nop        
0040dcaf: nop        
0040dcb0: mov        cl, byte ptr [0x6b4230]
0040dcb6: mov        al, 2
0040dcb8: test       al, cl
0040dcba: jne        0x40dcce
0040dcbc: or         cl, al
0040dcbe: mov        byte ptr [0x6b4230], cl
0040dcc4: mov        ecx, 0x6b4208
0040dcc9: jmp        0x429cc0
0040dcce: ret        
0040dccf: nop        
0040dcd0: call       0x40dce0
0040dcd5: jmp        0x40ddb0
0040dcda: nop        
0040dcdb: nop        
0040dcdc: nop        
0040dcdd: nop        
0040dcde: nop        
0040dcdf: nop        
0040dce0: sub        esp, 8
0040dce3: push       ebx
0040dce4: mov        al, byte ptr [esp + 7]
0040dce8: push       ebp
0040dce9: push       esi
0040dcea: push       edi
0040dceb: xor        esi, esi
0040dced: sub        esp, 0x10
0040dcf0: mov        edi, 0x68e6b0
0040dcf5: mov        ebp, esp
0040dcf7: or         ecx, 0xffffffff
0040dcfa: mov        dword ptr [esp + 0x24], esp
0040dcfe: mov        byte ptr [ebp], al
0040dd01: xor        eax, eax
0040dd03: mov        dword ptr [ebp + 4], esi
0040dd06: mov        dword ptr [ebp + 8], esi
0040dd09: mov        dword ptr [ebp + 0xc], esi
0040dd0c: repne scasb al, byte ptr es:[edi]
0040dd0e: not        ecx
0040dd10: dec        ecx
0040dd11: mov        ebx, ecx
0040dd13: cmp        ebx, -3
0040dd16: jbe        0x40dd1d
0040dd18: call       0x5fe5fb
0040dd1d: mov        ecx, dword ptr [ebp + 4]
0040dd20: cmp        ecx, esi
0040dd22: je         0x40dd42
0040dd24: mov        al, byte ptr [ecx - 1]
0040dd27: test       al, al
0040dd29: je         0x40dd42
0040dd2b: cmp        al, 0xff
0040dd2d: je         0x40dd42
0040dd2f: cmp        ebx, esi
0040dd31: jne        0x40dd66
0040dd33: dec        al
0040dd35: push       esi
0040dd36: mov        byte ptr [ecx - 1], al
0040dd39: mov        ecx, ebp
0040dd3b: call       0x4040a0
0040dd40: jmp        0x40dd90
0040dd42: cmp        ebx, esi
0040dd44: jne        0x40dd51
0040dd46: push       1
0040dd48: mov        ecx, ebp
0040dd4a: call       0x4040a0
0040dd4f: jmp        0x40dd90
0040dd51: mov        eax, dword ptr [ebp + 0xc]
0040dd54: cmp        eax, 0x1f
0040dd57: ja         0x40dd5d
0040dd59: cmp        eax, ebx
0040dd5b: jae        0x40dd6e
0040dd5d: push       1
0040dd5f: mov        ecx, ebp
0040dd61: call       0x4040a0
0040dd66: push       ebx
0040dd67: mov        ecx, ebp
0040dd69: call       0x401a60
0040dd6e: mov        edi, dword ptr [ebp + 4]
0040dd71: mov        ecx, ebx
0040dd73: mov        edx, ecx
0040dd75: mov        esi, 0x68e6b0
0040dd7a: shr        ecx, 2
0040dd7d: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040dd7f: mov        ecx, edx
0040dd81: and        ecx, 3
0040dd84: rep movsb  byte ptr es:[edi], byte ptr [esi]
0040dd86: mov        eax, dword ptr [ebp + 4]
0040dd89: mov        dword ptr [ebp + 8], ebx
0040dd8c: mov        byte ptr [eax + ebx], 0
0040dd90: push       0x6b8df0
0040dd95: mov        ecx, 0x6b41e0
0040dd9a: call       0x40c860
0040dd9f: pop        edi
0040dda0: pop        esi
0040dda1: pop        ebp
0040dda2: pop        ebx
0040dda3: add        esp, 8
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
0040ddb0: push       0x40ddc0
0040ddb5: call       0x60a57b
0040ddba: pop        ecx
0040ddbb: ret        
0040ddbc: nop        
0040ddbd: nop        
0040ddbe: nop        
0040ddbf: nop        
0040ddc0: mov        cl, byte ptr [0x6b4230]
0040ddc6: mov        al, 4
0040ddc8: test       al, cl
0040ddca: jne        0x40ddde
0040ddcc: or         cl, al
0040ddce: mov        byte ptr [0x6b4230], cl
0040ddd4: mov        ecx, 0x6b41e0
0040ddd9: jmp        0x429cc0
0040ddde: ret        
0040dddf: nop        
0040dde0: call       0x40ddf0
0040dde5: jmp        0x40dec0
0040ddea: nop        
0040ddeb: nop        
0040ddec: nop        
0040dded: nop        
0040ddee: nop        
0040ddef: nop        
0040ddf0: sub        esp, 8
0040ddf3: push       ebx
0040ddf4: mov        al, byte ptr [esp + 7]
0040ddf8: push       ebp
0040ddf9: push       esi
0040ddfa: push       edi
0040ddfb: xor        esi, esi
0040ddfd: sub        esp, 0x10
0040de00: mov        edi, 0x68e6bc
0040de05: mov        ebp, esp
0040de07: or         ecx, 0xffffffff
0040de0a: mov        dword ptr [esp + 0x24], esp
0040de0e: mov        byte ptr [ebp], al
0040de11: xor        eax, eax
0040de13: mov        dword ptr [ebp + 4], esi
0040de16: mov        dword ptr [ebp + 8], esi
0040de19: mov        dword ptr [ebp + 0xc], esi
0040de1c: repne scasb al, byte ptr es:[edi]
0040de1e: not        ecx
0040de20: dec        ecx
0040de21: mov        ebx, ecx
0040de23: cmp        ebx, -3
0040de26: jbe        0x40de2d
0040de28: call       0x5fe5fb
0040de2d: mov        ecx, dword ptr [ebp + 4]
0040de30: cmp        ecx, esi
0040de32: je         0x40de52
0040de34: mov        al, byte ptr [ecx - 1]
0040de37: test       al, al
0040de39: je         0x40de52
0040de3b: cmp        al, 0xff
0040de3d: je         0x40de52
0040de3f: cmp        ebx, esi
0040de41: jne        0x40de76
0040de43: dec        al
0040de45: push       esi
0040de46: mov        byte ptr [ecx - 1], al
0040de49: mov        ecx, ebp
0040de4b: call       0x4040a0
0040de50: jmp        0x40dea0
0040de52: cmp        ebx, esi
0040de54: jne        0x40de61
0040de56: push       1
0040de58: mov        ecx, ebp
0040de5a: call       0x4040a0
0040de5f: jmp        0x40dea0
0040de61: mov        eax, dword ptr [ebp + 0xc]
0040de64: cmp        eax, 0x1f
0040de67: ja         0x40de6d
0040de69: cmp        eax, ebx
0040de6b: jae        0x40de7e
0040de6d: push       1
0040de6f: mov        ecx, ebp
0040de71: call       0x4040a0
0040de76: push       ebx
0040de77: mov        ecx, ebp
0040de79: call       0x401a60
0040de7e: mov        edi, dword ptr [ebp + 4]
0040de81: mov        ecx, ebx
0040de83: mov        edx, ecx
0040de85: mov        esi, 0x68e6bc
0040de8a: shr        ecx, 2
0040de8d: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040de8f: mov        ecx, edx
0040de91: and        ecx, 3
0040de94: rep movsb  byte ptr es:[edi], byte ptr [esi]
0040de96: mov        eax, dword ptr [ebp + 4]
0040de99: mov        dword ptr [ebp + 8], ebx
0040de9c: mov        byte ptr [eax + ebx], 0
0040dea0: push       0x6b8df0
0040dea5: mov        ecx, 0x6b41b8
0040deaa: call       0x40c860
0040deaf: pop        edi
0040deb0: pop        esi
0040deb1: pop        ebp
0040deb2: pop        ebx
0040deb3: add        esp, 8
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
0040dec0: push       0x40ded0
0040dec5: call       0x60a57b
0040deca: pop        ecx
0040decb: ret        
0040decc: nop        
0040decd: nop        
0040dece: nop        
0040decf: nop        
0040ded0: mov        cl, byte ptr [0x6b4230]
0040ded6: mov        al, 8
0040ded8: test       al, cl
0040deda: jne        0x40deee
0040dedc: or         cl, al
0040dede: mov        byte ptr [0x6b4230], cl
0040dee4: mov        ecx, 0x6b41b8
0040dee9: jmp        0x429cc0
0040deee: ret        
0040deef: nop        
0040def0: call       0x40df00
0040def5: jmp        0x40dfd0
0040defa: nop        
0040defb: nop        
0040defc: nop        
0040defd: nop        
0040defe: nop        
0040deff: nop        
0040df00: sub        esp, 8
0040df03: push       ebx
0040df04: mov        al, byte ptr [esp + 7]
0040df08: push       ebp
0040df09: push       esi
0040df0a: push       edi
0040df0b: xor        esi, esi
0040df0d: sub        esp, 0x10
0040df10: mov        edi, 0x68e6c8
0040df15: mov        ebp, esp
0040df17: or         ecx, 0xffffffff
0040df1a: mov        dword ptr [esp + 0x24], esp
0040df1e: mov        byte ptr [ebp], al
0040df21: xor        eax, eax
0040df23: mov        dword ptr [ebp + 4], esi
0040df26: mov        dword ptr [ebp + 8], esi
0040df29: mov        dword ptr [ebp + 0xc], esi
0040df2c: repne scasb al, byte ptr es:[edi]
0040df2e: not        ecx
0040df30: dec        ecx
0040df31: mov        ebx, ecx
0040df33: cmp        ebx, -3
0040df36: jbe        0x40df3d
0040df38: call       0x5fe5fb
0040df3d: mov        ecx, dword ptr [ebp + 4]
0040df40: cmp        ecx, esi
0040df42: je         0x40df62
0040df44: mov        al, byte ptr [ecx - 1]
0040df47: test       al, al
0040df49: je         0x40df62
0040df4b: cmp        al, 0xff
0040df4d: je         0x40df62
0040df4f: cmp        ebx, esi
0040df51: jne        0x40df86
0040df53: dec        al
0040df55: push       esi
0040df56: mov        byte ptr [ecx - 1], al
0040df59: mov        ecx, ebp
0040df5b: call       0x4040a0
0040df60: jmp        0x40dfb0
0040df62: cmp        ebx, esi
0040df64: jne        0x40df71
0040df66: push       1
0040df68: mov        ecx, ebp
0040df6a: call       0x4040a0
0040df6f: jmp        0x40dfb0
0040df71: mov        eax, dword ptr [ebp + 0xc]
0040df74: cmp        eax, 0x1f
0040df77: ja         0x40df7d
0040df79: cmp        eax, ebx
0040df7b: jae        0x40df8e
0040df7d: push       1
0040df7f: mov        ecx, ebp
0040df81: call       0x4040a0
0040df86: push       ebx
0040df87: mov        ecx, ebp
0040df89: call       0x401a60
0040df8e: mov        edi, dword ptr [ebp + 4]
0040df91: mov        ecx, ebx
0040df93: mov        edx, ecx
0040df95: mov        esi, 0x68e6c8
0040df9a: shr        ecx, 2
0040df9d: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040df9f: mov        ecx, edx
0040dfa1: and        ecx, 3
0040dfa4: rep movsb  byte ptr es:[edi], byte ptr [esi]
0040dfa6: mov        eax, dword ptr [ebp + 4]
0040dfa9: mov        dword ptr [ebp + 8], ebx
0040dfac: mov        byte ptr [eax + ebx], 0
0040dfb0: push       0x6b8df0
0040dfb5: mov        ecx, 0x6b4190
0040dfba: call       0x40c860
0040dfbf: pop        edi
0040dfc0: pop        esi
0040dfc1: pop        ebp
0040dfc2: pop        ebx
0040dfc3: add        esp, 8
0040dfc6: ret        
0040dfc7: nop        
0040dfc8: nop        
0040dfc9: nop        
0040dfca: nop        
0040dfcb: nop        
0040dfcc: nop        
0040dfcd: nop        
0040dfce: nop        
0040dfcf: nop        
0040dfd0: push       0x40dfe0
0040dfd5: call       0x60a57b
0040dfda: pop        ecx
0040dfdb: ret        
0040dfdc: nop        
0040dfdd: nop        
0040dfde: nop        
0040dfdf: nop        
0040dfe0: mov        cl, byte ptr [0x6b4230]
0040dfe6: mov        al, 0x10
0040dfe8: test       al, cl
0040dfea: jne        0x40dffe
0040dfec: or         cl, al
0040dfee: mov        byte ptr [0x6b4230], cl
0040dff4: mov        ecx, 0x6b4190
0040dff9: jmp        0x429cc0
0040dffe: ret        
0040dfff: nop        
0040e000: call       0x40e010
0040e005: jmp        0x40e0e0
0040e00a: nop        
0040e00b: nop        
0040e00c: nop        
0040e00d: nop        
0040e00e: nop        
0040e00f: nop        
0040e010: sub        esp, 8
0040e013: push       ebx
0040e014: mov        al, byte ptr [esp + 7]
0040e018: push       ebp
0040e019: push       esi
0040e01a: push       edi
0040e01b: xor        esi, esi
0040e01d: sub        esp, 0x10
0040e020: mov        edi, 0x68e6d4
0040e025: mov        ebp, esp
0040e027: or         ecx, 0xffffffff
0040e02a: mov        dword ptr [esp + 0x24], esp
0040e02e: mov        byte ptr [ebp], al
0040e031: xor        eax, eax
0040e033: mov        dword ptr [ebp + 4], esi
0040e036: mov        dword ptr [ebp + 8], esi
0040e039: mov        dword ptr [ebp + 0xc], esi
0040e03c: repne scasb al, byte ptr es:[edi]
0040e03e: not        ecx
0040e040: dec        ecx
0040e041: mov        ebx, ecx
0040e043: cmp        ebx, -3
0040e046: jbe        0x40e04d
0040e048: call       0x5fe5fb
0040e04d: mov        ecx, dword ptr [ebp + 4]
0040e050: cmp        ecx, esi
0040e052: je         0x40e072
0040e054: mov        al, byte ptr [ecx - 1]
0040e057: test       al, al
0040e059: je         0x40e072
0040e05b: cmp        al, 0xff
0040e05d: je         0x40e072
0040e05f: cmp        ebx, esi
0040e061: jne        0x40e096
0040e063: dec        al
0040e065: push       esi
0040e066: mov        byte ptr [ecx - 1], al
0040e069: mov        ecx, ebp
0040e06b: call       0x4040a0
0040e070: jmp        0x40e0c0
0040e072: cmp        ebx, esi
0040e074: jne        0x40e081
0040e076: push       1
0040e078: mov        ecx, ebp
0040e07a: call       0x4040a0
0040e07f: jmp        0x40e0c0
0040e081: mov        eax, dword ptr [ebp + 0xc]
0040e084: cmp        eax, 0x1f
0040e087: ja         0x40e08d
0040e089: cmp        eax, ebx
0040e08b: jae        0x40e09e
0040e08d: push       1
0040e08f: mov        ecx, ebp
0040e091: call       0x4040a0
0040e096: push       ebx
0040e097: mov        ecx, ebp
0040e099: call       0x401a60
0040e09e: mov        edi, dword ptr [ebp + 4]
0040e0a1: mov        ecx, ebx
0040e0a3: mov        edx, ecx
0040e0a5: mov        esi, 0x68e6d4
0040e0aa: shr        ecx, 2
0040e0ad: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040e0af: mov        ecx, edx
0040e0b1: and        ecx, 3
0040e0b4: rep movsb  byte ptr es:[edi], byte ptr [esi]
0040e0b6: mov        eax, dword ptr [ebp + 4]
0040e0b9: mov        dword ptr [ebp + 8], ebx
0040e0bc: mov        byte ptr [eax + ebx], 0
0040e0c0: push       0x6b8df0
0040e0c5: mov        ecx, 0x6b4168
0040e0ca: call       0x40c860
0040e0cf: pop        edi
0040e0d0: pop        esi
0040e0d1: pop        ebp
0040e0d2: pop        ebx
0040e0d3: add        esp, 8
0040e0d6: ret        
0040e0d7: nop        
0040e0d8: nop        
0040e0d9: nop        
0040e0da: nop        
0040e0db: nop        
0040e0dc: nop        
0040e0dd: nop        
0040e0de: nop        
0040e0df: nop        
0040e0e0: push       0x40e0f0
0040e0e5: call       0x60a57b
0040e0ea: pop        ecx
0040e0eb: ret        
0040e0ec: nop        
0040e0ed: nop        
0040e0ee: nop        
0040e0ef: nop        
0040e0f0: mov        cl, byte ptr [0x6b4230]
0040e0f6: mov        al, 0x20
0040e0f8: test       al, cl
0040e0fa: jne        0x40e10e
0040e0fc: or         cl, al
0040e0fe: mov        byte ptr [0x6b4230], cl
0040e104: mov        ecx, 0x6b4168
0040e109: jmp        0x429cc0
0040e10e: ret        
0040e10f: nop        
0040e110: push       -1
0040e112: push       0x620bd0
0040e117: mov        eax, dword ptr fs:[0]
0040e11d: push       eax
0040e11e: mov        dword ptr fs:[0], esp
0040e125: sub        esp, 0x24
0040e128: mov        al, byte ptr [esp + 0x38]
0040e12c: push       ebx
0040e12d: push       ebp
0040e12e: push       esi
0040e12f: mov        esi, dword ptr [0x64ac88]
0040e135: mov        dword ptr [esp + 0xc], ecx
0040e139: push       edi
0040e13a: mov        byte ptr [esp + 0x24], al
0040e13e: xor        ebx, ebx
0040e140: mov        edi, esi
0040e142: or         ecx, 0xffffffff
0040e145: xor        eax, eax
0040e147: mov        dword ptr [esp + 0x28], ebx
0040e14b: mov        dword ptr [esp + 0x2c], ebx
0040e14f: mov        dword ptr [esp + 0x30], ebx
0040e153: push       1
0040e155: repne scasb al, byte ptr es:[edi]
0040e157: not        ecx
0040e159: dec        ecx
0040e15a: mov        ebp, ecx
0040e15c: lea        ecx, [esp + 0x28]
0040e160: push       ebp
0040e161: call       0x401940
0040e166: test       al, al
0040e168: je         0x40e188
0040e16a: mov        edi, dword ptr [esp + 0x28]
0040e16e: mov        ecx, ebp
0040e170: mov        edx, ecx
0040e172: push       ebp
0040e173: shr        ecx, 2
0040e176: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040e178: mov        ecx, edx
0040e17a: and        ecx, 3
0040e17d: rep movsb  byte ptr es:[edi], byte ptr [esi]
0040e17f: lea        ecx, [esp + 0x28]
0040e183: call       0x404190
0040e188: mov        al, byte ptr [esp + 0x48]
0040e18c: mov        edx, dword ptr [0x64ac84]
0040e192: mov        byte ptr [esp + 0x14], al
0040e196: mov        edi, edx
0040e198: or         ecx, 0xffffffff
0040e19b: xor        eax, eax
0040e19d: mov        dword ptr [esp + 0x18], ebx
0040e1a1: mov        dword ptr [esp + 0x1c], ebx
0040e1a5: mov        dword ptr [esp + 0x20], ebx
0040e1a9: mov        dword ptr [esp + 0x3c], ebx
0040e1ad: repne scasb al, byte ptr es:[edi]
0040e1af: not        ecx
0040e1b1: dec        ecx
0040e1b2: push       ecx
0040e1b3: push       edx
0040e1b4: lea        ecx, [esp + 0x1c]
0040e1b8: call       0x4040f0
0040e1bd: mov        edx, dword ptr [esp + 0x48]
0040e1c1: mov        esi, dword ptr [esp + 0x10]
0040e1c5: lea        ecx, [esp + 0x24]
0040e1c9: lea        eax, [esp + 0x14]
0040e1cd: push       ecx
0040e1ce: mov        ecx, dword ptr [esp + 0x48]
0040e1d2: push       edx
0040e1d3: push       eax
0040e1d4: push       ecx
0040e1d5: mov        ecx, esi
0040e1d7: mov        byte ptr [esp + 0x4c], 1
0040e1dc: call       0x42b8b0
0040e1e1: mov        eax, dword ptr [esp + 0x18]
0040e1e5: cmp        eax, ebx
0040e1e7: je         0x40e206
0040e1e9: lea        ecx, [eax - 1]
0040e1ec: mov        al, byte ptr [eax - 1]
0040e1ef: cmp        al, bl
0040e1f1: je         0x40e1fd
0040e1f3: cmp        al, 0xff
0040e1f5: je         0x40e1fd
0040e1f7: dec        al
0040e1f9: mov        byte ptr [ecx], al
0040e1fb: jmp        0x40e206
0040e1fd: push       ecx
0040e1fe: call       0x5fe5f0
0040e203: add        esp, 4
0040e206: mov        eax, dword ptr [esp + 0x28]
0040e20a: mov        dword ptr [esp + 0x18], ebx
0040e20e: cmp        eax, ebx
0040e210: mov        dword ptr [esp + 0x1c], ebx
0040e214: mov        dword ptr [esp + 0x20], ebx
0040e218: je         0x40e237
0040e21a: lea        ecx, [eax - 1]
0040e21d: mov        al, byte ptr [eax - 1]
0040e220: cmp        al, bl
0040e222: je         0x40e22e
0040e224: cmp        al, 0xff
0040e226: je         0x40e22e
0040e228: dec        al
0040e22a: mov        byte ptr [ecx], al
0040e22c: jmp        0x40e237
0040e22e: push       ecx
0040e22f: call       0x5fe5f0
0040e234: add        esp, 4
0040e237: mov        ecx, dword ptr [esp + 0x34]
0040e23b: mov        byte ptr [esi + 0x224], bl
0040e241: mov        dword ptr [esi], 0x64ac90
0040e247: mov        eax, esi
0040e249: pop        edi
0040e24a: pop        esi
0040e24b: pop        ebp
0040e24c: pop        ebx
0040e24d: mov        dword ptr fs:[0], ecx
0040e254: add        esp, 0x30
0040e257: ret        8
0040e25a: nop        
0040e25b: nop        
0040e25c: nop        
0040e25d: nop        
0040e25e: nop        
0040e25f: nop        
0040e260: push       esi
0040e261: mov        esi, ecx
0040e263: call       0x40e280
0040e268: test       byte ptr [esp + 8], 1
0040e26d: je         0x40e278
0040e26f: push       esi
0040e270: call       0x5fe5f0
0040e275: add        esp, 4
0040e278: mov        eax, esi
0040e27a: pop        esi
0040e27b: ret        4
0040e27e: nop        
0040e27f: nop        
0040e280: push       -1
0040e282: push       0x620bfe
0040e287: mov        eax, dword ptr fs:[0]
0040e28d: push       eax
0040e28e: mov        dword ptr fs:[0], esp
0040e295: push       ecx
0040e296: push       ebx
0040e297: push       esi
0040e298: push       edi
0040e299: mov        edi, ecx
0040e29b: mov        dword ptr [esp + 0xc], edi
0040e29f: mov        eax, dword ptr [edi + 0x20c]
0040e2a5: lea        esi, [edi + 0x1f4]
0040e2ab: xor        ebx, ebx
0040e2ad: cmp        eax, ebx
0040e2af: mov        dword ptr [esp + 0x18], ebx
0040e2b3: je         0x40e2d2
0040e2b5: lea        ecx, [eax - 1]
0040e2b8: mov        al, byte ptr [eax - 1]
0040e2bb: cmp        al, bl
0040e2bd: je         0x40e2c9
0040e2bf: cmp        al, 0xff
0040e2c1: je         0x40e2c9
0040e2c3: dec        al
0040e2c5: mov        byte ptr [ecx], al
0040e2c7: jmp        0x40e2d2
0040e2c9: push       ecx
0040e2ca: call       0x5fe5f0
0040e2cf: add        esp, 4
0040e2d2: mov        ecx, esi
0040e2d4: mov        dword ptr [esi + 0x18], ebx
0040e2d7: mov        dword ptr [esi + 0x1c], ebx
0040e2da: mov        dword ptr [esi + 0x20], ebx
0040e2dd: call       0x5ab4d0
0040e2e2: mov        eax, dword ptr [edi + 0x1d8]
0040e2e8: lea        esi, [edi + 0x1c0]
0040e2ee: cmp        eax, ebx
0040e2f0: mov        dword ptr [esp + 0x18], 2
0040e2f8: je         0x40e317
0040e2fa: lea        ecx, [eax - 1]
0040e2fd: mov        al, byte ptr [eax - 1]
0040e300: cmp        al, bl
0040e302: je         0x40e30e
0040e304: cmp        al, 0xff
0040e306: je         0x40e30e
0040e308: dec        al
0040e30a: mov        byte ptr [ecx], al
0040e30c: jmp        0x40e317
0040e30e: push       ecx
0040e30f: call       0x5fe5f0
0040e314: add        esp, 4
0040e317: mov        ecx, esi
0040e319: mov        dword ptr [esi + 0x18], ebx
0040e31c: mov        dword ptr [esi + 0x1c], ebx
0040e31f: mov        dword ptr [esi + 0x20], ebx
0040e322: call       0x5ab4d0
0040e327: mov        eax, dword ptr [edi + 0x19c]
0040e32d: lea        esi, [edi + 0x184]
0040e333: cmp        eax, ebx
0040e335: mov        byte ptr [esp + 0x18], 1
0040e33a: je         0x40e359
0040e33c: lea        ecx, [eax - 1]
0040e33f: mov        al, byte ptr [eax - 1]
0040e342: cmp        al, bl
0040e344: je         0x40e350
0040e346: cmp        al, 0xff
0040e348: je         0x40e350
0040e34a: dec        al
0040e34c: mov        byte ptr [ecx], al
0040e34e: jmp        0x40e359
0040e350: push       ecx
0040e351: call       0x5fe5f0
0040e356: add        esp, 4
0040e359: mov        ecx, esi
0040e35b: mov        dword ptr [esi + 0x18], ebx
0040e35e: mov        dword ptr [esi + 0x1c], ebx
0040e361: mov        dword ptr [esi + 0x20], ebx
0040e364: call       0x5ab4d0
0040e369: mov        ecx, edi
0040e36b: mov        dword ptr [esp + 0x18], 0xffffffff
0040e373: call       0x4228d0
0040e378: mov        ecx, dword ptr [esp + 0x10]
0040e37c: pop        edi
0040e37d: pop        esi
0040e37e: pop        ebx
0040e37f: mov        dword ptr fs:[0], ecx
0040e386: add        esp, 0x10
0040e389: ret        
0040e38a: nop        
0040e38b: nop        
0040e38c: nop        
0040e38d: nop        
0040e38e: nop        
0040e38f: nop        
0040e390: mov        al, byte ptr [esp + 4]
0040e394: mov        byte ptr [ecx + 0x224], al
0040e39a: ret        4
0040e39d: nop        
0040e39e: nop        
0040e39f: nop        
0040e3a0: push       -1
0040e3a2: push       0x620c1b
0040e3a7: mov        eax, dword ptr fs:[0]
0040e3ad: push       eax
0040e3ae: mov        dword ptr fs:[0], esp
0040e3b5: push       ecx
0040e3b6: push       esi
0040e3b7: mov        esi, ecx
0040e3b9: push       0x34
0040e3bb: call       0x60a0b5
0040e3c0: add        esp, 4
0040e3c3: mov        dword ptr [esp + 4], eax
0040e3c7: test       eax, eax
0040e3c9: mov        dword ptr [esp + 0x10], 0
0040e3d1: je         0x40e3dd
0040e3d3: push       esi
0040e3d4: mov        ecx, eax
0040e3d6: call       0x404eb0
0040e3db: jmp        0x40e3df
0040e3dd: xor        eax, eax
0040e3df: push       eax
0040e3e0: mov        ecx, esi
0040e3e2: mov        dword ptr [esp + 0x14], 0xffffffff
0040e3ea: call       0x423710
0040e3ef: mov        ecx, dword ptr [esp + 8]
0040e3f3: pop        esi
0040e3f4: mov        dword ptr fs:[0], ecx
0040e3fb: add        esp, 0x10
0040e3fe: ret        
0040e3ff: nop        
0040e400: push       esi
0040e401: mov        esi, ecx
0040e403: mov        al, byte ptr [esi + 0x224]
0040e409: test       al, al
0040e40b: je         0x40e427
0040e40d: mov        eax, dword ptr [esp + 0x10]
0040e411: mov        ecx, dword ptr [esp + 0xc]
0040e415: mov        edx, dword ptr [esp + 8]
0040e419: push       eax
0040e41a: push       ecx
0040e41b: push       edx
0040e41c: mov        ecx, esi
0040e41e: call       0x4232a0
0040e423: pop        esi
0040e424: ret        0xc
0040e427: mov        eax, dword ptr [0x6b915c]
0040e42c: test       eax, eax
0040e42e: jne        0x40e435
0040e430: call       0x4bc480
0040e435: mov        ecx, eax
0040e437: call       0x40cf10
0040e43c: mov        ecx, 0x6b9950
0040e441: call       0x565870
0040e446: mov        dword ptr [esi + 0x168], eax
0040e44c: call       0x60a4a0
0040e451: and        eax, 0x80000001
0040e456: jns        0x40e45d
0040e458: dec        eax
0040e459: or         eax, 0xfffffffe
0040e45c: inc        eax
0040e45d: jne        0x40e471
0040e45f: mov        ecx, esi
0040e461: call       0x424e90
0040e466: mov        edx, dword ptr [eax]
0040e468: mov        ecx, eax
0040e46a: call       dword ptr [edx + 0x20]
0040e46d: pop        esi
0040e46e: ret        0xc
0040e471: mov        eax, dword ptr [esi]
0040e473: push       3
0040e475: mov        ecx, esi
0040e477: call       dword ptr [eax + 0xbc]
0040e47d: pop        esi
0040e47e: ret        0xc
0040e481: nop        
0040e482: nop        
0040e483: nop        
0040e484: nop        
0040e485: nop        
0040e486: nop        
0040e487: nop        
0040e488: nop        
0040e489: nop        
0040e48a: nop        
0040e48b: nop        
0040e48c: nop        
0040e48d: nop        
0040e48e: nop        
0040e48f: nop        
0040e490: sub        esp, 0x24
0040e493: push       ebx
0040e494: mov        ebx, ecx
0040e496: push       esi
0040e497: push       edi
0040e498: mov        eax, dword ptr [ebx]
0040e49a: call       dword ptr [eax + 0x9c]
0040e4a0: mov        edx, dword ptr [ebx]
0040e4a2: lea        esi, [eax + 0x11c]
0040e4a8: mov        ecx, 6
0040e4ad: lea        edi, [esp + 0x18]
0040e4b1: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040e4b3: mov        ecx, ebx
0040e4b5: call       dword ptr [edx + 0x9c]
0040e4bb: fld        dword ptr [eax + 0x150]
0040e4c1: fld        st(0)
0040e4c3: fmul       dword ptr [0x64ad60]
0040e4c9: mov        ecx, dword ptr [eax + 0x154]
0040e4cf: mov        edx, dword ptr [eax + 0x158]
0040e4d5: mov        dword ptr [esp + 0x10], ecx
0040e4d9: mov        dword ptr [esp + 0x14], edx
0040e4dd: mov        eax, dword ptr [ebx]
0040e4df: mov        ecx, ebx
0040e4e1: fstp       dword ptr [esp + 0x18]
0040e4e5: mov        dword ptr [esp + 0x1c], 0
0040e4ed: fmul       dword ptr [0x64ad5c]
0040e4f3: fstp       dword ptr [esp + 0x24]
0040e4f7: fld        dword ptr [esp + 0x10]
0040e4fb: fmul       dword ptr [0x64ad58]
0040e501: fstp       dword ptr [esp + 0x28]
0040e505: fld        dword ptr [esp + 0x14]
0040e509: fmul       dword ptr [0x64ad60]
0040e50f: fstp       dword ptr [esp + 0x20]
0040e513: fld        dword ptr [esp + 0x14]
0040e517: fmul       dword ptr [0x64ad5c]
0040e51d: fstp       dword ptr [esp + 0x2c]
0040e521: call       dword ptr [eax + 0x9c]
0040e527: mov        edi, eax
0040e529: mov        ecx, 6
0040e52e: add        edi, 0x11c
0040e534: lea        esi, [esp + 0x18]
0040e538: rep movsd  dword ptr es:[edi], dword ptr [esi]
0040e53a: pop        edi
0040e53b: pop        esi
0040e53c: pop        ebx
0040e53d: add        esp, 0x24
0040e540: ret        
0040e541: nop        
0040e542: nop        
0040e543: nop        
0040e544: nop        
0040e545: nop        
0040e546: nop        
0040e547: nop        
0040e548: nop        
0040e549: nop        
0040e54a: nop        
0040e54b: nop        
0040e54c: nop        
0040e54d: nop        
0040e54e: nop        
0040e54f: nop        
0040e550: mov        eax, dword ptr [esp + 4]
0040e554: cmp        eax, 6
0040e557: ja         0x40e565
0040e559: jmp        dword ptr [eax*4 + 0x40e56c]
0040e560: mov        al, 1
0040e562: ret        4
0040e565: xor        al, al
0040e567: ret        4
0040e56a: mov        edi, edi
0040e56c: pushal     
0040e56d: in         eax, 0x40
0040e56f: add        byte ptr [eax - 0x1b], ah
0040e572: inc        eax
0040e573: add        byte ptr [ebp - 0x1b], ah
0040e576: inc        eax
0040e577: add        byte ptr [ebp - 0x1b], ah
0040e57a: inc        eax
0040e57b: add        byte ptr [eax - 0x1b], ah
0040e57e: inc        eax
0040e57f: add        byte ptr [ebp - 0x1b], ah
0040e582: inc        eax
0040e583: add        byte ptr [eax - 0x1b], ah
0040e586: inc        eax
0040e587: add        byte ptr [eax - 0x6f6f6f70], dl
0040e58d: nop        
0040e58e: nop        
0040e58f: nop        
0040e590: mov        eax, dword ptr [esp + 4]
0040e594: push       esi
0040e595: cmp        eax, 4
0040e598: mov        esi, ecx
0040e59a: ja         0x40e62f
0040e5a0: jmp        dword ptr [eax*4 + 0x40e634]
0040e5a7: call       0x60a4a0
0040e5ac: and        eax, 0x80000001
0040e5b1: jns        0x40e5b8
0040e5b3: dec        eax
0040e5b4: or         eax, 0xfffffffe
0040e5b7: inc        eax
0040e5b8: mov        eax, 0x6b4238
0040e5bd: je         0x40e5c4
0040e5bf: mov        eax, 0x6b4208
0040e5c4: push       0x3f800000
0040e5c9: push       0
0040e5cb: push       eax
0040e5cc: mov        ecx, esi
0040e5ce: call       0x423be0
0040e5d3: pop        esi
0040e5d4: ret        4
0040e5d7: push       0x3f800000
0040e5dc: push       0
0040e5de: push       0x6b41e0
0040e5e3: mov        ecx, esi
0040e5e5: call       0x423be0
0040e5ea: pop        esi
0040e5eb: ret        4
0040e5ee: push       0x3f800000
0040e5f3: push       0
0040e5f5: push       0x6b41b8
0040e5fa: mov        ecx, esi
0040e5fc: call       0x423be0
0040e601: pop        esi
0040e602: ret        4
0040e605: push       0x3f800000
0040e60a: push       0
0040e60c: push       0x6b4190
0040e611: mov        ecx, esi
0040e613: call       0x423be0
0040e618: pop        esi
0040e619: ret        4
0040e61c: push       0x3f800000
0040e621: push       0
0040e623: push       0x6b4168
0040e628: mov        ecx, esi
0040e62a: call       0x423be0
0040e62f: pop        esi
0040e630: ret        4
0040e633: nop        
0040e634: cmpsd      dword ptr [esi], dword ptr es:[edi]
0040e635: in         eax, 0x40
0040e637: add        bh, dl
0040e639: in         eax, 0x40
0040e63b: add        dh, ch
0040e63d: in         eax, 0x40
0040e63f: add        byte ptr [0x1c0040e6], al
0040e645: out        0x40, al
0040e647: add        byte ptr [eax - 0x6f6f6f70], dl
0040e64d: nop        
0040e64e: nop        
0040e64f: nop        
0040e650: mov        eax, 0xe
0040e655: ret        
0040e656: nop        
0040e657: nop        
0040e658: nop        
0040e659: nop        
0040e65a: nop        
0040e65b: nop        
0040e65c: nop        
0040e65d: nop        
0040e65e: nop        
0040e65f: nop        
0040e660: mov        eax, 0x68e720
0040e665: ret        
0040e666: nop        
0040e667: nop        
0040e668: nop        
0040e669: nop        
0040e66a: nop        
0040e66b: nop        
0040e66c: nop        
0040e66d: nop        
0040e66e: nop        
0040e66f: nop        