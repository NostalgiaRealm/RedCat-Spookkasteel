/*
 * FUN_004c4a60 at 004c4a60
 * undefined FUN_004c4a60(void)
 * Address ranges: 004c4a60-004c4a72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_004c4a60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 6;
}

