/*
 * FUN_005e5c90 at 005e5c90
 * undefined FUN_005e5c90(void)
 * Address ranges: 005e5c90-005e5cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005e5c90(int param_1)

{
  DAT_0070faf0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(&LAB_005e5cc0);
  return param_1;
}

