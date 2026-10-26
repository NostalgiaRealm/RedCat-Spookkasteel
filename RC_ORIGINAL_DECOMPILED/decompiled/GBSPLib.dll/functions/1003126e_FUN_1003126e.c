/*
 * FUN_1003126e at 1003126e
 * undefined FUN_1003126e(void)
 * Address ranges: 1003126e-100312ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003126e(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1052aac0) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1052a9c0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1052a3e8 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100312ca;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100312ca:
      *(undefined4 *)((&DAT_1052a9c0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_1002b3dc();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1002b3e5();
  *puVar2 = 0;
  return 0xffffffff;
}

