/*
 * FUN_005c9530 at 005c9530
 * undefined FUN_005c9530(void)
 * Address ranges: 005c9530-005c9551
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005c9530(int param_1,int param_2)

{
  FUN_005c9560(param_1);
  *(uint *)(&DAT_006cc4a4 + param_1 * 4) = (uint)(param_2 == 0);
  return;
}

