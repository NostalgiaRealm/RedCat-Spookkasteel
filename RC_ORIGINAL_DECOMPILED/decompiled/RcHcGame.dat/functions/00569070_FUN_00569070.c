/*
 * FUN_00569070 at 00569070
 * undefined FUN_00569070(void)
 * Address ranges: 00569070-005690d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569070(float *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_4;
  
  fVar7 = (float10)FUN_00568e00(param_2);
  fVar1 = param_4[1];
  fVar2 = param_3[1];
  fVar3 = param_3[1];
  fVar4 = param_4[2];
  fVar5 = param_3[2];
  fVar6 = param_3[2];
  *param_1 = (float)(((float10)*param_4 - (float10)*param_3) * fVar7 + (float10)*param_3);
  param_1[1] = (float)(((float10)fVar1 - (float10)fVar2) * fVar7 + (float10)fVar3);
  param_1[2] = (float)(((float10)fVar4 - (float10)fVar5) * fVar7 + (float10)fVar6);
  param_1[3] = local_4;
  return;
}

