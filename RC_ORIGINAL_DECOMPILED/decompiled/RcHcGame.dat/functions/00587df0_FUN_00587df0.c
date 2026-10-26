/*
 * FUN_00587df0 at 00587df0
 * undefined FUN_00587df0(void)
 * Address ranges: 00587df0-00587e12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00587df0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

