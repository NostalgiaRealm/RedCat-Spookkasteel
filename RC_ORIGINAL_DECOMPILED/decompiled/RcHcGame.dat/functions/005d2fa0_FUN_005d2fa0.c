/*
 * FUN_005d2fa0 at 005d2fa0
 * undefined FUN_005d2fa0(void)
 * Address ranges: 005d2fa0-005d2fda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d2fa0(int *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  
  param_3 = param_3 * param_4;
  if (0 < param_3) {
    do {
      *param_1 = (uint)*param_2 << 8;
      param_1[1] = (uint)param_2[1] << 8;
      pbVar1 = param_2 + 2;
      param_2 = param_2 + 3;
      param_1[2] = (uint)*pbVar1 << 8;
      param_3 = param_3 + -1;
      param_1 = param_1 + 3;
    } while (param_3 != 0);
  }
  return;
}

