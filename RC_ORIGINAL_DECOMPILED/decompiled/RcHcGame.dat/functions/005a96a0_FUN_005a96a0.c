/*
 * FUN_005a96a0 at 005a96a0
 * undefined FUN_005a96a0(void)
 * Address ranges: 005a96a0-005a96c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a96a0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  if ((param_1 <= param_4) && (param_4 <= param_2)) {
    *param_5 = (param_3 - param_1) + param_4;
    return 1;
  }
  return 0;
}

