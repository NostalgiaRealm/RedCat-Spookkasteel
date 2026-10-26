/*
 * FUN_00515010 at 00515010
 * undefined FUN_00515010(void)
 * Address ranges: 00515010-00515030
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00515010(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}

