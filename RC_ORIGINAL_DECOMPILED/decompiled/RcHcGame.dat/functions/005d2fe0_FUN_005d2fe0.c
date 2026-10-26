/*
 * FUN_005d2fe0 at 005d2fe0
 * undefined FUN_005d2fe0(void)
 * Address ranges: 005d2fe0-005d302a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d2fe0(int *param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  param_3 = param_3 * param_4;
  if (0 < param_3) {
    do {
      *param_1 = (uint)*param_2 * param_5;
      param_1[1] = (uint)param_2[1] * param_5;
      param_1[2] = (uint)param_2[2] * param_5;
      param_2 = param_2 + 3;
      param_3 = param_3 + -1;
      param_1 = param_1 + 3;
    } while (param_3 != 0);
  }
  return;
}

