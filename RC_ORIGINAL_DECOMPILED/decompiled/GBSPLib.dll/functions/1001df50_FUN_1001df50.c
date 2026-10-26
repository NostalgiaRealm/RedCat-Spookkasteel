/*
 * FUN_1001df50 at 1001df50
 * undefined FUN_1001df50(void)
 * Address ranges: 1001df50-1001dfb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001df50(int param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_10029390();
  if ((float10)1e-05 < fVar1) {
    fVar2 = (float10)fsin(fVar1);
    fVar2 = (float10)1.0 / fVar2;
    *param_2 = (float)(fVar2 * (float10)*(float *)(param_1 + 4));
    param_2[1] = (float)(fVar2 * (float10)*(float *)(param_1 + 8));
    param_2[2] = (float)(fVar2 * (float10)*(float *)(param_1 + 0xc));
    *param_3 = (float)(fVar1 + fVar1);
    return 1;
  }
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  *param_2 = 0.0;
  *param_3 = 0.0;
  return 0;
}

