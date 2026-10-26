/*
 * FUN_0061de33 at 0061de33
 * undefined FUN_0061de33(void)
 * Address ranges: 0061de33-0061deac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061de33(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00747c60) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_00747b60)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_006b2694 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0061de8c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0061de8c:
      *(undefined4 *)((&DAT_00747b60)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  DAT_0070ff9c = 0;
  DAT_0070ff98 = 9;
  return 0xffffffff;
}

