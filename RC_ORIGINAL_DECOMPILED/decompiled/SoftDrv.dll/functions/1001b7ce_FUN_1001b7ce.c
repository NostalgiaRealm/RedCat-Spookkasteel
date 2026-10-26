/*
 * FUN_1001b7ce at 1001b7ce
 * undefined FUN_1001b7ce(void)
 * Address ranges: 1001b7ce-1001b86d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b7ce(LPVOID param_1)

{
  if (DAT_10023aa8 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_10023aa8), param_1 != (LPVOID)0x0)) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x24));
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x28));
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x30));
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x38));
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x40));
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_10018dc8(*(int *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_10024040) {
        FUN_10018dc8(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_10018dc8(param_1);
    }
    TlsSetValue(DAT_10023aa8,(LPVOID)0x0);
    return;
  }
  return;
}

