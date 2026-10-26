/*
 * FUN_004dddf0 at 004dddf0
 * undefined FUN_004dddf0(void)
 * Address ranges: 004dddf0-004dde1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_004dddf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}

