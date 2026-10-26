/*
 * FUN_00539d80 at 00539d80
 * undefined FUN_00539d80(void)
 * Address ranges: 00539d80-00539dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00539d80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined1 param_9)

{
  FUN_00539430(param_2,param_3,param_4,param_5,param_6,param_8);
  param_1[0x19] = param_7;
  *(undefined1 *)(param_1 + 0x1a) = param_9;
  param_1[0x1b] = param_1[0x17];
  *param_1 = &PTR_FUN_0064f778;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}

