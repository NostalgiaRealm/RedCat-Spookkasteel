/*
 * FUN_00580a90 at 00580a90
 * undefined FUN_00580a90(void)
 * Address ranges: 00580a90-00580ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00580a90(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00580bb0(param_3,param_1);
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  } while (param_1 != param_2);
  return param_3;
}

