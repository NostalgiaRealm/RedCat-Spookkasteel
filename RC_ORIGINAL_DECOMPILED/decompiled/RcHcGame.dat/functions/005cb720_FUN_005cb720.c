/*
 * FUN_005cb720 at 005cb720
 * undefined FUN_005cb720(void)
 * Address ranges: 005cb720-005cb766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cb720(int param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_006cc508 = 0;
  DAT_006cc510 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x114);
  DAT_006cc4c8 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 300);
  FUN_005cb770(param_1,param_2,param_3,0);
  return DAT_006cc508;
}

