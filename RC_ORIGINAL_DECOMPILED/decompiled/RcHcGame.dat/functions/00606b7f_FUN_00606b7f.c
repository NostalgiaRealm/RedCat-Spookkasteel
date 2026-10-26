/*
 * FUN_00606b7f at 00606b7f
 * undefined FUN_00606b7f(void)
 * Address ranges: 00606b7f-00606ba4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606b7f(int param_1)

{
  DAT_0070fe94 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606dcc);
  return param_1;
}

