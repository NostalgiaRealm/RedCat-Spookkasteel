/*
 * FUN_004d45c0 at 004d45c0
 * undefined FUN_004d45c0(void)
 * Address ranges: 004d45c0-004d4c54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_004d45c0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *_Str1;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 local_4c [4];
  undefined1 *local_48;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006995e4,0x145);
  local_4 = 0;
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar4 = __strcmpi(pcVar3,s_ResetCode_00692218);
  if (iVar4 == 0) {
    local_4c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 1;
    iVar4 = *(int *)(param_4 + 4);
    if (((iVar4 == 0) || ((*(int *)(param_4 + 8) - iVar4) / 0x18 != 1)) ||
       (*(int *)(iVar4 + 8) != 3)) {
      iVar4 = FUN_005b18a0(local_1c,param_4);
      puVar6 = *(undefined1 **)(iVar4 + 4);
      local_4._0_1_ = 2;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_2c,s_ResetCode____s_____invalid_codes_006921d0,puVar6);
      local_4._0_1_ = 3;
      FUN_005035a0(uVar5);
      local_4._0_1_ = 2;
      FUN_004040a0(1);
      local_4._0_1_ = 1;
      FUN_004040a0(1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = FUN_0045da10(local_3c);
    local_4._0_1_ = 4;
    FUN_0040cc00(uVar5,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    if (*(char *)(param_1 + 0xa9) != '\0') {
      if (local_48 == (undefined1 *)0x0) {
        local_48 = &DAT_0064a3b4;
      }
      puVar6 = *(undefined1 **)(param_1 + 0x60);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_3c,s_Trigger__s_resets_code_to___s__006921f8,puVar6,local_48);
      local_4._0_1_ = 5;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    FUN_0040cc00(local_4c,0,0xffffffff);
    uVar9 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    goto LAB_004d4c04;
  }
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar4 = __strcmpi(pcVar3,s_AddCode_006921c8);
  if (iVar4 == 0) {
    local_4c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 6;
    iVar4 = *(int *)(param_4 + 4);
    if (((iVar4 == 0) || ((*(int *)(param_4 + 8) - iVar4) / 0x18 != 1)) ||
       (*(int *)(iVar4 + 8) != 3)) {
      iVar4 = FUN_005b18a0(local_2c,param_4);
      puVar6 = *(undefined1 **)(iVar4 + 4);
      local_4._0_1_ = 7;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_1c,s_AddCode____s_____invalid_codestr_00692170,puVar6);
      local_4._0_1_ = 8;
      FUN_005035a0(uVar5);
      local_4._0_1_ = 7;
      FUN_004040a0(1);
      local_4._0_1_ = 6;
      FUN_004040a0(1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = FUN_0045da10(local_1c);
    local_4._0_1_ = 9;
    FUN_0040cc00(uVar5,0,0xffffffff);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    FUN_0045db40(local_4c,0,0xffffffff);
    if (*(char *)(param_1 + 0xa9) != '\0') {
      puVar6 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_1 + 0x17c) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(param_1 + 0x17c);
      }
      puVar10 = &DAT_0064a3b4;
      if (*(undefined1 **)(param_1 + 0x18c) != (undefined1 *)0x0) {
        puVar10 = *(undefined1 **)(param_1 + 0x18c);
      }
      if (local_48 == (undefined1 *)0x0) {
        local_48 = &DAT_0064a3b4;
      }
      puVar7 = *(undefined1 **)(param_1 + 0x60);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_1c,s_Trigger__s_added___s__to_code_so_00692194,puVar7,local_48,
                           puVar10,puVar6);
      local_4._0_1_ = 10;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    if (*(int *)(param_1 + 0x180) != 0) {
      pcVar3 = "";
      if (*(char **)(param_1 + 0x18c) != (char *)0x0) {
        pcVar3 = *(char **)(param_1 + 0x18c);
      }
      _Str1 = *(char **)(param_1 + 0x17c);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar4 = __strcmpi(_Str1,pcVar3);
      if (iVar4 == 0) {
        FUN_004d4310(param_3);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    goto LAB_004d4c04;
  }
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar4 = __strcmpi(pcVar3,s_trigger_00692168);
  if (iVar4 == 0) {
    FUN_004d4310(param_3);
    goto LAB_004d4c04;
  }
  pcVar3 = *(char **)(param_2 + 4);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  iVar4 = __strcmpi(pcVar3,s_enable_0068f0e4);
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0xa9) != '\0') {
      if (param_3 == 0) {
        puVar6 = &DAT_006920fc;
        puVar10 = &DAT_006920fc;
      }
      else {
        puVar6 = *(undefined1 **)(param_3 + 0x70);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        puVar10 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)(param_3 + 0x60);
        }
      }
      puVar7 = *(undefined1 **)(param_1 + 0x70);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      puVar8 = *(undefined1 **)(param_1 + 0x60);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      FUN_0060a613(param_1,puVar8,puVar7,puVar10,puVar6);
      uVar5 = FUN_0060b060();
      uVar5 = FUN_005ae390(local_1c,s__s__s___s__is_ACTIVATED_on_comma_00692138,uVar5);
      local_4._0_1_ = 0xb;
      FUN_005aff00(uVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          uVar5 = 1;
          *(char *)(local_18 + -1) = cVar1 + -1;
          goto LAB_004d4bfd;
        }
        FUN_005fe5f0((char *)(local_18 + -1));
      }
    }
    uVar5 = 1;
  }
  else {
    pcVar3 = *(char **)(param_2 + 4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = __strcmpi(pcVar3,s_disable_0068f0dc);
    if (iVar4 != 0) {
      uVar2 = FUN_004d1940(param_2,param_3,param_4);
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = local_c;
      return uVar2;
    }
    if (*(char *)(param_1 + 0xa9) != '\0') {
      if (param_3 == 0) {
        puVar6 = &DAT_006920fc;
        puVar10 = &DAT_006920fc;
      }
      else {
        puVar6 = *(undefined1 **)(param_3 + 0x70);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        puVar10 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)(param_3 + 0x60);
        }
      }
      puVar7 = *(undefined1 **)(param_1 + 0x70);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      puVar8 = *(undefined1 **)(param_1 + 0x60);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_0064a3b4;
      }
      FUN_0060a613(param_1,puVar8,puVar7,puVar10,puVar6);
      uVar5 = FUN_0060b060();
      uVar5 = FUN_005ae390(local_3c,s__s__s___s__is_DE_ACTIVATED_on_co_00692104,uVar5);
      local_4._0_1_ = 0xc;
      FUN_005aff00(uVar5);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_38 != 0) {
        cVar1 = *(char *)(local_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_38 + -1));
        }
        else {
          *(char *)(local_38 + -1) = cVar1 + -1;
        }
      }
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
    }
    uVar5 = 0;
  }
LAB_004d4bfd:
  FUN_00502350(uVar5);
LAB_004d4c04:
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return 1;
}

