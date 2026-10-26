/*
 * FUN_00609bcd at 00609bcd
 * undefined FUN_00609bcd(void)
 * Address ranges: 00609bcd-00609bf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609bcd(int param_1)

{
  DAT_0070ff24 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609e5f);
  return param_1;
}

