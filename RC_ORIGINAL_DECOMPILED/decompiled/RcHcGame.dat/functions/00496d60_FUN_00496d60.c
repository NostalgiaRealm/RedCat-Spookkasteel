/*
 * FUN_00496d60 at 00496d60
 * undefined FUN_00496d60(void)
 * Address ranges: 00496d60-004988f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00496d60(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  char *_Str1;
  undefined1 *puVar9;
  undefined4 uVar10;
  int iVar11;
  float10 fVar12;
  char *pcStack_154;
  undefined1 **ppuStack_150;
  undefined4 uStack_134;
  int local_130;
  undefined1 *local_12c;
  undefined1 *local_128;
  char local_124;
  undefined1 *local_114;
  undefined1 *local_110;
  char acStack_108 [20];
  undefined1 *puStack_f4;
  char acStack_f0 [16];
  char acStack_e0 [16];
  undefined1 local_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  char local_c0 [16];
  char acStack_b0 [16];
  char acStack_a0 [16];
  char cStack_90;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c071;
  local_c = ExceptionList;
  iVar11 = 0;
  if (DAT_006b8ef9 != '\0') {
    ExceptionList = &local_c;
    uVar4 = FUN_005afe30();
    goto LAB_004988da;
  }
  DAT_006b8ef9 = 1;
  ppuStack_150 = (undefined1 **)0x496dbc;
  ExceptionList = &local_c;
  FUN_005ae5f0();
  local_4 = 0;
  local_12c = (undefined1 *)0x0;
  FUN_005844b0();
  local_4._0_1_ = 1;
  FUN_00453d40();
  local_4._0_1_ = 2;
  FUN_00453d20();
  local_d0 = uStack_134._1_1_;
  local_4._0_1_ = 3;
  uStack_134 = uStack_134 & 0xffffff;
  FUN_004040a0();
  local_4._0_1_ = 4;
  pcVar5 = *(char **)(param_1 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  ppuStack_150 = (undefined1 **)0x496e3d;
  iVar6 = __strcmpi(pcVar5,&DAT_00694aac);
  if (iVar6 == 0) {
    if (local_130 == 0) {
      ppuStack_150 = (undefined1 **)0x496e61;
      FUN_00409810();
      local_4._0_1_ = 5;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 4;
      FUN_004040a0();
    }
    ppuStack_150 = &local_12c;
    pcStack_154 = (char *)(local_130 + 0x1c);
    cVar2 = FUN_0052bb40();
    if (cVar2 != '\0') goto LAB_004976bc;
    if (local_130 == 0) {
      ppuStack_150 = (undefined1 **)0x496ee5;
      FUN_00409810();
      local_4._0_1_ = 6;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 4;
      FUN_004040a0();
    }
    ppuStack_150 = (undefined1 **)acStack_f0;
    pcStack_154 = (char *)0x496f3e;
    pcStack_154 = (char *)FUN_005ae390();
    local_4._0_1_ = 7;
    FUN_005aff20(s_D__Work_RCHorror_RCSource_RCGame_00694968,0x1e4);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0();
    DAT_006b8ef9 = '\0';
LAB_00498880:
    local_4._0_1_ = 3;
    FUN_004040a0();
    local_4._0_1_ = 2;
    FUN_0057d310();
    local_4._0_1_ = 1;
    FUN_0057d310();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0057d310();
  }
  else {
    pcVar5 = *(char **)(param_1 + 4);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
    }
    ppuStack_150 = (undefined1 **)0x496f8f;
    iVar6 = __strcmpi(pcVar5,s_nextsave_00694a68);
    if (iVar6 == 0) {
      if (local_130 == 0) {
        ppuStack_150 = (undefined1 **)0x496fb3;
        FUN_00409810();
        local_4._0_1_ = 8;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 4;
        FUN_004040a0();
      }
      FUN_004f3d80();
      FUN_004fed00();
      if (local_130 == 0) {
        ppuStack_150 = (undefined1 **)0x497017;
        FUN_00409810();
        local_4._0_1_ = 9;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 4;
        FUN_004040a0();
      }
      ppuStack_150 = &local_12c;
      pcStack_154 = (char *)(local_130 + 0x1c);
      cVar2 = FUN_0052bb40();
      if (cVar2 == '\0') {
        if (local_130 == 0) {
          ppuStack_150 = (undefined1 **)0x49709b;
          FUN_00409810();
          local_4._0_1_ = 10;
          ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
          pcStack_154 = s_m_Pointer_0068d62c;
          pcVar7 = (code *)FUN_005a07f0();
          (*pcVar7)();
          local_4._0_1_ = 4;
          FUN_004040a0();
        }
        ppuStack_150 = (undefined1 **)acStack_f0;
        pcStack_154 = (char *)0x4970f4;
        pcStack_154 = (char *)FUN_005ae390();
        local_4._0_1_ = 0xb;
        FUN_005aff20(s_D__Work_RCHorror_RCSource_RCGame_00694968,0x1f7);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004040a0();
        DAT_006b8ef9 = '\0';
        goto LAB_00498880;
      }
    }
    else {
      pcVar5 = *(char **)(param_1 + 4);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "";
      }
      ppuStack_150 = (undefined1 **)0x497145;
      iVar6 = __strcmpi(pcVar5,s_restart_00694a60);
      if (iVar6 == 0) {
        piVar8 = (int *)FUN_00453d20();
        local_4._0_1_ = 0xc;
        if (local_12c != (undefined1 *)*piVar8) {
          if (local_12c != (undefined1 *)0x0) {
            FUN_004098d0();
          }
          local_12c = (undefined1 *)*piVar8;
          FUN_005844b0();
        }
        local_4._0_1_ = 4;
        FUN_0057d310();
      }
      else {
        iVar6 = FUN_0044e4c0();
        if (0 < iVar6) {
          do {
            ppuStack_150 = (undefined1 **)0x4971bb;
            FUN_005293c0();
            local_4._0_1_ = 0xd;
            uVar1 = (undefined1)local_4;
            local_4._0_1_ = 0xd;
            if (local_110 == (undefined1 *)0x0) {
              ppuStack_150 = (undefined1 **)0x4971dd;
              FUN_00409810();
              local_4._0_1_ = 0xe;
              ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
              pcStack_154 = s_m_Pointer_0068d62c;
              pcVar7 = (code *)FUN_005a07f0();
              (*pcVar7)();
              local_4._0_1_ = 0xd;
              FUN_004040a0();
              uVar1 = (undefined1)local_4;
            }
            local_4._0_1_ = uVar1;
            ppuStack_150 = (undefined1 **)0x497224;
            piVar8 = (int *)FUN_004f21f0();
            local_4._0_1_ = 0xf;
            if (local_12c != (undefined1 *)*piVar8) {
              if (local_12c != (undefined1 *)0x0) {
                FUN_004098d0();
              }
              local_12c = (undefined1 *)*piVar8;
              FUN_005844b0();
            }
            local_4._0_1_ = 0xd;
            FUN_0057d310();
            if (local_12c != (undefined1 *)0x0) {
              if (local_114 != local_110) {
                if (local_114 != (undefined1 *)0x0) {
                  FUN_004098d0();
                }
                local_114 = local_110;
                FUN_005844b0();
              }
              local_4._0_1_ = 4;
              FUN_0057d310();
              goto LAB_004976bc;
            }
            local_4._0_1_ = 4;
            FUN_0057d310();
            iVar11 = iVar11 + 1;
            iVar6 = FUN_0044e4c0();
          } while (iVar11 < iVar6);
        }
        local_c0[0] = uStack_134._1_1_;
        FUN_004040a0();
        local_4._0_1_ = 0x10;
        acStack_a0[0] = uStack_134._1_1_;
        FUN_004040a0();
        local_4._0_1_ = 0x11;
        cStack_90 = uStack_134._1_1_;
        FUN_004040a0();
        local_124 = uStack_134._1_1_;
        local_4._0_1_ = 0x12;
        FUN_004040a0();
        local_4._0_1_ = 0x13;
        acStack_f0[0] = uStack_134._1_1_;
        FUN_004040a0();
        ppuStack_150 = (undefined1 **)param_1;
        local_4._0_1_ = 0x14;
        pcStack_154 = (char *)0x497340;
        FUN_0040cc00();
        acStack_e0[0] = uStack_134._1_1_;
        FUN_004040a0();
        iVar11 = -1;
        pcVar5 = &DAT_00694a58;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        ppuStack_150 = (undefined1 **)0x497371;
        FUN_004040f0();
        local_4._0_1_ = 0x15;
        ppuStack_150 = (undefined1 **)0x49738b;
        cVar2 = FUN_005b0c70();
        local_4._0_1_ = 0x14;
        FUN_004040a0();
        if (cVar2 == '\0') {
          acStack_e0[0] = uStack_134._1_1_;
          FUN_004040a0();
          ppuStack_150 = (undefined1 **)0x0;
          pcStack_154 = (char *)0x0;
          local_4._0_1_ = 0x16;
          FUN_005b1140(param_1);
          FUN_005a2f50();
          ppuStack_150 = (undefined1 **)acStack_108;
          local_4._0_1_ = 0x17;
          pcStack_154 = (char *)0x497408;
          ppuStack_150 = (undefined1 **)FUN_005b0dc0();
          local_4._0_1_ = 0x18;
          pcStack_154 = (char *)0x497429;
          FUN_0040cc00();
          local_4._0_1_ = 0x17;
          FUN_004040a0();
          local_4._0_1_ = 0x16;
          FUN_004040a0();
          acStack_108[0] = uStack_134._1_1_;
          FUN_004040a0();
          iVar11 = -1;
          pcVar5 = &DAT_00694a58;
          do {
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          ppuStack_150 = (undefined1 **)0x497482;
          FUN_004040f0();
          local_4._0_1_ = 0x19;
          ppuStack_150 = (undefined1 **)0x49749c;
          cVar2 = FUN_005b0c70();
          local_4._0_1_ = 0x16;
          FUN_004040a0();
          if (cVar2 == '\0') {
            pcStack_154 = acStack_b0;
            ppuStack_150 = (undefined1 **)s_CAdamGame__ChangeToSubLevel____f_00694a1c;
            uVar10 = FUN_005ae390();
            local_4._0_1_ = 0x1a;
            FUN_005aff20(s_D__Work_RCHorror_RCSource_RCGame_00694968,0x228,uVar10);
            local_4._0_1_ = 0x16;
            FUN_004040a0();
            DAT_006b8ef9 = '\0';
            local_4._0_1_ = 0x14;
            FUN_004040a0();
            local_4._0_1_ = 0x13;
            FUN_004040a0();
            local_4._0_1_ = 0x12;
            FUN_004040a0();
            local_4._0_1_ = 0x11;
            FUN_004040a0();
            local_4._0_1_ = 0x10;
            FUN_004040a0();
            local_4 = CONCAT31(local_4._1_3_,4);
            FUN_004040a0();
            goto LAB_00498880;
          }
          ppuStack_150 = (undefined1 **)acStack_a0;
          pcStack_154 = (char *)0x497603;
          FUN_0040cc00();
          local_4._0_1_ = 0x14;
          FUN_004040a0();
        }
        else {
          ppuStack_150 = (undefined1 **)local_c0;
          pcStack_154 = (char *)0x497635;
          FUN_0040cc00();
        }
        ppuStack_150 = &local_114;
        pcStack_154 = (char *)0x497650;
        FUN_0052b6f0();
        local_4._0_1_ = 0x13;
        FUN_004040a0();
        local_4._0_1_ = 0x12;
        FUN_004040a0();
        local_4._0_1_ = 0x11;
        FUN_004040a0();
        local_4._0_1_ = 0x10;
        FUN_004040a0();
        local_4._0_1_ = 4;
        FUN_004040a0();
      }
    }
LAB_004976bc:
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    cVar2 = FUN_00592e60();
    if (cVar2 != '\0') {
      FUN_004c97e0();
    }
    FUN_0052c270();
    if (local_130 != 0) {
      pcVar5 = *(char **)(local_130 + 0x20);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = "";
      }
      acStack_108[0] = cVar2;
      FUN_004040a0();
      iVar11 = -1;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      ppuStack_150 = (undefined1 **)0x497733;
      FUN_004040f0();
      local_4._0_1_ = 0x1c;
      piVar8 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x1d;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x1d;
      if (*piVar8 == 0) {
        ppuStack_150 = (undefined1 **)0x49776d;
        FUN_00409810();
        local_4._0_1_ = 0x1e;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 0x1d;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_004f2570();
      FUN_004f3220();
      local_4._0_1_ = 0x1c;
      FUN_0057d310();
      local_4._0_1_ = 4;
      FUN_004040a0();
      if (local_130 == 0) {
        ppuStack_150 = (undefined1 **)0x4977f7;
        FUN_00409810();
        local_4._0_1_ = 0x1f;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 4;
        FUN_004040a0();
      }
      if (*(int *)(local_130 + 0x360) != 0) {
        if (local_130 == 0) {
          ppuStack_150 = (undefined1 **)0x497859;
          FUN_00409810();
          local_4._0_1_ = 0x20;
          ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
          pcStack_154 = s_m_Pointer_0068d62c;
          pcVar7 = (code *)FUN_005a07f0();
          (*pcVar7)();
          local_4._0_1_ = 4;
          FUN_004040a0();
        }
        FUN_004f3d80();
        cVar3 = FUN_004fef40();
        if (cVar3 != '\0') {
          if (local_130 == 0) {
            ppuStack_150 = (undefined1 **)0x4978c5;
            FUN_00409810();
            local_4._0_1_ = 0x21;
            ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
            pcStack_154 = s_m_Pointer_0068d62c;
            pcVar7 = (code *)FUN_005a07f0();
            (*pcVar7)();
            local_4._0_1_ = 4;
            FUN_004040a0();
          }
          FUN_004f64c0();
          if (local_12c != (undefined1 *)0x0) {
            local_128 = &stack0xfffffeb8;
            FUN_005844b0();
            local_4._0_1_ = 0x22;
            piVar8 = (int *)FUN_00436db0();
            local_4._0_1_ = 4;
            (**(code **)(*piVar8 + 0xc))();
            local_12c = &stack0xfffffeb4;
            ppuStack_150 = (undefined1 **)0x49795d;
            FUN_005844b0();
            puStack_8._0_1_ = 0x23;
            ppuStack_150 = (undefined1 **)0x49796c;
            piVar8 = (int *)FUN_00436db0();
            puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
            ppuStack_150 = (undefined1 **)0x49797b;
            (**(code **)(*piVar8 + 0xc))();
            if (local_12c == (undefined1 *)0x0) {
              ppuStack_150 = (undefined1 **)0x497996;
              FUN_00409810();
              local_4._0_1_ = 0x24;
              ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
              pcStack_154 = s_m_Pointer_0068d62c;
              pcVar7 = (code *)FUN_005a07f0();
              (*pcVar7)();
              local_4._0_1_ = 4;
              FUN_004040a0();
            }
            pcVar5 = *(char **)(local_12c + 0x20);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = "";
            }
            acStack_108[0] = uStack_134._2_1_;
            FUN_004040a0();
            iVar11 = -1;
            do {
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              cVar3 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar3 != '\0');
            ppuStack_150 = (undefined1 **)0x497a09;
            FUN_004040f0();
            local_4._0_1_ = 0x25;
            piVar8 = (int *)FUN_00453d40();
            local_4._0_1_ = 0x26;
            uVar1 = (undefined1)local_4;
            local_4._0_1_ = 0x26;
            if (*piVar8 == 0) {
              ppuStack_150 = (undefined1 **)0x497a43;
              FUN_00409810();
              local_4._0_1_ = 0x27;
              ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
              pcStack_154 = s_m_Pointer_0068d62c;
              pcVar7 = (code *)FUN_005a07f0();
              (*pcVar7)();
              local_4._0_1_ = 0x26;
              FUN_004040a0();
              uVar1 = (undefined1)local_4;
            }
            local_4._0_1_ = uVar1;
            FUN_004f2570();
            FUN_004f3220();
            local_4._0_1_ = 0x25;
            FUN_0057d310();
            local_4._0_1_ = 4;
            FUN_004040a0();
            if (local_130 == 0) {
              ppuStack_150 = (undefined1 **)0x497acd;
              FUN_00409810();
              local_4._0_1_ = 0x28;
              ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
              pcStack_154 = s_m_Pointer_0068d62c;
              pcVar7 = (code *)FUN_005a07f0();
              (*pcVar7)();
              local_4._0_1_ = 4;
              FUN_004040a0();
            }
            FUN_004f3d80();
            FUN_004fed00();
          }
        }
      }
    }
    piVar8 = (int *)FUN_00453d20();
    local_4._0_1_ = 0x29;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 0x29;
    if (*piVar8 == 0) {
      ppuStack_150 = (undefined1 **)0x497b56;
      FUN_00409810();
      local_4._0_1_ = 0x2a;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 0x29;
      FUN_004040a0();
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    pcVar5 = "";
    if (*(char **)(*piVar8 + 0x20) != (char *)0x0) {
      pcVar5 = *(char **)(*piVar8 + 0x20);
    }
    if (local_12c == (undefined1 *)0x0) {
      ppuStack_150 = (undefined1 **)0x497bb9;
      FUN_00409810();
      local_4._0_1_ = 0x2b;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 0x29;
      FUN_004040a0();
    }
    _Str1 = *(char **)(local_12c + 0x20);
    if (_Str1 == (char *)0x0) {
      _Str1 = "";
    }
    ppuStack_150 = (undefined1 **)0x497c08;
    iVar11 = __strcmpi(_Str1,pcVar5);
    local_4._0_1_ = 4;
    FUN_0057d310();
    if (iVar11 != 0) {
      piVar8 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x2c;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x2c;
      if (*piVar8 == 0) {
        ppuStack_150 = (undefined1 **)0x497c5d;
        FUN_00409810();
        local_4._0_1_ = 0x2d;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 0x2c;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_004f2570();
      FUN_004f31c0();
      local_4._0_1_ = 4;
      FUN_0057d310();
      piVar8 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x2e;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x2e;
      if (*piVar8 == 0) {
        ppuStack_150 = (undefined1 **)0x497ce6;
        FUN_00409810();
        local_4._0_1_ = 0x2f;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 0x2e;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_00556560();
      ppuStack_150 = (undefined1 **)0x497d32;
      cVar3 = FUN_0052a200();
      local_4._0_1_ = 4;
      FUN_0057d310();
      if (cVar3 != '\0') {
        piVar8 = (int *)FUN_00453d20();
        local_4._0_1_ = 0x30;
        uVar1 = (undefined1)local_4;
        local_4._0_1_ = 0x30;
        if (*piVar8 == 0) {
          ppuStack_150 = (undefined1 **)0x497d83;
          FUN_00409810();
          local_4._0_1_ = 0x31;
          ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
          pcStack_154 = s_m_Pointer_0068d62c;
          pcVar7 = (code *)FUN_005a07f0();
          (*pcVar7)();
          local_4._0_1_ = 0x30;
          FUN_004040a0();
          uVar1 = (undefined1)local_4;
        }
        local_4._0_1_ = uVar1;
        pcVar5 = *(char **)(*piVar8 + 0x20);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        acStack_108[0] = (char)uStack_134;
        FUN_004040a0();
        iVar11 = -1;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        ppuStack_150 = (undefined1 **)0x497df4;
        FUN_004040f0();
        local_4._0_1_ = 0x32;
        piVar8 = (int *)FUN_00453d40();
        local_4._0_1_ = 0x33;
        uVar1 = (undefined1)local_4;
        local_4._0_1_ = 0x33;
        if (*piVar8 == 0) {
          ppuStack_150 = (undefined1 **)0x497e2c;
          FUN_00409810();
          local_4._0_1_ = 0x34;
          ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
          pcStack_154 = s_m_Pointer_0068d62c;
          pcVar7 = (code *)FUN_005a07f0();
          (*pcVar7)();
          local_4._0_1_ = 0x33;
          FUN_004040a0();
          uVar1 = (undefined1)local_4;
        }
        local_4._0_1_ = uVar1;
        FUN_004f2570();
        FUN_004f3220();
        local_4._0_1_ = 0x32;
        FUN_0057d310();
        local_4._0_1_ = 0x30;
        FUN_004040a0();
        local_4._0_1_ = 4;
        FUN_0057d310();
      }
      FUN_0052e620();
      if (local_12c != (undefined1 *)0x0) {
        pcVar5 = *(char **)(local_12c + 0x20);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "";
        }
        acStack_108[0] = (char)uStack_134;
        FUN_004040a0();
        iVar11 = -1;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar3 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar3 != '\0');
        ppuStack_150 = (undefined1 **)0x497f07;
        FUN_004040f0();
        local_4._0_1_ = 0x36;
        piVar8 = (int *)FUN_00453d40();
        local_4._0_1_ = 0x37;
        uVar1 = (undefined1)local_4;
        local_4._0_1_ = 0x37;
        if (*piVar8 == 0) {
          ppuStack_150 = (undefined1 **)0x497f3f;
          FUN_00409810();
          local_4._0_1_ = 0x38;
          ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
          pcStack_154 = s_m_Pointer_0068d62c;
          pcVar7 = (code *)FUN_005a07f0();
          (*pcVar7)();
          local_4._0_1_ = 0x37;
          FUN_004040a0();
          uVar1 = (undefined1)local_4;
        }
        local_4._0_1_ = uVar1;
        FUN_004f2570();
        FUN_004f3220();
        local_4._0_1_ = 0x36;
        FUN_0057d310();
        local_4._0_1_ = 4;
        FUN_004040a0();
      }
      if (local_130 == 0) {
        ppuStack_150 = (undefined1 **)0x497fc9;
        FUN_00409810();
        local_4._0_1_ = 0x39;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 4;
        FUN_004040a0();
      }
      if (*(int *)(local_130 + 0x360) != 0) {
        local_128 = &stack0xfffffeb8;
        FUN_005844b0();
        local_4._0_1_ = 0x3a;
        piVar8 = (int *)FUN_00436db0();
        local_4._0_1_ = 4;
        (**(code **)(*piVar8 + 0xc))();
      }
      piVar8 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x3b;
      if (*piVar8 == 0) {
        ppuStack_150 = (undefined1 **)0x49807a;
        FUN_00409810();
        local_4._0_1_ = 0x3c;
        ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
        pcStack_154 = s_m_Pointer_0068d62c;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)();
        local_4._0_1_ = 0x3b;
        FUN_004040a0();
      }
      local_4._0_1_ = 4;
      cVar3 = *(char *)(*piVar8 + 0x1dc);
      FUN_0057d310();
      if (cVar3 != '\0') {
        ppuStack_150 = (undefined1 **)0x498849;
        FUN_005ae5f0();
        local_4._0_1_ = 0x3d;
        if (DAT_006b915c == 0) {
          FUN_004bc480();
        }
        FUN_004c4440();
        DAT_006b8ef9 = '\0';
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_005ae770();
        goto LAB_00498880;
      }
    }
    if (local_130 == 0) {
      ppuStack_150 = (undefined1 **)0x4980ee;
      FUN_00409810();
      local_4._0_1_ = 0x3e;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 4;
      FUN_004040a0();
    }
    FUN_004faab0();
    FUN_00519cb0();
    iVar11 = FUN_004337e0();
    if (iVar11 != 0) {
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      cVar3 = FUN_00592e60();
      if (cVar3 == '\0') {
        FUN_004c97e0();
        iVar11 = DAT_006b915c;
        if (DAT_006b915c == 0) {
          iVar11 = FUN_004bc480();
        }
        *(undefined1 *)(iVar11 + 0x391) = 1;
      }
    }
    if (local_114 == (undefined1 *)0x0) {
      acStack_108[0] = (char)uStack_134;
      FUN_004040a0();
      iVar11 = -1;
      pcVar5 = &DAT_006b3f70;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      ppuStack_150 = (undefined1 **)0x4981b8;
      FUN_004040f0();
      local_4._0_1_ = 0x3f;
      ppuStack_150 = (undefined1 **)s_D__Work_RCHorror_RCSource_RCGame_00694968;
      pcStack_154 = s_newLevel_IsNotNull___00694a04;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 4;
      FUN_004040a0();
    }
    if (local_12c == (undefined1 *)0x0) {
      acStack_108[0] = (char)uStack_134;
      FUN_004040a0();
      iVar11 = -1;
      pcVar5 = &DAT_006b3f70;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      ppuStack_150 = (undefined1 **)0x49822a;
      FUN_004040f0();
      local_4._0_1_ = 0x40;
      ppuStack_150 = (undefined1 **)s_D__Work_RCHorror_RCSource_RCGame_00694968;
      pcStack_154 = s_newSubLevel_IsNotNull___006949ec;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 4;
      FUN_004040a0();
    }
    FUN_00421430();
    puVar9 = (undefined1 *)FUN_004989f0();
    puStack_f4 = (undefined1 *)&pcStack_154;
    pcStack_154 = (char *)CONCAT31(pcStack_154._1_3_,*puVar9);
    FUN_004040a0(0);
    FUN_0040cc00(puVar9,0,0xffffffff);
    local_4._0_1_ = 4;
    FUN_00454200();
    FUN_00498900();
    FUN_0054daf0();
    if (local_12c == (undefined1 *)0x0) {
      ppuStack_150 = (undefined1 **)0x4982d2;
      FUN_00409810();
      local_4._0_1_ = 0x42;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 4;
      FUN_004040a0();
    }
    pcVar5 = *(char **)(local_12c + 0x20);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
    }
    acStack_e0[0] = (char)uStack_134;
    FUN_004040a0();
    iVar11 = -1;
    do {
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    ppuStack_150 = (undefined1 **)0x498345;
    FUN_004040f0();
    acStack_108[0] = (char)uStack_134;
    local_4._0_1_ = 0x43;
    FUN_004040a0();
    iVar11 = -1;
    pcVar5 = s_ClockSpeed_006949e0;
    do {
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      cVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar3 != '\0');
    ppuStack_150 = (undefined1 **)0x49837e;
    FUN_004040f0();
    local_4._0_1_ = 0x44;
    FUN_00436f90();
    ppuStack_150 = (undefined1 **)0x0;
    pcStack_154 = (char *)0x3f800000;
    local_4._0_1_ = 0x45;
    iVar11 = FUN_005a3d10(acStack_108,acStack_e0);
    local_4._0_1_ = 0x46;
    if (*(float *)(iVar11 + 0x60) == 0.0) {
      ppuStack_150 = (undefined1 **)0x4983ea;
      fVar12 = (float10)FUN_005ad390();
      *(float *)(iVar11 + 0x60) = (float)fVar12;
      local_110 = (undefined1 *)(float)fVar12;
    }
    else {
      local_110 = *(undefined1 **)(iVar11 + 0x60);
    }
    FUN_00565ae0();
    local_4._0_1_ = 0x45;
    FUN_005a3ce0();
    local_4._0_1_ = 0x44;
    FUN_004040a0();
    local_4._0_1_ = 0x43;
    FUN_004040a0();
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0();
    puStack_f4 = &stack0xfffffeb8;
    if (local_114 != (undefined1 *)0x0) {
      *(int *)(local_114 + 0x14) = *(int *)(local_114 + 0x14) + 1;
    }
    FUN_005296e0();
    puStack_f4 = &stack0xfffffeb8;
    puVar9 = &stack0xfffffeb8;
    if (local_12c != (undefined1 *)0x0) {
      *(int *)(local_12c + 0x14) = *(int *)(local_12c + 0x14) + 1;
      puVar9 = puStack_f4;
    }
    puStack_f4 = puVar9;
    FUN_00529840();
    FUN_005168f0();
    iVar11 = FUN_004337e0();
    if (iVar11 != 0) {
      pcStack_154 = acStack_b0;
      ppuStack_150 = (undefined1 **)s__s___d____SetCurrentState__GS_LO_006949b8;
      uVar10 = FUN_005ae390();
      local_4._0_1_ = 0x47;
      FUN_005aff00(uVar10);
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_004040a0();
    }
    FUN_0052ab20();
    FUN_0052af50();
    piVar8 = (int *)FUN_00453d20();
    local_4._0_1_ = 0x48;
    if (*piVar8 == 0) {
      acStack_108[0] = (char)uStack_134;
      FUN_004040a0();
      iVar11 = -1;
      pcVar5 = &DAT_006b3f70;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      ppuStack_150 = (undefined1 **)0x498550;
      FUN_004040f0();
      local_4._0_1_ = 0x49;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 0x48;
      FUN_004040a0();
    }
    FUN_004f6000();
    local_4._0_1_ = 4;
    if (local_128 != (undefined1 *)0x0) {
      FUN_004098d0();
    }
    FUN_0052af50();
    piVar8 = (int *)FUN_00453d20();
    local_4._0_1_ = 0x4a;
    if (*piVar8 == 0) {
      acStack_108[0] = (char)uStack_134;
      FUN_004040a0();
      iVar11 = -1;
      pcVar5 = &DAT_006b3f70;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      ppuStack_150 = (undefined1 **)0x4985fd;
      FUN_004040f0();
      local_4._0_1_ = 0x4b;
      ppuStack_150 = (undefined1 **)s___AdamSource_DaviRC_h_0068d638;
      pcStack_154 = s_m_Pointer_0068d62c;
      pcVar7 = (code *)FUN_005a07f0();
      (*pcVar7)();
      local_4._0_1_ = 0x4a;
      FUN_004040a0();
    }
    local_4._0_1_ = 4;
    iVar11 = *(int *)(*piVar8 + 0x360);
    if (local_128 != (undefined1 *)0x0) {
      FUN_004098d0();
    }
    if (iVar11 != 0) {
      puStack_f4 = &stack0xfffffeb8;
      ppuStack_150 = (undefined1 **)0x498667;
      FUN_00453d20();
      local_4._0_1_ = 0x4c;
      piVar8 = (int *)FUN_00436db0();
      local_4._0_1_ = 4;
      (**(code **)(*piVar8 + 0x10))();
    }
    FUN_0052e870();
    iVar6 = FUN_005168f0();
    iVar11 = *(int *)(iVar6 + 100);
    if (iVar11 == -0x80000000) {
      iVar11 = FUN_0060af10();
      *(int *)(iVar6 + 100) = iVar11;
    }
    if (iVar11 != 0) {
      pcStack_154 = acStack_108;
      ppuStack_150 = (undefined1 **)s__s___d____SetCurrentState__GS_GA_00694990;
      uVar10 = FUN_005ae390();
      local_4._0_1_ = 0x4d;
      FUN_005aff00(uVar10);
      local_4._0_1_ = 4;
      FUN_004040a0();
    }
    FUN_0052ab20();
    iVar6 = FUN_00519cb0();
    iVar11 = *(int *)(iVar6 + 100);
    if (iVar11 == -0x80000000) {
      iVar11 = FUN_0060af10();
      *(int *)(iVar6 + 100) = iVar11;
    }
    if (iVar11 != 0) {
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      cVar3 = FUN_00592e60();
      if ((cVar3 != '\0') && (cVar2 == '\0')) {
        FUN_004c97e0();
        iVar11 = DAT_006b915c;
        if (DAT_006b915c == 0) {
          iVar11 = FUN_004bc480();
        }
        *(undefined1 *)(iVar11 + 0x391) = 0;
      }
    }
    DAT_006b8ef9 = '\0';
    if (iStack_cc != 0) {
      cVar2 = *(char *)(iStack_cc + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_cc + -1) = cVar2 + -1;
      }
    }
    iStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_4._0_1_ = 2;
    if ((local_130 != 0) &&
       (iVar11 = *(int *)(local_130 + 0x14) + -1, *(int *)(local_130 + 0x14) = iVar11, iVar11 == 0))
    {
      FUN_005abfc0();
    }
    local_4._0_1_ = 1;
    if (local_114 != (undefined1 *)0x0) {
      iVar11 = *(int *)(local_114 + 0x14);
      *(int *)(local_114 + 0x14) = iVar11 + -1;
      if (iVar11 + -1 == 0) {
        FUN_005abfc0();
      }
      local_114 = (undefined1 *)0x0;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_12c != (undefined1 *)0x0) {
      iVar11 = *(int *)(local_12c + 0x14);
      *(int *)(local_12c + 0x14) = iVar11 + -1;
      if (iVar11 + -1 == 0) {
        FUN_005abfc0();
      }
      local_12c = (undefined1 *)0x0;
    }
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_005ae770();
LAB_004988da:
  ExceptionList = local_c;
  return uVar4 & 0xffffff00;
}

