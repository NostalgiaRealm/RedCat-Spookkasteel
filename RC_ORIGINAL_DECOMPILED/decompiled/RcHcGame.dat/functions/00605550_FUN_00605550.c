/*
 * FUN_00605550 at 00605550
 * undefined FUN_00605550(void)
 * Address ranges: 00605550-0060555f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00605550(int param_1)

{
  **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + -1;
  **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + 2;
  return;
}

