/*
 * FUN_005b98a0 at 005b98a0
 * undefined FUN_005b98a0(void)
 * Address ranges: 005b98a0-005b98c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b98a0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0xa4);
  param_3[1] = *(undefined4 *)(param_2 + 0xa8);
  param_3[2] = *(undefined4 *)(param_2 + 0xac);
  return 1;
}

