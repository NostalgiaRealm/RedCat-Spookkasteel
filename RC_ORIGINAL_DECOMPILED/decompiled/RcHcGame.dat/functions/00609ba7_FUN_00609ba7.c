/*
 * FUN_00609ba7 at 00609ba7
 * undefined FUN_00609ba7(void)
 * Address ranges: 00609ba7-00609bcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00609ba7(int param_1)

{
  DAT_0070ff20 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00609e14);
  return param_1;
}

