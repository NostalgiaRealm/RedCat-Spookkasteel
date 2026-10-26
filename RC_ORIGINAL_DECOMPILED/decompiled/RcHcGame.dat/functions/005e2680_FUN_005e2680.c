/*
 * FUN_005e2680 at 005e2680
 * undefined FUN_005e2680(void)
 * Address ranges: 005e2680-005e26b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005e2680(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005e2760(param_3,param_1);
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 0x18;
  } while (param_1 != param_2);
  return param_3;
}

