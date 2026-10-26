/*
 * FUN_006004a4 at 006004a4
 * undefined FUN_006004a4(void)
 * Address ranges: 006004a4-006004b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_006004a4(int param_1)

{
  **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + -1;
  **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + 1;
  return;
}

