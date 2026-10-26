/*
 * FUN_00606c89 at 00606c89
 * undefined FUN_00606c89(void)
 * Address ranges: 00606c89-00606cae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606c89(int param_1)

{
  DAT_0070feb0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606fd9);
  return param_1;
}

