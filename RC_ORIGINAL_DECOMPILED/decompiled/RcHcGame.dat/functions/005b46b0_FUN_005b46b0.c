/*
 * FUN_005b46b0 at 005b46b0
 * undefined FUN_005b46b0(void)
 * Address ranges: 005b46b0-005b4720
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b46b0(float *param_1,float *param_2,float *param_3)

{
  if (*param_1 < *param_2) {
    *param_2 = *param_1;
  }
  if (param_1[1] < param_2[1]) {
    param_2[1] = param_1[1];
  }
  if (param_1[2] < param_2[2]) {
    param_2[2] = param_1[2];
  }
  if (*param_3 < *param_1) {
    *param_3 = *param_1;
  }
  if (param_3[1] < param_1[1]) {
    param_3[1] = param_1[1];
  }
  if (param_3[2] < param_1[2]) {
    param_3[2] = param_1[2];
  }
  return;
}

