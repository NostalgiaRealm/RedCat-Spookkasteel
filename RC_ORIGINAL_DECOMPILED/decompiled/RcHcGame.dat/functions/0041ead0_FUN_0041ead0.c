/*
 * FUN_0041ead0 at 0041ead0
 * undefined FUN_0041ead0(void)
 * Address ranges: 0041ead0-0041eaef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_0041ead0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

