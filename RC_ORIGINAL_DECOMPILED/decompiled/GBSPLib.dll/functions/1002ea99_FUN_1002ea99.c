/*
 * FUN_1002ea99 at 1002ea99
 * undefined FUN_1002ea99(void)
 * Address ranges: 1002ea99-1002eb38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002ea99(LPVOID param_1)

{
  if (DAT_1003f438 != 0xffffffff) {
    if ((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_1003f438), param_1 != (LPVOID)0x0)) {
      if (*(int *)((int)param_1 + 0x24) != 0) {
        FUN_100284b6(*(int *)((int)param_1 + 0x24));
      }
      if (*(int *)((int)param_1 + 0x28) != 0) {
        FUN_100284b6(*(int *)((int)param_1 + 0x28));
      }
      if (*(int *)((int)param_1 + 0x30) != 0) {
        FUN_100284b6(*(int *)((int)param_1 + 0x30));
      }
      if (*(int *)((int)param_1 + 0x38) != 0) {
        FUN_100284b6(*(int *)((int)param_1 + 0x38));
      }
      if (*(int *)((int)param_1 + 0x40) != 0) {
        FUN_100284b6(*(int *)((int)param_1 + 0x40));
      }
      if (*(int *)((int)param_1 + 0x44) != 0) {
        FUN_100284b6(*(int *)((int)param_1 + 0x44));
      }
      if (*(undefined **)((int)param_1 + 0x50) != &DAT_1003f770) {
        FUN_100284b6(*(undefined **)((int)param_1 + 0x50));
      }
      FUN_100284b6(param_1);
    }
    TlsSetValue(DAT_1003f438,(LPVOID)0x0);
    return;
  }
  return;
}

