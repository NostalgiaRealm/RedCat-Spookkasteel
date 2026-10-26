/*
 * FUN_004e8d40 at 004e8d40
 * undefined FUN_004e8d40(void)
 * Address ranges: 004e8d40-004e981e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_004e8d40(undefined1 *param_1,int param_2,int param_3,char param_4)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  undefined1 local_139;
  undefined1 auStack_138 [4];
  int iStack_134;
  int iStack_130;
  undefined1 auStack_128 [4];
  int iStack_124;
  uint uStack_120;
  int local_118;
  uint uStack_114;
  int local_110;
  undefined1 local_10c [16];
  undefined1 auStack_fc [4];
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_ec [4];
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [4];
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [32];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006333d9;
  pvStack_c = ExceptionList;
  local_118 = 0;
  iVar4 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar4 = FUN_004bc480();
  }
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_139);
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_10c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  FUN_00453d20();
  if (local_110 != 0) {
    local_118 = *(int *)(local_110 + 0x360);
  }
  local_4 = 0xffffffff;
  FUN_0057d310();
  FUN_005ae390(auStack_138,&DAT_006b3f70);
  local_4 = 3;
  FUN_005ae390(auStack_ec,&DAT_006b3f70);
  local_4._0_1_ = 4;
  if (*(int *)(param_3 + 8) != 0) {
    if (param_4 == '\0') {
      auStack_128[0] = local_139;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 8;
      iVar4 = FUN_004e5980(auStack_fc,2,auStack_128,0);
      puVar6 = *(undefined1 **)(iVar4 + 4);
      local_4._0_1_ = 9;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(local_10c,&DAT_0069ae28,puVar6);
      local_4._0_1_ = 10;
      FUN_0040cc00(uVar7,0,0xffffffff);
      local_4._0_1_ = 9;
      FUN_004040a0();
      local_4._0_1_ = 8;
      FUN_004040a0();
    }
    else {
      auStack_128[0] = local_139;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 5;
      iVar4 = FUN_004e5980(auStack_fc,3,auStack_128,0);
      puVar6 = *(undefined1 **)(iVar4 + 4);
      local_4._0_1_ = 6;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(local_10c,&DAT_0069ae28,puVar6);
      local_4._0_1_ = 7;
      FUN_0040cc00(uVar7,0,0xffffffff);
      local_4._0_1_ = 6;
      FUN_004040a0();
      local_4._0_1_ = 5;
      FUN_004040a0();
    }
    local_4._0_1_ = 4;
    FUN_004040a0();
  }
  uVar10 = 0;
  uVar8 = *(uint *)(param_2 + 8);
  if (uVar8 != 0) {
    do {
      iVar2 = local_118;
      iVar4 = *(int *)(param_2 + 4);
      pcVar9 = "";
      if (iVar4 != 0) {
        pcVar9 = (char *)(iVar4 + uVar10);
      }
      if (*pcVar9 == '%') {
        uVar11 = uVar10 + 1;
        puVar6 = &DAT_0064a3b4;
        if (iVar4 != 0) {
          puVar6 = (undefined1 *)(iVar4 + uVar11);
        }
        switch(*puVar6) {
        case 0x25:
          FUN_004eeef0(1,0x25);
          break;
        default:
          uVar7 = FUN_005ae390(auStack_fc,s____Error______c_____0069ada4);
          local_4._0_1_ = 0x1b;
          FUN_0045db40(uVar7,0,0xffffffff);
          local_4._0_1_ = 4;
          if (iStack_f8 != 0) {
            cVar3 = *(char *)(iStack_f8 + -1);
            if ((cVar3 != '\0') && (cVar3 != -1)) {
              *(char *)(iStack_f8 + -1) = cVar3 + -1;
              iStack_f8 = 0;
              uStack_f4 = 0;
              uStack_f0 = 0;
              break;
            }
            FUN_005fe5f0();
          }
          iStack_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          break;
        case 0x44:
          uVar7 = FUN_00565a70();
          local_4._0_1_ = 0x13;
          FUN_0045db40(uVar7,0,0xffffffff);
          local_4._0_1_ = 4;
          FUN_004040a0();
          break;
        case 0x54:
          uVar7 = FUN_00565920();
          local_4._0_1_ = 0x11;
          FUN_0045db40(uVar7,0,0xffffffff);
          local_4._0_1_ = 4;
          FUN_004040a0();
          break;
        case 0x61:
          FUN_0045db40(auStack_ec,0,0xffffffff);
          break;
        case 100:
          uVar7 = FUN_00565a00();
          local_4._0_1_ = 0x12;
          FUN_0045db40(uVar7,0,0xffffffff);
          local_4._0_1_ = 4;
          FUN_004040a0();
          break;
        case 0x6b:
          uVar11 = uVar10 + 2;
          pcVar9 = "";
          if (iVar4 != 0) {
            pcVar9 = (char *)(iVar4 + uVar11);
          }
          if (*pcVar9 == '(') {
            uVar10 = uVar10 + 3;
            uVar11 = uVar10;
            while( true ) {
              pcVar9 = "";
              if (iVar4 != 0) {
                pcVar9 = (char *)(iVar4 + uVar11);
              }
              if ((*pcVar9 == ')') || (uVar8 <= uVar11)) break;
              uVar11 = uVar11 + 1;
            }
            uStack_114 = uVar11;
            if ((uVar11 < uVar8) && (uVar11 != uVar10)) {
              uVar7 = FUN_004eed60(auStack_5c,uVar10,uVar11 - uVar10);
              local_4._0_1_ = 0x15;
              iVar4 = DAT_006b915c;
              if (DAT_006b915c == 0) {
                iVar4 = FUN_004bc480();
              }
              if (*(int *)(iVar4 + 0x3a8) == 0) {
                uStack_cc = local_139;
                FUN_004040a0();
                uVar8 = 0xffffffff;
                pcVar9 = &DAT_006b3f70;
                do {
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  cVar3 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar3 != '\0');
                FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
                local_4._0_1_ = 0x16;
                pcVar5 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                              s___AdamSource_AdamApplication_h_0068e58c,0x136);
                (*pcVar5)();
                local_4._0_1_ = 0x15;
                FUN_004040a0();
              }
              FUN_0053dc30(auStack_128,uVar7);
              local_4 = CONCAT31(local_4._1_3_,0x18);
              FUN_004040a0();
              iVar4 = 0;
              uVar8 = 0;
              if (uStack_120 != 0) {
                do {
                  if (1 < iVar4) break;
                  if ((uStack_120 < uVar8) || (iStack_124 == 0)) {
                    pcVar9 = "";
                  }
                  else {
                    FUN_004c4700();
                    pcVar9 = (char *)(iStack_124 + uVar8);
                  }
                  if (*pcVar9 == ',') {
                    iVar4 = iVar4 + 1;
                    if (iVar4 < 2) {
                      uVar7 = FUN_005ae390(auStack_3c);
                      local_4._0_1_ = 0x19;
                      FUN_0045db40(uVar7,0,0xffffffff);
                      local_4 = CONCAT31(local_4._1_3_,0x18);
                      FUN_004040a0();
                    }
                  }
                  else {
                    if ((uStack_120 < uVar8) || (iStack_124 == 0)) {
                      puVar6 = &DAT_0064a3b4;
                    }
                    else {
                      FUN_004c4700();
                      puVar6 = (undefined1 *)(iStack_124 + uVar8);
                    }
                    uVar1 = *puVar6;
                    if (-iStack_130 - 1U < 2) {
                      FUN_005fe5fb();
                    }
                    cVar3 = FUN_00401940(iStack_130 + 1,0);
                    if (cVar3 != '\0') {
                      *(undefined1 *)(iStack_134 + iStack_130) = uVar1;
                      FUN_00404190();
                    }
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uStack_120);
              }
              local_4._0_1_ = 4;
              FUN_004040a0();
              uVar11 = uStack_114;
            }
            else {
              uVar7 = FUN_005ae390(auStack_1c);
              local_4._0_1_ = 0x14;
              FUN_0045db40(uVar7,0,0xffffffff);
              local_4._0_1_ = 4;
              FUN_004040a0();
            }
          }
          else {
            uVar7 = FUN_005ae390(auStack_dc,s____Error_____k_c_____0069adb8);
            local_4._0_1_ = 0x1a;
            FUN_0045db40(uVar7,0,0xffffffff);
            local_4._0_1_ = 4;
            if (iStack_d8 != 0) {
              cVar3 = *(char *)(iStack_d8 + -1);
              if ((cVar3 != '\0') && (cVar3 != -1)) {
                *(char *)(iStack_d8 + -1) = cVar3 + -1;
                iStack_d8 = 0;
                uStack_d4 = 0;
                uStack_d0 = 0;
                break;
              }
              FUN_005fe5f0();
            }
            iStack_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
          }
          break;
        case 0x70:
          uVar11 = uVar10 + 2;
          if (local_118 == 0) {
            uVar7 = FUN_005ae390(auStack_bc,s____Error__No_player____0069adf0);
            local_4._0_1_ = 0xf;
            FUN_0045db40(uVar7,0,0xffffffff);
            local_4._0_1_ = 4;
            FUN_004040a0();
          }
          else {
            pcVar9 = "";
            if (iVar4 != 0) {
              pcVar9 = (char *)(iVar4 + uVar11);
            }
            if (*pcVar9 == 'h') {
              if (*(int *)(local_118 + 0x1f0) == 0) {
                FUN_00409810(&DAT_006b3f70,&local_139);
                local_4._0_1_ = 0xc;
                pcVar5 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                              s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,
                                              local_10c);
                (*pcVar5)();
                local_4._0_1_ = 4;
                FUN_004040a0();
              }
              fVar12 = (float10)(**(code **)(**(int **)(iVar2 + 0x1f0) + 0x28))();
              fVar12 = (float10)FUN_0060b97d((double)fVar12);
              uVar7 = FUN_005ae390(auStack_8c,&DAT_0069ae08,(double)fVar12);
              local_4._0_1_ = 0xd;
              FUN_0045db40(uVar7,0,0xffffffff);
              local_4._0_1_ = 4;
              FUN_004040a0();
            }
            else if (*pcVar9 == 'n') {
              uVar7 = FUN_004e98a0();
              local_4._0_1_ = 0xb;
              FUN_0045db40(uVar7,0,0xffffffff);
              local_4._0_1_ = 4;
              FUN_004040a0();
            }
            else {
              uVar7 = FUN_005ae390(auStack_4c,s____Error_____p_c_____0069ae10);
              local_4._0_1_ = 0xe;
              FUN_0045db40(uVar7,0,0xffffffff);
              local_4._0_1_ = 4;
              FUN_004040a0();
            }
          }
          break;
        case 0x73:
          FUN_0045db40(param_3,0,0xffffffff);
          break;
        case 0x74:
          uVar7 = FUN_00565990();
          local_4._0_1_ = 0x10;
          FUN_0045db40(uVar7,0,0xffffffff);
          local_4._0_1_ = 4;
          FUN_004040a0();
        }
      }
      else {
        if (iVar4 == 0) {
          puVar6 = &DAT_0064a3b4;
        }
        else {
          puVar6 = (undefined1 *)(iVar4 + uVar10);
        }
        uVar1 = *puVar6;
        if (-iStack_130 - 1U < 2) {
          FUN_005fe5fb();
        }
        iVar4 = iStack_130 + 1;
        cVar3 = FUN_00401940(iVar4,0);
        uVar11 = uVar10;
        if (cVar3 != '\0') {
          *(undefined1 *)(iStack_130 + iStack_134) = uVar1;
          *(undefined1 *)(iStack_134 + iVar4) = 0;
          iStack_130 = iVar4;
        }
      }
      uVar10 = uVar11 + 1;
      uVar8 = *(uint *)(param_2 + 8);
    } while (uVar10 < uVar8);
  }
  *param_1 = auStack_138[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(auStack_138,0,0xffffffff);
  if (iStack_e8 != 0) {
    cVar3 = *(char *)(iStack_e8 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0(iStack_e8 + -1);
    }
    else {
      *(char *)(iStack_e8 + -1) = cVar3 + -1;
    }
  }
  iStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  if (iStack_134 != 0) {
    cVar3 = *(char *)(iStack_134 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0(iStack_134 + -1);
    }
    else {
      *(char *)(iStack_134 + -1) = cVar3 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

