/*
 * FUN_00548c30 at 00548c30
 * undefined FUN_00548c30(void)
 * Address ranges: 00548c30-00548c50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00548c30(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}

