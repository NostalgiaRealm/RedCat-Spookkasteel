/*
 * FUN_005a1a70 at 005a1a70
 * undefined FUN_005a1a70(void)
 * Address ranges: 005a1a70-005a1a8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005a1a70(int param_1)

{
  if ((*(int *)(param_1 + 0x28) != 0) &&
     ((*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) & 0xfffffffcU) != 0)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x2c) + -4);
  }
  return 0;
}

