/*
 * FUN_0054a040 at 0054a040
 * undefined FUN_0054a040(void)
 * Address ranges: 0054a040-0054a052
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0054a040(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

