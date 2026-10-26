/*
 * FUN_005639e0 at 005639e0
 * undefined FUN_005639e0(void)
 * Address ranges: 005639e0-00563cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_005639e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auStack_41 [5];
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063fdd8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x7ad);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(char *)(param_1 + 0x125) == '\0') {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar3 = FUN_00401940(uVar7,1);
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_38;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x7ae,local_3c);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  if (*(char *)(param_1 + 0x194) == '\0') {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar3 = FUN_00401940(uVar7,1);
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_38 = *puVar9;
        puVar9 = puVar9 + 1;
        local_38 = local_38 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_38 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        local_38 = (undefined4 *)((int)local_38 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_InFrame_006a3704,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,
                                  0x7af,local_3c);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  if (param_2 == 0) {
    local_4 = local_4 & 0xffffff00;
    FUN_005ae770();
    bVar12 = false;
  }
  else {
    if (*(int *)(param_1 + 0xdc) == 0) {
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 4;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_3c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    if (*(int *)(param_2 + 0x5c) == 0) {
      auStack_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 6;
      pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,auStack_2c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    uVar1 = *(undefined4 *)(param_2 + 0x5c);
    if (*(int *)(param_1 + 0x100) == 0) {
      FUN_00409810(&DAT_006b3f70,auStack_41);
      local_4._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                    auStack_1c);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x100);
    uVar5 = FUN_00556570(0);
    iVar6 = FUN_005bc770(uVar2,uVar1,uVar5);
    bVar12 = iVar6 != 0;
    local_4 = local_4 & 0xffffff00;
    FUN_005ae770();
    local_4 = 0xffffffff;
    iVar6 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return bVar12;
}

