/*
 * FUN_1000e4ea at 1000e4ea
 * undefined4 __cdecl FUN_1000e4ea(uint param_1, HANDLE param_2)
 * Address ranges: 1000e4ea-1000e565
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000e4ea(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_100ec800) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_100ec700)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_100ec14c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000e543;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1000e543:
      *(HANDLE *)((&DAT_100ec700)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1000e3b5();
  *pDVar1 = 9;
  pDVar1 = FUN_1000e3be();
  *pDVar1 = 0;
  return 0xffffffff;
}

