/*
 * FUN_00484fb0 at 00484fb0
 * undefined FUN_00484fb0(void)
 * Address ranges: 00484fb0-00484ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00484fb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0051a190(param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x1c) = (undefined1)param_4;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_0064e404;
  return param_1;
}

