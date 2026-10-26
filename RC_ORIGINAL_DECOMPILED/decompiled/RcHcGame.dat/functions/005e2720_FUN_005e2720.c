/*
 * FUN_005e2720 at 005e2720
 * undefined FUN_005e2720(void)
 * Address ranges: 005e2720-005e2751
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005e2720(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -0x18;
    param_3 = param_3 + -0x18;
    FUN_005e29c0(param_2);
  } while (param_2 != param_1);
  return param_3;
}

