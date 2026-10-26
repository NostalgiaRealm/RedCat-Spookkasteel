/*
 * FUN_005e9110 at 005e9110
 * undefined FUN_005e9110(void)
 * Address ranges: 005e9110-005e9137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005e9110(int param_1)

{
  DAT_0070fb08 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(&LAB_005e9200);
  return param_1;
}

