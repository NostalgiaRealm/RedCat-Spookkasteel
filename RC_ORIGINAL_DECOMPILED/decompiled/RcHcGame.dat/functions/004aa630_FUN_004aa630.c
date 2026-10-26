/*
 * FUN_004aa630 at 004aa630
 * undefined FUN_004aa630(void)
 * Address ranges: 004aa630-004aa650
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_004aa630(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
}

