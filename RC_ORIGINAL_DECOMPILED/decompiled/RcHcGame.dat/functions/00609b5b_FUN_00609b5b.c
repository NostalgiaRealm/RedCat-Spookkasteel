/*
 * FUN_00609b5b at 00609b5b
 * undefined FUN_00609b5b(void)
 * Address ranges: 00609b5b-00609b80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609b5b(int param_1)

{
  DAT_0070ff18 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609d7e);
  return param_1;
}

