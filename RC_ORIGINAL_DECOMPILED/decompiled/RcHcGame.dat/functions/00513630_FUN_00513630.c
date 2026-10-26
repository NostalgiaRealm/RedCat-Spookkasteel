/*
 * FUN_00513630 at 00513630
 * undefined FUN_00513630(void)
 * Address ranges: 00513630-00513c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00513630(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_52;
  undefined1 local_51;
  int local_50;
  int local_4c;
  float local_48;
  int local_44;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637868;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x3f1);
  local_4 = 0;
  if (*(char *)(param_1 + 0x1db) == '\0') {
    *(undefined1 *)(param_1 + 0x1db) = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x1b8)) {
  case 0:
    uVar5 = FUN_005ae390(local_1c,s_Communicator_is_in_an_illegal_st_0069f044);
    local_4._0_1_ = 1;
    pcVar6 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x401
                                  ,uVar5);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    break;
  case 1:
    *(float *)(param_1 + 0x1d0) = -*(float *)(param_1 + 0x21c);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      local_3c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 2;
      pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_0054ffe0(&local_50,&DAT_006ba128,0,0x40000000,0,0);
    if (local_50 != 0) {
      iVar4 = *(int *)(local_50 + 0x14) + -1;
      *(int *)(local_50 + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0(0);
      }
      local_50 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x1cc);
    *(undefined1 *)(param_1 + 0x1da) = 1;
    if ((iVar4 < 0) || (iVar3 = FUN_0044e4c0(), iVar3 <= iVar4)) {
      local_3c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 3;
      pcVar6 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_3c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_0050e830(0);
    *(undefined4 *)(param_1 + 0x1b8) = 2;
    break;
  case 2:
    local_48 = *(float *)(param_1 + 0x1c4);
    if (local_48 == -NAN) {
      FUN_00409810(&DAT_006b3f70,&local_52);
      local_4._0_1_ = 4;
      pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_3c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_44 = __ftol();
    if (local_44 == -1) {
      FUN_00409810(&DAT_006b3f70,&local_51);
      local_4._0_1_ = 5;
      pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_2c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    fVar1 = ((float)(int)local_48 / (float)local_44) * *(float *)(param_1 + 0x21c) -
            *(float *)(param_1 + 0x21c);
    *(float *)(param_1 + 0x1d0) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + param_3;
    }
    else {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      *(undefined4 *)(param_1 + 0x1b8) = 3;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 4;
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    if (*(char *)(param_1 + 0x1d9) != '\0') {
      *(undefined4 *)(param_1 + 0x1b8) = 5;
    }
    goto LAB_00513977;
  case 5:
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      local_3c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 6;
      pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    FUN_0054ffe0(&local_4c,&DAT_006ba0f8,0,0x40000000,0,0);
    if (local_4c != 0) {
      iVar4 = *(int *)(local_4c + 0x14) + -1;
      *(int *)(local_4c + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0(0);
      }
      local_4c = 0;
    }
    FUN_004ad440();
    uVar5 = FUN_00514b00(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x164),
                         *(undefined4 *)(param_1 + 0x160));
    FUN_004aa840(uVar5,*(undefined4 *)(param_1 + 0x164));
    *(undefined4 *)(param_1 + 0x164) = uVar5;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
    FUN_00513420();
    *(undefined4 *)(param_1 + 0x1b8) = 6;
    break;
  case 6:
    local_44 = *(int *)(param_1 + 0x1c4);
    if (local_44 == -1) {
      FUN_00409810(&DAT_006b3f70,&local_51);
      local_4._0_1_ = 7;
      pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_2c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_48 = (float)__ftol();
    if (local_48 == -NAN) {
      FUN_00409810(&DAT_006b3f70,&local_52);
      local_4._0_1_ = 8;
      pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_3c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    fVar1 = -(((float)local_44 / (float)(int)local_48) * *(float *)(param_1 + 0x21c));
    *(float *)(param_1 + 0x1d0) = fVar1;
    local_48 = -*(float *)(param_1 + 0x21c);
    if (fVar1 <= local_48) {
      *(undefined4 *)(param_1 + 0x1b8) = 7;
      *(float *)(param_1 + 0x1d0) = local_48;
      break;
    }
LAB_00513977:
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + param_3;
    break;
  case 7:
    *(float *)(param_1 + 0x1d0) = -*(float *)(param_1 + 0x21c);
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_00512090();
    *(undefined1 *)(param_1 + 0x1da) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 8;
    break;
  case 8:
    *(undefined1 *)(param_1 + 0x1d9) = 0;
    if (*(char *)(param_1 + 0x1d8) != '\0') {
      cVar2 = FUN_004ad3e0(param_2);
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x1b8) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x1d8) = 0;
      }
    }
  }
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(param_2,param_3);
  pvStack_c = (void *)0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_14;
  return;
}

