/*
 * FUN_1000ee90 at 1000ee90
 * undefined FUN_1000ee90(void)
 * Address ranges: 1000ee90-1000ef70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ee90(int *param_1,int param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int local_8;
  
  if (*param_1 != -1) {
    (*DAT_1014e358)(s_GetLeafBBoxFromPortals__Not_a_le_100390f0);
    return 0;
  }
  FUN_1000c010(param_2,param_3);
  for (piVar1 = (int *)param_1[0xd]; piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[(piVar2 == param_1) + 3]) {
    piVar2 = (int *)piVar1[2];
    piVar3 = (int *)*piVar1;
    local_8 = 0;
    pfVar4 = (float *)piVar3[1];
    if (0 < *piVar3) {
      do {
        iVar6 = 3;
        pfVar5 = param_3;
        do {
          if (*pfVar4 < *(float *)((param_2 - (int)param_3) + (int)pfVar5)) {
            *(float *)((param_2 - (int)param_3) + (int)pfVar5) = *pfVar4;
          }
          if (*pfVar5 < *pfVar4) {
            *pfVar5 = *pfVar4;
          }
          pfVar4 = pfVar4 + 1;
          pfVar5 = pfVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_8 = local_8 + 1;
      } while (local_8 < *piVar3);
    }
  }
  return 1;
}

