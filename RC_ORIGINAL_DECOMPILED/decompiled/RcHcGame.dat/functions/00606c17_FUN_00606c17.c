/*
 * FUN_00606c17 at 00606c17
 * undefined FUN_00606c17(void)
 * Address ranges: 00606c17-00606c3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606c17(int param_1)

{
  DAT_0070fea4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606ef8);
  return param_1;
}

