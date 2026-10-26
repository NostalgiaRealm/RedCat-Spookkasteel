/*
 * Ctl3dIsAutoSubclass at 5f001860
 * undefined4 __stdcall Ctl3dIsAutoSubclass(void)
 * Address ranges: 5f001860-5f00188d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Ctl3dIsAutoSubclass(void)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
                    /* 0x1860  23  Ctl3dIsAutoSubclass */
  DVar1 = GetCurrentThreadId();
  iVar3 = 0;
  if (0 < DAT_5f00529c) {
    pDVar2 = &DAT_5f0052a4;
    do {
      if (*pDVar2 == DVar1) {
        return 1;
      }
      pDVar2 = pDVar2 + 5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_5f00529c);
  }
  return 0;
}

