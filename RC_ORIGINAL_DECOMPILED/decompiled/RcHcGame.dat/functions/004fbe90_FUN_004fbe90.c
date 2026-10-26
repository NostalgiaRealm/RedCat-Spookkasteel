/*
 * FUN_004fbe90 at 004fbe90
 * undefined FUN_004fbe90(void)
 * Address ranges: 004fbe90-004fc353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004fbe90(int param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *local_4c;
  char cStack_37;
  char local_36;
  char acStack_35 [5];
  undefined1 *local_30;
  char local_2c [16];
  char acStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00635488;
  pvStack_c = ExceptionList;
  local_4c = (char *)0x7f3;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_30 = (undefined1 *)&local_4c;
  local_4._0_1_ = 1;
  local_4c = param_2;
  if (param_2 != (char *)0x0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  cVar1 = FUN_004fbca0();
  if (cVar1 == '\0') {
    local_4c = (char *)0x0;
    local_2c[0] = (char)param_2;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_4c = (char *)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    local_4c = local_2c;
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_GetBitmapHasBeenAdded__a_Bitmap___0069d608,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x7f6);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  if (param_2 == (char *)0x0) {
    local_4c = &local_36;
    FUN_00409810(&DAT_006b3f70);
    local_4c = local_2c;
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  local_4c = &cStack_37;
  local_30 = (undefined1 *)(param_1 + 0x1c);
  pcVar3 = (char *)FUN_004f2620(local_30);
  if (cStack_37 == '\0') {
    local_4c = acStack_35;
    FUN_00409810(&DAT_006b3f70);
    local_4c = acStack_1c;
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798,0x78);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  local_4c = pcVar3;
  FUN_004fdd60();
  if (param_2 == (char *)0x0) {
    local_4c = acStack_35;
    FUN_00409810(&DAT_006b3f70);
    local_4c = acStack_1c;
    local_4._0_1_ = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  local_4c = (char *)0x4fc066;
  uVar4 = FUN_00556560();
  local_4c = &cStack_37;
  FUN_004fd890(uVar4);
  if (cStack_37 == '\0') {
    local_4c = (char *)0x0;
    local_2c[0] = (char)param_2;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar3 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_4c = (char *)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    local_4c = local_2c;
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s_this_>m_Bitmaps_Exists__a_Bitmap_0069d5d8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x7fa);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  if (param_2 == (char *)0x0) {
    local_4c = acStack_35;
    FUN_00409810(&DAT_006b3f70);
    local_4c = acStack_1c;
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  local_4c = (char *)0x4fc138;
  uVar4 = FUN_00556560();
  local_4c = &cStack_37;
  pcVar3 = (char *)FUN_004fd890(uVar4);
  if (cStack_37 == '\0') {
    local_4c = &local_36;
    FUN_00409810(&DAT_006b3f70);
    local_4c = local_2c;
    local_4._0_1_ = 8;
    pcVar2 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798,0x78);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  local_4c = pcVar3;
  FUN_004fd6a0();
  if (param_2 == (char *)0x0) {
    local_4c = acStack_35;
    FUN_00409810(&DAT_006b3f70);
    local_4c = acStack_1c;
    local_4._0_1_ = 9;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_4c = &local_36;
    FUN_00409810(&DAT_006b3f70);
    local_4c = local_2c;
    local_4._0_1_ = 10;
    pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144);
    (*pcVar2)();
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  local_4c = (char *)0x4fc23b;
  local_4c = (char *)FUN_0050aa70();
  iVar5 = FUN_005ba5d0(uVar4);
  if (iVar5 == 0) {
    pcVar3 = "";
    if (*(char **)((int)local_30 + 4) != (char *)0x0) {
      pcVar3 = *(char **)((int)local_30 + 4);
    }
    if (param_2 == (char *)0x0) {
      local_4c = acStack_35;
      FUN_00409810(&DAT_006b3f70);
      local_4c = acStack_1c;
      local_4._0_1_ = 0xb;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar2)();
      local_4._0_1_ = 1;
      local_4c = (char *)0x1;
      FUN_004040a0();
    }
    local_4c = (char *)0x4fc2b4;
    iVar5 = FUN_00556560();
    puVar6 = *(undefined1 **)(iVar5 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    local_4c = pcVar3;
    uVar4 = FUN_005ae390(local_2c,s_Cannot_remove_bitmap__s_from_wor_0069d5b0,puVar6);
    local_4._0_1_ = 0xc;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x805,uVar4);
    local_4._0_1_ = 1;
    local_4c = (char *)0x1;
    FUN_004040a0();
    local_4 = (uint)local_4._1_3_ << 8;
    local_4c = (char *)0x4fc305;
    FUN_005ae770();
    local_4 = 0xffffffff;
    local_4c = (char *)0x4fc316;
    FUN_0057d310();
    uVar4 = 0;
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    local_4c = (char *)0x4fc328;
    FUN_005ae770();
    local_4 = 0xffffffff;
    if (param_2 != (char *)0x0) {
      local_4c = (char *)0x4fc33d;
      FUN_004098d0();
    }
    uVar4 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar4;
}

