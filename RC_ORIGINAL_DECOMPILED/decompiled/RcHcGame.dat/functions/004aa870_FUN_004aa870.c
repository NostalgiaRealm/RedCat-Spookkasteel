/*
 * FUN_004aa870 at 004aa870
 * undefined FUN_004aa870(void)
 * Address ranges: 004aa870-004aa8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004aa870(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_004aadf0(param_3,param_1);
    param_1 = param_1 + 0x30;
    param_3 = param_3 + 0x30;
  } while (param_1 != param_2);
  return param_3;
}

