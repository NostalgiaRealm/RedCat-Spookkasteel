/*
 * FUN_10007f1d at 10007f1d
 * undefined4 __cdecl FUN_10007f1d(uint param_1, HANDLE param_2)
 * Address ranges: 10007f1d-10007f98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10007f1d(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_101f5a80) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_100e3a78 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10007f76;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_10007f76:
      *(HANDLE *)((&DAT_101f5980)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_10007de8();
  *pDVar1 = 9;
  pDVar1 = FUN_10007df1();
  *pDVar1 = 0;
  return 0xffffffff;
}

