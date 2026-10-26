/*
 * FUN_00606c63 at 00606c63
 * undefined FUN_00606c63(void)
 * Address ranges: 00606c63-00606c88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606c63(int param_1)

{
  DAT_0070feac = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606f8e);
  return param_1;
}

