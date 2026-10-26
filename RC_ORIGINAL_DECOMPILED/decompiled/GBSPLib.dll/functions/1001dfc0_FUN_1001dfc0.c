/*
 * FUN_1001dfc0 at 1001dfc0
 * undefined FUN_1001dfc0(void)
 * Address ranges: 1001dfc0-1001e12a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001dfc0(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = param_2[1] * param_1[1] +
          *param_1 * *param_2 + param_2[2] * param_1[2] + param_2[3] * param_1[3];
  if (fVar1 + 1.0 <= 1e-05) {
    param_4[1] = -param_1[2];
    param_4[2] = param_1[1];
    param_4[3] = -*param_1;
    *param_4 = param_1[3];
    fVar4 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)1.5707963705062866);
    fVar2 = (float10)fsin((float10)param_3 * (float10)1.5707963705062866);
    param_4[1] = (float)(fVar2 * (float10)param_4[1] + fVar4 * (float10)param_1[1]);
    param_4[2] = (float)(fVar4 * (float10)param_1[2] + fVar2 * (float10)param_4[2]);
    param_4[3] = (float)(fVar4 * (float10)param_1[3] + fVar2 * (float10)param_4[3]);
    *param_4 = (float)(fVar2 * (float10)*param_4 + fVar4 * (float10)*param_1);
    return;
  }
  if (1.0 - fVar1 <= 1e-05) {
    fVar4 = (float10)1.0 - (float10)param_3;
  }
  else {
    fVar2 = (float10)FUN_10029390();
    fVar3 = (float10)fsin(fVar2);
    fVar4 = (float10)1.0 - (float10)param_3;
    if ((float10)1e-05 <= fVar3) {
      fVar4 = (float10)fsin(fVar4 * (float10)(float)fVar2);
      fVar4 = fVar4 / (float10)(float)fVar3;
      fVar2 = (float10)fsin((float10)(float)fVar2 * (float10)param_3);
      fVar2 = fVar2 / (float10)(float)fVar3;
      goto LAB_1001e069;
    }
  }
  fVar2 = (float10)param_3;
LAB_1001e069:
  param_4[1] = (float)(fVar4 * (float10)param_1[1] + fVar2 * (float10)param_2[1]);
  param_4[2] = (float)(fVar4 * (float10)param_1[2] + fVar2 * (float10)param_2[2]);
  param_4[3] = (float)(fVar4 * (float10)param_1[3] + fVar2 * (float10)param_2[3]);
  *param_4 = (float)(fVar2 * (float10)*param_2 + fVar4 * (float10)*param_1);
  return;
}

