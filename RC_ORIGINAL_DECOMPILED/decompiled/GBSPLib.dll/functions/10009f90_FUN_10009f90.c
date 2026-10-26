/*
 * FUN_10009f90 at 10009f90
 * undefined FUN_10009f90(void)
 * Address ranges: 10009f90-1000a1b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10009f90(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = param_2;
  if (param_3 < 0) {
    return (int)*(char *)(DAT_1014e258 + (param_3 * 3 + 3) * -0x14) & 1;
  }
  iVar6 = param_3 * 0x2c;
  fVar7 = (float10)FUN_10009f40(param_1,DAT_1014e2e8 + *(int *)(DAT_1014e298 + 0x10 + iVar6) * 0x14)
  ;
  fVar1 = (float)fVar7;
  fVar7 = (float10)FUN_10009f40(param_2,DAT_1014e2e8 + *(int *)(DAT_1014e298 + 0x10 + iVar6) * 0x14)
  ;
  fVar2 = (float)fVar7;
  if ((-1.0 <= fVar1) && (-1.0 <= fVar2)) {
    uVar4 = FUN_10009f90(param_1,param_2,*(undefined4 *)(DAT_1014e298 + iVar6));
    return uVar4;
  }
  if ((fVar1 < 1.0) && (fVar2 < 1.0)) {
    uVar4 = FUN_10009f90(param_1,param_2,*(undefined4 *)(DAT_1014e298 + 4 + iVar6));
    return uVar4;
  }
  param_2 = (float *)(uint)(fVar1 < 0.0);
  fVar2 = fVar1 / (fVar1 - fVar2);
  local_c = (*pfVar3 - *param_1) * fVar2 + *param_1;
  local_8 = (pfVar3[1] - param_1[1]) * fVar2 + param_1[1];
  local_4 = (pfVar3[2] - param_1[2]) * fVar2 + param_1[2];
  iVar5 = FUN_10009f90(param_1,&local_c,
                       *(undefined4 *)(DAT_1014e298 + ((int)param_2 + param_3 * 0xb) * 4));
  if (iVar5 != 0) {
    return 1;
  }
  iVar5 = FUN_10009f90(&local_c,pfVar3,
                       *(undefined4 *)(DAT_1014e298 + ((uint)(fVar1 >= 0.0) + param_3 * 0xb) * 4));
  if (iVar5 != 0) {
    if (DAT_10265cc4 == 0) {
      _DAT_10260e90 = *(undefined4 *)(DAT_1014e298 + 0x10 + iVar6);
      DAT_10265cb8 = local_c;
      DAT_10265cbc = local_8;
      DAT_10265cc0 = local_4;
      _DAT_10260e70 = param_3;
      DAT_10265cc4 = 1;
      _DAT_10265ccc = (uint)param_2;
    }
    return 1;
  }
  return 0;
}

