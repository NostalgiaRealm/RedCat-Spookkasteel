/*
 * FUN_005e56b0 at 005e56b0
 * undefined FUN_005e56b0(void)
 * Address ranges: 005e56b0-005e56cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e56b0(int param_1,int param_2,int param_3)

{
  **(int **)(param_1 + 0x10) = param_2;
  **(int **)(param_1 + 0x20) = param_2;
  **(int **)(param_1 + 0x30) = param_3 - param_2;
  return;
}

