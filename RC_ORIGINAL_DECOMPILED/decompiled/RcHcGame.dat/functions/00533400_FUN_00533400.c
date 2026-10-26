/*
 * FUN_00533400 at 00533400
 * undefined FUN_00533400(void)
 * Address ranges: 00533400-00533412
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00533400(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
}

