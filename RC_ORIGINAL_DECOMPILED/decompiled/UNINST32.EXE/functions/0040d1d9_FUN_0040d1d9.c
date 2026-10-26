/*
 * FUN_0040d1d9 at 0040d1d9
 * undefined4 __cdecl FUN_0040d1d9(uint param_1, HANDLE param_2)
 * Address ranges: 0040d1d9-0040d24f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040d1d9(uint param_1,HANDLE param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00413f00) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_00413134 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040d22f;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0040d22f:
      *(HANDLE *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return 0xffffffff;
}

