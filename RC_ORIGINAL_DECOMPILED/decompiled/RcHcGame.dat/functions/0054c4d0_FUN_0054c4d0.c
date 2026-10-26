/*
 * FUN_0054c4d0 at 0054c4d0
 * undefined FUN_0054c4d0(void)
 * Address ranges: 0054c4d0-0054c4fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0054c4d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_1 + 2;
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3 = param_3 + 2;
    param_1 = puVar1;
  } while (puVar1 != param_2);
  return param_3;
}

