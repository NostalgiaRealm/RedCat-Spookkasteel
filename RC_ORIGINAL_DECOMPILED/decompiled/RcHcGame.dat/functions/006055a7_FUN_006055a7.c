/*
 * FUN_006055a7 at 006055a7
 * undefined FUN_006055a7(void)
 * Address ranges: 006055a7-006055b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_006055a7(int param_1)

{
  **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + -1;
  **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + 2;
  return;
}

