/*
 * FUN_100144b0 at 100144b0
 * undefined FUN_100144b0(void)
 * Address ranges: 100144b0-10014523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_100144b0(float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = param_1 + 1;
  fVar2 = SQRT(param_1[2] * param_1[2] + *pfVar1 * *pfVar1 + *param_1 * *param_1);
  if (fVar2 == 0.0) {
    return (float10)0.0;
  }
  fVar3 = 1.0 / fVar2;
  *param_1 = fVar3 * *param_1;
  *pfVar1 = fVar3 * *pfVar1;
  param_1[2] = fVar3 * param_1[2];
  return (float10)fVar2;
}

