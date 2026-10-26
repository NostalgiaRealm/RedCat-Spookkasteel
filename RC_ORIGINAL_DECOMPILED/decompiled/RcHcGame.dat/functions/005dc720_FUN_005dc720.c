/*
 * FUN_005dc720 at 005dc720
 * undefined FUN_005dc720(void)
 * Address ranges: 005dc720-005dc7fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005dc720(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar5 = 0;
  iVar2 = FUN_0059b1e0();
  if (0 < iVar2) {
    iVar5 = FUN_005de6a0();
    iVar4 = iVar2 + -1;
    if (0 < iVar4) {
      do {
        FUN_005dc8b0();
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  local_4 = param_1;
  if (iVar2 < 3) {
    local_4 = 0;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = iVar4 + 1;
      iVar3 = iVar1;
      if (iVar1 == iVar2) {
        if (local_4 != 1) {
          iVar3 = iVar2 + -1;
          goto LAB_005dc79b;
        }
        iVar3 = 1;
LAB_005dc7b6:
        FUN_005dc800(iVar5 + 4 + iVar3 * 0x24,iVar5 + iVar4 * 0x24 + 0x14);
      }
      else {
LAB_005dc79b:
        if (local_4 == 1) goto LAB_005dc7b6;
        if (iVar4 == 0) {
          FUN_005b5e00();
        }
        else {
          if (iVar4 != iVar2 + -1) goto LAB_005dc7b6;
          FUN_005b5e00();
        }
      }
      iVar4 = iVar1;
    } while (iVar1 < iVar2);
  }
  return;
}

