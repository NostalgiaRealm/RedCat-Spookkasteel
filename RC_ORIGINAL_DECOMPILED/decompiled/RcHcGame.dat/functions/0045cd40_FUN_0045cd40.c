/*
 * FUN_0045cd40 at 0045cd40
 * undefined FUN_0045cd40(void)
 * Address ranges: 0045cd40-0045d450
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d678 slot 6 for .?AVCRcCameraTriggerModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64d678 slot 6 for
   .?AVCRcCameraTriggerModel@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_0045cd40(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *_Str1;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
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
  puStack_8 = &LAB_006271f0;
  local_c = ExceptionList;
  pcVar2 = *(char **)(param_2 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  ExceptionList = &local_c;
  iVar3 = __strcmpi(pcVar2,s_ResetCode_00692218);
  if (iVar3 != 0) {
    pcVar2 = *(char **)(param_2 + 4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    iVar3 = __strcmpi(pcVar2,s_AddCode_006921c8);
    if (iVar3 != 0) {
      pcVar2 = *(char **)(param_2 + 4);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = "";
      }
      iVar3 = __strcmpi(pcVar2,s_trigger_00692168);
      if (iVar3 == 0) {
        FUN_0045ca80(param_3);
        ExceptionList = local_c;
        return 1;
      }
      pcVar2 = *(char **)(param_2 + 4);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = "";
      }
      iVar3 = __strcmpi(pcVar2,s_enable_0068f0e4);
      if (iVar3 == 0) {
        if (*(char *)(param_1 + 0xa9) != '\0') {
          if (param_3 == 0) {
            puVar5 = &DAT_006920fc;
            puVar9 = &DAT_006920fc;
          }
          else {
            puVar5 = *(undefined1 **)(param_3 + 0x70);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0064a3b4;
            }
            puVar9 = &DAT_0064a3b4;
            if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
              puVar9 = *(undefined1 **)(param_3 + 0x60);
            }
          }
          puVar6 = *(undefined1 **)(param_1 + 0x70);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          puVar7 = *(undefined1 **)(param_1 + 0x60);
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          FUN_0060a613(param_1,puVar7,puVar6,puVar9,puVar5);
          uVar4 = FUN_0060b060();
          uVar4 = FUN_005ae390(local_1c,s__s__s___s__is_ACTIVATED_on_comma_00692138,uVar4);
          local_4 = 10;
          FUN_005aff00(uVar4);
          local_4 = 0xffffffff;
          if (local_18 != 0) {
            cVar1 = *(char *)(local_18 + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)(local_18 + -1));
            }
            else {
              *(char *)(local_18 + -1) = cVar1 + -1;
            }
          }
        }
        FUN_00502350(1);
        if ((*(int *)(*(int *)(param_1 + 0x168) + 0xa4) != 0) &&
           ((iVar3 = *(int *)(*(int *)(param_1 + 0x168) + 0x34), iVar3 < 1 ||
            (*(int *)(param_1 + 0x174) < iVar3)))) {
          *(undefined4 *)(param_1 + 0x16c) = 1;
          *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
          FUN_0045b500();
        }
        ExceptionList = local_c;
        return 1;
      }
      pcVar2 = *(char **)(param_2 + 4);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = "";
      }
      iVar3 = __strcmpi(pcVar2,s_disable_0068f0dc);
      if (iVar3 != 0) {
        uVar4 = FUN_004d1940(param_2,param_3,param_4);
        ExceptionList = local_c;
        return uVar4;
      }
      if (*(char *)(param_1 + 0xa9) != '\0') {
        if (param_3 == 0) {
          puVar5 = &DAT_006920fc;
          puVar9 = &DAT_006920fc;
        }
        else {
          puVar5 = *(undefined1 **)(param_3 + 0x70);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          puVar9 = &DAT_0064a3b4;
          if (*(undefined1 **)(param_3 + 0x60) != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)(param_3 + 0x60);
          }
        }
        puVar6 = *(undefined1 **)(param_1 + 0x70);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        puVar7 = *(undefined1 **)(param_1 + 0x60);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        FUN_0060a613(param_1,puVar7,puVar6,puVar9,puVar5);
        uVar4 = FUN_0060b060();
        uVar4 = FUN_005ae390(local_3c,s__s__s___s__is_DE_ACTIVATED_on_co_00692104,uVar4);
        local_4 = 0xb;
        FUN_005aff00(uVar4);
        local_4 = 0xffffffff;
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
      FUN_00502350(0);
      ExceptionList = local_c;
      return 1;
    }
    local_4c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar2 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 5;
    iVar3 = *(int *)(param_4 + 4);
    if (((iVar3 != 0) && ((*(int *)(param_4 + 8) - iVar3) / 0x18 == 1)) &&
       (*(int *)(iVar3 + 8) == 3)) {
      uVar4 = FUN_0045da10(local_1c);
      local_4._0_1_ = 8;
      FUN_0040cc00(uVar4,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004040a0(1);
      FUN_0045db40(local_4c,0,0xffffffff);
      if (*(char *)(param_1 + 0xa9) != '\0') {
        puVar5 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_1 + 0x17c) != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)(param_1 + 0x17c);
        }
        puVar9 = &DAT_0064a3b4;
        if (*(undefined1 **)(param_1 + 0x18c) != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)(param_1 + 0x18c);
        }
        if (local_48 == (undefined1 *)0x0) {
          local_48 = &DAT_0064a3b4;
        }
        puVar6 = *(undefined1 **)(param_1 + 0x60);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar4 = FUN_005ae390(local_1c,s_Trigger__s_added___s__to_code_so_00692194,puVar6,local_48,
                             puVar9,puVar5);
        local_4._0_1_ = 9;
        FUN_005aff00(uVar4);
        local_4._0_1_ = 5;
        FUN_004040a0(1);
      }
      if (*(int *)(param_1 + 0x180) != 0) {
        pcVar2 = "";
        if (*(char **)(param_1 + 0x18c) != (char *)0x0) {
          pcVar2 = *(char **)(param_1 + 0x18c);
        }
        _Str1 = *(char **)(param_1 + 0x17c);
        if (_Str1 == (char *)0x0) {
          _Str1 = "";
        }
        iVar3 = __strcmpi(_Str1,pcVar2);
        if (iVar3 == 0) {
          FUN_0045ca80(param_3);
        }
      }
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      ExceptionList = local_c;
      return 1;
    }
    iVar3 = FUN_005b18a0(local_2c,param_4);
    puVar5 = *(undefined1 **)(iVar3 + 4);
    local_4._0_1_ = 6;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_AddCode____s_____invalid_codestr_00692170,puVar5);
    local_4._0_1_ = 7;
    FUN_005035a0(uVar4);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = local_c;
    return 0;
  }
  local_4c[0] = (undefined1)param_3;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar2 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
  local_4 = 0;
  iVar3 = *(int *)(param_4 + 4);
  if (((iVar3 == 0) || ((*(int *)(param_4 + 8) - iVar3) / 0x18 != 1)) || (*(int *)(iVar3 + 8) != 3))
  {
    iVar3 = FUN_005b18a0(local_1c,param_4);
    puVar5 = *(undefined1 **)(iVar3 + 4);
    local_4._0_1_ = 1;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_2c,s_ResetCode____s_____invalid_codes_006921d0,puVar5);
    local_4._0_1_ = 2;
    FUN_005035a0(uVar4);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = local_c;
    return 0;
  }
  uVar4 = FUN_0045da10(local_3c);
  local_4._0_1_ = 3;
  FUN_0040cc00(uVar4,0,0xffffffff);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (*(char *)(param_1 + 0xa9) != '\0') {
    if (local_48 == (undefined1 *)0x0) {
      local_48 = &DAT_0064a3b4;
    }
    puVar5 = *(undefined1 **)(param_1 + 0x60);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_3c,s_Trigger__s_resets_code_to___s__006921f8,puVar5,local_48);
    local_4._0_1_ = 4;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_0040cc00(local_4c,0,0xffffffff);
  uVar8 = 0xffffffff;
  pcVar2 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return 1;
}

