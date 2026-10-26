/*
 * FUN_004574b0 at 004574b0
 * undefined FUN_004574b0(void)
 * Address ranges: 004574b0-004574d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_004574b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50;
}

