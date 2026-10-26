/*
 * FUN_00606ba5 at 00606ba5
 * undefined FUN_00606ba5(void)
 * Address ranges: 00606ba5-00606bca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606ba5(int param_1)

{
  DAT_0070fe98 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_00606e17);
  return param_1;
}

