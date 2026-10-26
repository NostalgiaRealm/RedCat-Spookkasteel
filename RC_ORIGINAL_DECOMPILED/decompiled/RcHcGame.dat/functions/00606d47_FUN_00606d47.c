/*
 * FUN_00606d47 at 00606d47
 * undefined FUN_00606d47(void)
 * Address ranges: 00606d47-00606d6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606d47(int param_1)

{
  DAT_0070fec4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00607150);
  return param_1;
}

