/*
 * FUN_00560630 at 00560630
 * undefined FUN_00560630(void)
 * Address ranges: 00560630-00560b84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00560630(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  char local_33;
  undefined1 uStack_32;
  undefined1 auStack_31 [5];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063fa68;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x540);
  local_4._0_1_ = 1;
  if (*(char *)(param_1 + 0x194) != '\0') {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = s_Genesis_can_t_add_bitmaps_during_006a3670;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Genesis_can_t_add_bitmaps_during_006a3670,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s___m_InFrame_006a3664,s_D__Work_RCHorror_AdamSource_Adam_006a26f8
                                  ,0x544,local_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_33);
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  cVar1 = FUN_0050b2d0();
  if (cVar1 != '\0') {
    local_2c[0] = (undefined1)param_2;
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
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s___a_Bitmap_>GetIsAddedToEngine___006a3640,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x545,local_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_32);
    local_4._0_1_ = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  uVar3 = FUN_00556560();
  FUN_004fd890(uVar3,&local_33);
  if (local_33 != '\0') {
    local_2c[0] = (undefined1)param_2;
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
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s___m_Bitmaps_Exists__a_Bitmap_>Ge_006a3614,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x546,local_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_32);
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  FUN_0050b310(1);
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_32);
    local_4._0_1_ = 8;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  uVar3 = FUN_00556560();
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_00409810(&DAT_006b3f70,auStack_31);
    local_4._0_1_ = 9;
    pcVar2 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49,local_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  iVar4 = FUN_004fd890(uVar3,&local_33);
  if (local_33 != '\0') {
    FUN_00409810(&DAT_006b3f70,auStack_31);
    local_4._0_1_ = 10;
    pcVar2 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b,
                                  local_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  FUN_004fdb90(*(int *)(param_1 + 0x28) + iVar4 * 4,&param_2);
  if (param_2 == 0) {
    FUN_00409810(&DAT_006b3f70,auStack_31);
    local_4._0_1_ = 0xb;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_32);
    local_4._0_1_ = 0xc;
    pcVar2 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                  local_2c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x100);
  uVar5 = FUN_0050aa70();
  iVar4 = FUN_005bb870(uVar3,uVar5);
  if (iVar4 == 0) {
    if (param_2 == 0) {
      FUN_00409810(&DAT_006b3f70,auStack_31);
      local_4._0_1_ = 0xd;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar2)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    iVar4 = FUN_00556560();
    puVar6 = *(undefined1 **)(iVar4 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_2c,s_Cannot_add_bitmap__s_to_engine_006a35f4,puVar6);
    local_4._0_1_ = 0xe;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x54d,uVar3);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005ae770();
    local_4 = 0xffffffff;
    FUN_0057d310();
    ExceptionList = pvStack_c;
    return 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  local_4 = 0xffffffff;
  FUN_0057d310();
  ExceptionList = pvStack_c;
  return 1;
}

