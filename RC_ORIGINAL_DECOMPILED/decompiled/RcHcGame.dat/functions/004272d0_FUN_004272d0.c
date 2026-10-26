/*
 * FUN_004272d0 at 004272d0
 * undefined FUN_004272d0(void)
 * Address ranges: 004272d0-00427a89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004272d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  int *piVar12;
  char *pcVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined4 uStack_70;
  undefined1 local_60 [4];
  char *local_5c;
  int aiStack_4c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622c0e;
  pvStack_c = ExceptionList;
  bVar1 = false;
  ExceptionList = &pvStack_c;
  FUN_00422420();
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x61) = (undefined1)param_6;
  FUN_004040a0();
  param_1[0x67] = 0;
  param_1[0x68] = param_5;
  param_1[0x69] = 0;
  *param_1 = &PTR_FUN_0064bdb8;
  pcVar10 = *(char **)(param_5 + 0xc);
  local_60[0] = (undefined1)param_6;
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_4._0_1_ = 3;
  if (pcVar10 == (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar15 = CONCAT44(~uVar8 - 1,&DAT_006b3f70);
  }
  else {
    uVar8 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    uVar15 = CONCAT44(~uVar8 - 1,pcVar10);
  }
  FUN_004040f0(uVar15);
  FUN_00503ae0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  pcVar10 = *(char **)(param_5 + 0x10);
  local_60[0] = (undefined1)param_6;
  FUN_004040a0();
  local_4._0_1_ = 4;
  if (pcVar10 != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar13 = pcVar10;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar10,~uVar8 - 1);
  }
  FUN_0040cc00();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0();
  FUN_00502350();
  if (*(int *)(param_5 + 0x14) == 0) {
    local_60[0] = (undefined1)param_6;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar13 = local_5c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s_a_Entity_StartPoint____0_0068fd8c,
                                  s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x34);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0();
  }
  pcVar10 = *(char **)(*(int *)(param_5 + 0x14) + 0xc);
  local_60[0] = (undefined1)param_6;
  FUN_004040a0();
  uVar8 = 0xffffffff;
  pcVar13 = pcVar10;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8 - 1;
  cVar2 = FUN_00401940(uVar8,1);
  if (cVar2 != '\0') {
    pcVar13 = local_5c;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00404190();
  }
  local_4._0_1_ = 6;
  iVar4 = FUN_0059c970();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0();
  if (iVar4 == 0) {
    local_60[0] = (undefined1)param_6;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar13 = local_5c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s_start____0_0068fd80,s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,
                                  0x36);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0();
  }
  FUN_00599450();
  local_4 = CONCAT31(local_4._1_3_,8);
  iVar4 = FUN_0059b1e0();
  if (iVar4 == -1) {
    local_60[0] = (undefined1)param_6;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar13 = local_5c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 9;
    pcVar3 = (code *)FUN_005a07f0(s_id____INVALID_WAYPOINT_ID_0068fd64,
                                  s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x38);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004040a0();
  }
  pvVar5 = operator_new(0x378);
  local_4 = CONCAT31(local_4._1_3_,10);
  if (pvVar5 == (void *)0x0) {
    uVar7 = 0;
  }
  else {
    __ftol();
    piVar6 = (int *)FUN_004258a0();
    piVar12 = aiStack_4c;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar12 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar12 = piVar12 + 1;
    }
    uVar7 = FUN_00426560();
    bVar1 = true;
    local_4 = CONCAT31(local_4._1_3_,0xb);
    uVar7 = FUN_00421fa0(param_2,param_3,param_4,uStack_70,aiStack_4c,uVar7,param_1);
  }
  param_1[0x5f] = uVar7;
  local_4 = 8;
  if (bVar1) {
    local_4._0_1_ = 0xd;
    local_4._1_3_ = 0;
    FUN_004040a0();
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_005ab4d0();
  }
  if (param_1[0x5f] == 0) {
    local_60[0] = (undefined1)param_6;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar13 = local_5c;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 0xe;
    pcVar3 = (code *)FUN_005a07f0(s_m_Actor_0068fd5c,s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,
                                  0x3e,local_60);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004040a0();
  }
  FUN_00509a90(param_1[0x5f],param_1 + 0x5f);
  pcVar10 = *(char **)(param_5 + 0xc);
  local_60[0] = (undefined1)param_6;
  FUN_004040a0();
  uVar8 = 0xffffffff;
  pcVar13 = pcVar10;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8 - 1;
  cVar2 = FUN_00401940(uVar8,1);
  if (cVar2 != '\0') {
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)local_5c = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      local_5c = local_5c + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *local_5c = *pcVar10;
      pcVar10 = pcVar10 + 1;
      local_5c = local_5c + 1;
    }
    FUN_00404190();
  }
  local_4._0_1_ = 0xf;
  FUN_0040cad0();
  local_4._0_1_ = 0x10;
  FUN_00503ae0();
  local_4._0_1_ = 0xf;
  FUN_004040a0();
  local_4._0_1_ = 8;
  FUN_004040a0();
  if (0.0 < *(float *)(param_1[0x68] + 0x24)) {
    FUN_0049cca0();
  }
  iVar4 = FUN_004284e0();
  fVar14 = (float10)FUN_004288a0();
  if (fVar14 < (float10)*(float *)(iVar4 + 0x10)) {
    puVar11 = *(undefined1 **)(param_6 + 4);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_0064a3b4;
    }
    iVar4 = FUN_004284e0();
    iVar4 = FUN_004284e0((double)*(float *)(iVar4 + 4));
    FUN_005ae390(aiStack_4c,s__s__MinPlayerRange_>_SenseRange___0068fd30,puVar11,
                 (double)*(float *)(iVar4 + 0x10));
    local_4._0_1_ = 0x11;
    FUN_005035a0();
    local_4._0_1_ = 8;
    if (aiStack_4c[1] != 0) {
      cVar2 = *(char *)(aiStack_4c[1] + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(aiStack_4c[1] + -1) = cVar2 + -1;
      }
    }
  }
  iVar4 = FUN_004284e0();
  if ((float)param_1[0x54] < *(float *)(iVar4 + 0x10)) {
    puVar11 = *(undefined1 **)(param_6 + 4);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_0064a3b4;
    }
    iVar4 = FUN_004284e0();
    iVar4 = FUN_004284e0((double)*(float *)(iVar4 + 4));
    FUN_005ae390(aiStack_4c,s__s__AttackRange_<_MinPlayerRange_0068fd04,puVar11,
                 (double)*(float *)(iVar4 + 0x10));
    local_4._0_1_ = 0x12;
    FUN_005035a0();
    if (aiStack_4c[1] != 0) {
      cVar2 = *(char *)(aiStack_4c[1] + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(aiStack_4c[1] + -1) = cVar2 + -1;
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005630e0();
  ExceptionList = pvStack_c;
  return param_1;
}

