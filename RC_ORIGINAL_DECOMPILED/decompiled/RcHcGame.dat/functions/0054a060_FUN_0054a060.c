/*
 * FUN_0054a060 at 0054a060
 * undefined FUN_0054a060(void)
 * Address ranges: 0054a060-0054a085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0054a060(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}

