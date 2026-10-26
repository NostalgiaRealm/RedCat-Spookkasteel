/*
 * FUN_00606d21 at 00606d21
 * undefined FUN_00606d21(void)
 * Address ranges: 00606d21-00606d46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606d21(int param_1)

{
  DAT_0070fec0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00607105);
  return param_1;
}

