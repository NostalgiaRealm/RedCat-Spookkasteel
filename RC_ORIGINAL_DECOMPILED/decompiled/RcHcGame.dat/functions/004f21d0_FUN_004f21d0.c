/*
 * FUN_004f21d0 at 004f21d0
 * undefined FUN_004f21d0(void)
 * Address ranges: 004f21d0-004f21e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_004f21d0(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2;
}

