/*
 * FUN_00548c60 at 00548c60
 * undefined FUN_00548c60(void)
 * Address ranges: 00548c60-00548c97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00548c60(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005495e0(param_3,param_1);
    param_1 = param_1 + 0x14;
    param_3 = param_3 + 0x14;
  } while (param_1 != param_2);
  return param_3;
}

