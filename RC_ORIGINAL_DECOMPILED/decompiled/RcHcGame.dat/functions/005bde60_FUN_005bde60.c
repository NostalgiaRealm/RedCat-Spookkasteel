/*
 * FUN_005bde60 at 005bde60
 * undefined FUN_005bde60(void)
 * Address ranges: 005bde60-005bded9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005bde60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
        do {
          iVar2 = FUN_005bde60(param_2);
          if (iVar2 != 0) {
            return 1;
          }
          iVar2 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar2;
        } while (iVar2 < *(int *)(param_1 + 0x10));
      }
    }
    else if ((iVar2 == 2) && (*(int *)(param_1 + 0x18) != 0)) {
      uVar1 = FUN_005d7800(param_2);
      return uVar1;
    }
  }
  return 0;
}

