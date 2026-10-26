/*
 * FUN_0049b240 at 0049b240
 * undefined FUN_0049b240(void)
 * Address ranges: 0049b240-0049b6fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0049b240(undefined4 *param_1,undefined1 param_2,undefined1 *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 uVar13;
  undefined4 *puVar14;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c862;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00501cb0();
  uVar13 = 0;
  *(undefined1 *)(param_1 + 0x3e) = *param_3;
  local_4 = 0;
  FUN_004040a0();
  FUN_0040cc00(param_3,0,0xffffffff);
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  local_4._0_1_ = 2;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x53] = 9;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  FUN_004a04a0();
  local_4._0_1_ = 3;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)((int)param_1 + 0x209) = 1;
  *(undefined1 *)((int)param_1 + 0x20d) = 1;
  param_1[0x84] = 0x437f0000;
  *(undefined1 *)(param_1 + 0x85) = 1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  FUN_004041b0();
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *param_1 = &PTR_FUN_0064e7b4;
  iVar4 = FUN_004a1c80();
  param_1[0x42] = iVar4;
  if (iVar4 == 0) {
    local_1c[0] = param_2;
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141,local_1c);
    (*pcVar5)();
    local_4._0_1_ = 3;
    FUN_004040a0();
  }
  iVar4 = param_1[0x42];
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(iVar4 + 0x18);
  *(undefined1 *)((int)param_1 + 0x20a) = *(undefined1 *)(iVar4 + 0x54);
  *(undefined1 *)((int)param_1 + 0x20b) = *(undefined1 *)(iVar4 + 0x54);
  *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)(iVar4 + 0x55);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(iVar4 + 0x56);
  fVar2 = *(float *)(iVar4 + 0x5c);
  fVar3 = *(float *)(iVar4 + 0x58);
  iVar6 = FUN_0060a4a0();
  fVar2 = (fVar2 - fVar3) * (float)(iVar6 % 10000) * 0.0001 + fVar3;
  param_1[0x7e] = fVar2;
  if (fVar2 < 1.0) {
    FUN_005ae390(&fStack_2c,s_Invalid_MaxDamage_value__f_00694bb0,(double)fVar2);
    local_4._0_1_ = 5;
    FUN_005035a0();
    local_4._0_1_ = 3;
    FUN_004040a0();
    param_1[0x7e] = 0x3f800000;
  }
  iVar7 = FUN_005171f0();
  iVar6 = *(int *)(iVar7 + 100);
  if (iVar6 == -0x80000000) {
    iVar6 = FUN_0060af10();
    *(int *)(iVar7 + 100) = iVar6;
  }
  if (iVar6 != 0) {
    pcVar12 = &DAT_00694ba8;
    if (*(char *)(param_1 + 0x80) == '\0') {
      pcVar12 = s_FALSE_00694ba0;
    }
    puVar11 = (undefined1 *)param_1[0x1c];
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_0064a3b4;
    }
    puVar8 = (undefined1 *)param_1[0x18];
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    uVar9 = FUN_005ae390(&fStack_2c,s_Create_actor__s___s__destroyable_00694b6c,puVar8,puVar11,
                         pcVar12,(double)(float)param_1[0x7e]);
    local_4._0_1_ = 6;
    FUN_005aff00(uVar9);
    local_4._0_1_ = 3;
    if (fStack_28 != 0.0) {
      cVar1 = *(char *)((int)fStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)((int)fStack_28 + -1) = cVar1 + -1;
      }
    }
  }
  param_1[0x54] = *(undefined4 *)(iVar4 + 0x1c);
  param_1[0x55] = *(undefined4 *)(iVar4 + 0x1c);
  param_1[0x56] = *(undefined4 *)(iVar4 + 0x1c);
  puVar14 = param_1 + 0x4d;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  puVar14 = param_1 + 0x47;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  FUN_005b30c0();
  FUN_005b30c0();
  FUN_005b3070();
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  if (param_1[0x42] == 0) {
    param_2 = SUB41(fVar3,0);
    fStack_2c = (float)CONCAT31(fStack_2c._1_3_,param_2);
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 7;
    pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141,&fStack_2c);
    (*pcVar5)();
    local_4._0_1_ = 3;
    FUN_004040a0();
  }
  FUN_0049c5f0();
  FUN_0049ccf0();
  FUN_0049cd90();
  FUN_0049ce30();
  fStack_2c = *(float *)(iVar4 + 0x74);
  fStack_28 = *(float *)(iVar4 + 0x78);
  fStack_24 = *(float *)(iVar4 + 0x7c);
  param_1[0x8c] = fStack_2c;
  param_1[0x8d] = fStack_28;
  param_1[0x8e] = fStack_24;
  if (((fStack_2c != 0.0) || (fStack_28 != 0.0)) || (fStack_24 != 0.0)) {
    uVar13 = 1;
  }
  *(undefined1 *)(param_1 + 0x8f) = uVar13;
  FUN_0049b8d0();
  ExceptionList = pvStack_c;
  return param_1;
}

