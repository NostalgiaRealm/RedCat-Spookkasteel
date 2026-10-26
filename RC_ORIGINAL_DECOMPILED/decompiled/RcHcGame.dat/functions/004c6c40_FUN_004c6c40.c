/*
 * FUN_004c6c40 at 004c6c40
 * undefined FUN_004c6c40(void)
 * Address ranges: 004c6c40-004c7035
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004c6c40(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 local_36;
  undefined1 uStack_35;
  int local_34;
  int local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006306f8;
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
    FUN_00409810(&DAT_006b3f70,&local_36);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_00453d20(&local_30);
  local_4._0_1_ = 2;
  if (local_34 != *piVar4) {
    if ((local_34 != 0) &&
       (iVar2 = *(int *)(local_34 + 0x14) + -1, *(int *)(local_34 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
    local_34 = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 0;
  bVar9 = local_34 != 0;
  if (local_30 != 0) {
    FUN_004098d0();
  }
  if (bVar9) {
    if (local_34 == 0) {
      FUN_00409810(&DAT_006b3f70,&local_36);
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
      if (*(int *)(iVar2 + 0x1f0) == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_35);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,auStack_1c);
        (*pcVar3)();
        local_4._0_1_ = 0;
        FUN_004040a0(1);
      }
      FUN_0060a6f2(*(undefined4 *)(iVar2 + 0x1f0),0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor
                   ,&CRcPlayerProperties::RTTI_Type_Descriptor,0);
      cVar1 = FUN_00439f10(4);
      if (cVar1 == '\0') {
        cVar1 = FUN_00439f10(8);
        if (cVar1 == '\0') {
          cVar1 = FUN_00439f10(2);
          if (cVar1 == '\0') {
            cVar1 = FUN_00439f10(1);
            if (cVar1 == '\0') {
              uVar5 = 0xffffffff;
              pcVar7 = s_Skill_Shot_enabled_006988b8;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              uVar5 = ~uVar5 - 1;
              cVar1 = FUN_00401940(uVar5,1);
              if (cVar1 != '\0') {
                pcVar7 = s_Skill_Shot_enabled_006988b8;
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
              FUN_00439ee0(1);
            }
            else {
              uVar5 = 0xffffffff;
              pcVar7 = s_Skill_Power_Shot_enabled_006988cc;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar1 = *pcVar7;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 != '\0');
              uVar5 = ~uVar5 - 1;
              cVar1 = FUN_00401940(uVar5,1);
              if (cVar1 != '\0') {
                pcVar7 = s_Skill_Power_Shot_enabled_006988cc;
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
              FUN_00439ee0(2);
            }
          }
          else {
            uVar5 = 0xffffffff;
            pcVar7 = s_Skill_Super_Jump_enabled_006988e8;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5 - 1;
            cVar1 = FUN_00401940(uVar5,1);
            if (cVar1 != '\0') {
              pcVar7 = s_Skill_Super_Jump_enabled_006988e8;
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
            FUN_00439ee0(8);
          }
        }
        else {
          uVar5 = 0xffffffff;
          pcVar7 = s_Skill_Super_Shot_enabled_00698904;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5 - 1;
          cVar1 = FUN_00401940(uVar5,1);
          if (cVar1 != '\0') {
            pcVar7 = s_Skill_Super_Shot_enabled_00698904;
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
          FUN_00439ee0(4);
        }
      }
      else {
        uVar5 = 0xffffffff;
        pcVar7 = s_Skills_disabled_00698920;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(s_Skills_disabled_00698920,~uVar5 - 1);
        FUN_00439ef0(0x10);
        FUN_00439ef0(4);
        FUN_00439ef0(8);
        FUN_00439ef0(2);
        FUN_00439ef0(1);
      }
    }
  }
  local_4 = 0xffffffff;
  if (local_34 != 0) {
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return 1;
}

