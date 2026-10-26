/*
 * FUN_005508a0 at 005508a0
 * undefined FUN_005508a0(void)
 * Address ranges: 005508a0-005508df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005508a0(undefined4 *param_1,undefined4 param_2)

{
  FUN_005ab4a0();
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = (undefined1)param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &LAB_005666b0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = param_2;
  *param_1 = &PTR_FUN_0064f810;
  return param_1;
}

