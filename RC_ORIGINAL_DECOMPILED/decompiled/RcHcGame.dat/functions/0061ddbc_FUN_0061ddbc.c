/*
 * FUN_0061ddbc at 0061ddbc
 * undefined FUN_0061ddbc(void)
 * Address ranges: 0061ddbc-0061de32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061ddbc(uint param_1,HANDLE param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00747c60) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_00747b60)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_006b2694 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0061de12;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0061de12:
      *(HANDLE *)((&DAT_00747b60)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  DAT_0070ff9c = 0;
  DAT_0070ff98 = 9;
  return 0xffffffff;
}

