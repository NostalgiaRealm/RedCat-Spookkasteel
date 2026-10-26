/*
 * FUN_00560c30 at 00560c30
 * undefined FUN_00560c30(void)
 * Address ranges: 00560c30-005610b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00560c30(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  char local_37;
  undefined1 uStack_36;
  undefined1 auStack_35 [5];
  int local_30;
  undefined1 auStack_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063fb08;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x56c);
  local_4._0_1_ = 1;
  if (param_1 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_37);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  cVar1 = FUN_0050b2d0();
  if (cVar1 == '\0') {
    auStack_2c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_a_Bitmap_>GetIsAddedToEngine___006a36e4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x56f,auStack_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (param_1 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_36);
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  uVar3 = FUN_00556560();
  FUN_004fd890(uVar3,&local_37);
  if (local_37 == '\0') {
    auStack_2c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Bitmaps_Exists__a_Bitmap_>GetN_006a36bc,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x570,auStack_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (param_1 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_36);
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  FUN_0050b310(0);
  if (param_1 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_36);
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  uVar3 = FUN_00556560();
  uVar3 = FUN_004fd890(uVar3,&local_37);
  if (local_37 == '\0') {
    FUN_00409810(&DAT_006b3f70,auStack_35);
    local_4._0_1_ = 8;
    pcVar2 = (code *)FUN_005a07f0(s_exist_00695224,s___AdamSource_DaviSortedList_h_00690798,0x78,
                                  auStack_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  FUN_004fd6a0(uVar3);
  if (param_1 == 0) {
    FUN_00409810(&DAT_006b3f70,auStack_35);
    local_4._0_1_ = 9;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (*(int *)(local_30 + 0x100) == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_36);
    local_4._0_1_ = 10;
    pcVar2 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                  auStack_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  uVar3 = *(undefined4 *)(local_30 + 0x100);
  uVar4 = FUN_0050aa70();
  iVar5 = FUN_005bb8e0(uVar3,uVar4);
  if (iVar5 == 0) {
    if (param_1 == 0) {
      FUN_00409810(&DAT_006b3f70,auStack_35);
      local_4._0_1_ = 0xb;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar2)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    iVar5 = FUN_00556560();
    puVar6 = *(undefined1 **)(iVar5 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(auStack_2c,s_Cannot_remove_bitmap__s_from_eng_006a3698,puVar6);
    local_4._0_1_ = 0xc;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x579,uVar3);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005ae770();
    local_4 = 0xffffffff;
    if (param_1 != 0) {
      FUN_004098d0();
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return 1;
}

