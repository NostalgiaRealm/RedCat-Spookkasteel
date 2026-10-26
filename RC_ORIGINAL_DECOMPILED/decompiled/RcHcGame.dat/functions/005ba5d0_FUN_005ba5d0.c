/*
 * FUN_005ba5d0 at 005ba5d0
 * undefined FUN_005ba5d0(void)
 * Address ranges: 005ba5d0-005ba603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ba5d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc1c) == 0) {
    return 0;
  }
  iVar1 = FUN_005d6e50(*(int *)(param_1 + 0xc1c),param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc54) = 1;
  }
  return 1;
}

