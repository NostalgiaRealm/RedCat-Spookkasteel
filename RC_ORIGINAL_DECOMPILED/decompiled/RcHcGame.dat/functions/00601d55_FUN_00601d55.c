/*
 * FUN_00601d55 at 00601d55
 * undefined FUN_00601d55(void)
 * Address ranges: 00601d55-00601d80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 *
FUN_00601d55(undefined2 *param_1,undefined2 *param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_00600c15(*param_1);
    *param_4 = uVar1;
    param_4 = param_4 + 1;
  }
  return param_1;
}

