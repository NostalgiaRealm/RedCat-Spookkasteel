/*
 * FUN_00600ae4 at 00600ae4
 * undefined FUN_00600ae4(void)
 * Address ranges: 00600ae4-00600b09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00600ae4(int param_1)

{
  DAT_0070fc24 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_0060a57b(&LAB_00600b0a);
  return param_1;
}

