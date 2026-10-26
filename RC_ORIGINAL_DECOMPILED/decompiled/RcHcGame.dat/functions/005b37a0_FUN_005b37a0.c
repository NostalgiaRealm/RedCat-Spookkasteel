/*
 * FUN_005b37a0 at 005b37a0
 * undefined FUN_005b37a0(void)
 * Address ranges: 005b37a0-005b3833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b37a0(float *param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0060b110();
  param_2[1] = (float)-fVar1;
  fVar1 = (float10)fcos(-fVar1);
  if (fVar1 == (float10)0.0) {
    fVar1 = (float10)fpatan((float10)param_1[3],(float10)param_1[4]);
    param_2[2] = 0.0;
    *param_2 = (float)-fVar1;
    return;
  }
  fVar1 = (float10)fpatan((float10)param_1[5],(float10)param_1[8]);
  *param_2 = (float)-fVar1;
  fVar1 = (float10)fpatan((float10)param_1[1],(float10)*param_1);
  param_2[2] = (float)-fVar1;
  return;
}

