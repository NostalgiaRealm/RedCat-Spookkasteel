/*
 * FUN_00609b0f at 00609b0f
 * undefined FUN_00609b0f(void)
 * Address ranges: 00609b0f-00609b34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609b0f(int param_1)

{
  DAT_0070ff10 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609ce8);
  return param_1;
}

