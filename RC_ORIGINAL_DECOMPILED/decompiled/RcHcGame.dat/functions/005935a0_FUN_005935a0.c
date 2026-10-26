/*
 * FUN_005935a0 at 005935a0
 * undefined FUN_005935a0(void)
 * Address ranges: 005935a0-00594363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005939df) */
/* WARNING: Removing unreachable block (ram,0x005939e7) */
/* WARNING: Removing unreachable block (ram,0x005939ec) */

void __fastcall FUN_005935a0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined1 local_ed;
  undefined1 local_ec [4];
  char *pcStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int local_dc;
  int iStack_d8;
  undefined1 auStack_d4 [4];
  int local_d0;
  undefined1 local_cc [4];
  char *pcStack_c8;
  undefined1 local_bc [4];
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 local_ac [4];
  char *pcStack_a8;
  uint uStack_a4;
  undefined1 *puStack_98;
  int iStack_94;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643abf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_4 = 0;
  FUN_0060b1db(local_ac,0x10,10,&LAB_00592b30,FUN_00542570);
  local_4._0_1_ = 1;
  local_bc[0] = local_ed;
  FUN_004040a0(0);
  local_d0 = param_1 + 0x2f8;
  local_4._0_1_ = 2;
  cVar2 = FUN_00593450(local_d0,local_cc,local_ac,local_bc);
  if (cVar2 == '\0') {
    FUN_00592c20(local_bc);
    uVar11 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0060af6c(local_ac,0x10,10,FUN_00542570);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = local_c;
    return;
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_ed);
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_ec);
    (*pcVar4)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  piVar1 = *(int **)(iVar3 + 0x3a4);
  local_dc = 0;
  FUN_005844b0();
  local_4._0_1_ = 4;
  piVar5 = (int *)FUN_00453d20(auStack_d4);
  local_4._0_1_ = 5;
  if (local_dc != *piVar5) {
    if (local_dc != 0) {
      FUN_004098d0();
    }
    local_dc = *piVar5;
    FUN_005844b0();
  }
  local_4._0_1_ = 4;
  FUN_0057d310();
  pcVar6 = pcStack_c8;
  if (pcStack_c8 == (char *)0x0) {
    pcVar6 = "";
  }
  iVar3 = __strcmpi(pcVar6,s_settings_006a693c);
  if (iVar3 == 0) {
    iVar3 = FUN_005ac520();
    while (iVar3 != 0) {
      uVar11 = uStack_a4;
      if (*(uint *)(iVar3 + 0x2c) <= uStack_a4) {
        uVar11 = *(uint *)(iVar3 + 0x2c);
      }
      puVar7 = *(undefined1 **)(iVar3 + 0x28);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      pcVar6 = pcStack_a8;
      if (pcStack_a8 == (char *)0x0) {
        pcVar6 = "";
      }
      iVar8 = FUN_0060d260(pcVar6,puVar7,uVar11);
      if (iVar8 == 0) {
        puVar7 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar3 + 0x18) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(iVar3 + 0x18);
        }
        puVar9 = *(undefined1 **)(iVar3 + 0x28);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_0064a3b4;
        }
        uVar10 = FUN_005ae390(local_ec,s__s____s_006a6934,puVar9,puVar7);
        local_4._0_1_ = 7;
        FUN_00592c20(uVar10);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
      }
      iVar3 = FUN_005ac530();
    }
  }
  else {
    pcVar6 = pcStack_c8;
    if (pcStack_c8 == (char *)0x0) {
      pcVar6 = "";
    }
    iVar3 = __strcmpi(pcVar6,s_restart_00694a60);
    if (iVar3 == 0) {
      if (local_dc == 0) {
        local_ec[0] = local_ed;
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar6 = s_ERROR__no_current_sublevel_to_re_006a690c;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(s_ERROR__no_current_sublevel_to_re_006a690c,~uVar11 - 1);
        local_4._0_1_ = 9;
        FUN_00592c20(local_ec);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
      }
      else {
        uVar11 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
        local_ec[0] = local_ed;
        FUN_004040a0(0);
        uVar11 = 0xffffffff;
        pcVar6 = s_restart_00694a60;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(s_restart_00694a60,~uVar11 - 1);
        local_4._0_1_ = 8;
        (**(code **)(*piVar1 + 0x1c))(local_ec);
        local_4._0_1_ = 4;
        FUN_004040a0(1);
      }
    }
    else {
      pcVar6 = pcStack_c8;
      if (pcStack_c8 == (char *)0x0) {
        pcVar6 = "";
      }
      iVar3 = __strcmpi(pcVar6,&DAT_006a6904);
      if (iVar3 == 0) {
        FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a68d8,0x186);
        local_4._0_1_ = 10;
        FUN_004c4440(1);
        local_4._0_1_ = 4;
        FUN_005ae770();
      }
      else {
        pcVar6 = pcStack_c8;
        if (pcStack_c8 == (char *)0x0) {
          pcVar6 = "";
        }
        iVar3 = __strcmpi(pcVar6,(char *)&PTR_DAT_0069859c);
        if (iVar3 == 0) {
          cVar2 = FUN_005adce0(local_ac);
          if (cVar2 == '\0') {
            local_ec[0] = local_ed;
            FUN_004040a0(0);
            uVar11 = 0xffffffff;
            pcVar6 = s_ERROR___filename__expected__use_q_006a6880;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            FUN_004040f0(s_ERROR___filename__expected__use_q_006a6880,~uVar11 - 1);
            local_4._0_1_ = 0xc;
            FUN_00592c20(local_ec);
            local_4._0_1_ = 4;
            FUN_004040a0(1);
          }
          else {
            uVar11 = 0xffffffff;
            pcVar6 = &DAT_006b3f70;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
            uVar10 = FUN_005ae020(local_ec,local_ac);
            local_4._0_1_ = 0xd;
            (**(code **)(*piVar1 + 0x1c))(uVar10);
            local_4._0_1_ = 4;
            FUN_004040a0(1);
          }
        }
        else {
          pcVar6 = pcStack_c8;
          if (pcStack_c8 == (char *)0x0) {
            pcVar6 = "";
          }
          iVar3 = __strcmpi(pcVar6,s_cheats_006a6878);
          if (iVar3 == 0) {
            pcVar6 = pcStack_a8;
            if (pcStack_a8 == (char *)0x0) {
              pcVar6 = "";
            }
            iVar3 = __strcmpi(pcVar6,&DAT_006a1354);
            if (iVar3 != 0) {
              pcVar6 = pcStack_a8;
              if (pcStack_a8 == (char *)0x0) {
                pcVar6 = "";
              }
              iVar3 = __strcmpi(pcVar6,s_false_0068d2d0);
              if (iVar3 != 0) {
                if (pcStack_a8 == (char *)0x0) {
                  pcStack_a8 = "";
                }
                iVar3 = __strcmpi(pcStack_a8,&DAT_00698b98);
                if (iVar3 != 0) {
                  local_ec[0] = local_ed;
                  FUN_004040a0(0);
                  uVar11 = 0xffffffff;
                  pcVar6 = s_OK__Cheats_are_turned_ON_006a685c;
                  do {
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    cVar2 = *pcVar6;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  FUN_004040f0(s_OK__Cheats_are_turned_ON_006a685c,~uVar11 - 1);
                  local_4._0_1_ = 0xf;
                  FUN_00592c20(local_ec);
                  local_4._0_1_ = 4;
                  FUN_004040a0(1);
                  FUN_00529a40(1);
                  goto LAB_00594268;
                }
              }
            }
            local_ec[0] = local_ed;
            FUN_004040a0(0);
            uVar11 = 0xffffffff;
            pcVar6 = s_OK__Cheats_are_turned_OFF_006a6840;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            FUN_004040f0(s_OK__Cheats_are_turned_OFF_006a6840,~uVar11 - 1);
            local_4._0_1_ = 0xe;
            FUN_00592c20(local_ec);
            local_4._0_1_ = 4;
            FUN_004040a0(1);
            FUN_00529a40(0);
          }
          else {
            pcVar6 = pcStack_c8;
            if (pcStack_c8 == (char *)0x0) {
              pcVar6 = "";
            }
            iVar3 = __strcmpi(pcVar6,&DAT_006a6838);
            if (iVar3 == 0) {
              local_ec[0] = local_ed;
              FUN_004040a0(0);
              uVar11 = 0xffffffff;
              pcVar6 = s_Supported_commands_are__006a6820;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(s_Supported_commands_are__006a6820,~uVar11 - 1);
              local_4._0_1_ = 0x10;
              FUN_00592c20(local_ec);
              local_4._0_1_ = 4;
              FUN_004040a0(1);
              local_ec[0] = local_ed;
              FUN_004040a0(0);
              uVar11 = 0xffffffff;
              pcVar6 = &DAT_006a6818;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006a6818,~uVar11 - 1);
              local_4._0_1_ = 0x11;
              FUN_00592c20(local_ec);
              local_4._0_1_ = 4;
              FUN_004040a0(1);
              local_ec[0] = local_ed;
              FUN_004040a0(0);
              uVar11 = 0xffffffff;
              pcVar6 = s_RESTART_006a680c;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(s_RESTART_006a680c,~uVar11 - 1);
              local_4._0_1_ = 0x12;
              FUN_00592c20(local_ec);
              local_4 = CONCAT31(local_4._1_3_,4);
              FUN_004040a0(1);
              local_ec[0] = local_ed;
              FUN_004040a0(0);
              uVar11 = 0xffffffff;
              pcVar6 = s_SETTINGS__partial_name__006a67f0;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              uVar11 = ~uVar11 - 1;
              cVar2 = FUN_00401940(uVar11,1);
              if (cVar2 != '\0') {
                pcVar6 = s_SETTINGS__partial_name__006a67f0;
                pcVar14 = pcStack_e8;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
                  pcVar6 = pcVar6 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar14 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar14 = pcVar14 + 1;
                }
                FUN_00404190(uVar11);
              }
              local_4._0_1_ = 0x13;
              FUN_00592c20(local_ec);
              local_4 = CONCAT31(local_4._1_3_,4);
              FUN_004040a0(1);
              local_ec[0] = local_ed;
              FUN_004040a0(0);
              uVar11 = 0xffffffff;
              pcVar6 = s_EXEC_DaviName_Command_006a67d8;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              uVar11 = ~uVar11 - 1;
              cVar2 = FUN_00401940(uVar11,1);
              if (cVar2 != '\0') {
                pcVar6 = s_EXEC_DaviName_Command_006a67d8;
                pcVar14 = pcStack_e8;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
                  pcVar6 = pcVar6 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar14 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar14 = pcVar14 + 1;
                }
                FUN_00404190(uVar11);
              }
              local_4._0_1_ = 0x14;
              FUN_00592c20(local_ec);
              local_4 = CONCAT31(local_4._1_3_,4);
              FUN_004040a0(1);
              local_ec[0] = local_ed;
              FUN_004040a0(0);
              uVar11 = 0xffffffff;
              pcVar6 = s_<setting>___<new_value>_006a67bc;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              uVar11 = ~uVar11 - 1;
              cVar2 = FUN_00401940(uVar11,1);
              if (cVar2 != '\0') {
                pcVar6 = s_<setting>___<new_value>_006a67bc;
                pcVar14 = pcStack_e8;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
                  pcVar6 = pcVar6 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar14 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar14 = pcVar14 + 1;
                }
                FUN_00404190(uVar11);
              }
              local_4._0_1_ = 0x15;
              FUN_00592c20(local_ec);
              local_4._0_1_ = 4;
              FUN_004040a0(1);
            }
            else {
              pcVar6 = pcStack_c8;
              if (pcStack_c8 == (char *)0x0) {
                pcVar6 = "";
              }
              local_ec[0] = local_ed;
              FUN_004040a0(0);
              uVar11 = 0xffffffff;
              pcVar14 = pcVar6;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar2 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar2 != '\0');
              uVar11 = ~uVar11 - 1;
              cVar2 = FUN_00401940(uVar11,1);
              if (cVar2 != '\0') {
                pcVar14 = pcStack_e8;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
                  pcVar6 = pcVar6 + 4;
                  pcVar14 = pcVar14 + 4;
                }
                for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar14 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar14 = pcVar14 + 1;
                }
                FUN_00404190(uVar11);
              }
              local_4._0_1_ = 0x16;
              cVar2 = FUN_00594370(local_ec,&iStack_d8);
              local_4._0_1_ = 4;
              FUN_004040a0(1);
              if (cVar2 == '\0') {
                puVar7 = *(undefined1 **)(local_d0 + 4);
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_0064a3b4;
                }
                uVar10 = FUN_005ae390(local_ec,s_ERROR__Unknown_command___s___typ_006a671c,puVar7);
                local_4._0_1_ = 0x1c;
                FUN_00592c20(uVar10);
                local_4._0_1_ = 4;
                if (pcStack_e8 == (char *)0x0) goto LAB_00594268;
                pcVar6 = pcStack_e8 + -1;
                cVar2 = pcStack_e8[-1];
                if ((cVar2 != '\0') && (cVar2 != -1)) {
                  *pcVar6 = cVar2 + -1;
                  goto LAB_00594268;
                }
              }
              else {
                if (iStack_d8 == 0) {
                  local_ec[0] = local_ed;
                  FUN_004040a0(0);
                  uVar11 = 0xffffffff;
                  pcVar6 = &DAT_006b3f70;
                  do {
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    cVar2 = *pcVar6;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  uVar11 = ~uVar11 - 1;
                  cVar2 = FUN_00401940(uVar11,1);
                  if (cVar2 != '\0') {
                    pcVar6 = &DAT_006b3f70;
                    pcVar14 = pcStack_e8;
                    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
                      pcVar6 = pcVar6 + 4;
                      pcVar14 = pcVar14 + 4;
                    }
                    for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                      *pcVar14 = *pcVar6;
                      pcVar6 = pcVar6 + 1;
                      pcVar14 = pcVar14 + 1;
                    }
                    FUN_00404190(uVar11);
                  }
                  local_4._0_1_ = 0x17;
                  pcVar4 = (code *)FUN_005a07f0(s_setting____0_006a67ac,
                                                s_D__Work_RCHorror_AdamSource_Adam_006a68d8,0x1c0,
                                                local_ec);
                  (*pcVar4)();
                  local_4._0_1_ = 4;
                  FUN_004040a0(1);
                }
                if (uStack_a4 == 0) {
                  puVar7 = &DAT_0064a3b4;
                  if (*(undefined1 **)(iStack_d8 + 0x18) != (undefined1 *)0x0) {
                    puVar7 = *(undefined1 **)(iStack_d8 + 0x18);
                  }
                  puVar9 = *(undefined1 **)(iStack_d8 + 0x28);
                  if (puVar9 == (undefined1 *)0x0) {
                    puVar9 = &DAT_0064a3b4;
                  }
                  uVar10 = FUN_005ae390(local_ec,s_Current_value_of__s____s_006a6790,puVar9,puVar7);
                  local_4._0_1_ = 0x18;
                  FUN_00592c20(uVar10);
                  local_4._0_1_ = 4;
                  FUN_004040a0(1);
                  goto LAB_00594268;
                }
                pcVar6 = pcStack_a8;
                if (pcStack_a8 == (char *)0x0) {
                  pcVar6 = "";
                }
                iVar3 = __strcmpi(pcVar6,(char *)&DAT_006a678c);
                if ((iVar3 == 0) && (iStack_94 == 0)) {
                  puVar7 = *(undefined1 **)(iStack_d8 + 0x28);
                  if (puVar7 == (undefined1 *)0x0) {
                    puVar7 = &DAT_0064a3b4;
                  }
                  uVar10 = FUN_005ae390(local_ec,s_ERROR__Expected__s___<new_value>_006a6768,puVar7)
                  ;
                  local_4._0_1_ = 0x19;
                  FUN_00592c20(uVar10);
                  local_4._0_1_ = 4;
                  FUN_004040a0(1);
                  goto LAB_00594268;
                }
                if (pcStack_a8 == (char *)0x0) {
                  pcStack_a8 = "";
                }
                iVar3 = __strcmpi(pcStack_a8,(char *)&DAT_006a678c);
                if ((iVar3 == 0) && (iStack_94 != 0)) {
                  if (puStack_98 == (undefined1 *)0x0) {
                    puStack_98 = &DAT_0064a3b4;
                  }
                  FUN_005acdb0(puStack_98);
                  puVar7 = &DAT_0064a3b4;
                  if (*(undefined1 **)(iStack_d8 + 0x18) != (undefined1 *)0x0) {
                    puVar7 = *(undefined1 **)(iStack_d8 + 0x18);
                  }
                  puVar9 = *(undefined1 **)(iStack_d8 + 0x28);
                  if (puVar9 == (undefined1 *)0x0) {
                    puVar9 = &DAT_0064a3b4;
                  }
                  uVar10 = FUN_005ae390(local_ec,s_OK___s____s_006a675c,puVar9,puVar7);
                  local_4._0_1_ = 0x1a;
                  FUN_00592c20(uVar10);
                }
                else {
                  local_ec[0] = local_ed;
                  uVar11 = 0xffffffff;
                  pcVar6 = s_ERROR__Syntax_error__006a6744;
                  do {
                    if (uVar11 == 0) break;
                    uVar11 = uVar11 - 1;
                    cVar2 = *pcVar6;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar2 != '\0');
                  uVar11 = ~uVar11 - 1;
                  pcStack_e8 = (char *)0x0;
                  uStack_e4 = 0;
                  uStack_e0 = 0;
                  cVar2 = FUN_00401940(uVar11,1);
                  if (cVar2 != '\0') {
                    pcVar6 = s_ERROR__Syntax_error__006a6744;
                    pcVar14 = pcStack_e8;
                    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
                      pcVar6 = pcVar6 + 4;
                      pcVar14 = pcVar14 + 4;
                    }
                    for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                      *pcVar14 = *pcVar6;
                      pcVar6 = pcVar6 + 1;
                      pcVar14 = pcVar14 + 1;
                    }
                    FUN_00404190(uVar11);
                  }
                  local_4._0_1_ = 0x1b;
                  FUN_00592c20(local_ec);
                }
                local_4._0_1_ = 4;
                if (pcStack_e8 == (char *)0x0) goto LAB_00594268;
                pcVar6 = pcStack_e8 + -1;
                cVar2 = pcStack_e8[-1];
                if ((cVar2 != '\0') && (cVar2 != -1)) {
                  *pcVar6 = cVar2 + -1;
                  goto LAB_00594268;
                }
              }
              local_4._0_1_ = 4;
              FUN_005fe5f0(pcVar6);
            }
          }
        }
      }
    }
  }
LAB_00594268:
  uVar11 = 0xffffffff;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11 - 1;
  cVar2 = FUN_00401940(uVar11,1);
  if (cVar2 != '\0') {
    puVar13 = (undefined4 *)&DAT_006b3f70;
    puVar15 = *(undefined4 **)(local_d0 + 4);
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    *(uint *)(local_d0 + 8) = uVar11;
    *(undefined1 *)(*(int *)(local_d0 + 4) + uVar11) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_dc != 0) {
    iVar3 = *(int *)(local_dc + 0x14) + -1;
    *(int *)(local_dc + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    local_dc = 0;
  }
  if (iStack_b8 != 0) {
    cVar2 = *(char *)(iStack_b8 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(iStack_b8 + -1));
    }
    else {
      *(char *)(iStack_b8 + -1) = cVar2 + -1;
    }
  }
  iStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0060af6c(local_ac,0x10,10,FUN_00542570);
  if (pcStack_c8 != (char *)0x0) {
    cVar2 = pcStack_c8[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(pcStack_c8 + -1);
    }
    else {
      pcStack_c8[-1] = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

