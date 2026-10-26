/*
 * FUN_004c8680 at 004c8680
 * undefined FUN_004c8680(void)
 * Address ranges: 004c8680-004c894c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c8747) */
/* WARNING: Removing unreachable block (ram,0x004c8758) */

undefined4 FUN_004c8680(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  float10 fVar10;
  int local_34;
  int local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00630920;
  pvStack_c = ExceptionList;
  local_34 = 0;
  local_4 = 0;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    local_2c[0] = (undefined1)param_1;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  piVar4 = (int *)FUN_00453d20();
  if (*piVar4 != 0) {
    local_4._0_1_ = 2;
    local_34 = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 0;
  if (local_30 != 0) {
    FUN_004098d0();
  }
  if (local_34 != 0) {
    if (local_34 == 0) {
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0();
      uVar6 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar3)();
      local_4._0_1_ = 0;
      FUN_004040a0();
    }
    iVar2 = *(int *)(local_34 + 0x360);
    if (iVar2 == 0) {
      uVar6 = 0xffffffff;
      pcVar8 = s_No_player_found_0069884c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        pcVar8 = s_No_player_found_0069884c;
        pcVar9 = *(char **)(param_1 + 4);
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        *(uint *)(param_1 + 8) = uVar6;
        *(undefined1 *)(uVar6 + *(int *)(param_1 + 4)) = 0;
      }
    }
    else {
      if (*(int *)(iVar2 + 500) == 0) {
        auStack_1c[0] = (undefined1)param_1;
        FUN_004040a0();
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x161,auStack_1c);
        (*pcVar3)();
        local_4._0_1_ = 0;
        FUN_004040a0();
      }
      fVar10 = (float10)(**(code **)(**(int **)(iVar2 + 500) + 8))();
      uVar5 = FUN_005ae390(auStack_1c,s_Crosshair_radius_is_now___2f_00698b0c,(double)fVar10);
      local_4._0_1_ = 5;
      FUN_0040cc00(uVar5,0,0xffffffff);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
    }
  }
  local_4 = 0xffffffff;
  if (local_34 != 0) {
    iVar2 = *(int *)(local_34 + 0x14) + -1;
    *(int *)(local_34 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0();
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

