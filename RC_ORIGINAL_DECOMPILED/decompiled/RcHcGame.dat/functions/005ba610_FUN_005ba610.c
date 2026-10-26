/*
 * FUN_005ba610 at 005ba610
 * undefined FUN_005ba610(void)
 * Address ranges: 005ba610-005ba630
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ba610(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_005d4110(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c8),param_2);
  return;
}

