/*
 * FUN_005b59f0 at 005b59f0
 * undefined FUN_005b59f0(void)
 * Address ranges: 005b59f0-005b5b11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b59f0(float *param_1,float *param_2,float param_3,float *param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = param_2[1] * param_1[1] +
             *param_1 * *param_2 + param_2[2] * param_1[2] + param_2[3] * param_1[3];
  if (0.0 <= local_18) {
    local_10 = *param_2;
    local_c = param_2[1];
    local_8 = param_2[2];
    local_4 = param_2[3];
  }
  else {
    local_18 = -local_18;
    local_c = -param_2[1];
    local_8 = -param_2[2];
    local_4 = -param_2[3];
    local_10 = -*param_2;
  }
  if (1.0 - local_18 <= 1e-05) {
    fVar3 = (float10)1.0 - (float10)param_3;
    fVar1 = (float10)param_3;
  }
  else {
    fVar1 = (float10)FUN_0060dcd0();
    fVar2 = (float10)fsin(fVar1);
    fVar3 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)(float)fVar1);
    fVar3 = fVar3 / (float10)(float)fVar2;
    fVar1 = (float10)fsin((float10)(float)fVar1 * (float10)param_3);
    fVar1 = fVar1 / (float10)(float)fVar2;
  }
  param_4[1] = (float)(fVar1 * (float10)local_c + fVar3 * (float10)param_1[1]);
  param_4[2] = (float)(fVar3 * (float10)param_1[2] + fVar1 * (float10)local_8);
  param_4[3] = (float)(fVar3 * (float10)param_1[3] + fVar1 * (float10)local_4);
  *param_4 = (float)(fVar1 * (float10)local_10 + fVar3 * (float10)*param_1);
  return;
}

