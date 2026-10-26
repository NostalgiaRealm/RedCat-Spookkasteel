/*
 * FUN_00609b35 at 00609b35
 * undefined FUN_00609b35(void)
 * Address ranges: 00609b35-00609b5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609b35(int param_1)

{
  DAT_0070ff14 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609d33);
  return param_1;
}

