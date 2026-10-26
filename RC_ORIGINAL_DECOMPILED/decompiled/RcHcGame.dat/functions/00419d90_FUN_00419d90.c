/*
 * FUN_00419d90 at 00419d90
 * undefined FUN_00419d90(void)
 * Address ranges: 00419d90-0041a7ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00419d90(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 local_dd;
  uint local_dc;
  void *local_d8;
  undefined1 local_d4 [4];
  char *local_d0;
  float local_c4;
  undefined1 local_c0 [4];
  char *local_bc;
  uint uStack_b8;
  void *local_b0;
  undefined1 local_ac [16];
  undefined1 local_9c [4];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 *local_8c;
  undefined1 local_88 [4];
  int iStack_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006217cf;
  pvStack_c = ExceptionList;
  uVar9 = 0;
  local_dc = 0;
  local_d4[0] = local_dd;
  ExceptionList = &pvStack_c;
  local_8c = param_1;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar10 = s_MachineWrapper_0068f218;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MachineWrapper_0068f218,~uVar6 - 1);
  local_4 = 0;
  uVar3 = FUN_005033a0(local_ac,local_d4);
  local_4._0_1_ = 1;
  FUN_00501cb0(uVar3);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  *(undefined1 *)(param_1 + 0x41) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 5;
  *param_1 = &PTR_FUN_0064b73c;
  FUN_004253c0(local_88,param_1 + 0x41);
  local_4._0_1_ = 6;
  FUN_00425570(local_9c);
  local_4._0_1_ = 7;
  local_b0 = operator_new(0x294);
  local_4._0_1_ = 8;
  if (local_b0 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    local_c0[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = s_Turtop_act_0068f170;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Turtop_act_0068f170,~uVar6 - 1);
    local_dc = 1;
    local_4 = CONCAT31(local_4._1_3_,9);
    local_d4[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = s_MachineTop_0068f20c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_MachineTop_0068f20c,~uVar6 - 1);
    local_dc = 3;
    local_4 = 10;
    uVar3 = FUN_005033a0(local_ac,local_d4);
    uVar9 = 7;
    local_dc = 7;
    local_4 = 0xb;
    uVar3 = FUN_0049b240(uVar3,local_c0);
  }
  param_1[0x3e] = uVar3;
  local_4 = 0xd;
  if ((uVar9 & 4) != 0) {
    uVar9 = uVar9 & 0xfffffffb;
    local_dc = uVar9;
    FUN_004040a0(1);
  }
  local_4 = 0xc;
  if ((uVar9 & 2) != 0) {
    uVar9 = uVar9 & 0xfffffffd;
    local_dc = uVar9;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffe;
    FUN_004040a0(1);
  }
  local_d8 = operator_new(0x294);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  if (local_d8 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    local_d4[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = s_Turbot_act_0068f17c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    local_c4 = (float)uVar6;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar10 = s_Turbot_act_0068f17c;
      pcVar11 = local_d0;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190(uVar6);
    }
    local_dc = uVar9 | 8;
    local_c0[0] = local_dd;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = s_MachineBottom_0068f1fc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    local_c4 = (float)uVar6;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar10 = s_MachineBottom_0068f1fc;
      pcVar11 = local_bc;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190(uVar6);
    }
    local_dc = uVar9 | 0x18;
    local_4 = 0x11;
    uVar3 = FUN_005033a0(local_ac,local_c0);
    uVar9 = uVar9 | 0x38;
    local_4 = 0x12;
    local_dc = uVar9;
    uVar3 = FUN_0049b240(uVar3,local_d4);
  }
  param_1[0x3f] = uVar3;
  local_4 = 0x14;
  if ((uVar9 & 0x20) != 0) {
    uVar9 = uVar9 & 0xffffffdf;
    local_dc = uVar9;
    FUN_004040a0(1);
  }
  local_4 = 0x13;
  if ((uVar9 & 0x10) != 0) {
    uVar9 = uVar9 & 0xffffffef;
    local_dc = uVar9;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if ((uVar9 & 8) != 0) {
    uVar9 = uVar9 & 0xfffffff7;
    FUN_004040a0(1);
  }
  if (param_1[0x3e] == 0) {
    local_d4[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pvVar8 = (void *)(~uVar6 - 1);
    local_d8 = pvVar8;
    cVar2 = FUN_00401940(pvVar8,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar11 = local_d0;
      for (uVar6 = (uint)pvVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = (uint)pvVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190(pvVar8);
    }
    local_4._0_1_ = 0x16;
    pcVar4 = (code *)FUN_005a07f0(s_m_Top____0_0068f1c4,s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,
                                  0x21,local_d4);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004040a0(1);
  }
  if (param_1[0x3f] == 0) {
    local_d4[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pvVar8 = (void *)(~uVar6 - 1);
    local_d8 = pvVar8;
    cVar2 = FUN_00401940(pvVar8,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar11 = local_d0;
      for (uVar6 = (uint)pvVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = (uint)pvVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190(pvVar8);
    }
    local_4._0_1_ = 0x17;
    pcVar4 = (code *)FUN_005a07f0(s_m_Bottom____0_0068f1b4,
                                  s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0x22,local_d4);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004040a0(1);
  }
  iVar5 = param_1[0x3e];
  *(undefined1 *)(iVar5 + 0x200) = 0;
  *(undefined4 *)(iVar5 + 0x204) = 0;
  iVar5 = param_1[0x3f];
  *(undefined1 *)(iVar5 + 0x200) = 0;
  *(undefined4 *)(iVar5 + 0x204) = 0;
  FUN_00502350(*(int *)(param_3 + 0x18) != 0);
  FUN_00502350(*(int *)(param_3 + 0x18) != 0);
  fVar12 = (float10)FUN_005b17e0(*(undefined4 *)(param_3 + 0x14));
  FUN_0049cd90((float)fVar12);
  *(undefined1 *)(param_1[0x3e] + 0x20b) = 0;
  FUN_0049b8d0();
  *(undefined1 *)(param_1[0x3e] + 0x20a) = 0;
  FUN_0049b8d0();
  fVar12 = (float10)FUN_005b17e0(*(undefined4 *)(param_3 + 0x14));
  FUN_0049cd90((float)fVar12);
  local_d4[0] = local_dd;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar10 = s_MachineScale_0068f154;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6 - 1;
  local_d8 = (void *)uVar6;
  cVar2 = FUN_00401940(uVar6,1);
  if (cVar2 != '\0') {
    pcVar10 = s_MachineScale_0068f154;
    pcVar11 = local_d0;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_4._0_1_ = 0x18;
  iVar5 = FUN_005ac9d0(local_d4,local_9c,1,local_88,0);
  local_4._0_1_ = 0x19;
  if (*(float *)(iVar5 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar5 + 0x14,&local_dd);
    *(float *)(iVar5 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar5 + 0x60);
  }
  param_1[0x45] = (float)fVar12;
  local_4._0_1_ = 0x18;
  FUN_005acca0();
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  if (*(int *)(param_3 + 0x1c) == -0x40800000) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(param_3 + 0x1c);
  }
  fVar1 = fVar1 * (float)param_1[0x45];
  local_c4 = fVar1;
  FUN_0049cca0(fVar1,fVar1,fVar1);
  FUN_0049cca0(fVar1,fVar1,fVar1);
  local_b0 = operator_new(0x294);
  local_4._0_1_ = 0x1a;
  if (local_b0 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    local_c0[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = s_Brcrate_act_0068f164;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    local_d8 = (void *)uVar6;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar10 = s_Brcrate_act_0068f164;
      pcVar11 = local_bc;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_bc[uVar6] = '\0';
      uStack_b8 = uVar6;
    }
    local_dc = uVar9 | 0x40;
    local_4 = CONCAT31(local_4._1_3_,0x1b);
    local_d4[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_0068f1ac;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    local_d8 = (void *)uVar6;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar10 = (char *)&DAT_0068f1ac;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)local_d0 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        local_d0 = local_d0 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_d0 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        local_d0 = local_d0 + 1;
      }
      FUN_00404190(uVar6);
    }
    local_dc = uVar9 | 0xc0;
    local_4 = 0x1c;
    uVar3 = FUN_005033a0(local_ac,local_d4);
    uVar9 = uVar9 | 0x1c0;
    local_4 = 0x1d;
    local_dc = uVar9;
    uVar3 = FUN_0049b240(uVar3,local_c0);
  }
  param_1[0x40] = uVar3;
  local_4 = 0x1f;
  if ((uVar9 & 0x100) != 0) {
    uVar9 = uVar9 & 0xfffffeff;
    local_dc = uVar9;
    FUN_004040a0(1);
  }
  local_4 = 0x1e;
  if ((uVar9 & 0x80) != 0) {
    uVar9 = uVar9 & 0xffffff7f;
    local_dc = uVar9;
    FUN_004040a0(1);
  }
  local_4 = 7;
  if (((uVar9 & 0x40) != 0) && (local_bc != (char *)0x0)) {
    cVar2 = local_bc[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_bc + -1);
    }
    else {
      local_bc[-1] = cVar2 + -1;
    }
  }
  if (param_1[0x40] == 0) {
    local_c0[0] = local_dd;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar11 = local_bc;
      for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = uVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      local_bc[uVar6] = '\0';
      uStack_b8 = uVar6;
    }
    local_4._0_1_ = 0x21;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pipe_0068f1a4,s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0x34
                                  ,local_c0);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,7);
    if (local_bc != (char *)0x0) {
      cVar2 = local_bc[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0(local_bc + -1);
      }
      else {
        local_bc[-1] = cVar2 + -1;
      }
    }
  }
  local_b0 = (void *)(local_c4 * 0.6);
  FUN_0049cca0(local_b0,local_b0,local_c4 * 1.7);
  iVar5 = param_1[0x40];
  *(undefined1 *)(iVar5 + 0x200) = 0;
  *(undefined4 *)(iVar5 + 0x204) = 0;
  FUN_0041ac30(param_3);
  if (iStack_98 != 0) {
    cVar2 = *(char *)(iStack_98 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(iStack_98 + -1);
    }
    else {
      *(char *)(iStack_98 + -1) = cVar2 + -1;
    }
  }
  iStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  if (iStack_84 != 0) {
    cVar2 = *(char *)(iStack_84 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(iStack_84 + -1);
    }
    else {
      *(char *)(iStack_84 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

