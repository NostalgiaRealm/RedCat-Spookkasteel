/*
 * FUN_00549ae0 at 00549ae0
 * undefined FUN_00549ae0(void)
 * Address ranges: 00549ae0-00549b02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00549ae0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
}

