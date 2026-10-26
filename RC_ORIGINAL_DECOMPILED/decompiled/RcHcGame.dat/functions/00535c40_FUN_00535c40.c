/*
 * FUN_00535c40 at 00535c40
 * undefined FUN_00535c40(void)
 * Address ranges: 00535c40-00535c52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00535c40(int param_1)

{
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
}

