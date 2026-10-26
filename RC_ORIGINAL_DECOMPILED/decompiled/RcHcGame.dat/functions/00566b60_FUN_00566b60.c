/*
 * FUN_00566b60 at 00566b60
 * undefined FUN_00566b60(void)
 * Address ranges: 00566b60-00566b72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00566b60(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

