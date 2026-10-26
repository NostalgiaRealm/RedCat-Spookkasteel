/*
 * FUN_1001e220 at 1001e220
 * undefined FUN_1001e220(void)
 * Address ranges: 1001e220-1001e292
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_1001e220(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = SQRT((float10)param_1[3] * (float10)param_1[3] +
               (float10)param_1[2] * (float10)param_1[2] +
               (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
  if ((fVar1 < (float10)1e-05) && ((float10)-1e-05 < fVar1)) {
    return (float10)0.0;
  }
  fVar2 = (float10)1.0 / fVar1;
  *param_1 = (float)(fVar2 * (float10)*param_1);
  param_1[1] = (float)(fVar2 * (float10)param_1[1]);
  param_1[2] = (float)(fVar2 * (float10)param_1[2]);
  param_1[3] = (float)(fVar2 * (float10)param_1[3]);
  return fVar1;
}

