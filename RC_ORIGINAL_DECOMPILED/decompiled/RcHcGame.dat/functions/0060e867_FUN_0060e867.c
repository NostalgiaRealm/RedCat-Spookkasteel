/*
 * FUN_0060e867 at 0060e867
 * undefined FUN_0060e867(void)
 * Address ranges: 0060e867-0060e924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060e867(void)

{
  DWORD nLength;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  DWORD local_c;
  DWORD local_8;
  
  if (DAT_006b2c50 == -1) {
    if (DAT_006b3b80 == (HANDLE)0xfffffffe) {
      FUN_0061cbc8();
    }
    if (DAT_006b3b80 != (HANDLE)0xffffffff) {
      psVar5 = (short *)&stack0xffffffec;
      BVar1 = GetNumberOfConsoleInputEvents(DAT_006b3b80,&local_c);
      nLength = local_c;
      if ((BVar1 != 0) && (local_c != 0)) {
        FUN_0060df70();
        if (&stack0x00000000 != (undefined1 *)0x14) {
          BVar1 = PeekConsoleInputA(DAT_006b3b80,(PINPUT_RECORD)&stack0xffffffec,nLength,&local_8);
          if ((((BVar1 != 0) && (local_8 != 0)) && (local_8 <= local_c)) && (local_8 != 0)) {
            piVar4 = (int *)&stack0xfffffff0;
            do {
              if ((*psVar5 == 1) && (*piVar4 != 0)) {
                if (*(char *)((int)piVar4 + 10) != '\0') goto LAB_0060e920;
                iVar2 = FUN_0060e925(piVar4);
                if (iVar2 != 0) goto LAB_0060e920;
              }
              local_8 = local_8 - 1;
              psVar5 = psVar5 + 10;
              piVar4 = piVar4 + 5;
            } while (local_8 != 0);
          }
        }
      }
    }
    uVar3 = 0;
  }
  else {
LAB_0060e920:
    uVar3 = 1;
  }
  return uVar3;
}

