/*
 * FUN_00609ae9 at 00609ae9
 * undefined FUN_00609ae9(void)
 * Address ranges: 00609ae9-00609b0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609ae9(int param_1)

{
  DAT_0070ff0c = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609c9d);
  return param_1;
}

