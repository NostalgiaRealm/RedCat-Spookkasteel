/*
 * FUN_00544100 at 00544100
 * undefined FUN_00544100(void)
 * Address ranges: 00544100-0054412a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00544100(int param_1)

{
  while ((*(int *)(param_1 + 0x14) != 0 &&
         ((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) & 0xfffffff0U) != 0))) {
    FUN_00549170(0);
  }
  return;
}

