005aaca0 MOV EAX,FS:[0x0]
005aaca6 PUSH -0x1
005aaca8 PUSH 0x645ae8
005aacad PUSH EAX
005aacae MOV dword ptr FS:[0x0],ESP
005aacb5 SUB ESP,0x10
005aacb8 PUSH EBX
005aacb9 PUSH EDI
005aacba MOV EDI,ECX
005aacbc XOR EBX,EBX
005aacbe CMP byte ptr [EDI + 0x5b],BL
005aacc1 JZ 0x005aadb3
005aacc7 CMP byte ptr [0x006cad54],BL
005aaccd JZ 0x005aadb3
005aacd3 PUSH ESI
005aacd4 PUSH 0x6cac38
005aacd9 CALL 0x005a7130
005aacde PUSH 0x6cac20
005aace3 CALL 0x005a70c0
005aace8 ADD ESP,0x8
005aaceb CALL 0x00517af0
005aacf0 MOV ESI,EAX
005aacf2 MOV EAX,dword ptr [ESI + 0x64]
005aacf5 CMP EAX,0x80000000
005aacfa JNZ 0x005aad14
005aacfc MOV EAX,dword ptr [ESI + 0x18]
005aacff CMP EAX,EBX
005aad01 JNZ 0x005aad08
005aad03 MOV EAX,0x64a3b4
005aad08 PUSH EAX
005aad09 CALL 0x0060af10
005aad0e ADD ESP,0x4
005aad11 MOV dword ptr [ESI + 0x64],EAX
005aad14 CMP EAX,EBX
005aad16 POP ESI
005aad17 JZ 0x005aad88
005aad19 MOV EAX,[0x006cac30]
005aad1e MOV ECX,dword ptr [0x006cac2c]
005aad24 MOV EDX,dword ptr [0x006cac28]
005aad2a PUSH EAX
005aad2b MOV EAX,[0x006cac24]
005aad30 PUSH ECX
005aad31 PUSH EDX
005aad32 PUSH EAX
005aad33 LEA ECX,[ESP + 0x18]
005aad37 PUSH 0x6a8c04
005aad3c PUSH ECX
005aad3d CALL 0x005ae390
005aad42 PUSH EAX
005aad43 MOV dword ptr [ESP + 0x3c],EBX
005aad47 CALL 0x005aff00
005aad4c MOV EAX,dword ptr [ESP + 0x28]
005aad50 ADD ESP,0x1c
005aad53 CMP EAX,EBX
005aad55 MOV dword ptr [ESP + 0x20],0xffffffff
005aad5d JZ 0x005aad7c
005aad5f LEA ECX,[EAX + -0x1]
005aad62 MOV AL,byte ptr [EAX + -0x1]
005aad65 CMP AL,BL
005aad67 JZ 0x005aad73
005aad69 CMP AL,0xff
005aad6b JZ 0x005aad73
005aad6d DEC AL
005aad6f MOV byte ptr [ECX],AL
005aad71 JMP 0x005aad7c
005aad73 PUSH ECX
005aad74 CALL 0x005fe5f0
005aad79 ADD ESP,0x4
005aad7c MOV dword ptr [ESP + 0xc],EBX
005aad80 MOV dword ptr [ESP + 0x10],EBX
005aad84 MOV dword ptr [ESP + 0x14],EBX
005aad88 MOV EDX,dword ptr [0x006cac24]
005aad8e MOV dword ptr [EDI + 0x6c],EDX
005aad91 MOV EAX,[0x006cac28]
005aad96 MOV dword ptr [EDI + 0x70],EAX
005aad99 MOV CL,byte ptr [0x006cac20]
005aad9f MOV byte ptr [EDI + 0x14],CL
005aada2 MOV DL,byte ptr [0x006cac21]
005aada8 MOV byte ptr [EDI + 0x15],DL
005aadab MOV AL,[0x006cac22]
005aadb0 MOV byte ptr [EDI + 0x16],AL
005aadb3 LEA ECX,[EDI + 0xb0]
005aadb9 CALL 0x005a6440
005aadbe MOV ECX,dword ptr [ESP + 0x18]
005aadc2 POP EDI
005aadc3 POP EBX
005aadc4 MOV dword ptr FS:[0x0],ECX
005aadcb ADD ESP,0x1c
005aadce RET
