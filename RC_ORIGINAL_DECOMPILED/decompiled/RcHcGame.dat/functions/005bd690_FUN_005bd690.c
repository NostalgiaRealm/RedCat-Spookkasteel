/*
 * FUN_005bd690 at 005bd690
 * undefined FUN_005bd690(void)
 * Address ranges: 005bd690-005bd6f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005bd690(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      iVar3 = 1;
      if (0 < *(int *)(param_1 + 0x10)) {
        iVar1 = FUN_005bd690();
        if (1 < *(int *)(param_1 + 0x10)) {
          do {
            iVar2 = FUN_005bd690();
            if (iVar2 != iVar1) {
              return 0;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x10));
        }
        return iVar1;
      }
    }
    else if (iVar3 == 2) {
      return *(int *)(param_1 + 0x14);
    }
  }
  return 0;
}

