/*
 * FUN_100187e0 at 100187e0
 * undefined FUN_100187e0(void)
 * Address ranges: 100187e0-1001882b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100187e0(int param_1,int param_2,int *param_3,int *param_4)

{
  if (-1 < param_1) {
    *param_3 = param_1 / param_2;
    *param_4 = param_1 % param_2;
    return;
  }
  *param_3 = param_1 / param_2;
  *param_4 = -param_1 % param_2;
  if (-param_1 % param_2 != 0) {
    *param_3 = *param_3 + -1;
    *param_4 = param_2 - *param_4;
  }
  return;
}

