/*
 * FUN_005a5740 at 005a5740
 * undefined FUN_005a5740(void)
 * Address ranges: 005a5740-005a5790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005a5740(undefined4 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  *(undefined1 *)(param_1 + 5) = param_2._0_1_;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 9) = param_2._0_1_;
  return param_1;
}

