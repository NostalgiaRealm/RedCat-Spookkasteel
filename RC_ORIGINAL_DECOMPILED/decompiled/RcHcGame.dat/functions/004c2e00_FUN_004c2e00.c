/*
 * FUN_004c2e00 at 004c2e00
 * undefined FUN_004c2e00(void)
 * Address ranges: 004c2e00-004c3637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004c2e00(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *local_e8;
  undefined4 local_dc [2];
  char *local_d4;
  uint local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined1 local_c4 [4];
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined1 local_b4 [4];
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 auStack_94 [2];
  undefined1 local_8c [4];
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c [4];
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630290;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_c8 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x5e5);
  local_4 = 0;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  local_4._0_1_ = 2;
  FUN_004040a0(0);
  local_4._0_1_ = 3;
  FUN_004040a0(0);
  local_4._0_1_ = 4;
  FUN_004040a0(0);
  puVar3 = *(undefined1 **)(param_1 + 0x18);
  local_4._0_1_ = 5;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  uVar4 = FUN_005ae390(local_8c,s_CAdamApplication__ProcessCommand_006985b8,puVar3);
  local_4._0_1_ = 6;
  FUN_005aff00(uVar4);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_dc[0] = 0;
  bVar1 = false;
LAB_004c2f0c:
  do {
    uVar4 = FUN_005b09f0(local_6c,param_1 + 0x14,local_dc);
    local_4._0_1_ = 7;
    iVar5 = FUN_0040cc00(uVar4,0,0xffffffff);
    iVar5 = *(int *)(iVar5 + 8);
    local_4._0_1_ = 5;
    FUN_004040a0(1);
    if (iVar5 == 0) {
      if (bVar1) {
        FUN_005afe30(s_Usage__00698508);
        FUN_005afe30(s__map_<<file>>_006984f8);
        FUN_005afe30(s_Loads_<<file>>_emulating_the__si_006984b8);
        FUN_005afe30(s_The_file_is_expected_to_be_in_a_s_0069847c);
        FUN_005afe30(s_NB__Do__not__specify_the_extensi_0069843c);
        FUN_005afe30(&DAT_006b3f70);
        FUN_005afe30(s__file_<<file>>_0069842c);
        FUN_005afe30(s_Loads_<<file>>__exactly_as_speci_006983ec);
        FUN_005afe30(s_NB__you__must__specify_the_exten_006983ac);
        FUN_005afe30(&DAT_006b3f70);
        FUN_005afe30(s__gamma_<<number>>_00698398);
        FUN_005afe30(s_Sets_the_gamma_correction_to_<<n_00698368);
      }
      if (local_b0 != 0) {
        cVar2 = *(char *)(local_b0 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(local_b0 + -1));
        }
        else {
          *(char *)(local_b0 + -1) = cVar2 + -1;
        }
      }
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      if (local_c0 != 0) {
        cVar2 = *(char *)(local_c0 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(local_c0 + -1));
        }
        else {
          *(char *)(local_c0 + -1) = cVar2 + -1;
        }
      }
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      if (local_a0 != (undefined1 *)0x0) {
        cVar2 = local_a0[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0(local_a0 + -1);
        }
        else {
          local_a0[-1] = cVar2 + -1;
        }
      }
      local_a0 = (undefined1 *)0x0;
      local_9c = 0;
      local_98 = 0;
      if (local_e8 != (char *)0x0) {
        cVar2 = local_e8[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0(local_e8 + -1);
        }
        else {
          local_e8[-1] = cVar2 + -1;
        }
      }
      if (local_d4 != (char *)0x0) {
        cVar2 = local_d4[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0(local_d4 + -1);
        }
        else {
          local_d4[-1] = cVar2 + -1;
        }
      }
      local_d4 = (char *)0x0;
      local_d0 = 0;
      local_cc = 0;
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = local_c;
      return;
    }
    if (local_d4 == (char *)0x0) {
      pcVar6 = "";
    }
    else {
      FUN_004c4700();
      pcVar6 = local_d4;
    }
    if (*pcVar6 != '-') {
      if (local_d4 == (char *)0x0) {
        pcVar6 = "";
      }
      else {
        FUN_004c4700();
        pcVar6 = local_d4;
      }
      if (*pcVar6 != '/') {
        pcVar6 = local_d4;
        if (local_d4 == (char *)0x0) {
          pcVar6 = "";
        }
        uVar4 = FUN_005ae390(local_7c,s_Unknown_argument___s___006985a0,pcVar6);
        local_4._0_1_ = 0xe;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x62e,uVar4);
        local_4._0_1_ = 5;
        if (local_78 != 0) {
          cVar2 = *(char *)(local_78 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(local_78 + -1));
          }
          else {
            *(char *)(local_78 + -1) = cVar2 + -1;
          }
        }
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        bVar1 = true;
        goto LAB_004c2f0c;
      }
    }
    uVar7 = local_d0 - 1;
    if (local_d0 == 0) {
      FUN_005fe747();
    }
    uVar8 = local_d0 - 1;
    if (uVar7 < local_d0 - 1) {
      uVar8 = uVar7;
    }
    if ((uVar8 == 0) || (uVar8 != local_d0)) {
LAB_004c30a4:
      cVar2 = FUN_00401940(uVar8,1);
      if (cVar2 != '\0') {
        pcVar6 = local_d4;
        if (local_d4 == (char *)0x0) {
          pcVar6 = "";
        }
        pcVar6 = pcVar6 + 1;
        pcVar9 = local_e8;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_00404190(uVar8);
        param_1 = local_c8;
      }
    }
    else {
      pcVar6 = local_d4;
      if (local_d4 == (char *)0x0) {
        pcVar6 = "";
      }
      if (0xfd < (byte)pcVar6[-1]) goto LAB_004c30a4;
      FUN_004040a0(1);
      local_e8 = local_d4;
      if (local_d4 == (char *)0x0) {
        local_e8 = "";
      }
      local_e8[-1] = local_e8[-1] + '\x01';
    }
    pcVar6 = local_e8;
    if (local_e8 == (char *)0x0) {
      pcVar6 = "";
    }
    iVar5 = __strcmpi(pcVar6,(char *)&PTR_DAT_0069859c);
    if (iVar5 == 0) {
      uVar4 = FUN_005b09f0(auStack_4c,param_1 + 0x14,local_dc);
      local_4._0_1_ = 8;
      FUN_0040cc00(uVar4,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004040a0(1);
      if (local_bc == 0) {
        pcVar6 = local_e8;
        if (local_e8 == (char *)0x0) {
          pcVar6 = "";
        }
        uVar4 = FUN_005ae390(auStack_2c,s_Missing_filename_after___s__comm_00698574,pcVar6);
        local_4._0_1_ = 9;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x5fd,uVar4);
        local_4._0_1_ = 5;
        FUN_004040a0(1);
        bVar1 = true;
      }
      uVar7 = 0xffffffff;
      pcVar6 = &DAT_0069856c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_0069856c,~uVar7 - 1);
      FUN_0045db40(local_c4,0,0xffffffff);
      uVar7 = 0xffffffff;
      pcVar6 = &DAT_00698564;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      FUN_00484c30(&DAT_00698564,~uVar7 - 1);
      FUN_0040cc00(local_b4,0,0xffffffff);
      param_1 = local_c8;
    }
    else {
      pcVar6 = local_e8;
      if (local_e8 == (char *)0x0) {
        pcVar6 = "";
      }
      iVar5 = __strcmpi(pcVar6,&DAT_0069855c);
      if (iVar5 == 0) {
        uVar4 = FUN_005b09f0(auStack_5c,param_1 + 0x14,local_dc);
        local_4._0_1_ = 10;
        FUN_0040cc00(uVar4,0,0xffffffff);
        local_4._0_1_ = 5;
        FUN_004040a0(1);
        if (local_bc == 0) {
          pcVar6 = local_e8;
          if (local_e8 == (char *)0x0) {
            pcVar6 = "";
          }
          uVar4 = FUN_005ae390(auStack_3c,s_Missing_filename_after___s__comm_00698574,pcVar6);
          local_4._0_1_ = 0xb;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x60c,uVar4);
          local_4._0_1_ = 5;
          FUN_004040a0(1);
          bVar1 = true;
        }
        FUN_0040cc00(local_c4,0,0xffffffff);
      }
      else {
        pcVar6 = local_e8;
        if (local_e8 == (char *)0x0) {
          pcVar6 = "";
        }
        iVar5 = __strcmpi(pcVar6,&DAT_00698554);
        if (iVar5 == 0) {
          *(undefined1 *)(param_1 + 0x34) = 0;
        }
        else {
          pcVar6 = local_e8;
          if (local_e8 == (char *)0x0) {
            pcVar6 = "";
          }
          iVar5 = __strcmpi(pcVar6,s_gamma_0069854c);
          if (iVar5 != 0) {
            pcVar6 = local_e8;
            if (local_e8 == (char *)0x0) {
              pcVar6 = "";
            }
            iVar5 = __strcmpi(pcVar6,&DAT_00698514);
            if (iVar5 != 0) break;
            goto LAB_004c3489;
          }
          uVar4 = FUN_005b09f0(auStack_1c,param_1 + 0x14,local_dc);
          local_4._0_1_ = 0xc;
          FUN_0040cc00(uVar4,0,0xffffffff);
          local_4._0_1_ = 5;
          FUN_004040a0(1);
          puVar3 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          iVar5 = FUN_0060b449(puVar3,&DAT_0069081c,auStack_94);
          if (iVar5 == 1) {
            *(undefined4 *)(param_1 + 0x38) = auStack_94[0];
          }
          else {
            pcVar6 = local_e8;
            if (local_e8 == (char *)0x0) {
              pcVar6 = "";
            }
            uVar4 = FUN_005ae390(local_8c,s_Command___s__must_be_followed_by_00698518,pcVar6);
            local_4._0_1_ = 0xd;
            FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x621,uVar4);
            local_4._0_1_ = 5;
            if (iStack_88 != 0) {
              cVar2 = *(char *)(iStack_88 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005fe5f0((char *)(iStack_88 + -1));
              }
              else {
                *(char *)(iStack_88 + -1) = cVar2 + -1;
              }
            }
            iStack_88 = 0;
            uStack_84 = 0;
            uStack_80 = 0;
            bVar1 = true;
          }
        }
      }
    }
  } while( true );
  pcVar6 = local_e8;
  if (local_e8 == (char *)0x0) {
    pcVar6 = "";
  }
  iVar5 = __strcmpi(pcVar6,&DAT_00698510);
  if (iVar5 == 0) {
LAB_004c3489:
    bVar1 = true;
  }
  goto LAB_004c2f0c;
}

