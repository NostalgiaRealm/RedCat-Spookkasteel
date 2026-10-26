/*
 * FUN_00504690 at 00504690
 * undefined FUN_00504690(void)
 * Address ranges: 00504690-00504e9f;005050c3-005050fe;005051cc-0050527d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005048ce) */
/* WARNING: Removing unreachable block (ram,0x0050482f) */

undefined4 __thiscall FUN_00504690(int *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined1 local_f8 [84];
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined8 local_64;
  int local_5c;
  undefined1 local_54 [4];
  int local_50;
  char *local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [4];
  char *local_2c;
  int *local_20;
  int *local_1c;
  undefined1 local_16;
  char local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635f23;
  local_10 = ExceptionList;
  iVar11 = 0;
  local_14 = &stack0xfffffefc;
  local_1c = param_1;
  if (param_1[0x1d] == 0) {
    ExceptionList = &local_10;
    iVar4 = FUN_00515db0();
    iVar11 = *(int *)(iVar4 + 100);
    if (iVar11 == -0x80000000) {
      puVar5 = *(undefined1 **)(iVar4 + 0x18);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      iVar11 = FUN_0060af10(puVar5);
      *(int *)(iVar4 + 100) = iVar11;
    }
    if (iVar11 != 0) {
      puVar5 = (undefined1 *)param_1[0x18];
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      puVar7 = *(undefined1 **)(param_2 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      FUN_0060a613(param_1,puVar5);
      uVar6 = FUN_0060b060();
      uVar6 = FUN_005ae390(local_54,s_Event__s_not_fired_for_object__s_0069df80,puVar7,uVar6);
      local_8 = 0x22;
      FUN_005aff00(uVar6);
      if (local_50 != 0) {
        cVar3 = *(char *)(local_50 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)(local_50 + -1));
        }
        else {
          *(char *)(local_50 + -1) = cVar3 + -1;
        }
      }
    }
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = &local_10;
  local_14 = &stack0xfffffefc;
  FUN_00515db0();
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    puVar5 = *(undefined1 **)(param_2 + 4);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    FUN_005ae390(local_30,&DAT_0069e144,puVar5);
    local_8 = 0;
    local_15 = '\x01';
    local_44 = (char *)0x0;
    iVar4 = FUN_00509a00();
    if (0 < iVar4) {
      do {
        if (local_15 == '\0') {
          local_84[0] = param_2._3_1_;
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar13 = &DAT_0069e140;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');
          FUN_004040f0(&DAT_0069e140,~uVar9 - 1);
          local_8._0_1_ = 2;
          FUN_0045db40(local_84,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_004040a0(1);
        }
        else {
          local_94[0] = param_2._3_1_;
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar13 = (char *)&DAT_00693460;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');
          FUN_004040f0(&DAT_00693460,~uVar9 - 1);
          local_8._0_1_ = 1;
          FUN_0045db40(local_94,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_004040a0(1);
          local_15 = '\0';
        }
        iVar4 = *(int *)(param_3 + 4);
        if (*(int *)(iVar11 + 8 + iVar4) == 3) {
          uVar6 = FUN_0045da10(local_f8);
          local_8._0_1_ = 3;
          FUN_0045db40(uVar6,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        else if (*(int *)(iVar11 + 8 + iVar4) == 1) {
          uVar1 = *(undefined8 *)(iVar11 + 0x10 + iVar4);
          local_64._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uVar6 = local_64._4_4_;
          local_64._0_4_ = (undefined4)uVar1;
          uVar2 = (undefined4)local_64;
          local_64 = uVar1;
          uVar6 = FUN_005ae390(local_a4,&DAT_0069e13c,uVar2,uVar6);
          local_8._0_1_ = 5;
          FUN_0045db40(uVar6,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        else if (*(int *)(iVar11 + 8 + iVar4) == 2) {
          uVar6 = FUN_005ae390(local_54,&DAT_0069e130,*(undefined4 *)(iVar11 + 0x10 + iVar4));
          local_8._0_1_ = 7;
          FUN_0045db40(uVar6,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        else {
          local_40[0] = param_2._3_1_;
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar13 = &DAT_0069e12c;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar3 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar3 != '\0');
          FUN_004040f0(&DAT_0069e12c,~uVar9 - 1);
          local_8._0_1_ = 8;
          FUN_0045db40(local_40,0,0xffffffff);
          local_8 = (uint)local_8._1_3_ << 8;
        }
        FUN_004040a0(1);
        iVar12 = (int)local_44 + 1;
        iVar11 = iVar11 + 0x18;
        local_44 = (char *)iVar12;
        iVar4 = FUN_00509a00();
        param_1 = local_1c;
      } while (iVar12 < iVar4);
    }
    local_40[0] = param_2._3_1_;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar13 = &DAT_0069e128;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_0069e128,~uVar9 - 1);
    local_8._0_1_ = 9;
    FUN_0045db40(local_40,0,0xffffffff);
    local_8._0_1_ = 0;
    FUN_004040a0(1);
    FUN_00515db0();
    iVar11 = FUN_004337e0();
    if (iVar11 != 0) {
      puVar5 = &DAT_0064a3b4;
      if ((undefined1 *)param_1[0x1c] != (undefined1 *)0x0) {
        puVar5 = (undefined1 *)param_1[0x1c];
      }
      puVar7 = (undefined1 *)param_1[0x18];
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      pcVar13 = local_2c;
      if (local_2c == (char *)0x0) {
        pcVar13 = "";
      }
      FUN_0060a613(param_1,puVar7,puVar5);
      uVar6 = FUN_0060b060();
      uVar6 = FUN_005ae390(local_54,s_Trying_to_call_script_event___s__0069e0f4,pcVar13,uVar6);
      local_8._0_1_ = 10;
      FUN_005aff00(uVar6);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_8 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_1[6] == 0) {
    local_40[0] = param_2._3_1_;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar13 = s_Not_in_sublevel_0069e0e4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_Not_in_sublevel_0069e0e4,~uVar9 - 1);
    local_8 = 0xb;
    FUN_00505280(param_1,param_2,local_40);
    local_8 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = local_10;
    return 0;
  }
  FUN_004042e0(&local_20);
  local_8 = 0xc;
  if (local_20 == (int *)0x0) {
    FUN_00409810(&DAT_006b3f70,&local_16);
    local_8._0_1_ = 0xd;
    pcVar8 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_74);
    (*pcVar8)();
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_004040a0(1);
  }
  local_5c = local_20[0x107];
  if (local_5c == 0) {
    local_40[0] = param_2._3_1_;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar13 = s_No_script_unit_in_sublevel_0069e0c8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_No_script_unit_in_sublevel_0069e0c8,~uVar9 - 1);
    local_8._0_1_ = 0xe;
    FUN_00505280(param_1,param_2,local_40);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_004040a0(1);
    local_8 = 0xffffffff;
    if (local_20 != (int *)0x0) {
      FUN_004098d0();
      ExceptionList = local_10;
      return 0;
    }
  }
  else {
    iVar11 = FUN_00504670();
    local_64 = CONCAT44(iVar11,(undefined4)local_64);
    if (iVar11 == 0) {
      local_40[0] = param_2._3_1_;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar13 = s_No_script_object_attached_0069e0ac;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(s_No_script_object_attached_0069e0ac,~uVar9 - 1);
      local_8._0_1_ = 0xf;
      FUN_00505280(param_1,param_2,local_40);
      local_8 = CONCAT31(local_8._1_3_,0xc);
      FUN_004040a0(1);
      local_8 = 0xffffffff;
      if (local_20 != (int *)0x0) {
        FUN_004098d0();
        ExceptionList = local_10;
        return 0;
      }
    }
    else {
      FUN_00515db0();
      iVar11 = FUN_004337e0();
      if (iVar11 != 0) {
        puVar5 = &DAT_0064a3b4;
        if ((undefined1 *)param_1[0x1c] != (undefined1 *)0x0) {
          puVar5 = (undefined1 *)param_1[0x1c];
        }
        puVar7 = (undefined1 *)param_1[0x18];
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        puVar14 = *(undefined1 **)(param_2 + 4);
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &DAT_0064a3b4;
        }
        FUN_0060a613(param_1,puVar7,puVar5);
        uVar6 = FUN_0060b060();
        uVar6 = FUN_005ae390(local_54,s_Calling_script_event___s__for__s_0069e080,puVar14,uVar6);
        local_8._0_1_ = 0x10;
        FUN_005aff00(uVar6);
        local_8 = CONCAT31(local_8._1_3_,0xc);
        FUN_004040a0(1);
      }
      local_8 = CONCAT31(local_8._1_3_,0x11);
      local_44 = (char *)(**(code **)(*param_1 + 0x50))();
      local_30[0] = param_2._3_1_;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar13 = local_44;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar3 = FUN_00401940(uVar9,1);
      if (cVar3 != '\0') {
        pcVar13 = local_44;
        pcVar15 = local_2c;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar15 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar15 = pcVar15 + 1;
        }
        FUN_00404190(uVar9);
        param_1 = local_1c;
      }
      local_8._0_1_ = 0x12;
      iVar11 = FUN_005e6480(local_30,param_2);
      local_8 = CONCAT31(local_8._1_3_,0x11);
      FUN_004040a0(1);
      if (iVar11 != 0) {
        local_8 = 0x17;
        FUN_005e6460(local_64._4_4_,iVar11,param_3);
        local_8 = 0xc;
        iVar4 = FUN_00515db0();
        iVar11 = *(int *)(iVar4 + 100);
        if (iVar11 == -0x80000000) {
          puVar5 = *(undefined1 **)(iVar4 + 0x18);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_0064a3b4;
          }
          iVar11 = FUN_0060af10(puVar5);
          *(int *)(iVar4 + 100) = iVar11;
        }
        if (iVar11 != 0) {
          uVar6 = FUN_005ae390(local_54,s_Event_successfully_fired__0069e050);
          local_8 = CONCAT31(local_8._1_3_,0x21);
          FUN_005aff00(uVar6);
          if (local_50 != 0) {
            cVar3 = *(char *)(local_50 + -1);
            if ((cVar3 == '\0') || (cVar3 == -1)) {
              FUN_005fe5f0((char *)(local_50 + -1));
            }
            else {
              *(char *)(local_50 + -1) = cVar3 + -1;
            }
          }
        }
        local_8 = 0xffffffff;
        if (local_20 == (int *)0x0) {
          ExceptionList = local_10;
          return 1;
        }
        iVar11 = local_20[5];
        local_20[5] = iVar11 + -1;
        if (iVar11 + -1 != 0) {
          ExceptionList = local_10;
          return 1;
        }
        FUN_005abfc0(0);
        ExceptionList = local_10;
        return 1;
      }
      local_30[0] = param_2._3_1_;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar13 = s_invalid_eventname_0069e06c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      uVar9 = ~uVar9 - 1;
      cVar3 = FUN_00401940(uVar9,1);
      if (cVar3 != '\0') {
        pcVar13 = s_invalid_eventname_0069e06c;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)local_2c = *(undefined4 *)pcVar13;
          pcVar13 = pcVar13 + 4;
          local_2c = local_2c + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *local_2c = *pcVar13;
          pcVar13 = pcVar13 + 1;
          local_2c = local_2c + 1;
        }
        FUN_00404190(uVar9);
        param_1 = local_1c;
      }
      local_8._0_1_ = 0x13;
      FUN_00505280(param_1,param_2,local_30);
      local_8 = CONCAT31(local_8._1_3_,0x11);
      FUN_004040a0(1);
      local_8 = 0xffffffff;
      if (local_20 != (int *)0x0) {
        FUN_004098d0();
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

