/*
 * FUN_00548d10 at 00548d10
 * undefined FUN_00548d10(void)
 * Address ranges: 00548d10-00548d22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00548d10(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3;
}

