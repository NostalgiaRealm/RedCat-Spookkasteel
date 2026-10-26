/*
 * FUN_004be990 at 004be990
 * undefined FUN_004be990(void)
 * Address ranges: 004be990-004bef61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004be990(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  LPCSTR lpText;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  LPCSTR lpCaption;
  undefined1 *puVar9;
  char *local_68;
  uint local_64;
  char *local_58;
  int local_54;
  LPCSTR local_48;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fc68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559230();
  iVar2 = FUN_004337e0();
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 1;
  }
  iVar2 = FUN_00558ff0();
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
  local_4 = 0;
  if (local_54 != 0) {
    if (local_58 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      FUN_004c4700();
      pcVar4 = local_58;
    }
    iVar2 = FUN_0060b28c((int)*pcVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00559470();
      FUN_004040a0(0);
      FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
      local_4._0_1_ = 2;
      if (3 < local_64) {
        if ((local_64 == 0) || (local_68 == (char *)0x0)) {
          pcVar4 = "";
        }
        else {
          FUN_004c4700();
          pcVar4 = local_68 + 1;
        }
        if (*pcVar4 == ':') {
          if ((local_64 < 2) || (local_68 == (char *)0x0)) {
            pcVar4 = "";
          }
          else {
            FUN_004c4700();
            pcVar4 = local_68 + 2;
          }
          if (*pcVar4 == '\\') {
            if (local_58 == (char *)0x0) {
              pcVar4 = "";
            }
            else {
              FUN_004c4700();
              pcVar4 = local_58;
            }
            if (local_68 == (char *)0x0) {
              pcVar3 = "";
            }
            else {
              FUN_004c4700();
              pcVar3 = local_68;
            }
            *pcVar3 = *pcVar4;
            while( true ) {
              FUN_00515ff0();
              iVar2 = FUN_004337e0();
              if (iVar2 != 0) {
                pcVar4 = local_68;
                if (local_68 == (char *)0x0) {
                  pcVar4 = "";
                }
                uVar5 = FUN_005ae390(local_3c,s_CheckCD____look_for_file__s_on_C_00697bd0,pcVar4);
                local_4._0_1_ = 4;
                FUN_005aff00(uVar5);
                local_4._0_1_ = 2;
                FUN_004040a0(1);
              }
              pcVar4 = local_68;
              if (local_68 == (char *)0x0) {
                pcVar4 = "";
              }
              iVar2 = FUN_0061f646(pcVar4,0);
              if (iVar2 != -1) {
                FUN_00515ff0();
                iVar2 = FUN_004337e0();
                if (iVar2 != 0) {
                  if (local_68 == (char *)0x0) {
                    local_68 = "";
                  }
                  uVar5 = FUN_005ae390(local_1c,s_CheckCD____OK__found_file__s_on_C_00697b3c,
                                       local_68);
                  local_4._0_1_ = 5;
                  FUN_005aff00(uVar5);
                  local_4._0_1_ = 2;
                  FUN_004040a0(1);
                }
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_004040a0(1);
                local_4 = 0xffffffff;
                FUN_004040a0(1);
                ExceptionList = local_c;
                return 1;
              }
              FUN_00515ff0();
              iVar2 = FUN_004337e0();
              if (iVar2 != 0) {
                if (local_58 == (char *)0x0) {
                  pcVar4 = "";
                }
                else {
                  FUN_004c4700();
                  pcVar4 = local_58;
                }
                uVar5 = FUN_005ae390(local_2c,s_CheckCD____Ask_for_CD_in_drive___00697bac,
                                     (int)*pcVar4);
                local_4._0_1_ = 6;
                FUN_005aff00(uVar5);
                local_4._0_1_ = 2;
                FUN_004040a0(1);
              }
              iVar2 = DAT_006b915c;
              if (DAT_006b915c == 0) {
                iVar2 = FUN_004bc480();
              }
              FUN_004040a0(0);
              FUN_0040cc00(iVar2 + 0x70,0,0xffffffff);
              local_4 = CONCAT31(local_4._1_3_,7);
              lpCaption = local_48;
              if (local_48 == (LPCSTR)0x0) {
                lpCaption = "";
              }
              iVar2 = FUN_005ae390(local_1c,s_Plaats_de_cd_rom___s__in_de_cd_r_00697b80,lpCaption);
              lpText = *(LPCSTR *)(iVar2 + 4);
              if (lpText == (LPCSTR)0x0) {
                lpText = "";
              }
              iVar2 = MessageBoxA((HWND)0x0,lpText,lpCaption,0x31);
              FUN_004040a0(1);
              if (iVar2 != 1) break;
              iVar6 = FUN_00515ff0();
              iVar2 = *(int *)(iVar6 + 100);
              if (iVar2 == -0x80000000) {
                puVar7 = *(undefined1 **)(iVar6 + 0x18);
                if (puVar7 == (undefined1 *)0x0) {
                  puVar7 = &DAT_0064a3b4;
                }
                iVar2 = FUN_0060af10(puVar7);
                *(int *)(iVar6 + 100) = iVar2;
              }
              if (iVar2 != 0) {
                FUN_005afe30(s_CheckCD____User_selects_OK_00697b64);
              }
              local_4._0_1_ = 2;
              if (local_48 != (LPCSTR)0x0) {
                cVar1 = local_48[-1];
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_005fe5f0(local_48 + -1);
                }
                else {
                  local_48[-1] = cVar1 + -1;
                }
              }
              local_48 = (LPCSTR)0x0;
            }
            iVar6 = FUN_00515ff0();
            iVar2 = *(int *)(iVar6 + 100);
            if (iVar2 == -0x80000000) {
              puVar7 = *(undefined1 **)(iVar6 + 0x18);
              if (puVar7 == (undefined1 *)0x0) {
                puVar7 = &DAT_0064a3b4;
              }
              iVar2 = FUN_0060af10(puVar7);
              *(int *)(iVar6 + 100) = iVar2;
            }
            if (iVar2 != 0) {
              FUN_005afe30(s_CheckCD____User_selects_Cancel_00697b1c);
            }
            if (local_68 == (char *)0x0) {
              local_68 = "";
            }
            uVar5 = FUN_005ae390(local_1c,s_CheckCD____Cannot_find_file__s_o_00697af4,local_68);
            local_4._0_1_ = 8;
            FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x1c9,uVar5);
            local_4._0_1_ = 7;
            FUN_004040a0(1);
            local_4._0_1_ = 2;
            FUN_004040a0(1);
            local_4 = (uint)local_4._1_3_ << 8;
            goto LAB_004bef35;
          }
        }
      }
      iVar2 = FUN_00559470();
      puVar7 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar2 + 0x54) != (undefined1 *)0x0) {
        puVar7 = *(undefined1 **)(iVar2 + 0x54);
      }
      iVar2 = FUN_00559470();
      puVar9 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar2 + 0x38) != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)(iVar2 + 0x38);
      }
      iVar2 = FUN_00559470();
      puVar8 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar2 + 0x28) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(iVar2 + 0x28);
      }
      if (local_58 == (char *)0x0) {
        local_58 = "";
      }
      uVar5 = FUN_005ae390(local_1c,s_CheckCD____Invalid_setting_for_T_00697a94,local_58,puVar8,
                           puVar9,puVar7);
      local_4._0_1_ = 3;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x1b1,uVar5);
      local_4._0_1_ = 2;
      FUN_004040a0(1);
      local_4 = (uint)local_4._1_3_ << 8;
      goto LAB_004bef35;
    }
  }
  iVar2 = FUN_00558ff0();
  puVar7 = &DAT_0064a3b4;
  if (*(undefined1 **)(iVar2 + 0x54) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(iVar2 + 0x54);
  }
  iVar2 = FUN_00558ff0();
  puVar9 = &DAT_0064a3b4;
  if (*(undefined1 **)(iVar2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(iVar2 + 0x38);
  }
  iVar2 = FUN_00558ff0();
  puVar8 = &DAT_0064a3b4;
  if (*(undefined1 **)(iVar2 + 0x28) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(iVar2 + 0x28);
  }
  if (local_58 == (char *)0x0) {
    local_58 = "";
  }
  uVar5 = FUN_005ae390(local_1c,s_CheckCD____Invalid_setting_for_C_00697a34,local_58,puVar8,puVar9,
                       puVar7);
  local_4._0_1_ = 1;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x1a1,uVar5);
  local_4 = (uint)local_4._1_3_ << 8;
LAB_004bef35:
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return 0;
}

