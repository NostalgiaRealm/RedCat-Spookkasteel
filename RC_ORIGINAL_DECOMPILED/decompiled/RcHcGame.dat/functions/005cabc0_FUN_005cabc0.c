/*
 * FUN_005cabc0 at 005cabc0
 * undefined FUN_005cabc0(void)
 * Address ranges: 005cabc0-005cae76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005cabc0(float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [12];
  float local_14 [4];
  undefined4 local_4;
  
  iVar6 = param_4;
  if (param_5 == 0) {
    return 0;
  }
  iVar4 = DAT_006cc4c4 + param_3 * 0x3c;
  if (*(int *)(iVar4 + 0x38) <= param_4) {
    return 1;
  }
  iVar4 = *(int *)(iVar4 + 0x34) + param_4;
  pfVar8 = (float *)(DAT_006cc4c8 + *(int *)(DAT_006cc514 + iVar4 * 8) * 0x14);
  pfVar9 = local_14;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  local_4 = 6;
  if (*(int *)(DAT_006cc514 + 4 + iVar4 * 8) != 0) {
    FUN_005b3080();
    local_14[3] = -local_14[3];
  }
  FUN_005cab40(local_14,&DAT_006cc4d8,&DAT_006cc570);
  fVar10 = (float10)FUN_005d17f0();
  fVar1 = (float)fVar10;
  fVar10 = (float10)FUN_005d17f0();
  fVar2 = (float)fVar10;
  if (fVar1 < 0.0) {
    if (0.0 > fVar2) {
      uVar5 = FUN_005cabc0(param_1,param_2,param_3,param_4 + 1,1);
      return uVar5;
    }
    param_4 = 1;
    if (fVar1 < 0.0) goto LAB_005cacf7;
  }
  else if (0.0 <= fVar2) {
    uVar5 = FUN_005cabc0(param_1,param_2,param_3,param_4 + 1,0);
    return uVar5;
  }
  param_4 = 0;
LAB_005cacf7:
  if (0.0 <= fVar1) {
    fVar3 = fVar1 - 0.1;
  }
  else {
    fVar3 = fVar1 + 0.1;
  }
  fVar3 = fVar3 / (fVar1 - fVar2);
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_2c = (*param_2 - *param_1) * fVar3 + *param_1;
  local_28 = (param_2[1] - param_1[1]) * fVar3 + param_1[1];
  local_24 = (param_2[2] - param_1[2]) * fVar3 + param_1[2];
  iVar4 = FUN_005cabc0(param_1,&local_2c,param_3,iVar6 + 1,param_4);
  if (iVar4 != 0) {
    DAT_006cc598 = 1;
    return 1;
  }
  iVar6 = FUN_005cabc0(&local_2c,param_2,param_3,iVar6 + 1,param_4 == 0);
  if (iVar6 == 0) {
    return 0;
  }
  FUN_005b2fe0(local_20);
  fVar10 = (float10)FUN_005b2fd0();
  if ((fVar10 < (float10)_DAT_006cc524) && (DAT_006cc5ac == 0)) {
    DAT_006cc568 = local_24;
    _DAT_006cc524 = (float)fVar10;
    DAT_006cc4d0 = (float)fVar10;
    DAT_006cc564 = local_28;
    pfVar8 = local_14;
    pfVar9 = (float *)&DAT_006cc530;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      pfVar9 = pfVar9 + 1;
    }
    _DAT_006cc528 = param_3;
    DAT_006cc560 = local_2c;
    DAT_006cc5ac = 1;
    DAT_006cc598 = 1;
    return 1;
  }
  DAT_006cc598 = 1;
  return 1;
}

