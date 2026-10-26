/*
 * FUN_0054a4f0 at 0054a4f0
 * undefined FUN_0054a4f0(void)
 * Address ranges: 0054a4f0-0054a527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0054a4f0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0054bc30(param_3,param_1);
    param_1 = param_1 + 0x38;
    param_3 = param_3 + 0x38;
  } while (param_1 != param_2);
  return param_3;
}

