/*
 * FUN_0052bb40 at 0052bb40
 * undefined FUN_0052bb40(void)
 * Address ranges: 0052bb40-0052c24d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0052bb40(int param_1,int *param_2,int *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 uStack_55;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639fa0;
  local_c = ExceptionList;
  local_4c = 0;
  ExceptionList = &local_c;
  FUN_005844b0();
  local_4 = 0;
  if (*param_2 != local_4c) {
    if (*param_2 != 0) {
      FUN_004098d0();
    }
    *param_2 = local_4c;
    FUN_005844b0();
  }
  local_4 = 0xffffffff;
  FUN_0057d310();
  local_4c = 0;
  FUN_005844b0();
  local_4 = 1;
  if (*param_3 != local_4c) {
    if (*param_3 != 0) {
      FUN_004098d0();
    }
    *param_3 = local_4c;
    FUN_005844b0();
  }
  local_4 = 0xffffffff;
  FUN_0057d310();
  *param_4 = 0;
  cVar2 = FUN_0052a370(param_1,&local_48,&local_44,&local_40);
  if (cVar2 == '\0') {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_3c,s_FindNextSubLevel____Can_t_decode_006a0514,puVar3);
    local_4 = 2;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x3e6,uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
LAB_0052c237:
    uVar4 = 0;
  }
  else {
    local_50 = 0;
    FUN_005844b0();
    local_4 = 3;
    uVar4 = FUN_0052a250(local_2c,local_48);
    local_4._0_1_ = 4;
    FUN_00529570(&local_54,uVar4);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    if (local_54 == 0) {
      local_3c[0] = param_2._0_1_;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 7;
      pcVar5 = (code *)FUN_005a07f0(s_level_IsNotNull___006a0500,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x3f6,local_3c);
      (*pcVar5)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    uVar4 = FUN_0052a800(local_1c,local_48,local_44,local_40 + 1);
    local_4._0_1_ = 8;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 8;
    if (local_54 == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_55);
      local_4._0_1_ = 9;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_3c);
      (*pcVar5)();
      local_4._0_1_ = 8;
      FUN_004040a0(1);
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    piVar6 = (int *)FUN_004f20b0(&local_4c,uVar4);
    local_4._0_1_ = 10;
    if (local_50 != *piVar6) {
      if (local_50 != 0) {
        FUN_004098d0();
      }
      local_50 = *piVar6;
      FUN_005844b0();
    }
    local_4._0_1_ = 8;
    FUN_0057d310();
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    if (local_50 == 0) {
      uVar4 = FUN_0052a800(local_1c,local_48,local_44 + 1,1);
      local_4._0_1_ = 0xb;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0xb;
      if (local_54 == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_55);
        local_4._0_1_ = 0xc;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar5)();
        local_4._0_1_ = 0xb;
        FUN_004040a0(1);
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      piVar6 = (int *)FUN_004f20b0(&local_4c,uVar4);
      local_4._0_1_ = 0xd;
      if (local_50 != *piVar6) {
        if (local_50 != 0) {
          FUN_004098d0();
        }
        local_50 = *piVar6;
        FUN_005844b0();
      }
      local_4._0_1_ = 0xb;
      FUN_0057d310();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
      if (local_50 == 0) {
        if (local_54 == 0) {
          FUN_00409810(&DAT_006b3f70,&uStack_55);
          local_4._0_1_ = 0xe;
          pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_3c);
          (*pcVar5)();
          local_4._0_1_ = 6;
          FUN_004040a0(1);
        }
        iVar7 = FUN_004f21d0();
        if (local_44 != iVar7) {
          uVar4 = FUN_0052a250(local_1c,local_48 + 1);
          local_4._0_1_ = 0x11;
          piVar6 = (int *)FUN_005293f0(&param_4,uVar4);
          local_4._0_1_ = 0x12;
          if (local_54 != *piVar6) {
            if (local_54 != 0) {
              FUN_004098d0();
            }
            local_54 = *piVar6;
            FUN_005844b0();
          }
          local_4._0_1_ = 0x11;
          FUN_0057d310();
          local_4._0_1_ = 6;
          FUN_004040a0(1);
          if (local_54 != 0) {
            uVar4 = FUN_0052a800(local_1c,local_48 + 1,1,1);
            local_4._0_1_ = 0x13;
            uVar1 = (undefined1)local_4;
            local_4._0_1_ = 0x13;
            if (local_54 == 0) {
              FUN_00409810(&DAT_006b3f70,&param_4);
              local_4._0_1_ = 0x14;
              pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                            0xb6,local_3c);
              (*pcVar5)();
              local_4._0_1_ = 0x13;
              FUN_004040a0(1);
              uVar1 = (undefined1)local_4;
            }
            local_4._0_1_ = uVar1;
            piVar6 = (int *)FUN_004f20b0(&local_4c,uVar4);
            local_4._0_1_ = 0x15;
            if (local_50 != *piVar6) {
              if (local_50 != 0) {
                FUN_004098d0();
              }
              local_50 = *piVar6;
              FUN_005844b0();
            }
            local_4._0_1_ = 0x13;
            FUN_0057d310();
            local_4._0_1_ = 6;
            FUN_004040a0(1);
            if ((local_54 != 0) && (local_50 != 0)) {
              if (*param_2 != local_50) {
                if (*param_2 != 0) {
                  FUN_004098d0();
                }
                *param_2 = local_50;
                FUN_005844b0();
              }
              iVar7 = *param_3;
              if (iVar7 != local_54) goto joined_r0x0052c199;
              goto LAB_0052c1ad;
            }
          }
          puVar3 = *(undefined1 **)(param_1 + 4);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          uVar4 = FUN_005ae390(local_1c,s_FindNextSubLevel____Can_t_find_n_006a04c0,puVar3);
          local_4._0_1_ = 0x16;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x420,uVar4);
          local_4._0_1_ = 6;
          FUN_004040a0(1);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_0057d310();
          local_4 = 0xffffffff;
          FUN_0057d310();
          goto LAB_0052c237;
        }
        FUN_005844b0();
        local_4._0_1_ = 0xf;
        if (*param_2 != 0) {
          if (*param_2 != 0) {
            FUN_004098d0();
          }
          *param_2 = 0;
          FUN_005844b0();
        }
        local_4._0_1_ = 6;
        FUN_0057d310();
        FUN_005844b0();
        local_4._0_1_ = 0x10;
        if (*param_3 != 0) {
          if (*param_3 != 0) {
            FUN_004098d0();
          }
          *param_3 = 0;
          FUN_005844b0();
        }
        local_4._0_1_ = 6;
        FUN_0057d310();
        *param_4 = 1;
      }
      else {
        if (*param_2 != local_50) {
          if (*param_2 != 0) {
            FUN_004098d0();
          }
          *param_2 = local_50;
          FUN_005844b0();
        }
        iVar7 = *param_3;
        if (iVar7 != local_54) {
joined_r0x0052c199:
          if (iVar7 != 0) {
            FUN_004098d0();
          }
          *param_3 = local_54;
          goto LAB_0052c1a6;
        }
      }
    }
    else {
      if (*param_2 != local_50) {
        if (*param_2 != 0) {
          FUN_004098d0();
        }
        *param_2 = local_50;
        FUN_005844b0();
      }
      if (*param_3 != local_54) {
        if (*param_3 != 0) {
          FUN_004098d0();
        }
        *param_3 = local_54;
LAB_0052c1a6:
        FUN_005844b0();
      }
    }
LAB_0052c1ad:
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_0057d310();
    local_4 = 0xffffffff;
    FUN_0057d310();
    uVar4 = 1;
  }
  ExceptionList = local_c;
  return uVar4;
}

