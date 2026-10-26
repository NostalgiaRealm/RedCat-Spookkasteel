/*
 * FUN_005cab40 at 005cab40
 * undefined FUN_005cab40(void)
 * Address ranges: 005cab40-005cabb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cab40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (*param_1 <= 0.0) {
    fVar1 = *param_3;
  }
  else {
    fVar1 = *param_2;
  }
  param_1[3] = param_1[3] - *param_1 * fVar1;
  if (param_1[1] <= 0.0) {
    fVar1 = param_3[1];
  }
  else {
    fVar1 = param_2[1];
  }
  param_1[3] = param_1[3] - fVar1 * param_1[1];
  if (0.0 < param_1[2]) {
    param_1[3] = param_1[3] - param_2[2] * param_1[2];
    return;
  }
  param_1[3] = param_1[3] - param_3[2] * param_1[2];
  return;
}

