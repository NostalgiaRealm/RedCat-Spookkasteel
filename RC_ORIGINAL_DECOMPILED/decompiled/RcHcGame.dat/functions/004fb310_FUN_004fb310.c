/*
 * FUN_004fb310 at 004fb310
 * undefined FUN_004fb310(void)
 * Address ranges: 004fb310-004fb93a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004fb310(undefined1 *param_1,undefined1 **param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  char *pcVar9;
  undefined1 **ppuStack_50;
  char local_3b;
  undefined1 auStack_3a [2];
  undefined1 *apuStack_38 [2];
  undefined1 *local_30;
  undefined1 local_2c [16];
  undefined1 *apuStack_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006353a8;
  pvStack_c = ExceptionList;
  ppuStack_50 = (undefined1 **)0x7a4;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_30 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  local_4._0_1_ = 1;
  ppuStack_50 = (undefined1 **)0x4fb357;
  FUN_00515ff0();
  ppuStack_50 = (undefined1 **)0x4fb35e;
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    if (param_2 == (undefined1 **)0x0) {
      ppuStack_50 = (undefined1 **)&local_3b;
      FUN_00409810(&DAT_006b3f70);
      ppuStack_50 = (undefined1 **)local_2c;
      local_4._0_1_ = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      local_4._0_1_ = 1;
      ppuStack_50 = (undefined1 **)0x1;
      FUN_004040a0();
    }
    ppuStack_50 = (undefined1 **)0x4fb3bd;
    iVar3 = FUN_00556560();
    ppuStack_50 = *(undefined1 ***)(iVar3 + 4);
    if (ppuStack_50 == (undefined1 **)0x0) {
      ppuStack_50 = (undefined1 **)&DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(apuStack_1c,s_CAdamSubLevel__AddBitmap___s___0069d574);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    ppuStack_50 = (undefined1 **)0x4fb405;
    iVar3 = FUN_0055b280();
  }
  if (*(char *)(iVar3 + 0x194) != '\0') {
    ppuStack_50 = (undefined1 **)0x0;
    local_2c[0] = param_2._0_1_;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    ppuStack_50 = (undefined1 **)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    ppuStack_50 = (undefined1 **)local_2c;
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s___CAdamEngine__Instance___GetInF_0069d54c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x7a8);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  apuStack_38[0] = (undefined1 *)&ppuStack_50;
  ppuStack_50 = param_2;
  FUN_005844b0();
  cVar2 = FUN_004fbca0();
  if (cVar2 != '\0') {
    ppuStack_50 = (undefined1 **)0x0;
    local_2c[0] = param_2._0_1_;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    ppuStack_50 = (undefined1 **)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    ppuStack_50 = (undefined1 **)local_2c;
    local_4._0_1_ = 5;
    pcVar4 = (code *)FUN_005a07f0(s___GetBitmapHasBeenAdded__a_Bitma_0069d528,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x7ab);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = (undefined1 **)0x4fb501;
  apuStack_38[0] = param_1;
  FUN_005844b0();
  local_4._0_1_ = 6;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 6;
  if (param_2 == (undefined1 **)0x0) {
    ppuStack_50 = (undefined1 **)auStack_3a;
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = (undefined1 **)local_2c;
    local_4._0_1_ = 7;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar4)();
    local_4._0_1_ = 6;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
    uVar1 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar1;
  ppuVar8 = param_2;
  if (*(char *)(param_2 + 0x12) != '\0') {
    ppuStack_50 = (undefined1 **)(auStack_3a + 1);
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = apuStack_1c;
    local_4._0_1_ = 8;
    pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49);
    (*pcVar4)();
    local_4._0_1_ = 6;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = (undefined1 **)&local_3b;
  iVar3 = FUN_004f2620(param_1 + 0x1c);
  if (local_3b != '\0') {
    ppuStack_50 = (undefined1 **)(auStack_3a + 1);
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = apuStack_1c;
    local_4._0_1_ = 9;
    pcVar4 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b);
    (*pcVar4)();
    local_4._0_1_ = 6;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = apuStack_38;
  FUN_004fdb90(ppuVar8[0xd] + iVar3 * 4);
  local_4._0_1_ = 1;
  ppuStack_50 = (undefined1 **)0x4fb621;
  FUN_0057d310();
  if (param_2 == (undefined1 **)0x0) {
    ppuStack_50 = (undefined1 **)(auStack_3a + 1);
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = apuStack_1c;
    local_4._0_1_ = 10;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = (undefined1 **)0x4fb678;
  uVar5 = FUN_00556560();
  puVar6 = local_30;
  ppuStack_50 = (undefined1 **)&local_3b;
  FUN_004fd890(uVar5);
  if (local_3b != '\0') {
    ppuStack_50 = (undefined1 **)0x0;
    local_2c[0] = param_2._0_1_;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    ppuStack_50 = (undefined1 **)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    ppuStack_50 = (undefined1 **)local_2c;
    local_4._0_1_ = 0xb;
    pcVar4 = (code *)FUN_005a07f0(s___this_>m_Bitmaps_Exists__a_Bitm_0069d4f8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x7af);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  if (param_2 == (undefined1 **)0x0) {
    ppuStack_50 = (undefined1 **)(auStack_3a + 1);
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = apuStack_1c;
    local_4._0_1_ = 0xc;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = (undefined1 **)0x4fb752;
  uVar5 = FUN_00556560();
  if (puVar6[0x3dc] != '\0') {
    ppuStack_50 = (undefined1 **)auStack_3a;
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = (undefined1 **)local_2c;
    local_4._0_1_ = 0xd;
    pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = (undefined1 **)&local_3b;
  iVar3 = FUN_004fd890(uVar5);
  if (local_3b != '\0') {
    ppuStack_50 = (undefined1 **)auStack_3a;
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = (undefined1 **)local_2c;
    local_4._0_1_ = 0xe;
    pcVar4 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = (undefined1 **)&param_2;
  FUN_004fdb90(*(int *)(puVar6 + 0x3c8) + iVar3 * 4);
  if (param_2 == (undefined1 **)0x0) {
    ppuStack_50 = (undefined1 **)(auStack_3a + 1);
    FUN_00409810(&DAT_006b3f70);
    ppuStack_50 = apuStack_1c;
    local_4._0_1_ = 0xf;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  ppuStack_50 = (undefined1 **)0x4fb862;
  ppuStack_50 = (undefined1 **)FUN_0050aa70();
  uVar5 = FUN_004fcb90();
  iVar3 = FUN_005ba560(uVar5);
  if (iVar3 == 0) {
    ppuVar8 = (undefined1 **)&DAT_0064a3b4;
    if (*(undefined1 ***)(param_1 + 0x20) != (undefined1 **)0x0) {
      ppuVar8 = *(undefined1 ***)(param_1 + 0x20);
    }
    ppuStack_50 = (undefined1 **)0x4fb892;
    FUN_00412de0();
    ppuStack_50 = (undefined1 **)0x4fb899;
    iVar3 = FUN_00556560();
    puVar6 = *(undefined1 **)(iVar3 + 4);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    ppuStack_50 = ppuVar8;
    uVar5 = FUN_005ae390(apuStack_1c,s_Cannot_add_bitmap__s_to_world__s_0069d4d4,puVar6);
    local_4._0_1_ = 0x10;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x7ba,uVar5);
    local_4._0_1_ = 1;
    ppuStack_50 = (undefined1 **)0x1;
    FUN_004040a0();
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_50 = (undefined1 **)0x4fb8ec;
    FUN_005ae770();
    local_4 = 0xffffffff;
    ppuStack_50 = (undefined1 **)0x4fb8fd;
    FUN_0057d310();
    uVar5 = 0;
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_50 = (undefined1 **)0x4fb90f;
    FUN_005ae770();
    local_4 = 0xffffffff;
    if (param_2 != (undefined1 **)0x0) {
      ppuStack_50 = (undefined1 **)0x4fb924;
      FUN_004098d0();
    }
    uVar5 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar5;
}

