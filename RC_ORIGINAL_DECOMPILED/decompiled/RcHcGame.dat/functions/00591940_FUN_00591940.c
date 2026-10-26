/*
 * FUN_00591940 at 00591940
 * undefined FUN_00591940(void)
 * Address ranges: 00591940-00591db0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00591940(int param_1,int param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float local_3c;
  float local_30;
  undefined4 *local_2c;
  char *local_28;
  undefined1 local_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643799;
  pvStack_c = ExceptionList;
  fVar10 = 0.0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  do {
    iVar2 = FUN_0060a4a0();
    iVar3 = FUN_0060a4a0();
    iVar4 = FUN_0060a4a0();
    local_30 = (float)(iVar4 % 10000) * 0.0002 - 1.0;
    fVar14 = (float10)FUN_005b2fd0();
    local_3c = (float)fVar14;
  } while (fVar14 < (float10)0.001);
  if (param_3 != (void *)0x0) {
    fVar14 = (float10)FUN_005b2e40();
    if (fVar14 < (float10)0.0) {
      local_3c = -local_3c;
    }
  }
  iVar4 = FUN_0060a4a0();
  param_3 = (void *)(iVar4 % 10000);
  FUN_005b2fa0(((float)(int)param_3 * 0.0005 + 5.0) / local_3c);
  param_3 = operator_new(0x1a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (param_3 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    local_2c = (undefined4 *)CONCAT31(local_2c._1_3_,(undefined1)param_2);
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = s_SmokeParticle_006a62c0;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      pcVar11 = s_SmokeParticle_006a62c0;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *local_28 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_28 = local_28 + 1;
      }
      FUN_00404190(uVar8);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    uVar5 = FUN_005033a0(local_1c,&local_2c);
    fVar10 = 4.2039e-45;
    local_3c = 4.2039e-45;
    local_4 = 3;
    piVar6 = (int *)FUN_005914f0(uVar5,&DAT_006c9ef0);
  }
  local_4 = 4;
  if (((uint)fVar10 & 2) != 0) {
    fVar10 = (float)((uint)fVar10 & 0xfffffffd);
    FUN_004040a0(1);
    local_3c = fVar10;
  }
  local_4 = 0;
  if (((uint)fVar10 & 1) != 0) {
    FUN_004040a0(1);
  }
  (**(code **)(*piVar6 + 0x4c))(param_1);
  if (*(char *)((int)piVar6 + 0x14b) != '\0') {
    local_30 = (float)CONCAT31(local_30._1_3_,(undefined1)param_1);
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    puStack_8._0_1_ = 6;
    pcVar7 = (code *)FUN_005a07f0(s___m_FreezeVelocity_00691370,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696c48,0x3e,&local_30);
    (*pcVar7)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_004040a0(1);
  }
  piVar6[99] = (int)local_3c;
  piVar6[100] = (int)((float)(iVar2 % 10000) * 0.0002 - 1.0);
  piVar6[0x66] = 0;
  piVar6[0x65] = (int)((float)(iVar3 % 10000) * 0.0001 + 1.0);
  param_2 = FUN_0060a4a0();
  param_2 = param_2 % 10000;
  param_2 = __ftol();
  iVar2 = __ftol();
  if ((iVar2 != -1) && (iVar2 < 0)) {
    FUN_00409810(&DAT_006b3f70,&param_2);
    puStack_8._0_1_ = 7;
    pcVar7 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                  s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,&local_30);
    (*pcVar7)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_004040a0(1);
  }
  piVar6[0x48] = iVar2;
  piVar6[0x49] = -1;
  piVar6[0x4a] = 0x3f800000;
  *(undefined1 *)(piVar6 + 0x4b) = 1;
  FUN_00502350(1);
  param_2 = FUN_0060a4a0();
  param_2 = param_2 % 10000;
  piVar6[0x62] = 0x41a00000;
  piVar6[0x61] = 0x42c80000;
  piVar6[0x5f] = 0x42200000;
  piVar6[0x60] = 0x42c80000;
  piVar6[0x4c] = (int)(((float)param_2 * 4.0000003e-05 + 0.8) * (float)param_3 * 4.0);
  if (param_1 == 0) {
    local_30 = (float)((uint)local_30 & 0xffffff00);
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar12 = (undefined4 *)&DAT_006b3f70;
      puVar13 = local_2c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      FUN_00404190(uVar8);
    }
    puStack_8._0_1_ = 8;
    pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &local_30);
    (*pcVar7)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_004040a0(1);
  }
  FUN_004f41c0(piVar6);
  puStack_8 = (undefined1 *)0xffffffff;
  if ((param_1 != 0) &&
     (iVar2 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_10;
  return;
}

