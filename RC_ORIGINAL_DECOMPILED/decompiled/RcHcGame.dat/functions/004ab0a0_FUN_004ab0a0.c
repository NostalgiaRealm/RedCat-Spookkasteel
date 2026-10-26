/*
 * FUN_004ab0a0 at 004ab0a0
 * undefined FUN_004ab0a0(void)
 * Address ranges: 004ab0a0-004ab595
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e974 slot 1 for .?AVCAdamCommCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e974 slot 1 for
   .?AVCAdamCommCell@@. Original bytes unchanged; names and types still inferred. */

void __thiscall
FUN_004ab0a0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_55;
  float local_54;
  int local_50;
  undefined1 auStack_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dff8;
  local_c = ExceptionList;
  if ((char)param_1[0x1a] == '\0') {
    if (*(int *)(param_1[0x1b] + 0x1dc) != param_1[0x1d]) {
      return;
    }
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x1a) = 1;
    param_1[0x1c] = 0;
    param_1[0x14] = 1;
    (**(code **)(*param_1 + 0x18))(param_2,param_3,1,param_5);
    ExceptionList = local_c;
    return;
  }
  local_54 = (float)param_1[0x15];
  local_50 = *(undefined4 *)(param_1[0x1b] + 0x1d4);
  ExceptionList = &local_c;
  if (local_54 == -NAN) {
    ExceptionList = &local_c;
    FUN_00409810(&DAT_006b3f70,&local_55);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,local_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_50 = __ftol();
  if (local_50 == -1) {
    auStack_4c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_4c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  local_54 = (float)local_50 * 0.001;
  (**(code **)(*param_1 + 0x18))(param_2,param_3,0,param_5);
  switch(param_1[0x14]) {
  case 0:
    uVar4 = FUN_005ae390(auStack_2c,s_Invalid_state___CFS_NONE__00696000);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00695fbc,0x41,
                                  uVar4);
    (*pcVar3)();
    if (iStack_28 == 0) {
      ExceptionList = local_c;
      return;
    }
    pcVar6 = (char *)(iStack_28 + -1);
    cVar2 = *(char *)(iStack_28 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *pcVar6 = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
    goto LAB_004ab578;
  case 1:
    param_1[0x1c] = 0;
    if (*(int *)(param_1[0x1b] + 0x1b8) == 4) {
      param_1[0x14] = 2;
    }
    break;
  case 2:
    if (local_54 <= 0.0) {
      param_1[0x1c] = 0x3f800000;
    }
    else {
      if (param_3 == -1) {
        auStack_4c[0] = (undefined1)param_3;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4 = 3;
        pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_4c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      param_1[0x1c] = (int)(((float)param_3 * 0.001) / local_54 + (float)param_1[0x1c]);
    }
    if (1.0 <= (float)param_1[0x1c]) {
      param_1[0x1c] = 0x3f800000;
      param_1[0x14] = 3;
    }
    break;
  case 3:
    param_1[0x1c] = 0x3f800000;
    param_1[0x14] = 4;
    break;
  case 4:
    if (param_1[0x17] == -1) {
      param_1[0x17] = param_2;
    }
    if ((char)param_1[0x18] == '\0') {
      iVar1 = param_1[0x17];
      if ((param_2 == -1) || (iVar1 == -1)) {
        param_2 = 0;
      }
      else {
        if (param_2 < iVar1) {
          param_3._0_1_ = (undefined1)iVar1;
          auStack_4c[0] = (undefined1)param_3;
          FUN_004040a0(0);
          uVar5 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
          local_4 = 4;
          pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,
                                        s___AdamSource_AdamClock_h_0068e22c,0x7d,auStack_4c);
          (*pcVar3)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        param_2 = param_2 - iVar1;
      }
      if ((param_1[0x19] < param_2) && (cVar2 = FUN_00512060(), cVar2 != '\0')) {
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
    }
    else {
      param_1[0x14] = 5;
    }
    break;
  case 5:
    param_1[0x1c] = 0x3f800000;
    param_1[0x14] = 6;
    break;
  case 6:
    if (local_54 <= 0.0) {
      param_1[0x1c] = 0;
    }
    else {
      if (param_3 == -1) {
        auStack_4c[0] = (undefined1)param_3;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4 = 5;
        pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_4c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      param_1[0x1c] = (int)((float)param_1[0x1c] - ((float)param_3 * 0.001) / local_54);
    }
    if ((float)param_1[0x1c] <= 0.0) {
      param_1[0x1c] = 0;
      param_1[0x14] = 7;
    }
    break;
  case 7:
    param_1[0x1c] = 0;
    FUN_00513340(param_1[0x1d]);
    param_1[0xe] = 0;
    param_1[0xf] = -1;
    param_1[0x10] = 0x3f800000;
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined1 *)(param_1 + 0x16) = 1;
    param_1[0x14] = 8;
    break;
  case 8:
    break;
  default:
    uVar4 = FUN_005ae390(auStack_1c,s_Unknown_state___d_00695fec,param_1[0x14]);
    local_4 = 7;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00695fbc,0x97,
                                  uVar4);
    (*pcVar3)();
    if (iStack_18 == 0) {
      ExceptionList = local_c;
      return;
    }
    pcVar6 = (char *)(iStack_18 + -1);
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *pcVar6 = cVar2 + -1;
      ExceptionList = local_c;
      return;
    }
LAB_004ab578:
    FUN_005fe5f0(pcVar6);
  }
  ExceptionList = local_c;
  return;
}

