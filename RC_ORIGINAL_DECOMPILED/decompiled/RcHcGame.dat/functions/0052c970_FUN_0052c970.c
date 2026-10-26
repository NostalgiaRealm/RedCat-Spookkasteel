/*
 * FUN_0052c970 at 0052c970
 * undefined FUN_0052c970(void)
 * Address ranges: 0052c970-0052e61c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0052cdf2) */

undefined4 FUN_0052c970(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  char *_Str1;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uStack_124;
  int local_11c;
  int local_118;
  int local_104;
  char acStack_100 [16];
  int local_f0;
  float local_ec;
  char acStack_e4 [4];
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  char cStack_d4;
  char cStack_b0;
  char local_a0;
  char cStack_90;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a3b2;
  local_c = ExceptionList;
  iVar8 = 0;
  if (DAT_006ba664 != '\0') {
    ExceptionList = &local_c;
    FUN_005afe30();
    ExceptionList = local_c;
    return 0;
  }
  DAT_006ba664 = 1;
  ExceptionList = &local_c;
  FUN_005ae5f0();
  local_4 = 0;
  local_118 = 0;
  FUN_005844b0();
  local_4._0_1_ = 1;
  FUN_00453d40();
  FUN_00453d20();
  local_4._0_1_ = 3;
  uStack_124 = (undefined1 *)((uint)uStack_124 & 0xffffff);
  pcVar3 = *(char **)(param_1 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar4 = __strcmpi(pcVar3,&DAT_00694aac);
  if (iVar4 == 0) {
    if (local_11c == 0) {
      FUN_00409810();
      local_4._0_1_ = 4;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    cVar2 = FUN_0052bb40();
    if (cVar2 == '\0') {
      if (local_11c == 0) {
        FUN_00409810();
        local_4._0_1_ = 5;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
      FUN_005ae390();
      local_4._0_1_ = 6;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x47c);
      local_4._0_1_ = 3;
      FUN_004040a0();
      DAT_006ba664 = 0;
      local_4._0_1_ = 2;
      FUN_0057d310();
      local_4._0_1_ = 1;
      FUN_0057d310();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0057d310();
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    pcVar3 = *(char **)(param_1 + 4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = __strcmpi(pcVar3,s_nextsave_00694a68);
    if (iVar4 == 0) {
      if (local_11c == 0) {
        FUN_00409810();
        local_4._0_1_ = 7;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
      FUN_004f3d80();
      FUN_004fed00();
      if (local_11c == 0) {
        FUN_00409810();
        local_4._0_1_ = 8;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
      cVar2 = FUN_0052bb40();
      if (cVar2 == '\0') {
        if (local_11c == 0) {
          FUN_00409810();
          local_4._0_1_ = 9;
          pcVar5 = (code *)FUN_005a07f0();
          (*pcVar5)();
          local_4._0_1_ = 3;
          FUN_004040a0();
        }
        FUN_005ae390();
        local_4._0_1_ = 10;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x490);
        local_4._0_1_ = 3;
        FUN_004040a0();
        DAT_006ba664 = 0;
        local_4._0_1_ = 2;
        FUN_0057d310();
        local_4._0_1_ = 1;
        FUN_0057d310();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0057d310();
        local_4 = 0xffffffff;
        FUN_005ae770();
        ExceptionList = local_c;
        return 0;
      }
    }
    else {
      pcVar3 = *(char **)(param_1 + 4);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      iVar4 = __strcmpi(pcVar3,s_restart_00694a60);
      if (iVar4 == 0) {
        piVar6 = (int *)FUN_00453d20();
        if (*piVar6 != 0) {
          local_4._0_1_ = 0xb;
          local_118 = *piVar6;
          FUN_005844b0();
        }
        local_4._0_1_ = 3;
        FUN_0057d310();
      }
      else {
        iVar4 = FUN_0044e4c0();
        if (0 < iVar4) {
          do {
            local_f0 = 0;
            FUN_005844b0();
            piVar6 = (int *)FUN_005293c0();
            local_4._0_1_ = 0xd;
            if (local_f0 != *piVar6) {
              if (local_f0 != 0) {
                FUN_004098d0();
              }
              local_f0 = *piVar6;
              FUN_005844b0();
            }
            local_4._0_1_ = 0xc;
            FUN_0057d310();
            if (local_f0 == 0) {
              FUN_00409810();
              local_4._0_1_ = 0xe;
              pcVar5 = (code *)FUN_005a07f0();
              (*pcVar5)();
              local_4._0_1_ = 0xc;
              FUN_004040a0();
            }
            piVar6 = (int *)FUN_004f21f0();
            local_4._0_1_ = 0xf;
            if (local_118 != *piVar6) {
              if (local_118 != 0) {
                FUN_004098d0();
              }
              local_118 = *piVar6;
              FUN_005844b0();
            }
            local_4._0_1_ = 0xc;
            FUN_0057d310();
            if (local_118 != 0) {
              if (local_104 != local_f0) {
                if (local_104 != 0) {
                  FUN_004098d0();
                }
                local_104 = local_f0;
                FUN_005844b0();
              }
              local_4._0_1_ = 3;
              FUN_0057d310();
              goto LAB_0052d3c1;
            }
            local_4._0_1_ = 3;
            FUN_0057d310();
            iVar8 = iVar8 + 1;
            iVar4 = FUN_0044e4c0();
          } while (iVar8 < iVar4);
        }
        local_a0 = uStack_124._1_1_;
        FUN_004040a0();
        local_4._0_1_ = 0x10;
        cStack_b0 = uStack_124._1_1_;
        FUN_004040a0();
        local_4._0_1_ = 0x11;
        cStack_90 = uStack_124._1_1_;
        FUN_004040a0();
        local_4._0_1_ = 0x12;
        FUN_004040a0();
        local_4._0_1_ = 0x13;
        cStack_d4 = uStack_124._1_1_;
        FUN_004040a0();
        local_4._0_1_ = 0x14;
        FUN_0040cc00();
        acStack_100[0] = uStack_124._1_1_;
        FUN_004040a0();
        iVar8 = -1;
        pcVar3 = &DAT_00694a58;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 0x15;
        cVar2 = FUN_005b0c70();
        local_4._0_1_ = 0x14;
        FUN_004040a0();
        if (cVar2 == '\0') {
          acStack_100[0] = uStack_124._1_1_;
          FUN_004040a0();
          local_4._0_1_ = 0x16;
          FUN_005b1140(param_1);
          FUN_005a2f50();
          local_4._0_1_ = 0x17;
          FUN_005b0dc0();
          local_4._0_1_ = 0x18;
          FUN_0040cc00();
          local_4._0_1_ = 0x17;
          FUN_004040a0();
          local_4._0_1_ = 0x16;
          FUN_004040a0();
          acStack_e4[0] = uStack_124._1_1_;
          FUN_004040a0();
          iVar8 = -1;
          pcVar3 = &DAT_00694a58;
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0();
          local_4._0_1_ = 0x19;
          cVar2 = FUN_005b0c70();
          local_4._0_1_ = 0x16;
          FUN_004040a0();
          if (cVar2 == '\0') {
            uVar7 = FUN_005ae390();
            local_4._0_1_ = 0x1a;
            FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x4c3,uVar7);
            local_4._0_1_ = 0x16;
            FUN_004040a0();
            DAT_006ba664 = 0;
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
            local_4._0_1_ = 3;
            FUN_004040a0();
            local_4._0_1_ = 2;
            FUN_0057d310();
            local_4._0_1_ = 1;
            FUN_0057d310();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_0057d310();
            local_4 = 0xffffffff;
            FUN_005ae770();
            ExceptionList = local_c;
            return 0;
          }
          FUN_0040cc00();
          local_4._0_1_ = 0x14;
          FUN_004040a0();
        }
        else {
          FUN_0040cc00();
        }
        FUN_0052b6f0();
        local_4._0_1_ = 0x13;
        FUN_004040a0();
        local_4._0_1_ = 0x12;
        FUN_004040a0();
        local_4._0_1_ = 0x11;
        FUN_004040a0();
        local_4._0_1_ = 0x10;
        FUN_004040a0();
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
    }
  }
LAB_0052d3c1:
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  cVar2 = FUN_00592e60();
  uStack_124 = (undefined1 *)(uint)CONCAT11(cVar2,(char)uStack_124);
  if (cVar2 != '\0') {
    FUN_004040a0();
    local_4._0_1_ = 0x1b;
    FUN_004c97e0();
    local_4._0_1_ = 3;
    FUN_004040a0();
  }
  FUN_0052c270();
  if (local_11c == 0) {
LAB_0052d84b:
    if (uStack_124._3_1_ == '\0') goto LAB_0052d85b;
LAB_0052d95e:
    piVar6 = (int *)FUN_00453d40();
    local_4._0_1_ = 0x2d;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 0x2d;
    if (*piVar6 == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x2e;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 0x2d;
      FUN_004040a0();
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    FUN_004f2570();
    FUN_004f31c0();
    local_4._0_1_ = 3;
    FUN_0057d310();
    piVar6 = (int *)FUN_00453d40();
    local_4._0_1_ = 0x2f;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 0x2f;
    if (*piVar6 == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x30;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 0x2f;
      FUN_004040a0();
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    FUN_00556560();
    cVar2 = FUN_0052a200();
    local_4._0_1_ = 3;
    FUN_0057d310();
    if (cVar2 != '\0') {
      piVar6 = (int *)FUN_00453d20();
      local_4._0_1_ = 0x31;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x31;
      if (*piVar6 == 0) {
        FUN_00409810();
        local_4._0_1_ = 0x32;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 0x31;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      pcVar3 = *(char **)(*piVar6 + 0x20);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      acStack_100[0] = (char)uStack_124;
      FUN_004040a0();
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x33;
      piVar6 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x34;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x34;
      if (*piVar6 == 0) {
        FUN_00409810();
        local_4._0_1_ = 0x35;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 0x34;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_004f2570();
      FUN_004f3220();
      local_4._0_1_ = 0x33;
      FUN_0057d310();
      local_4._0_1_ = 0x31;
      FUN_004040a0();
      local_4._0_1_ = 3;
      FUN_0057d310();
    }
    FUN_0052e620();
    if ((uStack_124._3_1_ == '\0') && (local_118 != 0)) {
      pcVar3 = *(char **)(local_118 + 0x20);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      acStack_100[0] = (char)uStack_124;
      FUN_004040a0();
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x37;
      piVar6 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x38;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x38;
      if (*piVar6 == 0) {
        FUN_00409810();
        local_4._0_1_ = 0x39;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 0x38;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_004f2570();
      FUN_004f3220();
      local_4._0_1_ = 0x37;
      FUN_0057d310();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    if (local_11c == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x3a;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    FUN_005844b0();
    local_4._0_1_ = 0x3b;
    piVar6 = (int *)FUN_00436db0();
    local_4._0_1_ = 3;
    (**(code **)(*piVar6 + 0xc))();
    if (uStack_124._3_1_ == '\0') {
      piVar6 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x3c;
      if (*piVar6 == 0) {
        FUN_00409810();
        local_4._0_1_ = 0x3d;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 0x3c;
        FUN_004040a0();
      }
      local_4._0_1_ = 3;
      cVar2 = *(char *)(*piVar6 + 0x1dc);
      FUN_0057d310();
      if (cVar2 == '\0') goto LAB_0052ddf2;
    }
    FUN_005ae5f0();
    local_4._0_1_ = 0x3e;
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    FUN_004c4440();
    DAT_006ba664 = 0;
    local_4._0_1_ = 3;
    FUN_005ae770();
    local_4._0_1_ = 2;
    FUN_0057d310();
    local_4._0_1_ = 1;
    FUN_0057d310();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0057d310();
  }
  else {
    pcVar3 = *(char **)(local_11c + 0x20);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    acStack_100[0] = cVar2;
    FUN_004040a0();
    iVar8 = -1;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 0x1d;
    piVar6 = (int *)FUN_00453d40();
    local_4._0_1_ = 0x1e;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 0x1e;
    if (*piVar6 == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x1f;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 0x1e;
      FUN_004040a0();
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    FUN_004f2570();
    FUN_004f3220();
    local_4._0_1_ = 0x1d;
    FUN_0057d310();
    local_4._0_1_ = 3;
    FUN_004040a0();
    if (local_11c == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x20;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    if (*(int *)(local_11c + 0x360) == 0) goto LAB_0052d84b;
    if (local_11c == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x21;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    FUN_004f3d80();
    cVar2 = FUN_004fef40();
    if (cVar2 == '\0') goto LAB_0052d84b;
    if (local_11c == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x22;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    FUN_004f64c0();
    if (local_118 != 0) {
      FUN_005844b0();
      local_4._0_1_ = 0x23;
      piVar6 = (int *)FUN_00436db0();
      local_4._0_1_ = 3;
      (**(code **)(*piVar6 + 0xc))();
      FUN_005844b0();
      puStack_8._0_1_ = 0x24;
      piVar6 = (int *)FUN_00436db0();
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
      (**(code **)(*piVar6 + 0xc))();
      if (local_118 == 0) {
        FUN_00409810();
        local_4._0_1_ = 0x25;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
      pcVar3 = *(char **)(local_118 + 0x20);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = "";
      }
      uStack_124._2_1_ = (char)((uint)&stack0xfffffec4 >> 0x10);
      acStack_100[0] = uStack_124._2_1_;
      FUN_004040a0();
      iVar8 = -1;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x26;
      piVar6 = (int *)FUN_00453d40();
      local_4._0_1_ = 0x27;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 0x27;
      if (*piVar6 == 0) {
        FUN_00409810();
        local_4._0_1_ = 0x28;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 0x27;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_004f2570();
      FUN_004f3220();
      local_4._0_1_ = 0x26;
      FUN_0057d310();
      local_4._0_1_ = 3;
      FUN_004040a0();
      if (local_11c == 0) {
        FUN_00409810();
        local_4._0_1_ = 0x29;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
      FUN_004f3d80();
      FUN_004fed00();
      uStack_124 = &stack0xfffffec4;
      goto LAB_0052d84b;
    }
LAB_0052d85b:
    piVar6 = (int *)FUN_00453d20();
    local_4._0_1_ = 0x2a;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 0x2a;
    if (*piVar6 == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x2b;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 0x2a;
      FUN_004040a0();
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    pcVar3 = "";
    if (*(char **)(*piVar6 + 0x20) != (char *)0x0) {
      pcVar3 = *(char **)(*piVar6 + 0x20);
    }
    if (local_118 == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x2c;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 0x2a;
      FUN_004040a0();
    }
    _Str1 = *(char **)(local_118 + 0x20);
    if (_Str1 == (char *)0x0) {
      _Str1 = "";
    }
    iVar8 = __strcmpi(_Str1,pcVar3);
    local_4._0_1_ = 3;
    FUN_0057d310();
    if (iVar8 != 0) goto LAB_0052d95e;
LAB_0052ddf2:
    if (local_11c == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x3f;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    FUN_004faab0();
    FUN_00519cb0();
    iVar8 = FUN_004337e0();
    if (iVar8 != 0) {
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      cVar2 = FUN_00592e60();
      if (cVar2 == '\0') {
        FUN_004040a0();
        local_4 = CONCAT31(local_4._1_3_,0x40);
        FUN_004c97e0();
        iVar8 = DAT_006b915c;
        if (DAT_006b915c == 0) {
          iVar8 = FUN_004bc480();
        }
        *(undefined1 *)(iVar8 + 0x391) = 1;
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
    }
    if (local_104 == 0) {
      acStack_100[0] = (char)uStack_124;
      FUN_004040a0();
      iVar8 = -1;
      pcVar3 = &DAT_006b3f70;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x41;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    if (local_118 == 0) {
      acStack_100[0] = (char)uStack_124;
      FUN_004040a0();
      iVar8 = -1;
      pcVar3 = &DAT_006b3f70;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x42;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    FUN_00421430();
    uVar7 = FUN_004989f0();
    FUN_004040a0(0);
    FUN_0040cc00(uVar7,0,0xffffffff);
    local_4._0_1_ = 3;
    FUN_00454200();
    FUN_00498900();
    FUN_0054daf0();
    if (local_118 == 0) {
      FUN_00409810();
      local_4._0_1_ = 0x44;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    pcVar3 = *(char **)(local_118 + 0x20);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    acStack_e4[0] = (char)uStack_124;
    FUN_004040a0();
    iVar8 = -1;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 0x45;
    acStack_100[0] = (char)uStack_124;
    FUN_004040a0();
    iVar8 = -1;
    pcVar3 = s_ClockSpeed_006949e0;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 0x46;
    FUN_00436f90();
    local_4._0_1_ = 0x47;
    iVar8 = FUN_005a3d10(acStack_100,acStack_e4);
    local_4._0_1_ = 0x48;
    if (*(float *)(iVar8 + 0x60) == 0.0) {
      fVar9 = (float10)FUN_005ad390();
      *(float *)(iVar8 + 0x60) = (float)fVar9;
      local_ec = (float)fVar9;
    }
    else {
      local_ec = *(float *)(iVar8 + 0x60);
    }
    FUN_00565ae0();
    local_4._0_1_ = 0x47;
    FUN_005a3ce0();
    local_4._0_1_ = 0x46;
    FUN_004040a0();
    local_4._0_1_ = 0x45;
    FUN_004040a0();
    local_4._0_1_ = 3;
    FUN_004040a0();
    if (local_104 != 0) {
      *(int *)(local_104 + 0x14) = *(int *)(local_104 + 0x14) + 1;
    }
    FUN_005296e0();
    if (local_118 != 0) {
      *(int *)(local_118 + 0x14) = *(int *)(local_118 + 0x14) + 1;
    }
    FUN_00529840();
    FUN_005168f0();
    iVar8 = FUN_004337e0();
    if (iVar8 != 0) {
      uVar7 = FUN_005ae390();
      local_4._0_1_ = 0x49;
      FUN_005aff00(uVar7);
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    FUN_0052ab20();
    FUN_0052af50();
    piVar6 = (int *)FUN_00453d20();
    local_4._0_1_ = 0x4a;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 0x4a;
    if (*piVar6 == 0) {
      acStack_100[0] = (char)uStack_124;
      FUN_004040a0();
      iVar8 = -1;
      pcVar3 = &DAT_006b3f70;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x4b;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 0x4a;
      FUN_004040a0();
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    FUN_004f6000();
    local_4._0_1_ = 3;
    if (&stack0x00000000 != (undefined1 *)0x138) {
      FUN_004098d0();
    }
    FUN_0052af50();
    piVar6 = (int *)FUN_00453d20();
    local_4._0_1_ = 0x4c;
    if (*piVar6 == 0) {
      acStack_100[0] = (char)uStack_124;
      FUN_004040a0();
      iVar8 = -1;
      pcVar3 = &DAT_006b3f70;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x4d;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4._0_1_ = 0x4c;
      FUN_004040a0();
    }
    local_4._0_1_ = 3;
    iVar8 = *(int *)(*piVar6 + 0x360);
    if (&stack0x00000000 != (undefined1 *)0x138) {
      FUN_004098d0();
    }
    if (iVar8 != 0) {
      FUN_00453d20();
      local_4._0_1_ = 0x4e;
      piVar6 = (int *)FUN_00436db0();
      local_4._0_1_ = 3;
      (**(code **)(*piVar6 + 0x10))();
    }
    FUN_0052e870();
    FUN_005168f0();
    iVar8 = FUN_004337e0();
    if (iVar8 != 0) {
      uVar7 = FUN_005ae390();
      local_4._0_1_ = 0x4f;
      FUN_005aff00(uVar7);
      local_4._0_1_ = 3;
      FUN_004040a0();
    }
    FUN_0052ab20();
    iVar4 = FUN_00519cb0();
    iVar8 = *(int *)(iVar4 + 100);
    if (iVar8 == -0x80000000) {
      iVar8 = FUN_0060af10();
      *(int *)(iVar4 + 100) = iVar8;
    }
    if (iVar8 != 0) {
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      cVar2 = FUN_00592e60();
      if ((cVar2 != '\0') && (uStack_124._1_1_ == '\0')) {
        acStack_e4[0] = (char)uStack_124;
        FUN_004040a0();
        local_4._0_1_ = 0x50;
        FUN_004c97e0();
        iVar8 = DAT_006b915c;
        if (DAT_006b915c == 0) {
          iVar8 = FUN_004bc480();
        }
        *(undefined1 *)(iVar8 + 0x391) = 0;
        if (iStack_e0 != 0) {
          cVar2 = *(char *)(iStack_e0 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)(iStack_e0 + -1) = cVar2 + -1;
          }
        }
        iStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
      }
    }
    DAT_006ba664 = 0;
    local_4._0_1_ = 2;
    if ((local_11c != 0) &&
       (iVar8 = *(int *)(local_11c + 0x14) + -1, *(int *)(local_11c + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0();
    }
    local_4._0_1_ = 1;
    if ((local_104 != 0) &&
       (iVar8 = *(int *)(local_104 + 0x14) + -1, *(int *)(local_104 + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_118 != 0) &&
       (iVar8 = *(int *)(local_118 + 0x14) + -1, *(int *)(local_118 + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0();
    }
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return 1;
}

