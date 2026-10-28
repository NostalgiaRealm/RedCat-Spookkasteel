005aa220 MOV EAX,dword ptr [ESP + 0xc]
005aa224 PUSH ESI
005aa225 MOV ESI,ECX
005aa227 PUSH EAX
005aa228 CALL 0x005aac70
005aa22d TEST AL,AL
005aa22f JZ 0x005aa255
005aa231 MOV EDX,dword ptr [ESP + 0x8]
005aa235 MOV ECX,dword ptr [ESI + 0x6c]
005aa238 MOV dword ptr [EDX],ECX
005aa23a MOV ECX,dword ptr [ESP + 0xc]
005aa23e MOV EAX,dword ptr [ESI + 0x70]
005aa241 MOV dword ptr [ECX],EAX
005aa243 MOV dword ptr [ESI + 0x6c],0x0
005aa24a MOV dword ptr [ESI + 0x70],0x0
005aa251 POP ESI
005aa252 RET 0xc
005aa255 MOV EDX,dword ptr [ESP + 0xc]
005aa259 MOV EAX,dword ptr [ESP + 0x8]
005aa25d POP ESI
005aa25e MOV dword ptr [EDX],0x0
005aa264 MOV dword ptr [EAX],0x0
005aa26a RET 0xc
