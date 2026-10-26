/*
 * FUN_00609b81 at 00609b81
 * undefined FUN_00609b81(void)
 * Address ranges: 00609b81-00609ba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609b81(int param_1)

{
  DAT_0070ff1c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609dc9);
  return param_1;
}

