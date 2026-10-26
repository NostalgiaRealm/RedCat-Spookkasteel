/*
 * FUN_00606caf at 00606caf
 * undefined FUN_00606caf(void)
 * Address ranges: 00606caf-00606cd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606caf(int param_1)

{
  DAT_0070feb4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00607024);
  return param_1;
}

