/*
 * FUN_005cb6a0 at 005cb6a0
 * undefined FUN_005cb6a0(void)
 * Address ranges: 005cb6a0-005cb71f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cb6a0(int param_1,int param_2,int param_3,float *param_4,int param_5,int param_6)

{
  float fVar1;
  float *pfVar2;
  
  pfVar2 = param_4;
  param_1 = param_1 - (int)param_4;
  param_5 = param_5 - (int)param_4;
  param_2 = param_2 - (int)param_4;
  param_3 = param_3 - (int)param_4;
  param_6 = param_6 - (int)param_4;
  param_4 = (float *)0x3;
  do {
    fVar1 = *(float *)(param_1 + (int)pfVar2);
    if (*pfVar2 <= *(float *)(param_3 + (int)pfVar2)) {
      *(float *)(param_5 + (int)pfVar2) = (fVar1 + *pfVar2) - 1.0;
      fVar1 = *(float *)(param_2 + (int)pfVar2) + *(float *)(param_3 + (int)pfVar2);
    }
    else {
      *(float *)(param_5 + (int)pfVar2) = (fVar1 + *(float *)(param_3 + (int)pfVar2)) - 1.0;
      fVar1 = *(float *)(param_2 + (int)pfVar2) + *pfVar2;
    }
    param_4 = (float *)((int)param_4 + -1);
    *(float *)((int)pfVar2 + param_6) = fVar1 + 1.0;
    pfVar2 = pfVar2 + 1;
  } while (param_4 != (float *)0x0);
  return;
}

