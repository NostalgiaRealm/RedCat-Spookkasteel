/*
 * FUN_005e90e0 at 005e90e0
 * undefined FUN_005e90e0(void)
 * Address ranges: 005e90e0-005e9107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005e90e0(int param_1)

{
  DAT_0070fb04 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(&LAB_005e91a0);
  return param_1;
}

