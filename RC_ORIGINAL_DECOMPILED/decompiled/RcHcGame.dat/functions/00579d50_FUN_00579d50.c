/*
 * FUN_00579d50 at 00579d50
 * undefined FUN_00579d50(void)
 * Address ranges: 00579d50-0057a379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0057a2a0) */
/* WARNING: Removing unreachable block (ram,0x0057a2b1) */

undefined4 * __thiscall FUN_00579d50(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined3 uVar2;
  char cVar3;
  void *pvVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char *local_38;
  int iStack_34;
  char *local_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641bc6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00501cb0();
  puVar1 = param_3;
  param_1[0x3e] = param_3;
  param_1[0x40] = 0;
  *param_1 = &PTR_FUN_0064fab4;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (*(int *)(param_3 + 0x3c) == 0) {
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectCorona__CAdamEffectCo_006a4ffc;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_CAdamEffectCorona__CAdamEffectCo_006a4ffc);
    local_4._0_1_ = 2;
    FUN_005035a0();
    local_4._0_1_ = 1;
    FUN_004040a0();
    *(char **)(puVar1 + 0x3c) = s_Coreff_a_bmp_0069f8e8;
    uVar2 = local_4._1_3_;
  }
  local_4._1_3_ = uVar2;
  if (((*(float *)(puVar1 + 0x1c) < *(float *)(puVar1 + 0x18)) || (*(float *)(puVar1 + 0x1c) <= 0.0)
      ) || (*(float *)(puVar1 + 0x18) <= 0.0)) {
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectCorona__CAdamEffectCo_006a4fb4;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_CAdamEffectCorona__CAdamEffectCo_006a4fb4);
    local_4._0_1_ = 3;
    FUN_005035a0();
    local_4._0_1_ = 1;
    FUN_004040a0();
    *(undefined4 *)(puVar1 + 0x18) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x1c) = 0x41200000;
  }
  if (((*(float *)(puVar1 + 0x24) < *(float *)(puVar1 + 0x20)) || (*(float *)(puVar1 + 0x24) <= 0.0)
      ) || (*(float *)(puVar1 + 0x20) <= 0.0)) {
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectCorona__CAdamEffectCo_006a4f64;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_CAdamEffectCorona__CAdamEffectCo_006a4f64);
    local_4._0_1_ = 4;
    FUN_005035a0();
    local_4._0_1_ = 1;
    FUN_004040a0();
    *(undefined4 *)(puVar1 + 0x20) = 0x42c80000;
    *(undefined4 *)(puVar1 + 0x24) = 0x447a0000;
  }
  pvVar4 = _malloc(0x48);
  param_1[0x3f] = pvVar4;
  if (pvVar4 == (void *)0x0) {
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar12 = s_CAdamEffectCorona__CAdamEffectCo_006a4f14;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    puVar10 = (undefined1 *)(~uVar9 - 1);
    param_3 = puVar10;
    cVar3 = FUN_00401940(puVar10);
    if (cVar3 != '\0') {
      pcVar12 = s_CAdamEffectCorona__CAdamEffectCo_006a4f14;
      for (uVar9 = (uint)puVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar9 = (uint)puVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *local_28 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        local_28 = local_28 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 5;
    FUN_005035a0();
    local_4._0_1_ = 1;
    FUN_004040a0();
  }
  *(undefined4 *)(param_1[0x3f] + 0x2c) = *(undefined4 *)(puVar1 + 0x28);
  *(undefined4 *)(param_1[0x3f] + 0x30) = *(undefined4 *)(puVar1 + 0x18);
  *(undefined4 *)(param_1[0x3f] + 0x34) = *(undefined4 *)(puVar1 + 0x1c);
  *(undefined4 *)(param_1[0x3f] + 0x3c) = *(undefined4 *)(puVar1 + 0x20);
  *(undefined4 *)(param_1[0x3f] + 0x38) = *(undefined4 *)(puVar1 + 0x24);
  *(undefined4 *)(param_1[0x3f] + 8) = *(undefined4 *)(puVar1 + 8);
  *(undefined4 *)(param_1[0x3f] + 0xc) = *(undefined4 *)(puVar1 + 0xc);
  *(undefined4 *)(param_1[0x3f] + 0x10) = *(undefined4 *)(puVar1 + 0x10);
  *(undefined4 *)(param_1[0x3f] + 0x1c) = *(undefined4 *)(puVar1 + 0x2c);
  *(undefined4 *)(param_1[0x3f] + 0x20) = *(undefined4 *)(puVar1 + 0x30);
  *(undefined4 *)(param_1[0x3f] + 0x24) = *(undefined4 *)(puVar1 + 0x34);
  *(undefined4 *)(param_1[0x3f] + 0x28) = 0x437f0000;
  *(undefined4 *)(param_1[0x3f] + 0x18) = 0;
  *(undefined4 *)(param_1[0x3f] + 0x14) = 0;
  *(undefined4 *)param_1[0x3f] = 0;
  *(undefined4 *)(param_1[0x3f] + 0x44) = 0x3f800000;
  pcVar12 = *(char **)(puVar1 + 0x3c);
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar13 = pcVar12;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar3 = FUN_00401940(uVar9);
  if (cVar3 != '\0') {
    pcVar13 = local_38;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00404190();
  }
  param_2 = 0;
  local_4._0_1_ = 7;
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = s_Coreff_bmp_00692c5c;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_Coreff_bmp_00692c5c);
  local_4._0_1_ = 8;
  iVar8 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar8 = FUN_0055b280();
  }
  if (*(int *)(iVar8 + 0xd8) == 0) {
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 9;
    pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar5)();
    local_4._0_1_ = 8;
    FUN_004040a0();
  }
  piVar6 = (int *)FUN_0050d980(&param_3);
  iVar8 = param_1[0x40];
  local_4._0_1_ = 10;
  if (iVar8 != *piVar6) {
    if ((iVar8 != 0) &&
       (iVar7 = *(int *)(iVar8 + 0x14) + -1, *(int *)(iVar8 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0();
    }
    param_1[0x40] = *piVar6;
    FUN_005844b0();
  }
  local_4._0_1_ = 8;
  if (param_3 != (undefined1 *)0x0) {
    FUN_004098d0();
    param_3 = (undefined1 *)0x0;
  }
  local_4._0_1_ = 7;
  FUN_004040a0();
  if (iStack_34 != 0) {
    iVar8 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar8 = FUN_0055b280();
    }
    if (*(int *)(iVar8 + 0xd8) == 0) {
      FUN_004040a0();
      iVar8 = -1;
      pcVar12 = &DAT_006b3f70;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70);
      local_4._0_1_ = 0xb;
      pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar5)();
      local_4._0_1_ = 7;
      FUN_004040a0();
    }
    piVar6 = (int *)FUN_0050d980(&param_3);
    if (*piVar6 != 0) {
      local_4._0_1_ = 0xc;
      param_2 = *piVar6;
      FUN_005844b0();
    }
    local_4._0_1_ = 7;
    if (param_3 != (undefined1 *)0x0) {
      FUN_004098d0();
    }
  }
  if ((param_1[0x40] != 0) && (param_2 != 0)) {
    param_3 = &stack0xffffffac;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    local_4._0_1_ = 7;
    FUN_00412de0();
    FUN_0050aea0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  if ((param_2 != 0) &&
     (iVar8 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  if (local_38 != (char *)0x0) {
    cVar3 = local_38[-1];
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0();
    }
    else {
      local_38[-1] = cVar3 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

