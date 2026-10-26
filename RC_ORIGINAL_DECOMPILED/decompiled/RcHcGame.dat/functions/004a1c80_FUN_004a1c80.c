/*
 * FUN_004a1c80 at 004a1c80
 * undefined FUN_004a1c80(void)
 * Address ranges: 004a1c80-004a204f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004a1c80(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char local_36;
  undefined1 local_35;
  int iStack_34;
  void *pvStack_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d053;
  pvStack_c = ExceptionList;
  local_2c[0] = (char)param_1;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  FUN_005b1140(param_1,0,0,local_2c,0);
  FUN_004a1b40();
  iVar5 = DAT_006b8f60;
  if (*(int *)(DAT_006b8f60 + 0x14) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_35);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  if ((*(int *)(iVar5 + 4) == 0) || ((*(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) & 0xfffffffcU) == 0)
     ) {
    local_36 = '\0';
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x10);
    iStack_34 = 0;
    iVar6 = FUN_0044e4c0();
    local_36 = '\0';
    iVar6 = iVar6 + -1;
    do {
      iVar8 = (iStack_34 + iVar6) / 2;
      iVar4 = (**(code **)(iVar5 + 0x14))(local_2c,*(int *)(iVar5 + 4) + iVar8 * 4);
      if (iVar4 == 1) {
        local_36 = '\x01';
LAB_004a1dd4:
        iVar5 = *(int *)(*(int *)(DAT_006b8f60 + 4) + iVar8 * 4);
        goto LAB_004a2028;
      }
      if (iVar4 == (-(uint)(iVar2 != 0) & 0xfffffffe) + 2) {
        iStack_34 = iVar8 + 1;
      }
      else {
        iVar6 = iVar8 + -1;
      }
      if (local_36 != '\0') goto LAB_004a1dd4;
    } while (iStack_34 <= iVar6);
  }
  pvStack_30 = operator_new(0x15c);
  local_4._0_1_ = 2;
  if (pvStack_30 == (void *)0x0) {
    iStack_34 = 0;
  }
  else {
    iStack_34 = FUN_004a2050(param_1);
  }
  local_4._0_1_ = 0;
  iVar5 = FUN_004a6d20(local_2c,&iStack_34);
  if (iVar5 != 1) {
    local_1c[0] = (char)param_1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_CompareActorSettingsByName__key__00695478,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069541c,0x6b,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar6 = DAT_006b8f60;
  iVar5 = iStack_34 + 0xd4;
  if (*(char *)(DAT_006b8f60 + 0x18) != '\0') {
    FUN_00409810(&DAT_006b3f70,&local_35);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar5 = FUN_004a7160(iVar5,&param_1);
  if ((char)param_1 != '\0') {
    FUN_00409810(&DAT_006b3f70,&local_35);
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b,
                                  local_1c);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_004f15f0(*(int *)(iVar6 + 4) + iVar5 * 4,&iStack_34);
  iVar6 = FUN_004a7160(local_2c,&local_36);
  if (local_36 == '\0') {
    local_1c[0] = (char)param_1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_exist_00695224,s_D__Work_RCHorror_AdamSource_Adam_0069541c,0x73,
                                  local_1c);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar5 = iStack_34;
  if (*(int *)(*(int *)(DAT_006b8f60 + 4) + iVar6 * 4) != iStack_34) {
    local_1c[0] = (char)param_1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s___m_SettingsList___index____sett_00695450,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069541c,0x74,local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    iVar5 = iStack_34;
  }
LAB_004a2028:
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return iVar5;
}

