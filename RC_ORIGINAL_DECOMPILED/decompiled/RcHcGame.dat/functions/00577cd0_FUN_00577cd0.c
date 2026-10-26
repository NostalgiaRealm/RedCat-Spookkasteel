/*
 * FUN_00577cd0 at 00577cd0
 * undefined FUN_00577cd0(void)
 * Address ranges: 00577cd0-00578866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00577cd0(undefined4 *param_1,float param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined3 uVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_38 [12];
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006419f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00501cb0(param_2);
  iVar8 = param_3;
  param_1[0x3e] = param_3;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x42) = 1;
  param_1[0x44] = 0;
  *param_1 = &PTR_FUN_0064fa54;
  local_4._1_3_ = 0;
  uVar3 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (*(float *)(param_3 + 0x38) < 0.0) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4e68;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4e68;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 3;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *(undefined4 *)(iVar8 + 0x38) = 0x41200000;
    uVar3 = local_4._1_3_;
  }
  local_4._1_3_ = uVar3;
  if (*(float *)(iVar8 + 0x34) < 0.1) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4e20;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4e20;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 4;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *(undefined4 *)(iVar8 + 0x34) = 0x3dcccccd;
  }
  if (((*(float *)(iVar8 + 0x30) < *(float *)(iVar8 + 0x2c)) || (*(float *)(iVar8 + 0x30) < 0.0)) ||
     (*(float *)(iVar8 + 0x2c) < 0.0)) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4dd8;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4dd8;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 5;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *(undefined4 *)(iVar8 + 0x2c) = 0;
    *(undefined4 *)(iVar8 + 0x30) = 0;
  }
  if ((*(float *)(iVar8 + 0x18) < 0.0) || (5.0 < *(float *)(iVar8 + 0x18))) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4d98;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4d98;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 6;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *(undefined4 *)(iVar8 + 0x18) = 0x3f800000;
  }
  if ((*(int *)(iVar8 + 0x1c) < 1) || (0x80 < *(int *)(iVar8 + 0x1c))) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4d54;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4d54;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 7;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *(undefined4 *)(iVar8 + 0x1c) = 0x20;
  }
  if (*(int *)(iVar8 + 0x20) < 1) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4d14;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4d14;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 8;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *(undefined4 *)(iVar8 + 0x20) = 8;
  }
  iVar5 = FUN_0060d14f(1,0x68);
  param_1[0x43] = iVar5;
  if (iVar5 == 0) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = &DAT_006b3f70;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 9;
    pcVar6 = (code *)FUN_005a07f0(s_m_Bolt_006a4cdc,s_D__Work_RCHorror_AdamSource_Adam_006a4ce4,0x43
                                  ,local_2c);
    (*pcVar6)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  *(undefined4 *)(param_1[0x43] + 8) = *(undefined4 *)(iVar8 + 8);
  *(undefined4 *)(param_1[0x43] + 0xc) = *(undefined4 *)(iVar8 + 0xc);
  *(undefined4 *)(param_1[0x43] + 0x10) = *(undefined4 *)(iVar8 + 0x10);
  puVar1 = *(undefined4 **)(iVar8 + 0x28);
  if (puVar1 == (undefined4 *)0x0) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4ca0;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar10 = ~uVar10 - 1;
    param_2 = (float)uVar10;
    cVar4 = FUN_00401940(uVar10,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4ca0;
      pcVar13 = local_28;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_28[uVar10] = '\0';
      local_24 = uVar10;
    }
    local_4._0_1_ = 10;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    *(float *)(param_1[0x43] + 0x14) = *(float *)(param_1[0x43] + 8) + 100.0;
    *(undefined4 *)(param_1[0x43] + 0x18) = *(undefined4 *)(param_1[0x43] + 0xc);
    *(undefined4 *)(param_1[0x43] + 0x1c) = *(undefined4 *)(param_1[0x43] + 0x10);
  }
  else {
    iVar5 = param_1[0x43];
    *(undefined4 *)(iVar5 + 0x14) = *puVar1;
    *(undefined4 *)(iVar5 + 0x18) = puVar1[1];
    *(undefined4 *)(iVar5 + 0x1c) = puVar1[2];
  }
  param_1[0x45] = 0;
  param_2 = (float)(1 / (longlong)*(int *)(iVar8 + 0x1c));
  *(float *)(param_1[0x43] + 0x30) = (float)(int)param_2 * 0.05;
  uVar7 = __ftol();
  *(undefined4 *)(param_1[0x43] + 0x2c) = uVar7;
  param_2 = (float)(1 / (longlong)*(int *)(iVar8 + 0x1c));
  *(float *)(param_1[0x43] + 4) = (float)(int)param_2 * 0.05;
  *(undefined4 *)(param_1[0x43] + 0x38) = 1;
  *(float *)(param_1[0x43] + 0x28) = *(float *)(iVar8 + 0x18) * 0.1;
  FUN_005b2fe0(auStack_38);
  FUN_005b2fd0();
  uVar7 = __ftol();
  *(undefined4 *)(param_1[0x43] + 0x20) = uVar7;
  *(float *)(param_1[0x43] + 0x24) = (float)*(int *)(iVar8 + 0x20);
  *(float *)(param_1[0x43] + 0x34) = (float)(int)(1 / (longlong)*(int *)(iVar8 + 0x1c)) * 0.05;
  *(undefined4 *)(param_1[0x43] + 0x3c) = *(undefined4 *)(iVar8 + 0x34);
  *(undefined4 *)(param_1[0x43] + 0x40) = *(undefined4 *)(param_1[0x43] + 0x3c);
  *(undefined4 *)(param_1[0x43] + 0x48) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(param_1[0x43] + 0x4c) = *(undefined4 *)(iVar8 + 0x30);
  fVar2 = *(float *)(iVar8 + 0x30);
  param_2 = *(float *)(iVar8 + 0x2c);
  param_3 = FUN_0060a4a0();
  param_3 = param_3 % 10000;
  *(float *)(param_1[0x43] + 0x44) = (fVar2 - param_2) * (float)param_3 * 0.0001 + param_2;
  *(undefined4 *)(param_1[0x43] + 0x50) = *(undefined4 *)(param_1[0x43] + 0x44);
  uVar7 = FUN_0061f613(*(undefined4 *)(iVar8 + 0x3c));
  *(undefined4 *)(param_1[0x43] + 0x58) = uVar7;
  uVar7 = FUN_0061f613(*(undefined4 *)(iVar8 + 0x40));
  *(undefined4 *)(param_1[0x43] + 0x5c) = uVar7;
  *(undefined1 *)(param_1[0x43] + 0x54) = 0;
  *(undefined1 *)(param_1[0x43] + 0x60) = 1;
  *(undefined4 *)(param_1[0x43] + 100) = *(undefined4 *)(iVar8 + 0x38);
  auStack_1c[0] = param_2._0_1_;
  uVar10 = 0xffffffff;
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  pcVar12 = *(char **)(iVar8 + 0x24);
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar4 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar4 != '\0');
  FUN_004040f0(*(char **)(iVar8 + 0x24),~uVar10 - 1);
  local_4._0_1_ = 0xb;
  iVar8 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar8 = FUN_0055b280();
  }
  if (*(int *)(iVar8 + 0xd8) == 0) {
    local_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 0xc;
    pcVar6 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188,
                                  local_2c);
    (*pcVar6)();
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
  }
  piVar9 = (int *)FUN_0050d980(&param_2,auStack_1c);
  iVar8 = param_1[0x44];
  local_4._0_1_ = 0xd;
  if (iVar8 != *piVar9) {
    if ((iVar8 != 0) &&
       (iVar5 = *(int *)(iVar8 + 0x14) + -1, *(int *)(iVar8 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    iVar8 = *piVar9;
    param_1[0x44] = iVar8;
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
    }
  }
  local_4._0_1_ = 0xb;
  if ((param_2 != 0.0) &&
     (iVar8 = *(int *)((int)param_2 + 0x14) + -1, *(int *)((int)param_2 + 0x14) = iVar8, iVar8 == 0)
     ) {
    FUN_005abfc0(0);
  }
  uVar7 = FUN_0060d14f(1,0xe4);
  *(undefined4 *)param_1[0x43] = uVar7;
  if (*(int *)param_1[0x43] == 0) {
    local_2c[0] = param_2._0_1_;
    uVar10 = 0xffffffff;
    local_28 = (char *)0x0;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4c58;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    local_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(s_CAdamEffectBolt__CAdamEffectBolt_006a4c58,~uVar10 - 1);
    local_4._0_1_ = 0xe;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 0xb;
    if (local_28 != (char *)0x0) {
      cVar4 = local_28[-1];
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0(local_28 + -1);
      }
      else {
        local_28[-1] = cVar4 + -1;
      }
    }
  }
  *(undefined4 *)(*(int *)param_1[0x43] + 0xdc) = 0;
  *(undefined4 *)(*(int *)param_1[0x43] + 0xe0) = 0;
  *(undefined4 *)(*(int *)param_1[0x43] + 0xd0) = 0;
  *(undefined4 *)(*(int *)param_1[0x43] + 0xcc) = 0;
  uVar7 = FUN_0060d14f(*(undefined4 *)(param_1[0x43] + 0x2c),4);
  *(undefined4 *)(*(int *)param_1[0x43] + 0xd4) = uVar7;
  if (*(int *)(*(int *)param_1[0x43] + 0xd4) == 0) {
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4c08;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    local_2c[0] = param_2._0_1_;
    local_28 = (char *)0x0;
    local_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(s_CAdamEffectBolt__CAdamEffectBolt_006a4c08,~uVar10 - 1);
    local_4._0_1_ = 0xf;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 0xb;
    if (local_28 != (char *)0x0) {
      cVar4 = local_28[-1];
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0(local_28 + -1);
      }
      else {
        local_28[-1] = cVar4 + -1;
      }
    }
  }
  uVar7 = FUN_0060d14f(*(undefined4 *)(param_1[0x43] + 0x2c),4);
  *(undefined4 *)(*(int *)param_1[0x43] + 0xd8) = uVar7;
  if (*(int *)(*(int *)param_1[0x43] + 0xd8) == 0) {
    uVar10 = 0xffffffff;
    pcVar12 = s_CAdamEffectBolt__CAdamEffectBolt_006a4bb8;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    local_2c[0] = param_2._0_1_;
    local_28 = (char *)0x0;
    local_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(s_CAdamEffectBolt__CAdamEffectBolt_006a4bb8,~uVar10 - 1);
    local_4._0_1_ = 0x10;
    FUN_005035a0(local_2c);
    if (local_28 != (char *)0x0) {
      cVar4 = local_28[-1];
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0(local_28 + -1);
      }
      else {
        local_28[-1] = cVar4 + -1;
      }
    }
  }
  iVar8 = 0;
  do {
    iVar8 = iVar8 + 0x24;
    *(undefined4 *)(*(int *)param_1[0x43] + -4 + iVar8) = 0x437f0000;
    *(undefined4 *)(*(int *)param_1[0x43] + -0x10 + iVar8) = 0x437f0000;
    *(undefined4 *)(*(int *)param_1[0x43] + -0xc + iVar8) = 0x437f0000;
    *(undefined4 *)(*(int *)param_1[0x43] + -8 + iVar8) = 0x437f0000;
  } while (iVar8 < 0x90);
  *(undefined4 *)(*(int *)param_1[0x43] + 0xc) = 0;
  *(undefined4 *)(*(int *)param_1[0x43] + 0x10) = 0;
  *(undefined4 *)(*(int *)param_1[0x43] + 0x30) = 0x3f800000;
  *(undefined4 *)(*(int *)param_1[0x43] + 0x34) = 0;
  *(undefined4 *)(*(int *)param_1[0x43] + 0x54) = 0x3f800000;
  *(undefined4 *)(*(int *)param_1[0x43] + 0x58) = 0x3f800000;
  *(undefined4 *)(*(int *)param_1[0x43] + 0x78) = 0;
  *(undefined4 *)(*(int *)param_1[0x43] + 0x7c) = 0x3f800000;
  FUN_005b3050();
  if (iStack_18 != 0) {
    cVar4 = *(char *)(iStack_18 + -1);
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_005fe5f0(iStack_18 + -1);
    }
    else {
      *(char *)(iStack_18 + -1) = cVar4 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

