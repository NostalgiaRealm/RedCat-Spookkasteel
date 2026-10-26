/*
 * FUN_1000c4fa at 1000c4fa
 * undefined4 __cdecl FUN_1000c4fa(uint param_1, HANDLE param_2)
 * Address ranges: 1000c4fa-1000c575
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000c4fa(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_101c3dc0) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_101c3cc0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_101c3710 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000c553;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1000c553:
      *(HANDLE *)((&DAT_101c3cc0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1000c3c5();
  *pDVar1 = 9;
  pDVar1 = FUN_1000c3ce();
  *pDVar1 = 0;
  return 0xffffffff;
}

