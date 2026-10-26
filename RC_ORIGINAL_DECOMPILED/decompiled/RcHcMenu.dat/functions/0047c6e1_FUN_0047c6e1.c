/*
 * FUN_0047c6e1 at 0047c6e1
 * int __register FUN_0047c6e1(void)
 * Address ranges: 0047c6e1-0047c760
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0047c6e1(void)

{
  FARPROC pFVar1;
  int iVar2;
  short *psVar3;
  undefined4 *puVar4;
  
  pFVar1 = GetProcAddress(DAT_005713b0,s_DbiExit_00571482);
  if (pFVar1 == (FARPROC)0x0) {
    iVar2 = 0x274f;
  }
  else {
    iVar2 = (*pFVar1)();
    if ((short)iVar2 == 0) {
      if (DAT_005713b4 != 0) {
        psVar3 = (short *)FUN_0047c203();
        if (psVar3 != (short *)0x0) {
          *psVar3 = *psVar3 + -1;
        }
        if (DAT_005713b4 == 0) {
          puVar4 = (undefined4 *)FUN_0047c203();
          FreeLibrary(DAT_005713b0);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
          }
          FUN_0047c20d();
        }
        FUN_0047c20d();
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

