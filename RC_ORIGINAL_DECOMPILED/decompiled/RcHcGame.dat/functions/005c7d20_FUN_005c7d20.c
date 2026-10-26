/*
 * FUN_005c7d20 at 005c7d20
 * undefined FUN_005c7d20(void)
 * Address ranges: 005c7d20-005c7d7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7d20(float *param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  if (param_4 < param_2) {
    *param_1 = 0.0;
    return;
  }
  if (param_2 < param_3) {
    *param_1 = 1.0;
    return;
  }
  fVar1 = (float10)log2((float10)param_2 / (float10)param_3);
  fVar2 = (float10)log2((float10)_DAT_006a99f0);
  *param_1 = (float)((float10)1.0 -
                    ((float10)0.6931471805599453 * fVar1) / ((float10)0.6931471805599453 * fVar2));
  return;
}

