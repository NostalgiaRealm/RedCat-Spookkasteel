/*
 * FUN_00442d80 at 00442d80
 * undefined FUN_00442d80(void)
 * Address ranges: 00442d80-00442d92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00442d80(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

