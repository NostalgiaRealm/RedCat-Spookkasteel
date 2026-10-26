/*
 * FUN_00509a00 at 00509a00
 * undefined FUN_00509a00(void)
 * Address ranges: 00509a00-00509a20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00509a00(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

