/*
 * FUN_005b1410 at 005b1410
 * undefined FUN_005b1410(void)
 * Address ranges: 005b1410-005b146a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b1410(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = -param_2;
  if ((fVar1 < *param_1) && (*param_1 < param_2)) {
    *param_1 = 0.0;
  }
  if ((fVar1 < param_1[1]) && (param_1[1] < param_2)) {
    param_1[1] = 0.0;
  }
  if ((fVar1 < param_1[2]) && (param_1[2] < param_2)) {
    param_1[2] = 0.0;
  }
  return;
}

