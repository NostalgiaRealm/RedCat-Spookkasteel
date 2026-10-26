/*
 * FUN_005f0020 at 005f0020
 * undefined FUN_005f0020(void)
 * Address ranges: 005f0020-005f004b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f0020(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != *(int *)(param_1 + 0x48)) {
    do {
      (**(code **)(**(int **)(iVar1 + -4) + 0x5c))(param_2);
      iVar1 = iVar1 + -4;
    } while (iVar1 != *(int *)(param_1 + 0x48));
  }
  return;
}

