/*
 * FUN_1000c090 at 1000c090
 * undefined FUN_1000c090(void)
 * Address ranges: 1000c090-1000c0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_1000c090(float *param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = param_1;
  fVar2 = *param_1;
  if (*param_1 < param_1[1]) {
    fVar2 = param_1[1];
  }
  param_1 = (float *)fVar2;
  if ((float)param_1 < pfVar1[2]) {
    param_1 = (float *)pfVar1[2];
  }
  if ((float)param_1 == 0.0) {
    return (float10)0.0;
  }
  FUN_10014530(1.0 / (float)param_1);
  return (float10)(float)param_1;
}

