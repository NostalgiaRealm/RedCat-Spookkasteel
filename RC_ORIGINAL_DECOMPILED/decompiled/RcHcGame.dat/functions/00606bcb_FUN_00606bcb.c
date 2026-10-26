/*
 * FUN_00606bcb at 00606bcb
 * undefined FUN_00606bcb(void)
 * Address ranges: 00606bcb-00606bf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606bcb(int param_1)

{
  DAT_0070fe9c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606e62);
  return param_1;
}

