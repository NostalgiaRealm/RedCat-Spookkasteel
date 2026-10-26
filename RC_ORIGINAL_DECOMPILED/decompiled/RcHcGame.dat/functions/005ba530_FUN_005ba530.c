/*
 * FUN_005ba530 at 005ba530
 * undefined FUN_005ba530(void)
 * Address ranges: 005ba530-005ba558
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ba530(int param_1)

{
  if (*(int *)(param_1 + 0xc1c) != 0) {
    FUN_005d6ba0(*(int *)(param_1 + 0xc1c));
    *(undefined4 *)(param_1 + 0xc1c) = 0;
  }
  return 1;
}

