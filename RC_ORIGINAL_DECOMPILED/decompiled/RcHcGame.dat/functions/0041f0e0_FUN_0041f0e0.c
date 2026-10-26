/*
 * FUN_0041f0e0 at 0041f0e0
 * undefined FUN_0041f0e0(void)
 * Address ranges: 0041f0e0-0041f118
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041f0e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}

