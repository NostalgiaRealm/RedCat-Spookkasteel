/*
 * FUN_00606c3d at 00606c3d
 * undefined FUN_00606c3d(void)
 * Address ranges: 00606c3d-00606c62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606c3d(int param_1)

{
  DAT_0070fea8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606f43);
  return param_1;
}

