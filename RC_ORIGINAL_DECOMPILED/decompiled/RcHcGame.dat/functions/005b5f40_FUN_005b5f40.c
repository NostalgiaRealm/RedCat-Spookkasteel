/*
 * FUN_005b5f40 at 005b5f40
 * undefined FUN_005b5f40(void)
 * Address ranges: 005b5f40-005b5f98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b5f40(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = SQRT((float10)*(float *)(param_1 + 0xc) * (float10)*(float *)(param_1 + 0xc) +
               (float10)*(float *)(param_1 + 8) * (float10)*(float *)(param_1 + 8) +
               (float10)*(float *)(param_1 + 4) * (float10)*(float *)(param_1 + 4));
  if (fVar1 <= (float10)0.0001) {
    fVar2 = (float10)1.0;
  }
  else {
    fVar2 = (float10)fsin(fVar1);
    fVar2 = fVar2 / fVar1;
  }
  fVar1 = (float10)fcos(fVar1);
  *param_2 = (float)fVar1;
  param_2[1] = (float)(fVar2 * (float10)*(float *)(param_1 + 4));
  param_2[2] = (float)(fVar2 * (float10)*(float *)(param_1 + 8));
  param_2[3] = (float)(fVar2 * (float10)*(float *)(param_1 + 0xc));
  return;
}

