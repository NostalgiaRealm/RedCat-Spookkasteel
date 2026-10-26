/*
 * FUN_005e90b0 at 005e90b0
 * undefined FUN_005e90b0(void)
 * Address ranges: 005e90b0-005e90d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005e90b0(int param_1)

{
  DAT_0070fb00 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(&LAB_005e9140);
  return param_1;
}

