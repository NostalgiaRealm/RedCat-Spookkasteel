/*
 * FUN_0044e4c0 at 0044e4c0
 * undefined FUN_0044e4c0(void)
 * Address ranges: 0044e4c0-0044e4d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0044e4c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

