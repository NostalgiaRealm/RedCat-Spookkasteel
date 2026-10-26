/*
 * FUN_10025090 at 10025090
 * undefined FUN_10025090(void)
 * Address ranges: 10025090-1002516c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10025090(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar5 = 0;
  iVar2 = FUN_10024f00();
  if (0 < iVar2) {
    iVar5 = FUN_10024ee0();
    iVar4 = iVar2 + -1;
    if (0 < iVar4) {
      do {
        FUN_10025220();
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
          goto LAB_1002510b;
        }
        iVar3 = 1;
LAB_10025126:
        FUN_10025170(iVar5 + 4 + iVar3 * 0x24,iVar5 + iVar4 * 0x24 + 0x14);
      }
      else {
LAB_1002510b:
        if (local_4 == 1) goto LAB_10025126;
        if (iVar4 == 0) {
          FUN_1001e2a0();
        }
        else {
          if (iVar4 != iVar2 + -1) goto LAB_10025126;
          FUN_1001e2a0();
        }
      }
      iVar4 = iVar1;
    } while (iVar1 < iVar2);
  }
  return;
}

