/*
 * FUN_00587d60 at 00587d60
 * undefined FUN_00587d60(void)
 * Address ranges: 00587d60-00587da7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00587d60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
  } while (param_1 != param_2);
  return param_3;
}

