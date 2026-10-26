/*
 * FUN_004ef000 at 004ef000
 * undefined FUN_004ef000(void)
 * Address ranges: 004ef000-004ef02a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004ef000(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  FUN_005ab4a0();
  uVar1 = *param_2;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 5) = uVar1;
  *param_1 = &PTR_FUN_0064f3d0;
  return param_1;
}

