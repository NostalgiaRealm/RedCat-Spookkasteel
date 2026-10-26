/*
 * FUN_005ca810 at 005ca810
 * undefined FUN_005ca810(void)
 * Address ranges: 005ca810-005caa4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005ca810(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = param_1;
  if (param_3 < 0) {
    return (uint)((*(uint *)(*(int *)(DAT_006cc590 + 0x54) + (param_3 * 3 + 3) * -0x14) &
                  DAT_006cc58c) != 0);
  }
  iVar7 = param_3 * 0x2c;
  fVar9 = (float10)FUN_005d17f0();
  fVar1 = (float)fVar9;
  fVar9 = (float10)FUN_005d17f0();
  fVar2 = (float)fVar9;
  if (fVar1 < 0.0) {
    if (0.0 > fVar2) {
      uVar4 = FUN_005ca810(param_1,param_2,
                           *(undefined4 *)(*(int *)(DAT_006cc590 + 0x4c) + 4 + iVar7));
      return uVar4;
    }
    param_1 = (float *)0x1;
    if (fVar1 < 0.0) goto LAB_005ca918;
  }
  else if (0.0 <= fVar2) {
    uVar4 = FUN_005ca810(param_1,param_2,*(undefined4 *)(*(int *)(DAT_006cc590 + 0x4c) + iVar7));
    return uVar4;
  }
  param_1 = (float *)0x0;
LAB_005ca918:
  fVar1 = fVar1 / (fVar1 - fVar2);
  local_c = (*param_2 - *pfVar3) * fVar1 + *pfVar3;
  local_8 = (param_2[1] - pfVar3[1]) * fVar1 + pfVar3[1];
  local_4 = (param_2[2] - pfVar3[2]) * fVar1 + pfVar3[2];
  iVar5 = FUN_005ca810(pfVar3,&local_c,
                       *(undefined4 *)
                        (*(int *)(DAT_006cc590 + 0x4c) + (param_3 * 0xb + (int)param_1) * 4));
  if (iVar5 != 0) {
    return 1;
  }
  iVar5 = FUN_005ca810(&local_c,param_2,
                       *(undefined4 *)
                        (*(int *)(DAT_006cc590 + 0x4c) +
                        ((uint)(param_1 == (float *)0x0) + param_3 * 0xb) * 4));
  if (iVar5 != 0) {
    if (DAT_006cc5ac == 0) {
      DAT_006cc50c = *(int *)(*(int *)(DAT_006cc590 + 0x4c) + 0x10 + iVar7);
      puVar6 = (undefined4 *)(*(int *)(DAT_006cc590 + 100) + DAT_006cc50c * 0x14);
      puVar8 = &DAT_006cc530;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      DAT_006cc560 = local_c;
      DAT_006cc594 = (int)param_1;
      DAT_006cc564 = local_8;
      DAT_006cc568 = local_4;
      DAT_006cc4cc = param_3;
      DAT_006cc5ac = 1;
      DAT_006cc4d0 = fVar1;
    }
    return 1;
  }
  return 0;
}

