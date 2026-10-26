/*
 * FUN_00515290 at 00515290
 * undefined FUN_00515290(void)
 * Address ranges: 00515290-005152c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00515290(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_005158a0(param_3,param_1);
    param_1 = param_1 + 0x24;
    param_3 = param_3 + 0x24;
  } while (param_1 != param_2);
  return param_3;
}

