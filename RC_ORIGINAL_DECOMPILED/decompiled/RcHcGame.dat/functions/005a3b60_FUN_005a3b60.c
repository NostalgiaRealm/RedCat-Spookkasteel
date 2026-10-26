/*
 * FUN_005a3b60 at 005a3b60
 * undefined FUN_005a3b60(void)
 * Address ranges: 005a3b60-005a3b72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005a3b60(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2;
}

