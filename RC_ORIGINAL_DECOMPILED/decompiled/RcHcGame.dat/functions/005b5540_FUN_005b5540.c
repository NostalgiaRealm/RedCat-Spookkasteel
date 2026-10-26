/*
 * FUN_005b5540 at 005b5540
 * undefined FUN_005b5540(void)
 * Address ranges: 005b5540-005b5569
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b5540(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)fcos((float10)param_3 * (float10)0.5);
  *param_1 = (float)fVar1;
  fVar1 = (float10)fsin((float10)param_3 * (float10)0.5);
  param_1[1] = (float)(fVar1 * (float10)*param_2);
  param_1[2] = (float)(fVar1 * (float10)param_2[1]);
  param_1[3] = (float)(fVar1 * (float10)param_2[2]);
  return;
}

