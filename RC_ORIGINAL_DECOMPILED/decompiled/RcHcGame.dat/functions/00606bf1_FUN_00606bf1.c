/*
 * FUN_00606bf1 at 00606bf1
 * undefined FUN_00606bf1(void)
 * Address ranges: 00606bf1-00606c16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606bf1(int param_1)

{
  DAT_0070fea0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606ead);
  return param_1;
}

