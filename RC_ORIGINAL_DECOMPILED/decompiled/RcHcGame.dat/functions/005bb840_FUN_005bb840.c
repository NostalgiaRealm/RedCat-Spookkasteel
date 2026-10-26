/*
 * FUN_005bb840 at 005bb840
 * undefined FUN_005bb840(void)
 * Address ranges: 005bb840-005bb868
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bb840(int param_1)

{
  if (*(int *)(param_1 + 0x39058) != 0) {
    FUN_005d6ba0(*(int *)(param_1 + 0x39058));
    *(undefined4 *)(param_1 + 0x39058) = 0;
  }
  return 1;
}

