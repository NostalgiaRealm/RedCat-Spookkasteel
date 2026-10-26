/*
 * FUN_00609ac3 at 00609ac3
 * undefined FUN_00609ac3(void)
 * Address ranges: 00609ac3-00609ae8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609ac3(int param_1)

{
  DAT_0070ff08 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609c52);
  return param_1;
}

