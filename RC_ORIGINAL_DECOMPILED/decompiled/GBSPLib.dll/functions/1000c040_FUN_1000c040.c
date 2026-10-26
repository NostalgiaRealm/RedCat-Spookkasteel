/*
 * FUN_1000c040 at 1000c040
 * undefined FUN_1000c040(void)
 * Address ranges: 1000c040-1000c086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c040(int param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  
  param_1 = param_1 - (int)param_2;
  param_3 = param_3 - (int)param_2;
  iVar2 = 3;
  do {
    fVar1 = *(float *)(param_1 + (int)param_2);
    if (fVar1 < *param_2) {
      *param_2 = fVar1;
    }
    if (*(float *)(param_3 + (int)param_2) < fVar1) {
      *(float *)(param_3 + (int)param_2) = fVar1;
    }
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

