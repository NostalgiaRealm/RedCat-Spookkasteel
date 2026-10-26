/*
 * FUN_0054a240 at 0054a240
 * undefined FUN_0054a240(void)
 * Address ranges: 0054a240-0054a273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0054a240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}

