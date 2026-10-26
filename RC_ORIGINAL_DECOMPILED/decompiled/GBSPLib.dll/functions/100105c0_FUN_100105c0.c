/*
 * FUN_100105c0 at 100105c0
 * undefined FUN_100105c0(void)
 * Address ranges: 100105c0-10010671
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100105c0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pfVar2 = param_3;
  FUN_1000c010(param_2,param_3);
  param_3 = (float *)0x0;
  param_1 = param_1 * 0x24;
  if (0 < *(int *)(param_1 + 4 + DAT_1014e288)) {
    do {
      iVar5 = 3;
      iVar4 = *(int *)(DAT_1014e314 + (*(int *)(param_1 + DAT_1014e288) + (int)param_3) * 4) * 0xc;
      iVar6 = param_2 - (int)pfVar2;
      pfVar3 = pfVar2;
      do {
        fVar1 = *(float *)(iVar4 + DAT_1014e248);
        if (fVar1 < *(float *)(iVar6 + (int)pfVar3)) {
          *(float *)(iVar6 + (int)pfVar3) = fVar1;
        }
        if (*pfVar3 < fVar1) {
          *pfVar3 = fVar1;
        }
        iVar4 = iVar4 + 4;
        pfVar3 = pfVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      param_3 = (float *)((int)param_3 + 1);
    } while ((int)param_3 < *(int *)(param_1 + 4 + DAT_1014e288));
  }
  return;
}

