/*
 * FUN_0041ed60 at 0041ed60
 * undefined FUN_0041ed60(void)
 * Address ranges: 0041ed60-0041eda1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0041ed60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}

