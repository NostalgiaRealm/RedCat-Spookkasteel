/*
 * FUN_004df870 at 004df870
 * undefined FUN_004df870(void)
 * Address ranges: 004df870-004dfd07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f210 slot 2 for .?AVCAdamCommandTimer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f210 slot 2 for
   .?AVCAdamCommandTimer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004df870(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_41;
  int local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632450;
  local_c = ExceptionList;
  iVar5 = *(int *)(param_1 + 0xf8);
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x7c) != '\0') {
      ExceptionList = &local_c;
      FUN_004df790();
    }
  }
  else if (iVar5 == 1) {
    local_40 = *(int *)(param_1 + 300);
    bVar2 = true;
    ExceptionList = &local_c;
    if (local_40 != -1) {
      iVar5 = *(int *)(param_1 + 0x130);
      if (iVar5 == -1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x134) = 0x3f800000;
        *(int *)(param_1 + 0x130) = local_40 + param_2;
      }
      else if (iVar5 < param_2) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x134) = 0;
        bVar2 = false;
      }
      else if (local_40 < 1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x134) = 0;
      }
      else {
        param_2 = iVar5 - param_2;
        ExceptionList = &local_c;
        *(float *)(param_1 + 0x134) = (float)param_2 / (float)local_40;
      }
    }
    *(bool *)(param_1 + 0x138) = bVar2;
    if (!bVar2) {
      if (*(int *)(param_1 + 0x15c) != 0) {
        FUN_00505400(&DAT_006b95d8);
      }
      iVar5 = FUN_004df7d0(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x120));
      if ((iVar5 != -1) && (iVar5 < 0)) {
        local_3c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4 = 0;
        pcVar4 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                      s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_3c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      *(int *)(param_1 + 0x14c) = iVar5;
      *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x158) = 1;
      iVar5 = FUN_004df7d0(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x11c));
      if ((iVar5 != -1) && (iVar5 < 0)) {
        local_3c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4 = 1;
        pcVar4 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                      s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_3c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      *(int *)(param_1 + 0x13c) = iVar5;
      *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x148) = 1;
      *(undefined4 *)(param_1 + 0xf8) = 2;
    }
  }
  else if (iVar5 == 2) {
    local_40 = *(int *)(param_1 + 0x14c);
    bVar2 = true;
    ExceptionList = &local_c;
    if (local_40 != -1) {
      iVar5 = *(int *)(param_1 + 0x150);
      if (iVar5 == -1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
        *(int *)(param_1 + 0x150) = local_40 + param_2;
      }
      else if (iVar5 < param_2) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x154) = 0;
        bVar2 = false;
      }
      else if (local_40 < 1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x154) = 0;
      }
      else {
        param_2 = iVar5 - param_2;
        ExceptionList = &local_c;
        *(float *)(param_1 + 0x154) = (float)param_2 / (float)local_40;
      }
    }
    *(bool *)(param_1 + 0x158) = bVar2;
    if (bVar2) {
      local_40 = *(int *)(param_1 + 0x13c);
      bVar2 = true;
      if (local_40 != -1) {
        iVar5 = *(int *)(param_1 + 0x140);
        if (iVar5 == -1) {
          *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
          *(int *)(param_1 + 0x140) = local_40 + iVar3;
        }
        else if (iVar5 < iVar3) {
          *(undefined4 *)(param_1 + 0x144) = 0;
          bVar2 = false;
        }
        else if (local_40 < 1) {
          *(undefined4 *)(param_1 + 0x144) = 0;
        }
        else {
          param_2 = iVar5 - iVar3;
          *(float *)(param_1 + 0x144) = (float)param_2 / (float)local_40;
        }
      }
      *(bool *)(param_1 + 0x148) = bVar2;
      if (!bVar2) {
        if (*(int *)(param_1 + 0x160) != 0) {
          FUN_00505400(&DAT_006b9638);
        }
        if (*(int *)(param_1 + 0x164) != 0) {
          local_40 = FUN_0060a4a0();
          local_40 = local_40 % 10000;
          if ((float)local_40 * 0.0001 <= *(float *)(param_1 + 0x124)) {
            FUN_00505400(&DAT_006b9628);
          }
        }
        if (*(int *)(param_1 + 0x168) != 0) {
          local_40 = FUN_0060a4a0();
          local_40 = local_40 % 10000;
          if ((float)local_40 * 0.0001 <= *(float *)(param_1 + 0x128)) {
            FUN_00505400(&DAT_006b9608);
          }
        }
        iVar5 = FUN_004df7d0(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x11c));
        if ((iVar5 != -1) && (iVar5 < 0)) {
          FUN_00409810(&DAT_006b3f70,&local_41);
          local_4 = 2;
          pcVar4 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                        s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_1c);
          (*pcVar4)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        *(int *)(param_1 + 0x13c) = iVar5;
        *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
        *(undefined1 *)(param_1 + 0x148) = 1;
        *(undefined4 *)(param_1 + 0xf8) = 2;
      }
    }
    else {
      if (*(int *)(param_1 + 0x16c) != 0) {
        FUN_00505400(&DAT_006b95c8);
      }
      FUN_00502350(0);
      FUN_004df860();
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_00409810(s_unknown_state_0069a178,&param_2);
    local_4 = 3;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069a0b8,0x117
                                  ,local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  ExceptionList = local_c;
  return;
}

