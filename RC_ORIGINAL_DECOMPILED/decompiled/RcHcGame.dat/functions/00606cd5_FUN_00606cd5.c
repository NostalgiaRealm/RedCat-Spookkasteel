/*
 * FUN_00606cd5 at 00606cd5
 * undefined FUN_00606cd5(void)
 * Address ranges: 00606cd5-00606cfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00606cd5(int param_1)

{
  DAT_0070feb8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(FUN_0060706f);
  return param_1;
}

