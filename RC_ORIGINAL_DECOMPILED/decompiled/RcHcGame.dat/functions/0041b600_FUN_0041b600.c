/*
 * FUN_0041b600 at 0041b600
 * undefined FUN_0041b600(void)
 * Address ranges: 0041b600-0041bcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0041b600(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 local_d5;
  float local_d4;
  undefined1 local_d0 [4];
  undefined4 *puStack_cc;
  uint uStack_c8;
  undefined1 local_c0 [16];
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 local_90 [16];
  undefined4 *local_80;
  void *local_7c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006219e9;
  pvStack_c = ExceptionList;
  bVar7 = false;
  local_d4 = 0.0;
  ExceptionList = &pvStack_c;
  local_80 = param_1;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = s_DungeonMax_0068f13c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_DungeonMax_0068f13c,~uVar5 - 1);
  local_90[0] = local_d5;
  local_4 = 0;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = &DAT_0068f148;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0068f148,~uVar5 - 1);
  local_4._0_1_ = 1;
  FUN_0042b270(param_2,local_90,param_3,local_c0);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_7c = operator_new(0x118);
  local_4._0_1_ = 5;
  if (local_7c == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    local_d0[0] = local_d5;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = s_DungeonMax_0068f13c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_DungeonMax_0068f13c,~uVar5 - 1);
    bVar7 = true;
    local_d4 = 1.4013e-45;
    local_4 = CONCAT31(local_4._1_3_,6);
    iVar2 = FUN_00419d90(local_d0,param_1[0x60]);
  }
  local_4 = 3;
  if (bVar7) {
    FUN_004040a0(1);
  }
  param_1[0x8c] = iVar2;
  *param_1 = &PTR_FUN_0064b7a4;
  if (iVar2 == 0) {
    local_d0[0] = local_d5;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 8;
    pcVar3 = (code *)FUN_005a07f0(s_m_Machine____0_0068f310,
                                  s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0xcf,local_d0);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  local_d0[0] = local_d5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = s_DungeonMax_0068f13c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_DungeonMax_0068f13c,~uVar5 - 1);
  local_4._0_1_ = 9;
  FUN_004253c0(auStack_a0,local_d0);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  FUN_00425570(auStack_b0);
  local_4._0_1_ = 0xc;
  fVar11 = (float10)FUN_0041afb0();
  local_d4 = (float)fVar11;
  if (0.0 < *(float *)(param_3 + 0x1c)) {
    local_d4 = local_d4 * *(float *)(param_3 + 0x1c);
  }
  local_c0[0] = local_d5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = s_MinHeight_0068f130;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MinHeight_0068f130,~uVar5 - 1);
  local_4._0_1_ = 0xd;
  iVar2 = FUN_005ac9d0(local_c0,auStack_b0,0,auStack_a0,0);
  local_4._0_1_ = 0xe;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_d5);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  else {
    fVar11 = (float10)*(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 0xd;
  param_1[0x8d] = (float)(fVar11 * (float10)local_d4);
  FUN_005acca0();
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_c0[0] = local_d5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = s_MaxHeight_0068f124;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxHeight_0068f124,~uVar5 - 1);
  local_4._0_1_ = 0xf;
  iVar2 = FUN_005ac9d0(local_c0,auStack_b0,0,auStack_a0,0);
  local_4._0_1_ = 0x10;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_d5);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  else {
    fVar11 = (float10)*(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 0xf;
  local_d4 = (float)(fVar11 * (float10)local_d4);
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004040a0(1);
  local_d0[0] = local_d5;
  param_1[0x8e] = local_d4 - (float)param_1[0x8d];
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = (char *)&DAT_0068f118;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar8 = &DAT_0068f118;
    puVar10 = puStack_cc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 0x11;
  iVar2 = FUN_005ac9d0(local_d0,auStack_b0,2,auStack_a0,0);
  local_4._0_1_ = 0x12;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_d5);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  uVar4 = __ftol();
  param_1[0x8f] = uVar4;
  local_4._0_1_ = 0x11;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004040a0(1);
  local_d0[0] = local_d5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar9 = (char *)&DAT_0068f10c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar8 = &DAT_0068f10c;
    puVar10 = puStack_cc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 0x13;
  iVar2 = FUN_005ac9d0(local_d0,auStack_b0,3,auStack_a0,0);
  local_4._0_1_ = 0x14;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_d5);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  uVar4 = __ftol();
  param_1[0x90] = uVar4;
  local_4._0_1_ = 0x13;
  FUN_005acca0();
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  if (local_d4 < (float)param_1[0x8d]) {
    local_d0[0] = local_d5;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = puStack_cc;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)puStack_cc + uVar5) = 0;
      uStack_c8 = uVar5;
    }
    local_4._0_1_ = 0x15;
    pcVar3 = (code *)FUN_005a07f0(s_maxheight_>__m_FootHeight_0068f2f4,
                                  s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,0xe0,local_d0);
    (*pcVar3)();
    local_4._0_1_ = 0xc;
    FUN_004040a0(1);
  }
  if (iStack_ac != 0) {
    cVar1 = *(char *)(iStack_ac + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_ac + -1);
    }
    else {
      *(char *)(iStack_ac + -1) = cVar1 + -1;
    }
  }
  iStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  if (iStack_9c != 0) {
    cVar1 = *(char *)(iStack_9c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_9c + -1);
    }
    else {
      *(char *)(iStack_9c + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

