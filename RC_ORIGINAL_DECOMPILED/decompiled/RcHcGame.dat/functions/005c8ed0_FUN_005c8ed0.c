/*
 * FUN_005c8ed0 at 005c8ed0
 * undefined FUN_005c8ed0(void)
 * Address ranges: 005c8ed0-005c8f06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c8ed0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    while (*(int *)(iVar2 + 4) != param_2) {
      for (iVar1 = *(int *)(iVar2 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
        if (*(int *)(iVar1 + 4) == param_2) {
          if (iVar1 != 0) {
            return iVar1;
          }
          break;
        }
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return iVar2;
}

