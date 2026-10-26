/*
 * FUN_00538690 at 00538690
 * undefined FUN_00538690(void)
 * Address ranges: 00538690-005386c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00538690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  FUN_00537a20(param_2,param_3,param_5);
  param_1[0x10] = param_4;
  *(undefined1 *)(param_1 + 0x11) = param_6;
  *param_1 = &PTR_FUN_0064f720;
  return param_1;
}

