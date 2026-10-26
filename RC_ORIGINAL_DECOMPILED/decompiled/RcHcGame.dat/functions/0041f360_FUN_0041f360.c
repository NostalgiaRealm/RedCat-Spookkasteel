/*
 * FUN_0041f360 at 0041f360
 * undefined FUN_0041f360(void)
 * Address ranges: 0041f360-0041f37c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041f360(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

