/*
 * FUN_004fe210 at 004fe210
 * undefined FUN_004fe210(void)
 * Address ranges: 004fe210-004fe247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004fe210(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0044e5e0(param_3,param_1);
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
  } while (param_1 != param_2);
  return param_3;
}

