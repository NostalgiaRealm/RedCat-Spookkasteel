/*
 * FUN_004a01d0 at 004a01d0
 * undefined FUN_004a01d0(void)
 * Address ranges: 004a01d0-004a01e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_004a01d0(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
}

