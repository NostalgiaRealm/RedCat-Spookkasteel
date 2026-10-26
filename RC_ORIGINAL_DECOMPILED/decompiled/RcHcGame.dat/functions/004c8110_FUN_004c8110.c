/*
 * FUN_004c8110 at 004c8110
 * undefined FUN_004c8110(void)
 * Address ranges: 004c8110-004c83a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c81d9) */
/* WARNING: Removing unreachable block (ram,0x004c81ea) */

undefined4 FUN_004c8110(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_34;
  int local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00630898;
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
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_00453d20(&local_30);
  if (*piVar4 != 0) {
    local_4._0_1_ = 2;
    local_34 = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 0;
  if ((local_30 != 0) &&
     (iVar2 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  if (local_34 != 0) {
    if (local_34 == 0) {
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar3)();
      local_4._0_1_ = 0;
      FUN_004040a0(1);
    }
    iVar2 = *(int *)(local_34 + 0x360);
    if (iVar2 == 0) {
      uVar5 = 0xffffffff;
      pcVar7 = s_No_player_found_0069884c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar7 = s_No_player_found_0069884c;
        pcVar8 = *(char **)(param_1 + 4);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_00404190(uVar5);
      }
    }
    else {
      if (*(int *)(iVar2 + 500) == 0) {
        auStack_1c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x161,auStack_1c);
        (*pcVar3)();
        local_4._0_1_ = 0;
        FUN_004040a0(1);
      }
      (**(code **)(**(int **)(iVar2 + 500) + 4))();
    }
  }
  local_4 = 0xffffffff;
  if (local_34 != 0) {
    iVar2 = *(int *)(local_34 + 0x14) + -1;
    *(int *)(local_34 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

