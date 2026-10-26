/*
 * FUN_00587db0 at 00587db0
 * undefined FUN_00587db0(void)
 * Address ranges: 00587db0-00587dee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00587db0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}

