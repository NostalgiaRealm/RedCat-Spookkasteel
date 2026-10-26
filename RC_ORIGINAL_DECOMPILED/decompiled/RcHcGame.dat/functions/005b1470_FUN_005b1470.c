/*
 * FUN_005b1470 at 005b1470
 * undefined FUN_005b1470(void)
 * Address ranges: 005b1470-005b14bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_005b1470(float *param_1,float *param_2,float *param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_005b2e40();
  fVar2 = fVar1 * (float10)param_4;
  *param_3 = (float)((float10)*param_1 - fVar2 * (float10)*param_2);
  param_3[1] = (float)((float10)param_1[1] - fVar2 * (float10)param_2[1]);
  param_3[2] = (float)((float10)param_1[2] - fVar2 * (float10)param_2[2]);
  FUN_005b1410(param_3,0x3c23d70a);
  return (float10)(float)fVar1;
}

