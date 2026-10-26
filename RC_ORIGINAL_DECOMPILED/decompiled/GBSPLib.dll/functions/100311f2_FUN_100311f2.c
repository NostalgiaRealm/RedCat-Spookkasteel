/*
 * FUN_100311f2 at 100311f2
 * undefined FUN_100311f2(void)
 * Address ranges: 100311f2-1003126d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100311f2(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1052aac0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_1052a9c0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_1052a3e8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1003124b;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1003124b:
      *(HANDLE *)((&DAT_1052a9c0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_1002b3dc();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_1002b3e5();
  *puVar1 = 0;
  return 0xffffffff;
}

